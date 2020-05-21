#pragma once

////
//
//      STM32MP1 TZC peripherals
//
////

////
//
//      TZC
//
////

struct stm32mp15xxx_tzc_t
{
    volatile uint32_t TZC_BUILD_CONFIG;      // [read-only] Provides information about TZC configuration.
    volatile uint32_t TZC_ACTION;            // [read-write] Controls interrupt and bus error response behavior when regions permission failures occur.
    volatile uint32_t TZC_GATE_KEEPER;       // [read-write] Provides control and status for the gate keeper in each filter unit implemented.
    volatile uint32_t TZC_SPECULATION_CTRL;  // [read-write] Controls read and write access speculation.
    volatile uint32_t TZC_INT_STATUS;        // [read-only] Contains the status of the interrupt signal, TZCINT, that reports access security violations or region overlap errors.
    volatile uint32_t TZC_INT_CLEAR;         // [read-write] Interrupt clear for each filter.
    reserved_t<0x2> _0x20;
    volatile uint32_t TZC_FAIL_ADDRESS_LOW0; // [read-only] Address low bits of the first failed access in the associated filter (0 to 1).
    reserved_t<0x1> _0x28;
    volatile uint32_t TZC_FAIL_CONTROL0;     // [read-only] Status information about the first access that failed a region permission check in the associated filter (0 to 1).
    volatile uint32_t TZC_FAIL_ID0;          // [read-only] Contains the master AXI ARID or AWID of the first access that failed a region permission check in the associated filter unit. This occurs even if the ACTION register is set to not drive the interrupt signal. AXI ID mapping is described in Table4: NSAID definition table (TBD).
    volatile uint32_t TZC_FAIL_ADDRESS_LOW1; // [read-only] Address low bits of the first failed access in the associated filter (0 to 1).
    reserved_t<0x1> _0x38;
    volatile uint32_t TZC_FAIL_CONTROL1;     // [read-only] Status information about the first access that failed a region permission check in the associated filter (0 to 1).
    volatile uint32_t TZC_FAIL_ID1;          // [read-only] Contains the master AXI ARID or AWID of the first access that failed a region permission check in the associated filter unit. This occurs even if the ACTION register is set to not drive the interrupt signal. AXI ID mapping is described in Table4: NSAID definition table (TBD).
    reserved_t<0x32> _0x108;
    volatile uint32_t TZC_REGION_TOP_LOW0;   // [read-only] Top address bits [31:12] for region 0.
    reserved_t<0x1> _0x110;
    volatile uint32_t TZC_REGION_ATTRIBUTE0; // [read-write] Region 0 attributes.
    volatile uint32_t TZC_REGION_ID_ACCESS0; // [read-write] Region non-secure access based on NSAID.
    reserved_t<0x2> _0x120;
    volatile uint32_t TZC_REGION_BASE_LOW1;  // [read-write] Base address low for regions 1 to 8.
    reserved_t<0x1> _0x128;
    volatile uint32_t TZC_REGION_TOP_LOW1;   // [read-write] Top address bits [31:12] for region x.
    reserved_t<0x1> _0x130;
    volatile uint32_t TZC_REGION_ATTRIBUTE1; // [read-write] Region x attributes.
    volatile uint32_t TZC_REGION_ID_ACCESS1; // [read-write] Region non-secure access based on NSAID.
    reserved_t<0x2> _0x140;
    volatile uint32_t TZC_REGION_BASE_LOW2;  // [read-write] Base address low for regions 1 to 8.
    reserved_t<0x1> _0x148;
    volatile uint32_t TZC_REGION_TOP_LOW2;   // [read-write] Top address bits [31:12] for region x.
    reserved_t<0x1> _0x150;
    volatile uint32_t TZC_REGION_ATTRIBUTE2; // [read-write] Region x attributes.
    volatile uint32_t TZC_REGION_ID_ACCESS2; // [read-write] Region non-secure access based on NSAID.
    reserved_t<0x2> _0x160;
    volatile uint32_t TZC_REGION_BASE_LOW3;  // [read-write] Base address low for regions 1 to 8.
    reserved_t<0x1> _0x168;
    volatile uint32_t TZC_REGION_TOP_LOW3;   // [read-write] Top address bits [31:12] for region x.
    reserved_t<0x1> _0x170;
    volatile uint32_t TZC_REGION_ATTRIBUTE3; // [read-write] Region x attributes.
    volatile uint32_t TZC_REGION_ID_ACCESS3; // [read-write] Region non-secure access based on NSAID.
    reserved_t<0x2> _0x180;
    volatile uint32_t TZC_REGION_BASE_LOW4;  // [read-write] Base address low for regions 1 to 8.
    reserved_t<0x1> _0x188;
    volatile uint32_t TZC_REGION_TOP_LOW4;   // [read-write] Top address bits [31:12] for region x.
    reserved_t<0x1> _0x190;
    volatile uint32_t TZC_REGION_ATTRIBUTE4; // [read-write] Region x attributes.
    volatile uint32_t TZC_REGION_ID_ACCESS4; // [read-write] Region non-secure access based on NSAID.
    reserved_t<0x2> _0x1a0;
    volatile uint32_t TZC_REGION_BASE_LOW5;  // [read-write] Base address low for regions 1 to 8.
    reserved_t<0x1> _0x1a8;
    volatile uint32_t TZC_REGION_TOP_LOW5;   // [read-write] Top address bits [31:12] for region x.
    reserved_t<0x1> _0x1b0;
    volatile uint32_t TZC_REGION_ATTRIBUTE5; // [read-write] Region x attributes.
    volatile uint32_t TZC_REGION_ID_ACCESS5; // [read-write] Region non-secure access based on NSAID.
    reserved_t<0x2> _0x1c0;
    volatile uint32_t TZC_REGION_BASE_LOW6;  // [read-write] Base address low for regions 1 to 8.
    reserved_t<0x1> _0x1c8;
    volatile uint32_t TZC_REGION_TOP_LOW6;   // [read-write] Top address bits [31:12] for region x.
    reserved_t<0x1> _0x1d0;
    volatile uint32_t TZC_REGION_ATTRIBUTE6; // [read-write] Region x attributes.
    volatile uint32_t TZC_REGION_ID_ACCESS6; // [read-write] Region non-secure access based on NSAID.
    reserved_t<0x4> _0x1e8;
    volatile uint32_t TZC_REGION_TOP_LOW7;   // [read-write] Top address bits [31:12] for region x.
    reserved_t<0x1> _0x1f0;
    volatile uint32_t TZC_REGION_ATTRIBUTE7; // [read-write] Region x attributes.
    reserved_t<0x3> _0x200;
    volatile uint32_t TZC_REGION_BASE_LOW8;  // [read-write] Base address low for regions 1 to 8.
    reserved_t<0x3> _0x210;
    volatile uint32_t TZC_REGION_ATTRIBUTE8; // [read-write] Region x attributes.
    reserved_t<0x33> _0x2e0;
    volatile uint32_t TZC_REGION_BASE_LOW7;  // [read-write] Base address low for regions 1 to 8.
    reserved_t<0x4> _0x2f4;
    volatile uint32_t TZC_REGION_ID_ACCESS7; // [read-write] Region non-secure access based on NSAID.
    reserved_t<0x4> _0x308;
    volatile uint32_t TZC_REGION_TOP_LOW8;   // [read-write] Top address bits [31:12] for region x.
    reserved_t<0x2> _0x314;
    volatile uint32_t TZC_REGION_ID_ACCESS8; // [read-write] Region non-secure access based on NSAID.
    reserved_t<0x32e> _0xfd0;
    volatile uint32_t TZC_PID4;              // [read-only] Peripheral ID 4.
    volatile uint32_t TZC_PID5;              // [read-only] Peripheral ID 5.
    volatile uint32_t TZC_PID6;              // [read-only] Peripheral ID 6.
    volatile uint32_t TZC_PID7;              // [read-only] Peripheral ID 7.
    volatile uint32_t TZC_PID0;              // [read-only] Peripheral ID 0.
    volatile uint32_t TZC_PID1;              // [read-only] Peripheral ID 1.
    volatile uint32_t TZC_PID2;              // [read-only] Peripheral ID 2.
    volatile uint32_t TZC_PID3;              // [read-only] Peripheral ID 3.
    volatile uint32_t TZC_CID0;              // [read-only] Component ID 0.
    volatile uint32_t TZC_CID1;              // [read-only] Component ID 1.
    volatile uint32_t TZC_CID2;              // [read-only] Component ID 2.
    volatile uint32_t TZC_CID3;              // [read-only] Component ID 3.

