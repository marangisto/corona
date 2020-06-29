#pragma once

////
//
//      STM32L4+ FIREWALL peripherals
//
///

// FIREWALL: Firewall

struct stm32l4p5_firewall_t
{
    volatile uint32_t CSSA; // Code segment start address
    volatile uint32_t CSL; // Code segment length
    volatile uint32_t NVDSSA; // Non-volatile data segment start address
    volatile uint32_t NVDSL; // Non-volatile data segment length
    volatile uint32_t VDSSA; // Volatile data segment start address
    volatile uint32_t VDSL; // Volatile data segment length
    reserved_t<0x2> _0x18;
    volatile uint32_t CR; // Configuration register

    static constexpr uint32_t CSSA_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffff> CSSA_ADD; // code segment start address

    static constexpr uint32_t CSL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0x3fff> CSL_LENG; // code segment length

    static constexpr uint32_t NVDSSA_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffff> NVDSSA_ADD; // Non-volatile data segment start address

    static constexpr uint32_t NVDSL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0x3fff> NVDSL_LENG; // Non-volatile data segment length

    static constexpr uint32_t VDSSA_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<6, 0x3ff> VDSSA_ADD; // Volatile data segment start address

    static constexpr uint32_t VDSL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<6, 0x3ff> VDSL_LENG; // Non-volatile data segment length


    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_VDE = 0x4; // Volatile data execution
    static constexpr uint32_t CR_VDS = 0x2; // Volatile data shared
    static constexpr uint32_t CR_FPA = 0x1; // Firewall pre alarm
};

template<>
struct peripheral_t<STM32L4P5, FIREWALL>
{
    using T = stm32l4p5_firewall_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4Q5, FIREWALL>
{
    using T = stm32l4p5_firewall_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R5, FIREWALL>
{
    using T = stm32l4p5_firewall_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R7, FIREWALL>
{
    using T = stm32l4p5_firewall_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R9, FIREWALL>
{
    using T = stm32l4p5_firewall_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S5, FIREWALL>
{
    using T = stm32l4p5_firewall_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S7, FIREWALL>
{
    using T = stm32l4p5_firewall_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S9, FIREWALL>
{
    using T = stm32l4p5_firewall_t;
    static T& V;
};

using firewall_t = peripheral_t<svd, FIREWALL>;

template<int INST> struct firewall_traits {};
