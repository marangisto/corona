#pragma once

////
//
//      STM32G0 EXTI peripherals
//
////

////
//
//      External interrupt/event controller
//
////

struct stm32g030_exti_t
{
    volatile uint32_t RTSR1;   // [read-write] EXTI rising trigger selection register
    volatile uint32_t FTSR1;   // [read-write] EXTI falling trigger selection register
    volatile uint32_t SWIER1;  // [read-write] EXTI software interrupt event register
    volatile uint32_t RPR1;    // [read-write] EXTI rising edge pending register
    volatile uint32_t FPR1;    // [read-write] EXTI falling edge pending register
    reserved_t<0x13> _0x60;
    volatile uint32_t EXTICR1; // [read-write] EXTI external interrupt selection register
    volatile uint32_t EXTICR2; // [read-write] EXTI external interrupt selection register
    volatile uint32_t EXTICR3; // [read-write] EXTI external interrupt selection register
    volatile uint32_t EXTICR4; // [read-write] EXTI external interrupt selection register
    reserved_t<0x4> _0x80;
    volatile uint32_t IMR1;    // [read-write] EXTI CPU wakeup with interrupt mask register
    volatile uint32_t EMR1;    // [read-write] EXTI CPU wakeup with event mask register

    static constexpr uint32_t RTSR1_RESET_VALUE = 0x0;
    static constexpr uint32_t RTSR1_TR0 = 0x1;      // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR1_TR1 = 0x2;      // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR1_TR2 = 0x4;      // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR1_TR3 = 0x8;      // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR1_TR4 = 0x10;     // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR1_TR5 = 0x20;     // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR1_TR6 = 0x40;     // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR1_TR7 = 0x80;     // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR1_TR8 = 0x100;    // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR1_TR9 = 0x200;    // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR1_TR10 = 0x400;   // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR1_TR11 = 0x800;   // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR1_TR12 = 0x1000;  // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR1_TR13 = 0x2000;  // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR1_TR14 = 0x4000;  // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR1_TR15 = 0x8000;  // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR1_TR16 = 0x10000; // Rising trigger event configuration bit of Configurable Event input

    static constexpr uint32_t FTSR1_RESET_VALUE = 0x0;
    static constexpr uint32_t FTSR1_TR0 = 0x1;      // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR1_TR1 = 0x2;      // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR1_TR2 = 0x4;      // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR1_TR3 = 0x8;      // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR1_TR4 = 0x10;     // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR1_TR5 = 0x20;     // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR1_TR6 = 0x40;     // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR1_TR7 = 0x80;     // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR1_TR8 = 0x100;    // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR1_TR9 = 0x200;    // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR1_TR10 = 0x400;   // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR1_TR11 = 0x800;   // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR1_TR12 = 0x1000;  // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR1_TR13 = 0x2000;  // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR1_TR14 = 0x4000;  // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR1_TR15 = 0x8000;  // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR1_TR16 = 0x10000; // Rising trigger event configuration bit of Configurable Event input

    static constexpr uint32_t SWIER1_RESET_VALUE = 0x0;
    static constexpr uint32_t SWIER1_SWIER0 = 0x1;      // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t SWIER1_SWIER1 = 0x2;      // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t SWIER1_SWIER2 = 0x4;      // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t SWIER1_SWIER3 = 0x8;      // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t SWIER1_SWIER4 = 0x10;     // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t SWIER1_SWIER5 = 0x20;     // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t SWIER1_SWIER6 = 0x40;     // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t SWIER1_SWIER7 = 0x80;     // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t SWIER1_SWIER8 = 0x100;    // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t SWIER1_SWIER9 = 0x200;    // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t SWIER1_SWIER10 = 0x400;   // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t SWIER1_SWIER11 = 0x800;   // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t SWIER1_SWIER12 = 0x1000;  // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t SWIER1_SWIER13 = 0x2000;  // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t SWIER1_SWIER14 = 0x4000;  // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t SWIER1_SWIER15 = 0x8000;  // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t SWIER1_SWIER16 = 0x10000; // Rising trigger event configuration bit of Configurable Event input

