#pragma once

////
//
//      STM32MP1 TIM14 peripherals
//
////

////
//
//      TIM14
//
////

struct stm32mp15xxx_tim14_t
{
    volatile uint32_t TIM14_CR1;   // [read-write] TIM14 control register 1
    reserved_t<0x2> _0xc;
    volatile uint32_t TIM14_DIER;  // [read-write] TIM14 Interrupt enable register
    volatile uint32_t TIM14_SR;    // [read-write] TIM14 status register
    volatile uint32_t TIM14_EGR;   // [write-only] TIM14 event generation register
    volatile uint32_t TIM14_CCMR1; // [read-write] The channels can be used in input (capture mode) or in output (compare mode). The direction of a channel is defined by configuring the corresponding CCxS bits. All the other bits of this register have a different function in input and in output mode. For a given bit, OCxx describes its function when the channel is configured in output, ICxx describes its function when the channel is configured in input. So one must take care that the same bit can have a different meaning for the input stage and for the output stage. Output compare mode
    reserved_t<0x1> _0x20;
    volatile uint32_t TIM14_CCER;  // [read-write] TIM14 capture/compare enable register
    volatile uint32_t TIM14_CNT;   // [read-write] TIM14 counter
    volatile uint32_t TIM14_PSC;   // [read-write] TIM14 prescaler
    volatile uint32_t TIM14_ARR;   // [read-write] TIM14 auto-reload register
    reserved_t<0x1> _0x34;
    volatile uint32_t TIM14_CCR1;  // [read-write] TIM14 capture/compare register 1
    reserved_t<0xc> _0x68;
    volatile uint32_t TIM14_TISEL; // [read-write] TIM14 timer input selection register

    static constexpr uint32_t TIM14_CR1_RESET_VALUE = 0x0;
    static constexpr uint32_t TIM14_CR1_CEN = 0x1;        // CEN
    static constexpr uint32_t TIM14_CR1_UDIS = 0x2;       // UDIS
    static constexpr uint32_t TIM14_CR1_URS = 0x4;        // URS
    static constexpr uint32_t TIM14_CR1_OPM = 0x8;        // OPM
    static constexpr uint32_t TIM14_CR1_ARPE = 0x80;      // ARPE
    template<uint32_t X>
    static constexpr uint32_t TIM14_CR1_CKD =             // CKD
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t TIM14_CR1_UIFREMAP = 0x800; // UIFREMAP

    static constexpr uint32_t TIM14_DIER_RESET_VALUE = 0x0;
    static constexpr uint32_t TIM14_DIER_UIE = 0x1;   // UIE
    static constexpr uint32_t TIM14_DIER_CC1IE = 0x2; // CC1IE

    static constexpr uint32_t TIM14_SR_RESET_VALUE = 0x0;
    static constexpr uint32_t TIM14_SR_UIF = 0x1;     // UIF
    static constexpr uint32_t TIM14_SR_CC1IF = 0x2;   // CC1IF
    static constexpr uint32_t TIM14_SR_CC1OF = 0x200; // CC1OF

    static constexpr uint32_t TIM14_EGR_RESET_VALUE = 0x0;
    static constexpr uint32_t TIM14_EGR_UG = 0x1;   // UG
    static constexpr uint32_t TIM14_EGR_CC1G = 0x2; // CC1G

    static constexpr uint32_t TIM14_CCMR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TIM14_CCMR1_CC1S =           // CC1S
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t TIM14_CCMR1_OC1FE = 0x4;     // OC1FE
    static constexpr uint32_t TIM14_CCMR1_OC1PE = 0x8;     // OC1PE
    template<uint32_t X>
    static constexpr uint32_t TIM14_CCMR1_OC1M =           // OC1M
        bit_field_t<4, 0x7>::value<X>();
    static constexpr uint32_t TIM14_CCMR1_OC1M3 = 0x10000; // OC1M3

    static constexpr uint32_t TIM14_CCER_RESET_VALUE = 0x0;
    static constexpr uint32_t TIM14_CCER_CC1E = 0x1;  // CC1E
    static constexpr uint32_t TIM14_CCER_CC1P = 0x2;  // CC1P
    static constexpr uint32_t TIM14_CCER_CC1NP = 0x8; // CC1NP

    static constexpr uint32_t TIM14_CNT_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TIM14_CNT_CNT =                // CNT
        bit_field_t<0, 0xffff>::value<X>();
    static constexpr uint32_t TIM14_CNT_UIFCPY = 0x80000000; // UIFCPY

    static constexpr uint32_t TIM14_PSC_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TIM14_PSC_PSC =   // PSC
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t TIM14_ARR_RESET_VALUE = 0xffff;
    template<uint32_t X>
    static constexpr uint32_t TIM14_ARR_ARR =   // ARR
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t TIM14_CCR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TIM14_CCR1_CCR1 =   // CCR1
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t TIM14_TISEL_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TIM14_TISEL_TI1SEL =   // TI1SEL
        bit_field_t<0, 0xf>::value<X>();
};


template<>
struct peripheral_t<STM32MP15xxx, TIM14>
{
    typedef stm32mp15xxx_tim14_t T;
    static T& V;
};

using tim14_t = peripheral_t<mcu_svd, TIM14>;

