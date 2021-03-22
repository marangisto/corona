#include "../board.h"
#include <hrtim.h>
#include <timer.h>

using led = output_t<LED>;
using out = output_t<PD7>;
using tim = tim_t<TIMER_NO>;

using hrtim = hrtim_t;
using tima = hrtim::tim<TIMA>;
using timb = hrtim::tim<TIMB>;
using timc = hrtim::tim<TIMC>;

template<> void handler<TIMER_ISR>()
{
    tim::clear_update_interrupt_flag();
    out::toggle();
    hrtim::reset(TIMA | (out::read() ? TIMB : TIMC));
}

int main()
{
    led::setup();
    out::setup();

    const auto fc = sys_clock::freq() / 1000000;
    const auto delay = 5000 * fc / 1000; // nano-seconds
    const auto pulse = 2500 * fc / 1000; // nano-seconds

    hrtim::setup();

    tima::setup<single_shot>(pulse, 1);
    tima::setup<CH1, PC6>();
    tima::set<CH1>(CMP1);
    tima::rst<CH1>(PER);

    timb::setup<single_shot>(pulse + delay, delay);
    timb::setup<CH1, PC8>();
    timb::set<CH1>(CMP1);
    timb::rst<CH1>(PER);

    timc::setup<single_shot>(pulse + delay, delay);
    timc::setup<CH1, PA9>();
    timc::set<CH1>(CMP1);
    timc::rst<CH1>(PER);

    const auto t = 20;  // period in us
    const auto c = tim::clock() / 1000000;
    const auto pre = t * c / 65536;
    const auto arr = t * c / (pre + 1) - 1;

    tim::setup(pre, arr);
    tim::enable_update_interrupt();
    interrupt::set<TIMER_ISR>();
    interrupt::enable();

    for (;;)
    {
        led::toggle();
        sys_tick::delay_ms(250);
    }
}

