#pragma once

////
//
//      STM32H7 FDCAN peripherals
//
////

////
//
//      CCU registers
//
////

struct stm32h742x_can_ccu_t
{
    volatile uint32_t CREL;  // [read-write] Clock Calibration Unit Core Release Register
    volatile uint32_t CCFG;  // [read-write] Calibration Configuration Register
    volatile uint32_t CSTAT; // [read-write] Calibration Status Register
    volatile uint32_t CWD;   // [read-write] Calibration Watchdog Register
    volatile uint32_t IR;    // [read-write] Clock Calibration Unit Interrupt Register
    volatile uint32_t IE;    // [read-write] Clock Calibration Unit Interrupt Enable Register

    static constexpr uint32_t CREL_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CREL_DAY =       // Time Stamp Day
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CREL_MON =       // Time Stamp Month
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CREL_YEAR =      // Time Stamp Year
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CREL_SUBSTEP =   // Sub-step of Core Release
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CREL_STEP =      // Step of Core Release
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CREL_REL =       // Core Release
        bit_field_t<28, 0xf>::value<X>();

    static constexpr uint32_t CCFG_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCFG_TQBT =            // Time Quanta per Bit Time
        bit_field_t<0, 0x1f>::value<X>();
    static constexpr uint32_t CCFG_BCC = 0x40;       // Bypass Clock Calibration
    static constexpr uint32_t CCFG_CFL = 0x80;       // Calibration Field Length
    template<uint32_t X>
    static constexpr uint32_t CCFG_OCPM =            // Oscillator Clock Periods Minimum
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCFG_CDIV =            // Clock Divider
        bit_field_t<16, 0xf>::value<X>();
    static constexpr uint32_t CCFG_SWR = 0x80000000; // Software Reset

    static constexpr uint32_t CSTAT_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CSTAT_OCPC =   // Oscillator Clock Period Counter
        bit_field_t<0, 0x3ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CSTAT_TQC =    // Time Quanta Counter
        bit_field_t<18, 0x7ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CSTAT_CALS =   // Calibration State
        bit_field_t<30, 0x3>::value<X>();

    static constexpr uint32_t CWD_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CWD_WDC =   // WDC
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CWD_WDV =   // WDV
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t IR_RESET_VALUE = 0x0;
    static constexpr uint32_t IR_CWE = 0x1; // Calibration Watchdog Event
    static constexpr uint32_t IR_CSC = 0x2; // Calibration State Changed

    static constexpr uint32_t IE_RESET_VALUE = 0x0;
    static constexpr uint32_t IE_CWEE = 0x1; // Calibration Watchdog Event Enable
    static constexpr uint32_t IE_CSCE = 0x2; // Calibration State Changed Enable
};


////
//
//      CCU registers
//
////

struct stm32h7a3x_can_ccu_t
{
    volatile uint32_t CREL;  // [read-write] Clock Calibration Unit Core Release Register
    volatile uint32_t CCFG;  // [read-write] Calibration Configuration Register
    volatile uint32_t CSTAT; // [read-write] Calibration Status Register
    volatile uint32_t CWD;   // [read-write] Calibration Watchdog Register
    volatile uint32_t IR;    // [read-write] Clock Calibration Unit Interrupt Register
    volatile uint32_t IE;    // [read-write] Clock Calibration Unit Interrupt Enable Register

    static constexpr uint32_t CREL_RESET_VALUE = 0x11141218;
    template<uint32_t X>
    static constexpr uint32_t CREL_DAY =       // Time Stamp Day
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CREL_MON =       // Time Stamp Month
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CREL_YEAR =      // Time Stamp Year
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CREL_SUBSTEP =   // Sub-step of Core Release
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CREL_STEP =      // Step of Core Release
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CREL_REL =       // Core Release
        bit_field_t<28, 0xf>::value<X>();

    static constexpr uint32_t CCFG_RESET_VALUE = 0x4;
    template<uint32_t X>
    static constexpr uint32_t CCFG_TQBT =            // Time Quanta per Bit Time
        bit_field_t<0, 0x1f>::value<X>();
    static constexpr uint32_t CCFG_BCC = 0x40;       // Bypass Clock Calibration
    static constexpr uint32_t CCFG_CFL = 0x80;       // Calibration Field Length
    template<uint32_t X>
    static constexpr uint32_t CCFG_OCPM =            // Oscillator Clock Periods Minimum
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCFG_CDIV =            // Clock Divider
        bit_field_t<16, 0xf>::value<X>();
    static constexpr uint32_t CCFG_SWR = 0x80000000; // Software Reset

    static constexpr uint32_t CSTAT_RESET_VALUE = 0x203ffff;
    template<uint32_t X>
    static constexpr uint32_t CSTAT_OCPC =   // Oscillator Clock Period Counter
        bit_field_t<0, 0x3ffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CSTAT_TQC =    // Time Quanta Counter
        bit_field_t<18, 0x7ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CSTAT_CALS =   // Calibration State
        bit_field_t<30, 0x3>::value<X>();

    static constexpr uint32_t CWD_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CWD_WDC =   // WDC
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CWD_WDV =   // WDV
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t IR_RESET_VALUE = 0x0;
    static constexpr uint32_t IR_CWE = 0x1; // Calibration Watchdog Event
    static constexpr uint32_t IR_CSC = 0x2; // Calibration State Changed

    static constexpr uint32_t IE_RESET_VALUE = 0x0;
    static constexpr uint32_t IE_CWEE = 0x1; // Calibration Watchdog Event Enable
    static constexpr uint32_t IE_CSCE = 0x2; // Calibration State Changed Enable
};


////
//
//      FDCAN1
//
////

struct stm32h7a3x_fdcan_t
{
    volatile uint32_t FDCAN_CREL;   // [read-only] FDCAN Core Release Register
    volatile uint32_t FDCAN_ENDN;   // [read-only] FDCAN Core Release Register
    reserved_t<0x1> _0xc;
    volatile uint32_t FDCAN_DBTP;   // [read-only] FDCAN Data Bit Timing and Prescaler Register
    volatile uint32_t FDCAN_TEST;   // [read-only] FDCAN Test Register
    volatile uint32_t FDCAN_RWD;    // [read-only] FDCAN RAM Watchdog Register
    volatile uint32_t FDCAN_CCCR;   // [read-write] FDCAN CC Control Register
    volatile uint32_t FDCAN_NBTP;   // [read-write] FDCAN Nominal Bit Timing and Prescaler Register
    volatile uint32_t FDCAN_TSCC;   // [read-write] FDCAN Timestamp Counter Configuration Register
    volatile uint32_t FDCAN_TSCV;   // [read-write] FDCAN Timestamp Counter Value Register
    volatile uint32_t FDCAN_TOCC;   // [read-write] FDCAN Timeout Counter Configuration Register
    volatile uint32_t FDCAN_TOCV;   // [read-write] FDCAN Timeout Counter Value Register
    reserved_t<0x4> _0x40;
    volatile uint32_t FDCAN_ECR;    // [read-write] FDCAN Error Counter Register
    volatile uint32_t FDCAN_PSR;    // [read-write] FDCAN Protocol Status Register
    volatile uint32_t FDCAN_TDCR;   // [read-only] FDCAN Transmitter Delay Compensation Register
    reserved_t<0x1> _0x50;
    volatile uint32_t FDCAN_IR;     // [read-only] FDCAN Interrupt Register
    volatile uint32_t FDCAN_IE;     // [read-only] FDCAN Interrupt Enable Register
    volatile uint32_t FDCAN_ILS;    // [read-only] FDCAN Interrupt Line Select Register
    volatile uint32_t FDCAN_ILE;    // [read-write] FDCAN Interrupt Line Enable Register
    reserved_t<0x8> _0x80;
    volatile uint32_t FDCAN_GFC;    // [read-write] FDCAN Global Filter Configuration Register
    volatile uint32_t FDCAN_SIDFC;  // [read-write] FDCAN Standard ID Filter Configuration Register
    volatile uint32_t FDCAN_XIDFC;  // [read-write] FDCAN Extended ID Filter Configuration Register
    reserved_t<0x1> _0x90;
    volatile uint32_t FDCAN_XIDAM;  // [read-write] FDCAN Extended ID and Mask Register
    volatile uint32_t FDCAN_HPMS;   // [read-only] FDCAN High Priority Message Status Register
    volatile uint32_t FDCAN_NDAT1;  // [read-only] FDCAN New Data 1 Register
    volatile uint32_t FDCAN_NDAT2;  // [read-only] FDCAN New Data 2 Register
    volatile uint32_t FDCAN_RXF0C;  // [read-write] FDCAN Rx FIFO 0 Configuration Register
    volatile uint32_t FDCAN_RXF0S;  // [read-write] FDCAN Rx FIFO 0 Status Register
    volatile uint32_t FDCAN_RXF0A;  // [read-write] CAN Rx FIFO 0 Acknowledge Register
    volatile uint32_t FDCAN_RXBC;   // [read-write] FDCAN Rx Buffer Configuration Register
    volatile uint32_t FDCAN_RXF1C;  // [read-write] FDCAN Rx FIFO 1 Configuration Register
    volatile uint32_t FDCAN_RXF1S;  // [read-write] FDCAN Rx FIFO 1 Status Register
    volatile uint32_t FDCAN_RXF1A;  // [read-write] FDCAN Rx FIFO 1 Acknowledge Register
    volatile uint32_t FDCAN_RXESC;  // [read-write] FDCAN Rx Buffer Element Size Configuration Register
    volatile uint32_t FDCAN_TXBC;   // [read-write] FDCAN Tx Buffer Configuration Register
    volatile uint32_t FDCAN_TXFQS;  // [read-only] FDCAN Tx FIFO/Queue Status Register
    volatile uint32_t FDCAN_TXESC;  // [read-write] FDCAN Tx Buffer Element Size Configuration Register
    volatile uint32_t FDCAN_TXBRP;  // [read-only] FDCAN Tx Buffer Request Pending Register
    volatile uint32_t FDCAN_TXBAR;  // [read-write] FDCAN Tx Buffer Add Request Register
    volatile uint32_t FDCAN_TXBCR;  // [read-write] FDCAN Tx Buffer Cancellation Request Register
    volatile uint32_t FDCAN_TXBTO;  // [read-write] FDCAN Tx Buffer Transmission Occurred Register
    volatile uint32_t FDCAN_TXBCF;  // [read-only] FDCAN Tx Buffer Cancellation Finished Register
    volatile uint32_t FDCAN_TXBTIE; // [read-write] FDCAN Tx Buffer Transmission Interrupt Enable Register
    volatile uint32_t FDCAN_TXBCIE; // [read-write] FDCAN Tx Buffer Cancellation Finished Interrupt Enable Register
    reserved_t<0x2> _0xf0;
    volatile uint32_t FDCAN_TXEFC;  // [read-write] FDCAN Tx Event FIFO Configuration Register
    volatile uint32_t FDCAN_TXEFS;  // [read-write] FDCAN Tx Event FIFO Status Register
    volatile uint32_t FDCAN_TXEFA;  // [read-write] FDCAN Tx Event FIFO Acknowledge Register
    reserved_t<0x1> _0x100;
    volatile uint32_t FDCAN_TTTMC;  // [read-write] FDCAN TT Trigger Memory Configuration Register
    volatile uint32_t FDCAN_TTRMC;  // [read-write] FDCAN TT Reference Message Configuration Register
    volatile uint32_t FDCAN_TTOCF;  // [read-write] FDCAN TT Operation Configuration Register
    volatile uint32_t FDCAN_TTMLM;  // [read-write] FDCAN TT Matrix Limits Register
    volatile uint32_t FDCAN_TURCF;  // [read-write] FDCAN TUR Configuration Register
    volatile uint32_t FDCAN_TTOCN;  // [read-write] FDCAN TT Operation Control Register
    volatile uint32_t CAN_TTGTP;    // [read-write] FDCAN TT Global Time Preset Register
    volatile uint32_t FDCAN_TTTMK;  // [read-write] FDCAN TT Time Mark Register
    volatile uint32_t FDCAN_TTIR;   // [read-write] FDCAN TT Interrupt Register
    volatile uint32_t FDCAN_TTIE;   // [read-write] FDCAN TT Interrupt Enable Register
    volatile uint32_t FDCAN_TTILS;  // [read-write] FDCAN TT Interrupt Line Select Register
    volatile uint32_t FDCAN_TTOST;  // [read-only] FDCAN TT Operation Status Register
    volatile uint32_t FDCAN_TURNA;  // [read-only] FDCAN TUR Numerator Actual Register
    volatile uint32_t FDCAN_TTLGT;  // [read-only] FDCAN TT Local and Global Time Register
    volatile uint32_t FDCAN_TTCTC;  // [read-only] FDCAN TT Cycle Time and Count Register
    volatile uint32_t FDCAN_TTCPT;  // [read-only] FDCAN TT Capture Time Register
    volatile uint32_t FDCAN_TTCSM;  // [read-only] FDCAN TT Cycle Sync Mark Register
    reserved_t<0x6f> _0x300;
    volatile uint32_t FDCAN_TTTS;   // [read-write] FDCAN TT Trigger Select Register

    static constexpr uint32_t FDCAN_CREL_RESET_VALUE = 0x32141218;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_CREL_REL =       // Core release
        bit_field_t<28, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_CREL_STEP =      // Step of Core release
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_CREL_SUBSTEP =   // Sub-step of Core release
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_CREL_YEAR =      // Timestamp Year
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_CREL_MON =       // Timestamp Month
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_CREL_DAY =       // Timestamp Day
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t FDCAN_ENDN_RESET_VALUE = 0x87654321;

    static constexpr uint32_t FDCAN_DBTP_RESET_VALUE = 0xa33;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_DBTP_DSJW =          // Synchronization Jump Width
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_DBTP_DTSEG2 =        // Data time segment after sample point
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_DBTP_DTSEG1 =        // Data time segment after sample point
        bit_field_t<8, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_DBTP_DBRP =          // Data BIt Rate Prescaler
        bit_field_t<16, 0x1f>::value<X>();
    static constexpr uint32_t FDCAN_DBTP_TDC = 0x800000; // Transceiver Delay Compensation

    static constexpr uint32_t FDCAN_TEST_RESET_VALUE = 0x0;
    static constexpr uint32_t FDCAN_TEST_LBCK = 0x10; // Loop Back mode
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TEST_TX =         // Loop Back mode
        bit_field_t<5, 0x3>::value<X>();
    static constexpr uint32_t FDCAN_TEST_RX = 0x80;   // Control of Transmit Pin

    static constexpr uint32_t FDCAN_RWD_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RWD_WDV =   // Watchdog value
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RWD_WDC =   // Watchdog configuration
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t FDCAN_CCCR_RESET_VALUE = 0x1;
    static constexpr uint32_t FDCAN_CCCR_INIT = 0x1;    // Initialization
    static constexpr uint32_t FDCAN_CCCR_CCE = 0x2;     // Configuration Change Enable
    static constexpr uint32_t FDCAN_CCCR_ASM = 0x4;     // ASM Restricted Operation Mode
    static constexpr uint32_t FDCAN_CCCR_CSA = 0x8;     // Clock Stop Acknowledge
    static constexpr uint32_t FDCAN_CCCR_CSR = 0x10;    // Clock Stop Request
    static constexpr uint32_t FDCAN_CCCR_MON = 0x20;    // Bus Monitoring Mode
    static constexpr uint32_t FDCAN_CCCR_DAR = 0x40;    // Disable Automatic Retransmission
    static constexpr uint32_t FDCAN_CCCR_TEST = 0x80;   // Test Mode Enable
    static constexpr uint32_t FDCAN_CCCR_FDOE = 0x100;  // FD Operation Enable
    static constexpr uint32_t FDCAN_CCCR_BSE = 0x200;   // FDCAN Bit Rate Switching
    static constexpr uint32_t FDCAN_CCCR_PXHD = 0x1000; // Protocol Exception Handling Disable
    static constexpr uint32_t FDCAN_CCCR_EFBI = 0x2000; // Edge Filtering during Bus Integration
    static constexpr uint32_t FDCAN_CCCR_TXP = 0x4000;  // TXP
    static constexpr uint32_t FDCAN_CCCR_NISO = 0x8000; // Non ISO Operation

    static constexpr uint32_t FDCAN_NBTP_RESET_VALUE = 0xa33;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_NBTP_NSJW =     // NSJW: Nominal (Re)Synchronization Jump Width
        bit_field_t<25, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_NBTP_NBRP =     // Bit Rate Prescaler
        bit_field_t<16, 0x1ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_NBTP_NTSEG1 =   // Nominal Time segment before sample point
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_NBTP_TSEG2 =    // Nominal Time segment after sample point
        bit_field_t<0, 0x7f>::value<X>();

    static constexpr uint32_t FDCAN_TSCC_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TSCC_TCP =   // Timestamp Counter Prescaler
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TSCC_TSS =   // Timestamp Select
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t FDCAN_TSCV_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TSCV_TSC =   // Timestamp Counter
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t FDCAN_TOCC_RESET_VALUE = 0xffff0000;
    static constexpr uint32_t FDCAN_TOCC_ETOC = 0x1; // Enable Timeout Counter
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TOCC_TOS =       // Timeout Select
        bit_field_t<1, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TOCC_TOP =       // Timeout Period
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t FDCAN_TOCV_RESET_VALUE = 0xffff;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TOCV_TOC =   // Timeout Counter
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t FDCAN_ECR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_ECR_CEL =        // AN Error Logging
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t FDCAN_ECR_RP = 0x8000; // Receive Error Passive
    template<uint32_t X>
    static constexpr uint32_t FDCAN_ECR_TREC =       // Receive Error Counter
        bit_field_t<8, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_ECR_TEC =        // Transmit Error Counter
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t FDCAN_PSR_RESET_VALUE = 0x707;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_PSR_LEC =          // Last Error Code
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_PSR_ACT =          // Activity
        bit_field_t<3, 0x3>::value<X>();
    static constexpr uint32_t FDCAN_PSR_EP = 0x20;     // Error Passive
    static constexpr uint32_t FDCAN_PSR_EW = 0x40;     // Warning Status
    static constexpr uint32_t FDCAN_PSR_BO = 0x80;     // Bus_Off Status
    template<uint32_t X>
    static constexpr uint32_t FDCAN_PSR_DLEC =         // Data Last Error Code
        bit_field_t<8, 0x7>::value<X>();
    static constexpr uint32_t FDCAN_PSR_RESI = 0x800;  // ESI flag of last received FDCAN Message
    static constexpr uint32_t FDCAN_PSR_RBRS = 0x1000; // BRS flag of last received FDCAN Message
    static constexpr uint32_t FDCAN_PSR_REDL = 0x2000; // Received FDCAN Message
    static constexpr uint32_t FDCAN_PSR_PXE = 0x4000;  // Protocol Exception Event
    template<uint32_t X>
    static constexpr uint32_t FDCAN_PSR_TDCV =         // Transmitter Delay Compensation Value
        bit_field_t<16, 0x7f>::value<X>();

    static constexpr uint32_t FDCAN_TDCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TDCR_TDCF =   // Transmitter Delay Compensation Filter Window Length
        bit_field_t<0, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TDCR_TDCO =   // Transmitter Delay Compensation Offset
        bit_field_t<8, 0x7f>::value<X>();

