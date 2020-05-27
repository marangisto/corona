#pragma once

////
//
//      STM32H7 Ethernet peripherals
//
////

////
//
//      Ethernet: DMA mode register (DMA)
//
////

struct stm32h742x_ethernet_dma_t
{
    volatile uint32_t DMAMR;      // DMA mode register
    volatile uint32_t DMASBMR;    // System bus mode register
    volatile uint32_t DMAISR;     // [read-only] Interrupt status register
    volatile uint32_t DMADSR;     // [read-only] Debug status register
    reserved_t<0x3c> _0x100;
    volatile uint32_t DMACCR;     // [read-write] Channel control register
    volatile uint32_t DMACTxCR;   // [read-write] Channel transmit control register
    volatile uint32_t DMACRxCR;   // [read-write] Channel receive control register
    reserved_t<0x2> _0x114;
    volatile uint32_t DMACTxDLAR; // [read-write] Channel Tx descriptor list address register
    reserved_t<0x1> _0x11c;
    volatile uint32_t DMACRxDLAR; // [read-write] Channel Rx descriptor list address register
    volatile uint32_t DMACTxDTPR; // [read-write] Channel Tx descriptor tail pointer register
    reserved_t<0x1> _0x128;
    volatile uint32_t DMACRxDTPR; // [read-write] Channel Rx descriptor tail pointer register
    volatile uint32_t DMACTxRLR;  // [read-write] Channel Tx descriptor ring length register
    volatile uint32_t DMACRxRLR;  // [read-write] Channel Rx descriptor ring length register
    volatile uint32_t DMACIER;    // [read-write] Channel interrupt enable register
    volatile uint32_t DMACRxIWTR; // [read-write] Channel Rx interrupt watchdog timer register
    reserved_t<0x2> _0x144;
    volatile uint32_t DMACCATxDR; // [read-only] Channel current application transmit descriptor register
    reserved_t<0x1> _0x14c;
    volatile uint32_t DMACCARxDR; // [read-only] Channel current application receive descriptor register
    reserved_t<0x1> _0x154;
    volatile uint32_t DMACCATxBR; // [read-only] Channel current application transmit buffer register
    reserved_t<0x1> _0x15c;
    volatile uint32_t DMACCARxBR; // [read-only] Channel current application receive buffer register
    volatile uint32_t DMACSR;     // Channel status register
    reserved_t<0x2> _0x16c;
    volatile uint32_t DMACMFCR;   // [read-only] Channel missed frame count register

    static constexpr uint32_t DMAMR_RESET_VALUE = 0x0;
    static constexpr uint32_t DMAMR_SWR = 0x1;      // Software Reset
    static constexpr uint32_t DMAMR_DA = 0x2;       // DMA Tx or Rx Arbitration Scheme
    static constexpr uint32_t DMAMR_TXPR = 0x800;   // Transmit priority
    template<uint32_t X>
    static constexpr uint32_t DMAMR_PR =            // Priority ratio
        bit_field_t<12, 0x7>::value<X>();
    static constexpr uint32_t DMAMR_INTM = 0x10000; // Interrupt Mode

    static constexpr uint32_t DMASBMR_RESET_VALUE = 0x1010000;
    static constexpr uint32_t DMASBMR_FB = 0x1;     // Fixed Burst Length
    static constexpr uint32_t DMASBMR_AAL = 0x1000; // Address-Aligned Beats
    static constexpr uint32_t DMASBMR_MB = 0x4000;  // Mixed Burst
    static constexpr uint32_t DMASBMR_RB = 0x8000;  // Rebuild INCRx Burst

    static constexpr uint32_t DMAISR_RESET_VALUE = 0x0;
    static constexpr uint32_t DMAISR_DC0IS = 0x1;     // DMA Channel Interrupt Status
    static constexpr uint32_t DMAISR_MTLIS = 0x10000; // MTL Interrupt Status
    static constexpr uint32_t DMAISR_MACIS = 0x20000; // MAC Interrupt Status

    static constexpr uint32_t DMADSR_RESET_VALUE = 0x0;
    static constexpr uint32_t DMADSR_AXWHSTS = 0x1; // AHB Master Write Channel
    template<uint32_t X>
    static constexpr uint32_t DMADSR_RPS0 =         // DMA Channel Receive Process State
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMADSR_TPS0 =         // DMA Channel Transmit Process State
        bit_field_t<12, 0xf>::value<X>();

    static constexpr uint32_t DMACCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMACCR_MSS =            // Maximum Segment Size
        bit_field_t<0, 0x3fff>::value<X>();
    static constexpr uint32_t DMACCR_PBLX8 = 0x10000; // 8xPBL mode
    template<uint32_t X>
    static constexpr uint32_t DMACCR_DSL =            // Descriptor Skip Length
        bit_field_t<18, 0x7>::value<X>();

    static constexpr uint32_t DMACTxCR_RESET_VALUE = 0x0;
    static constexpr uint32_t DMACTxCR_ST = 0x1;     // Start or Stop Transmission Command
    static constexpr uint32_t DMACTxCR_OSF = 0x10;   // Operate on Second Packet
    static constexpr uint32_t DMACTxCR_TSE = 0x1000; // TCP Segmentation Enabled
    template<uint32_t X>
    static constexpr uint32_t DMACTxCR_TXPBL =       // Transmit Programmable Burst Length
        bit_field_t<16, 0x3f>::value<X>();

    static constexpr uint32_t DMACRxCR_RESET_VALUE = 0x0;
    static constexpr uint32_t DMACRxCR_SR = 0x1;         // Start or Stop Receive Command
    template<uint32_t X>
    static constexpr uint32_t DMACRxCR_RBSZ =            // Receive Buffer size
        bit_field_t<1, 0x3fff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMACRxCR_RXPBL =           // RXPBL
        bit_field_t<16, 0x3f>::value<X>();
    static constexpr uint32_t DMACRxCR_RPF = 0x80000000; // DMA Rx Channel Packet Flush

    static constexpr uint32_t DMACTxDLAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMACTxDLAR_TDESLA =   // Start of Transmit List
        bit_field_t<2, 0x3fffffff>::value<X>();

    static constexpr uint32_t DMACRxDLAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMACRxDLAR_RDESLA =   // Start of Receive List
        bit_field_t<2, 0x3fffffff>::value<X>();

    static constexpr uint32_t DMACTxDTPR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMACTxDTPR_TDT =   // Transmit Descriptor Tail Pointer
        bit_field_t<2, 0x3fffffff>::value<X>();

    static constexpr uint32_t DMACRxDTPR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMACRxDTPR_RDT =   // Receive Descriptor Tail Pointer
        bit_field_t<2, 0x3fffffff>::value<X>();

    static constexpr uint32_t DMACTxRLR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMACTxRLR_TDRL =   // Transmit Descriptor Ring Length
        bit_field_t<0, 0x3ff>::value<X>();

    static constexpr uint32_t DMACRxRLR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMACRxRLR_RDRL =   // Receive Descriptor Ring Length
        bit_field_t<0, 0x3ff>::value<X>();

    static constexpr uint32_t DMACIER_RESET_VALUE = 0x0;
    static constexpr uint32_t DMACIER_TIE = 0x1;     // Transmit Interrupt Enable
    static constexpr uint32_t DMACIER_TXSE = 0x2;    // Transmit Stopped Enable
    static constexpr uint32_t DMACIER_TBUE = 0x4;    // Transmit Buffer Unavailable Enable
    static constexpr uint32_t DMACIER_RIE = 0x40;    // Receive Interrupt Enable
    static constexpr uint32_t DMACIER_RBUE = 0x80;   // Receive Buffer Unavailable Enable
    static constexpr uint32_t DMACIER_RSE = 0x100;   // Receive Stopped Enable
    static constexpr uint32_t DMACIER_RWTE = 0x200;  // Receive Watchdog Timeout Enable
    static constexpr uint32_t DMACIER_ETIE = 0x400;  // Early Transmit Interrupt Enable
    static constexpr uint32_t DMACIER_ERIE = 0x800;  // Early Receive Interrupt Enable
    static constexpr uint32_t DMACIER_FBEE = 0x1000; // Fatal Bus Error Enable
    static constexpr uint32_t DMACIER_CDEE = 0x2000; // Context Descriptor Error Enable
    static constexpr uint32_t DMACIER_AIE = 0x4000;  // Abnormal Interrupt Summary Enable
    static constexpr uint32_t DMACIER_NIE = 0x8000;  // Normal Interrupt Summary Enable

    static constexpr uint32_t DMACRxIWTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMACRxIWTR_RWT =   // Receive Interrupt Watchdog Timer Count
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DMACCATxDR_RESET_VALUE = 0x0;

    static constexpr uint32_t DMACCARxDR_RESET_VALUE = 0x0;

    static constexpr uint32_t DMACCATxBR_RESET_VALUE = 0x0;

    static constexpr uint32_t DMACCARxBR_RESET_VALUE = 0x0;

    static constexpr uint32_t DMACSR_RESET_VALUE = 0x0;
    static constexpr uint32_t DMACSR_TI = 0x1;     // Transmit Interrupt
    static constexpr uint32_t DMACSR_TPS = 0x2;    // Transmit Process Stopped
    static constexpr uint32_t DMACSR_TBU = 0x4;    // Transmit Buffer Unavailable
    static constexpr uint32_t DMACSR_RI = 0x40;    // Receive Interrupt
    static constexpr uint32_t DMACSR_RBU = 0x80;   // Receive Buffer Unavailable
    static constexpr uint32_t DMACSR_RPS = 0x100;  // Receive Process Stopped
    static constexpr uint32_t DMACSR_RWT = 0x200;  // Receive Watchdog Timeout
    static constexpr uint32_t DMACSR_ET = 0x400;   // Early Transmit Interrupt
    static constexpr uint32_t DMACSR_ER = 0x800;   // Early Receive Interrupt
    static constexpr uint32_t DMACSR_FBE = 0x1000; // Fatal Bus Error
    static constexpr uint32_t DMACSR_CDE = 0x2000; // Context Descriptor Error
    static constexpr uint32_t DMACSR_AIS = 0x4000; // Abnormal Interrupt Summary
    static constexpr uint32_t DMACSR_NIS = 0x8000; // Normal Interrupt Summary
    template<uint32_t X>
    static constexpr uint32_t DMACSR_TEB =         // Tx DMA Error Bits
        bit_field_t<16, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMACSR_REB =         // Rx DMA Error Bits
        bit_field_t<19, 0x7>::value<X>();

    static constexpr uint32_t DMACMFCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMACMFCR_MFC =          // Dropped Packet Counters
        bit_field_t<0, 0x7ff>::value<X>();
    static constexpr uint32_t DMACMFCR_MFCO = 0x8000; // Overflow status of the MFC Counter
};


////
//
//      Ethernet: media access control (MAC)
//
////

struct stm32h742x_ethernet_mac_t
{
    volatile uint32_t MACCR;                              // [read-write] Operating mode configuration register
    volatile uint32_t MACECR;                             // [read-write] Extended operating mode configuration register
    volatile uint32_t MACPFR;                             // [read-write] Packet filtering control register
    volatile uint32_t MACWTR;                             // [read-write] Watchdog timeout register
    volatile uint32_t MACHT0R;                            // [read-write] Hash Table 0 register
    volatile uint32_t MACHT1R;                            // [read-write] Hash Table 1 register
    reserved_t<0xe> _0x50;
    volatile uint32_t MACVTR;                             // [read-write] VLAN tag register
    reserved_t<0x1> _0x58;
    volatile uint32_t MACVHTR;                            // [read-write] VLAN Hash table register
    reserved_t<0x1> _0x60;
    volatile uint32_t MACVIR;                             // [read-write] VLAN inclusion register
    volatile uint32_t MACIVIR;                            // [read-write] Inner VLAN inclusion register
    reserved_t<0x2> _0x70;
    volatile uint32_t MACQTxFCR;                          // [read-write] Tx Queue flow control register
    reserved_t<0x7> _0x90;
    volatile uint32_t MACRxFCR;                           // [read-write] Rx flow control register
    reserved_t<0x7> _0xb0;
    volatile uint32_t MACISR;                             // [read-only] Interrupt status register
    volatile uint32_t MACIER;                             // [read-write] Interrupt enable register
    volatile uint32_t MACRxTxSR;                          // [read-only] Rx Tx status register
    reserved_t<0x1> _0xc0;
    volatile uint32_t MACPCSR;                            // PMT control status register
    volatile uint32_t MACRWKPFR;                          // [read-write] Remove wakeup packet filter register
    reserved_t<0x2> _0xd0;
    volatile uint32_t MACLCSR;                            // LPI control status register
    volatile uint32_t MACLTCR;                            // [read-write] LPI timers control register
    volatile uint32_t MACLETR;                            // [read-write] LPI entry timer register
    volatile uint32_t MAC1USTCR;                          // [read-write] 1-microsecond-tick counter register
    reserved_t<0xc> _0x110;
    volatile uint32_t MACVR;                              // [read-only] Version register
    volatile uint32_t MACDR;                              // [read-only] Debug register
    reserved_t<0x2> _0x120;
    volatile uint32_t MACHWF1R;                           // [read-only] HW feature 1 register
    volatile uint32_t MACHWF2R;                           // [read-only] HW feature 2 register
    reserved_t<0x36> _0x200;
    volatile uint32_t MACMDIOAR;                          // [read-write] MDIO address register
    volatile uint32_t MACMDIODR;                          // [read-write] MDIO data register
    reserved_t<0x3e> _0x300;
    volatile uint32_t MACA0HR;                            // Address 0 high register
    volatile uint32_t MACA0LR;                            // [read-write] Address 0 low register
    volatile uint32_t MACA1HR;                            // [read-write] Address 1 high register
    volatile uint32_t MACA1LR;                            // [read-write] Address 1 low register
    volatile uint32_t MACA2HR;                            // [read-write] Address 2 high register
    volatile uint32_t MACA2LR;                            // [read-write] Address 2 low register
    volatile uint32_t MACA3HR;                            // [read-write] Address 3 high register
    volatile uint32_t MACA3LR;                            // [read-write] Address 3 low register
    reserved_t<0xf8> _0x700;
    volatile uint32_t MMC_CONTROL;                        // [read-write] MMC control register
    volatile uint32_t MMC_RX_INTERRUPT;                   // [read-only] MMC Rx interrupt register
    volatile uint32_t MMC_TX_INTERRUPT;                   // [read-only] MMC Tx interrupt register
    volatile uint32_t MMC_RX_INTERRUPT_MASK;              // MMC Rx interrupt mask register
    volatile uint32_t MMC_TX_INTERRUPT_MASK;              // MMC Tx interrupt mask register
    reserved_t<0xe> _0x74c;
    volatile uint32_t TX_SINGLE_COLLISION_GOOD_PACKETS;   // [read-only] Tx single collision good packets register
    volatile uint32_t TX_MULTIPLE_COLLISION_GOOD_PACKETS; // [read-only] Tx multiple collision good packets register
    reserved_t<0x5> _0x768;
    volatile uint32_t TX_PACKET_COUNT_GOOD;               // [read-only] Tx packet count good register
    reserved_t<0xa> _0x794;
    volatile uint32_t RX_CRC_ERROR_PACKETS;               // [read-only] Rx CRC error packets register
    volatile uint32_t RX_ALIGNMENT_ERROR_PACKETS;         // [read-only] Rx alignment error packets register
    reserved_t<0xa> _0x7c4;
    volatile uint32_t RX_UNICAST_PACKETS_GOOD;            // [read-only] Rx unicast packets good register
    reserved_t<0x9> _0x7ec;
    volatile uint32_t TX_LPI_USEC_CNTR;                   // [read-only] Tx LPI microsecond timer register
    volatile uint32_t TX_LPI_TRAN_CNTR;                   // [read-only] Tx LPI transition counter register
    volatile uint32_t RX_LPI_USEC_CNTR;                   // [read-only] Rx LPI microsecond counter register
    volatile uint32_t RX_LPI_TRAN_CNTR;                   // [read-only] Rx LPI transition counter register
    reserved_t<0x41> _0x900;
    volatile uint32_t MACL3L4C0R;                         // [read-write] L3 and L4 control 0 register
    volatile uint32_t MACL4A0R;                           // [read-write] Layer4 address filter 0 register
    reserved_t<0x2> _0x910;
    volatile uint32_t MACL3A00R;                          // [read-write] MACL3A00R
    volatile uint32_t MACL3A10R;                          // [read-write] Layer3 address 1 filter 0 register
    volatile uint32_t MACL3A20;                           // [read-write] Layer3 Address 2 filter 0 register
    volatile uint32_t MACL3A30;                           // [read-write] Layer3 Address 3 filter 0 register
    reserved_t<0x4> _0x930;
    volatile uint32_t MACL3L4C1R;                         // [read-write] L3 and L4 control 1 register
    volatile uint32_t MACL4A1R;                           // [read-write] Layer 4 address filter 1 register
    reserved_t<0x2> _0x940;
    volatile uint32_t MACL3A01R;                          // [read-write] Layer3 address 0 filter 1 Register
    volatile uint32_t MACL3A11R;                          // [read-write] Layer3 address 1 filter 1 register
    volatile uint32_t MACL3A21R;                          // [read-write] Layer3 address 2 filter 1 Register
    volatile uint32_t MACL3A31R;                          // [read-write] Layer3 address 3 filter 1 register
    reserved_t<0x64> _0xae0;
    volatile uint32_t MACARPAR;                           // [read-write] ARP address register
    reserved_t<0x7> _0xb00;
    volatile uint32_t MACTSCR;                            // Timestamp control Register
    volatile uint32_t MACSSIR;                            // [read-write] Sub-second increment register
    volatile uint32_t MACSTSR;                            // [read-only] System time seconds register
    volatile uint32_t MACSTNR;                            // [read-only] System time nanoseconds register
    volatile uint32_t MACSTSUR;                           // [read-write] System time seconds update register
    volatile uint32_t MACSTNUR;                           // [read-write] System time nanoseconds update register
    volatile uint32_t MACTSAR;                            // [read-write] Timestamp addend register
    reserved_t<0x1> _0xb20;
    volatile uint32_t MACTSSR;                            // [read-only] Timestamp status register
    reserved_t<0x3> _0xb30;
    volatile uint32_t MACTxTSSNR;                         // [read-only] Tx timestamp status nanoseconds register
    volatile uint32_t MACTxTSSSR;                         // [read-only] Tx timestamp status seconds register
    reserved_t<0x2> _0xb40;
    volatile uint32_t MACACR;                             // [read-write] Auxiliary control register
    reserved_t<0x1> _0xb48;
    volatile uint32_t MACATSNR;                           // [read-only] Auxiliary timestamp nanoseconds register
    volatile uint32_t MACATSSR;                           // [read-only] Auxiliary timestamp seconds register
    volatile uint32_t MACTSIACR;                          // [read-write] Timestamp Ingress asymmetric correction register
    volatile uint32_t MACTSEACR;                          // [read-write] Timestamp Egress asymmetric correction register
    volatile uint32_t MACTSICNR;                          // [read-write] Timestamp Ingress correction nanosecond register
    volatile uint32_t MACTSECNR;                          // [read-write] Timestamp Egress correction nanosecond register
    reserved_t<0x4> _0xb70;
    volatile uint32_t MACPPSCR;                           // [read-write] PPS control register
    reserved_t<0x3> _0xb80;
    volatile uint32_t MACPPSTTSR;                         // [read-write] PPS target time seconds register
    volatile uint32_t MACPPSTTNR;                         // [read-write] PPS target time nanoseconds register
    volatile uint32_t MACPPSIR;                           // [read-write] PPS interval register
    volatile uint32_t MACPPSWR;                           // [read-write] PPS width register
    reserved_t<0xc> _0xbc0;
    volatile uint32_t MACPOCR;                            // [read-write] PTP Offload control register
    volatile uint32_t MACSPI0R;                           // [read-write] PTP Source Port Identity 0 Register
    volatile uint32_t MACSPI1R;                           // [read-write] PTP Source port identity 1 register
    volatile uint32_t MACSPI2R;                           // [read-write] PTP Source port identity 2 register
    volatile uint32_t MACLMIR;                            // [read-write] Log message interval register

