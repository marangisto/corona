#pragma once

////
//
//      STM32F4 Ethernet peripherals
//
////

////
//
//      Ethernet: DMA controller operation
//
////

struct stm32f405_ethernet_dma_t
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

    static constexpr uint32_t DMABMR_RESET_VALUE = 0x2101;
    static constexpr uint32_t DMABMR_SR = 0x1;        // SR
    static constexpr uint32_t DMABMR_DA = 0x2;        // DA
    template<uint32_t X>
    static constexpr uint32_t DMABMR_DSL =            // DSL
        bit_field_t<2, 0x1f>::value<X>();
    static constexpr uint32_t DMABMR_EDFE = 0x80;     // EDFE
    template<uint32_t X>
    static constexpr uint32_t DMABMR_PBL =            // PBL
        bit_field_t<8, 0x3f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMABMR_RTPR =           // RTPR
        bit_field_t<14, 0x3>::value<X>();
    static constexpr uint32_t DMABMR_FB = 0x10000;    // FB
    template<uint32_t X>
    static constexpr uint32_t DMABMR_RDP =            // RDP
        bit_field_t<17, 0x3f>::value<X>();
    static constexpr uint32_t DMABMR_USP = 0x800000;  // USP
    static constexpr uint32_t DMABMR_FPM = 0x1000000; // FPM
    static constexpr uint32_t DMABMR_AAB = 0x2000000; // AAB
    static constexpr uint32_t DMABMR_MB = 0x4000000;  // MB

    static constexpr uint32_t DMATPDR_RESET_VALUE = 0x0;

    static constexpr uint32_t DMARPDR_RESET_VALUE = 0x0;

    static constexpr uint32_t DMARDLAR_RESET_VALUE = 0x0;

    static constexpr uint32_t DMATDLAR_RESET_VALUE = 0x0;

    static constexpr uint32_t DMASR_RESET_VALUE = 0x0;
    static constexpr uint32_t DMASR_TS = 0x1;          // TS
    static constexpr uint32_t DMASR_TPSS = 0x2;        // TPSS
    static constexpr uint32_t DMASR_TBUS = 0x4;        // TBUS
    static constexpr uint32_t DMASR_TJTS = 0x8;        // TJTS
    static constexpr uint32_t DMASR_ROS = 0x10;        // ROS
    static constexpr uint32_t DMASR_TUS = 0x20;        // TUS
    static constexpr uint32_t DMASR_RS = 0x40;         // RS
    static constexpr uint32_t DMASR_RBUS = 0x80;       // RBUS
    static constexpr uint32_t DMASR_RPSS = 0x100;      // RPSS
    static constexpr uint32_t DMASR_PWTS = 0x200;      // PWTS
    static constexpr uint32_t DMASR_ETS = 0x400;       // ETS
    static constexpr uint32_t DMASR_FBES = 0x2000;     // FBES
    static constexpr uint32_t DMASR_ERS = 0x4000;      // ERS
    static constexpr uint32_t DMASR_AIS = 0x8000;      // AIS
    static constexpr uint32_t DMASR_NIS = 0x10000;     // NIS
    template<uint32_t X>
    static constexpr uint32_t DMASR_RPS =              // RPS
        bit_field_t<17, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMASR_TPS =              // TPS
        bit_field_t<20, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMASR_EBS =              // EBS
        bit_field_t<23, 0x7>::value<X>();
    static constexpr uint32_t DMASR_MMCS = 0x8000000;  // MMCS
    static constexpr uint32_t DMASR_PMTS = 0x10000000; // PMTS
    static constexpr uint32_t DMASR_TSTS = 0x20000000; // TSTS

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
    static constexpr uint32_t DMAIER_TIE = 0x1;      // TIE
    static constexpr uint32_t DMAIER_TPSIE = 0x2;    // TPSIE
    static constexpr uint32_t DMAIER_TBUIE = 0x4;    // TBUIE
    static constexpr uint32_t DMAIER_TJTIE = 0x8;    // TJTIE
    static constexpr uint32_t DMAIER_ROIE = 0x10;    // ROIE
    static constexpr uint32_t DMAIER_TUIE = 0x20;    // TUIE
    static constexpr uint32_t DMAIER_RIE = 0x40;     // RIE
    static constexpr uint32_t DMAIER_RBUIE = 0x80;   // RBUIE
    static constexpr uint32_t DMAIER_RPSIE = 0x100;  // RPSIE
    static constexpr uint32_t DMAIER_RWTIE = 0x200;  // RWTIE
    static constexpr uint32_t DMAIER_ETIE = 0x400;   // ETIE
    static constexpr uint32_t DMAIER_FBEIE = 0x2000; // FBEIE
    static constexpr uint32_t DMAIER_ERIE = 0x4000;  // ERIE
    static constexpr uint32_t DMAIER_AISE = 0x8000;  // AISE
    static constexpr uint32_t DMAIER_NISE = 0x10000; // NISE

    static constexpr uint32_t DMAMFBOCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMAMFBOCR_MFC =              // MFC
        bit_field_t<0, 0xffff>::value<X>();
    static constexpr uint32_t DMAMFBOCR_OMFC = 0x10000;    // OMFC
    template<uint32_t X>
    static constexpr uint32_t DMAMFBOCR_MFA =              // MFA
        bit_field_t<17, 0x7ff>::value<X>();
    static constexpr uint32_t DMAMFBOCR_OFOC = 0x10000000; // OFOC

    static constexpr uint32_t DMARSWTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMARSWTR_RSWTC =   // RSWTC
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

