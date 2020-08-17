#pragma once

////
//
//      STM32WB NVIC peripherals
//
///

// NVIC: Nested Vectored Interrupt Controller

struct stm32wb30_cm4_nvic_t
{
    volatile uint32_t ISER0; // Interrupt Set-Enable Register
    volatile uint32_t ISER1; // Interrupt Set-Enable Register
    reserved_t<0x1e> _0x8;
    volatile uint32_t ICER0; // Interrupt Clear-Enable Register
    volatile uint32_t ICER1; // Interrupt Clear-Enable Register
    reserved_t<0x1e> _0x88;
    volatile uint32_t ISPR0; // Interrupt Set-Pending Register
    volatile uint32_t ISPR1; // Interrupt Set-Pending Register
    reserved_t<0x1e> _0x108;
    volatile uint32_t ICPR0; // Interrupt Clear-Pending Register
    volatile uint32_t ICPR1; // Interrupt Clear-Pending Register
    reserved_t<0x1e> _0x188;
    volatile uint32_t IABR0; // Interrupt Active Bit Register
    volatile uint32_t IABR1; // Interrupt Active Bit Register
    reserved_t<0x3e> _0x208;
    volatile uint32_t IPR0; // Interrupt Priority Register
    volatile uint32_t IPR1; // Interrupt Priority Register
    volatile uint32_t IPR2; // Interrupt Priority Register
    volatile uint32_t IPR3; // Interrupt Priority Register
    volatile uint32_t IPR4; // Interrupt Priority Register
    volatile uint32_t IPR5; // Interrupt Priority Register
    volatile uint32_t IPR6; // Interrupt Priority Register
    volatile uint32_t IPR7; // Interrupt Priority Register
    volatile uint32_t IPR8; // Interrupt Priority Register
    volatile uint32_t IPR9; // Interrupt Priority Register
    volatile uint32_t IPR10; // Interrupt Priority Register
    volatile uint32_t IPR11; // Interrupt Priority Register
    volatile uint32_t IPR12; // Interrupt Priority Register
    volatile uint32_t IPR13; // Interrupt Priority Register
    volatile uint32_t IPR14; // Interrupt Priority Register
    volatile uint32_t IPR15; // Interrupt Priority Register
    volatile uint32_t IPR16; // Interrupt Priority Register
    volatile uint32_t IPR17; // Interrupt Priority Register

    static constexpr uint32_t ISER0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ISER0_SETENA; // SETENA

    static constexpr uint32_t ISER1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ISER1_SETENA; // SETENA


    static constexpr uint32_t ICER0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ICER0_CLRENA; // CLRENA

    static constexpr uint32_t ICER1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ICER1_CLRENA; // CLRENA


    static constexpr uint32_t ISPR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ISPR0_SETPEND; // SETPEND

    static constexpr uint32_t ISPR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ISPR1_SETPEND; // SETPEND


    static constexpr uint32_t ICPR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ICPR0_CLRPEND; // CLRPEND

    static constexpr uint32_t ICPR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ICPR1_CLRPEND; // CLRPEND


    static constexpr uint32_t IABR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> IABR0_ACTIVE; // ACTIVE

    static constexpr uint32_t IABR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> IABR1_ACTIVE; // ACTIVE


    static constexpr uint32_t IPR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR0_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR0_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR0_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR0_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR1_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR1_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR1_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR1_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR2_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR2_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR2_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR2_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR3_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR3_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR3_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR3_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR4_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR4_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR4_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR4_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR5_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR5_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR5_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR5_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR6_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR6_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR6_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR6_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR7_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR7_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR7_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR7_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR8_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR8_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR8_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR8_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR8_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR9_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR9_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR9_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR9_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR9_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR10_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR10_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR10_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR10_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR10_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR11_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR11_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR11_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR11_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR11_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR12_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR12_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR12_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR12_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR12_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR13_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR13_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR13_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR13_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR13_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR14_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR14_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR14_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR14_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR14_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR15_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR15_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR15_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR15_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR15_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR16_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR16_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR16_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR16_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR16_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR17_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR17_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR17_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR17_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR17_IPR_N3; // IPR_N3
};

// NVIC_STIR: Nested vectored interrupt controller

struct stm32wb30_cm4_nvic_stir_t
{
    volatile uint32_t STIR; // Software trigger interrupt register

    static constexpr uint32_t STIR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ff> STIR_INTID; // Software generated interrupt ID
};

template<>
struct peripheral_t<STM32WB30_CM4, NVIC>
{
    using T = stm32wb30_cm4_nvic_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WB35_CM4, NVIC>
{
    using T = stm32wb30_cm4_nvic_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WB50_CM4, NVIC>
{
    using T = stm32wb30_cm4_nvic_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WB55_CM4, NVIC>
{
    using T = stm32wb30_cm4_nvic_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WB30_CM4, NVIC_STIR>
{
    using T = stm32wb30_cm4_nvic_stir_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WB35_CM4, NVIC_STIR>
{
    using T = stm32wb30_cm4_nvic_stir_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WB50_CM4, NVIC_STIR>
{
    using T = stm32wb30_cm4_nvic_stir_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WB55_CM4, NVIC_STIR>
{
    using T = stm32wb30_cm4_nvic_stir_t;
    static T& V;
};

using nvic_t = peripheral_t<svd, NVIC>;
using nvic_stir_t = peripheral_t<svd, NVIC_STIR>;
