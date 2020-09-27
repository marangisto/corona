#pragma once

////
//
//      STM32H7 RCC peripherals
//
///

// RCC: Reset and clock control

struct stm32h742x_rcc_t
{
    volatile uint32_t CR; // clock control register
    volatile uint32_t ICSCR; // RCC Internal Clock Source Calibration Register
    volatile uint32_t CRRCR; // RCC Clock Recovery RC Register
    reserved_t<0x1> _0xc;
    volatile uint32_t CFGR; // RCC Clock Configuration Register
    reserved_t<0x1> _0x14;
    volatile uint32_t D1CFGR; // RCC Domain 1 Clock Configuration Register
    volatile uint32_t D2CFGR; // RCC Domain 2 Clock Configuration Register
    volatile uint32_t D3CFGR; // RCC Domain 3 Clock Configuration Register
    reserved_t<0x1> _0x24;
    volatile uint32_t PLLCKSELR; // RCC PLLs Clock Source Selection Register
    volatile uint32_t PLLCFGR; // RCC PLLs Configuration Register
    volatile uint32_t PLL1DIVR; // RCC PLL1 Dividers Configuration Register
    volatile uint32_t PLL1FRACR; // RCC PLL1 Fractional Divider Register
    volatile uint32_t PLL2DIVR; // RCC PLL2 Dividers Configuration Register
    volatile uint32_t PLL2FRACR; // RCC PLL2 Fractional Divider Register
    volatile uint32_t PLL3DIVR; // RCC PLL3 Dividers Configuration Register
    volatile uint32_t PLL3FRACR; // RCC PLL3 Fractional Divider Register
    reserved_t<0x1> _0x48;
    volatile uint32_t D1CCIPR; // RCC Domain 1 Kernel Clock Configuration Register
    volatile uint32_t D2CCIP1R; // RCC Domain 2 Kernel Clock Configuration Register
    volatile uint32_t D2CCIP2R; // RCC Domain 2 Kernel Clock Configuration Register
    volatile uint32_t D3CCIPR; // RCC Domain 3 Kernel Clock Configuration Register
    reserved_t<0x1> _0x5c;
    volatile uint32_t CIER; // RCC Clock Source Interrupt Enable Register
    volatile uint32_t CIFR; // RCC Clock Source Interrupt Flag Register
    volatile uint32_t CICR; // RCC Clock Source Interrupt Clear Register
    reserved_t<0x1> _0x6c;
    volatile uint32_t BDCR; // RCC Backup Domain Control Register
    volatile uint32_t CSR; // RCC Clock Control and Status Register
    reserved_t<0x1> _0x78;
    volatile uint32_t AHB3RSTR; // RCC AHB3 Reset Register
    volatile uint32_t AHB1RSTR; // RCC AHB1 Peripheral Reset Register
    volatile uint32_t AHB2RSTR; // RCC AHB2 Peripheral Reset Register
    volatile uint32_t AHB4RSTR; // RCC AHB4 Peripheral Reset Register
    volatile uint32_t APB3RSTR; // RCC APB3 Peripheral Reset Register
    volatile uint32_t APB1LRSTR; // RCC APB1 Peripheral Reset Register
    volatile uint32_t APB1HRSTR; // RCC APB1 Peripheral Reset Register
    volatile uint32_t APB2RSTR; // RCC APB2 Peripheral Reset Register
    volatile uint32_t APB4RSTR; // RCC APB4 Peripheral Reset Register
    volatile uint32_t GCR; // RCC Global Control Register
    reserved_t<0x1> _0xa4;
    volatile uint32_t D3AMR; // RCC D3 Autonomous mode Register
    reserved_t<0x9> _0xac;
    volatile uint32_t RSR; // RCC Reset Status Register
    volatile uint32_t AHB3ENR; // RCC AHB3 Clock Register
    volatile uint32_t AHB1ENR; // RCC AHB1 Clock Register
    volatile uint32_t AHB2ENR; // RCC AHB2 Clock Register
    volatile uint32_t AHB4ENR; // RCC AHB4 Clock Register
    volatile uint32_t APB3ENR; // RCC APB3 Clock Register
    volatile uint32_t APB1LENR; // RCC APB1 Clock Register
    volatile uint32_t APB1HENR; // RCC APB1 Clock Register
    volatile uint32_t APB2ENR; // RCC APB2 Clock Register
    volatile uint32_t APB4ENR; // RCC APB4 Clock Register
    reserved_t<0x1> _0xf8;
    volatile uint32_t AHB3LPENR; // RCC AHB3 Sleep Clock Register
    volatile uint32_t AHB1LPENR; // RCC AHB1 Sleep Clock Register
    volatile uint32_t AHB2LPENR; // RCC AHB2 Sleep Clock Register
    volatile uint32_t AHB4LPENR; // RCC AHB4 Sleep Clock Register
    volatile uint32_t APB3LPENR; // RCC APB3 Sleep Clock Register
    volatile uint32_t APB1LLPENR; // RCC APB1 Low Sleep Clock Register
    volatile uint32_t APB1HLPENR; // RCC APB1 High Sleep Clock Register
    volatile uint32_t APB2LPENR; // RCC APB2 Sleep Clock Register
    volatile uint32_t APB4LPENR; // RCC APB4 Sleep Clock Register
    reserved_t<0x4> _0x120;
    volatile uint32_t C1_RSR; // RCC Reset Status Register
    volatile uint32_t C1_AHB3ENR; // RCC AHB3 Clock Register
    volatile uint32_t C1_AHB1ENR; // RCC AHB1 Clock Register
    volatile uint32_t C1_AHB2ENR; // RCC AHB2 Clock Register
    volatile uint32_t C1_AHB4ENR; // RCC AHB4 Clock Register
    volatile uint32_t C1_APB3ENR; // RCC APB3 Clock Register
    volatile uint32_t C1_APB1LENR; // RCC APB1 Clock Register
    volatile uint32_t C1_APB1HENR; // RCC APB1 Clock Register
    volatile uint32_t C1_APB2ENR; // RCC APB2 Clock Register
    volatile uint32_t C1_APB4ENR; // RCC APB4 Clock Register
    reserved_t<0x1> _0x158;
    volatile uint32_t C1_AHB3LPENR; // RCC AHB3 Sleep Clock Register
    volatile uint32_t C1_AHB1LPENR; // RCC AHB1 Sleep Clock Register
    volatile uint32_t C1_AHB2LPENR; // RCC AHB2 Sleep Clock Register
    volatile uint32_t C1_AHB4LPENR; // RCC AHB4 Sleep Clock Register
    volatile uint32_t C1_APB3LPENR; // RCC APB3 Sleep Clock Register
    volatile uint32_t C1_APB1LLPENR; // RCC APB1 Low Sleep Clock Register
    volatile uint32_t C1_APB1HLPENR; // RCC APB1 High Sleep Clock Register
    volatile uint32_t C1_APB2LPENR; // RCC APB2 Sleep Clock Register
    volatile uint32_t C1_APB4LPENR; // RCC APB4 Sleep Clock Register

    static constexpr uint32_t CR_RESET_VALUE = 0x83; // Reset value
    static constexpr uint32_t CR_HSION = 0x1; // Internal high-speed clock enable
    static constexpr uint32_t CR_HSIKERON = 0x2; // High Speed Internal clock enable in Stop mode
    static constexpr uint32_t CR_HSIRDY = 0x4; // HSI clock ready flag
    typedef bit_field_t<3, 0x3> CR_HSIDIV; // HSI clock divider
    static constexpr uint32_t CR_HSIDIVF = 0x20; // HSI divider flag
    static constexpr uint32_t CR_CSION = 0x80; // CSI clock enable
    static constexpr uint32_t CR_CSIRDY = 0x100; // CSI clock ready flag
    static constexpr uint32_t CR_CSIKERON = 0x200; // CSI clock enable in Stop mode
    static constexpr uint32_t CR_RC48ON = 0x1000; // RC48 clock enable
    static constexpr uint32_t CR_RC48RDY = 0x2000; // RC48 clock ready flag
    static constexpr uint32_t CR_D1CKRDY = 0x4000; // D1 domain clocks ready flag
    static constexpr uint32_t CR_D2CKRDY = 0x8000; // D2 domain clocks ready flag
    static constexpr uint32_t CR_HSEON = 0x10000; // HSE clock enable
    static constexpr uint32_t CR_HSERDY = 0x20000; // HSE clock ready flag
    static constexpr uint32_t CR_HSEBYP = 0x40000; // HSE clock bypass
    static constexpr uint32_t CR_HSECSSON = 0x80000; // HSE Clock Security System enable
    static constexpr uint32_t CR_PLL1ON = 0x1000000; // PLL1 enable
    static constexpr uint32_t CR_PLL1RDY = 0x2000000; // PLL1 clock ready flag
    static constexpr uint32_t CR_PLL2ON = 0x4000000; // PLL2 enable
    static constexpr uint32_t CR_PLL2RDY = 0x8000000; // PLL2 clock ready flag
    static constexpr uint32_t CR_PLL3ON = 0x10000000; // PLL3 enable
    static constexpr uint32_t CR_PLL3RDY = 0x20000000; // PLL3 clock ready flag

    static constexpr uint32_t ICSCR_RESET_VALUE = 0x40000000; // Reset value
    typedef bit_field_t<0, 0xfff> ICSCR_HSICAL; // HSI clock calibration
    typedef bit_field_t<12, 0x3f> ICSCR_HSITRIM; // HSI clock trimming
    typedef bit_field_t<18, 0xff> ICSCR_CSICAL; // CSI clock calibration
    typedef bit_field_t<26, 0x1f> ICSCR_CSITRIM; // CSI clock trimming

    static constexpr uint32_t CRRCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ff> CRRCR_RC48CAL; // Internal RC 48 MHz clock calibration


    static constexpr uint32_t CFGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> CFGR_SW; // System clock switch
    typedef bit_field_t<3, 0x7> CFGR_SWS; // System clock switch status
    static constexpr uint32_t CFGR_STOPWUCK = 0x40; // System clock selection after a wake up from system Stop
    static constexpr uint32_t CFGR_STOPKERWUCK = 0x80; // Kernel clock selection after a wake up from system Stop
    typedef bit_field_t<8, 0x3f> CFGR_RTCPRE; // HSE division factor for RTC clock
    static constexpr uint32_t CFGR_HRTIMSEL = 0x4000; // High Resolution Timer clock prescaler selection
    static constexpr uint32_t CFGR_TIMPRE = 0x8000; // Timers clocks prescaler selection
    typedef bit_field_t<18, 0xf> CFGR_MCO1PRE; // MCO1 prescaler
    typedef bit_field_t<22, 0x7> CFGR_MCO1SEL; // Micro-controller clock output 1
    typedef bit_field_t<25, 0xf> CFGR_MCO2PRE; // MCO2 prescaler
    typedef bit_field_t<29, 0x7> CFGR_MCO2SEL; // Micro-controller clock output 2


    static constexpr uint32_t D1CFGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> D1CFGR_HPRE; // D1 domain AHB prescaler
    typedef bit_field_t<4, 0x7> D1CFGR_D1PPRE; // D1 domain APB3 prescaler
    typedef bit_field_t<8, 0xf> D1CFGR_D1CPRE; // D1 domain Core prescaler

    static constexpr uint32_t D2CFGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0x7> D2CFGR_D2PPRE1; // D2 domain APB1 prescaler
    typedef bit_field_t<8, 0x7> D2CFGR_D2PPRE2; // D2 domain APB2 prescaler

    static constexpr uint32_t D3CFGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0x7> D3CFGR_D3PPRE; // D3 domain APB4 prescaler


    static constexpr uint32_t PLLCKSELR_RESET_VALUE = 0x2020200; // Reset value
    typedef bit_field_t<0, 0x3> PLLCKSELR_PLLSRC; // DIVMx and PLLs clock source selection
    typedef bit_field_t<4, 0x3f> PLLCKSELR_DIVM1; // Prescaler for PLL1
    typedef bit_field_t<12, 0x3f> PLLCKSELR_DIVM2; // Prescaler for PLL2
    typedef bit_field_t<20, 0x3f> PLLCKSELR_DIVM3; // Prescaler for PLL3

    static constexpr uint32_t PLLCFGR_RESET_VALUE = 0x1ff0000; // Reset value
    static constexpr uint32_t PLLCFGR_PLL1FRACEN = 0x1; // PLL1 fractional latch enable
    static constexpr uint32_t PLLCFGR_PLL1VCOSEL = 0x2; // PLL1 VCO selection
    typedef bit_field_t<2, 0x3> PLLCFGR_PLL1RGE; // PLL1 input frequency range
    static constexpr uint32_t PLLCFGR_PLL2FRACEN = 0x10; // PLL2 fractional latch enable
    static constexpr uint32_t PLLCFGR_PLL2VCOSEL = 0x20; // PLL2 VCO selection
    typedef bit_field_t<6, 0x3> PLLCFGR_PLL2RGE; // PLL2 input frequency range
    static constexpr uint32_t PLLCFGR_PLL3FRACEN = 0x100; // PLL3 fractional latch enable
    static constexpr uint32_t PLLCFGR_PLL3VCOSEL = 0x200; // PLL3 VCO selection
    typedef bit_field_t<10, 0x3> PLLCFGR_PLL3RGE; // PLL3 input frequency range
    static constexpr uint32_t PLLCFGR_DIVP1EN = 0x10000; // PLL1 DIVP divider output enable
    static constexpr uint32_t PLLCFGR_DIVQ1EN = 0x20000; // PLL1 DIVQ divider output enable
    static constexpr uint32_t PLLCFGR_DIVR1EN = 0x40000; // PLL1 DIVR divider output enable
    static constexpr uint32_t PLLCFGR_DIVP2EN = 0x80000; // PLL2 DIVP divider output enable
    static constexpr uint32_t PLLCFGR_DIVQ2EN = 0x100000; // PLL2 DIVQ divider output enable
    static constexpr uint32_t PLLCFGR_DIVR2EN = 0x200000; // PLL2 DIVR divider output enable
    static constexpr uint32_t PLLCFGR_DIVP3EN = 0x400000; // PLL3 DIVP divider output enable
    static constexpr uint32_t PLLCFGR_DIVQ3EN = 0x800000; // PLL3 DIVQ divider output enable
    static constexpr uint32_t PLLCFGR_DIVR3EN = 0x1000000; // PLL3 DIVR divider output enable

    static constexpr uint32_t PLL1DIVR_RESET_VALUE = 0x1010280; // Reset value
    typedef bit_field_t<0, 0x1ff> PLL1DIVR_DIVN1; // Multiplication factor for PLL1 VCO
    typedef bit_field_t<9, 0x7f> PLL1DIVR_DIVP1; // PLL1 DIVP division factor
    typedef bit_field_t<16, 0x7f> PLL1DIVR_DIVQ1; // PLL1 DIVQ division factor
    typedef bit_field_t<24, 0x7f> PLL1DIVR_DIVR1; // PLL1 DIVR division factor

    static constexpr uint32_t PLL1FRACR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<3, 0x1fff> PLL1FRACR_FRACN1; // Fractional part of the multiplication factor for PLL1 VCO

    static constexpr uint32_t PLL2DIVR_RESET_VALUE = 0x1010280; // Reset value
    typedef bit_field_t<0, 0x1ff> PLL2DIVR_DIVN1; // Multiplication factor for PLL1 VCO
    typedef bit_field_t<9, 0x7f> PLL2DIVR_DIVP1; // PLL1 DIVP division factor
    typedef bit_field_t<16, 0x7f> PLL2DIVR_DIVQ1; // PLL1 DIVQ division factor
    typedef bit_field_t<24, 0x7f> PLL2DIVR_DIVR1; // PLL1 DIVR division factor

    static constexpr uint32_t PLL2FRACR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<3, 0x1fff> PLL2FRACR_FRACN2; // Fractional part of the multiplication factor for PLL VCO

    static constexpr uint32_t PLL3DIVR_RESET_VALUE = 0x1010280; // Reset value
    typedef bit_field_t<0, 0x1ff> PLL3DIVR_DIVN3; // Multiplication factor for PLL1 VCO
    typedef bit_field_t<9, 0x7f> PLL3DIVR_DIVP3; // PLL DIVP division factor
    typedef bit_field_t<16, 0x7f> PLL3DIVR_DIVQ3; // PLL DIVQ division factor
    typedef bit_field_t<24, 0x7f> PLL3DIVR_DIVR3; // PLL DIVR division factor

    static constexpr uint32_t PLL3FRACR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<3, 0x1fff> PLL3FRACR_FRACN3; // Fractional part of the multiplication factor for PLL3 VCO


    static constexpr uint32_t D1CCIPR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> D1CCIPR_FMCSRC; // FMC kernel clock source selection
    typedef bit_field_t<4, 0x3> D1CCIPR_QSPISRC; // QUADSPI kernel clock source selection
    static constexpr uint32_t D1CCIPR_SDMMCSRC = 0x10000; // SDMMC kernel clock source selection
    typedef bit_field_t<28, 0x3> D1CCIPR_CKPERSRC; // per_ck clock source selection

    static constexpr uint32_t D2CCIP1R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> D2CCIP1R_SAI1SRC; // SAI1 and DFSDM1 kernel Aclk clock source selection
    typedef bit_field_t<6, 0x7> D2CCIP1R_SAI23SRC; // SAI2 and SAI3 kernel clock source selection
    typedef bit_field_t<12, 0x7> D2CCIP1R_SPI123SRC; // SPI/I2S1,2 and 3 kernel clock source selection
    typedef bit_field_t<16, 0x7> D2CCIP1R_SPI45SRC; // SPI4 and 5 kernel clock source selection
    typedef bit_field_t<20, 0x3> D2CCIP1R_SPDIFSRC; // SPDIFRX kernel clock source selection
    static constexpr uint32_t D2CCIP1R_DFSDM1SRC = 0x1000000; // DFSDM1 kernel Clk clock source selection
    typedef bit_field_t<28, 0x3> D2CCIP1R_FDCANSRC; // FDCAN kernel clock source selection
    static constexpr uint32_t D2CCIP1R_SWPSRC = 0x80000000; // SWPMI kernel clock source selection

    static constexpr uint32_t D2CCIP2R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> D2CCIP2R_USART234578SRC; // USART2/3, UART4,5, 7/8 (APB1) kernel clock source selection
    typedef bit_field_t<3, 0x7> D2CCIP2R_USART16SRC; // USART1 and 6 kernel clock source selection
    typedef bit_field_t<8, 0x3> D2CCIP2R_RNGSRC; // RNG kernel clock source selection
    typedef bit_field_t<12, 0x3> D2CCIP2R_I2C123SRC; // I2C1,2,3 kernel clock source selection
    typedef bit_field_t<20, 0x3> D2CCIP2R_USBSRC; // USBOTG 1 and 2 kernel clock source selection
    typedef bit_field_t<22, 0x3> D2CCIP2R_CECSRC; // HDMI-CEC kernel clock source selection
    typedef bit_field_t<28, 0x7> D2CCIP2R_LPTIM1SRC; // LPTIM1 kernel clock source selection

    static constexpr uint32_t D3CCIPR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> D3CCIPR_LPUART1SRC; // LPUART1 kernel clock source selection
    typedef bit_field_t<8, 0x3> D3CCIPR_I2C4SRC; // I2C4 kernel clock source selection
    typedef bit_field_t<10, 0x7> D3CCIPR_LPTIM2SRC; // LPTIM2 kernel clock source selection
    typedef bit_field_t<13, 0x7> D3CCIPR_LPTIM345SRC; // LPTIM3,4,5 kernel clock source selection
    typedef bit_field_t<16, 0x3> D3CCIPR_ADCSRC; // SAR ADC kernel clock source selection
    typedef bit_field_t<21, 0x7> D3CCIPR_SAI4ASRC; // Sub-Block A of SAI4 kernel clock source selection
    typedef bit_field_t<24, 0x7> D3CCIPR_SAI4BSRC; // Sub-Block B of SAI4 kernel clock source selection
    typedef bit_field_t<28, 0x7> D3CCIPR_SPI6SRC; // SPI6 kernel clock source selection


    static constexpr uint32_t CIER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CIER_LSIRDYIE = 0x1; // LSI ready Interrupt Enable
    static constexpr uint32_t CIER_LSERDYIE = 0x2; // LSE ready Interrupt Enable
    static constexpr uint32_t CIER_HSIRDYIE = 0x4; // HSI ready Interrupt Enable
    static constexpr uint32_t CIER_HSERDYIE = 0x8; // HSE ready Interrupt Enable
    static constexpr uint32_t CIER_CSIRDYIE = 0x10; // CSI ready Interrupt Enable
    static constexpr uint32_t CIER_RC48RDYIE = 0x20; // RC48 ready Interrupt Enable
    static constexpr uint32_t CIER_PLL1RDYIE = 0x40; // PLL1 ready Interrupt Enable
    static constexpr uint32_t CIER_PLL2RDYIE = 0x80; // PLL2 ready Interrupt Enable
    static constexpr uint32_t CIER_PLL3RDYIE = 0x100; // PLL3 ready Interrupt Enable
    static constexpr uint32_t CIER_LSECSSIE = 0x200; // LSE clock security system Interrupt Enable

    static constexpr uint32_t CIFR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CIFR_LSIRDYF = 0x1; // LSI ready Interrupt Flag
    static constexpr uint32_t CIFR_LSERDYF = 0x2; // LSE ready Interrupt Flag
    static constexpr uint32_t CIFR_HSIRDYF = 0x4; // HSI ready Interrupt Flag
    static constexpr uint32_t CIFR_HSERDYF = 0x8; // HSE ready Interrupt Flag
    static constexpr uint32_t CIFR_CSIRDY = 0x10; // CSI ready Interrupt Flag
    static constexpr uint32_t CIFR_RC48RDYF = 0x20; // RC48 ready Interrupt Flag
    static constexpr uint32_t CIFR_PLL1RDYF = 0x40; // PLL1 ready Interrupt Flag
    static constexpr uint32_t CIFR_PLL2RDYF = 0x80; // PLL2 ready Interrupt Flag
    static constexpr uint32_t CIFR_PLL3RDYF = 0x100; // PLL3 ready Interrupt Flag
    static constexpr uint32_t CIFR_LSECSSF = 0x200; // LSE clock security system Interrupt Flag
    static constexpr uint32_t CIFR_HSECSSF = 0x400; // HSE clock security system Interrupt Flag

    static constexpr uint32_t CICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CICR_LSIRDYC = 0x1; // LSI ready Interrupt Clear
    static constexpr uint32_t CICR_LSERDYC = 0x2; // LSE ready Interrupt Clear
    static constexpr uint32_t CICR_HSIRDYC = 0x4; // HSI ready Interrupt Clear
    static constexpr uint32_t CICR_HSERDYC = 0x8; // HSE ready Interrupt Clear
    static constexpr uint32_t CICR_HSE_READY_INTERRUPT_CLEAR = 0x10; // CSI ready Interrupt Clear
    static constexpr uint32_t CICR_RC48RDYC = 0x20; // RC48 ready Interrupt Clear
    static constexpr uint32_t CICR_PLL1RDYC = 0x40; // PLL1 ready Interrupt Clear
    static constexpr uint32_t CICR_PLL2RDYC = 0x80; // PLL2 ready Interrupt Clear
    static constexpr uint32_t CICR_PLL3RDYC = 0x100; // PLL3 ready Interrupt Clear
    static constexpr uint32_t CICR_LSECSSC = 0x200; // LSE clock security system Interrupt Clear
    static constexpr uint32_t CICR_HSECSSC = 0x400; // HSE clock security system Interrupt Clear


    static constexpr uint32_t BDCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BDCR_LSEON = 0x1; // LSE oscillator enabled
    static constexpr uint32_t BDCR_LSERDY = 0x2; // LSE oscillator ready
    static constexpr uint32_t BDCR_LSEBYP = 0x4; // LSE oscillator bypass
    typedef bit_field_t<3, 0x3> BDCR_LSEDRV; // LSE oscillator driving capability
    static constexpr uint32_t BDCR_LSECSSON = 0x20; // LSE clock security system enable
    static constexpr uint32_t BDCR_LSECSSD = 0x40; // LSE clock security system failure detection
    typedef bit_field_t<8, 0x3> BDCR_RTCSRC; // RTC clock source selection
    static constexpr uint32_t BDCR_RTCEN = 0x8000; // RTC clock enable
    static constexpr uint32_t BDCR_VSWRST = 0x10000; // VSwitch domain software reset

    static constexpr uint32_t CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CSR_LSION = 0x1; // LSI oscillator enable
    static constexpr uint32_t CSR_LSIRDY = 0x2; // LSI oscillator ready


    static constexpr uint32_t AHB3RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB3RSTR_MDMARST = 0x1; // MDMA block reset
    static constexpr uint32_t AHB3RSTR_DMA2DRST = 0x10; // DMA2D block reset
    static constexpr uint32_t AHB3RSTR_JPGDECRST = 0x20; // JPGDEC block reset
    static constexpr uint32_t AHB3RSTR_FMCRST = 0x1000; // FMC block reset
    static constexpr uint32_t AHB3RSTR_QSPIRST = 0x4000; // QUADSPI and QUADSPI delay block reset
    static constexpr uint32_t AHB3RSTR_SDMMC1RST = 0x10000; // SDMMC1 and SDMMC1 delay block reset
    static constexpr uint32_t AHB3RSTR_CPURST = 0x80000000; // CPU reset

    static constexpr uint32_t AHB1RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB1RSTR_DMA1RST = 0x1; // DMA1 block reset
    static constexpr uint32_t AHB1RSTR_DMA2RST = 0x2; // DMA2 block reset
    static constexpr uint32_t AHB1RSTR_ADC12_COMMONRST = 0x20; // ADC1&amp;2 block reset
    static constexpr uint32_t AHB1RSTR_ETH1MACRST = 0x8000; // ETH1MAC block reset
    static constexpr uint32_t AHB1RSTR_USB1OTGRST = 0x2000000; // USB1OTG block reset
    static constexpr uint32_t AHB1RSTR_USB2OTGRST = 0x8000000; // USB2OTG block reset

    static constexpr uint32_t AHB2RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB2RSTR_CAMITFRST = 0x1; // CAMITF block reset
    static constexpr uint32_t AHB2RSTR_AESRST = 0x10; // Cryptography block reset
    static constexpr uint32_t AHB2RSTR_HASHRST = 0x20; // Hash block reset
    static constexpr uint32_t AHB2RSTR_RNGRST = 0x40; // Random Number Generator block reset
    static constexpr uint32_t AHB2RSTR_SDMMC2RST = 0x200; // SDMMC2 and SDMMC2 Delay block reset

    static constexpr uint32_t AHB4RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB4RSTR_GPIOARST = 0x1; // GPIO block reset
    static constexpr uint32_t AHB4RSTR_GPIOBRST = 0x2; // GPIO block reset
    static constexpr uint32_t AHB4RSTR_GPIOCRST = 0x4; // GPIO block reset
    static constexpr uint32_t AHB4RSTR_GPIODRST = 0x8; // GPIO block reset
    static constexpr uint32_t AHB4RSTR_GPIOERST = 0x10; // GPIO block reset
    static constexpr uint32_t AHB4RSTR_GPIOFRST = 0x20; // GPIO block reset
    static constexpr uint32_t AHB4RSTR_GPIOGRST = 0x40; // GPIO block reset
    static constexpr uint32_t AHB4RSTR_GPIOHRST = 0x80; // GPIO block reset
    static constexpr uint32_t AHB4RSTR_GPIOIRST = 0x100; // GPIO block reset
    static constexpr uint32_t AHB4RSTR_GPIOJRST = 0x200; // GPIO block reset
    static constexpr uint32_t AHB4RSTR_GPIOKRST = 0x400; // GPIO block reset
    static constexpr uint32_t AHB4RSTR_CRCRST = 0x80000; // CRC block reset
    static constexpr uint32_t AHB4RSTR_BDMARST = 0x200000; // BDMA block reset
    static constexpr uint32_t AHB4RSTR_ADC3RST = 0x1000000; // ADC3 block reset
    static constexpr uint32_t AHB4RSTR_HSEMRST = 0x2000000; // HSEM block reset

    static constexpr uint32_t APB3RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB3RSTR_LTDCRST = 0x8; // LTDC block reset

