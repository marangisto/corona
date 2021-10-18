#pragma once

////
//
//      STM32WL SYSCFG peripherals
//
///

// SYSCFG: System configuration controller

struct stm32wl5x_cm0p_syscfg_t
{
    volatile uint32_t MEMRMP; // memory remap register
    volatile uint32_t CFGR1; // configuration register 1
    volatile uint32_t EXTICR1; // external interrupt configuration register 1
    volatile uint32_t EXTICR2; // external interrupt configuration register 2
    volatile uint32_t EXTICR3; // external interrupt configuration register 3
    volatile uint32_t EXTICR4; // external interrupt configuration register 4
    volatile uint32_t SCSR; // SCSR
    volatile uint32_t CFGR2; // CFGR2
    volatile uint32_t SWPR; // SWPR
    volatile uint32_t SKR; // SKR
    reserved_t<0x36> _0x28;
    volatile uint32_t IMR1; // SYSCFG CPU1 interrupt mask register 1
    volatile uint32_t IMR2; // SYSCFG CPU1 interrupt mask register 2
    volatile uint32_t C2IMR1; // SYSCFG CPU2 interrupt mask register 1
    volatile uint32_t C2IMR2; // SYSCFG CPU2 interrupt mask register 2
    reserved_t<0x3e> _0x110;
    volatile uint32_t RFDCR; // radio debug control register

    static constexpr uint32_t MEMRMP_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> MEMRMP_MEM_MODE; // Memory mapping selection

    static constexpr uint32_t CFGR1_RESET_VALUE = 0x7c000001; // Reset value
    static constexpr uint32_t CFGR1_I2C3_FMP = 0x400000; // I2C3 Fast-mode Plus driving capability activation
    static constexpr uint32_t CFGR1_I2C2_FMP = 0x200000; // I2C2 Fast-mode Plus driving capability activation
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
    static constexpr uint32_t SCSR_PKASRAMBSY = 0x100; // PKA SRAM busy by erase operation
    static constexpr uint32_t SCSR_SRAMBSY = 0x2; // SRAM1, SRAM2 and PKA SRAM busy by erase operation
    static constexpr uint32_t SCSR_SRAM2ER = 0x1; // SRAM2 erase

    static constexpr uint32_t CFGR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR2_SPF = 0x100; // SRAM2 parity error flag
    static constexpr uint32_t CFGR2_ECCL = 0x8; // ECC Lock
    static constexpr uint32_t CFGR2_PVDL = 0x4; // PVD lock enable bit
    static constexpr uint32_t CFGR2_SPL = 0x2; // SRAM2 parity lock bit
    static constexpr uint32_t CFGR2_CLL = 0x1; // CPU1 LOCKUP (Hardfault) output enable bit

