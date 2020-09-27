#pragma once

////
//
//      STM32F1 RCC peripherals
//
///

// RCC: Reset and clock control

struct stm32f100_rcc_t
{
    volatile uint32_t CR; // Clock control register
    volatile uint32_t CFGR; // Clock configuration register (RCC_CFGR)
    volatile uint32_t CIR; // Clock interrupt register (RCC_CIR)
    volatile uint32_t APB2RSTR; // APB2 peripheral reset register (RCC_APB2RSTR)
    volatile uint32_t APB1RSTR; // APB1 peripheral reset register (RCC_APB1RSTR)
    volatile uint32_t AHBENR; // AHB Peripheral Clock enable register (RCC_AHBENR)
    volatile uint32_t APB2ENR; // APB2 peripheral clock enable register (RCC_APB2ENR)
    volatile uint32_t APB1ENR; // APB1 peripheral clock enable register (RCC_APB1ENR)
    volatile uint32_t BDCR; // Backup domain control register (RCC_BDCR)
    volatile uint32_t CSR; // Control/status register (RCC_CSR)
    reserved_t<0x1> _0x28;
    volatile uint32_t CFGR2; // Clock configuration register 2

    static constexpr uint32_t CR_RESET_VALUE = 0x83; // Reset value
    static constexpr uint32_t CR_HSION = 0x1; // Internal High Speed clock enable
    static constexpr uint32_t CR_HSIRDY = 0x2; // Internal High Speed clock ready flag
    typedef bit_field_t<3, 0x1f> CR_HSITRIM; // Internal High Speed clock trimming
    typedef bit_field_t<8, 0xff> CR_HSICAL; // Internal High Speed clock Calibration
    static constexpr uint32_t CR_HSEON = 0x10000; // External High Speed clock enable
    static constexpr uint32_t CR_HSERDY = 0x20000; // External High Speed clock ready flag
    static constexpr uint32_t CR_HSEBYP = 0x40000; // External High Speed clock Bypass
    static constexpr uint32_t CR_CSSON = 0x80000; // Clock Security System enable
    static constexpr uint32_t CR_PLLON = 0x1000000; // PLL enable
    static constexpr uint32_t CR_PLLRDY = 0x2000000; // PLL clock ready flag

    static constexpr uint32_t CFGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> CFGR_SW; // System clock Switch
    typedef bit_field_t<2, 0x3> CFGR_SWS; // System Clock Switch Status
    typedef bit_field_t<4, 0xf> CFGR_HPRE; // AHB prescaler
    typedef bit_field_t<8, 0x7> CFGR_PPRE1; // APB Low speed prescaler (APB1)
    typedef bit_field_t<11, 0x7> CFGR_PPRE2; // APB High speed prescaler (APB2)
    typedef bit_field_t<14, 0x3> CFGR_ADCPRE; // ADC prescaler
    static constexpr uint32_t CFGR_PLLSRC = 0x10000; // PLL entry clock source
    static constexpr uint32_t CFGR_PLLXTPRE = 0x20000; // HSE divider for PLL entry
    typedef bit_field_t<18, 0xf> CFGR_PLLMUL; // PLL Multiplication Factor
    typedef bit_field_t<24, 0x7> CFGR_MCO; // Microcontroller clock output

    static constexpr uint32_t CIR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CIR_LSIRDYF = 0x1; // LSI Ready Interrupt flag
    static constexpr uint32_t CIR_LSERDYF = 0x2; // LSE Ready Interrupt flag
    static constexpr uint32_t CIR_HSIRDYF = 0x4; // HSI Ready Interrupt flag
    static constexpr uint32_t CIR_HSERDYF = 0x8; // HSE Ready Interrupt flag
    static constexpr uint32_t CIR_PLLRDYF = 0x10; // PLL Ready Interrupt flag
    static constexpr uint32_t CIR_CSSF = 0x80; // Clock Security System Interrupt flag
    static constexpr uint32_t CIR_LSIRDYIE = 0x100; // LSI Ready Interrupt Enable
    static constexpr uint32_t CIR_LSERDYIE = 0x200; // LSE Ready Interrupt Enable
    static constexpr uint32_t CIR_HSIRDYIE = 0x400; // HSI Ready Interrupt Enable
    static constexpr uint32_t CIR_HSERDYIE = 0x800; // HSE Ready Interrupt Enable
    static constexpr uint32_t CIR_PLLRDYIE = 0x1000; // PLL Ready Interrupt Enable
    static constexpr uint32_t CIR_LSIRDYC = 0x10000; // LSI Ready Interrupt Clear
    static constexpr uint32_t CIR_LSERDYC = 0x20000; // LSE Ready Interrupt Clear
    static constexpr uint32_t CIR_HSIRDYC = 0x40000; // HSI Ready Interrupt Clear
    static constexpr uint32_t CIR_HSERDYC = 0x80000; // HSE Ready Interrupt Clear
    static constexpr uint32_t CIR_PLLRDYC = 0x100000; // PLL Ready Interrupt Clear
    static constexpr uint32_t CIR_CSSC = 0x800000; // Clock security system interrupt clear

    static constexpr uint32_t APB2RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2RSTR_AFIORST = 0x1; // Alternate function I/O reset
    static constexpr uint32_t APB2RSTR_IOPARST = 0x4; // IO port A reset
    static constexpr uint32_t APB2RSTR_IOPBRST = 0x8; // IO port B reset
    static constexpr uint32_t APB2RSTR_IOPCRST = 0x10; // IO port C reset
    static constexpr uint32_t APB2RSTR_IOPDRST = 0x20; // IO port D reset
    static constexpr uint32_t APB2RSTR_IOPERST = 0x40; // IO port E reset
    static constexpr uint32_t APB2RSTR_IOPFRST = 0x80; // IO port F reset
    static constexpr uint32_t APB2RSTR_IOPGRST = 0x100; // IO port G reset
    static constexpr uint32_t APB2RSTR_ADC1RST = 0x200; // ADC 1 interface reset
    static constexpr uint32_t APB2RSTR_TIM1RST = 0x800; // TIM1 timer reset
    static constexpr uint32_t APB2RSTR_SPI1RST = 0x1000; // SPI 1 reset
    static constexpr uint32_t APB2RSTR_USART1RST = 0x4000; // USART1 reset
    static constexpr uint32_t APB2RSTR_TIM15RST = 0x10000; // TIM15 timer reset
    static constexpr uint32_t APB2RSTR_TIM16RST = 0x20000; // TIM16 timer reset
    static constexpr uint32_t APB2RSTR_TIM17RST = 0x40000; // TIM17 timer reset

    static constexpr uint32_t APB1RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1RSTR_TIM2RST = 0x1; // Timer 2 reset
    static constexpr uint32_t APB1RSTR_TIM3RST = 0x2; // Timer 3 reset
    static constexpr uint32_t APB1RSTR_TIM4RST = 0x4; // Timer 4 reset
    static constexpr uint32_t APB1RSTR_TIM5RST = 0x8; // Timer 5 reset
    static constexpr uint32_t APB1RSTR_TIM6RST = 0x10; // Timer 6 reset
    static constexpr uint32_t APB1RSTR_TIM7RST = 0x20; // Timer 7 reset
    static constexpr uint32_t APB1RSTR_TIM12RST = 0x40; // Timer 12 reset
    static constexpr uint32_t APB1RSTR_TIM13RST = 0x80; // Timer 13 reset
    static constexpr uint32_t APB1RSTR_TIM14RST = 0x100; // Timer 14 reset
    static constexpr uint32_t APB1RSTR_WWDGRST = 0x800; // Window watchdog reset
    static constexpr uint32_t APB1RSTR_SPI2RST = 0x4000; // SPI2 reset
    static constexpr uint32_t APB1RSTR_SPI3RST = 0x8000; // SPI3 reset
    static constexpr uint32_t APB1RSTR_USART2RST = 0x20000; // USART 2 reset
    static constexpr uint32_t APB1RSTR_USART3RST = 0x40000; // USART 3 reset
    static constexpr uint32_t APB1RSTR_USART4RST = 0x80000; // USART 4 reset
    static constexpr uint32_t APB1RSTR_USART5RST = 0x100000; // USART 5 reset
    static constexpr uint32_t APB1RSTR_I2C1RST = 0x200000; // I2C1 reset
    static constexpr uint32_t APB1RSTR_I2C2RST = 0x400000; // I2C2 reset
    static constexpr uint32_t APB1RSTR_BKPRST = 0x8000000; // Backup interface reset
    static constexpr uint32_t APB1RSTR_PWRRST = 0x10000000; // Power interface reset
    static constexpr uint32_t APB1RSTR_DACRST = 0x20000000; // DAC interface reset
    static constexpr uint32_t APB1RSTR_CECRST = 0x40000000; // CEC reset

