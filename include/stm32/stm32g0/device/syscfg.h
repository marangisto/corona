#pragma once

////
//
//      STM32G0 SYSCFG peripherals
//
///

// SYSCFG: System configuration controller

struct stm32g030_syscfg_t
{
    volatile uint32_t CFGR1; // SYSCFG configuration register 1
    reserved_t<0x5> _0x4;
    volatile uint32_t CFGR2; // SYSCFG configuration register 1

    static constexpr uint32_t CFGR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<22, 0x3> CFGR1_I2C_PAX_FMP; // Fast Mode Plus (FM+) driving capability activation bits
    static constexpr uint32_t CFGR1_I2C2_FMP = 0x200000; // FM+ driving capability activation for I2C2
    static constexpr uint32_t CFGR1_I2C1_FMP = 0x100000; // FM+ driving capability activation for I2C1
    typedef bit_field_t<16, 0xf> CFGR1_I2C_PBX_FMP; // Fast Mode Plus (FM+) driving capability activation bits
    static constexpr uint32_t CFGR1_BOOSTEN = 0x100; // I/O analog switch voltage booster enable
    typedef bit_field_t<6, 0x3> CFGR1_IR_MOD; // IR Modulation Envelope signal selection.
    static constexpr uint32_t CFGR1_IR_POL = 0x20; // IR output polarity selection
    static constexpr uint32_t CFGR1_PA11_PA12_RMP = 0x10; // PA11 and PA12 remapping bit.
    typedef bit_field_t<0, 0x3> CFGR1_MEM_MODE; // Memory mapping selection bits


    static constexpr uint32_t CFGR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR2_LOCKUP_LOCK = 0x1; // Cortex-M0+ LOCKUP bit enable bit
    static constexpr uint32_t CFGR2_SRAM_PARITY_LOCK = 0x2; // SRAM parity lock bit
    static constexpr uint32_t CFGR2_PVD_LOCK = 0x4; // PVD lock enable bit
    static constexpr uint32_t CFGR2_ECC_LOCK = 0x8; // ECC error lock bit
    static constexpr uint32_t CFGR2_SRAM_PEF = 0x100; // SRAM parity error flag
    static constexpr uint32_t CFGR2_PA1_CDEN = 0x10000; // PA1_CDEN
    static constexpr uint32_t CFGR2_PA3_CDEN = 0x20000; // PA3_CDEN
    static constexpr uint32_t CFGR2_PA5_CDEN = 0x40000; // PA5_CDEN
    static constexpr uint32_t CFGR2_PA6_CDEN = 0x80000; // PA6_CDEN
    static constexpr uint32_t CFGR2_PA13_CDEN = 0x100000; // PA13_CDEN
    static constexpr uint32_t CFGR2_PB0_CDEN = 0x200000; // PB0_CDEN
    static constexpr uint32_t CFGR2_PB1_CDEN = 0x400000; // PB1_CDEN
    static constexpr uint32_t CFGR2_PB2_CDEN = 0x800000; // PB2_CDEN
};

// SYSCFG: System configuration controller

struct stm32g070_syscfg_t
{
    volatile uint32_t CFGR1; // SYSCFG configuration register 1
    reserved_t<0x5> _0x4;
    volatile uint32_t CFGR2; // SYSCFG configuration register 1
    reserved_t<0x5> _0x1c;
    volatile uint32_t VREFBUF_CSR; // VREFBUF control and status register
    volatile uint32_t VREFBUF_CCR; // VREFBUF calibration control register
    reserved_t<0x12> _0x38;
    volatile uint32_t ITLINE0; // interrupt line 0 status register
    volatile uint32_t ITLINE1; // interrupt line 1 status register
    volatile uint32_t ITLINE2; // interrupt line 2 status register
    volatile uint32_t ITLINE3; // interrupt line 3 status register
    volatile uint32_t ITLINE4; // interrupt line 4 status register
    volatile uint32_t ITLINE5; // interrupt line 5 status register
    volatile uint32_t ITLINE6; // interrupt line 6 status register
    volatile uint32_t ITLINE7; // interrupt line 7 status register
    volatile uint32_t ITLINE8; // interrupt line 8 status register
    volatile uint32_t ITLINE9; // interrupt line 9 status register
    volatile uint32_t ITLINE10; // interrupt line 10 status register
    volatile uint32_t ITLINE11; // interrupt line 11 status register
    volatile uint32_t ITLINE12; // interrupt line 12 status register
    volatile uint32_t ITLINE13; // interrupt line 13 status register
    volatile uint32_t ITLINE14; // interrupt line 14 status register
    volatile uint32_t ITLINE15; // interrupt line 15 status register
    volatile uint32_t ITLINE16; // interrupt line 16 status register
    volatile uint32_t ITLINE17; // interrupt line 17 status register
    volatile uint32_t ITLINE18; // interrupt line 18 status register
    volatile uint32_t ITLINE19; // interrupt line 19 status register
    volatile uint32_t ITLINE20; // interrupt line 20 status register
    volatile uint32_t ITLINE21; // interrupt line 21 status register
    volatile uint32_t ITLINE22; // interrupt line 22 status register
    volatile uint32_t ITLINE23; // interrupt line 23 status register
    volatile uint32_t ITLINE24; // interrupt line 24 status register
    volatile uint32_t ITLINE25; // interrupt line 25 status register
    volatile uint32_t ITLINE26; // interrupt line 26 status register
    volatile uint32_t ITLINE27; // interrupt line 27 status register
    volatile uint32_t ITLINE28; // interrupt line 28 status register
    volatile uint32_t ITLINE29; // interrupt line 29 status register
    volatile uint32_t ITLINE30; // interrupt line 30 status register
    volatile uint32_t ITLINE31; // interrupt line 31 status register

