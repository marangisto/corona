#pragma once

////
//
//      STM32U5 EXTI peripherals
//
///

// EXTI: External interrupt/event controller

struct stm32u5xx_exti_t
{
    volatile uint32_t RTSR1; // EXTI rising trigger selection register
    volatile uint32_t FTSR1; // EXTI falling trigger selection register
    volatile uint32_t SWIER1; // EXTI software interrupt event register
    volatile uint32_t RPR1; // EXTI rising edge pending register
    volatile uint32_t FPR1; // EXTI falling edge pending register
    volatile uint32_t SECCFGR1; // EXTI security configuration register
    volatile uint32_t PRIVCFGR1; // EXTI privilege configuration register
    reserved_t<0x11> _0x1c;
    volatile uint32_t EXTICR1; // EXTI external interrupt selection register
    volatile uint32_t EXTICR2; // EXTI external interrupt selection register
    volatile uint32_t EXTICR3; // EXTI external interrupt selection register
    volatile uint32_t EXTICR4; // EXTI external interrupt selection register
    volatile uint32_t LOCKR; // EXTI lock register
    reserved_t<0x3> _0x74;
    volatile uint32_t IMR1; // EXTI CPU wakeup with interrupt mask register
    volatile uint32_t EMR1; // EXTI CPU wakeup with event mask register

    static constexpr uint32_t RTSR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RTSR1_RT0 = 0x1; // Rising trigger event configuration bit of configurable event input x
    static constexpr uint32_t RTSR1_RT1 = 0x2; // Rising trigger event configuration bit of configurable event input x
    static constexpr uint32_t RTSR1_RT2 = 0x4; // Rising trigger event configuration bit of configurable event input x
    static constexpr uint32_t RTSR1_RT3 = 0x8; // Rising trigger event configuration bit of configurable event input x
    static constexpr uint32_t RTSR1_RT4 = 0x10; // Rising trigger event configuration bit of configurable event input x
    static constexpr uint32_t RTSR1_RT5 = 0x20; // Rising trigger event configuration bit of configurable event input x
    static constexpr uint32_t RTSR1_RT6 = 0x40; // Rising trigger event configuration bit of configurable event input x
    static constexpr uint32_t RTSR1_RT7 = 0x80; // Rising trigger event configuration bit of configurable event input x
    static constexpr uint32_t RTSR1_RT8 = 0x100; // Rising trigger event configuration bit of configurable event input x
    static constexpr uint32_t RTSR1_RT9 = 0x200; // Rising trigger event configuration bit of configurable event input x
    static constexpr uint32_t RTSR1_RT10 = 0x400; // Rising trigger event configuration bit of configurable event input x
    static constexpr uint32_t RTSR1_RT11 = 0x800; // Rising trigger event configuration bit of configurable event input x
    static constexpr uint32_t RTSR1_RT12 = 0x1000; // Rising trigger event configuration bit of configurable event input x
    static constexpr uint32_t RTSR1_RT13 = 0x2000; // Rising trigger event configuration bit of configurable event input x
    static constexpr uint32_t RTSR1_RT14 = 0x4000; // Rising trigger event configuration bit of configurable event input x
    static constexpr uint32_t RTSR1_RT15 = 0x8000; // Rising trigger event configuration bit of configurable event input x
    static constexpr uint32_t RTSR1_RT16 = 0x10000; // Rising trigger event configuration bit of configurable event input x
    static constexpr uint32_t RTSR1_RT17 = 0x20000; // Rising trigger event configuration bit of configurable event input x
    static constexpr uint32_t RTSR1_RT18 = 0x40000; // Rising trigger event configuration bit of configurable event input x
    static constexpr uint32_t RTSR1_RT19 = 0x80000; // Rising trigger event configuration bit of configurable event input x
    static constexpr uint32_t RTSR1_RT20 = 0x100000; // Rising trigger event configuration bit of configurable event input x
    static constexpr uint32_t RTSR1_RT21 = 0x200000; // Rising trigger event configuration bit of configurable event input x
    static constexpr uint32_t RTSR1_RT22 = 0x400000; // Rising trigger event configuration bit of configurable event input x

