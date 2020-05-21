#pragma once

////
//
//      STM32MP1 DDRCTRL peripherals
//
////

////
//
//      DDRCTRL
//
////

struct stm32mp15xxx_ddrctrl_t
{
    volatile uint32_t DDRCTRL_MSTR;        // [read-write] DDRCTRL master register 0
    volatile uint32_t DDRCTRL_STAT;        // [read-only] DDRCTRL operating mode status register
    reserved_t<0x2> _0x10;
    volatile uint32_t DDRCTRL_MRCTRL0;     // [read-write] Mode Register Read/Write Control Register 0. Do not enable more than one of the following fields simultaneously: sw_init_int pda_en mpr_en
    volatile uint32_t DDRCTRL_MRCTRL1;     // [read-write] DDRCTRL mode register read/write control register 1
    volatile uint32_t DDRCTRL_MRSTAT;      // [read-only] DDRCTRL mode register read/write status register
    reserved_t<0x1> _0x20;
    volatile uint32_t DDRCTRL_DERATEEN;    // [read-write] DDRCTRL temperature derate enable register
    volatile uint32_t DDRCTRL_DERATEINT;   // [read-write] DDRCTRL temperature derate interval register
    reserved_t<0x2> _0x30;
    volatile uint32_t DDRCTRL_PWRCTL;      // [read-write] DDRCTRL low power control register
    volatile uint32_t DDRCTRL_PWRTMG;      // [read-write] DDRCTRL low power timing register
    volatile uint32_t DDRCTRL_HWLPCTL;     // [read-write] DDRCTRL hardware low power control register
    reserved_t<0x5> _0x50;
    volatile uint32_t DDRCTRL_RFSHCTL0;    // [read-write] DDRCTRL refresh control register 0
    reserved_t<0x3> _0x60;
    volatile uint32_t DDRCTRL_RFSHCTL3;    // [read-write] DDRCTRL refresh control register 3
    volatile uint32_t DDRCTRL_RFSHTMG;     // [read-write] DDRCTRL refresh timing register
    reserved_t<0x16> _0xc0;
    volatile uint32_t DDRCTRL_CRCPARCTL0;  // [read-write] DDRCTRL CRC parity control register 0
    reserved_t<0x2> _0xcc;
    volatile uint32_t DDRCTRL_CRCPARSTAT;  // [read-only] DDRCTRL CRC parity status register
    volatile uint32_t DDRCTRL_INIT0;       // [read-write] DDRCTRL SDRAM initialization register 0
    volatile uint32_t DDRCTRL_INIT1;       // [read-write] DDRCTRL SDRAM initialization register 1
    volatile uint32_t DDRCTRL_INIT2;       // [read-write] DDRCTRL SDRAM initialization register 2
    volatile uint32_t DDRCTRL_INIT3;       // [read-write] DDRCTRL SDRAM initialization register 3
    volatile uint32_t DDRCTRL_INIT4;       // [read-write] DDRCTRL SDRAM initialization register 4
    volatile uint32_t DDRCTRL_INIT5;       // [read-write] DDRCTRL SDRAM initialization register 5
    reserved_t<0x2> _0xf0;
    volatile uint32_t DDRCTRL_DIMMCTL;     // [read-write] DDRCTRL DIMM control register
    reserved_t<0x3> _0x100;
    volatile uint32_t DDRCTRL_DRAMTMG0;    // [read-write] DDRCTRL SDRAM timing register 0
    volatile uint32_t DDRCTRL_DRAMTMG1;    // [read-write] DDRCTRL SDRAM timing register 1
    volatile uint32_t DDRCTRL_DRAMTMG2;    // [read-write] DDRCTRL SDRAM timing register 2
    volatile uint32_t DDRCTRL_DRAMTMG3;    // [read-write] DDRCTRL SDRAM timing register 3
    volatile uint32_t DDRCTRL_DRAMTMG4;    // [read-write] DDRCTRL SDRAM timing register 4
    volatile uint32_t DDRCTRL_DRAMTMG5;    // [read-write] DDRCTRL SDRAM timing register 5
    volatile uint32_t DDRCTRL_DRAMTMG6;    // [read-write] DDRCTRL SDRAM timing register 6
    volatile uint32_t DDRCTRL_DRAMTMG7;    // [read-write] DDRCTRL SDRAM timing register 7
    volatile uint32_t DDRCTRL_DRAMTMG8;    // [read-write] DDRCTRL SDRAM timing register 8
    reserved_t<0x5> _0x138;
    volatile uint32_t DDRCTRL_DRAMTMG14;   // [read-write] DDRCTRL SDRAM timing register 14
    volatile uint32_t DDRCTRL_DRAMTMG15;   // [read-write] DDRCTRL SDRAM timing register 15
    reserved_t<0x10> _0x180;
    volatile uint32_t DDRCTRL_ZQCTL0;      // [read-write] DDRCTRL ZQ control register 0
    volatile uint32_t DDRCTRL_ZQCTL1;      // [read-write] DDRCTRL ZQ control register 1
    volatile uint32_t DDRCTRL_ZQCTL2;      // [read-write] DDRCTRL ZQ control register 2
    volatile uint32_t DDRCTRL_ZQSTAT;      // [read-only] DDRCTRL ZQ status register
    volatile uint32_t DDRCTRL_DFITMG0;     // [read-write] DDRCTRL DFI timing register 0
    volatile uint32_t DDRCTRL_DFITMG1;     // [read-write] DDRCTRL DFI timing register 1
    volatile uint32_t DDRCTRL_DFILPCFG0;   // [read-write] DDRCTRL low power configuration register 0
    reserved_t<0x1> _0x1a0;
    volatile uint32_t DDRCTRL_DFIUPD0;     // [read-write] DDRCTRL DFI update register 0
    volatile uint32_t DDRCTRL_DFIUPD1;     // [read-write] DDRCTRL DFI update register 1
    volatile uint32_t DDRCTRL_DFIUPD2;     // [read-write] DDRCTRL DFI update register 2
    reserved_t<0x1> _0x1b0;
    volatile uint32_t DDRCTRL_DFIMISC;     // [read-write] DDRCTRL DFI miscellaneous control register
    reserved_t<0x2> _0x1bc;
    volatile uint32_t DDRCTRL_DFISTAT;     // [read-only] DDRCTRL DFI status register
    reserved_t<0x1> _0x1c4;
    volatile uint32_t DDRCTRL_DFIPHYMSTR;  // [read-write] DDRCTRL DFI PHY master register
    reserved_t<0xf> _0x204;
    volatile uint32_t DDRCTRL_ADDRMAP1;    // [read-write] DDRCTRL address map register 1
    volatile uint32_t DDRCTRL_ADDRMAP2;    // [read-write] DDRCTRL address map register 2
    volatile uint32_t DDRCTRL_ADDRMAP3;    // [read-write] DDRCTRL address map register 3
    volatile uint32_t DDRCTRL_ADDRMAP4;    // [read-write] DDRCTRL address map register 4
    volatile uint32_t DDRCTRL_ADDRMAP5;    // [read-write] DDRCTRL address map register 5
    volatile uint32_t DDRCTRL_ADDRMAP6;    // [read-write] DDRCTRL address register 6
    reserved_t<0x2> _0x224;
    volatile uint32_t DDRCTRL_ADDRMAP9;    // [read-write] DDRCTRL address map register 9
    volatile uint32_t DDRCTRL_ADDRMAP10;   // [read-write] DDRCTRL address map register 10
    volatile uint32_t DDRCTRL_ADDRMAP11;   // [read-write] DDRCTRL address map register 11
    reserved_t<0x4> _0x240;
    volatile uint32_t DDRCTRL_ODTCFG;      // [read-write] DDRCTRL ODT configuration register
    volatile uint32_t DDRCTRL_ODTMAP;      // [read-write] DDRCTRL ODT/Rank map register
    reserved_t<0x2> _0x250;
    volatile uint32_t DDRCTRL_SCHED;       // [read-write] DDRCTRL scheduler control register
    volatile uint32_t DDRCTRL_SCHED1;      // [read-write] DDRCTRL scheduler control register 1
    reserved_t<0x1> _0x25c;
    volatile uint32_t DDRCTRL_PERFHPR1;    // [read-write] DDRCTRL high priority read CAM register 1
    reserved_t<0x1> _0x264;
    volatile uint32_t DDRCTRL_PERFLPR1;    // [read-write] DDRCTRL low priority read CAM register 1
    reserved_t<0x1> _0x26c;
    volatile uint32_t DDRCTRL_PERFWR1;     // [read-write] DDRCTRL write CAM register 1
    reserved_t<0x24> _0x300;
    volatile uint32_t DDRCTRL_DBG0;        // [read-write] DDRCTRL debug register 0
    volatile uint32_t DDRCTRL_DBG1;        // [read-write] DDRCTRL debug register 1
    volatile uint32_t DDRCTRL_DBGCAM;      // [read-only] DDRCTRL CAM debug register
    volatile uint32_t DDRCTRL_DBGCMD;      // [read-write] DDRCTRL command debug register
    volatile uint32_t DDRCTRL_DBGSTAT;     // [read-only] DDRCTRL status debug register
    reserved_t<0x3> _0x320;
    volatile uint32_t DDRCTRL_SWCTL;       // [read-write] DDRCTRL software register programming control enable
    volatile uint32_t DDRCTRL_SWSTAT;      // [read-only] DDRCTRL software register programming control status
    reserved_t<0x11> _0x36c;
    volatile uint32_t DDRCTRL_POISONCFG;   // [read-write] AXI Poison configuration register common for all AXI ports.
    volatile uint32_t DDRCTRL_POISONSTAT;  // [read-only] DDRCTRL AXI Poison status register
    reserved_t<0x22> _0x3fc;
    volatile uint32_t DDRCTRL_PSTAT;       // [read-only] DDRCTRL port status register
    volatile uint32_t DDRCTRL_PCCFG;       // [read-write] DDRCTRL port common configuration register
    volatile uint32_t DDRCTRL_PCFGR_0;     // [read-write] DDRCTRL port 0 configuration read register
    volatile uint32_t DDRCTRL_PCFGW_0;     // [read-write] DDRCTRL port 0 configuration write register
    reserved_t<0x21> _0x490;
    volatile uint32_t DDRCTRL_PCTRL_0;     // [read-write] DDRCTRL port 0 control register
    volatile uint32_t DDRCTRL_PCFGQOS0_0;  // [read-write] DDRCTRL port 0 read Q0S configuration register 0
    volatile uint32_t DDRCTRL_PCFGQOS1_0;  // [read-write] DDRCTRL port 0 read Q0S configuration register 1
    volatile uint32_t DDRCTRL_PCFGWQOS0_0; // [read-write] DDRCTRL port 0 write Q0S configuration register 0
    volatile uint32_t DDRCTRL_PCFGWQOS1_0; // [read-write] DDRCTRL port 0 write Q0S configuration register 1
    reserved_t<0x4> _0x4b4;
    volatile uint32_t DDRCTRL_PCFGR_1;     // [read-write] DDRCTRL port 1 configuration read register
    volatile uint32_t DDRCTRL_PCFGW_1;     // [read-write] DDRCTRL port 1 configuration write register
    reserved_t<0x21> _0x540;
    volatile uint32_t DDRCTRL_PCTRL_1;     // [read-write] DDRCTRL port 1 control register
    volatile uint32_t DDRCTRL_PCFGQOS0_1;  // [read-write] DDRCTRL port 1 read Q0S configuration register 0
    volatile uint32_t DDRCTRL_PCFGQOS1_1;  // [read-write] DDRCTRL port 1 read Q0S configuration register 1
    volatile uint32_t DDRCTRL_PCFGWQOS0_1; // [read-write] DDRCTRL port 1 write Q0S configuration register 0
    volatile uint32_t DDRCTRL_PCFGWQOS1_1; // [read-write] DDRCTRL port 1 write Q0S configuration register 1

