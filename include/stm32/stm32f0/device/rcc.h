#pragma once

////
//
//      STM32F0 RCC peripherals
//
////

////
//
//      Reset and clock control
//
////

struct stm32f0x0_rcc_t
{
    volatile uint32_t CR;       // Clock control register
    volatile uint32_t CFGR;     // Clock configuration register (RCC_CFGR)
    volatile uint32_t CIR;      // Clock interrupt register (RCC_CIR)
    volatile uint32_t APB2RSTR; // [read-write] APB2 peripheral reset register (RCC_APB2RSTR)
    volatile uint32_t APB1RSTR; // [read-write] APB1 peripheral reset register (RCC_APB1RSTR)
    volatile uint32_t AHBENR;   // [read-write] AHB Peripheral Clock enable register (RCC_AHBENR)
    volatile uint32_t APB2ENR;  // [read-write] APB2 peripheral clock enable register (RCC_APB2ENR)
    volatile uint32_t APB1ENR;  // [read-write] APB1 peripheral clock enable register (RCC_APB1ENR)
    volatile uint32_t BDCR;     // Backup domain control register (RCC_BDCR)
    volatile uint32_t CSR;      // Control/status register (RCC_CSR)
    volatile uint32_t AHBRSTR;  // [read-write] AHB peripheral reset register
    volatile uint32_t CFGR2;    // [read-write] Clock configuration register 2
    volatile uint32_t CFGR3;    // [read-write] Clock configuration register 3
    volatile uint32_t CR2;      // Clock control register 2

    static constexpr uint32_t CR_RESET_VALUE = 0x83;
    static constexpr uint32_t CR_HSION = 0x1;        // Internal High Speed clock enable
    static constexpr uint32_t CR_HSIRDY = 0x2;       // Internal High Speed clock ready flag
    template<uint32_t X>
    static constexpr uint32_t CR_HSITRIM =           // Internal High Speed clock trimming
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CR_HSICAL =            // Internal High Speed clock Calibration
        bit_field_t<8, 0xff>::value<X>();
    static constexpr uint32_t CR_HSEON = 0x10000;    // External High Speed clock enable
    static constexpr uint32_t CR_HSERDY = 0x20000;   // External High Speed clock ready flag
    static constexpr uint32_t CR_HSEBYP = 0x40000;   // External High Speed clock Bypass
    static constexpr uint32_t CR_CSSON = 0x80000;    // Clock Security System enable
    static constexpr uint32_t CR_PLLON = 0x1000000;  // PLL enable
    static constexpr uint32_t CR_PLLRDY = 0x2000000; // PLL clock ready flag

    static constexpr uint32_t CFGR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CFGR_SW =                   // System clock Switch
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFGR_SWS =                  // System Clock Switch Status
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFGR_HPRE =                 // AHB prescaler
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFGR_PPRE =                 // APB Low speed prescaler (APB1)
        bit_field_t<8, 0x7>::value<X>();
    static constexpr uint32_t CFGR_ADCPRE = 0x4000;       // ADC prescaler
    template<uint32_t X>
    static constexpr uint32_t CFGR_PLLSRC =               // PLL input clock source
        bit_field_t<15, 0x3>::value<X>();
    static constexpr uint32_t CFGR_PLLXTPRE = 0x20000;    // HSE divider for PLL entry
    template<uint32_t X>
    static constexpr uint32_t CFGR_PLLMUL =               // PLL Multiplication Factor
        bit_field_t<18, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFGR_MCO =                  // Microcontroller clock output
        bit_field_t<24, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFGR_MCOPRE =               // Microcontroller Clock Output Prescaler
        bit_field_t<28, 0x7>::value<X>();
    static constexpr uint32_t CFGR_PLLNODIV = 0x80000000; // PLL clock not divided for MCO

    static constexpr uint32_t CIR_RESET_VALUE = 0x0;
    static constexpr uint32_t CIR_LSIRDYF = 0x1;        // LSI Ready Interrupt flag
    static constexpr uint32_t CIR_LSERDYF = 0x2;        // LSE Ready Interrupt flag
    static constexpr uint32_t CIR_HSIRDYF = 0x4;        // HSI Ready Interrupt flag
    static constexpr uint32_t CIR_HSERDYF = 0x8;        // HSE Ready Interrupt flag
    static constexpr uint32_t CIR_PLLRDYF = 0x10;       // PLL Ready Interrupt flag
    static constexpr uint32_t CIR_HSI14RDYF = 0x20;     // HSI14 ready interrupt flag
    static constexpr uint32_t CIR_HSI48RDYF = 0x40;     // HSI48 ready interrupt flag
    static constexpr uint32_t CIR_CSSF = 0x80;          // Clock Security System Interrupt flag
    static constexpr uint32_t CIR_LSIRDYIE = 0x100;     // LSI Ready Interrupt Enable
    static constexpr uint32_t CIR_LSERDYIE = 0x200;     // LSE Ready Interrupt Enable
    static constexpr uint32_t CIR_HSIRDYIE = 0x400;     // HSI Ready Interrupt Enable
    static constexpr uint32_t CIR_HSERDYIE = 0x800;     // HSE Ready Interrupt Enable
    static constexpr uint32_t CIR_PLLRDYIE = 0x1000;    // PLL Ready Interrupt Enable
    static constexpr uint32_t CIR_HSI14RDYE = 0x2000;   // HSI14 ready interrupt enable
    static constexpr uint32_t CIR_HSI48RDYIE = 0x4000;  // HSI48 ready interrupt enable
    static constexpr uint32_t CIR_LSIRDYC = 0x10000;    // LSI Ready Interrupt Clear
    static constexpr uint32_t CIR_LSERDYC = 0x20000;    // LSE Ready Interrupt Clear
    static constexpr uint32_t CIR_HSIRDYC = 0x40000;    // HSI Ready Interrupt Clear
    static constexpr uint32_t CIR_HSERDYC = 0x80000;    // HSE Ready Interrupt Clear
    static constexpr uint32_t CIR_PLLRDYC = 0x100000;   // PLL Ready Interrupt Clear
    static constexpr uint32_t CIR_HSI14RDYC = 0x200000; // HSI 14 MHz Ready Interrupt Clear
    static constexpr uint32_t CIR_HSI48RDYC = 0x400000; // HSI48 Ready Interrupt Clear
    static constexpr uint32_t CIR_CSSC = 0x800000;      // Clock security system interrupt clear

    static constexpr uint32_t APB2RSTR_RESET_VALUE = 0x0;
    static constexpr uint32_t APB2RSTR_SYSCFGRST = 0x1;      // SYSCFG and COMP reset
    static constexpr uint32_t APB2RSTR_ADCRST = 0x200;       // ADC interface reset
    static constexpr uint32_t APB2RSTR_TIM1RST = 0x800;      // TIM1 timer reset
    static constexpr uint32_t APB2RSTR_SPI1RST = 0x1000;     // SPI 1 reset
    static constexpr uint32_t APB2RSTR_USART1RST = 0x4000;   // USART1 reset
    static constexpr uint32_t APB2RSTR_TIM15RST = 0x10000;   // TIM15 timer reset
    static constexpr uint32_t APB2RSTR_TIM16RST = 0x20000;   // TIM16 timer reset
    static constexpr uint32_t APB2RSTR_TIM17RST = 0x40000;   // TIM17 timer reset
    static constexpr uint32_t APB2RSTR_DBGMCURST = 0x400000; // Debug MCU reset

    static constexpr uint32_t APB1RSTR_RESET_VALUE = 0x0;
    static constexpr uint32_t APB1RSTR_TIM3RST = 0x2;        // Timer 3 reset
    static constexpr uint32_t APB1RSTR_TIM6RST = 0x10;       // Timer 6 reset
    static constexpr uint32_t APB1RSTR_TIM7RST = 0x20;       // TIM7 timer reset
    static constexpr uint32_t APB1RSTR_TIM14RST = 0x100;     // Timer 14 reset
    static constexpr uint32_t APB1RSTR_WWDGRST = 0x800;      // Window watchdog reset
    static constexpr uint32_t APB1RSTR_SPI2RST = 0x4000;     // SPI2 reset
    static constexpr uint32_t APB1RSTR_USART2RST = 0x20000;  // USART 2 reset
    static constexpr uint32_t APB1RSTR_USART3RST = 0x40000;  // USART3 reset
    static constexpr uint32_t APB1RSTR_USART4RST = 0x80000;  // USART4 reset
    static constexpr uint32_t APB1RSTR_USART5RST = 0x100000; // USART5 reset
    static constexpr uint32_t APB1RSTR_I2C1RST = 0x200000;   // I2C1 reset
    static constexpr uint32_t APB1RSTR_I2C2RST = 0x400000;   // I2C2 reset
    static constexpr uint32_t APB1RSTR_USBRST = 0x800000;    // USB interface reset
    static constexpr uint32_t APB1RSTR_PWRRST = 0x10000000;  // Power interface reset

