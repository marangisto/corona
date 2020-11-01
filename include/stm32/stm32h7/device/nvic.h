#pragma once

////
//
//      STM32H7 NVIC peripherals
//
///

// NVIC: Nested Vectored Interrupt Controller

struct stm32h723_nvic_t
{
    volatile uint32_t ISER0; // Interrupt Set-Enable Register
    volatile uint32_t ISER1; // Interrupt Set-Enable Register
    volatile uint32_t ISER2; // Interrupt Set-Enable Register
    reserved_t<0x1d> _0xc;
    volatile uint32_t ICER0; // Interrupt Clear-Enable Register
    volatile uint32_t ICER1; // Interrupt Clear-Enable Register
    volatile uint32_t ICER2; // Interrupt Clear-Enable Register
    reserved_t<0x1d> _0x8c;
    volatile uint32_t ISPR0; // Interrupt Set-Pending Register
    volatile uint32_t ISPR1; // Interrupt Set-Pending Register
    volatile uint32_t ISPR2; // Interrupt Set-Pending Register
    reserved_t<0x1d> _0x10c;
    volatile uint32_t ICPR0; // Interrupt Clear-Pending Register
    volatile uint32_t ICPR1; // Interrupt Clear-Pending Register
    volatile uint32_t ICPR2; // Interrupt Clear-Pending Register
    reserved_t<0x1d> _0x18c;
    volatile uint32_t IABR0; // Interrupt Active Bit Register
    volatile uint32_t IABR1; // Interrupt Active Bit Register
    volatile uint32_t IABR2; // Interrupt Active Bit Register
    reserved_t<0x3d> _0x20c;
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
    volatile uint32_t IPR18; // Interrupt Priority Register
    volatile uint32_t IPR19; // Interrupt Priority Register
    volatile uint32_t IPR20; // Interrupt Priority Register
    volatile uint32_t IPR21; // Interrupt Priority Register
    volatile uint32_t IPR22; // Interrupt Priority Register
    volatile uint32_t IPR23; // Interrupt Priority Register
    volatile uint32_t IPR24; // Interrupt Priority Register
    volatile uint32_t IPR25; // Interrupt Priority Register
    volatile uint32_t IPR26; // Interrupt Priority Register
    volatile uint32_t IPR27; // Interrupt Priority Register
    volatile uint32_t IPR28; // Interrupt Priority Register
    volatile uint32_t IPR29; // Interrupt Priority Register
    volatile uint32_t IPR30; // Interrupt Priority Register
    volatile uint32_t IPR31; // Interrupt Priority Register
    volatile uint32_t IPR32; // Interrupt Priority Register
    volatile uint32_t IPR33; // Interrupt Priority Register
    volatile uint32_t IPR34; // Interrupt Priority Register
    volatile uint32_t IPR35; // Interrupt Priority Register
    volatile uint32_t IPR36; // Interrupt Priority Register
    volatile uint32_t IPR37; // Interrupt Priority Register
    volatile uint32_t IPR38; // Interrupt Priority Register

    static constexpr uint32_t ISER0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ISER0_SETENA; // SETENA

    static constexpr uint32_t ISER1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ISER1_SETENA; // SETENA

    static constexpr uint32_t ISER2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ISER2_SETENA; // SETENA


    static constexpr uint32_t ICER0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ICER0_CLRENA; // CLRENA

    static constexpr uint32_t ICER1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ICER1_CLRENA; // CLRENA

    static constexpr uint32_t ICER2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ICER2_CLRENA; // CLRENA


    static constexpr uint32_t ISPR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ISPR0_SETPEND; // SETPEND

    static constexpr uint32_t ISPR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ISPR1_SETPEND; // SETPEND

    static constexpr uint32_t ISPR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ISPR2_SETPEND; // SETPEND


    static constexpr uint32_t ICPR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ICPR0_CLRPEND; // CLRPEND

    static constexpr uint32_t ICPR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ICPR1_CLRPEND; // CLRPEND

    static constexpr uint32_t ICPR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ICPR2_CLRPEND; // CLRPEND


    static constexpr uint32_t IABR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> IABR0_ACTIVE; // ACTIVE

    static constexpr uint32_t IABR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> IABR1_ACTIVE; // ACTIVE

    static constexpr uint32_t IABR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> IABR2_ACTIVE; // ACTIVE


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

