#pragma once

////
//
//      STM32WB SYSCFG peripherals
//
///

// SYSCFG: System configuration controller

struct stm32wb30_cm4_syscfg_t
{
    volatile uint32_t MEMRMP; // memory remap register
    volatile uint32_t CFGR1; // configuration register 1
    volatile uint32_t EXTICR1; // external interrupt configuration register 1
    volatile uint32_t EXTICR2; // external interrupt configuration register 2
    volatile uint32_t EXTICR3; // external interrupt configuration register 3
    volatile uint32_t EXTICR4; // external interrupt configuration register 4
    volatile uint32_t SCSR; // SCSR
    volatile uint32_t CFGR2; // CFGR2
    volatile uint32_t SWPR; // SRAM2 write protection register
    volatile uint32_t SKR; // SKR
    volatile uint32_t SWPR2; // SRAM2 write protection register 2
    reserved_t<0x35> _0x2c;
    volatile uint32_t IMR1; // CPU1 interrupt mask register 1
    volatile uint32_t IMR2; // CPU1 interrupt mask register 2
    volatile uint32_t C2IMR1; // CPU2 interrupt mask register 1
    volatile uint32_t C2IMR2; // CPU2 interrupt mask register 1
    volatile uint32_t SIPCR; // secure IP control register

    static constexpr uint32_t MEMRMP_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> MEMRMP_MEM_MODE; // Memory mapping selection

    static constexpr uint32_t CFGR1_RESET_VALUE = 0x7c000001; // Reset value
    typedef bit_field_t<26, 0x3f> CFGR1_FPU_IE; // Floating Point Unit interrupts enable bits
    static constexpr uint32_t CFGR1_I2C3_FMP = 0x400000; // I2C3 Fast-mode Plus driving capability activation
    static constexpr uint32_t CFGR1_I2C1_FMP = 0x100000; // I2C1 Fast-mode Plus driving capability activation
    static constexpr uint32_t CFGR1_I2C_PB9_FMP = 0x80000; // Fast-mode Plus (Fm+) driving capability activation on PB9
    static constexpr uint32_t CFGR1_I2C_PB8_FMP = 0x40000; // Fast-mode Plus (Fm+) driving capability activation on PB8
    static constexpr uint32_t CFGR1_I2C_PB7_FMP = 0x20000; // Fast-mode Plus (Fm+) driving capability activation on PB7
    static constexpr uint32_t CFGR1_I2C_PB6_FMP = 0x10000; // Fast-mode Plus (Fm+) driving capability activation on PB6
    static constexpr uint32_t CFGR1_BOOSTEN = 0x100; // I/O analog switch voltage booster enable

    static constexpr uint32_t EXTICR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<12, 0x7> EXTICR1_EXTI3; // EXTI 3 configuration bits
    typedef bit_field_t<8, 0x7> EXTICR1_EXTI2; // EXTI 2 configuration bits
    typedef bit_field_t<4, 0x7> EXTICR1_EXTI1; // EXTI 1 configuration bits
    typedef bit_field_t<0, 0x7> EXTICR1_EXTI0; // EXTI 0 configuration bits

    static constexpr uint32_t EXTICR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<12, 0x7> EXTICR2_EXTI7; // EXTI 7 configuration bits
    typedef bit_field_t<8, 0x7> EXTICR2_EXTI6; // EXTI 6 configuration bits
    typedef bit_field_t<4, 0x7> EXTICR2_EXTI5; // EXTI 5 configuration bits
    typedef bit_field_t<0, 0x7> EXTICR2_EXTI4; // EXTI 4 configuration bits

    static constexpr uint32_t EXTICR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<12, 0x7> EXTICR3_EXTI11; // EXTI 11 configuration bits
    typedef bit_field_t<8, 0x7> EXTICR3_EXTI10; // EXTI 10 configuration bits
    typedef bit_field_t<4, 0x7> EXTICR3_EXTI9; // EXTI 9 configuration bits
    typedef bit_field_t<0, 0x7> EXTICR3_EXTI8; // EXTI 8 configuration bits

    static constexpr uint32_t EXTICR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<12, 0x7> EXTICR4_EXTI15; // EXTI15 configuration bits
    typedef bit_field_t<8, 0x7> EXTICR4_EXTI14; // EXTI14 configuration bits
    typedef bit_field_t<4, 0x7> EXTICR4_EXTI13; // EXTI13 configuration bits
    typedef bit_field_t<0, 0x7> EXTICR4_EXTI12; // EXTI12 configuration bits

    static constexpr uint32_t SCSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SCSR_SRAM2BSY = 0x2; // SRAM2 busy by erase operation
    static constexpr uint32_t SCSR_SRAM2ER = 0x1; // SRAM2 Erase
    static constexpr uint32_t SCSR_C2RFD = 0x80000000; // CPU2 SRAM fetch (execution) disable.