    static constexpr uint32_t AHBENR_RESET_VALUE = 0x14;
    static constexpr uint32_t AHBENR_DMA1EN = 0x1;      // DMA1 clock enable
    static constexpr uint32_t AHBENR_SRAMEN = 0x4;      // SRAM interface clock enable
    static constexpr uint32_t AHBENR_FLITFEN = 0x10;    // FLITF clock enable
    static constexpr uint32_t AHBENR_CRCEN = 0x40;      // CRC clock enable
    static constexpr uint32_t AHBENR_IOPAEN = 0x20000;  // I/O port A clock enable
    static constexpr uint32_t AHBENR_IOPBEN = 0x40000;  // I/O port B clock enable
    static constexpr uint32_t AHBENR_IOPCEN = 0x80000;  // I/O port C clock enable
    static constexpr uint32_t AHBENR_IOPFEN = 0x400000; // I/O port F clock enable

    static constexpr uint32_t APB2ENR_RESET_VALUE = 0x0;
    static constexpr uint32_t APB2ENR_SYSCFGEN = 0x1;      // SYSCFG clock enable
    static constexpr uint32_t APB2ENR_ADCEN = 0x200;       // ADC 1 interface clock enable
    static constexpr uint32_t APB2ENR_TIM1EN = 0x800;      // TIM1 Timer clock enable
    static constexpr uint32_t APB2ENR_SPI1EN = 0x1000;     // SPI 1 clock enable
    static constexpr uint32_t APB2ENR_USART1EN = 0x4000;   // USART1 clock enable
    static constexpr uint32_t APB2ENR_TIM15EN = 0x10000;   // TIM15 timer clock enable
    static constexpr uint32_t APB2ENR_TIM16EN = 0x20000;   // TIM16 timer clock enable
    static constexpr uint32_t APB2ENR_TIM17EN = 0x40000;   // TIM17 timer clock enable
    static constexpr uint32_t APB2ENR_DBGMCUEN = 0x400000; // MCU debug module clock enable

    static constexpr uint32_t APB1ENR_RESET_VALUE = 0x0;
    static constexpr uint32_t APB1ENR_TIM3EN = 0x2;        // Timer 3 clock enable
    static constexpr uint32_t APB1ENR_TIM6EN = 0x10;       // Timer 6 clock enable
    static constexpr uint32_t APB1ENR_TIM7EN = 0x20;       // TIM7 timer clock enable
    static constexpr uint32_t APB1ENR_TIM14EN = 0x100;     // Timer 14 clock enable
    static constexpr uint32_t APB1ENR_WWDGEN = 0x800;      // Window watchdog clock enable
    static constexpr uint32_t APB1ENR_SPI2EN = 0x4000;     // SPI 2 clock enable
    static constexpr uint32_t APB1ENR_USART2EN = 0x20000;  // USART 2 clock enable
    static constexpr uint32_t APB1ENR_USART3EN = 0x40000;  // USART3 clock enable
    static constexpr uint32_t APB1ENR_USART4EN = 0x80000;  // USART4 clock enable
    static constexpr uint32_t APB1ENR_USART5EN = 0x100000; // USART5 clock enable
    static constexpr uint32_t APB1ENR_I2C1EN = 0x200000;   // I2C 1 clock enable
    static constexpr uint32_t APB1ENR_I2C2EN = 0x400000;   // I2C 2 clock enable
    static constexpr uint32_t APB1ENR_USBRST = 0x800000;   // USB interface clock enable
    static constexpr uint32_t APB1ENR_PWREN = 0x10000000;  // Power interface clock enable

    static constexpr uint32_t BDCR_RESET_VALUE = 0x0;
    static constexpr uint32_t BDCR_LSEON = 0x1;     // External Low Speed oscillator enable
    static constexpr uint32_t BDCR_LSERDY = 0x2;    // External Low Speed oscillator ready
    static constexpr uint32_t BDCR_LSEBYP = 0x4;    // External Low Speed oscillator bypass
    template<uint32_t X>
    static constexpr uint32_t BDCR_LSEDRV =         // LSE oscillator drive capability
        bit_field_t<3, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BDCR_RTCSEL =         // RTC clock source selection
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t BDCR_RTCEN = 0x8000;  // RTC clock enable
    static constexpr uint32_t BDCR_BDRST = 0x10000; // Backup domain software reset

    static constexpr uint32_t CSR_RESET_VALUE = 0xc000000;
    static constexpr uint32_t CSR_LSION = 0x1;           // Internal low speed oscillator enable
    static constexpr uint32_t CSR_LSIRDY = 0x2;          // Internal low speed oscillator ready
    static constexpr uint32_t CSR_RMVF = 0x1000000;      // Remove reset flag
    static constexpr uint32_t CSR_OBLRSTF = 0x2000000;   // Option byte loader reset flag
    static constexpr uint32_t CSR_PINRSTF = 0x4000000;   // PIN reset flag
    static constexpr uint32_t CSR_PORRSTF = 0x8000000;   // POR/PDR reset flag
    static constexpr uint32_t CSR_SFTRSTF = 0x10000000;  // Software reset flag
    static constexpr uint32_t CSR_IWDGRSTF = 0x20000000; // Independent watchdog reset flag
    static constexpr uint32_t CSR_WWDGRSTF = 0x40000000; // Window watchdog reset flag
    static constexpr uint32_t CSR_LPWRRSTF = 0x80000000; // Low-power reset flag

    static constexpr uint32_t AHBRSTR_RESET_VALUE = 0x0;
    static constexpr uint32_t AHBRSTR_IOPARST = 0x20000;  // I/O port A reset
    static constexpr uint32_t AHBRSTR_IOPBRST = 0x40000;  // I/O port B reset
    static constexpr uint32_t AHBRSTR_IOPCRST = 0x80000;  // I/O port C reset
    static constexpr uint32_t AHBRSTR_IOPDRST = 0x100000; // I/O port D reset
    static constexpr uint32_t AHBRSTR_IOPFRST = 0x400000; // I/O port F reset

    static constexpr uint32_t CFGR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CFGR2_PREDIV =   // PREDIV division factor
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t CFGR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CFGR3_USART1SW =     // USART1 clock source selection
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t CFGR3_I2C1SW = 0x10; // I2C1 clock source selection
    static constexpr uint32_t CFGR3_CECSW = 0x40;  // HDMI CEC clock source selection
    static constexpr uint32_t CFGR3_USBSW = 0x80;  // USB clock source selection
    static constexpr uint32_t CFGR3_ADCSW = 0x100; // ADC clock source selection
    template<uint32_t X>
    static constexpr uint32_t CFGR3_USART2SW =     // USART2 clock source selection
        bit_field_t<16, 0x3>::value<X>();

    static constexpr uint32_t CR2_RESET_VALUE = 0x80;
    static constexpr uint32_t CR2_HSI14ON = 0x1;        // HSI14 clock enable
    static constexpr uint32_t CR2_HSI14RDY = 0x2;       // HR14 clock ready flag
    static constexpr uint32_t CR2_HSI14DIS = 0x4;       // HSI14 clock request from ADC disable
    template<uint32_t X>
    static constexpr uint32_t CR2_HSI14TRIM =           // HSI14 clock trimming
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CR2_HSI14CAL =            // HSI14 clock calibration
        bit_field_t<8, 0xff>::value<X>();
    static constexpr uint32_t CR2_HSI48ON = 0x10000;    // HSI48 clock enable
    static constexpr uint32_t CR2_HSI48RDY = 0x20000;   // HSI48 clock ready flag
    static constexpr uint32_t CR2_HSI48CAL = 0x1000000; // HSI48 factory clock calibration
};


////
//
//      Reset and clock control
//
////

struct stm32f0x1_rcc_t
{
    volatile uint32_t CR;       // Clock control register
    volatile uint32_t CFGR;     // Clock configuration register (RCC_CFGR)
    volatile uint32_t CIR;      // Clock interrupt register (RCC_CIR)
    volatile uint32_t APB2RSTR; // [read-write] APB2 peripheral reset register (RCC_APB2RSTR)
    volatile uint32_t APB1RSTR; // [read-write] APB1 peripheral reset register (RCC_APB1RSTR)
    volatile uint32_t AHBENR;   // [read-write] AHB Peripheral Clock enable register (RCC_AHBENR)
    volatile uint32_t APB2ENR;  // [read-write] APB2 peripheral clock enable register (RCC_APB2ENR)
    volatile uint32_t APB1ENR;  // [read-write] APB1 peripheral clock enable register (RCC_APB1ENR)
    volatile uint32_t BDCR;     // Backup domain control register (RCC_BDCR)
    volatile uint32_t CSR;      // Control/status register (RCC_CSR)
    volatile uint32_t AHBRSTR;  // [read-write] AHB peripheral reset register
    volatile uint32_t CFGR2;    // [read-write] Clock configuration register 2
    volatile uint32_t CFGR3;    // [read-write] Clock configuration register 3
    volatile uint32_t CR2;      // Clock control register 2