    static constexpr uint32_t IPR18_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR18_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR18_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR18_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR18_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR19_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR19_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR19_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR19_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR19_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR20_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR20_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR20_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR20_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR20_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR21_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR21_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR21_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR21_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR21_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR22_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR22_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR22_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR22_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR22_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR23_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR23_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR23_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR23_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR23_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR24_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR24_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR24_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR24_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR24_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR25_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR25_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR25_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR25_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR25_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR26_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR26_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR26_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR26_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR26_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR27_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR27_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR27_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR27_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR27_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR28_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR28_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR28_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR28_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR28_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR29_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR29_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR29_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR29_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR29_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR30_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR30_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR30_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR30_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR30_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR31_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR31_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR31_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR31_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR31_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR32_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR32_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR32_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR32_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR32_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR33_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR33_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR33_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR33_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR33_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR34_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR34_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR34_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR34_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR34_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR35_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR35_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR35_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR35_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR35_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR36_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR36_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR36_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR36_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR36_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR37_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR37_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR37_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR37_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR37_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR38_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR38_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR38_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR38_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR38_IPR_N3; // IPR_N3
};

// NVIC: Nested Vectored Interrupt Controller

struct stm32h742x_nvic_t
{
    volatile uint32_t ISER0; // Interrupt Set-Enable Register
    volatile uint32_t ISER1; // Interrupt Set-Enable Register
    volatile uint32_t ISER2; // Interrupt Set-Enable Register
    reserved_t<0x1d> _0xc;
    volatile uint32_t ICER0; // Interrupt Clear-Enable Register
    volatile uint32_t ICER1; // Interrupt Clear-Enable Register
    volatile uint32_t ICER2; // Interrupt Clear-Enable Register
    reserved_t<0x1d> _0x8c;
    volatile uint32_t ISPR0; // Interrupt Set-Pending Register
    volatile uint32_t ISPR1; // Interrupt Set-Pending Register
    volatile uint32_t ISPR2; // Interrupt Set-Pending Register
    reserved_t<0x1d> _0x10c;
    volatile uint32_t ICPR0; // Interrupt Clear-Pending Register
    volatile uint32_t ICPR1; // Interrupt Clear-Pending Register
    volatile uint32_t ICPR2; // Interrupt Clear-Pending Register
    reserved_t<0x1d> _0x18c;
    volatile uint32_t IABR0; // Interrupt Active Bit Register
    volatile uint32_t IABR1; // Interrupt Active Bit Register
    volatile uint32_t IABR2; // Interrupt Active Bit Register
    reserved_t<0x3d> _0x20c;
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
    volatile uint32_t IPR18; // Interrupt Priority Register
    volatile uint32_t IPR19; // Interrupt Priority Register
    volatile uint32_t IPR20; // Interrupt Priority Register
    volatile uint32_t IPR21; // Interrupt Priority Register
    volatile uint32_t IPR22; // Interrupt Priority Register
    volatile uint32_t IPR23; // Interrupt Priority Register
    volatile uint32_t IPR24; // Interrupt Priority Register
    volatile uint32_t IPR25; // Interrupt Priority Register
    volatile uint32_t IPR26; // Interrupt Priority Register
    volatile uint32_t IPR27; // Interrupt Priority Register
    volatile uint32_t IPR28; // Interrupt Priority Register
    volatile uint32_t IPR29; // Interrupt Priority Register
    volatile uint32_t IPR30; // Interrupt Priority Register
    volatile uint32_t IPR31; // Interrupt Priority Register
    volatile uint32_t IPR32; // Interrupt Priority Register
    volatile uint32_t IPR33; // Interrupt Priority Register
    volatile uint32_t IPR34; // Interrupt Priority Register
    volatile uint32_t IPR35; // Interrupt Priority Register
    volatile uint32_t IPR36; // Interrupt Priority Register
    volatile uint32_t IPR37; // Interrupt Priority Register
    volatile uint32_t IPR38; // Interrupt Priority Register
    volatile uint32_t IPR39; // Interrupt Priority Register

    static constexpr uint32_t ISER0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ISER0_SETENA; // SETENA

    static constexpr uint32_t ISER1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ISER1_SETENA; // SETENA

    static constexpr uint32_t ISER2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ISER2_SETENA; // SETENA


