#pragma once

////
//
//      STM32F2 Ethernet peripherals
//
////

////
//
//      Ethernet: DMA controller operation
//
////

struct stm32f215_ethernet_dma_t
{
    volatile uint32_t DMABMR;    // [read-write] Ethernet DMA bus mode register
    volatile uint32_t DMATPDR;   // [read-write] Ethernet DMA transmit poll demand register
    volatile uint32_t DMARPDR;   // [read-write] EHERNET DMA receive poll demand register
    volatile uint32_t DMARDLAR;  // [read-write] Ethernet DMA receive descriptor list address register
    volatile uint32_t DMATDLAR;  // [read-write] Ethernet DMA transmit descriptor list address register
    volatile uint32_t DMASR;     // Ethernet DMA status register
    volatile uint32_t DMAOMR;    // [read-write] Ethernet DMA operation mode register
    volatile uint32_t DMAIER;    // [read-write] Ethernet DMA interrupt enable register
    volatile uint32_t DMAMFBOCR; // [read-write] Ethernet DMA missed frame and buffer overflow counter register
    volatile uint32_t DMARSWTR;  // [read-write] Ethernet DMA receive status watchdog timer register
    reserved_t<0x8> _0x48;
    volatile uint32_t DMACHTDR;  // [read-only] Ethernet DMA current host transmit descriptor register
    volatile uint32_t DMACHRDR;  // [read-only] Ethernet DMA current host receive descriptor register
    volatile uint32_t DMACHTBAR; // [read-only] Ethernet DMA current host transmit buffer address register
    volatile uint32_t DMACHRBAR; // [read-only] Ethernet DMA current host receive buffer address register

    static constexpr uint32_t DMABMR_RESET_VALUE = 0x20101;
    static constexpr uint32_t DMABMR_SR = 0x1;        // Software reset
    static constexpr uint32_t DMABMR_DA = 0x2;        // DMA Arbitration
    template<uint32_t X>
    static constexpr uint32_t DMABMR_DSL =            // Descriptor skip length
        bit_field_t<2, 0x1f>::value<X>();
    static constexpr uint32_t DMABMR_EDFE = 0x80;     // Enhanced descriptor format enable
    template<uint32_t X>
    static constexpr uint32_t DMABMR_PBL =            // Programmable burst length
        bit_field_t<8, 0x3f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMABMR_RTPR =           // Rx Tx priority ratio
        bit_field_t<14, 0x3>::value<X>();
    static constexpr uint32_t DMABMR_FB = 0x10000;    // Fixed burst
    template<uint32_t X>
    static constexpr uint32_t DMABMR_RDP =            // Rx DMA PBL
        bit_field_t<17, 0x3f>::value<X>();
    static constexpr uint32_t DMABMR_USP = 0x800000;  // Use separate PBL
    static constexpr uint32_t DMABMR_FPM = 0x1000000; // 4xPBL mode
    static constexpr uint32_t DMABMR_AAB = 0x2000000; // Address-aligned beats
    static constexpr uint32_t DMABMR_MB = 0x4000000;  // Mixed burst

    static constexpr uint32_t DMATPDR_RESET_VALUE = 0x0;

    static constexpr uint32_t DMARPDR_RESET_VALUE = 0x0;

    static constexpr uint32_t DMARDLAR_RESET_VALUE = 0x0;

    static constexpr uint32_t DMATDLAR_RESET_VALUE = 0x0;

