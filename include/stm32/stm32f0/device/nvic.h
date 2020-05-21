#pragma once

////
//
//      STM32F0 NVIC peripherals
//
////

////
//
//      Nested Vectored Interrupt Controller
//
////

struct stm32f0x0_nvic_t
{
    volatile uint32_t ISER0; // [read-write] Interrupt Set Enable Register
    reserved_t<0x1f> _0x80;
    volatile uint32_t ICER;  // [read-write] Interrupt Clear Enable Register
    reserved_t<0x1f> _0x100;
    volatile uint32_t ISPR;  // [read-write] Interrupt Set-Pending Register
    reserved_t<0x1f> _0x180;
    volatile uint32_t ICPR;  // [read-write] Interrupt Clear-Pending Register
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

    static constexpr uint32_t ICER_RESET_VALUE = 0x0;

    static constexpr uint32_t ISPR_RESET_VALUE = 0x0;

    static constexpr uint32_t ICPR_RESET_VALUE = 0x0;

    static constexpr uint32_t IPR0_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPR0_PRI_00 =   // PRI_00
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR0_PRI_01 =   // PRI_01
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR0_PRI_02 =   // PRI_02
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR0_PRI_03 =   // PRI_03
        bit_field_t<30, 0x3>::value<X>();

    static constexpr uint32_t IPR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPR1_PRI_40 =   // PRI_40
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR1_PRI_41 =   // PRI_41
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR1_PRI_42 =   // PRI_42
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR1_PRI_43 =   // PRI_43
        bit_field_t<30, 0x3>::value<X>();

    static constexpr uint32_t IPR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPR2_PRI_80 =   // PRI_80
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR2_PRI_81 =   // PRI_81
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR2_PRI_82 =   // PRI_82
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR2_PRI_83 =   // PRI_83
        bit_field_t<30, 0x3>::value<X>();

    static constexpr uint32_t IPR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPR3_PRI_120 =   // PRI_120
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR3_PRI_121 =   // PRI_121
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR3_PRI_122 =   // PRI_122
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR3_PRI_123 =   // PRI_123
        bit_field_t<30, 0x3>::value<X>();

    static constexpr uint32_t IPR4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPR4_PRI_160 =   // PRI_160
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR4_PRI_161 =   // PRI_161
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR4_PRI_162 =   // PRI_162
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR4_PRI_163 =   // PRI_163
        bit_field_t<30, 0x3>::value<X>();

    static constexpr uint32_t IPR5_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPR5_PRI_200 =   // PRI_200
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR5_PRI_201 =   // PRI_201
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR5_PRI_202 =   // PRI_202
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR5_PRI_203 =   // PRI_203
        bit_field_t<30, 0x3>::value<X>();

    static constexpr uint32_t IPR6_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPR6_PRI_240 =   // PRI_240
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR6_PRI_241 =   // PRI_241
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR6_PRI_242 =   // PRI_242
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR6_PRI_243 =   // PRI_243
        bit_field_t<30, 0x3>::value<X>();

    static constexpr uint32_t IPR7_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IPR7_PRI_280 =   // PRI_280
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR7_PRI_281 =   // PRI_281
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR7_PRI_282 =   // PRI_282
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IPR7_PRI_283 =   // PRI_283
        bit_field_t<30, 0x3>::value<X>();
};


template<>
struct peripheral_t<STM32F0x0, NVIC>
{
    typedef stm32f0x0_nvic_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x1, NVIC>
{
    typedef stm32f0x0_nvic_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x2, NVIC>
{
    typedef stm32f0x0_nvic_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x8, NVIC>
{
    typedef stm32f0x0_nvic_t T;
    static T& V;
};

using nvic_t = peripheral_t<mcu_svd, NVIC>;

