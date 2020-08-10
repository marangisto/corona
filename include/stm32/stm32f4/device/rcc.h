#pragma once

////
//
//      STM32F4 RCC peripherals
//
///

// RCC: Reset and clock control

struct stm32f401_rcc_t
{
    volatile uint32_t CR; // clock control register
    volatile uint32_t PLLCFGR; // PLL configuration register
    volatile uint32_t CFGR; // clock configuration register
    volatile uint32_t CIR; // clock interrupt register
    volatile uint32_t AHB1RSTR; // AHB1 peripheral reset register
    volatile uint32_t AHB2RSTR; // AHB2 peripheral reset register
    reserved_t<0x2> _0x18;
    volatile uint32_t APB1RSTR; // APB1 peripheral reset register
    volatile uint32_t APB2RSTR; // APB2 peripheral reset register
    reserved_t<0x2> _0x28;
    volatile uint32_t AHB1ENR; // AHB1 peripheral clock register
    volatile uint32_t AHB2ENR; // AHB2 peripheral clock enable register
    reserved_t<0x2> _0x38;
    volatile uint32_t APB1ENR; // APB1 peripheral clock enable register
    volatile uint32_t APB2ENR; // APB2 peripheral clock enable register
    reserved_t<0x2> _0x48;
    volatile uint32_t AHB1LPENR; // AHB1 peripheral clock enable in low power mode register
    volatile uint32_t AHB2LPENR; // AHB2 peripheral clock enable in low power mode register
    reserved_t<0x2> _0x58;
    volatile uint32_t APB1LPENR; // APB1 peripheral clock enable in low power mode register
    volatile uint32_t APB2LPENR; // APB2 peripheral clock enabled in low power mode register
    reserved_t<0x2> _0x68;
    volatile uint32_t BDCR; // Backup domain control register
    volatile uint32_t CSR; // clock control &amp; status register
    reserved_t<0x2> _0x78;
    volatile uint32_t SSCGR; // spread spectrum clock generation register
    volatile uint32_t PLLI2SCFGR; // PLLI2S configuration register

    static constexpr uint32_t CR_RESET_VALUE = 0x83; // Reset value
    static constexpr uint32_t CR_PLLI2SRDY = 0x8000000; // PLLI2S clock ready flag
    static constexpr uint32_t CR_PLLI2SON = 0x4000000; // PLLI2S enable
    static constexpr uint32_t CR_PLLRDY = 0x2000000; // Main PLL (PLL) clock ready flag
    static constexpr uint32_t CR_PLLON = 0x1000000; // Main PLL (PLL) enable
    static constexpr uint32_t CR_CSSON = 0x80000; // Clock security system enable
    static constexpr uint32_t CR_HSEBYP = 0x40000; // HSE clock bypass
    static constexpr uint32_t CR_HSERDY = 0x20000; // HSE clock ready flag
    static constexpr uint32_t CR_HSEON = 0x10000; // HSE clock enable
    typedef bit_field_t<8, 0xff> CR_HSICAL; // Internal high-speed clock calibration
    typedef bit_field_t<3, 0x1f> CR_HSITRIM; // Internal high-speed clock trimming
    static constexpr uint32_t CR_HSIRDY = 0x2; // Internal high-speed clock ready flag
    static constexpr uint32_t CR_HSION = 0x1; // Internal high-speed clock enable

    static constexpr uint32_t PLLCFGR_RESET_VALUE = 0x24003010; // Reset value
    typedef bit_field_t<0, 0x3f> PLLCFGR_PLLM; // Division factor for the main PLL (PLL) and audio PLL (PLLI2S) input clock
    typedef bit_field_t<6, 0x1ff> PLLCFGR_PLLN; // Main PLL (PLL) multiplication factor for VCO
    typedef bit_field_t<16, 0x3> PLLCFGR_PLLP; // Main PLL (PLL) division factor for main system clock
    static constexpr uint32_t PLLCFGR_PLLSRC = 0x400000; // Main PLL(PLL) and audio PLL (PLLI2S) entry clock source
    typedef bit_field_t<24, 0xf> PLLCFGR_PLLQ; // Main PLL (PLL) division factor for USB OTG FS, SDIO and random number generator clocks

    static constexpr uint32_t CFGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> CFGR_SW; // System clock switch
    typedef bit_field_t<2, 0x3> CFGR_SWS; // System clock switch status
    typedef bit_field_t<4, 0xf> CFGR_HPRE; // AHB prescaler
    typedef bit_field_t<10, 0x7> CFGR_PPRE1; // APB Low speed prescaler (APB1)
    typedef bit_field_t<13, 0x7> CFGR_PPRE2; // APB high-speed prescaler (APB2)
    typedef bit_field_t<16, 0x1f> CFGR_RTCPRE; // HSE division factor for RTC clock
    typedef bit_field_t<21, 0x3> CFGR_MCO1SEL; // Microcontroller clock output 1
    static constexpr uint32_t CFGR_I2SSRC = 0x800000; // I2S clock selection
    typedef bit_field_t<24, 0x7> CFGR_MCO1PRE; // MCO1 prescaler
    typedef bit_field_t<27, 0x7> CFGR_MCO2PRE; // MCO2 prescaler
    typedef bit_field_t<30, 0x3> CFGR_MCO2SEL; // Microcontroller clock output 2

    static constexpr uint32_t CIR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CIR_CSSC = 0x800000; // Clock security system interrupt clear
    static constexpr uint32_t CIR_PLLI2SRDYC = 0x200000; // PLLI2S ready interrupt clear
    static constexpr uint32_t CIR_PLLRDYC = 0x100000; // Main PLL(PLL) ready interrupt clear
    static constexpr uint32_t CIR_HSERDYC = 0x80000; // HSE ready interrupt clear
    static constexpr uint32_t CIR_HSIRDYC = 0x40000; // HSI ready interrupt clear
    static constexpr uint32_t CIR_LSERDYC = 0x20000; // LSE ready interrupt clear
    static constexpr uint32_t CIR_LSIRDYC = 0x10000; // LSI ready interrupt clear
    static constexpr uint32_t CIR_PLLI2SRDYIE = 0x2000; // PLLI2S ready interrupt enable
    static constexpr uint32_t CIR_PLLRDYIE = 0x1000; // Main PLL (PLL) ready interrupt enable
    static constexpr uint32_t CIR_HSERDYIE = 0x800; // HSE ready interrupt enable
    static constexpr uint32_t CIR_HSIRDYIE = 0x400; // HSI ready interrupt enable
    static constexpr uint32_t CIR_LSERDYIE = 0x200; // LSE ready interrupt enable
    static constexpr uint32_t CIR_LSIRDYIE = 0x100; // LSI ready interrupt enable
    static constexpr uint32_t CIR_CSSF = 0x80; // Clock security system interrupt flag
    static constexpr uint32_t CIR_PLLI2SRDYF = 0x20; // PLLI2S ready interrupt flag
    static constexpr uint32_t CIR_PLLRDYF = 0x10; // Main PLL (PLL) ready interrupt flag
    static constexpr uint32_t CIR_HSERDYF = 0x8; // HSE ready interrupt flag
    static constexpr uint32_t CIR_HSIRDYF = 0x4; // HSI ready interrupt flag
    static constexpr uint32_t CIR_LSERDYF = 0x2; // LSE ready interrupt flag
    static constexpr uint32_t CIR_LSIRDYF = 0x1; // LSI ready interrupt flag

    static constexpr uint32_t AHB1RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB1RSTR_DMA2RST = 0x400000; // DMA2 reset
    static constexpr uint32_t AHB1RSTR_DMA1RST = 0x200000; // DMA2 reset
    static constexpr uint32_t AHB1RSTR_CRCRST = 0x1000; // CRC reset
    static constexpr uint32_t AHB1RSTR_GPIOHRST = 0x80; // IO port H reset
    static constexpr uint32_t AHB1RSTR_GPIOERST = 0x10; // IO port E reset
    static constexpr uint32_t AHB1RSTR_GPIODRST = 0x8; // IO port D reset
    static constexpr uint32_t AHB1RSTR_GPIOCRST = 0x4; // IO port C reset
    static constexpr uint32_t AHB1RSTR_GPIOBRST = 0x2; // IO port B reset
    static constexpr uint32_t AHB1RSTR_GPIOARST = 0x1; // IO port A reset

    static constexpr uint32_t AHB2RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB2RSTR_OTGFSRST = 0x80; // USB OTG FS module reset


    static constexpr uint32_t APB1RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1RSTR_PWRRST = 0x10000000; // Power interface reset
    static constexpr uint32_t APB1RSTR_I2C3RST = 0x800000; // I2C3 reset
    static constexpr uint32_t APB1RSTR_I2C2RST = 0x400000; // I2C 2 reset
    static constexpr uint32_t APB1RSTR_I2C1RST = 0x200000; // I2C 1 reset
    static constexpr uint32_t APB1RSTR_UART2RST = 0x20000; // USART 2 reset
    static constexpr uint32_t APB1RSTR_SPI3RST = 0x8000; // SPI 3 reset
    static constexpr uint32_t APB1RSTR_SPI2RST = 0x4000; // SPI 2 reset
    static constexpr uint32_t APB1RSTR_WWDGRST = 0x800; // Window watchdog reset
    static constexpr uint32_t APB1RSTR_TIM5RST = 0x8; // TIM5 reset
    static constexpr uint32_t APB1RSTR_TIM4RST = 0x4; // TIM4 reset
    static constexpr uint32_t APB1RSTR_TIM3RST = 0x2; // TIM3 reset
    static constexpr uint32_t APB1RSTR_TIM2RST = 0x1; // TIM2 reset

    static constexpr uint32_t APB2RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2RSTR_TIM11RST = 0x40000; // TIM11 reset
    static constexpr uint32_t APB2RSTR_TIM10RST = 0x20000; // TIM10 reset
    static constexpr uint32_t APB2RSTR_TIM9RST = 0x10000; // TIM9 reset
    static constexpr uint32_t APB2RSTR_SYSCFGRST = 0x4000; // System configuration controller reset
    static constexpr uint32_t APB2RSTR_SPI1RST = 0x1000; // SPI 1 reset
    static constexpr uint32_t APB2RSTR_SDIORST = 0x800; // SDIO reset
    static constexpr uint32_t APB2RSTR_ADCRST = 0x100; // ADC interface reset (common to all ADCs)
    static constexpr uint32_t APB2RSTR_USART6RST = 0x20; // USART6 reset
    static constexpr uint32_t APB2RSTR_USART1RST = 0x10; // USART1 reset
    static constexpr uint32_t APB2RSTR_TIM1RST = 0x1; // TIM1 reset


    static constexpr uint32_t AHB1ENR_RESET_VALUE = 0x100000; // Reset value
    static constexpr uint32_t AHB1ENR_DMA2EN = 0x400000; // DMA2 clock enable
    static constexpr uint32_t AHB1ENR_DMA1EN = 0x200000; // DMA1 clock enable
    static constexpr uint32_t AHB1ENR_CRCEN = 0x1000; // CRC clock enable
    static constexpr uint32_t AHB1ENR_GPIOHEN = 0x80; // IO port H clock enable
    static constexpr uint32_t AHB1ENR_GPIOEEN = 0x10; // IO port E clock enable
    static constexpr uint32_t AHB1ENR_GPIODEN = 0x8; // IO port D clock enable
    static constexpr uint32_t AHB1ENR_GPIOCEN = 0x4; // IO port C clock enable
    static constexpr uint32_t AHB1ENR_GPIOBEN = 0x2; // IO port B clock enable
    static constexpr uint32_t AHB1ENR_GPIOAEN = 0x1; // IO port A clock enable

    static constexpr uint32_t AHB2ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB2ENR_OTGFSEN = 0x80; // USB OTG FS clock enable


    static constexpr uint32_t APB1ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1ENR_PWREN = 0x10000000; // Power interface clock enable
    static constexpr uint32_t APB1ENR_I2C3EN = 0x800000; // I2C3 clock enable
    static constexpr uint32_t APB1ENR_I2C2EN = 0x400000; // I2C2 clock enable
    static constexpr uint32_t APB1ENR_I2C1EN = 0x200000; // I2C1 clock enable
    static constexpr uint32_t APB1ENR_USART2EN = 0x20000; // USART 2 clock enable
    static constexpr uint32_t APB1ENR_SPI3EN = 0x8000; // SPI3 clock enable
    static constexpr uint32_t APB1ENR_SPI2EN = 0x4000; // SPI2 clock enable
    static constexpr uint32_t APB1ENR_WWDGEN = 0x800; // Window watchdog clock enable
    static constexpr uint32_t APB1ENR_TIM5EN = 0x8; // TIM5 clock enable
    static constexpr uint32_t APB1ENR_TIM4EN = 0x4; // TIM4 clock enable
    static constexpr uint32_t APB1ENR_TIM3EN = 0x2; // TIM3 clock enable
    static constexpr uint32_t APB1ENR_TIM2EN = 0x1; // TIM2 clock enable

    static constexpr uint32_t APB2ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2ENR_TIM11EN = 0x40000; // TIM11 clock enable
    static constexpr uint32_t APB2ENR_TIM10EN = 0x20000; // TIM10 clock enable
    static constexpr uint32_t APB2ENR_TIM9EN = 0x10000; // TIM9 clock enable
    static constexpr uint32_t APB2ENR_SYSCFGEN = 0x4000; // System configuration controller clock enable
    static constexpr uint32_t APB2ENR_SPI1EN = 0x1000; // SPI1 clock enable
    static constexpr uint32_t APB2ENR_SDIOEN = 0x800; // SDIO clock enable
    static constexpr uint32_t APB2ENR_ADC1EN = 0x100; // ADC1 clock enable
    static constexpr uint32_t APB2ENR_USART6EN = 0x20; // USART6 clock enable
    static constexpr uint32_t APB2ENR_USART1EN = 0x10; // USART1 clock enable
    static constexpr uint32_t APB2ENR_TIM1EN = 0x1; // TIM1 clock enable


    static constexpr uint32_t AHB1LPENR_RESET_VALUE = 0x7e6791ff; // Reset value
    static constexpr uint32_t AHB1LPENR_DMA2LPEN = 0x400000; // DMA2 clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_DMA1LPEN = 0x200000; // DMA1 clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_SRAM1LPEN = 0x10000; // SRAM 1interface clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_FLITFLPEN = 0x8000; // Flash interface clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_CRCLPEN = 0x1000; // CRC clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOHLPEN = 0x80; // IO port H clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOELPEN = 0x10; // IO port E clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_GPIODLPEN = 0x8; // IO port D clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOCLPEN = 0x4; // IO port C clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOBLPEN = 0x2; // IO port B clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOALPEN = 0x1; // IO port A clock enable during sleep mode

    static constexpr uint32_t AHB2LPENR_RESET_VALUE = 0xf1; // Reset value
    static constexpr uint32_t AHB2LPENR_OTGFSLPEN = 0x80; // USB OTG FS clock enable during Sleep mode


    static constexpr uint32_t APB1LPENR_RESET_VALUE = 0x36fec9ff; // Reset value
    static constexpr uint32_t APB1LPENR_PWRLPEN = 0x10000000; // Power interface clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_I2C3LPEN = 0x800000; // I2C3 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_I2C2LPEN = 0x400000; // I2C2 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_I2C1LPEN = 0x200000; // I2C1 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_USART2LPEN = 0x20000; // USART2 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_SPI3LPEN = 0x8000; // SPI3 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_SPI2LPEN = 0x4000; // SPI2 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_WWDGLPEN = 0x800; // Window watchdog clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM5LPEN = 0x8; // TIM5 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM4LPEN = 0x4; // TIM4 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM3LPEN = 0x2; // TIM3 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM2LPEN = 0x1; // TIM2 clock enable during Sleep mode

    static constexpr uint32_t APB2LPENR_RESET_VALUE = 0x75f33; // Reset value
    static constexpr uint32_t APB2LPENR_TIM11LPEN = 0x40000; // TIM11 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_TIM10LPEN = 0x20000; // TIM10 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_TIM9LPEN = 0x10000; // TIM9 clock enable during sleep mode
    static constexpr uint32_t APB2LPENR_SYSCFGLPEN = 0x4000; // System configuration controller clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_SPI1LPEN = 0x1000; // SPI 1 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_SDIOLPEN = 0x800; // SDIO clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_ADC1LPEN = 0x100; // ADC1 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_USART6LPEN = 0x20; // USART6 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_USART1LPEN = 0x10; // USART1 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_TIM1LPEN = 0x1; // TIM1 clock enable during Sleep mode


    static constexpr uint32_t BDCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BDCR_BDRST = 0x10000; // Backup domain software reset
    static constexpr uint32_t BDCR_RTCEN = 0x8000; // RTC clock enable
    static constexpr uint32_t BDCR_RTCSEL1 = 0x200; // RTC clock source selection
    static constexpr uint32_t BDCR_RTCSEL0 = 0x100; // RTC clock source selection
    static constexpr uint32_t BDCR_LSEBYP = 0x4; // External low-speed oscillator bypass
    static constexpr uint32_t BDCR_LSERDY = 0x2; // External low-speed oscillator ready
    static constexpr uint32_t BDCR_LSEON = 0x1; // External low-speed oscillator enable

    static constexpr uint32_t CSR_RESET_VALUE = 0xe000000; // Reset value
    static constexpr uint32_t CSR_LPWRRSTF = 0x80000000; // Low-power reset flag
    static constexpr uint32_t CSR_WWDGRSTF = 0x40000000; // Window watchdog reset flag
    static constexpr uint32_t CSR_WDGRSTF = 0x20000000; // Independent watchdog reset flag
    static constexpr uint32_t CSR_SFTRSTF = 0x10000000; // Software reset flag
    static constexpr uint32_t CSR_PORRSTF = 0x8000000; // POR/PDR reset flag
    static constexpr uint32_t CSR_PADRSTF = 0x4000000; // PIN reset flag
    static constexpr uint32_t CSR_BORRSTF = 0x2000000; // BOR reset flag
    static constexpr uint32_t CSR_RMVF = 0x1000000; // Remove reset flag
    static constexpr uint32_t CSR_LSIRDY = 0x2; // Internal low-speed oscillator ready
    static constexpr uint32_t CSR_LSION = 0x1; // Internal low-speed oscillator enable


    static constexpr uint32_t SSCGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SSCGR_SSCGEN = 0x80000000; // Spread spectrum modulation enable
    static constexpr uint32_t SSCGR_SPREADSEL = 0x40000000; // Spread Select
    typedef bit_field_t<13, 0x7fff> SSCGR_INCSTEP; // Incrementation step
    typedef bit_field_t<0, 0x1fff> SSCGR_MODPER; // Modulation period

    static constexpr uint32_t PLLI2SCFGR_RESET_VALUE = 0x20003000; // Reset value
    typedef bit_field_t<28, 0x7> PLLI2SCFGR_PLLI2SRX; // PLLI2S division factor for I2S clocks
    typedef bit_field_t<6, 0x1ff> PLLI2SCFGR_PLLI2SNX; // PLLI2S multiplication factor for VCO
};

// RCC: Reset and clock control

struct stm32f405_rcc_t
{
    volatile uint32_t CR; // clock control register
    volatile uint32_t PLLCFGR; // PLL configuration register
    volatile uint32_t CFGR; // clock configuration register
    volatile uint32_t CIR; // clock interrupt register
    volatile uint32_t AHB1RSTR; // AHB1 peripheral reset register
    volatile uint32_t AHB2RSTR; // AHB2 peripheral reset register
    volatile uint32_t AHB3RSTR; // AHB3 peripheral reset register
    reserved_t<0x1> _0x1c;
    volatile uint32_t APB1RSTR; // APB1 peripheral reset register
    volatile uint32_t APB2RSTR; // APB2 peripheral reset register
    reserved_t<0x2> _0x28;
    volatile uint32_t AHB1ENR; // AHB1 peripheral clock register
    volatile uint32_t AHB2ENR; // AHB2 peripheral clock enable register
    volatile uint32_t AHB3ENR; // AHB3 peripheral clock enable register
    reserved_t<0x1> _0x3c;
    volatile uint32_t APB1ENR; // APB1 peripheral clock enable register
    volatile uint32_t APB2ENR; // APB2 peripheral clock enable register
    reserved_t<0x2> _0x48;
    volatile uint32_t AHB1LPENR; // AHB1 peripheral clock enable in low power mode register
    volatile uint32_t AHB2LPENR; // AHB2 peripheral clock enable in low power mode register
    volatile uint32_t AHB3LPENR; // AHB3 peripheral clock enable in low power mode register
    reserved_t<0x1> _0x5c;
    volatile uint32_t APB1LPENR; // APB1 peripheral clock enable in low power mode register
    volatile uint32_t APB2LPENR; // APB2 peripheral clock enabled in low power mode register
    reserved_t<0x2> _0x68;
    volatile uint32_t BDCR; // Backup domain control register
    volatile uint32_t CSR; // clock control &amp; status register
    reserved_t<0x2> _0x78;
    volatile uint32_t SSCGR; // spread spectrum clock generation register
    volatile uint32_t PLLI2SCFGR; // PLLI2S configuration register

    static constexpr uint32_t CR_RESET_VALUE = 0x83; // Reset value
    static constexpr uint32_t CR_PLLI2SRDY = 0x8000000; // PLLI2S clock ready flag
    static constexpr uint32_t CR_PLLI2SON = 0x4000000; // PLLI2S enable
    static constexpr uint32_t CR_PLLRDY = 0x2000000; // Main PLL (PLL) clock ready flag
    static constexpr uint32_t CR_PLLON = 0x1000000; // Main PLL (PLL) enable
    static constexpr uint32_t CR_CSSON = 0x80000; // Clock security system enable
    static constexpr uint32_t CR_HSEBYP = 0x40000; // HSE clock bypass
    static constexpr uint32_t CR_HSERDY = 0x20000; // HSE clock ready flag
    static constexpr uint32_t CR_HSEON = 0x10000; // HSE clock enable
    typedef bit_field_t<8, 0xff> CR_HSICAL; // Internal high-speed clock calibration
    typedef bit_field_t<3, 0x1f> CR_HSITRIM; // Internal high-speed clock trimming
    static constexpr uint32_t CR_HSIRDY = 0x2; // Internal high-speed clock ready flag
    static constexpr uint32_t CR_HSION = 0x1; // Internal high-speed clock enable

    static constexpr uint32_t PLLCFGR_RESET_VALUE = 0x24003010; // Reset value
    typedef bit_field_t<0, 0x3f> PLLCFGR_PLLM; // Division factor for the main PLL (PLL) and audio PLL (PLLI2S) input clock
    typedef bit_field_t<6, 0x1ff> PLLCFGR_PLLN; // Main PLL (PLL) multiplication factor for VCO
    typedef bit_field_t<16, 0x3> PLLCFGR_PLLP; // Main PLL (PLL) division factor for main system clock
    static constexpr uint32_t PLLCFGR_PLLSRC = 0x400000; // Main PLL(PLL) and audio PLL (PLLI2S) entry clock source
    typedef bit_field_t<24, 0xf> PLLCFGR_PLLQ; // Main PLL (PLL) division factor for USB OTG FS, SDIO and random number generator clocks

    static constexpr uint32_t CFGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> CFGR_SW; // System clock switch
    typedef bit_field_t<2, 0x3> CFGR_SWS; // System clock switch status
    typedef bit_field_t<4, 0xf> CFGR_HPRE; // AHB prescaler
    typedef bit_field_t<10, 0x7> CFGR_PPRE1; // APB Low speed prescaler (APB1)
    typedef bit_field_t<13, 0x7> CFGR_PPRE2; // APB high-speed prescaler (APB2)
    typedef bit_field_t<16, 0x1f> CFGR_RTCPRE; // HSE division factor for RTC clock
    typedef bit_field_t<21, 0x3> CFGR_MCO1SEL; // Microcontroller clock output 1
    static constexpr uint32_t CFGR_I2SSRC = 0x800000; // I2S clock selection
    typedef bit_field_t<24, 0x7> CFGR_MCO1PRE; // MCO1 prescaler
    typedef bit_field_t<27, 0x7> CFGR_MCO2PRE; // MCO2 prescaler
    typedef bit_field_t<30, 0x3> CFGR_MCO2SEL; // Microcontroller clock output 2

    static constexpr uint32_t CIR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CIR_CSSC = 0x800000; // Clock security system interrupt clear
    static constexpr uint32_t CIR_PLLI2SRDYC = 0x200000; // PLLI2S ready interrupt clear
    static constexpr uint32_t CIR_PLLRDYC = 0x100000; // Main PLL(PLL) ready interrupt clear
    static constexpr uint32_t CIR_HSERDYC = 0x80000; // HSE ready interrupt clear
    static constexpr uint32_t CIR_HSIRDYC = 0x40000; // HSI ready interrupt clear
    static constexpr uint32_t CIR_LSERDYC = 0x20000; // LSE ready interrupt clear
    static constexpr uint32_t CIR_LSIRDYC = 0x10000; // LSI ready interrupt clear
    static constexpr uint32_t CIR_PLLI2SRDYIE = 0x2000; // PLLI2S ready interrupt enable
    static constexpr uint32_t CIR_PLLRDYIE = 0x1000; // Main PLL (PLL) ready interrupt enable
    static constexpr uint32_t CIR_HSERDYIE = 0x800; // HSE ready interrupt enable
    static constexpr uint32_t CIR_HSIRDYIE = 0x400; // HSI ready interrupt enable
    static constexpr uint32_t CIR_LSERDYIE = 0x200; // LSE ready interrupt enable
    static constexpr uint32_t CIR_LSIRDYIE = 0x100; // LSI ready interrupt enable
    static constexpr uint32_t CIR_CSSF = 0x80; // Clock security system interrupt flag
    static constexpr uint32_t CIR_PLLI2SRDYF = 0x20; // PLLI2S ready interrupt flag
    static constexpr uint32_t CIR_PLLRDYF = 0x10; // Main PLL (PLL) ready interrupt flag
    static constexpr uint32_t CIR_HSERDYF = 0x8; // HSE ready interrupt flag
    static constexpr uint32_t CIR_HSIRDYF = 0x4; // HSI ready interrupt flag
    static constexpr uint32_t CIR_LSERDYF = 0x2; // LSE ready interrupt flag
    static constexpr uint32_t CIR_LSIRDYF = 0x1; // LSI ready interrupt flag

    static constexpr uint32_t AHB1RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB1RSTR_OTGHSRST = 0x20000000; // USB OTG HS module reset
    static constexpr uint32_t AHB1RSTR_ETHMACRST = 0x2000000; // Ethernet MAC reset
    static constexpr uint32_t AHB1RSTR_DMA2RST = 0x400000; // DMA2 reset
    static constexpr uint32_t AHB1RSTR_DMA1RST = 0x200000; // DMA2 reset
    static constexpr uint32_t AHB1RSTR_CRCRST = 0x1000; // CRC reset
    static constexpr uint32_t AHB1RSTR_GPIOIRST = 0x100; // IO port I reset
    static constexpr uint32_t AHB1RSTR_GPIOHRST = 0x80; // IO port H reset
    static constexpr uint32_t AHB1RSTR_GPIOGRST = 0x40; // IO port G reset
    static constexpr uint32_t AHB1RSTR_GPIOFRST = 0x20; // IO port F reset
    static constexpr uint32_t AHB1RSTR_GPIOERST = 0x10; // IO port E reset
    static constexpr uint32_t AHB1RSTR_GPIODRST = 0x8; // IO port D reset
    static constexpr uint32_t AHB1RSTR_GPIOCRST = 0x4; // IO port C reset
    static constexpr uint32_t AHB1RSTR_GPIOBRST = 0x2; // IO port B reset
    static constexpr uint32_t AHB1RSTR_GPIOARST = 0x1; // IO port A reset

    static constexpr uint32_t AHB2RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB2RSTR_OTGFSRST = 0x80; // USB OTG FS module reset
    static constexpr uint32_t AHB2RSTR_RNGRST = 0x40; // Random number generator module reset
    static constexpr uint32_t AHB2RSTR_DCMIRST = 0x1; // Camera interface reset

    static constexpr uint32_t AHB3RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB3RSTR_FSMCRST = 0x1; // Flexible static memory controller module reset


    static constexpr uint32_t APB1RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1RSTR_DACRST = 0x20000000; // DAC reset
    static constexpr uint32_t APB1RSTR_PWRRST = 0x10000000; // Power interface reset
    static constexpr uint32_t APB1RSTR_CAN2RST = 0x4000000; // CAN2 reset
    static constexpr uint32_t APB1RSTR_CAN1RST = 0x2000000; // CAN1 reset
    static constexpr uint32_t APB1RSTR_I2C3RST = 0x800000; // I2C3 reset
    static constexpr uint32_t APB1RSTR_I2C2RST = 0x400000; // I2C 2 reset
    static constexpr uint32_t APB1RSTR_I2C1RST = 0x200000; // I2C 1 reset
    static constexpr uint32_t APB1RSTR_UART5RST = 0x100000; // USART 5 reset
    static constexpr uint32_t APB1RSTR_UART4RST = 0x80000; // USART 4 reset
    static constexpr uint32_t APB1RSTR_UART3RST = 0x40000; // USART 3 reset
    static constexpr uint32_t APB1RSTR_UART2RST = 0x20000; // USART 2 reset
    static constexpr uint32_t APB1RSTR_SPI3RST = 0x8000; // SPI 3 reset
    static constexpr uint32_t APB1RSTR_SPI2RST = 0x4000; // SPI 2 reset
    static constexpr uint32_t APB1RSTR_WWDGRST = 0x800; // Window watchdog reset
    static constexpr uint32_t APB1RSTR_TIM14RST = 0x100; // TIM14 reset
    static constexpr uint32_t APB1RSTR_TIM13RST = 0x80; // TIM13 reset
    static constexpr uint32_t APB1RSTR_TIM12RST = 0x40; // TIM12 reset
    static constexpr uint32_t APB1RSTR_TIM7RST = 0x20; // TIM7 reset
    static constexpr uint32_t APB1RSTR_TIM6RST = 0x10; // TIM6 reset
    static constexpr uint32_t APB1RSTR_TIM5RST = 0x8; // TIM5 reset
    static constexpr uint32_t APB1RSTR_TIM4RST = 0x4; // TIM4 reset
    static constexpr uint32_t APB1RSTR_TIM3RST = 0x2; // TIM3 reset
    static constexpr uint32_t APB1RSTR_TIM2RST = 0x1; // TIM2 reset

    static constexpr uint32_t APB2RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2RSTR_TIM11RST = 0x40000; // TIM11 reset
    static constexpr uint32_t APB2RSTR_TIM10RST = 0x20000; // TIM10 reset
    static constexpr uint32_t APB2RSTR_TIM9RST = 0x10000; // TIM9 reset
    static constexpr uint32_t APB2RSTR_SYSCFGRST = 0x4000; // System configuration controller reset
    static constexpr uint32_t APB2RSTR_SPI1RST = 0x1000; // SPI 1 reset
    static constexpr uint32_t APB2RSTR_SDIORST = 0x800; // SDIO reset
    static constexpr uint32_t APB2RSTR_ADCRST = 0x100; // ADC interface reset (common to all ADCs)
    static constexpr uint32_t APB2RSTR_USART6RST = 0x20; // USART6 reset
    static constexpr uint32_t APB2RSTR_USART1RST = 0x10; // USART1 reset
    static constexpr uint32_t APB2RSTR_TIM8RST = 0x2; // TIM8 reset
    static constexpr uint32_t APB2RSTR_TIM1RST = 0x1; // TIM1 reset


