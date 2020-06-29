#pragma once

////
//
//      STM32G0 RCC peripherals
//
///

// RCC: Reset and clock control

struct stm32g030_rcc_t
{
    volatile uint32_t CR; // Clock control register
    volatile uint32_t ICSCR; // Internal clock sources calibration register
    volatile uint32_t CFGR; // Clock configuration register
    volatile uint32_t PLLSYSCFGR; // PLL configuration register
    reserved_t<0x2> _0x10;
    volatile uint32_t CIER; // Clock interrupt enable register
    volatile uint32_t CIFR; // Clock interrupt flag register
    volatile uint32_t CICR; // Clock interrupt clear register
    volatile uint32_t IOPRSTR; // GPIO reset register
    volatile uint32_t AHBRSTR; // AHB peripheral reset register
    volatile uint32_t APBRSTR1; // APB peripheral reset register 1
    volatile uint32_t APBRSTR2; // APB peripheral reset register 2
    volatile uint32_t IOPENR; // GPIO clock enable register
    volatile uint32_t AHBENR; // AHB peripheral clock enable register
    volatile uint32_t APBENR1; // APB peripheral clock enable register 1
    volatile uint32_t APBENR2; // APB peripheral clock enable register 2
    volatile uint32_t IOPSMENR; // GPIO in Sleep mode clock enable register
    volatile uint32_t AHBSMENR; // AHB peripheral clock enable in Sleep mode register
    volatile uint32_t APBSMENR1; // APB peripheral clock enable in Sleep mode register 1
    volatile uint32_t APBSMENR2; // APB peripheral clock enable in Sleep mode register 2
    volatile uint32_t CCIPR; // Peripherals independent clock configuration register
    reserved_t<0x1> _0x58;
    volatile uint32_t BDCR; // RTC domain control register
    volatile uint32_t CSR; // Control/status register

    static constexpr uint32_t CR_RESET_VALUE = 0x63; // Reset value
    static constexpr uint32_t CR_HSION = 0x100; // HSI16 clock enable
    static constexpr uint32_t CR_HSIKERON = 0x200; // HSI16 always enable for peripheral kernels
    static constexpr uint32_t CR_HSIRDY = 0x400; // HSI16 clock ready flag
    typedef bit_field_t<11, 0x7> CR_HSIDIV; // HSI16 clock division factor
    static constexpr uint32_t CR_HSEON = 0x10000; // HSE clock enable
    static constexpr uint32_t CR_HSERDY = 0x20000; // HSE clock ready flag
    static constexpr uint32_t CR_HSEBYP = 0x40000; // HSE crystal oscillator bypass
    static constexpr uint32_t CR_CSSON = 0x80000; // Clock security system enable
    static constexpr uint32_t CR_PLLON = 0x1000000; // PLL enable
    static constexpr uint32_t CR_PLLRDY = 0x2000000; // PLL clock ready flag

    static constexpr uint32_t ICSCR_RESET_VALUE = 0x10000000; // Reset value
    typedef bit_field_t<0, 0xff> ICSCR_HSICAL; // HSI16 clock calibration
    typedef bit_field_t<8, 0x7f> ICSCR_HSITRIM; // HSI16 clock trimming

    static constexpr uint32_t CFGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<28, 0x7> CFGR_MCOPRE; // Microcontroller clock output prescaler
    typedef bit_field_t<24, 0x7> CFGR_MCOSEL; // Microcontroller clock output
    typedef bit_field_t<12, 0x7> CFGR_PPRE; // APB prescaler
    typedef bit_field_t<8, 0xf> CFGR_HPRE; // AHB prescaler
    typedef bit_field_t<3, 0x7> CFGR_SWS; // System clock switch status
    typedef bit_field_t<0, 0x7> CFGR_SW; // System clock switch

    static constexpr uint32_t PLLSYSCFGR_RESET_VALUE = 0x1000; // Reset value
    typedef bit_field_t<0, 0x3> PLLSYSCFGR_PLLSRC; // PLL input clock source
    typedef bit_field_t<4, 0x7> PLLSYSCFGR_PLLM; // Division factor M of the PLL input clock divider
    typedef bit_field_t<8, 0x7f> PLLSYSCFGR_PLLN; // PLL frequency multiplication factor N
    static constexpr uint32_t PLLSYSCFGR_PLLPEN = 0x10000; // PLLPCLK clock output enable
    typedef bit_field_t<17, 0x1f> PLLSYSCFGR_PLLP; // PLL VCO division factor P for PLLPCLK clock output
    static constexpr uint32_t PLLSYSCFGR_PLLQEN = 0x1000000; // PLLQCLK clock output enable
    typedef bit_field_t<25, 0x7> PLLSYSCFGR_PLLQ; // PLL VCO division factor Q for PLLQCLK clock output
    static constexpr uint32_t PLLSYSCFGR_PLLREN = 0x10000000; // PLLRCLK clock output enable
    typedef bit_field_t<29, 0x7> PLLSYSCFGR_PLLR; // PLL VCO division factor R for PLLRCLK clock output


    static constexpr uint32_t CIER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CIER_LSIRDYIE = 0x1; // LSI ready interrupt enable
    static constexpr uint32_t CIER_LSERDYIE = 0x2; // LSE ready interrupt enable
    static constexpr uint32_t CIER_HSIRDYIE = 0x8; // HSI ready interrupt enable
    static constexpr uint32_t CIER_HSERDYIE = 0x10; // HSE ready interrupt enable
    static constexpr uint32_t CIER_PLLSYSRDYIE = 0x20; // PLL ready interrupt enable

    static constexpr uint32_t CIFR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CIFR_LSIRDYF = 0x1; // LSI ready interrupt flag
    static constexpr uint32_t CIFR_LSERDYF = 0x2; // LSE ready interrupt flag
    static constexpr uint32_t CIFR_HSIRDYF = 0x8; // HSI ready interrupt flag
    static constexpr uint32_t CIFR_HSERDYF = 0x10; // HSE ready interrupt flag
    static constexpr uint32_t CIFR_PLLSYSRDYF = 0x20; // PLL ready interrupt flag
    static constexpr uint32_t CIFR_CSSF = 0x100; // Clock security system interrupt flag
    static constexpr uint32_t CIFR_LSECSSF = 0x200; // LSE Clock security system interrupt flag

    static constexpr uint32_t CICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CICR_LSIRDYC = 0x1; // LSI ready interrupt clear
    static constexpr uint32_t CICR_LSERDYC = 0x2; // LSE ready interrupt clear
    static constexpr uint32_t CICR_HSIRDYC = 0x8; // HSI ready interrupt clear
    static constexpr uint32_t CICR_HSERDYC = 0x10; // HSE ready interrupt clear
    static constexpr uint32_t CICR_PLLSYSRDYC = 0x20; // PLL ready interrupt clear
    static constexpr uint32_t CICR_CSSC = 0x100; // Clock security system interrupt clear
    static constexpr uint32_t CICR_LSECSSC = 0x200; // LSE Clock security system interrupt clear

    static constexpr uint32_t IOPRSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IOPRSTR_IOPARST = 0x1; // I/O port A reset
    static constexpr uint32_t IOPRSTR_IOPBRST = 0x2; // I/O port B reset
    static constexpr uint32_t IOPRSTR_IOPCRST = 0x4; // I/O port C reset
    static constexpr uint32_t IOPRSTR_IOPDRST = 0x8; // I/O port D reset
    static constexpr uint32_t IOPRSTR_IOPFRST = 0x20; // I/O port F reset

    static constexpr uint32_t AHBRSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHBRSTR_DMARST = 0x1; // DMA1 reset
    static constexpr uint32_t AHBRSTR_FLASHRST = 0x100; // FLITF reset
    static constexpr uint32_t AHBRSTR_CRCRST = 0x1000; // CRC reset

    static constexpr uint32_t APBRSTR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APBRSTR1_TIM2RST = 0x1; // TIM2 timer reset
    static constexpr uint32_t APBRSTR1_TIM3RST = 0x2; // TIM3 timer reset
    static constexpr uint32_t APBRSTR1_SPI2RST = 0x4000; // SPI2 reset
    static constexpr uint32_t APBRSTR1_USART2RST = 0x20000; // USART2 reset
    static constexpr uint32_t APBRSTR1_I2C1RST = 0x200000; // I2C1 reset
    static constexpr uint32_t APBRSTR1_I2C2RST = 0x400000; // I2C2 reset
    static constexpr uint32_t APBRSTR1_DBGRST = 0x8000000; // Debug support reset
    static constexpr uint32_t APBRSTR1_PWRRST = 0x10000000; // Power interface reset

    static constexpr uint32_t APBRSTR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APBRSTR2_SYSCFGRST = 0x1; // SYSCFG, COMP and VREFBUF reset
    static constexpr uint32_t APBRSTR2_TIM1RST = 0x800; // TIM1 timer reset
    static constexpr uint32_t APBRSTR2_SPI1RST = 0x1000; // SPI1 reset
    static constexpr uint32_t APBRSTR2_USART1RST = 0x4000; // USART1 reset
    static constexpr uint32_t APBRSTR2_TIM14RST = 0x8000; // TIM14 timer reset
    static constexpr uint32_t APBRSTR2_TIM16RST = 0x20000; // TIM16 timer reset
    static constexpr uint32_t APBRSTR2_TIM17RST = 0x40000; // TIM17 timer reset
    static constexpr uint32_t APBRSTR2_ADCRST = 0x100000; // ADC reset

    static constexpr uint32_t IOPENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IOPENR_IOPAEN = 0x1; // I/O port A clock enable
    static constexpr uint32_t IOPENR_IOPBEN = 0x2; // I/O port B clock enable
    static constexpr uint32_t IOPENR_IOPCEN = 0x4; // I/O port C clock enable
    static constexpr uint32_t IOPENR_IOPDEN = 0x8; // I/O port D clock enable
    static constexpr uint32_t IOPENR_IOPFEN = 0x20; // I/O port F clock enable

    static constexpr uint32_t AHBENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHBENR_DMAEN = 0x1; // DMA clock enable
    static constexpr uint32_t AHBENR_FLASHEN = 0x100; // Flash memory interface clock enable
    static constexpr uint32_t AHBENR_CRCEN = 0x1000; // CRC clock enable

