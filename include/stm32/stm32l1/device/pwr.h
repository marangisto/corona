#pragma once

////
//
//      STM32L1 PWR peripherals
//
///

// PWR: Power control

struct stm32l100_pwr_t
{
    volatile uint32_t CR; // power control register
    volatile uint32_t CSR; // power control/status register

    static constexpr uint32_t CR_RESET_VALUE = 0x1000; // Reset value
    static constexpr uint32_t CR_LPRUN = 0x4000; // Low power run mode
    typedef bit_field_t<11, 0x3> CR_VOS; // Voltage scaling range selection
    static constexpr uint32_t CR_FWU = 0x400; // Fast wakeup
    static constexpr uint32_t CR_ULP = 0x200; // Ultralow power mode
    static constexpr uint32_t CR_DBP = 0x100; // Disable backup domain write protection
    typedef bit_field_t<5, 0x7> CR_PLS; // PVD level selection
    static constexpr uint32_t CR_PVDE = 0x10; // Power voltage detector enable
    static constexpr uint32_t CR_CSBF = 0x8; // Clear standby flag
    static constexpr uint32_t CR_CWUF = 0x4; // Clear wakeup flag
    static constexpr uint32_t CR_PDDS = 0x2; // Power down deepsleep
    static constexpr uint32_t CR_LPSDSR = 0x1; // Low-power deep sleep

    static constexpr uint32_t CSR_RESET_VALUE = 0x8; // Reset value
    static constexpr uint32_t CSR_EWUP3 = 0x400; // Enable WKUP pin 3
    static constexpr uint32_t CSR_EWUP2 = 0x200; // Enable WKUP pin 2
    static constexpr uint32_t CSR_EWUP1 = 0x100; // Enable WKUP pin 1
    static constexpr uint32_t CSR_REGLPF = 0x20; // Regulator LP flag
    static constexpr uint32_t CSR_VOSF = 0x10; // Voltage Scaling select flag
    static constexpr uint32_t CSR_VREFINTRDYF = 0x8; // Internal voltage reference (VREFINT) ready flag
    static constexpr uint32_t CSR_PVDO = 0x4; // PVD output
    static constexpr uint32_t CSR_SBF = 0x2; // Standby flag
    static constexpr uint32_t CSR_WUF = 0x1; // Wakeup flag
};

template<>
struct peripheral_t<STM32L100, PWR>
{
    using T = stm32l100_pwr_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L151, PWR>
{
    using T = stm32l100_pwr_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L152, PWR>
{
    using T = stm32l100_pwr_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L162, PWR>
{
    using T = stm32l100_pwr_t;
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