    static constexpr uint32_t DDRCTRL_MSTR_RESET_VALUE = 0x40001;
    static constexpr uint32_t DDRCTRL_MSTR_DDR3 = 0x1;                // DDR3
    static constexpr uint32_t DDRCTRL_MSTR_LPDDR2 = 0x4;              // LPDDR2
    static constexpr uint32_t DDRCTRL_MSTR_LPDDR3 = 0x8;              // LPDDR3
    static constexpr uint32_t DDRCTRL_MSTR_BURSTCHOP = 0x200;         // BURSTCHOP
    static constexpr uint32_t DDRCTRL_MSTR_EN_2T_TIMING_MODE = 0x400; // EN_2T_TIMING_MODE
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_MSTR_DATA_BUS_WIDTH =           // DATA_BUS_WIDTH
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t DDRCTRL_MSTR_DLL_OFF_MODE = 0x8000;     // DLL_OFF_MODE
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_MSTR_BURST_RDWR =               // BURST_RDWR
        bit_field_t<16, 0xf>::value<X>();

    static constexpr uint32_t DDRCTRL_STAT_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_STAT_OPERATING_MODE =                // OPERATING_MODE
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_STAT_SELFREF_TYPE =                  // SELFREF_TYPE
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t DDRCTRL_STAT_SELFREF_CAM_NOT_EMPTY = 0x1000; // SELFREF_CAM_NOT_EMPTY

    static constexpr uint32_t DDRCTRL_MRCTRL0_RESET_VALUE = 0x10;
    static constexpr uint32_t DDRCTRL_MRCTRL0_MR_TYPE = 0x1;      // MR_TYPE
    static constexpr uint32_t DDRCTRL_MRCTRL0_MR_RANK = 0x10;     // MR_RANK
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_MRCTRL0_MR_ADDR =           // MR_ADDR
        bit_field_t<12, 0xf>::value<X>();
    static constexpr uint32_t DDRCTRL_MRCTRL0_MR_WR = 0x80000000; // MR_WR

