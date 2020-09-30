#pragma once

////
//
//      STM32L5 RNG peripherals
//
///

// RNG: RNG

struct stm32l552_rng_t
{
    volatile uint32_t RNG_CR; // RNG control register
    volatile uint32_t RNG_SR; // RNG status register
    volatile uint32_t RNG_DR; // The RNG_DR register is a read-only register that delivers a 32-bit random value when read. The content of this register is valid when DRDY= 1, even if RNGEN=0.
    reserved_t<0x1> _0xc;
    volatile uint32_t RNG_HTCR; // The RNG_DR register is a read-only register that delivers a 32-bit random value when read. The content of this register is valid when DRDY= 1, even if RNGEN=0.

    static constexpr uint32_t RNG_CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RNG_CR_RNGEN = 0x4; // Random number generator enable
    static constexpr uint32_t RNG_CR_IE = 0x8; // Interrupt enable
    static constexpr uint32_t RNG_CR_CED = 0x20; // Clock error detection Note: The clock error detection can be used only when ck_rc48 or ck_pll1_q (ck_pll1_q = 48MHz) source is selected otherwise, CED bit must be equal to 1. The clock error detection cannot be enabled nor disabled on the fly when RNG peripheral is enabled, to enable or disable CED the RNG must be disabled.
    typedef bit_field_t<8, 0xf> RNG_CR_RNG_CONFIG3; // RNG configuration 3
    static constexpr uint32_t RNG_CR_NISTC = 0x1000; // Non NIST compliant
    typedef bit_field_t<13, 0x7> RNG_CR_RNG_CONFIG2; // RNG configuration 2
    typedef bit_field_t<16, 0xf> RNG_CR_CLKDIV; // Clock divider factor
    typedef bit_field_t<20, 0x3f> RNG_CR_RNG_CONFIG1; // RNG configuration 1
    static constexpr uint32_t RNG_CR_CONDRST = 0x40000000; // Conditioning soft reset
    static constexpr uint32_t RNG_CR_CONFIGLOCK = 0x80000000; // RNG Config Lock

    static constexpr uint32_t RNG_SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RNG_SR_DRDY = 0x1; // Data ready Note: If IE=1 in RNG_CR, an interrupt is generated when DRDY=1. It can rise when the peripheral is disabled. When the output buffer becomes empty (after reading RNG_DR), this bit returns to 0 until a new random value is generated.
    static constexpr uint32_t RNG_SR_CECS = 0x2; // Clock error current status Note: This bit is meaningless if CED (Clock error detection) bit in RNG_CR is equal to 1.
    static constexpr uint32_t RNG_SR_SECS = 0x4; // Seed error current status ** More than 64 consecutive bits at the same value (0 or 1) ** More than 32 consecutive alternances of 0 and 1 (0101010101...01)
    static constexpr uint32_t RNG_SR_CEIS = 0x20; // Clock error interrupt status This bit is set at the same time as CECS. It is cleared by writing it to 0. An interrupt is pending if IE = 1 in the RNG_CR register. Note: This bit is meaningless if CED (Clock error detection) bit in RNG_CR is equal to 1.
    static constexpr uint32_t RNG_SR_SEIS = 0x40; // Seed error interrupt status This bit is set at the same time as SECS. It is cleared by writing it to 0. ** More than 64 consecutive bits at the same value (0 or 1) ** More than 32 consecutive alternances of 0 and 1 (0101010101...01) An interrupt is pending if IE = 1 in the RNG_CR register.

    static constexpr uint32_t RNG_DR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> RNG_DR_RNDATA; // Random data 32-bit random data which are valid when DRDY=1.


    static constexpr uint32_t RNG_HTCR_RESET_VALUE = 0xcaa74; // Reset value
    typedef bit_field_t<0, 0xffffffff> RNG_HTCR_HTCFG; // health test configuration
};

template<>
struct peripheral_t<STM32L552, RNG>
{
    static constexpr periph_t P = RNG;
    using T = stm32l552_rng_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L552, SEC_RNG>
{
    static constexpr periph_t P = SEC_RNG;
    using T = stm32l552_rng_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, RNG>
{
    static constexpr periph_t P = RNG;
    using T = stm32l552_rng_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, SEC_RNG>
{
    static constexpr periph_t P = SEC_RNG;
    using T = stm32l552_rng_t;
    static T& V;
};

using rng_t = peripheral_t<svd, RNG>;
using sec_rng_t = peripheral_t<svd, SEC_RNG>;

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
