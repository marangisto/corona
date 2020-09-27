#pragma once

////
//
//      STM32G4 SYSCFG peripherals
//
///

// SYSCFG: System configuration controller

struct stm32g431xx_syscfg_t
{
    volatile uint32_t MEMRMP; // Remap Memory register
    volatile uint32_t CFGR1; // peripheral mode configuration register
    volatile uint32_t EXTICR1; // external interrupt configuration register 1
    volatile uint32_t EXTICR2; // external interrupt configuration register 2
    volatile uint32_t EXTICR3; // external interrupt configuration register 3
    volatile uint32_t EXTICR4; // external interrupt configuration register 4
    volatile uint32_t SCSR; // CCM SRAM control and status register
    volatile uint32_t CFGR2; // configuration register 2
    volatile uint32_t SWPR; // SRAM Write protection register 1
    volatile uint32_t SKR; // SRAM2 Key Register

    static constexpr uint32_t MEMRMP_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> MEMRMP_MEM_MODE; // Memory mapping selection
    static constexpr uint32_t MEMRMP_FB_MODE = 0x100; // User Flash Bank mode

    static constexpr uint32_t CFGR1_RESET_VALUE = 0x7c000001; // Reset value
    static constexpr uint32_t CFGR1_BOOSTEN = 0x100; // BOOSTEN
    static constexpr uint32_t CFGR1_ANASWVDD = 0x200; // GPIO analog switch control voltage selection
    static constexpr uint32_t CFGR1_I2C_PB6_FMP = 0x10000; // FM+ drive capability on PB6
    static constexpr uint32_t CFGR1_I2C_PB7_FMP = 0x20000; // FM+ drive capability on PB6
    static constexpr uint32_t CFGR1_I2C_PB8_FMP = 0x40000; // FM+ drive capability on PB6
    static constexpr uint32_t CFGR1_I2C_PB9_FMP = 0x80000; // FM+ drive capability on PB6
    static constexpr uint32_t CFGR1_I2C1_FMP = 0x100000; // I2C1 FM+ drive capability enable
    static constexpr uint32_t CFGR1_I2C2_FMP = 0x200000; // I2C1 FM+ drive capability enable
    static constexpr uint32_t CFGR1_I2C3_FMP = 0x400000; // I2C1 FM+ drive capability enable
    static constexpr uint32_t CFGR1_I2C4_FMP = 0x800000; // I2C1 FM+ drive capability enable
    typedef bit_field_t<26, 0x3f> CFGR1_FPU_IE; // FPU Interrupts Enable

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

    static constexpr uint32_t SCSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SCSR_CCMER = 0x1; // CCM SRAM Erase
    static constexpr uint32_t SCSR_CCMBSY = 0x2; // CCM SRAM busy by erase operation

    static constexpr uint32_t CFGR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR2_CLL = 0x1; // Core Lockup Lock
    static constexpr uint32_t CFGR2_SPL = 0x2; // SRAM Parity Lock
    static constexpr uint32_t CFGR2_PVDL = 0x4; // PVD Lock
    static constexpr uint32_t CFGR2_ECCL = 0x8; // ECC Lock
    static constexpr uint32_t CFGR2_SPF = 0x100; // SRAM Parity Flag

    static constexpr uint32_t SWPR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SWPR_PAGE0_WP = 0x1; // Write protection
    static constexpr uint32_t SWPR_PAGE1_WP = 0x2; // Write protection
    static constexpr uint32_t SWPR_PAGE2_WP = 0x4; // Write protection
    static constexpr uint32_t SWPR_PAGE3_WP = 0x8; // Write protection
    static constexpr uint32_t SWPR_PAGE4_WP = 0x10; // Write protection
    static constexpr uint32_t SWPR_PAGE5_WP = 0x20; // Write protection
    static constexpr uint32_t SWPR_PAGE6_WP = 0x40; // Write protection
    static constexpr uint32_t SWPR_PAGE7_WP = 0x80; // Write protection
    static constexpr uint32_t SWPR_PAGE8_WP = 0x100; // Write protection
    static constexpr uint32_t SWPR_PAGE9_WP = 0x200; // Write protection
    static constexpr uint32_t SWPR_PAGE10_WP = 0x400; // Write protection
    static constexpr uint32_t SWPR_PAGE11_WP = 0x800; // Write protection
    static constexpr uint32_t SWPR_PAGE12_WP = 0x1000; // Write protection
    static constexpr uint32_t SWPR_PAGE13_WP = 0x2000; // Write protection
    static constexpr uint32_t SWPR_PAGE14_WP = 0x4000; // Write protection
    static constexpr uint32_t SWPR_PAGE15_WP = 0x8000; // Write protection
    static constexpr uint32_t SWPR_PAGE16_WP = 0x10000; // Write protection
    static constexpr uint32_t SWPR_PAGE17_WP = 0x20000; // Write protection
    static constexpr uint32_t SWPR_PAGE18_WP = 0x40000; // Write protection
    static constexpr uint32_t SWPR_PAGE19_WP = 0x80000; // Write protection
    static constexpr uint32_t SWPR_PAGE20_WP = 0x100000; // Write protection
    static constexpr uint32_t SWPR_PAGE21_WP = 0x200000; // Write protection
    static constexpr uint32_t SWPR_PAGE22_WP = 0x400000; // Write protection
    static constexpr uint32_t SWPR_PAGE23_WP = 0x800000; // Write protection
    static constexpr uint32_t SWPR_PAGE24_WP = 0x1000000; // Write protection
    static constexpr uint32_t SWPR_PAGE25_WP = 0x2000000; // Write protection
    static constexpr uint32_t SWPR_PAGE26_WP = 0x4000000; // Write protection
    static constexpr uint32_t SWPR_PAGE27_WP = 0x8000000; // Write protection
    static constexpr uint32_t SWPR_PAGE28_WP = 0x10000000; // Write protection
    static constexpr uint32_t SWPR_PAGE29_WP = 0x20000000; // Write protection
    static constexpr uint32_t SWPR_PAGE30_WP = 0x40000000; // Write protection
    static constexpr uint32_t SWPR_PAGE31_WP = 0x80000000; // Write protection

    static constexpr uint32_t SKR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> SKR_KEY; // SRAM2 Key for software erase
};

template<>
struct peripheral_t<STM32G431xx, SYSCFG>
{
    static constexpr periph_t P = SYSCFG;
    using T = stm32g431xx_syscfg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G441xx, SYSCFG>
{
    static constexpr periph_t P = SYSCFG;
    using T = stm32g431xx_syscfg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G471xx, SYSCFG>
{
    static constexpr periph_t P = SYSCFG;
    using T = stm32g431xx_syscfg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G473xx, SYSCFG>
{
    static constexpr periph_t P = SYSCFG;
    using T = stm32g431xx_syscfg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G474xx, SYSCFG>
{
    static constexpr periph_t P = SYSCFG;
    using T = stm32g431xx_syscfg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G483xx, SYSCFG>
{
    static constexpr periph_t P = SYSCFG;
    using T = stm32g431xx_syscfg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, SYSCFG>
{
    static constexpr periph_t P = SYSCFG;
    using T = stm32g431xx_syscfg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32GBK1CBT6, SYSCFG>
{
    static constexpr periph_t P = SYSCFG;
    using T = stm32g431xx_syscfg_t;
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