    static constexpr uint32_t CFGR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<22, 0x3> CFGR1_I2C_PAX_FMP; // Fast Mode Plus (FM+) driving capability activation bits
    static constexpr uint32_t CFGR1_I2C2_FMP = 0x200000; // FM+ driving capability activation for I2C2
    static constexpr uint32_t CFGR1_I2C1_FMP = 0x100000; // FM+ driving capability activation for I2C1
    typedef bit_field_t<16, 0xf> CFGR1_I2C_PBX_FMP; // Fast Mode Plus (FM+) driving capability activation bits
    static constexpr uint32_t CFGR1_UCPD2_STROBE = 0x400; // Strobe signal bit for UCPD2
    static constexpr uint32_t CFGR1_UCPD1_STROBE = 0x200; // Strobe signal bit for UCPD1
    static constexpr uint32_t CFGR1_BOOSTEN = 0x100; // I/O analog switch voltage booster enable
    typedef bit_field_t<6, 0x3> CFGR1_IR_MOD; // IR Modulation Envelope signal selection.
    static constexpr uint32_t CFGR1_IR_POL = 0x20; // IR output polarity selection
    static constexpr uint32_t CFGR1_PA11_PA12_RMP = 0x10; // PA11 and PA12 remapping bit.
    typedef bit_field_t<0, 0x3> CFGR1_MEM_MODE; // Memory mapping selection bits


    static constexpr uint32_t CFGR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR2_LOCKUP_LOCK = 0x1; // Cortex-M0+ LOCKUP bit enable bit
    static constexpr uint32_t CFGR2_SRAM_PARITY_LOCK = 0x2; // SRAM parity lock bit
    static constexpr uint32_t CFGR2_PVD_LOCK = 0x4; // PVD lock enable bit
    static constexpr uint32_t CFGR2_ECC_LOCK = 0x8; // ECC error lock bit
    static constexpr uint32_t CFGR2_SRAM_PEF = 0x100; // SRAM parity error flag


    static constexpr uint32_t VREFBUF_CSR_RESET_VALUE = 0x2; // Reset value
    static constexpr uint32_t VREFBUF_CSR_ENVR = 0x1; // Voltage reference buffer mode enable This bit is used to enable the voltage reference buffer mode.
    static constexpr uint32_t VREFBUF_CSR_HIZ = 0x2; // High impedance mode This bit controls the analog switch to connect or not the VREF+ pin. Refer to Table196: VREF buffer modes for the mode descriptions depending on ENVR bit configuration.
    static constexpr uint32_t VREFBUF_CSR_VRR = 0x8; // Voltage reference buffer ready
    typedef bit_field_t<4, 0x7> VREFBUF_CSR_VRS; // Voltage reference scale These bits select the value generated by the voltage reference buffer. Other: Reserved

    static constexpr uint32_t VREFBUF_CCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> VREFBUF_CCR_TRIM; // Trimming code These bits are automatically initialized after reset with the trimming value stored in the Flash memory during the production test. Writing into these bits allows to tune the internal reference buffer voltage.


    static constexpr uint32_t ITLINE0_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE0_WWDG = 0x1; // Window watchdog interrupt pending flag

    static constexpr uint32_t ITLINE1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE1_PVDOUT = 0x1; // PVD supply monitoring interrupt request pending (EXTI line 16).

    static constexpr uint32_t ITLINE2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE2_TAMP = 0x1; // TAMP
    static constexpr uint32_t ITLINE2_RTC = 0x2; // RTC

    static constexpr uint32_t ITLINE3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE3_FLASH_ITF = 0x1; // FLASH_ITF
    static constexpr uint32_t ITLINE3_FLASH_ECC = 0x2; // FLASH_ECC

    static constexpr uint32_t ITLINE4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE4_RCC = 0x1; // RCC

    static constexpr uint32_t ITLINE5_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE5_EXTI0 = 0x1; // EXTI0
    static constexpr uint32_t ITLINE5_EXTI1 = 0x2; // EXTI1

    static constexpr uint32_t ITLINE6_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE6_EXTI2 = 0x1; // EXTI2
    static constexpr uint32_t ITLINE6_EXTI3 = 0x2; // EXTI3

    static constexpr uint32_t ITLINE7_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE7_EXTI4 = 0x1; // EXTI4
    static constexpr uint32_t ITLINE7_EXTI5 = 0x2; // EXTI5
    static constexpr uint32_t ITLINE7_EXTI6 = 0x4; // EXTI6
    static constexpr uint32_t ITLINE7_EXTI7 = 0x8; // EXTI7
    static constexpr uint32_t ITLINE7_EXTI8 = 0x10; // EXTI8
    static constexpr uint32_t ITLINE7_EXTI9 = 0x20; // EXTI9
    static constexpr uint32_t ITLINE7_EXTI10 = 0x40; // EXTI10
    static constexpr uint32_t ITLINE7_EXTI11 = 0x80; // EXTI11
    static constexpr uint32_t ITLINE7_EXTI12 = 0x100; // EXTI12
    static constexpr uint32_t ITLINE7_EXTI13 = 0x200; // EXTI13
    static constexpr uint32_t ITLINE7_EXTI14 = 0x400; // EXTI14
    static constexpr uint32_t ITLINE7_EXTI15 = 0x800; // EXTI15

    static constexpr uint32_t ITLINE8_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE8_UCPD1 = 0x1; // UCPD1
    static constexpr uint32_t ITLINE8_UCPD2 = 0x2; // UCPD2

    static constexpr uint32_t ITLINE9_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE9_DMA1_CH1 = 0x1; // DMA1_CH1

    static constexpr uint32_t ITLINE10_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE10_DMA1_CH2 = 0x1; // DMA1_CH1
    static constexpr uint32_t ITLINE10_DMA1_CH3 = 0x2; // DMA1_CH3

    static constexpr uint32_t ITLINE11_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE11_DMAMUX = 0x1; // DMAMUX
    static constexpr uint32_t ITLINE11_DMA1_CH4 = 0x2; // DMA1_CH4
    static constexpr uint32_t ITLINE11_DMA1_CH5 = 0x4; // DMA1_CH5
    static constexpr uint32_t ITLINE11_DMA1_CH6 = 0x8; // DMA1_CH6
    static constexpr uint32_t ITLINE11_DMA1_CH7 = 0x10; // DMA1_CH7

    static constexpr uint32_t ITLINE12_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE12_ADC = 0x1; // ADC
    static constexpr uint32_t ITLINE12_COMP1 = 0x2; // COMP1
    static constexpr uint32_t ITLINE12_COMP2 = 0x4; // COMP2

    static constexpr uint32_t ITLINE13_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE13_TIM1_CCU = 0x1; // TIM1_CCU
    static constexpr uint32_t ITLINE13_TIM1_TRG = 0x2; // TIM1_TRG
    static constexpr uint32_t ITLINE13_TIM1_UPD = 0x4; // TIM1_UPD
    static constexpr uint32_t ITLINE13_TIM1_BRK = 0x8; // TIM1_BRK

