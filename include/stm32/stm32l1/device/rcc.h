#pragma once

////
//
//      STM32L1 RCC peripherals
//
///

// RCC: Reset and clock control

struct stm32l100_rcc_t
{
    volatile uint32_t CR; // Clock control register
    volatile uint32_t ICSCR; // Internal clock sources calibration register
    volatile uint32_t CFGR; // Clock configuration register
    volatile uint32_t CIR; // Clock interrupt register
    volatile uint32_t AHBRSTR; // AHB peripheral reset register
    volatile uint32_t APB2RSTR; // APB2 peripheral reset register
    volatile uint32_t APB1RSTR; // APB1 peripheral reset register
    volatile uint32_t AHBENR; // AHB peripheral clock enable register
    volatile uint32_t APB2ENR; // APB2 peripheral clock enable register
    volatile uint32_t APB1ENR; // APB1 peripheral clock enable register
    volatile uint32_t AHBLPENR; // AHB peripheral clock enable in low power mode register
    volatile uint32_t APB2LPENR; // APB2 peripheral clock enable in low power mode register
    volatile uint32_t APB1LPENR; // APB1 peripheral clock enable in low power mode register
    volatile uint32_t CSR; // Control/status register

    static constexpr uint32_t CR_RESET_VALUE = 0x300; // Reset value
    static constexpr uint32_t CR_RTCPRE1 = 0x40000000; // TC/LCD prescaler
    static constexpr uint32_t CR_RTCPRE0 = 0x20000000; // RTCPRE0
    static constexpr uint32_t CR_CSSON = 0x10000000; // Clock security system enable
    static constexpr uint32_t CR_PLLRDY = 0x2000000; // PLL clock ready flag
    static constexpr uint32_t CR_PLLON = 0x1000000; // PLL enable
    static constexpr uint32_t CR_HSEBYP = 0x40000; // HSE clock bypass
    static constexpr uint32_t CR_HSERDY = 0x20000; // HSE clock ready flag
    static constexpr uint32_t CR_HSEON = 0x10000; // HSE clock enable
    static constexpr uint32_t CR_MSIRDY = 0x200; // MSI clock ready flag
    static constexpr uint32_t CR_MSION = 0x100; // MSI clock enable
    static constexpr uint32_t CR_HSIRDY = 0x2; // Internal high-speed clock ready flag
    static constexpr uint32_t CR_HSION = 0x1; // Internal high-speed clock enable

    static constexpr uint32_t ICSCR_RESET_VALUE = 0xb000; // Reset value
    typedef bit_field_t<24, 0xff> ICSCR_MSITRIM; // MSI clock trimming
    typedef bit_field_t<16, 0xff> ICSCR_MSICAL; // MSI clock calibration
    typedef bit_field_t<13, 0x7> ICSCR_MSIRANGE; // MSI clock ranges
    typedef bit_field_t<8, 0x1f> ICSCR_HSITRIM; // High speed internal clock trimming
    typedef bit_field_t<0, 0xff> ICSCR_HSICAL; // nternal high speed clock calibration

    static constexpr uint32_t CFGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<28, 0x7> CFGR_MCOPRE; // Microcontroller clock output prescaler
    typedef bit_field_t<24, 0x7> CFGR_MCOSEL; // Microcontroller clock output selection
    typedef bit_field_t<22, 0x3> CFGR_PLLDIV; // PLL output division
    typedef bit_field_t<18, 0xf> CFGR_PLLMUL; // PLL multiplication factor
    static constexpr uint32_t CFGR_PLLSRC = 0x10000; // PLL entry clock source
    typedef bit_field_t<11, 0x7> CFGR_PPRE2; // APB high-speed prescaler (APB2)
    typedef bit_field_t<8, 0x7> CFGR_PPRE1; // APB low-speed prescaler (APB1)
    typedef bit_field_t<4, 0xf> CFGR_HPRE; // AHB prescaler
    typedef bit_field_t<2, 0x3> CFGR_SWS; // System clock switch status
    typedef bit_field_t<0, 0x3> CFGR_SW; // System clock switch

