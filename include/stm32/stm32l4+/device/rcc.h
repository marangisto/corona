#pragma once

////
//
//      STM32L4+ RCC peripherals
//
///

// RCC: Reset and clock control

struct stm32l4p5_rcc_t
{
    volatile uint32_t CR; // Clock control register
    volatile uint32_t ICSCR; // Internal clock sources calibration register
    volatile uint32_t CFGR; // Clock configuration register
    volatile uint32_t PLLCFGR; // PLL configuration register
    volatile uint32_t PLLSAI1CFGR; // PLLSAI1 configuration register
    volatile uint32_t PLLSAI2CFGR; // PLLSAI2 configuration register
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
    reserved_t<0x1> _0x44;
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
    volatile uint32_t CCIPR2; // Peripherals independent clock configuration register

    static constexpr uint32_t CR_RESET_VALUE = 0x63; // Reset value
    static constexpr uint32_t CR_PLLSAI2RDY = 0x20000000; // SAI2 PLL clock ready flag
    static constexpr uint32_t CR_PLLSAI2ON = 0x10000000; // SAI2 PLL enable
    static constexpr uint32_t CR_PLLSAI1RDY = 0x8000000; // SAI1 PLL clock ready flag
    static constexpr uint32_t CR_PLLSAI1ON = 0x4000000; // SAI1 PLL enable
    static constexpr uint32_t CR_PLLRDY = 0x2000000; // Main PLL clock ready flag
    static constexpr uint32_t CR_PLLON = 0x1000000; // Main PLL enable
    static constexpr uint32_t CR_CSSON = 0x80000; // Clock security system enable
    static constexpr uint32_t CR_HSEBYP = 0x40000; // HSE crystal oscillator bypass
    static constexpr uint32_t CR_HSERDY = 0x20000; // HSE clock ready flag
    static constexpr uint32_t CR_HSEON = 0x10000; // HSE clock enable
    static constexpr uint32_t CR_HSIASFS = 0x800; // HSI automatic start from Stop
    static constexpr uint32_t CR_HSIRDY = 0x400; // HSI clock ready flag
    static constexpr uint32_t CR_HSIKERON = 0x200; // HSI always enable for peripheral kernels
    static constexpr uint32_t CR_HSION = 0x100; // HSI clock enable
    typedef bit_field_t<4, 0xf> CR_MSIRANGE; // MSI clock ranges
    static constexpr uint32_t CR_MSIRGSEL = 0x8; // MSI clock range selection
    static constexpr uint32_t CR_MSIPLLEN = 0x4; // MSI clock PLL enable
    static constexpr uint32_t CR_MSIRDY = 0x2; // MSI clock ready flag
    static constexpr uint32_t CR_MSION = 0x1; // MSI clock enable

    static constexpr uint32_t ICSCR_RESET_VALUE = 0x10000000; // Reset value
    typedef bit_field_t<24, 0x7f> ICSCR_HSITRIM; // HSI clock trimming
    typedef bit_field_t<16, 0xff> ICSCR_HSICAL; // HSI clock calibration
    typedef bit_field_t<8, 0xff> ICSCR_MSITRIM; // MSI clock trimming
    typedef bit_field_t<0, 0xff> ICSCR_MSICAL; // MSI clock calibration

    static constexpr uint32_t CFGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<28, 0x7> CFGR_MCOPRE; // Microcontroller clock output prescaler
    typedef bit_field_t<24, 0x7> CFGR_MCOSEL; // Microcontroller clock output
    static constexpr uint32_t CFGR_STOPWUCK = 0x8000; // Wakeup from Stop and CSS backup clock selection
    typedef bit_field_t<11, 0x7> CFGR_PPRE2; // APB high-speed prescaler (APB2)
    typedef bit_field_t<8, 0x7> CFGR_PPRE1; // PB low-speed prescaler (APB1)
    typedef bit_field_t<4, 0xf> CFGR_HPRE; // AHB prescaler
    typedef bit_field_t<2, 0x3> CFGR_SWS; // System clock switch status
    typedef bit_field_t<0, 0x3> CFGR_SW; // System clock switch

    static constexpr uint32_t PLLCFGR_RESET_VALUE = 0x1000; // Reset value
    typedef bit_field_t<27, 0x1f> PLLCFGR_PLLPDIV; // Main PLL division factor for PLLSAI2CLK
    typedef bit_field_t<25, 0x3> PLLCFGR_PLLR; // Main PLL division factor for PLLCLK (system clock)
    static constexpr uint32_t PLLCFGR_PLLREN = 0x1000000; // Main PLL PLLCLK output enable
    typedef bit_field_t<21, 0x3> PLLCFGR_PLLQ; // Main PLL division factor for PLLUSB1CLK(48 MHz clock)
    static constexpr uint32_t PLLCFGR_PLLQEN = 0x100000; // Main PLL PLLUSB1CLK output enable
    static constexpr uint32_t PLLCFGR_PLLP = 0x20000; // Main PLL division factor for PLLSAI3CLK (SAI1 and SAI2 clock)
    static constexpr uint32_t PLLCFGR_PLLPEN = 0x10000; // Main PLL PLLSAI3CLK output enable
    typedef bit_field_t<8, 0x7f> PLLCFGR_PLLN; // Main PLL multiplication factor for VCO
    typedef bit_field_t<4, 0xf> PLLCFGR_PLLM; // Division factor for the main PLL and audio PLL (PLLSAI1 and PLLSAI2) input clock
    typedef bit_field_t<0, 0x3> PLLCFGR_PLLSRC; // Main PLL, PLLSAI1 and PLLSAI2 entry clock source

    static constexpr uint32_t PLLSAI1CFGR_RESET_VALUE = 0x1000; // Reset value
    typedef bit_field_t<27, 0x1f> PLLSAI1CFGR_PLLSAI1PDIV; // PLLSAI1 division factor for PLLSAI1CLK
    typedef bit_field_t<25, 0x3> PLLSAI1CFGR_PLLSAI1R; // PLLSAI1 division factor for PLLADC1CLK (ADC clock)
    static constexpr uint32_t PLLSAI1CFGR_PLLSAI1REN = 0x1000000; // PLLSAI1 PLLADC1CLK output enable
    typedef bit_field_t<21, 0x3> PLLSAI1CFGR_PLLSAI1Q; // SAI1PLL division factor for PLLUSB2CLK (48 MHz clock)
    static constexpr uint32_t PLLSAI1CFGR_PLLSAI1QEN = 0x100000; // SAI1PLL PLLUSB2CLK output enable
    static constexpr uint32_t PLLSAI1CFGR_PLLSAI1P = 0x20000; // SAI1PLL division factor for PLLSAI1CLK (SAI1 or SAI2 clock)
    static constexpr uint32_t PLLSAI1CFGR_PLLSAI1PEN = 0x10000; // SAI1PLL PLLSAI1CLK output enable
    typedef bit_field_t<8, 0x7f> PLLSAI1CFGR_PLLSAI1N; // SAI1PLL multiplication factor for VCO
    typedef bit_field_t<4, 0xf> PLLSAI1CFGR_PLLSAI1M; // Division factor for PLLSAI1 input clock

    static constexpr uint32_t PLLSAI2CFGR_RESET_VALUE = 0x1000; // Reset value
    typedef bit_field_t<27, 0x1f> PLLSAI2CFGR_PLLSAI2PDIV; // PLLSAI2 division factor for PLLSAI2CLK
    typedef bit_field_t<25, 0x3> PLLSAI2CFGR_PLLSAI2R; // PLLSAI2 division factor for PLLADC2CLK (ADC clock)
    static constexpr uint32_t PLLSAI2CFGR_PLLSAI2REN = 0x1000000; // PLLSAI2 PLLADC2CLK output enable
    typedef bit_field_t<21, 0x3> PLLSAI2CFGR_PLLSAI2Q; // SAI2PLL PLLSAI2CLK output enable
    static constexpr uint32_t PLLSAI2CFGR_PLLSAI2QEN = 0x100000; // PLLSAI2 division factor for PLLDISCLK
    static constexpr uint32_t PLLSAI2CFGR_PLLSAI2P = 0x20000; // SAI1PLL division factor for PLLSAI2CLK (SAI1 or SAI2 clock)
    static constexpr uint32_t PLLSAI2CFGR_PLLSAI2PEN = 0x10000; // SAI2PLL PLLSAI2CLK output enable
    typedef bit_field_t<8, 0x7f> PLLSAI2CFGR_PLLSAI2N; // SAI2PLL multiplication factor for VCO
    typedef bit_field_t<4, 0xf> PLLSAI2CFGR_PLLSAI2M; // Division factor for PLLSAI2 input clock

    static constexpr uint32_t CIER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CIER_LSIRDYIE = 0x1; // LSI ready interrupt enable
    static constexpr uint32_t CIER_LSERDYIE = 0x2; // LSE ready interrupt enable
    static constexpr uint32_t CIER_MSIRDYIE = 0x4; // MSI ready interrupt enable
    static constexpr uint32_t CIER_HSIRDYIE = 0x8; // HSI ready interrupt enable
    static constexpr uint32_t CIER_HSERDYIE = 0x10; // HSE ready interrupt enable
    static constexpr uint32_t CIER_PLLRDYIE = 0x20; // PLL ready interrupt enable
    static constexpr uint32_t CIER_PLLSAI1RDYIE = 0x40; // PLLSAI1 ready interrupt enable
    static constexpr uint32_t CIER_PLLSAI2RDYIE = 0x80; // PLLSAI2 ready interrupt enable
    static constexpr uint32_t CIER_LSECSSIE = 0x200; // LSE clock security system interrupt enable
    static constexpr uint32_t CIER_HSI48RDYIE = 0x400; // HSI48 ready interrupt enable