    static constexpr uint32_t APB1LRSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1LRSTR_TIM2RST = 0x1; // TIM block reset
    static constexpr uint32_t APB1LRSTR_TIM3RST = 0x2; // TIM block reset
    static constexpr uint32_t APB1LRSTR_TIM4RST = 0x4; // TIM block reset
    static constexpr uint32_t APB1LRSTR_TIM5RST = 0x8; // TIM block reset
    static constexpr uint32_t APB1LRSTR_TIM6RST = 0x10; // TIM block reset
    static constexpr uint32_t APB1LRSTR_TIM7RST = 0x20; // TIM block reset
    static constexpr uint32_t APB1LRSTR_TIM12RST = 0x40; // TIM block reset
    static constexpr uint32_t APB1LRSTR_TIM13RST = 0x80; // TIM block reset
    static constexpr uint32_t APB1LRSTR_TIM14RST = 0x100; // TIM block reset
    static constexpr uint32_t APB1LRSTR_LPTIM1RST = 0x200; // TIM block reset
    static constexpr uint32_t APB1LRSTR_SPI2RST = 0x4000; // SPI2 block reset
    static constexpr uint32_t APB1LRSTR_SPI3RST = 0x8000; // SPI3 block reset
    static constexpr uint32_t APB1LRSTR_SPDIFRXRST = 0x10000; // SPDIFRX block reset
    static constexpr uint32_t APB1LRSTR_USART2RST = 0x20000; // USART2 block reset
    static constexpr uint32_t APB1LRSTR_USART3RST = 0x40000; // USART3 block reset
    static constexpr uint32_t APB1LRSTR_UART4RST = 0x80000; // UART4 block reset
    static constexpr uint32_t APB1LRSTR_UART5RST = 0x100000; // UART5 block reset
    static constexpr uint32_t APB1LRSTR_I2C1RST = 0x200000; // I2C1 block reset
    static constexpr uint32_t APB1LRSTR_I2C2RST = 0x400000; // I2C2 block reset
    static constexpr uint32_t APB1LRSTR_I2C3RST = 0x800000; // I2C3 block reset
    static constexpr uint32_t APB1LRSTR_CECRST = 0x8000000; // HDMI-CEC block reset
    static constexpr uint32_t APB1LRSTR_DAC12RST = 0x20000000; // DAC1 and 2 Blocks Reset
    static constexpr uint32_t APB1LRSTR_USART7RST = 0x40000000; // USART7 block reset
    static constexpr uint32_t APB1LRSTR_USART8RST = 0x80000000; // USART8 block reset

    static constexpr uint32_t APB1HRSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1HRSTR_CRSRST = 0x2; // Clock Recovery System reset
    static constexpr uint32_t APB1HRSTR_SWPRST = 0x4; // SWPMI block reset
    static constexpr uint32_t APB1HRSTR_OPAMPRST = 0x10; // OPAMP block reset
    static constexpr uint32_t APB1HRSTR_MDIOSRST = 0x20; // MDIOS block reset
    static constexpr uint32_t APB1HRSTR_FDCANRST = 0x100; // FDCAN block reset

    static constexpr uint32_t APB2RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2RSTR_TIM1RST = 0x1; // TIM1 block reset
    static constexpr uint32_t APB2RSTR_TIM8RST = 0x2; // TIM8 block reset
    static constexpr uint32_t APB2RSTR_USART1RST = 0x10; // USART1 block reset
    static constexpr uint32_t APB2RSTR_USART6RST = 0x20; // USART6 block reset
    static constexpr uint32_t APB2RSTR_SPI1RST = 0x1000; // SPI1 block reset
    static constexpr uint32_t APB2RSTR_SPI4RST = 0x2000; // SPI4 block reset
    static constexpr uint32_t APB2RSTR_TIM15RST = 0x10000; // TIM15 block reset
    static constexpr uint32_t APB2RSTR_TIM16RST = 0x20000; // TIM16 block reset
    static constexpr uint32_t APB2RSTR_TIM17RST = 0x40000; // TIM17 block reset
    static constexpr uint32_t APB2RSTR_SPI5RST = 0x100000; // SPI5 block reset
    static constexpr uint32_t APB2RSTR_SAI1RST = 0x400000; // SAI1 block reset
    static constexpr uint32_t APB2RSTR_SAI2RST = 0x800000; // SAI2 block reset
    static constexpr uint32_t APB2RSTR_SAI3RST = 0x1000000; // SAI3 block reset
    static constexpr uint32_t APB2RSTR_DFSDM1RST = 0x10000000; // DFSDM1 block reset
    static constexpr uint32_t APB2RSTR_HRTIMRST = 0x20000000; // HRTIM block reset

    static constexpr uint32_t APB4RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB4RSTR_SYSCFGRST = 0x2; // SYSCFG block reset
    static constexpr uint32_t APB4RSTR_LPUART1RST = 0x8; // LPUART1 block reset
    static constexpr uint32_t APB4RSTR_SPI6RST = 0x20; // SPI6 block reset
    static constexpr uint32_t APB4RSTR_I2C4RST = 0x80; // I2C4 block reset
    static constexpr uint32_t APB4RSTR_LPTIM2RST = 0x200; // LPTIM2 block reset
    static constexpr uint32_t APB4RSTR_LPTIM3RST = 0x400; // LPTIM3 block reset
    static constexpr uint32_t APB4RSTR_LPTIM4RST = 0x800; // LPTIM4 block reset
    static constexpr uint32_t APB4RSTR_LPTIM5RST = 0x1000; // LPTIM5 block reset
    static constexpr uint32_t APB4RSTR_COMP12RST = 0x4000; // COMP12 Blocks Reset
    static constexpr uint32_t APB4RSTR_VREFRST = 0x8000; // VREF block reset
    static constexpr uint32_t APB4RSTR_SAI4RST = 0x200000; // SAI4 block reset

    static constexpr uint32_t GCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t GCR_WW1RSC = 0x1; // WWDG1 reset scope control


    static constexpr uint32_t D3AMR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t D3AMR_BDMAAMEN = 0x1; // BDMA and DMAMUX Autonomous mode enable
    static constexpr uint32_t D3AMR_LPUART1AMEN = 0x8; // LPUART1 Autonomous mode enable
    static constexpr uint32_t D3AMR_SPI6AMEN = 0x20; // SPI6 Autonomous mode enable
    static constexpr uint32_t D3AMR_I2C4AMEN = 0x80; // I2C4 Autonomous mode enable
    static constexpr uint32_t D3AMR_LPTIM2AMEN = 0x200; // LPTIM2 Autonomous mode enable
    static constexpr uint32_t D3AMR_LPTIM3AMEN = 0x400; // LPTIM3 Autonomous mode enable
    static constexpr uint32_t D3AMR_LPTIM4AMEN = 0x800; // LPTIM4 Autonomous mode enable
    static constexpr uint32_t D3AMR_LPTIM5AMEN = 0x1000; // LPTIM5 Autonomous mode enable
    static constexpr uint32_t D3AMR_COMP12AMEN = 0x4000; // COMP12 Autonomous mode enable
    static constexpr uint32_t D3AMR_VREFAMEN = 0x8000; // VREF Autonomous mode enable
    static constexpr uint32_t D3AMR_RTCAMEN = 0x10000; // RTC Autonomous mode enable
    static constexpr uint32_t D3AMR_CRCAMEN = 0x80000; // CRC Autonomous mode enable
    static constexpr uint32_t D3AMR_SAI4AMEN = 0x200000; // SAI4 Autonomous mode enable
    static constexpr uint32_t D3AMR_ADC3AMEN = 0x1000000; // ADC3 Autonomous mode enable
    static constexpr uint32_t D3AMR_BKPRAMAMEN = 0x10000000; // Backup RAM Autonomous mode enable
    static constexpr uint32_t D3AMR_SRAM4AMEN = 0x20000000; // SRAM4 Autonomous mode enable


    static constexpr uint32_t RSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RSR_RMVF = 0x10000; // Remove reset flag
    static constexpr uint32_t RSR_CPURSTF = 0x20000; // CPU reset flag
    static constexpr uint32_t RSR_D1RSTF = 0x80000; // D1 domain power switch reset flag
    static constexpr uint32_t RSR_D2RSTF = 0x100000; // D2 domain power switch reset flag
    static constexpr uint32_t RSR_BORRSTF = 0x200000; // BOR reset flag
    static constexpr uint32_t RSR_PINRSTF = 0x400000; // Pin reset flag (NRST)
    static constexpr uint32_t RSR_PORRSTF = 0x800000; // POR/PDR reset flag
    static constexpr uint32_t RSR_SFTRSTF = 0x1000000; // System reset from CPU reset flag
    static constexpr uint32_t RSR_IWDG1RSTF = 0x4000000; // Independent Watchdog reset flag
    static constexpr uint32_t RSR_WWDG1RSTF = 0x10000000; // Window Watchdog reset flag
    static constexpr uint32_t RSR_LPWRRSTF = 0x40000000; // Reset due to illegal D1 DStandby or CPU CStop flag

    static constexpr uint32_t AHB3ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB3ENR_MDMAEN = 0x1; // MDMA Peripheral Clock Enable
    static constexpr uint32_t AHB3ENR_DMA2DEN = 0x10; // DMA2D Peripheral Clock Enable
    static constexpr uint32_t AHB3ENR_JPGDECEN = 0x20; // JPGDEC Peripheral Clock Enable
    static constexpr uint32_t AHB3ENR_FMCEN = 0x1000; // FMC Peripheral Clocks Enable
    static constexpr uint32_t AHB3ENR_QSPIEN = 0x4000; // QUADSPI and QUADSPI Delay Clock Enable
    static constexpr uint32_t AHB3ENR_SDMMC1EN = 0x10000; // SDMMC1 and SDMMC1 Delay Clock Enable

    static constexpr uint32_t AHB1ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB1ENR_DMA1EN = 0x1; // DMA1 Clock Enable
    static constexpr uint32_t AHB1ENR_DMA2EN = 0x2; // DMA2 Clock Enable
    static constexpr uint32_t AHB1ENR_ADC12_COMMONEN = 0x20; // ADC1/2 Peripheral Clocks Enable
    static constexpr uint32_t AHB1ENR_ETH1MACEN = 0x8000; // Ethernet MAC bus interface Clock Enable
    static constexpr uint32_t AHB1ENR_ETH1TXEN = 0x10000; // Ethernet Transmission Clock Enable
    static constexpr uint32_t AHB1ENR_ETH1RXEN = 0x20000; // Ethernet Reception Clock Enable
    static constexpr uint32_t AHB1ENR_USB2OTGHSULPIEN = 0x40000; // Enable USB_PHY2 clocks
    static constexpr uint32_t AHB1ENR_USB1OTGEN = 0x2000000; // USB1OTG Peripheral Clocks Enable
    static constexpr uint32_t AHB1ENR_USB1ULPIEN = 0x4000000; // USB_PHY1 Clocks Enable
    static constexpr uint32_t AHB1ENR_USB2OTGEN = 0x8000000; // USB2OTG Peripheral Clocks Enable
    static constexpr uint32_t AHB1ENR_USB2ULPIEN = 0x10000000; // USB_PHY2 Clocks Enable

    static constexpr uint32_t AHB2ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB2ENR_CAMITFEN = 0x1; // CAMITF peripheral clock enable
    static constexpr uint32_t AHB2ENR_AESEN = 0x10; // CRYPT peripheral clock enable
    static constexpr uint32_t AHB2ENR_HASHEN = 0x20; // HASH peripheral clock enable
    static constexpr uint32_t AHB2ENR_RNGEN = 0x40; // RNG peripheral clocks enable
    static constexpr uint32_t AHB2ENR_SDMMC2EN = 0x200; // SDMMC2 and SDMMC2 delay clock enable
    static constexpr uint32_t AHB2ENR_SRAM1EN = 0x20000000; // SRAM1 block enable
    static constexpr uint32_t AHB2ENR_SRAM2EN = 0x40000000; // SRAM2 block enable
    static constexpr uint32_t AHB2ENR_SRAM3EN = 0x80000000; // SRAM3 block enable

    static constexpr uint32_t AHB4ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB4ENR_GPIOAEN = 0x1; // 0GPIO peripheral clock enable
    static constexpr uint32_t AHB4ENR_GPIOBEN = 0x2; // 0GPIO peripheral clock enable
    static constexpr uint32_t AHB4ENR_GPIOCEN = 0x4; // 0GPIO peripheral clock enable
    static constexpr uint32_t AHB4ENR_GPIODEN = 0x8; // 0GPIO peripheral clock enable
    static constexpr uint32_t AHB4ENR_GPIOEEN = 0x10; // 0GPIO peripheral clock enable
    static constexpr uint32_t AHB4ENR_GPIOFEN = 0x20; // 0GPIO peripheral clock enable
    static constexpr uint32_t AHB4ENR_GPIOGEN = 0x40; // 0GPIO peripheral clock enable
    static constexpr uint32_t AHB4ENR_GPIOHEN = 0x80; // 0GPIO peripheral clock enable
    static constexpr uint32_t AHB4ENR_GPIOIEN = 0x100; // 0GPIO peripheral clock enable
    static constexpr uint32_t AHB4ENR_GPIOJEN = 0x200; // 0GPIO peripheral clock enable
    static constexpr uint32_t AHB4ENR_GPIOKEN = 0x400; // 0GPIO peripheral clock enable
    static constexpr uint32_t AHB4ENR_CRCEN = 0x80000; // CRC peripheral clock enable
    static constexpr uint32_t AHB4ENR_BDMAEN = 0x200000; // BDMA and DMAMUX2 Clock Enable
    static constexpr uint32_t AHB4ENR_ADC3EN = 0x1000000; // ADC3 Peripheral Clocks Enable
    static constexpr uint32_t AHB4ENR_HSEMEN = 0x2000000; // HSEM peripheral clock enable
    static constexpr uint32_t AHB4ENR_BKPRAMEN = 0x10000000; // Backup RAM Clock Enable

    static constexpr uint32_t APB3ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB3ENR_LTDCEN = 0x8; // LTDC peripheral clock enable
    static constexpr uint32_t APB3ENR_WWDG1EN = 0x40; // WWDG1 Clock Enable

    static constexpr uint32_t APB1LENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1LENR_TIM2EN = 0x1; // TIM peripheral clock enable
    static constexpr uint32_t APB1LENR_TIM3EN = 0x2; // TIM peripheral clock enable
    static constexpr uint32_t APB1LENR_TIM4EN = 0x4; // TIM peripheral clock enable
    static constexpr uint32_t APB1LENR_TIM5EN = 0x8; // TIM peripheral clock enable
    static constexpr uint32_t APB1LENR_TIM6EN = 0x10; // TIM peripheral clock enable
    static constexpr uint32_t APB1LENR_TIM7EN = 0x20; // TIM peripheral clock enable
    static constexpr uint32_t APB1LENR_TIM12EN = 0x40; // TIM peripheral clock enable
    static constexpr uint32_t APB1LENR_TIM13EN = 0x80; // TIM peripheral clock enable
    static constexpr uint32_t APB1LENR_TIM14EN = 0x100; // TIM peripheral clock enable
    static constexpr uint32_t APB1LENR_LPTIM1EN = 0x200; // LPTIM1 Peripheral Clocks Enable
    static constexpr uint32_t APB1LENR_SPI2EN = 0x4000; // SPI2 Peripheral Clocks Enable
    static constexpr uint32_t APB1LENR_SPI3EN = 0x8000; // SPI3 Peripheral Clocks Enable
    static constexpr uint32_t APB1LENR_SPDIFRXEN = 0x10000; // SPDIFRX Peripheral Clocks Enable
    static constexpr uint32_t APB1LENR_USART2EN = 0x20000; // USART2 Peripheral Clocks Enable
    static constexpr uint32_t APB1LENR_USART3EN = 0x40000; // USART3 Peripheral Clocks Enable
    static constexpr uint32_t APB1LENR_UART4EN = 0x80000; // UART4 Peripheral Clocks Enable
    static constexpr uint32_t APB1LENR_UART5EN = 0x100000; // UART5 Peripheral Clocks Enable
    static constexpr uint32_t APB1LENR_I2C1EN = 0x200000; // I2C1 Peripheral Clocks Enable
    static constexpr uint32_t APB1LENR_I2C2EN = 0x400000; // I2C2 Peripheral Clocks Enable
    static constexpr uint32_t APB1LENR_I2C3EN = 0x800000; // I2C3 Peripheral Clocks Enable
    static constexpr uint32_t APB1LENR_CECEN = 0x8000000; // HDMI-CEC peripheral clock enable
    static constexpr uint32_t APB1LENR_DAC12EN = 0x20000000; // DAC1&amp;2 peripheral clock enable
    static constexpr uint32_t APB1LENR_USART7EN = 0x40000000; // USART7 Peripheral Clocks Enable
    static constexpr uint32_t APB1LENR_USART8EN = 0x80000000; // USART8 Peripheral Clocks Enable

    static constexpr uint32_t APB1HENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1HENR_CRSEN = 0x2; // Clock Recovery System peripheral clock enable
    static constexpr uint32_t APB1HENR_SWPEN = 0x4; // SWPMI Peripheral Clocks Enable
    static constexpr uint32_t APB1HENR_OPAMPEN = 0x10; // OPAMP peripheral clock enable
    static constexpr uint32_t APB1HENR_MDIOSEN = 0x20; // MDIOS peripheral clock enable
    static constexpr uint32_t APB1HENR_FDCANEN = 0x100; // FDCAN Peripheral Clocks Enable

    static constexpr uint32_t APB2ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2ENR_TIM1EN = 0x1; // TIM1 peripheral clock enable
    static constexpr uint32_t APB2ENR_TIM8EN = 0x2; // TIM8 peripheral clock enable
    static constexpr uint32_t APB2ENR_USART1EN = 0x10; // USART1 Peripheral Clocks Enable
    static constexpr uint32_t APB2ENR_USART6EN = 0x20; // USART6 Peripheral Clocks Enable
    static constexpr uint32_t APB2ENR_SPI1EN = 0x1000; // SPI1 Peripheral Clocks Enable
    static constexpr uint32_t APB2ENR_SPI4EN = 0x2000; // SPI4 Peripheral Clocks Enable
    static constexpr uint32_t APB2ENR_TIM16EN = 0x20000; // TIM16 peripheral clock enable
    static constexpr uint32_t APB2ENR_TIM15EN = 0x10000; // TIM15 peripheral clock enable
    static constexpr uint32_t APB2ENR_TIM17EN = 0x40000; // TIM17 peripheral clock enable
    static constexpr uint32_t APB2ENR_SPI5EN = 0x100000; // SPI5 Peripheral Clocks Enable
    static constexpr uint32_t APB2ENR_SAI1EN = 0x400000; // SAI1 Peripheral Clocks Enable
    static constexpr uint32_t APB2ENR_SAI2EN = 0x800000; // SAI2 Peripheral Clocks Enable
    static constexpr uint32_t APB2ENR_SAI3EN = 0x1000000; // SAI3 Peripheral Clocks Enable
    static constexpr uint32_t APB2ENR_DFSDM1EN = 0x10000000; // DFSDM1 Peripheral Clocks Enable
    static constexpr uint32_t APB2ENR_HRTIMEN = 0x20000000; // HRTIM peripheral clock enable

    static constexpr uint32_t APB4ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB4ENR_SYSCFGEN = 0x2; // SYSCFG peripheral clock enable
    static constexpr uint32_t APB4ENR_LPUART1EN = 0x8; // LPUART1 Peripheral Clocks Enable
    static constexpr uint32_t APB4ENR_SPI6EN = 0x20; // SPI6 Peripheral Clocks Enable
    static constexpr uint32_t APB4ENR_I2C4EN = 0x80; // I2C4 Peripheral Clocks Enable
    static constexpr uint32_t APB4ENR_LPTIM2EN = 0x200; // LPTIM2 Peripheral Clocks Enable
    static constexpr uint32_t APB4ENR_LPTIM3EN = 0x400; // LPTIM3 Peripheral Clocks Enable
    static constexpr uint32_t APB4ENR_LPTIM4EN = 0x800; // LPTIM4 Peripheral Clocks Enable
    static constexpr uint32_t APB4ENR_LPTIM5EN = 0x1000; // LPTIM5 Peripheral Clocks Enable
    static constexpr uint32_t APB4ENR_COMP12EN = 0x4000; // COMP1/2 peripheral clock enable
    static constexpr uint32_t APB4ENR_VREFEN = 0x8000; // VREF peripheral clock enable
    static constexpr uint32_t APB4ENR_RTCAPBEN = 0x10000; // RTC APB Clock Enable
    static constexpr uint32_t APB4ENR_SAI4EN = 0x200000; // SAI4 Peripheral Clocks Enable


    static constexpr uint32_t AHB3LPENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB3LPENR_MDMALPEN = 0x1; // MDMA Clock Enable During CSleep Mode
    static constexpr uint32_t AHB3LPENR_DMA2DLPEN = 0x10; // DMA2D Clock Enable During CSleep Mode
    static constexpr uint32_t AHB3LPENR_JPGDECLPEN = 0x20; // JPGDEC Clock Enable During CSleep Mode
    static constexpr uint32_t AHB3LPENR_FLASHLPEN = 0x100; // FLITF Clock Enable During CSleep Mode
    static constexpr uint32_t AHB3LPENR_FMCLPEN = 0x1000; // FMC Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t AHB3LPENR_QSPILPEN = 0x4000; // QUADSPI and QUADSPI Delay Clock Enable During CSleep Mode
    static constexpr uint32_t AHB3LPENR_SDMMC1LPEN = 0x10000; // SDMMC1 and SDMMC1 Delay Clock Enable During CSleep Mode
    static constexpr uint32_t AHB3LPENR_D1DTCM1LPEN = 0x10000000; // D1DTCM1 Block Clock Enable During CSleep mode
    static constexpr uint32_t AHB3LPENR_DTCM2LPEN = 0x20000000; // D1 DTCM2 Block Clock Enable During CSleep mode
    static constexpr uint32_t AHB3LPENR_ITCMLPEN = 0x40000000; // D1ITCM Block Clock Enable During CSleep mode
    static constexpr uint32_t AHB3LPENR_AXISRAMLPEN = 0x80000000; // AXISRAM Block Clock Enable During CSleep mode

    static constexpr uint32_t AHB1LPENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB1LPENR_DMA1LPEN = 0x1; // DMA1 Clock Enable During CSleep Mode
    static constexpr uint32_t AHB1LPENR_DMA2LPEN = 0x2; // DMA2 Clock Enable During CSleep Mode
    static constexpr uint32_t AHB1LPENR_ADC12LPEN = 0x20; // ADC1/2 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t AHB1LPENR_ETH1MACLPEN = 0x8000; // Ethernet MAC bus interface Clock Enable During CSleep Mode
    static constexpr uint32_t AHB1LPENR_ETH1TXLPEN = 0x10000; // Ethernet Transmission Clock Enable During CSleep Mode
    static constexpr uint32_t AHB1LPENR_ETH1RXLPEN = 0x20000; // Ethernet Reception Clock Enable During CSleep Mode
    static constexpr uint32_t AHB1LPENR_USB1OTGHSLPEN = 0x2000000; // USB1OTG peripheral clock enable during CSleep mode
    static constexpr uint32_t AHB1LPENR_USB1OTGHSULPILPEN = 0x4000000; // USB_PHY1 clock enable during CSleep mode
    static constexpr uint32_t AHB1LPENR_USB2OTGHSLPEN = 0x8000000; // USB2OTG peripheral clock enable during CSleep mode
    static constexpr uint32_t AHB1LPENR_USB2OTGHSULPILPEN = 0x10000000; // USB_PHY2 clocks enable during CSleep mode

    static constexpr uint32_t AHB2LPENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB2LPENR_CAMITFLPEN = 0x1; // CAMITF peripheral clock enable during CSleep mode
    static constexpr uint32_t AHB2LPENR_CRYPTLPEN = 0x10; // CRYPT peripheral clock enable during CSleep mode
    static constexpr uint32_t AHB2LPENR_HASHLPEN = 0x20; // HASH peripheral clock enable during CSleep mode
    static constexpr uint32_t AHB2LPENR_SDMMC2LPEN = 0x200; // SDMMC2 and SDMMC2 Delay Clock Enable During CSleep Mode
    static constexpr uint32_t AHB2LPENR_RNGLPEN = 0x40; // RNG peripheral clock enable during CSleep mode
    static constexpr uint32_t AHB2LPENR_SRAM1LPEN = 0x20000000; // SRAM1 Clock Enable During CSleep Mode
    static constexpr uint32_t AHB2LPENR_SRAM2LPEN = 0x40000000; // SRAM2 Clock Enable During CSleep Mode
    static constexpr uint32_t AHB2LPENR_SRAM3LPEN = 0x80000000; // SRAM3 Clock Enable During CSleep Mode

    static constexpr uint32_t AHB4LPENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB4LPENR_GPIOALPEN = 0x1; // GPIO peripheral clock enable during CSleep mode
    static constexpr uint32_t AHB4LPENR_GPIOBLPEN = 0x2; // GPIO peripheral clock enable during CSleep mode
    static constexpr uint32_t AHB4LPENR_GPIOCLPEN = 0x4; // GPIO peripheral clock enable during CSleep mode
    static constexpr uint32_t AHB4LPENR_GPIODLPEN = 0x8; // GPIO peripheral clock enable during CSleep mode
    static constexpr uint32_t AHB4LPENR_GPIOELPEN = 0x10; // GPIO peripheral clock enable during CSleep mode
    static constexpr uint32_t AHB4LPENR_GPIOFLPEN = 0x20; // GPIO peripheral clock enable during CSleep mode
    static constexpr uint32_t AHB4LPENR_GPIOGLPEN = 0x40; // GPIO peripheral clock enable during CSleep mode
    static constexpr uint32_t AHB4LPENR_GPIOHLPEN = 0x80; // GPIO peripheral clock enable during CSleep mode
    static constexpr uint32_t AHB4LPENR_GPIOILPEN = 0x100; // GPIO peripheral clock enable during CSleep mode
    static constexpr uint32_t AHB4LPENR_GPIOJLPEN = 0x200; // GPIO peripheral clock enable during CSleep mode
    static constexpr uint32_t AHB4LPENR_GPIOKLPEN = 0x400; // GPIO peripheral clock enable during CSleep mode
    static constexpr uint32_t AHB4LPENR_CRCLPEN = 0x80000; // CRC peripheral clock enable during CSleep mode
    static constexpr uint32_t AHB4LPENR_BDMALPEN = 0x200000; // BDMA Clock Enable During CSleep Mode
    static constexpr uint32_t AHB4LPENR_ADC3LPEN = 0x1000000; // ADC3 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t AHB4LPENR_BKPRAMLPEN = 0x10000000; // Backup RAM Clock Enable During CSleep Mode
    static constexpr uint32_t AHB4LPENR_SRAM4LPEN = 0x20000000; // SRAM4 Clock Enable During CSleep Mode

    static constexpr uint32_t APB3LPENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB3LPENR_LTDCLPEN = 0x8; // LTDC peripheral clock enable during CSleep mode
    static constexpr uint32_t APB3LPENR_WWDG1LPEN = 0x40; // WWDG1 Clock Enable During CSleep Mode