    static constexpr uint32_t CIR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CIR_CSSC = 0x800000; // Clock security system interrupt clear
    static constexpr uint32_t CIR_MSIRDYC = 0x200000; // MSI ready interrupt clear
    static constexpr uint32_t CIR_PLLRDYC = 0x100000; // PLL ready interrupt clear
    static constexpr uint32_t CIR_HSERDYC = 0x80000; // HSE ready interrupt clear
    static constexpr uint32_t CIR_HSIRDYC = 0x40000; // HSI ready interrupt clear
    static constexpr uint32_t CIR_LSERDYC = 0x20000; // LSE ready interrupt clear
    static constexpr uint32_t CIR_LSIRDYC = 0x10000; // LSI ready interrupt clear
    static constexpr uint32_t CIR_MSIRDYIE = 0x2000; // MSI ready interrupt enable
    static constexpr uint32_t CIR_PLLRDYIE = 0x1000; // PLL ready interrupt enable
    static constexpr uint32_t CIR_HSERDYIE = 0x800; // HSE ready interrupt enable
    static constexpr uint32_t CIR_HSIRDYIE = 0x400; // HSI ready interrupt enable
    static constexpr uint32_t CIR_LSERDYIE = 0x200; // LSE ready interrupt enable
    static constexpr uint32_t CIR_LSIRDYIE = 0x100; // LSI ready interrupt enable
    static constexpr uint32_t CIR_CSSF = 0x80; // Clock security system interrupt flag
    static constexpr uint32_t CIR_MSIRDYF = 0x20; // MSI ready interrupt flag
    static constexpr uint32_t CIR_PLLRDYF = 0x10; // PLL ready interrupt flag
    static constexpr uint32_t CIR_HSERDYF = 0x8; // HSE ready interrupt flag
    static constexpr uint32_t CIR_HSIRDYF = 0x4; // HSI ready interrupt flag
    static constexpr uint32_t CIR_LSERDYF = 0x2; // LSE ready interrupt flag
    static constexpr uint32_t CIR_LSIRDYF = 0x1; // LSI ready interrupt flag

    static constexpr uint32_t AHBRSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHBRSTR_FSMCRST = 0x40000000; // FSMC reset
    static constexpr uint32_t AHBRSTR_DMA2RST = 0x2000000; // DMA2 reset
    static constexpr uint32_t AHBRSTR_DMA1RST = 0x1000000; // DMA1 reset
    static constexpr uint32_t AHBRSTR_FLASHRST = 0x8000; // FLITF reset
    static constexpr uint32_t AHBRSTR_CRCRST = 0x1000; // CRC reset
    static constexpr uint32_t AHBRSTR_GPIOGRST = 0x80; // IO port G reset
    static constexpr uint32_t AHBRSTR_GPIOFRST = 0x40; // IO port F reset
    static constexpr uint32_t AHBRSTR_GPIOHRST = 0x20; // IO port H reset
    static constexpr uint32_t AHBRSTR_GPIOERST = 0x10; // IO port E reset
    static constexpr uint32_t AHBRSTR_GPIODRST = 0x8; // IO port D reset
    static constexpr uint32_t AHBRSTR_GPIOCRST = 0x4; // IO port C reset
    static constexpr uint32_t AHBRSTR_GPIOBRST = 0x2; // IO port B reset
    static constexpr uint32_t AHBRSTR_GPIOARST = 0x1; // IO port A reset

    static constexpr uint32_t APB2RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2RSTR_USART1RST = 0x4000; // USART1RST
    static constexpr uint32_t APB2RSTR_SPI1RST = 0x1000; // SPI1RST
    static constexpr uint32_t APB2RSTR_SDIORST = 0x800; // SDIORST
    static constexpr uint32_t APB2RSTR_ADC1RST = 0x200; // ADC1RST
    static constexpr uint32_t APB2RSTR_TM11RST = 0x10; // TM11RST
    static constexpr uint32_t APB2RSTR_TM10RST = 0x8; // TM10RST
    static constexpr uint32_t APB2RSTR_TIM9RST = 0x4; // TIM9RST
    static constexpr uint32_t APB2RSTR_SYSCFGRST = 0x1; // SYSCFGRST

    static constexpr uint32_t APB1RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1RSTR_COMPRST = 0x80000000; // COMP interface reset
    static constexpr uint32_t APB1RSTR_DACRST = 0x20000000; // DAC interface reset
    static constexpr uint32_t APB1RSTR_PWRRST = 0x10000000; // Power interface reset
    static constexpr uint32_t APB1RSTR_USBRST = 0x800000; // USB reset
    static constexpr uint32_t APB1RSTR_I2C2RST = 0x400000; // I2C 2 reset
    static constexpr uint32_t APB1RSTR_I2C1RST = 0x200000; // I2C 1 reset
    static constexpr uint32_t APB1RSTR_UART5RST = 0x100000; // UART 5 reset
    static constexpr uint32_t APB1RSTR_UART4RST = 0x80000; // UART 4 reset
    static constexpr uint32_t APB1RSTR_USART3RST = 0x40000; // USART 3 reset
    static constexpr uint32_t APB1RSTR_USART2RST = 0x20000; // USART 2 reset
    static constexpr uint32_t APB1RSTR_SPI3RST = 0x8000; // SPI 3 reset
    static constexpr uint32_t APB1RSTR_SPI2RST = 0x4000; // SPI 2 reset
    static constexpr uint32_t APB1RSTR_WWDRST = 0x800; // Window watchdog reset
    static constexpr uint32_t APB1RSTR_LCDRST = 0x200; // LCD reset
    static constexpr uint32_t APB1RSTR_TIM7RST = 0x20; // Timer 7 reset
    static constexpr uint32_t APB1RSTR_TIM6RST = 0x10; // Timer 6reset
    static constexpr uint32_t APB1RSTR_TIM5RST = 0x8; // Timer 5 reset
    static constexpr uint32_t APB1RSTR_TIM4RST = 0x4; // Timer 4 reset
    static constexpr uint32_t APB1RSTR_TIM3RST = 0x2; // Timer 3 reset
    static constexpr uint32_t APB1RSTR_TIM2RST = 0x1; // Timer 2 reset