    static constexpr uint32_t DDRCTRL_MRCTRL1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_MRCTRL1_MR_DATA =   // MR_DATA
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DDRCTRL_MRSTAT_RESET_VALUE = 0x0;
    static constexpr uint32_t DDRCTRL_MRSTAT_MR_WR_BUSY = 0x1; // MR_WR_BUSY

    static constexpr uint32_t DDRCTRL_DERATEEN_RESET_VALUE = 0x0;
    static constexpr uint32_t DDRCTRL_DERATEEN_DERATE_ENABLE = 0x1; // DERATE_ENABLE
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_DERATEEN_DERATE_VALUE =       // DERATE_VALUE
        bit_field_t<1, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_DERATEEN_DERATE_BYTE =        // DERATE_BYTE
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t DDRCTRL_DERATEINT_RESET_VALUE = 0x800000;

    static constexpr uint32_t DDRCTRL_PWRCTL_RESET_VALUE = 0x0;
    static constexpr uint32_t DDRCTRL_PWRCTL_SELFREF_EN = 0x1;              // SELFREF_EN
    static constexpr uint32_t DDRCTRL_PWRCTL_POWERDOWN_EN = 0x2;            // POWERDOWN_EN
    static constexpr uint32_t DDRCTRL_PWRCTL_DEEPPOWERDOWN_EN = 0x4;        // DEEPPOWERDOWN_EN
    static constexpr uint32_t DDRCTRL_PWRCTL_EN_DFI_DRAM_CLK_DISABLE = 0x8; // EN_DFI_DRAM_CLK_DISABLE
    static constexpr uint32_t DDRCTRL_PWRCTL_SELFREF_SW = 0x20;             // SELFREF_SW
    static constexpr uint32_t DDRCTRL_PWRCTL_DIS_CAM_DRAIN_SELFREF = 0x80;  // DIS_CAM_DRAIN_SELFREF

    static constexpr uint32_t DDRCTRL_PWRTMG_RESET_VALUE = 0x402010;
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_PWRTMG_POWERDOWN_TO_X32 =   // POWERDOWN_TO_X32
        bit_field_t<0, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_PWRTMG_T_DPD_X4096 =        // T_DPD_X4096
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_PWRTMG_SELFREF_TO_X32 =     // SELFREF_TO_X32
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t DDRCTRL_HWLPCTL_RESET_VALUE = 0x3;
    static constexpr uint32_t DDRCTRL_HWLPCTL_HW_LP_EN = 0x1;           // HW_LP_EN
    static constexpr uint32_t DDRCTRL_HWLPCTL_HW_LP_EXIT_IDLE_EN = 0x2; // HW_LP_EXIT_IDLE_EN
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_HWLPCTL_HW_LP_IDLE_X32 =          // HW_LP_IDLE_X32
        bit_field_t<16, 0xfff>::value<X>();

    static constexpr uint32_t DDRCTRL_RFSHCTL0_RESET_VALUE = 0x210000;
    static constexpr uint32_t DDRCTRL_RFSHCTL0_PER_BANK_REFRESH = 0x4; // PER_BANK_REFRESH
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_RFSHCTL0_REFRESH_BURST =         // REFRESH_BURST
        bit_field_t<4, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_RFSHCTL0_REFRESH_TO_X32 =        // REFRESH_TO_X32
        bit_field_t<12, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_RFSHCTL0_REFRESH_MARGIN =        // REFRESH_MARGIN
        bit_field_t<20, 0xf>::value<X>();

    static constexpr uint32_t DDRCTRL_RFSHCTL3_RESET_VALUE = 0x0;
    static constexpr uint32_t DDRCTRL_RFSHCTL3_DIS_AUTO_REFRESH = 0x1;     // DIS_AUTO_REFRESH
    static constexpr uint32_t DDRCTRL_RFSHCTL3_REFRESH_UPDATE_LEVEL = 0x2; // REFRESH_UPDATE_LEVEL

    static constexpr uint32_t DDRCTRL_RFSHTMG_RESET_VALUE = 0x62008c;
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_RFSHTMG_T_RFC_MIN =                    // T_RFC_MIN
        bit_field_t<0, 0x3ff>::value<X>();
    static constexpr uint32_t DDRCTRL_RFSHTMG_LPDDR3_TREFBW_EN = 0x8000;     // LPDDR3_TREFBW_EN
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_RFSHTMG_T_RFC_NOM_X1_X32 =             // T_RFC_NOM_X1_X32
        bit_field_t<16, 0xfff>::value<X>();
    static constexpr uint32_t DDRCTRL_RFSHTMG_T_RFC_NOM_X1_SEL = 0x80000000; // T_RFC_NOM_X1_SEL

    static constexpr uint32_t DDRCTRL_CRCPARCTL0_RESET_VALUE = 0x0;
    static constexpr uint32_t DDRCTRL_CRCPARCTL0_DFI_ALERT_ERR_INT_EN = 0x1;  // DFI_ALERT_ERR_INT_EN
    static constexpr uint32_t DDRCTRL_CRCPARCTL0_DFI_ALERT_ERR_INT_CLR = 0x2; // DFI_ALERT_ERR_INT_CLR
    static constexpr uint32_t DDRCTRL_CRCPARCTL0_DFI_ALERT_ERR_CNT_CLR = 0x4; // DFI_ALERT_ERR_CNT_CLR

    static constexpr uint32_t DDRCTRL_CRCPARSTAT_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_CRCPARSTAT_DFI_ALERT_ERR_CNT =          // DFI_ALERT_ERR_CNT
        bit_field_t<0, 0xffff>::value<X>();
    static constexpr uint32_t DDRCTRL_CRCPARSTAT_DFI_ALERT_ERR_INT = 0x10000; // DFI_ALERT_ERR_INT

    static constexpr uint32_t DDRCTRL_INIT0_RESET_VALUE = 0x2004e;
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_INIT0_PRE_CKE_X1024 =    // PRE_CKE_X1024
        bit_field_t<0, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_INIT0_POST_CKE_X1024 =   // POST_CKE_X1024
        bit_field_t<16, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_INIT0_SKIP_DRAM_INIT =   // SKIP_DRAM_INIT
        bit_field_t<30, 0x3>::value<X>();

    static constexpr uint32_t DDRCTRL_INIT1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_INIT1_PRE_OCD_X32 =       // PRE_OCD_X32
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_INIT1_DRAM_RSTN_X1024 =   // DRAM_RSTN_X1024
        bit_field_t<16, 0x1ff>::value<X>();

    static constexpr uint32_t DDRCTRL_INIT2_RESET_VALUE = 0xd05;
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_INIT2_MIN_STABLE_CLOCK_X1 =    // MIN_STABLE_CLOCK_X1
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_INIT2_IDLE_AFTER_RESET_X32 =   // IDLE_AFTER_RESET_X32
        bit_field_t<8, 0xff>::value<X>();

