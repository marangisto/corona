#pragma once

////
//
//      STM32G4 RCC peripherals
//
////

////
//
//      Reset and clock control
//
////

struct stm32g431xx_rcc_t
{
    volatile uint32_t CR;         // Clock control register
    volatile uint32_t ICSCR;      // Internal clock sources calibration register
    volatile uint32_t CFGR;       // Clock configuration register
    volatile uint32_t PLLSYSCFGR; // [read-write] PLL configuration register
    reserved_t<0x2> _0x18;
    volatile uint32_t CIER;       // [read-write] Clock interrupt enable register
    volatile uint32_t CIFR;       // [read-only] Clock interrupt flag register
    volatile uint32_t CICR;       // [write-only] Clock interrupt clear register
    reserved_t<0x1> _0x28;
    volatile uint32_t AHB1RSTR;   // [read-write] AHB1 peripheral reset register
    volatile uint32_t AHB2RSTR;   // [read-write] AHB2 peripheral reset register
    volatile uint32_t AHB3RSTR;   // [read-write] AHB3 peripheral reset register
    reserved_t<0x1> _0x38;
    volatile uint32_t APB1RSTR1;  // [read-write] APB1 peripheral reset register 1
    volatile uint32_t APB1RSTR2;  // [read-write] APB1 peripheral reset register 2
    volatile uint32_t APB2RSTR;   // [read-write] APB2 peripheral reset register
    reserved_t<0x1> _0x48;
    volatile uint32_t AHB1ENR;    // [read-write] AHB1 peripheral clock enable register
    volatile uint32_t AHB2ENR;    // [read-write] AHB2 peripheral clock enable register
    volatile uint32_t AHB3ENR;    // [read-write] AHB3 peripheral clock enable register
    reserved_t<0x1> _0x58;
    volatile uint32_t APB1ENR1;   // [read-write] APB1ENR1
    volatile uint32_t APB1ENR2;   // [read-write] APB1 peripheral clock enable register 2
    volatile uint32_t APB2ENR;    // [read-write] APB2ENR
    reserved_t<0x1> _0x68;
    volatile uint32_t AHB1SMENR;  // [read-write] AHB1 peripheral clocks enable in Sleep and Stop modes register
    volatile uint32_t AHB2SMENR;  // [read-write] AHB2 peripheral clocks enable in Sleep and Stop modes register
    volatile uint32_t AHB3SMENR;  // [read-write] AHB3 peripheral clocks enable in Sleep and Stop modes register
    reserved_t<0x1> _0x78;
    volatile uint32_t APB1SMENR1; // [read-write] APB1SMENR1
    volatile uint32_t APB1SMENR2; // [read-write] APB1 peripheral clocks enable in Sleep and Stop modes register 2
    volatile uint32_t APB2SMENR;  // [read-write] APB2SMENR
    reserved_t<0x1> _0x88;
    volatile uint32_t CCIPR1;     // [read-write] CCIPR
    reserved_t<0x1> _0x90;
    volatile uint32_t BDCR;       // BDCR
    volatile uint32_t CSR;        // CSR
    volatile uint32_t CRRCR;      // Clock recovery RC register
    volatile uint32_t CCIPR2;     // [read-write] Peripherals independent clock configuration register

    static constexpr uint32_t CR_RESET_VALUE = 0x63;
    static constexpr uint32_t CR_PLLSYSRDY = 0x2000000; // Main PLL clock ready flag
    static constexpr uint32_t CR_PLLSYSON = 0x1000000;  // Main PLL enable
    static constexpr uint32_t CR_HSECSSON = 0x80000;    // Clock security system enable
    static constexpr uint32_t CR_HSEBYP = 0x40000;      // HSE crystal oscillator bypass
    static constexpr uint32_t CR_HSERDY = 0x20000;      // HSE clock ready flag
    static constexpr uint32_t CR_HSEON = 0x10000;       // HSE clock enable
    static constexpr uint32_t CR_HSIRDY = 0x400;        // HSI clock ready flag
    static constexpr uint32_t CR_HSIKERON = 0x200;      // HSI always enable for peripheral kernels
    static constexpr uint32_t CR_HSION = 0x100;         // HSI clock enable

    static constexpr uint32_t ICSCR_RESET_VALUE = 0x40000000;
    template<uint32_t X>
    static constexpr uint32_t ICSCR_HSICAL0 =   // Internal High Speed clock Calibration
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ICSCR_HSITRIM =   // Internal High Speed clock trimming
        bit_field_t<24, 0x7f>::value<X>();

