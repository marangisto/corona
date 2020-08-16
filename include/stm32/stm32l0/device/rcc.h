#pragma once

////
//
//      STM32L0 RCC peripherals
//
///

// RCC: Reset and clock control

struct stm32l0x0_rcc_t
{
    volatile uint32_t CR; // Clock control register
    volatile uint32_t ICSCR; // Internal clock sources calibration register
    reserved_t<0x1> _0x8;
    volatile uint32_t CFGR; // Clock configuration register
    volatile uint32_t CIER; // Clock interrupt enable register
    volatile uint32_t CIFR; // Clock interrupt flag register
    volatile uint32_t CICR; // Clock interrupt clear register
    volatile uint32_t IOPRSTR; // GPIO reset register
    volatile uint32_t AHBRSTR; // AHB peripheral reset register
    volatile uint32_t APB2RSTR; // APB2 peripheral reset register
    volatile uint32_t APB1RSTR; // APB1 peripheral reset register
    volatile uint32_t IOPENR; // GPIO clock enable register
    volatile uint32_t AHBENR; // AHB peripheral clock enable register
    volatile uint32_t APB2ENR; // APB2 peripheral clock enable register
    volatile uint32_t APB1ENR; // APB1 peripheral clock enable register
    volatile uint32_t IOPSMEN; // GPIO clock enable in sleep mode register
    volatile uint32_t AHBSMENR; // AHB peripheral clock enable in sleep mode register
    volatile uint32_t APB2SMENR; // APB2 peripheral clock enable in sleep mode register
    volatile uint32_t APB1SMENR; // APB1 peripheral clock enable in sleep mode register
    volatile uint32_t CCIPR; // Clock configuration register
    volatile uint32_t CSR; // Control and status register

    static constexpr uint32_t CR_RESET_VALUE = 0x300; // Reset value
    static constexpr uint32_t CR_PLLRDY = 0x2000000; // PLL clock ready flag
    static constexpr uint32_t CR_PLLON = 0x1000000; // PLL enable bit
    typedef bit_field_t<20, 0x3> CR_RTCPRE; // TC/LCD prescaler
    static constexpr uint32_t CR_CSSLSEON = 0x80000; // Clock security system on HSE enable bit
    static constexpr uint32_t CR_HSEBYP = 0x40000; // HSE clock bypass bit
    static constexpr uint32_t CR_HSERDY = 0x20000; // HSE clock ready flag
    static constexpr uint32_t CR_HSEON = 0x10000; // HSE clock enable bit
    static constexpr uint32_t CR_MSIRDY = 0x200; // MSI clock ready flag
    static constexpr uint32_t CR_MSION = 0x100; // MSI clock enable bit
    static constexpr uint32_t CR_HSI16DIVF = 0x10; // HSI16DIVF
    static constexpr uint32_t CR_HSI16DIVEN = 0x8; // HSI16DIVEN
    static constexpr uint32_t CR_HSI16RDYF = 0x4; // Internal high-speed clock ready flag
    static constexpr uint32_t CR_HSI16KERON = 0x2; // High-speed internal clock enable bit for some IP kernels
    static constexpr uint32_t CR_HSI16ON = 0x1; // 16 MHz high-speed internal clock enable
    static constexpr uint32_t CR_HSI16OUTEN = 0x20; // 16 MHz high-speed internal clock output enable

    static constexpr uint32_t ICSCR_RESET_VALUE = 0xb000; // Reset value
    typedef bit_field_t<24, 0xff> ICSCR_MSITRIM; // MSI clock trimming
    typedef bit_field_t<16, 0xff> ICSCR_MSICAL; // MSI clock calibration
    typedef bit_field_t<13, 0x7> ICSCR_MSIRANGE; // MSI clock ranges
    typedef bit_field_t<8, 0x1f> ICSCR_HSI16TRIM; // High speed internal clock trimming
    typedef bit_field_t<0, 0xff> ICSCR_HSI16CAL; // nternal high speed clock calibration


    static constexpr uint32_t CFGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<28, 0x7> CFGR_MCOPRE; // Microcontroller clock output prescaler
    typedef bit_field_t<24, 0x7> CFGR_MCOSEL; // Microcontroller clock output selection
    typedef bit_field_t<22, 0x3> CFGR_PLLDIV; // PLL output division
    typedef bit_field_t<18, 0xf> CFGR_PLLMUL; // PLL multiplication factor
    static constexpr uint32_t CFGR_PLLSRC = 0x10000; // PLL entry clock source
    static constexpr uint32_t CFGR_STOPWUCK = 0x8000; // Wake-up from stop clock selection
    typedef bit_field_t<11, 0x7> CFGR_PPRE2; // APB high-speed prescaler (APB2)
    typedef bit_field_t<8, 0x7> CFGR_PPRE1; // APB low-speed prescaler (APB1)
    typedef bit_field_t<4, 0xf> CFGR_HPRE; // AHB prescaler
    typedef bit_field_t<2, 0x3> CFGR_SWS; // System clock switch status
    typedef bit_field_t<0, 0x3> CFGR_SW; // System clock switch

    static constexpr uint32_t CIER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CIER_CSSLSE = 0x80; // LSE CSS interrupt flag
    static constexpr uint32_t CIER_MSIRDYIE = 0x20; // MSI ready interrupt flag
    static constexpr uint32_t CIER_PLLRDYIE = 0x10; // PLL ready interrupt flag
    static constexpr uint32_t CIER_HSERDYIE = 0x8; // HSE ready interrupt flag
    static constexpr uint32_t CIER_HSI16RDYIE = 0x4; // HSI16 ready interrupt flag
    static constexpr uint32_t CIER_LSERDYIE = 0x2; // LSE ready interrupt flag
    static constexpr uint32_t CIER_LSIRDYIE = 0x1; // LSI ready interrupt flag

    static constexpr uint32_t CIFR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CIFR_CSSHSEF = 0x100; // Clock Security System Interrupt flag
    static constexpr uint32_t CIFR_CSSLSEF = 0x80; // LSE Clock Security System Interrupt flag
    static constexpr uint32_t CIFR_MSIRDYF = 0x20; // MSI ready interrupt flag
    static constexpr uint32_t CIFR_PLLRDYF = 0x10; // PLL ready interrupt flag
    static constexpr uint32_t CIFR_HSERDYF = 0x8; // HSE ready interrupt flag
    static constexpr uint32_t CIFR_HSI16RDYF = 0x4; // HSI16 ready interrupt flag
    static constexpr uint32_t CIFR_LSERDYF = 0x2; // LSE ready interrupt flag
    static constexpr uint32_t CIFR_LSIRDYF = 0x1; // LSI ready interrupt flag

    static constexpr uint32_t CICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CICR_CSSHSEC = 0x100; // Clock Security System Interrupt clear
    static constexpr uint32_t CICR_CSSLSEC = 0x80; // LSE Clock Security System Interrupt clear
    static constexpr uint32_t CICR_MSIRDYC = 0x20; // MSI ready Interrupt clear
    static constexpr uint32_t CICR_PLLRDYC = 0x10; // PLL ready Interrupt clear
    static constexpr uint32_t CICR_HSERDYC = 0x8; // HSE ready Interrupt clear
    static constexpr uint32_t CICR_HSI16RDYC = 0x4; // HSI16 ready Interrupt clear
    static constexpr uint32_t CICR_LSERDYC = 0x2; // LSE ready Interrupt clear
    static constexpr uint32_t CICR_LSIRDYC = 0x1; // LSI ready Interrupt clear

    static constexpr uint32_t IOPRSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IOPRSTR_IOPHRST = 0x80; // I/O port H reset
    static constexpr uint32_t IOPRSTR_IOPDRST = 0x8; // I/O port D reset
    static constexpr uint32_t IOPRSTR_IOPCRST = 0x4; // I/O port A reset
    static constexpr uint32_t IOPRSTR_IOPBRST = 0x2; // I/O port B reset
    static constexpr uint32_t IOPRSTR_IOPARST = 0x1; // I/O port A reset
    static constexpr uint32_t IOPRSTR_IOPERST = 0x10; // I/O port E reset

    static constexpr uint32_t AHBRSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHBRSTR_CRYPRST = 0x1000000; // Crypto module reset
    static constexpr uint32_t AHBRSTR_CRCRST = 0x1000; // Test integration module reset
    static constexpr uint32_t AHBRSTR_MIFRST = 0x100; // Memory interface reset
    static constexpr uint32_t AHBRSTR_DMA1RST = 0x1; // DMA reset

    static constexpr uint32_t APB2RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2RSTR_DBGRST = 0x400000; // DBG reset
    static constexpr uint32_t APB2RSTR_USART1RST = 0x4000; // USART1 reset
    static constexpr uint32_t APB2RSTR_SPI1RST = 0x1000; // SPI 1 reset
    static constexpr uint32_t APB2RSTR_ADC1RST = 0x200; // ADC interface reset
    static constexpr uint32_t APB2RSTR_TIM22RST = 0x20; // TIM22 timer reset
    static constexpr uint32_t APB2RSTR_TIM21RST = 0x4; // TIM21 timer reset
    static constexpr uint32_t APB2RSTR_SYSCFGRST = 0x1; // System configuration controller reset

