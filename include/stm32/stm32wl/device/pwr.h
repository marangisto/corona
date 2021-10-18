#pragma once

////
//
//      STM32WL PWR peripherals
//
///

// PWR: Power control

struct stm32wl5x_cm0p_pwr_t
{
    volatile uint32_t CR1; // Power control register 1
    volatile uint32_t CR2; // Power control register 2
    volatile uint32_t CR3; // Power control register 3
    volatile uint32_t CR4; // Power control register 4
    volatile uint32_t SR1; // Power status register 1
    volatile uint32_t SR2; // Power status register 2
    volatile uint32_t SCR; // Power status clear register
    volatile uint32_t CR5; // Power control register 5
    volatile uint32_t PUCRA; // Power Port A pull-up control register
    volatile uint32_t PDCRA; // Power Port A pull-down control register
    volatile uint32_t PUCRB; // Power Port B pull-up control register
    volatile uint32_t PDCRB; // Power Port B pull-down control register
    volatile uint32_t PUCRC; // Power Port C pull-up control register
    volatile uint32_t PDCRC; // Power Port C pull-down control register
    reserved_t<0x8> _0x38;
    volatile uint32_t PUCRH; // Power Port H pull-up control register
    volatile uint32_t PDCRH; // Power Port H pull-down control register
    reserved_t<0x8> _0x60;
    volatile uint32_t C2CR1; // Power CPU2 control register 1 [dual core device only]
    volatile uint32_t C2CR3; // Power CPU2 control register 3 [dual core device only]
    volatile uint32_t EXTSCR; // Power extended status and status clear register
    volatile uint32_t SECCFGR; // Power security configuration register [dual core device only]
    volatile uint32_t SUBGHZSPICR; // Power SPI3 control register
    reserved_t<0x1> _0x94;
    volatile uint32_t RSSCMDR; // RSS Command register [dual core device only]

    static constexpr uint32_t CR1_RESET_VALUE = 0x200; // Reset value
    static constexpr uint32_t CR1_LPR = 0x4000; // Low-power run
    typedef bit_field_t<9, 0x3> CR1_VOS; // Voltage scaling range selection
    static constexpr uint32_t CR1_DBP = 0x100; // Disable backup domain write protection
    static constexpr uint32_t CR1_FPDS = 0x20; // Flash memory power down mode during LPSleep for CPU1
    static constexpr uint32_t CR1_FPDR = 0x10; // Flash memory power down mode during LPRun for CPU1
    static constexpr uint32_t CR1_SUBGHZSPINSSSEL = 0x8; // sub-GHz SPI NSS source select
    typedef bit_field_t<0, 0x7> CR1_LPMS; // Low-power mode selection for CPU1

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR2_PVME3 = 0x40; // Peripheral voltage monitoring 3 enable: VDDA vs. 1.62V
    typedef bit_field_t<1, 0x7> CR2_PLS; // Power voltage detector level selection.
    static constexpr uint32_t CR2_PVDE = 0x1; // Power voltage detector enable

    static constexpr uint32_t CR3_RESET_VALUE = 0x8000; // Reset value
    static constexpr uint32_t CR3_EIWUL = 0x8000; // Enable internal wakeup line for CPU1
    static constexpr uint32_t CR3_EC2H = 0x4000; // nable CPU2 Hold interrupt for CPU1
    static constexpr uint32_t CR3_EWRFIRQ = 0x2000; // akeup for CPU1
    static constexpr uint32_t CR3_EWRFBUSY = 0x800; // Enable Radio BUSY Wakeup from Standby for CPU1
    static constexpr uint32_t CR3_APC = 0x400; // Apply pull-up and pull-down configuration from CPU1
    static constexpr uint32_t CR3_RRS = 0x200; // SRAM2 retention in Standby mode
    static constexpr uint32_t CR3_EWPVD = 0x100; // Enable wakeup PVD for CPU1
    static constexpr uint32_t CR3_EULPEN = 0x80; // Ultra-low-power enable
    static constexpr uint32_t CR3_EWUP3 = 0x4; // Enable Wakeup pin WKUP3 for CPU1
    static constexpr uint32_t CR3_EWUP2 = 0x2; // Enable Wakeup pin WKUP2 for CPU1
    static constexpr uint32_t CR3_EWUP1 = 0x1; // Enable Wakeup pin WKUP1 for CPU1

