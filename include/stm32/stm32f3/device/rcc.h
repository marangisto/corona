#pragma once

////
//
//      STM32F3 RCC peripherals
//
///

// RCC: Reset and clock control

struct stm32f301_rcc_t
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
    volatile uint32_t AHBRSTR; // AHB peripheral reset register
    volatile uint32_t CFGR2; // Clock configuration register 2
    volatile uint32_t CFGR3; // Clock configuration register 3

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
    typedef bit_field_t<11, 0x7> CFGR_PPRE2; // APB high speed prescaler (APB2)
    static constexpr uint32_t CFGR_PLLSRC = 0x10000; // PLL entry clock source
    static constexpr uint32_t CFGR_PLLXTPRE = 0x20000; // HSE divider for PLL entry
    typedef bit_field_t<18, 0xf> CFGR_PLLMUL; // PLL Multiplication Factor
    static constexpr uint32_t CFGR_I2SSRC = 0x800000; // I2S external clock source selection
    typedef bit_field_t<24, 0x7> CFGR_MCO; // Microcontroller clock output
    typedef bit_field_t<28, 0x7> CFGR_MCOPRE; // Microcontroller Clock Output Prescaler
    static constexpr uint32_t CFGR_PLLNODIV = 0x80000000; // Do not divide PLL to MCO

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
    static constexpr uint32_t APB2RSTR_SYSCFGRST = 0x1; // SYSCFG and COMP reset
    static constexpr uint32_t APB2RSTR_TIM1RST = 0x800; // TIM1 timer reset
    static constexpr uint32_t APB2RSTR_USART1RST = 0x4000; // USART1 reset
    static constexpr uint32_t APB2RSTR_TIM15RST = 0x10000; // TIM15 timer reset
    static constexpr uint32_t APB2RSTR_TIM16RST = 0x20000; // TIM16 timer reset
    static constexpr uint32_t APB2RSTR_TIM17RST = 0x40000; // TIM17 timer reset

    static constexpr uint32_t APB1RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1RSTR_TIM2RST = 0x1; // Timer 2 reset
    static constexpr uint32_t APB1RSTR_TIM6RST = 0x10; // Timer 6 reset
    static constexpr uint32_t APB1RSTR_WWDGRST = 0x800; // Window watchdog reset
    static constexpr uint32_t APB1RSTR_SPI2RST = 0x4000; // SPI2 reset
    static constexpr uint32_t APB1RSTR_SPI3RST = 0x8000; // SPI3 reset
    static constexpr uint32_t APB1RSTR_USART2RST = 0x20000; // USART 2 reset
    static constexpr uint32_t APB1RSTR_USART3RST = 0x40000; // USART3 reset
    static constexpr uint32_t APB1RSTR_I2C1RST = 0x200000; // I2C1 reset
    static constexpr uint32_t APB1RSTR_I2C2RST = 0x400000; // I2C2 reset
    static constexpr uint32_t APB1RSTR_PWRRST = 0x10000000; // Power interface reset
    static constexpr uint32_t APB1RSTR_DACRST = 0x20000000; // DAC interface reset
    static constexpr uint32_t APB1RSTR_CECRST = 0x40000000; // HDMI CEC reset

    static constexpr uint32_t AHBENR_RESET_VALUE = 0x14; // Reset value
    static constexpr uint32_t AHBENR_DMA1EN = 0x1; // DMA1 clock enable
    static constexpr uint32_t AHBENR_SRAMEN = 0x4; // SRAM interface clock enable
    static constexpr uint32_t AHBENR_FLASHEN = 0x10; // FLITF clock enable
    static constexpr uint32_t AHBENR_CRCEN = 0x40; // CRC clock enable
    static constexpr uint32_t AHBENR_IOPAEN = 0x20000; // I/O port A clock enable
    static constexpr uint32_t AHBENR_IOPBEN = 0x40000; // I/O port B clock enable
    static constexpr uint32_t AHBENR_IOPCEN = 0x80000; // I/O port C clock enable
    static constexpr uint32_t AHBENR_IOPDEN = 0x100000; // I/O port D clock enable
    static constexpr uint32_t AHBENR_IOPFEN = 0x400000; // I/O port F clock enable
    static constexpr uint32_t AHBENR_TSCEN = 0x1000000; // Touch sensing controller clock enable
    static constexpr uint32_t AHBENR_ADC1EN = 0x10000000; // ADC 1

    static constexpr uint32_t APB2ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2ENR_SYSCFGEN = 0x1; // SYSCFG clock enable
    static constexpr uint32_t APB2ENR_TIM1EN = 0x800; // TIM1 Timer clock enable
    static constexpr uint32_t APB2ENR_USART1EN = 0x4000; // USART1 clock enable
    static constexpr uint32_t APB2ENR_TIM15EN = 0x10000; // TIM15 timer clock enable
    static constexpr uint32_t APB2ENR_TIM16EN = 0x20000; // TIM16 timer clock enable
    static constexpr uint32_t APB2ENR_TIM17EN = 0x40000; // TIM17 timer clock enable

    static constexpr uint32_t APB1ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1ENR_TIM2EN = 0x1; // Timer 2 clock enable
    static constexpr uint32_t APB1ENR_TIM6EN = 0x10; // Timer 6 clock enable
    static constexpr uint32_t APB1ENR_WWDGEN = 0x800; // Window watchdog clock enable
    static constexpr uint32_t APB1ENR_SPI2EN = 0x4000; // SPI 2 clock enable
    static constexpr uint32_t APB1ENR_SPI3EN = 0x8000; // SPI 3 clock enable
    static constexpr uint32_t APB1ENR_USART2EN = 0x20000; // USART 2 clock enable
    static constexpr uint32_t APB1ENR_USART3EN = 0x40000; // USART 3 clock enable
    static constexpr uint32_t APB1ENR_I2C1EN = 0x200000; // I2C 1 clock enable
    static constexpr uint32_t APB1ENR_I2C2EN = 0x400000; // I2C 2 clock enable
    static constexpr uint32_t APB1ENR_PWREN = 0x10000000; // Power interface clock enable
    static constexpr uint32_t APB1ENR_DACEN = 0x20000000; // DAC interface clock enable
    static constexpr uint32_t APB1ENR_CECEN = 0x40000000; // HDMI CEC interface clock enable

    static constexpr uint32_t BDCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BDCR_LSEON = 0x1; // External Low Speed oscillator enable
    static constexpr uint32_t BDCR_LSERDY = 0x2; // External Low Speed oscillator ready
    static constexpr uint32_t BDCR_LSEBYP = 0x4; // External Low Speed oscillator bypass
    typedef bit_field_t<3, 0x3> BDCR_LSEDRV; // LSE oscillator drive capability
    typedef bit_field_t<8, 0x3> BDCR_RTCSEL; // RTC clock source selection
    static constexpr uint32_t BDCR_RTCEN = 0x8000; // RTC clock enable
    static constexpr uint32_t BDCR_BDRST = 0x10000; // Backup domain software reset

    static constexpr uint32_t CSR_RESET_VALUE = 0xc000000; // Reset value
    static constexpr uint32_t CSR_LSION = 0x1; // Internal low speed oscillator enable
    static constexpr uint32_t CSR_LSIRDY = 0x2; // Internal low speed oscillator ready
    static constexpr uint32_t CSR_RMVF = 0x1000000; // Remove reset flag
    static constexpr uint32_t CSR_OBLRSTF = 0x2000000; // Option byte loader reset flag
    static constexpr uint32_t CSR_PINRSTF = 0x4000000; // PIN reset flag
    static constexpr uint32_t CSR_PORRSTF = 0x8000000; // POR/PDR reset flag
    static constexpr uint32_t CSR_SFTRSTF = 0x10000000; // Software reset flag
    static constexpr uint32_t CSR_IWDGRSTF = 0x20000000; // Independent watchdog reset flag
    static constexpr uint32_t CSR_WWDGRSTF = 0x40000000; // Window watchdog reset flag
    static constexpr uint32_t CSR_LPWRRSTF = 0x80000000; // Low-power reset flag

    static constexpr uint32_t AHBRSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHBRSTR_IOPARST = 0x20000; // I/O port A reset
    static constexpr uint32_t AHBRSTR_IOPBRST = 0x40000; // I/O port B reset
    static constexpr uint32_t AHBRSTR_IOPCRST = 0x80000; // I/O port C reset
    static constexpr uint32_t AHBRSTR_IOPDRST = 0x100000; // I/O port D reset
    static constexpr uint32_t AHBRSTR_IOPFRST = 0x400000; // I/O port F reset
    static constexpr uint32_t AHBRSTR_TSCRST = 0x1000000; // Touch sensing controller reset
    static constexpr uint32_t AHBRSTR_ADC1RST = 0x10000000; // ADC1 reset

    static constexpr uint32_t CFGR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> CFGR2_PREDIV; // PREDIV division factor
    typedef bit_field_t<4, 0xf> CFGR2_ADC1PRES; // ADC1 prescaler

    static constexpr uint32_t CFGR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> CFGR3_USART1SW; // USART1 clock source selection
    static constexpr uint32_t CFGR3_I2C1SW = 0x10; // I2C1 clock source selection
    static constexpr uint32_t CFGR3_I2C2SW = 0x20; // I2C2 clock source selection
    static constexpr uint32_t CFGR3_CECSW = 0x40; // HDMI CEC clock source selection
    static constexpr uint32_t CFGR3_TIM1SW = 0x100; // Timer1 clock source selection
    static constexpr uint32_t CFGR3_TIM15SW = 0x400; // Timer15 clock source selection
    static constexpr uint32_t CFGR3_TIM16SW = 0x800; // Timer16 clock source selection
    typedef bit_field_t<13, 0x3> CFGR3_TIM17SW; // Timer17 clock source selection
};