    static constexpr uint32_t APB1RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1RSTR_LPTIM1RST = 0x80000000; // Low power timer reset
    static constexpr uint32_t APB1RSTR_PWRRST = 0x10000000; // Power interface reset
    static constexpr uint32_t APB1RSTR_I2C2RST = 0x400000; // I2C2 reset
    static constexpr uint32_t APB1RSTR_I2C1RST = 0x200000; // I2C1 reset
    static constexpr uint32_t APB1RSTR_LPUART1RST = 0x40000; // LPUART1 reset
    static constexpr uint32_t APB1RSTR_USART2RST = 0x20000; // USART2 reset
    static constexpr uint32_t APB1RSTR_SPI2RST = 0x4000; // SPI2 reset
    static constexpr uint32_t APB1RSTR_WWDGRST = 0x800; // Window watchdog reset
    static constexpr uint32_t APB1RSTR_TIM6RST = 0x10; // Timer 6 reset
    static constexpr uint32_t APB1RSTR_TIM2RST = 0x1; // Timer 2 reset
    static constexpr uint32_t APB1RSTR_TIM3RST = 0x2; // Timer 3 reset
    static constexpr uint32_t APB1RSTR_TIM7RST = 0x20; // Timer 7 reset
    static constexpr uint32_t APB1RSTR_USART4RST = 0x80000; // USART4 reset
    static constexpr uint32_t APB1RSTR_USART5RST = 0x100000; // USART5 reset
    static constexpr uint32_t APB1RSTR_CRCRST = 0x8000000; // CRC reset
    static constexpr uint32_t APB1RSTR_I2C3 = 0x40000000; // I2C3 reset

    static constexpr uint32_t IOPENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IOPENR_IOPHEN = 0x80; // I/O port H clock enable bit
    static constexpr uint32_t IOPENR_IOPDEN = 0x8; // I/O port D clock enable bit
    static constexpr uint32_t IOPENR_IOPCEN = 0x4; // IO port A clock enable bit
    static constexpr uint32_t IOPENR_IOPBEN = 0x2; // IO port B clock enable bit
    static constexpr uint32_t IOPENR_IOPAEN = 0x1; // IO port A clock enable bit
    static constexpr uint32_t IOPENR_IOPEEN = 0x10; // IO port E clock enable bit

    static constexpr uint32_t AHBENR_RESET_VALUE = 0x100; // Reset value
    static constexpr uint32_t AHBENR_CRYPEN = 0x1000000; // Crypto clock enable bit
    static constexpr uint32_t AHBENR_CRCEN = 0x1000; // CRC clock enable bit
    static constexpr uint32_t AHBENR_MIFEN = 0x100; // NVM interface clock enable bit
    static constexpr uint32_t AHBENR_DMA1EN = 0x1; // DMA clock enable bit

    static constexpr uint32_t APB2ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2ENR_DBGEN = 0x400000; // DBG clock enable bit
    static constexpr uint32_t APB2ENR_USART1EN = 0x4000; // USART1 clock enable bit
    static constexpr uint32_t APB2ENR_SPI1EN = 0x1000; // SPI1 clock enable bit
    static constexpr uint32_t APB2ENR_ADC1EN = 0x200; // ADC clock enable bit
    static constexpr uint32_t APB2ENR_FWEN = 0x80; // Firewall clock enable bit
    static constexpr uint32_t APB2ENR_TIM22EN = 0x20; // TIM22 timer clock enable bit
    static constexpr uint32_t APB2ENR_TIM21EN = 0x4; // TIM21 timer clock enable bit
    static constexpr uint32_t APB2ENR_SYSCFGEN = 0x1; // System configuration controller clock enable bit

    static constexpr uint32_t APB1ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1ENR_LPTIM1EN = 0x80000000; // Low power timer clock enable bit
    static constexpr uint32_t APB1ENR_PWREN = 0x10000000; // Power interface clock enable bit
    static constexpr uint32_t APB1ENR_I2C2EN = 0x400000; // I2C2 clock enable bit
    static constexpr uint32_t APB1ENR_I2C1EN = 0x200000; // I2C1 clock enable bit
    static constexpr uint32_t APB1ENR_LPUART1EN = 0x40000; // LPUART1 clock enable bit
    static constexpr uint32_t APB1ENR_USART2EN = 0x20000; // UART2 clock enable bit
    static constexpr uint32_t APB1ENR_SPI2EN = 0x4000; // SPI2 clock enable bit
    static constexpr uint32_t APB1ENR_WWDGEN = 0x800; // Window watchdog clock enable bit
    static constexpr uint32_t APB1ENR_TIM6EN = 0x10; // Timer 6 clock enable bit
    static constexpr uint32_t APB1ENR_TIM2EN = 0x1; // Timer2 clock enable bit
    static constexpr uint32_t APB1ENR_TIM3EN = 0x4; // Timer 3 clock enbale bit
    static constexpr uint32_t APB1ENR_TIM7EN = 0x20; // Timer 7 clock enable bit
    static constexpr uint32_t APB1ENR_USART4EN = 0x80000; // USART4 clock enable bit
    static constexpr uint32_t APB1ENR_USART5EN = 0x100000; // USART5 clock enable bit
    static constexpr uint32_t APB1ENR_I2C3EN = 0x40000000; // I2C3 clock enable bit

    static constexpr uint32_t IOPSMEN_RESET_VALUE = 0x8f; // Reset value
    static constexpr uint32_t IOPSMEN_IOPHSMEN = 0x80; // Port H clock enable during Sleep mode bit
    static constexpr uint32_t IOPSMEN_IOPDSMEN = 0x8; // Port D clock enable during Sleep mode bit
    static constexpr uint32_t IOPSMEN_IOPCSMEN = 0x4; // Port C clock enable during Sleep mode bit
    static constexpr uint32_t IOPSMEN_IOPBSMEN = 0x2; // Port B clock enable during Sleep mode bit
    static constexpr uint32_t IOPSMEN_IOPASMEN = 0x1; // Port A clock enable during Sleep mode bit
    static constexpr uint32_t IOPSMEN_IOPESMEN = 0x10; // Port E clock enable during Sleep mode bit

    static constexpr uint32_t AHBSMENR_RESET_VALUE = 0x1111301; // Reset value
    static constexpr uint32_t AHBSMENR_AESSMEN = 0x1000000; // Crypto clock enable during sleep mode bit
    static constexpr uint32_t AHBSMENR_CRCSMEN = 0x1000; // CRC clock enable during sleep mode bit
    static constexpr uint32_t AHBSMENR_SRAMSMEN = 0x200; // SRAM interface clock enable during sleep mode bit
    static constexpr uint32_t AHBSMENR_MIFSMEN = 0x100; // NVM interface clock enable during sleep mode bit
    static constexpr uint32_t AHBSMENR_DMA1SMEN = 0x1; // DMA clock enable during sleep mode bit

    static constexpr uint32_t APB2SMENR_RESET_VALUE = 0x405225; // Reset value
    static constexpr uint32_t APB2SMENR_DBGSMEN = 0x400000; // DBG clock enable during sleep mode bit
    static constexpr uint32_t APB2SMENR_USART1SMEN = 0x4000; // USART1 clock enable during sleep mode bit
    static constexpr uint32_t APB2SMENR_SPI1SMEN = 0x1000; // SPI1 clock enable during sleep mode bit
    static constexpr uint32_t APB2SMENR_ADC1SMEN = 0x200; // ADC clock enable during sleep mode bit
    static constexpr uint32_t APB2SMENR_TIM22SMEN = 0x20; // TIM22 timer clock enable during sleep mode bit
    static constexpr uint32_t APB2SMENR_TIM21SMEN = 0x4; // TIM21 timer clock enable during sleep mode bit
    static constexpr uint32_t APB2SMENR_SYSCFGSMEN = 0x1; // System configuration controller clock enable during sleep mode bit

    static constexpr uint32_t APB1SMENR_RESET_VALUE = 0xb8e64a11; // Reset value
    static constexpr uint32_t APB1SMENR_LPTIM1SMEN = 0x80000000; // Low power timer clock enable during sleep mode bit
    static constexpr uint32_t APB1SMENR_PWRSMEN = 0x10000000; // Power interface clock enable during sleep mode bit
    static constexpr uint32_t APB1SMENR_CRSSMEN = 0x8000000; // Clock recovery system clock enable during sleep mode bit
    static constexpr uint32_t APB1SMENR_I2C2SMEN = 0x400000; // I2C2 clock enable during sleep mode bit
    static constexpr uint32_t APB1SMENR_I2C1SMEN = 0x200000; // I2C1 clock enable during sleep mode bit
    static constexpr uint32_t APB1SMENR_LPUART1SMEN = 0x40000; // LPUART1 clock enable during sleep mode bit
    static constexpr uint32_t APB1SMENR_USART2SMEN = 0x20000; // UART2 clock enable during sleep mode bit
    static constexpr uint32_t APB1SMENR_SPI2SMEN = 0x4000; // SPI2 clock enable during sleep mode bit
    static constexpr uint32_t APB1SMENR_WWDGSMEN = 0x800; // Window watchdog clock enable during sleep mode bit
    static constexpr uint32_t APB1SMENR_TIM6SMEN = 0x10; // Timer 6 clock enable during sleep mode bit
    static constexpr uint32_t APB1SMENR_TIM2SMEN = 0x1; // Timer2 clock enable during sleep mode bit
    static constexpr uint32_t APB1SMENR_TIM3SMEN = 0x2; // Timer 3 clock enable during sleep mode bit
    static constexpr uint32_t APB1SMENR_TIM7SMEN = 0x20; // Timer 7 clock enable during sleep mode bit
    static constexpr uint32_t APB1SMENR_USART4SMEN = 0x80000; // USART4 clock enabe during sleep mode bit
    static constexpr uint32_t APB1SMENR_USART5SMEN = 0x100000; // USART5 clock enable during sleep mode bit
    static constexpr uint32_t APB1SMENR_I2C3SMEN = 0x40000000; // I2C3 clock enable during sleep mode bit