    static constexpr uint32_t DDRCTRL_INIT3_RESET_VALUE = 0x510;
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_INIT3_EMR =   // EMR
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_INIT3_MR =    // MR
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t DDRCTRL_INIT4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_INIT4_EMR3 =   // EMR3
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_INIT4_EMR2 =   // EMR2
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t DDRCTRL_INIT5_RESET_VALUE = 0x100004;
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_INIT5_MAX_AUTO_INIT_X1024 =   // MAX_AUTO_INIT_X1024
        bit_field_t<0, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_INIT5_DEV_ZQINIT_X32 =        // DEV_ZQINIT_X32
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t DDRCTRL_DIMMCTL_RESET_VALUE = 0x0;
    static constexpr uint32_t DDRCTRL_DIMMCTL_DIMM_STAGGER_CS_EN = 0x1; // DIMM_STAGGER_CS_EN
    static constexpr uint32_t DDRCTRL_DIMMCTL_DIMM_ADDR_MIRR_EN = 0x2;  // DIMM_ADDR_MIRR_EN

    static constexpr uint32_t DDRCTRL_DRAMTMG0_RESET_VALUE = 0xf101b0f;
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_DRAMTMG0_T_RAS_MIN =   // T_RAS_MIN
        bit_field_t<0, 0x3f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_DRAMTMG0_T_RAS_MAX =   // T_RAS_MAX
        bit_field_t<8, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_DRAMTMG0_T_FAW =       // T_FAW
        bit_field_t<16, 0x3f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_DRAMTMG0_WR2PRE =      // WR2PRE
        bit_field_t<24, 0x7f>::value<X>();

    static constexpr uint32_t DDRCTRL_DRAMTMG1_RESET_VALUE = 0x80414;
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_DRAMTMG1_T_RC =     // T_RC
        bit_field_t<0, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_DRAMTMG1_RD2PRE =   // RD2PRE
        bit_field_t<8, 0x3f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_DRAMTMG1_T_XP =     // T_XP
        bit_field_t<16, 0x1f>::value<X>();

    static constexpr uint32_t DDRCTRL_DRAMTMG2_RESET_VALUE = 0x305060d;
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_DRAMTMG2_WR2RD =           // WR2RD
        bit_field_t<0, 0x3f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_DRAMTMG2_RD2WR =           // RD2WR
        bit_field_t<8, 0x3f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_DRAMTMG2_READ_LATENCY =    // READ_LATENCY
        bit_field_t<16, 0x3f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_DRAMTMG2_WRITE_LATENCY =   // WRITE_LATENCY
        bit_field_t<24, 0x3f>::value<X>();

    static constexpr uint32_t DDRCTRL_DRAMTMG3_RESET_VALUE = 0x50400c;
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_DRAMTMG3_T_MOD =   // T_MOD
        bit_field_t<0, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_DRAMTMG3_T_MRD =   // T_MRD
        bit_field_t<12, 0x3f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_DRAMTMG3_T_MRW =   // T_MRW
        bit_field_t<20, 0x3ff>::value<X>();

    static constexpr uint32_t DDRCTRL_DRAMTMG4_RESET_VALUE = 0x5040405;
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_DRAMTMG4_T_RP =    // T_RP
        bit_field_t<0, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_DRAMTMG4_T_RRD =   // T_RRD
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_DRAMTMG4_T_CCD =   // T_CCD
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_DRAMTMG4_T_RCD =   // T_RCD
        bit_field_t<24, 0x1f>::value<X>();

    static constexpr uint32_t DDRCTRL_DRAMTMG5_RESET_VALUE = 0x5050403;
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_DRAMTMG5_T_CKE =     // T_CKE
        bit_field_t<0, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_DRAMTMG5_T_CKESR =   // T_CKESR
        bit_field_t<8, 0x3f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_DRAMTMG5_T_CKSRE =   // T_CKSRE
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_DRAMTMG5_T_CKSRX =   // T_CKSRX
        bit_field_t<24, 0xf>::value<X>();

    static constexpr uint32_t DDRCTRL_DRAMTMG6_RESET_VALUE = 0x2020005;
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_DRAMTMG6_T_CKCSX =    // T_CKCSX
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_DRAMTMG6_T_CKDPDX =   // T_CKDPDX
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_DRAMTMG6_T_CKDPDE =   // T_CKDPDE
        bit_field_t<24, 0xf>::value<X>();

    static constexpr uint32_t DDRCTRL_DRAMTMG7_RESET_VALUE = 0x202;
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_DRAMTMG7_T_CKPDX =   // T_CKPDX
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_DRAMTMG7_T_CKPDE =   // T_CKPDE
        bit_field_t<8, 0xf>::value<X>();

    static constexpr uint32_t DDRCTRL_DRAMTMG8_RESET_VALUE = 0x4405;
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_DRAMTMG8_T_XS_X32 =       // T_XS_X32
        bit_field_t<0, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_DRAMTMG8_T_XS_DLL_X32 =   // T_XS_DLL_X32
        bit_field_t<8, 0x7f>::value<X>();

    static constexpr uint32_t DDRCTRL_DRAMTMG14_RESET_VALUE = 0xa0;
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_DRAMTMG14_T_XSR =   // T_XSR
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t DDRCTRL_DRAMTMG15_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_DRAMTMG15_T_STAB_X32 =                   // T_STAB_X32
        bit_field_t<0, 0xff>::value<X>();
    static constexpr uint32_t DDRCTRL_DRAMTMG15_EN_DFI_LP_T_STAB = 0x80000000; // EN_DFI_LP_T_STAB

    static constexpr uint32_t DDRCTRL_ZQCTL0_RESET_VALUE = 0x2000040;
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_ZQCTL0_T_ZQ_SHORT_NOP =                 // T_ZQ_SHORT_NOP
        bit_field_t<0, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_ZQCTL0_T_ZQ_LONG_NOP =                  // T_ZQ_LONG_NOP
        bit_field_t<16, 0x7ff>::value<X>();
    static constexpr uint32_t DDRCTRL_ZQCTL0_ZQ_RESISTOR_SHARED = 0x20000000; // ZQ_RESISTOR_SHARED
    static constexpr uint32_t DDRCTRL_ZQCTL0_DIS_SRX_ZQCL = 0x40000000;       // DIS_SRX_ZQCL
    static constexpr uint32_t DDRCTRL_ZQCTL0_DIS_AUTO_ZQ = 0x80000000;        // DIS_AUTO_ZQ

    static constexpr uint32_t DDRCTRL_ZQCTL1_RESET_VALUE = 0x2000100;
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_ZQCTL1_T_ZQ_SHORT_INTERVAL_X1024 =   // T_ZQ_SHORT_INTERVAL_X1024
        bit_field_t<0, 0xfffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_ZQCTL1_T_ZQ_RESET_NOP =              // T_ZQ_RESET_NOP
        bit_field_t<20, 0x3ff>::value<X>();

    static constexpr uint32_t DDRCTRL_ZQCTL2_RESET_VALUE = 0x0;
    static constexpr uint32_t DDRCTRL_ZQCTL2_ZQ_RESET = 0x1; // ZQ_RESET