    static constexpr uint32_t MACCR_RESET_VALUE = 0x0;
    static constexpr uint32_t MACCR_RE = 0x1;           // Receiver Enable
    static constexpr uint32_t MACCR_TE = 0x2;           // TE
    template<uint32_t X>
    static constexpr uint32_t MACCR_PRELEN =            // PRELEN
        bit_field_t<2, 0x3>::value<X>();
    static constexpr uint32_t MACCR_DC = 0x10;          // DC
    template<uint32_t X>
    static constexpr uint32_t MACCR_BL =                // BL
        bit_field_t<5, 0x3>::value<X>();
    static constexpr uint32_t MACCR_DR = 0x100;         // DR
    static constexpr uint32_t MACCR_DCRS = 0x200;       // DCRS
    static constexpr uint32_t MACCR_DO = 0x400;         // DO
    static constexpr uint32_t MACCR_ECRSFD = 0x800;     // ECRSFD
    static constexpr uint32_t MACCR_LM = 0x1000;        // LM
    static constexpr uint32_t MACCR_DM = 0x2000;        // DM
    static constexpr uint32_t MACCR_FES = 0x4000;       // FES
    static constexpr uint32_t MACCR_JE = 0x10000;       // JE
    static constexpr uint32_t MACCR_JD = 0x20000;       // JD
    static constexpr uint32_t MACCR_WD = 0x80000;       // WD
    static constexpr uint32_t MACCR_ACS = 0x100000;     // ACS
    static constexpr uint32_t MACCR_CST = 0x200000;     // CST
    static constexpr uint32_t MACCR_S2KP = 0x400000;    // S2KP
    static constexpr uint32_t MACCR_GPSLCE = 0x800000;  // GPSLCE
    template<uint32_t X>
    static constexpr uint32_t MACCR_IPG =               // IPG
        bit_field_t<24, 0x7>::value<X>();
    static constexpr uint32_t MACCR_IPC = 0x8000000;    // IPC
    template<uint32_t X>
    static constexpr uint32_t MACCR_SARC =              // SARC
        bit_field_t<28, 0x7>::value<X>();
    static constexpr uint32_t MACCR_ARPEN = 0x80000000; // ARPEN

    static constexpr uint32_t MACECR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MACECR_GPSL =              // GPSL
        bit_field_t<0, 0x3fff>::value<X>();
    static constexpr uint32_t MACECR_DCRCC = 0x10000;    // DCRCC
    static constexpr uint32_t MACECR_SPEN = 0x20000;     // SPEN
    static constexpr uint32_t MACECR_USP = 0x40000;      // USP
    static constexpr uint32_t MACECR_EIPGEN = 0x1000000; // EIPGEN
    template<uint32_t X>
    static constexpr uint32_t MACECR_EIPG =              // EIPG
        bit_field_t<25, 0x1f>::value<X>();

    static constexpr uint32_t MACPFR_RESET_VALUE = 0x0;
    static constexpr uint32_t MACPFR_PR = 0x1;        // PR
    static constexpr uint32_t MACPFR_HUC = 0x2;       // HUC
    static constexpr uint32_t MACPFR_HMC = 0x4;       // HMC
    static constexpr uint32_t MACPFR_DAIF = 0x8;      // DAIF
    static constexpr uint32_t MACPFR_PM = 0x10;       // PM
    static constexpr uint32_t MACPFR_DBF = 0x20;      // DBF
    template<uint32_t X>
    static constexpr uint32_t MACPFR_PCF =            // PCF
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t MACPFR_SAIF = 0x100;    // SAIF
    static constexpr uint32_t MACPFR_SAF = 0x200;     // SAF
    static constexpr uint32_t MACPFR_HPF = 0x400;     // HPF
    static constexpr uint32_t MACPFR_VTFE = 0x10000;  // VTFE
    static constexpr uint32_t MACPFR_IPFE = 0x100000; // IPFE
    static constexpr uint32_t MACPFR_DNTU = 0x200000; // DNTU
    static constexpr uint32_t MACPFR_RA = 0x80000000; // RA

    static constexpr uint32_t MACWTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MACWTR_WTO =        // WTO
        bit_field_t<0, 0xf>::value<X>();
    static constexpr uint32_t MACWTR_PWE = 0x100; // PWE

    static constexpr uint32_t MACHT0R_RESET_VALUE = 0x0;

    static constexpr uint32_t MACHT1R_RESET_VALUE = 0x0;

    static constexpr uint32_t MACVTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MACVTR_VL =                  // VL
        bit_field_t<0, 0xffff>::value<X>();
    static constexpr uint32_t MACVTR_ETV = 0x10000;        // ETV
    static constexpr uint32_t MACVTR_VTIM = 0x20000;       // VTIM
    static constexpr uint32_t MACVTR_ESVL = 0x40000;       // ESVL
    static constexpr uint32_t MACVTR_ERSVLM = 0x80000;     // ERSVLM
    static constexpr uint32_t MACVTR_DOVLTC = 0x100000;    // DOVLTC
    template<uint32_t X>
    static constexpr uint32_t MACVTR_EVLS =                // EVLS
        bit_field_t<21, 0x3>::value<X>();
    static constexpr uint32_t MACVTR_EVLRXS = 0x1000000;   // EVLRXS
    static constexpr uint32_t MACVTR_VTHM = 0x2000000;     // VTHM
    static constexpr uint32_t MACVTR_EDVLP = 0x4000000;    // EDVLP
    static constexpr uint32_t MACVTR_ERIVLT = 0x8000000;   // ERIVLT
    template<uint32_t X>
    static constexpr uint32_t MACVTR_EIVLS =               // EIVLS
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t MACVTR_EIVLRXS = 0x80000000; // EIVLRXS

    static constexpr uint32_t MACVHTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MACVHTR_VLHT =   // VLHT
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MACVIR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MACVIR_VLT =            // VLT
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MACVIR_VLC =            // VLC
        bit_field_t<16, 0x3>::value<X>();
    static constexpr uint32_t MACVIR_VLP = 0x40000;   // VLP
    static constexpr uint32_t MACVIR_CSVL = 0x80000;  // CSVL
    static constexpr uint32_t MACVIR_VLTI = 0x100000; // VLTI

    static constexpr uint32_t MACIVIR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MACIVIR_VLT =            // VLT
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MACIVIR_VLC =            // VLC
        bit_field_t<16, 0x3>::value<X>();
    static constexpr uint32_t MACIVIR_VLP = 0x40000;   // VLP
    static constexpr uint32_t MACIVIR_CSVL = 0x80000;  // CSVL
    static constexpr uint32_t MACIVIR_VLTI = 0x100000; // VLTI

    static constexpr uint32_t MACQTxFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t MACQTxFCR_FCB_BPA = 0x1; // FCB_BPA
    static constexpr uint32_t MACQTxFCR_TFE = 0x2;     // TFE
    template<uint32_t X>
    static constexpr uint32_t MACQTxFCR_PLT =          // PLT
        bit_field_t<4, 0x7>::value<X>();
    static constexpr uint32_t MACQTxFCR_DZPQ = 0x80;   // DZPQ
    template<uint32_t X>
    static constexpr uint32_t MACQTxFCR_PT =           // PT
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t MACRxFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t MACRxFCR_RFE = 0x1; // RFE
    static constexpr uint32_t MACRxFCR_UP = 0x2;  // UP

    static constexpr uint32_t MACISR_RESET_VALUE = 0x0;
    static constexpr uint32_t MACISR_PHYIS = 0x8;      // PHYIS
    static constexpr uint32_t MACISR_PMTIS = 0x10;     // PMTIS
    static constexpr uint32_t MACISR_LPIIS = 0x20;     // LPIIS
    static constexpr uint32_t MACISR_MMCIS = 0x100;    // MMCIS
    static constexpr uint32_t MACISR_MMCRXIS = 0x200;  // MMCRXIS
    static constexpr uint32_t MACISR_MMCTXIS = 0x400;  // MMCTXIS
    static constexpr uint32_t MACISR_TSIS = 0x1000;    // TSIS
    static constexpr uint32_t MACISR_TXSTSIS = 0x2000; // TXSTSIS
    static constexpr uint32_t MACISR_RXSTSIS = 0x4000; // RXSTSIS

    static constexpr uint32_t MACIER_RESET_VALUE = 0x0;
    static constexpr uint32_t MACIER_PHYIE = 0x8;      // PHYIE
    static constexpr uint32_t MACIER_PMTIE = 0x10;     // PMTIE
    static constexpr uint32_t MACIER_LPIIE = 0x20;     // LPIIE
    static constexpr uint32_t MACIER_TSIE = 0x1000;    // TSIE
    static constexpr uint32_t MACIER_TXSTSIE = 0x2000; // TXSTSIE
    static constexpr uint32_t MACIER_RXSTSIE = 0x4000; // RXSTSIE

    static constexpr uint32_t MACRxTxSR_RESET_VALUE = 0x0;
    static constexpr uint32_t MACRxTxSR_TJT = 0x1;    // TJT
    static constexpr uint32_t MACRxTxSR_NCARR = 0x2;  // NCARR
    static constexpr uint32_t MACRxTxSR_LCARR = 0x4;  // LCARR
    static constexpr uint32_t MACRxTxSR_EXDEF = 0x8;  // EXDEF
    static constexpr uint32_t MACRxTxSR_LCOL = 0x10;  // LCOL
    static constexpr uint32_t MACRxTxSR_EXCOL = 0x20; // LCOL
    static constexpr uint32_t MACRxTxSR_RWT = 0x100;  // RWT

    static constexpr uint32_t MACPCSR_RESET_VALUE = 0x0;
    static constexpr uint32_t MACPCSR_PWRDWN = 0x1;            // PWRDWN
    static constexpr uint32_t MACPCSR_MGKPKTEN = 0x2;          // MGKPKTEN
    static constexpr uint32_t MACPCSR_RWKPKTEN = 0x4;          // RWKPKTEN
    static constexpr uint32_t MACPCSR_MGKPRCVD = 0x20;         // MGKPRCVD
    static constexpr uint32_t MACPCSR_RWKPRCVD = 0x40;         // RWKPRCVD
    static constexpr uint32_t MACPCSR_GLBLUCAST = 0x200;       // GLBLUCAST
    static constexpr uint32_t MACPCSR_RWKPFE = 0x400;          // RWKPFE
    template<uint32_t X>
    static constexpr uint32_t MACPCSR_RWKPTR =                 // RWKPTR
        bit_field_t<24, 0x1f>::value<X>();
    static constexpr uint32_t MACPCSR_RWKFILTRST = 0x80000000; // RWKFILTRST

    static constexpr uint32_t MACRWKPFR_RESET_VALUE = 0x0;

    static constexpr uint32_t MACLCSR_RESET_VALUE = 0x0;
    static constexpr uint32_t MACLCSR_TLPIEN = 0x1;     // TLPIEN
    static constexpr uint32_t MACLCSR_TLPIEX = 0x2;     // TLPIEX
    static constexpr uint32_t MACLCSR_RLPIEN = 0x4;     // RLPIEN
    static constexpr uint32_t MACLCSR_RLPIEX = 0x8;     // RLPIEX
    static constexpr uint32_t MACLCSR_TLPIST = 0x100;   // TLPIST
    static constexpr uint32_t MACLCSR_RLPIST = 0x200;   // RLPIST
    static constexpr uint32_t MACLCSR_LPIEN = 0x10000;  // LPIEN
    static constexpr uint32_t MACLCSR_PLS = 0x20000;    // PLS
    static constexpr uint32_t MACLCSR_PLSEN = 0x40000;  // PLSEN
    static constexpr uint32_t MACLCSR_LPITXA = 0x80000; // LPITXA
    static constexpr uint32_t MACLCSR_LPITE = 0x100000; // LPITE

    static constexpr uint32_t MACLTCR_RESET_VALUE = 0x3e80000;
    template<uint32_t X>
    static constexpr uint32_t MACLTCR_TWT =   // TWT
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MACLTCR_LST =   // LST
        bit_field_t<16, 0x3ff>::value<X>();

    static constexpr uint32_t MACLETR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MACLETR_LPIET =   // LPIET
        bit_field_t<0, 0x1ffff>::value<X>();

    static constexpr uint32_t MAC1USTCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MAC1USTCR_TIC_1US_CNTR =   // TIC_1US_CNTR
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t MACVR_RESET_VALUE = 0x3041;
    template<uint32_t X>
    static constexpr uint32_t MACVR_SNPSVER =   // SNPSVER
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MACVR_USERVER =   // USERVER
        bit_field_t<8, 0xff>::value<X>();

    static constexpr uint32_t MACDR_RESET_VALUE = 0x0;
    static constexpr uint32_t MACDR_RPESTS = 0x1;     // RPESTS
    template<uint32_t X>
    static constexpr uint32_t MACDR_RFCFCSTS =        // RFCFCSTS
        bit_field_t<1, 0x3>::value<X>();
    static constexpr uint32_t MACDR_TPESTS = 0x10000; // TPESTS
    template<uint32_t X>
    static constexpr uint32_t MACDR_TFCSTS =          // TFCSTS
        bit_field_t<17, 0x3>::value<X>();