    static constexpr uint32_t CFGR_RESET_VALUE = 0x5;
    template<uint32_t X>
    static constexpr uint32_t CFGR_MCOPRE =   // Microcontroller clock output prescaler
        bit_field_t<28, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFGR_MCOSEL =   // Microcontroller clock output
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFGR_PPRE2 =    // APB high-speed prescaler (APB2)
        bit_field_t<11, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFGR_PPRE1 =    // PB low-speed prescaler (APB1)
        bit_field_t<8, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFGR_HPRE =     // AHB prescaler
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFGR_SWS =      // System clock switch status
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFGR_SW =       // System clock switch
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t PLLSYSCFGR_RESET_VALUE = 0x1000;
    template<uint32_t X>
    static constexpr uint32_t PLLSYSCFGR_PLLSYSPDIV =           // Main PLL division factor for PLLSAI2CLK
        bit_field_t<27, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PLLSYSCFGR_PLLSYSR =              // Main PLL division factor for PLLCLK (system clock)
        bit_field_t<25, 0x3>::value<X>();
    static constexpr uint32_t PLLSYSCFGR_PLLSYSREN = 0x1000000; // Main PLL PLLCLK output enable
    template<uint32_t X>
    static constexpr uint32_t PLLSYSCFGR_PLLSYSQ =              // Main PLL division factor for PLLUSB1CLK(48 MHz clock)
        bit_field_t<21, 0x3>::value<X>();
    static constexpr uint32_t PLLSYSCFGR_PLLSYSQEN = 0x100000;  // Main PLL PLLUSB1CLK output enable
    static constexpr uint32_t PLLSYSCFGR_PLLSYSP = 0x20000;     // Main PLL division factor for PLLSAI3CLK (SAI1 and SAI2 clock)
    static constexpr uint32_t PLLSYSCFGR_PLLPEN = 0x10000;      // Main PLL PLLSAI3CLK output enable
    template<uint32_t X>
    static constexpr uint32_t PLLSYSCFGR_PLLSYSN =              // Main PLL multiplication factor for VCO
        bit_field_t<8, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PLLSYSCFGR_PLLSYSM =              // Division factor for the main PLL and audio PLL (PLLSAI1 and PLLSAI2) input clock
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PLLSYSCFGR_PLLSRC =               // Main PLL, PLLSAI1 and PLLSAI2 entry clock source
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t CIER_RESET_VALUE = 0x0;
    static constexpr uint32_t CIER_LSIRDYIE = 0x1;     // LSI ready interrupt enable
    static constexpr uint32_t CIER_LSERDYIE = 0x2;     // LSE ready interrupt enable
    static constexpr uint32_t CIER_HSIRDYIE = 0x8;     // HSI ready interrupt enable
    static constexpr uint32_t CIER_HSERDYIE = 0x10;    // HSE ready interrupt enable
    static constexpr uint32_t CIER_PLLSYSRDYIE = 0x20; // PLL ready interrupt enable
    static constexpr uint32_t CIER_LSECSSIE = 0x200;   // LSE clock security system interrupt enable
    static constexpr uint32_t CIER_RC48RDYIE = 0x400;  // HSI48 ready interrupt enable

    static constexpr uint32_t CIFR_RESET_VALUE = 0x0;
    static constexpr uint32_t CIFR_LSIRDYF = 0x1;     // LSI ready interrupt flag
    static constexpr uint32_t CIFR_LSERDYF = 0x2;     // LSE ready interrupt flag
    static constexpr uint32_t CIFR_HSIRDYF = 0x8;     // HSI ready interrupt flag
    static constexpr uint32_t CIFR_HSERDYF = 0x10;    // HSE ready interrupt flag
    static constexpr uint32_t CIFR_PLLSYSRDYF = 0x20; // PLL ready interrupt flag
    static constexpr uint32_t CIFR_HSECSSF = 0x100;   // Clock security system interrupt flag
    static constexpr uint32_t CIFR_LSECSSF = 0x200;   // LSE Clock security system interrupt flag
    static constexpr uint32_t CIFR_RC48RDYF = 0x400;  // HSI48 ready interrupt flag