    static constexpr uint32_t CIFR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CIFR_LSIRDYF = 0x1; // LSI ready interrupt flag
    static constexpr uint32_t CIFR_LSERDYF = 0x2; // LSE ready interrupt flag
    static constexpr uint32_t CIFR_MSIRDYF = 0x4; // MSI ready interrupt flag
    static constexpr uint32_t CIFR_HSIRDYF = 0x8; // HSI ready interrupt flag
    static constexpr uint32_t CIFR_HSERDYF = 0x10; // HSE ready interrupt flag
    static constexpr uint32_t CIFR_PLLRDYF = 0x20; // PLL ready interrupt flag
    static constexpr uint32_t CIFR_PLLSAI1RDYF = 0x40; // PLLSAI1 ready interrupt flag
    static constexpr uint32_t CIFR_PLLSAI2RDYF = 0x80; // PLLSAI2 ready interrupt flag
    static constexpr uint32_t CIFR_CSSF = 0x100; // Clock security system interrupt flag
    static constexpr uint32_t CIFR_LSECSSF = 0x200; // LSE Clock security system interrupt flag
    static constexpr uint32_t CIFR_HSI48RDYF = 0x400; // HSI48 ready interrupt flag

    static constexpr uint32_t CICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CICR_LSIRDYC = 0x1; // LSI ready interrupt clear
    static constexpr uint32_t CICR_LSERDYC = 0x2; // LSE ready interrupt clear
    static constexpr uint32_t CICR_MSIRDYC = 0x4; // MSI ready interrupt clear
    static constexpr uint32_t CICR_HSIRDYC = 0x8; // HSI ready interrupt clear
    static constexpr uint32_t CICR_HSERDYC = 0x10; // HSE ready interrupt clear
    static constexpr uint32_t CICR_PLLRDYC = 0x20; // PLL ready interrupt clear
    static constexpr uint32_t CICR_PLLSAI1RDYC = 0x40; // PLLSAI1 ready interrupt clear
    static constexpr uint32_t CICR_PLLSAI2RDYC = 0x80; // PLLSAI2 ready interrupt clear
    static constexpr uint32_t CICR_CSSC = 0x100; // Clock security system interrupt clear
    static constexpr uint32_t CICR_LSECSSC = 0x200; // LSE Clock security system interrupt clear
    static constexpr uint32_t CICR_HSI48RDYC = 0x400; // HSI48 oscillator ready interrupt clear


    static constexpr uint32_t AHB1RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB1RSTR_DMA1RST = 0x1; // DMA1 reset
    static constexpr uint32_t AHB1RSTR_DMA2RST = 0x2; // DMA2 reset
    static constexpr uint32_t AHB1RSTR_DMAMUXRST = 0x4; // DMAMUXRST
    static constexpr uint32_t AHB1RSTR_FLASHRST = 0x100; // Flash memory interface reset
    static constexpr uint32_t AHB1RSTR_CRCRST = 0x1000; // CRC reset
    static constexpr uint32_t AHB1RSTR_TSCRST = 0x10000; // Touch Sensing Controller reset
    static constexpr uint32_t AHB1RSTR_DMA2DRST = 0x20000; // DMA2D reset

    static constexpr uint32_t AHB2RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB2RSTR_GPIOARST = 0x1; // IO port A reset
    static constexpr uint32_t AHB2RSTR_GPIOBRST = 0x2; // IO port B reset
    static constexpr uint32_t AHB2RSTR_GPIOCRST = 0x4; // IO port C reset
    static constexpr uint32_t AHB2RSTR_GPIODRST = 0x8; // IO port D reset
    static constexpr uint32_t AHB2RSTR_GPIOERST = 0x10; // IO port E reset
    static constexpr uint32_t AHB2RSTR_GPIOFRST = 0x20; // IO port F reset
    static constexpr uint32_t AHB2RSTR_GPIOGRST = 0x40; // IO port G reset
    static constexpr uint32_t AHB2RSTR_GPIOHRST = 0x80; // IO port H reset
    static constexpr uint32_t AHB2RSTR_GPIOIRST = 0x100; // IO port I reset
    static constexpr uint32_t AHB2RSTR_OTGFSRST = 0x1000; // USB OTG FS reset
    static constexpr uint32_t AHB2RSTR_ADC1RST = 0x2000; // ADC reset
    static constexpr uint32_t AHB2RSTR_DCMIRST = 0x4000; // Digital Camera Interface reset
    static constexpr uint32_t AHB2RSTR_AESRST = 0x10000; // AES hardware accelerator reset
    static constexpr uint32_t AHB2RSTR_HASHRST = 0x20000; // Hash reset
    static constexpr uint32_t AHB2RSTR_RNGRST = 0x40000; // Random number generator reset
    static constexpr uint32_t AHB2RSTR_OSPIMRST = 0x100000; // OCTOSPI IO manager reset
    static constexpr uint32_t AHB2RSTR_SDMMC1RST = 0x400000; // SDMMC1 reset

    static constexpr uint32_t AHB3RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB3RSTR_FMCRST = 0x1; // Flexible memory controller reset
    static constexpr uint32_t AHB3RSTR_OSPI2RST = 0x200; // OctOSPI2 memory interface reset


    static constexpr uint32_t APB1RSTR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1RSTR1_LPTIM1RST = 0x80000000; // Low Power Timer 1 reset
    static constexpr uint32_t APB1RSTR1_OPAMPRST = 0x40000000; // OPAMP interface reset
    static constexpr uint32_t APB1RSTR1_DAC1RST = 0x20000000; // DAC1 interface reset
    static constexpr uint32_t APB1RSTR1_PWRRST = 0x10000000; // Power interface reset
    static constexpr uint32_t APB1RSTR1_CAN1RST = 0x2000000; // CAN1 reset
    static constexpr uint32_t APB1RSTR1_CRSRST = 0x1000000; // CRS reset
    static constexpr uint32_t APB1RSTR1_I2C3RST = 0x800000; // I2C3 reset
    static constexpr uint32_t APB1RSTR1_I2C2RST = 0x400000; // I2C2 reset
    static constexpr uint32_t APB1RSTR1_I2C1RST = 0x200000; // I2C1 reset
    static constexpr uint32_t APB1RSTR1_UART5RST = 0x100000; // UART5 reset
    static constexpr uint32_t APB1RSTR1_UART4RST = 0x80000; // UART4 reset
    static constexpr uint32_t APB1RSTR1_USART3RST = 0x40000; // USART3 reset
    static constexpr uint32_t APB1RSTR1_USART2RST = 0x20000; // USART2 reset
    static constexpr uint32_t APB1RSTR1_SPI3RST = 0x8000; // SPI3 reset
    static constexpr uint32_t APB1RSTR1_SPI2RST = 0x4000; // SPI2 reset
    static constexpr uint32_t APB1RSTR1_TIM7RST = 0x20; // TIM7 timer reset
    static constexpr uint32_t APB1RSTR1_TIM6RST = 0x10; // TIM6 timer reset
    static constexpr uint32_t APB1RSTR1_TIM5RST = 0x8; // TIM5 timer reset
    static constexpr uint32_t APB1RSTR1_TIM4RST = 0x4; // TIM3 timer reset
    static constexpr uint32_t APB1RSTR1_TIM3RST = 0x2; // TIM3 timer reset
    static constexpr uint32_t APB1RSTR1_TIM2RST = 0x1; // TIM2 timer reset

    static constexpr uint32_t APB1RSTR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1RSTR2_LPUART1RST = 0x1; // Low-power UART 1 reset
    static constexpr uint32_t APB1RSTR2_I2C4RST = 0x2; // I2C4 reset
    static constexpr uint32_t APB1RSTR2_LPTIM2RST = 0x20; // Low-power timer 2 reset

    static constexpr uint32_t APB2RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2RSTR_SYSCFGRST = 0x1; // System configuration (SYSCFG) reset
    static constexpr uint32_t APB2RSTR_TIM1RST = 0x800; // TIM1 timer reset
    static constexpr uint32_t APB2RSTR_SPI1RST = 0x1000; // SPI1 reset
    static constexpr uint32_t APB2RSTR_TIM8RST = 0x2000; // TIM8 timer reset
    static constexpr uint32_t APB2RSTR_USART1RST = 0x4000; // USART1 reset
    static constexpr uint32_t APB2RSTR_TIM15RST = 0x10000; // TIM15 timer reset
    static constexpr uint32_t APB2RSTR_TIM16RST = 0x20000; // TIM16 timer reset
    static constexpr uint32_t APB2RSTR_TIM17RST = 0x40000; // TIM17 timer reset
    static constexpr uint32_t APB2RSTR_SAI1RST = 0x200000; // Serial audio interface 1 (SAI1) reset
    static constexpr uint32_t APB2RSTR_SAI2RST = 0x400000; // Serial audio interface 2 (SAI2) reset
    static constexpr uint32_t APB2RSTR_DFSDM1RST = 0x1000000; // Digital filters for sigma-delata modulators (DFSDM) reset
    static constexpr uint32_t APB2RSTR_LTDCRST = 0x4000000; // LCD-TFT reset
    static constexpr uint32_t APB2RSTR_DSIRST = 0x8000000; // DSI reset


