#pragma once

////
//
//      STM32F1 WWDG peripherals
//
///

// WWDG: Window watchdog

struct stm32f100_wwdg_t
{
    volatile uint32_t CR; // Control register (WWDG_CR)
    volatile uint32_t CFR; // Configuration register (WWDG_CFR)
    volatile uint32_t SR; // Status register (WWDG_SR)

    static constexpr uint32_t CR_RESET_VALUE = 0x7f; // Reset value
    typedef bit_field_t<0, 0x7f> CR_T; // 7-bit counter (MSB to LSB)
    static constexpr uint32_t CR_WDGA = 0x80; // Activation bit

    static constexpr uint32_t CFR_RESET_VALUE = 0x7f; // Reset value
    typedef bit_field_t<0, 0x7f> CFR_W; // 7-bit window value
    typedef bit_field_t<7, 0x3> CFR_WDGTB; // Timer Base
    static constexpr uint32_t CFR_EWI = 0x200; // Early Wakeup Interrupt

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_EWI = 0x1; // Early Wakeup Interrupt
};

template<>
struct peripheral_t<STM32F100, WWDG>
{
    static constexpr periph_t P = WWDG;
    using T = stm32f100_wwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F101, WWDG>
{
    static constexpr periph_t P = WWDG;
    using T = stm32f100_wwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F102, WWDG>
{
    static constexpr periph_t P = WWDG;
    using T = stm32f100_wwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F103, WWDG>
{
    static constexpr periph_t P = WWDG;
    using T = stm32f100_wwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F107, WWDG>
{
    static constexpr periph_t P = WWDG;
    using T = stm32f100_wwdg_t;
    static T& V;
};

using wwdg_t = peripheral_t<svd, WWDG>;

template<int INST> struct wwdg_traits {};

template<> struct wwdg_traits<0>
{
    using wwdg = wwdg_t;
    static constexpr clock_source_t CS = APB1_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR |= RCC::T::APB1ENR_WWDGEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR &= ~RCC::T::APB1ENR_WWDGEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR |= RCC::T::APB1RSTR_WWDGRST;
    }
};