    static constexpr uint32_t FTSR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FTSR1_FT0 = 0x1; // Falling trigger event configuration bit of configurable event input x
    static constexpr uint32_t FTSR1_FT1 = 0x2; // Falling trigger event configuration bit of configurable event input x
    static constexpr uint32_t FTSR1_FT2 = 0x4; // Falling trigger event configuration bit of configurable event input x
    static constexpr uint32_t FTSR1_FT3 = 0x8; // Falling trigger event configuration bit of configurable event input x
    static constexpr uint32_t FTSR1_FT4 = 0x10; // Falling trigger event configuration bit of configurable event input x
    static constexpr uint32_t FTSR1_FT5 = 0x20; // Falling trigger event configuration bit of configurable event input x
    static constexpr uint32_t FTSR1_FT6 = 0x40; // Falling trigger event configuration bit of configurable event input x
    static constexpr uint32_t FTSR1_FT7 = 0x80; // Falling trigger event configuration bit of configurable event input x
    static constexpr uint32_t FTSR1_FT8 = 0x100; // Falling trigger event configuration bit of configurable event input x
    static constexpr uint32_t FTSR1_FT9 = 0x200; // Falling trigger event configuration bit of configurable event input x
    static constexpr uint32_t FTSR1_FT10 = 0x400; // Falling trigger event configuration bit of configurable event input x
    static constexpr uint32_t FTSR1_FT11 = 0x800; // Falling trigger event configuration bit of configurable event input x
    static constexpr uint32_t FTSR1_FT12 = 0x1000; // Falling trigger event configuration bit of configurable event input x
    static constexpr uint32_t FTSR1_FT13 = 0x2000; // Falling trigger event configuration bit of configurable event input x
    static constexpr uint32_t FTSR1_FT14 = 0x4000; // Falling trigger event configuration bit of configurable event input x
    static constexpr uint32_t FTSR1_FT15 = 0x8000; // Falling trigger event configuration bit of configurable event input x
    static constexpr uint32_t FTSR1_FT16 = 0x10000; // Falling trigger event configuration bit of configurable event input x
    static constexpr uint32_t FTSR1_FT17 = 0x20000; // Falling trigger event configuration bit of configurable event input x
    static constexpr uint32_t FTSR1_FT18 = 0x40000; // Falling trigger event configuration bit of configurable event input x
    static constexpr uint32_t FTSR1_FT19 = 0x80000; // Falling trigger event configuration bit of configurable event input x
    static constexpr uint32_t FTSR1_FT20 = 0x100000; // Falling trigger event configuration bit of configurable event input x
    static constexpr uint32_t FTSR1_FT21 = 0x200000; // Falling trigger event configuration bit of configurable event input x
    static constexpr uint32_t FTSR1_FT22 = 0x400000; // Falling trigger event configuration bit of configurable event input x

    static constexpr uint32_t SWIER1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SWIER1_SWI0 = 0x1; // Software interrupt on event x
    static constexpr uint32_t SWIER1_SWI1 = 0x2; // Software interrupt on event x
    static constexpr uint32_t SWIER1_SWI2 = 0x4; // Software interrupt on event x
    static constexpr uint32_t SWIER1_SWI3 = 0x8; // Software interrupt on event x
    static constexpr uint32_t SWIER1_SWI4 = 0x10; // Software interrupt on event x
    static constexpr uint32_t SWIER1_SWI5 = 0x20; // Software interrupt on event x
    static constexpr uint32_t SWIER1_SWI6 = 0x40; // Software interrupt on event x
    static constexpr uint32_t SWIER1_SWI7 = 0x80; // Software interrupt on event x
    static constexpr uint32_t SWIER1_SWI8 = 0x100; // Software interrupt on event x
    static constexpr uint32_t SWIER1_SWI9 = 0x200; // Software interrupt on event x
    static constexpr uint32_t SWIER1_SWI10 = 0x400; // Software interrupt on event x
    static constexpr uint32_t SWIER1_SWI11 = 0x800; // Software interrupt on event x
    static constexpr uint32_t SWIER1_SWI12 = 0x1000; // Software interrupt on event x
    static constexpr uint32_t SWIER1_SWI13 = 0x2000; // Software interrupt on event x
    static constexpr uint32_t SWIER1_SWI14 = 0x4000; // Software interrupt on event x
    static constexpr uint32_t SWIER1_SWI15 = 0x8000; // Software interrupt on event x
    static constexpr uint32_t SWIER1_SWI16 = 0x10000; // Software interrupt on event x
    static constexpr uint32_t SWIER1_SWI17 = 0x20000; // Software interrupt on event x
    static constexpr uint32_t SWIER1_SWI18 = 0x40000; // Software interrupt on event x
    static constexpr uint32_t SWIER1_SWI19 = 0x80000; // Software interrupt on event x
    static constexpr uint32_t SWIER1_SWI20 = 0x100000; // Software interrupt on event x
    static constexpr uint32_t SWIER1_SWI21 = 0x200000; // Software interrupt on event x
    static constexpr uint32_t SWIER1_SWI22 = 0x400000; // Software interrupt on event x

