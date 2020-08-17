#pragma once

////
//
//      STM32G4 EXTI peripherals
//
///

// EXTI: External interrupt/event controller

struct stm32g431xx_exti_t
{
    volatile uint32_t IMR1; // Interrupt mask register
    volatile uint32_t EMR1; // Event mask register
    volatile uint32_t RTSR1; // Rising Trigger selection register
    volatile uint32_t FTSR1; // Falling Trigger selection register
    volatile uint32_t SWIER1; // Software interrupt event register
    volatile uint32_t PR1; // Pending register
    reserved_t<0x2> _0x18;
    volatile uint32_t IMR2; // Interrupt mask register
    volatile uint32_t EMR2; // Event mask register
    volatile uint32_t RTSR2; // Rising Trigger selection register
    volatile uint32_t FTSR2; // Falling Trigger selection register
    volatile uint32_t SWIER2; // Software interrupt event register
    volatile uint32_t PR2; // Pending register

    static constexpr uint32_t IMR1_RESET_VALUE = 0xff820000; // Reset value
    static constexpr uint32_t IMR1_IM0 = 0x1; // Interrupt Mask on line 0
    static constexpr uint32_t IMR1_IM1 = 0x2; // Interrupt Mask on line 1
    static constexpr uint32_t IMR1_IM2 = 0x4; // Interrupt Mask on line 2
    static constexpr uint32_t IMR1_IM3 = 0x8; // Interrupt Mask on line 3
    static constexpr uint32_t IMR1_IM4 = 0x10; // Interrupt Mask on line 4
    static constexpr uint32_t IMR1_IM5 = 0x20; // Interrupt Mask on line 5
    static constexpr uint32_t IMR1_IM6 = 0x40; // Interrupt Mask on line 6
    static constexpr uint32_t IMR1_IM7 = 0x80; // Interrupt Mask on line 7
    static constexpr uint32_t IMR1_IM8 = 0x100; // Interrupt Mask on line 8
    static constexpr uint32_t IMR1_IM9 = 0x200; // Interrupt Mask on line 9
    static constexpr uint32_t IMR1_IM10 = 0x400; // Interrupt Mask on line 10
    static constexpr uint32_t IMR1_IM11 = 0x800; // Interrupt Mask on line 11
    static constexpr uint32_t IMR1_IM12 = 0x1000; // Interrupt Mask on line 12
    static constexpr uint32_t IMR1_IM13 = 0x2000; // Interrupt Mask on line 13
    static constexpr uint32_t IMR1_IM14 = 0x4000; // Interrupt Mask on line 14
    static constexpr uint32_t IMR1_IM15 = 0x8000; // Interrupt Mask on line 15
    static constexpr uint32_t IMR1_IM16 = 0x10000; // Interrupt Mask on line 16
    static constexpr uint32_t IMR1_IM17 = 0x20000; // Interrupt Mask on line 17
    static constexpr uint32_t IMR1_IM18 = 0x40000; // Interrupt Mask on line 18
    static constexpr uint32_t IMR1_IM19 = 0x80000; // Interrupt Mask on line 19
    static constexpr uint32_t IMR1_IM20 = 0x100000; // Interrupt Mask on line 20
    static constexpr uint32_t IMR1_IM21 = 0x200000; // Interrupt Mask on line 21
    static constexpr uint32_t IMR1_IM22 = 0x400000; // Interrupt Mask on line 22
    static constexpr uint32_t IMR1_IM23 = 0x800000; // Interrupt Mask on line 23
    static constexpr uint32_t IMR1_IM24 = 0x1000000; // Interrupt Mask on line 24
    static constexpr uint32_t IMR1_IM25 = 0x2000000; // Interrupt Mask on line 25
    static constexpr uint32_t IMR1_IM26 = 0x4000000; // Interrupt Mask on line 26
    static constexpr uint32_t IMR1_IM27 = 0x8000000; // Interrupt Mask on line 27
    static constexpr uint32_t IMR1_IM28 = 0x10000000; // Interrupt Mask on line 28
    static constexpr uint32_t IMR1_IM29 = 0x20000000; // Interrupt Mask on line 29
    static constexpr uint32_t IMR1_IM30 = 0x40000000; // Interrupt Mask on line 30
    static constexpr uint32_t IMR1_IM31 = 0x80000000; // Interrupt Mask on line 31

