#pragma once

////
//
//      STM32L4+ Firewall peripherals
//
////

////
//
//      Firewall
//
////

struct stm32l4p5_firewall_t
{
    volatile uint32_t CSSA;   // [read-write] Code segment start address
    volatile uint32_t CSL;    // [read-write] Code segment length
    volatile uint32_t NVDSSA; // [read-write] Non-volatile data segment start address
    volatile uint32_t NVDSL;  // [read-write] Non-volatile data segment length
    volatile uint32_t VDSSA;  // [read-write] Volatile data segment start address
    volatile uint32_t VDSL;   // [read-write] Volatile data segment length
    reserved_t<0x2> _0x20;
    volatile uint32_t CR;     // [read-write] Configuration register

    static constexpr uint32_t CSSA_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CSSA_ADD =   // code segment start address
        bit_field_t<8, 0xffff>::value<X>();

    static constexpr uint32_t CSL_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CSL_LENG =   // code segment length
        bit_field_t<8, 0x3fff>::value<X>();

    static constexpr uint32_t NVDSSA_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t NVDSSA_ADD =   // Non-volatile data segment start address
        bit_field_t<8, 0xffff>::value<X>();

    static constexpr uint32_t NVDSL_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t NVDSL_LENG =   // Non-volatile data segment length
        bit_field_t<8, 0x3fff>::value<X>();

    static constexpr uint32_t VDSSA_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t VDSSA_ADD =   // Volatile data segment start address
        bit_field_t<6, 0x3ff>::value<X>();

    static constexpr uint32_t VDSL_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t VDSL_LENG =   // Non-volatile data segment length
        bit_field_t<6, 0x3ff>::value<X>();

    static constexpr uint32_t CR_RESET_VALUE = 0x0;
    static constexpr uint32_t CR_VDE = 0x4; // Volatile data execution
    static constexpr uint32_t CR_VDS = 0x2; // Volatile data shared
    static constexpr uint32_t CR_FPA = 0x1; // Firewall pre alarm
};


template<>
struct peripheral_t<STM32L4P5, FIREWALL>
{
    typedef stm32l4p5_firewall_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4Q5, FIREWALL>
{
    typedef stm32l4p5_firewall_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R5, FIREWALL>
{
    typedef stm32l4p5_firewall_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R7, FIREWALL>
{
    typedef stm32l4p5_firewall_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R9, FIREWALL>
{
    typedef stm32l4p5_firewall_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S5, FIREWALL>
{
    typedef stm32l4p5_firewall_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S7, FIREWALL>
{
    typedef stm32l4p5_firewall_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S9, FIREWALL>
{
    typedef stm32l4p5_firewall_t T;
    static T& V;
};

using firewall_t = peripheral_t<mcu_svd, FIREWALL>;