    static constexpr uint32_t SWPR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SWPR_P31WP = 0x80000000; // SRAM2 1Kbyte page 31 write protection
    static constexpr uint32_t SWPR_P30WP = 0x40000000; // SRAM2 1Kbyte page 30 write protection
    static constexpr uint32_t SWPR_P29WP = 0x20000000; // SRAM2 1Kbyte page 29 write protection
    static constexpr uint32_t SWPR_P28WP = 0x10000000; // SRAM2 1Kbyte page 28 write protection
    static constexpr uint32_t SWPR_P27WP = 0x8000000; // SRAM2 1Kbyte page 27 write protection
    static constexpr uint32_t SWPR_P26WP = 0x4000000; // SRAM2 1Kbyte page 26 write protection
    static constexpr uint32_t SWPR_P25WP = 0x2000000; // SRAM2 1Kbyte page 25 write protection
    static constexpr uint32_t SWPR_P24WP = 0x1000000; // SRAM2 1Kbyte page 24 write protection
    static constexpr uint32_t SWPR_P23WP = 0x800000; // SRAM2 1Kbyte page 23 write protection
    static constexpr uint32_t SWPR_P22WP = 0x400000; // SRAM2 1Kbyte page 22 write protection
    static constexpr uint32_t SWPR_P21WP = 0x200000; // SRAM2 1Kbyte page 21 write protection
    static constexpr uint32_t SWPR_P20WP = 0x100000; // SRAM2 1Kbyte page 20 write protection
    static constexpr uint32_t SWPR_P19WP = 0x80000; // SRAM2 1Kbyte page 19 write protection
    static constexpr uint32_t SWPR_P18WP = 0x40000; // SRAM2 1Kbyte page 18 write protection
    static constexpr uint32_t SWPR_P17WP = 0x20000; // SRAM2 1Kbyte page 17 write protection
    static constexpr uint32_t SWPR_P16WP = 0x10000; // SRAM2 1Kbyte page 16 write protection
    static constexpr uint32_t SWPR_P15WP = 0x8000; // SRAM2 1Kbyte page 15 write protection
    static constexpr uint32_t SWPR_P14WP = 0x4000; // SRAM2 1Kbyte page 14 write protection
    static constexpr uint32_t SWPR_P13WP = 0x2000; // SRAM2 1Kbyte page 13 write protection
    static constexpr uint32_t SWPR_P12WP = 0x1000; // SRAM2 1Kbyte page 12 write protection
    static constexpr uint32_t SWPR_P11WP = 0x800; // SRAM2 1Kbyte page 11 write protection
    static constexpr uint32_t SWPR_P10WP = 0x400; // SRAM2 1Kbyte page 10 write protection
    static constexpr uint32_t SWPR_P9WP = 0x200; // SRAM2 1Kbyte page 9 write protection
    static constexpr uint32_t SWPR_P8WP = 0x100; // SRAM2 1Kbyte page 8 write protection
    static constexpr uint32_t SWPR_P7WP = 0x80; // SRAM2 1Kbyte page 7 write protection
    static constexpr uint32_t SWPR_P6WP = 0x40; // SRAM2 1Kbyte page 6 write protection
    static constexpr uint32_t SWPR_P5WP = 0x20; // SRAM2 1Kbyte page 5 write protection
    static constexpr uint32_t SWPR_P4WP = 0x10; // SRAM2 1Kbyte page 4 write protection
    static constexpr uint32_t SWPR_P3WP = 0x8; // SRAM2 1Kbyte page 3 write protection
    static constexpr uint32_t SWPR_P2WP = 0x4; // SRAM2 1Kbyte page 2 write protection
    static constexpr uint32_t SWPR_P1WP = 0x2; // SRAM2 1Kbyte page 1 write protection
    static constexpr uint32_t SWPR_P0WP = 0x1; // SRAM2 1Kbyte page 0 write protection

    static constexpr uint32_t SKR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> SKR_KEY; // SRAM2 write protection key for software erase


    static constexpr uint32_t IMR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IMR1_RTCSTAMPTAMPLSECSSIM = 0x1; // RTCSTAMPTAMPLSECSSIM
    static constexpr uint32_t IMR1_RTCSSRUIM = 0x4; // RTCSSRUIM
    static constexpr uint32_t IMR1_EXTI5IM = 0x200000; // EXTI5IM
    static constexpr uint32_t IMR1_EXTI6IM = 0x400000; // EXTI6IM
    static constexpr uint32_t IMR1_EXTI7IM = 0x800000; // EXTI7IM
    static constexpr uint32_t IMR1_EXTI8IM = 0x1000000; // EXTI8IM
    static constexpr uint32_t IMR1_EXTI9IM = 0x2000000; // EXTI9IM
    static constexpr uint32_t IMR1_EXTI10IM = 0x4000000; // EXTI10IM
    static constexpr uint32_t IMR1_EXTI11IM = 0x8000000; // EXTI11IM
    static constexpr uint32_t IMR1_EXTI12IM = 0x10000000; // EXTI12IM
    static constexpr uint32_t IMR1_EXTI13IM = 0x20000000; // EXTI13IM
    static constexpr uint32_t IMR1_EXTI14IM = 0x40000000; // EXTI14IM
    static constexpr uint32_t IMR1_EXTI15IM = 0x80000000; // EXTI15IM

    static constexpr uint32_t IMR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IMR2_PVM3IM = 0x40000; // PVM3IM
    static constexpr uint32_t IMR2_PVDIM = 0x100000; // PVDIM

