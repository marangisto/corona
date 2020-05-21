#pragma once

////
//
//      STM32L0 EXTI peripherals
//
////

////
//
//      External interrupt/event controller
//
////

struct stm32l0x0_exti_t
{
    volatile uint32_t IMR;   // [read-write] Interrupt mask register (EXTI_IMR)
    volatile uint32_t EMR;   // [read-write] Event mask register (EXTI_EMR)
    volatile uint32_t RTSR;  // [read-write] Rising Trigger selection register (EXTI_RTSR)
    volatile uint32_t FTSR;  // [read-write] Falling Trigger selection register (EXTI_FTSR)
    volatile uint32_t SWIER; // [read-write] Software interrupt event register (EXTI_SWIER)
    volatile uint32_t PR;    // [read-write] Pending register (EXTI_PR)

    static constexpr uint32_t IMR_RESET_VALUE = 0xff840000;
    static constexpr uint32_t IMR_IM0 = 0x1;         // Interrupt Mask on line 0
    static constexpr uint32_t IMR_IM1 = 0x2;         // Interrupt Mask on line 1
    static constexpr uint32_t IMR_IM2 = 0x4;         // Interrupt Mask on line 2
    static constexpr uint32_t IMR_IM3 = 0x8;         // Interrupt Mask on line 3
    static constexpr uint32_t IMR_IM4 = 0x10;        // Interrupt Mask on line 4
    static constexpr uint32_t IMR_IM5 = 0x20;        // Interrupt Mask on line 5
    static constexpr uint32_t IMR_IM6 = 0x40;        // Interrupt Mask on line 6
    static constexpr uint32_t IMR_IM7 = 0x80;        // Interrupt Mask on line 7
    static constexpr uint32_t IMR_IM8 = 0x100;       // Interrupt Mask on line 8
    static constexpr uint32_t IMR_IM9 = 0x200;       // Interrupt Mask on line 9
    static constexpr uint32_t IMR_IM10 = 0x400;      // Interrupt Mask on line 10
    static constexpr uint32_t IMR_IM11 = 0x800;      // Interrupt Mask on line 11
    static constexpr uint32_t IMR_IM12 = 0x1000;     // Interrupt Mask on line 12
    static constexpr uint32_t IMR_IM13 = 0x2000;     // Interrupt Mask on line 13
    static constexpr uint32_t IMR_IM14 = 0x4000;     // Interrupt Mask on line 14
    static constexpr uint32_t IMR_IM15 = 0x8000;     // Interrupt Mask on line 15
    static constexpr uint32_t IMR_IM16 = 0x10000;    // Interrupt Mask on line 16
    static constexpr uint32_t IMR_IM17 = 0x20000;    // Interrupt Mask on line 17
    static constexpr uint32_t IMR_IM18 = 0x40000;    // Interrupt Mask on line 18
    static constexpr uint32_t IMR_IM19 = 0x80000;    // Interrupt Mask on line 19
    static constexpr uint32_t IMR_IM20 = 0x100000;   // Interrupt Mask on line 20
    static constexpr uint32_t IMR_IM21 = 0x200000;   // Interrupt Mask on line 21
    static constexpr uint32_t IMR_IM22 = 0x400000;   // Interrupt Mask on line 22
    static constexpr uint32_t IMR_IM23 = 0x800000;   // Interrupt Mask on line 23
    static constexpr uint32_t IMR_IM24 = 0x1000000;  // Interrupt Mask on line 24
    static constexpr uint32_t IMR_IM25 = 0x2000000;  // Interrupt Mask on line 25
    static constexpr uint32_t IMR_IM26 = 0x4000000;  // Interrupt Mask on line 27
    static constexpr uint32_t IMR_IM28 = 0x10000000; // Interrupt Mask on line 27
    static constexpr uint32_t IMR_IM29 = 0x20000000; // Interrupt Mask on line 27