    static constexpr uint32_t AHB1ENR_RESET_VALUE = 0x100; // Reset value
    static constexpr uint32_t AHB1ENR_DMA1EN = 0x1; // DMA1 clock enable
    static constexpr uint32_t AHB1ENR_DMA2EN = 0x2; // DMA2 clock enable
    static constexpr uint32_t AHB1ENR_DMAMUXEN = 0x4; // DMAMUX clock enable
    static constexpr uint32_t AHB1ENR_FLASHEN = 0x100; // Flash memory interface clock enable
    static constexpr uint32_t AHB1ENR_CRCEN = 0x1000; // CRC clock enable
    static constexpr uint32_t AHB1ENR_TSCEN = 0x10000; // Touch Sensing Controller clock enable
    static constexpr uint32_t AHB1ENR_DMA2DEN = 0x20000; // DMA2D clock enable

    static constexpr uint32_t AHB2ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB2ENR_GPIOAEN = 0x1; // IO port A clock enable
    static constexpr uint32_t AHB2ENR_GPIOBEN = 0x2; // IO port B clock enable
    static constexpr uint32_t AHB2ENR_GPIOCEN = 0x4; // IO port C clock enable
    static constexpr uint32_t AHB2ENR_GPIODEN = 0x8; // IO port D clock enable
    static constexpr uint32_t AHB2ENR_GPIOEEN = 0x10; // IO port E clock enable
    static constexpr uint32_t AHB2ENR_GPIOFEN = 0x20; // IO port F clock enable
    static constexpr uint32_t AHB2ENR_GPIOGEN = 0x40; // IO port G clock enable
    static constexpr uint32_t AHB2ENR_GPIOHEN = 0x80; // IO port H clock enable
    static constexpr uint32_t AHB2ENR_GPIOIEN = 0x100; // IO port I clock enable
    static constexpr uint32_t AHB2ENR_OTGFSEN = 0x1000; // OTG full speed clock enable
    static constexpr uint32_t AHB2ENR_ADC1EN = 0x2000; // ADC clock enable
    static constexpr uint32_t AHB2ENR_DCMIEN = 0x4000; // DCMI clock enable
    static constexpr uint32_t AHB2ENR_AESEN = 0x10000; // AES accelerator clock enable
    static constexpr uint32_t AHB2ENR_HASHEN = 0x20000; // HASH clock enable
    static constexpr uint32_t AHB2ENR_RNGEN = 0x40000; // Random Number Generator clock enable
    static constexpr uint32_t AHB2ENR_OSPIMEN = 0x100000; // OctoSPI IO manager clock enable
    static constexpr uint32_t AHB2ENR_SDMMC1EN = 0x400000; // SDMMC1 clock enable

    static constexpr uint32_t AHB3ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB3ENR_FMCEN = 0x1; // Flexible memory controller clock enable
    static constexpr uint32_t AHB3ENR_OSPI2EN = 0x200; // OSPI2EN memory interface clock enable


    static constexpr uint32_t APB1ENR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1ENR1_TIM2EN = 0x1; // TIM2 timer clock enable
    static constexpr uint32_t APB1ENR1_TIM3EN = 0x2; // TIM3 timer clock enable
    static constexpr uint32_t APB1ENR1_TIM4EN = 0x4; // TIM4 timer clock enable
    static constexpr uint32_t APB1ENR1_TIM5EN = 0x8; // TIM5 timer clock enable
    static constexpr uint32_t APB1ENR1_TIM6EN = 0x10; // TIM6 timer clock enable
    static constexpr uint32_t APB1ENR1_TIM7EN = 0x20; // TIM7 timer clock enable
    static constexpr uint32_t APB1ENR1_RTCAPBEN = 0x400; // RTC APB clock enable
    static constexpr uint32_t APB1ENR1_WWDGEN = 0x800; // Window watchdog clock enable
    static constexpr uint32_t APB1ENR1_SPI2EN = 0x4000; // SPI2 clock enable
    static constexpr uint32_t APB1ENR1_SPI3EN = 0x8000; // SPI3 clock enable
    static constexpr uint32_t APB1ENR1_USART2EN = 0x20000; // USART2 clock enable
    static constexpr uint32_t APB1ENR1_USART3EN = 0x40000; // USART3 clock enable
    static constexpr uint32_t APB1ENR1_UART4EN = 0x80000; // UART4 clock enable
    static constexpr uint32_t APB1ENR1_UART5EN = 0x100000; // UART5 clock enable
    static constexpr uint32_t APB1ENR1_I2C1EN = 0x200000; // I2C1 clock enable
    static constexpr uint32_t APB1ENR1_I2C2EN = 0x400000; // I2C2 clock enable
    static constexpr uint32_t APB1ENR1_I2C3EN = 0x800000; // I2C3 clock enable
    static constexpr uint32_t APB1ENR1_CRSEN = 0x1000000; // Clock Recovery System clock enable
    static constexpr uint32_t APB1ENR1_CAN1EN = 0x2000000; // CAN1 clock enable
    static constexpr uint32_t APB1ENR1_PWREN = 0x10000000; // Power interface clock enable
    static constexpr uint32_t APB1ENR1_DAC1EN = 0x20000000; // DAC1 interface clock enable
    static constexpr uint32_t APB1ENR1_OPAMPEN = 0x40000000; // OPAMP interface clock enable
    static constexpr uint32_t APB1ENR1_LPTIM1EN = 0x80000000; // Low power timer 1 clock enable

    static constexpr uint32_t APB1ENR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1ENR2_LPUART1EN = 0x1; // Low power UART 1 clock enable
    static constexpr uint32_t APB1ENR2_I2C4EN = 0x2; // I2C4 clock enable
    static constexpr uint32_t APB1ENR2_LPTIM2EN = 0x20; // LPTIM2EN

    static constexpr uint32_t APB2ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2ENR_SYSCFGEN = 0x1; // SYSCFG clock enable
    static constexpr uint32_t APB2ENR_FWEN = 0x80; // Firewall clock enable
    static constexpr uint32_t APB2ENR_TIM1EN = 0x800; // TIM1 timer clock enable
    static constexpr uint32_t APB2ENR_SPI1EN = 0x1000; // SPI1 clock enable
    static constexpr uint32_t APB2ENR_TIM8EN = 0x2000; // TIM8 timer clock enable
    static constexpr uint32_t APB2ENR_USART1EN = 0x4000; // USART1clock enable
    static constexpr uint32_t APB2ENR_TIM15EN = 0x10000; // TIM15 timer clock enable
    static constexpr uint32_t APB2ENR_TIM16EN = 0x20000; // TIM16 timer clock enable
    static constexpr uint32_t APB2ENR_TIM17EN = 0x40000; // TIM17 timer clock enable
    static constexpr uint32_t APB2ENR_SAI1EN = 0x200000; // SAI1 clock enable
    static constexpr uint32_t APB2ENR_SAI2EN = 0x400000; // SAI2 clock enable
    static constexpr uint32_t APB2ENR_DFSDM1EN = 0x1000000; // DFSDM timer clock enable
    static constexpr uint32_t APB2ENR_LTDCEN = 0x4000000; // LCD-TFT clock enable
    static constexpr uint32_t APB2ENR_DSIEN = 0x8000000; // DSI clock enable


    static constexpr uint32_t AHB1SMENR_RESET_VALUE = 0x11303; // Reset value
    static constexpr uint32_t AHB1SMENR_DMA1SMEN = 0x1; // DMA1 clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB1SMENR_DMA2SMEN = 0x2; // DMA2 clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB1SMENR_DMAMUXSMEN = 0x4; // DMAMUX clock enable during Sleep and Stop modes
    static constexpr uint32_t AHB1SMENR_FLASHSMEN = 0x100; // Flash memory interface clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB1SMENR_SRAM1SMEN = 0x200; // SRAM1 interface clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB1SMENR_CRCSMEN = 0x1000; // CRCSMEN
    static constexpr uint32_t AHB1SMENR_TSCSMEN = 0x10000; // Touch Sensing Controller clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB1SMENR_DMA2DSMEN = 0x20000; // DMA2D clock enable during Sleep and Stop modes

    static constexpr uint32_t AHB2SMENR_RESET_VALUE = 0x532ff; // Reset value
    static constexpr uint32_t AHB2SMENR_GPIOASMEN = 0x1; // IO port A clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB2SMENR_GPIOBSMEN = 0x2; // IO port B clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB2SMENR_GPIOCSMEN = 0x4; // IO port C clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB2SMENR_GPIODSMEN = 0x8; // IO port D clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB2SMENR_GPIOESMEN = 0x10; // IO port E clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB2SMENR_GPIOFSMEN = 0x20; // IO port F clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB2SMENR_GPIOGSMEN = 0x40; // IO port G clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB2SMENR_GPIOHSMEN = 0x80; // IO port H clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB2SMENR_GPIOISMEN = 0x100; // IO port I clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB2SMENR_SRAM2SMEN = 0x200; // SRAM2 interface clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB2SMENR_SRAM3SMEN = 0x400; // SRAM2 interface clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB2SMENR_OTGFSSMEN = 0x1000; // OTG full speed clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB2SMENR_ADCFSSMEN = 0x2000; // ADC clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB2SMENR_DCMISMEN = 0x4000; // DCMI clock enable during Sleep and Stop modes
    static constexpr uint32_t AHB2SMENR_AESSMEN = 0x10000; // AES accelerator clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB2SMENR_HASHSMEN = 0x20000; // HASH clock enable during Sleep and Stop modes
    static constexpr uint32_t AHB2SMENR_RNGSMEN = 0x40000; // Random Number Generator clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB2SMENR_OSPIMSMEN = 0x100000; // OctoSPI IO manager clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB2SMENR_SDMMC1SMEN = 0x400000; // SDMMC1 clocks enable during Sleep and Stop modes