    static constexpr uint32_t AHB1ENR_RESET_VALUE = 0x100000; // Reset value
    static constexpr uint32_t AHB1ENR_OTGHSULPIEN = 0x40000000; // USB OTG HSULPI clock enable
    static constexpr uint32_t AHB1ENR_OTGHSEN = 0x20000000; // USB OTG HS clock enable
    static constexpr uint32_t AHB1ENR_ETHMACPTPEN = 0x10000000; // Ethernet PTP clock enable
    static constexpr uint32_t AHB1ENR_ETHMACRXEN = 0x8000000; // Ethernet Reception clock enable
    static constexpr uint32_t AHB1ENR_ETHMACTXEN = 0x4000000; // Ethernet Transmission clock enable
    static constexpr uint32_t AHB1ENR_ETHMACEN = 0x2000000; // Ethernet MAC clock enable
    static constexpr uint32_t AHB1ENR_DMA2EN = 0x400000; // DMA2 clock enable
    static constexpr uint32_t AHB1ENR_DMA1EN = 0x200000; // DMA1 clock enable
    static constexpr uint32_t AHB1ENR_BKPSRAMEN = 0x40000; // Backup SRAM interface clock enable
    static constexpr uint32_t AHB1ENR_CRCEN = 0x1000; // CRC clock enable
    static constexpr uint32_t AHB1ENR_GPIOIEN = 0x100; // IO port I clock enable
    static constexpr uint32_t AHB1ENR_GPIOHEN = 0x80; // IO port H clock enable
    static constexpr uint32_t AHB1ENR_GPIOGEN = 0x40; // IO port G clock enable
    static constexpr uint32_t AHB1ENR_GPIOFEN = 0x20; // IO port F clock enable
    static constexpr uint32_t AHB1ENR_GPIOEEN = 0x10; // IO port E clock enable
    static constexpr uint32_t AHB1ENR_GPIODEN = 0x8; // IO port D clock enable
    static constexpr uint32_t AHB1ENR_GPIOCEN = 0x4; // IO port C clock enable
    static constexpr uint32_t AHB1ENR_GPIOBEN = 0x2; // IO port B clock enable
    static constexpr uint32_t AHB1ENR_GPIOAEN = 0x1; // IO port A clock enable

    static constexpr uint32_t AHB2ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB2ENR_OTGFSEN = 0x80; // USB OTG FS clock enable
    static constexpr uint32_t AHB2ENR_RNGEN = 0x40; // Random number generator clock enable
    static constexpr uint32_t AHB2ENR_DCMIEN = 0x1; // Camera interface enable

    static constexpr uint32_t AHB3ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB3ENR_FSMCEN = 0x1; // Flexible static memory controller module clock enable


    static constexpr uint32_t APB1ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1ENR_DACEN = 0x20000000; // DAC interface clock enable
    static constexpr uint32_t APB1ENR_PWREN = 0x10000000; // Power interface clock enable
    static constexpr uint32_t APB1ENR_CAN2EN = 0x4000000; // CAN 2 clock enable
    static constexpr uint32_t APB1ENR_CAN1EN = 0x2000000; // CAN 1 clock enable
    static constexpr uint32_t APB1ENR_I2C3EN = 0x800000; // I2C3 clock enable
    static constexpr uint32_t APB1ENR_I2C2EN = 0x400000; // I2C2 clock enable
    static constexpr uint32_t APB1ENR_I2C1EN = 0x200000; // I2C1 clock enable
    static constexpr uint32_t APB1ENR_UART5EN = 0x100000; // UART5 clock enable
    static constexpr uint32_t APB1ENR_UART4EN = 0x80000; // UART4 clock enable
    static constexpr uint32_t APB1ENR_USART3EN = 0x40000; // USART3 clock enable
    static constexpr uint32_t APB1ENR_USART2EN = 0x20000; // USART 2 clock enable
    static constexpr uint32_t APB1ENR_SPI3EN = 0x8000; // SPI3 clock enable
    static constexpr uint32_t APB1ENR_SPI2EN = 0x4000; // SPI2 clock enable
    static constexpr uint32_t APB1ENR_WWDGEN = 0x800; // Window watchdog clock enable
    static constexpr uint32_t APB1ENR_TIM14EN = 0x100; // TIM14 clock enable
    static constexpr uint32_t APB1ENR_TIM13EN = 0x80; // TIM13 clock enable
    static constexpr uint32_t APB1ENR_TIM12EN = 0x40; // TIM12 clock enable
    static constexpr uint32_t APB1ENR_TIM7EN = 0x20; // TIM7 clock enable
    static constexpr uint32_t APB1ENR_TIM6EN = 0x10; // TIM6 clock enable
    static constexpr uint32_t APB1ENR_TIM5EN = 0x8; // TIM5 clock enable
    static constexpr uint32_t APB1ENR_TIM4EN = 0x4; // TIM4 clock enable
    static constexpr uint32_t APB1ENR_TIM3EN = 0x2; // TIM3 clock enable
    static constexpr uint32_t APB1ENR_TIM2EN = 0x1; // TIM2 clock enable

    static constexpr uint32_t APB2ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2ENR_TIM11EN = 0x40000; // TIM11 clock enable
    static constexpr uint32_t APB2ENR_TIM10EN = 0x20000; // TIM10 clock enable
    static constexpr uint32_t APB2ENR_TIM9EN = 0x10000; // TIM9 clock enable
    static constexpr uint32_t APB2ENR_SYSCFGEN = 0x4000; // System configuration controller clock enable
    static constexpr uint32_t APB2ENR_SPI1EN = 0x1000; // SPI1 clock enable
    static constexpr uint32_t APB2ENR_SDIOEN = 0x800; // SDIO clock enable
    static constexpr uint32_t APB2ENR_ADC3EN = 0x400; // ADC3 clock enable
    static constexpr uint32_t APB2ENR_ADC2EN = 0x200; // ADC2 clock enable
    static constexpr uint32_t APB2ENR_ADC1EN = 0x100; // ADC1 clock enable
    static constexpr uint32_t APB2ENR_USART6EN = 0x20; // USART6 clock enable
    static constexpr uint32_t APB2ENR_USART1EN = 0x10; // USART1 clock enable
    static constexpr uint32_t APB2ENR_TIM8EN = 0x2; // TIM8 clock enable
    static constexpr uint32_t APB2ENR_TIM1EN = 0x1; // TIM1 clock enable


    static constexpr uint32_t AHB1LPENR_RESET_VALUE = 0x7e6791ff; // Reset value
    static constexpr uint32_t AHB1LPENR_OTGHSULPILPEN = 0x40000000; // USB OTG HS ULPI clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_OTGHSLPEN = 0x20000000; // USB OTG HS clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_ETHMACPTPLPEN = 0x10000000; // Ethernet PTP clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_ETHMACRXLPEN = 0x8000000; // Ethernet reception clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_ETHMACTXLPEN = 0x4000000; // Ethernet transmission clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_ETHMACLPEN = 0x2000000; // Ethernet MAC clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_DMA2LPEN = 0x400000; // DMA2 clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_DMA1LPEN = 0x200000; // DMA1 clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_BKPSRAMLPEN = 0x40000; // Backup SRAM interface clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_SRAM2LPEN = 0x20000; // SRAM 2 interface clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_SRAM1LPEN = 0x10000; // SRAM 1interface clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_FLITFLPEN = 0x8000; // Flash interface clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_CRCLPEN = 0x1000; // CRC clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOILPEN = 0x100; // IO port I clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOHLPEN = 0x80; // IO port H clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOGLPEN = 0x40; // IO port G clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOFLPEN = 0x20; // IO port F clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOELPEN = 0x10; // IO port E clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_GPIODLPEN = 0x8; // IO port D clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOCLPEN = 0x4; // IO port C clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOBLPEN = 0x2; // IO port B clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOALPEN = 0x1; // IO port A clock enable during sleep mode

    static constexpr uint32_t AHB2LPENR_RESET_VALUE = 0xf1; // Reset value
    static constexpr uint32_t AHB2LPENR_OTGFSLPEN = 0x80; // USB OTG FS clock enable during Sleep mode
    static constexpr uint32_t AHB2LPENR_RNGLPEN = 0x40; // Random number generator clock enable during Sleep mode
    static constexpr uint32_t AHB2LPENR_DCMILPEN = 0x1; // Camera interface enable during Sleep mode

    static constexpr uint32_t AHB3LPENR_RESET_VALUE = 0x1; // Reset value
    static constexpr uint32_t AHB3LPENR_FSMCLPEN = 0x1; // Flexible static memory controller module clock enable during Sleep mode


    static constexpr uint32_t APB1LPENR_RESET_VALUE = 0x36fec9ff; // Reset value
    static constexpr uint32_t APB1LPENR_DACLPEN = 0x20000000; // DAC interface clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_PWRLPEN = 0x10000000; // Power interface clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_CAN2LPEN = 0x4000000; // CAN 2 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_CAN1LPEN = 0x2000000; // CAN 1 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_I2C3LPEN = 0x800000; // I2C3 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_I2C2LPEN = 0x400000; // I2C2 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_I2C1LPEN = 0x200000; // I2C1 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_UART5LPEN = 0x100000; // UART5 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_UART4LPEN = 0x80000; // UART4 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_USART3LPEN = 0x40000; // USART3 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_USART2LPEN = 0x20000; // USART2 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_SPI3LPEN = 0x8000; // SPI3 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_SPI2LPEN = 0x4000; // SPI2 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_WWDGLPEN = 0x800; // Window watchdog clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM14LPEN = 0x100; // TIM14 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM13LPEN = 0x80; // TIM13 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM12LPEN = 0x40; // TIM12 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM7LPEN = 0x20; // TIM7 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM6LPEN = 0x10; // TIM6 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM5LPEN = 0x8; // TIM5 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM4LPEN = 0x4; // TIM4 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM3LPEN = 0x2; // TIM3 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM2LPEN = 0x1; // TIM2 clock enable during Sleep mode

    static constexpr uint32_t APB2LPENR_RESET_VALUE = 0x75f33; // Reset value
    static constexpr uint32_t APB2LPENR_TIM11LPEN = 0x40000; // TIM11 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_TIM10LPEN = 0x20000; // TIM10 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_TIM9LPEN = 0x10000; // TIM9 clock enable during sleep mode
    static constexpr uint32_t APB2LPENR_SYSCFGLPEN = 0x4000; // System configuration controller clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_SPI1LPEN = 0x1000; // SPI 1 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_SDIOLPEN = 0x800; // SDIO clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_ADC3LPEN = 0x400; // ADC 3 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_ADC2LPEN = 0x200; // ADC2 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_ADC1LPEN = 0x100; // ADC1 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_USART6LPEN = 0x20; // USART6 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_USART1LPEN = 0x10; // USART1 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_TIM8LPEN = 0x2; // TIM8 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_TIM1LPEN = 0x1; // TIM1 clock enable during Sleep mode


    static constexpr uint32_t BDCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BDCR_BDRST = 0x10000; // Backup domain software reset
    static constexpr uint32_t BDCR_RTCEN = 0x8000; // RTC clock enable
    static constexpr uint32_t BDCR_RTCSEL1 = 0x200; // RTC clock source selection
    static constexpr uint32_t BDCR_RTCSEL0 = 0x100; // RTC clock source selection
    static constexpr uint32_t BDCR_LSEBYP = 0x4; // External low-speed oscillator bypass
    static constexpr uint32_t BDCR_LSERDY = 0x2; // External low-speed oscillator ready
    static constexpr uint32_t BDCR_LSEON = 0x1; // External low-speed oscillator enable

    static constexpr uint32_t CSR_RESET_VALUE = 0xe000000; // Reset value
    static constexpr uint32_t CSR_LPWRRSTF = 0x80000000; // Low-power reset flag
    static constexpr uint32_t CSR_WWDGRSTF = 0x40000000; // Window watchdog reset flag
    static constexpr uint32_t CSR_WDGRSTF = 0x20000000; // Independent watchdog reset flag
    static constexpr uint32_t CSR_SFTRSTF = 0x10000000; // Software reset flag
    static constexpr uint32_t CSR_PORRSTF = 0x8000000; // POR/PDR reset flag
    static constexpr uint32_t CSR_PADRSTF = 0x4000000; // PIN reset flag
    static constexpr uint32_t CSR_BORRSTF = 0x2000000; // BOR reset flag
    static constexpr uint32_t CSR_RMVF = 0x1000000; // Remove reset flag
    static constexpr uint32_t CSR_LSIRDY = 0x2; // Internal low-speed oscillator ready
    static constexpr uint32_t CSR_LSION = 0x1; // Internal low-speed oscillator enable


    static constexpr uint32_t SSCGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SSCGR_SSCGEN = 0x80000000; // Spread spectrum modulation enable
    static constexpr uint32_t SSCGR_SPREADSEL = 0x40000000; // Spread Select
    typedef bit_field_t<13, 0x7fff> SSCGR_INCSTEP; // Incrementation step
    typedef bit_field_t<0, 0x1fff> SSCGR_MODPER; // Modulation period

    static constexpr uint32_t PLLI2SCFGR_RESET_VALUE = 0x20003000; // Reset value
    typedef bit_field_t<28, 0x7> PLLI2SCFGR_PLLI2SRX; // PLLI2S division factor for I2S clocks
    typedef bit_field_t<6, 0x1ff> PLLI2SCFGR_PLLI2SNX; // PLLI2S multiplication factor for VCO
};

// RCC: Reset and clock control

struct stm32f410_rcc_t
{
    volatile uint32_t CR; // clock control register
    volatile uint32_t PLLCFGR; // PLL configuration register
    volatile uint32_t CFGR; // clock configuration register
    volatile uint32_t CIR; // clock interrupt register
    volatile uint32_t AHB1RSTR; // AHB1 peripheral reset register
    reserved_t<0x3> _0x14;
    volatile uint32_t APB1RSTR; // APB1 peripheral reset register
    volatile uint32_t APB2RSTR; // APB2 peripheral reset register
    reserved_t<0x2> _0x28;
    volatile uint32_t AHB1ENR; // AHB1 peripheral clock register
    reserved_t<0x3> _0x34;
    volatile uint32_t APB1ENR; // APB1 peripheral clock enable register
    volatile uint32_t APB2ENR; // APB2 peripheral clock enable register
    reserved_t<0x2> _0x48;
    volatile uint32_t AHB1LPENR; // AHB1 peripheral clock enable in low power mode register
    reserved_t<0x3> _0x54;
    volatile uint32_t APB1LPENR; // APB1 peripheral clock enable in low power mode register
    volatile uint32_t APB2LPENR; // APB2 peripheral clock enabled in low power mode register
    reserved_t<0x2> _0x68;
    volatile uint32_t BDCR; // Backup domain control register
    volatile uint32_t CSR; // clock control &amp; status register
    reserved_t<0x2> _0x78;
    volatile uint32_t SSCGR; // spread spectrum clock generation register
    reserved_t<0x2> _0x84;
    volatile uint32_t DCKCFGR; // DCKCFGR register
    reserved_t<0x1> _0x90;
    volatile uint32_t DCKCFGR2; // DCKCFGR2 register

    static constexpr uint32_t CR_RESET_VALUE = 0x83; // Reset value
    static constexpr uint32_t CR_PLLRDY = 0x2000000; // Main PLL (PLL) clock ready flag
    static constexpr uint32_t CR_PLLON = 0x1000000; // Main PLL (PLL) enable
    static constexpr uint32_t CR_CSSON = 0x80000; // Clock security system enable
    static constexpr uint32_t CR_HSEBYP = 0x40000; // HSE clock bypass
    static constexpr uint32_t CR_HSERDY = 0x20000; // HSE clock ready flag
    static constexpr uint32_t CR_HSEON = 0x10000; // HSE clock enable
    typedef bit_field_t<8, 0xff> CR_HSICAL; // Internal high-speed clock calibration
    typedef bit_field_t<3, 0x1f> CR_HSITRIM; // Internal high-speed clock trimming
    static constexpr uint32_t CR_HSIRDY = 0x2; // Internal high-speed clock ready flag
    static constexpr uint32_t CR_HSION = 0x1; // Internal high-speed clock enable

    static constexpr uint32_t PLLCFGR_RESET_VALUE = 0x7f003010; // Reset value
    typedef bit_field_t<0, 0x3f> PLLCFGR_PLLM; // Division factor for the main PLL (PLL) and audio PLL (PLLI2S) input clock
    typedef bit_field_t<6, 0x1ff> PLLCFGR_PLLN; // Main PLL (PLL) multiplication factor for VCO
    typedef bit_field_t<16, 0x3> PLLCFGR_PLLP; // Main PLL (PLL) division factor for main system clock
    static constexpr uint32_t PLLCFGR_PLLSRC = 0x400000; // Main PLL(PLL) and audio PLL (PLLI2S) entry clock source
    typedef bit_field_t<24, 0xf> PLLCFGR_PLLQ; // Main PLL (PLL) division factor for USB OTG FS, SDIO and random number generator clocks
    typedef bit_field_t<28, 0x7> PLLCFGR_PLLR; // PLLR1

    static constexpr uint32_t CFGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> CFGR_SW; // System clock switch
    typedef bit_field_t<2, 0x3> CFGR_SWS; // System clock switch status
    typedef bit_field_t<4, 0xf> CFGR_HPRE; // AHB prescaler
    static constexpr uint32_t CFGR_MCO1EN = 0x100; // MCO output enable
    static constexpr uint32_t CFGR_MCO2EN = 0x200; // MCO output enable
    typedef bit_field_t<10, 0x7> CFGR_PPRE1; // APB Low speed prescaler (APB1)
    typedef bit_field_t<13, 0x7> CFGR_PPRE2; // APB high-speed prescaler (APB2)
    typedef bit_field_t<16, 0x1f> CFGR_RTCPRE; // HSE division factor for RTC clock
    typedef bit_field_t<21, 0x3> CFGR_MCO1SEL; // Microcontroller clock output 1
    typedef bit_field_t<24, 0x7> CFGR_MCO1PRE; // MCO1 prescaler
    typedef bit_field_t<27, 0x7> CFGR_MCO2PRE; // MCO2 prescaler
    typedef bit_field_t<30, 0x3> CFGR_MCO2SEL; // Microcontroller clock output 2

    static constexpr uint32_t CIR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CIR_CSSC = 0x800000; // Clock security system interrupt clear
    static constexpr uint32_t CIR_PLLI2SRDYC = 0x200000; // PLLI2S ready interrupt clear
    static constexpr uint32_t CIR_PLLRDYC = 0x100000; // Main PLL(PLL) ready interrupt clear
    static constexpr uint32_t CIR_HSERDYC = 0x80000; // HSE ready interrupt clear
    static constexpr uint32_t CIR_HSIRDYC = 0x40000; // HSI ready interrupt clear
    static constexpr uint32_t CIR_LSERDYC = 0x20000; // LSE ready interrupt clear
    static constexpr uint32_t CIR_LSIRDYC = 0x10000; // LSI ready interrupt clear
    static constexpr uint32_t CIR_PLLRDYIE = 0x1000; // Main PLL (PLL) ready interrupt enable
    static constexpr uint32_t CIR_HSERDYIE = 0x800; // HSE ready interrupt enable
    static constexpr uint32_t CIR_HSIRDYIE = 0x400; // HSI ready interrupt enable
    static constexpr uint32_t CIR_LSERDYIE = 0x200; // LSE ready interrupt enable
    static constexpr uint32_t CIR_LSIRDYIE = 0x100; // LSI ready interrupt enable
    static constexpr uint32_t CIR_CSSF = 0x80; // Clock security system interrupt flag
    static constexpr uint32_t CIR_PLLRDYF = 0x10; // Main PLL (PLL) ready interrupt flag
    static constexpr uint32_t CIR_HSERDYF = 0x8; // HSE ready interrupt flag
    static constexpr uint32_t CIR_HSIRDYF = 0x4; // HSI ready interrupt flag
    static constexpr uint32_t CIR_LSERDYF = 0x2; // LSE ready interrupt flag
    static constexpr uint32_t CIR_LSIRDYF = 0x1; // LSI ready interrupt flag

    static constexpr uint32_t AHB1RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB1RSTR_GPIOARST = 0x1; // IO port A reset
    static constexpr uint32_t AHB1RSTR_GPIOBRST = 0x2; // IO port B reset
    static constexpr uint32_t AHB1RSTR_GPIOCRST = 0x4; // IO port C reset
    static constexpr uint32_t AHB1RSTR_GPIOHRST = 0x80; // IO port H reset
    static constexpr uint32_t AHB1RSTR_CRCRST = 0x1000; // CRC reset
    static constexpr uint32_t AHB1RSTR_DMA1RST = 0x200000; // DMA2 reset
    static constexpr uint32_t AHB1RSTR_DMA2RST = 0x400000; // DMA2 reset
    static constexpr uint32_t AHB1RSTR_RNGRST = 0x80000000; // RNGRST


    static constexpr uint32_t APB1RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1RSTR_TIM5RST = 0x8; // TIM5 reset
    static constexpr uint32_t APB1RSTR_TIM6RST = 0x10; // TIM6 reset
    static constexpr uint32_t APB1RSTR_LPTIM1RST = 0x200; // LPTIM1 reset
    static constexpr uint32_t APB1RSTR_WWDGRST = 0x800; // Window watchdog reset
    static constexpr uint32_t APB1RSTR_SPI2RST = 0x4000; // SPI 2 reset
    static constexpr uint32_t APB1RSTR_UART2RST = 0x20000; // USART 2 reset
    static constexpr uint32_t APB1RSTR_I2C1RST = 0x200000; // I2C 1 reset
    static constexpr uint32_t APB1RSTR_I2C2RST = 0x400000; // I2C 2 reset
    static constexpr uint32_t APB1RSTR_I2C4RST = 0x1000000; // I2C4 reset
    static constexpr uint32_t APB1RSTR_PWRRST = 0x10000000; // Power interface reset
    static constexpr uint32_t APB1RSTR_DACRST = 0x20000000; // DAC reset

    static constexpr uint32_t APB2RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2RSTR_TIM11RST = 0x40000; // TIM11 reset
    static constexpr uint32_t APB2RSTR_TIM9RST = 0x10000; // TIM9 reset
    static constexpr uint32_t APB2RSTR_SYSCFGRST = 0x4000; // System configuration controller reset
    static constexpr uint32_t APB2RSTR_SPI1RST = 0x1000; // SPI 1 reset
    static constexpr uint32_t APB2RSTR_ADCRST = 0x100; // ADC interface reset (common to all ADCs)
    static constexpr uint32_t APB2RSTR_USART6RST = 0x20; // USART6 reset
    static constexpr uint32_t APB2RSTR_USART1RST = 0x10; // USART1 reset
    static constexpr uint32_t APB2RSTR_TIM1RST = 0x1; // TIM1 reset


    static constexpr uint32_t AHB1ENR_RESET_VALUE = 0x100000; // Reset value
    static constexpr uint32_t AHB1ENR_GPIOAEN = 0x1; // IO port A clock enable
    static constexpr uint32_t AHB1ENR_GPIOBEN = 0x2; // IO port B clock enable
    static constexpr uint32_t AHB1ENR_GPIOCEN = 0x4; // IO port C clock enable
    static constexpr uint32_t AHB1ENR_GPIOHEN = 0x80; // IO port H clock enable
    static constexpr uint32_t AHB1ENR_CRCEN = 0x1000; // CRC clock enable
    static constexpr uint32_t AHB1ENR_DMA1EN = 0x200000; // DMA1 clock enable
    static constexpr uint32_t AHB1ENR_DMA2EN = 0x400000; // DMA2 clock enable
    static constexpr uint32_t AHB1ENR_RNGEN = 0x80000000; // RNG clock enable


    static constexpr uint32_t APB1ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1ENR_TIM5EN = 0x8; // TIM5 clock enable
    static constexpr uint32_t APB1ENR_TIM6EN = 0x10; // TIM6 clock enable
    static constexpr uint32_t APB1ENR_LPTIM1EN = 0x200; // LPTIM1 clock enable
    static constexpr uint32_t APB1ENR_RTCAPBEN = 0x400; // RTC APB clock enable
    static constexpr uint32_t APB1ENR_WWDGEN = 0x800; // Window watchdog clock enable
    static constexpr uint32_t APB1ENR_SPI2EN = 0x4000; // SPI2 clock enable
    static constexpr uint32_t APB1ENR_USART2EN = 0x20000; // USART 2 clock enable
    static constexpr uint32_t APB1ENR_I2C1EN = 0x200000; // I2C1 clock enable
    static constexpr uint32_t APB1ENR_I2C2EN = 0x400000; // I2C2 clock enable
    static constexpr uint32_t APB1ENR_I2C4EN = 0x1000000; // I2C4 clock enable
    static constexpr uint32_t APB1ENR_PWREN = 0x10000000; // Power interface clock enable
    static constexpr uint32_t APB1ENR_DACEN = 0x20000000; // DAC interface clock enable

    static constexpr uint32_t APB2ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2ENR_TIM1EN = 0x1; // TIM1 clock enable
    static constexpr uint32_t APB2ENR_USART1EN = 0x10; // USART1 clock enable
    static constexpr uint32_t APB2ENR_USART6EN = 0x20; // USART6 clock enable
    static constexpr uint32_t APB2ENR_ADC1EN = 0x100; // ADC1 clock enable
    static constexpr uint32_t APB2ENR_SPI1EN = 0x1000; // SPI1 clock enable
    static constexpr uint32_t APB2ENR_SYSCFGEN = 0x4000; // System configuration controller clock enable
    static constexpr uint32_t APB2ENR_EXTITEN = 0x8000; // EXTI ans external IT clock enable
    static constexpr uint32_t APB2ENR_TIM9EN = 0x10000; // TIM9 clock enable
    static constexpr uint32_t APB2ENR_TIM11EN = 0x40000; // TIM11 clock enable
    static constexpr uint32_t APB2ENR_SPI5EN = 0x100000; // SPI5 clock enable


    static constexpr uint32_t AHB1LPENR_RESET_VALUE = 0x7e6791ff; // Reset value
    static constexpr uint32_t AHB1LPENR_GPIOALPEN = 0x1; // IO port A clock enable during sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOBLPEN = 0x2; // IO port B clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOCLPEN = 0x4; // IO port C clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOHLPEN = 0x80; // IO port H clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_CRCLPEN = 0x1000; // CRC clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_FLITFLPEN = 0x8000; // Flash interface clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_SRAM1LPEN = 0x10000; // SRAM 1interface clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_DMA1LPEN = 0x200000; // DMA1 clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_DMA2LPEN = 0x400000; // DMA2 clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_RNGLPEN = 0x80000000; // RNG clock enable during sleep mode


    static constexpr uint32_t APB1LPENR_RESET_VALUE = 0x36fec9ff; // Reset value
    static constexpr uint32_t APB1LPENR_TIM5LPEN = 0x8; // TIM5 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM6LPEN = 0x10; // TIM6 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_LPTIM1LPEN = 0x200; // LPTIM1 clock enable during sleep mode
    static constexpr uint32_t APB1LPENR_RTCAPBLPEN = 0x400; // RTC APB clock enable during sleep mode
    static constexpr uint32_t APB1LPENR_WWDGLPEN = 0x800; // Window watchdog clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_SPI2LPEN = 0x4000; // SPI2 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_USART2LPEN = 0x20000; // USART2 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_I2C1LPEN = 0x200000; // I2C1 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_I2C2LPEN = 0x400000; // I2C2 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_I2C4LPEN = 0x1000000; // I2C4 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_PWRLPEN = 0x10000000; // Power interface clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_DACLPEN = 0x20000000; // DAC interface clock enable during sleep mode

    static constexpr uint32_t APB2LPENR_RESET_VALUE = 0x75f33; // Reset value
    static constexpr uint32_t APB2LPENR_TIM1LPEN = 0x1; // TIM1 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_USART1LPEN = 0x10; // USART1 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_USART6LPEN = 0x20; // USART6 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_ADC1LPEN = 0x100; // ADC1 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_SDIOLPEN = 0x800; // SDIO clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_SPI1LPEN = 0x1000; // SPI 1 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_SYSCFGLPEN = 0x4000; // System configuration controller clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_EXTITLPEN = 0x8000; // EXTI and External IT clock enable during sleep mode
    static constexpr uint32_t APB2LPENR_TIM9LPEN = 0x10000; // TIM9 clock enable during sleep mode
    static constexpr uint32_t APB2LPENR_TIM11LPEN = 0x40000; // TIM11 clock enable during Sleep mode


    static constexpr uint32_t BDCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BDCR_BDRST = 0x10000; // Backup domain software reset
    static constexpr uint32_t BDCR_RTCEN = 0x8000; // RTC clock enable
    static constexpr uint32_t BDCR_RTCSEL1 = 0x200; // RTC clock source selection
    static constexpr uint32_t BDCR_RTCSEL0 = 0x100; // RTC clock source selection
    static constexpr uint32_t BDCR_LSEBYP = 0x4; // External low-speed oscillator bypass
    static constexpr uint32_t BDCR_LSERDY = 0x2; // External low-speed oscillator ready
    static constexpr uint32_t BDCR_LSEON = 0x1; // External low-speed oscillator enable

    static constexpr uint32_t CSR_RESET_VALUE = 0xe000000; // Reset value
    static constexpr uint32_t CSR_LPWRRSTF = 0x80000000; // Low-power reset flag
    static constexpr uint32_t CSR_WWDGRSTF = 0x40000000; // Window watchdog reset flag
    static constexpr uint32_t CSR_WDGRSTF = 0x20000000; // Independent watchdog reset flag
    static constexpr uint32_t CSR_SFTRSTF = 0x10000000; // Software reset flag
    static constexpr uint32_t CSR_PORRSTF = 0x8000000; // POR/PDR reset flag
    static constexpr uint32_t CSR_PADRSTF = 0x4000000; // PIN reset flag
    static constexpr uint32_t CSR_BORRSTF = 0x2000000; // BOR reset flag
    static constexpr uint32_t CSR_RMVF = 0x1000000; // Remove reset flag
    static constexpr uint32_t CSR_LSIRDY = 0x2; // Internal low-speed oscillator ready
    static constexpr uint32_t CSR_LSION = 0x1; // Internal low-speed oscillator enable


    static constexpr uint32_t SSCGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SSCGR_SSCGEN = 0x80000000; // Spread spectrum modulation enable
    static constexpr uint32_t SSCGR_SPREADSEL = 0x40000000; // Spread Select
    typedef bit_field_t<13, 0x7fff> SSCGR_INCSTEP; // Incrementation step
    typedef bit_field_t<0, 0x1fff> SSCGR_MODPER; // Modulation period


    static constexpr uint32_t DCKCFGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DCKCFGR_TIMPRE = 0x1000000; // TIMPRE
    typedef bit_field_t<25, 0x3> DCKCFGR_I2SSRC; // I2SSRC


    static constexpr uint32_t DCKCFGR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<22, 0x3> DCKCFGR2_I2C4SEL; // I2C4SEL
    typedef bit_field_t<30, 0x3> DCKCFGR2_LPTIM1SEL; // LPTIM1SEL
};

// RCC: Reset and clock control

struct stm32f411_rcc_t
{
    volatile uint32_t CR; // clock control register
    volatile uint32_t PLLCFGR; // PLL configuration register
    volatile uint32_t CFGR; // clock configuration register
    volatile uint32_t CIR; // clock interrupt register
    volatile uint32_t AHB1RSTR; // AHB1 peripheral reset register
    volatile uint32_t AHB2RSTR; // AHB2 peripheral reset register
    reserved_t<0x2> _0x18;
    volatile uint32_t APB1RSTR; // APB1 peripheral reset register
    volatile uint32_t APB2RSTR; // APB2 peripheral reset register
    reserved_t<0x2> _0x28;
    volatile uint32_t AHB1ENR; // AHB1 peripheral clock register
    volatile uint32_t AHB2ENR; // AHB2 peripheral clock enable register
    reserved_t<0x2> _0x38;
    volatile uint32_t APB1ENR; // APB1 peripheral clock enable register
    volatile uint32_t APB2ENR; // APB2 peripheral clock enable register
    reserved_t<0x2> _0x48;
    volatile uint32_t AHB1LPENR; // AHB1 peripheral clock enable in low power mode register
    volatile uint32_t AHB2LPENR; // AHB2 peripheral clock enable in low power mode register
    reserved_t<0x2> _0x58;
    volatile uint32_t APB1LPENR; // APB1 peripheral clock enable in low power mode register
    volatile uint32_t APB2LPENR; // APB2 peripheral clock enabled in low power mode register
    reserved_t<0x2> _0x68;
    volatile uint32_t BDCR; // Backup domain control register
    volatile uint32_t CSR; // clock control &amp; status register
    reserved_t<0x2> _0x78;
    volatile uint32_t SSCGR; // spread spectrum clock generation register
    volatile uint32_t PLLI2SCFGR; // PLLI2S configuration register

    static constexpr uint32_t CR_RESET_VALUE = 0x83; // Reset value
    static constexpr uint32_t CR_PLLI2SRDY = 0x8000000; // PLLI2S clock ready flag
    static constexpr uint32_t CR_PLLI2SON = 0x4000000; // PLLI2S enable
    static constexpr uint32_t CR_PLLRDY = 0x2000000; // Main PLL (PLL) clock ready flag
    static constexpr uint32_t CR_PLLON = 0x1000000; // Main PLL (PLL) enable
    static constexpr uint32_t CR_CSSON = 0x80000; // Clock security system enable
    static constexpr uint32_t CR_HSEBYP = 0x40000; // HSE clock bypass
    static constexpr uint32_t CR_HSERDY = 0x20000; // HSE clock ready flag
    static constexpr uint32_t CR_HSEON = 0x10000; // HSE clock enable
    typedef bit_field_t<8, 0xff> CR_HSICAL; // Internal high-speed clock calibration
    typedef bit_field_t<3, 0x1f> CR_HSITRIM; // Internal high-speed clock trimming
    static constexpr uint32_t CR_HSIRDY = 0x2; // Internal high-speed clock ready flag
    static constexpr uint32_t CR_HSION = 0x1; // Internal high-speed clock enable