    static constexpr uint32_t ICER0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ICER0_CLRENA; // CLRENA

    static constexpr uint32_t ICER1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ICER1_CLRENA; // CLRENA

    static constexpr uint32_t ICER2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ICER2_CLRENA; // CLRENA


    static constexpr uint32_t ISPR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ISPR0_SETPEND; // SETPEND

    static constexpr uint32_t ISPR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ISPR1_SETPEND; // SETPEND

    static constexpr uint32_t ISPR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ISPR2_SETPEND; // SETPEND


    static constexpr uint32_t ICPR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ICPR0_CLRPEND; // CLRPEND

    static constexpr uint32_t ICPR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ICPR1_CLRPEND; // CLRPEND

    static constexpr uint32_t ICPR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ICPR2_CLRPEND; // CLRPEND


    static constexpr uint32_t IABR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> IABR0_ACTIVE; // ACTIVE

    static constexpr uint32_t IABR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> IABR1_ACTIVE; // ACTIVE

    static constexpr uint32_t IABR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> IABR2_ACTIVE; // ACTIVE


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

    static constexpr uint32_t IPR18_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR18_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR18_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR18_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR18_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR19_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR19_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR19_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR19_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR19_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR20_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR20_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR20_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR20_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR20_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR21_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR21_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR21_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR21_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR21_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR22_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR22_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR22_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR22_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR22_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR23_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR23_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR23_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR23_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR23_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR24_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR24_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR24_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR24_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR24_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR25_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR25_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR25_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR25_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR25_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR26_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR26_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR26_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR26_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR26_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR27_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR27_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR27_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR27_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR27_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR28_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR28_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR28_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR28_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR28_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR29_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR29_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR29_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR29_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR29_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR30_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR30_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR30_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR30_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR30_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR31_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR31_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR31_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR31_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR31_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR32_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR32_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR32_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR32_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR32_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR33_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR33_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR33_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR33_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR33_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR34_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR34_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR34_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR34_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR34_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR35_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR35_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR35_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR35_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR35_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR36_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR36_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR36_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR36_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR36_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR37_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR37_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR37_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR37_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR37_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR38_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR38_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR38_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR38_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR38_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR39_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR39_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR39_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR39_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR39_IPR_N3; // IPR_N3
};

// NVIC: Nested Vectored Interrupt Controller

struct stm32h750x_nvic_t
{
    volatile uint32_t ISER0; // Interrupt Set-Enable Register
    volatile uint32_t ISER1; // Interrupt Set-Enable Register
    volatile uint32_t ISER2; // Interrupt Set-Enable Register
    reserved_t<0x1d> _0xc;
    volatile uint32_t ICER0; // Interrupt Clear-Enable Register
    volatile uint32_t ICER1; // Interrupt Clear-Enable Register
    volatile uint32_t ICER2; // Interrupt Clear-Enable Register
    reserved_t<0x1d> _0x8c;
    volatile uint32_t ISPR0; // Interrupt Set-Pending Register
    volatile uint32_t ISPR1; // Interrupt Set-Pending Register
    volatile uint32_t ISPR2; // Interrupt Set-Pending Register
    reserved_t<0x1d> _0x10c;
    volatile uint32_t ICPR0; // Interrupt Clear-Pending Register
    volatile uint32_t ICPR1; // Interrupt Clear-Pending Register
    volatile uint32_t ICPR2; // Interrupt Clear-Pending Register
    reserved_t<0x1d> _0x18c;
    volatile uint32_t IABR0; // Interrupt Active Bit Register
    volatile uint32_t IABR1; // Interrupt Active Bit Register
    volatile uint32_t IABR2; // Interrupt Active Bit Register
    reserved_t<0x3d> _0x20c;
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
    volatile uint32_t IPR18; // Interrupt Priority Register
    volatile uint32_t IPR19; // Interrupt Priority Register
    volatile uint32_t IPR20; // Interrupt Priority Register

    static constexpr uint32_t ISER0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ISER0_SETENA; // SETENA

    static constexpr uint32_t ISER1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ISER1_SETENA; // SETENA

    static constexpr uint32_t ISER2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ISER2_SETENA; // SETENA


    static constexpr uint32_t ICER0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ICER0_CLRENA; // CLRENA

    static constexpr uint32_t ICER1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ICER1_CLRENA; // CLRENA

