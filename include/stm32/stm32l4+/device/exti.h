#pragma once

////
//
//      STM32L4+ EXTI peripherals
//
////

////
//
//      External interrupt/event controller
//
////

struct stm32l4p5_exti_t
{
    volatile uint32_t IMR1;   // [read-write] Interrupt mask register
    volatile uint32_t EMR1;   // [read-write] Event mask register
    volatile uint32_t RTSR1;  // [read-write] Rising Trigger selection register
    volatile uint32_t FTSR1;  // [read-write] Falling Trigger selection register
    volatile uint32_t SWIER1; // [read-write] Software interrupt event register
    volatile uint32_t PR1;    // [read-write] Pending register
    reserved_t<0x2> _0x20;
    volatile uint32_t IMR2;   // [read-write] Interrupt mask register
    volatile uint32_t EMR2;   // [read-write] Event mask register
    volatile uint32_t RTSR2;  // [read-write] Rising Trigger selection register
    volatile uint32_t FTSR2;  // [read-write] Falling Trigger selection register
    volatile uint32_t SWIER2; // [read-write] Software interrupt event register
    volatile uint32_t PR2;    // [read-write] Pending register

    static constexpr uint32_t IMR1_RESET_VALUE = 0xff820000;
    static constexpr uint32_t IMR1_MR0 = 0x1;         // Interrupt Mask on line 0
    static constexpr uint32_t IMR1_MR1 = 0x2;         // Interrupt Mask on line 1
    static constexpr uint32_t IMR1_MR2 = 0x4;         // Interrupt Mask on line 2
    static constexpr uint32_t IMR1_MR3 = 0x8;         // Interrupt Mask on line 3
    static constexpr uint32_t IMR1_MR4 = 0x10;        // Interrupt Mask on line 4
    static constexpr uint32_t IMR1_MR5 = 0x20;        // Interrupt Mask on line 5
    static constexpr uint32_t IMR1_MR6 = 0x40;        // Interrupt Mask on line 6
    static constexpr uint32_t IMR1_MR7 = 0x80;        // Interrupt Mask on line 7
    static constexpr uint32_t IMR1_MR8 = 0x100;       // Interrupt Mask on line 8
    static constexpr uint32_t IMR1_MR9 = 0x200;       // Interrupt Mask on line 9
    static constexpr uint32_t IMR1_MR10 = 0x400;      // Interrupt Mask on line 10
    static constexpr uint32_t IMR1_MR11 = 0x800;      // Interrupt Mask on line 11
    static constexpr uint32_t IMR1_MR12 = 0x1000;     // Interrupt Mask on line 12
    static constexpr uint32_t IMR1_MR13 = 0x2000;     // Interrupt Mask on line 13
    static constexpr uint32_t IMR1_MR14 = 0x4000;     // Interrupt Mask on line 14
    static constexpr uint32_t IMR1_MR15 = 0x8000;     // Interrupt Mask on line 15
    static constexpr uint32_t IMR1_MR16 = 0x10000;    // Interrupt Mask on line 16
    static constexpr uint32_t IMR1_MR17 = 0x20000;    // Interrupt Mask on line 17
    static constexpr uint32_t IMR1_MR18 = 0x40000;    // Interrupt Mask on line 18
    static constexpr uint32_t IMR1_MR19 = 0x80000;    // Interrupt Mask on line 19
    static constexpr uint32_t IMR1_MR20 = 0x100000;   // Interrupt Mask on line 20
    static constexpr uint32_t IMR1_MR21 = 0x200000;   // Interrupt Mask on line 21
    static constexpr uint32_t IMR1_MR22 = 0x400000;   // Interrupt Mask on line 22
    static constexpr uint32_t IMR1_MR23 = 0x800000;   // Interrupt Mask on line 23
    static constexpr uint32_t IMR1_MR24 = 0x1000000;  // Interrupt Mask on line 24
    static constexpr uint32_t IMR1_MR25 = 0x2000000;  // Interrupt Mask on line 25
    static constexpr uint32_t IMR1_MR26 = 0x4000000;  // Interrupt Mask on line 26
    static constexpr uint32_t IMR1_MR27 = 0x8000000;  // Interrupt Mask on line 27
    static constexpr uint32_t IMR1_MR28 = 0x10000000; // Interrupt Mask on line 28
    static constexpr uint32_t IMR1_MR29 = 0x20000000; // Interrupt Mask on line 29
    static constexpr uint32_t IMR1_MR30 = 0x40000000; // Interrupt Mask on line 30
    static constexpr uint32_t IMR1_MR31 = 0x80000000; // Interrupt Mask on line 31

