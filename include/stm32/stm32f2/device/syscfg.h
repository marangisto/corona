#pragma once

////
//
//      STM32F2 SYSCFG peripherals
//
////

////
//
//      System configuration controller
//
////

struct stm32f215_syscfg_t
{
    volatile uint32_t MEMRM;   // [read-write] memory remap register
    volatile uint32_t PMC;     // [read-write] peripheral mode configuration register
    volatile uint32_t EXTICR1; // [read-write] external interrupt configuration register 1
    volatile uint32_t EXTICR2; // [read-write] external interrupt configuration register 2
    volatile uint32_t EXTICR3; // [read-write] external interrupt configuration register 3
    volatile uint32_t EXTICR4; // [read-write] external interrupt configuration register 4
    reserved_t<0x2> _0x20;
    volatile uint32_t CMPCR;   // Compensation cell control register

    static constexpr uint32_t MEMRM_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MEMRM_MEM_MODE =   // MEM_MODE
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t PMC_RESET_VALUE = 0x0;
    static constexpr uint32_t PMC_MII_RMII_SEL = 0x800000; // Ethernet PHY interface selection

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

    static constexpr uint32_t CMPCR_RESET_VALUE = 0x0;
    static constexpr uint32_t CMPCR_READY = 0x80; // READY
    static constexpr uint32_t CMPCR_CMP_PD = 0x1; // Compensation cell power-down
};


template<>
struct peripheral_t<STM32F215, SYSCFG>
{
    typedef stm32f215_syscfg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F217, SYSCFG>
{
    typedef stm32f215_syscfg_t T;
    static T& V;
};

using syscfg_t = peripheral_t<mcu_svd, SYSCFG>;