    static constexpr uint32_t FDCAN_IR_RESET_VALUE = 0x0;
    static constexpr uint32_t FDCAN_IR_RF0N = 0x1;       // Rx FIFO 0 New Message
    static constexpr uint32_t FDCAN_IR_RF0W = 0x2;       // Rx FIFO 0 Full
    static constexpr uint32_t FDCAN_IR_RF0F = 0x4;       // Rx FIFO 0 Full
    static constexpr uint32_t FDCAN_IR_RF0L = 0x8;       // Rx FIFO 0 Message Lost
    static constexpr uint32_t FDCAN_IR_RF1N = 0x10;      // Rx FIFO 1 New Message
    static constexpr uint32_t FDCAN_IR_RF1W = 0x20;      // Rx FIFO 1 Watermark Reached
    static constexpr uint32_t FDCAN_IR_RF1F = 0x40;      // Rx FIFO 1 Watermark Reached
    static constexpr uint32_t FDCAN_IR_RF1L = 0x80;      // Rx FIFO 1 Message Lost
    static constexpr uint32_t FDCAN_IR_HPM = 0x100;      // High Priority Message
    static constexpr uint32_t FDCAN_IR_TC = 0x200;       // Transmission Completed
    static constexpr uint32_t FDCAN_IR_TCF = 0x400;      // Transmission Cancellation Finished
    static constexpr uint32_t FDCAN_IR_TEF = 0x800;      // Tx FIFO Empty
    static constexpr uint32_t FDCAN_IR_TEFN = 0x1000;    // Tx Event FIFO New Entry
    static constexpr uint32_t FDCAN_IR_TEFW = 0x2000;    // Tx Event FIFO Watermark Reached
    static constexpr uint32_t FDCAN_IR_TEFF = 0x4000;    // Tx Event FIFO Full
    static constexpr uint32_t FDCAN_IR_TEFL = 0x8000;    // Tx Event FIFO Element Lost
    static constexpr uint32_t FDCAN_IR_TSW = 0x10000;    // Timestamp Wraparound
    static constexpr uint32_t FDCAN_IR_MRAF = 0x20000;   // Message RAM Access Failure
    static constexpr uint32_t FDCAN_IR_TOO = 0x40000;    // Timeout Occurred
    static constexpr uint32_t FDCAN_IR_DRX = 0x80000;    // Message stored to Dedicated Rx Buffer
    static constexpr uint32_t FDCAN_IR_ELO = 0x400000;   // Error Logging Overflow
    static constexpr uint32_t FDCAN_IR_EP = 0x800000;    // Error Passive
    static constexpr uint32_t FDCAN_IR_EW = 0x1000000;   // Warning Status
    static constexpr uint32_t FDCAN_IR_BO = 0x2000000;   // Bus_Off Status
    static constexpr uint32_t FDCAN_IR_WDI = 0x4000000;  // Watchdog Interrupt
    static constexpr uint32_t FDCAN_IR_PEA = 0x8000000;  // Protocol Error in Arbitration Phase (Nominal Bit Time is used)
    static constexpr uint32_t FDCAN_IR_PED = 0x10000000; // Protocol Error in Data Phase (Data Bit Time is used)
    static constexpr uint32_t FDCAN_IR_ARA = 0x20000000; // Access to Reserved Address

    static constexpr uint32_t FDCAN_IE_RESET_VALUE = 0x0;
    static constexpr uint32_t FDCAN_IE_RF0NE = 0x1;       // Rx FIFO 0 New Message Enable
    static constexpr uint32_t FDCAN_IE_RF0WE = 0x2;       // Rx FIFO 0 Full Enable
    static constexpr uint32_t FDCAN_IE_RF0FE = 0x4;       // Rx FIFO 0 Full Enable
    static constexpr uint32_t FDCAN_IE_RF0LE = 0x8;       // Rx FIFO 0 Message Lost Enable
    static constexpr uint32_t FDCAN_IE_RF1NE = 0x10;      // Rx FIFO 1 New Message Enable
    static constexpr uint32_t FDCAN_IE_RF1WE = 0x20;      // Rx FIFO 1 Watermark Reached Enable
    static constexpr uint32_t FDCAN_IE_RF1FE = 0x40;      // Rx FIFO 1 Watermark Reached Enable
    static constexpr uint32_t FDCAN_IE_RF1LE = 0x80;      // Rx FIFO 1 Message Lost Enable
    static constexpr uint32_t FDCAN_IE_HPME = 0x100;      // High Priority Message Enable
    static constexpr uint32_t FDCAN_IE_TCE = 0x200;       // Transmission Completed Enable
    static constexpr uint32_t FDCAN_IE_TCFE = 0x400;      // Transmission Cancellation Finished Enable
    static constexpr uint32_t FDCAN_IE_TEFE = 0x800;      // Tx FIFO Empty Enable
    static constexpr uint32_t FDCAN_IE_TEFNE = 0x1000;    // Tx Event FIFO New Entry Enable
    static constexpr uint32_t FDCAN_IE_TEFWE = 0x2000;    // Tx Event FIFO Watermark Reached Enable
    static constexpr uint32_t FDCAN_IE_TEFFE = 0x4000;    // Tx Event FIFO Full Enable
    static constexpr uint32_t FDCAN_IE_TEFLE = 0x8000;    // Tx Event FIFO Element Lost Enable
    static constexpr uint32_t FDCAN_IE_TSWE = 0x10000;    // Timestamp Wraparound Enable
    static constexpr uint32_t FDCAN_IE_MRAFE = 0x20000;   // Message RAM Access Failure Enable
    static constexpr uint32_t FDCAN_IE_TOOE = 0x40000;    // Timeout Occurred Enable
    static constexpr uint32_t FDCAN_IE_DRXE = 0x80000;    // Message stored to Dedicated Rx Buffer Enable
    static constexpr uint32_t FDCAN_IE_BECE = 0x100000;   // Bit Error Corrected Interrupt Enable
    static constexpr uint32_t FDCAN_IE_BEUE = 0x200000;   // Bit Error Uncorrected Interrupt Enable
    static constexpr uint32_t FDCAN_IE_ELOE = 0x400000;   // Error Logging Overflow Enable
    static constexpr uint32_t FDCAN_IE_EPE = 0x800000;    // Error Passive Enable
    static constexpr uint32_t FDCAN_IE_EWE = 0x1000000;   // Warning Status Enable
    static constexpr uint32_t FDCAN_IE_BOE = 0x2000000;   // Bus_Off Status Enable
    static constexpr uint32_t FDCAN_IE_WDIE = 0x4000000;  // Watchdog Interrupt Enable
    static constexpr uint32_t FDCAN_IE_PEAE = 0x8000000;  // Protocol Error in Arbitration Phase Enable
    static constexpr uint32_t FDCAN_IE_PEDE = 0x10000000; // Protocol Error in Data Phase Enable
    static constexpr uint32_t FDCAN_IE_ARAE = 0x20000000; // Access to Reserved Address Enable

    static constexpr uint32_t FDCAN_ILS_RESET_VALUE = 0x0;
    static constexpr uint32_t FDCAN_ILS_RF0NL = 0x1;       // Rx FIFO 0 New Message Interrupt Line
    static constexpr uint32_t FDCAN_ILS_RF0WL = 0x2;       // Rx FIFO 0 Watermark Reached Interrupt Line
    static constexpr uint32_t FDCAN_ILS_RF0FL = 0x4;       // Rx FIFO 0 Full Interrupt Line
    static constexpr uint32_t FDCAN_ILS_RF0LL = 0x8;       // Rx FIFO 0 Message Lost Interrupt Line
    static constexpr uint32_t FDCAN_ILS_RF1NL = 0x10;      // Rx FIFO 1 New Message Interrupt Line
    static constexpr uint32_t FDCAN_ILS_RF1WL = 0x20;      // Rx FIFO 1 Watermark Reached Interrupt Line
    static constexpr uint32_t FDCAN_ILS_RF1FL = 0x40;      // Rx FIFO 1 Full Interrupt Line
    static constexpr uint32_t FDCAN_ILS_RF1LL = 0x80;      // Rx FIFO 1 Message Lost Interrupt Line
    static constexpr uint32_t FDCAN_ILS_HPML = 0x100;      // High Priority Message Interrupt Line
    static constexpr uint32_t FDCAN_ILS_TCL = 0x200;       // Transmission Completed Interrupt Line
    static constexpr uint32_t FDCAN_ILS_TCFL = 0x400;      // Transmission Cancellation Finished Interrupt Line
    static constexpr uint32_t FDCAN_ILS_TEFL = 0x800;      // Tx FIFO Empty Interrupt Line
    static constexpr uint32_t FDCAN_ILS_TEFNL = 0x1000;    // Tx Event FIFO New Entry Interrupt Line
    static constexpr uint32_t FDCAN_ILS_TEFWL = 0x2000;    // Tx Event FIFO Watermark Reached Interrupt Line
    static constexpr uint32_t FDCAN_ILS_TEFFL = 0x4000;    // Tx Event FIFO Full Interrupt Line
    static constexpr uint32_t FDCAN_ILS_TEFLL = 0x8000;    // Tx Event FIFO Element Lost Interrupt Line
    static constexpr uint32_t FDCAN_ILS_TSWL = 0x10000;    // Timestamp Wraparound Interrupt Line
    static constexpr uint32_t FDCAN_ILS_MRAFL = 0x20000;   // Message RAM Access Failure Interrupt Line
    static constexpr uint32_t FDCAN_ILS_TOOL = 0x40000;    // Timeout Occurred Interrupt Line
    static constexpr uint32_t FDCAN_ILS_DRXL = 0x80000;    // Message stored to Dedicated Rx Buffer Interrupt Line
    static constexpr uint32_t FDCAN_ILS_BECL = 0x100000;   // Bit Error Corrected Interrupt Line
    static constexpr uint32_t FDCAN_ILS_BEUL = 0x200000;   // Bit Error Uncorrected Interrupt Line
    static constexpr uint32_t FDCAN_ILS_ELOL = 0x400000;   // Error Logging Overflow Interrupt Line
    static constexpr uint32_t FDCAN_ILS_EPL = 0x800000;    // Error Passive Interrupt Line
    static constexpr uint32_t FDCAN_ILS_EWL = 0x1000000;   // Warning Status Interrupt Line
    static constexpr uint32_t FDCAN_ILS_BOL = 0x2000000;   // Bus_Off Status
    static constexpr uint32_t FDCAN_ILS_WDIL = 0x4000000;  // Watchdog Interrupt Line
    static constexpr uint32_t FDCAN_ILS_PEAL = 0x8000000;  // Protocol Error in Arbitration Phase Line
    static constexpr uint32_t FDCAN_ILS_PEDL = 0x10000000; // Protocol Error in Data Phase Line
    static constexpr uint32_t FDCAN_ILS_ARAL = 0x20000000; // Access to Reserved Address Line

    static constexpr uint32_t FDCAN_ILE_RESET_VALUE = 0x0;
    static constexpr uint32_t FDCAN_ILE_EINT0 = 0x1; // Enable Interrupt Line 0
    static constexpr uint32_t FDCAN_ILE_EINT1 = 0x2; // Enable Interrupt Line 1

    static constexpr uint32_t FDCAN_GFC_RESET_VALUE = 0x0;
    static constexpr uint32_t FDCAN_GFC_RRFE = 0x1; // Reject Remote Frames Extended
    static constexpr uint32_t FDCAN_GFC_RRFS = 0x2; // Reject Remote Frames Standard
    template<uint32_t X>
    static constexpr uint32_t FDCAN_GFC_ANFE =      // Accept Non-matching Frames Extended
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_GFC_ANFS =      // Accept Non-matching Frames Standard
        bit_field_t<4, 0x3>::value<X>();

    static constexpr uint32_t FDCAN_SIDFC_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_SIDFC_FLSSA =   // Filter List Standard Start Address
        bit_field_t<2, 0x3fff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_SIDFC_LSS =     // List Size Standard
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t FDCAN_XIDFC_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_XIDFC_FLESA =   // Filter List Standard Start Address
        bit_field_t<2, 0x3fff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_XIDFC_LSE =     // List Size Extended
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t FDCAN_XIDAM_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_XIDAM_EIDM =   // Extended ID Mask
        bit_field_t<0, 0x1fffffff>::value<X>();

    static constexpr uint32_t FDCAN_HPMS_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_HPMS_BIDX =         // Buffer Index
        bit_field_t<0, 0x3f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_HPMS_MSI =          // Message Storage Indicator
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_HPMS_FIDX =         // Filter Index
        bit_field_t<8, 0x7f>::value<X>();
    static constexpr uint32_t FDCAN_HPMS_FLST = 0x8000; // Filter List

    static constexpr uint32_t FDCAN_NDAT1_RESET_VALUE = 0x0;
    static constexpr uint32_t FDCAN_NDAT1_ND0 = 0x1;         // New data
    static constexpr uint32_t FDCAN_NDAT1_ND1 = 0x2;         // New data
    static constexpr uint32_t FDCAN_NDAT1_ND2 = 0x4;         // New data
    static constexpr uint32_t FDCAN_NDAT1_ND3 = 0x8;         // New data
    static constexpr uint32_t FDCAN_NDAT1_ND4 = 0x10;        // New data
    static constexpr uint32_t FDCAN_NDAT1_ND5 = 0x20;        // New data
    static constexpr uint32_t FDCAN_NDAT1_ND6 = 0x40;        // New data
    static constexpr uint32_t FDCAN_NDAT1_ND7 = 0x80;        // New data
    static constexpr uint32_t FDCAN_NDAT1_ND8 = 0x100;       // New data
    static constexpr uint32_t FDCAN_NDAT1_ND9 = 0x200;       // New data
    static constexpr uint32_t FDCAN_NDAT1_ND10 = 0x400;      // New data
    static constexpr uint32_t FDCAN_NDAT1_ND11 = 0x800;      // New data
    static constexpr uint32_t FDCAN_NDAT1_ND12 = 0x1000;     // New data
    static constexpr uint32_t FDCAN_NDAT1_ND13 = 0x2000;     // New data
    static constexpr uint32_t FDCAN_NDAT1_ND14 = 0x4000;     // New data
    static constexpr uint32_t FDCAN_NDAT1_ND15 = 0x8000;     // New data
    static constexpr uint32_t FDCAN_NDAT1_ND16 = 0x10000;    // New data
    static constexpr uint32_t FDCAN_NDAT1_ND17 = 0x20000;    // New data
    static constexpr uint32_t FDCAN_NDAT1_ND18 = 0x40000;    // New data
    static constexpr uint32_t FDCAN_NDAT1_ND19 = 0x80000;    // New data
    static constexpr uint32_t FDCAN_NDAT1_ND20 = 0x100000;   // New data
    static constexpr uint32_t FDCAN_NDAT1_ND21 = 0x200000;   // New data
    static constexpr uint32_t FDCAN_NDAT1_ND22 = 0x400000;   // New data
    static constexpr uint32_t FDCAN_NDAT1_ND23 = 0x800000;   // New data
    static constexpr uint32_t FDCAN_NDAT1_ND24 = 0x1000000;  // New data
    static constexpr uint32_t FDCAN_NDAT1_ND25 = 0x2000000;  // New data
    static constexpr uint32_t FDCAN_NDAT1_ND26 = 0x4000000;  // New data
    static constexpr uint32_t FDCAN_NDAT1_ND27 = 0x8000000;  // New data
    static constexpr uint32_t FDCAN_NDAT1_ND28 = 0x10000000; // New data
    static constexpr uint32_t FDCAN_NDAT1_ND29 = 0x20000000; // New data
    static constexpr uint32_t FDCAN_NDAT1_ND30 = 0x40000000; // New data
    static constexpr uint32_t FDCAN_NDAT1_ND31 = 0x80000000; // New data

    static constexpr uint32_t FDCAN_NDAT2_RESET_VALUE = 0x0;
    static constexpr uint32_t FDCAN_NDAT2_ND32 = 0x1;        // New data
    static constexpr uint32_t FDCAN_NDAT2_ND33 = 0x2;        // New data
    static constexpr uint32_t FDCAN_NDAT2_ND34 = 0x4;        // New data
    static constexpr uint32_t FDCAN_NDAT2_ND35 = 0x8;        // New data
    static constexpr uint32_t FDCAN_NDAT2_ND36 = 0x10;       // New data
    static constexpr uint32_t FDCAN_NDAT2_ND37 = 0x20;       // New data
    static constexpr uint32_t FDCAN_NDAT2_ND38 = 0x40;       // New data
    static constexpr uint32_t FDCAN_NDAT2_ND39 = 0x80;       // New data
    static constexpr uint32_t FDCAN_NDAT2_ND40 = 0x100;      // New data
    static constexpr uint32_t FDCAN_NDAT2_ND41 = 0x200;      // New data
    static constexpr uint32_t FDCAN_NDAT2_ND42 = 0x400;      // New data
    static constexpr uint32_t FDCAN_NDAT2_ND43 = 0x800;      // New data
    static constexpr uint32_t FDCAN_NDAT2_ND44 = 0x1000;     // New data
    static constexpr uint32_t FDCAN_NDAT2_ND45 = 0x2000;     // New data
    static constexpr uint32_t FDCAN_NDAT2_ND46 = 0x4000;     // New data
    static constexpr uint32_t FDCAN_NDAT2_ND47 = 0x8000;     // New data
    static constexpr uint32_t FDCAN_NDAT2_ND48 = 0x10000;    // New data
    static constexpr uint32_t FDCAN_NDAT2_ND49 = 0x20000;    // New data
    static constexpr uint32_t FDCAN_NDAT2_ND50 = 0x40000;    // New data
    static constexpr uint32_t FDCAN_NDAT2_ND51 = 0x80000;    // New data
    static constexpr uint32_t FDCAN_NDAT2_ND52 = 0x100000;   // New data
    static constexpr uint32_t FDCAN_NDAT2_ND53 = 0x200000;   // New data
    static constexpr uint32_t FDCAN_NDAT2_ND54 = 0x400000;   // New data
    static constexpr uint32_t FDCAN_NDAT2_ND55 = 0x800000;   // New data
    static constexpr uint32_t FDCAN_NDAT2_ND56 = 0x1000000;  // New data
    static constexpr uint32_t FDCAN_NDAT2_ND57 = 0x2000000;  // New data
    static constexpr uint32_t FDCAN_NDAT2_ND58 = 0x4000000;  // New data
    static constexpr uint32_t FDCAN_NDAT2_ND59 = 0x8000000;  // New data
    static constexpr uint32_t FDCAN_NDAT2_ND60 = 0x10000000; // New data
    static constexpr uint32_t FDCAN_NDAT2_ND61 = 0x20000000; // New data
    static constexpr uint32_t FDCAN_NDAT2_ND62 = 0x40000000; // New data
    static constexpr uint32_t FDCAN_NDAT2_ND63 = 0x80000000; // New data

    static constexpr uint32_t FDCAN_RXF0C_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXF0C_F0SA =   // Rx FIFO 0 Start Address
        bit_field_t<2, 0x3fff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXF0C_F0S =    // Rx FIFO 0 Size
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXF0C_F0WM =   // FIFO 0 Watermark
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t FDCAN_RXF0S_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXF0S_F0FL =            // Rx FIFO 0 Fill Level
        bit_field_t<0, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXF0S_F0G =             // Rx FIFO 0 Get Index
        bit_field_t<8, 0x3f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXF0S_F0P =             // Rx FIFO 0 Put Index
        bit_field_t<16, 0x3f>::value<X>();
    static constexpr uint32_t FDCAN_RXF0S_F0F = 0x1000000;  // Rx FIFO 0 Full
    static constexpr uint32_t FDCAN_RXF0S_RF0L = 0x2000000; // Rx FIFO 0 Message Lost

    static constexpr uint32_t FDCAN_RXF0A_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXF0A_FA01 =   // Rx FIFO 0 Acknowledge Index
        bit_field_t<0, 0x3f>::value<X>();

    static constexpr uint32_t FDCAN_RXBC_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXBC_RBSA =   // Rx Buffer Start Address
        bit_field_t<2, 0x3fff>::value<X>();

    static constexpr uint32_t FDCAN_RXF1C_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXF1C_F1SA =   // Rx FIFO 1 Start Address
        bit_field_t<2, 0x3fff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXF1C_F1S =    // Rx FIFO 1 Size
        bit_field_t<16, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXF1C_F1WM =   // Rx FIFO 1 Watermark
        bit_field_t<24, 0x7f>::value<X>();

    static constexpr uint32_t FDCAN_RXF1S_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXF1S_F1FL =            // Rx FIFO 1 Fill Level
        bit_field_t<0, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXF1S_F1GI =            // Rx FIFO 1 Get Index
        bit_field_t<8, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXF1S_F1PI =            // Rx FIFO 1 Put Index
        bit_field_t<16, 0x7f>::value<X>();
    static constexpr uint32_t FDCAN_RXF1S_F1F = 0x1000000;  // Rx FIFO 1 Full
    static constexpr uint32_t FDCAN_RXF1S_RF1L = 0x2000000; // Rx FIFO 1 Message Lost
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXF1S_DMS =             // Debug Message Status
        bit_field_t<30, 0x3>::value<X>();

    static constexpr uint32_t FDCAN_RXF1A_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXF1A_F1AI =   // Rx FIFO 1 Acknowledge Index
        bit_field_t<0, 0x3f>::value<X>();

    static constexpr uint32_t FDCAN_RXESC_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXESC_F0DS =   // Rx FIFO 1 Data Field Size:
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXESC_F1DS =   // Rx FIFO 0 Data Field Size:
        bit_field_t<4, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXESC_RBDS =   // Rx Buffer Data Field Size:
        bit_field_t<8, 0x7>::value<X>();

    static constexpr uint32_t FDCAN_TXBC_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TXBC_TBSA =             // Tx Buffers Start Address
        bit_field_t<2, 0x3fff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TXBC_NDTB =             // Number of Dedicated Transmit Buffers
        bit_field_t<16, 0x3f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TXBC_TFQS =             // Transmit FIFO/Queue Size
        bit_field_t<24, 0x3f>::value<X>();
    static constexpr uint32_t FDCAN_TXBC_TFQM = 0x40000000; // Tx FIFO/Queue Mode

