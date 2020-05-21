#pragma once

////
//
//      STM32MP1 MDIOS peripherals
//
////

////
//
//      MDIOS
//
////

struct stm32mp15xxx_mdios_t
{
    volatile uint32_t MDIOS_CR;      // [read-write] MDIOS configuration register
    volatile uint32_t MDIOS_WRFR;    // [read-only] MDIOS write flag register
    volatile uint32_t MDIOS_CWRFR;   // [read-write] MDIOS clear write flag register
    volatile uint32_t MDIOS_RDFR;    // [read-only] MDIOS read flag register
    volatile uint32_t MDIOS_CRDFR;   // [read-write] MDIOS clear read flag register
    volatile uint32_t MDIOS_SR;      // [read-only] MDIOS status register
    volatile uint32_t MDIOS_CLRFR;   // [read-write] MDIOS clear flag register
    reserved_t<0x39> _0x100;
    volatile uint32_t MDIOS_DINR0;   // [read-only] MDIOS input data register
    volatile uint32_t MDIOS_DINR1;   // [read-only] MDIOS input data register
    volatile uint32_t MDIOS_DINR2;   // [read-only] MDIOS input data register
    volatile uint32_t MDIOS_DINR3;   // [read-only] MDIOS input data register
    volatile uint32_t MDIOS_DINR4;   // [read-only] MDIOS input data register
    volatile uint32_t MDIOS_DINR5;   // [read-only] MDIOS input data register
    volatile uint32_t MDIOS_DINR6;   // [read-only] MDIOS input data register
    volatile uint32_t MDIOS_DINR7;   // [read-only] MDIOS input data register
    volatile uint32_t MDIOS_DINR8;   // [read-only] MDIOS input data register
    volatile uint32_t MDIOS_DINR9;   // [read-only] MDIOS input data register
    volatile uint32_t MDIOS_DINR10;  // [read-only] MDIOS input data register
    volatile uint32_t MDIOS_DINR11;  // [read-only] MDIOS input data register
    volatile uint32_t MDIOS_DINR12;  // [read-only] MDIOS input data register
    volatile uint32_t MDIOS_DINR13;  // [read-only] MDIOS input data register
    volatile uint32_t MDIOS_DINR14;  // [read-only] MDIOS input data register
    volatile uint32_t MDIOS_DINR15;  // [read-only] MDIOS input data register
    volatile uint32_t MDIOS_DINR16;  // [read-only] MDIOS input data register
    volatile uint32_t MDIOS_DINR17;  // [read-only] MDIOS input data register
    volatile uint32_t MDIOS_DINR18;  // [read-only] MDIOS input data register
    volatile uint32_t MDIOS_DINR19;  // [read-only] MDIOS input data register
    volatile uint32_t MDIOS_DINR20;  // [read-only] MDIOS input data register
    volatile uint32_t MDIOS_DINR21;  // [read-only] MDIOS input data register
    volatile uint32_t MDIOS_DINR22;  // [read-only] MDIOS input data register
    volatile uint32_t MDIOS_DINR23;  // [read-only] MDIOS input data register
    volatile uint32_t MDIOS_DINR24;  // [read-only] MDIOS input data register
    volatile uint32_t MDIOS_DINR25;  // [read-only] MDIOS input data register
    volatile uint32_t MDIOS_DINR26;  // [read-only] MDIOS input data register
    volatile uint32_t MDIOS_DINR27;  // [read-only] MDIOS input data register
    volatile uint32_t MDIOS_DINR28;  // [read-only] MDIOS input data register
    volatile uint32_t MDIOS_DINR29;  // [read-only] MDIOS input data register
    volatile uint32_t MDIOS_DINR30;  // [read-only] MDIOS input data register
    volatile uint32_t MDIOS_DINR31;  // [read-only] MDIOS input data register
    volatile uint32_t MDIOS_DOUTR0;  // [read-only] MDIOS input data register
    volatile uint32_t MDIOS_DOUTR1;  // [read-only] MDIOS input data register
    volatile uint32_t MDIOS_DOUTR2;  // [read-only] MDIOS output data register
    volatile uint32_t MDIOS_DOUTR3;  // [read-only] MDIOS output data register
    volatile uint32_t MDIOS_DOUTR4;  // [read-only] MDIOS output data register
    volatile uint32_t MDIOS_DOUTR5;  // [read-only] MDIOS output data register
    volatile uint32_t MDIOS_DOUTR6;  // [read-only] MDIOS output data register
    volatile uint32_t MDIOS_DOUTR7;  // [read-only] MDIOS output data register
    volatile uint32_t MDIOS_DOUTR8;  // [read-only] MDIOS output data register
    volatile uint32_t MDIOS_DOUTR9;  // [read-only] MDIOS output data register
    volatile uint32_t MDIOS_DOUTR10; // [read-only] MDIOS output data register
    volatile uint32_t MDIOS_DOUTR11; // [read-only] MDIOS output data register
    volatile uint32_t MDIOS_DOUTR12; // [read-only] MDIOS output data register
    volatile uint32_t MDIOS_DOUTR13; // [read-only] MDIOS output data register
    volatile uint32_t MDIOS_DOUTR14; // [read-only] MDIOS output data register
    volatile uint32_t MDIOS_DOUTR15; // [read-only] MDIOS output data register
    volatile uint32_t MDIOS_DOUTR16; // [read-only] MDIOS output data register
    volatile uint32_t MDIOS_DOUTR17; // [read-only] MDIOS output data register
    volatile uint32_t MDIOS_DOUTR18; // [read-only] MDIOS output data register
    volatile uint32_t MDIOS_DOUTR19; // [read-only] MDIOS output data register
    volatile uint32_t MDIOS_DOUTR20; // [read-only] MDIOS output data register
    volatile uint32_t MDIOS_DOUTR21; // [read-only] MDIOS output data register
    volatile uint32_t MDIOS_DOUTR22; // [read-only] MDIOS output data register
    volatile uint32_t MDIOS_DOUTR23; // [read-only] MDIOS output data register
    volatile uint32_t MDIOS_DOUTR24; // [read-only] MDIOS output data register
    volatile uint32_t MDIOS_DOUTR25; // [read-only] MDIOS output data register
    volatile uint32_t MDIOS_DOUTR26; // [read-only] MDIOS output data register
    volatile uint32_t MDIOS_DOUTR27; // [read-only] MDIOS output data register
    volatile uint32_t MDIOS_DOUTR28; // [read-only] MDIOS output data register
    volatile uint32_t MDIOS_DOUTR29; // [read-only] MDIOS output data register
    volatile uint32_t MDIOS_DOUTR30; // [read-only] MDIOS output data register
    volatile uint32_t MDIOS_DOUTR31; // [read-only] MDIOS output data register
    reserved_t<0x7c> _0x3f0;
    volatile uint32_t MDIOS_HWCFGR;  // [read-only] MDIOS HW configuration register
    volatile uint32_t MDIOS_VERR;    // [read-only] MDIOS version register
    volatile uint32_t MDIOS_IPIDR;   // [read-only] MDIOS identification register
    volatile uint32_t MDIOS_SIDR;    // [read-only] MDIOS size identification register

