#pragma once

////
//
//      STM32F2 RCC peripherals
//
///

// RCC: Reset and clock control

struct stm32f215_rcc_t
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
    static constexpr uint32_t CFGR_HPRE0 = 0x10; // AHB prescaler
    static constexpr uint32_t CFGR_HPRE1 = 0x20; // AHB prescaler
    static constexpr uint32_t CFGR_HPRE2 = 0x40; // AHB prescaler
    static constexpr uint32_t CFGR_HPRE3 = 0x80; // AHB prescaler
    static constexpr uint32_t CFGR_PPRE10 = 0x400; // APB Low speed prescaler (APB1)
    static constexpr uint32_t CFGR_PPRE11 = 0x800; // APB Low speed prescaler (APB1)
    static constexpr uint32_t CFGR_PPRE12 = 0x1000; // APB Low speed prescaler (APB1)
    static constexpr uint32_t CFGR_PPRE20 = 0x2000; // APB high-speed prescaler (APB2)
    static constexpr uint32_t CFGR_PPRE21 = 0x4000; // APB high-speed prescaler (APB2)
    static constexpr uint32_t CFGR_PPRE22 = 0x8000; // APB high-speed prescaler (APB2)
    static constexpr uint32_t CFGR_RTCPRE0 = 0x10000; // HSE division factor for RTC clock
    static constexpr uint32_t CFGR_RTCPRE1 = 0x20000; // HSE division factor for RTC clock
    static constexpr uint32_t CFGR_RTCPRE2 = 0x40000; // HSE division factor for RTC clock
    static constexpr uint32_t CFGR_RTCPRE3 = 0x80000; // HSE division factor for RTC clock
    static constexpr uint32_t CFGR_RTCPRE4 = 0x100000; // HSE division factor for RTC clock
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
    static constexpr uint32_t APB2RSTR_ADC1RST = 0x100; // ADC interface reset (common to all ADCs)
    static constexpr uint32_t APB2RSTR_USART6RST = 0x20; // USART6 reset
    static constexpr uint32_t APB2RSTR_USART1RST = 0x10; // USART1 reset
    static constexpr uint32_t APB2RSTR_TIM8RST = 0x2; // TIM8 reset
    static constexpr uint32_t APB2RSTR_TIM1RST = 0x1; // TIM1 reset


    static constexpr uint32_t AHB1ENR_RESET_VALUE = 0x0; // Reset value
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
    static constexpr uint32_t AHB2LPENR_HASHLPEN = 0x20; // Hash modules clock enable during Sleep mode
    static constexpr uint32_t AHB2LPENR_CRYPLPEN = 0x10; // Cryptography modules clock enable during Sleep mode
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
    static constexpr uint32_t PLLI2SCFGR_PLLI2SN0 = 0x40; // PLLI2S multiplication factor for VCO
    static constexpr uint32_t PLLI2SCFGR_PLLI2SN1 = 0x80; // PLLI2S multiplication factor for VCO
    static constexpr uint32_t PLLI2SCFGR_PLLI2SN2 = 0x100; // PLLI2S multiplication factor for VCO
    static constexpr uint32_t PLLI2SCFGR_PLLI2SN3 = 0x200; // PLLI2S multiplication factor for VCO
    static constexpr uint32_t PLLI2SCFGR_PLLI2SN4 = 0x400; // PLLI2S multiplication factor for VCO
    static constexpr uint32_t PLLI2SCFGR_PLLI2SN5 = 0x800; // PLLI2S multiplication factor for VCO
    static constexpr uint32_t PLLI2SCFGR_PLLI2SN6 = 0x1000; // PLLI2S multiplication factor for VCO
    static constexpr uint32_t PLLI2SCFGR_PLLI2SN7 = 0x2000; // PLLI2S multiplication factor for VCO
    static constexpr uint32_t PLLI2SCFGR_PLLI2SN8 = 0x4000; // PLLI2S multiplication factor for VCO
    static constexpr uint32_t PLLI2SCFGR_PLLI2SR0 = 0x10000000; // PLLI2S division factor for I2S clocks
    static constexpr uint32_t PLLI2SCFGR_PLLI2SR1 = 0x20000000; // PLLI2S division factor for I2S clocks
    static constexpr uint32_t PLLI2SCFGR_PLLI2SR2 = 0x40000000; // PLLI2S division factor for I2S clocks
};

template<>
struct peripheral_t<STM32F215, RCC>
{
    static constexpr periph_t P = RCC;
    using T = stm32f215_rcc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F217, RCC>
{
    static constexpr periph_t P = RCC;
    using T = stm32f215_rcc_t;
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