    static constexpr uint32_t RPR1_RESET_VALUE = 0x0;
    static constexpr uint32_t RPR1_RPIF0 = 0x1;      // configurable event inputs x rising edge Pending bit.
    static constexpr uint32_t RPR1_RPIF1 = 0x2;      // configurable event inputs x rising edge Pending bit.
    static constexpr uint32_t RPR1_RPIF2 = 0x4;      // configurable event inputs x rising edge Pending bit.
    static constexpr uint32_t RPR1_RPIF3 = 0x8;      // configurable event inputs x rising edge Pending bit.
    static constexpr uint32_t RPR1_RPIF4 = 0x10;     // configurable event inputs x rising edge Pending bit.
    static constexpr uint32_t RPR1_RPIF5 = 0x20;     // configurable event inputs x rising edge Pending bit
    static constexpr uint32_t RPR1_RPIF6 = 0x40;     // configurable event inputs x rising edge Pending bit.
    static constexpr uint32_t RPR1_RPIF7 = 0x80;     // configurable event inputs x rising edge Pending bit.
    static constexpr uint32_t RPR1_RPIF8 = 0x100;    // configurable event inputs x rising edge Pending bit.
    static constexpr uint32_t RPR1_RPIF9 = 0x200;    // configurable event inputs x rising edge Pending bit.
    static constexpr uint32_t RPR1_RPIF10 = 0x400;   // configurable event inputs x rising edge Pending bit.
    static constexpr uint32_t RPR1_RPIF11 = 0x800;   // configurable event inputs x rising edge Pending bit.
    static constexpr uint32_t RPR1_RPIF12 = 0x1000;  // configurable event inputs x rising edge Pending bit.
    static constexpr uint32_t RPR1_RPIF13 = 0x2000;  // configurable event inputs x rising edge Pending bit.
    static constexpr uint32_t RPR1_RPIF14 = 0x4000;  // configurable event inputs x rising edge Pending bit.
    static constexpr uint32_t RPR1_RPIF15 = 0x8000;  // configurable event inputs x rising edge Pending bit.
    static constexpr uint32_t RPR1_RPIF16 = 0x10000; // configurable event inputs x rising edge Pending bit.

    static constexpr uint32_t FPR1_RESET_VALUE = 0x0;
    static constexpr uint32_t FPR1_FPIF0 = 0x1;      // configurable event inputs x falling edge pending bit.
    static constexpr uint32_t FPR1_FPIF1 = 0x2;      // configurable event inputs x falling edge pending bit.
    static constexpr uint32_t FPR1_FPIF2 = 0x4;      // configurable event inputs x falling edge pending bit.
    static constexpr uint32_t FPR1_FPIF3 = 0x8;      // configurable event inputs x falling edge pending bit.
    static constexpr uint32_t FPR1_FPIF4 = 0x10;     // configurable event inputs x falling edge pending bit.
    static constexpr uint32_t FPR1_FPIF5 = 0x20;     // configurable event inputs x falling edge pending bit.
    static constexpr uint32_t FPR1_FPIF6 = 0x40;     // configurable event inputs x falling edge pending bit.
    static constexpr uint32_t FPR1_FPIF7 = 0x80;     // configurable event inputs x falling edge pending bit.
    static constexpr uint32_t FPR1_FPIF8 = 0x100;    // configurable event inputs x falling edge pending bit.
    static constexpr uint32_t FPR1_FPIF9 = 0x200;    // configurable event inputs x falling edge pending bit.
    static constexpr uint32_t FPR1_FPIF10 = 0x400;   // configurable event inputs x falling edge pending bit.
    static constexpr uint32_t FPR1_FPIF11 = 0x800;   // configurable event inputs x falling edge pending bit.
    static constexpr uint32_t FPR1_FPIF12 = 0x1000;  // configurable event inputs x falling edge pending bit.
    static constexpr uint32_t FPR1_FPIF13 = 0x2000;  // configurable event inputs x falling edge pending bit.
    static constexpr uint32_t FPR1_FPIF14 = 0x4000;  // configurable event inputs x falling edge pending bit.
    static constexpr uint32_t FPR1_FPIF15 = 0x8000;  // configurable event inputs x falling edge pending bit.
    static constexpr uint32_t FPR1_FPIF16 = 0x10000; // configurable event inputs x falling edge pending bit.