    static constexpr uint32_t EMR_RESET_VALUE = 0x0;
    static constexpr uint32_t EMR_EM0 = 0x1;         // Event Mask on line 0
    static constexpr uint32_t EMR_EM1 = 0x2;         // Event Mask on line 1
    static constexpr uint32_t EMR_EM2 = 0x4;         // Event Mask on line 2
    static constexpr uint32_t EMR_EM3 = 0x8;         // Event Mask on line 3
    static constexpr uint32_t EMR_EM4 = 0x10;        // Event Mask on line 4
    static constexpr uint32_t EMR_EM5 = 0x20;        // Event Mask on line 5
    static constexpr uint32_t EMR_EM6 = 0x40;        // Event Mask on line 6
    static constexpr uint32_t EMR_EM7 = 0x80;        // Event Mask on line 7
    static constexpr uint32_t EMR_EM8 = 0x100;       // Event Mask on line 8
    static constexpr uint32_t EMR_EM9 = 0x200;       // Event Mask on line 9
    static constexpr uint32_t EMR_EM10 = 0x400;      // Event Mask on line 10
    static constexpr uint32_t EMR_EM11 = 0x800;      // Event Mask on line 11
    static constexpr uint32_t EMR_EM12 = 0x1000;     // Event Mask on line 12
    static constexpr uint32_t EMR_EM13 = 0x2000;     // Event Mask on line 13
    static constexpr uint32_t EMR_EM14 = 0x4000;     // Event Mask on line 14
    static constexpr uint32_t EMR_EM15 = 0x8000;     // Event Mask on line 15
    static constexpr uint32_t EMR_EM16 = 0x10000;    // Event Mask on line 16
    static constexpr uint32_t EMR_EM17 = 0x20000;    // Event Mask on line 17
    static constexpr uint32_t EMR_EM18 = 0x40000;    // Event Mask on line 18
    static constexpr uint32_t EMR_EM19 = 0x80000;    // Event Mask on line 19
    static constexpr uint32_t EMR_EM20 = 0x100000;   // Event Mask on line 20
    static constexpr uint32_t EMR_EM21 = 0x200000;   // Event Mask on line 21
    static constexpr uint32_t EMR_EM22 = 0x400000;   // Event Mask on line 22
    static constexpr uint32_t EMR_EM23 = 0x800000;   // Event Mask on line 23
    static constexpr uint32_t EMR_EM24 = 0x1000000;  // Event Mask on line 24
    static constexpr uint32_t EMR_EM25 = 0x2000000;  // Event Mask on line 25
    static constexpr uint32_t EMR_EM26 = 0x4000000;  // Event Mask on line 26
    static constexpr uint32_t EMR_EM28 = 0x10000000; // Event Mask on line 28
    static constexpr uint32_t EMR_EM29 = 0x20000000; // Event Mask on line 29

    static constexpr uint32_t RTSR_RESET_VALUE = 0x0;
    static constexpr uint32_t RTSR_RT0 = 0x1;       // Rising trigger event configuration of line 0
    static constexpr uint32_t RTSR_RT1 = 0x2;       // Rising trigger event configuration of line 1
    static constexpr uint32_t RTSR_RT2 = 0x4;       // Rising trigger event configuration of line 2
    static constexpr uint32_t RTSR_RT3 = 0x8;       // Rising trigger event configuration of line 3
    static constexpr uint32_t RTSR_RT4 = 0x10;      // Rising trigger event configuration of line 4
    static constexpr uint32_t RTSR_RT5 = 0x20;      // Rising trigger event configuration of line 5
    static constexpr uint32_t RTSR_RT6 = 0x40;      // Rising trigger event configuration of line 6
    static constexpr uint32_t RTSR_RT7 = 0x80;      // Rising trigger event configuration of line 7
    static constexpr uint32_t RTSR_RT8 = 0x100;     // Rising trigger event configuration of line 8
    static constexpr uint32_t RTSR_RT9 = 0x200;     // Rising trigger event configuration of line 9
    static constexpr uint32_t RTSR_RT10 = 0x400;    // Rising trigger event configuration of line 10
    static constexpr uint32_t RTSR_RT11 = 0x800;    // Rising trigger event configuration of line 11
    static constexpr uint32_t RTSR_RT12 = 0x1000;   // Rising trigger event configuration of line 12
    static constexpr uint32_t RTSR_RT13 = 0x2000;   // Rising trigger event configuration of line 13
    static constexpr uint32_t RTSR_RT14 = 0x4000;   // Rising trigger event configuration of line 14
    static constexpr uint32_t RTSR_RT15 = 0x8000;   // Rising trigger event configuration of line 15
    static constexpr uint32_t RTSR_RT16 = 0x10000;  // Rising trigger event configuration of line 16
    static constexpr uint32_t RTSR_RT17 = 0x20000;  // Rising trigger event configuration of line 17
    static constexpr uint32_t RTSR_RT19 = 0x80000;  // Rising trigger event configuration of line 19
    static constexpr uint32_t RTSR_RT20 = 0x100000; // Rising trigger event configuration of line 20
    static constexpr uint32_t RTSR_RT21 = 0x200000; // Rising trigger event configuration of line 21
    static constexpr uint32_t RTSR_RT22 = 0x400000; // Rising trigger event configuration of line 22

