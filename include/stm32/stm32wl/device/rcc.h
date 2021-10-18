#pragma once

////
//
//      STM32WL RCC peripherals
//
///

// RCC: Reset and clock control

struct stm32wl5x_cm0p_rcc_t
{
    volatile uint32_t CR; // Clock control register
    volatile uint32_t ICSCR; // Internal clock sources calibration register
    volatile uint32_t CFGR; // Clock configuration register
    volatile uint32_t PLLCFGR; // PLL configuration register
    reserved_t<0x2> _0x10;
    volatile uint32_t CIER; // Clock interrupt enable register
    volatile uint32_t CIFR; // Clock interrupt flag register
    volatile uint32_t CICR; // Clock interrupt clear register
    reserved_t<0x1> _0x24;
    volatile uint32_t AHB1RSTR; // AHB1 peripheral reset register
    volatile uint32_t AHB2RSTR; // AHB2 peripheral reset register
    volatile uint32_t AHB3RSTR; // AHB3 peripheral reset register
    reserved_t<0x1> _0x34;
    volatile uint32_t APB1RSTR1; // APB1 peripheral reset register 1
    volatile uint32_t APB1RSTR2; // APB1 peripheral reset register 2
    volatile uint32_t APB2RSTR; // APB2 peripheral reset register
    volatile uint32_t APB3RSTR; // APB3 peripheral reset register
    volatile uint32_t AHB1ENR; // AHB1 peripheral clock enable register
    volatile uint32_t AHB2ENR; // AHB2 peripheral clock enable register
    volatile uint32_t AHB3ENR; // AHB3 peripheral clock enable register
    reserved_t<0x1> _0x54;
    volatile uint32_t APB1ENR1; // APB1 peripheral clock enable register 1
    volatile uint32_t APB1ENR2; // APB1 peripheral clock enable register 2
    volatile uint32_t APB2ENR; // APB2 peripheral clock enable register
    volatile uint32_t APB3ENR; // APB3 peripheral clock enable register
    volatile uint32_t AHB1SMENR; // AHB1 peripheral clocks enable in Sleep modes register
    volatile uint32_t AHB2SMENR; // AHB2 peripheral clocks enable in Sleep modes register
    volatile uint32_t AHB3SMENR; // AHB3 peripheral clocks enable in Sleep and Stop modes register
    reserved_t<0x1> _0x74;
    volatile uint32_t APB1SMENR1; // APB1 peripheral clocks enable in Sleep mode register 1
    volatile uint32_t APB1SMENR2; // APB1 peripheral clocks enable in Sleep mode register 2
    volatile uint32_t APB2SMENR; // APB2 peripheral clocks enable in Sleep mode register
    volatile uint32_t APB3SMENR; // APB3 peripheral clock enable in Sleep mode register
    volatile uint32_t CCIPR; // Peripherals independent clock configuration register
    reserved_t<0x1> _0x8c;
    volatile uint32_t BDCR; // Backup domain control register
    volatile uint32_t CSR; // Control/status register
    reserved_t<0x1c> _0x98;
    volatile uint32_t EXTCFGR; // Extended clock recovery register
    reserved_t<0xf> _0x10c;
    volatile uint32_t C2AHB1ENR; // CPU2 AHB1 peripheral clock enable register
    volatile uint32_t C2AHB2ENR; // CPU2 AHB2 peripheral clock enable register
    volatile uint32_t C2AHB3ENR; // CPU2 AHB3 peripheral clock enable register [dual core device only]
    reserved_t<0x1> _0x154;
    volatile uint32_t C2APB1ENR1; // CPU2 APB1 peripheral clock enable register 1 [dual core device only]
    volatile uint32_t C2APB1ENR2; // CPU2 APB1 peripheral clock enable register 2 [dual core device only]
    volatile uint32_t C2APB2ENR; // CPU2 APB2 peripheral clock enable register [dual core device only]
    volatile uint32_t C2APB3ENR; // CPU2 APB3 peripheral clock enable register [dual core device only]
    volatile uint32_t C2AHB1SMENR; // CPU2 AHB1 peripheral clocks enable in Sleep modes register [dual core device only]
    volatile uint32_t C2AHB2SMENR; // CPU2 AHB2 peripheral clocks enable in Sleep modes register [dual core device only]
    volatile uint32_t C2AHB3SMENR; // CPU2 AHB3 peripheral clocks enable in Sleep mode register [dual core device only]
    reserved_t<0x1> _0x174;
    volatile uint32_t C2APB1SMENR1; // CPU2 APB1 peripheral clocks enable in Sleep mode register 1 [dual core device only]
    volatile uint32_t C2APB1SMENR2; // CPU2 APB1 peripheral clocks enable in Sleep mode register 2 [dual core device only]
    volatile uint32_t C2APB2SMENR; // CPU2 APB2 peripheral clocks enable in Sleep mode register [dual core device only]
    volatile uint32_t C2APB3SMENR; // CPU2 APB3 peripheral clock enable in Sleep mode register [dual core device only]

    static constexpr uint32_t CR_RESET_VALUE = 0x61; // Reset value
    static constexpr uint32_t CR_PLLRDY = 0x2000000; // Main PLL clock ready flag
    static constexpr uint32_t CR_PLLON = 0x1000000; // Main PLL enable
    static constexpr uint32_t CR_HSEBYPPWR = 0x200000; // Enable HSE32 VDDTCXO output on package pin PB0-VDDTCXO.
    static constexpr uint32_t CR_HSEPRE = 0x100000; // HSE32 sysclk prescaler
    static constexpr uint32_t CR_CSSON = 0x80000; // HSE32 Clock security system enable
    static constexpr uint32_t CR_HSERDY = 0x20000; // HSE32 clock ready flag
    static constexpr uint32_t CR_HSEON = 0x10000; // HSE32 clock enable
    static constexpr uint32_t CR_HSIKERDY = 0x1000; // HSI16 kernel clock ready flag for peripherals requests.
    static constexpr uint32_t CR_HSIASFS = 0x800; // HSI16 automatic start from Stop
    static constexpr uint32_t CR_HSIRDY = 0x400; // HSI16 clock ready flag. (After wakeup from Stop this bit will be read 1 once the HSI16 is ready)
    static constexpr uint32_t CR_HSIKERON = 0x200; // HSI16 always enable for peripheral kernel clocks.
    static constexpr uint32_t CR_HSION = 0x100; // HSI16 clock enable
    typedef bit_field_t<4, 0xf> CR_MSIRANGE; // MSI clock ranges
    static constexpr uint32_t CR_MSIRGSEL = 0x8; // MSI range control selection
    static constexpr uint32_t CR_MSIPLLEN = 0x4; // MSI clock PLL enable
    static constexpr uint32_t CR_MSIRDY = 0x2; // MSI clock ready flag (After reset this bit will be read 1 once the MSI is ready)
    static constexpr uint32_t CR_MSION = 0x1; // MSI clock enable

    static constexpr uint32_t ICSCR_RESET_VALUE = 0x40000000; // Reset value
    typedef bit_field_t<24, 0x7f> ICSCR_HSITRIM; // HSI16 clock trimming
    typedef bit_field_t<16, 0xff> ICSCR_HSICAL; // HSI16 clock calibration
    typedef bit_field_t<8, 0xff> ICSCR_MSITRIM; // MSI clock trimming
    typedef bit_field_t<0, 0xff> ICSCR_MSICAL; // MSI clock calibration

    static constexpr uint32_t CFGR_RESET_VALUE = 0x70000; // Reset value
    typedef bit_field_t<28, 0x7> CFGR_MCOPRE; // Microcontroller clock output prescaler
    typedef bit_field_t<24, 0xf> CFGR_MCOSEL; // Microcontroller clock output
    static constexpr uint32_t CFGR_PPRE2F = 0x40000; // PCLK2 prescaler flag (APB2)
    static constexpr uint32_t CFGR_PPRE1F = 0x20000; // PCLK1 prescaler flag (APB1)
    static constexpr uint32_t CFGR_HPREF = 0x10000; // HCLK1 prescaler flag (CPU1, AHB1, AHB2, and SRAM1)
    static constexpr uint32_t CFGR_STOPWUCK = 0x8000; // Wakeup from Stop and CSS backup clock selection
    typedef bit_field_t<11, 0x7> CFGR_PPRE2; // PCLK2 high-speed prescaler (APB2)
    typedef bit_field_t<8, 0x7> CFGR_PPRE1; // PCLK1 low-speed prescaler (APB1)
    typedef bit_field_t<4, 0xf> CFGR_HPRE; // HCLK1 prescaler (CPU1, AHB1, AHB2, and SRAM1.)
    typedef bit_field_t<2, 0x3> CFGR_SWS; // System clock switch status
    typedef bit_field_t<0, 0x3> CFGR_SW; // System clock switch