    static constexpr uint32_t DMASR_RESET_VALUE = 0x0;
    static constexpr uint32_t DMASR_TS = 0x1;          // Transmit status
    static constexpr uint32_t DMASR_TPSS = 0x2;        // Transmit process stopped status
    static constexpr uint32_t DMASR_TBUS = 0x4;        // Transmit buffer unavailable status
    static constexpr uint32_t DMASR_TJTS = 0x8;        // Transmit jabber timeout status
    static constexpr uint32_t DMASR_ROS = 0x10;        // Receive overflow status
    static constexpr uint32_t DMASR_TUS = 0x20;        // Transmit underflow status
    static constexpr uint32_t DMASR_RS = 0x40;         // Receive status
    static constexpr uint32_t DMASR_RBUS = 0x80;       // Receive buffer unavailable status
    static constexpr uint32_t DMASR_RPSS = 0x100;      // Receive process stopped status
    static constexpr uint32_t DMASR_PWTS = 0x200;      // Receive watchdog timeout status
    static constexpr uint32_t DMASR_ETS = 0x400;       // Early transmit status
    static constexpr uint32_t DMASR_FBES = 0x2000;     // Fatal bus error status
    static constexpr uint32_t DMASR_ERS = 0x4000;      // Early receive status
    static constexpr uint32_t DMASR_AIS = 0x8000;      // Abnormal interrupt summary
    static constexpr uint32_t DMASR_NIS = 0x10000;     // Normal interrupt summary
    template<uint32_t X>
    static constexpr uint32_t DMASR_RPS =              // Receive process state
        bit_field_t<17, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMASR_TPS =              // Transmit process state
        bit_field_t<20, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMASR_EBS =              // Error bits status
        bit_field_t<23, 0x7>::value<X>();
    static constexpr uint32_t DMASR_MMCS = 0x8000000;  // MMC status
    static constexpr uint32_t DMASR_PMTS = 0x10000000; // PMT status
    static constexpr uint32_t DMASR_TSTS = 0x20000000; // Time stamp trigger status

    static constexpr uint32_t DMAOMR_RESET_VALUE = 0x0;
    static constexpr uint32_t DMAOMR_SR = 0x2;           // SR
    static constexpr uint32_t DMAOMR_OSF = 0x4;          // OSF
    template<uint32_t X>
    static constexpr uint32_t DMAOMR_RTC =               // RTC
        bit_field_t<3, 0x3>::value<X>();
    static constexpr uint32_t DMAOMR_FUGF = 0x40;        // FUGF
    static constexpr uint32_t DMAOMR_FEF = 0x80;         // FEF
    static constexpr uint32_t DMAOMR_ST = 0x2000;        // ST
    template<uint32_t X>
    static constexpr uint32_t DMAOMR_TTC =               // TTC
        bit_field_t<14, 0x7>::value<X>();
    static constexpr uint32_t DMAOMR_FTF = 0x100000;     // FTF
    static constexpr uint32_t DMAOMR_TSF = 0x200000;     // TSF
    static constexpr uint32_t DMAOMR_DFRF = 0x1000000;   // DFRF
    static constexpr uint32_t DMAOMR_RSF = 0x2000000;    // RSF
    static constexpr uint32_t DMAOMR_DTCEFD = 0x4000000; // DTCEFD

    static constexpr uint32_t DMAIER_RESET_VALUE = 0x0;
    static constexpr uint32_t DMAIER_TIE = 0x1;      // Transmit interrupt enable
    static constexpr uint32_t DMAIER_TPSIE = 0x2;    // Transmit process stopped interrupt enable
    static constexpr uint32_t DMAIER_TBUIE = 0x4;    // Transmit buffer unavailable interrupt enable
    static constexpr uint32_t DMAIER_TJTIE = 0x8;    // Transmit jabber timeout interrupt enable
    static constexpr uint32_t DMAIER_ROIE = 0x10;    // Overflow interrupt enable
    static constexpr uint32_t DMAIER_TUIE = 0x20;    // Underflow interrupt enable
    static constexpr uint32_t DMAIER_RIE = 0x40;     // Receive interrupt enable
    static constexpr uint32_t DMAIER_RBUIE = 0x80;   // Receive buffer unavailable interrupt enable
    static constexpr uint32_t DMAIER_RPSIE = 0x100;  // Receive process stopped interrupt enable
    static constexpr uint32_t DMAIER_RWTIE = 0x200;  // receive watchdog timeout interrupt enable
    static constexpr uint32_t DMAIER_ETIE = 0x400;   // Early transmit interrupt enable
    static constexpr uint32_t DMAIER_FBEIE = 0x2000; // Fatal bus error interrupt enable
    static constexpr uint32_t DMAIER_ERIE = 0x4000;  // Early receive interrupt enable
    static constexpr uint32_t DMAIER_AISE = 0x8000;  // Abnormal interrupt summary enable
    static constexpr uint32_t DMAIER_NISE = 0x10000; // Normal interrupt summary enable

