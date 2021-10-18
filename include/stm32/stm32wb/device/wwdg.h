#pragma once

////
//
//      STM32WB WWDG peripherals
//
///

// WWDG: System window watchdog

struct stm32wb10_cm4_wwdg_t
{
    volatile uint32_t CR; // Control register
    volatile uint32_t CFR; // Configuration register
    volatile uint32_t SR; // Status register

    static constexpr uint32_t CR_RESET_VALUE = 0x7f; // Reset value
    static constexpr uint32_t CR_WDGA = 0x80; // Activation bit
    typedef bit_field_t<0, 0x7f> CR_T; // 7-bit counter (MSB to LSB)

    static constexpr uint32_t CFR_RESET_VALUE = 0x7f; // Reset value
    typedef bit_field_t<11, 0x7> CFR_WDGTB; // Timer base
    static constexpr uint32_t CFR_EWI = 0x200; // Early wakeup interrupt
    typedef bit_field_t<0, 0x7f> CFR_W; // 7-bit window value

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_EWIF = 0x1; // Early wakeup interrupt flag
};

template<>
struct peripheral_t<STM32WB10_CM4, WWDG>
{
    static constexpr periph_t P = WWDG;
    using T = stm32wb10_cm4_wwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WB15_CM4, WWDG>
{
    static constexpr periph_t P = WWDG;
    using T = stm32wb10_cm4_wwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WB30_CM4, WWDG>
{
    static constexpr periph_t P = WWDG;
    using T = stm32wb10_cm4_wwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WB35_CM4, WWDG>
{
    static constexpr periph_t P = WWDG;
    using T = stm32wb10_cm4_wwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WB50_CM4, WWDG>
{
    static constexpr periph_t P = WWDG;
    using T = stm32wb10_cm4_wwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WB55_CM4, WWDG>
{
    static constexpr periph_t P = WWDG;
    using T = stm32wb10_cm4_wwdg_t;
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