    static constexpr uint32_t DDRCTRL_ZQSTAT_RESET_VALUE = 0x0;
    static constexpr uint32_t DDRCTRL_ZQSTAT_ZQ_RESET_BUSY = 0x1; // ZQ_RESET_BUSY

    static constexpr uint32_t DDRCTRL_DFITMG0_RESET_VALUE = 0x7020002;
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_DFITMG0_DFI_TPHY_WRLAT =     // DFI_TPHY_WRLAT
        bit_field_t<0, 0x3f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_DFITMG0_DFI_TPHY_WRDATA =    // DFI_TPHY_WRDATA
        bit_field_t<8, 0x3f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_DFITMG0_DFI_T_RDDATA_EN =    // DFI_T_RDDATA_EN
        bit_field_t<16, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_DFITMG0_DFI_T_CTRL_DELAY =   // DFI_T_CTRL_DELAY
        bit_field_t<24, 0x1f>::value<X>();

    static constexpr uint32_t DDRCTRL_DFITMG1_RESET_VALUE = 0x404;
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_DFITMG1_DFI_T_DRAM_CLK_ENABLE =    // DFI_T_DRAM_CLK_ENABLE
        bit_field_t<0, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_DFITMG1_DFI_T_DRAM_CLK_DISABLE =   // DFI_T_DRAM_CLK_DISABLE
        bit_field_t<8, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_DFITMG1_DFI_T_WRDATA_DELAY =       // DFI_T_WRDATA_DELAY
        bit_field_t<16, 0x1f>::value<X>();

    static constexpr uint32_t DDRCTRL_DFILPCFG0_RESET_VALUE = 0x7000000;
    static constexpr uint32_t DDRCTRL_DFILPCFG0_DFI_LP_EN_PD = 0x1;      // DFI_LP_EN_PD
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_DFILPCFG0_DFI_LP_WAKEUP_PD =       // DFI_LP_WAKEUP_PD
        bit_field_t<4, 0xf>::value<X>();
    static constexpr uint32_t DDRCTRL_DFILPCFG0_DFI_LP_EN_SR = 0x100;    // DFI_LP_EN_SR
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_DFILPCFG0_DFI_LP_WAKEUP_SR =       // DFI_LP_WAKEUP_SR
        bit_field_t<12, 0xf>::value<X>();
    static constexpr uint32_t DDRCTRL_DFILPCFG0_DFI_LP_EN_DPD = 0x10000; // DFI_LP_EN_DPD
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_DFILPCFG0_DFI_LP_WAKEUP_DPD =      // DFI_LP_WAKEUP_DPD
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_DFILPCFG0_DFI_TLP_RESP =           // DFI_TLP_RESP
        bit_field_t<24, 0x1f>::value<X>();

    static constexpr uint32_t DDRCTRL_DFIUPD0_RESET_VALUE = 0x400003;
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_DFIUPD0_DFI_T_CTRLUP_MIN =                 // DFI_T_CTRLUP_MIN
        bit_field_t<0, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_DFIUPD0_DFI_T_CTRLUP_MAX =                 // DFI_T_CTRLUP_MAX
        bit_field_t<16, 0x3ff>::value<X>();
    static constexpr uint32_t DDRCTRL_DFIUPD0_CTRLUPD_PRE_SRX = 0x20000000;      // CTRLUPD_PRE_SRX
    static constexpr uint32_t DDRCTRL_DFIUPD0_DIS_AUTO_CTRLUPD_SRX = 0x40000000; // DIS_AUTO_CTRLUPD_SRX
    static constexpr uint32_t DDRCTRL_DFIUPD0_DIS_AUTO_CTRLUPD = 0x80000000;     // DIS_AUTO_CTRLUPD

    static constexpr uint32_t DDRCTRL_DFIUPD1_RESET_VALUE = 0x10001;
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_DFIUPD1_DFI_T_CTRLUPD_INTERVAL_MAX_X1024 =   // DFI_T_CTRLUPD_INTERVAL_MAX_X1024
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_DFIUPD1_DFI_T_CTRLUPD_INTERVAL_MIN_X1024 =   // DFI_T_CTRLUPD_INTERVAL_MIN_X1024
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t DDRCTRL_DFIUPD2_RESET_VALUE = 0x80000000;
    static constexpr uint32_t DDRCTRL_DFIUPD2_DFI_PHYUPD_EN = 0x80000000; // DFI_PHYUPD_EN

    static constexpr uint32_t DDRCTRL_DFIMISC_RESET_VALUE = 0x1;
    static constexpr uint32_t DDRCTRL_DFIMISC_DFI_INIT_COMPLETE_EN = 0x1; // DFI_INIT_COMPLETE_EN
    static constexpr uint32_t DDRCTRL_DFIMISC_CTL_IDLE_EN = 0x10;         // CTL_IDLE_EN
    static constexpr uint32_t DDRCTRL_DFIMISC_DFI_INIT_START = 0x20;      // DFI_INIT_START
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_DFIMISC_DFI_FREQUENCY =             // DFI_FREQUENCY
        bit_field_t<8, 0x1f>::value<X>();

    static constexpr uint32_t DDRCTRL_DFISTAT_RESET_VALUE = 0x0;
    static constexpr uint32_t DDRCTRL_DFISTAT_DFI_INIT_COMPLETE = 0x1; // DFI_INIT_COMPLETE
    static constexpr uint32_t DDRCTRL_DFISTAT_DFI_LP_ACK = 0x2;        // DFI_LP_ACK

    static constexpr uint32_t DDRCTRL_DFIPHYMSTR_RESET_VALUE = 0x1;
    static constexpr uint32_t DDRCTRL_DFIPHYMSTR_DFI_PHYMSTR_EN = 0x1; // DFI_PHYMSTR_EN

    static constexpr uint32_t DDRCTRL_ADDRMAP1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_ADDRMAP1_ADDRMAP_BANK_B0 =   // ADDRMAP_BANK_B0
        bit_field_t<0, 0x3f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_ADDRMAP1_ADDRMAP_BANK_B1 =   // ADDRMAP_BANK_B1
        bit_field_t<8, 0x3f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_ADDRMAP1_ADDRMAP_BANK_B2 =   // ADDRMAP_BANK_B2
        bit_field_t<16, 0x3f>::value<X>();

    static constexpr uint32_t DDRCTRL_ADDRMAP2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_ADDRMAP2_ADDRMAP_COL_B2 =   // ADDRMAP_COL_B2
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_ADDRMAP2_ADDRMAP_COL_B3 =   // ADDRMAP_COL_B3
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_ADDRMAP2_ADDRMAP_COL_B4 =   // ADDRMAP_COL_B4
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_ADDRMAP2_ADDRMAP_COL_B5 =   // ADDRMAP_COL_B5
        bit_field_t<24, 0xf>::value<X>();

    static constexpr uint32_t DDRCTRL_ADDRMAP3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_ADDRMAP3_ADDRMAP_COL_B6 =   // ADDRMAP_COL_B6
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_ADDRMAP3_ADDRMAP_COL_B7 =   // ADDRMAP_COL_B7
        bit_field_t<8, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_ADDRMAP3_ADDRMAP_COL_B8 =   // ADDRMAP_COL_B8
        bit_field_t<16, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_ADDRMAP3_ADDRMAP_COL_B9 =   // ADDRMAP_COL_B9
        bit_field_t<24, 0x1f>::value<X>();