    static constexpr uint32_t C2IMR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C2IMR1_RTCSTAMPTAMPLSECSSIM = 0x1; // RTCSTAMPTAMPLSECSSIM
    static constexpr uint32_t C2IMR1_RTCALARMIM = 0x2; // RTCALARMIM
    static constexpr uint32_t C2IMR1_RTCSSRUIM = 0x4; // RTCSSRUIM
    static constexpr uint32_t C2IMR1_RTCWKUPIM = 0x8; // RTCWKUPIM
    static constexpr uint32_t C2IMR1_RCCIM = 0x20; // RCCIM
    static constexpr uint32_t C2IMR1_FLASHIM = 0x40; // FLASHIM
    static constexpr uint32_t C2IMR1_PKAIM = 0x100; // PKAIM
    static constexpr uint32_t C2IMR1_AESIM = 0x400; // AESIM
    static constexpr uint32_t C2IMR1_COMPIM = 0x800; // COMPIM
    static constexpr uint32_t C2IMR1_ADCIM = 0x1000; // ADCIM
    static constexpr uint32_t C2IMR1_DACIM = 0x2000; // DACIM
    static constexpr uint32_t C2IMR1_EXTI0IM = 0x10000; // EXTI0IM
    static constexpr uint32_t C2IMR1_EXTI1IM = 0x20000; // EXTI1IM
    static constexpr uint32_t C2IMR1_EXTI2IM = 0x40000; // EXTI2IM
    static constexpr uint32_t C2IMR1_EXTI3IM = 0x80000; // EXTI3IM
    static constexpr uint32_t C2IMR1_EXTI4IM = 0x100000; // EXTI4IM
    static constexpr uint32_t C2IMR1_EXTI5IM = 0x200000; // EXTI5IM
    static constexpr uint32_t C2IMR1_EXTI6IM = 0x400000; // EXTI6IM
    static constexpr uint32_t C2IMR1_EXTI7IM = 0x800000; // EXTI7IM
    static constexpr uint32_t C2IMR1_EXTI8IM = 0x1000000; // EXTI8IM
    static constexpr uint32_t C2IMR1_EXTI9IM = 0x2000000; // EXTI9IM
    static constexpr uint32_t C2IMR1_EXTI10IM = 0x4000000; // EXTI10IM
    static constexpr uint32_t C2IMR1_EXTI11IM = 0x8000000; // EXTI11IM
    static constexpr uint32_t C2IMR1_EXTI12IM = 0x10000000; // EXTI12IM
    static constexpr uint32_t C2IMR1_EXTI13IM = 0x20000000; // EXTI13IM
    static constexpr uint32_t C2IMR1_EXTI14IM = 0x40000000; // EXTI14IM
    static constexpr uint32_t C2IMR1_EXTI15IM = 0x80000000; // EXTI15IM

    static constexpr uint32_t C2IMR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C2IMR2_DMA1CH1IM = 0x1; // DMA1CH1IM
    static constexpr uint32_t C2IMR2_DMA1CH2IM = 0x2; // DMA1CH2IM
    static constexpr uint32_t C2IMR2_DMA1CH3IM = 0x4; // DMA1CH3IM
    static constexpr uint32_t C2IMR2_DMA1CH4IM = 0x8; // DMA1CH4IM
    static constexpr uint32_t C2IMR2_DMA1CH5IM = 0x10; // DMA1CH5IM
    static constexpr uint32_t C2IMR2_DMA1CH6IM = 0x20; // DMA1CH6IM
    static constexpr uint32_t C2IMR2_DMA1CH7IM = 0x40; // DMA1CH7IM
    static constexpr uint32_t C2IMR2_DMA2CH1IM = 0x100; // DMA2CH1IM
    static constexpr uint32_t C2IMR2_DMA2CH2IM = 0x200; // DMA2CH2IM
    static constexpr uint32_t C2IMR2_DMA2CH3IM = 0x400; // DMA2CH3IM
    static constexpr uint32_t C2IMR2_DMA2CH4IM = 0x800; // DMA2CH4IM
    static constexpr uint32_t C2IMR2_DMA2CH5IM = 0x1000; // DMA2CH5IM
    static constexpr uint32_t C2IMR2_DMA2CH6IM = 0x2000; // DMA2CH6IM
    static constexpr uint32_t C2IMR2_DMA2CH7IM = 0x4000; // DMA2CH7IM
    static constexpr uint32_t C2IMR2_DMAMUX1IM = 0x8000; // DMAMUX1IM
    static constexpr uint32_t C2IMR2_PVM3IM = 0x40000; // PVM3IM
    static constexpr uint32_t C2IMR2_PVDIM = 0x100000; // PVDIM