    static constexpr uint32_t CCIPR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCIPR_LPTIM1SEL1 = 0x80000; // Low Power Timer clock source selection bits
    static constexpr uint32_t CCIPR_LPTIM1SEL0 = 0x40000; // LPTIM1SEL0
    static constexpr uint32_t CCIPR_I2C1SEL1 = 0x2000; // I2C1 clock source selection bits
    static constexpr uint32_t CCIPR_I2C1SEL0 = 0x1000; // I2C1SEL0
    static constexpr uint32_t CCIPR_LPUART1SEL1 = 0x800; // LPUART1 clock source selection bits
    static constexpr uint32_t CCIPR_LPUART1SEL0 = 0x400; // LPUART1SEL0
    static constexpr uint32_t CCIPR_USART2SEL1 = 0x8; // USART2 clock source selection bits
    static constexpr uint32_t CCIPR_USART2SEL0 = 0x4; // USART2SEL0
    static constexpr uint32_t CCIPR_USART1SEL1 = 0x2; // USART1 clock source selection bits
    static constexpr uint32_t CCIPR_USART1SEL0 = 0x1; // USART1SEL0
    static constexpr uint32_t CCIPR_I2C3SEL0 = 0x10000; // I2C3 clock source selection bits
    static constexpr uint32_t CCIPR_I2C3SEL1 = 0x20000; // I2C3 clock source selection bits

    static constexpr uint32_t CSR_RESET_VALUE = 0xc000000; // Reset value
    static constexpr uint32_t CSR_LPWRSTF = 0x80000000; // Low-power reset flag
    static constexpr uint32_t CSR_WWDGRSTF = 0x40000000; // Window watchdog reset flag
    static constexpr uint32_t CSR_IWDGRSTF = 0x20000000; // Independent watchdog reset flag
    static constexpr uint32_t CSR_SFTRSTF = 0x10000000; // Software reset flag
    static constexpr uint32_t CSR_PORRSTF = 0x8000000; // POR/PDR reset flag
    static constexpr uint32_t CSR_PINRSTF = 0x4000000; // PIN reset flag
    static constexpr uint32_t CSR_OBLRSTF = 0x2000000; // OBLRSTF
    static constexpr uint32_t CSR_FWRSTF = 0x1000000; // Firewall reset flag
    static constexpr uint32_t CSR_RTCRST = 0x80000; // RTC software reset bit
    static constexpr uint32_t CSR_RTCEN = 0x40000; // RTC clock enable bit
    typedef bit_field_t<16, 0x3> CSR_RTCSEL; // RTC and LCD clock source selection bits
    static constexpr uint32_t CSR_CSSLSED = 0x4000; // CSS on LSE failure detection flag
    static constexpr uint32_t CSR_CSSLSEON = 0x2000; // CSSLSEON
    typedef bit_field_t<11, 0x3> CSR_LSEDRV; // LSEDRV
    static constexpr uint32_t CSR_LSEBYP = 0x400; // External low-speed oscillator bypass bit
    static constexpr uint32_t CSR_LSERDY = 0x200; // External low-speed oscillator ready bit
    static constexpr uint32_t CSR_LSEON = 0x100; // External low-speed oscillator enable bit
    static constexpr uint32_t CSR_LSIRDY = 0x2; // Internal low-speed oscillator ready bit
    static constexpr uint32_t CSR_LSION = 0x1; // Internal low-speed oscillator enable
    static constexpr uint32_t CSR_LSIIWDGLP = 0x4; // LSI clock input to IWDG in Ultra-low-power mode (Stop and Standby) enable bit
    static constexpr uint32_t CSR_RMVF = 0x800000; // Remove reset flag
};

// RCC: Reset and clock control

struct stm32l0x2_rcc_t
{
    volatile uint32_t CR; // Clock control register
    volatile uint32_t ICSCR; // Internal clock sources calibration register
    volatile uint32_t CRRCR; // Clock recovery RC register
    volatile uint32_t CFGR; // Clock configuration register
    volatile uint32_t CIER; // Clock interrupt enable register
    volatile uint32_t CIFR; // Clock interrupt flag register
    volatile uint32_t CICR; // Clock interrupt clear register
    volatile uint32_t IOPRSTR; // GPIO reset register
    volatile uint32_t AHBRSTR; // AHB peripheral reset register
    volatile uint32_t APB2RSTR; // APB2 peripheral reset register
    volatile uint32_t APB1RSTR; // APB1 peripheral reset register
    volatile uint32_t IOPENR; // GPIO clock enable register
    volatile uint32_t AHBENR; // AHB peripheral clock enable register
    volatile uint32_t APB2ENR; // APB2 peripheral clock enable register
    volatile uint32_t APB1ENR; // APB1 peripheral clock enable register
    volatile uint32_t IOPSMEN; // GPIO clock enable in sleep mode register
    volatile uint32_t AHBSMENR; // AHB peripheral clock enable in sleep mode register
    volatile uint32_t APB2SMENR; // APB2 peripheral clock enable in sleep mode register
    volatile uint32_t APB1SMENR; // APB1 peripheral clock enable in sleep mode register
    volatile uint32_t CCIPR; // Clock configuration register
    volatile uint32_t CSR; // Control and status register

    static constexpr uint32_t CR_RESET_VALUE = 0x300; // Reset value
    static constexpr uint32_t CR_PLLRDY = 0x2000000; // PLL clock ready flag
    static constexpr uint32_t CR_PLLON = 0x1000000; // PLL enable bit
    typedef bit_field_t<20, 0x3> CR_RTCPRE; // TC/LCD prescaler
    static constexpr uint32_t CR_CSSLSEON = 0x80000; // Clock security system on HSE enable bit
    static constexpr uint32_t CR_HSEBYP = 0x40000; // HSE clock bypass bit
    static constexpr uint32_t CR_HSERDY = 0x20000; // HSE clock ready flag
    static constexpr uint32_t CR_HSEON = 0x10000; // HSE clock enable bit
    static constexpr uint32_t CR_MSIRDY = 0x200; // MSI clock ready flag
    static constexpr uint32_t CR_MSION = 0x100; // MSI clock enable bit
    static constexpr uint32_t CR_HSI16DIVF = 0x10; // HSI16DIVF
    static constexpr uint32_t CR_HSI16DIVEN = 0x8; // HSI16DIVEN
    static constexpr uint32_t CR_HSI16RDYF = 0x4; // Internal high-speed clock ready flag
    static constexpr uint32_t CR_HSI16KERON = 0x2; // High-speed internal clock enable bit for some IP kernels
    static constexpr uint32_t CR_HSI16ON = 0x1; // 16 MHz high-speed internal clock enable
    static constexpr uint32_t CR_HSI16OUTEN = 0x20; // 16 MHz high-speed internal clock output enable

    static constexpr uint32_t ICSCR_RESET_VALUE = 0xb000; // Reset value
    typedef bit_field_t<24, 0xff> ICSCR_MSITRIM; // MSI clock trimming
    typedef bit_field_t<16, 0xff> ICSCR_MSICAL; // MSI clock calibration
    typedef bit_field_t<13, 0x7> ICSCR_MSIRANGE; // MSI clock ranges
    typedef bit_field_t<8, 0x1f> ICSCR_HSI16TRIM; // High speed internal clock trimming
    typedef bit_field_t<0, 0xff> ICSCR_HSI16CAL; // nternal high speed clock calibration

    static constexpr uint32_t CRRCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xff> CRRCR_HSI48CAL; // 48 MHz HSI clock calibration
    static constexpr uint32_t CRRCR_HSI48RDY = 0x2; // 48MHz HSI clock ready flag
    static constexpr uint32_t CRRCR_HSI48ON = 0x1; // 48MHz HSI clock enable bit
    static constexpr uint32_t CRRCR_HSI48DIV6EN = 0x4; // 48 MHz HSI clock divided by 6 output enable

