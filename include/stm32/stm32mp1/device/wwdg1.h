#pragma once

////
//
//      STM32MP1 WWDG1 peripherals
//
////

////
//
//      WWDG1
//
////

struct stm32mp15xxx_wwdg1_t
{
    volatile uint32_t WWDG_CR;     // [read-write] Control register
    volatile uint32_t WWDG_CFR;    // [read-write] Configuration register
    volatile uint32_t WWDG_SR;     // [read-write] Status register
    reserved_t<0xf9> _0x3f0;
    volatile uint32_t WWDG_HWCFGR; // [read-only] WWDG hardware configuration register
    volatile uint32_t WWDG_VERR;   // [read-only] WWDG version register
    volatile uint32_t WWDG_IPIDR;  // [read-only] WWDG ID register
    volatile uint32_t WWDG_SIDR;   // [read-only] WWDG size ID register

    static constexpr uint32_t WWDG_CR_RESET_VALUE = 0x7f;
    template<uint32_t X>
    static constexpr uint32_t WWDG_CR_T =          // T
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t WWDG_CR_WDGA = 0x80; // WDGA

    static constexpr uint32_t WWDG_CFR_RESET_VALUE = 0x7f;
    template<uint32_t X>
    static constexpr uint32_t WWDG_CFR_W =          // W
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t WWDG_CFR_EWI = 0x200; // EWI
    template<uint32_t X>
    static constexpr uint32_t WWDG_CFR_WDGTB =      // WDGTB
        bit_field_t<11, 0x7>::value<X>();

    static constexpr uint32_t WWDG_SR_RESET_VALUE = 0x0;
    static constexpr uint32_t WWDG_SR_EWIF = 0x1; // EWIF

    static constexpr uint32_t WWDG_HWCFGR_RESET_VALUE = 0xfff;
    template<uint32_t X>
    static constexpr uint32_t WWDG_HWCFGR_PREDIV =   // PREDIV
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t WWDG_VERR_RESET_VALUE = 0x21;
    template<uint32_t X>
    static constexpr uint32_t WWDG_VERR_MINREV =   // MINREV
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t WWDG_VERR_MAJREV =   // MAJREV
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t WWDG_IPIDR_RESET_VALUE = 0x120051;

    static constexpr uint32_t WWDG_SIDR_RESET_VALUE = 0xa3c5dd01;
};


template<>
struct peripheral_t<STM32MP15xxx, WWDG1>
{
    typedef stm32mp15xxx_wwdg1_t T;
    static T& V;
};

using wwdg1_t = peripheral_t<mcu_svd, WWDG1>;