    static constexpr uint32_t AHBENR_RESET_VALUE = 0x8000; // Reset value
    static constexpr uint32_t AHBENR_FSMCEN = 0x40000000; // FSMCEN
    static constexpr uint32_t AHBENR_DMA2EN = 0x2000000; // DMA2 clock enable
    static constexpr uint32_t AHBENR_DMA1EN = 0x1000000; // DMA1 clock enable
    static constexpr uint32_t AHBENR_FLASHEN = 0x8000; // FLITF clock enable
    static constexpr uint32_t AHBENR_CRCEN = 0x1000; // CRC clock enable
    static constexpr uint32_t AHBENR_GPIOPGEN = 0x80; // IO port G clock enable
    static constexpr uint32_t AHBENR_GPIOPFEN = 0x40; // IO port F clock enable
    static constexpr uint32_t AHBENR_GPIOPHEN = 0x20; // IO port H clock enable
    static constexpr uint32_t AHBENR_GPIOPEEN = 0x10; // IO port E clock enable
    static constexpr uint32_t AHBENR_GPIOPDEN = 0x8; // IO port D clock enable
    static constexpr uint32_t AHBENR_GPIOPCEN = 0x4; // IO port C clock enable
    static constexpr uint32_t AHBENR_GPIOPBEN = 0x2; // IO port B clock enable
    static constexpr uint32_t AHBENR_GPIOPAEN = 0x1; // IO port A clock enable

    static constexpr uint32_t APB2ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2ENR_USART1EN = 0x4000; // USART1 clock enable
    static constexpr uint32_t APB2ENR_SPI1EN = 0x1000; // SPI 1 clock enable
    static constexpr uint32_t APB2ENR_SDIOEN = 0x800; // SDIO clock enable
    static constexpr uint32_t APB2ENR_ADC1EN = 0x200; // ADC1 interface clock enable
    static constexpr uint32_t APB2ENR_TIM11EN = 0x10; // TIM11 timer clock enable
    static constexpr uint32_t APB2ENR_TIM10EN = 0x8; // TIM10 timer clock enable
    static constexpr uint32_t APB2ENR_TIM9EN = 0x4; // TIM9 timer clock enable
    static constexpr uint32_t APB2ENR_SYSCFGEN = 0x1; // System configuration controller clock enable

    static constexpr uint32_t APB1ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1ENR_COMPEN = 0x80000000; // COMP interface clock enable
    static constexpr uint32_t APB1ENR_DACEN = 0x20000000; // DAC interface clock enable
    static constexpr uint32_t APB1ENR_PWREN = 0x10000000; // Power interface clock enable
    static constexpr uint32_t APB1ENR_USBEN = 0x800000; // USB clock enable
    static constexpr uint32_t APB1ENR_I2C2EN = 0x400000; // I2C 2 clock enable
    static constexpr uint32_t APB1ENR_I2C1EN = 0x200000; // I2C 1 clock enable
    static constexpr uint32_t APB1ENR_USART5EN = 0x100000; // UART 5 clock enable
    static constexpr uint32_t APB1ENR_USART4EN = 0x80000; // UART 4 clock enable
    static constexpr uint32_t APB1ENR_USART3EN = 0x40000; // USART 3 clock enable
    static constexpr uint32_t APB1ENR_USART2EN = 0x20000; // USART 2 clock enable
    static constexpr uint32_t APB1ENR_SPI3EN = 0x8000; // SPI 3 clock enable
    static constexpr uint32_t APB1ENR_SPI2EN = 0x4000; // SPI 2 clock enable
    static constexpr uint32_t APB1ENR_WWDGEN = 0x800; // Window watchdog clock enable
    static constexpr uint32_t APB1ENR_LCDEN = 0x200; // LCD clock enable
    static constexpr uint32_t APB1ENR_TIM7EN = 0x20; // Timer 7 clock enable
    static constexpr uint32_t APB1ENR_TIM6EN = 0x10; // Timer 6 clock enable
    static constexpr uint32_t APB1ENR_TIM5EN = 0x8; // Timer 5 clock enable
    static constexpr uint32_t APB1ENR_TIM4EN = 0x4; // Timer 4 clock enable
    static constexpr uint32_t APB1ENR_TIM3EN = 0x2; // Timer 3 clock enable
    static constexpr uint32_t APB1ENR_TIM2EN = 0x1; // Timer 2 clock enable

