#pragma once

////
//
//      STM32H7 ETHERNET peripherals
//
///

// ETHERNET_DMA: Ethernet: DMA mode register (DMA)

struct stm32h742x_ethernet_dma_t
{
    volatile uint32_t DMAMR; // DMA mode register
    volatile uint32_t DMASBMR; // System bus mode register
    volatile uint32_t DMAISR; // Interrupt status register
    volatile uint32_t DMADSR; // Debug status register
    reserved_t<0x3c> _0x10;
    volatile uint32_t DMACCR; // Channel control register
    volatile uint32_t DMACTXCR; // Channel transmit control register
    volatile uint32_t DMACRXCR; // Channel receive control register
    reserved_t<0x2> _0x10c;
    volatile uint32_t DMACTXDLAR; // Channel Tx descriptor list address register
    reserved_t<0x1> _0x118;
    volatile uint32_t DMACRXDLAR; // Channel Rx descriptor list address register
    volatile uint32_t DMACTXDTPR; // Channel Tx descriptor tail pointer register
    reserved_t<0x1> _0x124;
    volatile uint32_t DMACRXDTPR; // Channel Rx descriptor tail pointer register
    volatile uint32_t DMACTXRLR; // Channel Tx descriptor ring length register
    volatile uint32_t DMACRXRLR; // Channel Rx descriptor ring length register
    volatile uint32_t DMACIER; // Channel interrupt enable register
    volatile uint32_t DMACRXIWTR; // Channel Rx interrupt watchdog timer register
    reserved_t<0x2> _0x13c;
    volatile uint32_t DMACCATXDR; // Channel current application transmit descriptor register
    reserved_t<0x1> _0x148;
    volatile uint32_t DMACCARXDR; // Channel current application receive descriptor register
    reserved_t<0x1> _0x150;
    volatile uint32_t DMACCATXBR; // Channel current application transmit buffer register
    reserved_t<0x1> _0x158;
    volatile uint32_t DMACCARXBR; // Channel current application receive buffer register
    volatile uint32_t DMACSR; // Channel status register
    reserved_t<0x2> _0x164;
    volatile uint32_t DMACMFCR; // Channel missed frame count register

    static constexpr uint32_t DMAMR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DMAMR_SWR = 0x1; // Software Reset
    static constexpr uint32_t DMAMR_DA = 0x2; // DMA Tx or Rx Arbitration Scheme
    static constexpr uint32_t DMAMR_TXPR = 0x800; // Transmit priority
    typedef bit_field_t<12, 0x7> DMAMR_PR; // Priority ratio
    static constexpr uint32_t DMAMR_INTM = 0x10000; // Interrupt Mode

    static constexpr uint32_t DMASBMR_RESET_VALUE = 0x1010000; // Reset value
    static constexpr uint32_t DMASBMR_FB = 0x1; // Fixed Burst Length
    static constexpr uint32_t DMASBMR_AAL = 0x1000; // Address-Aligned Beats
    static constexpr uint32_t DMASBMR_MB = 0x4000; // Mixed Burst
    static constexpr uint32_t DMASBMR_RB = 0x8000; // Rebuild INCRx Burst

    static constexpr uint32_t DMAISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DMAISR_DC0IS = 0x1; // DMA Channel Interrupt Status
    static constexpr uint32_t DMAISR_MTLIS = 0x10000; // MTL Interrupt Status
    static constexpr uint32_t DMAISR_MACIS = 0x20000; // MAC Interrupt Status

    static constexpr uint32_t DMADSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DMADSR_AXWHSTS = 0x1; // AHB Master Write Channel
    typedef bit_field_t<8, 0xf> DMADSR_RPS0; // DMA Channel Receive Process State
    typedef bit_field_t<12, 0xf> DMADSR_TPS0; // DMA Channel Transmit Process State


    static constexpr uint32_t DMACCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3fff> DMACCR_MSS; // Maximum Segment Size
    static constexpr uint32_t DMACCR_PBLX8 = 0x10000; // 8xPBL mode
    typedef bit_field_t<18, 0x7> DMACCR_DSL; // Descriptor Skip Length

    static constexpr uint32_t DMACTXCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DMACTXCR_ST = 0x1; // Start or Stop Transmission Command
    static constexpr uint32_t DMACTXCR_OSF = 0x10; // Operate on Second Packet
    static constexpr uint32_t DMACTXCR_TSE = 0x1000; // TCP Segmentation Enabled
    typedef bit_field_t<16, 0x3f> DMACTXCR_TXPBL; // Transmit Programmable Burst Length

    static constexpr uint32_t DMACRXCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DMACRXCR_SR = 0x1; // Start or Stop Receive Command
    typedef bit_field_t<1, 0x3fff> DMACRXCR_RBSZ; // Receive Buffer size
    typedef bit_field_t<16, 0x3f> DMACRXCR_RXPBL; // RXPBL
    static constexpr uint32_t DMACRXCR_RPF = 0x80000000; // DMA Rx Channel Packet Flush


    static constexpr uint32_t DMACTXDLAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<2, 0x3fffffff> DMACTXDLAR_TDESLA; // Start of Transmit List


    static constexpr uint32_t DMACRXDLAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<2, 0x3fffffff> DMACRXDLAR_RDESLA; // Start of Receive List

    static constexpr uint32_t DMACTXDTPR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<2, 0x3fffffff> DMACTXDTPR_TDT; // Transmit Descriptor Tail Pointer


    static constexpr uint32_t DMACRXDTPR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<2, 0x3fffffff> DMACRXDTPR_RDT; // Receive Descriptor Tail Pointer

    static constexpr uint32_t DMACTXRLR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ff> DMACTXRLR_TDRL; // Transmit Descriptor Ring Length

    static constexpr uint32_t DMACRXRLR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ff> DMACRXRLR_RDRL; // Receive Descriptor Ring Length

    static constexpr uint32_t DMACIER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DMACIER_TIE = 0x1; // Transmit Interrupt Enable
    static constexpr uint32_t DMACIER_TXSE = 0x2; // Transmit Stopped Enable
    static constexpr uint32_t DMACIER_TBUE = 0x4; // Transmit Buffer Unavailable Enable
    static constexpr uint32_t DMACIER_RIE = 0x40; // Receive Interrupt Enable
    static constexpr uint32_t DMACIER_RBUE = 0x80; // Receive Buffer Unavailable Enable
    static constexpr uint32_t DMACIER_RSE = 0x100; // Receive Stopped Enable
    static constexpr uint32_t DMACIER_RWTE = 0x200; // Receive Watchdog Timeout Enable
    static constexpr uint32_t DMACIER_ETIE = 0x400; // Early Transmit Interrupt Enable
    static constexpr uint32_t DMACIER_ERIE = 0x800; // Early Receive Interrupt Enable
    static constexpr uint32_t DMACIER_FBEE = 0x1000; // Fatal Bus Error Enable
    static constexpr uint32_t DMACIER_CDEE = 0x2000; // Context Descriptor Error Enable
    static constexpr uint32_t DMACIER_AIE = 0x4000; // Abnormal Interrupt Summary Enable
    static constexpr uint32_t DMACIER_NIE = 0x8000; // Normal Interrupt Summary Enable

    static constexpr uint32_t DMACRXIWTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DMACRXIWTR_RWT; // Receive Interrupt Watchdog Timer Count


    static constexpr uint32_t DMACCATXDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DMACCATXDR_CURTDESAPTR; // Application Transmit Descriptor Address Pointer


    static constexpr uint32_t DMACCARXDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DMACCARXDR_CURRDESAPTR; // Application Receive Descriptor Address Pointer


    static constexpr uint32_t DMACCATXBR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DMACCATXBR_CURTBUFAPTR; // Application Transmit Buffer Address Pointer


    static constexpr uint32_t DMACCARXBR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DMACCARXBR_CURRBUFAPTR; // Application Receive Buffer Address Pointer

    static constexpr uint32_t DMACSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DMACSR_TI = 0x1; // Transmit Interrupt
    static constexpr uint32_t DMACSR_TPS = 0x2; // Transmit Process Stopped
    static constexpr uint32_t DMACSR_TBU = 0x4; // Transmit Buffer Unavailable
    static constexpr uint32_t DMACSR_RI = 0x40; // Receive Interrupt
    static constexpr uint32_t DMACSR_RBU = 0x80; // Receive Buffer Unavailable
    static constexpr uint32_t DMACSR_RPS = 0x100; // Receive Process Stopped
    static constexpr uint32_t DMACSR_RWT = 0x200; // Receive Watchdog Timeout
    static constexpr uint32_t DMACSR_ET = 0x400; // Early Transmit Interrupt
    static constexpr uint32_t DMACSR_ER = 0x800; // Early Receive Interrupt
    static constexpr uint32_t DMACSR_FBE = 0x1000; // Fatal Bus Error
    static constexpr uint32_t DMACSR_CDE = 0x2000; // Context Descriptor Error
    static constexpr uint32_t DMACSR_AIS = 0x4000; // Abnormal Interrupt Summary
    static constexpr uint32_t DMACSR_NIS = 0x8000; // Normal Interrupt Summary
    typedef bit_field_t<16, 0x7> DMACSR_TEB; // Tx DMA Error Bits
    typedef bit_field_t<19, 0x7> DMACSR_REB; // Rx DMA Error Bits


    static constexpr uint32_t DMACMFCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> DMACMFCR_MFC; // Dropped Packet Counters
    static constexpr uint32_t DMACMFCR_MFCO = 0x8000; // Overflow status of the MFC Counter
};

// ETHERNET_MAC: Ethernet: media access control (MAC)

struct stm32h723_ethernet_mac_t
{
    volatile uint32_t MACCR; // Operating mode configuration register
    volatile uint32_t MACECR; // Extended operating mode configuration register
    volatile uint32_t MACPFR; // Packet filtering control register
    volatile uint32_t MACWTR; // Watchdog timeout register
    volatile uint32_t MACHT0R; // Hash Table 0 register
    volatile uint32_t MACHT1R; // Hash Table 1 register
    reserved_t<0xe> _0x18;
    volatile uint32_t MACVTR; // VLAN tag register
    reserved_t<0x1> _0x54;
    volatile uint32_t MACVHTR; // VLAN Hash table register
    reserved_t<0x1> _0x5c;
    volatile uint32_t MACVIR; // VLAN inclusion register
    volatile uint32_t MACIVIR; // Inner VLAN inclusion register
    reserved_t<0x2> _0x68;
    volatile uint32_t MACQTXFCR; // Tx Queue flow control register
    reserved_t<0x7> _0x74;
    volatile uint32_t MACRXFCR; // Rx flow control register
    reserved_t<0x7> _0x94;
    volatile uint32_t MACISR; // Interrupt status register
    volatile uint32_t MACIER; // Interrupt enable register
    volatile uint32_t MACRXTXSR; // Rx Tx status register
    reserved_t<0x1> _0xbc;
    volatile uint32_t MACPCSR; // PMT control status register
    volatile uint32_t MACRWKPFR; // Remove wakeup packet filter register
    reserved_t<0x2> _0xc8;
    volatile uint32_t MACLCSR; // LPI control status register
    volatile uint32_t MACLTCR; // LPI timers control register
    volatile uint32_t MACLETR; // LPI entry timer register
    volatile uint32_t MAC1USTCR; // 1-microsecond-tick counter register
    reserved_t<0xc> _0xe0;
    volatile uint32_t MACVR; // Version register
    volatile uint32_t MACDR; // Debug register
    reserved_t<0x2> _0x118;
    volatile uint32_t MACHWF1R; // HW feature 1 register
    volatile uint32_t MACHWF2R; // HW feature 2 register
    reserved_t<0x36> _0x128;
    volatile uint32_t MACMDIOAR; // MDIO address register
    volatile uint32_t MACMDIODR; // MDIO data register
    reserved_t<0x3e> _0x208;
    volatile uint32_t MACA0HR; // Address 0 high register
    volatile uint32_t MACA0LR; // Address 0 low register
    volatile uint32_t MACA1HR; // Address 1 high register
    volatile uint32_t MACA1LR; // Address 1 low register
    volatile uint32_t MACA2HR; // Address 2 high register
    volatile uint32_t MACA2LR; // Address 2 low register
    volatile uint32_t MACA3HR; // Address 3 high register
    volatile uint32_t MACA3LR; // Address 3 low register
    reserved_t<0xf8> _0x320;
    volatile uint32_t MMC_CONTROL; // MMC control register
    volatile uint32_t MMC_RX_INTERRUPT; // MMC Rx interrupt register
    volatile uint32_t MMC_TX_INTERRUPT; // MMC Tx interrupt register
    volatile uint32_t MMC_RX_INTERRUPT_MASK; // MMC Rx interrupt mask register
    volatile uint32_t MMC_TX_INTERRUPT_MASK; // MMC Tx interrupt mask register
    reserved_t<0xe> _0x714;
    volatile uint32_t TX_SINGLE_COLLISION_GOOD_PACKETS; // Tx single collision good packets register
    volatile uint32_t TX_MULTIPLE_COLLISION_GOOD_PACKETS; // Tx multiple collision good packets register
    reserved_t<0x5> _0x754;
    volatile uint32_t TX_PACKET_COUNT_GOOD; // Tx packet count good register
    reserved_t<0xa> _0x76c;
    volatile uint32_t RX_CRC_ERROR_PACKETS; // Rx CRC error packets register
    volatile uint32_t RX_ALIGNMENT_ERROR_PACKETS; // Rx alignment error packets register
    reserved_t<0xa> _0x79c;
    volatile uint32_t RX_UNICAST_PACKETS_GOOD; // Rx unicast packets good register
    reserved_t<0x9> _0x7c8;
    volatile uint32_t TX_LPI_USEC_CNTR; // Tx LPI microsecond timer register
    volatile uint32_t TX_LPI_TRAN_CNTR; // Tx LPI transition counter register
    volatile uint32_t RX_LPI_USEC_CNTR; // Rx LPI microsecond counter register
    volatile uint32_t RX_LPI_TRAN_CNTR; // Rx LPI transition counter register
    reserved_t<0x41> _0x7fc;
    volatile uint32_t MACL3L4C0R; // L3 and L4 control 0 register
    volatile uint32_t MACL4A0R; // Layer4 address filter 0 register
    reserved_t<0x2> _0x908;
    volatile uint32_t MACL3A00R; // MACL3A00R
    volatile uint32_t MACL3A10R; // Layer3 address 1 filter 0 register
    volatile uint32_t MACL3A20; // Layer3 Address 2 filter 0 register
    volatile uint32_t MACL3A30; // Layer3 Address 3 filter 0 register
    reserved_t<0x4> _0x920;
    volatile uint32_t MACL3L4C1R; // L3 and L4 control 1 register
    volatile uint32_t MACL4A1R; // Layer 4 address filter 1 register
    reserved_t<0x2> _0x938;
    volatile uint32_t MACL3A01R; // Layer3 address 0 filter 1 Register
    volatile uint32_t MACL3A11R; // Layer3 address 1 filter 1 register
    volatile uint32_t MACL3A21R; // Layer3 address 2 filter 1 Register
    volatile uint32_t MACL3A31R; // Layer3 address 3 filter 1 register
    reserved_t<0x64> _0x950;
    volatile uint32_t MACARPAR; // ARP address register
    reserved_t<0x7> _0xae4;
    volatile uint32_t MACTSCR; // Timestamp control Register
    volatile uint32_t MACSSIR; // Sub-second increment register
    volatile uint32_t MACSTSR; // System time seconds register
    volatile uint32_t MACSTNR; // System time nanoseconds register
    volatile uint32_t MACSTSUR; // System time seconds update register
    volatile uint32_t MACSTNUR; // System time nanoseconds update register
    volatile uint32_t MACTSAR; // Timestamp addend register
    reserved_t<0x1> _0xb1c;
    volatile uint32_t MACTSSR; // Timestamp status register
    reserved_t<0x3> _0xb24;
    volatile uint32_t MACTXTSSNR; // Tx timestamp status nanoseconds register
    volatile uint32_t MACTXTSSSR; // Tx timestamp status seconds register
    reserved_t<0x2> _0xb38;
    volatile uint32_t MACACR; // Auxiliary control register
    reserved_t<0x1> _0xb44;
    volatile uint32_t MACATSNR; // Auxiliary timestamp nanoseconds register
    volatile uint32_t MACATSSR; // Auxiliary timestamp seconds register
    volatile uint32_t MACTSIACR; // Timestamp Ingress asymmetric correction register
    volatile uint32_t MACTSEACR; // Timestamp Egress asymmetric correction register
    volatile uint32_t MACTSICNR; // Timestamp Ingress correction nanosecond register
    volatile uint32_t MACTSECNR; // Timestamp Egress correction nanosecond register
    reserved_t<0x4> _0xb60;
    volatile uint32_t MACPPSCR; // PPS control register
    reserved_t<0x3> _0xb74;
    volatile uint32_t MACPPSTTSR; // PPS target time seconds register
    volatile uint32_t MACPPSTTNR; // PPS target time nanoseconds register
    volatile uint32_t MACPPSIR; // PPS interval register
    volatile uint32_t MACPPSWR; // PPS width register
    reserved_t<0xc> _0xb90;
    volatile uint32_t MACPOCR; // PTP Offload control register
    volatile uint32_t MACSPI0R; // PTP Source Port Identity 0 Register
    volatile uint32_t MACSPI1R; // PTP Source port identity 1 register
    volatile uint32_t MACSPI2R; // PTP Source port identity 2 register
    volatile uint32_t MACLMIR; // Log message interval register
    reserved_t<0xb> _0xbd4;
    volatile uint32_t MTLOMR; // Operating mode Register
    reserved_t<0x7> _0xc04;
    volatile uint32_t MTLISR; // Interrupt status Register
    reserved_t<0x37> _0xc24;
    volatile uint32_t MTLTXQOMR; // Tx queue operating mode Register
    volatile uint32_t MTLTXQUR; // Tx queue underflow register
    volatile uint32_t MTLTXQDR; // Tx queue debug Register
    reserved_t<0x8> _0xd0c;
    volatile uint32_t MTLQICSR; // Queue interrupt control status Register
    volatile uint32_t MTLRXQOMR; // Rx queue operating mode register
    volatile uint32_t MTLRXQMPOCR; // Rx queue missed packet and overflow counter register
    volatile uint32_t MTLRXQDR; // Rx queue debug register
    reserved_t<0xb1> _0xd3c;
    volatile uint32_t DMAMR; // DMA mode register
    volatile uint32_t DMASBMR; // System bus mode register
    volatile uint32_t DMAISR; // Interrupt status register
    volatile uint32_t DMADSR; // Debug status register
    reserved_t<0x3c> _0x1010;
    volatile uint32_t DMACCR; // Channel control register
    volatile uint32_t DMACTXCR; // Channel transmit control register
    volatile uint32_t DMACRXCR; // Channel receive control register
    reserved_t<0x2> _0x110c;
    volatile uint32_t DMACTXDLAR; // Channel Tx descriptor list address register
    reserved_t<0x1> _0x1118;
    volatile uint32_t DMACRXDLAR; // Channel Rx descriptor list address register
    volatile uint32_t DMACTXDTPR; // Channel Tx descriptor tail pointer register
    reserved_t<0x1> _0x1124;
    volatile uint32_t DMACRXDTPR; // Channel Rx descriptor tail pointer register
    volatile uint32_t DMACTXRLR; // Channel Tx descriptor ring length register
    volatile uint32_t DMACRXRLR; // Channel Rx descriptor ring length register
    volatile uint32_t DMACIER; // Channel interrupt enable register
    volatile uint32_t DMACRXIWTR; // Channel Rx interrupt watchdog timer register
    reserved_t<0x2> _0x113c;
    volatile uint32_t DMACCATXDR; // Channel current application transmit descriptor register
    reserved_t<0x1> _0x1148;
    volatile uint32_t DMACCARXDR; // Channel current application receive descriptor register
    reserved_t<0x1> _0x1150;
    volatile uint32_t DMACCATXBR; // Channel current application transmit buffer register
    reserved_t<0x1> _0x1158;
    volatile uint32_t DMACCARXBR; // Channel current application receive buffer register
    volatile uint32_t DMACSR; // Channel status register
    reserved_t<0x2> _0x1164;
    volatile uint32_t DMACMFCR; // Channel missed frame count register

