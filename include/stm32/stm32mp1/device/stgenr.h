#pragma once

////
//
//      STM32MP1 STGENR peripherals
//
////

////
//
//      STGENR
//
////

struct stm32mp15xxx_stgenr_t
{
    volatile uint32_t STGENR_CNTCVL; // [read-only] the control interface must clear the STGEN_CNTCR.EN bit before writing to this register.
    volatile uint32_t STGENR_CNTCVU; // [read-only] the control interface must clear the STGEN_CNTCR.EN bit before writing to this register.
    reserved_t<0x3f2> _0xfd0;
    volatile uint32_t STGENR_PIDR4;  // [read-only] STGENR peripheral ID4 register
    volatile uint32_t STGENR_PIDR5;  // [read-only] STGENR peripheral ID5 register
    volatile uint32_t STGENR_PIDR6;  // [read-only] STGENR peripheral ID6 register
    volatile uint32_t STGENR_PIDR7;  // [read-only] STGENR peripheral ID7 register
    volatile uint32_t STGENR_PIDR0;  // [read-only] STGENR peripheral ID0 register
    volatile uint32_t STGENR_PIDR1;  // [read-only] STGENR peripheral ID1 register
    volatile uint32_t STGENR_PIDR2;  // [read-only] STGENR peripheral ID2 register
    volatile uint32_t STGENR_PIDR3;  // [read-only] STGENR peripheral ID3 register
    volatile uint32_t STGENR_CIDR0;  // [read-only] STGENR component ID0 register
    volatile uint32_t STGENR_CIDR1;  // [read-only] STGENR component ID1 register
    volatile uint32_t STGENR_CIDR2;  // [read-only] STGENR component ID2 register
    volatile uint32_t STGENR_CIDR3;  // [read-only] STGENR component ID3 register

    static constexpr uint32_t STGENR_CNTCVL_RESET_VALUE = 0x0;

    static constexpr uint32_t STGENR_CNTCVU_RESET_VALUE = 0x0;

    static constexpr uint32_t STGENR_PIDR4_RESET_VALUE = 0x4;
    template<uint32_t X>
    static constexpr uint32_t STGENR_PIDR4_DES_2 =   // DES_2
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t STGENR_PIDR4_SIZE =    // SIZE
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t STGENR_PIDR5_RESET_VALUE = 0x0;

    static constexpr uint32_t STGENR_PIDR6_RESET_VALUE = 0x0;

    static constexpr uint32_t STGENR_PIDR7_RESET_VALUE = 0x0;

    static constexpr uint32_t STGENR_PIDR0_RESET_VALUE = 0x1;
    template<uint32_t X>
    static constexpr uint32_t STGENR_PIDR0_PART_0 =   // PART_0
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t STGENR_PIDR1_RESET_VALUE = 0xb1;
    template<uint32_t X>
    static constexpr uint32_t STGENR_PIDR1_PART_1 =   // PART_1
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t STGENR_PIDR1_DES_0 =    // DES_0
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t STGENR_PIDR2_RESET_VALUE = 0x1b;
    template<uint32_t X>
    static constexpr uint32_t STGENR_PIDR2_DES_1 =      // DES_1
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t STGENR_PIDR2_JEDEC = 0x8; // JEDEC
    template<uint32_t X>
    static constexpr uint32_t STGENR_PIDR2_REVISION =   // REVISION
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t STGENR_PIDR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t STGENR_PIDR3_CMOD =     // CMOD
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t STGENR_PIDR3_REVAND =   // REVAND
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t STGENR_CIDR0_RESET_VALUE = 0xd;
    template<uint32_t X>
    static constexpr uint32_t STGENR_CIDR0_PRMBL_0 =   // PRMBL_0
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t STGENR_CIDR1_RESET_VALUE = 0xf0;
    template<uint32_t X>
    static constexpr uint32_t STGENR_CIDR1_PRMBL_1 =   // PRMBL_1
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t STGENR_CIDR1_CLASS =     // CLASS
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t STGENR_CIDR2_RESET_VALUE = 0x50;
    template<uint32_t X>
    static constexpr uint32_t STGENR_CIDR2_PRMBL_2 =   // PRMBL_2
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t STGENR_CIDR3_RESET_VALUE = 0xb1;
    template<uint32_t X>
    static constexpr uint32_t STGENR_CIDR3_PRMBL_3 =   // PRMBL_3
        bit_field_t<0, 0xff>::value<X>();
};


template<>
struct peripheral_t<STM32MP15xxx, STGENR>
{
    typedef stm32mp15xxx_stgenr_t T;
    static T& V;
};

using stgenr_t = peripheral_t<mcu_svd, STGENR>;

