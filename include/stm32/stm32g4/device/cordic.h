#pragma once

////
//
//      STM32G4 CORDIC peripherals
//
///

// CORDIC: CORDIC Co-processor

struct stm32g431xx_cordic_t
{
    volatile uint32_t CSR; // CORDIC Control Status register
    volatile uint32_t WDATA; // FMAC Write Data register
    volatile uint32_t RDATA; // FMAC Read Data register

    static constexpr uint32_t CSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> CSR_FUNC; // FUNC
    typedef bit_field_t<4, 0xf> CSR_PRECISION; // PRECISION
    typedef bit_field_t<8, 0x7> CSR_SCALE; // SCALE
    static constexpr uint32_t CSR_IEN = 0x10000; // IEN
    static constexpr uint32_t CSR_DMAREN = 0x20000; // DMAREN
    static constexpr uint32_t CSR_DMAWEN = 0x40000; // DMAWEN
    static constexpr uint32_t CSR_NRES = 0x80000; // NRES
    static constexpr uint32_t CSR_NARGS = 0x100000; // NARGS
    static constexpr uint32_t CSR_RESSIZE = 0x200000; // RESSIZE
    static constexpr uint32_t CSR_ARGSIZE = 0x400000; // ARGSIZE
    static constexpr uint32_t CSR_RRDY = 0x80000000; // RRDY

    static constexpr uint32_t WDATA_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> WDATA_ARG; // ARG

    static constexpr uint32_t RDATA_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> RDATA_RES; // RES
};

template<>
struct peripheral_t<STM32G431xx, CORDIC>
{
    static constexpr periph_t P = CORDIC;
    using T = stm32g431xx_cordic_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G441xx, CORDIC>
{
    static constexpr periph_t P = CORDIC;
    using T = stm32g431xx_cordic_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G471xx, CORDIC>
{
    static constexpr periph_t P = CORDIC;
    using T = stm32g431xx_cordic_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G473xx, CORDIC>
{
    static constexpr periph_t P = CORDIC;
    using T = stm32g431xx_cordic_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G474xx, CORDIC>
{
    static constexpr periph_t P = CORDIC;
    using T = stm32g431xx_cordic_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G483xx, CORDIC>
{
    static constexpr periph_t P = CORDIC;
    using T = stm32g431xx_cordic_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, CORDIC>
{
    static constexpr periph_t P = CORDIC;
    using T = stm32g431xx_cordic_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G491xx, CORDIC>
{
    static constexpr periph_t P = CORDIC;
    using T = stm32g431xx_cordic_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G4A1xx, CORDIC>
{
    static constexpr periph_t P = CORDIC;
    using T = stm32g431xx_cordic_t;
    static T& V;
};

template<>
struct peripheral_t<STM32GBK1CBT6, CORDIC>
{
    static constexpr periph_t P = CORDIC;
    using T = stm32g431xx_cordic_t;
    static T& V;
};

using cordic_t = peripheral_t<svd, CORDIC>;

template<int INST> struct cordic_traits {};

template<> struct cordic_traits<0>
{
    using cordic = cordic_t;
    static constexpr clock_source_t CLOCK = AHB_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.AHB1ENR |= RCC::T::AHB1ENR_CORDICEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHB1ENR &= ~RCC::T::AHB1ENR_CORDICEN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.AHB1SMENR |= RCC::T::AHB1SMENR_CORDICSMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_CORDICSMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHB1RSTR |= RCC::T::AHB1RSTR_CORDICRST;
    }
};
