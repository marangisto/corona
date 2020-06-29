#pragma once

////
//
//      STM32F0 SYSCFG peripherals
//
///

// SYSCFG: System configuration controller

struct stm32f0x0_syscfg_t
{
    volatile uint32_t CFGR1; // configuration register 1
    reserved_t<0x1> _0x4;
    volatile uint32_t EXTICR1; // external interrupt configuration register 1
    volatile uint32_t EXTICR2; // external interrupt configuration register 2
    volatile uint32_t EXTICR3; // external interrupt configuration register 3
    volatile uint32_t EXTICR4; // external interrupt configuration register 4
    volatile uint32_t CFGR2; // configuration register 2

    static constexpr uint32_t CFGR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> CFGR1_MEM_MODE; // Memory mapping selection bits
    static constexpr uint32_t CFGR1_ADC_DMA_RMP = 0x100; // ADC DMA remapping bit
    static constexpr uint32_t CFGR1_USART1_TX_DMA_RMP = 0x200; // USART1_TX DMA remapping bit
    static constexpr uint32_t CFGR1_USART1_RX_DMA_RMP = 0x400; // USART1_RX DMA request remapping bit
    static constexpr uint32_t CFGR1_TIM16_DMA_RMP = 0x800; // TIM16 DMA request remapping bit
    static constexpr uint32_t CFGR1_TIM17_DMA_RMP = 0x1000; // TIM17 DMA request remapping bit
    static constexpr uint32_t CFGR1_I2C_PB6_FM = 0x10000; // Fast Mode Plus (FM plus) driving capability activation bits.
    static constexpr uint32_t CFGR1_I2C_PB7_FM = 0x20000; // Fast Mode Plus (FM+) driving capability activation bits.
    static constexpr uint32_t CFGR1_I2C_PB8_FM = 0x40000; // Fast Mode Plus (FM+) driving capability activation bits.
    static constexpr uint32_t CFGR1_I2C_PB9_FM = 0x80000; // Fast Mode Plus (FM+) driving capability activation bits.
    static constexpr uint32_t CFGR1_I2C1_FM_PLUS = 0x100000; // FM+ driving capability activation for I2C1
    static constexpr uint32_t CFGR1_I2C2_FM_PLUS = 0x200000; // FM+ driving capability activation for I2C2
    static constexpr uint32_t CFGR1_SPI2_DMA_RMP = 0x1000000; // SPI2 DMA request remapping bit
    static constexpr uint32_t CFGR1_USART2_DMA_RMP = 0x2000000; // USART2 DMA request remapping bit
    static constexpr uint32_t CFGR1_USART3_DMA_RMP = 0x4000000; // USART3 DMA request remapping bit
    static constexpr uint32_t CFGR1_I2C1_DMA_RMP = 0x8000000; // I2C1 DMA request remapping bit
    static constexpr uint32_t CFGR1_TIM1_DMA_RMP = 0x10000000; // TIM1 DMA request remapping bit
    static constexpr uint32_t CFGR1_TIM2_DMA_RMP = 0x20000000; // TIM2 DMA request remapping bit
    static constexpr uint32_t CFGR1_TIM3_DMA_RMP = 0x40000000; // TIM3 DMA request remapping bit


    static constexpr uint32_t EXTICR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<12, 0xf> EXTICR1_EXTI3; // EXTI 3 configuration bits
    typedef bit_field_t<8, 0xf> EXTICR1_EXTI2; // EXTI 2 configuration bits
    typedef bit_field_t<4, 0xf> EXTICR1_EXTI1; // EXTI 1 configuration bits
    typedef bit_field_t<0, 0xf> EXTICR1_EXTI0; // EXTI 0 configuration bits

    static constexpr uint32_t EXTICR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<12, 0xf> EXTICR2_EXTI7; // EXTI 7 configuration bits
    typedef bit_field_t<8, 0xf> EXTICR2_EXTI6; // EXTI 6 configuration bits
    typedef bit_field_t<4, 0xf> EXTICR2_EXTI5; // EXTI 5 configuration bits
    typedef bit_field_t<0, 0xf> EXTICR2_EXTI4; // EXTI 4 configuration bits

    static constexpr uint32_t EXTICR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<12, 0xf> EXTICR3_EXTI11; // EXTI 11 configuration bits
    typedef bit_field_t<8, 0xf> EXTICR3_EXTI10; // EXTI 10 configuration bits
    typedef bit_field_t<4, 0xf> EXTICR3_EXTI9; // EXTI 9 configuration bits
    typedef bit_field_t<0, 0xf> EXTICR3_EXTI8; // EXTI 8 configuration bits

    static constexpr uint32_t EXTICR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<12, 0xf> EXTICR4_EXTI15; // EXTI 15 configuration bits
    typedef bit_field_t<8, 0xf> EXTICR4_EXTI14; // EXTI 14 configuration bits
    typedef bit_field_t<4, 0xf> EXTICR4_EXTI13; // EXTI 13 configuration bits
    typedef bit_field_t<0, 0xf> EXTICR4_EXTI12; // EXTI 12 configuration bits

