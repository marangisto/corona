#pragma once

////
//
//      STM32U5 IWDG peripherals
//
///

// IWDG: Independent watchdog

struct stm32u5xx_iwdg_t
{
    volatile uint32_t KR; // Key register
    volatile uint32_t PR; // Prescaler register
    volatile uint32_t RLR; // Reload register
    volatile uint32_t SR; // Status register
    volatile uint32_t WINR; // Window register
    volatile uint32_t EWCR; // IWDG early wakeup interrupt register

    static constexpr uint32_t KR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> KR_KEY; // Key value (write only, read 0x0000)

    static constexpr uint32_t PR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> PR_PR; // Prescaler divider

    static constexpr uint32_t RLR_RESET_VALUE = 0xfff; // Reset value
    typedef bit_field_t<0, 0xfff> RLR_RL; // Watchdog counter reload value

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_EWIF = 0x4000; // Watchdog Early interrupt flag
    static constexpr uint32_t SR_EWU = 0x8; // Watchdog interrupt comparator value update
    static constexpr uint32_t SR_WVU = 0x4; // Watchdog counter window value update
    static constexpr uint32_t SR_RVU = 0x2; // Watchdog counter reload value update
    static constexpr uint32_t SR_PVU = 0x1; // Watchdog prescaler value update

    static constexpr uint32_t WINR_RESET_VALUE = 0xfff; // Reset value
    typedef bit_field_t<0, 0xfff> WINR_WIN; // Watchdog counter window value

    static constexpr uint32_t EWCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> EWCR_EWIT; // Watchdog counter window value
    static constexpr uint32_t EWCR_EWIC = 0x4000; // Watchdog early interrupt acknowledge
    static constexpr uint32_t EWCR_EWIE = 0x8000; // Watchdog early interrupt enable
};

template<>
struct peripheral_t<STM32U5xx, IWDG>
{
    static constexpr periph_t P = IWDG;
    using T = stm32u5xx_iwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, SEC_IWDG>
{
    static constexpr periph_t P = SEC_IWDG;
    using T = stm32u5xx_iwdg_t;
    static T& V;
};

using iwdg_t = peripheral_t<svd, IWDG>;
using sec_iwdg_t = peripheral_t<svd, SEC_IWDG>;
