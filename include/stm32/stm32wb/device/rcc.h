#pragma once

////
//
//      STM32WB RCC peripherals
//
///

// RCC: Reset and clock control

struct stm32wb30_cm4_rcc_t
{
    volatile uint32_t CR; // Clock control register
    volatile uint32_t ICSCR; // Internal clock sources calibration register
    volatile uint32_t CFGR; // Clock configuration register
    volatile uint32_t PLLCFGR; // PLLSYS configuration register
    volatile uint32_t PLLSAI1CFGR; // PLLSAI1 configuration register
    reserved_t<0x1> _0x14;
    volatile uint32_t CIER; // Clock interrupt enable register
    volatile uint32_t CIFR; // Clock interrupt flag register
    volatile uint32_t CICR; // Clock interrupt clear register
    volatile uint32_t SMPSCR; // Step Down converter control register
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
    volatile uint32_t APB1ENR1; // APB1ENR1
    volatile uint32_t APB1ENR2; // APB1 peripheral clock enable register 2
    volatile uint32_t APB2ENR; // APB2ENR
    reserved_t<0x1> _0x64;
    volatile uint32_t AHB1SMENR; // AHB1 peripheral clocks enable in Sleep and Stop modes register
    volatile uint32_t AHB2SMENR; // AHB2 peripheral clocks enable in Sleep and Stop modes register
    volatile uint32_t AHB3SMENR; // AHB3 peripheral clocks enable in Sleep and Stop modes register
    reserved_t<0x1> _0x74;
    volatile uint32_t APB1SMENR1; // APB1SMENR1
    volatile uint32_t APB1SMENR2; // APB1 peripheral clocks enable in Sleep and Stop modes register 2
    volatile uint32_t APB2SMENR; // APB2SMENR
    reserved_t<0x1> _0x84;
    volatile uint32_t CCIPR; // CCIPR
    reserved_t<0x1> _0x8c;
    volatile uint32_t BDCR; // BDCR
    volatile uint32_t CSR; // CSR
    volatile uint32_t CRRCR; // Clock recovery RC register
    volatile uint32_t HSECR; // Clock HSE register
    reserved_t<0x1a> _0xa0;
    volatile uint32_t EXTCFGR; // Extended clock recovery register
    reserved_t<0xf> _0x10c;
    volatile uint32_t C2AHB1ENR; // CPU2 AHB1 peripheral clock enable register
    volatile uint32_t C2AHB2ENR; // CPU2 AHB2 peripheral clock enable register
    volatile uint32_t C2AHB3ENR; // CPU2 AHB3 peripheral clock enable register
    reserved_t<0x1> _0x154;
    volatile uint32_t C2APB1ENR1; // CPU2 APB1ENR1
    volatile uint32_t C2APB1ENR2; // CPU2 APB1 peripheral clock enable register 2
    volatile uint32_t C2APB2ENR; // CPU2 APB2ENR
    volatile uint32_t C2APB3ENR; // CPU2 APB3ENR
    volatile uint32_t C2AHB1SMENR; // CPU2 AHB1 peripheral clocks enable in Sleep and Stop modes register
    volatile uint32_t C2AHB2SMENR; // CPU2 AHB2 peripheral clocks enable in Sleep and Stop modes register
    volatile uint32_t C2AHB3SMENR; // CPU2 AHB3 peripheral clocks enable in Sleep and Stop modes register
    reserved_t<0x1> _0x174;
    volatile uint32_t C2APB1SMENR1; // CPU2 APB1SMENR1
    volatile uint32_t C2APB1SMENR2; // CPU2 APB1 peripheral clocks enable in Sleep and Stop modes register 2
    volatile uint32_t C2APB2SMENR; // CPU2 APB2SMENR
    volatile uint32_t C2APB3SMENR; // CPU2 APB3SMENR

    static constexpr uint32_t CR_RESET_VALUE = 0x61; // Reset value
    static constexpr uint32_t CR_PLLSAI1RDY = 0x8000000; // SAI1 PLL clock ready flag
    static constexpr uint32_t CR_PLLSAI1ON = 0x4000000; // SAI1 PLL enable
    static constexpr uint32_t CR_PLLRDY = 0x2000000; // Main PLL clock ready flag
    static constexpr uint32_t CR_PLLON = 0x1000000; // Main PLL enable
    static constexpr uint32_t CR_HSEPRE = 0x100000; // HSE sysclk and PLL M divider prescaler
    static constexpr uint32_t CR_CSSON = 0x80000; // HSE Clock security system enable
    static constexpr uint32_t CR_HSEBYP = 0x40000; // HSE crystal oscillator bypass
    static constexpr uint32_t CR_HSERDY = 0x20000; // HSE clock ready flag
    static constexpr uint32_t CR_HSEON = 0x10000; // HSE clock enabled
    static constexpr uint32_t CR_HSIKERDY = 0x1000; // HSI kernel clock ready flag for peripherals requests
    static constexpr uint32_t CR_HSIASFS = 0x800; // HSI automatic start from Stop
    static constexpr uint32_t CR_HSIRDY = 0x400; // HSI clock ready flag
    static constexpr uint32_t CR_HSIKERON = 0x200; // HSI always enable for peripheral kernels
    static constexpr uint32_t CR_HSION = 0x100; // HSI clock enabled
    typedef bit_field_t<4, 0xf> CR_MSIRANGE; // MSI clock ranges
    static constexpr uint32_t CR_MSIPLLEN = 0x4; // MSI clock PLL enable
    static constexpr uint32_t CR_MSIRDY = 0x2; // MSI clock ready flag
    static constexpr uint32_t CR_MSION = 0x1; // MSI clock enable