    static constexpr uint32_t RPR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RPR1_RPIF0 = 0x1; // configurable event inputs x rising edge pending bit
    static constexpr uint32_t RPR1_RPIF1 = 0x2; // configurable event inputs x rising edge pending bit
    static constexpr uint32_t RPR1_RPIF2 = 0x4; // configurable event inputs x rising edge pending bit
    static constexpr uint32_t RPR1_RPIF3 = 0x8; // configurable event inputs x rising edge pending bit
    static constexpr uint32_t RPR1_RPIF4 = 0x10; // configurable event inputs x rising edge pending bit
    static constexpr uint32_t RPR1_RPIF5 = 0x20; // configurable event inputs x rising edge pending bit
    static constexpr uint32_t RPR1_RPIF6 = 0x40; // configurable event inputs x rising edge pending bit
    static constexpr uint32_t RPR1_RPIF7 = 0x80; // configurable event inputs x rising edge pending bit
    static constexpr uint32_t RPR1_RPIF8 = 0x100; // configurable event inputs x rising edge pending bit
    static constexpr uint32_t RPR1_RPIF9 = 0x200; // configurable event inputs x rising edge pending bit
    static constexpr uint32_t RPR1_RPIF10 = 0x400; // configurable event inputs x rising edge pending bit
    static constexpr uint32_t RPR1_RPIF11 = 0x800; // configurable event inputs x rising edge pending bit
    static constexpr uint32_t RPR1_RPIF12 = 0x1000; // configurable event inputs x rising edge pending bit
    static constexpr uint32_t RPR1_RPIF13 = 0x2000; // configurable event inputs x rising edge pending bit
    static constexpr uint32_t RPR1_RPIF14 = 0x4000; // configurable event inputs x rising edge pending bit
    static constexpr uint32_t RPR1_RPIF15 = 0x8000; // configurable event inputs x rising edge pending bit
    static constexpr uint32_t RPR1_RPIF16 = 0x10000; // configurable event inputs x rising edge pending bit
    static constexpr uint32_t RPR1_RPIF17 = 0x20000; // configurable event inputs x rising edge pending bit
    static constexpr uint32_t RPR1_RPIF18 = 0x40000; // configurable event inputs x rising edge pending bit
    static constexpr uint32_t RPR1_RPIF19 = 0x80000; // configurable event inputs x rising edge pending bit
    static constexpr uint32_t RPR1_RPIF20 = 0x100000; // configurable event inputs x rising edge pending bit
    static constexpr uint32_t RPR1_RPIF21 = 0x200000; // configurable event inputs x rising edge pending bit
    static constexpr uint32_t RPR1_RPIF22 = 0x400000; // configurable event inputs x rising edge pending bit

