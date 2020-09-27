#pragma once

////
//
//      STM32F3 PWR peripherals
//
///

// PWR: Power control

struct stm32f301_pwr_t
{
    volatile uint32_t CR; // power control register
    volatile uint32_t CSR; // power control/status register

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_LPDS = 0x1; // Low-power deep sleep
    static constexpr uint32_t CR_PDDS = 0x2; // Power down deepsleep
    static constexpr uint32_t CR_CWUF = 0x4; // Clear wakeup flag
    static constexpr uint32_t CR_CSBF = 0x8; // Clear standby flag
    static constexpr uint32_t CR_PVDE = 0x10; // Power voltage detector enable
    typedef bit_field_t<5, 0x7> CR_PLS; // PVD level selection
    static constexpr uint32_t CR_DBP = 0x100; // Disable backup domain write protection
    static constexpr uint32_t CR_ENSD1 = 0x200; // ENable SD1 ADC
    static constexpr uint32_t CR_ENSD2 = 0x400; // ENable SD2 ADC
    static constexpr uint32_t CR_ENSD3 = 0x800; // ENable SD3 ADC

    static constexpr uint32_t CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CSR_WUF = 0x1; // Wakeup flag
    static constexpr uint32_t CSR_SBF = 0x2; // Standby flag
    static constexpr uint32_t CSR_PVDO = 0x4; // PVD output
    static constexpr uint32_t CSR_EWUP1 = 0x100; // Enable WKUP1 pin
    static constexpr uint32_t CSR_EWUP2 = 0x200; // Enable WKUP2 pin
    static constexpr uint32_t CSR_EWUP3 = 0x400; // Enable WKUP3 pin
};

// PWR: Power control

struct stm32f302_pwr_t
{
    volatile uint32_t CR; // power control register
    volatile uint32_t CSR; // power control/status register

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_LPDS = 0x1; // Low-power deep sleep
    static constexpr uint32_t CR_PDDS = 0x2; // Power down deepsleep
    static constexpr uint32_t CR_CWUF = 0x4; // Clear wakeup flag
    static constexpr uint32_t CR_CSBF = 0x8; // Clear standby flag
    static constexpr uint32_t CR_PVDE = 0x10; // Power voltage detector enable
    typedef bit_field_t<5, 0x7> CR_PLS; // PVD level selection
    static constexpr uint32_t CR_DBP = 0x100; // Disable backup domain write protection

    static constexpr uint32_t CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CSR_WUF = 0x1; // Wakeup flag
    static constexpr uint32_t CSR_SBF = 0x2; // Standby flag
    static constexpr uint32_t CSR_PVDO = 0x4; // PVD output
    static constexpr uint32_t CSR_EWUP1 = 0x100; // Enable WKUP1 pin
    static constexpr uint32_t CSR_EWUP2 = 0x200; // Enable WKUP2 pin
};

template<>
struct peripheral_t<STM32F301, PWR>
{
    static constexpr periph_t P = PWR;
    using T = stm32f301_pwr_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F373, PWR>
{
    static constexpr periph_t P = PWR;
    using T = stm32f301_pwr_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F3x8, PWR>
{
    static constexpr periph_t P = PWR;
    using T = stm32f301_pwr_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F302, PWR>
{
    static constexpr periph_t P = PWR;
    using T = stm32f302_pwr_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F303, PWR>
{
    static constexpr periph_t P = PWR;
    using T = stm32f302_pwr_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F3x4, PWR>
{
    static constexpr periph_t P = PWR;
    using T = stm32f302_pwr_t;
    static T& V;
};

using pwr_t = peripheral_t<svd, PWR>;

template<int INST> struct pwr_traits {};

template<> struct pwr_traits<0>
{
    using pwr = pwr_t;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR |= RCC::T::APB1ENR_PWREN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR &= ~RCC::T::APB1ENR_PWREN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR |= RCC::T::APB1RSTR_PWRRST;
    }
};