    static constexpr uint32_t MDIOS_CR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDIOS_CR_EN = 0x1;        // EN
    static constexpr uint32_t MDIOS_CR_WRIE = 0x2;      // WRIE
    static constexpr uint32_t MDIOS_CR_RDIE = 0x4;      // RDIE
    static constexpr uint32_t MDIOS_CR_EIE = 0x8;       // EIE
    static constexpr uint32_t MDIOS_CR_DPC = 0x80;      // DPC
    template<uint32_t X>
    static constexpr uint32_t MDIOS_CR_PORT_ADDRESS =   // PORT_ADDRESS
        bit_field_t<8, 0x1f>::value<X>();

    static constexpr uint32_t MDIOS_WRFR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDIOS_CWRFR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDIOS_RDFR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDIOS_CRDFR_RESET_VALUE = 0x0;

    static constexpr uint32_t MDIOS_SR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDIOS_SR_PERF = 0x1; // PERF
    static constexpr uint32_t MDIOS_SR_SERF = 0x2; // SERF
    static constexpr uint32_t MDIOS_SR_TERF = 0x4; // TERF

    static constexpr uint32_t MDIOS_CLRFR_RESET_VALUE = 0x0;
    static constexpr uint32_t MDIOS_CLRFR_CPERF = 0x1; // CPERF
    static constexpr uint32_t MDIOS_CLRFR_CSERF = 0x2; // CSERF
    static constexpr uint32_t MDIOS_CLRFR_CTERF = 0x4; // CTERF