    static constexpr uint32_t EMR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t EMR1_EM0 = 0x1; // Event Mask on line 0
    static constexpr uint32_t EMR1_EM1 = 0x2; // Event Mask on line 1
    static constexpr uint32_t EMR1_EM2 = 0x4; // Event Mask on line 2
    static constexpr uint32_t EMR1_EM3 = 0x8; // Event Mask on line 3
    static constexpr uint32_t EMR1_EM4 = 0x10; // Event Mask on line 4
    static constexpr uint32_t EMR1_EM5 = 0x20; // Event Mask on line 5
    static constexpr uint32_t EMR1_EM6 = 0x40; // Event Mask on line 6
    static constexpr uint32_t EMR1_EM7 = 0x80; // Event Mask on line 7
    static constexpr uint32_t EMR1_EM8 = 0x100; // Event Mask on line 8
    static constexpr uint32_t EMR1_EM9 = 0x200; // Event Mask on line 9
    static constexpr uint32_t EMR1_EM10 = 0x400; // Event Mask on line 10
    static constexpr uint32_t EMR1_EM11 = 0x800; // Event Mask on line 11
    static constexpr uint32_t EMR1_EM12 = 0x1000; // Event Mask on line 12
    static constexpr uint32_t EMR1_EM13 = 0x2000; // Event Mask on line 13
    static constexpr uint32_t EMR1_EM14 = 0x4000; // Event Mask on line 14
    static constexpr uint32_t EMR1_EM15 = 0x8000; // Event Mask on line 15
    static constexpr uint32_t EMR1_EM16 = 0x10000; // Event Mask on line 16
    static constexpr uint32_t EMR1_EM17 = 0x20000; // Event Mask on line 17
    static constexpr uint32_t EMR1_EM18 = 0x40000; // Event Mask on line 18
    static constexpr uint32_t EMR1_EM19 = 0x80000; // Event Mask on line 19
    static constexpr uint32_t EMR1_EM20 = 0x100000; // Event Mask on line 20
    static constexpr uint32_t EMR1_EM21 = 0x200000; // Event Mask on line 21
    static constexpr uint32_t EMR1_EM22 = 0x400000; // Event Mask on line 22
    static constexpr uint32_t EMR1_EM23 = 0x800000; // Event Mask on line 23
    static constexpr uint32_t EMR1_EM24 = 0x1000000; // Event Mask on line 24
    static constexpr uint32_t EMR1_EM25 = 0x2000000; // Event Mask on line 25
    static constexpr uint32_t EMR1_EM26 = 0x4000000; // Event Mask on line 26
    static constexpr uint32_t EMR1_EM27 = 0x8000000; // Event Mask on line 27
    static constexpr uint32_t EMR1_EM28 = 0x10000000; // Event Mask on line 28
    static constexpr uint32_t EMR1_EM29 = 0x20000000; // Event Mask on line 29
    static constexpr uint32_t EMR1_EM30 = 0x40000000; // Event Mask on line 30
    static constexpr uint32_t EMR1_EM31 = 0x80000000; // Event Mask on line 31

    static constexpr uint32_t RTSR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RTSR1_RT0 = 0x1; // Rising trigger event configuration of line 0
    static constexpr uint32_t RTSR1_RT1 = 0x2; // Rising trigger event configuration of line 1
    static constexpr uint32_t RTSR1_RT2 = 0x4; // Rising trigger event configuration of line 2
    static constexpr uint32_t RTSR1_RT3 = 0x8; // Rising trigger event configuration of line 3
    static constexpr uint32_t RTSR1_RT4 = 0x10; // Rising trigger event configuration of line 4
    static constexpr uint32_t RTSR1_RT5 = 0x20; // Rising trigger event configuration of line 5
    static constexpr uint32_t RTSR1_RT6 = 0x40; // Rising trigger event configuration of line 6
    static constexpr uint32_t RTSR1_RT7 = 0x80; // Rising trigger event configuration of line 7
    static constexpr uint32_t RTSR1_RT8 = 0x100; // Rising trigger event configuration of line 8
    static constexpr uint32_t RTSR1_RT9 = 0x200; // Rising trigger event configuration of line 9
    static constexpr uint32_t RTSR1_RT10 = 0x400; // Rising trigger event configuration of line 10
    static constexpr uint32_t RTSR1_RT11 = 0x800; // Rising trigger event configuration of line 11
    static constexpr uint32_t RTSR1_RT12 = 0x1000; // Rising trigger event configuration of line 12
    static constexpr uint32_t RTSR1_RT13 = 0x2000; // Rising trigger event configuration of line 13
    static constexpr uint32_t RTSR1_RT14 = 0x4000; // Rising trigger event configuration of line 14
    static constexpr uint32_t RTSR1_RT15 = 0x8000; // Rising trigger event configuration of line 15
    static constexpr uint32_t RTSR1_RT16 = 0x10000; // Rising trigger event configuration of line 16
    static constexpr uint32_t RTSR1_RT18 = 0x40000; // Rising trigger event configuration of line 18
    static constexpr uint32_t RTSR1_RT19 = 0x80000; // Rising trigger event configuration of line 19
    static constexpr uint32_t RTSR1_RT20 = 0x100000; // Rising trigger event configuration of line 20
    static constexpr uint32_t RTSR1_RT21 = 0x200000; // Rising trigger event configuration of line 21
    static constexpr uint32_t RTSR1_RT22 = 0x400000; // Rising trigger event configuration of line 22
    typedef bit_field_t<29, 0x7> RTSR1_RT; // RT