    static constexpr uint32_t DDRCTRL_ADDRMAP4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_ADDRMAP4_ADDRMAP_COL_B10 =   // ADDRMAP_COL_B10
        bit_field_t<0, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_ADDRMAP4_ADDRMAP_COL_B11 =   // ADDRMAP_COL_B11
        bit_field_t<8, 0x1f>::value<X>();

    static constexpr uint32_t DDRCTRL_ADDRMAP5_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_ADDRMAP5_ADDRMAP_ROW_B0 =      // ADDRMAP_ROW_B0
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_ADDRMAP5_ADDRMAP_ROW_B1 =      // ADDRMAP_ROW_B1
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_ADDRMAP5_ADDRMAP_ROW_B2_10 =   // ADDRMAP_ROW_B2_10
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_ADDRMAP5_ADDRMAP_ROW_B11 =     // ADDRMAP_ROW_B11
        bit_field_t<24, 0xf>::value<X>();

    static constexpr uint32_t DDRCTRL_ADDRMAP6_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_ADDRMAP6_ADDRMAP_ROW_B12 =             // ADDRMAP_ROW_B12
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_ADDRMAP6_ADDRMAP_ROW_B13 =             // ADDRMAP_ROW_B13
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_ADDRMAP6_ADDRMAP_ROW_B14 =             // ADDRMAP_ROW_B14
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_ADDRMAP6_ADDRMAP_ROW_B15 =             // ADDRMAP_ROW_B15
        bit_field_t<24, 0xf>::value<X>();
    static constexpr uint32_t DDRCTRL_ADDRMAP6_LPDDR3_6GB_12GB = 0x80000000; // LPDDR3_6GB_12GB

    static constexpr uint32_t DDRCTRL_ADDRMAP9_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_ADDRMAP9_ADDRMAP_ROW_B2 =   // ADDRMAP_ROW_B2
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_ADDRMAP9_ADDRMAP_ROW_B3 =   // ADDRMAP_ROW_B3
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_ADDRMAP9_ADDRMAP_ROW_B4 =   // ADDRMAP_ROW_B4
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_ADDRMAP9_ADDRMAP_ROW_B5 =   // ADDRMAP_ROW_B5
        bit_field_t<24, 0xf>::value<X>();

    static constexpr uint32_t DDRCTRL_ADDRMAP10_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_ADDRMAP10_ADDRMAP_ROW_B6 =   // ADDRMAP_ROW_B6
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_ADDRMAP10_ADDRMAP_ROW_B7 =   // ADDRMAP_ROW_B7
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_ADDRMAP10_ADDRMAP_ROW_B8 =   // ADDRMAP_ROW_B8
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_ADDRMAP10_ADDRMAP_ROW_B9 =   // ADDRMAP_ROW_B9
        bit_field_t<24, 0xf>::value<X>();

    static constexpr uint32_t DDRCTRL_ADDRMAP11_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_ADDRMAP11_ADDRMAP_ROW_B10 =   // ADDRMAP_ROW_B10
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t DDRCTRL_ODTCFG_RESET_VALUE = 0x4000400;
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_ODTCFG_RD_ODT_DELAY =   // RD_ODT_DELAY
        bit_field_t<2, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_ODTCFG_RD_ODT_HOLD =    // RD_ODT_HOLD
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_ODTCFG_WR_ODT_DELAY =   // WR_ODT_DELAY
        bit_field_t<16, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_ODTCFG_WR_ODT_HOLD =    // WR_ODT_HOLD
        bit_field_t<24, 0xf>::value<X>();

    static constexpr uint32_t DDRCTRL_ODTMAP_RESET_VALUE = 0x11;
    static constexpr uint32_t DDRCTRL_ODTMAP_RANK0_WR_ODT = 0x1;  // RANK0_WR_ODT
    static constexpr uint32_t DDRCTRL_ODTMAP_RANK0_RD_ODT = 0x10; // RANK0_RD_ODT

    static constexpr uint32_t DDRCTRL_SCHED_RESET_VALUE = 0x805;
    static constexpr uint32_t DDRCTRL_SCHED_FORCE_LOW_PRI_N = 0x1;     // FORCE_LOW_PRI_N
    static constexpr uint32_t DDRCTRL_SCHED_PREFER_WRITE = 0x2;        // PREFER_WRITE
    static constexpr uint32_t DDRCTRL_SCHED_PAGECLOSE = 0x4;           // PAGECLOSE
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_SCHED_LPR_NUM_ENTRIES =          // LPR_NUM_ENTRIES
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_SCHED_GO2CRITICAL_HYSTERESIS =   // GO2CRITICAL_HYSTERESIS
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_SCHED_RDWR_IDLE_GAP =            // RDWR_IDLE_GAP
        bit_field_t<24, 0x7f>::value<X>();

    static constexpr uint32_t DDRCTRL_SCHED1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_SCHED1_PAGECLOSE_TIMER =   // PAGECLOSE_TIMER
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DDRCTRL_PERFHPR1_RESET_VALUE = 0xf000001;
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_PERFHPR1_HPR_MAX_STARVE =        // HPR_MAX_STARVE
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_PERFHPR1_HPR_XACT_RUN_LENGTH =   // HPR_XACT_RUN_LENGTH
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t DDRCTRL_PERFLPR1_RESET_VALUE = 0xf00007f;
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_PERFLPR1_LPR_MAX_STARVE =        // LPR_MAX_STARVE
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_PERFLPR1_LPR_XACT_RUN_LENGTH =   // LPR_XACT_RUN_LENGTH
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t DDRCTRL_PERFWR1_RESET_VALUE = 0xf00007f;
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_PERFWR1_W_MAX_STARVE =        // W_MAX_STARVE
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_PERFWR1_W_XACT_RUN_LENGTH =   // W_XACT_RUN_LENGTH
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t DDRCTRL_DBG0_RESET_VALUE = 0x0;
    static constexpr uint32_t DDRCTRL_DBG0_DIS_WC = 0x1;                  // DIS_WC
    static constexpr uint32_t DDRCTRL_DBG0_DIS_COLLISION_PAGE_OPT = 0x10; // DIS_COLLISION_PAGE_OPT

    static constexpr uint32_t DDRCTRL_DBG1_RESET_VALUE = 0x0;
    static constexpr uint32_t DDRCTRL_DBG1_DIS_DQ = 0x1;  // DIS_DQ
    static constexpr uint32_t DDRCTRL_DBG1_DIS_HIF = 0x2; // DIS_HIF