    static constexpr uint32_t APB1LLPENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1LLPENR_TIM2LPEN = 0x1; // TIM2 peripheral clock enable during CSleep mode
    static constexpr uint32_t APB1LLPENR_TIM3LPEN = 0x2; // TIM3 peripheral clock enable during CSleep mode
    static constexpr uint32_t APB1LLPENR_TIM4LPEN = 0x4; // TIM4 peripheral clock enable during CSleep mode
    static constexpr uint32_t APB1LLPENR_TIM5LPEN = 0x8; // TIM5 peripheral clock enable during CSleep mode
    static constexpr uint32_t APB1LLPENR_TIM6LPEN = 0x10; // TIM6 peripheral clock enable during CSleep mode
    static constexpr uint32_t APB1LLPENR_TIM7LPEN = 0x20; // TIM7 peripheral clock enable during CSleep mode
    static constexpr uint32_t APB1LLPENR_TIM12LPEN = 0x40; // TIM12 peripheral clock enable during CSleep mode
    static constexpr uint32_t APB1LLPENR_TIM13LPEN = 0x80; // TIM13 peripheral clock enable during CSleep mode
    static constexpr uint32_t APB1LLPENR_TIM14LPEN = 0x100; // TIM14 peripheral clock enable during CSleep mode
    static constexpr uint32_t APB1LLPENR_LPTIM1LPEN = 0x200; // LPTIM1 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t APB1LLPENR_SPI2LPEN = 0x4000; // SPI2 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t APB1LLPENR_SPI3LPEN = 0x8000; // SPI3 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t APB1LLPENR_SPDIFRXLPEN = 0x10000; // SPDIFRX Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t APB1LLPENR_USART2LPEN = 0x20000; // USART2 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t APB1LLPENR_USART3LPEN = 0x40000; // USART3 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t APB1LLPENR_UART4LPEN = 0x80000; // UART4 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t APB1LLPENR_UART5LPEN = 0x100000; // UART5 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t APB1LLPENR_I2C1LPEN = 0x200000; // I2C1 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t APB1LLPENR_I2C2LPEN = 0x400000; // I2C2 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t APB1LLPENR_I2C3LPEN = 0x800000; // I2C3 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t APB1LLPENR_HDMICECLPEN = 0x8000000; // HDMI-CEC Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t APB1LLPENR_DAC12LPEN = 0x20000000; // DAC1/2 peripheral clock enable during CSleep mode
    static constexpr uint32_t APB1LLPENR_USART7LPEN = 0x40000000; // USART7 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t APB1LLPENR_USART8LPEN = 0x80000000; // USART8 Peripheral Clocks Enable During CSleep Mode

    static constexpr uint32_t APB1HLPENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1HLPENR_CRSLPEN = 0x2; // Clock Recovery System peripheral clock enable during CSleep mode
    static constexpr uint32_t APB1HLPENR_SWPLPEN = 0x4; // SWPMI Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t APB1HLPENR_OPAMPLPEN = 0x10; // OPAMP peripheral clock enable during CSleep mode
    static constexpr uint32_t APB1HLPENR_MDIOSLPEN = 0x20; // MDIOS peripheral clock enable during CSleep mode
    static constexpr uint32_t APB1HLPENR_FDCANLPEN = 0x100; // FDCAN Peripheral Clocks Enable During CSleep Mode

    static constexpr uint32_t APB2LPENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2LPENR_TIM1LPEN = 0x1; // TIM1 peripheral clock enable during CSleep mode
    static constexpr uint32_t APB2LPENR_TIM8LPEN = 0x2; // TIM8 peripheral clock enable during CSleep mode
    static constexpr uint32_t APB2LPENR_USART1LPEN = 0x10; // USART1 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t APB2LPENR_USART6LPEN = 0x20; // USART6 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t APB2LPENR_SPI1LPEN = 0x1000; // SPI1 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t APB2LPENR_SPI4LPEN = 0x2000; // SPI4 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t APB2LPENR_TIM15LPEN = 0x10000; // TIM15 peripheral clock enable during CSleep mode
    static constexpr uint32_t APB2LPENR_TIM16LPEN = 0x20000; // TIM16 peripheral clock enable during CSleep mode
    static constexpr uint32_t APB2LPENR_TIM17LPEN = 0x40000; // TIM17 peripheral clock enable during CSleep mode
    static constexpr uint32_t APB2LPENR_SPI5LPEN = 0x100000; // SPI5 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t APB2LPENR_SAI1LPEN = 0x400000; // SAI1 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t APB2LPENR_SAI2LPEN = 0x800000; // SAI2 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t APB2LPENR_SAI3LPEN = 0x1000000; // SAI3 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t APB2LPENR_DFSDM1LPEN = 0x10000000; // DFSDM1 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t APB2LPENR_HRTIMLPEN = 0x20000000; // HRTIM peripheral clock enable during CSleep mode

    static constexpr uint32_t APB4LPENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB4LPENR_SYSCFGLPEN = 0x2; // SYSCFG peripheral clock enable during CSleep mode
    static constexpr uint32_t APB4LPENR_LPUART1LPEN = 0x8; // LPUART1 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t APB4LPENR_SPI6LPEN = 0x20; // SPI6 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t APB4LPENR_I2C4LPEN = 0x80; // I2C4 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t APB4LPENR_LPTIM2LPEN = 0x200; // LPTIM2 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t APB4LPENR_LPTIM3LPEN = 0x400; // LPTIM3 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t APB4LPENR_LPTIM4LPEN = 0x800; // LPTIM4 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t APB4LPENR_LPTIM5LPEN = 0x1000; // LPTIM5 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t APB4LPENR_COMP12LPEN = 0x4000; // COMP1/2 peripheral clock enable during CSleep mode
    static constexpr uint32_t APB4LPENR_VREFLPEN = 0x8000; // VREF peripheral clock enable during CSleep mode
    static constexpr uint32_t APB4LPENR_RTCAPBLPEN = 0x10000; // RTC APB Clock Enable During CSleep Mode
    static constexpr uint32_t APB4LPENR_SAI4LPEN = 0x200000; // SAI4 Peripheral Clocks Enable During CSleep Mode


    static constexpr uint32_t C1_RSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1_RSR_RMVF = 0x10000; // Remove reset flag
    static constexpr uint32_t C1_RSR_CPURSTF = 0x20000; // CPU reset flag
    static constexpr uint32_t C1_RSR_D1RSTF = 0x80000; // D1 domain power switch reset flag
    static constexpr uint32_t C1_RSR_D2RSTF = 0x100000; // D2 domain power switch reset flag
    static constexpr uint32_t C1_RSR_BORRSTF = 0x200000; // BOR reset flag
    static constexpr uint32_t C1_RSR_PINRSTF = 0x400000; // Pin reset flag (NRST)
    static constexpr uint32_t C1_RSR_PORRSTF = 0x800000; // POR/PDR reset flag
    static constexpr uint32_t C1_RSR_SFTRSTF = 0x1000000; // System reset from CPU reset flag
    static constexpr uint32_t C1_RSR_IWDG1RSTF = 0x4000000; // Independent Watchdog reset flag
    static constexpr uint32_t C1_RSR_WWDG1RSTF = 0x10000000; // Window Watchdog reset flag
    static constexpr uint32_t C1_RSR_LPWRRSTF = 0x40000000; // Reset due to illegal D1 DStandby or CPU CStop flag

    static constexpr uint32_t C1_AHB3ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1_AHB3ENR_MDMAEN = 0x1; // MDMA Peripheral Clock Enable
    static constexpr uint32_t C1_AHB3ENR_DMA2DEN = 0x10; // DMA2D Peripheral Clock Enable
    static constexpr uint32_t C1_AHB3ENR_JPGDECEN = 0x20; // JPGDEC Peripheral Clock Enable
    static constexpr uint32_t C1_AHB3ENR_FMCEN = 0x1000; // FMC Peripheral Clocks Enable
    static constexpr uint32_t C1_AHB3ENR_QSPIEN = 0x4000; // QUADSPI and QUADSPI Delay Clock Enable
    static constexpr uint32_t C1_AHB3ENR_SDMMC1EN = 0x10000; // SDMMC1 and SDMMC1 Delay Clock Enable

    static constexpr uint32_t C1_AHB1ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1_AHB1ENR_DMA1EN = 0x1; // DMA1 Clock Enable
    static constexpr uint32_t C1_AHB1ENR_DMA2EN = 0x2; // DMA2 Clock Enable
    static constexpr uint32_t C1_AHB1ENR_ADC12_COMMONEN = 0x20; // ADC1/2 Peripheral Clocks Enable
    static constexpr uint32_t C1_AHB1ENR_ETH1MACEN = 0x8000; // Ethernet MAC bus interface Clock Enable
    static constexpr uint32_t C1_AHB1ENR_ETH1TXEN = 0x10000; // Ethernet Transmission Clock Enable
    static constexpr uint32_t C1_AHB1ENR_ETH1RXEN = 0x20000; // Ethernet Reception Clock Enable
    static constexpr uint32_t C1_AHB1ENR_USB1OTGEN = 0x2000000; // USB1OTG Peripheral Clocks Enable
    static constexpr uint32_t C1_AHB1ENR_USB1ULPIEN = 0x4000000; // USB_PHY1 Clocks Enable
    static constexpr uint32_t C1_AHB1ENR_USB2OTGEN = 0x8000000; // USB2OTG Peripheral Clocks Enable
    static constexpr uint32_t C1_AHB1ENR_USB2ULPIEN = 0x10000000; // USB_PHY2 Clocks Enable

    static constexpr uint32_t C1_AHB2ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1_AHB2ENR_CAMITFEN = 0x1; // CAMITF peripheral clock enable
    static constexpr uint32_t C1_AHB2ENR_AESEN = 0x10; // CRYPT peripheral clock enable
    static constexpr uint32_t C1_AHB2ENR_HASHEN = 0x20; // HASH peripheral clock enable
    static constexpr uint32_t C1_AHB2ENR_RNGEN = 0x40; // RNG peripheral clocks enable
    static constexpr uint32_t C1_AHB2ENR_SDMMC2EN = 0x200; // SDMMC2 and SDMMC2 delay clock enable
    static constexpr uint32_t C1_AHB2ENR_SRAM1EN = 0x20000000; // SRAM1 block enable
    static constexpr uint32_t C1_AHB2ENR_SRAM2EN = 0x40000000; // SRAM2 block enable
    static constexpr uint32_t C1_AHB2ENR_SRAM3EN = 0x80000000; // SRAM3 block enable

    static constexpr uint32_t C1_AHB4ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1_AHB4ENR_GPIOAEN = 0x1; // 0GPIO peripheral clock enable
    static constexpr uint32_t C1_AHB4ENR_GPIOBEN = 0x2; // 0GPIO peripheral clock enable
    static constexpr uint32_t C1_AHB4ENR_GPIOCEN = 0x4; // 0GPIO peripheral clock enable
    static constexpr uint32_t C1_AHB4ENR_GPIODEN = 0x8; // 0GPIO peripheral clock enable
    static constexpr uint32_t C1_AHB4ENR_GPIOEEN = 0x10; // 0GPIO peripheral clock enable
    static constexpr uint32_t C1_AHB4ENR_GPIOFEN = 0x20; // 0GPIO peripheral clock enable
    static constexpr uint32_t C1_AHB4ENR_GPIOGEN = 0x40; // 0GPIO peripheral clock enable
    static constexpr uint32_t C1_AHB4ENR_GPIOHEN = 0x80; // 0GPIO peripheral clock enable
    static constexpr uint32_t C1_AHB4ENR_GPIOIEN = 0x100; // 0GPIO peripheral clock enable
    static constexpr uint32_t C1_AHB4ENR_GPIOJEN = 0x200; // 0GPIO peripheral clock enable
    static constexpr uint32_t C1_AHB4ENR_GPIOKEN = 0x400; // 0GPIO peripheral clock enable
    static constexpr uint32_t C1_AHB4ENR_CRCEN = 0x80000; // CRC peripheral clock enable
    static constexpr uint32_t C1_AHB4ENR_BDMAEN = 0x200000; // BDMA and DMAMUX2 Clock Enable
    static constexpr uint32_t C1_AHB4ENR_ADC3EN = 0x1000000; // ADC3 Peripheral Clocks Enable
    static constexpr uint32_t C1_AHB4ENR_HSEMEN = 0x2000000; // HSEM peripheral clock enable
    static constexpr uint32_t C1_AHB4ENR_BKPRAMEN = 0x10000000; // Backup RAM Clock Enable

    static constexpr uint32_t C1_APB3ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1_APB3ENR_LTDCEN = 0x8; // LTDC peripheral clock enable
    static constexpr uint32_t C1_APB3ENR_WWDG1EN = 0x40; // WWDG1 Clock Enable

    static constexpr uint32_t C1_APB1LENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1_APB1LENR_TIM2EN = 0x1; // TIM peripheral clock enable
    static constexpr uint32_t C1_APB1LENR_TIM3EN = 0x2; // TIM peripheral clock enable
    static constexpr uint32_t C1_APB1LENR_TIM4EN = 0x4; // TIM peripheral clock enable
    static constexpr uint32_t C1_APB1LENR_TIM5EN = 0x8; // TIM peripheral clock enable
    static constexpr uint32_t C1_APB1LENR_TIM6EN = 0x10; // TIM peripheral clock enable
    static constexpr uint32_t C1_APB1LENR_TIM7EN = 0x20; // TIM peripheral clock enable
    static constexpr uint32_t C1_APB1LENR_TIM12EN = 0x40; // TIM peripheral clock enable
    static constexpr uint32_t C1_APB1LENR_TIM13EN = 0x80; // TIM peripheral clock enable
    static constexpr uint32_t C1_APB1LENR_TIM14EN = 0x100; // TIM peripheral clock enable
    static constexpr uint32_t C1_APB1LENR_LPTIM1EN = 0x200; // LPTIM1 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB1LENR_SPI2EN = 0x4000; // SPI2 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB1LENR_SPI3EN = 0x8000; // SPI3 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB1LENR_SPDIFRXEN = 0x10000; // SPDIFRX Peripheral Clocks Enable
    static constexpr uint32_t C1_APB1LENR_USART2EN = 0x20000; // USART2 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB1LENR_USART3EN = 0x40000; // USART3 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB1LENR_UART4EN = 0x80000; // UART4 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB1LENR_UART5EN = 0x100000; // UART5 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB1LENR_I2C1EN = 0x200000; // I2C1 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB1LENR_I2C2EN = 0x400000; // I2C2 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB1LENR_I2C3EN = 0x800000; // I2C3 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB1LENR_HDMICECEN = 0x8000000; // HDMI-CEC peripheral clock enable
    static constexpr uint32_t C1_APB1LENR_DAC12EN = 0x20000000; // DAC1&amp;2 peripheral clock enable
    static constexpr uint32_t C1_APB1LENR_USART7EN = 0x40000000; // USART7 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB1LENR_USART8EN = 0x80000000; // USART8 Peripheral Clocks Enable

    static constexpr uint32_t C1_APB1HENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1_APB1HENR_CRSEN = 0x2; // Clock Recovery System peripheral clock enable
    static constexpr uint32_t C1_APB1HENR_SWPEN = 0x4; // SWPMI Peripheral Clocks Enable
    static constexpr uint32_t C1_APB1HENR_OPAMPEN = 0x10; // OPAMP peripheral clock enable
    static constexpr uint32_t C1_APB1HENR_MDIOSEN = 0x20; // MDIOS peripheral clock enable
    static constexpr uint32_t C1_APB1HENR_FDCANEN = 0x100; // FDCAN Peripheral Clocks Enable

    static constexpr uint32_t C1_APB2ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1_APB2ENR_TIM1EN = 0x1; // TIM1 peripheral clock enable
    static constexpr uint32_t C1_APB2ENR_TIM8EN = 0x2; // TIM8 peripheral clock enable
    static constexpr uint32_t C1_APB2ENR_USART1EN = 0x10; // USART1 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB2ENR_USART6EN = 0x20; // USART6 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB2ENR_SPI1EN = 0x1000; // SPI1 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB2ENR_SPI4EN = 0x2000; // SPI4 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB2ENR_TIM16EN = 0x20000; // TIM16 peripheral clock enable
    static constexpr uint32_t C1_APB2ENR_TIM15EN = 0x10000; // TIM15 peripheral clock enable
    static constexpr uint32_t C1_APB2ENR_TIM17EN = 0x40000; // TIM17 peripheral clock enable
    static constexpr uint32_t C1_APB2ENR_SPI5EN = 0x100000; // SPI5 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB2ENR_SAI1EN = 0x400000; // SAI1 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB2ENR_SAI2EN = 0x800000; // SAI2 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB2ENR_SAI3EN = 0x1000000; // SAI3 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB2ENR_DFSDM1EN = 0x10000000; // DFSDM1 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB2ENR_HRTIMEN = 0x20000000; // HRTIM peripheral clock enable

    static constexpr uint32_t C1_APB4ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1_APB4ENR_SYSCFGEN = 0x2; // SYSCFG peripheral clock enable
    static constexpr uint32_t C1_APB4ENR_LPUART1EN = 0x8; // LPUART1 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB4ENR_SPI6EN = 0x20; // SPI6 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB4ENR_I2C4EN = 0x80; // I2C4 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB4ENR_LPTIM2EN = 0x200; // LPTIM2 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB4ENR_LPTIM3EN = 0x400; // LPTIM3 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB4ENR_LPTIM4EN = 0x800; // LPTIM4 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB4ENR_LPTIM5EN = 0x1000; // LPTIM5 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB4ENR_COMP12EN = 0x4000; // COMP1/2 peripheral clock enable
    static constexpr uint32_t C1_APB4ENR_VREFEN = 0x8000; // VREF peripheral clock enable
    static constexpr uint32_t C1_APB4ENR_RTCAPBEN = 0x10000; // RTC APB Clock Enable
    static constexpr uint32_t C1_APB4ENR_SAI4EN = 0x200000; // SAI4 Peripheral Clocks Enable


    static constexpr uint32_t C1_AHB3LPENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1_AHB3LPENR_MDMALPEN = 0x1; // MDMA Clock Enable During CSleep Mode
    static constexpr uint32_t C1_AHB3LPENR_DMA2DLPEN = 0x10; // DMA2D Clock Enable During CSleep Mode
    static constexpr uint32_t C1_AHB3LPENR_JPGDECLPEN = 0x20; // JPGDEC Clock Enable During CSleep Mode
    static constexpr uint32_t C1_AHB3LPENR_FLITFLPEN = 0x100; // FLITF Clock Enable During CSleep Mode
    static constexpr uint32_t C1_AHB3LPENR_FMCLPEN = 0x1000; // FMC Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_AHB3LPENR_QSPILPEN = 0x4000; // QUADSPI and QUADSPI Delay Clock Enable During CSleep Mode
    static constexpr uint32_t C1_AHB3LPENR_SDMMC1LPEN = 0x10000; // SDMMC1 and SDMMC1 Delay Clock Enable During CSleep Mode
    static constexpr uint32_t C1_AHB3LPENR_D1DTCM1LPEN = 0x10000000; // D1DTCM1 Block Clock Enable During CSleep mode
    static constexpr uint32_t C1_AHB3LPENR_DTCM2LPEN = 0x20000000; // D1 DTCM2 Block Clock Enable During CSleep mode
    static constexpr uint32_t C1_AHB3LPENR_ITCMLPEN = 0x40000000; // D1ITCM Block Clock Enable During CSleep mode
    static constexpr uint32_t C1_AHB3LPENR_AXISRAMLPEN = 0x80000000; // AXISRAM Block Clock Enable During CSleep mode

    static constexpr uint32_t C1_AHB1LPENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1_AHB1LPENR_DMA1LPEN = 0x1; // DMA1 Clock Enable During CSleep Mode
    static constexpr uint32_t C1_AHB1LPENR_DMA2LPEN = 0x2; // DMA2 Clock Enable During CSleep Mode
    static constexpr uint32_t C1_AHB1LPENR_ADC12LPEN = 0x20; // ADC1/2 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_AHB1LPENR_ETH1MACLPEN = 0x8000; // Ethernet MAC bus interface Clock Enable During CSleep Mode
    static constexpr uint32_t C1_AHB1LPENR_ETH1TXLPEN = 0x10000; // Ethernet Transmission Clock Enable During CSleep Mode
    static constexpr uint32_t C1_AHB1LPENR_ETH1RXLPEN = 0x20000; // Ethernet Reception Clock Enable During CSleep Mode
    static constexpr uint32_t C1_AHB1LPENR_USB1OTGLPEN = 0x2000000; // USB1OTG peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_AHB1LPENR_USB1ULPILPEN = 0x4000000; // USB_PHY1 clock enable during CSleep mode
    static constexpr uint32_t C1_AHB1LPENR_USB2OTGLPEN = 0x8000000; // USB2OTG peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_AHB1LPENR_USB2ULPILPEN = 0x10000000; // USB_PHY2 clocks enable during CSleep mode

    static constexpr uint32_t C1_AHB2LPENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1_AHB2LPENR_CAMITFLPEN = 0x1; // CAMITF peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_AHB2LPENR_CRYPTLPEN = 0x10; // CRYPT peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_AHB2LPENR_HASHLPEN = 0x20; // HASH peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_AHB2LPENR_SDMMC2LPEN = 0x200; // SDMMC2 and SDMMC2 Delay Clock Enable During CSleep Mode
    static constexpr uint32_t C1_AHB2LPENR_RNGLPEN = 0x40; // RNG peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_AHB2LPENR_SRAM1LPEN = 0x20000000; // SRAM1 Clock Enable During CSleep Mode
    static constexpr uint32_t C1_AHB2LPENR_SRAM2LPEN = 0x40000000; // SRAM2 Clock Enable During CSleep Mode
    static constexpr uint32_t C1_AHB2LPENR_SRAM3LPEN = 0x80000000; // SRAM3 Clock Enable During CSleep Mode

    static constexpr uint32_t C1_AHB4LPENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1_AHB4LPENR_GPIOALPEN = 0x1; // GPIO peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_AHB4LPENR_GPIOBLPEN = 0x2; // GPIO peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_AHB4LPENR_GPIOCLPEN = 0x4; // GPIO peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_AHB4LPENR_GPIODLPEN = 0x8; // GPIO peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_AHB4LPENR_GPIOELPEN = 0x10; // GPIO peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_AHB4LPENR_GPIOFLPEN = 0x20; // GPIO peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_AHB4LPENR_GPIOGLPEN = 0x40; // GPIO peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_AHB4LPENR_GPIOHLPEN = 0x80; // GPIO peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_AHB4LPENR_GPIOILPEN = 0x100; // GPIO peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_AHB4LPENR_GPIOJLPEN = 0x200; // GPIO peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_AHB4LPENR_GPIOKLPEN = 0x400; // GPIO peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_AHB4LPENR_CRCLPEN = 0x80000; // CRC peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_AHB4LPENR_BDMALPEN = 0x200000; // BDMA Clock Enable During CSleep Mode
    static constexpr uint32_t C1_AHB4LPENR_ADC3LPEN = 0x1000000; // ADC3 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_AHB4LPENR_BKPRAMLPEN = 0x10000000; // Backup RAM Clock Enable During CSleep Mode
    static constexpr uint32_t C1_AHB4LPENR_SRAM4LPEN = 0x20000000; // SRAM4 Clock Enable During CSleep Mode

    static constexpr uint32_t C1_APB3LPENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1_APB3LPENR_LTDCLPEN = 0x8; // LTDC peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB3LPENR_WWDG1LPEN = 0x40; // WWDG1 Clock Enable During CSleep Mode

    static constexpr uint32_t C1_APB1LLPENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1_APB1LLPENR_TIM2LPEN = 0x1; // TIM2 peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB1LLPENR_TIM3LPEN = 0x2; // TIM3 peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB1LLPENR_TIM4LPEN = 0x4; // TIM4 peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB1LLPENR_TIM5LPEN = 0x8; // TIM5 peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB1LLPENR_TIM6LPEN = 0x10; // TIM6 peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB1LLPENR_TIM7LPEN = 0x20; // TIM7 peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB1LLPENR_TIM12LPEN = 0x40; // TIM12 peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB1LLPENR_TIM13LPEN = 0x80; // TIM13 peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB1LLPENR_TIM14LPEN = 0x100; // TIM14 peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB1LLPENR_LPTIM1LPEN = 0x200; // LPTIM1 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB1LLPENR_SPI2LPEN = 0x4000; // SPI2 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB1LLPENR_SPI3LPEN = 0x8000; // SPI3 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB1LLPENR_SPDIFRXLPEN = 0x10000; // SPDIFRX Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB1LLPENR_USART2LPEN = 0x20000; // USART2 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB1LLPENR_USART3LPEN = 0x40000; // USART3 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB1LLPENR_UART4LPEN = 0x80000; // UART4 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB1LLPENR_UART5LPEN = 0x100000; // UART5 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB1LLPENR_I2C1LPEN = 0x200000; // I2C1 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB1LLPENR_I2C2LPEN = 0x400000; // I2C2 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB1LLPENR_I2C3LPEN = 0x800000; // I2C3 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB1LLPENR_HDMICECLPEN = 0x8000000; // HDMI-CEC Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB1LLPENR_DAC12LPEN = 0x20000000; // DAC1/2 peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB1LLPENR_USART7LPEN = 0x40000000; // USART7 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB1LLPENR_USART8LPEN = 0x80000000; // USART8 Peripheral Clocks Enable During CSleep Mode

    static constexpr uint32_t C1_APB1HLPENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1_APB1HLPENR_CRSLPEN = 0x2; // Clock Recovery System peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB1HLPENR_SWPLPEN = 0x4; // SWPMI Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB1HLPENR_OPAMPLPEN = 0x10; // OPAMP peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB1HLPENR_MDIOSLPEN = 0x20; // MDIOS peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB1HLPENR_FDCANLPEN = 0x100; // FDCAN Peripheral Clocks Enable During CSleep Mode

    static constexpr uint32_t C1_APB2LPENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1_APB2LPENR_TIM1LPEN = 0x1; // TIM1 peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB2LPENR_TIM8LPEN = 0x2; // TIM8 peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB2LPENR_USART1LPEN = 0x10; // USART1 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB2LPENR_USART6LPEN = 0x20; // USART6 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB2LPENR_SPI1LPEN = 0x1000; // SPI1 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB2LPENR_SPI4LPEN = 0x2000; // SPI4 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB2LPENR_TIM15LPEN = 0x10000; // TIM15 peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB2LPENR_TIM16LPEN = 0x20000; // TIM16 peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB2LPENR_TIM17LPEN = 0x40000; // TIM17 peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB2LPENR_SPI5LPEN = 0x100000; // SPI5 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB2LPENR_SAI1LPEN = 0x400000; // SAI1 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB2LPENR_SAI2LPEN = 0x800000; // SAI2 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB2LPENR_SAI3LPEN = 0x1000000; // SAI3 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB2LPENR_DFSDM1LPEN = 0x10000000; // DFSDM1 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB2LPENR_HRTIMLPEN = 0x20000000; // HRTIM peripheral clock enable during CSleep mode

    static constexpr uint32_t C1_APB4LPENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1_APB4LPENR_SYSCFGLPEN = 0x2; // SYSCFG peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB4LPENR_LPUART1LPEN = 0x8; // LPUART1 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB4LPENR_SPI6LPEN = 0x20; // SPI6 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB4LPENR_I2C4LPEN = 0x80; // I2C4 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB4LPENR_LPTIM2LPEN = 0x200; // LPTIM2 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB4LPENR_LPTIM3LPEN = 0x400; // LPTIM3 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB4LPENR_LPTIM4LPEN = 0x800; // LPTIM4 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB4LPENR_LPTIM5LPEN = 0x1000; // LPTIM5 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB4LPENR_COMP12LPEN = 0x4000; // COMP1/2 peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB4LPENR_VREFLPEN = 0x8000; // VREF peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB4LPENR_RTCAPBLPEN = 0x10000; // RTC APB Clock Enable During CSleep Mode
    static constexpr uint32_t C1_APB4LPENR_SAI4LPEN = 0x200000; // SAI4 Peripheral Clocks Enable During CSleep Mode
};

// RCC: Reset and clock control

