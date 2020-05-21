#pragma once

////
//
//      STM32F2 PWR peripherals
//
////

////
//
//      Power control
//
////

struct stm32f215_pwr_t
{
    volatile uint32_t CR;  // [read-write] power control register
    volatile uint32_t CSR; // power control/status register

    static constexpr uint32_t CR_RESET_VALUE = 0x0;
    static constexpr uint32_t CR_FPDS = 0x200; // Flash power down in Stop mode
    static constexpr uint32_t CR_DBP = 0x100;  // Disable backup domain write protection
    template<uint32_t X>
    static constexpr uint32_t CR_PLS =         // PVD level selection
        bit_field_t<5, 0x7>::value<X>();
    static constexpr uint32_t CR_PVDE = 0x10;  // Power voltage detector enable
    static constexpr uint32_t CR_CSBF = 0x8;   // Clear standby flag
    static constexpr uint32_t CR_CWUF = 0x4;   // Clear wakeup flag
    static constexpr uint32_t CR_PDDS = 0x2;   // Power down deepsleep
    static constexpr uint32_t CR_LPDS = 0x1;   // Low-power deep sleep

    static constexpr uint32_t CSR_RESET_VALUE = 0x0;
    static constexpr uint32_t CSR_BRE = 0x200;  // Backup regulator enable
    static constexpr uint32_t CSR_EWUP = 0x100; // Enable WKUP pin
    static constexpr uint32_t CSR_BRR = 0x8;    // Backup regulator ready
    static constexpr uint32_t CSR_PVDO = 0x4;   // PVD output
    static constexpr uint32_t CSR_SBF = 0x2;    // Standby flag
    static constexpr uint32_t CSR_WUF = 0x1;    // Wakeup flag
};


template<>
struct peripheral_t<STM32F215, PWR>
{
    typedef stm32f215_pwr_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F217, PWR>
{
    typedef stm32f215_pwr_t T;
    static T& V;
};

using pwr_t = peripheral_t<mcu_svd, PWR>;