    static constexpr uint32_t AHB3SMENR_RESET_VALUE = 0x101; // Reset value
    static constexpr uint32_t AHB3SMENR_FMCSMEN = 0x1; // Flexible memory controller clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB3SMENR_OCTOSPI2 = 0x200; // OctoSPI2 memory interface clocks enable during Sleep and Stop modes


    static constexpr uint32_t APB1SMENR1_RESET_VALUE = 0xf2feca3f; // Reset value
    static constexpr uint32_t APB1SMENR1_TIM2SMEN = 0x1; // TIM2 timer clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_TIM3SMEN = 0x2; // TIM3 timer clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_TIM4SMEN = 0x4; // TIM4 timer clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_TIM5SMEN = 0x8; // TIM5 timer clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_TIM6SMEN = 0x10; // TIM6 timer clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_TIM7SMEN = 0x20; // TIM7 timer clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_RTCAPBSMEN = 0x400; // RTC APB clock enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_WWDGSMEN = 0x800; // Window watchdog clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_SPI2SMEN = 0x4000; // SPI2 clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_SPI3SMEN = 0x8000; // SPI3 clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_USART2SMEN = 0x20000; // USART2 clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_USART3SMEN = 0x40000; // USART3 clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_UART4SMEN = 0x80000; // UART4 clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_UART5SMEN = 0x100000; // UART5 clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_I2C1SMEN = 0x200000; // I2C1 clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_I2C2SMEN = 0x400000; // I2C2 clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_I2C3SMEN = 0x800000; // I2C3 clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_CRSSMEN = 0x1000000; // CRS clock enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_CAN1SMEN = 0x2000000; // CAN1 clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_PWRSMEN = 0x10000000; // Power interface clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_DAC1SMEN = 0x20000000; // DAC1 interface clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_OPAMPSMEN = 0x40000000; // OPAMP interface clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_LPTIM1SMEN = 0x80000000; // Low power timer 1 clocks enable during Sleep and Stop modes

    static constexpr uint32_t APB1SMENR2_RESET_VALUE = 0x25; // Reset value
    static constexpr uint32_t APB1SMENR2_LPUART1SMEN = 0x1; // Low power UART 1 clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR2_I2C4SMEN = 0x2; // I2C4 clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR2_LPTIM2SMEN = 0x20; // LPTIM2SMEN

    static constexpr uint32_t APB2SMENR_RESET_VALUE = 0x1677c01; // Reset value
    static constexpr uint32_t APB2SMENR_SYSCFGSMEN = 0x1; // SYSCFG clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB2SMENR_TIM1SMEN = 0x800; // TIM1 timer clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB2SMENR_SPI1SMEN = 0x1000; // SPI1 clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB2SMENR_TIM8SMEN = 0x2000; // TIM8 timer clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB2SMENR_USART1SMEN = 0x4000; // USART1clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB2SMENR_TIM15SMEN = 0x10000; // TIM15 timer clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB2SMENR_TIM16SMEN = 0x20000; // TIM16 timer clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB2SMENR_TIM17SMEN = 0x40000; // TIM17 timer clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB2SMENR_SAI1SMEN = 0x200000; // SAI1 clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB2SMENR_SAI2SMEN = 0x400000; // SAI2 clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB2SMENR_DFSDM1SMEN = 0x1000000; // DFSDM timer clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB2SMENR_LTDCSMEN = 0x4000000; // LCD-TFT timer clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB2SMENR_DSISMEN = 0x8000000; // DSI clocks enable during Sleep and Stop modes


    static constexpr uint32_t CCIPR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<28, 0x3> CCIPR_ADCSEL; // ADCs clock source selection
    typedef bit_field_t<26, 0x3> CCIPR_CLK48SEL; // 48 MHz clock source selection
    typedef bit_field_t<24, 0x3> CCIPR_SAI2SEL; // SAI2 clock source selection
    typedef bit_field_t<22, 0x3> CCIPR_SAI1SEL; // SAI1 clock source selection
    typedef bit_field_t<20, 0x3> CCIPR_LPTIM2SEL; // Low power timer 2 clock source selection
    typedef bit_field_t<18, 0x3> CCIPR_LPTIM1SEL; // Low power timer 1 clock source selection
    typedef bit_field_t<16, 0x3> CCIPR_I2C3SEL; // I2C3 clock source selection
    typedef bit_field_t<14, 0x3> CCIPR_I2C2SEL; // I2C2 clock source selection
    typedef bit_field_t<12, 0x3> CCIPR_I2C1SEL; // I2C1 clock source selection
    typedef bit_field_t<10, 0x3> CCIPR_LPUART1SEL; // LPUART1 clock source selection
    typedef bit_field_t<8, 0x3> CCIPR_UART5SEL; // UART5 clock source selection
    typedef bit_field_t<6, 0x3> CCIPR_UART4SEL; // UART4 clock source selection
    typedef bit_field_t<4, 0x3> CCIPR_USART3SEL; // USART3 clock source selection
    typedef bit_field_t<2, 0x3> CCIPR_USART2SEL; // USART2 clock source selection
    typedef bit_field_t<0, 0x3> CCIPR_USART1SEL; // USART1 clock source selection


    static constexpr uint32_t BDCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BDCR_LSCOSEL = 0x2000000; // Low speed clock output selection
    static constexpr uint32_t BDCR_LSCOEN = 0x1000000; // Low speed clock output enable
    static constexpr uint32_t BDCR_BDRST = 0x10000; // Backup domain software reset
    static constexpr uint32_t BDCR_RTCEN = 0x8000; // RTC clock enable
    typedef bit_field_t<8, 0x3> BDCR_RTCSEL; // RTC clock source selection
    static constexpr uint32_t BDCR_LSECSSD = 0x40; // LSECSSD
    static constexpr uint32_t BDCR_LSECSSON = 0x20; // LSECSSON
    typedef bit_field_t<3, 0x3> BDCR_LSEDRV; // SE oscillator drive capability
    static constexpr uint32_t BDCR_LSEBYP = 0x4; // LSE oscillator bypass
    static constexpr uint32_t BDCR_LSERDY = 0x2; // LSE oscillator ready
    static constexpr uint32_t BDCR_LSEON = 0x1; // LSE oscillator enable

    static constexpr uint32_t CSR_RESET_VALUE = 0xc000600; // Reset value
    static constexpr uint32_t CSR_LPWRSTF = 0x80000000; // Low-power reset flag
    static constexpr uint32_t CSR_WWDGRSTF = 0x40000000; // Window watchdog reset flag
    static constexpr uint32_t CSR_IWDGRSTF = 0x20000000; // Independent window watchdog reset flag
    static constexpr uint32_t CSR_SFTRSTF = 0x10000000; // Software reset flag
    static constexpr uint32_t CSR_BORRSTF = 0x8000000; // BOR flag
    static constexpr uint32_t CSR_PINRSTF = 0x4000000; // Pin reset flag
    static constexpr uint32_t CSR_OBLRSTF = 0x2000000; // Option byte loader reset flag
    static constexpr uint32_t CSR_FWRSTF = 0x1000000; // Firewall reset flag
    static constexpr uint32_t CSR_RMVF = 0x800000; // Remove reset flag
    typedef bit_field_t<8, 0xf> CSR_MSISRANGE; // SI range after Standby mode
    static constexpr uint32_t CSR_LSIRDY = 0x2; // LSI oscillator ready
    static constexpr uint32_t CSR_LSION = 0x1; // LSI oscillator enable

    static constexpr uint32_t CRRCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CRRCR_HSI48ON = 0x1; // HSI48 clock enable
    static constexpr uint32_t CRRCR_HSI48RDY = 0x2; // HSI48 clock ready flag
    typedef bit_field_t<7, 0x1ff> CRRCR_HSI48CAL; // HSI48 clock calibration

    static constexpr uint32_t CCIPR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> CCIPR2_I2C4SEL; // I2C4 clock source selection
    static constexpr uint32_t CCIPR2_DFSDMSEL = 0x4; // Digital filter for sigma delta modulator kernel clock source selection
    typedef bit_field_t<3, 0x3> CCIPR2_ADFSDMSEL; // Digital filter for sigma delta modulator audio clock source selection
    typedef bit_field_t<5, 0x7> CCIPR2_SAI1SEL; // SAI1 clock source selection
    typedef bit_field_t<8, 0x7> CCIPR2_SAI2SEL; // SAI2 clock source selection
    static constexpr uint32_t CCIPR2_DSISEL = 0x1000; // clock selection
    static constexpr uint32_t CCIPR2_SDMMCSEL = 0x4000; // SDMMC clock selection
    typedef bit_field_t<16, 0x3> CCIPR2_PLLSAI2DIVR; // division factor for LTDC clock
    typedef bit_field_t<20, 0x3> CCIPR2_OSPISEL; // Octospi clock source selection
};

// RCC: Reset and clock control

struct stm32l4r5_rcc_t
{
    volatile uint32_t CR; // Clock control register
    volatile uint32_t ICSCR; // Internal clock sources calibration register
    volatile uint32_t CFGR; // Clock configuration register
    volatile uint32_t PLLCFGR; // PLL configuration register
    volatile uint32_t PLLSAI1CFGR; // PLLSAI1 configuration register
    volatile uint32_t PLLSAI2CFGR; // PLLSAI2 configuration register
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
    reserved_t<0x1> _0x44;
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
    volatile uint32_t CCIPR2; // Peripherals independent clock configuration register