    static constexpr uint32_t DMAMFBOCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMAMFBOCR_MFC =              // Missed frames by the controller
        bit_field_t<0, 0xffff>::value<X>();
    static constexpr uint32_t DMAMFBOCR_OMFC = 0x10000;    // Overflow bit for missed frame counter
    template<uint32_t X>
    static constexpr uint32_t DMAMFBOCR_MFA =              // Missed frames by the application
        bit_field_t<17, 0x7ff>::value<X>();
    static constexpr uint32_t DMAMFBOCR_OFOC = 0x10000000; // Overflow bit for FIFO overflow counter

    static constexpr uint32_t DMARSWTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMARSWTR_RSWTC =   // Receive status watchdog timer count
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DMACHTDR_RESET_VALUE = 0x0;

    static constexpr uint32_t DMACHRDR_RESET_VALUE = 0x0;

    static constexpr uint32_t DMACHTBAR_RESET_VALUE = 0x0;

    static constexpr uint32_t DMACHRBAR_RESET_VALUE = 0x0;
};


////
//
//      Ethernet: media access control (MAC)
//
////

struct stm32f215_ethernet_mac_t
{
    volatile uint32_t MACCR;     // [read-write] Ethernet MAC configuration register
    volatile uint32_t MACFFR;    // [read-write] Ethernet MAC frame filter register
    volatile uint32_t MACHTHR;   // [read-write] Ethernet MAC hash table high register
    volatile uint32_t MACHTLR;   // [read-write] Ethernet MAC hash table low register
    volatile uint32_t MACMIIAR;  // [read-write] Ethernet MAC MII address register
    volatile uint32_t MACMIIDR;  // [read-write] Ethernet MAC MII data register
    volatile uint32_t MACFCR;    // [read-write] Ethernet MAC flow control register
    volatile uint32_t MACVLANTR; // [read-write] Ethernet MAC VLAN tag register
    reserved_t<0x3> _0x2c;
    volatile uint32_t MACPMTCSR; // [read-write] Ethernet MAC PMT control and status register
    reserved_t<0x1> _0x34;
    volatile uint32_t MACDBGR;   // [read-only] Ethernet MAC debug register
    volatile uint32_t MACSR;     // Ethernet MAC interrupt status register
    volatile uint32_t MACIMR;    // [read-write] Ethernet MAC interrupt mask register
    volatile uint32_t MACA0HR;   // Ethernet MAC address 0 high register
    volatile uint32_t MACA0LR;   // [read-write] Ethernet MAC address 0 low register
    volatile uint32_t MACA1HR;   // [read-write] Ethernet MAC address 1 high register
    volatile uint32_t MACA1LR;   // [read-write] Ethernet MAC address1 low register
    volatile uint32_t MACA2HR;   // [read-write] Ethernet MAC address 2 high register
    volatile uint32_t MACA2LR;   // [read-write] Ethernet MAC address 2 low register
    volatile uint32_t MACA3HR;   // [read-write] Ethernet MAC address 3 high register
    volatile uint32_t MACA3LR;   // [read-write] Ethernet MAC address 3 low register

