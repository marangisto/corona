#pragma once

////
//
//      STM32MP1 Ethernet peripherals
//
////

////
//
//      ETH_DMA
//
////

struct stm32mp15xxx_eth_dma_t
{
    volatile uint32_t ETH_DMAMR;       // [read-write] DMA mode register
    volatile uint32_t ETH_DMASBMR;     // [read-write] System bus mode register
    volatile uint32_t ETH_DMAISR;      // [read-only] Interrupt status register
    volatile uint32_t ETH_DMADSR;      // [read-only] Debug status register
    reserved_t<0x4> _0x20;
    volatile uint32_t ETH_DMAA4TxACR;  // [read-write] AXI4 transmit channel ACE control register
    volatile uint32_t ETH_DMAA4RxACR;  // [read-write] AXI4 receive channel ACE control register
    volatile uint32_t ETH_DMAA4DACR;   // [read-write] AXI4 descriptor ACE control register
    reserved_t<0x35> _0x100;
    volatile uint32_t ETH_DMAC0CR;     // [read-write] Channel 0 control register
    volatile uint32_t ETH_DMAC0TxCR;   // [read-write] Channel 0 transmit control register
    volatile uint32_t ETH_DMAC0RxCR;   // [read-write] Channel receive control register
    reserved_t<0x2> _0x114;
    volatile uint32_t ETH_DMAC0TxDLAR; // [read-write] Channel i Tx descriptor list address register
    reserved_t<0x1> _0x11c;
    volatile uint32_t ETH_DMAC0RxDLAR; // [read-write] Channel Rx descriptor list address register
    volatile uint32_t ETH_DMAC0TxDTPR; // [read-write] Channel Tx descriptor tail pointer register
    reserved_t<0x1> _0x128;
    volatile uint32_t ETH_DMAC0RxDTPR; // [read-write] Channel Rx descriptor tail pointer register
    volatile uint32_t ETH_DMAC0TxRLR;  // [read-write] Channel Tx descriptor ring length register
    volatile uint32_t ETH_DMAC0RxRLR;  // [read-write] Channel Rx descriptor ring length register
    volatile uint32_t ETH_DMAC0IER;    // [read-write] Channel interrupt enable register
    volatile uint32_t ETH_DMAC0RxIWTR; // [read-write] Channel Rx interrupt watchdog timer register
    volatile uint32_t ETH_DMAC0SFCSR;  // [read-write] Channel i slot function control status register
    reserved_t<0x1> _0x144;
    volatile uint32_t ETH_DMAC0CATxDR; // [read-only] Channel current application transmit descriptor register
    reserved_t<0x1> _0x14c;
    volatile uint32_t ETH_DMAC0CARxDR; // [read-only] Channel 0 current application receive descriptor register
    reserved_t<0x1> _0x154;
    volatile uint32_t ETH_DMAC0CATxBR; // [read-only] Channel 0 current application transmit buffer register
    reserved_t<0x1> _0x15c;
    volatile uint32_t ETH_DMAC0CARxBR; // [read-only] Channel current application receive buffer register
    volatile uint32_t ETH_DMAC0SR;     // [read-write] Channel status register
    reserved_t<0x2> _0x16c;
    volatile uint32_t ETH_DMAC0MFCR;   // [read-only] Channel missed frame count register
    reserved_t<0x4> _0x180;
    volatile uint32_t ETH_DMAC1CR;     // [read-write] Channel 1 control register
    volatile uint32_t ETH_DMAC1TxCR;   // [read-write] Channel 1 transmit control register
    reserved_t<0x3> _0x194;
    volatile uint32_t ETH_DMAC1TxDLAR; // [read-write] Channel i Tx descriptor list address register
    reserved_t<0x2> _0x1a0;
    volatile uint32_t ETH_DMAC1TxDTPR; // [read-write] Channel Tx descriptor tail pointer register
    reserved_t<0x2> _0x1ac;
    volatile uint32_t ETH_DMAC1TxRLR;  // [read-write] Channel Tx descriptor ring length register
    reserved_t<0x1> _0x1b4;
    volatile uint32_t ETH_DMAC1IER;    // [read-write] Channel interrupt enable register
    reserved_t<0x1> _0x1bc;
    volatile uint32_t ETH_DMAC1SFCSR;  // [read-write] Channel i slot function control status register
    reserved_t<0x1> _0x1c4;
    volatile uint32_t ETH_DMAC1CATxDR; // [read-only] Channel current application transmit descriptor register
    reserved_t<0x3> _0x1d4;
    volatile uint32_t ETH_DMAC1CATxBR; // [read-only] Channel 0 current application transmit buffer register
    reserved_t<0x2> _0x1e0;
    volatile uint32_t ETH_DMAC1SR;     // [read-write] Channel status register
    reserved_t<0x2> _0x1ec;
    volatile uint32_t ETH_DMAC1MFCR;   // [read-only] Channel missed frame count register

    static constexpr uint32_t ETH_DMAMR_RESET_VALUE = 0x8000;
    static constexpr uint32_t ETH_DMAMR_SWR = 0x1;    // Software Reset
    template<uint32_t X>
    static constexpr uint32_t ETH_DMAMR_TAA =         // TAA
        bit_field_t<2, 0x7>::value<X>();
    static constexpr uint32_t ETH_DMAMR_TXPR = 0x800; // Transmit priority
    template<uint32_t X>
    static constexpr uint32_t ETH_DMAMR_PR =          // Priority ratio
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_DMAMR_INTM =        // Interrupt Mode
        bit_field_t<16, 0x3>::value<X>();

    static constexpr uint32_t ETH_DMASBMR_RESET_VALUE = 0x8000;
    static constexpr uint32_t ETH_DMASBMR_FB = 0x1;                 // Fixed Burst Length
    static constexpr uint32_t ETH_DMASBMR_BLEN4 = 0x2;              // BLEN4
    static constexpr uint32_t ETH_DMASBMR_BLEN8 = 0x4;              // BLEN8
    static constexpr uint32_t ETH_DMASBMR_BLEN16 = 0x8;             // BLEN16
    static constexpr uint32_t ETH_DMASBMR_BLEN32 = 0x10;            // BLEN32
    static constexpr uint32_t ETH_DMASBMR_BLEN64 = 0x20;            // BLEN64
    static constexpr uint32_t ETH_DMASBMR_BLEN128 = 0x40;           // BLEN128
    static constexpr uint32_t ETH_DMASBMR_BLEN256 = 0x80;           // BLEN256
    static constexpr uint32_t ETH_DMASBMR_AAL = 0x1000;             // Address-Aligned Beats
    static constexpr uint32_t ETH_DMASBMR_ONEKBBE = 0x2000;         // ONEKBBE
    template<uint32_t X>
    static constexpr uint32_t ETH_DMASBMR_RD_OSR_LMT =              // RD_OSR_LMT
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_DMASBMR_WR_OSR_LMT =              // WR_OSR_LMT
        bit_field_t<24, 0x3>::value<X>();
    static constexpr uint32_t ETH_DMASBMR_LPI_XIT_PKT = 0x40000000; // LPI_XIT_PKT
    static constexpr uint32_t ETH_DMASBMR_EN_LPI = 0x80000000;      // EN_LPI

    static constexpr uint32_t ETH_DMAISR_RESET_VALUE = 0x8000;
    static constexpr uint32_t ETH_DMAISR_DC0IS = 0x1;     // DMA Channel Interrupt Status
    static constexpr uint32_t ETH_DMAISR_DC1IS = 0x2;     // DC1IS
    static constexpr uint32_t ETH_DMAISR_MTLIS = 0x10000; // MTL Interrupt Status
    static constexpr uint32_t ETH_DMAISR_MACIS = 0x20000; // MAC Interrupt Status

    static constexpr uint32_t ETH_DMADSR_RESET_VALUE = 0x0;
    static constexpr uint32_t ETH_DMADSR_AXWHSTS = 0x1; // AHB Master Write Channel
    static constexpr uint32_t ETH_DMADSR_AXRHSTS = 0x2; // AXRHSTS
    template<uint32_t X>
    static constexpr uint32_t ETH_DMADSR_RPS0 =         // RPS0
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_DMADSR_TPS0 =         // TPS0
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_DMADSR_RPS1 =         // RPS1
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_DMADSR_TPS1 =         // TPS1
        bit_field_t<20, 0xf>::value<X>();

    static constexpr uint32_t ETH_DMAA4TxACR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ETH_DMAA4TxACR_TDRC =   // TDRC
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_DMAA4TxACR_TEC =    // TEC
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_DMAA4TxACR_THC =    // THC
        bit_field_t<16, 0xf>::value<X>();

    static constexpr uint32_t ETH_DMAA4RxACR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ETH_DMAA4RxACR_RDWC =   // RDWC
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_DMAA4RxACR_RPC =    // RPC
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_DMAA4RxACR_RHC =    // RHC
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_DMAA4RxACR_RDC =    // RDC
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t ETH_DMAA4DACR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ETH_DMAA4DACR_TDWC =   // TDWC
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_DMAA4DACR_TDWD =   // TDWD
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_DMAA4DACR_RDRC =   // RDRC
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_DMAA4DACR_RDP =    // RDP
        bit_field_t<16, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_DMAA4DACR_WRP =    // WRP
        bit_field_t<20, 0x7>::value<X>();

    static constexpr uint32_t ETH_DMAC0CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ETH_DMAC0CR_MSS =            // MSS
        bit_field_t<0, 0x3fff>::value<X>();
    static constexpr uint32_t ETH_DMAC0CR_PBLX8 = 0x10000; // PBLX8
    template<uint32_t X>
    static constexpr uint32_t ETH_DMAC0CR_DSL =            // DSL
        bit_field_t<18, 0x7>::value<X>();

    static constexpr uint32_t ETH_DMAC1CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ETH_DMAC1CR_MSS =            // MSS
        bit_field_t<0, 0x3fff>::value<X>();
    static constexpr uint32_t ETH_DMAC1CR_PBLX8 = 0x10000; // PBLX8
    template<uint32_t X>
    static constexpr uint32_t ETH_DMAC1CR_DSL =            // DSL
        bit_field_t<18, 0x7>::value<X>();

    static constexpr uint32_t ETH_DMAC0TxCR_RESET_VALUE = 0x0;
    static constexpr uint32_t ETH_DMAC0TxCR_ST = 0x1;     // ST
    template<uint32_t X>
    static constexpr uint32_t ETH_DMAC0TxCR_TCW =         // TCW
        bit_field_t<1, 0x7>::value<X>();
    static constexpr uint32_t ETH_DMAC0TxCR_OSF = 0x10;   // OSF
    static constexpr uint32_t ETH_DMAC0TxCR_TSE = 0x1000; // TSE
    template<uint32_t X>
    static constexpr uint32_t ETH_DMAC0TxCR_TXPBL =       // TXPBL
        bit_field_t<16, 0x3f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_DMAC0TxCR_TQOS =        // TQOS
        bit_field_t<24, 0xf>::value<X>();

    static constexpr uint32_t ETH_DMAC1TxCR_RESET_VALUE = 0x0;
    static constexpr uint32_t ETH_DMAC1TxCR_ST = 0x1;     // ST
    template<uint32_t X>
    static constexpr uint32_t ETH_DMAC1TxCR_TCW =         // TCW
        bit_field_t<1, 0x7>::value<X>();
    static constexpr uint32_t ETH_DMAC1TxCR_OSF = 0x10;   // OSF
    static constexpr uint32_t ETH_DMAC1TxCR_TSE = 0x1000; // TSE
    template<uint32_t X>
    static constexpr uint32_t ETH_DMAC1TxCR_TXPBL =       // TXPBL
        bit_field_t<16, 0x3f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_DMAC1TxCR_TQOS =        // TQOS
        bit_field_t<24, 0xf>::value<X>();

    static constexpr uint32_t ETH_DMAC0RxCR_RESET_VALUE = 0x8000;
    static constexpr uint32_t ETH_DMAC0RxCR_SR = 0x1;         // Start or Stop Receive Command
    template<uint32_t X>
    static constexpr uint32_t ETH_DMAC0RxCR_RBSZ =            // Receive Buffer size
        bit_field_t<1, 0x3fff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_DMAC0RxCR_RXPBL =           // RXPBL
        bit_field_t<16, 0x3f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_DMAC0RxCR_RQOS =            // RQOS
        bit_field_t<24, 0xf>::value<X>();
    static constexpr uint32_t ETH_DMAC0RxCR_RPF = 0x80000000; // DMA Rx Channel Packet Flush

    static constexpr uint32_t ETH_DMAC0TxDLAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ETH_DMAC0TxDLAR_TDESLA =   // Start of Transmit List
        bit_field_t<3, 0x1fffffff>::value<X>();

    static constexpr uint32_t ETH_DMAC1TxDLAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ETH_DMAC1TxDLAR_TDESLA =   // Start of Transmit List
        bit_field_t<3, 0x1fffffff>::value<X>();

    static constexpr uint32_t ETH_DMAC0RxDLAR_RESET_VALUE = 0x8000;
    template<uint32_t X>
    static constexpr uint32_t ETH_DMAC0RxDLAR_RDESLA =   // Start of Receive List
        bit_field_t<3, 0x1fffffff>::value<X>();

