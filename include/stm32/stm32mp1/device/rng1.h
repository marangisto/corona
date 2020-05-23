#pragma once

////
//
//      STM32MP1 RNG1 peripherals
//
////

////
//
//      RNG1
//
////

struct stm32mp15xxx_rng1_t
{
    volatile uint32_t RNG_CR;    // [read-write] RNG control register
    volatile uint32_t RNG_SR;    // RNG status register
    volatile uint32_t RNG_DR;    // [read-only] The RNG_DR register is a read-only register.
    reserved_t<0xfa> _0x3f4;
    volatile uint32_t RNG_VERR;  // [read-only] RNG version register
    volatile uint32_t RNG_IPIDR; // [read-only] RNG identification register
    volatile uint32_t RNG_SIDR;  // [read-only] RNG size ID register

    static constexpr uint32_t RNG_CR_RESET_VALUE = 0x0;
    static constexpr uint32_t RNG_CR_RNGEN = 0x4; // RNGEN
    static constexpr uint32_t RNG_CR_IE = 0x8;    // IE
    static constexpr uint32_t RNG_CR_CED = 0x20;  // CED

    static constexpr uint32_t RNG_SR_RESET_VALUE = 0x0;
    static constexpr uint32_t RNG_SR_DRDY = 0x1;  // DRDY
    static constexpr uint32_t RNG_SR_CECS = 0x2;  // CECS
    static constexpr uint32_t RNG_SR_SECS = 0x4;  // SECS
    static constexpr uint32_t RNG_SR_CEIS = 0x20; // CEIS
    static constexpr uint32_t RNG_SR_SEIS = 0x40; // SEIS

    static constexpr uint32_t RNG_DR_RESET_VALUE = 0x0;

    static constexpr uint32_t RNG_VERR_RESET_VALUE = 0x21;
    template<uint32_t X>
    static constexpr uint32_t RNG_VERR_MINREV =   // MINREV
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RNG_VERR_MAJREV =   // MAJREV
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t RNG_IPIDR_RESET_VALUE = 0x170041;

    static constexpr uint32_t RNG_SIDR_RESET_VALUE = 0xa3c5dd01;
};


template<>
struct peripheral_t<STM32MP15xxx, RNG1>
{
    typedef stm32mp15xxx_rng1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32MP15xxx, RNG2>
{
    typedef stm32mp15xxx_rng1_t T;
    static T& V;
};

using rng1_t = peripheral_t<mcu_svd, RNG1>;
using rng2_t = peripheral_t<mcu_svd, RNG2>;

template<int INST> struct rng_traits {};

template<> struct rng_traits<1>
{
    using rng = rng1_t;
};

template<> struct rng_traits<2>
{
    using rng = rng2_t;
};