    static constexpr uint32_t APBENR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APBENR1_TIM2EN = 0x1; // TIM2 timer clock enable
    static constexpr uint32_t APBENR1_TIM3EN = 0x2; // TIM3 timer clock enable
    static constexpr uint32_t APBENR1_RTCAPBEN = 0x400; // RTC APB clock enable
    static constexpr uint32_t APBENR1_WWDGEN = 0x800; // WWDG clock enable
    static constexpr uint32_t APBENR1_SPI2EN = 0x4000; // SPI2 clock enable
    static constexpr uint32_t APBENR1_USART2EN = 0x20000; // USART2 clock enable
    static constexpr uint32_t APBENR1_I2C1EN = 0x200000; // I2C1 clock enable
    static constexpr uint32_t APBENR1_I2C2EN = 0x400000; // I2C2 clock enable
    static constexpr uint32_t APBENR1_DBGEN = 0x8000000; // Debug support clock enable
    static constexpr uint32_t APBENR1_PWREN = 0x10000000; // Power interface clock enable

    static constexpr uint32_t APBENR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APBENR2_SYSCFGEN = 0x1; // SYSCFG, COMP and VREFBUF clock enable
    static constexpr uint32_t APBENR2_TIM1EN = 0x800; // TIM1 timer clock enable
    static constexpr uint32_t APBENR2_SPI1EN = 0x1000; // SPI1 clock enable
    static constexpr uint32_t APBENR2_USART1EN = 0x4000; // USART1 clock enable
    static constexpr uint32_t APBENR2_TIM14EN = 0x8000; // TIM14 timer clock enable
    static constexpr uint32_t APBENR2_TIM16EN = 0x20000; // TIM16 timer clock enable
    static constexpr uint32_t APBENR2_TIM17EN = 0x40000; // TIM16 timer clock enable
    static constexpr uint32_t APBENR2_ADCEN = 0x100000; // ADC clock enable

    static constexpr uint32_t IOPSMENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IOPSMENR_IOPASMEN = 0x1; // I/O port A clock enable during Sleep mode
    static constexpr uint32_t IOPSMENR_IOPBSMEN = 0x2; // I/O port B clock enable during Sleep mode
    static constexpr uint32_t IOPSMENR_IOPCSMEN = 0x4; // I/O port C clock enable during Sleep mode
    static constexpr uint32_t IOPSMENR_IOPDSMEN = 0x8; // I/O port D clock enable during Sleep mode
    static constexpr uint32_t IOPSMENR_IOPFSMEN = 0x20; // I/O port F clock enable during Sleep mode

    static constexpr uint32_t AHBSMENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHBSMENR_DMASMEN = 0x1; // DMA clock enable during Sleep mode
    static constexpr uint32_t AHBSMENR_FLASHSMEN = 0x100; // Flash memory interface clock enable during Sleep mode
    static constexpr uint32_t AHBSMENR_SRAMSMEN = 0x200; // SRAM clock enable during Sleep mode
    static constexpr uint32_t AHBSMENR_CRCSMEN = 0x1000; // CRC clock enable during Sleep mode

    static constexpr uint32_t APBSMENR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APBSMENR1_TIM2SMEN = 0x1; // TIM2 timer clock enable during Sleep mode
    static constexpr uint32_t APBSMENR1_TIM3SMEN = 0x2; // TIM3 timer clock enable during Sleep mode
    static constexpr uint32_t APBSMENR1_RTCAPBSMEN = 0x400; // RTC APB clock enable during Sleep mode
    static constexpr uint32_t APBSMENR1_WWDGSMEN = 0x800; // WWDG clock enable during Sleep mode
    static constexpr uint32_t APBSMENR1_SPI2SMEN = 0x4000; // SPI2 clock enable during Sleep mode
    static constexpr uint32_t APBSMENR1_USART2SMEN = 0x20000; // USART2 clock enable during Sleep mode
    static constexpr uint32_t APBSMENR1_I2C1SMEN = 0x200000; // I2C1 clock enable during Sleep mode
    static constexpr uint32_t APBSMENR1_I2C2SMEN = 0x400000; // I2C2 clock enable during Sleep mode
    static constexpr uint32_t APBSMENR1_DBGSMEN = 0x8000000; // Debug support clock enable during Sleep mode
    static constexpr uint32_t APBSMENR1_PWRSMEN = 0x10000000; // Power interface clock enable during Sleep mode

    static constexpr uint32_t APBSMENR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APBSMENR2_SYSCFGSMEN = 0x1; // SYSCFG, COMP and VREFBUF clock enable during Sleep mode
    static constexpr uint32_t APBSMENR2_TIM1SMEN = 0x800; // TIM1 timer clock enable during Sleep mode
    static constexpr uint32_t APBSMENR2_SPI1SMEN = 0x1000; // SPI1 clock enable during Sleep mode
    static constexpr uint32_t APBSMENR2_USART1SMEN = 0x4000; // USART1 clock enable during Sleep mode
    static constexpr uint32_t APBSMENR2_TIM14SMEN = 0x8000; // TIM14 timer clock enable during Sleep mode
    static constexpr uint32_t APBSMENR2_TIM16SMEN = 0x20000; // TIM16 timer clock enable during Sleep mode
    static constexpr uint32_t APBSMENR2_TIM17SMEN = 0x40000; // TIM16 timer clock enable during Sleep mode
    static constexpr uint32_t APBSMENR2_ADCSMEN = 0x100000; // ADC clock enable during Sleep mode

    static constexpr uint32_t CCIPR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> CCIPR_USART1SEL; // USART1 clock source selection
    typedef bit_field_t<12, 0x3> CCIPR_I2C1SEL; // I2C1 clock source selection
    typedef bit_field_t<14, 0x3> CCIPR_I2S2SEL; // I2S1 clock source selection
    static constexpr uint32_t CCIPR_TIM1SEL = 0x400000; // TIM1 clock source selection
    typedef bit_field_t<26, 0x3> CCIPR_RNGSEL; // RNG clock source selection
    typedef bit_field_t<28, 0x3> CCIPR_RNGDIV; // Division factor of RNG clock divider
    typedef bit_field_t<30, 0x3> CCIPR_ADCSEL; // ADCs clock source selection


    static constexpr uint32_t BDCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BDCR_LSEON = 0x1; // LSE oscillator enable
    static constexpr uint32_t BDCR_LSERDY = 0x2; // LSE oscillator ready
    static constexpr uint32_t BDCR_LSEBYP = 0x4; // LSE oscillator bypass
    typedef bit_field_t<3, 0x3> BDCR_LSEDRV; // LSE oscillator drive capability
    static constexpr uint32_t BDCR_LSECSSON = 0x20; // CSS on LSE enable
    static constexpr uint32_t BDCR_LSECSSD = 0x40; // CSS on LSE failure Detection
    typedef bit_field_t<8, 0x3> BDCR_RTCSEL; // RTC clock source selection
    static constexpr uint32_t BDCR_RTCEN = 0x8000; // RTC clock enable
    static constexpr uint32_t BDCR_BDRST = 0x10000; // RTC domain software reset
    static constexpr uint32_t BDCR_LSCOEN = 0x1000000; // Low-speed clock output (LSCO) enable
    static constexpr uint32_t BDCR_LSCOSEL = 0x2000000; // Low-speed clock output selection

    static constexpr uint32_t CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CSR_LSION = 0x1; // LSI oscillator enable
    static constexpr uint32_t CSR_LSIRDY = 0x2; // LSI oscillator ready
    static constexpr uint32_t CSR_RMVF = 0x800000; // Remove reset flags
    static constexpr uint32_t CSR_OBLRSTF = 0x2000000; // Option byte loader reset flag
    static constexpr uint32_t CSR_PINRSTF = 0x4000000; // Pin reset flag
    static constexpr uint32_t CSR_PWRRSTF = 0x8000000; // BOR or POR/PDR flag
    static constexpr uint32_t CSR_SFTRSTF = 0x10000000; // Software reset flag
    static constexpr uint32_t CSR_IWDGRSTF = 0x20000000; // Independent window watchdog reset flag
    static constexpr uint32_t CSR_WWDGRSTF = 0x40000000; // Window watchdog reset flag
    static constexpr uint32_t CSR_LPWRRSTF = 0x80000000; // Low-power reset flag
};

// RCC: Reset and clock control

struct stm32g031_rcc_t
{
    volatile uint32_t CR; // Clock control register
    volatile uint32_t ICSCR; // Internal clock sources calibration register
    volatile uint32_t CFGR; // Clock configuration register
    volatile uint32_t PLLSYSCFGR; // PLL configuration register
    reserved_t<0x2> _0x10;
    volatile uint32_t CIER; // Clock interrupt enable register
    volatile uint32_t CIFR; // Clock interrupt flag register
    volatile uint32_t CICR; // Clock interrupt clear register
    volatile uint32_t IOPRSTR; // GPIO reset register
    volatile uint32_t AHBRSTR; // AHB peripheral reset register
    volatile uint32_t APBRSTR1; // APB peripheral reset register 1
    volatile uint32_t APBRSTR2; // APB peripheral reset register 2
    volatile uint32_t IOPENR; // GPIO clock enable register
    volatile uint32_t AHBENR; // AHB peripheral clock enable register
    volatile uint32_t APBENR1; // APB peripheral clock enable register 1
    volatile uint32_t APBENR2; // APB peripheral clock enable register 2
    volatile uint32_t IOPSMENR; // GPIO in Sleep mode clock enable register
    volatile uint32_t AHBSMENR; // AHB peripheral clock enable in Sleep mode register
    volatile uint32_t APBSMENR1; // APB peripheral clock enable in Sleep mode register 1
    volatile uint32_t APBSMENR2; // APB peripheral clock enable in Sleep mode register 2
    volatile uint32_t CCIPR; // Peripherals independent clock configuration register
    reserved_t<0x1> _0x58;
    volatile uint32_t BDCR; // RTC domain control register
    volatile uint32_t CSR; // Control/status register

    static constexpr uint32_t CR_RESET_VALUE = 0x63; // Reset value
    static constexpr uint32_t CR_HSION = 0x100; // HSI16 clock enable
    static constexpr uint32_t CR_HSIKERON = 0x200; // HSI16 always enable for peripheral kernels
    static constexpr uint32_t CR_HSIRDY = 0x400; // HSI16 clock ready flag
    typedef bit_field_t<11, 0x7> CR_HSIDIV; // HSI16 clock division factor
    static constexpr uint32_t CR_HSEON = 0x10000; // HSE clock enable
    static constexpr uint32_t CR_HSERDY = 0x20000; // HSE clock ready flag
    static constexpr uint32_t CR_HSEBYP = 0x40000; // HSE crystal oscillator bypass
    static constexpr uint32_t CR_CSSON = 0x80000; // Clock security system enable
    static constexpr uint32_t CR_PLLON = 0x1000000; // PLL enable
    static constexpr uint32_t CR_PLLRDY = 0x2000000; // PLL clock ready flag