    static constexpr uint32_t MACCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MACCR_RE = 0x1; // Receiver Enable
    static constexpr uint32_t MACCR_TE = 0x2; // TE
    typedef bit_field_t<2, 0x3> MACCR_PRELEN; // PRELEN
    static constexpr uint32_t MACCR_DC = 0x10; // DC
    typedef bit_field_t<5, 0x3> MACCR_BL; // BL
    static constexpr uint32_t MACCR_DR = 0x100; // DR
    static constexpr uint32_t MACCR_DCRS = 0x200; // DCRS
    static constexpr uint32_t MACCR_DO = 0x400; // DO
    static constexpr uint32_t MACCR_ECRSFD = 0x800; // ECRSFD
    static constexpr uint32_t MACCR_LM = 0x1000; // LM
    static constexpr uint32_t MACCR_DM = 0x2000; // DM
    static constexpr uint32_t MACCR_FES = 0x4000; // FES
    static constexpr uint32_t MACCR_JE = 0x10000; // JE
    static constexpr uint32_t MACCR_JD = 0x20000; // JD
    static constexpr uint32_t MACCR_WD = 0x80000; // WD
    static constexpr uint32_t MACCR_ACS = 0x100000; // ACS
    static constexpr uint32_t MACCR_CST = 0x200000; // CST
    static constexpr uint32_t MACCR_S2KP = 0x400000; // S2KP
    static constexpr uint32_t MACCR_GPSLCE = 0x800000; // GPSLCE
    typedef bit_field_t<24, 0x7> MACCR_IPG; // IPG
    static constexpr uint32_t MACCR_IPC = 0x8000000; // IPC
    typedef bit_field_t<28, 0x7> MACCR_SARC; // SARC
    static constexpr uint32_t MACCR_ARPEN = 0x80000000; // ARPEN

    static constexpr uint32_t MACECR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3fff> MACECR_GPSL; // GPSL
    static constexpr uint32_t MACECR_DCRCC = 0x10000; // DCRCC
    static constexpr uint32_t MACECR_SPEN = 0x20000; // SPEN
    static constexpr uint32_t MACECR_USP = 0x40000; // USP
    static constexpr uint32_t MACECR_EIPGEN = 0x1000000; // EIPGEN
    typedef bit_field_t<25, 0x1f> MACECR_EIPG; // EIPG

    static constexpr uint32_t MACPFR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MACPFR_PR = 0x1; // PR
    static constexpr uint32_t MACPFR_HUC = 0x2; // HUC
    static constexpr uint32_t MACPFR_HMC = 0x4; // HMC
    static constexpr uint32_t MACPFR_DAIF = 0x8; // DAIF
    static constexpr uint32_t MACPFR_PM = 0x10; // PM
    static constexpr uint32_t MACPFR_DBF = 0x20; // DBF
    typedef bit_field_t<6, 0x3> MACPFR_PCF; // PCF
    static constexpr uint32_t MACPFR_SAIF = 0x100; // SAIF
    static constexpr uint32_t MACPFR_SAF = 0x200; // SAF
    static constexpr uint32_t MACPFR_HPF = 0x400; // HPF
    static constexpr uint32_t MACPFR_VTFE = 0x10000; // VTFE
    static constexpr uint32_t MACPFR_IPFE = 0x100000; // IPFE
    static constexpr uint32_t MACPFR_DNTU = 0x200000; // DNTU
    static constexpr uint32_t MACPFR_RA = 0x80000000; // RA

    static constexpr uint32_t MACWTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> MACWTR_WTO; // WTO
    static constexpr uint32_t MACWTR_PWE = 0x100; // PWE

    static constexpr uint32_t MACHT0R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACHT0R_HT31T0; // HT31T0

    static constexpr uint32_t MACHT1R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACHT1R_HT63T32; // HT63T32


    static constexpr uint32_t MACVTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MACVTR_VL; // VL
    static constexpr uint32_t MACVTR_ETV = 0x10000; // ETV
    static constexpr uint32_t MACVTR_VTIM = 0x20000; // VTIM
    static constexpr uint32_t MACVTR_ESVL = 0x40000; // ESVL
    static constexpr uint32_t MACVTR_ERSVLM = 0x80000; // ERSVLM
    static constexpr uint32_t MACVTR_DOVLTC = 0x100000; // DOVLTC
    typedef bit_field_t<21, 0x3> MACVTR_EVLS; // EVLS
    static constexpr uint32_t MACVTR_EVLRXS = 0x1000000; // EVLRXS
    static constexpr uint32_t MACVTR_VTHM = 0x2000000; // VTHM
    static constexpr uint32_t MACVTR_EDVLP = 0x4000000; // EDVLP
    static constexpr uint32_t MACVTR_ERIVLT = 0x8000000; // ERIVLT
    typedef bit_field_t<28, 0x3> MACVTR_EIVLS; // EIVLS
    static constexpr uint32_t MACVTR_EIVLRXS = 0x80000000; // EIVLRXS


    static constexpr uint32_t MACVHTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MACVHTR_VLHT; // VLHT


    static constexpr uint32_t MACVIR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MACVIR_VLT; // VLT
    typedef bit_field_t<16, 0x3> MACVIR_VLC; // VLC
    static constexpr uint32_t MACVIR_VLP = 0x40000; // VLP
    static constexpr uint32_t MACVIR_CSVL = 0x80000; // CSVL
    static constexpr uint32_t MACVIR_VLTI = 0x100000; // VLTI

    static constexpr uint32_t MACIVIR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MACIVIR_VLT; // VLT
    typedef bit_field_t<16, 0x3> MACIVIR_VLC; // VLC
    static constexpr uint32_t MACIVIR_VLP = 0x40000; // VLP
    static constexpr uint32_t MACIVIR_CSVL = 0x80000; // CSVL
    static constexpr uint32_t MACIVIR_VLTI = 0x100000; // VLTI


    static constexpr uint32_t MACQTXFCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MACQTXFCR_FCB_BPA = 0x1; // FCB_BPA
    static constexpr uint32_t MACQTXFCR_TFE = 0x2; // TFE
    typedef bit_field_t<4, 0x7> MACQTXFCR_PLT; // PLT
    static constexpr uint32_t MACQTXFCR_DZPQ = 0x80; // DZPQ
    typedef bit_field_t<16, 0xffff> MACQTXFCR_PT; // PT


    static constexpr uint32_t MACRXFCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MACRXFCR_RFE = 0x1; // RFE
    static constexpr uint32_t MACRXFCR_UP = 0x2; // UP


    static constexpr uint32_t MACISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MACISR_PHYIS = 0x8; // PHYIS
    static constexpr uint32_t MACISR_PMTIS = 0x10; // PMTIS
    static constexpr uint32_t MACISR_LPIIS = 0x20; // LPIIS
    static constexpr uint32_t MACISR_MMCIS = 0x100; // MMCIS
    static constexpr uint32_t MACISR_MMCRXIS = 0x200; // MMCRXIS
    static constexpr uint32_t MACISR_MMCTXIS = 0x400; // MMCTXIS
    static constexpr uint32_t MACISR_TSIS = 0x1000; // TSIS
    static constexpr uint32_t MACISR_TXSTSIS = 0x2000; // TXSTSIS
    static constexpr uint32_t MACISR_RXSTSIS = 0x4000; // RXSTSIS

    static constexpr uint32_t MACIER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MACIER_PHYIE = 0x8; // PHYIE
    static constexpr uint32_t MACIER_PMTIE = 0x10; // PMTIE
    static constexpr uint32_t MACIER_LPIIE = 0x20; // LPIIE
    static constexpr uint32_t MACIER_TSIE = 0x1000; // TSIE
    static constexpr uint32_t MACIER_TXSTSIE = 0x2000; // TXSTSIE
    static constexpr uint32_t MACIER_RXSTSIE = 0x4000; // RXSTSIE

    static constexpr uint32_t MACRXTXSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MACRXTXSR_TJT = 0x1; // TJT
    static constexpr uint32_t MACRXTXSR_NCARR = 0x2; // NCARR
    static constexpr uint32_t MACRXTXSR_LCARR = 0x4; // LCARR
    static constexpr uint32_t MACRXTXSR_EXDEF = 0x8; // EXDEF
    static constexpr uint32_t MACRXTXSR_LCOL = 0x10; // LCOL
    static constexpr uint32_t MACRXTXSR_EXCOL = 0x20; // LCOL
    static constexpr uint32_t MACRXTXSR_RWT = 0x100; // RWT


    static constexpr uint32_t MACPCSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MACPCSR_PWRDWN = 0x1; // PWRDWN
    static constexpr uint32_t MACPCSR_MGKPKTEN = 0x2; // MGKPKTEN
    static constexpr uint32_t MACPCSR_RWKPKTEN = 0x4; // RWKPKTEN
    static constexpr uint32_t MACPCSR_MGKPRCVD = 0x20; // MGKPRCVD
    static constexpr uint32_t MACPCSR_RWKPRCVD = 0x40; // RWKPRCVD
    static constexpr uint32_t MACPCSR_GLBLUCAST = 0x200; // GLBLUCAST
    static constexpr uint32_t MACPCSR_RWKPFE = 0x400; // RWKPFE
    typedef bit_field_t<24, 0x1f> MACPCSR_RWKPTR; // RWKPTR
    static constexpr uint32_t MACPCSR_RWKFILTRST = 0x80000000; // RWKFILTRST

    static constexpr uint32_t MACRWKPFR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACRWKPFR_WKUPFRMFTR; // WKUPFRMFTR


    static constexpr uint32_t MACLCSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MACLCSR_TLPIEN = 0x1; // TLPIEN
    static constexpr uint32_t MACLCSR_TLPIEX = 0x2; // TLPIEX
    static constexpr uint32_t MACLCSR_RLPIEN = 0x4; // RLPIEN
    static constexpr uint32_t MACLCSR_RLPIEX = 0x8; // RLPIEX
    static constexpr uint32_t MACLCSR_TLPIST = 0x100; // TLPIST
    static constexpr uint32_t MACLCSR_RLPIST = 0x200; // RLPIST
    static constexpr uint32_t MACLCSR_LPIEN = 0x10000; // LPIEN
    static constexpr uint32_t MACLCSR_PLS = 0x20000; // PLS
    static constexpr uint32_t MACLCSR_PLSEN = 0x40000; // PLSEN
    static constexpr uint32_t MACLCSR_LPITXA = 0x80000; // LPITXA
    static constexpr uint32_t MACLCSR_LPITE = 0x100000; // LPITE
    static constexpr uint32_t MACLCSR_LPITCSE = 0x200000; // LPITCSE

    static constexpr uint32_t MACLTCR_RESET_VALUE = 0x3e80000; // Reset value
    typedef bit_field_t<0, 0xffff> MACLTCR_TWT; // TWT
    typedef bit_field_t<16, 0x3ff> MACLTCR_LST; // LST

    static constexpr uint32_t MACLETR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ffff> MACLETR_LPIET; // LPIET

    static constexpr uint32_t MAC1USTCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> MAC1USTCR_TIC_1US_CNTR; // TIC_1US_CNTR