    static constexpr uint32_t FPR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FPR1_FPIF0 = 0x1; // configurable event inputs x falling edge pending bit.
    static constexpr uint32_t FPR1_FPIF1 = 0x2; // configurable event inputs x falling edge pending bit.
    static constexpr uint32_t FPR1_FPIF2 = 0x4; // configurable event inputs x falling edge pending bit.
    static constexpr uint32_t FPR1_FPIF3 = 0x8; // configurable event inputs x falling edge pending bit.
    static constexpr uint32_t FPR1_FPIF4 = 0x10; // configurable event inputs x falling edge pending bit.
    static constexpr uint32_t FPR1_FPIF5 = 0x20; // configurable event inputs x falling edge pending bit.
    static constexpr uint32_t FPR1_FPIF6 = 0x40; // configurable event inputs x falling edge pending bit.
    static constexpr uint32_t FPR1_FPIF7 = 0x80; // configurable event inputs x falling edge pending bit.
    static constexpr uint32_t FPR1_FPIF8 = 0x100; // configurable event inputs x falling edge pending bit.
    static constexpr uint32_t FPR1_FPIF9 = 0x200; // configurable event inputs x falling edge pending bit.
    static constexpr uint32_t FPR1_FPIF10 = 0x400; // configurable event inputs x falling edge pending bit.
    static constexpr uint32_t FPR1_FPIF11 = 0x800; // configurable event inputs x falling edge pending bit.
    static constexpr uint32_t FPR1_FPIF12 = 0x1000; // configurable event inputs x falling edge pending bit.
    static constexpr uint32_t FPR1_FPIF13 = 0x2000; // configurable event inputs x falling edge pending bit.
    static constexpr uint32_t FPR1_FPIF14 = 0x4000; // configurable event inputs x falling edge pending bit.
    static constexpr uint32_t FPR1_FPIF15 = 0x8000; // configurable event inputs x falling edge pending bit.
    static constexpr uint32_t FPR1_FPIF16 = 0x10000; // configurable event inputs x falling edge pending bit.
    static constexpr uint32_t FPR1_FPIF17 = 0x20000; // configurable event inputs x falling edge pending bit.
    static constexpr uint32_t FPR1_FPIF18 = 0x40000; // configurable event inputs x falling edge pending bit.
    static constexpr uint32_t FPR1_FPIF19 = 0x80000; // configurable event inputs x falling edge pending bit.
    static constexpr uint32_t FPR1_FPIF20 = 0x100000; // configurable event inputs x falling edge pending bit.
    static constexpr uint32_t FPR1_FPIF21 = 0x200000; // configurable event inputs x falling edge pending bit.
    static constexpr uint32_t FPR1_FPIF22 = 0x400000; // configurable event inputs x falling edge pending bit.

    static constexpr uint32_t SECCFGR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SECCFGR1_SEC0 = 0x1; // Security enable on event input x
    static constexpr uint32_t SECCFGR1_SEC1 = 0x2; // Security enable on event input x
    static constexpr uint32_t SECCFGR1_SEC2 = 0x4; // Security enable on event input x
    static constexpr uint32_t SECCFGR1_SEC3 = 0x8; // Security enable on event input x
    static constexpr uint32_t SECCFGR1_SEC4 = 0x10; // Security enable on event input x
    static constexpr uint32_t SECCFGR1_SEC5 = 0x20; // Security enable on event input x
    static constexpr uint32_t SECCFGR1_SEC6 = 0x40; // Security enable on event input x
    static constexpr uint32_t SECCFGR1_SEC7 = 0x80; // Security enable on event input x
    static constexpr uint32_t SECCFGR1_SEC8 = 0x100; // Security enable on event input x
    static constexpr uint32_t SECCFGR1_SEC9 = 0x200; // Security enable on event input x
    static constexpr uint32_t SECCFGR1_SEC10 = 0x400; // Security enable on event input x
    static constexpr uint32_t SECCFGR1_SEC11 = 0x800; // Security enable on event input x
    static constexpr uint32_t SECCFGR1_SEC12 = 0x1000; // Security enable on event input x
    static constexpr uint32_t SECCFGR1_SEC13 = 0x2000; // Security enable on event input x
    static constexpr uint32_t SECCFGR1_SEC14 = 0x4000; // Security enable on event input x
    static constexpr uint32_t SECCFGR1_SEC15 = 0x8000; // Security enable on event input x
    static constexpr uint32_t SECCFGR1_SEC16 = 0x10000; // Security enable on event input x
    static constexpr uint32_t SECCFGR1_SEC17 = 0x20000; // Security enable on event input x
    static constexpr uint32_t SECCFGR1_SEC18 = 0x40000; // Security enable on event input x
    static constexpr uint32_t SECCFGR1_SEC19 = 0x80000; // Security enable on event input x
    static constexpr uint32_t SECCFGR1_SEC20 = 0x100000; // Security enable on event input x
    static constexpr uint32_t SECCFGR1_SEC21 = 0x200000; // Security enable on event input x
    static constexpr uint32_t SECCFGR1_SEC22 = 0x400000; // Security enable on event input x

