#pragma once

////
//
//      STM32F1 ETHERNET peripherals
//
///

// ETHERNET_DMA: Ethernet: DMA controller operation

struct stm32f101_ethernet_dma_t
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
    reserved_t<0x9> _0x24;
    volatile uint32_t DMACHTDR; // Ethernet DMA current host transmit descriptor register
    volatile uint32_t DMACHRDR; // Ethernet DMA current host receive descriptor register
    volatile uint32_t DMACHTBAR; // Ethernet DMA current host transmit buffer address register
    volatile uint32_t DMACHRBAR; // Ethernet DMA current host receive buffer address register

    static constexpr uint32_t DMABMR_RESET_VALUE = 0x20101; // Reset value
    static constexpr uint32_t DMABMR_SR = 0x1; // Software reset
    static constexpr uint32_t DMABMR_DA = 0x2; // DMA Arbitration
    typedef bit_field_t<2, 0x1f> DMABMR_DSL; // Descriptor skip length
    typedef bit_field_t<8, 0x3f> DMABMR_PBL; // Programmable burst length
    typedef bit_field_t<14, 0x3> DMABMR_RTPR; // Rx Tx priority ratio
    static constexpr uint32_t DMABMR_FB = 0x10000; // Fixed burst
    typedef bit_field_t<17, 0x3f> DMABMR_RDP; // Rx DMA PBL
    static constexpr uint32_t DMABMR_USP = 0x800000; // Use separate PBL
    static constexpr uint32_t DMABMR_FPM = 0x1000000; // 4xPBL mode
    static constexpr uint32_t DMABMR_AAB = 0x2000000; // Address-aligned beats

    static constexpr uint32_t DMATPDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DMATPDR_TPD; // Transmit poll demand

    static constexpr uint32_t DMARPDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DMARPDR_RPD; // Receive poll demand

    static constexpr uint32_t DMARDLAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DMARDLAR_SRL; // Start of receive list

    static constexpr uint32_t DMATDLAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DMATDLAR_STL; // Start of transmit list

    static constexpr uint32_t DMASR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DMASR_TS = 0x1; // Transmit status
    static constexpr uint32_t DMASR_TPSS = 0x2; // Transmit process stopped status
    static constexpr uint32_t DMASR_TBUS = 0x4; // Transmit buffer unavailable status
    static constexpr uint32_t DMASR_TJTS = 0x8; // Transmit jabber timeout status
    static constexpr uint32_t DMASR_ROS = 0x10; // Receive overflow status
    static constexpr uint32_t DMASR_TUS = 0x20; // Transmit underflow status
    static constexpr uint32_t DMASR_RS = 0x40; // Receive status
    static constexpr uint32_t DMASR_RBUS = 0x80; // Receive buffer unavailable status
    static constexpr uint32_t DMASR_RPSS = 0x100; // Receive process stopped status
    static constexpr uint32_t DMASR_PWTS = 0x200; // Receive watchdog timeout status
    static constexpr uint32_t DMASR_ETS = 0x400; // Early transmit status
    static constexpr uint32_t DMASR_FBES = 0x2000; // Fatal bus error status
    static constexpr uint32_t DMASR_ERS = 0x4000; // Early receive status
    static constexpr uint32_t DMASR_AIS = 0x8000; // Abnormal interrupt summary
    static constexpr uint32_t DMASR_NIS = 0x10000; // Normal interrupt summary
    typedef bit_field_t<17, 0x7> DMASR_RPS; // Receive process state
    typedef bit_field_t<20, 0x7> DMASR_TPS; // Transmit process state
    typedef bit_field_t<23, 0x7> DMASR_EBS; // Error bits status
    static constexpr uint32_t DMASR_MMCS = 0x8000000; // MMC status
    static constexpr uint32_t DMASR_PMTS = 0x10000000; // PMT status
    static constexpr uint32_t DMASR_TSTS = 0x20000000; // Time stamp trigger status

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
    static constexpr uint32_t DMAIER_TIE = 0x1; // Transmit interrupt enable
    static constexpr uint32_t DMAIER_TPSIE = 0x2; // Transmit process stopped interrupt enable
    static constexpr uint32_t DMAIER_TBUIE = 0x4; // Transmit buffer unavailable interrupt enable
    static constexpr uint32_t DMAIER_TJTIE = 0x8; // Transmit jabber timeout interrupt enable
    static constexpr uint32_t DMAIER_ROIE = 0x10; // Overflow interrupt enable
    static constexpr uint32_t DMAIER_TUIE = 0x20; // Underflow interrupt enable
    static constexpr uint32_t DMAIER_RIE = 0x40; // Receive interrupt enable
    static constexpr uint32_t DMAIER_RBUIE = 0x80; // Receive buffer unavailable interrupt enable
    static constexpr uint32_t DMAIER_RPSIE = 0x100; // Receive process stopped interrupt enable
    static constexpr uint32_t DMAIER_RWTIE = 0x200; // receive watchdog timeout interrupt enable
    static constexpr uint32_t DMAIER_ETIE = 0x400; // Early transmit interrupt enable
    static constexpr uint32_t DMAIER_FBEIE = 0x2000; // Fatal bus error interrupt enable
    static constexpr uint32_t DMAIER_ERIE = 0x4000; // Early receive interrupt enable
    static constexpr uint32_t DMAIER_AISE = 0x8000; // Abnormal interrupt summary enable
    static constexpr uint32_t DMAIER_NISE = 0x10000; // Normal interrupt summary enable

    static constexpr uint32_t DMAMFBOCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DMAMFBOCR_MFC; // Missed frames by the controller
    static constexpr uint32_t DMAMFBOCR_OMFC = 0x10000; // Overflow bit for missed frame counter
    typedef bit_field_t<17, 0x7ff> DMAMFBOCR_MFA; // Missed frames by the application
    static constexpr uint32_t DMAMFBOCR_OFOC = 0x10000000; // Overflow bit for FIFO overflow counter


    static constexpr uint32_t DMACHTDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DMACHTDR_HTDAP; // Host transmit descriptor address pointer

    static constexpr uint32_t DMACHRDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DMACHRDR_HRDAP; // Host receive descriptor address pointer

    static constexpr uint32_t DMACHTBAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DMACHTBAR_HTBAP; // Host transmit buffer address pointer

    static constexpr uint32_t DMACHRBAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DMACHRBAR_HRBAP; // Host receive buffer address pointer
};