    static constexpr uint32_t MACVR_RESET_VALUE = 0x3041; // Reset value
    typedef bit_field_t<0, 0xff> MACVR_SNPSVER; // SNPSVER
    typedef bit_field_t<8, 0xff> MACVR_USERVER; // USERVER

    static constexpr uint32_t MACDR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MACDR_RPESTS = 0x1; // RPESTS
    typedef bit_field_t<1, 0x3> MACDR_RFCFCSTS; // RFCFCSTS
    static constexpr uint32_t MACDR_TPESTS = 0x10000; // TPESTS
    typedef bit_field_t<17, 0x3> MACDR_TFCSTS; // TFCSTS


    static constexpr uint32_t MACHWF1R_RESET_VALUE = 0x11841904; // Reset value
    typedef bit_field_t<0, 0x1f> MACHWF1R_RXFIFOSIZE; // RXFIFOSIZE
    typedef bit_field_t<6, 0x1f> MACHWF1R_TXFIFOSIZE; // TXFIFOSIZE
    static constexpr uint32_t MACHWF1R_OSTEN = 0x800; // OSTEN
    static constexpr uint32_t MACHWF1R_PTOEN = 0x1000; // PTOEN
    static constexpr uint32_t MACHWF1R_ADVTHWORD = 0x2000; // ADVTHWORD
    static constexpr uint32_t MACHWF1R_DCBEN = 0x10000; // DCBEN
    static constexpr uint32_t MACHWF1R_SPHEN = 0x20000; // SPHEN
    static constexpr uint32_t MACHWF1R_TSOEN = 0x40000; // TSOEN
    static constexpr uint32_t MACHWF1R_DBGMEMA = 0x80000; // DBGMEMA
    static constexpr uint32_t MACHWF1R_AVSEL = 0x100000; // AVSEL
    typedef bit_field_t<24, 0x3> MACHWF1R_HASHTBLSZ; // HASHTBLSZ
    typedef bit_field_t<27, 0xf> MACHWF1R_L3L4FNUM; // L3L4FNUM

    static constexpr uint32_t MACHWF2R_RESET_VALUE = 0x41000000; // Reset value
    typedef bit_field_t<0, 0xf> MACHWF2R_RXQCNT; // RXQCNT
    typedef bit_field_t<6, 0xf> MACHWF2R_TXQCNT; // TXQCNT
    typedef bit_field_t<12, 0xf> MACHWF2R_RXCHCNT; // RXCHCNT
    typedef bit_field_t<18, 0xf> MACHWF2R_TXCHCNT; // TXCHCNT
    typedef bit_field_t<24, 0x7> MACHWF2R_PPSOUTNUM; // PPSOUTNUM
    typedef bit_field_t<28, 0x7> MACHWF2R_AUXSNAPNUM; // AUXSNAPNUM


    static constexpr uint32_t MACMDIOAR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MACMDIOAR_MB = 0x1; // MB
    static constexpr uint32_t MACMDIOAR_C45E = 0x2; // C45E
    typedef bit_field_t<2, 0x3> MACMDIOAR_GOC; // GOC
    static constexpr uint32_t MACMDIOAR_SKAP = 0x10; // SKAP
    typedef bit_field_t<8, 0xf> MACMDIOAR_CR; // CR
    typedef bit_field_t<12, 0x7> MACMDIOAR_NTC; // NTC
    typedef bit_field_t<16, 0x1f> MACMDIOAR_RDA; // RDA
    typedef bit_field_t<21, 0x1f> MACMDIOAR_PA; // PA
    static constexpr uint32_t MACMDIOAR_BTB = 0x4000000; // BTB
    static constexpr uint32_t MACMDIOAR_PSE = 0x8000000; // PSE

    static constexpr uint32_t MACMDIODR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MACMDIODR_MD; // MD
    typedef bit_field_t<16, 0xffff> MACMDIODR_RA; // RA


    static constexpr uint32_t MACA0HR_RESET_VALUE = 0x8000ffff; // Reset value
    typedef bit_field_t<0, 0xffff> MACA0HR_ADDRHI; // ADDRHI
    static constexpr uint32_t MACA0HR_AE = 0x80000000; // AE

    static constexpr uint32_t MACA0LR_RESET_VALUE = 0xffffffff; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACA0LR_ADDRLO; // ADDRLO

    static constexpr uint32_t MACA1HR_RESET_VALUE = 0xffff; // Reset value
    typedef bit_field_t<0, 0xffff> MACA1HR_ADDRHI; // ADDRHI
    typedef bit_field_t<24, 0x3f> MACA1HR_MBC; // MBC
    static constexpr uint32_t MACA1HR_SA = 0x40000000; // SA
    static constexpr uint32_t MACA1HR_AE = 0x80000000; // AE

    static constexpr uint32_t MACA1LR_RESET_VALUE = 0xffffffff; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACA1LR_ADDRLO; // ADDRLO

    static constexpr uint32_t MACA2HR_RESET_VALUE = 0xffff; // Reset value
    typedef bit_field_t<0, 0xffff> MACA2HR_ADDRHI; // ADDRHI
    typedef bit_field_t<24, 0x3f> MACA2HR_MBC; // MBC
    static constexpr uint32_t MACA2HR_SA = 0x40000000; // SA
    static constexpr uint32_t MACA2HR_AE = 0x80000000; // AE

    static constexpr uint32_t MACA2LR_RESET_VALUE = 0xffffffff; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACA2LR_ADDRLO; // ADDRLO

    static constexpr uint32_t MACA3HR_RESET_VALUE = 0xffff; // Reset value
    typedef bit_field_t<0, 0xffff> MACA3HR_ADDRHI; // ADDRHI
    typedef bit_field_t<24, 0x3f> MACA3HR_MBC; // MBC
    static constexpr uint32_t MACA3HR_SA = 0x40000000; // SA
    static constexpr uint32_t MACA3HR_AE = 0x80000000; // AE

    static constexpr uint32_t MACA3LR_RESET_VALUE = 0xffffffff; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACA3LR_ADDRLO; // ADDRLO


    static constexpr uint32_t MMC_CONTROL_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MMC_CONTROL_CNTRST = 0x1; // CNTRST
    static constexpr uint32_t MMC_CONTROL_CNTSTOPRO = 0x2; // CNTSTOPRO
    static constexpr uint32_t MMC_CONTROL_RSTONRD = 0x4; // RSTONRD
    static constexpr uint32_t MMC_CONTROL_CNTFREEZ = 0x8; // CNTFREEZ
    static constexpr uint32_t MMC_CONTROL_CNTPRST = 0x10; // CNTPRST
    static constexpr uint32_t MMC_CONTROL_CNTPRSTLVL = 0x20; // CNTPRSTLVL
    static constexpr uint32_t MMC_CONTROL_UCDBC = 0x100; // UCDBC

    static constexpr uint32_t MMC_RX_INTERRUPT_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MMC_RX_INTERRUPT_RXCRCERPIS = 0x20; // RXCRCERPIS
    static constexpr uint32_t MMC_RX_INTERRUPT_RXALGNERPIS = 0x40; // RXALGNERPIS
    static constexpr uint32_t MMC_RX_INTERRUPT_RXUCGPIS = 0x20000; // RXUCGPIS
    static constexpr uint32_t MMC_RX_INTERRUPT_RXLPIUSCIS = 0x4000000; // RXLPIUSCIS
    static constexpr uint32_t MMC_RX_INTERRUPT_RXLPITRCIS = 0x8000000; // RXLPITRCIS

    static constexpr uint32_t MMC_TX_INTERRUPT_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MMC_TX_INTERRUPT_TXSCOLGPIS = 0x4000; // TXSCOLGPIS
    static constexpr uint32_t MMC_TX_INTERRUPT_TXMCOLGPIS = 0x8000; // TXMCOLGPIS
    static constexpr uint32_t MMC_TX_INTERRUPT_TXGPKTIS = 0x200000; // TXGPKTIS
    static constexpr uint32_t MMC_TX_INTERRUPT_TXLPIUSCIS = 0x4000000; // TXLPIUSCIS
    static constexpr uint32_t MMC_TX_INTERRUPT_TXLPITRCIS = 0x8000000; // TXLPITRCIS

    static constexpr uint32_t MMC_RX_INTERRUPT_MASK_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MMC_RX_INTERRUPT_MASK_RXCRCERPIM = 0x20; // RXCRCERPIM
    static constexpr uint32_t MMC_RX_INTERRUPT_MASK_RXALGNERPIM = 0x40; // RXALGNERPIM
    static constexpr uint32_t MMC_RX_INTERRUPT_MASK_RXUCGPIM = 0x20000; // RXUCGPIM
    static constexpr uint32_t MMC_RX_INTERRUPT_MASK_RXLPIUSCIM = 0x4000000; // RXLPIUSCIM
    static constexpr uint32_t MMC_RX_INTERRUPT_MASK_RXLPITRCIM = 0x8000000; // RXLPITRCIM

    static constexpr uint32_t MMC_TX_INTERRUPT_MASK_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MMC_TX_INTERRUPT_MASK_TXSCOLGPIM = 0x4000; // TXSCOLGPIM
    static constexpr uint32_t MMC_TX_INTERRUPT_MASK_TXMCOLGPIM = 0x8000; // TXMCOLGPIM
    static constexpr uint32_t MMC_TX_INTERRUPT_MASK_TXGPKTIM = 0x200000; // TXGPKTIM
    static constexpr uint32_t MMC_TX_INTERRUPT_MASK_TXLPIUSCIM = 0x4000000; // TXLPIUSCIM
    static constexpr uint32_t MMC_TX_INTERRUPT_MASK_TXLPITRCIM = 0x8000000; // TXLPITRCIM


    static constexpr uint32_t TX_SINGLE_COLLISION_GOOD_PACKETS_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> TX_SINGLE_COLLISION_GOOD_PACKETS_TXSNGLCOLG; // TXSNGLCOLG

    static constexpr uint32_t TX_MULTIPLE_COLLISION_GOOD_PACKETS_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> TX_MULTIPLE_COLLISION_GOOD_PACKETS_TXMULTCOLG; // TXMULTCOLG


    static constexpr uint32_t TX_PACKET_COUNT_GOOD_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> TX_PACKET_COUNT_GOOD_TXPKTG; // TXPKTG


    static constexpr uint32_t RX_CRC_ERROR_PACKETS_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> RX_CRC_ERROR_PACKETS_RXCRCERR; // RXCRCERR

    static constexpr uint32_t RX_ALIGNMENT_ERROR_PACKETS_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> RX_ALIGNMENT_ERROR_PACKETS_RXALGNERR; // RXALGNERR


    static constexpr uint32_t RX_UNICAST_PACKETS_GOOD_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> RX_UNICAST_PACKETS_GOOD_RXUCASTG; // RXUCASTG


    static constexpr uint32_t TX_LPI_USEC_CNTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> TX_LPI_USEC_CNTR_TXLPIUSC; // TXLPIUSC

    static constexpr uint32_t TX_LPI_TRAN_CNTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> TX_LPI_TRAN_CNTR_TXLPITRC; // TXLPITRC

    static constexpr uint32_t RX_LPI_USEC_CNTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> RX_LPI_USEC_CNTR_RXLPIUSC; // RXLPIUSC

    static constexpr uint32_t RX_LPI_TRAN_CNTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> RX_LPI_TRAN_CNTR_RXLPITRC; // RXLPITRC


    static constexpr uint32_t MACL3L4C0R_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MACL3L4C0R_L3PEN0 = 0x1; // L3PEN0
    static constexpr uint32_t MACL3L4C0R_L3SAM0 = 0x4; // L3SAM0
    static constexpr uint32_t MACL3L4C0R_L3SAIM0 = 0x8; // L3SAIM0
    static constexpr uint32_t MACL3L4C0R_L3DAM0 = 0x10; // L3DAM0
    static constexpr uint32_t MACL3L4C0R_L3DAIM0 = 0x20; // L3DAIM0
    typedef bit_field_t<6, 0x1f> MACL3L4C0R_L3HSBM0; // L3HSBM0
    typedef bit_field_t<11, 0x1f> MACL3L4C0R_L3HDBM0; // L3HDBM0
    static constexpr uint32_t MACL3L4C0R_L4PEN0 = 0x10000; // L4PEN0
    static constexpr uint32_t MACL3L4C0R_L4SPM0 = 0x40000; // L4SPM0
    static constexpr uint32_t MACL3L4C0R_L4SPIM0 = 0x80000; // L4SPIM0
    static constexpr uint32_t MACL3L4C0R_L4DPM0 = 0x100000; // L4DPM0
    static constexpr uint32_t MACL3L4C0R_L4DPIM0 = 0x200000; // L4DPIM0

    static constexpr uint32_t MACL4A0R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MACL4A0R_L4SP0; // L4SP0
    typedef bit_field_t<16, 0xffff> MACL4A0R_L4DP0; // L4DP0


    static constexpr uint32_t MACL3A00R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACL3A00R_L3A00; // L3A00

    static constexpr uint32_t MACL3A10R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACL3A10R_L3A10; // L3A10

    static constexpr uint32_t MACL3A20_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACL3A20_L3A20; // L3A20

    static constexpr uint32_t MACL3A30_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACL3A30_L3A30; // L3A30


    static constexpr uint32_t MACL3L4C1R_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MACL3L4C1R_L3PEN1 = 0x1; // L3PEN1
    static constexpr uint32_t MACL3L4C1R_L3SAM1 = 0x4; // L3SAM1
    static constexpr uint32_t MACL3L4C1R_L3SAIM1 = 0x8; // L3SAIM1
    static constexpr uint32_t MACL3L4C1R_L3DAM1 = 0x10; // L3DAM1
    static constexpr uint32_t MACL3L4C1R_L3DAIM1 = 0x20; // L3DAIM1
    typedef bit_field_t<6, 0x1f> MACL3L4C1R_L3HSBM1; // L3HSBM1
    typedef bit_field_t<11, 0x1f> MACL3L4C1R_L3HDBM1; // L3HDBM1
    static constexpr uint32_t MACL3L4C1R_L4PEN1 = 0x10000; // L4PEN1
    static constexpr uint32_t MACL3L4C1R_L4SPM1 = 0x40000; // L4SPM1
    static constexpr uint32_t MACL3L4C1R_L4SPIM1 = 0x80000; // L4SPIM1
    static constexpr uint32_t MACL3L4C1R_L4DPM1 = 0x100000; // L4DPM1
    static constexpr uint32_t MACL3L4C1R_L4DPIM1 = 0x200000; // L4DPIM1

    static constexpr uint32_t MACL4A1R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MACL4A1R_L4SP1; // L4SP1
    typedef bit_field_t<16, 0xffff> MACL4A1R_L4DP1; // L4DP1


    static constexpr uint32_t MACL3A01R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACL3A01R_L3A01; // L3A01

    static constexpr uint32_t MACL3A11R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACL3A11R_L3A11; // L3A11

    static constexpr uint32_t MACL3A21R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACL3A21R_L3A21; // L3A21

    static constexpr uint32_t MACL3A31R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACL3A31R_L3A31; // L3A31


    static constexpr uint32_t MACARPAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACARPAR_ARPPA; // ARPPA