    static constexpr uint32_t CFGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<28, 0x7> CFGR_MCOPRE; // Microcontroller clock output prescaler
    typedef bit_field_t<24, 0xf> CFGR_MCOSEL; // Microcontroller clock output selection
    typedef bit_field_t<22, 0x3> CFGR_PLLDIV; // PLL output division
    typedef bit_field_t<18, 0xf> CFGR_PLLMUL; // PLL multiplication factor
    static constexpr uint32_t CFGR_PLLSRC = 0x10000; // PLL entry clock source
    static constexpr uint32_t CFGR_STOPWUCK = 0x8000; // Wake-up from stop clock selection
    typedef bit_field_t<11, 0x7> CFGR_PPRE2; // APB high-speed prescaler (APB2)
    typedef bit_field_t<8, 0x7> CFGR_PPRE1; // APB low-speed prescaler (APB1)
    typedef bit_field_t<4, 0xf> CFGR_HPRE; // AHB prescaler
    typedef bit_field_t<2, 0x3> CFGR_SWS; // System clock switch status
    typedef bit_field_t<0, 0x3> CFGR_SW; // System clock switch

    static constexpr uint32_t CIER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CIER_CSSLSE = 0x80; // LSE CSS interrupt flag
    static constexpr uint32_t CIER_HSI48RDYIE = 0x40; // HSI48 ready interrupt flag
    static constexpr uint32_t CIER_MSIRDYIE = 0x20; // MSI ready interrupt flag
    static constexpr uint32_t CIER_PLLRDYIE = 0x10; // PLL ready interrupt flag
    static constexpr uint32_t CIER_HSERDYIE = 0x8; // HSE ready interrupt flag
    static constexpr uint32_t CIER_HSI16RDYIE = 0x4; // HSI16 ready interrupt flag
    static constexpr uint32_t CIER_LSERDYIE = 0x2; // LSE ready interrupt flag
    static constexpr uint32_t CIER_LSIRDYIE = 0x1; // LSI ready interrupt flag

    static constexpr uint32_t CIFR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CIFR_CSSHSEF = 0x100; // Clock Security System Interrupt flag
    static constexpr uint32_t CIFR_CSSLSEF = 0x80; // LSE Clock Security System Interrupt flag
    static constexpr uint32_t CIFR_HSI48RDYF = 0x40; // HSI48 ready interrupt flag
    static constexpr uint32_t CIFR_MSIRDYF = 0x20; // MSI ready interrupt flag
    static constexpr uint32_t CIFR_PLLRDYF = 0x10; // PLL ready interrupt flag
    static constexpr uint32_t CIFR_HSERDYF = 0x8; // HSE ready interrupt flag
    static constexpr uint32_t CIFR_HSI16RDYF = 0x4; // HSI16 ready interrupt flag
    static constexpr uint32_t CIFR_LSERDYF = 0x2; // LSE ready interrupt flag
    static constexpr uint32_t CIFR_LSIRDYF = 0x1; // LSI ready interrupt flag

    static constexpr uint32_t CICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CICR_CSSHSEC = 0x100; // Clock Security System Interrupt clear
    static constexpr uint32_t CICR_CSSLSEC = 0x80; // LSE Clock Security System Interrupt clear
    static constexpr uint32_t CICR_HSI48RDYC = 0x40; // HSI48 ready Interrupt clear
    static constexpr uint32_t CICR_MSIRDYC = 0x20; // MSI ready Interrupt clear
    static constexpr uint32_t CICR_PLLRDYC = 0x10; // PLL ready Interrupt clear
    static constexpr uint32_t CICR_HSERDYC = 0x8; // HSE ready Interrupt clear
    static constexpr uint32_t CICR_HSI16RDYC = 0x4; // HSI16 ready Interrupt clear
    static constexpr uint32_t CICR_LSERDYC = 0x2; // LSE ready Interrupt clear
    static constexpr uint32_t CICR_LSIRDYC = 0x1; // LSI ready Interrupt clear

    static constexpr uint32_t IOPRSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IOPRSTR_IOPHRST = 0x80; // I/O port H reset
    static constexpr uint32_t IOPRSTR_IOPDRST = 0x8; // I/O port D reset
    static constexpr uint32_t IOPRSTR_IOPCRST = 0x4; // I/O port A reset
    static constexpr uint32_t IOPRSTR_IOPBRST = 0x2; // I/O port B reset
    static constexpr uint32_t IOPRSTR_IOPARST = 0x1; // I/O port A reset
    static constexpr uint32_t IOPRSTR_IOPERST = 0x10; // I/O port E reset

    static constexpr uint32_t AHBRSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHBRSTR_CRYPRST = 0x1000000; // Crypto module reset
    static constexpr uint32_t AHBRSTR_RNGRST = 0x100000; // Random Number Generator module reset
    static constexpr uint32_t AHBRSTR_TOUCHRST = 0x10000; // Touch Sensing reset
    static constexpr uint32_t AHBRSTR_CRCRST = 0x1000; // Test integration module reset
    static constexpr uint32_t AHBRSTR_MIFRST = 0x100; // Memory interface reset
    static constexpr uint32_t AHBRSTR_DMA1RST = 0x1; // DMA reset

    static constexpr uint32_t APB2RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2RSTR_DBGRST = 0x400000; // DBG reset
    static constexpr uint32_t APB2RSTR_USART1RST = 0x4000; // USART1 reset
    static constexpr uint32_t APB2RSTR_SPI1RST = 0x1000; // SPI 1 reset
    static constexpr uint32_t APB2RSTR_ADC1RST = 0x200; // ADC interface reset
    static constexpr uint32_t APB2RSTR_TM12RST = 0x20; // TIM22 timer reset
    static constexpr uint32_t APB2RSTR_TIM21RST = 0x4; // TIM21 timer reset
    static constexpr uint32_t APB2RSTR_SYSCFGRST = 0x1; // System configuration controller reset

    static constexpr uint32_t APB1RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1RSTR_LPTIM1RST = 0x80000000; // Low power timer reset
    static constexpr uint32_t APB1RSTR_DACRST = 0x20000000; // DAC interface reset
    static constexpr uint32_t APB1RSTR_PWRRST = 0x10000000; // Power interface reset
    static constexpr uint32_t APB1RSTR_CRSRST = 0x8000000; // Clock recovery system reset
    static constexpr uint32_t APB1RSTR_USBRST = 0x800000; // USB reset
    static constexpr uint32_t APB1RSTR_I2C2RST = 0x400000; // I2C2 reset
    static constexpr uint32_t APB1RSTR_I2C1RST = 0x200000; // I2C1 reset
    static constexpr uint32_t APB1RSTR_LPUART1RST = 0x40000; // LPUART1 reset
    static constexpr uint32_t APB1RSTR_LPUART12RST = 0x20000; // UART2 reset
    static constexpr uint32_t APB1RSTR_SPI2RST = 0x4000; // SPI2 reset
    static constexpr uint32_t APB1RSTR_WWDRST = 0x800; // Window watchdog reset
    static constexpr uint32_t APB1RSTR_TIM6RST = 0x10; // Timer 6 reset
    static constexpr uint32_t APB1RSTR_TIM2RST = 0x1; // Timer2 reset
    static constexpr uint32_t APB1RSTR_TIM3RST = 0x2; // Timer3 reset
    static constexpr uint32_t APB1RSTR_TIM7RST = 0x20; // Timer 7 reset
    static constexpr uint32_t APB1RSTR_USART4RST = 0x80000; // USART4 reset
    static constexpr uint32_t APB1RSTR_USART5RST = 0x100000; // USART5 reset
    static constexpr uint32_t APB1RSTR_I2C3RST = 0x40000000; // I2C3 reset

    static constexpr uint32_t IOPENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IOPENR_IOPHEN = 0x80; // I/O port H clock enable bit
    static constexpr uint32_t IOPENR_IOPDEN = 0x8; // I/O port D clock enable bit
    static constexpr uint32_t IOPENR_IOPCEN = 0x4; // IO port A clock enable bit
    static constexpr uint32_t IOPENR_IOPBEN = 0x2; // IO port B clock enable bit
    static constexpr uint32_t IOPENR_IOPAEN = 0x1; // IO port A clock enable bit
    static constexpr uint32_t IOPENR_IOPEEN = 0x10; // I/O port E clock enable bit

    static constexpr uint32_t AHBENR_RESET_VALUE = 0x100; // Reset value
    static constexpr uint32_t AHBENR_CRYPEN = 0x1000000; // Crypto clock enable bit
    static constexpr uint32_t AHBENR_RNGEN = 0x100000; // Random Number Generator clock enable bit
    static constexpr uint32_t AHBENR_TOUCHEN = 0x10000; // Touch Sensing clock enable bit
    static constexpr uint32_t AHBENR_CRCEN = 0x1000; // CRC clock enable bit
    static constexpr uint32_t AHBENR_MIFEN = 0x100; // NVM interface clock enable bit
    static constexpr uint32_t AHBENR_DMA1EN = 0x1; // DMA clock enable bit