    static constexpr uint32_t AHBLPENR_RESET_VALUE = 0x101903f; // Reset value
    static constexpr uint32_t AHBLPENR_DMA2LPEN = 0x2000000; // DMA2 clock enable during Sleep mode
    static constexpr uint32_t AHBLPENR_DMA1LPEN = 0x1000000; // DMA1 clock enable during Sleep mode
    static constexpr uint32_t AHBLPENR_SRAMLPEN = 0x10000; // SRAM clock enable during Sleep mode
    static constexpr uint32_t AHBLPENR_FLITFLPEN = 0x8000; // FLITF clock enable during Sleep mode
    static constexpr uint32_t AHBLPENR_CRCLPEN = 0x1000; // CRC clock enable during Sleep mode
    static constexpr uint32_t AHBLPENR_GPIOGLPEN = 0x80; // IO port G clock enable during Sleep mode
    static constexpr uint32_t AHBLPENR_GPIOFLPEN = 0x40; // IO port F clock enable during Sleep mode
    static constexpr uint32_t AHBLPENR_GPIOHLPEN = 0x20; // IO port H clock enable during Sleep mode
    static constexpr uint32_t AHBLPENR_GPIOELPEN = 0x10; // IO port E clock enable during Sleep mode
    static constexpr uint32_t AHBLPENR_GPIODLPEN = 0x8; // IO port D clock enable during Sleep mode
    static constexpr uint32_t AHBLPENR_GPIOCLPEN = 0x4; // IO port C clock enable during Sleep mode
    static constexpr uint32_t AHBLPENR_GPIOBLPEN = 0x2; // IO port B clock enable during Sleep mode
    static constexpr uint32_t AHBLPENR_GPIOALPEN = 0x1; // IO port A clock enable during Sleep mode

    static constexpr uint32_t APB2LPENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2LPENR_USART1LPEN = 0x4000; // USART1 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_SPI1LPEN = 0x1000; // SPI 1 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_SDIOLPEN = 0x800; // SDIO clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_ADC1LPEN = 0x200; // ADC1 interface clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_TIM11LPEN = 0x10; // TIM11 timer clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_TIM10LPEN = 0x8; // TIM10 timer clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_TIM9LPEN = 0x4; // TIM9 timer clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_SYSCFGLPEN = 0x1; // System configuration controller clock enable during Sleep mode

    static constexpr uint32_t APB1LPENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1LPENR_COMPLPEN = 0x80000000; // COMP interface clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_DACLPEN = 0x20000000; // DAC interface clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_PWRLPEN = 0x10000000; // Power interface clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_USBLPEN = 0x800000; // USB clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_I2C2LPEN = 0x400000; // I2C 2 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_I2C1LPEN = 0x200000; // I2C 1 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_USART3LPEN = 0x40000; // USART 3 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_USART2LPEN = 0x20000; // USART 2 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_SPI2LPEN = 0x4000; // SPI 2 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_WWDGLPEN = 0x800; // Window watchdog clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_LCDLPEN = 0x200; // LCD clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM7LPEN = 0x20; // Timer 7 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM6LPEN = 0x10; // Timer 6 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM4LPEN = 0x4; // Timer 4 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM3LPEN = 0x2; // Timer 3 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM2LPEN = 0x1; // Timer 2 clock enable during Sleep mode

    static constexpr uint32_t CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CSR_LPWRSTF = 0x80000000; // Low-power reset flag
    static constexpr uint32_t CSR_WWDGRSTF = 0x40000000; // Window watchdog reset flag
    static constexpr uint32_t CSR_IWDGRSTF = 0x20000000; // Independent watchdog reset flag
    static constexpr uint32_t CSR_SFTRSTF = 0x10000000; // Software reset flag
    static constexpr uint32_t CSR_PORRSTF = 0x8000000; // POR/PDR reset flag
    static constexpr uint32_t CSR_PINRSTF = 0x4000000; // PIN reset flag
    static constexpr uint32_t CSR_RMVF = 0x1000000; // Remove reset flag
    static constexpr uint32_t CSR_RTCRST = 0x800000; // RTC software reset
    static constexpr uint32_t CSR_RTCEN = 0x400000; // RTC clock enable
    typedef bit_field_t<16, 0x3> CSR_RTCSEL; // RTC and LCD clock source selection
    static constexpr uint32_t CSR_LSEBYP = 0x400; // External low-speed oscillator bypass
    static constexpr uint32_t CSR_LSERDY = 0x200; // External low-speed oscillator ready
    static constexpr uint32_t CSR_LSEON = 0x100; // External low-speed oscillator enable
    static constexpr uint32_t CSR_LSIRDY = 0x2; // Internal low-speed oscillator ready
    static constexpr uint32_t CSR_LSION = 0x1; // Internal low-speed oscillator enable
};

// RCC: Reset and clock control

struct stm32l152_rcc_t
{
    volatile uint32_t CR; // Clock control register
    volatile uint32_t ICSCR; // Internal clock sources calibration register
    volatile uint32_t CFGR; // Clock configuration register
    volatile uint32_t CIR; // Clock interrupt register
    volatile uint32_t AHBRSTR; // AHB peripheral reset register
    volatile uint32_t APB2RSTR; // APB2 peripheral reset register
    volatile uint32_t APB1RSTR; // APB1 peripheral reset register
    volatile uint32_t AHBENR; // AHB peripheral clock enable register
    volatile uint32_t APB2ENR; // APB2 peripheral clock enable register
    volatile uint32_t APB1ENR; // APB1 peripheral clock enable register
    volatile uint32_t AHBLPENR; // AHB peripheral clock enable in low power mode register
    volatile uint32_t APB2LPENR; // APB2 peripheral clock enable in low power mode register
    volatile uint32_t APB1LPENR; // APB1 peripheral clock enable in low power mode register
    volatile uint32_t CSR; // Control/status register

