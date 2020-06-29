#pragma once

////
//
//      STM32F4 IWDG peripherals
//
///

// IWDG: Independent watchdog

struct stm32f401_iwdg_t
{
    volatile uint32_t KR; // Key register
    volatile uint32_t PR; // Prescaler register
    volatile uint32_t RLR; // Reload register
    volatile uint32_t SR; // Status register

    static constexpr uint32_t KR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> KR_KEY; // Key value

    static constexpr uint32_t PR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> PR_PR; // Prescaler divider

    static constexpr uint32_t RLR_RESET_VALUE = 0xfff; // Reset value
    typedef bit_field_t<0, 0xfff> RLR_RL; // Watchdog counter reload value

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_RVU = 0x2; // Watchdog counter reload value update
    static constexpr uint32_t SR_PVU = 0x1; // Watchdog prescaler value update
};

template<>
struct peripheral_t<STM32F401, IWDG>
{
    using T = stm32f401_iwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, IWDG>
{
    using T = stm32f401_iwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, IWDG>
{
    using T = stm32f401_iwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F410, IWDG>
{
    using T = stm32f401_iwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F411, IWDG>
{
    using T = stm32f401_iwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, IWDG>
{
    using T = stm32f401_iwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, IWDG>
{
    using T = stm32f401_iwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, IWDG>
{
    using T = stm32f401_iwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, IWDG>
{
    using T = stm32f401_iwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, IWDG>
{
    using T = stm32f401_iwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, IWDG>
{
    using T = stm32f401_iwdg_t;
    static T& V;
};

using iwdg_t = peripheral_t<svd, IWDG>;

template<int INST> struct iwdg_traits {};