    static constexpr uint32_t APB2ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2ENR_DBGEN = 0x400000; // DBG clock enable bit
    static constexpr uint32_t APB2ENR_USART1EN = 0x4000; // USART1 clock enable bit
    static constexpr uint32_t APB2ENR_SPI1EN = 0x1000; // SPI1 clock enable bit
    static constexpr uint32_t APB2ENR_ADC1EN = 0x200; // ADC clock enable bit
    static constexpr uint32_t APB2ENR_MIFIEN = 0x80; // MiFaRe Firewall clock enable bit
    static constexpr uint32_t APB2ENR_TIM22EN = 0x20; // TIM22 timer clock enable bit
    static constexpr uint32_t APB2ENR_TIM21EN = 0x4; // TIM21 timer clock enable bit
    static constexpr uint32_t APB2ENR_SYSCFGEN = 0x1; // System configuration controller clock enable bit

    static constexpr uint32_t APB1ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1ENR_LPTIM1EN = 0x80000000; // Low power timer clock enable bit
    static constexpr uint32_t APB1ENR_DACEN = 0x20000000; // DAC interface clock enable bit
    static constexpr uint32_t APB1ENR_PWREN = 0x10000000; // Power interface clock enable bit
    static constexpr uint32_t APB1ENR_CRSEN = 0x8000000; // Clock recovery system clock enable bit
    static constexpr uint32_t APB1ENR_USBEN = 0x800000; // USB clock enable bit
    static constexpr uint32_t APB1ENR_I2C2EN = 0x400000; // I2C2 clock enable bit
    static constexpr uint32_t APB1ENR_I2C1EN = 0x200000; // I2C1 clock enable bit
    static constexpr uint32_t APB1ENR_LPUART1EN = 0x40000; // LPUART1 clock enable bit
    static constexpr uint32_t APB1ENR_USART2EN = 0x20000; // UART2 clock enable bit
    static constexpr uint32_t APB1ENR_SPI2EN = 0x4000; // SPI2 clock enable bit
    static constexpr uint32_t APB1ENR_WWDGEN = 0x800; // Window watchdog clock enable bit
    static constexpr uint32_t APB1ENR_TIM6EN = 0x10; // Timer 6 clock enable bit
    static constexpr uint32_t APB1ENR_TIM2EN = 0x1; // Timer2 clock enable bit
    static constexpr uint32_t APB1ENR_TIM3EN = 0x2; // Timer3 clock enable bit
    static constexpr uint32_t APB1ENR_TIM7EN = 0x20; // Timer 7 clock enable bit
    static constexpr uint32_t APB1ENR_USART4EN = 0x80000; // USART4 clock enable bit
    static constexpr uint32_t APB1ENR_USART5EN = 0x100000; // USART5 clock enable bit
    static constexpr uint32_t APB1ENR_I2C3EN = 0x40000000; // I2C3 clock enable bit

    static constexpr uint32_t IOPSMEN_RESET_VALUE = 0x8f; // Reset value
    static constexpr uint32_t IOPSMEN_IOPHSMEN = 0x80; // IOPHSMEN
    static constexpr uint32_t IOPSMEN_IOPDSMEN = 0x8; // IOPDSMEN
    static constexpr uint32_t IOPSMEN_IOPCSMEN = 0x4; // IOPCSMEN
    static constexpr uint32_t IOPSMEN_IOPBSMEN = 0x2; // IOPBSMEN
    static constexpr uint32_t IOPSMEN_IOPASMEN = 0x1; // IOPASMEN
    static constexpr uint32_t IOPSMEN_IOPESMEN = 0x10; // Port E clock enable during Sleep mode bit

    static constexpr uint32_t AHBSMENR_RESET_VALUE = 0x1111301; // Reset value
    static constexpr uint32_t AHBSMENR_CRYPSMEN = 0x1000000; // Crypto clock enable during sleep mode bit
    static constexpr uint32_t AHBSMENR_RNGSMEN = 0x100000; // Random Number Generator clock enable during sleep mode bit
    static constexpr uint32_t AHBSMENR_TOUCHSMEN = 0x10000; // Touch Sensing clock enable during sleep mode bit
    static constexpr uint32_t AHBSMENR_CRCSMEN = 0x1000; // CRC clock enable during sleep mode bit
    static constexpr uint32_t AHBSMENR_SRAMSMEN = 0x200; // SRAM interface clock enable during sleep mode bit
    static constexpr uint32_t AHBSMENR_MIFSMEN = 0x100; // NVM interface clock enable during sleep mode bit
    static constexpr uint32_t AHBSMENR_DMA1SMEN = 0x1; // DMA clock enable during sleep mode bit

    static constexpr uint32_t APB2SMENR_RESET_VALUE = 0x405225; // Reset value
    static constexpr uint32_t APB2SMENR_DBGSMEN = 0x400000; // DBG clock enable during sleep mode bit
    static constexpr uint32_t APB2SMENR_USART1SMEN = 0x4000; // USART1 clock enable during sleep mode bit
    static constexpr uint32_t APB2SMENR_SPI1SMEN = 0x1000; // SPI1 clock enable during sleep mode bit
    static constexpr uint32_t APB2SMENR_ADC1SMEN = 0x200; // ADC clock enable during sleep mode bit
    static constexpr uint32_t APB2SMENR_TIM22SMEN = 0x20; // TIM22 timer clock enable during sleep mode bit
    static constexpr uint32_t APB2SMENR_TIM21SMEN = 0x4; // TIM21 timer clock enable during sleep mode bit
    static constexpr uint32_t APB2SMENR_SYSCFGSMEN = 0x1; // System configuration controller clock enable during sleep mode bit

    static constexpr uint32_t APB1SMENR_RESET_VALUE = 0xb8e64a11; // Reset value
    static constexpr uint32_t APB1SMENR_LPTIM1SMEN = 0x80000000; // Low power timer clock enable during sleep mode bit
    static constexpr uint32_t APB1SMENR_DACSMEN = 0x20000000; // DAC interface clock enable during sleep mode bit
    static constexpr uint32_t APB1SMENR_PWRSMEN = 0x10000000; // Power interface clock enable during sleep mode bit
    static constexpr uint32_t APB1SMENR_CRSSMEN = 0x8000000; // Clock recovery system clock enable during sleep mode bit
    static constexpr uint32_t APB1SMENR_USBSMEN = 0x800000; // USB clock enable during sleep mode bit
    static constexpr uint32_t APB1SMENR_I2C2SMEN = 0x400000; // I2C2 clock enable during sleep mode bit
    static constexpr uint32_t APB1SMENR_I2C1SMEN = 0x200000; // I2C1 clock enable during sleep mode bit
    static constexpr uint32_t APB1SMENR_LPUART1SMEN = 0x40000; // LPUART1 clock enable during sleep mode bit
    static constexpr uint32_t APB1SMENR_USART2SMEN = 0x20000; // UART2 clock enable during sleep mode bit
    static constexpr uint32_t APB1SMENR_SPI2SMEN = 0x4000; // SPI2 clock enable during sleep mode bit
    static constexpr uint32_t APB1SMENR_WWDGSMEN = 0x800; // Window watchdog clock enable during sleep mode bit
    static constexpr uint32_t APB1SMENR_TIM6SMEN = 0x10; // Timer 6 clock enable during sleep mode bit
    static constexpr uint32_t APB1SMENR_TIM2SMEN = 0x1; // Timer2 clock enable during sleep mode bit
    static constexpr uint32_t APB1SMENR_TIM3SMEN = 0x2; // Timer3 clock enable during Sleep mode bit
    static constexpr uint32_t APB1SMENR_TIM7SMEN = 0x20; // Timer 7 clock enable during Sleep mode bit
    static constexpr uint32_t APB1SMENR_USART4SMEN = 0x80000; // USART4 clock enable during Sleep mode bit
    static constexpr uint32_t APB1SMENR_USART5SMEN = 0x100000; // USART5 clock enable during Sleep mode bit
    static constexpr uint32_t APB1SMENR_I2C3SMEN = 0x40000000; // 2C3 clock enable during Sleep mode bit

    static constexpr uint32_t CCIPR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCIPR_HSI48MSEL = 0x4000000; // 48 MHz HSI48 clock source selection bit
    static constexpr uint32_t CCIPR_LPTIM1SEL1 = 0x80000; // Low Power Timer clock source selection bits
    static constexpr uint32_t CCIPR_LPTIM1SEL0 = 0x40000; // LPTIM1SEL0
    static constexpr uint32_t CCIPR_I2C1SEL1 = 0x2000; // I2C1 clock source selection bits
    static constexpr uint32_t CCIPR_I2C1SEL0 = 0x1000; // I2C1SEL0
    static constexpr uint32_t CCIPR_LPUART1SEL1 = 0x800; // LPUART1 clock source selection bits
    static constexpr uint32_t CCIPR_LPUART1SEL0 = 0x400; // LPUART1SEL0
    static constexpr uint32_t CCIPR_USART2SEL1 = 0x8; // USART2 clock source selection bits
    static constexpr uint32_t CCIPR_USART2SEL0 = 0x4; // USART2SEL0
    static constexpr uint32_t CCIPR_USART1SEL1 = 0x2; // USART1 clock source selection bits
    static constexpr uint32_t CCIPR_USART1SEL0 = 0x1; // USART1SEL0
    typedef bit_field_t<16, 0x3> CCIPR_I2C3SEL; // I2C3 clock source selection bits

