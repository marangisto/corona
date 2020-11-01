#pragma once

////
//
//      STM32L0 FIREWALL peripherals
//
///

// FIREWALL: Firewall

struct stm32l052_firewall_t
{
    volatile uint32_t FIREWALL_CSSA; // Code segment start address
    volatile uint32_t FIREWALL_CSL; // Code segment length
    volatile uint32_t FIREWALL_NVDSSA; // Non-volatile data segment start address
    volatile uint32_t FIREWALL_NVDSL; // Non-volatile data segment length
    volatile uint32_t FIREWALL_VDSSA; // Volatile data segment start address
    volatile uint32_t FIREWALL_VDSL; // Volatile data segment length
    reserved_t<0x2> _0x18;
    volatile uint32_t FIREWALL_CR; // Configuration register

    static constexpr uint32_t FIREWALL_CSSA_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffff> FIREWALL_CSSA_ADD; // code segment start address

    static constexpr uint32_t FIREWALL_CSL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0x3fff> FIREWALL_CSL_LENG; // code segment length

    static constexpr uint32_t FIREWALL_NVDSSA_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xffff> FIREWALL_NVDSSA_ADD; // Non-volatile data segment start address

    static constexpr uint32_t FIREWALL_NVDSL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0x3fff> FIREWALL_NVDSL_LENG; // Non-volatile data segment length

    static constexpr uint32_t FIREWALL_VDSSA_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<6, 0x3ff> FIREWALL_VDSSA_ADD; // Volatile data segment start address

    static constexpr uint32_t FIREWALL_VDSL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<6, 0x3ff> FIREWALL_VDSL_LENG; // Non-volatile data segment length


    static constexpr uint32_t FIREWALL_CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FIREWALL_CR_VDE = 0x4; // Volatile data execution
    static constexpr uint32_t FIREWALL_CR_VDS = 0x2; // Volatile data shared
    static constexpr uint32_t FIREWALL_CR_FPA = 0x1; // Firewall pre alarm
};

template<>
struct peripheral_t<STM32L052, FIREWALL>
{
    static constexpr periph_t P = FIREWALL;
    using T = stm32l052_firewall_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L053, FIREWALL>
{
    static constexpr periph_t P = FIREWALL;
    using T = stm32l052_firewall_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L062, FIREWALL>
{
    static constexpr periph_t P = FIREWALL;
    using T = stm32l052_firewall_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L063, FIREWALL>
{
    static constexpr periph_t P = FIREWALL;
    using T = stm32l052_firewall_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x0, FIREWALL>
{
    static constexpr periph_t P = FIREWALL;
    using T = stm32l052_firewall_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x1, FIREWALL>
{
    static constexpr periph_t P = FIREWALL;
    using T = stm32l052_firewall_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x2, FIREWALL>
{
    static constexpr periph_t P = FIREWALL;
    using T = stm32l052_firewall_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x3, FIREWALL>
{
    static constexpr periph_t P = FIREWALL;
    using T = stm32l052_firewall_t;
    static T& V;
};

using firewall_t = peripheral_t<svd, FIREWALL>;