    static constexpr uint32_t CFGR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR2_SPF = 0x100; // SRAM2 parity error flag
    static constexpr uint32_t CFGR2_ECCL = 0x8; // ECC Lock
    static constexpr uint32_t CFGR2_PVDL = 0x4; // PVD lock enable bit
    static constexpr uint32_t CFGR2_SPL = 0x2; // SRAM2 parity lock bit
    static constexpr uint32_t CFGR2_CLL = 0x1; // Cortex-M4 LOCKUP (Hardfault) output enable bit

    static constexpr uint32_t SWPR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SWPR_P31WP = 0x80000000; // SRAM2 page 31 write protection
    static constexpr uint32_t SWPR_P30WP = 0x40000000; // P30WP
    static constexpr uint32_t SWPR_P29WP = 0x20000000; // P29WP
    static constexpr uint32_t SWPR_P28WP = 0x10000000; // P28WP
    static constexpr uint32_t SWPR_P27WP = 0x8000000; // P27WP
    static constexpr uint32_t SWPR_P26WP = 0x4000000; // P26WP
    static constexpr uint32_t SWPR_P25WP = 0x2000000; // P25WP
    static constexpr uint32_t SWPR_P24WP = 0x1000000; // P24WP
    static constexpr uint32_t SWPR_P23WP = 0x800000; // P23WP
    static constexpr uint32_t SWPR_P22WP = 0x400000; // P22WP
    static constexpr uint32_t SWPR_P21WP = 0x200000; // P21WP
    static constexpr uint32_t SWPR_P20WP = 0x100000; // P20WP
    static constexpr uint32_t SWPR_P19WP = 0x80000; // P19WP
    static constexpr uint32_t SWPR_P18WP = 0x40000; // P18WP
    static constexpr uint32_t SWPR_P17WP = 0x20000; // P17WP
    static constexpr uint32_t SWPR_P16WP = 0x10000; // P16WP
    static constexpr uint32_t SWPR_P15WP = 0x8000; // P15WP
    static constexpr uint32_t SWPR_P14WP = 0x4000; // P14WP
    static constexpr uint32_t SWPR_P13WP = 0x2000; // P13WP
    static constexpr uint32_t SWPR_P12WP = 0x1000; // P12WP
    static constexpr uint32_t SWPR_P11WP = 0x800; // P11WP
    static constexpr uint32_t SWPR_P10WP = 0x400; // P10WP
    static constexpr uint32_t SWPR_P9WP = 0x200; // P9WP
    static constexpr uint32_t SWPR_P8WP = 0x100; // P8WP
    static constexpr uint32_t SWPR_P7WP = 0x80; // P7WP
    static constexpr uint32_t SWPR_P6WP = 0x40; // P6WP
    static constexpr uint32_t SWPR_P5WP = 0x20; // P5WP
    static constexpr uint32_t SWPR_P4WP = 0x10; // P4WP
    static constexpr uint32_t SWPR_P3WP = 0x8; // P3WP
    static constexpr uint32_t SWPR_P2WP = 0x4; // P2WP
    static constexpr uint32_t SWPR_P1WP = 0x2; // P1WP
    static constexpr uint32_t SWPR_P0WP = 0x1; // P0WP

    static constexpr uint32_t SKR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> SKR_KEY; // SRAM2 write protection key for software erase

    static constexpr uint32_t SWPR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SWPR2_P63WP = 0x80000000; // SRAM2 page 63 write protection
    static constexpr uint32_t SWPR2_P62WP = 0x40000000; // P62WP
    static constexpr uint32_t SWPR2_P61WP = 0x20000000; // P61WP
    static constexpr uint32_t SWPR2_P60WP = 0x10000000; // P60WP
    static constexpr uint32_t SWPR2_P59WP = 0x8000000; // P59WP
    static constexpr uint32_t SWPR2_P58WP = 0x4000000; // P58WP
    static constexpr uint32_t SWPR2_P57WP = 0x2000000; // P57WP
    static constexpr uint32_t SWPR2_P56WP = 0x1000000; // P56WP
    static constexpr uint32_t SWPR2_P55WP = 0x800000; // P55WP
    static constexpr uint32_t SWPR2_P54WP = 0x400000; // P54WP
    static constexpr uint32_t SWPR2_P53WP = 0x200000; // P53WP
    static constexpr uint32_t SWPR2_P52WP = 0x100000; // P52WP
    static constexpr uint32_t SWPR2_P51WP = 0x80000; // P51WP
    static constexpr uint32_t SWPR2_P50WP = 0x40000; // P50WP
    static constexpr uint32_t SWPR2_P49WP = 0x20000; // P49WP
    static constexpr uint32_t SWPR2_P48WP = 0x10000; // P48WP
    static constexpr uint32_t SWPR2_P47WP = 0x8000; // P47WP
    static constexpr uint32_t SWPR2_P46WP = 0x4000; // P46WP
    static constexpr uint32_t SWPR2_P45WP = 0x2000; // P45WP
    static constexpr uint32_t SWPR2_P44WP = 0x1000; // P44WP
    static constexpr uint32_t SWPR2_P43WP = 0x800; // P43WP
    static constexpr uint32_t SWPR2_P42WP = 0x400; // P42WP
    static constexpr uint32_t SWPR2_P41WP = 0x200; // P41WP
    static constexpr uint32_t SWPR2_P40WP = 0x100; // P40WP
    static constexpr uint32_t SWPR2_P39WP = 0x80; // P39WP
    static constexpr uint32_t SWPR2_P38WP = 0x40; // P38WP
    static constexpr uint32_t SWPR2_P37WP = 0x20; // P37WP
    static constexpr uint32_t SWPR2_P36WP = 0x10; // P36WP
    static constexpr uint32_t SWPR2_P35WP = 0x8; // P35WP
    static constexpr uint32_t SWPR2_P34WP = 0x4; // P34WP
    static constexpr uint32_t SWPR2_P33WP = 0x2; // P33WP
    static constexpr uint32_t SWPR2_P32WP = 0x1; // P32WP