// RCC: Reset and clock control

struct stm32f302_rcc_t
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
    volatile uint32_t AHBRSTR; // AHB peripheral reset register
    volatile uint32_t CFGR2; // Clock configuration register 2
    volatile uint32_t CFGR3; // Clock configuration register 3

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
    typedef bit_field_t<11, 0x7> CFGR_PPRE2; // APB high speed prescaler (APB2)
    typedef bit_field_t<15, 0x3> CFGR_PLLSRC; // PLL entry clock source
    static constexpr uint32_t CFGR_PLLXTPRE = 0x20000; // HSE divider for PLL entry
    typedef bit_field_t<18, 0xf> CFGR_PLLMUL; // PLL Multiplication Factor
    static constexpr uint32_t CFGR_USBPRES = 0x400000; // USB prescaler
    typedef bit_field_t<24, 0x7> CFGR_MCO; // Microcontroller clock output
    static constexpr uint32_t CFGR_MCOF = 0x10000000; // Microcontroller Clock Output Flag
    static constexpr uint32_t CFGR_I2SSRC = 0x800000; // I2S external clock source selection

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
    static constexpr uint32_t APB2RSTR_SYSCFGRST = 0x1; // SYSCFG and COMP reset
    static constexpr uint32_t APB2RSTR_TIM1RST = 0x800; // TIM1 timer reset
    static constexpr uint32_t APB2RSTR_SPI1RST = 0x1000; // SPI 1 reset
    static constexpr uint32_t APB2RSTR_TIM8RST = 0x2000; // TIM8 timer reset
    static constexpr uint32_t APB2RSTR_USART1RST = 0x4000; // USART1 reset
    static constexpr uint32_t APB2RSTR_TIM15RST = 0x10000; // TIM15 timer reset
    static constexpr uint32_t APB2RSTR_TIM16RST = 0x20000; // TIM16 timer reset
    static constexpr uint32_t APB2RSTR_TIM17RST = 0x40000; // TIM17 timer reset

    static constexpr uint32_t APB1RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1RSTR_TIM2RST = 0x1; // Timer 2 reset
    static constexpr uint32_t APB1RSTR_TIM3RST = 0x2; // Timer 3 reset
    static constexpr uint32_t APB1RSTR_TIM4RST = 0x4; // Timer 14 reset
    static constexpr uint32_t APB1RSTR_TIM6RST = 0x10; // Timer 6 reset
    static constexpr uint32_t APB1RSTR_TIM7RST = 0x20; // Timer 7 reset
    static constexpr uint32_t APB1RSTR_WWDGRST = 0x800; // Window watchdog reset
    static constexpr uint32_t APB1RSTR_SPI2RST = 0x4000; // SPI2 reset
    static constexpr uint32_t APB1RSTR_SPI3RST = 0x8000; // SPI3 reset
    static constexpr uint32_t APB1RSTR_USART2RST = 0x20000; // USART 2 reset
    static constexpr uint32_t APB1RSTR_USART3RST = 0x40000; // USART3 reset
    static constexpr uint32_t APB1RSTR_UART4RST = 0x80000; // UART 4 reset
    static constexpr uint32_t APB1RSTR_UART5RST = 0x100000; // UART 5 reset
    static constexpr uint32_t APB1RSTR_I2C1RST = 0x200000; // I2C1 reset
    static constexpr uint32_t APB1RSTR_I2C2RST = 0x400000; // I2C2 reset
    static constexpr uint32_t APB1RSTR_USBRST = 0x800000; // USB reset
    static constexpr uint32_t APB1RSTR_CANRST = 0x2000000; // CAN reset
    static constexpr uint32_t APB1RSTR_PWRRST = 0x10000000; // Power interface reset
    static constexpr uint32_t APB1RSTR_DACRST = 0x20000000; // DAC interface reset

    static constexpr uint32_t AHBENR_RESET_VALUE = 0x14; // Reset value
    static constexpr uint32_t AHBENR_DMA1EN = 0x1; // DMA1 clock enable
    static constexpr uint32_t AHBENR_DMA2EN = 0x2; // DMA2 clock enable
    static constexpr uint32_t AHBENR_SRAMEN = 0x4; // SRAM interface clock enable
    static constexpr uint32_t AHBENR_FLASHEN = 0x10; // FLITF clock enable
    static constexpr uint32_t AHBENR_CRCEN = 0x40; // CRC clock enable
    static constexpr uint32_t AHBENR_IOPAEN = 0x20000; // I/O port A clock enable
    static constexpr uint32_t AHBENR_IOPBEN = 0x40000; // I/O port B clock enable
    static constexpr uint32_t AHBENR_IOPCEN = 0x80000; // I/O port C clock enable
    static constexpr uint32_t AHBENR_IOPDEN = 0x100000; // I/O port D clock enable
    static constexpr uint32_t AHBENR_IOPEEN = 0x200000; // I/O port E clock enable
    static constexpr uint32_t AHBENR_IOPFEN = 0x400000; // I/O port F clock enable
    static constexpr uint32_t AHBENR_TSCEN = 0x1000000; // Touch sensing controller clock enable
    static constexpr uint32_t AHBENR_ADC12_COMMONEN = 0x10000000; // ADC1 and ADC2 clock enable
    static constexpr uint32_t AHBENR_ADC34EN = 0x20000000; // ADC3 and ADC4 clock enable

    static constexpr uint32_t APB2ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2ENR_SYSCFGEN = 0x1; // SYSCFG clock enable
    static constexpr uint32_t APB2ENR_TIM1EN = 0x800; // TIM1 Timer clock enable
    static constexpr uint32_t APB2ENR_SPI1EN = 0x1000; // SPI 1 clock enable
    static constexpr uint32_t APB2ENR_TIM8EN = 0x2000; // TIM8 Timer clock enable
    static constexpr uint32_t APB2ENR_USART1EN = 0x4000; // USART1 clock enable
    static constexpr uint32_t APB2ENR_TIM15EN = 0x10000; // TIM15 timer clock enable
    static constexpr uint32_t APB2ENR_TIM16EN = 0x20000; // TIM16 timer clock enable
    static constexpr uint32_t APB2ENR_TIM17EN = 0x40000; // TIM17 timer clock enable

    static constexpr uint32_t APB1ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1ENR_TIM2EN = 0x1; // Timer 2 clock enable
    static constexpr uint32_t APB1ENR_TIM3EN = 0x2; // Timer 3 clock enable
    static constexpr uint32_t APB1ENR_TIM4EN = 0x4; // Timer 4 clock enable
    static constexpr uint32_t APB1ENR_TIM6EN = 0x10; // Timer 6 clock enable
    static constexpr uint32_t APB1ENR_TIM7EN = 0x20; // Timer 7 clock enable
    static constexpr uint32_t APB1ENR_WWDGEN = 0x800; // Window watchdog clock enable
    static constexpr uint32_t APB1ENR_SPI2EN = 0x4000; // SPI 2 clock enable
    static constexpr uint32_t APB1ENR_SPI3EN = 0x8000; // SPI 3 clock enable
    static constexpr uint32_t APB1ENR_USART2EN = 0x20000; // USART 2 clock enable
    static constexpr uint32_t APB1ENR_I2C1EN = 0x200000; // I2C 1 clock enable
    static constexpr uint32_t APB1ENR_I2C2EN = 0x400000; // I2C 2 clock enable
    static constexpr uint32_t APB1ENR_USBEN = 0x800000; // USB clock enable
    static constexpr uint32_t APB1ENR_CANEN = 0x2000000; // CAN clock enable
    static constexpr uint32_t APB1ENR_PWREN = 0x10000000; // Power interface clock enable
    static constexpr uint32_t APB1ENR_DACEN = 0x20000000; // DAC interface clock enable

    static constexpr uint32_t BDCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BDCR_LSEON = 0x1; // External Low Speed oscillator enable
    static constexpr uint32_t BDCR_LSERDY = 0x2; // External Low Speed oscillator ready
    static constexpr uint32_t BDCR_LSEBYP = 0x4; // External Low Speed oscillator bypass
    typedef bit_field_t<3, 0x3> BDCR_LSEDRV; // LSE oscillator drive capability
    typedef bit_field_t<8, 0x3> BDCR_RTCSEL; // RTC clock source selection
    static constexpr uint32_t BDCR_RTCEN = 0x8000; // RTC clock enable
    static constexpr uint32_t BDCR_BDRST = 0x10000; // Backup domain software reset

    static constexpr uint32_t CSR_RESET_VALUE = 0xc000000; // Reset value
    static constexpr uint32_t CSR_LSION = 0x1; // Internal low speed oscillator enable
    static constexpr uint32_t CSR_LSIRDY = 0x2; // Internal low speed oscillator ready
    static constexpr uint32_t CSR_RMVF = 0x1000000; // Remove reset flag
    static constexpr uint32_t CSR_OBLRSTF = 0x2000000; // Option byte loader reset flag
    static constexpr uint32_t CSR_PINRSTF = 0x4000000; // PIN reset flag
    static constexpr uint32_t CSR_PORRSTF = 0x8000000; // POR/PDR reset flag
    static constexpr uint32_t CSR_SFTRSTF = 0x10000000; // Software reset flag
    static constexpr uint32_t CSR_IWDGRSTF = 0x20000000; // Independent watchdog reset flag
    static constexpr uint32_t CSR_WWDGRSTF = 0x40000000; // Window watchdog reset flag
    static constexpr uint32_t CSR_LPWRRSTF = 0x80000000; // Low-power reset flag

    static constexpr uint32_t AHBRSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHBRSTR_IOPARST = 0x20000; // I/O port A reset
    static constexpr uint32_t AHBRSTR_IOPBRST = 0x40000; // I/O port B reset
    static constexpr uint32_t AHBRSTR_IOPCRST = 0x80000; // I/O port C reset
    static constexpr uint32_t AHBRSTR_IOPDRST = 0x100000; // I/O port D reset
    static constexpr uint32_t AHBRSTR_IOPERST = 0x200000; // I/O port E reset
    static constexpr uint32_t AHBRSTR_IOPFRST = 0x400000; // I/O port F reset
    static constexpr uint32_t AHBRSTR_TSCRST = 0x1000000; // Touch sensing controller reset
    static constexpr uint32_t AHBRSTR_ADC12_COMMONRST = 0x10000000; // ADC1 and ADC2 reset
    static constexpr uint32_t AHBRSTR_ADC34RST = 0x20000000; // ADC3 and ADC4 reset

    static constexpr uint32_t CFGR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> CFGR2_PREDIV; // PREDIV division factor
    typedef bit_field_t<4, 0x1f> CFGR2_ADC12PRES; // ADC1 and ADC2 prescaler
    typedef bit_field_t<9, 0x1f> CFGR2_ADC34PRES; // ADC3 and ADC4 prescaler

    static constexpr uint32_t CFGR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> CFGR3_USART1SW; // USART1 clock source selection
    static constexpr uint32_t CFGR3_I2C1SW = 0x10; // I2C1 clock source selection
    static constexpr uint32_t CFGR3_I2C2SW = 0x20; // I2C2 clock source selection
    typedef bit_field_t<16, 0x3> CFGR3_USART2SW; // USART2 clock source selection
    typedef bit_field_t<18, 0x3> CFGR3_USART3SW; // USART3 clock source selection
    static constexpr uint32_t CFGR3_TIM1SW = 0x100; // Timer1 clock source selection
    static constexpr uint32_t CFGR3_TIM8SW = 0x200; // Timer8 clock source selection
    typedef bit_field_t<20, 0x3> CFGR3_UART4SW; // UART4 clock source selection
    typedef bit_field_t<22, 0x3> CFGR3_UART5SW; // UART5 clock source selection
};