    static constexpr uint32_t ITLINE14_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE14_TIM1_CC = 0x1; // TIM1_CC

    static constexpr uint32_t ITLINE15_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE15_TIM2 = 0x1; // TIM2

    static constexpr uint32_t ITLINE16_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE16_TIM3 = 0x1; // TIM3

    static constexpr uint32_t ITLINE17_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE17_TIM6 = 0x1; // TIM6
    static constexpr uint32_t ITLINE17_DAC = 0x2; // DAC
    static constexpr uint32_t ITLINE17_LPTIM1 = 0x4; // LPTIM1

    static constexpr uint32_t ITLINE18_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE18_TIM7 = 0x1; // TIM7
    static constexpr uint32_t ITLINE18_LPTIM2 = 0x2; // LPTIM2

    static constexpr uint32_t ITLINE19_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE19_TIM14 = 0x1; // TIM14

    static constexpr uint32_t ITLINE20_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE20_TIM15 = 0x1; // TIM15

    static constexpr uint32_t ITLINE21_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE21_TIM16 = 0x1; // TIM16

    static constexpr uint32_t ITLINE22_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE22_TIM17 = 0x1; // TIM17

    static constexpr uint32_t ITLINE23_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE23_I2C1 = 0x1; // I2C1

    static constexpr uint32_t ITLINE24_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE24_I2C2 = 0x1; // I2C2

    static constexpr uint32_t ITLINE25_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE25_SPI1 = 0x1; // SPI1

    static constexpr uint32_t ITLINE26_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE26_SPI2 = 0x1; // SPI2

    static constexpr uint32_t ITLINE27_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE27_USART1 = 0x1; // USART1

    static constexpr uint32_t ITLINE28_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE28_USART2 = 0x1; // USART2

    static constexpr uint32_t ITLINE29_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE29_USART3 = 0x1; // USART3
    static constexpr uint32_t ITLINE29_USART4 = 0x2; // USART4
    static constexpr uint32_t ITLINE29_USART5 = 0x4; // USART5

    static constexpr uint32_t ITLINE30_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE30_USART2 = 0x1; // CEC

    static constexpr uint32_t ITLINE31_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE31_RNG = 0x1; // RNG
    static constexpr uint32_t ITLINE31_AES = 0x2; // AES
};

// SYSCFG: System configuration controller

struct stm32g071_syscfg_t
{
    volatile uint32_t CFGR1; // SYSCFG configuration register 1
    reserved_t<0x5> _0x4;
    volatile uint32_t CFGR2; // SYSCFG configuration register 1
    reserved_t<0x5> _0x1c;
    volatile uint32_t VREFBUF_CSR; // VREFBUF control and status register
    volatile uint32_t VREFBUF_CCR; // VREFBUF calibration control register
    reserved_t<0x12> _0x38;
    volatile uint32_t ITLINE0; // interrupt line 0 status register
    volatile uint32_t ITLINE1; // interrupt line 1 status register
    volatile uint32_t ITLINE2; // interrupt line 2 status register
    volatile uint32_t ITLINE3; // interrupt line 3 status register
    volatile uint32_t ITLINE4; // interrupt line 4 status register
    volatile uint32_t ITLINE5; // interrupt line 5 status register
    volatile uint32_t ITLINE6; // interrupt line 6 status register
    volatile uint32_t ITLINE7; // interrupt line 7 status register
    volatile uint32_t ITLINE8; // interrupt line 8 status register
    volatile uint32_t ITLINE9; // interrupt line 9 status register
    volatile uint32_t ITLINE10; // interrupt line 10 status register
    volatile uint32_t ITLINE11; // interrupt line 11 status register
    volatile uint32_t ITLINE12; // interrupt line 12 status register
    volatile uint32_t ITLINE13; // interrupt line 13 status register
    volatile uint32_t ITLINE14; // interrupt line 14 status register
    volatile uint32_t ITLINE15; // interrupt line 15 status register
    volatile uint32_t ITLINE16; // interrupt line 16 status register
    volatile uint32_t ITLINE17; // interrupt line 17 status register
    volatile uint32_t ITLINE18; // interrupt line 18 status register
    volatile uint32_t ITLINE19; // interrupt line 19 status register
    volatile uint32_t ITLINE20; // interrupt line 20 status register
    volatile uint32_t ITLINE21; // interrupt line 21 status register
    volatile uint32_t ITLINE22; // interrupt line 22 status register
    volatile uint32_t ITLINE23; // interrupt line 23 status register
    volatile uint32_t ITLINE24; // interrupt line 24 status register
    volatile uint32_t ITLINE25; // interrupt line 25 status register
    volatile uint32_t ITLINE26; // interrupt line 26 status register
    volatile uint32_t ITLINE27; // interrupt line 27 status register
    volatile uint32_t ITLINE28; // interrupt line 28 status register
    volatile uint32_t ITLINE29; // interrupt line 29 status register
    volatile uint32_t ITLINE30; // interrupt line 30 status register
    volatile uint32_t ITLINE31; // interrupt line 31 status register

    static constexpr uint32_t CFGR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<22, 0x3> CFGR1_I2C_PAX_FMP; // Fast Mode Plus (FM+) driving capability activation bits
    static constexpr uint32_t CFGR1_I2C2_FMP = 0x200000; // FM+ driving capability activation for I2C2
    static constexpr uint32_t CFGR1_I2C1_FMP = 0x100000; // FM+ driving capability activation for I2C1
    typedef bit_field_t<16, 0xf> CFGR1_I2C_PBX_FMP; // Fast Mode Plus (FM+) driving capability activation bits
    static constexpr uint32_t CFGR1_UCPD2_STROBE = 0x400; // Strobe signal bit for UCPD2
    static constexpr uint32_t CFGR1_UCPD1_STROBE = 0x200; // Strobe signal bit for UCPD1
    static constexpr uint32_t CFGR1_BOOSTEN = 0x100; // I/O analog switch voltage booster enable
    typedef bit_field_t<6, 0x3> CFGR1_IR_MOD; // IR Modulation Envelope signal selection.
    static constexpr uint32_t CFGR1_IR_POL = 0x20; // IR output polarity selection
    static constexpr uint32_t CFGR1_PA11_PA12_RMP = 0x10; // PA11 and PA12 remapping bit.
    typedef bit_field_t<0, 0x3> CFGR1_MEM_MODE; // Memory mapping selection bits


