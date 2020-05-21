#pragma once

////
//
//      STM32G4 FMAC peripherals
//
////

////
//
//      Filter Math Accelerator
//
////

struct stm32g431xx_fmac_t
{
    volatile uint32_t X1BUFCFG; // [read-write] FMAC X1 Buffer Configuration register
    volatile uint32_t X2BUFCFG; // [read-write] FMAC X2 Buffer Configuration register
    volatile uint32_t YBUFCFG;  // [read-write] FMAC Y Buffer Configuration register
    volatile uint32_t PARAM;    // [read-write] FMAC Parameter register
    volatile uint32_t CR;       // [read-write] FMAC Control register
    volatile uint32_t SR;       // [read-only] FMAC Status register
    volatile uint32_t WDATA;    // [write-only] FMAC Write Data register
    volatile uint32_t RDATA;    // [read-only] FMAC Read Data register

    static constexpr uint32_t X1BUFCFG_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t X1BUFCFG_X1_BASE =       // X1_BASE
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t X1BUFCFG_X1_BUF_SIZE =   // X1_BUF_SIZE
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t X1BUFCFG_FULL_WM =       // FULL_WM
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t X2BUFCFG_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t X2BUFCFG_X2_BASE =       // X1_BASE
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t X2BUFCFG_X2_BUF_SIZE =   // X1_BUF_SIZE
        bit_field_t<8, 0xff>::value<X>();

    static constexpr uint32_t YBUFCFG_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t YBUFCFG_Y_BASE =       // X1_BASE
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t YBUFCFG_Y_BUF_SIZE =   // X1_BUF_SIZE
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t YBUFCFG_EMPTY_WM =     // EMPTY_WM
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t PARAM_RESET_VALUE = 0x0;
    static constexpr uint32_t PARAM_START = 0x80000000; // START
    template<uint32_t X>
    static constexpr uint32_t PARAM_FUNC =              // FUNC
        bit_field_t<24, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PARAM_R =                 // R
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PARAM_Q =                 // Q
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PARAM_P =                 // P
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t CR_RESET_VALUE = 0x0;
    static constexpr uint32_t CR_RESET = 0x10000; // RESET
    static constexpr uint32_t CR_CLIPEN = 0x8000; // CLIPEN
    static constexpr uint32_t CR_DMAWEN = 0x200;  // DMAWEN
    static constexpr uint32_t CR_DMAREN = 0x100;  // DMAREN
    static constexpr uint32_t CR_SATIEN = 0x10;   // SATIEN
    static constexpr uint32_t CR_UNFLIEN = 0x8;   // UNFLIEN
    static constexpr uint32_t CR_OVFLIEN = 0x4;   // OVFLIEN
    static constexpr uint32_t CR_WIEN = 0x2;      // WIEN
    static constexpr uint32_t CR_RIEN = 0x1;      // RIEN

    static constexpr uint32_t SR_RESET_VALUE = 0x0;
    static constexpr uint32_t SR_YEMPTY = 0x1; // YEMPTY
    static constexpr uint32_t SR_X1FULL = 0x2; // X1FULL
    static constexpr uint32_t SR_OVFL = 0x100; // OVFL
    static constexpr uint32_t SR_UNFL = 0x200; // UNFL
    static constexpr uint32_t SR_SAT = 0x400;  // SAT

    static constexpr uint32_t WDATA_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t WDATA_WDATA =   // WDATA
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t RDATA_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RDATA_RDATA =   // RDATA
        bit_field_t<0, 0xffff>::value<X>();
};


template<>
struct peripheral_t<STM32G431xx, FMAC>
{
    typedef stm32g431xx_fmac_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G441xx, FMAC>
{
    typedef stm32g431xx_fmac_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G471xx, FMAC>
{
    typedef stm32g431xx_fmac_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G473xx, FMAC>
{
    typedef stm32g431xx_fmac_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G474xx, FMAC>
{
    typedef stm32g431xx_fmac_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G483xx, FMAC>
{
    typedef stm32g431xx_fmac_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, FMAC>
{
    typedef stm32g431xx_fmac_t T;
    static T& V;
};

using fmac_t = peripheral_t<mcu_svd, FMAC>;