    static constexpr uint32_t IMR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IMR1_TIM1IM = 0x2000; // Peripheral TIM1 interrupt mask to CPU1
    static constexpr uint32_t IMR1_TIM16IM = 0x4000; // Peripheral TIM16 interrupt mask to CPU1
    static constexpr uint32_t IMR1_TIM17IM = 0x8000; // Peripheral TIM17 interrupt mask to CPU1
    static constexpr uint32_t IMR1_EXIT5IM = 0x200000; // Peripheral EXIT5 interrupt mask to CPU1
    static constexpr uint32_t IMR1_EXIT6IM = 0x400000; // Peripheral EXIT6 interrupt mask to CPU1
    static constexpr uint32_t IMR1_EXIT7IM = 0x800000; // Peripheral EXIT7 interrupt mask to CPU1
    static constexpr uint32_t IMR1_EXIT8IM = 0x1000000; // Peripheral EXIT8 interrupt mask to CPU1
    static constexpr uint32_t IMR1_EXIT9IM = 0x2000000; // Peripheral EXIT9 interrupt mask to CPU1
    static constexpr uint32_t IMR1_EXIT10IM = 0x4000000; // Peripheral EXIT10 interrupt mask to CPU1
    static constexpr uint32_t IMR1_EXIT11IM = 0x8000000; // Peripheral EXIT11 interrupt mask to CPU1
    static constexpr uint32_t IMR1_EXIT12IM = 0x10000000; // Peripheral EXIT12 interrupt mask to CPU1
    static constexpr uint32_t IMR1_EXIT13IM = 0x20000000; // Peripheral EXIT13 interrupt mask to CPU1
    static constexpr uint32_t IMR1_EXIT14IM = 0x40000000; // Peripheral EXIT14 interrupt mask to CPU1
    static constexpr uint32_t IMR1_EXIT15IM = 0x80000000; // Peripheral EXIT15 interrupt mask to CPU1

    static constexpr uint32_t IMR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IMR2_PVM3IM = 0x40000; // Peripheral PVM3 interrupt mask to CPU1
    static constexpr uint32_t IMR2_PVM1IM = 0x10000; // Peripheral PVM1 interrupt mask to CPU1
    static constexpr uint32_t IMR2_PVDIM = 0x100000; // Peripheral PVD interrupt mask to CPU1

    static constexpr uint32_t C2IMR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C2IMR1_RTCSTAMP = 0x1; // Peripheral RTCSTAMP interrupt mask to CPU2
    static constexpr uint32_t C2IMR1_RTCWKUP = 0x8; // Peripheral RTCWKUP interrupt mask to CPU2
    static constexpr uint32_t C2IMR1_RTCALARM = 0x10; // Peripheral RTCALARM interrupt mask to CPU2
    static constexpr uint32_t C2IMR1_RCC = 0x20; // Peripheral RCC interrupt mask to CPU2
    static constexpr uint32_t C2IMR1_FLASH = 0x40; // Peripheral FLASH interrupt mask to CPU2
    static constexpr uint32_t C2IMR1_PKA = 0x100; // Peripheral PKA interrupt mask to CPU2
    static constexpr uint32_t C2IMR1_RNG = 0x200; // Peripheral RNG interrupt mask to CPU2
    static constexpr uint32_t C2IMR1_AES1 = 0x400; // Peripheral AES1 interrupt mask to CPU2
    static constexpr uint32_t C2IMR1_COMP = 0x800; // Peripheral COMP interrupt mask to CPU2
    static constexpr uint32_t C2IMR1_ADC = 0x1000; // Peripheral ADC interrupt mask to CPU2