    static constexpr uint32_t FDCAN_TXFQS_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TXFQS_TFFL =           // Tx FIFO Free Level
        bit_field_t<0, 0x3f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TXFQS_TFGI =           // TFGI
        bit_field_t<8, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TXFQS_TFQPI =          // Tx FIFO/Queue Put Index
        bit_field_t<16, 0x1f>::value<X>();
    static constexpr uint32_t FDCAN_TXFQS_TFQF = 0x200000; // Tx FIFO/Queue Full

    static constexpr uint32_t FDCAN_TXESC_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TXESC_TBDS =   // Tx Buffer Data Field Size:
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t FDCAN_TXBRP_RESET_VALUE = 0x0;

    static constexpr uint32_t FDCAN_TXBAR_RESET_VALUE = 0x0;

    static constexpr uint32_t FDCAN_TXBCR_RESET_VALUE = 0x0;

    static constexpr uint32_t FDCAN_TXBTO_RESET_VALUE = 0x0;

    static constexpr uint32_t FDCAN_TXBCF_RESET_VALUE = 0x0;

    static constexpr uint32_t FDCAN_TXBTIE_RESET_VALUE = 0x0;

    static constexpr uint32_t FDCAN_TXBCIE_RESET_VALUE = 0x0;

    static constexpr uint32_t FDCAN_TXEFC_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TXEFC_EFSA =   // Event FIFO Start Address
        bit_field_t<2, 0x3fff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TXEFC_EFS =    // Event FIFO Size
        bit_field_t<16, 0x3f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TXEFC_EFWM =   // Event FIFO Watermark
        bit_field_t<24, 0x3f>::value<X>();

    static constexpr uint32_t FDCAN_TXEFS_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TXEFS_EFFL =            // Event FIFO Fill Level
        bit_field_t<0, 0x3f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TXEFS_EFGI =            // Event FIFO Get Index.
        bit_field_t<8, 0x1f>::value<X>();
    static constexpr uint32_t FDCAN_TXEFS_EFF = 0x1000000;  // Event FIFO Full.
    static constexpr uint32_t FDCAN_TXEFS_TEFL = 0x2000000; // Tx Event FIFO Element Lost.

    static constexpr uint32_t FDCAN_TXEFA_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TXEFA_EFAI =   // Event FIFO Acknowledge Index
        bit_field_t<0, 0x1f>::value<X>();

    static constexpr uint32_t FDCAN_TTTMC_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTTMC_TMSA =   // Trigger Memory Start Address
        bit_field_t<2, 0x3fff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTTMC_TME =    // Trigger Memory Elements
        bit_field_t<16, 0x7f>::value<X>();

    static constexpr uint32_t FDCAN_TTRMC_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTRMC_RID =              // Reference Identifier.
        bit_field_t<0, 0x1fffffff>::value<X>();
    static constexpr uint32_t FDCAN_TTRMC_XTD = 0x40000000;  // Extended Identifier
    static constexpr uint32_t FDCAN_TTRMC_RMPS = 0x80000000; // Reference Message Payload Select

    static constexpr uint32_t FDCAN_TTOCF_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTOCF_OM =              // Operation Mode
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t FDCAN_TTOCF_GEN = 0x8;        // Gap Enable
    static constexpr uint32_t FDCAN_TTOCF_TM = 0x10;        // Time Master
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTOCF_LDSDL =           // LD of Synchronization Deviation Limit
        bit_field_t<5, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTOCF_IRTO =            // Initial Reference Trigger Offset
        bit_field_t<8, 0x7f>::value<X>();
    static constexpr uint32_t FDCAN_TTOCF_EECS = 0x8000;    // Enable External Clock Synchronization
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTOCF_AWL =             // Application Watchdog Limit
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t FDCAN_TTOCF_EGTF = 0x1000000; // Enable Global Time Filtering
    static constexpr uint32_t FDCAN_TTOCF_ECC = 0x2000000;  // Enable Clock Calibration
    static constexpr uint32_t FDCAN_TTOCF_EVTP = 0x4000000; // Event Trigger Polarity

    static constexpr uint32_t FDCAN_TTMLM_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTMLM_CCM =    // Cycle Count Max
        bit_field_t<0, 0x3f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTMLM_CSS =    // Cycle Start Synchronization
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTMLM_TXEW =   // Tx Enable Window
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTMLM_ENTT =   // Expected Number of Tx Triggers
        bit_field_t<16, 0xfff>::value<X>();

    static constexpr uint32_t FDCAN_TURCF_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TURCF_NCL =             // Numerator Configuration Low.
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TURCF_DC =              // Denominator Configuration.
        bit_field_t<16, 0x3fff>::value<X>();
    static constexpr uint32_t FDCAN_TURCF_ELT = 0x80000000; // Enable Local Time

    static constexpr uint32_t FDCAN_TTOCN_RESET_VALUE = 0x0;
    static constexpr uint32_t FDCAN_TTOCN_SGT = 0x1;     // Set Global time
    static constexpr uint32_t FDCAN_TTOCN_ECS = 0x2;     // External Clock Synchronization
    static constexpr uint32_t FDCAN_TTOCN_SWP = 0x4;     // Stop Watch Polarity
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTOCN_SWS =          // Stop Watch Source.
        bit_field_t<3, 0x3>::value<X>();
    static constexpr uint32_t FDCAN_TTOCN_RTIE = 0x20;   // Register Time Mark Interrupt Pulse Enable
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTOCN_TMC =          // Register Time Mark Compare
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t FDCAN_TTOCN_TTIE = 0x100;  // Trigger Time Mark Interrupt Pulse Enable
    static constexpr uint32_t FDCAN_TTOCN_GCS = 0x200;   // Gap Control Select
    static constexpr uint32_t FDCAN_TTOCN_FGP = 0x400;   // Finish Gap.
    static constexpr uint32_t FDCAN_TTOCN_TMG = 0x800;   // Time Mark Gap
    static constexpr uint32_t FDCAN_TTOCN_NIG = 0x1000;  // Next is Gap
    static constexpr uint32_t FDCAN_TTOCN_ESCN = 0x2000; // External Synchronization Control
    static constexpr uint32_t FDCAN_TTOCN_LCKC = 0x8000; // TT Operation Control Register Locked

    static constexpr uint32_t CAN_TTGTP_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CAN_TTGTP_NCL =   // Time Preset
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CAN_TTGTP_CTP =   // Cycle Time Target Phase
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t FDCAN_TTTMK_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTTMK_TM =               // Time Mark
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTTMK_TICC =             // Time Mark Cycle Code
        bit_field_t<16, 0x7f>::value<X>();
    static constexpr uint32_t FDCAN_TTTMK_LCKM = 0x80000000; // TT Time Mark Register Locked

    static constexpr uint32_t FDCAN_TTIR_RESET_VALUE = 0x0;
    static constexpr uint32_t FDCAN_TTIR_SBC = 0x1;     // Start of Basic Cycle
    static constexpr uint32_t FDCAN_TTIR_SMC = 0x2;     // Start of Matrix Cycle
    static constexpr uint32_t FDCAN_TTIR_CSM = 0x4;     // Change of Synchronization Mode
    static constexpr uint32_t FDCAN_TTIR_SOG = 0x8;     // Start of Gap
    static constexpr uint32_t FDCAN_TTIR_RTMI = 0x10;   // Register Time Mark Interrupt.
    static constexpr uint32_t FDCAN_TTIR_TTMI = 0x20;   // Trigger Time Mark Event Internal
    static constexpr uint32_t FDCAN_TTIR_SWE = 0x40;    // Stop Watch Event
    static constexpr uint32_t FDCAN_TTIR_GTW = 0x80;    // Global Time Wrap
    static constexpr uint32_t FDCAN_TTIR_GTD = 0x100;   // Global Time Discontinuity
    static constexpr uint32_t FDCAN_TTIR_GTE = 0x200;   // Global Time Error
    static constexpr uint32_t FDCAN_TTIR_TXU = 0x400;   // Tx Count Underflow
    static constexpr uint32_t FDCAN_TTIR_TXO = 0x800;   // Tx Count Overflow
    static constexpr uint32_t FDCAN_TTIR_SE1 = 0x1000;  // Scheduling Error 1
    static constexpr uint32_t FDCAN_TTIR_SE2 = 0x2000;  // Scheduling Error 2
    static constexpr uint32_t FDCAN_TTIR_ELC = 0x4000;  // Error Level Changed.
    static constexpr uint32_t FDCAN_TTIR_IWTG = 0x8000; // Initialization Watch Trigger
    static constexpr uint32_t FDCAN_TTIR_WT = 0x10000;  // Watch Trigger
    static constexpr uint32_t FDCAN_TTIR_AW = 0x20000;  // Application Watchdog
    static constexpr uint32_t FDCAN_TTIR_CER = 0x40000; // Configuration Error

    static constexpr uint32_t FDCAN_TTIE_RESET_VALUE = 0x0;
    static constexpr uint32_t FDCAN_TTIE_SBCE = 0x1;     // Start of Basic Cycle Interrupt Enable
    static constexpr uint32_t FDCAN_TTIE_SMCE = 0x2;     // Start of Matrix Cycle Interrupt Enable
    static constexpr uint32_t FDCAN_TTIE_CSME = 0x4;     // Change of Synchronization Mode Interrupt Enable
    static constexpr uint32_t FDCAN_TTIE_SOGE = 0x8;     // Start of Gap Interrupt Enable
    static constexpr uint32_t FDCAN_TTIE_RTMIE = 0x10;   // Register Time Mark Interrupt Enable
    static constexpr uint32_t FDCAN_TTIE_TTMIE = 0x20;   // Trigger Time Mark Event Internal Interrupt Enable
    static constexpr uint32_t FDCAN_TTIE_SWEE = 0x40;    // Stop Watch Event Interrupt Enable
    static constexpr uint32_t FDCAN_TTIE_GTWE = 0x80;    // Global Time Wrap Interrupt Enable
    static constexpr uint32_t FDCAN_TTIE_GTDE = 0x100;   // Global Time Discontinuity Interrupt Enable
    static constexpr uint32_t FDCAN_TTIE_GTEE = 0x200;   // Global Time Error Interrupt Enable
    static constexpr uint32_t FDCAN_TTIE_TXUE = 0x400;   // Tx Count Underflow Interrupt Enable
    static constexpr uint32_t FDCAN_TTIE_TXOE = 0x800;   // Tx Count Overflow Interrupt Enable
    static constexpr uint32_t FDCAN_TTIE_SE1E = 0x1000;  // Scheduling Error 1 Interrupt Enable
    static constexpr uint32_t FDCAN_TTIE_SE2E = 0x2000;  // Scheduling Error 2 Interrupt Enable
    static constexpr uint32_t FDCAN_TTIE_ELCE = 0x4000;  // Change Error Level Interrupt Enable
    static constexpr uint32_t FDCAN_TTIE_IWTGE = 0x8000; // Initialization Watch Trigger Interrupt Enable
    static constexpr uint32_t FDCAN_TTIE_WTE = 0x10000;  // Watch Trigger Interrupt Enable
    static constexpr uint32_t FDCAN_TTIE_AWE = 0x20000;  // Application Watchdog Interrupt Enable
    static constexpr uint32_t FDCAN_TTIE_CERE = 0x40000; // Configuration Error Interrupt Enable

    static constexpr uint32_t FDCAN_TTILS_RESET_VALUE = 0x0;
    static constexpr uint32_t FDCAN_TTILS_SBCL = 0x1;     // Start of Basic Cycle Interrupt Line
    static constexpr uint32_t FDCAN_TTILS_SMCL = 0x2;     // Start of Matrix Cycle Interrupt Line
    static constexpr uint32_t FDCAN_TTILS_CSML = 0x4;     // Change of Synchronization Mode Interrupt Line
    static constexpr uint32_t FDCAN_TTILS_SOGL = 0x8;     // Start of Gap Interrupt Line
    static constexpr uint32_t FDCAN_TTILS_RTMIL = 0x10;   // Register Time Mark Interrupt Line
    static constexpr uint32_t FDCAN_TTILS_TTMIL = 0x20;   // Trigger Time Mark Event Internal Interrupt Line
    static constexpr uint32_t FDCAN_TTILS_SWEL = 0x40;    // Stop Watch Event Interrupt Line
    static constexpr uint32_t FDCAN_TTILS_GTWL = 0x80;    // Global Time Wrap Interrupt Line
    static constexpr uint32_t FDCAN_TTILS_GTDL = 0x100;   // Global Time Discontinuity Interrupt Line
    static constexpr uint32_t FDCAN_TTILS_GTEL = 0x200;   // Global Time Error Interrupt Line
    static constexpr uint32_t FDCAN_TTILS_TXUL = 0x400;   // Tx Count Underflow Interrupt Line
    static constexpr uint32_t FDCAN_TTILS_TXOL = 0x800;   // Tx Count Overflow Interrupt Line
    static constexpr uint32_t FDCAN_TTILS_SE1L = 0x1000;  // Scheduling Error 1 Interrupt Line
    static constexpr uint32_t FDCAN_TTILS_SE2L = 0x2000;  // Scheduling Error 2 Interrupt Line
    static constexpr uint32_t FDCAN_TTILS_ELCL = 0x4000;  // Change Error Level Interrupt Line
    static constexpr uint32_t FDCAN_TTILS_IWTGL = 0x8000; // Initialization Watch Trigger Interrupt Line
    static constexpr uint32_t FDCAN_TTILS_WTL = 0x10000;  // Watch Trigger Interrupt Line
    static constexpr uint32_t FDCAN_TTILS_AWL = 0x20000;  // Application Watchdog Interrupt Line
    static constexpr uint32_t FDCAN_TTILS_CERL = 0x40000; // Configuration Error Interrupt Line

    static constexpr uint32_t FDCAN_TTOST_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTOST_EL =               // Error Level
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTOST_MS =               // Master State.
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTOST_SYS =              // Synchronization State
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t FDCAN_TTOST_GTP = 0x40;        // Quality of Global Time Phase
    static constexpr uint32_t FDCAN_TTOST_QCS = 0x80;        // Quality of Clock Speed
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTOST_RTO =              // Reference Trigger Offset
        bit_field_t<8, 0xff>::value<X>();
    static constexpr uint32_t FDCAN_TTOST_WGTD = 0x400000;   // Wait for Global Time Discontinuity
    static constexpr uint32_t FDCAN_TTOST_GFI = 0x800000;    // Gap Finished Indicator.
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTOST_TMP =              // Time Master Priority
        bit_field_t<24, 0x7>::value<X>();
    static constexpr uint32_t FDCAN_TTOST_GSI = 0x8000000;   // Gap Started Indicator.
    static constexpr uint32_t FDCAN_TTOST_WFE = 0x10000000;  // Wait for Event
    static constexpr uint32_t FDCAN_TTOST_AWE = 0x20000000;  // Application Watchdog Event
    static constexpr uint32_t FDCAN_TTOST_WECS = 0x40000000; // Wait for External Clock Synchronization
    static constexpr uint32_t FDCAN_TTOST_SPL = 0x80000000;  // Schedule Phase Lock

    static constexpr uint32_t FDCAN_TURNA_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TURNA_NAV =   // Numerator Actual Value
        bit_field_t<0, 0x3ffff>::value<X>();

    static constexpr uint32_t FDCAN_TTLGT_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTLGT_LT =   // Local Time
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTLGT_GT =   // Global Time
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t FDCAN_TTCTC_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTCTC_CT =   // Cycle Time
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTCTC_CC =   // Cycle Count
        bit_field_t<16, 0x3f>::value<X>();

    static constexpr uint32_t FDCAN_TTCPT_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTCPT_CT =    // Cycle Count Value
        bit_field_t<0, 0x3f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTCPT_SWV =   // Stop Watch Value
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t FDCAN_TTCSM_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTCSM_CSM =   // Cycle Sync Mark
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t FDCAN_TTTS_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTTS_SWTDEL =   // Stop watch trigger input selection
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTTS_EVTSEL =   // Event trigger input selection
        bit_field_t<4, 0x3>::value<X>();
};


////
//
//      FDCAN1
//
////

struct stm32h742x_fdcan1_t
{
    volatile uint32_t FDCAN_CREL;   // [read-only] FDCAN Core Release Register
    volatile uint32_t FDCAN_ENDN;   // [read-only] FDCAN Core Release Register
    reserved_t<0x1> _0xc;
    volatile uint32_t FDCAN_DBTP;   // [read-only] FDCAN Data Bit Timing and Prescaler Register
    volatile uint32_t FDCAN_TEST;   // [read-only] FDCAN Test Register
    volatile uint32_t FDCAN_RWD;    // [read-only] FDCAN RAM Watchdog Register
    volatile uint32_t FDCAN_CCCR;   // [read-write] FDCAN CC Control Register
    volatile uint32_t FDCAN_NBTP;   // [read-write] FDCAN Nominal Bit Timing and Prescaler Register
    volatile uint32_t FDCAN_TSCC;   // [read-write] FDCAN Timestamp Counter Configuration Register
    volatile uint32_t FDCAN_TSCV;   // [read-write] FDCAN Timestamp Counter Value Register
    volatile uint32_t FDCAN_TOCC;   // [read-write] FDCAN Timeout Counter Configuration Register
    volatile uint32_t FDCAN_TOCV;   // [read-write] FDCAN Timeout Counter Value Register
    reserved_t<0x4> _0x40;
    volatile uint32_t FDCAN_ECR;    // [read-write] FDCAN Error Counter Register
    volatile uint32_t FDCAN_PSR;    // [read-write] FDCAN Protocol Status Register
    volatile uint32_t FDCAN_TDCR;   // [read-only] FDCAN Transmitter Delay Compensation Register
    reserved_t<0x1> _0x50;
    volatile uint32_t FDCAN_IR;     // [read-only] FDCAN Interrupt Register
    volatile uint32_t FDCAN_IE;     // [read-only] FDCAN Interrupt Enable Register
    volatile uint32_t FDCAN_ILS;    // [read-only] FDCAN Interrupt Line Select Register
    volatile uint32_t FDCAN_ILE;    // [read-write] FDCAN Interrupt Line Enable Register
    reserved_t<0x8> _0x80;
    volatile uint32_t FDCAN_GFC;    // [read-write] FDCAN Global Filter Configuration Register
    volatile uint32_t FDCAN_SIDFC;  // [read-write] FDCAN Standard ID Filter Configuration Register
    volatile uint32_t FDCAN_XIDFC;  // [read-write] FDCAN Extended ID Filter Configuration Register
    reserved_t<0x1> _0x90;
    volatile uint32_t FDCAN_XIDAM;  // [read-write] FDCAN Extended ID and Mask Register
    volatile uint32_t FDCAN_HPMS;   // [read-only] FDCAN High Priority Message Status Register
    volatile uint32_t FDCAN_NDAT1;  // [read-only] FDCAN New Data 1 Register
    volatile uint32_t FDCAN_NDAT2;  // [read-only] FDCAN New Data 2 Register
    volatile uint32_t FDCAN_RXF0C;  // [read-write] FDCAN Rx FIFO 0 Configuration Register
    volatile uint32_t FDCAN_RXF0S;  // [read-write] FDCAN Rx FIFO 0 Status Register
    volatile uint32_t FDCAN_RXF0A;  // [read-write] CAN Rx FIFO 0 Acknowledge Register
    volatile uint32_t FDCAN_RXBC;   // [read-write] FDCAN Rx Buffer Configuration Register
    volatile uint32_t FDCAN_RXF1C;  // [read-write] FDCAN Rx FIFO 1 Configuration Register
    volatile uint32_t FDCAN_RXF1S;  // [read-write] FDCAN Rx FIFO 1 Status Register
    volatile uint32_t FDCAN_RXF1A;  // [read-write] FDCAN Rx FIFO 1 Acknowledge Register
    volatile uint32_t FDCAN_RXESC;  // [read-write] FDCAN Rx Buffer Element Size Configuration Register
    volatile uint32_t FDCAN_TXBC;   // [read-write] FDCAN Tx Buffer Configuration Register
    volatile uint32_t FDCAN_TXFQS;  // [read-only] FDCAN Tx FIFO/Queue Status Register
    volatile uint32_t FDCAN_TXESC;  // [read-write] FDCAN Tx Buffer Element Size Configuration Register
    volatile uint32_t FDCAN_TXBRP;  // [read-only] FDCAN Tx Buffer Request Pending Register
    volatile uint32_t FDCAN_TXBAR;  // [read-write] FDCAN Tx Buffer Add Request Register
    volatile uint32_t FDCAN_TXBCR;  // [read-write] FDCAN Tx Buffer Cancellation Request Register
    volatile uint32_t FDCAN_TXBTO;  // [read-write] FDCAN Tx Buffer Transmission Occurred Register
    volatile uint32_t FDCAN_TXBCF;  // [read-only] FDCAN Tx Buffer Cancellation Finished Register
    volatile uint32_t FDCAN_TXBTIE; // [read-write] FDCAN Tx Buffer Transmission Interrupt Enable Register
    volatile uint32_t FDCAN_TXBCIE; // [read-write] FDCAN Tx Buffer Cancellation Finished Interrupt Enable Register
    reserved_t<0x2> _0xf0;
    volatile uint32_t FDCAN_TXEFC;  // [read-write] FDCAN Tx Event FIFO Configuration Register
    volatile uint32_t FDCAN_TXEFS;  // [read-write] FDCAN Tx Event FIFO Status Register
    volatile uint32_t FDCAN_TXEFA;  // [read-write] FDCAN Tx Event FIFO Acknowledge Register
    reserved_t<0x1> _0x100;
    volatile uint32_t FDCAN_TTTMC;  // [read-write] FDCAN TT Trigger Memory Configuration Register
    volatile uint32_t FDCAN_TTRMC;  // [read-write] FDCAN TT Reference Message Configuration Register
    volatile uint32_t FDCAN_TTOCF;  // [read-write] FDCAN TT Operation Configuration Register
    volatile uint32_t FDCAN_TTMLM;  // [read-write] FDCAN TT Matrix Limits Register
    volatile uint32_t FDCAN_TURCF;  // [read-write] FDCAN TUR Configuration Register
    volatile uint32_t FDCAN_TTOCN;  // [read-write] FDCAN TT Operation Control Register
    volatile uint32_t CAN_TTGTP;    // [read-write] FDCAN TT Global Time Preset Register
    volatile uint32_t FDCAN_TTTMK;  // [read-write] FDCAN TT Time Mark Register
    volatile uint32_t FDCAN_TTIR;   // [read-write] FDCAN TT Interrupt Register
    volatile uint32_t FDCAN_TTIE;   // [read-write] FDCAN TT Interrupt Enable Register
    volatile uint32_t FDCAN_TTILS;  // [read-write] FDCAN TT Interrupt Line Select Register
    volatile uint32_t FDCAN_TTOST;  // [read-write] FDCAN TT Operation Status Register
    volatile uint32_t FDCAN_TURNA;  // [read-only] FDCAN TUR Numerator Actual Register
    volatile uint32_t FDCAN_TTLGT;  // [read-only] FDCAN TT Local and Global Time Register
    volatile uint32_t FDCAN_TTCTC;  // [read-only] FDCAN TT Cycle Time and Count Register
    volatile uint32_t FDCAN_TTCPT;  // [read-only] FDCAN TT Capture Time Register
    volatile uint32_t FDCAN_TTCSM;  // [read-only] FDCAN TT Cycle Sync Mark Register
    reserved_t<0x6f> _0x300;
    volatile uint32_t FDCAN_TTTS;   // [read-write] FDCAN TT Trigger Select Register