    static constexpr uint32_t ICSCR_RESET_VALUE = 0x10000000; // Reset value
    typedef bit_field_t<0, 0xff> ICSCR_HSICAL; // HSI16 clock calibration
    typedef bit_field_t<8, 0x7f> ICSCR_HSITRIM; // HSI16 clock trimming

    static constexpr uint32_t CFGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<28, 0x7> CFGR_MCOPRE; // Microcontroller clock output prescaler
    typedef bit_field_t<24, 0x7> CFGR_MCOSEL; // Microcontroller clock output
    typedef bit_field_t<12, 0x7> CFGR_PPRE; // APB prescaler
    typedef bit_field_t<8, 0xf> CFGR_HPRE; // AHB prescaler
    typedef bit_field_t<3, 0x7> CFGR_SWS; // System clock switch status
    typedef bit_field_t<0, 0x7> CFGR_SW; // System clock switch

    static constexpr uint32_t PLLSYSCFGR_RESET_VALUE = 0x1000; // Reset value
    typedef bit_field_t<0, 0x3> PLLSYSCFGR_PLLSRC; // PLL input clock source
    typedef bit_field_t<4, 0x7> PLLSYSCFGR_PLLM; // Division factor M of the PLL input clock divider
    typedef bit_field_t<8, 0x7f> PLLSYSCFGR_PLLN; // PLL frequency multiplication factor N
    static constexpr uint32_t PLLSYSCFGR_PLLPEN = 0x10000; // PLLPCLK clock output enable
    typedef bit_field_t<17, 0x1f> PLLSYSCFGR_PLLP; // PLL VCO division factor P for PLLPCLK clock output
    static constexpr uint32_t PLLSYSCFGR_PLLQEN = 0x1000000; // PLLQCLK clock output enable
    typedef bit_field_t<25, 0x7> PLLSYSCFGR_PLLQ; // PLL VCO division factor Q for PLLQCLK clock output
    static constexpr uint32_t PLLSYSCFGR_PLLREN = 0x10000000; // PLLRCLK clock output enable
    typedef bit_field_t<29, 0x7> PLLSYSCFGR_PLLR; // PLL VCO division factor R for PLLRCLK clock output


    static constexpr uint32_t CIER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CIER_LSIRDYIE = 0x1; // LSI ready interrupt enable
    static constexpr uint32_t CIER_LSERDYIE = 0x2; // LSE ready interrupt enable
    static constexpr uint32_t CIER_HSIRDYIE = 0x8; // HSI ready interrupt enable
    static constexpr uint32_t CIER_HSERDYIE = 0x10; // HSE ready interrupt enable
    static constexpr uint32_t CIER_PLLSYSRDYIE = 0x20; // PLL ready interrupt enable

    static constexpr uint32_t CIFR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CIFR_LSIRDYF = 0x1; // LSI ready interrupt flag
    static constexpr uint32_t CIFR_LSERDYF = 0x2; // LSE ready interrupt flag
    static constexpr uint32_t CIFR_HSIRDYF = 0x8; // HSI ready interrupt flag
    static constexpr uint32_t CIFR_HSERDYF = 0x10; // HSE ready interrupt flag
    static constexpr uint32_t CIFR_PLLSYSRDYF = 0x20; // PLL ready interrupt flag
    static constexpr uint32_t CIFR_CSSF = 0x100; // Clock security system interrupt flag
    static constexpr uint32_t CIFR_LSECSSF = 0x200; // LSE Clock security system interrupt flag

    static constexpr uint32_t CICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CICR_LSIRDYC = 0x1; // LSI ready interrupt clear
    static constexpr uint32_t CICR_LSERDYC = 0x2; // LSE ready interrupt clear
    static constexpr uint32_t CICR_HSIRDYC = 0x8; // HSI ready interrupt clear
    static constexpr uint32_t CICR_HSERDYC = 0x10; // HSE ready interrupt clear
    static constexpr uint32_t CICR_PLLSYSRDYC = 0x20; // PLL ready interrupt clear
    static constexpr uint32_t CICR_CSSC = 0x100; // Clock security system interrupt clear
    static constexpr uint32_t CICR_LSECSSC = 0x200; // LSE Clock security system interrupt clear

    static constexpr uint32_t IOPRSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IOPRSTR_IOPARST = 0x1; // I/O port A reset
    static constexpr uint32_t IOPRSTR_IOPBRST = 0x2; // I/O port B reset
    static constexpr uint32_t IOPRSTR_IOPCRST = 0x4; // I/O port C reset
    static constexpr uint32_t IOPRSTR_IOPDRST = 0x8; // I/O port D reset
    static constexpr uint32_t IOPRSTR_IOPFRST = 0x20; // I/O port F reset

    static constexpr uint32_t AHBRSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHBRSTR_DMARST = 0x1; // DMA1 reset
    static constexpr uint32_t AHBRSTR_FLASHRST = 0x100; // FLITF reset
    static constexpr uint32_t AHBRSTR_CRCRST = 0x1000; // CRC reset

    static constexpr uint32_t APBRSTR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APBRSTR1_TIM2RST = 0x1; // TIM2 timer reset
    static constexpr uint32_t APBRSTR1_TIM3RST = 0x2; // TIM3 timer reset
    static constexpr uint32_t APBRSTR1_SPI2RST = 0x4000; // SPI2 reset
    static constexpr uint32_t APBRSTR1_USART2RST = 0x20000; // USART2 reset
    static constexpr uint32_t APBRSTR1_LPUART1RST = 0x100000; // LPUART1 reset
    static constexpr uint32_t APBRSTR1_I2C1RST = 0x200000; // I2C1 reset
    static constexpr uint32_t APBRSTR1_I2C2RST = 0x400000; // I2C2 reset
    static constexpr uint32_t APBRSTR1_DBGRST = 0x8000000; // Debug support reset
    static constexpr uint32_t APBRSTR1_PWRRST = 0x10000000; // Power interface reset
    static constexpr uint32_t APBRSTR1_LPTIM2RST = 0x40000000; // Low Power Timer 2 reset
    static constexpr uint32_t APBRSTR1_LPTIM1RST = 0x80000000; // Low Power Timer 1 reset

    static constexpr uint32_t APBRSTR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APBRSTR2_SYSCFGRST = 0x1; // SYSCFG, COMP and VREFBUF reset
    static constexpr uint32_t APBRSTR2_TIM1RST = 0x800; // TIM1 timer reset
    static constexpr uint32_t APBRSTR2_SPI1RST = 0x1000; // SPI1 reset
    static constexpr uint32_t APBRSTR2_USART1RST = 0x4000; // USART1 reset
    static constexpr uint32_t APBRSTR2_TIM14RST = 0x8000; // TIM14 timer reset
    static constexpr uint32_t APBRSTR2_TIM16RST = 0x20000; // TIM16 timer reset
    static constexpr uint32_t APBRSTR2_TIM17RST = 0x40000; // TIM17 timer reset
    static constexpr uint32_t APBRSTR2_ADCRST = 0x100000; // ADC reset

    static constexpr uint32_t IOPENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IOPENR_IOPAEN = 0x1; // I/O port A clock enable
    static constexpr uint32_t IOPENR_IOPBEN = 0x2; // I/O port B clock enable
    static constexpr uint32_t IOPENR_IOPCEN = 0x4; // I/O port C clock enable
    static constexpr uint32_t IOPENR_IOPDEN = 0x8; // I/O port D clock enable
    static constexpr uint32_t IOPENR_IOPFEN = 0x20; // I/O port F clock enable

    static constexpr uint32_t AHBENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHBENR_DMAEN = 0x1; // DMA clock enable
    static constexpr uint32_t AHBENR_FLASHEN = 0x100; // Flash memory interface clock enable
    static constexpr uint32_t AHBENR_CRCEN = 0x1000; // CRC clock enable

    static constexpr uint32_t APBENR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APBENR1_TIM2EN = 0x1; // TIM2 timer clock enable
    static constexpr uint32_t APBENR1_TIM3EN = 0x2; // TIM3 timer clock enable
    static constexpr uint32_t APBENR1_RTCAPBEN = 0x400; // RTC APB clock enable
    static constexpr uint32_t APBENR1_WWDGEN = 0x800; // WWDG clock enable
    static constexpr uint32_t APBENR1_SPI2EN = 0x4000; // SPI2 clock enable
    static constexpr uint32_t APBENR1_USART2EN = 0x20000; // USART2 clock enable
    static constexpr uint32_t APBENR1_LPUART1EN = 0x100000; // LPUART1 clock enable
    static constexpr uint32_t APBENR1_I2C1EN = 0x200000; // I2C1 clock enable
    static constexpr uint32_t APBENR1_I2C2EN = 0x400000; // I2C2 clock enable
    static constexpr uint32_t APBENR1_DBGEN = 0x8000000; // Debug support clock enable
    static constexpr uint32_t APBENR1_PWREN = 0x10000000; // Power interface clock enable
    static constexpr uint32_t APBENR1_LPTIM2EN = 0x40000000; // LPTIM2 clock enable
    static constexpr uint32_t APBENR1_LPTIM1EN = 0x80000000; // LPTIM1 clock enable

    static constexpr uint32_t APBENR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APBENR2_SYSCFGEN = 0x1; // SYSCFG, COMP and VREFBUF clock enable
    static constexpr uint32_t APBENR2_TIM1EN = 0x800; // TIM1 timer clock enable
    static constexpr uint32_t APBENR2_SPI1EN = 0x1000; // SPI1 clock enable
    static constexpr uint32_t APBENR2_USART1EN = 0x4000; // USART1 clock enable
    static constexpr uint32_t APBENR2_TIM14EN = 0x8000; // TIM14 timer clock enable
    static constexpr uint32_t APBENR2_TIM16EN = 0x20000; // TIM16 timer clock enable
    static constexpr uint32_t APBENR2_TIM17EN = 0x40000; // TIM16 timer clock enable
    static constexpr uint32_t APBENR2_ADCEN = 0x100000; // ADC clock enable