    static constexpr uint32_t RFDCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RFDCR_RFTBSEL = 0x1; // radio debug test bus selection
};

// SYSCFG: System configuration controller

struct stm32wle5_cm4_syscfg_t
{
    volatile uint32_t MEMRMP; // memory remap register
    volatile uint32_t CFGR1; // configuration register 1
    volatile uint32_t EXTICR1; // external interrupt configuration register 1
    volatile uint32_t EXTICR2; // external interrupt configuration register 2
    volatile uint32_t EXTICR3; // external interrupt configuration register 3
    volatile uint32_t EXTICR4; // external interrupt configuration register 4
    volatile uint32_t SCSR; // SCSR
    volatile uint32_t CFGR2; // CFGR2
    volatile uint32_t SWPR; // SWPR
    volatile uint32_t SKR; // SKR
    reserved_t<0x78> _0x28;
    volatile uint32_t RFDCR; // radio debug control register

    static constexpr uint32_t MEMRMP_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> MEMRMP_MEM_MODE; // Memory mapping selection

    static constexpr uint32_t CFGR1_RESET_VALUE = 0x7c000001; // Reset value
    static constexpr uint32_t CFGR1_I2C3_FMP = 0x400000; // I2C3 Fast-mode Plus driving capability activation
    static constexpr uint32_t CFGR1_I2C2_FMP = 0x200000; // I2C2 Fast-mode Plus driving capability activation
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
    static constexpr uint32_t SCSR_PKASRAMBSY = 0x100; // PKA SRAM busy by erase operation
    static constexpr uint32_t SCSR_SRAMBSY = 0x2; // SRAM1, SRAM2 and PKA SRAM busy by erase operation
    static constexpr uint32_t SCSR_SRAM2ER = 0x1; // SRAM2 erase

    static constexpr uint32_t CFGR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR2_SPF = 0x100; // SRAM2 parity error flag
    static constexpr uint32_t CFGR2_ECCL = 0x8; // ECC Lock
    static constexpr uint32_t CFGR2_PVDL = 0x4; // PVD lock enable bit
    static constexpr uint32_t CFGR2_SPL = 0x2; // SRAM2 parity lock bit
    static constexpr uint32_t CFGR2_CLL = 0x1; // CPU1 LOCKUP (Hardfault) output enable bit

