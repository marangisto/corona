#pragma once

////
//
//      STM32MP1 AXIMC_Mx peripherals
//
////

////
//
//      AXIMC_Mx
//
////

struct stm32mp15xxx_aximc_mx_t
{
    volatile uint32_t AXIMC_M0_FN_MOD2;    // [read-write] AXIMC master 0 packing functionality register
    reserved_t<0x36> _0xdc;
    volatile uint32_t AXIMC_M0_READ_QOS;   // [read-write] AXIMC master 0 read priority register
    volatile uint32_t AXIMC_M0_FN_MOD;     // [read-write] AXIMC master 0 issuing capability override functionality register
    volatile uint32_t AXIMC_M0_WRITE_QOS;  // [read-write] AXIMC master 0 write priority register
    reserved_t<0x3c6> _0x1000;
    volatile uint32_t AXIMC_M1_FN_MOD2;    // [read-write] AXIMC master 1 packing functionality register
    reserved_t<0x36> _0x10dc;
    volatile uint32_t AXIMC_M1_READ_QOS;   // [read-write] AXIMC master 1 read priority register
    volatile uint32_t AXIMC_M1_WRITE_QOS;  // [read-write] AXIMC master 1 write priority register
    volatile uint32_t AXIMC_M1_FN_MOD;     // [read-write] AXIMC master 1 issuing capability override functionality register
    reserved_t<0x3ba> _0x1fd0;
    volatile uint32_t AXIMC_PERIPH_ID_4;   // [read-only] AXIMC peripheral ID4 register
    volatile uint32_t AXIMC_PERIPH_ID_5;   // [read-only] AXIMC peripheral ID5 register
    volatile uint32_t AXIMC_PERIPH_ID_6;   // [read-only] AXIMC peripheral ID6 register
    volatile uint32_t AXIMC_PERIPH_ID_7;   // [read-only] AXIMC peripheral ID7 register
    volatile uint32_t AXIMC_PERIPH_ID_0;   // [read-only] AXIMC peripheral ID0 register
    volatile uint32_t AXIMC_PERIPH_ID_1;   // [read-only] AXIMC peripheral ID1 register
    volatile uint32_t AXIMC_PERIPH_ID_2;   // [read-only] AXIMC peripheral ID2 register
    volatile uint32_t AXIMC_PERIPH_ID_3;   // [read-only] AXIMC peripheral ID3 register
    volatile uint32_t AXIMC_COMP_ID_0;     // [read-only] AXIMC component ID0 register
    volatile uint32_t AXIMC_COMP_ID_1;     // [read-only] AXIMC component ID1 register
    volatile uint32_t AXIMC_COMP_ID_2;     // [read-only] AXIMC component ID2 register
    volatile uint32_t AXIMC_COMP_ID_3;     // [read-only] AXIMC component ID3 register
    volatile uint32_t AXIMC_M2_FN_MOD2;    // [read-write] AXIMC master 2 packing functionality register
    reserved_t<0x36> _0x20dc;
    volatile uint32_t AXIMC_M2_READ_QOS;   // [read-write] AXIMC master 2 read priority register
    volatile uint32_t AXIMC_M2_WRITE_QOS;  // [read-write] AXIMC master 2 write priority register
    volatile uint32_t AXIMC_M2_FN_MOD;     // [read-write] AXIMC master 2 issuing capability override functionality register
    reserved_t<0x3c6> _0x3000;
    volatile uint32_t AXIMC_M5_FN_MOD2;    // [read-write] AXIMC master 5 packing functionality register
    reserved_t<0x36> _0x30dc;
    volatile uint32_t AXIMC_M5_READ_QOS;   // [read-write] AXIMC master 5 read priority register
    volatile uint32_t AXIMC_M5_WRITE_QOS;  // [read-write] AXIMC master 5 write priority register
    volatile uint32_t AXIMC_M5_FN_MOD;     // [read-write] AXIMC master 5 issuing capability override functionality register
    reserved_t<0x3fd> _0x40dc;
    volatile uint32_t AXIMC_M3_READ_QOS;   // [read-write] AXIMC master 3 read priority register
    volatile uint32_t AXIMC_M3_WRITE_QOS;  // [read-write] AXIMC master 3 write priority register
    volatile uint32_t AXIMC_M3_FN_MOD;     // [read-write] AXIMC master 3 packing functionality register
    reserved_t<0x3fd> _0x50dc;
    volatile uint32_t AXIMC_M7_READ_QOS;   // [read-write] AXIMC master 7 read priority register
    volatile uint32_t AXIMC_M7_WRITE_QOS;  // [read-write] AXIMC master 7 write priority register
    volatile uint32_t AXIMC_M7_FN_MOD;     // [read-write] AXIMC master 7 issuing capability override functionality register
    reserved_t<0x3fd> _0x60dc;
    volatile uint32_t AXIMC_M8_READ_QOS;   // [read-write] AXIMC master 8 read priority register
    volatile uint32_t AXIMC_M8_WRITE_QOS;  // [read-write] AXIMC master 8 write priority register
    volatile uint32_t AXIMC_M8_FN_MOD;     // [read-write] AXIMC master 8 issuing capability override functionality register
    reserved_t<0x7c6> _0x8000;
    volatile uint32_t AXIMC_M4_FN_MOD2;    // [read-write] AXIMC master 4 packing functionality register
    reserved_t<0x36> _0x80dc;
    volatile uint32_t AXIMC_M4_READ_QOS;   // [read-write] AXIMC master 4 read priority register
    volatile uint32_t AXIMC_M4_WRITE_QOS;  // [read-write] AXIMC master 4 write priority register
    volatile uint32_t AXIMC_M4_FN_MOD;     // [read-write] AXIMC master 4 packing functionality register
    reserved_t<0x3fd> _0x90dc;
    volatile uint32_t AXIMC_M9_READ_QOS;   // [read-write] AXIMC master 9 read priority register
    volatile uint32_t AXIMC_M9_WRITE_QOS;  // [read-write] AXIMC master 9 write priority register
    volatile uint32_t AXIMC_M9_FN_MOD;     // [read-write] AXIMC master 9 issuing capability override functionality register
    reserved_t<0x3fd> _0xa0dc;
    volatile uint32_t AXIMC_M10_READ_QOS;  // [read-write] AXIMC master 10 read priority register
    volatile uint32_t AXIMC_M10_WRITE_QOS; // [read-write] AXIMC master 10 write priority register
    volatile uint32_t AXIMC_M10_FN_MOD;    // [read-write] AXIMC master 10 issuing capability override functionality register
    reserved_t<0x3c6> _0xb000;
    volatile uint32_t AXIMC_M6_FN_MOD2;    // [read-write] AXIMC master 6 packing functionality register
    reserved_t<0x36> _0xb0dc;
    volatile uint32_t AXIMC_M6_READ_QOS;   // [read-write] AXIMC master 6 read priority register
    volatile uint32_t AXIMC_M6_WRITE_QOS;  // [read-write] AXIMC master 6 write priority register
    volatile uint32_t AXIMC_M6_FN_MOD;     // [read-write] AXIMC master 6 issuing capability override functionality register
    reserved_t<0xdbd0> _0x42028;
    volatile uint32_t AXIMC_M0_FN_MOD_AHB; // [read-write] AXIMC master 0 AHB conversion override functionality register
    reserved_t<0x3ff> _0x43028;
    volatile uint32_t AXIMC_M1_FN_MOD_AHB; // [read-write] AXIMC master 1 AHB conversion override functionality register
    reserved_t<0x3ff> _0x44028;
    volatile uint32_t AXIMC_M2_FN_MOD_AHB; // [read-write] AXIMC master 2 AHB conversion override functionality register
    reserved_t<0x3ff> _0x45028;
    volatile uint32_t AXIMC_M5_FN_MOD_AHB; // [read-write] AXIMC master 5 AHB conversion override functionality register
    reserved_t<0x1400> _0x4a02c;
    volatile uint32_t AXIMC_FN_MOD_LB;     // [read-write] AXIMC long burst capability inhibition register
    reserved_t<0xbfe> _0x4d028;
    volatile uint32_t AXIMC_M6_FN_MOD_AHB; // [read-write] AXIMC master 6 AHB conversion override functionality register

