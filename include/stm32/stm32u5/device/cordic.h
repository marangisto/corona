#pragma once

////
//
//      STM32U5 CORDIC peripherals
//
///

// CORDIC: CORDIC Co-processor

struct stm32u5xx_cordic_t
{
    volatile uint32_t CSR; // CORDIC Control Status register
    volatile uint32_t WDATA; // FMAC Write Data register
    volatile uint32_t RDATA; // FMAC Read Data register

    static constexpr uint32_t CSR_RESET_VALUE = 0x50; // Reset value
    typedef bit_field_t<0, 0xf> CSR_FUNC; // Function
    typedef bit_field_t<4, 0xf> CSR_PRECISION; // Precision required (number of iterations)
    typedef bit_field_t<8, 0x7> CSR_SCALE; // Scaling factor
    static constexpr uint32_t CSR_IEN = 0x10000; // Enable interrupt
    static constexpr uint32_t CSR_DMAREN = 0x20000; // Enable DMA read channel
    static constexpr uint32_t CSR_DMAWEN = 0x40000; // Enable DMA write channel
    static constexpr uint32_t CSR_NRES = 0x80000; // Number of results in the CORDIC_RDATA register
    static constexpr uint32_t CSR_NARGS = 0x100000; // Number of arguments expected by the CORDIC_WDATA register
    static constexpr uint32_t CSR_RESSIZE = 0x200000; // Width of output data
    static constexpr uint32_t CSR_ARGSIZE = 0x400000; // Width of input data
    static constexpr uint32_t CSR_RRDY = 0x80000000; // Result ready flag

    static constexpr uint32_t WDATA_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> WDATA_ARG; // Function input arguments

    static constexpr uint32_t RDATA_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> RDATA_RES; // Function result
};

template<>
struct peripheral_t<STM32U5xx, CORDIC>
{
    static constexpr periph_t P = CORDIC;
    using T = stm32u5xx_cordic_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, SEC_CORDIC>
{
    static constexpr periph_t P = SEC_CORDIC;
    using T = stm32u5xx_cordic_t;
    static T& V;
};

using cordic_t = peripheral_t<svd, CORDIC>;
using sec_cordic_t = peripheral_t<svd, SEC_CORDIC>;