    static constexpr uint32_t MACTSCR_RESET_VALUE = 0x200; // Reset value
    static constexpr uint32_t MACTSCR_TSENA = 0x1; // TSENA
    static constexpr uint32_t MACTSCR_TSCFUPDT = 0x2; // TSCFUPDT
    static constexpr uint32_t MACTSCR_TSINIT = 0x4; // TSINIT
    static constexpr uint32_t MACTSCR_TSUPDT = 0x8; // TSUPDT
    static constexpr uint32_t MACTSCR_TSADDREG = 0x20; // TSADDREG
    static constexpr uint32_t MACTSCR_TSENALL = 0x100; // TSENALL
    static constexpr uint32_t MACTSCR_TSCTRLSSR = 0x200; // TSCTRLSSR
    static constexpr uint32_t MACTSCR_TSVER2ENA = 0x400; // TSVER2ENA
    static constexpr uint32_t MACTSCR_TSIPENA = 0x800; // TSIPENA
    static constexpr uint32_t MACTSCR_TSIPV6ENA = 0x1000; // TSIPV6ENA
    static constexpr uint32_t MACTSCR_TSIPV4ENA = 0x2000; // TSIPV4ENA
    static constexpr uint32_t MACTSCR_TSEVNTENA = 0x4000; // TSEVNTENA
    static constexpr uint32_t MACTSCR_TSMSTRENA = 0x8000; // TSMSTRENA
    typedef bit_field_t<16, 0x3> MACTSCR_SNAPTYPSEL; // SNAPTYPSEL
    static constexpr uint32_t MACTSCR_TSENMACADDR = 0x40000; // TSENMACADDR
    static constexpr uint32_t MACTSCR_CSC = 0x80000; // CSC
    static constexpr uint32_t MACTSCR_TXTSSTSM = 0x1000000; // TXTSSTSM

    static constexpr uint32_t MACSSIR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xff> MACSSIR_SNSINC; // SNSINC
    typedef bit_field_t<16, 0xff> MACSSIR_SSINC; // SSINC

    static constexpr uint32_t MACSTSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACSTSR_TSS; // TSS

    static constexpr uint32_t MACSTNR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7fffffff> MACSTNR_TSSS; // TSSS

    static constexpr uint32_t MACSTSUR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACSTSUR_TSS; // TSS

    static constexpr uint32_t MACSTNUR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7fffffff> MACSTNUR_TSSS; // TSSS
    static constexpr uint32_t MACSTNUR_ADDSUB = 0x80000000; // ADDSUB

    static constexpr uint32_t MACTSAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACTSAR_TSAR; // TSAR


    static constexpr uint32_t MACTSSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MACTSSR_TSSOVF = 0x1; // TSSOVF
    static constexpr uint32_t MACTSSR_TSTARGT0 = 0x2; // TSTARGT0
    static constexpr uint32_t MACTSSR_AUXTSTRIG = 0x4; // AUXTSTRIG
    static constexpr uint32_t MACTSSR_TSTRGTERR0 = 0x8; // TSTRGTERR0
    static constexpr uint32_t MACTSSR_TXTSSIS = 0x8000; // TXTSSIS
    typedef bit_field_t<16, 0xf> MACTSSR_ATSSTN; // ATSSTN
    static constexpr uint32_t MACTSSR_ATSSTM = 0x1000000; // ATSSTM
    typedef bit_field_t<25, 0x1f> MACTSSR_ATSNS; // ATSNS


    static constexpr uint32_t MACTXTSSNR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7fffffff> MACTXTSSNR_TXTSSLO; // TXTSSLO
    static constexpr uint32_t MACTXTSSNR_TXTSSMIS = 0x80000000; // TXTSSMIS

    static constexpr uint32_t MACTXTSSSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACTXTSSSR_TXTSSHI; // TXTSSHI


    static constexpr uint32_t MACACR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MACACR_ATSFC = 0x1; // ATSFC
    static constexpr uint32_t MACACR_ATSEN0 = 0x10; // ATSEN0
    static constexpr uint32_t MACACR_ATSEN1 = 0x20; // ATSEN1
    static constexpr uint32_t MACACR_ATSEN2 = 0x40; // ATSEN2
    static constexpr uint32_t MACACR_ATSEN3 = 0x80; // ATSEN3


    static constexpr uint32_t MACATSNR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7fffffff> MACATSNR_AUXTSLO; // AUXTSLO

    static constexpr uint32_t MACATSSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACATSSR_AUXTSHI; // AUXTSHI

    static constexpr uint32_t MACTSIACR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACTSIACR_OSTIAC; // OSTIAC

    static constexpr uint32_t MACTSEACR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACTSEACR_OSTEAC; // OSTEAC

    static constexpr uint32_t MACTSICNR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACTSICNR_TSIC; // TSIC

    static constexpr uint32_t MACTSECNR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACTSECNR_TSEC; // TSEC


    static constexpr uint32_t MACPPSCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> MACPPSCR_PPSCTRL; // PPSCTRL
    static constexpr uint32_t MACPPSCR_PPSEN0 = 0x10; // PPSEN0
    typedef bit_field_t<5, 0x3> MACPPSCR_TRGTMODSEL0; // TRGTMODSEL0


    static constexpr uint32_t MACPPSTTSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7fffffff> MACPPSTTSR_TSTRH0; // TSTRH0

    static constexpr uint32_t MACPPSTTNR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7fffffff> MACPPSTTNR_TTSL0; // TTSL0
    static constexpr uint32_t MACPPSTTNR_TRGTBUSY0 = 0x80000000; // TRGTBUSY0

    static constexpr uint32_t MACPPSIR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACPPSIR_PPSINT0; // PPSINT0

    static constexpr uint32_t MACPPSWR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACPPSWR_PPSWIDTH0; // PPSWIDTH0


    static constexpr uint32_t MACPOCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MACPOCR_PTOEN = 0x1; // PTOEN
    static constexpr uint32_t MACPOCR_ASYNCEN = 0x2; // ASYNCEN
    static constexpr uint32_t MACPOCR_APDREQEN = 0x4; // APDREQEN
    static constexpr uint32_t MACPOCR_ASYNCTRIG = 0x10; // ASYNCTRIG
    static constexpr uint32_t MACPOCR_APDREQTRIG = 0x20; // APDREQTRIG
    static constexpr uint32_t MACPOCR_DRRDIS = 0x40; // DRRDIS
    typedef bit_field_t<8, 0xff> MACPOCR_DN; // DN

    static constexpr uint32_t MACSPI0R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACSPI0R_SPI0; // SPI0

    static constexpr uint32_t MACSPI1R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACSPI1R_SPI1; // SPI1

    static constexpr uint32_t MACSPI2R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MACSPI2R_SPI2; // SPI2

    static constexpr uint32_t MACLMIR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> MACLMIR_LSI; // LSI
    typedef bit_field_t<8, 0x7> MACLMIR_DRSYNCR; // DRSYNCR
    typedef bit_field_t<24, 0xff> MACLMIR_LMPDRI; // LMPDRI


    static constexpr uint32_t MTLOMR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MTLOMR_DTXSTS = 0x2; // DTXSTS
    static constexpr uint32_t MTLOMR_CNTPRST = 0x100; // CNTPRST
    static constexpr uint32_t MTLOMR_CNTCLR = 0x200; // CNTCLR


    static constexpr uint32_t MTLISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MTLISR_Q0IS = 0x1; // Queue interrupt status


    static constexpr uint32_t MTLTXQOMR_RESET_VALUE = 0x70008; // Reset value
    static constexpr uint32_t MTLTXQOMR_FTQ = 0x1; // Flush Transmit Queue
    static constexpr uint32_t MTLTXQOMR_TSF = 0x2; // Transmit Store and Forward
    typedef bit_field_t<2, 0x3> MTLTXQOMR_TXQEN; // Transmit Queue Enable
    typedef bit_field_t<4, 0x7> MTLTXQOMR_TTC; // Transmit Threshold Control
    typedef bit_field_t<16, 0x1ff> MTLTXQOMR_TQS; // Transmit Queue Size

    static constexpr uint32_t MTLTXQUR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> MTLTXQUR_UFFRMCNT; // Underflow Packet Counter
    static constexpr uint32_t MTLTXQUR_UFCNTOVF = 0x800; // UFCNTOVF

    static constexpr uint32_t MTLTXQDR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MTLTXQDR_TXQPAUSED = 0x1; // TXQPAUSED
    typedef bit_field_t<1, 0x3> MTLTXQDR_TRCSTS; // TRCSTS
    static constexpr uint32_t MTLTXQDR_TWCSTS = 0x8; // TWCSTS
    static constexpr uint32_t MTLTXQDR_TXQSTS = 0x10; // TXQSTS
    static constexpr uint32_t MTLTXQDR_TXSTSFSTS = 0x20; // TXSTSFSTS
    typedef bit_field_t<16, 0x7> MTLTXQDR_PTXQ; // PTXQ
    typedef bit_field_t<20, 0x7> MTLTXQDR_STXSTSF; // STXSTSF


    static constexpr uint32_t MTLQICSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MTLQICSR_TXUNFIS = 0x1; // TXUNFIS
    static constexpr uint32_t MTLQICSR_TXUIE = 0x100; // TXUIE
    static constexpr uint32_t MTLQICSR_RXOVFIS = 0x10000; // RXOVFIS
    static constexpr uint32_t MTLQICSR_RXOIE = 0x1000000; // RXOIE

    static constexpr uint32_t MTLRXQOMR_RESET_VALUE = 0x700000; // Reset value
    typedef bit_field_t<0, 0x3> MTLRXQOMR_RTC; // RTC
    static constexpr uint32_t MTLRXQOMR_FUP = 0x8; // FUP
    static constexpr uint32_t MTLRXQOMR_FEP = 0x10; // FEP
    static constexpr uint32_t MTLRXQOMR_RSF = 0x20; // RSF
    static constexpr uint32_t MTLRXQOMR_DIS_TCP_EF = 0x40; // DIS_TCP_EF
    static constexpr uint32_t MTLRXQOMR_EHFC = 0x80; // EHFC
    typedef bit_field_t<8, 0x7> MTLRXQOMR_RFA; // RFA
    typedef bit_field_t<14, 0x7> MTLRXQOMR_RFD; // RFD
    typedef bit_field_t<20, 0x7> MTLRXQOMR_RQS; // RQS

    static constexpr uint32_t MTLRXQMPOCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> MTLRXQMPOCR_OVFPKTCNT; // OVFPKTCNT
    static constexpr uint32_t MTLRXQMPOCR_OVFCNTOVF = 0x800; // OVFCNTOVF
    typedef bit_field_t<16, 0x7ff> MTLRXQMPOCR_MISPKTCNT; // MISPKTCNT
    static constexpr uint32_t MTLRXQMPOCR_MISCNTOVF = 0x8000000; // MISCNTOVF

    static constexpr uint32_t MTLRXQDR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MTLRXQDR_RWCSTS = 0x1; // RWCSTS
    typedef bit_field_t<1, 0x3> MTLRXQDR_RRCSTS; // RRCSTS
    typedef bit_field_t<4, 0x3> MTLRXQDR_RXQSTS; // RXQSTS
    typedef bit_field_t<16, 0x3fff> MTLRXQDR_PRXQ; // PRXQ


    static constexpr uint32_t DMAMR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DMAMR_SWR = 0x1; // Software Reset
    static constexpr uint32_t DMAMR_DA = 0x2; // DMA Tx or Rx Arbitration Scheme
    static constexpr uint32_t DMAMR_TXPR = 0x800; // Transmit priority
    typedef bit_field_t<12, 0x7> DMAMR_PR; // Priority ratio
    static constexpr uint32_t DMAMR_INTM = 0x10000; // Interrupt Mode

    static constexpr uint32_t DMASBMR_RESET_VALUE = 0x1010000; // Reset value
    static constexpr uint32_t DMASBMR_FB = 0x1; // Fixed Burst Length
    static constexpr uint32_t DMASBMR_AAL = 0x1000; // Address-Aligned Beats
    static constexpr uint32_t DMASBMR_MB = 0x4000; // Mixed Burst
    static constexpr uint32_t DMASBMR_RB = 0x8000; // Rebuild INCRx Burst

    static constexpr uint32_t DMAISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DMAISR_DC0IS = 0x1; // DMA Channel Interrupt Status
    static constexpr uint32_t DMAISR_MTLIS = 0x10000; // MTL Interrupt Status
    static constexpr uint32_t DMAISR_MACIS = 0x20000; // MAC Interrupt Status

    static constexpr uint32_t DMADSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DMADSR_AXWHSTS = 0x1; // AHB Master Write Channel
    typedef bit_field_t<8, 0xf> DMADSR_RPS0; // DMA Channel Receive Process State
    typedef bit_field_t<12, 0xf> DMADSR_TPS0; // DMA Channel Transmit Process State


    static constexpr uint32_t DMACCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3fff> DMACCR_MSS; // Maximum Segment Size
    static constexpr uint32_t DMACCR_PBLX8 = 0x10000; // 8xPBL mode
    typedef bit_field_t<18, 0x7> DMACCR_DSL; // Descriptor Skip Length

    static constexpr uint32_t DMACTXCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DMACTXCR_ST = 0x1; // Start or Stop Transmission Command
    static constexpr uint32_t DMACTXCR_OSF = 0x10; // Operate on Second Packet
    static constexpr uint32_t DMACTXCR_TSE = 0x1000; // TCP Segmentation Enabled
    typedef bit_field_t<16, 0x3f> DMACTXCR_TXPBL; // Transmit Programmable Burst Length

    static constexpr uint32_t DMACRXCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DMACRXCR_SR = 0x1; // Start or Stop Receive Command
    typedef bit_field_t<1, 0x3fff> DMACRXCR_RBSZ; // Receive Buffer size
    typedef bit_field_t<16, 0x3f> DMACRXCR_RXPBL; // RXPBL
    static constexpr uint32_t DMACRXCR_RPF = 0x80000000; // DMA Rx Channel Packet Flush


    static constexpr uint32_t DMACTXDLAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<2, 0x3fffffff> DMACTXDLAR_TDESLA; // Start of Transmit List


    static constexpr uint32_t DMACRXDLAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<2, 0x3fffffff> DMACRXDLAR_RDESLA; // Start of Receive List

    static constexpr uint32_t DMACTXDTPR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<2, 0x3fffffff> DMACTXDTPR_TDT; // Transmit Descriptor Tail Pointer


    static constexpr uint32_t DMACRXDTPR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<2, 0x3fffffff> DMACRXDTPR_RDT; // Receive Descriptor Tail Pointer

    static constexpr uint32_t DMACTXRLR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ff> DMACTXRLR_TDRL; // Transmit Descriptor Ring Length

    static constexpr uint32_t DMACRXRLR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ff> DMACRXRLR_RDRL; // Receive Descriptor Ring Length

    static constexpr uint32_t DMACIER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DMACIER_TIE = 0x1; // Transmit Interrupt Enable
    static constexpr uint32_t DMACIER_TXSE = 0x2; // Transmit Stopped Enable
    static constexpr uint32_t DMACIER_TBUE = 0x4; // Transmit Buffer Unavailable Enable
    static constexpr uint32_t DMACIER_RIE = 0x40; // Receive Interrupt Enable
    static constexpr uint32_t DMACIER_RBUE = 0x80; // Receive Buffer Unavailable Enable
    static constexpr uint32_t DMACIER_RSE = 0x100; // Receive Stopped Enable
    static constexpr uint32_t DMACIER_RWTE = 0x200; // Receive Watchdog Timeout Enable
    static constexpr uint32_t DMACIER_ETIE = 0x400; // Early Transmit Interrupt Enable
    static constexpr uint32_t DMACIER_ERIE = 0x800; // Early Receive Interrupt Enable
    static constexpr uint32_t DMACIER_FBEE = 0x1000; // Fatal Bus Error Enable
    static constexpr uint32_t DMACIER_CDEE = 0x2000; // Context Descriptor Error Enable
    static constexpr uint32_t DMACIER_AIE = 0x4000; // Abnormal Interrupt Summary Enable
    static constexpr uint32_t DMACIER_NIE = 0x8000; // Normal Interrupt Summary Enable

    static constexpr uint32_t DMACRXIWTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DMACRXIWTR_RWT; // Receive Interrupt Watchdog Timer Count


