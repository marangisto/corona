#pragma once

////
//
//      STM32F7 RNG peripherals
//
///

// RNG: Random number generator

struct stm32f722_rng_t
{
    volatile uint32_t CR; // control register
    volatile uint32_t SR; // status register
    volatile uint32_t DR; // data register

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
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
struct peripheral_t<STM32F722, RNG>
{
    static constexpr periph_t P = RNG;
    using T = stm32f722_rng_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, RNG>
{
    static constexpr periph_t P = RNG;
    using T = stm32f722_rng_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, RNG>
{
    static constexpr periph_t P = RNG;
    using T = stm32f722_rng_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, RNG>
{
    static constexpr periph_t P = RNG;
    using T = stm32f722_rng_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, RNG>
{
    static constexpr periph_t P = RNG;
    using T = stm32f722_rng_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, RNG>
{
    static constexpr periph_t P = RNG;
    using T = stm32f722_rng_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, RNG>
{
    static constexpr periph_t P = RNG;
    using T = stm32f722_rng_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, RNG>
{
    static constexpr periph_t P = RNG;
    using T = stm32f722_rng_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, RNG>
{
    static constexpr periph_t P = RNG;
    using T = stm32f722_rng_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, RNG>
{
    static constexpr periph_t P = RNG;
    using T = stm32f722_rng_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, RNG>
{
    static constexpr periph_t P = RNG;
    using T = stm32f722_rng_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, RNG>
{
    static constexpr periph_t P = RNG;
    using T = stm32f722_rng_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, RNG>
{
    static constexpr periph_t P = RNG;
    using T = stm32f722_rng_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, RNG>
{
    static constexpr periph_t P = RNG;
    using T = stm32f722_rng_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, RNG>
{
    static constexpr periph_t P = RNG;
    using T = stm32f722_rng_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, RNG>
{
    static constexpr periph_t P = RNG;
    using T = stm32f722_rng_t;
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
        __asm volatile ("dsb"); // dm00037591 2.1.13
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
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }
};