    static constexpr uint32_t IOPSMENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IOPSMENR_IOPASMEN = 0x1; // I/O port A clock enable during Sleep mode
    static constexpr uint32_t IOPSMENR_IOPBSMEN = 0x2; // I/O port B clock enable during Sleep mode
    static constexpr uint32_t IOPSMENR_IOPCSMEN = 0x4; // I/O port C clock enable during Sleep mode
    static constexpr uint32_t IOPSMENR_IOPDSMEN = 0x8; // I/O port D clock enable during Sleep mode
    static constexpr uint32_t IOPSMENR_IOPFSMEN = 0x20; // I/O port F clock enable during Sleep mode

    static constexpr uint32_t AHBSMENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHBSMENR_DMASMEN = 0x1; // DMA clock enable during Sleep mode
    static constexpr uint32_t AHBSMENR_FLASHSMEN = 0x100; // Flash memory interface clock enable during Sleep mode
    static constexpr uint32_t AHBSMENR_SRAMSMEN = 0x200; // SRAM clock enable during Sleep mode
    static constexpr uint32_t AHBSMENR_CRCSMEN = 0x1000; // CRC clock enable during Sleep mode

    static constexpr uint32_t APBSMENR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APBSMENR1_TIM2SMEN = 0x1; // TIM2 timer clock enable during Sleep mode
    static constexpr uint32_t APBSMENR1_TIM3SMEN = 0x2; // TIM3 timer clock enable during Sleep mode
    static constexpr uint32_t APBSMENR1_RTCAPBSMEN = 0x400; // RTC APB clock enable during Sleep mode
    static constexpr uint32_t APBSMENR1_WWDGSMEN = 0x800; // WWDG clock enable during Sleep mode
    static constexpr uint32_t APBSMENR1_SPI2SMEN = 0x4000; // SPI2 clock enable during Sleep mode
    static constexpr uint32_t APBSMENR1_USART2SMEN = 0x20000; // USART2 clock enable during Sleep mode
    static constexpr uint32_t APBSMENR1_LPUART1SMEN = 0x100000; // LPUART1 clock enable during Sleep mode
    static constexpr uint32_t APBSMENR1_I2C1SMEN = 0x200000; // I2C1 clock enable during Sleep mode
    static constexpr uint32_t APBSMENR1_I2C2SMEN = 0x400000; // I2C2 clock enable during Sleep mode
    static constexpr uint32_t APBSMENR1_DBGSMEN = 0x8000000; // Debug support clock enable during Sleep mode
    static constexpr uint32_t APBSMENR1_PWRSMEN = 0x10000000; // Power interface clock enable during Sleep mode
    static constexpr uint32_t APBSMENR1_LPTIM2SMEN = 0x40000000; // Low Power Timer 2 clock enable during Sleep mode
    static constexpr uint32_t APBSMENR1_LPTIM1SMEN = 0x80000000; // Low Power Timer 1 clock enable during Sleep mode

    static constexpr uint32_t APBSMENR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APBSMENR2_SYSCFGSMEN = 0x1; // SYSCFG, COMP and VREFBUF clock enable during Sleep mode
    static constexpr uint32_t APBSMENR2_TIM1SMEN = 0x800; // TIM1 timer clock enable during Sleep mode
    static constexpr uint32_t APBSMENR2_SPI1SMEN = 0x1000; // SPI1 clock enable during Sleep mode
    static constexpr uint32_t APBSMENR2_USART1SMEN = 0x4000; // USART1 clock enable during Sleep mode
    static constexpr uint32_t APBSMENR2_TIM14SMEN = 0x8000; // TIM14 timer clock enable during Sleep mode
    static constexpr uint32_t APBSMENR2_TIM16SMEN = 0x20000; // TIM16 timer clock enable during Sleep mode
    static constexpr uint32_t APBSMENR2_TIM17SMEN = 0x40000; // TIM16 timer clock enable during Sleep mode
    static constexpr uint32_t APBSMENR2_ADCSMEN = 0x100000; // ADC clock enable during Sleep mode

    static constexpr uint32_t CCIPR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> CCIPR_USART1SEL; // USART1 clock source selection
    typedef bit_field_t<10, 0x3> CCIPR_LPUART1SEL; // LPUART1 clock source selection
    typedef bit_field_t<12, 0x3> CCIPR_I2C1SEL; // I2C1 clock source selection
    typedef bit_field_t<14, 0x3> CCIPR_I2S2SEL; // I2S1 clock source selection
    typedef bit_field_t<18, 0x3> CCIPR_LPTIM1SEL; // LPTIM1 clock source selection
    typedef bit_field_t<20, 0x3> CCIPR_LPTIM2SEL; // LPTIM2 clock source selection
    static constexpr uint32_t CCIPR_TIM1SEL = 0x400000; // TIM1 clock source selection
    typedef bit_field_t<26, 0x3> CCIPR_RNGSEL; // RNG clock source selection
    typedef bit_field_t<28, 0x3> CCIPR_RNGDIV; // Division factor of RNG clock divider
    typedef bit_field_t<30, 0x3> CCIPR_ADCSEL; // ADCs clock source selection


    static constexpr uint32_t BDCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BDCR_LSEON = 0x1; // LSE oscillator enable
    static constexpr uint32_t BDCR_LSERDY = 0x2; // LSE oscillator ready
    static constexpr uint32_t BDCR_LSEBYP = 0x4; // LSE oscillator bypass
    typedef bit_field_t<3, 0x3> BDCR_LSEDRV; // LSE oscillator drive capability
    static constexpr uint32_t BDCR_LSECSSON = 0x20; // CSS on LSE enable
    static constexpr uint32_t BDCR_LSECSSD = 0x40; // CSS on LSE failure Detection
    typedef bit_field_t<8, 0x3> BDCR_RTCSEL; // RTC clock source selection
    static constexpr uint32_t BDCR_RTCEN = 0x8000; // RTC clock enable
    static constexpr uint32_t BDCR_BDRST = 0x10000; // RTC domain software reset
    static constexpr uint32_t BDCR_LSCOEN = 0x1000000; // Low-speed clock output (LSCO) enable
    static constexpr uint32_t BDCR_LSCOSEL = 0x2000000; // Low-speed clock output selection

    static constexpr uint32_t CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CSR_LSION = 0x1; // LSI oscillator enable
    static constexpr uint32_t CSR_LSIRDY = 0x2; // LSI oscillator ready
    static constexpr uint32_t CSR_RMVF = 0x800000; // Remove reset flags
    static constexpr uint32_t CSR_OBLRSTF = 0x2000000; // Option byte loader reset flag
    static constexpr uint32_t CSR_PINRSTF = 0x4000000; // Pin reset flag
    static constexpr uint32_t CSR_PWRRSTF = 0x8000000; // BOR or POR/PDR flag
    static constexpr uint32_t CSR_SFTRSTF = 0x10000000; // Software reset flag
    static constexpr uint32_t CSR_IWDGRSTF = 0x20000000; // Independent window watchdog reset flag
    static constexpr uint32_t CSR_WWDGRSTF = 0x40000000; // Window watchdog reset flag
    static constexpr uint32_t CSR_LPWRRSTF = 0x80000000; // Low-power reset flag
};

// RCC: Reset and clock control

struct stm32g041_rcc_t
{
    volatile uint32_t CR; // Clock control register
    volatile uint32_t ICSCR; // Internal clock sources calibration register
    volatile uint32_t CFGR; // Clock configuration register
    volatile uint32_t PLLSYSCFGR; // PLL configuration register
    reserved_t<0x2> _0x10;
    volatile uint32_t CIER; // Clock interrupt enable register
    volatile uint32_t CIFR; // Clock interrupt flag register
    volatile uint32_t CICR; // Clock interrupt clear register
    volatile uint32_t IOPRSTR; // GPIO reset register
    volatile uint32_t AHBRSTR; // AHB peripheral reset register
    volatile uint32_t APBRSTR1; // APB peripheral reset register 1
    volatile uint32_t APBRSTR2; // APB peripheral reset register 2
    volatile uint32_t IOPENR; // GPIO clock enable register
    volatile uint32_t AHBENR; // AHB peripheral clock enable register
    volatile uint32_t APBENR1; // APB peripheral clock enable register 1
    volatile uint32_t APBENR2; // APB peripheral clock enable register 2
    volatile uint32_t IOPSMENR; // GPIO in Sleep mode clock enable register
    volatile uint32_t AHBSMENR; // AHB peripheral clock enable in Sleep mode register
    volatile uint32_t APBSMENR1; // APB peripheral clock enable in Sleep mode register 1
    volatile uint32_t APBSMENR2; // APB peripheral clock enable in Sleep mode register 2
    volatile uint32_t CCIPR; // Peripherals independent clock configuration register
    reserved_t<0x1> _0x58;
    volatile uint32_t BDCR; // RTC domain control register
    volatile uint32_t CSR; // Control/status register

    static constexpr uint32_t CR_RESET_VALUE = 0x63; // Reset value
    static constexpr uint32_t CR_HSION = 0x100; // HSI16 clock enable
    static constexpr uint32_t CR_HSIKERON = 0x200; // HSI16 always enable for peripheral kernels
    static constexpr uint32_t CR_HSIRDY = 0x400; // HSI16 clock ready flag
    typedef bit_field_t<11, 0x7> CR_HSIDIV; // HSI16 clock division factor
    static constexpr uint32_t CR_HSEON = 0x10000; // HSE clock enable
    static constexpr uint32_t CR_HSERDY = 0x20000; // HSE clock ready flag
    static constexpr uint32_t CR_HSEBYP = 0x40000; // HSE crystal oscillator bypass
    static constexpr uint32_t CR_CSSON = 0x80000; // Clock security system enable
    static constexpr uint32_t CR_PLLON = 0x1000000; // PLL enable
    static constexpr uint32_t CR_PLLRDY = 0x2000000; // PLL clock ready flag

    static constexpr uint32_t ICSCR_RESET_VALUE = 0x10000000; // Reset value
    typedef bit_field_t<0, 0xff> ICSCR_HSICAL; // HSI16 clock calibration
    typedef bit_field_t<8, 0x7f> ICSCR_HSITRIM; // HSI16 clock trimming

    static constexpr uint32_t CFGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<28, 0x7> CFGR_MCOPRE; // Microcontroller clock output prescaler
    typedef bit_field_t<24, 0x7> CFGR_MCOSEL; // Microcontroller clock output
    typedef bit_field_t<12, 0x7> CFGR_PPRE; // APB prescaler
    typedef bit_field_t<8, 0xf> CFGR_HPRE; // AHB prescaler
    typedef bit_field_t<3, 0x7> CFGR_SWS; // System clock switch status
    typedef bit_field_t<0, 0x7> CFGR_SW; // System clock switch

