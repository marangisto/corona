#pragma once

////
//
//      STM32G4 RNG peripherals
//
///

// RNG: Random number generator

struct stm32g431xx_rng_t
{
    volatile uint32_t CR; // control register
    volatile uint32_t SR; // status register
    volatile uint32_t DR; // data register

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_CED = 0x20; // Clock error detection
    static constexpr uint32_t CR_IE = 0x8; // Interrupt enable
    static constexpr uint32_t CR_RNGEN = 0x4; // Random number generator enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_SEIS = 0x40; // Seed error interrupt status
    static constexpr uint32_t SR_CEIS = 0x20; // Clock error interrupt status
    static constexpr uint32_t SR_SECS = 0x4; // Seed error current status
    static constexpr uint32_t SR_CECS = 0x2; // Clock error current status
    static constexpr uint32_t SR_DRDY = 0x1; // Data ready

    static constexpr uint32_t DR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DR_RNDATA; // Random data
};

template<>
struct peripheral_t<STM32G431xx, RNG>
{
    static constexpr periph_t P = RNG;
    using T = stm32g431xx_rng_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G441xx, RNG>
{
    static constexpr periph_t P = RNG;
    using T = stm32g431xx_rng_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G471xx, RNG>
{
    static constexpr periph_t P = RNG;
    using T = stm32g431xx_rng_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G473xx, RNG>
{
    static constexpr periph_t P = RNG;
    using T = stm32g431xx_rng_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G474xx, RNG>
{
    static constexpr periph_t P = RNG;
    using T = stm32g431xx_rng_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G483xx, RNG>
{
    static constexpr periph_t P = RNG;
    using T = stm32g431xx_rng_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, RNG>
{
    static constexpr periph_t P = RNG;
    using T = stm32g431xx_rng_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G491xx, RNG>
{
    static constexpr periph_t P = RNG;
    using T = stm32g431xx_rng_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G4A1xx, RNG>
{
    static constexpr periph_t P = RNG;
    using T = stm32g431xx_rng_t;
    static T& V;
};

template<>
struct peripheral_t<STM32GBK1CBT6, RNG>
{
    static constexpr periph_t P = RNG;
    using T = stm32g431xx_rng_t;
    static T& V;
};

using rng_t = peripheral_t<svd, RNG>;

template<int INST> struct rng_traits {};

template<> struct rng_traits<0>
{
    using rng = rng_t;
    static constexpr clock_source_t CLOCK = AHB_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.AHB2ENR |= RCC::T::AHB2ENR_RNGEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHB2ENR &= ~RCC::T::AHB2ENR_RNGEN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.AHB2SMENR |= RCC::T::AHB2SMENR_RNGSMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_RNGSMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHB2RSTR |= RCC::T::AHB2RSTR_RNGRST;
    }
};