    static constexpr uint32_t MACCR_RESET_VALUE = 0x8000;
    static constexpr uint32_t MACCR_RE = 0x4;         // RE
    static constexpr uint32_t MACCR_TE = 0x8;         // TE
    static constexpr uint32_t MACCR_DC = 0x10;        // DC
    template<uint32_t X>
    static constexpr uint32_t MACCR_BL =              // BL
        bit_field_t<5, 0x3>::value<X>();
    static constexpr uint32_t MACCR_APCS = 0x80;      // APCS
    static constexpr uint32_t MACCR_RD = 0x200;       // RD
    static constexpr uint32_t MACCR_IPCO = 0x400;     // IPCO
    static constexpr uint32_t MACCR_DM = 0x800;       // DM
    static constexpr uint32_t MACCR_LM = 0x1000;      // LM
    static constexpr uint32_t MACCR_ROD = 0x2000;     // ROD
    static constexpr uint32_t MACCR_FES = 0x4000;     // FES
    static constexpr uint32_t MACCR_CSD = 0x10000;    // CSD
    template<uint32_t X>
    static constexpr uint32_t MACCR_IFG =             // IFG
        bit_field_t<17, 0x7>::value<X>();
    static constexpr uint32_t MACCR_JD = 0x400000;    // JD
    static constexpr uint32_t MACCR_WD = 0x800000;    // WD
    static constexpr uint32_t MACCR_CSTF = 0x2000000; // CSTF

    static constexpr uint32_t MACFFR_RESET_VALUE = 0x0;
    static constexpr uint32_t MACFFR_PM = 0x1;        // Promiscuous mode
    static constexpr uint32_t MACFFR_HU = 0x2;        // Hash unicast
    static constexpr uint32_t MACFFR_HM = 0x4;        // Hash multicast
    static constexpr uint32_t MACFFR_DAIF = 0x8;      // Destination address inverse filtering
    static constexpr uint32_t MACFFR_PAM = 0x10;      // Pass all multicast
    static constexpr uint32_t MACFFR_BFD = 0x20;      // Broadcast frames disable
    static constexpr uint32_t MACFFR_PCF = 0x40;      // Pass control frames
    static constexpr uint32_t MACFFR_SAIF = 0x100;    // Source address inverse filtering
    static constexpr uint32_t MACFFR_SAF = 0x200;     // Source address filter
    static constexpr uint32_t MACFFR_HPF = 0x400;     // Hash or perfect filter
    static constexpr uint32_t MACFFR_RA = 0x80000000; // Receive all

    static constexpr uint32_t MACHTHR_RESET_VALUE = 0x0;

    static constexpr uint32_t MACHTLR_RESET_VALUE = 0x0;

    static constexpr uint32_t MACMIIAR_RESET_VALUE = 0x0;
    static constexpr uint32_t MACMIIAR_MB = 0x1; // MII busy
    static constexpr uint32_t MACMIIAR_MW = 0x2; // MII write
    template<uint32_t X>
    static constexpr uint32_t MACMIIAR_CR =      // Clock range
        bit_field_t<2, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MACMIIAR_MR =      // MII register
        bit_field_t<6, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MACMIIAR_PA =      // PHY address
        bit_field_t<11, 0x1f>::value<X>();

    static constexpr uint32_t MACMIIDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MACMIIDR_MD =   // MII data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MACFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t MACFCR_FCB = 0x1;   // Flow control busy/back pressure activate
    static constexpr uint32_t MACFCR_TFCE = 0x2;  // Transmit flow control enable
    static constexpr uint32_t MACFCR_RFCE = 0x4;  // Receive flow control enable
    static constexpr uint32_t MACFCR_UPFD = 0x8;  // Unicast pause frame detect
    template<uint32_t X>
    static constexpr uint32_t MACFCR_PLT =        // Pause low threshold
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t MACFCR_ZQPD = 0x80; // Zero-quanta pause disable
    template<uint32_t X>
    static constexpr uint32_t MACFCR_PT =         // Pause time
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t MACVLANTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MACVLANTR_VLANTI =          // VLAN tag identifier
        bit_field_t<0, 0xffff>::value<X>();
    static constexpr uint32_t MACVLANTR_VLANTC = 0x10000; // 12-bit VLAN tag comparison