    static constexpr uint32_t CR_RESET_VALUE = 0x83;
    static constexpr uint32_t CR_HSION = 0x1;        // Internal High Speed clock enable
    static constexpr uint32_t CR_HSIRDY = 0x2;       // Internal High Speed clock ready flag
    template<uint32_t X>
    static constexpr uint32_t CR_HSITRIM =           // Internal High Speed clock trimming
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CR_HSICAL =            // Internal High Speed clock Calibration
        bit_field_t<8, 0xff>::value<X>();
    static constexpr uint32_t CR_HSEON = 0x10000;    // External High Speed clock enable
    static constexpr uint32_t CR_HSERDY = 0x20000;   // External High Speed clock ready flag
    static constexpr uint32_t CR_HSEBYP = 0x40000;   // External High Speed clock Bypass
    static constexpr uint32_t CR_CSSON = 0x80000;    // Clock Security System enable
    static constexpr uint32_t CR_PLLON = 0x1000000;  // PLL enable
    static constexpr uint32_t CR_PLLRDY = 0x2000000; // PLL clock ready flag

    static constexpr uint32_t CFGR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CFGR_SW =                   // System clock Switch
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFGR_SWS =                  // System Clock Switch Status
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFGR_HPRE =                 // AHB prescaler
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFGR_PPRE =                 // APB Low speed prescaler (APB1)
        bit_field_t<8, 0x7>::value<X>();
    static constexpr uint32_t CFGR_ADCPRE = 0x4000;       // ADC prescaler
    template<uint32_t X>
    static constexpr uint32_t CFGR_PLLSRC =               // PLL input clock source
        bit_field_t<15, 0x3>::value<X>();
    static constexpr uint32_t CFGR_PLLXTPRE = 0x20000;    // HSE divider for PLL entry
    template<uint32_t X>
    static constexpr uint32_t CFGR_PLLMUL =               // PLL Multiplication Factor
        bit_field_t<18, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFGR_MCO =                  // Microcontroller clock output
        bit_field_t<24, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFGR_MCOPRE =               // Microcontroller Clock Output Prescaler
        bit_field_t<28, 0x7>::value<X>();
    static constexpr uint32_t CFGR_PLLNODIV = 0x80000000; // PLL clock not divided for MCO

    static constexpr uint32_t CIR_RESET_VALUE = 0x0;
    static constexpr uint32_t CIR_LSIRDYF = 0x1;        // LSI Ready Interrupt flag
    static constexpr uint32_t CIR_LSERDYF = 0x2;        // LSE Ready Interrupt flag
    static constexpr uint32_t CIR_HSIRDYF = 0x4;        // HSI Ready Interrupt flag
    static constexpr uint32_t CIR_HSERDYF = 0x8;        // HSE Ready Interrupt flag
    static constexpr uint32_t CIR_PLLRDYF = 0x10;       // PLL Ready Interrupt flag
    static constexpr uint32_t CIR_HSI14RDYF = 0x20;     // HSI14 ready interrupt flag
    static constexpr uint32_t CIR_HSI48RDYF = 0x40;     // HSI48 ready interrupt flag
    static constexpr uint32_t CIR_CSSF = 0x80;          // Clock Security System Interrupt flag
    static constexpr uint32_t CIR_LSIRDYIE = 0x100;     // LSI Ready Interrupt Enable
    static constexpr uint32_t CIR_LSERDYIE = 0x200;     // LSE Ready Interrupt Enable
    static constexpr uint32_t CIR_HSIRDYIE = 0x400;     // HSI Ready Interrupt Enable
    static constexpr uint32_t CIR_HSERDYIE = 0x800;     // HSE Ready Interrupt Enable
    static constexpr uint32_t CIR_PLLRDYIE = 0x1000;    // PLL Ready Interrupt Enable
    static constexpr uint32_t CIR_HSI14RDYE = 0x2000;   // HSI14 ready interrupt enable
    static constexpr uint32_t CIR_HSI48RDYIE = 0x4000;  // HSI48 ready interrupt enable
    static constexpr uint32_t CIR_LSIRDYC = 0x10000;    // LSI Ready Interrupt Clear
    static constexpr uint32_t CIR_LSERDYC = 0x20000;    // LSE Ready Interrupt Clear
    static constexpr uint32_t CIR_HSIRDYC = 0x40000;    // HSI Ready Interrupt Clear
    static constexpr uint32_t CIR_HSERDYC = 0x80000;    // HSE Ready Interrupt Clear
    static constexpr uint32_t CIR_PLLRDYC = 0x100000;   // PLL Ready Interrupt Clear
    static constexpr uint32_t CIR_HSI14RDYC = 0x200000; // HSI 14 MHz Ready Interrupt Clear
    static constexpr uint32_t CIR_HSI48RDYC = 0x400000; // HSI48 Ready Interrupt Clear
    static constexpr uint32_t CIR_CSSC = 0x800000;      // Clock security system interrupt clear

    static constexpr uint32_t APB2RSTR_RESET_VALUE = 0x0;
    static constexpr uint32_t APB2RSTR_SYSCFGRST = 0x1;      // SYSCFG and COMP reset
    static constexpr uint32_t APB2RSTR_ADCRST = 0x200;       // ADC interface reset
    static constexpr uint32_t APB2RSTR_TIM1RST = 0x800;      // TIM1 timer reset
    static constexpr uint32_t APB2RSTR_SPI1RST = 0x1000;     // SPI 1 reset
    static constexpr uint32_t APB2RSTR_USART1RST = 0x4000;   // USART1 reset
    static constexpr uint32_t APB2RSTR_TIM15RST = 0x10000;   // TIM15 timer reset
    static constexpr uint32_t APB2RSTR_TIM16RST = 0x20000;   // TIM16 timer reset
    static constexpr uint32_t APB2RSTR_TIM17RST = 0x40000;   // TIM17 timer reset
    static constexpr uint32_t APB2RSTR_DBGMCURST = 0x400000; // Debug MCU reset

    static constexpr uint32_t APB1RSTR_RESET_VALUE = 0x0;
    static constexpr uint32_t APB1RSTR_TIM2RST = 0x1;        // Timer 2 reset
    static constexpr uint32_t APB1RSTR_TIM3RST = 0x2;        // Timer 3 reset
    static constexpr uint32_t APB1RSTR_TIM6RST = 0x10;       // Timer 6 reset
    static constexpr uint32_t APB1RSTR_TIM7RST = 0x20;       // TIM7 timer reset
    static constexpr uint32_t APB1RSTR_TIM14RST = 0x100;     // Timer 14 reset
    static constexpr uint32_t APB1RSTR_WWDGRST = 0x800;      // Window watchdog reset
    static constexpr uint32_t APB1RSTR_SPI2RST = 0x4000;     // SPI2 reset
    static constexpr uint32_t APB1RSTR_USART2RST = 0x20000;  // USART 2 reset
    static constexpr uint32_t APB1RSTR_USART3RST = 0x40000;  // USART3 reset
    static constexpr uint32_t APB1RSTR_USART4RST = 0x80000;  // USART4 reset
    static constexpr uint32_t APB1RSTR_USART5RST = 0x100000; // USART5 reset
    static constexpr uint32_t APB1RSTR_I2C1RST = 0x200000;   // I2C1 reset
    static constexpr uint32_t APB1RSTR_I2C2RST = 0x400000;   // I2C2 reset
    static constexpr uint32_t APB1RSTR_USBRST = 0x800000;    // USB interface reset
    static constexpr uint32_t APB1RSTR_CANRST = 0x2000000;   // CAN interface reset
    static constexpr uint32_t APB1RSTR_CRSRST = 0x8000000;   // Clock Recovery System interface reset
    static constexpr uint32_t APB1RSTR_PWRRST = 0x10000000;  // Power interface reset
    static constexpr uint32_t APB1RSTR_DACRST = 0x20000000;  // DAC interface reset
    static constexpr uint32_t APB1RSTR_CECRST = 0x40000000;  // HDMI CEC reset

    static constexpr uint32_t AHBENR_RESET_VALUE = 0x14;
    static constexpr uint32_t AHBENR_DMA1EN = 0x1;      // DMA1 clock enable
    static constexpr uint32_t AHBENR_DMA2EN = 0x2;      // DMA2 clock enable
    static constexpr uint32_t AHBENR_SRAMEN = 0x4;      // SRAM interface clock enable
    static constexpr uint32_t AHBENR_FLITFEN = 0x10;    // FLITF clock enable
    static constexpr uint32_t AHBENR_CRCEN = 0x40;      // CRC clock enable
    static constexpr uint32_t AHBENR_IOPAEN = 0x20000;  // I/O port A clock enable
    static constexpr uint32_t AHBENR_IOPBEN = 0x40000;  // I/O port B clock enable
    static constexpr uint32_t AHBENR_IOPCEN = 0x80000;  // I/O port C clock enable
    static constexpr uint32_t AHBENR_IOPDEN = 0x100000; // I/O port D clock enable
    static constexpr uint32_t AHBENR_IOPFEN = 0x400000; // I/O port F clock enable
    static constexpr uint32_t AHBENR_TSCEN = 0x1000000; // Touch sensing controller clock enable