    static constexpr uint32_t FDCAN_CREL_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_CREL_REL =       // Core release
        bit_field_t<28, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_CREL_STEP =      // Step of Core release
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_CREL_SUBSTEP =   // Sub-step of Core release
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_CREL_YEAR =      // Timestamp Year
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_CREL_MON =       // Timestamp Month
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_CREL_DAY =       // Timestamp Day
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t FDCAN_ENDN_RESET_VALUE = 0x0;

    static constexpr uint32_t FDCAN_DBTP_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_DBTP_DSJW =          // Synchronization Jump Width
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_DBTP_DTSEG2 =        // Data time segment after sample point
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_DBTP_DTSEG1 =        // Data time segment after sample point
        bit_field_t<8, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_DBTP_DBRP =          // Data BIt Rate Prescaler
        bit_field_t<16, 0x1f>::value<X>();
    static constexpr uint32_t FDCAN_DBTP_TDC = 0x800000; // Transceiver Delay Compensation

    static constexpr uint32_t FDCAN_TEST_RESET_VALUE = 0x0;
    static constexpr uint32_t FDCAN_TEST_LBCK = 0x10; // Loop Back mode
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TEST_TX =         // Loop Back mode
        bit_field_t<5, 0x3>::value<X>();
    static constexpr uint32_t FDCAN_TEST_RX = 0x80;   // Control of Transmit Pin

    static constexpr uint32_t FDCAN_RWD_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RWD_WDV =   // Watchdog value
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RWD_WDC =   // Watchdog configuration
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t FDCAN_CCCR_RESET_VALUE = 0x0;
    static constexpr uint32_t FDCAN_CCCR_INIT = 0x1;    // Initialization
    static constexpr uint32_t FDCAN_CCCR_CCE = 0x2;     // Configuration Change Enable
    static constexpr uint32_t FDCAN_CCCR_ASM = 0x4;     // ASM Restricted Operation Mode
    static constexpr uint32_t FDCAN_CCCR_CSA = 0x8;     // Clock Stop Acknowledge
    static constexpr uint32_t FDCAN_CCCR_CSR = 0x10;    // Clock Stop Request
    static constexpr uint32_t FDCAN_CCCR_MON = 0x20;    // Bus Monitoring Mode
    static constexpr uint32_t FDCAN_CCCR_DAR = 0x40;    // Disable Automatic Retransmission
    static constexpr uint32_t FDCAN_CCCR_TEST = 0x80;   // Test Mode Enable
    static constexpr uint32_t FDCAN_CCCR_FDOE = 0x100;  // FD Operation Enable
    static constexpr uint32_t FDCAN_CCCR_BSE = 0x200;   // FDCAN Bit Rate Switching
    static constexpr uint32_t FDCAN_CCCR_PXHD = 0x1000; // Protocol Exception Handling Disable
    static constexpr uint32_t FDCAN_CCCR_EFBI = 0x2000; // Edge Filtering during Bus Integration
    static constexpr uint32_t FDCAN_CCCR_TXP = 0x4000;  // TXP
    static constexpr uint32_t FDCAN_CCCR_NISO = 0x8000; // Non ISO Operation

    static constexpr uint32_t FDCAN_NBTP_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_NBTP_NSJW =     // NSJW: Nominal (Re)Synchronization Jump Width
        bit_field_t<25, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_NBTP_NBRP =     // Bit Rate Prescaler
        bit_field_t<16, 0x1ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_NBTP_NTSEG1 =   // Nominal Time segment before sample point
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_NBTP_TSEG2 =    // Nominal Time segment after sample point
        bit_field_t<0, 0x7f>::value<X>();

    static constexpr uint32_t FDCAN_TSCC_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TSCC_TCP =   // Timestamp Counter Prescaler
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TSCC_TSS =   // Timestamp Select
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t FDCAN_TSCV_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TSCV_TSC =   // Timestamp Counter
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t FDCAN_TOCC_RESET_VALUE = 0x0;
    static constexpr uint32_t FDCAN_TOCC_ETOC = 0x1; // Enable Timeout Counter
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TOCC_TOS =       // Timeout Select
        bit_field_t<1, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TOCC_TOP =       // Timeout Period
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t FDCAN_TOCV_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TOCV_TOC =   // Timeout Counter
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t FDCAN_ECR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_ECR_CEL =        // AN Error Logging
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t FDCAN_ECR_RP = 0x8000; // Receive Error Passive
    template<uint32_t X>
    static constexpr uint32_t FDCAN_ECR_TREC =       // Receive Error Counter
        bit_field_t<8, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_ECR_TEC =        // Transmit Error Counter
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t FDCAN_PSR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_PSR_LEC =          // Last Error Code
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_PSR_ACT =          // Activity
        bit_field_t<3, 0x3>::value<X>();
    static constexpr uint32_t FDCAN_PSR_EP = 0x20;     // Error Passive
    static constexpr uint32_t FDCAN_PSR_EW = 0x40;     // Warning Status
    static constexpr uint32_t FDCAN_PSR_BO = 0x80;     // Bus_Off Status
    template<uint32_t X>
    static constexpr uint32_t FDCAN_PSR_DLEC =         // Data Last Error Code
        bit_field_t<8, 0x7>::value<X>();
    static constexpr uint32_t FDCAN_PSR_RESI = 0x800;  // ESI flag of last received FDCAN Message
    static constexpr uint32_t FDCAN_PSR_RBRS = 0x1000; // BRS flag of last received FDCAN Message
    static constexpr uint32_t FDCAN_PSR_REDL = 0x2000; // Received FDCAN Message
    static constexpr uint32_t FDCAN_PSR_PXE = 0x4000;  // Protocol Exception Event
    template<uint32_t X>
    static constexpr uint32_t FDCAN_PSR_TDCV =         // Transmitter Delay Compensation Value
        bit_field_t<16, 0x7f>::value<X>();

    static constexpr uint32_t FDCAN_TDCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TDCR_TDCF =   // Transmitter Delay Compensation Filter Window Length
        bit_field_t<0, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TDCR_TDCO =   // Transmitter Delay Compensation Offset
        bit_field_t<8, 0x7f>::value<X>();

    static constexpr uint32_t FDCAN_IR_RESET_VALUE = 0x0;
    static constexpr uint32_t FDCAN_IR_RF0N = 0x1;       // Rx FIFO 0 New Message
    static constexpr uint32_t FDCAN_IR_RF0W = 0x2;       // Rx FIFO 0 Full
    static constexpr uint32_t FDCAN_IR_RF0F = 0x4;       // Rx FIFO 0 Full
    static constexpr uint32_t FDCAN_IR_RF0L = 0x8;       // Rx FIFO 0 Message Lost
    static constexpr uint32_t FDCAN_IR_RF1N = 0x10;      // Rx FIFO 1 New Message
    static constexpr uint32_t FDCAN_IR_RF1W = 0x20;      // Rx FIFO 1 Watermark Reached
    static constexpr uint32_t FDCAN_IR_RF1F = 0x40;      // Rx FIFO 1 Watermark Reached
    static constexpr uint32_t FDCAN_IR_RF1L = 0x80;      // Rx FIFO 1 Message Lost
    static constexpr uint32_t FDCAN_IR_HPM = 0x100;      // High Priority Message
    static constexpr uint32_t FDCAN_IR_TC = 0x200;       // Transmission Completed
    static constexpr uint32_t FDCAN_IR_TCF = 0x400;      // Transmission Cancellation Finished
    static constexpr uint32_t FDCAN_IR_TEF = 0x800;      // Tx FIFO Empty
    static constexpr uint32_t FDCAN_IR_TEFN = 0x1000;    // Tx Event FIFO New Entry
    static constexpr uint32_t FDCAN_IR_TEFW = 0x2000;    // Tx Event FIFO Watermark Reached
    static constexpr uint32_t FDCAN_IR_TEFF = 0x4000;    // Tx Event FIFO Full
    static constexpr uint32_t FDCAN_IR_TEFL = 0x8000;    // Tx Event FIFO Element Lost
    static constexpr uint32_t FDCAN_IR_TSW = 0x10000;    // Timestamp Wraparound
    static constexpr uint32_t FDCAN_IR_MRAF = 0x20000;   // Message RAM Access Failure
    static constexpr uint32_t FDCAN_IR_TOO = 0x40000;    // Timeout Occurred
    static constexpr uint32_t FDCAN_IR_DRX = 0x80000;    // Message stored to Dedicated Rx Buffer
    static constexpr uint32_t FDCAN_IR_ELO = 0x400000;   // Error Logging Overflow
    static constexpr uint32_t FDCAN_IR_EP = 0x800000;    // Error Passive
    static constexpr uint32_t FDCAN_IR_EW = 0x1000000;   // Warning Status
    static constexpr uint32_t FDCAN_IR_BO = 0x2000000;   // Bus_Off Status
    static constexpr uint32_t FDCAN_IR_WDI = 0x4000000;  // Watchdog Interrupt
    static constexpr uint32_t FDCAN_IR_PEA = 0x8000000;  // Protocol Error in Arbitration Phase (Nominal Bit Time is used)
    static constexpr uint32_t FDCAN_IR_PED = 0x10000000; // Protocol Error in Data Phase (Data Bit Time is used)
    static constexpr uint32_t FDCAN_IR_ARA = 0x20000000; // Access to Reserved Address

    static constexpr uint32_t FDCAN_IE_RESET_VALUE = 0x0;
    static constexpr uint32_t FDCAN_IE_RF0NE = 0x1;       // Rx FIFO 0 New Message Enable
    static constexpr uint32_t FDCAN_IE_RF0WE = 0x2;       // Rx FIFO 0 Full Enable
    static constexpr uint32_t FDCAN_IE_RF0FE = 0x4;       // Rx FIFO 0 Full Enable
    static constexpr uint32_t FDCAN_IE_RF0LE = 0x8;       // Rx FIFO 0 Message Lost Enable
    static constexpr uint32_t FDCAN_IE_RF1NE = 0x10;      // Rx FIFO 1 New Message Enable
    static constexpr uint32_t FDCAN_IE_RF1WE = 0x20;      // Rx FIFO 1 Watermark Reached Enable
    static constexpr uint32_t FDCAN_IE_RF1FE = 0x40;      // Rx FIFO 1 Watermark Reached Enable
    static constexpr uint32_t FDCAN_IE_RF1LE = 0x80;      // Rx FIFO 1 Message Lost Enable
    static constexpr uint32_t FDCAN_IE_HPME = 0x100;      // High Priority Message Enable
    static constexpr uint32_t FDCAN_IE_TCE = 0x200;       // Transmission Completed Enable
    static constexpr uint32_t FDCAN_IE_TCFE = 0x400;      // Transmission Cancellation Finished Enable
    static constexpr uint32_t FDCAN_IE_TEFE = 0x800;      // Tx FIFO Empty Enable
    static constexpr uint32_t FDCAN_IE_TEFNE = 0x1000;    // Tx Event FIFO New Entry Enable
    static constexpr uint32_t FDCAN_IE_TEFWE = 0x2000;    // Tx Event FIFO Watermark Reached Enable
    static constexpr uint32_t FDCAN_IE_TEFFE = 0x4000;    // Tx Event FIFO Full Enable
    static constexpr uint32_t FDCAN_IE_TEFLE = 0x8000;    // Tx Event FIFO Element Lost Enable
    static constexpr uint32_t FDCAN_IE_TSWE = 0x10000;    // Timestamp Wraparound Enable
    static constexpr uint32_t FDCAN_IE_MRAFE = 0x20000;   // Message RAM Access Failure Enable
    static constexpr uint32_t FDCAN_IE_TOOE = 0x40000;    // Timeout Occurred Enable
    static constexpr uint32_t FDCAN_IE_DRXE = 0x80000;    // Message stored to Dedicated Rx Buffer Enable
    static constexpr uint32_t FDCAN_IE_BECE = 0x100000;   // Bit Error Corrected Interrupt Enable
    static constexpr uint32_t FDCAN_IE_BEUE = 0x200000;   // Bit Error Uncorrected Interrupt Enable
    static constexpr uint32_t FDCAN_IE_ELOE = 0x400000;   // Error Logging Overflow Enable
    static constexpr uint32_t FDCAN_IE_EPE = 0x800000;    // Error Passive Enable
    static constexpr uint32_t FDCAN_IE_EWE = 0x1000000;   // Warning Status Enable
    static constexpr uint32_t FDCAN_IE_BOE = 0x2000000;   // Bus_Off Status Enable
    static constexpr uint32_t FDCAN_IE_WDIE = 0x4000000;  // Watchdog Interrupt Enable
    static constexpr uint32_t FDCAN_IE_PEAE = 0x8000000;  // Protocol Error in Arbitration Phase Enable
    static constexpr uint32_t FDCAN_IE_PEDE = 0x10000000; // Protocol Error in Data Phase Enable
    static constexpr uint32_t FDCAN_IE_ARAE = 0x20000000; // Access to Reserved Address Enable

    static constexpr uint32_t FDCAN_ILS_RESET_VALUE = 0x0;
    static constexpr uint32_t FDCAN_ILS_RF0NL = 0x1;       // Rx FIFO 0 New Message Interrupt Line
    static constexpr uint32_t FDCAN_ILS_RF0WL = 0x2;       // Rx FIFO 0 Watermark Reached Interrupt Line
    static constexpr uint32_t FDCAN_ILS_RF0FL = 0x4;       // Rx FIFO 0 Full Interrupt Line
    static constexpr uint32_t FDCAN_ILS_RF0LL = 0x8;       // Rx FIFO 0 Message Lost Interrupt Line
    static constexpr uint32_t FDCAN_ILS_RF1NL = 0x10;      // Rx FIFO 1 New Message Interrupt Line
    static constexpr uint32_t FDCAN_ILS_RF1WL = 0x20;      // Rx FIFO 1 Watermark Reached Interrupt Line
    static constexpr uint32_t FDCAN_ILS_RF1FL = 0x40;      // Rx FIFO 1 Full Interrupt Line
    static constexpr uint32_t FDCAN_ILS_RF1LL = 0x80;      // Rx FIFO 1 Message Lost Interrupt Line
    static constexpr uint32_t FDCAN_ILS_HPML = 0x100;      // High Priority Message Interrupt Line
    static constexpr uint32_t FDCAN_ILS_TCL = 0x200;       // Transmission Completed Interrupt Line
    static constexpr uint32_t FDCAN_ILS_TCFL = 0x400;      // Transmission Cancellation Finished Interrupt Line
    static constexpr uint32_t FDCAN_ILS_TEFL = 0x800;      // Tx FIFO Empty Interrupt Line
    static constexpr uint32_t FDCAN_ILS_TEFNL = 0x1000;    // Tx Event FIFO New Entry Interrupt Line
    static constexpr uint32_t FDCAN_ILS_TEFWL = 0x2000;    // Tx Event FIFO Watermark Reached Interrupt Line
    static constexpr uint32_t FDCAN_ILS_TEFFL = 0x4000;    // Tx Event FIFO Full Interrupt Line
    static constexpr uint32_t FDCAN_ILS_TEFLL = 0x8000;    // Tx Event FIFO Element Lost Interrupt Line
    static constexpr uint32_t FDCAN_ILS_TSWL = 0x10000;    // Timestamp Wraparound Interrupt Line
    static constexpr uint32_t FDCAN_ILS_MRAFL = 0x20000;   // Message RAM Access Failure Interrupt Line
    static constexpr uint32_t FDCAN_ILS_TOOL = 0x40000;    // Timeout Occurred Interrupt Line
    static constexpr uint32_t FDCAN_ILS_DRXL = 0x80000;    // Message stored to Dedicated Rx Buffer Interrupt Line
    static constexpr uint32_t FDCAN_ILS_BECL = 0x100000;   // Bit Error Corrected Interrupt Line
    static constexpr uint32_t FDCAN_ILS_BEUL = 0x200000;   // Bit Error Uncorrected Interrupt Line
    static constexpr uint32_t FDCAN_ILS_ELOL = 0x400000;   // Error Logging Overflow Interrupt Line
    static constexpr uint32_t FDCAN_ILS_EPL = 0x800000;    // Error Passive Interrupt Line
    static constexpr uint32_t FDCAN_ILS_EWL = 0x1000000;   // Warning Status Interrupt Line
    static constexpr uint32_t FDCAN_ILS_BOL = 0x2000000;   // Bus_Off Status
    static constexpr uint32_t FDCAN_ILS_WDIL = 0x4000000;  // Watchdog Interrupt Line
    static constexpr uint32_t FDCAN_ILS_PEAL = 0x8000000;  // Protocol Error in Arbitration Phase Line
    static constexpr uint32_t FDCAN_ILS_PEDL = 0x10000000; // Protocol Error in Data Phase Line
    static constexpr uint32_t FDCAN_ILS_ARAL = 0x20000000; // Access to Reserved Address Line

    static constexpr uint32_t FDCAN_ILE_RESET_VALUE = 0x0;
    static constexpr uint32_t FDCAN_ILE_EINT0 = 0x1; // Enable Interrupt Line 0
    static constexpr uint32_t FDCAN_ILE_EINT1 = 0x2; // Enable Interrupt Line 1

    static constexpr uint32_t FDCAN_GFC_RESET_VALUE = 0x0;
    static constexpr uint32_t FDCAN_GFC_RRFE = 0x1; // Reject Remote Frames Extended
    static constexpr uint32_t FDCAN_GFC_RRFS = 0x2; // Reject Remote Frames Standard
    template<uint32_t X>
    static constexpr uint32_t FDCAN_GFC_ANFE =      // Accept Non-matching Frames Extended
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_GFC_ANFS =      // Accept Non-matching Frames Standard
        bit_field_t<4, 0x3>::value<X>();