    static constexpr uint32_t ETH_DMAC0TxDTPR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ETH_DMAC0TxDTPR_TDT =   // Transmit Descriptor Tail Pointer
        bit_field_t<3, 0x1fffffff>::value<X>();

    static constexpr uint32_t ETH_DMAC1TxDTPR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ETH_DMAC1TxDTPR_TDT =   // Transmit Descriptor Tail Pointer
        bit_field_t<3, 0x1fffffff>::value<X>();

    static constexpr uint32_t ETH_DMAC0RxDTPR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ETH_DMAC0RxDTPR_RDT =   // Receive Descriptor Tail Pointer
        bit_field_t<3, 0x1fffffff>::value<X>();

    static constexpr uint32_t ETH_DMAC0TxRLR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ETH_DMAC0TxRLR_TDRL =   // Transmit Descriptor Ring Length
        bit_field_t<0, 0x3ff>::value<X>();

    static constexpr uint32_t ETH_DMAC1TxRLR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ETH_DMAC1TxRLR_TDRL =   // Transmit Descriptor Ring Length
        bit_field_t<0, 0x3ff>::value<X>();

    static constexpr uint32_t ETH_DMAC0RxRLR_RESET_VALUE = 0x8000;
    template<uint32_t X>
    static constexpr uint32_t ETH_DMAC0RxRLR_RDRL =   // Receive Descriptor Ring Length
        bit_field_t<0, 0x3ff>::value<X>();

    static constexpr uint32_t ETH_DMAC0IER_RESET_VALUE = 0x8000;
    static constexpr uint32_t ETH_DMAC0IER_TIE = 0x1;     // Transmit Interrupt Enable
    static constexpr uint32_t ETH_DMAC0IER_TXSE = 0x2;    // Transmit Stopped Enable
    static constexpr uint32_t ETH_DMAC0IER_TBUE = 0x4;    // Transmit Buffer Unavailable Enable
    static constexpr uint32_t ETH_DMAC0IER_RIE = 0x40;    // Receive Interrupt Enable
    static constexpr uint32_t ETH_DMAC0IER_RBUE = 0x80;   // Receive Buffer Unavailable Enable
    static constexpr uint32_t ETH_DMAC0IER_RSE = 0x100;   // Receive Stopped Enable
    static constexpr uint32_t ETH_DMAC0IER_RWTE = 0x200;  // Receive Watchdog Timeout Enable
    static constexpr uint32_t ETH_DMAC0IER_ETIE = 0x400;  // Early Transmit Interrupt Enable
    static constexpr uint32_t ETH_DMAC0IER_ERIE = 0x800;  // Early Receive Interrupt Enable
    static constexpr uint32_t ETH_DMAC0IER_FBEE = 0x1000; // Fatal Bus Error Enable
    static constexpr uint32_t ETH_DMAC0IER_CDEE = 0x2000; // Context Descriptor Error Enable
    static constexpr uint32_t ETH_DMAC0IER_AIE = 0x4000;  // Abnormal Interrupt Summary Enable
    static constexpr uint32_t ETH_DMAC0IER_NIE = 0x8000;  // Normal Interrupt Summary Enable

    static constexpr uint32_t ETH_DMAC1IER_RESET_VALUE = 0x8000;
    static constexpr uint32_t ETH_DMAC1IER_TIE = 0x1;     // Transmit Interrupt Enable
    static constexpr uint32_t ETH_DMAC1IER_TXSE = 0x2;    // Transmit Stopped Enable
    static constexpr uint32_t ETH_DMAC1IER_TBUE = 0x4;    // Transmit Buffer Unavailable Enable
    static constexpr uint32_t ETH_DMAC1IER_RIE = 0x40;    // Receive Interrupt Enable
    static constexpr uint32_t ETH_DMAC1IER_RBUE = 0x80;   // Receive Buffer Unavailable Enable
    static constexpr uint32_t ETH_DMAC1IER_RSE = 0x100;   // Receive Stopped Enable
    static constexpr uint32_t ETH_DMAC1IER_RWTE = 0x200;  // Receive Watchdog Timeout Enable
    static constexpr uint32_t ETH_DMAC1IER_ETIE = 0x400;  // Early Transmit Interrupt Enable
    static constexpr uint32_t ETH_DMAC1IER_ERIE = 0x800;  // Early Receive Interrupt Enable
    static constexpr uint32_t ETH_DMAC1IER_FBEE = 0x1000; // Fatal Bus Error Enable
    static constexpr uint32_t ETH_DMAC1IER_CDEE = 0x2000; // Context Descriptor Error Enable
    static constexpr uint32_t ETH_DMAC1IER_AIE = 0x4000;  // Abnormal Interrupt Summary Enable
    static constexpr uint32_t ETH_DMAC1IER_NIE = 0x8000;  // Normal Interrupt Summary Enable

    static constexpr uint32_t ETH_DMAC0RxIWTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ETH_DMAC0RxIWTR_RWT =   // Receive Interrupt Watchdog Timer Count
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t ETH_DMAC0SFCSR_RESET_VALUE = 0x0;
    static constexpr uint32_t ETH_DMAC0SFCSR_ESC = 0x1; // ESC
    static constexpr uint32_t ETH_DMAC0SFCSR_ASC = 0x2; // ASC
    template<uint32_t X>
    static constexpr uint32_t ETH_DMAC0SFCSR_RSN =      // RSN
        bit_field_t<16, 0xf>::value<X>();

    static constexpr uint32_t ETH_DMAC1SFCSR_RESET_VALUE = 0x0;
    static constexpr uint32_t ETH_DMAC1SFCSR_ESC = 0x1; // ESC
    static constexpr uint32_t ETH_DMAC1SFCSR_ASC = 0x2; // ASC
    template<uint32_t X>
    static constexpr uint32_t ETH_DMAC1SFCSR_RSN =      // RSN
        bit_field_t<16, 0xf>::value<X>();

    static constexpr uint32_t ETH_DMAC0CATxDR_RESET_VALUE = 0x0;

    static constexpr uint32_t ETH_DMAC1CATxDR_RESET_VALUE = 0x0;

    static constexpr uint32_t ETH_DMAC0CARxDR_RESET_VALUE = 0x0;

    static constexpr uint32_t ETH_DMAC0CATxBR_RESET_VALUE = 0x0;

    static constexpr uint32_t ETH_DMAC1CATxBR_RESET_VALUE = 0x0;

    static constexpr uint32_t ETH_DMAC0CARxBR_RESET_VALUE = 0x0;

    static constexpr uint32_t ETH_DMAC0SR_RESET_VALUE = 0x0;
    static constexpr uint32_t ETH_DMAC0SR_TI = 0x1;     // Transmit Interrupt
    static constexpr uint32_t ETH_DMAC0SR_TPS = 0x2;    // Transmit Process Stopped
    static constexpr uint32_t ETH_DMAC0SR_TBU = 0x4;    // Transmit Buffer Unavailable
    static constexpr uint32_t ETH_DMAC0SR_RI = 0x40;    // Receive Interrupt
    static constexpr uint32_t ETH_DMAC0SR_RBU = 0x80;   // Receive Buffer Unavailable
    static constexpr uint32_t ETH_DMAC0SR_RPS = 0x100;  // Receive Process Stopped
    static constexpr uint32_t ETH_DMAC0SR_RWT = 0x200;  // Receive Watchdog Timeout
    static constexpr uint32_t ETH_DMAC0SR_ETI = 0x400;  // Early Transmit Interrupt
    static constexpr uint32_t ETH_DMAC0SR_ERI = 0x800;  // Early Receive Interrupt
    static constexpr uint32_t ETH_DMAC0SR_FBE = 0x1000; // Fatal Bus Error
    static constexpr uint32_t ETH_DMAC0SR_CDE = 0x2000; // Context Descriptor Error
    static constexpr uint32_t ETH_DMAC0SR_AIS = 0x4000; // Abnormal Interrupt Summary
    static constexpr uint32_t ETH_DMAC0SR_NIS = 0x8000; // Normal Interrupt Summary
    template<uint32_t X>
    static constexpr uint32_t ETH_DMAC0SR_TEB =         // Tx DMA Error Bits
        bit_field_t<16, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_DMAC0SR_REB =         // Rx DMA Error Bits
        bit_field_t<19, 0x7>::value<X>();

    static constexpr uint32_t ETH_DMAC1SR_RESET_VALUE = 0x0;
    static constexpr uint32_t ETH_DMAC1SR_TI = 0x1;     // Transmit Interrupt
    static constexpr uint32_t ETH_DMAC1SR_TPS = 0x2;    // Transmit Process Stopped
    static constexpr uint32_t ETH_DMAC1SR_TBU = 0x4;    // Transmit Buffer Unavailable
    static constexpr uint32_t ETH_DMAC1SR_RI = 0x40;    // Receive Interrupt
    static constexpr uint32_t ETH_DMAC1SR_RBU = 0x80;   // Receive Buffer Unavailable
    static constexpr uint32_t ETH_DMAC1SR_RPS = 0x100;  // Receive Process Stopped
    static constexpr uint32_t ETH_DMAC1SR_RWT = 0x200;  // Receive Watchdog Timeout
    static constexpr uint32_t ETH_DMAC1SR_ETI = 0x400;  // Early Transmit Interrupt
    static constexpr uint32_t ETH_DMAC1SR_ERI = 0x800;  // Early Receive Interrupt
    static constexpr uint32_t ETH_DMAC1SR_FBE = 0x1000; // Fatal Bus Error
    static constexpr uint32_t ETH_DMAC1SR_CDE = 0x2000; // Context Descriptor Error
    static constexpr uint32_t ETH_DMAC1SR_AIS = 0x4000; // Abnormal Interrupt Summary
    static constexpr uint32_t ETH_DMAC1SR_NIS = 0x8000; // Normal Interrupt Summary
    template<uint32_t X>
    static constexpr uint32_t ETH_DMAC1SR_TEB =         // Tx DMA Error Bits
        bit_field_t<16, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_DMAC1SR_REB =         // Rx DMA Error Bits
        bit_field_t<19, 0x7>::value<X>();

    static constexpr uint32_t ETH_DMAC0MFCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ETH_DMAC0MFCR_MFC =          // Dropped Packet Counters
        bit_field_t<0, 0x7ff>::value<X>();
    static constexpr uint32_t ETH_DMAC0MFCR_MFCO = 0x8000; // Overflow status of the MFC Counter

    static constexpr uint32_t ETH_DMAC1MFCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ETH_DMAC1MFCR_MFC =          // Dropped Packet Counters
        bit_field_t<0, 0x7ff>::value<X>();
    static constexpr uint32_t ETH_DMAC1MFCR_MFCO = 0x8000; // Overflow status of the MFC Counter
};


////
//
//      ETH_MAC_MMC
//
////

