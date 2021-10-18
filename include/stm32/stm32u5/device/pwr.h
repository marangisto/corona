#pragma once

////
//
//      STM32U5 PWR peripherals
//
///

// PWR: Power control

struct stm32u5xx_pwr_t
{
    volatile uint32_t PWR_CR1; // PWR control register 1
    volatile uint32_t PWR_CR2; // PWR control register 2
    volatile uint32_t PWR_CR3; // PWR control register 3
    volatile uint32_t PWR_VOSR; // PWR voltage scaling register
    volatile uint32_t PWR_SVMCR; // PWR supply voltage monitoring control register
    volatile uint32_t PWR_WUCR1; // PWR wakeup control register 1
    volatile uint32_t PWR_WUCR2; // PWR wakeup control register 2
    volatile uint32_t PWR_WUCR3; // PWR wakeup control register 3
    volatile uint32_t PWR_BDCR1; // PWR Backup domain control register 1
    volatile uint32_t PWR_BDCR2; // PWR Backup domain control register 2
    volatile uint32_t PWR_DBPR; // PWR disable Backup domain register
    volatile uint32_t PWR_UCPDR; // PWR USB Type-C and Power Delivery register
    volatile uint32_t PWR_SECCFGR; // PWR security configuration register
    volatile uint32_t PWR_PRIVCFGR; // PWR privilege control register
    volatile uint32_t PWR_SR; // PWR status register
    reserved_t<0x1> _0x3c;
    volatile uint32_t PWR_BDSR; // PWR Backup domain status register
    volatile uint32_t PWR_WUSR; // PWR wakeup status register
    volatile uint32_t PWR_WUSCR; // PWR wakeup status clear register
    volatile uint32_t PWR_APCR; // PWR apply pull configuration register
    volatile uint32_t PWR_PUCRA; // PWR port A pull-up control register
    volatile uint32_t PWR_PDCRA; // PWR port A pull-down control register
    volatile uint32_t PWR_PUCRB; // PWR port B pull-up control register
    volatile uint32_t PWR_PDCRB; // PWR port B pull-down control register
    volatile uint32_t PWR_PUCRC; // PWR port C pull-up control register
    volatile uint32_t PWR_PDCRC; // PWR port C pull-down control register
    volatile uint32_t PWR_PUCRD; // PWR port D pull-up control register
    volatile uint32_t PWR_PDCRD; // PWR port D pull-down control register
    volatile uint32_t PWR_PUCRE; // PWR port E pull-up control register
    volatile uint32_t PWR_PDCRE; // PWR port E pull-down control register
    volatile uint32_t PWR_PUCRF; // PWR port F pull-up control register
    volatile uint32_t PWR_PDCRF; // PWR port F pull-down control register
    volatile uint32_t PWR_PUCRG; // PWR port G pull-up control register
    volatile uint32_t PWR_PDCRG; // PWR port G pull-down control register
    volatile uint32_t PWR_PUCRH; // PWR port H pull-up control register
    volatile uint32_t PWR_PDCRH; // PWR port H pull-down control register
    volatile uint32_t PWR_PUCRI; // PWR port I pull-up control register
    volatile uint32_t PWR_PDCRI; // PWR port I pull-down control register

    static constexpr uint32_t PWR_CR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> PWR_CR1_LPMS; // Low-power mode selection These bits select the low-power mode entered when the CPU enters the Deepsleep mode. 10x: Standby mode (Standby mode also entered if LPMS=11X in PWR_CR1 with BREN=1 in PWR_BDCR1) 11x: Shutdown mode if BREN = 0 in PWR_BDCR1
    static constexpr uint32_t PWR_CR1_RRSB1 = 0x20; // SRAM2 page 1 retention in Stop 3 and Standby modes This bit is used to keep the SRAM2 page 1 content in Stop 3 and Standby modes. The SRAM2 page 1 corresponds to the first 8 Kbytes of the SRAM2 (from SRAM2 base address to SRAM2 base address + 0x1FFF). Note: This bit has no effect in Shutdown mode.
    static constexpr uint32_t PWR_CR1_RRSB2 = 0x40; // SRAM2 page 2 retention in Stop 3 and Standby modes This bit is used to keep the SRAM2 page 2 content in Stop 3 and Standby modes. The SRAM2 page 2 corresponds to the last 56 Kbytes of the SRAM2 (from SRAM2 base address + 0x2000 to SRAM2 base address + 0xFFFF). Note: This bit has no effect in Shutdown mode.
    static constexpr uint32_t PWR_CR1_ULPMEN = 0x80; // BOR ultra-low power mode This bit is used to reduce the consumption by configuring the BOR in discontinuous mode. This bit must be set to reach the lowest power consumption in the low-power modes.
    static constexpr uint32_t PWR_CR1_SRAM1PD = 0x100; // SRAM1 power down This bit is used to reduce the consumption by powering off the SRAM1.
    static constexpr uint32_t PWR_CR1_SRAM2PD = 0x200; // SRAM2 power down This bit is used to reduce the consumption by powering off the SRAM2.
    static constexpr uint32_t PWR_CR1_SRAM3PD = 0x400; // SRAM3 power down This bit is used to reduce the consumption by powering off the SRAM3.
    static constexpr uint32_t PWR_CR1_SRAM4PD = 0x800; // SRAM4 power down This bit is used to reduce the consumption by powering off the SRAM4.