struct stm32f405_ethernet_mac_t
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
    static constexpr uint32_t MACFFR_PM = 0x1;        // PM
    static constexpr uint32_t MACFFR_HU = 0x2;        // HU
    static constexpr uint32_t MACFFR_HM = 0x4;        // HM
    static constexpr uint32_t MACFFR_DAIF = 0x8;      // DAIF
    static constexpr uint32_t MACFFR_RAM = 0x10;      // RAM
    static constexpr uint32_t MACFFR_BFD = 0x20;      // BFD
    static constexpr uint32_t MACFFR_PCF = 0x40;      // PCF
    static constexpr uint32_t MACFFR_SAIF = 0x80;     // SAIF
    static constexpr uint32_t MACFFR_SAF = 0x100;     // SAF
    static constexpr uint32_t MACFFR_HPF = 0x200;     // HPF
    static constexpr uint32_t MACFFR_RA = 0x80000000; // RA

    static constexpr uint32_t MACHTHR_RESET_VALUE = 0x0;

    static constexpr uint32_t MACHTLR_RESET_VALUE = 0x0;

    static constexpr uint32_t MACMIIAR_RESET_VALUE = 0x0;
    static constexpr uint32_t MACMIIAR_MB = 0x1; // MB
    static constexpr uint32_t MACMIIAR_MW = 0x2; // MW
    template<uint32_t X>
    static constexpr uint32_t MACMIIAR_CR =      // CR
        bit_field_t<2, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MACMIIAR_MR =      // MR
        bit_field_t<6, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MACMIIAR_PA =      // PA
        bit_field_t<11, 0x1f>::value<X>();

    static constexpr uint32_t MACMIIDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MACMIIDR_TD =   // TD
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MACFCR_RESET_VALUE = 0x0;
    static constexpr uint32_t MACFCR_FCB = 0x1;   // FCB
    static constexpr uint32_t MACFCR_TFCE = 0x2;  // TFCE
    static constexpr uint32_t MACFCR_RFCE = 0x4;  // RFCE
    static constexpr uint32_t MACFCR_UPFD = 0x8;  // UPFD
    template<uint32_t X>
    static constexpr uint32_t MACFCR_PLT =        // PLT
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t MACFCR_ZQPD = 0x80; // ZQPD
    template<uint32_t X>
    static constexpr uint32_t MACFCR_PT =         // PT
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t MACVLANTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MACVLANTR_VLANTI =          // VLANTI
        bit_field_t<0, 0xffff>::value<X>();
    static constexpr uint32_t MACVLANTR_VLANTC = 0x10000; // VLANTC

    static constexpr uint32_t MACPMTCSR_RESET_VALUE = 0x0;
    static constexpr uint32_t MACPMTCSR_PD = 0x1;            // PD
    static constexpr uint32_t MACPMTCSR_MPE = 0x2;           // MPE
    static constexpr uint32_t MACPMTCSR_WFE = 0x4;           // WFE
    static constexpr uint32_t MACPMTCSR_MPR = 0x20;          // MPR
    static constexpr uint32_t MACPMTCSR_WFR = 0x40;          // WFR
    static constexpr uint32_t MACPMTCSR_GU = 0x200;          // GU
    static constexpr uint32_t MACPMTCSR_WFFRPR = 0x80000000; // WFFRPR

    static constexpr uint32_t MACDBGR_RESET_VALUE = 0x0;
    static constexpr uint32_t MACDBGR_CR = 0x1;     // CR
    static constexpr uint32_t MACDBGR_CSR = 0x2;    // CSR
    static constexpr uint32_t MACDBGR_ROR = 0x4;    // ROR
    static constexpr uint32_t MACDBGR_MCF = 0x8;    // MCF
    static constexpr uint32_t MACDBGR_MCP = 0x10;   // MCP
    static constexpr uint32_t MACDBGR_MCFHP = 0x20; // MCFHP

    static constexpr uint32_t MACSR_RESET_VALUE = 0x0;
    static constexpr uint32_t MACSR_PMTS = 0x8;   // PMTS
    static constexpr uint32_t MACSR_MMCS = 0x10;  // MMCS
    static constexpr uint32_t MACSR_MMCRS = 0x20; // MMCRS
    static constexpr uint32_t MACSR_MMCTS = 0x40; // MMCTS
    static constexpr uint32_t MACSR_TSTS = 0x200; // TSTS

    static constexpr uint32_t MACIMR_RESET_VALUE = 0x0;
    static constexpr uint32_t MACIMR_PMTIM = 0x8;   // PMTIM
    static constexpr uint32_t MACIMR_TSTIM = 0x200; // TSTIM

    static constexpr uint32_t MACA0HR_RESET_VALUE = 0x10ffff;
    template<uint32_t X>
    static constexpr uint32_t MACA0HR_MACA0H =         // MAC address0 high
        bit_field_t<0, 0xffff>::value<X>();
    static constexpr uint32_t MACA0HR_MO = 0x80000000; // Always 1

    static constexpr uint32_t MACA0LR_RESET_VALUE = 0xffffffff;

    static constexpr uint32_t MACA1HR_RESET_VALUE = 0xffff;
    template<uint32_t X>
    static constexpr uint32_t MACA1HR_MACA1H =         // MACA1H
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MACA1HR_MBC =            // MBC
        bit_field_t<24, 0x3f>::value<X>();
    static constexpr uint32_t MACA1HR_SA = 0x40000000; // SA
    static constexpr uint32_t MACA1HR_AE = 0x80000000; // AE

    static constexpr uint32_t MACA1LR_RESET_VALUE = 0xffffffff;

    static constexpr uint32_t MACA2HR_RESET_VALUE = 0xffff;
    template<uint32_t X>
    static constexpr uint32_t MACA2HR_MAC2AH =         // MAC2AH
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MACA2HR_MBC =            // MBC
        bit_field_t<24, 0x3f>::value<X>();
    static constexpr uint32_t MACA2HR_SA = 0x40000000; // SA
    static constexpr uint32_t MACA2HR_AE = 0x80000000; // AE

    static constexpr uint32_t MACA2LR_RESET_VALUE = 0xffffffff;
    template<uint32_t X>
    static constexpr uint32_t MACA2LR_MACA2L =   // MACA2L
        bit_field_t<0, 0x7fffffff>::value<X>();

    static constexpr uint32_t MACA3HR_RESET_VALUE = 0xffff;
    template<uint32_t X>
    static constexpr uint32_t MACA3HR_MACA3H =         // MACA3H
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MACA3HR_MBC =            // MBC
        bit_field_t<24, 0x3f>::value<X>();
    static constexpr uint32_t MACA3HR_SA = 0x40000000; // SA
    static constexpr uint32_t MACA3HR_AE = 0x80000000; // AE

    static constexpr uint32_t MACA3LR_RESET_VALUE = 0xffffffff;
};