    static constexpr uint32_t FTSR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FTSR1_FT0 = 0x1; // Falling trigger event configuration of line 0
    static constexpr uint32_t FTSR1_FT1 = 0x2; // Falling trigger event configuration of line 1
    static constexpr uint32_t FTSR1_FT2 = 0x4; // Falling trigger event configuration of line 2
    static constexpr uint32_t FTSR1_FT3 = 0x8; // Falling trigger event configuration of line 3
    static constexpr uint32_t FTSR1_FT4 = 0x10; // Falling trigger event configuration of line 4
    static constexpr uint32_t FTSR1_FT5 = 0x20; // Falling trigger event configuration of line 5
    static constexpr uint32_t FTSR1_FT6 = 0x40; // Falling trigger event configuration of line 6
    static constexpr uint32_t FTSR1_FT7 = 0x80; // Falling trigger event configuration of line 7
    static constexpr uint32_t FTSR1_FT8 = 0x100; // Falling trigger event configuration of line 8
    static constexpr uint32_t FTSR1_FT9 = 0x200; // Falling trigger event configuration of line 9
    static constexpr uint32_t FTSR1_FT10 = 0x400; // Falling trigger event configuration of line 10
    static constexpr uint32_t FTSR1_FT11 = 0x800; // Falling trigger event configuration of line 11
    static constexpr uint32_t FTSR1_FT12 = 0x1000; // Falling trigger event configuration of line 12
    static constexpr uint32_t FTSR1_FT13 = 0x2000; // Falling trigger event configuration of line 13
    static constexpr uint32_t FTSR1_FT14 = 0x4000; // Falling trigger event configuration of line 14
    static constexpr uint32_t FTSR1_FT15 = 0x8000; // Falling trigger event configuration of line 15
    static constexpr uint32_t FTSR1_FT16 = 0x10000; // Falling trigger event configuration of line 16
    static constexpr uint32_t FTSR1_FT18 = 0x40000; // Falling trigger event configuration of line 18
    static constexpr uint32_t FTSR1_FT19 = 0x80000; // Falling trigger event configuration of line 19
    static constexpr uint32_t FTSR1_FT20 = 0x100000; // Falling trigger event configuration of line 20
    static constexpr uint32_t FTSR1_FT21 = 0x200000; // Falling trigger event configuration of line 21
    static constexpr uint32_t FTSR1_FT22 = 0x400000; // Falling trigger event configuration of line 22