    static constexpr uint32_t PLLCFGR_RESET_VALUE = 0x22040100; // Reset value
    typedef bit_field_t<29, 0x7> PLLCFGR_PLLR; // Main PLL division factor for PLLRCLK
    static constexpr uint32_t PLLCFGR_PLLREN = 0x10000000; // Main PLL PLLRCLK output enable
    typedef bit_field_t<25, 0x7> PLLCFGR_PLLQ; // Main PLL division factor for PLLQCLK
    static constexpr uint32_t PLLCFGR_PLLQEN = 0x1000000; // Main PLL PLLQCLK output enable
    typedef bit_field_t<17, 0x1f> PLLCFGR_PLLP; // Main PLL division factor for PLLPCLK.
    static constexpr uint32_t PLLCFGR_PLLPEN = 0x10000; // Main PLL PLLPCLK output enable
    typedef bit_field_t<8, 0x7f> PLLCFGR_PLLN; // Main PLL multiplication factor for VCO
    typedef bit_field_t<4, 0x7> PLLCFGR_PLLM; // Division factor for the main PLL input clock
    typedef bit_field_t<0, 0x3> PLLCFGR_PLLSRC; // Main PLL entry clock source


    static constexpr uint32_t CIER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CIER_LSECSSIE = 0x200; // LSE clock security system interrupt enable
    static constexpr uint32_t CIER_PLLRDYIE = 0x20; // PLL ready interrupt enable
    static constexpr uint32_t CIER_HSERDYIE = 0x10; // HSE32 ready interrupt enable
    static constexpr uint32_t CIER_HSIRDYIE = 0x8; // HSI16 ready interrupt enable
    static constexpr uint32_t CIER_MSIRDYIE = 0x4; // MSI ready interrupt enable
    static constexpr uint32_t CIER_LSERDYIE = 0x2; // LSE ready interrupt enable
    static constexpr uint32_t CIER_LSIRDYIE = 0x1; // LSI ready interrupt enable

    static constexpr uint32_t CIFR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CIFR_LSECSSF = 0x200; // LSE Clock security system interrupt flag
    static constexpr uint32_t CIFR_CSSF = 0x100; // HSE32 Clock security system interrupt flag
    static constexpr uint32_t CIFR_PLLRDYF = 0x20; // PLL ready interrupt flag
    static constexpr uint32_t CIFR_HSERDYF = 0x10; // HSE32 ready interrupt flag
    static constexpr uint32_t CIFR_HSIRDYF = 0x8; // HSI16 ready interrupt flag
    static constexpr uint32_t CIFR_MSIRDYF = 0x4; // MSI ready interrupt flag
    static constexpr uint32_t CIFR_LSERDYF = 0x2; // LSE ready interrupt flag
    static constexpr uint32_t CIFR_LSIRDYF = 0x1; // LSI ready interrupt flag

    static constexpr uint32_t CICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CICR_LSECSSC = 0x200; // LSE Clock security system interrupt clear
    static constexpr uint32_t CICR_CSSC = 0x100; // HSE32 Clock security system interrupt clear
    static constexpr uint32_t CICR_PLLRDYC = 0x20; // PLL ready interrupt clear
    static constexpr uint32_t CICR_HSERDYC = 0x10; // HSE32 ready interrupt clear
    static constexpr uint32_t CICR_HSIRDYC = 0x8; // HSI16 ready interrupt clear
    static constexpr uint32_t CICR_MSIRDYC = 0x4; // MSI ready interrupt clear
    static constexpr uint32_t CICR_LSERDYC = 0x2; // LSE ready interrupt clear
    static constexpr uint32_t CICR_LSIRDYC = 0x1; // LSI ready interrupt clear


    static constexpr uint32_t AHB1RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB1RSTR_CRCRST = 0x1000; // CRC reset
    static constexpr uint32_t AHB1RSTR_DMAMUXRST = 0x4; // DMAMUX1 reset
    static constexpr uint32_t AHB1RSTR_DMA2RST = 0x2; // DMA2 reset
    static constexpr uint32_t AHB1RSTR_DMA1RST = 0x1; // DMA1 reset

    static constexpr uint32_t AHB2RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB2RSTR_GPIOHRST = 0x80; // IO port H reset
    static constexpr uint32_t AHB2RSTR_GPIOCRST = 0x4; // IO port C reset
    static constexpr uint32_t AHB2RSTR_GPIOBRST = 0x2; // IO port B reset
    static constexpr uint32_t AHB2RSTR_GPIOARST = 0x1; // IO port A reset

    static constexpr uint32_t AHB3RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB3RSTR_FLASHRST = 0x2000000; // Flash interface reset
    static constexpr uint32_t AHB3RSTR_IPCCRST = 0x100000; // IPCCRST
    static constexpr uint32_t AHB3RSTR_HSEMRST = 0x80000; // HSEMRST
    static constexpr uint32_t AHB3RSTR_RNGRST = 0x40000; // RNGRST
    static constexpr uint32_t AHB3RSTR_AESRST = 0x20000; // AESRST
    static constexpr uint32_t AHB3RSTR_PKARST = 0x10000; // PKARST


    static constexpr uint32_t APB1RSTR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1RSTR1_LPTIM1RST = 0x80000000; // Low Power Timer 1 reset
    static constexpr uint32_t APB1RSTR1_DACRST = 0x20000000; // DAC1 reset
    static constexpr uint32_t APB1RSTR1_I2C3RST = 0x800000; // I2C3 reset
    static constexpr uint32_t APB1RSTR1_I2C2RST = 0x400000; // I2C2 reset
    static constexpr uint32_t APB1RSTR1_I2C1RST = 0x200000; // I2C1 reset
    static constexpr uint32_t APB1RSTR1_USART2RST = 0x20000; // USART2 reset
    static constexpr uint32_t APB1RSTR1_SPI2S2RST = 0x4000; // SPI2S2 reset
    static constexpr uint32_t APB1RSTR1_TIM2RST = 0x1; // TIM2 timer reset

    static constexpr uint32_t APB1RSTR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1RSTR2_LPTIM3RST = 0x40; // Low-power timer 3 reset
    static constexpr uint32_t APB1RSTR2_LPTIM2RST = 0x20; // Low-power timer 2 reset
    static constexpr uint32_t APB1RSTR2_LPUART1RST = 0x1; // Low-power UART 1 reset

    static constexpr uint32_t APB2RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2RSTR_TIM17RST = 0x40000; // TIM17 timer reset
    static constexpr uint32_t APB2RSTR_TIM16RST = 0x20000; // TIM16 timer reset
    static constexpr uint32_t APB2RSTR_USART1RST = 0x4000; // USART1 reset
    static constexpr uint32_t APB2RSTR_SPI1RST = 0x1000; // SPI1 reset
    static constexpr uint32_t APB2RSTR_TIM1RST = 0x800; // TIM1 timer reset
    static constexpr uint32_t APB2RSTR_ADC1RST = 0x200; // ADC reset

    static constexpr uint32_t APB3RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB3RSTR_SUBGHZSPIRST = 0x1; // Sub-GHz radio SPI reset

    static constexpr uint32_t AHB1ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB1ENR_CRCEN = 0x1000; // CPU1 CRC clock enable
    static constexpr uint32_t AHB1ENR_DMAMUXEN = 0x4; // CPU1 DMAMUX1 clock enable
    static constexpr uint32_t AHB1ENR_DMA2EN = 0x2; // CPU1 DMA2 clock enable
    static constexpr uint32_t AHB1ENR_DMA1EN = 0x1; // CPU1 DMA1 clock enable

    static constexpr uint32_t AHB2ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB2ENR_GPIOHEN = 0x80; // CPU1 IO port H clock enable
    static constexpr uint32_t AHB2ENR_GPIOCEN = 0x4; // CPU1 IO port C clock enable
    static constexpr uint32_t AHB2ENR_GPIOBEN = 0x2; // CPU1 IO port B clock enable
    static constexpr uint32_t AHB2ENR_GPIOAEN = 0x1; // CPU1 IO port A clock enable

    static constexpr uint32_t AHB3ENR_RESET_VALUE = 0x2080000; // Reset value
    static constexpr uint32_t AHB3ENR_FLASHEN = 0x2000000; // CPU1 Flash interface clock enable
    static constexpr uint32_t AHB3ENR_IPCCEN = 0x100000; // IPCCEN
    static constexpr uint32_t AHB3ENR_HSEMEN = 0x80000; // HSEMEN
    static constexpr uint32_t AHB3ENR_RNGEN = 0x40000; // RNGEN
    static constexpr uint32_t AHB3ENR_AESEN = 0x20000; // AESEN
    static constexpr uint32_t AHB3ENR_PKAEN = 0x10000; // PKAEN