    static constexpr uint32_t MACPMTCSR_RESET_VALUE = 0x0;
    static constexpr uint32_t MACPMTCSR_PD = 0x1;            // Power down
    static constexpr uint32_t MACPMTCSR_MPE = 0x2;           // Magic Packet enable
    static constexpr uint32_t MACPMTCSR_WFE = 0x4;           // Wakeup frame enable
    static constexpr uint32_t MACPMTCSR_MPR = 0x20;          // Magic packet received
    static constexpr uint32_t MACPMTCSR_WFR = 0x40;          // Wakeup frame received
    static constexpr uint32_t MACPMTCSR_GU = 0x200;          // Global unicast
    static constexpr uint32_t MACPMTCSR_WFFRPR = 0x80000000; // Wakeup frame filter register pointer reset

    static constexpr uint32_t MACDBGR_RESET_VALUE = 0x0;
    static constexpr uint32_t MACDBGR_MMRPEA = 0x1;     // MAC MII receive protocol engine active
    static constexpr uint32_t MACDBGR_MSFRWCS = 0x2;    // MAC small FIFO read / write controllers status
    static constexpr uint32_t MACDBGR_RFWRA = 0x10;     // Rx FIFO write controller active
    static constexpr uint32_t MACDBGR_RFRCS = 0x20;     // Rx FIFO read controller status
    static constexpr uint32_t MACDBGR_RFFL = 0x100;     // Rx FIFO fill level
    static constexpr uint32_t MACDBGR_MMTEA = 0x10000;  // MAC MII transmit engine active
    template<uint32_t X>
    static constexpr uint32_t MACDBGR_MTFCS =           // MAC transmit frame controller status
        bit_field_t<17, 0x3>::value<X>();
    static constexpr uint32_t MACDBGR_MTP = 0x80000;    // MAC transmitter in pause
    template<uint32_t X>
    static constexpr uint32_t MACDBGR_TFRS =            // Tx FIFO read status
        bit_field_t<20, 0x3>::value<X>();
    static constexpr uint32_t MACDBGR_TFWA = 0x400000;  // Tx FIFO write active
    static constexpr uint32_t MACDBGR_TFNE = 0x1000000; // Tx FIFO not empty
    static constexpr uint32_t MACDBGR_TFF = 0x2000000;  // Tx FIFO full

    static constexpr uint32_t MACSR_RESET_VALUE = 0x0;
    static constexpr uint32_t MACSR_PMTS = 0x8;   // PMT status
    static constexpr uint32_t MACSR_MMCS = 0x10;  // MMC status
    static constexpr uint32_t MACSR_MMCRS = 0x20; // MMC receive status
    static constexpr uint32_t MACSR_MMCTS = 0x40; // MMC transmit status
    static constexpr uint32_t MACSR_TSTS = 0x200; // Time stamp trigger status

    static constexpr uint32_t MACIMR_RESET_VALUE = 0x0;
    static constexpr uint32_t MACIMR_PMTIM = 0x8;   // PMT interrupt mask
    static constexpr uint32_t MACIMR_TSTIM = 0x200; // Time stamp trigger interrupt mask

    static constexpr uint32_t MACA0HR_RESET_VALUE = 0x10ffff;
    template<uint32_t X>
    static constexpr uint32_t MACA0HR_MACA0H =         // MAC address0 high
        bit_field_t<0, 0xffff>::value<X>();
    static constexpr uint32_t MACA0HR_MO = 0x80000000; // MO

    static constexpr uint32_t MACA0LR_RESET_VALUE = 0xffffffff;

    static constexpr uint32_t MACA1HR_RESET_VALUE = 0xffff;
    template<uint32_t X>
    static constexpr uint32_t MACA1HR_MACA1H =         // MAC address1 high
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MACA1HR_MBC =            // Mask byte control
        bit_field_t<24, 0x3f>::value<X>();
    static constexpr uint32_t MACA1HR_SA = 0x40000000; // Source address
    static constexpr uint32_t MACA1HR_AE = 0x80000000; // Address enable