    static constexpr uint32_t PWR_CR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PWR_CR2_SRAM1PDS1 = 0x1; // SRAM1 page 1 (64 Kbytes) power-down in Stop modes (Stop 0, 1, 2, 3)
    static constexpr uint32_t PWR_CR2_SRAM1PDS2 = 0x2; // SRAM1 page 2 (64 Kbytes) power-down in Stop modes (Stop 0, 1, 2, 3)
    static constexpr uint32_t PWR_CR2_SRAM1PDS3 = 0x4; // SRAM1 page 3 (64 Kbytes) power-down in Stop modes (Stop 0, 1, 2, 3)
    static constexpr uint32_t PWR_CR2_SRAM2PDS1 = 0x10; // SRAM2 page 1 (8 Kbytes) power-down in Stop modes (Stop 0, 1, 2) Note: The SRAM2 page 1 retention in Stop 3 is controlled by RRSB1 bit in PWR_CR1.
    static constexpr uint32_t PWR_CR2_SRAM2PDS2 = 0x20; // SRAM2 page 2 (56 Kbytes) power-down in Stop modes (Stop 0, 1, 2) Note: The SRAM2 page 2 retention in Stop 3 is controlled by RRSB2 bit in PWR_CR1.
    static constexpr uint32_t PWR_CR2_SRAM4PDS = 0x40; // SRAM4 power-down in Stop modes (Stop 0, 1, 2, 3)
    static constexpr uint32_t PWR_CR2_ICRAMPDS = 0x100; // ICACHE SRAM power-down in Stop modes (Stop 0, 1, 2, 3)
    static constexpr uint32_t PWR_CR2_DC1RAMPDS = 0x200; // DCACHE1 SRAM power-down in Stop modes (Stop 0, 1, 2, 3)
    static constexpr uint32_t PWR_CR2_DMA2DRAMPDS = 0x400; // DMA2D SRAM power-down in Stop modes (Stop 0, 1, 2, 3)
    static constexpr uint32_t PWR_CR2_PRAMPDS = 0x800; // FMAC, FDCAN and USB peripherals SRAM power-down in Stop modes (Stop0,1,2,3)
    static constexpr uint32_t PWR_CR2_PKARAMPDS = 0x1000; // PKA SRAM power-down
    static constexpr uint32_t PWR_CR2_SRAM4FWU = 0x2000; // SRAM4 fast wakeup from Stop 0, Stop 1 and Stop 2 modes This bit is used to obtain the best trade-off between low-power consumption and wakeup time. SRAM4 wakeup time increases the wakeup time when exiting Stop 0, 1 and 2 modes, and also increases the LPDMA access time to SRAM4 during Stop modes.
    static constexpr uint32_t PWR_CR2_FLASHFWU = 0x4000; // Flash memory fast wakeup from Stop 0 and Stop 1 modes This bit is used to obtain the best trade-off between low-power consumption and wakeup time when exiting the Stop 0 or Stop 1 modes. When this bit is set, the Flash memory remains in normal mode in Stop 0 and Stop 1 modes, which offers a faster startup time with higher consumption.
    static constexpr uint32_t PWR_CR2_SRAM3PDS1 = 0x10000; // SRAM3 page 1 (64 Kbytes) power-down in Stop modes (Stop 0, 1, 2, 3)
    static constexpr uint32_t PWR_CR2_SRAM3PDS2 = 0x20000; // SRAM3 page 2 (64 Kbytes) power-down in Stop modes (Stop 0, 1, 2, 3)
    static constexpr uint32_t PWR_CR2_SRAM3PDS3 = 0x40000; // SRAM3 page 3 (64 Kbytes) power-down in Stop modes (Stop 0, 1, 2, 3)
    static constexpr uint32_t PWR_CR2_SRAM3PDS4 = 0x80000; // SRAM3 page 4 (64 Kbytes) power-down in Stop modes (Stop 0, 1, 2, 3)
    static constexpr uint32_t PWR_CR2_SRAM3PDS5 = 0x100000; // SRAM3 page 5 (64 Kbytes) power-down in Stop modes (Stop 0, 1, 2, 3)
    static constexpr uint32_t PWR_CR2_SRAM3PDS6 = 0x200000; // SRAM3 page 6 (64 Kbytes) power-down in Stop modes (Stop 0, 1, 2, 3)
    static constexpr uint32_t PWR_CR2_SRAM3PDS7 = 0x400000; // SRAM3 page 7 (64 Kbytes) power-down in Stop modes (Stop 0, 1, 2, 3)
    static constexpr uint32_t PWR_CR2_SRAM3PDS8 = 0x800000; // SRAM3 page 8 (64 Kbytes) power-down in Stop modes (Stop 0, 1, 2, 3)
    static constexpr uint32_t PWR_CR2_SRDRUN = 0x80000000; // SmartRun domain in Run mode

    static constexpr uint32_t PWR_CR3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PWR_CR3_REGSEL = 0x2; // Regulator selection Note: REGSEL is reserved and must be kept at reset value in packages without SMPS.
    static constexpr uint32_t PWR_CR3_FSTEN = 0x4; // Fast soft start

    static constexpr uint32_t PWR_VOSR_RESET_VALUE = 0x8000; // Reset value
    static constexpr uint32_t PWR_VOSR_BOOSTRDY = 0x4000; // EPOD booster ready This bit is set to 1 by hardware when the power booster startup time is reached. The system clock frequency can be switched higher than 50 MHz only after this bit is set.
    static constexpr uint32_t PWR_VOSR_VOSRDY = 0x8000; // Ready bit for VCORE voltage scaling output selection
    typedef bit_field_t<16, 0x3> PWR_VOSR_VOS; // Voltage scaling range selection This field is protected against non-secure access when SYSCLKSEC=1 in RCC_SECCFGR. It is protected against unprivileged access when SYSCLKSEC=1 in RCC_SECCFGR and SPRIV=1 in PWR_PRIVCFGR, or when SYSCLKSEC=0 and NSPRIV=1.
    static constexpr uint32_t PWR_VOSR_BOOSTEN = 0x40000; // EPOD booster enable

    static constexpr uint32_t PWR_SVMCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PWR_SVMCR_PVDE = 0x10; // Power voltage detector enable
    typedef bit_field_t<5, 0x7> PWR_SVMCR_PVDLS; // Power voltage detector level selection These bits select the voltage threshold detected by the power voltage detector:
    static constexpr uint32_t PWR_SVMCR_UVMEN = 0x1000000; // VDDUSB independent USB voltage monitor enable
    static constexpr uint32_t PWR_SVMCR_IO2VMEN = 0x2000000; // VDDIO2 independent I/Os voltage monitor enable
    static constexpr uint32_t PWR_SVMCR_AVM1EN = 0x4000000; // VDDA independent analog supply voltage monitor 1 enable (1.6V threshold)
    static constexpr uint32_t PWR_SVMCR_AVM2EN = 0x8000000; // VDDA independent analog supply voltage monitor 2 enable (1.8V threshold)
    static constexpr uint32_t PWR_SVMCR_USV = 0x10000000; // VDDUSB independent USB supply valid
    static constexpr uint32_t PWR_SVMCR_IO2SV = 0x20000000; // VDDIO2 independent I/Os supply valid This bit is used to validate the VDDIO2 supply for electrical and logical isolation purpose. Setting this bit is mandatory to use PG[15:2]. If VDDIO2 is not always present in the application, the VDDIO2 voltage monitor can be used to determine whether this supply is ready or not.
    static constexpr uint32_t PWR_SVMCR_ASV = 0x40000000; // VDDA independent analog supply valid

    static constexpr uint32_t PWR_WUCR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PWR_WUCR1_WUPEN1 = 0x1; // Wakeup pin WKUP1 enable
    static constexpr uint32_t PWR_WUCR1_WUPEN2 = 0x2; // Wakeup pin WKUP2 enable
    static constexpr uint32_t PWR_WUCR1_WUPEN3 = 0x4; // Wakeup pin WKUP3 enable
    static constexpr uint32_t PWR_WUCR1_WUPEN4 = 0x8; // Wakeup pin WKUP4 enable
    static constexpr uint32_t PWR_WUCR1_WUPEN5 = 0x10; // Wakeup pin WKUP5 enable
    static constexpr uint32_t PWR_WUCR1_WUPEN6 = 0x20; // Wakeup pin WKUP6 enable
    static constexpr uint32_t PWR_WUCR1_WUPEN7 = 0x40; // Wakeup pin WKUP7 enable
    static constexpr uint32_t PWR_WUCR1_WUPEN8 = 0x80; // Wakeup pin WKUP8 enable