    static constexpr uint32_t C2IMR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C2IMR2_DMA1_CH1_IM = 0x1; // Peripheral DMA1 CH1 interrupt mask to CPU2
    static constexpr uint32_t C2IMR2_DMA1_CH2_IM = 0x2; // Peripheral DMA1 CH2 interrupt mask to CPU2
    static constexpr uint32_t C2IMR2_DMA1_CH3_IM = 0x4; // Peripheral DMA1 CH3 interrupt mask to CPU2
    static constexpr uint32_t C2IMR2_DMA1_CH4_IM = 0x8; // Peripheral DMA1 CH4 interrupt mask to CPU2
    static constexpr uint32_t C2IMR2_DMA1_CH5_IM = 0x10; // Peripheral DMA1 CH5 interrupt mask to CPU2
    static constexpr uint32_t C2IMR2_DMA1_CH6_IM = 0x20; // Peripheral DMA1 CH6 interrupt mask to CPU2
    static constexpr uint32_t C2IMR2_DMA1_CH7_IM = 0x40; // Peripheral DMA1 CH7 interrupt mask to CPU2
    static constexpr uint32_t C2IMR2_DMA2_CH1_IM = 0x100; // Peripheral DMA2 CH1 interrupt mask to CPU1
    static constexpr uint32_t C2IMR2_DMA2_CH2_IM = 0x200; // Peripheral DMA2 CH2 interrupt mask to CPU1
    static constexpr uint32_t C2IMR2_DMA2_CH3_IM = 0x400; // Peripheral DMA2 CH3 interrupt mask to CPU1
    static constexpr uint32_t C2IMR2_DMA2_CH4_IM = 0x800; // Peripheral DMA2 CH4 interrupt mask to CPU1
    static constexpr uint32_t C2IMR2_DMA2_CH5_IM = 0x1000; // Peripheral DMA2 CH5 interrupt mask to CPU1
    static constexpr uint32_t C2IMR2_DMA2_CH6_IM = 0x2000; // Peripheral DMA2 CH6 interrupt mask to CPU1
    static constexpr uint32_t C2IMR2_DMA2_CH7_IM = 0x4000; // Peripheral DMA2 CH7 interrupt mask to CPU1
    static constexpr uint32_t C2IMR2_DMAM_UX1_IM = 0x8000; // Peripheral DMAM UX1 interrupt mask to CPU1
    static constexpr uint32_t C2IMR2_PVM1IM = 0x10000; // Peripheral PVM1IM interrupt mask to CPU1
    static constexpr uint32_t C2IMR2_PVM3IM = 0x40000; // Peripheral PVM3IM interrupt mask to CPU1
    static constexpr uint32_t C2IMR2_PVDIM = 0x100000; // Peripheral PVDIM interrupt mask to CPU1
    static constexpr uint32_t C2IMR2_TSCIM = 0x200000; // Peripheral TSCIM interrupt mask to CPU1
    static constexpr uint32_t C2IMR2_LCDIM = 0x400000; // Peripheral LCDIM interrupt mask to CPU1

    static constexpr uint32_t SIPCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SIPCR_SAES1 = 0x1; // Enable AES1 KEY[7:0] security.
    static constexpr uint32_t SIPCR_SAES2 = 0x2; // Enable AES2 security.
    static constexpr uint32_t SIPCR_SPKA = 0x4; // Enable PKA security
    static constexpr uint32_t SIPCR_SRNG = 0x8; // Enable True RNG security
};

// SYSCFG: SYSCFG_VREFBUF

struct stm32wb55_cm4_syscfg_t
{
    volatile uint32_t SYSCFG_MEMRMP; // memory remap register
    volatile uint32_t SYSCFG_CFGR1; // configuration register 1
    volatile uint32_t SYSCFG_EXTICR1; // external interrupt configuration register 1
    volatile uint32_t SYSCFG_EXTICR2; // external interrupt configuration register 2
    volatile uint32_t SYSCFG_EXTICR3; // external interrupt configuration register 3
    volatile uint32_t SYSCFG_EXTICR4; // external interrupt configuration register 4
    volatile uint32_t SYSCFG_SCSR; // SCSR
    volatile uint32_t SYSCFG_CFGR2; // CFGR2
    volatile uint32_t SYSCFG_SWPR; // SRAM2 write protection register
    volatile uint32_t SYSCFG_SKR; // SKR
    volatile uint32_t SYSCFG_SWPR2; // SRAM2 write protection register 2
    reserved_t<0x1> _0x2c;
    volatile uint32_t VREFBUF_CSR; // VREF control and status register
    volatile uint32_t VREFBUF_CCR; // calibration control register
    reserved_t<0x32> _0x38;
    volatile uint32_t SYSCFG_IMR1; // CPU1 interrupt mask register 1
    volatile uint32_t SYSCFG_IMR2; // CPU1 interrupt mask register 2
    volatile uint32_t SYSCFG_C2IMR1; // CPU2 interrupt mask register 1
    volatile uint32_t SYSCFG_C2IMR2; // CPU2 interrupt mask register 1
    volatile uint32_t SYSCFG_SIPCR; // secure IP control register

    static constexpr uint32_t SYSCFG_MEMRMP_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> SYSCFG_MEMRMP_MEM_MODE; // Memory mapping selection

