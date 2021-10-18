#pragma once

////
//
//      STM32U5 DLYB peripherals
//
///

// DLYBOS1: The delay block (DLYB) is used to generate an output clock that is dephased from the input clock

struct stm32u5xx_dlybos1_t
{
    volatile uint32_t DLYB_CR; // control register
    volatile uint32_t DLYB_CFGR; // configuration register

    static constexpr uint32_t DLYB_CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DLYB_CR_DEN = 0x1; // Operational amplifier Enable
    static constexpr uint32_t DLYB_CR_SEN = 0x2; // OPALPM

    static constexpr uint32_t DLYB_CFGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> DLYB_CFGR_SEL; // SEL
    typedef bit_field_t<8, 0x7f> DLYB_CFGR_UNIT; // UNIT
    typedef bit_field_t<16, 0xfff> DLYB_CFGR_LNG; // LNG
    static constexpr uint32_t DLYB_CFGR_LNGF = 0x80000000; // LNGF
};

template<>
struct peripheral_t<STM32U5xx, DLYBOS1>
{
    static constexpr periph_t P = DLYBOS1;
    using T = stm32u5xx_dlybos1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, DLYBOS2>
{
    static constexpr periph_t P = DLYBOS2;
    using T = stm32u5xx_dlybos1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, DLYBSD1>
{
    static constexpr periph_t P = DLYBSD1;
    using T = stm32u5xx_dlybos1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, DLYBSD2>
{
    static constexpr periph_t P = DLYBSD2;
    using T = stm32u5xx_dlybos1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, SEC_DLYBOS1>
{
    static constexpr periph_t P = SEC_DLYBOS1;
    using T = stm32u5xx_dlybos1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, SEC_DLYBOS2>
{
    static constexpr periph_t P = SEC_DLYBOS2;
    using T = stm32u5xx_dlybos1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, SEC_DLYBSD1>
{
    static constexpr periph_t P = SEC_DLYBSD1;
    using T = stm32u5xx_dlybos1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, SEC_DLYBSD2>
{
    static constexpr periph_t P = SEC_DLYBSD2;
    using T = stm32u5xx_dlybos1_t;
    static T& V;
};

using dlybos1_t = peripheral_t<svd, DLYBOS1>;
using dlybos2_t = peripheral_t<svd, DLYBOS2>;
using dlybsd1_t = peripheral_t<svd, DLYBSD1>;
using dlybsd2_t = peripheral_t<svd, DLYBSD2>;
using sec_dlybos1_t = peripheral_t<svd, SEC_DLYBOS1>;
using sec_dlybos2_t = peripheral_t<svd, SEC_DLYBOS2>;
using sec_dlybsd1_t = peripheral_t<svd, SEC_DLYBSD1>;
using sec_dlybsd2_t = peripheral_t<svd, SEC_DLYBSD2>;
