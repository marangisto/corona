#pragma once

////
//
//      STM32F4 ETHERNET peripherals
//
///

// ETHERNET_DMA: Ethernet: DMA controller operation

struct stm32f405_ethernet_dma_t
{
    volatile uint32_t DMABMR; // Ethernet DMA bus mode register
    volatile uint32_t DMATPDR; // Ethernet DMA transmit poll demand register
    volatile uint32_t DMARPDR; // EHERNET DMA receive poll demand register
    volatile uint32_t DMARDLAR; // Ethernet DMA receive descriptor list address register
    volatile uint32_t DMATDLAR; // Ethernet DMA transmit descriptor list address register
    volatile uint32_t DMASR; // Ethernet DMA status register
    volatile uint32_t DMAOMR; // Ethernet DMA operation mode register
    volatile uint32_t DMAIER; // Ethernet DMA interrupt enable register
    volatile uint32_t DMAMFBOCR; // Ethernet DMA missed frame and buffer overflow counter register
    volatile uint32_t DMARSWTR; // Ethernet DMA receive status watchdog timer register
    reserved_t<0x8> _0x28;
    volatile uint32_t DMACHTDR; // Ethernet DMA current host transmit descriptor register
    volatile uint32_t DMACHRDR; // Ethernet DMA current host receive descriptor register
    volatile uint32_t DMACHTBAR; // Ethernet DMA current host transmit buffer address register
    volatile uint32_t DMACHRBAR; // Ethernet DMA current host receive buffer address register

    static constexpr uint32_t DMABMR_RESET_VALUE = 0x2101; // Reset value
    static constexpr uint32_t DMABMR_SR = 0x1; // SR
    static constexpr uint32_t DMABMR_DA = 0x2; // DA
    typedef bit_field_t<2, 0x1f> DMABMR_DSL; // DSL
    static constexpr uint32_t DMABMR_EDFE = 0x80; // EDFE
    typedef bit_field_t<8, 0x3f> DMABMR_PBL; // PBL
    typedef bit_field_t<14, 0x3> DMABMR_RTPR; // RTPR
    static constexpr uint32_t DMABMR_FB = 0x10000; // FB
    typedef bit_field_t<17, 0x3f> DMABMR_RDP; // RDP
    static constexpr uint32_t DMABMR_USP = 0x800000; // USP
    static constexpr uint32_t DMABMR_FPM = 0x1000000; // FPM
    static constexpr uint32_t DMABMR_AAB = 0x2000000; // AAB
    static constexpr uint32_t DMABMR_MB = 0x4000000; // MB

    static constexpr uint32_t DMATPDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DMATPDR_TPD; // TPD

    static constexpr uint32_t DMARPDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DMARPDR_RPD; // RPD

    static constexpr uint32_t DMARDLAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DMARDLAR_SRL; // SRL

    static constexpr uint32_t DMATDLAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DMATDLAR_STL; // STL

    static constexpr uint32_t DMASR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DMASR_TS = 0x1; // TS
    static constexpr uint32_t DMASR_TPSS = 0x2; // TPSS
    static constexpr uint32_t DMASR_TBUS = 0x4; // TBUS
    static constexpr uint32_t DMASR_TJTS = 0x8; // TJTS
    static constexpr uint32_t DMASR_ROS = 0x10; // ROS
    static constexpr uint32_t DMASR_TUS = 0x20; // TUS
    static constexpr uint32_t DMASR_RS = 0x40; // RS
    static constexpr uint32_t DMASR_RBUS = 0x80; // RBUS
    static constexpr uint32_t DMASR_RPSS = 0x100; // RPSS
    static constexpr uint32_t DMASR_PWTS = 0x200; // PWTS
    static constexpr uint32_t DMASR_ETS = 0x400; // ETS
    static constexpr uint32_t DMASR_FBES = 0x2000; // FBES
    static constexpr uint32_t DMASR_ERS = 0x4000; // ERS
    static constexpr uint32_t DMASR_AIS = 0x8000; // AIS
    static constexpr uint32_t DMASR_NIS = 0x10000; // NIS
    typedef bit_field_t<17, 0x7> DMASR_RPS; // RPS
    typedef bit_field_t<20, 0x7> DMASR_TPS; // TPS
    typedef bit_field_t<23, 0x7> DMASR_EBS; // EBS
    static constexpr uint32_t DMASR_MMCS = 0x8000000; // MMCS
    static constexpr uint32_t DMASR_PMTS = 0x10000000; // PMTS
    static constexpr uint32_t DMASR_TSTS = 0x20000000; // TSTS