    static constexpr uint32_t AHBENR_RESET_VALUE = 0x14; // Reset value
    static constexpr uint32_t AHBENR_DMA1EN = 0x1; // DMA1 clock enable
    static constexpr uint32_t AHBENR_DMA2EN = 0x2; // DMA2 clock enable
    static constexpr uint32_t AHBENR_SRAMEN = 0x4; // SRAM interface clock enable
    static constexpr uint32_t AHBENR_FLASHEN = 0x10; // FLITF clock enable
    static constexpr uint32_t AHBENR_CRCEN = 0x40; // CRC clock enable
    static constexpr uint32_t AHBENR_FSMCEN = 0x100; // FSMC clock enable

    static constexpr uint32_t APB2ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2ENR_AFIOEN = 0x1; // Alternate function I/O clock enable
    static constexpr uint32_t APB2ENR_IOPAEN = 0x4; // I/O port A clock enable
    static constexpr uint32_t APB2ENR_IOPBEN = 0x8; // I/O port B clock enable
    static constexpr uint32_t APB2ENR_IOPCEN = 0x10; // I/O port C clock enable
    static constexpr uint32_t APB2ENR_IOPDEN = 0x20; // I/O port D clock enable
    static constexpr uint32_t APB2ENR_IOPEEN = 0x40; // I/O port E clock enable
    static constexpr uint32_t APB2ENR_IOPFEN = 0x80; // I/O port F clock enable
    static constexpr uint32_t APB2ENR_IOPGEN = 0x100; // I/O port G clock enable
    static constexpr uint32_t APB2ENR_ADC1EN = 0x200; // ADC 1 interface clock enable
    static constexpr uint32_t APB2ENR_TIM1EN = 0x800; // TIM1 Timer clock enable
    static constexpr uint32_t APB2ENR_SPI1EN = 0x1000; // SPI 1 clock enable
    static constexpr uint32_t APB2ENR_USART1EN = 0x4000; // USART1 clock enable
    static constexpr uint32_t APB2ENR_TIM15EN = 0x10000; // TIM15 Timer clock enable
    static constexpr uint32_t APB2ENR_TIM16EN = 0x20000; // TIM16 Timer clock enable
    static constexpr uint32_t APB2ENR_TIM17EN = 0x40000; // TIM17 Timer clock enable

    static constexpr uint32_t APB1ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1ENR_TIM2EN = 0x1; // Timer 2 clock enable
    static constexpr uint32_t APB1ENR_TIM3EN = 0x2; // Timer 3 clock enable
    static constexpr uint32_t APB1ENR_TIM4EN = 0x4; // Timer 4 clock enable
    static constexpr uint32_t APB1ENR_TIM5EN = 0x8; // Timer 5 clock enable
    static constexpr uint32_t APB1ENR_TIM6EN = 0x10; // Timer 6 clock enable
    static constexpr uint32_t APB1ENR_TIM7EN = 0x20; // Timer 7 clock enable
    static constexpr uint32_t APB1ENR_TIM12EN = 0x40; // Timer 12 clock enable
    static constexpr uint32_t APB1ENR_TIM13EN = 0x80; // Timer 13 clock enable
    static constexpr uint32_t APB1ENR_TIM14EN = 0x100; // Timer 14 clock enable
    static constexpr uint32_t APB1ENR_WWDGEN = 0x800; // Window watchdog clock enable
    static constexpr uint32_t APB1ENR_SPI2EN = 0x4000; // SPI 2 clock enable
    static constexpr uint32_t APB1ENR_SPI3EN = 0x8000; // SPI 3 clock enable
    static constexpr uint32_t APB1ENR_USART2EN = 0x20000; // USART 2 clock enable
    static constexpr uint32_t APB1ENR_USART3EN = 0x40000; // USART 3 clock enable
    static constexpr uint32_t APB1ENR_UART4EN = 0x80000; // UART 4 clock enable
    static constexpr uint32_t APB1ENR_UART5EN = 0x100000; // UART 5 clock enable
    static constexpr uint32_t APB1ENR_I2C1EN = 0x200000; // I2C 1 clock enable
    static constexpr uint32_t APB1ENR_I2C2EN = 0x400000; // I2C 2 clock enable
    static constexpr uint32_t APB1ENR_BKPEN = 0x8000000; // Backup interface clock enable
    static constexpr uint32_t APB1ENR_PWREN = 0x10000000; // Power interface clock enable
    static constexpr uint32_t APB1ENR_DACEN = 0x20000000; // DAC interface clock enable
    static constexpr uint32_t APB1ENR_CECEN = 0x40000000; // CEC clock enable

    static constexpr uint32_t BDCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BDCR_LSEON = 0x1; // External Low Speed oscillator enable
    static constexpr uint32_t BDCR_LSERDY = 0x2; // External Low Speed oscillator ready
    static constexpr uint32_t BDCR_LSEBYP = 0x4; // External Low Speed oscillator bypass
    typedef bit_field_t<8, 0x3> BDCR_RTCSEL; // RTC clock source selection
    static constexpr uint32_t BDCR_RTCEN = 0x8000; // RTC clock enable
    static constexpr uint32_t BDCR_BDRST = 0x10000; // Backup domain software reset

    static constexpr uint32_t CSR_RESET_VALUE = 0xc000000; // Reset value
    static constexpr uint32_t CSR_LSION = 0x1; // Internal low speed oscillator enable
    static constexpr uint32_t CSR_LSIRDY = 0x2; // Internal low speed oscillator ready
    static constexpr uint32_t CSR_RMVF = 0x1000000; // Remove reset flag
    static constexpr uint32_t CSR_PINRSTF = 0x4000000; // PIN reset flag
    static constexpr uint32_t CSR_PORRSTF = 0x8000000; // POR/PDR reset flag
    static constexpr uint32_t CSR_SFTRSTF = 0x10000000; // Software reset flag
    static constexpr uint32_t CSR_IWDGRSTF = 0x20000000; // Independent watchdog reset flag
    static constexpr uint32_t CSR_WWDGRSTF = 0x40000000; // Window watchdog reset flag
    static constexpr uint32_t CSR_LPWRRSTF = 0x80000000; // Low-power reset flag


    static constexpr uint32_t CFGR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> CFGR2_PREDIV1; // PREDIV1 division factor
};

// RCC: Reset and clock control

struct stm32f101_rcc_t
{
    volatile uint32_t CR; // Clock control register
    volatile uint32_t CFGR; // Clock configuration register (RCC_CFGR)
    volatile uint32_t CIR; // Clock interrupt register (RCC_CIR)
    volatile uint32_t APB2RSTR; // APB2 peripheral reset register (RCC_APB2RSTR)
    volatile uint32_t APB1RSTR; // APB1 peripheral reset register (RCC_APB1RSTR)
    volatile uint32_t AHBENR; // AHB Peripheral Clock enable register (RCC_AHBENR)
    volatile uint32_t APB2ENR; // APB2 peripheral clock enable register (RCC_APB2ENR)
    volatile uint32_t APB1ENR; // APB1 peripheral clock enable register (RCC_APB1ENR)
    volatile uint32_t BDCR; // Backup domain control register (RCC_BDCR)
    volatile uint32_t CSR; // Control/status register (RCC_CSR)

    static constexpr uint32_t CR_RESET_VALUE = 0x83; // Reset value
    static constexpr uint32_t CR_HSION = 0x1; // Internal High Speed clock enable
    static constexpr uint32_t CR_HSIRDY = 0x2; // Internal High Speed clock ready flag
    typedef bit_field_t<3, 0x1f> CR_HSITRIM; // Internal High Speed clock trimming
    typedef bit_field_t<8, 0xff> CR_HSICAL; // Internal High Speed clock Calibration
    static constexpr uint32_t CR_HSEON = 0x10000; // External High Speed clock enable
    static constexpr uint32_t CR_HSERDY = 0x20000; // External High Speed clock ready flag
    static constexpr uint32_t CR_HSEBYP = 0x40000; // External High Speed clock Bypass
    static constexpr uint32_t CR_CSSON = 0x80000; // Clock Security System enable
    static constexpr uint32_t CR_PLLON = 0x1000000; // PLL enable
    static constexpr uint32_t CR_PLLRDY = 0x2000000; // PLL clock ready flag

    static constexpr uint32_t CFGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> CFGR_SW; // System clock Switch
    typedef bit_field_t<2, 0x3> CFGR_SWS; // System Clock Switch Status
    typedef bit_field_t<4, 0xf> CFGR_HPRE; // AHB prescaler
    typedef bit_field_t<8, 0x7> CFGR_PPRE1; // APB Low speed prescaler (APB1)
    typedef bit_field_t<11, 0x7> CFGR_PPRE2; // APB High speed prescaler (APB2)
    typedef bit_field_t<14, 0x3> CFGR_ADCPRE; // ADC prescaler
    static constexpr uint32_t CFGR_PLLSRC = 0x10000; // PLL entry clock source
    static constexpr uint32_t CFGR_PLLXTPRE = 0x20000; // HSE divider for PLL entry
    typedef bit_field_t<18, 0xf> CFGR_PLLMUL; // PLL Multiplication Factor
    typedef bit_field_t<24, 0x7> CFGR_MCO; // Microcontroller clock output

