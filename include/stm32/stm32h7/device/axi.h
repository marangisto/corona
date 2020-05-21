#pragma once

////
//
//      STM32H7 AXI peripherals
//
////

////
//
//      AXI interconnect registers
//
////

struct stm32h742x_axi_t
{
    volatile uint32_t AXI_PERIPH_ID_4;         // [read-only] AXI interconnect - peripheral ID4 register
    reserved_t<0x3> _0x1fe0;
    volatile uint32_t AXI_PERIPH_ID_0;         // [read-only] AXI interconnect - peripheral ID0 register
    volatile uint32_t AXI_PERIPH_ID_1;         // [read-only] AXI interconnect - peripheral ID1 register
    volatile uint32_t AXI_PERIPH_ID_2;         // [read-only] AXI interconnect - peripheral ID2 register
    volatile uint32_t AXI_PERIPH_ID_3;         // [read-only] AXI interconnect - peripheral ID3 register
    volatile uint32_t AXI_COMP_ID_0;           // [read-only] AXI interconnect - component ID0 register
    volatile uint32_t AXI_COMP_ID_1;           // [read-only] AXI interconnect - component ID1 register
    volatile uint32_t AXI_COMP_ID_2;           // [read-only] AXI interconnect - component ID2 register
    volatile uint32_t AXI_COMP_ID_3;           // [read-only] AXI interconnect - component ID3 register
    reserved_t<0x2> _0x2008;
    volatile uint32_t AXI_TARG1_FN_MOD_ISS_BM; // [read-write] AXI interconnect - TARG x bus matrix issuing functionality register
    reserved_t<0x6> _0x2024;
    volatile uint32_t AXI_TARG1_FN_MOD2;       // [read-write] AXI interconnect - TARG x bus matrix functionality 2 register
    reserved_t<0x1> _0x202c;
    volatile uint32_t AXI_TARG1_FN_MOD_LB;     // [read-write] AXI interconnect - TARG x long burst functionality modification
    reserved_t<0x36> _0x2108;
    volatile uint32_t AXI_TARG1_FN_MOD;        // [read-write] AXI interconnect - TARG x long burst functionality modification
    reserved_t<0x3bf> _0x3008;
    volatile uint32_t AXI_TARG2_FN_MOD_ISS_BM; // [read-write] AXI interconnect - TARG x bus matrix issuing functionality register
    reserved_t<0x6> _0x3024;
    volatile uint32_t AXI_TARG2_FN_MOD2;       // [read-write] AXI interconnect - TARG x bus matrix functionality 2 register
    reserved_t<0x1> _0x302c;
    volatile uint32_t AXI_TARG2_FN_MOD_LB;     // [read-write] AXI interconnect - TARG x long burst functionality modification
    reserved_t<0x36> _0x3108;
    volatile uint32_t AXI_TARG2_FN_MOD;        // [read-write] AXI interconnect - TARG x long burst functionality modification
    reserved_t<0x3bf> _0x4008;
    volatile uint32_t AXI_TARG3_FN_MOD_ISS_BM; // [read-write] AXI interconnect - TARG x bus matrix issuing functionality register
    reserved_t<0x3ff> _0x5008;
    volatile uint32_t AXI_TARG4_FN_MOD_ISS_BM; // [read-write] AXI interconnect - TARG x bus matrix issuing functionality register
    reserved_t<0x3ff> _0x6008;
    volatile uint32_t AXI_TARG5_FN_MOD_ISS_BM; // [read-write] AXI interconnect - TARG x bus matrix issuing functionality register
    reserved_t<0x3ff> _0x7008;
    volatile uint32_t AXI_TARG6_FN_MOD_ISS_BM; // [read-write] AXI interconnect - TARG x bus matrix issuing functionality register
    reserved_t<0x400> _0x800c;
    volatile uint32_t AXI_TARG7_FN_MOD_ISS_BM; // [read-write] AXI interconnect - TARG x bus matrix issuing functionality register
    reserved_t<0x5> _0x8024;
    volatile uint32_t AXI_TARG7_FN_MOD2;       // [read-write] AXI interconnect - TARG x bus matrix functionality 2 register
    reserved_t<0x38> _0x8108;
    volatile uint32_t AXI_TARG7_FN_MOD;        // [read-write] AXI interconnect - TARG x long burst functionality modification
    reserved_t<0xe7c6> _0x42024;
    volatile uint32_t AXI_INI1_FN_MOD2;        // [read-write] AXI interconnect - INI x functionality modification 2 register
    volatile uint32_t AXI_INI1_FN_MOD_AHB;     // [read-write] AXI interconnect - INI x AHB functionality modification register
    reserved_t<0x35> _0x42100;
    volatile uint32_t AXI_INI1_READ_QOS;       // [read-write] AXI interconnect - INI x read QoS register
    volatile uint32_t AXI_INI1_WRITE_QOS;      // [read-write] AXI interconnect - INI x write QoS register
    volatile uint32_t AXI_INI1_FN_MOD;         // [read-write] AXI interconnect - INI x issuing functionality modification register
    reserved_t<0x3fd> _0x43100;
    volatile uint32_t AXI_INI2_READ_QOS;       // [read-write] AXI interconnect - INI x read QoS register
    volatile uint32_t AXI_INI2_WRITE_QOS;      // [read-write] AXI interconnect - INI x write QoS register
    volatile uint32_t AXI_INI2_FN_MOD;         // [read-write] AXI interconnect - INI x issuing functionality modification register
    reserved_t<0x3c6> _0x44024;
    volatile uint32_t AXI_INI3_FN_MOD2;        // [read-write] AXI interconnect - INI x functionality modification 2 register
    volatile uint32_t AXI_INI3_FN_MOD_AHB;     // [read-write] AXI interconnect - INI x AHB functionality modification register
    reserved_t<0x35> _0x44100;
    volatile uint32_t AXI_INI3_READ_QOS;       // [read-write] AXI interconnect - INI x read QoS register
    volatile uint32_t AXI_INI3_WRITE_QOS;      // [read-write] AXI interconnect - INI x write QoS register
    volatile uint32_t AXI_INI3_FN_MOD;         // [read-write] AXI interconnect - INI x issuing functionality modification register
    reserved_t<0x3fd> _0x45100;
    volatile uint32_t AXI_INI4_READ_QOS;       // [read-write] AXI interconnect - INI x read QoS register
    volatile uint32_t AXI_INI4_WRITE_QOS;      // [read-write] AXI interconnect - INI x write QoS register
    volatile uint32_t AXI_INI4_FN_MOD;         // [read-write] AXI interconnect - INI x issuing functionality modification register
    reserved_t<0x3fd> _0x46100;
    volatile uint32_t AXI_INI5_READ_QOS;       // [read-write] AXI interconnect - INI x read QoS register
    volatile uint32_t AXI_INI5_WRITE_QOS;      // [read-write] AXI interconnect - INI x write QoS register
    volatile uint32_t AXI_INI5_FN_MOD;         // [read-write] AXI interconnect - INI x issuing functionality modification register
    reserved_t<0x3fd> _0x47100;
    volatile uint32_t AXI_INI6_READ_QOS;       // [read-write] AXI interconnect - INI x read QoS register
    volatile uint32_t AXI_INI6_WRITE_QOS;      // [read-write] AXI interconnect - INI x write QoS register
    volatile uint32_t AXI_INI6_FN_MOD;         // [read-write] AXI interconnect - INI x issuing functionality modification register

