#pragma once

////
//
//      STM32G4 SYSCFG peripherals
//
////

////
//
//      System configuration controller
//
////

struct stm32g431xx_syscfg_t
{
    volatile uint32_t MEMRMP;  // [read-write] Remap Memory register
    volatile uint32_t CFGR1;   // [read-write] peripheral mode configuration register
    volatile uint32_t EXTICR1; // [read-write] external interrupt configuration register 1
    volatile uint32_t EXTICR2; // [read-write] external interrupt configuration register 2
    volatile uint32_t EXTICR3; // [read-write] external interrupt configuration register 3
    volatile uint32_t EXTICR4; // [read-write] external interrupt configuration register 4
    volatile uint32_t SCSR;    // CCM SRAM control and status register
    volatile uint32_t CFGR2;   // [read-write] configuration register 2
    volatile uint32_t SWPR;    // [read-write] SRAM Write protection register 1
    volatile uint32_t SKR;     // [write-only] SRAM2 Key Register

    static constexpr uint32_t MEMRMP_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MEMRMP_MEM_MODE =       // Memory mapping selection
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t MEMRMP_FB_mode = 0x100; // User Flash Bank mode

    static constexpr uint32_t CFGR1_RESET_VALUE = 0x7c000001;
    static constexpr uint32_t CFGR1_BOOSTEN = 0x100;       // BOOSTEN
    static constexpr uint32_t CFGR1_ANASWVDD = 0x200;      // GPIO analog switch control voltage selection
    static constexpr uint32_t CFGR1_I2C_PB6_FMP = 0x10000; // FM+ drive capability on PB6
    static constexpr uint32_t CFGR1_I2C_PB7_FMP = 0x20000; // FM+ drive capability on PB6
    static constexpr uint32_t CFGR1_I2C_PB8_FMP = 0x40000; // FM+ drive capability on PB6
    static constexpr uint32_t CFGR1_I2C_PB9_FMP = 0x80000; // FM+ drive capability on PB6
    static constexpr uint32_t CFGR1_I2C1_FMP = 0x100000;   // I2C1 FM+ drive capability enable
    static constexpr uint32_t CFGR1_I2C2_FMP = 0x200000;   // I2C1 FM+ drive capability enable
    static constexpr uint32_t CFGR1_I2C3_FMP = 0x400000;   // I2C1 FM+ drive capability enable
    static constexpr uint32_t CFGR1_I2C4_FMP = 0x800000;   // I2C1 FM+ drive capability enable
    template<uint32_t X>
    static constexpr uint32_t CFGR1_FPU_IE =               // FPU Interrupts Enable
        bit_field_t<26, 0x3f>::value<X>();

    static constexpr uint32_t EXTICR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EXTICR1_EXTI3 =   // EXTI x configuration (x = 0 to 3)
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR1_EXTI2 =   // EXTI x configuration (x = 0 to 3)
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR1_EXTI1 =   // EXTI x configuration (x = 0 to 3)
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR1_EXTI0 =   // EXTI x configuration (x = 0 to 3)
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t EXTICR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EXTICR2_EXTI7 =   // EXTI x configuration (x = 4 to 7)
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR2_EXTI6 =   // EXTI x configuration (x = 4 to 7)
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR2_EXTI5 =   // EXTI x configuration (x = 4 to 7)
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR2_EXTI4 =   // EXTI x configuration (x = 4 to 7)
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t EXTICR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EXTICR3_EXTI11 =   // EXTI x configuration (x = 8 to 11)
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR3_EXTI10 =   // EXTI10
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR3_EXTI9 =    // EXTI x configuration (x = 8 to 11)
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR3_EXTI8 =    // EXTI x configuration (x = 8 to 11)
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t EXTICR4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EXTICR4_EXTI15 =   // EXTI x configuration (x = 12 to 15)
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR4_EXTI14 =   // EXTI x configuration (x = 12 to 15)
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR4_EXTI13 =   // EXTI x configuration (x = 12 to 15)
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR4_EXTI12 =   // EXTI x configuration (x = 12 to 15)
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t SCSR_RESET_VALUE = 0x0;
    static constexpr uint32_t SCSR_CCMER = 0x1;  // CCM SRAM Erase
    static constexpr uint32_t SCSR_CCMBSY = 0x2; // CCM SRAM busy by erase operation

