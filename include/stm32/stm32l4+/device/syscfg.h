#pragma once

////
//
//      STM32L4+ SYSCFG peripherals
//
///

// SYSCFG: System configuration controller

struct stm32l4p5_syscfg_t
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

    static constexpr uint32_t MEMRMP_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MEMRMP_FB_MODE = 0x100; // Flash Bank mode selection
    static constexpr uint32_t MEMRMP_QFS = 0x8; // QUADSPI memory mapping swap
    typedef bit_field_t<0, 0x7> MEMRMP_MEM_MODE; // Memory mapping selection

    static constexpr uint32_t CFGR1_RESET_VALUE = 0x7c000001; // Reset value
    typedef bit_field_t<26, 0x3f> CFGR1_FPU_IE; // Floating Point Unit interrupts enable bits
    static constexpr uint32_t CFGR1_I2C3_FMP = 0x400000; // I2C3 Fast-mode Plus driving capability activation
    static constexpr uint32_t CFGR1_I2C2_FMP = 0x200000; // I2C2 Fast-mode Plus driving capability activation
    static constexpr uint32_t CFGR1_I2C1_FMP = 0x100000; // I2C1 Fast-mode Plus driving capability activation
    static constexpr uint32_t CFGR1_I2C_PB9_FMP = 0x80000; // Fast-mode Plus (Fm+) driving capability activation on PB9
    static constexpr uint32_t CFGR1_I2C_PB8_FMP = 0x40000; // Fast-mode Plus (Fm+) driving capability activation on PB8
    static constexpr uint32_t CFGR1_I2C_PB7_FMP = 0x20000; // Fast-mode Plus (Fm+) driving capability activation on PB7
    static constexpr uint32_t CFGR1_I2C_PB6_FMP = 0x10000; // Fast-mode Plus (Fm+) driving capability activation on PB6
    static constexpr uint32_t CFGR1_BOOSTEN = 0x100; // I/O analog switch voltage booster enable
    static constexpr uint32_t CFGR1_FWDIS = 0x1; // Firewall disable

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
};

template<>
struct peripheral_t<STM32L4P5, SYSCFG>
{
    using T = stm32l4p5_syscfg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4Q5, SYSCFG>
{
    using T = stm32l4p5_syscfg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R5, SYSCFG>
{
    using T = stm32l4p5_syscfg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R7, SYSCFG>
{
    using T = stm32l4p5_syscfg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R9, SYSCFG>
{
    using T = stm32l4p5_syscfg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S5, SYSCFG>
{
    using T = stm32l4p5_syscfg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S7, SYSCFG>
{
    using T = stm32l4p5_syscfg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S9, SYSCFG>
{
    using T = stm32l4p5_syscfg_t;
    static T& V;
};

using syscfg_t = peripheral_t<svd, SYSCFG>;

template<int INST> struct syscfg_traits {};

template<> struct syscfg_traits<0>
{
    using syscfg = syscfg_t;

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
