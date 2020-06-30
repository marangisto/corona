#include <board.h>

using led = board::led1;
//using btn = input_t<PC13>;
using btn = input_t<PA0>;

//template<> void handler<interrupt::EXTI15_10>()
//template<> void handler<interrupt::EXTI4_15>()
//template<> void handler<interrupt::EXTI0_1>()
template<> void handler<interrupt::EXTI0>()
{
    if (btn::interrupt_pending())
        btn::clear_interrupt();
    led::toggle();
}

int main()
{
    led::setup();
    btn::setup<board::btn_type>();
    btn::enable_interrupt<rising_edge>();
//    interrupt::set<interrupt::EXTI15_10>();
//    interrupt::set<interrupt::EXTI4_15>();
//    interrupt::set<interrupt::EXTI0_1>();
    interrupt::set<interrupt::EXTI0>();
    for (;;) ;
}