    static constexpr uint32_t CFGR2_RESET_VALUE = 0x0;
    static constexpr uint32_t CFGR2_CLL = 0x1;   // Core Lockup Lock
    static constexpr uint32_t CFGR2_SPL = 0x2;   // SRAM Parity Lock
    static constexpr uint32_t CFGR2_PVDL = 0x4;  // PVD Lock
    static constexpr uint32_t CFGR2_ECCL = 0x8;  // ECC Lock
    static constexpr uint32_t CFGR2_SPF = 0x100; // SRAM Parity Flag

    static constexpr uint32_t SWPR_RESET_VALUE = 0x0;
    static constexpr uint32_t SWPR_Page0_WP = 0x1;         // Write protection
    static constexpr uint32_t SWPR_Page1_WP = 0x2;         // Write protection
    static constexpr uint32_t SWPR_Page2_WP = 0x4;         // Write protection
    static constexpr uint32_t SWPR_Page3_WP = 0x8;         // Write protection
    static constexpr uint32_t SWPR_Page4_WP = 0x10;        // Write protection
    static constexpr uint32_t SWPR_Page5_WP = 0x20;        // Write protection
    static constexpr uint32_t SWPR_Page6_WP = 0x40;        // Write protection
    static constexpr uint32_t SWPR_Page7_WP = 0x80;        // Write protection
    static constexpr uint32_t SWPR_Page8_WP = 0x100;       // Write protection
    static constexpr uint32_t SWPR_Page9_WP = 0x200;       // Write protection
    static constexpr uint32_t SWPR_Page10_WP = 0x400;      // Write protection
    static constexpr uint32_t SWPR_Page11_WP = 0x800;      // Write protection
    static constexpr uint32_t SWPR_Page12_WP = 0x1000;     // Write protection
    static constexpr uint32_t SWPR_Page13_WP = 0x2000;     // Write protection
    static constexpr uint32_t SWPR_Page14_WP = 0x4000;     // Write protection
    static constexpr uint32_t SWPR_Page15_WP = 0x8000;     // Write protection
    static constexpr uint32_t SWPR_Page16_WP = 0x10000;    // Write protection
    static constexpr uint32_t SWPR_Page17_WP = 0x20000;    // Write protection
    static constexpr uint32_t SWPR_Page18_WP = 0x40000;    // Write protection
    static constexpr uint32_t SWPR_Page19_WP = 0x80000;    // Write protection
    static constexpr uint32_t SWPR_Page20_WP = 0x100000;   // Write protection
    static constexpr uint32_t SWPR_Page21_WP = 0x200000;   // Write protection
    static constexpr uint32_t SWPR_Page22_WP = 0x400000;   // Write protection
    static constexpr uint32_t SWPR_Page23_WP = 0x800000;   // Write protection
    static constexpr uint32_t SWPR_Page24_WP = 0x1000000;  // Write protection
    static constexpr uint32_t SWPR_Page25_WP = 0x2000000;  // Write protection
    static constexpr uint32_t SWPR_Page26_WP = 0x4000000;  // Write protection
    static constexpr uint32_t SWPR_Page27_WP = 0x8000000;  // Write protection
    static constexpr uint32_t SWPR_Page28_WP = 0x10000000; // Write protection
    static constexpr uint32_t SWPR_Page29_WP = 0x20000000; // Write protection
    static constexpr uint32_t SWPR_Page30_WP = 0x40000000; // Write protection
    static constexpr uint32_t SWPR_Page31_WP = 0x80000000; // Write protection

    static constexpr uint32_t SKR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SKR_KEY =   // SRAM2 Key for software erase
        bit_field_t<0, 0xff>::value<X>();
};


template<>
struct peripheral_t<STM32G431xx, SYSCFG>
{
    typedef stm32g431xx_syscfg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G441xx, SYSCFG>
{
    typedef stm32g431xx_syscfg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G471xx, SYSCFG>
{
    typedef stm32g431xx_syscfg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G473xx, SYSCFG>
{
    typedef stm32g431xx_syscfg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G474xx, SYSCFG>
{
    typedef stm32g431xx_syscfg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G483xx, SYSCFG>
{
    typedef stm32g431xx_syscfg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, SYSCFG>
{
    typedef stm32g431xx_syscfg_t T;
    static T& V;
};

using syscfg_t = peripheral_t<mcu_svd, SYSCFG>;

