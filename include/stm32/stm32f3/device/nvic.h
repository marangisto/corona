#pragma once

////
//
//      STM32F3 NVIC peripherals
//
////

////
//
//      Nested Vectored Interrupt Controller
//
////

struct stm32f301_nvic_t
{
    volatile uint32_t ISER0; // [read-write] Interrupt Set-Enable Register
    volatile uint32_t ISER1; // [read-write] Interrupt Set-Enable Register
    volatile uint32_t ISER2; // [read-write] Interrupt Set-Enable Register
    reserved_t<0x1d> _0x80;
    volatile uint32_t ICER0; // [read-write] Interrupt Clear-Enable Register
    volatile uint32_t ICER1; // [read-write] Interrupt Clear-Enable Register
    volatile uint32_t ICER2; // [read-write] Interrupt Clear-Enable Register
    reserved_t<0x1d> _0x100;
    volatile uint32_t ISPR0; // [read-write] Interrupt Set-Pending Register
    volatile uint32_t ISPR1; // [read-write] Interrupt Set-Pending Register
    volatile uint32_t ISPR2; // [read-write] Interrupt Set-Pending Register
    reserved_t<0x1d> _0x180;
    volatile uint32_t ICPR0; // [read-write] Interrupt Clear-Pending Register
    volatile uint32_t ICPR1; // [read-write] Interrupt Clear-Pending Register
    volatile uint32_t ICPR2; // [read-write] Interrupt Clear-Pending Register
    reserved_t<0x1d> _0x200;
    volatile uint32_t IABR0; // [read-only] Interrupt Active Bit Register
    volatile uint32_t IABR1; // [read-only] Interrupt Active Bit Register
    volatile uint32_t IABR2; // [read-only] Interrupt Active Bit Register
    reserved_t<0x3d> _0x300;
    volatile uint32_t IPR0;  // [read-write] Interrupt Priority Register
    volatile uint32_t IPR1;  // [read-write] Interrupt Priority Register
    volatile uint32_t IPR2;  // [read-write] Interrupt Priority Register
    volatile uint32_t IPR3;  // [read-write] Interrupt Priority Register
    volatile uint32_t IPR4;  // [read-write] Interrupt Priority Register
    volatile uint32_t IPR5;  // [read-write] Interrupt Priority Register
    volatile uint32_t IPR6;  // [read-write] Interrupt Priority Register
    volatile uint32_t IPR7;  // [read-write] Interrupt Priority Register
    volatile uint32_t IPR8;  // [read-write] Interrupt Priority Register
    volatile uint32_t IPR9;  // [read-write] Interrupt Priority Register
    volatile uint32_t IPR10; // [read-write] Interrupt Priority Register
    volatile uint32_t IPR11; // [read-write] Interrupt Priority Register
    volatile uint32_t IPR12; // [read-write] Interrupt Priority Register
    volatile uint32_t IPR13; // [read-write] Interrupt Priority Register
    volatile uint32_t IPR14; // [read-write] Interrupt Priority Register
    volatile uint32_t IPR15; // [read-write] Interrupt Priority Register
    volatile uint32_t IPR16; // [read-write] Interrupt Priority Register
    volatile uint32_t IPR17; // [read-write] Interrupt Priority Register
    volatile uint32_t IPR18; // [read-write] Interrupt Priority Register
    volatile uint32_t IPR19; // [read-write] Interrupt Priority Register
    volatile uint32_t IPR20; // [read-write] Interrupt Priority Register

    static constexpr uint32_t ISER0_RESET_VALUE = 0x0;

    static constexpr uint32_t ISER1_RESET_VALUE = 0x0;

    static constexpr uint32_t ISER2_RESET_VALUE = 0x0;

    static constexpr uint32_t ICER0_RESET_VALUE = 0x0;

    static constexpr uint32_t ICER1_RESET_VALUE = 0x0;

    static constexpr uint32_t ICER2_RESET_VALUE = 0x0;