    static constexpr uint32_t CICR_RESET_VALUE = 0x0;
    static constexpr uint32_t CICR_LSIRDYC = 0x1;     // LSI ready interrupt clear
    static constexpr uint32_t CICR_LSERDYC = 0x2;     // LSE ready interrupt clear
    static constexpr uint32_t CICR_HSIRDYC = 0x8;     // HSI ready interrupt clear
    static constexpr uint32_t CICR_HSERDYC = 0x10;    // HSE ready interrupt clear
    static constexpr uint32_t CICR_PLLSYSRDYC = 0x20; // PLL ready interrupt clear
    static constexpr uint32_t CICR_HSECSSC = 0x100;   // Clock security system interrupt clear
    static constexpr uint32_t CICR_LSECSSC = 0x200;   // LSE Clock security system interrupt clear
    static constexpr uint32_t CICR_RC48RDYC = 0x400;  // HSI48 oscillator ready interrupt clear

    static constexpr uint32_t AHB1RSTR_RESET_VALUE = 0x0;
    static constexpr uint32_t AHB1RSTR_DMA1RST = 0x1;     // DMA1 reset
    static constexpr uint32_t AHB1RSTR_DMA2RST = 0x2;     // DMA2 reset
    static constexpr uint32_t AHB1RSTR_DMAMUX1RST = 0x4;  // DMAMUXRST
    static constexpr uint32_t AHB1RSTR_CORDICRST = 0x8;   // CORDIC reset
    static constexpr uint32_t AHB1RSTR_MATRIXRST = 0x10;  // MATRIX reset
    static constexpr uint32_t AHB1RSTR_FLITFRST_ = 0x100; // FLITF reset
    static constexpr uint32_t AHB1RSTR_CRCRST = 0x1000;   // CRC reset

    static constexpr uint32_t AHB2RSTR_RESET_VALUE = 0x0;
    static constexpr uint32_t AHB2RSTR_GPIOARST = 0x1;       // IO port A reset
    static constexpr uint32_t AHB2RSTR_GPIOBRST = 0x2;       // IO port B reset
    static constexpr uint32_t AHB2RSTR_GPIOCRST = 0x4;       // IO port C reset
    static constexpr uint32_t AHB2RSTR_GPIODRST = 0x8;       // IO port D reset
    static constexpr uint32_t AHB2RSTR_GPIOERST = 0x10;      // IO port E reset
    static constexpr uint32_t AHB2RSTR_GPIOFRST = 0x20;      // IO port F reset
    static constexpr uint32_t AHB2RSTR_GPIOGRST = 0x40;      // IO port G reset
    static constexpr uint32_t AHB2RSTR_ADC12RST = 0x2000;    // ADC reset
    static constexpr uint32_t AHB2RSTR_ADC345RST_ = 0x4000;  // SAR ADC345 interface reset
    static constexpr uint32_t AHB2RSTR_DAC1RST_ = 0x10000;   // DAC1 interface reset
    static constexpr uint32_t AHB2RSTR_DAC2RST = 0x20000;    // DAC2 interface reset
    static constexpr uint32_t AHB2RSTR_DAC3RST = 0x40000;    // DAC3 interface reset
    static constexpr uint32_t AHB2RSTR_DAC4RST = 0x80000;    // DAC4 interface reset
    static constexpr uint32_t AHB2RSTR_CRYPTRST = 0x1000000; // Cryptography module reset
    static constexpr uint32_t AHB2RSTR_RNGRST = 0x4000000;   // Random Number Generator module reset

    static constexpr uint32_t AHB3RSTR_RESET_VALUE = 0x0;
    static constexpr uint32_t AHB3RSTR_FMCRST = 0x1;        // Flexible memory controller reset
    static constexpr uint32_t AHB3RSTR_QUADSPI1RST = 0x100; // Quad SPI 1 module reset