    static constexpr uint32_t CR4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR4_C2BOOT = 0x8000; // oot CPU2 after reset or wakeup from Stop or Standby modes.
    static constexpr uint32_t CR4_WRFBUSYP = 0x800; // Wakeup Radio BUSY polarity
    static constexpr uint32_t CR4_VBRS = 0x200; // VBAT battery charging resistor selection
    static constexpr uint32_t CR4_VBE = 0x100; // VBAT battery charging enable
    static constexpr uint32_t CR4_WP3 = 0x4; // Wakeup pin WKUP3 polarity
    static constexpr uint32_t CR4_WP2 = 0x2; // Wakeup pin WKUP2 polarity
    static constexpr uint32_t CR4_WP1 = 0x1; // Wakeup pin WKUP1 polarity

    static constexpr uint32_t SR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR1_WUFI = 0x8000; // Internal wakeup interrupt flag
    static constexpr uint32_t SR1_C2HF = 0x4000; // PU2 Hold interrupt flag
    static constexpr uint32_t SR1_WRFBUSYF = 0x800; // Radio BUSY wakeup flag
    static constexpr uint32_t SR1_WPVDF = 0x100; // Wakeup PVD flag
    static constexpr uint32_t SR1_WUF3 = 0x4; // Wakeup flag 3
    static constexpr uint32_t SR1_WUF2 = 0x2; // Wakeup flag 2
    static constexpr uint32_t SR1_WUF1 = 0x1; // Wakeup flag 1

    static constexpr uint32_t SR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR2_PVMO3 = 0x4000; // Peripheral voltage monitoring output: VDDA vs. 1.62 V
    static constexpr uint32_t SR2_PVDO = 0x800; // Power voltage detector output
    static constexpr uint32_t SR2_VOSF = 0x400; // Voltage scaling flag
    static constexpr uint32_t SR2_REGLPF = 0x200; // regulator1 low power flag
    static constexpr uint32_t SR2_REGLPS = 0x100; // regulator1 started
    static constexpr uint32_t SR2_FLASHRDY = 0x80; // Flash ready
    static constexpr uint32_t SR2_REGMRS = 0x40; // regulator2 low power flag
    static constexpr uint32_t SR2_RFEOLF = 0x20; // Radio end of life flag
    static constexpr uint32_t SR2_LDORDY = 0x10; // LDO ready flag
    static constexpr uint32_t SR2_SMPSRDY = 0x8; // SMPS ready flag
    static constexpr uint32_t SR2_RFBUSYMS = 0x4; // Radio BUSY masked signal status
    static constexpr uint32_t SR2_RFBUSYS = 0x2; // Radio BUSY signal status
    static constexpr uint32_t SR2_C2BOOTS = 0x1; // PU2 boot/wakeup request source information

    static constexpr uint32_t SCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SCR_CC2HF = 0x4000; // lear CPU2 Hold interrupt flag
    static constexpr uint32_t SCR_CWRFBUSYF = 0x800; // Clear wakeup Radio BUSY flag
    static constexpr uint32_t SCR_CWPVDF = 0x100; // Clear wakeup PVD interrupt flag
    static constexpr uint32_t SCR_CWUF3 = 0x4; // Clear wakeup flag 3
    static constexpr uint32_t SCR_CWUF2 = 0x2; // Clear wakeup flag 2
    static constexpr uint32_t SCR_CWUF1 = 0x1; // Clear wakeup flag 1

    static constexpr uint32_t CR5_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR5_SMPSEN = 0x8000; // Enable SMPS Step Down converter SMPS mode enabled.
    static constexpr uint32_t CR5_RFEOLEN = 0x4000; // Enable Radio End Of Life detector enabled