    static constexpr uint32_t DDRCTRL_DBGCAM_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_DBGCAM_DBG_HPR_Q_DEPTH =                    // DBG_HPR_Q_DEPTH
        bit_field_t<0, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_DBGCAM_DBG_LPR_Q_DEPTH =                    // DBG_LPR_Q_DEPTH
        bit_field_t<8, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_DBGCAM_DBG_W_Q_DEPTH =                      // DBG_W_Q_DEPTH
        bit_field_t<16, 0x1f>::value<X>();
    static constexpr uint32_t DDRCTRL_DBGCAM_DBG_STALL = 0x1000000;               // DBG_STALL
    static constexpr uint32_t DDRCTRL_DBGCAM_DBG_RD_Q_EMPTY = 0x2000000;          // DBG_RD_Q_EMPTY
    static constexpr uint32_t DDRCTRL_DBGCAM_DBG_WR_Q_EMPTY = 0x4000000;          // DBG_WR_Q_EMPTY
    static constexpr uint32_t DDRCTRL_DBGCAM_RD_DATA_PIPELINE_EMPTY = 0x10000000; // RD_DATA_PIPELINE_EMPTY
    static constexpr uint32_t DDRCTRL_DBGCAM_WR_DATA_PIPELINE_EMPTY = 0x20000000; // WR_DATA_PIPELINE_EMPTY

    static constexpr uint32_t DDRCTRL_DBGCMD_RESET_VALUE = 0x0;
    static constexpr uint32_t DDRCTRL_DBGCMD_RANK0_REFRESH = 0x1;   // RANK0_REFRESH
    static constexpr uint32_t DDRCTRL_DBGCMD_ZQ_CALIB_SHORT = 0x10; // ZQ_CALIB_SHORT
    static constexpr uint32_t DDRCTRL_DBGCMD_CTRLUPD = 0x20;        // CTRLUPD

    static constexpr uint32_t DDRCTRL_DBGSTAT_RESET_VALUE = 0x0;
    static constexpr uint32_t DDRCTRL_DBGSTAT_RANK0_REFRESH_BUSY = 0x1;   // RANK0_REFRESH_BUSY
    static constexpr uint32_t DDRCTRL_DBGSTAT_ZQ_CALIB_SHORT_BUSY = 0x10; // ZQ_CALIB_SHORT_BUSY
    static constexpr uint32_t DDRCTRL_DBGSTAT_CTRLUPD_BUSY = 0x20;        // CTRLUPD_BUSY

    static constexpr uint32_t DDRCTRL_SWCTL_RESET_VALUE = 0x1;
    static constexpr uint32_t DDRCTRL_SWCTL_SW_DONE = 0x1; // SW_DONE

    static constexpr uint32_t DDRCTRL_SWSTAT_RESET_VALUE = 0x1;
    static constexpr uint32_t DDRCTRL_SWSTAT_SW_DONE_ACK = 0x1; // SW_DONE_ACK

    static constexpr uint32_t DDRCTRL_POISONCFG_RESET_VALUE = 0x110011;
    static constexpr uint32_t DDRCTRL_POISONCFG_WR_POISON_SLVERR_EN = 0x1;      // WR_POISON_SLVERR_EN
    static constexpr uint32_t DDRCTRL_POISONCFG_WR_POISON_INTR_EN = 0x10;       // WR_POISON_INTR_EN
    static constexpr uint32_t DDRCTRL_POISONCFG_WR_POISON_INTR_CLR = 0x100;     // WR_POISON_INTR_CLR
    static constexpr uint32_t DDRCTRL_POISONCFG_RD_POISON_SLVERR_EN = 0x10000;  // RD_POISON_SLVERR_EN
    static constexpr uint32_t DDRCTRL_POISONCFG_RD_POISON_INTR_EN = 0x100000;   // RD_POISON_INTR_EN
    static constexpr uint32_t DDRCTRL_POISONCFG_RD_POISON_INTR_CLR = 0x1000000; // RD_POISON_INTR_CLR

    static constexpr uint32_t DDRCTRL_POISONSTAT_RESET_VALUE = 0x0;
    static constexpr uint32_t DDRCTRL_POISONSTAT_WR_POISON_INTR_0 = 0x1;     // WR_POISON_INTR_0
    static constexpr uint32_t DDRCTRL_POISONSTAT_WR_POISON_INTR_1 = 0x2;     // WR_POISON_INTR_1
    static constexpr uint32_t DDRCTRL_POISONSTAT_RD_POISON_INTR_0 = 0x10000; // RD_POISON_INTR_0
    static constexpr uint32_t DDRCTRL_POISONSTAT_RD_POISON_INTR_1 = 0x20000; // RD_POISON_INTR_1

    static constexpr uint32_t DDRCTRL_PSTAT_RESET_VALUE = 0x0;
    static constexpr uint32_t DDRCTRL_PSTAT_RD_PORT_BUSY_0 = 0x1;     // RD_PORT_BUSY_0
    static constexpr uint32_t DDRCTRL_PSTAT_RD_PORT_BUSY_1 = 0x2;     // RD_PORT_BUSY_1
    static constexpr uint32_t DDRCTRL_PSTAT_WR_PORT_BUSY_0 = 0x10000; // WR_PORT_BUSY_0
    static constexpr uint32_t DDRCTRL_PSTAT_WR_PORT_BUSY_1 = 0x20000; // WR_PORT_BUSY_1

    static constexpr uint32_t DDRCTRL_PCCFG_RESET_VALUE = 0x0;
    static constexpr uint32_t DDRCTRL_PCCFG_GO2CRITICAL_EN = 0x1;   // GO2CRITICAL_EN
    static constexpr uint32_t DDRCTRL_PCCFG_PAGEMATCH_LIMIT = 0x10; // PAGEMATCH_LIMIT
    static constexpr uint32_t DDRCTRL_PCCFG_BL_EXP_MODE = 0x100;    // BL_EXP_MODE

    static constexpr uint32_t DDRCTRL_PCFGR_0_RESET_VALUE = 0x4000;
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_PCFGR_0_RD_PORT_PRIORITY =             // RD_PORT_PRIORITY
        bit_field_t<0, 0x3ff>::value<X>();
    static constexpr uint32_t DDRCTRL_PCFGR_0_RD_PORT_AGING_EN = 0x1000;     // RD_PORT_AGING_EN
    static constexpr uint32_t DDRCTRL_PCFGR_0_RD_PORT_URGENT_EN = 0x2000;    // RD_PORT_URGENT_EN
    static constexpr uint32_t DDRCTRL_PCFGR_0_RD_PORT_PAGEMATCH_EN = 0x4000; // RD_PORT_PAGEMATCH_EN
    static constexpr uint32_t DDRCTRL_PCFGR_0_RDWR_ORDERED_EN = 0x10000;     // RDWR_ORDERED_EN

    static constexpr uint32_t DDRCTRL_PCFGW_0_RESET_VALUE = 0x4000;
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_PCFGW_0_WR_PORT_PRIORITY =             // WR_PORT_PRIORITY
        bit_field_t<0, 0x3ff>::value<X>();
    static constexpr uint32_t DDRCTRL_PCFGW_0_WR_PORT_AGING_EN = 0x1000;     // WR_PORT_AGING_EN
    static constexpr uint32_t DDRCTRL_PCFGW_0_WR_PORT_URGENT_EN = 0x2000;    // WR_PORT_URGENT_EN
    static constexpr uint32_t DDRCTRL_PCFGW_0_WR_PORT_PAGEMATCH_EN = 0x4000; // WR_PORT_PAGEMATCH_EN