    static constexpr uint32_t CFGR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR2_LOCKUP_LOCK = 0x1; // Cortex-M0+ LOCKUP bit enable bit
    static constexpr uint32_t CFGR2_SRAM_PARITY_LOCK = 0x2; // SRAM parity lock bit
    static constexpr uint32_t CFGR2_PVD_LOCK = 0x4; // PVD lock enable bit
    static constexpr uint32_t CFGR2_ECC_LOCK = 0x8; // ECC error lock bit
    static constexpr uint32_t CFGR2_SRAM_PEF = 0x100; // SRAM parity error flag


    static constexpr uint32_t VREFBUF_CSR_RESET_VALUE = 0x2; // Reset value
    static constexpr uint32_t VREFBUF_CSR_ENVR = 0x1; // Voltage reference buffer mode enable This bit is used to enable the voltage reference buffer mode.
    static constexpr uint32_t VREFBUF_CSR_HIZ = 0x2; // High impedance mode This bit controls the analog switch to connect or not the VREF+ pin. Refer to Table196: VREF buffer modes for the mode descriptions depending on ENVR bit configuration.
    static constexpr uint32_t VREFBUF_CSR_VRS = 0x4; // Voltage reference scale These bits select the value generated by the voltage reference buffer. Other: Reserved
    static constexpr uint32_t VREFBUF_CSR_VRR = 0x8; // Voltage reference buffer ready

    static constexpr uint32_t VREFBUF_CCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> VREFBUF_CCR_TRIM; // Trimming code These bits are automatically initialized after reset with the trimming value stored in the Flash memory during the production test. Writing into these bits allows to tune the internal reference buffer voltage.


    static constexpr uint32_t ITLINE0_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE0_WWDG = 0x1; // Window watchdog interrupt pending flag

    static constexpr uint32_t ITLINE1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE1_PVDOUT = 0x1; // PVD supply monitoring interrupt request pending (EXTI line 16).

    static constexpr uint32_t ITLINE2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE2_TAMP = 0x1; // TAMP
    static constexpr uint32_t ITLINE2_RTC = 0x2; // RTC

    static constexpr uint32_t ITLINE3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE3_FLASH_ITF = 0x1; // FLASH_ITF
    static constexpr uint32_t ITLINE3_FLASH_ECC = 0x2; // FLASH_ECC

    static constexpr uint32_t ITLINE4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE4_RCC = 0x1; // RCC

    static constexpr uint32_t ITLINE5_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE5_EXTI0 = 0x1; // EXTI0
    static constexpr uint32_t ITLINE5_EXTI1 = 0x2; // EXTI1

    static constexpr uint32_t ITLINE6_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE6_EXTI2 = 0x1; // EXTI2
    static constexpr uint32_t ITLINE6_EXTI3 = 0x2; // EXTI3

    static constexpr uint32_t ITLINE7_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE7_EXTI4 = 0x1; // EXTI4
    static constexpr uint32_t ITLINE7_EXTI5 = 0x2; // EXTI5
    static constexpr uint32_t ITLINE7_EXTI6 = 0x4; // EXTI6
    static constexpr uint32_t ITLINE7_EXTI7 = 0x8; // EXTI7
    static constexpr uint32_t ITLINE7_EXTI8 = 0x10; // EXTI8
    static constexpr uint32_t ITLINE7_EXTI9 = 0x20; // EXTI9
    static constexpr uint32_t ITLINE7_EXTI10 = 0x40; // EXTI10
    static constexpr uint32_t ITLINE7_EXTI11 = 0x80; // EXTI11
    static constexpr uint32_t ITLINE7_EXTI12 = 0x100; // EXTI12
    static constexpr uint32_t ITLINE7_EXTI13 = 0x200; // EXTI13
    static constexpr uint32_t ITLINE7_EXTI14 = 0x400; // EXTI14
    static constexpr uint32_t ITLINE7_EXTI15 = 0x800; // EXTI15

    static constexpr uint32_t ITLINE8_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE8_UCPD1 = 0x1; // UCPD1
    static constexpr uint32_t ITLINE8_UCPD2 = 0x2; // UCPD2

    static constexpr uint32_t ITLINE9_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE9_DMA1_CH1 = 0x1; // DMA1_CH1

    static constexpr uint32_t ITLINE10_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE10_DMA1_CH2 = 0x1; // DMA1_CH1
    static constexpr uint32_t ITLINE10_DMA1_CH3 = 0x2; // DMA1_CH3

    static constexpr uint32_t ITLINE11_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE11_DMAMUX = 0x1; // DMAMUX
    static constexpr uint32_t ITLINE11_DMA1_CH4 = 0x2; // DMA1_CH4
    static constexpr uint32_t ITLINE11_DMA1_CH5 = 0x4; // DMA1_CH5
    static constexpr uint32_t ITLINE11_DMA1_CH6 = 0x8; // DMA1_CH6
    static constexpr uint32_t ITLINE11_DMA1_CH7 = 0x10; // DMA1_CH7

    static constexpr uint32_t ITLINE12_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE12_ADC = 0x1; // ADC
    static constexpr uint32_t ITLINE12_COMP1 = 0x2; // COMP1
    static constexpr uint32_t ITLINE12_COMP2 = 0x4; // COMP2

    static constexpr uint32_t ITLINE13_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE13_TIM1_CCU = 0x1; // TIM1_CCU
    static constexpr uint32_t ITLINE13_TIM1_TRG = 0x2; // TIM1_TRG
    static constexpr uint32_t ITLINE13_TIM1_UPD = 0x4; // TIM1_UPD
    static constexpr uint32_t ITLINE13_TIM1_BRK = 0x8; // TIM1_BRK

    static constexpr uint32_t ITLINE14_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE14_TIM1_CC = 0x1; // TIM1_CC

    static constexpr uint32_t ITLINE15_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE15_TIM2 = 0x1; // TIM2

    static constexpr uint32_t ITLINE16_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE16_TIM3 = 0x1; // TIM3