    static constexpr uint32_t PRIVCFGR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PRIVCFGR1_PRIV0 = 0x1; // Security enable on event input x
    static constexpr uint32_t PRIVCFGR1_PRIV1 = 0x2; // Security enable on event input x
    static constexpr uint32_t PRIVCFGR1_PRIV2 = 0x4; // Security enable on event input x
    static constexpr uint32_t PRIVCFGR1_PRIV3 = 0x8; // Security enable on event input x
    static constexpr uint32_t PRIVCFGR1_PRIV4 = 0x10; // Security enable on event input x
    static constexpr uint32_t PRIVCFGR1_PRIV5 = 0x20; // Security enable on event input x
    static constexpr uint32_t PRIVCFGR1_PRIV6 = 0x40; // Security enable on event input x
    static constexpr uint32_t PRIVCFGR1_PRIV7 = 0x80; // Security enable on event input x
    static constexpr uint32_t PRIVCFGR1_PRIV8 = 0x100; // Security enable on event input x
    static constexpr uint32_t PRIVCFGR1_PRIV9 = 0x200; // Security enable on event input x
    static constexpr uint32_t PRIVCFGR1_PRIV10 = 0x400; // Security enable on event input x
    static constexpr uint32_t PRIVCFGR1_PRIV11 = 0x800; // Security enable on event input x
    static constexpr uint32_t PRIVCFGR1_PRIV12 = 0x1000; // Security enable on event input x
    static constexpr uint32_t PRIVCFGR1_PRIV13 = 0x2000; // Security enable on event input x
    static constexpr uint32_t PRIVCFGR1_PRIV14 = 0x4000; // Security enable on event input x
    static constexpr uint32_t PRIVCFGR1_PRIV15 = 0x8000; // Security enable on event input x
    static constexpr uint32_t PRIVCFGR1_PRIV16 = 0x10000; // Security enable on event input x
    static constexpr uint32_t PRIVCFGR1_PRIV17 = 0x20000; // Security enable on event input x
    static constexpr uint32_t PRIVCFGR1_PRIV18 = 0x40000; // Security enable on event input x
    static constexpr uint32_t PRIVCFGR1_PRIV19 = 0x80000; // Security enable on event input x
    static constexpr uint32_t PRIVCFGR1_PRIV20 = 0x100000; // Security enable on event input x
    static constexpr uint32_t PRIVCFGR1_PRIV21 = 0x200000; // Security enable on event input x
    static constexpr uint32_t PRIVCFGR1_PRIV22 = 0x400000; // Security enable on event input x


    static constexpr uint32_t EXTICR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> EXTICR1_EXTI0_7; // EXTIm GPIO port selection
    typedef bit_field_t<8, 0xff> EXTICR1_EXTI8_15; // EXTIm+1 GPIO port selection
    typedef bit_field_t<16, 0xff> EXTICR1_EXTI16_23; // EXTIm+2 GPIO port selection
    typedef bit_field_t<24, 0xff> EXTICR1_EXTI24_31; // EXTIm+3 GPIO port selection

    static constexpr uint32_t EXTICR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> EXTICR2_EXTI0_7; // EXTIm GPIO port selection
    typedef bit_field_t<8, 0xff> EXTICR2_EXTI8_15; // EXTIm+1 GPIO port selection
    typedef bit_field_t<16, 0xff> EXTICR2_EXTI16_23; // EXTIm+2 GPIO port selection
    typedef bit_field_t<24, 0xff> EXTICR2_EXTI24_31; // EXTIm+3 GPIO port selection

    static constexpr uint32_t EXTICR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> EXTICR3_EXTI0_7; // EXTIm GPIO port selection
    typedef bit_field_t<8, 0xff> EXTICR3_EXTI8_15; // EXTIm+1 GPIO port selection
    typedef bit_field_t<16, 0xff> EXTICR3_EXTI16_23; // EXTIm+2 GPIO port selection
    typedef bit_field_t<24, 0xff> EXTICR3_EXTI24_31; // EXTIm+3 GPIO port selection

    static constexpr uint32_t EXTICR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> EXTICR4_EXTI0_7; // EXTIm GPIO port selection
    typedef bit_field_t<8, 0xff> EXTICR4_EXTI8_15; // EXTIm+1 GPIO port selection
    typedef bit_field_t<16, 0xff> EXTICR4_EXTI16_23; // EXTIm+2 GPIO port selection
    typedef bit_field_t<24, 0xff> EXTICR4_EXTI24_31; // EXTIm+3 GPIO port selection