    static constexpr uint32_t CR_RESET_VALUE = 0x300; // Reset value
    static constexpr uint32_t CR_RTCPRE1 = 0x40000000; // TC/LCD prescaler
    static constexpr uint32_t CR_RTCPRE0 = 0x20000000; // RTCPRE0
    static constexpr uint32_t CR_CSSON = 0x10000000; // Clock security system enable
    static constexpr uint32_t CR_PLLRDY = 0x2000000; // PLL clock ready flag
    static constexpr uint32_t CR_PLLON = 0x1000000; // PLL enable
    static constexpr uint32_t CR_HSEBYP = 0x40000; // HSE clock bypass
    static constexpr uint32_t CR_HSERDY = 0x20000; // HSE clock ready flag
    static constexpr uint32_t CR_HSEON = 0x10000; // HSE clock enable
    static constexpr uint32_t CR_MSIRDY = 0x200; // MSI clock ready flag
    static constexpr uint32_t CR_MSION = 0x100; // MSI clock enable
    static constexpr uint32_t CR_HSIRDY = 0x2; // Internal high-speed clock ready flag
    static constexpr uint32_t CR_HSION = 0x1; // Internal high-speed clock enable

    static constexpr uint32_t ICSCR_RESET_VALUE = 0xb000; // Reset value
    typedef bit_field_t<24, 0xff> ICSCR_MSITRIM; // MSI clock trimming
    typedef bit_field_t<16, 0xff> ICSCR_MSICAL; // MSI clock calibration
    typedef bit_field_t<13, 0x7> ICSCR_MSIRANGE; // MSI clock ranges
    typedef bit_field_t<8, 0x1f> ICSCR_HSITRIM; // High speed internal clock trimming
    typedef bit_field_t<0, 0xff> ICSCR_HSICAL; // nternal high speed clock calibration

    static constexpr uint32_t CFGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<28, 0x7> CFGR_MCOPRE; // Microcontroller clock output prescaler
    typedef bit_field_t<24, 0x7> CFGR_MCOSEL; // Microcontroller clock output selection
    typedef bit_field_t<22, 0x3> CFGR_PLLDIV; // PLL output division
    typedef bit_field_t<18, 0xf> CFGR_PLLMUL; // PLL multiplication factor
    static constexpr uint32_t CFGR_PLLSRC = 0x10000; // PLL entry clock source
    typedef bit_field_t<11, 0x7> CFGR_PPRE2; // APB high-speed prescaler (APB2)
    typedef bit_field_t<8, 0x7> CFGR_PPRE1; // APB low-speed prescaler (APB1)
    typedef bit_field_t<4, 0xf> CFGR_HPRE; // AHB prescaler
    typedef bit_field_t<2, 0x3> CFGR_SWS; // System clock switch status
    typedef bit_field_t<0, 0x3> CFGR_SW; // System clock switch

    static constexpr uint32_t CIR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CIR_CSSC = 0x800000; // Clock security system interrupt clear
    static constexpr uint32_t CIR_MSIRDYC = 0x200000; // MSI ready interrupt clear
    static constexpr uint32_t CIR_PLLRDYC = 0x100000; // PLL ready interrupt clear
    static constexpr uint32_t CIR_HSERDYC = 0x80000; // HSE ready interrupt clear
    static constexpr uint32_t CIR_HSIRDYC = 0x40000; // HSI ready interrupt clear
    static constexpr uint32_t CIR_LSERDYC = 0x20000; // LSE ready interrupt clear
    static constexpr uint32_t CIR_LSIRDYC = 0x10000; // LSI ready interrupt clear
    static constexpr uint32_t CIR_MSIRDYIE = 0x2000; // MSI ready interrupt enable
    static constexpr uint32_t CIR_PLLRDYIE = 0x1000; // PLL ready interrupt enable
    static constexpr uint32_t CIR_HSERDYIE = 0x800; // HSE ready interrupt enable
    static constexpr uint32_t CIR_HSIRDYIE = 0x400; // HSI ready interrupt enable
    static constexpr uint32_t CIR_LSERDYIE = 0x200; // LSE ready interrupt enable
    static constexpr uint32_t CIR_LSIRDYIE = 0x100; // LSI ready interrupt enable
    static constexpr uint32_t CIR_CSSF = 0x80; // Clock security system interrupt flag
    static constexpr uint32_t CIR_MSIRDYF = 0x20; // MSI ready interrupt flag
    static constexpr uint32_t CIR_PLLRDYF = 0x10; // PLL ready interrupt flag
    static constexpr uint32_t CIR_HSERDYF = 0x8; // HSE ready interrupt flag
    static constexpr uint32_t CIR_HSIRDYF = 0x4; // HSI ready interrupt flag
    static constexpr uint32_t CIR_LSERDYF = 0x2; // LSE ready interrupt flag
    static constexpr uint32_t CIR_LSIRDYF = 0x1; // LSI ready interrupt flag
    static constexpr uint32_t CIR_LSECSSIE = 0x4000; // LSE CSS interrupt enable
    static constexpr uint32_t CIR_LSECSSC = 0x400000; // LSE CSS interrupt clear

