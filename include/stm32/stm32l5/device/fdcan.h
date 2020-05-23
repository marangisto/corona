#pragma once

////
//
//      STM32L5 FDCAN peripherals
//
////

////
//
//      FDCAN1
//
////

struct stm32l552_fdcan1_t
{
    volatile uint32_t FDCAN_CREL;   // [read-only] FDCAN Core Release Register
    volatile uint32_t FDCAN_ENDN;   // [read-only] FDCAN Core Release Register
    reserved_t<0x1> _0xc;
    volatile uint32_t FDCAN_DBTP;   // [read-write] FDCAN Data Bit Timing and Prescaler Register
    volatile uint32_t FDCAN_TEST;   // FDCAN Test Register
    volatile uint32_t FDCAN_RWD;    // FDCAN RAM Watchdog Register
    volatile uint32_t FDCAN_CCCR;   // [read-write] FDCAN CC Control Register
    volatile uint32_t FDCAN_NBTP;   // [read-write] FDCAN Nominal Bit Timing and Prescaler Register
    volatile uint32_t FDCAN_TSCC;   // [read-write] FDCAN Timestamp Counter Configuration Register
    volatile uint32_t FDCAN_TSCV;   // [read-write] FDCAN Timestamp Counter Value Register
    volatile uint32_t FDCAN_TOCC;   // [read-write] FDCAN Timeout Counter Configuration Register
    volatile uint32_t FDCAN_TOCV;   // [read-write] FDCAN Timeout Counter Value Register
    reserved_t<0x4> _0x40;
    volatile uint32_t FDCAN_ECR;    // FDCAN Error Counter Register
    volatile uint32_t FDCAN_PSR;    // FDCAN Protocol Status Register
    volatile uint32_t FDCAN_TDCR;   // [read-write] FDCAN Transmitter Delay Compensation Register
    reserved_t<0x1> _0x50;
    volatile uint32_t FDCAN_IR;     // [read-write] FDCAN Interrupt Register
    volatile uint32_t FDCAN_IE;     // [read-write] FDCAN Interrupt Enable Register
    volatile uint32_t FDCAN_ILS;    // [read-write] FDCAN Interrupt Line Select Register
    volatile uint32_t FDCAN_ILE;    // [read-write] FDCAN Interrupt Line Enable Register
    reserved_t<0x8> _0x80;
    volatile uint32_t FDCAN_RXGFC;  // [read-write] FDCAN Global Filter Configuration Register
    volatile uint32_t FDCAN_XIDAM;  // [read-write] FDCAN Extended ID and Mask Register
    volatile uint32_t FDCAN_HPMS;   // [read-only] FDCAN High Priority Message Status Register
    reserved_t<0x1> _0x90;
    volatile uint32_t FDCAN_RXF0S;  // [read-write] FDCAN Rx FIFO 0 Status Register
    volatile uint32_t FDCAN_RXF0A;  // [read-write] CAN Rx FIFO 0 Acknowledge Register
    volatile uint32_t FDCAN_RXF1S;  // FDCAN Rx FIFO 1 Status Register
    volatile uint32_t FDCAN_RXF1A;  // [read-write] FDCAN Rx FIFO 1 Acknowledge Register
    reserved_t<0x8> _0xc0;
    volatile uint32_t FDCAN_TXBC;   // [read-write] FDCAN Tx buffer configuration register
    volatile uint32_t FDCAN_TXFQS;  // [read-only] FDCAN Tx FIFO/Queue Status Register
    volatile uint32_t FDCAN_TXBRP;  // [read-only] FDCAN Tx Buffer Request Pending Register
    volatile uint32_t FDCAN_TXBAR;  // [read-write] FDCAN Tx Buffer Add Request Register
    volatile uint32_t FDCAN_TXBCR;  // [read-write] FDCAN Tx Buffer Cancellation Request Register
    volatile uint32_t FDCAN_TXBTO;  // [read-only] FDCAN Tx Buffer Transmission Occurred Register
    volatile uint32_t FDCAN_TXBCF;  // [read-only] FDCAN Tx Buffer Cancellation Finished Register
    volatile uint32_t FDCAN_TXBTIE; // [read-write] FDCAN Tx Buffer Transmission Interrupt Enable Register
    volatile uint32_t FDCAN_TXBCIE; // [read-write] FDCAN Tx Buffer Cancellation Finished Interrupt Enable Register
    volatile uint32_t FDCAN_TXEFS;  // [read-only] FDCAN Tx Event FIFO Status Register
    volatile uint32_t FDCAN_TXEFA;  // [read-write] FDCAN Tx Event FIFO Acknowledge Register
    reserved_t<0x5> _0x100;
    volatile uint32_t FDCAN_CKDIV;  // [read-write] FDCAN TT Trigger Memory Configuration Register

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