    static constexpr uint32_t PLLCFGR_RESET_VALUE = 0x24003010; // Reset value
    typedef bit_field_t<0, 0x3f> PLLCFGR_PLLM; // Division factor for the main PLL (PLL) and audio PLL (PLLI2S) input clock
    typedef bit_field_t<6, 0x1ff> PLLCFGR_PLLN; // Main PLL (PLL) multiplication factor for VCO
    typedef bit_field_t<16, 0x3> PLLCFGR_PLLP; // Main PLL (PLL) division factor for main system clock
    static constexpr uint32_t PLLCFGR_PLLSRC = 0x400000; // Main PLL(PLL) and audio PLL (PLLI2S) entry clock source
    typedef bit_field_t<24, 0xf> PLLCFGR_PLLQ; // Main PLL (PLL) division factor for USB OTG FS, SDIO and random number generator clocks

    static constexpr uint32_t CFGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> CFGR_SW; // System clock switch
    typedef bit_field_t<2, 0x3> CFGR_SWS; // System clock switch status
    typedef bit_field_t<4, 0xf> CFGR_HPRE; // AHB prescaler
    typedef bit_field_t<10, 0x7> CFGR_PPRE1; // APB Low speed prescaler (APB1)
    typedef bit_field_t<13, 0x7> CFGR_PPRE2; // APB high-speed prescaler (APB2)
    typedef bit_field_t<16, 0x1f> CFGR_RTCPRE; // HSE division factor for RTC clock
    typedef bit_field_t<21, 0x3> CFGR_MCO1SEL; // Microcontroller clock output 1
    static constexpr uint32_t CFGR_I2SSRC = 0x800000; // I2S clock selection
    typedef bit_field_t<24, 0x7> CFGR_MCO1PRE; // MCO1 prescaler
    typedef bit_field_t<27, 0x7> CFGR_MCO2PRE; // MCO2 prescaler
    typedef bit_field_t<30, 0x3> CFGR_MCO2SEL; // Microcontroller clock output 2

    static constexpr uint32_t CIR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CIR_CSSC = 0x800000; // Clock security system interrupt clear
    static constexpr uint32_t CIR_PLLI2SRDYC = 0x200000; // PLLI2S ready interrupt clear
    static constexpr uint32_t CIR_PLLRDYC = 0x100000; // Main PLL(PLL) ready interrupt clear
    static constexpr uint32_t CIR_HSERDYC = 0x80000; // HSE ready interrupt clear
    static constexpr uint32_t CIR_HSIRDYC = 0x40000; // HSI ready interrupt clear
    static constexpr uint32_t CIR_LSERDYC = 0x20000; // LSE ready interrupt clear
    static constexpr uint32_t CIR_LSIRDYC = 0x10000; // LSI ready interrupt clear
    static constexpr uint32_t CIR_PLLI2SRDYIE = 0x2000; // PLLI2S ready interrupt enable
    static constexpr uint32_t CIR_PLLRDYIE = 0x1000; // Main PLL (PLL) ready interrupt enable
    static constexpr uint32_t CIR_HSERDYIE = 0x800; // HSE ready interrupt enable
    static constexpr uint32_t CIR_HSIRDYIE = 0x400; // HSI ready interrupt enable
    static constexpr uint32_t CIR_LSERDYIE = 0x200; // LSE ready interrupt enable
    static constexpr uint32_t CIR_LSIRDYIE = 0x100; // LSI ready interrupt enable
    static constexpr uint32_t CIR_CSSF = 0x80; // Clock security system interrupt flag
    static constexpr uint32_t CIR_PLLI2SRDYF = 0x20; // PLLI2S ready interrupt flag
    static constexpr uint32_t CIR_PLLRDYF = 0x10; // Main PLL (PLL) ready interrupt flag
    static constexpr uint32_t CIR_HSERDYF = 0x8; // HSE ready interrupt flag
    static constexpr uint32_t CIR_HSIRDYF = 0x4; // HSI ready interrupt flag
    static constexpr uint32_t CIR_LSERDYF = 0x2; // LSE ready interrupt flag
    static constexpr uint32_t CIR_LSIRDYF = 0x1; // LSI ready interrupt flag

    static constexpr uint32_t AHB1RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB1RSTR_DMA2RST = 0x400000; // DMA2 reset
    static constexpr uint32_t AHB1RSTR_DMA1RST = 0x200000; // DMA2 reset
    static constexpr uint32_t AHB1RSTR_CRCRST = 0x1000; // CRC reset
    static constexpr uint32_t AHB1RSTR_GPIOHRST = 0x80; // IO port H reset
    static constexpr uint32_t AHB1RSTR_GPIOERST = 0x10; // IO port E reset
    static constexpr uint32_t AHB1RSTR_GPIODRST = 0x8; // IO port D reset
    static constexpr uint32_t AHB1RSTR_GPIOCRST = 0x4; // IO port C reset
    static constexpr uint32_t AHB1RSTR_GPIOBRST = 0x2; // IO port B reset
    static constexpr uint32_t AHB1RSTR_GPIOARST = 0x1; // IO port A reset

    static constexpr uint32_t AHB2RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB2RSTR_OTGFSRST = 0x80; // USB OTG FS module reset


    static constexpr uint32_t APB1RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1RSTR_PWRRST = 0x10000000; // Power interface reset
    static constexpr uint32_t APB1RSTR_I2C3RST = 0x800000; // I2C3 reset
    static constexpr uint32_t APB1RSTR_I2C2RST = 0x400000; // I2C 2 reset
    static constexpr uint32_t APB1RSTR_I2C1RST = 0x200000; // I2C 1 reset
    static constexpr uint32_t APB1RSTR_UART2RST = 0x20000; // USART 2 reset
    static constexpr uint32_t APB1RSTR_SPI3RST = 0x8000; // SPI 3 reset
    static constexpr uint32_t APB1RSTR_SPI2RST = 0x4000; // SPI 2 reset
    static constexpr uint32_t APB1RSTR_WWDGRST = 0x800; // Window watchdog reset
    static constexpr uint32_t APB1RSTR_TIM5RST = 0x8; // TIM5 reset
    static constexpr uint32_t APB1RSTR_TIM4RST = 0x4; // TIM4 reset
    static constexpr uint32_t APB1RSTR_TIM3RST = 0x2; // TIM3 reset
    static constexpr uint32_t APB1RSTR_TIM2RST = 0x1; // TIM2 reset

    static constexpr uint32_t APB2RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2RSTR_TIM11RST = 0x40000; // TIM11 reset
    static constexpr uint32_t APB2RSTR_TIM10RST = 0x20000; // TIM10 reset
    static constexpr uint32_t APB2RSTR_TIM9RST = 0x10000; // TIM9 reset
    static constexpr uint32_t APB2RSTR_SYSCFGRST = 0x4000; // System configuration controller reset
    static constexpr uint32_t APB2RSTR_SPI1RST = 0x1000; // SPI 1 reset
    static constexpr uint32_t APB2RSTR_SDIORST = 0x800; // SDIO reset
    static constexpr uint32_t APB2RSTR_ADCRST = 0x100; // ADC interface reset (common to all ADCs)
    static constexpr uint32_t APB2RSTR_USART6RST = 0x20; // USART6 reset
    static constexpr uint32_t APB2RSTR_USART1RST = 0x10; // USART1 reset
    static constexpr uint32_t APB2RSTR_TIM1RST = 0x1; // TIM1 reset


    static constexpr uint32_t AHB1ENR_RESET_VALUE = 0x100000; // Reset value
    static constexpr uint32_t AHB1ENR_DMA2EN = 0x400000; // DMA2 clock enable
    static constexpr uint32_t AHB1ENR_DMA1EN = 0x200000; // DMA1 clock enable
    static constexpr uint32_t AHB1ENR_CRCEN = 0x1000; // CRC clock enable
    static constexpr uint32_t AHB1ENR_GPIOHEN = 0x80; // IO port H clock enable
    static constexpr uint32_t AHB1ENR_GPIOEEN = 0x10; // IO port E clock enable
    static constexpr uint32_t AHB1ENR_GPIODEN = 0x8; // IO port D clock enable
    static constexpr uint32_t AHB1ENR_GPIOCEN = 0x4; // IO port C clock enable
    static constexpr uint32_t AHB1ENR_GPIOBEN = 0x2; // IO port B clock enable
    static constexpr uint32_t AHB1ENR_GPIOAEN = 0x1; // IO port A clock enable

    static constexpr uint32_t AHB2ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB2ENR_OTGFSEN = 0x80; // USB OTG FS clock enable


    static constexpr uint32_t APB1ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1ENR_PWREN = 0x10000000; // Power interface clock enable
    static constexpr uint32_t APB1ENR_I2C3EN = 0x800000; // I2C3 clock enable
    static constexpr uint32_t APB1ENR_I2C2EN = 0x400000; // I2C2 clock enable
    static constexpr uint32_t APB1ENR_I2C1EN = 0x200000; // I2C1 clock enable
    static constexpr uint32_t APB1ENR_USART2EN = 0x20000; // USART 2 clock enable
    static constexpr uint32_t APB1ENR_SPI3EN = 0x8000; // SPI3 clock enable
    static constexpr uint32_t APB1ENR_SPI2EN = 0x4000; // SPI2 clock enable
    static constexpr uint32_t APB1ENR_WWDGEN = 0x800; // Window watchdog clock enable
    static constexpr uint32_t APB1ENR_TIM5EN = 0x8; // TIM5 clock enable
    static constexpr uint32_t APB1ENR_TIM4EN = 0x4; // TIM4 clock enable
    static constexpr uint32_t APB1ENR_TIM3EN = 0x2; // TIM3 clock enable
    static constexpr uint32_t APB1ENR_TIM2EN = 0x1; // TIM2 clock enable

    static constexpr uint32_t APB2ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2ENR_TIM1EN = 0x1; // TIM1 clock enable
    static constexpr uint32_t APB2ENR_USART1EN = 0x10; // USART1 clock enable
    static constexpr uint32_t APB2ENR_USART6EN = 0x20; // USART6 clock enable
    static constexpr uint32_t APB2ENR_ADC1EN = 0x100; // ADC1 clock enable
    static constexpr uint32_t APB2ENR_SDIOEN = 0x800; // SDIO clock enable
    static constexpr uint32_t APB2ENR_SPI1EN = 0x1000; // SPI1 clock enable
    static constexpr uint32_t APB2ENR_SPI4EN = 0x2000; // SPI4 clock enable
    static constexpr uint32_t APB2ENR_SYSCFGEN = 0x4000; // System configuration controller clock enable
    static constexpr uint32_t APB2ENR_TIM9EN = 0x10000; // TIM9 clock enable
    static constexpr uint32_t APB2ENR_TIM10EN = 0x20000; // TIM10 clock enable
    static constexpr uint32_t APB2ENR_TIM11EN = 0x40000; // TIM11 clock enable


    static constexpr uint32_t AHB1LPENR_RESET_VALUE = 0x7e6791ff; // Reset value
    static constexpr uint32_t AHB1LPENR_DMA2LPEN = 0x400000; // DMA2 clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_DMA1LPEN = 0x200000; // DMA1 clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_SRAM1LPEN = 0x10000; // SRAM 1interface clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_FLITFLPEN = 0x8000; // Flash interface clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_CRCLPEN = 0x1000; // CRC clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOHLPEN = 0x80; // IO port H clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOELPEN = 0x10; // IO port E clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_GPIODLPEN = 0x8; // IO port D clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOCLPEN = 0x4; // IO port C clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOBLPEN = 0x2; // IO port B clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOALPEN = 0x1; // IO port A clock enable during sleep mode

    static constexpr uint32_t AHB2LPENR_RESET_VALUE = 0xf1; // Reset value
    static constexpr uint32_t AHB2LPENR_OTGFSLPEN = 0x80; // USB OTG FS clock enable during Sleep mode


    static constexpr uint32_t APB1LPENR_RESET_VALUE = 0x36fec9ff; // Reset value
    static constexpr uint32_t APB1LPENR_PWRLPEN = 0x10000000; // Power interface clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_I2C3LPEN = 0x800000; // I2C3 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_I2C2LPEN = 0x400000; // I2C2 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_I2C1LPEN = 0x200000; // I2C1 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_USART2LPEN = 0x20000; // USART2 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_SPI3LPEN = 0x8000; // SPI3 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_SPI2LPEN = 0x4000; // SPI2 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_WWDGLPEN = 0x800; // Window watchdog clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM5LPEN = 0x8; // TIM5 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM4LPEN = 0x4; // TIM4 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM3LPEN = 0x2; // TIM3 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM2LPEN = 0x1; // TIM2 clock enable during Sleep mode

    static constexpr uint32_t APB2LPENR_RESET_VALUE = 0x75f33; // Reset value
    static constexpr uint32_t APB2LPENR_TIM1LPEN = 0x1; // TIM1 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_USART1LPEN = 0x10; // USART1 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_USART6LPEN = 0x20; // USART6 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_ADC1LPEN = 0x100; // ADC1 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_SDIOLPEN = 0x800; // SDIO clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_SPI1LPEN = 0x1000; // SPI 1 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_SPI4LPEN = 0x2000; // SPI4 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_SYSCFGLPEN = 0x4000; // System configuration controller clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_TIM9LPEN = 0x10000; // TIM9 clock enable during sleep mode
    static constexpr uint32_t APB2LPENR_TIM10LPEN = 0x20000; // TIM10 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_TIM11LPEN = 0x40000; // TIM11 clock enable during Sleep mode


    static constexpr uint32_t BDCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BDCR_BDRST = 0x10000; // Backup domain software reset
    static constexpr uint32_t BDCR_RTCEN = 0x8000; // RTC clock enable
    static constexpr uint32_t BDCR_RTCSEL1 = 0x200; // RTC clock source selection
    static constexpr uint32_t BDCR_RTCSEL0 = 0x100; // RTC clock source selection
    static constexpr uint32_t BDCR_LSEBYP = 0x4; // External low-speed oscillator bypass
    static constexpr uint32_t BDCR_LSERDY = 0x2; // External low-speed oscillator ready
    static constexpr uint32_t BDCR_LSEON = 0x1; // External low-speed oscillator enable

    static constexpr uint32_t CSR_RESET_VALUE = 0xe000000; // Reset value
    static constexpr uint32_t CSR_LPWRRSTF = 0x80000000; // Low-power reset flag
    static constexpr uint32_t CSR_WWDGRSTF = 0x40000000; // Window watchdog reset flag
    static constexpr uint32_t CSR_WDGRSTF = 0x20000000; // Independent watchdog reset flag
    static constexpr uint32_t CSR_SFTRSTF = 0x10000000; // Software reset flag
    static constexpr uint32_t CSR_PORRSTF = 0x8000000; // POR/PDR reset flag
    static constexpr uint32_t CSR_PADRSTF = 0x4000000; // PIN reset flag
    static constexpr uint32_t CSR_BORRSTF = 0x2000000; // BOR reset flag
    static constexpr uint32_t CSR_RMVF = 0x1000000; // Remove reset flag
    static constexpr uint32_t CSR_LSIRDY = 0x2; // Internal low-speed oscillator ready
    static constexpr uint32_t CSR_LSION = 0x1; // Internal low-speed oscillator enable


    static constexpr uint32_t SSCGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SSCGR_SSCGEN = 0x80000000; // Spread spectrum modulation enable
    static constexpr uint32_t SSCGR_SPREADSEL = 0x40000000; // Spread Select
    typedef bit_field_t<13, 0x7fff> SSCGR_INCSTEP; // Incrementation step
    typedef bit_field_t<0, 0x1fff> SSCGR_MODPER; // Modulation period

    static constexpr uint32_t PLLI2SCFGR_RESET_VALUE = 0x20003000; // Reset value
    typedef bit_field_t<28, 0x7> PLLI2SCFGR_PLLI2SRX; // PLLI2S division factor for I2S clocks
    typedef bit_field_t<6, 0x1ff> PLLI2SCFGR_PLLI2SNX; // PLLI2S multiplication factor for VCO
};

// RCC: Reset and clock control

struct stm32f412_rcc_t
{
    volatile uint32_t CR; // clock control register
    volatile uint32_t PLLCFGR; // PLL configuration register
    volatile uint32_t CFGR; // clock configuration register
    volatile uint32_t CIR; // clock interrupt register
    volatile uint32_t AHB1RSTR; // AHB1 peripheral reset register
    volatile uint32_t AHB2RSTR; // AHB2 peripheral reset register
    volatile uint32_t AHB3RSTR; // AHB3 peripheral reset register
    reserved_t<0x1> _0x1c;
    volatile uint32_t APB1RSTR; // APB1 peripheral reset register
    volatile uint32_t APB2RSTR; // APB2 peripheral reset register
    reserved_t<0x2> _0x28;
    volatile uint32_t AHB1ENR; // AHB1 peripheral clock register
    volatile uint32_t AHB2ENR; // AHB2 peripheral clock enable register
    volatile uint32_t AHB3ENR; // AHB3 peripheral clock enable register
    reserved_t<0x1> _0x3c;
    volatile uint32_t APB1ENR; // APB1 peripheral clock enable register
    volatile uint32_t APB2ENR; // APB2 peripheral clock enable register
    reserved_t<0x2> _0x48;
    volatile uint32_t AHB1LPENR; // AHB1 peripheral clock enable in low power mode register
    volatile uint32_t AHB2LPENR; // AHB2 peripheral clock enable in low power mode register
    volatile uint32_t AHB3LPENR; // AHB3 peripheral clock enable in low power mode register
    reserved_t<0x1> _0x5c;
    volatile uint32_t APB1LPENR; // APB1 peripheral clock enable in low power mode register
    volatile uint32_t APB2LPENR; // APB2 peripheral clock enabled in low power mode register
    reserved_t<0x2> _0x68;
    volatile uint32_t BDCR; // Backup domain control register
    volatile uint32_t CSR; // clock control &amp; status register
    reserved_t<0x2> _0x78;
    volatile uint32_t SSCGR; // spread spectrum clock generation register
    volatile uint32_t PLLI2SCFGR; // PLLI2S configuration register
    reserved_t<0x1> _0x88;
    volatile uint32_t DCKCFGR; // Dedicated Clocks Configuration Register
    volatile uint32_t CKGATENR; // clocks gated enable register
    volatile uint32_t DCKCFGR2; // Dedicated Clocks Configuration Register

    static constexpr uint32_t CR_RESET_VALUE = 0x83; // Reset value
    static constexpr uint32_t CR_PLLI2SRDY = 0x8000000; // PLLI2S clock ready flag
    static constexpr uint32_t CR_PLLI2SON = 0x4000000; // PLLI2S enable
    static constexpr uint32_t CR_PLLRDY = 0x2000000; // Main PLL (PLL) clock ready flag
    static constexpr uint32_t CR_PLLON = 0x1000000; // Main PLL (PLL) enable
    static constexpr uint32_t CR_CSSON = 0x80000; // Clock security system enable
    static constexpr uint32_t CR_HSEBYP = 0x40000; // HSE clock bypass
    static constexpr uint32_t CR_HSERDY = 0x20000; // HSE clock ready flag
    static constexpr uint32_t CR_HSEON = 0x10000; // HSE clock enable
    typedef bit_field_t<8, 0xff> CR_HSICAL; // Internal high-speed clock calibration
    typedef bit_field_t<3, 0x1f> CR_HSITRIM; // Internal high-speed clock trimming
    static constexpr uint32_t CR_HSIRDY = 0x2; // Internal high-speed clock ready flag
    static constexpr uint32_t CR_HSION = 0x1; // Internal high-speed clock enable

    static constexpr uint32_t PLLCFGR_RESET_VALUE = 0x24003010; // Reset value
    typedef bit_field_t<0, 0x3f> PLLCFGR_PLLM; // Division factor for the main PLL (PLL) input clock
    typedef bit_field_t<6, 0x1ff> PLLCFGR_PLLN; // Main PLL (PLL) multiplication factor for VCO
    typedef bit_field_t<16, 0x3> PLLCFGR_PLLP; // Main PLL (PLL) division factor for main system clock
    static constexpr uint32_t PLLCFGR_PLLSRC = 0x400000; // Main PLL(PLL) and audio PLL (PLLI2S) entry clock source
    typedef bit_field_t<24, 0xf> PLLCFGR_PLLQ; // Main PLL (PLL) division factor for USB OTG FS, SDIO and random number generator clocks
    typedef bit_field_t<28, 0x7> PLLCFGR_PLLR; // Main PLL (PLL) division factor for I2S, DFSDM clocks

    static constexpr uint32_t CFGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> CFGR_SW; // System clock switch
    typedef bit_field_t<2, 0x3> CFGR_SWS; // System clock switch status
    typedef bit_field_t<4, 0xf> CFGR_HPRE; // AHB prescaler
    typedef bit_field_t<10, 0x7> CFGR_PPRE1; // APB Low speed prescaler (APB1)
    typedef bit_field_t<13, 0x7> CFGR_PPRE2; // APB high-speed prescaler (APB2)
    typedef bit_field_t<16, 0x1f> CFGR_RTCPRE; // HSE division factor for RTC clock
    typedef bit_field_t<21, 0x3> CFGR_MCO1SEL; // Microcontroller clock output 1
    typedef bit_field_t<24, 0x7> CFGR_MCO1PRE; // MCO1 prescaler
    typedef bit_field_t<27, 0x7> CFGR_MCO2PRE; // MCO2 prescaler
    typedef bit_field_t<30, 0x3> CFGR_MCO2SEL; // Microcontroller clock output 2

    static constexpr uint32_t CIR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CIR_CSSC = 0x800000; // Clock security system interrupt clear
    static constexpr uint32_t CIR_PLLI2SRDYC = 0x200000; // PLLI2S ready interrupt clear
    static constexpr uint32_t CIR_PLLRDYC = 0x100000; // Main PLL(PLL) ready interrupt clear
    static constexpr uint32_t CIR_HSERDYC = 0x80000; // HSE ready interrupt clear
    static constexpr uint32_t CIR_HSIRDYC = 0x40000; // HSI ready interrupt clear
    static constexpr uint32_t CIR_LSERDYC = 0x20000; // LSE ready interrupt clear
    static constexpr uint32_t CIR_LSIRDYC = 0x10000; // LSI ready interrupt clear
    static constexpr uint32_t CIR_PLLI2SRDYIE = 0x2000; // PLLI2S ready interrupt enable
    static constexpr uint32_t CIR_PLLRDYIE = 0x1000; // Main PLL (PLL) ready interrupt enable
    static constexpr uint32_t CIR_HSERDYIE = 0x800; // HSE ready interrupt enable
    static constexpr uint32_t CIR_HSIRDYIE = 0x400; // HSI ready interrupt enable
    static constexpr uint32_t CIR_LSERDYIE = 0x200; // LSE ready interrupt enable
    static constexpr uint32_t CIR_LSIRDYIE = 0x100; // LSI ready interrupt enable
    static constexpr uint32_t CIR_CSSF = 0x80; // Clock security system interrupt flag
    static constexpr uint32_t CIR_PLLI2SRDYF = 0x20; // PLLI2S ready interrupt flag
    static constexpr uint32_t CIR_PLLRDYF = 0x10; // Main PLL (PLL) ready interrupt flag
    static constexpr uint32_t CIR_HSERDYF = 0x8; // HSE ready interrupt flag
    static constexpr uint32_t CIR_HSIRDYF = 0x4; // HSI ready interrupt flag
    static constexpr uint32_t CIR_LSERDYF = 0x2; // LSE ready interrupt flag
    static constexpr uint32_t CIR_LSIRDYF = 0x1; // LSI ready interrupt flag

    static constexpr uint32_t AHB1RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB1RSTR_GPIOARST = 0x1; // IO port A reset
    static constexpr uint32_t AHB1RSTR_GPIOBRST = 0x2; // IO port B reset
    static constexpr uint32_t AHB1RSTR_GPIOCRST = 0x4; // IO port C reset
    static constexpr uint32_t AHB1RSTR_GPIODRST = 0x8; // IO port D reset
    static constexpr uint32_t AHB1RSTR_GPIOERST = 0x10; // IO port E reset
    static constexpr uint32_t AHB1RSTR_GPIOFRST = 0x20; // IO port F reset
    static constexpr uint32_t AHB1RSTR_GPIOGRST = 0x40; // IO port G reset
    static constexpr uint32_t AHB1RSTR_GPIOHRST = 0x80; // IO port H reset
    static constexpr uint32_t AHB1RSTR_CRCRST = 0x1000; // CRC reset
    static constexpr uint32_t AHB1RSTR_DMA1RST = 0x200000; // DMA2 reset
    static constexpr uint32_t AHB1RSTR_DMA2RST = 0x400000; // DMA2 reset

    static constexpr uint32_t AHB2RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB2RSTR_OTGFSRST = 0x80; // USB OTG FS module reset
    static constexpr uint32_t AHB2RSTR_RNGRST = 0x40; // RNGRST

    static constexpr uint32_t AHB3RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB3RSTR_FSMCRST = 0x1; // Flexible memory controller module reset
    static constexpr uint32_t AHB3RSTR_QSPIRST = 0x2; // QUADSPI module reset


    static constexpr uint32_t APB1RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1RSTR_TIM2RST = 0x1; // TIM2 reset
    static constexpr uint32_t APB1RSTR_TIM3RST = 0x2; // TIM3 reset
    static constexpr uint32_t APB1RSTR_TIM4RST = 0x4; // TIM4 reset
    static constexpr uint32_t APB1RSTR_TIM5RST = 0x8; // TIM5 reset
    static constexpr uint32_t APB1RSTR_TIM6RST = 0x10; // TIM6RST
    static constexpr uint32_t APB1RSTR_TIM7RST = 0x20; // TIM7RST
    static constexpr uint32_t APB1RSTR_TIM12RST = 0x40; // TIM12RST
    static constexpr uint32_t APB1RSTR_TIM13RST = 0x80; // TIM13RST
    static constexpr uint32_t APB1RSTR_TIM14RST = 0x100; // TIM14RST
    static constexpr uint32_t APB1RSTR_WWDGRST = 0x800; // Window watchdog reset
    static constexpr uint32_t APB1RSTR_SPI2RST = 0x4000; // SPI 2 reset
    static constexpr uint32_t APB1RSTR_SPI3RST = 0x8000; // SPI 3 reset
    static constexpr uint32_t APB1RSTR_UART2RST = 0x20000; // USART 2 reset
    static constexpr uint32_t APB1RSTR_USART3RST = 0x40000; // USART3RST
    static constexpr uint32_t APB1RSTR_I2C1RST = 0x200000; // I2C 1 reset
    static constexpr uint32_t APB1RSTR_I2C2RST = 0x400000; // I2C 2 reset
    static constexpr uint32_t APB1RSTR_I2C3RST = 0x800000; // I2C3 reset
    static constexpr uint32_t APB1RSTR_I2C4RST = 0x1000000; // I2C4RST
    static constexpr uint32_t APB1RSTR_CAN1RST = 0x2000000; // CAN1RST
    static constexpr uint32_t APB1RSTR_CAN2RST = 0x4000000; // CAN2RST
    static constexpr uint32_t APB1RSTR_PWRRST = 0x10000000; // Power interface reset

    static constexpr uint32_t APB2RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2RSTR_TIM1RST = 0x1; // TIM1 reset
    static constexpr uint32_t APB2RSTR_TIM8RST = 0x2; // TIM8RST
    static constexpr uint32_t APB2RSTR_USART1RST = 0x10; // USART1 reset
    static constexpr uint32_t APB2RSTR_USART6RST = 0x20; // USART6 reset
    static constexpr uint32_t APB2RSTR_ADCRST = 0x100; // ADC interface reset (common to all ADCs)
    static constexpr uint32_t APB2RSTR_SDIORST = 0x800; // SDIO reset
    static constexpr uint32_t APB2RSTR_SPI1RST = 0x1000; // SPI 1 reset
    static constexpr uint32_t APB2RSTR_SPI4RST = 0x2000; // SPI 4 reset
    static constexpr uint32_t APB2RSTR_SYSCFGRST = 0x4000; // System configuration controller reset
    static constexpr uint32_t APB2RSTR_TIM9RST = 0x10000; // TIM9 reset
    static constexpr uint32_t APB2RSTR_TIM10RST = 0x20000; // TIM10 reset
    static constexpr uint32_t APB2RSTR_TIM11RST = 0x40000; // TIM11 reset
    static constexpr uint32_t APB2RSTR_SPI5RST = 0x100000; // SPI5RST
    static constexpr uint32_t APB2RSTR_DFSDMRST = 0x1000000; // DFSDMRST


    static constexpr uint32_t AHB1ENR_RESET_VALUE = 0x100000; // Reset value
    static constexpr uint32_t AHB1ENR_GPIOAEN = 0x1; // IO port A clock enable
    static constexpr uint32_t AHB1ENR_GPIOBEN = 0x2; // IO port B clock enable
    static constexpr uint32_t AHB1ENR_GPIOCEN = 0x4; // IO port C clock enable
    static constexpr uint32_t AHB1ENR_GPIODEN = 0x8; // IO port D clock enable
    static constexpr uint32_t AHB1ENR_GPIOEEN = 0x10; // IO port E clock enable
    static constexpr uint32_t AHB1ENR_GPIOFEN = 0x20; // IO port F clock enable
    static constexpr uint32_t AHB1ENR_GPIOGEN = 0x40; // IO port G clock enable
    static constexpr uint32_t AHB1ENR_GPIOHEN = 0x80; // IO port H clock enable
    static constexpr uint32_t AHB1ENR_CRCEN = 0x1000; // CRC clock enable
    static constexpr uint32_t AHB1ENR_DMA1EN = 0x200000; // DMA1 clock enable
    static constexpr uint32_t AHB1ENR_DMA2EN = 0x400000; // DMA2 clock enable

    static constexpr uint32_t AHB2ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB2ENR_OTGFSEN = 0x80; // USB OTG FS clock enable
    static constexpr uint32_t AHB2ENR_RNGEN = 0x40; // RNGEN

    static constexpr uint32_t AHB3ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB3ENR_FSMCEN = 0x1; // Flexible memory controller module clock enable
    static constexpr uint32_t AHB3ENR_QSPIEN = 0x2; // QUADSPI memory controller module clock enable


    static constexpr uint32_t APB1ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1ENR_TIM2EN = 0x1; // TIM2 clock enable
    static constexpr uint32_t APB1ENR_TIM3EN = 0x2; // TIM3 clock enable
    static constexpr uint32_t APB1ENR_TIM4EN = 0x4; // TIM4 clock enable
    static constexpr uint32_t APB1ENR_TIM5EN = 0x8; // TIM5 clock enable
    static constexpr uint32_t APB1ENR_TIM6EN = 0x10; // TIM6EN
    static constexpr uint32_t APB1ENR_TIM7EN = 0x20; // TIM7EN
    static constexpr uint32_t APB1ENR_TIM12EN = 0x40; // TIM12EN
    static constexpr uint32_t APB1ENR_TIM13EN = 0x80; // TIM13EN
    static constexpr uint32_t APB1ENR_TIM14EN = 0x100; // TIM14EN
    static constexpr uint32_t APB1ENR_RTCAPB = 0x400; // clock enable
    static constexpr uint32_t APB1ENR_WWDGEN = 0x800; // Window watchdog clock enable
    static constexpr uint32_t APB1ENR_SPI2EN = 0x4000; // SPI2 clock enable
    static constexpr uint32_t APB1ENR_SPI3EN = 0x8000; // SPI3 clock enable
    static constexpr uint32_t APB1ENR_USART2EN = 0x20000; // USART 2 clock enable
    static constexpr uint32_t APB1ENR_USART3EN = 0x40000; // USART3EN
    static constexpr uint32_t APB1ENR_I2C1EN = 0x200000; // I2C1 clock enable
    static constexpr uint32_t APB1ENR_I2C2EN = 0x400000; // I2C2 clock enable
    static constexpr uint32_t APB1ENR_I2C3EN = 0x800000; // I2C3 clock enable
    static constexpr uint32_t APB1ENR_I2C4EN = 0x1000000; // I2C4EN
    static constexpr uint32_t APB1ENR_CAN1EN = 0x2000000; // CAN1EN
    static constexpr uint32_t APB1ENR_CAN2EN = 0x4000000; // CAN2EN
    static constexpr uint32_t APB1ENR_PWREN = 0x10000000; // Power interface clock enable