    static constexpr uint32_t SYSCFG_CFGR1_RESET_VALUE = 0x7c000001; // Reset value
    typedef bit_field_t<26, 0x3f> SYSCFG_CFGR1_FPU_IE; // Floating Point Unit interrupts enable bits
    static constexpr uint32_t SYSCFG_CFGR1_I2C3_FMP = 0x400000; // I2C3 Fast-mode Plus driving capability activation
    static constexpr uint32_t SYSCFG_CFGR1_I2C1_FMP = 0x100000; // I2C1 Fast-mode Plus driving capability activation
    static constexpr uint32_t SYSCFG_CFGR1_I2C_PB9_FMP = 0x80000; // Fast-mode Plus (Fm+) driving capability activation on PB9
    static constexpr uint32_t SYSCFG_CFGR1_I2C_PB8_FMP = 0x40000; // Fast-mode Plus (Fm+) driving capability activation on PB8
    static constexpr uint32_t SYSCFG_CFGR1_I2C_PB7_FMP = 0x20000; // Fast-mode Plus (Fm+) driving capability activation on PB7
    static constexpr uint32_t SYSCFG_CFGR1_I2C_PB6_FMP = 0x10000; // Fast-mode Plus (Fm+) driving capability activation on PB6
    static constexpr uint32_t SYSCFG_CFGR1_BOOSTEN = 0x100; // I/O analog switch voltage booster enable

    static constexpr uint32_t SYSCFG_EXTICR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<12, 0x7> SYSCFG_EXTICR1_EXTI3; // EXTI 3 configuration bits
    typedef bit_field_t<8, 0x7> SYSCFG_EXTICR1_EXTI2; // EXTI 2 configuration bits
    typedef bit_field_t<4, 0x7> SYSCFG_EXTICR1_EXTI1; // EXTI 1 configuration bits
    typedef bit_field_t<0, 0x7> SYSCFG_EXTICR1_EXTI0; // EXTI 0 configuration bits

    static constexpr uint32_t SYSCFG_EXTICR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<12, 0x7> SYSCFG_EXTICR2_EXTI7; // EXTI 7 configuration bits
    typedef bit_field_t<8, 0x7> SYSCFG_EXTICR2_EXTI6; // EXTI 6 configuration bits
    typedef bit_field_t<4, 0x7> SYSCFG_EXTICR2_EXTI5; // EXTI 5 configuration bits
    typedef bit_field_t<0, 0x7> SYSCFG_EXTICR2_EXTI4; // EXTI 4 configuration bits

    static constexpr uint32_t SYSCFG_EXTICR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<12, 0x7> SYSCFG_EXTICR3_EXTI11; // EXTI 11 configuration bits
    typedef bit_field_t<8, 0x7> SYSCFG_EXTICR3_EXTI10; // EXTI 10 configuration bits
    typedef bit_field_t<4, 0x7> SYSCFG_EXTICR3_EXTI9; // EXTI 9 configuration bits
    typedef bit_field_t<0, 0x7> SYSCFG_EXTICR3_EXTI8; // EXTI 8 configuration bits

    static constexpr uint32_t SYSCFG_EXTICR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<12, 0x7> SYSCFG_EXTICR4_EXTI15; // EXTI15 configuration bits
    typedef bit_field_t<8, 0x7> SYSCFG_EXTICR4_EXTI14; // EXTI14 configuration bits
    typedef bit_field_t<4, 0x7> SYSCFG_EXTICR4_EXTI13; // EXTI13 configuration bits
    typedef bit_field_t<0, 0x7> SYSCFG_EXTICR4_EXTI12; // EXTI12 configuration bits

    static constexpr uint32_t SYSCFG_SCSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SYSCFG_SCSR_SRAM2BSY = 0x2; // SRAM2 busy by erase operation
    static constexpr uint32_t SYSCFG_SCSR_SRAM2ER = 0x1; // SRAM2 Erase
    static constexpr uint32_t SYSCFG_SCSR_C2RFD = 0x80000000; // CPU2 SRAM fetch (execution) disable.

    static constexpr uint32_t SYSCFG_CFGR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SYSCFG_CFGR2_SPF = 0x100; // SRAM2 parity error flag
    static constexpr uint32_t SYSCFG_CFGR2_ECCL = 0x8; // ECC Lock
    static constexpr uint32_t SYSCFG_CFGR2_PVDL = 0x4; // PVD lock enable bit
    static constexpr uint32_t SYSCFG_CFGR2_SPL = 0x2; // SRAM2 parity lock bit
    static constexpr uint32_t SYSCFG_CFGR2_CLL = 0x1; // Cortex-M4 LOCKUP (Hardfault) output enable bit