    static constexpr uint32_t MACA1LR_RESET_VALUE = 0xffffffff;

    static constexpr uint32_t MACA2HR_RESET_VALUE = 0xffff;
    template<uint32_t X>
    static constexpr uint32_t MACA2HR_MAC2AH =         // MAC address2 high
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MACA2HR_MBC =            // Mask byte control
        bit_field_t<24, 0x3f>::value<X>();
    static constexpr uint32_t MACA2HR_SA = 0x40000000; // Source address
    static constexpr uint32_t MACA2HR_AE = 0x80000000; // Address enable

    static constexpr uint32_t MACA2LR_RESET_VALUE = 0xffffffff;
    template<uint32_t X>
    static constexpr uint32_t MACA2LR_MACA2L =   // MAC address2 low
        bit_field_t<0, 0x7fffffff>::value<X>();

    static constexpr uint32_t MACA3HR_RESET_VALUE = 0xffff;
    template<uint32_t X>
    static constexpr uint32_t MACA3HR_MACA3H =         // MAC address3 high
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MACA3HR_MBC =            // Mask byte control
        bit_field_t<24, 0x3f>::value<X>();
    static constexpr uint32_t MACA3HR_SA = 0x40000000; // Source address
    static constexpr uint32_t MACA3HR_AE = 0x80000000; // Address enable

    static constexpr uint32_t MACA3LR_RESET_VALUE = 0xffffffff;
};


////
//
//      Ethernet: MAC management counters
//
////

struct stm32f215_ethernet_mmc_t
{
    volatile uint32_t MMCCR;       // [read-write] Ethernet MMC control register
    volatile uint32_t MMCRIR;      // [read-write] Ethernet MMC receive interrupt register
    volatile uint32_t MMCTIR;      // [read-write] Ethernet MMC transmit interrupt register
    volatile uint32_t MMCRIMR;     // [read-write] Ethernet MMC receive interrupt mask register
    volatile uint32_t MMCTIMR;     // [read-write] Ethernet MMC transmit interrupt mask register
    reserved_t<0xe> _0x4c;
    volatile uint32_t MMCTGFSCCR;  // [read-only] Ethernet MMC transmitted good frames after a single collision counter
    volatile uint32_t MMCTGFMSCCR; // [read-only] Ethernet MMC transmitted good frames after more than a single collision
    reserved_t<0x5> _0x68;
    volatile uint32_t MMCTGFCR;    // [read-only] Ethernet MMC transmitted good frames counter register
    reserved_t<0xa> _0x94;
    volatile uint32_t MMCRFCECR;   // [read-only] Ethernet MMC received frames with CRC error counter register
    volatile uint32_t MMCRFAECR;   // [read-only] Ethernet MMC received frames with alignment error counter register
    reserved_t<0xa> _0xc4;
    volatile uint32_t MMCRGUFCR;   // [read-only] MMC received good unicast frames counter register

    static constexpr uint32_t MMCCR_RESET_VALUE = 0x0;
    static constexpr uint32_t MMCCR_CR = 0x1;     // Counter reset
    static constexpr uint32_t MMCCR_CSR = 0x2;    // Counter stop rollover
    static constexpr uint32_t MMCCR_ROR = 0x4;    // Reset on read
    static constexpr uint32_t MMCCR_MCF = 0x8;    // MMC counter freeze
    static constexpr uint32_t MMCCR_MCP = 0x10;   // MMC counter preset
    static constexpr uint32_t MMCCR_MCFHP = 0x20; // MMC counter Full-Half preset

    static constexpr uint32_t MMCRIR_RESET_VALUE = 0x0;
    static constexpr uint32_t MMCRIR_RFCES = 0x20;    // Received frames CRC error status
    static constexpr uint32_t MMCRIR_RFAES = 0x40;    // Received frames alignment error status
    static constexpr uint32_t MMCRIR_RGUFS = 0x20000; // Received Good Unicast Frames Status