    static constexpr uint32_t CSR_RESET_VALUE = 0xc000000; // Reset value
    static constexpr uint32_t CSR_LPWRSTF = 0x80000000; // Low-power reset flag
    static constexpr uint32_t CSR_WWDGRSTF = 0x40000000; // Window watchdog reset flag
    static constexpr uint32_t CSR_IWDGRSTF = 0x20000000; // Independent watchdog reset flag
    static constexpr uint32_t CSR_SFTRSTF = 0x10000000; // Software reset flag
    static constexpr uint32_t CSR_PORRSTF = 0x8000000; // POR/PDR reset flag
    static constexpr uint32_t CSR_PINRSTF = 0x4000000; // PIN reset flag
    static constexpr uint32_t CSR_OBLRSTF = 0x2000000; // OBLRSTF
    static constexpr uint32_t CSR_RMVF = 0x800000; // Remove reset flag
    static constexpr uint32_t CSR_RTCRST = 0x80000; // RTC software reset bit
    static constexpr uint32_t CSR_RTCEN = 0x40000; // RTC clock enable bit
    typedef bit_field_t<16, 0x3> CSR_RTCSEL; // RTC and LCD clock source selection bits
    static constexpr uint32_t CSR_CSSLSED = 0x4000; // CSS on LSE failure detection flag
    static constexpr uint32_t CSR_CSSLSEON = 0x2000; // CSSLSEON
    typedef bit_field_t<11, 0x3> CSR_LSEDRV; // LSEDRV
    static constexpr uint32_t CSR_LSEBYP = 0x400; // External low-speed oscillator bypass bit
    static constexpr uint32_t CSR_LSERDY = 0x200; // External low-speed oscillator ready bit
    static constexpr uint32_t CSR_LSEON = 0x100; // External low-speed oscillator enable bit
    static constexpr uint32_t CSR_LSIRDY = 0x2; // Internal low-speed oscillator ready bit
    static constexpr uint32_t CSR_LSION = 0x1; // Internal low-speed oscillator enable
    static constexpr uint32_t CSR_FWRSTF = 0x1000000; // : Firewall reset flag
};

// RCC: Reset and clock control

struct stm32l0x3_rcc_t
{
    volatile uint32_t CR; // Clock control register
    volatile uint32_t ICSCR; // Internal clock sources calibration register
    volatile uint32_t CRRCR; // Clock recovery RC register
    volatile uint32_t CFGR; // Clock configuration register
    volatile uint32_t CIER; // Clock interrupt enable register
    volatile uint32_t CIFR; // Clock interrupt flag register
    volatile uint32_t CICR; // Clock interrupt clear register
    volatile uint32_t IOPRSTR; // GPIO reset register
    volatile uint32_t AHBRSTR; // AHB peripheral reset register
    volatile uint32_t APB2RSTR; // APB2 peripheral reset register
    volatile uint32_t APB1RSTR; // APB1 peripheral reset register
    volatile uint32_t IOPENR; // GPIO clock enable register
    volatile uint32_t AHBENR; // AHB peripheral clock enable register
    volatile uint32_t APB2ENR; // APB2 peripheral clock enable register
    volatile uint32_t APB1ENR; // APB1 peripheral clock enable register
    volatile uint32_t IOPSMEN; // GPIO clock enable in sleep mode register
    volatile uint32_t AHBSMENR; // AHB peripheral clock enable in sleep mode register
    volatile uint32_t APB2SMENR; // APB2 peripheral clock enable in sleep mode register
    volatile uint32_t APB1SMENR; // APB1 peripheral clock enable in sleep mode register
    volatile uint32_t CCIPR; // Clock configuration register
    volatile uint32_t CSR; // Control and status register

    static constexpr uint32_t CR_RESET_VALUE = 0x300; // Reset value
    static constexpr uint32_t CR_PLLRDY = 0x2000000; // PLL clock ready flag
    static constexpr uint32_t CR_PLLON = 0x1000000; // PLL enable bit
    typedef bit_field_t<20, 0x3> CR_RTCPRE; // TC/LCD prescaler
    static constexpr uint32_t CR_CSSLSEON = 0x80000; // Clock security system on HSE enable bit
    static constexpr uint32_t CR_HSEBYP = 0x40000; // HSE clock bypass bit
    static constexpr uint32_t CR_HSERDY = 0x20000; // HSE clock ready flag
    static constexpr uint32_t CR_HSEON = 0x10000; // HSE clock enable bit
    static constexpr uint32_t CR_MSIRDY = 0x200; // MSI clock ready flag
    static constexpr uint32_t CR_MSION = 0x100; // MSI clock enable bit
    static constexpr uint32_t CR_HSI16DIVF = 0x10; // HSI16DIVF
    static constexpr uint32_t CR_HSI16DIVEN = 0x8; // HSI16DIVEN
    static constexpr uint32_t CR_HSI16RDYF = 0x4; // Internal high-speed clock ready flag
    static constexpr uint32_t CR_HSI16KERON = 0x2; // High-speed internal clock enable bit for some IP kernels
    static constexpr uint32_t CR_HSI16ON = 0x1; // 16 MHz high-speed internal clock enable
    static constexpr uint32_t CR_HSI16OUTEN = 0x20; // 16 MHz high-speed internal clock output enable

    static constexpr uint32_t ICSCR_RESET_VALUE = 0xb000; // Reset value
    typedef bit_field_t<24, 0xff> ICSCR_MSITRIM; // MSI clock trimming
    typedef bit_field_t<16, 0xff> ICSCR_MSICAL; // MSI clock calibration
    typedef bit_field_t<13, 0x7> ICSCR_MSIRANGE; // MSI clock ranges
    typedef bit_field_t<8, 0x1f> ICSCR_HSI16TRIM; // High speed internal clock trimming
    typedef bit_field_t<0, 0xff> ICSCR_HSI16CAL; // nternal high speed clock calibration

    static constexpr uint32_t CRRCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xff> CRRCR_HSI48CAL; // 48 MHz HSI clock calibration
    static constexpr uint32_t CRRCR_HSI48RDY = 0x2; // 48MHz HSI clock ready flag
    static constexpr uint32_t CRRCR_HSI48ON = 0x1; // 48MHz HSI clock enable bit
    static constexpr uint32_t CRRCR_HSI48DIV6EN = 0x4; // 48 MHz HSI clock divided by 6 output enable

    static constexpr uint32_t CFGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<28, 0x7> CFGR_MCOPRE; // Microcontroller clock output prescaler
    typedef bit_field_t<24, 0xf> CFGR_MCOSEL; // Microcontroller clock output selection
    typedef bit_field_t<22, 0x3> CFGR_PLLDIV; // PLL output division
    typedef bit_field_t<18, 0xf> CFGR_PLLMUL; // PLL multiplication factor
    static constexpr uint32_t CFGR_PLLSRC = 0x10000; // PLL entry clock source
    static constexpr uint32_t CFGR_STOPWUCK = 0x8000; // Wake-up from stop clock selection
    typedef bit_field_t<11, 0x7> CFGR_PPRE2; // APB high-speed prescaler (APB2)
    typedef bit_field_t<8, 0x7> CFGR_PPRE1; // APB low-speed prescaler (APB1)
    typedef bit_field_t<4, 0xf> CFGR_HPRE; // AHB prescaler
    typedef bit_field_t<2, 0x3> CFGR_SWS; // System clock switch status
    typedef bit_field_t<0, 0x3> CFGR_SW; // System clock switch

    static constexpr uint32_t CIER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CIER_CSSLSE = 0x80; // LSE CSS interrupt flag
    static constexpr uint32_t CIER_HSI48RDYIE = 0x40; // HSI48 ready interrupt flag
    static constexpr uint32_t CIER_MSIRDYIE = 0x20; // MSI ready interrupt flag
    static constexpr uint32_t CIER_PLLRDYIE = 0x10; // PLL ready interrupt flag
    static constexpr uint32_t CIER_HSERDYIE = 0x8; // HSE ready interrupt flag
    static constexpr uint32_t CIER_HSI16RDYIE = 0x4; // HSI16 ready interrupt flag
    static constexpr uint32_t CIER_LSERDYIE = 0x2; // LSE ready interrupt flag
    static constexpr uint32_t CIER_LSIRDYIE = 0x1; // LSI ready interrupt flag

    static constexpr uint32_t CIFR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CIFR_CSSHSEF = 0x100; // Clock Security System Interrupt flag
    static constexpr uint32_t CIFR_CSSLSEF = 0x80; // LSE Clock Security System Interrupt flag
    static constexpr uint32_t CIFR_HSI48RDYF = 0x40; // HSI48 ready interrupt flag
    static constexpr uint32_t CIFR_MSIRDYF = 0x20; // MSI ready interrupt flag
    static constexpr uint32_t CIFR_PLLRDYF = 0x10; // PLL ready interrupt flag
    static constexpr uint32_t CIFR_HSERDYF = 0x8; // HSE ready interrupt flag
    static constexpr uint32_t CIFR_HSI16RDYF = 0x4; // HSI16 ready interrupt flag
    static constexpr uint32_t CIFR_LSERDYF = 0x2; // LSE ready interrupt flag
    static constexpr uint32_t CIFR_LSIRDYF = 0x1; // LSI ready interrupt flag

