#pragma once

////
//
//      STM32WL EXTI peripherals
//
///

// EXTI: External interrupt/event controller

struct stm32wl5x_cm0p_exti_t
{
    volatile uint32_t RTSR1; // rising trigger selection register
    volatile uint32_t FTSR1; // falling trigger selection register
    volatile uint32_t SWIER1; // software interrupt event register
    volatile uint32_t PR1; // EXTI pending register
    reserved_t<0x4> _0x10;
    volatile uint32_t RTSR2; // rising trigger selection register
    volatile uint32_t FTSR2; // falling trigger selection register
    volatile uint32_t SWIER2; // software interrupt event register
    volatile uint32_t PR2; // pending register
    reserved_t<0x14> _0x30;
    volatile uint32_t C1IMR1; // interrupt mask register
    volatile uint32_t C1EMR1; // event mask register
    reserved_t<0x2> _0x88;
    volatile uint32_t C1IMR2; // wakeup with interrupt mask register
    volatile uint32_t C1EMR2; // wakeup with event mask register
    reserved_t<0xa> _0x98;
    volatile uint32_t C2IMR1; // interrupt mask register
    volatile uint32_t C2EMR1; // event mask register
    reserved_t<0x2> _0xc8;
    volatile uint32_t C2IMR2; // wakeup with interrupt mask register
    volatile uint32_t C2EMR2; // wakeup with event mask register

    static constexpr uint32_t RTSR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ffff> RTSR1_RT; // Rising trigger event configuration bit of Configurable Event input
    typedef bit_field_t<21, 0x3> RTSR1_RT21; // Rising trigger event configuration bit of Configurable Event input

    static constexpr uint32_t FTSR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ffff> FTSR1_FT; // Falling trigger event configuration bit of Configurable Event input
    typedef bit_field_t<21, 0x3> FTSR1_FT21; // Falling trigger event configuration bit of Configurable Event input

    static constexpr uint32_t SWIER1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ffff> SWIER1_SWI; // Software interrupt on event
    typedef bit_field_t<21, 0x3> SWIER1_SWI21; // Software interrupt on event

    static constexpr uint32_t PR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ffff> PR1_PIF; // Configurable event inputs Pending bit
    typedef bit_field_t<21, 0x3> PR1_PIF21; // Configurable event inputs Pending bit


    static constexpr uint32_t RTSR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RTSR2_RT34 = 0x4; // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR2_RT40 = 0x100; // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR2_RT41 = 0x200; // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR2_RT45 = 0x2000; // Rising trigger event configuration bit of Configurable Event input

    static constexpr uint32_t FTSR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FTSR2_FT34 = 0x4; // Falling trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR2_FT40 = 0x100; // Falling trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR2_FT41 = 0x200; // Falling trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR2_FT45 = 0x2000; // Falling trigger event configuration bit of Configurable Event input

    static constexpr uint32_t SWIER2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SWIER2_SWI34 = 0x4; // Software interrupt on event
    static constexpr uint32_t SWIER2_SWI40 = 0x100; // Software interrupt on event
    static constexpr uint32_t SWIER2_SWI41 = 0x200; // Software interrupt on event
    static constexpr uint32_t SWIER2_SWI45 = 0x2000; // Software interrupt on event 45

    static constexpr uint32_t PR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PR2_PIF34 = 0x4; // Configurable event inputs 33 Pending bit.
    static constexpr uint32_t PR2_PIF40 = 0x100; // Configurable event inputs 40_41 Pending bit.
    static constexpr uint32_t PR2_PIF41 = 0x200; // Configurable event inputs 40_41 Pending bit.
    static constexpr uint32_t PR2_PIF45 = 0x2000; // Configurable event inputs 45 Pending bit.


    static constexpr uint32_t C1IMR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C1IMR1_IM; // wakeup with interrupt Mask on event input

    static constexpr uint32_t C1EMR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1EMR1_EM0 = 0x1; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t C1EMR1_EM1 = 0x2; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t C1EMR1_EM2 = 0x4; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t C1EMR1_EM3 = 0x8; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t C1EMR1_EM4 = 0x10; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t C1EMR1_EM5 = 0x20; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t C1EMR1_EM6 = 0x40; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t C1EMR1_EM7 = 0x80; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t C1EMR1_EM8 = 0x100; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t C1EMR1_EM9 = 0x200; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t C1EMR1_EM10 = 0x400; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t C1EMR1_EM11 = 0x800; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t C1EMR1_EM12 = 0x1000; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t C1EMR1_EM13 = 0x2000; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t C1EMR1_EM14 = 0x4000; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t C1EMR1_EM15 = 0x8000; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t C1EMR1_EM17 = 0x20000; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t C1EMR1_EM18 = 0x40000; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t C1EMR1_EM19 = 0x80000; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t C1EMR1_EM20 = 0x100000; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t C1EMR1_EM21 = 0x200000; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t C1EMR1_EM22 = 0x400000; // Wakeup with event generation Mask on Event input


