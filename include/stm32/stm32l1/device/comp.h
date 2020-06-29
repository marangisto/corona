#pragma once

////
//
//      STM32L1 COMP peripherals
//
///

// COMP: Comparators

struct stm32l100_comp_t
{
    volatile uint32_t CSR; // comparator control and status register

    static constexpr uint32_t CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CSR_TSUSP = 0x80000000; // Suspend Timer Mode
    static constexpr uint32_t CSR_CAIF = 0x40000000; // Channel acquisition interrupt flag
    static constexpr uint32_t CSR_CAIE = 0x20000000; // Channel Acquisition Interrupt Enable / Clear
    static constexpr uint32_t CSR_RCH13 = 0x10000000; // Select GPIO port PC3 as re-routed ADC input channel CH13.
    static constexpr uint32_t CSR_FCH8 = 0x8000000; // Select GPIO port PB0 as fast ADC input channel CH8.
    static constexpr uint32_t CSR_FCH3 = 0x4000000; // Select GPIO port PA3 as fast ADC input channel CH3.
    typedef bit_field_t<21, 0x7> CSR_OUTSEL; // Comparator 2 output selection
    typedef bit_field_t<18, 0x7> CSR_INSEL; // Inverted input selection
    static constexpr uint32_t CSR_WNDWE = 0x20000; // Window mode enable
    static constexpr uint32_t CSR_VREFOUTEN = 0x10000; // VREFINT output enable
    static constexpr uint32_t CSR_CMP2OUT = 0x2000; // Comparator 2 output
    static constexpr uint32_t CSR_SPEED = 0x1000; // Comparator 2 speed mode
    static constexpr uint32_t CSR_CMP1OUT = 0x80; // Comparator 1 output
    static constexpr uint32_t CSR_SW1 = 0x20; // SW1 analog switch enable
    static constexpr uint32_t CSR_CMP1EN = 0x10; // Comparator 1 enable
    static constexpr uint32_t CSR_PD400K = 0x8; // 400 kO pull-down resistor
    static constexpr uint32_t CSR_PD10K = 0x4; // 10 kO pull-down resistor
    static constexpr uint32_t CSR_PU400K = 0x2; // 400 kO pull-up resistor
    static constexpr uint32_t CSR_PU10K = 0x1; // 10 kO pull-up resistor
};

template<>
struct peripheral_t<STM32L100, COMP>
{
    using T = stm32l100_comp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L151, COMP>
{
    using T = stm32l100_comp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L152, COMP>
{
    using T = stm32l100_comp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L162, COMP>
{
    using T = stm32l100_comp_t;
    static T& V;
};

using comp_t = peripheral_t<svd, COMP>;

template<int INST> struct comp_traits {};

template<> struct comp_traits<0>
{
    using comp = comp_t;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR |= RCC::T::APB1ENR_COMPEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR &= ~RCC::T::APB1ENR_COMPEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR |= RCC::T::APB1RSTR_COMPRST;
    }
};
