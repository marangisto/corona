#pragma once

////
//
//      STM32F7 IWDG peripherals
//
////

////
//
//      Independent watchdog
//
////

struct stm32f722_iwdg_t
{
    volatile uint32_t KR;   // [write-only] Key register
    volatile uint32_t PR;   // [read-write] Prescaler register
    volatile uint32_t RLR;  // [read-write] Reload register
    volatile uint32_t SR;   // [read-only] Status register
    volatile uint32_t WINR; // [read-write] Window register

    static constexpr uint32_t KR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t KR_KEY =   // Key value (write only, read 0000h)
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
    static constexpr uint32_t SR_WVU = 0x4; // Watchdog counter window value update

    static constexpr uint32_t WINR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t WINR_WIN =   // Watchdog counter window value
        bit_field_t<0, 0xfff>::value<X>();
};


////
//
//      Independent watchdog
//
////

struct stm32f745_iwdg_t
{
    volatile uint32_t KR;   // [write-only] Key register
    volatile uint32_t PR;   // [read-write] Prescaler register
    volatile uint32_t RLR;  // [read-write] Reload register
    volatile uint32_t SR;   // [read-only] Status register
    volatile uint32_t WINR; // [read-write] Window register

    static constexpr uint32_t KR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t KR_KEY =   // Key value (write only, read 0000h)
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

    static constexpr uint32_t WINR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t WINR_WIN =   // Watchdog counter window value
        bit_field_t<0, 0xfff>::value<X>();
};


template<>
struct peripheral_t<STM32F722, IWDG>
{
    typedef stm32f722_iwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, IWDG>
{
    typedef stm32f722_iwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, IWDG>
{
    typedef stm32f722_iwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, IWDG>
{
    typedef stm32f722_iwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, IWDG>
{
    typedef stm32f722_iwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, IWDG>
{
    typedef stm32f745_iwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, IWDG>
{
    typedef stm32f745_iwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, IWDG>
{
    typedef stm32f745_iwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, IWDG>
{
    typedef stm32f745_iwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, IWDG>
{
    typedef stm32f745_iwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, IWDG>
{
    typedef stm32f745_iwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, IWDG>
{
    typedef stm32f745_iwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, IWDG>
{
    typedef stm32f745_iwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, IWDG>
{
    typedef stm32f745_iwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, IWDG>
{
    typedef stm32f745_iwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, IWDG>
{
    typedef stm32f745_iwdg_t T;
    static T& V;
};

using iwdg_t = peripheral_t<mcu_svd, IWDG>;