    static constexpr uint32_t PUCRA_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PUCRA_PU15 = 0x8000; // Port PA15 pull-up
    static constexpr uint32_t PUCRA_PU14 = 0x4000; // PU14
    static constexpr uint32_t PUCRA_PU13 = 0x2000; // Port PA[y] pull-up bit y (y=0 to 13)
    static constexpr uint32_t PUCRA_PU12 = 0x1000; // PU12
    static constexpr uint32_t PUCRA_PU11 = 0x800; // PU11
    static constexpr uint32_t PUCRA_PU10 = 0x400; // PU10
    static constexpr uint32_t PUCRA_PU9 = 0x200; // PU9
    static constexpr uint32_t PUCRA_PU8 = 0x100; // PU8
    static constexpr uint32_t PUCRA_PU7 = 0x80; // PU7
    static constexpr uint32_t PUCRA_PU6 = 0x40; // PU6
    static constexpr uint32_t PUCRA_PU5 = 0x20; // PU5
    static constexpr uint32_t PUCRA_PU4 = 0x10; // PU4
    static constexpr uint32_t PUCRA_PU3 = 0x8; // PU3
    static constexpr uint32_t PUCRA_PU2 = 0x4; // PU2
    static constexpr uint32_t PUCRA_PU1 = 0x2; // PU1
    static constexpr uint32_t PUCRA_PU0 = 0x1; // PU0

    static constexpr uint32_t PDCRA_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PDCRA_PD15 = 0x8000; // PD15
    static constexpr uint32_t PDCRA_PD14 = 0x4000; // ull-down
    static constexpr uint32_t PDCRA_PD13 = 0x2000; // PD13
    static constexpr uint32_t PDCRA_PD12 = 0x1000; // Port PA[y] pull-down (y=0 to 12)
    static constexpr uint32_t PDCRA_PD11 = 0x800; // PD11
    static constexpr uint32_t PDCRA_PD10 = 0x400; // PD10
    static constexpr uint32_t PDCRA_PD9 = 0x200; // PD9
    static constexpr uint32_t PDCRA_PD8 = 0x100; // PD8
    static constexpr uint32_t PDCRA_PD7 = 0x80; // PD7
    static constexpr uint32_t PDCRA_PD6 = 0x40; // PD6
    static constexpr uint32_t PDCRA_PD5 = 0x20; // PD5
    static constexpr uint32_t PDCRA_PD4 = 0x10; // PD4
    static constexpr uint32_t PDCRA_PD3 = 0x8; // PD3
    static constexpr uint32_t PDCRA_PD2 = 0x4; // PD2
    static constexpr uint32_t PDCRA_PD1 = 0x2; // PD1
    static constexpr uint32_t PDCRA_PD0 = 0x1; // PD0

    static constexpr uint32_t PUCRB_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PUCRB_PU15 = 0x8000; // Port PB[y] pull-up (y=0 to 15)
    static constexpr uint32_t PUCRB_PU14 = 0x4000; // PU14
    static constexpr uint32_t PUCRB_PU13 = 0x2000; // PU13
    static constexpr uint32_t PUCRB_PU12 = 0x1000; // PU12
    static constexpr uint32_t PUCRB_PU11 = 0x800; // PU11
    static constexpr uint32_t PUCRB_PU10 = 0x400; // PU10
    static constexpr uint32_t PUCRB_PU9 = 0x200; // PU9
    static constexpr uint32_t PUCRB_PU8 = 0x100; // PU8
    static constexpr uint32_t PUCRB_PU7 = 0x80; // PU7
    static constexpr uint32_t PUCRB_PU6 = 0x40; // PU6
    static constexpr uint32_t PUCRB_PU5 = 0x20; // PU5
    static constexpr uint32_t PUCRB_PU4 = 0x10; // PU4
    static constexpr uint32_t PUCRB_PU3 = 0x8; // PU3
    static constexpr uint32_t PUCRB_PU2 = 0x4; // PU2
    static constexpr uint32_t PUCRB_PU1 = 0x2; // PU1
    static constexpr uint32_t PUCRB_PU0 = 0x1; // PU0

    static constexpr uint32_t PDCRB_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PDCRB_PD15 = 0x8000; // Port PB[y] pull-down (y=5 to 15)
    static constexpr uint32_t PDCRB_PD14 = 0x4000; // PD14
    static constexpr uint32_t PDCRB_PD13 = 0x2000; // PD13
    static constexpr uint32_t PDCRB_PD12 = 0x1000; // PD12
    static constexpr uint32_t PDCRB_PD11 = 0x800; // PD11
    static constexpr uint32_t PDCRB_PD10 = 0x400; // PD10
    static constexpr uint32_t PDCRB_PD9 = 0x200; // PD9
    static constexpr uint32_t PDCRB_PD8 = 0x100; // PD8
    static constexpr uint32_t PDCRB_PD7 = 0x80; // PD7
    static constexpr uint32_t PDCRB_PD6 = 0x40; // PD6
    static constexpr uint32_t PDCRB_PD5 = 0x20; // PD5
    static constexpr uint32_t PDCRB_PD4 = 0x10; // PD4
    static constexpr uint32_t PDCRB_PD3 = 0x8; // Port PB[y] pull-down (y=0 to 3)
    static constexpr uint32_t PDCRB_PD2 = 0x4; // PD2
    static constexpr uint32_t PDCRB_PD1 = 0x2; // PD1
    static constexpr uint32_t PDCRB_PD0 = 0x1; // PD0