    static constexpr uint32_t ISPR0_RESET_VALUE = 0x0;

    static constexpr uint32_t ISPR1_RESET_VALUE = 0x0;

    static constexpr uint32_t ISPR2_RESET_VALUE = 0x0;

    static constexpr uint32_t ICPR0_RESET_VALUE = 0x0;

    static constexpr uint32_t ICPR1_RESET_VALUE = 0x0;

    static constexpr uint32_t ICPR2_RESET_VALUE = 0x0;

    static constexpr uint32_t IABR0_RESET_VALUE = 0x0;

    static constexpr uint32_t IABR1_RESET_VALUE = 0x0;

    static constexpr uint32_t IABR2_RESET_VALUE = 0x0;

    static constexpr uint32_t IPR0_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPR0_IPR_N0 =   // IPR_N0
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR0_IPR_N1 =   // IPR_N1
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR0_IPR_N2 =   // IPR_N2
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR0_IPR_N3 =   // IPR_N3
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t IPR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPR1_IPR_N0 =   // IPR_N0
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR1_IPR_N1 =   // IPR_N1
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR1_IPR_N2 =   // IPR_N2
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR1_IPR_N3 =   // IPR_N3
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t IPR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPR2_IPR_N0 =   // IPR_N0
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR2_IPR_N1 =   // IPR_N1
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR2_IPR_N2 =   // IPR_N2
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR2_IPR_N3 =   // IPR_N3
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t IPR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPR3_IPR_N0 =   // IPR_N0
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR3_IPR_N1 =   // IPR_N1
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR3_IPR_N2 =   // IPR_N2
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR3_IPR_N3 =   // IPR_N3
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t IPR4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPR4_IPR_N0 =   // IPR_N0
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR4_IPR_N1 =   // IPR_N1
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR4_IPR_N2 =   // IPR_N2
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR4_IPR_N3 =   // IPR_N3
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t IPR5_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPR5_IPR_N0 =   // IPR_N0
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR5_IPR_N1 =   // IPR_N1
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR5_IPR_N2 =   // IPR_N2
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR5_IPR_N3 =   // IPR_N3
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t IPR6_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPR6_IPR_N0 =   // IPR_N0
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR6_IPR_N1 =   // IPR_N1
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR6_IPR_N2 =   // IPR_N2
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR6_IPR_N3 =   // IPR_N3
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t IPR7_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPR7_IPR_N0 =   // IPR_N0
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR7_IPR_N1 =   // IPR_N1
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR7_IPR_N2 =   // IPR_N2
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR7_IPR_N3 =   // IPR_N3
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t IPR8_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPR8_IPR_N0 =   // IPR_N0
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR8_IPR_N1 =   // IPR_N1
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR8_IPR_N2 =   // IPR_N2
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR8_IPR_N3 =   // IPR_N3
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t IPR9_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPR9_IPR_N0 =   // IPR_N0
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR9_IPR_N1 =   // IPR_N1
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR9_IPR_N2 =   // IPR_N2
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR9_IPR_N3 =   // IPR_N3
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t IPR10_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPR10_IPR_N0 =   // IPR_N0
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR10_IPR_N1 =   // IPR_N1
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR10_IPR_N2 =   // IPR_N2
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR10_IPR_N3 =   // IPR_N3
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t IPR11_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPR11_IPR_N0 =   // IPR_N0
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR11_IPR_N1 =   // IPR_N1
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR11_IPR_N2 =   // IPR_N2
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR11_IPR_N3 =   // IPR_N3
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t IPR12_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPR12_IPR_N0 =   // IPR_N0
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR12_IPR_N1 =   // IPR_N1
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR12_IPR_N2 =   // IPR_N2
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR12_IPR_N3 =   // IPR_N3
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t IPR13_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPR13_IPR_N0 =   // IPR_N0
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR13_IPR_N1 =   // IPR_N1
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR13_IPR_N2 =   // IPR_N2
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR13_IPR_N3 =   // IPR_N3
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t IPR14_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPR14_IPR_N0 =   // IPR_N0
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR14_IPR_N1 =   // IPR_N1
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR14_IPR_N2 =   // IPR_N2
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR14_IPR_N3 =   // IPR_N3
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t IPR15_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPR15_IPR_N0 =   // IPR_N0
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR15_IPR_N1 =   // IPR_N1
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR15_IPR_N2 =   // IPR_N2
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR15_IPR_N3 =   // IPR_N3
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t IPR16_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPR16_IPR_N0 =   // IPR_N0
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR16_IPR_N1 =   // IPR_N1
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR16_IPR_N2 =   // IPR_N2
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR16_IPR_N3 =   // IPR_N3
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t IPR17_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPR17_IPR_N0 =   // IPR_N0
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR17_IPR_N1 =   // IPR_N1
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR17_IPR_N2 =   // IPR_N2
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR17_IPR_N3 =   // IPR_N3
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t IPR18_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPR18_IPR_N0 =   // IPR_N0
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR18_IPR_N1 =   // IPR_N1
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR18_IPR_N2 =   // IPR_N2
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR18_IPR_N3 =   // IPR_N3
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t IPR19_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPR19_IPR_N0 =   // IPR_N0
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR19_IPR_N1 =   // IPR_N1
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR19_IPR_N2 =   // IPR_N2
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR19_IPR_N3 =   // IPR_N3
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t IPR20_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPR20_IPR_N0 =   // IPR_N0
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR20_IPR_N1 =   // IPR_N1
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR20_IPR_N2 =   // IPR_N2
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR20_IPR_N3 =   // IPR_N3
        bit_field_t<24, 0xff>::value<X>();
};