    static constexpr uint32_t ITLINE17_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE17_TIM6 = 0x1; // TIM6
    static constexpr uint32_t ITLINE17_DAC = 0x2; // DAC
    static constexpr uint32_t ITLINE17_LPTIM1 = 0x4; // LPTIM1

    static constexpr uint32_t ITLINE18_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE18_TIM7 = 0x1; // TIM7
    static constexpr uint32_t ITLINE18_LPTIM2 = 0x2; // LPTIM2

    static constexpr uint32_t ITLINE19_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE19_TIM14 = 0x1; // TIM14

    static constexpr uint32_t ITLINE20_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE20_TIM15 = 0x1; // TIM15

    static constexpr uint32_t ITLINE21_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE21_TIM16 = 0x1; // TIM16

    static constexpr uint32_t ITLINE22_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE22_TIM17 = 0x1; // TIM17

    static constexpr uint32_t ITLINE23_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE23_I2C1 = 0x1; // I2C1

    static constexpr uint32_t ITLINE24_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE24_I2C2 = 0x1; // I2C2

    static constexpr uint32_t ITLINE25_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE25_SPI1 = 0x1; // SPI1

    static constexpr uint32_t ITLINE26_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE26_SPI2 = 0x1; // SPI2

    static constexpr uint32_t ITLINE27_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE27_USART1 = 0x1; // USART1

    static constexpr uint32_t ITLINE28_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE28_USART2 = 0x1; // USART2

    static constexpr uint32_t ITLINE29_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE29_USART3 = 0x1; // USART3
    static constexpr uint32_t ITLINE29_USART4 = 0x2; // USART4
    static constexpr uint32_t ITLINE29_USART5 = 0x4; // USART5

    static constexpr uint32_t ITLINE30_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE30_USART2 = 0x1; // CEC

    static constexpr uint32_t ITLINE31_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE31_RNG = 0x1; // RNG
    static constexpr uint32_t ITLINE31_AES = 0x2; // AES
};

// SYSCFG_ITLINE: System configuration controller

struct stm32g030_syscfg_itline_t
{
    reserved_t<0x20> _0x0;
    volatile uint32_t ITLINE0; // interrupt line 0 status register
    volatile uint32_t ITLINE1; // interrupt line 1 status register
    volatile uint32_t ITLINE2; // interrupt line 2 status register
    volatile uint32_t ITLINE3; // interrupt line 3 status register
    volatile uint32_t ITLINE4; // interrupt line 4 status register
    volatile uint32_t ITLINE5; // interrupt line 5 status register
    volatile uint32_t ITLINE6; // interrupt line 6 status register
    volatile uint32_t ITLINE7; // interrupt line 7 status register
    reserved_t<0x1> _0xa0;
    volatile uint32_t ITLINE9; // interrupt line 9 status register
    volatile uint32_t ITLINE10; // interrupt line 10 status register
    volatile uint32_t ITLINE11; // interrupt line 11 status register
    volatile uint32_t ITLINE12; // interrupt line 12 status register
    volatile uint32_t ITLINE13; // interrupt line 13 status register
    volatile uint32_t ITLINE14; // interrupt line 14 status register
    volatile uint32_t ITLINE15; // interrupt line 15 status register
    volatile uint32_t ITLINE16; // interrupt line 16 status register
    reserved_t<0x2> _0xc4;
    volatile uint32_t ITLINE19; // interrupt line 19 status register
    reserved_t<0x1> _0xd0;
    volatile uint32_t ITLINE21; // interrupt line 21 status register
    volatile uint32_t ITLINE22; // interrupt line 22 status register
    volatile uint32_t ITLINE23; // interrupt line 23 status register
    volatile uint32_t ITLINE24; // interrupt line 24 status register
    volatile uint32_t ITLINE25; // interrupt line 25 status register
    volatile uint32_t ITLINE26; // interrupt line 26 status register
    volatile uint32_t ITLINE27; // interrupt line 27 status register
    volatile uint32_t ITLINE28; // interrupt line 28 status register
    volatile uint32_t ITLINE29; // interrupt line 29 status register


    static constexpr uint32_t ITLINE0_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE0_WWDG = 0x1; // Window watchdog interrupt pending flag

    static constexpr uint32_t ITLINE1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE1_PVDOUT = 0x1; // PVD supply monitoring interrupt request pending (EXTI line 16).

    static constexpr uint32_t ITLINE2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE2_TAMP = 0x1; // TAMP
    static constexpr uint32_t ITLINE2_RTC = 0x2; // RTC

    static constexpr uint32_t ITLINE3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE3_FLASH_ITF = 0x1; // FLASH_ITF
    static constexpr uint32_t ITLINE3_FLASH_ECC = 0x2; // FLASH_ECC

    static constexpr uint32_t ITLINE4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE4_RCC = 0x1; // RCC

    static constexpr uint32_t ITLINE5_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE5_EXTI0 = 0x1; // EXTI0
    static constexpr uint32_t ITLINE5_EXTI1 = 0x2; // EXTI1

    static constexpr uint32_t ITLINE6_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE6_EXTI2 = 0x1; // EXTI2
    static constexpr uint32_t ITLINE6_EXTI3 = 0x2; // EXTI3

    static constexpr uint32_t ITLINE7_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE7_EXTI4 = 0x1; // EXTI4
    static constexpr uint32_t ITLINE7_EXTI5 = 0x2; // EXTI5
    static constexpr uint32_t ITLINE7_EXTI6 = 0x4; // EXTI6
    static constexpr uint32_t ITLINE7_EXTI7 = 0x8; // EXTI7
    static constexpr uint32_t ITLINE7_EXTI8 = 0x10; // EXTI8
    static constexpr uint32_t ITLINE7_EXTI9 = 0x20; // EXTI9
    static constexpr uint32_t ITLINE7_EXTI10 = 0x40; // EXTI10
    static constexpr uint32_t ITLINE7_EXTI11 = 0x80; // EXTI11
    static constexpr uint32_t ITLINE7_EXTI12 = 0x100; // EXTI12
    static constexpr uint32_t ITLINE7_EXTI13 = 0x200; // EXTI13
    static constexpr uint32_t ITLINE7_EXTI14 = 0x400; // EXTI14
    static constexpr uint32_t ITLINE7_EXTI15 = 0x800; // EXTI15


    static constexpr uint32_t ITLINE9_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE9_DMA1_CH1 = 0x1; // DMA1_CH1