    static constexpr uint32_t APB1RSTR1_RESET_VALUE = 0x0;
    static constexpr uint32_t APB1RSTR1_LPTIM1RST = 0x80000000; // Low Power Timer 1 reset
    static constexpr uint32_t APB1RSTR1_I2C3 = 0x40000000;      // I2C3 interface reset
    static constexpr uint32_t APB1RSTR1_PWRRST = 0x10000000;    // Power interface reset
    static constexpr uint32_t APB1RSTR1_FDCANRST = 0x2000000;   // FDCAN reset
    static constexpr uint32_t APB1RSTR1_USBDRST = 0x800000;     // USBD reset
    static constexpr uint32_t APB1RSTR1_I2C2RST = 0x400000;     // I2C2 reset
    static constexpr uint32_t APB1RSTR1_I2C1RST = 0x200000;     // I2C1 reset
    static constexpr uint32_t APB1RSTR1_UART5RST = 0x100000;    // UART5 reset
    static constexpr uint32_t APB1RSTR1_UART4RST = 0x80000;     // UART4 reset
    static constexpr uint32_t APB1RSTR1_USART3RST = 0x40000;    // USART3 reset
    static constexpr uint32_t APB1RSTR1_USART2RST = 0x20000;    // USART2 reset
    static constexpr uint32_t APB1RSTR1_SPI3RST = 0x8000;       // SPI3 reset
    static constexpr uint32_t APB1RSTR1_SPI2RST = 0x4000;       // SPI2 reset
    static constexpr uint32_t APB1RSTR1_CRSRST = 0x100;         // Clock recovery system reset
    static constexpr uint32_t APB1RSTR1_TIM7RST = 0x20;         // TIM7 timer reset
    static constexpr uint32_t APB1RSTR1_TIM6RST = 0x10;         // TIM6 timer reset
    static constexpr uint32_t APB1RSTR1_TIM5RST = 0x8;          // TIM5 timer reset
    static constexpr uint32_t APB1RSTR1_TIM4RST = 0x4;          // TIM3 timer reset
    static constexpr uint32_t APB1RSTR1_TIM3RST = 0x2;          // TIM3 timer reset
    static constexpr uint32_t APB1RSTR1_TIM2RST = 0x1;          // TIM2 timer reset

    static constexpr uint32_t APB1RSTR2_RESET_VALUE = 0x0;
    static constexpr uint32_t APB1RSTR2_LPUART1RST = 0x1; // Low-power UART 1 reset
    static constexpr uint32_t APB1RSTR2_I2C4RST = 0x2;    // I2C4 reset
    static constexpr uint32_t APB1RSTR2_USBPDRST = 0x100; // USBPD reset

    static constexpr uint32_t APB2RSTR_RESET_VALUE = 0x0;
    static constexpr uint32_t APB2RSTR_SYSCFGRST = 0x1;       // System configuration (SYSCFG) reset
    static constexpr uint32_t APB2RSTR_TIM1RST = 0x800;       // TIM1 timer reset
    static constexpr uint32_t APB2RSTR_SPI1RST = 0x1000;      // SPI1 reset
    static constexpr uint32_t APB2RSTR_TIM8RST = 0x2000;      // TIM8 timer reset
    static constexpr uint32_t APB2RSTR_USART1RST = 0x4000;    // USART1 reset
    static constexpr uint32_t APB2RSTR_SPI4RST = 0x8000;      // SPI 4 reset
    static constexpr uint32_t APB2RSTR_TIM15RST = 0x10000;    // TIM15 timer reset
    static constexpr uint32_t APB2RSTR_TIM16RST = 0x20000;    // TIM16 timer reset
    static constexpr uint32_t APB2RSTR_TIM17RST = 0x40000;    // TIM17 timer reset
    static constexpr uint32_t APB2RSTR_TIM20RST = 0x100000;   // Timer 20 reset
    static constexpr uint32_t APB2RSTR_SAI1RST = 0x200000;    // Serial audio interface 1 (SAI1) reset
    static constexpr uint32_t APB2RSTR_HRTIM1RST = 0x4000000; // HRTIMER reset

    static constexpr uint32_t AHB1ENR_RESET_VALUE = 0x100;
    static constexpr uint32_t AHB1ENR_DMA1EN = 0x1;    // DMA1 clock enable
    static constexpr uint32_t AHB1ENR_DMA2EN = 0x2;    // DMA2 clock enable
    static constexpr uint32_t AHB1ENR_DMAMUXEN = 0x4;  // DMAMUX clock enable
    static constexpr uint32_t AHB1ENR_CORDICEN = 0x8;  // CORDIC clock enable
    static constexpr uint32_t AHB1ENR_FMACEN = 0x10;   // FMAC clock enable
    static constexpr uint32_t AHB1ENR_FLITFEN = 0x100; // FLITF clock enable
    static constexpr uint32_t AHB1ENR_CRCEN = 0x1000;  // CRC clock enable

