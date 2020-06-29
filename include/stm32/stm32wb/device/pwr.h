#pragma once

////
//
//      STM32WB PWR peripherals
//
///

// PWR: Power control

struct stm32wb30_cm4_pwr_t
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
    volatile uint32_t PUCRD; // Power Port D pull-up control register
    volatile uint32_t PDCRD; // Power Port D pull-down control register
    volatile uint32_t PUCRE; // Power Port E pull-up control register
    volatile uint32_t PDCRE; // Power Port E pull-down control register
    reserved_t<0x4> _0x48;
    volatile uint32_t PUCRH; // Power Port H pull-up control register
    volatile uint32_t PDCRH; // Power Port H pull-down control register
    reserved_t<0x8> _0x60;
    volatile uint32_t C2CR1; // CPU2 Power control register 1
    volatile uint32_t C2CR3; // CPU2 Power control register 3
    volatile uint32_t EXTSCR; // Power status clear register

    static constexpr uint32_t CR1_RESET_VALUE = 0x200; // Reset value
    static constexpr uint32_t CR1_LPR = 0x4000; // Low-power run
    typedef bit_field_t<9, 0x3> CR1_VOS; // Voltage scaling range selection
    static constexpr uint32_t CR1_DBP = 0x100; // Disable backup domain write protection
    static constexpr uint32_t CR1_FPDS = 0x20; // Flash power down mode during LPsSleep for CPU1
    static constexpr uint32_t CR1_FPDR = 0x10; // Flash power down mode during LPRun for CPU1
    typedef bit_field_t<0, 0x7> CR1_LPMS; // Low-power mode selection for CPU1

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR2_USV = 0x400; // VDDUSB USB supply valid
    static constexpr uint32_t CR2_PVME3 = 0x40; // Peripheral voltage monitoring 3 enable: VDDA vs. 1.62V
    static constexpr uint32_t CR2_PVME1 = 0x10; // Peripheral voltage monitoring 1 enable: VDDUSB vs. 1.2V
    typedef bit_field_t<1, 0x7> CR2_PLS; // Power voltage detector level selection
    static constexpr uint32_t CR2_PVDE = 0x1; // Power voltage detector enable

    static constexpr uint32_t CR3_RESET_VALUE = 0x8000; // Reset value
    static constexpr uint32_t CR3_EIWUL = 0x8000; // Enable internal wakeup line for CPU1
    static constexpr uint32_t CR3_EC2H = 0x4000; // Enable CPU2 Hold interrupt for CPU1
    static constexpr uint32_t CR3_E802A = 0x2000; // Enable end of activity interrupt for CPU1
    static constexpr uint32_t CR3_EBLEA = 0x800; // Enable BLE end of activity interrupt for CPU1
    static constexpr uint32_t CR3_ECRPE = 0x1000; // Enable critical radio phase end of activity interrupt for CPU1
    static constexpr uint32_t CR3_APC = 0x400; // Apply pull-up and pull-down configuration
    static constexpr uint32_t CR3_RRS = 0x200; // SRAM2a retention in Standby mode
    static constexpr uint32_t CR3_EBORHSDFB = 0x100; // Enable BORH and Step Down counverter forced in Bypass interrups for CPU1
    static constexpr uint32_t CR3_EWUP5 = 0x10; // Enable Wakeup pin WKUP5
    static constexpr uint32_t CR3_EWUP4 = 0x8; // Enable Wakeup pin WKUP4
    static constexpr uint32_t CR3_EWUP3 = 0x4; // Enable Wakeup pin WKUP3
    static constexpr uint32_t CR3_EWUP2 = 0x2; // Enable Wakeup pin WKUP2
    static constexpr uint32_t CR3_EWUP1 = 0x1; // Enable Wakeup pin WKUP1

    static constexpr uint32_t CR4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR4_C2BOOT = 0x8000; // BOOT CPU2 after reset or wakeup from Stop or Standby modes
    static constexpr uint32_t CR4_VBRS = 0x200; // VBAT battery charging resistor selection
    static constexpr uint32_t CR4_VBE = 0x100; // VBAT battery charging enable
    static constexpr uint32_t CR4_WP5 = 0x10; // Wakeup pin WKUP5 polarity
    static constexpr uint32_t CR4_WP4 = 0x8; // Wakeup pin WKUP4 polarity
    static constexpr uint32_t CR4_WP3 = 0x4; // Wakeup pin WKUP3 polarity
    static constexpr uint32_t CR4_WP2 = 0x2; // Wakeup pin WKUP2 polarity
    static constexpr uint32_t CR4_WP1 = 0x1; // Wakeup pin WKUP1 polarity

    static constexpr uint32_t SR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR1_WUFI = 0x8000; // Internal Wakeup interrupt flag
    static constexpr uint32_t SR1_C2HF = 0x4000; // CPU2 Hold interrupt flag
    static constexpr uint32_t SR1_AF802 = 0x2000; // 802.15.4 end of activity interrupt flag
    static constexpr uint32_t SR1_BLEAF = 0x1000; // BLE end of activity interrupt flag
    static constexpr uint32_t SR1_CRPEF = 0x800; // Enable critical radio phase end of activity interrupt flag
    static constexpr uint32_t SR1_WUF802 = 0x400; // 802.15.4 wakeup interrupt flag
    static constexpr uint32_t SR1_BLEWUF = 0x200; // BLE wakeup interrupt flag
    static constexpr uint32_t SR1_BORHF = 0x100; // BORH interrupt flag
    static constexpr uint32_t SR1_SDFBF = 0x80; // Step Down converter forced in Bypass interrupt flag
    static constexpr uint32_t SR1_CWUF5 = 0x10; // Wakeup flag 5
    static constexpr uint32_t SR1_CWUF4 = 0x8; // Wakeup flag 4
    static constexpr uint32_t SR1_CWUF3 = 0x4; // Wakeup flag 3
    static constexpr uint32_t SR1_CWUF2 = 0x2; // Wakeup flag 2
    static constexpr uint32_t SR1_CWUF1 = 0x1; // Wakeup flag 1

    static constexpr uint32_t SR2_RESET_VALUE = 0x2; // Reset value
    static constexpr uint32_t SR2_PVMO3 = 0x4000; // Peripheral voltage monitoring output: VDDA vs. 1.62 V
    static constexpr uint32_t SR2_PVMO1 = 0x1000; // Peripheral voltage monitoring output: VDDUSB vs. 1.2 V
    static constexpr uint32_t SR2_PVDO = 0x800; // Power voltage detector output
    static constexpr uint32_t SR2_VOSF = 0x400; // Voltage scaling flag
    static constexpr uint32_t SR2_REGLPF = 0x200; // Low-power regulator flag
    static constexpr uint32_t SR2_REGLPS = 0x100; // Low-power regulator started
    static constexpr uint32_t SR2_SDSMPSF = 0x2; // Step Down converter SMPS mode flag
    static constexpr uint32_t SR2_SDBF = 0x1; // Step Down converter Bypass mode flag

    static constexpr uint32_t SCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SCR_CC2HF = 0x4000; // Clear CPU2 Hold interrupt flag
    static constexpr uint32_t SCR_C802AF = 0x2000; // Clear 802.15.4 end of activity interrupt flag
    static constexpr uint32_t SCR_CBLEAF = 0x1000; // Clear BLE end of activity interrupt flag
    static constexpr uint32_t SCR_CCRPEF = 0x800; // Clear critical radio phase end of activity interrupt flag
    static constexpr uint32_t SCR_C802WUF = 0x400; // Clear 802.15.4 wakeup interrupt flag
    static constexpr uint32_t SCR_CBLEWUF = 0x200; // Clear BLE wakeup interrupt flag
    static constexpr uint32_t SCR_CBORHF = 0x100; // Clear BORH interrupt flag
    static constexpr uint32_t SCR_CSMPSFBF = 0x80; // Clear SMPS Step Down converter forced in Bypass interrupt flag
    static constexpr uint32_t SCR_CWUF5 = 0x10; // Clear wakeup flag 5
    static constexpr uint32_t SCR_CWUF4 = 0x8; // Clear wakeup flag 4
    static constexpr uint32_t SCR_CWUF3 = 0x4; // Clear wakeup flag 3
    static constexpr uint32_t SCR_CWUF2 = 0x2; // Clear wakeup flag 2
    static constexpr uint32_t SCR_CWUF1 = 0x1; // Clear wakeup flag 1

    static constexpr uint32_t CR5_RESET_VALUE = 0x4270; // Reset value
    static constexpr uint32_t CR5_SDEB = 0x8000; // Enable Step Down converter SMPS mode enabled
    static constexpr uint32_t CR5_SDBEN = 0x4000; // Enable Step Down converter Bypass mode enabled
    static constexpr uint32_t CR5_SMPSCFG = 0x200; // VOS configuration selection (non user)
    static constexpr uint32_t CR5_BORHC = 0x100; // BORH configuration selection
    typedef bit_field_t<4, 0x7> CR5_SDSC; // Step Down converter supplt startup current selection
    typedef bit_field_t<0, 0xf> CR5_SDVOS; // Step Down converter voltage output scaling

    static constexpr uint32_t PUCRA_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PUCRA_PU15 = 0x8000; // Port A pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRA_PU13 = 0x2000; // Port A pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRA_PU12 = 0x1000; // Port A pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRA_PU11 = 0x800; // Port A pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRA_PU10 = 0x400; // Port A pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRA_PU9 = 0x200; // Port A pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRA_PU8 = 0x100; // Port A pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRA_PU7 = 0x80; // Port A pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRA_PU6 = 0x40; // Port A pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRA_PU5 = 0x20; // Port A pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRA_PU4 = 0x10; // Port A pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRA_PU3 = 0x8; // Port A pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRA_PU2 = 0x4; // Port A pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRA_PU1 = 0x2; // Port A pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRA_PU0 = 0x1; // Port A pull-up bit y (y=0..15)

    static constexpr uint32_t PDCRA_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PDCRA_PD14 = 0x4000; // Port A pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRA_PD12 = 0x1000; // Port A pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRA_PD11 = 0x800; // Port A pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRA_PD10 = 0x400; // Port A pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRA_PD9 = 0x200; // Port A pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRA_PD8 = 0x100; // Port A pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRA_PD7 = 0x80; // Port A pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRA_PD6 = 0x40; // Port A pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRA_PD5 = 0x20; // Port A pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRA_PD4 = 0x10; // Port A pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRA_PD3 = 0x8; // Port A pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRA_PD2 = 0x4; // Port A pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRA_PD1 = 0x2; // Port A pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRA_PD0 = 0x1; // Port A pull-down bit y (y=0..15)

    static constexpr uint32_t PUCRB_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PUCRB_PU15 = 0x8000; // Port B pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRB_PU14 = 0x4000; // Port B pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRB_PU13 = 0x2000; // Port B pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRB_PU12 = 0x1000; // Port B pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRB_PU11 = 0x800; // Port B pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRB_PU10 = 0x400; // Port B pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRB_PU9 = 0x200; // Port B pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRB_PU8 = 0x100; // Port B pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRB_PU7 = 0x80; // Port B pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRB_PU6 = 0x40; // Port B pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRB_PU5 = 0x20; // Port B pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRB_PU4 = 0x10; // Port B pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRB_PU3 = 0x8; // Port B pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRB_PU2 = 0x4; // Port B pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRB_PU1 = 0x2; // Port B pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRB_PU0 = 0x1; // Port B pull-up bit y (y=0..15)

    static constexpr uint32_t PDCRB_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PDCRB_PD15 = 0x8000; // Port B pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRB_PD14 = 0x4000; // Port B pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRB_PD13 = 0x2000; // Port B pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRB_PD12 = 0x1000; // Port B pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRB_PD11 = 0x800; // Port B pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRB_PD10 = 0x400; // Port B pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRB_PD9 = 0x200; // Port B pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRB_PD8 = 0x100; // Port B pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRB_PD7 = 0x80; // Port B pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRB_PD6 = 0x40; // Port B pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRB_PD5 = 0x20; // Port B pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRB_PD3 = 0x8; // Port B pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRB_PD2 = 0x4; // Port B pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRB_PD1 = 0x2; // Port B pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRB_PD0 = 0x1; // Port B pull-down bit y (y=0..15)

    static constexpr uint32_t PUCRC_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PUCRC_PU15 = 0x8000; // Port C pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRC_PU14 = 0x4000; // Port C pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRC_PU13 = 0x2000; // Port C pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRC_PU12 = 0x1000; // Port C pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRC_PU11 = 0x800; // Port C pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRC_PU10 = 0x400; // Port C pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRC_PU9 = 0x200; // Port C pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRC_PU8 = 0x100; // Port C pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRC_PU7 = 0x80; // Port C pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRC_PU6 = 0x40; // Port C pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRC_PU5 = 0x20; // Port C pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRC_PU4 = 0x10; // Port C pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRC_PU3 = 0x8; // Port C pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRC_PU2 = 0x4; // Port C pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRC_PU1 = 0x2; // Port C pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRC_PU0 = 0x1; // Port C pull-up bit y (y=0..15)

    static constexpr uint32_t PDCRC_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PDCRC_PD15 = 0x8000; // Port C pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRC_PD14 = 0x4000; // Port C pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRC_PD13 = 0x2000; // Port C pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRC_PD12 = 0x1000; // Port C pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRC_PD11 = 0x800; // Port C pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRC_PD10 = 0x400; // Port C pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRC_PD9 = 0x200; // Port C pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRC_PD8 = 0x100; // Port C pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRC_PD7 = 0x80; // Port C pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRC_PD6 = 0x40; // Port C pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRC_PD5 = 0x20; // Port C pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRC_PD4 = 0x10; // Port C pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRC_PD3 = 0x8; // Port C pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRC_PD2 = 0x4; // Port C pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRC_PD1 = 0x2; // Port C pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRC_PD0 = 0x1; // Port C pull-down bit y (y=0..15)

    static constexpr uint32_t PUCRD_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PUCRD_PU15 = 0x8000; // Port D pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRD_PU14 = 0x4000; // Port D pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRD_PU13 = 0x2000; // Port D pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRD_PU12 = 0x1000; // Port D pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRD_PU11 = 0x800; // Port D pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRD_PU10 = 0x400; // Port D pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRD_PU9 = 0x200; // Port D pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRD_PU8 = 0x100; // Port D pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRD_PU7 = 0x80; // Port D pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRD_PU6 = 0x40; // Port D pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRD_PU5 = 0x20; // Port D pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRD_PU4 = 0x10; // Port D pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRD_PU3 = 0x8; // Port D pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRD_PU2 = 0x4; // Port D pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRD_PU1 = 0x2; // Port D pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRD_PU0 = 0x1; // Port D pull-up bit y (y=0..15)

    static constexpr uint32_t PDCRD_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PDCRD_PD15 = 0x8000; // Port D pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRD_PD14 = 0x4000; // Port D pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRD_PD13 = 0x2000; // Port D pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRD_PD12 = 0x1000; // Port D pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRD_PD11 = 0x800; // Port D pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRD_PD10 = 0x400; // Port D pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRD_PD9 = 0x200; // Port D pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRD_PD8 = 0x100; // Port D pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRD_PD7 = 0x80; // Port D pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRD_PD6 = 0x40; // Port D pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRD_PD5 = 0x20; // Port D pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRD_PD4 = 0x10; // Port D pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRD_PD3 = 0x8; // Port D pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRD_PD2 = 0x4; // Port D pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRD_PD1 = 0x2; // Port D pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRD_PD0 = 0x1; // Port D pull-down bit y (y=0..15)

    static constexpr uint32_t PUCRE_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PUCRE_PU4 = 0x10; // Port E pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRE_PU3 = 0x8; // Port E pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRE_PU2 = 0x4; // Port E pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRE_PU1 = 0x2; // Port E pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRE_PU0 = 0x1; // Port E pull-up bit y (y=0..15)

    static constexpr uint32_t PDCRE_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PDCRE_PD4 = 0x10; // Port E pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRE_PD3 = 0x8; // Port E pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRE_PD2 = 0x4; // Port E pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRE_PD1 = 0x2; // Port E pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRE_PD0 = 0x1; // Port E pull-down bit y (y=0..15)


    static constexpr uint32_t PUCRH_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PUCRH_PU3 = 0x8; // Port H pull-up bit y (y=0..1)
    static constexpr uint32_t PUCRH_PU1 = 0x2; // Port H pull-up bit y (y=0..1)
    static constexpr uint32_t PUCRH_PU0 = 0x1; // Port H pull-up bit y (y=0..1)

    static constexpr uint32_t PDCRH_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PDCRH_PD3 = 0x8; // Port H pull-down bit y (y=0..1)
    static constexpr uint32_t PDCRH_PD1 = 0x2; // Port H pull-down bit y (y=0..1)
    static constexpr uint32_t PDCRH_PD0 = 0x1; // Port H pull-down bit y (y=0..1)


    static constexpr uint32_t C2CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C2CR1_EWKUP802 = 0x8000; // 802.15.4 external wakeup signal
    static constexpr uint32_t C2CR1_BLEEWKUP = 0x4000; // BLE external wakeup signal
    static constexpr uint32_t C2CR1_FPDS = 0x20; // Flash power down mode during LPSleep for CPU2
    static constexpr uint32_t C2CR1_FPDR = 0x10; // Flash power down mode during LPRun for CPU2
    typedef bit_field_t<0, 0x7> C2CR1_LPMS; // Low-power mode selection for CPU2

    static constexpr uint32_t C2CR3_RESET_VALUE = 0x8000; // Reset value
    static constexpr uint32_t C2CR3_EIWUL = 0x8000; // Enable internal wakeup line for CPU2
    static constexpr uint32_t C2CR3_APC = 0x1000; // Apply pull-up and pull-down configuration for CPU2
    static constexpr uint32_t C2CR3_E802WUP = 0x400; // Enable 802.15.4 host wakeup interrupt for CPU2
    static constexpr uint32_t C2CR3_EBLEWUP = 0x200; // Enable BLE host wakeup interrupt for CPU2
    static constexpr uint32_t C2CR3_EWUP5 = 0x10; // Enable Wakeup pin WKUP5 for CPU2
    static constexpr uint32_t C2CR3_EWUP4 = 0x8; // Enable Wakeup pin WKUP4 for CPU2
    static constexpr uint32_t C2CR3_EWUP3 = 0x4; // Enable Wakeup pin WKUP3 for CPU2
    static constexpr uint32_t C2CR3_EWUP2 = 0x2; // Enable Wakeup pin WKUP2 for CPU2
    static constexpr uint32_t C2CR3_EWUP1 = 0x1; // Enable Wakeup pin WKUP1 for CPU2

    static constexpr uint32_t EXTSCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t EXTSCR_C2DS = 0x8000; // CPU2 deepsleep mode
    static constexpr uint32_t EXTSCR_C1DS = 0x4000; // CPU1 deepsleep mode
    static constexpr uint32_t EXTSCR_CRPF = 0x2000; // Critical Radio system phase
    static constexpr uint32_t EXTSCR_C2STOPF = 0x800; // System Stop flag for CPU2
    static constexpr uint32_t EXTSCR_C2SBF = 0x400; // System Standby flag for CPU2
    static constexpr uint32_t EXTSCR_C1STOPF = 0x200; // System Stop flag for CPU1
    static constexpr uint32_t EXTSCR_C1SBF = 0x100; // System Standby flag for CPU1
    static constexpr uint32_t EXTSCR_CCRPF = 0x4; // Clear Critical Radio system phase
    static constexpr uint32_t EXTSCR_C2CSSF = 0x2; // Clear CPU2 Stop Standby flags
    static constexpr uint32_t EXTSCR_C1CSSF = 0x1; // Clear CPU1 Stop Standby flags
};

template<>
struct peripheral_t<STM32WB30_CM4, PWR>
{
    using T = stm32wb30_cm4_pwr_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WB35_CM4, PWR>
{
    using T = stm32wb30_cm4_pwr_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WB50_CM4, PWR>
{
    using T = stm32wb30_cm4_pwr_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WB55_CM4, PWR>
{
    using T = stm32wb30_cm4_pwr_t;
    static T& V;
};

using pwr_t = peripheral_t<svd, PWR>;

template<int INST> struct pwr_traits {};