    static constexpr uint32_t C1IMR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1IMR2_IM34 = 0x4; // wakeup with interrupt mask on event input
    static constexpr uint32_t C1IMR2_IM36 = 0x10; // wakeup with interrupt mask on event input
    static constexpr uint32_t C1IMR2_IM37 = 0x20; // wakeup with interrupt mask on event input
    static constexpr uint32_t C1IMR2_IM38 = 0x40; // wakeup with interrupt mask on event input
    static constexpr uint32_t C1IMR2_IM39 = 0x80; // wakeup with interrupt mask on event input
    static constexpr uint32_t C1IMR2_IM40 = 0x100; // wakeup with interrupt mask on event input
    static constexpr uint32_t C1IMR2_IM41 = 0x200; // wakeup with interrupt mask on event input
    static constexpr uint32_t C1IMR2_IM42 = 0x400; // wakeup with interrupt mask on event input
    static constexpr uint32_t C1IMR2_IM43 = 0x800; // wakeup with interrupt mask on event input
    static constexpr uint32_t C1IMR2_IM44 = 0x1000; // wakeup with interrupt mask on event input
    static constexpr uint32_t C1IMR2_IM45 = 0x2000; // wakeup with interrupt mask on event input
    static constexpr uint32_t C1IMR2_IM46 = 0x4000; // wakeup with interrupt mask on event input

    static constexpr uint32_t C1EMR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1EMR2_EM40 = 0x100; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t C1EMR2_EM41 = 0x200; // Wakeup with event generation Mask on Event input


    static constexpr uint32_t C2IMR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> C2IMR1_IM; // wakeup with interrupt Mask on Event input

    static constexpr uint32_t C2EMR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C2EMR1_EM0 = 0x1; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t C2EMR1_EM1 = 0x2; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t C2EMR1_EM2 = 0x4; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t C2EMR1_EM3 = 0x8; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t C2EMR1_EM4 = 0x10; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t C2EMR1_EM5 = 0x20; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t C2EMR1_EM6 = 0x40; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t C2EMR1_EM7 = 0x80; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t C2EMR1_EM8 = 0x100; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t C2EMR1_EM9 = 0x200; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t C2EMR1_EM10 = 0x400; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t C2EMR1_EM11 = 0x800; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t C2EMR1_EM12 = 0x1000; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t C2EMR1_EM13 = 0x2000; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t C2EMR1_EM14 = 0x4000; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t C2EMR1_EM15 = 0x8000; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t C2EMR1_EM17 = 0x20000; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t C2EMR1_EM18 = 0x40000; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t C2EMR1_EM19 = 0x80000; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t C2EMR1_EM20 = 0x100000; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t C2EMR1_EM21 = 0x200000; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t C2EMR1_EM22 = 0x400000; // Wakeup with event generation Mask on Event input


    static constexpr uint32_t C2IMR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C2IMR2_IM34 = 0x4; // wakeup with interrupt mask on event input
    static constexpr uint32_t C2IMR2_IM36 = 0x10; // wakeup with interrupt mask on event input
    static constexpr uint32_t C2IMR2_IM37 = 0x20; // wakeup with interrupt mask on event input
    static constexpr uint32_t C2IMR2_IM38 = 0x40; // wakeup with interrupt mask on event input
    static constexpr uint32_t C2IMR2_IM39 = 0x80; // wakeup with interrupt mask on event input
    static constexpr uint32_t C2IMR2_IM40 = 0x100; // wakeup with interrupt mask on event input
    static constexpr uint32_t C2IMR2_IM41 = 0x200; // wakeup with interrupt mask on event input
    static constexpr uint32_t C2IMR2_IM42 = 0x400; // wakeup with interrupt mask on event input
    static constexpr uint32_t C2IMR2_IM43 = 0x800; // wakeup with interrupt mask on event input
    static constexpr uint32_t C2IMR2_IM44 = 0x1000; // wakeup with interrupt mask on event input
    static constexpr uint32_t C2IMR2_IM45 = 0x2000; // wakeup with interrupt mask on event input
    static constexpr uint32_t C2IMR2_IM46 = 0x4000; // wakeup with interrupt mask on event input

    static constexpr uint32_t C2EMR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C2EMR2_EM40 = 0x100; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t C2EMR2_EM41 = 0x200; // Wakeup with event generation Mask on Event input
};

// EXTI: External interrupt/event controller

