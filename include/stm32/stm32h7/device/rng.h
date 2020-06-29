#pragma once

////
//
//      STM32H7 RNG peripherals
//
///

// RNG: RNG

struct stm32h742x_rng_t
{
    volatile uint32_t CR; // RNG control register
    volatile uint32_t SR; // RNG status register
    volatile uint32_t DR; // The RNG_DR register is a read-only register that delivers a 32-bit random value when read. The content of this register is valid when DRDY= 1, even if RNGEN=0.

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_RNGEN = 0x4; // Random number generator enable
    static constexpr uint32_t CR_IE = 0x8; // Interrupt enable
    static constexpr uint32_t CR_CED = 0x20; // Clock error detection Note: The clock error detection can be used only when ck_rc48 or ck_pll1_q (ck_pll1_q = 48MHz) source is selected otherwise, CED bit must be equal to 1. The clock error detection cannot be enabled nor disabled on the fly when RNG peripheral is enabled, to enable or disable CED the RNG must be disabled.

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_DRDY = 0x1; // Data ready Note: If IE=1 in RNG_CR, an interrupt is generated when DRDY=1. It can rise when the peripheral is disabled. When the output buffer becomes empty (after reading RNG_DR), this bit returns to 0 until a new random value is generated.
    static constexpr uint32_t SR_CECS = 0x2; // Clock error current status Note: This bit is meaningless if CED (Clock error detection) bit in RNG_CR is equal to 1.
    static constexpr uint32_t SR_SECS = 0x4; // Seed error current status ** More than 64 consecutive bits at the same value (0 or 1) ** More than 32 consecutive alternances of 0 and 1 (0101010101...01)
    static constexpr uint32_t SR_CEIS = 0x20; // Clock error interrupt status This bit is set at the same time as CECS. It is cleared by writing it to 0. An interrupt is pending if IE = 1 in the RNG_CR register. Note: This bit is meaningless if CED (Clock error detection) bit in RNG_CR is equal to 1.
    static constexpr uint32_t SR_SEIS = 0x40; // Seed error interrupt status This bit is set at the same time as SECS. It is cleared by writing it to 0. ** More than 64 consecutive bits at the same value (0 or 1) ** More than 32 consecutive alternances of 0 and 1 (0101010101...01) An interrupt is pending if IE = 1 in the RNG_CR register.

    static constexpr uint32_t DR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DR_RNDATA; // Random data 32-bit random data which are valid when DRDY=1.
};

// RNG: RNG

struct stm32h750x_rng_t
{
    volatile uint32_t RNG_CR; // RNG control register
    volatile uint32_t RNG_SR; // RNG status register
    volatile uint32_t RNG_DR; // The RNG_DR register is a read-only register that delivers a 32-bit random value when read. The content of this register is valid when DRDY= 1, even if RNGEN=0.

    static constexpr uint32_t RNG_CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RNG_CR_RNGEN = 0x4; // Random number generator enable
    static constexpr uint32_t RNG_CR_IE = 0x8; // Interrupt enable
    static constexpr uint32_t RNG_CR_CED = 0x20; // Clock error detection Note: The clock error detection can be used only when ck_rc48 or ck_pll1_q (ck_pll1_q = 48MHz) source is selected otherwise, CED bit must be equal to 1. The clock error detection cannot be enabled nor disabled on the fly when RNG peripheral is enabled, to enable or disable CED the RNG must be disabled.

    static constexpr uint32_t RNG_SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RNG_SR_DRDY = 0x1; // Data ready Note: If IE=1 in RNG_CR, an interrupt is generated when DRDY=1. It can rise when the peripheral is disabled. When the output buffer becomes empty (after reading RNG_DR), this bit returns to 0 until a new random value is generated.
    static constexpr uint32_t RNG_SR_CECS = 0x2; // Clock error current status Note: This bit is meaningless if CED (Clock error detection) bit in RNG_CR is equal to 1.
    static constexpr uint32_t RNG_SR_SECS = 0x4; // Seed error current status ** More than 64 consecutive bits at the same value (0 or 1) ** More than 32 consecutive alternances of 0 and 1 (0101010101...01)
    static constexpr uint32_t RNG_SR_CEIS = 0x20; // Clock error interrupt status This bit is set at the same time as CECS. It is cleared by writing it to 0. An interrupt is pending if IE = 1 in the RNG_CR register. Note: This bit is meaningless if CED (Clock error detection) bit in RNG_CR is equal to 1.
    static constexpr uint32_t RNG_SR_SEIS = 0x40; // Seed error interrupt status This bit is set at the same time as SECS. It is cleared by writing it to 0. ** More than 64 consecutive bits at the same value (0 or 1) ** More than 32 consecutive alternances of 0 and 1 (0101010101...01) An interrupt is pending if IE = 1 in the RNG_CR register.

    static constexpr uint32_t RNG_DR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> RNG_DR_RNDATA; // Random data 32-bit random data which are valid when DRDY=1.
};

template<>
struct peripheral_t<STM32H742x, RNG>
{
    using T = stm32h742x_rng_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, RNG>
{
    using T = stm32h742x_rng_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, RNG>
{
    using T = stm32h742x_rng_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, RNG>
{
    using T = stm32h742x_rng_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, RNG>
{
    using T = stm32h742x_rng_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, RNG>
{
    using T = stm32h742x_rng_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, RNG>
{
    using T = stm32h742x_rng_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, RNG>
{
    using T = stm32h742x_rng_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, RNG>
{
    using T = stm32h742x_rng_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, RNG>
{
    using T = stm32h742x_rng_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, RNG>
{
    using T = stm32h742x_rng_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, RNG>
{
    using T = stm32h742x_rng_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, RNG>
{
    using T = stm32h750x_rng_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, RNG>
{
    using T = stm32h750x_rng_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, RNG>
{
    using T = stm32h750x_rng_t;
    static T& V;
};

using rng_t = peripheral_t<svd, RNG>;

template<int INST> struct rng_traits {};

template<> struct rng_traits<0>
{
    using rng = rng_t;

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
    static void reset()
    {
        RCC::V.AHB2RSTR |= RCC::T::AHB2RSTR_RNGRST;
    }
};