    static constexpr uint32_t DMAOMR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DMAOMR_SR = 0x2; // SR
    static constexpr uint32_t DMAOMR_OSF = 0x4; // OSF
    typedef bit_field_t<3, 0x3> DMAOMR_RTC; // RTC
    static constexpr uint32_t DMAOMR_FUGF = 0x40; // FUGF
    static constexpr uint32_t DMAOMR_FEF = 0x80; // FEF
    static constexpr uint32_t DMAOMR_ST = 0x2000; // ST
    typedef bit_field_t<14, 0x7> DMAOMR_TTC; // TTC
    static constexpr uint32_t DMAOMR_FTF = 0x100000; // FTF
    static constexpr uint32_t DMAOMR_TSF = 0x200000; // TSF
    static constexpr uint32_t DMAOMR_DFRF = 0x1000000; // DFRF
    static constexpr uint32_t DMAOMR_RSF = 0x2000000; // RSF
    static constexpr uint32_t DMAOMR_DTCEFD = 0x4000000; // DTCEFD

    static constexpr uint32_t DMAIER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DMAIER_TIE = 0x1; // TIE
    static constexpr uint32_t DMAIER_TPSIE = 0x2; // TPSIE
    static constexpr uint32_t DMAIER_TBUIE = 0x4; // TBUIE
    static constexpr uint32_t DMAIER_TJTIE = 0x8; // TJTIE
    static constexpr uint32_t DMAIER_ROIE = 0x10; // ROIE
    static constexpr uint32_t DMAIER_TUIE = 0x20; // TUIE
    static constexpr uint32_t DMAIER_RIE = 0x40; // RIE
    static constexpr uint32_t DMAIER_RBUIE = 0x80; // RBUIE
    static constexpr uint32_t DMAIER_RPSIE = 0x100; // RPSIE
    static constexpr uint32_t DMAIER_RWTIE = 0x200; // RWTIE
    static constexpr uint32_t DMAIER_ETIE = 0x400; // ETIE
    static constexpr uint32_t DMAIER_FBEIE = 0x2000; // FBEIE
    static constexpr uint32_t DMAIER_ERIE = 0x4000; // ERIE
    static constexpr uint32_t DMAIER_AISE = 0x8000; // AISE
    static constexpr uint32_t DMAIER_NISE = 0x10000; // NISE

    static constexpr uint32_t DMAMFBOCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DMAMFBOCR_MFC; // MFC
    static constexpr uint32_t DMAMFBOCR_OMFC = 0x10000; // OMFC
    typedef bit_field_t<17, 0x7ff> DMAMFBOCR_MFA; // MFA
    static constexpr uint32_t DMAMFBOCR_OFOC = 0x10000000; // OFOC

    static constexpr uint32_t DMARSWTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DMARSWTR_RSWTC; // RSWTC


    static constexpr uint32_t DMACHTDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DMACHTDR_HTDAP; // HTDAP

    static constexpr uint32_t DMACHRDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DMACHRDR_HRDAP; // HRDAP

    static constexpr uint32_t DMACHTBAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DMACHTBAR_HTBAP; // HTBAP

    static constexpr uint32_t DMACHRBAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DMACHRBAR_HRBAP; // HRBAP
};