    static constexpr uint32_t TZC_BUILD_CONFIG_RESET_VALUE = 0x1001f08;
    template<uint32_t X>
    static constexpr uint32_t TZC_BUILD_CONFIG_NO_OF_REGIONS =   // NO_OF_REGIONS
        bit_field_t<0, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TZC_BUILD_CONFIG_ADDRESS_WIDTH =   // ADDRESS_WIDTH
        bit_field_t<8, 0x3f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TZC_BUILD_CONFIG_NO_OF_FILTERS =   // NO_OF_FILTERS
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t TZC_ACTION_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TZC_ACTION_REACTION_VALUE =   // REACTION_VALUE
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t TZC_GATE_KEEPER_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TZC_GATE_KEEPER_OPENREQ =    // OPENREQ
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TZC_GATE_KEEPER_OPENSTAT =   // OPENSTAT
        bit_field_t<16, 0x3>::value<X>();

    static constexpr uint32_t TZC_SPECULATION_CTRL_RESET_VALUE = 0x0;
    static constexpr uint32_t TZC_SPECULATION_CTRL_READSPEC_DISABLE = 0x1;  // READSPEC_DISABLE
    static constexpr uint32_t TZC_SPECULATION_CTRL_WRITESPEC_DISABLE = 0x2; // WRITESPEC_DISABLE