    static constexpr uint32_t LOCKR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t LOCKR_LOCK = 0x1; // LOCK


    static constexpr uint32_t IMR1_RESET_VALUE = 0xff9e0000; // Reset value
    static constexpr uint32_t IMR1_IM0 = 0x1; // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM1 = 0x2; // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM2 = 0x4; // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM3 = 0x8; // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM4 = 0x10; // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM5 = 0x20; // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM6 = 0x40; // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM7 = 0x80; // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM8 = 0x100; // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM9 = 0x200; // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM10 = 0x400; // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM11 = 0x800; // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM12 = 0x1000; // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM13 = 0x2000; // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM14 = 0x4000; // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM15 = 0x8000; // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM16 = 0x10000; // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM17 = 0x20000; // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM18 = 0x40000; // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM19 = 0x80000; // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM20 = 0x100000; // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM21 = 0x200000; // CPU wakeup with interrupt mask on event input
    static constexpr uint32_t IMR1_IM22 = 0x400000; // CPU wakeup with interrupt mask on event input

    static constexpr uint32_t EMR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t EMR1_EM0 = 0x1; // CPU wakeup with event generation mask on event input
    static constexpr uint32_t EMR1_EM1 = 0x2; // CPU wakeup with event generation mask on event input
    static constexpr uint32_t EMR1_EM2 = 0x4; // CPU wakeup with event generation mask on event input
    static constexpr uint32_t EMR1_EM3 = 0x8; // CPU wakeup with event generation mask on event input
    static constexpr uint32_t EMR1_EM4 = 0x10; // CPU wakeup with event generation mask on event input
    static constexpr uint32_t EMR1_EM5 = 0x20; // CPU wakeup with event generation mask on event input
    static constexpr uint32_t EMR1_EM6 = 0x40; // CPU wakeup with event generation mask on event input
    static constexpr uint32_t EMR1_EM7 = 0x80; // CPU wakeup with event generation mask on event input
    static constexpr uint32_t EMR1_EM8 = 0x100; // CPU wakeup with event generation mask on event input
    static constexpr uint32_t EMR1_EM9 = 0x200; // CPU wakeup with event generation mask on event input
    static constexpr uint32_t EMR1_EM10 = 0x400; // CPU wakeup with event generation mask on event input
    static constexpr uint32_t EMR1_EM11 = 0x800; // CPU wakeup with event generation mask on event input
    static constexpr uint32_t EMR1_EM12 = 0x1000; // CPU wakeup with event generation mask on event input
    static constexpr uint32_t EMR1_EM13 = 0x2000; // CPU wakeup with event generation mask on event input
    static constexpr uint32_t EMR1_EM14 = 0x4000; // CPU wakeup with event generation mask on event input
    static constexpr uint32_t EMR1_EM15 = 0x8000; // CPU wakeup with event generation mask on event input
    static constexpr uint32_t EMR1_EM16 = 0x10000; // CPU wakeup with event generation mask on event input
    static constexpr uint32_t EMR1_EM17 = 0x20000; // CPU wakeup with event generation mask on event input
    static constexpr uint32_t EMR1_EM18 = 0x40000; // CPU wakeup with event generation mask on event input
    static constexpr uint32_t EMR1_EM19 = 0x80000; // CPU wakeup with event generation mask on event input
    static constexpr uint32_t EMR1_EM20 = 0x100000; // CPU wakeup with event generation mask on event input
    static constexpr uint32_t EMR1_EM21 = 0x200000; // CPU wakeup with event generation mask on event input
    static constexpr uint32_t EMR1_EM22 = 0x400000; // CPU wakeup with event generation mask on event input
};

template<>
struct peripheral_t<STM32U5xx, EXTI>
{
    static constexpr periph_t P = EXTI;
    using T = stm32u5xx_exti_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, SEC_EXTI>
{
    static constexpr periph_t P = SEC_EXTI;
    using T = stm32u5xx_exti_t;
    static T& V;
};

using exti_t = peripheral_t<svd, EXTI>;
using sec_exti_t = peripheral_t<svd, SEC_EXTI>;