// ETHERNET_MAC: Ethernet: media access control (MAC)

struct stm32f405_ethernet_mac_t
{
    volatile uint32_t MACCR; // Ethernet MAC configuration register
    volatile uint32_t MACFFR; // Ethernet MAC frame filter register
    volatile uint32_t MACHTHR; // Ethernet MAC hash table high register
    volatile uint32_t MACHTLR; // Ethernet MAC hash table low register
    volatile uint32_t MACMIIAR; // Ethernet MAC MII address register
    volatile uint32_t MACMIIDR; // Ethernet MAC MII data register
    volatile uint32_t MACFCR; // Ethernet MAC flow control register
    volatile uint32_t MACVLANTR; // Ethernet MAC VLAN tag register
    reserved_t<0x3> _0x20;
    volatile uint32_t MACPMTCSR; // Ethernet MAC PMT control and status register
    reserved_t<0x1> _0x30;
    volatile uint32_t MACDBGR; // Ethernet MAC debug register
    volatile uint32_t MACSR; // Ethernet MAC interrupt status register
    volatile uint32_t MACIMR; // Ethernet MAC interrupt mask register
    volatile uint32_t MACA0HR; // Ethernet MAC address 0 high register
    volatile uint32_t MACA0LR; // Ethernet MAC address 0 low register
    volatile uint32_t MACA1HR; // Ethernet MAC address 1 high register
    volatile uint32_t MACA1LR; // Ethernet MAC address1 low register
    volatile uint32_t MACA2HR; // Ethernet MAC address 2 high register
    volatile uint32_t MACA2LR; // Ethernet MAC address 2 low register
    volatile uint32_t MACA3HR; // Ethernet MAC address 3 high register
    volatile uint32_t MACA3LR; // Ethernet MAC address 3 low register

    static constexpr uint32_t MACCR_RESET_VALUE = 0x8000; // Reset value
    static constexpr uint32_t MACCR_RE = 0x4; // RE
    static constexpr uint32_t MACCR_TE = 0x8; // TE
    static constexpr uint32_t MACCR_DC = 0x10; // DC
    typedef bit_field_t<5, 0x3> MACCR_BL; // BL
    static constexpr uint32_t MACCR_APCS = 0x80; // APCS
    static constexpr uint32_t MACCR_RD = 0x200; // RD
    static constexpr uint32_t MACCR_IPCO = 0x400; // IPCO
    static constexpr uint32_t MACCR_DM = 0x800; // DM
    static constexpr uint32_t MACCR_LM = 0x1000; // LM
    static constexpr uint32_t MACCR_ROD = 0x2000; // ROD
    static constexpr uint32_t MACCR_FES = 0x4000; // FES
    static constexpr uint32_t MACCR_CSD = 0x10000; // CSD
    typedef bit_field_t<17, 0x7> MACCR_IFG; // IFG
    static constexpr uint32_t MACCR_JD = 0x400000; // JD
    static constexpr uint32_t MACCR_WD = 0x800000; // WD
    static constexpr uint32_t MACCR_CSTF = 0x2000000; // CSTF

    static constexpr uint32_t MACFFR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MACFFR_PM = 0x1; // PM
    static constexpr uint32_t MACFFR_HU = 0x2; // HU
    static constexpr uint32_t MACFFR_HM = 0x4; // HM
    static constexpr uint32_t MACFFR_DAIF = 0x8; // DAIF
    static constexpr uint32_t MACFFR_RAM = 0x10; // RAM
    static constexpr uint32_t MACFFR_BFD = 0x20; // BFD
    static constexpr uint32_t MACFFR_PCF = 0x40; // PCF
    static constexpr uint32_t MACFFR_SAIF = 0x80; // SAIF
    static constexpr uint32_t MACFFR_SAF = 0x100; // SAF
    static constexpr uint32_t MACFFR_HPF = 0x200; // HPF
    static constexpr uint32_t MACFFR_RA = 0x80000000; // RA