    static constexpr uint32_t MACHWF1R_RESET_VALUE = 0x11841904;
    template<uint32_t X>
    static constexpr uint32_t MACHWF1R_RXFIFOSIZE =        // RXFIFOSIZE
        bit_field_t<0, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MACHWF1R_TXFIFOSIZE =        // TXFIFOSIZE
        bit_field_t<6, 0x1f>::value<X>();
    static constexpr uint32_t MACHWF1R_OSTEN = 0x800;      // OSTEN
    static constexpr uint32_t MACHWF1R_PTOEN = 0x1000;     // PTOEN
    static constexpr uint32_t MACHWF1R_ADVTHWORD = 0x2000; // ADVTHWORD
    template<uint32_t X>
    static constexpr uint32_t MACHWF1R_ADDR64 =            // ADDR64
        bit_field_t<14, 0x3>::value<X>();
    static constexpr uint32_t MACHWF1R_DCBEN = 0x10000;    // DCBEN
    static constexpr uint32_t MACHWF1R_SPHEN = 0x20000;    // SPHEN
    static constexpr uint32_t MACHWF1R_TSOEN = 0x40000;    // TSOEN
    static constexpr uint32_t MACHWF1R_DBGMEMA = 0x80000;  // DBGMEMA
    static constexpr uint32_t MACHWF1R_AVSEL = 0x100000;   // AVSEL
    template<uint32_t X>
    static constexpr uint32_t MACHWF1R_HASHTBLSZ =         // HASHTBLSZ
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MACHWF1R_L3L4FNUM =          // L3L4FNUM
        bit_field_t<27, 0xf>::value<X>();

    static constexpr uint32_t MACHWF2R_RESET_VALUE = 0x41000000;
    template<uint32_t X>
    static constexpr uint32_t MACHWF2R_RXQCNT =       // RXQCNT
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MACHWF2R_TXQCNT =       // TXQCNT
        bit_field_t<6, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MACHWF2R_RXCHCNT =      // RXCHCNT
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MACHWF2R_TXCHCNT =      // TXCHCNT
        bit_field_t<18, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MACHWF2R_PPSOUTNUM =    // PPSOUTNUM
        bit_field_t<24, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MACHWF2R_AUXSNAPNUM =   // AUXSNAPNUM
        bit_field_t<28, 0x7>::value<X>();

    static constexpr uint32_t MACMDIOAR_RESET_VALUE = 0x0;
    static constexpr uint32_t MACMDIOAR_MB = 0x1;        // MB
    static constexpr uint32_t MACMDIOAR_C45E = 0x2;      // C45E
    template<uint32_t X>
    static constexpr uint32_t MACMDIOAR_GOC =            // GOC
        bit_field_t<2, 0x3>::value<X>();
    static constexpr uint32_t MACMDIOAR_SKAP = 0x10;     // SKAP
    template<uint32_t X>
    static constexpr uint32_t MACMDIOAR_CR =             // CR
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MACMDIOAR_NTC =            // NTC
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MACMDIOAR_RDA =            // RDA
        bit_field_t<16, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MACMDIOAR_PA =             // PA
        bit_field_t<21, 0x1f>::value<X>();
    static constexpr uint32_t MACMDIOAR_BTB = 0x4000000; // BTB
    static constexpr uint32_t MACMDIOAR_PSE = 0x8000000; // PSE

    static constexpr uint32_t MACMDIODR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MACMDIODR_MD =   // MD
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MACMDIODR_RA =   // RA
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t MACARPAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MACA0HR_RESET_VALUE = 0x8000ffff;
    template<uint32_t X>
    static constexpr uint32_t MACA0HR_ADDRHI =         // ADDRHI
        bit_field_t<0, 0xffff>::value<X>();
    static constexpr uint32_t MACA0HR_AE = 0x80000000; // AE

    static constexpr uint32_t MACA0LR_RESET_VALUE = 0xffffffff;

    static constexpr uint32_t MACA1LR_RESET_VALUE = 0xffffffff;

    static constexpr uint32_t MACA2LR_RESET_VALUE = 0xffffffff;

    static constexpr uint32_t MACA1HR_RESET_VALUE = 0xffff;
    template<uint32_t X>
    static constexpr uint32_t MACA1HR_ADDRHI =         // ADDRHI
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MACA1HR_MBC =            // MBC
        bit_field_t<24, 0x3f>::value<X>();
    static constexpr uint32_t MACA1HR_SA = 0x40000000; // SA
    static constexpr uint32_t MACA1HR_AE = 0x80000000; // AE

    static constexpr uint32_t MACA2HR_RESET_VALUE = 0xffff;
    template<uint32_t X>
    static constexpr uint32_t MACA2HR_ADDRHI =         // ADDRHI
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MACA2HR_MBC =            // MBC
        bit_field_t<24, 0x3f>::value<X>();
    static constexpr uint32_t MACA2HR_SA = 0x40000000; // SA
    static constexpr uint32_t MACA2HR_AE = 0x80000000; // AE

    static constexpr uint32_t MACA3HR_RESET_VALUE = 0xffff;
    template<uint32_t X>
    static constexpr uint32_t MACA3HR_ADDRHI =         // ADDRHI
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MACA3HR_MBC =            // MBC
        bit_field_t<24, 0x3f>::value<X>();
    static constexpr uint32_t MACA3HR_SA = 0x40000000; // SA
    static constexpr uint32_t MACA3HR_AE = 0x80000000; // AE

    static constexpr uint32_t MACA3LR_RESET_VALUE = 0xffffffff;

    static constexpr uint32_t MMC_CONTROL_RESET_VALUE = 0x0;
    static constexpr uint32_t MMC_CONTROL_CNTRST = 0x1;      // CNTRST
    static constexpr uint32_t MMC_CONTROL_CNTSTOPRO = 0x2;   // CNTSTOPRO
    static constexpr uint32_t MMC_CONTROL_RSTONRD = 0x4;     // RSTONRD
    static constexpr uint32_t MMC_CONTROL_CNTFREEZ = 0x8;    // CNTFREEZ
    static constexpr uint32_t MMC_CONTROL_CNTPRST = 0x10;    // CNTPRST
    static constexpr uint32_t MMC_CONTROL_CNTPRSTLVL = 0x20; // CNTPRSTLVL
    static constexpr uint32_t MMC_CONTROL_UCDBC = 0x100;     // UCDBC

    static constexpr uint32_t MMC_RX_INTERRUPT_RESET_VALUE = 0x0;
    static constexpr uint32_t MMC_RX_INTERRUPT_RXCRCERPIS = 0x20;      // RXCRCERPIS
    static constexpr uint32_t MMC_RX_INTERRUPT_RXALGNERPIS = 0x40;     // RXALGNERPIS
    static constexpr uint32_t MMC_RX_INTERRUPT_RXUCGPIS = 0x20000;     // RXUCGPIS
    static constexpr uint32_t MMC_RX_INTERRUPT_RXLPIUSCIS = 0x4000000; // RXLPIUSCIS
    static constexpr uint32_t MMC_RX_INTERRUPT_RXLPITRCIS = 0x8000000; // RXLPITRCIS

    static constexpr uint32_t MMC_TX_INTERRUPT_RESET_VALUE = 0x0;
    static constexpr uint32_t MMC_TX_INTERRUPT_TXSCOLGPIS = 0x4000;    // TXSCOLGPIS
    static constexpr uint32_t MMC_TX_INTERRUPT_TXMCOLGPIS = 0x8000;    // TXMCOLGPIS
    static constexpr uint32_t MMC_TX_INTERRUPT_TXGPKTIS = 0x200000;    // TXGPKTIS
    static constexpr uint32_t MMC_TX_INTERRUPT_TXLPIUSCIS = 0x4000000; // TXLPIUSCIS
    static constexpr uint32_t MMC_TX_INTERRUPT_TXLPITRCIS = 0x8000000; // TXLPITRCIS

    static constexpr uint32_t MMC_RX_INTERRUPT_MASK_RESET_VALUE = 0x0;
    static constexpr uint32_t MMC_RX_INTERRUPT_MASK_RXCRCERPIM = 0x20;      // RXCRCERPIM
    static constexpr uint32_t MMC_RX_INTERRUPT_MASK_RXALGNERPIM = 0x40;     // RXALGNERPIM
    static constexpr uint32_t MMC_RX_INTERRUPT_MASK_RXUCGPIM = 0x20000;     // RXUCGPIM
    static constexpr uint32_t MMC_RX_INTERRUPT_MASK_RXLPIUSCIM = 0x4000000; // RXLPIUSCIM
    static constexpr uint32_t MMC_RX_INTERRUPT_MASK_RXLPITRCIM = 0x8000000; // RXLPITRCIM

    static constexpr uint32_t MMC_TX_INTERRUPT_MASK_RESET_VALUE = 0x0;
    static constexpr uint32_t MMC_TX_INTERRUPT_MASK_TXSCOLGPIM = 0x4000;    // TXSCOLGPIM
    static constexpr uint32_t MMC_TX_INTERRUPT_MASK_TXMCOLGPIM = 0x8000;    // TXMCOLGPIM
    static constexpr uint32_t MMC_TX_INTERRUPT_MASK_TXGPKTIM = 0x200000;    // TXGPKTIM
    static constexpr uint32_t MMC_TX_INTERRUPT_MASK_TXLPIUSCIM = 0x4000000; // TXLPIUSCIM
    static constexpr uint32_t MMC_TX_INTERRUPT_MASK_TXLPITRCIM = 0x8000000; // TXLPITRCIM

    static constexpr uint32_t TX_SINGLE_COLLISION_GOOD_PACKETS_RESET_VALUE = 0x0;

    static constexpr uint32_t TX_MULTIPLE_COLLISION_GOOD_PACKETS_RESET_VALUE = 0x0;

    static constexpr uint32_t TX_PACKET_COUNT_GOOD_RESET_VALUE = 0x0;

    static constexpr uint32_t RX_CRC_ERROR_PACKETS_RESET_VALUE = 0x0;

    static constexpr uint32_t RX_ALIGNMENT_ERROR_PACKETS_RESET_VALUE = 0x0;

    static constexpr uint32_t RX_UNICAST_PACKETS_GOOD_RESET_VALUE = 0x0;

    static constexpr uint32_t TX_LPI_USEC_CNTR_RESET_VALUE = 0x0;

    static constexpr uint32_t TX_LPI_TRAN_CNTR_RESET_VALUE = 0x0;

    static constexpr uint32_t RX_LPI_USEC_CNTR_RESET_VALUE = 0x0;

    static constexpr uint32_t RX_LPI_TRAN_CNTR_RESET_VALUE = 0x0;

    static constexpr uint32_t MACL3L4C0R_RESET_VALUE = 0x0;
    static constexpr uint32_t MACL3L4C0R_L3PEN0 = 0x1;       // L3PEN0
    static constexpr uint32_t MACL3L4C0R_L3SAM0 = 0x4;       // L3SAM0
    static constexpr uint32_t MACL3L4C0R_L3SAIM0 = 0x8;      // L3SAIM0
    static constexpr uint32_t MACL3L4C0R_L3DAM0 = 0x10;      // L3DAM0
    static constexpr uint32_t MACL3L4C0R_L3DAIM0 = 0x20;     // L3DAIM0
    template<uint32_t X>
    static constexpr uint32_t MACL3L4C0R_L3HSBM0 =           // L3HSBM0
        bit_field_t<6, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MACL3L4C0R_L3HDBM0 =           // L3HDBM0
        bit_field_t<11, 0x1f>::value<X>();
    static constexpr uint32_t MACL3L4C0R_L4PEN0 = 0x10000;   // L4PEN0
    static constexpr uint32_t MACL3L4C0R_L4SPM0 = 0x40000;   // L4SPM0
    static constexpr uint32_t MACL3L4C0R_L4SPIM0 = 0x80000;  // L4SPIM0
    static constexpr uint32_t MACL3L4C0R_L4DPM0 = 0x100000;  // L4DPM0
    static constexpr uint32_t MACL3L4C0R_L4DPIM0 = 0x200000; // L4DPIM0

    static constexpr uint32_t MACL4A0R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MACL4A0R_L4SP0 =   // L4SP0
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MACL4A0R_L4DP0 =   // L4DP0
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t MACL3A00R_RESET_VALUE = 0x0;

    static constexpr uint32_t MACL3A10R_RESET_VALUE = 0x0;

    static constexpr uint32_t MACL3A20_RESET_VALUE = 0x0;

    static constexpr uint32_t MACL3A30_RESET_VALUE = 0x0;

    static constexpr uint32_t MACL3L4C1R_RESET_VALUE = 0x0;
    static constexpr uint32_t MACL3L4C1R_L3PEN1 = 0x1;       // L3PEN1
    static constexpr uint32_t MACL3L4C1R_L3SAM1 = 0x4;       // L3SAM1
    static constexpr uint32_t MACL3L4C1R_L3SAIM1 = 0x8;      // L3SAIM1
    static constexpr uint32_t MACL3L4C1R_L3DAM1 = 0x10;      // L3DAM1
    static constexpr uint32_t MACL3L4C1R_L3DAIM1 = 0x20;     // L3DAIM1
    template<uint32_t X>
    static constexpr uint32_t MACL3L4C1R_L3HSBM1 =           // L3HSBM1
        bit_field_t<6, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MACL3L4C1R_L3HDBM1 =           // L3HDBM1
        bit_field_t<11, 0x1f>::value<X>();
    static constexpr uint32_t MACL3L4C1R_L4PEN1 = 0x10000;   // L4PEN1
    static constexpr uint32_t MACL3L4C1R_L4SPM1 = 0x40000;   // L4SPM1
    static constexpr uint32_t MACL3L4C1R_L4SPIM1 = 0x80000;  // L4SPIM1
    static constexpr uint32_t MACL3L4C1R_L4DPM1 = 0x100000;  // L4DPM1
    static constexpr uint32_t MACL3L4C1R_L4DPIM1 = 0x200000; // L4DPIM1

    static constexpr uint32_t MACL4A1R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MACL4A1R_L4SP1 =   // L4SP1
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MACL4A1R_L4DP1 =   // L4DP1
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t MACL3A01R_RESET_VALUE = 0x0;

    static constexpr uint32_t MACL3A11R_RESET_VALUE = 0x0;

    static constexpr uint32_t MACL3A21R_RESET_VALUE = 0x0;

    static constexpr uint32_t MACL3A31R_RESET_VALUE = 0x0;

    static constexpr uint32_t MACTSCR_RESET_VALUE = 0x200;
    static constexpr uint32_t MACTSCR_TSENA = 0x1;           // TSENA
    static constexpr uint32_t MACTSCR_TSCFUPDT = 0x2;        // TSCFUPDT
    static constexpr uint32_t MACTSCR_TSINIT = 0x4;          // TSINIT
    static constexpr uint32_t MACTSCR_TSUPDT = 0x8;          // TSUPDT
    static constexpr uint32_t MACTSCR_TSADDREG = 0x20;       // TSADDREG
    static constexpr uint32_t MACTSCR_TSENALL = 0x100;       // TSENALL
    static constexpr uint32_t MACTSCR_TSCTRLSSR = 0x200;     // TSCTRLSSR
    static constexpr uint32_t MACTSCR_TSVER2ENA = 0x400;     // TSVER2ENA
    static constexpr uint32_t MACTSCR_TSIPENA = 0x800;       // TSIPENA
    static constexpr uint32_t MACTSCR_TSIPV6ENA = 0x1000;    // TSIPV6ENA
    static constexpr uint32_t MACTSCR_TSIPV4ENA = 0x2000;    // TSIPV4ENA
    static constexpr uint32_t MACTSCR_TSEVNTENA = 0x4000;    // TSEVNTENA
    static constexpr uint32_t MACTSCR_TSMSTRENA = 0x8000;    // TSMSTRENA
    template<uint32_t X>
    static constexpr uint32_t MACTSCR_SNAPTYPSEL =           // SNAPTYPSEL
        bit_field_t<16, 0x3>::value<X>();
    static constexpr uint32_t MACTSCR_TSENMACADDR = 0x40000; // TSENMACADDR
    static constexpr uint32_t MACTSCR_CSC = 0x80000;         // CSC
    static constexpr uint32_t MACTSCR_TXTSSTSM = 0x1000000;  // TXTSSTSM

    static constexpr uint32_t MACSSIR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MACSSIR_SNSINC =   // SNSINC
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MACSSIR_SSINC =    // SSINC
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t MACSTSR_RESET_VALUE = 0x0;

    static constexpr uint32_t MACSTNR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MACSTNR_TSSS =   // TSSS
        bit_field_t<0, 0x7fffffff>::value<X>();

    static constexpr uint32_t MACSTSUR_RESET_VALUE = 0x0;

    static constexpr uint32_t MACSTNUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MACSTNUR_TSSS =               // TSSS
        bit_field_t<0, 0x7fffffff>::value<X>();
    static constexpr uint32_t MACSTNUR_ADDSUB = 0x80000000; // ADDSUB

    static constexpr uint32_t MACTSAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MACTSSR_RESET_VALUE = 0x0;
    static constexpr uint32_t MACTSSR_TSSOVF = 0x1;       // TSSOVF
    static constexpr uint32_t MACTSSR_TSTARGT0 = 0x2;     // TSTARGT0
    static constexpr uint32_t MACTSSR_AUXTSTRIG = 0x4;    // AUXTSTRIG
    static constexpr uint32_t MACTSSR_TSTRGTERR0 = 0x8;   // TSTRGTERR0
    static constexpr uint32_t MACTSSR_TXTSSIS = 0x8000;   // TXTSSIS
    template<uint32_t X>
    static constexpr uint32_t MACTSSR_ATSSTN =            // ATSSTN
        bit_field_t<16, 0xf>::value<X>();
    static constexpr uint32_t MACTSSR_ATSSTM = 0x1000000; // ATSSTM
    template<uint32_t X>
    static constexpr uint32_t MACTSSR_ATSNS =             // ATSNS
        bit_field_t<25, 0x1f>::value<X>();