struct stm32h745_cm4_rcc_t
{
    volatile uint32_t CR; // clock control register
    volatile uint32_t ICSCR; // RCC Internal Clock Source Calibration Register
    volatile uint32_t CRRCR; // RCC Clock Recovery RC Register
    reserved_t<0x1> _0xc;
    volatile uint32_t CFGR; // RCC Clock Configuration Register
    reserved_t<0x1> _0x14;
    volatile uint32_t D1CFGR; // RCC Domain 1 Clock Configuration Register
    volatile uint32_t D2CFGR; // RCC Domain 2 Clock Configuration Register
    volatile uint32_t D3CFGR; // RCC Domain 3 Clock Configuration Register
    reserved_t<0x1> _0x24;
    volatile uint32_t PLLCKSELR; // RCC PLLs Clock Source Selection Register
    volatile uint32_t PLLCFGR; // RCC PLLs Configuration Register
    volatile uint32_t PLL1DIVR; // RCC PLL1 Dividers Configuration Register
    volatile uint32_t PLL1FRACR; // RCC PLL1 Fractional Divider Register
    volatile uint32_t PLL2DIVR; // RCC PLL2 Dividers Configuration Register
    volatile uint32_t PLL2FRACR; // RCC PLL2 Fractional Divider Register
    volatile uint32_t PLL3DIVR; // RCC PLL3 Dividers Configuration Register
    volatile uint32_t PLL3FRACR; // RCC PLL3 Fractional Divider Register
    reserved_t<0x1> _0x48;
    volatile uint32_t D1CCIPR; // RCC Domain 1 Kernel Clock Configuration Register
    volatile uint32_t D2CCIP1R; // RCC Domain 2 Kernel Clock Configuration Register
    volatile uint32_t D2CCIP2R; // RCC Domain 2 Kernel Clock Configuration Register
    volatile uint32_t D3CCIPR; // RCC Domain 3 Kernel Clock Configuration Register
    reserved_t<0x1> _0x5c;
    volatile uint32_t CIER; // RCC Clock Source Interrupt Enable Register
    volatile uint32_t CIFR; // RCC Clock Source Interrupt Flag Register
    volatile uint32_t CICR; // RCC Clock Source Interrupt Clear Register
    reserved_t<0x1> _0x6c;
    volatile uint32_t BDCR; // RCC Backup Domain Control Register
    volatile uint32_t CSR; // RCC Clock Control and Status Register
    reserved_t<0x1> _0x78;
    volatile uint32_t AHB3RSTR; // RCC AHB3 Reset Register
    volatile uint32_t AHB1RSTR; // RCC AHB1 Peripheral Reset Register
    volatile uint32_t AHB2RSTR; // RCC AHB2 Peripheral Reset Register
    volatile uint32_t AHB4RSTR; // RCC AHB4 Peripheral Reset Register
    volatile uint32_t APB3RSTR; // RCC APB3 Peripheral Reset Register
    volatile uint32_t APB1LRSTR; // RCC APB1 Peripheral Reset Register
    volatile uint32_t APB1HRSTR; // RCC APB1 Peripheral Reset Register
    volatile uint32_t APB2RSTR; // RCC APB2 Peripheral Reset Register
    volatile uint32_t APB4RSTR; // RCC APB4 Peripheral Reset Register
    volatile uint32_t GCR; // RCC Global Control Register
    reserved_t<0x1> _0xa4;
    volatile uint32_t D3AMR; // RCC D3 Autonomous mode Register
    reserved_t<0x9> _0xac;
    volatile uint32_t RSR; // RCC Reset Status Register
    volatile uint32_t AHB3ENR; // RCC AHB3 Clock Register
    volatile uint32_t AHB1ENR; // RCC AHB1 Clock Register
    volatile uint32_t AHB2ENR; // RCC AHB2 Clock Register
    volatile uint32_t AHB4ENR; // RCC AHB4 Clock Register
    volatile uint32_t APB3ENR; // RCC APB3 Clock Register
    volatile uint32_t APB1LENR; // RCC APB1 Clock Register
    volatile uint32_t APB1HENR; // RCC APB1 Clock Register
    volatile uint32_t APB2ENR; // RCC APB2 Clock Register
    volatile uint32_t APB4ENR; // RCC APB4 Clock Register
    reserved_t<0x1> _0xf8;
    volatile uint32_t AHB3LPENR; // RCC AHB3 Sleep Clock Register
    volatile uint32_t AHB1LPENR; // RCC AHB1 Sleep Clock Register
    volatile uint32_t AHB2LPENR; // RCC AHB2 Sleep Clock Register
    volatile uint32_t AHB4LPENR; // RCC AHB4 Sleep Clock Register
    volatile uint32_t APB3LPENR; // RCC APB3 Sleep Clock Register
    volatile uint32_t APB1LLPENR; // RCC APB1 Low Sleep Clock Register
    volatile uint32_t APB1HLPENR; // RCC APB1 High Sleep Clock Register
    volatile uint32_t APB2LPENR; // RCC APB2 Sleep Clock Register
    volatile uint32_t APB4LPENR; // RCC APB4 Sleep Clock Register
    reserved_t<0x4> _0x120;
    volatile uint32_t C1_RSR; // RCC Reset Status Register
    volatile uint32_t C1_AHB3ENR; // RCC AHB3 Clock Register
    volatile uint32_t C1_AHB1ENR; // RCC AHB1 Clock Register
    volatile uint32_t C1_AHB2ENR; // RCC AHB2 Clock Register
    volatile uint32_t C1_AHB4ENR; // RCC AHB4 Clock Register
    volatile uint32_t C1_APB3ENR; // RCC APB3 Clock Register
    volatile uint32_t C1_APB1LENR; // RCC APB1 Clock Register
    volatile uint32_t C1_APB1HENR; // RCC APB1 Clock Register
    volatile uint32_t C1_APB2ENR; // RCC APB2 Clock Register
    volatile uint32_t C1_APB4ENR; // RCC APB4 Clock Register
    reserved_t<0x1> _0x158;
    volatile uint32_t C1_AHB3LPENR; // RCC AHB3 Sleep Clock Register
    volatile uint32_t C1_AHB1LPENR; // RCC AHB1 Sleep Clock Register
    volatile uint32_t C1_AHB2LPENR; // RCC AHB2 Sleep Clock Register
    volatile uint32_t C1_AHB4LPENR; // RCC AHB4 Sleep Clock Register
    volatile uint32_t C1_APB3LPENR; // RCC APB3 Sleep Clock Register
    volatile uint32_t C1_APB1LLPENR; // RCC APB1 Low Sleep Clock Register
    volatile uint32_t C1_APB1HLPENR; // RCC APB1 High Sleep Clock Register
    volatile uint32_t C1_APB2LPENR; // RCC APB2 Sleep Clock Register
    volatile uint32_t C1_APB4LPENR; // RCC APB4 Sleep Clock Register

    static constexpr uint32_t CR_RESET_VALUE = 0x83; // Reset value
    static constexpr uint32_t CR_HSION = 0x1; // Internal high-speed clock enable
    static constexpr uint32_t CR_HSIKERON = 0x2; // High Speed Internal clock enable in Stop mode
    static constexpr uint32_t CR_HSIRDY = 0x4; // HSI clock ready flag
    typedef bit_field_t<3, 0x3> CR_HSIDIV; // HSI clock divider
    static constexpr uint32_t CR_HSIDIVF = 0x20; // HSI divider flag
    static constexpr uint32_t CR_CSION = 0x80; // CSI clock enable
    static constexpr uint32_t CR_CSIRDY = 0x100; // CSI clock ready flag
    static constexpr uint32_t CR_CSIKERON = 0x200; // CSI clock enable in Stop mode
    static constexpr uint32_t CR_RC48ON = 0x1000; // RC48 clock enable
    static constexpr uint32_t CR_RC48RDY = 0x2000; // RC48 clock ready flag
    static constexpr uint32_t CR_D1CKRDY = 0x4000; // D1 domain clocks ready flag
    static constexpr uint32_t CR_D2CKRDY = 0x8000; // D2 domain clocks ready flag
    static constexpr uint32_t CR_HSEON = 0x10000; // HSE clock enable
    static constexpr uint32_t CR_HSERDY = 0x20000; // HSE clock ready flag
    static constexpr uint32_t CR_HSEBYP = 0x40000; // HSE clock bypass
    static constexpr uint32_t CR_HSECSSON = 0x80000; // HSE Clock Security System enable
    static constexpr uint32_t CR_PLL1ON = 0x1000000; // PLL1 enable
    static constexpr uint32_t CR_PLL1RDY = 0x2000000; // PLL1 clock ready flag
    static constexpr uint32_t CR_PLL2ON = 0x4000000; // PLL2 enable
    static constexpr uint32_t CR_PLL2RDY = 0x8000000; // PLL2 clock ready flag
    static constexpr uint32_t CR_PLL3ON = 0x10000000; // PLL3 enable
    static constexpr uint32_t CR_PLL3RDY = 0x20000000; // PLL3 clock ready flag

    static constexpr uint32_t ICSCR_RESET_VALUE = 0x40000000; // Reset value
    typedef bit_field_t<0, 0xfff> ICSCR_HSICAL; // HSI clock calibration
    typedef bit_field_t<12, 0x3f> ICSCR_HSITRIM; // HSI clock trimming
    typedef bit_field_t<18, 0xff> ICSCR_CSICAL; // CSI clock calibration
    typedef bit_field_t<26, 0x1f> ICSCR_CSITRIM; // CSI clock trimming

    static constexpr uint32_t CRRCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ff> CRRCR_RC48CAL; // Internal RC 48 MHz clock calibration


    static constexpr uint32_t CFGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> CFGR_SW; // System clock switch
    typedef bit_field_t<3, 0x7> CFGR_SWS; // System clock switch status
    static constexpr uint32_t CFGR_STOPWUCK = 0x40; // System clock selection after a wake up from system Stop
    static constexpr uint32_t CFGR_STOPKERWUCK = 0x80; // Kernel clock selection after a wake up from system Stop
    typedef bit_field_t<8, 0x3f> CFGR_RTCPRE; // HSE division factor for RTC clock
    static constexpr uint32_t CFGR_HRTIMSEL = 0x4000; // High Resolution Timer clock prescaler selection
    static constexpr uint32_t CFGR_TIMPRE = 0x8000; // Timers clocks prescaler selection
    typedef bit_field_t<18, 0xf> CFGR_MCO1PRE; // MCO1 prescaler
    typedef bit_field_t<22, 0x7> CFGR_MCO1SEL; // Micro-controller clock output 1
    typedef bit_field_t<25, 0xf> CFGR_MCO2PRE; // MCO2 prescaler
    typedef bit_field_t<29, 0x7> CFGR_MCO2SEL; // Micro-controller clock output 2


    static constexpr uint32_t D1CFGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> D1CFGR_HPRE; // D1 domain AHB prescaler
    typedef bit_field_t<4, 0x7> D1CFGR_D1PPRE; // D1 domain APB3 prescaler
    typedef bit_field_t<8, 0xf> D1CFGR_D1CPRE; // D1 domain Core prescaler

    static constexpr uint32_t D2CFGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0x7> D2CFGR_D2PPRE1; // D2 domain APB1 prescaler
    typedef bit_field_t<8, 0x7> D2CFGR_D2PPRE2; // D2 domain APB2 prescaler

    static constexpr uint32_t D3CFGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0x7> D3CFGR_D3PPRE; // D3 domain APB4 prescaler


    static constexpr uint32_t PLLCKSELR_RESET_VALUE = 0x2020200; // Reset value
    typedef bit_field_t<0, 0x3> PLLCKSELR_PLLSRC; // DIVMx and PLLs clock source selection
    typedef bit_field_t<4, 0x3f> PLLCKSELR_DIVM1; // Prescaler for PLL1
    typedef bit_field_t<12, 0x3f> PLLCKSELR_DIVM2; // Prescaler for PLL2
    typedef bit_field_t<20, 0x3f> PLLCKSELR_DIVM3; // Prescaler for PLL3

    static constexpr uint32_t PLLCFGR_RESET_VALUE = 0x1ff0000; // Reset value
    static constexpr uint32_t PLLCFGR_PLL1FRACEN = 0x1; // PLL1 fractional latch enable
    static constexpr uint32_t PLLCFGR_PLL1VCOSEL = 0x2; // PLL1 VCO selection
    typedef bit_field_t<2, 0x3> PLLCFGR_PLL1RGE; // PLL1 input frequency range
    static constexpr uint32_t PLLCFGR_PLL2FRACEN = 0x10; // PLL2 fractional latch enable
    static constexpr uint32_t PLLCFGR_PLL2VCOSEL = 0x20; // PLL2 VCO selection
    typedef bit_field_t<6, 0x3> PLLCFGR_PLL2RGE; // PLL2 input frequency range
    static constexpr uint32_t PLLCFGR_PLL3FRACEN = 0x100; // PLL3 fractional latch enable
    static constexpr uint32_t PLLCFGR_PLL3VCOSEL = 0x200; // PLL3 VCO selection
    typedef bit_field_t<10, 0x3> PLLCFGR_PLL3RGE; // PLL3 input frequency range
    static constexpr uint32_t PLLCFGR_DIVP1EN = 0x10000; // PLL1 DIVP divider output enable
    static constexpr uint32_t PLLCFGR_DIVQ1EN = 0x20000; // PLL1 DIVQ divider output enable
    static constexpr uint32_t PLLCFGR_DIVR1EN = 0x40000; // PLL1 DIVR divider output enable
    static constexpr uint32_t PLLCFGR_DIVP2EN = 0x80000; // PLL2 DIVP divider output enable
    static constexpr uint32_t PLLCFGR_DIVQ2EN = 0x100000; // PLL2 DIVQ divider output enable
    static constexpr uint32_t PLLCFGR_DIVR2EN = 0x200000; // PLL2 DIVR divider output enable
    static constexpr uint32_t PLLCFGR_DIVP3EN = 0x400000; // PLL3 DIVP divider output enable
    static constexpr uint32_t PLLCFGR_DIVQ3EN = 0x800000; // PLL3 DIVQ divider output enable
    static constexpr uint32_t PLLCFGR_DIVR3EN = 0x1000000; // PLL3 DIVR divider output enable

    static constexpr uint32_t PLL1DIVR_RESET_VALUE = 0x1010280; // Reset value
    typedef bit_field_t<0, 0x1ff> PLL1DIVR_DIVN1; // Multiplication factor for PLL1 VCO
    typedef bit_field_t<9, 0x7f> PLL1DIVR_DIVP1; // PLL1 DIVP division factor
    typedef bit_field_t<16, 0x7f> PLL1DIVR_DIVQ1; // PLL1 DIVQ division factor
    typedef bit_field_t<24, 0x7f> PLL1DIVR_DIVR1; // PLL1 DIVR division factor

    static constexpr uint32_t PLL1FRACR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<3, 0x1fff> PLL1FRACR_FRACN1; // Fractional part of the multiplication factor for PLL1 VCO

    static constexpr uint32_t PLL2DIVR_RESET_VALUE = 0x1010280; // Reset value
    typedef bit_field_t<0, 0x1ff> PLL2DIVR_DIVN1; // Multiplication factor for PLL1 VCO
    typedef bit_field_t<9, 0x7f> PLL2DIVR_DIVP1; // PLL1 DIVP division factor
    typedef bit_field_t<16, 0x7f> PLL2DIVR_DIVQ1; // PLL1 DIVQ division factor
    typedef bit_field_t<24, 0x7f> PLL2DIVR_DIVR1; // PLL1 DIVR division factor

    static constexpr uint32_t PLL2FRACR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<3, 0x1fff> PLL2FRACR_FRACN2; // Fractional part of the multiplication factor for PLL VCO

    static constexpr uint32_t PLL3DIVR_RESET_VALUE = 0x1010280; // Reset value
    typedef bit_field_t<0, 0x1ff> PLL3DIVR_DIVN3; // Multiplication factor for PLL1 VCO
    typedef bit_field_t<9, 0x7f> PLL3DIVR_DIVP3; // PLL DIVP division factor
    typedef bit_field_t<16, 0x7f> PLL3DIVR_DIVQ3; // PLL DIVQ division factor
    typedef bit_field_t<24, 0x7f> PLL3DIVR_DIVR3; // PLL DIVR division factor

    static constexpr uint32_t PLL3FRACR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<3, 0x1fff> PLL3FRACR_FRACN3; // Fractional part of the multiplication factor for PLL3 VCO


    static constexpr uint32_t D1CCIPR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> D1CCIPR_FMCSRC; // FMC kernel clock source selection
    typedef bit_field_t<4, 0x3> D1CCIPR_QSPISRC; // QUADSPI kernel clock source selection
    static constexpr uint32_t D1CCIPR_SDMMCSRC = 0x10000; // SDMMC kernel clock source selection
    typedef bit_field_t<28, 0x3> D1CCIPR_CKPERSRC; // per_ck clock source selection

    static constexpr uint32_t D2CCIP1R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> D2CCIP1R_SAI1SRC; // SAI1 and DFSDM1 kernel Aclk clock source selection
    typedef bit_field_t<6, 0x7> D2CCIP1R_SAI23SRC; // SAI2 and SAI3 kernel clock source selection
    typedef bit_field_t<12, 0x7> D2CCIP1R_SPI123SRC; // SPI/I2S1,2 and 3 kernel clock source selection
    typedef bit_field_t<16, 0x7> D2CCIP1R_SPI45SRC; // SPI4 and 5 kernel clock source selection
    typedef bit_field_t<20, 0x3> D2CCIP1R_SPDIFSRC; // SPDIFRX kernel clock source selection
    static constexpr uint32_t D2CCIP1R_DFSDM1SRC = 0x1000000; // DFSDM1 kernel Clk clock source selection
    typedef bit_field_t<28, 0x3> D2CCIP1R_FDCANSRC; // FDCAN kernel clock source selection
    static constexpr uint32_t D2CCIP1R_SWPSRC = 0x80000000; // SWPMI kernel clock source selection

    static constexpr uint32_t D2CCIP2R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> D2CCIP2R_USART234578SRC; // USART2/3, UART4,5, 7/8 (APB1) kernel clock source selection
    typedef bit_field_t<3, 0x7> D2CCIP2R_USART16SRC; // USART1 and 6 kernel clock source selection
    typedef bit_field_t<8, 0x3> D2CCIP2R_RNGSRC; // RNG kernel clock source selection
    typedef bit_field_t<12, 0x3> D2CCIP2R_I2C123SRC; // I2C1,2,3 kernel clock source selection
    typedef bit_field_t<20, 0x3> D2CCIP2R_USBSRC; // USBOTG 1 and 2 kernel clock source selection
    typedef bit_field_t<22, 0x3> D2CCIP2R_CECSRC; // HDMI-CEC kernel clock source selection
    typedef bit_field_t<28, 0x7> D2CCIP2R_LPTIM1SRC; // LPTIM1 kernel clock source selection

    static constexpr uint32_t D3CCIPR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> D3CCIPR_LPUART1SRC; // LPUART1 kernel clock source selection
    typedef bit_field_t<8, 0x3> D3CCIPR_I2C4SRC; // I2C4 kernel clock source selection
    typedef bit_field_t<10, 0x7> D3CCIPR_LPTIM2SRC; // LPTIM2 kernel clock source selection
    typedef bit_field_t<13, 0x7> D3CCIPR_LPTIM345SRC; // LPTIM3,4,5 kernel clock source selection
    typedef bit_field_t<16, 0x3> D3CCIPR_ADCSRC; // SAR ADC kernel clock source selection
    typedef bit_field_t<21, 0x7> D3CCIPR_SAI4ASRC; // Sub-Block A of SAI4 kernel clock source selection
    typedef bit_field_t<24, 0x7> D3CCIPR_SAI4BSRC; // Sub-Block B of SAI4 kernel clock source selection
    typedef bit_field_t<28, 0x7> D3CCIPR_SPI6SRC; // SPI6 kernel clock source selection


    static constexpr uint32_t CIER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CIER_LSIRDYIE = 0x1; // LSI ready Interrupt Enable
    static constexpr uint32_t CIER_LSERDYIE = 0x2; // LSE ready Interrupt Enable
    static constexpr uint32_t CIER_HSIRDYIE = 0x4; // HSI ready Interrupt Enable
    static constexpr uint32_t CIER_HSERDYIE = 0x8; // HSE ready Interrupt Enable
    static constexpr uint32_t CIER_CSIRDYIE = 0x10; // CSI ready Interrupt Enable
    static constexpr uint32_t CIER_RC48RDYIE = 0x20; // RC48 ready Interrupt Enable
    static constexpr uint32_t CIER_PLL1RDYIE = 0x40; // PLL1 ready Interrupt Enable
    static constexpr uint32_t CIER_PLL2RDYIE = 0x80; // PLL2 ready Interrupt Enable
    static constexpr uint32_t CIER_PLL3RDYIE = 0x100; // PLL3 ready Interrupt Enable
    static constexpr uint32_t CIER_LSECSSIE = 0x200; // LSE clock security system Interrupt Enable

    static constexpr uint32_t CIFR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CIFR_LSIRDYF = 0x1; // LSI ready Interrupt Flag
    static constexpr uint32_t CIFR_LSERDYF = 0x2; // LSE ready Interrupt Flag
    static constexpr uint32_t CIFR_HSIRDYF = 0x4; // HSI ready Interrupt Flag
    static constexpr uint32_t CIFR_HSERDYF = 0x8; // HSE ready Interrupt Flag
    static constexpr uint32_t CIFR_CSIRDY = 0x10; // CSI ready Interrupt Flag
    static constexpr uint32_t CIFR_RC48RDYF = 0x20; // RC48 ready Interrupt Flag
    static constexpr uint32_t CIFR_PLL1RDYF = 0x40; // PLL1 ready Interrupt Flag
    static constexpr uint32_t CIFR_PLL2RDYF = 0x80; // PLL2 ready Interrupt Flag
    static constexpr uint32_t CIFR_PLL3RDYF = 0x100; // PLL3 ready Interrupt Flag
    static constexpr uint32_t CIFR_LSECSSF = 0x200; // LSE clock security system Interrupt Flag
    static constexpr uint32_t CIFR_HSECSSF = 0x400; // HSE clock security system Interrupt Flag

    static constexpr uint32_t CICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CICR_LSIRDYC = 0x1; // LSI ready Interrupt Clear
    static constexpr uint32_t CICR_LSERDYC = 0x2; // LSE ready Interrupt Clear
    static constexpr uint32_t CICR_HSIRDYC = 0x4; // HSI ready Interrupt Clear
    static constexpr uint32_t CICR_HSERDYC = 0x8; // HSE ready Interrupt Clear
    static constexpr uint32_t CICR_HSE_READY_INTERRUPT_CLEAR = 0x10; // CSI ready Interrupt Clear
    static constexpr uint32_t CICR_RC48RDYC = 0x20; // RC48 ready Interrupt Clear
    static constexpr uint32_t CICR_PLL1RDYC = 0x40; // PLL1 ready Interrupt Clear
    static constexpr uint32_t CICR_PLL2RDYC = 0x80; // PLL2 ready Interrupt Clear
    static constexpr uint32_t CICR_PLL3RDYC = 0x100; // PLL3 ready Interrupt Clear
    static constexpr uint32_t CICR_LSECSSC = 0x200; // LSE clock security system Interrupt Clear
    static constexpr uint32_t CICR_HSECSSC = 0x400; // HSE clock security system Interrupt Clear


    static constexpr uint32_t BDCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BDCR_LSEON = 0x1; // LSE oscillator enabled
    static constexpr uint32_t BDCR_LSERDY = 0x2; // LSE oscillator ready
    static constexpr uint32_t BDCR_LSEBYP = 0x4; // LSE oscillator bypass
    typedef bit_field_t<3, 0x3> BDCR_LSEDRV; // LSE oscillator driving capability
    static constexpr uint32_t BDCR_LSECSSON = 0x20; // LSE clock security system enable
    static constexpr uint32_t BDCR_LSECSSD = 0x40; // LSE clock security system failure detection
    typedef bit_field_t<8, 0x3> BDCR_RTCSRC; // RTC clock source selection
    static constexpr uint32_t BDCR_RTCEN = 0x8000; // RTC clock enable
    static constexpr uint32_t BDCR_VSWRST = 0x10000; // VSwitch domain software reset

    static constexpr uint32_t CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CSR_LSION = 0x1; // LSI oscillator enable
    static constexpr uint32_t CSR_LSIRDY = 0x2; // LSI oscillator ready


    static constexpr uint32_t AHB3RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB3RSTR_MDMARST = 0x1; // MDMA block reset
    static constexpr uint32_t AHB3RSTR_DMA2DRST = 0x10; // DMA2D block reset
    static constexpr uint32_t AHB3RSTR_JPGDECRST = 0x20; // JPGDEC block reset
    static constexpr uint32_t AHB3RSTR_FMCRST = 0x1000; // FMC block reset
    static constexpr uint32_t AHB3RSTR_QSPIRST = 0x4000; // QUADSPI and QUADSPI delay block reset
    static constexpr uint32_t AHB3RSTR_SDMMC1RST = 0x10000; // SDMMC1 and SDMMC1 delay block reset
    static constexpr uint32_t AHB3RSTR_CPURST = 0x80000000; // CPU reset

    static constexpr uint32_t AHB1RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB1RSTR_DMA1RST = 0x1; // DMA1 block reset
    static constexpr uint32_t AHB1RSTR_DMA2RST = 0x2; // DMA2 block reset
    static constexpr uint32_t AHB1RSTR_ADC12_COMMONRST = 0x20; // ADC1&amp;2 block reset
    static constexpr uint32_t AHB1RSTR_ETH1MACRST = 0x8000; // ETH1MAC block reset
    static constexpr uint32_t AHB1RSTR_USB1OTGRST = 0x2000000; // USB1OTG block reset
    static constexpr uint32_t AHB1RSTR_USB2OTGRST = 0x8000000; // USB2OTG block reset

    static constexpr uint32_t AHB2RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB2RSTR_CAMITFRST = 0x1; // CAMITF block reset
    static constexpr uint32_t AHB2RSTR_AESRST = 0x10; // Cryptography block reset
    static constexpr uint32_t AHB2RSTR_HASHRST = 0x20; // Hash block reset
    static constexpr uint32_t AHB2RSTR_RNGRST = 0x40; // Random Number Generator block reset
    static constexpr uint32_t AHB2RSTR_SDMMC2RST = 0x200; // SDMMC2 and SDMMC2 Delay block reset

    static constexpr uint32_t AHB4RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB4RSTR_GPIOARST = 0x1; // GPIO block reset
    static constexpr uint32_t AHB4RSTR_GPIOBRST = 0x2; // GPIO block reset
    static constexpr uint32_t AHB4RSTR_GPIOCRST = 0x4; // GPIO block reset
    static constexpr uint32_t AHB4RSTR_GPIODRST = 0x8; // GPIO block reset
    static constexpr uint32_t AHB4RSTR_GPIOERST = 0x10; // GPIO block reset
    static constexpr uint32_t AHB4RSTR_GPIOFRST = 0x20; // GPIO block reset
    static constexpr uint32_t AHB4RSTR_GPIOGRST = 0x40; // GPIO block reset
    static constexpr uint32_t AHB4RSTR_GPIOHRST = 0x80; // GPIO block reset
    static constexpr uint32_t AHB4RSTR_GPIOIRST = 0x100; // GPIO block reset
    static constexpr uint32_t AHB4RSTR_GPIOJRST = 0x200; // GPIO block reset
    static constexpr uint32_t AHB4RSTR_GPIOKRST = 0x400; // GPIO block reset
    static constexpr uint32_t AHB4RSTR_CRCRST = 0x80000; // CRC block reset
    static constexpr uint32_t AHB4RSTR_BDMARST = 0x200000; // BDMA block reset
    static constexpr uint32_t AHB4RSTR_ADC3RST = 0x1000000; // ADC3 block reset
    static constexpr uint32_t AHB4RSTR_HSEMRST = 0x2000000; // HSEM block reset

    static constexpr uint32_t APB3RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB3RSTR_LTDCRST = 0x8; // LTDC block reset