    static constexpr uint32_t CR_RESET_VALUE = 0x63; // Reset value
    static constexpr uint32_t CR_PLLSAI2RDY = 0x20000000; // SAI2 PLL clock ready flag
    static constexpr uint32_t CR_PLLSAI2ON = 0x10000000; // SAI2 PLL enable
    static constexpr uint32_t CR_PLLSAI1RDY = 0x8000000; // SAI1 PLL clock ready flag
    static constexpr uint32_t CR_PLLSAI1ON = 0x4000000; // SAI1 PLL enable
    static constexpr uint32_t CR_PLLRDY = 0x2000000; // Main PLL clock ready flag
    static constexpr uint32_t CR_PLLON = 0x1000000; // Main PLL enable
    static constexpr uint32_t CR_CSSON = 0x80000; // Clock security system enable
    static constexpr uint32_t CR_HSEBYP = 0x40000; // HSE crystal oscillator bypass
    static constexpr uint32_t CR_HSERDY = 0x20000; // HSE clock ready flag
    static constexpr uint32_t CR_HSEON = 0x10000; // HSE clock enable
    static constexpr uint32_t CR_HSIASFS = 0x800; // HSI automatic start from Stop
    static constexpr uint32_t CR_HSIRDY = 0x400; // HSI clock ready flag
    static constexpr uint32_t CR_HSIKERON = 0x200; // HSI always enable for peripheral kernels
    static constexpr uint32_t CR_HSION = 0x100; // HSI clock enable
    typedef bit_field_t<4, 0xf> CR_MSIRANGE; // MSI clock ranges
    static constexpr uint32_t CR_MSIRGSEL = 0x8; // MSI clock range selection
    static constexpr uint32_t CR_MSIPLLEN = 0x4; // MSI clock PLL enable
    static constexpr uint32_t CR_MSIRDY = 0x2; // MSI clock ready flag
    static constexpr uint32_t CR_MSION = 0x1; // MSI clock enable

    static constexpr uint32_t ICSCR_RESET_VALUE = 0x10000000; // Reset value
    typedef bit_field_t<24, 0x7f> ICSCR_HSITRIM; // HSI clock trimming
    typedef bit_field_t<16, 0xff> ICSCR_HSICAL; // HSI clock calibration
    typedef bit_field_t<8, 0xff> ICSCR_MSITRIM; // MSI clock trimming
    typedef bit_field_t<0, 0xff> ICSCR_MSICAL; // MSI clock calibration

    static constexpr uint32_t CFGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<28, 0x7> CFGR_MCOPRE; // Microcontroller clock output prescaler
    typedef bit_field_t<24, 0x7> CFGR_MCOSEL; // Microcontroller clock output
    static constexpr uint32_t CFGR_STOPWUCK = 0x8000; // Wakeup from Stop and CSS backup clock selection
    typedef bit_field_t<11, 0x7> CFGR_PPRE2; // APB high-speed prescaler (APB2)
    typedef bit_field_t<8, 0x7> CFGR_PPRE1; // PB low-speed prescaler (APB1)
    typedef bit_field_t<4, 0xf> CFGR_HPRE; // AHB prescaler
    typedef bit_field_t<2, 0x3> CFGR_SWS; // System clock switch status
    typedef bit_field_t<0, 0x3> CFGR_SW; // System clock switch

    static constexpr uint32_t PLLCFGR_RESET_VALUE = 0x1000; // Reset value
    typedef bit_field_t<27, 0x1f> PLLCFGR_PLLPDIV; // Main PLL division factor for PLLSAI2CLK
    typedef bit_field_t<25, 0x3> PLLCFGR_PLLR; // Main PLL division factor for PLLCLK (system clock)
    static constexpr uint32_t PLLCFGR_PLLREN = 0x1000000; // Main PLL PLLCLK output enable
    typedef bit_field_t<21, 0x3> PLLCFGR_PLLQ; // Main PLL division factor for PLLUSB1CLK(48 MHz clock)
    static constexpr uint32_t PLLCFGR_PLLQEN = 0x100000; // Main PLL PLLUSB1CLK output enable
    static constexpr uint32_t PLLCFGR_PLLP = 0x20000; // Main PLL division factor for PLLSAI3CLK (SAI1 and SAI2 clock)
    static constexpr uint32_t PLLCFGR_PLLPEN = 0x10000; // Main PLL PLLSAI3CLK output enable
    typedef bit_field_t<8, 0x7f> PLLCFGR_PLLN; // Main PLL multiplication factor for VCO
    typedef bit_field_t<4, 0xf> PLLCFGR_PLLM; // Division factor for the main PLL and audio PLL (PLLSAI1 and PLLSAI2) input clock
    typedef bit_field_t<0, 0x3> PLLCFGR_PLLSRC; // Main PLL, PLLSAI1 and PLLSAI2 entry clock source

    static constexpr uint32_t PLLSAI1CFGR_RESET_VALUE = 0x1000; // Reset value
    typedef bit_field_t<27, 0x1f> PLLSAI1CFGR_PLLSAI1PDIV; // PLLSAI1 division factor for PLLSAI1CLK
    typedef bit_field_t<25, 0x3> PLLSAI1CFGR_PLLSAI1R; // PLLSAI1 division factor for PLLADC1CLK (ADC clock)
    static constexpr uint32_t PLLSAI1CFGR_PLLSAI1REN = 0x1000000; // PLLSAI1 PLLADC1CLK output enable
    typedef bit_field_t<21, 0x3> PLLSAI1CFGR_PLLSAI1Q; // SAI1PLL division factor for PLLUSB2CLK (48 MHz clock)
    static constexpr uint32_t PLLSAI1CFGR_PLLSAI1QEN = 0x100000; // SAI1PLL PLLUSB2CLK output enable
    static constexpr uint32_t PLLSAI1CFGR_PLLSAI1P = 0x20000; // SAI1PLL division factor for PLLSAI1CLK (SAI1 or SAI2 clock)
    static constexpr uint32_t PLLSAI1CFGR_PLLSAI1PEN = 0x10000; // SAI1PLL PLLSAI1CLK output enable
    typedef bit_field_t<8, 0x7f> PLLSAI1CFGR_PLLSAI1N; // SAI1PLL multiplication factor for VCO
    typedef bit_field_t<4, 0xf> PLLSAI1CFGR_PLLSAI1M; // Division factor for PLLSAI1 input clock

    static constexpr uint32_t PLLSAI2CFGR_RESET_VALUE = 0x1000; // Reset value
    typedef bit_field_t<27, 0x1f> PLLSAI2CFGR_PLLSAI2PDIV; // PLLSAI2 division factor for PLLSAI2CLK
    typedef bit_field_t<25, 0x3> PLLSAI2CFGR_PLLSAI2R; // PLLSAI2 division factor for PLLADC2CLK (ADC clock)
    static constexpr uint32_t PLLSAI2CFGR_PLLSAI2REN = 0x1000000; // PLLSAI2 PLLADC2CLK output enable
    typedef bit_field_t<21, 0x3> PLLSAI2CFGR_PLLSAI2Q; // SAI2PLL PLLSAI2CLK output enable
    static constexpr uint32_t PLLSAI2CFGR_PLLSAI2QEN = 0x100000; // PLLSAI2 division factor for PLLDISCLK
    static constexpr uint32_t PLLSAI2CFGR_PLLSAI2P = 0x20000; // SAI1PLL division factor for PLLSAI2CLK (SAI1 or SAI2 clock)
    static constexpr uint32_t PLLSAI2CFGR_PLLSAI2PEN = 0x10000; // SAI2PLL PLLSAI2CLK output enable
    typedef bit_field_t<8, 0x7f> PLLSAI2CFGR_PLLSAI2N; // SAI2PLL multiplication factor for VCO
    typedef bit_field_t<4, 0xf> PLLSAI2CFGR_PLLSAI2M; // Division factor for PLLSAI2 input clock

    static constexpr uint32_t CIER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CIER_LSIRDYIE = 0x1; // LSI ready interrupt enable
    static constexpr uint32_t CIER_LSERDYIE = 0x2; // LSE ready interrupt enable
    static constexpr uint32_t CIER_MSIRDYIE = 0x4; // MSI ready interrupt enable
    static constexpr uint32_t CIER_HSIRDYIE = 0x8; // HSI ready interrupt enable
    static constexpr uint32_t CIER_HSERDYIE = 0x10; // HSE ready interrupt enable
    static constexpr uint32_t CIER_PLLRDYIE = 0x20; // PLL ready interrupt enable
    static constexpr uint32_t CIER_PLLSAI1RDYIE = 0x40; // PLLSAI1 ready interrupt enable
    static constexpr uint32_t CIER_PLLSAI2RDYIE = 0x80; // PLLSAI2 ready interrupt enable
    static constexpr uint32_t CIER_LSECSSIE = 0x200; // LSE clock security system interrupt enable
    static constexpr uint32_t CIER_HSI48RDYIE = 0x400; // HSI48 ready interrupt enable