    static constexpr uint32_t ICER2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ICER2_CLRENA; // CLRENA


    static constexpr uint32_t ISPR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ISPR0_SETPEND; // SETPEND

    static constexpr uint32_t ISPR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ISPR1_SETPEND; // SETPEND

    static constexpr uint32_t ISPR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ISPR2_SETPEND; // SETPEND


    static constexpr uint32_t ICPR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ICPR0_CLRPEND; // CLRPEND

    static constexpr uint32_t ICPR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ICPR1_CLRPEND; // CLRPEND

    static constexpr uint32_t ICPR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ICPR2_CLRPEND; // CLRPEND


    static constexpr uint32_t IABR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> IABR0_ACTIVE; // ACTIVE

    static constexpr uint32_t IABR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> IABR1_ACTIVE; // ACTIVE

    static constexpr uint32_t IABR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> IABR2_ACTIVE; // ACTIVE


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

    static constexpr uint32_t IPR18_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR18_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR18_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR18_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR18_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR19_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR19_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR19_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR19_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR19_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR20_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR20_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR20_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR20_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR20_IPR_N3; // IPR_N3
};

// NVIC: Nested Vectored Interrupt Controller

struct stm32h7a3x_nvic_t
{
    volatile uint32_t ISER0; // Interrupt Set-Enable Register
    volatile uint32_t ISER1; // Interrupt Set-Enable Register
    volatile uint32_t ISER2; // Interrupt Set-Enable Register
    reserved_t<0x1d> _0xc;
    volatile uint32_t ICER0; // Interrupt Clear-Enable Register
    volatile uint32_t ICER1; // Interrupt Clear-Enable Register
    volatile uint32_t ICER2; // Interrupt Clear-Enable Register
    reserved_t<0x1d> _0x8c;
    volatile uint32_t ISPR0; // Interrupt Set-Pending Register
    volatile uint32_t ISPR1; // Interrupt Set-Pending Register
    volatile uint32_t ISPR2; // Interrupt Set-Pending Register
    reserved_t<0x1d> _0x10c;
    volatile uint32_t ICPR0; // Interrupt Clear-Pending Register
    volatile uint32_t ICPR1; // Interrupt Clear-Pending Register
    volatile uint32_t ICPR2; // Interrupt Clear-Pending Register
    reserved_t<0x1d> _0x18c;
    volatile uint32_t IABR0; // Interrupt Active Bit Register
    volatile uint32_t IABR1; // Interrupt Active Bit Register
    volatile uint32_t IABR2; // Interrupt Active Bit Register
    reserved_t<0x3d> _0x20c;
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
    volatile uint32_t IPR18; // Interrupt Priority Register
    volatile uint32_t IPR19; // Interrupt Priority Register
    volatile uint32_t IPR20; // Interrupt Priority Register
    volatile uint32_t IPR21; // Interrupt Priority Register
    volatile uint32_t IPR22; // Interrupt Priority Register
    volatile uint32_t IPR23; // Interrupt Priority Register
    volatile uint32_t IPR24; // Interrupt Priority Register
    volatile uint32_t IPR25; // Interrupt Priority Register
    volatile uint32_t IPR26; // Interrupt Priority Register
    volatile uint32_t IPR27; // Interrupt Priority Register
    volatile uint32_t IPR28; // Interrupt Priority Register
    volatile uint32_t IPR29; // Interrupt Priority Register
    volatile uint32_t IPR30; // Interrupt Priority Register
    volatile uint32_t IPR31; // Interrupt Priority Register
    volatile uint32_t IPR32; // Interrupt Priority Register
    volatile uint32_t IPR33; // Interrupt Priority Register
    volatile uint32_t IPR34; // Interrupt Priority Register
    volatile uint32_t IPR35; // Interrupt Priority Register
    volatile uint32_t IPR36; // Interrupt Priority Register
    volatile uint32_t IPR37; // Interrupt Priority Register
    volatile uint32_t IPR38; // Interrupt Priority Register
    volatile uint32_t IPR39; // Interrupt Priority Register
    volatile uint32_t ISER3; // Interrupt Set-Enable Register
    volatile uint32_t ISER4; // Interrupt Set-Enable Register
    volatile uint32_t ICER3; // Interrupt Clear-Enable Register
    volatile uint32_t ICER4; // Interrupt Clear-Enable Register
    volatile uint32_t ISPR3; // Interrupt Set-Pending Register
    volatile uint32_t ISPR4; // Interrupt Set-Pending Register
    volatile uint32_t IABR3; // Interrupt Active Bit Register
    volatile uint32_t IABR4; // Interrupt Active Bit Register
    volatile uint32_t IPR40; // Interrupt Priority Register

