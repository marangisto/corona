#pragma once

////
//
//      STM32F0 NVIC peripherals
//
///

// NVIC: Nested Vectored Interrupt Controller

struct stm32f0x0_nvic_t
{
    volatile uint32_t ISER; // Interrupt Set Enable Register
    reserved_t<0x1f> _0x4;
    volatile uint32_t ICER; // Interrupt Clear Enable Register
    reserved_t<0x1f> _0x84;
    volatile uint32_t ISPR; // Interrupt Set-Pending Register
    reserved_t<0x1f> _0x104;
    volatile uint32_t ICPR; // Interrupt Clear-Pending Register
    reserved_t<0x5f> _0x184;
    volatile uint32_t IPR0; // Interrupt Priority Register 0
    volatile uint32_t IPR1; // Interrupt Priority Register 1
    volatile uint32_t IPR2; // Interrupt Priority Register 2
    volatile uint32_t IPR3; // Interrupt Priority Register 3
    volatile uint32_t IPR4; // Interrupt Priority Register 4
    volatile uint32_t IPR5; // Interrupt Priority Register 5
    volatile uint32_t IPR6; // Interrupt Priority Register 6
    volatile uint32_t IPR7; // Interrupt Priority Register 7

    static constexpr uint32_t ISER_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ISER_SETENA; // SETENA


    static constexpr uint32_t ICER_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ICER_CLRENA; // CLRENA


    static constexpr uint32_t ISPR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ISPR_SETPEND; // SETPEND


    static constexpr uint32_t ICPR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ICPR_CLRPEND; // CLRPEND


    static constexpr uint32_t IPR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<6, 0x3> IPR0_PRI_00; // PRI_00
    typedef bit_field_t<14, 0x3> IPR0_PRI_01; // PRI_01
    typedef bit_field_t<22, 0x3> IPR0_PRI_02; // PRI_02
    typedef bit_field_t<30, 0x3> IPR0_PRI_03; // PRI_03

    static constexpr uint32_t IPR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<6, 0x3> IPR1_PRI_40; // PRI_40
    typedef bit_field_t<14, 0x3> IPR1_PRI_41; // PRI_41
    typedef bit_field_t<22, 0x3> IPR1_PRI_42; // PRI_42
    typedef bit_field_t<30, 0x3> IPR1_PRI_43; // PRI_43

    static constexpr uint32_t IPR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<6, 0x3> IPR2_PRI_80; // PRI_80
    typedef bit_field_t<14, 0x3> IPR2_PRI_81; // PRI_81
    typedef bit_field_t<22, 0x3> IPR2_PRI_82; // PRI_82
    typedef bit_field_t<30, 0x3> IPR2_PRI_83; // PRI_83

    static constexpr uint32_t IPR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<6, 0x3> IPR3_PRI_120; // PRI_120
    typedef bit_field_t<14, 0x3> IPR3_PRI_121; // PRI_121
    typedef bit_field_t<22, 0x3> IPR3_PRI_122; // PRI_122
    typedef bit_field_t<30, 0x3> IPR3_PRI_123; // PRI_123

    static constexpr uint32_t IPR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<6, 0x3> IPR4_PRI_160; // PRI_160
    typedef bit_field_t<14, 0x3> IPR4_PRI_161; // PRI_161
    typedef bit_field_t<22, 0x3> IPR4_PRI_162; // PRI_162
    typedef bit_field_t<30, 0x3> IPR4_PRI_163; // PRI_163

    static constexpr uint32_t IPR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<6, 0x3> IPR5_PRI_200; // PRI_200
    typedef bit_field_t<14, 0x3> IPR5_PRI_201; // PRI_201
    typedef bit_field_t<22, 0x3> IPR5_PRI_202; // PRI_202
    typedef bit_field_t<30, 0x3> IPR5_PRI_203; // PRI_203

    static constexpr uint32_t IPR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<6, 0x3> IPR6_PRI_240; // PRI_240
    typedef bit_field_t<14, 0x3> IPR6_PRI_241; // PRI_241
    typedef bit_field_t<22, 0x3> IPR6_PRI_242; // PRI_242
    typedef bit_field_t<30, 0x3> IPR6_PRI_243; // PRI_243

    static constexpr uint32_t IPR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<6, 0x3> IPR7_PRI_280; // PRI_280
    typedef bit_field_t<14, 0x3> IPR7_PRI_281; // PRI_281
    typedef bit_field_t<22, 0x3> IPR7_PRI_282; // PRI_282
    typedef bit_field_t<30, 0x3> IPR7_PRI_283; // PRI_283
};

template<>
struct peripheral_t<STM32F0x0, NVIC>
{
    using T = stm32f0x0_nvic_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x1, NVIC>
{
    using T = stm32f0x0_nvic_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x2, NVIC>
{
    using T = stm32f0x0_nvic_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x8, NVIC>
{
    using T = stm32f0x0_nvic_t;
    static T& V;
};

using nvic_t = peripheral_t<svd, NVIC>;

template<int INST> struct nvic_traits {};