    static constexpr uint32_t EXTICR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EXTICR1_EXTI0_7 =     // GPIO port selection
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR1_EXTI8_15 =    // GPIO port selection
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR1_EXTI16_23 =   // GPIO port selection
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR1_EXTI24_31 =   // GPIO port selection
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t EXTICR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EXTICR2_EXTI0_7 =     // GPIO port selection
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR2_EXTI8_15 =    // GPIO port selection
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR2_EXTI16_23 =   // GPIO port selection
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR2_EXTI24_31 =   // GPIO port selection
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t EXTICR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EXTICR3_EXTI0_7 =     // GPIO port selection
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR3_EXTI8_15 =    // GPIO port selection
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR3_EXTI16_23 =   // GPIO port selection
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR3_EXTI24_31 =   // GPIO port selection
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t EXTICR4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EXTICR4_EXTI0_7 =     // GPIO port selection
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR4_EXTI8_15 =    // GPIO port selection
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR4_EXTI16_23 =   // GPIO port selection
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR4_EXTI24_31 =   // GPIO port selection
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t IMR1_RESET_VALUE = 0xfff80000;
    static constexpr uint32_t IMR1_IM0 = 0x1;         // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM1 = 0x2;         // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM2 = 0x4;         // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM3 = 0x8;         // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM4 = 0x10;        // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM5 = 0x20;        // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM6 = 0x40;        // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM7 = 0x80;        // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM8 = 0x100;       // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM9 = 0x200;       // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM10 = 0x400;      // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM11 = 0x800;      // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM12 = 0x1000;     // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM13 = 0x2000;     // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM14 = 0x4000;     // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM15 = 0x8000;     // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM16 = 0x10000;    // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM19 = 0x80000;    // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM20 = 0x100000;   // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM21 = 0x200000;   // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM22 = 0x400000;   // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM23 = 0x800000;   // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM24 = 0x1000000;  // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM25 = 0x2000000;  // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM26 = 0x4000000;  // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM28 = 0x10000000; // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM29 = 0x20000000; // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM30 = 0x40000000; // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM31 = 0x80000000; // CPU wakeup with interrupt mask on event input

