#pragma once

////
//
//      STM32G0 RNG peripherals
//
////

////
//
//      Random number generator
//
////

struct stm32g041_rng_t
{
    volatile uint32_t CR; // [read-write] control register
    volatile uint32_t SR; // status register
    volatile uint32_t DR; // [read-only] data register

    static constexpr uint32_t CR_RESET_VALUE = 0x0;
    static constexpr uint32_t CR_RNGEN = 0x4; // Random number generator enable
    static constexpr uint32_t CR_IE = 0x8;    // Interrupt enable
    static constexpr uint32_t CR_CED = 0x20;  // Clock error detection
    static constexpr uint32_t CR_BYP = 0x40;  // Bypass mode enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0;
    static constexpr uint32_t SR_SEIS = 0x40; // Seed error interrupt status
    static constexpr uint32_t SR_CEIS = 0x20; // Clock error interrupt status
    static constexpr uint32_t SR_SECS = 0x4;  // Seed error current status
    static constexpr uint32_t SR_CECS = 0x2;  // Clock error current status
    static constexpr uint32_t SR_DRDY = 0x1;  // Data ready

    static constexpr uint32_t DR_RESET_VALUE = 0x0;
};


template<>
struct peripheral_t<STM32G041, RNG>
{
    typedef stm32g041_rng_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G070, RNG>
{
    typedef stm32g041_rng_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G071, RNG>
{
    typedef stm32g041_rng_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G081, RNG>
{
    typedef stm32g041_rng_t T;
    static T& V;
};

using rng_t = peripheral_t<mcu_svd, RNG>;

