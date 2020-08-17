#pragma once

////
//
//      STM32F4 STK peripherals
//
///

// STK: SysTick timer

struct stm32f401_stk_t
{
    volatile uint32_t CSR; // SysTick control and status register
    volatile uint32_t RVR; // SysTick reload value register
    volatile uint32_t CVR; // SysTick current value register
    volatile uint32_t CALIB; // SysTick calibration value register

    static constexpr uint32_t CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CSR_ENABLE = 0x1; // Counter enable
    static constexpr uint32_t CSR_TICKINT = 0x2; // SysTick exception request enable
    static constexpr uint32_t CSR_CLKSOURCE = 0x4; // Clock source selection
    static constexpr uint32_t CSR_COUNTFLAG = 0x10000; // COUNTFLAG

    static constexpr uint32_t RVR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffff> RVR_RELOAD; // RELOAD value

    static constexpr uint32_t CVR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffff> CVR_CURRENT; // Current counter value

    static constexpr uint32_t CALIB_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffff> CALIB_TENMS; // Calibration value
    static constexpr uint32_t CALIB_SKEW = 0x40000000; // SKEW flag: Indicates whether the TENMS value is exact
    static constexpr uint32_t CALIB_NOREF = 0x80000000; // NOREF flag. Reads as zero
};

template<>
struct peripheral_t<STM32F401, STK>
{
    using T = stm32f401_stk_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, STK>
{
    using T = stm32f401_stk_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, STK>
{
    using T = stm32f401_stk_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F410, STK>
{
    using T = stm32f401_stk_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F411, STK>
{
    using T = stm32f401_stk_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, STK>
{
    using T = stm32f401_stk_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, STK>
{
    using T = stm32f401_stk_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, STK>
{
    using T = stm32f401_stk_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, STK>
{
    using T = stm32f401_stk_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, STK>
{
    using T = stm32f401_stk_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, STK>
{
    using T = stm32f401_stk_t;
    static T& V;
};

using stk_t = peripheral_t<svd, STK>;