    static constexpr uint32_t AXIMC_M0_FN_MOD2_RESET_VALUE = 0x0;
    static constexpr uint32_t AXIMC_M0_FN_MOD2_BYPASS_MERGE = 0x1; // BYPASS_MERGE

    static constexpr uint32_t AXIMC_M0_READ_QOS_RESET_VALUE = 0x6;
    template<uint32_t X>
    static constexpr uint32_t AXIMC_M0_READ_QOS_AR_QOS =   // AR_QOS
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t AXIMC_M0_WRITE_QOS_RESET_VALUE = 0x6;
    template<uint32_t X>
    static constexpr uint32_t AXIMC_M0_WRITE_QOS_AW_QOS =   // AW_QOS
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t AXIMC_M0_FN_MOD_RESET_VALUE = 0x0;
    static constexpr uint32_t AXIMC_M0_FN_MOD_READ_ISS_OVERRIDE = 0x1;  // READ_ISS_OVERRIDE
    static constexpr uint32_t AXIMC_M0_FN_MOD_WRITE_ISS_OVERRIDE = 0x2; // WRITE_ISS_OVERRIDE

    static constexpr uint32_t AXIMC_M1_FN_MOD2_RESET_VALUE = 0x0;
    static constexpr uint32_t AXIMC_M1_FN_MOD2_BYPASS_MERGE = 0x1; // BYPASS_MERGE