// ETHERNET_MAC: Ethernet: media access control

struct stm32f101_ethernet_mac_t
{
    volatile uint32_t MACCR; // Ethernet MAC configuration register (ETH_MACCR)
    volatile uint32_t MACFFR; // Ethernet MAC frame filter register (ETH_MACCFFR)
    volatile uint32_t MACHTHR; // Ethernet MAC hash table high register
    volatile uint32_t MACHTLR; // Ethernet MAC hash table low register
    volatile uint32_t MACMIIAR; // Ethernet MAC MII address register (ETH_MACMIIAR)
    volatile uint32_t MACMIIDR; // Ethernet MAC MII data register (ETH_MACMIIDR)
    volatile uint32_t MACFCR; // Ethernet MAC flow control register (ETH_MACFCR)
    volatile uint32_t MACVLANTR; // Ethernet MAC VLAN tag register (ETH_MACVLANTR)
    reserved_t<0x3> _0x20;
    volatile uint32_t MACPMTCSR; // Ethernet MAC PMT control and status register (ETH_MACPMTCSR)
    reserved_t<0x2> _0x30;
    volatile uint32_t MACSR; // Ethernet MAC interrupt status register (ETH_MACSR)
    volatile uint32_t MACIMR; // Ethernet MAC interrupt mask register (ETH_MACIMR)
    volatile uint32_t MACA0HR; // Ethernet MAC address 0 high register (ETH_MACA0HR)
    volatile uint32_t MACA0LR; // Ethernet MAC address 0 low register
    volatile uint32_t MACA1HR; // Ethernet MAC address 1 high register (ETH_MACA1HR)
    volatile uint32_t MACA1LR; // Ethernet MAC address1 low register
    volatile uint32_t MACA2HR; // Ethernet MAC address 2 high register (ETH_MACA2HR)
    volatile uint32_t MACA2LR; // Ethernet MAC address 2 low register
    volatile uint32_t MACA3HR; // Ethernet MAC address 3 high register (ETH_MACA3HR)
    volatile uint32_t MACA3LR; // Ethernet MAC address 3 low register