    static constexpr uint32_t APB2ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2ENR_TIM1EN = 0x1; // TIM1 clock enable
    static constexpr uint32_t APB2ENR_TIM8EN = 0x2; // TIM8EN
    static constexpr uint32_t APB2ENR_USART1EN = 0x10; // USART1 clock enable
    static constexpr uint32_t APB2ENR_USART6EN = 0x20; // USART6 clock enable
    static constexpr uint32_t APB2ENR_ADC1EN = 0x100; // ADC1 clock enable
    static constexpr uint32_t APB2ENR_SDIOEN = 0x800; // SDIO clock enable
    static constexpr uint32_t APB2ENR_SPI1EN = 0x1000; // SPI1 clock enable
    static constexpr uint32_t APB2ENR_SPI4EN = 0x2000; // SPI4 clock enable
    static constexpr uint32_t APB2ENR_SYSCFGEN = 0x4000; // System configuration controller clock enable
    static constexpr uint32_t APB2ENR_TIM9EN = 0x10000; // TIM9 clock enable
    static constexpr uint32_t APB2ENR_TIM10EN = 0x20000; // TIM10 clock enable
    static constexpr uint32_t APB2ENR_TIM11EN = 0x40000; // TIM11 clock enable
    static constexpr uint32_t APB2ENR_SPI5EN = 0x100000; // SPI5 clock enable
    static constexpr uint32_t APB2ENR_DFSDMEN = 0x1000000; // DFSDMEN


    static constexpr uint32_t AHB1LPENR_RESET_VALUE = 0x7e6791ff; // Reset value
    static constexpr uint32_t AHB1LPENR_GPIOALPEN = 0x1; // IO port A clock enable during sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOBLPEN = 0x2; // IO port B clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOCLPEN = 0x4; // IO port C clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_GPIODLPEN = 0x8; // IO port D clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOELPEN = 0x10; // IO port E clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOFLPEN = 0x20; // IO port F clock enable during sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOGLPEN = 0x40; // IO port G clock enable during sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOHLPEN = 0x80; // IO port H clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_CRCLPEN = 0x1000; // CRC clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_FLITFLPEN = 0x8000; // Flash interface clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_SRAM1LPEN = 0x10000; // SRAM 1interface clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_DMA1LPEN = 0x200000; // DMA1 clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_DMA2LPEN = 0x400000; // DMA2 clock enable during Sleep mode

    static constexpr uint32_t AHB2LPENR_RESET_VALUE = 0xf1; // Reset value
    static constexpr uint32_t AHB2LPENR_OTGFSLPEN = 0x80; // USB OTG FS clock enable during Sleep mode
    static constexpr uint32_t AHB2LPENR_RNGLPEN = 0x40; // RNGLPEN

    static constexpr uint32_t AHB3LPENR_RESET_VALUE = 0x3; // Reset value
    static constexpr uint32_t AHB3LPENR_FSMCLPEN = 0x1; // Flexible memory controller module clock enable during Sleep mode
    static constexpr uint32_t AHB3LPENR_QSPILPEN = 0x2; // QUADSPI memory controller module clock enable during Sleep mode


    static constexpr uint32_t APB1LPENR_RESET_VALUE = 0x36fec9ff; // Reset value
    static constexpr uint32_t APB1LPENR_TIM2LPEN = 0x1; // TIM2 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM3LPEN = 0x2; // TIM3 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM4LPEN = 0x4; // TIM4 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM5LPEN = 0x8; // TIM5 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM6LPEN = 0x10; // TIM6LPEN
    static constexpr uint32_t APB1LPENR_TIM7LPEN = 0x20; // TIM7LPEN
    static constexpr uint32_t APB1LPENR_TIM12LPEN = 0x40; // TIM12LPEN
    static constexpr uint32_t APB1LPENR_TIM13LPEN = 0x80; // TIM13LPEN
    static constexpr uint32_t APB1LPENR_TIM14LPEN = 0x100; // TIM14LPEN
    static constexpr uint32_t APB1LPENR_RTCAPBLPEN = 0x400; // : RTC APB clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_WWDGLPEN = 0x800; // Window watchdog clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_SPI2LPEN = 0x4000; // SPI2 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_SPI3LPEN = 0x8000; // SPI3 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_USART2LPEN = 0x20000; // USART2 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_USART3LPEN = 0x40000; // USART3LPEN
    static constexpr uint32_t APB1LPENR_I2C1LPEN = 0x200000; // I2C1 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_I2C2LPEN = 0x400000; // I2C2 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_I2C3LPEN = 0x800000; // I2C3 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_I2C4LPEN = 0x1000000; // I2C4LPEN
    static constexpr uint32_t APB1LPENR_CAN1LPEN = 0x2000000; // CAN1LPEN
    static constexpr uint32_t APB1LPENR_CAN2LPEN = 0x4000000; // CAN2LPEN
    static constexpr uint32_t APB1LPENR_PWRLPEN = 0x10000000; // Power interface clock enable during Sleep mode

    static constexpr uint32_t APB2LPENR_RESET_VALUE = 0x75f33; // Reset value
    static constexpr uint32_t APB2LPENR_TIM1LPEN = 0x1; // TIM1 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_TIM8LPEN = 0x2; // TIM8LPEN
    static constexpr uint32_t APB2LPENR_USART1LPEN = 0x10; // USART1 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_USART6LPEN = 0x20; // USART6 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_ADC1LPEN = 0x100; // ADC1 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_SDIOLPEN = 0x800; // SDIO clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_SPI1LPEN = 0x1000; // SPI 1 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_SPI4LPEN = 0x2000; // SPI4 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_SYSCFGLPEN = 0x4000; // System configuration controller clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_EXTITEN = 0x8000; // EXTIT APB and SYSCTRL PFREE clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_TIM9LPEN = 0x10000; // TIM9 clock enable during sleep mode
    static constexpr uint32_t APB2LPENR_TIM10LPEN = 0x20000; // TIM10 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_TIM11LPEN = 0x40000; // TIM11 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_SPI5LPEN = 0x100000; // SPI5 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_DFSDMLPEN = 0x1000000; // DFSDMLPEN


    static constexpr uint32_t BDCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BDCR_BDRST = 0x10000; // Backup domain software reset
    static constexpr uint32_t BDCR_RTCEN = 0x8000; // RTC clock enable
    static constexpr uint32_t BDCR_RTCSEL1 = 0x200; // RTC clock source selection
    static constexpr uint32_t BDCR_RTCSEL0 = 0x100; // RTC clock source selection
    static constexpr uint32_t BDCR_LSEMOD = 0x8; // External low-speed oscillator bypass
    static constexpr uint32_t BDCR_LSEBYP = 0x4; // External low-speed oscillator bypass
    static constexpr uint32_t BDCR_LSERDY = 0x2; // External low-speed oscillator ready
    static constexpr uint32_t BDCR_LSEON = 0x1; // External low-speed oscillator enable

    static constexpr uint32_t CSR_RESET_VALUE = 0xe000000; // Reset value
    static constexpr uint32_t CSR_LPWRRSTF = 0x80000000; // Low-power reset flag
    static constexpr uint32_t CSR_WWDGRSTF = 0x40000000; // Window watchdog reset flag
    static constexpr uint32_t CSR_WDGRSTF = 0x20000000; // Independent watchdog reset flag
    static constexpr uint32_t CSR_SFTRSTF = 0x10000000; // Software reset flag
    static constexpr uint32_t CSR_PORRSTF = 0x8000000; // POR/PDR reset flag
    static constexpr uint32_t CSR_PADRSTF = 0x4000000; // PIN reset flag
    static constexpr uint32_t CSR_BORRSTF = 0x2000000; // BOR reset flag
    static constexpr uint32_t CSR_RMVF = 0x1000000; // Remove reset flag
    static constexpr uint32_t CSR_LSIRDY = 0x2; // Internal low-speed oscillator ready
    static constexpr uint32_t CSR_LSION = 0x1; // Internal low-speed oscillator enable


    static constexpr uint32_t SSCGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SSCGR_SSCGEN = 0x80000000; // Spread spectrum modulation enable
    static constexpr uint32_t SSCGR_SPREADSEL = 0x40000000; // Spread Select
    typedef bit_field_t<13, 0x7fff> SSCGR_INCSTEP; // Incrementation step
    typedef bit_field_t<0, 0x1fff> SSCGR_MODPER; // Modulation period

    static constexpr uint32_t PLLI2SCFGR_RESET_VALUE = 0x20003000; // Reset value
    typedef bit_field_t<28, 0x7> PLLI2SCFGR_PLLI2SR; // PLLI2S division factor for I2S clocks
    typedef bit_field_t<24, 0xf> PLLI2SCFGR_PLLI2SQ; // PLLI2S division factor for USB OTG FS/SDIO/RNG clock
    static constexpr uint32_t PLLI2SCFGR_PLLI2SSRC = 0x400000; // PLLI2S entry clock source
    typedef bit_field_t<6, 0x1ff> PLLI2SCFGR_PLLI2SN; // PLLI2S multiplication factor for VCO
    typedef bit_field_t<0, 0x3f> PLLI2SCFGR_PLLI2SM; // Division factor for the main PLL (PLL) and audio PLL (PLLI2S) input clock


    static constexpr uint32_t DCKCFGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DCKCFGR_CKDFSDM1ASEL = 0x8000; // DFSDM1 audio clock selection
    static constexpr uint32_t DCKCFGR_TIMPRE = 0x1000000; // Timers clocks prescalers selection
    typedef bit_field_t<25, 0x3> DCKCFGR_I2S1SRC; // I2S APB1 clocks source selection (I2S2/3)
    typedef bit_field_t<27, 0x3> DCKCFGR_I2S2SRC; // I2S APB2 clocks source selection (I2S1/4/5)
    static constexpr uint32_t DCKCFGR_CKDFSDM1SEL = 0x80000000; // DFSDM1 kernel clock selection

    static constexpr uint32_t CKGATENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CKGATENR_EVTCL_CKEN = 0x80; // EVTCL_CKEN
    static constexpr uint32_t CKGATENR_RCC_CKEN = 0x40; // RCC clock enable
    static constexpr uint32_t CKGATENR_FLITF_CKEN = 0x20; // Flash Interface clock enable
    static constexpr uint32_t CKGATENR_SRAM_CKEN = 0x10; // SRQAM controller clock enable
    static constexpr uint32_t CKGATENR_SPARE_CKEN = 0x8; // Spare clock enable
    static constexpr uint32_t CKGATENR_CM4DBG_CKEN = 0x4; // Cortex M4 ETM clock enable
    static constexpr uint32_t CKGATENR_AHB2APB2_CKEN = 0x2; // AHB to APB2 Bridge clock enable
    static constexpr uint32_t CKGATENR_AHB2APB1_CKEN = 0x1; // AHB to APB1 Bridge clock enable

    static constexpr uint32_t DCKCFGR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<22, 0x3> DCKCFGR2_I2CFMP1SEL; // I2CFMP1 kernel clock source selection
    static constexpr uint32_t DCKCFGR2_CK48MSEL = 0x8000000; // SDIO/USBFS clock selection
    static constexpr uint32_t DCKCFGR2_CKSDIOSEL = 0x10000000; // SDIO clock selection
};

// RCC: Reset and clock control

struct stm32f413_rcc_t
{
    volatile uint32_t CR; // clock control register
    volatile uint32_t PLLCFGR; // PLL configuration register
    volatile uint32_t CFGR; // clock configuration register
    volatile uint32_t CIR; // clock interrupt register
    volatile uint32_t AHB1RSTR; // AHB1 peripheral reset register
    volatile uint32_t AHB2RSTR; // AHB2 peripheral reset register
    volatile uint32_t AHB3RSTR; // peripheral reset register
    reserved_t<0x1> _0x1c;
    volatile uint32_t APB1RSTR; // APB1 peripheral reset register
    volatile uint32_t APB2RSTR; // APB2 peripheral reset register
    reserved_t<0x2> _0x28;
    volatile uint32_t AHB1ENR; // AHB1 peripheral clock register
    volatile uint32_t AHB2ENR; // AHB2 peripheral clock enable register
    volatile uint32_t AHB3ENR; // AHB3 peripheral clock enable register
    reserved_t<0x1> _0x3c;
    volatile uint32_t APB1ENR; // APB1 peripheral clock enable register
    volatile uint32_t APB2ENR; // APB2 peripheral clock enable register
    reserved_t<0x2> _0x48;
    volatile uint32_t AHB1LPENR; // AHB1 peripheral clock enable in low power mode register
    volatile uint32_t AHB2LPENR; // AHB2 peripheral clock enable in low power mode register
    volatile uint32_t AHB3LPENR; // AHB3 peripheral clock enable in low power mode register
    reserved_t<0x1> _0x5c;
    volatile uint32_t APB1LPENR; // APB1 peripheral clock enable in low power mode register
    volatile uint32_t APB2LPENR; // APB2 peripheral clock enabled in low power mode register
    reserved_t<0x2> _0x68;
    volatile uint32_t BDCR; // Backup domain control register
    volatile uint32_t CSR; // clock control &amp; status register
    reserved_t<0x2> _0x78;
    volatile uint32_t SSCGR; // spread spectrum clock generation register
    volatile uint32_t PLLI2SCFGR; // PLLI2S configuration register
    reserved_t<0x1> _0x88;
    volatile uint32_t DCKCFGR; // Dedicated Clocks Configuration Register
    volatile uint32_t CKGATENR; // RCC clocks gated enable register
    volatile uint32_t DCKCFGR2; // Dedicated Clocks Configuration Register

    static constexpr uint32_t CR_RESET_VALUE = 0x83; // Reset value
    static constexpr uint32_t CR_HSION = 0x1; // Internal high-speed clock enable
    static constexpr uint32_t CR_HSIRDY = 0x2; // Internal high-speed clock ready flag
    typedef bit_field_t<3, 0x1f> CR_HSITRIM; // Internal high-speed clock trimming
    typedef bit_field_t<8, 0xff> CR_HSICAL; // Internal high-speed clock calibration
    static constexpr uint32_t CR_HSEON = 0x10000; // HSE clock enable
    static constexpr uint32_t CR_HSERDY = 0x20000; // HSE clock ready flag
    static constexpr uint32_t CR_HSEBYP = 0x40000; // HSE clock bypass
    static constexpr uint32_t CR_CSSON = 0x80000; // Clock security system enable
    static constexpr uint32_t CR_PLLON = 0x1000000; // Main PLL (PLL) enable
    static constexpr uint32_t CR_PLLRDY = 0x2000000; // Main PLL (PLL) clock ready flag
    static constexpr uint32_t CR_PLLI2SON = 0x4000000; // PLLI2S enable
    static constexpr uint32_t CR_PLLI2SRDY = 0x8000000; // PLLI2S clock ready flag

    static constexpr uint32_t PLLCFGR_RESET_VALUE = 0x24003010; // Reset value
    typedef bit_field_t<0, 0x3f> PLLCFGR_PLLM; // Division factor for the main PLL (PLL) and audio PLL (PLLI2S) input clock
    typedef bit_field_t<6, 0x1ff> PLLCFGR_PLLN; // Main PLL (PLL) multiplication factor for VCO
    typedef bit_field_t<16, 0x3> PLLCFGR_PLLP; // Main PLL (PLL) division factor for main system clock
    static constexpr uint32_t PLLCFGR_PLLSRC = 0x400000; // Main PLL(PLL) and audio PLL (PLLI2S) entry clock source
    typedef bit_field_t<24, 0xf> PLLCFGR_PLLQ; // Main PLL (PLL) division factor for USB OTG FS, SDIO and random number generator clocks
    typedef bit_field_t<28, 0x7> PLLCFGR_PLLR; // Main PLL (PLL) division factor for I2S, DFSDM clocks

    static constexpr uint32_t CFGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> CFGR_SW; // System clock switch
    typedef bit_field_t<2, 0x3> CFGR_SWS; // System clock switch status
    typedef bit_field_t<4, 0xf> CFGR_HPRE; // AHB prescaler
    typedef bit_field_t<10, 0x7> CFGR_PPRE1; // APB Low speed prescaler (APB1)
    typedef bit_field_t<13, 0x7> CFGR_PPRE2; // APB high-speed prescaler (APB2)
    typedef bit_field_t<16, 0x1f> CFGR_RTCPRE; // HSE division factor for RTC clock
    typedef bit_field_t<21, 0x3> CFGR_MCO1SEL; // Microcontroller clock output 1
    typedef bit_field_t<24, 0x7> CFGR_MCO1PRE; // MCO1 prescaler
    typedef bit_field_t<27, 0x7> CFGR_MCO2PRE; // MCO2 prescaler
    typedef bit_field_t<30, 0x3> CFGR_MCO2SEL; // Microcontroller clock output 2

    static constexpr uint32_t CIR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CIR_CSSC = 0x800000; // Clock security system interrupt clear
    static constexpr uint32_t CIR_PLLI2SRDYC = 0x200000; // PLLI2S ready interrupt clear
    static constexpr uint32_t CIR_PLLRDYC = 0x100000; // Main PLL(PLL) ready interrupt clear
    static constexpr uint32_t CIR_HSERDYC = 0x80000; // HSE ready interrupt clear
    static constexpr uint32_t CIR_HSIRDYC = 0x40000; // HSI ready interrupt clear
    static constexpr uint32_t CIR_LSERDYC = 0x20000; // LSE ready interrupt clear
    static constexpr uint32_t CIR_LSIRDYC = 0x10000; // LSI ready interrupt clear
    static constexpr uint32_t CIR_PLLI2SRDYIE = 0x2000; // PLLI2S ready interrupt enable
    static constexpr uint32_t CIR_PLLRDYIE = 0x1000; // Main PLL (PLL) ready interrupt enable
    static constexpr uint32_t CIR_HSERDYIE = 0x800; // HSE ready interrupt enable
    static constexpr uint32_t CIR_HSIRDYIE = 0x400; // HSI ready interrupt enable
    static constexpr uint32_t CIR_LSERDYIE = 0x200; // LSE ready interrupt enable
    static constexpr uint32_t CIR_LSIRDYIE = 0x100; // LSI ready interrupt enable
    static constexpr uint32_t CIR_CSSF = 0x80; // Clock security system interrupt flag
    static constexpr uint32_t CIR_PLLI2SRDYF = 0x20; // PLLI2S ready interrupt flag
    static constexpr uint32_t CIR_PLLRDYF = 0x10; // Main PLL (PLL) ready interrupt flag
    static constexpr uint32_t CIR_HSERDYF = 0x8; // HSE ready interrupt flag
    static constexpr uint32_t CIR_HSIRDYF = 0x4; // HSI ready interrupt flag
    static constexpr uint32_t CIR_LSERDYF = 0x2; // LSE ready interrupt flag
    static constexpr uint32_t CIR_LSIRDYF = 0x1; // LSI ready interrupt flag

    static constexpr uint32_t AHB1RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB1RSTR_GPIOARST = 0x1; // IO port A reset
    static constexpr uint32_t AHB1RSTR_GPIOBRST = 0x2; // IO port B reset
    static constexpr uint32_t AHB1RSTR_GPIOCRST = 0x4; // IO port C reset
    static constexpr uint32_t AHB1RSTR_GPIODRST = 0x8; // IO port D reset
    static constexpr uint32_t AHB1RSTR_GPIOERST = 0x10; // IO port E reset
    static constexpr uint32_t AHB1RSTR_GPIOFRST = 0x20; // IO port F reset
    static constexpr uint32_t AHB1RSTR_GPIOGRST = 0x40; // IO port G reset
    static constexpr uint32_t AHB1RSTR_GPIOHRST = 0x80; // IO port H reset
    static constexpr uint32_t AHB1RSTR_CRCRST = 0x1000; // CRC reset
    static constexpr uint32_t AHB1RSTR_DMA1RST = 0x200000; // DMA2 reset
    static constexpr uint32_t AHB1RSTR_DMA2RST = 0x400000; // DMA2 reset

    static constexpr uint32_t AHB2RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB2RSTR_OTGFSRST = 0x80; // USB OTG FS module reset
    static constexpr uint32_t AHB2RSTR_RNGRST = 0x40; // RNGRST
    static constexpr uint32_t AHB2RSTR_CRYPRST = 0x10; // CRYP module reset

    static constexpr uint32_t AHB3RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB3RSTR_FSMCRST = 0x1; // Flexible memory controller module reset
    static constexpr uint32_t AHB3RSTR_QSPIRST = 0x2; // QUADSPI module reset


    static constexpr uint32_t APB1RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1RSTR_TIM2RST = 0x1; // TIM2 reset
    static constexpr uint32_t APB1RSTR_TIM3RST = 0x2; // TIM3 reset
    static constexpr uint32_t APB1RSTR_TIM4RST = 0x4; // TIM4 reset
    static constexpr uint32_t APB1RSTR_TIM5RST = 0x8; // TIM5 reset
    static constexpr uint32_t APB1RSTR_TIM6RST = 0x10; // TIM6RST
    static constexpr uint32_t APB1RSTR_TIM7RST = 0x20; // TIM7RST
    static constexpr uint32_t APB1RSTR_TIM12RST = 0x40; // TIM12RST
    static constexpr uint32_t APB1RSTR_TIM13RST = 0x80; // TIM13RST
    static constexpr uint32_t APB1RSTR_TIM14RST = 0x100; // TIM14RST
    static constexpr uint32_t APB1RSTR_WWDGRST = 0x800; // Window watchdog reset
    static constexpr uint32_t APB1RSTR_SPI2RST = 0x4000; // SPI 2 reset
    static constexpr uint32_t APB1RSTR_SPI3RST = 0x8000; // SPI 3 reset
    static constexpr uint32_t APB1RSTR_UART2RST = 0x20000; // USART 2 reset
    static constexpr uint32_t APB1RSTR_USART3RST = 0x40000; // USART3RST
    static constexpr uint32_t APB1RSTR_I2C1RST = 0x200000; // I2C 1 reset
    static constexpr uint32_t APB1RSTR_I2C2RST = 0x400000; // I2C 2 reset
    static constexpr uint32_t APB1RSTR_I2C3RST = 0x800000; // I2C3 reset
    static constexpr uint32_t APB1RSTR_I2C4RST = 0x1000000; // I2C4RST
    static constexpr uint32_t APB1RSTR_CAN1RST = 0x2000000; // CAN1RST
    static constexpr uint32_t APB1RSTR_CAN2RST = 0x4000000; // CAN2RST
    static constexpr uint32_t APB1RSTR_PWRRST = 0x10000000; // Power interface reset
    static constexpr uint32_t APB1RSTR_LPTIMER1RST = 0x200; // LPTimer1 reset
    static constexpr uint32_t APB1RSTR_USART4RST = 0x80000; // USART4 reset
    static constexpr uint32_t APB1RSTR_USART5RST = 0x100000; // USART5 reset
    static constexpr uint32_t APB1RSTR_CAN3RST = 0x8000000; // CAN 3 reset
    static constexpr uint32_t APB1RSTR_DACRST = 0x20000000; // DAC reset
    static constexpr uint32_t APB1RSTR_UART7RST = 0x40000000; // UART 7 reset
    static constexpr uint32_t APB1RSTR_UART8RST = 0x80000000; // UART 8 reset

    static constexpr uint32_t APB2RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2RSTR_TIM1RST = 0x1; // TIM1 reset
    static constexpr uint32_t APB2RSTR_TIM8RST = 0x2; // TIM8RST
    static constexpr uint32_t APB2RSTR_USART1RST = 0x10; // USART1 reset
    static constexpr uint32_t APB2RSTR_USART6RST = 0x20; // USART6 reset
    static constexpr uint32_t APB2RSTR_ADCRST = 0x100; // ADC interface reset (common to all ADCs)
    static constexpr uint32_t APB2RSTR_SDIORST = 0x800; // SDIO reset
    static constexpr uint32_t APB2RSTR_SPI1RST = 0x1000; // SPI 1 reset
    static constexpr uint32_t APB2RSTR_SYSCFGRST = 0x4000; // System configuration controller reset
    static constexpr uint32_t APB2RSTR_TIM9RST = 0x10000; // TIM9 reset
    static constexpr uint32_t APB2RSTR_TIM10RST = 0x20000; // TIM10 reset
    static constexpr uint32_t APB2RSTR_TIM11RST = 0x40000; // TIM11 reset
    static constexpr uint32_t APB2RSTR_DFSDMRST = 0x1000000; // DFSDMRST
    static constexpr uint32_t APB2RSTR_USART9RST = 0x40; // USART9 reset
    static constexpr uint32_t APB2RSTR_SART10RST = 0x80; // USART10 reset
    static constexpr uint32_t APB2RSTR_SPI4RST = 0x2000; // SPI4 reset
    static constexpr uint32_t APB2RSTR_SPI5RST = 0x100000; // SPI5RST
    static constexpr uint32_t APB2RSTR_SAI1RST = 0x400000; // SAI1 reset
    static constexpr uint32_t APB2RSTR_DFSDM2RST = 0x2000000; // DFSDM2 reset


    static constexpr uint32_t AHB1ENR_RESET_VALUE = 0x100000; // Reset value
    static constexpr uint32_t AHB1ENR_GPIOAEN = 0x1; // IO port A clock enable
    static constexpr uint32_t AHB1ENR_GPIOBEN = 0x2; // IO port B clock enable
    static constexpr uint32_t AHB1ENR_GPIOCEN = 0x4; // IO port C clock enable
    static constexpr uint32_t AHB1ENR_GPIODEN = 0x8; // IO port D clock enable
    static constexpr uint32_t AHB1ENR_GPIOEEN = 0x10; // IO port E clock enable
    static constexpr uint32_t AHB1ENR_GPIOFEN = 0x20; // IO port F clock enable
    static constexpr uint32_t AHB1ENR_GPIOGEN = 0x40; // IO port G clock enable
    static constexpr uint32_t AHB1ENR_GPIOHEN = 0x80; // IO port H clock enable
    static constexpr uint32_t AHB1ENR_CRCEN = 0x1000; // CRC clock enable
    static constexpr uint32_t AHB1ENR_DMA1EN = 0x200000; // DMA1 clock enable
    static constexpr uint32_t AHB1ENR_DMA2EN = 0x400000; // DMA2 clock enable

    static constexpr uint32_t AHB2ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB2ENR_OTGFSEN = 0x80; // USB OTG FS clock enable
    static constexpr uint32_t AHB2ENR_RNGEN = 0x40; // RNGEN
    static constexpr uint32_t AHB2ENR_CRYPEN = 0x10; // CRYP clock enable

    static constexpr uint32_t AHB3ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB3ENR_FSMCEN = 0x1; // Flexible memory controller module clock enable
    static constexpr uint32_t AHB3ENR_QSPIEN = 0x2; // QUADSPI memory controller module clock enable


    static constexpr uint32_t APB1ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1ENR_TIM2EN = 0x1; // TIM2 clock enable
    static constexpr uint32_t APB1ENR_TIM3EN = 0x2; // TIM3 clock enable
    static constexpr uint32_t APB1ENR_TIM4EN = 0x4; // TIM4 clock enable
    static constexpr uint32_t APB1ENR_TIM5EN = 0x8; // TIM5 clock enable
    static constexpr uint32_t APB1ENR_TIM6EN = 0x10; // TIM6EN
    static constexpr uint32_t APB1ENR_TIM7EN = 0x20; // TIM7EN
    static constexpr uint32_t APB1ENR_TIM12EN = 0x40; // TIM12EN
    static constexpr uint32_t APB1ENR_TIM13EN = 0x80; // TIM13EN
    static constexpr uint32_t APB1ENR_TIM14EN = 0x100; // TIM14EN
    static constexpr uint32_t APB1ENR_WWDGEN = 0x800; // Window watchdog clock enable
    static constexpr uint32_t APB1ENR_SPI2EN = 0x4000; // SPI2 clock enable
    static constexpr uint32_t APB1ENR_SPI3EN = 0x8000; // SPI3 clock enable
    static constexpr uint32_t APB1ENR_USART2EN = 0x20000; // USART 2 clock enable
    static constexpr uint32_t APB1ENR_USART3EN = 0x40000; // USART3EN
    static constexpr uint32_t APB1ENR_I2C1EN = 0x200000; // I2C1 clock enable
    static constexpr uint32_t APB1ENR_I2C2EN = 0x400000; // I2C2 clock enable
    static constexpr uint32_t APB1ENR_I2C3EN = 0x800000; // I2C3 clock enable
    static constexpr uint32_t APB1ENR_I2C4EN = 0x1000000; // I2C4EN
    static constexpr uint32_t APB1ENR_CAN1EN = 0x2000000; // CAN1EN
    static constexpr uint32_t APB1ENR_CAN2EN = 0x4000000; // CAN2EN
    static constexpr uint32_t APB1ENR_PWREN = 0x10000000; // Power interface clock enable
    static constexpr uint32_t APB1ENR_LPTIMER1EN = 0x200; // LPTimer 1 clock enable
    static constexpr uint32_t APB1ENR_RTCAPB = 0x400; // clock enable
    static constexpr uint32_t APB1ENR_UART4EN = 0x80000; // UART 4 clock enable
    static constexpr uint32_t APB1ENR_UART5EN = 0x100000; // UART 5 clock enable
    static constexpr uint32_t APB1ENR_CAN3EN = 0x8000000; // CAN 3 clock enable
    static constexpr uint32_t APB1ENR_DACEN = 0x20000000; // DAC clock enable
    static constexpr uint32_t APB1ENR_UART7EN = 0x40000000; // UART7 clock enable
    static constexpr uint32_t APB1ENR_UART8EN = 0x80000000; // UART8 clock enable

    static constexpr uint32_t APB2ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2ENR_TIM1EN = 0x1; // TIM1 clock enable
    static constexpr uint32_t APB2ENR_TIM8EN = 0x2; // TIM8EN
    static constexpr uint32_t APB2ENR_USART1EN = 0x10; // USART1 clock enable
    static constexpr uint32_t APB2ENR_USART6EN = 0x20; // USART6 clock enable
    static constexpr uint32_t APB2ENR_ADC1EN = 0x100; // ADC1 clock enable
    static constexpr uint32_t APB2ENR_SDIOEN = 0x800; // SDIO clock enable
    static constexpr uint32_t APB2ENR_SPI1EN = 0x1000; // SPI1 clock enable
    static constexpr uint32_t APB2ENR_SPI4EN = 0x2000; // SPI4 clock enable
    static constexpr uint32_t APB2ENR_SYSCFGEN = 0x4000; // System configuration controller clock enable
    static constexpr uint32_t APB2ENR_TIM9EN = 0x10000; // TIM9 clock enable
    static constexpr uint32_t APB2ENR_TIM10EN = 0x20000; // TIM10 clock enable
    static constexpr uint32_t APB2ENR_TIM11EN = 0x40000; // TIM11 clock enable
    static constexpr uint32_t APB2ENR_DFSDMEN = 0x1000000; // DFSDMEN
    static constexpr uint32_t APB2ENR_SPI5EN = 0x100000; // SPI5 clock enable
    static constexpr uint32_t APB2ENR_SAI1EN = 0x400000; // SAI 1 clock enable
    static constexpr uint32_t APB2ENR_DFSDM2EN = 0x2000000; // DFSDM2 clock enable


    static constexpr uint32_t AHB1LPENR_RESET_VALUE = 0x7e6791ff; // Reset value
    static constexpr uint32_t AHB1LPENR_GPIOALPEN = 0x1; // IO port A clock enable during sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOBLPEN = 0x2; // IO port B clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOCLPEN = 0x4; // IO port C clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_GPIODLPEN = 0x8; // IO port D clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOELPEN = 0x10; // IO port E clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOFLPEN = 0x20; // IO port F clock enable during sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOGLPEN = 0x40; // IO port G clock enable during sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOHLPEN = 0x80; // IO port H clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_CRCLPEN = 0x1000; // CRC clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_FLITFLPEN = 0x8000; // Flash interface clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_SRAM1LPEN = 0x10000; // SRAM 1interface clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_DMA1LPEN = 0x200000; // DMA1 clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_DMA2LPEN = 0x400000; // DMA2 clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_SRAM2LPEN = 0x20000; // SRAM2interface clock enable during Sleep mode