    static constexpr uint32_t APB1ENR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1ENR1_LPTIM1EN = 0x80000000; // CPU1 Low power timer 1 clocks enable
    static constexpr uint32_t APB1ENR1_DAC1EN = 0x20000000; // CPU1 DAC1 clock enable
    static constexpr uint32_t APB1ENR1_I2C3EN = 0x800000; // CPU1 I2C3 clocks enable
    static constexpr uint32_t APB1ENR1_I2C2EN = 0x400000; // CPU1 I2C2 clocks enable
    static constexpr uint32_t APB1ENR1_I2C1EN = 0x200000; // CPU1 I2C1 clocks enable
    static constexpr uint32_t APB1ENR1_USART2EN = 0x20000; // CPU1 USART2 clock enable
    static constexpr uint32_t APB1ENR1_SPI2S2EN = 0x4000; // CPU1 SPI2S2 clock enable
    static constexpr uint32_t APB1ENR1_WWDGEN = 0x800; // CPU1 Window watchdog clock enable
    static constexpr uint32_t APB1ENR1_RTCAPBEN = 0x400; // CPU1 RTC APB clock enable
    static constexpr uint32_t APB1ENR1_TIM2EN = 0x1; // CPU1 TIM2 timer clock enable

    static constexpr uint32_t APB1ENR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1ENR2_LPTIM3EN = 0x40; // CPU1 Low power timer 3 clocks enable
    static constexpr uint32_t APB1ENR2_LPTIM2EN = 0x20; // CPU1 Low power timer 2 clocks enable
    static constexpr uint32_t APB1ENR2_LPUART1EN = 0x1; // CPU1 Low power UART 1 clocks enable

    static constexpr uint32_t APB2ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2ENR_TIM17EN = 0x40000; // CPU1 TIM17 timer clock enable
    static constexpr uint32_t APB2ENR_TIM16EN = 0x20000; // CPU1 TIM16 timer clock enable
    static constexpr uint32_t APB2ENR_USART1EN = 0x4000; // CPU1 USART1clocks enable
    static constexpr uint32_t APB2ENR_SPI1EN = 0x1000; // CPU1 SPI1 clock enable
    static constexpr uint32_t APB2ENR_TIM1EN = 0x800; // CPU1 TIM1 timer clock enable
    static constexpr uint32_t APB2ENR_ADC1EN = 0x200; // CPU1 ADC clocks enable

    static constexpr uint32_t APB3ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB3ENR_SUBGHZSPIEN = 0x1; // sub-GHz radio SPI clock enable

    static constexpr uint32_t AHB1SMENR_RESET_VALUE = 0x1007; // Reset value
    static constexpr uint32_t AHB1SMENR_CRCSMEN = 0x1000; // CRC clock enable during CPU1 CSleep mode.
    static constexpr uint32_t AHB1SMENR_DMAMUXSMEN = 0x4; // DMAMUX1 clock enable during CPU1 CSleep mode.
    static constexpr uint32_t AHB1SMENR_DMA2SMEN = 0x2; // DMA2 clock enable during CPU1 CSleep mode
    static constexpr uint32_t AHB1SMENR_DMA1SMEN = 0x1; // DMA1 clock enable during CPU1 CSleep mode.

    static constexpr uint32_t AHB2SMENR_RESET_VALUE = 0x87; // Reset value
    static constexpr uint32_t AHB2SMENR_GPIOHSMEN = 0x80; // IO port H clock enable during CPU1 CSleep mode.
    static constexpr uint32_t AHB2SMENR_GPIOCSMEN = 0x4; // IO port C clock enable during CPU1 CSleep mode.
    static constexpr uint32_t AHB2SMENR_GPIOBSMEN = 0x2; // IO port B clock enable during CPU1 CSleep mode.
    static constexpr uint32_t AHB2SMENR_GPIOASMEN = 0x1; // IO port A clock enable during CPU1 CSleep mode.

    static constexpr uint32_t AHB3SMENR_RESET_VALUE = 0x3870000; // Reset value
    static constexpr uint32_t AHB3SMENR_FLASHSMEN = 0x2000000; // Flash interface clock enable during CPU1 CSleep mode.
    static constexpr uint32_t AHB3SMENR_SRAM2SMEN = 0x1000000; // SRAM2 memory interface clock enable during CPU1 CSleep mode
    static constexpr uint32_t AHB3SMENR_SRAM1SMEN = 0x800000; // SRAM1 interface clock enable during CPU1 CSleep mode.
    static constexpr uint32_t AHB3SMENR_RNGSMEN = 0x40000; // True RNG clocks enable during CPU1 Csleep and CStop modes
    static constexpr uint32_t AHB3SMENR_AESSMEN = 0x20000; // AES accelerator clock enable during CPU1 CSleep mode.
    static constexpr uint32_t AHB3SMENR_PKASMEN = 0x10000; // PKA accelerator clock enable during CPU1 CSleep mode.


    static constexpr uint32_t APB1SMENR1_RESET_VALUE = 0xa0e24c01; // Reset value
    static constexpr uint32_t APB1SMENR1_LPTIM1SMEN = 0x80000000; // Low power timer 1 clock enable during CPU1 Csleep and CStop mode
    static constexpr uint32_t APB1SMENR1_DACSMEN = 0x20000000; // DAC1 clock enable during CPU1 CSleep mode.
    static constexpr uint32_t APB1SMENR1_I2C3SMEN = 0x800000; // I2C3 clock enable during CPU1 Csleep and CStop modes
    static constexpr uint32_t APB1SMENR1_I2C2SMEN = 0x400000; // I2C2 clock enable during CPU1 Csleep and CStop modes
    static constexpr uint32_t APB1SMENR1_I2C1SMEN = 0x200000; // I2C1 clock enable during CPU1 Csleep and CStop modes
    static constexpr uint32_t APB1SMENR1_USART2SMEN = 0x20000; // USART2 clock enable during CPU1 CSleep mode.
    static constexpr uint32_t APB1SMENR1_SPI2S2SMEN = 0x4000; // SPI2S2 clock enable during CPU1 CSleep mode.
    static constexpr uint32_t APB1SMENR1_WWDGSMEN = 0x800; // Window watchdog clocks enable during CPU1 CSleep mode.
    static constexpr uint32_t APB1SMENR1_RTCAPBSMEN = 0x400; // RTC bus clock enable during CPU1 CSleep mode.
    static constexpr uint32_t APB1SMENR1_TIM2SMEN = 0x1; // TIM2 timer clock enable during CPU1 CSleep mode.

    static constexpr uint32_t APB1SMENR2_RESET_VALUE = 0x61; // Reset value
    static constexpr uint32_t APB1SMENR2_LPTIM3SMEN = 0x40; // Low power timer 3 clock enable during CPU1 Csleep and CStop modes
    static constexpr uint32_t APB1SMENR2_LPTIM2SMEN = 0x20; // Low power timer 2 clock enable during CPU1 Csleep and CStop modes
    static constexpr uint32_t APB1SMENR2_LPUART1SMEN = 0x1; // Low power UART 1 clock enable during CPU1 Csleep and CStop modes.

    static constexpr uint32_t APB2SMENR_RESET_VALUE = 0x65a00; // Reset value
    static constexpr uint32_t APB2SMENR_TIM17SMEN = 0x40000; // TIM17 timer clock enable during CPU1 CSleep mode.
    static constexpr uint32_t APB2SMENR_TIM16SMEN = 0x20000; // TIM16 timer clock enable during CPU1 CSleep mode.
    static constexpr uint32_t APB2SMENR_USART1SMEN = 0x4000; // USART1 clock enable during CPU1 Csleep and CStop modes.
    static constexpr uint32_t APB2SMENR_SPI1SMEN = 0x1000; // SPI1 clock enable during CPU1 CSleep mode.
    static constexpr uint32_t APB2SMENR_TIM1SMEN = 0x800; // TIM1 timer clock enable during CPU1 CSleep mode.
    static constexpr uint32_t APB2SMENR_ADC1SMEN = 0x200; // ADC clocks enable during CPU1 Csleep and CStop modes

    static constexpr uint32_t APB3SMENR_RESET_VALUE = 0x1; // Reset value
    static constexpr uint32_t APB3SMENR_SUBGHZSPISMEN = 0x1; // Sub-GHz radio SPI clock enable during Sleep and Stop modes