    static constexpr uint32_t PUCRC_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PUCRC_PU15 = 0x8000; // Port PC[y] pull-up (y=13 to 15)
    static constexpr uint32_t PUCRC_PU14 = 0x4000; // PU14
    static constexpr uint32_t PUCRC_PU13 = 0x2000; // PU13
    static constexpr uint32_t PUCRC_PU2 = 0x4; // PU2
    static constexpr uint32_t PUCRC_PU1 = 0x2; // PU1
    static constexpr uint32_t PUCRC_PU0 = 0x1; // PU0
    static constexpr uint32_t PUCRC_PU3 = 0x8; // PU3
    static constexpr uint32_t PUCRC_PU4 = 0x10; // PU4
    static constexpr uint32_t PUCRC_PU5 = 0x20; // PU5
    static constexpr uint32_t PUCRC_PU6 = 0x40; // PU6

    static constexpr uint32_t PDCRC_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PDCRC_PD15 = 0x8000; // Port PC[y] pull-down (y=13 to 15)
    static constexpr uint32_t PDCRC_PD14 = 0x4000; // PD14
    static constexpr uint32_t PDCRC_PD13 = 0x2000; // PD13
    static constexpr uint32_t PDCRC_PD2 = 0x4; // PD2
    static constexpr uint32_t PDCRC_PD1 = 0x2; // PD1
    static constexpr uint32_t PDCRC_PD0 = 0x1; // PD0
    static constexpr uint32_t PDCRC_PD3 = 0x8; // PD3
    static constexpr uint32_t PDCRC_PD4 = 0x10; // PD4
    static constexpr uint32_t PDCRC_PD5 = 0x20; // PD5
    static constexpr uint32_t PDCRC_PD6 = 0x40; // PD6


    static constexpr uint32_t PUCRH_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PUCRH_PU3 = 0x8; // pull-up

    static constexpr uint32_t PDCRH_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PDCRH_PD3 = 0x8; // pull-down


    static constexpr uint32_t C2CR1_RESET_VALUE = 0x7; // Reset value
    static constexpr uint32_t C2CR1_FPDS = 0x20; // Flash memory power down mode during LPSleep for CPU2
    static constexpr uint32_t C2CR1_FPDR = 0x10; // Flash memory power down mode during LPRun for CPU2
    typedef bit_field_t<0, 0x7> C2CR1_LPMS; // Low-power mode selection for CPU2

    static constexpr uint32_t C2CR3_RESET_VALUE = 0x8000; // Reset value
    static constexpr uint32_t C2CR3_EIWUL = 0x8000; // Enable internal wakeup line for CPU2
    static constexpr uint32_t C2CR3_EWRFIRQ = 0x2000; // akeup for CPU2
    static constexpr uint32_t C2CR3_EWRFBUSY = 0x800; // EWRFBUSY
    static constexpr uint32_t C2CR3_APC = 0x400; // Apply pull-up and pull-down configuration for CPU2
    static constexpr uint32_t C2CR3_EWPVD = 0x100; // Enable wakeup PVD for CPU2
    static constexpr uint32_t C2CR3_EWUP3 = 0x4; // Enable Wakeup pin WKUP3 for CPU2
    static constexpr uint32_t C2CR3_EWUP2 = 0x2; // Enable Wakeup pin WKUP2 for CPU2
    static constexpr uint32_t C2CR3_EWUP1 = 0x1; // Enable Wakeup pin WKUP1 for CPU2

