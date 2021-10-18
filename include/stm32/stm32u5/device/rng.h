#pragma once

////
//
//      STM32U5 RNG peripherals
//
///

// RNG: Random number generator

struct stm32u5xx_rng_t
{
    volatile uint32_t CR; // control register
    volatile uint32_t SR; // status register
    volatile uint32_t DR; // data register
    reserved_t<0x1> _0xc;
    volatile uint32_t HTCR; // health test control register

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_CONFIGLOCK = 0x80000000; // RNG Config Lock
    static constexpr uint32_t CR_CONDRST = 0x40000000; // Conditioning soft reset
    typedef bit_field_t<20, 0x3f> CR_RNG_CONFIG1; // RNG configuration 1
    typedef bit_field_t<16, 0xf> CR_CLKDIV; // Clock divider factor
    typedef bit_field_t<13, 0x7> CR_RNG_CONFIG2; // RNG configuration 2
    static constexpr uint32_t CR_NISTC = 0x1000; // Non NIST compliant
    typedef bit_field_t<8, 0xf> CR_RNG_CONFIG3; // RNG configuration 3
    static constexpr uint32_t CR_ARDIS = 0x80; // Auto reset disable
    static constexpr uint32_t CR_CED = 0x20; // Clock error detection
    static constexpr uint32_t CR_IE = 0x8; // Interrupt Enable
    static constexpr uint32_t CR_RNGEN = 0x4; // True random number generator enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_SEIS = 0x40; // Seed error interrupt status
    static constexpr uint32_t SR_CEIS = 0x20; // Clock error interrupt status
    static constexpr uint32_t SR_SECS = 0x4; // Seed error current status
    static constexpr uint32_t SR_CECS = 0x2; // Clock error current status
    static constexpr uint32_t SR_DRDY = 0x1; // Data ready

    static constexpr uint32_t DR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DR_RNDATA; // Random data


    static constexpr uint32_t HTCR_RESET_VALUE = 0x6274; // Reset value
    typedef bit_field_t<0, 0xffffffff> HTCR_HTCFG; // health test configuration
};

template<>
struct peripheral_t<STM32U5xx, RNG>
{
    static constexpr periph_t P = RNG;
    using T = stm32u5xx_rng_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, SEC_RNG>
{
    static constexpr periph_t P = SEC_RNG;
    using T = stm32u5xx_rng_t;
    static T& V;
};

using rng_t = peripheral_t<svd, RNG>;
using sec_rng_t = peripheral_t<svd, SEC_RNG>;