    static constexpr uint32_t TZC_INT_STATUS_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TZC_INT_STATUS_STATUS =    // STATUS
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TZC_INT_STATUS_OVERRUN =   // OVERRUN
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TZC_INT_STATUS_OVERLAP =   // OVERLAP
        bit_field_t<16, 0x3>::value<X>();

    static constexpr uint32_t TZC_INT_CLEAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TZC_INT_CLEAR_CLEAR =   // CLEAR
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t TZC_FAIL_CONTROL0_RESET_VALUE = 0x0;
    static constexpr uint32_t TZC_FAIL_CONTROL0_PRIVILEGE = 0x100000;  // PRIVILEGE
    static constexpr uint32_t TZC_FAIL_CONTROL0_NON_SECURE = 0x200000; // NON_SECURE
    static constexpr uint32_t TZC_FAIL_CONTROL0_DIRECTION = 0x1000000; // DIRECTION

    static constexpr uint32_t TZC_FAIL_ID0_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TZC_FAIL_ID0_ID =   // ID
        bit_field_t<0, 0x7ff>::value<X>();

    static constexpr uint32_t TZC_FAIL_CONTROL1_RESET_VALUE = 0x0;
    static constexpr uint32_t TZC_FAIL_CONTROL1_PRIVILEGE = 0x100000;  // PRIVILEGE
    static constexpr uint32_t TZC_FAIL_CONTROL1_NON_SECURE = 0x200000; // NON_SECURE
    static constexpr uint32_t TZC_FAIL_CONTROL1_DIRECTION = 0x1000000; // DIRECTION

    static constexpr uint32_t TZC_FAIL_ID1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TZC_FAIL_ID1_ID =   // ID
        bit_field_t<0, 0x7ff>::value<X>();

    static constexpr uint32_t TZC_REGION_ATTRIBUTE0_RESET_VALUE = 0x3;
    template<uint32_t X>
    static constexpr uint32_t TZC_REGION_ATTRIBUTE0_FILTER_EN =           // FILTER_EN
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t TZC_REGION_ATTRIBUTE0_S_RD_EN = 0x40000000; // S_RD_EN
    static constexpr uint32_t TZC_REGION_ATTRIBUTE0_S_WR_EN = 0x80000000; // S_WR_EN

    static constexpr uint32_t TZC_REGION_ATTRIBUTE1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TZC_REGION_ATTRIBUTE1_FILTER_EN =           // FILTER_EN
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t TZC_REGION_ATTRIBUTE1_S_RD_EN = 0x40000000; // S_RD_EN
    static constexpr uint32_t TZC_REGION_ATTRIBUTE1_S_WR_EN = 0x80000000; // S_WR_EN

