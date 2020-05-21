#pragma once

////
//
//      STM32MP1 STGENC peripherals
//
////

////
//
//      STGENC
//
////

struct stm32mp15xxx_stgenc_t
{
    volatile uint32_t STGENC_CNTCR;   // [read-write] STGENC control register
    volatile uint32_t STGENC_CNTSR;   // [read-only] STGENC status register
    volatile uint32_t STGENC_CNTCVL;  // [read-write] the control interface must clear the STGENC_CNTCR.EN bit before writing to this register.
    volatile uint32_t STGENC_CNTCVU;  // [read-write] the control interface must clear the STGENC_CNTCR.EN bit before writing to this register.
    reserved_t<0x4> _0x20;
    volatile uint32_t STGENC_CNTFID0; // [read-write] the control interface must clear the STGEN_CNTCR.EN bit before writing to this register.
    reserved_t<0x3eb> _0xfd0;
    volatile uint32_t STGENC_PIDR4;   // [read-only] STGENC peripheral ID4 register
    volatile uint32_t STGENC_PIDR5;   // [read-only] STGENC peripheral ID5 register
    volatile uint32_t STGENC_PIDR6;   // [read-only] STGENC peripheral ID6 register
    volatile uint32_t STGENC_PIDR7;   // [read-only] STGENC peripheral ID7 register
    volatile uint32_t STGENC_PIDR0;   // [read-only] STGENC peripheral ID0 register
    volatile uint32_t STGENC_PIDR1;   // [read-only] STGENC peripheral ID1 register
    volatile uint32_t STGENC_PIDR2;   // [read-only] STGENC peripheral ID2 register
    volatile uint32_t STGENC_PIDR3;   // [read-only] STGENC peripheral ID3 register
    volatile uint32_t STGENC_CIDR0;   // [read-only] STGENC component ID0 register
    volatile uint32_t STGENC_CIDR1;   // [read-only] STGENC component ID1 register
    volatile uint32_t STGENC_CIDR2;   // [read-only] STGENC component ID2 register
    volatile uint32_t STGENC_CIDR3;   // [read-only] STGENC component ID3 register

    static constexpr uint32_t STGENC_CNTCR_RESET_VALUE = 0x0;
    static constexpr uint32_t STGENC_CNTCR_EN = 0x1;     // EN
    static constexpr uint32_t STGENC_CNTCR_HLTDBG = 0x2; // HLTDBG

    static constexpr uint32_t STGENC_CNTSR_RESET_VALUE = 0x0;
    static constexpr uint32_t STGENC_CNTSR_EN = 0x1;     // EN
    static constexpr uint32_t STGENC_CNTSR_HLTDBG = 0x2; // HLTDBG

    static constexpr uint32_t STGENC_CNTCVL_RESET_VALUE = 0x0;

    static constexpr uint32_t STGENC_CNTCVU_RESET_VALUE = 0x0;

    static constexpr uint32_t STGENC_CNTFID0_RESET_VALUE = 0x0;

    static constexpr uint32_t STGENC_PIDR4_RESET_VALUE = 0x4;
    template<uint32_t X>
    static constexpr uint32_t STGENC_PIDR4_DES_2 =   // DES_2
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t STGENC_PIDR4_SIZE =    // SIZE
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t STGENC_PIDR5_RESET_VALUE = 0x0;

    static constexpr uint32_t STGENC_PIDR6_RESET_VALUE = 0x0;

    static constexpr uint32_t STGENC_PIDR7_RESET_VALUE = 0x0;

    static constexpr uint32_t STGENC_PIDR0_RESET_VALUE = 0x1;
    template<uint32_t X>
    static constexpr uint32_t STGENC_PIDR0_PART_0 =   // PART_0
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t STGENC_PIDR1_RESET_VALUE = 0xb1;
    template<uint32_t X>
    static constexpr uint32_t STGENC_PIDR1_PART_1 =   // PART_1
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t STGENC_PIDR1_DES_0 =    // DES_0
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t STGENC_PIDR2_RESET_VALUE = 0x1b;
    template<uint32_t X>
    static constexpr uint32_t STGENC_PIDR2_DES_1 =      // DES_1
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t STGENC_PIDR2_JEDEC = 0x8; // JEDEC
    template<uint32_t X>
    static constexpr uint32_t STGENC_PIDR2_REVISION =   // REVISION
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t STGENC_PIDR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t STGENC_PIDR3_CMOD =     // CMOD
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t STGENC_PIDR3_REVAND =   // REVAND
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t STGENC_CIDR0_RESET_VALUE = 0xd;
    template<uint32_t X>
    static constexpr uint32_t STGENC_CIDR0_PRMBL_0 =   // PRMBL_0
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t STGENC_CIDR1_RESET_VALUE = 0xf0;
    template<uint32_t X>
    static constexpr uint32_t STGENC_CIDR1_PRMBL_1 =   // PRMBL_1
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t STGENC_CIDR1_CLASS =     // CLASS
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t STGENC_CIDR2_RESET_VALUE = 0x50;
    template<uint32_t X>
    static constexpr uint32_t STGENC_CIDR2_PRMBL_2 =   // PRMBL_2
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t STGENC_CIDR3_RESET_VALUE = 0xb1;
    template<uint32_t X>
    static constexpr uint32_t STGENC_CIDR3_PRMBL_3 =   // PRMBL_3
        bit_field_t<0, 0xff>::value<X>();
};


template<>
struct peripheral_t<STM32MP15xxx, STGENC>
{
    typedef stm32mp15xxx_stgenc_t T;
    static T& V;
};

using stgenc_t = peripheral_t<mcu_svd, STGENC>;