    static constexpr uint32_t DDRCTRL_PCTRL_0_RESET_VALUE = 0x0;
    static constexpr uint32_t DDRCTRL_PCTRL_0_PORT_EN = 0x1; // PORT_EN

    static constexpr uint32_t DDRCTRL_PCFGQOS0_0_RESET_VALUE = 0x2000e00;
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_PCFGQOS0_0_RQOS_MAP_LEVEL1 =    // RQOS_MAP_LEVEL1
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_PCFGQOS0_0_RQOS_MAP_LEVEL2 =    // RQOS_MAP_LEVEL2
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_PCFGQOS0_0_RQOS_MAP_REGION0 =   // RQOS_MAP_REGION0
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_PCFGQOS0_0_RQOS_MAP_REGION1 =   // RQOS_MAP_REGION1
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_PCFGQOS0_0_RQOS_MAP_REGION2 =   // RQOS_MAP_REGION2
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t DDRCTRL_PCFGQOS1_0_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_PCFGQOS1_0_RQOS_MAP_TIMEOUTB =   // RQOS_MAP_TIMEOUTB
        bit_field_t<0, 0x7ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_PCFGQOS1_0_RQOS_MAP_TIMEOUTR =   // RQOS_MAP_TIMEOUTR
        bit_field_t<16, 0x7ff>::value<X>();

    static constexpr uint32_t DDRCTRL_PCFGWQOS0_0_RESET_VALUE = 0xe00;
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_PCFGWQOS0_0_WQOS_MAP_LEVEL1 =    // WQOS_MAP_LEVEL1
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_PCFGWQOS0_0_WQOS_MAP_LEVEL2 =    // WQOS_MAP_LEVEL2
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_PCFGWQOS0_0_WQOS_MAP_REGION0 =   // WQOS_MAP_REGION0
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_PCFGWQOS0_0_WQOS_MAP_REGION1 =   // WQOS_MAP_REGION1
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_PCFGWQOS0_0_WQOS_MAP_REGION2 =   // WQOS_MAP_REGION2
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t DDRCTRL_PCFGWQOS1_0_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_PCFGWQOS1_0_WQOS_MAP_TIMEOUT1 =   // WQOS_MAP_TIMEOUT1
        bit_field_t<0, 0x7ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_PCFGWQOS1_0_WQOS_MAP_TIMEOUT2 =   // WQOS_MAP_TIMEOUT2
        bit_field_t<16, 0x7ff>::value<X>();

    static constexpr uint32_t DDRCTRL_PCFGR_1_RESET_VALUE = 0x4000;
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_PCFGR_1_RD_PORT_PRIORITY =             // RD_PORT_PRIORITY
        bit_field_t<0, 0x3ff>::value<X>();
    static constexpr uint32_t DDRCTRL_PCFGR_1_RD_PORT_AGING_EN = 0x1000;     // RD_PORT_AGING_EN
    static constexpr uint32_t DDRCTRL_PCFGR_1_RD_PORT_URGENT_EN = 0x2000;    // RD_PORT_URGENT_EN
    static constexpr uint32_t DDRCTRL_PCFGR_1_RD_PORT_PAGEMATCH_EN = 0x4000; // RD_PORT_PAGEMATCH_EN
    static constexpr uint32_t DDRCTRL_PCFGR_1_RDWR_ORDERED_EN = 0x10000;     // RDWR_ORDERED_EN

    static constexpr uint32_t DDRCTRL_PCFGW_1_RESET_VALUE = 0x4000;
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_PCFGW_1_WR_PORT_PRIORITY =             // WR_PORT_PRIORITY
        bit_field_t<0, 0x3ff>::value<X>();
    static constexpr uint32_t DDRCTRL_PCFGW_1_WR_PORT_AGING_EN = 0x1000;     // WR_PORT_AGING_EN
    static constexpr uint32_t DDRCTRL_PCFGW_1_WR_PORT_URGENT_EN = 0x2000;    // WR_PORT_URGENT_EN
    static constexpr uint32_t DDRCTRL_PCFGW_1_WR_PORT_PAGEMATCH_EN = 0x4000; // WR_PORT_PAGEMATCH_EN

    static constexpr uint32_t DDRCTRL_PCTRL_1_RESET_VALUE = 0x0;
    static constexpr uint32_t DDRCTRL_PCTRL_1_PORT_EN = 0x1; // PORT_EN

    static constexpr uint32_t DDRCTRL_PCFGQOS0_1_RESET_VALUE = 0x2000e00;
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_PCFGQOS0_1_RQOS_MAP_LEVEL1 =    // RQOS_MAP_LEVEL1
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_PCFGQOS0_1_RQOS_MAP_LEVEL2 =    // RQOS_MAP_LEVEL2
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_PCFGQOS0_1_RQOS_MAP_REGION0 =   // RQOS_MAP_REGION0
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_PCFGQOS0_1_RQOS_MAP_REGION1 =   // RQOS_MAP_REGION1
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_PCFGQOS0_1_RQOS_MAP_REGION2 =   // RQOS_MAP_REGION2
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t DDRCTRL_PCFGQOS1_1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_PCFGQOS1_1_RQOS_MAP_TIMEOUTB =   // RQOS_MAP_TIMEOUTB
        bit_field_t<0, 0x7ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_PCFGQOS1_1_RQOS_MAP_TIMEOUTR =   // RQOS_MAP_TIMEOUTR
        bit_field_t<16, 0x7ff>::value<X>();

    static constexpr uint32_t DDRCTRL_PCFGWQOS0_1_RESET_VALUE = 0xe00;
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_PCFGWQOS0_1_WQOS_MAP_LEVEL1 =    // WQOS_MAP_LEVEL1
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_PCFGWQOS0_1_WQOS_MAP_LEVEL2 =    // WQOS_MAP_LEVEL2
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_PCFGWQOS0_1_WQOS_MAP_REGION0 =   // WQOS_MAP_REGION0
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_PCFGWQOS0_1_WQOS_MAP_REGION1 =   // WQOS_MAP_REGION1
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_PCFGWQOS0_1_WQOS_MAP_REGION2 =   // WQOS_MAP_REGION2
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t DDRCTRL_PCFGWQOS1_1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_PCFGWQOS1_1_WQOS_MAP_TIMEOUT1 =   // WQOS_MAP_TIMEOUT1
        bit_field_t<0, 0x7ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DDRCTRL_PCFGWQOS1_1_WQOS_MAP_TIMEOUT2 =   // WQOS_MAP_TIMEOUT2
        bit_field_t<16, 0x7ff>::value<X>();
};


template<>
struct peripheral_t<STM32MP15xxx, DDRCTRL>
{
    typedef stm32mp15xxx_ddrctrl_t T;
    static T& V;
};

using ddrctrl_t = peripheral_t<mcu_svd, DDRCTRL>;