    static constexpr uint32_t SWPR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SWPR_P31WP = 0x80000000; // SRAM2 1Kbyte page 31 write protection
    static constexpr uint32_t SWPR_P30WP = 0x40000000; // SRAM2 1Kbyte page 30 write protection
    static constexpr uint32_t SWPR_P29WP = 0x20000000; // SRAM2 1Kbyte page 29 write protection
    static constexpr uint32_t SWPR_P28WP = 0x10000000; // SRAM2 1Kbyte page 28 write protection
    static constexpr uint32_t SWPR_P27WP = 0x8000000; // SRAM2 1Kbyte page 27 write protection
    static constexpr uint32_t SWPR_P26WP = 0x4000000; // SRAM2 1Kbyte page 26 write protection
    static constexpr uint32_t SWPR_P25WP = 0x2000000; // SRAM2 1Kbyte page 25 write protection
    static constexpr uint32_t SWPR_P24WP = 0x1000000; // SRAM2 1Kbyte page 24 write protection
    static constexpr uint32_t SWPR_P23WP = 0x800000; // SRAM2 1Kbyte page 23 write protection
    static constexpr uint32_t SWPR_P22WP = 0x400000; // SRAM2 1Kbyte page 22 write protection
    static constexpr uint32_t SWPR_P21WP = 0x200000; // SRAM2 1Kbyte page 21 write protection
    static constexpr uint32_t SWPR_P20WP = 0x100000; // SRAM2 1Kbyte page 20 write protection
    static constexpr uint32_t SWPR_P19WP = 0x80000; // SRAM2 1Kbyte page 19 write protection
    static constexpr uint32_t SWPR_P18WP = 0x40000; // SRAM2 1Kbyte page 18 write protection
    static constexpr uint32_t SWPR_P17WP = 0x20000; // SRAM2 1Kbyte page 17 write protection
    static constexpr uint32_t SWPR_P16WP = 0x10000; // SRAM2 1Kbyte page 16 write protection
    static constexpr uint32_t SWPR_P15WP = 0x8000; // SRAM2 1Kbyte page 15 write protection
    static constexpr uint32_t SWPR_P14WP = 0x4000; // SRAM2 1Kbyte page 14 write protection
    static constexpr uint32_t SWPR_P13WP = 0x2000; // SRAM2 1Kbyte page 13 write protection
    static constexpr uint32_t SWPR_P12WP = 0x1000; // SRAM2 1Kbyte page 12 write protection
    static constexpr uint32_t SWPR_P11WP = 0x800; // SRAM2 1Kbyte page 11 write protection
    static constexpr uint32_t SWPR_P10WP = 0x400; // SRAM2 1Kbyte page 10 write protection
    static constexpr uint32_t SWPR_P9WP = 0x200; // SRAM2 1Kbyte page 9 write protection
    static constexpr uint32_t SWPR_P8WP = 0x100; // SRAM2 1Kbyte page 8 write protection
    static constexpr uint32_t SWPR_P7WP = 0x80; // SRAM2 1Kbyte page 7 write protection
    static constexpr uint32_t SWPR_P6WP = 0x40; // SRAM2 1Kbyte page 6 write protection
    static constexpr uint32_t SWPR_P5WP = 0x20; // SRAM2 1Kbyte page 5 write protection
    static constexpr uint32_t SWPR_P4WP = 0x10; // SRAM2 1Kbyte page 4 write protection
    static constexpr uint32_t SWPR_P3WP = 0x8; // SRAM2 1Kbyte page 3 write protection
    static constexpr uint32_t SWPR_P2WP = 0x4; // SRAM2 1Kbyte page 2 write protection
    static constexpr uint32_t SWPR_P1WP = 0x2; // SRAM2 1Kbyte page 1 write protection
    static constexpr uint32_t SWPR_P0WP = 0x1; // SRAM2 1Kbyte page 0 write protection

    static constexpr uint32_t SKR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> SKR_KEY; // SRAM2 write protection key for software erase


    static constexpr uint32_t RFDCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RFDCR_RFTBSEL = 0x1; // radio debug test bus selection
};

// SYSCFG_CONTINUE: System configuration controller

struct stm32wl5x_cm0p_syscfg_continue_t
{
    volatile uint32_t IMR1; // IMR1
    volatile uint32_t IMR2; // IMR2
    volatile uint32_t C2IMR1; // C2IMR1
    volatile uint32_t C2IMR2; // C2IMR2

    static constexpr uint32_t IMR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IMR1_EXTI15IM = 0x80000000; // Peripheral EXTI15 interrupt mask to CPU1
    static constexpr uint32_t IMR1_EXTI14IM = 0x40000000; // Peripheral EXTI14 interrupt mask to CPU1
    static constexpr uint32_t IMR1_EXTI13IM = 0x20000000; // Peripheral EXTI13 interrupt mask to CPU1
    static constexpr uint32_t IMR1_EXTI12IM = 0x10000000; // Peripheral EXTI12 interrupt mask to CPU1
    static constexpr uint32_t IMR1_EXTI11IM = 0x8000000; // Peripheral EXTI11 interrupt mask to CPU1
    static constexpr uint32_t IMR1_EXTI10IM = 0x4000000; // Peripheral EXTI10 interrupt mask to CPU1
    static constexpr uint32_t IMR1_EXTI9IM = 0x2000000; // Peripheral EXTI9 interrupt mask to CPU1
    static constexpr uint32_t IMR1_EXTI8IM = 0x1000000; // Peripheral EXTI8 interrupt mask to CPU1
    static constexpr uint32_t IMR1_EXTI7IM = 0x800000; // Peripheral EXTI7 interrupt mask to CPU1
    static constexpr uint32_t IMR1_EXTI6IM = 0x400000; // Peripheral EXTI6 interrupt mask to CPU1
    static constexpr uint32_t IMR1_EXTI5IM = 0x200000; // Peripheral EXTI5 interrupt mask to CPU1
    static constexpr uint32_t IMR1_RTCSSRUIM = 0x4; // RTCSSRUIM
    static constexpr uint32_t IMR1_RTCSTAMPTAMPLSECSSIM = 0x1; // RTCSTAMPTAMPLSECSSIM