    static constexpr uint32_t TZC_REGION_ATTRIBUTE2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TZC_REGION_ATTRIBUTE2_FILTER_EN =           // FILTER_EN
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t TZC_REGION_ATTRIBUTE2_S_RD_EN = 0x40000000; // S_RD_EN
    static constexpr uint32_t TZC_REGION_ATTRIBUTE2_S_WR_EN = 0x80000000; // S_WR_EN

    static constexpr uint32_t TZC_REGION_ATTRIBUTE3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TZC_REGION_ATTRIBUTE3_FILTER_EN =           // FILTER_EN
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t TZC_REGION_ATTRIBUTE3_S_RD_EN = 0x40000000; // S_RD_EN
    static constexpr uint32_t TZC_REGION_ATTRIBUTE3_S_WR_EN = 0x80000000; // S_WR_EN

    static constexpr uint32_t TZC_REGION_ATTRIBUTE4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TZC_REGION_ATTRIBUTE4_FILTER_EN =           // FILTER_EN
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t TZC_REGION_ATTRIBUTE4_S_RD_EN = 0x40000000; // S_RD_EN
    static constexpr uint32_t TZC_REGION_ATTRIBUTE4_S_WR_EN = 0x80000000; // S_WR_EN

    static constexpr uint32_t TZC_REGION_ATTRIBUTE5_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TZC_REGION_ATTRIBUTE5_FILTER_EN =           // FILTER_EN
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t TZC_REGION_ATTRIBUTE5_S_RD_EN = 0x40000000; // S_RD_EN
    static constexpr uint32_t TZC_REGION_ATTRIBUTE5_S_WR_EN = 0x80000000; // S_WR_EN

    static constexpr uint32_t TZC_REGION_ATTRIBUTE6_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TZC_REGION_ATTRIBUTE6_FILTER_EN =           // FILTER_EN
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t TZC_REGION_ATTRIBUTE6_S_RD_EN = 0x40000000; // S_RD_EN
    static constexpr uint32_t TZC_REGION_ATTRIBUTE6_S_WR_EN = 0x80000000; // S_WR_EN

    static constexpr uint32_t TZC_REGION_ATTRIBUTE7_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TZC_REGION_ATTRIBUTE7_FILTER_EN =           // FILTER_EN
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t TZC_REGION_ATTRIBUTE7_S_RD_EN = 0x40000000; // S_RD_EN
    static constexpr uint32_t TZC_REGION_ATTRIBUTE7_S_WR_EN = 0x80000000; // S_WR_EN

    static constexpr uint32_t TZC_REGION_ATTRIBUTE8_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TZC_REGION_ATTRIBUTE8_FILTER_EN =           // FILTER_EN
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t TZC_REGION_ATTRIBUTE8_S_RD_EN = 0x40000000; // S_RD_EN
    static constexpr uint32_t TZC_REGION_ATTRIBUTE8_S_WR_EN = 0x80000000; // S_WR_EN

    static constexpr uint32_t TZC_PID4_RESET_VALUE = 0x4;
    template<uint32_t X>
    static constexpr uint32_t TZC_PID4_PER_ID_4 =   // PER_ID_4
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t TZC_PID5_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TZC_PID5_PER_ID_5 =   // PER_ID_5
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t TZC_PID6_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TZC_PID6_PER_ID_6 =   // PER_ID_6
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t TZC_PID7_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TZC_PID7_PER_ID_7 =   // PER_ID_7
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t TZC_PID0_RESET_VALUE = 0x60;
    template<uint32_t X>
    static constexpr uint32_t TZC_PID0_PER_ID_0 =   // PER_ID_0
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t TZC_PID1_RESET_VALUE = 0xb4;
    template<uint32_t X>
    static constexpr uint32_t TZC_PID1_PER_ID_1 =   // PER_ID_1
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t TZC_PID2_RESET_VALUE = 0x2b;
    template<uint32_t X>
    static constexpr uint32_t TZC_PID2_PER_ID_2 =   // PER_ID_2
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t TZC_PID3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TZC_PID3_PER_ID_3 =   // PER_ID_3
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t TZC_CID0_RESET_VALUE = 0xd;
    template<uint32_t X>
    static constexpr uint32_t TZC_CID0_COMP_ID_0 =   // COMP_ID_0
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t TZC_CID1_RESET_VALUE = 0xf0;
    template<uint32_t X>
    static constexpr uint32_t TZC_CID1_COMP_ID_1 =   // COMP_ID_1
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t TZC_CID2_RESET_VALUE = 0x5;
    template<uint32_t X>
    static constexpr uint32_t TZC_CID2_COMP_ID_2 =   // COMP_ID_2
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t TZC_CID3_RESET_VALUE = 0xb1;
    template<uint32_t X>
    static constexpr uint32_t TZC_CID3_COMP_ID_3 =   // COMP_ID_3
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t TZC_FAIL_ADDRESS_LOW0_RESET_VALUE = 0x0;