    static constexpr uint32_t APB1LRSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1LRSTR_TIM2RST = 0x1; // TIM block reset
    static constexpr uint32_t APB1LRSTR_TIM3RST = 0x2; // TIM block reset
    static constexpr uint32_t APB1LRSTR_TIM4RST = 0x4; // TIM block reset
    static constexpr uint32_t APB1LRSTR_TIM5RST = 0x8; // TIM block reset
    static constexpr uint32_t APB1LRSTR_TIM6RST = 0x10; // TIM block reset
    static constexpr uint32_t APB1LRSTR_TIM7RST = 0x20; // TIM block reset
    static constexpr uint32_t APB1LRSTR_TIM12RST = 0x40; // TIM block reset
    static constexpr uint32_t APB1LRSTR_TIM13RST = 0x80; // TIM block reset
    static constexpr uint32_t APB1LRSTR_TIM14RST = 0x100; // TIM block reset
    static constexpr uint32_t APB1LRSTR_LPTIM1RST = 0x200; // TIM block reset
    static constexpr uint32_t APB1LRSTR_SPI2RST = 0x4000; // SPI2 block reset
    static constexpr uint32_t APB1LRSTR_SPI3RST = 0x8000; // SPI3 block reset
    static constexpr uint32_t APB1LRSTR_SPDIFRXRST = 0x10000; // SPDIFRX block reset
    static constexpr uint32_t APB1LRSTR_USART2RST = 0x20000; // USART2 block reset
    static constexpr uint32_t APB1LRSTR_USART3RST = 0x40000; // USART3 block reset
    static constexpr uint32_t APB1LRSTR_UART4RST = 0x80000; // UART4 block reset
    static constexpr uint32_t APB1LRSTR_UART5RST = 0x100000; // UART5 block reset
    static constexpr uint32_t APB1LRSTR_I2C1RST = 0x200000; // I2C1 block reset
    static constexpr uint32_t APB1LRSTR_I2C2RST = 0x400000; // I2C2 block reset
    static constexpr uint32_t APB1LRSTR_I2C3RST = 0x800000; // I2C3 block reset
    static constexpr uint32_t APB1LRSTR_HDMICECRST = 0x8000000; // HDMI-CEC block reset
    static constexpr uint32_t APB1LRSTR_DAC12RST = 0x20000000; // DAC1 and 2 Blocks Reset
    static constexpr uint32_t APB1LRSTR_USART7RST = 0x40000000; // USART7 block reset
    static constexpr uint32_t APB1LRSTR_USART8RST = 0x80000000; // USART8 block reset

    static constexpr uint32_t APB1HRSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1HRSTR_CRSRST = 0x2; // Clock Recovery System reset
    static constexpr uint32_t APB1HRSTR_SWPRST = 0x4; // SWPMI block reset
    static constexpr uint32_t APB1HRSTR_OPAMPRST = 0x10; // OPAMP block reset
    static constexpr uint32_t APB1HRSTR_MDIOSRST = 0x20; // MDIOS block reset
    static constexpr uint32_t APB1HRSTR_FDCANRST = 0x100; // FDCAN block reset

    static constexpr uint32_t APB2RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2RSTR_TIM1RST = 0x1; // TIM1 block reset
    static constexpr uint32_t APB2RSTR_TIM8RST = 0x2; // TIM8 block reset
    static constexpr uint32_t APB2RSTR_USART1RST = 0x10; // USART1 block reset
    static constexpr uint32_t APB2RSTR_USART6RST = 0x20; // USART6 block reset
    static constexpr uint32_t APB2RSTR_SPI1RST = 0x1000; // SPI1 block reset
    static constexpr uint32_t APB2RSTR_SPI4RST = 0x2000; // SPI4 block reset
    static constexpr uint32_t APB2RSTR_TIM15RST = 0x10000; // TIM15 block reset
    static constexpr uint32_t APB2RSTR_TIM16RST = 0x20000; // TIM16 block reset
    static constexpr uint32_t APB2RSTR_TIM17RST = 0x40000; // TIM17 block reset
    static constexpr uint32_t APB2RSTR_SPI5RST = 0x100000; // SPI5 block reset
    static constexpr uint32_t APB2RSTR_SAI1RST = 0x400000; // SAI1 block reset
    static constexpr uint32_t APB2RSTR_SAI2RST = 0x800000; // SAI2 block reset
    static constexpr uint32_t APB2RSTR_SAI3RST = 0x1000000; // SAI3 block reset
    static constexpr uint32_t APB2RSTR_DFSDM1RST = 0x10000000; // DFSDM1 block reset
    static constexpr uint32_t APB2RSTR_HRTIMRST = 0x20000000; // HRTIM block reset

    static constexpr uint32_t APB4RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB4RSTR_SYSCFGRST = 0x2; // SYSCFG block reset
    static constexpr uint32_t APB4RSTR_LPUART1RST = 0x8; // LPUART1 block reset
    static constexpr uint32_t APB4RSTR_SPI6RST = 0x20; // SPI6 block reset
    static constexpr uint32_t APB4RSTR_I2C4RST = 0x80; // I2C4 block reset
    static constexpr uint32_t APB4RSTR_LPTIM2RST = 0x200; // LPTIM2 block reset
    static constexpr uint32_t APB4RSTR_LPTIM3RST = 0x400; // LPTIM3 block reset
    static constexpr uint32_t APB4RSTR_LPTIM4RST = 0x800; // LPTIM4 block reset
    static constexpr uint32_t APB4RSTR_LPTIM5RST = 0x1000; // LPTIM5 block reset
    static constexpr uint32_t APB4RSTR_COMP12RST = 0x4000; // COMP12 Blocks Reset
    static constexpr uint32_t APB4RSTR_VREFRST = 0x8000; // VREF block reset
    static constexpr uint32_t APB4RSTR_SAI4RST = 0x200000; // SAI4 block reset

    static constexpr uint32_t GCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t GCR_WW1RSC = 0x1; // WWDG1 reset scope control


    static constexpr uint32_t D3AMR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t D3AMR_BDMAAMEN = 0x1; // BDMA and DMAMUX Autonomous mode enable
    static constexpr uint32_t D3AMR_LPUART1AMEN = 0x8; // LPUART1 Autonomous mode enable
    static constexpr uint32_t D3AMR_SPI6AMEN = 0x20; // SPI6 Autonomous mode enable
    static constexpr uint32_t D3AMR_I2C4AMEN = 0x80; // I2C4 Autonomous mode enable
    static constexpr uint32_t D3AMR_LPTIM2AMEN = 0x200; // LPTIM2 Autonomous mode enable
    static constexpr uint32_t D3AMR_LPTIM3AMEN = 0x400; // LPTIM3 Autonomous mode enable
    static constexpr uint32_t D3AMR_LPTIM4AMEN = 0x800; // LPTIM4 Autonomous mode enable
    static constexpr uint32_t D3AMR_LPTIM5AMEN = 0x1000; // LPTIM5 Autonomous mode enable
    static constexpr uint32_t D3AMR_COMP12AMEN = 0x4000; // COMP12 Autonomous mode enable
    static constexpr uint32_t D3AMR_VREFAMEN = 0x8000; // VREF Autonomous mode enable
    static constexpr uint32_t D3AMR_RTCAMEN = 0x10000; // RTC Autonomous mode enable
    static constexpr uint32_t D3AMR_CRCAMEN = 0x80000; // CRC Autonomous mode enable
    static constexpr uint32_t D3AMR_SAI4AMEN = 0x200000; // SAI4 Autonomous mode enable
    static constexpr uint32_t D3AMR_ADC3AMEN = 0x1000000; // ADC3 Autonomous mode enable
    static constexpr uint32_t D3AMR_BKPSRAMAMEN = 0x10000000; // Backup RAM Autonomous mode enable
    static constexpr uint32_t D3AMR_SRAM4AMEN = 0x20000000; // SRAM4 Autonomous mode enable


    static constexpr uint32_t RSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RSR_RMVF = 0x10000; // Remove reset flag
    static constexpr uint32_t RSR_CPURSTF = 0x20000; // CPU reset flag
    static constexpr uint32_t RSR_D1RSTF = 0x80000; // D1 domain power switch reset flag
    static constexpr uint32_t RSR_D2RSTF = 0x100000; // D2 domain power switch reset flag
    static constexpr uint32_t RSR_BORRSTF = 0x200000; // BOR reset flag
    static constexpr uint32_t RSR_PINRSTF = 0x400000; // Pin reset flag (NRST)
    static constexpr uint32_t RSR_PORRSTF = 0x800000; // POR/PDR reset flag
    static constexpr uint32_t RSR_SFTRSTF = 0x1000000; // System reset from CPU reset flag
    static constexpr uint32_t RSR_IWDG1RSTF = 0x4000000; // Independent Watchdog reset flag
    static constexpr uint32_t RSR_WWDG1RSTF = 0x10000000; // Window Watchdog reset flag
    static constexpr uint32_t RSR_LPWRRSTF = 0x40000000; // Reset due to illegal D1 DStandby or CPU CStop flag

    static constexpr uint32_t AHB3ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB3ENR_MDMAEN = 0x1; // MDMA Peripheral Clock Enable
    static constexpr uint32_t AHB3ENR_DMA2DEN = 0x10; // DMA2D Peripheral Clock Enable
    static constexpr uint32_t AHB3ENR_JPGDECEN = 0x20; // JPGDEC Peripheral Clock Enable
    static constexpr uint32_t AHB3ENR_FMCEN = 0x1000; // FMC Peripheral Clocks Enable
    static constexpr uint32_t AHB3ENR_QSPIEN = 0x4000; // QUADSPI and QUADSPI Delay Clock Enable
    static constexpr uint32_t AHB3ENR_SDMMC1EN = 0x10000; // SDMMC1 and SDMMC1 Delay Clock Enable

    static constexpr uint32_t AHB1ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB1ENR_DMA1EN = 0x1; // DMA1 Clock Enable
    static constexpr uint32_t AHB1ENR_DMA2EN = 0x2; // DMA2 Clock Enable
    static constexpr uint32_t AHB1ENR_ADC12_COMMONEN = 0x20; // ADC1/2 Peripheral Clocks Enable
    static constexpr uint32_t AHB1ENR_ETH1MACEN = 0x8000; // Ethernet MAC bus interface Clock Enable
    static constexpr uint32_t AHB1ENR_ETH1TXEN = 0x10000; // Ethernet Transmission Clock Enable
    static constexpr uint32_t AHB1ENR_ETH1RXEN = 0x20000; // Ethernet Reception Clock Enable
    static constexpr uint32_t AHB1ENR_USB1OTGEN = 0x2000000; // USB1OTG Peripheral Clocks Enable
    static constexpr uint32_t AHB1ENR_USB1ULPIEN = 0x4000000; // USB_PHY1 Clocks Enable
    static constexpr uint32_t AHB1ENR_USB2OTGEN = 0x8000000; // USB2OTG Peripheral Clocks Enable
    static constexpr uint32_t AHB1ENR_USB2ULPIEN = 0x10000000; // USB_PHY2 Clocks Enable

    static constexpr uint32_t AHB2ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB2ENR_CAMITFEN = 0x1; // CAMITF peripheral clock enable
    static constexpr uint32_t AHB2ENR_AESEN = 0x10; // CRYPT peripheral clock enable
    static constexpr uint32_t AHB2ENR_HASHEN = 0x20; // HASH peripheral clock enable
    static constexpr uint32_t AHB2ENR_RNGEN = 0x40; // RNG peripheral clocks enable
    static constexpr uint32_t AHB2ENR_SDMMC2EN = 0x200; // SDMMC2 and SDMMC2 delay clock enable
    static constexpr uint32_t AHB2ENR_SRAM1EN = 0x20000000; // SRAM1 block enable
    static constexpr uint32_t AHB2ENR_SRAM2EN = 0x40000000; // SRAM2 block enable
    static constexpr uint32_t AHB2ENR_SRAM3EN = 0x80000000; // SRAM3 block enable

    static constexpr uint32_t AHB4ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB4ENR_GPIOAEN = 0x1; // 0GPIO peripheral clock enable
    static constexpr uint32_t AHB4ENR_GPIOBEN = 0x2; // 0GPIO peripheral clock enable
    static constexpr uint32_t AHB4ENR_GPIOCEN = 0x4; // 0GPIO peripheral clock enable
    static constexpr uint32_t AHB4ENR_GPIODEN = 0x8; // 0GPIO peripheral clock enable
    static constexpr uint32_t AHB4ENR_GPIOEEN = 0x10; // 0GPIO peripheral clock enable
    static constexpr uint32_t AHB4ENR_GPIOFEN = 0x20; // 0GPIO peripheral clock enable
    static constexpr uint32_t AHB4ENR_GPIOGEN = 0x40; // 0GPIO peripheral clock enable
    static constexpr uint32_t AHB4ENR_GPIOHEN = 0x80; // 0GPIO peripheral clock enable
    static constexpr uint32_t AHB4ENR_GPIOIEN = 0x100; // 0GPIO peripheral clock enable
    static constexpr uint32_t AHB4ENR_GPIOJEN = 0x200; // 0GPIO peripheral clock enable
    static constexpr uint32_t AHB4ENR_GPIOKEN = 0x400; // 0GPIO peripheral clock enable
    static constexpr uint32_t AHB4ENR_CRCEN = 0x80000; // CRC peripheral clock enable
    static constexpr uint32_t AHB4ENR_BDMAEN = 0x200000; // BDMA and DMAMUX2 Clock Enable
    static constexpr uint32_t AHB4ENR_ADC3EN = 0x1000000; // ADC3 Peripheral Clocks Enable
    static constexpr uint32_t AHB4ENR_HSEMEN = 0x2000000; // HSEM peripheral clock enable
    static constexpr uint32_t AHB4ENR_BKPRAMEN = 0x10000000; // Backup RAM Clock Enable

    static constexpr uint32_t APB3ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB3ENR_LTDCEN = 0x8; // LTDC peripheral clock enable
    static constexpr uint32_t APB3ENR_WWDG1EN = 0x40; // WWDG1 Clock Enable

    static constexpr uint32_t APB1LENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1LENR_TIM2EN = 0x1; // TIM peripheral clock enable
    static constexpr uint32_t APB1LENR_TIM3EN = 0x2; // TIM peripheral clock enable
    static constexpr uint32_t APB1LENR_TIM4EN = 0x4; // TIM peripheral clock enable
    static constexpr uint32_t APB1LENR_TIM5EN = 0x8; // TIM peripheral clock enable
    static constexpr uint32_t APB1LENR_TIM6EN = 0x10; // TIM peripheral clock enable
    static constexpr uint32_t APB1LENR_TIM7EN = 0x20; // TIM peripheral clock enable
    static constexpr uint32_t APB1LENR_TIM12EN = 0x40; // TIM peripheral clock enable
    static constexpr uint32_t APB1LENR_TIM13EN = 0x80; // TIM peripheral clock enable
    static constexpr uint32_t APB1LENR_TIM14EN = 0x100; // TIM peripheral clock enable
    static constexpr uint32_t APB1LENR_LPTIM1EN = 0x200; // LPTIM1 Peripheral Clocks Enable
    static constexpr uint32_t APB1LENR_SPI2EN = 0x4000; // SPI2 Peripheral Clocks Enable
    static constexpr uint32_t APB1LENR_SPI3EN = 0x8000; // SPI3 Peripheral Clocks Enable
    static constexpr uint32_t APB1LENR_SPDIFRXEN = 0x10000; // SPDIFRX Peripheral Clocks Enable
    static constexpr uint32_t APB1LENR_USART2EN = 0x20000; // USART2 Peripheral Clocks Enable
    static constexpr uint32_t APB1LENR_USART3EN = 0x40000; // USART3 Peripheral Clocks Enable
    static constexpr uint32_t APB1LENR_UART4EN = 0x80000; // UART4 Peripheral Clocks Enable
    static constexpr uint32_t APB1LENR_UART5EN = 0x100000; // UART5 Peripheral Clocks Enable
    static constexpr uint32_t APB1LENR_I2C1EN = 0x200000; // I2C1 Peripheral Clocks Enable
    static constexpr uint32_t APB1LENR_I2C2EN = 0x400000; // I2C2 Peripheral Clocks Enable
    static constexpr uint32_t APB1LENR_I2C3EN = 0x800000; // I2C3 Peripheral Clocks Enable
    static constexpr uint32_t APB1LENR_HDMICECEN = 0x8000000; // HDMI-CEC peripheral clock enable
    static constexpr uint32_t APB1LENR_DAC12EN = 0x20000000; // DAC1&amp;2 peripheral clock enable
    static constexpr uint32_t APB1LENR_USART7EN = 0x40000000; // USART7 Peripheral Clocks Enable
    static constexpr uint32_t APB1LENR_USART8EN = 0x80000000; // USART8 Peripheral Clocks Enable

    static constexpr uint32_t APB1HENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1HENR_CRSEN = 0x2; // Clock Recovery System peripheral clock enable
    static constexpr uint32_t APB1HENR_SWPEN = 0x4; // SWPMI Peripheral Clocks Enable
    static constexpr uint32_t APB1HENR_OPAMPEN = 0x10; // OPAMP peripheral clock enable
    static constexpr uint32_t APB1HENR_MDIOSEN = 0x20; // MDIOS peripheral clock enable
    static constexpr uint32_t APB1HENR_FDCANEN = 0x100; // FDCAN Peripheral Clocks Enable

    static constexpr uint32_t APB2ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2ENR_TIM1EN = 0x1; // TIM1 peripheral clock enable
    static constexpr uint32_t APB2ENR_TIM8EN = 0x2; // TIM8 peripheral clock enable
    static constexpr uint32_t APB2ENR_USART1EN = 0x10; // USART1 Peripheral Clocks Enable
    static constexpr uint32_t APB2ENR_USART6EN = 0x20; // USART6 Peripheral Clocks Enable
    static constexpr uint32_t APB2ENR_SPI1EN = 0x1000; // SPI1 Peripheral Clocks Enable
    static constexpr uint32_t APB2ENR_SPI4EN = 0x2000; // SPI4 Peripheral Clocks Enable
    static constexpr uint32_t APB2ENR_TIM16EN = 0x20000; // TIM16 peripheral clock enable
    static constexpr uint32_t APB2ENR_TIM15EN = 0x10000; // TIM15 peripheral clock enable
    static constexpr uint32_t APB2ENR_TIM17EN = 0x40000; // TIM17 peripheral clock enable
    static constexpr uint32_t APB2ENR_SPI5EN = 0x100000; // SPI5 Peripheral Clocks Enable
    static constexpr uint32_t APB2ENR_SAI1EN = 0x400000; // SAI1 Peripheral Clocks Enable
    static constexpr uint32_t APB2ENR_SAI2EN = 0x800000; // SAI2 Peripheral Clocks Enable
    static constexpr uint32_t APB2ENR_SAI3EN = 0x1000000; // SAI3 Peripheral Clocks Enable
    static constexpr uint32_t APB2ENR_DFSDM1EN = 0x10000000; // DFSDM1 Peripheral Clocks Enable
    static constexpr uint32_t APB2ENR_HRTIMEN = 0x20000000; // HRTIM peripheral clock enable

    static constexpr uint32_t APB4ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB4ENR_SYSCFGEN = 0x2; // SYSCFG peripheral clock enable
    static constexpr uint32_t APB4ENR_LPUART1EN = 0x8; // LPUART1 Peripheral Clocks Enable
    static constexpr uint32_t APB4ENR_SPI6EN = 0x20; // SPI6 Peripheral Clocks Enable
    static constexpr uint32_t APB4ENR_I2C4EN = 0x80; // I2C4 Peripheral Clocks Enable
    static constexpr uint32_t APB4ENR_LPTIM2EN = 0x200; // LPTIM2 Peripheral Clocks Enable
    static constexpr uint32_t APB4ENR_LPTIM3EN = 0x400; // LPTIM3 Peripheral Clocks Enable
    static constexpr uint32_t APB4ENR_LPTIM4EN = 0x800; // LPTIM4 Peripheral Clocks Enable
    static constexpr uint32_t APB4ENR_LPTIM5EN = 0x1000; // LPTIM5 Peripheral Clocks Enable
    static constexpr uint32_t APB4ENR_COMP12EN = 0x4000; // COMP1/2 peripheral clock enable
    static constexpr uint32_t APB4ENR_VREFEN = 0x8000; // VREF peripheral clock enable
    static constexpr uint32_t APB4ENR_RTCAPBEN = 0x10000; // RTC APB Clock Enable
    static constexpr uint32_t APB4ENR_SAI4EN = 0x200000; // SAI4 Peripheral Clocks Enable


    static constexpr uint32_t AHB3LPENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB3LPENR_MDMALPEN = 0x1; // MDMA Clock Enable During CSleep Mode
    static constexpr uint32_t AHB3LPENR_DMA2DLPEN = 0x10; // DMA2D Clock Enable During CSleep Mode
    static constexpr uint32_t AHB3LPENR_JPGDECLPEN = 0x20; // JPGDEC Clock Enable During CSleep Mode
    static constexpr uint32_t AHB3LPENR_FLITFLPEN = 0x100; // FLITF Clock Enable During CSleep Mode
    static constexpr uint32_t AHB3LPENR_FMCLPEN = 0x1000; // FMC Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t AHB3LPENR_QSPILPEN = 0x4000; // QUADSPI and QUADSPI Delay Clock Enable During CSleep Mode
    static constexpr uint32_t AHB3LPENR_SDMMC1LPEN = 0x10000; // SDMMC1 and SDMMC1 Delay Clock Enable During CSleep Mode
    static constexpr uint32_t AHB3LPENR_D1DTCM1LPEN = 0x10000000; // D1DTCM1 Block Clock Enable During CSleep mode
    static constexpr uint32_t AHB3LPENR_DTCM2LPEN = 0x20000000; // D1 DTCM2 Block Clock Enable During CSleep mode
    static constexpr uint32_t AHB3LPENR_ITCMLPEN = 0x40000000; // D1ITCM Block Clock Enable During CSleep mode
    static constexpr uint32_t AHB3LPENR_AXISRAMLPEN = 0x80000000; // AXISRAM Block Clock Enable During CSleep mode

    static constexpr uint32_t AHB1LPENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB1LPENR_DMA1LPEN = 0x1; // DMA1 Clock Enable During CSleep Mode
    static constexpr uint32_t AHB1LPENR_DMA2LPEN = 0x2; // DMA2 Clock Enable During CSleep Mode
    static constexpr uint32_t AHB1LPENR_ADC12LPEN = 0x20; // ADC1/2 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t AHB1LPENR_ETH1MACLPEN = 0x8000; // Ethernet MAC bus interface Clock Enable During CSleep Mode
    static constexpr uint32_t AHB1LPENR_ETH1TXLPEN = 0x10000; // Ethernet Transmission Clock Enable During CSleep Mode
    static constexpr uint32_t AHB1LPENR_ETH1RXLPEN = 0x20000; // Ethernet Reception Clock Enable During CSleep Mode
    static constexpr uint32_t AHB1LPENR_USB1OTGLPEN = 0x2000000; // USB1OTG peripheral clock enable during CSleep mode
    static constexpr uint32_t AHB1LPENR_USB1ULPILPEN = 0x4000000; // USB_PHY1 clock enable during CSleep mode
    static constexpr uint32_t AHB1LPENR_USB2OTGLPEN = 0x8000000; // USB2OTG peripheral clock enable during CSleep mode
    static constexpr uint32_t AHB1LPENR_USB2ULPILPEN = 0x10000000; // USB_PHY2 clocks enable during CSleep mode

    static constexpr uint32_t AHB2LPENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB2LPENR_CAMITFLPEN = 0x1; // CAMITF peripheral clock enable during CSleep mode
    static constexpr uint32_t AHB2LPENR_CRYPTLPEN = 0x10; // CRYPT peripheral clock enable during CSleep mode
    static constexpr uint32_t AHB2LPENR_HASHLPEN = 0x20; // HASH peripheral clock enable during CSleep mode
    static constexpr uint32_t AHB2LPENR_SDMMC2LPEN = 0x200; // SDMMC2 and SDMMC2 Delay Clock Enable During CSleep Mode
    static constexpr uint32_t AHB2LPENR_RNGLPEN = 0x40; // RNG peripheral clock enable during CSleep mode
    static constexpr uint32_t AHB2LPENR_SRAM1LPEN = 0x20000000; // SRAM1 Clock Enable During CSleep Mode
    static constexpr uint32_t AHB2LPENR_SRAM2LPEN = 0x40000000; // SRAM2 Clock Enable During CSleep Mode
    static constexpr uint32_t AHB2LPENR_SRAM3LPEN = 0x80000000; // SRAM3 Clock Enable During CSleep Mode

    static constexpr uint32_t AHB4LPENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB4LPENR_GPIOALPEN = 0x1; // GPIO peripheral clock enable during CSleep mode
    static constexpr uint32_t AHB4LPENR_GPIOBLPEN = 0x2; // GPIO peripheral clock enable during CSleep mode
    static constexpr uint32_t AHB4LPENR_GPIOCLPEN = 0x4; // GPIO peripheral clock enable during CSleep mode
    static constexpr uint32_t AHB4LPENR_GPIODLPEN = 0x8; // GPIO peripheral clock enable during CSleep mode
    static constexpr uint32_t AHB4LPENR_GPIOELPEN = 0x10; // GPIO peripheral clock enable during CSleep mode
    static constexpr uint32_t AHB4LPENR_GPIOFLPEN = 0x20; // GPIO peripheral clock enable during CSleep mode
    static constexpr uint32_t AHB4LPENR_GPIOGLPEN = 0x40; // GPIO peripheral clock enable during CSleep mode
    static constexpr uint32_t AHB4LPENR_GPIOHLPEN = 0x80; // GPIO peripheral clock enable during CSleep mode
    static constexpr uint32_t AHB4LPENR_GPIOILPEN = 0x100; // GPIO peripheral clock enable during CSleep mode
    static constexpr uint32_t AHB4LPENR_GPIOJLPEN = 0x200; // GPIO peripheral clock enable during CSleep mode
    static constexpr uint32_t AHB4LPENR_GPIOKLPEN = 0x400; // GPIO peripheral clock enable during CSleep mode
    static constexpr uint32_t AHB4LPENR_CRCLPEN = 0x80000; // CRC peripheral clock enable during CSleep mode
    static constexpr uint32_t AHB4LPENR_BDMALPEN = 0x200000; // BDMA Clock Enable During CSleep Mode
    static constexpr uint32_t AHB4LPENR_ADC3LPEN = 0x1000000; // ADC3 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t AHB4LPENR_BKPRAMLPEN = 0x10000000; // Backup RAM Clock Enable During CSleep Mode
    static constexpr uint32_t AHB4LPENR_SRAM4LPEN = 0x20000000; // SRAM4 Clock Enable During CSleep Mode

    static constexpr uint32_t APB3LPENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB3LPENR_LTDCLPEN = 0x8; // LTDC peripheral clock enable during CSleep mode
    static constexpr uint32_t APB3LPENR_WWDG1LPEN = 0x40; // WWDG1 Clock Enable During CSleep Mode

    static constexpr uint32_t APB1LLPENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1LLPENR_TIM2LPEN = 0x1; // TIM2 peripheral clock enable during CSleep mode
    static constexpr uint32_t APB1LLPENR_TIM3LPEN = 0x2; // TIM3 peripheral clock enable during CSleep mode
    static constexpr uint32_t APB1LLPENR_TIM4LPEN = 0x4; // TIM4 peripheral clock enable during CSleep mode
    static constexpr uint32_t APB1LLPENR_TIM5LPEN = 0x8; // TIM5 peripheral clock enable during CSleep mode
    static constexpr uint32_t APB1LLPENR_TIM6LPEN = 0x10; // TIM6 peripheral clock enable during CSleep mode
    static constexpr uint32_t APB1LLPENR_TIM7LPEN = 0x20; // TIM7 peripheral clock enable during CSleep mode
    static constexpr uint32_t APB1LLPENR_TIM12LPEN = 0x40; // TIM12 peripheral clock enable during CSleep mode
    static constexpr uint32_t APB1LLPENR_TIM13LPEN = 0x80; // TIM13 peripheral clock enable during CSleep mode
    static constexpr uint32_t APB1LLPENR_TIM14LPEN = 0x100; // TIM14 peripheral clock enable during CSleep mode
    static constexpr uint32_t APB1LLPENR_LPTIM1LPEN = 0x200; // LPTIM1 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t APB1LLPENR_SPI2LPEN = 0x4000; // SPI2 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t APB1LLPENR_SPI3LPEN = 0x8000; // SPI3 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t APB1LLPENR_SPDIFRXLPEN = 0x10000; // SPDIFRX Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t APB1LLPENR_USART2LPEN = 0x20000; // USART2 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t APB1LLPENR_USART3LPEN = 0x40000; // USART3 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t APB1LLPENR_UART4LPEN = 0x80000; // UART4 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t APB1LLPENR_UART5LPEN = 0x100000; // UART5 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t APB1LLPENR_I2C1LPEN = 0x200000; // I2C1 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t APB1LLPENR_I2C2LPEN = 0x400000; // I2C2 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t APB1LLPENR_I2C3LPEN = 0x800000; // I2C3 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t APB1LLPENR_HDMICECLPEN = 0x8000000; // HDMI-CEC Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t APB1LLPENR_DAC12LPEN = 0x20000000; // DAC1/2 peripheral clock enable during CSleep mode
    static constexpr uint32_t APB1LLPENR_USART7LPEN = 0x40000000; // USART7 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t APB1LLPENR_USART8LPEN = 0x80000000; // USART8 Peripheral Clocks Enable During CSleep Mode