    static constexpr uint32_t DMACCATXDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DMACCATXDR_CURTDESAPTR; // Application Transmit Descriptor Address Pointer


    static constexpr uint32_t DMACCARXDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DMACCARXDR_CURRDESAPTR; // Application Receive Descriptor Address Pointer


    static constexpr uint32_t DMACCATXBR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DMACCATXBR_CURTBUFAPTR; // Application Transmit Buffer Address Pointer


    static constexpr uint32_t DMACCARXBR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DMACCARXBR_CURRBUFAPTR; // Application Receive Buffer Address Pointer

    static constexpr uint32_t DMACSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DMACSR_TI = 0x1; // Transmit Interrupt
    static constexpr uint32_t DMACSR_TPS = 0x2; // Transmit Process Stopped
    static constexpr uint32_t DMACSR_TBU = 0x4; // Transmit Buffer Unavailable
    static constexpr uint32_t DMACSR_RI = 0x40; // Receive Interrupt
    static constexpr uint32_t DMACSR_RBU = 0x80; // Receive Buffer Unavailable
    static constexpr uint32_t DMACSR_RPS = 0x100; // Receive Process Stopped
    static constexpr uint32_t DMACSR_RWT = 0x200; // Receive Watchdog Timeout
    static constexpr uint32_t DMACSR_ET = 0x400; // Early Transmit Interrupt
    static constexpr uint32_t DMACSR_ER = 0x800; // Early Receive Interrupt
    static constexpr uint32_t DMACSR_FBE = 0x1000; // Fatal Bus Error
    static constexpr uint32_t DMACSR_CDE = 0x2000; // Context Descriptor Error
    static constexpr uint32_t DMACSR_AIS = 0x4000; // Abnormal Interrupt Summary
    static constexpr uint32_t DMACSR_NIS = 0x8000; // Normal Interrupt Summary
    typedef bit_field_t<16, 0x7> DMACSR_TEB; // Tx DMA Error Bits
    typedef bit_field_t<19, 0x7> DMACSR_REB; // Rx DMA Error Bits


    static constexpr uint32_t DMACMFCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> DMACMFCR_MFC; // Dropped Packet Counters
    static constexpr uint32_t DMACMFCR_MFCO = 0x8000; // Overflow status of the MFC Counter
};

// ETHERNET_MAC: Ethernet: media access control (MAC)

struct stm32h742x_ethernet_mac_t
{
    volatile uint32_t MACCR; // Operating mode configuration register
    volatile uint32_t MACECR; // Extended operating mode configuration register
    volatile uint32_t MACPFR; // Packet filtering control register
    volatile uint32_t MACWTR; // Watchdog timeout register
    volatile uint32_t MACHT0R; // Hash Table 0 register
    volatile uint32_t MACHT1R; // Hash Table 1 register
    reserved_t<0xe> _0x18;
    volatile uint32_t MACVTR; // VLAN tag register
    reserved_t<0x1> _0x54;
    volatile uint32_t MACVHTR; // VLAN Hash table register
    reserved_t<0x1> _0x5c;
    volatile uint32_t MACVIR; // VLAN inclusion register
    volatile uint32_t MACIVIR; // Inner VLAN inclusion register
    reserved_t<0x2> _0x68;
    volatile uint32_t MACQTXFCR; // Tx Queue flow control register
    reserved_t<0x7> _0x74;
    volatile uint32_t MACRXFCR; // Rx flow control register
    reserved_t<0x7> _0x94;
    volatile uint32_t MACISR; // Interrupt status register
    volatile uint32_t MACIER; // Interrupt enable register
    volatile uint32_t MACRXTXSR; // Rx Tx status register
    reserved_t<0x1> _0xbc;
    volatile uint32_t MACPCSR; // PMT control status register
    volatile uint32_t MACRWKPFR; // Remove wakeup packet filter register
    reserved_t<0x2> _0xc8;
    volatile uint32_t MACLCSR; // LPI control status register
    volatile uint32_t MACLTCR; // LPI timers control register
    volatile uint32_t MACLETR; // LPI entry timer register
    volatile uint32_t MAC1USTCR; // 1-microsecond-tick counter register
    reserved_t<0xc> _0xe0;
    volatile uint32_t MACVR; // Version register
    volatile uint32_t MACDR; // Debug register
    reserved_t<0x2> _0x118;
    volatile uint32_t MACHWF1R; // HW feature 1 register
    volatile uint32_t MACHWF2R; // HW feature 2 register
    reserved_t<0x36> _0x128;
    volatile uint32_t MACMDIOAR; // MDIO address register
    volatile uint32_t MACMDIODR; // MDIO data register
    reserved_t<0x3e> _0x208;
    volatile uint32_t MACA0HR; // Address 0 high register
    volatile uint32_t MACA0LR; // Address 0 low register
    volatile uint32_t MACA1HR; // Address 1 high register
    volatile uint32_t MACA1LR; // Address 1 low register
    volatile uint32_t MACA2HR; // Address 2 high register
    volatile uint32_t MACA2LR; // Address 2 low register
    volatile uint32_t MACA3HR; // Address 3 high register
    volatile uint32_t MACA3LR; // Address 3 low register
    reserved_t<0xf8> _0x320;
    volatile uint32_t MMC_CONTROL; // MMC control register
    volatile uint32_t MMC_RX_INTERRUPT; // MMC Rx interrupt register
    volatile uint32_t MMC_TX_INTERRUPT; // MMC Tx interrupt register
    volatile uint32_t MMC_RX_INTERRUPT_MASK; // MMC Rx interrupt mask register
    volatile uint32_t MMC_TX_INTERRUPT_MASK; // MMC Tx interrupt mask register
    reserved_t<0xe> _0x714;
    volatile uint32_t TX_SINGLE_COLLISION_GOOD_PACKETS; // Tx single collision good packets register
    volatile uint32_t TX_MULTIPLE_COLLISION_GOOD_PACKETS; // Tx multiple collision good packets register
    reserved_t<0x5> _0x754;
    volatile uint32_t TX_PACKET_COUNT_GOOD; // Tx packet count good register
    reserved_t<0xa> _0x76c;
    volatile uint32_t RX_CRC_ERROR_PACKETS; // Rx CRC error packets register
    volatile uint32_t RX_ALIGNMENT_ERROR_PACKETS; // Rx alignment error packets register
    reserved_t<0xa> _0x79c;
    volatile uint32_t RX_UNICAST_PACKETS_GOOD; // Rx unicast packets good register
    reserved_t<0x9> _0x7c8;
    volatile uint32_t TX_LPI_USEC_CNTR; // Tx LPI microsecond timer register
    volatile uint32_t TX_LPI_TRAN_CNTR; // Tx LPI transition counter register
    volatile uint32_t RX_LPI_USEC_CNTR; // Rx LPI microsecond counter register
    volatile uint32_t RX_LPI_TRAN_CNTR; // Rx LPI transition counter register
    reserved_t<0x41> _0x7fc;
    volatile uint32_t MACL3L4C0R; // L3 and L4 control 0 register
    volatile uint32_t MACL4A0R; // Layer4 address filter 0 register
    reserved_t<0x2> _0x908;
    volatile uint32_t MACL3A00R; // MACL3A00R
    volatile uint32_t MACL3A10R; // Layer3 address 1 filter 0 register
    volatile uint32_t MACL3A20; // Layer3 Address 2 filter 0 register
    volatile uint32_t MACL3A30; // Layer3 Address 3 filter 0 register
    reserved_t<0x4> _0x920;
    volatile uint32_t MACL3L4C1R; // L3 and L4 control 1 register
    volatile uint32_t MACL4A1R; // Layer 4 address filter 1 register
    reserved_t<0x2> _0x938;
    volatile uint32_t MACL3A01R; // Layer3 address 0 filter 1 Register
    volatile uint32_t MACL3A11R; // Layer3 address 1 filter 1 register
    volatile uint32_t MACL3A21R; // Layer3 address 2 filter 1 Register
    volatile uint32_t MACL3A31R; // Layer3 address 3 filter 1 register
    reserved_t<0x64> _0x950;
    volatile uint32_t MACARPAR; // ARP address register
    reserved_t<0x7> _0xae4;
    volatile uint32_t MACTSCR; // Timestamp control Register
    volatile uint32_t MACSSIR; // Sub-second increment register
    volatile uint32_t MACSTSR; // System time seconds register
    volatile uint32_t MACSTNR; // System time nanoseconds register
    volatile uint32_t MACSTSUR; // System time seconds update register
    volatile uint32_t MACSTNUR; // System time nanoseconds update register
    volatile uint32_t MACTSAR; // Timestamp addend register
    reserved_t<0x1> _0xb1c;
    volatile uint32_t MACTSSR; // Timestamp status register
    reserved_t<0x3> _0xb24;
    volatile uint32_t MACTXTSSNR; // Tx timestamp status nanoseconds register
    volatile uint32_t MACTXTSSSR; // Tx timestamp status seconds register
    reserved_t<0x2> _0xb38;
    volatile uint32_t MACACR; // Auxiliary control register
    reserved_t<0x1> _0xb44;
    volatile uint32_t MACATSNR; // Auxiliary timestamp nanoseconds register
    volatile uint32_t MACATSSR; // Auxiliary timestamp seconds register
    volatile uint32_t MACTSIACR; // Timestamp Ingress asymmetric correction register
    volatile uint32_t MACTSEACR; // Timestamp Egress asymmetric correction register
    volatile uint32_t MACTSICNR; // Timestamp Ingress correction nanosecond register
    volatile uint32_t MACTSECNR; // Timestamp Egress correction nanosecond register
    reserved_t<0x4> _0xb60;
    volatile uint32_t MACPPSCR; // PPS control register
    reserved_t<0x3> _0xb74;
    volatile uint32_t MACPPSTTSR; // PPS target time seconds register
    volatile uint32_t MACPPSTTNR; // PPS target time nanoseconds register
    volatile uint32_t MACPPSIR; // PPS interval register
    volatile uint32_t MACPPSWR; // PPS width register
    reserved_t<0xc> _0xb90;
    volatile uint32_t MACPOCR; // PTP Offload control register
    volatile uint32_t MACSPI0R; // PTP Source Port Identity 0 Register
    volatile uint32_t MACSPI1R; // PTP Source port identity 1 register
    volatile uint32_t MACSPI2R; // PTP Source port identity 2 register
    volatile uint32_t MACLMIR; // Log message interval register

    static constexpr uint32_t MACCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MACCR_RE = 0x1; // Receiver Enable
    static constexpr uint32_t MACCR_TE = 0x2; // TE
    typedef bit_field_t<2, 0x3> MACCR_PRELEN; // PRELEN
    static constexpr uint32_t MACCR_DC = 0x10; // DC
    typedef bit_field_t<5, 0x3> MACCR_BL; // BL
    static constexpr uint32_t MACCR_DR = 0x100; // DR
    static constexpr uint32_t MACCR_DCRS = 0x200; // DCRS
    static constexpr uint32_t MACCR_DO = 0x400; // DO
    static constexpr uint32_t MACCR_ECRSFD = 0x800; // ECRSFD
    static constexpr uint32_t MACCR_LM = 0x1000; // LM
    static constexpr uint32_t MACCR_DM = 0x2000; // DM
    static constexpr uint32_t MACCR_FES = 0x4000; // FES
    static constexpr uint32_t MACCR_JE = 0x10000; // JE
    static constexpr uint32_t MACCR_JD = 0x20000; // JD
    static constexpr uint32_t MACCR_WD = 0x80000; // WD
    static constexpr uint32_t MACCR_ACS = 0x100000; // ACS
    static constexpr uint32_t MACCR_CST = 0x200000; // CST
    static constexpr uint32_t MACCR_S2KP = 0x400000; // S2KP
    static constexpr uint32_t MACCR_GPSLCE = 0x800000; // GPSLCE
    typedef bit_field_t<24, 0x7> MACCR_IPG; // IPG
    static constexpr uint32_t MACCR_IPC = 0x8000000; // IPC
    typedef bit_field_t<28, 0x7> MACCR_SARC; // SARC
    static constexpr uint32_t MACCR_ARPEN = 0x80000000; // ARPEN

    static constexpr uint32_t MACECR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3fff> MACECR_GPSL; // GPSL
    static constexpr uint32_t MACECR_DCRCC = 0x10000; // DCRCC
    static constexpr uint32_t MACECR_SPEN = 0x20000; // SPEN
    static constexpr uint32_t MACECR_USP = 0x40000; // USP
    static constexpr uint32_t MACECR_EIPGEN = 0x1000000; // EIPGEN
    typedef bit_field_t<25, 0x1f> MACECR_EIPG; // EIPG

    static constexpr uint32_t MACPFR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MACPFR_PR = 0x1; // PR
    static constexpr uint32_t MACPFR_HUC = 0x2; // HUC
    static constexpr uint32_t MACPFR_HMC = 0x4; // HMC
    static constexpr uint32_t MACPFR_DAIF = 0x8; // DAIF
    static constexpr uint32_t MACPFR_PM = 0x10; // PM
    static constexpr uint32_t MACPFR_DBF = 0x20; // DBF
    typedef bit_field_t<6, 0x3> MACPFR_PCF; // PCF
    static constexpr uint32_t MACPFR_SAIF = 0x100; // SAIF
    static constexpr uint32_t MACPFR_SAF = 0x200; // SAF
    static constexpr uint32_t MACPFR_HPF = 0x400; // HPF
    static constexpr uint32_t MACPFR_VTFE = 0x10000; // VTFE
    static constexpr uint32_t MACPFR_IPFE = 0x100000; // IPFE
    static constexpr uint32_t MACPFR_DNTU = 0x200000; // DNTU
    static constexpr uint32_t MACPFR_RA = 0x80000000; // RA

    static constexpr uint32_t MACWTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> MACWTR_WTO; // WTO
    static constexpr uint32_t MACWTR_PWE = 0x100; // PWE

    static constexpr uint32_t MACHT0R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACHT0R_HT31T0; // HT31T0

    static constexpr uint32_t MACHT1R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACHT1R_HT63T32; // HT63T32


    static constexpr uint32_t MACVTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MACVTR_VL; // VL
    static constexpr uint32_t MACVTR_ETV = 0x10000; // ETV
    static constexpr uint32_t MACVTR_VTIM = 0x20000; // VTIM
    static constexpr uint32_t MACVTR_ESVL = 0x40000; // ESVL
    static constexpr uint32_t MACVTR_ERSVLM = 0x80000; // ERSVLM
    static constexpr uint32_t MACVTR_DOVLTC = 0x100000; // DOVLTC
    typedef bit_field_t<21, 0x3> MACVTR_EVLS; // EVLS
    static constexpr uint32_t MACVTR_EVLRXS = 0x1000000; // EVLRXS
    static constexpr uint32_t MACVTR_VTHM = 0x2000000; // VTHM
    static constexpr uint32_t MACVTR_EDVLP = 0x4000000; // EDVLP
    static constexpr uint32_t MACVTR_ERIVLT = 0x8000000; // ERIVLT
    typedef bit_field_t<28, 0x3> MACVTR_EIVLS; // EIVLS
    static constexpr uint32_t MACVTR_EIVLRXS = 0x80000000; // EIVLRXS


    static constexpr uint32_t MACVHTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MACVHTR_VLHT; // VLHT


    static constexpr uint32_t MACVIR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MACVIR_VLT; // VLT
    typedef bit_field_t<16, 0x3> MACVIR_VLC; // VLC
    static constexpr uint32_t MACVIR_VLP = 0x40000; // VLP
    static constexpr uint32_t MACVIR_CSVL = 0x80000; // CSVL
    static constexpr uint32_t MACVIR_VLTI = 0x100000; // VLTI