////
//
//      Ethernet: MAC management counters
//
////

struct stm32f405_ethernet_mmc_t
{
    volatile uint32_t MMCCR;       // [read-write] Ethernet MMC control register
    volatile uint32_t MMCRIR;      // [read-write] Ethernet MMC receive interrupt register
    volatile uint32_t MMCTIR;      // [read-only] Ethernet MMC transmit interrupt register
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
    static constexpr uint32_t MMCCR_CR = 0x1;     // CR
    static constexpr uint32_t MMCCR_CSR = 0x2;    // CSR
    static constexpr uint32_t MMCCR_ROR = 0x4;    // ROR
    static constexpr uint32_t MMCCR_MCF = 0x8;    // MCF
    static constexpr uint32_t MMCCR_MCP = 0x10;   // MCP
    static constexpr uint32_t MMCCR_MCFHP = 0x20; // MCFHP

    static constexpr uint32_t MMCRIR_RESET_VALUE = 0x0;
    static constexpr uint32_t MMCRIR_RFCES = 0x20;    // RFCES
    static constexpr uint32_t MMCRIR_RFAES = 0x40;    // RFAES
    static constexpr uint32_t MMCRIR_RGUFS = 0x20000; // RGUFS

    static constexpr uint32_t MMCTIR_RESET_VALUE = 0x0;
    static constexpr uint32_t MMCTIR_TGFSCS = 0x4000;  // TGFSCS
    static constexpr uint32_t MMCTIR_TGFMSCS = 0x8000; // TGFMSCS
    static constexpr uint32_t MMCTIR_TGFS = 0x200000;  // TGFS