    static constexpr uint32_t ICSCR_RESET_VALUE = 0x40000000; // Reset value
    typedef bit_field_t<24, 0x7f> ICSCR_HSITRIM; // HSI clock trimming
    typedef bit_field_t<16, 0xff> ICSCR_HSICAL; // HSI clock calibration
    typedef bit_field_t<8, 0xff> ICSCR_MSITRIM; // MSI clock trimming
    typedef bit_field_t<0, 0xff> ICSCR_MSICAL; // MSI clock calibration

    static constexpr uint32_t CFGR_RESET_VALUE = 0x70000; // Reset value
    typedef bit_field_t<28, 0x7> CFGR_MCOPRE; // Microcontroller clock output prescaler
    typedef bit_field_t<24, 0xf> CFGR_MCOSEL; // Microcontroller clock output
    static constexpr uint32_t CFGR_PPRE2F = 0x40000; // APB2 prescaler flag
    static constexpr uint32_t CFGR_PPRE1F = 0x20000; // APB1 prescaler flag
    static constexpr uint32_t CFGR_HPREF = 0x10000; // AHB prescaler flag
    static constexpr uint32_t CFGR_STOPWUCK = 0x8000; // Wakeup from Stop and CSS backup clock selection
    typedef bit_field_t<11, 0x7> CFGR_PPRE2; // APB high-speed prescaler (APB2)
    typedef bit_field_t<8, 0x7> CFGR_PPRE1; // PB low-speed prescaler (APB1)
    typedef bit_field_t<4, 0xf> CFGR_HPRE; // AHB prescaler
    typedef bit_field_t<2, 0x3> CFGR_SWS; // System clock switch status
    typedef bit_field_t<0, 0x3> CFGR_SW; // System clock switch

    static constexpr uint32_t PLLCFGR_RESET_VALUE = 0x22040100; // Reset value
    typedef bit_field_t<29, 0x7> PLLCFGR_PLLR; // Main PLLSYS division factor R for SYSCLK (system clock)
    static constexpr uint32_t PLLCFGR_PLLREN = 0x10000000; // Main PLLSYSR PLLCLK output enable
    typedef bit_field_t<25, 0x7> PLLCFGR_PLLQ; // Main PLLSYS division factor Q for PLLSYSUSBCLK
    static constexpr uint32_t PLLCFGR_PLLQEN = 0x1000000; // Main PLLSYSQ output enable
    typedef bit_field_t<17, 0x1f> PLLCFGR_PLLP; // Main PLL division factor P for PPLSYSSAICLK
    static constexpr uint32_t PLLCFGR_PLLPEN = 0x10000; // Main PLLSYSP output enable
    typedef bit_field_t<8, 0x7f> PLLCFGR_PLLN; // Main PLLSYS multiplication factor N
    typedef bit_field_t<4, 0x7> PLLCFGR_PLLM; // Division factor M for the main PLL and audio PLL (PLLSAI1 and PLLSAI2) input clock
    typedef bit_field_t<0, 0x3> PLLCFGR_PLLSRC; // Main PLL, PLLSAI1 and PLLSAI2 entry clock source

    static constexpr uint32_t PLLSAI1CFGR_RESET_VALUE = 0x22040100; // Reset value
    typedef bit_field_t<29, 0x7> PLLSAI1CFGR_PLLR; // PLLSAI division factor R for PLLADC1CLK (ADC clock)
    static constexpr uint32_t PLLSAI1CFGR_PLLREN = 0x10000000; // PLLSAI PLLADC1CLK output enable
    typedef bit_field_t<25, 0x7> PLLSAI1CFGR_PLLQ; // SAIPLL division factor Q for PLLSAIUSBCLK (48 MHz clock)
    static constexpr uint32_t PLLSAI1CFGR_PLLQEN = 0x1000000; // SAIPLL PLLSAIUSBCLK output enable
    typedef bit_field_t<17, 0x1f> PLLSAI1CFGR_PLLP; // SAI1PLL division factor P for PLLSAICLK (SAI1clock)
    static constexpr uint32_t PLLSAI1CFGR_PLLPEN = 0x10000; // SAIPLL PLLSAI1CLK output enable
    typedef bit_field_t<8, 0x7f> PLLSAI1CFGR_PLLN; // SAIPLL multiplication factor for VCO


    static constexpr uint32_t CIER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CIER_LSI2RDYIE = 0x800; // LSI2 ready interrupt enable
    static constexpr uint32_t CIER_HSI48RDYIE = 0x400; // HSI48 ready interrupt enable
    static constexpr uint32_t CIER_LSECSSIE = 0x200; // LSE clock security system interrupt enable
    static constexpr uint32_t CIER_PLLSAI1RDYIE = 0x40; // PLLSAI1 ready interrupt enable
    static constexpr uint32_t CIER_PLLRDYIE = 0x20; // PLLSYS ready interrupt enable
    static constexpr uint32_t CIER_HSERDYIE = 0x10; // HSE ready interrupt enable
    static constexpr uint32_t CIER_HSIRDYIE = 0x8; // HSI ready interrupt enable
    static constexpr uint32_t CIER_MSIRDYIE = 0x4; // MSI ready interrupt enable
    static constexpr uint32_t CIER_LSERDYIE = 0x2; // LSE ready interrupt enable
    static constexpr uint32_t CIER_LSI1RDYIE = 0x1; // LSI1 ready interrupt enable