struct stm32mp15xxx_eth_mac_mmc_t
{
    volatile uint32_t ETH_MACCR;                          // [read-write] The MAC Configuration Register establishes the operating mode of the MAC.
    volatile uint32_t ETH_MACECR;                         // [read-write] The MAC Extended Configuration Register establishes the operating mode of the MAC.
    volatile uint32_t ETH_MACPFR;                         // [read-write] The MAC Packet Filter register contains the filter controls for receiving packets. Some of the controls from this register go to the address check block of the MAC which performs the first level of address filtering. The second level of filtering is performed on the incoming packet based on other controls such as Pass Bad Packets and Pass Control Packets.
    volatile uint32_t ETH_MACWTR;                         // [read-write] The Watchdog Timeout register controls the watchdog timeout for received packets.
    volatile uint32_t ETH_MACHT0R;                        // [read-write] The Hash Table Register 0 contains the first 32 bits of the Hash table (64 bits). For Hash filtering, the content of the destination address in the incoming packet is passed through the CRC logic and the upper six bits of the CRC register are used to index the content of the Hash table. The most significant bits determines the register to be used (Hash Table Register 0 or 1). The Hash value of the destination address is calculated in the following way: Calculate the 32-bit CRC for the DA (See IEEE 802.3, Section 3.2.8 for the steps to calculate CRC32). Perform bitwise reversal for the value obtained in Step 1. Take the upper 7 or 8 bits from the value obtained in Step 2. If the corresponding bit value of the register is 1, the packet is accepted. Otherwise, it is rejected. If the PM bit is set in ETH_MACPFR, all multicast packets are accepted regardless of the multicast Hash values. If the Hash Table register is configured to be double-synchronized to the GMII clock domain, the synchronization is triggered only when Bits[31:24] (in little-endian mode) or Bits[7:0] (in big-endian mode) of the Hash Table Register X registers are written.
    volatile uint32_t ETH_MACHT1R;                        // [read-write] The Hash Table Register 1contains the last 32 bits of the Hash table (64 bits). For Hash filtering, the content of the destination address in the incoming packet is passed through the CRC logic and the upper six bits of the CRC register are used to index the content of the Hash table. The most significant bits determines the register to be used (Hash Table Register 0 or 1). The Hash value of the destination address is calculated in the following way: Calculate the 32-bit CRC for the DA (See IEEE 802.3, Section 3.2.8 for the steps to calculate CRC32). Perform bitwise reversal for the value obtained in Step 1. Take the upper 7 or 8 bits from the value obtained in Step 2. If the corresponding bit value of the register is 1, the packet is accepted. Otherwise, it is rejected. If the PM bit is set in ETH_MACPFR, all multicast packets are accepted regardless of the multicast Hash values. If the Hash Table register is configured to be double-synchronized to the GMII clock domain, the synchronization is triggered only when Bits[31:24] (in little-endian mode) or Bits[7:0] (in big-endian mode) of the Hash Table Register X registers are written.
    reserved_t<0xe> _0x50;
    volatile uint32_t ETH_MACVTR;                         // [read-write] The VLAN Tag register identifies the IEEE 802.1Q VLAN type packets.
    reserved_t<0x1> _0x58;
    volatile uint32_t ETH_MACVHTR;                        // [read-write] When the ERSVLM bit of ETH_MACHT1R register is set, the 16-bit VLAN Hash Table register is used for group address filtering based on the VLAN tag. For Hash filtering, the content of the 16-bit VLAN tag or 12-bit VLAN ID (based on the ETV bit of ETH_MACVTR register) in the incoming packet is passed through the CRC logic. The upper four bits of the calculated CRC are used to index the contents of the VLAN Hash table. For example, a Hash value of 1000 selects Bit 8 of the VLAN Hash table. The Hash value of the destination address is calculated in the following way: Calculate the 32-bit CRC for the VLAN tag or ID (For steps to calculate CRC32, see Section 3.2.8 of IEEE 802.3). Perform bitwise reversal for the value obtained in step 1. Take the upper four bits from the value obtained in step 2. If the VLAN Hash Table register is configured to be double-synchronized to the GMII clock domain, the synchronization is triggered only when Bits[15:8] (in little-endian mode) or Bits[7:0] (in big-endian mode) of this register are written.
    reserved_t<0x1> _0x60;
    volatile uint32_t ETH_MACVIR;                         // [read-write] The VLAN Tag Inclusion or Replacement register contains the VLAN tag for insertion or replacement in the Transmit packets. It also contains the VLAN tag insertion controls.
    volatile uint32_t ETH_MACIVIR;                        // [read-write] The Inner VLAN Tag Inclusion or Replacement register contains the inner VLAN tag to be inserted or replaced in the Transmit packet. It also contains the inner VLAN tag insertion controls.
    reserved_t<0x2> _0x70;
    volatile uint32_t ETH_MACQ0TxFCR;                     // [read-write] The Flow Control register controls the generation and reception of the Control (Pause Command) packets by the Flow control module of the MAC. A Write to a register with the Busy bit set to 1 triggers the Flow Control block to generate a Pause packet. The fields of the control packet are selected as specified in the 802.3x specification, and the Pause Time value from this register is used in the Pause Time field of the control packet. The Busy bit remains set until the control packet is transferred onto the cable. The application must make sure that the Busy bit is cleared before writing to the register.
    reserved_t<0x7> _0x90;
    volatile uint32_t ETH_MACRxFCR;                       // [read-write] The Receive Flow Control register controls the pausing of MAC Transmit based on the received Pause packet.
    reserved_t<0x1> _0x98;
    volatile uint32_t ETH_MACTxQPMR;                      // [read-only] The transmit queue priority mapping 0 register contains the priority values assigned to Tx queue 0 and tx queue 1.
    reserved_t<0x1> _0xa0;
    volatile uint32_t ETH_MACRxQC0R;                      // [read-write] The Receive Queue Control 0 register controls the queue management in the MAC Receiver.
    volatile uint32_t ETH_MACRxQC1R;                      // [read-write] The Receive Queue Control 1 register controls queue 1 management in the MAC receiver.
    volatile uint32_t ETH_MACRxQC2R;                      // [read-write] This register controls the routing of tagged packets based on the USP (user priority) field of the received packets to the Rx queue 0 and 1.
    reserved_t<0x1> _0xb0;
    volatile uint32_t ETH_MACISR;                         // [read-only] The Interrupt Status register contains the status of interrupts.
    volatile uint32_t ETH_MACIER;                         // [read-write] The Interrupt Enable register contains the masks for generating the interrupts.
    volatile uint32_t ETH_MACRxTxSR;                      // [read-only] The Receive Transmit Status register contains the Receive and Transmit Error status.
    reserved_t<0x1> _0xc0;
    volatile uint32_t ETH_MACPCSR;                        // [read-write] The PMT Control and Status Register is present only when you select the PMT module in coreConsultant.
    volatile uint32_t ETH_MACRWKPFR;                      // [read-write] The LPI Control and Status Register controls the LPI functions and provides the LPI interrupt status. The status bits are cleared when this register is read.
    reserved_t<0x2> _0xd0;
    volatile uint32_t ETH_MACLCSR;                        // [read-write] The LPI Control and Status Register controls the LPI functions and provides the LPI interrupt status. The status bits are cleared when this register is read.
    volatile uint32_t ETH_MACLTCR;                        // [read-write] The LPI Timers Control register controls the timeout values in the LPI states. It specifies the time for which the MAC transmits the LPI pattern and also the time for which the MAC waits before resuming the normal transmission.
    volatile uint32_t ETH_MACLETR;                        // [read-write] The LPI Entry Timer Register is used to store the LPI Idle Timer Value in Micro-Seconds.
    volatile uint32_t ETH_MAC1USTCR;                      // [read-write] This register controls the generation of the Reference time (1-microsecond tick) for all the LPI timers. This timer has to be programmed by the software initially.
    reserved_t<0x6> _0xf8;
    volatile uint32_t ETH_MACPHYCSR;                      // [read-write] The PHY Interface Control and Status register indicates the status signals received by the, RGMII interface from the PHY.
    reserved_t<0x5> _0x110;
    volatile uint32_t ETH_MACVR;                          // [read-only] The version register identifies the version of the Ethernet peripheral.
    volatile uint32_t ETH_MACDR;                          // [read-only] The Debug register provides the debug status of various MAC blocks.
    reserved_t<0x2> _0x120;
    volatile uint32_t ETH_MACHWF1R;                       // [read-only] This register indicates the presence of second set of the optional features or functions of the Ethernet peripheral. The software driver can use this register to dynamically enable or disable the programs related to the optional blocks.
    volatile uint32_t ETH_MACHWF2R;                       // [read-only] This register indicates the presence of third set of the optional features or functions of the Ethernet peripheral. The software driver can use this register to dynamically enable or disable the programs related to the optional blocks.
    reserved_t<0x36> _0x200;
    volatile uint32_t ETH_MACMDIOAR;                      // [read-write] The MDIO Address register controls the management cycles to external PHY through a management interface.
    volatile uint32_t ETH_MACMDIODR;                      // [read-write] The MDIO Data register stores the Write data to be written to the PHY register located at the address specified in ETH_MACMDIOAR. This register also stores the Read data from the PHY register located at the address specified by MDIO Address register.
    reserved_t<0x3e> _0x300;
    volatile uint32_t ETH_MACA0HR;                        // [read-write] The MAC Address0 High register holds the upper 16 bits of the first 6-byte MAC address of the station. The first DA byte that is received on the GMII interface corresponds to the LS byte (Bits [7:0]) of the MAC Address Low register. For example, if 0x112233445566 is received (0x11 in lane 0 of the first column) on the GMII as the destination address, then the MacAddress0 Register [47:0] is compared with 0x665544332211. If the MAC address registers are configured to be double-synchronized to the GMII clock domains, then the synchronization is triggered only when Bits[31:24] (in little-endian mode) or Bits[7:0] (in big-endian mode) of the MAC Address0 Low Register are written. For proper synchronization updates, the consecutive writes to this Address Low Register should be performed after at least four clock cycles in the destination clock domain.
    volatile uint32_t ETH_MACA0LR;                        // [read-write] The MAC Address x Low register holds the lower 32 bits of the 6-byte first MAC address of the station.
    volatile uint32_t ETH_MACA1HR;                        // [read-write] The MAC Address x High register holds the upper 16 bits of the second 6-byte MAC address of the station.
    volatile uint32_t ETH_MACA1LR;                        // [read-write] The MAC Address x Low register holds the lower 32 bits of the 6-byte first MAC address of the station.
    volatile uint32_t ETH_MACA2HR;                        // [read-write] The MAC Address x High register holds the upper 16 bits of the second 6-byte MAC address of the station.
    volatile uint32_t ETH_MACA2LR;                        // [read-write] The MAC Address x Low register holds the lower 32 bits of the 6-byte first MAC address of the station.
    volatile uint32_t ETH_MACA3HR;                        // [read-write] The MAC Address x High register holds the upper 16 bits of the second 6-byte MAC address of the station.
    volatile uint32_t ETH_MACA3LR;                        // [read-write] The MAC Address x Low register holds the lower 32 bits of the 6-byte first MAC address of the station.
    reserved_t<0xf8> _0x700;
    volatile uint32_t MMC_CONTROL;                        // [read-write] This register configures the MMC operating mode.
    volatile uint32_t MMC_RX_INTERRUPT;                   // [read-only] This register maintains the interrupts generated from all Receive statistics counters. The MMC Receive Interrupt register maintains the interrupts that are generated when the following occur: Receive statistic counters reach half of their maximum values (0x8000_0000 for 32 bit counter and 0x8000 for 16 bit counter). Receive statistic counters cross their maximum values (0xFFFF_FFFF for 32 bit counter and 0xFFFF for 16 bit counter). When the Counter Stop Rollover is set, interrupts are set but the counter remains at all-ones. The MMC Receive Interrupt register is a 32 bit register. An interrupt bit is cleared when the respective MMC counter that caused the interrupt is read. The least significant byte lane (Bits[7:0]) of the respective counter must be read to clear the interrupt bit.
    volatile uint32_t MMC_TX_INTERRUPT;                   // [read-only] This register maintains the interrupts generated from all Transmit statistics counters. The MMC Transmit Interrupt register maintains the interrupts generated when transmit statistic counters reach half their maximum values (0x8000_0000 for 32 bit counter and 0x8000 for 16 bit counter), and when they cross their maximum values (0xFFFF_FFFF for 32-bit counter and 0xFFFF for 16-bit counter). When Counter Stop Rollover is set, the interrupts are set but the counter remains at all-ones. The MMC Transmit Interrupt register is a 32 bit register. An interrupt bit is cleared when the respective MMC counter that caused the interrupt is read. The least significant byte lane (Bits[7:0]) of the respective counter must be read to clear the interrupt bit.
    volatile uint32_t MMC_RX_INTERRUPT_MASK;              // [read-write] The MMC Receive Interrupt Mask register maintains the masks for the interrupts generated when receive statistic counters reach half of their maximum value or the maximum values.
    volatile uint32_t MMC_TX_INTERRUPT_MASK;              // [read-write] This register maintains the masks for interrupts generated from all Transmit statistics counters. The MMC Transmit Interrupt Mask register maintains the masks for the interrupts generated when the transmit statistic counters reach half of their maximum value or the maximum values. This register is 32 bit wide. This register is present only when any one of the MMC Transmit Counters is selected during core configuration.
    reserved_t<0xe> _0x74c;
    volatile uint32_t TX_SINGLE_COLLISION_GOOD_PACKETS;   // [read-only] This register provides the number of successfully transmitted packets by Ethernet peripheral after a single collision in the half-duplex mode.
    volatile uint32_t TX_MULTIPLE_COLLISION_GOOD_PACKETS; // [read-only] This register provides the number of successfully transmitted packets by Ethernet peripheral after multiple collisions in the half-duplex mode.
    reserved_t<0x5> _0x768;
    volatile uint32_t TX_PACKET_COUNT_GOOD;               // [read-only] This register provides the number of good packets transmitted by Ethernet peripheral.
    reserved_t<0xa> _0x794;
    volatile uint32_t RX_CRC_ERROR_PACKETS;               // [read-only] This register provides the number of packets received by Ethernet peripheral with CRC error.
    volatile uint32_t RX_ALIGNMENT_ERROR_PACKETS;         // [read-only] This register provides the number of packets received by Ethernet peripheral with alignment (dribble) error. It is valid only in 10/100 mode.
    reserved_t<0xa> _0x7c4;
    volatile uint32_t RX_UNICAST_PACKETS_GOOD;            // [read-only] This register provides the number of good unicast packets received by Ethernet peripheral.
    reserved_t<0x9> _0x7ec;
    volatile uint32_t TX_LPI_USEC_CNTR;                   // [read-only] This register provides the number of microseconds Tx LPI is asserted by Ethernet peripheral.
    volatile uint32_t TX_LPI_TRAN_CNTR;                   // [read-only] This register provides the number of times Ethernet peripheral has entered Tx LPI.
    volatile uint32_t RX_LPI_USEC_CNTR;                   // [read-only] This register provides the number of microseconds Rx LPI is sampled by Ethernet peripheral.
    volatile uint32_t RX_LPI_TRAN_CNTR;                   // [read-only] This register provides the number of times Ethernet peripheral has entered Rx LPI.
    reserved_t<0x41> _0x900;
    volatile uint32_t ETH_MACL3L4C0R;                     // [read-write] The Layer 3 and Layer 4 Control register controls the operations of filter 0 of Layer 3 and Layer 4. This register is reserved if the Layer 3 and Layer 4 Filtering feature is not selected during core configuration.
    volatile uint32_t ETH_MACL4A0R;                       // [read-write] Layer4 address filter 0 register
    reserved_t<0x2> _0x910;
    volatile uint32_t ETH_MACL3A00R;                      // [read-write] For IPv4 packets, the Layer 3 Address 0 Register 0 register contains the 32-bit IP Source Address field. For IPv6 packets, it contains Bits[31:0] of the 128-bit IP Source Address or Destination Address field.
    volatile uint32_t ETH_MACL3A10R;                      // [read-write] For IPv4 packets, the Layer 3 Address 1 Register 0 register contains the 32-bit IP Destination Address field. For IPv6 packets, it contains Bits[63:32] of the 128-bit IP Source Address or Destination Address field.
    volatile uint32_t ETH_MACL3A20;                       // [read-write] The Layer 3 Address 2 Register 0 register is reserved for IPv4 packets. For IPv6 packets, it contains Bits[95:64] of 128-bit IP Source Address or Destination Address field.
    volatile uint32_t ETH_MACL3A30;                       // [read-write] The Layer 3 Address 3 Register 0 register is reserved for IPv4 packets. For IPv6 packets, it contains Bits[127:96] of 128-bit IP Source Address or Destination Address field.
    reserved_t<0x4> _0x930;
    volatile uint32_t ETH_MACL3L4C1R;                     // [read-write] The Layer 3 and Layer 4 Control register controls the operations of filter 0 of Layer 3 and Layer 4.
    volatile uint32_t ETH_MACL4A1R;                       // [read-write] The Layer 4 Address 0 register and registers 580 through 667 are reserved (RO with default value) if Enable Layer 3 and Layer 4 Packet Filter option is not selected while configuring the core. You can configure the Layer 3 and Layer 4 Address Registers to be double-synchronized by selecting the Synchronize Layer 3 and Layer 4 Address Registers to Rx Clock Domain option while configuring the core. When you select this option, the synchronization is triggered only when Bits[31:24] (in little-endian mode) or Bits[7:0] (in big-endian mode) of the Layer 3 and Layer 4 Address Registers are written. For proper synchronization updates, you should perform consecutive writes to same Layer 3 and Layer 4 Address Registers after at least four clock cycles delay of the destination clock.
    reserved_t<0x2> _0x940;
    volatile uint32_t ETH_MACL3A01R;                      // [read-write] For IPv4 packets, the Layer 3 Address 0 Register 0 register contains the 32-bit IP Source Address field. For IPv6 packets, it contains Bits[31:0] of the 128-bit IP Source Address or Destination Address field.
    volatile uint32_t ETH_MACL3A11R;                      // [read-write] For IPv4 packets, the Layer 3 Address 1 Register 0 register contains the 32-bit IP Destination Address field. For IPv6 packets, it contains Bits[63:32] of the 128-bit IP Source Address or Destination Address field.
    volatile uint32_t ETH_MACL3A21R;                      // [read-write] The Layer 3 Address 2 Register 0 register is reserved for IPv4 packets. For IPv6 packets, it contains Bits[95:64] of 128-bit IP Source Address or Destination Address field.
    volatile uint32_t ETH_MACL3A31R;                      // [read-write] The Layer 3 Address 3 Register 0 register is reserved for IPv4 packets. For IPv6 packets, it contains Bits[127:96] of 128-bit IP Source Address or Destination Address field.
    reserved_t<0x64> _0xae0;
    volatile uint32_t ETH_MACARPAR;                       // [read-write] The ARP Address register contains the IPv4 Destination Address of the MAC.
    reserved_t<0x7> _0xb00;
    volatile uint32_t ETH_MACTSCR;                        // [read-write] This register controls the operation of the System Time generator and processing of PTP packets for timestamping in the Receiver.
    volatile uint32_t ETH_MACSSIR;                        // [read-write] The Sub-second Increment register is present only when the IEEE 1588 timestamp feature is selected without an external timestamp input. In Coarse Update mode [Bit 1 in ETH_MACTSCR register, the value in this register is added to the system time every clock cycle of HCLK. In Fine Update mode, the value in this register is added to the system time whenever the Accumulator gets an overflow.
    volatile uint32_t ETH_MACSTSR;                        // [read-only] The System Time Seconds register, along with System Time Nanoseconds register, indicates the current value of the system time maintained by the MAC. Though it is updated on a continuous basis, there is some delay from the actual time because of clock domain transfer latencies (from HCLK to CSR clock). This register is present only when the IEEE 1588 Timestamp feature is selected without external timestamp input.
    volatile uint32_t ETH_MACSTNR;                        // [read-only] The System Time Nanoseconds register, along with System Time Seconds register, indicates the current value of the system time maintained by the MAC. This register is present only when the IEEE 1588 Timestamp feature is selected without external timestamp input.
    volatile uint32_t ETH_MACSTSUR;                       // [read-write] The System Time Seconds Update register, along with the System Time Nanoseconds Update register, initializes or updates the system time maintained by the MAC. You must write both registers before setting the TSINIT or TSUPDT bits in ETH_MACTSCR register. This register is present only when the IEEE 1588 Timestamp feature is selected without external timestamp input.
    volatile uint32_t ETH_MACSTNUR;                       // [read-write] This register is present only when the IEEE 1588 timestamp feature is selected without external timestamp input.
    volatile uint32_t ETH_MACTSAR;                        // [read-write] The Timestamp Addend register is present only when the IEEE 1588 Timestamp feature is selected without external timestamp input. This register value is used only when the system time is configured for Fine Update mode (TSCFUPDT bit in the ETH_MACTSCR register). The content of this register is added to a 32-bit accumulator in every clock cycle (of HCLK) and the system time is updated whenever the accumulator overflows.
    reserved_t<0x1> _0xb20;
    volatile uint32_t ETH_MACTSSR;                        // [read-only] The Timestamp Status register is present only when the IEEE 1588 Timestamp feature is selected. All bits except Bits[27:25] gets cleared when the application reads this register.
    reserved_t<0x3> _0xb30;
    volatile uint32_t ETH_MACTxTSSNR;                     // [read-only] This register contains the nanosecond part of timestamp captured for Transmit packets when Tx status is disabled.
    volatile uint32_t ETH_MACTxTSSSR;                     // [read-only] The register contains the higher 32 bits of the timestamp (in seconds) captured when a PTP packet is transmitted.
    reserved_t<0x2> _0xb40;
    volatile uint32_t ETH_MACACR;                         // [read-write] The Auxiliary Timestamp Control register controls the Auxiliary Timestamp snapshot.
    reserved_t<0x1> _0xb48;
    volatile uint32_t ETH_MACATSNR;                       // [read-only] The Auxiliary Timestamp Nanoseconds register, along with ETH_MACATSSR, gives the 64-bit timestamp stored as auxiliary snapshot. These two registers form the read port of a 64-bit wide FIFO with a depth of 4 words. You can store multiple snapshots in this FIFO. Bits[29:25] in ETH_MACTSSR indicate the fill-level of the FIFO. The top of the FIFO is removed only when the last byte of MAC Register 91 (Auxiliary Timestamp - Seconds Register) is read. In the little-endian mode, this means when Bits[31:24] are read and in big-endian mode, Bits[7:0] are read.
    volatile uint32_t ETH_MACATSSR;                       // [read-only] The Auxiliary Timestamp - Seconds register contains the lower 32 bits of the Seconds field of the auxiliary timestamp register.
    volatile uint32_t ETH_MACTSIACR;                      // [read-write] The MAC Timestamp Ingress Asymmetry Correction register contains the Ingress Asymmetry Correction value to be used while updating correction field in PDelay_Resp PTP messages.
    volatile uint32_t ETH_MACTSEACR;                      // [read-write] The MAC Timestamp Egress Asymmetry Correction register contains the Egress Asymmetry Correction value to be used while updating the correction field in PDelay_Req PTP messages.
    volatile uint32_t ETH_MACTSICNR;                      // [read-write] This register contains the correction value in nanoseconds to be used with the captured timestamp value in the ingress path.
    volatile uint32_t ETH_MACTSECNR;                      // [read-write] This register contains the correction value in nanoseconds to be used with the captured timestamp value in the egress path.
    reserved_t<0x4> _0xb70;
    volatile uint32_t ETH_MACPPSCR;                       // [read-write] The PPS Control register is present only when the Timestamp feature is selected and External Timestamp is not enabled. Bits[30:24] of this register are valid only when four Flexible PPS outputs are selected. Bits[22:16] are valid only when three or more Flexible PPS outputs are selected. Bits[14:8] are valid only when two or more Flexible PPS outputs are selected. Bits[6:4] are valid only when Flexible PPS feature is selected.
    reserved_t<0x3> _0xb80;
    volatile uint32_t ETH_MACPPSTTSR;                     // [read-write] The PPS Target Time Seconds register, along with PPS Target Time Nanoseconds register, is used to schedule an interrupt event [Bit 1 of ETH_MACTSSR] when the system time exceeds the value programmed in these registers.
    volatile uint32_t ETH_MACPPSTTNR;                     // [read-write] The PPS Target Time Nanoseconds register is present only when more than one Flexible PPS output is selected.
    volatile uint32_t ETH_MACPPSIR;                       // [read-write] The PPS Interval register contains the number of units of sub-second increment value between the rising edges of PPS signal output (ptp_pps_o[0]).
    volatile uint32_t ETH_MACPPSWR;                       // [read-write] The PPS Width register contains the number of units of sub-second increment value between the rising and corresponding falling edges of PPS signal output (ptp_pps_o).
    reserved_t<0xc> _0xbc0;
    volatile uint32_t ETH_MACPOCR;                        // [read-write] This register controls the PTP Offload Engine operation. This register is available only when the Enable PTP Timestamp Offload feature is selected.
    volatile uint32_t ETH_MACSPI0R;                       // [read-write] This register contains Bits[31:0] of the 80-bit Source Port Identity of the PTP node. This register is available only when the Enable PTP Timestamp Offload feature is selected.
    volatile uint32_t ETH_MACSPI1R;                       // [read-write] This register contains Bits[63:32] of the 80-bit Source Port Identity of the PTP node. This register is available only when the Enable PTP Timestamp Offload feature is selected.
    volatile uint32_t ETH_MACSPI2R;                       // [read-write] This register contains Bits[79:64] of the 80-bit Source Port Identity of the PTP node.
    volatile uint32_t ETH_MACLMIR;                        // [read-write] This register contains the periodic intervals for automatic PTP packet generation.