    static constexpr uint32_t AXI_PERIPH_ID_4_RESET_VALUE = 0x4;
    template<uint32_t X>
    static constexpr uint32_t AXI_PERIPH_ID_4_JEP106CON =   // JEP106 continuation code
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AXI_PERIPH_ID_4_KCOUNT4 =     // Register file size
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t AXI_PERIPH_ID_0_RESET_VALUE = 0x4;
    template<uint32_t X>
    static constexpr uint32_t AXI_PERIPH_ID_0_PARTNUM =   // Peripheral part number bits 0 to 7
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t AXI_PERIPH_ID_1_RESET_VALUE = 0x4;
    template<uint32_t X>
    static constexpr uint32_t AXI_PERIPH_ID_1_PARTNUM =   // Peripheral part number bits 8 to 11
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AXI_PERIPH_ID_1_JEP106I =   // JEP106 identity bits 0 to 3
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t AXI_PERIPH_ID_2_RESET_VALUE = 0x4;
    template<uint32_t X>
    static constexpr uint32_t AXI_PERIPH_ID_2_JEP106ID =   // JEP106 Identity bits 4 to 6
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t AXI_PERIPH_ID_2_JEDEC = 0x8; // JEP106 code flag
    template<uint32_t X>
    static constexpr uint32_t AXI_PERIPH_ID_2_REVISION =   // Peripheral revision number
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t AXI_PERIPH_ID_3_RESET_VALUE = 0x4;
    template<uint32_t X>
    static constexpr uint32_t AXI_PERIPH_ID_3_CUST_MOD_NUM =   // Customer modification
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AXI_PERIPH_ID_3_REV_AND =        // Customer version
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t AXI_COMP_ID_0_RESET_VALUE = 0x4;
    template<uint32_t X>
    static constexpr uint32_t AXI_COMP_ID_0_PREAMBLE =   // Preamble bits 0 to 7
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t AXI_COMP_ID_1_RESET_VALUE = 0x4;
    template<uint32_t X>
    static constexpr uint32_t AXI_COMP_ID_1_PREAMBLE =   // Preamble bits 8 to 11
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AXI_COMP_ID_1_CLASS =      // Component class
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t AXI_COMP_ID_2_RESET_VALUE = 0x4;
    template<uint32_t X>
    static constexpr uint32_t AXI_COMP_ID_2_PREAMBLE =   // Preamble bits 12 to 19
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t AXI_COMP_ID_3_RESET_VALUE = 0x4;
    template<uint32_t X>
    static constexpr uint32_t AXI_COMP_ID_3_PREAMBLE =   // Preamble bits 20 to 27
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t AXI_TARG1_FN_MOD_ISS_BM_RESET_VALUE = 0x4;
    static constexpr uint32_t AXI_TARG1_FN_MOD_ISS_BM_READ_ISS_OVERRIDE = 0x1;  // READ_ISS_OVERRIDE
    static constexpr uint32_t AXI_TARG1_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE = 0x2; // Switch matrix write issuing override for target

