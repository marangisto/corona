#pragma once

////
//
//      STM32G0 PWR peripherals
//
///

// PWR: Power control

struct stm32g030_pwr_t
{
    volatile uint32_t CR1; // Power control register 1
    volatile uint32_t CR2; // Power control register 2
    volatile uint32_t CR3; // Power control register 3
    volatile uint32_t CR4; // Power control register 4
    volatile uint32_t SR1; // Power status register 1
    volatile uint32_t SR2; // Power status register 2
    volatile uint32_t SCR; // Power status clear register
    reserved_t<0x1> _0x1c;
    volatile uint32_t PUCRA; // Power Port A pull-up control register
    volatile uint32_t PDCRA; // Power Port A pull-down control register
    volatile uint32_t PUCRB; // Power Port B pull-up control register
    volatile uint32_t PDCRB; // Power Port B pull-down control register
    volatile uint32_t PUCRC; // Power Port C pull-up control register
    volatile uint32_t PDCRC; // Power Port C pull-down control register
    volatile uint32_t PUCRD; // Power Port D pull-up control register
    volatile uint32_t PDCRD; // Power Port D pull-down control register
    reserved_t<0x2> _0x40;
    volatile uint32_t PUCRF; // Power Port F pull-up control register
    volatile uint32_t PDCRF; // Power Port F pull-down control register

    static constexpr uint32_t CR1_RESET_VALUE = 0x200; // Reset value
    static constexpr uint32_t CR1_LPR = 0x4000; // Low-power run
    typedef bit_field_t<9, 0x3> CR1_VOS; // Voltage scaling range selection
    static constexpr uint32_t CR1_DBP = 0x100; // Disable backup domain write protection
    static constexpr uint32_t CR1_FPD_LPSLP = 0x20; // Flash memory powered down during Low-power sleep mode
    static constexpr uint32_t CR1_FPD_LPRUN = 0x10; // Flash memory powered down during Low-power run mode
    static constexpr uint32_t CR1_FPD_STOP = 0x8; // Flash memory powered down during Stop mode
    typedef bit_field_t<0, 0x7> CR1_LPMS; // Low-power mode selection

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR2_PVDE = 0x1; // Power voltage detector enable
    typedef bit_field_t<1, 0x7> CR2_PVDFT; // Power voltage detector falling threshold selection
    typedef bit_field_t<4, 0x7> CR2_PVDRT; // Power voltage detector rising threshold selection

    static constexpr uint32_t CR3_RESET_VALUE = 0x8000; // Reset value
    static constexpr uint32_t CR3_EWUP1 = 0x1; // Enable Wakeup pin WKUP1
    static constexpr uint32_t CR3_EWUP2 = 0x2; // Enable Wakeup pin WKUP2
    static constexpr uint32_t CR3_EWUP4 = 0x8; // Enable Wakeup pin WKUP4
    static constexpr uint32_t CR3_EWUP5 = 0x10; // Enable WKUP5 wakeup pin
    static constexpr uint32_t CR3_EWUP6 = 0x20; // Enable WKUP6 wakeup pin
    static constexpr uint32_t CR3_RRS = 0x100; // SRAM retention in Standby mode
    static constexpr uint32_t CR3_ULPEN = 0x200; // Enable the periodical sampling mode for PDR detection
    static constexpr uint32_t CR3_APC = 0x400; // Apply pull-up and pull-down configuration
    static constexpr uint32_t CR3_EIWUL = 0x8000; // Enable internal wakeup line

    static constexpr uint32_t CR4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR4_WP1 = 0x1; // Wakeup pin WKUP1 polarity
    static constexpr uint32_t CR4_WP2 = 0x2; // Wakeup pin WKUP2 polarity
    static constexpr uint32_t CR4_WP4 = 0x8; // Wakeup pin WKUP4 polarity
    static constexpr uint32_t CR4_WP5 = 0x10; // Wakeup pin WKUP5 polarity
    static constexpr uint32_t CR4_WP6 = 0x20; // WKUP6 wakeup pin polarity
    static constexpr uint32_t CR4_VBE = 0x100; // VBAT battery charging enable
    static constexpr uint32_t CR4_VBRS = 0x200; // VBAT battery charging resistor selection