    static constexpr uint32_t AHB2LPENR_RESET_VALUE = 0xf1; // Reset value
    static constexpr uint32_t AHB2LPENR_OTGFSLPEN = 0x80; // USB OTG FS clock enable during Sleep mode
    static constexpr uint32_t AHB2LPENR_RNGLPEN = 0x40; // RNGLPEN
    static constexpr uint32_t AHB2LPENR_FSMCLPEN = 0x1; // Flexible memory controller module clock enable during Sleep mode
    static constexpr uint32_t AHB2LPENR_QSPILPEN = 0x2; // QUADSPI memory controller module clock enable during Sleep mode

    static constexpr uint32_t AHB3LPENR_RESET_VALUE = 0x3; // Reset value
    static constexpr uint32_t AHB3LPENR_FSMCLPEN = 0x1; // Flexible memory controller module clock enable during Sleep mode
    static constexpr uint32_t AHB3LPENR_QSPILPEN = 0x2; // QUADSPI memory controller module clock enable during Sleep mode


    static constexpr uint32_t APB1LPENR_RESET_VALUE = 0x36fec9ff; // Reset value
    static constexpr uint32_t APB1LPENR_TIM2LPEN = 0x1; // TIM2 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM3LPEN = 0x2; // TIM3 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM4LPEN = 0x4; // TIM4 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM5LPEN = 0x8; // TIM5 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM6LPEN = 0x10; // TIM6LPEN
    static constexpr uint32_t APB1LPENR_TIM7LPEN = 0x20; // TIM7LPEN
    static constexpr uint32_t APB1LPENR_TIM12LPEN = 0x40; // TIM12LPEN
    static constexpr uint32_t APB1LPENR_TIM13LPEN = 0x80; // TIM13LPEN
    static constexpr uint32_t APB1LPENR_TIM14LPEN = 0x100; // TIM14LPEN
    static constexpr uint32_t APB1LPENR_WWDGLPEN = 0x800; // Window watchdog clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_SPI2LPEN = 0x4000; // SPI2 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_SPI3LPEN = 0x8000; // SPI3 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_USART2LPEN = 0x20000; // USART2 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_USART3LPEN = 0x40000; // USART3LPEN
    static constexpr uint32_t APB1LPENR_I2C1LPEN = 0x200000; // I2C1 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_I2C2LPEN = 0x400000; // I2C2 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_I2C3LPEN = 0x800000; // I2C3 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_I2C4LPEN = 0x1000000; // I2C4LPEN
    static constexpr uint32_t APB1LPENR_CAN1LPEN = 0x2000000; // CAN1LPEN
    static constexpr uint32_t APB1LPENR_CAN2LPEN = 0x4000000; // CAN2LPEN
    static constexpr uint32_t APB1LPENR_PWRLPEN = 0x10000000; // Power interface clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_LPTIMER1LPEN = 0x200; // TIM14 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_RTCAPBEN = 0x400; // RTC APB clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_USART4LPEN = 0x80000; // USART4 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_USART5LPEN = 0x100000; // USART5 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_CAN3LPEN = 0x8000000; // CAN3 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_DACLPEN = 0x20000000; // DAC clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_UART7LPEN = 0x40000000; // UART7 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_UART8LPEN = 0x80000000; // UART8 clock enable during Sleep mode

    static constexpr uint32_t APB2LPENR_RESET_VALUE = 0x75f33; // Reset value
    static constexpr uint32_t APB2LPENR_TIM1LPEN = 0x1; // TIM1 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_TIM8LPEN = 0x2; // TIM8LPEN
    static constexpr uint32_t APB2LPENR_USART1LPEN = 0x10; // USART1 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_USART6LPEN = 0x20; // USART6 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_ADC1LPEN = 0x100; // ADC1 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_SDIOLPEN = 0x800; // SDIO clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_SPI1LPEN = 0x1000; // SPI 1 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_SPI4LPEN = 0x2000; // SPI4 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_SYSCFGLPEN = 0x4000; // System configuration controller clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_TIM9LPEN = 0x10000; // TIM9 clock enable during sleep mode
    static constexpr uint32_t APB2LPENR_TIM10LPEN = 0x20000; // TIM10 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_TIM11LPEN = 0x40000; // TIM11 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_DFSDMLPEN = 0x1000000; // DFSDMLPEN
    static constexpr uint32_t APB2LPENR_USART9LPEN = 0x40; // USART9 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_USART10LPEN = 0x80; // USART10 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_EXTITEN = 0x8000; // EXTIT APB and SYSCTRL PFREE clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_SPI5LPEN = 0x100000; // SPI5 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_SAI1LPEN = 0x400000; // SAI1 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_DFSDM2LPEN = 0x2000000; // DFSDM2 clock enable during Sleep mode


    static constexpr uint32_t BDCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BDCR_BDRST = 0x10000; // Backup domain software reset
    static constexpr uint32_t BDCR_RTCEN = 0x8000; // RTC clock enable
    static constexpr uint32_t BDCR_RTCSEL1 = 0x200; // RTC clock source selection
    static constexpr uint32_t BDCR_RTCSEL0 = 0x100; // RTC clock source selection
    static constexpr uint32_t BDCR_LSEBYP = 0x4; // External low-speed oscillator bypass
    static constexpr uint32_t BDCR_LSERDY = 0x2; // External low-speed oscillator ready
    static constexpr uint32_t BDCR_LSEON = 0x1; // External low-speed oscillator enable
    static constexpr uint32_t BDCR_LSEMOD = 0x8; // External low-speed oscillator bypass

    static constexpr uint32_t CSR_RESET_VALUE = 0xe000000; // Reset value
    static constexpr uint32_t CSR_LPWRRSTF = 0x80000000; // Low-power reset flag
    static constexpr uint32_t CSR_WWDGRSTF = 0x40000000; // Window watchdog reset flag
    static constexpr uint32_t CSR_WDGRSTF = 0x20000000; // Independent watchdog reset flag
    static constexpr uint32_t CSR_SFTRSTF = 0x10000000; // Software reset flag
    static constexpr uint32_t CSR_PORRSTF = 0x8000000; // POR/PDR reset flag
    static constexpr uint32_t CSR_PADRSTF = 0x4000000; // PIN reset flag
    static constexpr uint32_t CSR_BORRSTF = 0x2000000; // BOR reset flag
    static constexpr uint32_t CSR_RMVF = 0x1000000; // Remove reset flag
    static constexpr uint32_t CSR_LSIRDY = 0x2; // Internal low-speed oscillator ready
    static constexpr uint32_t CSR_LSION = 0x1; // Internal low-speed oscillator enable


    static constexpr uint32_t SSCGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SSCGR_SSCGEN = 0x80000000; // Spread spectrum modulation enable
    static constexpr uint32_t SSCGR_SPREADSEL = 0x40000000; // Spread Select
    typedef bit_field_t<13, 0x7fff> SSCGR_INCSTEP; // Incrementation step
    typedef bit_field_t<0, 0x1fff> SSCGR_MODPER; // Modulation period

    static constexpr uint32_t PLLI2SCFGR_RESET_VALUE = 0x20003000; // Reset value
    typedef bit_field_t<28, 0x7> PLLI2SCFGR_PLLI2SR; // PLLI2S division factor for I2S clocks
    typedef bit_field_t<6, 0x1ff> PLLI2SCFGR_PLLI2SN; // PLLI2S multiplication factor for VCO
    typedef bit_field_t<0, 0x3f> PLLI2SCFGR_PLLI2SM; // Division factor for the main PLL (PLL) and audio PLL (PLLI2S) input clock
    static constexpr uint32_t PLLI2SCFGR_PLLI2SSRC = 0x400000; // PLLI2S entry clock source
    typedef bit_field_t<24, 0xf> PLLI2SCFGR_PLLI2SQ; // PLLI2S division factor for USB OTG FS/SDIO/RNG clock


    static constexpr uint32_t DCKCFGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DCKCFGR_CKDFSDM1ASEL = 0x8000; // DFSDM1 audio clock selection.
    static constexpr uint32_t DCKCFGR_TIMPRE = 0x1000000; // Timers clocks prescalers selection
    typedef bit_field_t<25, 0x3> DCKCFGR_I2S1SRC; // I2S APB1 clocks source selection (I2S2/3)
    typedef bit_field_t<27, 0x3> DCKCFGR_I2S2SRC; // I2S APB2 clocks source selection (I2S1/4/5)
    typedef bit_field_t<30, 0x3> DCKCFGR_LPTIMER1SEL; // LPTIMER1 kernel clock selection.

    static constexpr uint32_t CKGATENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CKGATENR_AHB2APB1_CKEN = 0x1; // AHB to APB1 Bridge clock enable
    static constexpr uint32_t CKGATENR_AHB2APB2_CKEN = 0x2; // AHB to APB2 Bridge clock enable
    static constexpr uint32_t CKGATENR_CM4DBG_CKEN = 0x4; // Cortex M4 ETM clock enable
    static constexpr uint32_t CKGATENR_SPARE_CKEN = 0x8; // Spare clock enable
    static constexpr uint32_t CKGATENR_SRAM_CKEN = 0x10; // SRQAM controller clock enable
    static constexpr uint32_t CKGATENR_FLITF_CKEN = 0x20; // Flash Interface clock enable
    static constexpr uint32_t CKGATENR_RCC_CKEN = 0x40; // RCC clock enable
    static constexpr uint32_t CKGATENR_EVTCL_CKEN = 0x80; // EVTCL_CKEN

    static constexpr uint32_t DCKCFGR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DCKCFGR2_CKSDIOSEL = 0x10000000; // SDIO clock selection.
    static constexpr uint32_t DCKCFGR2_CK48MSEL = 0x8000000; // SDIO/USBFS clock selection.
    static constexpr uint32_t DCKCFGR2_I2CFMP1SEL = 0x400000; // I2CFMP1 kernel clock source selection
};

// RCC: Reset and clock control

struct stm32f427_rcc_t
{
    volatile uint32_t CR; // clock control register
    volatile uint32_t PLLCFGR; // PLL configuration register
    volatile uint32_t CFGR; // clock configuration register
    volatile uint32_t CIR; // clock interrupt register
    volatile uint32_t AHB1RSTR; // AHB1 peripheral reset register
    volatile uint32_t AHB2RSTR; // AHB2 peripheral reset register
    volatile uint32_t AHB3RSTR; // AHB3 peripheral reset register
    reserved_t<0x1> _0x1c;
    volatile uint32_t APB1RSTR; // APB1 peripheral reset register
    volatile uint32_t APB2RSTR; // APB2 peripheral reset register
    reserved_t<0x2> _0x28;
    volatile uint32_t AHB1ENR; // AHB1 peripheral clock register
    volatile uint32_t AHB2ENR; // AHB2 peripheral clock enable register
    volatile uint32_t AHB3ENR; // AHB3 peripheral clock enable register
    reserved_t<0x1> _0x3c;
    volatile uint32_t APB1ENR; // APB1 peripheral clock enable register
    volatile uint32_t APB2ENR; // APB2 peripheral clock enable register
    reserved_t<0x2> _0x48;
    volatile uint32_t AHB1LPENR; // AHB1 peripheral clock enable in low power mode register
    volatile uint32_t AHB2LPENR; // AHB2 peripheral clock enable in low power mode register
    volatile uint32_t AHB3LPENR; // AHB3 peripheral clock enable in low power mode register
    reserved_t<0x1> _0x5c;
    volatile uint32_t APB1LPENR; // APB1 peripheral clock enable in low power mode register
    volatile uint32_t APB2LPENR; // APB2 peripheral clock enabled in low power mode register
    reserved_t<0x2> _0x68;
    volatile uint32_t BDCR; // Backup domain control register
    volatile uint32_t CSR; // clock control &amp; status register
    reserved_t<0x2> _0x78;
    volatile uint32_t SSCGR; // spread spectrum clock generation register
    volatile uint32_t PLLI2SCFGR; // PLLI2S configuration register

    static constexpr uint32_t CR_RESET_VALUE = 0x83; // Reset value
    static constexpr uint32_t CR_PLLI2SRDY = 0x8000000; // PLLI2S clock ready flag
    static constexpr uint32_t CR_PLLI2SON = 0x4000000; // PLLI2S enable
    static constexpr uint32_t CR_PLLRDY = 0x2000000; // Main PLL (PLL) clock ready flag
    static constexpr uint32_t CR_PLLON = 0x1000000; // Main PLL (PLL) enable
    static constexpr uint32_t CR_CSSON = 0x80000; // Clock security system enable
    static constexpr uint32_t CR_HSEBYP = 0x40000; // HSE clock bypass
    static constexpr uint32_t CR_HSERDY = 0x20000; // HSE clock ready flag
    static constexpr uint32_t CR_HSEON = 0x10000; // HSE clock enable
    typedef bit_field_t<8, 0xff> CR_HSICAL; // Internal high-speed clock calibration
    typedef bit_field_t<3, 0x1f> CR_HSITRIM; // Internal high-speed clock trimming
    static constexpr uint32_t CR_HSIRDY = 0x2; // Internal high-speed clock ready flag
    static constexpr uint32_t CR_HSION = 0x1; // Internal high-speed clock enable

    static constexpr uint32_t PLLCFGR_RESET_VALUE = 0x24003010; // Reset value
    typedef bit_field_t<0, 0x3f> PLLCFGR_PLLM; // Division factor for the main PLL (PLL) and audio PLL (PLLI2S) input clock
    typedef bit_field_t<6, 0x1ff> PLLCFGR_PLLN; // Main PLL (PLL) multiplication factor for VCO
    typedef bit_field_t<16, 0x3> PLLCFGR_PLLP; // Main PLL (PLL) division factor for main system clock
    static constexpr uint32_t PLLCFGR_PLLSRC = 0x400000; // Main PLL(PLL) and audio PLL (PLLI2S) entry clock source
    typedef bit_field_t<24, 0xf> PLLCFGR_PLLQ; // Main PLL (PLL) division factor for USB OTG FS, SDIO and random number generator clocks

    static constexpr uint32_t CFGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> CFGR_SW; // System clock switch
    typedef bit_field_t<2, 0x3> CFGR_SWS; // System clock switch status
    typedef bit_field_t<4, 0xf> CFGR_HPRE; // AHB prescaler
    typedef bit_field_t<10, 0x7> CFGR_PPRE1; // APB Low speed prescaler (APB1)
    typedef bit_field_t<13, 0x7> CFGR_PPRE2; // APB high-speed prescaler (APB2)
    typedef bit_field_t<16, 0x1f> CFGR_RTCPRE; // HSE division factor for RTC clock
    typedef bit_field_t<21, 0x3> CFGR_MCO1SEL; // Microcontroller clock output 1
    static constexpr uint32_t CFGR_I2SSRC = 0x800000; // I2S clock selection
    typedef bit_field_t<24, 0x7> CFGR_MCO1PRE; // MCO1 prescaler
    typedef bit_field_t<27, 0x7> CFGR_MCO2PRE; // MCO2 prescaler
    typedef bit_field_t<30, 0x3> CFGR_MCO2SEL; // Microcontroller clock output 2

    static constexpr uint32_t CIR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CIR_CSSC = 0x800000; // Clock security system interrupt clear
    static constexpr uint32_t CIR_PLLI2SRDYC = 0x200000; // PLLI2S ready interrupt clear
    static constexpr uint32_t CIR_PLLRDYC = 0x100000; // Main PLL(PLL) ready interrupt clear
    static constexpr uint32_t CIR_HSERDYC = 0x80000; // HSE ready interrupt clear
    static constexpr uint32_t CIR_HSIRDYC = 0x40000; // HSI ready interrupt clear
    static constexpr uint32_t CIR_LSERDYC = 0x20000; // LSE ready interrupt clear
    static constexpr uint32_t CIR_LSIRDYC = 0x10000; // LSI ready interrupt clear
    static constexpr uint32_t CIR_PLLI2SRDYIE = 0x2000; // PLLI2S ready interrupt enable
    static constexpr uint32_t CIR_PLLRDYIE = 0x1000; // Main PLL (PLL) ready interrupt enable
    static constexpr uint32_t CIR_HSERDYIE = 0x800; // HSE ready interrupt enable
    static constexpr uint32_t CIR_HSIRDYIE = 0x400; // HSI ready interrupt enable
    static constexpr uint32_t CIR_LSERDYIE = 0x200; // LSE ready interrupt enable
    static constexpr uint32_t CIR_LSIRDYIE = 0x100; // LSI ready interrupt enable
    static constexpr uint32_t CIR_CSSF = 0x80; // Clock security system interrupt flag
    static constexpr uint32_t CIR_PLLI2SRDYF = 0x20; // PLLI2S ready interrupt flag
    static constexpr uint32_t CIR_PLLRDYF = 0x10; // Main PLL (PLL) ready interrupt flag
    static constexpr uint32_t CIR_HSERDYF = 0x8; // HSE ready interrupt flag
    static constexpr uint32_t CIR_HSIRDYF = 0x4; // HSI ready interrupt flag
    static constexpr uint32_t CIR_LSERDYF = 0x2; // LSE ready interrupt flag
    static constexpr uint32_t CIR_LSIRDYF = 0x1; // LSI ready interrupt flag

    static constexpr uint32_t AHB1RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB1RSTR_OTGHSRST = 0x20000000; // USB OTG HS module reset
    static constexpr uint32_t AHB1RSTR_ETHMACRST = 0x2000000; // Ethernet MAC reset
    static constexpr uint32_t AHB1RSTR_DMA2RST = 0x400000; // DMA2 reset
    static constexpr uint32_t AHB1RSTR_DMA1RST = 0x200000; // DMA2 reset
    static constexpr uint32_t AHB1RSTR_CRCRST = 0x1000; // CRC reset
    static constexpr uint32_t AHB1RSTR_GPIOIRST = 0x100; // IO port I reset
    static constexpr uint32_t AHB1RSTR_GPIOHRST = 0x80; // IO port H reset
    static constexpr uint32_t AHB1RSTR_GPIOGRST = 0x40; // IO port G reset
    static constexpr uint32_t AHB1RSTR_GPIOFRST = 0x20; // IO port F reset
    static constexpr uint32_t AHB1RSTR_GPIOERST = 0x10; // IO port E reset
    static constexpr uint32_t AHB1RSTR_GPIODRST = 0x8; // IO port D reset
    static constexpr uint32_t AHB1RSTR_GPIOCRST = 0x4; // IO port C reset
    static constexpr uint32_t AHB1RSTR_GPIOBRST = 0x2; // IO port B reset
    static constexpr uint32_t AHB1RSTR_GPIOARST = 0x1; // IO port A reset

    static constexpr uint32_t AHB2RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB2RSTR_OTGFSRST = 0x80; // USB OTG FS module reset
    static constexpr uint32_t AHB2RSTR_RNGRST = 0x40; // Random number generator module reset
    static constexpr uint32_t AHB2RSTR_HSAHRST = 0x20; // Hash module reset
    static constexpr uint32_t AHB2RSTR_CRYPRST = 0x10; // Cryptographic module reset
    static constexpr uint32_t AHB2RSTR_DCMIRST = 0x1; // Camera interface reset

    static constexpr uint32_t AHB3RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB3RSTR_FMCRST = 0x1; // Flexible static memory controller module reset


    static constexpr uint32_t APB1RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1RSTR_TIM2RST = 0x1; // TIM2 reset
    static constexpr uint32_t APB1RSTR_TIM3RST = 0x2; // TIM3 reset
    static constexpr uint32_t APB1RSTR_TIM4RST = 0x4; // TIM4 reset
    static constexpr uint32_t APB1RSTR_TIM5RST = 0x8; // TIM5 reset
    static constexpr uint32_t APB1RSTR_TIM6RST = 0x10; // TIM6 reset
    static constexpr uint32_t APB1RSTR_TIM7RST = 0x20; // TIM7 reset
    static constexpr uint32_t APB1RSTR_TIM12RST = 0x40; // TIM12 reset
    static constexpr uint32_t APB1RSTR_TIM13RST = 0x80; // TIM13 reset
    static constexpr uint32_t APB1RSTR_TIM14RST = 0x100; // TIM14 reset
    static constexpr uint32_t APB1RSTR_WWDGRST = 0x800; // Window watchdog reset
    static constexpr uint32_t APB1RSTR_SPI2RST = 0x4000; // SPI 2 reset
    static constexpr uint32_t APB1RSTR_SPI3RST = 0x8000; // SPI 3 reset
    static constexpr uint32_t APB1RSTR_UART2RST = 0x20000; // USART 2 reset
    static constexpr uint32_t APB1RSTR_UART3RST = 0x40000; // USART 3 reset
    static constexpr uint32_t APB1RSTR_UART4RST = 0x80000; // USART 4 reset
    static constexpr uint32_t APB1RSTR_UART5RST = 0x100000; // USART 5 reset
    static constexpr uint32_t APB1RSTR_I2C1RST = 0x200000; // I2C 1 reset
    static constexpr uint32_t APB1RSTR_I2C2RST = 0x400000; // I2C 2 reset
    static constexpr uint32_t APB1RSTR_I2C3RST = 0x800000; // I2C3 reset
    static constexpr uint32_t APB1RSTR_CAN1RST = 0x2000000; // CAN1 reset
    static constexpr uint32_t APB1RSTR_CAN2RST = 0x4000000; // CAN2 reset
    static constexpr uint32_t APB1RSTR_PWRRST = 0x10000000; // Power interface reset
    static constexpr uint32_t APB1RSTR_DACRST = 0x20000000; // DAC reset
    static constexpr uint32_t APB1RSTR_UART7RST = 0x40000000; // UART7 reset
    static constexpr uint32_t APB1RSTR_UART8RST = 0x80000000; // UART8 reset

    static constexpr uint32_t APB2RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2RSTR_TIM1RST = 0x1; // TIM1 reset
    static constexpr uint32_t APB2RSTR_TIM8RST = 0x2; // TIM8 reset
    static constexpr uint32_t APB2RSTR_USART1RST = 0x10; // USART1 reset
    static constexpr uint32_t APB2RSTR_USART6RST = 0x20; // USART6 reset
    static constexpr uint32_t APB2RSTR_ADCRST = 0x100; // ADC interface reset (common to all ADCs)
    static constexpr uint32_t APB2RSTR_SDIORST = 0x800; // SDIO reset
    static constexpr uint32_t APB2RSTR_SPI1RST = 0x1000; // SPI 1 reset
    static constexpr uint32_t APB2RSTR_SPI4RST = 0x2000; // SPI4 reset
    static constexpr uint32_t APB2RSTR_SYSCFGRST = 0x4000; // System configuration controller reset
    static constexpr uint32_t APB2RSTR_TIM9RST = 0x10000; // TIM9 reset
    static constexpr uint32_t APB2RSTR_TIM10RST = 0x20000; // TIM10 reset
    static constexpr uint32_t APB2RSTR_TIM11RST = 0x40000; // TIM11 reset
    static constexpr uint32_t APB2RSTR_SPI5RST = 0x100000; // SPI5 reset
    static constexpr uint32_t APB2RSTR_SPI6RST = 0x200000; // SPI6 reset


    static constexpr uint32_t AHB1ENR_RESET_VALUE = 0x100000; // Reset value
    static constexpr uint32_t AHB1ENR_OTGHSULPIEN = 0x40000000; // USB OTG HSULPI clock enable
    static constexpr uint32_t AHB1ENR_OTGHSEN = 0x20000000; // USB OTG HS clock enable
    static constexpr uint32_t AHB1ENR_ETHMACPTPEN = 0x10000000; // Ethernet PTP clock enable
    static constexpr uint32_t AHB1ENR_ETHMACRXEN = 0x8000000; // Ethernet Reception clock enable
    static constexpr uint32_t AHB1ENR_ETHMACTXEN = 0x4000000; // Ethernet Transmission clock enable
    static constexpr uint32_t AHB1ENR_ETHMACEN = 0x2000000; // Ethernet MAC clock enable
    static constexpr uint32_t AHB1ENR_DMA2EN = 0x400000; // DMA2 clock enable
    static constexpr uint32_t AHB1ENR_DMA1EN = 0x200000; // DMA1 clock enable
    static constexpr uint32_t AHB1ENR_BKPSRAMEN = 0x40000; // Backup SRAM interface clock enable
    static constexpr uint32_t AHB1ENR_CRCEN = 0x1000; // CRC clock enable
    static constexpr uint32_t AHB1ENR_GPIOIEN = 0x100; // IO port I clock enable
    static constexpr uint32_t AHB1ENR_GPIOHEN = 0x80; // IO port H clock enable
    static constexpr uint32_t AHB1ENR_GPIOGEN = 0x40; // IO port G clock enable
    static constexpr uint32_t AHB1ENR_GPIOFEN = 0x20; // IO port F clock enable
    static constexpr uint32_t AHB1ENR_GPIOEEN = 0x10; // IO port E clock enable
    static constexpr uint32_t AHB1ENR_GPIODEN = 0x8; // IO port D clock enable
    static constexpr uint32_t AHB1ENR_GPIOCEN = 0x4; // IO port C clock enable
    static constexpr uint32_t AHB1ENR_GPIOBEN = 0x2; // IO port B clock enable
    static constexpr uint32_t AHB1ENR_GPIOAEN = 0x1; // IO port A clock enable

    static constexpr uint32_t AHB2ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB2ENR_OTGFSEN = 0x80; // USB OTG FS clock enable
    static constexpr uint32_t AHB2ENR_RNGEN = 0x40; // Random number generator clock enable
    static constexpr uint32_t AHB2ENR_HASHEN = 0x20; // Hash modules clock enable
    static constexpr uint32_t AHB2ENR_CRYPEN = 0x10; // Cryptographic modules clock enable
    static constexpr uint32_t AHB2ENR_DCMIEN = 0x1; // Camera interface enable

    static constexpr uint32_t AHB3ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB3ENR_FMCEN = 0x1; // Flexible static memory controller module clock enable


    static constexpr uint32_t APB1ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1ENR_TIM2EN = 0x1; // TIM2 clock enable
    static constexpr uint32_t APB1ENR_TIM3EN = 0x2; // TIM3 clock enable
    static constexpr uint32_t APB1ENR_TIM4EN = 0x4; // TIM4 clock enable
    static constexpr uint32_t APB1ENR_TIM5EN = 0x8; // TIM5 clock enable
    static constexpr uint32_t APB1ENR_TIM6EN = 0x10; // TIM6 clock enable
    static constexpr uint32_t APB1ENR_TIM7EN = 0x20; // TIM7 clock enable
    static constexpr uint32_t APB1ENR_TIM12EN = 0x40; // TIM12 clock enable
    static constexpr uint32_t APB1ENR_TIM13EN = 0x80; // TIM13 clock enable
    static constexpr uint32_t APB1ENR_TIM14EN = 0x100; // TIM14 clock enable
    static constexpr uint32_t APB1ENR_WWDGEN = 0x800; // Window watchdog clock enable
    static constexpr uint32_t APB1ENR_SPI2EN = 0x4000; // SPI2 clock enable
    static constexpr uint32_t APB1ENR_SPI3EN = 0x8000; // SPI3 clock enable
    static constexpr uint32_t APB1ENR_USART2EN = 0x20000; // USART 2 clock enable
    static constexpr uint32_t APB1ENR_USART3EN = 0x40000; // USART3 clock enable
    static constexpr uint32_t APB1ENR_UART4EN = 0x80000; // UART4 clock enable
    static constexpr uint32_t APB1ENR_UART5EN = 0x100000; // UART5 clock enable
    static constexpr uint32_t APB1ENR_I2C1EN = 0x200000; // I2C1 clock enable
    static constexpr uint32_t APB1ENR_I2C2EN = 0x400000; // I2C2 clock enable
    static constexpr uint32_t APB1ENR_I2C3EN = 0x800000; // I2C3 clock enable
    static constexpr uint32_t APB1ENR_CAN1EN = 0x2000000; // CAN 1 clock enable
    static constexpr uint32_t APB1ENR_CAN2EN = 0x4000000; // CAN 2 clock enable
    static constexpr uint32_t APB1ENR_PWREN = 0x10000000; // Power interface clock enable
    static constexpr uint32_t APB1ENR_DACEN = 0x20000000; // DAC interface clock enable
    static constexpr uint32_t APB1ENR_UART7ENR = 0x40000000; // UART7 clock enable
    static constexpr uint32_t APB1ENR_UART8ENR = 0x80000000; // UART8 clock enable

    static constexpr uint32_t APB2ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2ENR_TIM1EN = 0x1; // TIM1 clock enable
    static constexpr uint32_t APB2ENR_TIM8EN = 0x2; // TIM8 clock enable
    static constexpr uint32_t APB2ENR_USART1EN = 0x10; // USART1 clock enable
    static constexpr uint32_t APB2ENR_USART6EN = 0x20; // USART6 clock enable
    static constexpr uint32_t APB2ENR_ADC1EN = 0x100; // ADC1 clock enable
    static constexpr uint32_t APB2ENR_ADC2EN = 0x200; // ADC2 clock enable
    static constexpr uint32_t APB2ENR_ADC3EN = 0x400; // ADC3 clock enable
    static constexpr uint32_t APB2ENR_SDIOEN = 0x800; // SDIO clock enable
    static constexpr uint32_t APB2ENR_SPI1EN = 0x1000; // SPI1 clock enable
    static constexpr uint32_t APB2ENR_SPI4ENR = 0x2000; // SPI4 clock enable
    static constexpr uint32_t APB2ENR_SYSCFGEN = 0x4000; // System configuration controller clock enable
    static constexpr uint32_t APB2ENR_TIM9EN = 0x10000; // TIM9 clock enable
    static constexpr uint32_t APB2ENR_TIM10EN = 0x20000; // TIM10 clock enable
    static constexpr uint32_t APB2ENR_TIM11EN = 0x40000; // TIM11 clock enable
    static constexpr uint32_t APB2ENR_SPI5ENR = 0x100000; // SPI5 clock enable
    static constexpr uint32_t APB2ENR_SPI6ENR = 0x200000; // SPI6 clock enable


    static constexpr uint32_t AHB1LPENR_RESET_VALUE = 0x7e6791ff; // Reset value
    static constexpr uint32_t AHB1LPENR_GPIOALPEN = 0x1; // IO port A clock enable during sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOBLPEN = 0x2; // IO port B clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOCLPEN = 0x4; // IO port C clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_GPIODLPEN = 0x8; // IO port D clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOELPEN = 0x10; // IO port E clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOFLPEN = 0x20; // IO port F clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOGLPEN = 0x40; // IO port G clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOHLPEN = 0x80; // IO port H clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOILPEN = 0x100; // IO port I clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_CRCLPEN = 0x1000; // CRC clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_FLITFLPEN = 0x8000; // Flash interface clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_SRAM1LPEN = 0x10000; // SRAM 1interface clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_SRAM2LPEN = 0x20000; // SRAM 2 interface clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_BKPSRAMLPEN = 0x40000; // Backup SRAM interface clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_SRAM3LPEN = 0x80000; // SRAM 3 interface clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_DMA1LPEN = 0x200000; // DMA1 clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_DMA2LPEN = 0x400000; // DMA2 clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_ETHMACLPEN = 0x2000000; // Ethernet MAC clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_ETHMACTXLPEN = 0x4000000; // Ethernet transmission clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_ETHMACRXLPEN = 0x8000000; // Ethernet reception clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_ETHMACPTPLPEN = 0x10000000; // Ethernet PTP clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_OTGHSLPEN = 0x20000000; // USB OTG HS clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_OTGHSULPILPEN = 0x40000000; // USB OTG HS ULPI clock enable during Sleep mode

    static constexpr uint32_t AHB2LPENR_RESET_VALUE = 0xf1; // Reset value
    static constexpr uint32_t AHB2LPENR_OTGFSLPEN = 0x80; // USB OTG FS clock enable during Sleep mode
    static constexpr uint32_t AHB2LPENR_RNGLPEN = 0x40; // Random number generator clock enable during Sleep mode
    static constexpr uint32_t AHB2LPENR_HASHLPEN = 0x20; // Hash modules clock enable during Sleep mode
    static constexpr uint32_t AHB2LPENR_CRYPLPEN = 0x10; // Cryptography modules clock enable during Sleep mode
    static constexpr uint32_t AHB2LPENR_DCMILPEN = 0x1; // Camera interface enable during Sleep mode

    static constexpr uint32_t AHB3LPENR_RESET_VALUE = 0x1; // Reset value
    static constexpr uint32_t AHB3LPENR_FMCLPEN = 0x1; // Flexible static memory controller module clock enable during Sleep mode


