#include "../board.h"
#include <timer.h>

using led = output_t<LED>;
//using out = output_t<PROBE>;
using out = output_t<PB1>;
using master = tim_t<3>;
using slave = tim_t<4>;

template<> void handler<interrupt::TIM3>()
{
    master::clear_update_interrupt_flag();
    slave::set_count(0);
    out::set();
    slave::clear_update_interrupt_flag();
    slave::enable_update_interrupt();
}

template<> void handler<interrupt::TIM4>()
{
    out::clear();
    slave::clear_update_interrupt_flag();
    slave::disable_update_interrupt();
}

int main()
{
    led::setup();
    out::setup();

    // f_tim = f_clock / ((psc + 1) (arr + 1))
    // arr = t_us * f_clock / (1e6 * (p + 1) - 1

    const auto t1 = 10;     // period in micro-seconds
    const auto pre1 = 0;    // prescaler
    const auto arr1 = t1 * (master::clock() / 1000000) / (pre1 + 1) - 1;
    master::setup(pre1, arr1);
    master::enable_update_interrupt();
    interrupt::set<interrupt::TIM3>();

    const auto t2 = 1;      // period in micro-seconds
    const auto pre2 = 0;    // prescaler
    const auto arr2 = t2 * (master::clock() / 1000000) / (pre2 + 1) - 1;
    slave::setup(pre2, arr2);
    interrupt::set<interrupt::TIM4>();

    interrupt::enable();

    for (;;)
    {
        led::toggle();
        sys_tick::delay_ms(1000);
    }
}