    static constexpr uint32_t CIFR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CIFR_LSI2RDYF = 0x800; // LSI2 ready interrupt flag
    static constexpr uint32_t CIFR_HSI48RDYF = 0x400; // HSI48 ready interrupt flag
    static constexpr uint32_t CIFR_LSECSSF = 0x200; // LSE Clock security system interrupt flag
    static constexpr uint32_t CIFR_HSECSSF = 0x100; // HSE Clock security system interrupt flag
    static constexpr uint32_t CIFR_PLLSAI1RDYF = 0x40; // PLLSAI1 ready interrupt flag
    static constexpr uint32_t CIFR_PLLRDYF = 0x20; // PLL ready interrupt flag
    static constexpr uint32_t CIFR_HSERDYF = 0x10; // HSE ready interrupt flag
    static constexpr uint32_t CIFR_HSIRDYF = 0x8; // HSI ready interrupt flag
    static constexpr uint32_t CIFR_MSIRDYF = 0x4; // MSI ready interrupt flag
    static constexpr uint32_t CIFR_LSERDYF = 0x2; // LSE ready interrupt flag
    static constexpr uint32_t CIFR_LSI1RDYF = 0x1; // LSI1 ready interrupt flag

    static constexpr uint32_t CICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CICR_LSI2RDYC = 0x800; // LSI2 ready interrupt clear
    static constexpr uint32_t CICR_HSI48RDYC = 0x400; // HSI48 ready interrupt clear
    static constexpr uint32_t CICR_LSECSSC = 0x200; // LSE Clock security system interrupt clear
    static constexpr uint32_t CICR_HSECSSC = 0x100; // HSE Clock security system interrupt clear
    static constexpr uint32_t CICR_PLLSAI1RDYC = 0x40; // PLLSAI1 ready interrupt clear
    static constexpr uint32_t CICR_PLLRDYC = 0x20; // PLL ready interrupt clear
    static constexpr uint32_t CICR_HSERDYC = 0x10; // HSE ready interrupt clear
    static constexpr uint32_t CICR_HSIRDYC = 0x8; // HSI ready interrupt clear
    static constexpr uint32_t CICR_MSIRDYC = 0x4; // MSI ready interrupt clear
    static constexpr uint32_t CICR_LSERDYC = 0x2; // LSE ready interrupt clear
    static constexpr uint32_t CICR_LSI1RDYC = 0x1; // LSI1 ready interrupt clear

    static constexpr uint32_t SMPSCR_RESET_VALUE = 0x301; // Reset value
    typedef bit_field_t<8, 0x3> SMPSCR_SMPSSWS; // Step Down converter clock switch status
    typedef bit_field_t<4, 0x3> SMPSCR_SMPSDIV; // Step Down converter clock prescaler
    typedef bit_field_t<0, 0x3> SMPSCR_SMPSSEL; // Step Down converter clock selection

    static constexpr uint32_t AHB1RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB1RSTR_TSCRST = 0x10000; // Touch Sensing Controller reset
    static constexpr uint32_t AHB1RSTR_CRCRST = 0x1000; // CRC reset
    static constexpr uint32_t AHB1RSTR_DMAMUXRST = 0x4; // DMAMUX reset
    static constexpr uint32_t AHB1RSTR_DMA2RST = 0x2; // DMA2 reset
    static constexpr uint32_t AHB1RSTR_DMA1RST = 0x1; // DMA1 reset

    static constexpr uint32_t AHB2RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB2RSTR_AES1RST = 0x10000; // AES1 hardware accelerator reset
    static constexpr uint32_t AHB2RSTR_ADC1RST = 0x2000; // ADC reset
    static constexpr uint32_t AHB2RSTR_GPIOHRST = 0x80; // IO port H reset
    static constexpr uint32_t AHB2RSTR_GPIOERST = 0x10; // IO port E reset
    static constexpr uint32_t AHB2RSTR_GPIODRST = 0x8; // IO port D reset
    static constexpr uint32_t AHB2RSTR_GPIOCRST = 0x4; // IO port C reset
    static constexpr uint32_t AHB2RSTR_GPIOBRST = 0x2; // IO port B reset
    static constexpr uint32_t AHB2RSTR_GPIOARST = 0x1; // IO port A reset

    static constexpr uint32_t AHB3RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB3RSTR_FLASHRST = 0x2000000; // Flash interface reset
    static constexpr uint32_t AHB3RSTR_IPCCRST = 0x100000; // IPCC interface reset
    static constexpr uint32_t AHB3RSTR_HSEMRST = 0x80000; // HSEM interface reset
    static constexpr uint32_t AHB3RSTR_RNGRST = 0x40000; // RNG interface reset
    static constexpr uint32_t AHB3RSTR_AES2RST = 0x20000; // AES2 interface reset
    static constexpr uint32_t AHB3RSTR_PKARST = 0x10000; // PKA interface reset
    static constexpr uint32_t AHB3RSTR_QSPIRST = 0x100; // Quad SPI memory interface reset


    static constexpr uint32_t APB1RSTR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1RSTR1_LPTIM1RST = 0x80000000; // Low Power Timer 1 reset
    static constexpr uint32_t APB1RSTR1_USBFSRST = 0x4000000; // USB FS reset
    static constexpr uint32_t APB1RSTR1_CRSRST = 0x1000000; // CRS reset
    static constexpr uint32_t APB1RSTR1_I2C3RST = 0x800000; // I2C3 reset
    static constexpr uint32_t APB1RSTR1_I2C1RST = 0x200000; // I2C1 reset
    static constexpr uint32_t APB1RSTR1_SPI2RST = 0x4000; // SPI2 reset
    static constexpr uint32_t APB1RSTR1_LCDRST = 0x200; // LCD interface reset
    static constexpr uint32_t APB1RSTR1_TIM2RST = 0x1; // TIM2 timer reset

    static constexpr uint32_t APB1RSTR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1RSTR2_LPTIM2RST = 0x20; // Low-power timer 2 reset
    static constexpr uint32_t APB1RSTR2_LPUART1RST = 0x1; // Low-power UART 1 reset

