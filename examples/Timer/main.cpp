#include <board.h>
#include <timer.h>

using led = board::led1;
using tim = tim_t<3>;

template<> void handler<interrupt::TIM3>()
{
    tim::clear_update_interrupt_flag();
    led::toggle();
}

int main()
{
    led::setup();

    tim::setup(sys_clock::freq() / 10000, 9999);
    tim::enable_update_interrupt();
    interrupt::set<interrupt::TIM3>();
    interrupt::enable();

    for (;;);
}