    static constexpr uint32_t CICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CICR_CSSHSEC = 0x100; // Clock Security System Interrupt clear
    static constexpr uint32_t CICR_CSSLSEC = 0x80; // LSE Clock Security System Interrupt clear
    static constexpr uint32_t CICR_HSI48RDYC = 0x40; // HSI48 ready Interrupt clear
    static constexpr uint32_t CICR_MSIRDYC = 0x20; // MSI ready Interrupt clear
    static constexpr uint32_t CICR_PLLRDYC = 0x10; // PLL ready Interrupt clear
    static constexpr uint32_t CICR_HSERDYC = 0x8; // HSE ready Interrupt clear
    static constexpr uint32_t CICR_HSI16RDYC = 0x4; // HSI16 ready Interrupt clear
    static constexpr uint32_t CICR_LSERDYC = 0x2; // LSE ready Interrupt clear
    static constexpr uint32_t CICR_LSIRDYC = 0x1; // LSI ready Interrupt clear

    static constexpr uint32_t IOPRSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IOPRSTR_IOPHRST = 0x80; // I/O port H reset
    static constexpr uint32_t IOPRSTR_IOPDRST = 0x8; // I/O port D reset
    static constexpr uint32_t IOPRSTR_IOPCRST = 0x4; // I/O port A reset
    static constexpr uint32_t IOPRSTR_IOPBRST = 0x2; // I/O port B reset
    static constexpr uint32_t IOPRSTR_IOPARST = 0x1; // I/O port A reset
    static constexpr uint32_t IOPRSTR_IOPERST = 0x10; // I/O port E reset

    static constexpr uint32_t AHBRSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHBRSTR_CRYPRST = 0x1000000; // Crypto module reset
    static constexpr uint32_t AHBRSTR_RNGRST = 0x100000; // Random Number Generator module reset
    static constexpr uint32_t AHBRSTR_TOUCHRST = 0x10000; // Touch Sensing reset
    static constexpr uint32_t AHBRSTR_CRCRST = 0x1000; // Test integration module reset
    static constexpr uint32_t AHBRSTR_MIFRST = 0x100; // Memory interface reset
    static constexpr uint32_t AHBRSTR_DMA1RST = 0x1; // DMA reset

    static constexpr uint32_t APB2RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2RSTR_DBGRST = 0x400000; // DBG reset
    static constexpr uint32_t APB2RSTR_USART1RST = 0x4000; // USART1 reset
    static constexpr uint32_t APB2RSTR_SPI1RST = 0x1000; // SPI 1 reset
    static constexpr uint32_t APB2RSTR_ADC1RST = 0x200; // ADC interface reset
    static constexpr uint32_t APB2RSTR_TM12RST = 0x20; // TIM22 timer reset
    static constexpr uint32_t APB2RSTR_TIM21RST = 0x4; // TIM21 timer reset
    static constexpr uint32_t APB2RSTR_SYSCFGRST = 0x1; // System configuration controller reset

    static constexpr uint32_t APB1RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1RSTR_LPTIM1RST = 0x80000000; // Low power timer reset
    static constexpr uint32_t APB1RSTR_DACRST = 0x20000000; // DAC interface reset
    static constexpr uint32_t APB1RSTR_PWRRST = 0x10000000; // Power interface reset
    static constexpr uint32_t APB1RSTR_CRSRST = 0x8000000; // Clock recovery system reset
    static constexpr uint32_t APB1RSTR_USBRST = 0x800000; // USB reset
    static constexpr uint32_t APB1RSTR_I2C2RST = 0x400000; // I2C2 reset
    static constexpr uint32_t APB1RSTR_I2C1RST = 0x200000; // I2C1 reset
    static constexpr uint32_t APB1RSTR_LPUART1RST = 0x40000; // LPUART1 reset
    static constexpr uint32_t APB1RSTR_LPUART12RST = 0x20000; // UART2 reset
    static constexpr uint32_t APB1RSTR_SPI2RST = 0x4000; // SPI2 reset
    static constexpr uint32_t APB1RSTR_WWDRST = 0x800; // Window watchdog reset
    static constexpr uint32_t APB1RSTR_TIM6RST = 0x10; // Timer 6 reset
    static constexpr uint32_t APB1RSTR_TIM2RST = 0x1; // Timer2 reset
    static constexpr uint32_t APB1RSTR_TIM3RST = 0x2; // Timer3 reset
    static constexpr uint32_t APB1RSTR_TIM7RST = 0x20; // Timer 7 reset
    static constexpr uint32_t APB1RSTR_USART4RST = 0x80000; // USART4 reset
    static constexpr uint32_t APB1RSTR_USART5RST = 0x100000; // USART5 reset
    static constexpr uint32_t APB1RSTR_I2C3RST = 0x40000000; // I2C3 reset

    static constexpr uint32_t IOPENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IOPENR_IOPHEN = 0x80; // I/O port H clock enable bit
    static constexpr uint32_t IOPENR_IOPDEN = 0x8; // I/O port D clock enable bit
    static constexpr uint32_t IOPENR_IOPCEN = 0x4; // IO port A clock enable bit
    static constexpr uint32_t IOPENR_IOPBEN = 0x2; // IO port B clock enable bit
    static constexpr uint32_t IOPENR_IOPAEN = 0x1; // IO port A clock enable bit
    static constexpr uint32_t IOPENR_IOPEEN = 0x10; // I/O port E clock enable bit

    static constexpr uint32_t AHBENR_RESET_VALUE = 0x100; // Reset value
    static constexpr uint32_t AHBENR_CRYPEN = 0x1000000; // Crypto clock enable bit
    static constexpr uint32_t AHBENR_RNGEN = 0x100000; // Random Number Generator clock enable bit
    static constexpr uint32_t AHBENR_TOUCHEN = 0x10000; // Touch Sensing clock enable bit
    static constexpr uint32_t AHBENR_CRCEN = 0x1000; // CRC clock enable bit
    static constexpr uint32_t AHBENR_MIFEN = 0x100; // NVM interface clock enable bit
    static constexpr uint32_t AHBENR_DMA1EN = 0x1; // DMA clock enable bit

    static constexpr uint32_t APB2ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2ENR_DBGEN = 0x400000; // DBG clock enable bit
    static constexpr uint32_t APB2ENR_USART1EN = 0x4000; // USART1 clock enable bit
    static constexpr uint32_t APB2ENR_SPI1EN = 0x1000; // SPI1 clock enable bit
    static constexpr uint32_t APB2ENR_ADC1EN = 0x200; // ADC clock enable bit
    static constexpr uint32_t APB2ENR_MIFIEN = 0x80; // MiFaRe Firewall clock enable bit
    static constexpr uint32_t APB2ENR_TIM22EN = 0x20; // TIM22 timer clock enable bit
    static constexpr uint32_t APB2ENR_TIM21EN = 0x4; // TIM21 timer clock enable bit
    static constexpr uint32_t APB2ENR_SYSCFGEN = 0x1; // System configuration controller clock enable bit

    static constexpr uint32_t APB1ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1ENR_LPTIM1EN = 0x80000000; // Low power timer clock enable bit
    static constexpr uint32_t APB1ENR_DACEN = 0x20000000; // DAC interface clock enable bit
    static constexpr uint32_t APB1ENR_PWREN = 0x10000000; // Power interface clock enable bit
    static constexpr uint32_t APB1ENR_CRSEN = 0x8000000; // Clock recovery system clock enable bit
    static constexpr uint32_t APB1ENR_USBEN = 0x800000; // USB clock enable bit
    static constexpr uint32_t APB1ENR_I2C2EN = 0x400000; // I2C2 clock enable bit
    static constexpr uint32_t APB1ENR_I2C1EN = 0x200000; // I2C1 clock enable bit
    static constexpr uint32_t APB1ENR_LPUART1EN = 0x40000; // LPUART1 clock enable bit
    static constexpr uint32_t APB1ENR_USART2EN = 0x20000; // UART2 clock enable bit
    static constexpr uint32_t APB1ENR_SPI2EN = 0x4000; // SPI2 clock enable bit
    static constexpr uint32_t APB1ENR_WWDGEN = 0x800; // Window watchdog clock enable bit
    static constexpr uint32_t APB1ENR_TIM6EN = 0x10; // Timer 6 clock enable bit
    static constexpr uint32_t APB1ENR_TIM2EN = 0x1; // Timer2 clock enable bit
    static constexpr uint32_t APB1ENR_TIM3EN = 0x2; // Timer3 clock enable bit
    static constexpr uint32_t APB1ENR_TIM7EN = 0x20; // Timer 7 clock enable bit
    static constexpr uint32_t APB1ENR_USART4EN = 0x80000; // USART4 clock enable bit
    static constexpr uint32_t APB1ENR_USART5EN = 0x100000; // USART5 clock enable bit
    static constexpr uint32_t APB1ENR_I2C3EN = 0x40000000; // I2C3 clock enable bit

