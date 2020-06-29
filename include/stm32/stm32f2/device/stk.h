#pragma once

////
//
//      STM32F2 STK peripherals
//
///

// STK: SysTick timer

struct stm32f215_stk_t
{
    volatile uint32_t CSR; // SysTick control and status register
    volatile uint32_t LOAD_; // SysTick reload value register
    volatile uint32_t CVR; // SysTick current value register
    volatile uint32_t CALIB; // SysTick calibration value register

    static constexpr uint32_t CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CSR_ENABLE = 0x1; // Counter enable
    static constexpr uint32_t CSR_TICKINT = 0x2; // SysTick exception request enable
    static constexpr uint32_t CSR_CLKSOURCE = 0x4; // Clock source selection
    static constexpr uint32_t CSR_COUNTFLAG = 0x10000; // COUNTFLAG

    static constexpr uint32_t LOAD__RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffff> LOAD__RELOAD; // RELOAD value

    static constexpr uint32_t CVR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffff> CVR_CURRENT; // Current counter value

    static constexpr uint32_t CALIB_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffff> CALIB_TENMS; // Calibration value
};

template<>
struct peripheral_t<STM32F215, STK>
{
    using T = stm32f215_stk_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F217, STK>
{
    using T = stm32f215_stk_t;
    static T& V;
};

using stk_t = peripheral_t<svd, STK>;

template<int INST> struct stk_traits {};
