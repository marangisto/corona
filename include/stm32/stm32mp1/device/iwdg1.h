#pragma once

////
//
//      STM32MP1 IWDG1 peripherals
//
////

////
//
//      IWDG1
//
////

struct stm32mp15xxx_iwdg1_t
{
    volatile uint32_t IWDG_KR;     // [write-only] Key register
    volatile uint32_t IWDG_PR;     // [read-write] Prescaler register
    volatile uint32_t IWDG_RLR;    // [read-write] Reload register
    volatile uint32_t IWDG_SR;     // [read-only] Status register
    volatile uint32_t IWDG_WINR;   // [read-write] Window register
    reserved_t<0xf7> _0x3f0;
    volatile uint32_t IWDG_HWCFGR; // [read-only] IWDG hardware configuration register
    volatile uint32_t IWDG_VERR;   // [read-only] IWDG version register
    volatile uint32_t IWDG_IDR;    // [read-only] IWDG identification register
    volatile uint32_t IWDG_SIDR;   // [read-only] IWDG size identification register

    static constexpr uint32_t IWDG_KR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IWDG_KR_KEY =   // KEY
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t IWDG_PR_RESET_VALUE = 0x7;
    template<uint32_t X>
    static constexpr uint32_t IWDG_PR_PR =   // PR
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t IWDG_RLR_RESET_VALUE = 0xfff;
    template<uint32_t X>
    static constexpr uint32_t IWDG_RLR_RL =   // RL
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t IWDG_SR_RESET_VALUE = 0x0;
    static constexpr uint32_t IWDG_SR_PVU = 0x1; // PVU
    static constexpr uint32_t IWDG_SR_RVU = 0x2; // RVU
    static constexpr uint32_t IWDG_SR_WVU = 0x4; // WVU

    static constexpr uint32_t IWDG_WINR_RESET_VALUE = 0xfff;
    template<uint32_t X>
    static constexpr uint32_t IWDG_WINR_WIN =   // WIN
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t IWDG_HWCFGR_RESET_VALUE = 0x71;
    template<uint32_t X>
    static constexpr uint32_t IWDG_HWCFGR_WINDOW =       // WINDOW
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IWDG_HWCFGR_PR_DEFAULT =   // PR_DEFAULT
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t IWDG_VERR_RESET_VALUE = 0x23;
    template<uint32_t X>
    static constexpr uint32_t IWDG_VERR_MINREV =   // MINREV
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IWDG_VERR_MAJREV =   // MAJREV
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t IWDG_IDR_RESET_VALUE = 0x120041;

    static constexpr uint32_t IWDG_SIDR_RESET_VALUE = 0xa3c5dd01;
};


template<>
struct peripheral_t<STM32MP15xxx, IWDG1>
{
    typedef stm32mp15xxx_iwdg1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32MP15xxx, IWDG2>
{
    typedef stm32mp15xxx_iwdg1_t T;
    static T& V;
};

using iwdg1_t = peripheral_t<mcu_svd, IWDG1>;
using iwdg2_t = peripheral_t<mcu_svd, IWDG2>;

template<int INST> struct iwdg_traits {};

template<> struct iwdg_traits<1>
{
    using iwdg = iwdg1_t;
};

template<> struct iwdg_traits<2>
{
    using iwdg = iwdg2_t;
};