    static constexpr uint32_t AHBRSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHBRSTR_FSMCRST = 0x40000000; // FSMC reset
    static constexpr uint32_t AHBRSTR_DMA2RST = 0x2000000; // DMA2 reset
    static constexpr uint32_t AHBRSTR_DMA1RST = 0x1000000; // DMA1 reset
    static constexpr uint32_t AHBRSTR_FLASHRST = 0x8000; // FLITF reset
    static constexpr uint32_t AHBRSTR_CRCRST = 0x1000; // CRC reset
    static constexpr uint32_t AHBRSTR_GPIOGRST = 0x80; // IO port G reset
    static constexpr uint32_t AHBRSTR_GPIOFRST = 0x40; // IO port F reset
    static constexpr uint32_t AHBRSTR_GPIOHRST = 0x20; // IO port H reset
    static constexpr uint32_t AHBRSTR_GPIOERST = 0x10; // IO port E reset
    static constexpr uint32_t AHBRSTR_GPIODRST = 0x8; // IO port D reset
    static constexpr uint32_t AHBRSTR_GPIOCRST = 0x4; // IO port C reset
    static constexpr uint32_t AHBRSTR_GPIOBRST = 0x2; // IO port B reset
    static constexpr uint32_t AHBRSTR_GPIOARST = 0x1; // IO port A reset

    static constexpr uint32_t APB2RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2RSTR_USART1RST = 0x4000; // USART1RST
    static constexpr uint32_t APB2RSTR_SPI1RST = 0x1000; // SPI1RST
    static constexpr uint32_t APB2RSTR_SDIORST = 0x800; // SDIORST
    static constexpr uint32_t APB2RSTR_ADC1RST = 0x200; // ADC1RST
    static constexpr uint32_t APB2RSTR_TM11RST = 0x10; // TM11RST
    static constexpr uint32_t APB2RSTR_TM10RST = 0x8; // TM10RST
    static constexpr uint32_t APB2RSTR_TIM9RST = 0x4; // TIM9RST
    static constexpr uint32_t APB2RSTR_SYSCFGRST = 0x1; // SYSCFGRST

    static constexpr uint32_t APB1RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1RSTR_COMPRST = 0x80000000; // COMP interface reset
    static constexpr uint32_t APB1RSTR_DACRST = 0x20000000; // DAC interface reset
    static constexpr uint32_t APB1RSTR_PWRRST = 0x10000000; // Power interface reset
    static constexpr uint32_t APB1RSTR_USBRST = 0x800000; // USB reset
    static constexpr uint32_t APB1RSTR_I2C2RST = 0x400000; // I2C 2 reset
    static constexpr uint32_t APB1RSTR_I2C1RST = 0x200000; // I2C 1 reset
    static constexpr uint32_t APB1RSTR_UART5RST = 0x100000; // UART 5 reset
    static constexpr uint32_t APB1RSTR_UART4RST = 0x80000; // UART 4 reset
    static constexpr uint32_t APB1RSTR_USART3RST = 0x40000; // USART 3 reset
    static constexpr uint32_t APB1RSTR_USART2RST = 0x20000; // USART 2 reset
    static constexpr uint32_t APB1RSTR_SPI3RST = 0x8000; // SPI 3 reset
    static constexpr uint32_t APB1RSTR_SPI2RST = 0x4000; // SPI 2 reset
    static constexpr uint32_t APB1RSTR_WWDRST = 0x800; // Window watchdog reset
    static constexpr uint32_t APB1RSTR_LCDRST = 0x200; // LCD reset
    static constexpr uint32_t APB1RSTR_TIM7RST = 0x20; // Timer 7 reset
    static constexpr uint32_t APB1RSTR_TIM6RST = 0x10; // Timer 6reset
    static constexpr uint32_t APB1RSTR_TIM5RST = 0x8; // Timer 5 reset
    static constexpr uint32_t APB1RSTR_TIM4RST = 0x4; // Timer 4 reset
    static constexpr uint32_t APB1RSTR_TIM3RST = 0x2; // Timer 3 reset
    static constexpr uint32_t APB1RSTR_TIM2RST = 0x1; // Timer 2 reset

