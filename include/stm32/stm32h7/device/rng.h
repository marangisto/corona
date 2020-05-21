#pragma once

////
//
//      STM32H7 RNG peripherals
//
////

////
//
//      RNG
//
////

struct stm32h742x_rng_t
{
    volatile uint32_t CR; // [read-write] RNG control register
    volatile uint32_t SR; // RNG status register
    volatile uint32_t DR; // [read-only] The RNG_DR register is a read-only register that delivers a 32-bit random value when read. The content of this register is valid when DRDY= 1, even if RNGEN=0.

    static constexpr uint32_t CR_RESET_VALUE = 0x0;
    static constexpr uint32_t CR_RNGEN = 0x4; // Random number generator enable
    static constexpr uint32_t CR_IE = 0x8;    // Interrupt enable
    static constexpr uint32_t CR_CED = 0x20;  // Clock error detection Note: The clock error detection can be used only when ck_rc48 or ck_pll1_q (ck_pll1_q = 48MHz) source is selected otherwise, CED bit must be equal to 1. The clock error detection cannot be enabled nor disabled on the fly when RNG peripheral is enabled, to enable or disable CED the RNG must be disabled.

    static constexpr uint32_t SR_RESET_VALUE = 0x0;
    static constexpr uint32_t SR_DRDY = 0x1;  // Data ready Note: If IE=1 in RNG_CR, an interrupt is generated when DRDY=1. It can rise when the peripheral is disabled. When the output buffer becomes empty (after reading RNG_DR), this bit returns to 0 until a new random value is generated.
    static constexpr uint32_t SR_CECS = 0x2;  // Clock error current status Note: This bit is meaningless if CED (Clock error detection) bit in RNG_CR is equal to 1.
    static constexpr uint32_t SR_SECS = 0x4;  // Seed error current status ** More than 64 consecutive bits at the same value (0 or 1) ** More than 32 consecutive alternances of 0 and 1 (0101010101...01)
    static constexpr uint32_t SR_CEIS = 0x20; // Clock error interrupt status This bit is set at the same time as CECS. It is cleared by writing it to 0. An interrupt is pending if IE = 1 in the RNG_CR register. Note: This bit is meaningless if CED (Clock error detection) bit in RNG_CR is equal to 1.
    static constexpr uint32_t SR_SEIS = 0x40; // Seed error interrupt status This bit is set at the same time as SECS. It is cleared by writing it to 0. ** More than 64 consecutive bits at the same value (0 or 1) ** More than 32 consecutive alternances of 0 and 1 (0101010101...01) An interrupt is pending if IE = 1 in the RNG_CR register.

    static constexpr uint32_t DR_RESET_VALUE = 0x0;
};


////
//
//      RNG
//
////

struct stm32h750x_rng_t
{
    volatile uint32_t RNG_CR; // [read-write] RNG control register
    volatile uint32_t RNG_SR; // RNG status register
    volatile uint32_t RNG_DR; // [read-only] The RNG_DR register is a read-only register that delivers a 32-bit random value when read. The content of this register is valid when DRDY= 1, even if RNGEN=0.

    static constexpr uint32_t RNG_CR_RESET_VALUE = 0x0;
    static constexpr uint32_t RNG_CR_RNGEN = 0x4; // Random number generator enable
    static constexpr uint32_t RNG_CR_IE = 0x8;    // Interrupt enable
    static constexpr uint32_t RNG_CR_CED = 0x20;  // Clock error detection Note: The clock error detection can be used only when ck_rc48 or ck_pll1_q (ck_pll1_q = 48MHz) source is selected otherwise, CED bit must be equal to 1. The clock error detection cannot be enabled nor disabled on the fly when RNG peripheral is enabled, to enable or disable CED the RNG must be disabled.

    static constexpr uint32_t RNG_SR_RESET_VALUE = 0x0;
    static constexpr uint32_t RNG_SR_DRDY = 0x1;  // Data ready Note: If IE=1 in RNG_CR, an interrupt is generated when DRDY=1. It can rise when the peripheral is disabled. When the output buffer becomes empty (after reading RNG_DR), this bit returns to 0 until a new random value is generated.
    static constexpr uint32_t RNG_SR_CECS = 0x2;  // Clock error current status Note: This bit is meaningless if CED (Clock error detection) bit in RNG_CR is equal to 1.
    static constexpr uint32_t RNG_SR_SECS = 0x4;  // Seed error current status ** More than 64 consecutive bits at the same value (0 or 1) ** More than 32 consecutive alternances of 0 and 1 (0101010101...01)
    static constexpr uint32_t RNG_SR_CEIS = 0x20; // Clock error interrupt status This bit is set at the same time as CECS. It is cleared by writing it to 0. An interrupt is pending if IE = 1 in the RNG_CR register. Note: This bit is meaningless if CED (Clock error detection) bit in RNG_CR is equal to 1.
    static constexpr uint32_t RNG_SR_SEIS = 0x40; // Seed error interrupt status This bit is set at the same time as SECS. It is cleared by writing it to 0. ** More than 64 consecutive bits at the same value (0 or 1) ** More than 32 consecutive alternances of 0 and 1 (0101010101...01) An interrupt is pending if IE = 1 in the RNG_CR register.

    static constexpr uint32_t RNG_DR_RESET_VALUE = 0x0;
};


template<>
struct peripheral_t<STM32H742x, RNG>
{
    typedef stm32h742x_rng_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, RNG>
{
    typedef stm32h742x_rng_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, RNG>
{
    typedef stm32h742x_rng_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, RNG>
{
    typedef stm32h742x_rng_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, RNG>
{
    typedef stm32h742x_rng_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, RNG>
{
    typedef stm32h742x_rng_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, RNG>
{
    typedef stm32h742x_rng_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, RNG>
{
    typedef stm32h742x_rng_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, RNG>
{
    typedef stm32h742x_rng_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, RNG>
{
    typedef stm32h742x_rng_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, RNG>
{
    typedef stm32h742x_rng_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, RNG>
{
    typedef stm32h742x_rng_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, RNG>
{
    typedef stm32h750x_rng_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, RNG>
{
    typedef stm32h750x_rng_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, RNG>
{
    typedef stm32h750x_rng_t T;
    static T& V;
};

using rng_t = peripheral_t<mcu_svd, RNG>;