    static constexpr uint32_t AXIMC_M1_READ_QOS_RESET_VALUE = 0x6;
    template<uint32_t X>
    static constexpr uint32_t AXIMC_M1_READ_QOS_AR_QOS =   // AR_QOS
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t AXIMC_M1_WRITE_QOS_RESET_VALUE = 0x6;
    template<uint32_t X>
    static constexpr uint32_t AXIMC_M1_WRITE_QOS_AW_QOS =   // AW_QOS
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t AXIMC_M1_FN_MOD_RESET_VALUE = 0x0;
    static constexpr uint32_t AXIMC_M1_FN_MOD_READ_ISS_OVERRIDE = 0x1;  // READ_ISS_OVERRIDE
    static constexpr uint32_t AXIMC_M1_FN_MOD_WRITE_ISS_OVERRIDE = 0x2; // WRITE_ISS_OVERRIDE

    static constexpr uint32_t AXIMC_M2_FN_MOD2_RESET_VALUE = 0x0;
    static constexpr uint32_t AXIMC_M2_FN_MOD2_BYPASS_MERGE = 0x1; // BYPASS_MERGE

    static constexpr uint32_t AXIMC_M2_READ_QOS_RESET_VALUE = 0x6;
    template<uint32_t X>
    static constexpr uint32_t AXIMC_M2_READ_QOS_AR_QOS =   // AR_QOS
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t AXIMC_M2_WRITE_QOS_RESET_VALUE = 0x6;
    template<uint32_t X>
    static constexpr uint32_t AXIMC_M2_WRITE_QOS_AW_QOS =   // AW_QOS
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t AXIMC_M2_FN_MOD_RESET_VALUE = 0x0;
    static constexpr uint32_t AXIMC_M2_FN_MOD_READ_ISS_OVERRIDE = 0x1;  // READ_ISS_OVERRIDE
    static constexpr uint32_t AXIMC_M2_FN_MOD_WRITE_ISS_OVERRIDE = 0x2; // WRITE_ISS_OVERRIDE

    static constexpr uint32_t AXIMC_M5_FN_MOD2_RESET_VALUE = 0x0;
    static constexpr uint32_t AXIMC_M5_FN_MOD2_BYPASS_MERGE = 0x1; // BYPASS_MERGE

    static constexpr uint32_t AXIMC_M5_READ_QOS_RESET_VALUE = 0x4;
    template<uint32_t X>
    static constexpr uint32_t AXIMC_M5_READ_QOS_AR_QOS =   // AR_QOS
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t AXIMC_M5_WRITE_QOS_RESET_VALUE = 0x4;
    template<uint32_t X>
    static constexpr uint32_t AXIMC_M5_WRITE_QOS_AW_QOS =   // AW_QOS
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t AXIMC_M5_FN_MOD_RESET_VALUE = 0x0;
    static constexpr uint32_t AXIMC_M5_FN_MOD_READ_ISS_OVERRIDE = 0x1;  // READ_ISS_OVERRIDE
    static constexpr uint32_t AXIMC_M5_FN_MOD_WRITE_ISS_OVERRIDE = 0x2; // WRITE_ISS_OVERRIDE