    static constexpr uint32_t CIFR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CIFR_LSIRDYF = 0x1; // LSI ready interrupt flag
    static constexpr uint32_t CIFR_LSERDYF = 0x2; // LSE ready interrupt flag
    static constexpr uint32_t CIFR_MSIRDYF = 0x4; // MSI ready interrupt flag
    static constexpr uint32_t CIFR_HSIRDYF = 0x8; // HSI ready interrupt flag
    static constexpr uint32_t CIFR_HSERDYF = 0x10; // HSE ready interrupt flag
    static constexpr uint32_t CIFR_PLLRDYF = 0x20; // PLL ready interrupt flag
    static constexpr uint32_t CIFR_PLLSAI1RDYF = 0x40; // PLLSAI1 ready interrupt flag
    static constexpr uint32_t CIFR_PLLSAI2RDYF = 0x80; // PLLSAI2 ready interrupt flag
    static constexpr uint32_t CIFR_CSSF = 0x100; // Clock security system interrupt flag
    static constexpr uint32_t CIFR_LSECSSF = 0x200; // LSE Clock security system interrupt flag
    static constexpr uint32_t CIFR_HSI48RDYF = 0x400; // HSI48 ready interrupt flag

    static constexpr uint32_t CICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CICR_LSIRDYC = 0x1; // LSI ready interrupt clear
    static constexpr uint32_t CICR_LSERDYC = 0x2; // LSE ready interrupt clear
    static constexpr uint32_t CICR_MSIRDYC = 0x4; // MSI ready interrupt clear
    static constexpr uint32_t CICR_HSIRDYC = 0x8; // HSI ready interrupt clear
    static constexpr uint32_t CICR_HSERDYC = 0x10; // HSE ready interrupt clear
    static constexpr uint32_t CICR_PLLRDYC = 0x20; // PLL ready interrupt clear
    static constexpr uint32_t CICR_PLLSAI1RDYC = 0x40; // PLLSAI1 ready interrupt clear
    static constexpr uint32_t CICR_PLLSAI2RDYC = 0x80; // PLLSAI2 ready interrupt clear
    static constexpr uint32_t CICR_CSSC = 0x100; // Clock security system interrupt clear
    static constexpr uint32_t CICR_LSECSSC = 0x200; // LSE Clock security system interrupt clear
    static constexpr uint32_t CICR_HSI48RDYC = 0x400; // HSI48 oscillator ready interrupt clear


    static constexpr uint32_t AHB1RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB1RSTR_DMA1RST = 0x1; // DMA1 reset
    static constexpr uint32_t AHB1RSTR_DMA2RST = 0x2; // DMA2 reset
    static constexpr uint32_t AHB1RSTR_DMAMUXRST = 0x4; // DMAMUXRST
    static constexpr uint32_t AHB1RSTR_FLASHRST = 0x100; // Flash memory interface reset
    static constexpr uint32_t AHB1RSTR_CRCRST = 0x1000; // CRC reset
    static constexpr uint32_t AHB1RSTR_TSCRST = 0x10000; // Touch Sensing Controller reset
    static constexpr uint32_t AHB1RSTR_DMA2DRST = 0x20000; // DMA2D reset
    static constexpr uint32_t AHB1RSTR_GFXMMURST = 0x40000; // GFXMMU reset

    static constexpr uint32_t AHB2RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB2RSTR_GPIOARST = 0x1; // IO port A reset
    static constexpr uint32_t AHB2RSTR_GPIOBRST = 0x2; // IO port B reset
    static constexpr uint32_t AHB2RSTR_GPIOCRST = 0x4; // IO port C reset
    static constexpr uint32_t AHB2RSTR_GPIODRST = 0x8; // IO port D reset
    static constexpr uint32_t AHB2RSTR_GPIOERST = 0x10; // IO port E reset
    static constexpr uint32_t AHB2RSTR_GPIOFRST = 0x20; // IO port F reset
    static constexpr uint32_t AHB2RSTR_GPIOGRST = 0x40; // IO port G reset
    static constexpr uint32_t AHB2RSTR_GPIOHRST = 0x80; // IO port H reset
    static constexpr uint32_t AHB2RSTR_GPIOIRST = 0x100; // IO port I reset
    static constexpr uint32_t AHB2RSTR_OTGFSRST = 0x1000; // USB OTG FS reset
    static constexpr uint32_t AHB2RSTR_ADC1RST = 0x2000; // ADC reset
    static constexpr uint32_t AHB2RSTR_DCMIRST = 0x4000; // Digital Camera Interface reset
    static constexpr uint32_t AHB2RSTR_AESRST = 0x10000; // AES hardware accelerator reset
    static constexpr uint32_t AHB2RSTR_HASHRST = 0x20000; // Hash reset
    static constexpr uint32_t AHB2RSTR_RNGRST = 0x40000; // Random number generator reset
    static constexpr uint32_t AHB2RSTR_OSPIMRST = 0x100000; // OCTOSPI IO manager reset
    static constexpr uint32_t AHB2RSTR_SDMMC1RST = 0x400000; // SDMMC1 reset

    static constexpr uint32_t AHB3RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB3RSTR_FMCRST = 0x1; // Flexible memory controller reset
    static constexpr uint32_t AHB3RSTR_OSPI2RST = 0x200; // OctOSPI2 memory interface reset


    static constexpr uint32_t APB1RSTR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1RSTR1_LPTIM1RST = 0x80000000; // Low Power Timer 1 reset
    static constexpr uint32_t APB1RSTR1_OPAMPRST = 0x40000000; // OPAMP interface reset
    static constexpr uint32_t APB1RSTR1_DAC1RST = 0x20000000; // DAC1 interface reset
    static constexpr uint32_t APB1RSTR1_PWRRST = 0x10000000; // Power interface reset
    static constexpr uint32_t APB1RSTR1_CAN1RST = 0x2000000; // CAN1 reset
    static constexpr uint32_t APB1RSTR1_CRSRST = 0x1000000; // CRS reset
    static constexpr uint32_t APB1RSTR1_I2C3RST = 0x800000; // I2C3 reset
    static constexpr uint32_t APB1RSTR1_I2C2RST = 0x400000; // I2C2 reset
    static constexpr uint32_t APB1RSTR1_I2C1RST = 0x200000; // I2C1 reset
    static constexpr uint32_t APB1RSTR1_UART5RST = 0x100000; // UART5 reset
    static constexpr uint32_t APB1RSTR1_UART4RST = 0x80000; // UART4 reset
    static constexpr uint32_t APB1RSTR1_USART3RST = 0x40000; // USART3 reset
    static constexpr uint32_t APB1RSTR1_USART2RST = 0x20000; // USART2 reset
    static constexpr uint32_t APB1RSTR1_SPI3RST = 0x8000; // SPI3 reset
    static constexpr uint32_t APB1RSTR1_SPI2RST = 0x4000; // SPI2 reset
    static constexpr uint32_t APB1RSTR1_TIM7RST = 0x20; // TIM7 timer reset
    static constexpr uint32_t APB1RSTR1_TIM6RST = 0x10; // TIM6 timer reset
    static constexpr uint32_t APB1RSTR1_TIM5RST = 0x8; // TIM5 timer reset
    static constexpr uint32_t APB1RSTR1_TIM4RST = 0x4; // TIM3 timer reset
    static constexpr uint32_t APB1RSTR1_TIM3RST = 0x2; // TIM3 timer reset
    static constexpr uint32_t APB1RSTR1_TIM2RST = 0x1; // TIM2 timer reset

    static constexpr uint32_t APB1RSTR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1RSTR2_LPUART1RST = 0x1; // Low-power UART 1 reset
    static constexpr uint32_t APB1RSTR2_I2C4RST = 0x2; // I2C4 reset
    static constexpr uint32_t APB1RSTR2_LPTIM2RST = 0x20; // Low-power timer 2 reset

    static constexpr uint32_t APB2RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2RSTR_SYSCFGRST = 0x1; // System configuration (SYSCFG) reset
    static constexpr uint32_t APB2RSTR_TIM1RST = 0x800; // TIM1 timer reset
    static constexpr uint32_t APB2RSTR_SPI1RST = 0x1000; // SPI1 reset
    static constexpr uint32_t APB2RSTR_TIM8RST = 0x2000; // TIM8 timer reset
    static constexpr uint32_t APB2RSTR_USART1RST = 0x4000; // USART1 reset
    static constexpr uint32_t APB2RSTR_TIM15RST = 0x10000; // TIM15 timer reset
    static constexpr uint32_t APB2RSTR_TIM16RST = 0x20000; // TIM16 timer reset
    static constexpr uint32_t APB2RSTR_TIM17RST = 0x40000; // TIM17 timer reset
    static constexpr uint32_t APB2RSTR_SAI1RST = 0x200000; // Serial audio interface 1 (SAI1) reset
    static constexpr uint32_t APB2RSTR_SAI2RST = 0x400000; // Serial audio interface 2 (SAI2) reset
    static constexpr uint32_t APB2RSTR_DFSDM1RST = 0x1000000; // Digital filters for sigma-delata modulators (DFSDM) reset
    static constexpr uint32_t APB2RSTR_LTDCRST = 0x4000000; // LCD-TFT reset
    static constexpr uint32_t APB2RSTR_DSIRST = 0x8000000; // DSI reset


    static constexpr uint32_t AHB1ENR_RESET_VALUE = 0x100; // Reset value
    static constexpr uint32_t AHB1ENR_DMA1EN = 0x1; // DMA1 clock enable
    static constexpr uint32_t AHB1ENR_DMA2EN = 0x2; // DMA2 clock enable
    static constexpr uint32_t AHB1ENR_DMAMUXEN = 0x4; // DMAMUX clock enable
    static constexpr uint32_t AHB1ENR_FLASHEN = 0x100; // Flash memory interface clock enable
    static constexpr uint32_t AHB1ENR_CRCEN = 0x1000; // CRC clock enable
    static constexpr uint32_t AHB1ENR_TSCEN = 0x10000; // Touch Sensing Controller clock enable
    static constexpr uint32_t AHB1ENR_DMA2DEN = 0x20000; // DMA2D clock enable
    static constexpr uint32_t AHB1ENR_GFXMMUEN = 0x40000; // Graphic MMU clock enable