    static constexpr uint32_t ETH_MACCR_RESET_VALUE = 0x8000;
    static constexpr uint32_t ETH_MACCR_RE = 0x1;           // RE
    static constexpr uint32_t ETH_MACCR_TE = 0x2;           // TE
    template<uint32_t X>
    static constexpr uint32_t ETH_MACCR_PRELEN =            // PRELEN
        bit_field_t<2, 0x3>::value<X>();
    static constexpr uint32_t ETH_MACCR_DC = 0x10;          // DC
    template<uint32_t X>
    static constexpr uint32_t ETH_MACCR_BL =                // BL
        bit_field_t<5, 0x3>::value<X>();
    static constexpr uint32_t ETH_MACCR_DR = 0x100;         // DR
    static constexpr uint32_t ETH_MACCR_DCRS = 0x200;       // DCRS
    static constexpr uint32_t ETH_MACCR_DO = 0x400;         // DO
    static constexpr uint32_t ETH_MACCR_ECRSFD = 0x800;     // ECRSFD
    static constexpr uint32_t ETH_MACCR_LM = 0x1000;        // LM
    static constexpr uint32_t ETH_MACCR_DM = 0x2000;        // DM
    static constexpr uint32_t ETH_MACCR_FES = 0x4000;       // FES
    static constexpr uint32_t ETH_MACCR_PS = 0x8000;        // PS
    static constexpr uint32_t ETH_MACCR_JE = 0x10000;       // JE
    static constexpr uint32_t ETH_MACCR_JD = 0x20000;       // JD
    static constexpr uint32_t ETH_MACCR_BE = 0x40000;       // BE
    static constexpr uint32_t ETH_MACCR_WD = 0x80000;       // WD
    static constexpr uint32_t ETH_MACCR_ACS = 0x100000;     // ACS
    static constexpr uint32_t ETH_MACCR_CST = 0x200000;     // CST
    static constexpr uint32_t ETH_MACCR_S2KP = 0x400000;    // S2KP
    static constexpr uint32_t ETH_MACCR_GPSLCE = 0x800000;  // GPSLCE
    template<uint32_t X>
    static constexpr uint32_t ETH_MACCR_IPG =               // IPG
        bit_field_t<24, 0x7>::value<X>();
    static constexpr uint32_t ETH_MACCR_IPC = 0x8000000;    // IPC
    template<uint32_t X>
    static constexpr uint32_t ETH_MACCR_SARC =              // SARC
        bit_field_t<28, 0x7>::value<X>();
    static constexpr uint32_t ETH_MACCR_ARPEN = 0x80000000; // ARPEN