    static constexpr uint32_t SR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR1_WUF1 = 0x1; // Wakeup flag 1
    static constexpr uint32_t SR1_WUF2 = 0x2; // Wakeup flag 2
    static constexpr uint32_t SR1_WUF4 = 0x8; // Wakeup flag 4
    static constexpr uint32_t SR1_WUF5 = 0x10; // Wakeup flag 5
    static constexpr uint32_t SR1_WUF6 = 0x20; // Wakeup flag 6
    static constexpr uint32_t SR1_SBF = 0x100; // Standby flag
    static constexpr uint32_t SR1_WUFI = 0x8000; // Wakeup flag internal

    static constexpr uint32_t SR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR2_PVDO = 0x800; // Power voltage detector output
    static constexpr uint32_t SR2_VOSF = 0x400; // Voltage scaling flag
    static constexpr uint32_t SR2_REGLPF = 0x200; // Low-power regulator flag
    static constexpr uint32_t SR2_REGLPS = 0x100; // Low-power regulator started
    static constexpr uint32_t SR2_FLASH_RDY = 0x80; // Flash ready flag

    static constexpr uint32_t SCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SCR_CSBF = 0x100; // Clear standby flag
    static constexpr uint32_t SCR_CWUF6 = 0x20; // Clear wakeup flag 6
    static constexpr uint32_t SCR_CWUF5 = 0x10; // Clear wakeup flag 5
    static constexpr uint32_t SCR_CWUF4 = 0x8; // Clear wakeup flag 4
    static constexpr uint32_t SCR_CWUF2 = 0x2; // Clear wakeup flag 2
    static constexpr uint32_t SCR_CWUF1 = 0x1; // Clear wakeup flag 1


    static constexpr uint32_t PUCRA_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PUCRA_PU15 = 0x8000; // Port A pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRA_PU14 = 0x4000; // Port A pull-up bit y (y=0..15)
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
    static constexpr uint32_t PDCRA_PD15 = 0x8000; // Port A pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRA_PD14 = 0x4000; // Port A pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRA_PD13 = 0x2000; // Port A pull-down bit y (y=0..15)
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
    static constexpr uint32_t PDCRB_PD4 = 0x10; // Port B pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRB_PD3 = 0x8; // Port B pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRB_PD2 = 0x4; // Port B pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRB_PD1 = 0x2; // Port B pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRB_PD0 = 0x1; // Port B pull-down bit y (y=0..15)

    static constexpr uint32_t PUCRC_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PUCRC_PU15 = 0x8000; // Port C pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRC_PU14 = 0x4000; // Port C pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRC_PU13 = 0x2000; // Port C pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRC_PU7 = 0x80; // Port C pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRC_PU6 = 0x40; // Port C pull-up bit y (y=0..15)

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
    static constexpr uint32_t PUCRD_PU3 = 0x8; // Port D pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRD_PU2 = 0x4; // Port D pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRD_PU1 = 0x2; // Port D pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRD_PU0 = 0x1; // Port D pull-up bit y (y=0..15)

    static constexpr uint32_t PDCRD_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PDCRD_PD9 = 0x200; // Port D pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRD_PD8 = 0x100; // Port D pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRD_PD6 = 0x40; // Port D pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRD_PD5 = 0x20; // Port D pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRD_PD4 = 0x10; // Port D pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRD_PD3 = 0x8; // Port D pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRD_PD2 = 0x4; // Port D pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRD_PD1 = 0x2; // Port D pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRD_PD0 = 0x1; // Port D pull-down bit y (y=0..15)


    static constexpr uint32_t PUCRF_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PUCRF_PU2 = 0x4; // Port F pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRF_PU1 = 0x2; // Port F pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRF_PU0 = 0x1; // Port F pull-up bit y (y=0..15)