    static constexpr uint32_t ITLINE10_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE10_DMA1_CH2 = 0x1; // DMA1_CH1
    static constexpr uint32_t ITLINE10_DMA1_CH3 = 0x2; // DMA1_CH3

    static constexpr uint32_t ITLINE11_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE11_DMAMUX = 0x1; // DMAMUX
    static constexpr uint32_t ITLINE11_DMA1_CH4 = 0x2; // DMA1_CH4
    static constexpr uint32_t ITLINE11_DMA1_CH5 = 0x4; // DMA1_CH5

    static constexpr uint32_t ITLINE12_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE12_ADC = 0x1; // ADC

    static constexpr uint32_t ITLINE13_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE13_TIM1_CCU = 0x1; // TIM1_CCU
    static constexpr uint32_t ITLINE13_TIM1_TRG = 0x2; // TIM1_TRG
    static constexpr uint32_t ITLINE13_TIM1_UPD = 0x4; // TIM1_UPD
    static constexpr uint32_t ITLINE13_TIM1_BRK = 0x8; // TIM1_BRK

    static constexpr uint32_t ITLINE14_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE14_TIM1_CC = 0x1; // TIM1_CC

    static constexpr uint32_t ITLINE15_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE15_TIM2 = 0x1; // TIM2

    static constexpr uint32_t ITLINE16_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE16_TIM3 = 0x1; // TIM3


    static constexpr uint32_t ITLINE19_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE19_TIM14 = 0x1; // TIM14


    static constexpr uint32_t ITLINE21_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE21_TIM16 = 0x1; // TIM16

    static constexpr uint32_t ITLINE22_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE22_TIM17 = 0x1; // TIM17

    static constexpr uint32_t ITLINE23_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE23_I2C1 = 0x1; // I2C1

    static constexpr uint32_t ITLINE24_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE24_I2C2 = 0x1; // I2C2

    static constexpr uint32_t ITLINE25_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE25_SPI1 = 0x1; // SPI1

    static constexpr uint32_t ITLINE26_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE26_SPI2 = 0x1; // SPI2

    static constexpr uint32_t ITLINE27_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE27_USART1 = 0x1; // USART1

    static constexpr uint32_t ITLINE28_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE28_USART2 = 0x1; // USART2

    static constexpr uint32_t ITLINE29_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE29_USART5 = 0x4; // USART5
};

// SYSCFG_ITLINE: System configuration controller

struct stm32g031_syscfg_itline_t
{
    reserved_t<0x20> _0x0;
    volatile uint32_t ITLINE0; // interrupt line 0 status register
    volatile uint32_t ITLINE1; // interrupt line 1 status register
    volatile uint32_t ITLINE2; // interrupt line 2 status register
    volatile uint32_t ITLINE3; // interrupt line 3 status register
    volatile uint32_t ITLINE4; // interrupt line 4 status register
    volatile uint32_t ITLINE5; // interrupt line 5 status register
    volatile uint32_t ITLINE6; // interrupt line 6 status register
    volatile uint32_t ITLINE7; // interrupt line 7 status register
    reserved_t<0x1> _0xa0;
    volatile uint32_t ITLINE9; // interrupt line 9 status register
    volatile uint32_t ITLINE10; // interrupt line 10 status register
    volatile uint32_t ITLINE11; // interrupt line 11 status register
    volatile uint32_t ITLINE12; // interrupt line 12 status register
    volatile uint32_t ITLINE13; // interrupt line 13 status register
    volatile uint32_t ITLINE14; // interrupt line 14 status register
    volatile uint32_t ITLINE15; // interrupt line 15 status register
    volatile uint32_t ITLINE16; // interrupt line 16 status register
    volatile uint32_t ITLINE17; // interrupt line 17 status register
    volatile uint32_t ITLINE18; // interrupt line 18 status register
    volatile uint32_t ITLINE19; // interrupt line 19 status register
    reserved_t<0x1> _0xd0;
    volatile uint32_t ITLINE21; // interrupt line 21 status register
    volatile uint32_t ITLINE22; // interrupt line 22 status register
    volatile uint32_t ITLINE23; // interrupt line 23 status register
    volatile uint32_t ITLINE24; // interrupt line 24 status register
    volatile uint32_t ITLINE25; // interrupt line 25 status register
    volatile uint32_t ITLINE26; // interrupt line 26 status register
    volatile uint32_t ITLINE27; // interrupt line 27 status register
    volatile uint32_t ITLINE28; // interrupt line 28 status register
    volatile uint32_t ITLINE29; // interrupt line 29 status register


    static constexpr uint32_t ITLINE0_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE0_WWDG = 0x1; // Window watchdog interrupt pending flag

    static constexpr uint32_t ITLINE1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE1_PVDOUT = 0x1; // PVD supply monitoring interrupt request pending (EXTI line 16).

    static constexpr uint32_t ITLINE2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE2_TAMP = 0x1; // TAMP
    static constexpr uint32_t ITLINE2_RTC = 0x2; // RTC

    static constexpr uint32_t ITLINE3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE3_FLASH_ITF = 0x1; // FLASH_ITF
    static constexpr uint32_t ITLINE3_FLASH_ECC = 0x2; // FLASH_ECC

    static constexpr uint32_t ITLINE4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE4_RCC = 0x1; // RCC

    static constexpr uint32_t ITLINE5_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE5_EXTI0 = 0x1; // EXTI0
    static constexpr uint32_t ITLINE5_EXTI1 = 0x2; // EXTI1

    static constexpr uint32_t ITLINE6_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE6_EXTI2 = 0x1; // EXTI2
    static constexpr uint32_t ITLINE6_EXTI3 = 0x2; // EXTI3

    static constexpr uint32_t ITLINE7_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE7_EXTI4 = 0x1; // EXTI4
    static constexpr uint32_t ITLINE7_EXTI5 = 0x2; // EXTI5
    static constexpr uint32_t ITLINE7_EXTI6 = 0x4; // EXTI6
    static constexpr uint32_t ITLINE7_EXTI7 = 0x8; // EXTI7
    static constexpr uint32_t ITLINE7_EXTI8 = 0x10; // EXTI8
    static constexpr uint32_t ITLINE7_EXTI9 = 0x20; // EXTI9
    static constexpr uint32_t ITLINE7_EXTI10 = 0x40; // EXTI10
    static constexpr uint32_t ITLINE7_EXTI11 = 0x80; // EXTI11
    static constexpr uint32_t ITLINE7_EXTI12 = 0x100; // EXTI12
    static constexpr uint32_t ITLINE7_EXTI13 = 0x200; // EXTI13
    static constexpr uint32_t ITLINE7_EXTI14 = 0x400; // EXTI14
    static constexpr uint32_t ITLINE7_EXTI15 = 0x800; // EXTI15


