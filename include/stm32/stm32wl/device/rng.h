#pragma once

////
//
//      STM32WL RNG peripherals
//
///

// RNG: True random number generator

struct stm32wl5x_cm0p_rng_t
{
    volatile uint32_t CR; // control register
    volatile uint32_t SR; // status register
    volatile uint32_t DR; // data register
    reserved_t<0x1> _0xc;
    volatile uint32_t HTCR; // health test control register

    static constexpr uint32_t CR_RESET_VALUE = 0x800000; // Reset value
    static constexpr uint32_t CR_RNGEN = 0x4; // True random number generator enable
    static constexpr uint32_t CR_IE = 0x8; // Interrupt Enable
    static constexpr uint32_t CR_CED = 0x20; // Interrupt Enable
    typedef bit_field_t<8, 0xf> CR_RNG_CONFIG3; // RNG_CONFIG3
    static constexpr uint32_t CR_NISTC = 0x1000; // NISTC
    typedef bit_field_t<13, 0x7> CR_RNG_CONFIG2; // RNG_CONFIG2
    typedef bit_field_t<16, 0xf> CR_CLKDIV; // CLKDIV
    typedef bit_field_t<20, 0x3f> CR_RNG_CONFIG1; // RNG_CONFIG1
    static constexpr uint32_t CR_CONDRST = 0x40000000; // Conditioning soft reset
    static constexpr uint32_t CR_CONFIGLOCK = 0x80000000; // CONFIGLOCK

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_SEIS = 0x40; // Seed error interrupt status
    static constexpr uint32_t SR_CEIS = 0x20; // Clock error interrupt status
    static constexpr uint32_t SR_SECS = 0x4; // Seed error current status
    static constexpr uint32_t SR_CECS = 0x2; // Clock error current status
    static constexpr uint32_t SR_DRDY = 0x1; // Data Ready

    static constexpr uint32_t DR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DR_RNDATA; // Random data


    static constexpr uint32_t HTCR_RESET_VALUE = 0x5a4e; // Reset value
    typedef bit_field_t<0, 0xffffffff> HTCR_HTCFG; // health test configuration
};

template<>
struct peripheral_t<STM32WL5x_CM0P, RNG>
{
    static constexpr periph_t P = RNG;
    using T = stm32wl5x_cm0p_rng_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WL5x_CM4, RNG>
{
    static constexpr periph_t P = RNG;
    using T = stm32wl5x_cm0p_rng_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WLE5_CM4, RNG>
{
    static constexpr periph_t P = RNG;
    using T = stm32wl5x_cm0p_rng_t;
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
        RCC::V.AHB3ENR |= RCC::T::AHB3ENR_RNGEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHB3ENR &= ~RCC::T::AHB3ENR_RNGEN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.AHB3SMENR |= RCC::T::AHB3SMENR_RNGSMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.AHB3SMENR &= ~RCC::T::AHB3SMENR_RNGSMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHB3RSTR |= RCC::T::AHB3RSTR_RNGRST;
    }
};