    static constexpr uint32_t MACTxTSSNR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MACTxTSSNR_TXTSSLO =              // TXTSSLO
        bit_field_t<0, 0x7fffffff>::value<X>();
    static constexpr uint32_t MACTxTSSNR_TXTSSMIS = 0x80000000; // TXTSSMIS

    static constexpr uint32_t MACTxTSSSR_RESET_VALUE = 0x0;

    static constexpr uint32_t MACACR_RESET_VALUE = 0x0;
    static constexpr uint32_t MACACR_ATSFC = 0x1;   // ATSFC
    static constexpr uint32_t MACACR_ATSEN0 = 0x10; // ATSEN0
    static constexpr uint32_t MACACR_ATSEN1 = 0x20; // ATSEN1
    static constexpr uint32_t MACACR_ATSEN2 = 0x40; // ATSEN2
    static constexpr uint32_t MACACR_ATSEN3 = 0x80; // ATSEN3

    static constexpr uint32_t MACATSNR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MACATSNR_AUXTSLO =   // AUXTSLO
        bit_field_t<0, 0x7fffffff>::value<X>();

    static constexpr uint32_t MACATSSR_RESET_VALUE = 0x0;

    static constexpr uint32_t MACTSIACR_RESET_VALUE = 0x0;

    static constexpr uint32_t MACTSEACR_RESET_VALUE = 0x0;

    static constexpr uint32_t MACTSICNR_RESET_VALUE = 0x0;

    static constexpr uint32_t MACTSECNR_RESET_VALUE = 0x0;

    static constexpr uint32_t MACPPSCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MACPPSCR_PPSCTRL =       // PPSCTRL
        bit_field_t<0, 0xf>::value<X>();
    static constexpr uint32_t MACPPSCR_PPSEN0 = 0x10;  // PPSEN0
    template<uint32_t X>
    static constexpr uint32_t MACPPSCR_TRGTMODSEL0 =   // TRGTMODSEL0
        bit_field_t<5, 0x3>::value<X>();

    static constexpr uint32_t MACPPSTTSR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MACPPSTTSR_TSTRH0 =   // TSTRH0
        bit_field_t<0, 0x7fffffff>::value<X>();

    static constexpr uint32_t MACPPSTTNR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MACPPSTTNR_TTSL0 =                 // TTSL0
        bit_field_t<0, 0x7fffffff>::value<X>();
    static constexpr uint32_t MACPPSTTNR_TRGTBUSY0 = 0x80000000; // TRGTBUSY0

    static constexpr uint32_t MACPPSIR_RESET_VALUE = 0x0;

    static constexpr uint32_t MACPPSWR_RESET_VALUE = 0x0;

    static constexpr uint32_t MACPOCR_RESET_VALUE = 0x0;
    static constexpr uint32_t MACPOCR_PTOEN = 0x1;       // PTOEN
    static constexpr uint32_t MACPOCR_ASYNCEN = 0x2;     // ASYNCEN
    static constexpr uint32_t MACPOCR_APDREQEN = 0x4;    // APDREQEN
    static constexpr uint32_t MACPOCR_ASYNCTRIG = 0x10;  // ASYNCTRIG
    static constexpr uint32_t MACPOCR_APDREQTRIG = 0x20; // APDREQTRIG
    static constexpr uint32_t MACPOCR_DRRDIS = 0x40;     // DRRDIS
    template<uint32_t X>
    static constexpr uint32_t MACPOCR_DN =               // DN
        bit_field_t<8, 0xff>::value<X>();

    static constexpr uint32_t MACSPI0R_RESET_VALUE = 0x0;

    static constexpr uint32_t MACSPI1R_RESET_VALUE = 0x0;

    static constexpr uint32_t MACSPI2R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MACSPI2R_SPI2 =   // SPI2
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MACLMIR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MACLMIR_LSI =       // LSI
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MACLMIR_DRSYNCR =   // DRSYNCR
        bit_field_t<8, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MACLMIR_LMPDRI =    // LMPDRI
        bit_field_t<24, 0xff>::value<X>();
};


////
//
//      Ethernet: media access control (MAC)
//
////

struct stm32h745_cm4_ethernet_mac_t
{
    volatile uint32_t MACCR;                              // [read-write] Operating mode configuration register
    volatile uint32_t MACECR;                             // [read-write] Extended operating mode configuration register
    volatile uint32_t MACPFR;                             // [read-write] Packet filtering control register
    volatile uint32_t MACWTR;                             // [read-write] Watchdog timeout register
    volatile uint32_t MACHT0R;                            // [read-write] Hash Table 0 register
    volatile uint32_t MACHT1R;                            // [read-write] Hash Table 1 register
    reserved_t<0xe> _0x50;
    volatile uint32_t MACVTR;                             // [read-write] VLAN tag register
    reserved_t<0x1> _0x58;
    volatile uint32_t MACVHTR;                            // [read-write] VLAN Hash table register
    reserved_t<0x1> _0x60;
    volatile uint32_t MACVIR;                             // [read-write] VLAN inclusion register
    volatile uint32_t MACIVIR;                            // [read-write] Inner VLAN inclusion register
    reserved_t<0x2> _0x70;
    volatile uint32_t MACQTxFCR;                          // [read-write] Tx Queue flow control register
    reserved_t<0x7> _0x90;
    volatile uint32_t MACRxFCR;                           // [read-write] Rx flow control register
    reserved_t<0x7> _0xb0;
    volatile uint32_t MACISR;                             // [read-only] Interrupt status register
    volatile uint32_t MACIER;                             // [read-write] Interrupt enable register
    volatile uint32_t MACRxTxSR;                          // [read-only] Rx Tx status register
    reserved_t<0x1> _0xc0;
    volatile uint32_t MACPCSR;                            // PMT control status register
    volatile uint32_t MACRWKPFR;                          // [read-write] Remove wakeup packet filter register
    reserved_t<0x2> _0xd0;
    volatile uint32_t MACLCSR;                            // LPI control status register
    volatile uint32_t MACLTCR;                            // [read-write] LPI timers control register
    volatile uint32_t MACLETR;                            // [read-write] LPI entry timer register
    volatile uint32_t MAC1USTCR;                          // [read-write] 1-microsecond-tick counter register
    reserved_t<0xc> _0x110;
    volatile uint32_t MACVR;                              // [read-only] Version register
    volatile uint32_t MACDR;                              // [read-only] Debug register
    reserved_t<0x2> _0x120;
    volatile uint32_t MACHWF1R;                           // [read-only] HW feature 1 register
    volatile uint32_t MACHWF2R;                           // [read-only] HW feature 2 register
    reserved_t<0x36> _0x200;
    volatile uint32_t MACMDIOAR;                          // [read-write] MDIO address register
    volatile uint32_t MACMDIODR;                          // [read-write] MDIO data register
    reserved_t<0x3e> _0x300;
    volatile uint32_t MACA0HR;                            // Address 0 high register
    volatile uint32_t MACA0LR;                            // [read-write] Address 0 low register
    volatile uint32_t MACA1HR;                            // [read-write] Address 1 high register
    volatile uint32_t MACA1LR;                            // [read-write] Address 1 low register
    volatile uint32_t MACA2HR;                            // [read-write] Address 2 high register
    volatile uint32_t MACA2LR;                            // [read-write] Address 2 low register
    volatile uint32_t MACA3HR;                            // [read-write] Address 3 high register
    volatile uint32_t MACA3LR;                            // [read-write] Address 3 low register
    reserved_t<0xf8> _0x700;
    volatile uint32_t MMC_CONTROL;                        // [read-write] MMC control register
    volatile uint32_t MMC_RX_INTERRUPT;                   // [read-only] MMC Rx interrupt register
    volatile uint32_t MMC_TX_INTERRUPT;                   // [read-only] MMC Tx interrupt register
    volatile uint32_t MMC_RX_INTERRUPT_MASK;              // MMC Rx interrupt mask register
    volatile uint32_t MMC_TX_INTERRUPT_MASK;              // MMC Tx interrupt mask register
    reserved_t<0xe> _0x74c;
    volatile uint32_t TX_SINGLE_COLLISION_GOOD_PACKETS;   // [read-only] Tx single collision good packets register
    volatile uint32_t TX_MULTIPLE_COLLISION_GOOD_PACKETS; // [read-only] Tx multiple collision good packets register
    reserved_t<0x5> _0x768;
    volatile uint32_t TX_PACKET_COUNT_GOOD;               // [read-only] Tx packet count good register
    reserved_t<0xa> _0x794;
    volatile uint32_t RX_CRC_ERROR_PACKETS;               // [read-only] Rx CRC error packets register
    volatile uint32_t RX_ALIGNMENT_ERROR_PACKETS;         // [read-only] Rx alignment error packets register
    reserved_t<0xa> _0x7c4;
    volatile uint32_t RX_UNICAST_PACKETS_GOOD;            // [read-only] Rx unicast packets good register
    reserved_t<0x9> _0x7ec;
    volatile uint32_t TX_LPI_USEC_CNTR;                   // [read-only] Tx LPI microsecond timer register
    volatile uint32_t TX_LPI_TRAN_CNTR;                   // [read-only] Tx LPI transition counter register
    volatile uint32_t RX_LPI_USEC_CNTR;                   // [read-only] Rx LPI microsecond counter register
    volatile uint32_t RX_LPI_TRAN_CNTR;                   // [read-only] Rx LPI transition counter register
    reserved_t<0x41> _0x900;
    volatile uint32_t MACL3L4C0R;                         // [read-write] L3 and L4 control 0 register
    volatile uint32_t MACL4A0R;                           // [read-write] Layer4 address filter 0 register
    reserved_t<0x2> _0x910;
    volatile uint32_t MACL3A00R;                          // [read-write] MACL3A00R
    volatile uint32_t MACL3A10R;                          // [read-write] Layer3 address 1 filter 0 register
    volatile uint32_t MACL3A20;                           // [read-write] Layer3 Address 2 filter 0 register
    volatile uint32_t MACL3A30;                           // [read-write] Layer3 Address 3 filter 0 register
    reserved_t<0x4> _0x930;
    volatile uint32_t MACL3L4C1R;                         // [read-write] L3 and L4 control 1 register
    volatile uint32_t MACL4A1R;                           // [read-write] Layer 4 address filter 1 register
    reserved_t<0x2> _0x940;
    volatile uint32_t MACL3A01R;                          // [read-write] Layer3 address 0 filter 1 Register
    volatile uint32_t MACL3A11R;                          // [read-write] Layer3 address 1 filter 1 register
    volatile uint32_t MACL3A21R;                          // [read-write] Layer3 address 2 filter 1 Register
    volatile uint32_t MACL3A31R;                          // [read-write] Layer3 address 3 filter 1 register
    reserved_t<0x64> _0xae0;
    volatile uint32_t MACARPAR;                           // [read-write] ARP address register
    reserved_t<0x7> _0xb00;
    volatile uint32_t MACTSCR;                            // Timestamp control Register
    volatile uint32_t MACSSIR;                            // [read-write] Sub-second increment register
    volatile uint32_t MACSTSR;                            // [read-only] System time seconds register
    volatile uint32_t MACSTNR;                            // [read-only] System time nanoseconds register
    volatile uint32_t MACSTSUR;                           // [read-write] System time seconds update register
    volatile uint32_t MACSTNUR;                           // [read-write] System time nanoseconds update register
    volatile uint32_t MACTSAR;                            // [read-write] Timestamp addend register
    reserved_t<0x1> _0xb20;
    volatile uint32_t MACTSSR;                            // [read-only] Timestamp status register
    reserved_t<0x3> _0xb30;
    volatile uint32_t MACTxTSSNR;                         // [read-only] Tx timestamp status nanoseconds register
    volatile uint32_t MACTxTSSSR;                         // [read-only] Tx timestamp status seconds register
    reserved_t<0x2> _0xb40;
    volatile uint32_t MACACR;                             // [read-write] Auxiliary control register
    reserved_t<0x1> _0xb48;
    volatile uint32_t MACATSNR;                           // [read-only] Auxiliary timestamp nanoseconds register
    volatile uint32_t MACATSSR;                           // [read-only] Auxiliary timestamp seconds register
    volatile uint32_t MACTSIACR;                          // [read-write] Timestamp Ingress asymmetric correction register
    volatile uint32_t MACTSEACR;                          // [read-write] Timestamp Egress asymmetric correction register
    volatile uint32_t MACTSICNR;                          // [read-write] Timestamp Ingress correction nanosecond register
    volatile uint32_t MACTSECNR;                          // [read-write] Timestamp Egress correction nanosecond register
    reserved_t<0x4> _0xb70;
    volatile uint32_t MACPPSCR;                           // [read-write] PPS control register
    reserved_t<0x3> _0xb80;
    volatile uint32_t MACPPSTTSR;                         // [read-write] PPS target time seconds register
    volatile uint32_t MACPPSTTNR;                         // [read-write] PPS target time nanoseconds register
    volatile uint32_t MACPPSIR;                           // [read-write] PPS interval register
    volatile uint32_t MACPPSWR;                           // [read-write] PPS width register
    reserved_t<0xc> _0xbc0;
    volatile uint32_t MACPOCR;                            // [read-write] PTP Offload control register
    volatile uint32_t MACSPI0R;                           // [read-write] PTP Source Port Identity 0 Register
    volatile uint32_t MACSPI1R;                           // [read-write] PTP Source port identity 1 register
    volatile uint32_t MACSPI2R;                           // [read-write] PTP Source port identity 2 register
    volatile uint32_t MACLMIR;                            // [read-write] Log message interval register
    reserved_t<0xb> _0xc00;
    volatile uint32_t MTLOMR;                             // [read-write] Operating mode Register
    reserved_t<0x7> _0xc20;
    volatile uint32_t MTLISR;                             // [read-only] Interrupt status Register
    reserved_t<0x37> _0xd00;
    volatile uint32_t MTLTxQOMR;                          // Tx queue operating mode Register
    volatile uint32_t MTLTxQUR;                           // [read-only] Tx queue underflow register
    volatile uint32_t MTLTxQDR;                           // [read-only] Tx queue debug Register
    reserved_t<0x8> _0xd2c;
    volatile uint32_t MTLQICSR;                           // [read-write] Queue interrupt control status Register
    volatile uint32_t MTLRxQOMR;                          // Rx queue operating mode register
    volatile uint32_t MTLRxQMPOCR;                        // [read-only] Rx queue missed packet and overflow counter register
    volatile uint32_t MTLRxQDR;                           // [read-only] Rx queue debug register
    reserved_t<0xb1> _0x1000;
    volatile uint32_t DMAMR;                              // DMA mode register
    volatile uint32_t DMASBMR;                            // System bus mode register
    volatile uint32_t DMAISR;                             // [read-only] Interrupt status register
    volatile uint32_t DMADSR;                             // [read-only] Debug status register
    reserved_t<0x3c> _0x1100;
    volatile uint32_t DMACCR;                             // [read-write] Channel control register
    volatile uint32_t DMACTxCR;                           // [read-write] Channel transmit control register
    volatile uint32_t DMACRxCR;                           // [read-write] Channel receive control register
    reserved_t<0x2> _0x1114;
    volatile uint32_t DMACTxDLAR;                         // [read-write] Channel Tx descriptor list address register
    reserved_t<0x1> _0x111c;
    volatile uint32_t DMACRxDLAR;                         // [read-write] Channel Rx descriptor list address register
    volatile uint32_t DMACTxDTPR;                         // [read-write] Channel Tx descriptor tail pointer register
    reserved_t<0x1> _0x1128;
    volatile uint32_t DMACRxDTPR;                         // [read-write] Channel Rx descriptor tail pointer register
    volatile uint32_t DMACTxRLR;                          // [read-write] Channel Tx descriptor ring length register
    volatile uint32_t DMACRxRLR;                          // [read-write] Channel Rx descriptor ring length register
    volatile uint32_t DMACIER;                            // [read-write] Channel interrupt enable register
    volatile uint32_t DMACRxIWTR;                         // [read-write] Channel Rx interrupt watchdog timer register
    reserved_t<0x2> _0x1144;
    volatile uint32_t DMACCATxDR;                         // [read-only] Channel current application transmit descriptor register
    reserved_t<0x1> _0x114c;
    volatile uint32_t DMACCARxDR;                         // [read-only] Channel current application receive descriptor register
    reserved_t<0x1> _0x1154;
    volatile uint32_t DMACCATxBR;                         // [read-only] Channel current application transmit buffer register
    reserved_t<0x1> _0x115c;
    volatile uint32_t DMACCARxBR;                         // [read-only] Channel current application receive buffer register
    volatile uint32_t DMACSR;                             // Channel status register
    reserved_t<0x2> _0x116c;
    volatile uint32_t DMACMFCR;                           // [read-only] Channel missed frame count register

