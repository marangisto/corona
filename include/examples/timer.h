#include <timer.h>

using led = output_t<LED>;
using tim = tim_t<TIMER_NO>;

template<> void handler<TIMER_ISR>()
{
    tim::clear_update_interrupt_flag();
    led::toggle();
}

int main()
{
    led::setup();

    // f_tim = f_sysclock / ((psc + 1) (arr + 1))

    tim::setup(sys_clock::freq() / 10000, 9999);
    tim::enable_update_interrupt();
    interrupt::set<TIMER_ISR>();
    interrupt::enable();

    for (;;);
}

