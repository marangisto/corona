#pragma once

////
//
//      STM32G0 NVIC peripherals
//
////

////
//
//      Nested Vectored Interrupt Controller
//
////

struct stm32g030_nvic_t
{
    volatile uint32_t ISER0; // [read-write] Interrupt Set Enable Register
    reserved_t<0x1f> _0x80;
    volatile uint32_t ICER0; // [read-write] Interrupt Clear Enable Register
    reserved_t<0x1f> _0x100;
    volatile uint32_t ISPR0; // [read-write] Interrupt Set-Pending Register
    reserved_t<0x1f> _0x180;
    volatile uint32_t ICPR0; // [read-write] Interrupt Clear-Pending Register
    reserved_t<0x5f> _0x300;
    volatile uint32_t IPR0;  // [read-write] Interrupt Priority Register 0
    volatile uint32_t IPR1;  // [read-write] Interrupt Priority Register 1
    volatile uint32_t IPR2;  // [read-write] Interrupt Priority Register 2
    volatile uint32_t IPR3;  // [read-write] Interrupt Priority Register 3
    volatile uint32_t IPR4;  // [read-write] Interrupt Priority Register 4
    volatile uint32_t IPR5;  // [read-write] Interrupt Priority Register 5
    volatile uint32_t IPR6;  // [read-write] Interrupt Priority Register 6
    volatile uint32_t IPR7;  // [read-write] Interrupt Priority Register 7

    static constexpr uint32_t ISER0_RESET_VALUE = 0x0;

    static constexpr uint32_t ICER0_RESET_VALUE = 0x0;

    static constexpr uint32_t ISPR0_RESET_VALUE = 0x0;

    static constexpr uint32_t ICPR0_RESET_VALUE = 0x0;

    static constexpr uint32_t IPR0_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPR0_PRI_0 =   // priority for interrupt 0
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR0_PRI_1 =   // priority for interrupt 1
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR0_PRI_2 =   // priority for interrupt 2
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR0_PRI_3 =   // priority for interrupt 3
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t IPR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPR1_PRI_4 =   // priority for interrupt n
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR1_PRI_5 =   // priority for interrupt n
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR1_PRI_6 =   // priority for interrupt n
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR1_PRI_7 =   // priority for interrupt n
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t IPR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPR2_PRI_8 =    // priority for interrupt n
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR2_PRI_9 =    // priority for interrupt n
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR2_PRI_10 =   // priority for interrupt n
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR2_PRI_11 =   // priority for interrupt n
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t IPR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPR3_PRI_12 =   // priority for interrupt n
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR3_PRI_13 =   // priority for interrupt n
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR3_PRI_14 =   // priority for interrupt n
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR3_PRI_15 =   // priority for interrupt n
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t IPR4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPR4_PRI_16 =   // priority for interrupt n
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR4_PRI_17 =   // priority for interrupt n
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR4_PRI_18 =   // priority for interrupt n
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR4_PRI_19 =   // priority for interrupt n
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t IPR5_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPR5_PRI_20 =   // priority for interrupt n
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR5_PRI_21 =   // priority for interrupt n
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR5_PRI_22 =   // priority for interrupt n
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR5_PRI_23 =   // priority for interrupt n
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t IPR6_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPR6_PRI_24 =   // priority for interrupt n
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR6_PRI_25 =   // priority for interrupt n
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR6_PRI_26 =   // priority for interrupt n
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR6_PRI_27 =   // priority for interrupt n
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t IPR7_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPR7_PRI_28 =   // priority for interrupt n
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR7_PRI_29 =   // priority for interrupt n
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR7_PRI_30 =   // priority for interrupt n
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR7_PRI_31 =   // priority for interrupt n
        bit_field_t<24, 0xff>::value<X>();
};


////
//
//      Nested vectored interrupt controller
//
////

struct stm32g030_nvic_stir_t
{
    volatile uint32_t STIR; // [read-write] Software trigger interrupt register

    static constexpr uint32_t STIR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t STIR_INTID =   // Software generated interrupt ID
        bit_field_t<0, 0x1ff>::value<X>();
};


template<>
struct peripheral_t<STM32G030, NVIC>
{
    typedef stm32g030_nvic_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G031, NVIC>
{
    typedef stm32g030_nvic_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G041, NVIC>
{
    typedef stm32g030_nvic_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G070, NVIC>
{
    typedef stm32g030_nvic_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G071, NVIC>
{
    typedef stm32g030_nvic_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G081, NVIC>
{
    typedef stm32g030_nvic_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G030, NVIC_STIR>
{
    typedef stm32g030_nvic_stir_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G031, NVIC_STIR>
{
    typedef stm32g030_nvic_stir_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G041, NVIC_STIR>
{
    typedef stm32g030_nvic_stir_t T;
    static T& V;
};

using nvic_t = peripheral_t<mcu_svd, NVIC>;
using nvic_stir_t = peripheral_t<mcu_svd, NVIC_STIR>;