    static constexpr uint32_t ITLINE9_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE9_DMA1_CH1 = 0x1; // DMA1_CH1

    static constexpr uint32_t ITLINE10_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE10_DMA1_CH2 = 0x1; // DMA1_CH1
    static constexpr uint32_t ITLINE10_DMA1_CH3 = 0x2; // DMA1_CH3

    static constexpr uint32_t ITLINE11_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE11_DMAMUX = 0x1; // DMAMUX
    static constexpr uint32_t ITLINE11_DMA1_CH4 = 0x2; // DMA1_CH4
    static constexpr uint32_t ITLINE11_DMA1_CH5 = 0x4; // DMA1_CH5

    static constexpr uint32_t ITLINE12_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE12_ADC = 0x1; // ADC

    static constexpr uint32_t ITLINE13_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE13_TIM1_CCU = 0x1; // TIM1_CCU
    static constexpr uint32_t ITLINE13_TIM1_TRG = 0x2; // TIM1_TRG
    static constexpr uint32_t ITLINE13_TIM1_UPD = 0x4; // TIM1_UPD
    static constexpr uint32_t ITLINE13_TIM1_BRK = 0x8; // TIM1_BRK

    static constexpr uint32_t ITLINE14_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE14_TIM1_CC = 0x1; // TIM1_CC

    static constexpr uint32_t ITLINE15_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE15_TIM2 = 0x1; // TIM2

    static constexpr uint32_t ITLINE16_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE16_TIM3 = 0x1; // TIM3

    static constexpr uint32_t ITLINE17_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE17_LPTIM1 = 0x4; // LPTIM1

    static constexpr uint32_t ITLINE18_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE18_LPTIM2 = 0x2; // LPTIM2

    static constexpr uint32_t ITLINE19_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE19_TIM14 = 0x1; // TIM14


    static constexpr uint32_t ITLINE21_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE21_TIM16 = 0x1; // TIM16

    static constexpr uint32_t ITLINE22_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE22_TIM17 = 0x1; // TIM17

    static constexpr uint32_t ITLINE23_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE23_I2C1 = 0x1; // I2C1

    static constexpr uint32_t ITLINE24_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE24_I2C2 = 0x1; // I2C2

    static constexpr uint32_t ITLINE25_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE25_SPI1 = 0x1; // SPI1

    static constexpr uint32_t ITLINE26_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE26_SPI2 = 0x1; // SPI2

    static constexpr uint32_t ITLINE27_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE27_USART1 = 0x1; // USART1

    static constexpr uint32_t ITLINE28_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE28_USART2 = 0x1; // USART2

    static constexpr uint32_t ITLINE29_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE29_USART5 = 0x4; // USART5
};

// SYSCFG_ITLINE: System configuration controller

struct stm32g041_syscfg_itline_t
{
    reserved_t<0x20> _0x0;
    volatile uint32_t ITLINE0; // interrupt line 0 status register
    volatile uint32_t ITLINE1; // interrupt line 1 status register
    volatile uint32_t ITLINE2; // interrupt line 2 status register
    volatile uint32_t ITLINE3; // interrupt line 3 status register
    volatile uint32_t ITLINE4; // interrupt line 4 status register
    volatile uint32_t ITLINE5; // interrupt line 5 status register
    volatile uint32_t ITLINE6; // interrupt line 6 status register
    volatile uint32_t ITLINE7; // interrupt line 7 status register
    reserved_t<0x1> _0xa0;
    volatile uint32_t ITLINE9; // interrupt line 9 status register
    volatile uint32_t ITLINE10; // interrupt line 10 status register
    volatile uint32_t ITLINE11; // interrupt line 11 status register
    volatile uint32_t ITLINE12; // interrupt line 12 status register
    volatile uint32_t ITLINE13; // interrupt line 13 status register
    volatile uint32_t ITLINE14; // interrupt line 14 status register
    volatile uint32_t ITLINE15; // interrupt line 15 status register
    volatile uint32_t ITLINE16; // interrupt line 16 status register
    volatile uint32_t ITLINE17; // interrupt line 17 status register
    volatile uint32_t ITLINE18; // interrupt line 18 status register
    volatile uint32_t ITLINE19; // interrupt line 19 status register
    reserved_t<0x1> _0xd0;
    volatile uint32_t ITLINE21; // interrupt line 21 status register
    volatile uint32_t ITLINE22; // interrupt line 22 status register
    volatile uint32_t ITLINE23; // interrupt line 23 status register
    volatile uint32_t ITLINE24; // interrupt line 24 status register
    volatile uint32_t ITLINE25; // interrupt line 25 status register
    volatile uint32_t ITLINE26; // interrupt line 26 status register
    volatile uint32_t ITLINE27; // interrupt line 27 status register
    volatile uint32_t ITLINE28; // interrupt line 28 status register
    volatile uint32_t ITLINE29; // interrupt line 29 status register
    reserved_t<0x1> _0xf8;
    volatile uint32_t ITLINE31; // interrupt line 31 status register


    static constexpr uint32_t ITLINE0_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE0_WWDG = 0x1; // Window watchdog interrupt pending flag

    static constexpr uint32_t ITLINE1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE1_PVDOUT = 0x1; // PVD supply monitoring interrupt request pending (EXTI line 16).

    static constexpr uint32_t ITLINE2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE2_TAMP = 0x1; // TAMP
    static constexpr uint32_t ITLINE2_RTC = 0x2; // RTC

    static constexpr uint32_t ITLINE3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE3_FLASH_ITF = 0x1; // FLASH_ITF
    static constexpr uint32_t ITLINE3_FLASH_ECC = 0x2; // FLASH_ECC

    static constexpr uint32_t ITLINE4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE4_RCC = 0x1; // RCC