    static constexpr uint32_t APB2RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2RSTR_SAI1RST = 0x200000; // Serial audio interface 1 (SAI1) reset
    static constexpr uint32_t APB2RSTR_TIM17RST = 0x40000; // TIM17 timer reset
    static constexpr uint32_t APB2RSTR_TIM16RST = 0x20000; // TIM16 timer reset
    static constexpr uint32_t APB2RSTR_USART1RST = 0x4000; // USART1 reset
    static constexpr uint32_t APB2RSTR_SPI1RST = 0x1000; // SPI1 reset
    static constexpr uint32_t APB2RSTR_TIM1RST = 0x800; // TIM1 timer reset

    static constexpr uint32_t APB3RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB3RSTR_RFRST = 0x1; // Radio system BLE reset

    static constexpr uint32_t AHB1ENR_RESET_VALUE = 0x100; // Reset value
    static constexpr uint32_t AHB1ENR_TSCEN = 0x10000; // Touch Sensing Controller clock enable
    static constexpr uint32_t AHB1ENR_CRCEN = 0x1000; // CPU1 CRC clock enable
    static constexpr uint32_t AHB1ENR_DMAMUXEN = 0x4; // DMAMUX clock enable
    static constexpr uint32_t AHB1ENR_DMA2EN = 0x2; // DMA2 clock enable
    static constexpr uint32_t AHB1ENR_DMA1EN = 0x1; // DMA1 clock enable

    static constexpr uint32_t AHB2ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB2ENR_AES1EN = 0x10000; // AES1 accelerator clock enable
    static constexpr uint32_t AHB2ENR_ADC1EN = 0x2000; // ADC clock enable
    static constexpr uint32_t AHB2ENR_GPIOHEN = 0x80; // IO port H clock enable
    static constexpr uint32_t AHB2ENR_GPIOEEN = 0x10; // IO port E clock enable
    static constexpr uint32_t AHB2ENR_GPIODEN = 0x8; // IO port D clock enable
    static constexpr uint32_t AHB2ENR_GPIOCEN = 0x4; // IO port C clock enable
    static constexpr uint32_t AHB2ENR_GPIOBEN = 0x2; // IO port B clock enable
    static constexpr uint32_t AHB2ENR_GPIOAEN = 0x1; // IO port A clock enable

    static constexpr uint32_t AHB3ENR_RESET_VALUE = 0x2080000; // Reset value
    static constexpr uint32_t AHB3ENR_FLASHEN = 0x2000000; // FLASHEN
    static constexpr uint32_t AHB3ENR_IPCCEN = 0x100000; // IPCCEN
    static constexpr uint32_t AHB3ENR_HSEMEN = 0x80000; // HSEMEN
    static constexpr uint32_t AHB3ENR_RNGEN = 0x40000; // RNGEN
    static constexpr uint32_t AHB3ENR_AES2EN = 0x20000; // AES2EN
    static constexpr uint32_t AHB3ENR_PKAEN = 0x10000; // PKAEN
    static constexpr uint32_t AHB3ENR_QSPIEN = 0x100; // QSPIEN


    static constexpr uint32_t APB1ENR1_RESET_VALUE = 0x400; // Reset value
    static constexpr uint32_t APB1ENR1_LPTIM1EN = 0x80000000; // CPU1 Low power timer 1 clock enable
    static constexpr uint32_t APB1ENR1_USBEN = 0x4000000; // CPU1 USB clock enable
    static constexpr uint32_t APB1ENR1_CRSEN = 0x1000000; // CPU1 CRS clock enable
    static constexpr uint32_t APB1ENR1_I2C3EN = 0x800000; // CPU1 I2C3 clock enable
    static constexpr uint32_t APB1ENR1_I2C1EN = 0x200000; // CPU1 I2C1 clock enable
    static constexpr uint32_t APB1ENR1_SPI2EN = 0x4000; // CPU1 SPI2 clock enable
    static constexpr uint32_t APB1ENR1_WWDGEN = 0x800; // CPU1 Window watchdog clock enable
    static constexpr uint32_t APB1ENR1_RTCAPBEN = 0x400; // CPU1 RTC APB clock enable
    static constexpr uint32_t APB1ENR1_LCDEN = 0x200; // CPU1 LCD clock enable
    static constexpr uint32_t APB1ENR1_TIM2EN = 0x1; // CPU1 TIM2 timer clock enable

    static constexpr uint32_t APB1ENR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1ENR2_LPTIM2EN = 0x20; // CPU1 LPTIM2EN
    static constexpr uint32_t APB1ENR2_LPUART1EN = 0x1; // CPU1 Low power UART 1 clock enable

    static constexpr uint32_t APB2ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2ENR_SAI1EN = 0x200000; // CPU1 SAI1 clock enable
    static constexpr uint32_t APB2ENR_TIM17EN = 0x40000; // CPU1 TIM17 timer clock enable
    static constexpr uint32_t APB2ENR_TIM16EN = 0x20000; // CPU1 TIM16 timer clock enable
    static constexpr uint32_t APB2ENR_USART1EN = 0x4000; // CPU1 USART1clock enable
    static constexpr uint32_t APB2ENR_SPI1EN = 0x1000; // CPU1 SPI1 clock enable
    static constexpr uint32_t APB2ENR_TIM1EN = 0x800; // CPU1 TIM1 timer clock enable


    static constexpr uint32_t AHB1SMENR_RESET_VALUE = 0x11207; // Reset value
    static constexpr uint32_t AHB1SMENR_TSCSMEN = 0x10000; // CPU1 Touch Sensing Controller clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB1SMENR_CRCSMEN = 0x1000; // CPU1 CRCSMEN
    static constexpr uint32_t AHB1SMENR_SRAM1SMEN = 0x200; // CPU1 SRAM1 interface clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB1SMENR_DMAMUXSMEN = 0x4; // CPU1 DMAMUX clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB1SMENR_DMA2SMEN = 0x2; // CPU1 DMA2 clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB1SMENR_DMA1SMEN = 0x1; // CPU1 DMA1 clocks enable during Sleep and Stop modes

