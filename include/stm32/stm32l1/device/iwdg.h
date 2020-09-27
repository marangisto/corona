#pragma once

////
//
//      STM32L1 IWDG peripherals
//
///

// IWDG: Independent watchdog

struct stm32l100_iwdg_t
{
    volatile uint32_t KR; // Key register
    volatile uint32_t PR; // Prescaler register
    volatile uint32_t RLR; // Reload register
    volatile uint32_t SR; // Status register

    static constexpr uint32_t KR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> KR_KEY; // Key value (write only, read 0000h)

    static constexpr uint32_t PR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> PR_PR; // Prescaler divider

    static constexpr uint32_t RLR_RESET_VALUE = 0xfff; // Reset value
    typedef bit_field_t<0, 0xfff> RLR_RL; // Watchdog counter reload value

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_RVU = 0x2; // Watchdog counter reload value update
    static constexpr uint32_t SR_PVU = 0x1; // Watchdog prescaler value update
};

template<>
struct peripheral_t<STM32L100, IWDG>
{
    static constexpr periph_t P = IWDG;
    using T = stm32l100_iwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L151, IWDG>
{
    static constexpr periph_t P = IWDG;
    using T = stm32l100_iwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L152, IWDG>
{
    static constexpr periph_t P = IWDG;
    using T = stm32l100_iwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L162, IWDG>
{
    static constexpr periph_t P = IWDG;
    using T = stm32l100_iwdg_t;
    static T& V;
};

using iwdg_t = peripheral_t<svd, IWDG>;
