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
    led::setup();
    btn::setup<BTN_TYPE>();

    const auto f_aux = 1000;    // 1 kHz
    const auto psc = 1000;
    const auto arr = aux::clock() / ((psc + 1) * f_aux) - 1;

    aux::setup(psc, arr);
    aux::enable_update_interrupt();
    interrupt::set<TIMER_ISR>();
    interrupt::enable();

    for (;;)
    {
        if (btn::read())
            led::toggle();
    }
}

