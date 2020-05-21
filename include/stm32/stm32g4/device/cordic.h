#pragma once

////
//
//      STM32G4 CORDIC peripherals
//
////

////
//
//      CORDIC Co-processor
//
////

struct stm32g431xx_cordic_t
{
    volatile uint32_t CSR;   // [read-write] CORDIC Control Status register
    volatile uint32_t WDATA; // [read-write] FMAC Write Data register
    volatile uint32_t RDATA; // [read-only] FMAC Read Data register

    static constexpr uint32_t CSR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CSR_FUNC =              // FUNC
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CSR_PRECISION =         // PRECISION
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CSR_SCALE =             // SCALE
        bit_field_t<8, 0x7>::value<X>();
    static constexpr uint32_t CSR_IEN = 0x10000;      // IEN
    static constexpr uint32_t CSR_DMAREN = 0x20000;   // DMAREN
    static constexpr uint32_t CSR_DMAWEN = 0x40000;   // DMAWEN
    static constexpr uint32_t CSR_NRES = 0x80000;     // NRES
    static constexpr uint32_t CSR_NARGS = 0x100000;   // NARGS
    static constexpr uint32_t CSR_RESSIZE = 0x200000; // RESSIZE
    static constexpr uint32_t CSR_ARGSIZE = 0x400000; // ARGSIZE
    static constexpr uint32_t CSR_RRDY = 0x80000000;  // RRDY

    static constexpr uint32_t WDATA_RESET_VALUE = 0x0;

    static constexpr uint32_t RDATA_RESET_VALUE = 0x0;
};


template<>
struct peripheral_t<STM32G431xx, CORDIC>
{
    typedef stm32g431xx_cordic_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G441xx, CORDIC>
{
    typedef stm32g431xx_cordic_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G471xx, CORDIC>
{
    typedef stm32g431xx_cordic_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G473xx, CORDIC>
{
    typedef stm32g431xx_cordic_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G474xx, CORDIC>
{
    typedef stm32g431xx_cordic_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G483xx, CORDIC>
{
    typedef stm32g431xx_cordic_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, CORDIC>
{
    typedef stm32g431xx_cordic_t T;
    static T& V;
};

using cordic_t = peripheral_t<mcu_svd, CORDIC>;