    static constexpr uint32_t PDCRF_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PDCRF_PD2 = 0x4; // Port F pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRF_PD1 = 0x2; // Port F pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRF_PD0 = 0x1; // Port F pull-down bit y (y=0..15)
};

// PWR: Power control

struct stm32g070_pwr_t
{
    volatile uint32_t CR1; // Power control register 1
    volatile uint32_t CR2; // Power control register 2
    volatile uint32_t CR3; // Power control register 3
    volatile uint32_t CR4; // Power control register 4
    volatile uint32_t SR1; // Power status register 1
    volatile uint32_t SR2; // Power status register 2
    volatile uint32_t SCR; // Power status clear register
    reserved_t<0x1> _0x1c;
    volatile uint32_t PUCRA; // Power Port A pull-up control register
    volatile uint32_t PDCRA; // Power Port A pull-down control register
    volatile uint32_t PUCRB; // Power Port B pull-up control register
    volatile uint32_t PDCRB; // Power Port B pull-down control register
    volatile uint32_t PUCRC; // Power Port C pull-up control register
    volatile uint32_t PDCRC; // Power Port C pull-down control register
    volatile uint32_t PUCRD; // Power Port D pull-up control register
    volatile uint32_t PDCRD; // Power Port D pull-down control register
    reserved_t<0x2> _0x40;
    volatile uint32_t PUCRF; // Power Port F pull-up control register
    volatile uint32_t PDCRF; // Power Port F pull-down control register

    static constexpr uint32_t CR1_RESET_VALUE = 0x200; // Reset value
    static constexpr uint32_t CR1_LPR = 0x4000; // Low-power run
    typedef bit_field_t<9, 0x3> CR1_VOS; // Voltage scaling range selection
    static constexpr uint32_t CR1_DBP = 0x100; // Disable backup domain write protection
    static constexpr uint32_t CR1_FPD_LPSLP = 0x20; // Flash memory powered down during Low-power sleep mode
    static constexpr uint32_t CR1_FPD_LPRUN = 0x10; // Flash memory powered down during Low-power run mode
    static constexpr uint32_t CR1_FPD_STOP = 0x8; // Flash memory powered down during Stop mode
    typedef bit_field_t<0, 0x7> CR1_LPMS; // Low-power mode selection

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR2_PVDE = 0x1; // Power voltage detector enable
    typedef bit_field_t<1, 0x7> CR2_PVDFT; // Power voltage detector falling threshold selection
    typedef bit_field_t<4, 0x7> CR2_PVDRT; // Power voltage detector rising threshold selection

    static constexpr uint32_t CR3_RESET_VALUE = 0x8000; // Reset value
    static constexpr uint32_t CR3_EWUP1 = 0x1; // Enable Wakeup pin WKUP1
    static constexpr uint32_t CR3_EWUP2 = 0x2; // Enable Wakeup pin WKUP2
    static constexpr uint32_t CR3_EWUP4 = 0x8; // Enable Wakeup pin WKUP4
    static constexpr uint32_t CR3_EWUP5 = 0x10; // Enable WKUP5 wakeup pin
    static constexpr uint32_t CR3_EWUP6 = 0x20; // Enable WKUP6 wakeup pin
    static constexpr uint32_t CR3_RRS = 0x100; // SRAM retention in Standby mode
    static constexpr uint32_t CR3_ULPEN = 0x200; // Enable the periodical sampling mode for PDR detection
    static constexpr uint32_t CR3_APC = 0x400; // Apply pull-up and pull-down configuration
    static constexpr uint32_t CR3_EIWUL = 0x8000; // Enable internal wakeup line

    static constexpr uint32_t CR4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR4_WP1 = 0x1; // Wakeup pin WKUP1 polarity
    static constexpr uint32_t CR4_WP2 = 0x2; // Wakeup pin WKUP2 polarity
    static constexpr uint32_t CR4_WP4 = 0x8; // Wakeup pin WKUP4 polarity
    static constexpr uint32_t CR4_WP5 = 0x10; // Wakeup pin WKUP5 polarity
    static constexpr uint32_t CR4_WP6 = 0x20; // WKUP6 wakeup pin polarity
    static constexpr uint32_t CR4_VBE = 0x100; // VBAT battery charging enable
    static constexpr uint32_t CR4_VBRS = 0x200; // VBAT battery charging resistor selection