    static constexpr uint32_t ISER0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ISER0_SETENA; // SETENA

    static constexpr uint32_t ISER1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ISER1_SETENA; // SETENA

    static constexpr uint32_t ISER2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ISER2_SETENA; // SETENA


    static constexpr uint32_t ICER0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ICER0_CLRENA; // CLRENA

    static constexpr uint32_t ICER1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ICER1_CLRENA; // CLRENA

    static constexpr uint32_t ICER2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ICER2_CLRENA; // CLRENA


    static constexpr uint32_t ISPR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ISPR0_SETPEND; // SETPEND

    static constexpr uint32_t ISPR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ISPR1_SETPEND; // SETPEND

    static constexpr uint32_t ISPR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ISPR2_SETPEND; // SETPEND


    static constexpr uint32_t ICPR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ICPR0_CLRPEND; // CLRPEND

    static constexpr uint32_t ICPR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ICPR1_CLRPEND; // CLRPEND

    static constexpr uint32_t ICPR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ICPR2_CLRPEND; // CLRPEND


    static constexpr uint32_t IABR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> IABR0_ACTIVE; // ACTIVE

    static constexpr uint32_t IABR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> IABR1_ACTIVE; // ACTIVE

    static constexpr uint32_t IABR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> IABR2_ACTIVE; // ACTIVE


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

    static constexpr uint32_t IPR18_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR18_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR18_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR18_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR18_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR19_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR19_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR19_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR19_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR19_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR20_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR20_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR20_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR20_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR20_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR21_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR21_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR21_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR21_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR21_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR22_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR22_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR22_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR22_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR22_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR23_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR23_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR23_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR23_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR23_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR24_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR24_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR24_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR24_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR24_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR25_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR25_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR25_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR25_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR25_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR26_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR26_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR26_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR26_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR26_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR27_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR27_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR27_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR27_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR27_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR28_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR28_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR28_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR28_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR28_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR29_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR29_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR29_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR29_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR29_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR30_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR30_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR30_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR30_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR30_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR31_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR31_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR31_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR31_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR31_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR32_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR32_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR32_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR32_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR32_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR33_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR33_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR33_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR33_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR33_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR34_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR34_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR34_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR34_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR34_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR35_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR35_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR35_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR35_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR35_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR36_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR36_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR36_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR36_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR36_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR37_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR37_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR37_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR37_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR37_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR38_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR38_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR38_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR38_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR38_IPR_N3; // IPR_N3

    static constexpr uint32_t IPR39_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR39_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR39_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR39_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR39_IPR_N3; // IPR_N3

    static constexpr uint32_t ISER3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ISER3_SETENA; // SETENA

    static constexpr uint32_t ISER4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ISER4_SETENA; // SETENA

    static constexpr uint32_t ICER3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ICER3_CLRENA; // CLRENA

    static constexpr uint32_t ICER4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ICER4_CLRENA; // CLRENA

    static constexpr uint32_t ISPR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ISPR3_SETPEND; // SETPEND

    static constexpr uint32_t ISPR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ISPR4_SETPEND; // SETPEND

    static constexpr uint32_t IABR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> IABR3_ACTIVE; // ACTIVE

    static constexpr uint32_t IABR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> IABR4_ACTIVE; // ACTIVE

    static constexpr uint32_t IPR40_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> IPR40_IPR_N0; // IPR_N0
    typedef bit_field_t<8, 0xff> IPR40_IPR_N1; // IPR_N1
    typedef bit_field_t<16, 0xff> IPR40_IPR_N2; // IPR_N2
    typedef bit_field_t<24, 0xff> IPR40_IPR_N3; // IPR_N3
};

// NVIC_STIR: Nested vectored interrupt controller

struct stm32h723_nvic_stir_t
{
    volatile uint32_t STIR; // Software trigger interrupt register

    static constexpr uint32_t STIR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ff> STIR_INTID; // Software generated interrupt ID
};