struct stm32wle5_cm4_exti_t
{
    volatile uint32_t RTSR1; // rising trigger selection register
    volatile uint32_t FTSR1; // falling trigger selection register
    volatile uint32_t SWIER1; // software interrupt event register
    volatile uint32_t PR1; // EXTI pending register
    reserved_t<0x4> _0x10;
    volatile uint32_t RTSR2; // rising trigger selection register
    volatile uint32_t FTSR2; // falling trigger selection register
    volatile uint32_t SWIER2; // software interrupt event register
    volatile uint32_t PR2; // pending register
    reserved_t<0x14> _0x30;
    volatile uint32_t IMR1; // interrupt mask register
    volatile uint32_t EMR1; // event mask register
    reserved_t<0x2> _0x88;
    volatile uint32_t IMR2; // interrupt mask register

    static constexpr uint32_t RTSR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ffff> RTSR1_RT; // Rising trigger event configuration bit of Configurable Event input
    typedef bit_field_t<21, 0x3> RTSR1_RT21; // Rising trigger event configuration bit of Configurable Event input

    static constexpr uint32_t FTSR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ffff> FTSR1_FT; // Falling trigger event configuration bit of Configurable Event input
    typedef bit_field_t<21, 0x3> FTSR1_FT21; // Falling trigger event configuration bit of Configurable Event input

    static constexpr uint32_t SWIER1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ffff> SWIER1_SWI; // Software interrupt on event
    typedef bit_field_t<21, 0x3> SWIER1_SWI21; // Software interrupt on event

    static constexpr uint32_t PR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ffff> PR1_PIF; // Configurable event inputs Pending bit
    typedef bit_field_t<21, 0x3> PR1_PIF21; // Configurable event inputs Pending bit


    static constexpr uint32_t RTSR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RTSR2_RT34 = 0x4; // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR2_RT45 = 0x2000; // Rising trigger event configuration bit of Configurable Event input

    static constexpr uint32_t FTSR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FTSR2_FT34 = 0x4; // Falling trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR2_FT45 = 0x2000; // Falling trigger event configuration bit of Configurable Event input

    static constexpr uint32_t SWIER2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SWIER2_SWI34 = 0x4; // Software interrupt on event
    static constexpr uint32_t SWIER2_SWI45 = 0x2000; // Software interrupt on event 45

    static constexpr uint32_t PR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PR2_PIF34 = 0x4; // Configurable event inputs 33 Pending bit.
    static constexpr uint32_t PR2_PIF45 = 0x2000; // Configurable event inputs 45 Pending bit.


    static constexpr uint32_t IMR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> IMR1_IM; // wakeup with interrupt Mask on event input

    static constexpr uint32_t EMR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t EMR1_EM0 = 0x1; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t EMR1_EM1 = 0x2; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t EMR1_EM2 = 0x4; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t EMR1_EM3 = 0x8; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t EMR1_EM4 = 0x10; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t EMR1_EM5 = 0x20; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t EMR1_EM6 = 0x40; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t EMR1_EM7 = 0x80; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t EMR1_EM8 = 0x100; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t EMR1_EM9 = 0x200; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t EMR1_EM10 = 0x400; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t EMR1_EM11 = 0x800; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t EMR1_EM12 = 0x1000; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t EMR1_EM13 = 0x2000; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t EMR1_EM14 = 0x4000; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t EMR1_EM15 = 0x8000; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t EMR1_EM17 = 0x20000; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t EMR1_EM18 = 0x40000; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t EMR1_EM19 = 0x80000; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t EMR1_EM20 = 0x100000; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t EMR1_EM21 = 0x200000; // Wakeup with event generation Mask on Event input
    static constexpr uint32_t EMR1_EM22 = 0x400000; // Wakeup with event generation Mask on Event input


    static constexpr uint32_t IMR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IMR2_IM34 = 0x4; // CPUm Wakeup with interrupt Mask on Event input
    static constexpr uint32_t IMR2_IM38 = 0x40; // CPUm Wakeup with interrupt Mask on Event input
    typedef bit_field_t<10, 0x1f> IMR2_IM42; // CPUm Wakeup with interrupt Mask on Event input
};

template<>
struct peripheral_t<STM32WL5x_CM0P, EXTI>
{
    static constexpr periph_t P = EXTI;
    using T = stm32wl5x_cm0p_exti_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WL5x_CM4, EXTI>
{
    static constexpr periph_t P = EXTI;
    using T = stm32wl5x_cm0p_exti_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WLE5_CM4, EXTI>
{
    static constexpr periph_t P = EXTI;
    using T = stm32wle5_cm4_exti_t;
    static T& V;
};

using exti_t = peripheral_t<svd, EXTI>;