    static constexpr uint32_t SR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR1_WUF1 = 0x1; // Wakeup flag 1
    static constexpr uint32_t SR1_WUF2 = 0x2; // Wakeup flag 2
    static constexpr uint32_t SR1_WUF4 = 0x8; // Wakeup flag 4
    static constexpr uint32_t SR1_WUF5 = 0x10; // Wakeup flag 5
    static constexpr uint32_t SR1_WUF6 = 0x20; // Wakeup flag 6
    static constexpr uint32_t SR1_SBF = 0x100; // Standby flag
    static constexpr uint32_t SR1_WUFI = 0x8000; // Wakeup flag internal

    static constexpr uint32_t SR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR2_PVDO = 0x800; // Power voltage detector output
    static constexpr uint32_t SR2_VOSF = 0x400; // Voltage scaling flag
    static constexpr uint32_t SR2_REGLPF = 0x200; // Low-power regulator flag
    static constexpr uint32_t SR2_REGLPS = 0x100; // Low-power regulator started
    static constexpr uint32_t SR2_FLASH_RDY = 0x80; // Flash ready flag

    static constexpr uint32_t SCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SCR_CSBF = 0x100; // Clear standby flag
    static constexpr uint32_t SCR_CWUF6 = 0x20; // Clear wakeup flag 6
    static constexpr uint32_t SCR_CWUF5 = 0x10; // Clear wakeup flag 5
    static constexpr uint32_t SCR_CWUF4 = 0x8; // Clear wakeup flag 4
    static constexpr uint32_t SCR_CWUF2 = 0x2; // Clear wakeup flag 2
    static constexpr uint32_t SCR_CWUF1 = 0x1; // Clear wakeup flag 1


    static constexpr uint32_t PUCRA_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PUCRA_PU15 = 0x8000; // Port A pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRA_PU14 = 0x4000; // Port A pull-up bit y (y=0..15)
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
    static constexpr uint32_t PDCRA_PD15 = 0x8000; // Port A pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRA_PD14 = 0x4000; // Port A pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRA_PD13 = 0x2000; // Port A pull-down bit y (y=0..15)
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
    static constexpr uint32_t PDCRB_PD4 = 0x10; // Port B pull-down bit y (y=0..15)
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
    static constexpr uint32_t PUCRD_PU9 = 0x200; // Port D pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRD_PU8 = 0x100; // Port D pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRD_PU6 = 0x40; // Port D pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRD_PU5 = 0x20; // Port D pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRD_PU4 = 0x10; // Port D pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRD_PU3 = 0x8; // Port D pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRD_PU2 = 0x4; // Port D pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRD_PU1 = 0x2; // Port D pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRD_PU0 = 0x1; // Port D pull-up bit y (y=0..15)

    static constexpr uint32_t PDCRD_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PDCRD_PD9 = 0x200; // Port D pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRD_PD8 = 0x100; // Port D pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRD_PD6 = 0x40; // Port D pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRD_PD5 = 0x20; // Port D pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRD_PD4 = 0x10; // Port D pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRD_PD3 = 0x8; // Port D pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRD_PD2 = 0x4; // Port D pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRD_PD1 = 0x2; // Port D pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRD_PD0 = 0x1; // Port D pull-down bit y (y=0..15)


    static constexpr uint32_t PUCRF_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PUCRF_PU2 = 0x4; // Port F pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRF_PU1 = 0x2; // Port F pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRF_PU0 = 0x1; // Port F pull-up bit y (y=0..15)

    static constexpr uint32_t PDCRF_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PDCRF_PD2 = 0x4; // Port F pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRF_PD1 = 0x2; // Port F pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRF_PD0 = 0x1; // Port F pull-down bit y (y=0..15)
};

// PWR: Power control

