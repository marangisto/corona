#pragma once

////
//
//      STM32L0 NVIC peripherals
//
///

// NVIC: Nested Vectored Interrupt Controller

struct stm32l0x0_nvic_t
{
    volatile uint32_t ISER0; // Interrupt Set Enable Register
    reserved_t<0x1f> _0x4;
    volatile uint32_t ICER0; // Interrupt Clear Enable Register
    reserved_t<0x1f> _0x84;
    volatile uint32_t ISPR0; // Interrupt Set-Pending Register
    reserved_t<0x1f> _0x104;
    volatile uint32_t ICPR0; // Interrupt Clear-Pending Register
    reserved_t<0x5f> _0x184;
    volatile uint32_t IPR0; // Interrupt Priority Register 0
    volatile uint32_t IPR1; // Interrupt Priority Register 1
    volatile uint32_t IPR2; // Interrupt Priority Register 2
    volatile uint32_t IPR3; // Interrupt Priority Register 3
    volatile uint32_t IPR4; // Interrupt Priority Register 4
    volatile uint32_t IPR5; // Interrupt Priority Register 5
    volatile uint32_t IPR6; // Interrupt Priority Register 6
    volatile uint32_t IPR7; // Interrupt Priority Register 7

    static constexpr uint32_t ISER0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ISER0_SETENA; // SETENA


    static constexpr uint32_t ICER0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ICER0_CLRENA; // CLRENA


    static constexpr uint32_t ISPR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ISPR0_SETPEND; // SETPEND


    static constexpr uint32_t ICPR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ICPR0_CLRPEND; // CLRPEND


    static constexpr uint32_t IPR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR0_PRI_0; // priority for interrupt 0
    typedef bit_field_t<8, 0xff> IPR0_PRI_1; // priority for interrupt 1
    typedef bit_field_t<16, 0xff> IPR0_PRI_2; // priority for interrupt 2
    typedef bit_field_t<24, 0xff> IPR0_PRI_3; // priority for interrupt 3

    static constexpr uint32_t IPR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR1_PRI_4; // priority for interrupt n
    typedef bit_field_t<8, 0xff> IPR1_PRI_5; // priority for interrupt n
    typedef bit_field_t<16, 0xff> IPR1_PRI_6; // priority for interrupt n
    typedef bit_field_t<24, 0xff> IPR1_PRI_7; // priority for interrupt n

    static constexpr uint32_t IPR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR2_PRI_8; // priority for interrupt n
    typedef bit_field_t<8, 0xff> IPR2_PRI_9; // priority for interrupt n
    typedef bit_field_t<16, 0xff> IPR2_PRI_10; // priority for interrupt n
    typedef bit_field_t<24, 0xff> IPR2_PRI_11; // priority for interrupt n

    static constexpr uint32_t IPR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR3_PRI_12; // priority for interrupt n
    typedef bit_field_t<8, 0xff> IPR3_PRI_13; // priority for interrupt n
    typedef bit_field_t<16, 0xff> IPR3_PRI_14; // priority for interrupt n
    typedef bit_field_t<24, 0xff> IPR3_PRI_15; // priority for interrupt n

    static constexpr uint32_t IPR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR4_PRI_16; // priority for interrupt n
    typedef bit_field_t<8, 0xff> IPR4_PRI_17; // priority for interrupt n
    typedef bit_field_t<16, 0xff> IPR4_PRI_18; // priority for interrupt n
    typedef bit_field_t<24, 0xff> IPR4_PRI_19; // priority for interrupt n

    static constexpr uint32_t IPR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR5_PRI_20; // priority for interrupt n
    typedef bit_field_t<8, 0xff> IPR5_PRI_21; // priority for interrupt n
    typedef bit_field_t<16, 0xff> IPR5_PRI_22; // priority for interrupt n
    typedef bit_field_t<24, 0xff> IPR5_PRI_23; // priority for interrupt n

    static constexpr uint32_t IPR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR6_PRI_24; // priority for interrupt n
    typedef bit_field_t<8, 0xff> IPR6_PRI_25; // priority for interrupt n
    typedef bit_field_t<16, 0xff> IPR6_PRI_26; // priority for interrupt n
    typedef bit_field_t<24, 0xff> IPR6_PRI_27; // priority for interrupt n

    static constexpr uint32_t IPR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR7_PRI_28; // priority for interrupt n
    typedef bit_field_t<8, 0xff> IPR7_PRI_29; // priority for interrupt n
    typedef bit_field_t<16, 0xff> IPR7_PRI_30; // priority for interrupt n
    typedef bit_field_t<24, 0xff> IPR7_PRI_31; // priority for interrupt n
};

template<>
struct peripheral_t<STM32L0x0, NVIC>
{
    using T = stm32l0x0_nvic_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x1, NVIC>
{
    using T = stm32l0x0_nvic_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x2, NVIC>
{
    using T = stm32l0x0_nvic_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x3, NVIC>
{
    using T = stm32l0x0_nvic_t;
    static T& V;
};

using nvic_t = peripheral_t<svd, NVIC>;