    static constexpr uint32_t FTSR_RESET_VALUE = 0x0;
    static constexpr uint32_t FTSR_FT0 = 0x1;       // Falling trigger event configuration of line 0
    static constexpr uint32_t FTSR_FT1 = 0x2;       // Falling trigger event configuration of line 1
    static constexpr uint32_t FTSR_FT2 = 0x4;       // Falling trigger event configuration of line 2
    static constexpr uint32_t FTSR_FT3 = 0x8;       // Falling trigger event configuration of line 3
    static constexpr uint32_t FTSR_FT4 = 0x10;      // Falling trigger event configuration of line 4
    static constexpr uint32_t FTSR_FT5 = 0x20;      // Falling trigger event configuration of line 5
    static constexpr uint32_t FTSR_FT6 = 0x40;      // Falling trigger event configuration of line 6
    static constexpr uint32_t FTSR_FT7 = 0x80;      // Falling trigger event configuration of line 7
    static constexpr uint32_t FTSR_FT8 = 0x100;     // Falling trigger event configuration of line 8
    static constexpr uint32_t FTSR_FT9 = 0x200;     // Falling trigger event configuration of line 9
    static constexpr uint32_t FTSR_FT10 = 0x400;    // Falling trigger event configuration of line 10
    static constexpr uint32_t FTSR_FT11 = 0x800;    // Falling trigger event configuration of line 11
    static constexpr uint32_t FTSR_FT12 = 0x1000;   // Falling trigger event configuration of line 12
    static constexpr uint32_t FTSR_FT13 = 0x2000;   // Falling trigger event configuration of line 13
    static constexpr uint32_t FTSR_FT14 = 0x4000;   // Falling trigger event configuration of line 14
    static constexpr uint32_t FTSR_FT15 = 0x8000;   // Falling trigger event configuration of line 15
    static constexpr uint32_t FTSR_FT16 = 0x10000;  // Falling trigger event configuration of line 16
    static constexpr uint32_t FTSR_FT17 = 0x20000;  // Falling trigger event configuration of line 17
    static constexpr uint32_t FTSR_FT19 = 0x80000;  // Falling trigger event configuration of line 19
    static constexpr uint32_t FTSR_FT20 = 0x100000; // Falling trigger event configuration of line 20
    static constexpr uint32_t FTSR_FT21 = 0x200000; // Falling trigger event configuration of line 21
    static constexpr uint32_t FTSR_FT22 = 0x400000; // Falling trigger event configuration of line 22