    static constexpr uint32_t TZC_FAIL_ADDRESS_LOW1_RESET_VALUE = 0x0;

    static constexpr uint32_t TZC_REGION_TOP_LOW0_RESET_VALUE = 0xffffffff;
    template<uint32_t X>
    static constexpr uint32_t TZC_REGION_TOP_LOW0_TOP_ADDRESS_LOW =   // TOP_ADDRESS_LOW
        bit_field_t<12, 0xfffff>::value<X>();

    static constexpr uint32_t TZC_REGION_ID_ACCESS0_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TZC_REGION_ID_ACCESS0_NSAID_RD_EN =   // NSAID_RD_EN
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TZC_REGION_ID_ACCESS0_NSAID_WR_EN =   // NSAID_WR_EN
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t TZC_REGION_BASE_LOW1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TZC_REGION_BASE_LOW1_BASE_ADDRESS_LOW =   // BASE_ADDRESS_LOW
        bit_field_t<12, 0xfffff>::value<X>();

    static constexpr uint32_t TZC_REGION_TOP_LOW1_RESET_VALUE = 0xfff;
    template<uint32_t X>
    static constexpr uint32_t TZC_REGION_TOP_LOW1_TOP_ADDRESS_LOW =   // TOP_ADDRESS_LOW
        bit_field_t<12, 0xfffff>::value<X>();

    static constexpr uint32_t TZC_REGION_ID_ACCESS1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TZC_REGION_ID_ACCESS1_NSAID_RD_EN =   // NSAID_RD_EN
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TZC_REGION_ID_ACCESS1_NSAID_WR_EN =   // NSAID_WR_EN
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t TZC_REGION_BASE_LOW2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TZC_REGION_BASE_LOW2_BASE_ADDRESS_LOW =   // BASE_ADDRESS_LOW
        bit_field_t<12, 0xfffff>::value<X>();

    static constexpr uint32_t TZC_REGION_TOP_LOW2_RESET_VALUE = 0xfff;
    template<uint32_t X>
    static constexpr uint32_t TZC_REGION_TOP_LOW2_TOP_ADDRESS_LOW =   // TOP_ADDRESS_LOW
        bit_field_t<12, 0xfffff>::value<X>();

    static constexpr uint32_t TZC_REGION_ID_ACCESS2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TZC_REGION_ID_ACCESS2_NSAID_RD_EN =   // NSAID_RD_EN
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TZC_REGION_ID_ACCESS2_NSAID_WR_EN =   // NSAID_WR_EN
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t TZC_REGION_BASE_LOW3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TZC_REGION_BASE_LOW3_BASE_ADDRESS_LOW =   // BASE_ADDRESS_LOW
        bit_field_t<12, 0xfffff>::value<X>();

    static constexpr uint32_t TZC_REGION_TOP_LOW3_RESET_VALUE = 0xfff;
    template<uint32_t X>
    static constexpr uint32_t TZC_REGION_TOP_LOW3_TOP_ADDRESS_LOW =   // TOP_ADDRESS_LOW
        bit_field_t<12, 0xfffff>::value<X>();

    static constexpr uint32_t TZC_REGION_ID_ACCESS3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TZC_REGION_ID_ACCESS3_NSAID_RD_EN =   // NSAID_RD_EN
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TZC_REGION_ID_ACCESS3_NSAID_WR_EN =   // NSAID_WR_EN
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t TZC_REGION_BASE_LOW4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TZC_REGION_BASE_LOW4_BASE_ADDRESS_LOW =   // BASE_ADDRESS_LOW
        bit_field_t<12, 0xfffff>::value<X>();