    static constexpr uint32_t EXTSCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t EXTSCR_C2DS = 0x8000; // PU2 deepsleep mode
    static constexpr uint32_t EXTSCR_C1DS = 0x4000; // CPU1 deepsleep mode
    static constexpr uint32_t EXTSCR_C2STOPF = 0x2000; // ystem Stop0, 1 flag for CPU2. (All core states retained)
    static constexpr uint32_t EXTSCR_C2STOP2F = 0x1000; // ystem Stop2 flag for CPU2. (partial core states retained)
    static constexpr uint32_t EXTSCR_C2SBF = 0x800; // ystem Standby flag for CPU2. (no core states retained)
    static constexpr uint32_t EXTSCR_C1STOPF = 0x400; // System Stop0, 1 flag for CPU1. (All core states retained)
    static constexpr uint32_t EXTSCR_C1STOP2F = 0x200; // System Stop2 flag for CPU1. (partial core states retained)
    static constexpr uint32_t EXTSCR_C1SBF = 0x100; // System Standby flag for CPU1. (no core states retained)
    static constexpr uint32_t EXTSCR_C2CSSF = 0x2; // lear CPU2 Stop Standby flags
    static constexpr uint32_t EXTSCR_C1CSSF = 0x1; // Clear CPU1 Stop Standby flags

    static constexpr uint32_t SECCFGR_RESET_VALUE = 0x8000; // Reset value
    static constexpr uint32_t SECCFGR_C2EWILA = 0x8000; // wakeup on CPU2 illegal access interrupt enable

    static constexpr uint32_t SUBGHZSPICR_RESET_VALUE = 0x8000; // Reset value
    static constexpr uint32_t SUBGHZSPICR_NSS = 0x8000; // sub-GHz SPI NSS control


    static constexpr uint32_t RSSCMDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RSSCMDR_RSSCMD; // RSS command
};

// PWR: Power control

struct stm32wle5_cm4_pwr_t
{
    volatile uint32_t CR1; // Power control register 1
    volatile uint32_t CR2; // Power control register 2
    volatile uint32_t CR3; // Power control register 3
    volatile uint32_t CR4; // Power control register 4
    volatile uint32_t SR1; // Power status register 1
    volatile uint32_t SR2; // Power status register 2
    volatile uint32_t SCR; // Power status clear register
    volatile uint32_t CR5; // Power control register 5
    volatile uint32_t PUCRA; // Power Port A pull-up control register
    volatile uint32_t PDCRA; // Power Port A pull-down control register
    volatile uint32_t PUCRB; // Power Port B pull-up control register
    volatile uint32_t PDCRB; // Power Port B pull-down control register
    volatile uint32_t PUCRC; // Power Port C pull-up control register
    volatile uint32_t PDCRC; // Power Port C pull-down control register
    reserved_t<0x8> _0x38;
    volatile uint32_t PUCRH; // Power Port H pull-up control register
    volatile uint32_t PDCRH; // Power Port H pull-down control register
    reserved_t<0xa> _0x60;
    volatile uint32_t EXTSCR; // Power extended status and status clear register
    reserved_t<0x1> _0x8c;
    volatile uint32_t SUBGHZSPICR; // Power SPI3 control register

    static constexpr uint32_t CR1_RESET_VALUE = 0x200; // Reset value
    static constexpr uint32_t CR1_LPR = 0x4000; // Low-power run
    typedef bit_field_t<9, 0x3> CR1_VOS; // Voltage scaling range selection
    static constexpr uint32_t CR1_DBP = 0x100; // Disable backup domain write protection
    static constexpr uint32_t CR1_FPDS = 0x20; // Flash memory power down mode during LPSleep for CPU1
    static constexpr uint32_t CR1_FPDR = 0x10; // Flash memory power down mode during LPRun for CPU1
    static constexpr uint32_t CR1_SUBGHZSPINSSSEL = 0x8; // sub-GHz SPI NSS source select
    typedef bit_field_t<0, 0x7> CR1_LPMS; // Low-power mode selection for CPU1

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR2_PVME3 = 0x40; // Peripheral voltage monitoring 3 enable: VDDA vs. 1.62V
    typedef bit_field_t<1, 0x7> CR2_PLS; // Power voltage detector level selection.
    static constexpr uint32_t CR2_PVDE = 0x1; // Power voltage detector enable