    static constexpr uint32_t APB1LPENR_RESET_VALUE = 0x36fec9ff; // Reset value
    static constexpr uint32_t APB1LPENR_TIM2LPEN = 0x1; // TIM2 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM3LPEN = 0x2; // TIM3 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM4LPEN = 0x4; // TIM4 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM5LPEN = 0x8; // TIM5 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM6LPEN = 0x10; // TIM6 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM7LPEN = 0x20; // TIM7 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM12LPEN = 0x40; // TIM12 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM13LPEN = 0x80; // TIM13 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM14LPEN = 0x100; // TIM14 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_WWDGLPEN = 0x800; // Window watchdog clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_SPI2LPEN = 0x4000; // SPI2 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_SPI3LPEN = 0x8000; // SPI3 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_USART2LPEN = 0x20000; // USART2 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_USART3LPEN = 0x40000; // USART3 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_UART4LPEN = 0x80000; // UART4 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_UART5LPEN = 0x100000; // UART5 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_I2C1LPEN = 0x200000; // I2C1 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_I2C2LPEN = 0x400000; // I2C2 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_I2C3LPEN = 0x800000; // I2C3 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_CAN1LPEN = 0x2000000; // CAN 1 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_CAN2LPEN = 0x4000000; // CAN 2 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_PWRLPEN = 0x10000000; // Power interface clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_DACLPEN = 0x20000000; // DAC interface clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_UART7LPEN = 0x40000000; // UART7 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_UART8LPEN = 0x80000000; // UART8 clock enable during Sleep mode

    static constexpr uint32_t APB2LPENR_RESET_VALUE = 0x75f33; // Reset value
    static constexpr uint32_t APB2LPENR_TIM1LPEN = 0x1; // TIM1 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_TIM8LPEN = 0x2; // TIM8 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_USART1LPEN = 0x10; // USART1 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_USART6LPEN = 0x20; // USART6 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_ADC1LPEN = 0x100; // ADC1 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_ADC2LPEN = 0x200; // ADC2 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_ADC3LPEN = 0x400; // ADC 3 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_SDIOLPEN = 0x800; // SDIO clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_SPI1LPEN = 0x1000; // SPI 1 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_SPI4LPEN = 0x2000; // SPI 4 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_SYSCFGLPEN = 0x4000; // System configuration controller clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_TIM9LPEN = 0x10000; // TIM9 clock enable during sleep mode
    static constexpr uint32_t APB2LPENR_TIM10LPEN = 0x20000; // TIM10 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_TIM11LPEN = 0x40000; // TIM11 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_SPI5LPEN = 0x100000; // SPI 5 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_SPI6LPEN = 0x200000; // SPI 6 clock enable during Sleep mode


    static constexpr uint32_t BDCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BDCR_BDRST = 0x10000; // Backup domain software reset
    static constexpr uint32_t BDCR_RTCEN = 0x8000; // RTC clock enable
    static constexpr uint32_t BDCR_RTCSEL1 = 0x200; // RTC clock source selection
    static constexpr uint32_t BDCR_RTCSEL0 = 0x100; // RTC clock source selection
    static constexpr uint32_t BDCR_LSEBYP = 0x4; // External low-speed oscillator bypass
    static constexpr uint32_t BDCR_LSERDY = 0x2; // External low-speed oscillator ready
    static constexpr uint32_t BDCR_LSEON = 0x1; // External low-speed oscillator enable

    static constexpr uint32_t CSR_RESET_VALUE = 0xe000000; // Reset value
    static constexpr uint32_t CSR_LPWRRSTF = 0x80000000; // Low-power reset flag
    static constexpr uint32_t CSR_WWDGRSTF = 0x40000000; // Window watchdog reset flag
    static constexpr uint32_t CSR_WDGRSTF = 0x20000000; // Independent watchdog reset flag
    static constexpr uint32_t CSR_SFTRSTF = 0x10000000; // Software reset flag
    static constexpr uint32_t CSR_PORRSTF = 0x8000000; // POR/PDR reset flag
    static constexpr uint32_t CSR_PADRSTF = 0x4000000; // PIN reset flag
    static constexpr uint32_t CSR_BORRSTF = 0x2000000; // BOR reset flag
    static constexpr uint32_t CSR_RMVF = 0x1000000; // Remove reset flag
    static constexpr uint32_t CSR_LSIRDY = 0x2; // Internal low-speed oscillator ready
    static constexpr uint32_t CSR_LSION = 0x1; // Internal low-speed oscillator enable


    static constexpr uint32_t SSCGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SSCGR_SSCGEN = 0x80000000; // Spread spectrum modulation enable
    static constexpr uint32_t SSCGR_SPREADSEL = 0x40000000; // Spread Select
    typedef bit_field_t<13, 0x7fff> SSCGR_INCSTEP; // Incrementation step
    typedef bit_field_t<0, 0x1fff> SSCGR_MODPER; // Modulation period

    static constexpr uint32_t PLLI2SCFGR_RESET_VALUE = 0x20003000; // Reset value
    typedef bit_field_t<28, 0x7> PLLI2SCFGR_PLLI2SRX; // PLLI2S division factor for I2S clocks
    typedef bit_field_t<6, 0x1ff> PLLI2SCFGR_PLLI2SNX; // PLLI2S multiplication factor for VCO
};

// RCC: Reset and clock control

struct stm32f429_rcc_t
{
    volatile uint32_t CR; // clock control register
    volatile uint32_t PLLCFGR; // PLL configuration register
    volatile uint32_t CFGR; // clock configuration register
    volatile uint32_t CIR; // clock interrupt register
    volatile uint32_t AHB1RSTR; // AHB1 peripheral reset register
    volatile uint32_t AHB2RSTR; // AHB2 peripheral reset register
    volatile uint32_t AHB3RSTR; // AHB3 peripheral reset register
    reserved_t<0x1> _0x1c;
    volatile uint32_t APB1RSTR; // APB1 peripheral reset register
    volatile uint32_t APB2RSTR; // APB2 peripheral reset register
    reserved_t<0x2> _0x28;
    volatile uint32_t AHB1ENR; // AHB1 peripheral clock register
    volatile uint32_t AHB2ENR; // AHB2 peripheral clock enable register
    volatile uint32_t AHB3ENR; // AHB3 peripheral clock enable register
    reserved_t<0x1> _0x3c;
    volatile uint32_t APB1ENR; // APB1 peripheral clock enable register
    volatile uint32_t APB2ENR; // APB2 peripheral clock enable register
    reserved_t<0x2> _0x48;
    volatile uint32_t AHB1LPENR; // AHB1 peripheral clock enable in low power mode register
    volatile uint32_t AHB2LPENR; // AHB2 peripheral clock enable in low power mode register
    volatile uint32_t AHB3LPENR; // AHB3 peripheral clock enable in low power mode register
    reserved_t<0x1> _0x5c;
    volatile uint32_t APB1LPENR; // APB1 peripheral clock enable in low power mode register
    volatile uint32_t APB2LPENR; // APB2 peripheral clock enabled in low power mode register
    reserved_t<0x2> _0x68;
    volatile uint32_t BDCR; // Backup domain control register
    volatile uint32_t CSR; // clock control &amp; status register
    reserved_t<0x2> _0x78;
    volatile uint32_t SSCGR; // spread spectrum clock generation register
    volatile uint32_t PLLI2SCFGR; // PLLI2S configuration register
    volatile uint32_t PLLSAICFGR; // RCC PLL configuration register
    volatile uint32_t DCKCFGR; // RCC Dedicated Clock Configuration Register

    static constexpr uint32_t CR_RESET_VALUE = 0x83; // Reset value
    static constexpr uint32_t CR_PLLI2SRDY = 0x8000000; // PLLI2S clock ready flag
    static constexpr uint32_t CR_PLLI2SON = 0x4000000; // PLLI2S enable
    static constexpr uint32_t CR_PLLRDY = 0x2000000; // Main PLL (PLL) clock ready flag
    static constexpr uint32_t CR_PLLON = 0x1000000; // Main PLL (PLL) enable
    static constexpr uint32_t CR_CSSON = 0x80000; // Clock security system enable
    static constexpr uint32_t CR_HSEBYP = 0x40000; // HSE clock bypass
    static constexpr uint32_t CR_HSERDY = 0x20000; // HSE clock ready flag
    static constexpr uint32_t CR_HSEON = 0x10000; // HSE clock enable
    typedef bit_field_t<8, 0xff> CR_HSICAL; // Internal high-speed clock calibration
    typedef bit_field_t<3, 0x1f> CR_HSITRIM; // Internal high-speed clock trimming
    static constexpr uint32_t CR_HSIRDY = 0x2; // Internal high-speed clock ready flag
    static constexpr uint32_t CR_HSION = 0x1; // Internal high-speed clock enable

    static constexpr uint32_t PLLCFGR_RESET_VALUE = 0x24003010; // Reset value
    typedef bit_field_t<0, 0x3f> PLLCFGR_PLLM; // Division factor for the main PLL (PLL) and audio PLL (PLLI2S) input clock
    typedef bit_field_t<6, 0x1ff> PLLCFGR_PLLN; // Main PLL (PLL) multiplication factor for VCO
    typedef bit_field_t<16, 0x3> PLLCFGR_PLLP; // Main PLL (PLL) division factor for main system clock
    static constexpr uint32_t PLLCFGR_PLLSRC = 0x400000; // Main PLL(PLL) and audio PLL (PLLI2S) entry clock source
    typedef bit_field_t<24, 0xf> PLLCFGR_PLLQ; // Main PLL (PLL) division factor for USB OTG FS, SDIO and random number generator clocks

    static constexpr uint32_t CFGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> CFGR_SW; // System clock switch
    typedef bit_field_t<2, 0x3> CFGR_SWS; // System clock switch status
    typedef bit_field_t<4, 0xf> CFGR_HPRE; // AHB prescaler
    typedef bit_field_t<10, 0x7> CFGR_PPRE1; // APB Low speed prescaler (APB1)
    typedef bit_field_t<13, 0x7> CFGR_PPRE2; // APB high-speed prescaler (APB2)
    typedef bit_field_t<16, 0x1f> CFGR_RTCPRE; // HSE division factor for RTC clock
    typedef bit_field_t<21, 0x3> CFGR_MCO1SEL; // Microcontroller clock output 1
    static constexpr uint32_t CFGR_I2SSRC = 0x800000; // I2S clock selection
    typedef bit_field_t<24, 0x7> CFGR_MCO1PRE; // MCO1 prescaler
    typedef bit_field_t<27, 0x7> CFGR_MCO2PRE; // MCO2 prescaler
    typedef bit_field_t<30, 0x3> CFGR_MCO2SEL; // Microcontroller clock output 2

    static constexpr uint32_t CIR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CIR_CSSC = 0x800000; // Clock security system interrupt clear
    static constexpr uint32_t CIR_PLLI2SRDYC = 0x200000; // PLLI2S ready interrupt clear
    static constexpr uint32_t CIR_PLLRDYC = 0x100000; // Main PLL(PLL) ready interrupt clear
    static constexpr uint32_t CIR_HSERDYC = 0x80000; // HSE ready interrupt clear
    static constexpr uint32_t CIR_HSIRDYC = 0x40000; // HSI ready interrupt clear
    static constexpr uint32_t CIR_LSERDYC = 0x20000; // LSE ready interrupt clear
    static constexpr uint32_t CIR_LSIRDYC = 0x10000; // LSI ready interrupt clear
    static constexpr uint32_t CIR_PLLI2SRDYIE = 0x2000; // PLLI2S ready interrupt enable
    static constexpr uint32_t CIR_PLLRDYIE = 0x1000; // Main PLL (PLL) ready interrupt enable
    static constexpr uint32_t CIR_HSERDYIE = 0x800; // HSE ready interrupt enable
    static constexpr uint32_t CIR_HSIRDYIE = 0x400; // HSI ready interrupt enable
    static constexpr uint32_t CIR_LSERDYIE = 0x200; // LSE ready interrupt enable
    static constexpr uint32_t CIR_LSIRDYIE = 0x100; // LSI ready interrupt enable
    static constexpr uint32_t CIR_CSSF = 0x80; // Clock security system interrupt flag
    static constexpr uint32_t CIR_PLLI2SRDYF = 0x20; // PLLI2S ready interrupt flag
    static constexpr uint32_t CIR_PLLRDYF = 0x10; // Main PLL (PLL) ready interrupt flag
    static constexpr uint32_t CIR_HSERDYF = 0x8; // HSE ready interrupt flag
    static constexpr uint32_t CIR_HSIRDYF = 0x4; // HSI ready interrupt flag
    static constexpr uint32_t CIR_LSERDYF = 0x2; // LSE ready interrupt flag
    static constexpr uint32_t CIR_LSIRDYF = 0x1; // LSI ready interrupt flag

    static constexpr uint32_t AHB1RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB1RSTR_OTGHSRST = 0x20000000; // USB OTG HS module reset
    static constexpr uint32_t AHB1RSTR_ETHMACRST = 0x2000000; // Ethernet MAC reset
    static constexpr uint32_t AHB1RSTR_DMA2RST = 0x400000; // DMA2 reset
    static constexpr uint32_t AHB1RSTR_DMA1RST = 0x200000; // DMA2 reset
    static constexpr uint32_t AHB1RSTR_CRCRST = 0x1000; // CRC reset
    static constexpr uint32_t AHB1RSTR_GPIOIRST = 0x100; // IO port I reset
    static constexpr uint32_t AHB1RSTR_GPIOHRST = 0x80; // IO port H reset
    static constexpr uint32_t AHB1RSTR_GPIOGRST = 0x40; // IO port G reset
    static constexpr uint32_t AHB1RSTR_GPIOFRST = 0x20; // IO port F reset
    static constexpr uint32_t AHB1RSTR_GPIOERST = 0x10; // IO port E reset
    static constexpr uint32_t AHB1RSTR_GPIODRST = 0x8; // IO port D reset
    static constexpr uint32_t AHB1RSTR_GPIOCRST = 0x4; // IO port C reset
    static constexpr uint32_t AHB1RSTR_GPIOBRST = 0x2; // IO port B reset
    static constexpr uint32_t AHB1RSTR_GPIOARST = 0x1; // IO port A reset

    static constexpr uint32_t AHB2RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB2RSTR_OTGFSRST = 0x80; // USB OTG FS module reset
    static constexpr uint32_t AHB2RSTR_RNGRST = 0x40; // Random number generator module reset
    static constexpr uint32_t AHB2RSTR_HSAHRST = 0x20; // Hash module reset
    static constexpr uint32_t AHB2RSTR_CRYPRST = 0x10; // Cryptographic module reset
    static constexpr uint32_t AHB2RSTR_DCMIRST = 0x1; // Camera interface reset

    static constexpr uint32_t AHB3RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB3RSTR_FMCRST = 0x1; // Flexible memory controller module reset


    static constexpr uint32_t APB1RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1RSTR_TIM2RST = 0x1; // TIM2 reset
    static constexpr uint32_t APB1RSTR_TIM3RST = 0x2; // TIM3 reset
    static constexpr uint32_t APB1RSTR_TIM4RST = 0x4; // TIM4 reset
    static constexpr uint32_t APB1RSTR_TIM5RST = 0x8; // TIM5 reset
    static constexpr uint32_t APB1RSTR_TIM6RST = 0x10; // TIM6 reset
    static constexpr uint32_t APB1RSTR_TIM7RST = 0x20; // TIM7 reset
    static constexpr uint32_t APB1RSTR_TIM12RST = 0x40; // TIM12 reset
    static constexpr uint32_t APB1RSTR_TIM13RST = 0x80; // TIM13 reset
    static constexpr uint32_t APB1RSTR_TIM14RST = 0x100; // TIM14 reset
    static constexpr uint32_t APB1RSTR_WWDGRST = 0x800; // Window watchdog reset
    static constexpr uint32_t APB1RSTR_SPI2RST = 0x4000; // SPI 2 reset
    static constexpr uint32_t APB1RSTR_SPI3RST = 0x8000; // SPI 3 reset
    static constexpr uint32_t APB1RSTR_UART2RST = 0x20000; // USART 2 reset
    static constexpr uint32_t APB1RSTR_UART3RST = 0x40000; // USART 3 reset
    static constexpr uint32_t APB1RSTR_UART4RST = 0x80000; // USART 4 reset
    static constexpr uint32_t APB1RSTR_UART5RST = 0x100000; // USART 5 reset
    static constexpr uint32_t APB1RSTR_I2C1RST = 0x200000; // I2C 1 reset
    static constexpr uint32_t APB1RSTR_I2C2RST = 0x400000; // I2C 2 reset
    static constexpr uint32_t APB1RSTR_I2C3RST = 0x800000; // I2C3 reset
    static constexpr uint32_t APB1RSTR_CAN1RST = 0x2000000; // CAN1 reset
    static constexpr uint32_t APB1RSTR_CAN2RST = 0x4000000; // CAN2 reset
    static constexpr uint32_t APB1RSTR_PWRRST = 0x10000000; // Power interface reset
    static constexpr uint32_t APB1RSTR_DACRST = 0x20000000; // DAC reset

    static constexpr uint32_t APB2RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2RSTR_TIM1RST = 0x1; // TIM1 reset
    static constexpr uint32_t APB2RSTR_TIM8RST = 0x2; // TIM8 reset
    static constexpr uint32_t APB2RSTR_USART1RST = 0x10; // USART1 reset
    static constexpr uint32_t APB2RSTR_USART6RST = 0x20; // USART6 reset
    static constexpr uint32_t APB2RSTR_ADCRST = 0x100; // ADC interface reset (common to all ADCs)
    static constexpr uint32_t APB2RSTR_SDIORST = 0x800; // SDIO reset
    static constexpr uint32_t APB2RSTR_SPI1RST = 0x1000; // SPI 1 reset
    static constexpr uint32_t APB2RSTR_SYSCFGRST = 0x4000; // System configuration controller reset
    static constexpr uint32_t APB2RSTR_TIM9RST = 0x10000; // TIM9 reset
    static constexpr uint32_t APB2RSTR_TIM10RST = 0x20000; // TIM10 reset
    static constexpr uint32_t APB2RSTR_TIM11RST = 0x40000; // TIM11 reset


    static constexpr uint32_t AHB1ENR_RESET_VALUE = 0x100000; // Reset value
    static constexpr uint32_t AHB1ENR_OTGHSULPIEN = 0x40000000; // USB OTG HSULPI clock enable
    static constexpr uint32_t AHB1ENR_OTGHSEN = 0x20000000; // USB OTG HS clock enable
    static constexpr uint32_t AHB1ENR_ETHMACPTPEN = 0x10000000; // Ethernet PTP clock enable
    static constexpr uint32_t AHB1ENR_ETHMACRXEN = 0x8000000; // Ethernet Reception clock enable
    static constexpr uint32_t AHB1ENR_ETHMACTXEN = 0x4000000; // Ethernet Transmission clock enable
    static constexpr uint32_t AHB1ENR_ETHMACEN = 0x2000000; // Ethernet MAC clock enable
    static constexpr uint32_t AHB1ENR_DMA2EN = 0x400000; // DMA2 clock enable
    static constexpr uint32_t AHB1ENR_DMA1EN = 0x200000; // DMA1 clock enable
    static constexpr uint32_t AHB1ENR_CCMDATARAMEN = 0x100000; // CCM data RAM clock enable
    static constexpr uint32_t AHB1ENR_BKPSRAMEN = 0x40000; // Backup SRAM interface clock enable
    static constexpr uint32_t AHB1ENR_CRCEN = 0x1000; // CRC clock enable
    static constexpr uint32_t AHB1ENR_GPIOIEN = 0x100; // IO port I clock enable
    static constexpr uint32_t AHB1ENR_GPIOHEN = 0x80; // IO port H clock enable
    static constexpr uint32_t AHB1ENR_GPIOGEN = 0x40; // IO port G clock enable
    static constexpr uint32_t AHB1ENR_GPIOFEN = 0x20; // IO port F clock enable
    static constexpr uint32_t AHB1ENR_GPIOEEN = 0x10; // IO port E clock enable
    static constexpr uint32_t AHB1ENR_GPIODEN = 0x8; // IO port D clock enable
    static constexpr uint32_t AHB1ENR_GPIOCEN = 0x4; // IO port C clock enable
    static constexpr uint32_t AHB1ENR_GPIOBEN = 0x2; // IO port B clock enable
    static constexpr uint32_t AHB1ENR_GPIOAEN = 0x1; // IO port A clock enable

    static constexpr uint32_t AHB2ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB2ENR_OTGFSEN = 0x80; // USB OTG FS clock enable
    static constexpr uint32_t AHB2ENR_RNGEN = 0x40; // Random number generator clock enable
    static constexpr uint32_t AHB2ENR_HASHEN = 0x20; // Hash modules clock enable
    static constexpr uint32_t AHB2ENR_CRYPEN = 0x10; // Cryptographic modules clock enable
    static constexpr uint32_t AHB2ENR_DCMIEN = 0x1; // Camera interface enable

    static constexpr uint32_t AHB3ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB3ENR_FMCEN = 0x1; // Flexible memory controller module clock enable


    static constexpr uint32_t APB1ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1ENR_TIM2EN = 0x1; // TIM2 clock enable
    static constexpr uint32_t APB1ENR_TIM3EN = 0x2; // TIM3 clock enable
    static constexpr uint32_t APB1ENR_TIM4EN = 0x4; // TIM4 clock enable
    static constexpr uint32_t APB1ENR_TIM5EN = 0x8; // TIM5 clock enable
    static constexpr uint32_t APB1ENR_TIM6EN = 0x10; // TIM6 clock enable
    static constexpr uint32_t APB1ENR_TIM7EN = 0x20; // TIM7 clock enable
    static constexpr uint32_t APB1ENR_TIM12EN = 0x40; // TIM12 clock enable
    static constexpr uint32_t APB1ENR_TIM13EN = 0x80; // TIM13 clock enable
    static constexpr uint32_t APB1ENR_TIM14EN = 0x100; // TIM14 clock enable
    static constexpr uint32_t APB1ENR_WWDGEN = 0x800; // Window watchdog clock enable
    static constexpr uint32_t APB1ENR_SPI2EN = 0x4000; // SPI2 clock enable
    static constexpr uint32_t APB1ENR_SPI3EN = 0x8000; // SPI3 clock enable
    static constexpr uint32_t APB1ENR_USART2EN = 0x20000; // USART 2 clock enable
    static constexpr uint32_t APB1ENR_USART3EN = 0x40000; // USART3 clock enable
    static constexpr uint32_t APB1ENR_UART4EN = 0x80000; // UART4 clock enable
    static constexpr uint32_t APB1ENR_UART5EN = 0x100000; // UART5 clock enable
    static constexpr uint32_t APB1ENR_I2C1EN = 0x200000; // I2C1 clock enable
    static constexpr uint32_t APB1ENR_I2C2EN = 0x400000; // I2C2 clock enable
    static constexpr uint32_t APB1ENR_I2C3EN = 0x800000; // I2C3 clock enable
    static constexpr uint32_t APB1ENR_CAN1EN = 0x2000000; // CAN 1 clock enable
    static constexpr uint32_t APB1ENR_CAN2EN = 0x4000000; // CAN 2 clock enable
    static constexpr uint32_t APB1ENR_PWREN = 0x10000000; // Power interface clock enable
    static constexpr uint32_t APB1ENR_DACEN = 0x20000000; // DAC interface clock enable

    static constexpr uint32_t APB2ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2ENR_TIM1EN = 0x1; // TIM1 clock enable
    static constexpr uint32_t APB2ENR_TIM8EN = 0x2; // TIM8 clock enable
    static constexpr uint32_t APB2ENR_USART1EN = 0x10; // USART1 clock enable
    static constexpr uint32_t APB2ENR_USART6EN = 0x20; // USART6 clock enable
    static constexpr uint32_t APB2ENR_ADC1EN = 0x100; // ADC1 clock enable
    static constexpr uint32_t APB2ENR_ADC2EN = 0x200; // ADC2 clock enable
    static constexpr uint32_t APB2ENR_ADC3EN = 0x400; // ADC3 clock enable
    static constexpr uint32_t APB2ENR_SDIOEN = 0x800; // SDIO clock enable
    static constexpr uint32_t APB2ENR_SPI1EN = 0x1000; // SPI1 clock enable
    static constexpr uint32_t APB2ENR_SYSCFGEN = 0x4000; // System configuration controller clock enable
    static constexpr uint32_t APB2ENR_TIM9EN = 0x10000; // TIM9 clock enable
    static constexpr uint32_t APB2ENR_TIM10EN = 0x20000; // TIM10 clock enable
    static constexpr uint32_t APB2ENR_TIM11EN = 0x40000; // TIM11 clock enable


    static constexpr uint32_t AHB1LPENR_RESET_VALUE = 0x7e6791ff; // Reset value
    static constexpr uint32_t AHB1LPENR_GPIOALPEN = 0x1; // IO port A clock enable during sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOBLPEN = 0x2; // IO port B clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOCLPEN = 0x4; // IO port C clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_GPIODLPEN = 0x8; // IO port D clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOELPEN = 0x10; // IO port E clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOFLPEN = 0x20; // IO port F clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOGLPEN = 0x40; // IO port G clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOHLPEN = 0x80; // IO port H clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOILPEN = 0x100; // IO port I clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_CRCLPEN = 0x1000; // CRC clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_FLITFLPEN = 0x8000; // Flash interface clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_SRAM1LPEN = 0x10000; // SRAM 1interface clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_SRAM2LPEN = 0x20000; // SRAM 2 interface clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_BKPSRAMLPEN = 0x40000; // Backup SRAM interface clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_DMA1LPEN = 0x200000; // DMA1 clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_DMA2LPEN = 0x400000; // DMA2 clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_ETHMACLPEN = 0x2000000; // Ethernet MAC clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_ETHMACTXLPEN = 0x4000000; // Ethernet transmission clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_ETHMACRXLPEN = 0x8000000; // Ethernet reception clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_ETHMACPTPLPEN = 0x10000000; // Ethernet PTP clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_OTGHSLPEN = 0x20000000; // USB OTG HS clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_OTGHSULPILPEN = 0x40000000; // USB OTG HS ULPI clock enable during Sleep mode

    static constexpr uint32_t AHB2LPENR_RESET_VALUE = 0xf1; // Reset value
    static constexpr uint32_t AHB2LPENR_OTGFSLPEN = 0x80; // USB OTG FS clock enable during Sleep mode
    static constexpr uint32_t AHB2LPENR_RNGLPEN = 0x40; // Random number generator clock enable during Sleep mode
    static constexpr uint32_t AHB2LPENR_HASHLPEN = 0x20; // Hash modules clock enable during Sleep mode
    static constexpr uint32_t AHB2LPENR_CRYPLPEN = 0x10; // Cryptography modules clock enable during Sleep mode
    static constexpr uint32_t AHB2LPENR_DCMILPEN = 0x1; // Camera interface enable during Sleep mode

    static constexpr uint32_t AHB3LPENR_RESET_VALUE = 0x1; // Reset value
    static constexpr uint32_t AHB3LPENR_FMCLPEN = 0x1; // Flexible memory controller module clock enable during Sleep mode


    static constexpr uint32_t APB1LPENR_RESET_VALUE = 0x36fec9ff; // Reset value
    static constexpr uint32_t APB1LPENR_TIM2LPEN = 0x1; // TIM2 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM3LPEN = 0x2; // TIM3 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM4LPEN = 0x4; // TIM4 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM5LPEN = 0x8; // TIM5 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM6LPEN = 0x10; // TIM6 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM7LPEN = 0x20; // TIM7 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM12LPEN = 0x40; // TIM12 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM13LPEN = 0x80; // TIM13 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM14LPEN = 0x100; // TIM14 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_WWDGLPEN = 0x800; // Window watchdog clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_SPI2LPEN = 0x4000; // SPI2 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_SPI3LPEN = 0x8000; // SPI3 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_USART2LPEN = 0x20000; // USART2 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_USART3LPEN = 0x40000; // USART3 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_UART4LPEN = 0x80000; // UART4 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_UART5LPEN = 0x100000; // UART5 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_I2C1LPEN = 0x200000; // I2C1 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_I2C2LPEN = 0x400000; // I2C2 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_I2C3LPEN = 0x800000; // I2C3 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_CAN1LPEN = 0x2000000; // CAN 1 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_CAN2LPEN = 0x4000000; // CAN 2 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_PWRLPEN = 0x10000000; // Power interface clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_DACLPEN = 0x20000000; // DAC interface clock enable during Sleep mode

    static constexpr uint32_t APB2LPENR_RESET_VALUE = 0x75f33; // Reset value
    static constexpr uint32_t APB2LPENR_TIM1LPEN = 0x1; // TIM1 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_TIM8LPEN = 0x2; // TIM8 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_USART1LPEN = 0x10; // USART1 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_USART6LPEN = 0x20; // USART6 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_ADC1LPEN = 0x100; // ADC1 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_ADC2LPEN = 0x200; // ADC2 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_ADC3LPEN = 0x400; // ADC 3 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_SDIOLPEN = 0x800; // SDIO clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_SPI1LPEN = 0x1000; // SPI 1 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_SYSCFGLPEN = 0x4000; // System configuration controller clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_TIM9LPEN = 0x10000; // TIM9 clock enable during sleep mode
    static constexpr uint32_t APB2LPENR_TIM10LPEN = 0x20000; // TIM10 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_TIM11LPEN = 0x40000; // TIM11 clock enable during Sleep mode


    static constexpr uint32_t BDCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BDCR_BDRST = 0x10000; // Backup domain software reset
    static constexpr uint32_t BDCR_RTCEN = 0x8000; // RTC clock enable
    static constexpr uint32_t BDCR_RTCSEL1 = 0x200; // RTC clock source selection
    static constexpr uint32_t BDCR_RTCSEL0 = 0x100; // RTC clock source selection
    static constexpr uint32_t BDCR_LSEBYP = 0x4; // External low-speed oscillator bypass
    static constexpr uint32_t BDCR_LSERDY = 0x2; // External low-speed oscillator ready
    static constexpr uint32_t BDCR_LSEON = 0x1; // External low-speed oscillator enable

    static constexpr uint32_t CSR_RESET_VALUE = 0xe000000; // Reset value
    static constexpr uint32_t CSR_LPWRRSTF = 0x80000000; // Low-power reset flag
    static constexpr uint32_t CSR_WWDGRSTF = 0x40000000; // Window watchdog reset flag
    static constexpr uint32_t CSR_WDGRSTF = 0x20000000; // Independent watchdog reset flag
    static constexpr uint32_t CSR_SFTRSTF = 0x10000000; // Software reset flag
    static constexpr uint32_t CSR_PORRSTF = 0x8000000; // POR/PDR reset flag
    static constexpr uint32_t CSR_PADRSTF = 0x4000000; // PIN reset flag
    static constexpr uint32_t CSR_BORRSTF = 0x2000000; // BOR reset flag
    static constexpr uint32_t CSR_RMVF = 0x1000000; // Remove reset flag
    static constexpr uint32_t CSR_LSIRDY = 0x2; // Internal low-speed oscillator ready
    static constexpr uint32_t CSR_LSION = 0x1; // Internal low-speed oscillator enable


    static constexpr uint32_t SSCGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SSCGR_SSCGEN = 0x80000000; // Spread spectrum modulation enable
    static constexpr uint32_t SSCGR_SPREADSEL = 0x40000000; // Spread Select
    typedef bit_field_t<13, 0x7fff> SSCGR_INCSTEP; // Incrementation step
    typedef bit_field_t<0, 0x1fff> SSCGR_MODPER; // Modulation period

    static constexpr uint32_t PLLI2SCFGR_RESET_VALUE = 0x20003000; // Reset value
    typedef bit_field_t<28, 0x7> PLLI2SCFGR_PLLI2SR; // PLLI2S division factor for I2S clocks
    typedef bit_field_t<24, 0xf> PLLI2SCFGR_PLLI2SQ; // PLLI2S division factor for SAI1 clock
    typedef bit_field_t<6, 0x1ff> PLLI2SCFGR_PLLI2SN; // PLLI2S multiplication factor for VCO

    static constexpr uint32_t PLLSAICFGR_RESET_VALUE = 0x24003000; // Reset value
    typedef bit_field_t<28, 0x7> PLLSAICFGR_PLLSAIR; // PLLSAI division factor for LCD clock
    typedef bit_field_t<24, 0xf> PLLSAICFGR_PLLSAIQ; // PLLSAI division factor for SAI1 clock
    typedef bit_field_t<6, 0x1ff> PLLSAICFGR_PLLSAIN; // PLLSAI division factor for VCO