    static constexpr uint32_t MACHTHR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACHTHR_HTH; // HTH

    static constexpr uint32_t MACHTLR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACHTLR_HTL; // HTL

    static constexpr uint32_t MACMIIAR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MACMIIAR_MB = 0x1; // MB
    static constexpr uint32_t MACMIIAR_MW = 0x2; // MW
    typedef bit_field_t<2, 0x7> MACMIIAR_CR; // CR
    typedef bit_field_t<6, 0x1f> MACMIIAR_MR; // MR
    typedef bit_field_t<11, 0x1f> MACMIIAR_PA; // PA

    static constexpr uint32_t MACMIIDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MACMIIDR_TD; // TD

    static constexpr uint32_t MACFCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MACFCR_FCB = 0x1; // FCB
    static constexpr uint32_t MACFCR_TFCE = 0x2; // TFCE
    static constexpr uint32_t MACFCR_RFCE = 0x4; // RFCE
    static constexpr uint32_t MACFCR_UPFD = 0x8; // UPFD
    typedef bit_field_t<4, 0x3> MACFCR_PLT; // PLT
    static constexpr uint32_t MACFCR_ZQPD = 0x80; // ZQPD
    typedef bit_field_t<16, 0xffff> MACFCR_PT; // PT

    static constexpr uint32_t MACVLANTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MACVLANTR_VLANTI; // VLANTI
    static constexpr uint32_t MACVLANTR_VLANTC = 0x10000; // VLANTC


    static constexpr uint32_t MACPMTCSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MACPMTCSR_PD = 0x1; // PD
    static constexpr uint32_t MACPMTCSR_MPE = 0x2; // MPE
    static constexpr uint32_t MACPMTCSR_WFE = 0x4; // WFE
    static constexpr uint32_t MACPMTCSR_MPR = 0x20; // MPR
    static constexpr uint32_t MACPMTCSR_WFR = 0x40; // WFR
    static constexpr uint32_t MACPMTCSR_GU = 0x200; // GU
    static constexpr uint32_t MACPMTCSR_WFFRPR = 0x80000000; // WFFRPR


    static constexpr uint32_t MACDBGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MACDBGR_CR = 0x1; // CR
    static constexpr uint32_t MACDBGR_CSR = 0x2; // CSR
    static constexpr uint32_t MACDBGR_ROR = 0x4; // ROR
    static constexpr uint32_t MACDBGR_MCF = 0x8; // MCF
    static constexpr uint32_t MACDBGR_MCP = 0x10; // MCP
    static constexpr uint32_t MACDBGR_MCFHP = 0x20; // MCFHP

    static constexpr uint32_t MACSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MACSR_PMTS = 0x8; // PMTS
    static constexpr uint32_t MACSR_MMCS = 0x10; // MMCS
    static constexpr uint32_t MACSR_MMCRS = 0x20; // MMCRS
    static constexpr uint32_t MACSR_MMCTS = 0x40; // MMCTS
    static constexpr uint32_t MACSR_TSTS = 0x200; // TSTS

    static constexpr uint32_t MACIMR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MACIMR_PMTIM = 0x8; // PMTIM
    static constexpr uint32_t MACIMR_TSTIM = 0x200; // TSTIM

    static constexpr uint32_t MACA0HR_RESET_VALUE = 0x10ffff; // Reset value
    typedef bit_field_t<0, 0xffff> MACA0HR_MACA0H; // MAC address0 high
    static constexpr uint32_t MACA0HR_MO = 0x80000000; // Always 1

    static constexpr uint32_t MACA0LR_RESET_VALUE = 0xffffffff; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACA0LR_MACA0L; // 0