    static constexpr uint32_t CCIPR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<30, 0x3> CCIPR_RNGSEL; // RNG clock source selection
    typedef bit_field_t<28, 0x3> CCIPR_ADCSEL; // ADC clock source selection
    typedef bit_field_t<22, 0x3> CCIPR_LPTIM3SEL; // Low power timer 3 clock source selection
    typedef bit_field_t<20, 0x3> CCIPR_LPTIM2SEL; // Low power timer 2 clock source selection
    typedef bit_field_t<18, 0x3> CCIPR_LPTIM1SEL; // Low power timer 1 clock source selection
    typedef bit_field_t<16, 0x3> CCIPR_I2C3SEL; // I2C3 clock source selection
    typedef bit_field_t<14, 0x3> CCIPR_I2C2SEL; // I2C2 clock source selection
    typedef bit_field_t<12, 0x3> CCIPR_I2C1SEL; // I2C1 clock source selection
    typedef bit_field_t<10, 0x3> CCIPR_LPUART1SEL; // LPUART1 clock source selection
    typedef bit_field_t<8, 0x3> CCIPR_SPI2S2SEL; // SPI2S2 I2S clock source selection
    typedef bit_field_t<2, 0x3> CCIPR_USART2SEL; // USART2 clock source selection
    typedef bit_field_t<0, 0x3> CCIPR_USART1SEL; // USART1 clock source selection


    static constexpr uint32_t BDCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BDCR_LSCOSEL = 0x2000000; // Low speed clock output selection
    static constexpr uint32_t BDCR_LSCOEN = 0x1000000; // Low speed clock output enable
    static constexpr uint32_t BDCR_BDRST = 0x10000; // Backup domain software reset
    static constexpr uint32_t BDCR_RTCEN = 0x8000; // RTC clock enable
    static constexpr uint32_t BDCR_LSESYSRDY = 0x800; // LSE system clock ready
    typedef bit_field_t<8, 0x3> BDCR_RTCSEL; // RTC clock source selection
    static constexpr uint32_t BDCR_LSESYSEN = 0x80; // LSE system clock enable
    static constexpr uint32_t BDCR_LSECSSD = 0x40; // CSS on LSE failure Detection
    static constexpr uint32_t BDCR_LSECSSON = 0x20; // CSS on LSE enable
    typedef bit_field_t<3, 0x3> BDCR_LSEDRV; // LSE oscillator drive capability
    static constexpr uint32_t BDCR_LSEBYP = 0x4; // LSE oscillator bypass
    static constexpr uint32_t BDCR_LSERDY = 0x2; // LSE oscillator ready
    static constexpr uint32_t BDCR_LSEON = 0x1; // LSE oscillator enable

    static constexpr uint32_t CSR_RESET_VALUE = 0xc01c600; // Reset value
    static constexpr uint32_t CSR_LPWRRSTF = 0x80000000; // Low-power reset flag
    static constexpr uint32_t CSR_WWDGRSTF = 0x40000000; // Window watchdog reset flag
    static constexpr uint32_t CSR_IWDGRSTF = 0x20000000; // Independent window watchdog reset flag
    static constexpr uint32_t CSR_SFTRSTF = 0x10000000; // Software reset flag
    static constexpr uint32_t CSR_BORRSTF = 0x8000000; // BOR flag
    static constexpr uint32_t CSR_PINRSTF = 0x4000000; // Pin reset flag
    static constexpr uint32_t CSR_OBLRSTF = 0x2000000; // Option byte loader reset flag
    static constexpr uint32_t CSR_RFILARSTF = 0x1000000; // Radio illegal access flag
    static constexpr uint32_t CSR_RMVF = 0x800000; // Remove reset flag
    static constexpr uint32_t CSR_RFRST = 0x8000; // Radio reset
    static constexpr uint32_t CSR_RFRSTF = 0x4000; // Radio in reset status flag
    typedef bit_field_t<8, 0xf> CSR_MSISRANGE; // MSI clock ranges
    static constexpr uint32_t CSR_LSIPRE = 0x10; // LSI frequency prescaler
    static constexpr uint32_t CSR_LSIRDY = 0x2; // LSI oscillator ready
    static constexpr uint32_t CSR_LSION = 0x1; // LSI oscillator enable


    static constexpr uint32_t EXTCFGR_RESET_VALUE = 0x30000; // Reset value
    static constexpr uint32_t EXTCFGR_C2HPREF = 0x20000; // CLK2 prescaler flag (CPU2)
    static constexpr uint32_t EXTCFGR_SHDHPREF = 0x10000; // HCLK3 shared prescaler flag (AHB3, Flash, and SRAM2)
    typedef bit_field_t<4, 0xf> EXTCFGR_C2HPRE; // [dual core device only] HCLK2 prescaler (CPU2)
    typedef bit_field_t<0, 0xf> EXTCFGR_SHDHPRE; // HCLK3 shared prescaler (AHB3, Flash, and SRAM2)


    static constexpr uint32_t C2AHB1ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C2AHB1ENR_CRCEN = 0x1000; // CPU2 CRC clock enable
    static constexpr uint32_t C2AHB1ENR_DMAMUXEN = 0x4; // CPU2 DMAMUX1 clock enable
    static constexpr uint32_t C2AHB1ENR_DMA2EN = 0x2; // CPU2 DMA2 clock enable
    static constexpr uint32_t C2AHB1ENR_DMA1EN = 0x1; // CPU2 DMA1 clock enable

    static constexpr uint32_t C2AHB2ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C2AHB2ENR_GPIOHEN = 0x80; // CPU2 IO port H clock enable
    static constexpr uint32_t C2AHB2ENR_GPIOCEN = 0x4; // CPU2 IO port C clock enable
    static constexpr uint32_t C2AHB2ENR_GPIOBEN = 0x2; // CPU2 IO port B clock enable
    static constexpr uint32_t C2AHB2ENR_GPIOAEN = 0x1; // CPU2 IO port A clock enable

    static constexpr uint32_t C2AHB3ENR_RESET_VALUE = 0x2080000; // Reset value
    static constexpr uint32_t C2AHB3ENR_FLASHEN = 0x2000000; // CPU2 Flash interface clock enable
    static constexpr uint32_t C2AHB3ENR_IPCCEN = 0x100000; // CPU2 IPCC interface clock enable
    static constexpr uint32_t C2AHB3ENR_HSEMEN = 0x80000; // CPU2 HSEM clock enable
    static constexpr uint32_t C2AHB3ENR_RNGEN = 0x40000; // CPU2 True RNG clocks enable
    static constexpr uint32_t C2AHB3ENR_AESEN = 0x20000; // CPU2 AES accelerator clock enable
    static constexpr uint32_t C2AHB3ENR_PKAEN = 0x10000; // CPU2 PKA accelerator clock enable


    static constexpr uint32_t C2APB1ENR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C2APB1ENR1_LPTIM1EN = 0x80000000; // CPU2 Low power timer 1 clocks enable
    static constexpr uint32_t C2APB1ENR1_DAC1EN = 0x20000000; // CPU2 DAC1 clock enable
    static constexpr uint32_t C2APB1ENR1_I2C3EN = 0x800000; // CPU2 I2C3 clocks enable
    static constexpr uint32_t C2APB1ENR1_I2C2EN = 0x400000; // CPU2 I2C2 clocks enable
    static constexpr uint32_t C2APB1ENR1_I2C1EN = 0x200000; // CPU2 I2C1 clocks enable
    static constexpr uint32_t C2APB1ENR1_USART2EN = 0x20000; // CPU2 USART2 clock enable
    static constexpr uint32_t C2APB1ENR1_SPI2S2EN = 0x4000; // CPU2 SPI2S2 clock enable
    static constexpr uint32_t C2APB1ENR1_RTCAPBEN = 0x400; // CPU2 RTC APB clock enable
    static constexpr uint32_t C2APB1ENR1_TIM2EN = 0x1; // CPU2 TIM2 timer clock enable

    static constexpr uint32_t C2APB1ENR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C2APB1ENR2_LPTIM3EN = 0x40; // CPU2 Low power timer 3 clocks enable
    static constexpr uint32_t C2APB1ENR2_LPTIM2EN = 0x20; // CPU2 Low power timer 2 clocks enable
    static constexpr uint32_t C2APB1ENR2_LPUART1EN = 0x1; // CPU2 Low power UART 1 clocks enable

    static constexpr uint32_t C2APB2ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C2APB2ENR_TIM17EN = 0x40000; // CPU2 TIM17 timer clock enable
    static constexpr uint32_t C2APB2ENR_TIM16EN = 0x20000; // CPU2 TIM16 timer clock enable
    static constexpr uint32_t C2APB2ENR_USART1EN = 0x4000; // CPU2 USART1clocks enable
    static constexpr uint32_t C2APB2ENR_SPI1EN = 0x1000; // CPU2 SPI1 clock enable
    static constexpr uint32_t C2APB2ENR_TIM1EN = 0x800; // CPU2 TIM1 timer clock enable
    static constexpr uint32_t C2APB2ENR_ADC1EN = 0x200; // ADC clocks enable

