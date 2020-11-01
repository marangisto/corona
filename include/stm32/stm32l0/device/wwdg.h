#pragma once

////
//
//      STM32L0 WWDG peripherals
//
///

// WWDG: System window watchdog

struct stm32l052_wwdg_t
{
    volatile uint32_t CR; // Control register
    volatile uint32_t CFR; // Configuration register
    volatile uint32_t SR; // Status register

    static constexpr uint32_t CR_RESET_VALUE = 0x7f; // Reset value
    static constexpr uint32_t CR_WDGA = 0x80; // Activation bit
    typedef bit_field_t<0, 0x7f> CR_T; // 7-bit counter (MSB to LSB)

    static constexpr uint32_t CFR_RESET_VALUE = 0x7f; // Reset value
    static constexpr uint32_t CFR_EWI = 0x200; // Early wakeup interrupt
    static constexpr uint32_t CFR_WDGTB1 = 0x100; // Timer base
    static constexpr uint32_t CFR_WDGTB0 = 0x80; // WDGTB0
    typedef bit_field_t<0, 0x7f> CFR_W; // 7-bit window value

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_EWIF = 0x1; // Early wakeup interrupt flag
};

template<>
struct peripheral_t<STM32L052, WWDG>
{
    static constexpr periph_t P = WWDG;
    using T = stm32l052_wwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L053, WWDG>
{
    static constexpr periph_t P = WWDG;
    using T = stm32l052_wwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L062, WWDG>
{
    static constexpr periph_t P = WWDG;
    using T = stm32l052_wwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L063, WWDG>
{
    static constexpr periph_t P = WWDG;
    using T = stm32l052_wwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x0, WWDG>
{
    static constexpr periph_t P = WWDG;
    using T = stm32l052_wwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x1, WWDG>
{
    static constexpr periph_t P = WWDG;
    using T = stm32l052_wwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x2, WWDG>
{
    static constexpr periph_t P = WWDG;
    using T = stm32l052_wwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x3, WWDG>
{
    static constexpr periph_t P = WWDG;
    using T = stm32l052_wwdg_t;
    static T& V;
};

using wwdg_t = peripheral_t<svd, WWDG>;

template<int INST> struct wwdg_traits {};

template<> struct wwdg_traits<0>
{
    using wwdg = wwdg_t;
    static constexpr clock_source_t CLOCK = APB1_PERIPH;

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
    static void enable_sleep_mode()
    {
        RCC::V.APB1SMENR |= RCC::T::APB1SMENR_WWDGSMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.APB1SMENR &= ~RCC::T::APB1SMENR_WWDGSMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR |= RCC::T::APB1RSTR_WWDGRST;
    }
};