struct stm32g0b1_pwr_t
{
    volatile uint32_t CR1; // Power control register 1
    volatile uint32_t CR2; // Power control register 2
    volatile uint32_t CR3; // Power control register 3
    volatile uint32_t CR4; // Power control register 4
    volatile uint32_t SR1; // Power status register 1
    volatile uint32_t SR2; // Power status register 2
    volatile uint32_t SCR; // Power status clear register
    reserved_t<0x1> _0x1c;
    volatile uint32_t PUCRA; // Power Port A pull-up control register
    volatile uint32_t PDCRA; // Power Port A pull-down control register
    volatile uint32_t PUCRB; // Power Port B pull-up control register
    volatile uint32_t PDCRB; // Power Port B pull-down control register
    volatile uint32_t PUCRC; // Power Port C pull-up control register
    volatile uint32_t PDCRC; // Power Port C pull-down control register
    volatile uint32_t PUCRD; // Power Port D pull-up control register
    volatile uint32_t PDCRD; // Power Port D pull-down control register
    volatile uint32_t PUCRE; // Power Port E pull-UP control register
    volatile uint32_t PDCRE; // Power Port E pull-down control register
    volatile uint32_t PUCRF; // Power Port F pull-up control register
    volatile uint32_t PDCRF; // Power Port F pull-down control register

    static constexpr uint32_t CR1_RESET_VALUE = 0x208; // Reset value
    static constexpr uint32_t CR1_LPR = 0x4000; // Low-power run
    typedef bit_field_t<9, 0x3> CR1_VOS; // Voltage scaling range selection
    static constexpr uint32_t CR1_DBP = 0x100; // Disable backup domain write protection
    static constexpr uint32_t CR1_FPD_LPSLP = 0x20; // Flash memory powered down during Low-power sleep mode
    static constexpr uint32_t CR1_FPD_LPRUN = 0x10; // Flash memory powered down during Low-power run mode
    static constexpr uint32_t CR1_FPD_STOP = 0x8; // Flash memory powered down during Stop mode
    typedef bit_field_t<0, 0x7> CR1_LPMS; // Low-power mode selection

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR2_PVDE = 0x1; // Power voltage detector enable
    typedef bit_field_t<1, 0x7> CR2_PVDFT; // Power voltage detector falling threshold selection
    typedef bit_field_t<4, 0x7> CR2_PVDRT; // Power voltage detector rising threshold selection
    static constexpr uint32_t CR2_PVMENDAC = 0x80; // PVMENDAC
    static constexpr uint32_t CR2_PVMENUSB = 0x100; // PVMENUSB
    static constexpr uint32_t CR2_IOSV = 0x200; // IOSV
    static constexpr uint32_t CR2_USV = 0x400; // USV

    static constexpr uint32_t CR3_RESET_VALUE = 0x8000; // Reset value
    static constexpr uint32_t CR3_EWUP1 = 0x1; // Enable Wakeup pin WKUP1
    static constexpr uint32_t CR3_EWUP2 = 0x2; // Enable Wakeup pin WKUP2
    static constexpr uint32_t CR3_EWUP3 = 0x4; // Enable Wakeup pin WKUP3
    static constexpr uint32_t CR3_EWUP4 = 0x8; // Enable Wakeup pin WKUP4
    static constexpr uint32_t CR3_EWUP5 = 0x10; // Enable WKUP5 wakeup pin
    static constexpr uint32_t CR3_EWUP6 = 0x20; // Enable WKUP6 wakeup pin
    static constexpr uint32_t CR3_RRS = 0x100; // SRAM retention in Standby mode
    static constexpr uint32_t CR3_ENB_ULP = 0x200; // Ultra-low-power enable
    static constexpr uint32_t CR3_APC = 0x400; // Apply pull-up and pull-down configuration
    static constexpr uint32_t CR3_EIWUL = 0x8000; // Enable internal wakeup line