// RCC: Reset and clock control

struct stm32f303_rcc_t
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
    volatile uint32_t AHBRSTR; // AHB peripheral reset register
    volatile uint32_t CFGR2; // Clock configuration register 2
    volatile uint32_t CFGR3; // Clock configuration register 3

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
    typedef bit_field_t<11, 0x7> CFGR_PPRE2; // APB high speed prescaler (APB2)
    typedef bit_field_t<15, 0x3> CFGR_PLLSRC; // PLL entry clock source
    static constexpr uint32_t CFGR_PLLXTPRE = 0x20000; // HSE divider for PLL entry
    typedef bit_field_t<18, 0xf> CFGR_PLLMUL; // PLL Multiplication Factor
    static constexpr uint32_t CFGR_USBPRES = 0x400000; // USB prescaler
    typedef bit_field_t<24, 0x7> CFGR_MCO; // Microcontroller clock output
    static constexpr uint32_t CFGR_MCOF = 0x10000000; // Microcontroller Clock Output Flag
    static constexpr uint32_t CFGR_I2SSRC = 0x800000; // I2S external clock source selection

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
    static constexpr uint32_t APB2RSTR_SYSCFGRST = 0x1; // SYSCFG and COMP reset
    static constexpr uint32_t APB2RSTR_TIM1RST = 0x800; // TIM1 timer reset
    static constexpr uint32_t APB2RSTR_SPI1RST = 0x1000; // SPI 1 reset
    static constexpr uint32_t APB2RSTR_TIM8RST = 0x2000; // TIM8 timer reset
    static constexpr uint32_t APB2RSTR_USART1RST = 0x4000; // USART1 reset
    static constexpr uint32_t APB2RSTR_TIM15RST = 0x10000; // TIM15 timer reset
    static constexpr uint32_t APB2RSTR_TIM16RST = 0x20000; // TIM16 timer reset
    static constexpr uint32_t APB2RSTR_TIM17RST = 0x40000; // TIM17 timer reset

    static constexpr uint32_t APB1RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1RSTR_TIM2RST = 0x1; // Timer 2 reset
    static constexpr uint32_t APB1RSTR_TIM3RST = 0x2; // Timer 3 reset
    static constexpr uint32_t APB1RSTR_TIM4RST = 0x4; // Timer 14 reset
    static constexpr uint32_t APB1RSTR_TIM6RST = 0x10; // Timer 6 reset
    static constexpr uint32_t APB1RSTR_TIM7RST = 0x20; // Timer 7 reset
    static constexpr uint32_t APB1RSTR_WWDGRST = 0x800; // Window watchdog reset
    static constexpr uint32_t APB1RSTR_SPI2RST = 0x4000; // SPI2 reset
    static constexpr uint32_t APB1RSTR_SPI3RST = 0x8000; // SPI3 reset
    static constexpr uint32_t APB1RSTR_USART2RST = 0x20000; // USART 2 reset
    static constexpr uint32_t APB1RSTR_USART3RST = 0x40000; // USART3 reset
    static constexpr uint32_t APB1RSTR_UART4RST = 0x80000; // UART 4 reset
    static constexpr uint32_t APB1RSTR_UART5RST = 0x100000; // UART 5 reset
    static constexpr uint32_t APB1RSTR_I2C1RST = 0x200000; // I2C1 reset
    static constexpr uint32_t APB1RSTR_I2C2RST = 0x400000; // I2C2 reset
    static constexpr uint32_t APB1RSTR_USBRST = 0x800000; // USB reset
    static constexpr uint32_t APB1RSTR_CANRST = 0x2000000; // CAN reset
    static constexpr uint32_t APB1RSTR_PWRRST = 0x10000000; // Power interface reset
    static constexpr uint32_t APB1RSTR_DACRST = 0x20000000; // DAC interface reset
    static constexpr uint32_t APB1RSTR_I2C3RST = 0x40000000; // I2C3 reset

    static constexpr uint32_t AHBENR_RESET_VALUE = 0x14; // Reset value
    static constexpr uint32_t AHBENR_DMA1EN = 0x1; // DMA1 clock enable
    static constexpr uint32_t AHBENR_DMA2EN = 0x2; // DMA2 clock enable
    static constexpr uint32_t AHBENR_SRAMEN = 0x4; // SRAM interface clock enable
    static constexpr uint32_t AHBENR_FLASHEN = 0x10; // FLITF clock enable
    static constexpr uint32_t AHBENR_FMCEN = 0x20; // FMC clock enable
    static constexpr uint32_t AHBENR_CRCEN = 0x40; // CRC clock enable
    static constexpr uint32_t AHBENR_IOPHEN = 0x10000; // IO port H clock enable
    static constexpr uint32_t AHBENR_IOPAEN = 0x20000; // I/O port A clock enable
    static constexpr uint32_t AHBENR_IOPBEN = 0x40000; // I/O port B clock enable
    static constexpr uint32_t AHBENR_IOPCEN = 0x80000; // I/O port C clock enable
    static constexpr uint32_t AHBENR_IOPDEN = 0x100000; // I/O port D clock enable
    static constexpr uint32_t AHBENR_IOPEEN = 0x200000; // I/O port E clock enable
    static constexpr uint32_t AHBENR_IOPFEN = 0x400000; // I/O port F clock enable
    static constexpr uint32_t AHBENR_IOPGEN = 0x800000; // I/O port G clock enable
    static constexpr uint32_t AHBENR_TSCEN = 0x1000000; // Touch sensing controller clock enable
    static constexpr uint32_t AHBENR_ADC12_COMMONEN = 0x10000000; // ADC1 and ADC2 clock enable
    static constexpr uint32_t AHBENR_ADC34EN = 0x20000000; // ADC3 and ADC4 clock enable

    static constexpr uint32_t APB2ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2ENR_SYSCFGEN = 0x1; // SYSCFG clock enable
    static constexpr uint32_t APB2ENR_TIM1EN = 0x800; // TIM1 Timer clock enable
    static constexpr uint32_t APB2ENR_SPI1EN = 0x1000; // SPI 1 clock enable
    static constexpr uint32_t APB2ENR_TIM8EN = 0x2000; // TIM8 Timer clock enable
    static constexpr uint32_t APB2ENR_USART1EN = 0x4000; // USART1 clock enable
    static constexpr uint32_t APB2ENR_TIM15EN = 0x10000; // TIM15 timer clock enable
    static constexpr uint32_t APB2ENR_TIM16EN = 0x20000; // TIM16 timer clock enable
    static constexpr uint32_t APB2ENR_TIM17EN = 0x40000; // TIM17 timer clock enable

    static constexpr uint32_t APB1ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1ENR_TIM2EN = 0x1; // Timer 2 clock enable
    static constexpr uint32_t APB1ENR_TIM3EN = 0x2; // Timer 3 clock enable
    static constexpr uint32_t APB1ENR_TIM4EN = 0x4; // Timer 4 clock enable
    static constexpr uint32_t APB1ENR_TIM6EN = 0x10; // Timer 6 clock enable
    static constexpr uint32_t APB1ENR_TIM7EN = 0x20; // Timer 7 clock enable
    static constexpr uint32_t APB1ENR_WWDGEN = 0x800; // Window watchdog clock enable
    static constexpr uint32_t APB1ENR_SPI2EN = 0x4000; // SPI 2 clock enable
    static constexpr uint32_t APB1ENR_SPI3EN = 0x8000; // SPI 3 clock enable
    static constexpr uint32_t APB1ENR_USART2EN = 0x20000; // USART 2 clock enable
    static constexpr uint32_t APB1ENR_USART3EN = 0x40000; // USART 3 clock enable
    static constexpr uint32_t APB1ENR_USART4EN = 0x80000; // USART 4 clock enable
    static constexpr uint32_t APB1ENR_USART5EN = 0x100000; // USART 5 clock enable
    static constexpr uint32_t APB1ENR_I2C1EN = 0x200000; // I2C 1 clock enable
    static constexpr uint32_t APB1ENR_I2C2EN = 0x400000; // I2C 2 clock enable
    static constexpr uint32_t APB1ENR_USBEN = 0x800000; // USB clock enable
    static constexpr uint32_t APB1ENR_CANEN = 0x2000000; // CAN clock enable
    static constexpr uint32_t APB1ENR_DAC2EN = 0x4000000; // DAC2 interface clock enable
    static constexpr uint32_t APB1ENR_PWREN = 0x10000000; // Power interface clock enable
    static constexpr uint32_t APB1ENR_DACEN = 0x20000000; // DAC interface clock enable
    static constexpr uint32_t APB1ENR_I2C3EN = 0x40000000; // I2C3 clock enable

    static constexpr uint32_t BDCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BDCR_LSEON = 0x1; // External Low Speed oscillator enable
    static constexpr uint32_t BDCR_LSERDY = 0x2; // External Low Speed oscillator ready
    static constexpr uint32_t BDCR_LSEBYP = 0x4; // External Low Speed oscillator bypass
    typedef bit_field_t<3, 0x3> BDCR_LSEDRV; // LSE oscillator drive capability
    typedef bit_field_t<8, 0x3> BDCR_RTCSEL; // RTC clock source selection
    static constexpr uint32_t BDCR_RTCEN = 0x8000; // RTC clock enable
    static constexpr uint32_t BDCR_BDRST = 0x10000; // Backup domain software reset

    static constexpr uint32_t CSR_RESET_VALUE = 0xc000000; // Reset value
    static constexpr uint32_t CSR_LSION = 0x1; // Internal low speed oscillator enable
    static constexpr uint32_t CSR_LSIRDY = 0x2; // Internal low speed oscillator ready
    static constexpr uint32_t CSR_RMVF = 0x1000000; // Remove reset flag
    static constexpr uint32_t CSR_OBLRSTF = 0x2000000; // Option byte loader reset flag
    static constexpr uint32_t CSR_PINRSTF = 0x4000000; // PIN reset flag
    static constexpr uint32_t CSR_PORRSTF = 0x8000000; // POR/PDR reset flag
    static constexpr uint32_t CSR_SFTRSTF = 0x10000000; // Software reset flag
    static constexpr uint32_t CSR_IWDGRSTF = 0x20000000; // Independent watchdog reset flag
    static constexpr uint32_t CSR_WWDGRSTF = 0x40000000; // Window watchdog reset flag
    static constexpr uint32_t CSR_LPWRRSTF = 0x80000000; // Low-power reset flag

    static constexpr uint32_t AHBRSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHBRSTR_FMCRST = 0x20; // FMC reset
    static constexpr uint32_t AHBRSTR_IOPHRST = 0x10000; // I/O port H reset
    static constexpr uint32_t AHBRSTR_IOPARST = 0x20000; // I/O port A reset
    static constexpr uint32_t AHBRSTR_IOPBRST = 0x40000; // I/O port B reset
    static constexpr uint32_t AHBRSTR_IOPCRST = 0x80000; // I/O port C reset
    static constexpr uint32_t AHBRSTR_IOPDRST = 0x100000; // I/O port D reset
    static constexpr uint32_t AHBRSTR_IOPERST = 0x200000; // I/O port E reset
    static constexpr uint32_t AHBRSTR_IOPFRST = 0x400000; // I/O port F reset
    static constexpr uint32_t AHBRSTR_IOPGRST = 0x800000; // Touch sensing controller reset
    static constexpr uint32_t AHBRSTR_TSCRST = 0x1000000; // Touch sensing controller reset
    static constexpr uint32_t AHBRSTR_ADC12_COMMONRST = 0x10000000; // ADC1 and ADC2 reset
    static constexpr uint32_t AHBRSTR_ADC34RST = 0x20000000; // ADC3 and ADC4 reset

    static constexpr uint32_t CFGR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> CFGR2_PREDIV; // PREDIV division factor
    typedef bit_field_t<4, 0x1f> CFGR2_ADC12PRES; // ADC1 and ADC2 prescaler
    typedef bit_field_t<9, 0x1f> CFGR2_ADC34PRES; // ADC3 and ADC4 prescaler

    static constexpr uint32_t CFGR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> CFGR3_USART1SW; // USART1 clock source selection
    static constexpr uint32_t CFGR3_I2C1SW = 0x10; // I2C1 clock source selection
    static constexpr uint32_t CFGR3_I2C2SW = 0x20; // I2C2 clock source selection
    static constexpr uint32_t CFGR3_I2C3SW = 0x40; // I2C3 clock source selection
    typedef bit_field_t<16, 0x3> CFGR3_USART2SW; // USART2 clock source selection
    typedef bit_field_t<18, 0x3> CFGR3_USART3SW; // USART3 clock source selection
    static constexpr uint32_t CFGR3_TIM1SW = 0x100; // Timer1 clock source selection
    static constexpr uint32_t CFGR3_TIM8SW = 0x200; // Timer8 clock source selection
    typedef bit_field_t<20, 0x3> CFGR3_UART4SW; // UART4 clock source selection
    typedef bit_field_t<22, 0x3> CFGR3_UART5SW; // UART5 clock source selection
};