    static constexpr uint32_t EMR1_RESET_VALUE = 0x0;
    static constexpr uint32_t EMR1_MR0 = 0x1;         // Event Mask on line 0
    static constexpr uint32_t EMR1_MR1 = 0x2;         // Event Mask on line 1
    static constexpr uint32_t EMR1_MR2 = 0x4;         // Event Mask on line 2
    static constexpr uint32_t EMR1_MR3 = 0x8;         // Event Mask on line 3
    static constexpr uint32_t EMR1_MR4 = 0x10;        // Event Mask on line 4
    static constexpr uint32_t EMR1_MR5 = 0x20;        // Event Mask on line 5
    static constexpr uint32_t EMR1_MR6 = 0x40;        // Event Mask on line 6
    static constexpr uint32_t EMR1_MR7 = 0x80;        // Event Mask on line 7
    static constexpr uint32_t EMR1_MR8 = 0x100;       // Event Mask on line 8
    static constexpr uint32_t EMR1_MR9 = 0x200;       // Event Mask on line 9
    static constexpr uint32_t EMR1_MR10 = 0x400;      // Event Mask on line 10
    static constexpr uint32_t EMR1_MR11 = 0x800;      // Event Mask on line 11
    static constexpr uint32_t EMR1_MR12 = 0x1000;     // Event Mask on line 12
    static constexpr uint32_t EMR1_MR13 = 0x2000;     // Event Mask on line 13
    static constexpr uint32_t EMR1_MR14 = 0x4000;     // Event Mask on line 14
    static constexpr uint32_t EMR1_MR15 = 0x8000;     // Event Mask on line 15
    static constexpr uint32_t EMR1_MR16 = 0x10000;    // Event Mask on line 16
    static constexpr uint32_t EMR1_MR17 = 0x20000;    // Event Mask on line 17
    static constexpr uint32_t EMR1_MR18 = 0x40000;    // Event Mask on line 18
    static constexpr uint32_t EMR1_MR19 = 0x80000;    // Event Mask on line 19
    static constexpr uint32_t EMR1_MR20 = 0x100000;   // Event Mask on line 20
    static constexpr uint32_t EMR1_MR21 = 0x200000;   // Event Mask on line 21
    static constexpr uint32_t EMR1_MR22 = 0x400000;   // Event Mask on line 22
    static constexpr uint32_t EMR1_MR23 = 0x800000;   // Event Mask on line 23
    static constexpr uint32_t EMR1_MR24 = 0x1000000;  // Event Mask on line 24
    static constexpr uint32_t EMR1_MR25 = 0x2000000;  // Event Mask on line 25
    static constexpr uint32_t EMR1_MR26 = 0x4000000;  // Event Mask on line 26
    static constexpr uint32_t EMR1_MR27 = 0x8000000;  // Event Mask on line 27
    static constexpr uint32_t EMR1_MR28 = 0x10000000; // Event Mask on line 28
    static constexpr uint32_t EMR1_MR29 = 0x20000000; // Event Mask on line 29
    static constexpr uint32_t EMR1_MR30 = 0x40000000; // Event Mask on line 30
    static constexpr uint32_t EMR1_MR31 = 0x80000000; // Event Mask on line 31