    static constexpr uint32_t CFGR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR2_SRAM_PEF = 0x100; // SRAM parity flag
    static constexpr uint32_t CFGR2_PVD_LOCK = 0x4; // PVD lock enable bit
    static constexpr uint32_t CFGR2_SRAM_PARITY_LOCK = 0x2; // SRAM parity lock bit
    static constexpr uint32_t CFGR2_LOCUP_LOCK = 0x1; // Cortex-M0 LOCKUP bit enable bit
};

// SYSCFG_COMP: System configuration controller

struct stm32f0x1_syscfg_comp_t
{
    volatile uint32_t SYSCFG_CFGR1; // configuration register 1
    reserved_t<0x1> _0x4;
    volatile uint32_t SYSCFG_EXTICR1; // external interrupt configuration register 1
    volatile uint32_t SYSCFG_EXTICR2; // external interrupt configuration register 2
    volatile uint32_t SYSCFG_EXTICR3; // external interrupt configuration register 3
    volatile uint32_t SYSCFG_EXTICR4; // external interrupt configuration register 4
    volatile uint32_t SYSCFG_CFGR2; // configuration register 2
    volatile uint32_t COMP_CSR; // control and status register

    static constexpr uint32_t SYSCFG_CFGR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> SYSCFG_CFGR1_MEM_MODE; // Memory mapping selection bits
    static constexpr uint32_t SYSCFG_CFGR1_ADC_DMA_RMP = 0x100; // ADC DMA remapping bit
    static constexpr uint32_t SYSCFG_CFGR1_USART1_TX_DMA_RMP = 0x200; // USART1_TX DMA remapping bit
    static constexpr uint32_t SYSCFG_CFGR1_USART1_RX_DMA_RMP = 0x400; // USART1_RX DMA request remapping bit
    static constexpr uint32_t SYSCFG_CFGR1_TIM16_DMA_RMP = 0x800; // TIM16 DMA request remapping bit
    static constexpr uint32_t SYSCFG_CFGR1_TIM17_DMA_RMP = 0x1000; // TIM17 DMA request remapping bit
    static constexpr uint32_t SYSCFG_CFGR1_I2C_PB6_FM = 0x10000; // Fast Mode Plus (FM plus) driving capability activation bits.
    static constexpr uint32_t SYSCFG_CFGR1_I2C_PB7_FM = 0x20000; // Fast Mode Plus (FM+) driving capability activation bits.
    static constexpr uint32_t SYSCFG_CFGR1_I2C_PB8_FM = 0x40000; // Fast Mode Plus (FM+) driving capability activation bits.
    static constexpr uint32_t SYSCFG_CFGR1_I2C_PB9_FM = 0x80000; // Fast Mode Plus (FM+) driving capability activation bits.
    static constexpr uint32_t SYSCFG_CFGR1_I2C1_FM_PLUS = 0x100000; // FM+ driving capability activation for I2C1
    static constexpr uint32_t SYSCFG_CFGR1_I2C2_FM_PLUS = 0x200000; // FM+ driving capability activation for I2C2
    static constexpr uint32_t SYSCFG_CFGR1_SPI2_DMA_RMP = 0x1000000; // SPI2 DMA request remapping bit
    static constexpr uint32_t SYSCFG_CFGR1_USART2_DMA_RMP = 0x2000000; // USART2 DMA request remapping bit
    static constexpr uint32_t SYSCFG_CFGR1_USART3_DMA_RMP = 0x4000000; // USART3 DMA request remapping bit
    static constexpr uint32_t SYSCFG_CFGR1_I2C1_DMA_RMP = 0x8000000; // I2C1 DMA request remapping bit
    static constexpr uint32_t SYSCFG_CFGR1_TIM1_DMA_RMP = 0x10000000; // TIM1 DMA request remapping bit
    static constexpr uint32_t SYSCFG_CFGR1_TIM2_DMA_RMP = 0x20000000; // TIM2 DMA request remapping bit
    static constexpr uint32_t SYSCFG_CFGR1_TIM3_DMA_RMP = 0x40000000; // TIM3 DMA request remapping bit


    static constexpr uint32_t SYSCFG_EXTICR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<12, 0xf> SYSCFG_EXTICR1_EXTI3; // EXTI 3 configuration bits
    typedef bit_field_t<8, 0xf> SYSCFG_EXTICR1_EXTI2; // EXTI 2 configuration bits
    typedef bit_field_t<4, 0xf> SYSCFG_EXTICR1_EXTI1; // EXTI 1 configuration bits
    typedef bit_field_t<0, 0xf> SYSCFG_EXTICR1_EXTI0; // EXTI 0 configuration bits