    static constexpr uint32_t CIR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CIR_LSIRDYF = 0x1; // LSI Ready Interrupt flag
    static constexpr uint32_t CIR_LSERDYF = 0x2; // LSE Ready Interrupt flag
    static constexpr uint32_t CIR_HSIRDYF = 0x4; // HSI Ready Interrupt flag
    static constexpr uint32_t CIR_HSERDYF = 0x8; // HSE Ready Interrupt flag
    static constexpr uint32_t CIR_PLLRDYF = 0x10; // PLL Ready Interrupt flag
    static constexpr uint32_t CIR_CSSF = 0x80; // Clock Security System Interrupt flag
    static constexpr uint32_t CIR_LSIRDYIE = 0x100; // LSI Ready Interrupt Enable
    static constexpr uint32_t CIR_LSERDYIE = 0x200; // LSE Ready Interrupt Enable
    static constexpr uint32_t CIR_HSIRDYIE = 0x400; // HSI Ready Interrupt Enable
    static constexpr uint32_t CIR_HSERDYIE = 0x800; // HSE Ready Interrupt Enable
    static constexpr uint32_t CIR_PLLRDYIE = 0x1000; // PLL Ready Interrupt Enable
    static constexpr uint32_t CIR_LSIRDYC = 0x10000; // LSI Ready Interrupt Clear
    static constexpr uint32_t CIR_LSERDYC = 0x20000; // LSE Ready Interrupt Clear
    static constexpr uint32_t CIR_HSIRDYC = 0x40000; // HSI Ready Interrupt Clear
    static constexpr uint32_t CIR_HSERDYC = 0x80000; // HSE Ready Interrupt Clear
    static constexpr uint32_t CIR_PLLRDYC = 0x100000; // PLL Ready Interrupt Clear
    static constexpr uint32_t CIR_CSSC = 0x800000; // Clock security system interrupt clear

    static constexpr uint32_t APB2RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2RSTR_AFIORST = 0x1; // Alternate function I/O reset
    static constexpr uint32_t APB2RSTR_IOPARST = 0x4; // IO port A reset
    static constexpr uint32_t APB2RSTR_IOPBRST = 0x8; // IO port B reset
    static constexpr uint32_t APB2RSTR_IOPCRST = 0x10; // IO port C reset
    static constexpr uint32_t APB2RSTR_IOPDRST = 0x20; // IO port D reset
    static constexpr uint32_t APB2RSTR_IOPERST = 0x40; // IO port E reset
    static constexpr uint32_t APB2RSTR_ADC1RST = 0x200; // ADC 1 interface reset
    static constexpr uint32_t APB2RSTR_ADC2RST = 0x400; // ADC 2 interface reset
    static constexpr uint32_t APB2RSTR_SPI1RST = 0x1000; // SPI 1 reset
    static constexpr uint32_t APB2RSTR_USART1RST = 0x4000; // USART1 reset
    static constexpr uint32_t APB2RSTR_TIM9RST = 0x80000; // TIM9 timer reset
    static constexpr uint32_t APB2RSTR_TIM10RST = 0x100000; // TIM10 timer reset
    static constexpr uint32_t APB2RSTR_TIM11RST = 0x200000; // TIM11 timer reset
    static constexpr uint32_t APB2RSTR_IOPFRST = 0x80; // IO port F reset
    static constexpr uint32_t APB2RSTR_IOPGRST = 0x100; // IO port G reset

    static constexpr uint32_t APB1RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1RSTR_TIM2RST = 0x1; // Timer 2 reset
    static constexpr uint32_t APB1RSTR_TIM3RST = 0x2; // Timer 3 reset
    static constexpr uint32_t APB1RSTR_TIM4RST = 0x4; // Timer 4 reset
    static constexpr uint32_t APB1RSTR_TIM5RST = 0x8; // Timer 5 reset
    static constexpr uint32_t APB1RSTR_TIM6RST = 0x10; // Timer 6 reset
    static constexpr uint32_t APB1RSTR_TIM7RST = 0x20; // Timer 7 reset
    static constexpr uint32_t APB1RSTR_TIM12RST = 0x40; // Timer 12 reset
    static constexpr uint32_t APB1RSTR_TIM13RST = 0x80; // Timer 13 reset
    static constexpr uint32_t APB1RSTR_TIM14RST = 0x100; // Timer 14 reset
    static constexpr uint32_t APB1RSTR_WWDGRST = 0x800; // Window watchdog reset
    static constexpr uint32_t APB1RSTR_SPI2RST = 0x4000; // SPI2 reset
    static constexpr uint32_t APB1RSTR_SPI3RST = 0x8000; // SPI3 reset
    static constexpr uint32_t APB1RSTR_USART2RST = 0x20000; // USART 2 reset
    static constexpr uint32_t APB1RSTR_USART3RST = 0x40000; // USART 3 reset
    static constexpr uint32_t APB1RSTR_UART4RST = 0x80000; // UART 4 reset
    static constexpr uint32_t APB1RSTR_UART5RST = 0x100000; // UART 5 reset
    static constexpr uint32_t APB1RSTR_I2C1RST = 0x200000; // I2C1 reset
    static constexpr uint32_t APB1RSTR_I2C2RST = 0x400000; // I2C2 reset
    static constexpr uint32_t APB1RSTR_BKPRST = 0x8000000; // Backup interface reset
    static constexpr uint32_t APB1RSTR_PWRRST = 0x10000000; // Power interface reset
    static constexpr uint32_t APB1RSTR_DACRST = 0x20000000; // DAC interface reset

    static constexpr uint32_t AHBENR_RESET_VALUE = 0x14; // Reset value
    static constexpr uint32_t AHBENR_DMA1EN = 0x1; // DMA1 clock enable
    static constexpr uint32_t AHBENR_DMA2EN = 0x2; // DMA2 clock enable
    static constexpr uint32_t AHBENR_SRAMEN = 0x4; // SRAM interface clock enable
    static constexpr uint32_t AHBENR_FLASHEN = 0x10; // FLITF clock enable
    static constexpr uint32_t AHBENR_CRCEN = 0x40; // CRC clock enable
    static constexpr uint32_t AHBENR_FSMCEN = 0x100; // FSMC clock enable

    static constexpr uint32_t APB2ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2ENR_AFIOEN = 0x1; // Alternate function I/O clock enable
    static constexpr uint32_t APB2ENR_IOPAEN = 0x4; // I/O port A clock enable
    static constexpr uint32_t APB2ENR_IOPBEN = 0x8; // I/O port B clock enable
    static constexpr uint32_t APB2ENR_IOPCEN = 0x10; // I/O port C clock enable
    static constexpr uint32_t APB2ENR_IOPDEN = 0x20; // I/O port D clock enable
    static constexpr uint32_t APB2ENR_IOPEEN = 0x40; // I/O port E clock enable
    static constexpr uint32_t APB2ENR_IOPFEN = 0x80; // I/O port F clock enable
    static constexpr uint32_t APB2ENR_IOPGEN = 0x100; // I/O port G clock enable
    static constexpr uint32_t APB2ENR_ADC1EN = 0x200; // ADC 1 interface clock enable
    static constexpr uint32_t APB2ENR_SPI1EN = 0x1000; // SPI 1 clock enable
    static constexpr uint32_t APB2ENR_USART1EN = 0x4000; // USART1 clock enable
    static constexpr uint32_t APB2ENR_TIM9EN = 0x80000; // TIM9 Timer clock enable
    static constexpr uint32_t APB2ENR_TIM10EN = 0x100000; // TIM10 Timer clock enable
    static constexpr uint32_t APB2ENR_TIM11EN = 0x200000; // TIM11 Timer clock enable

    static constexpr uint32_t APB1ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1ENR_TIM2EN = 0x1; // Timer 2 clock enable
    static constexpr uint32_t APB1ENR_TIM3EN = 0x2; // Timer 3 clock enable
    static constexpr uint32_t APB1ENR_TIM4EN = 0x4; // Timer 4 clock enable
    static constexpr uint32_t APB1ENR_TIM5EN = 0x8; // Timer 5 clock enable
    static constexpr uint32_t APB1ENR_TIM6EN = 0x10; // Timer 6 clock enable
    static constexpr uint32_t APB1ENR_TIM7EN = 0x20; // Timer 7 clock enable
    static constexpr uint32_t APB1ENR_TIM12EN = 0x40; // Timer 12 clock enable
    static constexpr uint32_t APB1ENR_TIM13EN = 0x80; // Timer 13 clock enable
    static constexpr uint32_t APB1ENR_TIM14EN = 0x100; // Timer 14 clock enable
    static constexpr uint32_t APB1ENR_WWDGEN = 0x800; // Window watchdog clock enable
    static constexpr uint32_t APB1ENR_SPI2EN = 0x4000; // SPI 2 clock enable
    static constexpr uint32_t APB1ENR_SPI3EN = 0x8000; // SPI 3 clock enable
    static constexpr uint32_t APB1ENR_USART2EN = 0x20000; // USART 2 clock enable
    static constexpr uint32_t APB1ENR_USART3EN = 0x40000; // USART 3 clock enable
    static constexpr uint32_t APB1ENR_UART4EN = 0x80000; // UART 4 clock enable
    static constexpr uint32_t APB1ENR_UART5EN = 0x100000; // UART 5 clock enable
    static constexpr uint32_t APB1ENR_I2C1EN = 0x200000; // I2C 1 clock enable
    static constexpr uint32_t APB1ENR_I2C2EN = 0x400000; // I2C 2 clock enable
    static constexpr uint32_t APB1ENR_BKPEN = 0x8000000; // Backup interface clock enable
    static constexpr uint32_t APB1ENR_PWREN = 0x10000000; // Power interface clock enable
    static constexpr uint32_t APB1ENR_DACEN = 0x20000000; // DAC interface clock enable