    static constexpr uint32_t EMR1_RESET_VALUE = 0x0;
    static constexpr uint32_t EMR1_EM0 = 0x1;         // CPU wakeup with event mask on event input
    static constexpr uint32_t EMR1_EM1 = 0x2;         // CPU wakeup with event mask on event input
    static constexpr uint32_t EMR1_EM2 = 0x4;         // CPU wakeup with event mask on event input
    static constexpr uint32_t EMR1_EM3 = 0x8;         // CPU wakeup with event mask on event input
    static constexpr uint32_t EMR1_EM4 = 0x10;        // CPU wakeup with event mask on event input
    static constexpr uint32_t EMR1_EM5 = 0x20;        // CPU wakeup with event mask on event input
    static constexpr uint32_t EMR1_EM6 = 0x40;        // CPU wakeup with event mask on event input
    static constexpr uint32_t EMR1_EM7 = 0x80;        // CPU wakeup with event mask on event input
    static constexpr uint32_t EMR1_EM8 = 0x100;       // CPU wakeup with event mask on event input
    static constexpr uint32_t EMR1_EM9 = 0x200;       // CPU wakeup with event mask on event input
    static constexpr uint32_t EMR1_EM10 = 0x400;      // CPU wakeup with event mask on event input
    static constexpr uint32_t EMR1_EM11 = 0x800;      // CPU wakeup with event mask on event input
    static constexpr uint32_t EMR1_EM12 = 0x1000;     // CPU wakeup with event mask on event input
    static constexpr uint32_t EMR1_EM13 = 0x2000;     // CPU wakeup with event mask on event input
    static constexpr uint32_t EMR1_EM14 = 0x4000;     // CPU wakeup with event mask on event input
    static constexpr uint32_t EMR1_EM15 = 0x8000;     // CPU wakeup with event mask on event input
    static constexpr uint32_t EMR1_EM16 = 0x10000;    // CPU wakeup with event mask on event input
    static constexpr uint32_t EMR1_EM19 = 0x80000;    // CPU wakeup with event mask on event input
    static constexpr uint32_t EMR1_EM21 = 0x200000;   // CPU wakeup with event mask on event input
    static constexpr uint32_t EMR1_EM23 = 0x800000;   // CPU wakeup with event mask on event input
    static constexpr uint32_t EMR1_EM25 = 0x2000000;  // CPU wakeup with event mask on event input
    static constexpr uint32_t EMR1_EM26 = 0x4000000;  // CPU wakeup with event mask on event input
    static constexpr uint32_t EMR1_EM28 = 0x10000000; // CPU wakeup with event mask on event input
    static constexpr uint32_t EMR1_EM29 = 0x20000000; // CPU wakeup with event mask on event input
    static constexpr uint32_t EMR1_EM30 = 0x40000000; // CPU wakeup with event mask on event input
    static constexpr uint32_t EMR1_EM31 = 0x80000000; // CPU wakeup with event mask on event input
};


////
//
//      External interrupt/event controller
//
////

struct stm32g070_exti_t
{
    volatile uint32_t RTSR1;   // [read-write] EXTI rising trigger selection register
    volatile uint32_t FTSR1;   // [read-write] EXTI falling trigger selection register
    volatile uint32_t SWIER1;  // [read-write] EXTI software interrupt event register
    volatile uint32_t RPR1;    // [read-write] EXTI rising edge pending register
    volatile uint32_t FPR1;    // [read-write] EXTI falling edge pending register
    reserved_t<0x13> _0x60;
    volatile uint32_t EXTICR1; // [read-write] EXTI external interrupt selection register
    volatile uint32_t EXTICR2; // [read-write] EXTI external interrupt selection register
    volatile uint32_t EXTICR3; // [read-write] EXTI external interrupt selection register
    volatile uint32_t EXTICR4; // [read-write] EXTI external interrupt selection register
    reserved_t<0x4> _0x80;
    volatile uint32_t IMR1;    // [read-write] EXTI CPU wakeup with interrupt mask register
    volatile uint32_t EMR1;    // [read-write] EXTI CPU wakeup with event mask register
    reserved_t<0x3> _0x90;
    volatile uint32_t IMR2;    // [read-write] EXTI CPU wakeup with interrupt mask register
    volatile uint32_t EMR2;    // [read-write] EXTI CPU wakeup with event mask register
    reserved_t<0xd0> _0x3d8;
    volatile uint32_t HWCFGR7; // [read-write] Hardware configuration registers
    volatile uint32_t HWCFGR6; // [read-write] Hardware configuration registers
    volatile uint32_t HWCFGR5; // [read-write] Hardware configuration registers
    volatile uint32_t HWCFGR4; // [read-write] Hardware configuration registers
    volatile uint32_t HWCFGR3; // [read-write] Hardware configuration registers
    volatile uint32_t HWCFGR2; // [read-write] Hardware configuration registers
    volatile uint32_t HWCFGR1; // [read-only] Hardware configuration registers
    volatile uint32_t VERR;    // [read-only] AES version register
    volatile uint32_t IPIDR;   // [read-only] AES identification register
    volatile uint32_t SIDR;    // [read-only] AES size ID register