    static constexpr uint32_t AHB2ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB2ENR_GPIOAEN = 0x1; // IO port A clock enable
    static constexpr uint32_t AHB2ENR_GPIOBEN = 0x2; // IO port B clock enable
    static constexpr uint32_t AHB2ENR_GPIOCEN = 0x4; // IO port C clock enable
    static constexpr uint32_t AHB2ENR_GPIODEN = 0x8; // IO port D clock enable
    static constexpr uint32_t AHB2ENR_GPIOEEN = 0x10; // IO port E clock enable
    static constexpr uint32_t AHB2ENR_GPIOFEN = 0x20; // IO port F clock enable
    static constexpr uint32_t AHB2ENR_GPIOGEN = 0x40; // IO port G clock enable
    static constexpr uint32_t AHB2ENR_GPIOHEN = 0x80; // IO port H clock enable
    static constexpr uint32_t AHB2ENR_GPIOIEN = 0x100; // IO port I clock enable
    static constexpr uint32_t AHB2ENR_OTGFSEN = 0x1000; // OTG full speed clock enable
    static constexpr uint32_t AHB2ENR_ADC1EN = 0x2000; // ADC clock enable
    static constexpr uint32_t AHB2ENR_DCMIEN = 0x4000; // DCMI clock enable
    static constexpr uint32_t AHB2ENR_AESEN = 0x10000; // AES accelerator clock enable
    static constexpr uint32_t AHB2ENR_HASHEN = 0x20000; // HASH clock enable
    static constexpr uint32_t AHB2ENR_RNGEN = 0x40000; // Random Number Generator clock enable
    static constexpr uint32_t AHB2ENR_OSPIMEN = 0x100000; // OctoSPI IO manager clock enable
    static constexpr uint32_t AHB2ENR_SDMMC1EN = 0x400000; // SDMMC1 clock enable

    static constexpr uint32_t AHB3ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB3ENR_FMCEN = 0x1; // Flexible memory controller clock enable
    static constexpr uint32_t AHB3ENR_OSPI2EN = 0x200; // OSPI2EN memory interface clock enable


    static constexpr uint32_t APB1ENR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1ENR1_TIM2EN = 0x1; // TIM2 timer clock enable
    static constexpr uint32_t APB1ENR1_TIM3EN = 0x2; // TIM3 timer clock enable
    static constexpr uint32_t APB1ENR1_TIM4EN = 0x4; // TIM4 timer clock enable
    static constexpr uint32_t APB1ENR1_TIM5EN = 0x8; // TIM5 timer clock enable
    static constexpr uint32_t APB1ENR1_TIM6EN = 0x10; // TIM6 timer clock enable
    static constexpr uint32_t APB1ENR1_TIM7EN = 0x20; // TIM7 timer clock enable
    static constexpr uint32_t APB1ENR1_RTCAPBEN = 0x400; // RTC APB clock enable
    static constexpr uint32_t APB1ENR1_WWDGEN = 0x800; // Window watchdog clock enable
    static constexpr uint32_t APB1ENR1_SPI2EN = 0x4000; // SPI2 clock enable
    static constexpr uint32_t APB1ENR1_SPI3EN = 0x8000; // SPI3 clock enable
    static constexpr uint32_t APB1ENR1_USART2EN = 0x20000; // USART2 clock enable
    static constexpr uint32_t APB1ENR1_USART3EN = 0x40000; // USART3 clock enable
    static constexpr uint32_t APB1ENR1_UART4EN = 0x80000; // UART4 clock enable
    static constexpr uint32_t APB1ENR1_UART5EN = 0x100000; // UART5 clock enable
    static constexpr uint32_t APB1ENR1_I2C1EN = 0x200000; // I2C1 clock enable
    static constexpr uint32_t APB1ENR1_I2C2EN = 0x400000; // I2C2 clock enable
    static constexpr uint32_t APB1ENR1_I2C3EN = 0x800000; // I2C3 clock enable
    static constexpr uint32_t APB1ENR1_CRSEN = 0x1000000; // Clock Recovery System clock enable
    static constexpr uint32_t APB1ENR1_CAN1EN = 0x2000000; // CAN1 clock enable
    static constexpr uint32_t APB1ENR1_PWREN = 0x10000000; // Power interface clock enable
    static constexpr uint32_t APB1ENR1_DAC1EN = 0x20000000; // DAC1 interface clock enable
    static constexpr uint32_t APB1ENR1_OPAMPEN = 0x40000000; // OPAMP interface clock enable
    static constexpr uint32_t APB1ENR1_LPTIM1EN = 0x80000000; // Low power timer 1 clock enable

    static constexpr uint32_t APB1ENR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1ENR2_LPUART1EN = 0x1; // Low power UART 1 clock enable
    static constexpr uint32_t APB1ENR2_I2C4EN = 0x2; // I2C4 clock enable
    static constexpr uint32_t APB1ENR2_LPTIM2EN = 0x20; // LPTIM2EN

    static constexpr uint32_t APB2ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2ENR_SYSCFGEN = 0x1; // SYSCFG clock enable
    static constexpr uint32_t APB2ENR_FWEN = 0x80; // Firewall clock enable
    static constexpr uint32_t APB2ENR_TIM1EN = 0x800; // TIM1 timer clock enable
    static constexpr uint32_t APB2ENR_SPI1EN = 0x1000; // SPI1 clock enable
    static constexpr uint32_t APB2ENR_TIM8EN = 0x2000; // TIM8 timer clock enable
    static constexpr uint32_t APB2ENR_USART1EN = 0x4000; // USART1clock enable
    static constexpr uint32_t APB2ENR_TIM15EN = 0x10000; // TIM15 timer clock enable
    static constexpr uint32_t APB2ENR_TIM16EN = 0x20000; // TIM16 timer clock enable
    static constexpr uint32_t APB2ENR_TIM17EN = 0x40000; // TIM17 timer clock enable
    static constexpr uint32_t APB2ENR_SAI1EN = 0x200000; // SAI1 clock enable
    static constexpr uint32_t APB2ENR_SAI2EN = 0x400000; // SAI2 clock enable
    static constexpr uint32_t APB2ENR_DFSDM1EN = 0x1000000; // DFSDM timer clock enable
    static constexpr uint32_t APB2ENR_LTDCEN = 0x4000000; // LCD-TFT clock enable
    static constexpr uint32_t APB2ENR_DSIEN = 0x8000000; // DSI clock enable


    static constexpr uint32_t AHB1SMENR_RESET_VALUE = 0x11303; // Reset value
    static constexpr uint32_t AHB1SMENR_DMA1SMEN = 0x1; // DMA1 clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB1SMENR_DMA2SMEN = 0x2; // DMA2 clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB1SMENR_DMAMUXSMEN = 0x4; // DMAMUX clock enable during Sleep and Stop modes
    static constexpr uint32_t AHB1SMENR_FLASHSMEN = 0x100; // Flash memory interface clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB1SMENR_SRAM1SMEN = 0x200; // SRAM1 interface clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB1SMENR_CRCSMEN = 0x1000; // CRCSMEN
    static constexpr uint32_t AHB1SMENR_TSCSMEN = 0x10000; // Touch Sensing Controller clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB1SMENR_DMA2DSMEN = 0x20000; // DMA2D clock enable during Sleep and Stop modes
    static constexpr uint32_t AHB1SMENR_GFXMMUSMEN = 0x40000; // GFXMMU clock enable during Sleep and Stop modes

    static constexpr uint32_t AHB2SMENR_RESET_VALUE = 0x532ff; // Reset value
    static constexpr uint32_t AHB2SMENR_GPIOASMEN = 0x1; // IO port A clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB2SMENR_GPIOBSMEN = 0x2; // IO port B clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB2SMENR_GPIOCSMEN = 0x4; // IO port C clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB2SMENR_GPIODSMEN = 0x8; // IO port D clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB2SMENR_GPIOESMEN = 0x10; // IO port E clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB2SMENR_GPIOFSMEN = 0x20; // IO port F clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB2SMENR_GPIOGSMEN = 0x40; // IO port G clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB2SMENR_GPIOHSMEN = 0x80; // IO port H clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB2SMENR_GPIOISMEN = 0x100; // IO port I clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB2SMENR_SRAM2SMEN = 0x200; // SRAM2 interface clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB2SMENR_SRAM3SMEN = 0x400; // SRAM2 interface clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB2SMENR_OTGFSSMEN = 0x1000; // OTG full speed clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB2SMENR_ADCFSSMEN = 0x2000; // ADC clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB2SMENR_DCMISMEN = 0x4000; // DCMI clock enable during Sleep and Stop modes
    static constexpr uint32_t AHB2SMENR_AESSMEN = 0x10000; // AES accelerator clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB2SMENR_HASHSMEN = 0x20000; // HASH clock enable during Sleep and Stop modes
    static constexpr uint32_t AHB2SMENR_RNGSMEN = 0x40000; // Random Number Generator clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB2SMENR_OSPIMSMEN = 0x100000; // OctoSPI IO manager clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB2SMENR_SDMMC1SMEN = 0x400000; // SDMMC1 clocks enable during Sleep and Stop modes

    static constexpr uint32_t AHB3SMENR_RESET_VALUE = 0x101; // Reset value
    static constexpr uint32_t AHB3SMENR_FMCSMEN = 0x1; // Flexible memory controller clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB3SMENR_OCTOSPI2 = 0x200; // OctoSPI2 memory interface clocks enable during Sleep and Stop modes