    static constexpr uint32_t BDCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BDCR_LSEON = 0x1; // External Low Speed oscillator enable
    static constexpr uint32_t BDCR_LSERDY = 0x2; // External Low Speed oscillator ready
    static constexpr uint32_t BDCR_LSEBYP = 0x4; // External Low Speed oscillator bypass
    typedef bit_field_t<8, 0x3> BDCR_RTCSEL; // RTC clock source selection
    static constexpr uint32_t BDCR_RTCEN = 0x8000; // RTC clock enable
    static constexpr uint32_t BDCR_BDRST = 0x10000; // Backup domain software reset

    static constexpr uint32_t CSR_RESET_VALUE = 0xc000000; // Reset value
    static constexpr uint32_t CSR_LSION = 0x1; // Internal low speed oscillator enable
    static constexpr uint32_t CSR_LSIRDY = 0x2; // Internal low speed oscillator ready
    static constexpr uint32_t CSR_RMVF = 0x1000000; // Remove reset flag
    static constexpr uint32_t CSR_PINRSTF = 0x4000000; // PIN reset flag
    static constexpr uint32_t CSR_PORRSTF = 0x8000000; // POR/PDR reset flag
    static constexpr uint32_t CSR_SFTRSTF = 0x10000000; // Software reset flag
    static constexpr uint32_t CSR_IWDGRSTF = 0x20000000; // Independent watchdog reset flag
    static constexpr uint32_t CSR_WWDGRSTF = 0x40000000; // Window watchdog reset flag
    static constexpr uint32_t CSR_LPWRRSTF = 0x80000000; // Low-power reset flag
};

// RCC: Reset and clock control

struct stm32f102_rcc_t
{
    volatile uint32_t CR; // Clock control register
    volatile uint32_t CFGR; // Clock configuration register (RCC_CFGR)
    volatile uint32_t CIR; // Clock interrupt register (RCC_CIR)
    volatile uint32_t APB2RSTR; // APB2 peripheral reset register (RCC_APB2RSTR)
    volatile uint32_t APB1RSTR; // APB1 peripheral reset register (RCC_APB1RSTR)
    volatile uint32_t AHBENR; // AHB Peripheral Clock enable register (RCC_AHBENR)
    volatile uint32_t APB2ENR; // APB2 peripheral clock enable register (RCC_APB2ENR)
    volatile uint32_t APB1ENR; // APB1 peripheral clock enable register (RCC_APB1ENR)
    volatile uint32_t BDCR; // Backup domain control register (RCC_BDCR)
    volatile uint32_t CSR; // Control/status register (RCC_CSR)

    static constexpr uint32_t CR_RESET_VALUE = 0x83; // Reset value
    static constexpr uint32_t CR_HSION = 0x1; // Internal High Speed clock enable
    static constexpr uint32_t CR_HSIRDY = 0x2; // Internal High Speed clock ready flag
    typedef bit_field_t<3, 0x1f> CR_HSITRIM; // Internal High Speed clock trimming
    typedef bit_field_t<8, 0xff> CR_HSICAL; // Internal High Speed clock Calibration
    static constexpr uint32_t CR_HSEON = 0x10000; // External High Speed clock enable
    static constexpr uint32_t CR_HSERDY = 0x20000; // External High Speed clock ready flag
    static constexpr uint32_t CR_HSEBYP = 0x40000; // External High Speed clock Bypass
    static constexpr uint32_t CR_CSSON = 0x80000; // Clock Security System enable
    static constexpr uint32_t CR_PLLON = 0x1000000; // PLL enable
    static constexpr uint32_t CR_PLLRDY = 0x2000000; // PLL clock ready flag

    static constexpr uint32_t CFGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> CFGR_SW; // System clock Switch
    typedef bit_field_t<2, 0x3> CFGR_SWS; // System Clock Switch Status
    typedef bit_field_t<4, 0xf> CFGR_HPRE; // AHB prescaler
    typedef bit_field_t<8, 0x7> CFGR_PPRE1; // APB Low speed prescaler (APB1)
    typedef bit_field_t<11, 0x7> CFGR_PPRE2; // APB High speed prescaler (APB2)
    typedef bit_field_t<14, 0x3> CFGR_ADCPRE; // ADC prescaler
    static constexpr uint32_t CFGR_PLLSRC = 0x10000; // PLL entry clock source
    static constexpr uint32_t CFGR_PLLXTPRE = 0x20000; // HSE divider for PLL entry
    typedef bit_field_t<18, 0xf> CFGR_PLLMUL; // PLL Multiplication Factor
    typedef bit_field_t<24, 0x7> CFGR_MCO; // Microcontroller clock output

    static constexpr uint32_t CIR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CIR_LSIRDYF = 0x1; // LSI Ready Interrupt flag
    static constexpr uint32_t CIR_LSERDYF = 0x2; // LSE Ready Interrupt flag
    static constexpr uint32_t CIR_HSIRDYF = 0x4; // HSI Ready Interrupt flag
    static constexpr uint32_t CIR_HSERDYF = 0x8; // HSE Ready Interrupt flag
    static constexpr uint32_t CIR_PLLRDYF = 0x10; // PLL Ready Interrupt flag
    static constexpr uint32_t CIR_CSSF = 0x80; // Clock Security System Interrupt flag
    static constexpr uint32_t CIR_LSIRDYIE = 0x100; // LSI Ready Interrupt Enable
    static constexpr uint32_t CIR_LSERDYIE = 0x200; // LSE Ready Interrupt Enable
    static constexpr uint32_t CIR_HSIRDYIE = 0x400; // HSI Ready Interrupt Enable
    static constexpr uint32_t CIR_HSERDYIE = 0x800; // HSE Ready Interrupt Enable
    static constexpr uint32_t CIR_PLLRDYIE = 0x1000; // PLL Ready Interrupt Enable
    static constexpr uint32_t CIR_LSIRDYC = 0x10000; // LSI Ready Interrupt Clear
    static constexpr uint32_t CIR_LSERDYC = 0x20000; // LSE Ready Interrupt Clear
    static constexpr uint32_t CIR_HSIRDYC = 0x40000; // HSI Ready Interrupt Clear
    static constexpr uint32_t CIR_HSERDYC = 0x80000; // HSE Ready Interrupt Clear
    static constexpr uint32_t CIR_PLLRDYC = 0x100000; // PLL Ready Interrupt Clear
    static constexpr uint32_t CIR_CSSC = 0x800000; // Clock security system interrupt clear

    static constexpr uint32_t APB2RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2RSTR_AFIORST = 0x1; // Alternate function I/O reset
    static constexpr uint32_t APB2RSTR_IOPARST = 0x4; // IO port A reset
    static constexpr uint32_t APB2RSTR_IOPBRST = 0x8; // IO port B reset
    static constexpr uint32_t APB2RSTR_IOPCRST = 0x10; // IO port C reset
    static constexpr uint32_t APB2RSTR_IOPDRST = 0x20; // IO port D reset
    static constexpr uint32_t APB2RSTR_ADC1RST = 0x200; // ADC 1 interface reset
    static constexpr uint32_t APB2RSTR_SPI1RST = 0x1000; // SPI 1 reset
    static constexpr uint32_t APB2RSTR_USART1RST = 0x4000; // USART1 reset

    static constexpr uint32_t APB1RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1RSTR_TIM2RST = 0x1; // Timer 2 reset
    static constexpr uint32_t APB1RSTR_TIM3RST = 0x2; // Timer 3 reset
    static constexpr uint32_t APB1RSTR_WWDGRST = 0x800; // Window watchdog reset
    static constexpr uint32_t APB1RSTR_USART2RST = 0x20000; // USART 2 reset
    static constexpr uint32_t APB1RSTR_I2C1RST = 0x200000; // I2C1 reset
    static constexpr uint32_t APB1RSTR_BKPRST = 0x8000000; // Backup interface reset
    static constexpr uint32_t APB1RSTR_PWRRST = 0x10000000; // Power interface reset

    static constexpr uint32_t AHBENR_RESET_VALUE = 0x14; // Reset value
    static constexpr uint32_t AHBENR_DMA1EN = 0x1; // DMA1 clock enable
    static constexpr uint32_t AHBENR_DMA2EN = 0x2; // DMA2 clock enable
    static constexpr uint32_t AHBENR_SRAMEN = 0x4; // SRAM interface clock enable
    static constexpr uint32_t AHBENR_FLASHEN = 0x10; // FLITF clock enable
    static constexpr uint32_t AHBENR_CRCEN = 0x40; // CRC clock enable