    static constexpr uint32_t C2APB3ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C2APB3ENR_SUBGHZSPIEN = 0x1; // CPU2 sub-GHz radio SPI clock enable

    static constexpr uint32_t C2AHB1SMENR_RESET_VALUE = 0x1007; // Reset value
    static constexpr uint32_t C2AHB1SMENR_CRCSMEN = 0x1000; // CRC clock enable during CPU2 CSleep mode.
    static constexpr uint32_t C2AHB1SMENR_DMAMUXSMEN = 0x4; // DMAMUX1 clock enable during CPU2 CSleep mode.
    static constexpr uint32_t C2AHB1SMENR_DMA2SMEN = 0x2; // DMA2 clock enable during CPU2 CSleep mode.
    static constexpr uint32_t C2AHB1SMENR_DMA1SMEN = 0x1; // DMA1 clock enable during CPU2 CSleep mode.

    static constexpr uint32_t C2AHB2SMENR_RESET_VALUE = 0x87; // Reset value
    static constexpr uint32_t C2AHB2SMENR_GPIOHSMEN = 0x80; // IO port H clock enable during CPU2 CSleep mode.
    static constexpr uint32_t C2AHB2SMENR_GPIOCSMEN = 0x4; // IO port C clock enable during CPU2 CSleep mode.
    static constexpr uint32_t C2AHB2SMENR_GPIOBSMEN = 0x2; // IO port B clock enable during CPU2 CSleep mode.
    static constexpr uint32_t C2AHB2SMENR_GPIOASMEN = 0x1; // IO port A clock enable during CPU2 CSleep mode.

    static constexpr uint32_t C2AHB3SMENR_RESET_VALUE = 0x3870000; // Reset value
    static constexpr uint32_t C2AHB3SMENR_FLASHSMEN = 0x2000000; // Flash interface clock enable during CPU2 CSleep mode.
    static constexpr uint32_t C2AHB3SMENR_SRAM2SMEN = 0x1000000; // SRAM2 memory interface clock enable during CPU2 CSleep mode.
    static constexpr uint32_t C2AHB3SMENR_SRAM1SMEN = 0x800000; // SRAM1 interface clock enable during CPU2 CSleep mode.
    static constexpr uint32_t C2AHB3SMENR_RNGSMEN = 0x40000; // True RNG clock enable during CPU2 CSleep and CStop mode.
    static constexpr uint32_t C2AHB3SMENR_AESSMEN = 0x20000; // AES accelerator clock enable during CPU2 CSleep mode.
    static constexpr uint32_t C2AHB3SMENR_PKASMEN = 0x10000; // PKA accelerator clock enable during CPU2 CSleep mode.


    static constexpr uint32_t C2APB1SMENR1_RESET_VALUE = 0xa0e24401; // Reset value
    static constexpr uint32_t C2APB1SMENR1_LPTIM1SMEN = 0x80000000; // Low power timer 1 clock enable during CPU2 CSleep and CStop mode
    static constexpr uint32_t C2APB1SMENR1_DAC1SMEN = 0x20000000; // DAC1 clock enable during CPU2 CSleep mode.
    static constexpr uint32_t C2APB1SMENR1_I2C3SMEN = 0x800000; // I2C3 clock enable during CPU2 CSleep and CStop modes
    static constexpr uint32_t C2APB1SMENR1_I2C2SMEN = 0x400000; // I2C2 clock enable during CPU2 CSleep and CStop modes
    static constexpr uint32_t C2APB1SMENR1_I2C1SMEN = 0x200000; // I2C1 clock enable during CPU2 CSleep and CStop modes
    static constexpr uint32_t C2APB1SMENR1_USART2SMEN = 0x20000; // USART2 clock enable during CPU2 CSleep mode.
    static constexpr uint32_t C2APB1SMENR1_SPI2S2SMEN = 0x4000; // SPI2S2 clock enable during CPU2 CSleep mode.
    static constexpr uint32_t C2APB1SMENR1_RTCAPBSMEN = 0x400; // RTC bus clock enable during CPU2 CSleep mode.
    static constexpr uint32_t C2APB1SMENR1_TIM2SMEN = 0x1; // TIM2 timer clock enable during CPU2 CSleep mode.

    static constexpr uint32_t C2APB1SMENR2_RESET_VALUE = 0x61; // Reset value
    static constexpr uint32_t C2APB1SMENR2_LPTIM3SMEN = 0x40; // Low power timer 3 clocks enable during CPU2 CSleep and CStop modes.
    static constexpr uint32_t C2APB1SMENR2_LPTIM2SMEN = 0x20; // Low power timer 2 clocks enable during CPU2 CSleep and CStop modes.
    static constexpr uint32_t C2APB1SMENR2_LPUART1SMEN = 0x1; // Low power UART 1 clock enable during CPU2 CSleep and CStop mode

    static constexpr uint32_t C2APB2SMENR_RESET_VALUE = 0x65a00; // Reset value
    static constexpr uint32_t C2APB2SMENR_TIM17SMEN = 0x40000; // TIM17 timer clock enable during CPU2 CSleep mode
    static constexpr uint32_t C2APB2SMENR_TIM16SMEN = 0x20000; // TIM16 timer clock enable during CPU2 CSleep mode
    static constexpr uint32_t C2APB2SMENR_USART1SMEN = 0x4000; // USART1clock enable during CPU2 CSleep and CStop mode
    static constexpr uint32_t C2APB2SMENR_SPI1SMEN = 0x1000; // SPI1 clock enable during CPU2 CSleep mode
    static constexpr uint32_t C2APB2SMENR_TIM1SMEN = 0x800; // TIM1 timer clock enable during CPU2 CSleep mode
    static constexpr uint32_t C2APB2SMENR_ADC1SMEN = 0x200; // ADC clocks enable during CPU2 Csleep and CStop modes

    static constexpr uint32_t C2APB3SMENR_RESET_VALUE = 0x1; // Reset value
    static constexpr uint32_t C2APB3SMENR_SUBGHZSPISMEN = 0x1; // sub-GHz radio SPI clock enable during CPU2 CSleep and CStop modes
};

// RCC: Reset and clock control

struct stm32wle5_cm4_rcc_t
{
    volatile uint32_t CR; // Clock control register
    volatile uint32_t ICSCR; // Internal clock sources calibration register
    volatile uint32_t CFGR; // Clock configuration register
    volatile uint32_t PLLCFGR; // PLL configuration register
    reserved_t<0x2> _0x10;
    volatile uint32_t CIER; // Clock interrupt enable register
    volatile uint32_t CIFR; // Clock interrupt flag register
    volatile uint32_t CICR; // Clock interrupt clear register
    reserved_t<0x1> _0x24;
    volatile uint32_t AHB1RSTR; // AHB1 peripheral reset register
    volatile uint32_t AHB2RSTR; // AHB2 peripheral reset register
    volatile uint32_t AHB3RSTR; // AHB3 peripheral reset register
    reserved_t<0x1> _0x34;
    volatile uint32_t APB1RSTR1; // APB1 peripheral reset register 1
    volatile uint32_t APB1RSTR2; // APB1 peripheral reset register 2
    volatile uint32_t APB2RSTR; // APB2 peripheral reset register
    volatile uint32_t APB3RSTR; // APB3 peripheral reset register
    volatile uint32_t AHB1ENR; // AHB1 peripheral clock enable register
    volatile uint32_t AHB2ENR; // AHB2 peripheral clock enable register
    volatile uint32_t AHB3ENR; // AHB3 peripheral clock enable register
    reserved_t<0x1> _0x54;
    volatile uint32_t APB1ENR1; // APB1 peripheral clock enable register 1
    volatile uint32_t APB1ENR2; // APB1 peripheral clock enable register 2
    volatile uint32_t APB2ENR; // APB2 peripheral clock enable register
    volatile uint32_t APB3ENR; // APB3 peripheral clock enable register
    volatile uint32_t AHB1SMENR; // AHB1 peripheral clocks enable in Sleep modes register
    volatile uint32_t AHB2SMENR; // AHB2 peripheral clocks enable in Sleep modes register
    volatile uint32_t AHB3SMENR; // AHB3 peripheral clocks enable in Sleep and Stop modes register
    reserved_t<0x1> _0x74;
    volatile uint32_t APB1SMENR1; // APB1 peripheral clocks enable in Sleep mode register 1
    volatile uint32_t APB1SMENR2; // APB1 peripheral clocks enable in Sleep mode register 2
    volatile uint32_t APB2SMENR; // APB2 peripheral clocks enable in Sleep mode register
    volatile uint32_t APB3SMENR; // APB3 peripheral clock enable in Sleep mode register
    volatile uint32_t CCIPR; // Peripherals independent clock configuration register
    reserved_t<0x1> _0x8c;
    volatile uint32_t BDCR; // Backup domain control register
    volatile uint32_t CSR; // Control/status register
    reserved_t<0x1c> _0x98;
    volatile uint32_t EXTCFGR; // Extended clock recovery register