    static constexpr uint32_t ETH_MACECR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ETH_MACECR_GPSL =              // GPSL
        bit_field_t<0, 0x3fff>::value<X>();
    static constexpr uint32_t ETH_MACECR_DCRCC = 0x10000;    // DCRCC
    static constexpr uint32_t ETH_MACECR_SPEN = 0x20000;     // SPEN
    static constexpr uint32_t ETH_MACECR_USP = 0x40000;      // USP
    static constexpr uint32_t ETH_MACECR_EIPGEN = 0x1000000; // EIPGEN
    template<uint32_t X>
    static constexpr uint32_t ETH_MACECR_EIPG =              // EIPG
        bit_field_t<25, 0x1f>::value<X>();

    static constexpr uint32_t ETH_MACPFR_RESET_VALUE = 0x0;
    static constexpr uint32_t ETH_MACPFR_PR = 0x1;        // PR
    static constexpr uint32_t ETH_MACPFR_HUC = 0x2;       // HUC
    static constexpr uint32_t ETH_MACPFR_HMC = 0x4;       // HMC
    static constexpr uint32_t ETH_MACPFR_DAIF = 0x8;      // DAIF
    static constexpr uint32_t ETH_MACPFR_PM = 0x10;       // PM
    static constexpr uint32_t ETH_MACPFR_DBF = 0x20;      // DBF
    template<uint32_t X>
    static constexpr uint32_t ETH_MACPFR_PCF =            // PCF
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t ETH_MACPFR_SAIF = 0x100;    // SAIF
    static constexpr uint32_t ETH_MACPFR_SAF = 0x200;     // SAF
    static constexpr uint32_t ETH_MACPFR_HPF = 0x400;     // HPF
    static constexpr uint32_t ETH_MACPFR_VTFE = 0x10000;  // VTFE
    static constexpr uint32_t ETH_MACPFR_IPFE = 0x100000; // IPFE
    static constexpr uint32_t ETH_MACPFR_DNTU = 0x200000; // DNTU
    static constexpr uint32_t ETH_MACPFR_RA = 0x80000000; // RA

    static constexpr uint32_t ETH_MACWTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ETH_MACWTR_WTO =        // WTO
        bit_field_t<0, 0xf>::value<X>();
    static constexpr uint32_t ETH_MACWTR_PWE = 0x100; // PWE

    static constexpr uint32_t ETH_MACHT0R_RESET_VALUE = 0x0;

    static constexpr uint32_t ETH_MACHT1R_RESET_VALUE = 0x0;

    static constexpr uint32_t ETH_MACVTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ETH_MACVTR_VL =                  // VL
        bit_field_t<0, 0xffff>::value<X>();
    static constexpr uint32_t ETH_MACVTR_ETV = 0x10000;        // ETV
    static constexpr uint32_t ETH_MACVTR_VTIM = 0x20000;       // VTIM
    static constexpr uint32_t ETH_MACVTR_ESVL = 0x40000;       // ESVL
    static constexpr uint32_t ETH_MACVTR_ERSVLM = 0x80000;     // ERSVLM
    static constexpr uint32_t ETH_MACVTR_DOVLTC = 0x100000;    // DOVLTC
    template<uint32_t X>
    static constexpr uint32_t ETH_MACVTR_EVLS =                // EVLS
        bit_field_t<21, 0x3>::value<X>();
    static constexpr uint32_t ETH_MACVTR_EVLRXS = 0x1000000;   // EVLRXS
    static constexpr uint32_t ETH_MACVTR_VTHM = 0x2000000;     // VTHM
    static constexpr uint32_t ETH_MACVTR_EDVLP = 0x4000000;    // EDVLP
    static constexpr uint32_t ETH_MACVTR_ERIVLT = 0x8000000;   // ERIVLT
    template<uint32_t X>
    static constexpr uint32_t ETH_MACVTR_EIVLS =               // EIVLS
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t ETH_MACVTR_EIVLRXS = 0x80000000; // EIVLRXS

    static constexpr uint32_t ETH_MACVHTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ETH_MACVHTR_VLHT =   // VLHT
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t ETH_MACVIR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ETH_MACVIR_VLT =            // VLT
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_MACVIR_VLC =            // VLC
        bit_field_t<16, 0x3>::value<X>();
    static constexpr uint32_t ETH_MACVIR_VLP = 0x40000;   // VLP
    static constexpr uint32_t ETH_MACVIR_CSVL = 0x80000;  // CSVL
    static constexpr uint32_t ETH_MACVIR_VLTI = 0x100000; // VLTI

    static constexpr uint32_t ETH_MACIVIR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ETH_MACIVIR_VLT =            // VLT
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_MACIVIR_VLC =            // VLC
        bit_field_t<16, 0x3>::value<X>();
    static constexpr uint32_t ETH_MACIVIR_VLP = 0x40000;   // VLP
    static constexpr uint32_t ETH_MACIVIR_CSVL = 0x80000;  // CSVL
    static constexpr uint32_t ETH_MACIVIR_VLTI = 0x100000; // VLTI

    static constexpr uint32_t ETH_MACQ0TxFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t ETH_MACQ0TxFCR_FCB_BPA = 0x1; // FCB_BPA
    static constexpr uint32_t ETH_MACQ0TxFCR_TFE = 0x2;     // TFE
    template<uint32_t X>
    static constexpr uint32_t ETH_MACQ0TxFCR_PLT =          // PLT
        bit_field_t<4, 0x7>::value<X>();
    static constexpr uint32_t ETH_MACQ0TxFCR_DZPQ = 0x80;   // DZPQ
    template<uint32_t X>
    static constexpr uint32_t ETH_MACQ0TxFCR_PT =           // PT
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t ETH_MACRxFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t ETH_MACRxFCR_RFE = 0x1; // RFE
    static constexpr uint32_t ETH_MACRxFCR_UP = 0x2;  // UP

    static constexpr uint32_t ETH_MACTxQPMR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ETH_MACTxQPMR_PSTQ0 =   // PSTQ0
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_MACTxQPMR_PSTQ1 =   // PSTQ1
        bit_field_t<8, 0xff>::value<X>();

    static constexpr uint32_t ETH_MACRxQC0R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ETH_MACRxQC0R_RXQ0EN =   // RXQ0EN
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_MACRxQC0R_RXQ1EN =   // RXQ1EN
        bit_field_t<2, 0x3>::value<X>();

    static constexpr uint32_t ETH_MACRxQC1R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ETH_MACRxQC1R_AVCPQ =             // AVCPQ
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_MACRxQC1R_AVPTPQ =            // AVPTPQ
        bit_field_t<4, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_MACRxQC1R_UPQ =               // UPQ
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_MACRxQC1R_MCBCQ =             // MCBCQ
        bit_field_t<16, 0x7>::value<X>();
    static constexpr uint32_t ETH_MACRxQC1R_MCBCQEN = 0x100000; // MCBCQEN
    static constexpr uint32_t ETH_MACRxQC1R_TACPQE = 0x200000;  // TACPQE

    static constexpr uint32_t ETH_MACRxQC2R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ETH_MACRxQC2R_PSRQ0 =   // PSRQ0
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_MACRxQC2R_PSRQ1 =   // PSRQ1
        bit_field_t<8, 0xff>::value<X>();

    static constexpr uint32_t ETH_MACISR_RESET_VALUE = 0x0;
    static constexpr uint32_t ETH_MACISR_RGSMIIIS = 0x1;   // RGSMIIIS
    static constexpr uint32_t ETH_MACISR_PHYIS = 0x8;      // PHYIS
    static constexpr uint32_t ETH_MACISR_PMTIS = 0x10;     // PMTIS
    static constexpr uint32_t ETH_MACISR_LPIIS = 0x20;     // LPIIS
    static constexpr uint32_t ETH_MACISR_MMCIS = 0x100;    // MMCIS
    static constexpr uint32_t ETH_MACISR_MMCRXIS = 0x200;  // MMCRXIS
    static constexpr uint32_t ETH_MACISR_MMCTXIS = 0x400;  // MMCTXIS
    static constexpr uint32_t ETH_MACISR_TSIS = 0x1000;    // TSIS
    static constexpr uint32_t ETH_MACISR_TXSTSIS = 0x2000; // TXSTSIS
    static constexpr uint32_t ETH_MACISR_RXSTSIS = 0x4000; // RXSTSIS

    static constexpr uint32_t ETH_MACIER_RESET_VALUE = 0x0;
    static constexpr uint32_t ETH_MACIER_RGSMIIIE = 0x1;   // RGSMIIIE
    static constexpr uint32_t ETH_MACIER_PHYIE = 0x8;      // PHYIE
    static constexpr uint32_t ETH_MACIER_PMTIE = 0x10;     // PMTIE
    static constexpr uint32_t ETH_MACIER_LPIIE = 0x20;     // LPIIE
    static constexpr uint32_t ETH_MACIER_TSIE = 0x1000;    // TSIE
    static constexpr uint32_t ETH_MACIER_TXSTSIE = 0x2000; // TXSTSIE
    static constexpr uint32_t ETH_MACIER_RXSTSIE = 0x4000; // RXSTSIE

    static constexpr uint32_t ETH_MACRxTxSR_RESET_VALUE = 0x0;
    static constexpr uint32_t ETH_MACRxTxSR_TJT = 0x1;    // TJT
    static constexpr uint32_t ETH_MACRxTxSR_NCARR = 0x2;  // NCARR
    static constexpr uint32_t ETH_MACRxTxSR_LCARR = 0x4;  // LCARR
    static constexpr uint32_t ETH_MACRxTxSR_EXDEF = 0x8;  // EXDEF
    static constexpr uint32_t ETH_MACRxTxSR_LCOL = 0x10;  // LCOL
    static constexpr uint32_t ETH_MACRxTxSR_EXCOL = 0x20; // EXCOL
    static constexpr uint32_t ETH_MACRxTxSR_RWT = 0x100;  // RWT

    static constexpr uint32_t ETH_MACPCSR_RESET_VALUE = 0x0;
    static constexpr uint32_t ETH_MACPCSR_PWRDWN = 0x1;            // PWRDWN
    static constexpr uint32_t ETH_MACPCSR_MGKPKTEN = 0x2;          // MGKPKTEN
    static constexpr uint32_t ETH_MACPCSR_RWKPKTEN = 0x4;          // RWKPKTEN
    static constexpr uint32_t ETH_MACPCSR_MGKPRCVD = 0x20;         // MGKPRCVD
    static constexpr uint32_t ETH_MACPCSR_RWKPRCVD = 0x40;         // RWKPRCVD
    static constexpr uint32_t ETH_MACPCSR_GLBLUCAST = 0x200;       // GLBLUCAST
    static constexpr uint32_t ETH_MACPCSR_RWKPFE = 0x400;          // RWKPFE
    template<uint32_t X>
    static constexpr uint32_t ETH_MACPCSR_RWKPTR =                 // RWKPTR
        bit_field_t<24, 0x1f>::value<X>();
    static constexpr uint32_t ETH_MACPCSR_RWKFILTRST = 0x80000000; // RWKFILTRST

    static constexpr uint32_t ETH_MACRWKPFR_RESET_VALUE = 0x0;
    static constexpr uint32_t ETH_MACRWKPFR_TLPIEN = 0x1;     // TLPIEN
    static constexpr uint32_t ETH_MACRWKPFR_TLPIEX = 0x2;     // TLPIEX
    static constexpr uint32_t ETH_MACRWKPFR_RLPIEN = 0x4;     // RLPIEN
    static constexpr uint32_t ETH_MACRWKPFR_RLPIEX = 0x8;     // RLPIEX
    static constexpr uint32_t ETH_MACRWKPFR_TLPIST = 0x100;   // TLPIST
    static constexpr uint32_t ETH_MACRWKPFR_RLPIST = 0x200;   // RLPIST
    static constexpr uint32_t ETH_MACRWKPFR_LPIEN = 0x10000;  // LPIEN
    static constexpr uint32_t ETH_MACRWKPFR_PLS = 0x20000;    // PLS
    static constexpr uint32_t ETH_MACRWKPFR_PLSEN = 0x40000;  // PLSEN
    static constexpr uint32_t ETH_MACRWKPFR_LPITXA = 0x80000; // LPITXA
    static constexpr uint32_t ETH_MACRWKPFR_LPITE = 0x100000; // LPITE

