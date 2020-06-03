#include <board.h>
#include <timer.h>
#include <button.h>

using aux = tim_t<3>;
using btn =  board::btn1;
using led = board::led1;

template<> void handler<interrupt::TIM3>()
{
    aux::clear_update_interrupt_flag();
    btn::update();
}

int main()
{
    btn::setup<board::btn_type>();
    aux::setup(sys_clock::freq() / 1000000 - 1, 1000 - 1);
    aux::enable_update_interrupt();
    led::setup();

    interrupt::set<interrupt::TIM3>();
    interrupt::enable();

    for (;;)
    {
        if (btn::read())
            led::toggle();
    }
}