    static constexpr uint32_t APB2ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2ENR_AFIOEN = 0x1; // Alternate function I/O clock enable
    static constexpr uint32_t APB2ENR_IOPAEN = 0x4; // I/O port A clock enable
    static constexpr uint32_t APB2ENR_IOPBEN = 0x8; // I/O port B clock enable
    static constexpr uint32_t APB2ENR_IOPCEN = 0x10; // I/O port C clock enable
    static constexpr uint32_t APB2ENR_IOPDEN = 0x20; // I/O port D clock enable
    static constexpr uint32_t APB2ENR_ADC1EN = 0x200; // ADC 1 interface clock enable
    static constexpr uint32_t APB2ENR_SPI1EN = 0x1000; // SPI 1 clock enable
    static constexpr uint32_t APB2ENR_USART1EN = 0x4000; // USART1 clock enable

    static constexpr uint32_t APB1ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1ENR_TIM2EN = 0x1; // Timer 2 clock enable
    static constexpr uint32_t APB1ENR_TIM3EN = 0x2; // Timer 3 clock enable
    static constexpr uint32_t APB1ENR_WWDGEN = 0x800; // Window watchdog clock enable
    static constexpr uint32_t APB1ENR_USART2EN = 0x20000; // USART 2 clock enable
    static constexpr uint32_t APB1ENR_I2C1EN = 0x200000; // I2C 1 clock enable
    static constexpr uint32_t APB1ENR_BKPEN = 0x8000000; // Backup interface clock enable
    static constexpr uint32_t APB1ENR_PWREN = 0x10000000; // Power interface clock enable

    static constexpr uint32_t BDCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BDCR_LSEON = 0x1; // External Low Speed oscillator enable
    static constexpr uint32_t BDCR_LSERDY = 0x2; // External Low Speed oscillator ready
    static constexpr uint32_t BDCR_LSEBYP = 0x4; // External Low Speed oscillator bypass
    typedef bit_field_t<8, 0x3> BDCR_RTCSEL; // RTC clock source selection
    static constexpr uint32_t BDCR_RTCEN = 0x8000; // RTC clock enable
    static constexpr uint32_t BDCR_BDRST = 0x10000; // Backup domain software reset

    static constexpr uint32_t CSR_RESET_VALUE = 0xc000000; // Reset value
    static constexpr uint32_t CSR_LSION = 0x1; // Internal low speed oscillator enable
    static constexpr uint32_t CSR_LSIRDY = 0x2; // Internal low speed oscillator ready
    static constexpr uint32_t CSR_RMVF = 0x1000000; // Remove reset flag
    static constexpr uint32_t CSR_PINRSTF = 0x4000000; // PIN reset flag
    static constexpr uint32_t CSR_PORRSTF = 0x8000000; // POR/PDR reset flag
    static constexpr uint32_t CSR_SFTRSTF = 0x10000000; // Software reset flag
    static constexpr uint32_t CSR_IWDGRSTF = 0x20000000; // Independent watchdog reset flag
    static constexpr uint32_t CSR_WWDGRSTF = 0x40000000; // Window watchdog reset flag
    static constexpr uint32_t CSR_LPWRRSTF = 0x80000000; // Low-power reset flag
};

// RCC: Reset and clock control

struct stm32f103_rcc_t
{
    volatile uint32_t CR; // Clock control register
    volatile uint32_t CFGR; // Clock configuration register (RCC_CFGR)
    volatile uint32_t CIR; // Clock interrupt register (RCC_CIR)
    volatile uint32_t APB2RSTR; // APB2 peripheral reset register (RCC_APB2RSTR)
    volatile uint32_t APB1RSTR; // APB1 peripheral reset register (RCC_APB1RSTR)
    volatile uint32_t AHBENR; // AHB Peripheral Clock enable register (RCC_AHBENR)
    volatile uint32_t APB2ENR; // APB2 peripheral clock enable register (RCC_APB2ENR)
    volatile uint32_t APB1ENR; // APB1 peripheral clock enable register (RCC_APB1ENR)
    volatile uint32_t BDCR; // Backup domain control register (RCC_BDCR)
    volatile uint32_t CSR; // Control/status register (RCC_CSR)

    static constexpr uint32_t CR_RESET_VALUE = 0x83; // Reset value
    static constexpr uint32_t CR_HSION = 0x1; // Internal High Speed clock enable
    static constexpr uint32_t CR_HSIRDY = 0x2; // Internal High Speed clock ready flag
    typedef bit_field_t<3, 0x1f> CR_HSITRIM; // Internal High Speed clock trimming
    typedef bit_field_t<8, 0xff> CR_HSICAL; // Internal High Speed clock Calibration
    static constexpr uint32_t CR_HSEON = 0x10000; // External High Speed clock enable
    static constexpr uint32_t CR_HSERDY = 0x20000; // External High Speed clock ready flag
    static constexpr uint32_t CR_HSEBYP = 0x40000; // External High Speed clock Bypass
    static constexpr uint32_t CR_CSSON = 0x80000; // Clock Security System enable
    static constexpr uint32_t CR_PLLON = 0x1000000; // PLL enable
    static constexpr uint32_t CR_PLLRDY = 0x2000000; // PLL clock ready flag

    static constexpr uint32_t CFGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> CFGR_SW; // System clock Switch
    typedef bit_field_t<2, 0x3> CFGR_SWS; // System Clock Switch Status
    typedef bit_field_t<4, 0xf> CFGR_HPRE; // AHB prescaler
    typedef bit_field_t<8, 0x7> CFGR_PPRE1; // APB Low speed prescaler (APB1)
    typedef bit_field_t<11, 0x7> CFGR_PPRE2; // APB High speed prescaler (APB2)
    typedef bit_field_t<14, 0x3> CFGR_ADCPRE; // ADC prescaler
    static constexpr uint32_t CFGR_PLLSRC = 0x10000; // PLL entry clock source
    static constexpr uint32_t CFGR_PLLXTPRE = 0x20000; // HSE divider for PLL entry
    typedef bit_field_t<18, 0xf> CFGR_PLLMUL; // PLL Multiplication Factor
    static constexpr uint32_t CFGR_OTGFSPRE = 0x400000; // USB OTG FS prescaler
    typedef bit_field_t<24, 0x7> CFGR_MCO; // Microcontroller clock output

    static constexpr uint32_t CIR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CIR_LSIRDYF = 0x1; // LSI Ready Interrupt flag
    static constexpr uint32_t CIR_LSERDYF = 0x2; // LSE Ready Interrupt flag
    static constexpr uint32_t CIR_HSIRDYF = 0x4; // HSI Ready Interrupt flag
    static constexpr uint32_t CIR_HSERDYF = 0x8; // HSE Ready Interrupt flag
    static constexpr uint32_t CIR_PLLRDYF = 0x10; // PLL Ready Interrupt flag
    static constexpr uint32_t CIR_CSSF = 0x80; // Clock Security System Interrupt flag
    static constexpr uint32_t CIR_LSIRDYIE = 0x100; // LSI Ready Interrupt Enable
    static constexpr uint32_t CIR_LSERDYIE = 0x200; // LSE Ready Interrupt Enable
    static constexpr uint32_t CIR_HSIRDYIE = 0x400; // HSI Ready Interrupt Enable
    static constexpr uint32_t CIR_HSERDYIE = 0x800; // HSE Ready Interrupt Enable
    static constexpr uint32_t CIR_PLLRDYIE = 0x1000; // PLL Ready Interrupt Enable
    static constexpr uint32_t CIR_LSIRDYC = 0x10000; // LSI Ready Interrupt Clear
    static constexpr uint32_t CIR_LSERDYC = 0x20000; // LSE Ready Interrupt Clear
    static constexpr uint32_t CIR_HSIRDYC = 0x40000; // HSI Ready Interrupt Clear
    static constexpr uint32_t CIR_HSERDYC = 0x80000; // HSE Ready Interrupt Clear
    static constexpr uint32_t CIR_PLLRDYC = 0x100000; // PLL Ready Interrupt Clear
    static constexpr uint32_t CIR_CSSC = 0x800000; // Clock security system interrupt clear

