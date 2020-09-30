#pragma once

////
//
//      STM32G4 FMAC peripherals
//
///

// FMAC: Filter Math Accelerator

struct stm32g431xx_fmac_t
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
    typedef bit_field_t<0, 0xff> X1BUFCFG_X1_BASE; // X1_BASE
    typedef bit_field_t<8, 0xff> X1BUFCFG_X1_BUF_SIZE; // X1_BUF_SIZE
    typedef bit_field_t<24, 0x3> X1BUFCFG_FULL_WM; // FULL_WM

    static constexpr uint32_t X2BUFCFG_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> X2BUFCFG_X2_BASE; // X1_BASE
    typedef bit_field_t<8, 0xff> X2BUFCFG_X2_BUF_SIZE; // X1_BUF_SIZE

    static constexpr uint32_t YBUFCFG_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> YBUFCFG_Y_BASE; // X1_BASE
    typedef bit_field_t<8, 0xff> YBUFCFG_Y_BUF_SIZE; // X1_BUF_SIZE
    typedef bit_field_t<24, 0x3> YBUFCFG_EMPTY_WM; // EMPTY_WM

    static constexpr uint32_t PARAM_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PARAM_START = 0x80000000; // START
    typedef bit_field_t<24, 0x7f> PARAM_FUNC; // FUNC
    typedef bit_field_t<16, 0xff> PARAM_R; // R
    typedef bit_field_t<8, 0xff> PARAM_Q; // Q
    typedef bit_field_t<0, 0xff> PARAM_P; // P

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_RESET = 0x10000; // RESET
    static constexpr uint32_t CR_CLIPEN = 0x8000; // CLIPEN
    static constexpr uint32_t CR_DMAWEN = 0x200; // DMAWEN
    static constexpr uint32_t CR_DMAREN = 0x100; // DMAREN
    static constexpr uint32_t CR_SATIEN = 0x10; // SATIEN
    static constexpr uint32_t CR_UNFLIEN = 0x8; // UNFLIEN
    static constexpr uint32_t CR_OVFLIEN = 0x4; // OVFLIEN
    static constexpr uint32_t CR_WIEN = 0x2; // WIEN
    static constexpr uint32_t CR_RIEN = 0x1; // RIEN

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_YEMPTY = 0x1; // YEMPTY
    static constexpr uint32_t SR_X1FULL = 0x2; // X1FULL
    static constexpr uint32_t SR_OVFL = 0x100; // OVFL
    static constexpr uint32_t SR_UNFL = 0x200; // UNFL
    static constexpr uint32_t SR_SAT = 0x400; // SAT

    static constexpr uint32_t WDATA_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> WDATA_WDATA; // WDATA

    static constexpr uint32_t RDATA_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> RDATA_RDATA; // RDATA
};

template<>
struct peripheral_t<STM32G431xx, FMAC>
{
    static constexpr periph_t P = FMAC;
    using T = stm32g431xx_fmac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G441xx, FMAC>
{
    static constexpr periph_t P = FMAC;
    using T = stm32g431xx_fmac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G471xx, FMAC>
{
    static constexpr periph_t P = FMAC;
    using T = stm32g431xx_fmac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G473xx, FMAC>
{
    static constexpr periph_t P = FMAC;
    using T = stm32g431xx_fmac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G474xx, FMAC>
{
    static constexpr periph_t P = FMAC;
    using T = stm32g431xx_fmac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G483xx, FMAC>
{
    static constexpr periph_t P = FMAC;
    using T = stm32g431xx_fmac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, FMAC>
{
    static constexpr periph_t P = FMAC;
    using T = stm32g431xx_fmac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32GBK1CBT6, FMAC>
{
    static constexpr periph_t P = FMAC;
    using T = stm32g431xx_fmac_t;
    static T& V;
};

using fmac_t = peripheral_t<svd, FMAC>;

template<int INST> struct fmac_traits {};

template<> struct fmac_traits<0>
{
    using fmac = fmac_t;
    static constexpr clock_source_t CLOCK = AHB_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.AHB1ENR |= RCC::T::AHB1ENR_FMACEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHB1ENR &= ~RCC::T::AHB1ENR_FMACEN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.AHB1SMENR |= RCC::T::AHB1SMENR_FMACSMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_FMACSMEN;
    }
};