    static constexpr uint32_t MMCTIR_RESET_VALUE = 0x0;
    static constexpr uint32_t MMCTIR_TGFSCS = 0x4000;  // Transmitted good frames single collision status
    static constexpr uint32_t MMCTIR_TGFMSCS = 0x8000; // Transmitted good frames more single collision status
    static constexpr uint32_t MMCTIR_TGFS = 0x200000;  // Transmitted good frames status

    static constexpr uint32_t MMCRIMR_RESET_VALUE = 0x0;
    static constexpr uint32_t MMCRIMR_RFCEM = 0x20;    // Received frame CRC error mask
    static constexpr uint32_t MMCRIMR_RFAEM = 0x40;    // Received frames alignment error mask
    static constexpr uint32_t MMCRIMR_RGUFM = 0x20000; // Received good unicast frames mask

    static constexpr uint32_t MMCTIMR_RESET_VALUE = 0x0;
    static constexpr uint32_t MMCTIMR_TGFSCM = 0x4000;  // Transmitted good frames single collision mask
    static constexpr uint32_t MMCTIMR_TGFMSCM = 0x8000; // Transmitted good frames more single collision mask
    static constexpr uint32_t MMCTIMR_TGFM = 0x200000;  // Transmitted good frames mask

    static constexpr uint32_t MMCTGFSCCR_RESET_VALUE = 0x0;

    static constexpr uint32_t MMCTGFMSCCR_RESET_VALUE = 0x0;

    static constexpr uint32_t MMCTGFCR_RESET_VALUE = 0x0;

    static constexpr uint32_t MMCRFCECR_RESET_VALUE = 0x0;

    static constexpr uint32_t MMCRFAECR_RESET_VALUE = 0x0;

    static constexpr uint32_t MMCRGUFCR_RESET_VALUE = 0x0;
};


////
//
//      Ethernet: Precision time protocol
//
////

struct stm32f215_ethernet_ptp_t
{
    volatile uint32_t PTPTSCR;  // [read-write] Ethernet PTP time stamp control register
    volatile uint32_t PTPSSIR;  // [read-write] Ethernet PTP subsecond increment register
    volatile uint32_t PTPTSHR;  // [read-only] Ethernet PTP time stamp high register
    volatile uint32_t PTPTSLR;  // [read-only] Ethernet PTP time stamp low register
    volatile uint32_t PTPTSHUR; // [read-write] Ethernet PTP time stamp high update register
    volatile uint32_t PTPTSLUR; // [read-write] Ethernet PTP time stamp low update register
    volatile uint32_t PTPTSAR;  // [read-write] Ethernet PTP time stamp addend register
    volatile uint32_t PTPTTHR;  // [read-write] Ethernet PTP target time high register
    volatile uint32_t PTPTTLR;  // [read-write] Ethernet PTP target time low register
    reserved_t<0x1> _0x28;
    volatile uint32_t PTPTSSR;  // [read-only] Ethernet PTP time stamp status register
    volatile uint32_t PTPPPSCR; // [read-only] Ethernet PTP PPS control register