    static constexpr uint32_t MACCR_RESET_VALUE = 0x8000; // Reset value
    static constexpr uint32_t MACCR_RE = 0x4; // Receiver enable
    static constexpr uint32_t MACCR_TE = 0x8; // Transmitter enable
    static constexpr uint32_t MACCR_DC = 0x10; // Deferral check
    typedef bit_field_t<5, 0x3> MACCR_BL; // Back-off limit
    static constexpr uint32_t MACCR_APCS = 0x80; // Automatic pad/CRC stripping
    static constexpr uint32_t MACCR_RD = 0x200; // Retry disable
    static constexpr uint32_t MACCR_IPCO = 0x400; // IPv4 checksum offload
    static constexpr uint32_t MACCR_DM = 0x800; // Duplex mode
    static constexpr uint32_t MACCR_LM = 0x1000; // Loopback mode
    static constexpr uint32_t MACCR_ROD = 0x2000; // Receive own disable
    static constexpr uint32_t MACCR_FES = 0x4000; // Fast Ethernet speed
    static constexpr uint32_t MACCR_CSD = 0x10000; // Carrier sense disable
    typedef bit_field_t<17, 0x7> MACCR_IFG; // Interframe gap
    static constexpr uint32_t MACCR_JD = 0x400000; // Jabber disable
    static constexpr uint32_t MACCR_WD = 0x800000; // Watchdog disable

    static constexpr uint32_t MACFFR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MACFFR_PM = 0x1; // Promiscuous mode
    static constexpr uint32_t MACFFR_HU = 0x2; // Hash unicast
    static constexpr uint32_t MACFFR_HM = 0x4; // Hash multicast
    static constexpr uint32_t MACFFR_DAIF = 0x8; // Destination address inverse filtering
    static constexpr uint32_t MACFFR_PAM = 0x10; // Pass all multicast
    static constexpr uint32_t MACFFR_BFD = 0x20; // Broadcast frames disable
    typedef bit_field_t<6, 0x3> MACFFR_PCF; // Pass control frames
    static constexpr uint32_t MACFFR_SAIF = 0x100; // Source address inverse filtering
    static constexpr uint32_t MACFFR_SAF = 0x200; // Source address filter
    static constexpr uint32_t MACFFR_HPF = 0x400; // Hash or perfect filter
    static constexpr uint32_t MACFFR_RA = 0x80000000; // Receive all

    static constexpr uint32_t MACHTHR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACHTHR_HTH; // Hash table high

    static constexpr uint32_t MACHTLR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACHTLR_HTL; // Hash table low

    static constexpr uint32_t MACMIIAR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MACMIIAR_MB = 0x1; // MII busy
    static constexpr uint32_t MACMIIAR_MW = 0x2; // MII write
    typedef bit_field_t<2, 0x7> MACMIIAR_CR; // Clock range
    typedef bit_field_t<6, 0x1f> MACMIIAR_MR; // MII register
    typedef bit_field_t<11, 0x1f> MACMIIAR_PA; // PHY address

    static constexpr uint32_t MACMIIDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MACMIIDR_MD; // MII data