    static constexpr uint32_t DCKCFGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> DCKCFGR_PLLI2SDIVQ; // PLLI2S division factor for SAI1 clock
    typedef bit_field_t<8, 0x1f> DCKCFGR_PLLSAIDIVQ; // PLLSAI division factor for SAI1 clock
    typedef bit_field_t<16, 0x3> DCKCFGR_PLLSAIDIVR; // division factor for LCD_CLK
    typedef bit_field_t<20, 0x3> DCKCFGR_SAI1ASRC; // SAI1-A clock source selection
    typedef bit_field_t<22, 0x3> DCKCFGR_SAI1BSRC; // SAI1-B clock source selection
    static constexpr uint32_t DCKCFGR_TIMPRE = 0x1000000; // Timers clocks prescalers selection
};

// RCC: Reset and clock control

struct stm32f446_rcc_t
{
    volatile uint32_t CR; // clock control register
    volatile uint32_t PLLCFGR; // PLL configuration register
    volatile uint32_t CFGR; // clock configuration register
    volatile uint32_t CIR; // clock interrupt register
    volatile uint32_t AHB1RSTR; // AHB1 peripheral reset register
    volatile uint32_t AHB2RSTR; // AHB2 peripheral reset register
    volatile uint32_t AHB3RSTR; // AHB3 peripheral reset register
    reserved_t<0x1> _0x1c;
    volatile uint32_t APB1RSTR; // APB1 peripheral reset register
    volatile uint32_t APB2RSTR; // APB2 peripheral reset register
    reserved_t<0x2> _0x28;
    volatile uint32_t AHB1ENR; // AHB1 peripheral clock register
    volatile uint32_t AHB2ENR; // AHB2 peripheral clock enable register
    volatile uint32_t AHB3ENR; // AHB3 peripheral clock enable register
    reserved_t<0x1> _0x3c;
    volatile uint32_t APB1ENR; // APB1 peripheral clock enable register
    volatile uint32_t APB2ENR; // APB2 peripheral clock enable register
    reserved_t<0x2> _0x48;
    volatile uint32_t AHB1LPENR; // AHB1 peripheral clock enable in low power mode register
    volatile uint32_t AHB2LPENR; // AHB2 peripheral clock enable in low power mode register
    volatile uint32_t AHB3LPENR; // AHB3 peripheral clock enable in low power mode register
    reserved_t<0x1> _0x5c;
    volatile uint32_t APB1LPENR; // APB1 peripheral clock enable in low power mode register
    volatile uint32_t APB2LPENR; // APB2 peripheral clock enabled in low power mode register
    reserved_t<0x2> _0x68;
    volatile uint32_t BDCR; // Backup domain control register
    volatile uint32_t CSR; // clock control &amp; status register
    reserved_t<0x2> _0x78;
    volatile uint32_t SSCGR; // spread spectrum clock generation register
    volatile uint32_t PLLI2SCFGR; // PLLI2S configuration register
    volatile uint32_t PLLSAICFGR; // PLL configuration register
    volatile uint32_t DCKCFGR; // Dedicated Clock Configuration Register
    volatile uint32_t CKGATENR; // clocks gated enable register
    volatile uint32_t DCKCFGR2; // dedicated clocks configuration register 2

    static constexpr uint32_t CR_RESET_VALUE = 0x83; // Reset value
    static constexpr uint32_t CR_PLLI2SRDY = 0x8000000; // PLLI2S clock ready flag
    static constexpr uint32_t CR_PLLI2SON = 0x4000000; // PLLI2S enable
    static constexpr uint32_t CR_PLLRDY = 0x2000000; // Main PLL (PLL) clock ready flag
    static constexpr uint32_t CR_PLLON = 0x1000000; // Main PLL (PLL) enable
    static constexpr uint32_t CR_CSSON = 0x80000; // Clock security system enable
    static constexpr uint32_t CR_HSEBYP = 0x40000; // HSE clock bypass
    static constexpr uint32_t CR_HSERDY = 0x20000; // HSE clock ready flag
    static constexpr uint32_t CR_HSEON = 0x10000; // HSE clock enable
    typedef bit_field_t<8, 0xff> CR_HSICAL; // Internal high-speed clock calibration
    typedef bit_field_t<3, 0x1f> CR_HSITRIM; // Internal high-speed clock trimming
    static constexpr uint32_t CR_HSIRDY = 0x2; // Internal high-speed clock ready flag
    static constexpr uint32_t CR_HSION = 0x1; // Internal high-speed clock enable

    static constexpr uint32_t PLLCFGR_RESET_VALUE = 0x24003010; // Reset value
    typedef bit_field_t<0, 0x3f> PLLCFGR_PLLM; // Division factor for the main PLL (PLL) and audio PLL (PLLI2S) input clock
    typedef bit_field_t<6, 0x1ff> PLLCFGR_PLLN; // Main PLL (PLL) multiplication factor for VCO
    typedef bit_field_t<16, 0x3> PLLCFGR_PLLP; // Main PLL (PLL) division factor for main system clock
    static constexpr uint32_t PLLCFGR_PLLSRC = 0x400000; // Main PLL(PLL) and audio PLL (PLLI2S) entry clock source
    typedef bit_field_t<24, 0xf> PLLCFGR_PLLQ; // Main PLL (PLL) division factor for USB OTG FS, SDIO and random number generator clocks

    static constexpr uint32_t CFGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> CFGR_SW; // System clock switch
    typedef bit_field_t<2, 0x3> CFGR_SWS; // System clock switch status
    typedef bit_field_t<4, 0xf> CFGR_HPRE; // AHB prescaler
    typedef bit_field_t<10, 0x7> CFGR_PPRE1; // APB Low speed prescaler (APB1)
    typedef bit_field_t<13, 0x7> CFGR_PPRE2; // APB high-speed prescaler (APB2)
    typedef bit_field_t<16, 0x1f> CFGR_RTCPRE; // HSE division factor for RTC clock
    typedef bit_field_t<21, 0x3> CFGR_MCO1SEL; // Microcontroller clock output 1
    static constexpr uint32_t CFGR_I2SSRC = 0x800000; // I2S clock selection
    typedef bit_field_t<24, 0x7> CFGR_MCO1PRE; // MCO1 prescaler
    typedef bit_field_t<27, 0x7> CFGR_MCO2PRE; // MCO2 prescaler
    typedef bit_field_t<30, 0x3> CFGR_MCO2SEL; // Microcontroller clock output 2

    static constexpr uint32_t CIR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CIR_CSSC = 0x800000; // Clock security system interrupt clear
    static constexpr uint32_t CIR_PLLSAIRDYC = 0x400000; // PLLSAI Ready Interrupt Clear
    static constexpr uint32_t CIR_PLLI2SRDYC = 0x200000; // PLLI2S ready interrupt clear
    static constexpr uint32_t CIR_PLLRDYC = 0x100000; // Main PLL(PLL) ready interrupt clear
    static constexpr uint32_t CIR_HSERDYC = 0x80000; // HSE ready interrupt clear
    static constexpr uint32_t CIR_HSIRDYC = 0x40000; // HSI ready interrupt clear
    static constexpr uint32_t CIR_LSERDYC = 0x20000; // LSE ready interrupt clear
    static constexpr uint32_t CIR_LSIRDYC = 0x10000; // LSI ready interrupt clear
    static constexpr uint32_t CIR_PLLSAIRDYIE = 0x4000; // PLLSAI Ready Interrupt Enable
    static constexpr uint32_t CIR_PLLI2SRDYIE = 0x2000; // PLLI2S ready interrupt enable
    static constexpr uint32_t CIR_PLLRDYIE = 0x1000; // Main PLL (PLL) ready interrupt enable
    static constexpr uint32_t CIR_HSERDYIE = 0x800; // HSE ready interrupt enable
    static constexpr uint32_t CIR_HSIRDYIE = 0x400; // HSI ready interrupt enable
    static constexpr uint32_t CIR_LSERDYIE = 0x200; // LSE ready interrupt enable
    static constexpr uint32_t CIR_LSIRDYIE = 0x100; // LSI ready interrupt enable
    static constexpr uint32_t CIR_CSSF = 0x80; // Clock security system interrupt flag
    static constexpr uint32_t CIR_PLLSAIRDYF = 0x40; // PLLSAI ready interrupt flag
    static constexpr uint32_t CIR_PLLI2SRDYF = 0x20; // PLLI2S ready interrupt flag
    static constexpr uint32_t CIR_PLLRDYF = 0x10; // Main PLL (PLL) ready interrupt flag
    static constexpr uint32_t CIR_HSERDYF = 0x8; // HSE ready interrupt flag
    static constexpr uint32_t CIR_HSIRDYF = 0x4; // HSI ready interrupt flag
    static constexpr uint32_t CIR_LSERDYF = 0x2; // LSE ready interrupt flag
    static constexpr uint32_t CIR_LSIRDYF = 0x1; // LSI ready interrupt flag

    static constexpr uint32_t AHB1RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB1RSTR_OTGHSRST = 0x20000000; // USB OTG HS module reset
    static constexpr uint32_t AHB1RSTR_DMA2RST = 0x400000; // DMA2 reset
    static constexpr uint32_t AHB1RSTR_DMA1RST = 0x200000; // DMA2 reset
    static constexpr uint32_t AHB1RSTR_CRCRST = 0x1000; // CRC reset
    static constexpr uint32_t AHB1RSTR_GPIOHRST = 0x80; // IO port H reset
    static constexpr uint32_t AHB1RSTR_GPIOGRST = 0x40; // IO port G reset
    static constexpr uint32_t AHB1RSTR_GPIOFRST = 0x20; // IO port F reset
    static constexpr uint32_t AHB1RSTR_GPIOERST = 0x10; // IO port E reset
    static constexpr uint32_t AHB1RSTR_GPIODRST = 0x8; // IO port D reset
    static constexpr uint32_t AHB1RSTR_GPIOCRST = 0x4; // IO port C reset
    static constexpr uint32_t AHB1RSTR_GPIOBRST = 0x2; // IO port B reset
    static constexpr uint32_t AHB1RSTR_GPIOARST = 0x1; // IO port A reset

    static constexpr uint32_t AHB2RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB2RSTR_OTGFSRST = 0x80; // USB OTG FS module reset
    static constexpr uint32_t AHB2RSTR_DCMIRST = 0x1; // Camera interface reset

    static constexpr uint32_t AHB3RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB3RSTR_FMCRST = 0x1; // Flexible memory controller module reset
    static constexpr uint32_t AHB3RSTR_QSPIRST = 0x2; // QUADSPI module reset


    static constexpr uint32_t APB1RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1RSTR_TIM2RST = 0x1; // TIM2 reset
    static constexpr uint32_t APB1RSTR_TIM3RST = 0x2; // TIM3 reset
    static constexpr uint32_t APB1RSTR_TIM4RST = 0x4; // TIM4 reset
    static constexpr uint32_t APB1RSTR_TIM5RST = 0x8; // TIM5 reset
    static constexpr uint32_t APB1RSTR_TIM6RST = 0x10; // TIM6 reset
    static constexpr uint32_t APB1RSTR_TIM7RST = 0x20; // TIM7 reset
    static constexpr uint32_t APB1RSTR_TIM12RST = 0x40; // TIM12 reset
    static constexpr uint32_t APB1RSTR_TIM13RST = 0x80; // TIM13 reset
    static constexpr uint32_t APB1RSTR_TIM14RST = 0x100; // TIM14 reset
    static constexpr uint32_t APB1RSTR_WWDGRST = 0x800; // Window watchdog reset
    static constexpr uint32_t APB1RSTR_SPI2RST = 0x4000; // SPI 2 reset
    static constexpr uint32_t APB1RSTR_SPI3RST = 0x8000; // SPI 3 reset
    static constexpr uint32_t APB1RSTR_SPDIFRST = 0x10000; // SPDIF-IN reset
    static constexpr uint32_t APB1RSTR_UART2RST = 0x20000; // USART 2 reset
    static constexpr uint32_t APB1RSTR_UART3RST = 0x40000; // USART 3 reset
    static constexpr uint32_t APB1RSTR_UART4RST = 0x80000; // USART 4 reset
    static constexpr uint32_t APB1RSTR_UART5RST = 0x100000; // USART 5 reset
    static constexpr uint32_t APB1RSTR_I2C1RST = 0x200000; // I2C 1 reset
    static constexpr uint32_t APB1RSTR_I2C2RST = 0x400000; // I2C 2 reset
    static constexpr uint32_t APB1RSTR_I2C3RST = 0x800000; // I2C3 reset
    static constexpr uint32_t APB1RSTR_I2CFMP1RST = 0x1000000; // I2CFMP1 reset
    static constexpr uint32_t APB1RSTR_CAN1RST = 0x2000000; // CAN1 reset
    static constexpr uint32_t APB1RSTR_CAN2RST = 0x4000000; // CAN2 reset
    static constexpr uint32_t APB1RSTR_PWRRST = 0x10000000; // Power interface reset
    static constexpr uint32_t APB1RSTR_DACRST = 0x20000000; // DAC reset

    static constexpr uint32_t APB2RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2RSTR_TIM1RST = 0x1; // TIM1 reset
    static constexpr uint32_t APB2RSTR_TIM8RST = 0x2; // TIM8 reset
    static constexpr uint32_t APB2RSTR_USART1RST = 0x10; // USART1 reset
    static constexpr uint32_t APB2RSTR_USART6RST = 0x20; // USART6 reset
    static constexpr uint32_t APB2RSTR_ADCRST = 0x100; // ADC interface reset (common to all ADCs)
    static constexpr uint32_t APB2RSTR_SDIORST = 0x800; // SDIO reset
    static constexpr uint32_t APB2RSTR_SPI1RST = 0x1000; // SPI 1 reset
    static constexpr uint32_t APB2RSTR_SPI4RST = 0x2000; // SPI4 reset
    static constexpr uint32_t APB2RSTR_SYSCFGRST = 0x4000; // System configuration controller reset
    static constexpr uint32_t APB2RSTR_TIM9RST = 0x10000; // TIM9 reset
    static constexpr uint32_t APB2RSTR_TIM10RST = 0x20000; // TIM10 reset
    static constexpr uint32_t APB2RSTR_TIM11RST = 0x40000; // TIM11 reset
    static constexpr uint32_t APB2RSTR_SAI1RST = 0x400000; // SAI1 reset
    static constexpr uint32_t APB2RSTR_SAI2RST = 0x800000; // SAI2 reset


    static constexpr uint32_t AHB1ENR_RESET_VALUE = 0x100000; // Reset value
    static constexpr uint32_t AHB1ENR_OTGHSULPIEN = 0x40000000; // USB OTG HSULPI clock enable
    static constexpr uint32_t AHB1ENR_OTGHSEN = 0x20000000; // USB OTG HS clock enable
    static constexpr uint32_t AHB1ENR_DMA2EN = 0x400000; // DMA2 clock enable
    static constexpr uint32_t AHB1ENR_DMA1EN = 0x200000; // DMA1 clock enable
    static constexpr uint32_t AHB1ENR_BKPSRAMEN = 0x40000; // Backup SRAM interface clock enable
    static constexpr uint32_t AHB1ENR_CRCEN = 0x1000; // CRC clock enable
    static constexpr uint32_t AHB1ENR_GPIOHEN = 0x80; // IO port H clock enable
    static constexpr uint32_t AHB1ENR_GPIOGEN = 0x40; // IO port G clock enable
    static constexpr uint32_t AHB1ENR_GPIOFEN = 0x20; // IO port F clock enable
    static constexpr uint32_t AHB1ENR_GPIOEEN = 0x10; // IO port E clock enable
    static constexpr uint32_t AHB1ENR_GPIODEN = 0x8; // IO port D clock enable
    static constexpr uint32_t AHB1ENR_GPIOCEN = 0x4; // IO port C clock enable
    static constexpr uint32_t AHB1ENR_GPIOBEN = 0x2; // IO port B clock enable
    static constexpr uint32_t AHB1ENR_GPIOAEN = 0x1; // IO port A clock enable

    static constexpr uint32_t AHB2ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB2ENR_OTGFSEN = 0x80; // USB OTG FS clock enable
    static constexpr uint32_t AHB2ENR_DCMIEN = 0x1; // Camera interface enable

    static constexpr uint32_t AHB3ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB3ENR_FMCEN = 0x1; // Flexible memory controller module clock enable
    static constexpr uint32_t AHB3ENR_QSPIEN = 0x2; // QUADSPI memory controller module clock enable


    static constexpr uint32_t APB1ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1ENR_TIM2EN = 0x1; // TIM2 clock enable
    static constexpr uint32_t APB1ENR_TIM3EN = 0x2; // TIM3 clock enable
    static constexpr uint32_t APB1ENR_TIM4EN = 0x4; // TIM4 clock enable
    static constexpr uint32_t APB1ENR_TIM5EN = 0x8; // TIM5 clock enable
    static constexpr uint32_t APB1ENR_TIM6EN = 0x10; // TIM6 clock enable
    static constexpr uint32_t APB1ENR_TIM7EN = 0x20; // TIM7 clock enable
    static constexpr uint32_t APB1ENR_TIM12EN = 0x40; // TIM12 clock enable
    static constexpr uint32_t APB1ENR_TIM13EN = 0x80; // TIM13 clock enable
    static constexpr uint32_t APB1ENR_TIM14EN = 0x100; // TIM14 clock enable
    static constexpr uint32_t APB1ENR_WWDGEN = 0x800; // Window watchdog clock enable
    static constexpr uint32_t APB1ENR_SPI2EN = 0x4000; // SPI2 clock enable
    static constexpr uint32_t APB1ENR_SPI3EN = 0x8000; // SPI3 clock enable
    static constexpr uint32_t APB1ENR_SPDIFEN = 0x10000; // SPDIF-IN clock enable
    static constexpr uint32_t APB1ENR_USART2EN = 0x20000; // USART 2 clock enable
    static constexpr uint32_t APB1ENR_USART3EN = 0x40000; // USART3 clock enable
    static constexpr uint32_t APB1ENR_UART4EN = 0x80000; // UART4 clock enable
    static constexpr uint32_t APB1ENR_UART5EN = 0x100000; // UART5 clock enable
    static constexpr uint32_t APB1ENR_I2C1EN = 0x200000; // I2C1 clock enable
    static constexpr uint32_t APB1ENR_I2C2EN = 0x400000; // I2C2 clock enable
    static constexpr uint32_t APB1ENR_I2C3EN = 0x800000; // I2C3 clock enable
    static constexpr uint32_t APB1ENR_I2CFMP1EN = 0x1000000; // I2CFMP1 clock enable
    static constexpr uint32_t APB1ENR_CAN1EN = 0x2000000; // CAN 1 clock enable
    static constexpr uint32_t APB1ENR_CAN2EN = 0x4000000; // CAN 2 clock enable
    static constexpr uint32_t APB1ENR_CEC = 0x8000000; // CEC interface clock enable
    static constexpr uint32_t APB1ENR_PWREN = 0x10000000; // Power interface clock enable
    static constexpr uint32_t APB1ENR_DACEN = 0x20000000; // DAC interface clock enable

    static constexpr uint32_t APB2ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2ENR_TIM1EN = 0x1; // TIM1 clock enable
    static constexpr uint32_t APB2ENR_TIM8EN = 0x2; // TIM8 clock enable
    static constexpr uint32_t APB2ENR_USART1EN = 0x10; // USART1 clock enable
    static constexpr uint32_t APB2ENR_USART6EN = 0x20; // USART6 clock enable
    static constexpr uint32_t APB2ENR_ADC1EN = 0x100; // ADC1 clock enable
    static constexpr uint32_t APB2ENR_ADC2EN = 0x200; // ADC2 clock enable
    static constexpr uint32_t APB2ENR_ADC3EN = 0x400; // ADC3 clock enable
    static constexpr uint32_t APB2ENR_SDIOEN = 0x800; // SDIO clock enable
    static constexpr uint32_t APB2ENR_SPI1EN = 0x1000; // SPI1 clock enable
    static constexpr uint32_t APB2ENR_SPI4ENR = 0x2000; // SPI4 clock enable
    static constexpr uint32_t APB2ENR_SYSCFGEN = 0x4000; // System configuration controller clock enable
    static constexpr uint32_t APB2ENR_TIM9EN = 0x10000; // TIM9 clock enable
    static constexpr uint32_t APB2ENR_TIM10EN = 0x20000; // TIM10 clock enable
    static constexpr uint32_t APB2ENR_TIM11EN = 0x40000; // TIM11 clock enable
    static constexpr uint32_t APB2ENR_SAI1EN = 0x400000; // SAI1 clock enable
    static constexpr uint32_t APB2ENR_SAI2EN = 0x800000; // SAI2 clock enable


    static constexpr uint32_t AHB1LPENR_RESET_VALUE = 0x7e6791ff; // Reset value
    static constexpr uint32_t AHB1LPENR_GPIOALPEN = 0x1; // IO port A clock enable during sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOBLPEN = 0x2; // IO port B clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOCLPEN = 0x4; // IO port C clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_GPIODLPEN = 0x8; // IO port D clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOELPEN = 0x10; // IO port E clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOFLPEN = 0x20; // IO port F clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOGLPEN = 0x40; // IO port G clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOHLPEN = 0x80; // IO port H clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_CRCLPEN = 0x1000; // CRC clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_FLITFLPEN = 0x8000; // Flash interface clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_SRAM1LPEN = 0x10000; // SRAM 1interface clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_SRAM2LPEN = 0x20000; // SRAM 2 interface clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_BKPSRAMLPEN = 0x40000; // Backup SRAM interface clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_DMA1LPEN = 0x200000; // DMA1 clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_DMA2LPEN = 0x400000; // DMA2 clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_OTGHSLPEN = 0x20000000; // USB OTG HS clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_OTGHSULPILPEN = 0x40000000; // USB OTG HS ULPI clock enable during Sleep mode

    static constexpr uint32_t AHB2LPENR_RESET_VALUE = 0xf1; // Reset value
    static constexpr uint32_t AHB2LPENR_OTGFSLPEN = 0x80; // USB OTG FS clock enable during Sleep mode
    static constexpr uint32_t AHB2LPENR_DCMILPEN = 0x1; // Camera interface enable during Sleep mode

    static constexpr uint32_t AHB3LPENR_RESET_VALUE = 0x1; // Reset value
    static constexpr uint32_t AHB3LPENR_FMCLPEN = 0x1; // Flexible memory controller module clock enable during Sleep mode
    static constexpr uint32_t AHB3LPENR_QSPILPEN = 0x2; // QUADSPI memory controller module clock enable during Sleep mode


    static constexpr uint32_t APB1LPENR_RESET_VALUE = 0x36fec9ff; // Reset value
    static constexpr uint32_t APB1LPENR_TIM2LPEN = 0x1; // TIM2 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM3LPEN = 0x2; // TIM3 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM4LPEN = 0x4; // TIM4 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM5LPEN = 0x8; // TIM5 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM6LPEN = 0x10; // TIM6 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM7LPEN = 0x20; // TIM7 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM12LPEN = 0x40; // TIM12 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM13LPEN = 0x80; // TIM13 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM14LPEN = 0x100; // TIM14 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_WWDGLPEN = 0x800; // Window watchdog clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_SPI2LPEN = 0x4000; // SPI2 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_SPI3LPEN = 0x8000; // SPI3 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_SPDIFLPEN = 0x10000; // SPDIF clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_USART2LPEN = 0x20000; // USART2 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_USART3LPEN = 0x40000; // USART3 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_UART4LPEN = 0x80000; // UART4 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_UART5LPEN = 0x100000; // UART5 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_I2C1LPEN = 0x200000; // I2C1 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_I2C2LPEN = 0x400000; // I2C2 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_I2C3LPEN = 0x800000; // I2C3 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_I2CFMP1LPEN = 0x1000000; // I2CFMP1 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_CAN1LPEN = 0x2000000; // CAN 1 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_CAN2LPEN = 0x4000000; // CAN 2 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_CECLPEN = 0x8000000; // CEC clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_PWRLPEN = 0x10000000; // Power interface clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_DACLPEN = 0x20000000; // DAC interface clock enable during Sleep mode

    static constexpr uint32_t APB2LPENR_RESET_VALUE = 0x75f33; // Reset value
    static constexpr uint32_t APB2LPENR_TIM1LPEN = 0x1; // TIM1 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_TIM8LPEN = 0x2; // TIM8 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_USART1LPEN = 0x10; // USART1 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_USART6LPEN = 0x20; // USART6 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_ADC1LPEN = 0x100; // ADC1 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_ADC2LPEN = 0x200; // ADC2 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_ADC3LPEN = 0x400; // ADC 3 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_SDIOLPEN = 0x800; // SDIO clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_SPI1LPEN = 0x1000; // SPI 1 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_SPI4LPEN = 0x2000; // SPI 4 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_SYSCFGLPEN = 0x4000; // System configuration controller clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_TIM9LPEN = 0x10000; // TIM9 clock enable during sleep mode
    static constexpr uint32_t APB2LPENR_TIM10LPEN = 0x20000; // TIM10 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_TIM11LPEN = 0x40000; // TIM11 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_SAI1LPEN = 0x400000; // SAI1 clock enable
    static constexpr uint32_t APB2LPENR_SAI2LPEN = 0x800000; // SAI2 clock enable


    static constexpr uint32_t BDCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BDCR_BDRST = 0x10000; // Backup domain software reset
    static constexpr uint32_t BDCR_RTCEN = 0x8000; // RTC clock enable
    typedef bit_field_t<8, 0x3> BDCR_RTCSEL; // RTC clock source selection
    static constexpr uint32_t BDCR_LSEMOD = 0x8; // External low-speed oscillator mode
    static constexpr uint32_t BDCR_LSEBYP = 0x4; // External low-speed oscillator bypass
    static constexpr uint32_t BDCR_LSERDY = 0x2; // External low-speed oscillator ready
    static constexpr uint32_t BDCR_LSEON = 0x1; // External low-speed oscillator enable

    static constexpr uint32_t CSR_RESET_VALUE = 0xe000000; // Reset value
    static constexpr uint32_t CSR_LPWRRSTF = 0x80000000; // Low-power reset flag
    static constexpr uint32_t CSR_WWDGRSTF = 0x40000000; // Window watchdog reset flag
    static constexpr uint32_t CSR_WDGRSTF = 0x20000000; // Independent watchdog reset flag
    static constexpr uint32_t CSR_SFTRSTF = 0x10000000; // Software reset flag
    static constexpr uint32_t CSR_PORRSTF = 0x8000000; // POR/PDR reset flag
    static constexpr uint32_t CSR_PADRSTF = 0x4000000; // PIN reset flag
    static constexpr uint32_t CSR_BORRSTF = 0x2000000; // BOR reset flag
    static constexpr uint32_t CSR_RMVF = 0x1000000; // Remove reset flag
    static constexpr uint32_t CSR_LSIRDY = 0x2; // Internal low-speed oscillator ready
    static constexpr uint32_t CSR_LSION = 0x1; // Internal low-speed oscillator enable


    static constexpr uint32_t SSCGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SSCGR_SSCGEN = 0x80000000; // Spread spectrum modulation enable
    static constexpr uint32_t SSCGR_SPREADSEL = 0x40000000; // Spread Select
    typedef bit_field_t<13, 0x7fff> SSCGR_INCSTEP; // Incrementation step
    typedef bit_field_t<0, 0x1fff> SSCGR_MODPER; // Modulation period

    static constexpr uint32_t PLLI2SCFGR_RESET_VALUE = 0x20003000; // Reset value
    typedef bit_field_t<0, 0x3f> PLLI2SCFGR_PLLI2SM; // Division factor for audio PLL (PLLI2S) input clock
    typedef bit_field_t<6, 0x1ff> PLLI2SCFGR_PLLI2SN; // PLLI2S multiplication factor for VCO
    typedef bit_field_t<16, 0x3> PLLI2SCFGR_PLLI2SP; // PLLI2S division factor for SPDIF-IN clock
    typedef bit_field_t<24, 0xf> PLLI2SCFGR_PLLI2SQ; // PLLI2S division factor for SAI1 clock
    typedef bit_field_t<28, 0x7> PLLI2SCFGR_PLLI2SR; // PLLI2S division factor for I2S clocks

    static constexpr uint32_t PLLSAICFGR_RESET_VALUE = 0x24003000; // Reset value
    typedef bit_field_t<0, 0x3f> PLLSAICFGR_PLLSAIM; // Division factor for audio PLLSAI input clock
    typedef bit_field_t<6, 0x1ff> PLLSAICFGR_PLLSAIN; // PLLSAI division factor for VCO
    typedef bit_field_t<16, 0x3> PLLSAICFGR_PLLSAIP; // PLLSAI division factor for 48 MHz clock
    typedef bit_field_t<24, 0xf> PLLSAICFGR_PLLSAIQ; // PLLSAI division factor for SAIs clock

    static constexpr uint32_t DCKCFGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> DCKCFGR_PLLI2SDIVQ; // PLLI2S division factor for SAIs clock
    typedef bit_field_t<8, 0x1f> DCKCFGR_PLLSAIDIVQ; // PLLSAI division factor for SAIs clock
    typedef bit_field_t<20, 0x3> DCKCFGR_SAI1SRC; // SAI1 clock source selection
    typedef bit_field_t<22, 0x3> DCKCFGR_SAI2SRC; // SAI2 clock source selection
    static constexpr uint32_t DCKCFGR_TIMPRE = 0x1000000; // Timers clocks prescalers selection
    typedef bit_field_t<25, 0x3> DCKCFGR_I2S1SRC; // I2S APB1 clock source selection
    typedef bit_field_t<27, 0x3> DCKCFGR_I2S2SRC; // I2S APB2 clock source selection

    static constexpr uint32_t CKGATENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CKGATENR_AHB2APB1_CKEN = 0x1; // AHB to APB1 Bridge clock enable
    static constexpr uint32_t CKGATENR_AHB2APB2_CKEN = 0x2; // AHB to APB2 Bridge clock enable
    static constexpr uint32_t CKGATENR_CM4DBG_CKEN = 0x4; // Cortex M4 ETM clock enable
    static constexpr uint32_t CKGATENR_SPARE_CKEN = 0x8; // Spare clock enable
    static constexpr uint32_t CKGATENR_SRAM_CKEN = 0x10; // SRQAM controller clock enable
    static constexpr uint32_t CKGATENR_FLITF_CKEN = 0x20; // Flash Interface clock enable
    static constexpr uint32_t CKGATENR_RCC_CKEN = 0x40; // RCC clock enable

    static constexpr uint32_t DCKCFGR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<22, 0x3> DCKCFGR2_FMPI2C1SEL; // I2C4 kernel clock source selection
    static constexpr uint32_t DCKCFGR2_CECSEL = 0x4000000; // HDMI CEC clock source selection
    static constexpr uint32_t DCKCFGR2_CK48MSEL = 0x8000000; // SDIO/USBFS/HS clock selection
    static constexpr uint32_t DCKCFGR2_SDIOSEL = 0x10000000; // SDIO clock selection
    static constexpr uint32_t DCKCFGR2_SPDIFSEL = 0x20000000; // SPDIF clock selection
};

// RCC: Reset and clock control

struct stm32f469_rcc_t
{
    volatile uint32_t CR; // clock control register
    volatile uint32_t PLLCFGR; // PLL configuration register
    volatile uint32_t CFGR; // clock configuration register
    volatile uint32_t CIR; // clock interrupt register
    volatile uint32_t AHB1RSTR; // AHB1 peripheral reset register
    volatile uint32_t AHB2RSTR; // AHB2 peripheral reset register
    volatile uint32_t AHB3RSTR; // AHB3 peripheral reset register
    reserved_t<0x1> _0x1c;
    volatile uint32_t APB1RSTR; // APB1 peripheral reset register
    volatile uint32_t APB2RSTR; // APB2 peripheral reset register
    reserved_t<0x2> _0x28;
    volatile uint32_t AHB1ENR; // AHB1 peripheral clock register
    volatile uint32_t AHB2ENR; // AHB2 peripheral clock enable register
    volatile uint32_t AHB3ENR; // AHB3 peripheral clock enable register
    reserved_t<0x1> _0x3c;
    volatile uint32_t APB1ENR; // APB1 peripheral clock enable register
    volatile uint32_t APB2ENR; // APB2 peripheral clock enable register
    reserved_t<0x2> _0x48;
    volatile uint32_t AHB1LPENR; // AHB1 peripheral clock enable in low power mode register
    volatile uint32_t AHB2LPENR; // AHB2 peripheral clock enable in low power mode register
    volatile uint32_t AHB3LPENR; // AHB3 peripheral clock enable in low power mode register
    reserved_t<0x1> _0x5c;
    volatile uint32_t APB1LPENR; // APB1 peripheral clock enable in low power mode register
    volatile uint32_t APB2LPENR; // APB2 peripheral clock enabled in low power mode register
    reserved_t<0x2> _0x68;
    volatile uint32_t BDCR; // Backup domain control register
    volatile uint32_t CSR; // clock control &amp; status register
    reserved_t<0x2> _0x78;
    volatile uint32_t SSCGR; // spread spectrum clock generation register
    volatile uint32_t PLLI2SCFGR; // PLLI2S configuration register
    volatile uint32_t PLLSAICFGR; // PLL configuration register
    volatile uint32_t DCKCFGR; // Dedicated Clock Configuration Register