    static constexpr uint32_t AHB2SMENR_RESET_VALUE = 0x1209f; // Reset value
    static constexpr uint32_t AHB2SMENR_AES1SMEN = 0x10000; // CPU1 AES1 accelerator clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB2SMENR_ADCFSSMEN = 0x2000; // CPU1 ADC clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB2SMENR_GPIOHSMEN = 0x80; // CPU1 IO port H clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB2SMENR_GPIOESMEN = 0x10; // CPU1 IO port E clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB2SMENR_GPIODSMEN = 0x8; // CPU1 IO port D clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB2SMENR_GPIOCSMEN = 0x4; // CPU1 IO port C clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB2SMENR_GPIOBSMEN = 0x2; // CPU1 IO port B clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB2SMENR_GPIOASMEN = 0x1; // CPU1 IO port A clocks enable during Sleep and Stop modes

    static constexpr uint32_t AHB3SMENR_RESET_VALUE = 0x3070100; // Reset value
    static constexpr uint32_t AHB3SMENR_FLASHSMEN = 0x2000000; // Flash interface clocks enable during CPU1 sleep mode
    static constexpr uint32_t AHB3SMENR_SRAM2SMEN = 0x1000000; // SRAM2a and SRAM2b memory interface clocks enable during CPU1 sleep mode
    static constexpr uint32_t AHB3SMENR_RNGSMEN = 0x40000; // True RNG clocks enable during CPU1 sleep mode
    static constexpr uint32_t AHB3SMENR_AES2SMEN = 0x20000; // AES2 accelerator clocks enable during CPU1 sleep mode
    static constexpr uint32_t AHB3SMENR_PKASMEN = 0x10000; // PKA accelerator clocks enable during CPU1 sleep mode
    static constexpr uint32_t AHB3SMENR_QSPISMEN = 0x100; // QSPISMEN


    static constexpr uint32_t APB1SMENR1_RESET_VALUE = 0x85a04e01; // Reset value
    static constexpr uint32_t APB1SMENR1_LPTIM1SMEN = 0x80000000; // Low power timer 1 clocks enable during CPU1 Sleep mode
    static constexpr uint32_t APB1SMENR1_USBSMEN = 0x4000000; // USB FS clocks enable during CPU1 Sleep mode
    static constexpr uint32_t APB1SMENR1_CRSMEN = 0x1000000; // CRS clocks enable during CPU1 Sleep mode
    static constexpr uint32_t APB1SMENR1_I2C3SMEN = 0x800000; // I2C3 clocks enable during CPU1 Sleep mode
    static constexpr uint32_t APB1SMENR1_I2C1SMEN = 0x200000; // I2C1 clocks enable during CPU1 Sleep mode
    static constexpr uint32_t APB1SMENR1_SPI2SMEN = 0x4000; // SPI2 clocks enable during CPU1 Sleep mode
    static constexpr uint32_t APB1SMENR1_WWDGSMEN = 0x800; // Window watchdog clocks enable during CPU1 Sleep mode
    static constexpr uint32_t APB1SMENR1_RTCAPBSMEN = 0x400; // RTC APB clocks enable during CPU1 Sleep mode
    static constexpr uint32_t APB1SMENR1_LCDSMEN = 0x200; // LCD clocks enable during CPU1 Sleep mode
    static constexpr uint32_t APB1SMENR1_TIM2SMEN = 0x1; // TIM2 timer clocks enable during CPU1 Sleep mode

    static constexpr uint32_t APB1SMENR2_RESET_VALUE = 0x21; // Reset value
    static constexpr uint32_t APB1SMENR2_LPTIM2SMEN = 0x20; // Low power timer 2 clocks enable during CPU1 Sleep mode
    static constexpr uint32_t APB1SMENR2_LPUART1SMEN = 0x1; // Low power UART 1 clocks enable during CPU1 Sleep mode

    static constexpr uint32_t APB2SMENR_RESET_VALUE = 0x265800; // Reset value
    static constexpr uint32_t APB2SMENR_SAI1SMEN = 0x200000; // SAI1 clocks enable during CPU1 Sleep mode
    static constexpr uint32_t APB2SMENR_TIM17SMEN = 0x40000; // TIM17 timer clocks enable during CPU1 Sleep mode
    static constexpr uint32_t APB2SMENR_TIM16SMEN = 0x20000; // TIM16 timer clocks enable during CPU1 Sleep mode
    static constexpr uint32_t APB2SMENR_USART1SMEN = 0x4000; // USART1clocks enable during CPU1 Sleep mode
    static constexpr uint32_t APB2SMENR_SPI1SMEN = 0x1000; // SPI1 clocks enable during CPU1 Sleep mode
    static constexpr uint32_t APB2SMENR_TIM1SMEN = 0x800; // TIM1 timer clocks enable during CPU1 Sleep mode


    static constexpr uint32_t CCIPR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<30, 0x3> CCIPR_RNGSEL; // RNG clock source selection
    typedef bit_field_t<28, 0x3> CCIPR_ADCSEL; // ADCs clock source selection
    typedef bit_field_t<26, 0x3> CCIPR_CLK48SEL; // 48 MHz clock source selection
    typedef bit_field_t<22, 0x3> CCIPR_SAI1SEL; // SAI1 clock source selection
    typedef bit_field_t<20, 0x3> CCIPR_LPTIM2SEL; // Low power timer 2 clock source selection
    typedef bit_field_t<18, 0x3> CCIPR_LPTIM1SEL; // Low power timer 1 clock source selection
    typedef bit_field_t<16, 0x3> CCIPR_I2C3SEL; // I2C3 clock source selection
    typedef bit_field_t<12, 0x3> CCIPR_I2C1SEL; // I2C1 clock source selection
    typedef bit_field_t<10, 0x3> CCIPR_LPUART1SEL; // LPUART1 clock source selection
    typedef bit_field_t<0, 0x3> CCIPR_USART1SEL; // USART1 clock source selection