    static constexpr uint32_t AXI_TARG2_FN_MOD_ISS_BM_RESET_VALUE = 0x4;
    static constexpr uint32_t AXI_TARG2_FN_MOD_ISS_BM_READ_ISS_OVERRIDE = 0x1;  // READ_ISS_OVERRIDE
    static constexpr uint32_t AXI_TARG2_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE = 0x2; // Switch matrix write issuing override for target

    static constexpr uint32_t AXI_TARG3_FN_MOD_ISS_BM_RESET_VALUE = 0x4;
    static constexpr uint32_t AXI_TARG3_FN_MOD_ISS_BM_READ_ISS_OVERRIDE = 0x1;  // READ_ISS_OVERRIDE
    static constexpr uint32_t AXI_TARG3_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE = 0x2; // Switch matrix write issuing override for target

    static constexpr uint32_t AXI_TARG4_FN_MOD_ISS_BM_RESET_VALUE = 0x4;
    static constexpr uint32_t AXI_TARG4_FN_MOD_ISS_BM_READ_ISS_OVERRIDE = 0x1;  // READ_ISS_OVERRIDE
    static constexpr uint32_t AXI_TARG4_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE = 0x2; // Switch matrix write issuing override for target

    static constexpr uint32_t AXI_TARG5_FN_MOD_ISS_BM_RESET_VALUE = 0x4;
    static constexpr uint32_t AXI_TARG5_FN_MOD_ISS_BM_READ_ISS_OVERRIDE = 0x1;  // READ_ISS_OVERRIDE
    static constexpr uint32_t AXI_TARG5_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE = 0x2; // Switch matrix write issuing override for target