    static constexpr uint32_t DMAMR_RESET_VALUE = 0x0;
    static constexpr uint32_t DMAMR_SWR = 0x1;      // Software Reset
    static constexpr uint32_t DMAMR_DA = 0x2;       // DMA Tx or Rx Arbitration Scheme
    static constexpr uint32_t DMAMR_TXPR = 0x800;   // Transmit priority
    template<uint32_t X>
    static constexpr uint32_t DMAMR_PR =            // Priority ratio
        bit_field_t<12, 0x7>::value<X>();
    static constexpr uint32_t DMAMR_INTM = 0x10000; // Interrupt Mode

    static constexpr uint32_t DMASBMR_RESET_VALUE = 0x1010000;
    static constexpr uint32_t DMASBMR_FB = 0x1;     // Fixed Burst Length
    static constexpr uint32_t DMASBMR_AAL = 0x1000; // Address-Aligned Beats
    static constexpr uint32_t DMASBMR_MB = 0x4000;  // Mixed Burst
    static constexpr uint32_t DMASBMR_RB = 0x8000;  // Rebuild INCRx Burst

    static constexpr uint32_t DMAISR_RESET_VALUE = 0x0;
    static constexpr uint32_t DMAISR_DC0IS = 0x1;     // DMA Channel Interrupt Status
    static constexpr uint32_t DMAISR_MTLIS = 0x10000; // MTL Interrupt Status
    static constexpr uint32_t DMAISR_MACIS = 0x20000; // MAC Interrupt Status

    static constexpr uint32_t DMADSR_RESET_VALUE = 0x0;
    static constexpr uint32_t DMADSR_AXWHSTS = 0x1; // AHB Master Write Channel
    template<uint32_t X>
    static constexpr uint32_t DMADSR_RPS0 =         // DMA Channel Receive Process State
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMADSR_TPS0 =         // DMA Channel Transmit Process State
        bit_field_t<12, 0xf>::value<X>();

    static constexpr uint32_t DMACCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMACCR_MSS =            // Maximum Segment Size
        bit_field_t<0, 0x3fff>::value<X>();
    static constexpr uint32_t DMACCR_PBLX8 = 0x10000; // 8xPBL mode
    template<uint32_t X>
    static constexpr uint32_t DMACCR_DSL =            // Descriptor Skip Length
        bit_field_t<18, 0x7>::value<X>();

    static constexpr uint32_t DMACTxCR_RESET_VALUE = 0x0;
    static constexpr uint32_t DMACTxCR_ST = 0x1;     // Start or Stop Transmission Command
    static constexpr uint32_t DMACTxCR_OSF = 0x10;   // Operate on Second Packet
    static constexpr uint32_t DMACTxCR_TSE = 0x1000; // TCP Segmentation Enabled
    template<uint32_t X>
    static constexpr uint32_t DMACTxCR_TXPBL =       // Transmit Programmable Burst Length
        bit_field_t<16, 0x3f>::value<X>();

    static constexpr uint32_t DMACRxCR_RESET_VALUE = 0x0;
    static constexpr uint32_t DMACRxCR_SR = 0x1;         // Start or Stop Receive Command
    template<uint32_t X>
    static constexpr uint32_t DMACRxCR_RBSZ =            // Receive Buffer size
        bit_field_t<1, 0x3fff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMACRxCR_RXPBL =           // RXPBL
        bit_field_t<16, 0x3f>::value<X>();
    static constexpr uint32_t DMACRxCR_RPF = 0x80000000; // DMA Rx Channel Packet Flush

    static constexpr uint32_t DMACTxDLAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMACTxDLAR_TDESLA =   // Start of Transmit List
        bit_field_t<2, 0x3fffffff>::value<X>();

    static constexpr uint32_t DMACRxDLAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMACRxDLAR_RDESLA =   // Start of Receive List
        bit_field_t<2, 0x3fffffff>::value<X>();

    static constexpr uint32_t DMACTxDTPR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMACTxDTPR_TDT =   // Transmit Descriptor Tail Pointer
        bit_field_t<2, 0x3fffffff>::value<X>();

    static constexpr uint32_t DMACRxDTPR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMACRxDTPR_RDT =   // Receive Descriptor Tail Pointer
        bit_field_t<2, 0x3fffffff>::value<X>();

    static constexpr uint32_t DMACTxRLR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMACTxRLR_TDRL =   // Transmit Descriptor Ring Length
        bit_field_t<0, 0x3ff>::value<X>();

    static constexpr uint32_t DMACRxRLR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMACRxRLR_RDRL =   // Receive Descriptor Ring Length
        bit_field_t<0, 0x3ff>::value<X>();

    static constexpr uint32_t DMACIER_RESET_VALUE = 0x0;
    static constexpr uint32_t DMACIER_TIE = 0x1;     // Transmit Interrupt Enable
    static constexpr uint32_t DMACIER_TXSE = 0x2;    // Transmit Stopped Enable
    static constexpr uint32_t DMACIER_TBUE = 0x4;    // Transmit Buffer Unavailable Enable
    static constexpr uint32_t DMACIER_RIE = 0x40;    // Receive Interrupt Enable
    static constexpr uint32_t DMACIER_RBUE = 0x80;   // Receive Buffer Unavailable Enable
    static constexpr uint32_t DMACIER_RSE = 0x100;   // Receive Stopped Enable
    static constexpr uint32_t DMACIER_RWTE = 0x200;  // Receive Watchdog Timeout Enable
    static constexpr uint32_t DMACIER_ETIE = 0x400;  // Early Transmit Interrupt Enable
    static constexpr uint32_t DMACIER_ERIE = 0x800;  // Early Receive Interrupt Enable
    static constexpr uint32_t DMACIER_FBEE = 0x1000; // Fatal Bus Error Enable
    static constexpr uint32_t DMACIER_CDEE = 0x2000; // Context Descriptor Error Enable
    static constexpr uint32_t DMACIER_AIE = 0x4000;  // Abnormal Interrupt Summary Enable
    static constexpr uint32_t DMACIER_NIE = 0x8000;  // Normal Interrupt Summary Enable

    static constexpr uint32_t DMACRxIWTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMACRxIWTR_RWT =   // Receive Interrupt Watchdog Timer Count
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DMACCATxDR_RESET_VALUE = 0x0;

    static constexpr uint32_t DMACCARxDR_RESET_VALUE = 0x0;

    static constexpr uint32_t DMACCATxBR_RESET_VALUE = 0x0;

    static constexpr uint32_t DMACCARxBR_RESET_VALUE = 0x0;

    static constexpr uint32_t DMACSR_RESET_VALUE = 0x0;
    static constexpr uint32_t DMACSR_TI = 0x1;     // Transmit Interrupt
    static constexpr uint32_t DMACSR_TPS = 0x2;    // Transmit Process Stopped
    static constexpr uint32_t DMACSR_TBU = 0x4;    // Transmit Buffer Unavailable
    static constexpr uint32_t DMACSR_RI = 0x40;    // Receive Interrupt
    static constexpr uint32_t DMACSR_RBU = 0x80;   // Receive Buffer Unavailable
    static constexpr uint32_t DMACSR_RPS = 0x100;  // Receive Process Stopped
    static constexpr uint32_t DMACSR_RWT = 0x200;  // Receive Watchdog Timeout
    static constexpr uint32_t DMACSR_ET = 0x400;   // Early Transmit Interrupt
    static constexpr uint32_t DMACSR_ER = 0x800;   // Early Receive Interrupt
    static constexpr uint32_t DMACSR_FBE = 0x1000; // Fatal Bus Error
    static constexpr uint32_t DMACSR_CDE = 0x2000; // Context Descriptor Error
    static constexpr uint32_t DMACSR_AIS = 0x4000; // Abnormal Interrupt Summary
    static constexpr uint32_t DMACSR_NIS = 0x8000; // Normal Interrupt Summary
    template<uint32_t X>
    static constexpr uint32_t DMACSR_TEB =         // Tx DMA Error Bits
        bit_field_t<16, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMACSR_REB =         // Rx DMA Error Bits
        bit_field_t<19, 0x7>::value<X>();

    static constexpr uint32_t DMACMFCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMACMFCR_MFC =          // Dropped Packet Counters
        bit_field_t<0, 0x7ff>::value<X>();
    static constexpr uint32_t DMACMFCR_MFCO = 0x8000; // Overflow status of the MFC Counter

    static constexpr uint32_t MTLOMR_RESET_VALUE = 0x0;
    static constexpr uint32_t MTLOMR_DTXSTS = 0x2;    // DTXSTS
    static constexpr uint32_t MTLOMR_CNTPRST = 0x100; // CNTPRST
    static constexpr uint32_t MTLOMR_CNTCLR = 0x200;  // CNTCLR

    static constexpr uint32_t MTLISR_RESET_VALUE = 0x0;
    static constexpr uint32_t MTLISR_Q0IS = 0x1; // Queue interrupt status

    static constexpr uint32_t MTLTxQOMR_RESET_VALUE = 0x70008;
    static constexpr uint32_t MTLTxQOMR_FTQ = 0x1; // Flush Transmit Queue
    static constexpr uint32_t MTLTxQOMR_TSF = 0x2; // Transmit Store and Forward
    template<uint32_t X>
    static constexpr uint32_t MTLTxQOMR_TXQEN =    // Transmit Queue Enable
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MTLTxQOMR_TTC =      // Transmit Threshold Control
        bit_field_t<4, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MTLTxQOMR_TQS =      // Transmit Queue Size
        bit_field_t<16, 0x1ff>::value<X>();

    static constexpr uint32_t MTLTxQUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MTLTxQUR_UFFRMCNT =        // Underflow Packet Counter
        bit_field_t<0, 0x7ff>::value<X>();
    static constexpr uint32_t MTLTxQUR_UFCNTOVF = 0x800; // UFCNTOVF

    static constexpr uint32_t MTLTxQDR_RESET_VALUE = 0x0;
    static constexpr uint32_t MTLTxQDR_TXQPAUSED = 0x1;  // TXQPAUSED
    template<uint32_t X>
    static constexpr uint32_t MTLTxQDR_TRCSTS =          // TRCSTS
        bit_field_t<1, 0x3>::value<X>();
    static constexpr uint32_t MTLTxQDR_TWCSTS = 0x8;     // TWCSTS
    static constexpr uint32_t MTLTxQDR_TXQSTS = 0x10;    // TXQSTS
    static constexpr uint32_t MTLTxQDR_TXSTSFSTS = 0x20; // TXSTSFSTS
    template<uint32_t X>
    static constexpr uint32_t MTLTxQDR_PTXQ =            // PTXQ
        bit_field_t<16, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MTLTxQDR_STXSTSF =         // STXSTSF
        bit_field_t<20, 0x7>::value<X>();

    static constexpr uint32_t MTLQICSR_RESET_VALUE = 0x0;
    static constexpr uint32_t MTLQICSR_TXUNFIS = 0x1;     // TXUNFIS
    static constexpr uint32_t MTLQICSR_TXUIE = 0x100;     // TXUIE
    static constexpr uint32_t MTLQICSR_RXOVFIS = 0x10000; // RXOVFIS
    static constexpr uint32_t MTLQICSR_RXOIE = 0x1000000; // RXOIE

    static constexpr uint32_t MTLRxQOMR_RESET_VALUE = 0x700000;
    template<uint32_t X>
    static constexpr uint32_t MTLRxQOMR_RTC =              // RTC
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t MTLRxQOMR_FUP = 0x8;         // FUP
    static constexpr uint32_t MTLRxQOMR_FEP = 0x10;        // FEP
    static constexpr uint32_t MTLRxQOMR_RSF = 0x20;        // RSF
    static constexpr uint32_t MTLRxQOMR_DIS_TCP_EF = 0x40; // DIS_TCP_EF
    static constexpr uint32_t MTLRxQOMR_EHFC = 0x80;       // EHFC
    template<uint32_t X>
    static constexpr uint32_t MTLRxQOMR_RFA =              // RFA
        bit_field_t<8, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MTLRxQOMR_RFD =              // RFD
        bit_field_t<14, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MTLRxQOMR_RQS =              // RQS
        bit_field_t<20, 0x7>::value<X>();

    static constexpr uint32_t MTLRxQMPOCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MTLRxQMPOCR_OVFPKTCNT =            // OVFPKTCNT
        bit_field_t<0, 0x7ff>::value<X>();
    static constexpr uint32_t MTLRxQMPOCR_OVFCNTOVF = 0x800;     // OVFCNTOVF
    template<uint32_t X>
    static constexpr uint32_t MTLRxQMPOCR_MISPKTCNT =            // MISPKTCNT
        bit_field_t<16, 0x7ff>::value<X>();
    static constexpr uint32_t MTLRxQMPOCR_MISCNTOVF = 0x8000000; // MISCNTOVF

    static constexpr uint32_t MTLRxQDR_RESET_VALUE = 0x0;
    static constexpr uint32_t MTLRxQDR_RWCSTS = 0x1; // RWCSTS
    template<uint32_t X>
    static constexpr uint32_t MTLRxQDR_RRCSTS =      // RRCSTS
        bit_field_t<1, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MTLRxQDR_RXQSTS =      // RXQSTS
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MTLRxQDR_PRXQ =        // PRXQ
        bit_field_t<16, 0x3fff>::value<X>();

    static constexpr uint32_t MACCR_RESET_VALUE = 0x0;
    static constexpr uint32_t MACCR_RE = 0x1;           // Receiver Enable
    static constexpr uint32_t MACCR_TE = 0x2;           // TE
    template<uint32_t X>
    static constexpr uint32_t MACCR_PRELEN =            // PRELEN
        bit_field_t<2, 0x3>::value<X>();
    static constexpr uint32_t MACCR_DC = 0x10;          // DC
    template<uint32_t X>
    static constexpr uint32_t MACCR_BL =                // BL
        bit_field_t<5, 0x3>::value<X>();
    static constexpr uint32_t MACCR_DR = 0x100;         // DR
    static constexpr uint32_t MACCR_DCRS = 0x200;       // DCRS
    static constexpr uint32_t MACCR_DO = 0x400;         // DO
    static constexpr uint32_t MACCR_ECRSFD = 0x800;     // ECRSFD
    static constexpr uint32_t MACCR_LM = 0x1000;        // LM
    static constexpr uint32_t MACCR_DM = 0x2000;        // DM
    static constexpr uint32_t MACCR_FES = 0x4000;       // FES
    static constexpr uint32_t MACCR_JE = 0x10000;       // JE
    static constexpr uint32_t MACCR_JD = 0x20000;       // JD
    static constexpr uint32_t MACCR_WD = 0x80000;       // WD
    static constexpr uint32_t MACCR_ACS = 0x100000;     // ACS
    static constexpr uint32_t MACCR_CST = 0x200000;     // CST
    static constexpr uint32_t MACCR_S2KP = 0x400000;    // S2KP
    static constexpr uint32_t MACCR_GPSLCE = 0x800000;  // GPSLCE
    template<uint32_t X>
    static constexpr uint32_t MACCR_IPG =               // IPG
        bit_field_t<24, 0x7>::value<X>();
    static constexpr uint32_t MACCR_IPC = 0x8000000;    // IPC
    template<uint32_t X>
    static constexpr uint32_t MACCR_SARC =              // SARC
        bit_field_t<28, 0x7>::value<X>();
    static constexpr uint32_t MACCR_ARPEN = 0x80000000; // ARPEN

    static constexpr uint32_t MACECR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MACECR_GPSL =              // GPSL
        bit_field_t<0, 0x3fff>::value<X>();
    static constexpr uint32_t MACECR_DCRCC = 0x10000;    // DCRCC
    static constexpr uint32_t MACECR_SPEN = 0x20000;     // SPEN
    static constexpr uint32_t MACECR_USP = 0x40000;      // USP
    static constexpr uint32_t MACECR_EIPGEN = 0x1000000; // EIPGEN
    template<uint32_t X>
    static constexpr uint32_t MACECR_EIPG =              // EIPG
        bit_field_t<25, 0x1f>::value<X>();

    static constexpr uint32_t MACPFR_RESET_VALUE = 0x0;
    static constexpr uint32_t MACPFR_PR = 0x1;        // PR
    static constexpr uint32_t MACPFR_HUC = 0x2;       // HUC
    static constexpr uint32_t MACPFR_HMC = 0x4;       // HMC
    static constexpr uint32_t MACPFR_DAIF = 0x8;      // DAIF
    static constexpr uint32_t MACPFR_PM = 0x10;       // PM
    static constexpr uint32_t MACPFR_DBF = 0x20;      // DBF
    template<uint32_t X>
    static constexpr uint32_t MACPFR_PCF =            // PCF
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t MACPFR_SAIF = 0x100;    // SAIF
    static constexpr uint32_t MACPFR_SAF = 0x200;     // SAF
    static constexpr uint32_t MACPFR_HPF = 0x400;     // HPF
    static constexpr uint32_t MACPFR_VTFE = 0x10000;  // VTFE
    static constexpr uint32_t MACPFR_IPFE = 0x100000; // IPFE
    static constexpr uint32_t MACPFR_DNTU = 0x200000; // DNTU
    static constexpr uint32_t MACPFR_RA = 0x80000000; // RA

