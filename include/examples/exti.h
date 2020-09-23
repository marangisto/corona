#include <button.h>

using btn = input_t<BTN>;
using led = output_t<LED>;

template<> void handler<BTN_ISR>()
{
    if (btn::interrupt_pending())
        btn::clear_interrupt();
    led::toggle();
}

int main()
{
    led::setup();
    btn::setup<BTN_TYPE>();
    btn::enable_interrupt<rising_edge>();
    interrupt::set<BTN_ISR>();
    interrupt::enable();
    for (;;) ;
}