////
//
//      Nested Vectored Interrupt Controller
//
////

struct stm32f303_nvic_t
{
    volatile uint32_t ISER0; // [read-write] Interrupt Set-Enable Register
    volatile uint32_t ISER1; // [read-write] Interrupt Set-Enable Register
    reserved_t<0x1e> _0x80;
    volatile uint32_t ICER0; // [read-write] Interrupt Clear-Enable Register
    volatile uint32_t ICER1; // [read-write] Interrupt Clear-Enable Register
    reserved_t<0x1e> _0x100;
    volatile uint32_t ISPR0; // [read-write] Interrupt Set-Pending Register
    volatile uint32_t ISPR1; // [read-write] Interrupt Set-Pending Register
    reserved_t<0x1e> _0x180;
    volatile uint32_t ICPR0; // [read-write] Interrupt Clear-Pending Register
    volatile uint32_t ICPR1; // [read-write] Interrupt Clear-Pending Register
    reserved_t<0x1e> _0x200;
    volatile uint32_t IABR0; // [read-only] Interrupt Active Bit Register
    volatile uint32_t IABR1; // [read-only] Interrupt Active Bit Register
    reserved_t<0x3e> _0x300;
    volatile uint32_t IPR0;  // [read-write] Interrupt Priority Register
    volatile uint32_t IPR1;  // [read-write] Interrupt Priority Register
    volatile uint32_t IPR2;  // [read-write] Interrupt Priority Register
    volatile uint32_t IPR3;  // [read-write] Interrupt Priority Register
    volatile uint32_t IPR4;  // [read-write] Interrupt Priority Register
    volatile uint32_t IPR5;  // [read-write] Interrupt Priority Register
    volatile uint32_t IPR6;  // [read-write] Interrupt Priority Register
    volatile uint32_t IPR7;  // [read-write] Interrupt Priority Register
    volatile uint32_t IPR8;  // [read-write] Interrupt Priority Register
    volatile uint32_t IPR9;  // [read-write] Interrupt Priority Register
    volatile uint32_t IPR10; // [read-write] Interrupt Priority Register
    volatile uint32_t IPR11; // [read-write] Interrupt Priority Register
    volatile uint32_t IPR12; // [read-write] Interrupt Priority Register
    volatile uint32_t IPR13; // [read-write] Interrupt Priority Register
    volatile uint32_t IPR14; // [read-write] Interrupt Priority Register
    volatile uint32_t IPR15; // [read-write] Interrupt Priority Register
    volatile uint32_t IPR16; // [read-write] Interrupt Priority Register
    volatile uint32_t IPR17; // [read-write] Interrupt Priority Register
    volatile uint32_t IPR18; // [read-write] Interrupt Priority Register
    volatile uint32_t IPR19; // [read-write] Interrupt Priority Register
    volatile uint32_t IPR20; // [read-write] Interrupt Priority Register