    static constexpr uint32_t PTPTSCR_RESET_VALUE = 0x2000;
    static constexpr uint32_t PTPTSCR_TSE = 0x1;          // Time stamp enable
    static constexpr uint32_t PTPTSCR_TSFCU = 0x2;        // Time stamp fine or coarse update
    static constexpr uint32_t PTPTSCR_TSSTI = 0x4;        // Time stamp system time initialize
    static constexpr uint32_t PTPTSCR_TSSTU = 0x8;        // Time stamp system time update
    static constexpr uint32_t PTPTSCR_TSITE = 0x10;       // Time stamp interrupt trigger enable
    static constexpr uint32_t PTPTSCR_TTSARU = 0x20;      // Time stamp addend register update
    static constexpr uint32_t PTPTSCR_TSSARFE = 0x100;    // Time stamp snapshot for all received frames enable
    static constexpr uint32_t PTPTSCR_TSSSR = 0x200;      // Time stamp subsecond rollover: digital or binary rollover control
    static constexpr uint32_t PTPTSCR_TSPTPPSV2E = 0x400; // Time stamp PTP packet snooping for version2 format enable
    static constexpr uint32_t PTPTSCR_TSSPTPOEFE = 0x800; // Time stamp snapshot for PTP over ethernet frames enable
    static constexpr uint32_t PTPTSCR_TSSIPV6FE = 0x1000; // Time stamp snapshot for IPv6 frames enable
    static constexpr uint32_t PTPTSCR_TSSIPV4FE = 0x2000; // Time stamp snapshot for IPv4 frames enable
    static constexpr uint32_t PTPTSCR_TSSEME = 0x4000;    // Time stamp snapshot for event message enable
    static constexpr uint32_t PTPTSCR_TSSMRME = 0x8000;   // Time stamp snapshot for message relevant to master enable
    template<uint32_t X>
    static constexpr uint32_t PTPTSCR_TSCNT =             // Time stamp clock node type
        bit_field_t<16, 0x3>::value<X>();
    static constexpr uint32_t PTPTSCR_TSPFFMAE = 0x40000; // Time stamp PTP frame filtering MAC address enable

    static constexpr uint32_t PTPSSIR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t PTPSSIR_STSSI =   // System time subsecond increment
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t PTPTSHR_RESET_VALUE = 0x0;

    static constexpr uint32_t PTPTSLR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t PTPTSLR_STSS =              // System time subseconds
        bit_field_t<0, 0x7fffffff>::value<X>();
    static constexpr uint32_t PTPTSLR_STPNS = 0x80000000; // System time positive or negative sign

    static constexpr uint32_t PTPTSHUR_RESET_VALUE = 0x0;

    static constexpr uint32_t PTPTSLUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t PTPTSLUR_TSUSS =              // Time stamp update subseconds
        bit_field_t<0, 0x7fffffff>::value<X>();
    static constexpr uint32_t PTPTSLUR_TSUPNS = 0x80000000; // Time stamp update positive or negative sign

    static constexpr uint32_t PTPTSAR_RESET_VALUE = 0x0;

    static constexpr uint32_t PTPTTHR_RESET_VALUE = 0x0;

    static constexpr uint32_t PTPTTLR_RESET_VALUE = 0x0;

    static constexpr uint32_t PTPTSSR_RESET_VALUE = 0x0;
    static constexpr uint32_t PTPTSSR_TSSO = 0x1;  // Time stamp second overflow
    static constexpr uint32_t PTPTSSR_TSTTR = 0x2; // Time stamp target time reached

    static constexpr uint32_t PTPPPSCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t PTPPPSCR_PPSFREQ =   // PPS frequency selection
        bit_field_t<0, 0xf>::value<X>();
};


template<>
struct peripheral_t<STM32F215, Ethernet_MAC>
{
    typedef stm32f215_ethernet_mac_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F217, Ethernet_MAC>
{
    typedef stm32f215_ethernet_mac_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F215, Ethernet_MMC>
{
    typedef stm32f215_ethernet_mmc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F217, Ethernet_MMC>
{
    typedef stm32f215_ethernet_mmc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F215, Ethernet_PTP>
{
    typedef stm32f215_ethernet_ptp_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F217, Ethernet_PTP>
{
    typedef stm32f215_ethernet_ptp_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F215, Ethernet_DMA>
{
    typedef stm32f215_ethernet_dma_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F217, Ethernet_DMA>
{
    typedef stm32f215_ethernet_dma_t T;
    static T& V;
};

using ethernet_dma_t = peripheral_t<mcu_svd, Ethernet_DMA>;
using ethernet_mac_t = peripheral_t<mcu_svd, Ethernet_MAC>;
using ethernet_mmc_t = peripheral_t<mcu_svd, Ethernet_MMC>;
using ethernet_ptp_t = peripheral_t<mcu_svd, Ethernet_PTP>;