    static constexpr uint32_t MACFCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MACFCR_FCB_BPA = 0x1; // Flow control busy/back pressure activate
    static constexpr uint32_t MACFCR_TFCE = 0x2; // Transmit flow control enable
    static constexpr uint32_t MACFCR_RFCE = 0x4; // Receive flow control enable
    static constexpr uint32_t MACFCR_UPFD = 0x8; // Unicast pause frame detect
    typedef bit_field_t<4, 0x3> MACFCR_PLT; // Pause low threshold
    static constexpr uint32_t MACFCR_ZQPD = 0x80; // Zero-quanta pause disable
    typedef bit_field_t<16, 0xffff> MACFCR_PT; // Pass control frames

    static constexpr uint32_t MACVLANTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MACVLANTR_VLANTI; // VLAN tag identifier (for receive frames)
    static constexpr uint32_t MACVLANTR_VLANTC = 0x10000; // 12-bit VLAN tag comparison


    static constexpr uint32_t MACPMTCSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MACPMTCSR_PD = 0x1; // Power down
    static constexpr uint32_t MACPMTCSR_MPE = 0x2; // Magic Packet enable
    static constexpr uint32_t MACPMTCSR_WFE = 0x4; // Wakeup frame enable
    static constexpr uint32_t MACPMTCSR_MPR = 0x20; // Magic packet received
    static constexpr uint32_t MACPMTCSR_WFR = 0x40; // Wakeup frame received
    static constexpr uint32_t MACPMTCSR_GU = 0x200; // Global unicast
    static constexpr uint32_t MACPMTCSR_WFFRPR = 0x80000000; // Wakeup frame filter register pointer reset


    static constexpr uint32_t MACSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MACSR_PMTS = 0x8; // PMT status
    static constexpr uint32_t MACSR_MMCS = 0x10; // MMC status
    static constexpr uint32_t MACSR_MMCRS = 0x20; // MMC receive status
    static constexpr uint32_t MACSR_MMCTS = 0x40; // MMC transmit status
    static constexpr uint32_t MACSR_TSTS = 0x200; // Time stamp trigger status

    static constexpr uint32_t MACIMR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MACIMR_PMTIM = 0x8; // PMT interrupt mask
    static constexpr uint32_t MACIMR_TSTIM = 0x200; // Time stamp trigger interrupt mask

    static constexpr uint32_t MACA0HR_RESET_VALUE = 0x10ffff; // Reset value
    typedef bit_field_t<0, 0xffff> MACA0HR_MACA0H; // MAC address0 high
    static constexpr uint32_t MACA0HR_MO = 0x80000000; // Always 1

    static constexpr uint32_t MACA0LR_RESET_VALUE = 0xffffffff; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACA0LR_MACA0L; // MAC address0 low

    static constexpr uint32_t MACA1HR_RESET_VALUE = 0xffff; // Reset value
    typedef bit_field_t<0, 0xffff> MACA1HR_MACA1H; // MAC address1 high
    typedef bit_field_t<24, 0x3f> MACA1HR_MBC; // Mask byte control
    static constexpr uint32_t MACA1HR_SA = 0x40000000; // Source address
    static constexpr uint32_t MACA1HR_AE = 0x80000000; // Address enable

    static constexpr uint32_t MACA1LR_RESET_VALUE = 0xffffffff; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACA1LR_MACA1L; // MAC address1 low

    static constexpr uint32_t MACA2HR_RESET_VALUE = 0x50; // Reset value
    typedef bit_field_t<0, 0xffff> MACA2HR_ETH_MACA2HR; // Ethernet MAC address 2 high register
    typedef bit_field_t<24, 0x3f> MACA2HR_MBC; // Mask byte control
    static constexpr uint32_t MACA2HR_SA = 0x40000000; // Source address
    static constexpr uint32_t MACA2HR_AE = 0x80000000; // Address enable

    static constexpr uint32_t MACA2LR_RESET_VALUE = 0xffffffff; // Reset value
    typedef bit_field_t<0, 0x7fffffff> MACA2LR_MACA2L; // MAC address2 low