    static constexpr uint32_t IMR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IMR2_PVDIM = 0x100000; // Peripheral xxx interrupt mask to CPU1
    static constexpr uint32_t IMR2_PVM3IM = 0x40000; // Peripheral xxx interrupt mask to CPU1

    static constexpr uint32_t C2IMR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C2IMR1_EXTI15IM = 0x80000000; // Peripheral EXTI15 interrupt mask to CPU2
    static constexpr uint32_t C2IMR1_EXTI14IM = 0x40000000; // Peripheral EXTI14 interrupt mask to CPU2
    static constexpr uint32_t C2IMR1_EXTI13IM = 0x20000000; // Peripheral EXTI13 interrupt mask to CPU2
    static constexpr uint32_t C2IMR1_EXTI12IM = 0x10000000; // Peripheral EXTI12 interrupt mask to CPU2
    static constexpr uint32_t C2IMR1_EXTI11IM = 0x8000000; // Peripheral EXTI11 interrupt mask to CPU2
    static constexpr uint32_t C2IMR1_EXTI10IM = 0x4000000; // Peripheral EXTI10 interrupt mask to CPU2
    static constexpr uint32_t C2IMR1_EXTI9IM = 0x2000000; // Peripheral EXTI9 interrupt mask to CPU2
    static constexpr uint32_t C2IMR1_EXTI8IM = 0x1000000; // Peripheral EXTI8 interrupt mask to CPU2
    static constexpr uint32_t C2IMR1_EXTI7IM = 0x800000; // Peripheral EXTI7 interrupt mask to CPU2
    static constexpr uint32_t C2IMR1_EXTI6IM = 0x400000; // Peripheral EXTI6 interrupt mask to CPU2
    static constexpr uint32_t C2IMR1_EXTI5IM = 0x200000; // Peripheral EXTI5 interrupt mask to CPU2
    static constexpr uint32_t C2IMR1_EXTI4IM = 0x100000; // Peripheral EXTI4 interrupt mask to CPU2
    static constexpr uint32_t C2IMR1_EXTI3IM = 0x80000; // Peripheral EXTI3 interrupt mask to CPU2
    static constexpr uint32_t C2IMR1_EXTI2IM = 0x40000; // Peripheral EXTI2 interrupt mask to CPU2
    static constexpr uint32_t C2IMR1_EXTI1IM = 0x20000; // Peripheral EXTI1 interrupt mask to CPU2
    static constexpr uint32_t C2IMR1_EXTI0IM = 0x10000; // Peripheral EXTI0 interrupt mask to CPU2
    static constexpr uint32_t C2IMR1_DAC1IM = 0x2000; // Peripheral DAC1 interrupt mask to CPU2
    static constexpr uint32_t C2IMR1_ADCIM = 0x1000; // Peripheral ADC interrupt mask to CPU2
    static constexpr uint32_t C2IMR1_COMPIM = 0x800; // Peripheral COMP interrupt mask to CPU2
    static constexpr uint32_t C2IMR1_FLASHIM = 0x40; // Peripheral FLASH interrupt mask to CPU2
    static constexpr uint32_t C2IMR1_RCCIM = 0x20; // Peripheral RCC interrupt mask to CPU2
    static constexpr uint32_t C2IMR1_RTCWKUPIM = 0x8; // Peripheral RTCWKUP interrupt mask to CPU2
    static constexpr uint32_t C2IMR1_RTCSSRUIM = 0x4; // RTCSSRUIM
    static constexpr uint32_t C2IMR1_RTCALARMIM = 0x2; // Peripheral RTCALARM interrupt mask to CPU2
    static constexpr uint32_t C2IMR1_RTCSTAMPTAMPLSECSSIM = 0x1; // Peripheral RTCSTAMPTAMPLSECSS interrupt mask to CPU2
    static constexpr uint32_t C2IMR1_AES1IM = 0x400; // AES1IM
    static constexpr uint32_t C2IMR1_PKAIM = 0x100; // PKAIM