    static constexpr uint32_t MACIVIR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MACIVIR_VLT; // VLT
    typedef bit_field_t<16, 0x3> MACIVIR_VLC; // VLC
    static constexpr uint32_t MACIVIR_VLP = 0x40000; // VLP
    static constexpr uint32_t MACIVIR_CSVL = 0x80000; // CSVL
    static constexpr uint32_t MACIVIR_VLTI = 0x100000; // VLTI


    static constexpr uint32_t MACQTXFCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MACQTXFCR_FCB_BPA = 0x1; // FCB_BPA
    static constexpr uint32_t MACQTXFCR_TFE = 0x2; // TFE
    typedef bit_field_t<4, 0x7> MACQTXFCR_PLT; // PLT
    static constexpr uint32_t MACQTXFCR_DZPQ = 0x80; // DZPQ
    typedef bit_field_t<16, 0xffff> MACQTXFCR_PT; // PT


    static constexpr uint32_t MACRXFCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MACRXFCR_RFE = 0x1; // RFE
    static constexpr uint32_t MACRXFCR_UP = 0x2; // UP


    static constexpr uint32_t MACISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MACISR_PHYIS = 0x8; // PHYIS
    static constexpr uint32_t MACISR_PMTIS = 0x10; // PMTIS
    static constexpr uint32_t MACISR_LPIIS = 0x20; // LPIIS
    static constexpr uint32_t MACISR_MMCIS = 0x100; // MMCIS
    static constexpr uint32_t MACISR_MMCRXIS = 0x200; // MMCRXIS
    static constexpr uint32_t MACISR_MMCTXIS = 0x400; // MMCTXIS
    static constexpr uint32_t MACISR_TSIS = 0x1000; // TSIS
    static constexpr uint32_t MACISR_TXSTSIS = 0x2000; // TXSTSIS
    static constexpr uint32_t MACISR_RXSTSIS = 0x4000; // RXSTSIS

    static constexpr uint32_t MACIER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MACIER_PHYIE = 0x8; // PHYIE
    static constexpr uint32_t MACIER_PMTIE = 0x10; // PMTIE
    static constexpr uint32_t MACIER_LPIIE = 0x20; // LPIIE
    static constexpr uint32_t MACIER_TSIE = 0x1000; // TSIE
    static constexpr uint32_t MACIER_TXSTSIE = 0x2000; // TXSTSIE
    static constexpr uint32_t MACIER_RXSTSIE = 0x4000; // RXSTSIE

    static constexpr uint32_t MACRXTXSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MACRXTXSR_TJT = 0x1; // TJT
    static constexpr uint32_t MACRXTXSR_NCARR = 0x2; // NCARR
    static constexpr uint32_t MACRXTXSR_LCARR = 0x4; // LCARR
    static constexpr uint32_t MACRXTXSR_EXDEF = 0x8; // EXDEF
    static constexpr uint32_t MACRXTXSR_LCOL = 0x10; // LCOL
    static constexpr uint32_t MACRXTXSR_EXCOL = 0x20; // LCOL
    static constexpr uint32_t MACRXTXSR_RWT = 0x100; // RWT


    static constexpr uint32_t MACPCSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MACPCSR_PWRDWN = 0x1; // PWRDWN
    static constexpr uint32_t MACPCSR_MGKPKTEN = 0x2; // MGKPKTEN
    static constexpr uint32_t MACPCSR_RWKPKTEN = 0x4; // RWKPKTEN
    static constexpr uint32_t MACPCSR_MGKPRCVD = 0x20; // MGKPRCVD
    static constexpr uint32_t MACPCSR_RWKPRCVD = 0x40; // RWKPRCVD
    static constexpr uint32_t MACPCSR_GLBLUCAST = 0x200; // GLBLUCAST
    static constexpr uint32_t MACPCSR_RWKPFE = 0x400; // RWKPFE
    typedef bit_field_t<24, 0x1f> MACPCSR_RWKPTR; // RWKPTR
    static constexpr uint32_t MACPCSR_RWKFILTRST = 0x80000000; // RWKFILTRST

    static constexpr uint32_t MACRWKPFR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACRWKPFR_MACRWKPFR; // MACRWKPFR


    static constexpr uint32_t MACLCSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MACLCSR_TLPIEN = 0x1; // TLPIEN
    static constexpr uint32_t MACLCSR_TLPIEX = 0x2; // TLPIEX
    static constexpr uint32_t MACLCSR_RLPIEN = 0x4; // RLPIEN
    static constexpr uint32_t MACLCSR_RLPIEX = 0x8; // RLPIEX
    static constexpr uint32_t MACLCSR_TLPIST = 0x100; // TLPIST
    static constexpr uint32_t MACLCSR_RLPIST = 0x200; // RLPIST
    static constexpr uint32_t MACLCSR_LPIEN = 0x10000; // LPIEN
    static constexpr uint32_t MACLCSR_PLS = 0x20000; // PLS
    static constexpr uint32_t MACLCSR_PLSEN = 0x40000; // PLSEN
    static constexpr uint32_t MACLCSR_LPITXA = 0x80000; // LPITXA
    static constexpr uint32_t MACLCSR_LPITE = 0x100000; // LPITE

    static constexpr uint32_t MACLTCR_RESET_VALUE = 0x3e80000; // Reset value
    typedef bit_field_t<0, 0xffff> MACLTCR_TWT; // TWT
    typedef bit_field_t<16, 0x3ff> MACLTCR_LST; // LST

    static constexpr uint32_t MACLETR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ffff> MACLETR_LPIET; // LPIET

    static constexpr uint32_t MAC1USTCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> MAC1USTCR_TIC_1US_CNTR; // TIC_1US_CNTR


    static constexpr uint32_t MACVR_RESET_VALUE = 0x3041; // Reset value
    typedef bit_field_t<0, 0xff> MACVR_SNPSVER; // SNPSVER
    typedef bit_field_t<8, 0xff> MACVR_USERVER; // USERVER

    static constexpr uint32_t MACDR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MACDR_RPESTS = 0x1; // RPESTS
    typedef bit_field_t<1, 0x3> MACDR_RFCFCSTS; // RFCFCSTS
    static constexpr uint32_t MACDR_TPESTS = 0x10000; // TPESTS
    typedef bit_field_t<17, 0x3> MACDR_TFCSTS; // TFCSTS


    static constexpr uint32_t MACHWF1R_RESET_VALUE = 0x11841904; // Reset value
    typedef bit_field_t<0, 0x1f> MACHWF1R_RXFIFOSIZE; // RXFIFOSIZE
    typedef bit_field_t<6, 0x1f> MACHWF1R_TXFIFOSIZE; // TXFIFOSIZE
    static constexpr uint32_t MACHWF1R_OSTEN = 0x800; // OSTEN
    static constexpr uint32_t MACHWF1R_PTOEN = 0x1000; // PTOEN
    static constexpr uint32_t MACHWF1R_ADVTHWORD = 0x2000; // ADVTHWORD
    typedef bit_field_t<14, 0x3> MACHWF1R_ADDR64; // ADDR64
    static constexpr uint32_t MACHWF1R_DCBEN = 0x10000; // DCBEN
    static constexpr uint32_t MACHWF1R_SPHEN = 0x20000; // SPHEN
    static constexpr uint32_t MACHWF1R_TSOEN = 0x40000; // TSOEN
    static constexpr uint32_t MACHWF1R_DBGMEMA = 0x80000; // DBGMEMA
    static constexpr uint32_t MACHWF1R_AVSEL = 0x100000; // AVSEL
    typedef bit_field_t<24, 0x3> MACHWF1R_HASHTBLSZ; // HASHTBLSZ
    typedef bit_field_t<27, 0xf> MACHWF1R_L3L4FNUM; // L3L4FNUM

    static constexpr uint32_t MACHWF2R_RESET_VALUE = 0x41000000; // Reset value
    typedef bit_field_t<0, 0xf> MACHWF2R_RXQCNT; // RXQCNT
    typedef bit_field_t<6, 0xf> MACHWF2R_TXQCNT; // TXQCNT
    typedef bit_field_t<12, 0xf> MACHWF2R_RXCHCNT; // RXCHCNT
    typedef bit_field_t<18, 0xf> MACHWF2R_TXCHCNT; // TXCHCNT
    typedef bit_field_t<24, 0x7> MACHWF2R_PPSOUTNUM; // PPSOUTNUM
    typedef bit_field_t<28, 0x7> MACHWF2R_AUXSNAPNUM; // AUXSNAPNUM


    static constexpr uint32_t MACMDIOAR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MACMDIOAR_MB = 0x1; // MB
    static constexpr uint32_t MACMDIOAR_C45E = 0x2; // C45E
    typedef bit_field_t<2, 0x3> MACMDIOAR_GOC; // GOC
    static constexpr uint32_t MACMDIOAR_SKAP = 0x10; // SKAP
    typedef bit_field_t<8, 0xf> MACMDIOAR_CR; // CR
    typedef bit_field_t<12, 0x7> MACMDIOAR_NTC; // NTC
    typedef bit_field_t<16, 0x1f> MACMDIOAR_RDA; // RDA
    typedef bit_field_t<21, 0x1f> MACMDIOAR_PA; // PA
    static constexpr uint32_t MACMDIOAR_BTB = 0x4000000; // BTB
    static constexpr uint32_t MACMDIOAR_PSE = 0x8000000; // PSE

    static constexpr uint32_t MACMDIODR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MACMDIODR_MD; // MD
    typedef bit_field_t<16, 0xffff> MACMDIODR_RA; // RA


    static constexpr uint32_t MACA0HR_RESET_VALUE = 0x8000ffff; // Reset value
    typedef bit_field_t<0, 0xffff> MACA0HR_ADDRHI; // ADDRHI
    static constexpr uint32_t MACA0HR_AE = 0x80000000; // AE

    static constexpr uint32_t MACA0LR_RESET_VALUE = 0xffffffff; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACA0LR_ADDRLO; // ADDRLO

    static constexpr uint32_t MACA1HR_RESET_VALUE = 0xffff; // Reset value
    typedef bit_field_t<0, 0xffff> MACA1HR_ADDRHI; // ADDRHI
    typedef bit_field_t<24, 0x3f> MACA1HR_MBC; // MBC
    static constexpr uint32_t MACA1HR_SA = 0x40000000; // SA
    static constexpr uint32_t MACA1HR_AE = 0x80000000; // AE

    static constexpr uint32_t MACA1LR_RESET_VALUE = 0xffffffff; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACA1LR_ADDRLO; // ADDRLO

    static constexpr uint32_t MACA2HR_RESET_VALUE = 0xffff; // Reset value
    typedef bit_field_t<0, 0xffff> MACA2HR_ADDRHI; // ADDRHI
    typedef bit_field_t<24, 0x3f> MACA2HR_MBC; // MBC
    static constexpr uint32_t MACA2HR_SA = 0x40000000; // SA
    static constexpr uint32_t MACA2HR_AE = 0x80000000; // AE

    static constexpr uint32_t MACA2LR_RESET_VALUE = 0xffffffff; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACA2LR_ADDRLO; // ADDRLO

    static constexpr uint32_t MACA3HR_RESET_VALUE = 0xffff; // Reset value
    typedef bit_field_t<0, 0xffff> MACA3HR_ADDRHI; // ADDRHI
    typedef bit_field_t<24, 0x3f> MACA3HR_MBC; // MBC
    static constexpr uint32_t MACA3HR_SA = 0x40000000; // SA
    static constexpr uint32_t MACA3HR_AE = 0x80000000; // AE

    static constexpr uint32_t MACA3LR_RESET_VALUE = 0xffffffff; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACA3LR_ADDRLO; // ADDRLO


    static constexpr uint32_t MMC_CONTROL_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MMC_CONTROL_CNTRST = 0x1; // CNTRST
    static constexpr uint32_t MMC_CONTROL_CNTSTOPRO = 0x2; // CNTSTOPRO
    static constexpr uint32_t MMC_CONTROL_RSTONRD = 0x4; // RSTONRD
    static constexpr uint32_t MMC_CONTROL_CNTFREEZ = 0x8; // CNTFREEZ
    static constexpr uint32_t MMC_CONTROL_CNTPRST = 0x10; // CNTPRST
    static constexpr uint32_t MMC_CONTROL_CNTPRSTLVL = 0x20; // CNTPRSTLVL
    static constexpr uint32_t MMC_CONTROL_UCDBC = 0x100; // UCDBC

    static constexpr uint32_t MMC_RX_INTERRUPT_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MMC_RX_INTERRUPT_RXCRCERPIS = 0x20; // RXCRCERPIS
    static constexpr uint32_t MMC_RX_INTERRUPT_RXALGNERPIS = 0x40; // RXALGNERPIS
    static constexpr uint32_t MMC_RX_INTERRUPT_RXUCGPIS = 0x20000; // RXUCGPIS
    static constexpr uint32_t MMC_RX_INTERRUPT_RXLPIUSCIS = 0x4000000; // RXLPIUSCIS
    static constexpr uint32_t MMC_RX_INTERRUPT_RXLPITRCIS = 0x8000000; // RXLPITRCIS

    static constexpr uint32_t MMC_TX_INTERRUPT_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MMC_TX_INTERRUPT_TXSCOLGPIS = 0x4000; // TXSCOLGPIS
    static constexpr uint32_t MMC_TX_INTERRUPT_TXMCOLGPIS = 0x8000; // TXMCOLGPIS
    static constexpr uint32_t MMC_TX_INTERRUPT_TXGPKTIS = 0x200000; // TXGPKTIS
    static constexpr uint32_t MMC_TX_INTERRUPT_TXLPIUSCIS = 0x4000000; // TXLPIUSCIS
    static constexpr uint32_t MMC_TX_INTERRUPT_TXLPITRCIS = 0x8000000; // TXLPITRCIS

    static constexpr uint32_t MMC_RX_INTERRUPT_MASK_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MMC_RX_INTERRUPT_MASK_RXCRCERPIM = 0x20; // RXCRCERPIM
    static constexpr uint32_t MMC_RX_INTERRUPT_MASK_RXALGNERPIM = 0x40; // RXALGNERPIM
    static constexpr uint32_t MMC_RX_INTERRUPT_MASK_RXUCGPIM = 0x20000; // RXUCGPIM
    static constexpr uint32_t MMC_RX_INTERRUPT_MASK_RXLPIUSCIM = 0x4000000; // RXLPIUSCIM
    static constexpr uint32_t MMC_RX_INTERRUPT_MASK_RXLPITRCIM = 0x8000000; // RXLPITRCIM

    static constexpr uint32_t MMC_TX_INTERRUPT_MASK_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MMC_TX_INTERRUPT_MASK_TXSCOLGPIM = 0x4000; // TXSCOLGPIM
    static constexpr uint32_t MMC_TX_INTERRUPT_MASK_TXMCOLGPIM = 0x8000; // TXMCOLGPIM
    static constexpr uint32_t MMC_TX_INTERRUPT_MASK_TXGPKTIM = 0x200000; // TXGPKTIM
    static constexpr uint32_t MMC_TX_INTERRUPT_MASK_TXLPIUSCIM = 0x4000000; // TXLPIUSCIM
    static constexpr uint32_t MMC_TX_INTERRUPT_MASK_TXLPITRCIM = 0x8000000; // TXLPITRCIM


    static constexpr uint32_t TX_SINGLE_COLLISION_GOOD_PACKETS_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> TX_SINGLE_COLLISION_GOOD_PACKETS_TXSNGLCOLG; // TXSNGLCOLG

    static constexpr uint32_t TX_MULTIPLE_COLLISION_GOOD_PACKETS_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> TX_MULTIPLE_COLLISION_GOOD_PACKETS_TXMULTCOLG; // TXMULTCOLG


    static constexpr uint32_t TX_PACKET_COUNT_GOOD_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> TX_PACKET_COUNT_GOOD_TXPKTG; // TXPKTG