    static constexpr uint32_t CR3_RESET_VALUE = 0x8000; // Reset value
    static constexpr uint32_t CR3_EIWUL = 0x8000; // Enable internal wakeup line for CPU1
    static constexpr uint32_t CR3_EWRFIRQ = 0x2000; // akeup for CPU1
    static constexpr uint32_t CR3_EWRFBUSY = 0x800; // Enable Radio BUSY Wakeup from Standby for CPU1
    static constexpr uint32_t CR3_APC = 0x400; // Apply pull-up and pull-down configuration from CPU1
    static constexpr uint32_t CR3_RRS = 0x200; // SRAM2 retention in Standby mode
    static constexpr uint32_t CR3_EWPVD = 0x100; // Enable wakeup PVD for CPU1
    static constexpr uint32_t CR3_EULPEN = 0x80; // Ultra-low-power enable
    static constexpr uint32_t CR3_EWUP3 = 0x4; // Enable Wakeup pin WKUP3 for CPU1
    static constexpr uint32_t CR3_EWUP2 = 0x2; // Enable Wakeup pin WKUP2 for CPU1
    static constexpr uint32_t CR3_EWUP1 = 0x1; // Enable Wakeup pin WKUP1 for CPU1

    static constexpr uint32_t CR4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR4_WRFBUSYP = 0x800; // Wakeup Radio BUSY polarity
    static constexpr uint32_t CR4_VBRS = 0x200; // VBAT battery charging resistor selection
    static constexpr uint32_t CR4_VBE = 0x100; // VBAT battery charging enable
    static constexpr uint32_t CR4_WP3 = 0x4; // Wakeup pin WKUP3 polarity
    static constexpr uint32_t CR4_WP2 = 0x2; // Wakeup pin WKUP2 polarity
    static constexpr uint32_t CR4_WP1 = 0x1; // Wakeup pin WKUP1 polarity

    static constexpr uint32_t SR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR1_WUFI = 0x8000; // Internal wakeup interrupt flag
    static constexpr uint32_t SR1_WRFBUSYF = 0x800; // Radio BUSY wakeup flag
    static constexpr uint32_t SR1_WPVDF = 0x100; // Wakeup PVD flag
    static constexpr uint32_t SR1_WUF3 = 0x4; // Wakeup flag 3
    static constexpr uint32_t SR1_WUF2 = 0x2; // Wakeup flag 2
    static constexpr uint32_t SR1_WUF1 = 0x1; // Wakeup flag 1

    static constexpr uint32_t SR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR2_PVMO3 = 0x4000; // Peripheral voltage monitoring output: VDDA vs. 1.62 V
    static constexpr uint32_t SR2_PVDO = 0x800; // Power voltage detector output
    static constexpr uint32_t SR2_VOSF = 0x400; // Voltage scaling flag
    static constexpr uint32_t SR2_REGLPF = 0x200; // regulator1 low power flag
    static constexpr uint32_t SR2_REGLPS = 0x100; // regulator1 started
    static constexpr uint32_t SR2_FLASHRDY = 0x80; // Flash ready
    static constexpr uint32_t SR2_REGMRS = 0x40; // regulator2 low power flag
    static constexpr uint32_t SR2_RFEOLF = 0x20; // Radio end of life flag
    static constexpr uint32_t SR2_LDORDY = 0x10; // LDO ready flag
    static constexpr uint32_t SR2_SMPSRDY = 0x8; // SMPS ready flag
    static constexpr uint32_t SR2_RFBUSYMS = 0x4; // Radio BUSY masked signal status
    static constexpr uint32_t SR2_RFBUSYS = 0x2; // Radio BUSY signal status

    static constexpr uint32_t SCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SCR_CWRFBUSYF = 0x800; // Clear wakeup Radio BUSY flag
    static constexpr uint32_t SCR_CWPVDF = 0x100; // Clear wakeup PVD interrupt flag
    static constexpr uint32_t SCR_CWUF3 = 0x4; // Clear wakeup flag 3
    static constexpr uint32_t SCR_CWUF2 = 0x2; // Clear wakeup flag 2
    static constexpr uint32_t SCR_CWUF1 = 0x1; // Clear wakeup flag 1

    static constexpr uint32_t CR5_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR5_SMPSEN = 0x8000; // Enable SMPS Step Down converter SMPS mode enabled.
    static constexpr uint32_t CR5_RFEOLEN = 0x4000; // Enable Radio End Of Life detector enabled