    static constexpr uint32_t AHB2ENR_RESET_VALUE = 0x0;
    static constexpr uint32_t AHB2ENR_GPIOAEN = 0x1;       // IO port A clock enable
    static constexpr uint32_t AHB2ENR_GPIOBEN = 0x2;       // IO port B clock enable
    static constexpr uint32_t AHB2ENR_GPIOCEN = 0x4;       // IO port C clock enable
    static constexpr uint32_t AHB2ENR_GPIODEN = 0x8;       // IO port D clock enable
    static constexpr uint32_t AHB2ENR_GPIOEEN = 0x10;      // IO port E clock enable
    static constexpr uint32_t AHB2ENR_GPIOFEN = 0x20;      // IO port F clock enable
    static constexpr uint32_t AHB2ENR_GPIOGEN = 0x40;      // IO port G clock enable
    static constexpr uint32_t AHB2ENR_ADC12EN = 0x2000;    // ADC clock enable
    static constexpr uint32_t AHB2ENR_ADC345EN = 0x4000;   // DCMI clock enable
    static constexpr uint32_t AHB2ENR_DAC1 = 0x10000;      // AES accelerator clock enable
    static constexpr uint32_t AHB2ENR_DAC2 = 0x20000;      // HASH clock enable
    static constexpr uint32_t AHB2ENR_DAC3 = 0x40000;      // Random Number Generator clock enable
    static constexpr uint32_t AHB2ENR_DAC4 = 0x80000;      // DAC4 clock enable
    static constexpr uint32_t AHB2ENR_CRYPTEN = 0x1000000; // Cryptography clock enable
    static constexpr uint32_t AHB2ENR_RNGEN = 0x4000000;   // Random Number Generator clock enable

    static constexpr uint32_t AHB3ENR_RESET_VALUE = 0x0;
    static constexpr uint32_t AHB3ENR_FMCEN = 0x1;        // Flexible memory controller clock enable
    static constexpr uint32_t AHB3ENR_QUADSPI1EN = 0x100; // Quad SPI 1 module clock enable

    static constexpr uint32_t APB1ENR1_RESET_VALUE = 0x0;
    static constexpr uint32_t APB1ENR1_TIM2EN = 0x1;          // TIM2 timer clock enable
    static constexpr uint32_t APB1ENR1_TIM3EN = 0x2;          // TIM3 timer clock enable
    static constexpr uint32_t APB1ENR1_TIM4EN = 0x4;          // TIM4 timer clock enable
    static constexpr uint32_t APB1ENR1_TIM5EN = 0x8;          // TIM5 timer clock enable
    static constexpr uint32_t APB1ENR1_TIM6EN = 0x10;         // TIM6 timer clock enable
    static constexpr uint32_t APB1ENR1_TIM7EN = 0x20;         // TIM7 timer clock enable
    static constexpr uint32_t APB1ENR1_CRSEN = 0x100;         // CRSclock enable
    static constexpr uint32_t APB1ENR1_RTCAPBEN = 0x400;      // RTC APB clock enable
    static constexpr uint32_t APB1ENR1_WWDGEN = 0x800;        // Window watchdog clock enable
    static constexpr uint32_t APB1ENR1_SPI2EN = 0x4000;       // SPI2 clock enable
    static constexpr uint32_t APB1ENR1_SP3EN = 0x8000;        // SPI3 clock enable
    static constexpr uint32_t APB1ENR1_USART2EN = 0x20000;    // USART2 clock enable
    static constexpr uint32_t APB1ENR1_USART3EN = 0x40000;    // USART3 clock enable
    static constexpr uint32_t APB1ENR1_UART4EN = 0x80000;     // UART4 clock enable
    static constexpr uint32_t APB1ENR1_UART5EN = 0x100000;    // UART5 clock enable
    static constexpr uint32_t APB1ENR1_I2C1EN = 0x200000;     // I2C1 clock enable
    static constexpr uint32_t APB1ENR1_I2C2EN = 0x400000;     // I2C2 clock enable
    static constexpr uint32_t APB1ENR1_USBDEN = 0x800000;     // USBDclock enable
    static constexpr uint32_t APB1ENR1_FDCANEN = 0x2000000;   // FDCAN clock enable
    static constexpr uint32_t APB1ENR1_PWREN = 0x10000000;    // Power interface clock enable
    static constexpr uint32_t APB1ENR1_I2C3 = 0x40000000;     // OPAMP interface clock enable
    static constexpr uint32_t APB1ENR1_LPTIM1EN = 0x80000000; // Low power timer 1 clock enable