    static constexpr uint32_t SYSCFG_SWPR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SYSCFG_SWPR_P31WP = 0x80000000; // SRAM2 page 31 write protection
    static constexpr uint32_t SYSCFG_SWPR_P30WP = 0x40000000; // P30WP
    static constexpr uint32_t SYSCFG_SWPR_P29WP = 0x20000000; // P29WP
    static constexpr uint32_t SYSCFG_SWPR_P28WP = 0x10000000; // P28WP
    static constexpr uint32_t SYSCFG_SWPR_P27WP = 0x8000000; // P27WP
    static constexpr uint32_t SYSCFG_SWPR_P26WP = 0x4000000; // P26WP
    static constexpr uint32_t SYSCFG_SWPR_P25WP = 0x2000000; // P25WP
    static constexpr uint32_t SYSCFG_SWPR_P24WP = 0x1000000; // P24WP
    static constexpr uint32_t SYSCFG_SWPR_P23WP = 0x800000; // P23WP
    static constexpr uint32_t SYSCFG_SWPR_P22WP = 0x400000; // P22WP
    static constexpr uint32_t SYSCFG_SWPR_P21WP = 0x200000; // P21WP
    static constexpr uint32_t SYSCFG_SWPR_P20WP = 0x100000; // P20WP
    static constexpr uint32_t SYSCFG_SWPR_P19WP = 0x80000; // P19WP
    static constexpr uint32_t SYSCFG_SWPR_P18WP = 0x40000; // P18WP
    static constexpr uint32_t SYSCFG_SWPR_P17WP = 0x20000; // P17WP
    static constexpr uint32_t SYSCFG_SWPR_P16WP = 0x10000; // P16WP
    static constexpr uint32_t SYSCFG_SWPR_P15WP = 0x8000; // P15WP
    static constexpr uint32_t SYSCFG_SWPR_P14WP = 0x4000; // P14WP
    static constexpr uint32_t SYSCFG_SWPR_P13WP = 0x2000; // P13WP
    static constexpr uint32_t SYSCFG_SWPR_P12WP = 0x1000; // P12WP
    static constexpr uint32_t SYSCFG_SWPR_P11WP = 0x800; // P11WP
    static constexpr uint32_t SYSCFG_SWPR_P10WP = 0x400; // P10WP
    static constexpr uint32_t SYSCFG_SWPR_P9WP = 0x200; // P9WP
    static constexpr uint32_t SYSCFG_SWPR_P8WP = 0x100; // P8WP
    static constexpr uint32_t SYSCFG_SWPR_P7WP = 0x80; // P7WP
    static constexpr uint32_t SYSCFG_SWPR_P6WP = 0x40; // P6WP
    static constexpr uint32_t SYSCFG_SWPR_P5WP = 0x20; // P5WP
    static constexpr uint32_t SYSCFG_SWPR_P4WP = 0x10; // P4WP
    static constexpr uint32_t SYSCFG_SWPR_P3WP = 0x8; // P3WP
    static constexpr uint32_t SYSCFG_SWPR_P2WP = 0x4; // P2WP
    static constexpr uint32_t SYSCFG_SWPR_P1WP = 0x2; // P1WP
    static constexpr uint32_t SYSCFG_SWPR_P0WP = 0x1; // P0WP

    static constexpr uint32_t SYSCFG_SKR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> SYSCFG_SKR_KEY; // SRAM2 write protection key for software erase

    static constexpr uint32_t SYSCFG_SWPR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SYSCFG_SWPR2_P63WP = 0x80000000; // SRAM2 page 63 write protection
    static constexpr uint32_t SYSCFG_SWPR2_P62WP = 0x40000000; // P62WP
    static constexpr uint32_t SYSCFG_SWPR2_P61WP = 0x20000000; // P61WP
    static constexpr uint32_t SYSCFG_SWPR2_P60WP = 0x10000000; // P60WP
    static constexpr uint32_t SYSCFG_SWPR2_P59WP = 0x8000000; // P59WP
    static constexpr uint32_t SYSCFG_SWPR2_P58WP = 0x4000000; // P58WP
    static constexpr uint32_t SYSCFG_SWPR2_P57WP = 0x2000000; // P57WP
    static constexpr uint32_t SYSCFG_SWPR2_P56WP = 0x1000000; // P56WP
    static constexpr uint32_t SYSCFG_SWPR2_P55WP = 0x800000; // P55WP
    static constexpr uint32_t SYSCFG_SWPR2_P54WP = 0x400000; // P54WP
    static constexpr uint32_t SYSCFG_SWPR2_P53WP = 0x200000; // P53WP
    static constexpr uint32_t SYSCFG_SWPR2_P52WP = 0x100000; // P52WP
    static constexpr uint32_t SYSCFG_SWPR2_P51WP = 0x80000; // P51WP
    static constexpr uint32_t SYSCFG_SWPR2_P50WP = 0x40000; // P50WP
    static constexpr uint32_t SYSCFG_SWPR2_P49WP = 0x20000; // P49WP
    static constexpr uint32_t SYSCFG_SWPR2_P48WP = 0x10000; // P48WP
    static constexpr uint32_t SYSCFG_SWPR2_P47WP = 0x8000; // P47WP
    static constexpr uint32_t SYSCFG_SWPR2_P46WP = 0x4000; // P46WP
    static constexpr uint32_t SYSCFG_SWPR2_P45WP = 0x2000; // P45WP
    static constexpr uint32_t SYSCFG_SWPR2_P44WP = 0x1000; // P44WP
    static constexpr uint32_t SYSCFG_SWPR2_P43WP = 0x800; // P43WP
    static constexpr uint32_t SYSCFG_SWPR2_P42WP = 0x400; // P42WP
    static constexpr uint32_t SYSCFG_SWPR2_P41WP = 0x200; // P41WP
    static constexpr uint32_t SYSCFG_SWPR2_P40WP = 0x100; // P40WP
    static constexpr uint32_t SYSCFG_SWPR2_P39WP = 0x80; // P39WP
    static constexpr uint32_t SYSCFG_SWPR2_P38WP = 0x40; // P38WP
    static constexpr uint32_t SYSCFG_SWPR2_P37WP = 0x20; // P37WP
    static constexpr uint32_t SYSCFG_SWPR2_P36WP = 0x10; // P36WP
    static constexpr uint32_t SYSCFG_SWPR2_P35WP = 0x8; // P35WP
    static constexpr uint32_t SYSCFG_SWPR2_P34WP = 0x4; // P34WP
    static constexpr uint32_t SYSCFG_SWPR2_P33WP = 0x2; // P33WP
    static constexpr uint32_t SYSCFG_SWPR2_P32WP = 0x1; // P32WP