    static constexpr uint32_t MACA3HR_RESET_VALUE = 0xffff; // Reset value
    typedef bit_field_t<0, 0xffff> MACA3HR_MACA3H; // MAC address3 high
    typedef bit_field_t<24, 0x3f> MACA3HR_MBC; // Mask byte control
    static constexpr uint32_t MACA3HR_SA = 0x40000000; // Source address
    static constexpr uint32_t MACA3HR_AE = 0x80000000; // Address enable

    static constexpr uint32_t MACA3LR_RESET_VALUE = 0xffffffff; // Reset value
    typedef bit_field_t<0, 0xffffffff> MACA3LR_MBCA3L; // MAC address3 low
};

// ETHERNET_MMC: Ethernet: MAC management counters

struct stm32f101_ethernet_mmc_t
{
    volatile uint32_t MMCCR; // Ethernet MMC control register (ETH_MMCCR)
    volatile uint32_t MMCRIR; // Ethernet MMC receive interrupt register (ETH_MMCRIR)
    volatile uint32_t MMCTIR; // Ethernet MMC transmit interrupt register (ETH_MMCTIR)
    volatile uint32_t MMCRIMR; // Ethernet MMC receive interrupt mask register (ETH_MMCRIMR)
    volatile uint32_t MMCTIMR; // Ethernet MMC transmit interrupt mask register (ETH_MMCTIMR)
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
    static constexpr uint32_t MMCCR_CR = 0x1; // Counter reset
    static constexpr uint32_t MMCCR_CSR = 0x2; // Counter stop rollover
    static constexpr uint32_t MMCCR_ROR = 0x4; // Reset on read
    static constexpr uint32_t MMCCR_MCF = 0x80000000; // MMC counter freeze

    static constexpr uint32_t MMCRIR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MMCRIR_RFCES = 0x20; // Received frames CRC error status
    static constexpr uint32_t MMCRIR_RFAES = 0x40; // Received frames alignment error status
    static constexpr uint32_t MMCRIR_RGUFS = 0x20000; // Received Good Unicast Frames Status

    static constexpr uint32_t MMCTIR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MMCTIR_TGFSCS = 0x4000; // Transmitted good frames single collision status
    static constexpr uint32_t MMCTIR_TGFMSCS = 0x8000; // Transmitted good frames more single collision status
    static constexpr uint32_t MMCTIR_TGFS = 0x200000; // Transmitted good frames status

    static constexpr uint32_t MMCRIMR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MMCRIMR_RFCEM = 0x20; // Received frame CRC error mask
    static constexpr uint32_t MMCRIMR_RFAEM = 0x40; // Received frames alignment error mask
    static constexpr uint32_t MMCRIMR_RGUFM = 0x20000; // Received good unicast frames mask

    static constexpr uint32_t MMCTIMR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MMCTIMR_TGFSCM = 0x4000; // Transmitted good frames single collision mask
    static constexpr uint32_t MMCTIMR_TGFMSCM = 0x8000; // Transmitted good frames more single collision mask
    static constexpr uint32_t MMCTIMR_TGFM = 0x200000; // Transmitted good frames mask


    static constexpr uint32_t MMCTGFSCCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MMCTGFSCCR_TGFSCC; // Transmitted good frames after a single collision counter

    static constexpr uint32_t MMCTGFMSCCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MMCTGFMSCCR_TGFMSCC; // Transmitted good frames after more than a single collision counter


    static constexpr uint32_t MMCTGFCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MMCTGFCR_TGFC; // Transmitted good frames counter


    static constexpr uint32_t MMCRFCECR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MMCRFCECR_RFCFC; // Received frames with CRC error counter

    static constexpr uint32_t MMCRFAECR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MMCRFAECR_RFAEC; // Received frames with alignment error counter


    static constexpr uint32_t MMCRGUFCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> MMCRGUFCR_RGUFC; // Received good unicast frames counter
};

// ETHERNET_PTP: Ethernet: Precision time protocol