    static constexpr uint32_t APB1ENR2_RESET_VALUE = 0x0;
    static constexpr uint32_t APB1ENR2_LPUART1EN = 0x1; // Low power UART 1 clock enable
    static constexpr uint32_t APB1ENR2_I2C4EN = 0x2;    // I2C4 clock enable
    static constexpr uint32_t APB1ENR2_USBPDEN = 0x100; // USBPD clock enable

    static constexpr uint32_t APB2ENR_RESET_VALUE = 0x0;
    static constexpr uint32_t APB2ENR_SYSCFGEN = 0x1;        // SYSCFG clock enable
    static constexpr uint32_t APB2ENR_TIM1EN = 0x800;        // TIM1 timer clock enable
    static constexpr uint32_t APB2ENR_SPI1EN = 0x1000;       // SPI1 clock enable
    static constexpr uint32_t APB2ENR_TIM8EN = 0x2000;       // TIM8 timer clock enable
    static constexpr uint32_t APB2ENR_USART1EN = 0x4000;     // USART1clock enable
    static constexpr uint32_t APB2ENR_SPI4EN = 0x8000;       // SPI 4 clock enable
    static constexpr uint32_t APB2ENR_TIM15EN = 0x10000;     // TIM15 timer clock enable
    static constexpr uint32_t APB2ENR_TIM16EN = 0x20000;     // TIM16 timer clock enable
    static constexpr uint32_t APB2ENR_TIM17EN = 0x40000;     // TIM17 timer clock enable
    static constexpr uint32_t APB2ENR_TIM20EN = 0x100000;    // Timer 20 clock enable
    static constexpr uint32_t APB2ENR_SAI1EN = 0x200000;     // SAI1 clock enable
    static constexpr uint32_t APB2ENR_HRTIMEREN = 0x4000000; // HRTIMER clock enable

    static constexpr uint32_t AHB1SMENR_RESET_VALUE = 0x130f;
    static constexpr uint32_t AHB1SMENR_DMA1SMEN = 0x1;    // DMA1 clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB1SMENR_DMA2SMEN = 0x2;    // DMA2 clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB1SMENR_DMAMUX1SMEN = 0x4; // DMAMUX clock enable during Sleep and Stop modes
    static constexpr uint32_t AHB1SMENR_CORDICSMEN = 0x8;  // CORDIC clock enable during sleep mode
    static constexpr uint32_t AHB1SMENR_FLASHSMEN = 0x100; // Flash memory interface clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB1SMENR_SRAM1SMEN = 0x200; // SRAM1 interface clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB1SMENR_CRCSMEN = 0x1000;  // CRCSMEN
    static constexpr uint32_t AHB1SMENR_FMACSMEN = 0x10;   // FMACSM clock enable

    static constexpr uint32_t AHB2SMENR_RESET_VALUE = 0x50f667f;
    static constexpr uint32_t AHB2SMENR_GPIOASMEN = 0x1;       // IO port A clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB2SMENR_GPIOBSMEN = 0x2;       // IO port B clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB2SMENR_GPIOCSMEN = 0x4;       // IO port C clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB2SMENR_GPIODSMEN = 0x8;       // IO port D clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB2SMENR_GPIOESMEN = 0x10;      // IO port E clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB2SMENR_GPIOFSMEN = 0x20;      // IO port F clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB2SMENR_GPIOGSMEN = 0x40;      // IO port G clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB2SMENR_SRAM2SMEN = 0x200;     // SRAM2 interface clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB2SMENR_SRAM3SMEN = 0x400;     // SRAM2 interface clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB2SMENR_AD12CSMEN = 0x2000;    // ADC clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB2SMENR_ADC345SMEN = 0x4000;   // DCMI clock enable during Sleep and Stop modes
    static constexpr uint32_t AHB2SMENR_DAC1SMEN = 0x10000;    // AES accelerator clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB2SMENR_DAC2SMEN = 0x20000;    // HASH clock enable during Sleep and Stop modes
    static constexpr uint32_t AHB2SMENR_DAC3SMEN = 0x40000;    // DAC3 clock enable during sleep mode
    static constexpr uint32_t AHB2SMENR_DAC4SMEN = 0x80000;    // DAC4 clock enable during sleep mode
    static constexpr uint32_t AHB2SMENR_CRYPTSMEN = 0x1000000; // Cryptography clock enable during sleep mode
    static constexpr uint32_t AHB2SMENR_RNGSMEN = 0x4000000;   // Random Number Generator clock enable during sleep mode