    static constexpr uint32_t AXIMC_M3_READ_QOS_RESET_VALUE = 0x7;
    template<uint32_t X>
    static constexpr uint32_t AXIMC_M3_READ_QOS_AR_QOS =   // AR_QOS
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t AXIMC_M3_WRITE_QOS_RESET_VALUE = 0x7;
    template<uint32_t X>
    static constexpr uint32_t AXIMC_M3_WRITE_QOS_AW_QOS =   // AW_QOS
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t AXIMC_M3_FN_MOD_RESET_VALUE = 0x0;
    static constexpr uint32_t AXIMC_M3_FN_MOD_READ_ISS_OVERRIDE = 0x1;  // READ_ISS_OVERRIDE
    static constexpr uint32_t AXIMC_M3_FN_MOD_WRITE_ISS_OVERRIDE = 0x2; // WRITE_ISS_OVERRIDE

    static constexpr uint32_t AXIMC_M7_READ_QOS_RESET_VALUE = 0x8;
    template<uint32_t X>
    static constexpr uint32_t AXIMC_M7_READ_QOS_AR_QOS =   // AR_QOS
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t AXIMC_M7_WRITE_QOS_RESET_VALUE = 0x8;
    template<uint32_t X>
    static constexpr uint32_t AXIMC_M7_WRITE_QOS_AW_QOS =   // AW_QOS
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t AXIMC_M7_FN_MOD_RESET_VALUE = 0x0;
    static constexpr uint32_t AXIMC_M7_FN_MOD_READ_ISS_OVERRIDE = 0x1;  // READ_ISS_OVERRIDE
    static constexpr uint32_t AXIMC_M7_FN_MOD_WRITE_ISS_OVERRIDE = 0x2; // WRITE_ISS_OVERRIDE

    static constexpr uint32_t AXIMC_M8_READ_QOS_RESET_VALUE = 0x8;
    template<uint32_t X>
    static constexpr uint32_t AXIMC_M8_READ_QOS_AR_QOS =   // AR_QOS
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t AXIMC_M8_WRITE_QOS_RESET_VALUE = 0x8;
    template<uint32_t X>
    static constexpr uint32_t AXIMC_M8_WRITE_QOS_AW_QOS =   // AW_QOS
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t AXIMC_M8_FN_MOD_RESET_VALUE = 0x0;
    static constexpr uint32_t AXIMC_M8_FN_MOD_READ_ISS_OVERRIDE = 0x1;  // READ_ISS_OVERRIDE
    static constexpr uint32_t AXIMC_M8_FN_MOD_WRITE_ISS_OVERRIDE = 0x2; // WRITE_ISS_OVERRIDE

    static constexpr uint32_t AXIMC_M4_FN_MOD2_RESET_VALUE = 0x0;
    static constexpr uint32_t AXIMC_M4_FN_MOD2_BYPASS_MERGE = 0x1; // BYPASS_MERGE

    static constexpr uint32_t AXIMC_M4_READ_QOS_RESET_VALUE = 0x7;
    template<uint32_t X>
    static constexpr uint32_t AXIMC_M4_READ_QOS_AR_QOS =   // AR_QOS
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t AXIMC_M4_WRITE_QOS_RESET_VALUE = 0x7;
    template<uint32_t X>
    static constexpr uint32_t AXIMC_M4_WRITE_QOS_AW_QOS =   // AW_QOS
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t AXIMC_M4_FN_MOD_RESET_VALUE = 0x0;
    static constexpr uint32_t AXIMC_M4_FN_MOD_READ_ISS_OVERRIDE = 0x1;  // READ_ISS_OVERRIDE
    static constexpr uint32_t AXIMC_M4_FN_MOD_WRITE_ISS_OVERRIDE = 0x2; // WRITE_ISS_OVERRIDE