    static constexpr uint32_t PLLSYSCFGR_RESET_VALUE = 0x1000; // Reset value
    typedef bit_field_t<0, 0x3> PLLSYSCFGR_PLLSRC; // PLL input clock source
    typedef bit_field_t<4, 0x7> PLLSYSCFGR_PLLM; // Division factor M of the PLL input clock divider
    typedef bit_field_t<8, 0x7f> PLLSYSCFGR_PLLN; // PLL frequency multiplication factor N
    static constexpr uint32_t PLLSYSCFGR_PLLPEN = 0x10000; // PLLPCLK clock output enable
    typedef bit_field_t<17, 0x1f> PLLSYSCFGR_PLLP; // PLL VCO division factor P for PLLPCLK clock output
    static constexpr uint32_t PLLSYSCFGR_PLLQEN = 0x1000000; // PLLQCLK clock output enable
    typedef bit_field_t<25, 0x7> PLLSYSCFGR_PLLQ; // PLL VCO division factor Q for PLLQCLK clock output
    static constexpr uint32_t PLLSYSCFGR_PLLREN = 0x10000000; // PLLRCLK clock output enable
    typedef bit_field_t<29, 0x7> PLLSYSCFGR_PLLR; // PLL VCO division factor R for PLLRCLK clock output


    static constexpr uint32_t CIER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CIER_LSIRDYIE = 0x1; // LSI ready interrupt enable
    static constexpr uint32_t CIER_LSERDYIE = 0x2; // LSE ready interrupt enable
    static constexpr uint32_t CIER_HSIRDYIE = 0x8; // HSI ready interrupt enable
    static constexpr uint32_t CIER_HSERDYIE = 0x10; // HSE ready interrupt enable
    static constexpr uint32_t CIER_PLLSYSRDYIE = 0x20; // PLL ready interrupt enable

    static constexpr uint32_t CIFR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CIFR_LSIRDYF = 0x1; // LSI ready interrupt flag
    static constexpr uint32_t CIFR_LSERDYF = 0x2; // LSE ready interrupt flag
    static constexpr uint32_t CIFR_HSIRDYF = 0x8; // HSI ready interrupt flag
    static constexpr uint32_t CIFR_HSERDYF = 0x10; // HSE ready interrupt flag
    static constexpr uint32_t CIFR_PLLSYSRDYF = 0x20; // PLL ready interrupt flag
    static constexpr uint32_t CIFR_CSSF = 0x100; // Clock security system interrupt flag
    static constexpr uint32_t CIFR_LSECSSF = 0x200; // LSE Clock security system interrupt flag

    static constexpr uint32_t CICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CICR_LSIRDYC = 0x1; // LSI ready interrupt clear
    static constexpr uint32_t CICR_LSERDYC = 0x2; // LSE ready interrupt clear
    static constexpr uint32_t CICR_HSIRDYC = 0x8; // HSI ready interrupt clear
    static constexpr uint32_t CICR_HSERDYC = 0x10; // HSE ready interrupt clear
    static constexpr uint32_t CICR_PLLSYSRDYC = 0x20; // PLL ready interrupt clear
    static constexpr uint32_t CICR_CSSC = 0x100; // Clock security system interrupt clear
    static constexpr uint32_t CICR_LSECSSC = 0x200; // LSE Clock security system interrupt clear

    static constexpr uint32_t IOPRSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IOPRSTR_IOPARST = 0x1; // I/O port A reset
    static constexpr uint32_t IOPRSTR_IOPBRST = 0x2; // I/O port B reset
    static constexpr uint32_t IOPRSTR_IOPCRST = 0x4; // I/O port C reset
    static constexpr uint32_t IOPRSTR_IOPDRST = 0x8; // I/O port D reset
    static constexpr uint32_t IOPRSTR_IOPFRST = 0x20; // I/O port F reset

    static constexpr uint32_t AHBRSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHBRSTR_DMARST = 0x1; // DMA1 reset
    static constexpr uint32_t AHBRSTR_FLASHRST = 0x100; // FLITF reset
    static constexpr uint32_t AHBRSTR_CRCRST = 0x1000; // CRC reset
    static constexpr uint32_t AHBRSTR_AESRST = 0x10000; // AES hardware accelerator reset
    static constexpr uint32_t AHBRSTR_RNGRST = 0x40000; // Random number generator reset

    static constexpr uint32_t APBRSTR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APBRSTR1_TIM2RST = 0x1; // TIM2 timer reset
    static constexpr uint32_t APBRSTR1_TIM3RST = 0x2; // TIM3 timer reset
    static constexpr uint32_t APBRSTR1_SPI2RST = 0x4000; // SPI2 reset
    static constexpr uint32_t APBRSTR1_USART2RST = 0x20000; // USART2 reset
    static constexpr uint32_t APBRSTR1_LPUART1RST = 0x100000; // LPUART1 reset
    static constexpr uint32_t APBRSTR1_I2C1RST = 0x200000; // I2C1 reset
    static constexpr uint32_t APBRSTR1_I2C2RST = 0x400000; // I2C2 reset
    static constexpr uint32_t APBRSTR1_DBGRST = 0x8000000; // Debug support reset
    static constexpr uint32_t APBRSTR1_PWRRST = 0x10000000; // Power interface reset
    static constexpr uint32_t APBRSTR1_LPTIM2RST = 0x40000000; // Low Power Timer 2 reset
    static constexpr uint32_t APBRSTR1_LPTIM1RST = 0x80000000; // Low Power Timer 1 reset

    static constexpr uint32_t APBRSTR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APBRSTR2_SYSCFGRST = 0x1; // SYSCFG, COMP and VREFBUF reset
    static constexpr uint32_t APBRSTR2_TIM1RST = 0x800; // TIM1 timer reset
    static constexpr uint32_t APBRSTR2_SPI1RST = 0x1000; // SPI1 reset
    static constexpr uint32_t APBRSTR2_USART1RST = 0x4000; // USART1 reset
    static constexpr uint32_t APBRSTR2_TIM14RST = 0x8000; // TIM14 timer reset
    static constexpr uint32_t APBRSTR2_TIM16RST = 0x20000; // TIM16 timer reset
    static constexpr uint32_t APBRSTR2_TIM17RST = 0x40000; // TIM17 timer reset
    static constexpr uint32_t APBRSTR2_ADCRST = 0x100000; // ADC reset

    static constexpr uint32_t IOPENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IOPENR_IOPAEN = 0x1; // I/O port A clock enable
    static constexpr uint32_t IOPENR_IOPBEN = 0x2; // I/O port B clock enable
    static constexpr uint32_t IOPENR_IOPCEN = 0x4; // I/O port C clock enable
    static constexpr uint32_t IOPENR_IOPDEN = 0x8; // I/O port D clock enable
    static constexpr uint32_t IOPENR_IOPFEN = 0x20; // I/O port F clock enable

    static constexpr uint32_t AHBENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHBENR_DMAEN = 0x1; // DMA clock enable
    static constexpr uint32_t AHBENR_FLASHEN = 0x100; // Flash memory interface clock enable
    static constexpr uint32_t AHBENR_CRCEN = 0x1000; // CRC clock enable
    static constexpr uint32_t AHBENR_AESEN = 0x10000; // AES hardware accelerator
    static constexpr uint32_t AHBENR_RNGEN = 0x40000; // Random number generator clock enable

    static constexpr uint32_t APBENR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APBENR1_TIM2EN = 0x1; // TIM2 timer clock enable
    static constexpr uint32_t APBENR1_TIM3EN = 0x2; // TIM3 timer clock enable
    static constexpr uint32_t APBENR1_RTCAPBEN = 0x400; // RTC APB clock enable
    static constexpr uint32_t APBENR1_WWDGEN = 0x800; // WWDG clock enable
    static constexpr uint32_t APBENR1_SPI2EN = 0x4000; // SPI2 clock enable
    static constexpr uint32_t APBENR1_USART2EN = 0x20000; // USART2 clock enable
    static constexpr uint32_t APBENR1_LPUART1EN = 0x100000; // LPUART1 clock enable
    static constexpr uint32_t APBENR1_I2C1EN = 0x200000; // I2C1 clock enable
    static constexpr uint32_t APBENR1_I2C2EN = 0x400000; // I2C2 clock enable
    static constexpr uint32_t APBENR1_DBGEN = 0x8000000; // Debug support clock enable
    static constexpr uint32_t APBENR1_PWREN = 0x10000000; // Power interface clock enable
    static constexpr uint32_t APBENR1_LPTIM2EN = 0x40000000; // LPTIM2 clock enable
    static constexpr uint32_t APBENR1_LPTIM1EN = 0x80000000; // LPTIM1 clock enable

    static constexpr uint32_t APBENR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APBENR2_SYSCFGEN = 0x1; // SYSCFG, COMP and VREFBUF clock enable
    static constexpr uint32_t APBENR2_TIM1EN = 0x800; // TIM1 timer clock enable
    static constexpr uint32_t APBENR2_SPI1EN = 0x1000; // SPI1 clock enable
    static constexpr uint32_t APBENR2_USART1EN = 0x4000; // USART1 clock enable
    static constexpr uint32_t APBENR2_TIM14EN = 0x8000; // TIM14 timer clock enable
    static constexpr uint32_t APBENR2_TIM16EN = 0x20000; // TIM16 timer clock enable
    static constexpr uint32_t APBENR2_TIM17EN = 0x40000; // TIM16 timer clock enable
    static constexpr uint32_t APBENR2_ADCEN = 0x100000; // ADC clock enable

    static constexpr uint32_t IOPSMENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IOPSMENR_IOPASMEN = 0x1; // I/O port A clock enable during Sleep mode
    static constexpr uint32_t IOPSMENR_IOPBSMEN = 0x2; // I/O port B clock enable during Sleep mode
    static constexpr uint32_t IOPSMENR_IOPCSMEN = 0x4; // I/O port C clock enable during Sleep mode
    static constexpr uint32_t IOPSMENR_IOPDSMEN = 0x8; // I/O port D clock enable during Sleep mode
    static constexpr uint32_t IOPSMENR_IOPFSMEN = 0x20; // I/O port F clock enable during Sleep mode