    static constexpr uint32_t MACWTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MACWTR_WTO =        // WTO
        bit_field_t<0, 0xf>::value<X>();
    static constexpr uint32_t MACWTR_PWE = 0x100; // PWE

    static constexpr uint32_t MACHT0R_RESET_VALUE = 0x0;

    static constexpr uint32_t MACHT1R_RESET_VALUE = 0x0;

    static constexpr uint32_t MACVTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MACVTR_VL =                  // VL
        bit_field_t<0, 0xffff>::value<X>();
    static constexpr uint32_t MACVTR_ETV = 0x10000;        // ETV
    static constexpr uint32_t MACVTR_VTIM = 0x20000;       // VTIM
    static constexpr uint32_t MACVTR_ESVL = 0x40000;       // ESVL
    static constexpr uint32_t MACVTR_ERSVLM = 0x80000;     // ERSVLM
    static constexpr uint32_t MACVTR_DOVLTC = 0x100000;    // DOVLTC
    template<uint32_t X>
    static constexpr uint32_t MACVTR_EVLS =                // EVLS
        bit_field_t<21, 0x3>::value<X>();
    static constexpr uint32_t MACVTR_EVLRXS = 0x1000000;   // EVLRXS
    static constexpr uint32_t MACVTR_VTHM = 0x2000000;     // VTHM
    static constexpr uint32_t MACVTR_EDVLP = 0x4000000;    // EDVLP
    static constexpr uint32_t MACVTR_ERIVLT = 0x8000000;   // ERIVLT
    template<uint32_t X>
    static constexpr uint32_t MACVTR_EIVLS =               // EIVLS
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t MACVTR_EIVLRXS = 0x80000000; // EIVLRXS

    static constexpr uint32_t MACVHTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MACVHTR_VLHT =   // VLHT
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MACVIR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MACVIR_VLT =            // VLT
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MACVIR_VLC =            // VLC
        bit_field_t<16, 0x3>::value<X>();
    static constexpr uint32_t MACVIR_VLP = 0x40000;   // VLP
    static constexpr uint32_t MACVIR_CSVL = 0x80000;  // CSVL
    static constexpr uint32_t MACVIR_VLTI = 0x100000; // VLTI

    static constexpr uint32_t MACIVIR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MACIVIR_VLT =            // VLT
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MACIVIR_VLC =            // VLC
        bit_field_t<16, 0x3>::value<X>();
    static constexpr uint32_t MACIVIR_VLP = 0x40000;   // VLP
    static constexpr uint32_t MACIVIR_CSVL = 0x80000;  // CSVL
    static constexpr uint32_t MACIVIR_VLTI = 0x100000; // VLTI

    static constexpr uint32_t MACQTxFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t MACQTxFCR_FCB_BPA = 0x1; // FCB_BPA
    static constexpr uint32_t MACQTxFCR_TFE = 0x2;     // TFE
    template<uint32_t X>
    static constexpr uint32_t MACQTxFCR_PLT =          // PLT
        bit_field_t<4, 0x7>::value<X>();
    static constexpr uint32_t MACQTxFCR_DZPQ = 0x80;   // DZPQ
    template<uint32_t X>
    static constexpr uint32_t MACQTxFCR_PT =           // PT
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t MACRxFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t MACRxFCR_RFE = 0x1; // RFE
    static constexpr uint32_t MACRxFCR_UP = 0x2;  // UP

    static constexpr uint32_t MACISR_RESET_VALUE = 0x0;
    static constexpr uint32_t MACISR_PHYIS = 0x8;      // PHYIS
    static constexpr uint32_t MACISR_PMTIS = 0x10;     // PMTIS
    static constexpr uint32_t MACISR_LPIIS = 0x20;     // LPIIS
    static constexpr uint32_t MACISR_MMCIS = 0x100;    // MMCIS
    static constexpr uint32_t MACISR_MMCRXIS = 0x200;  // MMCRXIS
    static constexpr uint32_t MACISR_MMCTXIS = 0x400;  // MMCTXIS
    static constexpr uint32_t MACISR_TSIS = 0x1000;    // TSIS
    static constexpr uint32_t MACISR_TXSTSIS = 0x2000; // TXSTSIS
    static constexpr uint32_t MACISR_RXSTSIS = 0x4000; // RXSTSIS

    static constexpr uint32_t MACIER_RESET_VALUE = 0x0;
    static constexpr uint32_t MACIER_PHYIE = 0x8;      // PHYIE
    static constexpr uint32_t MACIER_PMTIE = 0x10;     // PMTIE
    static constexpr uint32_t MACIER_LPIIE = 0x20;     // LPIIE
    static constexpr uint32_t MACIER_TSIE = 0x1000;    // TSIE
    static constexpr uint32_t MACIER_TXSTSIE = 0x2000; // TXSTSIE
    static constexpr uint32_t MACIER_RXSTSIE = 0x4000; // RXSTSIE

    static constexpr uint32_t MACRxTxSR_RESET_VALUE = 0x0;
    static constexpr uint32_t MACRxTxSR_TJT = 0x1;    // TJT
    static constexpr uint32_t MACRxTxSR_NCARR = 0x2;  // NCARR
    static constexpr uint32_t MACRxTxSR_LCARR = 0x4;  // LCARR
    static constexpr uint32_t MACRxTxSR_EXDEF = 0x8;  // EXDEF
    static constexpr uint32_t MACRxTxSR_LCOL = 0x10;  // LCOL
    static constexpr uint32_t MACRxTxSR_EXCOL = 0x20; // LCOL
    static constexpr uint32_t MACRxTxSR_RWT = 0x100;  // RWT

    static constexpr uint32_t MACPCSR_RESET_VALUE = 0x0;
    static constexpr uint32_t MACPCSR_PWRDWN = 0x1;            // PWRDWN
    static constexpr uint32_t MACPCSR_MGKPKTEN = 0x2;          // MGKPKTEN
    static constexpr uint32_t MACPCSR_RWKPKTEN = 0x4;          // RWKPKTEN
    static constexpr uint32_t MACPCSR_MGKPRCVD = 0x20;         // MGKPRCVD
    static constexpr uint32_t MACPCSR_RWKPRCVD = 0x40;         // RWKPRCVD
    static constexpr uint32_t MACPCSR_GLBLUCAST = 0x200;       // GLBLUCAST
    static constexpr uint32_t MACPCSR_RWKPFE = 0x400;          // RWKPFE
    template<uint32_t X>
    static constexpr uint32_t MACPCSR_RWKPTR =                 // RWKPTR
        bit_field_t<24, 0x1f>::value<X>();
    static constexpr uint32_t MACPCSR_RWKFILTRST = 0x80000000; // RWKFILTRST

    static constexpr uint32_t MACRWKPFR_RESET_VALUE = 0x0;

    static constexpr uint32_t MACLCSR_RESET_VALUE = 0x0;
    static constexpr uint32_t MACLCSR_TLPIEN = 0x1;       // TLPIEN
    static constexpr uint32_t MACLCSR_TLPIEX = 0x2;       // TLPIEX
    static constexpr uint32_t MACLCSR_RLPIEN = 0x4;       // RLPIEN
    static constexpr uint32_t MACLCSR_RLPIEX = 0x8;       // RLPIEX
    static constexpr uint32_t MACLCSR_TLPIST = 0x100;     // TLPIST
    static constexpr uint32_t MACLCSR_RLPIST = 0x200;     // RLPIST
    static constexpr uint32_t MACLCSR_LPIEN = 0x10000;    // LPIEN
    static constexpr uint32_t MACLCSR_PLS = 0x20000;      // PLS
    static constexpr uint32_t MACLCSR_PLSEN = 0x40000;    // PLSEN
    static constexpr uint32_t MACLCSR_LPITXA = 0x80000;   // LPITXA
    static constexpr uint32_t MACLCSR_LPITE = 0x100000;   // LPITE
    static constexpr uint32_t MACLCSR_LPITCSE = 0x200000; // LPITCSE

    static constexpr uint32_t MACLTCR_RESET_VALUE = 0x3e80000;
    template<uint32_t X>
    static constexpr uint32_t MACLTCR_TWT =   // TWT
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MACLTCR_LST =   // LST
        bit_field_t<16, 0x3ff>::value<X>();

    static constexpr uint32_t MACLETR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MACLETR_LPIET =   // LPIET
        bit_field_t<0, 0x1ffff>::value<X>();

    static constexpr uint32_t MAC1USTCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MAC1USTCR_TIC_1US_CNTR =   // TIC_1US_CNTR
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t MACVR_RESET_VALUE = 0x3041;
    template<uint32_t X>
    static constexpr uint32_t MACVR_SNPSVER =   // SNPSVER
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MACVR_USERVER =   // USERVER
        bit_field_t<8, 0xff>::value<X>();

    static constexpr uint32_t MACHWF1R_RESET_VALUE = 0x11841904;
    template<uint32_t X>
    static constexpr uint32_t MACHWF1R_RXFIFOSIZE =        // RXFIFOSIZE
        bit_field_t<0, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MACHWF1R_TXFIFOSIZE =        // TXFIFOSIZE
        bit_field_t<6, 0x1f>::value<X>();
    static constexpr uint32_t MACHWF1R_OSTEN = 0x800;      // OSTEN
    static constexpr uint32_t MACHWF1R_PTOEN = 0x1000;     // PTOEN
    static constexpr uint32_t MACHWF1R_ADVTHWORD = 0x2000; // ADVTHWORD
    static constexpr uint32_t MACHWF1R_DCBEN = 0x10000;    // DCBEN
    static constexpr uint32_t MACHWF1R_SPHEN = 0x20000;    // SPHEN
    static constexpr uint32_t MACHWF1R_TSOEN = 0x40000;    // TSOEN
    static constexpr uint32_t MACHWF1R_DBGMEMA = 0x80000;  // DBGMEMA
    static constexpr uint32_t MACHWF1R_AVSEL = 0x100000;   // AVSEL
    template<uint32_t X>
    static constexpr uint32_t MACHWF1R_HASHTBLSZ =         // HASHTBLSZ
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MACHWF1R_L3L4FNUM =          // L3L4FNUM
        bit_field_t<27, 0xf>::value<X>();

    static constexpr uint32_t MACHWF2R_RESET_VALUE = 0x41000000;
    template<uint32_t X>
    static constexpr uint32_t MACHWF2R_RXQCNT =       // RXQCNT
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MACHWF2R_TXQCNT =       // TXQCNT
        bit_field_t<6, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MACHWF2R_RXCHCNT =      // RXCHCNT
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MACHWF2R_TXCHCNT =      // TXCHCNT
        bit_field_t<18, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MACHWF2R_PPSOUTNUM =    // PPSOUTNUM
        bit_field_t<24, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MACHWF2R_AUXSNAPNUM =   // AUXSNAPNUM
        bit_field_t<28, 0x7>::value<X>();

    static constexpr uint32_t MACMDIOAR_RESET_VALUE = 0x0;
    static constexpr uint32_t MACMDIOAR_MB = 0x1;        // MB
    static constexpr uint32_t MACMDIOAR_C45E = 0x2;      // C45E
    template<uint32_t X>
    static constexpr uint32_t MACMDIOAR_GOC =            // GOC
        bit_field_t<2, 0x3>::value<X>();
    static constexpr uint32_t MACMDIOAR_SKAP = 0x10;     // SKAP
    template<uint32_t X>
    static constexpr uint32_t MACMDIOAR_CR =             // CR
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MACMDIOAR_NTC =            // NTC
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MACMDIOAR_RDA =            // RDA
        bit_field_t<16, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MACMDIOAR_PA =             // PA
        bit_field_t<21, 0x1f>::value<X>();
    static constexpr uint32_t MACMDIOAR_BTB = 0x4000000; // BTB
    static constexpr uint32_t MACMDIOAR_PSE = 0x8000000; // PSE

    static constexpr uint32_t MACMDIODR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MACMDIODR_MD =   // MD
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MACMDIODR_RA =   // RA
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t MACARPAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MACA0HR_RESET_VALUE = 0x8000ffff;
    template<uint32_t X>
    static constexpr uint32_t MACA0HR_ADDRHI =         // ADDRHI
        bit_field_t<0, 0xffff>::value<X>();
    static constexpr uint32_t MACA0HR_AE = 0x80000000; // AE

    static constexpr uint32_t MACA0LR_RESET_VALUE = 0xffffffff;

    static constexpr uint32_t MACA1LR_RESET_VALUE = 0xffffffff;

    static constexpr uint32_t MACA2LR_RESET_VALUE = 0xffffffff;

    static constexpr uint32_t MACA3LR_RESET_VALUE = 0xffffffff;

    static constexpr uint32_t MACA1HR_RESET_VALUE = 0xffff;
    template<uint32_t X>
    static constexpr uint32_t MACA1HR_ADDRHI =         // ADDRHI
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MACA1HR_MBC =            // MBC
        bit_field_t<24, 0x3f>::value<X>();
    static constexpr uint32_t MACA1HR_SA = 0x40000000; // SA
    static constexpr uint32_t MACA1HR_AE = 0x80000000; // AE

    static constexpr uint32_t MACA2HR_RESET_VALUE = 0xffff;
    template<uint32_t X>
    static constexpr uint32_t MACA2HR_ADDRHI =         // ADDRHI
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MACA2HR_MBC =            // MBC
        bit_field_t<24, 0x3f>::value<X>();
    static constexpr uint32_t MACA2HR_SA = 0x40000000; // SA
    static constexpr uint32_t MACA2HR_AE = 0x80000000; // AE

    static constexpr uint32_t MACA3HR_RESET_VALUE = 0xffff;
    template<uint32_t X>
    static constexpr uint32_t MACA3HR_ADDRHI =         // ADDRHI
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MACA3HR_MBC =            // MBC
        bit_field_t<24, 0x3f>::value<X>();
    static constexpr uint32_t MACA3HR_SA = 0x40000000; // SA
    static constexpr uint32_t MACA3HR_AE = 0x80000000; // AE

    static constexpr uint32_t MMC_CONTROL_RESET_VALUE = 0x0;
    static constexpr uint32_t MMC_CONTROL_CNTRST = 0x1;      // CNTRST
    static constexpr uint32_t MMC_CONTROL_CNTSTOPRO = 0x2;   // CNTSTOPRO
    static constexpr uint32_t MMC_CONTROL_RSTONRD = 0x4;     // RSTONRD
    static constexpr uint32_t MMC_CONTROL_CNTFREEZ = 0x8;    // CNTFREEZ
    static constexpr uint32_t MMC_CONTROL_CNTPRST = 0x10;    // CNTPRST
    static constexpr uint32_t MMC_CONTROL_CNTPRSTLVL = 0x20; // CNTPRSTLVL
    static constexpr uint32_t MMC_CONTROL_UCDBC = 0x100;     // UCDBC

    static constexpr uint32_t MMC_RX_INTERRUPT_RESET_VALUE = 0x0;
    static constexpr uint32_t MMC_RX_INTERRUPT_RXCRCERPIS = 0x20;      // RXCRCERPIS
    static constexpr uint32_t MMC_RX_INTERRUPT_RXALGNERPIS = 0x40;     // RXALGNERPIS
    static constexpr uint32_t MMC_RX_INTERRUPT_RXUCGPIS = 0x20000;     // RXUCGPIS
    static constexpr uint32_t MMC_RX_INTERRUPT_RXLPIUSCIS = 0x4000000; // RXLPIUSCIS
    static constexpr uint32_t MMC_RX_INTERRUPT_RXLPITRCIS = 0x8000000; // RXLPITRCIS

    static constexpr uint32_t MMC_TX_INTERRUPT_RESET_VALUE = 0x0;
    static constexpr uint32_t MMC_TX_INTERRUPT_TXSCOLGPIS = 0x4000;    // TXSCOLGPIS
    static constexpr uint32_t MMC_TX_INTERRUPT_TXMCOLGPIS = 0x8000;    // TXMCOLGPIS
    static constexpr uint32_t MMC_TX_INTERRUPT_TXGPKTIS = 0x200000;    // TXGPKTIS
    static constexpr uint32_t MMC_TX_INTERRUPT_TXLPIUSCIS = 0x4000000; // TXLPIUSCIS
    static constexpr uint32_t MMC_TX_INTERRUPT_TXLPITRCIS = 0x8000000; // TXLPITRCIS