    static constexpr uint32_t FDCAN_TEST_RESET_VALUE = 0x10;
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

    static constexpr uint32_t FDCAN_NBTP_RESET_VALUE = 0x6000a03;
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
    static constexpr uint32_t FDCAN_ECR_REC =        // Receive Error Counter
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
    static constexpr uint32_t FDCAN_IR_RF0N = 0x1;     // RF0N
    static constexpr uint32_t FDCAN_IR_RF0F = 0x2;     // RF0F
    static constexpr uint32_t FDCAN_IR_RF0L = 0x4;     // RF0L
    static constexpr uint32_t FDCAN_IR_RF1N = 0x8;     // RF1N
    static constexpr uint32_t FDCAN_IR_RF1F = 0x10;    // RF1F
    static constexpr uint32_t FDCAN_IR_RF1L = 0x20;    // RF1L
    static constexpr uint32_t FDCAN_IR_HPM = 0x40;     // HPM
    static constexpr uint32_t FDCAN_IR_TC = 0x80;      // TC
    static constexpr uint32_t FDCAN_IR_TCF = 0x100;    // TCF
    static constexpr uint32_t FDCAN_IR_TFE = 0x200;    // TFE
    static constexpr uint32_t FDCAN_IR_TEFN = 0x400;   // TEFN
    static constexpr uint32_t FDCAN_IR_TEFF = 0x800;   // TEFF
    static constexpr uint32_t FDCAN_IR_TEFL = 0x1000;  // TEFL
    static constexpr uint32_t FDCAN_IR_TSW = 0x2000;   // TSW
    static constexpr uint32_t FDCAN_IR_MRAF = 0x4000;  // MRAF
    static constexpr uint32_t FDCAN_IR_TOO = 0x8000;   // TOO
    static constexpr uint32_t FDCAN_IR_ELO = 0x10000;  // ELO
    static constexpr uint32_t FDCAN_IR_EP = 0x20000;   // EP
    static constexpr uint32_t FDCAN_IR_EW = 0x40000;   // EW
    static constexpr uint32_t FDCAN_IR_BO = 0x80000;   // BO
    static constexpr uint32_t FDCAN_IR_WDI = 0x100000; // WDI
    static constexpr uint32_t FDCAN_IR_PEA = 0x200000; // PEA
    static constexpr uint32_t FDCAN_IR_PED = 0x400000; // PED
    static constexpr uint32_t FDCAN_IR_ARA = 0x800000; // ARA