    static constexpr uint32_t MACA1HR_RESET_VALUE = 0xffff; // Reset value
    typedef bit_field_t<0, 0xffff> MACA1HR_MACA1H; // MACA1H
    typedef bit_field_t<24, 0x3f> MACA1HR_MBC; // MBC
    static constexpr uint32_t MACA1HR_SA = 0x40000000; // SA
    static constexpr uint32_t MACA1HR_AE = 0x80000000; // AE

    static constexpr uint32_t MACA1LR_RESET_VALUE = 0xffffffff; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACA1LR_MACA1LR; // MACA1LR

    static constexpr uint32_t MACA2HR_RESET_VALUE = 0xffff; // Reset value
    typedef bit_field_t<0, 0xffff> MACA2HR_MAC2AH; // MAC2AH
    typedef bit_field_t<24, 0x3f> MACA2HR_MBC; // MBC
    static constexpr uint32_t MACA2HR_SA = 0x40000000; // SA
    static constexpr uint32_t MACA2HR_AE = 0x80000000; // AE

    static constexpr uint32_t MACA2LR_RESET_VALUE = 0xffffffff; // Reset value
    typedef bit_field_t<0, 0x7fffffff> MACA2LR_MACA2L; // MACA2L

    static constexpr uint32_t MACA3HR_RESET_VALUE = 0xffff; // Reset value
    typedef bit_field_t<0, 0xffff> MACA3HR_MACA3H; // MACA3H
    typedef bit_field_t<24, 0x3f> MACA3HR_MBC; // MBC
    static constexpr uint32_t MACA3HR_SA = 0x40000000; // SA
    static constexpr uint32_t MACA3HR_AE = 0x80000000; // AE

    static constexpr uint32_t MACA3LR_RESET_VALUE = 0xffffffff; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACA3LR_MBCA3L; // MBCA3L
};

// ETHERNET_MMC: Ethernet: MAC management counters

struct stm32f405_ethernet_mmc_t
{
    volatile uint32_t MMCCR; // Ethernet MMC control register
    volatile uint32_t MMCRIR; // Ethernet MMC receive interrupt register
    volatile uint32_t MMCTIR; // Ethernet MMC transmit interrupt register
    volatile uint32_t MMCRIMR; // Ethernet MMC receive interrupt mask register
    volatile uint32_t MMCTIMR; // Ethernet MMC transmit interrupt mask register
    reserved_t<0xe> _0x14;
    volatile uint32_t MMCTGFSCCR; // Ethernet MMC transmitted good frames after a single collision counter
    volatile uint32_t MMCTGFMSCCR; // Ethernet MMC transmitted good frames after more than a single collision
    reserved_t<0x5> _0x54;
    volatile uint32_t MMCTGFCR; // Ethernet MMC transmitted good frames counter register
    reserved_t<0xa> _0x6c;
    volatile uint32_t MMCRFCECR; // Ethernet MMC received frames with CRC error counter register
    volatile uint32_t MMCRFAECR; // Ethernet MMC received frames with alignment error counter register
    reserved_t<0xa> _0x9c;
    volatile uint32_t MMCRGUFCR; // MMC received good unicast frames counter register

    static constexpr uint32_t MMCCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MMCCR_CR = 0x1; // CR
    static constexpr uint32_t MMCCR_CSR = 0x2; // CSR
    static constexpr uint32_t MMCCR_ROR = 0x4; // ROR
    static constexpr uint32_t MMCCR_MCF = 0x8; // MCF
    static constexpr uint32_t MMCCR_MCP = 0x10; // MCP
    static constexpr uint32_t MMCCR_MCFHP = 0x20; // MCFHP

    static constexpr uint32_t MMCRIR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MMCRIR_RFCES = 0x20; // RFCES
    static constexpr uint32_t MMCRIR_RFAES = 0x40; // RFAES
    static constexpr uint32_t MMCRIR_RGUFS = 0x20000; // RGUFS