    static constexpr uint32_t AXIMC_M9_READ_QOS_RESET_VALUE = 0xb;
    template<uint32_t X>
    static constexpr uint32_t AXIMC_M9_READ_QOS_AR_QOS =   // AR_QOS
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t AXIMC_M9_WRITE_QOS_RESET_VALUE = 0xb;
    template<uint32_t X>
    static constexpr uint32_t AXIMC_M9_WRITE_QOS_AW_QOS =   // AW_QOS
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t AXIMC_M9_FN_MOD_RESET_VALUE = 0x0;
    static constexpr uint32_t AXIMC_M9_FN_MOD_READ_ISS_OVERRIDE = 0x1;  // READ_ISS_OVERRIDE
    static constexpr uint32_t AXIMC_M9_FN_MOD_WRITE_ISS_OVERRIDE = 0x2; // WRITE_ISS_OVERRIDE

    static constexpr uint32_t AXIMC_M10_READ_QOS_RESET_VALUE = 0xb;
    template<uint32_t X>
    static constexpr uint32_t AXIMC_M10_READ_QOS_AR_QOS =   // AR_QOS
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t AXIMC_M10_WRITE_QOS_RESET_VALUE = 0xb;
    template<uint32_t X>
    static constexpr uint32_t AXIMC_M10_WRITE_QOS_AW_QOS =   // AW_QOS
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t AXIMC_M10_FN_MOD_RESET_VALUE = 0x0;
    static constexpr uint32_t AXIMC_M10_FN_MOD_READ_ISS_OVERRIDE = 0x1;  // READ_ISS_OVERRIDE
    static constexpr uint32_t AXIMC_M10_FN_MOD_WRITE_ISS_OVERRIDE = 0x2; // WRITE_ISS_OVERRIDE

    static constexpr uint32_t AXIMC_M6_FN_MOD2_RESET_VALUE = 0x0;
    static constexpr uint32_t AXIMC_M6_FN_MOD2_BYPASS_MERGE = 0x1; // BYPASS_MERGE

    static constexpr uint32_t AXIMC_M6_READ_QOS_RESET_VALUE = 0x4;
    template<uint32_t X>
    static constexpr uint32_t AXIMC_M6_READ_QOS_AR_QOS =   // AR_QOS
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t AXIMC_M6_WRITE_QOS_RESET_VALUE = 0x4;
    template<uint32_t X>
    static constexpr uint32_t AXIMC_M6_WRITE_QOS_AW_QOS =   // AW_QOS
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t AXIMC_M6_FN_MOD_RESET_VALUE = 0x0;
    static constexpr uint32_t AXIMC_M6_FN_MOD_READ_ISS_OVERRIDE = 0x1;  // READ_ISS_OVERRIDE
    static constexpr uint32_t AXIMC_M6_FN_MOD_WRITE_ISS_OVERRIDE = 0x2; // WRITE_ISS_OVERRIDE