    static constexpr uint32_t FDCAN_IE_RESET_VALUE = 0x0;
    static constexpr uint32_t FDCAN_IE_RF0NE = 0x1;     // Rx FIFO 0 New Message Enable
    static constexpr uint32_t FDCAN_IE_RF0FE = 0x2;     // Rx FIFO 0 Full Enable
    static constexpr uint32_t FDCAN_IE_RF0LE = 0x4;     // Rx FIFO 0 Message Lost Enable
    static constexpr uint32_t FDCAN_IE_RF1NE = 0x8;     // Rx FIFO 1 New Message Enable
    static constexpr uint32_t FDCAN_IE_RF1FE = 0x10;    // Rx FIFO 1 Watermark Reached Enable
    static constexpr uint32_t FDCAN_IE_RF1LE = 0x20;    // Rx FIFO 1 Message Lost Enable
    static constexpr uint32_t FDCAN_IE_HPME = 0x40;     // High Priority Message Enable
    static constexpr uint32_t FDCAN_IE_TCE = 0x80;      // Transmission Completed Enable
    static constexpr uint32_t FDCAN_IE_TCFE = 0x100;    // Transmission Cancellation Finished Enable
    static constexpr uint32_t FDCAN_IE_TEFE = 0x200;    // Tx FIFO Empty Enable
    static constexpr uint32_t FDCAN_IE_TEFNE = 0x400;   // Tx Event FIFO New Entry Enable
    static constexpr uint32_t FDCAN_IE_TEFFE = 0x800;   // Tx Event FIFO Full Enable
    static constexpr uint32_t FDCAN_IE_TEFLE = 0x1000;  // Tx Event FIFO Element Lost Enable
    static constexpr uint32_t FDCAN_IE_MRAFE = 0x2000;  // Message RAM Access Failure Enable
    static constexpr uint32_t FDCAN_IE_TOOE = 0x4000;   // Timeout Occurred Enable
    static constexpr uint32_t FDCAN_IE_ELOE = 0x8000;   // Error Logging Overflow Enable
    static constexpr uint32_t FDCAN_IE_EPE = 0x10000;   // Error Passive Enable
    static constexpr uint32_t FDCAN_IE_EWE = 0x20000;   // Warning Status Enable
    static constexpr uint32_t FDCAN_IE_BOE = 0x40000;   // Bus_Off Status Enable
    static constexpr uint32_t FDCAN_IE_WDIE = 0x80000;  // Watchdog Interrupt Enable
    static constexpr uint32_t FDCAN_IE_PEAE = 0x100000; // Protocol Error in Arbitration Phase Enable
    static constexpr uint32_t FDCAN_IE_PEDE = 0x200000; // Protocol Error in Data Phase Enable
    static constexpr uint32_t FDCAN_IE_ARAE = 0x400000; // Access to Reserved Address Enable

    static constexpr uint32_t FDCAN_ILS_RESET_VALUE = 0x0;
    static constexpr uint32_t FDCAN_ILS_RxFIFO0 = 0x1; // RxFIFO0
    static constexpr uint32_t FDCAN_ILS_RxFIFO1 = 0x2; // RxFIFO1
    static constexpr uint32_t FDCAN_ILS_SMSG = 0x4;    // SMSG
    static constexpr uint32_t FDCAN_ILS_TFERR = 0x8;   // TFERR
    static constexpr uint32_t FDCAN_ILS_MISC = 0x10;   // MISC
    static constexpr uint32_t FDCAN_ILS_BERR = 0x20;   // BERR
    static constexpr uint32_t FDCAN_ILS_PERR = 0x40;   // PERR

    static constexpr uint32_t FDCAN_ILE_RESET_VALUE = 0x0;
    static constexpr uint32_t FDCAN_ILE_EINT0 = 0x1; // Enable Interrupt Line 0
    static constexpr uint32_t FDCAN_ILE_EINT1 = 0x2; // Enable Interrupt Line 1

    static constexpr uint32_t FDCAN_RXGFC_RESET_VALUE = 0x0;
    static constexpr uint32_t FDCAN_RXGFC_RRFE = 0x1;   // Reject Remote Frames Extended
    static constexpr uint32_t FDCAN_RXGFC_RRFS = 0x2;   // Reject Remote Frames Standard
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXGFC_ANFE =        // Accept Non-matching Frames Extended
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXGFC_ANFS =        // Accept Non-matching Frames Standard
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t FDCAN_RXGFC_F1OM = 0x100; // F1OM
    static constexpr uint32_t FDCAN_RXGFC_F0OM = 0x200; // F0OM
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXGFC_LSS =         // LSS
        bit_field_t<16, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXGFC_LSE =         // LSE
        bit_field_t<24, 0xf>::value<X>();

    static constexpr uint32_t FDCAN_XIDAM_RESET_VALUE = 0x1fffffff;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_XIDAM_EIDM =   // Extended ID Mask
        bit_field_t<0, 0x1fffffff>::value<X>();

    static constexpr uint32_t FDCAN_HPMS_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_HPMS_BIDX =         // Buffer Index
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_HPMS_MSI =          // Message Storage Indicator
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_HPMS_FIDX =         // Filter Index
        bit_field_t<8, 0x1f>::value<X>();
    static constexpr uint32_t FDCAN_HPMS_FLST = 0x8000; // Filter List