    static constexpr uint32_t ETH_MACLCSR_RESET_VALUE = 0x0;
    static constexpr uint32_t ETH_MACLCSR_TLPIEN = 0x1;     // TLPIEN
    static constexpr uint32_t ETH_MACLCSR_TLPIEX = 0x2;     // TLPIEX
    static constexpr uint32_t ETH_MACLCSR_RLPIEN = 0x4;     // RLPIEN
    static constexpr uint32_t ETH_MACLCSR_RLPIEX = 0x8;     // RLPIEX
    static constexpr uint32_t ETH_MACLCSR_TLPIST = 0x100;   // TLPIST
    static constexpr uint32_t ETH_MACLCSR_RLPIST = 0x200;   // RLPIST
    static constexpr uint32_t ETH_MACLCSR_LPIEN = 0x10000;  // LPIEN
    static constexpr uint32_t ETH_MACLCSR_PLS = 0x20000;    // PLS
    static constexpr uint32_t ETH_MACLCSR_PLSEN = 0x40000;  // PLSEN
    static constexpr uint32_t ETH_MACLCSR_LPITXA = 0x80000; // LPITXA
    static constexpr uint32_t ETH_MACLCSR_LPITE = 0x100000; // LPITE

    static constexpr uint32_t ETH_MACLTCR_RESET_VALUE = 0x3e80000;
    template<uint32_t X>
    static constexpr uint32_t ETH_MACLTCR_TWT =   // TWT
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_MACLTCR_LST =   // LST
        bit_field_t<16, 0x3ff>::value<X>();

    static constexpr uint32_t ETH_MACLETR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ETH_MACLETR_LPIET =   // LPIET
        bit_field_t<3, 0x1ffff>::value<X>();

    static constexpr uint32_t ETH_MAC1USTCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ETH_MAC1USTCR_TIC_1US_CNTR =   // TIC_1US_CNTR
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t ETH_MACPHYCSR_RESET_VALUE = 0x0;
    static constexpr uint32_t ETH_MACPHYCSR_TC = 0x1;              // TC
    static constexpr uint32_t ETH_MACPHYCSR_LUD = 0x2;             // LUD
    static constexpr uint32_t ETH_MACPHYCSR_LNKMOD = 0x10000;      // LNKMOD
    template<uint32_t X>
    static constexpr uint32_t ETH_MACPHYCSR_LNKSPEED =             // LNKSPEED
        bit_field_t<17, 0x3>::value<X>();
    static constexpr uint32_t ETH_MACPHYCSR_LNKSTS = 0x80000;      // LNKSTS
    static constexpr uint32_t ETH_MACPHYCSR_JABTO = 0x100000;      // JABTO
    static constexpr uint32_t ETH_MACPHYCSR_FALSCARDET = 0x200000; // FALSCARDET

    static constexpr uint32_t ETH_MACVR_RESET_VALUE = 0x4042;
    template<uint32_t X>
    static constexpr uint32_t ETH_MACVR_SNPSVER =   // SNPSVER
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_MACVR_USERVER =   // USERVER
        bit_field_t<8, 0xff>::value<X>();

    static constexpr uint32_t ETH_MACDR_RESET_VALUE = 0x0;
    static constexpr uint32_t ETH_MACDR_RPESTS = 0x1;     // RPESTS
    template<uint32_t X>
    static constexpr uint32_t ETH_MACDR_RFCFCSTS =        // RFCFCSTS
        bit_field_t<1, 0x3>::value<X>();
    static constexpr uint32_t ETH_MACDR_TPESTS = 0x10000; // TPESTS
    template<uint32_t X>
    static constexpr uint32_t ETH_MACDR_TFCSTS =          // TFCSTS
        bit_field_t<17, 0x3>::value<X>();

    static constexpr uint32_t ETH_MACHWF1R_RESET_VALUE = 0x11141945;
    template<uint32_t X>
    static constexpr uint32_t ETH_MACHWF1R_RXFIFOSIZE =        // RXFIFOSIZE
        bit_field_t<0, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_MACHWF1R_TXFIFOSIZE =        // TXFIFOSIZE
        bit_field_t<6, 0x1f>::value<X>();
    static constexpr uint32_t ETH_MACHWF1R_OSTEN = 0x800;      // OSTEN
    static constexpr uint32_t ETH_MACHWF1R_PTOEN = 0x1000;     // PTOEN
    static constexpr uint32_t ETH_MACHWF1R_ADVTHWORD = 0x2000; // ADVTHWORD
    template<uint32_t X>
    static constexpr uint32_t ETH_MACHWF1R_ADDR64 =            // ADDR64
        bit_field_t<14, 0x3>::value<X>();
    static constexpr uint32_t ETH_MACHWF1R_DCBEN = 0x10000;    // DCBEN
    static constexpr uint32_t ETH_MACHWF1R_SPHEN = 0x20000;    // SPHEN
    static constexpr uint32_t ETH_MACHWF1R_TSOEN = 0x40000;    // TSOEN
    static constexpr uint32_t ETH_MACHWF1R_DBGMEMA = 0x80000;  // DBGMEMA
    static constexpr uint32_t ETH_MACHWF1R_AVSEL = 0x100000;   // AVSEL
    template<uint32_t X>
    static constexpr uint32_t ETH_MACHWF1R_HASHTBLSZ =         // HASHTBLSZ
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_MACHWF1R_L3L4FNUM =          // L3L4FNUM
        bit_field_t<27, 0xf>::value<X>();

    static constexpr uint32_t ETH_MACHWF2R_RESET_VALUE = 0x41040041;
    template<uint32_t X>
    static constexpr uint32_t ETH_MACHWF2R_RXQCNT =       // RXQCNT
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_MACHWF2R_TXQCNT =       // TXQCNT
        bit_field_t<6, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_MACHWF2R_RXCHCNT =      // RXCHCNT
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_MACHWF2R_TXCHCNT =      // TXCHCNT
        bit_field_t<18, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_MACHWF2R_PPSOUTNUM =    // PPSOUTNUM
        bit_field_t<24, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_MACHWF2R_AUXSNAPNUM =   // AUXSNAPNUM
        bit_field_t<28, 0x7>::value<X>();

    static constexpr uint32_t ETH_MACMDIOAR_RESET_VALUE = 0x0;
    static constexpr uint32_t ETH_MACMDIOAR_GB = 0x1;        // GB
    static constexpr uint32_t ETH_MACMDIOAR_C45E = 0x2;      // C45E
    template<uint32_t X>
    static constexpr uint32_t ETH_MACMDIOAR_GOC =            // GOC
        bit_field_t<2, 0x3>::value<X>();
    static constexpr uint32_t ETH_MACMDIOAR_SKAP = 0x10;     // SKAP
    template<uint32_t X>
    static constexpr uint32_t ETH_MACMDIOAR_CR =             // CR
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_MACMDIOAR_NTC =            // NTC
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_MACMDIOAR_RDA =            // RDA
        bit_field_t<16, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_MACMDIOAR_PA =             // PA
        bit_field_t<21, 0x1f>::value<X>();
    static constexpr uint32_t ETH_MACMDIOAR_BTB = 0x4000000; // BTB
    static constexpr uint32_t ETH_MACMDIOAR_PSE = 0x8000000; // PSE

    static constexpr uint32_t ETH_MACMDIODR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ETH_MACMDIODR_GD =   // GD
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_MACMDIODR_RA =   // RA
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t ETH_MACA0HR_RESET_VALUE = 0x8000ffff;
    template<uint32_t X>
    static constexpr uint32_t ETH_MACA0HR_ADDRHI =         // ADDRHI
        bit_field_t<0, 0xffff>::value<X>();
    static constexpr uint32_t ETH_MACA0HR_AE = 0x80000000; // AE

    static constexpr uint32_t ETH_MACA0LR_RESET_VALUE = 0xffffffff;

    static constexpr uint32_t ETH_MACA1HR_RESET_VALUE = 0xffff;
    template<uint32_t X>
    static constexpr uint32_t ETH_MACA1HR_ADDRHI =         // ADDRHI
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_MACA1HR_MBC =            // MBC
        bit_field_t<24, 0x3f>::value<X>();
    static constexpr uint32_t ETH_MACA1HR_SA = 0x40000000; // SA
    static constexpr uint32_t ETH_MACA1HR_AE = 0x80000000; // AE

    static constexpr uint32_t ETH_MACA1LR_RESET_VALUE = 0xffffffff;

    static constexpr uint32_t ETH_MACA2HR_RESET_VALUE = 0xffff;
    template<uint32_t X>
    static constexpr uint32_t ETH_MACA2HR_ADDRHI =         // ADDRHI
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_MACA2HR_MBC =            // MBC
        bit_field_t<24, 0x3f>::value<X>();
    static constexpr uint32_t ETH_MACA2HR_SA = 0x40000000; // SA
    static constexpr uint32_t ETH_MACA2HR_AE = 0x80000000; // AE

    static constexpr uint32_t ETH_MACA2LR_RESET_VALUE = 0xffffffff;

    static constexpr uint32_t ETH_MACA3HR_RESET_VALUE = 0xffff;
    template<uint32_t X>
    static constexpr uint32_t ETH_MACA3HR_ADDRHI =         // ADDRHI
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_MACA3HR_MBC =            // MBC
        bit_field_t<24, 0x3f>::value<X>();
    static constexpr uint32_t ETH_MACA3HR_SA = 0x40000000; // SA
    static constexpr uint32_t ETH_MACA3HR_AE = 0x80000000; // AE

    static constexpr uint32_t ETH_MACA3LR_RESET_VALUE = 0xffffffff;

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

    static constexpr uint32_t ETH_MACL3L4C0R_RESET_VALUE = 0x0;
    static constexpr uint32_t ETH_MACL3L4C0R_L3PEN0 = 0x1;       // L3PEN0
    static constexpr uint32_t ETH_MACL3L4C0R_L3SAM0 = 0x4;       // L3SAM0
    static constexpr uint32_t ETH_MACL3L4C0R_L3SAIM0 = 0x8;      // L3SAIM0
    static constexpr uint32_t ETH_MACL3L4C0R_L3DAM0 = 0x10;      // L3DAM0
    static constexpr uint32_t ETH_MACL3L4C0R_L3DAIM0 = 0x20;     // L3DAIM0
    template<uint32_t X>
    static constexpr uint32_t ETH_MACL3L4C0R_L3HSBM0 =           // L3HSBM0
        bit_field_t<6, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_MACL3L4C0R_L3HDBM0 =           // L3HDBM0
        bit_field_t<11, 0x1f>::value<X>();
    static constexpr uint32_t ETH_MACL3L4C0R_L4PEN0 = 0x10000;   // L4PEN0
    static constexpr uint32_t ETH_MACL3L4C0R_L4SPM0 = 0x40000;   // L4SPM0
    static constexpr uint32_t ETH_MACL3L4C0R_L4SPIM0 = 0x80000;  // L4SPIM0
    static constexpr uint32_t ETH_MACL3L4C0R_L4DPM0 = 0x100000;  // L4DPM0
    static constexpr uint32_t ETH_MACL3L4C0R_L4DPIM0 = 0x200000; // L4DPIM0

    static constexpr uint32_t ETH_MACL4A0R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ETH_MACL4A0R_L4SP0 =   // L4SP0
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_MACL4A0R_L4DP0 =   // L4DP0
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t ETH_MACL3A00R_RESET_VALUE = 0x0;

    static constexpr uint32_t ETH_MACL3A10R_RESET_VALUE = 0x0;

    static constexpr uint32_t ETH_MACL3A20_RESET_VALUE = 0x0;

    static constexpr uint32_t ETH_MACL3A30_RESET_VALUE = 0x0;

    static constexpr uint32_t ETH_MACL3L4C1R_RESET_VALUE = 0x0;
    static constexpr uint32_t ETH_MACL3L4C1R_L3PEN1 = 0x1;       // L3PEN1
    static constexpr uint32_t ETH_MACL3L4C1R_L3SAM1 = 0x4;       // L3SAM1
    static constexpr uint32_t ETH_MACL3L4C1R_L3SAIM1 = 0x8;      // L3SAIM1
    static constexpr uint32_t ETH_MACL3L4C1R_L3DAM1 = 0x10;      // L3DAM1
    static constexpr uint32_t ETH_MACL3L4C1R_L3DAIM1 = 0x20;     // L3DAIM1
    template<uint32_t X>
    static constexpr uint32_t ETH_MACL3L4C1R_L3HSBM1 =           // L3HSBM1
        bit_field_t<6, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_MACL3L4C1R_L3HDBM1 =           // L3HDBM1
        bit_field_t<11, 0x1f>::value<X>();
    static constexpr uint32_t ETH_MACL3L4C1R_L4PEN1 = 0x10000;   // L4PEN1
    static constexpr uint32_t ETH_MACL3L4C1R_L4SPM1 = 0x40000;   // L4SPM1
    static constexpr uint32_t ETH_MACL3L4C1R_L4SPIM1 = 0x80000;  // L4SPIM1
    static constexpr uint32_t ETH_MACL3L4C1R_L4DPM1 = 0x100000;  // L4DPM1
    static constexpr uint32_t ETH_MACL3L4C1R_L4DPIM1 = 0x200000; // L4DPIM1

    static constexpr uint32_t ETH_MACL4A1R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ETH_MACL4A1R_L4SP1 =   // L4SP1
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_MACL4A1R_L4DP1 =   // L4DP1
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t ETH_MACL3A01R_RESET_VALUE = 0x0;

    static constexpr uint32_t ETH_MACL3A11R_RESET_VALUE = 0x0;

    static constexpr uint32_t ETH_MACL3A21R_RESET_VALUE = 0x0;