    static constexpr uint32_t PWR_WUCR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PWR_WUCR2_WUPP1 = 0x1; // Wakeup pin WKUP1 polarity. This bit must be configured when WUPEN1 = 0.
    static constexpr uint32_t PWR_WUCR2_WUPP2 = 0x2; // Wakeup pin WKUP2 polarity This bit must be configured when WUPEN2 = 0.
    static constexpr uint32_t PWR_WUCR2_WUPP3 = 0x4; // Wakeup pin WKUP3 polarity This bit must be configured when WUPEN3 = 0.
    static constexpr uint32_t PWR_WUCR2_WUPP4 = 0x8; // Wakeup pin WKUP4 polarity This bit must be configured when WUPEN4 = 0.
    static constexpr uint32_t PWR_WUCR2_WUPP5 = 0x10; // Wakeup pin WKUP5 polarity This bit must be configured when WUPEN5 = 0.
    static constexpr uint32_t PWR_WUCR2_WUPP6 = 0x20; // Wakeup pin WKUP6 polarity This bit must be configured when WUPEN6 = 0.
    static constexpr uint32_t PWR_WUCR2_WUPP7 = 0x40; // Wakeup pin WKUP7 polarity This bit must be configured when WUPEN7 = 0.
    static constexpr uint32_t PWR_WUCR2_WUPP8 = 0x80; // Wakeup pin WKUP8 polarity This bit must be configured when WUPEN8=0.

    static constexpr uint32_t PWR_WUCR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> PWR_WUCR3_WUSEL1; // Wakeup pin WKUP1 selection This field must be configured when WUPEN1 = 0.
    typedef bit_field_t<2, 0x3> PWR_WUCR3_WUSEL2; // Wakeup pin WKUP2 selection This field must be configured when WUPEN2 = 0.
    typedef bit_field_t<4, 0x3> PWR_WUCR3_WUSEL3; // Wakeup pin WKUP3 selection This field must be configured when WUPEN3 = 0.
    typedef bit_field_t<6, 0x3> PWR_WUCR3_WUSEL4; // Wakeup pin WKUP4 selection This field must be configured when WUPEN4 = 0.
    typedef bit_field_t<8, 0x3> PWR_WUCR3_WUSEL5; // Wakeup pin WKUP5 selection This field must be configured when WUPEN5 = 0.
    typedef bit_field_t<10, 0x3> PWR_WUCR3_WUSEL6; // Wakeup pin WKUP6 selection This field must be configured when WUPEN6 = 0.
    typedef bit_field_t<12, 0x3> PWR_WUCR3_WUSEL7; // Wakeup pin WKUP7 selection This field must be configured when WUPEN7 = 0.
    typedef bit_field_t<14, 0x3> PWR_WUCR3_WUSEL8; // Wakeup pin WKUP8 selection This field must be configured when WUPEN8 = 0.

    static constexpr uint32_t PWR_BDCR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PWR_BDCR1_BREN = 0x1; // Backup RAM retention in Standby and VBAT modes When this bit is set, the backup RAM content is kept in Standby and VBAT modes. If BREN is reset, the backup RAM can still be used in Run, Sleep and Stop modes. However, its content is lost in Standby, Shutdown and VBAT modes. This bit can be written only when the regulator is LDO, which must be configured before switching to SMPS. Note: Backup RAM cannot be preserved in Shutdown mode.
    static constexpr uint32_t PWR_BDCR1_MONEN = 0x10; // Backup domain voltage and temperature monitoring enable

    static constexpr uint32_t PWR_BDCR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PWR_BDCR2_VBE = 0x1; // VBAT charging enable
    static constexpr uint32_t PWR_BDCR2_VBRS = 0x2; // VBAT charging resistor selection

    static constexpr uint32_t PWR_DBPR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PWR_DBPR_DBP = 0x1; // Disable Backup domain write protection In reset state, all registers and SRAM in Backup domain are protected against parasitic write access. This bit must be set to enable the write access to these registers.

    static constexpr uint32_t PWR_UCPDR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PWR_UCPDR_UCPD_DBDIS = 0x1; // UCPD dead battery disable After exiting reset, the USB Type-C dead battery behavior is enabled, which may have a pull-down effect on CC1 and CC2 pins. It is recommended to disable it in all cases, either to stop this pull-down or to handover control to the UCPD (the UCPD must be initialized before doing the disable).
    static constexpr uint32_t PWR_UCPDR_UCPD_STBY = 0x2; // UCPD Standby mode When set, this bit is used to memorize the UCPD configuration in Standby mode. This bit must be written to 1 just before entering Standby mode when using UCPD. It must be written to 0 after exiting the Standby mode and before writing any UCPD registers.

    static constexpr uint32_t PWR_SECCFGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PWR_SECCFGR_WUP1SEC = 0x1; // WUP1 secure protection
    static constexpr uint32_t PWR_SECCFGR_WUP2SEC = 0x2; // WUP2 secure protection
    static constexpr uint32_t PWR_SECCFGR_WUP3SEC = 0x4; // WUP3 secure protection
    static constexpr uint32_t PWR_SECCFGR_WUP4SEC = 0x8; // WUP4 secure protection
    static constexpr uint32_t PWR_SECCFGR_WUP5SEC = 0x10; // WUP5 secure protection
    static constexpr uint32_t PWR_SECCFGR_WUP6SEC = 0x20; // WUP6 secure protection
    static constexpr uint32_t PWR_SECCFGR_WUP7SEC = 0x40; // WUP7 secure protection
    static constexpr uint32_t PWR_SECCFGR_WUP8SEC = 0x80; // WUP8 secure protection
    static constexpr uint32_t PWR_SECCFGR_LPMSEC = 0x1000; // Low-power modes secure protection
    static constexpr uint32_t PWR_SECCFGR_VDMSEC = 0x2000; // Voltage detection and monitoring secure protection
    static constexpr uint32_t PWR_SECCFGR_VBSEC = 0x4000; // Backup domain secure protection
    static constexpr uint32_t PWR_SECCFGR_APCSEC = 0x8000; // Pull-up/pull-down secure protection

    static constexpr uint32_t PWR_PRIVCFGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PWR_PRIVCFGR_SPRIV = 0x1; // PWR secure functions privilege configuration This bit is set and reset by software. It can be written only by a secure privileged access.
    static constexpr uint32_t PWR_PRIVCFGR_NSPRIV = 0x2; // PWR non-secure functions privilege configuration This bit is set and reset by software. It can be written only by privileged access, secure or non-secure.

    static constexpr uint32_t PWR_SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PWR_SR_CSSF = 0x1; // Clear Stop and Standby flags This bit is protected against non-secure access when LPMSEC=1 in PWR_SECCFGR. This bit is protected against unprivileged access when LPMSEC=1 and SPRIV=1 in PWR_PRIVCFGR, or when LPMSEC=0 and NSPRIV=1. Writing 1 to this bit clears the STOPF and SBF flags.
    static constexpr uint32_t PWR_SR_STOPF = 0x2; // Stop flag This bit is set by hardware when the device enters a Stop mode, and is cleared by software by writing 1 to the CSSF bit.
    static constexpr uint32_t PWR_SR_SBF = 0x4; // Standby flag This bit is set by hardware when the device enters the Standby mode, and is cleared by writing 1 to the CSSF bit, or by a power-on reset. It is not cleared by the system reset.