    static constexpr uint32_t RTSR1_RESET_VALUE = 0x0;
    static constexpr uint32_t RTSR1_TR0 = 0x1;       // Rising trigger event configuration of line 0
    static constexpr uint32_t RTSR1_TR1 = 0x2;       // Rising trigger event configuration of line 1
    static constexpr uint32_t RTSR1_TR2 = 0x4;       // Rising trigger event configuration of line 2
    static constexpr uint32_t RTSR1_TR3 = 0x8;       // Rising trigger event configuration of line 3
    static constexpr uint32_t RTSR1_TR4 = 0x10;      // Rising trigger event configuration of line 4
    static constexpr uint32_t RTSR1_TR5 = 0x20;      // Rising trigger event configuration of line 5
    static constexpr uint32_t RTSR1_TR6 = 0x40;      // Rising trigger event configuration of line 6
    static constexpr uint32_t RTSR1_TR7 = 0x80;      // Rising trigger event configuration of line 7
    static constexpr uint32_t RTSR1_TR8 = 0x100;     // Rising trigger event configuration of line 8
    static constexpr uint32_t RTSR1_TR9 = 0x200;     // Rising trigger event configuration of line 9
    static constexpr uint32_t RTSR1_TR10 = 0x400;    // Rising trigger event configuration of line 10
    static constexpr uint32_t RTSR1_TR11 = 0x800;    // Rising trigger event configuration of line 11
    static constexpr uint32_t RTSR1_TR12 = 0x1000;   // Rising trigger event configuration of line 12
    static constexpr uint32_t RTSR1_TR13 = 0x2000;   // Rising trigger event configuration of line 13
    static constexpr uint32_t RTSR1_TR14 = 0x4000;   // Rising trigger event configuration of line 14
    static constexpr uint32_t RTSR1_TR15 = 0x8000;   // Rising trigger event configuration of line 15
    static constexpr uint32_t RTSR1_TR16 = 0x10000;  // Rising trigger event configuration of line 16
    static constexpr uint32_t RTSR1_TR18 = 0x40000;  // Rising trigger event configuration of line 18
    static constexpr uint32_t RTSR1_TR19 = 0x80000;  // Rising trigger event configuration of line 19
    static constexpr uint32_t RTSR1_TR20 = 0x100000; // Rising trigger event configuration of line 20
    static constexpr uint32_t RTSR1_TR21 = 0x200000; // Rising trigger event configuration of line 21
    static constexpr uint32_t RTSR1_TR22 = 0x400000; // Rising trigger event configuration of line 22

    static constexpr uint32_t FTSR1_RESET_VALUE = 0x0;
    static constexpr uint32_t FTSR1_TR0 = 0x1;       // Falling trigger event configuration of line 0
    static constexpr uint32_t FTSR1_TR1 = 0x2;       // Falling trigger event configuration of line 1
    static constexpr uint32_t FTSR1_TR2 = 0x4;       // Falling trigger event configuration of line 2
    static constexpr uint32_t FTSR1_TR3 = 0x8;       // Falling trigger event configuration of line 3
    static constexpr uint32_t FTSR1_TR4 = 0x10;      // Falling trigger event configuration of line 4
    static constexpr uint32_t FTSR1_TR5 = 0x20;      // Falling trigger event configuration of line 5
    static constexpr uint32_t FTSR1_TR6 = 0x40;      // Falling trigger event configuration of line 6
    static constexpr uint32_t FTSR1_TR7 = 0x80;      // Falling trigger event configuration of line 7
    static constexpr uint32_t FTSR1_TR8 = 0x100;     // Falling trigger event configuration of line 8
    static constexpr uint32_t FTSR1_TR9 = 0x200;     // Falling trigger event configuration of line 9
    static constexpr uint32_t FTSR1_TR10 = 0x400;    // Falling trigger event configuration of line 10
    static constexpr uint32_t FTSR1_TR11 = 0x800;    // Falling trigger event configuration of line 11
    static constexpr uint32_t FTSR1_TR12 = 0x1000;   // Falling trigger event configuration of line 12
    static constexpr uint32_t FTSR1_TR13 = 0x2000;   // Falling trigger event configuration of line 13
    static constexpr uint32_t FTSR1_TR14 = 0x4000;   // Falling trigger event configuration of line 14
    static constexpr uint32_t FTSR1_TR15 = 0x8000;   // Falling trigger event configuration of line 15
    static constexpr uint32_t FTSR1_TR16 = 0x10000;  // Falling trigger event configuration of line 16
    static constexpr uint32_t FTSR1_TR18 = 0x40000;  // Falling trigger event configuration of line 18
    static constexpr uint32_t FTSR1_TR19 = 0x80000;  // Falling trigger event configuration of line 19
    static constexpr uint32_t FTSR1_TR20 = 0x100000; // Falling trigger event configuration of line 20
    static constexpr uint32_t FTSR1_TR21 = 0x200000; // Falling trigger event configuration of line 21
    static constexpr uint32_t FTSR1_TR22 = 0x400000; // Falling trigger event configuration of line 22

