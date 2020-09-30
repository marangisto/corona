#pragma once

////
//
//      STM32F2 SYSCFG peripherals
//
///

// SYSCFG: System configuration controller

struct stm32f215_syscfg_t
{
    volatile uint32_t MEMRM; // memory remap register
    volatile uint32_t PMC; // peripheral mode configuration register
    volatile uint32_t EXTICR1; // external interrupt configuration register 1
    volatile uint32_t EXTICR2; // external interrupt configuration register 2
    volatile uint32_t EXTICR3; // external interrupt configuration register 3
    volatile uint32_t EXTICR4; // external interrupt configuration register 4
    reserved_t<0x2> _0x18;
    volatile uint32_t CMPCR; // Compensation cell control register

    static constexpr uint32_t MEMRM_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> MEMRM_MEM_MODE; // MEM_MODE

    static constexpr uint32_t PMC_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PMC_MII_RMII_SEL = 0x800000; // Ethernet PHY interface selection

    static constexpr uint32_t EXTICR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<12, 0xf> EXTICR1_EXTI3; // EXTI x configuration (x = 0 to 3)
    typedef bit_field_t<8, 0xf> EXTICR1_EXTI2; // EXTI x configuration (x = 0 to 3)
    typedef bit_field_t<4, 0xf> EXTICR1_EXTI1; // EXTI x configuration (x = 0 to 3)
    typedef bit_field_t<0, 0xf> EXTICR1_EXTI0; // EXTI x configuration (x = 0 to 3)

    static constexpr uint32_t EXTICR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<12, 0xf> EXTICR2_EXTI7; // EXTI x configuration (x = 4 to 7)
    typedef bit_field_t<8, 0xf> EXTICR2_EXTI6; // EXTI x configuration (x = 4 to 7)
    typedef bit_field_t<4, 0xf> EXTICR2_EXTI5; // EXTI x configuration (x = 4 to 7)
    typedef bit_field_t<0, 0xf> EXTICR2_EXTI4; // EXTI x configuration (x = 4 to 7)

    static constexpr uint32_t EXTICR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<12, 0xf> EXTICR3_EXTI11; // EXTI x configuration (x = 8 to 11)
    typedef bit_field_t<8, 0xf> EXTICR3_EXTI10; // EXTI10
    typedef bit_field_t<4, 0xf> EXTICR3_EXTI9; // EXTI x configuration (x = 8 to 11)
    typedef bit_field_t<0, 0xf> EXTICR3_EXTI8; // EXTI x configuration (x = 8 to 11)

    static constexpr uint32_t EXTICR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<12, 0xf> EXTICR4_EXTI15; // EXTI x configuration (x = 12 to 15)
    typedef bit_field_t<8, 0xf> EXTICR4_EXTI14; // EXTI x configuration (x = 12 to 15)
    typedef bit_field_t<4, 0xf> EXTICR4_EXTI13; // EXTI x configuration (x = 12 to 15)
    typedef bit_field_t<0, 0xf> EXTICR4_EXTI12; // EXTI x configuration (x = 12 to 15)


    static constexpr uint32_t CMPCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CMPCR_READY = 0x80; // READY
    static constexpr uint32_t CMPCR_CMP_PD = 0x1; // Compensation cell power-down
};

template<>
struct peripheral_t<STM32F215, SYSCFG>
{
    static constexpr periph_t P = SYSCFG;
    using T = stm32f215_syscfg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F217, SYSCFG>
{
    static constexpr periph_t P = SYSCFG;
    using T = stm32f215_syscfg_t;
    static T& V;
};

using syscfg_t = peripheral_t<svd, SYSCFG>;

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
    static void reset()
    {
        RCC::V.APB2RSTR |= RCC::T::APB2RSTR_SYSCFGRST;
    }
};