    static constexpr uint32_t PWR_BDSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PWR_BDSR_VBATH = 0x2; // Backup domain voltage level monitoring versus high threshold
    static constexpr uint32_t PWR_BDSR_TEMPL = 0x4; // Temperature level monitoring versus low threshold
    static constexpr uint32_t PWR_BDSR_TEMPH = 0x8; // Temperature level monitoring versus high threshold

    static constexpr uint32_t PWR_WUSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PWR_WUSR_WUF1 = 0x1; // Wakeup flag 1 This bit is set when a wakeup event is detected on WKUP1 pin. This bit is cleared by writing 1 in the CWUF1 bit of PWR_WUSCR when WUSEL 11, or by hardware when WUPEN1=0.
    static constexpr uint32_t PWR_WUSR_WUF2 = 0x2; // Wakeup flag 2 This bit is set when a wakeup event is detected on WKUP2 pin. This bit is cleared by writing 1 in the CWUF2 bit of PWR_WUSCR when WUSEL 11, or by hardware when WUPEN2=0.
    static constexpr uint32_t PWR_WUSR_WUF3 = 0x4; // Wakeup flag 3 This bit is set when a wakeup event is detected on WKUP3 pin. This bit is cleared by writing 1 in the CWUF3 bit of PWR_WUSCR when WUSEL 11, or by hardware when WUPEN3=0.
    static constexpr uint32_t PWR_WUSR_WUF4 = 0x8; // Wakeup flag 4 This bit is set when a wakeup event is detected on WKUP4 pin. This bit is cleared by writing 1 in the CWUF4 bit of PWR_WUSCR when WUSEL 11, or by hardware when WUPEN4=0.
    static constexpr uint32_t PWR_WUSR_WUF5 = 0x10; // Wakeup flag 5 This bit is set when a wakeup event is detected on WKUP5 pin. This bit is cleared by writing 1 in the CWUF5 bit of PWR_WUSCR when WUSEL 11, or by hardware when WUPEN5=0.
    static constexpr uint32_t PWR_WUSR_WUF6 = 0x20; // Wakeup flag 6 This bit is set when a wakeup event is detected on WKUP6 pin. This bit is cleared by writing 1 in the CWUF6 bit of PWR_WUSCR when WUSEL 11, or by hardware when WUPEN6=0. If WUSEL=11, this bit is cleared by hardware when all internal wakeup source are cleared.
    static constexpr uint32_t PWR_WUSR_WUF7 = 0x40; // Wakeup flag 7 This bit is set when a wakeup event is detected on WKUP7 pin. This bit is cleared by writing 1 in the CWUF7 bit of PWR_WUSCR when WUSEL 11, or by hardware when WUPEN7=0. If WUSEL=11, this bit is cleared by hardware when all internal wakeup source are cleared.
    static constexpr uint32_t PWR_WUSR_WUF8 = 0x80; // Wakeup flag 8 This bit is set when a wakeup event is detected on WKUP8 pin. This bit is cleared by writing 1 in the CWUF8 bit of PWR_WUSCR when WUSEL 11, or by hardware when WUPEN8=0. If WUSEL=11, this bit is cleared by hardware when all internal wakeup source are cleared.

    static constexpr uint32_t PWR_WUSCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PWR_WUSCR_CWUF1 = 0x1; // Wakeup flag 1 Writing 1 to this bit clears the WUF1 flag in PWR_WUSR.
    static constexpr uint32_t PWR_WUSCR_CWUF2 = 0x2; // Wakeup flag 2 Writing 1 to this bit clears the WUF2 flag in PWR_WUSR.
    static constexpr uint32_t PWR_WUSCR_CWUF3 = 0x4; // Wakeup flag 3 Writing 1 to this bit clears the WUF3 flag in PWR_WUSR.
    static constexpr uint32_t PWR_WUSCR_CWUF4 = 0x8; // Wakeup flag 4 Writing 1 to this bit clears the WUF4 flag in PWR_WUSR.
    static constexpr uint32_t PWR_WUSCR_CWUF5 = 0x10; // Wakeup flag 5 Writing 1 to this bit clears the WUF5 flag in PWR_WUSR.
    static constexpr uint32_t PWR_WUSCR_CWUF6 = 0x20; // Wakeup flag 6 Writing 1 to this bit clears the WUF6 flag in PWR_WUSR.
    static constexpr uint32_t PWR_WUSCR_CWUF7 = 0x40; // Wakeup flag 7 Writing 1 to this bit clears the WUF7 flag in PWR_WUSR.
    static constexpr uint32_t PWR_WUSCR_CWUF8 = 0x80; // Wakeup flag 8 Writing 1 to this bit clears the WUF8 flag in PWR_WUSR.

    static constexpr uint32_t PWR_APCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PWR_APCR_APC = 0x1; // Apply pull-up and pull-down configuration When this bit is set, the I/O pull-up and pull-down configurations defined in PWR_PUCRx and PWR_PDCRx are applied. When this bit is cleared, PWR_PUCRx and PWR_PDCRx are not applied to the I/Os.

    static constexpr uint32_t PWR_PUCRA_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PWR_PUCRA_PU0 = 0x1; // Port A pull-up bit
    static constexpr uint32_t PWR_PUCRA_PU1 = 0x2; // Port A pull-up bit
    static constexpr uint32_t PWR_PUCRA_PU2 = 0x4; // Port A pull-up bit
    static constexpr uint32_t PWR_PUCRA_PU3 = 0x8; // Port A pull-up bit
    static constexpr uint32_t PWR_PUCRA_PU4 = 0x10; // Port A pull-up bit
    static constexpr uint32_t PWR_PUCRA_PU5 = 0x20; // Port A pull-up bit
    static constexpr uint32_t PWR_PUCRA_PU6 = 0x40; // Port A pull-up bit
    static constexpr uint32_t PWR_PUCRA_PU7 = 0x80; // Port A pull-up bit
    static constexpr uint32_t PWR_PUCRA_PU8 = 0x100; // Port A pull-up bit
    static constexpr uint32_t PWR_PUCRA_PU9 = 0x200; // Port A pull-up bit
    static constexpr uint32_t PWR_PUCRA_PU10 = 0x400; // Port A pull-up bit
    static constexpr uint32_t PWR_PUCRA_PU11 = 0x800; // Port A pull-up bit
    static constexpr uint32_t PWR_PUCRA_PU12 = 0x1000; // Port A pull-up bit
    static constexpr uint32_t PWR_PUCRA_PU13 = 0x2000; // Port A pull-up bit
    static constexpr uint32_t PWR_PUCRA_PU15 = 0x8000; // Port A pull-up bit 15 When set, this bit activates the pull-up on PA15 when the APC bit is set in PWR_APCR. The pull-up is not activated if the corresponding PD15 bit is also set.