    static constexpr uint32_t AHBSMENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHBSMENR_DMASMEN = 0x1; // DMA clock enable during Sleep mode
    static constexpr uint32_t AHBSMENR_FLASHSMEN = 0x100; // Flash memory interface clock enable during Sleep mode
    static constexpr uint32_t AHBSMENR_SRAMSMEN = 0x200; // SRAM clock enable during Sleep mode
    static constexpr uint32_t AHBSMENR_CRCSMEN = 0x1000; // CRC clock enable during Sleep mode
    static constexpr uint32_t AHBSMENR_AESSMEN = 0x10000; // AES hardware accelerator clock enable during Sleep mode
    static constexpr uint32_t AHBSMENR_RNGSMEN = 0x40000; // Random number generator clock enable during Sleep mode

    static constexpr uint32_t APBSMENR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APBSMENR1_TIM2SMEN = 0x1; // TIM2 timer clock enable during Sleep mode
    static constexpr uint32_t APBSMENR1_TIM3SMEN = 0x2; // TIM3 timer clock enable during Sleep mode
    static constexpr uint32_t APBSMENR1_RTCAPBSMEN = 0x400; // RTC APB clock enable during Sleep mode
    static constexpr uint32_t APBSMENR1_WWDGSMEN = 0x800; // WWDG clock enable during Sleep mode
    static constexpr uint32_t APBSMENR1_SPI2SMEN = 0x4000; // SPI2 clock enable during Sleep mode
    static constexpr uint32_t APBSMENR1_USART2SMEN = 0x20000; // USART2 clock enable during Sleep mode
    static constexpr uint32_t APBSMENR1_LPUART1SMEN = 0x100000; // LPUART1 clock enable during Sleep mode
    static constexpr uint32_t APBSMENR1_I2C1SMEN = 0x200000; // I2C1 clock enable during Sleep mode
    static constexpr uint32_t APBSMENR1_I2C2SMEN = 0x400000; // I2C2 clock enable during Sleep mode
    static constexpr uint32_t APBSMENR1_DBGSMEN = 0x8000000; // Debug support clock enable during Sleep mode
    static constexpr uint32_t APBSMENR1_PWRSMEN = 0x10000000; // Power interface clock enable during Sleep mode
    static constexpr uint32_t APBSMENR1_LPTIM2SMEN = 0x40000000; // Low Power Timer 2 clock enable during Sleep mode
    static constexpr uint32_t APBSMENR1_LPTIM1SMEN = 0x80000000; // Low Power Timer 1 clock enable during Sleep mode

    static constexpr uint32_t APBSMENR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APBSMENR2_SYSCFGSMEN = 0x1; // SYSCFG, COMP and VREFBUF clock enable during Sleep mode
    static constexpr uint32_t APBSMENR2_TIM1SMEN = 0x800; // TIM1 timer clock enable during Sleep mode
    static constexpr uint32_t APBSMENR2_SPI1SMEN = 0x1000; // SPI1 clock enable during Sleep mode
    static constexpr uint32_t APBSMENR2_USART1SMEN = 0x4000; // USART1 clock enable during Sleep mode
    static constexpr uint32_t APBSMENR2_TIM14SMEN = 0x8000; // TIM14 timer clock enable during Sleep mode
    static constexpr uint32_t APBSMENR2_TIM16SMEN = 0x20000; // TIM16 timer clock enable during Sleep mode
    static constexpr uint32_t APBSMENR2_TIM17SMEN = 0x40000; // TIM16 timer clock enable during Sleep mode
    static constexpr uint32_t APBSMENR2_ADCSMEN = 0x100000; // ADC clock enable during Sleep mode

    static constexpr uint32_t CCIPR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> CCIPR_USART1SEL; // USART1 clock source selection
    typedef bit_field_t<10, 0x3> CCIPR_LPUART1SEL; // LPUART1 clock source selection
    typedef bit_field_t<12, 0x3> CCIPR_I2C1SEL; // I2C1 clock source selection
    typedef bit_field_t<14, 0x3> CCIPR_I2S2SEL; // I2S1 clock source selection
    typedef bit_field_t<18, 0x3> CCIPR_LPTIM1SEL; // LPTIM1 clock source selection
    typedef bit_field_t<20, 0x3> CCIPR_LPTIM2SEL; // LPTIM2 clock source selection
    static constexpr uint32_t CCIPR_TIM1SEL = 0x400000; // TIM1 clock source selection
    typedef bit_field_t<26, 0x3> CCIPR_RNGSEL; // RNG clock source selection
    typedef bit_field_t<28, 0x3> CCIPR_RNGDIV; // Division factor of RNG clock divider
    typedef bit_field_t<30, 0x3> CCIPR_ADCSEL; // ADCs clock source selection


    static constexpr uint32_t BDCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BDCR_LSEON = 0x1; // LSE oscillator enable
    static constexpr uint32_t BDCR_LSERDY = 0x2; // LSE oscillator ready
    static constexpr uint32_t BDCR_LSEBYP = 0x4; // LSE oscillator bypass
    typedef bit_field_t<3, 0x3> BDCR_LSEDRV; // LSE oscillator drive capability
    static constexpr uint32_t BDCR_LSECSSON = 0x20; // CSS on LSE enable
    static constexpr uint32_t BDCR_LSECSSD = 0x40; // CSS on LSE failure Detection
    typedef bit_field_t<8, 0x3> BDCR_RTCSEL; // RTC clock source selection
    static constexpr uint32_t BDCR_RTCEN = 0x8000; // RTC clock enable
    static constexpr uint32_t BDCR_BDRST = 0x10000; // RTC domain software reset
    static constexpr uint32_t BDCR_LSCOEN = 0x1000000; // Low-speed clock output (LSCO) enable
    static constexpr uint32_t BDCR_LSCOSEL = 0x2000000; // Low-speed clock output selection

    static constexpr uint32_t CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CSR_LSION = 0x1; // LSI oscillator enable
    static constexpr uint32_t CSR_LSIRDY = 0x2; // LSI oscillator ready
    static constexpr uint32_t CSR_RMVF = 0x800000; // Remove reset flags
    static constexpr uint32_t CSR_OBLRSTF = 0x2000000; // Option byte loader reset flag
    static constexpr uint32_t CSR_PINRSTF = 0x4000000; // Pin reset flag
    static constexpr uint32_t CSR_PWRRSTF = 0x8000000; // BOR or POR/PDR flag
    static constexpr uint32_t CSR_SFTRSTF = 0x10000000; // Software reset flag
    static constexpr uint32_t CSR_IWDGRSTF = 0x20000000; // Independent window watchdog reset flag
    static constexpr uint32_t CSR_WWDGRSTF = 0x40000000; // Window watchdog reset flag
    static constexpr uint32_t CSR_LPWRRSTF = 0x80000000; // Low-power reset flag
};

// RCC: Reset and clock control

struct stm32g070_rcc_t
{
    volatile uint32_t CR; // Clock control register
    volatile uint32_t ICSCR; // Internal clock sources calibration register
    volatile uint32_t CFGR; // Clock configuration register
    volatile uint32_t PLLSYSCFGR; // PLL configuration register
    reserved_t<0x2> _0x10;
    volatile uint32_t CIER; // Clock interrupt enable register
    volatile uint32_t CIFR; // Clock interrupt flag register
    volatile uint32_t CICR; // Clock interrupt clear register
    volatile uint32_t IOPRSTR; // GPIO reset register
    volatile uint32_t AHBRSTR; // AHB peripheral reset register
    volatile uint32_t APBRSTR1; // APB peripheral reset register 1
    volatile uint32_t APBRSTR2; // APB peripheral reset register 2
    volatile uint32_t IOPENR; // GPIO clock enable register
    volatile uint32_t AHBENR; // AHB peripheral clock enable register
    volatile uint32_t APBENR1; // APB peripheral clock enable register 1
    volatile uint32_t APBENR2; // APB peripheral clock enable register 2
    volatile uint32_t IOPSMENR; // GPIO in Sleep mode clock enable register
    volatile uint32_t AHBSMENR; // AHB peripheral clock enable in Sleep mode register
    volatile uint32_t APBSMENR1; // APB peripheral clock enable in Sleep mode register 1
    volatile uint32_t APBSMENR2; // APB peripheral clock enable in Sleep mode register 2
    volatile uint32_t CCIPR; // Peripherals independent clock configuration register
    reserved_t<0x1> _0x58;
    volatile uint32_t BDCR; // RTC domain control register
    volatile uint32_t CSR; // Control/status register

    static constexpr uint32_t CR_RESET_VALUE = 0x63; // Reset value
    static constexpr uint32_t CR_HSION = 0x100; // HSI16 clock enable
    static constexpr uint32_t CR_HSIKERON = 0x200; // HSI16 always enable for peripheral kernels
    static constexpr uint32_t CR_HSIRDY = 0x400; // HSI16 clock ready flag
    typedef bit_field_t<11, 0x7> CR_HSIDIV; // HSI16 clock division factor
    static constexpr uint32_t CR_HSEON = 0x10000; // HSE clock enable
    static constexpr uint32_t CR_HSERDY = 0x20000; // HSE clock ready flag
    static constexpr uint32_t CR_HSEBYP = 0x40000; // HSE crystal oscillator bypass
    static constexpr uint32_t CR_CSSON = 0x80000; // Clock security system enable
    static constexpr uint32_t CR_PLLON = 0x1000000; // PLL enable
    static constexpr uint32_t CR_PLLRDY = 0x2000000; // PLL clock ready flag

    static constexpr uint32_t ICSCR_RESET_VALUE = 0x10000000; // Reset value
    typedef bit_field_t<0, 0xff> ICSCR_HSICAL; // HSI16 clock calibration
    typedef bit_field_t<8, 0x7f> ICSCR_HSITRIM; // HSI16 clock trimming

    static constexpr uint32_t CFGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<28, 0x7> CFGR_MCOPRE; // Microcontroller clock output prescaler
    typedef bit_field_t<24, 0x7> CFGR_MCOSEL; // Microcontroller clock output
    typedef bit_field_t<12, 0x7> CFGR_PPRE; // APB prescaler
    typedef bit_field_t<8, 0xf> CFGR_HPRE; // AHB prescaler
    typedef bit_field_t<3, 0x7> CFGR_SWS; // System clock switch status
    typedef bit_field_t<0, 0x7> CFGR_SW; // System clock switch

