#include "../board.h"
#include <timer.h>

using led = output_t<LED>;
using out = output_t<PROBE>;
using tim = tim_t<TIMER_NO>;
using tx = output_t<PB9>;
using rx = input_t<PB8>;

template<> void handler<TIMER_ISR>()
{
    tim::clear_update_interrupt_flag();
    led::toggle();
    out::toggle();
}

int main()
{
    led::setup();
    out::setup();

    // f_tim = f_sysclock / ((psc + 1) (arr + 1))

    const auto t = 1;       // period in seconds
    const auto arr = 9999;  // counter limit
    const auto pre = t * tim::clock() / (arr + 1) - 1;

    tim::setup(pre, arr);
    tim::enable_update_interrupt();
    interrupt::set<TIMER_ISR>();
    interrupt::enable();

    tx::setup();
    rx::setup();

    for (;;)
    {
        tx::toggle();
        sys_tick::delay_us(10);
    }
}

