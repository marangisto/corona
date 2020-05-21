#pragma once

////
//
//      STM32MP1 HDP peripherals
//
////

////
//
//      HDP
//
////

struct stm32mp15xxx_hdp_t
{
    volatile uint32_t HDP_CTRL;   // [read-write] HDP Control
    volatile uint32_t HDP_MUX;    // [read-write] HDP multiplexing
    reserved_t<0x2> _0x10;
    volatile uint32_t HDP_VAL;    // [read-only] HDP value
    volatile uint32_t HDP_GPOSET; // [write-only] HDP GPO set
    volatile uint32_t HDP_GPOCLR; // [write-only] HDP GPO clear
    volatile uint32_t HDP_GPOVAL; // [read-write] HDP GPO value
    reserved_t<0xf5> _0x3f4;
    volatile uint32_t HDP_VERR;   // [read-only] HDP version register
    volatile uint32_t HDP_IPIDR;  // [read-only] HDP IP identification register
    volatile uint32_t HDP_SIDR;   // [read-only] HDP size identification register

    static constexpr uint32_t HDP_CTRL_RESET_VALUE = 0x0;
    static constexpr uint32_t HDP_CTRL_EN = 0x1; // EN

    static constexpr uint32_t HDP_MUX_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HDP_MUX_MUX0 =   // MUX0
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HDP_MUX_MUX1 =   // MUX1
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HDP_MUX_MUX2 =   // MUX2
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HDP_MUX_MUX3 =   // MUX3
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HDP_MUX_MUX4 =   // MUX4
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HDP_MUX_MUX5 =   // MUX5
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HDP_MUX_MUX6 =   // MUX6
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HDP_MUX_MUX7 =   // MUX7
        bit_field_t<28, 0xf>::value<X>();

    static constexpr uint32_t HDP_VAL_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HDP_VAL_HDPVAL =   // HDPVAL
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t HDP_GPOSET_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HDP_GPOSET_HDPGPOSET =   // HDPGPOSET
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t HDP_GPOCLR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HDP_GPOCLR_HDPGPOCLR =   // HDPGPOCLR
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t HDP_GPOVAL_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HDP_GPOVAL_HDPGPOVAL =   // HDPGPOVAL
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t HDP_VERR_RESET_VALUE = 0x10;
    template<uint32_t X>
    static constexpr uint32_t HDP_VERR_MINREV =   // MINREV
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HDP_VERR_MAJREV =   // MAJREV
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t HDP_IPIDR_RESET_VALUE = 0x30002;

    static constexpr uint32_t HDP_SIDR_RESET_VALUE = 0xa3c5dd01;
};


template<>
struct peripheral_t<STM32MP15xxx, HDP>
{
    typedef stm32mp15xxx_hdp_t T;
    static T& V;
};

using hdp_t = peripheral_t<mcu_svd, HDP>;

