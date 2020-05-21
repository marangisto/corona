#pragma once

////
//
//      STM32F4 IWDG peripherals
//
////

////
//
//      Independent watchdog
//
////

struct stm32f401_iwdg_t
{
    volatile uint32_t KR;  // [write-only] Key register
    volatile uint32_t PR;  // [read-write] Prescaler register
    volatile uint32_t RLR; // [read-write] Reload register
    volatile uint32_t SR;  // [read-only] Status register

    static constexpr uint32_t KR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t KR_KEY =   // Key value
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
    static constexpr uint32_t SR_RVU = 0x2; // Watchdog counter reload value update
    static constexpr uint32_t SR_PVU = 0x1; // Watchdog prescaler value update
};


template<>
struct peripheral_t<STM32F401, IWDG>
{
    typedef stm32f401_iwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, IWDG>
{
    typedef stm32f401_iwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, IWDG>
{
    typedef stm32f401_iwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F410, IWDG>
{
    typedef stm32f401_iwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F411, IWDG>
{
    typedef stm32f401_iwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, IWDG>
{
    typedef stm32f401_iwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, IWDG>
{
    typedef stm32f401_iwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, IWDG>
{
    typedef stm32f401_iwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, IWDG>
{
    typedef stm32f401_iwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, IWDG>
{
    typedef stm32f401_iwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, IWDG>
{
    typedef stm32f401_iwdg_t T;
    static T& V;
};

using iwdg_t = peripheral_t<mcu_svd, IWDG>;

