#pragma once

////
//
//      STM32MP1 DLYBSD1 peripherals
//
////

////
//
//      DLYBSD1
//
////

struct stm32mp15xxx_dlybsd1_t
{
    volatile uint32_t DLYB_CR;    // [read-write] DLYB control register
    volatile uint32_t DLYB_CFGR;  // DLYB configuration register
    reserved_t<0xfb> _0x3f4;
    volatile uint32_t DLYB_VERR;  // [read-only] DLYB IP version register
    volatile uint32_t DLYB_IPIDR; // [read-only] DLYB IP identification register
    volatile uint32_t DLYB_SIDR;  // [read-only] DLYB size ID register

    static constexpr uint32_t DLYB_CR_RESET_VALUE = 0x0;
    static constexpr uint32_t DLYB_CR_DEN = 0x1; // DEN
    static constexpr uint32_t DLYB_CR_SEN = 0x2; // SEN

    static constexpr uint32_t DLYB_CFGR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DLYB_CFGR_SEL =              // SEL
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DLYB_CFGR_UNIT =             // UNIT
        bit_field_t<8, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DLYB_CFGR_LNG =              // LNG
        bit_field_t<16, 0xfff>::value<X>();
    static constexpr uint32_t DLYB_CFGR_LNGF = 0x80000000; // LNGF

    static constexpr uint32_t DLYB_VERR_RESET_VALUE = 0x11;
    template<uint32_t X>
    static constexpr uint32_t DLYB_VERR_MINREV =   // MINREV
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DLYB_VERR_MAJREV =   // MAJREV
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t DLYB_IPIDR_RESET_VALUE = 0x140051;

    static constexpr uint32_t DLYB_SIDR_RESET_VALUE = 0xa3c5dd01;
};


template<>
struct peripheral_t<STM32MP15xxx, DLYBSD1>
{
    typedef stm32mp15xxx_dlybsd1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32MP15xxx, DLYBSD2>
{
    typedef stm32mp15xxx_dlybsd1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32MP15xxx, DLYBSD3>
{
    typedef stm32mp15xxx_dlybsd1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32MP15xxx, DLYBQS>
{
    typedef stm32mp15xxx_dlybsd1_t T;
    static T& V;
};

using dlybqs_t = peripheral_t<mcu_svd, DLYBQS>;
using dlybsd1_t = peripheral_t<mcu_svd, DLYBSD1>;
using dlybsd2_t = peripheral_t<mcu_svd, DLYBSD2>;
using dlybsd3_t = peripheral_t<mcu_svd, DLYBSD3>;