    static constexpr uint32_t TZC_REGION_TOP_LOW4_RESET_VALUE = 0xfff;
    template<uint32_t X>
    static constexpr uint32_t TZC_REGION_TOP_LOW4_TOP_ADDRESS_LOW =   // TOP_ADDRESS_LOW
        bit_field_t<12, 0xfffff>::value<X>();

    static constexpr uint32_t TZC_REGION_ID_ACCESS4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TZC_REGION_ID_ACCESS4_NSAID_RD_EN =   // NSAID_RD_EN
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TZC_REGION_ID_ACCESS4_NSAID_WR_EN =   // NSAID_WR_EN
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t TZC_REGION_BASE_LOW5_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TZC_REGION_BASE_LOW5_BASE_ADDRESS_LOW =   // BASE_ADDRESS_LOW
        bit_field_t<12, 0xfffff>::value<X>();

    static constexpr uint32_t TZC_REGION_TOP_LOW5_RESET_VALUE = 0xfff;
    template<uint32_t X>
    static constexpr uint32_t TZC_REGION_TOP_LOW5_TOP_ADDRESS_LOW =   // TOP_ADDRESS_LOW
        bit_field_t<12, 0xfffff>::value<X>();

    static constexpr uint32_t TZC_REGION_ID_ACCESS5_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TZC_REGION_ID_ACCESS5_NSAID_RD_EN =   // NSAID_RD_EN
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TZC_REGION_ID_ACCESS5_NSAID_WR_EN =   // NSAID_WR_EN
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t TZC_REGION_BASE_LOW6_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TZC_REGION_BASE_LOW6_BASE_ADDRESS_LOW =   // BASE_ADDRESS_LOW
        bit_field_t<12, 0xfffff>::value<X>();

    static constexpr uint32_t TZC_REGION_TOP_LOW6_RESET_VALUE = 0xfff;
    template<uint32_t X>
    static constexpr uint32_t TZC_REGION_TOP_LOW6_TOP_ADDRESS_LOW =   // TOP_ADDRESS_LOW
        bit_field_t<12, 0xfffff>::value<X>();

    static constexpr uint32_t TZC_REGION_ID_ACCESS6_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TZC_REGION_ID_ACCESS6_NSAID_RD_EN =   // NSAID_RD_EN
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TZC_REGION_ID_ACCESS6_NSAID_WR_EN =   // NSAID_WR_EN
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t TZC_REGION_BASE_LOW7_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TZC_REGION_BASE_LOW7_BASE_ADDRESS_LOW =   // BASE_ADDRESS_LOW
        bit_field_t<12, 0xfffff>::value<X>();

    static constexpr uint32_t TZC_REGION_TOP_LOW7_RESET_VALUE = 0xfff;
    template<uint32_t X>
    static constexpr uint32_t TZC_REGION_TOP_LOW7_TOP_ADDRESS_LOW =   // TOP_ADDRESS_LOW
        bit_field_t<12, 0xfffff>::value<X>();

    static constexpr uint32_t TZC_REGION_ID_ACCESS7_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TZC_REGION_ID_ACCESS7_NSAID_RD_EN =   // NSAID_RD_EN
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TZC_REGION_ID_ACCESS7_NSAID_WR_EN =   // NSAID_WR_EN
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t TZC_REGION_BASE_LOW8_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TZC_REGION_BASE_LOW8_BASE_ADDRESS_LOW =   // BASE_ADDRESS_LOW
        bit_field_t<12, 0xfffff>::value<X>();

    static constexpr uint32_t TZC_REGION_TOP_LOW8_RESET_VALUE = 0xfff;
    template<uint32_t X>
    static constexpr uint32_t TZC_REGION_TOP_LOW8_TOP_ADDRESS_LOW =   // TOP_ADDRESS_LOW
        bit_field_t<12, 0xfffff>::value<X>();

    static constexpr uint32_t TZC_REGION_ID_ACCESS8_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TZC_REGION_ID_ACCESS8_NSAID_RD_EN =   // NSAID_RD_EN
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TZC_REGION_ID_ACCESS8_NSAID_WR_EN =   // NSAID_WR_EN
        bit_field_t<16, 0xffff>::value<X>();
};


template<>
struct peripheral_t<STM32MP15xxx, TZC>
{
    typedef stm32mp15xxx_tzc_t T;
    static T& V;
};

using tzc_t = peripheral_t<mcu_svd, TZC>;