    static constexpr uint32_t FDCAN_SIDFC_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_SIDFC_FLSSA =   // Filter List Standard Start Address
        bit_field_t<2, 0x3fff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_SIDFC_LSS =     // List Size Standard
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t FDCAN_XIDFC_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_XIDFC_FLESA =   // Filter List Standard Start Address
        bit_field_t<2, 0x3fff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_XIDFC_LSE =     // List Size Extended
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t FDCAN_XIDAM_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_XIDAM_EIDM =   // Extended ID Mask
        bit_field_t<0, 0x1fffffff>::value<X>();

    static constexpr uint32_t FDCAN_HPMS_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_HPMS_BIDX =         // Buffer Index
        bit_field_t<0, 0x3f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_HPMS_MSI =          // Message Storage Indicator
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_HPMS_FIDX =         // Filter Index
        bit_field_t<8, 0x7f>::value<X>();
    static constexpr uint32_t FDCAN_HPMS_FLST = 0x8000; // Filter List

    static constexpr uint32_t FDCAN_NDAT1_RESET_VALUE = 0x0;
    static constexpr uint32_t FDCAN_NDAT1_ND0 = 0x1;         // New data
    static constexpr uint32_t FDCAN_NDAT1_ND1 = 0x2;         // New data
    static constexpr uint32_t FDCAN_NDAT1_ND2 = 0x4;         // New data
    static constexpr uint32_t FDCAN_NDAT1_ND3 = 0x8;         // New data
    static constexpr uint32_t FDCAN_NDAT1_ND4 = 0x10;        // New data
    static constexpr uint32_t FDCAN_NDAT1_ND5 = 0x20;        // New data
    static constexpr uint32_t FDCAN_NDAT1_ND6 = 0x40;        // New data
    static constexpr uint32_t FDCAN_NDAT1_ND7 = 0x80;        // New data
    static constexpr uint32_t FDCAN_NDAT1_ND8 = 0x100;       // New data
    static constexpr uint32_t FDCAN_NDAT1_ND9 = 0x200;       // New data
    static constexpr uint32_t FDCAN_NDAT1_ND10 = 0x400;      // New data
    static constexpr uint32_t FDCAN_NDAT1_ND11 = 0x800;      // New data
    static constexpr uint32_t FDCAN_NDAT1_ND12 = 0x1000;     // New data
    static constexpr uint32_t FDCAN_NDAT1_ND13 = 0x2000;     // New data
    static constexpr uint32_t FDCAN_NDAT1_ND14 = 0x4000;     // New data
    static constexpr uint32_t FDCAN_NDAT1_ND15 = 0x8000;     // New data
    static constexpr uint32_t FDCAN_NDAT1_ND16 = 0x10000;    // New data
    static constexpr uint32_t FDCAN_NDAT1_ND17 = 0x20000;    // New data
    static constexpr uint32_t FDCAN_NDAT1_ND18 = 0x40000;    // New data
    static constexpr uint32_t FDCAN_NDAT1_ND19 = 0x80000;    // New data
    static constexpr uint32_t FDCAN_NDAT1_ND20 = 0x100000;   // New data
    static constexpr uint32_t FDCAN_NDAT1_ND21 = 0x200000;   // New data
    static constexpr uint32_t FDCAN_NDAT1_ND22 = 0x400000;   // New data
    static constexpr uint32_t FDCAN_NDAT1_ND23 = 0x800000;   // New data
    static constexpr uint32_t FDCAN_NDAT1_ND24 = 0x1000000;  // New data
    static constexpr uint32_t FDCAN_NDAT1_ND25 = 0x2000000;  // New data
    static constexpr uint32_t FDCAN_NDAT1_ND26 = 0x4000000;  // New data
    static constexpr uint32_t FDCAN_NDAT1_ND27 = 0x8000000;  // New data
    static constexpr uint32_t FDCAN_NDAT1_ND28 = 0x10000000; // New data
    static constexpr uint32_t FDCAN_NDAT1_ND29 = 0x20000000; // New data
    static constexpr uint32_t FDCAN_NDAT1_ND30 = 0x40000000; // New data
    static constexpr uint32_t FDCAN_NDAT1_ND31 = 0x80000000; // New data

    static constexpr uint32_t FDCAN_NDAT2_RESET_VALUE = 0x0;
    static constexpr uint32_t FDCAN_NDAT2_ND32 = 0x1;        // New data
    static constexpr uint32_t FDCAN_NDAT2_ND33 = 0x2;        // New data
    static constexpr uint32_t FDCAN_NDAT2_ND34 = 0x4;        // New data
    static constexpr uint32_t FDCAN_NDAT2_ND35 = 0x8;        // New data
    static constexpr uint32_t FDCAN_NDAT2_ND36 = 0x10;       // New data
    static constexpr uint32_t FDCAN_NDAT2_ND37 = 0x20;       // New data
    static constexpr uint32_t FDCAN_NDAT2_ND38 = 0x40;       // New data
    static constexpr uint32_t FDCAN_NDAT2_ND39 = 0x80;       // New data
    static constexpr uint32_t FDCAN_NDAT2_ND40 = 0x100;      // New data
    static constexpr uint32_t FDCAN_NDAT2_ND41 = 0x200;      // New data
    static constexpr uint32_t FDCAN_NDAT2_ND42 = 0x400;      // New data
    static constexpr uint32_t FDCAN_NDAT2_ND43 = 0x800;      // New data
    static constexpr uint32_t FDCAN_NDAT2_ND44 = 0x1000;     // New data
    static constexpr uint32_t FDCAN_NDAT2_ND45 = 0x2000;     // New data
    static constexpr uint32_t FDCAN_NDAT2_ND46 = 0x4000;     // New data
    static constexpr uint32_t FDCAN_NDAT2_ND47 = 0x8000;     // New data
    static constexpr uint32_t FDCAN_NDAT2_ND48 = 0x10000;    // New data
    static constexpr uint32_t FDCAN_NDAT2_ND49 = 0x20000;    // New data
    static constexpr uint32_t FDCAN_NDAT2_ND50 = 0x40000;    // New data
    static constexpr uint32_t FDCAN_NDAT2_ND51 = 0x80000;    // New data
    static constexpr uint32_t FDCAN_NDAT2_ND52 = 0x100000;   // New data
    static constexpr uint32_t FDCAN_NDAT2_ND53 = 0x200000;   // New data
    static constexpr uint32_t FDCAN_NDAT2_ND54 = 0x400000;   // New data
    static constexpr uint32_t FDCAN_NDAT2_ND55 = 0x800000;   // New data
    static constexpr uint32_t FDCAN_NDAT2_ND56 = 0x1000000;  // New data
    static constexpr uint32_t FDCAN_NDAT2_ND57 = 0x2000000;  // New data
    static constexpr uint32_t FDCAN_NDAT2_ND58 = 0x4000000;  // New data
    static constexpr uint32_t FDCAN_NDAT2_ND59 = 0x8000000;  // New data
    static constexpr uint32_t FDCAN_NDAT2_ND60 = 0x10000000; // New data
    static constexpr uint32_t FDCAN_NDAT2_ND61 = 0x20000000; // New data
    static constexpr uint32_t FDCAN_NDAT2_ND62 = 0x40000000; // New data
    static constexpr uint32_t FDCAN_NDAT2_ND63 = 0x80000000; // New data

    static constexpr uint32_t FDCAN_RXF0C_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXF0C_F0SA =   // Rx FIFO 0 Start Address
        bit_field_t<2, 0x3fff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXF0C_F0S =    // Rx FIFO 0 Size
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXF0C_F0WM =   // FIFO 0 Watermark
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t FDCAN_RXF0S_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXF0S_F0FL =            // Rx FIFO 0 Fill Level
        bit_field_t<0, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXF0S_F0G =             // Rx FIFO 0 Get Index
        bit_field_t<8, 0x3f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXF0S_F0P =             // Rx FIFO 0 Put Index
        bit_field_t<16, 0x3f>::value<X>();
    static constexpr uint32_t FDCAN_RXF0S_F0F = 0x1000000;  // Rx FIFO 0 Full
    static constexpr uint32_t FDCAN_RXF0S_RF0L = 0x2000000; // Rx FIFO 0 Message Lost

    static constexpr uint32_t FDCAN_RXF0A_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXF0A_FA01 =   // Rx FIFO 0 Acknowledge Index
        bit_field_t<0, 0x3f>::value<X>();

    static constexpr uint32_t FDCAN_RXBC_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXBC_RBSA =   // Rx Buffer Start Address
        bit_field_t<2, 0x3fff>::value<X>();

    static constexpr uint32_t FDCAN_RXF1C_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXF1C_F1SA =   // Rx FIFO 1 Start Address
        bit_field_t<2, 0x3fff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXF1C_F1S =    // Rx FIFO 1 Size
        bit_field_t<16, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXF1C_F1WM =   // Rx FIFO 1 Watermark
        bit_field_t<24, 0x7f>::value<X>();

    static constexpr uint32_t FDCAN_RXF1S_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXF1S_F1FL =            // Rx FIFO 1 Fill Level
        bit_field_t<0, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXF1S_F1GI =            // Rx FIFO 1 Get Index
        bit_field_t<8, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXF1S_F1PI =            // Rx FIFO 1 Put Index
        bit_field_t<16, 0x7f>::value<X>();
    static constexpr uint32_t FDCAN_RXF1S_F1F = 0x1000000;  // Rx FIFO 1 Full
    static constexpr uint32_t FDCAN_RXF1S_RF1L = 0x2000000; // Rx FIFO 1 Message Lost
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXF1S_DMS =             // Debug Message Status
        bit_field_t<30, 0x3>::value<X>();

    static constexpr uint32_t FDCAN_RXF1A_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXF1A_F1AI =   // Rx FIFO 1 Acknowledge Index
        bit_field_t<0, 0x3f>::value<X>();

    static constexpr uint32_t FDCAN_RXESC_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXESC_F0DS =   // Rx FIFO 1 Data Field Size:
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXESC_F1DS =   // Rx FIFO 0 Data Field Size:
        bit_field_t<4, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXESC_RBDS =   // Rx Buffer Data Field Size:
        bit_field_t<8, 0x7>::value<X>();

    static constexpr uint32_t FDCAN_TXBC_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TXBC_TBSA =             // Tx Buffers Start Address
        bit_field_t<2, 0x3fff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TXBC_NDTB =             // Number of Dedicated Transmit Buffers
        bit_field_t<16, 0x3f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TXBC_TFQS =             // Transmit FIFO/Queue Size
        bit_field_t<24, 0x3f>::value<X>();
    static constexpr uint32_t FDCAN_TXBC_TFQM = 0x40000000; // Tx FIFO/Queue Mode

    static constexpr uint32_t FDCAN_TXFQS_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TXFQS_TFFL =           // Tx FIFO Free Level
        bit_field_t<0, 0x3f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TXFQS_TFGI =           // TFGI
        bit_field_t<8, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TXFQS_TFQPI =          // Tx FIFO/Queue Put Index
        bit_field_t<16, 0x1f>::value<X>();
    static constexpr uint32_t FDCAN_TXFQS_TFQF = 0x200000; // Tx FIFO/Queue Full

    static constexpr uint32_t FDCAN_TXESC_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TXESC_TBDS =   // Tx Buffer Data Field Size:
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t FDCAN_TXBRP_RESET_VALUE = 0x0;

    static constexpr uint32_t FDCAN_TXBAR_RESET_VALUE = 0x0;

    static constexpr uint32_t FDCAN_TXBCR_RESET_VALUE = 0x0;

    static constexpr uint32_t FDCAN_TXBTO_RESET_VALUE = 0x0;

    static constexpr uint32_t FDCAN_TXBCF_RESET_VALUE = 0x0;

    static constexpr uint32_t FDCAN_TXBTIE_RESET_VALUE = 0x0;

    static constexpr uint32_t FDCAN_TXBCIE_RESET_VALUE = 0x0;

    static constexpr uint32_t FDCAN_TXEFC_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TXEFC_EFSA =   // Event FIFO Start Address
        bit_field_t<2, 0x3fff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TXEFC_EFS =    // Event FIFO Size
        bit_field_t<16, 0x3f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TXEFC_EFWM =   // Event FIFO Watermark
        bit_field_t<24, 0x3f>::value<X>();

    static constexpr uint32_t FDCAN_TXEFS_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TXEFS_EFFL =            // Event FIFO Fill Level
        bit_field_t<0, 0x3f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TXEFS_EFGI =            // Event FIFO Get Index.
        bit_field_t<8, 0x1f>::value<X>();
    static constexpr uint32_t FDCAN_TXEFS_EFF = 0x1000000;  // Event FIFO Full.
    static constexpr uint32_t FDCAN_TXEFS_TEFL = 0x2000000; // Tx Event FIFO Element Lost.

    static constexpr uint32_t FDCAN_TXEFA_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TXEFA_EFAI =   // Event FIFO Acknowledge Index
        bit_field_t<0, 0x1f>::value<X>();

    static constexpr uint32_t FDCAN_TTTMC_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTTMC_TMSA =   // Trigger Memory Start Address
        bit_field_t<2, 0x3fff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTTMC_TME =    // Trigger Memory Elements
        bit_field_t<16, 0x7f>::value<X>();

    static constexpr uint32_t FDCAN_TTRMC_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTRMC_RID =              // Reference Identifier.
        bit_field_t<0, 0x1fffffff>::value<X>();
    static constexpr uint32_t FDCAN_TTRMC_XTD = 0x40000000;  // Extended Identifier
    static constexpr uint32_t FDCAN_TTRMC_RMPS = 0x80000000; // Reference Message Payload Select

    static constexpr uint32_t FDCAN_TTOCF_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTOCF_OM =              // Operation Mode
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t FDCAN_TTOCF_GEN = 0x8;        // Gap Enable
    static constexpr uint32_t FDCAN_TTOCF_TM = 0x10;        // Time Master
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTOCF_LDSDL =           // LD of Synchronization Deviation Limit
        bit_field_t<5, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTOCF_IRTO =            // Initial Reference Trigger Offset
        bit_field_t<8, 0x7f>::value<X>();
    static constexpr uint32_t FDCAN_TTOCF_EECS = 0x8000;    // Enable External Clock Synchronization
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTOCF_AWL =             // Application Watchdog Limit
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t FDCAN_TTOCF_EGTF = 0x1000000; // Enable Global Time Filtering
    static constexpr uint32_t FDCAN_TTOCF_ECC = 0x2000000;  // Enable Clock Calibration
    static constexpr uint32_t FDCAN_TTOCF_EVTP = 0x4000000; // Event Trigger Polarity

    static constexpr uint32_t FDCAN_TTMLM_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTMLM_CCM =    // Cycle Count Max
        bit_field_t<0, 0x3f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTMLM_CSS =    // Cycle Start Synchronization
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTMLM_TXEW =   // Tx Enable Window
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTMLM_ENTT =   // Expected Number of Tx Triggers
        bit_field_t<16, 0xfff>::value<X>();

    static constexpr uint32_t FDCAN_TURCF_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TURCF_NCL =             // Numerator Configuration Low.
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TURCF_DC =              // Denominator Configuration.
        bit_field_t<16, 0x3fff>::value<X>();
    static constexpr uint32_t FDCAN_TURCF_ELT = 0x80000000; // Enable Local Time

    static constexpr uint32_t FDCAN_TTOCN_RESET_VALUE = 0x0;
    static constexpr uint32_t FDCAN_TTOCN_SGT = 0x1;     // Set Global time
    static constexpr uint32_t FDCAN_TTOCN_ECS = 0x2;     // External Clock Synchronization
    static constexpr uint32_t FDCAN_TTOCN_SWP = 0x4;     // Stop Watch Polarity
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTOCN_SWS =          // Stop Watch Source.
        bit_field_t<3, 0x3>::value<X>();
    static constexpr uint32_t FDCAN_TTOCN_RTIE = 0x20;   // Register Time Mark Interrupt Pulse Enable
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTOCN_TMC =          // Register Time Mark Compare
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t FDCAN_TTOCN_TTIE = 0x100;  // Trigger Time Mark Interrupt Pulse Enable
    static constexpr uint32_t FDCAN_TTOCN_GCS = 0x200;   // Gap Control Select
    static constexpr uint32_t FDCAN_TTOCN_FGP = 0x400;   // Finish Gap.
    static constexpr uint32_t FDCAN_TTOCN_TMG = 0x800;   // Time Mark Gap
    static constexpr uint32_t FDCAN_TTOCN_NIG = 0x1000;  // Next is Gap
    static constexpr uint32_t FDCAN_TTOCN_ESCN = 0x2000; // External Synchronization Control
    static constexpr uint32_t FDCAN_TTOCN_LCKC = 0x8000; // TT Operation Control Register Locked

    static constexpr uint32_t CAN_TTGTP_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CAN_TTGTP_NCL =   // Time Preset
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CAN_TTGTP_CTP =   // Cycle Time Target Phase
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t FDCAN_TTTMK_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTTMK_TM =               // Time Mark
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTTMK_TICC =             // Time Mark Cycle Code
        bit_field_t<16, 0x7f>::value<X>();
    static constexpr uint32_t FDCAN_TTTMK_LCKM = 0x80000000; // TT Time Mark Register Locked

    static constexpr uint32_t FDCAN_TTIR_RESET_VALUE = 0x0;
    static constexpr uint32_t FDCAN_TTIR_SBC = 0x1;     // Start of Basic Cycle
    static constexpr uint32_t FDCAN_TTIR_SMC = 0x2;     // Start of Matrix Cycle
    static constexpr uint32_t FDCAN_TTIR_CSM = 0x4;     // Change of Synchronization Mode
    static constexpr uint32_t FDCAN_TTIR_SOG = 0x8;     // Start of Gap
    static constexpr uint32_t FDCAN_TTIR_RTMI = 0x10;   // Register Time Mark Interrupt.
    static constexpr uint32_t FDCAN_TTIR_TTMI = 0x20;   // Trigger Time Mark Event Internal
    static constexpr uint32_t FDCAN_TTIR_SWE = 0x40;    // Stop Watch Event
    static constexpr uint32_t FDCAN_TTIR_GTW = 0x80;    // Global Time Wrap
    static constexpr uint32_t FDCAN_TTIR_GTD = 0x100;   // Global Time Discontinuity
    static constexpr uint32_t FDCAN_TTIR_GTE = 0x200;   // Global Time Error
    static constexpr uint32_t FDCAN_TTIR_TXU = 0x400;   // Tx Count Underflow
    static constexpr uint32_t FDCAN_TTIR_TXO = 0x800;   // Tx Count Overflow
    static constexpr uint32_t FDCAN_TTIR_SE1 = 0x1000;  // Scheduling Error 1
    static constexpr uint32_t FDCAN_TTIR_SE2 = 0x2000;  // Scheduling Error 2
    static constexpr uint32_t FDCAN_TTIR_ELC = 0x4000;  // Error Level Changed.
    static constexpr uint32_t FDCAN_TTIR_IWTG = 0x8000; // Initialization Watch Trigger
    static constexpr uint32_t FDCAN_TTIR_WT = 0x10000;  // Watch Trigger
    static constexpr uint32_t FDCAN_TTIR_AW = 0x20000;  // Application Watchdog
    static constexpr uint32_t FDCAN_TTIR_CER = 0x40000; // Configuration Error

    static constexpr uint32_t FDCAN_TTIE_RESET_VALUE = 0x0;
    static constexpr uint32_t FDCAN_TTIE_SBCE = 0x1;     // Start of Basic Cycle Interrupt Enable
    static constexpr uint32_t FDCAN_TTIE_SMCE = 0x2;     // Start of Matrix Cycle Interrupt Enable
    static constexpr uint32_t FDCAN_TTIE_CSME = 0x4;     // Change of Synchronization Mode Interrupt Enable
    static constexpr uint32_t FDCAN_TTIE_SOGE = 0x8;     // Start of Gap Interrupt Enable
    static constexpr uint32_t FDCAN_TTIE_RTMIE = 0x10;   // Register Time Mark Interrupt Enable
    static constexpr uint32_t FDCAN_TTIE_TTMIE = 0x20;   // Trigger Time Mark Event Internal Interrupt Enable
    static constexpr uint32_t FDCAN_TTIE_SWEE = 0x40;    // Stop Watch Event Interrupt Enable
    static constexpr uint32_t FDCAN_TTIE_GTWE = 0x80;    // Global Time Wrap Interrupt Enable
    static constexpr uint32_t FDCAN_TTIE_GTDE = 0x100;   // Global Time Discontinuity Interrupt Enable
    static constexpr uint32_t FDCAN_TTIE_GTEE = 0x200;   // Global Time Error Interrupt Enable
    static constexpr uint32_t FDCAN_TTIE_TXUE = 0x400;   // Tx Count Underflow Interrupt Enable
    static constexpr uint32_t FDCAN_TTIE_TXOE = 0x800;   // Tx Count Overflow Interrupt Enable
    static constexpr uint32_t FDCAN_TTIE_SE1E = 0x1000;  // Scheduling Error 1 Interrupt Enable
    static constexpr uint32_t FDCAN_TTIE_SE2E = 0x2000;  // Scheduling Error 2 Interrupt Enable
    static constexpr uint32_t FDCAN_TTIE_ELCE = 0x4000;  // Change Error Level Interrupt Enable
    static constexpr uint32_t FDCAN_TTIE_IWTGE = 0x8000; // Initialization Watch Trigger Interrupt Enable
    static constexpr uint32_t FDCAN_TTIE_WTE = 0x10000;  // Watch Trigger Interrupt Enable
    static constexpr uint32_t FDCAN_TTIE_AWE = 0x20000;  // Application Watchdog Interrupt Enable
    static constexpr uint32_t FDCAN_TTIE_CERE = 0x40000; // Configuration Error Interrupt Enable