    static constexpr uint32_t AHBENR_RESET_VALUE = 0x8000; // Reset value
    static constexpr uint32_t AHBENR_FSMCEN = 0x40000000; // FSMCEN
    static constexpr uint32_t AHBENR_DMA2EN = 0x2000000; // DMA2 clock enable
    static constexpr uint32_t AHBENR_DMA1EN = 0x1000000; // DMA1 clock enable
    static constexpr uint32_t AHBENR_FLASHEN = 0x8000; // FLITF clock enable
    static constexpr uint32_t AHBENR_CRCEN = 0x1000; // CRC clock enable
    static constexpr uint32_t AHBENR_GPIOPGEN = 0x80; // IO port G clock enable
    static constexpr uint32_t AHBENR_GPIOPFEN = 0x40; // IO port F clock enable
    static constexpr uint32_t AHBENR_GPIOPHEN = 0x20; // IO port H clock enable
    static constexpr uint32_t AHBENR_GPIOPEEN = 0x10; // IO port E clock enable
    static constexpr uint32_t AHBENR_GPIOPDEN = 0x8; // IO port D clock enable
    static constexpr uint32_t AHBENR_GPIOPCEN = 0x4; // IO port C clock enable
    static constexpr uint32_t AHBENR_GPIOPBEN = 0x2; // IO port B clock enable
    static constexpr uint32_t AHBENR_GPIOPAEN = 0x1; // IO port A clock enable

    static constexpr uint32_t APB2ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2ENR_USART1EN = 0x4000; // USART1 clock enable
    static constexpr uint32_t APB2ENR_SPI1EN = 0x1000; // SPI 1 clock enable
    static constexpr uint32_t APB2ENR_SDIOEN = 0x800; // SDIO clock enable
    static constexpr uint32_t APB2ENR_ADC1EN = 0x200; // ADC1 interface clock enable
    static constexpr uint32_t APB2ENR_TIM11EN = 0x10; // TIM11 timer clock enable
    static constexpr uint32_t APB2ENR_TIM10EN = 0x8; // TIM10 timer clock enable
    static constexpr uint32_t APB2ENR_TIM9EN = 0x4; // TIM9 timer clock enable
    static constexpr uint32_t APB2ENR_SYSCFGEN = 0x1; // System configuration controller clock enable

    static constexpr uint32_t APB1ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1ENR_COMPEN = 0x80000000; // COMP interface clock enable
    static constexpr uint32_t APB1ENR_DACEN = 0x20000000; // DAC interface clock enable
    static constexpr uint32_t APB1ENR_PWREN = 0x10000000; // Power interface clock enable
    static constexpr uint32_t APB1ENR_USBEN = 0x800000; // USB clock enable
    static constexpr uint32_t APB1ENR_I2C2EN = 0x400000; // I2C 2 clock enable
    static constexpr uint32_t APB1ENR_I2C1EN = 0x200000; // I2C 1 clock enable
    static constexpr uint32_t APB1ENR_USART5EN = 0x100000; // UART 5 clock enable
    static constexpr uint32_t APB1ENR_USART4EN = 0x80000; // UART 4 clock enable
    static constexpr uint32_t APB1ENR_USART3EN = 0x40000; // USART 3 clock enable
    static constexpr uint32_t APB1ENR_USART2EN = 0x20000; // USART 2 clock enable
    static constexpr uint32_t APB1ENR_SPI3EN = 0x8000; // SPI 3 clock enable
    static constexpr uint32_t APB1ENR_SPI2EN = 0x4000; // SPI 2 clock enable
    static constexpr uint32_t APB1ENR_WWDGEN = 0x800; // Window watchdog clock enable
    static constexpr uint32_t APB1ENR_LCDEN = 0x200; // LCD clock enable
    static constexpr uint32_t APB1ENR_TIM7EN = 0x20; // Timer 7 clock enable
    static constexpr uint32_t APB1ENR_TIM6EN = 0x10; // Timer 6 clock enable
    static constexpr uint32_t APB1ENR_TIM5EN = 0x8; // Timer 5 clock enable
    static constexpr uint32_t APB1ENR_TIM4EN = 0x4; // Timer 4 clock enable
    static constexpr uint32_t APB1ENR_TIM3EN = 0x2; // Timer 3 clock enable
    static constexpr uint32_t APB1ENR_TIM2EN = 0x1; // Timer 2 clock enable

    static constexpr uint32_t AHBLPENR_RESET_VALUE = 0x101903f; // Reset value
    static constexpr uint32_t AHBLPENR_DMA2LPEN = 0x2000000; // DMA2 clock enable during Sleep mode
    static constexpr uint32_t AHBLPENR_DMA1LPEN = 0x1000000; // DMA1 clock enable during Sleep mode
    static constexpr uint32_t AHBLPENR_SRAMLPEN = 0x10000; // SRAM clock enable during Sleep mode
    static constexpr uint32_t AHBLPENR_FLITFLPEN = 0x8000; // FLITF clock enable during Sleep mode
    static constexpr uint32_t AHBLPENR_CRCLPEN = 0x1000; // CRC clock enable during Sleep mode
    static constexpr uint32_t AHBLPENR_GPIOGLPEN = 0x80; // IO port G clock enable during Sleep mode
    static constexpr uint32_t AHBLPENR_GPIOFLPEN = 0x40; // IO port F clock enable during Sleep mode
    static constexpr uint32_t AHBLPENR_GPIOHLPEN = 0x20; // IO port H clock enable during Sleep mode
    static constexpr uint32_t AHBLPENR_GPIOELPEN = 0x10; // IO port E clock enable during Sleep mode
    static constexpr uint32_t AHBLPENR_GPIODLPEN = 0x8; // IO port D clock enable during Sleep mode
    static constexpr uint32_t AHBLPENR_GPIOCLPEN = 0x4; // IO port C clock enable during Sleep mode
    static constexpr uint32_t AHBLPENR_GPIOBLPEN = 0x2; // IO port B clock enable during Sleep mode
    static constexpr uint32_t AHBLPENR_GPIOALPEN = 0x1; // IO port A clock enable during Sleep mode