    static constexpr uint32_t PLLSYSCFGR_RESET_VALUE = 0x1000; // Reset value
    typedef bit_field_t<0, 0x3> PLLSYSCFGR_PLLSRC; // PLL input clock source
    typedef bit_field_t<4, 0x7> PLLSYSCFGR_PLLM; // Division factor M of the PLL input clock divider
    typedef bit_field_t<8, 0x7f> PLLSYSCFGR_PLLN; // PLL frequency multiplication factor N
    static constexpr uint32_t PLLSYSCFGR_PLLPEN = 0x10000; // PLLPCLK clock output enable
    typedef bit_field_t<17, 0x1f> PLLSYSCFGR_PLLP; // PLL VCO division factor P for PLLPCLK clock output
    static constexpr uint32_t PLLSYSCFGR_PLLQEN = 0x1000000; // PLLQCLK clock output enable
    typedef bit_field_t<25, 0x7> PLLSYSCFGR_PLLQ; // PLL VCO division factor Q for PLLQCLK clock output
    static constexpr uint32_t PLLSYSCFGR_PLLREN = 0x10000000; // PLLRCLK clock output enable
    typedef bit_field_t<29, 0x7> PLLSYSCFGR_PLLR; // PLL VCO division factor R for PLLRCLK clock output


    static constexpr uint32_t CIER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CIER_LSIRDYIE = 0x1; // LSI ready interrupt enable
    static constexpr uint32_t CIER_LSERDYIE = 0x2; // LSE ready interrupt enable
    static constexpr uint32_t CIER_HSIRDYIE = 0x8; // HSI ready interrupt enable
    static constexpr uint32_t CIER_HSERDYIE = 0x10; // HSE ready interrupt enable
    static constexpr uint32_t CIER_PLLSYSRDYIE = 0x20; // PLL ready interrupt enable

    static constexpr uint32_t CIFR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CIFR_LSIRDYF = 0x1; // LSI ready interrupt flag
    static constexpr uint32_t CIFR_LSERDYF = 0x2; // LSE ready interrupt flag
    static constexpr uint32_t CIFR_HSIRDYF = 0x8; // HSI ready interrupt flag
    static constexpr uint32_t CIFR_HSERDYF = 0x10; // HSE ready interrupt flag
    static constexpr uint32_t CIFR_PLLSYSRDYF = 0x20; // PLL ready interrupt flag
    static constexpr uint32_t CIFR_CSSF = 0x100; // Clock security system interrupt flag
    static constexpr uint32_t CIFR_LSECSSF = 0x200; // LSE Clock security system interrupt flag

    static constexpr uint32_t CICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CICR_LSIRDYC = 0x1; // LSI ready interrupt clear
    static constexpr uint32_t CICR_LSERDYC = 0x2; // LSE ready interrupt clear
    static constexpr uint32_t CICR_HSIRDYC = 0x8; // HSI ready interrupt clear
    static constexpr uint32_t CICR_HSERDYC = 0x10; // HSE ready interrupt clear
    static constexpr uint32_t CICR_PLLSYSRDYC = 0x20; // PLL ready interrupt clear
    static constexpr uint32_t CICR_CSSC = 0x100; // Clock security system interrupt clear
    static constexpr uint32_t CICR_LSECSSC = 0x200; // LSE Clock security system interrupt clear

    static constexpr uint32_t IOPRSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IOPRSTR_IOPARST = 0x1; // I/O port A reset
    static constexpr uint32_t IOPRSTR_IOPBRST = 0x2; // I/O port B reset
    static constexpr uint32_t IOPRSTR_IOPCRST = 0x4; // I/O port C reset
    static constexpr uint32_t IOPRSTR_IOPDRST = 0x8; // I/O port D reset
    static constexpr uint32_t IOPRSTR_IOPFRST = 0x20; // I/O port F reset

    static constexpr uint32_t AHBRSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHBRSTR_DMARST = 0x1; // DMA1 reset
    static constexpr uint32_t AHBRSTR_FLASHRST = 0x100; // FLITF reset
    static constexpr uint32_t AHBRSTR_CRCRST = 0x1000; // CRC reset
    static constexpr uint32_t AHBRSTR_AESRST = 0x10000; // AES hardware accelerator reset
    static constexpr uint32_t AHBRSTR_RNGRST = 0x40000; // Random number generator reset

    static constexpr uint32_t APBRSTR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APBRSTR1_TIM2RST = 0x1; // TIM2 timer reset
    static constexpr uint32_t APBRSTR1_TIM3RST = 0x2; // TIM3 timer reset
    static constexpr uint32_t APBRSTR1_TIM6RST = 0x10; // TIM6 timer reset
    static constexpr uint32_t APBRSTR1_TIM7RST = 0x20; // TIM7 timer reset
    static constexpr uint32_t APBRSTR1_SPI2RST = 0x4000; // SPI2 reset
    static constexpr uint32_t APBRSTR1_USART2RST = 0x20000; // USART2 reset
    static constexpr uint32_t APBRSTR1_USART3RST = 0x40000; // USART3 reset
    static constexpr uint32_t APBRSTR1_USART4RST = 0x80000; // USART4 reset
    static constexpr uint32_t APBRSTR1_LPUART1RST = 0x100000; // LPUART1 reset
    static constexpr uint32_t APBRSTR1_I2C1RST = 0x200000; // I2C1 reset
    static constexpr uint32_t APBRSTR1_I2C2RST = 0x400000; // I2C2 reset
    static constexpr uint32_t APBRSTR1_CECRST = 0x1000000; // HDMI CEC reset
    static constexpr uint32_t APBRSTR1_UCPD1RST = 0x2000000; // UCPD1 reset
    static constexpr uint32_t APBRSTR1_UCPD2RST = 0x4000000; // UCPD2 reset
    static constexpr uint32_t APBRSTR1_DBGRST = 0x8000000; // Debug support reset
    static constexpr uint32_t APBRSTR1_PWRRST = 0x10000000; // Power interface reset
    static constexpr uint32_t APBRSTR1_DAC1RST = 0x20000000; // DAC1 interface reset
    static constexpr uint32_t APBRSTR1_LPTIM2RST = 0x40000000; // Low Power Timer 2 reset
    static constexpr uint32_t APBRSTR1_LPTIM1RST = 0x80000000; // Low Power Timer 1 reset

    static constexpr uint32_t APBRSTR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APBRSTR2_SYSCFGRST = 0x1; // SYSCFG, COMP and VREFBUF reset
    static constexpr uint32_t APBRSTR2_TIM1RST = 0x800; // TIM1 timer reset
    static constexpr uint32_t APBRSTR2_SPI1RST = 0x1000; // SPI1 reset
    static constexpr uint32_t APBRSTR2_USART1RST = 0x4000; // USART1 reset
    static constexpr uint32_t APBRSTR2_TIM14RST = 0x8000; // TIM14 timer reset
    static constexpr uint32_t APBRSTR2_TIM15RST = 0x10000; // TIM15 timer reset
    static constexpr uint32_t APBRSTR2_TIM16RST = 0x20000; // TIM16 timer reset
    static constexpr uint32_t APBRSTR2_TIM17RST = 0x40000; // TIM17 timer reset
    static constexpr uint32_t APBRSTR2_ADCRST = 0x100000; // ADC reset

    static constexpr uint32_t IOPENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IOPENR_IOPAEN = 0x1; // I/O port A clock enable
    static constexpr uint32_t IOPENR_IOPBEN = 0x2; // I/O port B clock enable
    static constexpr uint32_t IOPENR_IOPCEN = 0x4; // I/O port C clock enable
    static constexpr uint32_t IOPENR_IOPDEN = 0x8; // I/O port D clock enable
    static constexpr uint32_t IOPENR_IOPFEN = 0x20; // I/O port F clock enable

    static constexpr uint32_t AHBENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHBENR_DMAEN = 0x1; // DMA clock enable
    static constexpr uint32_t AHBENR_FLASHEN = 0x100; // Flash memory interface clock enable
    static constexpr uint32_t AHBENR_CRCEN = 0x1000; // CRC clock enable
    static constexpr uint32_t AHBENR_AESEN = 0x10000; // AES hardware accelerator
    static constexpr uint32_t AHBENR_RNGEN = 0x40000; // Random number generator clock enable

    static constexpr uint32_t APBENR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APBENR1_TIM2EN = 0x1; // TIM2 timer clock enable
    static constexpr uint32_t APBENR1_TIM3EN = 0x2; // TIM3 timer clock enable
    static constexpr uint32_t APBENR1_TIM6EN = 0x10; // TIM6 timer clock enable
    static constexpr uint32_t APBENR1_TIM7EN = 0x20; // TIM7 timer clock enable
    static constexpr uint32_t APBENR1_RTCAPBEN = 0x400; // RTC APB clock enable
    static constexpr uint32_t APBENR1_WWDGEN = 0x800; // WWDG clock enable
    static constexpr uint32_t APBENR1_SPI2EN = 0x4000; // SPI2 clock enable
    static constexpr uint32_t APBENR1_USART2EN = 0x20000; // USART2 clock enable
    static constexpr uint32_t APBENR1_USART3EN = 0x40000; // USART3 clock enable
    static constexpr uint32_t APBENR1_USART4EN = 0x80000; // USART4 clock enable
    static constexpr uint32_t APBENR1_LPUART1EN = 0x100000; // LPUART1 clock enable
    static constexpr uint32_t APBENR1_I2C1EN = 0x200000; // I2C1 clock enable
    static constexpr uint32_t APBENR1_I2C2EN = 0x400000; // I2C2 clock enable
    static constexpr uint32_t APBENR1_CECEN = 0x1000000; // HDMI CEC clock enable
    static constexpr uint32_t APBENR1_UCPD1EN = 0x2000000; // UCPD1 clock enable
    static constexpr uint32_t APBENR1_UCPD2EN = 0x4000000; // UCPD2 clock enable
    static constexpr uint32_t APBENR1_DBGEN = 0x8000000; // Debug support clock enable
    static constexpr uint32_t APBENR1_PWREN = 0x10000000; // Power interface clock enable
    static constexpr uint32_t APBENR1_DAC1EN = 0x20000000; // DAC1 interface clock enable
    static constexpr uint32_t APBENR1_LPTIM2EN = 0x40000000; // LPTIM2 clock enable
    static constexpr uint32_t APBENR1_LPTIM1EN = 0x80000000; // LPTIM1 clock enable