// RCC: Reset and clock control

struct stm32f373_rcc_t
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
    volatile uint32_t AHBRSTR; // AHB peripheral reset register
    volatile uint32_t CFGR2; // Clock configuration register 2
    volatile uint32_t CFGR3; // Clock configuration register 3

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
    typedef bit_field_t<11, 0x7> CFGR_PPRE2; // APB high speed prescaler (APB2)
    typedef bit_field_t<14, 0x3> CFGR_ADCPRE; // ADC prescaler
    static constexpr uint32_t CFGR_PLLSRC = 0x10000; // PLL entry clock source
    static constexpr uint32_t CFGR_PLLXTPRE = 0x20000; // HSE divider for PLL entry
    typedef bit_field_t<18, 0xf> CFGR_PLLMUL; // PLL Multiplication Factor
    static constexpr uint32_t CFGR_USBPRE = 0x400000; // USB prescaler
    typedef bit_field_t<24, 0x7> CFGR_MCO; // Microcontroller clock output
    typedef bit_field_t<27, 0x1f> CFGR_SDPRE; // SDADC prescaler

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
    static constexpr uint32_t APB2RSTR_SYSCFGRST = 0x1; // SYSCFG and COMP reset
    static constexpr uint32_t APB2RSTR_ADC1RST = 0x200; // ADC interface reset
    static constexpr uint32_t APB2RSTR_SPI1RST = 0x1000; // SPI 1 reset
    static constexpr uint32_t APB2RSTR_USART1RST = 0x4000; // USART1 reset
    static constexpr uint32_t APB2RSTR_TIM15RST = 0x10000; // TIM15 timer reset
    static constexpr uint32_t APB2RSTR_TIM16RST = 0x20000; // TIM16 timer reset
    static constexpr uint32_t APB2RSTR_TIM17RST = 0x40000; // TIM17 timer reset
    static constexpr uint32_t APB2RSTR_TIM19RST = 0x80000; // TIM19 timer reset
    static constexpr uint32_t APB2RSTR_SDAD1RST = 0x1000000; // SDADC1 (Sigma delta ADC 1) reset
    static constexpr uint32_t APB2RSTR_SDAD2RST = 0x2000000; // SDADC2 (Sigma delta ADC 2) reset
    static constexpr uint32_t APB2RSTR_SDAD3RST = 0x4000000; // SDADC3 (Sigma delta ADC 3) reset

    static constexpr uint32_t APB1RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1RSTR_TIM2RST = 0x1; // Timer 2 reset
    static constexpr uint32_t APB1RSTR_TIM3RST = 0x2; // Timer 3 reset
    static constexpr uint32_t APB1RSTR_TIM4RST = 0x4; // Timer 14 reset
    static constexpr uint32_t APB1RSTR_TIM5RST = 0x8; // Timer 5 reset
    static constexpr uint32_t APB1RSTR_TIM6RST = 0x10; // Timer 6 reset
    static constexpr uint32_t APB1RSTR_TIM7RST = 0x20; // Timer 7 reset
    static constexpr uint32_t APB1RSTR_TIM12RST = 0x40; // Timer 12 reset
    static constexpr uint32_t APB1RSTR_TIM13RST = 0x80; // Timer 13 reset
    static constexpr uint32_t APB1RSTR_TIM14RST = 0x100; // Timer 14 reset
    static constexpr uint32_t APB1RSTR_TIM18RST = 0x200; // Timer 18 reset
    static constexpr uint32_t APB1RSTR_WWDGRST = 0x800; // Window watchdog reset
    static constexpr uint32_t APB1RSTR_SPI2RST = 0x4000; // SPI2 reset
    static constexpr uint32_t APB1RSTR_SPI3RST = 0x8000; // SPI3 reset
    static constexpr uint32_t APB1RSTR_USART2RST = 0x20000; // USART 2 reset
    static constexpr uint32_t APB1RSTR_USART3RST = 0x40000; // USART3 reset
    static constexpr uint32_t APB1RSTR_I2C1RST = 0x200000; // I2C1 reset
    static constexpr uint32_t APB1RSTR_I2C2RST = 0x400000; // I2C2 reset
    static constexpr uint32_t APB1RSTR_USBRST = 0x800000; // USB reset
    static constexpr uint32_t APB1RSTR_CANRST = 0x2000000; // CAN reset
    static constexpr uint32_t APB1RSTR_DAC3RST = 0x4000000; // DAC3 reset
    static constexpr uint32_t APB1RSTR_PWRRST = 0x10000000; // Power interface reset
    static constexpr uint32_t APB1RSTR_DACRST = 0x20000000; // DAC interface reset
    static constexpr uint32_t APB1RSTR_CECRST = 0x40000000; // HDMI CEC reset

    static constexpr uint32_t AHBENR_RESET_VALUE = 0x14; // Reset value
    static constexpr uint32_t AHBENR_DMA1EN = 0x1; // DMA1 clock enable
    static constexpr uint32_t AHBENR_DMA2EN = 0x2; // DMA2 clock enable
    static constexpr uint32_t AHBENR_SRAMEN = 0x4; // SRAM interface clock enable
    static constexpr uint32_t AHBENR_FLASHEN = 0x10; // FLITF clock enable
    static constexpr uint32_t AHBENR_CRCEN = 0x40; // CRC clock enable
    static constexpr uint32_t AHBENR_IOPAEN = 0x20000; // I/O port A clock enable
    static constexpr uint32_t AHBENR_IOPBEN = 0x40000; // I/O port B clock enable
    static constexpr uint32_t AHBENR_IOPCEN = 0x80000; // I/O port C clock enable
    static constexpr uint32_t AHBENR_IOPDEN = 0x100000; // I/O port D clock enable
    static constexpr uint32_t AHBENR_IOPEEN = 0x200000; // I/O port E clock enable
    static constexpr uint32_t AHBENR_IOPFEN = 0x400000; // I/O port F clock enable
    static constexpr uint32_t AHBENR_TSCEN = 0x1000000; // Touch sensing controller clock enable

    static constexpr uint32_t APB2ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2ENR_SYSCFGEN = 0x1; // SYSCFG clock enable
    static constexpr uint32_t APB2ENR_ADC1EN = 0x200; // ADC 1 interface clock enable
    static constexpr uint32_t APB2ENR_TIM1EN = 0x800; // TIM1 Timer clock enable
    static constexpr uint32_t APB2ENR_SPI1EN = 0x1000; // SPI 1 clock enable
    static constexpr uint32_t APB2ENR_USART1EN = 0x4000; // USART1 clock enable
    static constexpr uint32_t APB2ENR_TIM15EN = 0x10000; // TIM15 timer clock enable
    static constexpr uint32_t APB2ENR_TIM16EN = 0x20000; // TIM16 timer clock enable
    static constexpr uint32_t APB2ENR_TIM17EN = 0x40000; // TIM17 timer clock enable
    static constexpr uint32_t APB2ENR_TIM19EN = 0x80000; // TIM19 timer clock enable
    static constexpr uint32_t APB2ENR_DBGMCUEN = 0x400000; // MCU debug module clock enable
    static constexpr uint32_t APB2ENR_SDAD1EN = 0x1000000; // SDADC1 (Sigma Delta ADC 1) clock enable
    static constexpr uint32_t APB2ENR_SDAD2EN = 0x2000000; // SDADC2 (Sigma Delta ADC 2) clock enable
    static constexpr uint32_t APB2ENR_SDAD3EN = 0x4000000; // SDADC3 (Sigma Delta ADC 3) clock enable

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
    static constexpr uint32_t APB1ENR_TIM18EN = 0x200; // Timer 18 clock enable
    static constexpr uint32_t APB1ENR_WWDGEN = 0x800; // Window watchdog clock enable
    static constexpr uint32_t APB1ENR_SPI2EN = 0x4000; // SPI 2 clock enable
    static constexpr uint32_t APB1ENR_SPI3EN = 0x8000; // SPI 3 clock enable
    static constexpr uint32_t APB1ENR_USART2EN = 0x20000; // USART 2 clock enable
    static constexpr uint32_t APB1ENR_USART3EN = 0x40000; // USART 3 clock enable
    static constexpr uint32_t APB1ENR_I2C1EN = 0x200000; // I2C 1 clock enable
    static constexpr uint32_t APB1ENR_I2C2EN = 0x400000; // I2C 2 clock enable
    static constexpr uint32_t APB1ENR_USBEN = 0x800000; // USB clock enable
    static constexpr uint32_t APB1ENR_CANEN = 0x2000000; // CAN clock enable
    static constexpr uint32_t APB1ENR_DAC3EN = 0x4000000; // DAC3 interface clock enable
    static constexpr uint32_t APB1ENR_PWREN = 0x10000000; // Power interface clock enable
    static constexpr uint32_t APB1ENR_DACEN = 0x20000000; // DAC interface clock enable
    static constexpr uint32_t APB1ENR_CECEN = 0x40000000; // HDMI CEC interface clock enable

    static constexpr uint32_t BDCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BDCR_LSEON = 0x1; // External Low Speed oscillator enable
    static constexpr uint32_t BDCR_LSERDY = 0x2; // External Low Speed oscillator ready
    static constexpr uint32_t BDCR_LSEBYP = 0x4; // External Low Speed oscillator bypass
    typedef bit_field_t<3, 0x3> BDCR_LSEDRV; // LSE oscillator drive capability
    typedef bit_field_t<8, 0x3> BDCR_RTCSEL; // RTC clock source selection
    static constexpr uint32_t BDCR_RTCEN = 0x8000; // RTC clock enable
    static constexpr uint32_t BDCR_BDRST = 0x10000; // Backup domain software reset

    static constexpr uint32_t CSR_RESET_VALUE = 0xc000000; // Reset value
    static constexpr uint32_t CSR_LSION = 0x1; // Internal low speed oscillator enable
    static constexpr uint32_t CSR_LSIRDY = 0x2; // Internal low speed oscillator ready
    static constexpr uint32_t CSR_RMVF = 0x1000000; // Remove reset flag
    static constexpr uint32_t CSR_OBLRSTF = 0x2000000; // Option byte loader reset flag
    static constexpr uint32_t CSR_PINRSTF = 0x4000000; // PIN reset flag
    static constexpr uint32_t CSR_PORRSTF = 0x8000000; // POR/PDR reset flag
    static constexpr uint32_t CSR_SFTRSTF = 0x10000000; // Software reset flag
    static constexpr uint32_t CSR_IWDGRSTF = 0x20000000; // Independent watchdog reset flag
    static constexpr uint32_t CSR_WWDGRSTF = 0x40000000; // Window watchdog reset flag
    static constexpr uint32_t CSR_LPWRRSTF = 0x80000000; // Low-power reset flag

    static constexpr uint32_t AHBRSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHBRSTR_IOPARST = 0x20000; // I/O port A reset
    static constexpr uint32_t AHBRSTR_IOPBRST = 0x40000; // I/O port B reset
    static constexpr uint32_t AHBRSTR_IOPCRST = 0x80000; // I/O port C reset
    static constexpr uint32_t AHBRSTR_IOPDRST = 0x100000; // I/O port D reset
    static constexpr uint32_t AHBRSTR_IOPERST = 0x200000; // I/O port E reset
    static constexpr uint32_t AHBRSTR_IOPFRST = 0x400000; // I/O port F reset
    static constexpr uint32_t AHBRSTR_TSCRST = 0x1000000; // Touch sensing controller reset

    static constexpr uint32_t CFGR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> CFGR2_PREDIV; // PREDIV division factor

    static constexpr uint32_t CFGR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> CFGR3_USART1SW; // USART1 clock source selection
    static constexpr uint32_t CFGR3_I2C1SW = 0x10; // I2C1 clock source selection
    static constexpr uint32_t CFGR3_I2C2SW = 0x20; // I2C2 clock source selection
    static constexpr uint32_t CFGR3_CECSW = 0x40; // HDMI CEC clock source selection
    typedef bit_field_t<16, 0x3> CFGR3_USART2SW; // USART2 clock source selection
    typedef bit_field_t<18, 0x3> CFGR3_USART3SW; // USART3 clock source selection
};