    static constexpr uint32_t APB2ENR_RESET_VALUE = 0x0;
    static constexpr uint32_t APB2ENR_SYSCFGEN = 0x1;      // SYSCFG clock enable
    static constexpr uint32_t APB2ENR_ADCEN = 0x200;       // ADC 1 interface clock enable
    static constexpr uint32_t APB2ENR_TIM1EN = 0x800;      // TIM1 Timer clock enable
    static constexpr uint32_t APB2ENR_SPI1EN = 0x1000;     // SPI 1 clock enable
    static constexpr uint32_t APB2ENR_USART1EN = 0x4000;   // USART1 clock enable
    static constexpr uint32_t APB2ENR_TIM15EN = 0x10000;   // TIM15 timer clock enable
    static constexpr uint32_t APB2ENR_TIM16EN = 0x20000;   // TIM16 timer clock enable
    static constexpr uint32_t APB2ENR_TIM17EN = 0x40000;   // TIM17 timer clock enable
    static constexpr uint32_t APB2ENR_DBGMCUEN = 0x400000; // MCU debug module clock enable
    static constexpr uint32_t APB2ENR_USART8EN = 0x80;     // USART8 clock enable
    static constexpr uint32_t APB2ENR_USART7EN = 0x40;     // USART7 clock enable
    static constexpr uint32_t APB2ENR_USART6EN = 0x20;     // USART6 clock enable

    static constexpr uint32_t APB1ENR_RESET_VALUE = 0x0;
    static constexpr uint32_t APB1ENR_TIM2EN = 0x1;        // Timer 2 clock enable
    static constexpr uint32_t APB1ENR_TIM3EN = 0x2;        // Timer 3 clock enable
    static constexpr uint32_t APB1ENR_TIM6EN = 0x10;       // Timer 6 clock enable
    static constexpr uint32_t APB1ENR_TIM7EN = 0x20;       // TIM7 timer clock enable
    static constexpr uint32_t APB1ENR_TIM14EN = 0x100;     // Timer 14 clock enable
    static constexpr uint32_t APB1ENR_WWDGEN = 0x800;      // Window watchdog clock enable
    static constexpr uint32_t APB1ENR_SPI2EN = 0x4000;     // SPI 2 clock enable
    static constexpr uint32_t APB1ENR_USART2EN = 0x20000;  // USART 2 clock enable
    static constexpr uint32_t APB1ENR_USART3EN = 0x40000;  // USART3 clock enable
    static constexpr uint32_t APB1ENR_USART4EN = 0x80000;  // USART4 clock enable
    static constexpr uint32_t APB1ENR_USART5EN = 0x100000; // USART5 clock enable
    static constexpr uint32_t APB1ENR_I2C1EN = 0x200000;   // I2C 1 clock enable
    static constexpr uint32_t APB1ENR_I2C2EN = 0x400000;   // I2C 2 clock enable
    static constexpr uint32_t APB1ENR_USBRST = 0x800000;   // USB interface clock enable
    static constexpr uint32_t APB1ENR_CANEN = 0x2000000;   // CAN interface clock enable
    static constexpr uint32_t APB1ENR_CRSEN = 0x8000000;   // Clock Recovery System interface clock enable
    static constexpr uint32_t APB1ENR_PWREN = 0x10000000;  // Power interface clock enable
    static constexpr uint32_t APB1ENR_DACEN = 0x20000000;  // DAC interface clock enable
    static constexpr uint32_t APB1ENR_CECEN = 0x40000000;  // HDMI CEC interface clock enable

    static constexpr uint32_t BDCR_RESET_VALUE = 0x0;
    static constexpr uint32_t BDCR_LSEON = 0x1;     // External Low Speed oscillator enable
    static constexpr uint32_t BDCR_LSERDY = 0x2;    // External Low Speed oscillator ready
    static constexpr uint32_t BDCR_LSEBYP = 0x4;    // External Low Speed oscillator bypass
    template<uint32_t X>
    static constexpr uint32_t BDCR_LSEDRV =         // LSE oscillator drive capability
        bit_field_t<3, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BDCR_RTCSEL =         // RTC clock source selection
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t BDCR_RTCEN = 0x8000;  // RTC clock enable
    static constexpr uint32_t BDCR_BDRST = 0x10000; // Backup domain software reset

    static constexpr uint32_t CSR_RESET_VALUE = 0xc000000;
    static constexpr uint32_t CSR_LSION = 0x1;           // Internal low speed oscillator enable
    static constexpr uint32_t CSR_LSIRDY = 0x2;          // Internal low speed oscillator ready
    static constexpr uint32_t CSR_RMVF = 0x1000000;      // Remove reset flag
    static constexpr uint32_t CSR_OBLRSTF = 0x2000000;   // Option byte loader reset flag
    static constexpr uint32_t CSR_PINRSTF = 0x4000000;   // PIN reset flag
    static constexpr uint32_t CSR_PORRSTF = 0x8000000;   // POR/PDR reset flag
    static constexpr uint32_t CSR_SFTRSTF = 0x10000000;  // Software reset flag
    static constexpr uint32_t CSR_IWDGRSTF = 0x20000000; // Independent watchdog reset flag
    static constexpr uint32_t CSR_WWDGRSTF = 0x40000000; // Window watchdog reset flag
    static constexpr uint32_t CSR_LPWRRSTF = 0x80000000; // Low-power reset flag

    static constexpr uint32_t AHBRSTR_RESET_VALUE = 0x0;
    static constexpr uint32_t AHBRSTR_IOPARST = 0x20000;  // I/O port A reset
    static constexpr uint32_t AHBRSTR_IOPBRST = 0x40000;  // I/O port B reset
    static constexpr uint32_t AHBRSTR_IOPCRST = 0x80000;  // I/O port C reset
    static constexpr uint32_t AHBRSTR_IOPDRST = 0x100000; // I/O port D reset
    static constexpr uint32_t AHBRSTR_IOPFRST = 0x400000; // I/O port F reset
    static constexpr uint32_t AHBRSTR_TSCRST = 0x1000000; // Touch sensing controller reset

    static constexpr uint32_t CFGR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CFGR2_PREDIV =   // PREDIV division factor
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t CFGR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CFGR3_USART1SW =     // USART1 clock source selection
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t CFGR3_I2C1SW = 0x10; // I2C1 clock source selection
    static constexpr uint32_t CFGR3_CECSW = 0x40;  // HDMI CEC clock source selection
    static constexpr uint32_t CFGR3_USBSW = 0x80;  // USB clock source selection
    static constexpr uint32_t CFGR3_ADCSW = 0x100; // ADC clock source selection
    template<uint32_t X>
    static constexpr uint32_t CFGR3_USART2SW =     // USART2 clock source selection
        bit_field_t<16, 0x3>::value<X>();

    static constexpr uint32_t CR2_RESET_VALUE = 0x80;
    static constexpr uint32_t CR2_HSI14ON = 0x1;        // HSI14 clock enable
    static constexpr uint32_t CR2_HSI14RDY = 0x2;       // HR14 clock ready flag
    static constexpr uint32_t CR2_HSI14DIS = 0x4;       // HSI14 clock request from ADC disable
    template<uint32_t X>
    static constexpr uint32_t CR2_HSI14TRIM =           // HSI14 clock trimming
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CR2_HSI14CAL =            // HSI14 clock calibration
        bit_field_t<8, 0xff>::value<X>();
    static constexpr uint32_t CR2_HSI48ON = 0x10000;    // HSI48 clock enable
    static constexpr uint32_t CR2_HSI48RDY = 0x20000;   // HSI48 clock ready flag
    static constexpr uint32_t CR2_HSI48CAL = 0x1000000; // HSI48 factory clock calibration
};


////
//
//      Reset and clock control
//
////

