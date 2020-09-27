#pragma once

////
//
//      STM32F1 PWR peripherals
//
///

// PWR: Power control

struct stm32f100_pwr_t
{
    volatile uint32_t CR; // Power control register (PWR_CR)
    volatile uint32_t CSR; // Power control register (PWR_CR)

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_LPDS = 0x1; // Low Power Deep Sleep
    static constexpr uint32_t CR_PDDS = 0x2; // Power Down Deep Sleep
    static constexpr uint32_t CR_CWUF = 0x4; // Clear Wake-up Flag
    static constexpr uint32_t CR_CSBF = 0x8; // Clear STANDBY Flag
    static constexpr uint32_t CR_PVDE = 0x10; // Power Voltage Detector Enable
    typedef bit_field_t<5, 0x7> CR_PLS; // PVD Level Selection
    static constexpr uint32_t CR_DBP = 0x100; // Disable Backup Domain write protection

    static constexpr uint32_t CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CSR_WUF = 0x1; // Wake-Up Flag
    static constexpr uint32_t CSR_SBF = 0x2; // STANDBY Flag
    static constexpr uint32_t CSR_PVDO = 0x4; // PVD Output
    static constexpr uint32_t CSR_EWUP = 0x100; // Enable WKUP pin
};

template<>
struct peripheral_t<STM32F100, PWR>
{
    static constexpr periph_t P = PWR;
    using T = stm32f100_pwr_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F101, PWR>
{
    static constexpr periph_t P = PWR;
    using T = stm32f100_pwr_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F102, PWR>
{
    static constexpr periph_t P = PWR;
    using T = stm32f100_pwr_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F103, PWR>
{
    static constexpr periph_t P = PWR;
    using T = stm32f100_pwr_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F107, PWR>
{
    static constexpr periph_t P = PWR;
    using T = stm32f100_pwr_t;
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