    static constexpr uint32_t AXI_TARG6_FN_MOD_ISS_BM_RESET_VALUE = 0x4;
    static constexpr uint32_t AXI_TARG6_FN_MOD_ISS_BM_READ_ISS_OVERRIDE = 0x1;  // READ_ISS_OVERRIDE
    static constexpr uint32_t AXI_TARG6_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE = 0x2; // Switch matrix write issuing override for target

    static constexpr uint32_t AXI_TARG7_FN_MOD_ISS_BM_RESET_VALUE = 0x4;
    static constexpr uint32_t AXI_TARG7_FN_MOD_ISS_BM_READ_ISS_OVERRIDE = 0x1;  // READ_ISS_OVERRIDE
    static constexpr uint32_t AXI_TARG7_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE = 0x2; // Switch matrix write issuing override for target

    static constexpr uint32_t AXI_TARG1_FN_MOD2_RESET_VALUE = 0x4;
    static constexpr uint32_t AXI_TARG1_FN_MOD2_BYPASS_MERGE = 0x1; // Disable packing of beats to match the output data width

    static constexpr uint32_t AXI_TARG2_FN_MOD2_RESET_VALUE = 0x4;
    static constexpr uint32_t AXI_TARG2_FN_MOD2_BYPASS_MERGE = 0x1; // Disable packing of beats to match the output data width

    static constexpr uint32_t AXI_TARG7_FN_MOD2_RESET_VALUE = 0x4;
    static constexpr uint32_t AXI_TARG7_FN_MOD2_BYPASS_MERGE = 0x1; // Disable packing of beats to match the output data width

    static constexpr uint32_t AXI_TARG1_FN_MOD_LB_RESET_VALUE = 0x4;
    static constexpr uint32_t AXI_TARG1_FN_MOD_LB_FN_MOD_LB = 0x1; // Controls burst breaking of long bursts

    static constexpr uint32_t AXI_TARG2_FN_MOD_LB_RESET_VALUE = 0x4;
    static constexpr uint32_t AXI_TARG2_FN_MOD_LB_FN_MOD_LB = 0x1; // Controls burst breaking of long bursts

    static constexpr uint32_t AXI_TARG1_FN_MOD_RESET_VALUE = 0x4;
    static constexpr uint32_t AXI_TARG1_FN_MOD_READ_ISS_OVERRIDE = 0x1;  // Override AMIB read issuing capability
    static constexpr uint32_t AXI_TARG1_FN_MOD_WRITE_ISS_OVERRIDE = 0x2; // Override AMIB write issuing capability

    static constexpr uint32_t AXI_TARG2_FN_MOD_RESET_VALUE = 0x4;
    static constexpr uint32_t AXI_TARG2_FN_MOD_READ_ISS_OVERRIDE = 0x1;  // Override AMIB read issuing capability
    static constexpr uint32_t AXI_TARG2_FN_MOD_WRITE_ISS_OVERRIDE = 0x2; // Override AMIB write issuing capability

    static constexpr uint32_t AXI_TARG7_FN_MOD_RESET_VALUE = 0x4;
    static constexpr uint32_t AXI_TARG7_FN_MOD_READ_ISS_OVERRIDE = 0x1;  // Override AMIB read issuing capability
    static constexpr uint32_t AXI_TARG7_FN_MOD_WRITE_ISS_OVERRIDE = 0x2; // Override AMIB write issuing capability