    static constexpr uint32_t PUCRA_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PUCRA_PU15 = 0x8000; // Port PA15 pull-up
    static constexpr uint32_t PUCRA_PU14 = 0x4000; // PU14
    static constexpr uint32_t PUCRA_PU13 = 0x2000; // Port PA[y] pull-up bit y (y=0 to 13)
    static constexpr uint32_t PUCRA_PU12 = 0x1000; // PU12
    static constexpr uint32_t PUCRA_PU11 = 0x800; // PU11
    static constexpr uint32_t PUCRA_PU10 = 0x400; // PU10
    static constexpr uint32_t PUCRA_PU9 = 0x200; // PU9
    static constexpr uint32_t PUCRA_PU8 = 0x100; // PU8
    static constexpr uint32_t PUCRA_PU7 = 0x80; // PU7
    static constexpr uint32_t PUCRA_PU6 = 0x40; // PU6
    static constexpr uint32_t PUCRA_PU5 = 0x20; // PU5
    static constexpr uint32_t PUCRA_PU4 = 0x10; // PU4
    static constexpr uint32_t PUCRA_PU3 = 0x8; // PU3
    static constexpr uint32_t PUCRA_PU2 = 0x4; // PU2
    static constexpr uint32_t PUCRA_PU1 = 0x2; // PU1
    static constexpr uint32_t PUCRA_PU0 = 0x1; // PU0

    static constexpr uint32_t PDCRA_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PDCRA_PD15 = 0x8000; // PD15
    static constexpr uint32_t PDCRA_PD14 = 0x4000; // ull-down
    static constexpr uint32_t PDCRA_PD13 = 0x2000; // PD13
    static constexpr uint32_t PDCRA_PD12 = 0x1000; // Port PA[y] pull-down (y=0 to 12)
    static constexpr uint32_t PDCRA_PD11 = 0x800; // PD11
    static constexpr uint32_t PDCRA_PD10 = 0x400; // PD10
    static constexpr uint32_t PDCRA_PD9 = 0x200; // PD9
    static constexpr uint32_t PDCRA_PD8 = 0x100; // PD8
    static constexpr uint32_t PDCRA_PD7 = 0x80; // PD7
    static constexpr uint32_t PDCRA_PD6 = 0x40; // PD6
    static constexpr uint32_t PDCRA_PD5 = 0x20; // PD5
    static constexpr uint32_t PDCRA_PD4 = 0x10; // PD4
    static constexpr uint32_t PDCRA_PD3 = 0x8; // PD3
    static constexpr uint32_t PDCRA_PD2 = 0x4; // PD2
    static constexpr uint32_t PDCRA_PD1 = 0x2; // PD1
    static constexpr uint32_t PDCRA_PD0 = 0x1; // PD0

    static constexpr uint32_t PUCRB_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PUCRB_PU15 = 0x8000; // Port PB[y] pull-up (y=0 to 15)
    static constexpr uint32_t PUCRB_PU14 = 0x4000; // PU14
    static constexpr uint32_t PUCRB_PU13 = 0x2000; // PU13
    static constexpr uint32_t PUCRB_PU12 = 0x1000; // PU12
    static constexpr uint32_t PUCRB_PU11 = 0x800; // PU11
    static constexpr uint32_t PUCRB_PU10 = 0x400; // PU10
    static constexpr uint32_t PUCRB_PU9 = 0x200; // PU9
    static constexpr uint32_t PUCRB_PU8 = 0x100; // PU8
    static constexpr uint32_t PUCRB_PU7 = 0x80; // PU7
    static constexpr uint32_t PUCRB_PU6 = 0x40; // PU6
    static constexpr uint32_t PUCRB_PU5 = 0x20; // PU5
    static constexpr uint32_t PUCRB_PU4 = 0x10; // PU4
    static constexpr uint32_t PUCRB_PU3 = 0x8; // PU3
    static constexpr uint32_t PUCRB_PU2 = 0x4; // PU2
    static constexpr uint32_t PUCRB_PU1 = 0x2; // PU1
    static constexpr uint32_t PUCRB_PU0 = 0x1; // PU0