    static constexpr uint32_t APB2RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2RSTR_AFIORST = 0x1; // Alternate function I/O reset
    static constexpr uint32_t APB2RSTR_IOPARST = 0x4; // IO port A reset
    static constexpr uint32_t APB2RSTR_IOPBRST = 0x8; // IO port B reset
    static constexpr uint32_t APB2RSTR_IOPCRST = 0x10; // IO port C reset
    static constexpr uint32_t APB2RSTR_IOPDRST = 0x20; // IO port D reset
    static constexpr uint32_t APB2RSTR_IOPERST = 0x40; // IO port E reset
    static constexpr uint32_t APB2RSTR_IOPFRST = 0x80; // IO port F reset
    static constexpr uint32_t APB2RSTR_IOPGRST = 0x100; // IO port G reset
    static constexpr uint32_t APB2RSTR_ADC1RST = 0x200; // ADC 1 interface reset
    static constexpr uint32_t APB2RSTR_ADC2RST = 0x400; // ADC 2 interface reset
    static constexpr uint32_t APB2RSTR_TIM1RST = 0x800; // TIM1 timer reset
    static constexpr uint32_t APB2RSTR_SPI1RST = 0x1000; // SPI 1 reset
    static constexpr uint32_t APB2RSTR_TIM8RST = 0x2000; // TIM8 timer reset
    static constexpr uint32_t APB2RSTR_USART1RST = 0x4000; // USART1 reset
    static constexpr uint32_t APB2RSTR_ADC3RST = 0x8000; // ADC 3 interface reset
    static constexpr uint32_t APB2RSTR_TIM9RST = 0x80000; // TIM9 timer reset
    static constexpr uint32_t APB2RSTR_TIM10RST = 0x100000; // TIM10 timer reset
    static constexpr uint32_t APB2RSTR_TIM11RST = 0x200000; // TIM11 timer reset

    static constexpr uint32_t APB1RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1RSTR_TIM2RST = 0x1; // Timer 2 reset
    static constexpr uint32_t APB1RSTR_TIM3RST = 0x2; // Timer 3 reset
    static constexpr uint32_t APB1RSTR_TIM4RST = 0x4; // Timer 4 reset
    static constexpr uint32_t APB1RSTR_TIM5RST = 0x8; // Timer 5 reset
    static constexpr uint32_t APB1RSTR_TIM6RST = 0x10; // Timer 6 reset
    static constexpr uint32_t APB1RSTR_TIM7RST = 0x20; // Timer 7 reset
    static constexpr uint32_t APB1RSTR_TIM12RST = 0x40; // Timer 12 reset
    static constexpr uint32_t APB1RSTR_TIM13RST = 0x80; // Timer 13 reset
    static constexpr uint32_t APB1RSTR_TIM14RST = 0x100; // Timer 14 reset
    static constexpr uint32_t APB1RSTR_WWDGRST = 0x800; // Window watchdog reset
    static constexpr uint32_t APB1RSTR_SPI2RST = 0x4000; // SPI2 reset
    static constexpr uint32_t APB1RSTR_SPI3RST = 0x8000; // SPI3 reset
    static constexpr uint32_t APB1RSTR_USART2RST = 0x20000; // USART 2 reset
    static constexpr uint32_t APB1RSTR_USART3RST = 0x40000; // USART 3 reset
    static constexpr uint32_t APB1RSTR_UART4RST = 0x80000; // UART 4 reset
    static constexpr uint32_t APB1RSTR_UART5RST = 0x100000; // UART 5 reset
    static constexpr uint32_t APB1RSTR_I2C1RST = 0x200000; // I2C1 reset
    static constexpr uint32_t APB1RSTR_I2C2RST = 0x400000; // I2C2 reset
    static constexpr uint32_t APB1RSTR_USBRST = 0x800000; // USB reset
    static constexpr uint32_t APB1RSTR_CANRST = 0x2000000; // CAN reset
    static constexpr uint32_t APB1RSTR_BKPRST = 0x8000000; // Backup interface reset
    static constexpr uint32_t APB1RSTR_PWRRST = 0x10000000; // Power interface reset
    static constexpr uint32_t APB1RSTR_DACRST = 0x20000000; // DAC interface reset

    static constexpr uint32_t AHBENR_RESET_VALUE = 0x14; // Reset value
    static constexpr uint32_t AHBENR_DMA1EN = 0x1; // DMA1 clock enable
    static constexpr uint32_t AHBENR_DMA2EN = 0x2; // DMA2 clock enable
    static constexpr uint32_t AHBENR_SRAMEN = 0x4; // SRAM interface clock enable
    static constexpr uint32_t AHBENR_FLASHEN = 0x10; // FLITF clock enable
    static constexpr uint32_t AHBENR_CRCEN = 0x40; // CRC clock enable
    static constexpr uint32_t AHBENR_FSMCEN = 0x100; // FSMC clock enable
    static constexpr uint32_t AHBENR_SDIOEN = 0x400; // SDIO clock enable

    static constexpr uint32_t APB2ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2ENR_AFIOEN = 0x1; // Alternate function I/O clock enable
    static constexpr uint32_t APB2ENR_IOPAEN = 0x4; // I/O port A clock enable
    static constexpr uint32_t APB2ENR_IOPBEN = 0x8; // I/O port B clock enable
    static constexpr uint32_t APB2ENR_IOPCEN = 0x10; // I/O port C clock enable
    static constexpr uint32_t APB2ENR_IOPDEN = 0x20; // I/O port D clock enable
    static constexpr uint32_t APB2ENR_IOPEEN = 0x40; // I/O port E clock enable
    static constexpr uint32_t APB2ENR_IOPFEN = 0x80; // I/O port F clock enable
    static constexpr uint32_t APB2ENR_IOPGEN = 0x100; // I/O port G clock enable
    static constexpr uint32_t APB2ENR_ADC1EN = 0x200; // ADC 1 interface clock enable
    static constexpr uint32_t APB2ENR_ADC2EN = 0x400; // ADC 2 interface clock enable
    static constexpr uint32_t APB2ENR_TIM1EN = 0x800; // TIM1 Timer clock enable
    static constexpr uint32_t APB2ENR_SPI1EN = 0x1000; // SPI 1 clock enable
    static constexpr uint32_t APB2ENR_TIM8EN = 0x2000; // TIM8 Timer clock enable
    static constexpr uint32_t APB2ENR_USART1EN = 0x4000; // USART1 clock enable
    static constexpr uint32_t APB2ENR_ADC3EN = 0x8000; // ADC3 interface clock enable
    static constexpr uint32_t APB2ENR_TIM9EN = 0x80000; // TIM9 Timer clock enable
    static constexpr uint32_t APB2ENR_TIM10EN = 0x100000; // TIM10 Timer clock enable
    static constexpr uint32_t APB2ENR_TIM11EN = 0x200000; // TIM11 Timer clock enable

    static constexpr uint32_t APB1ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1ENR_TIM2EN = 0x1; // Timer 2 clock enable
    static constexpr uint32_t APB1ENR_TIM3EN = 0x2; // Timer 3 clock enable
    static constexpr uint32_t APB1ENR_TIM4EN = 0x4; // Timer 4 clock enable
    static constexpr uint32_t APB1ENR_TIM5EN = 0x8; // Timer 5 clock enable
    static constexpr uint32_t APB1ENR_TIM6EN = 0x10; // Timer 6 clock enable
    static constexpr uint32_t APB1ENR_TIM7EN = 0x20; // Timer 7 clock enable
    static constexpr uint32_t APB1ENR_TIM12EN = 0x40; // Timer 12 clock enable
    static constexpr uint32_t APB1ENR_TIM13EN = 0x80; // Timer 13 clock enable
    static constexpr uint32_t APB1ENR_TIM14EN = 0x100; // Timer 14 clock enable
    static constexpr uint32_t APB1ENR_WWDGEN = 0x800; // Window watchdog clock enable
    static constexpr uint32_t APB1ENR_SPI2EN = 0x4000; // SPI 2 clock enable
    static constexpr uint32_t APB1ENR_SPI3EN = 0x8000; // SPI 3 clock enable
    static constexpr uint32_t APB1ENR_USART2EN = 0x20000; // USART 2 clock enable
    static constexpr uint32_t APB1ENR_USART3EN = 0x40000; // USART 3 clock enable
    static constexpr uint32_t APB1ENR_UART4EN = 0x80000; // UART 4 clock enable
    static constexpr uint32_t APB1ENR_UART5EN = 0x100000; // UART 5 clock enable
    static constexpr uint32_t APB1ENR_I2C1EN = 0x200000; // I2C 1 clock enable
    static constexpr uint32_t APB1ENR_I2C2EN = 0x400000; // I2C 2 clock enable
    static constexpr uint32_t APB1ENR_USBEN = 0x800000; // USB clock enable
    static constexpr uint32_t APB1ENR_CANEN = 0x2000000; // CAN clock enable
    static constexpr uint32_t APB1ENR_BKPEN = 0x8000000; // Backup interface clock enable
    static constexpr uint32_t APB1ENR_PWREN = 0x10000000; // Power interface clock enable
    static constexpr uint32_t APB1ENR_DACEN = 0x20000000; // DAC interface clock enable

    static constexpr uint32_t BDCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BDCR_LSEON = 0x1; // External Low Speed oscillator enable
    static constexpr uint32_t BDCR_LSERDY = 0x2; // External Low Speed oscillator ready
    static constexpr uint32_t BDCR_LSEBYP = 0x4; // External Low Speed oscillator bypass
    typedef bit_field_t<8, 0x3> BDCR_RTCSEL; // RTC clock source selection
    static constexpr uint32_t BDCR_RTCEN = 0x8000; // RTC clock enable
    static constexpr uint32_t BDCR_BDRST = 0x10000; // Backup domain software reset