    static constexpr uint32_t CR_RESET_VALUE = 0x83; // Reset value
    static constexpr uint32_t CR_HSION = 0x1; // Internal high-speed clock enable
    static constexpr uint32_t CR_HSIRDY = 0x2; // Internal high-speed clock ready flag
    typedef bit_field_t<3, 0x1f> CR_HSITRIM; // Internal high-speed clock trimming
    typedef bit_field_t<8, 0xff> CR_HSICAL; // Internal high-speed clock calibration
    static constexpr uint32_t CR_HSEON = 0x10000; // HSE clock enable
    static constexpr uint32_t CR_HSERDY = 0x20000; // HSE clock ready flag
    static constexpr uint32_t CR_HSEBYP = 0x40000; // HSE clock bypass
    static constexpr uint32_t CR_CSSON = 0x80000; // Clock security system enable
    static constexpr uint32_t CR_PLLON = 0x1000000; // Main PLL (PLL) enable
    static constexpr uint32_t CR_PLLRDY = 0x2000000; // Main PLL (PLL) clock ready flag
    static constexpr uint32_t CR_PLLI2SON = 0x4000000; // PLLI2S enable
    static constexpr uint32_t CR_PLLI2SRDY = 0x8000000; // PLLI2S clock ready flag
    static constexpr uint32_t CR_PLLSAION = 0x10000000; // PLLSAI enable
    static constexpr uint32_t CR_PLLSAIRDY = 0x20000000; // PLLSAI clock ready flag

    static constexpr uint32_t PLLCFGR_RESET_VALUE = 0x24003010; // Reset value
    typedef bit_field_t<0, 0x3f> PLLCFGR_PLLM; // Division factor for the main PLL (PLL) and audio PLL (PLLI2S) input clock
    typedef bit_field_t<6, 0x1ff> PLLCFGR_PLLN; // Main PLL (PLL) multiplication factor for VCO
    typedef bit_field_t<16, 0x3> PLLCFGR_PLLP; // Main PLL (PLL) division factor for main system clock
    static constexpr uint32_t PLLCFGR_PLLSRC = 0x400000; // Main PLL(PLL) and audio PLL (PLLI2S) entry clock source
    typedef bit_field_t<24, 0xf> PLLCFGR_PLLQ; // Main PLL (PLL) division factor for USB OTG FS, SDIO and random number generator clocks
    typedef bit_field_t<28, 0x7> PLLCFGR_PLLR; // Main PLL division factor for DSI clock

    static constexpr uint32_t CFGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> CFGR_SW; // System clock switch
    typedef bit_field_t<2, 0x3> CFGR_SWS; // System clock switch status
    typedef bit_field_t<4, 0xf> CFGR_HPRE; // AHB prescaler
    typedef bit_field_t<10, 0x7> CFGR_PPRE1; // APB Low speed prescaler (APB1)
    typedef bit_field_t<13, 0x7> CFGR_PPRE2; // APB high-speed prescaler (APB2)
    typedef bit_field_t<16, 0x1f> CFGR_RTCPRE; // HSE division factor for RTC clock
    typedef bit_field_t<21, 0x3> CFGR_MCO1SEL; // Microcontroller clock output 1
    static constexpr uint32_t CFGR_I2SSRC = 0x800000; // I2S clock selection
    typedef bit_field_t<24, 0x7> CFGR_MCO1PRE; // MCO1 prescaler
    typedef bit_field_t<27, 0x7> CFGR_MCO2PRE; // MCO2 prescaler
    typedef bit_field_t<30, 0x3> CFGR_MCO2SEL; // Microcontroller clock output 2

    static constexpr uint32_t CIR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CIR_CSSC = 0x800000; // Clock security system interrupt clear
    static constexpr uint32_t CIR_PLLSAIRDYC = 0x400000; // PLLSAI Ready Interrupt Clear
    static constexpr uint32_t CIR_PLLI2SRDYC = 0x200000; // PLLI2S ready interrupt clear
    static constexpr uint32_t CIR_PLLRDYC = 0x100000; // Main PLL(PLL) ready interrupt clear
    static constexpr uint32_t CIR_HSERDYC = 0x80000; // HSE ready interrupt clear
    static constexpr uint32_t CIR_HSIRDYC = 0x40000; // HSI ready interrupt clear
    static constexpr uint32_t CIR_LSERDYC = 0x20000; // LSE ready interrupt clear
    static constexpr uint32_t CIR_LSIRDYC = 0x10000; // LSI ready interrupt clear
    static constexpr uint32_t CIR_PLLSAIRDYIE = 0x4000; // PLLSAI Ready Interrupt Enable
    static constexpr uint32_t CIR_PLLI2SRDYIE = 0x2000; // PLLI2S ready interrupt enable
    static constexpr uint32_t CIR_PLLRDYIE = 0x1000; // Main PLL (PLL) ready interrupt enable
    static constexpr uint32_t CIR_HSERDYIE = 0x800; // HSE ready interrupt enable
    static constexpr uint32_t CIR_HSIRDYIE = 0x400; // HSI ready interrupt enable
    static constexpr uint32_t CIR_LSERDYIE = 0x200; // LSE ready interrupt enable
    static constexpr uint32_t CIR_LSIRDYIE = 0x100; // LSI ready interrupt enable
    static constexpr uint32_t CIR_CSSF = 0x80; // Clock security system interrupt flag
    static constexpr uint32_t CIR_PLLSAIRDYF = 0x40; // PLLSAI ready interrupt flag
    static constexpr uint32_t CIR_PLLI2SRDYF = 0x20; // PLLI2S ready interrupt flag
    static constexpr uint32_t CIR_PLLRDYF = 0x10; // Main PLL (PLL) ready interrupt flag
    static constexpr uint32_t CIR_HSERDYF = 0x8; // HSE ready interrupt flag
    static constexpr uint32_t CIR_HSIRDYF = 0x4; // HSI ready interrupt flag
    static constexpr uint32_t CIR_LSERDYF = 0x2; // LSE ready interrupt flag
    static constexpr uint32_t CIR_LSIRDYF = 0x1; // LSI ready interrupt flag

    static constexpr uint32_t AHB1RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB1RSTR_OTGHSRST = 0x20000000; // USB OTG HS module reset
    static constexpr uint32_t AHB1RSTR_ETHMACRST = 0x2000000; // Ethernet MAC reset
    static constexpr uint32_t AHB1RSTR_DMA2DRST = 0x800000; // DMA2D reset
    static constexpr uint32_t AHB1RSTR_DMA2RST = 0x400000; // DMA2 reset
    static constexpr uint32_t AHB1RSTR_DMA1RST = 0x200000; // DMA2 reset
    static constexpr uint32_t AHB1RSTR_CRCRST = 0x1000; // CRC reset
    static constexpr uint32_t AHB1RSTR_GPIOKRST = 0x400; // IO port K reset
    static constexpr uint32_t AHB1RSTR_GPIOJRST = 0x200; // IO port J reset
    static constexpr uint32_t AHB1RSTR_GPIOIRST = 0x100; // IO port I reset
    static constexpr uint32_t AHB1RSTR_GPIOHRST = 0x80; // IO port H reset
    static constexpr uint32_t AHB1RSTR_GPIOGRST = 0x40; // IO port G reset
    static constexpr uint32_t AHB1RSTR_GPIOFRST = 0x20; // IO port F reset
    static constexpr uint32_t AHB1RSTR_GPIOERST = 0x10; // IO port E reset
    static constexpr uint32_t AHB1RSTR_GPIODRST = 0x8; // IO port D reset
    static constexpr uint32_t AHB1RSTR_GPIOCRST = 0x4; // IO port C reset
    static constexpr uint32_t AHB1RSTR_GPIOBRST = 0x2; // IO port B reset
    static constexpr uint32_t AHB1RSTR_GPIOARST = 0x1; // IO port A reset

    static constexpr uint32_t AHB2RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB2RSTR_OTGFSRST = 0x80; // USB OTG FS module reset
    static constexpr uint32_t AHB2RSTR_RNGRST = 0x40; // Random number generator module reset
    static constexpr uint32_t AHB2RSTR_HSAHRST = 0x20; // Hash module reset
    static constexpr uint32_t AHB2RSTR_CRYPRST = 0x10; // Cryptographic module reset
    static constexpr uint32_t AHB2RSTR_DCMIRST = 0x1; // Camera interface reset

    static constexpr uint32_t AHB3RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB3RSTR_FMCRST = 0x1; // Flexible memory controller module reset
    static constexpr uint32_t AHB3RSTR_QSPIRST = 0x2; // QUADSPI memory controller reset


    static constexpr uint32_t APB1RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1RSTR_TIM2RST = 0x1; // TIM2 reset
    static constexpr uint32_t APB1RSTR_TIM3RST = 0x2; // TIM3 reset
    static constexpr uint32_t APB1RSTR_TIM4RST = 0x4; // TIM4 reset
    static constexpr uint32_t APB1RSTR_TIM5RST = 0x8; // TIM5 reset
    static constexpr uint32_t APB1RSTR_TIM6RST = 0x10; // TIM6 reset
    static constexpr uint32_t APB1RSTR_TIM7RST = 0x20; // TIM7 reset
    static constexpr uint32_t APB1RSTR_TIM12RST = 0x40; // TIM12 reset
    static constexpr uint32_t APB1RSTR_TIM13RST = 0x80; // TIM13 reset
    static constexpr uint32_t APB1RSTR_TIM14RST = 0x100; // TIM14 reset
    static constexpr uint32_t APB1RSTR_WWDGRST = 0x800; // Window watchdog reset
    static constexpr uint32_t APB1RSTR_SPI2RST = 0x4000; // SPI 2 reset
    static constexpr uint32_t APB1RSTR_SPI3RST = 0x8000; // SPI 3 reset
    static constexpr uint32_t APB1RSTR_UART2RST = 0x20000; // USART 2 reset
    static constexpr uint32_t APB1RSTR_UART3RST = 0x40000; // USART 3 reset
    static constexpr uint32_t APB1RSTR_UART4RST = 0x80000; // USART 4 reset
    static constexpr uint32_t APB1RSTR_UART5RST = 0x100000; // USART 5 reset
    static constexpr uint32_t APB1RSTR_I2C1RST = 0x200000; // I2C 1 reset
    static constexpr uint32_t APB1RSTR_I2C2RST = 0x400000; // I2C 2 reset
    static constexpr uint32_t APB1RSTR_I2C3RST = 0x800000; // I2C3 reset
    static constexpr uint32_t APB1RSTR_CAN1RST = 0x2000000; // CAN1 reset
    static constexpr uint32_t APB1RSTR_CAN2RST = 0x4000000; // CAN2 reset
    static constexpr uint32_t APB1RSTR_PWRRST = 0x10000000; // Power interface reset
    static constexpr uint32_t APB1RSTR_DACRST = 0x20000000; // DAC reset
    static constexpr uint32_t APB1RSTR_UART7RST = 0x40000000; // UART7 reset
    static constexpr uint32_t APB1RSTR_UART8RST = 0x80000000; // UART8 reset

    static constexpr uint32_t APB2RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2RSTR_TIM1RST = 0x1; // TIM1 reset
    static constexpr uint32_t APB2RSTR_TIM8RST = 0x2; // TIM8 reset
    static constexpr uint32_t APB2RSTR_USART1RST = 0x10; // USART1 reset
    static constexpr uint32_t APB2RSTR_USART6RST = 0x20; // USART6 reset
    static constexpr uint32_t APB2RSTR_ADCRST = 0x100; // ADC interface reset (common to all ADCs)
    static constexpr uint32_t APB2RSTR_SDIORST = 0x800; // SDIO reset
    static constexpr uint32_t APB2RSTR_SPI1RST = 0x1000; // SPI 1 reset
    static constexpr uint32_t APB2RSTR_SPI4RST = 0x2000; // SPI4 reset
    static constexpr uint32_t APB2RSTR_SYSCFGRST = 0x4000; // System configuration controller reset
    static constexpr uint32_t APB2RSTR_TIM9RST = 0x10000; // TIM9 reset
    static constexpr uint32_t APB2RSTR_TIM10RST = 0x20000; // TIM10 reset
    static constexpr uint32_t APB2RSTR_TIM11RST = 0x40000; // TIM11 reset
    static constexpr uint32_t APB2RSTR_SPI5RST = 0x100000; // SPI5 reset
    static constexpr uint32_t APB2RSTR_SPI6RST = 0x200000; // SPI6 reset
    static constexpr uint32_t APB2RSTR_SAI1RST = 0x400000; // SAI1 reset
    static constexpr uint32_t APB2RSTR_LTDCRST = 0x4000000; // LTDC reset
    static constexpr uint32_t APB2RSTR_DSIRST = 0x8000000; // DSI host reset


    static constexpr uint32_t AHB1ENR_RESET_VALUE = 0x100000; // Reset value
    static constexpr uint32_t AHB1ENR_OTGHSULPIEN = 0x40000000; // USB OTG HSULPI clock enable
    static constexpr uint32_t AHB1ENR_OTGHSEN = 0x20000000; // USB OTG HS clock enable
    static constexpr uint32_t AHB1ENR_ETHMACPTPEN = 0x10000000; // Ethernet PTP clock enable
    static constexpr uint32_t AHB1ENR_ETHMACRXEN = 0x8000000; // Ethernet Reception clock enable
    static constexpr uint32_t AHB1ENR_ETHMACTXEN = 0x4000000; // Ethernet Transmission clock enable
    static constexpr uint32_t AHB1ENR_ETHMACEN = 0x2000000; // Ethernet MAC clock enable
    static constexpr uint32_t AHB1ENR_DMA2DEN = 0x800000; // DMA2D clock enable
    static constexpr uint32_t AHB1ENR_DMA2EN = 0x400000; // DMA2 clock enable
    static constexpr uint32_t AHB1ENR_DMA1EN = 0x200000; // DMA1 clock enable
    static constexpr uint32_t AHB1ENR_CCMDATARAMEN = 0x100000; // CCM data RAM clock enable
    static constexpr uint32_t AHB1ENR_BKPSRAMEN = 0x40000; // Backup SRAM interface clock enable
    static constexpr uint32_t AHB1ENR_CRCEN = 0x1000; // CRC clock enable
    static constexpr uint32_t AHB1ENR_GPIOKEN = 0x400; // IO port K clock enable
    static constexpr uint32_t AHB1ENR_GPIOJEN = 0x200; // IO port J clock enable
    static constexpr uint32_t AHB1ENR_GPIOIEN = 0x100; // IO port I clock enable
    static constexpr uint32_t AHB1ENR_GPIOHEN = 0x80; // IO port H clock enable
    static constexpr uint32_t AHB1ENR_GPIOGEN = 0x40; // IO port G clock enable
    static constexpr uint32_t AHB1ENR_GPIOFEN = 0x20; // IO port F clock enable
    static constexpr uint32_t AHB1ENR_GPIOEEN = 0x10; // IO port E clock enable
    static constexpr uint32_t AHB1ENR_GPIODEN = 0x8; // IO port D clock enable
    static constexpr uint32_t AHB1ENR_GPIOCEN = 0x4; // IO port C clock enable
    static constexpr uint32_t AHB1ENR_GPIOBEN = 0x2; // IO port B clock enable
    static constexpr uint32_t AHB1ENR_GPIOAEN = 0x1; // IO port A clock enable

    static constexpr uint32_t AHB2ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB2ENR_OTGFSEN = 0x80; // USB OTG FS clock enable
    static constexpr uint32_t AHB2ENR_RNGEN = 0x40; // Random number generator clock enable
    static constexpr uint32_t AHB2ENR_HASHEN = 0x20; // Hash modules clock enable
    static constexpr uint32_t AHB2ENR_CRYPEN = 0x10; // Cryptographic modules clock enable
    static constexpr uint32_t AHB2ENR_DCMIEN = 0x1; // Camera interface enable

    static constexpr uint32_t AHB3ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB3ENR_FMCEN = 0x1; // Flexible memory controller module clock enable
    static constexpr uint32_t AHB3ENR_QSPIEN = 0x2; // QUADSPI memory controller module clock enable


    static constexpr uint32_t APB1ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1ENR_TIM2EN = 0x1; // TIM2 clock enable
    static constexpr uint32_t APB1ENR_TIM3EN = 0x2; // TIM3 clock enable
    static constexpr uint32_t APB1ENR_TIM4EN = 0x4; // TIM4 clock enable
    static constexpr uint32_t APB1ENR_TIM5EN = 0x8; // TIM5 clock enable
    static constexpr uint32_t APB1ENR_TIM6EN = 0x10; // TIM6 clock enable
    static constexpr uint32_t APB1ENR_TIM7EN = 0x20; // TIM7 clock enable
    static constexpr uint32_t APB1ENR_TIM12EN = 0x40; // TIM12 clock enable
    static constexpr uint32_t APB1ENR_TIM13EN = 0x80; // TIM13 clock enable
    static constexpr uint32_t APB1ENR_TIM14EN = 0x100; // TIM14 clock enable
    static constexpr uint32_t APB1ENR_WWDGEN = 0x800; // Window watchdog clock enable
    static constexpr uint32_t APB1ENR_SPI2EN = 0x4000; // SPI2 clock enable
    static constexpr uint32_t APB1ENR_SPI3EN = 0x8000; // SPI3 clock enable
    static constexpr uint32_t APB1ENR_USART2EN = 0x20000; // USART 2 clock enable
    static constexpr uint32_t APB1ENR_USART3EN = 0x40000; // USART3 clock enable
    static constexpr uint32_t APB1ENR_UART4EN = 0x80000; // UART4 clock enable
    static constexpr uint32_t APB1ENR_UART5EN = 0x100000; // UART5 clock enable
    static constexpr uint32_t APB1ENR_I2C1EN = 0x200000; // I2C1 clock enable
    static constexpr uint32_t APB1ENR_I2C2EN = 0x400000; // I2C2 clock enable
    static constexpr uint32_t APB1ENR_I2C3EN = 0x800000; // I2C3 clock enable
    static constexpr uint32_t APB1ENR_CAN1EN = 0x2000000; // CAN 1 clock enable
    static constexpr uint32_t APB1ENR_CAN2EN = 0x4000000; // CAN 2 clock enable
    static constexpr uint32_t APB1ENR_PWREN = 0x10000000; // Power interface clock enable
    static constexpr uint32_t APB1ENR_DACEN = 0x20000000; // DAC interface clock enable
    static constexpr uint32_t APB1ENR_UART7ENR = 0x40000000; // UART7 clock enable
    static constexpr uint32_t APB1ENR_UART8ENR = 0x80000000; // UART8 clock enable

    static constexpr uint32_t APB2ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2ENR_TIM1EN = 0x1; // TIM1 clock enable
    static constexpr uint32_t APB2ENR_TIM8EN = 0x2; // TIM8 clock enable
    static constexpr uint32_t APB2ENR_USART1EN = 0x10; // USART1 clock enable
    static constexpr uint32_t APB2ENR_USART6EN = 0x20; // USART6 clock enable
    static constexpr uint32_t APB2ENR_ADC1EN = 0x100; // ADC1 clock enable
    static constexpr uint32_t APB2ENR_ADC2EN = 0x200; // ADC2 clock enable
    static constexpr uint32_t APB2ENR_ADC3EN = 0x400; // ADC3 clock enable
    static constexpr uint32_t APB2ENR_SDIOEN = 0x800; // SDIO clock enable
    static constexpr uint32_t APB2ENR_SPI1EN = 0x1000; // SPI1 clock enable
    static constexpr uint32_t APB2ENR_SPI4ENR = 0x2000; // SPI4 clock enable
    static constexpr uint32_t APB2ENR_SYSCFGEN = 0x4000; // System configuration controller clock enable
    static constexpr uint32_t APB2ENR_TIM9EN = 0x10000; // TIM9 clock enable
    static constexpr uint32_t APB2ENR_TIM10EN = 0x20000; // TIM10 clock enable
    static constexpr uint32_t APB2ENR_TIM11EN = 0x40000; // TIM11 clock enable
    static constexpr uint32_t APB2ENR_SPI5ENR = 0x100000; // SPI5 clock enable
    static constexpr uint32_t APB2ENR_SPI6ENR = 0x200000; // SPI6 clock enable
    static constexpr uint32_t APB2ENR_SAI1EN = 0x400000; // SAI1 clock enable
    static constexpr uint32_t APB2ENR_LTDCEN = 0x4000000; // LTDC clock enable
    static constexpr uint32_t APB2ENR_DSIEN = 0x8000000; // DSI clocks enable


    static constexpr uint32_t AHB1LPENR_RESET_VALUE = 0x7e6791ff; // Reset value
    static constexpr uint32_t AHB1LPENR_GPIOALPEN = 0x1; // IO port A clock enable during sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOBLPEN = 0x2; // IO port B clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOCLPEN = 0x4; // IO port C clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_GPIODLPEN = 0x8; // IO port D clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOELPEN = 0x10; // IO port E clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOFLPEN = 0x20; // IO port F clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOGLPEN = 0x40; // IO port G clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOHLPEN = 0x80; // IO port H clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOILPEN = 0x100; // IO port I clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOJLPEN = 0x200; // IO port J clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_GPIOKLPEN = 0x400; // IO port K clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_CRCLPEN = 0x1000; // CRC clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_FLITFLPEN = 0x8000; // Flash interface clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_SRAM1LPEN = 0x10000; // SRAM 1interface clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_SRAM2LPEN = 0x20000; // SRAM 2 interface clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_BKPSRAMLPEN = 0x40000; // Backup SRAM interface clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_SRAM3LPEN = 0x80000; // SRAM 3 interface clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_DMA1LPEN = 0x200000; // DMA1 clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_DMA2LPEN = 0x400000; // DMA2 clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_DMA2DLPEN = 0x800000; // DMA2D clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_ETHMACLPEN = 0x2000000; // Ethernet MAC clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_ETHMACTXLPEN = 0x4000000; // Ethernet transmission clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_ETHMACRXLPEN = 0x8000000; // Ethernet reception clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_ETHMACPTPLPEN = 0x10000000; // Ethernet PTP clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_OTGHSLPEN = 0x20000000; // USB OTG HS clock enable during Sleep mode
    static constexpr uint32_t AHB1LPENR_OTGHSULPILPEN = 0x40000000; // USB OTG HS ULPI clock enable during Sleep mode

    static constexpr uint32_t AHB2LPENR_RESET_VALUE = 0xf1; // Reset value
    static constexpr uint32_t AHB2LPENR_OTGFSLPEN = 0x80; // USB OTG FS clock enable during Sleep mode
    static constexpr uint32_t AHB2LPENR_RNGLPEN = 0x40; // Random number generator clock enable during Sleep mode
    static constexpr uint32_t AHB2LPENR_HASHLPEN = 0x20; // Hash modules clock enable during Sleep mode
    static constexpr uint32_t AHB2LPENR_CRYPLPEN = 0x10; // Cryptography modules clock enable during Sleep mode
    static constexpr uint32_t AHB2LPENR_DCMILPEN = 0x1; // Camera interface enable during Sleep mode

    static constexpr uint32_t AHB3LPENR_RESET_VALUE = 0x1; // Reset value
    static constexpr uint32_t AHB3LPENR_FMCLPEN = 0x1; // Flexible memory controller module clock enable during Sleep mode
    static constexpr uint32_t AHB3LPENR_QSPILPEN = 0x2; // QUADSPI memory controller module clock enable during Sleep mode


    static constexpr uint32_t APB1LPENR_RESET_VALUE = 0x36fec9ff; // Reset value
    static constexpr uint32_t APB1LPENR_TIM2LPEN = 0x1; // TIM2 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM3LPEN = 0x2; // TIM3 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM4LPEN = 0x4; // TIM4 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM5LPEN = 0x8; // TIM5 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM6LPEN = 0x10; // TIM6 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM7LPEN = 0x20; // TIM7 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM12LPEN = 0x40; // TIM12 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM13LPEN = 0x80; // TIM13 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM14LPEN = 0x100; // TIM14 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_WWDGLPEN = 0x800; // Window watchdog clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_SPI2LPEN = 0x4000; // SPI2 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_SPI3LPEN = 0x8000; // SPI3 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_USART2LPEN = 0x20000; // USART2 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_USART3LPEN = 0x40000; // USART3 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_UART4LPEN = 0x80000; // UART4 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_UART5LPEN = 0x100000; // UART5 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_I2C1LPEN = 0x200000; // I2C1 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_I2C2LPEN = 0x400000; // I2C2 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_I2C3LPEN = 0x800000; // I2C3 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_CAN1LPEN = 0x2000000; // CAN 1 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_CAN2LPEN = 0x4000000; // CAN 2 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_PWRLPEN = 0x10000000; // Power interface clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_DACLPEN = 0x20000000; // DAC interface clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_UART7LPEN = 0x40000000; // UART7 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_UART8LPEN = 0x80000000; // UART8 clock enable during Sleep mode

    static constexpr uint32_t APB2LPENR_RESET_VALUE = 0x75f33; // Reset value
    static constexpr uint32_t APB2LPENR_TIM1LPEN = 0x1; // TIM1 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_TIM8LPEN = 0x2; // TIM8 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_USART1LPEN = 0x10; // USART1 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_USART6LPEN = 0x20; // USART6 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_ADC1LPEN = 0x100; // ADC1 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_ADC2LPEN = 0x200; // ADC2 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_ADC3LPEN = 0x400; // ADC 3 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_SDIOLPEN = 0x800; // SDIO clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_SPI1LPEN = 0x1000; // SPI 1 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_SPI4LPEN = 0x2000; // SPI 4 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_SYSCFGLPEN = 0x4000; // System configuration controller clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_TIM9LPEN = 0x10000; // TIM9 clock enable during sleep mode
    static constexpr uint32_t APB2LPENR_TIM10LPEN = 0x20000; // TIM10 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_TIM11LPEN = 0x40000; // TIM11 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_SPI5LPEN = 0x100000; // SPI 5 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_SPI6LPEN = 0x200000; // SPI 6 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_SAI1LPEN = 0x400000; // SAI1 clock enable
    static constexpr uint32_t APB2LPENR_LTDCLPEN = 0x4000000; // LTDC clock enable
    static constexpr uint32_t APB2LPENR_DSILPEN = 0x8000000; // DSI clocks enable during Sleep mode


    static constexpr uint32_t BDCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BDCR_LSEON = 0x1; // External low-speed oscillator enable
    static constexpr uint32_t BDCR_LSERDY = 0x2; // External low-speed oscillator ready
    static constexpr uint32_t BDCR_LSEBYP = 0x4; // External low-speed oscillator bypass
    static constexpr uint32_t BDCR_LSEMOD = 0x8; // External low-speed oscillator mode
    static constexpr uint32_t BDCR_RTCSEL0 = 0x100; // RTC clock source selection
    static constexpr uint32_t BDCR_RTCSEL1 = 0x200; // RTC clock source selection
    static constexpr uint32_t BDCR_RTCEN = 0x8000; // RTC clock enable
    static constexpr uint32_t BDCR_BDRST = 0x10000; // Backup domain software reset

    static constexpr uint32_t CSR_RESET_VALUE = 0xe000000; // Reset value
    static constexpr uint32_t CSR_LPWRRSTF = 0x80000000; // Low-power reset flag
    static constexpr uint32_t CSR_WWDGRSTF = 0x40000000; // Window watchdog reset flag
    static constexpr uint32_t CSR_WDGRSTF = 0x20000000; // Independent watchdog reset flag
    static constexpr uint32_t CSR_SFTRSTF = 0x10000000; // Software reset flag
    static constexpr uint32_t CSR_PORRSTF = 0x8000000; // POR/PDR reset flag
    static constexpr uint32_t CSR_PADRSTF = 0x4000000; // PIN reset flag
    static constexpr uint32_t CSR_BORRSTF = 0x2000000; // BOR reset flag
    static constexpr uint32_t CSR_RMVF = 0x1000000; // Remove reset flag
    static constexpr uint32_t CSR_LSIRDY = 0x2; // Internal low-speed oscillator ready
    static constexpr uint32_t CSR_LSION = 0x1; // Internal low-speed oscillator enable


    static constexpr uint32_t SSCGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SSCGR_SSCGEN = 0x80000000; // Spread spectrum modulation enable
    static constexpr uint32_t SSCGR_SPREADSEL = 0x40000000; // Spread Select
    typedef bit_field_t<13, 0x7fff> SSCGR_INCSTEP; // Incrementation step
    typedef bit_field_t<0, 0x1fff> SSCGR_MODPER; // Modulation period

    static constexpr uint32_t PLLI2SCFGR_RESET_VALUE = 0x20003000; // Reset value
    typedef bit_field_t<28, 0x7> PLLI2SCFGR_PLLI2SR; // PLLI2S division factor for I2S clocks
    typedef bit_field_t<24, 0xf> PLLI2SCFGR_PLLI2SQ; // PLLI2S division factor for SAI1 clock
    typedef bit_field_t<6, 0x1ff> PLLI2SCFGR_PLLI2SN; // PLLI2S multiplication factor for VCO

    static constexpr uint32_t PLLSAICFGR_RESET_VALUE = 0x24003000; // Reset value
    typedef bit_field_t<6, 0x1ff> PLLSAICFGR_PLLSAIN; // PLLSAI division factor for VCO
    typedef bit_field_t<16, 0x3> PLLSAICFGR_PLLSAIP; // PLLSAI division factor for 48 MHz clock
    typedef bit_field_t<24, 0xf> PLLSAICFGR_PLLSAIQ; // PLLSAI division factor for SAI1 clock
    typedef bit_field_t<28, 0x7> PLLSAICFGR_PLLSAIR; // PLLSAI division factor for LCD clock

    static constexpr uint32_t DCKCFGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> DCKCFGR_PLLIS2DIVQ; // PLLI2S division factor for SAIs clock
    typedef bit_field_t<8, 0x1f> DCKCFGR_PLLSAIDIVQ; // PLLSAI division factor for SAIs clock
    typedef bit_field_t<16, 0x3> DCKCFGR_PLLSAIDIVR; // PLLSAIDIVR
    typedef bit_field_t<20, 0x3> DCKCFGR_SAI1ASRC; // SAI1 clock source selection
    typedef bit_field_t<22, 0x3> DCKCFGR_SAI1BSRC; // SAI1-B clock source selection
    static constexpr uint32_t DCKCFGR_TIMPRE = 0x1000000; // Timers clocks prescalers selection
    static constexpr uint32_t DCKCFGR_MSEL = 0x8000000; // 48 MHz clock source selection
    static constexpr uint32_t DCKCFGR_SDMMCSEL = 0x10000000; // SDIO clock source selection
    static constexpr uint32_t DCKCFGR_DSISEL = 0x20000000; // DSI clock source selection
};

template<>
struct peripheral_t<STM32F401, RCC>
{
    using T = stm32f401_rcc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, RCC>
{
    using T = stm32f405_rcc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, RCC>
{
    using T = stm32f405_rcc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F410, RCC>
{
    using T = stm32f410_rcc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F411, RCC>
{
    using T = stm32f411_rcc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, RCC>
{
    using T = stm32f412_rcc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, RCC>
{
    using T = stm32f413_rcc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, RCC>
{
    using T = stm32f427_rcc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, RCC>
{
    using T = stm32f429_rcc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, RCC>
{
    using T = stm32f446_rcc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, RCC>
{
    using T = stm32f469_rcc_t;
    static T& V;
};

using rcc_t = peripheral_t<svd, RCC>;

template<int INST> struct rcc_traits {};

template<> struct rcc_traits<0>
{
    using rcc = rcc_t;
    static constexpr signal_t MCO_1 = RCC_MCO_1;
    static constexpr signal_t MCO_2 = RCC_MCO_2;
    static constexpr signal_t OSC32_IN = RCC_OSC32_IN;
    static constexpr signal_t OSC32_OUT = RCC_OSC32_OUT;
    static constexpr signal_t OSC_IN = RCC_OSC_IN;
    static constexpr signal_t OSC_OUT = RCC_OSC_OUT;
};