    static constexpr uint32_t FDCAN_TTILS_RESET_VALUE = 0x0;
    static constexpr uint32_t FDCAN_TTILS_SBCL = 0x1;     // Start of Basic Cycle Interrupt Line
    static constexpr uint32_t FDCAN_TTILS_SMCL = 0x2;     // Start of Matrix Cycle Interrupt Line
    static constexpr uint32_t FDCAN_TTILS_CSML = 0x4;     // Change of Synchronization Mode Interrupt Line
    static constexpr uint32_t FDCAN_TTILS_SOGL = 0x8;     // Start of Gap Interrupt Line
    static constexpr uint32_t FDCAN_TTILS_RTMIL = 0x10;   // Register Time Mark Interrupt Line
    static constexpr uint32_t FDCAN_TTILS_TTMIL = 0x20;   // Trigger Time Mark Event Internal Interrupt Line
    static constexpr uint32_t FDCAN_TTILS_SWEL = 0x40;    // Stop Watch Event Interrupt Line
    static constexpr uint32_t FDCAN_TTILS_GTWL = 0x80;    // Global Time Wrap Interrupt Line
    static constexpr uint32_t FDCAN_TTILS_GTDL = 0x100;   // Global Time Discontinuity Interrupt Line
    static constexpr uint32_t FDCAN_TTILS_GTEL = 0x200;   // Global Time Error Interrupt Line
    static constexpr uint32_t FDCAN_TTILS_TXUL = 0x400;   // Tx Count Underflow Interrupt Line
    static constexpr uint32_t FDCAN_TTILS_TXOL = 0x800;   // Tx Count Overflow Interrupt Line
    static constexpr uint32_t FDCAN_TTILS_SE1L = 0x1000;  // Scheduling Error 1 Interrupt Line
    static constexpr uint32_t FDCAN_TTILS_SE2L = 0x2000;  // Scheduling Error 2 Interrupt Line
    static constexpr uint32_t FDCAN_TTILS_ELCL = 0x4000;  // Change Error Level Interrupt Line
    static constexpr uint32_t FDCAN_TTILS_IWTGL = 0x8000; // Initialization Watch Trigger Interrupt Line
    static constexpr uint32_t FDCAN_TTILS_WTL = 0x10000;  // Watch Trigger Interrupt Line
    static constexpr uint32_t FDCAN_TTILS_AWL = 0x20000;  // Application Watchdog Interrupt Line
    static constexpr uint32_t FDCAN_TTILS_CERL = 0x40000; // Configuration Error Interrupt Line

    static constexpr uint32_t FDCAN_TTOST_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTOST_EL =               // Error Level
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTOST_MS =               // Master State.
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTOST_SYS =              // Synchronization State
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t FDCAN_TTOST_GTP = 0x40;        // Quality of Global Time Phase
    static constexpr uint32_t FDCAN_TTOST_QCS = 0x80;        // Quality of Clock Speed
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTOST_RTO =              // Reference Trigger Offset
        bit_field_t<8, 0xff>::value<X>();
    static constexpr uint32_t FDCAN_TTOST_WGTD = 0x400000;   // Wait for Global Time Discontinuity
    static constexpr uint32_t FDCAN_TTOST_GFI = 0x800000;    // Gap Finished Indicator.
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTOST_TMP =              // Time Master Priority
        bit_field_t<24, 0x7>::value<X>();
    static constexpr uint32_t FDCAN_TTOST_GSI = 0x8000000;   // Gap Started Indicator.
    static constexpr uint32_t FDCAN_TTOST_WFE = 0x10000000;  // Wait for Event
    static constexpr uint32_t FDCAN_TTOST_AWE = 0x20000000;  // Application Watchdog Event
    static constexpr uint32_t FDCAN_TTOST_WECS = 0x40000000; // Wait for External Clock Synchronization
    static constexpr uint32_t FDCAN_TTOST_SPL = 0x80000000;  // Schedule Phase Lock

    static constexpr uint32_t FDCAN_TURNA_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TURNA_NAV =   // Numerator Actual Value
        bit_field_t<0, 0x3ffff>::value<X>();

    static constexpr uint32_t FDCAN_TTLGT_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTLGT_LT =   // Local Time
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTLGT_GT =   // Global Time
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t FDCAN_TTCTC_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTCTC_CT =   // Cycle Time
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTCTC_CC =   // Cycle Count
        bit_field_t<16, 0x3f>::value<X>();

    static constexpr uint32_t FDCAN_TTCPT_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTCPT_CT =    // Cycle Count Value
        bit_field_t<0, 0x3f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTCPT_SWV =   // Stop Watch Value
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t FDCAN_TTCSM_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTCSM_CSM =   // Cycle Sync Mark
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t FDCAN_TTTS_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTTS_SWTDEL =   // Stop watch trigger input selection
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTTS_EVTSEL =   // Event trigger input selection
        bit_field_t<4, 0x3>::value<X>();
};


////
//
//      FDCAN1
//
////

struct stm32h7a3x_tt_fdcan_t
{
    volatile uint32_t FDCAN_CREL;   // [read-only] FDCAN Core Release Register
    volatile uint32_t FDCAN_ENDN;   // [read-only] FDCAN Core Release Register
    reserved_t<0x1> _0xc;
    volatile uint32_t FDCAN_DBTP;   // [read-only] FDCAN Data Bit Timing and Prescaler Register
    volatile uint32_t FDCAN_TEST;   // [read-only] FDCAN Test Register
    volatile uint32_t FDCAN_RWD;    // [read-only] FDCAN RAM Watchdog Register
    volatile uint32_t FDCAN_CCCR;   // [read-write] FDCAN CC Control Register
    volatile uint32_t FDCAN_NBTP;   // [read-write] FDCAN Nominal Bit Timing and Prescaler Register
    volatile uint32_t FDCAN_TSCC;   // [read-write] FDCAN Timestamp Counter Configuration Register
    volatile uint32_t FDCAN_TSCV;   // [read-write] FDCAN Timestamp Counter Value Register
    volatile uint32_t FDCAN_TOCC;   // [read-write] FDCAN Timeout Counter Configuration Register
    volatile uint32_t FDCAN_TOCV;   // [read-write] FDCAN Timeout Counter Value Register
    reserved_t<0x4> _0x40;
    volatile uint32_t FDCAN_ECR;    // [read-write] FDCAN Error Counter Register
    volatile uint32_t FDCAN_PSR;    // [read-write] FDCAN Protocol Status Register
    volatile uint32_t FDCAN_TDCR;   // [read-only] FDCAN Transmitter Delay Compensation Register
    reserved_t<0x1> _0x50;
    volatile uint32_t FDCAN_IR;     // [read-only] FDCAN Interrupt Register
    volatile uint32_t FDCAN_IE;     // [read-only] FDCAN Interrupt Enable Register
    volatile uint32_t FDCAN_ILS;    // [read-only] FDCAN Interrupt Line Select Register
    volatile uint32_t FDCAN_ILE;    // [read-write] FDCAN Interrupt Line Enable Register
    reserved_t<0x8> _0x80;
    volatile uint32_t FDCAN_GFC;    // [read-write] FDCAN Global Filter Configuration Register
    volatile uint32_t FDCAN_SIDFC;  // [read-write] FDCAN Standard ID Filter Configuration Register
    volatile uint32_t FDCAN_XIDFC;  // [read-write] FDCAN Extended ID Filter Configuration Register
    reserved_t<0x1> _0x90;
    volatile uint32_t FDCAN_XIDAM;  // [read-write] FDCAN Extended ID and Mask Register
    volatile uint32_t FDCAN_HPMS;   // [read-only] FDCAN High Priority Message Status Register
    volatile uint32_t FDCAN_NDAT1;  // [read-only] FDCAN New Data 1 Register
    volatile uint32_t FDCAN_NDAT2;  // [read-only] FDCAN New Data 2 Register
    volatile uint32_t FDCAN_RXF0C;  // [read-write] FDCAN Rx FIFO 0 Configuration Register
    volatile uint32_t FDCAN_RXF0S;  // [read-write] FDCAN Rx FIFO 0 Status Register
    volatile uint32_t FDCAN_RXF0A;  // [read-write] CAN Rx FIFO 0 Acknowledge Register
    volatile uint32_t FDCAN_RXBC;   // [read-write] FDCAN Rx Buffer Configuration Register
    volatile uint32_t FDCAN_RXF1C;  // [read-write] FDCAN Rx FIFO 1 Configuration Register
    volatile uint32_t FDCAN_RXF1S;  // [read-write] FDCAN Rx FIFO 1 Status Register
    volatile uint32_t FDCAN_RXF1A;  // [read-write] FDCAN Rx FIFO 1 Acknowledge Register
    volatile uint32_t FDCAN_RXESC;  // [read-write] FDCAN Rx Buffer Element Size Configuration Register
    volatile uint32_t FDCAN_TXBC;   // [read-write] FDCAN Tx Buffer Configuration Register
    volatile uint32_t FDCAN_TXFQS;  // [read-only] FDCAN Tx FIFO/Queue Status Register
    volatile uint32_t FDCAN_TXESC;  // [read-write] FDCAN Tx Buffer Element Size Configuration Register
    volatile uint32_t FDCAN_TXBRP;  // [read-only] FDCAN Tx Buffer Request Pending Register
    volatile uint32_t FDCAN_TXBAR;  // [read-write] FDCAN Tx Buffer Add Request Register
    volatile uint32_t FDCAN_TXBCR;  // [read-write] FDCAN Tx Buffer Cancellation Request Register
    volatile uint32_t FDCAN_TXBTO;  // [read-write] FDCAN Tx Buffer Transmission Occurred Register
    volatile uint32_t FDCAN_TXBCF;  // [read-only] FDCAN Tx Buffer Cancellation Finished Register
    volatile uint32_t FDCAN_TXBTIE; // [read-write] FDCAN Tx Buffer Transmission Interrupt Enable Register
    volatile uint32_t FDCAN_TXBCIE; // [read-write] FDCAN Tx Buffer Cancellation Finished Interrupt Enable Register
    reserved_t<0x2> _0xf0;
    volatile uint32_t FDCAN_TXEFC;  // [read-write] FDCAN Tx Event FIFO Configuration Register
    volatile uint32_t FDCAN_TXEFS;  // [read-write] FDCAN Tx Event FIFO Status Register
    volatile uint32_t FDCAN_TXEFA;  // [read-write] FDCAN Tx Event FIFO Acknowledge Register
    reserved_t<0x1> _0x100;
    volatile uint32_t FDCAN_TTTMC;  // [read-write] FDCAN TT Trigger Memory Configuration Register
    volatile uint32_t FDCAN_TTRMC;  // [read-write] FDCAN TT Reference Message Configuration Register
    volatile uint32_t FDCAN_TTOCF;  // [read-write] FDCAN TT Operation Configuration Register
    volatile uint32_t FDCAN_TTMLM;  // [read-write] FDCAN TT Matrix Limits Register
    volatile uint32_t FDCAN_TURCF;  // [read-write] FDCAN TUR Configuration Register
    volatile uint32_t FDCAN_TTOCN;  // [read-write] FDCAN TT Operation Control Register
    volatile uint32_t CAN_TTGTP;    // [read-write] FDCAN TT Global Time Preset Register
    volatile uint32_t FDCAN_TTTMK;  // [read-write] FDCAN TT Time Mark Register
    volatile uint32_t FDCAN_TTIR;   // [read-write] FDCAN TT Interrupt Register
    volatile uint32_t FDCAN_TTIE;   // [read-write] FDCAN TT Interrupt Enable Register
    volatile uint32_t FDCAN_TTILS;  // [read-write] FDCAN TT Interrupt Line Select Register
    volatile uint32_t FDCAN_TTOST;  // [read-only] FDCAN TT Operation Status Register
    volatile uint32_t FDCAN_TURNA;  // [read-only] FDCAN TUR Numerator Actual Register
    volatile uint32_t FDCAN_TTLGT;  // [read-only] FDCAN TT Local and Global Time Register
    volatile uint32_t FDCAN_TTCTC;  // [read-only] FDCAN TT Cycle Time and Count Register
    volatile uint32_t FDCAN_TTCPT;  // [read-only] FDCAN TT Capture Time Register
    volatile uint32_t FDCAN_TTCSM;  // [read-only] FDCAN TT Cycle Sync Mark Register

    static constexpr uint32_t FDCAN_CREL_RESET_VALUE = 0x32141218;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_CREL_REL =       // Core release
        bit_field_t<28, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_CREL_STEP =      // Step of Core release
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_CREL_SUBSTEP =   // Sub-step of Core release
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_CREL_YEAR =      // Timestamp Year
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_CREL_MON =       // Timestamp Month
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_CREL_DAY =       // Timestamp Day
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t FDCAN_ENDN_RESET_VALUE = 0x87654321;

    static constexpr uint32_t FDCAN_DBTP_RESET_VALUE = 0xa33;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_DBTP_DSJW =          // Synchronization Jump Width
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_DBTP_DTSEG2 =        // Data time segment after sample point
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_DBTP_DTSEG1 =        // Data time segment after sample point
        bit_field_t<8, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_DBTP_DBRP =          // Data BIt Rate Prescaler
        bit_field_t<16, 0x1f>::value<X>();
    static constexpr uint32_t FDCAN_DBTP_TDC = 0x800000; // Transceiver Delay Compensation

    static constexpr uint32_t FDCAN_TEST_RESET_VALUE = 0x0;
    static constexpr uint32_t FDCAN_TEST_LBCK = 0x10; // Loop Back mode
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TEST_TX =         // Loop Back mode
        bit_field_t<5, 0x3>::value<X>();
    static constexpr uint32_t FDCAN_TEST_RX = 0x80;   // Control of Transmit Pin

    static constexpr uint32_t FDCAN_RWD_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RWD_WDV =   // Watchdog value
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RWD_WDC =   // Watchdog configuration
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t FDCAN_CCCR_RESET_VALUE = 0x1;
    static constexpr uint32_t FDCAN_CCCR_INIT = 0x1;    // Initialization
    static constexpr uint32_t FDCAN_CCCR_CCE = 0x2;     // Configuration Change Enable
    static constexpr uint32_t FDCAN_CCCR_ASM = 0x4;     // ASM Restricted Operation Mode
    static constexpr uint32_t FDCAN_CCCR_CSA = 0x8;     // Clock Stop Acknowledge
    static constexpr uint32_t FDCAN_CCCR_CSR = 0x10;    // Clock Stop Request
    static constexpr uint32_t FDCAN_CCCR_MON = 0x20;    // Bus Monitoring Mode
    static constexpr uint32_t FDCAN_CCCR_DAR = 0x40;    // Disable Automatic Retransmission
    static constexpr uint32_t FDCAN_CCCR_TEST = 0x80;   // Test Mode Enable
    static constexpr uint32_t FDCAN_CCCR_FDOE = 0x100;  // FD Operation Enable
    static constexpr uint32_t FDCAN_CCCR_BSE = 0x200;   // FDCAN Bit Rate Switching
    static constexpr uint32_t FDCAN_CCCR_PXHD = 0x1000; // Protocol Exception Handling Disable
    static constexpr uint32_t FDCAN_CCCR_EFBI = 0x2000; // Edge Filtering during Bus Integration
    static constexpr uint32_t FDCAN_CCCR_TXP = 0x4000;  // TXP
    static constexpr uint32_t FDCAN_CCCR_NISO = 0x8000; // Non ISO Operation

    static constexpr uint32_t FDCAN_NBTP_RESET_VALUE = 0xa33;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_NBTP_NSJW =     // NSJW: Nominal (Re)Synchronization Jump Width
        bit_field_t<25, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_NBTP_NBRP =     // Bit Rate Prescaler
        bit_field_t<16, 0x1ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_NBTP_NTSEG1 =   // Nominal Time segment before sample point
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_NBTP_TSEG2 =    // Nominal Time segment after sample point
        bit_field_t<0, 0x7f>::value<X>();

    static constexpr uint32_t FDCAN_TSCC_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TSCC_TCP =   // Timestamp Counter Prescaler
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TSCC_TSS =   // Timestamp Select
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t FDCAN_TSCV_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TSCV_TSC =   // Timestamp Counter
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t FDCAN_TOCC_RESET_VALUE = 0xffff0000;
    static constexpr uint32_t FDCAN_TOCC_ETOC = 0x1; // Enable Timeout Counter
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TOCC_TOS =       // Timeout Select
        bit_field_t<1, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TOCC_TOP =       // Timeout Period
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t FDCAN_TOCV_RESET_VALUE = 0xffff;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TOCV_TOC =   // Timeout Counter
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t FDCAN_ECR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_ECR_CEL =        // AN Error Logging
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t FDCAN_ECR_RP = 0x8000; // Receive Error Passive
    template<uint32_t X>
    static constexpr uint32_t FDCAN_ECR_TREC =       // Receive Error Counter
        bit_field_t<8, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_ECR_TEC =        // Transmit Error Counter
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t FDCAN_PSR_RESET_VALUE = 0x707;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_PSR_LEC =          // Last Error Code
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_PSR_ACT =          // Activity
        bit_field_t<3, 0x3>::value<X>();
    static constexpr uint32_t FDCAN_PSR_EP = 0x20;     // Error Passive
    static constexpr uint32_t FDCAN_PSR_EW = 0x40;     // Warning Status
    static constexpr uint32_t FDCAN_PSR_BO = 0x80;     // Bus_Off Status
    template<uint32_t X>
    static constexpr uint32_t FDCAN_PSR_DLEC =         // Data Last Error Code
        bit_field_t<8, 0x7>::value<X>();
    static constexpr uint32_t FDCAN_PSR_RESI = 0x800;  // ESI flag of last received FDCAN Message
    static constexpr uint32_t FDCAN_PSR_RBRS = 0x1000; // BRS flag of last received FDCAN Message
    static constexpr uint32_t FDCAN_PSR_REDL = 0x2000; // Received FDCAN Message
    static constexpr uint32_t FDCAN_PSR_PXE = 0x4000;  // Protocol Exception Event
    template<uint32_t X>
    static constexpr uint32_t FDCAN_PSR_TDCV =         // Transmitter Delay Compensation Value
        bit_field_t<16, 0x7f>::value<X>();

    static constexpr uint32_t FDCAN_TDCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TDCR_TDCF =   // Transmitter Delay Compensation Filter Window Length
        bit_field_t<0, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TDCR_TDCO =   // Transmitter Delay Compensation Offset
        bit_field_t<8, 0x7f>::value<X>();