    static constexpr uint32_t PWR_PDCRA_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PWR_PDCRA_PD0 = 0x1; // Port A pull-down bit
    static constexpr uint32_t PWR_PDCRA_PD1 = 0x2; // Port A pull-down bit
    static constexpr uint32_t PWR_PDCRA_PD2 = 0x4; // Port A pull-down bit
    static constexpr uint32_t PWR_PDCRA_PD3 = 0x8; // Port A pull-down bit
    static constexpr uint32_t PWR_PDCRA_PD4 = 0x10; // Port A pull-down bit
    static constexpr uint32_t PWR_PDCRA_PD5 = 0x20; // Port A pull-down bit
    static constexpr uint32_t PWR_PDCRA_PD6 = 0x40; // Port A pull-down bit
    static constexpr uint32_t PWR_PDCRA_PD7 = 0x80; // Port A pull-down bit
    static constexpr uint32_t PWR_PDCRA_PD8 = 0x100; // Port A pull-down bit
    static constexpr uint32_t PWR_PDCRA_PD9 = 0x200; // Port A pull-down bit
    static constexpr uint32_t PWR_PDCRA_PD10 = 0x400; // Port A pull-down bit
    static constexpr uint32_t PWR_PDCRA_PD11 = 0x800; // Port A pull-down bit
    static constexpr uint32_t PWR_PDCRA_PD12 = 0x1000; // Port A pull-down bit
    static constexpr uint32_t PWR_PDCRA_PD14 = 0x4000; // Port A pull-down bit

    static constexpr uint32_t PWR_PUCRB_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PWR_PUCRB_PU0 = 0x1; // Port B pull-up bit
    static constexpr uint32_t PWR_PUCRB_PU1 = 0x2; // Port B pull-up bit
    static constexpr uint32_t PWR_PUCRB_PU2 = 0x4; // Port B pull-up bit
    static constexpr uint32_t PWR_PUCRB_PU3 = 0x8; // Port B pull-up bit
    static constexpr uint32_t PWR_PUCRB_PU4 = 0x10; // Port B pull-up bit
    static constexpr uint32_t PWR_PUCRB_PU5 = 0x20; // Port B pull-up bit
    static constexpr uint32_t PWR_PUCRB_PU6 = 0x40; // Port B pull-up bit
    static constexpr uint32_t PWR_PUCRB_PU7 = 0x80; // Port B pull-up bit
    static constexpr uint32_t PWR_PUCRB_PU8 = 0x100; // Port B pull-up bit
    static constexpr uint32_t PWR_PUCRB_PU9 = 0x200; // Port B pull-up bit
    static constexpr uint32_t PWR_PUCRB_PU10 = 0x400; // Port B pull-up bit
    static constexpr uint32_t PWR_PUCRB_PU11 = 0x800; // Port B pull-up bit
    static constexpr uint32_t PWR_PUCRB_PU12 = 0x1000; // Port B pull-up bit
    static constexpr uint32_t PWR_PUCRB_PU13 = 0x2000; // Port B pull-up bit
    static constexpr uint32_t PWR_PUCRB_PU14 = 0x4000; // Port B pull-up bit
    static constexpr uint32_t PWR_PUCRB_PU15 = 0x8000; // Port B pull-up bit

    static constexpr uint32_t PWR_PDCRB_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PWR_PDCRB_PD0 = 0x1; // Port B pull-down bit
    static constexpr uint32_t PWR_PDCRB_PD1 = 0x2; // Port B pull-down bit
    static constexpr uint32_t PWR_PDCRB_PD2 = 0x4; // Port B pull-down bit
    static constexpr uint32_t PWR_PDCRB_PD3 = 0x8; // Port B pull-down bit
    static constexpr uint32_t PWR_PDCRB_PD5 = 0x20; // Port B pull-down bit
    static constexpr uint32_t PWR_PDCRB_PD6 = 0x40; // Port B pull-down bit
    static constexpr uint32_t PWR_PDCRB_PD7 = 0x80; // Port B pull-down bit
    static constexpr uint32_t PWR_PDCRB_PD8 = 0x100; // Port B pull-down bit
    static constexpr uint32_t PWR_PDCRB_PD9 = 0x200; // Port B pull-down bit
    static constexpr uint32_t PWR_PDCRB_PD10 = 0x400; // Port B pull-down bit
    static constexpr uint32_t PWR_PDCRB_PD11 = 0x800; // Port B pull-down bit
    static constexpr uint32_t PWR_PDCRB_PD12 = 0x1000; // Port B pull-down bit
    static constexpr uint32_t PWR_PDCRB_PD13 = 0x2000; // Port B pull-down bit
    static constexpr uint32_t PWR_PDCRB_PD14 = 0x4000; // Port B pull-down bit
    static constexpr uint32_t PWR_PDCRB_PD15 = 0x8000; // Port B pull-down bit

    static constexpr uint32_t PWR_PUCRC_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PWR_PUCRC_PU0 = 0x1; // Port C pull-up bit
    static constexpr uint32_t PWR_PUCRC_PU1 = 0x2; // Port C pull-up bit
    static constexpr uint32_t PWR_PUCRC_PU2 = 0x4; // Port C pull-up bit
    static constexpr uint32_t PWR_PUCRC_PU3 = 0x8; // Port C pull-up bit
    static constexpr uint32_t PWR_PUCRC_PU4 = 0x10; // Port C pull-up bit
    static constexpr uint32_t PWR_PUCRC_PU5 = 0x20; // Port C pull-up bit
    static constexpr uint32_t PWR_PUCRC_PU6 = 0x40; // Port C pull-up bit
    static constexpr uint32_t PWR_PUCRC_PU7 = 0x80; // Port C pull-up bit
    static constexpr uint32_t PWR_PUCRC_PU8 = 0x100; // Port C pull-up bit
    static constexpr uint32_t PWR_PUCRC_PU9 = 0x200; // Port C pull-up bit
    static constexpr uint32_t PWR_PUCRC_PU10 = 0x400; // Port C pull-up bit
    static constexpr uint32_t PWR_PUCRC_PU11 = 0x800; // Port C pull-up bit
    static constexpr uint32_t PWR_PUCRC_PU12 = 0x1000; // Port C pull-up bit
    static constexpr uint32_t PWR_PUCRC_PU13 = 0x2000; // Port C pull-up bit
    static constexpr uint32_t PWR_PUCRC_PU14 = 0x4000; // Port C pull-up bit
    static constexpr uint32_t PWR_PUCRC_PU15 = 0x8000; // Port C pull-up bit