    static constexpr uint32_t RTSR1_RESET_VALUE = 0x0;
    static constexpr uint32_t RTSR1_TR0 = 0x1;      // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR1_TR1 = 0x2;      // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR1_TR2 = 0x4;      // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR1_TR3 = 0x8;      // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR1_TR4 = 0x10;     // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR1_TR5 = 0x20;     // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR1_TR6 = 0x40;     // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR1_TR7 = 0x80;     // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR1_TR8 = 0x100;    // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR1_TR9 = 0x200;    // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR1_TR10 = 0x400;   // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR1_TR11 = 0x800;   // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR1_TR12 = 0x1000;  // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR1_TR13 = 0x2000;  // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR1_TR14 = 0x4000;  // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR1_TR15 = 0x8000;  // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR1_TR16 = 0x10000; // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR1_TR17 = 0x20000; // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t RTSR1_TR18 = 0x40000; // Rising trigger event configuration bit of Configurable Event input

    static constexpr uint32_t FTSR1_RESET_VALUE = 0x0;
    static constexpr uint32_t FTSR1_TR0 = 0x1;      // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR1_TR1 = 0x2;      // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR1_TR2 = 0x4;      // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR1_TR3 = 0x8;      // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR1_TR4 = 0x10;     // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR1_TR5 = 0x20;     // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR1_TR6 = 0x40;     // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR1_TR7 = 0x80;     // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR1_TR8 = 0x100;    // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR1_TR9 = 0x200;    // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR1_TR10 = 0x400;   // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR1_TR11 = 0x800;   // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR1_TR12 = 0x1000;  // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR1_TR13 = 0x2000;  // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR1_TR14 = 0x4000;  // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR1_TR15 = 0x8000;  // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR1_TR16 = 0x10000; // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR1_TR17 = 0x20000; // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t FTSR1_TR18 = 0x40000; // Rising trigger event configuration bit of Configurable Event input

    static constexpr uint32_t SWIER1_RESET_VALUE = 0x0;
    static constexpr uint32_t SWIER1_SWIER0 = 0x1;      // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t SWIER1_SWIER1 = 0x2;      // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t SWIER1_SWIER2 = 0x4;      // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t SWIER1_SWIER3 = 0x8;      // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t SWIER1_SWIER4 = 0x10;     // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t SWIER1_SWIER5 = 0x20;     // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t SWIER1_SWIER6 = 0x40;     // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t SWIER1_SWIER7 = 0x80;     // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t SWIER1_SWIER8 = 0x100;    // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t SWIER1_SWIER9 = 0x200;    // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t SWIER1_SWIER10 = 0x400;   // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t SWIER1_SWIER11 = 0x800;   // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t SWIER1_SWIER12 = 0x1000;  // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t SWIER1_SWIER13 = 0x2000;  // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t SWIER1_SWIER14 = 0x4000;  // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t SWIER1_SWIER15 = 0x8000;  // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t SWIER1_SWIER16 = 0x10000; // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t SWIER1_SWIER17 = 0x20000; // Rising trigger event configuration bit of Configurable Event input
    static constexpr uint32_t SWIER1_SWIER18 = 0x40000; // Rising trigger event configuration bit of Configurable Event input