    static constexpr uint32_t RX_CRC_ERROR_PACKETS_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> RX_CRC_ERROR_PACKETS_RXCRCERR; // RXCRCERR

    static constexpr uint32_t RX_ALIGNMENT_ERROR_PACKETS_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> RX_ALIGNMENT_ERROR_PACKETS_RXALGNERR; // RXALGNERR


    static constexpr uint32_t RX_UNICAST_PACKETS_GOOD_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> RX_UNICAST_PACKETS_GOOD_RXUCASTG; // RXUCASTG


    static constexpr uint32_t TX_LPI_USEC_CNTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> TX_LPI_USEC_CNTR_TXLPIUSC; // TXLPIUSC

    static constexpr uint32_t TX_LPI_TRAN_CNTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> TX_LPI_TRAN_CNTR_TXLPITRC; // TXLPITRC

    static constexpr uint32_t RX_LPI_USEC_CNTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> RX_LPI_USEC_CNTR_RXLPIUSC; // RXLPIUSC

    static constexpr uint32_t RX_LPI_TRAN_CNTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> RX_LPI_TRAN_CNTR_RXLPITRC; // RXLPITRC


    static constexpr uint32_t MACL3L4C0R_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MACL3L4C0R_L3PEN0 = 0x1; // L3PEN0
    static constexpr uint32_t MACL3L4C0R_L3SAM0 = 0x4; // L3SAM0
    static constexpr uint32_t MACL3L4C0R_L3SAIM0 = 0x8; // L3SAIM0
    static constexpr uint32_t MACL3L4C0R_L3DAM0 = 0x10; // L3DAM0
    static constexpr uint32_t MACL3L4C0R_L3DAIM0 = 0x20; // L3DAIM0
    typedef bit_field_t<6, 0x1f> MACL3L4C0R_L3HSBM0; // L3HSBM0
    typedef bit_field_t<11, 0x1f> MACL3L4C0R_L3HDBM0; // L3HDBM0
    static constexpr uint32_t MACL3L4C0R_L4PEN0 = 0x10000; // L4PEN0
    static constexpr uint32_t MACL3L4C0R_L4SPM0 = 0x40000; // L4SPM0
    static constexpr uint32_t MACL3L4C0R_L4SPIM0 = 0x80000; // L4SPIM0
    static constexpr uint32_t MACL3L4C0R_L4DPM0 = 0x100000; // L4DPM0
    static constexpr uint32_t MACL3L4C0R_L4DPIM0 = 0x200000; // L4DPIM0

    static constexpr uint32_t MACL4A0R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MACL4A0R_L4SP0; // L4SP0
    typedef bit_field_t<16, 0xffff> MACL4A0R_L4DP0; // L4DP0


    static constexpr uint32_t MACL3A00R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACL3A00R_L3A00; // L3A00

    static constexpr uint32_t MACL3A10R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACL3A10R_L3A10; // L3A10

    static constexpr uint32_t MACL3A20_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACL3A20_L3A20; // L3A20

    static constexpr uint32_t MACL3A30_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACL3A30_L3A30; // L3A30


    static constexpr uint32_t MACL3L4C1R_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MACL3L4C1R_L3PEN1 = 0x1; // L3PEN1
    static constexpr uint32_t MACL3L4C1R_L3SAM1 = 0x4; // L3SAM1
    static constexpr uint32_t MACL3L4C1R_L3SAIM1 = 0x8; // L3SAIM1
    static constexpr uint32_t MACL3L4C1R_L3DAM1 = 0x10; // L3DAM1
    static constexpr uint32_t MACL3L4C1R_L3DAIM1 = 0x20; // L3DAIM1
    typedef bit_field_t<6, 0x1f> MACL3L4C1R_L3HSBM1; // L3HSBM1
    typedef bit_field_t<11, 0x1f> MACL3L4C1R_L3HDBM1; // L3HDBM1
    static constexpr uint32_t MACL3L4C1R_L4PEN1 = 0x10000; // L4PEN1
    static constexpr uint32_t MACL3L4C1R_L4SPM1 = 0x40000; // L4SPM1
    static constexpr uint32_t MACL3L4C1R_L4SPIM1 = 0x80000; // L4SPIM1
    static constexpr uint32_t MACL3L4C1R_L4DPM1 = 0x100000; // L4DPM1
    static constexpr uint32_t MACL3L4C1R_L4DPIM1 = 0x200000; // L4DPIM1

    static constexpr uint32_t MACL4A1R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MACL4A1R_L4SP1; // L4SP1
    typedef bit_field_t<16, 0xffff> MACL4A1R_L4DP1; // L4DP1


    static constexpr uint32_t MACL3A01R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACL3A01R_L3A01; // L3A01

    static constexpr uint32_t MACL3A11R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACL3A11R_L3A11; // L3A11

    static constexpr uint32_t MACL3A21R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACL3A21R_L3A21; // L3A21

    static constexpr uint32_t MACL3A31R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACL3A31R_L3A31; // L3A31


    static constexpr uint32_t MACARPAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACARPAR_ARPPA; // ARPPA


    static constexpr uint32_t MACTSCR_RESET_VALUE = 0x200; // Reset value
    static constexpr uint32_t MACTSCR_TSENA = 0x1; // TSENA
    static constexpr uint32_t MACTSCR_TSCFUPDT = 0x2; // TSCFUPDT
    static constexpr uint32_t MACTSCR_TSINIT = 0x4; // TSINIT
    static constexpr uint32_t MACTSCR_TSUPDT = 0x8; // TSUPDT
    static constexpr uint32_t MACTSCR_TSADDREG = 0x20; // TSADDREG
    static constexpr uint32_t MACTSCR_TSENALL = 0x100; // TSENALL
    static constexpr uint32_t MACTSCR_TSCTRLSSR = 0x200; // TSCTRLSSR
    static constexpr uint32_t MACTSCR_TSVER2ENA = 0x400; // TSVER2ENA
    static constexpr uint32_t MACTSCR_TSIPENA = 0x800; // TSIPENA
    static constexpr uint32_t MACTSCR_TSIPV6ENA = 0x1000; // TSIPV6ENA
    static constexpr uint32_t MACTSCR_TSIPV4ENA = 0x2000; // TSIPV4ENA
    static constexpr uint32_t MACTSCR_TSEVNTENA = 0x4000; // TSEVNTENA
    static constexpr uint32_t MACTSCR_TSMSTRENA = 0x8000; // TSMSTRENA
    typedef bit_field_t<16, 0x3> MACTSCR_SNAPTYPSEL; // SNAPTYPSEL
    static constexpr uint32_t MACTSCR_TSENMACADDR = 0x40000; // TSENMACADDR
    static constexpr uint32_t MACTSCR_CSC = 0x80000; // CSC
    static constexpr uint32_t MACTSCR_TXTSSTSM = 0x1000000; // TXTSSTSM

    static constexpr uint32_t MACSSIR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xff> MACSSIR_SNSINC; // SNSINC
    typedef bit_field_t<16, 0xff> MACSSIR_SSINC; // SSINC

    static constexpr uint32_t MACSTSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACSTSR_TSS; // TSS

    static constexpr uint32_t MACSTNR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7fffffff> MACSTNR_TSSS; // TSSS

    static constexpr uint32_t MACSTSUR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACSTSUR_TSS; // TSS

    static constexpr uint32_t MACSTNUR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7fffffff> MACSTNUR_TSSS; // TSSS
    static constexpr uint32_t MACSTNUR_ADDSUB = 0x80000000; // ADDSUB

    static constexpr uint32_t MACTSAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACTSAR_TSAR; // TSAR


    static constexpr uint32_t MACTSSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MACTSSR_TSSOVF = 0x1; // TSSOVF
    static constexpr uint32_t MACTSSR_TSTARGT0 = 0x2; // TSTARGT0
    static constexpr uint32_t MACTSSR_AUXTSTRIG = 0x4; // AUXTSTRIG
    static constexpr uint32_t MACTSSR_TSTRGTERR0 = 0x8; // TSTRGTERR0
    static constexpr uint32_t MACTSSR_TXTSSIS = 0x8000; // TXTSSIS
    typedef bit_field_t<16, 0xf> MACTSSR_ATSSTN; // ATSSTN
    static constexpr uint32_t MACTSSR_ATSSTM = 0x1000000; // ATSSTM
    typedef bit_field_t<25, 0x1f> MACTSSR_ATSNS; // ATSNS


    static constexpr uint32_t MACTXTSSNR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7fffffff> MACTXTSSNR_TXTSSLO; // TXTSSLO
    static constexpr uint32_t MACTXTSSNR_TXTSSMIS = 0x80000000; // TXTSSMIS

    static constexpr uint32_t MACTXTSSSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACTXTSSSR_TXTSSHI; // TXTSSHI


    static constexpr uint32_t MACACR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MACACR_ATSFC = 0x1; // ATSFC
    static constexpr uint32_t MACACR_ATSEN0 = 0x10; // ATSEN0
    static constexpr uint32_t MACACR_ATSEN1 = 0x20; // ATSEN1
    static constexpr uint32_t MACACR_ATSEN2 = 0x40; // ATSEN2
    static constexpr uint32_t MACACR_ATSEN3 = 0x80; // ATSEN3


    static constexpr uint32_t MACATSNR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7fffffff> MACATSNR_AUXTSLO; // AUXTSLO

    static constexpr uint32_t MACATSSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACATSSR_AUXTSHI; // AUXTSHI

    static constexpr uint32_t MACTSIACR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACTSIACR_OSTIAC; // OSTIAC

    static constexpr uint32_t MACTSEACR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACTSEACR_OSTEAC; // OSTEAC

    static constexpr uint32_t MACTSICNR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACTSICNR_TSIC; // TSIC

    static constexpr uint32_t MACTSECNR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACTSECNR_TSEC; // TSEC


    static constexpr uint32_t MACPPSCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> MACPPSCR_PPSCTRL; // PPSCTRL
    static constexpr uint32_t MACPPSCR_PPSEN0 = 0x10; // PPSEN0
    typedef bit_field_t<5, 0x3> MACPPSCR_TRGTMODSEL0; // TRGTMODSEL0


    static constexpr uint32_t MACPPSTTSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7fffffff> MACPPSTTSR_TSTRH0; // TSTRH0

    static constexpr uint32_t MACPPSTTNR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7fffffff> MACPPSTTNR_TTSL0; // TTSL0
    static constexpr uint32_t MACPPSTTNR_TRGTBUSY0 = 0x80000000; // TRGTBUSY0

    static constexpr uint32_t MACPPSIR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACPPSIR_PPSINT0; // PPSINT0

    static constexpr uint32_t MACPPSWR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACPPSWR_PPSWIDTH0; // PPSWIDTH0


    static constexpr uint32_t MACPOCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MACPOCR_PTOEN = 0x1; // PTOEN
    static constexpr uint32_t MACPOCR_ASYNCEN = 0x2; // ASYNCEN
    static constexpr uint32_t MACPOCR_APDREQEN = 0x4; // APDREQEN
    static constexpr uint32_t MACPOCR_ASYNCTRIG = 0x10; // ASYNCTRIG
    static constexpr uint32_t MACPOCR_APDREQTRIG = 0x20; // APDREQTRIG
    static constexpr uint32_t MACPOCR_DRRDIS = 0x40; // DRRDIS
    typedef bit_field_t<8, 0xff> MACPOCR_DN; // DN

    static constexpr uint32_t MACSPI0R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACSPI0R_SPI0; // SPI0

    static constexpr uint32_t MACSPI1R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACSPI1R_SPI1; // SPI1

    static constexpr uint32_t MACSPI2R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MACSPI2R_SPI2; // SPI2

    static constexpr uint32_t MACLMIR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> MACLMIR_LSI; // LSI
    typedef bit_field_t<8, 0x7> MACLMIR_DRSYNCR; // DRSYNCR
    typedef bit_field_t<24, 0xff> MACLMIR_LMPDRI; // LMPDRI
};

// ETHERNET_MAC: Ethernet: media access control (MAC)

struct stm32h750x_ethernet_mac_t
{
    volatile uint32_t DMAMR; // DMA mode register
    volatile uint32_t DMASBMR; // System bus mode register
    volatile uint32_t DMAISR; // Interrupt status register
    volatile uint32_t DMADSR; // Debug status register
    reserved_t<0x3c> _0x10;
    volatile uint32_t DMACCR; // Channel control register
    volatile uint32_t DMACTXCR; // Channel transmit control register
    volatile uint32_t DMACRXCR; // Channel receive control register
    reserved_t<0x2> _0x10c;
    volatile uint32_t DMACTXDLAR; // Channel Tx descriptor list address register
    reserved_t<0x1> _0x118;
    volatile uint32_t DMACRXDLAR; // Channel Rx descriptor list address register
    volatile uint32_t DMACTXDTPR; // Channel Tx descriptor tail pointer register
    reserved_t<0x1> _0x124;
    volatile uint32_t DMACRXDTPR; // Channel Rx descriptor tail pointer register
    volatile uint32_t DMACTXRLR; // Channel Tx descriptor ring length register
    volatile uint32_t DMACRXRLR; // Channel Rx descriptor ring length register
    volatile uint32_t DMACIER; // Channel interrupt enable register
    volatile uint32_t DMACRXIWTR; // Channel Rx interrupt watchdog timer register
    reserved_t<0x2> _0x13c;
    volatile uint32_t DMACCATXDR; // Channel current application transmit descriptor register
    reserved_t<0x1> _0x148;
    volatile uint32_t DMACCARXDR; // Channel current application receive descriptor register
    reserved_t<0x1> _0x150;
    volatile uint32_t DMACCATXBR; // Channel current application transmit buffer register
    reserved_t<0x1> _0x158;
    volatile uint32_t DMACCARXBR; // Channel current application receive buffer register
    volatile uint32_t DMACSR; // Channel status register
    reserved_t<0x2> _0x164;
    volatile uint32_t DMACMFCR; // Channel missed frame count register

    static constexpr uint32_t DMAMR_RESET_VALUE = 0x8000; // Reset value
    static constexpr uint32_t DMAMR_SWR = 0x1; // Software Reset
    static constexpr uint32_t DMAMR_DA = 0x2; // DMA Tx or Rx Arbitration Scheme
    static constexpr uint32_t DMAMR_TXPR = 0x800; // Transmit priority
    typedef bit_field_t<12, 0x7> DMAMR_PR; // Priority ratio
    static constexpr uint32_t DMAMR_INTM = 0x10000; // Interrupt Mode

    static constexpr uint32_t DMASBMR_RESET_VALUE = 0x8000; // Reset value
    static constexpr uint32_t DMASBMR_FB = 0x1; // Fixed Burst Length
    static constexpr uint32_t DMASBMR_AAL = 0x1000; // Address-Aligned Beats
    static constexpr uint32_t DMASBMR_MB = 0x4000; // Mixed Burst
    static constexpr uint32_t DMASBMR_RB = 0x8000; // Rebuild INCRx Burst

    static constexpr uint32_t DMAISR_RESET_VALUE = 0x8000; // Reset value
    static constexpr uint32_t DMAISR_DC0IS = 0x1; // DMA Channel Interrupt Status
    static constexpr uint32_t DMAISR_MTLIS = 0x10000; // MTL Interrupt Status
    static constexpr uint32_t DMAISR_MACIS = 0x20000; // MAC Interrupt Status

    static constexpr uint32_t DMADSR_RESET_VALUE = 0x8000; // Reset value
    static constexpr uint32_t DMADSR_AXWHSTS = 0x1; // AHB Master Write Channel
    typedef bit_field_t<8, 0xf> DMADSR_RPS0; // DMA Channel Receive Process State
    typedef bit_field_t<12, 0xf> DMADSR_TPS0; // DMA Channel Transmit Process State