    static constexpr uint32_t FDCAN_IR_RESET_VALUE = 0x0;
    static constexpr uint32_t FDCAN_IR_RF0N = 0x1;       // Rx FIFO 0 New Message
    static constexpr uint32_t FDCAN_IR_RF0W = 0x2;       // Rx FIFO 0 Full
    static constexpr uint32_t FDCAN_IR_RF0F = 0x4;       // Rx FIFO 0 Full
    static constexpr uint32_t FDCAN_IR_RF0L = 0x8;       // Rx FIFO 0 Message Lost
    static constexpr uint32_t FDCAN_IR_RF1N = 0x10;      // Rx FIFO 1 New Message
    static constexpr uint32_t FDCAN_IR_RF1W = 0x20;      // Rx FIFO 1 Watermark Reached
    static constexpr uint32_t FDCAN_IR_RF1F = 0x40;      // Rx FIFO 1 Watermark Reached
    static constexpr uint32_t FDCAN_IR_RF1L = 0x80;      // Rx FIFO 1 Message Lost
    static constexpr uint32_t FDCAN_IR_HPM = 0x100;      // High Priority Message
    static constexpr uint32_t FDCAN_IR_TC = 0x200;       // Transmission Completed
    static constexpr uint32_t FDCAN_IR_TCF = 0x400;      // Transmission Cancellation Finished
    static constexpr uint32_t FDCAN_IR_TEF = 0x800;      // Tx FIFO Empty
    static constexpr uint32_t FDCAN_IR_TEFN = 0x1000;    // Tx Event FIFO New Entry
    static constexpr uint32_t FDCAN_IR_TEFW = 0x2000;    // Tx Event FIFO Watermark Reached
    static constexpr uint32_t FDCAN_IR_TEFF = 0x4000;    // Tx Event FIFO Full
    static constexpr uint32_t FDCAN_IR_TEFL = 0x8000;    // Tx Event FIFO Element Lost
    static constexpr uint32_t FDCAN_IR_TSW = 0x10000;    // Timestamp Wraparound
    static constexpr uint32_t FDCAN_IR_MRAF = 0x20000;   // Message RAM Access Failure
    static constexpr uint32_t FDCAN_IR_TOO = 0x40000;    // Timeout Occurred
    static constexpr uint32_t FDCAN_IR_DRX = 0x80000;    // Message stored to Dedicated Rx Buffer
    static constexpr uint32_t FDCAN_IR_ELO = 0x400000;   // Error Logging Overflow
    static constexpr uint32_t FDCAN_IR_EP = 0x800000;    // Error Passive
    static constexpr uint32_t FDCAN_IR_EW = 0x1000000;   // Warning Status
    static constexpr uint32_t FDCAN_IR_BO = 0x2000000;   // Bus_Off Status
    static constexpr uint32_t FDCAN_IR_WDI = 0x4000000;  // Watchdog Interrupt
    static constexpr uint32_t FDCAN_IR_PEA = 0x8000000;  // Protocol Error in Arbitration Phase (Nominal Bit Time is used)
    static constexpr uint32_t FDCAN_IR_PED = 0x10000000; // Protocol Error in Data Phase (Data Bit Time is used)
    static constexpr uint32_t FDCAN_IR_ARA = 0x20000000; // Access to Reserved Address

    static constexpr uint32_t FDCAN_IE_RESET_VALUE = 0x0;
    static constexpr uint32_t FDCAN_IE_RF0NE = 0x1;       // Rx FIFO 0 New Message Enable
    static constexpr uint32_t FDCAN_IE_RF0WE = 0x2;       // Rx FIFO 0 Full Enable
    static constexpr uint32_t FDCAN_IE_RF0FE = 0x4;       // Rx FIFO 0 Full Enable
    static constexpr uint32_t FDCAN_IE_RF0LE = 0x8;       // Rx FIFO 0 Message Lost Enable
    static constexpr uint32_t FDCAN_IE_RF1NE = 0x10;      // Rx FIFO 1 New Message Enable
    static constexpr uint32_t FDCAN_IE_RF1WE = 0x20;      // Rx FIFO 1 Watermark Reached Enable
    static constexpr uint32_t FDCAN_IE_RF1FE = 0x40;      // Rx FIFO 1 Watermark Reached Enable
    static constexpr uint32_t FDCAN_IE_RF1LE = 0x80;      // Rx FIFO 1 Message Lost Enable
    static constexpr uint32_t FDCAN_IE_HPME = 0x100;      // High Priority Message Enable
    static constexpr uint32_t FDCAN_IE_TCE = 0x200;       // Transmission Completed Enable
    static constexpr uint32_t FDCAN_IE_TCFE = 0x400;      // Transmission Cancellation Finished Enable
    static constexpr uint32_t FDCAN_IE_TEFE = 0x800;      // Tx FIFO Empty Enable
    static constexpr uint32_t FDCAN_IE_TEFNE = 0x1000;    // Tx Event FIFO New Entry Enable
    static constexpr uint32_t FDCAN_IE_TEFWE = 0x2000;    // Tx Event FIFO Watermark Reached Enable
    static constexpr uint32_t FDCAN_IE_TEFFE = 0x4000;    // Tx Event FIFO Full Enable
    static constexpr uint32_t FDCAN_IE_TEFLE = 0x8000;    // Tx Event FIFO Element Lost Enable
    static constexpr uint32_t FDCAN_IE_TSWE = 0x10000;    // Timestamp Wraparound Enable
    static constexpr uint32_t FDCAN_IE_MRAFE = 0x20000;   // Message RAM Access Failure Enable
    static constexpr uint32_t FDCAN_IE_TOOE = 0x40000;    // Timeout Occurred Enable
    static constexpr uint32_t FDCAN_IE_DRXE = 0x80000;    // Message stored to Dedicated Rx Buffer Enable
    static constexpr uint32_t FDCAN_IE_BECE = 0x100000;   // Bit Error Corrected Interrupt Enable
    static constexpr uint32_t FDCAN_IE_BEUE = 0x200000;   // Bit Error Uncorrected Interrupt Enable
    static constexpr uint32_t FDCAN_IE_ELOE = 0x400000;   // Error Logging Overflow Enable
    static constexpr uint32_t FDCAN_IE_EPE = 0x800000;    // Error Passive Enable
    static constexpr uint32_t FDCAN_IE_EWE = 0x1000000;   // Warning Status Enable
    static constexpr uint32_t FDCAN_IE_BOE = 0x2000000;   // Bus_Off Status Enable
    static constexpr uint32_t FDCAN_IE_WDIE = 0x4000000;  // Watchdog Interrupt Enable
    static constexpr uint32_t FDCAN_IE_PEAE = 0x8000000;  // Protocol Error in Arbitration Phase Enable
    static constexpr uint32_t FDCAN_IE_PEDE = 0x10000000; // Protocol Error in Data Phase Enable
    static constexpr uint32_t FDCAN_IE_ARAE = 0x20000000; // Access to Reserved Address Enable

    static constexpr uint32_t FDCAN_ILS_RESET_VALUE = 0x0;
    static constexpr uint32_t FDCAN_ILS_RF0NL = 0x1;       // Rx FIFO 0 New Message Interrupt Line
    static constexpr uint32_t FDCAN_ILS_RF0WL = 0x2;       // Rx FIFO 0 Watermark Reached Interrupt Line
    static constexpr uint32_t FDCAN_ILS_RF0FL = 0x4;       // Rx FIFO 0 Full Interrupt Line
    static constexpr uint32_t FDCAN_ILS_RF0LL = 0x8;       // Rx FIFO 0 Message Lost Interrupt Line
    static constexpr uint32_t FDCAN_ILS_RF1NL = 0x10;      // Rx FIFO 1 New Message Interrupt Line
    static constexpr uint32_t FDCAN_ILS_RF1WL = 0x20;      // Rx FIFO 1 Watermark Reached Interrupt Line
    static constexpr uint32_t FDCAN_ILS_RF1FL = 0x40;      // Rx FIFO 1 Full Interrupt Line
    static constexpr uint32_t FDCAN_ILS_RF1LL = 0x80;      // Rx FIFO 1 Message Lost Interrupt Line
    static constexpr uint32_t FDCAN_ILS_HPML = 0x100;      // High Priority Message Interrupt Line
    static constexpr uint32_t FDCAN_ILS_TCL = 0x200;       // Transmission Completed Interrupt Line
    static constexpr uint32_t FDCAN_ILS_TCFL = 0x400;      // Transmission Cancellation Finished Interrupt Line
    static constexpr uint32_t FDCAN_ILS_TEFL = 0x800;      // Tx FIFO Empty Interrupt Line
    static constexpr uint32_t FDCAN_ILS_TEFNL = 0x1000;    // Tx Event FIFO New Entry Interrupt Line
    static constexpr uint32_t FDCAN_ILS_TEFWL = 0x2000;    // Tx Event FIFO Watermark Reached Interrupt Line
    static constexpr uint32_t FDCAN_ILS_TEFFL = 0x4000;    // Tx Event FIFO Full Interrupt Line
    static constexpr uint32_t FDCAN_ILS_TEFLL = 0x8000;    // Tx Event FIFO Element Lost Interrupt Line
    static constexpr uint32_t FDCAN_ILS_TSWL = 0x10000;    // Timestamp Wraparound Interrupt Line
    static constexpr uint32_t FDCAN_ILS_MRAFL = 0x20000;   // Message RAM Access Failure Interrupt Line
    static constexpr uint32_t FDCAN_ILS_TOOL = 0x40000;    // Timeout Occurred Interrupt Line
    static constexpr uint32_t FDCAN_ILS_DRXL = 0x80000;    // Message stored to Dedicated Rx Buffer Interrupt Line
    static constexpr uint32_t FDCAN_ILS_BECL = 0x100000;   // Bit Error Corrected Interrupt Line
    static constexpr uint32_t FDCAN_ILS_BEUL = 0x200000;   // Bit Error Uncorrected Interrupt Line
    static constexpr uint32_t FDCAN_ILS_ELOL = 0x400000;   // Error Logging Overflow Interrupt Line
    static constexpr uint32_t FDCAN_ILS_EPL = 0x800000;    // Error Passive Interrupt Line
    static constexpr uint32_t FDCAN_ILS_EWL = 0x1000000;   // Warning Status Interrupt Line
    static constexpr uint32_t FDCAN_ILS_BOL = 0x2000000;   // Bus_Off Status
    static constexpr uint32_t FDCAN_ILS_WDIL = 0x4000000;  // Watchdog Interrupt Line
    static constexpr uint32_t FDCAN_ILS_PEAL = 0x8000000;  // Protocol Error in Arbitration Phase Line
    static constexpr uint32_t FDCAN_ILS_PEDL = 0x10000000; // Protocol Error in Data Phase Line
    static constexpr uint32_t FDCAN_ILS_ARAL = 0x20000000; // Access to Reserved Address Line

    static constexpr uint32_t FDCAN_ILE_RESET_VALUE = 0x0;
    static constexpr uint32_t FDCAN_ILE_EINT0 = 0x1; // Enable Interrupt Line 0
    static constexpr uint32_t FDCAN_ILE_EINT1 = 0x2; // Enable Interrupt Line 1

    static constexpr uint32_t FDCAN_GFC_RESET_VALUE = 0x0;
    static constexpr uint32_t FDCAN_GFC_RRFE = 0x1; // Reject Remote Frames Extended
    static constexpr uint32_t FDCAN_GFC_RRFS = 0x2; // Reject Remote Frames Standard
    template<uint32_t X>
    static constexpr uint32_t FDCAN_GFC_ANFE =      // Accept Non-matching Frames Extended
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_GFC_ANFS =      // Accept Non-matching Frames Standard
        bit_field_t<4, 0x3>::value<X>();

    static constexpr uint32_t FDCAN_SIDFC_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_SIDFC_FLSSA =   // Filter List Standard Start Address
        bit_field_t<2, 0x3fff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_SIDFC_LSS =     // List Size Standard
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t FDCAN_XIDFC_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_XIDFC_FLESA =   // Filter List Standard Start Address
        bit_field_t<2, 0x3fff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_XIDFC_LSE =     // List Size Extended
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t FDCAN_XIDAM_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_XIDAM_EIDM =   // Extended ID Mask
        bit_field_t<0, 0x1fffffff>::value<X>();

    static constexpr uint32_t FDCAN_HPMS_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_HPMS_BIDX =         // Buffer Index
        bit_field_t<0, 0x3f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_HPMS_MSI =          // Message Storage Indicator
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_HPMS_FIDX =         // Filter Index
        bit_field_t<8, 0x7f>::value<X>();
    static constexpr uint32_t FDCAN_HPMS_FLST = 0x8000; // Filter List

    static constexpr uint32_t FDCAN_NDAT1_RESET_VALUE = 0x0;
    static constexpr uint32_t FDCAN_NDAT1_ND0 = 0x1;         // New data
    static constexpr uint32_t FDCAN_NDAT1_ND1 = 0x2;         // New data
    static constexpr uint32_t FDCAN_NDAT1_ND2 = 0x4;         // New data
    static constexpr uint32_t FDCAN_NDAT1_ND3 = 0x8;         // New data
    static constexpr uint32_t FDCAN_NDAT1_ND4 = 0x10;        // New data
    static constexpr uint32_t FDCAN_NDAT1_ND5 = 0x20;        // New data
    static constexpr uint32_t FDCAN_NDAT1_ND6 = 0x40;        // New data
    static constexpr uint32_t FDCAN_NDAT1_ND7 = 0x80;        // New data
    static constexpr uint32_t FDCAN_NDAT1_ND8 = 0x100;       // New data
    static constexpr uint32_t FDCAN_NDAT1_ND9 = 0x200;       // New data
    static constexpr uint32_t FDCAN_NDAT1_ND10 = 0x400;      // New data
    static constexpr uint32_t FDCAN_NDAT1_ND11 = 0x800;      // New data
    static constexpr uint32_t FDCAN_NDAT1_ND12 = 0x1000;     // New data
    static constexpr uint32_t FDCAN_NDAT1_ND13 = 0x2000;     // New data
    static constexpr uint32_t FDCAN_NDAT1_ND14 = 0x4000;     // New data
    static constexpr uint32_t FDCAN_NDAT1_ND15 = 0x8000;     // New data
    static constexpr uint32_t FDCAN_NDAT1_ND16 = 0x10000;    // New data
    static constexpr uint32_t FDCAN_NDAT1_ND17 = 0x20000;    // New data
    static constexpr uint32_t FDCAN_NDAT1_ND18 = 0x40000;    // New data
    static constexpr uint32_t FDCAN_NDAT1_ND19 = 0x80000;    // New data
    static constexpr uint32_t FDCAN_NDAT1_ND20 = 0x100000;   // New data
    static constexpr uint32_t FDCAN_NDAT1_ND21 = 0x200000;   // New data
    static constexpr uint32_t FDCAN_NDAT1_ND22 = 0x400000;   // New data
    static constexpr uint32_t FDCAN_NDAT1_ND23 = 0x800000;   // New data
    static constexpr uint32_t FDCAN_NDAT1_ND24 = 0x1000000;  // New data
    static constexpr uint32_t FDCAN_NDAT1_ND25 = 0x2000000;  // New data
    static constexpr uint32_t FDCAN_NDAT1_ND26 = 0x4000000;  // New data
    static constexpr uint32_t FDCAN_NDAT1_ND27 = 0x8000000;  // New data
    static constexpr uint32_t FDCAN_NDAT1_ND28 = 0x10000000; // New data
    static constexpr uint32_t FDCAN_NDAT1_ND29 = 0x20000000; // New data
    static constexpr uint32_t FDCAN_NDAT1_ND30 = 0x40000000; // New data
    static constexpr uint32_t FDCAN_NDAT1_ND31 = 0x80000000; // New data

    static constexpr uint32_t FDCAN_NDAT2_RESET_VALUE = 0x0;
    static constexpr uint32_t FDCAN_NDAT2_ND32 = 0x1;        // New data
    static constexpr uint32_t FDCAN_NDAT2_ND33 = 0x2;        // New data
    static constexpr uint32_t FDCAN_NDAT2_ND34 = 0x4;        // New data
    static constexpr uint32_t FDCAN_NDAT2_ND35 = 0x8;        // New data
    static constexpr uint32_t FDCAN_NDAT2_ND36 = 0x10;       // New data
    static constexpr uint32_t FDCAN_NDAT2_ND37 = 0x20;       // New data
    static constexpr uint32_t FDCAN_NDAT2_ND38 = 0x40;       // New data
    static constexpr uint32_t FDCAN_NDAT2_ND39 = 0x80;       // New data
    static constexpr uint32_t FDCAN_NDAT2_ND40 = 0x100;      // New data
    static constexpr uint32_t FDCAN_NDAT2_ND41 = 0x200;      // New data
    static constexpr uint32_t FDCAN_NDAT2_ND42 = 0x400;      // New data
    static constexpr uint32_t FDCAN_NDAT2_ND43 = 0x800;      // New data
    static constexpr uint32_t FDCAN_NDAT2_ND44 = 0x1000;     // New data
    static constexpr uint32_t FDCAN_NDAT2_ND45 = 0x2000;     // New data
    static constexpr uint32_t FDCAN_NDAT2_ND46 = 0x4000;     // New data
    static constexpr uint32_t FDCAN_NDAT2_ND47 = 0x8000;     // New data
    static constexpr uint32_t FDCAN_NDAT2_ND48 = 0x10000;    // New data
    static constexpr uint32_t FDCAN_NDAT2_ND49 = 0x20000;    // New data
    static constexpr uint32_t FDCAN_NDAT2_ND50 = 0x40000;    // New data
    static constexpr uint32_t FDCAN_NDAT2_ND51 = 0x80000;    // New data
    static constexpr uint32_t FDCAN_NDAT2_ND52 = 0x100000;   // New data
    static constexpr uint32_t FDCAN_NDAT2_ND53 = 0x200000;   // New data
    static constexpr uint32_t FDCAN_NDAT2_ND54 = 0x400000;   // New data
    static constexpr uint32_t FDCAN_NDAT2_ND55 = 0x800000;   // New data
    static constexpr uint32_t FDCAN_NDAT2_ND56 = 0x1000000;  // New data
    static constexpr uint32_t FDCAN_NDAT2_ND57 = 0x2000000;  // New data
    static constexpr uint32_t FDCAN_NDAT2_ND58 = 0x4000000;  // New data
    static constexpr uint32_t FDCAN_NDAT2_ND59 = 0x8000000;  // New data
    static constexpr uint32_t FDCAN_NDAT2_ND60 = 0x10000000; // New data
    static constexpr uint32_t FDCAN_NDAT2_ND61 = 0x20000000; // New data
    static constexpr uint32_t FDCAN_NDAT2_ND62 = 0x40000000; // New data
    static constexpr uint32_t FDCAN_NDAT2_ND63 = 0x80000000; // New data

    static constexpr uint32_t FDCAN_RXF0C_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXF0C_F0SA =   // Rx FIFO 0 Start Address
        bit_field_t<2, 0x3fff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXF0C_F0S =    // Rx FIFO 0 Size
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXF0C_F0WM =   // FIFO 0 Watermark
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t FDCAN_RXF0S_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXF0S_F0FL =            // Rx FIFO 0 Fill Level
        bit_field_t<0, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXF0S_F0G =             // Rx FIFO 0 Get Index
        bit_field_t<8, 0x3f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXF0S_F0P =             // Rx FIFO 0 Put Index
        bit_field_t<16, 0x3f>::value<X>();
    static constexpr uint32_t FDCAN_RXF0S_F0F = 0x1000000;  // Rx FIFO 0 Full
    static constexpr uint32_t FDCAN_RXF0S_RF0L = 0x2000000; // Rx FIFO 0 Message Lost

    static constexpr uint32_t FDCAN_RXF0A_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXF0A_FA01 =   // Rx FIFO 0 Acknowledge Index
        bit_field_t<0, 0x3f>::value<X>();

    static constexpr uint32_t FDCAN_RXBC_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXBC_RBSA =   // Rx Buffer Start Address
        bit_field_t<2, 0x3fff>::value<X>();

    static constexpr uint32_t FDCAN_RXF1C_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXF1C_F1SA =   // Rx FIFO 1 Start Address
        bit_field_t<2, 0x3fff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXF1C_F1S =    // Rx FIFO 1 Size
        bit_field_t<16, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXF1C_F1WM =   // Rx FIFO 1 Watermark
        bit_field_t<24, 0x7f>::value<X>();

    static constexpr uint32_t FDCAN_RXF1S_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXF1S_F1FL =            // Rx FIFO 1 Fill Level
        bit_field_t<0, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXF1S_F1GI =            // Rx FIFO 1 Get Index
        bit_field_t<8, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXF1S_F1PI =            // Rx FIFO 1 Put Index
        bit_field_t<16, 0x7f>::value<X>();
    static constexpr uint32_t FDCAN_RXF1S_F1F = 0x1000000;  // Rx FIFO 1 Full
    static constexpr uint32_t FDCAN_RXF1S_RF1L = 0x2000000; // Rx FIFO 1 Message Lost
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXF1S_DMS =             // Debug Message Status
        bit_field_t<30, 0x3>::value<X>();

    static constexpr uint32_t FDCAN_RXF1A_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXF1A_F1AI =   // Rx FIFO 1 Acknowledge Index
        bit_field_t<0, 0x3f>::value<X>();

    static constexpr uint32_t FDCAN_RXESC_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXESC_F0DS =   // Rx FIFO 1 Data Field Size:
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXESC_F1DS =   // Rx FIFO 0 Data Field Size:
        bit_field_t<4, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXESC_RBDS =   // Rx Buffer Data Field Size:
        bit_field_t<8, 0x7>::value<X>();

    static constexpr uint32_t FDCAN_TXBC_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TXBC_TBSA =             // Tx Buffers Start Address
        bit_field_t<2, 0x3fff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TXBC_NDTB =             // Number of Dedicated Transmit Buffers
        bit_field_t<16, 0x3f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TXBC_TFQS =             // Transmit FIFO/Queue Size
        bit_field_t<24, 0x3f>::value<X>();
    static constexpr uint32_t FDCAN_TXBC_TFQM = 0x40000000; // Tx FIFO/Queue Mode