    static constexpr uint32_t CSR_RESET_VALUE = 0xc000000; // Reset value
    static constexpr uint32_t CSR_LSION = 0x1; // Internal low speed oscillator enable
    static constexpr uint32_t CSR_LSIRDY = 0x2; // Internal low speed oscillator ready
    static constexpr uint32_t CSR_RMVF = 0x1000000; // Remove reset flag
    static constexpr uint32_t CSR_PINRSTF = 0x4000000; // PIN reset flag
    static constexpr uint32_t CSR_PORRSTF = 0x8000000; // POR/PDR reset flag
    static constexpr uint32_t CSR_SFTRSTF = 0x10000000; // Software reset flag
    static constexpr uint32_t CSR_IWDGRSTF = 0x20000000; // Independent watchdog reset flag
    static constexpr uint32_t CSR_WWDGRSTF = 0x40000000; // Window watchdog reset flag
    static constexpr uint32_t CSR_LPWRRSTF = 0x80000000; // Low-power reset flag
};

// RCC: Reset and clock control

struct stm32f107_rcc_t
{
    volatile uint32_t CR; // Clock control register
    volatile uint32_t CFGR; // Clock configuration register (RCC_CFGR)
    volatile uint32_t CIR; // Clock interrupt register (RCC_CIR)
    volatile uint32_t APB2RSTR; // APB2 peripheral reset register (RCC_APB2RSTR)
    volatile uint32_t APB1RSTR; // APB1 peripheral reset register (RCC_APB1RSTR)
    volatile uint32_t AHBENR; // AHB Peripheral Clock enable register (RCC_AHBENR)
    volatile uint32_t APB2ENR; // APB2 peripheral clock enable register (RCC_APB2ENR)
    volatile uint32_t APB1ENR; // APB1 peripheral clock enable register (RCC_APB1ENR)
    volatile uint32_t BDCR; // Backup domain control register (RCC_BDCR)
    volatile uint32_t CSR; // Control/status register (RCC_CSR)
    volatile uint32_t AHBRSTR; // AHB peripheral clock reset register (RCC_AHBRSTR)
    volatile uint32_t CFGR2; // Clock configuration register2 (RCC_CFGR2)

    static constexpr uint32_t CR_RESET_VALUE = 0x83; // Reset value
    static constexpr uint32_t CR_HSION = 0x1; // Internal High Speed clock enable
    static constexpr uint32_t CR_HSIRDY = 0x2; // Internal High Speed clock ready flag
    typedef bit_field_t<3, 0x1f> CR_HSITRIM; // Internal High Speed clock trimming
    typedef bit_field_t<8, 0xff> CR_HSICAL; // Internal High Speed clock Calibration
    static constexpr uint32_t CR_HSEON = 0x10000; // External High Speed clock enable
    static constexpr uint32_t CR_HSERDY = 0x20000; // External High Speed clock ready flag
    static constexpr uint32_t CR_HSEBYP = 0x40000; // External High Speed clock Bypass
    static constexpr uint32_t CR_CSSON = 0x80000; // Clock Security System enable
    static constexpr uint32_t CR_PLLON = 0x1000000; // PLL enable
    static constexpr uint32_t CR_PLLRDY = 0x2000000; // PLL clock ready flag
    static constexpr uint32_t CR_PLL2ON = 0x4000000; // PLL2 enable
    static constexpr uint32_t CR_PLL2RDY = 0x8000000; // PLL2 clock ready flag
    static constexpr uint32_t CR_PLL3ON = 0x10000000; // PLL3 enable
    static constexpr uint32_t CR_PLL3RDY = 0x20000000; // PLL3 clock ready flag

    static constexpr uint32_t CFGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> CFGR_SW; // System clock Switch
    typedef bit_field_t<2, 0x3> CFGR_SWS; // System Clock Switch Status
    typedef bit_field_t<4, 0xf> CFGR_HPRE; // AHB prescaler
    typedef bit_field_t<8, 0x7> CFGR_PPRE1; // APB Low speed prescaler (APB1)
    typedef bit_field_t<11, 0x7> CFGR_PPRE2; // APB High speed prescaler (APB2)
    typedef bit_field_t<14, 0x3> CFGR_ADCPRE; // ADC prescaler
    static constexpr uint32_t CFGR_PLLSRC = 0x10000; // PLL entry clock source
    static constexpr uint32_t CFGR_PLLXTPRE = 0x20000; // HSE divider for PLL entry
    typedef bit_field_t<18, 0xf> CFGR_PLLMUL; // PLL Multiplication Factor
    static constexpr uint32_t CFGR_OTGFSPRE = 0x400000; // USB OTG FS prescaler
    typedef bit_field_t<24, 0xf> CFGR_MCO; // Microcontroller clock output

    static constexpr uint32_t CIR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CIR_LSIRDYF = 0x1; // LSI Ready Interrupt flag
    static constexpr uint32_t CIR_LSERDYF = 0x2; // LSE Ready Interrupt flag
    static constexpr uint32_t CIR_HSIRDYF = 0x4; // HSI Ready Interrupt flag
    static constexpr uint32_t CIR_HSERDYF = 0x8; // HSE Ready Interrupt flag
    static constexpr uint32_t CIR_PLLRDYF = 0x10; // PLL Ready Interrupt flag
    static constexpr uint32_t CIR_PLL2RDYF = 0x20; // PLL2 Ready Interrupt flag
    static constexpr uint32_t CIR_PLL3RDYF = 0x40; // PLL3 Ready Interrupt flag
    static constexpr uint32_t CIR_CSSF = 0x80; // Clock Security System Interrupt flag
    static constexpr uint32_t CIR_LSIRDYIE = 0x100; // LSI Ready Interrupt Enable
    static constexpr uint32_t CIR_LSERDYIE = 0x200; // LSE Ready Interrupt Enable
    static constexpr uint32_t CIR_HSIRDYIE = 0x400; // HSI Ready Interrupt Enable
    static constexpr uint32_t CIR_HSERDYIE = 0x800; // HSE Ready Interrupt Enable
    static constexpr uint32_t CIR_PLLRDYIE = 0x1000; // PLL Ready Interrupt Enable
    static constexpr uint32_t CIR_PLL2RDYIE = 0x2000; // PLL2 Ready Interrupt Enable
    static constexpr uint32_t CIR_PLL3RDYIE = 0x4000; // PLL3 Ready Interrupt Enable
    static constexpr uint32_t CIR_LSIRDYC = 0x10000; // LSI Ready Interrupt Clear
    static constexpr uint32_t CIR_LSERDYC = 0x20000; // LSE Ready Interrupt Clear
    static constexpr uint32_t CIR_HSIRDYC = 0x40000; // HSI Ready Interrupt Clear
    static constexpr uint32_t CIR_HSERDYC = 0x80000; // HSE Ready Interrupt Clear
    static constexpr uint32_t CIR_PLLRDYC = 0x100000; // PLL Ready Interrupt Clear
    static constexpr uint32_t CIR_PLL2RDYC = 0x200000; // PLL2 Ready Interrupt Clear
    static constexpr uint32_t CIR_PLL3RDYC = 0x400000; // PLL3 Ready Interrupt Clear
    static constexpr uint32_t CIR_CSSC = 0x800000; // Clock security system interrupt clear

    static constexpr uint32_t APB2RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2RSTR_AFIORST = 0x1; // Alternate function I/O reset
    static constexpr uint32_t APB2RSTR_IOPARST = 0x4; // IO port A reset
    static constexpr uint32_t APB2RSTR_IOPBRST = 0x8; // IO port B reset
    static constexpr uint32_t APB2RSTR_IOPCRST = 0x10; // IO port C reset
    static constexpr uint32_t APB2RSTR_IOPDRST = 0x20; // IO port D reset
    static constexpr uint32_t APB2RSTR_IOPERST = 0x40; // IO port E reset
    static constexpr uint32_t APB2RSTR_ADC1RST = 0x200; // ADC 1 interface reset
    static constexpr uint32_t APB2RSTR_ADC2RST = 0x400; // ADC 2 interface reset
    static constexpr uint32_t APB2RSTR_TIM1RST = 0x800; // TIM1 timer reset
    static constexpr uint32_t APB2RSTR_SPI1RST = 0x1000; // SPI 1 reset
    static constexpr uint32_t APB2RSTR_USART1RST = 0x4000; // USART1 reset