    static constexpr uint32_t AHB3SMENR_RESET_VALUE = 0x101;
    static constexpr uint32_t AHB3SMENR_FMCSMEN = 0x1;        // Flexible memory controller clocks enable during Sleep and Stop modes
    static constexpr uint32_t AHB3SMENR_QUADSPI1SMEN = 0x100; // QUAD SPI 1 module clock enable during sleep mode

    static constexpr uint32_t APB1SMENR1_RESET_VALUE = 0xd2fecd3f;
    static constexpr uint32_t APB1SMENR1_TIM2SMEN = 0x1;          // TIM2 timer clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_TIM3SMEN = 0x2;          // TIM3 timer clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_TIM4SMEN = 0x4;          // TIM4 timer clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_TIM5SMEN = 0x8;          // TIM5 timer clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_TIM6SMEN = 0x10;         // TIM6 timer clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_TIM7SMEN = 0x20;         // TIM7 timer clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_CRSSMEN = 0x100;         // CRS clock enable during sleep mode
    static constexpr uint32_t APB1SMENR1_RTCAPBSMEN = 0x400;      // RTC APB clock enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_WWDGSMEN = 0x800;        // Window watchdog clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_SPI2SMEN = 0x4000;       // SPI2 clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_SP3SMEN = 0x8000;        // SPI3 clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_USART2SMEN = 0x20000;    // USART2 clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_USART3SMEN = 0x40000;    // USART3 clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_UART4SMEN = 0x80000;     // UART4 clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_UART5SMEN = 0x100000;    // UART5 clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_I2C1SMEN = 0x200000;     // I2C1 clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_I2C2SMEN = 0x400000;     // I2C2 clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_I2C3SMEN = 0x800000;     // I2C3 clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_FDCANSMEN = 0x2000000;   // FDCAN clock enable during sleep mode
    static constexpr uint32_t APB1SMENR1_PWRSMEN = 0x10000000;    // Power interface clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR1_I2C3SMEN_3 = 0x40000000; // I2C 3 interface clock enable during sleep mode
    static constexpr uint32_t APB1SMENR1_LPTIM1SMEN = 0x80000000; // Low Power Timer1 clock enable during sleep mode

    static constexpr uint32_t APB1SMENR2_RESET_VALUE = 0x103;
    static constexpr uint32_t APB1SMENR2_LPUART1SMEN = 0x1; // Low power UART 1 clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR2_I2C4SMEN = 0x2;    // I2C4 clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB1SMENR2_USBPDSMEN = 0x100; // USB PD clock enable during sleep mode

    static constexpr uint32_t APB2SMENR_RESET_VALUE = 0x437f801;
    static constexpr uint32_t APB2SMENR_SYSCFGSMEN = 0x1;        // SYSCFG clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB2SMENR_TIM1SMEN = 0x800;        // TIM1 timer clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB2SMENR_SPI1SMEN = 0x1000;       // SPI1 clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB2SMENR_TIM8SMEN = 0x2000;       // TIM8 timer clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB2SMENR_USART1SMEN = 0x4000;     // USART1clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB2SMENR_SPI4SMEN = 0x8000;       // SPI4 timer clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB2SMENR_TIM15SMEN = 0x10000;     // TIM15 timer clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB2SMENR_TIM16SMEN = 0x20000;     // TIM16 timer clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB2SMENR_TIM17SMEN = 0x40000;     // TIM17 timer clocks enable during Sleep and Stop modes
    static constexpr uint32_t APB2SMENR_TIM20SMEN = 0x100000;    // Timer 20clock enable during sleep mode
    static constexpr uint32_t APB2SMENR_SAI1SMEN = 0x200000;     // SAI1 clock enable during sleep mode
    static constexpr uint32_t APB2SMENR_HRTIMERSMEN = 0x4000000; // HRTIMER clock enable during sleep mode

