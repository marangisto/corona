#pragma once

////
//
//      STM32L0 Firewall peripherals
//
////

////
//
//      Firewall
//
////

struct stm32l0x0_firewall_t
{
    volatile uint32_t FIREWALL_CSSA;   // [read-write] Code segment start address
    volatile uint32_t FIREWALL_CSL;    // [read-write] Code segment length
    volatile uint32_t FIREWALL_NVDSSA; // [read-write] Non-volatile data segment start address
    volatile uint32_t FIREWALL_NVDSL;  // [read-write] Non-volatile data segment length
    volatile uint32_t FIREWALL_VDSSA;  // [read-write] Volatile data segment start address
    volatile uint32_t FIREWALL_VDSL;   // [read-write] Volatile data segment length
    reserved_t<0x2> _0x20;
    volatile uint32_t FIREWALL_CR;     // [read-write] Configuration register

    static constexpr uint32_t FIREWALL_CSSA_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FIREWALL_CSSA_ADD =   // code segment start address
        bit_field_t<8, 0xffff>::value<X>();

    static constexpr uint32_t FIREWALL_CSL_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FIREWALL_CSL_LENG =   // code segment length
        bit_field_t<8, 0x3fff>::value<X>();

    static constexpr uint32_t FIREWALL_NVDSSA_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FIREWALL_NVDSSA_ADD =   // Non-volatile data segment start address
        bit_field_t<8, 0xffff>::value<X>();

    static constexpr uint32_t FIREWALL_NVDSL_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FIREWALL_NVDSL_LENG =   // Non-volatile data segment length
        bit_field_t<8, 0x3fff>::value<X>();

    static constexpr uint32_t FIREWALL_VDSSA_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FIREWALL_VDSSA_ADD =   // Volatile data segment start address
        bit_field_t<6, 0x3ff>::value<X>();

    static constexpr uint32_t FIREWALL_VDSL_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FIREWALL_VDSL_LENG =   // Non-volatile data segment length
        bit_field_t<6, 0x3ff>::value<X>();

    static constexpr uint32_t FIREWALL_CR_RESET_VALUE = 0x0;
    static constexpr uint32_t FIREWALL_CR_VDE = 0x4; // Volatile data execution
    static constexpr uint32_t FIREWALL_CR_VDS = 0x2; // Volatile data shared
    static constexpr uint32_t FIREWALL_CR_FPA = 0x1; // Firewall pre alarm
};


template<>
struct peripheral_t<STM32L0x0, Firewall>
{
    typedef stm32l0x0_firewall_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x1, Firewall>
{
    typedef stm32l0x0_firewall_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x2, Firewall>
{
    typedef stm32l0x0_firewall_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x3, Firewall>
{
    typedef stm32l0x0_firewall_t T;
    static T& V;
};

using firewall_t = peripheral_t<mcu_svd, Firewall>;