template<>
struct peripheral_t<STM32H723, NVIC>
{
    static constexpr periph_t P = NVIC;
    using T = stm32h723_nvic_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H73x, NVIC>
{
    static constexpr periph_t P = NVIC;
    using T = stm32h723_nvic_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, NVIC>
{
    static constexpr periph_t P = NVIC;
    using T = stm32h723_nvic_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, NVIC>
{
    static constexpr periph_t P = NVIC;
    using T = stm32h723_nvic_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, NVIC>
{
    static constexpr periph_t P = NVIC;
    using T = stm32h723_nvic_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, NVIC>
{
    static constexpr periph_t P = NVIC;
    using T = stm32h723_nvic_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, NVIC>
{
    static constexpr periph_t P = NVIC;
    using T = stm32h723_nvic_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, NVIC>
{
    static constexpr periph_t P = NVIC;
    using T = stm32h723_nvic_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, NVIC>
{
    static constexpr periph_t P = NVIC;
    using T = stm32h723_nvic_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, NVIC>
{
    static constexpr periph_t P = NVIC;
    using T = stm32h723_nvic_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, NVIC>
{
    static constexpr periph_t P = NVIC;
    using T = stm32h742x_nvic_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, NVIC>
{
    static constexpr periph_t P = NVIC;
    using T = stm32h742x_nvic_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, NVIC>
{
    static constexpr periph_t P = NVIC;
    using T = stm32h742x_nvic_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, NVIC>
{
    static constexpr periph_t P = NVIC;
    using T = stm32h750x_nvic_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, NVIC>
{
    static constexpr periph_t P = NVIC;
    using T = stm32h7a3x_nvic_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, NVIC>
{
    static constexpr periph_t P = NVIC;
    using T = stm32h7a3x_nvic_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, NVIC>
{
    static constexpr periph_t P = NVIC;
    using T = stm32h7a3x_nvic_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H723, NVIC_STIR>
{
    static constexpr periph_t P = NVIC_STIR;
    using T = stm32h723_nvic_stir_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H73x, NVIC_STIR>
{
    static constexpr periph_t P = NVIC_STIR;
    using T = stm32h723_nvic_stir_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, NVIC_STIR>
{
    static constexpr periph_t P = NVIC_STIR;
    using T = stm32h723_nvic_stir_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, NVIC_STIR>
{
    static constexpr periph_t P = NVIC_STIR;
    using T = stm32h723_nvic_stir_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, NVIC_STIR>
{
    static constexpr periph_t P = NVIC_STIR;
    using T = stm32h723_nvic_stir_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, NVIC_STIR>
{
    static constexpr periph_t P = NVIC_STIR;
    using T = stm32h723_nvic_stir_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, NVIC_STIR>
{
    static constexpr periph_t P = NVIC_STIR;
    using T = stm32h723_nvic_stir_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, NVIC_STIR>
{
    static constexpr periph_t P = NVIC_STIR;
    using T = stm32h723_nvic_stir_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, NVIC_STIR>
{
    static constexpr periph_t P = NVIC_STIR;
    using T = stm32h723_nvic_stir_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, NVIC_STIR>
{
    static constexpr periph_t P = NVIC_STIR;
    using T = stm32h723_nvic_stir_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, NVIC_STIR>
{
    static constexpr periph_t P = NVIC_STIR;
    using T = stm32h723_nvic_stir_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, NVIC_STIR>
{
    static constexpr periph_t P = NVIC_STIR;
    using T = stm32h723_nvic_stir_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, NVIC_STIR>
{
    static constexpr periph_t P = NVIC_STIR;
    using T = stm32h723_nvic_stir_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, NVIC_STIR>
{
    static constexpr periph_t P = NVIC_STIR;
    using T = stm32h723_nvic_stir_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, NVIC_STIR>
{
    static constexpr periph_t P = NVIC_STIR;
    using T = stm32h723_nvic_stir_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, NVIC_STIR>
{
    static constexpr periph_t P = NVIC_STIR;
    using T = stm32h723_nvic_stir_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, NVIC_STIR>
{
    static constexpr periph_t P = NVIC_STIR;
    using T = stm32h723_nvic_stir_t;
    static T& V;
};

using nvic_t = peripheral_t<svd, NVIC>;
using nvic_stir_t = peripheral_t<svd, NVIC_STIR>;