    static constexpr uint32_t CCIPR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCIPR1_ADC345SEL =    // ADC3/4/5 clock source selection
        bit_field_t<30, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCIPR1_ADCSEL =       // ADCs clock source selection
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCIPR1_CLK48SEL =     // 48 MHz clock source selection
        bit_field_t<26, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCIPR1_FDCANSEL =     // SAI2 clock source selection
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCIPR1_SPISEL_ =      // SAI1 clock source selection
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCIPR1_SAISEL =       // Low power timer 2 clock source selection
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCIPR1_LPTIM1SEL =    // Low power timer 1 clock source selection
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCIPR1_I2C3SEL =      // I2C3 clock source selection
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCIPR1_I2C2SEL =      // I2C2 clock source selection
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCIPR1_I2C1SEL =      // I2C1 clock source selection
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCIPR1_LPUART1SEL =   // LPUART1 clock source selection
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCIPR1_UART5SEL =     // UART5 clock source selection
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCIPR1_UART4SEL =     // UART4 clock source selection
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCIPR1_USART3SEL =    // USART3 clock source selection
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCIPR1_USART2SEL =    // USART2 clock source selection
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCIPR1_USART1SEL =    // USART1 clock source selection
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t BDCR_RESET_VALUE = 0x0;
    static constexpr uint32_t BDCR_LSCOSEL = 0x2000000; // Low speed clock output selection
    static constexpr uint32_t BDCR_LSCCOEN = 0x1000000; // Low speed clock output enable
    static constexpr uint32_t BDCR_VSWRST = 0x10000;    // Vswitch domain software reset
    static constexpr uint32_t BDCR_RTCEN = 0x8000;      // RTC clock enable
    template<uint32_t X>
    static constexpr uint32_t BDCR_RTCSEL =             // RTC clock source selection
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t BDCR_LSECSSD = 0x40;      // LSECSSD
    static constexpr uint32_t BDCR_LSECSSON = 0x20;     // LSECSSON
    template<uint32_t X>
    static constexpr uint32_t BDCR_LSEDRV =             // SE oscillator drive capability
        bit_field_t<3, 0x3>::value<X>();
    static constexpr uint32_t BDCR_LSEBYP = 0x4;        // LSE oscillator bypass
    static constexpr uint32_t BDCR_LSERDY = 0x2;        // LSE oscillator ready
    static constexpr uint32_t BDCR_LSEON = 0x1;         // LSE oscillator enable

    static constexpr uint32_t CSR_RESET_VALUE = 0xc000000;
    static constexpr uint32_t CSR_LPWRSTF = 0x80000000;  // Low-power reset flag
    static constexpr uint32_t CSR_WWDGRSTF = 0x40000000; // Window watchdog reset flag
    static constexpr uint32_t CSR_WDGRSTF = 0x20000000;  // Independent window watchdog reset flag
    static constexpr uint32_t CSR_SFTRSTF = 0x10000000;  // Software reset flag
    static constexpr uint32_t CSR_BORRSTF = 0x8000000;   // BOR flag
    static constexpr uint32_t CSR_PADRSTF = 0x4000000;   // Pad reset flag
    static constexpr uint32_t CSR_OBLRSTF = 0x2000000;   // Option byte loader reset flag
    static constexpr uint32_t CSR_RMVF = 0x800000;       // Remove reset flag
    static constexpr uint32_t CSR_LSIRDY = 0x2;          // LSI oscillator ready
    static constexpr uint32_t CSR_LSION = 0x1;           // LSI oscillator enable

    static constexpr uint32_t CRRCR_RESET_VALUE = 0x0;
    static constexpr uint32_t CRRCR_RC48ON = 0x1;  // HSI48 clock enable
    static constexpr uint32_t CRRCR_RC48RDY = 0x2; // HSI48 clock ready flag
    template<uint32_t X>
    static constexpr uint32_t CRRCR_RC48CAL =      // HSI48 clock calibration
        bit_field_t<7, 0x1ff>::value<X>();

    static constexpr uint32_t CCIPR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCIPR2_I2C4SEL =      // I2C4 clock source selection
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCIPR2_QUADSPISEL =   // Octospi clock source selection
        bit_field_t<20, 0x3>::value<X>();
};


template<>
struct peripheral_t<STM32G431xx, RCC>
{
    typedef stm32g431xx_rcc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G441xx, RCC>
{
    typedef stm32g431xx_rcc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G471xx, RCC>
{
    typedef stm32g431xx_rcc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G473xx, RCC>
{
    typedef stm32g431xx_rcc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G474xx, RCC>
{
    typedef stm32g431xx_rcc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G483xx, RCC>
{
    typedef stm32g431xx_rcc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, RCC>
{
    typedef stm32g431xx_rcc_t T;
    static T& V;
};

using rcc_t = peripheral_t<mcu_svd, RCC>;