struct stm32f0x2_rcc_t
{
    volatile uint32_t CR;       // Clock control register
    volatile uint32_t CFGR;     // Clock configuration register (RCC_CFGR)
    volatile uint32_t CIR;      // Clock interrupt register (RCC_CIR)
    volatile uint32_t APB2RSTR; // [read-write] APB2 peripheral reset register (RCC_APB2RSTR)
    volatile uint32_t APB1RSTR; // [read-write] APB1 peripheral reset register (RCC_APB1RSTR)
    volatile uint32_t AHBENR;   // [read-write] AHB Peripheral Clock enable register (RCC_AHBENR)
    volatile uint32_t APB2ENR;  // [read-write] APB2 peripheral clock enable register (RCC_APB2ENR)
    volatile uint32_t APB1ENR;  // [read-write] APB1 peripheral clock enable register (RCC_APB1ENR)
    volatile uint32_t BDCR;     // Backup domain control register (RCC_BDCR)
    volatile uint32_t CSR;      // Control/status register (RCC_CSR)
    volatile uint32_t AHBRSTR;  // [read-write] AHB peripheral reset register
    volatile uint32_t CFGR2;    // [read-write] Clock configuration register 2
    volatile uint32_t CFGR3;    // [read-write] Clock configuration register 3
    volatile uint32_t CR2;      // Clock control register 2

    static constexpr uint32_t CR_RESET_VALUE = 0x83;
    static constexpr uint32_t CR_HSION = 0x1;        // Internal High Speed clock enable
    static constexpr uint32_t CR_HSIRDY = 0x2;       // Internal High Speed clock ready flag
    template<uint32_t X>
    static constexpr uint32_t CR_HSITRIM =           // Internal High Speed clock trimming
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CR_HSICAL =            // Internal High Speed clock Calibration
        bit_field_t<8, 0xff>::value<X>();
    static constexpr uint32_t CR_HSEON = 0x10000;    // External High Speed clock enable
    static constexpr uint32_t CR_HSERDY = 0x20000;   // External High Speed clock ready flag
    static constexpr uint32_t CR_HSEBYP = 0x40000;   // External High Speed clock Bypass
    static constexpr uint32_t CR_CSSON = 0x80000;    // Clock Security System enable
    static constexpr uint32_t CR_PLLON = 0x1000000;  // PLL enable
    static constexpr uint32_t CR_PLLRDY = 0x2000000; // PLL clock ready flag

    static constexpr uint32_t CFGR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CFGR_SW =                   // System clock Switch
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFGR_SWS =                  // System Clock Switch Status
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFGR_HPRE =                 // AHB prescaler
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFGR_PPRE =                 // APB Low speed prescaler (APB1)
        bit_field_t<8, 0x7>::value<X>();
    static constexpr uint32_t CFGR_ADCPRE = 0x4000;       // ADC prescaler
    template<uint32_t X>
    static constexpr uint32_t CFGR_PLLSRC =               // PLL input clock source
        bit_field_t<15, 0x3>::value<X>();
    static constexpr uint32_t CFGR_PLLXTPRE = 0x20000;    // HSE divider for PLL entry
    template<uint32_t X>
    static constexpr uint32_t CFGR_PLLMUL =               // PLL Multiplication Factor
        bit_field_t<18, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFGR_MCO =                  // Microcontroller clock output
        bit_field_t<24, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFGR_MCOPRE =               // Microcontroller Clock Output Prescaler
        bit_field_t<28, 0x7>::value<X>();
    static constexpr uint32_t CFGR_PLLNODIV = 0x80000000; // PLL clock not divided for MCO

    static constexpr uint32_t CIR_RESET_VALUE = 0x0;
    static constexpr uint32_t CIR_LSIRDYF = 0x1;        // LSI Ready Interrupt flag
    static constexpr uint32_t CIR_LSERDYF = 0x2;        // LSE Ready Interrupt flag
    static constexpr uint32_t CIR_HSIRDYF = 0x4;        // HSI Ready Interrupt flag
    static constexpr uint32_t CIR_HSERDYF = 0x8;        // HSE Ready Interrupt flag
    static constexpr uint32_t CIR_PLLRDYF = 0x10;       // PLL Ready Interrupt flag
    static constexpr uint32_t CIR_HSI14RDYF = 0x20;     // HSI14 ready interrupt flag
    static constexpr uint32_t CIR_HSI48RDYF = 0x40;     // HSI48 ready interrupt flag
    static constexpr uint32_t CIR_CSSF = 0x80;          // Clock Security System Interrupt flag
    static constexpr uint32_t CIR_LSIRDYIE = 0x100;     // LSI Ready Interrupt Enable
    static constexpr uint32_t CIR_LSERDYIE = 0x200;     // LSE Ready Interrupt Enable
    static constexpr uint32_t CIR_HSIRDYIE = 0x400;     // HSI Ready Interrupt Enable
    static constexpr uint32_t CIR_HSERDYIE = 0x800;     // HSE Ready Interrupt Enable
    static constexpr uint32_t CIR_PLLRDYIE = 0x1000;    // PLL Ready Interrupt Enable
    static constexpr uint32_t CIR_HSI14RDYE = 0x2000;   // HSI14 ready interrupt enable
    static constexpr uint32_t CIR_HSI48RDYIE = 0x4000;  // HSI48 ready interrupt enable
    static constexpr uint32_t CIR_LSIRDYC = 0x10000;    // LSI Ready Interrupt Clear
    static constexpr uint32_t CIR_LSERDYC = 0x20000;    // LSE Ready Interrupt Clear
    static constexpr uint32_t CIR_HSIRDYC = 0x40000;    // HSI Ready Interrupt Clear
    static constexpr uint32_t CIR_HSERDYC = 0x80000;    // HSE Ready Interrupt Clear
    static constexpr uint32_t CIR_PLLRDYC = 0x100000;   // PLL Ready Interrupt Clear
    static constexpr uint32_t CIR_HSI14RDYC = 0x200000; // HSI 14 MHz Ready Interrupt Clear
    static constexpr uint32_t CIR_HSI48RDYC = 0x400000; // HSI48 Ready Interrupt Clear
    static constexpr uint32_t CIR_CSSC = 0x800000;      // Clock security system interrupt clear

    static constexpr uint32_t APB2RSTR_RESET_VALUE = 0x0;
    static constexpr uint32_t APB2RSTR_SYSCFGRST = 0x1;      // SYSCFG and COMP reset
    static constexpr uint32_t APB2RSTR_ADCRST = 0x200;       // ADC interface reset
    static constexpr uint32_t APB2RSTR_TIM1RST = 0x800;      // TIM1 timer reset
    static constexpr uint32_t APB2RSTR_SPI1RST = 0x1000;     // SPI 1 reset
    static constexpr uint32_t APB2RSTR_USART1RST = 0x4000;   // USART1 reset
    static constexpr uint32_t APB2RSTR_TIM15RST = 0x10000;   // TIM15 timer reset
    static constexpr uint32_t APB2RSTR_TIM16RST = 0x20000;   // TIM16 timer reset
    static constexpr uint32_t APB2RSTR_TIM17RST = 0x40000;   // TIM17 timer reset
    static constexpr uint32_t APB2RSTR_DBGMCURST = 0x400000; // Debug MCU reset

    static constexpr uint32_t APB1RSTR_RESET_VALUE = 0x0;
    static constexpr uint32_t APB1RSTR_TIM2RST = 0x1;       // Timer 2 reset
    static constexpr uint32_t APB1RSTR_TIM3RST = 0x2;       // Timer 3 reset
    static constexpr uint32_t APB1RSTR_TIM6RST = 0x10;      // Timer 6 reset
    static constexpr uint32_t APB1RSTR_TIM7RST = 0x20;      // TIM7 timer reset
    static constexpr uint32_t APB1RSTR_TIM14RST = 0x100;    // Timer 14 reset
    static constexpr uint32_t APB1RSTR_WWDGRST = 0x800;     // Window watchdog reset
    static constexpr uint32_t APB1RSTR_SPI2RST = 0x4000;    // SPI2 reset
    static constexpr uint32_t APB1RSTR_USART2RST = 0x20000; // USART 2 reset
    static constexpr uint32_t APB1RSTR_USART3RST = 0x40000; // USART3 reset
    static constexpr uint32_t APB1RSTR_USART4RST = 0x80000; // USART4 reset
    static constexpr uint32_t APB1RSTR_I2C1RST = 0x200000;  // I2C1 reset
    static constexpr uint32_t APB1RSTR_I2C2RST = 0x400000;  // I2C2 reset
    static constexpr uint32_t APB1RSTR_USBRST = 0x800000;   // USB interface reset
    static constexpr uint32_t APB1RSTR_CANRST = 0x2000000;  // CAN interface reset
    static constexpr uint32_t APB1RSTR_CRSRST = 0x8000000;  // Clock Recovery System interface reset
    static constexpr uint32_t APB1RSTR_PWRRST = 0x10000000; // Power interface reset
    static constexpr uint32_t APB1RSTR_DACRST = 0x20000000; // DAC interface reset
    static constexpr uint32_t APB1RSTR_CECRST = 0x40000000; // HDMI CEC reset