    static constexpr uint32_t DMACCR_RESET_VALUE = 0x8000; // Reset value
    typedef bit_field_t<0, 0x3fff> DMACCR_MSS; // Maximum Segment Size
    static constexpr uint32_t DMACCR_PBLX8 = 0x10000; // 8xPBL mode
    typedef bit_field_t<18, 0x7> DMACCR_DSL; // Descriptor Skip Length

    static constexpr uint32_t DMACTXCR_RESET_VALUE = 0x8000; // Reset value
    static constexpr uint32_t DMACTXCR_ST = 0x1; // Start or Stop Transmission Command
    static constexpr uint32_t DMACTXCR_OSF = 0x10; // Operate on Second Packet
    static constexpr uint32_t DMACTXCR_TSE = 0x1000; // TCP Segmentation Enabled
    typedef bit_field_t<16, 0x3f> DMACTXCR_TXPBL; // Transmit Programmable Burst Length

    static constexpr uint32_t DMACRXCR_RESET_VALUE = 0x8000; // Reset value
    static constexpr uint32_t DMACRXCR_SR = 0x1; // Start or Stop Receive Command
    typedef bit_field_t<1, 0x3fff> DMACRXCR_RBSZ; // Receive Buffer size
    typedef bit_field_t<16, 0x3f> DMACRXCR_RXPBL; // RXPBL
    static constexpr uint32_t DMACRXCR_RPF = 0x80000000; // DMA Rx Channel Packet Flush


    static constexpr uint32_t DMACTXDLAR_RESET_VALUE = 0x8000; // Reset value
    typedef bit_field_t<2, 0x3fffffff> DMACTXDLAR_TDESLA; // Start of Transmit List


    static constexpr uint32_t DMACRXDLAR_RESET_VALUE = 0x8000; // Reset value
    typedef bit_field_t<2, 0x3fffffff> DMACRXDLAR_RDESLA; // Start of Receive List

    static constexpr uint32_t DMACTXDTPR_RESET_VALUE = 0x8000; // Reset value
    typedef bit_field_t<2, 0x3fffffff> DMACTXDTPR_TDT; // Transmit Descriptor Tail Pointer


    static constexpr uint32_t DMACRXDTPR_RESET_VALUE = 0x8000; // Reset value
    typedef bit_field_t<2, 0x3fffffff> DMACRXDTPR_RDT; // Receive Descriptor Tail Pointer

    static constexpr uint32_t DMACTXRLR_RESET_VALUE = 0x8000; // Reset value
    typedef bit_field_t<0, 0x3ff> DMACTXRLR_TDRL; // Transmit Descriptor Ring Length

    static constexpr uint32_t DMACRXRLR_RESET_VALUE = 0x8000; // Reset value
    typedef bit_field_t<0, 0x3ff> DMACRXRLR_RDRL; // Receive Descriptor Ring Length

    static constexpr uint32_t DMACIER_RESET_VALUE = 0x8000; // Reset value
    static constexpr uint32_t DMACIER_TIE = 0x1; // Transmit Interrupt Enable
    static constexpr uint32_t DMACIER_TXSE = 0x2; // Transmit Stopped Enable
    static constexpr uint32_t DMACIER_TBUE = 0x4; // Transmit Buffer Unavailable Enable
    static constexpr uint32_t DMACIER_RIE = 0x40; // Receive Interrupt Enable
    static constexpr uint32_t DMACIER_RBUE = 0x80; // Receive Buffer Unavailable Enable
    static constexpr uint32_t DMACIER_RSE = 0x100; // Receive Stopped Enable
    static constexpr uint32_t DMACIER_RWTE = 0x200; // Receive Watchdog Timeout Enable
    static constexpr uint32_t DMACIER_ETIE = 0x400; // Early Transmit Interrupt Enable
    static constexpr uint32_t DMACIER_ERIE = 0x800; // Early Receive Interrupt Enable
    static constexpr uint32_t DMACIER_FBEE = 0x1000; // Fatal Bus Error Enable
    static constexpr uint32_t DMACIER_CDEE = 0x2000; // Context Descriptor Error Enable
    static constexpr uint32_t DMACIER_AIE = 0x4000; // Abnormal Interrupt Summary Enable
    static constexpr uint32_t DMACIER_NIE = 0x8000; // Normal Interrupt Summary Enable

    static constexpr uint32_t DMACRXIWTR_RESET_VALUE = 0x8000; // Reset value
    typedef bit_field_t<0, 0xff> DMACRXIWTR_RWT; // Receive Interrupt Watchdog Timer Count


    static constexpr uint32_t DMACCATXDR_RESET_VALUE = 0x8000; // Reset value
    typedef bit_field_t<0, 0xffffffff> DMACCATXDR_CURTDESAPTR; // Application Transmit Descriptor Address Pointer


    static constexpr uint32_t DMACCARXDR_RESET_VALUE = 0x8000; // Reset value
    typedef bit_field_t<0, 0xffffffff> DMACCARXDR_CURRDESAPTR; // Application Receive Descriptor Address Pointer


    static constexpr uint32_t DMACCATXBR_RESET_VALUE = 0x8000; // Reset value
    typedef bit_field_t<0, 0xffffffff> DMACCATXBR_CURTBUFAPTR; // Application Transmit Buffer Address Pointer


    static constexpr uint32_t DMACCARXBR_RESET_VALUE = 0x8000; // Reset value
    typedef bit_field_t<0, 0xffffffff> DMACCARXBR_CURRBUFAPTR; // Application Receive Buffer Address Pointer

    static constexpr uint32_t DMACSR_RESET_VALUE = 0x8000; // Reset value
    static constexpr uint32_t DMACSR_TI = 0x1; // Transmit Interrupt
    static constexpr uint32_t DMACSR_TPS = 0x2; // Transmit Process Stopped
    static constexpr uint32_t DMACSR_TBU = 0x4; // Transmit Buffer Unavailable
    static constexpr uint32_t DMACSR_RI = 0x40; // Receive Interrupt
    static constexpr uint32_t DMACSR_RBU = 0x80; // Receive Buffer Unavailable
    static constexpr uint32_t DMACSR_RPS = 0x100; // Receive Process Stopped
    static constexpr uint32_t DMACSR_RWT = 0x200; // Receive Watchdog Timeout
    static constexpr uint32_t DMACSR_ET = 0x400; // Early Transmit Interrupt
    static constexpr uint32_t DMACSR_ER = 0x800; // Early Receive Interrupt
    static constexpr uint32_t DMACSR_FBE = 0x1000; // Fatal Bus Error
    static constexpr uint32_t DMACSR_CDE = 0x2000; // Context Descriptor Error
    static constexpr uint32_t DMACSR_AIS = 0x4000; // Abnormal Interrupt Summary
    static constexpr uint32_t DMACSR_NIS = 0x8000; // Normal Interrupt Summary
    typedef bit_field_t<16, 0x7> DMACSR_TEB; // Tx DMA Error Bits
    typedef bit_field_t<19, 0x7> DMACSR_REB; // Rx DMA Error Bits


    static constexpr uint32_t DMACMFCR_RESET_VALUE = 0x8000; // Reset value
    typedef bit_field_t<0, 0x7ff> DMACMFCR_MFC; // Dropped Packet Counters
    static constexpr uint32_t DMACMFCR_MFCO = 0x8000; // Overflow status of the MFC Counter
};

// ETHERNET_MTL: Ethernet: MTL mode register (MTL)

struct stm32h742x_ethernet_mtl_t
{
    volatile uint32_t MTLOMR; // Operating mode Register
    reserved_t<0x7> _0x4;
    volatile uint32_t MTLISR; // Interrupt status Register
    reserved_t<0x37> _0x24;
    volatile uint32_t MTLTXQOMR; // Tx queue operating mode Register
    volatile uint32_t MTLTXQUR; // Tx queue underflow register
    volatile uint32_t MTLTXQDR; // Tx queue debug Register
    reserved_t<0x8> _0x10c;
    volatile uint32_t MTLQICSR; // Queue interrupt control status Register
    volatile uint32_t MTLRXQOMR; // Rx queue operating mode register
    volatile uint32_t MTLRXQMPOCR; // Rx queue missed packet and overflow counter register
    volatile uint32_t MTLRXQDR; // Rx queue debug register

    static constexpr uint32_t MTLOMR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MTLOMR_DTXSTS = 0x2; // DTXSTS
    static constexpr uint32_t MTLOMR_CNTPRST = 0x100; // CNTPRST
    static constexpr uint32_t MTLOMR_CNTCLR = 0x200; // CNTCLR


    static constexpr uint32_t MTLISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MTLISR_Q0IS = 0x1; // Queue interrupt status


    static constexpr uint32_t MTLTXQOMR_RESET_VALUE = 0x70008; // Reset value
    static constexpr uint32_t MTLTXQOMR_FTQ = 0x1; // Flush Transmit Queue
    static constexpr uint32_t MTLTXQOMR_TSF = 0x2; // Transmit Store and Forward
    typedef bit_field_t<2, 0x3> MTLTXQOMR_TXQEN; // Transmit Queue Enable
    typedef bit_field_t<4, 0x7> MTLTXQOMR_TTC; // Transmit Threshold Control
    typedef bit_field_t<16, 0x7> MTLTXQOMR_TQS; // Transmit Queue Size

    static constexpr uint32_t MTLTXQUR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> MTLTXQUR_UFFRMCNT; // Underflow Packet Counter
    static constexpr uint32_t MTLTXQUR_UFCNTOVF = 0x800; // UFCNTOVF

    static constexpr uint32_t MTLTXQDR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MTLTXQDR_TXQPAUSED = 0x1; // TXQPAUSED
    typedef bit_field_t<1, 0x3> MTLTXQDR_TRCSTS; // TRCSTS
    static constexpr uint32_t MTLTXQDR_TWCSTS = 0x8; // TWCSTS
    static constexpr uint32_t MTLTXQDR_TXQSTS = 0x10; // TXQSTS
    static constexpr uint32_t MTLTXQDR_TXSTSFSTS = 0x20; // TXSTSFSTS
    typedef bit_field_t<16, 0x7> MTLTXQDR_PTXQ; // PTXQ
    typedef bit_field_t<20, 0x7> MTLTXQDR_STXSTSF; // STXSTSF


    static constexpr uint32_t MTLQICSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MTLQICSR_TXUNFIS = 0x1; // TXUNFIS
    static constexpr uint32_t MTLQICSR_TXUIE = 0x100; // TXUIE
    static constexpr uint32_t MTLQICSR_RXOVFIS = 0x10000; // RXOVFIS
    static constexpr uint32_t MTLQICSR_RXOIE = 0x1000000; // RXOIE

    static constexpr uint32_t MTLRXQOMR_RESET_VALUE = 0x700000; // Reset value
    typedef bit_field_t<0, 0x3> MTLRXQOMR_RTC; // RTC
    static constexpr uint32_t MTLRXQOMR_FUP = 0x8; // FUP
    static constexpr uint32_t MTLRXQOMR_FEP = 0x10; // FEP
    static constexpr uint32_t MTLRXQOMR_RSF = 0x20; // RSF
    static constexpr uint32_t MTLRXQOMR_DIS_TCP_EF = 0x40; // DIS_TCP_EF
    static constexpr uint32_t MTLRXQOMR_EHFC = 0x80; // EHFC
    typedef bit_field_t<8, 0x7> MTLRXQOMR_RFA; // RFA
    typedef bit_field_t<14, 0x7> MTLRXQOMR_RFD; // RFD
    typedef bit_field_t<20, 0x7> MTLRXQOMR_RQS; // RQS

    static constexpr uint32_t MTLRXQMPOCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> MTLRXQMPOCR_OVFPKTCNT; // OVFPKTCNT
    static constexpr uint32_t MTLRXQMPOCR_OVFCNTOVF = 0x800; // OVFCNTOVF
    typedef bit_field_t<16, 0x7ff> MTLRXQMPOCR_MISPKTCNT; // MISPKTCNT
    static constexpr uint32_t MTLRXQMPOCR_MISCNTOVF = 0x8000000; // MISCNTOVF

    static constexpr uint32_t MTLRXQDR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MTLRXQDR_RWCSTS = 0x1; // RWCSTS
    typedef bit_field_t<1, 0x3> MTLRXQDR_RRCSTS; // RRCSTS
    typedef bit_field_t<4, 0x3> MTLRXQDR_RXQSTS; // RXQSTS
    typedef bit_field_t<16, 0x3fff> MTLRXQDR_PRXQ; // PRXQ
};

template<>
struct peripheral_t<STM32H742x, ETHERNET_DMA>
{
    static constexpr periph_t P = ETHERNET_DMA;
    using T = stm32h742x_ethernet_dma_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, ETHERNET_DMA>
{
    static constexpr periph_t P = ETHERNET_DMA;
    using T = stm32h742x_ethernet_dma_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, ETHERNET_DMA>
{
    static constexpr periph_t P = ETHERNET_DMA;
    using T = stm32h742x_ethernet_dma_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H723, ETHERNET_MAC>
{
    static constexpr periph_t P = ETHERNET_MAC;
    using T = stm32h723_ethernet_mac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H73x, ETHERNET_MAC>
{
    static constexpr periph_t P = ETHERNET_MAC;
    using T = stm32h723_ethernet_mac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, ETHERNET_MAC>
{
    static constexpr periph_t P = ETHERNET_MAC;
    using T = stm32h723_ethernet_mac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, ETHERNET_MAC>
{
    static constexpr periph_t P = ETHERNET_MAC;
    using T = stm32h723_ethernet_mac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, ETHERNET_MAC>
{
    static constexpr periph_t P = ETHERNET_MAC;
    using T = stm32h723_ethernet_mac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, ETHERNET_MAC>
{
    static constexpr periph_t P = ETHERNET_MAC;
    using T = stm32h723_ethernet_mac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, ETHERNET_MAC>
{
    static constexpr periph_t P = ETHERNET_MAC;
    using T = stm32h723_ethernet_mac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, ETHERNET_MAC>
{
    static constexpr periph_t P = ETHERNET_MAC;
    using T = stm32h723_ethernet_mac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, ETHERNET_MAC>
{
    static constexpr periph_t P = ETHERNET_MAC;
    using T = stm32h723_ethernet_mac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, ETHERNET_MAC>
{
    static constexpr periph_t P = ETHERNET_MAC;
    using T = stm32h723_ethernet_mac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, ETHERNET_MAC>
{
    static constexpr periph_t P = ETHERNET_MAC;
    using T = stm32h742x_ethernet_mac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, ETHERNET_MAC>
{
    static constexpr periph_t P = ETHERNET_MAC;
    using T = stm32h742x_ethernet_mac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, ETHERNET_MAC>
{
    static constexpr periph_t P = ETHERNET_MAC;
    using T = stm32h742x_ethernet_mac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, ETHERNET_MAC>
{
    static constexpr periph_t P = ETHERNET_MAC;
    using T = stm32h750x_ethernet_mac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, ETHERNET_MTL>
{
    static constexpr periph_t P = ETHERNET_MTL;
    using T = stm32h742x_ethernet_mtl_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, ETHERNET_MTL>
{
    static constexpr periph_t P = ETHERNET_MTL;
    using T = stm32h742x_ethernet_mtl_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, ETHERNET_MTL>
{
    static constexpr periph_t P = ETHERNET_MTL;
    using T = stm32h742x_ethernet_mtl_t;
    static T& V;
};

using ethernet_dma_t = peripheral_t<svd, ETHERNET_DMA>;
using ethernet_mac_t = peripheral_t<svd, ETHERNET_MAC>;
using ethernet_mtl_t = peripheral_t<svd, ETHERNET_MTL>;
