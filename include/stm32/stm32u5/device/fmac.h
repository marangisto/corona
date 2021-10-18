#pragma once

////
//
//      STM32U5 FMAC peripherals
//
///

// FMAC: Filter Math Accelerator

struct stm32u5xx_fmac_t
{
    volatile uint32_t X1BUFCFG; // FMAC X1 Buffer Configuration register
    volatile uint32_t X2BUFCFG; // FMAC X2 Buffer Configuration register
    volatile uint32_t YBUFCFG; // FMAC Y Buffer Configuration register
    volatile uint32_t PARAM; // FMAC Parameter register
    volatile uint32_t CR; // FMAC Control register
    volatile uint32_t SR; // FMAC Status register
    volatile uint32_t WDATA; // FMAC Write Data register
    volatile uint32_t RDATA; // FMAC Read Data register

    static constexpr uint32_t X1BUFCFG_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> X1BUFCFG_X1_BASE; // Base address of X1 buffer
    typedef bit_field_t<8, 0xff> X1BUFCFG_X1_BUF_SIZE; // Allocated size of X1 buffer in 16-bit words
    typedef bit_field_t<24, 0x3> X1BUFCFG_FULL_WM; // Watermark for buffer full flag

    static constexpr uint32_t X2BUFCFG_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> X2BUFCFG_X2_BASE; // Base address of X2 buffer
    typedef bit_field_t<8, 0xff> X2BUFCFG_X2_BUF_SIZE; // Size of X2 buffer in 16-bit words

    static constexpr uint32_t YBUFCFG_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> YBUFCFG_Y_BASE; // Base address of Y buffer
    typedef bit_field_t<8, 0xff> YBUFCFG_Y_BUF_SIZE; // Size of Y buffer in 16-bit words
    typedef bit_field_t<24, 0x3> YBUFCFG_EMPTY_WM; // Watermark for buffer empty flag

    static constexpr uint32_t PARAM_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PARAM_START = 0x80000000; // Enable execution
    typedef bit_field_t<24, 0x7f> PARAM_FUNC; // Function
    typedef bit_field_t<16, 0xff> PARAM_R; // Input parameter R
    typedef bit_field_t<8, 0xff> PARAM_Q; // Input parameter Q
    typedef bit_field_t<0, 0xff> PARAM_P; // Input parameter P

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_RESET = 0x10000; // Reset FMAC unit
    static constexpr uint32_t CR_CLIPEN = 0x8000; // Enable clipping
    static constexpr uint32_t CR_DMAWEN = 0x200; // Enable DMA write channel requests
    static constexpr uint32_t CR_DMAREN = 0x100; // Enable DMA read channel requests
    static constexpr uint32_t CR_SATIEN = 0x10; // Enable saturation error interrupts
    static constexpr uint32_t CR_UNFLIEN = 0x8; // Enable underflow error interrupts
    static constexpr uint32_t CR_OVFLIEN = 0x4; // Enable overflow error interrupts
    static constexpr uint32_t CR_WIEN = 0x2; // Enable write interrupt
    static constexpr uint32_t CR_RIEN = 0x1; // Enable read interrupt

    static constexpr uint32_t SR_RESET_VALUE = 0x1; // Reset value
    static constexpr uint32_t SR_YEMPTY = 0x1; // Y buffer empty flag
    static constexpr uint32_t SR_X1FULL = 0x2; // X1 buffer full flag
    static constexpr uint32_t SR_OVFL = 0x100; // Overflow error flag
    static constexpr uint32_t SR_UNFL = 0x200; // Underflow error flag
    static constexpr uint32_t SR_SAT = 0x400; // Saturation error flag

    static constexpr uint32_t WDATA_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> WDATA_WDATA; // Write data

    static constexpr uint32_t RDATA_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> RDATA_RDATA; // Read data
};

template<>
struct peripheral_t<STM32U5xx, FMAC>
{
    static constexpr periph_t P = FMAC;
    using T = stm32u5xx_fmac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, SEC_FMAC>
{
    static constexpr periph_t P = SEC_FMAC;
    using T = stm32u5xx_fmac_t;
    static T& V;
};

using fmac_t = peripheral_t<svd, FMAC>;
using sec_fmac_t = peripheral_t<svd, SEC_FMAC>;
