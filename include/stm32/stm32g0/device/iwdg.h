#pragma once

////
//
//      STM32G0 IWDG peripherals
//
////

////
//
//      Independent watchdog
//
////

struct stm32g030_iwdg_t
{
    volatile uint32_t KR;   // [write-only] Key register
    volatile uint32_t PR;   // [read-write] Prescaler register
    volatile uint32_t RLR;  // [read-write] Reload register
    volatile uint32_t SR;   // [read-only] Status register
    volatile uint32_t WINR; // [read-write] Window register

    static constexpr uint32_t KR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t KR_KEY =   // Key value (write only, read 0x0000)
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t PR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t PR_PR =   // Prescaler divider
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t RLR_RESET_VALUE = 0xfff;
    template<uint32_t X>
    static constexpr uint32_t RLR_RL =   // Watchdog counter reload value
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t SR_RESET_VALUE = 0x0;
    static constexpr uint32_t SR_WVU = 0x4; // Watchdog counter window value update
    static constexpr uint32_t SR_RVU = 0x2; // Watchdog counter reload value update
    static constexpr uint32_t SR_PVU = 0x1; // Watchdog prescaler value update

    static constexpr uint32_t WINR_RESET_VALUE = 0xfff;
    template<uint32_t X>
    static constexpr uint32_t WINR_WIN =   // Watchdog counter window value
        bit_field_t<0, 0xfff>::value<X>();
};


////
//
//      Independent watchdog
//
////

struct stm32g070_iwdg_t
{
    volatile uint32_t KR;     // [write-only] Key register
    volatile uint32_t PR;     // [read-write] Prescaler register
    volatile uint32_t RLR;    // [read-write] Reload register
    volatile uint32_t SR;     // [read-only] Status register
    volatile uint32_t WINR;   // [read-write] Window register
    reserved_t<0xf7> _0x3f0;
    volatile uint32_t HWCFGR; // [read-write] hardware configuration register
    volatile uint32_t VERR;   // [read-only] EXTI IP Version register
    volatile uint32_t IPIDR;  // [read-only] EXTI Identification register
    volatile uint32_t SIDR;   // [read-only] EXTI Size ID register

    static constexpr uint32_t KR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t KR_KEY =   // Key value (write only, read 0x0000)
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t PR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t PR_PR =   // Prescaler divider
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t RLR_RESET_VALUE = 0xfff;
    template<uint32_t X>
    static constexpr uint32_t RLR_RL =   // Watchdog counter reload value
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t SR_RESET_VALUE = 0x0;
    static constexpr uint32_t SR_WVU = 0x4; // Watchdog counter window value update
    static constexpr uint32_t SR_RVU = 0x2; // Watchdog counter reload value update
    static constexpr uint32_t SR_PVU = 0x1; // Watchdog prescaler value update

    static constexpr uint32_t WINR_RESET_VALUE = 0xfff;
    template<uint32_t X>
    static constexpr uint32_t WINR_WIN =   // Watchdog counter window value
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t HWCFGR_RESET_VALUE = 0x71;
    template<uint32_t X>
    static constexpr uint32_t HWCFGR_WINDOW =       // Support of Window function
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HWCFGR_PR_DEFAULT =   // Prescaler default value
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t VERR_RESET_VALUE = 0x23;
    template<uint32_t X>
    static constexpr uint32_t VERR_MINREV =   // Minor Revision number
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t VERR_MAJREV =   // Major Revision number
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t IPIDR_RESET_VALUE = 0x120041;

    static constexpr uint32_t SIDR_RESET_VALUE = 0xa3c5dd01;
};


template<>
struct peripheral_t<STM32G030, IWDG>
{
    typedef stm32g030_iwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G031, IWDG>
{
    typedef stm32g030_iwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G041, IWDG>
{
    typedef stm32g030_iwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G070, IWDG>
{
    typedef stm32g070_iwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G071, IWDG>
{
    typedef stm32g070_iwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G081, IWDG>
{
    typedef stm32g070_iwdg_t T;
    static T& V;
};

using iwdg_t = peripheral_t<mcu_svd, IWDG>;