    static constexpr uint32_t APB1HLPENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1HLPENR_CRSLPEN = 0x2; // Clock Recovery System peripheral clock enable during CSleep mode
    static constexpr uint32_t APB1HLPENR_SWPLPEN = 0x4; // SWPMI Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t APB1HLPENR_OPAMPLPEN = 0x10; // OPAMP peripheral clock enable during CSleep mode
    static constexpr uint32_t APB1HLPENR_MDIOSLPEN = 0x20; // MDIOS peripheral clock enable during CSleep mode
    static constexpr uint32_t APB1HLPENR_FDCANLPEN = 0x100; // FDCAN Peripheral Clocks Enable During CSleep Mode

    static constexpr uint32_t APB2LPENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2LPENR_TIM1LPEN = 0x1; // TIM1 peripheral clock enable during CSleep mode
    static constexpr uint32_t APB2LPENR_TIM8LPEN = 0x2; // TIM8 peripheral clock enable during CSleep mode
    static constexpr uint32_t APB2LPENR_USART1LPEN = 0x10; // USART1 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t APB2LPENR_USART6LPEN = 0x20; // USART6 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t APB2LPENR_SPI1LPEN = 0x1000; // SPI1 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t APB2LPENR_SPI4LPEN = 0x2000; // SPI4 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t APB2LPENR_TIM15LPEN = 0x10000; // TIM15 peripheral clock enable during CSleep mode
    static constexpr uint32_t APB2LPENR_TIM16LPEN = 0x20000; // TIM16 peripheral clock enable during CSleep mode
    static constexpr uint32_t APB2LPENR_TIM17LPEN = 0x40000; // TIM17 peripheral clock enable during CSleep mode
    static constexpr uint32_t APB2LPENR_SPI5LPEN = 0x100000; // SPI5 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t APB2LPENR_SAI1LPEN = 0x400000; // SAI1 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t APB2LPENR_SAI2LPEN = 0x800000; // SAI2 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t APB2LPENR_SAI3LPEN = 0x1000000; // SAI3 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t APB2LPENR_DFSDM1LPEN = 0x10000000; // DFSDM1 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t APB2LPENR_HRTIMLPEN = 0x20000000; // HRTIM peripheral clock enable during CSleep mode

    static constexpr uint32_t APB4LPENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB4LPENR_SYSCFGLPEN = 0x2; // SYSCFG peripheral clock enable during CSleep mode
    static constexpr uint32_t APB4LPENR_LPUART1LPEN = 0x8; // LPUART1 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t APB4LPENR_SPI6LPEN = 0x20; // SPI6 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t APB4LPENR_I2C4LPEN = 0x80; // I2C4 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t APB4LPENR_LPTIM2LPEN = 0x200; // LPTIM2 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t APB4LPENR_LPTIM3LPEN = 0x400; // LPTIM3 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t APB4LPENR_LPTIM4LPEN = 0x800; // LPTIM4 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t APB4LPENR_LPTIM5LPEN = 0x1000; // LPTIM5 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t APB4LPENR_COMP12LPEN = 0x4000; // COMP1/2 peripheral clock enable during CSleep mode
    static constexpr uint32_t APB4LPENR_VREFLPEN = 0x8000; // VREF peripheral clock enable during CSleep mode
    static constexpr uint32_t APB4LPENR_RTCAPBLPEN = 0x10000; // RTC APB Clock Enable During CSleep Mode
    static constexpr uint32_t APB4LPENR_SAI4LPEN = 0x200000; // SAI4 Peripheral Clocks Enable During CSleep Mode


    static constexpr uint32_t C1_RSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1_RSR_RMVF = 0x10000; // Remove reset flag
    static constexpr uint32_t C1_RSR_CPURSTF = 0x20000; // CPU reset flag
    static constexpr uint32_t C1_RSR_D1RSTF = 0x80000; // D1 domain power switch reset flag
    static constexpr uint32_t C1_RSR_D2RSTF = 0x100000; // D2 domain power switch reset flag
    static constexpr uint32_t C1_RSR_BORRSTF = 0x200000; // BOR reset flag
    static constexpr uint32_t C1_RSR_PINRSTF = 0x400000; // Pin reset flag (NRST)
    static constexpr uint32_t C1_RSR_PORRSTF = 0x800000; // POR/PDR reset flag
    static constexpr uint32_t C1_RSR_SFTRSTF = 0x1000000; // System reset from CPU reset flag
    static constexpr uint32_t C1_RSR_IWDG1RSTF = 0x4000000; // Independent Watchdog reset flag
    static constexpr uint32_t C1_RSR_WWDG1RSTF = 0x10000000; // Window Watchdog reset flag
    static constexpr uint32_t C1_RSR_LPWRRSTF = 0x40000000; // Reset due to illegal D1 DStandby or CPU CStop flag

    static constexpr uint32_t C1_AHB3ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1_AHB3ENR_MDMAEN = 0x1; // MDMA Peripheral Clock Enable
    static constexpr uint32_t C1_AHB3ENR_DMA2DEN = 0x10; // DMA2D Peripheral Clock Enable
    static constexpr uint32_t C1_AHB3ENR_JPGDECEN = 0x20; // JPGDEC Peripheral Clock Enable
    static constexpr uint32_t C1_AHB3ENR_FMCEN = 0x1000; // FMC Peripheral Clocks Enable
    static constexpr uint32_t C1_AHB3ENR_QSPIEN = 0x4000; // QUADSPI and QUADSPI Delay Clock Enable
    static constexpr uint32_t C1_AHB3ENR_SDMMC1EN = 0x10000; // SDMMC1 and SDMMC1 Delay Clock Enable

    static constexpr uint32_t C1_AHB1ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1_AHB1ENR_DMA1EN = 0x1; // DMA1 Clock Enable
    static constexpr uint32_t C1_AHB1ENR_DMA2EN = 0x2; // DMA2 Clock Enable
    static constexpr uint32_t C1_AHB1ENR_ADC12_COMMONEN = 0x20; // ADC1/2 Peripheral Clocks Enable
    static constexpr uint32_t C1_AHB1ENR_ETH1MACEN = 0x8000; // Ethernet MAC bus interface Clock Enable
    static constexpr uint32_t C1_AHB1ENR_ETH1TXEN = 0x10000; // Ethernet Transmission Clock Enable
    static constexpr uint32_t C1_AHB1ENR_ETH1RXEN = 0x20000; // Ethernet Reception Clock Enable
    static constexpr uint32_t C1_AHB1ENR_USB1OTGEN = 0x2000000; // USB1OTG Peripheral Clocks Enable
    static constexpr uint32_t C1_AHB1ENR_USB1ULPIEN = 0x4000000; // USB_PHY1 Clocks Enable
    static constexpr uint32_t C1_AHB1ENR_USB2OTGEN = 0x8000000; // USB2OTG Peripheral Clocks Enable
    static constexpr uint32_t C1_AHB1ENR_USB2ULPIEN = 0x10000000; // USB_PHY2 Clocks Enable

    static constexpr uint32_t C1_AHB2ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1_AHB2ENR_CAMITFEN = 0x1; // CAMITF peripheral clock enable
    static constexpr uint32_t C1_AHB2ENR_AESEN = 0x10; // CRYPT peripheral clock enable
    static constexpr uint32_t C1_AHB2ENR_HASHEN = 0x20; // HASH peripheral clock enable
    static constexpr uint32_t C1_AHB2ENR_RNGEN = 0x40; // RNG peripheral clocks enable
    static constexpr uint32_t C1_AHB2ENR_SDMMC2EN = 0x200; // SDMMC2 and SDMMC2 delay clock enable
    static constexpr uint32_t C1_AHB2ENR_SRAM1EN = 0x20000000; // SRAM1 block enable
    static constexpr uint32_t C1_AHB2ENR_SRAM2EN = 0x40000000; // SRAM2 block enable
    static constexpr uint32_t C1_AHB2ENR_SRAM3EN = 0x80000000; // SRAM3 block enable

    static constexpr uint32_t C1_AHB4ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1_AHB4ENR_GPIOAEN = 0x1; // 0GPIO peripheral clock enable
    static constexpr uint32_t C1_AHB4ENR_GPIOBEN = 0x2; // 0GPIO peripheral clock enable
    static constexpr uint32_t C1_AHB4ENR_GPIOCEN = 0x4; // 0GPIO peripheral clock enable
    static constexpr uint32_t C1_AHB4ENR_GPIODEN = 0x8; // 0GPIO peripheral clock enable
    static constexpr uint32_t C1_AHB4ENR_GPIOEEN = 0x10; // 0GPIO peripheral clock enable
    static constexpr uint32_t C1_AHB4ENR_GPIOFEN = 0x20; // 0GPIO peripheral clock enable
    static constexpr uint32_t C1_AHB4ENR_GPIOGEN = 0x40; // 0GPIO peripheral clock enable
    static constexpr uint32_t C1_AHB4ENR_GPIOHEN = 0x80; // 0GPIO peripheral clock enable
    static constexpr uint32_t C1_AHB4ENR_GPIOIEN = 0x100; // 0GPIO peripheral clock enable
    static constexpr uint32_t C1_AHB4ENR_GPIOJEN = 0x200; // 0GPIO peripheral clock enable
    static constexpr uint32_t C1_AHB4ENR_GPIOKEN = 0x400; // 0GPIO peripheral clock enable
    static constexpr uint32_t C1_AHB4ENR_CRCEN = 0x80000; // CRC peripheral clock enable
    static constexpr uint32_t C1_AHB4ENR_BDMAEN = 0x200000; // BDMA and DMAMUX2 Clock Enable
    static constexpr uint32_t C1_AHB4ENR_ADC3EN = 0x1000000; // ADC3 Peripheral Clocks Enable
    static constexpr uint32_t C1_AHB4ENR_HSEMEN = 0x2000000; // HSEM peripheral clock enable
    static constexpr uint32_t C1_AHB4ENR_BKPRAMEN = 0x10000000; // Backup RAM Clock Enable

    static constexpr uint32_t C1_APB3ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1_APB3ENR_LTDCEN = 0x8; // LTDC peripheral clock enable
    static constexpr uint32_t C1_APB3ENR_WWDG1EN = 0x40; // WWDG1 Clock Enable

    static constexpr uint32_t C1_APB1LENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1_APB1LENR_TIM2EN = 0x1; // TIM peripheral clock enable
    static constexpr uint32_t C1_APB1LENR_TIM3EN = 0x2; // TIM peripheral clock enable
    static constexpr uint32_t C1_APB1LENR_TIM4EN = 0x4; // TIM peripheral clock enable
    static constexpr uint32_t C1_APB1LENR_TIM5EN = 0x8; // TIM peripheral clock enable
    static constexpr uint32_t C1_APB1LENR_TIM6EN = 0x10; // TIM peripheral clock enable
    static constexpr uint32_t C1_APB1LENR_TIM7EN = 0x20; // TIM peripheral clock enable
    static constexpr uint32_t C1_APB1LENR_TIM12EN = 0x40; // TIM peripheral clock enable
    static constexpr uint32_t C1_APB1LENR_TIM13EN = 0x80; // TIM peripheral clock enable
    static constexpr uint32_t C1_APB1LENR_TIM14EN = 0x100; // TIM peripheral clock enable
    static constexpr uint32_t C1_APB1LENR_LPTIM1EN = 0x200; // LPTIM1 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB1LENR_SPI2EN = 0x4000; // SPI2 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB1LENR_SPI3EN = 0x8000; // SPI3 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB1LENR_SPDIFRXEN = 0x10000; // SPDIFRX Peripheral Clocks Enable
    static constexpr uint32_t C1_APB1LENR_USART2EN = 0x20000; // USART2 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB1LENR_USART3EN = 0x40000; // USART3 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB1LENR_UART4EN = 0x80000; // UART4 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB1LENR_UART5EN = 0x100000; // UART5 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB1LENR_I2C1EN = 0x200000; // I2C1 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB1LENR_I2C2EN = 0x400000; // I2C2 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB1LENR_I2C3EN = 0x800000; // I2C3 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB1LENR_HDMICECEN = 0x8000000; // HDMI-CEC peripheral clock enable
    static constexpr uint32_t C1_APB1LENR_DAC12EN = 0x20000000; // DAC1&amp;2 peripheral clock enable
    static constexpr uint32_t C1_APB1LENR_USART7EN = 0x40000000; // USART7 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB1LENR_USART8EN = 0x80000000; // USART8 Peripheral Clocks Enable

    static constexpr uint32_t C1_APB1HENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1_APB1HENR_CRSEN = 0x2; // Clock Recovery System peripheral clock enable
    static constexpr uint32_t C1_APB1HENR_SWPEN = 0x4; // SWPMI Peripheral Clocks Enable
    static constexpr uint32_t C1_APB1HENR_OPAMPEN = 0x10; // OPAMP peripheral clock enable
    static constexpr uint32_t C1_APB1HENR_MDIOSEN = 0x20; // MDIOS peripheral clock enable
    static constexpr uint32_t C1_APB1HENR_FDCANEN = 0x100; // FDCAN Peripheral Clocks Enable

    static constexpr uint32_t C1_APB2ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1_APB2ENR_TIM1EN = 0x1; // TIM1 peripheral clock enable
    static constexpr uint32_t C1_APB2ENR_TIM8EN = 0x2; // TIM8 peripheral clock enable
    static constexpr uint32_t C1_APB2ENR_USART1EN = 0x10; // USART1 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB2ENR_USART6EN = 0x20; // USART6 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB2ENR_SPI1EN = 0x1000; // SPI1 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB2ENR_SPI4EN = 0x2000; // SPI4 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB2ENR_TIM16EN = 0x20000; // TIM16 peripheral clock enable
    static constexpr uint32_t C1_APB2ENR_TIM15EN = 0x10000; // TIM15 peripheral clock enable
    static constexpr uint32_t C1_APB2ENR_TIM17EN = 0x40000; // TIM17 peripheral clock enable
    static constexpr uint32_t C1_APB2ENR_SPI5EN = 0x100000; // SPI5 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB2ENR_SAI1EN = 0x400000; // SAI1 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB2ENR_SAI2EN = 0x800000; // SAI2 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB2ENR_SAI3EN = 0x1000000; // SAI3 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB2ENR_DFSDM1EN = 0x10000000; // DFSDM1 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB2ENR_HRTIMEN = 0x20000000; // HRTIM peripheral clock enable

    static constexpr uint32_t C1_APB4ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1_APB4ENR_SYSCFGEN = 0x2; // SYSCFG peripheral clock enable
    static constexpr uint32_t C1_APB4ENR_LPUART1EN = 0x8; // LPUART1 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB4ENR_SPI6EN = 0x20; // SPI6 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB4ENR_I2C4EN = 0x80; // I2C4 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB4ENR_LPTIM2EN = 0x200; // LPTIM2 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB4ENR_LPTIM3EN = 0x400; // LPTIM3 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB4ENR_LPTIM4EN = 0x800; // LPTIM4 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB4ENR_LPTIM5EN = 0x1000; // LPTIM5 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB4ENR_COMP12EN = 0x4000; // COMP1/2 peripheral clock enable
    static constexpr uint32_t C1_APB4ENR_VREFEN = 0x8000; // VREF peripheral clock enable
    static constexpr uint32_t C1_APB4ENR_RTCAPBEN = 0x10000; // RTC APB Clock Enable
    static constexpr uint32_t C1_APB4ENR_SAI4EN = 0x200000; // SAI4 Peripheral Clocks Enable


    static constexpr uint32_t C1_AHB3LPENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1_AHB3LPENR_MDMALPEN = 0x1; // MDMA Clock Enable During CSleep Mode
    static constexpr uint32_t C1_AHB3LPENR_DMA2DLPEN = 0x10; // DMA2D Clock Enable During CSleep Mode
    static constexpr uint32_t C1_AHB3LPENR_JPGDECLPEN = 0x20; // JPGDEC Clock Enable During CSleep Mode
    static constexpr uint32_t C1_AHB3LPENR_FLITFLPEN = 0x100; // FLITF Clock Enable During CSleep Mode
    static constexpr uint32_t C1_AHB3LPENR_FMCLPEN = 0x1000; // FMC Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_AHB3LPENR_QSPILPEN = 0x4000; // QUADSPI and QUADSPI Delay Clock Enable During CSleep Mode
    static constexpr uint32_t C1_AHB3LPENR_SDMMC1LPEN = 0x10000; // SDMMC1 and SDMMC1 Delay Clock Enable During CSleep Mode
    static constexpr uint32_t C1_AHB3LPENR_D1DTCM1LPEN = 0x10000000; // D1DTCM1 Block Clock Enable During CSleep mode
    static constexpr uint32_t C1_AHB3LPENR_DTCM2LPEN = 0x20000000; // D1 DTCM2 Block Clock Enable During CSleep mode
    static constexpr uint32_t C1_AHB3LPENR_ITCMLPEN = 0x40000000; // D1ITCM Block Clock Enable During CSleep mode
    static constexpr uint32_t C1_AHB3LPENR_AXISRAMLPEN = 0x80000000; // AXISRAM Block Clock Enable During CSleep mode

    static constexpr uint32_t C1_AHB1LPENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1_AHB1LPENR_DMA1LPEN = 0x1; // DMA1 Clock Enable During CSleep Mode
    static constexpr uint32_t C1_AHB1LPENR_DMA2LPEN = 0x2; // DMA2 Clock Enable During CSleep Mode
    static constexpr uint32_t C1_AHB1LPENR_ADC12LPEN = 0x20; // ADC1/2 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_AHB1LPENR_ETH1MACLPEN = 0x8000; // Ethernet MAC bus interface Clock Enable During CSleep Mode
    static constexpr uint32_t C1_AHB1LPENR_ETH1TXLPEN = 0x10000; // Ethernet Transmission Clock Enable During CSleep Mode
    static constexpr uint32_t C1_AHB1LPENR_ETH1RXLPEN = 0x20000; // Ethernet Reception Clock Enable During CSleep Mode
    static constexpr uint32_t C1_AHB1LPENR_USB1OTGLPEN = 0x2000000; // USB1OTG peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_AHB1LPENR_USB1ULPILPEN = 0x4000000; // USB_PHY1 clock enable during CSleep mode
    static constexpr uint32_t C1_AHB1LPENR_USB2OTGLPEN = 0x8000000; // USB2OTG peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_AHB1LPENR_USB2ULPILPEN = 0x10000000; // USB_PHY2 clocks enable during CSleep mode

    static constexpr uint32_t C1_AHB2LPENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1_AHB2LPENR_CAMITFLPEN = 0x1; // CAMITF peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_AHB2LPENR_CRYPTLPEN = 0x10; // CRYPT peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_AHB2LPENR_HASHLPEN = 0x20; // HASH peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_AHB2LPENR_SDMMC2LPEN = 0x200; // SDMMC2 and SDMMC2 Delay Clock Enable During CSleep Mode
    static constexpr uint32_t C1_AHB2LPENR_RNGLPEN = 0x40; // RNG peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_AHB2LPENR_SRAM1LPEN = 0x20000000; // SRAM1 Clock Enable During CSleep Mode
    static constexpr uint32_t C1_AHB2LPENR_SRAM2LPEN = 0x40000000; // SRAM2 Clock Enable During CSleep Mode
    static constexpr uint32_t C1_AHB2LPENR_SRAM3LPEN = 0x80000000; // SRAM3 Clock Enable During CSleep Mode

    static constexpr uint32_t C1_AHB4LPENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1_AHB4LPENR_GPIOALPEN = 0x1; // GPIO peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_AHB4LPENR_GPIOBLPEN = 0x2; // GPIO peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_AHB4LPENR_GPIOCLPEN = 0x4; // GPIO peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_AHB4LPENR_GPIODLPEN = 0x8; // GPIO peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_AHB4LPENR_GPIOELPEN = 0x10; // GPIO peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_AHB4LPENR_GPIOFLPEN = 0x20; // GPIO peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_AHB4LPENR_GPIOGLPEN = 0x40; // GPIO peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_AHB4LPENR_GPIOHLPEN = 0x80; // GPIO peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_AHB4LPENR_GPIOILPEN = 0x100; // GPIO peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_AHB4LPENR_GPIOJLPEN = 0x200; // GPIO peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_AHB4LPENR_GPIOKLPEN = 0x400; // GPIO peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_AHB4LPENR_CRCLPEN = 0x80000; // CRC peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_AHB4LPENR_BDMALPEN = 0x200000; // BDMA Clock Enable During CSleep Mode
    static constexpr uint32_t C1_AHB4LPENR_ADC3LPEN = 0x1000000; // ADC3 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_AHB4LPENR_BKPRAMLPEN = 0x10000000; // Backup RAM Clock Enable During CSleep Mode
    static constexpr uint32_t C1_AHB4LPENR_SRAM4LPEN = 0x20000000; // SRAM4 Clock Enable During CSleep Mode

    static constexpr uint32_t C1_APB3LPENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1_APB3LPENR_LTDCLPEN = 0x8; // LTDC peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB3LPENR_WWDG1LPEN = 0x40; // WWDG1 Clock Enable During CSleep Mode

    static constexpr uint32_t C1_APB1LLPENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1_APB1LLPENR_TIM2LPEN = 0x1; // TIM2 peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB1LLPENR_TIM3LPEN = 0x2; // TIM3 peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB1LLPENR_TIM4LPEN = 0x4; // TIM4 peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB1LLPENR_TIM5LPEN = 0x8; // TIM5 peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB1LLPENR_TIM6LPEN = 0x10; // TIM6 peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB1LLPENR_TIM7LPEN = 0x20; // TIM7 peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB1LLPENR_TIM12LPEN = 0x40; // TIM12 peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB1LLPENR_TIM13LPEN = 0x80; // TIM13 peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB1LLPENR_TIM14LPEN = 0x100; // TIM14 peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB1LLPENR_LPTIM1LPEN = 0x200; // LPTIM1 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB1LLPENR_SPI2LPEN = 0x4000; // SPI2 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB1LLPENR_SPI3LPEN = 0x8000; // SPI3 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB1LLPENR_SPDIFRXLPEN = 0x10000; // SPDIFRX Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB1LLPENR_USART2LPEN = 0x20000; // USART2 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB1LLPENR_USART3LPEN = 0x40000; // USART3 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB1LLPENR_UART4LPEN = 0x80000; // UART4 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB1LLPENR_UART5LPEN = 0x100000; // UART5 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB1LLPENR_I2C1LPEN = 0x200000; // I2C1 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB1LLPENR_I2C2LPEN = 0x400000; // I2C2 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB1LLPENR_I2C3LPEN = 0x800000; // I2C3 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB1LLPENR_HDMICECLPEN = 0x8000000; // HDMI-CEC Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB1LLPENR_DAC12LPEN = 0x20000000; // DAC1/2 peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB1LLPENR_USART7LPEN = 0x40000000; // USART7 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB1LLPENR_USART8LPEN = 0x80000000; // USART8 Peripheral Clocks Enable During CSleep Mode

    static constexpr uint32_t C1_APB1HLPENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1_APB1HLPENR_CRSLPEN = 0x2; // Clock Recovery System peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB1HLPENR_SWPLPEN = 0x4; // SWPMI Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB1HLPENR_OPAMPLPEN = 0x10; // OPAMP peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB1HLPENR_MDIOSLPEN = 0x20; // MDIOS peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB1HLPENR_FDCANLPEN = 0x100; // FDCAN Peripheral Clocks Enable During CSleep Mode

    static constexpr uint32_t C1_APB2LPENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1_APB2LPENR_TIM1LPEN = 0x1; // TIM1 peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB2LPENR_TIM8LPEN = 0x2; // TIM8 peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB2LPENR_USART1LPEN = 0x10; // USART1 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB2LPENR_USART6LPEN = 0x20; // USART6 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB2LPENR_SPI1LPEN = 0x1000; // SPI1 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB2LPENR_SPI4LPEN = 0x2000; // SPI4 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB2LPENR_TIM15LPEN = 0x10000; // TIM15 peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB2LPENR_TIM16LPEN = 0x20000; // TIM16 peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB2LPENR_TIM17LPEN = 0x40000; // TIM17 peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB2LPENR_SPI5LPEN = 0x100000; // SPI5 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB2LPENR_SAI1LPEN = 0x400000; // SAI1 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB2LPENR_SAI2LPEN = 0x800000; // SAI2 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB2LPENR_SAI3LPEN = 0x1000000; // SAI3 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB2LPENR_DFSDM1LPEN = 0x10000000; // DFSDM1 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB2LPENR_HRTIMLPEN = 0x20000000; // HRTIM peripheral clock enable during CSleep mode

    static constexpr uint32_t C1_APB4LPENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1_APB4LPENR_SYSCFGLPEN = 0x2; // SYSCFG peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB4LPENR_LPUART1LPEN = 0x8; // LPUART1 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB4LPENR_SPI6LPEN = 0x20; // SPI6 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB4LPENR_I2C4LPEN = 0x80; // I2C4 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB4LPENR_LPTIM2LPEN = 0x200; // LPTIM2 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB4LPENR_LPTIM3LPEN = 0x400; // LPTIM3 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB4LPENR_LPTIM4LPEN = 0x800; // LPTIM4 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB4LPENR_LPTIM5LPEN = 0x1000; // LPTIM5 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB4LPENR_COMP12LPEN = 0x4000; // COMP1/2 peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB4LPENR_VREFLPEN = 0x8000; // VREF peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB4LPENR_RTCAPBLPEN = 0x10000; // RTC APB Clock Enable During CSleep Mode
    static constexpr uint32_t C1_APB4LPENR_SAI4LPEN = 0x200000; // SAI4 Peripheral Clocks Enable During CSleep Mode
};

// RCC: Reset and clock control