struct stm32f101_ethernet_ptp_t
{
    volatile uint32_t PTPTSCR; // Ethernet PTP time stamp control register (ETH_PTPTSCR)
    volatile uint32_t PTPSSIR; // Ethernet PTP subsecond increment register
    volatile uint32_t PTPTSHR; // Ethernet PTP time stamp high register
    volatile uint32_t PTPTSLR; // Ethernet PTP time stamp low register (ETH_PTPTSLR)
    volatile uint32_t PTPTSHUR; // Ethernet PTP time stamp high update register
    volatile uint32_t PTPTSLUR; // Ethernet PTP time stamp low update register (ETH_PTPTSLUR)
    volatile uint32_t PTPTSAR; // Ethernet PTP time stamp addend register
    volatile uint32_t PTPTTHR; // Ethernet PTP target time high register
    volatile uint32_t PTPTTLR; // Ethernet PTP target time low register

    static constexpr uint32_t PTPTSCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PTPTSCR_TSE = 0x1; // Time stamp enable
    static constexpr uint32_t PTPTSCR_TSFCU = 0x2; // Time stamp fine or coarse update
    static constexpr uint32_t PTPTSCR_TSSTI = 0x4; // Time stamp system time initialize
    static constexpr uint32_t PTPTSCR_TSSTU = 0x8; // Time stamp system time update
    static constexpr uint32_t PTPTSCR_TSITE = 0x10; // Time stamp interrupt trigger enable
    static constexpr uint32_t PTPTSCR_TSARU = 0x20; // Time stamp addend register update

    static constexpr uint32_t PTPSSIR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> PTPSSIR_STSSI; // System time subsecond increment

    static constexpr uint32_t PTPTSHR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> PTPTSHR_STS; // System time second

    static constexpr uint32_t PTPTSLR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7fffffff> PTPTSLR_STSS; // System time subseconds
    static constexpr uint32_t PTPTSLR_STPNS = 0x80000000; // System time positive or negative sign

    static constexpr uint32_t PTPTSHUR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> PTPTSHUR_TSUS; // Time stamp update second

    static constexpr uint32_t PTPTSLUR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7fffffff> PTPTSLUR_TSUSS; // Time stamp update subseconds
    static constexpr uint32_t PTPTSLUR_TSUPNS = 0x80000000; // Time stamp update positive or negative sign

    static constexpr uint32_t PTPTSAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> PTPTSAR_TSA; // Time stamp addend

    static constexpr uint32_t PTPTTHR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> PTPTTHR_TTSH; // Target time stamp high

    static constexpr uint32_t PTPTTLR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> PTPTTLR_TTSL; // Target time stamp low
};

template<>
struct peripheral_t<STM32F101, ETHERNET_DMA>
{
    using T = stm32f101_ethernet_dma_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F103, ETHERNET_DMA>
{
    using T = stm32f101_ethernet_dma_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F107, ETHERNET_DMA>
{
    using T = stm32f101_ethernet_dma_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F101, ETHERNET_MAC>
{
    using T = stm32f101_ethernet_mac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F103, ETHERNET_MAC>
{
    using T = stm32f101_ethernet_mac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F107, ETHERNET_MAC>
{
    using T = stm32f101_ethernet_mac_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F101, ETHERNET_MMC>
{
    using T = stm32f101_ethernet_mmc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F103, ETHERNET_MMC>
{
    using T = stm32f101_ethernet_mmc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F107, ETHERNET_MMC>
{
    using T = stm32f101_ethernet_mmc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F101, ETHERNET_PTP>
{
    using T = stm32f101_ethernet_ptp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F103, ETHERNET_PTP>
{
    using T = stm32f101_ethernet_ptp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F107, ETHERNET_PTP>
{
    using T = stm32f101_ethernet_ptp_t;
    static T& V;
};

using ethernet_dma_t = peripheral_t<svd, ETHERNET_DMA>;
using ethernet_mac_t = peripheral_t<svd, ETHERNET_MAC>;
using ethernet_mmc_t = peripheral_t<svd, ETHERNET_MMC>;
using ethernet_ptp_t = peripheral_t<svd, ETHERNET_PTP>;