    static constexpr uint32_t VREFBUF_CSR_RESET_VALUE = 0x2; // Reset value
    static constexpr uint32_t VREFBUF_CSR_ENVR = 0x1; // Voltage reference buffer enable
    static constexpr uint32_t VREFBUF_CSR_HIZ = 0x2; // High impedance mode
    static constexpr uint32_t VREFBUF_CSR_VRS = 0x4; // Voltage reference scale
    static constexpr uint32_t VREFBUF_CSR_VRR = 0x8; // Voltage reference buffer ready

    static constexpr uint32_t VREFBUF_CCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> VREFBUF_CCR_TRIM; // Trimming code


    static constexpr uint32_t SYSCFG_IMR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SYSCFG_IMR1_TIM1IM = 0x2000; // Peripheral TIM1 interrupt mask to CPU1
    static constexpr uint32_t SYSCFG_IMR1_TIM16IM = 0x4000; // Peripheral TIM16 interrupt mask to CPU1
    static constexpr uint32_t SYSCFG_IMR1_TIM17IM = 0x8000; // Peripheral TIM17 interrupt mask to CPU1
    static constexpr uint32_t SYSCFG_IMR1_EXIT5IM = 0x200000; // Peripheral EXIT5 interrupt mask to CPU1
    static constexpr uint32_t SYSCFG_IMR1_EXIT6IM = 0x400000; // Peripheral EXIT6 interrupt mask to CPU1
    static constexpr uint32_t SYSCFG_IMR1_EXIT7IM = 0x800000; // Peripheral EXIT7 interrupt mask to CPU1
    static constexpr uint32_t SYSCFG_IMR1_EXIT8IM = 0x1000000; // Peripheral EXIT8 interrupt mask to CPU1
    static constexpr uint32_t SYSCFG_IMR1_EXIT9IM = 0x2000000; // Peripheral EXIT9 interrupt mask to CPU1
    static constexpr uint32_t SYSCFG_IMR1_EXIT10IM = 0x4000000; // Peripheral EXIT10 interrupt mask to CPU1
    static constexpr uint32_t SYSCFG_IMR1_EXIT11IM = 0x8000000; // Peripheral EXIT11 interrupt mask to CPU1
    static constexpr uint32_t SYSCFG_IMR1_EXIT12IM = 0x10000000; // Peripheral EXIT12 interrupt mask to CPU1
    static constexpr uint32_t SYSCFG_IMR1_EXIT13IM = 0x20000000; // Peripheral EXIT13 interrupt mask to CPU1
    static constexpr uint32_t SYSCFG_IMR1_EXIT14IM = 0x40000000; // Peripheral EXIT14 interrupt mask to CPU1
    static constexpr uint32_t SYSCFG_IMR1_EXIT15IM = 0x80000000; // Peripheral EXIT15 interrupt mask to CPU1

    static constexpr uint32_t SYSCFG_IMR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SYSCFG_IMR2_PVM3IM = 0x40000; // Peripheral PVM3 interrupt mask to CPU1
    static constexpr uint32_t SYSCFG_IMR2_PVM1IM = 0x10000; // Peripheral PVM1 interrupt mask to CPU1
    static constexpr uint32_t SYSCFG_IMR2_PVDIM = 0x100000; // Peripheral PVD interrupt mask to CPU1

    static constexpr uint32_t SYSCFG_C2IMR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SYSCFG_C2IMR1_RTCSTAMP = 0x1; // Peripheral RTCSTAMP interrupt mask to CPU2
    static constexpr uint32_t SYSCFG_C2IMR1_RTCWKUP = 0x8; // Peripheral RTCWKUP interrupt mask to CPU2
    static constexpr uint32_t SYSCFG_C2IMR1_RTCALARM = 0x10; // Peripheral RTCALARM interrupt mask to CPU2
    static constexpr uint32_t SYSCFG_C2IMR1_RCC = 0x20; // Peripheral RCC interrupt mask to CPU2
    static constexpr uint32_t SYSCFG_C2IMR1_FLASH = 0x40; // Peripheral FLASH interrupt mask to CPU2
    static constexpr uint32_t SYSCFG_C2IMR1_PKA = 0x100; // Peripheral PKA interrupt mask to CPU2
    static constexpr uint32_t SYSCFG_C2IMR1_RNG = 0x200; // Peripheral RNG interrupt mask to CPU2
    static constexpr uint32_t SYSCFG_C2IMR1_AES1 = 0x400; // Peripheral AES1 interrupt mask to CPU2
    static constexpr uint32_t SYSCFG_C2IMR1_COMP = 0x800; // Peripheral COMP interrupt mask to CPU2
    static constexpr uint32_t SYSCFG_C2IMR1_ADC = 0x1000; // Peripheral ADC interrupt mask to CPU2

