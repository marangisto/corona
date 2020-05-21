#pragma once

////
//
//      STM32WB PKA peripherals
//
////

////
//
//      PKA
//
////

struct stm32wb30_cm4_pka_t
{
    volatile uint32_t CR;    // [read-write] Control register
    volatile uint32_t SR;    // [read-only] PKA status register
    volatile uint32_t CLRFR; // [read-write] PKA clear flag register
    reserved_t<0x7fa> _0x1ff4;
    volatile uint32_t VERR;  // [read-only] PKA version register
    volatile uint32_t IPIDR; // [read-only] PKA identification register
    volatile uint32_t SIDR;  // [read-only] PKA size ID register

    static constexpr uint32_t CR_RESET_VALUE = 0x0;
    static constexpr uint32_t CR_ADDRERRIE = 0x100000; // Address error interrupt enable
    static constexpr uint32_t CR_RAMERRIE = 0x80000;   // RAM error interrupt enable
    static constexpr uint32_t CR_PROCENDIE = 0x20000;  // End of operation interrupt enable
    template<uint32_t X>
    static constexpr uint32_t CR_MODE =                // PKA Operation Mode
        bit_field_t<8, 0x3f>::value<X>();
    static constexpr uint32_t CR_SECLVL = 0x4;         // Security Enable
    static constexpr uint32_t CR_START = 0x2;          // Start the operation
    static constexpr uint32_t CR_EN = 0x1;             // Peripheral Enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0;
    static constexpr uint32_t SR_ADDRERRF = 0x100000; // Address error flag
    static constexpr uint32_t SR_RAMERRF = 0x80000;   // RAM error flag
    static constexpr uint32_t SR_PROCENDF = 0x20000;  // PKA End of Operation flag
    static constexpr uint32_t SR_BUSY = 0x10000;      // PKA Operation in progress

    static constexpr uint32_t CLRFR_RESET_VALUE = 0x0;
    static constexpr uint32_t CLRFR_ADDRERRFC = 0x100000; // Clear Address error flag
    static constexpr uint32_t CLRFR_RAMERRFC = 0x80000;   // Clear RAM error flag
    static constexpr uint32_t CLRFR_PROCENDFC = 0x20000;  // Clear PKA End of Operation flag

    static constexpr uint32_t VERR_RESET_VALUE = 0x10;
    template<uint32_t X>
    static constexpr uint32_t VERR_MINREV =   // Minor revision
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t VERR_MAJREV =   // Major revision
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t IPIDR_RESET_VALUE = 0x170061;

    static constexpr uint32_t SIDR_RESET_VALUE = 0xa3c5dd08;
};


template<>
struct peripheral_t<STM32WB30_CM4, PKA>
{
    typedef stm32wb30_cm4_pka_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32WB35_CM4, PKA>
{
    typedef stm32wb30_cm4_pka_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32WB50_CM4, PKA>
{
    typedef stm32wb30_cm4_pka_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32WB55_CM4, PKA>
{
    typedef stm32wb30_cm4_pka_t T;
    static T& V;
};

using pka_t = peripheral_t<mcu_svd, PKA>;