    static constexpr uint32_t SWIER1_RESET_VALUE = 0x0;
    static constexpr uint32_t SWIER1_SWIER0 = 0x1;       // Software Interrupt on line 0
    static constexpr uint32_t SWIER1_SWIER1 = 0x2;       // Software Interrupt on line 1
    static constexpr uint32_t SWIER1_SWIER2 = 0x4;       // Software Interrupt on line 2
    static constexpr uint32_t SWIER1_SWIER3 = 0x8;       // Software Interrupt on line 3
    static constexpr uint32_t SWIER1_SWIER4 = 0x10;      // Software Interrupt on line 4
    static constexpr uint32_t SWIER1_SWIER5 = 0x20;      // Software Interrupt on line 5
    static constexpr uint32_t SWIER1_SWIER6 = 0x40;      // Software Interrupt on line 6
    static constexpr uint32_t SWIER1_SWIER7 = 0x80;      // Software Interrupt on line 7
    static constexpr uint32_t SWIER1_SWIER8 = 0x100;     // Software Interrupt on line 8
    static constexpr uint32_t SWIER1_SWIER9 = 0x200;     // Software Interrupt on line 9
    static constexpr uint32_t SWIER1_SWIER10 = 0x400;    // Software Interrupt on line 10
    static constexpr uint32_t SWIER1_SWIER11 = 0x800;    // Software Interrupt on line 11
    static constexpr uint32_t SWIER1_SWIER12 = 0x1000;   // Software Interrupt on line 12
    static constexpr uint32_t SWIER1_SWIER13 = 0x2000;   // Software Interrupt on line 13
    static constexpr uint32_t SWIER1_SWIER14 = 0x4000;   // Software Interrupt on line 14
    static constexpr uint32_t SWIER1_SWIER15 = 0x8000;   // Software Interrupt on line 15
    static constexpr uint32_t SWIER1_SWIER16 = 0x10000;  // Software Interrupt on line 16
    static constexpr uint32_t SWIER1_SWIER18 = 0x40000;  // Software Interrupt on line 18
    static constexpr uint32_t SWIER1_SWIER19 = 0x80000;  // Software Interrupt on line 19
    static constexpr uint32_t SWIER1_SWIER20 = 0x100000; // Software Interrupt on line 20
    static constexpr uint32_t SWIER1_SWIER21 = 0x200000; // Software Interrupt on line 21
    static constexpr uint32_t SWIER1_SWIER22 = 0x400000; // Software Interrupt on line 22

    static constexpr uint32_t PR1_RESET_VALUE = 0x0;
    static constexpr uint32_t PR1_PR0 = 0x1;       // Pending bit 0
    static constexpr uint32_t PR1_PR1 = 0x2;       // Pending bit 1
    static constexpr uint32_t PR1_PR2 = 0x4;       // Pending bit 2
    static constexpr uint32_t PR1_PR3 = 0x8;       // Pending bit 3
    static constexpr uint32_t PR1_PR4 = 0x10;      // Pending bit 4
    static constexpr uint32_t PR1_PR5 = 0x20;      // Pending bit 5
    static constexpr uint32_t PR1_PR6 = 0x40;      // Pending bit 6
    static constexpr uint32_t PR1_PR7 = 0x80;      // Pending bit 7
    static constexpr uint32_t PR1_PR8 = 0x100;     // Pending bit 8
    static constexpr uint32_t PR1_PR9 = 0x200;     // Pending bit 9
    static constexpr uint32_t PR1_PR10 = 0x400;    // Pending bit 10
    static constexpr uint32_t PR1_PR11 = 0x800;    // Pending bit 11
    static constexpr uint32_t PR1_PR12 = 0x1000;   // Pending bit 12
    static constexpr uint32_t PR1_PR13 = 0x2000;   // Pending bit 13
    static constexpr uint32_t PR1_PR14 = 0x4000;   // Pending bit 14
    static constexpr uint32_t PR1_PR15 = 0x8000;   // Pending bit 15
    static constexpr uint32_t PR1_PR16 = 0x10000;  // Pending bit 16
    static constexpr uint32_t PR1_PR18 = 0x40000;  // Pending bit 18
    static constexpr uint32_t PR1_PR19 = 0x80000;  // Pending bit 19
    static constexpr uint32_t PR1_PR20 = 0x100000; // Pending bit 20
    static constexpr uint32_t PR1_PR21 = 0x200000; // Pending bit 21
    static constexpr uint32_t PR1_PR22 = 0x400000; // Pending bit 22