    static constexpr uint32_t APB1SMENR1_RESET_VALUE = 0xf2feca3f; // Reset value
    static constexpr uint32_t APB1SMENR1_TIM2SMEN = 0x1; // TIM2 timer clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_TIM3SMEN = 0x2; // TIM3 timer clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_TIM4SMEN = 0x4; // TIM4 timer clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_TIM5SMEN = 0x8; // TIM5 timer clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_TIM6SMEN = 0x10; // TIM6 timer clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_TIM7SMEN = 0x20; // TIM7 timer clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_RTCAPBSMEN = 0x400; // RTC APB clock enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_WWDGSMEN = 0x800; // Window watchdog clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_SPI2SMEN = 0x4000; // SPI2 clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_SPI3SMEN = 0x8000; // SPI3 clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_USART2SMEN = 0x20000; // USART2 clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_USART3SMEN = 0x40000; // USART3 clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_UART4SMEN = 0x80000; // UART4 clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_UART5SMEN = 0x100000; // UART5 clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_I2C1SMEN = 0x200000; // I2C1 clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_I2C2SMEN = 0x400000; // I2C2 clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_I2C3SMEN = 0x800000; // I2C3 clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_CRSSMEN = 0x1000000; // CRS clock enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_CAN1SMEN = 0x2000000; // CAN1 clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_PWRSMEN = 0x10000000; // Power interface clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_DAC1SMEN = 0x20000000; // DAC1 interface clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_OPAMPSMEN = 0x40000000; // OPAMP interface clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_LPTIM1SMEN = 0x80000000; // Low power timer 1 clocks enable during Sleep and Stop modes

    static constexpr uint32_t APB1SMENR2_RESET_VALUE = 0x25; // Reset value
    static constexpr uint32_t APB1SMENR2_LPUART1SMEN = 0x1; // Low power UART 1 clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR2_I2C4SMEN = 0x2; // I2C4 clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR2_LPTIM2SMEN = 0x20; // LPTIM2SMEN

    static constexpr uint32_t APB2SMENR_RESET_VALUE = 0x1677c01; // Reset value
    static constexpr uint32_t APB2SMENR_SYSCFGSMEN = 0x1; // SYSCFG clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB2SMENR_TIM1SMEN = 0x800; // TIM1 timer clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB2SMENR_SPI1SMEN = 0x1000; // SPI1 clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB2SMENR_TIM8SMEN = 0x2000; // TIM8 timer clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB2SMENR_USART1SMEN = 0x4000; // USART1clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB2SMENR_TIM15SMEN = 0x10000; // TIM15 timer clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB2SMENR_TIM16SMEN = 0x20000; // TIM16 timer clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB2SMENR_TIM17SMEN = 0x40000; // TIM17 timer clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB2SMENR_SAI1SMEN = 0x200000; // SAI1 clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB2SMENR_SAI2SMEN = 0x400000; // SAI2 clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB2SMENR_DFSDM1SMEN = 0x1000000; // DFSDM timer clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB2SMENR_LTDCSMEN = 0x4000000; // LCD-TFT timer clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB2SMENR_DSISMEN = 0x8000000; // DSI clocks enable during Sleep and Stop modes


    static constexpr uint32_t CCIPR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<28, 0x3> CCIPR_ADCSEL; // ADCs clock source selection
    typedef bit_field_t<26, 0x3> CCIPR_CLK48SEL; // 48 MHz clock source selection
    typedef bit_field_t<24, 0x3> CCIPR_SAI2SEL; // SAI2 clock source selection
    typedef bit_field_t<22, 0x3> CCIPR_SAI1SEL; // SAI1 clock source selection
    typedef bit_field_t<20, 0x3> CCIPR_LPTIM2SEL; // Low power timer 2 clock source selection
    typedef bit_field_t<18, 0x3> CCIPR_LPTIM1SEL; // Low power timer 1 clock source selection
    typedef bit_field_t<16, 0x3> CCIPR_I2C3SEL; // I2C3 clock source selection
    typedef bit_field_t<14, 0x3> CCIPR_I2C2SEL; // I2C2 clock source selection
    typedef bit_field_t<12, 0x3> CCIPR_I2C1SEL; // I2C1 clock source selection
    typedef bit_field_t<10, 0x3> CCIPR_LPUART1SEL; // LPUART1 clock source selection
    typedef bit_field_t<8, 0x3> CCIPR_UART5SEL; // UART5 clock source selection
    typedef bit_field_t<6, 0x3> CCIPR_UART4SEL; // UART4 clock source selection
    typedef bit_field_t<4, 0x3> CCIPR_USART3SEL; // USART3 clock source selection
    typedef bit_field_t<2, 0x3> CCIPR_USART2SEL; // USART2 clock source selection
    typedef bit_field_t<0, 0x3> CCIPR_USART1SEL; // USART1 clock source selection


    static constexpr uint32_t BDCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BDCR_LSCOSEL = 0x2000000; // Low speed clock output selection
    static constexpr uint32_t BDCR_LSCOEN = 0x1000000; // Low speed clock output enable
    static constexpr uint32_t BDCR_BDRST = 0x10000; // Backup domain software reset
    static constexpr uint32_t BDCR_RTCEN = 0x8000; // RTC clock enable
    typedef bit_field_t<8, 0x3> BDCR_RTCSEL; // RTC clock source selection
    static constexpr uint32_t BDCR_LSECSSD = 0x40; // LSECSSD
    static constexpr uint32_t BDCR_LSECSSON = 0x20; // LSECSSON
    typedef bit_field_t<3, 0x3> BDCR_LSEDRV; // SE oscillator drive capability
    static constexpr uint32_t BDCR_LSEBYP = 0x4; // LSE oscillator bypass
    static constexpr uint32_t BDCR_LSERDY = 0x2; // LSE oscillator ready
    static constexpr uint32_t BDCR_LSEON = 0x1; // LSE oscillator enable

    static constexpr uint32_t CSR_RESET_VALUE = 0xc000600; // Reset value
    static constexpr uint32_t CSR_LPWRSTF = 0x80000000; // Low-power reset flag
    static constexpr uint32_t CSR_WWDGRSTF = 0x40000000; // Window watchdog reset flag
    static constexpr uint32_t CSR_IWDGRSTF = 0x20000000; // Independent window watchdog reset flag
    static constexpr uint32_t CSR_SFTRSTF = 0x10000000; // Software reset flag
    static constexpr uint32_t CSR_BORRSTF = 0x8000000; // BOR flag
    static constexpr uint32_t CSR_PINRSTF = 0x4000000; // Pin reset flag
    static constexpr uint32_t CSR_OBLRSTF = 0x2000000; // Option byte loader reset flag
    static constexpr uint32_t CSR_FWRSTF = 0x1000000; // Firewall reset flag
    static constexpr uint32_t CSR_RMVF = 0x800000; // Remove reset flag
    typedef bit_field_t<8, 0xf> CSR_MSISRANGE; // SI range after Standby mode
    static constexpr uint32_t CSR_LSIRDY = 0x2; // LSI oscillator ready
    static constexpr uint32_t CSR_LSION = 0x1; // LSI oscillator enable

    static constexpr uint32_t CRRCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CRRCR_HSI48ON = 0x1; // HSI48 clock enable
    static constexpr uint32_t CRRCR_HSI48RDY = 0x2; // HSI48 clock ready flag
    typedef bit_field_t<7, 0x1ff> CRRCR_HSI48CAL; // HSI48 clock calibration

    static constexpr uint32_t CCIPR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> CCIPR2_I2C4SEL; // I2C4 clock source selection
    static constexpr uint32_t CCIPR2_DFSDMSEL = 0x4; // Digital filter for sigma delta modulator kernel clock source selection
    typedef bit_field_t<3, 0x3> CCIPR2_ADFSDMSEL; // Digital filter for sigma delta modulator audio clock source selection
    typedef bit_field_t<5, 0x7> CCIPR2_SAI1SEL; // SAI1 clock source selection
    typedef bit_field_t<8, 0x7> CCIPR2_SAI2SEL; // SAI2 clock source selection
    static constexpr uint32_t CCIPR2_DSISEL = 0x1000; // clock selection
    static constexpr uint32_t CCIPR2_SDMMCSEL = 0x4000; // SDMMC clock selection
    typedef bit_field_t<16, 0x3> CCIPR2_PLLSAI2DIVR; // division factor for LTDC clock
    typedef bit_field_t<20, 0x3> CCIPR2_OSPISEL; // Octospi clock source selection
};

template<>
struct peripheral_t<STM32L4P5, RCC>
{
    using T = stm32l4p5_rcc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4Q5, RCC>
{
    using T = stm32l4p5_rcc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R5, RCC>
{
    using T = stm32l4r5_rcc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R7, RCC>
{
    using T = stm32l4r5_rcc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R9, RCC>
{
    using T = stm32l4r5_rcc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S5, RCC>
{
    using T = stm32l4r5_rcc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S7, RCC>
{
    using T = stm32l4r5_rcc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S9, RCC>
{
    using T = stm32l4r5_rcc_t;
    static T& V;
};

using rcc_t = peripheral_t<svd, RCC>;

template<int INST> struct rcc_traits {};

template<> struct rcc_traits<0>
{
    using rcc = rcc_t;
    static constexpr signal_t MCO = RCC_MCO;
};