    static constexpr uint32_t APB1RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1RSTR_TIM2RST = 0x1; // Timer 2 reset
    static constexpr uint32_t APB1RSTR_TIM3RST = 0x2; // Timer 3 reset
    static constexpr uint32_t APB1RSTR_TIM4RST = 0x4; // Timer 4 reset
    static constexpr uint32_t APB1RSTR_TIM5RST = 0x8; // Timer 5 reset
    static constexpr uint32_t APB1RSTR_TIM6RST = 0x10; // Timer 6 reset
    static constexpr uint32_t APB1RSTR_TIM7RST = 0x20; // Timer 7 reset
    static constexpr uint32_t APB1RSTR_WWDGRST = 0x800; // Window watchdog reset
    static constexpr uint32_t APB1RSTR_SPI2RST = 0x4000; // SPI2 reset
    static constexpr uint32_t APB1RSTR_SPI3RST = 0x8000; // SPI3 reset
    static constexpr uint32_t APB1RSTR_USART2RST = 0x20000; // USART 2 reset
    static constexpr uint32_t APB1RSTR_USART3RST = 0x40000; // USART 3 reset
    static constexpr uint32_t APB1RSTR_USART4RST = 0x80000; // USART 4 reset
    static constexpr uint32_t APB1RSTR_USART5RST = 0x100000; // USART 5 reset
    static constexpr uint32_t APB1RSTR_I2C1RST = 0x200000; // I2C1 reset
    static constexpr uint32_t APB1RSTR_I2C2RST = 0x400000; // I2C2 reset
    static constexpr uint32_t APB1RSTR_CAN1RST = 0x2000000; // CAN1 reset
    static constexpr uint32_t APB1RSTR_CAN2RST = 0x4000000; // CAN2 reset
    static constexpr uint32_t APB1RSTR_BKPRST = 0x8000000; // Backup interface reset
    static constexpr uint32_t APB1RSTR_PWRRST = 0x10000000; // Power interface reset
    static constexpr uint32_t APB1RSTR_DACRST = 0x20000000; // DAC interface reset

    static constexpr uint32_t AHBENR_RESET_VALUE = 0x14; // Reset value
    static constexpr uint32_t AHBENR_DMA1EN = 0x1; // DMA1 clock enable
    static constexpr uint32_t AHBENR_DMA2EN = 0x2; // DMA2 clock enable
    static constexpr uint32_t AHBENR_SRAMEN = 0x4; // SRAM interface clock enable
    static constexpr uint32_t AHBENR_FLASHEN = 0x10; // FLITF clock enable
    static constexpr uint32_t AHBENR_CRCEN = 0x40; // CRC clock enable
    static constexpr uint32_t AHBENR_OTGFSEN = 0x1000; // USB OTG FS clock enable
    static constexpr uint32_t AHBENR_ETHMACEN = 0x4000; // Ethernet MAC clock enable
    static constexpr uint32_t AHBENR_ETHMACTXEN = 0x8000; // Ethernet MAC TX clock enable
    static constexpr uint32_t AHBENR_ETHMACRXEN = 0x10000; // Ethernet MAC RX clock enable

    static constexpr uint32_t APB2ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2ENR_AFIOEN = 0x1; // Alternate function I/O clock enable
    static constexpr uint32_t APB2ENR_IOPAEN = 0x4; // I/O port A clock enable
    static constexpr uint32_t APB2ENR_IOPBEN = 0x8; // I/O port B clock enable
    static constexpr uint32_t APB2ENR_IOPCEN = 0x10; // I/O port C clock enable
    static constexpr uint32_t APB2ENR_IOPDEN = 0x20; // I/O port D clock enable
    static constexpr uint32_t APB2ENR_IOPEEN = 0x40; // I/O port E clock enable
    static constexpr uint32_t APB2ENR_ADC1EN = 0x200; // ADC 1 interface clock enable
    static constexpr uint32_t APB2ENR_ADC2EN = 0x400; // ADC 2 interface clock enable
    static constexpr uint32_t APB2ENR_TIM1EN = 0x800; // TIM1 Timer clock enable
    static constexpr uint32_t APB2ENR_SPI1EN = 0x1000; // SPI 1 clock enable
    static constexpr uint32_t APB2ENR_USART1EN = 0x4000; // USART1 clock enable

    static constexpr uint32_t APB1ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1ENR_TIM2EN = 0x1; // Timer 2 clock enable
    static constexpr uint32_t APB1ENR_TIM3EN = 0x2; // Timer 3 clock enable
    static constexpr uint32_t APB1ENR_TIM4EN = 0x4; // Timer 4 clock enable
    static constexpr uint32_t APB1ENR_TIM5EN = 0x8; // Timer 5 clock enable
    static constexpr uint32_t APB1ENR_TIM6EN = 0x10; // Timer 6 clock enable
    static constexpr uint32_t APB1ENR_TIM7EN = 0x20; // Timer 7 clock enable
    static constexpr uint32_t APB1ENR_WWDGEN = 0x800; // Window watchdog clock enable
    static constexpr uint32_t APB1ENR_SPI2EN = 0x4000; // SPI 2 clock enable
    static constexpr uint32_t APB1ENR_SPI3EN = 0x8000; // SPI 3 clock enable
    static constexpr uint32_t APB1ENR_USART2EN = 0x20000; // USART 2 clock enable
    static constexpr uint32_t APB1ENR_USART3EN = 0x40000; // USART 3 clock enable
    static constexpr uint32_t APB1ENR_UART4EN = 0x80000; // UART 4 clock enable
    static constexpr uint32_t APB1ENR_UART5EN = 0x100000; // UART 5 clock enable
    static constexpr uint32_t APB1ENR_I2C1EN = 0x200000; // I2C 1 clock enable
    static constexpr uint32_t APB1ENR_I2C2EN = 0x400000; // I2C 2 clock enable
    static constexpr uint32_t APB1ENR_CAN1EN = 0x2000000; // CAN1 clock enable
    static constexpr uint32_t APB1ENR_CAN2EN = 0x4000000; // CAN2 clock enable
    static constexpr uint32_t APB1ENR_BKPEN = 0x8000000; // Backup interface clock enable
    static constexpr uint32_t APB1ENR_PWREN = 0x10000000; // Power interface clock enable
    static constexpr uint32_t APB1ENR_DACEN = 0x20000000; // DAC interface clock enable

    static constexpr uint32_t BDCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BDCR_LSEON = 0x1; // External Low Speed oscillator enable
    static constexpr uint32_t BDCR_LSERDY = 0x2; // External Low Speed oscillator ready
    static constexpr uint32_t BDCR_LSEBYP = 0x4; // External Low Speed oscillator bypass
    typedef bit_field_t<8, 0x3> BDCR_RTCSEL; // RTC clock source selection
    static constexpr uint32_t BDCR_RTCEN = 0x8000; // RTC clock enable
    static constexpr uint32_t BDCR_BDRST = 0x10000; // Backup domain software reset

    static constexpr uint32_t CSR_RESET_VALUE = 0xc000000; // Reset value
    static constexpr uint32_t CSR_LSION = 0x1; // Internal low speed oscillator enable
    static constexpr uint32_t CSR_LSIRDY = 0x2; // Internal low speed oscillator ready
    static constexpr uint32_t CSR_RMVF = 0x1000000; // Remove reset flag
    static constexpr uint32_t CSR_PINRSTF = 0x4000000; // PIN reset flag
    static constexpr uint32_t CSR_PORRSTF = 0x8000000; // POR/PDR reset flag
    static constexpr uint32_t CSR_SFTRSTF = 0x10000000; // Software reset flag
    static constexpr uint32_t CSR_IWDGRSTF = 0x20000000; // Independent watchdog reset flag
    static constexpr uint32_t CSR_WWDGRSTF = 0x40000000; // Window watchdog reset flag
    static constexpr uint32_t CSR_LPWRRSTF = 0x80000000; // Low-power reset flag

    static constexpr uint32_t AHBRSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHBRSTR_OTGFSRST = 0x1000; // USB OTG FS reset
    static constexpr uint32_t AHBRSTR_ETHMACRST = 0x4000; // Ethernet MAC reset

    static constexpr uint32_t CFGR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> CFGR2_PREDIV1; // PREDIV1 division factor
    typedef bit_field_t<4, 0xf> CFGR2_PREDIV2; // PREDIV2 division factor
    typedef bit_field_t<8, 0xf> CFGR2_PLL2MUL; // PLL2 Multiplication Factor
    typedef bit_field_t<12, 0xf> CFGR2_PLL3MUL; // PLL3 Multiplication Factor
    static constexpr uint32_t CFGR2_PREDIV1SRC = 0x10000; // PREDIV1 entry clock source
    static constexpr uint32_t CFGR2_I2S2SRC = 0x20000; // I2S2 clock source
    static constexpr uint32_t CFGR2_I2S3SRC = 0x40000; // I2S3 clock source
};

template<>
struct peripheral_t<STM32F100, RCC>
{
    static constexpr periph_t P = RCC;
    using T = stm32f100_rcc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F101, RCC>
{
    static constexpr periph_t P = RCC;
    using T = stm32f101_rcc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F102, RCC>
{
    static constexpr periph_t P = RCC;
    using T = stm32f102_rcc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F103, RCC>
{
    static constexpr periph_t P = RCC;
    using T = stm32f103_rcc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F107, RCC>
{
    static constexpr periph_t P = RCC;
    using T = stm32f107_rcc_t;
    static T& V;
};

using rcc_t = peripheral_t<svd, RCC>;