    static constexpr uint32_t RPR1_RESET_VALUE = 0x0;
    static constexpr uint32_t RPR1_RPIF0 = 0x1;      // configurable event inputs x rising edge Pending bit.
    static constexpr uint32_t RPR1_RPIF1 = 0x2;      // configurable event inputs x rising edge Pending bit.
    static constexpr uint32_t RPR1_RPIF2 = 0x4;      // configurable event inputs x rising edge Pending bit.
    static constexpr uint32_t RPR1_RPIF3 = 0x8;      // configurable event inputs x rising edge Pending bit.
    static constexpr uint32_t RPR1_RPIF4 = 0x10;     // configurable event inputs x rising edge Pending bit.
    static constexpr uint32_t RPR1_RPIF5 = 0x20;     // configurable event inputs x rising edge Pending bit
    static constexpr uint32_t RPR1_RPIF6 = 0x40;     // configurable event inputs x rising edge Pending bit.
    static constexpr uint32_t RPR1_RPIF7 = 0x80;     // configurable event inputs x rising edge Pending bit.
    static constexpr uint32_t RPR1_RPIF8 = 0x100;    // configurable event inputs x rising edge Pending bit.
    static constexpr uint32_t RPR1_RPIF9 = 0x200;    // configurable event inputs x rising edge Pending bit.
    static constexpr uint32_t RPR1_RPIF10 = 0x400;   // configurable event inputs x rising edge Pending bit.
    static constexpr uint32_t RPR1_RPIF11 = 0x800;   // configurable event inputs x rising edge Pending bit.
    static constexpr uint32_t RPR1_RPIF12 = 0x1000;  // configurable event inputs x rising edge Pending bit.
    static constexpr uint32_t RPR1_RPIF13 = 0x2000;  // configurable event inputs x rising edge Pending bit.
    static constexpr uint32_t RPR1_RPIF14 = 0x4000;  // configurable event inputs x rising edge Pending bit.
    static constexpr uint32_t RPR1_RPIF15 = 0x8000;  // configurable event inputs x rising edge Pending bit.
    static constexpr uint32_t RPR1_RPIF16 = 0x10000; // configurable event inputs x rising edge Pending bit.
    static constexpr uint32_t RPR1_RPIF17 = 0x20000; // configurable event inputs x rising edge Pending bit.
    static constexpr uint32_t RPR1_RPIF18 = 0x40000; // configurable event inputs x rising edge Pending bit.

    static constexpr uint32_t FPR1_RESET_VALUE = 0x0;
    static constexpr uint32_t FPR1_FPIF0 = 0x1;      // configurable event inputs x falling edge pending bit.
    static constexpr uint32_t FPR1_FPIF1 = 0x2;      // configurable event inputs x falling edge pending bit.
    static constexpr uint32_t FPR1_FPIF2 = 0x4;      // configurable event inputs x falling edge pending bit.
    static constexpr uint32_t FPR1_FPIF3 = 0x8;      // configurable event inputs x falling edge pending bit.
    static constexpr uint32_t FPR1_FPIF4 = 0x10;     // configurable event inputs x falling edge pending bit.
    static constexpr uint32_t FPR1_FPIF5 = 0x20;     // configurable event inputs x falling edge pending bit.
    static constexpr uint32_t FPR1_FPIF6 = 0x40;     // configurable event inputs x falling edge pending bit.
    static constexpr uint32_t FPR1_FPIF7 = 0x80;     // configurable event inputs x falling edge pending bit.
    static constexpr uint32_t FPR1_FPIF8 = 0x100;    // configurable event inputs x falling edge pending bit.
    static constexpr uint32_t FPR1_FPIF9 = 0x200;    // configurable event inputs x falling edge pending bit.
    static constexpr uint32_t FPR1_FPIF10 = 0x400;   // configurable event inputs x falling edge pending bit.
    static constexpr uint32_t FPR1_FPIF11 = 0x800;   // configurable event inputs x falling edge pending bit.
    static constexpr uint32_t FPR1_FPIF12 = 0x1000;  // configurable event inputs x falling edge pending bit.
    static constexpr uint32_t FPR1_FPIF13 = 0x2000;  // configurable event inputs x falling edge pending bit.
    static constexpr uint32_t FPR1_FPIF14 = 0x4000;  // configurable event inputs x falling edge pending bit.
    static constexpr uint32_t FPR1_FPIF15 = 0x8000;  // configurable event inputs x falling edge pending bit.
    static constexpr uint32_t FPR1_FPIF16 = 0x10000; // configurable event inputs x falling edge pending bit.
    static constexpr uint32_t FPR1_FPIF17 = 0x20000; // configurable event inputs x falling edge pending bit.
    static constexpr uint32_t FPR1_FPIF18 = 0x40000; // configurable event inputs x falling edge pending bit.

