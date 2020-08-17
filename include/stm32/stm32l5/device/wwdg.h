#pragma once

////
//
//      STM32L5 WWDG peripherals
//
///

// WWDG: System window watchdog

struct stm32l552_wwdg_t
{
    volatile uint32_t CR; // Control register
    volatile uint32_t CFR; // Configuration register
    volatile uint32_t SR; // Status register

    static constexpr uint32_t CR_RESET_VALUE = 0x7f; // Reset value
    static constexpr uint32_t CR_WDGA = 0x80; // Activation bit
    typedef bit_field_t<0, 0x7f> CR_T; // 7-bit counter (MSB to LSB)

    static constexpr uint32_t CFR_RESET_VALUE = 0x7f; // Reset value
    static constexpr uint32_t CFR_EWI = 0x200; // Early wakeup interrupt
    typedef bit_field_t<7, 0x3> CFR_WDGTB; // Timer base
    typedef bit_field_t<0, 0x7f> CFR_W; // 7-bit window value

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_EWIF = 0x1; // Early wakeup interrupt flag
};

template<>
struct peripheral_t<STM32L552, SEC_WWDG>
{
    using T = stm32l552_wwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L552, WWDG>
{
    using T = stm32l552_wwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, SEC_WWDG>
{
    using T = stm32l552_wwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, WWDG>
{
    using T = stm32l552_wwdg_t;
    static T& V;
};

using sec_wwdg_t = peripheral_t<svd, SEC_WWDG>;
using wwdg_t = peripheral_t<svd, WWDG>;

template<> struct wwdg_traits<0>
{
    using wwdg = wwdg_t;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR1 |= RCC::T::APB1ENR1_WWDGEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR1 &= ~RCC::T::APB1ENR1_WWDGEN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.APB1SMENR1 |= RCC::T::APB1SMENR1_WWDGSMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_WWDGSMEN;
    }
};