    static constexpr uint32_t FDCAN_RXF0S_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXF0S_F0FL =            // Rx FIFO 0 Fill Level
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXF0S_F0GI =            // Rx FIFO 0 Get Index
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXF0S_F0PI =            // Rx FIFO 0 Put Index
        bit_field_t<16, 0x3>::value<X>();
    static constexpr uint32_t FDCAN_RXF0S_F0F = 0x1000000;  // Rx FIFO 0 Full
    static constexpr uint32_t FDCAN_RXF0S_RF0L = 0x2000000; // Rx FIFO 0 Message Lost

    static constexpr uint32_t FDCAN_RXF0A_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXF0A_F0AI =   // Rx FIFO 0 Acknowledge Index
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t FDCAN_RXF1S_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXF1S_F1FL =            // Rx FIFO 1 Fill Level
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXF1S_F1GI =            // Rx FIFO 1 Get Index
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXF1S_F1PI =            // Rx FIFO 1 Put Index
        bit_field_t<16, 0x3>::value<X>();
    static constexpr uint32_t FDCAN_RXF1S_F1F = 0x1000000;  // Rx FIFO 1 Full
    static constexpr uint32_t FDCAN_RXF1S_RF1L = 0x2000000; // Rx FIFO 1 Message Lost

    static constexpr uint32_t FDCAN_RXF1A_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_RXF1A_F1AI =   // Rx FIFO 1 Acknowledge Index
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t FDCAN_TXFQS_RESET_VALUE = 0x3;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TXFQS_TFFL =           // Tx FIFO Free Level
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TXFQS_TFGI =           // TFGI
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TXFQS_TFQPI =          // Tx FIFO/Queue Put Index
        bit_field_t<16, 0x3>::value<X>();
    static constexpr uint32_t FDCAN_TXFQS_TFQF = 0x200000; // Tx FIFO/Queue Full

    static constexpr uint32_t FDCAN_TXBRP_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TXBRP_TRP =   // Transmission Request Pending
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t FDCAN_TXBAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TXBAR_AR =   // Add Request
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t FDCAN_TXBCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TXBCR_CR =   // Cancellation Request
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t FDCAN_TXBTO_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TXBTO_TO =   // Transmission Occurred.
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t FDCAN_TXBCF_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TXBCF_CF =   // Cancellation Finished
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t FDCAN_TXBTIE_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TXBTIE_TIE =   // Transmission Interrupt Enable
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t FDCAN_TXBCIE_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TXBCIE_CF =   // Cancellation Finished Interrupt Enable
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t FDCAN_TXEFS_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TXEFS_EFFL =            // Event FIFO Fill Level
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TXEFS_EFGI =            // Event FIFO Get Index.
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t FDCAN_TXEFS_EFF = 0x1000000;  // Event FIFO Full.
    static constexpr uint32_t FDCAN_TXEFS_TEFL = 0x2000000; // Tx Event FIFO Element Lost.
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TXEFS_EFPI =            // Event FIFO Put Index
        bit_field_t<16, 0x3>::value<X>();

    static constexpr uint32_t FDCAN_TXEFA_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_TXEFA_EFAI =   // Event FIFO Acknowledge Index
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t FDCAN_CKDIV_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FDCAN_CKDIV_PDIV =   // PDIV
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t FDCAN_TXBC_RESET_VALUE = 0x0;
    static constexpr uint32_t FDCAN_TXBC_TFQM = 0x1000000; // Tx FIFO/Queue Mode
};


template<>
struct peripheral_t<STM32L552, FDCAN1>
{
    typedef stm32l552_fdcan1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L552, SEC_FDCAN1>
{
    typedef stm32l552_fdcan1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, FDCAN1>
{
    typedef stm32l552_fdcan1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, SEC_FDCAN1>
{
    typedef stm32l552_fdcan1_t T;
    static T& V;
};

using fdcan1_t = peripheral_t<mcu_svd, FDCAN1>;
using sec_fdcan1_t = peripheral_t<mcu_svd, SEC_FDCAN1>;

template<int INST> struct fdcan_traits {};

template<> struct fdcan_traits<1>
{
    using fdcan = fdcan1_t;
    static constexpr alternate_function_t RX = FDCAN1_RX;
    static constexpr alternate_function_t TX = FDCAN1_TX;
};

template<int INST> struct sec_fdcan_traits {};

template<> struct sec_fdcan_traits<1>
{
    using sec_fdcan = sec_fdcan1_t;
};