    static constexpr uint32_t C2IMR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C2IMR2_PVDIM = 0x100000; // Peripheral PVD interrupt mask to CPU2
    static constexpr uint32_t C2IMR2_PVM3IM = 0x40000; // Peripheral PVM3 interrupt mask to CPU2
    static constexpr uint32_t C2IMR2_DMAMUX1IM = 0x8000; // Peripheral DMAMUX1 interrupt mask to CPU2
    static constexpr uint32_t C2IMR2_DMA2CH7IM = 0x4000; // Peripheral DMA2CH7 interrupt mask to CPU2
    static constexpr uint32_t C2IMR2_DMA2CH6IM = 0x2000; // Peripheral DMA2CH6 interrupt mask to CPU2
    static constexpr uint32_t C2IMR2_DMA2CH5IM = 0x1000; // Peripheral DMA2CH5 interrupt mask to CPU2
    static constexpr uint32_t C2IMR2_DMA2CH4IM = 0x800; // Peripheral DMA2CH4 interrupt mask to CPU2
    static constexpr uint32_t C2IMR2_DMA2CH3IM = 0x400; // Peripheral DMA2CH3 interrupt mask to CPU2
    static constexpr uint32_t C2IMR2_DMA2CH2IM = 0x200; // Peripheral DMA2CH2 interrupt mask to CPU2
    static constexpr uint32_t C2IMR2_DMA2CH1IM = 0x100; // Peripheral DMA2CH1 interrupt mask to CPU2
    static constexpr uint32_t C2IMR2_DMA1CH7IM = 0x40; // Peripheral DMA1CH7 interrupt mask to CPU2
    static constexpr uint32_t C2IMR2_DMA1CH6IM = 0x20; // Peripheral DMA1CH6 interrupt mask to CPU2
    static constexpr uint32_t C2IMR2_DMA1CH5IM = 0x10; // Peripheral DMA1CH5 interrupt mask to CPU2
    static constexpr uint32_t C2IMR2_DMA1CH4IM = 0x8; // Peripheral DMA1CH4 interrupt mask to CPU2
    static constexpr uint32_t C2IMR2_DMA1CH3IM = 0x4; // Peripheral DMA1CH3 interrupt mask to CPU2
    static constexpr uint32_t C2IMR2_DMA1CH2IM = 0x2; // Peripheral DMA1CH2 interrupt mask to CPU2
    static constexpr uint32_t C2IMR2_DMA1CH1IM = 0x1; // Peripheral DMA1CH1 interrupt mask to CPU2
};

template<>
struct peripheral_t<STM32WL5x_CM0P, SYSCFG>
{
    static constexpr periph_t P = SYSCFG;
    using T = stm32wl5x_cm0p_syscfg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WL5x_CM4, SYSCFG>
{
    static constexpr periph_t P = SYSCFG;
    using T = stm32wl5x_cm0p_syscfg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WLE5_CM4, SYSCFG>
{
    static constexpr periph_t P = SYSCFG;
    using T = stm32wle5_cm4_syscfg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WL5x_CM0P, SYSCFG_CONTINUE>
{
    static constexpr periph_t P = SYSCFG_CONTINUE;
    using T = stm32wl5x_cm0p_syscfg_continue_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WL5x_CM4, SYSCFG_CONTINUE>
{
    static constexpr periph_t P = SYSCFG_CONTINUE;
    using T = stm32wl5x_cm0p_syscfg_continue_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WLE5_CM4, SYSCFG_CONTINUE>
{
    static constexpr periph_t P = SYSCFG_CONTINUE;
    using T = stm32wl5x_cm0p_syscfg_continue_t;
    static T& V;
};

using syscfg_t = peripheral_t<svd, SYSCFG>;
using syscfg_continue_t = peripheral_t<svd, SYSCFG_CONTINUE>;
