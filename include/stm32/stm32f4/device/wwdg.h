#pragma once

////
//
//      STM32F4 WWDG peripherals
//
///

// WWDG: Window watchdog

struct stm32f401_wwdg_t
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
    static constexpr uint32_t CFR_WDGTB0 = 0x80; // Timer base
    typedef bit_field_t<0, 0x7f> CFR_W; // 7-bit window value

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_EWIF = 0x1; // Early wakeup interrupt flag
};

template<>
struct peripheral_t<STM32F401, WWDG>
{
    static constexpr periph_t P = WWDG;
    using T = stm32f401_wwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, WWDG>
{
    static constexpr periph_t P = WWDG;
    using T = stm32f401_wwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, WWDG>
{
    static constexpr periph_t P = WWDG;
    using T = stm32f401_wwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F410, WWDG>
{
    static constexpr periph_t P = WWDG;
    using T = stm32f401_wwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F411, WWDG>
{
    static constexpr periph_t P = WWDG;
    using T = stm32f401_wwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, WWDG>
{
    static constexpr periph_t P = WWDG;
    using T = stm32f401_wwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, WWDG>
{
    static constexpr periph_t P = WWDG;
    using T = stm32f401_wwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, WWDG>
{
    static constexpr periph_t P = WWDG;
    using T = stm32f401_wwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, WWDG>
{
    static constexpr periph_t P = WWDG;
    using T = stm32f401_wwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, WWDG>
{
    static constexpr periph_t P = WWDG;
    using T = stm32f401_wwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, WWDG>
{
    static constexpr periph_t P = WWDG;
    using T = stm32f401_wwdg_t;
    static T& V;
};

using wwdg_t = peripheral_t<svd, WWDG>;

template<int INST> struct wwdg_traits {};

template<> struct wwdg_traits<0>
{
    using wwdg = wwdg_t;

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