    static constexpr uint32_t CR4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR4_WP1 = 0x1; // Wakeup pin WKUP1 polarity
    static constexpr uint32_t CR4_WP2 = 0x2; // Wakeup pin WKUP2 polarity
    static constexpr uint32_t CR4_WP3 = 0x4; // Wakeup pin WKUP3 polarity
    static constexpr uint32_t CR4_WP4 = 0x8; // Wakeup pin WKUP4 polarity
    static constexpr uint32_t CR4_WP5 = 0x10; // Wakeup pin WKUP5 polarity
    static constexpr uint32_t CR4_WP6 = 0x20; // WKUP6 wakeup pin polarity
    static constexpr uint32_t CR4_VBE = 0x100; // VBAT battery charging enable
    static constexpr uint32_t CR4_VBRS = 0x200; // VBAT battery charging resistor selection

    static constexpr uint32_t SR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR1_WUF1 = 0x1; // Wakeup flag 1
    static constexpr uint32_t SR1_WUF2 = 0x2; // Wakeup flag 2
    static constexpr uint32_t SR1_WUF3 = 0x4; // Wakeup flag 3
    static constexpr uint32_t SR1_WUF4 = 0x8; // Wakeup flag 4
    static constexpr uint32_t SR1_WUF5 = 0x10; // Wakeup flag 5
    static constexpr uint32_t SR1_WUF6 = 0x20; // Wakeup flag 6
    static constexpr uint32_t SR1_SBF = 0x100; // Standby flag
    static constexpr uint32_t SR1_WUFI = 0x8000; // Wakeup flag internal

    static constexpr uint32_t SR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR2_PVMODAC = 0x8000; // VDDA monitoring output flag
    static constexpr uint32_t SR2_PVMOUSB = 0x1000; // USB supply voltage monitoring output flag
    static constexpr uint32_t SR2_PVDO = 0x800; // Power voltage detector output
    static constexpr uint32_t SR2_VOSF = 0x400; // Voltage scaling flag
    static constexpr uint32_t SR2_REGLPF = 0x200; // Low-power regulator flag
    static constexpr uint32_t SR2_REGLPS = 0x100; // Low-power regulator started
    static constexpr uint32_t SR2_FLASH_RDY = 0x80; // Flash ready flag

    static constexpr uint32_t SCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SCR_CSBF = 0x100; // Clear standby flag
    static constexpr uint32_t SCR_CWUF6 = 0x20; // Clear wakeup flag 6
    static constexpr uint32_t SCR_CWUF5 = 0x10; // Clear wakeup flag 5
    static constexpr uint32_t SCR_CWUF4 = 0x8; // Clear wakeup flag 4
    static constexpr uint32_t SCR_CWUF3 = 0x4; // Clear wakeup flag 3
    static constexpr uint32_t SCR_CWUF2 = 0x2; // Clear wakeup flag 2
    static constexpr uint32_t SCR_CWUF1 = 0x1; // Clear wakeup flag 1


    static constexpr uint32_t PUCRA_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PUCRA_PU15 = 0x8000; // Port A pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRA_PU14 = 0x4000; // Port A pull-up bit y (y=0..15)
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
    static constexpr uint32_t PDCRA_PD15 = 0x8000; // Port A pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRA_PD14 = 0x4000; // Port A pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRA_PD13 = 0x2000; // Port A pull-down bit y (y=0..15)
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
    static constexpr uint32_t PDCRB_PD4 = 0x10; // Port B pull-down bit y (y=0..15)
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
    static constexpr uint32_t PUCRE_PU15 = 0x8000; // Port E pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRE_PU14 = 0x4000; // Port E pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRE_PU13 = 0x2000; // Port E pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRE_PU12 = 0x1000; // Port E pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRE_PU11 = 0x800; // Port E pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRE_PU10 = 0x400; // Port E pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRE_PU9 = 0x200; // Port E pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRE_PU8 = 0x100; // Port E pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRE_PU7 = 0x80; // Port E pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRE_PU6 = 0x40; // Port E pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRE_PU5 = 0x20; // Port E pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRE_PU4 = 0x10; // Port E pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRE_PU3 = 0x8; // Port E pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRE_PU2 = 0x4; // Port E pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRE_PU1 = 0x2; // Port E pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRE_PU0 = 0x1; // Port E pull-up bit y (y=0..15)