    static constexpr uint32_t BDCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<25, 0x3> BDCR_LSCOSEL; // Low speed clock output selection
    static constexpr uint32_t BDCR_LSCOEN = 0x1000000; // Low speed clock output enable
    static constexpr uint32_t BDCR_BDRST = 0x10000; // Backup domain software reset
    static constexpr uint32_t BDCR_RTCEN = 0x8000; // RTC clock enable
    typedef bit_field_t<8, 0x3> BDCR_RTCSEL; // RTC clock source selection
    static constexpr uint32_t BDCR_LSECSSD_ = 0x40; // CSS on LSE failure detection
    static constexpr uint32_t BDCR_LSECSSON = 0x20; // LSECSSON
    typedef bit_field_t<3, 0x3> BDCR_LSEDRV; // SE oscillator drive capability
    static constexpr uint32_t BDCR_LSEBYP = 0x4; // LSE oscillator bypass
    static constexpr uint32_t BDCR_LSERDY = 0x2; // LSE oscillator ready
    static constexpr uint32_t BDCR_LSEON = 0x1; // LSE oscillator enable

    static constexpr uint32_t CSR_RESET_VALUE = 0xc000000; // Reset value
    static constexpr uint32_t CSR_LPWRRSTF = 0x80000000; // Low-power reset flag
    static constexpr uint32_t CSR_WWDGRSTF = 0x40000000; // Window watchdog reset flag
    static constexpr uint32_t CSR_IWDGRSTF = 0x20000000; // Independent window watchdog reset flag
    static constexpr uint32_t CSR_SFTRSTF = 0x10000000; // Software reset flag
    static constexpr uint32_t CSR_BORRSTF = 0x8000000; // BOR flag
    static constexpr uint32_t CSR_PINRSTF = 0x4000000; // Pin reset flag
    static constexpr uint32_t CSR_OBLRSTF = 0x2000000; // Option byte loader reset flag
    static constexpr uint32_t CSR_RMVF = 0x800000; // Remove reset flag
    typedef bit_field_t<14, 0x3> CSR_RFWKPSEL; // RF system wakeup clock source selection
    typedef bit_field_t<8, 0xf> CSR_LSI2BW; // LSI2 oscillator bias configuration
    static constexpr uint32_t CSR_LSI2TRIMOK = 0x20; // LSI2 oscillator trim OK
    static constexpr uint32_t CSR_LSI2TRIMEN = 0x10; // LSI2 oscillator trimming enable
    static constexpr uint32_t CSR_LSI2RDY = 0x8; // LSI2 oscillator ready
    static constexpr uint32_t CSR_LSI2ON = 0x4; // LSI2 oscillator enabled
    static constexpr uint32_t CSR_LSI1RDY = 0x2; // LSI1 oscillator ready
    static constexpr uint32_t CSR_LSI1ON = 0x1; // LSI1 oscillator enabled
    static constexpr uint32_t CSR_RFRSTS = 0x10000; // Radio system BLE and 802.15.4 reset status

    static constexpr uint32_t CRRCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<7, 0x1ff> CRRCR_HSI48CAL; // HSI48 clock calibration
    static constexpr uint32_t CRRCR_HSI48RDY = 0x2; // HSI48 clock ready
    static constexpr uint32_t CRRCR_HSI48ON = 0x1; // HSI48 oscillator enabled

    static constexpr uint32_t HSECR_RESET_VALUE = 0x30; // Reset value
    typedef bit_field_t<8, 0x3f> HSECR_HSETUNE; // HSE capacitor tuning
    typedef bit_field_t<4, 0x7> HSECR_HSEGMC; // HSE current control
    static constexpr uint32_t HSECR_HSES = 0x8; // HSE Sense amplifier threshold
    static constexpr uint32_t HSECR_UNLOCKED = 0x1; // Register lock system


    static constexpr uint32_t EXTCFGR_RESET_VALUE = 0x30000; // Reset value
    static constexpr uint32_t EXTCFGR_RFCSS = 0x100000; // RF clock source selected
    static constexpr uint32_t EXTCFGR_C2HPREF = 0x20000; // CPU2 AHB prescaler flag
    static constexpr uint32_t EXTCFGR_SHDHPREF = 0x10000; // Shared AHB prescaler flag
    typedef bit_field_t<4, 0xf> EXTCFGR_C2HPRE; // CPU2 AHB prescaler
    typedef bit_field_t<0, 0xf> EXTCFGR_SHDHPRE; // Shared AHB prescaler


    static constexpr uint32_t C2AHB1ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C2AHB1ENR_TSCEN = 0x10000; // CPU2 Touch Sensing Controller clock enable
    static constexpr uint32_t C2AHB1ENR_CRCEN = 0x1000; // CPU2 CRC clock enable
    static constexpr uint32_t C2AHB1ENR_SRAM1EN = 0x200; // CPU2 SRAM1 clock enable
    static constexpr uint32_t C2AHB1ENR_DMAMUXEN = 0x4; // CPU2 DMAMUX clock enable
    static constexpr uint32_t C2AHB1ENR_DMA2EN = 0x2; // CPU2 DMA2 clock enable
    static constexpr uint32_t C2AHB1ENR_DMA1EN = 0x1; // CPU2 DMA1 clock enable