    static constexpr uint32_t AXI_INI1_FN_MOD2_RESET_VALUE = 0x4;
    static constexpr uint32_t AXI_INI1_FN_MOD2_BYPASS_MERGE = 0x1; // Disables alteration of transactions by the up-sizer unless required by the protocol

    static constexpr uint32_t AXI_INI3_FN_MOD2_RESET_VALUE = 0x4;
    static constexpr uint32_t AXI_INI3_FN_MOD2_BYPASS_MERGE = 0x1; // Disables alteration of transactions by the up-sizer unless required by the protocol

    static constexpr uint32_t AXI_INI1_FN_MOD_AHB_RESET_VALUE = 0x4;
    static constexpr uint32_t AXI_INI1_FN_MOD_AHB_RD_INC_OVERRIDE = 0x1; // Converts all AHB-Lite write transactions to a series of single beat AXI
    static constexpr uint32_t AXI_INI1_FN_MOD_AHB_WR_INC_OVERRIDE = 0x2; // Converts all AHB-Lite read transactions to a series of single beat AXI

    static constexpr uint32_t AXI_INI3_FN_MOD_AHB_RESET_VALUE = 0x4;
    static constexpr uint32_t AXI_INI3_FN_MOD_AHB_RD_INC_OVERRIDE = 0x1; // Converts all AHB-Lite write transactions to a series of single beat AXI
    static constexpr uint32_t AXI_INI3_FN_MOD_AHB_WR_INC_OVERRIDE = 0x2; // Converts all AHB-Lite read transactions to a series of single beat AXI

    static constexpr uint32_t AXI_INI1_READ_QOS_RESET_VALUE = 0x4;
    template<uint32_t X>
    static constexpr uint32_t AXI_INI1_READ_QOS_AR_QOS =   // Read channel QoS setting
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t AXI_INI2_READ_QOS_RESET_VALUE = 0x4;
    template<uint32_t X>
    static constexpr uint32_t AXI_INI2_READ_QOS_AR_QOS =   // Read channel QoS setting
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t AXI_INI3_READ_QOS_RESET_VALUE = 0x4;
    template<uint32_t X>
    static constexpr uint32_t AXI_INI3_READ_QOS_AR_QOS =   // Read channel QoS setting
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t AXI_INI4_READ_QOS_RESET_VALUE = 0x4;
    template<uint32_t X>
    static constexpr uint32_t AXI_INI4_READ_QOS_AR_QOS =   // Read channel QoS setting
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t AXI_INI5_READ_QOS_RESET_VALUE = 0x4;
    template<uint32_t X>
    static constexpr uint32_t AXI_INI5_READ_QOS_AR_QOS =   // Read channel QoS setting
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t AXI_INI6_READ_QOS_RESET_VALUE = 0x4;
    template<uint32_t X>
    static constexpr uint32_t AXI_INI6_READ_QOS_AR_QOS =   // Read channel QoS setting
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t AXI_INI1_WRITE_QOS_RESET_VALUE = 0x4;
    template<uint32_t X>
    static constexpr uint32_t AXI_INI1_WRITE_QOS_AW_QOS =   // Write channel QoS setting
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t AXI_INI2_WRITE_QOS_RESET_VALUE = 0x4;
    template<uint32_t X>
    static constexpr uint32_t AXI_INI2_WRITE_QOS_AW_QOS =   // Write channel QoS setting
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t AXI_INI3_WRITE_QOS_RESET_VALUE = 0x4;
    template<uint32_t X>
    static constexpr uint32_t AXI_INI3_WRITE_QOS_AW_QOS =   // Write channel QoS setting
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t AXI_INI4_WRITE_QOS_RESET_VALUE = 0x4;
    template<uint32_t X>
    static constexpr uint32_t AXI_INI4_WRITE_QOS_AW_QOS =   // Write channel QoS setting
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t AXI_INI5_WRITE_QOS_RESET_VALUE = 0x4;
    template<uint32_t X>
    static constexpr uint32_t AXI_INI5_WRITE_QOS_AW_QOS =   // Write channel QoS setting
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t AXI_INI6_WRITE_QOS_RESET_VALUE = 0x4;
    template<uint32_t X>
    static constexpr uint32_t AXI_INI6_WRITE_QOS_AW_QOS =   // Write channel QoS setting
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t AXI_INI1_FN_MOD_RESET_VALUE = 0x4;
    static constexpr uint32_t AXI_INI1_FN_MOD_READ_ISS_OVERRIDE = 0x1;  // Override ASIB read issuing capability
    static constexpr uint32_t AXI_INI1_FN_MOD_WRITE_ISS_OVERRIDE = 0x2; // Override ASIB write issuing capability