    static constexpr uint32_t PDCRB_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PDCRB_PD15 = 0x8000; // Port PB[y] pull-down (y=5 to 15)
    static constexpr uint32_t PDCRB_PD14 = 0x4000; // PD14
    static constexpr uint32_t PDCRB_PD13 = 0x2000; // PD13
    static constexpr uint32_t PDCRB_PD12 = 0x1000; // PD12
    static constexpr uint32_t PDCRB_PD11 = 0x800; // PD11
    static constexpr uint32_t PDCRB_PD10 = 0x400; // PD10
    static constexpr uint32_t PDCRB_PD9 = 0x200; // PD9
    static constexpr uint32_t PDCRB_PD8 = 0x100; // PD8
    static constexpr uint32_t PDCRB_PD7 = 0x80; // PD7
    static constexpr uint32_t PDCRB_PD6 = 0x40; // PD6
    static constexpr uint32_t PDCRB_PD5 = 0x20; // PD5
    static constexpr uint32_t PDCRB_PD4 = 0x10; // PD4
    static constexpr uint32_t PDCRB_PD3 = 0x8; // Port PB[y] pull-down (y=0 to 3)
    static constexpr uint32_t PDCRB_PD2 = 0x4; // PD2
    static constexpr uint32_t PDCRB_PD1 = 0x2; // PD1
    static constexpr uint32_t PDCRB_PD0 = 0x1; // PD0

    static constexpr uint32_t PUCRC_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PUCRC_PU15 = 0x8000; // Port PC[y] pull-up (y=13 to 15)
    static constexpr uint32_t PUCRC_PU14 = 0x4000; // PU14
    static constexpr uint32_t PUCRC_PU13 = 0x2000; // PU13
    static constexpr uint32_t PUCRC_PU2 = 0x4; // PU2
    static constexpr uint32_t PUCRC_PU1 = 0x2; // PU1
    static constexpr uint32_t PUCRC_PU0 = 0x1; // PU0
    static constexpr uint32_t PUCRC_PU3 = 0x8; // PU3
    static constexpr uint32_t PUCRC_PU4 = 0x10; // PU4
    static constexpr uint32_t PUCRC_PU5 = 0x20; // PU5
    static constexpr uint32_t PUCRC_PU6 = 0x40; // PU6

    static constexpr uint32_t PDCRC_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PDCRC_PD15 = 0x8000; // Port PC[y] pull-down (y=13 to 15)
    static constexpr uint32_t PDCRC_PD14 = 0x4000; // PD14
    static constexpr uint32_t PDCRC_PD13 = 0x2000; // PD13
    static constexpr uint32_t PDCRC_PD2 = 0x4; // PD2
    static constexpr uint32_t PDCRC_PD1 = 0x2; // PD1
    static constexpr uint32_t PDCRC_PD0 = 0x1; // PD0
    static constexpr uint32_t PDCRC_PD3 = 0x8; // PD3
    static constexpr uint32_t PDCRC_PD4 = 0x10; // PD4
    static constexpr uint32_t PDCRC_PD5 = 0x20; // PD5
    static constexpr uint32_t PDCRC_PD6 = 0x40; // PD6


    static constexpr uint32_t PUCRH_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PUCRH_PU3 = 0x8; // pull-up

    static constexpr uint32_t PDCRH_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PDCRH_PD3 = 0x8; // pull-down


    static constexpr uint32_t EXTSCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t EXTSCR_C1DS = 0x4000; // CPU1 deepsleep mode
    static constexpr uint32_t EXTSCR_C1STOPF = 0x400; // System Stop0, 1 flag for CPU1. (All core states retained)
    static constexpr uint32_t EXTSCR_C1STOP2F = 0x200; // System Stop2 flag for CPU1. (partial core states retained)
    static constexpr uint32_t EXTSCR_C1SBF = 0x100; // System Standby flag for CPU1. (no core states retained)
    static constexpr uint32_t EXTSCR_C1CSSF = 0x1; // Clear CPU1 Stop Standby flags


    static constexpr uint32_t SUBGHZSPICR_RESET_VALUE = 0x8000; // Reset value
    static constexpr uint32_t SUBGHZSPICR_NSS = 0x8000; // sub-GHz SPI NSS control
};

template<>
struct peripheral_t<STM32WL5x_CM0P, PWR>
{
    static constexpr periph_t P = PWR;
    using T = stm32wl5x_cm0p_pwr_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WL5x_CM4, PWR>
{
    static constexpr periph_t P = PWR;
    using T = stm32wl5x_cm0p_pwr_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WLE5_CM4, PWR>
{
    static constexpr periph_t P = PWR;
    using T = stm32wle5_cm4_pwr_t;
    static T& V;
};

using pwr_t = peripheral_t<svd, PWR>;