    static constexpr uint32_t PWR_PDCRC_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PWR_PDCRC_PD0 = 0x1; // Port C pull-down bit
    static constexpr uint32_t PWR_PDCRC_PD1 = 0x2; // Port C pull-down bit
    static constexpr uint32_t PWR_PDCRC_PD2 = 0x4; // Port C pull-down bit
    static constexpr uint32_t PWR_PDCRC_PD3 = 0x8; // Port C pull-down bit
    static constexpr uint32_t PWR_PDCRC_PD4 = 0x10; // Port C pull-down bit
    static constexpr uint32_t PWR_PDCRC_PD5 = 0x20; // Port C pull-down bit
    static constexpr uint32_t PWR_PDCRC_PD6 = 0x40; // Port C pull-down bit
    static constexpr uint32_t PWR_PDCRC_PD7 = 0x80; // Port C pull-down bit
    static constexpr uint32_t PWR_PDCRC_PD8 = 0x100; // Port C pull-down bit
    static constexpr uint32_t PWR_PDCRC_PD9 = 0x200; // Port C pull-down bit
    static constexpr uint32_t PWR_PDCRC_PD10 = 0x400; // Port C pull-down bit
    static constexpr uint32_t PWR_PDCRC_PD11 = 0x800; // Port C pull-down bit
    static constexpr uint32_t PWR_PDCRC_PD12 = 0x1000; // Port C pull-down bit
    static constexpr uint32_t PWR_PDCRC_PD13 = 0x2000; // Port C pull-down bit
    static constexpr uint32_t PWR_PDCRC_PD14 = 0x4000; // Port C pull-down bit
    static constexpr uint32_t PWR_PDCRC_PD15 = 0x8000; // Port C pull-down bit

    static constexpr uint32_t PWR_PUCRD_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PWR_PUCRD_PU0 = 0x1; // Port D pull-up bit
    static constexpr uint32_t PWR_PUCRD_PU1 = 0x2; // Port D pull-up bit
    static constexpr uint32_t PWR_PUCRD_PU2 = 0x4; // Port D pull-up bit
    static constexpr uint32_t PWR_PUCRD_PU3 = 0x8; // Port D pull-up bit
    static constexpr uint32_t PWR_PUCRD_PU4 = 0x10; // Port D pull-up bit
    static constexpr uint32_t PWR_PUCRD_PU5 = 0x20; // Port D pull-up bit
    static constexpr uint32_t PWR_PUCRD_PU6 = 0x40; // Port D pull-up bit
    static constexpr uint32_t PWR_PUCRD_PU7 = 0x80; // Port D pull-up bit
    static constexpr uint32_t PWR_PUCRD_PU8 = 0x100; // Port D pull-up bit
    static constexpr uint32_t PWR_PUCRD_PU9 = 0x200; // Port D pull-up bit
    static constexpr uint32_t PWR_PUCRD_PU10 = 0x400; // Port D pull-up bit
    static constexpr uint32_t PWR_PUCRD_PU11 = 0x800; // Port D pull-up bit
    static constexpr uint32_t PWR_PUCRD_PU12 = 0x1000; // Port D pull-up bit
    static constexpr uint32_t PWR_PUCRD_PU13 = 0x2000; // Port D pull-up bit
    static constexpr uint32_t PWR_PUCRD_PU14 = 0x4000; // Port D pull-up bit
    static constexpr uint32_t PWR_PUCRD_PU15 = 0x8000; // Port D pull-up bit

    static constexpr uint32_t PWR_PDCRD_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PWR_PDCRD_PD0 = 0x1; // Port D pull-down bit
    static constexpr uint32_t PWR_PDCRD_PD1 = 0x2; // Port D pull-down bit
    static constexpr uint32_t PWR_PDCRD_PD2 = 0x4; // Port D pull-down bit
    static constexpr uint32_t PWR_PDCRD_PD3 = 0x8; // Port D pull-down bit
    static constexpr uint32_t PWR_PDCRD_PD4 = 0x10; // Port D pull-down bit
    static constexpr uint32_t PWR_PDCRD_PD5 = 0x20; // Port D pull-down bit
    static constexpr uint32_t PWR_PDCRD_PD6 = 0x40; // Port D pull-down bit
    static constexpr uint32_t PWR_PDCRD_PD7 = 0x80; // Port D pull-down bit
    static constexpr uint32_t PWR_PDCRD_PD8 = 0x100; // Port D pull-down bit
    static constexpr uint32_t PWR_PDCRD_PD9 = 0x200; // Port D pull-down bit
    static constexpr uint32_t PWR_PDCRD_PD10 = 0x400; // Port D pull-down bit
    static constexpr uint32_t PWR_PDCRD_PD11 = 0x800; // Port D pull-down bit
    static constexpr uint32_t PWR_PDCRD_PD12 = 0x1000; // Port D pull-down bit
    static constexpr uint32_t PWR_PDCRD_PD13 = 0x2000; // Port D pull-down bit
    static constexpr uint32_t PWR_PDCRD_PD14 = 0x4000; // Port D pull-down bit
    static constexpr uint32_t PWR_PDCRD_PD15 = 0x8000; // Port D pull-down bit

    static constexpr uint32_t PWR_PUCRE_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PWR_PUCRE_PU0 = 0x1; // Port E pull-up bit
    static constexpr uint32_t PWR_PUCRE_PU1 = 0x2; // Port E pull-up bit
    static constexpr uint32_t PWR_PUCRE_PU2 = 0x4; // Port E pull-up bit
    static constexpr uint32_t PWR_PUCRE_PU3 = 0x8; // Port E pull-up bit
    static constexpr uint32_t PWR_PUCRE_PU4 = 0x10; // Port E pull-up bit
    static constexpr uint32_t PWR_PUCRE_PU5 = 0x20; // Port E pull-up bit
    static constexpr uint32_t PWR_PUCRE_PU6 = 0x40; // Port E pull-up bit
    static constexpr uint32_t PWR_PUCRE_PU7 = 0x80; // Port E pull-up bit
    static constexpr uint32_t PWR_PUCRE_PU8 = 0x100; // Port E pull-up bit
    static constexpr uint32_t PWR_PUCRE_PU9 = 0x200; // Port E pull-up bit
    static constexpr uint32_t PWR_PUCRE_PU10 = 0x400; // Port E pull-up bit
    static constexpr uint32_t PWR_PUCRE_PU11 = 0x800; // Port E pull-up bit
    static constexpr uint32_t PWR_PUCRE_PU12 = 0x1000; // Port E pull-up bit
    static constexpr uint32_t PWR_PUCRE_PU13 = 0x2000; // Port E pull-up bit
    static constexpr uint32_t PWR_PUCRE_PU14 = 0x4000; // Port E pull-up bit
    static constexpr uint32_t PWR_PUCRE_PU15 = 0x8000; // Port E pull-up bit