    static constexpr uint32_t CR_RESET_VALUE = 0x61; // Reset value
    static constexpr uint32_t CR_PLLRDY = 0x2000000; // Main PLL clock ready flag
    static constexpr uint32_t CR_PLLON = 0x1000000; // Main PLL enable
    static constexpr uint32_t CR_HSEBYPPWR = 0x200000; // Enable HSE32 VDDTCXO output on package pin PB0-VDDTCXO.
    static constexpr uint32_t CR_HSEPRE = 0x100000; // HSE32 sysclk prescaler
    static constexpr uint32_t CR_CSSON = 0x80000; // HSE32 Clock security system enable
    static constexpr uint32_t CR_HSERDY = 0x20000; // HSE32 clock ready flag
    static constexpr uint32_t CR_HSEON = 0x10000; // HSE32 clock enable
    static constexpr uint32_t CR_HSIKERDY = 0x1000; // HSI16 kernel clock ready flag for peripherals requests.
    static constexpr uint32_t CR_HSIASFS = 0x800; // HSI16 automatic start from Stop
    static constexpr uint32_t CR_HSIRDY = 0x400; // HSI16 clock ready flag. (After wakeup from Stop this bit will be read 1 once the HSI16 is ready)
    static constexpr uint32_t CR_HSIKERON = 0x200; // HSI16 always enable for peripheral kernel clocks.
    static constexpr uint32_t CR_HSION = 0x100; // HSI16 clock enable
    typedef bit_field_t<4, 0xf> CR_MSIRANGE; // MSI clock ranges
    static constexpr uint32_t CR_MSIRGSEL = 0x8; // MSI range control selection
    static constexpr uint32_t CR_MSIPLLEN = 0x4; // MSI clock PLL enable
    static constexpr uint32_t CR_MSIRDY = 0x2; // MSI clock ready flag (After reset this bit will be read 1 once the MSI is ready)
    static constexpr uint32_t CR_MSION = 0x1; // MSI clock enable

    static constexpr uint32_t ICSCR_RESET_VALUE = 0x40000000; // Reset value
    typedef bit_field_t<24, 0x7f> ICSCR_HSITRIM; // HSI16 clock trimming
    typedef bit_field_t<16, 0xff> ICSCR_HSICAL; // HSI16 clock calibration
    typedef bit_field_t<8, 0xff> ICSCR_MSITRIM; // MSI clock trimming
    typedef bit_field_t<0, 0xff> ICSCR_MSICAL; // MSI clock calibration

    static constexpr uint32_t CFGR_RESET_VALUE = 0x70000; // Reset value
    typedef bit_field_t<28, 0x7> CFGR_MCOPRE; // Microcontroller clock output prescaler
    typedef bit_field_t<24, 0xf> CFGR_MCOSEL; // Microcontroller clock output
    static constexpr uint32_t CFGR_PPRE2F = 0x40000; // PCLK2 prescaler flag (APB2)
    static constexpr uint32_t CFGR_PPRE1F = 0x20000; // PCLK1 prescaler flag (APB1)
    static constexpr uint32_t CFGR_HPREF = 0x10000; // HCLK1 prescaler flag (CPU1, AHB1, AHB2, and SRAM1)
    static constexpr uint32_t CFGR_STOPWUCK = 0x8000; // Wakeup from Stop and CSS backup clock selection
    typedef bit_field_t<11, 0x7> CFGR_PPRE2; // PCLK2 high-speed prescaler (APB2)
    typedef bit_field_t<8, 0x7> CFGR_PPRE1; // PCLK1 low-speed prescaler (APB1)
    typedef bit_field_t<4, 0xf> CFGR_HPRE; // HCLK1 prescaler (CPU1, AHB1, AHB2, and SRAM1.)
    typedef bit_field_t<2, 0x3> CFGR_SWS; // System clock switch status
    typedef bit_field_t<0, 0x3> CFGR_SW; // System clock switch

    static constexpr uint32_t PLLCFGR_RESET_VALUE = 0x22040100; // Reset value
    typedef bit_field_t<29, 0x7> PLLCFGR_PLLR; // Main PLL division factor for PLLRCLK
    static constexpr uint32_t PLLCFGR_PLLREN = 0x10000000; // Main PLL PLLRCLK output enable
    typedef bit_field_t<25, 0x7> PLLCFGR_PLLQ; // Main PLL division factor for PLLQCLK
    static constexpr uint32_t PLLCFGR_PLLQEN = 0x1000000; // Main PLL PLLQCLK output enable
    typedef bit_field_t<17, 0x1f> PLLCFGR_PLLP; // Main PLL division factor for PLLPCLK.
    static constexpr uint32_t PLLCFGR_PLLPEN = 0x10000; // Main PLL PLLPCLK output enable
    typedef bit_field_t<8, 0x7f> PLLCFGR_PLLN; // Main PLL multiplication factor for VCO
    typedef bit_field_t<4, 0x7> PLLCFGR_PLLM; // Division factor for the main PLL input clock
    typedef bit_field_t<0, 0x3> PLLCFGR_PLLSRC; // Main PLL entry clock source


    static constexpr uint32_t CIER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CIER_LSECSSIE = 0x200; // LSE clock security system interrupt enable
    static constexpr uint32_t CIER_PLLRDYIE = 0x20; // PLL ready interrupt enable
    static constexpr uint32_t CIER_HSERDYIE = 0x10; // HSE32 ready interrupt enable
    static constexpr uint32_t CIER_HSIRDYIE = 0x8; // HSI16 ready interrupt enable
    static constexpr uint32_t CIER_MSIRDYIE = 0x4; // MSI ready interrupt enable
    static constexpr uint32_t CIER_LSERDYIE = 0x2; // LSE ready interrupt enable
    static constexpr uint32_t CIER_LSIRDYIE = 0x1; // LSI ready interrupt enable

    static constexpr uint32_t CIFR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CIFR_LSECSSF = 0x200; // LSE Clock security system interrupt flag
    static constexpr uint32_t CIFR_CSSF = 0x100; // HSE32 Clock security system interrupt flag
    static constexpr uint32_t CIFR_PLLRDYF = 0x20; // PLL ready interrupt flag
    static constexpr uint32_t CIFR_HSERDYF = 0x10; // HSE32 ready interrupt flag
    static constexpr uint32_t CIFR_HSIRDYF = 0x8; // HSI16 ready interrupt flag
    static constexpr uint32_t CIFR_MSIRDYF = 0x4; // MSI ready interrupt flag
    static constexpr uint32_t CIFR_LSERDYF = 0x2; // LSE ready interrupt flag
    static constexpr uint32_t CIFR_LSIRDYF = 0x1; // LSI ready interrupt flag

    static constexpr uint32_t CICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CICR_LSECSSC = 0x200; // LSE Clock security system interrupt clear
    static constexpr uint32_t CICR_CSSC = 0x100; // HSE32 Clock security system interrupt clear
    static constexpr uint32_t CICR_PLLRDYC = 0x20; // PLL ready interrupt clear
    static constexpr uint32_t CICR_HSERDYC = 0x10; // HSE32 ready interrupt clear
    static constexpr uint32_t CICR_HSIRDYC = 0x8; // HSI16 ready interrupt clear
    static constexpr uint32_t CICR_MSIRDYC = 0x4; // MSI ready interrupt clear
    static constexpr uint32_t CICR_LSERDYC = 0x2; // LSE ready interrupt clear
    static constexpr uint32_t CICR_LSIRDYC = 0x1; // LSI ready interrupt clear


    static constexpr uint32_t AHB1RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB1RSTR_CRCRST = 0x1000; // CRC reset
    static constexpr uint32_t AHB1RSTR_DMAMUXRST = 0x4; // DMAMUX1 reset
    static constexpr uint32_t AHB1RSTR_DMA2RST = 0x2; // DMA2 reset
    static constexpr uint32_t AHB1RSTR_DMA1RST = 0x1; // DMA1 reset

    static constexpr uint32_t AHB2RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB2RSTR_GPIOHRST = 0x80; // IO port H reset
    static constexpr uint32_t AHB2RSTR_GPIOCRST = 0x4; // IO port C reset
    static constexpr uint32_t AHB2RSTR_GPIOBRST = 0x2; // IO port B reset
    static constexpr uint32_t AHB2RSTR_GPIOARST = 0x1; // IO port A reset