    static constexpr uint32_t AHBENR_RESET_VALUE = 0x14;
    static constexpr uint32_t AHBENR_DMA1EN = 0x1;      // DMA1 clock enable
    static constexpr uint32_t AHBENR_SRAMEN = 0x4;      // SRAM interface clock enable
    static constexpr uint32_t AHBENR_FLITFEN = 0x10;    // FLITF clock enable
    static constexpr uint32_t AHBENR_CRCEN = 0x40;      // CRC clock enable
    static constexpr uint32_t AHBENR_IOPAEN = 0x20000;  // I/O port A clock enable
    static constexpr uint32_t AHBENR_IOPBEN = 0x40000;  // I/O port B clock enable
    static constexpr uint32_t AHBENR_IOPCEN = 0x80000;  // I/O port C clock enable
    static constexpr uint32_t AHBENR_IOPDEN = 0x100000; // I/O port D clock enable
    static constexpr uint32_t AHBENR_IOPFEN = 0x400000; // I/O port F clock enable
    static constexpr uint32_t AHBENR_TSCEN = 0x1000000; // Touch sensing controller clock enable

    static constexpr uint32_t APB2ENR_RESET_VALUE = 0x0;
    static constexpr uint32_t APB2ENR_SYSCFGEN = 0x1;      // SYSCFG clock enable
    static constexpr uint32_t APB2ENR_ADCEN = 0x200;       // ADC 1 interface clock enable
    static constexpr uint32_t APB2ENR_TIM1EN = 0x800;      // TIM1 Timer clock enable
    static constexpr uint32_t APB2ENR_SPI1EN = 0x1000;     // SPI 1 clock enable
    static constexpr uint32_t APB2ENR_USART1EN = 0x4000;   // USART1 clock enable
    static constexpr uint32_t APB2ENR_TIM15EN = 0x10000;   // TIM15 timer clock enable
    static constexpr uint32_t APB2ENR_TIM16EN = 0x20000;   // TIM16 timer clock enable
    static constexpr uint32_t APB2ENR_TIM17EN = 0x40000;   // TIM17 timer clock enable
    static constexpr uint32_t APB2ENR_DBGMCUEN = 0x400000; // MCU debug module clock enable

    static constexpr uint32_t APB1ENR_RESET_VALUE = 0x0;
    static constexpr uint32_t APB1ENR_TIM2EN = 0x1;       // Timer 2 clock enable
    static constexpr uint32_t APB1ENR_TIM3EN = 0x2;       // Timer 3 clock enable
    static constexpr uint32_t APB1ENR_TIM6EN = 0x10;      // Timer 6 clock enable
    static constexpr uint32_t APB1ENR_TIM7EN = 0x20;      // TIM7 timer clock enable
    static constexpr uint32_t APB1ENR_TIM14EN = 0x100;    // Timer 14 clock enable
    static constexpr uint32_t APB1ENR_WWDGEN = 0x800;     // Window watchdog clock enable
    static constexpr uint32_t APB1ENR_SPI2EN = 0x4000;    // SPI 2 clock enable
    static constexpr uint32_t APB1ENR_USART2EN = 0x20000; // USART 2 clock enable
    static constexpr uint32_t APB1ENR_USART3EN = 0x40000; // USART3 clock enable
    static constexpr uint32_t APB1ENR_USART4EN = 0x80000; // USART4 clock enable
    static constexpr uint32_t APB1ENR_I2C1EN = 0x200000;  // I2C 1 clock enable
    static constexpr uint32_t APB1ENR_I2C2EN = 0x400000;  // I2C 2 clock enable
    static constexpr uint32_t APB1ENR_USBRST = 0x800000;  // USB interface clock enable
    static constexpr uint32_t APB1ENR_CANEN = 0x2000000;  // CAN interface clock enable
    static constexpr uint32_t APB1ENR_CRSEN = 0x8000000;  // Clock Recovery System interface clock enable
    static constexpr uint32_t APB1ENR_PWREN = 0x10000000; // Power interface clock enable
    static constexpr uint32_t APB1ENR_DACEN = 0x20000000; // DAC interface clock enable
    static constexpr uint32_t APB1ENR_CECEN = 0x40000000; // HDMI CEC interface clock enable

    static constexpr uint32_t BDCR_RESET_VALUE = 0x0;
    static constexpr uint32_t BDCR_LSEON = 0x1;     // External Low Speed oscillator enable
    static constexpr uint32_t BDCR_LSERDY = 0x2;    // External Low Speed oscillator ready
    static constexpr uint32_t BDCR_LSEBYP = 0x4;    // External Low Speed oscillator bypass
    template<uint32_t X>
    static constexpr uint32_t BDCR_LSEDRV =         // LSE oscillator drive capability
        bit_field_t<3, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BDCR_RTCSEL =         // RTC clock source selection
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t BDCR_RTCEN = 0x8000;  // RTC clock enable
    static constexpr uint32_t BDCR_BDRST = 0x10000; // Backup domain software reset

    static constexpr uint32_t CSR_RESET_VALUE = 0xc000000;
    static constexpr uint32_t CSR_LSION = 0x1;           // Internal low speed oscillator enable
    static constexpr uint32_t CSR_LSIRDY = 0x2;          // Internal low speed oscillator ready
    static constexpr uint32_t CSR_RMVF = 0x1000000;      // Remove reset flag
    static constexpr uint32_t CSR_OBLRSTF = 0x2000000;   // Option byte loader reset flag
    static constexpr uint32_t CSR_PINRSTF = 0x4000000;   // PIN reset flag
    static constexpr uint32_t CSR_PORRSTF = 0x8000000;   // POR/PDR reset flag
    static constexpr uint32_t CSR_SFTRSTF = 0x10000000;  // Software reset flag
    static constexpr uint32_t CSR_IWDGRSTF = 0x20000000; // Independent watchdog reset flag
    static constexpr uint32_t CSR_WWDGRSTF = 0x40000000; // Window watchdog reset flag
    static constexpr uint32_t CSR_LPWRRSTF = 0x80000000; // Low-power reset flag

    static constexpr uint32_t AHBRSTR_RESET_VALUE = 0x0;
    static constexpr uint32_t AHBRSTR_IOPARST = 0x20000;  // I/O port A reset
    static constexpr uint32_t AHBRSTR_IOPBRST = 0x40000;  // I/O port B reset
    static constexpr uint32_t AHBRSTR_IOPCRST = 0x80000;  // I/O port C reset
    static constexpr uint32_t AHBRSTR_IOPDRST = 0x100000; // I/O port D reset
    static constexpr uint32_t AHBRSTR_IOPFRST = 0x400000; // I/O port F reset
    static constexpr uint32_t AHBRSTR_TSCRST = 0x1000000; // Touch sensing controller reset

    static constexpr uint32_t CFGR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CFGR2_PREDIV =   // PREDIV division factor
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t CFGR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CFGR3_USART1SW =     // USART1 clock source selection
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t CFGR3_I2C1SW = 0x10; // I2C1 clock source selection
    static constexpr uint32_t CFGR3_CECSW = 0x40;  // HDMI CEC clock source selection
    static constexpr uint32_t CFGR3_USBSW = 0x80;  // USB clock source selection
    static constexpr uint32_t CFGR3_ADCSW = 0x100; // ADC clock source selection
    template<uint32_t X>
    static constexpr uint32_t CFGR3_USART2SW =     // USART2 clock source selection
        bit_field_t<16, 0x3>::value<X>();

    static constexpr uint32_t CR2_RESET_VALUE = 0x80;
    static constexpr uint32_t CR2_HSI14ON = 0x1;        // HSI14 clock enable
    static constexpr uint32_t CR2_HSI14RDY = 0x2;       // HR14 clock ready flag
    static constexpr uint32_t CR2_HSI14DIS = 0x4;       // HSI14 clock request from ADC disable
    template<uint32_t X>
    static constexpr uint32_t CR2_HSI14TRIM =           // HSI14 clock trimming
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CR2_HSI14CAL =            // HSI14 clock calibration
        bit_field_t<8, 0xff>::value<X>();
    static constexpr uint32_t CR2_HSI48ON = 0x10000;    // HSI48 clock enable
    static constexpr uint32_t CR2_HSI48RDY = 0x20000;   // HSI48 clock ready flag
    static constexpr uint32_t CR2_HSI48CAL = 0x1000000; // HSI48 factory clock calibration
};


////
//
//      Reset and clock control
//
////