    static constexpr uint32_t ISER0_RESET_VALUE = 0x0;

    static constexpr uint32_t ISER1_RESET_VALUE = 0x0;

    static constexpr uint32_t ICER0_RESET_VALUE = 0x0;

    static constexpr uint32_t ICER1_RESET_VALUE = 0x0;

    static constexpr uint32_t ISPR0_RESET_VALUE = 0x0;

    static constexpr uint32_t ISPR1_RESET_VALUE = 0x0;

    static constexpr uint32_t ICPR0_RESET_VALUE = 0x0;

    static constexpr uint32_t ICPR1_RESET_VALUE = 0x0;

    static constexpr uint32_t IABR0_RESET_VALUE = 0x0;

    static constexpr uint32_t IABR1_RESET_VALUE = 0x0;

    static constexpr uint32_t IPR0_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPR0_IPR_N0 =   // IPR_N0
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR0_IPR_N1 =   // IPR_N1
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR0_IPR_N2 =   // IPR_N2
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR0_IPR_N3 =   // IPR_N3
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t IPR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPR1_IPR_N0 =   // IPR_N0
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR1_IPR_N1 =   // IPR_N1
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR1_IPR_N2 =   // IPR_N2
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR1_IPR_N3 =   // IPR_N3
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t IPR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPR2_IPR_N0 =   // IPR_N0
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR2_IPR_N1 =   // IPR_N1
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR2_IPR_N2 =   // IPR_N2
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR2_IPR_N3 =   // IPR_N3
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t IPR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPR3_IPR_N0 =   // IPR_N0
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR3_IPR_N1 =   // IPR_N1
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR3_IPR_N2 =   // IPR_N2
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR3_IPR_N3 =   // IPR_N3
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t IPR4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPR4_IPR_N0 =   // IPR_N0
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR4_IPR_N1 =   // IPR_N1
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR4_IPR_N2 =   // IPR_N2
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR4_IPR_N3 =   // IPR_N3
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t IPR5_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPR5_IPR_N0 =   // IPR_N0
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR5_IPR_N1 =   // IPR_N1
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR5_IPR_N2 =   // IPR_N2
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR5_IPR_N3 =   // IPR_N3
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t IPR6_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPR6_IPR_N0 =   // IPR_N0
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR6_IPR_N1 =   // IPR_N1
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR6_IPR_N2 =   // IPR_N2
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR6_IPR_N3 =   // IPR_N3
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t IPR7_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPR7_IPR_N0 =   // IPR_N0
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR7_IPR_N1 =   // IPR_N1
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR7_IPR_N2 =   // IPR_N2
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR7_IPR_N3 =   // IPR_N3
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t IPR8_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPR8_IPR_N0 =   // IPR_N0
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR8_IPR_N1 =   // IPR_N1
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR8_IPR_N2 =   // IPR_N2
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR8_IPR_N3 =   // IPR_N3
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t IPR9_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPR9_IPR_N0 =   // IPR_N0
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR9_IPR_N1 =   // IPR_N1
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR9_IPR_N2 =   // IPR_N2
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR9_IPR_N3 =   // IPR_N3
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t IPR10_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPR10_IPR_N0 =   // IPR_N0
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR10_IPR_N1 =   // IPR_N1
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR10_IPR_N2 =   // IPR_N2
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR10_IPR_N3 =   // IPR_N3
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t IPR11_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPR11_IPR_N0 =   // IPR_N0
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR11_IPR_N1 =   // IPR_N1
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR11_IPR_N2 =   // IPR_N2
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR11_IPR_N3 =   // IPR_N3
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t IPR12_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPR12_IPR_N0 =   // IPR_N0
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR12_IPR_N1 =   // IPR_N1
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR12_IPR_N2 =   // IPR_N2
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR12_IPR_N3 =   // IPR_N3
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t IPR13_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPR13_IPR_N0 =   // IPR_N0
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR13_IPR_N1 =   // IPR_N1
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR13_IPR_N2 =   // IPR_N2
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR13_IPR_N3 =   // IPR_N3
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t IPR14_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPR14_IPR_N0 =   // IPR_N0
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR14_IPR_N1 =   // IPR_N1
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR14_IPR_N2 =   // IPR_N2
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR14_IPR_N3 =   // IPR_N3
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t IPR15_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPR15_IPR_N0 =   // IPR_N0
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR15_IPR_N1 =   // IPR_N1
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR15_IPR_N2 =   // IPR_N2
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR15_IPR_N3 =   // IPR_N3
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t IPR16_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPR16_IPR_N0 =   // IPR_N0
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR16_IPR_N1 =   // IPR_N1
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR16_IPR_N2 =   // IPR_N2
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR16_IPR_N3 =   // IPR_N3
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t IPR17_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPR17_IPR_N0 =   // IPR_N0
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR17_IPR_N1 =   // IPR_N1
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR17_IPR_N2 =   // IPR_N2
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR17_IPR_N3 =   // IPR_N3
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t IPR18_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPR18_IPR_N0 =   // IPR_N0
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR18_IPR_N1 =   // IPR_N1
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR18_IPR_N2 =   // IPR_N2
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR18_IPR_N3 =   // IPR_N3
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t IPR19_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPR19_IPR_N0 =   // IPR_N0
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR19_IPR_N1 =   // IPR_N1
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR19_IPR_N2 =   // IPR_N2
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR19_IPR_N3 =   // IPR_N3
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t IPR20_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPR20_IPR_N0 =   // IPR_N0
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR20_IPR_N1 =   // IPR_N1
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR20_IPR_N2 =   // IPR_N2
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR20_IPR_N3 =   // IPR_N3
        bit_field_t<24, 0xff>::value<X>();
};