    static constexpr uint32_t EXTICR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EXTICR1_EXTI0_7 =     // GPIO port selection
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR1_EXTI8_15 =    // GPIO port selection
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR1_EXTI16_23 =   // GPIO port selection
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR1_EXTI24_31 =   // GPIO port selection
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t EXTICR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EXTICR2_EXTI0_7 =     // GPIO port selection
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR2_EXTI8_15 =    // GPIO port selection
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR2_EXTI16_23 =   // GPIO port selection
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR2_EXTI24_31 =   // GPIO port selection
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t EXTICR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EXTICR3_EXTI0_7 =     // GPIO port selection
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR3_EXTI8_15 =    // GPIO port selection
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR3_EXTI16_23 =   // GPIO port selection
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR3_EXTI24_31 =   // GPIO port selection
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t EXTICR4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EXTICR4_EXTI0_7 =     // GPIO port selection
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR4_EXTI8_15 =    // GPIO port selection
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR4_EXTI16_23 =   // GPIO port selection
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR4_EXTI24_31 =   // GPIO port selection
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t IMR1_RESET_VALUE = 0xfff80000;
    static constexpr uint32_t IMR1_IM0 = 0x1;         // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM1 = 0x2;         // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM2 = 0x4;         // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM3 = 0x8;         // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM4 = 0x10;        // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM5 = 0x20;        // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM6 = 0x40;        // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM7 = 0x80;        // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM8 = 0x100;       // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM9 = 0x200;       // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM10 = 0x400;      // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM11 = 0x800;      // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM12 = 0x1000;     // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM13 = 0x2000;     // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM14 = 0x4000;     // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM15 = 0x8000;     // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM16 = 0x10000;    // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM17 = 0x20000;    // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM18 = 0x40000;    // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM19 = 0x80000;    // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM20 = 0x100000;   // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM21 = 0x200000;   // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM22 = 0x400000;   // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM23 = 0x800000;   // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM24 = 0x1000000;  // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM25 = 0x2000000;  // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM26 = 0x4000000;  // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM27 = 0x8000000;  // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM28 = 0x10000000; // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM29 = 0x20000000; // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM30 = 0x40000000; // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM31 = 0x80000000; // CPU wakeup with interrupt mask on event input

    static constexpr uint32_t EMR1_RESET_VALUE = 0x0;
    static constexpr uint32_t EMR1_EM0 = 0x1;         // CPU wakeup with event mask on event input
    static constexpr uint32_t EMR1_EM1 = 0x2;         // CPU wakeup with event mask on event input
    static constexpr uint32_t EMR1_EM2 = 0x4;         // CPU wakeup with event mask on event input
    static constexpr uint32_t EMR1_EM3 = 0x8;         // CPU wakeup with event mask on event input
    static constexpr uint32_t EMR1_EM4 = 0x10;        // CPU wakeup with event mask on event input
    static constexpr uint32_t EMR1_EM5 = 0x20;        // CPU wakeup with event mask on event input
    static constexpr uint32_t EMR1_EM6 = 0x40;        // CPU wakeup with event mask on event input
    static constexpr uint32_t EMR1_EM7 = 0x80;        // CPU wakeup with event mask on event input
    static constexpr uint32_t EMR1_EM8 = 0x100;       // CPU wakeup with event mask on event input
    static constexpr uint32_t EMR1_EM9 = 0x200;       // CPU wakeup with event mask on event input
    static constexpr uint32_t EMR1_EM10 = 0x400;      // CPU wakeup with event mask on event input
    static constexpr uint32_t EMR1_EM11 = 0x800;      // CPU wakeup with event mask on event input
    static constexpr uint32_t EMR1_EM12 = 0x1000;     // CPU wakeup with event mask on event input
    static constexpr uint32_t EMR1_EM13 = 0x2000;     // CPU wakeup with event mask on event input
    static constexpr uint32_t EMR1_EM14 = 0x4000;     // CPU wakeup with event mask on event input
    static constexpr uint32_t EMR1_EM15 = 0x8000;     // CPU wakeup with event mask on event input
    static constexpr uint32_t EMR1_EM16 = 0x10000;    // CPU wakeup with event mask on event input
    static constexpr uint32_t EMR1_EM17 = 0x20000;    // CPU wakeup with event mask on event input
    static constexpr uint32_t EMR1_EM18 = 0x40000;    // CPU wakeup with event mask on event input
    static constexpr uint32_t EMR1_EM19 = 0x80000;    // CPU wakeup with event mask on event input
    static constexpr uint32_t EMR1_EM21 = 0x200000;   // CPU wakeup with event mask on event input
    static constexpr uint32_t EMR1_EM23 = 0x800000;   // CPU wakeup with event mask on event input
    static constexpr uint32_t EMR1_EM25 = 0x2000000;  // CPU wakeup with event mask on event input
    static constexpr uint32_t EMR1_EM26 = 0x4000000;  // CPU wakeup with event mask on event input
    static constexpr uint32_t EMR1_EM27 = 0x8000000;  // CPU wakeup with event mask on event input
    static constexpr uint32_t EMR1_EM28 = 0x10000000; // CPU wakeup with event mask on event input
    static constexpr uint32_t EMR1_EM29 = 0x20000000; // CPU wakeup with event mask on event input
    static constexpr uint32_t EMR1_EM30 = 0x40000000; // CPU wakeup with event mask on event input
    static constexpr uint32_t EMR1_EM31 = 0x80000000; // CPU wakeup with event mask on event input