struct stm32f0x8_rcc_t
{
    volatile uint32_t CR;       // Clock control register
    volatile uint32_t CFGR;     // Clock configuration register (RCC_CFGR)
    volatile uint32_t CIR;      // Clock interrupt register (RCC_CIR)
    volatile uint32_t APB2RSTR; // [read-write] APB2 peripheral reset register (RCC_APB2RSTR)
    volatile uint32_t APB1RSTR; // [read-write] APB1 peripheral reset register (RCC_APB1RSTR)
    volatile uint32_t AHBENR;   // [read-write] AHB Peripheral Clock enable register (RCC_AHBENR)
    volatile uint32_t APB2ENR;  // [read-write] APB2 peripheral clock enable register (RCC_APB2ENR)
    volatile uint32_t APB1ENR;  // [read-write] APB1 peripheral clock enable register (RCC_APB1ENR)
    volatile uint32_t BDCR;     // Backup domain control register (RCC_BDCR)
    volatile uint32_t CSR;      // Control/status register (RCC_CSR)
    volatile uint32_t AHBRSTR;  // [read-write] AHB peripheral reset register
    volatile uint32_t CFGR2;    // [read-write] Clock configuration register 2
    volatile uint32_t CFGR3;    // [read-write] Clock configuration register 3
    volatile uint32_t CR2;      // Clock control register 2

    static constexpr uint32_t CR_RESET_VALUE = 0x83;
    static constexpr uint32_t CR_HSION = 0x1;        // Internal High Speed clock enable
    static constexpr uint32_t CR_HSIRDY = 0x2;       // Internal High Speed clock ready flag
    template<uint32_t X>
    static constexpr uint32_t CR_HSITRIM =           // Internal High Speed clock trimming
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CR_HSICAL =            // Internal High Speed clock Calibration
        bit_field_t<8, 0xff>::value<X>();
    static constexpr uint32_t CR_HSEON = 0x10000;    // External High Speed clock enable
    static constexpr uint32_t CR_HSERDY = 0x20000;   // External High Speed clock ready flag
    static constexpr uint32_t CR_HSEBYP = 0x40000;   // External High Speed clock Bypass
    static constexpr uint32_t CR_CSSON = 0x80000;    // Clock Security System enable
    static constexpr uint32_t CR_PLLON = 0x1000000;  // PLL enable
    static constexpr uint32_t CR_PLLRDY = 0x2000000; // PLL clock ready flag

    static constexpr uint32_t CFGR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CFGR_SW =                   // System clock Switch
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFGR_SWS =                  // System Clock Switch Status
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFGR_HPRE =                 // AHB prescaler
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFGR_PPRE =                 // APB Low speed prescaler (APB1)
        bit_field_t<8, 0x7>::value<X>();
    static constexpr uint32_t CFGR_ADCPRE = 0x4000;       // ADC prescaler
    template<uint32_t X>
    static constexpr uint32_t CFGR_PLLSRC =               // PLL input clock source
        bit_field_t<15, 0x3>::value<X>();
    static constexpr uint32_t CFGR_PLLXTPRE = 0x20000;    // HSE divider for PLL entry
    template<uint32_t X>
    static constexpr uint32_t CFGR_PLLMUL =               // PLL Multiplication Factor
        bit_field_t<18, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFGR_MCO =                  // Microcontroller clock output
        bit_field_t<24, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFGR_MCOPRE =               // Microcontroller Clock Output Prescaler
        bit_field_t<28, 0x7>::value<X>();
    static constexpr uint32_t CFGR_PLLNODIV = 0x80000000; // PLL clock not divided for MCO

    static constexpr uint32_t CIR_RESET_VALUE = 0x0;
    static constexpr uint32_t CIR_LSIRDYF = 0x1;        // LSI Ready Interrupt flag
    static constexpr uint32_t CIR_LSERDYF = 0x2;        // LSE Ready Interrupt flag
    static constexpr uint32_t CIR_HSIRDYF = 0x4;        // HSI Ready Interrupt flag
    static constexpr uint32_t CIR_HSERDYF = 0x8;        // HSE Ready Interrupt flag
    static constexpr uint32_t CIR_PLLRDYF = 0x10;       // PLL Ready Interrupt flag
    static constexpr uint32_t CIR_HSI14RDYF = 0x20;     // HSI14 ready interrupt flag
    static constexpr uint32_t CIR_HSI48RDYF = 0x40;     // HSI48 ready interrupt flag
    static constexpr uint32_t CIR_CSSF = 0x80;          // Clock Security System Interrupt flag
    static constexpr uint32_t CIR_LSIRDYIE = 0x100;     // LSI Ready Interrupt Enable
    static constexpr uint32_t CIR_LSERDYIE = 0x200;     // LSE Ready Interrupt Enable
    static constexpr uint32_t CIR_HSIRDYIE = 0x400;     // HSI Ready Interrupt Enable
    static constexpr uint32_t CIR_HSERDYIE = 0x800;     // HSE Ready Interrupt Enable
    static constexpr uint32_t CIR_PLLRDYIE = 0x1000;    // PLL Ready Interrupt Enable
    static constexpr uint32_t CIR_HSI14RDYE = 0x2000;   // HSI14 ready interrupt enable
    static constexpr uint32_t CIR_HSI48RDYIE = 0x4000;  // HSI48 ready interrupt enable
    static constexpr uint32_t CIR_LSIRDYC = 0x10000;    // LSI Ready Interrupt Clear
    static constexpr uint32_t CIR_LSERDYC = 0x20000;    // LSE Ready Interrupt Clear
    static constexpr uint32_t CIR_HSIRDYC = 0x40000;    // HSI Ready Interrupt Clear
    static constexpr uint32_t CIR_HSERDYC = 0x80000;    // HSE Ready Interrupt Clear
    static constexpr uint32_t CIR_PLLRDYC = 0x100000;   // PLL Ready Interrupt Clear
    static constexpr uint32_t CIR_HSI14RDYC = 0x200000; // HSI 14 MHz Ready Interrupt Clear
    static constexpr uint32_t CIR_HSI48RDYC = 0x400000; // HSI48 Ready Interrupt Clear
    static constexpr uint32_t CIR_CSSC = 0x800000;      // Clock security system interrupt clear

    static constexpr uint32_t APB2RSTR_RESET_VALUE = 0x0;
    static constexpr uint32_t APB2RSTR_SYSCFGRST = 0x1;      // SYSCFG and COMP reset
    static constexpr uint32_t APB2RSTR_ADCRST = 0x200;       // ADC interface reset
    static constexpr uint32_t APB2RSTR_TIM1RST = 0x800;      // TIM1 timer reset
    static constexpr uint32_t APB2RSTR_SPI1RST = 0x1000;     // SPI 1 reset
    static constexpr uint32_t APB2RSTR_USART1RST = 0x4000;   // USART1 reset
    static constexpr uint32_t APB2RSTR_TIM15RST = 0x10000;   // TIM15 timer reset
    static constexpr uint32_t APB2RSTR_TIM16RST = 0x20000;   // TIM16 timer reset
    static constexpr uint32_t APB2RSTR_TIM17RST = 0x40000;   // TIM17 timer reset
    static constexpr uint32_t APB2RSTR_DBGMCURST = 0x400000; // Debug MCU reset

    static constexpr uint32_t APB1RSTR_RESET_VALUE = 0x0;
    static constexpr uint32_t APB1RSTR_TIM2RST = 0x1;        // Timer 2 reset
    static constexpr uint32_t APB1RSTR_TIM3RST = 0x2;        // Timer 3 reset
    static constexpr uint32_t APB1RSTR_TIM6RST = 0x10;       // Timer 6 reset
    static constexpr uint32_t APB1RSTR_TIM7RST = 0x20;       // TIM7 timer reset
    static constexpr uint32_t APB1RSTR_TIM14RST = 0x100;     // Timer 14 reset
    static constexpr uint32_t APB1RSTR_WWDGRST = 0x800;      // Window watchdog reset
    static constexpr uint32_t APB1RSTR_SPI2RST = 0x4000;     // SPI2 reset
    static constexpr uint32_t APB1RSTR_USART2RST = 0x20000;  // USART 2 reset
    static constexpr uint32_t APB1RSTR_USART3RST = 0x40000;  // USART3 reset
    static constexpr uint32_t APB1RSTR_USART4RST = 0x80000;  // USART4 reset
    static constexpr uint32_t APB1RSTR_USART5RST = 0x100000; // USART5 reset
    static constexpr uint32_t APB1RSTR_I2C1RST = 0x200000;   // I2C1 reset
    static constexpr uint32_t APB1RSTR_I2C2RST = 0x400000;   // I2C2 reset
    static constexpr uint32_t APB1RSTR_USBRST = 0x800000;    // USB interface reset
    static constexpr uint32_t APB1RSTR_CANRST = 0x2000000;   // CAN interface reset
    static constexpr uint32_t APB1RSTR_CRSRST = 0x8000000;   // Clock Recovery System interface reset
    static constexpr uint32_t APB1RSTR_PWRRST = 0x10000000;  // Power interface reset
    static constexpr uint32_t APB1RSTR_DACRST = 0x20000000;  // DAC interface reset
    static constexpr uint32_t APB1RSTR_CECRST = 0x40000000;  // HDMI CEC reset