////
//
//      Nested vectored interrupt controller
//
////

struct stm32f301_nvic_stir_t
{
    volatile uint32_t STIR; // [read-write] Software trigger interrupt register

    static constexpr uint32_t STIR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t STIR_INTID =   // Software generated interrupt ID
        bit_field_t<0, 0x1ff>::value<X>();
};


template<>
struct peripheral_t<STM32F301, NVIC>
{
    typedef stm32f301_nvic_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F302, NVIC>
{
    typedef stm32f301_nvic_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F373, NVIC>
{
    typedef stm32f301_nvic_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F3x4, NVIC>
{
    typedef stm32f301_nvic_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F3x8, NVIC>
{
    typedef stm32f301_nvic_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F301, NVIC_STIR>
{
    typedef stm32f301_nvic_stir_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F302, NVIC_STIR>
{
    typedef stm32f301_nvic_stir_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F303, NVIC_STIR>
{
    typedef stm32f301_nvic_stir_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F373, NVIC_STIR>
{
    typedef stm32f301_nvic_stir_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F3x4, NVIC_STIR>
{
    typedef stm32f301_nvic_stir_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F3x8, NVIC_STIR>
{
    typedef stm32f301_nvic_stir_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F303, NVIC>
{
    typedef stm32f303_nvic_t T;
    static T& V;
};

using nvic_t = peripheral_t<mcu_svd, NVIC>;
using nvic_stir_t = peripheral_t<mcu_svd, NVIC_STIR>;
