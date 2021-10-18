#pragma once

////
//
//      STM32G0 RNG peripherals
//
///

// RNG: Random number generator

struct stm32g041_rng_t
{
    volatile uint32_t CR; // control register
    volatile uint32_t SR; // status register
    volatile uint32_t DR; // data register

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_RNGEN = 0x4; // Random number generator enable
    static constexpr uint32_t CR_IE = 0x8; // Interrupt enable
    static constexpr uint32_t CR_CED = 0x20; // Clock error detection
    static constexpr uint32_t CR_BYP = 0x40; // Bypass mode enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_SEIS = 0x40; // Seed error interrupt status
    static constexpr uint32_t SR_CEIS = 0x20; // Clock error interrupt status
    static constexpr uint32_t SR_SECS = 0x4; // Seed error current status
    static constexpr uint32_t SR_CECS = 0x2; // Clock error current status
    static constexpr uint32_t SR_DRDY = 0x1; // Data ready

    static constexpr uint32_t DR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DR_RNDATA; // Random data
};

// RNG: Random number generator

struct stm32g0c1_rng_t
{
    volatile uint32_t CR; // control register
    volatile uint32_t SR; // status register
    volatile uint32_t DR; // data register

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_RNGEN = 0x4; // True random number generator enable
    static constexpr uint32_t CR_IE = 0x8; // Interrupt Enable
    static constexpr uint32_t CR_CED = 0x20; // Clock error detection The clock error detection cannot be enabled nor disabled on-the-fly when the RNG is enabled, i.e. to enable or disable CED the RNG must be disabled.

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_DRDY = 0x1; // Data Ready Once the output buffer becomes empty (after reading the RNG_DR register), this bit returns to 0 until a new random value is generated. Note: The DRDY bit can rise when the peripheral is disabled (RNGEN=0 in the RNG_CR register). If IE=1 in the RNG_CR register, an interrupt is generated when DRDY=1.
    static constexpr uint32_t SR_CECS = 0x2; // Clock error current status Note: CECS bit is valid only if the CED bit in the RNG_CR register is set to 0.
    static constexpr uint32_t SR_SECS = 0x4; // Seed error current status One of the noise source has provided more than 64 consecutive bits at a constant value (0 or 1), or more than 32 consecutive occurrence of two bit patterns (01 or 10) Both noise sources have delivered more than 32 consecutive bits at a constant value (0 or 1), or more than 16 consecutive occurrence of two bit patterns (01 or 10)
    static constexpr uint32_t SR_CEIS = 0x20; // Clock error interrupt status This bit is set at the same time as CECS. It is cleared by writing 0. Writing 1 has no effect. An interrupt is pending if IE = 1 in the RNG_CR register.
    static constexpr uint32_t SR_SEIS = 0x40; // Seed error interrupt status This bit is set at the same time as SECS. It is cleared by writing 0. Writing 1 has no effect. An interrupt is pending if IE = 1 in the RNG_CR register.

    static constexpr uint32_t DR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DR_RNDATA; // Random data
};

template<>
struct peripheral_t<STM32G041, RNG>
{
    static constexpr periph_t P = RNG;
    using T = stm32g041_rng_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G070, RNG>
{
    static constexpr periph_t P = RNG;
    using T = stm32g041_rng_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G071, RNG>
{
    static constexpr periph_t P = RNG;
    using T = stm32g041_rng_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G081, RNG>
{
    static constexpr periph_t P = RNG;
    using T = stm32g041_rng_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0C1, RNG>
{
    static constexpr periph_t P = RNG;
    using T = stm32g0c1_rng_t;
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
        RCC::V.AHBENR |= RCC::T::AHBENR_RNGEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHBENR &= ~RCC::T::AHBENR_RNGEN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.AHBSMENR |= RCC::T::AHBSMENR_RNGSMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.AHBSMENR &= ~RCC::T::AHBSMENR_RNGSMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHBRSTR |= RCC::T::AHBRSTR_RNGRST;
    }
};