    static constexpr uint32_t ETH_MACL3A31R_RESET_VALUE = 0x0;

    static constexpr uint32_t ETH_MACARPAR_RESET_VALUE = 0x0;

    static constexpr uint32_t ETH_MACTSCR_RESET_VALUE = 0x2000;
    static constexpr uint32_t ETH_MACTSCR_TSENA = 0x1;              // TSENA
    static constexpr uint32_t ETH_MACTSCR_TSCFUPDT = 0x2;           // TSCFUPDT
    static constexpr uint32_t ETH_MACTSCR_TSINIT = 0x4;             // TSINIT
    static constexpr uint32_t ETH_MACTSCR_TSUPDT = 0x8;             // TSUPDT
    static constexpr uint32_t ETH_MACTSCR_TSADDREG = 0x20;          // TSADDREG
    static constexpr uint32_t ETH_MACTSCR_TSENALL = 0x100;          // TSENALL
    static constexpr uint32_t ETH_MACTSCR_TSCTRLSSR = 0x200;        // TSCTRLSSR
    static constexpr uint32_t ETH_MACTSCR_TSVER2ENA = 0x400;        // TSVER2ENA
    static constexpr uint32_t ETH_MACTSCR_TSIPENA = 0x800;          // TSIPENA
    static constexpr uint32_t ETH_MACTSCR_TSIPV6ENA = 0x1000;       // TSIPV6ENA
    static constexpr uint32_t ETH_MACTSCR_TSIPV4ENA = 0x2000;       // TSIPV4ENA
    static constexpr uint32_t ETH_MACTSCR_TSEVNTENA = 0x4000;       // TSEVNTENA
    static constexpr uint32_t ETH_MACTSCR_TSMSTRENA = 0x8000;       // TSMSTRENA
    template<uint32_t X>
    static constexpr uint32_t ETH_MACTSCR_SNAPTYPSEL =              // SNAPTYPSEL
        bit_field_t<16, 0x3>::value<X>();
    static constexpr uint32_t ETH_MACTSCR_TSENMACADDR = 0x40000;    // TSENMACADDR
    static constexpr uint32_t ETH_MACTSCR_CSC = 0x80000;            // CSC
    static constexpr uint32_t ETH_MACTSCR_TXTSSTSM = 0x1000000;     // TXTSSTSM
    static constexpr uint32_t ETH_MACTSCR_AV8021ASMEN = 0x10000000; // AV8021ASMEN

    static constexpr uint32_t ETH_MACSSIR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ETH_MACSSIR_SNSINC =   // SNSINC
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_MACSSIR_SSINC =    // SSINC
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t ETH_MACSTSR_RESET_VALUE = 0x0;

    static constexpr uint32_t ETH_MACSTNR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ETH_MACSTNR_TSSS =   // TSSS
        bit_field_t<0, 0x7fffffff>::value<X>();

    static constexpr uint32_t ETH_MACSTSUR_RESET_VALUE = 0x0;

    static constexpr uint32_t ETH_MACSTNUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ETH_MACSTNUR_TSSS =               // TSSS
        bit_field_t<0, 0x7fffffff>::value<X>();
    static constexpr uint32_t ETH_MACSTNUR_ADDSUB = 0x80000000; // ADDSUB

    static constexpr uint32_t ETH_MACTSAR_RESET_VALUE = 0x0;

    static constexpr uint32_t ETH_MACTSSR_RESET_VALUE = 0x0;
    static constexpr uint32_t ETH_MACTSSR_TSSOVF = 0x1;       // TSSOVF
    static constexpr uint32_t ETH_MACTSSR_TSTARGT0 = 0x2;     // TSTARGT0
    static constexpr uint32_t ETH_MACTSSR_AUXTSTRIG = 0x4;    // AUXTSTRIG
    static constexpr uint32_t ETH_MACTSSR_TSTRGTERR0 = 0x8;   // TSTRGTERR0
    static constexpr uint32_t ETH_MACTSSR_TXTSSIS = 0x8000;   // TXTSSIS
    template<uint32_t X>
    static constexpr uint32_t ETH_MACTSSR_ATSSTN =            // ATSSTN
        bit_field_t<16, 0xf>::value<X>();
    static constexpr uint32_t ETH_MACTSSR_ATSSTM = 0x1000000; // ATSSTM
    template<uint32_t X>
    static constexpr uint32_t ETH_MACTSSR_ATSNS =             // ATSNS
        bit_field_t<25, 0x1f>::value<X>();

    static constexpr uint32_t ETH_MACTxTSSNR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ETH_MACTxTSSNR_TXTSSLO =              // TXTSSLO
        bit_field_t<0, 0x7fffffff>::value<X>();
    static constexpr uint32_t ETH_MACTxTSSNR_TXTSSMIS = 0x80000000; // TXTSSMIS

    static constexpr uint32_t ETH_MACTxTSSSR_RESET_VALUE = 0x0;

    static constexpr uint32_t ETH_MACACR_RESET_VALUE = 0x0;
    static constexpr uint32_t ETH_MACACR_ATSFC = 0x1;   // ATSFC
    static constexpr uint32_t ETH_MACACR_ATSEN0 = 0x10; // ATSEN0
    static constexpr uint32_t ETH_MACACR_ATSEN1 = 0x20; // ATSEN1
    static constexpr uint32_t ETH_MACACR_ATSEN2 = 0x40; // ATSEN2
    static constexpr uint32_t ETH_MACACR_ATSEN3 = 0x80; // ATSEN3

    static constexpr uint32_t ETH_MACATSNR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ETH_MACATSNR_AUXTSLO =   // AUXTSLO
        bit_field_t<0, 0x7fffffff>::value<X>();

    static constexpr uint32_t ETH_MACATSSR_RESET_VALUE = 0x0;

    static constexpr uint32_t ETH_MACTSIACR_RESET_VALUE = 0x0;

    static constexpr uint32_t ETH_MACTSEACR_RESET_VALUE = 0x0;

    static constexpr uint32_t ETH_MACTSICNR_RESET_VALUE = 0x0;

    static constexpr uint32_t ETH_MACTSECNR_RESET_VALUE = 0x0;

    static constexpr uint32_t ETH_MACPPSCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ETH_MACPPSCR_PPSCTRL =       // PPSCTRL
        bit_field_t<0, 0xf>::value<X>();
    static constexpr uint32_t ETH_MACPPSCR_PPSEN0 = 0x10;  // PPSEN0
    template<uint32_t X>
    static constexpr uint32_t ETH_MACPPSCR_TRGTMODSEL0 =   // TRGTMODSEL0
        bit_field_t<5, 0x3>::value<X>();

    static constexpr uint32_t ETH_MACPPSTTSR_RESET_VALUE = 0x0;

    static constexpr uint32_t ETH_MACPPSTTNR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ETH_MACPPSTTNR_TTSL0 =                 // TTSL0
        bit_field_t<0, 0x7fffffff>::value<X>();
    static constexpr uint32_t ETH_MACPPSTTNR_TRGTBUSY0 = 0x80000000; // TRGTBUSY0

    static constexpr uint32_t ETH_MACPPSIR_RESET_VALUE = 0x0;

    static constexpr uint32_t ETH_MACPPSWR_RESET_VALUE = 0x0;

    static constexpr uint32_t ETH_MACPOCR_RESET_VALUE = 0x0;
    static constexpr uint32_t ETH_MACPOCR_PTOEN = 0x1;       // PTOEN
    static constexpr uint32_t ETH_MACPOCR_ASYNCEN = 0x2;     // ASYNCEN
    static constexpr uint32_t ETH_MACPOCR_APDREQEN = 0x4;    // APDREQEN
    static constexpr uint32_t ETH_MACPOCR_ASYNCTRIG = 0x10;  // ASYNCTRIG
    static constexpr uint32_t ETH_MACPOCR_APDREQTRIG = 0x20; // APDREQTRIG
    static constexpr uint32_t ETH_MACPOCR_DRRDIS = 0x40;     // DRRDIS
    template<uint32_t X>
    static constexpr uint32_t ETH_MACPOCR_DN =               // DN
        bit_field_t<8, 0xff>::value<X>();

    static constexpr uint32_t ETH_MACSPI0R_RESET_VALUE = 0x0;

    static constexpr uint32_t ETH_MACSPI1R_RESET_VALUE = 0x0;

    static constexpr uint32_t ETH_MACSPI2R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ETH_MACSPI2R_SPI2 =   // SPI2
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t ETH_MACLMIR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ETH_MACLMIR_LSI =       // LSI
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_MACLMIR_DRSYNCR =   // DRSYNCR
        bit_field_t<8, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_MACLMIR_LMPDRI =    // LMPDRI
        bit_field_t<24, 0xff>::value<X>();
};


////
//
//      ETH_MTL
//
////

struct stm32mp15xxx_eth_mtl_t
{
    volatile uint32_t ETH_MTLOMR;       // [read-write] The Operating Mode register establishes the Transmit and Receive operating modes and commands.
    reserved_t<0x7> _0x20;
    volatile uint32_t ETH_MTLISR;       // [read-only] The software driver (application) reads this register during interrupt service routine or polling to determine the interrupt status of MTL queues and the MAC.
    reserved_t<0x37> _0x100;
    volatile uint32_t ETH_MTLTxQ0OMR;   // [read-write] Tx queue 0 operating mode Register
    volatile uint32_t ETH_MTLTxQ0UR;    // [read-only] Tx queue 0 underflow register
    volatile uint32_t ETH_MTLTxQ0DR;    // [read-only] Tx queue 0 underflow register
    reserved_t<0x2> _0x114;
    volatile uint32_t ETH_MTLTxQ0ESR;   // [read-only] Tx queue x ETS status Register
    reserved_t<0x5> _0x12c;
    volatile uint32_t ETH_MTLQ0ICSR;    // [read-write] Queue 0 interrupt control status Register
    volatile uint32_t ETH_MTLRxQ0OMR;   // [read-write] Rx queue 0 operating mode register
    volatile uint32_t ETH_MTLRxQ0MPOCR; // [read-only] Rx queue 0 missed packet and overflow counter register
    volatile uint32_t ETH_MTLRxQ0DR;    // [read-only] Rx queue i debug register
    volatile uint32_t ETH_MTLRxQ0CR;    // [read-write] Rx queue 0 control register
    volatile uint32_t ETH_MTLTxQ1OMR;   // [read-write] Tx queue 1 operating mode Register
    volatile uint32_t ETH_MTLTxQ1UR;    // [read-only] Tx queue 1 underflow register
    volatile uint32_t ETH_MTLTxQ1DR;    // [read-only] Tx queue 1 underflow register
    reserved_t<0x1> _0x150;
    volatile uint32_t ETH_MTLTxQ1ECR;   // [read-write] The Queue ETS Control register controls the enhanced transmission selection operation.
    volatile uint32_t ETH_MTLTxQ1ESR;   // [read-only] Tx queue x ETS status Register
    volatile uint32_t ETH_MTLTxQ1QWR;   // [read-write] This register provides the average traffic transmitted on queue 1.
    volatile uint32_t ETH_MTLTxQ1SSCR;  // [read-write] The sendSlopeCredit register contains the sendSlope credit value required for the credit-based shaper algorithm for the Queue.
    volatile uint32_t ETH_MTLTxQ1HCR;   // [read-write] The hiCredit register contains the hiCredit value required for the credit-based shaper algorithm for the Queue.
    volatile uint32_t ETH_MTLTxQ1LCR;   // [read-write] The loCredit register contains the loCredit value required for the credit-based shaper algorithm for the Queue.
    reserved_t<0x1> _0x16c;
    volatile uint32_t ETH_MTLQ1ICSR;    // [read-write] Queue 1 interrupt control status Register
    volatile uint32_t ETH_MTLRxQ1OMR;   // [read-write] Rx queue 1 operating mode register
    volatile uint32_t ETH_MTLRxQ1MPOCR; // [read-only] Rx queue 1 missed packet and overflow counter register
    volatile uint32_t ETH_MTLRxQ1DR;    // [read-only] Rx queue i debug register
    volatile uint32_t ETH_MTLRxQ1CR;    // [read-write] Rx queue 1 control register

    static constexpr uint32_t ETH_MTLOMR_RESET_VALUE = 0x0;
    static constexpr uint32_t ETH_MTLOMR_DTXSTS = 0x2;    // DTXSTS
    static constexpr uint32_t ETH_MTLOMR_RAA = 0x4;       // RAA
    template<uint32_t X>
    static constexpr uint32_t ETH_MTLOMR_SCHALG =         // SCHALG
        bit_field_t<5, 0x3>::value<X>();
    static constexpr uint32_t ETH_MTLOMR_CNTPRST = 0x100; // CNTPRST
    static constexpr uint32_t ETH_MTLOMR_CNTCLR = 0x200;  // CNTCLR

    static constexpr uint32_t ETH_MTLISR_RESET_VALUE = 0x0;
    static constexpr uint32_t ETH_MTLISR_Q0IS = 0x1; // Q0IS
    static constexpr uint32_t ETH_MTLISR_Q1IS = 0x2; // Q1IS