    static constexpr uint32_t C2AHB2ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C2AHB2ENR_AES1EN = 0x10000; // CPU2 AES1 accelerator clock enable
    static constexpr uint32_t C2AHB2ENR_ADC1EN = 0x2000; // CPU2 ADC clock enable
    static constexpr uint32_t C2AHB2ENR_GPIOHEN = 0x80; // CPU2 IO port H clock enable
    static constexpr uint32_t C2AHB2ENR_GPIOEEN = 0x10; // CPU2 IO port E clock enable
    static constexpr uint32_t C2AHB2ENR_GPIODEN = 0x8; // CPU2 IO port D clock enable
    static constexpr uint32_t C2AHB2ENR_GPIOCEN = 0x4; // CPU2 IO port C clock enable
    static constexpr uint32_t C2AHB2ENR_GPIOBEN = 0x2; // CPU2 IO port B clock enable
    static constexpr uint32_t C2AHB2ENR_GPIOAEN = 0x1; // CPU2 IO port A clock enable

    static constexpr uint32_t C2AHB3ENR_RESET_VALUE = 0x2080000; // Reset value
    static constexpr uint32_t C2AHB3ENR_FLASHEN = 0x2000000; // CPU2 FLASHEN
    static constexpr uint32_t C2AHB3ENR_IPCCEN = 0x100000; // CPU2 IPCCEN
    static constexpr uint32_t C2AHB3ENR_HSEMEN = 0x80000; // CPU2 HSEMEN
    static constexpr uint32_t C2AHB3ENR_RNGEN = 0x40000; // CPU2 RNGEN
    static constexpr uint32_t C2AHB3ENR_AES2EN = 0x20000; // CPU2 AES2EN
    static constexpr uint32_t C2AHB3ENR_PKAEN = 0x10000; // CPU2 PKAEN


    static constexpr uint32_t C2APB1ENR1_RESET_VALUE = 0x400; // Reset value
    static constexpr uint32_t C2APB1ENR1_LPTIM1EN = 0x80000000; // CPU2 Low power timer 1 clock enable
    static constexpr uint32_t C2APB1ENR1_USBEN = 0x4000000; // CPU2 USB clock enable
    static constexpr uint32_t C2APB1ENR1_CRSEN = 0x1000000; // CPU2 CRS clock enable
    static constexpr uint32_t C2APB1ENR1_I2C3EN = 0x800000; // CPU2 I2C3 clock enable
    static constexpr uint32_t C2APB1ENR1_I2C1EN = 0x200000; // CPU2 I2C1 clock enable
    static constexpr uint32_t C2APB1ENR1_SPI2EN = 0x4000; // CPU2 SPI2 clock enable
    static constexpr uint32_t C2APB1ENR1_RTCAPBEN = 0x400; // CPU2 RTC APB clock enable
    static constexpr uint32_t C2APB1ENR1_LCDEN = 0x200; // CPU2 LCD clock enable
    static constexpr uint32_t C2APB1ENR1_TIM2EN = 0x1; // CPU2 TIM2 timer clock enable

    static constexpr uint32_t C2APB1ENR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C2APB1ENR2_LPTIM2EN = 0x20; // CPU2 LPTIM2EN
    static constexpr uint32_t C2APB1ENR2_LPUART1EN = 0x1; // CPU2 Low power UART 1 clock enable

    static constexpr uint32_t C2APB2ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C2APB2ENR_SAI1EN = 0x200000; // CPU2 SAI1 clock enable
    static constexpr uint32_t C2APB2ENR_TIM17EN = 0x40000; // CPU2 TIM17 timer clock enable
    static constexpr uint32_t C2APB2ENR_TIM16EN = 0x20000; // CPU2 TIM16 timer clock enable
    static constexpr uint32_t C2APB2ENR_USART1EN = 0x4000; // CPU2 USART1clock enable
    static constexpr uint32_t C2APB2ENR_SPI1EN = 0x1000; // CPU2 SPI1 clock enable
    static constexpr uint32_t C2APB2ENR_TIM1EN = 0x800; // CPU2 TIM1 timer clock enable

    static constexpr uint32_t C2APB3ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C2APB3ENR_EN802 = 0x2; // CPU2 802.15.4 interface clock enable
    static constexpr uint32_t C2APB3ENR_BLEEN = 0x1; // CPU2 BLE interface clock enable

    static constexpr uint32_t C2AHB1SMENR_RESET_VALUE = 0x11207; // Reset value
    static constexpr uint32_t C2AHB1SMENR_TSCSMEN = 0x10000; // CPU2 Touch Sensing Controller clocks enable during Sleep and Stop modes
    static constexpr uint32_t C2AHB1SMENR_CRCSMEN = 0x1000; // CPU2 CRCSMEN
    static constexpr uint32_t C2AHB1SMENR_SRAM1SMEN = 0x200; // SRAM1 interface clock enable during CPU1 CSleep mode
    static constexpr uint32_t C2AHB1SMENR_DMAMUXSMEN = 0x4; // CPU2 DMAMUX clocks enable during Sleep and Stop modes
    static constexpr uint32_t C2AHB1SMENR_DMA2SMEN = 0x2; // CPU2 DMA2 clocks enable during Sleep and Stop modes
    static constexpr uint32_t C2AHB1SMENR_DMA1SMEN = 0x1; // CPU2 DMA1 clocks enable during Sleep and Stop modes

