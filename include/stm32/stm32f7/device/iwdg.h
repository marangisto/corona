#pragma once

////
//
//      STM32F7 IWDG peripherals
//
///

// IWDG: Independent watchdog

struct stm32f722_iwdg_t
{
    volatile uint32_t KR; // Key register
    volatile uint32_t PR; // Prescaler register
    volatile uint32_t RLR; // Reload register
    volatile uint32_t SR; // Status register
    volatile uint32_t WINR; // Window register

    static constexpr uint32_t KR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> KR_KEY; // Key value (write only, read 0000h)

    static constexpr uint32_t PR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> PR_PR; // Prescaler divider

    static constexpr uint32_t RLR_RESET_VALUE = 0xfff; // Reset value
    typedef bit_field_t<0, 0xfff> RLR_RL; // Watchdog counter reload value

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_RVU = 0x2; // Watchdog counter reload value update
    static constexpr uint32_t SR_PVU = 0x1; // Watchdog prescaler value update
    static constexpr uint32_t SR_WVU = 0x4; // Watchdog counter window value update

    static constexpr uint32_t WINR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> WINR_WIN; // Watchdog counter window value
};

// IWDG: Independent watchdog

struct stm32f745_iwdg_t
{
    volatile uint32_t KR; // Key register
    volatile uint32_t PR; // Prescaler register
    volatile uint32_t RLR; // Reload register
    volatile uint32_t SR; // Status register
    volatile uint32_t WINR; // Window register

    static constexpr uint32_t KR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> KR_KEY; // Key value (write only, read 0000h)

    static constexpr uint32_t PR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> PR_PR; // Prescaler divider

    static constexpr uint32_t RLR_RESET_VALUE = 0xfff; // Reset value
    typedef bit_field_t<0, 0xfff> RLR_RL; // Watchdog counter reload value

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_RVU = 0x2; // Watchdog counter reload value update
    static constexpr uint32_t SR_PVU = 0x1; // Watchdog prescaler value update

    static constexpr uint32_t WINR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> WINR_WIN; // Watchdog counter window value
};

template<>
struct peripheral_t<STM32F722, IWDG>
{
    static constexpr periph_t P = IWDG;
    using T = stm32f722_iwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, IWDG>
{
    static constexpr periph_t P = IWDG;
    using T = stm32f722_iwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, IWDG>
{
    static constexpr periph_t P = IWDG;
    using T = stm32f722_iwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, IWDG>
{
    static constexpr periph_t P = IWDG;
    using T = stm32f722_iwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, IWDG>
{
    static constexpr periph_t P = IWDG;
    using T = stm32f722_iwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, IWDG>
{
    static constexpr periph_t P = IWDG;
    using T = stm32f745_iwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, IWDG>
{
    static constexpr periph_t P = IWDG;
    using T = stm32f745_iwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, IWDG>
{
    static constexpr periph_t P = IWDG;
    using T = stm32f745_iwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, IWDG>
{
    static constexpr periph_t P = IWDG;
    using T = stm32f745_iwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, IWDG>
{
    static constexpr periph_t P = IWDG;
    using T = stm32f745_iwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, IWDG>
{
    static constexpr periph_t P = IWDG;
    using T = stm32f745_iwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, IWDG>
{
    static constexpr periph_t P = IWDG;
    using T = stm32f745_iwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, IWDG>
{
    static constexpr periph_t P = IWDG;
    using T = stm32f745_iwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, IWDG>
{
    static constexpr periph_t P = IWDG;
    using T = stm32f745_iwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, IWDG>
{
    static constexpr periph_t P = IWDG;
    using T = stm32f745_iwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, IWDG>
{
    static constexpr periph_t P = IWDG;
    using T = stm32f745_iwdg_t;
    static T& V;
};

using iwdg_t = peripheral_t<svd, IWDG>;
