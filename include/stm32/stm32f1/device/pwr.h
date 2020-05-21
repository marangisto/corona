#pragma once

////
//
//      STM32F1 PWR peripherals
//
////

////
//
//      Power control
//
////

struct stm32f100_pwr_t
{
    volatile uint32_t CR;  // [read-write] Power control register (PWR_CR)
    volatile uint32_t CSR; // Power control register (PWR_CR)

    static constexpr uint32_t CR_RESET_VALUE = 0x0;
    static constexpr uint32_t CR_LPDS = 0x1;  // Low Power Deep Sleep
    static constexpr uint32_t CR_PDDS = 0x2;  // Power Down Deep Sleep
    static constexpr uint32_t CR_CWUF = 0x4;  // Clear Wake-up Flag
    static constexpr uint32_t CR_CSBF = 0x8;  // Clear STANDBY Flag
    static constexpr uint32_t CR_PVDE = 0x10; // Power Voltage Detector Enable
    template<uint32_t X>
    static constexpr uint32_t CR_PLS =        // PVD Level Selection
        bit_field_t<5, 0x7>::value<X>();
    static constexpr uint32_t CR_DBP = 0x100; // Disable Backup Domain write protection

    static constexpr uint32_t CSR_RESET_VALUE = 0x0;
    static constexpr uint32_t CSR_WUF = 0x1;    // Wake-Up Flag
    static constexpr uint32_t CSR_SBF = 0x2;    // STANDBY Flag
    static constexpr uint32_t CSR_PVDO = 0x4;   // PVD Output
    static constexpr uint32_t CSR_EWUP = 0x100; // Enable WKUP pin
};


template<>
struct peripheral_t<STM32F100, PWR>
{
    typedef stm32f100_pwr_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F101, PWR>
{
    typedef stm32f100_pwr_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F102, PWR>
{
    typedef stm32f100_pwr_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F103, PWR>
{
    typedef stm32f100_pwr_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F107, PWR>
{
    typedef stm32f100_pwr_t T;
    static T& V;
};

using pwr_t = peripheral_t<mcu_svd, PWR>;

