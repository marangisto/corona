#include <timer.h>

using probe = output_t<PROBE>;
using tim = tim_t<TIMER_NO>;

void /* inline */ routine() // uncomment to compare
{
    probe::toggle();
}

template<> void handler<TIMER_ISR>()
{
    // N.B. deliberately not clearing interrupt flag!
    routine();
}

int main()
{
    probe::setup();
    tim::setup(0, 1);
    tim::enable_update_interrupt();
    interrupt::set<TIMER_ISR>();
    interrupt::enable();
    for (;;);
}

