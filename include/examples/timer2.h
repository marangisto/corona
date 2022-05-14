#include <timer.h>
#include <button.h>

using btn = button_t<BTN>;
using led = output_t<LED>;
using out = output_t<PROBE>;
using tim = tim_t<14>;
using aux = tim_t<15>;

template<> void handler<interrupt::TIM14>()
{
    tim::clear_update_interrupt_flag();
    led::toggle();
    out::toggle();
}

template<> void handler<interrupt::TIM15>()
{
    aux::clear_update_interrupt_flag();
    btn::update();
}

int main()
{
    btn::setup<BTN_TYPE>();
    led::setup();
    out::setup();

    tim::setup(1.0);
    tim::enable_update_interrupt();
    interrupt::set<interrupt::TIM14>();

    aux::setup(1e-3);   // 1kHz
    aux::enable_update_interrupt();
    interrupt::set<interrupt::TIM15>();

    interrupt::enable();

    const auto arr1 = tim::arr();
    const auto arr2 = (arr1 + 1) / 4 - 1;

    for (;;)
    {
        static bool flag = false;

        if (btn::read())
        {
            tim::set_auto_reload_value(flag ? arr1 : arr2);
            flag = !flag;
        }
    }
}
