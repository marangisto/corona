#pragma once

////
//
//      STM32H7 PF peripherals
//
///

// PF: Processor features

struct stm32h742x_pf_t
{
    volatile uint32_t CLIDR; // Cache Level ID register
    volatile uint32_t CTR; // Cache Type register
    volatile uint32_t CCSIDR; // Cache Size ID register

    static constexpr uint32_t CLIDR_RESET_VALUE = 0x9000003; // Reset value
    typedef bit_field_t<0, 0x7> CLIDR_CL1; // CL1
    typedef bit_field_t<3, 0x7> CLIDR_CL2; // CL2
    typedef bit_field_t<6, 0x7> CLIDR_CL3; // CL3
    typedef bit_field_t<9, 0x7> CLIDR_CL4; // CL4
    typedef bit_field_t<12, 0x7> CLIDR_CL5; // CL5
    typedef bit_field_t<15, 0x7> CLIDR_CL6; // CL6
    typedef bit_field_t<18, 0x7> CLIDR_CL7; // CL7
    typedef bit_field_t<21, 0x7> CLIDR_LOUIS; // LoUIS
    typedef bit_field_t<24, 0x7> CLIDR_LOC; // LoC
    typedef bit_field_t<27, 0x7> CLIDR_LOU; // LoU

    static constexpr uint32_t CTR_RESET_VALUE = 0x8303c003; // Reset value
    typedef bit_field_t<0, 0xf> CTR__IMINLINE; // IminLine
    typedef bit_field_t<16, 0xf> CTR_DMINLINE; // DMinLine
    typedef bit_field_t<20, 0xf> CTR_ERG; // ERG
    typedef bit_field_t<24, 0xf> CTR_CWG; // CWG
    typedef bit_field_t<29, 0x7> CTR_FORMAT; // Format

    static constexpr uint32_t CCSIDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> CCSIDR_LINESIZE; // LineSize
    typedef bit_field_t<3, 0x3ff> CCSIDR_ASSOCIATIVITY; // Associativity
    typedef bit_field_t<13, 0x7fff> CCSIDR_NUMSETS; // NumSets
    static constexpr uint32_t CCSIDR_WA = 0x10000000; // WA
    static constexpr uint32_t CCSIDR_RA = 0x20000000; // RA
    static constexpr uint32_t CCSIDR_WB = 0x40000000; // WB
    static constexpr uint32_t CCSIDR_WT = 0x80000000; // WT
};

template<>
struct peripheral_t<STM32H742x, PF>
{
    using T = stm32h742x_pf_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, PF>
{
    using T = stm32h742x_pf_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, PF>
{
    using T = stm32h742x_pf_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, PF>
{
    using T = stm32h742x_pf_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, PF>
{
    using T = stm32h742x_pf_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, PF>
{
    using T = stm32h742x_pf_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, PF>
{
    using T = stm32h742x_pf_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, PF>
{
    using T = stm32h742x_pf_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, PF>
{
    using T = stm32h742x_pf_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, PF>
{
    using T = stm32h742x_pf_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, PF>
{
    using T = stm32h742x_pf_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, PF>
{
    using T = stm32h742x_pf_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, PF>
{
    using T = stm32h742x_pf_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, PF>
{
    using T = stm32h742x_pf_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, PF>
{
    using T = stm32h742x_pf_t;
    static T& V;
};

using pf_t = peripheral_t<svd, PF>;

template<int INST> struct pf_traits {};
