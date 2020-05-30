#pragma once

////
//
//      STM32F2 STK peripherals
//
////

////
//
//      SysTick timer
//
////

struct stm32f215_stk_t
{
    volatile uint32_t CSR;   // [read-write] SysTick control and status register
    volatile uint32_t LOAD_; // [read-write] SysTick reload value register
    volatile uint32_t CVR;   // [read-write] SysTick current value register
    volatile uint32_t CALIB; // [read-write] SysTick calibration value register

    static constexpr uint32_t CSR_RESET_VALUE = 0x0;
    static constexpr uint32_t CSR_ENABLE = 0x1;        // Counter enable
    static constexpr uint32_t CSR_TICKINT = 0x2;       // SysTick exception request enable
    static constexpr uint32_t CSR_CLKSOURCE = 0x4;     // Clock source selection
    static constexpr uint32_t CSR_COUNTFLAG = 0x10000; // COUNTFLAG

    static constexpr uint32_t LOAD__RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LOAD__RELOAD =   // RELOAD value
        bit_field_t<0, 0xffffff>::value<X>();

    static constexpr uint32_t CVR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CVR_CURRENT =   // Current counter value
        bit_field_t<0, 0xffffff>::value<X>();

    static constexpr uint32_t CALIB_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CALIB_TENMS =   // Calibration value
        bit_field_t<0, 0xffffff>::value<X>();
};


template<>
struct peripheral_t<STM32F215, STK>
{
    typedef stm32f215_stk_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F217, STK>
{
    typedef stm32f215_stk_t T;
    static T& V;
};

using stk_t = peripheral_t<mcu_svd, STK>;