    static constexpr uint32_t APBENR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APBENR2_SYSCFGEN = 0x1; // SYSCFG, COMP and VREFBUF clock enable
    static constexpr uint32_t APBENR2_TIM1EN = 0x800; // TIM1 timer clock enable
    static constexpr uint32_t APBENR2_SPI1EN = 0x1000; // SPI1 clock enable
    static constexpr uint32_t APBENR2_USART1EN = 0x4000; // USART1 clock enable
    static constexpr uint32_t APBENR2_TIM14EN = 0x8000; // TIM14 timer clock enable
    static constexpr uint32_t APBENR2_TIM15EN = 0x10000; // TIM15 timer clock enable
    static constexpr uint32_t APBENR2_TIM16EN = 0x20000; // TIM16 timer clock enable
    static constexpr uint32_t APBENR2_TIM17EN = 0x40000; // TIM16 timer clock enable
    static constexpr uint32_t APBENR2_ADCEN = 0x100000; // ADC clock enable

    static constexpr uint32_t IOPSMENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IOPSMENR_IOPASMEN = 0x1; // I/O port A clock enable during Sleep mode
    static constexpr uint32_t IOPSMENR_IOPBSMEN = 0x2; // I/O port B clock enable during Sleep mode
    static constexpr uint32_t IOPSMENR_IOPCSMEN = 0x4; // I/O port C clock enable during Sleep mode
    static constexpr uint32_t IOPSMENR_IOPDSMEN = 0x8; // I/O port D clock enable during Sleep mode
    static constexpr uint32_t IOPSMENR_IOPFSMEN = 0x20; // I/O port F clock enable during Sleep mode

    static constexpr uint32_t AHBSMENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHBSMENR_DMASMEN = 0x1; // DMA clock enable during Sleep mode
    static constexpr uint32_t AHBSMENR_FLASHSMEN = 0x100; // Flash memory interface clock enable during Sleep mode
    static constexpr uint32_t AHBSMENR_SRAMSMEN = 0x200; // SRAM clock enable during Sleep mode
    static constexpr uint32_t AHBSMENR_CRCSMEN = 0x1000; // CRC clock enable during Sleep mode
    static constexpr uint32_t AHBSMENR_AESSMEN = 0x10000; // AES hardware accelerator clock enable during Sleep mode
    static constexpr uint32_t AHBSMENR_RNGSMEN = 0x40000; // Random number generator clock enable during Sleep mode

    static constexpr uint32_t APBSMENR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APBSMENR1_TIM2SMEN = 0x1; // TIM2 timer clock enable during Sleep mode
    static constexpr uint32_t APBSMENR1_TIM3SMEN = 0x2; // TIM3 timer clock enable during Sleep mode
    static constexpr uint32_t APBSMENR1_TIM6SMEN = 0x10; // TIM6 timer clock enable during Sleep mode
    static constexpr uint32_t APBSMENR1_TIM7SMEN = 0x20; // TIM7 timer clock enable during Sleep mode
    static constexpr uint32_t APBSMENR1_RTCAPBSMEN = 0x400; // RTC APB clock enable during Sleep mode
    static constexpr uint32_t APBSMENR1_WWDGSMEN = 0x800; // WWDG clock enable during Sleep mode
    static constexpr uint32_t APBSMENR1_SPI2SMEN = 0x4000; // SPI2 clock enable during Sleep mode
    static constexpr uint32_t APBSMENR1_USART2SMEN = 0x20000; // USART2 clock enable during Sleep mode
    static constexpr uint32_t APBSMENR1_USART3SMEN = 0x40000; // USART3 clock enable during Sleep mode
    static constexpr uint32_t APBSMENR1_USART4SMEN = 0x80000; // USART4 clock enable during Sleep mode
    static constexpr uint32_t APBSMENR1_LPUART1SMEN = 0x100000; // LPUART1 clock enable during Sleep mode
    static constexpr uint32_t APBSMENR1_I2C1SMEN = 0x200000; // I2C1 clock enable during Sleep mode
    static constexpr uint32_t APBSMENR1_I2C2SMEN = 0x400000; // I2C2 clock enable during Sleep mode
    static constexpr uint32_t APBSMENR1_CECSMEN = 0x1000000; // HDMI CEC clock enable during Sleep mode
    static constexpr uint32_t APBSMENR1_UCPD1SMEN = 0x2000000; // UCPD1 clock enable during Sleep mode
    static constexpr uint32_t APBSMENR1_UCPD2SMEN = 0x4000000; // UCPD2 clock enable during Sleep mode
    static constexpr uint32_t APBSMENR1_DBGSMEN = 0x8000000; // Debug support clock enable during Sleep mode
    static constexpr uint32_t APBSMENR1_PWRSMEN = 0x10000000; // Power interface clock enable during Sleep mode
    static constexpr uint32_t APBSMENR1_DAC1SMEN = 0x20000000; // DAC1 interface clock enable during Sleep mode
    static constexpr uint32_t APBSMENR1_LPTIM2SMEN = 0x40000000; // Low Power Timer 2 clock enable during Sleep mode
    static constexpr uint32_t APBSMENR1_LPTIM1SMEN = 0x80000000; // Low Power Timer 1 clock enable during Sleep mode

    static constexpr uint32_t APBSMENR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APBSMENR2_SYSCFGSMEN = 0x1; // SYSCFG, COMP and VREFBUF clock enable during Sleep mode
    static constexpr uint32_t APBSMENR2_TIM1SMEN = 0x800; // TIM1 timer clock enable during Sleep mode
    static constexpr uint32_t APBSMENR2_SPI1SMEN = 0x1000; // SPI1 clock enable during Sleep mode
    static constexpr uint32_t APBSMENR2_USART1SMEN = 0x4000; // USART1 clock enable during Sleep mode
    static constexpr uint32_t APBSMENR2_TIM14SMEN = 0x8000; // TIM14 timer clock enable during Sleep mode
    static constexpr uint32_t APBSMENR2_TIM15SMEN = 0x10000; // TIM15 timer clock enable during Sleep mode
    static constexpr uint32_t APBSMENR2_TIM16SMEN = 0x20000; // TIM16 timer clock enable during Sleep mode
    static constexpr uint32_t APBSMENR2_TIM17SMEN = 0x40000; // TIM16 timer clock enable during Sleep mode
    static constexpr uint32_t APBSMENR2_ADCSMEN = 0x100000; // ADC clock enable during Sleep mode

    static constexpr uint32_t CCIPR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> CCIPR_USART1SEL; // USART1 clock source selection
    typedef bit_field_t<2, 0x3> CCIPR_USART2SEL; // USART2 clock source selection
    static constexpr uint32_t CCIPR_CECSEL = 0x40; // HDMI CEC clock source selection
    typedef bit_field_t<10, 0x3> CCIPR_LPUART1SEL; // LPUART1 clock source selection
    typedef bit_field_t<12, 0x3> CCIPR_I2C1SEL; // I2C1 clock source selection
    typedef bit_field_t<14, 0x3> CCIPR_I2S2SEL; // I2S1 clock source selection
    typedef bit_field_t<18, 0x3> CCIPR_LPTIM1SEL; // LPTIM1 clock source selection
    typedef bit_field_t<20, 0x3> CCIPR_LPTIM2SEL; // LPTIM2 clock source selection
    static constexpr uint32_t CCIPR_TIM1SEL = 0x400000; // TIM1 clock source selection
    static constexpr uint32_t CCIPR_TIM15SEL = 0x1000000; // TIM15 clock source selection
    typedef bit_field_t<26, 0x3> CCIPR_RNGSEL; // RNG clock source selection
    typedef bit_field_t<28, 0x3> CCIPR_RNGDIV; // Division factor of RNG clock divider
    typedef bit_field_t<30, 0x3> CCIPR_ADCSEL; // ADCs clock source selection


    static constexpr uint32_t BDCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BDCR_LSEON = 0x1; // LSE oscillator enable
    static constexpr uint32_t BDCR_LSERDY = 0x2; // LSE oscillator ready
    static constexpr uint32_t BDCR_LSEBYP = 0x4; // LSE oscillator bypass
    typedef bit_field_t<3, 0x3> BDCR_LSEDRV; // LSE oscillator drive capability
    static constexpr uint32_t BDCR_LSECSSON = 0x20; // CSS on LSE enable
    static constexpr uint32_t BDCR_LSECSSD = 0x40; // CSS on LSE failure Detection
    typedef bit_field_t<8, 0x3> BDCR_RTCSEL; // RTC clock source selection
    static constexpr uint32_t BDCR_RTCEN = 0x8000; // RTC clock enable
    static constexpr uint32_t BDCR_BDRST = 0x10000; // RTC domain software reset
    static constexpr uint32_t BDCR_LSCOEN = 0x1000000; // Low-speed clock output (LSCO) enable
    static constexpr uint32_t BDCR_LSCOSEL = 0x2000000; // Low-speed clock output selection

    static constexpr uint32_t CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CSR_LSION = 0x1; // LSI oscillator enable
    static constexpr uint32_t CSR_LSIRDY = 0x2; // LSI oscillator ready
    static constexpr uint32_t CSR_RMVF = 0x800000; // Remove reset flags
    static constexpr uint32_t CSR_OBLRSTF = 0x2000000; // Option byte loader reset flag
    static constexpr uint32_t CSR_PINRSTF = 0x4000000; // Pin reset flag
    static constexpr uint32_t CSR_PWRRSTF = 0x8000000; // BOR or POR/PDR flag
    static constexpr uint32_t CSR_SFTRSTF = 0x10000000; // Software reset flag
    static constexpr uint32_t CSR_IWDGRSTF = 0x20000000; // Independent window watchdog reset flag
    static constexpr uint32_t CSR_WWDGRSTF = 0x40000000; // Window watchdog reset flag
    static constexpr uint32_t CSR_LPWRRSTF = 0x80000000; // Low-power reset flag
};

template<>
struct peripheral_t<STM32G030, RCC>
{
    using T = stm32g030_rcc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G031, RCC>
{
    using T = stm32g031_rcc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G041, RCC>
{
    using T = stm32g041_rcc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G070, RCC>
{
    using T = stm32g070_rcc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G071, RCC>
{
    using T = stm32g070_rcc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G081, RCC>
{
    using T = stm32g070_rcc_t;
    static T& V;
};

using rcc_t = peripheral_t<svd, RCC>;

template<int INST> struct rcc_traits {};

template<> struct rcc_traits<0>
{
    using rcc = rcc_t;
    static constexpr signal_t MCO = RCC_MCO;
    static constexpr signal_t OSC32_EN = RCC_OSC32_EN;
    static constexpr signal_t OSC_EN = RCC_OSC_EN;
};