    static constexpr uint32_t MMC_RX_INTERRUPT_MASK_RESET_VALUE = 0x0;
    static constexpr uint32_t MMC_RX_INTERRUPT_MASK_RXCRCERPIM = 0x20;      // RXCRCERPIM
    static constexpr uint32_t MMC_RX_INTERRUPT_MASK_RXALGNERPIM = 0x40;     // RXALGNERPIM
    static constexpr uint32_t MMC_RX_INTERRUPT_MASK_RXUCGPIM = 0x20000;     // RXUCGPIM
    static constexpr uint32_t MMC_RX_INTERRUPT_MASK_RXLPIUSCIM = 0x4000000; // RXLPIUSCIM
    static constexpr uint32_t MMC_RX_INTERRUPT_MASK_RXLPITRCIM = 0x8000000; // RXLPITRCIM

    static constexpr uint32_t MMC_TX_INTERRUPT_MASK_RESET_VALUE = 0x0;
    static constexpr uint32_t MMC_TX_INTERRUPT_MASK_TXSCOLGPIM = 0x4000;    // TXSCOLGPIM
    static constexpr uint32_t MMC_TX_INTERRUPT_MASK_TXMCOLGPIM = 0x8000;    // TXMCOLGPIM
    static constexpr uint32_t MMC_TX_INTERRUPT_MASK_TXGPKTIM = 0x200000;    // TXGPKTIM
    static constexpr uint32_t MMC_TX_INTERRUPT_MASK_TXLPIUSCIM = 0x4000000; // TXLPIUSCIM
    static constexpr uint32_t MMC_TX_INTERRUPT_MASK_TXLPITRCIM = 0x8000000; // TXLPITRCIM

    static constexpr uint32_t TX_SINGLE_COLLISION_GOOD_PACKETS_RESET_VALUE = 0x0;

    static constexpr uint32_t TX_MULTIPLE_COLLISION_GOOD_PACKETS_RESET_VALUE = 0x0;

    static constexpr uint32_t TX_PACKET_COUNT_GOOD_RESET_VALUE = 0x0;

    static constexpr uint32_t RX_CRC_ERROR_PACKETS_RESET_VALUE = 0x0;

    static constexpr uint32_t RX_ALIGNMENT_ERROR_PACKETS_RESET_VALUE = 0x0;

    static constexpr uint32_t RX_UNICAST_PACKETS_GOOD_RESET_VALUE = 0x0;

    static constexpr uint32_t TX_LPI_USEC_CNTR_RESET_VALUE = 0x0;

    static constexpr uint32_t TX_LPI_TRAN_CNTR_RESET_VALUE = 0x0;

    static constexpr uint32_t RX_LPI_USEC_CNTR_RESET_VALUE = 0x0;

    static constexpr uint32_t RX_LPI_TRAN_CNTR_RESET_VALUE = 0x0;

    static constexpr uint32_t MACL3L4C0R_RESET_VALUE = 0x0;
    static constexpr uint32_t MACL3L4C0R_L3PEN0 = 0x1;       // L3PEN0
    static constexpr uint32_t MACL3L4C0R_L3SAM0 = 0x4;       // L3SAM0
    static constexpr uint32_t MACL3L4C0R_L3SAIM0 = 0x8;      // L3SAIM0
    static constexpr uint32_t MACL3L4C0R_L3DAM0 = 0x10;      // L3DAM0
    static constexpr uint32_t MACL3L4C0R_L3DAIM0 = 0x20;     // L3DAIM0
    template<uint32_t X>
    static constexpr uint32_t MACL3L4C0R_L3HSBM0 =           // L3HSBM0
        bit_field_t<6, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MACL3L4C0R_L3HDBM0 =           // L3HDBM0
        bit_field_t<11, 0x1f>::value<X>();
    static constexpr uint32_t MACL3L4C0R_L4PEN0 = 0x10000;   // L4PEN0
    static constexpr uint32_t MACL3L4C0R_L4SPM0 = 0x40000;   // L4SPM0
    static constexpr uint32_t MACL3L4C0R_L4SPIM0 = 0x80000;  // L4SPIM0
    static constexpr uint32_t MACL3L4C0R_L4DPM0 = 0x100000;  // L4DPM0
    static constexpr uint32_t MACL3L4C0R_L4DPIM0 = 0x200000; // L4DPIM0

    static constexpr uint32_t MACL4A0R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MACL4A0R_L4SP0 =   // L4SP0
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MACL4A0R_L4DP0 =   // L4DP0
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t MACDR_RESET_VALUE = 0x0;
    static constexpr uint32_t MACDR_RPESTS = 0x1;     // RPESTS
    template<uint32_t X>
    static constexpr uint32_t MACDR_RFCFCSTS =        // RFCFCSTS
        bit_field_t<1, 0x3>::value<X>();
    static constexpr uint32_t MACDR_TPESTS = 0x10000; // TPESTS
    template<uint32_t X>
    static constexpr uint32_t MACDR_TFCSTS =          // TFCSTS
        bit_field_t<17, 0x3>::value<X>();

    static constexpr uint32_t MACL3A00R_RESET_VALUE = 0x0;

    static constexpr uint32_t MACL3A10R_RESET_VALUE = 0x0;

    static constexpr uint32_t MACL3A20_RESET_VALUE = 0x0;

    static constexpr uint32_t MACL3A30_RESET_VALUE = 0x0;

    static constexpr uint32_t MACL3L4C1R_RESET_VALUE = 0x0;
    static constexpr uint32_t MACL3L4C1R_L3PEN1 = 0x1;       // L3PEN1
    static constexpr uint32_t MACL3L4C1R_L3SAM1 = 0x4;       // L3SAM1
    static constexpr uint32_t MACL3L4C1R_L3SAIM1 = 0x8;      // L3SAIM1
    static constexpr uint32_t MACL3L4C1R_L3DAM1 = 0x10;      // L3DAM1
    static constexpr uint32_t MACL3L4C1R_L3DAIM1 = 0x20;     // L3DAIM1
    template<uint32_t X>
    static constexpr uint32_t MACL3L4C1R_L3HSBM1 =           // L3HSBM1
        bit_field_t<6, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MACL3L4C1R_L3HDBM1 =           // L3HDBM1
        bit_field_t<11, 0x1f>::value<X>();
    static constexpr uint32_t MACL3L4C1R_L4PEN1 = 0x10000;   // L4PEN1
    static constexpr uint32_t MACL3L4C1R_L4SPM1 = 0x40000;   // L4SPM1
    static constexpr uint32_t MACL3L4C1R_L4SPIM1 = 0x80000;  // L4SPIM1
    static constexpr uint32_t MACL3L4C1R_L4DPM1 = 0x100000;  // L4DPM1
    static constexpr uint32_t MACL3L4C1R_L4DPIM1 = 0x200000; // L4DPIM1

    static constexpr uint32_t MACL4A1R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MACL4A1R_L4SP1 =   // L4SP1
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MACL4A1R_L4DP1 =   // L4DP1
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t MACL3A01R_RESET_VALUE = 0x0;

    static constexpr uint32_t MACL3A11R_RESET_VALUE = 0x0;

    static constexpr uint32_t MACL3A21R_RESET_VALUE = 0x0;

    static constexpr uint32_t MACL3A31R_RESET_VALUE = 0x0;

    static constexpr uint32_t MACTSCR_RESET_VALUE = 0x200;
    static constexpr uint32_t MACTSCR_TSENA = 0x1;           // TSENA
    static constexpr uint32_t MACTSCR_TSCFUPDT = 0x2;        // TSCFUPDT
    static constexpr uint32_t MACTSCR_TSINIT = 0x4;          // TSINIT
    static constexpr uint32_t MACTSCR_TSUPDT = 0x8;          // TSUPDT
    static constexpr uint32_t MACTSCR_TSADDREG = 0x20;       // TSADDREG
    static constexpr uint32_t MACTSCR_TSENALL = 0x100;       // TSENALL
    static constexpr uint32_t MACTSCR_TSCTRLSSR = 0x200;     // TSCTRLSSR
    static constexpr uint32_t MACTSCR_TSVER2ENA = 0x400;     // TSVER2ENA
    static constexpr uint32_t MACTSCR_TSIPENA = 0x800;       // TSIPENA
    static constexpr uint32_t MACTSCR_TSIPV6ENA = 0x1000;    // TSIPV6ENA
    static constexpr uint32_t MACTSCR_TSIPV4ENA = 0x2000;    // TSIPV4ENA
    static constexpr uint32_t MACTSCR_TSEVNTENA = 0x4000;    // TSEVNTENA
    static constexpr uint32_t MACTSCR_TSMSTRENA = 0x8000;    // TSMSTRENA
    template<uint32_t X>
    static constexpr uint32_t MACTSCR_SNAPTYPSEL =           // SNAPTYPSEL
        bit_field_t<16, 0x3>::value<X>();
    static constexpr uint32_t MACTSCR_TSENMACADDR = 0x40000; // TSENMACADDR
    static constexpr uint32_t MACTSCR_CSC = 0x80000;         // CSC
    static constexpr uint32_t MACTSCR_TXTSSTSM = 0x1000000;  // TXTSSTSM

    static constexpr uint32_t MACSSIR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MACSSIR_SNSINC =   // SNSINC
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MACSSIR_SSINC =    // SSINC
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t MACSTSR_RESET_VALUE = 0x0;

    static constexpr uint32_t MACSTNR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MACSTNR_TSSS =   // TSSS
        bit_field_t<0, 0x7fffffff>::value<X>();

    static constexpr uint32_t MACSTSUR_RESET_VALUE = 0x0;

    static constexpr uint32_t MACSTNUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MACSTNUR_TSSS =               // TSSS
        bit_field_t<0, 0x7fffffff>::value<X>();
    static constexpr uint32_t MACSTNUR_ADDSUB = 0x80000000; // ADDSUB

    static constexpr uint32_t MACTSAR_RESET_VALUE = 0x0;

    static constexpr uint32_t MACTSSR_RESET_VALUE = 0x0;
    static constexpr uint32_t MACTSSR_TSSOVF = 0x1;       // TSSOVF
    static constexpr uint32_t MACTSSR_TSTARGT0 = 0x2;     // TSTARGT0
    static constexpr uint32_t MACTSSR_AUXTSTRIG = 0x4;    // AUXTSTRIG
    static constexpr uint32_t MACTSSR_TSTRGTERR0 = 0x8;   // TSTRGTERR0
    static constexpr uint32_t MACTSSR_TXTSSIS = 0x8000;   // TXTSSIS
    template<uint32_t X>
    static constexpr uint32_t MACTSSR_ATSSTN =            // ATSSTN
        bit_field_t<16, 0xf>::value<X>();
    static constexpr uint32_t MACTSSR_ATSSTM = 0x1000000; // ATSSTM
    template<uint32_t X>
    static constexpr uint32_t MACTSSR_ATSNS =             // ATSNS
        bit_field_t<25, 0x1f>::value<X>();

    static constexpr uint32_t MACTxTSSNR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MACTxTSSNR_TXTSSLO =              // TXTSSLO
        bit_field_t<0, 0x7fffffff>::value<X>();
    static constexpr uint32_t MACTxTSSNR_TXTSSMIS = 0x80000000; // TXTSSMIS

    static constexpr uint32_t MACTxTSSSR_RESET_VALUE = 0x0;

    static constexpr uint32_t MACACR_RESET_VALUE = 0x0;
    static constexpr uint32_t MACACR_ATSFC = 0x1;   // ATSFC
    static constexpr uint32_t MACACR_ATSEN0 = 0x10; // ATSEN0
    static constexpr uint32_t MACACR_ATSEN1 = 0x20; // ATSEN1
    static constexpr uint32_t MACACR_ATSEN2 = 0x40; // ATSEN2
    static constexpr uint32_t MACACR_ATSEN3 = 0x80; // ATSEN3

    static constexpr uint32_t MACATSNR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MACATSNR_AUXTSLO =   // AUXTSLO
        bit_field_t<0, 0x7fffffff>::value<X>();

    static constexpr uint32_t MACATSSR_RESET_VALUE = 0x0;

    static constexpr uint32_t MACTSIACR_RESET_VALUE = 0x0;

    static constexpr uint32_t MACTSEACR_RESET_VALUE = 0x0;

    static constexpr uint32_t MACTSICNR_RESET_VALUE = 0x0;

    static constexpr uint32_t MACTSECNR_RESET_VALUE = 0x0;

    static constexpr uint32_t MACPPSCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MACPPSCR_PPSCTRL =       // PPSCTRL
        bit_field_t<0, 0xf>::value<X>();
    static constexpr uint32_t MACPPSCR_PPSEN0 = 0x10;  // PPSEN0
    template<uint32_t X>
    static constexpr uint32_t MACPPSCR_TRGTMODSEL0 =   // TRGTMODSEL0
        bit_field_t<5, 0x3>::value<X>();

    static constexpr uint32_t MACPPSTTSR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MACPPSTTSR_TSTRH0 =   // TSTRH0
        bit_field_t<0, 0x7fffffff>::value<X>();

    static constexpr uint32_t MACPPSTTNR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MACPPSTTNR_TTSL0 =                 // TTSL0
        bit_field_t<0, 0x7fffffff>::value<X>();
    static constexpr uint32_t MACPPSTTNR_TRGTBUSY0 = 0x80000000; // TRGTBUSY0

    static constexpr uint32_t MACPPSIR_RESET_VALUE = 0x0;

    static constexpr uint32_t MACPPSWR_RESET_VALUE = 0x0;

    static constexpr uint32_t MACPOCR_RESET_VALUE = 0x0;
    static constexpr uint32_t MACPOCR_PTOEN = 0x1;       // PTOEN
    static constexpr uint32_t MACPOCR_ASYNCEN = 0x2;     // ASYNCEN
    static constexpr uint32_t MACPOCR_APDREQEN = 0x4;    // APDREQEN
    static constexpr uint32_t MACPOCR_ASYNCTRIG = 0x10;  // ASYNCTRIG
    static constexpr uint32_t MACPOCR_APDREQTRIG = 0x20; // APDREQTRIG
    static constexpr uint32_t MACPOCR_DRRDIS = 0x40;     // DRRDIS
    template<uint32_t X>
    static constexpr uint32_t MACPOCR_DN =               // DN
        bit_field_t<8, 0xff>::value<X>();

    static constexpr uint32_t MACSPI0R_RESET_VALUE = 0x0;

    static constexpr uint32_t MACSPI1R_RESET_VALUE = 0x0;

    static constexpr uint32_t MACSPI2R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MACSPI2R_SPI2 =   // SPI2
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MACLMIR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MACLMIR_LSI =       // LSI
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MACLMIR_DRSYNCR =   // DRSYNCR
        bit_field_t<8, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MACLMIR_LMPDRI =    // LMPDRI
        bit_field_t<24, 0xff>::value<X>();
};


////
//
//      Ethernet: media access control (MAC)
//
////

struct stm32h750x_ethernet_mac_t
{
    volatile uint32_t DMAMR;      // [read-write] DMA mode register
    volatile uint32_t DMASBMR;    // [read-write] System bus mode register
    volatile uint32_t DMAISR;     // [read-write] Interrupt status register
    volatile uint32_t DMADSR;     // [read-write] Debug status register
    reserved_t<0x3c> _0x100;
    volatile uint32_t DMACCR;     // [read-write] Channel control register
    volatile uint32_t DMACTxCR;   // [read-write] Channel transmit control register
    volatile uint32_t DMACRxCR;   // [read-write] Channel receive control register
    reserved_t<0x2> _0x114;
    volatile uint32_t DMACTxDLAR; // [read-write] Channel Tx descriptor list address register
    reserved_t<0x1> _0x11c;
    volatile uint32_t DMACRxDLAR; // [read-write] Channel Rx descriptor list address register
    volatile uint32_t DMACTxDTPR; // [read-write] Channel Tx descriptor tail pointer register
    reserved_t<0x1> _0x128;
    volatile uint32_t DMACRxDTPR; // [read-write] Channel Rx descriptor tail pointer register
    volatile uint32_t DMACTxRLR;  // [read-write] Channel Tx descriptor ring length register
    volatile uint32_t DMACRxRLR;  // [read-write] Channel Rx descriptor ring length register
    volatile uint32_t DMACIER;    // [read-write] Channel interrupt enable register
    volatile uint32_t DMACRxIWTR; // [read-write] Channel Rx interrupt watchdog timer register
    reserved_t<0x2> _0x144;
    volatile uint32_t DMACCATxDR; // [read-write] Channel current application transmit descriptor register
    reserved_t<0x1> _0x14c;
    volatile uint32_t DMACCARxDR; // [read-write] Channel current application receive descriptor register
    reserved_t<0x1> _0x154;
    volatile uint32_t DMACCATxBR; // [read-write] Channel current application transmit buffer register
    reserved_t<0x1> _0x15c;
    volatile uint32_t DMACCARxBR; // [read-write] Channel current application receive buffer register
    volatile uint32_t DMACSR;     // [read-write] Channel status register
    reserved_t<0x2> _0x16c;
    volatile uint32_t DMACMFCR;   // [read-only] Channel missed frame count register