    static constexpr uint32_t AXI_INI2_FN_MOD_RESET_VALUE = 0x4;
    static constexpr uint32_t AXI_INI2_FN_MOD_READ_ISS_OVERRIDE = 0x1;  // Override ASIB read issuing capability
    static constexpr uint32_t AXI_INI2_FN_MOD_WRITE_ISS_OVERRIDE = 0x2; // Override ASIB write issuing capability

    static constexpr uint32_t AXI_INI3_FN_MOD_RESET_VALUE = 0x4;
    static constexpr uint32_t AXI_INI3_FN_MOD_READ_ISS_OVERRIDE = 0x1;  // Override ASIB read issuing capability
    static constexpr uint32_t AXI_INI3_FN_MOD_WRITE_ISS_OVERRIDE = 0x2; // Override ASIB write issuing capability

    static constexpr uint32_t AXI_INI4_FN_MOD_RESET_VALUE = 0x4;
    static constexpr uint32_t AXI_INI4_FN_MOD_READ_ISS_OVERRIDE = 0x1;  // Override ASIB read issuing capability
    static constexpr uint32_t AXI_INI4_FN_MOD_WRITE_ISS_OVERRIDE = 0x2; // Override ASIB write issuing capability

    static constexpr uint32_t AXI_INI5_FN_MOD_RESET_VALUE = 0x4;
    static constexpr uint32_t AXI_INI5_FN_MOD_READ_ISS_OVERRIDE = 0x1;  // Override ASIB read issuing capability
    static constexpr uint32_t AXI_INI5_FN_MOD_WRITE_ISS_OVERRIDE = 0x2; // Override ASIB write issuing capability

    static constexpr uint32_t AXI_INI6_FN_MOD_RESET_VALUE = 0x4;
    static constexpr uint32_t AXI_INI6_FN_MOD_READ_ISS_OVERRIDE = 0x1;  // Override ASIB read issuing capability
    static constexpr uint32_t AXI_INI6_FN_MOD_WRITE_ISS_OVERRIDE = 0x2; // Override ASIB write issuing capability
};


template<>
struct peripheral_t<STM32H742x, AXI>
{
    typedef stm32h742x_axi_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, AXI>
{
    typedef stm32h742x_axi_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, AXI>
{
    typedef stm32h742x_axi_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, AXI>
{
    typedef stm32h742x_axi_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, AXI>
{
    typedef stm32h742x_axi_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, AXI>
{
    typedef stm32h742x_axi_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, AXI>
{
    typedef stm32h742x_axi_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, AXI>
{
    typedef stm32h742x_axi_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, AXI>
{
    typedef stm32h742x_axi_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, AXI>
{
    typedef stm32h742x_axi_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, AXI>
{
    typedef stm32h742x_axi_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, AXI>
{
    typedef stm32h742x_axi_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, AXI>
{
    typedef stm32h742x_axi_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, AXI>
{
    typedef stm32h742x_axi_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, AXI>
{
    typedef stm32h742x_axi_t T;
    static T& V;
};

using axi_t = peripheral_t<mcu_svd, AXI>;

