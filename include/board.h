#pragma once

#include <corona.h>
#include <button.h>
#include <usart.h>

#if defined(STM32F0_DISCO)
struct board
{
    using led1 = output_t<PC9>;
    using led2 = output_t<PC8>;
    using btn1 = button_t<PA0>;
    static constexpr input_type_t btn_type = pull_down;
    using probe = output_t<PA8>;
    using serial = usart_t<1, PB6, PB7>;
    static constexpr interrupt::interrupt_t serial_interrupt = interrupt::USART1;
};
#endif

#if defined(NUCLEO_F072RB)
struct board
{
    using led1 = output_t<PA5>;
    using btn1 = button_t<PC13>;
    static constexpr input_type_t btn_type = pull_up;
    using probe = output_t<PA8>;
    using serial = usart_t<2, PA2, PA3>;
    static constexpr interrupt::interrupt_t serial_interrupt = interrupt::USART2;
};
#endif

#if defined(NUCLEO_F207ZG)
struct board
{
    using led1 = output_t<PB0>;
    using led2 = output_t<PB7>;
    using led3 = output_t<PB14>;
    using btn1 = button_t<PC13>;
    static constexpr input_type_t btn_type = pull_down;
    using probe = output_t<PE13>;
    using serial = usart_t<3, PD8, PD9>;
    static constexpr interrupt::interrupt_t serial_interrupt = interrupt::USART3;
};
#endif

#if defined(NUCLEO_F303RE)
struct board
{
    using led1 = output_t<PA5>;
    using btn1 = button_t<PC13>;
    static constexpr input_type_t btn_type = pull_up;
    using probe = output_t<PA8>;
    using serial = usart_t<2, PA2, PA3>;
    static constexpr interrupt::interrupt_t serial_interrupt = interrupt::USART2_EXTI26;
};
#endif

#if defined(STM32F411E_DISCO)
struct board
{
    using led1 = output_t<PD13>;
    using led2 = output_t<PD12>;
    using led3 = output_t<PD14>;
    using led4 = output_t<PD15>;
    using btn1 = button_t<PA0>;
    static constexpr input_type_t btn_type = pull_down;
    using probe = output_t<PA8>;
    using serial = usart_t<1, PB6, PB7>;
    static constexpr interrupt::interrupt_t serial_interrupt = interrupt::USART1;
};
#endif

#if defined(STM32F412G_DISCO)
struct board
{
    using led1 = output_t<PE0>;
    using btn1 = button_t<PA0>;
    static constexpr input_type_t btn_type = pull_down;
    using probe = output_t<PA8>;
    using serial = usart_t<2, PA2, PA3>;
    static constexpr interrupt::interrupt_t serial_interrupt = interrupt::USART2;
};
#endif

#if defined(NUCLEO_F446RE)
struct board
{
    using led1 = output_t<PA5>;
    using btn1 = button_t<PC13>;
    static constexpr input_type_t btn_type = pull_up;
    using probe = output_t<PA8>;
    using serial = usart_t<2, PA2, PA3>;
    static constexpr interrupt::interrupt_t serial_interrupt = interrupt::USART2;
};
#endif

#if defined(NUCLEO_F767ZI)
struct board
{
    using led1 = output_t<PB0>;
    using btn1 = button_t<PC13>;
    static constexpr input_type_t btn_type = pull_down;
    using probe = output_t<PE13>;
    using serial = usart_t<3, PD8, PD9>;
    static constexpr interrupt::interrupt_t serial_interrupt = interrupt::USART3;
};
#endif

#if defined(NUCLEO_G070RB)
struct board
{
    using led1 = output_t<PA5>;
    using btn1 = button_t<PC13>;
    static constexpr input_type_t btn_type = pull_up;
    static constexpr int A0 = 0;
    static constexpr int A1 = 1;
    static constexpr int A2 = 4;
    static constexpr int A3 = 9;
    using probe = output_t<PA8>;
    using serial = usart_t<2, PA2, PA3>;
    static constexpr interrupt::interrupt_t serial_interrupt = interrupt::USART2;
};
#endif

#if defined(NUCLEO_G431KB)
struct board
{
    using led1 = output_t<PB8>;
    using probe = output_t<PA8>;
    using serial = usart_t<2, PA2, PA3>;
    static constexpr interrupt::interrupt_t serial_interrupt = interrupt::USART2;
};
#endif

#if defined(NUCLEO_G431RB)
struct board
{
    using led1 = output_t<PA5>;
    using btn1 = button_t<PC13>;
    static constexpr input_type_t btn_type = pull_down;
    static constexpr int A0 = 1;
    static constexpr int A1 = 2;
    static constexpr int A2 = 7;    // A4 on board!
    static constexpr int A3 = 6;    // A5 on board!
    using probe = output_t<PA8>;
    using serial = usart_t<2, PA2, PA3>;
    static constexpr interrupt::interrupt_t serial_interrupt = interrupt::USART2;
};
#endif

#if defined(NUCLEO_H743ZI)
struct board
{
    using led1 = output_t<PB0>;
    using led2 = output_t<PE1>;
    using led3 = output_t<PB14>;
    using btn1 = button_t<PC13>;
    static constexpr input_type_t btn_type = pull_down;
    using probe = output_t<PE13>;
    using serial = usart_t<3, PD8, PD9>;
    static constexpr interrupt::interrupt_t serial_interrupt = interrupt::USART3;
};
#endif

#if defined(NUCLEO_L073RZ)
struct board
{
    using led1 = output_t<PA5>;
    using btn1 = button_t<PC13>;
    static constexpr input_type_t btn_type = pull_up;
    using probe = output_t<PA8>;
    using serial = usart_t<2, PA2, PA3>;
    static constexpr interrupt::interrupt_t serial_interrupt = interrupt::USART2;
};
#endif

#if defined(NUCLEO_L152RE)
struct board
{
    using led1 = output_t<PA5>;
    using btn1 = button_t<PC13>;
    static constexpr input_type_t btn_type = pull_up;
    using probe = output_t<PA8>;
    using serial = usart_t<2, PA2, PA3>;
    static constexpr interrupt::interrupt_t serial_interrupt = interrupt::USART2;
};
#endif

#if defined(NUCLEO_L476RG)
struct board
{
    using led1 = output_t<PA5>;
    using btn1 = button_t<PC13>;
    static constexpr input_type_t btn_type = pull_up;
    using probe = output_t<PA8>;
    using serial = usart_t<2, PA2, PA3>;
    static constexpr interrupt::interrupt_t serial_interrupt = interrupt::USART2;
};
#endif