struct stm32h7a3x_rcc_t
{
    volatile uint32_t CR; // clock control register
    volatile uint32_t ICSCR; // RCC Internal Clock Source Calibration Register
    volatile uint32_t CRRCR; // RCC Clock Recovery RC Register
    reserved_t<0x1> _0xc;
    volatile uint32_t CFGR; // RCC Clock Configuration Register
    reserved_t<0x1> _0x14;
    volatile uint32_t D1CFGR; // RCC Domain 1 Clock Configuration Register
    volatile uint32_t D2CFGR; // RCC Domain 2 Clock Configuration Register
    volatile uint32_t D3CFGR; // RCC Domain 3 Clock Configuration Register
    reserved_t<0x1> _0x24;
    volatile uint32_t PLLCKSELR; // RCC PLLs Clock Source Selection Register
    volatile uint32_t PLLCFGR; // RCC PLLs Configuration Register
    volatile uint32_t PLL1DIVR; // RCC PLL1 Dividers Configuration Register
    volatile uint32_t PLL1FRACR; // RCC PLL1 Fractional Divider Register
    volatile uint32_t PLL2DIVR; // RCC PLL2 Dividers Configuration Register
    volatile uint32_t PLL2FRACR; // RCC PLL2 Fractional Divider Register
    volatile uint32_t PLL3DIVR; // RCC PLL3 Dividers Configuration Register
    volatile uint32_t PLL3FRACR; // RCC PLL3 Fractional Divider Register
    reserved_t<0x1> _0x48;
    volatile uint32_t D1CCIPR; // RCC Domain 1 Kernel Clock Configuration Register
    volatile uint32_t D2CCIP1R; // RCC Domain 2 Kernel Clock Configuration Register
    volatile uint32_t D2CCIP2R; // RCC Domain 2 Kernel Clock Configuration Register
    volatile uint32_t D3CCIPR; // RCC Domain 3 Kernel Clock Configuration Register
    reserved_t<0x1> _0x5c;
    volatile uint32_t CIER; // RCC Clock Source Interrupt Enable Register
    volatile uint32_t CIFR; // RCC Clock Source Interrupt Flag Register
    volatile uint32_t CICR; // RCC Clock Source Interrupt Clear Register
    reserved_t<0x1> _0x6c;
    volatile uint32_t BDCR; // RCC Backup Domain Control Register
    volatile uint32_t CSR; // RCC Clock Control and Status Register
    reserved_t<0x1> _0x78;
    volatile uint32_t AHB3RSTR; // RCC AHB3 Reset Register
    volatile uint32_t AHB1RSTR; // RCC AHB1 Peripheral Reset Register
    volatile uint32_t AHB2RSTR; // RCC AHB2 Peripheral Reset Register
    volatile uint32_t AHB4RSTR; // RCC AHB4 Peripheral Reset Register
    volatile uint32_t APB3RSTR; // RCC APB3 Peripheral Reset Register
    volatile uint32_t APB1LRSTR; // RCC APB1 Peripheral Reset Register
    volatile uint32_t APB1HRSTR; // RCC APB1 Peripheral Reset Register
    volatile uint32_t APB2RSTR; // RCC APB2 Peripheral Reset Register
    volatile uint32_t APB4RSTR; // RCC APB4 Peripheral Reset Register
    reserved_t<0x2> _0xa0;
    volatile uint32_t D3AMR; // RCC D3 Autonomous mode Register
    reserved_t<0x21> _0xac;
    volatile uint32_t C1_RSR; // RCC Reset Status Register
    volatile uint32_t C1_AHB3ENR; // RCC AHB3 Clock Register
    volatile uint32_t C1_AHB1ENR; // RCC AHB1 Clock Register
    volatile uint32_t C1_AHB2ENR; // RCC AHB2 Clock Register
    volatile uint32_t C1_AHB4ENR; // RCC AHB4 Clock Register
    volatile uint32_t C1_APB3ENR; // RCC APB3 Clock Register
    volatile uint32_t C1_APB1LENR; // RCC APB1 Clock Register
    volatile uint32_t C1_APB1HENR; // RCC APB1 Clock Register
    volatile uint32_t C1_APB2ENR; // RCC APB2 Clock Register
    volatile uint32_t C1_APB4ENR; // RCC APB4 Clock Register
    reserved_t<0x1> _0x158;
    volatile uint32_t C1_AHB3LPENR; // RCC AHB3 Sleep Clock Register
    volatile uint32_t C1_AHB1LPENR; // RCC AHB1 Sleep Clock Register
    volatile uint32_t C1_AHB2LPENR; // RCC AHB2 Sleep Clock Register
    volatile uint32_t C1_AHB4LPENR; // RCC AHB4 Sleep Clock Register
    volatile uint32_t C1_APB3LPENR; // RCC APB3 Sleep Clock Register
    volatile uint32_t C1_APB1LLPENR; // RCC APB1 Low Sleep Clock Register
    volatile uint32_t C1_APB1HLPENR; // RCC APB1 High Sleep Clock Register
    volatile uint32_t C1_APB2LPENR; // RCC APB2 Sleep Clock Register
    volatile uint32_t C1_APB4LPENR; // RCC APB4 Sleep Clock Register

    static constexpr uint32_t CR_RESET_VALUE = 0x83; // Reset value
    static constexpr uint32_t CR_HSION = 0x1; // Internal high-speed clock enable
    static constexpr uint32_t CR_HSIKERON = 0x2; // High Speed Internal clock enable in Stop mode
    static constexpr uint32_t CR_HSIRDY = 0x4; // HSI clock ready flag
    typedef bit_field_t<3, 0x3> CR_HSIDIV; // HSI clock divider
    static constexpr uint32_t CR_HSIDIVF = 0x20; // HSI divider flag
    static constexpr uint32_t CR_CSION = 0x80; // CSI clock enable
    static constexpr uint32_t CR_CSIRDY = 0x100; // CSI clock ready flag
    static constexpr uint32_t CR_CSIKERON = 0x200; // CSI clock enable in Stop mode
    static constexpr uint32_t CR_RC48ON = 0x1000; // RC48 clock enable
    static constexpr uint32_t CR_RC48RDY = 0x2000; // RC48 clock ready flag
    static constexpr uint32_t CR_D1CKRDY = 0x4000; // D1 domain clocks ready flag
    static constexpr uint32_t CR_D2CKRDY = 0x8000; // D2 domain clocks ready flag
    static constexpr uint32_t CR_HSEON = 0x10000; // HSE clock enable
    static constexpr uint32_t CR_HSERDY = 0x20000; // HSE clock ready flag
    static constexpr uint32_t CR_HSEBYP = 0x40000; // HSE clock bypass
    static constexpr uint32_t CR_HSECSSON = 0x80000; // HSE Clock Security System enable
    static constexpr uint32_t CR_PLL1ON = 0x1000000; // PLL1 enable
    static constexpr uint32_t CR_PLL1RDY = 0x2000000; // PLL1 clock ready flag
    static constexpr uint32_t CR_PLL2ON = 0x4000000; // PLL2 enable
    static constexpr uint32_t CR_PLL2RDY = 0x8000000; // PLL2 clock ready flag
    static constexpr uint32_t CR_PLL3ON = 0x10000000; // PLL3 enable
    static constexpr uint32_t CR_PLL3RDY = 0x20000000; // PLL3 clock ready flag

    static constexpr uint32_t ICSCR_RESET_VALUE = 0x40000000; // Reset value
    typedef bit_field_t<0, 0xfff> ICSCR_HSICAL; // HSI clock calibration
    typedef bit_field_t<12, 0x3f> ICSCR_HSITRIM; // HSI clock trimming
    typedef bit_field_t<18, 0xff> ICSCR_CSICAL; // CSI clock calibration
    typedef bit_field_t<26, 0x1f> ICSCR_CSITRIM; // CSI clock trimming

    static constexpr uint32_t CRRCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ff> CRRCR_RC48CAL; // Internal RC 48 MHz clock calibration


    static constexpr uint32_t CFGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> CFGR_SW; // System clock switch
    typedef bit_field_t<3, 0x7> CFGR_SWS; // System clock switch status
    static constexpr uint32_t CFGR_STOPWUCK = 0x40; // System clock selection after a wake up from system Stop
    static constexpr uint32_t CFGR_STOPKERWUCK = 0x80; // Kernel clock selection after a wake up from system Stop
    typedef bit_field_t<8, 0x3f> CFGR_RTCPRE; // HSE division factor for RTC clock
    static constexpr uint32_t CFGR_HRTIMSEL = 0x4000; // High Resolution Timer clock prescaler selection
    static constexpr uint32_t CFGR_TIMPRE = 0x8000; // Timers clocks prescaler selection
    typedef bit_field_t<18, 0xf> CFGR_MCO1PRE; // MCO1 prescaler
    typedef bit_field_t<22, 0x7> CFGR_MCO1SEL; // Micro-controller clock output 1
    typedef bit_field_t<25, 0xf> CFGR_MCO2PRE; // MCO2 prescaler
    typedef bit_field_t<29, 0x7> CFGR_MCO2SEL; // Micro-controller clock output 2


    static constexpr uint32_t D1CFGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> D1CFGR_HPRE; // D1 domain AHB prescaler
    typedef bit_field_t<4, 0x7> D1CFGR_D1PPRE; // D1 domain APB3 prescaler
    typedef bit_field_t<8, 0xf> D1CFGR_D1CPRE; // D1 domain Core prescaler

    static constexpr uint32_t D2CFGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0x7> D2CFGR_D2PPRE1; // D2 domain APB1 prescaler
    typedef bit_field_t<8, 0x7> D2CFGR_D2PPRE2; // D2 domain APB2 prescaler

    static constexpr uint32_t D3CFGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0x7> D3CFGR_D3PPRE; // D3 domain APB4 prescaler


    static constexpr uint32_t PLLCKSELR_RESET_VALUE = 0x2020200; // Reset value
    typedef bit_field_t<0, 0x3> PLLCKSELR_PLLSRC; // DIVMx and PLLs clock source selection
    typedef bit_field_t<4, 0x3f> PLLCKSELR_DIVM1; // Prescaler for PLL1
    typedef bit_field_t<12, 0x3f> PLLCKSELR_DIVM2; // Prescaler for PLL2
    typedef bit_field_t<20, 0x3f> PLLCKSELR_DIVM3; // Prescaler for PLL3

    static constexpr uint32_t PLLCFGR_RESET_VALUE = 0x1ff0000; // Reset value
    static constexpr uint32_t PLLCFGR_PLL1FRACEN = 0x1; // PLL1 fractional latch enable
    static constexpr uint32_t PLLCFGR_PLL1VCOSEL = 0x2; // PLL1 VCO selection
    typedef bit_field_t<2, 0x3> PLLCFGR_PLL1RGE; // PLL1 input frequency range
    static constexpr uint32_t PLLCFGR_PLL2FRACEN = 0x10; // PLL2 fractional latch enable
    static constexpr uint32_t PLLCFGR_PLL2VCOSEL = 0x20; // PLL2 VCO selection
    typedef bit_field_t<6, 0x3> PLLCFGR_PLL2RGE; // PLL2 input frequency range
    static constexpr uint32_t PLLCFGR_PLL3FRACEN = 0x100; // PLL3 fractional latch enable
    static constexpr uint32_t PLLCFGR_PLL3VCOSEL = 0x200; // PLL3 VCO selection
    typedef bit_field_t<10, 0x3> PLLCFGR_PLL3RGE; // PLL3 input frequency range
    static constexpr uint32_t PLLCFGR_DIVP1EN = 0x10000; // PLL1 DIVP divider output enable
    static constexpr uint32_t PLLCFGR_DIVQ1EN = 0x20000; // PLL1 DIVQ divider output enable
    static constexpr uint32_t PLLCFGR_DIVR1EN = 0x40000; // PLL1 DIVR divider output enable
    static constexpr uint32_t PLLCFGR_DIVP2EN = 0x80000; // PLL2 DIVP divider output enable
    static constexpr uint32_t PLLCFGR_DIVQ2EN = 0x100000; // PLL2 DIVQ divider output enable
    static constexpr uint32_t PLLCFGR_DIVR2EN = 0x200000; // PLL2 DIVR divider output enable
    static constexpr uint32_t PLLCFGR_DIVP3EN = 0x400000; // PLL3 DIVP divider output enable
    static constexpr uint32_t PLLCFGR_DIVQ3EN = 0x800000; // PLL3 DIVQ divider output enable
    static constexpr uint32_t PLLCFGR_DIVR3EN = 0x1000000; // PLL3 DIVR divider output enable

    static constexpr uint32_t PLL1DIVR_RESET_VALUE = 0x1010280; // Reset value
    typedef bit_field_t<0, 0x1ff> PLL1DIVR_DIVN1; // Multiplication factor for PLL1 VCO
    typedef bit_field_t<9, 0x7f> PLL1DIVR_DIVP1; // PLL1 DIVP division factor
    typedef bit_field_t<16, 0x7f> PLL1DIVR_DIVQ1; // PLL1 DIVQ division factor
    typedef bit_field_t<24, 0x7f> PLL1DIVR_DIVR1; // PLL1 DIVR division factor

    static constexpr uint32_t PLL1FRACR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<3, 0x1fff> PLL1FRACR_FRACN1; // Fractional part of the multiplication factor for PLL1 VCO

    static constexpr uint32_t PLL2DIVR_RESET_VALUE = 0x1010280; // Reset value
    typedef bit_field_t<0, 0x1ff> PLL2DIVR_DIVN1; // Multiplication factor for PLL1 VCO
    typedef bit_field_t<9, 0x7f> PLL2DIVR_DIVP1; // PLL1 DIVP division factor
    typedef bit_field_t<16, 0x7f> PLL2DIVR_DIVQ1; // PLL1 DIVQ division factor
    typedef bit_field_t<24, 0x7f> PLL2DIVR_DIVR1; // PLL1 DIVR division factor

    static constexpr uint32_t PLL2FRACR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<3, 0x1fff> PLL2FRACR_FRACN2; // Fractional part of the multiplication factor for PLL VCO

    static constexpr uint32_t PLL3DIVR_RESET_VALUE = 0x1010280; // Reset value
    typedef bit_field_t<0, 0x1ff> PLL3DIVR_DIVN3; // Multiplication factor for PLL1 VCO
    typedef bit_field_t<9, 0x7f> PLL3DIVR_DIVP3; // PLL DIVP division factor
    typedef bit_field_t<16, 0x7f> PLL3DIVR_DIVQ3; // PLL DIVQ division factor
    typedef bit_field_t<24, 0x7f> PLL3DIVR_DIVR3; // PLL DIVR division factor

    static constexpr uint32_t PLL3FRACR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<3, 0x1fff> PLL3FRACR_FRACN3; // Fractional part of the multiplication factor for PLL3 VCO


    static constexpr uint32_t D1CCIPR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> D1CCIPR_FMCSRC; // FMC kernel clock source selection
    typedef bit_field_t<4, 0x3> D1CCIPR_QSPISRC; // QUADSPI kernel clock source selection
    static constexpr uint32_t D1CCIPR_SDMMCSRC = 0x10000; // SDMMC kernel clock source selection
    typedef bit_field_t<28, 0x3> D1CCIPR_CKPERSRC; // per_ck clock source selection

    static constexpr uint32_t D2CCIP1R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> D2CCIP1R_SAI1SRC; // SAI1 and DFSDM1 kernel Aclk clock source selection
    typedef bit_field_t<6, 0x7> D2CCIP1R_SAI23SRC; // SAI2 and SAI3 kernel clock source selection
    typedef bit_field_t<12, 0x7> D2CCIP1R_SPI123SRC; // SPI/I2S1,2 and 3 kernel clock source selection
    typedef bit_field_t<16, 0x7> D2CCIP1R_SPI45SRC; // SPI4 and 5 kernel clock source selection
    typedef bit_field_t<20, 0x3> D2CCIP1R_SPDIFSRC; // SPDIFRX kernel clock source selection
    static constexpr uint32_t D2CCIP1R_DFSDM1SRC = 0x1000000; // DFSDM1 kernel Clk clock source selection
    typedef bit_field_t<28, 0x3> D2CCIP1R_FDCANSRC; // FDCAN kernel clock source selection
    static constexpr uint32_t D2CCIP1R_SWPSRC = 0x80000000; // SWPMI kernel clock source selection

    static constexpr uint32_t D2CCIP2R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> D2CCIP2R_USART234578SRC; // USART2/3, UART4,5, 7/8 (APB1) kernel clock source selection
    typedef bit_field_t<3, 0x7> D2CCIP2R_USART16SRC; // USART1 and 6 kernel clock source selection
    typedef bit_field_t<8, 0x3> D2CCIP2R_RNGSRC; // RNG kernel clock source selection
    typedef bit_field_t<12, 0x3> D2CCIP2R_I2C123SRC; // I2C1,2,3 kernel clock source selection
    typedef bit_field_t<20, 0x3> D2CCIP2R_USBSRC; // USBOTG 1 and 2 kernel clock source selection
    typedef bit_field_t<22, 0x3> D2CCIP2R_CECSRC; // HDMI-CEC kernel clock source selection
    typedef bit_field_t<28, 0x7> D2CCIP2R_LPTIM1SRC; // LPTIM1 kernel clock source selection

    static constexpr uint32_t D3CCIPR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> D3CCIPR_LPUART1SRC; // LPUART1 kernel clock source selection
    typedef bit_field_t<8, 0x3> D3CCIPR_I2C4SRC; // I2C4 kernel clock source selection
    typedef bit_field_t<10, 0x7> D3CCIPR_LPTIM2SRC; // LPTIM2 kernel clock source selection
    typedef bit_field_t<13, 0x7> D3CCIPR_LPTIM345SRC; // LPTIM3,4,5 kernel clock source selection
    typedef bit_field_t<16, 0x3> D3CCIPR_ADCSRC; // SAR ADC kernel clock source selection
    typedef bit_field_t<21, 0x7> D3CCIPR_SAI4ASRC; // Sub-Block A of SAI4 kernel clock source selection
    typedef bit_field_t<24, 0x7> D3CCIPR_SAI4BSRC; // Sub-Block B of SAI4 kernel clock source selection
    typedef bit_field_t<28, 0x7> D3CCIPR_SPI6SRC; // SPI6 kernel clock source selection


    static constexpr uint32_t CIER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CIER_LSIRDYIE = 0x1; // LSI ready Interrupt Enable
    static constexpr uint32_t CIER_LSERDYIE = 0x2; // LSE ready Interrupt Enable
    static constexpr uint32_t CIER_HSIRDYIE = 0x4; // HSI ready Interrupt Enable
    static constexpr uint32_t CIER_HSERDYIE = 0x8; // HSE ready Interrupt Enable
    static constexpr uint32_t CIER_CSIRDYIE = 0x10; // CSI ready Interrupt Enable
    static constexpr uint32_t CIER_RC48RDYIE = 0x20; // RC48 ready Interrupt Enable
    static constexpr uint32_t CIER_PLL1RDYIE = 0x40; // PLL1 ready Interrupt Enable
    static constexpr uint32_t CIER_PLL2RDYIE = 0x80; // PLL2 ready Interrupt Enable
    static constexpr uint32_t CIER_PLL3RDYIE = 0x100; // PLL3 ready Interrupt Enable
    static constexpr uint32_t CIER_LSECSSIE = 0x200; // LSE clock security system Interrupt Enable

    static constexpr uint32_t CIFR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CIFR_LSIRDYF = 0x1; // LSI ready Interrupt Flag
    static constexpr uint32_t CIFR_LSERDYF = 0x2; // LSE ready Interrupt Flag
    static constexpr uint32_t CIFR_HSIRDYF = 0x4; // HSI ready Interrupt Flag
    static constexpr uint32_t CIFR_HSERDYF = 0x8; // HSE ready Interrupt Flag
    static constexpr uint32_t CIFR_CSIRDY = 0x10; // CSI ready Interrupt Flag
    static constexpr uint32_t CIFR_RC48RDYF = 0x20; // RC48 ready Interrupt Flag
    static constexpr uint32_t CIFR_PLL1RDYF = 0x40; // PLL1 ready Interrupt Flag
    static constexpr uint32_t CIFR_PLL2RDYF = 0x80; // PLL2 ready Interrupt Flag
    static constexpr uint32_t CIFR_PLL3RDYF = 0x100; // PLL3 ready Interrupt Flag
    static constexpr uint32_t CIFR_LSECSSF = 0x200; // LSE clock security system Interrupt Flag
    static constexpr uint32_t CIFR_HSECSSF = 0x400; // HSE clock security system Interrupt Flag

    static constexpr uint32_t CICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CICR_LSIRDYC = 0x1; // LSI ready Interrupt Clear
    static constexpr uint32_t CICR_LSERDYC = 0x2; // LSE ready Interrupt Clear
    static constexpr uint32_t CICR_HSIRDYC = 0x4; // HSI ready Interrupt Clear
    static constexpr uint32_t CICR_HSERDYC = 0x8; // HSE ready Interrupt Clear
    static constexpr uint32_t CICR_HSE_READY_INTERRUPT_CLEAR = 0x10; // CSI ready Interrupt Clear
    static constexpr uint32_t CICR_RC48RDYC = 0x20; // RC48 ready Interrupt Clear
    static constexpr uint32_t CICR_PLL1RDYC = 0x40; // PLL1 ready Interrupt Clear
    static constexpr uint32_t CICR_PLL2RDYC = 0x80; // PLL2 ready Interrupt Clear
    static constexpr uint32_t CICR_PLL3RDYC = 0x100; // PLL3 ready Interrupt Clear
    static constexpr uint32_t CICR_LSECSSC = 0x200; // LSE clock security system Interrupt Clear
    static constexpr uint32_t CICR_HSECSSC = 0x400; // HSE clock security system Interrupt Clear


    static constexpr uint32_t BDCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BDCR_LSEON = 0x1; // LSE oscillator enabled
    static constexpr uint32_t BDCR_LSERDY = 0x2; // LSE oscillator ready
    static constexpr uint32_t BDCR_LSEBYP = 0x4; // LSE oscillator bypass
    typedef bit_field_t<3, 0x3> BDCR_LSEDRV; // LSE oscillator driving capability
    static constexpr uint32_t BDCR_LSECSSON = 0x20; // LSE clock security system enable
    static constexpr uint32_t BDCR_LSECSSD = 0x40; // LSE clock security system failure detection
    typedef bit_field_t<8, 0x3> BDCR_RTCSRC; // RTC clock source selection
    static constexpr uint32_t BDCR_RTCEN = 0x8000; // RTC clock enable
    static constexpr uint32_t BDCR_VSWRST = 0x10000; // VSwitch domain software reset

    static constexpr uint32_t CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CSR_LSION = 0x1; // LSI oscillator enable
    static constexpr uint32_t CSR_LSIRDY = 0x2; // LSI oscillator ready


    static constexpr uint32_t AHB3RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB3RSTR_MDMARST = 0x1; // MDMA block reset
    static constexpr uint32_t AHB3RSTR_DMA2DRST = 0x10; // DMA2D block reset
    static constexpr uint32_t AHB3RSTR_JPGDECRST = 0x20; // JPGDEC block reset
    static constexpr uint32_t AHB3RSTR_FMCRST = 0x1000; // FMC block reset
    static constexpr uint32_t AHB3RSTR_QSPIRST = 0x4000; // QUADSPI and QUADSPI delay block reset
    static constexpr uint32_t AHB3RSTR_SDMMC1RST = 0x10000; // SDMMC1 and SDMMC1 delay block reset
    static constexpr uint32_t AHB3RSTR_CPURST = 0x80000000; // CPU reset

    static constexpr uint32_t AHB1RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB1RSTR_DMA1RST = 0x1; // DMA1 block reset
    static constexpr uint32_t AHB1RSTR_DMA2RST = 0x2; // DMA2 block reset
    static constexpr uint32_t AHB1RSTR_ADC12_COMMONRST = 0x20; // ADC1&amp;2 block reset
    static constexpr uint32_t AHB1RSTR_ETH1MACRST = 0x8000; // ETH1MAC block reset
    static constexpr uint32_t AHB1RSTR_USB1OTGRST = 0x2000000; // USB1OTG block reset
    static constexpr uint32_t AHB1RSTR_USB2OTGRST = 0x8000000; // USB2OTG block reset

    static constexpr uint32_t AHB2RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB2RSTR_CAMITFRST = 0x1; // CAMITF block reset
    static constexpr uint32_t AHB2RSTR_AESRST = 0x10; // Cryptography block reset
    static constexpr uint32_t AHB2RSTR_HASHRST = 0x20; // Hash block reset
    static constexpr uint32_t AHB2RSTR_RNGRST = 0x40; // Random Number Generator block reset
    static constexpr uint32_t AHB2RSTR_SDMMC2RST = 0x200; // SDMMC2 and SDMMC2 Delay block reset

    static constexpr uint32_t AHB4RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB4RSTR_GPIOARST = 0x1; // GPIO block reset
    static constexpr uint32_t AHB4RSTR_GPIOBRST = 0x2; // GPIO block reset
    static constexpr uint32_t AHB4RSTR_GPIOCRST = 0x4; // GPIO block reset
    static constexpr uint32_t AHB4RSTR_GPIODRST = 0x8; // GPIO block reset
    static constexpr uint32_t AHB4RSTR_GPIOERST = 0x10; // GPIO block reset
    static constexpr uint32_t AHB4RSTR_GPIOFRST = 0x20; // GPIO block reset
    static constexpr uint32_t AHB4RSTR_GPIOGRST = 0x40; // GPIO block reset
    static constexpr uint32_t AHB4RSTR_GPIOHRST = 0x80; // GPIO block reset
    static constexpr uint32_t AHB4RSTR_GPIOIRST = 0x100; // GPIO block reset
    static constexpr uint32_t AHB4RSTR_GPIOJRST = 0x200; // GPIO block reset
    static constexpr uint32_t AHB4RSTR_GPIOKRST = 0x400; // GPIO block reset
    static constexpr uint32_t AHB4RSTR_CRCRST = 0x80000; // CRC block reset
    static constexpr uint32_t AHB4RSTR_BDMARST = 0x200000; // BDMA block reset
    static constexpr uint32_t AHB4RSTR_ADC3RST = 0x1000000; // ADC3 block reset
    static constexpr uint32_t AHB4RSTR_HSEMRST = 0x2000000; // HSEM block reset

    static constexpr uint32_t APB3RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB3RSTR_LTDCRST = 0x8; // LTDC block reset

    static constexpr uint32_t APB1LRSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1LRSTR_TIM2RST = 0x1; // TIM block reset
    static constexpr uint32_t APB1LRSTR_TIM3RST = 0x2; // TIM block reset
    static constexpr uint32_t APB1LRSTR_TIM4RST = 0x4; // TIM block reset
    static constexpr uint32_t APB1LRSTR_TIM5RST = 0x8; // TIM block reset
    static constexpr uint32_t APB1LRSTR_TIM6RST = 0x10; // TIM block reset
    static constexpr uint32_t APB1LRSTR_TIM7RST = 0x20; // TIM block reset
    static constexpr uint32_t APB1LRSTR_TIM12RST = 0x40; // TIM block reset
    static constexpr uint32_t APB1LRSTR_TIM13RST = 0x80; // TIM block reset
    static constexpr uint32_t APB1LRSTR_TIM14RST = 0x100; // TIM block reset
    static constexpr uint32_t APB1LRSTR_LPTIM1RST = 0x200; // TIM block reset
    static constexpr uint32_t APB1LRSTR_SPI2RST = 0x4000; // SPI2 block reset
    static constexpr uint32_t APB1LRSTR_SPI3RST = 0x8000; // SPI3 block reset
    static constexpr uint32_t APB1LRSTR_SPDIFRXRST = 0x10000; // SPDIFRX block reset
    static constexpr uint32_t APB1LRSTR_USART2RST = 0x20000; // USART2 block reset
    static constexpr uint32_t APB1LRSTR_USART3RST = 0x40000; // USART3 block reset
    static constexpr uint32_t APB1LRSTR_UART4RST = 0x80000; // UART4 block reset
    static constexpr uint32_t APB1LRSTR_UART5RST = 0x100000; // UART5 block reset
    static constexpr uint32_t APB1LRSTR_I2C1RST = 0x200000; // I2C1 block reset
    static constexpr uint32_t APB1LRSTR_I2C2RST = 0x400000; // I2C2 block reset
    static constexpr uint32_t APB1LRSTR_I2C3RST = 0x800000; // I2C3 block reset
    static constexpr uint32_t APB1LRSTR_HDMICECRST = 0x8000000; // HDMI-CEC block reset
    static constexpr uint32_t APB1LRSTR_DAC12RST = 0x20000000; // DAC1 and 2 Blocks Reset
    static constexpr uint32_t APB1LRSTR_USART7RST = 0x40000000; // USART7 block reset
    static constexpr uint32_t APB1LRSTR_USART8RST = 0x80000000; // USART8 block reset

    static constexpr uint32_t APB1HRSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1HRSTR_CRSRST = 0x2; // Clock Recovery System reset
    static constexpr uint32_t APB1HRSTR_SWPRST = 0x4; // SWPMI block reset
    static constexpr uint32_t APB1HRSTR_OPAMPRST = 0x10; // OPAMP block reset
    static constexpr uint32_t APB1HRSTR_MDIOSRST = 0x20; // MDIOS block reset
    static constexpr uint32_t APB1HRSTR_FDCANRST = 0x100; // FDCAN block reset

    static constexpr uint32_t APB2RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2RSTR_TIM1RST = 0x1; // TIM1 block reset
    static constexpr uint32_t APB2RSTR_TIM8RST = 0x2; // TIM8 block reset
    static constexpr uint32_t APB2RSTR_USART1RST = 0x10; // USART1 block reset
    static constexpr uint32_t APB2RSTR_USART6RST = 0x20; // USART6 block reset
    static constexpr uint32_t APB2RSTR_SPI1RST = 0x1000; // SPI1 block reset
    static constexpr uint32_t APB2RSTR_SPI4RST = 0x2000; // SPI4 block reset
    static constexpr uint32_t APB2RSTR_TIM15RST = 0x10000; // TIM15 block reset
    static constexpr uint32_t APB2RSTR_TIM16RST = 0x20000; // TIM16 block reset
    static constexpr uint32_t APB2RSTR_TIM17RST = 0x40000; // TIM17 block reset
    static constexpr uint32_t APB2RSTR_SPI5RST = 0x100000; // SPI5 block reset
    static constexpr uint32_t APB2RSTR_SAI1RST = 0x400000; // SAI1 block reset
    static constexpr uint32_t APB2RSTR_SAI2RST = 0x800000; // SAI2 block reset
    static constexpr uint32_t APB2RSTR_SAI3RST = 0x1000000; // SAI3 block reset
    static constexpr uint32_t APB2RSTR_DFSDM1RST = 0x10000000; // DFSDM1 block reset
    static constexpr uint32_t APB2RSTR_HRTIMRST = 0x20000000; // HRTIM block reset