    static constexpr uint32_t AHB3RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB3RSTR_FLASHRST = 0x2000000; // Flash interface reset
    static constexpr uint32_t AHB3RSTR_HSEMRST = 0x80000; // HSEMRST
    static constexpr uint32_t AHB3RSTR_RNGRST = 0x40000; // RNGRST
    static constexpr uint32_t AHB3RSTR_AESRST = 0x20000; // AESRST
    static constexpr uint32_t AHB3RSTR_PKARST = 0x10000; // PKARST


    static constexpr uint32_t APB1RSTR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1RSTR1_LPTIM1RST = 0x80000000; // Low Power Timer 1 reset
    static constexpr uint32_t APB1RSTR1_DACRST = 0x20000000; // DAC reset
    static constexpr uint32_t APB1RSTR1_I2C3RST = 0x800000; // I2C3 reset
    static constexpr uint32_t APB1RSTR1_I2C2RST = 0x400000; // I2C2 reset
    static constexpr uint32_t APB1RSTR1_I2C1RST = 0x200000; // I2C1 reset
    static constexpr uint32_t APB1RSTR1_USART2RST = 0x20000; // USART2 reset
    static constexpr uint32_t APB1RSTR1_SPI2S2RST = 0x4000; // SPI2S2 reset
    static constexpr uint32_t APB1RSTR1_TIM2RST = 0x1; // TIM2 timer reset

    static constexpr uint32_t APB1RSTR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1RSTR2_LPTIM3RST = 0x40; // Low-power timer 3 reset
    static constexpr uint32_t APB1RSTR2_LPTIM2RST = 0x20; // Low-power timer 2 reset
    static constexpr uint32_t APB1RSTR2_LPUART1RST = 0x1; // Low-power UART 1 reset

    static constexpr uint32_t APB2RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2RSTR_TIM17RST = 0x40000; // TIM17 timer reset
    static constexpr uint32_t APB2RSTR_TIM16RST = 0x20000; // TIM16 timer reset
    static constexpr uint32_t APB2RSTR_USART1RST = 0x4000; // USART1 reset
    static constexpr uint32_t APB2RSTR_SPI1RST = 0x1000; // SPI1 reset
    static constexpr uint32_t APB2RSTR_TIM1RST = 0x800; // TIM1 timer reset
    static constexpr uint32_t APB2RSTR_ADC1RST = 0x200; // ADC reset

    static constexpr uint32_t APB3RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB3RSTR_SUBGHZSPIRST = 0x1; // Sub-GHz radio SPI reset

    static constexpr uint32_t AHB1ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB1ENR_CRCEN = 0x1000; // CPU1 CRC clock enable
    static constexpr uint32_t AHB1ENR_DMAMUXEN = 0x4; // CPU1 DMAMUX1 clock enable
    static constexpr uint32_t AHB1ENR_DMA2EN = 0x2; // CPU1 DMA2 clock enable
    static constexpr uint32_t AHB1ENR_DMA1EN = 0x1; // CPU1 DMA1 clock enable

    static constexpr uint32_t AHB2ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB2ENR_GPIOHEN = 0x80; // CPU1 IO port H clock enable
    static constexpr uint32_t AHB2ENR_GPIOCEN = 0x4; // CPU1 IO port C clock enable
    static constexpr uint32_t AHB2ENR_GPIOBEN = 0x2; // CPU1 IO port B clock enable
    static constexpr uint32_t AHB2ENR_GPIOAEN = 0x1; // CPU1 IO port A clock enable

    static constexpr uint32_t AHB3ENR_RESET_VALUE = 0x2080000; // Reset value
    static constexpr uint32_t AHB3ENR_FLASHEN = 0x2000000; // CPU1 Flash interface clock enable
    static constexpr uint32_t AHB3ENR_HSEMEN = 0x80000; // HSEMEN
    static constexpr uint32_t AHB3ENR_RNGEN = 0x40000; // RNGEN
    static constexpr uint32_t AHB3ENR_AESEN = 0x20000; // AESEN
    static constexpr uint32_t AHB3ENR_PKAEN = 0x10000; // PKAEN


    static constexpr uint32_t APB1ENR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1ENR1_LPTIM1EN = 0x80000000; // CPU1 Low power timer 1 clocks enable
    static constexpr uint32_t APB1ENR1_DAC1EN = 0x20000000; // CPU1 DAC1 clock enable
    static constexpr uint32_t APB1ENR1_I2C3EN = 0x800000; // CPU1 I2C3 clocks enable
    static constexpr uint32_t APB1ENR1_I2C2EN = 0x400000; // CPU1 I2C2 clocks enable
    static constexpr uint32_t APB1ENR1_I2C1EN = 0x200000; // CPU1 I2C1 clocks enable
    static constexpr uint32_t APB1ENR1_USART2EN = 0x20000; // CPU1 USART2 clock enable
    static constexpr uint32_t APB1ENR1_SPI2S2EN = 0x4000; // CPU1 SPI2S2 clock enable
    static constexpr uint32_t APB1ENR1_WWDGEN = 0x800; // CPU1 Window watchdog clock enable
    static constexpr uint32_t APB1ENR1_RTCAPBEN = 0x400; // CPU1 RTC APB clock enable
    static constexpr uint32_t APB1ENR1_TIM2EN = 0x1; // CPU1 TIM2 timer clock enable

    static constexpr uint32_t APB1ENR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1ENR2_LPTIM3EN = 0x40; // CPU1 Low power timer 3 clocks enable
    static constexpr uint32_t APB1ENR2_LPTIM2EN = 0x20; // CPU1 Low power timer 2 clocks enable
    static constexpr uint32_t APB1ENR2_LPUART1EN = 0x1; // CPU1 Low power UART 1 clocks enable

    static constexpr uint32_t APB2ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2ENR_TIM17EN = 0x40000; // CPU1 TIM17 timer clock enable
    static constexpr uint32_t APB2ENR_TIM16EN = 0x20000; // CPU1 TIM16 timer clock enable
    static constexpr uint32_t APB2ENR_USART1EN = 0x4000; // CPU1 USART1clocks enable
    static constexpr uint32_t APB2ENR_SPI1EN = 0x1000; // CPU1 SPI1 clock enable
    static constexpr uint32_t APB2ENR_TIM1EN = 0x800; // CPU1 TIM1 timer clock enable
    static constexpr uint32_t APB2ENR_ADC1EN = 0x200; // CPU1 ADC clocks enable

    static constexpr uint32_t APB3ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB3ENR_SUBGHZSPIEN = 0x1; // sub-GHz radio SPI clock enable

    static constexpr uint32_t AHB1SMENR_RESET_VALUE = 0x1007; // Reset value
    static constexpr uint32_t AHB1SMENR_CRCSMEN = 0x1000; // CRC clock enable during CPU1 CSleep mode.
    static constexpr uint32_t AHB1SMENR_DMAMUXSMEN = 0x4; // DMAMUX1 clock enable during CPU1 CSleep mode.
    static constexpr uint32_t AHB1SMENR_DMA2SMEN = 0x2; // DMA2 clock enable during CPU1 CSleep mode
    static constexpr uint32_t AHB1SMENR_DMA1SMEN = 0x1; // DMA1 clock enable during CPU1 CSleep mode.

    static constexpr uint32_t AHB2SMENR_RESET_VALUE = 0x87; // Reset value
    static constexpr uint32_t AHB2SMENR_GPIOHSMEN = 0x80; // IO port H clock enable during CPU1 CSleep mode.
    static constexpr uint32_t AHB2SMENR_GPIOCSMEN = 0x4; // IO port C clock enable during CPU1 CSleep mode.
    static constexpr uint32_t AHB2SMENR_GPIOBSMEN = 0x2; // IO port B clock enable during CPU1 CSleep mode.
    static constexpr uint32_t AHB2SMENR_GPIOASMEN = 0x1; // IO port A clock enable during CPU1 CSleep mode.

    static constexpr uint32_t AHB3SMENR_RESET_VALUE = 0x3870000; // Reset value
    static constexpr uint32_t AHB3SMENR_FLASHSMEN = 0x2000000; // Flash interface clock enable during CPU1 CSleep mode.
    static constexpr uint32_t AHB3SMENR_SRAM2SMEN = 0x1000000; // SRAM2 memory interface clock enable during CPU1 CSleep mode
    static constexpr uint32_t AHB3SMENR_SRAM1SMEN = 0x800000; // SRAM1 interface clock enable during CPU1 CSleep mode.
    static constexpr uint32_t AHB3SMENR_RNGSMEN = 0x40000; // True RNG clocks enable during CPU1 Csleep and CStop modes
    static constexpr uint32_t AHB3SMENR_AESSMEN = 0x20000; // AES accelerator clock enable during CPU1 CSleep mode.
    static constexpr uint32_t AHB3SMENR_PKASMEN = 0x10000; // PKA accelerator clock enable during CPU1 CSleep mode.