    static constexpr uint32_t APB2LPENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2LPENR_USART1LPEN = 0x4000; // USART1 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_SPI1LPEN = 0x1000; // SPI 1 clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_SDIOLPEN = 0x800; // SDIO clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_ADC1LPEN = 0x200; // ADC1 interface clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_TIM11LPEN = 0x10; // TIM11 timer clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_TIM10LPEN = 0x8; // TIM10 timer clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_TIM9LPEN = 0x4; // TIM9 timer clock enable during Sleep mode
    static constexpr uint32_t APB2LPENR_SYSCFGLPEN = 0x1; // System configuration controller clock enable during Sleep mode

    static constexpr uint32_t APB1LPENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1LPENR_COMPLPEN = 0x80000000; // COMP interface clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_DACLPEN = 0x20000000; // DAC interface clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_PWRLPEN = 0x10000000; // Power interface clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_USBLPEN = 0x800000; // USB clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_I2C2LPEN = 0x400000; // I2C 2 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_I2C1LPEN = 0x200000; // I2C 1 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_USART3LPEN = 0x40000; // USART 3 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_USART2LPEN = 0x20000; // USART 2 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_SPI2LPEN = 0x4000; // SPI 2 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_WWDGLPEN = 0x800; // Window watchdog clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_LCDLPEN = 0x200; // LCD clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM7LPEN = 0x20; // Timer 7 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM6LPEN = 0x10; // Timer 6 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM4LPEN = 0x4; // Timer 4 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM3LPEN = 0x2; // Timer 3 clock enable during Sleep mode
    static constexpr uint32_t APB1LPENR_TIM2LPEN = 0x1; // Timer 2 clock enable during Sleep mode

    static constexpr uint32_t CSR_RESET_VALUE = 0xc000000; // Reset value
    static constexpr uint32_t CSR_LPWRSTF = 0x80000000; // Low-power reset flag
    static constexpr uint32_t CSR_WWDGRSTF = 0x40000000; // Window watchdog reset flag
    static constexpr uint32_t CSR_IWDGRSTF = 0x20000000; // Independent watchdog reset flag
    static constexpr uint32_t CSR_SFTRSTF = 0x10000000; // Software reset flag
    static constexpr uint32_t CSR_PORRSTF = 0x8000000; // POR/PDR reset flag
    static constexpr uint32_t CSR_PINRSTF = 0x4000000; // PIN reset flag
    static constexpr uint32_t CSR_RMVF = 0x1000000; // Remove reset flag
    static constexpr uint32_t CSR_RTCRST = 0x800000; // RTC software reset
    static constexpr uint32_t CSR_RTCEN = 0x400000; // RTC clock enable
    typedef bit_field_t<16, 0x3> CSR_RTCSEL; // RTC and LCD clock source selection
    static constexpr uint32_t CSR_LSEBYP = 0x400; // External low-speed oscillator bypass
    static constexpr uint32_t CSR_LSERDY = 0x200; // External low-speed oscillator ready
    static constexpr uint32_t CSR_LSEON = 0x100; // External low-speed oscillator enable
    static constexpr uint32_t CSR_LSIRDY = 0x2; // Internal low-speed oscillator ready
    static constexpr uint32_t CSR_LSION = 0x1; // Internal low-speed oscillator enable
    static constexpr uint32_t CSR_LSECSSON = 0x800; // CSS on LSE enable
    static constexpr uint32_t CSR_LSECSSD = 0x1000; // CSS on LSE failure Detection
    static constexpr uint32_t CSR_OBLRSTF = 0x2000000; // Options bytes loading reset flag
};

template<>
struct peripheral_t<STM32L100, RCC>
{
    using T = stm32l100_rcc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L151, RCC>
{
    using T = stm32l100_rcc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L162, RCC>
{
    using T = stm32l100_rcc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L152, RCC>
{
    using T = stm32l152_rcc_t;
    static T& V;
};

using rcc_t = peripheral_t<svd, RCC>;

template<int INST> struct rcc_traits {};

template<> struct rcc_traits<0>
{
    using rcc = rcc_t;
    static constexpr signal_t MCO = RCC_MCO;
    static constexpr signal_t OSC32_IN = RCC_OSC32_IN;
    static constexpr signal_t OSC32_OUT = RCC_OSC32_OUT;
    static constexpr signal_t OSC_IN = RCC_OSC_IN;
    static constexpr signal_t OSC_OUT = RCC_OSC_OUT;
};