    static constexpr uint32_t IOPSMEN_RESET_VALUE = 0x8f; // Reset value
    static constexpr uint32_t IOPSMEN_IOPHSMEN = 0x80; // IOPHSMEN
    static constexpr uint32_t IOPSMEN_IOPDSMEN = 0x8; // IOPDSMEN
    static constexpr uint32_t IOPSMEN_IOPCSMEN = 0x4; // IOPCSMEN
    static constexpr uint32_t IOPSMEN_IOPBSMEN = 0x2; // IOPBSMEN
    static constexpr uint32_t IOPSMEN_IOPASMEN = 0x1; // IOPASMEN
    static constexpr uint32_t IOPSMEN_IOPESMEN = 0x10; // Port E clock enable during Sleep mode bit

    static constexpr uint32_t AHBSMENR_RESET_VALUE = 0x1111301; // Reset value
    static constexpr uint32_t AHBSMENR_CRYPSMEN = 0x1000000; // Crypto clock enable during sleep mode bit
    static constexpr uint32_t AHBSMENR_RNGSMEN = 0x100000; // Random Number Generator clock enable during sleep mode bit
    static constexpr uint32_t AHBSMENR_TOUCHSMEN = 0x10000; // Touch Sensing clock enable during sleep mode bit
    static constexpr uint32_t AHBSMENR_CRCSMEN = 0x1000; // CRC clock enable during sleep mode bit
    static constexpr uint32_t AHBSMENR_SRAMSMEN = 0x200; // SRAM interface clock enable during sleep mode bit
    static constexpr uint32_t AHBSMENR_MIFSMEN = 0x100; // NVM interface clock enable during sleep mode bit
    static constexpr uint32_t AHBSMENR_DMA1SMEN = 0x1; // DMA clock enable during sleep mode bit

    static constexpr uint32_t APB2SMENR_RESET_VALUE = 0x405225; // Reset value
    static constexpr uint32_t APB2SMENR_DBGSMEN = 0x400000; // DBG clock enable during sleep mode bit
    static constexpr uint32_t APB2SMENR_USART1SMEN = 0x4000; // USART1 clock enable during sleep mode bit
    static constexpr uint32_t APB2SMENR_SPI1SMEN = 0x1000; // SPI1 clock enable during sleep mode bit
    static constexpr uint32_t APB2SMENR_ADC1SMEN = 0x200; // ADC clock enable during sleep mode bit
    static constexpr uint32_t APB2SMENR_TIM22SMEN = 0x20; // TIM22 timer clock enable during sleep mode bit
    static constexpr uint32_t APB2SMENR_TIM21SMEN = 0x4; // TIM21 timer clock enable during sleep mode bit
    static constexpr uint32_t APB2SMENR_SYSCFGSMEN = 0x1; // System configuration controller clock enable during sleep mode bit

    static constexpr uint32_t APB1SMENR_RESET_VALUE = 0xb8e64a11; // Reset value
    static constexpr uint32_t APB1SMENR_LPTIM1SMEN = 0x80000000; // Low power timer clock enable during sleep mode bit
    static constexpr uint32_t APB1SMENR_DACSMEN = 0x20000000; // DAC interface clock enable during sleep mode bit
    static constexpr uint32_t APB1SMENR_PWRSMEN = 0x10000000; // Power interface clock enable during sleep mode bit
    static constexpr uint32_t APB1SMENR_CRSSMEN = 0x8000000; // Clock recovery system clock enable during sleep mode bit
    static constexpr uint32_t APB1SMENR_USBSMEN = 0x800000; // USB clock enable during sleep mode bit
    static constexpr uint32_t APB1SMENR_I2C2SMEN = 0x400000; // I2C2 clock enable during sleep mode bit
    static constexpr uint32_t APB1SMENR_I2C1SMEN = 0x200000; // I2C1 clock enable during sleep mode bit
    static constexpr uint32_t APB1SMENR_LPUART1SMEN = 0x40000; // LPUART1 clock enable during sleep mode bit
    static constexpr uint32_t APB1SMENR_USART2SMEN = 0x20000; // UART2 clock enable during sleep mode bit
    static constexpr uint32_t APB1SMENR_SPI2SMEN = 0x4000; // SPI2 clock enable during sleep mode bit
    static constexpr uint32_t APB1SMENR_WWDGSMEN = 0x800; // Window watchdog clock enable during sleep mode bit
    static constexpr uint32_t APB1SMENR_TIM6SMEN = 0x10; // Timer 6 clock enable during sleep mode bit
    static constexpr uint32_t APB1SMENR_TIM2SMEN = 0x1; // Timer2 clock enable during sleep mode bit
    static constexpr uint32_t APB1SMENR_TIM3SMEN = 0x2; // Timer3 clock enable during Sleep mode bit
    static constexpr uint32_t APB1SMENR_TIM7SMEN = 0x20; // Timer 7 clock enable during Sleep mode bit
    static constexpr uint32_t APB1SMENR_USART4SMEN = 0x80000; // USART4 clock enable during Sleep mode bit
    static constexpr uint32_t APB1SMENR_USART5SMEN = 0x100000; // USART5 clock enable during Sleep mode bit
    static constexpr uint32_t APB1SMENR_I2C3SMEN = 0x40000000; // 2C3 clock enable during Sleep mode bit

    static constexpr uint32_t CCIPR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCIPR_HSI48MSEL = 0x4000000; // 48 MHz HSI48 clock source selection bit
    static constexpr uint32_t CCIPR_LPTIM1SEL1 = 0x80000; // Low Power Timer clock source selection bits
    static constexpr uint32_t CCIPR_LPTIM1SEL0 = 0x40000; // LPTIM1SEL0
    static constexpr uint32_t CCIPR_I2C1SEL1 = 0x2000; // I2C1 clock source selection bits
    static constexpr uint32_t CCIPR_I2C1SEL0 = 0x1000; // I2C1SEL0
    static constexpr uint32_t CCIPR_LPUART1SEL1 = 0x800; // LPUART1 clock source selection bits
    static constexpr uint32_t CCIPR_LPUART1SEL0 = 0x400; // LPUART1SEL0
    static constexpr uint32_t CCIPR_USART2SEL1 = 0x8; // USART2 clock source selection bits
    static constexpr uint32_t CCIPR_USART2SEL0 = 0x4; // USART2SEL0
    static constexpr uint32_t CCIPR_USART1SEL1 = 0x2; // USART1 clock source selection bits
    static constexpr uint32_t CCIPR_USART1SEL0 = 0x1; // USART1SEL0
    typedef bit_field_t<16, 0x3> CCIPR_I2C3SEL; // I2C3 clock source selection bits

    static constexpr uint32_t CSR_RESET_VALUE = 0xc000000; // Reset value
    static constexpr uint32_t CSR_LPWRSTF = 0x80000000; // Low-power reset flag
    static constexpr uint32_t CSR_WWDGRSTF = 0x40000000; // Window watchdog reset flag
    static constexpr uint32_t CSR_IWDGRSTF = 0x20000000; // Independent watchdog reset flag
    static constexpr uint32_t CSR_SFTRSTF = 0x10000000; // Software reset flag
    static constexpr uint32_t CSR_PORRSTF = 0x8000000; // POR/PDR reset flag
    static constexpr uint32_t CSR_PINRSTF = 0x4000000; // PIN reset flag
    static constexpr uint32_t CSR_OBLRSTF = 0x2000000; // OBLRSTF
    static constexpr uint32_t CSR_RMVF = 0x1000000; // Remove reset flag
    static constexpr uint32_t CSR_RTCRST = 0x80000; // RTC software reset bit
    static constexpr uint32_t CSR_RTCEN = 0x40000; // RTC clock enable bit
    typedef bit_field_t<16, 0x3> CSR_RTCSEL; // RTC and LCD clock source selection bits
    static constexpr uint32_t CSR_CSSLSED = 0x4000; // CSS on LSE failure detection flag
    static constexpr uint32_t CSR_CSSLSEON = 0x2000; // CSSLSEON
    typedef bit_field_t<11, 0x3> CSR_LSEDRV; // LSEDRV
    static constexpr uint32_t CSR_LSEBYP = 0x400; // External low-speed oscillator bypass bit
    static constexpr uint32_t CSR_LSERDY = 0x200; // External low-speed oscillator ready bit
    static constexpr uint32_t CSR_LSEON = 0x100; // External low-speed oscillator enable bit
    static constexpr uint32_t CSR_LSIRDY = 0x2; // Internal low-speed oscillator ready bit
    static constexpr uint32_t CSR_LSION = 0x1; // Internal low-speed oscillator enable
};

template<>
struct peripheral_t<STM32L0x0, RCC>
{
    using T = stm32l0x0_rcc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x1, RCC>
{
    using T = stm32l0x0_rcc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x2, RCC>
{
    using T = stm32l0x2_rcc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x3, RCC>
{
    using T = stm32l0x3_rcc_t;
    static T& V;
};

using rcc_t = peripheral_t<svd, RCC>;

template<int INST> struct rcc_traits {};

template<> struct rcc_traits<0>
{
    using rcc = rcc_t;
    static constexpr signal_t MCO = RCC_MCO;
};