    static constexpr uint32_t IMR2_RESET_VALUE = 0xffffffff;
    static constexpr uint32_t IMR2_IM32 = 0x1; // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR2_IM33 = 0x2; // CPU wakeup with interrupt mask on event input

    static constexpr uint32_t EMR2_RESET_VALUE = 0x0;
    static constexpr uint32_t EMR2_EM32 = 0x1; // CPU wakeup with event mask on event input
    static constexpr uint32_t EMR2_EM33 = 0x2; // CPU wakeup with event mask on event input

    static constexpr uint32_t HWCFGR7_RESET_VALUE = 0x0;

    static constexpr uint32_t HWCFGR6_RESET_VALUE = 0x3;

    static constexpr uint32_t HWCFGR5_RESET_VALUE = 0xfeafffff;

    static constexpr uint32_t HWCFGR4_RESET_VALUE = 0x0;

    static constexpr uint32_t HWCFGR3_RESET_VALUE = 0x0;

    static constexpr uint32_t HWCFGR2_RESET_VALUE = 0x7ffff;

    static constexpr uint32_t HWCFGR1_RESET_VALUE = 0x51021;
    template<uint32_t X>
    static constexpr uint32_t HWCFGR1_NBIOPORT =   // HW configuration of number of IO ports
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HWCFGR1_CPUEVTEN =   // HW configuration of CPU event output enable
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HWCFGR1_NBCPUS =     // configuration number of CPUs
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HWCFGR1_NBEVENTS =   // configuration number of event
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t VERR_RESET_VALUE = 0x30;
    template<uint32_t X>
    static constexpr uint32_t VERR_MAJREV =   // Major revision
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t VERR_MINREV =   // Minor revision
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t IPIDR_RESET_VALUE = 0xe0001;

    static constexpr uint32_t SIDR_RESET_VALUE = 0xa3c5dd01;
};


template<>
struct peripheral_t<STM32G030, EXTI>
{
    typedef stm32g030_exti_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G031, EXTI>
{
    typedef stm32g030_exti_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G041, EXTI>
{
    typedef stm32g030_exti_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G070, EXTI>
{
    typedef stm32g070_exti_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G071, EXTI>
{
    typedef stm32g070_exti_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G081, EXTI>
{
    typedef stm32g070_exti_t T;
    static T& V;
};

using exti_t = peripheral_t<mcu_svd, EXTI>;