    static constexpr uint32_t SYSCFG_C2IMR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SYSCFG_C2IMR2_DMA1_CH1_IM = 0x1; // Peripheral DMA1 CH1 interrupt mask to CPU2
    static constexpr uint32_t SYSCFG_C2IMR2_DMA1_CH2_IM = 0x2; // Peripheral DMA1 CH2 interrupt mask to CPU2
    static constexpr uint32_t SYSCFG_C2IMR2_DMA1_CH3_IM = 0x4; // Peripheral DMA1 CH3 interrupt mask to CPU2
    static constexpr uint32_t SYSCFG_C2IMR2_DMA1_CH4_IM = 0x8; // Peripheral DMA1 CH4 interrupt mask to CPU2
    static constexpr uint32_t SYSCFG_C2IMR2_DMA1_CH5_IM = 0x10; // Peripheral DMA1 CH5 interrupt mask to CPU2
    static constexpr uint32_t SYSCFG_C2IMR2_DMA1_CH6_IM = 0x20; // Peripheral DMA1 CH6 interrupt mask to CPU2
    static constexpr uint32_t SYSCFG_C2IMR2_DMA1_CH7_IM = 0x40; // Peripheral DMA1 CH7 interrupt mask to CPU2
    static constexpr uint32_t SYSCFG_C2IMR2_DMA2_CH1_IM = 0x100; // Peripheral DMA2 CH1 interrupt mask to CPU1
    static constexpr uint32_t SYSCFG_C2IMR2_DMA2_CH2_IM = 0x200; // Peripheral DMA2 CH2 interrupt mask to CPU1
    static constexpr uint32_t SYSCFG_C2IMR2_DMA2_CH3_IM = 0x400; // Peripheral DMA2 CH3 interrupt mask to CPU1
    static constexpr uint32_t SYSCFG_C2IMR2_DMA2_CH4_IM = 0x800; // Peripheral DMA2 CH4 interrupt mask to CPU1
    static constexpr uint32_t SYSCFG_C2IMR2_DMA2_CH5_IM = 0x1000; // Peripheral DMA2 CH5 interrupt mask to CPU1
    static constexpr uint32_t SYSCFG_C2IMR2_DMA2_CH6_IM = 0x2000; // Peripheral DMA2 CH6 interrupt mask to CPU1
    static constexpr uint32_t SYSCFG_C2IMR2_DMA2_CH7_IM = 0x4000; // Peripheral DMA2 CH7 interrupt mask to CPU1
    static constexpr uint32_t SYSCFG_C2IMR2_DMAM_UX1_IM = 0x8000; // Peripheral DMAM UX1 interrupt mask to CPU1
    static constexpr uint32_t SYSCFG_C2IMR2_PVM1IM = 0x10000; // Peripheral PVM1IM interrupt mask to CPU1
    static constexpr uint32_t SYSCFG_C2IMR2_PVM3IM = 0x40000; // Peripheral PVM3IM interrupt mask to CPU1
    static constexpr uint32_t SYSCFG_C2IMR2_PVDIM = 0x100000; // Peripheral PVDIM interrupt mask to CPU1
    static constexpr uint32_t SYSCFG_C2IMR2_TSCIM = 0x200000; // Peripheral TSCIM interrupt mask to CPU1
    static constexpr uint32_t SYSCFG_C2IMR2_LCDIM = 0x400000; // Peripheral LCDIM interrupt mask to CPU1

    static constexpr uint32_t SYSCFG_SIPCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SYSCFG_SIPCR_SAES1 = 0x1; // Enable AES1 KEY[7:0] security.
    static constexpr uint32_t SYSCFG_SIPCR_SAES2 = 0x2; // Enable AES2 security.
    static constexpr uint32_t SYSCFG_SIPCR_SPKA = 0x4; // Enable PKA security
    static constexpr uint32_t SYSCFG_SIPCR_SRNG = 0x8; // Enable True RNG security
};

template<>
struct peripheral_t<STM32WB30_CM4, SYSCFG>
{
    static constexpr periph_t P = SYSCFG;
    using T = stm32wb30_cm4_syscfg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WB35_CM4, SYSCFG>
{
    static constexpr periph_t P = SYSCFG;
    using T = stm32wb30_cm4_syscfg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WB50_CM4, SYSCFG>
{
    static constexpr periph_t P = SYSCFG;
    using T = stm32wb30_cm4_syscfg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WB55_CM4, SYSCFG>
{
    static constexpr periph_t P = SYSCFG;
    using T = stm32wb55_cm4_syscfg_t;
    static T& V;
};

using syscfg_t = peripheral_t<svd, SYSCFG>;