    static constexpr uint32_t PWR_PDCRE_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PWR_PDCRE_PD0 = 0x1; // Port E pull-down bit
    static constexpr uint32_t PWR_PDCRE_PD1 = 0x2; // Port E pull-down bit
    static constexpr uint32_t PWR_PDCRE_PD2 = 0x4; // Port E pull-down bit
    static constexpr uint32_t PWR_PDCRE_PD3 = 0x8; // Port E pull-down bit
    static constexpr uint32_t PWR_PDCRE_PD4 = 0x10; // Port E pull-down bit
    static constexpr uint32_t PWR_PDCRE_PD5 = 0x20; // Port E pull-down bit
    static constexpr uint32_t PWR_PDCRE_PD6 = 0x40; // Port E pull-down bit
    static constexpr uint32_t PWR_PDCRE_PD7 = 0x80; // Port E pull-down bit
    static constexpr uint32_t PWR_PDCRE_PD8 = 0x100; // Port E pull-down bit
    static constexpr uint32_t PWR_PDCRE_PD9 = 0x200; // Port E pull-down bit
    static constexpr uint32_t PWR_PDCRE_PD10 = 0x400; // Port E pull-down bit
    static constexpr uint32_t PWR_PDCRE_PD11 = 0x800; // Port E pull-down bit
    static constexpr uint32_t PWR_PDCRE_PD12 = 0x1000; // Port E pull-down bit
    static constexpr uint32_t PWR_PDCRE_PD13 = 0x2000; // Port E pull-down bit
    static constexpr uint32_t PWR_PDCRE_PD14 = 0x4000; // Port E pull-down bit
    static constexpr uint32_t PWR_PDCRE_PD15 = 0x8000; // Port E pull-down bit

    static constexpr uint32_t PWR_PUCRF_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PWR_PUCRF_PU0 = 0x1; // Port F pull-up bit
    static constexpr uint32_t PWR_PUCRF_PU1 = 0x2; // Port F pull-up bit
    static constexpr uint32_t PWR_PUCRF_PU2 = 0x4; // Port F pull-up bit
    static constexpr uint32_t PWR_PUCRF_PU3 = 0x8; // Port F pull-up bit
    static constexpr uint32_t PWR_PUCRF_PU4 = 0x10; // Port F pull-up bit
    static constexpr uint32_t PWR_PUCRF_PU5 = 0x20; // Port F pull-up bit
    static constexpr uint32_t PWR_PUCRF_PU6 = 0x40; // Port F pull-up bit
    static constexpr uint32_t PWR_PUCRF_PU7 = 0x80; // Port F pull-up bit
    static constexpr uint32_t PWR_PUCRF_PU8 = 0x100; // Port F pull-up bit
    static constexpr uint32_t PWR_PUCRF_PU9 = 0x200; // Port F pull-up bit
    static constexpr uint32_t PWR_PUCRF_PU10 = 0x400; // Port F pull-up bit
    static constexpr uint32_t PWR_PUCRF_PU11 = 0x800; // Port F pull-up bit
    static constexpr uint32_t PWR_PUCRF_PU12 = 0x1000; // Port F pull-up bit
    static constexpr uint32_t PWR_PUCRF_PU13 = 0x2000; // Port F pull-up bit
    static constexpr uint32_t PWR_PUCRF_PU14 = 0x4000; // Port F pull-up bit
    static constexpr uint32_t PWR_PUCRF_PU15 = 0x8000; // Port F pull-up bit

    static constexpr uint32_t PWR_PDCRF_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PWR_PDCRF_PD0 = 0x1; // Port F pull-down bit
    static constexpr uint32_t PWR_PDCRF_PD1 = 0x2; // Port F pull-down bit
    static constexpr uint32_t PWR_PDCRF_PD2 = 0x4; // Port F pull-down bit
    static constexpr uint32_t PWR_PDCRF_PD3 = 0x8; // Port F pull-down bit
    static constexpr uint32_t PWR_PDCRF_PD4 = 0x10; // Port F pull-down bit
    static constexpr uint32_t PWR_PDCRF_PD5 = 0x20; // Port F pull-down bit
    static constexpr uint32_t PWR_PDCRF_PD6 = 0x40; // Port F pull-down bit
    static constexpr uint32_t PWR_PDCRF_PD7 = 0x80; // Port F pull-down bit
    static constexpr uint32_t PWR_PDCRF_PD8 = 0x100; // Port F pull-down bit
    static constexpr uint32_t PWR_PDCRF_PD9 = 0x200; // Port F pull-down bit
    static constexpr uint32_t PWR_PDCRF_PD10 = 0x400; // Port F pull-down bit
    static constexpr uint32_t PWR_PDCRF_PD11 = 0x800; // Port F pull-down bit
    static constexpr uint32_t PWR_PDCRF_PD12 = 0x1000; // Port F pull-down bit
    static constexpr uint32_t PWR_PDCRF_PD13 = 0x2000; // Port F pull-down bit
    static constexpr uint32_t PWR_PDCRF_PD14 = 0x4000; // Port F pull-down bit
    static constexpr uint32_t PWR_PDCRF_PD15 = 0x8000; // Port F pull-down bit

    static constexpr uint32_t PWR_PUCRG_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PWR_PUCRG_PU0 = 0x1; // Port G pull-up bit
    static constexpr uint32_t PWR_PUCRG_PU1 = 0x2; // Port G pull-up bit
    static constexpr uint32_t PWR_PUCRG_PU2 = 0x4; // Port G pull-up bit
    static constexpr uint32_t PWR_PUCRG_PU3 = 0x8; // Port G pull-up bit
    static constexpr uint32_t PWR_PUCRG_PU4 = 0x10; // Port G pull-up bit
    static constexpr uint32_t PWR_PUCRG_PU5 = 0x20; // Port G pull-up bit
    static constexpr uint32_t PWR_PUCRG_PU6 = 0x40; // Port G pull-up bit
    static constexpr uint32_t PWR_PUCRG_PU7 = 0x80; // Port G pull-up bit
    static constexpr uint32_t PWR_PUCRG_PU8 = 0x100; // Port G pull-up bit
    static constexpr uint32_t PWR_PUCRG_PU9 = 0x200; // Port G pull-up bit
    static constexpr uint32_t PWR_PUCRG_PU10 = 0x400; // Port G pull-up bit
    static constexpr uint32_t PWR_PUCRG_PU11 = 0x800; // Port G pull-up bit
    static constexpr uint32_t PWR_PUCRG_PU12 = 0x1000; // Port G pull-up bit
    static constexpr uint32_t PWR_PUCRG_PU13 = 0x2000; // Port G pull-up bit
    static constexpr uint32_t PWR_PUCRG_PU14 = 0x4000; // Port G pull-up bit
    static constexpr uint32_t PWR_PUCRG_PU15 = 0x8000; // Port G pull-up bit