    static constexpr uint32_t MMCRIMR_RESET_VALUE = 0x0;
    static constexpr uint32_t MMCRIMR_RFCEM = 0x20;    // RFCEM
    static constexpr uint32_t MMCRIMR_RFAEM = 0x40;    // RFAEM
    static constexpr uint32_t MMCRIMR_RGUFM = 0x20000; // RGUFM

    static constexpr uint32_t MMCTIMR_RESET_VALUE = 0x0;
    static constexpr uint32_t MMCTIMR_TGFSCM = 0x4000;  // TGFSCM
    static constexpr uint32_t MMCTIMR_TGFMSCM = 0x8000; // TGFMSCM
    static constexpr uint32_t MMCTIMR_TGFM = 0x10000;   // TGFM

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

struct stm32f405_ethernet_ptp_t
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
    static constexpr uint32_t PTPTSCR_TSE = 0x1;          // TSE
    static constexpr uint32_t PTPTSCR_TSFCU = 0x2;        // TSFCU
    static constexpr uint32_t PTPTSCR_TSPTPPSV2E = 0x400; // TSPTPPSV2E
    static constexpr uint32_t PTPTSCR_TSSPTPOEFE = 0x800; // TSSPTPOEFE
    static constexpr uint32_t PTPTSCR_TSSIPV6FE = 0x1000; // TSSIPV6FE
    static constexpr uint32_t PTPTSCR_TSSIPV4FE = 0x2000; // TSSIPV4FE
    static constexpr uint32_t PTPTSCR_TSSEME = 0x4000;    // TSSEME
    static constexpr uint32_t PTPTSCR_TSSMRME = 0x8000;   // TSSMRME
    template<uint32_t X>
    static constexpr uint32_t PTPTSCR_TSCNT =             // TSCNT
        bit_field_t<16, 0x3>::value<X>();
    static constexpr uint32_t PTPTSCR_TSPFFMAE = 0x40000; // TSPFFMAE
    static constexpr uint32_t PTPTSCR_TSSTI = 0x4;        // TSSTI
    static constexpr uint32_t PTPTSCR_TSSTU = 0x8;        // TSSTU
    static constexpr uint32_t PTPTSCR_TSITE = 0x10;       // TSITE
    static constexpr uint32_t PTPTSCR_TTSARU = 0x20;      // TTSARU
    static constexpr uint32_t PTPTSCR_TSSARFE = 0x100;    // TSSARFE
    static constexpr uint32_t PTPTSCR_TSSSR = 0x200;      // TSSSR