    static constexpr uint32_t SWIER1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SWIER1_SWI0 = 0x1; // Software Interrupt on line 0
    static constexpr uint32_t SWIER1_SWI1 = 0x2; // Software Interrupt on line 1
    static constexpr uint32_t SWIER1_SWI2 = 0x4; // Software Interrupt on line 2
    static constexpr uint32_t SWIER1_SWI3 = 0x8; // Software Interrupt on line 3
    static constexpr uint32_t SWIER1_SWI4 = 0x10; // Software Interrupt on line 4
    static constexpr uint32_t SWIER1_SWI5 = 0x20; // Software Interrupt on line 5
    static constexpr uint32_t SWIER1_SWI6 = 0x40; // Software Interrupt on line 6
    static constexpr uint32_t SWIER1_SWI7 = 0x80; // Software Interrupt on line 7
    static constexpr uint32_t SWIER1_SWI8 = 0x100; // Software Interrupt on line 8
    static constexpr uint32_t SWIER1_SWI9 = 0x200; // Software Interrupt on line 9
    static constexpr uint32_t SWIER1_SWI10 = 0x400; // Software Interrupt on line 10
    static constexpr uint32_t SWIER1_SWI11 = 0x800; // Software Interrupt on line 11
    static constexpr uint32_t SWIER1_SWI12 = 0x1000; // Software Interrupt on line 12
    static constexpr uint32_t SWIER1_SWI13 = 0x2000; // Software Interrupt on line 13
    static constexpr uint32_t SWIER1_SWI14 = 0x4000; // Software Interrupt on line 14
    static constexpr uint32_t SWIER1_SWI15 = 0x8000; // Software Interrupt on line 15
    static constexpr uint32_t SWIER1_SWI16 = 0x10000; // Software Interrupt on line 16
    static constexpr uint32_t SWIER1_SWI18 = 0x40000; // Software Interrupt on line 18
    static constexpr uint32_t SWIER1_SWI19 = 0x80000; // Software Interrupt on line 19
    static constexpr uint32_t SWIER1_SWI20 = 0x100000; // Software Interrupt on line 20
    static constexpr uint32_t SWIER1_SWI21 = 0x200000; // Software Interrupt on line 21
    static constexpr uint32_t SWIER1_SWI22 = 0x400000; // Software Interrupt on line 22

    static constexpr uint32_t PR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PR1_PIF0 = 0x1; // Pending bit 0
    static constexpr uint32_t PR1_PIF1 = 0x2; // Pending bit 1
    static constexpr uint32_t PR1_PIF2 = 0x4; // Pending bit 2
    static constexpr uint32_t PR1_PIF3 = 0x8; // Pending bit 3
    static constexpr uint32_t PR1_PIF4 = 0x10; // Pending bit 4
    static constexpr uint32_t PR1_PIF5 = 0x20; // Pending bit 5
    static constexpr uint32_t PR1_PIF6 = 0x40; // Pending bit 6
    static constexpr uint32_t PR1_PIF7 = 0x80; // Pending bit 7
    static constexpr uint32_t PR1_PIF8 = 0x100; // Pending bit 8
    static constexpr uint32_t PR1_PIF9 = 0x200; // Pending bit 9
    static constexpr uint32_t PR1_PIF10 = 0x400; // Pending bit 10
    static constexpr uint32_t PR1_PIF11 = 0x800; // Pending bit 11
    static constexpr uint32_t PR1_PIF12 = 0x1000; // Pending bit 12
    static constexpr uint32_t PR1_PIF13 = 0x2000; // Pending bit 13
    static constexpr uint32_t PR1_PIF14 = 0x4000; // Pending bit 14
    static constexpr uint32_t PR1_PIF15 = 0x8000; // Pending bit 15
    static constexpr uint32_t PR1_PIF16 = 0x10000; // Pending bit 16
    static constexpr uint32_t PR1_PIF18 = 0x40000; // Pending bit 18
    static constexpr uint32_t PR1_PIF19 = 0x80000; // Pending bit 19
    static constexpr uint32_t PR1_PIF20 = 0x100000; // Pending bit 20
    static constexpr uint32_t PR1_PIF21 = 0x200000; // Pending bit 21
    static constexpr uint32_t PR1_PIF22 = 0x400000; // Pending bit 22


    static constexpr uint32_t IMR2_RESET_VALUE = 0xffffff87; // Reset value
    static constexpr uint32_t IMR2_IM32 = 0x1; // Interrupt Mask on external/internal line 32
    static constexpr uint32_t IMR2_IM33 = 0x2; // Interrupt Mask on external/internal line 33
    static constexpr uint32_t IMR2_IM34 = 0x4; // Interrupt Mask on external/internal line 34
    static constexpr uint32_t IMR2_IM35 = 0x8; // Interrupt Mask on external/internal line 35
    static constexpr uint32_t IMR2_IM36 = 0x10; // Interrupt Mask on external/internal line 36
    static constexpr uint32_t IMR2_IM37 = 0x20; // Interrupt Mask on external/internal line 37
    static constexpr uint32_t IMR2_IM38 = 0x40; // Interrupt Mask on external/internal line 38
    static constexpr uint32_t IMR2_IM39 = 0x80; // Interrupt Mask on external/internal line 39
    static constexpr uint32_t IMR2_IM40 = 0x100; // Interrupt Mask on external/internal line 40
    static constexpr uint32_t IMR2_IM41 = 0x200; // Interrupt Mask on external/internal line 41
    static constexpr uint32_t IMR2_IM42 = 0x400; // Interrupt Mask on external/internal line 42
    static constexpr uint32_t IMR2_IM43 = 0x800; // Interrupt Mask on external/internal line 43