    static constexpr uint32_t FDCAN_TXFQS_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TXFQS_TFFL =           // Tx FIFO Free Level
        bit_field_t<0, 0x3f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TXFQS_TFGI =           // TFGI
        bit_field_t<8, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TXFQS_TFQPI =          // Tx FIFO/Queue Put Index
        bit_field_t<16, 0x1f>::value<X>();
    static constexpr uint32_t FDCAN_TXFQS_TFQF = 0x200000; // Tx FIFO/Queue Full

    static constexpr uint32_t FDCAN_TXESC_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TXESC_TBDS =   // Tx Buffer Data Field Size:
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t FDCAN_TXBRP_RESET_VALUE = 0x0;

    static constexpr uint32_t FDCAN_TXBAR_RESET_VALUE = 0x0;

    static constexpr uint32_t FDCAN_TXBCR_RESET_VALUE = 0x0;

    static constexpr uint32_t FDCAN_TXBTO_RESET_VALUE = 0x0;

    static constexpr uint32_t FDCAN_TXBCF_RESET_VALUE = 0x0;

    static constexpr uint32_t FDCAN_TXBTIE_RESET_VALUE = 0x0;

    static constexpr uint32_t FDCAN_TXBCIE_RESET_VALUE = 0x0;

    static constexpr uint32_t FDCAN_TXEFC_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TXEFC_EFSA =   // Event FIFO Start Address
        bit_field_t<2, 0x3fff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TXEFC_EFS =    // Event FIFO Size
        bit_field_t<16, 0x3f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TXEFC_EFWM =   // Event FIFO Watermark
        bit_field_t<24, 0x3f>::value<X>();

    static constexpr uint32_t FDCAN_TXEFS_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TXEFS_EFFL =            // Event FIFO Fill Level
        bit_field_t<0, 0x3f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TXEFS_EFGI =            // Event FIFO Get Index.
        bit_field_t<8, 0x1f>::value<X>();
    static constexpr uint32_t FDCAN_TXEFS_EFF = 0x1000000;  // Event FIFO Full.
    static constexpr uint32_t FDCAN_TXEFS_TEFL = 0x2000000; // Tx Event FIFO Element Lost.

    static constexpr uint32_t FDCAN_TXEFA_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TXEFA_EFAI =   // Event FIFO Acknowledge Index
        bit_field_t<0, 0x1f>::value<X>();

    static constexpr uint32_t FDCAN_TTTMC_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTTMC_TMSA =   // Trigger Memory Start Address
        bit_field_t<2, 0x3fff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTTMC_TME =    // Trigger Memory Elements
        bit_field_t<16, 0x7f>::value<X>();

    static constexpr uint32_t FDCAN_TTRMC_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTRMC_RID =              // Reference Identifier.
        bit_field_t<0, 0x1fffffff>::value<X>();
    static constexpr uint32_t FDCAN_TTRMC_XTD = 0x40000000;  // Extended Identifier
    static constexpr uint32_t FDCAN_TTRMC_RMPS = 0x80000000; // Reference Message Payload Select

    static constexpr uint32_t FDCAN_TTOCF_RESET_VALUE = 0x10000;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTOCF_OM =              // Operation Mode
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t FDCAN_TTOCF_GEN = 0x8;        // Gap Enable
    static constexpr uint32_t FDCAN_TTOCF_TM = 0x10;        // Time Master
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTOCF_LDSDL =           // LD of Synchronization Deviation Limit
        bit_field_t<5, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTOCF_IRTO =            // Initial Reference Trigger Offset
        bit_field_t<8, 0x7f>::value<X>();
    static constexpr uint32_t FDCAN_TTOCF_EECS = 0x8000;    // Enable External Clock Synchronization
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTOCF_AWL =             // Application Watchdog Limit
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t FDCAN_TTOCF_EGTF = 0x1000000; // Enable Global Time Filtering
    static constexpr uint32_t FDCAN_TTOCF_ECC = 0x2000000;  // Enable Clock Calibration
    static constexpr uint32_t FDCAN_TTOCF_EVTP = 0x4000000; // Event Trigger Polarity

    static constexpr uint32_t FDCAN_TTMLM_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTMLM_CCM =    // Cycle Count Max
        bit_field_t<0, 0x3f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTMLM_CSS =    // Cycle Start Synchronization
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTMLM_TXEW =   // Tx Enable Window
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTMLM_ENTT =   // Expected Number of Tx Triggers
        bit_field_t<16, 0xfff>::value<X>();

    static constexpr uint32_t FDCAN_TURCF_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TURCF_NCL =             // Numerator Configuration Low.
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TURCF_DC =              // Denominator Configuration.
        bit_field_t<16, 0x3fff>::value<X>();
    static constexpr uint32_t FDCAN_TURCF_ELT = 0x80000000; // Enable Local Time

    static constexpr uint32_t FDCAN_TTOCN_RESET_VALUE = 0x0;
    static constexpr uint32_t FDCAN_TTOCN_SGT = 0x1;     // Set Global time
    static constexpr uint32_t FDCAN_TTOCN_ECS = 0x2;     // External Clock Synchronization
    static constexpr uint32_t FDCAN_TTOCN_SWP = 0x4;     // Stop Watch Polarity
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTOCN_SWS =          // Stop Watch Source.
        bit_field_t<3, 0x3>::value<X>();
    static constexpr uint32_t FDCAN_TTOCN_RTIE = 0x20;   // Register Time Mark Interrupt Pulse Enable
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTOCN_TMC =          // Register Time Mark Compare
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t FDCAN_TTOCN_TTIE = 0x100;  // Trigger Time Mark Interrupt Pulse Enable
    static constexpr uint32_t FDCAN_TTOCN_GCS = 0x200;   // Gap Control Select
    static constexpr uint32_t FDCAN_TTOCN_FGP = 0x400;   // Finish Gap.
    static constexpr uint32_t FDCAN_TTOCN_TMG = 0x800;   // Time Mark Gap
    static constexpr uint32_t FDCAN_TTOCN_NIG = 0x1000;  // Next is Gap
    static constexpr uint32_t FDCAN_TTOCN_ESCN = 0x2000; // External Synchronization Control
    static constexpr uint32_t FDCAN_TTOCN_LCKC = 0x8000; // TT Operation Control Register Locked

    static constexpr uint32_t CAN_TTGTP_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CAN_TTGTP_NCL =   // Time Preset
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CAN_TTGTP_CTP =   // Cycle Time Target Phase
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t FDCAN_TTTMK_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTTMK_TM =               // Time Mark
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTTMK_TICC =             // Time Mark Cycle Code
        bit_field_t<16, 0x7f>::value<X>();
    static constexpr uint32_t FDCAN_TTTMK_LCKM = 0x80000000; // TT Time Mark Register Locked

    static constexpr uint32_t FDCAN_TTIR_RESET_VALUE = 0x0;
    static constexpr uint32_t FDCAN_TTIR_SBC = 0x1;     // Start of Basic Cycle
    static constexpr uint32_t FDCAN_TTIR_SMC = 0x2;     // Start of Matrix Cycle
    static constexpr uint32_t FDCAN_TTIR_CSM = 0x4;     // Change of Synchronization Mode
    static constexpr uint32_t FDCAN_TTIR_SOG = 0x8;     // Start of Gap
    static constexpr uint32_t FDCAN_TTIR_RTMI = 0x10;   // Register Time Mark Interrupt.
    static constexpr uint32_t FDCAN_TTIR_TTMI = 0x20;   // Trigger Time Mark Event Internal
    static constexpr uint32_t FDCAN_TTIR_SWE = 0x40;    // Stop Watch Event
    static constexpr uint32_t FDCAN_TTIR_GTW = 0x80;    // Global Time Wrap
    static constexpr uint32_t FDCAN_TTIR_GTD = 0x100;   // Global Time Discontinuity
    static constexpr uint32_t FDCAN_TTIR_GTE = 0x200;   // Global Time Error
    static constexpr uint32_t FDCAN_TTIR_TXU = 0x400;   // Tx Count Underflow
    static constexpr uint32_t FDCAN_TTIR_TXO = 0x800;   // Tx Count Overflow
    static constexpr uint32_t FDCAN_TTIR_SE1 = 0x1000;  // Scheduling Error 1
    static constexpr uint32_t FDCAN_TTIR_SE2 = 0x2000;  // Scheduling Error 2
    static constexpr uint32_t FDCAN_TTIR_ELC = 0x4000;  // Error Level Changed.
    static constexpr uint32_t FDCAN_TTIR_IWTG = 0x8000; // Initialization Watch Trigger
    static constexpr uint32_t FDCAN_TTIR_WT = 0x10000;  // Watch Trigger
    static constexpr uint32_t FDCAN_TTIR_AW = 0x20000;  // Application Watchdog
    static constexpr uint32_t FDCAN_TTIR_CER = 0x40000; // Configuration Error

    static constexpr uint32_t FDCAN_TTIE_RESET_VALUE = 0x0;
    static constexpr uint32_t FDCAN_TTIE_SBCE = 0x1;     // Start of Basic Cycle Interrupt Enable
    static constexpr uint32_t FDCAN_TTIE_SMCE = 0x2;     // Start of Matrix Cycle Interrupt Enable
    static constexpr uint32_t FDCAN_TTIE_CSME = 0x4;     // Change of Synchronization Mode Interrupt Enable
    static constexpr uint32_t FDCAN_TTIE_SOGE = 0x8;     // Start of Gap Interrupt Enable
    static constexpr uint32_t FDCAN_TTIE_RTMIE = 0x10;   // Register Time Mark Interrupt Enable
    static constexpr uint32_t FDCAN_TTIE_TTMIE = 0x20;   // Trigger Time Mark Event Internal Interrupt Enable
    static constexpr uint32_t FDCAN_TTIE_SWEE = 0x40;    // Stop Watch Event Interrupt Enable
    static constexpr uint32_t FDCAN_TTIE_GTWE = 0x80;    // Global Time Wrap Interrupt Enable
    static constexpr uint32_t FDCAN_TTIE_GTDE = 0x100;   // Global Time Discontinuity Interrupt Enable
    static constexpr uint32_t FDCAN_TTIE_GTEE = 0x200;   // Global Time Error Interrupt Enable
    static constexpr uint32_t FDCAN_TTIE_TXUE = 0x400;   // Tx Count Underflow Interrupt Enable
    static constexpr uint32_t FDCAN_TTIE_TXOE = 0x800;   // Tx Count Overflow Interrupt Enable
    static constexpr uint32_t FDCAN_TTIE_SE1E = 0x1000;  // Scheduling Error 1 Interrupt Enable
    static constexpr uint32_t FDCAN_TTIE_SE2E = 0x2000;  // Scheduling Error 2 Interrupt Enable
    static constexpr uint32_t FDCAN_TTIE_ELCE = 0x4000;  // Change Error Level Interrupt Enable
    static constexpr uint32_t FDCAN_TTIE_IWTGE = 0x8000; // Initialization Watch Trigger Interrupt Enable
    static constexpr uint32_t FDCAN_TTIE_WTE = 0x10000;  // Watch Trigger Interrupt Enable
    static constexpr uint32_t FDCAN_TTIE_AWE = 0x20000;  // Application Watchdog Interrupt Enable
    static constexpr uint32_t FDCAN_TTIE_CERE = 0x40000; // Configuration Error Interrupt Enable

    static constexpr uint32_t FDCAN_TTILS_RESET_VALUE = 0x0;
    static constexpr uint32_t FDCAN_TTILS_SBCL = 0x1;     // Start of Basic Cycle Interrupt Line
    static constexpr uint32_t FDCAN_TTILS_SMCL = 0x2;     // Start of Matrix Cycle Interrupt Line
    static constexpr uint32_t FDCAN_TTILS_CSML = 0x4;     // Change of Synchronization Mode Interrupt Line
    static constexpr uint32_t FDCAN_TTILS_SOGL = 0x8;     // Start of Gap Interrupt Line
    static constexpr uint32_t FDCAN_TTILS_RTMIL = 0x10;   // Register Time Mark Interrupt Line
    static constexpr uint32_t FDCAN_TTILS_TTMIL = 0x20;   // Trigger Time Mark Event Internal Interrupt Line
    static constexpr uint32_t FDCAN_TTILS_SWEL = 0x40;    // Stop Watch Event Interrupt Line
    static constexpr uint32_t FDCAN_TTILS_GTWL = 0x80;    // Global Time Wrap Interrupt Line
    static constexpr uint32_t FDCAN_TTILS_GTDL = 0x100;   // Global Time Discontinuity Interrupt Line
    static constexpr uint32_t FDCAN_TTILS_GTEL = 0x200;   // Global Time Error Interrupt Line
    static constexpr uint32_t FDCAN_TTILS_TXUL = 0x400;   // Tx Count Underflow Interrupt Line
    static constexpr uint32_t FDCAN_TTILS_TXOL = 0x800;   // Tx Count Overflow Interrupt Line
    static constexpr uint32_t FDCAN_TTILS_SE1L = 0x1000;  // Scheduling Error 1 Interrupt Line
    static constexpr uint32_t FDCAN_TTILS_SE2L = 0x2000;  // Scheduling Error 2 Interrupt Line
    static constexpr uint32_t FDCAN_TTILS_ELCL = 0x4000;  // Change Error Level Interrupt Line
    static constexpr uint32_t FDCAN_TTILS_IWTGL = 0x8000; // Initialization Watch Trigger Interrupt Line
    static constexpr uint32_t FDCAN_TTILS_WTL = 0x10000;  // Watch Trigger Interrupt Line
    static constexpr uint32_t FDCAN_TTILS_AWL = 0x20000;  // Application Watchdog Interrupt Line
    static constexpr uint32_t FDCAN_TTILS_CERL = 0x40000; // Configuration Error Interrupt Line

    static constexpr uint32_t FDCAN_TTOST_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTOST_EL =               // Error Level
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTOST_MS =               // Master State.
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTOST_SYS =              // Synchronization State
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t FDCAN_TTOST_GTP = 0x40;        // Quality of Global Time Phase
    static constexpr uint32_t FDCAN_TTOST_QCS = 0x80;        // Quality of Clock Speed
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTOST_RTO =              // Reference Trigger Offset
        bit_field_t<8, 0xff>::value<X>();
    static constexpr uint32_t FDCAN_TTOST_WGTD = 0x400000;   // Wait for Global Time Discontinuity
    static constexpr uint32_t FDCAN_TTOST_GFI = 0x800000;    // Gap Finished Indicator.
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTOST_TMP =              // Time Master Priority
        bit_field_t<24, 0x7>::value<X>();
    static constexpr uint32_t FDCAN_TTOST_GSI = 0x8000000;   // Gap Started Indicator.
    static constexpr uint32_t FDCAN_TTOST_WFE = 0x10000000;  // Wait for Event
    static constexpr uint32_t FDCAN_TTOST_AWE = 0x20000000;  // Application Watchdog Event
    static constexpr uint32_t FDCAN_TTOST_WECS = 0x40000000; // Wait for External Clock Synchronization
    static constexpr uint32_t FDCAN_TTOST_SPL = 0x80000000;  // Schedule Phase Lock

    static constexpr uint32_t FDCAN_TURNA_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TURNA_NAV =   // Numerator Actual Value
        bit_field_t<0, 0x3ffff>::value<X>();

    static constexpr uint32_t FDCAN_TTLGT_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTLGT_LT =   // Local Time
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTLGT_GT =   // Global Time
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t FDCAN_TTCTC_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTCTC_CT =   // Cycle Time
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTCTC_CC =   // Cycle Count
        bit_field_t<16, 0x3f>::value<X>();

    static constexpr uint32_t FDCAN_TTCPT_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTCPT_CT =    // Cycle Count Value
        bit_field_t<0, 0x3f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTCPT_SWV =   // Stop Watch Value
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t FDCAN_TTCSM_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTCSM_CSM =   // Cycle Sync Mark
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t FDCAN_TTTS_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTTS_SWTDEL =   // Stop watch trigger input selection
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TTTS_EVTSEL =   // Event trigger input selection
        bit_field_t<4, 0x3>::value<X>();
};


template<>
struct peripheral_t<STM32H742x, FDCAN1>
{
    typedef stm32h742x_fdcan1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, FDCAN2>
{
    typedef stm32h742x_fdcan1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, FDCAN1>
{
    typedef stm32h742x_fdcan1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, FDCAN2>
{
    typedef stm32h742x_fdcan1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, FDCAN1>
{
    typedef stm32h742x_fdcan1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, FDCAN2>
{
    typedef stm32h742x_fdcan1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, FDCAN1>
{
    typedef stm32h742x_fdcan1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, FDCAN2>
{
    typedef stm32h742x_fdcan1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, FDCAN1>
{
    typedef stm32h742x_fdcan1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, FDCAN2>
{
    typedef stm32h742x_fdcan1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, FDCAN1>
{
    typedef stm32h742x_fdcan1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, FDCAN2>
{
    typedef stm32h742x_fdcan1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, FDCAN1>
{
    typedef stm32h742x_fdcan1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, FDCAN2>
{
    typedef stm32h742x_fdcan1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, FDCAN1>
{
    typedef stm32h742x_fdcan1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, FDCAN2>
{
    typedef stm32h742x_fdcan1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, FDCAN1>
{
    typedef stm32h742x_fdcan1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, FDCAN2>
{
    typedef stm32h742x_fdcan1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, FDCAN1>
{
    typedef stm32h742x_fdcan1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, FDCAN2>
{
    typedef stm32h742x_fdcan1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, FDCAN1>
{
    typedef stm32h742x_fdcan1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, FDCAN2>
{
    typedef stm32h742x_fdcan1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, FDCAN1>
{
    typedef stm32h742x_fdcan1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, FDCAN2>
{
    typedef stm32h742x_fdcan1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, CAN_CCU>
{
    typedef stm32h742x_can_ccu_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, CAN_CCU>
{
    typedef stm32h742x_can_ccu_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, CAN_CCU>
{
    typedef stm32h742x_can_ccu_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, CAN_CCU>
{
    typedef stm32h742x_can_ccu_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, CAN_CCU>
{
    typedef stm32h742x_can_ccu_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, CAN_CCU>
{
    typedef stm32h742x_can_ccu_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, CAN_CCU>
{
    typedef stm32h742x_can_ccu_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, CAN_CCU>
{
    typedef stm32h742x_can_ccu_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, CAN_CCU>
{
    typedef stm32h742x_can_ccu_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, CAN_CCU>
{
    typedef stm32h742x_can_ccu_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, CAN_CCU>
{
    typedef stm32h742x_can_ccu_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, CAN_CCU>
{
    typedef stm32h742x_can_ccu_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, FDCAN>
{
    typedef stm32h7a3x_fdcan_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, FDCAN>
{
    typedef stm32h7a3x_fdcan_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, FDCAN>
{
    typedef stm32h7a3x_fdcan_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, TT_FDCAN>
{
    typedef stm32h7a3x_tt_fdcan_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, TT_FDCAN>
{
    typedef stm32h7a3x_tt_fdcan_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, TT_FDCAN>
{
    typedef stm32h7a3x_tt_fdcan_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, CAN_CCU>
{
    typedef stm32h7a3x_can_ccu_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, CAN_CCU>
{
    typedef stm32h7a3x_can_ccu_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, CAN_CCU>
{
    typedef stm32h7a3x_can_ccu_t T;
    static T& V;
};

using can_ccu_t = peripheral_t<mcu_svd, CAN_CCU>;
using fdcan_t = peripheral_t<mcu_svd, FDCAN>;
using fdcan1_t = peripheral_t<mcu_svd, FDCAN1>;
using fdcan2_t = peripheral_t<mcu_svd, FDCAN2>;
using tt_fdcan_t = peripheral_t<mcu_svd, TT_FDCAN>;

template<int INST> struct fdcan_traits {};

template<> struct fdcan_traits<1>
{
    using fdcan = fdcan1_t;
    static constexpr alternate_function_t RX = FDCAN1_RX;
    static constexpr alternate_function_t RXFD = FDCAN1_RXFD;
    static constexpr alternate_function_t TX = FDCAN1_TX;
    static constexpr alternate_function_t TXFD = FDCAN1_TXFD;
};

template<> struct fdcan_traits<2>
{
    using fdcan = fdcan2_t;
    static constexpr alternate_function_t RX = FDCAN2_RX;
    static constexpr alternate_function_t RXFD = FDCAN2_RXFD;
    static constexpr alternate_function_t TX = FDCAN2_TX;
    static constexpr alternate_function_t TXFD = FDCAN2_TXFD;
};