    static constexpr uint32_t APB4RSTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB4RSTR_SYSCFGRST = 0x2; // SYSCFG block reset
    static constexpr uint32_t APB4RSTR_LPUART1RST = 0x8; // LPUART1 block reset
    static constexpr uint32_t APB4RSTR_SPI6RST = 0x20; // SPI6 block reset
    static constexpr uint32_t APB4RSTR_I2C4RST = 0x80; // I2C4 block reset
    static constexpr uint32_t APB4RSTR_LPTIM2RST = 0x200; // LPTIM2 block reset
    static constexpr uint32_t APB4RSTR_LPTIM3RST = 0x400; // LPTIM3 block reset
    static constexpr uint32_t APB4RSTR_LPTIM4RST = 0x800; // LPTIM4 block reset
    static constexpr uint32_t APB4RSTR_LPTIM5RST = 0x1000; // LPTIM5 block reset
    static constexpr uint32_t APB4RSTR_COMP12RST = 0x4000; // COMP12 Blocks Reset
    static constexpr uint32_t APB4RSTR_VREFRST = 0x8000; // VREF block reset
    static constexpr uint32_t APB4RSTR_SAI4RST = 0x200000; // SAI4 block reset


    static constexpr uint32_t D3AMR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t D3AMR_BDMAAMEN = 0x1; // BDMA and DMAMUX Autonomous mode enable
    static constexpr uint32_t D3AMR_LPUART1AMEN = 0x8; // LPUART1 Autonomous mode enable
    static constexpr uint32_t D3AMR_SPI6AMEN = 0x20; // SPI6 Autonomous mode enable
    static constexpr uint32_t D3AMR_I2C4AMEN = 0x80; // I2C4 Autonomous mode enable
    static constexpr uint32_t D3AMR_LPTIM2AMEN = 0x200; // LPTIM2 Autonomous mode enable
    static constexpr uint32_t D3AMR_LPTIM3AMEN = 0x400; // LPTIM3 Autonomous mode enable
    static constexpr uint32_t D3AMR_LPTIM4AMEN = 0x800; // LPTIM4 Autonomous mode enable
    static constexpr uint32_t D3AMR_LPTIM5AMEN = 0x1000; // LPTIM5 Autonomous mode enable
    static constexpr uint32_t D3AMR_COMP12AMEN = 0x4000; // COMP12 Autonomous mode enable
    static constexpr uint32_t D3AMR_VREFAMEN = 0x8000; // VREF Autonomous mode enable
    static constexpr uint32_t D3AMR_RTCAMEN = 0x10000; // RTC Autonomous mode enable
    static constexpr uint32_t D3AMR_CRCAMEN = 0x80000; // CRC Autonomous mode enable
    static constexpr uint32_t D3AMR_SAI4AMEN = 0x200000; // SAI4 Autonomous mode enable
    static constexpr uint32_t D3AMR_ADC3AMEN = 0x1000000; // ADC3 Autonomous mode enable
    static constexpr uint32_t D3AMR_BKPSRAMAMEN = 0x10000000; // Backup RAM Autonomous mode enable
    static constexpr uint32_t D3AMR_SRAM4AMEN = 0x20000000; // SRAM4 Autonomous mode enable


    static constexpr uint32_t C1_RSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1_RSR_RMVF = 0x10000; // Remove reset flag
    static constexpr uint32_t C1_RSR_CPURSTF = 0x20000; // CPU reset flag
    static constexpr uint32_t C1_RSR_D1RSTF = 0x80000; // D1 domain power switch reset flag
    static constexpr uint32_t C1_RSR_D2RSTF = 0x100000; // D2 domain power switch reset flag
    static constexpr uint32_t C1_RSR_BORRSTF = 0x200000; // BOR reset flag
    static constexpr uint32_t C1_RSR_PINRSTF = 0x400000; // Pin reset flag (NRST)
    static constexpr uint32_t C1_RSR_PORRSTF = 0x800000; // POR/PDR reset flag
    static constexpr uint32_t C1_RSR_SFTRSTF = 0x1000000; // System reset from CPU reset flag
    static constexpr uint32_t C1_RSR_IWDG1RSTF = 0x4000000; // Independent Watchdog reset flag
    static constexpr uint32_t C1_RSR_WWDG1RSTF = 0x10000000; // Window Watchdog reset flag
    static constexpr uint32_t C1_RSR_LPWRRSTF = 0x40000000; // Reset due to illegal D1 DStandby or CPU CStop flag

    static constexpr uint32_t C1_AHB3ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1_AHB3ENR_MDMAEN = 0x1; // MDMA Peripheral Clock Enable
    static constexpr uint32_t C1_AHB3ENR_DMA2DEN = 0x10; // DMA2D Peripheral Clock Enable
    static constexpr uint32_t C1_AHB3ENR_JPGDECEN = 0x20; // JPGDEC Peripheral Clock Enable
    static constexpr uint32_t C1_AHB3ENR_FMCEN = 0x1000; // FMC Peripheral Clocks Enable
    static constexpr uint32_t C1_AHB3ENR_QSPIEN = 0x4000; // QUADSPI and QUADSPI Delay Clock Enable
    static constexpr uint32_t C1_AHB3ENR_SDMMC1EN = 0x10000; // SDMMC1 and SDMMC1 Delay Clock Enable

    static constexpr uint32_t C1_AHB1ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1_AHB1ENR_DMA1EN = 0x1; // DMA1 Clock Enable
    static constexpr uint32_t C1_AHB1ENR_DMA2EN = 0x2; // DMA2 Clock Enable
    static constexpr uint32_t C1_AHB1ENR_ADC12_COMMONEN = 0x20; // ADC1/2 Peripheral Clocks Enable
    static constexpr uint32_t C1_AHB1ENR_ETH1MACEN = 0x8000; // Ethernet MAC bus interface Clock Enable
    static constexpr uint32_t C1_AHB1ENR_ETH1TXEN = 0x10000; // Ethernet Transmission Clock Enable
    static constexpr uint32_t C1_AHB1ENR_ETH1RXEN = 0x20000; // Ethernet Reception Clock Enable
    static constexpr uint32_t C1_AHB1ENR_USB1OTGEN = 0x2000000; // USB1OTG Peripheral Clocks Enable
    static constexpr uint32_t C1_AHB1ENR_USB1ULPIEN = 0x4000000; // USB_PHY1 Clocks Enable
    static constexpr uint32_t C1_AHB1ENR_USB2OTGEN = 0x8000000; // USB2OTG Peripheral Clocks Enable
    static constexpr uint32_t C1_AHB1ENR_USB2ULPIEN = 0x10000000; // USB_PHY2 Clocks Enable

    static constexpr uint32_t C1_AHB2ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1_AHB2ENR_CAMITFEN = 0x1; // CAMITF peripheral clock enable
    static constexpr uint32_t C1_AHB2ENR_AESEN = 0x10; // CRYPT peripheral clock enable
    static constexpr uint32_t C1_AHB2ENR_HASHEN = 0x20; // HASH peripheral clock enable
    static constexpr uint32_t C1_AHB2ENR_RNGEN = 0x40; // RNG peripheral clocks enable
    static constexpr uint32_t C1_AHB2ENR_SDMMC2EN = 0x200; // SDMMC2 and SDMMC2 delay clock enable
    static constexpr uint32_t C1_AHB2ENR_SRAM1EN = 0x20000000; // SRAM1 block enable
    static constexpr uint32_t C1_AHB2ENR_SRAM2EN = 0x40000000; // SRAM2 block enable
    static constexpr uint32_t C1_AHB2ENR_SRAM3EN = 0x80000000; // SRAM3 block enable

    static constexpr uint32_t C1_AHB4ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1_AHB4ENR_GPIOAEN = 0x1; // 0GPIO peripheral clock enable
    static constexpr uint32_t C1_AHB4ENR_GPIOBEN = 0x2; // 0GPIO peripheral clock enable
    static constexpr uint32_t C1_AHB4ENR_GPIOCEN = 0x4; // 0GPIO peripheral clock enable
    static constexpr uint32_t C1_AHB4ENR_GPIODEN = 0x8; // 0GPIO peripheral clock enable
    static constexpr uint32_t C1_AHB4ENR_GPIOEEN = 0x10; // 0GPIO peripheral clock enable
    static constexpr uint32_t C1_AHB4ENR_GPIOFEN = 0x20; // 0GPIO peripheral clock enable
    static constexpr uint32_t C1_AHB4ENR_GPIOGEN = 0x40; // 0GPIO peripheral clock enable
    static constexpr uint32_t C1_AHB4ENR_GPIOHEN = 0x80; // 0GPIO peripheral clock enable
    static constexpr uint32_t C1_AHB4ENR_GPIOIEN = 0x100; // 0GPIO peripheral clock enable
    static constexpr uint32_t C1_AHB4ENR_GPIOJEN = 0x200; // 0GPIO peripheral clock enable
    static constexpr uint32_t C1_AHB4ENR_GPIOKEN = 0x400; // 0GPIO peripheral clock enable
    static constexpr uint32_t C1_AHB4ENR_CRCEN = 0x80000; // CRC peripheral clock enable
    static constexpr uint32_t C1_AHB4ENR_BDMAEN = 0x200000; // BDMA and DMAMUX2 Clock Enable
    static constexpr uint32_t C1_AHB4ENR_ADC3EN = 0x1000000; // ADC3 Peripheral Clocks Enable
    static constexpr uint32_t C1_AHB4ENR_HSEMEN = 0x2000000; // HSEM peripheral clock enable
    static constexpr uint32_t C1_AHB4ENR_BKPRAMEN = 0x10000000; // Backup RAM Clock Enable

    static constexpr uint32_t C1_APB3ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1_APB3ENR_LTDCEN = 0x8; // LTDC peripheral clock enable
    static constexpr uint32_t C1_APB3ENR_WWDG1EN = 0x40; // WWDG1 Clock Enable

    static constexpr uint32_t C1_APB1LENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1_APB1LENR_TIM2EN = 0x1; // TIM peripheral clock enable
    static constexpr uint32_t C1_APB1LENR_TIM3EN = 0x2; // TIM peripheral clock enable
    static constexpr uint32_t C1_APB1LENR_TIM4EN = 0x4; // TIM peripheral clock enable
    static constexpr uint32_t C1_APB1LENR_TIM5EN = 0x8; // TIM peripheral clock enable
    static constexpr uint32_t C1_APB1LENR_TIM6EN = 0x10; // TIM peripheral clock enable
    static constexpr uint32_t C1_APB1LENR_TIM7EN = 0x20; // TIM peripheral clock enable
    static constexpr uint32_t C1_APB1LENR_TIM12EN = 0x40; // TIM peripheral clock enable
    static constexpr uint32_t C1_APB1LENR_TIM13EN = 0x80; // TIM peripheral clock enable
    static constexpr uint32_t C1_APB1LENR_TIM14EN = 0x100; // TIM peripheral clock enable
    static constexpr uint32_t C1_APB1LENR_LPTIM1EN = 0x200; // LPTIM1 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB1LENR_SPI2EN = 0x4000; // SPI2 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB1LENR_SPI3EN = 0x8000; // SPI3 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB1LENR_SPDIFRXEN = 0x10000; // SPDIFRX Peripheral Clocks Enable
    static constexpr uint32_t C1_APB1LENR_USART2EN = 0x20000; // USART2 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB1LENR_USART3EN = 0x40000; // USART3 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB1LENR_UART4EN = 0x80000; // UART4 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB1LENR_UART5EN = 0x100000; // UART5 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB1LENR_I2C1EN = 0x200000; // I2C1 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB1LENR_I2C2EN = 0x400000; // I2C2 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB1LENR_I2C3EN = 0x800000; // I2C3 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB1LENR_HDMICECEN = 0x8000000; // HDMI-CEC peripheral clock enable
    static constexpr uint32_t C1_APB1LENR_DAC12EN = 0x20000000; // DAC1&amp;2 peripheral clock enable
    static constexpr uint32_t C1_APB1LENR_USART7EN = 0x40000000; // USART7 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB1LENR_USART8EN = 0x80000000; // USART8 Peripheral Clocks Enable

    static constexpr uint32_t C1_APB1HENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1_APB1HENR_CRSEN = 0x2; // Clock Recovery System peripheral clock enable
    static constexpr uint32_t C1_APB1HENR_SWPEN = 0x4; // SWPMI Peripheral Clocks Enable
    static constexpr uint32_t C1_APB1HENR_OPAMPEN = 0x10; // OPAMP peripheral clock enable
    static constexpr uint32_t C1_APB1HENR_MDIOSEN = 0x20; // MDIOS peripheral clock enable
    static constexpr uint32_t C1_APB1HENR_FDCANEN = 0x100; // FDCAN Peripheral Clocks Enable

    static constexpr uint32_t C1_APB2ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1_APB2ENR_TIM1EN = 0x1; // TIM1 peripheral clock enable
    static constexpr uint32_t C1_APB2ENR_TIM8EN = 0x2; // TIM8 peripheral clock enable
    static constexpr uint32_t C1_APB2ENR_USART1EN = 0x10; // USART1 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB2ENR_USART6EN = 0x20; // USART6 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB2ENR_SPI1EN = 0x1000; // SPI1 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB2ENR_SPI4EN = 0x2000; // SPI4 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB2ENR_TIM16EN = 0x20000; // TIM16 peripheral clock enable
    static constexpr uint32_t C1_APB2ENR_TIM15EN = 0x10000; // TIM15 peripheral clock enable
    static constexpr uint32_t C1_APB2ENR_TIM17EN = 0x40000; // TIM17 peripheral clock enable
    static constexpr uint32_t C1_APB2ENR_SPI5EN = 0x100000; // SPI5 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB2ENR_SAI1EN = 0x400000; // SAI1 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB2ENR_SAI2EN = 0x800000; // SAI2 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB2ENR_SAI3EN = 0x1000000; // SAI3 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB2ENR_DFSDM1EN = 0x10000000; // DFSDM1 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB2ENR_HRTIMEN = 0x20000000; // HRTIM peripheral clock enable

    static constexpr uint32_t C1_APB4ENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1_APB4ENR_SYSCFGEN = 0x2; // SYSCFG peripheral clock enable
    static constexpr uint32_t C1_APB4ENR_LPUART1EN = 0x8; // LPUART1 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB4ENR_SPI6EN = 0x20; // SPI6 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB4ENR_I2C4EN = 0x80; // I2C4 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB4ENR_LPTIM2EN = 0x200; // LPTIM2 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB4ENR_LPTIM3EN = 0x400; // LPTIM3 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB4ENR_LPTIM4EN = 0x800; // LPTIM4 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB4ENR_LPTIM5EN = 0x1000; // LPTIM5 Peripheral Clocks Enable
    static constexpr uint32_t C1_APB4ENR_COMP12EN = 0x4000; // COMP1/2 peripheral clock enable
    static constexpr uint32_t C1_APB4ENR_VREFEN = 0x8000; // VREF peripheral clock enable
    static constexpr uint32_t C1_APB4ENR_RTCAPBEN = 0x10000; // RTC APB Clock Enable
    static constexpr uint32_t C1_APB4ENR_SAI4EN = 0x200000; // SAI4 Peripheral Clocks Enable


    static constexpr uint32_t C1_AHB3LPENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1_AHB3LPENR_MDMALPEN = 0x1; // MDMA Clock Enable During CSleep Mode
    static constexpr uint32_t C1_AHB3LPENR_DMA2DLPEN = 0x10; // DMA2D Clock Enable During CSleep Mode
    static constexpr uint32_t C1_AHB3LPENR_JPGDECLPEN = 0x20; // JPGDEC Clock Enable During CSleep Mode
    static constexpr uint32_t C1_AHB3LPENR_FLITFLPEN = 0x100; // FLITF Clock Enable During CSleep Mode
    static constexpr uint32_t C1_AHB3LPENR_FMCLPEN = 0x1000; // FMC Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_AHB3LPENR_QSPILPEN = 0x4000; // QUADSPI and QUADSPI Delay Clock Enable During CSleep Mode
    static constexpr uint32_t C1_AHB3LPENR_SDMMC1LPEN = 0x10000; // SDMMC1 and SDMMC1 Delay Clock Enable During CSleep Mode
    static constexpr uint32_t C1_AHB3LPENR_D1DTCM1LPEN = 0x10000000; // D1DTCM1 Block Clock Enable During CSleep mode
    static constexpr uint32_t C1_AHB3LPENR_DTCM2LPEN = 0x20000000; // D1 DTCM2 Block Clock Enable During CSleep mode
    static constexpr uint32_t C1_AHB3LPENR_ITCMLPEN = 0x40000000; // D1ITCM Block Clock Enable During CSleep mode
    static constexpr uint32_t C1_AHB3LPENR_AXISRAMLPEN = 0x80000000; // AXISRAM Block Clock Enable During CSleep mode

    static constexpr uint32_t C1_AHB1LPENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1_AHB1LPENR_DMA1LPEN = 0x1; // DMA1 Clock Enable During CSleep Mode
    static constexpr uint32_t C1_AHB1LPENR_DMA2LPEN = 0x2; // DMA2 Clock Enable During CSleep Mode
    static constexpr uint32_t C1_AHB1LPENR_ADC12LPEN = 0x20; // ADC1/2 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_AHB1LPENR_ETH1MACLPEN = 0x8000; // Ethernet MAC bus interface Clock Enable During CSleep Mode
    static constexpr uint32_t C1_AHB1LPENR_ETH1TXLPEN = 0x10000; // Ethernet Transmission Clock Enable During CSleep Mode
    static constexpr uint32_t C1_AHB1LPENR_ETH1RXLPEN = 0x20000; // Ethernet Reception Clock Enable During CSleep Mode
    static constexpr uint32_t C1_AHB1LPENR_USB1OTGLPEN = 0x2000000; // USB1OTG peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_AHB1LPENR_USB1ULPILPEN = 0x4000000; // USB_PHY1 clock enable during CSleep mode
    static constexpr uint32_t C1_AHB1LPENR_USB2OTGLPEN = 0x8000000; // USB2OTG peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_AHB1LPENR_USB2ULPILPEN = 0x10000000; // USB_PHY2 clocks enable during CSleep mode

    static constexpr uint32_t C1_AHB2LPENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1_AHB2LPENR_CAMITFLPEN = 0x1; // CAMITF peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_AHB2LPENR_CRYPTLPEN = 0x10; // CRYPT peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_AHB2LPENR_HASHLPEN = 0x20; // HASH peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_AHB2LPENR_SDMMC2LPEN = 0x200; // SDMMC2 and SDMMC2 Delay Clock Enable During CSleep Mode
    static constexpr uint32_t C1_AHB2LPENR_RNGLPEN = 0x40; // RNG peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_AHB2LPENR_SRAM1LPEN = 0x20000000; // SRAM1 Clock Enable During CSleep Mode
    static constexpr uint32_t C1_AHB2LPENR_SRAM2LPEN = 0x40000000; // SRAM2 Clock Enable During CSleep Mode
    static constexpr uint32_t C1_AHB2LPENR_SRAM3LPEN = 0x80000000; // SRAM3 Clock Enable During CSleep Mode

    static constexpr uint32_t C1_AHB4LPENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1_AHB4LPENR_GPIOALPEN = 0x1; // GPIO peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_AHB4LPENR_GPIOBLPEN = 0x2; // GPIO peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_AHB4LPENR_GPIOCLPEN = 0x4; // GPIO peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_AHB4LPENR_GPIODLPEN = 0x8; // GPIO peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_AHB4LPENR_GPIOELPEN = 0x10; // GPIO peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_AHB4LPENR_GPIOFLPEN = 0x20; // GPIO peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_AHB4LPENR_GPIOGLPEN = 0x40; // GPIO peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_AHB4LPENR_GPIOHLPEN = 0x80; // GPIO peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_AHB4LPENR_GPIOILPEN = 0x100; // GPIO peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_AHB4LPENR_GPIOJLPEN = 0x200; // GPIO peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_AHB4LPENR_GPIOKLPEN = 0x400; // GPIO peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_AHB4LPENR_CRCLPEN = 0x80000; // CRC peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_AHB4LPENR_BDMALPEN = 0x200000; // BDMA Clock Enable During CSleep Mode
    static constexpr uint32_t C1_AHB4LPENR_ADC3LPEN = 0x1000000; // ADC3 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_AHB4LPENR_BKPRAMLPEN = 0x10000000; // Backup RAM Clock Enable During CSleep Mode
    static constexpr uint32_t C1_AHB4LPENR_SRAM4LPEN = 0x20000000; // SRAM4 Clock Enable During CSleep Mode

    static constexpr uint32_t C1_APB3LPENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1_APB3LPENR_LTDCLPEN = 0x8; // LTDC peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB3LPENR_WWDG1LPEN = 0x40; // WWDG1 Clock Enable During CSleep Mode

    static constexpr uint32_t C1_APB1LLPENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1_APB1LLPENR_TIM2LPEN = 0x1; // TIM2 peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB1LLPENR_TIM3LPEN = 0x2; // TIM3 peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB1LLPENR_TIM4LPEN = 0x4; // TIM4 peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB1LLPENR_TIM5LPEN = 0x8; // TIM5 peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB1LLPENR_TIM6LPEN = 0x10; // TIM6 peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB1LLPENR_TIM7LPEN = 0x20; // TIM7 peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB1LLPENR_TIM12LPEN = 0x40; // TIM12 peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB1LLPENR_TIM13LPEN = 0x80; // TIM13 peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB1LLPENR_TIM14LPEN = 0x100; // TIM14 peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB1LLPENR_LPTIM1LPEN = 0x200; // LPTIM1 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB1LLPENR_SPI2LPEN = 0x4000; // SPI2 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB1LLPENR_SPI3LPEN = 0x8000; // SPI3 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB1LLPENR_SPDIFRXLPEN = 0x10000; // SPDIFRX Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB1LLPENR_USART2LPEN = 0x20000; // USART2 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB1LLPENR_USART3LPEN = 0x40000; // USART3 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB1LLPENR_UART4LPEN = 0x80000; // UART4 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB1LLPENR_UART5LPEN = 0x100000; // UART5 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB1LLPENR_I2C1LPEN = 0x200000; // I2C1 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB1LLPENR_I2C2LPEN = 0x400000; // I2C2 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB1LLPENR_I2C3LPEN = 0x800000; // I2C3 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB1LLPENR_HDMICECLPEN = 0x8000000; // HDMI-CEC Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB1LLPENR_DAC12LPEN = 0x20000000; // DAC1/2 peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB1LLPENR_USART7LPEN = 0x40000000; // USART7 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB1LLPENR_USART8LPEN = 0x80000000; // USART8 Peripheral Clocks Enable During CSleep Mode

    static constexpr uint32_t C1_APB1HLPENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1_APB1HLPENR_CRSLPEN = 0x2; // Clock Recovery System peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB1HLPENR_SWPLPEN = 0x4; // SWPMI Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB1HLPENR_OPAMPLPEN = 0x10; // OPAMP peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB1HLPENR_MDIOSLPEN = 0x20; // MDIOS peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB1HLPENR_FDCANLPEN = 0x100; // FDCAN Peripheral Clocks Enable During CSleep Mode

    static constexpr uint32_t C1_APB2LPENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1_APB2LPENR_TIM1LPEN = 0x1; // TIM1 peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB2LPENR_TIM8LPEN = 0x2; // TIM8 peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB2LPENR_USART1LPEN = 0x10; // USART1 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB2LPENR_USART6LPEN = 0x20; // USART6 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB2LPENR_SPI1LPEN = 0x1000; // SPI1 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB2LPENR_SPI4LPEN = 0x2000; // SPI4 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB2LPENR_TIM15LPEN = 0x10000; // TIM15 peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB2LPENR_TIM16LPEN = 0x20000; // TIM16 peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB2LPENR_TIM17LPEN = 0x40000; // TIM17 peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB2LPENR_SPI5LPEN = 0x100000; // SPI5 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB2LPENR_SAI1LPEN = 0x400000; // SAI1 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB2LPENR_SAI2LPEN = 0x800000; // SAI2 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB2LPENR_SAI3LPEN = 0x1000000; // SAI3 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB2LPENR_DFSDM1LPEN = 0x10000000; // DFSDM1 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB2LPENR_HRTIMLPEN = 0x20000000; // HRTIM peripheral clock enable during CSleep mode

    static constexpr uint32_t C1_APB4LPENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C1_APB4LPENR_SYSCFGLPEN = 0x2; // SYSCFG peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB4LPENR_LPUART1LPEN = 0x8; // LPUART1 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB4LPENR_SPI6LPEN = 0x20; // SPI6 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB4LPENR_I2C4LPEN = 0x80; // I2C4 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB4LPENR_LPTIM2LPEN = 0x200; // LPTIM2 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB4LPENR_LPTIM3LPEN = 0x400; // LPTIM3 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB4LPENR_LPTIM4LPEN = 0x800; // LPTIM4 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB4LPENR_LPTIM5LPEN = 0x1000; // LPTIM5 Peripheral Clocks Enable During CSleep Mode
    static constexpr uint32_t C1_APB4LPENR_COMP12LPEN = 0x4000; // COMP1/2 peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB4LPENR_VREFLPEN = 0x8000; // VREF peripheral clock enable during CSleep mode
    static constexpr uint32_t C1_APB4LPENR_RTCAPBLPEN = 0x10000; // RTC APB Clock Enable During CSleep Mode
    static constexpr uint32_t C1_APB4LPENR_SAI4LPEN = 0x200000; // SAI4 Peripheral Clocks Enable During CSleep Mode
};

template<>
struct peripheral_t<STM32H742x, RCC>
{
    static constexpr periph_t P = RCC;
    using T = stm32h742x_rcc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, RCC>
{
    static constexpr periph_t P = RCC;
    using T = stm32h742x_rcc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, RCC>
{
    static constexpr periph_t P = RCC;
    using T = stm32h742x_rcc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, RCC>
{
    static constexpr periph_t P = RCC;
    using T = stm32h745_cm4_rcc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, RCC>
{
    static constexpr periph_t P = RCC;
    using T = stm32h745_cm4_rcc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, RCC>
{
    static constexpr periph_t P = RCC;
    using T = stm32h745_cm4_rcc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, RCC>
{
    static constexpr periph_t P = RCC;
    using T = stm32h745_cm4_rcc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, RCC>
{
    static constexpr periph_t P = RCC;
    using T = stm32h745_cm4_rcc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, RCC>
{
    static constexpr periph_t P = RCC;
    using T = stm32h745_cm4_rcc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, RCC>
{
    static constexpr periph_t P = RCC;
    using T = stm32h745_cm4_rcc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, RCC>
{
    static constexpr periph_t P = RCC;
    using T = stm32h745_cm4_rcc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, RCC>
{
    static constexpr periph_t P = RCC;
    using T = stm32h745_cm4_rcc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, RCC>
{
    static constexpr periph_t P = RCC;
    using T = stm32h7a3x_rcc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, RCC>
{
    static constexpr periph_t P = RCC;
    using T = stm32h7a3x_rcc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, RCC>
{
    static constexpr periph_t P = RCC;
    using T = stm32h7a3x_rcc_t;
    static T& V;
};

using rcc_t = peripheral_t<svd, RCC>;

template<int INST> struct rcc_traits {};

template<> struct rcc_traits<0>
{
    using rcc = rcc_t;
    static constexpr signal_t MCO_1 = RCC_MCO_1;
    static constexpr signal_t MCO_2 = RCC_MCO_2;
};