    static constexpr uint32_t ETH_MTLTxQ0OMR_RESET_VALUE = 0x0;
    static constexpr uint32_t ETH_MTLTxQ0OMR_FTQ = 0x1; // FTQ
    static constexpr uint32_t ETH_MTLTxQ0OMR_TSF = 0x2; // TSF
    template<uint32_t X>
    static constexpr uint32_t ETH_MTLTxQ0OMR_TXQEN =    // TXQEN
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_MTLTxQ0OMR_TTC =      // TTC
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_MTLTxQ0OMR_TQS =      // TQS
        bit_field_t<16, 0x1ff>::value<X>();

    static constexpr uint32_t ETH_MTLTxQ1OMR_RESET_VALUE = 0x0;
    static constexpr uint32_t ETH_MTLTxQ1OMR_FTQ = 0x1; // FTQ
    static constexpr uint32_t ETH_MTLTxQ1OMR_TSF = 0x2; // TSF
    template<uint32_t X>
    static constexpr uint32_t ETH_MTLTxQ1OMR_TXQEN =    // TXQEN
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_MTLTxQ1OMR_TTC =      // TTC
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_MTLTxQ1OMR_TQS =      // TQS
        bit_field_t<16, 0x1ff>::value<X>();

    static constexpr uint32_t ETH_MTLTxQ0UR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ETH_MTLTxQ0UR_UFFRMCNT =        // UFFRMCNT
        bit_field_t<0, 0x7ff>::value<X>();
    static constexpr uint32_t ETH_MTLTxQ0UR_UFCNTOVF = 0x800; // UFCNTOVF

    static constexpr uint32_t ETH_MTLTxQ1UR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ETH_MTLTxQ1UR_UFFRMCNT =        // UFFRMCNT
        bit_field_t<0, 0x7ff>::value<X>();
    static constexpr uint32_t ETH_MTLTxQ1UR_UFCNTOVF = 0x800; // UFCNTOVF

    static constexpr uint32_t ETH_MTLTxQ0DR_RESET_VALUE = 0x0;
    static constexpr uint32_t ETH_MTLTxQ0DR_TXQPAUSED = 0x1;  // TXQPAUSED
    template<uint32_t X>
    static constexpr uint32_t ETH_MTLTxQ0DR_TRCSTS =          // TRCSTS
        bit_field_t<1, 0x3>::value<X>();
    static constexpr uint32_t ETH_MTLTxQ0DR_TWCSTS = 0x8;     // TWCSTS
    static constexpr uint32_t ETH_MTLTxQ0DR_TXQSTS = 0x10;    // TXQSTS
    static constexpr uint32_t ETH_MTLTxQ0DR_TXSTSFSTS = 0x20; // TXSTSFSTS
    template<uint32_t X>
    static constexpr uint32_t ETH_MTLTxQ0DR_PTXQ =            // PTXQ
        bit_field_t<16, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_MTLTxQ0DR_STXSTSF =         // STXSTSF
        bit_field_t<20, 0x7>::value<X>();

    static constexpr uint32_t ETH_MTLTxQ1DR_RESET_VALUE = 0x0;
    static constexpr uint32_t ETH_MTLTxQ1DR_TXQPAUSED = 0x1;  // TXQPAUSED
    template<uint32_t X>
    static constexpr uint32_t ETH_MTLTxQ1DR_TRCSTS =          // TRCSTS
        bit_field_t<1, 0x3>::value<X>();
    static constexpr uint32_t ETH_MTLTxQ1DR_TWCSTS = 0x8;     // TWCSTS
    static constexpr uint32_t ETH_MTLTxQ1DR_TXQSTS = 0x10;    // TXQSTS
    static constexpr uint32_t ETH_MTLTxQ1DR_TXSTSFSTS = 0x20; // TXSTSFSTS
    template<uint32_t X>
    static constexpr uint32_t ETH_MTLTxQ1DR_PTXQ =            // PTXQ
        bit_field_t<16, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_MTLTxQ1DR_STXSTSF =         // STXSTSF
        bit_field_t<20, 0x7>::value<X>();

    static constexpr uint32_t ETH_MTLTxQ0ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ETH_MTLTxQ0ESR_ABS =   // ABS
        bit_field_t<0, 0xffffff>::value<X>();

    static constexpr uint32_t ETH_MTLTxQ1ESR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ETH_MTLTxQ1ESR_ABS =   // ABS
        bit_field_t<0, 0xffffff>::value<X>();

    static constexpr uint32_t ETH_MTLQ0ICSR_RESET_VALUE = 0x0;
    static constexpr uint32_t ETH_MTLQ0ICSR_TXUNFIS = 0x1;     // TXUNFIS
    static constexpr uint32_t ETH_MTLQ0ICSR_ABPSIS = 0x2;      // ABPSIS
    static constexpr uint32_t ETH_MTLQ0ICSR_TXUIE = 0x100;     // TXUIE
    static constexpr uint32_t ETH_MTLQ0ICSR_ABPSIE = 0x200;    // ABPSIE
    static constexpr uint32_t ETH_MTLQ0ICSR_RXOVFIS = 0x10000; // RXOVFIS
    static constexpr uint32_t ETH_MTLQ0ICSR_RXOIE = 0x1000000; // RXOIE

    static constexpr uint32_t ETH_MTLQ1ICSR_RESET_VALUE = 0x0;
    static constexpr uint32_t ETH_MTLQ1ICSR_TXUNFIS = 0x1;     // TXUNFIS
    static constexpr uint32_t ETH_MTLQ1ICSR_ABPSIS = 0x2;      // ABPSIS
    static constexpr uint32_t ETH_MTLQ1ICSR_TXUIE = 0x100;     // TXUIE
    static constexpr uint32_t ETH_MTLQ1ICSR_ABPSIE = 0x200;    // ABPSIE
    static constexpr uint32_t ETH_MTLQ1ICSR_RXOVFIS = 0x10000; // RXOVFIS
    static constexpr uint32_t ETH_MTLQ1ICSR_RXOIE = 0x1000000; // RXOIE

    static constexpr uint32_t ETH_MTLRxQ0OMR_RESET_VALUE = 0x700000;
    template<uint32_t X>
    static constexpr uint32_t ETH_MTLRxQ0OMR_RTC =              // RTC
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t ETH_MTLRxQ0OMR_FUP = 0x8;         // FUP
    static constexpr uint32_t ETH_MTLRxQ0OMR_FEP = 0x10;        // FEP
    static constexpr uint32_t ETH_MTLRxQ0OMR_RSF = 0x20;        // RSF
    static constexpr uint32_t ETH_MTLRxQ0OMR_DIS_TCP_EF = 0x40; // DIS_TCP_EF
    static constexpr uint32_t ETH_MTLRxQ0OMR_EHFC = 0x80;       // EHFC
    template<uint32_t X>
    static constexpr uint32_t ETH_MTLRxQ0OMR_RFA =              // RFA
        bit_field_t<8, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_MTLRxQ0OMR_RFD =              // RFD
        bit_field_t<14, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_MTLRxQ0OMR_RQS =              // RQS
        bit_field_t<20, 0xf>::value<X>();

    static constexpr uint32_t ETH_MTLRxQ1OMR_RESET_VALUE = 0x700000;
    template<uint32_t X>
    static constexpr uint32_t ETH_MTLRxQ1OMR_RTC =              // RTC
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t ETH_MTLRxQ1OMR_FUP = 0x8;         // FUP
    static constexpr uint32_t ETH_MTLRxQ1OMR_FEP = 0x10;        // FEP
    static constexpr uint32_t ETH_MTLRxQ1OMR_RSF = 0x20;        // RSF
    static constexpr uint32_t ETH_MTLRxQ1OMR_DIS_TCP_EF = 0x40; // DIS_TCP_EF
    static constexpr uint32_t ETH_MTLRxQ1OMR_EHFC = 0x80;       // EHFC
    template<uint32_t X>
    static constexpr uint32_t ETH_MTLRxQ1OMR_RFA =              // RFA
        bit_field_t<8, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_MTLRxQ1OMR_RFD =              // RFD
        bit_field_t<14, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_MTLRxQ1OMR_RQS =              // RQS
        bit_field_t<20, 0xf>::value<X>();

    static constexpr uint32_t ETH_MTLRxQ0MPOCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ETH_MTLRxQ0MPOCR_OVFPKTCNT =            // OVFPKTCNT
        bit_field_t<0, 0x7ff>::value<X>();
    static constexpr uint32_t ETH_MTLRxQ0MPOCR_OVFCNTOVF = 0x800;     // OVFCNTOVF
    template<uint32_t X>
    static constexpr uint32_t ETH_MTLRxQ0MPOCR_MISPKTCNT =            // MISPKTCNT
        bit_field_t<16, 0x7ff>::value<X>();
    static constexpr uint32_t ETH_MTLRxQ0MPOCR_MISCNTOVF = 0x8000000; // MISCNTOVF

    static constexpr uint32_t ETH_MTLRxQ1MPOCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ETH_MTLRxQ1MPOCR_OVFPKTCNT =            // OVFPKTCNT
        bit_field_t<0, 0x7ff>::value<X>();
    static constexpr uint32_t ETH_MTLRxQ1MPOCR_OVFCNTOVF = 0x800;     // OVFCNTOVF
    template<uint32_t X>
    static constexpr uint32_t ETH_MTLRxQ1MPOCR_MISPKTCNT =            // MISPKTCNT
        bit_field_t<16, 0x7ff>::value<X>();
    static constexpr uint32_t ETH_MTLRxQ1MPOCR_MISCNTOVF = 0x8000000; // MISCNTOVF

    static constexpr uint32_t ETH_MTLRxQ0DR_RESET_VALUE = 0x0;
    static constexpr uint32_t ETH_MTLRxQ0DR_RWCSTS = 0x1; // RWCSTS
    template<uint32_t X>
    static constexpr uint32_t ETH_MTLRxQ0DR_RRCSTS =      // RRCSTS
        bit_field_t<1, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_MTLRxQ0DR_RXQSTS =      // RXQSTS
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_MTLRxQ0DR_PRXQ =        // PRXQ
        bit_field_t<16, 0x3fff>::value<X>();

    static constexpr uint32_t ETH_MTLRxQ1DR_RESET_VALUE = 0x0;
    static constexpr uint32_t ETH_MTLRxQ1DR_RWCSTS = 0x1; // RWCSTS
    template<uint32_t X>
    static constexpr uint32_t ETH_MTLRxQ1DR_RRCSTS =      // RRCSTS
        bit_field_t<1, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_MTLRxQ1DR_RXQSTS =      // RXQSTS
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ETH_MTLRxQ1DR_PRXQ =        // PRXQ
        bit_field_t<16, 0x3fff>::value<X>();

    static constexpr uint32_t ETH_MTLRxQ0CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ETH_MTLRxQ0CR_RXQ_WEGT =           // RXQ_WEGT
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t ETH_MTLRxQ0CR_RXQ_FRM_ARBIT = 0x8; // RXQ_FRM_ARBIT

    static constexpr uint32_t ETH_MTLRxQ1CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ETH_MTLRxQ1CR_RXQ_WEGT =           // RXQ_WEGT
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t ETH_MTLRxQ1CR_RXQ_FRM_ARBIT = 0x8; // RXQ_FRM_ARBIT

    static constexpr uint32_t ETH_MTLTxQ1ECR_RESET_VALUE = 0x0;
    static constexpr uint32_t ETH_MTLTxQ1ECR_AVALG = 0x4; // AVALG
    static constexpr uint32_t ETH_MTLTxQ1ECR_CC = 0x8;    // CC
    template<uint32_t X>
    static constexpr uint32_t ETH_MTLTxQ1ECR_SLC =        // SLC
        bit_field_t<4, 0x7>::value<X>();

    static constexpr uint32_t ETH_MTLTxQ1QWR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ETH_MTLTxQ1QWR_ISCQW =   // ISCQW
        bit_field_t<0, 0x1fffff>::value<X>();

    static constexpr uint32_t ETH_MTLTxQ1SSCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ETH_MTLTxQ1SSCR_SSC =   // SSC
        bit_field_t<0, 0x3fff>::value<X>();

    static constexpr uint32_t ETH_MTLTxQ1HCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ETH_MTLTxQ1HCR_HC =   // HC
        bit_field_t<0, 0x1fffffff>::value<X>();

    static constexpr uint32_t ETH_MTLTxQ1LCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ETH_MTLTxQ1LCR_LC =   // LC
        bit_field_t<0, 0x1fffffff>::value<X>();
};


template<>
struct peripheral_t<STM32MP15xxx, ETH_MAC_MMC>
{
    typedef stm32mp15xxx_eth_mac_mmc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32MP15xxx, ETH_MTL>
{
    typedef stm32mp15xxx_eth_mtl_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32MP15xxx, ETH_DMA>
{
    typedef stm32mp15xxx_eth_dma_t T;
    static T& V;
};

using eth_dma_t = peripheral_t<mcu_svd, ETH_DMA>;
using eth_mac_mmc_t = peripheral_t<mcu_svd, ETH_MAC_MMC>;
using eth_mtl_t = peripheral_t<mcu_svd, ETH_MTL>;