    static constexpr uint32_t PTPSSIR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t PTPSSIR_STSSI =   // STSSI
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t PTPTSHR_RESET_VALUE = 0x0;

    static constexpr uint32_t PTPTSLR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t PTPTSLR_STSS =              // STSS
        bit_field_t<0, 0x7fffffff>::value<X>();
    static constexpr uint32_t PTPTSLR_STPNS = 0x80000000; // STPNS

    static constexpr uint32_t PTPTSHUR_RESET_VALUE = 0x0;

    static constexpr uint32_t PTPTSLUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t PTPTSLUR_TSUSS =              // TSUSS
        bit_field_t<0, 0x7fffffff>::value<X>();
    static constexpr uint32_t PTPTSLUR_TSUPNS = 0x80000000; // TSUPNS

    static constexpr uint32_t PTPTSAR_RESET_VALUE = 0x0;

    static constexpr uint32_t PTPTTHR_RESET_VALUE = 0x0;

    static constexpr uint32_t PTPTTLR_RESET_VALUE = 0x0;

    static constexpr uint32_t PTPTSSR_RESET_VALUE = 0x0;
    static constexpr uint32_t PTPTSSR_TSSO = 0x1;  // TSSO
    static constexpr uint32_t PTPTSSR_TSTTR = 0x2; // TSTTR

    static constexpr uint32_t PTPPPSCR_RESET_VALUE = 0x0;
    static constexpr uint32_t PTPPPSCR_TSSO = 0x1;  // TSSO
    static constexpr uint32_t PTPPPSCR_TSTTR = 0x2; // TSTTR
};


template<>
struct peripheral_t<STM32F405, ETHERNET_MAC>
{
    typedef stm32f405_ethernet_mac_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, ETHERNET_MAC>
{
    typedef stm32f405_ethernet_mac_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, ETHERNET_MAC>
{
    typedef stm32f405_ethernet_mac_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, ETHERNET_MAC>
{
    typedef stm32f405_ethernet_mac_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, ETHERNET_MAC>
{
    typedef stm32f405_ethernet_mac_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, ETHERNET_MMC>
{
    typedef stm32f405_ethernet_mmc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, ETHERNET_MMC>
{
    typedef stm32f405_ethernet_mmc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, ETHERNET_MMC>
{
    typedef stm32f405_ethernet_mmc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, ETHERNET_MMC>
{
    typedef stm32f405_ethernet_mmc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, ETHERNET_MMC>
{
    typedef stm32f405_ethernet_mmc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, ETHERNET_PTP>
{
    typedef stm32f405_ethernet_ptp_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, ETHERNET_PTP>
{
    typedef stm32f405_ethernet_ptp_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, ETHERNET_PTP>
{
    typedef stm32f405_ethernet_ptp_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, ETHERNET_PTP>
{
    typedef stm32f405_ethernet_ptp_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, ETHERNET_PTP>
{
    typedef stm32f405_ethernet_ptp_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, ETHERNET_DMA>
{
    typedef stm32f405_ethernet_dma_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, ETHERNET_DMA>
{
    typedef stm32f405_ethernet_dma_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, ETHERNET_DMA>
{
    typedef stm32f405_ethernet_dma_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, ETHERNET_DMA>
{
    typedef stm32f405_ethernet_dma_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, ETHERNET_DMA>
{
    typedef stm32f405_ethernet_dma_t T;
    static T& V;
};

using ethernet_dma_t = peripheral_t<mcu_svd, ETHERNET_DMA>;
using ethernet_mac_t = peripheral_t<mcu_svd, ETHERNET_MAC>;
using ethernet_mmc_t = peripheral_t<mcu_svd, ETHERNET_MMC>;
using ethernet_ptp_t = peripheral_t<mcu_svd, ETHERNET_PTP>;