    static constexpr uint32_t C2AHB2SMENR_RESET_VALUE = 0x1209f; // Reset value
    static constexpr uint32_t C2AHB2SMENR_AES1SMEN = 0x10000; // CPU2 AES1 accelerator clocks enable during Sleep and Stop modes
    static constexpr uint32_t C2AHB2SMENR_ADCFSSMEN = 0x2000; // CPU2 ADC clocks enable during Sleep and Stop modes
    static constexpr uint32_t C2AHB2SMENR_GPIOHSMEN = 0x80; // CPU2 IO port H clocks enable during Sleep and Stop modes
    static constexpr uint32_t C2AHB2SMENR_GPIOESMEN = 0x10; // CPU2 IO port E clocks enable during Sleep and Stop modes
    static constexpr uint32_t C2AHB2SMENR_GPIODSMEN = 0x8; // CPU2 IO port D clocks enable during Sleep and Stop modes
    static constexpr uint32_t C2AHB2SMENR_GPIOCSMEN = 0x4; // CPU2 IO port C clocks enable during Sleep and Stop modes
    static constexpr uint32_t C2AHB2SMENR_GPIOBSMEN = 0x2; // CPU2 IO port B clocks enable during Sleep and Stop modes
    static constexpr uint32_t C2AHB2SMENR_GPIOASMEN = 0x1; // CPU2 IO port A clocks enable during Sleep and Stop modes

    static constexpr uint32_t C2AHB3SMENR_RESET_VALUE = 0x3070000; // Reset value
    static constexpr uint32_t C2AHB3SMENR_FLASHSMEN = 0x2000000; // Flash interface clocks enable during CPU2 sleep modes
    static constexpr uint32_t C2AHB3SMENR_SRAM2SMEN = 0x1000000; // SRAM2a and SRAM2b memory interface clocks enable during CPU2 sleep modes
    static constexpr uint32_t C2AHB3SMENR_RNGSMEN = 0x40000; // True RNG clocks enable during CPU2 sleep modes
    static constexpr uint32_t C2AHB3SMENR_AES2SMEN = 0x20000; // AES2 accelerator clocks enable during CPU2 sleep modes
    static constexpr uint32_t C2AHB3SMENR_PKASMEN = 0x10000; // PKA accelerator clocks enable during CPU2 sleep modes


    static constexpr uint32_t C2APB1SMENR1_RESET_VALUE = 0x85a04601; // Reset value
    static constexpr uint32_t C2APB1SMENR1_LPTIM1SMEN = 0x80000000; // Low power timer 1 clocks enable during CPU2 Sleep mode
    static constexpr uint32_t C2APB1SMENR1_USBSMEN = 0x4000000; // USB FS clocks enable during CPU2 Sleep mode
    static constexpr uint32_t C2APB1SMENR1_CRSMEN = 0x1000000; // CRS clocks enable during CPU2 Sleep mode
    static constexpr uint32_t C2APB1SMENR1_I2C3SMEN = 0x800000; // I2C3 clocks enable during CPU2 Sleep mode
    static constexpr uint32_t C2APB1SMENR1_I2C1SMEN = 0x200000; // I2C1 clocks enable during CPU2 Sleep mode
    static constexpr uint32_t C2APB1SMENR1_SPI2SMEN = 0x4000; // SPI2 clocks enable during CPU2 Sleep mode
    static constexpr uint32_t C2APB1SMENR1_RTCAPBSMEN = 0x400; // RTC APB clocks enable during CPU2 Sleep mode
    static constexpr uint32_t C2APB1SMENR1_LCDSMEN = 0x200; // LCD clocks enable during CPU2 Sleep mode
    static constexpr uint32_t C2APB1SMENR1_TIM2SMEN = 0x1; // TIM2 timer clocks enable during CPU2 Sleep mode

    static constexpr uint32_t C2APB1SMENR2_RESET_VALUE = 0x21; // Reset value
    static constexpr uint32_t C2APB1SMENR2_LPTIM2SMEN = 0x20; // Low power timer 2 clocks enable during CPU2 Sleep mode
    static constexpr uint32_t C2APB1SMENR2_LPUART1SMEN = 0x1; // Low power UART 1 clocks enable during CPU2 Sleep mode

    static constexpr uint32_t C2APB2SMENR_RESET_VALUE = 0x265800; // Reset value
    static constexpr uint32_t C2APB2SMENR_SAI1SMEN = 0x200000; // SAI1 clocks enable during CPU2 Sleep mode
    static constexpr uint32_t C2APB2SMENR_TIM17SMEN = 0x40000; // TIM17 timer clocks enable during CPU2 Sleep mode
    static constexpr uint32_t C2APB2SMENR_TIM16SMEN = 0x20000; // TIM16 timer clocks enable during CPU2 Sleep mode
    static constexpr uint32_t C2APB2SMENR_USART1SMEN = 0x4000; // USART1clocks enable during CPU2 Sleep mode
    static constexpr uint32_t C2APB2SMENR_SPI1SMEN = 0x1000; // SPI1 clocks enable during CPU2 Sleep mode
    static constexpr uint32_t C2APB2SMENR_TIM1SMEN = 0x800; // TIM1 timer clocks enable during CPU2 Sleep mode

    static constexpr uint32_t C2APB3SMENR_RESET_VALUE = 0x3; // Reset value
    static constexpr uint32_t C2APB3SMENR_SMEN802 = 0x2; // 802.15.4 interface clocks enable during CPU2 Sleep modes
    static constexpr uint32_t C2APB3SMENR_BLESMEN = 0x1; // BLE interface clocks enable during CPU2 Sleep mode
};

template<>
struct peripheral_t<STM32WB30_CM4, RCC>
{
    static constexpr periph_t P = RCC;
    using T = stm32wb30_cm4_rcc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WB35_CM4, RCC>
{
    static constexpr periph_t P = RCC;
    using T = stm32wb30_cm4_rcc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WB50_CM4, RCC>
{
    static constexpr periph_t P = RCC;
    using T = stm32wb30_cm4_rcc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WB55_CM4, RCC>
{
    static constexpr periph_t P = RCC;
    using T = stm32wb30_cm4_rcc_t;
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
