#include <button.h>
#include <timer.h>

using aux = tim_t<TIMER_NO>;
using btn = button_t<BTN>;
using led = output_t<LED>;

template<> void handler<TIMER_ISR>()
{
    aux::clear_update_interrupt_flag();
    btn::update();
}

int main()
{
    btn::setup<BTN_TYPE>();
    aux::setup(sys_clock::freq() / 1000000 - 1, 1000 - 1);
    aux::enable_update_interrupt();
    led::setup();

    interrupt::set<TIMER_ISR>();
    interrupt::enable();

    for (;;)
    {
        if (btn::read())
            led::toggle();
    }
}