    static constexpr uint32_t APB1SMENR1_RESET_VALUE = 0xa0e24c01; // Reset value
    static constexpr uint32_t APB1SMENR1_LPTIM1SMEN = 0x80000000; // Low power timer 1 clock enable during CPU1 Csleep and CStop mode
    static constexpr uint32_t APB1SMENR1_DACSMEN = 0x20000000; // DAC clock enable during CPU1 CSleep mode.
    static constexpr uint32_t APB1SMENR1_I2C3SMEN = 0x800000; // I2C3 clock enable during CPU1 Csleep and CStop modes
    static constexpr uint32_t APB1SMENR1_I2C2SMEN = 0x400000; // I2C2 clock enable during CPU1 Csleep and CStop modes
    static constexpr uint32_t APB1SMENR1_I2C1SMEN = 0x200000; // I2C1 clock enable during CPU1 Csleep and CStop modes
    static constexpr uint32_t APB1SMENR1_USART2SMEN = 0x20000; // USART2 clock enable during CPU1 CSleep mode.
    static constexpr uint32_t APB1SMENR1_SPI2S2SMEN = 0x4000; // SPI2S2 clock enable during CPU1 CSleep mode.
    static constexpr uint32_t APB1SMENR1_WWDGSMEN = 0x800; // Window watchdog clocks enable during CPU1 CSleep mode.
    static constexpr uint32_t APB1SMENR1_RTCAPBSMEN = 0x400; // RTC bus clock enable during CPU1 CSleep mode.
    static constexpr uint32_t APB1SMENR1_TIM2SMEN = 0x1; // TIM2 timer clock enable during CPU1 CSleep mode.

    static constexpr uint32_t APB1SMENR2_RESET_VALUE = 0x61; // Reset value
    static constexpr uint32_t APB1SMENR2_LPTIM3SMEN = 0x40; // Low power timer 3 clock enable during CPU1 Csleep and CStop modes
    static constexpr uint32_t APB1SMENR2_LPTIM2SMEN = 0x20; // Low power timer 2 clock enable during CPU1 Csleep and CStop modes
    static constexpr uint32_t APB1SMENR2_LPUART1SMEN = 0x1; // Low power UART 1 clock enable during CPU1 Csleep and CStop modes.

    static constexpr uint32_t APB2SMENR_RESET_VALUE = 0x65a00; // Reset value
    static constexpr uint32_t APB2SMENR_TIM17SMEN = 0x40000; // TIM17 timer clock enable during CPU1 CSleep mode.
    static constexpr uint32_t APB2SMENR_TIM16SMEN = 0x20000; // TIM16 timer clock enable during CPU1 CSleep mode.
    static constexpr uint32_t APB2SMENR_USART1SMEN = 0x4000; // USART1 clock enable during CPU1 Csleep and CStop modes.
    static constexpr uint32_t APB2SMENR_SPI1SMEN = 0x1000; // SPI1 clock enable during CPU1 CSleep mode.
    static constexpr uint32_t APB2SMENR_TIM1SMEN = 0x800; // TIM1 timer clock enable during CPU1 CSleep mode.
    static constexpr uint32_t APB2SMENR_ADC1SMEN = 0x200; // ADC clocks enable during CPU1 Csleep and CStop modes

    static constexpr uint32_t APB3SMENR_RESET_VALUE = 0x1; // Reset value
    static constexpr uint32_t APB3SMENR_SUBGHZSPISMEN = 0x1; // Sub-GHz radio SPI clock enable during Sleep and Stop modes

    static constexpr uint32_t CCIPR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<30, 0x3> CCIPR_RNGSEL; // RNG clock source selection
    typedef bit_field_t<28, 0x3> CCIPR_ADCSEL; // ADC clock source selection
    typedef bit_field_t<22, 0x3> CCIPR_LPTIM3SEL; // Low power timer 3 clock source selection
    typedef bit_field_t<20, 0x3> CCIPR_LPTIM2SEL; // Low power timer 2 clock source selection
    typedef bit_field_t<18, 0x3> CCIPR_LPTIM1SEL; // Low power timer 1 clock source selection
    typedef bit_field_t<16, 0x3> CCIPR_I2C3SEL; // I2C3 clock source selection
    typedef bit_field_t<14, 0x3> CCIPR_I2C2SEL; // I2C2 clock source selection
    typedef bit_field_t<12, 0x3> CCIPR_I2C1SEL; // I2C1 clock source selection
    typedef bit_field_t<10, 0x3> CCIPR_LPUART1SEL; // LPUART1 clock source selection
    typedef bit_field_t<8, 0x3> CCIPR_SPI2S2SEL; // SPI2S2 I2S clock source selection
    typedef bit_field_t<2, 0x3> CCIPR_USART2SEL; // USART2 clock source selection
    typedef bit_field_t<0, 0x3> CCIPR_USART1SEL; // USART1 clock source selection


    static constexpr uint32_t BDCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BDCR_LSCOSEL = 0x2000000; // Low speed clock output selection
    static constexpr uint32_t BDCR_LSCOEN = 0x1000000; // Low speed clock output enable
    static constexpr uint32_t BDCR_BDRST = 0x10000; // Backup domain software reset
    static constexpr uint32_t BDCR_RTCEN = 0x8000; // RTC clock enable
    static constexpr uint32_t BDCR_LSESYSRDY = 0x800; // LSE system clock ready
    typedef bit_field_t<8, 0x3> BDCR_RTCSEL; // RTC clock source selection
    static constexpr uint32_t BDCR_LSESYSEN = 0x80; // LSE system clock enable
    static constexpr uint32_t BDCR_LSECSSD = 0x40; // CSS on LSE failure Detection
    static constexpr uint32_t BDCR_LSECSSON = 0x20; // CSS on LSE enable
    typedef bit_field_t<3, 0x3> BDCR_LSEDRV; // LSE oscillator drive capability
    static constexpr uint32_t BDCR_LSEBYP = 0x4; // LSE oscillator bypass
    static constexpr uint32_t BDCR_LSERDY = 0x2; // LSE oscillator ready
    static constexpr uint32_t BDCR_LSEON = 0x1; // LSE oscillator enable

    static constexpr uint32_t CSR_RESET_VALUE = 0xc01c600; // Reset value
    static constexpr uint32_t CSR_LPWRRSTF = 0x80000000; // Low-power reset flag
    static constexpr uint32_t CSR_WWDGRSTF = 0x40000000; // Window watchdog reset flag
    static constexpr uint32_t CSR_IWDGRSTF = 0x20000000; // Independent window watchdog reset flag
    static constexpr uint32_t CSR_SFTRSTF = 0x10000000; // Software reset flag
    static constexpr uint32_t CSR_BORRSTF = 0x8000000; // BOR flag
    static constexpr uint32_t CSR_PINRSTF = 0x4000000; // Pin reset flag
    static constexpr uint32_t CSR_OBLRSTF = 0x2000000; // Option byte loader reset flag
    static constexpr uint32_t CSR_RFILARSTF = 0x1000000; // Radio illegal access flag
    static constexpr uint32_t CSR_RMVF = 0x800000; // Remove reset flag
    static constexpr uint32_t CSR_RFRST = 0x8000; // Radio reset
    static constexpr uint32_t CSR_RFRSTF = 0x4000; // Radio in reset status flag
    typedef bit_field_t<8, 0xf> CSR_MSISRANGE; // MSI clock ranges
    static constexpr uint32_t CSR_LSIPRE = 0x10; // LSI frequency prescaler
    static constexpr uint32_t CSR_LSIRDY = 0x2; // LSI oscillator ready
    static constexpr uint32_t CSR_LSION = 0x1; // LSI oscillator enable


    static constexpr uint32_t EXTCFGR_RESET_VALUE = 0x30000; // Reset value
    static constexpr uint32_t EXTCFGR_SHDHPREF = 0x10000; // HCLK3 shared prescaler flag (AHB3, Flash, and SRAM2)
    typedef bit_field_t<0, 0xf> EXTCFGR_SHDHPRE; // HCLK3 shared prescaler (AHB3, Flash, and SRAM2)
};

template<>
struct peripheral_t<STM32WL5x_CM0P, RCC>
{
    static constexpr periph_t P = RCC;
    using T = stm32wl5x_cm0p_rcc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WL5x_CM4, RCC>
{
    static constexpr periph_t P = RCC;
    using T = stm32wl5x_cm0p_rcc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WLE5_CM4, RCC>
{
    static constexpr periph_t P = RCC;
    using T = stm32wle5_cm4_rcc_t;
    static T& V;
};

using rcc_t = peripheral_t<svd, RCC>;

template<int INST> struct rcc_traits {};

template<> struct rcc_traits<0>
{
    using rcc = rcc_t;
    static constexpr signal_t LSCO = RCC_LSCO;
    static constexpr signal_t MCO = RCC_MCO;
};