    static constexpr uint32_t IMR2_RESET_VALUE = 0xffffff87;
    static constexpr uint32_t IMR2_MR32 = 0x1;  // Interrupt Mask on external/internal line 32
    static constexpr uint32_t IMR2_MR33 = 0x2;  // Interrupt Mask on external/internal line 33
    static constexpr uint32_t IMR2_MR34 = 0x4;  // Interrupt Mask on external/internal line 34
    static constexpr uint32_t IMR2_MR35 = 0x8;  // Interrupt Mask on external/internal line 35
    static constexpr uint32_t IMR2_MR36 = 0x10; // Interrupt Mask on external/internal line 36
    static constexpr uint32_t IMR2_MR37 = 0x20; // Interrupt Mask on external/internal line 37
    static constexpr uint32_t IMR2_MR38 = 0x40; // Interrupt Mask on external/internal line 38
    static constexpr uint32_t IMR2_MR39 = 0x80; // Interrupt Mask on external/internal line 39

    static constexpr uint32_t EMR2_RESET_VALUE = 0x0;
    static constexpr uint32_t EMR2_MR32 = 0x1;  // Event mask on external/internal line 32
    static constexpr uint32_t EMR2_MR33 = 0x2;  // Event mask on external/internal line 33
    static constexpr uint32_t EMR2_MR34 = 0x4;  // Event mask on external/internal line 34
    static constexpr uint32_t EMR2_MR35 = 0x8;  // Event mask on external/internal line 35
    static constexpr uint32_t EMR2_MR36 = 0x10; // Event mask on external/internal line 36
    static constexpr uint32_t EMR2_MR37 = 0x20; // Event mask on external/internal line 37
    static constexpr uint32_t EMR2_MR38 = 0x40; // Event mask on external/internal line 38
    static constexpr uint32_t EMR2_MR39 = 0x80; // Event mask on external/internal line 39

    static constexpr uint32_t RTSR2_RESET_VALUE = 0x0;
    static constexpr uint32_t RTSR2_RT35 = 0x8;  // Rising trigger event configuration bit of line 35
    static constexpr uint32_t RTSR2_RT36 = 0x10; // Rising trigger event configuration bit of line 36
    static constexpr uint32_t RTSR2_RT37 = 0x20; // Rising trigger event configuration bit of line 37
    static constexpr uint32_t RTSR2_RT38 = 0x40; // Rising trigger event configuration bit of line 38

    static constexpr uint32_t FTSR2_RESET_VALUE = 0x0;
    static constexpr uint32_t FTSR2_FT35 = 0x8;  // Falling trigger event configuration bit of line 35
    static constexpr uint32_t FTSR2_FT36 = 0x10; // Falling trigger event configuration bit of line 36
    static constexpr uint32_t FTSR2_FT37 = 0x20; // Falling trigger event configuration bit of line 37
    static constexpr uint32_t FTSR2_FT38 = 0x40; // Falling trigger event configuration bit of line 38

    static constexpr uint32_t SWIER2_RESET_VALUE = 0x0;
    static constexpr uint32_t SWIER2_SWI35 = 0x8;  // Software interrupt on line 35
    static constexpr uint32_t SWIER2_SWI36 = 0x10; // Software interrupt on line 36
    static constexpr uint32_t SWIER2_SWI37 = 0x20; // Software interrupt on line 37
    static constexpr uint32_t SWIER2_SWI38 = 0x40; // Software interrupt on line 38

    static constexpr uint32_t PR2_RESET_VALUE = 0x0;
    static constexpr uint32_t PR2_PIF35 = 0x8;  // Pending interrupt flag on line 35
    static constexpr uint32_t PR2_PIF36 = 0x10; // Pending interrupt flag on line 36
    static constexpr uint32_t PR2_PIF37 = 0x20; // Pending interrupt flag on line 37
    static constexpr uint32_t PR2_PIF38 = 0x40; // Pending interrupt flag on line 38
};


template<>
struct peripheral_t<STM32L4P5, EXTI>
{
    typedef stm32l4p5_exti_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4Q5, EXTI>
{
    typedef stm32l4p5_exti_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R5, EXTI>
{
    typedef stm32l4p5_exti_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R7, EXTI>
{
    typedef stm32l4p5_exti_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R9, EXTI>
{
    typedef stm32l4p5_exti_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S5, EXTI>
{
    typedef stm32l4p5_exti_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S7, EXTI>
{
    typedef stm32l4p5_exti_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S9, EXTI>
{
    typedef stm32l4p5_exti_t T;
    static T& V;
};

using exti_t = peripheral_t<mcu_svd, EXTI>;