    static constexpr uint32_t AHBENR_RESET_VALUE = 0x14;
    static constexpr uint32_t AHBENR_DMA1EN = 0x1;      // DMA1 clock enable
    static constexpr uint32_t AHBENR_DMA2EN = 0x2;      // DMA2 clock enable
    static constexpr uint32_t AHBENR_SRAMEN = 0x4;      // SRAM interface clock enable
    static constexpr uint32_t AHBENR_FLITFEN = 0x10;    // FLITF clock enable
    static constexpr uint32_t AHBENR_CRCEN = 0x40;      // CRC clock enable
    static constexpr uint32_t AHBENR_IOPAEN = 0x20000;  // I/O port A clock enable
    static constexpr uint32_t AHBENR_IOPBEN = 0x40000;  // I/O port B clock enable
    static constexpr uint32_t AHBENR_IOPCEN = 0x80000;  // I/O port C clock enable
    static constexpr uint32_t AHBENR_IOPDEN = 0x100000; // I/O port D clock enable
    static constexpr uint32_t AHBENR_IOPFEN = 0x400000; // I/O port F clock enable
    static constexpr uint32_t AHBENR_TSCEN = 0x1000000; // Touch sensing controller clock enable

    static constexpr uint32_t APB2ENR_RESET_VALUE = 0x0;
    static constexpr uint32_t APB2ENR_SYSCFGEN = 0x1;      // SYSCFG clock enable
    static constexpr uint32_t APB2ENR_ADCEN = 0x200;       // ADC 1 interface clock enable
    static constexpr uint32_t APB2ENR_TIM1EN = 0x800;      // TIM1 Timer clock enable
    static constexpr uint32_t APB2ENR_SPI1EN = 0x1000;     // SPI 1 clock enable
    static constexpr uint32_t APB2ENR_USART1EN = 0x4000;   // USART1 clock enable
    static constexpr uint32_t APB2ENR_TIM15EN = 0x10000;   // TIM15 timer clock enable
    static constexpr uint32_t APB2ENR_TIM16EN = 0x20000;   // TIM16 timer clock enable
    static constexpr uint32_t APB2ENR_TIM17EN = 0x40000;   // TIM17 timer clock enable
    static constexpr uint32_t APB2ENR_DBGMCUEN = 0x400000; // MCU debug module clock enable

    static constexpr uint32_t APB1ENR_RESET_VALUE = 0x0;
    static constexpr uint32_t APB1ENR_TIM2EN = 0x1;        // Timer 2 clock enable
    static constexpr uint32_t APB1ENR_TIM3EN = 0x2;        // Timer 3 clock enable
    static constexpr uint32_t APB1ENR_TIM6EN = 0x10;       // Timer 6 clock enable
    static constexpr uint32_t APB1ENR_TIM7EN = 0x20;       // TIM7 timer clock enable
    static constexpr uint32_t APB1ENR_TIM14EN = 0x100;     // Timer 14 clock enable
    static constexpr uint32_t APB1ENR_WWDGEN = 0x800;      // Window watchdog clock enable
    static constexpr uint32_t APB1ENR_SPI2EN = 0x4000;     // SPI 2 clock enable
    static constexpr uint32_t APB1ENR_USART2EN = 0x20000;  // USART 2 clock enable
    static constexpr uint32_t APB1ENR_USART3EN = 0x40000;  // USART3 clock enable
    static constexpr uint32_t APB1ENR_USART4EN = 0x80000;  // USART4 clock enable
    static constexpr uint32_t APB1ENR_USART5EN = 0x100000; // USART5 clock enable
    static constexpr uint32_t APB1ENR_I2C1EN = 0x200000;   // I2C 1 clock enable
    static constexpr uint32_t APB1ENR_I2C2EN = 0x400000;   // I2C 2 clock enable
    static constexpr uint32_t APB1ENR_USBRST = 0x800000;   // USB interface clock enable
    static constexpr uint32_t APB1ENR_CANEN = 0x2000000;   // CAN interface clock enable
    static constexpr uint32_t APB1ENR_CRSEN = 0x8000000;   // Clock Recovery System interface clock enable
    static constexpr uint32_t APB1ENR_PWREN = 0x10000000;  // Power interface clock enable
    static constexpr uint32_t APB1ENR_DACEN = 0x20000000;  // DAC interface clock enable
    static constexpr uint32_t APB1ENR_CECEN = 0x40000000;  // HDMI CEC interface clock enable

    static constexpr uint32_t BDCR_RESET_VALUE = 0x0;
    static constexpr uint32_t BDCR_LSEON = 0x1;     // External Low Speed oscillator enable
    static constexpr uint32_t BDCR_LSERDY = 0x2;    // External Low Speed oscillator ready
    static constexpr uint32_t BDCR_LSEBYP = 0x4;    // External Low Speed oscillator bypass
    template<uint32_t X>
    static constexpr uint32_t BDCR_LSEDRV =         // LSE oscillator drive capability
        bit_field_t<3, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BDCR_RTCSEL =         // RTC clock source selection
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t BDCR_RTCEN = 0x8000;  // RTC clock enable
    static constexpr uint32_t BDCR_BDRST = 0x10000; // Backup domain software reset

    static constexpr uint32_t CSR_RESET_VALUE = 0xc000000;
    static constexpr uint32_t CSR_LSION = 0x1;           // Internal low speed oscillator enable
    static constexpr uint32_t CSR_LSIRDY = 0x2;          // Internal low speed oscillator ready
    static constexpr uint32_t CSR_RMVF = 0x1000000;      // Remove reset flag
    static constexpr uint32_t CSR_OBLRSTF = 0x2000000;   // Option byte loader reset flag
    static constexpr uint32_t CSR_PINRSTF = 0x4000000;   // PIN reset flag
    static constexpr uint32_t CSR_PORRSTF = 0x8000000;   // POR/PDR reset flag
    static constexpr uint32_t CSR_SFTRSTF = 0x10000000;  // Software reset flag
    static constexpr uint32_t CSR_IWDGRSTF = 0x20000000; // Independent watchdog reset flag
    static constexpr uint32_t CSR_WWDGRSTF = 0x40000000; // Window watchdog reset flag
    static constexpr uint32_t CSR_LPWRRSTF = 0x80000000; // Low-power reset flag

    static constexpr uint32_t AHBRSTR_RESET_VALUE = 0x0;
    static constexpr uint32_t AHBRSTR_IOPARST = 0x20000;  // I/O port A reset
    static constexpr uint32_t AHBRSTR_IOPBRST = 0x40000;  // I/O port B reset
    static constexpr uint32_t AHBRSTR_IOPCRST = 0x80000;  // I/O port C reset
    static constexpr uint32_t AHBRSTR_IOPDRST = 0x100000; // I/O port D reset
    static constexpr uint32_t AHBRSTR_IOPFRST = 0x400000; // I/O port F reset
    static constexpr uint32_t AHBRSTR_TSCRST = 0x1000000; // Touch sensing controller reset

    static constexpr uint32_t CFGR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CFGR2_PREDIV =   // PREDIV division factor
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t CFGR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CFGR3_USART1SW =     // USART1 clock source selection
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t CFGR3_I2C1SW = 0x10; // I2C1 clock source selection
    static constexpr uint32_t CFGR3_CECSW = 0x40;  // HDMI CEC clock source selection
    static constexpr uint32_t CFGR3_USBSW = 0x80;  // USB clock source selection
    static constexpr uint32_t CFGR3_ADCSW = 0x100; // ADC clock source selection
    template<uint32_t X>
    static constexpr uint32_t CFGR3_USART2SW =     // USART2 clock source selection
        bit_field_t<16, 0x3>::value<X>();

    static constexpr uint32_t CR2_RESET_VALUE = 0x80;
    static constexpr uint32_t CR2_HSI14ON = 0x1;        // HSI14 clock enable
    static constexpr uint32_t CR2_HSI14RDY = 0x2;       // HR14 clock ready flag
    static constexpr uint32_t CR2_HSI14DIS = 0x4;       // HSI14 clock request from ADC disable
    template<uint32_t X>
    static constexpr uint32_t CR2_HSI14TRIM =           // HSI14 clock trimming
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CR2_HSI14CAL =            // HSI14 clock calibration
        bit_field_t<8, 0xff>::value<X>();
    static constexpr uint32_t CR2_HSI48ON = 0x10000;    // HSI48 clock enable
    static constexpr uint32_t CR2_HSI48RDY = 0x20000;   // HSI48 clock ready flag
    static constexpr uint32_t CR2_HSI48CAL = 0x1000000; // HSI48 factory clock calibration
};


template<>
struct peripheral_t<STM32F0x0, RCC>
{
    typedef stm32f0x0_rcc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x1, RCC>
{
    typedef stm32f0x1_rcc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x2, RCC>
{
    typedef stm32f0x2_rcc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x8, RCC>
{
    typedef stm32f0x8_rcc_t T;
    static T& V;
};

using rcc_t = peripheral_t<mcu_svd, RCC>;