    static constexpr uint32_t PWR_PDCRG_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PWR_PDCRG_PD0 = 0x1; // Port G pull-down bit
    static constexpr uint32_t PWR_PDCRG_PD1 = 0x2; // Port G pull-down bit
    static constexpr uint32_t PWR_PDCRG_PD2 = 0x4; // Port G pull-down bit
    static constexpr uint32_t PWR_PDCRG_PD3 = 0x8; // Port G pull-down bit
    static constexpr uint32_t PWR_PDCRG_PD4 = 0x10; // Port G pull-down bit
    static constexpr uint32_t PWR_PDCRG_PD5 = 0x20; // Port G pull-down bit
    static constexpr uint32_t PWR_PDCRG_PD6 = 0x40; // Port G pull-down bit
    static constexpr uint32_t PWR_PDCRG_PD7 = 0x80; // Port G pull-down bit
    static constexpr uint32_t PWR_PDCRG_PD8 = 0x100; // Port G pull-down bit
    static constexpr uint32_t PWR_PDCRG_PD9 = 0x200; // Port G pull-down bit
    static constexpr uint32_t PWR_PDCRG_PD10 = 0x400; // Port G pull-down bit
    static constexpr uint32_t PWR_PDCRG_PD11 = 0x800; // Port G pull-down bit
    static constexpr uint32_t PWR_PDCRG_PD12 = 0x1000; // Port G pull-down bit
    static constexpr uint32_t PWR_PDCRG_PD13 = 0x2000; // Port G pull-down bit
    static constexpr uint32_t PWR_PDCRG_PD14 = 0x4000; // Port G pull-down bit
    static constexpr uint32_t PWR_PDCRG_PD15 = 0x8000; // Port G pull-down bit

    static constexpr uint32_t PWR_PUCRH_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PWR_PUCRH_PU0 = 0x1; // Port H pull-up bit
    static constexpr uint32_t PWR_PUCRH_PU1 = 0x2; // Port H pull-up bit
    static constexpr uint32_t PWR_PUCRH_PU2 = 0x4; // Port H pull-up bit
    static constexpr uint32_t PWR_PUCRH_PU3 = 0x8; // Port H pull-up bit
    static constexpr uint32_t PWR_PUCRH_PU4 = 0x10; // Port H pull-up bit
    static constexpr uint32_t PWR_PUCRH_PU5 = 0x20; // Port H pull-up bit
    static constexpr uint32_t PWR_PUCRH_PU6 = 0x40; // Port H pull-up bit
    static constexpr uint32_t PWR_PUCRH_PU7 = 0x80; // Port H pull-up bit
    static constexpr uint32_t PWR_PUCRH_PU8 = 0x100; // Port H pull-up bit
    static constexpr uint32_t PWR_PUCRH_PU9 = 0x200; // Port H pull-up bit
    static constexpr uint32_t PWR_PUCRH_PU10 = 0x400; // Port H pull-up bit
    static constexpr uint32_t PWR_PUCRH_PU11 = 0x800; // Port H pull-up bit
    static constexpr uint32_t PWR_PUCRH_PU12 = 0x1000; // Port H pull-up bit
    static constexpr uint32_t PWR_PUCRH_PU13 = 0x2000; // Port H pull-up bit
    static constexpr uint32_t PWR_PUCRH_PU14 = 0x4000; // Port H pull-up bit
    static constexpr uint32_t PWR_PUCRH_PU15 = 0x8000; // Port H pull-up bit

    static constexpr uint32_t PWR_PDCRH_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PWR_PDCRH_PD0 = 0x1; // Port H pull-down bit
    static constexpr uint32_t PWR_PDCRH_PD1 = 0x2; // Port H pull-down bit
    static constexpr uint32_t PWR_PDCRH_PD2 = 0x4; // Port H pull-down bit
    static constexpr uint32_t PWR_PDCRH_PD3 = 0x8; // Port H pull-down bit
    static constexpr uint32_t PWR_PDCRH_PD4 = 0x10; // Port H pull-down bit
    static constexpr uint32_t PWR_PDCRH_PD5 = 0x20; // Port H pull-down bit
    static constexpr uint32_t PWR_PDCRH_PD6 = 0x40; // Port H pull-down bit
    static constexpr uint32_t PWR_PDCRH_PD7 = 0x80; // Port H pull-down bit
    static constexpr uint32_t PWR_PDCRH_PD8 = 0x100; // Port H pull-down bit
    static constexpr uint32_t PWR_PDCRH_PD9 = 0x200; // Port H pull-down bit
    static constexpr uint32_t PWR_PDCRH_PD10 = 0x400; // Port H pull-down bit
    static constexpr uint32_t PWR_PDCRH_PD11 = 0x800; // Port H pull-down bit
    static constexpr uint32_t PWR_PDCRH_PD12 = 0x1000; // Port H pull-down bit
    static constexpr uint32_t PWR_PDCRH_PD13 = 0x2000; // Port H pull-down bit
    static constexpr uint32_t PWR_PDCRH_PD14 = 0x4000; // Port H pull-down bit
    static constexpr uint32_t PWR_PDCRH_PD15 = 0x8000; // Port H pull-down bit

    static constexpr uint32_t PWR_PUCRI_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PWR_PUCRI_PU0 = 0x1; // Port I pull-up bit
    static constexpr uint32_t PWR_PUCRI_PU1 = 0x2; // Port I pull-up bit
    static constexpr uint32_t PWR_PUCRI_PU2 = 0x4; // Port I pull-up bit
    static constexpr uint32_t PWR_PUCRI_PU3 = 0x8; // Port I pull-up bit
    static constexpr uint32_t PWR_PUCRI_PU4 = 0x10; // Port I pull-up bit
    static constexpr uint32_t PWR_PUCRI_PU5 = 0x20; // Port I pull-up bit
    static constexpr uint32_t PWR_PUCRI_PU6 = 0x40; // Port I pull-up bit
    static constexpr uint32_t PWR_PUCRI_PU7 = 0x80; // Port I pull-up bit

    static constexpr uint32_t PWR_PDCRI_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PWR_PDCRI_PD0 = 0x1; // Port I pull-down bit
    static constexpr uint32_t PWR_PDCRI_PD1 = 0x2; // Port I pull-down bit
    static constexpr uint32_t PWR_PDCRI_PD2 = 0x4; // Port I pull-down bit
    static constexpr uint32_t PWR_PDCRI_PD3 = 0x8; // Port I pull-down bit
    static constexpr uint32_t PWR_PDCRI_PD4 = 0x10; // Port I pull-down bit
    static constexpr uint32_t PWR_PDCRI_PD5 = 0x20; // Port I pull-down bit
    static constexpr uint32_t PWR_PDCRI_PD6 = 0x40; // Port I pull-down bit
    static constexpr uint32_t PWR_PDCRI_PD7 = 0x80; // Port I pull-down bit
};

template<>
struct peripheral_t<STM32U5xx, PWR>
{
    static constexpr periph_t P = PWR;
    using T = stm32u5xx_pwr_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, SEC_PWR>
{
    static constexpr periph_t P = SEC_PWR;
    using T = stm32u5xx_pwr_t;
    static T& V;
};

using pwr_t = peripheral_t<svd, PWR>;
using sec_pwr_t = peripheral_t<svd, SEC_PWR>;

template<int INST> struct pwr_traits {};

template<> struct pwr_traits<0>
{
    using pwr = pwr_t;
    static constexpr signal_t CDSTOP = PWR_CDSTOP;
    static constexpr signal_t CSLEEP = PWR_CSLEEP;
    static constexpr signal_t SRDSTOP = PWR_SRDSTOP;
};