// RCC: Reset and clock control

struct stm32f3x4_rcc_t
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
    volatile uint32_t AHBRSTR; // AHB peripheral reset register
    volatile uint32_t CFGR2; // Clock configuration register 2
    volatile uint32_t CFGR3; // Clock configuration register 3

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
    typedef bit_field_t<11, 0x7> CFGR_PPRE2; // APB high speed prescaler (APB2)
    static constexpr uint32_t CFGR_PLLSRC = 0x10000; // PLL entry clock source
    static constexpr uint32_t CFGR_PLLXTPRE = 0x20000; // HSE divider for PLL entry
    typedef bit_field_t<18, 0xf> CFGR_PLLMUL; // PLL Multiplication Factor
    static constexpr uint32_t CFGR_USBPRES = 0x400000; // USB prescaler
    typedef bit_field_t<24, 0x7> CFGR_MCO; // Microcontroller clock output
    static constexpr uint32_t CFGR_MCOF = 0x10000000; // Microcontroller Clock Output Flag
    static constexpr uint32_t CFGR_I2SSRC = 0x800000; // I2S external clock source selection

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
    static constexpr uint32_t APB2RSTR_SYSCFGRST = 0x1; // SYSCFG and COMP reset
    static constexpr uint32_t APB2RSTR_TIM1RST = 0x800; // TIM1 timer reset
    static constexpr uint32_t APB2RSTR_SPI1RST = 0x1000; // SPI 1 reset
    static constexpr uint32_t APB2RSTR_TIM8RST = 0x2000; // TIM8 timer reset
    static constexpr uint32_t APB2RSTR_USART1RST = 0x4000; // USART1 reset
    static constexpr uint32_t APB2RSTR_TIM15RST = 0x10000; // TIM15 timer reset
    static constexpr uint32_t APB2RSTR_TIM16RST = 0x20000; // TIM16 timer reset
    static constexpr uint32_t APB2RSTR_TIM17RST = 0x40000; // TIM17 timer reset

    static constexpr uint32_t APB1RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1RSTR_TIM2RST = 0x1; // Timer 2 reset
    static constexpr uint32_t APB1RSTR_TIM3RST = 0x2; // Timer 3 reset
    static constexpr uint32_t APB1RSTR_TIM4RST = 0x4; // Timer 14 reset
    static constexpr uint32_t APB1RSTR_TIM6RST = 0x10; // Timer 6 reset
    static constexpr uint32_t APB1RSTR_TIM7RST = 0x20; // Timer 7 reset
    static constexpr uint32_t APB1RSTR_WWDGRST = 0x800; // Window watchdog reset
    static constexpr uint32_t APB1RSTR_SPI2RST = 0x4000; // SPI2 reset
    static constexpr uint32_t APB1RSTR_SPI3RST = 0x8000; // SPI3 reset
    static constexpr uint32_t APB1RSTR_USART2RST = 0x20000; // USART 2 reset
    static constexpr uint32_t APB1RSTR_USART3RST = 0x40000; // USART3 reset
    static constexpr uint32_t APB1RSTR_UART4RST = 0x80000; // UART 4 reset
    static constexpr uint32_t APB1RSTR_UART5RST = 0x100000; // UART 5 reset
    static constexpr uint32_t APB1RSTR_I2C1RST = 0x200000; // I2C1 reset
    static constexpr uint32_t APB1RSTR_I2C2RST = 0x400000; // I2C2 reset
    static constexpr uint32_t APB1RSTR_USBRST = 0x800000; // USB reset
    static constexpr uint32_t APB1RSTR_CANRST = 0x2000000; // CAN reset
    static constexpr uint32_t APB1RSTR_PWRRST = 0x10000000; // Power interface reset
    static constexpr uint32_t APB1RSTR_DACRST = 0x20000000; // DAC interface reset

    static constexpr uint32_t AHBENR_RESET_VALUE = 0x14; // Reset value
    static constexpr uint32_t AHBENR_DMA1EN = 0x1; // DMA1 clock enable
    static constexpr uint32_t AHBENR_DMA2EN = 0x2; // DMA2 clock enable
    static constexpr uint32_t AHBENR_SRAMEN = 0x4; // SRAM interface clock enable
    static constexpr uint32_t AHBENR_FLASHEN = 0x10; // FLITF clock enable
    static constexpr uint32_t AHBENR_CRCEN = 0x40; // CRC clock enable
    static constexpr uint32_t AHBENR_IOPAEN = 0x20000; // I/O port A clock enable
    static constexpr uint32_t AHBENR_IOPBEN = 0x40000; // I/O port B clock enable
    static constexpr uint32_t AHBENR_IOPCEN = 0x80000; // I/O port C clock enable
    static constexpr uint32_t AHBENR_IOPDEN = 0x100000; // I/O port D clock enable
    static constexpr uint32_t AHBENR_IOPEEN = 0x200000; // I/O port E clock enable
    static constexpr uint32_t AHBENR_IOPFEN = 0x400000; // I/O port F clock enable
    static constexpr uint32_t AHBENR_TSCEN = 0x1000000; // Touch sensing controller clock enable
    static constexpr uint32_t AHBENR_ADC12_COMMONEN = 0x10000000; // ADC1 and ADC2 clock enable
    static constexpr uint32_t AHBENR_ADC34EN = 0x20000000; // ADC3 and ADC4 clock enable

    static constexpr uint32_t APB2ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2ENR_SYSCFGEN = 0x1; // SYSCFG clock enable
    static constexpr uint32_t APB2ENR_TIM1EN = 0x800; // TIM1 Timer clock enable
    static constexpr uint32_t APB2ENR_SPI1EN = 0x1000; // SPI 1 clock enable
    static constexpr uint32_t APB2ENR_TIM8EN = 0x2000; // TIM8 Timer clock enable
    static constexpr uint32_t APB2ENR_USART1EN = 0x4000; // USART1 clock enable
    static constexpr uint32_t APB2ENR_TIM15EN = 0x10000; // TIM15 timer clock enable
    static constexpr uint32_t APB2ENR_TIM16EN = 0x20000; // TIM16 timer clock enable
    static constexpr uint32_t APB2ENR_TIM17EN = 0x40000; // TIM17 timer clock enable

    static constexpr uint32_t APB1ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1ENR_TIM2EN = 0x1; // Timer 2 clock enable
    static constexpr uint32_t APB1ENR_TIM3EN = 0x2; // Timer 3 clock enable
    static constexpr uint32_t APB1ENR_TIM4EN = 0x4; // Timer 4 clock enable
    static constexpr uint32_t APB1ENR_TIM6EN = 0x10; // Timer 6 clock enable
    static constexpr uint32_t APB1ENR_TIM7EN = 0x20; // Timer 7 clock enable
    static constexpr uint32_t APB1ENR_WWDGEN = 0x800; // Window watchdog clock enable
    static constexpr uint32_t APB1ENR_SPI2EN = 0x4000; // SPI 2 clock enable
    static constexpr uint32_t APB1ENR_SPI3EN = 0x8000; // SPI 3 clock enable
    static constexpr uint32_t APB1ENR_USART2EN = 0x20000; // USART 2 clock enable
    static constexpr uint32_t APB1ENR_I2C1EN = 0x200000; // I2C 1 clock enable
    static constexpr uint32_t APB1ENR_I2C2EN = 0x400000; // I2C 2 clock enable
    static constexpr uint32_t APB1ENR_USBEN = 0x800000; // USB clock enable
    static constexpr uint32_t APB1ENR_CANEN = 0x2000000; // CAN clock enable
    static constexpr uint32_t APB1ENR_PWREN = 0x10000000; // Power interface clock enable
    static constexpr uint32_t APB1ENR_DACEN = 0x20000000; // DAC interface clock enable

    static constexpr uint32_t BDCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BDCR_LSEON = 0x1; // External Low Speed oscillator enable
    static constexpr uint32_t BDCR_LSERDY = 0x2; // External Low Speed oscillator ready
    static constexpr uint32_t BDCR_LSEBYP = 0x4; // External Low Speed oscillator bypass
    typedef bit_field_t<3, 0x3> BDCR_LSEDRV; // LSE oscillator drive capability
    typedef bit_field_t<8, 0x3> BDCR_RTCSEL; // RTC clock source selection
    static constexpr uint32_t BDCR_RTCEN = 0x8000; // RTC clock enable
    static constexpr uint32_t BDCR_BDRST = 0x10000; // Backup domain software reset

    static constexpr uint32_t CSR_RESET_VALUE = 0xc000000; // Reset value
    static constexpr uint32_t CSR_LSION = 0x1; // Internal low speed oscillator enable
    static constexpr uint32_t CSR_LSIRDY = 0x2; // Internal low speed oscillator ready
    static constexpr uint32_t CSR_RMVF = 0x1000000; // Remove reset flag
    static constexpr uint32_t CSR_OBLRSTF = 0x2000000; // Option byte loader reset flag
    static constexpr uint32_t CSR_PINRSTF = 0x4000000; // PIN reset flag
    static constexpr uint32_t CSR_PORRSTF = 0x8000000; // POR/PDR reset flag
    static constexpr uint32_t CSR_SFTRSTF = 0x10000000; // Software reset flag
    static constexpr uint32_t CSR_IWDGRSTF = 0x20000000; // Independent watchdog reset flag
    static constexpr uint32_t CSR_WWDGRSTF = 0x40000000; // Window watchdog reset flag
    static constexpr uint32_t CSR_LPWRRSTF = 0x80000000; // Low-power reset flag

    static constexpr uint32_t AHBRSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHBRSTR_IOPARST = 0x20000; // I/O port A reset
    static constexpr uint32_t AHBRSTR_IOPBRST = 0x40000; // I/O port B reset
    static constexpr uint32_t AHBRSTR_IOPCRST = 0x80000; // I/O port C reset
    static constexpr uint32_t AHBRSTR_IOPDRST = 0x100000; // I/O port D reset
    static constexpr uint32_t AHBRSTR_IOPERST = 0x200000; // I/O port E reset
    static constexpr uint32_t AHBRSTR_IOPFRST = 0x400000; // I/O port F reset
    static constexpr uint32_t AHBRSTR_TSCRST = 0x1000000; // Touch sensing controller reset
    static constexpr uint32_t AHBRSTR_ADC12_COMMONRST = 0x10000000; // ADC1 and ADC2 reset
    static constexpr uint32_t AHBRSTR_ADC34RST = 0x20000000; // ADC3 and ADC4 reset

    static constexpr uint32_t CFGR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> CFGR2_PREDIV; // PREDIV division factor
    typedef bit_field_t<4, 0x1f> CFGR2_ADC12PRES; // ADC1 and ADC2 prescaler
    typedef bit_field_t<9, 0x1f> CFGR2_ADC34PRES; // ADC3 and ADC4 prescaler

    static constexpr uint32_t CFGR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> CFGR3_USART1SW; // USART1 clock source selection
    static constexpr uint32_t CFGR3_I2C1SW = 0x10; // I2C1 clock source selection
    static constexpr uint32_t CFGR3_I2C2SW = 0x20; // I2C2 clock source selection
    typedef bit_field_t<16, 0x3> CFGR3_USART2SW; // USART2 clock source selection
    typedef bit_field_t<18, 0x3> CFGR3_USART3SW; // USART3 clock source selection
    static constexpr uint32_t CFGR3_TIM1SW = 0x100; // Timer1 clock source selection
    static constexpr uint32_t CFGR3_TIM8SW = 0x200; // Timer8 clock source selection
    typedef bit_field_t<20, 0x3> CFGR3_UART4SW; // UART4 clock source selection
    typedef bit_field_t<22, 0x3> CFGR3_UART5SW; // UART5 clock source selection
};

template<>
struct peripheral_t<STM32F301, RCC>
{
    static constexpr periph_t P = RCC;
    using T = stm32f301_rcc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F302, RCC>
{
    static constexpr periph_t P = RCC;
    using T = stm32f302_rcc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F303, RCC>
{
    static constexpr periph_t P = RCC;
    using T = stm32f303_rcc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F373, RCC>
{
    static constexpr periph_t P = RCC;
    using T = stm32f373_rcc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F3x8, RCC>
{
    static constexpr periph_t P = RCC;
    using T = stm32f373_rcc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F3x4, RCC>
{
    static constexpr periph_t P = RCC;
    using T = stm32f3x4_rcc_t;
    static T& V;
};

using rcc_t = peripheral_t<svd, RCC>;

template<int INST> struct rcc_traits {};

template<> struct rcc_traits<0>
{
    using rcc = rcc_t;
    static constexpr signal_t MCO = RCC_MCO;
};
