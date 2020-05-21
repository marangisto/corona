#pragma once

////
//
//      STM32L5 RNG peripherals
//
////

////
//
//      RNG
//
////

struct stm32l552_rng_t
{
    volatile uint32_t RNG_CR;   // [read-write] RNG control register
    volatile uint32_t RNG_SR;   // RNG status register
    volatile uint32_t RNG_DR;   // [read-only] The RNG_DR register is a read-only register that delivers a 32-bit random value when read. The content of this register is valid when DRDY= 1, even if RNGEN=0.
    reserved_t<0x1> _0x10;
    volatile uint32_t RNG_HTCR; // [read-write] The RNG_DR register is a read-only register that delivers a 32-bit random value when read. The content of this register is valid when DRDY= 1, even if RNGEN=0.

    static constexpr uint32_t RNG_CR_RESET_VALUE = 0x0;
    static constexpr uint32_t RNG_CR_RNGEN = 0x4;             // Random number generator enable
    static constexpr uint32_t RNG_CR_IE = 0x8;                // Interrupt enable
    static constexpr uint32_t RNG_CR_CED = 0x20;              // Clock error detection Note: The clock error detection can be used only when ck_rc48 or ck_pll1_q (ck_pll1_q = 48MHz) source is selected otherwise, CED bit must be equal to 1. The clock error detection cannot be enabled nor disabled on the fly when RNG peripheral is enabled, to enable or disable CED the RNG must be disabled.
    template<uint32_t X>
    static constexpr uint32_t RNG_CR_RNG_CONFIG3 =            // RNG configuration 3
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t RNG_CR_NISTC = 0x1000;          // Non NIST compliant
    template<uint32_t X>
    static constexpr uint32_t RNG_CR_RNG_CONFIG2 =            // RNG configuration 2
        bit_field_t<13, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RNG_CR_CLKDIV =                 // Clock divider factor
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RNG_CR_RNG_CONFIG1 =            // RNG configuration 1
        bit_field_t<20, 0x3f>::value<X>();
    static constexpr uint32_t RNG_CR_CONDRST = 0x40000000;    // Conditioning soft reset
    static constexpr uint32_t RNG_CR_CONFIGLOCK = 0x80000000; // RNG Config Lock

    static constexpr uint32_t RNG_SR_RESET_VALUE = 0x0;
    static constexpr uint32_t RNG_SR_DRDY = 0x1;  // Data ready Note: If IE=1 in RNG_CR, an interrupt is generated when DRDY=1. It can rise when the peripheral is disabled. When the output buffer becomes empty (after reading RNG_DR), this bit returns to 0 until a new random value is generated.
    static constexpr uint32_t RNG_SR_CECS = 0x2;  // Clock error current status Note: This bit is meaningless if CED (Clock error detection) bit in RNG_CR is equal to 1.
    static constexpr uint32_t RNG_SR_SECS = 0x4;  // Seed error current status ** More than 64 consecutive bits at the same value (0 or 1) ** More than 32 consecutive alternances of 0 and 1 (0101010101...01)
    static constexpr uint32_t RNG_SR_CEIS = 0x20; // Clock error interrupt status This bit is set at the same time as CECS. It is cleared by writing it to 0. An interrupt is pending if IE = 1 in the RNG_CR register. Note: This bit is meaningless if CED (Clock error detection) bit in RNG_CR is equal to 1.
    static constexpr uint32_t RNG_SR_SEIS = 0x40; // Seed error interrupt status This bit is set at the same time as SECS. It is cleared by writing it to 0. ** More than 64 consecutive bits at the same value (0 or 1) ** More than 32 consecutive alternances of 0 and 1 (0101010101...01) An interrupt is pending if IE = 1 in the RNG_CR register.

    static constexpr uint32_t RNG_DR_RESET_VALUE = 0x0;

    static constexpr uint32_t RNG_HTCR_RESET_VALUE = 0xcaa74;
};


template<>
struct peripheral_t<STM32L552, RNG>
{
    typedef stm32l552_rng_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L552, SEC_RNG>
{
    typedef stm32l552_rng_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, RNG>
{
    typedef stm32l552_rng_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, SEC_RNG>
{
    typedef stm32l552_rng_t T;
    static T& V;
};

using rng_t = peripheral_t<mcu_svd, RNG>;
using sec_rng_t = peripheral_t<mcu_svd, SEC_RNG>;