    static constexpr uint32_t MMCTIR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MMCTIR_TGFSCS = 0x4000; // TGFSCS
    static constexpr uint32_t MMCTIR_TGFMSCS = 0x8000; // TGFMSCS
    static constexpr uint32_t MMCTIR_TGFS = 0x200000; // TGFS

    static constexpr uint32_t MMCRIMR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MMCRIMR_RFCEM = 0x20; // RFCEM
    static constexpr uint32_t MMCRIMR_RFAEM = 0x40; // RFAEM
    static constexpr uint32_t MMCRIMR_RGUFM = 0x20000; // RGUFM

    static constexpr uint32_t MMCTIMR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MMCTIMR_TGFSCM = 0x4000; // TGFSCM
    static constexpr uint32_t MMCTIMR_TGFMSCM = 0x8000; // TGFMSCM
    static constexpr uint32_t MMCTIMR_TGFM = 0x10000; // TGFM


    static constexpr uint32_t MMCTGFSCCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MMCTGFSCCR_TGFSCC; // TGFSCC

    static constexpr uint32_t MMCTGFMSCCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MMCTGFMSCCR_TGFMSCC; // TGFMSCC


    static constexpr uint32_t MMCTGFCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MMCTGFCR_TGFC; // HTL


    static constexpr uint32_t MMCRFCECR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MMCRFCECR_RFCFC; // RFCFC

    static constexpr uint32_t MMCRFAECR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MMCRFAECR_RFAEC; // RFAEC


    static constexpr uint32_t MMCRGUFCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MMCRGUFCR_RGUFC; // RGUFC
};

// ETHERNET_PTP: Ethernet: Precision time protocol

struct stm32f405_ethernet_ptp_t
{
    volatile uint32_t PTPTSCR; // Ethernet PTP time stamp control register
    volatile uint32_t PTPSSIR; // Ethernet PTP subsecond increment register
    volatile uint32_t PTPTSHR; // Ethernet PTP time stamp high register
    volatile uint32_t PTPTSLR; // Ethernet PTP time stamp low register
    volatile uint32_t PTPTSHUR; // Ethernet PTP time stamp high update register
    volatile uint32_t PTPTSLUR; // Ethernet PTP time stamp low update register
    volatile uint32_t PTPTSAR; // Ethernet PTP time stamp addend register
    volatile uint32_t PTPTTHR; // Ethernet PTP target time high register
    volatile uint32_t PTPTTLR; // Ethernet PTP target time low register
    reserved_t<0x1> _0x24;
    volatile uint32_t PTPTSSR; // Ethernet PTP time stamp status register
    volatile uint32_t PTPPPSCR; // Ethernet PTP PPS control register

    static constexpr uint32_t PTPTSCR_RESET_VALUE = 0x2000; // Reset value
    static constexpr uint32_t PTPTSCR_TSE = 0x1; // TSE
    static constexpr uint32_t PTPTSCR_TSFCU = 0x2; // TSFCU
    static constexpr uint32_t PTPTSCR_TSPTPPSV2E = 0x400; // TSPTPPSV2E
    static constexpr uint32_t PTPTSCR_TSSPTPOEFE = 0x800; // TSSPTPOEFE
    static constexpr uint32_t PTPTSCR_TSSIPV6FE = 0x1000; // TSSIPV6FE
    static constexpr uint32_t PTPTSCR_TSSIPV4FE = 0x2000; // TSSIPV4FE
    static constexpr uint32_t PTPTSCR_TSSEME = 0x4000; // TSSEME
    static constexpr uint32_t PTPTSCR_TSSMRME = 0x8000; // TSSMRME
    typedef bit_field_t<16, 0x3> PTPTSCR_TSCNT; // TSCNT
    static constexpr uint32_t PTPTSCR_TSPFFMAE = 0x40000; // TSPFFMAE
    static constexpr uint32_t PTPTSCR_TSSTI = 0x4; // TSSTI
    static constexpr uint32_t PTPTSCR_TSSTU = 0x8; // TSSTU
    static constexpr uint32_t PTPTSCR_TSITE = 0x10; // TSITE
    static constexpr uint32_t PTPTSCR_TTSARU = 0x20; // TTSARU
    static constexpr uint32_t PTPTSCR_TSSARFE = 0x100; // TSSARFE
    static constexpr uint32_t PTPTSCR_TSSSR = 0x200; // TSSSR