    static constexpr uint32_t PDCRE_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PDCRE_PD15 = 0x8000; // Port E pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRE_PD14 = 0x4000; // Port E pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRE_PD13 = 0x2000; // Port E pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRE_PD12 = 0x1000; // Port E pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRE_PD11 = 0x800; // Port E pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRE_PD10 = 0x400; // Port E pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRE_PD9 = 0x200; // Port E pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRE_PD8 = 0x100; // Port E pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRE_PD7 = 0x80; // Port E pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRE_PD6 = 0x40; // Port E pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRE_PD5 = 0x20; // Port E pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRE_PD4 = 0x10; // Port E pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRE_PD3 = 0x8; // Port E pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRE_PD2 = 0x4; // Port E pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRE_PD1 = 0x2; // Port E pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRE_PD0 = 0x1; // Port E pull-down bit y (y=0..15)

    static constexpr uint32_t PUCRF_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PUCRF_PU13 = 0x2000; // Port F pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRF_PU12 = 0x1000; // Port F pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRF_PU11 = 0x800; // Port F pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRF_PU10 = 0x400; // Port F pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRF_PU9 = 0x200; // Port F pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRF_PU8 = 0x100; // Port F pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRF_PU7 = 0x80; // Port F pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRF_PU6 = 0x40; // Port F pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRF_PU5 = 0x20; // Port F pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRF_PU4 = 0x10; // Port F pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRF_PU3 = 0x8; // Port F pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRF_PU2 = 0x4; // Port F pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRF_PU1 = 0x2; // Port F pull-up bit y (y=0..15)
    static constexpr uint32_t PUCRF_PU0 = 0x1; // Port F pull-up bit y (y=0..15)

    static constexpr uint32_t PDCRF_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PDCRF_PD13 = 0x2000; // Port F pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRF_PD12 = 0x1000; // Port F pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRF_PD11 = 0x800; // Port F pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRF_PD10 = 0x400; // Port F pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRF_PD9 = 0x200; // Port F pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRF_PD8 = 0x100; // Port F pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRF_PD7 = 0x80; // Port F pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRF_PD6 = 0x40; // Port F pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRF_PD5 = 0x20; // Port F pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRF_PD4 = 0x10; // Port F pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRF_PD3 = 0x8; // Port F pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRF_PD2 = 0x4; // Port F pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRF_PD1 = 0x2; // Port F pull-down bit y (y=0..15)
    static constexpr uint32_t PDCRF_PD0 = 0x1; // Port F pull-down bit y (y=0..15)
};

template<>
struct peripheral_t<STM32G030, PWR>
{
    static constexpr periph_t P = PWR;
    using T = stm32g030_pwr_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G031, PWR>
{
    static constexpr periph_t P = PWR;
    using T = stm32g030_pwr_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G041, PWR>
{
    static constexpr periph_t P = PWR;
    using T = stm32g030_pwr_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G070, PWR>
{
    static constexpr periph_t P = PWR;
    using T = stm32g070_pwr_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G071, PWR>
{
    static constexpr periph_t P = PWR;
    using T = stm32g070_pwr_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G081, PWR>
{
    static constexpr periph_t P = PWR;
    using T = stm32g070_pwr_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0B1, PWR>
{
    static constexpr periph_t P = PWR;
    using T = stm32g0b1_pwr_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0C1, PWR>
{
    static constexpr periph_t P = PWR;
    using T = stm32g0b1_pwr_t;
    static T& V;
};

using pwr_t = peripheral_t<svd, PWR>;

template<int INST> struct pwr_traits {};

template<> struct pwr_traits<0>
{
    using pwr = pwr_t;
    static constexpr clock_source_t CLOCK = APB1_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR |= RCC::T::APB1ENR_PWREN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR &= ~RCC::T::APB1ENR_PWREN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.APB1SMENR |= RCC::T::APB1SMENR_PWRSMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.APB1SMENR &= ~RCC::T::APB1SMENR_PWRSMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR |= RCC::T::APB1RSTR_PWRRST;
    }
};