    static constexpr uint32_t MDIOS_DINR0_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR0_DIN =   // DIN
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR1_DIN =   // DIN
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR2_DIN =   // DIN
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR3_DIN =   // DIN
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR4_DIN =   // DIN
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR5_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR5_DIN =   // DIN
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR6_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR6_DIN =   // DIN
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR7_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR7_DIN =   // DIN
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR8_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR8_DIN =   // DIN
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR9_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR9_DIN =   // DIN
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR10_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR10_DIN =   // DIN
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR11_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR11_DIN =   // DIN
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR12_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR12_DIN =   // DIN
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR13_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR13_DIN =   // DIN
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR14_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR14_DIN =   // DIN
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR15_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR15_DIN =   // DIN
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR16_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR16_DIN =   // DIN
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR17_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR17_DIN =   // DIN
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR18_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR18_DIN =   // DIN
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR19_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR19_DIN =   // DIN
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR20_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR20_DIN =   // DIN
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR21_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR21_DIN =   // DIN
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR22_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR22_DIN =   // DIN
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR23_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR23_DIN =   // DIN
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR24_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR24_DIN =   // DIN
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR25_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR25_DIN =   // DIN
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR26_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR26_DIN =   // DIN
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR27_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR27_DIN =   // DIN
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR28_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR28_DIN =   // DIN
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR29_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR29_DIN =   // DIN
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR30_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR30_DIN =   // DIN
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DINR31_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DINR31_DIN =   // DIN
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR0_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR0_DOUT =   // DOUT
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR1_DOUT =   // DOUT
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR2_DOUT =   // DOUT
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR3_DOUT =   // DOUT
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR4_DOUT =   // DOUT
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR5_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR5_DOUT =   // DOUT
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR6_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR6_DOUT =   // DOUT
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR7_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR7_DOUT =   // DOUT
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR8_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR8_DOUT =   // DOUT
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR9_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR9_DOUT =   // DOUT
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR10_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR10_DOUT =   // DOUT
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR11_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR11_DOUT =   // DOUT
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR12_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR12_DOUT =   // DOUT
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR13_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR13_DOUT =   // DOUT
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR14_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR14_DOUT =   // DOUT
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR15_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR15_DOUT =   // DOUT
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR16_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR16_DOUT =   // DOUT
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR17_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR17_DOUT =   // DOUT
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR18_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR18_DOUT =   // DOUT
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR19_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR19_DOUT =   // DOUT
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR20_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR20_DOUT =   // DOUT
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR21_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR21_DOUT =   // DOUT
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR22_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR22_DOUT =   // DOUT
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR23_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR23_DOUT =   // DOUT
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR24_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR24_DOUT =   // DOUT
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR25_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR25_DOUT =   // DOUT
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR26_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR26_DOUT =   // DOUT
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR27_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR27_DOUT =   // DOUT
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR28_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR28_DOUT =   // DOUT
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR29_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR29_DOUT =   // DOUT
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR30_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR30_DOUT =   // DOUT
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_DOUTR31_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_DOUTR31_DOUT =   // DOUT
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MDIOS_HWCFGR_RESET_VALUE = 0x20;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_HWCFGR_NBREG =   // NBREG
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t MDIOS_VERR_RESET_VALUE = 0x11;
    template<uint32_t X>
    static constexpr uint32_t MDIOS_VERR_MINREV =   // MINREV
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MDIOS_VERR_MAJREV =   // MAJREV
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t MDIOS_IPIDR_RESET_VALUE = 0x180001;

    static constexpr uint32_t MDIOS_SIDR_RESET_VALUE = 0xa3c5dd01;
};


template<>
struct peripheral_t<STM32MP15xxx, MDIOS>
{
    typedef stm32mp15xxx_mdios_t T;
    static T& V;
};

using mdios_t = peripheral_t<mcu_svd, MDIOS>;