    static constexpr uint32_t ITLINE5_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE5_EXTI0 = 0x1; // EXTI0
    static constexpr uint32_t ITLINE5_EXTI1 = 0x2; // EXTI1

    static constexpr uint32_t ITLINE6_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE6_EXTI2 = 0x1; // EXTI2
    static constexpr uint32_t ITLINE6_EXTI3 = 0x2; // EXTI3

    static constexpr uint32_t ITLINE7_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE7_EXTI4 = 0x1; // EXTI4
    static constexpr uint32_t ITLINE7_EXTI5 = 0x2; // EXTI5
    static constexpr uint32_t ITLINE7_EXTI6 = 0x4; // EXTI6
    static constexpr uint32_t ITLINE7_EXTI7 = 0x8; // EXTI7
    static constexpr uint32_t ITLINE7_EXTI8 = 0x10; // EXTI8
    static constexpr uint32_t ITLINE7_EXTI9 = 0x20; // EXTI9
    static constexpr uint32_t ITLINE7_EXTI10 = 0x40; // EXTI10
    static constexpr uint32_t ITLINE7_EXTI11 = 0x80; // EXTI11
    static constexpr uint32_t ITLINE7_EXTI12 = 0x100; // EXTI12
    static constexpr uint32_t ITLINE7_EXTI13 = 0x200; // EXTI13
    static constexpr uint32_t ITLINE7_EXTI14 = 0x400; // EXTI14
    static constexpr uint32_t ITLINE7_EXTI15 = 0x800; // EXTI15


    static constexpr uint32_t ITLINE9_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE9_DMA1_CH1 = 0x1; // DMA1_CH1

    static constexpr uint32_t ITLINE10_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE10_DMA1_CH2 = 0x1; // DMA1_CH1
    static constexpr uint32_t ITLINE10_DMA1_CH3 = 0x2; // DMA1_CH3

    static constexpr uint32_t ITLINE11_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE11_DMAMUX = 0x1; // DMAMUX
    static constexpr uint32_t ITLINE11_DMA1_CH4 = 0x2; // DMA1_CH4
    static constexpr uint32_t ITLINE11_DMA1_CH5 = 0x4; // DMA1_CH5

    static constexpr uint32_t ITLINE12_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE12_ADC = 0x1; // ADC

    static constexpr uint32_t ITLINE13_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE13_TIM1_CCU = 0x1; // TIM1_CCU
    static constexpr uint32_t ITLINE13_TIM1_TRG = 0x2; // TIM1_TRG
    static constexpr uint32_t ITLINE13_TIM1_UPD = 0x4; // TIM1_UPD
    static constexpr uint32_t ITLINE13_TIM1_BRK = 0x8; // TIM1_BRK

    static constexpr uint32_t ITLINE14_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE14_TIM1_CC = 0x1; // TIM1_CC

    static constexpr uint32_t ITLINE15_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE15_TIM2 = 0x1; // TIM2

    static constexpr uint32_t ITLINE16_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE16_TIM3 = 0x1; // TIM3

    static constexpr uint32_t ITLINE17_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE17_LPTIM1 = 0x4; // LPTIM1

    static constexpr uint32_t ITLINE18_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE18_LPTIM2 = 0x2; // LPTIM2

    static constexpr uint32_t ITLINE19_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE19_TIM14 = 0x1; // TIM14


    static constexpr uint32_t ITLINE21_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE21_TIM16 = 0x1; // TIM16

    static constexpr uint32_t ITLINE22_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE22_TIM17 = 0x1; // TIM17

    static constexpr uint32_t ITLINE23_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE23_I2C1 = 0x1; // I2C1

    static constexpr uint32_t ITLINE24_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE24_I2C2 = 0x1; // I2C2

    static constexpr uint32_t ITLINE25_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE25_SPI1 = 0x1; // SPI1

    static constexpr uint32_t ITLINE26_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE26_SPI2 = 0x1; // SPI2

    static constexpr uint32_t ITLINE27_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE27_USART1 = 0x1; // USART1

    static constexpr uint32_t ITLINE28_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE28_USART2 = 0x1; // USART2

    static constexpr uint32_t ITLINE29_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE29_USART5 = 0x4; // USART5


    static constexpr uint32_t ITLINE31_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ITLINE31_RNG = 0x1; // RNG
    static constexpr uint32_t ITLINE31_AES = 0x2; // AES
};

template<>
struct peripheral_t<STM32G030, SYSCFG>
{
    static constexpr periph_t P = SYSCFG;
    using T = stm32g030_syscfg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G031, SYSCFG>
{
    static constexpr periph_t P = SYSCFG;
    using T = stm32g030_syscfg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G041, SYSCFG>
{
    static constexpr periph_t P = SYSCFG;
    using T = stm32g030_syscfg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G070, SYSCFG>
{
    static constexpr periph_t P = SYSCFG;
    using T = stm32g070_syscfg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G081, SYSCFG>
{
    static constexpr periph_t P = SYSCFG;
    using T = stm32g070_syscfg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G071, SYSCFG>
{
    static constexpr periph_t P = SYSCFG;
    using T = stm32g071_syscfg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G030, SYSCFG_ITLINE>
{
    static constexpr periph_t P = SYSCFG_ITLINE;
    using T = stm32g030_syscfg_itline_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G031, SYSCFG_ITLINE>
{
    static constexpr periph_t P = SYSCFG_ITLINE;
    using T = stm32g031_syscfg_itline_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G041, SYSCFG_ITLINE>
{
    static constexpr periph_t P = SYSCFG_ITLINE;
    using T = stm32g041_syscfg_itline_t;
    static T& V;
};

using syscfg_t = peripheral_t<svd, SYSCFG>;
using syscfg_itline_t = peripheral_t<svd, SYSCFG_ITLINE>;

template<int INST> struct syscfg_traits {};

template<> struct syscfg_traits<0>
{
    using syscfg = syscfg_t;
    static constexpr clock_source_t CLOCK = APB2_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB2ENR |= RCC::T::APB2ENR_SYSCFGEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB2ENR &= ~RCC::T::APB2ENR_SYSCFGEN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.APB2SMENR |= RCC::T::APB2SMENR_SYSCFGSMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.APB2SMENR &= ~RCC::T::APB2SMENR_SYSCFGSMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB2RSTR |= RCC::T::APB2RSTR_SYSCFGRST;
    }
};
