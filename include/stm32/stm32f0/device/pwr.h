#pragma once

////
//
//      STM32F0 PWR peripherals
//
///

// PWR: Power control

struct stm32f0x0_pwr_t
{
    volatile uint32_t CR; // power control register
    volatile uint32_t CSR; // power control/status register

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_DBP = 0x100; // Disable backup domain write protection
    static constexpr uint32_t CR_CSBF = 0x8; // Clear standby flag
    static constexpr uint32_t CR_CWUF = 0x4; // Clear wakeup flag
    static constexpr uint32_t CR_PDDS = 0x2; // Power down deepsleep
    static constexpr uint32_t CR_LPDS = 0x1; // Low-power deep sleep

    static constexpr uint32_t CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CSR_WUF = 0x1; // Wakeup flag
    static constexpr uint32_t CSR_SBF = 0x2; // Standby flag
    static constexpr uint32_t CSR_EWUP1 = 0x100; // Enable WKUP pin 1
    static constexpr uint32_t CSR_EWUP2 = 0x200; // Enable WKUP pin 2
    static constexpr uint32_t CSR_EWUP4 = 0x800; // Enable WKUP pin 4
    static constexpr uint32_t CSR_EWUP5 = 0x1000; // Enable WKUP pin 5
    static constexpr uint32_t CSR_EWUP6 = 0x2000; // Enable WKUP pin 6
    static constexpr uint32_t CSR_EWUP7 = 0x4000; // Enable WKUP pin 7
};

// PWR: Power control

struct stm32f0x1_pwr_t
{
    volatile uint32_t CR; // power control register
    volatile uint32_t CSR; // power control/status register

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_DBP = 0x100; // Disable backup domain write protection
    typedef bit_field_t<5, 0x7> CR_PLS; // PVD level selection
    static constexpr uint32_t CR_PVDE = 0x10; // Power voltage detector enable
    static constexpr uint32_t CR_CSBF = 0x8; // Clear standby flag
    static constexpr uint32_t CR_CWUF = 0x4; // Clear wakeup flag
    static constexpr uint32_t CR_PDDS = 0x2; // Power down deepsleep
    static constexpr uint32_t CR_LPDS = 0x1; // Low-power deep sleep

    static constexpr uint32_t CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CSR_WUF = 0x1; // Wakeup flag
    static constexpr uint32_t CSR_SBF = 0x2; // Standby flag
    static constexpr uint32_t CSR_PVDO = 0x4; // PVD output
    static constexpr uint32_t CSR_VREFINTRDY = 0x8; // VREFINT reference voltage ready
    static constexpr uint32_t CSR_EWUP1 = 0x100; // Enable WKUP pin 1
    static constexpr uint32_t CSR_EWUP2 = 0x200; // Enable WKUP pin 2
    static constexpr uint32_t CSR_EWUP3 = 0x400; // Enable WKUP pin 3
    static constexpr uint32_t CSR_EWUP4 = 0x800; // Enable WKUP pin 4
    static constexpr uint32_t CSR_EWUP5 = 0x1000; // Enable WKUP pin 5
    static constexpr uint32_t CSR_EWUP6 = 0x2000; // Enable WKUP pin 6
    static constexpr uint32_t CSR_EWUP7 = 0x4000; // Enable WKUP pin 7
    static constexpr uint32_t CSR_EWUP8 = 0x8000; // Enable WKUP pin 8
};

template<>
struct peripheral_t<STM32F0x0, PWR>
{
    static constexpr periph_t P = PWR;
    using T = stm32f0x0_pwr_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x1, PWR>
{
    static constexpr periph_t P = PWR;
    using T = stm32f0x1_pwr_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x2, PWR>
{
    static constexpr periph_t P = PWR;
    using T = stm32f0x1_pwr_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x8, PWR>
{
    static constexpr periph_t P = PWR;
    using T = stm32f0x1_pwr_t;
    static T& V;
};

using pwr_t = peripheral_t<svd, PWR>;

template<int INST> struct pwr_traits {};

template<> struct pwr_traits<0>
{
    using pwr = pwr_t;
    static constexpr clock_source_t CS = APB1_PERIPH;

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