    static constexpr uint32_t DMAMR_RESET_VALUE = 0x8000;
    static constexpr uint32_t DMAMR_SWR = 0x1;      // Software Reset
    static constexpr uint32_t DMAMR_DA = 0x2;       // DMA Tx or Rx Arbitration Scheme
    static constexpr uint32_t DMAMR_TXPR = 0x800;   // Transmit priority
    template<uint32_t X>
    static constexpr uint32_t DMAMR_PR =            // Priority ratio
        bit_field_t<12, 0x7>::value<X>();
    static constexpr uint32_t DMAMR_INTM = 0x10000; // Interrupt Mode

    static constexpr uint32_t DMASBMR_RESET_VALUE = 0x8000;
    static constexpr uint32_t DMASBMR_FB = 0x1;     // Fixed Burst Length
    static constexpr uint32_t DMASBMR_AAL = 0x1000; // Address-Aligned Beats
    static constexpr uint32_t DMASBMR_MB = 0x4000;  // Mixed Burst
    static constexpr uint32_t DMASBMR_RB = 0x8000;  // Rebuild INCRx Burst

    static constexpr uint32_t DMAISR_RESET_VALUE = 0x8000;
    static constexpr uint32_t DMAISR_DC0IS = 0x1;     // DMA Channel Interrupt Status
    static constexpr uint32_t DMAISR_MTLIS = 0x10000; // MTL Interrupt Status
    static constexpr uint32_t DMAISR_MACIS = 0x20000; // MAC Interrupt Status

    static constexpr uint32_t DMADSR_RESET_VALUE = 0x8000;
    static constexpr uint32_t DMADSR_AXWHSTS = 0x1; // AHB Master Write Channel
    template<uint32_t X>
    static constexpr uint32_t DMADSR_RPS0 =         // DMA Channel Receive Process State
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMADSR_TPS0 =         // DMA Channel Transmit Process State
        bit_field_t<12, 0xf>::value<X>();

    static constexpr uint32_t DMACCR_RESET_VALUE = 0x8000;
    template<uint32_t X>
    static constexpr uint32_t DMACCR_MSS =            // Maximum Segment Size
        bit_field_t<0, 0x3fff>::value<X>();
    static constexpr uint32_t DMACCR_PBLX8 = 0x10000; // 8xPBL mode
    template<uint32_t X>
    static constexpr uint32_t DMACCR_DSL =            // Descriptor Skip Length
        bit_field_t<18, 0x7>::value<X>();

    static constexpr uint32_t DMACTxCR_RESET_VALUE = 0x8000;
    static constexpr uint32_t DMACTxCR_ST = 0x1;     // Start or Stop Transmission Command
    static constexpr uint32_t DMACTxCR_OSF = 0x10;   // Operate on Second Packet
    static constexpr uint32_t DMACTxCR_TSE = 0x1000; // TCP Segmentation Enabled
    template<uint32_t X>
    static constexpr uint32_t DMACTxCR_TXPBL =       // Transmit Programmable Burst Length
        bit_field_t<16, 0x3f>::value<X>();

    static constexpr uint32_t DMACRxCR_RESET_VALUE = 0x8000;
    static constexpr uint32_t DMACRxCR_SR = 0x1;         // Start or Stop Receive Command
    template<uint32_t X>
    static constexpr uint32_t DMACRxCR_RBSZ =            // Receive Buffer size
        bit_field_t<1, 0x3fff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMACRxCR_RXPBL =           // RXPBL
        bit_field_t<16, 0x3f>::value<X>();
    static constexpr uint32_t DMACRxCR_RPF = 0x80000000; // DMA Rx Channel Packet Flush

    static constexpr uint32_t DMACTxDLAR_RESET_VALUE = 0x8000;
    template<uint32_t X>
    static constexpr uint32_t DMACTxDLAR_TDESLA =   // Start of Transmit List
        bit_field_t<2, 0x3fffffff>::value<X>();

    static constexpr uint32_t DMACRxDLAR_RESET_VALUE = 0x8000;
    template<uint32_t X>
    static constexpr uint32_t DMACRxDLAR_RDESLA =   // Start of Receive List
        bit_field_t<2, 0x3fffffff>::value<X>();

    static constexpr uint32_t DMACTxDTPR_RESET_VALUE = 0x8000;
    template<uint32_t X>
    static constexpr uint32_t DMACTxDTPR_TDT =   // Transmit Descriptor Tail Pointer
        bit_field_t<2, 0x3fffffff>::value<X>();

    static constexpr uint32_t DMACRxDTPR_RESET_VALUE = 0x8000;
    template<uint32_t X>
    static constexpr uint32_t DMACRxDTPR_RDT =   // Receive Descriptor Tail Pointer
        bit_field_t<2, 0x3fffffff>::value<X>();

    static constexpr uint32_t DMACTxRLR_RESET_VALUE = 0x8000;
    template<uint32_t X>
    static constexpr uint32_t DMACTxRLR_TDRL =   // Transmit Descriptor Ring Length
        bit_field_t<0, 0x3ff>::value<X>();

    static constexpr uint32_t DMACRxRLR_RESET_VALUE = 0x8000;
    template<uint32_t X>
    static constexpr uint32_t DMACRxRLR_RDRL =   // Receive Descriptor Ring Length
        bit_field_t<0, 0x3ff>::value<X>();

    static constexpr uint32_t DMACIER_RESET_VALUE = 0x8000;
    static constexpr uint32_t DMACIER_TIE = 0x1;     // Transmit Interrupt Enable
    static constexpr uint32_t DMACIER_TXSE = 0x2;    // Transmit Stopped Enable
    static constexpr uint32_t DMACIER_TBUE = 0x4;    // Transmit Buffer Unavailable Enable
    static constexpr uint32_t DMACIER_RIE = 0x40;    // Receive Interrupt Enable
    static constexpr uint32_t DMACIER_RBUE = 0x80;   // Receive Buffer Unavailable Enable
    static constexpr uint32_t DMACIER_RSE = 0x100;   // Receive Stopped Enable
    static constexpr uint32_t DMACIER_RWTE = 0x200;  // Receive Watchdog Timeout Enable
    static constexpr uint32_t DMACIER_ETIE = 0x400;  // Early Transmit Interrupt Enable
    static constexpr uint32_t DMACIER_ERIE = 0x800;  // Early Receive Interrupt Enable
    static constexpr uint32_t DMACIER_FBEE = 0x1000; // Fatal Bus Error Enable
    static constexpr uint32_t DMACIER_CDEE = 0x2000; // Context Descriptor Error Enable
    static constexpr uint32_t DMACIER_AIE = 0x4000;  // Abnormal Interrupt Summary Enable
    static constexpr uint32_t DMACIER_NIE = 0x8000;  // Normal Interrupt Summary Enable

    static constexpr uint32_t DMACRxIWTR_RESET_VALUE = 0x8000;
    template<uint32_t X>
    static constexpr uint32_t DMACRxIWTR_RWT =   // Receive Interrupt Watchdog Timer Count
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DMACCATxDR_RESET_VALUE = 0x8000;

    static constexpr uint32_t DMACCARxDR_RESET_VALUE = 0x8000;

    static constexpr uint32_t DMACCATxBR_RESET_VALUE = 0x8000;

    static constexpr uint32_t DMACCARxBR_RESET_VALUE = 0x8000;

    static constexpr uint32_t DMACSR_RESET_VALUE = 0x8000;
    static constexpr uint32_t DMACSR_TI = 0x1;     // Transmit Interrupt
    static constexpr uint32_t DMACSR_TPS = 0x2;    // Transmit Process Stopped
    static constexpr uint32_t DMACSR_TBU = 0x4;    // Transmit Buffer Unavailable
    static constexpr uint32_t DMACSR_RI = 0x40;    // Receive Interrupt
    static constexpr uint32_t DMACSR_RBU = 0x80;   // Receive Buffer Unavailable
    static constexpr uint32_t DMACSR_RPS = 0x100;  // Receive Process Stopped
    static constexpr uint32_t DMACSR_RWT = 0x200;  // Receive Watchdog Timeout
    static constexpr uint32_t DMACSR_ET = 0x400;   // Early Transmit Interrupt
    static constexpr uint32_t DMACSR_ER = 0x800;   // Early Receive Interrupt
    static constexpr uint32_t DMACSR_FBE = 0x1000; // Fatal Bus Error
    static constexpr uint32_t DMACSR_CDE = 0x2000; // Context Descriptor Error
    static constexpr uint32_t DMACSR_AIS = 0x4000; // Abnormal Interrupt Summary
    static constexpr uint32_t DMACSR_NIS = 0x8000; // Normal Interrupt Summary
    template<uint32_t X>
    static constexpr uint32_t DMACSR_TEB =         // Tx DMA Error Bits
        bit_field_t<16, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMACSR_REB =         // Rx DMA Error Bits
        bit_field_t<19, 0x7>::value<X>();

    static constexpr uint32_t DMACMFCR_RESET_VALUE = 0x8000;
    template<uint32_t X>
    static constexpr uint32_t DMACMFCR_MFC =          // Dropped Packet Counters
        bit_field_t<0, 0x7ff>::value<X>();
    static constexpr uint32_t DMACMFCR_MFCO = 0x8000; // Overflow status of the MFC Counter
};


////
//
//      Ethernet: MTL mode register (MTL)
//
////

struct stm32h742x_ethernet_mtl_t
{
    volatile uint32_t MTLOMR;      // [read-write] Operating mode Register
    reserved_t<0x7> _0x20;
    volatile uint32_t MTLISR;      // [read-only] Interrupt status Register
    reserved_t<0x37> _0x100;
    volatile uint32_t MTLTxQOMR;   // Tx queue operating mode Register
    volatile uint32_t MTLTxQUR;    // [read-only] Tx queue underflow register
    volatile uint32_t MTLTxQDR;    // [read-only] Tx queue debug Register
    reserved_t<0x8> _0x12c;
    volatile uint32_t MTLQICSR;    // [read-write] Queue interrupt control status Register
    volatile uint32_t MTLRxQOMR;   // Rx queue operating mode register
    volatile uint32_t MTLRxQMPOCR; // [read-only] Rx queue missed packet and overflow counter register
    volatile uint32_t MTLRxQDR;    // [read-only] Rx queue debug register

    static constexpr uint32_t MTLOMR_RESET_VALUE = 0x0;
    static constexpr uint32_t MTLOMR_DTXSTS = 0x2;    // DTXSTS
    static constexpr uint32_t MTLOMR_CNTPRST = 0x100; // CNTPRST
    static constexpr uint32_t MTLOMR_CNTCLR = 0x200;  // CNTCLR

    static constexpr uint32_t MTLISR_RESET_VALUE = 0x0;
    static constexpr uint32_t MTLISR_Q0IS = 0x1; // Queue interrupt status

    static constexpr uint32_t MTLTxQOMR_RESET_VALUE = 0x70008;
    static constexpr uint32_t MTLTxQOMR_FTQ = 0x1; // Flush Transmit Queue
    static constexpr uint32_t MTLTxQOMR_TSF = 0x2; // Transmit Store and Forward
    template<uint32_t X>
    static constexpr uint32_t MTLTxQOMR_TXQEN =    // Transmit Queue Enable
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MTLTxQOMR_TTC =      // Transmit Threshold Control
        bit_field_t<4, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MTLTxQOMR_TQS =      // Transmit Queue Size
        bit_field_t<16, 0x7>::value<X>();

    static constexpr uint32_t MTLTxQUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MTLTxQUR_UFFRMCNT =        // Underflow Packet Counter
        bit_field_t<0, 0x7ff>::value<X>();
    static constexpr uint32_t MTLTxQUR_UFCNTOVF = 0x800; // UFCNTOVF

    static constexpr uint32_t MTLTxQDR_RESET_VALUE = 0x0;
    static constexpr uint32_t MTLTxQDR_TXQPAUSED = 0x1;  // TXQPAUSED
    template<uint32_t X>
    static constexpr uint32_t MTLTxQDR_TRCSTS =          // TRCSTS
        bit_field_t<1, 0x3>::value<X>();
    static constexpr uint32_t MTLTxQDR_TWCSTS = 0x8;     // TWCSTS
    static constexpr uint32_t MTLTxQDR_TXQSTS = 0x10;    // TXQSTS
    static constexpr uint32_t MTLTxQDR_TXSTSFSTS = 0x20; // TXSTSFSTS
    template<uint32_t X>
    static constexpr uint32_t MTLTxQDR_PTXQ =            // PTXQ
        bit_field_t<16, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MTLTxQDR_STXSTSF =         // STXSTSF
        bit_field_t<20, 0x7>::value<X>();

    static constexpr uint32_t MTLQICSR_RESET_VALUE = 0x0;
    static constexpr uint32_t MTLQICSR_TXUNFIS = 0x1;     // TXUNFIS
    static constexpr uint32_t MTLQICSR_TXUIE = 0x100;     // TXUIE
    static constexpr uint32_t MTLQICSR_RXOVFIS = 0x10000; // RXOVFIS
    static constexpr uint32_t MTLQICSR_RXOIE = 0x1000000; // RXOIE

    static constexpr uint32_t MTLRxQOMR_RESET_VALUE = 0x700000;
    template<uint32_t X>
    static constexpr uint32_t MTLRxQOMR_RTC =              // RTC
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t MTLRxQOMR_FUP = 0x8;         // FUP
    static constexpr uint32_t MTLRxQOMR_FEP = 0x10;        // FEP
    static constexpr uint32_t MTLRxQOMR_RSF = 0x20;        // RSF
    static constexpr uint32_t MTLRxQOMR_DIS_TCP_EF = 0x40; // DIS_TCP_EF
    static constexpr uint32_t MTLRxQOMR_EHFC = 0x80;       // EHFC
    template<uint32_t X>
    static constexpr uint32_t MTLRxQOMR_RFA =              // RFA
        bit_field_t<8, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MTLRxQOMR_RFD =              // RFD
        bit_field_t<14, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MTLRxQOMR_RQS =              // RQS
        bit_field_t<20, 0x7>::value<X>();

    static constexpr uint32_t MTLRxQMPOCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MTLRxQMPOCR_OVFPKTCNT =            // OVFPKTCNT
        bit_field_t<0, 0x7ff>::value<X>();
    static constexpr uint32_t MTLRxQMPOCR_OVFCNTOVF = 0x800;     // OVFCNTOVF
    template<uint32_t X>
    static constexpr uint32_t MTLRxQMPOCR_MISPKTCNT =            // MISPKTCNT
        bit_field_t<16, 0x7ff>::value<X>();
    static constexpr uint32_t MTLRxQMPOCR_MISCNTOVF = 0x8000000; // MISCNTOVF

    static constexpr uint32_t MTLRxQDR_RESET_VALUE = 0x0;
    static constexpr uint32_t MTLRxQDR_RWCSTS = 0x1; // RWCSTS
    template<uint32_t X>
    static constexpr uint32_t MTLRxQDR_RRCSTS =      // RRCSTS
        bit_field_t<1, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MTLRxQDR_RXQSTS =      // RXQSTS
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MTLRxQDR_PRXQ =        // PRXQ
        bit_field_t<16, 0x3fff>::value<X>();
};


template<>
struct peripheral_t<STM32H742x, ETHERNET_DMA>
{
    typedef stm32h742x_ethernet_dma_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, ETHERNET_DMA>
{
    typedef stm32h742x_ethernet_dma_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, ETHERNET_DMA>
{
    typedef stm32h742x_ethernet_dma_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, ETHERNET_MTL>
{
    typedef stm32h742x_ethernet_mtl_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, ETHERNET_MTL>
{
    typedef stm32h742x_ethernet_mtl_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, ETHERNET_MTL>
{
    typedef stm32h742x_ethernet_mtl_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, ETHERNET_MAC>
{
    typedef stm32h742x_ethernet_mac_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, ETHERNET_MAC>
{
    typedef stm32h742x_ethernet_mac_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, ETHERNET_MAC>
{
    typedef stm32h742x_ethernet_mac_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, ETHERNET_MAC>
{
    typedef stm32h745_cm4_ethernet_mac_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, ETHERNET_MAC>
{
    typedef stm32h745_cm4_ethernet_mac_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, ETHERNET_MAC>
{
    typedef stm32h745_cm4_ethernet_mac_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, ETHERNET_MAC>
{
    typedef stm32h745_cm4_ethernet_mac_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, ETHERNET_MAC>
{
    typedef stm32h745_cm4_ethernet_mac_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, ETHERNET_MAC>
{
    typedef stm32h745_cm4_ethernet_mac_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, ETHERNET_MAC>
{
    typedef stm32h745_cm4_ethernet_mac_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, ETHERNET_MAC>
{
    typedef stm32h745_cm4_ethernet_mac_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, ETHERNET_MAC>
{
    typedef stm32h750x_ethernet_mac_t T;
    static T& V;
};

using ethernet_dma_t = peripheral_t<mcu_svd, ETHERNET_DMA>;
using ethernet_mac_t = peripheral_t<mcu_svd, ETHERNET_MAC>;
using ethernet_mtl_t = peripheral_t<mcu_svd, ETHERNET_MTL>;