    static constexpr uint32_t PTPSSIR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> PTPSSIR_STSSI; // STSSI

    static constexpr uint32_t PTPTSHR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> PTPTSHR_STS; // STS

    static constexpr uint32_t PTPTSLR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7fffffff> PTPTSLR_STSS; // STSS
    static constexpr uint32_t PTPTSLR_STPNS = 0x80000000; // STPNS

    static constexpr uint32_t PTPTSHUR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> PTPTSHUR_TSUS; // TSUS

    static constexpr uint32_t PTPTSLUR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7fffffff> PTPTSLUR_TSUSS; // TSUSS
    static constexpr uint32_t PTPTSLUR_TSUPNS = 0x80000000; // TSUPNS

    static constexpr uint32_t PTPTSAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> PTPTSAR_TSA; // TSA

    static constexpr uint32_t PTPTTHR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> PTPTTHR_TTSH; // 0

    static constexpr uint32_t PTPTTLR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> PTPTTLR_TTSL; // TTSL


    static constexpr uint32_t PTPTSSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PTPTSSR_TSSO = 0x1; // TSSO
    static constexpr uint32_t PTPTSSR_TSTTR = 0x2; // TSTTR

    static constexpr uint32_t PTPPPSCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PTPPPSCR_TSSO = 0x1; // TSSO
    static constexpr uint32_t PTPPPSCR_TSTTR = 0x2; // TSTTR
};

template<>
struct peripheral_t<STM32F405, ETHERNET_DMA>
{
    using T = stm32f405_ethernet_dma_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, ETHERNET_DMA>
{
    using T = stm32f405_ethernet_dma_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, ETHERNET_DMA>
{
    using T = stm32f405_ethernet_dma_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, ETHERNET_DMA>
{
    using T = stm32f405_ethernet_dma_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, ETHERNET_DMA>
{
    using T = stm32f405_ethernet_dma_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, ETHERNET_MAC>
{
    using T = stm32f405_ethernet_mac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, ETHERNET_MAC>
{
    using T = stm32f405_ethernet_mac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, ETHERNET_MAC>
{
    using T = stm32f405_ethernet_mac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, ETHERNET_MAC>
{
    using T = stm32f405_ethernet_mac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, ETHERNET_MAC>
{
    using T = stm32f405_ethernet_mac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, ETHERNET_MMC>
{
    using T = stm32f405_ethernet_mmc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, ETHERNET_MMC>
{
    using T = stm32f405_ethernet_mmc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, ETHERNET_MMC>
{
    using T = stm32f405_ethernet_mmc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, ETHERNET_MMC>
{
    using T = stm32f405_ethernet_mmc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, ETHERNET_MMC>
{
    using T = stm32f405_ethernet_mmc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, ETHERNET_PTP>
{
    using T = stm32f405_ethernet_ptp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, ETHERNET_PTP>
{
    using T = stm32f405_ethernet_ptp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, ETHERNET_PTP>
{
    using T = stm32f405_ethernet_ptp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, ETHERNET_PTP>
{
    using T = stm32f405_ethernet_ptp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, ETHERNET_PTP>
{
    using T = stm32f405_ethernet_ptp_t;
    static T& V;
};

using ethernet_dma_t = peripheral_t<svd, ETHERNET_DMA>;
using ethernet_mac_t = peripheral_t<svd, ETHERNET_MAC>;
using ethernet_mmc_t = peripheral_t<svd, ETHERNET_MMC>;
using ethernet_ptp_t = peripheral_t<svd, ETHERNET_PTP>;