    static constexpr uint32_t SWIER_RESET_VALUE = 0x0;
    static constexpr uint32_t SWIER_SWI0 = 0x1;       // Software Interrupt on line 0
    static constexpr uint32_t SWIER_SWI1 = 0x2;       // Software Interrupt on line 1
    static constexpr uint32_t SWIER_SWI2 = 0x4;       // Software Interrupt on line 2
    static constexpr uint32_t SWIER_SWI3 = 0x8;       // Software Interrupt on line 3
    static constexpr uint32_t SWIER_SWI4 = 0x10;      // Software Interrupt on line 4
    static constexpr uint32_t SWIER_SWI5 = 0x20;      // Software Interrupt on line 5
    static constexpr uint32_t SWIER_SWI6 = 0x40;      // Software Interrupt on line 6
    static constexpr uint32_t SWIER_SWI7 = 0x80;      // Software Interrupt on line 7
    static constexpr uint32_t SWIER_SWI8 = 0x100;     // Software Interrupt on line 8
    static constexpr uint32_t SWIER_SWI9 = 0x200;     // Software Interrupt on line 9
    static constexpr uint32_t SWIER_SWI10 = 0x400;    // Software Interrupt on line 10
    static constexpr uint32_t SWIER_SWI11 = 0x800;    // Software Interrupt on line 11
    static constexpr uint32_t SWIER_SWI12 = 0x1000;   // Software Interrupt on line 12
    static constexpr uint32_t SWIER_SWI13 = 0x2000;   // Software Interrupt on line 13
    static constexpr uint32_t SWIER_SWI14 = 0x4000;   // Software Interrupt on line 14
    static constexpr uint32_t SWIER_SWI15 = 0x8000;   // Software Interrupt on line 15
    static constexpr uint32_t SWIER_SWI16 = 0x10000;  // Software Interrupt on line 16
    static constexpr uint32_t SWIER_SWI17 = 0x20000;  // Software Interrupt on line 17
    static constexpr uint32_t SWIER_SWI19 = 0x80000;  // Software Interrupt on line 19
    static constexpr uint32_t SWIER_SWI20 = 0x100000; // Software Interrupt on line 20
    static constexpr uint32_t SWIER_SWI21 = 0x200000; // Software Interrupt on line 21
    static constexpr uint32_t SWIER_SWI22 = 0x400000; // Software Interrupt on line 22

    static constexpr uint32_t PR_RESET_VALUE = 0x0;
    static constexpr uint32_t PR_PIF0 = 0x1;       // Pending bit 0
    static constexpr uint32_t PR_PIF1 = 0x2;       // Pending bit 1
    static constexpr uint32_t PR_PIF2 = 0x4;       // Pending bit 2
    static constexpr uint32_t PR_PIF3 = 0x8;       // Pending bit 3
    static constexpr uint32_t PR_PIF4 = 0x10;      // Pending bit 4
    static constexpr uint32_t PR_PIF5 = 0x20;      // Pending bit 5
    static constexpr uint32_t PR_PIF6 = 0x40;      // Pending bit 6
    static constexpr uint32_t PR_PIF7 = 0x80;      // Pending bit 7
    static constexpr uint32_t PR_PIF8 = 0x100;     // Pending bit 8
    static constexpr uint32_t PR_PIF9 = 0x200;     // Pending bit 9
    static constexpr uint32_t PR_PIF10 = 0x400;    // Pending bit 10
    static constexpr uint32_t PR_PIF11 = 0x800;    // Pending bit 11
    static constexpr uint32_t PR_PIF12 = 0x1000;   // Pending bit 12
    static constexpr uint32_t PR_PIF13 = 0x2000;   // Pending bit 13
    static constexpr uint32_t PR_PIF14 = 0x4000;   // Pending bit 14
    static constexpr uint32_t PR_PIF15 = 0x8000;   // Pending bit 15
    static constexpr uint32_t PR_PIF16 = 0x10000;  // Pending bit 16
    static constexpr uint32_t PR_PIF17 = 0x20000;  // Pending bit 17
    static constexpr uint32_t PR_PIF19 = 0x80000;  // Pending bit 19
    static constexpr uint32_t PR_PIF20 = 0x100000; // Pending bit 20
    static constexpr uint32_t PR_PIF21 = 0x200000; // Pending bit 21
    static constexpr uint32_t PR_PIF22 = 0x400000; // Pending bit 22
};


template<>
struct peripheral_t<STM32L0x0, EXTI>
{
    typedef stm32l0x0_exti_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x1, EXTI>
{
    typedef stm32l0x0_exti_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x2, EXTI>
{
    typedef stm32l0x0_exti_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x3, EXTI>
{
    typedef stm32l0x0_exti_t T;
    static T& V;
};

using exti_t = peripheral_t<mcu_svd, EXTI>;

