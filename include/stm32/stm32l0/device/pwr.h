#pragma once

////
//
//      STM32L0 PWR peripherals
//
///

// PWR: Power control

struct stm32l0x0_pwr_t
{
    volatile uint32_t CR; // power control register
    volatile uint32_t CSR; // power control/status register

    static constexpr uint32_t CR_RESET_VALUE = 0x1000; // Reset value
    static constexpr uint32_t CR_LPDS = 0x1; // Low-power deep sleep
    static constexpr uint32_t CR_PDDS = 0x2; // Power down deepsleep
    static constexpr uint32_t CR_CWUF = 0x4; // Clear wakeup flag
    static constexpr uint32_t CR_CSBF = 0x8; // Clear standby flag
    static constexpr uint32_t CR_PVDE = 0x10; // Power voltage detector enable
    typedef bit_field_t<5, 0x7> CR_PLS; // PVD level selection
    static constexpr uint32_t CR_DBP = 0x100; // Disable backup domain write protection
    static constexpr uint32_t CR_ULP = 0x200; // Ultra-low-power mode
    static constexpr uint32_t CR_FWU = 0x400; // Fast wakeup
    typedef bit_field_t<11, 0x3> CR_VOS; // Voltage scaling range selection
    static constexpr uint32_t CR_DS_EE_KOFF = 0x2000; // Deep sleep mode with Flash memory kept off
    static constexpr uint32_t CR_LPRUN = 0x4000; // Low power run mode

    static constexpr uint32_t CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CSR_BRE = 0x200; // Backup regulator enable
    static constexpr uint32_t CSR_EWUP = 0x100; // Enable WKUP pin
    static constexpr uint32_t CSR_BRR = 0x8; // Backup regulator ready
    static constexpr uint32_t CSR_PVDO = 0x4; // PVD output
    static constexpr uint32_t CSR_SBF = 0x2; // Standby flag
    static constexpr uint32_t CSR_WUF = 0x1; // Wakeup flag
    static constexpr uint32_t CSR_VOSF = 0x10; // Voltage Scaling select flag
    static constexpr uint32_t CSR_REGLPF = 0x20; // Regulator LP flag
};

template<>
struct peripheral_t<STM32L0x0, PWR>
{
    static constexpr periph_t P = PWR;
    using T = stm32l0x0_pwr_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x1, PWR>
{
    static constexpr periph_t P = PWR;
    using T = stm32l0x0_pwr_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x2, PWR>
{
    static constexpr periph_t P = PWR;
    using T = stm32l0x0_pwr_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x3, PWR>
{
    static constexpr periph_t P = PWR;
    using T = stm32l0x0_pwr_t;
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
    static void enable_sleep_mode()
    {
        RCC::V.APB1SMENR |= RCC::T::APB1SMENR_PWRSMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.APB1SMENR &= ~RCC::T::APB1SMENR_PWRSMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR |= RCC::T::APB1RSTR_PWRRST;
    }
};