    static constexpr uint32_t AXIMC_PERIPH_ID_4_RESET_VALUE = 0x4;
    template<uint32_t X>
    static constexpr uint32_t AXIMC_PERIPH_ID_4_JEP106CON =   // JEP106CON
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AXIMC_PERIPH_ID_4_K4COUNT =     // K4COUNT
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t AXIMC_PERIPH_ID_5_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t AXIMC_PERIPH_ID_5_PERIPH_ID_5 =   // PERIPH_ID_5
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t AXIMC_PERIPH_ID_6_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t AXIMC_PERIPH_ID_6_PERIPH_ID_6 =   // PERIPH_ID_6
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t AXIMC_PERIPH_ID_7_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t AXIMC_PERIPH_ID_7_PERIPH_ID_7 =   // PERIPH_ID_7
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t AXIMC_PERIPH_ID_0_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t AXIMC_PERIPH_ID_0_PERIPH_ID_0 =   // PERIPH_ID_0
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t AXIMC_PERIPH_ID_1_RESET_VALUE = 0xb4;
    template<uint32_t X>
    static constexpr uint32_t AXIMC_PERIPH_ID_1_PERIPH_ID_1 =   // PERIPH_ID_1
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t AXIMC_PERIPH_ID_2_RESET_VALUE = 0x3b;
    template<uint32_t X>
    static constexpr uint32_t AXIMC_PERIPH_ID_2_PERIPH_ID_2 =   // PERIPH_ID_2
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t AXIMC_PERIPH_ID_3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t AXIMC_PERIPH_ID_3_CUST_MOD_NUM =   // CUST_MOD_NUM
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AXIMC_PERIPH_ID_3_REV_AND =        // REV_AND
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t AXIMC_COMP_ID_0_RESET_VALUE = 0xd;
    template<uint32_t X>
    static constexpr uint32_t AXIMC_COMP_ID_0_PREAMBLE =   // PREAMBLE
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t AXIMC_COMP_ID_1_RESET_VALUE = 0xf0;
    template<uint32_t X>
    static constexpr uint32_t AXIMC_COMP_ID_1_PREAMBLE =   // PREAMBLE
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AXIMC_COMP_ID_1_CLASS =      // CLASS
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t AXIMC_COMP_ID_2_RESET_VALUE = 0x5;
    template<uint32_t X>
    static constexpr uint32_t AXIMC_COMP_ID_2_PREAMBLE =   // PREAMBLE
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t AXIMC_COMP_ID_3_RESET_VALUE = 0xb1;
    template<uint32_t X>
    static constexpr uint32_t AXIMC_COMP_ID_3_PREAMBLE =   // PREAMBLE
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t AXIMC_M0_FN_MOD_AHB_RESET_VALUE = 0x0;
    static constexpr uint32_t AXIMC_M0_FN_MOD_AHB_RD_INC_OVERRIDE = 0x1; // RD_INC_OVERRIDE
    static constexpr uint32_t AXIMC_M0_FN_MOD_AHB_WR_INC_OVERRIDE = 0x2; // WR_INC_OVERRIDE

    static constexpr uint32_t AXIMC_M1_FN_MOD_AHB_RESET_VALUE = 0x0;
    static constexpr uint32_t AXIMC_M1_FN_MOD_AHB_RD_INC_OVERRIDE = 0x1; // RD_INC_OVERRIDE
    static constexpr uint32_t AXIMC_M1_FN_MOD_AHB_WR_INC_OVERRIDE = 0x2; // WR_INC_OVERRIDE

    static constexpr uint32_t AXIMC_M2_FN_MOD_AHB_RESET_VALUE = 0x0;
    static constexpr uint32_t AXIMC_M2_FN_MOD_AHB_RD_INC_OVERRIDE = 0x1; // RD_INC_OVERRIDE
    static constexpr uint32_t AXIMC_M2_FN_MOD_AHB_WR_INC_OVERRIDE = 0x2; // WR_INC_OVERRIDE

    static constexpr uint32_t AXIMC_M5_FN_MOD_AHB_RESET_VALUE = 0x0;
    static constexpr uint32_t AXIMC_M5_FN_MOD_AHB_RD_INC_OVERRIDE = 0x1; // RD_INC_OVERRIDE
    static constexpr uint32_t AXIMC_M5_FN_MOD_AHB_WR_INC_OVERRIDE = 0x2; // WR_INC_OVERRIDE

    static constexpr uint32_t AXIMC_M6_FN_MOD_AHB_RESET_VALUE = 0x0;
    static constexpr uint32_t AXIMC_M6_FN_MOD_AHB_RD_INC_OVERRIDE = 0x1; // RD_INC_OVERRIDE
    static constexpr uint32_t AXIMC_M6_FN_MOD_AHB_WR_INC_OVERRIDE = 0x2; // WR_INC_OVERRIDE

    static constexpr uint32_t AXIMC_FN_MOD_LB_RESET_VALUE = 0x0;
    static constexpr uint32_t AXIMC_FN_MOD_LB_FN_MOD_LB = 0x1; // FN_MOD_LB
};


template<>
struct peripheral_t<STM32MP15xxx, AXIMC_Mx>
{
    typedef stm32mp15xxx_aximc_mx_t T;
    static T& V;
};

using aximc_mx_t = peripheral_t<mcu_svd, AXIMC_Mx>;