    static constexpr uint32_t SYSCFG_EXTICR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<12, 0xf> SYSCFG_EXTICR2_EXTI7; // EXTI 7 configuration bits
    typedef bit_field_t<8, 0xf> SYSCFG_EXTICR2_EXTI6; // EXTI 6 configuration bits
    typedef bit_field_t<4, 0xf> SYSCFG_EXTICR2_EXTI5; // EXTI 5 configuration bits
    typedef bit_field_t<0, 0xf> SYSCFG_EXTICR2_EXTI4; // EXTI 4 configuration bits

    static constexpr uint32_t SYSCFG_EXTICR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<12, 0xf> SYSCFG_EXTICR3_EXTI11; // EXTI 11 configuration bits
    typedef bit_field_t<8, 0xf> SYSCFG_EXTICR3_EXTI10; // EXTI 10 configuration bits
    typedef bit_field_t<4, 0xf> SYSCFG_EXTICR3_EXTI9; // EXTI 9 configuration bits
    typedef bit_field_t<0, 0xf> SYSCFG_EXTICR3_EXTI8; // EXTI 8 configuration bits

    static constexpr uint32_t SYSCFG_EXTICR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<12, 0xf> SYSCFG_EXTICR4_EXTI15; // EXTI 15 configuration bits
    typedef bit_field_t<8, 0xf> SYSCFG_EXTICR4_EXTI14; // EXTI 14 configuration bits
    typedef bit_field_t<4, 0xf> SYSCFG_EXTICR4_EXTI13; // EXTI 13 configuration bits
    typedef bit_field_t<0, 0xf> SYSCFG_EXTICR4_EXTI12; // EXTI 12 configuration bits

    static constexpr uint32_t SYSCFG_CFGR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SYSCFG_CFGR2_SRAM_PEF = 0x100; // SRAM parity flag
    static constexpr uint32_t SYSCFG_CFGR2_PVD_LOCK = 0x4; // PVD lock enable bit
    static constexpr uint32_t SYSCFG_CFGR2_SRAM_PARITY_LOCK = 0x2; // SRAM parity lock bit
    static constexpr uint32_t SYSCFG_CFGR2_LOCUP_LOCK = 0x1; // Cortex-M0 LOCKUP bit enable bit

    static constexpr uint32_t COMP_CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t COMP_CSR_COMP1EN = 0x1; // Comparator 1 enable
    static constexpr uint32_t COMP_CSR_COMP1_INP_DAC = 0x2; // COMP1_INP_DAC
    typedef bit_field_t<2, 0x3> COMP_CSR_COMP1MODE; // Comparator 1 mode
    typedef bit_field_t<4, 0x7> COMP_CSR_COMP1INSEL; // Comparator 1 inverting input selection
    typedef bit_field_t<8, 0x7> COMP_CSR_COMP1OUTSEL; // Comparator 1 output selection
    static constexpr uint32_t COMP_CSR_COMP1POL = 0x800; // Comparator 1 output polarity
    typedef bit_field_t<12, 0x3> COMP_CSR_COMP1HYST; // Comparator 1 hysteresis
    static constexpr uint32_t COMP_CSR_COMP1OUT = 0x4000; // Comparator 1 output
    static constexpr uint32_t COMP_CSR_COMP1LOCK = 0x8000; // Comparator 1 lock
    static constexpr uint32_t COMP_CSR_COMP2EN = 0x10000; // Comparator 2 enable
    typedef bit_field_t<18, 0x3> COMP_CSR_COMP2MODE; // Comparator 2 mode
    typedef bit_field_t<20, 0x7> COMP_CSR_COMP2INSEL; // Comparator 2 inverting input selection
    static constexpr uint32_t COMP_CSR_WNDWEN = 0x800000; // Window mode enable
    typedef bit_field_t<24, 0x7> COMP_CSR_COMP2OUTSEL; // Comparator 2 output selection
    static constexpr uint32_t COMP_CSR_COMP2POL = 0x8000000; // Comparator 2 output polarity
    typedef bit_field_t<28, 0x3> COMP_CSR_COMP2HYST; // Comparator 2 hysteresis
    static constexpr uint32_t COMP_CSR_COMP2OUT = 0x40000000; // Comparator 2 output
    static constexpr uint32_t COMP_CSR_COMP2LOCK = 0x80000000; // Comparator 2 lock
};

template<>
struct peripheral_t<STM32F0x0, SYSCFG>
{
    using T = stm32f0x0_syscfg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x1, SYSCFG_COMP>
{
    using T = stm32f0x1_syscfg_comp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x2, SYSCFG_COMP>
{
    using T = stm32f0x1_syscfg_comp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x8, SYSCFG_COMP>
{
    using T = stm32f0x1_syscfg_comp_t;
    static T& V;
};

using syscfg_t = peripheral_t<svd, SYSCFG>;
using syscfg_comp_t = peripheral_t<svd, SYSCFG_COMP>;

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
    static void reset()
    {
        RCC::V.APB2RSTR |= RCC::T::APB2RSTR_SYSCFGRST;
    }
};