    static constexpr uint32_t EMR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t EMR2_EM32 = 0x1; // Event mask on external/internal line 32
    static constexpr uint32_t EMR2_EM33 = 0x2; // Event mask on external/internal line 33
    static constexpr uint32_t EMR2_EM34 = 0x4; // Event mask on external/internal line 34
    static constexpr uint32_t EMR2_EM35 = 0x8; // Event mask on external/internal line 35
    static constexpr uint32_t EMR2_EM36 = 0x10; // Event mask on external/internal line 36
    static constexpr uint32_t EMR2_EM37 = 0x20; // Event mask on external/internal line 37
    static constexpr uint32_t EMR2_EM38 = 0x40; // Event mask on external/internal line 38
    static constexpr uint32_t EMR2_EM39 = 0x80; // Event mask on external/internal line 39
    static constexpr uint32_t EMR2_EM40 = 0x100; // Event mask on external/internal line 40

    static constexpr uint32_t RTSR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RTSR2_RT32 = 0x1; // Rising trigger event configuration bit of line 32
    static constexpr uint32_t RTSR2_RT33 = 0x2; // Rising trigger event configuration bit of line 32
    static constexpr uint32_t RTSR2_RT38 = 0x40; // Rising trigger event configuration bit of line 38
    static constexpr uint32_t RTSR2_RT39 = 0x80; // Rising trigger event configuration bit of line 39
    static constexpr uint32_t RTSR2_RT40 = 0x100; // Rising trigger event configuration bit of line 40
    static constexpr uint32_t RTSR2_RT41 = 0x200; // Rising trigger event configuration bit of line 41

    static constexpr uint32_t FTSR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FTSR2_FT35 = 0x8; // Falling trigger event configuration bit of line 35
    static constexpr uint32_t FTSR2_FT36 = 0x10; // Falling trigger event configuration bit of line 36
    static constexpr uint32_t FTSR2_FT37 = 0x20; // Falling trigger event configuration bit of line 37
    static constexpr uint32_t FTSR2_FT38 = 0x40; // Falling trigger event configuration bit of line 38

    static constexpr uint32_t SWIER2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SWIER2_SWI35 = 0x8; // Software interrupt on line 35
    static constexpr uint32_t SWIER2_SWI36 = 0x10; // Software interrupt on line 36
    static constexpr uint32_t SWIER2_SWI37 = 0x20; // Software interrupt on line 37
    static constexpr uint32_t SWIER2_SWI38 = 0x40; // Software interrupt on line 38

    static constexpr uint32_t PR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PR2_PIF35 = 0x8; // Pending interrupt flag on line 35
    static constexpr uint32_t PR2_PIF36 = 0x10; // Pending interrupt flag on line 36
    static constexpr uint32_t PR2_PIF37 = 0x20; // Pending interrupt flag on line 37
    static constexpr uint32_t PR2_PIF38 = 0x40; // Pending interrupt flag on line 38
};

template<>
struct peripheral_t<STM32G431xx, EXTI>
{
    using T = stm32g431xx_exti_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G441xx, EXTI>
{
    using T = stm32g431xx_exti_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G471xx, EXTI>
{
    using T = stm32g431xx_exti_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G473xx, EXTI>
{
    using T = stm32g431xx_exti_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G474xx, EXTI>
{
    using T = stm32g431xx_exti_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G483xx, EXTI>
{
    using T = stm32g431xx_exti_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, EXTI>
{
    using T = stm32g431xx_exti_t;
    static T& V;
};

template<>
struct peripheral_t<STM32GBK1CBT6, EXTI>
{
    using T = stm32g431xx_exti_t;
    static T& V;
};

using exti_t = peripheral_t<svd, EXTI>;
