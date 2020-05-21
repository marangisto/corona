#pragma once

////
//
//      STM32F4 STK peripherals
//
////

////
//
//      SysTick timer
//
////

struct stm32f401_stk_t
{
    volatile uint32_t CTRL;  // [read-write] SysTick control and status register
    volatile uint32_t LOAD;  // [read-write] SysTick reload value register
    volatile uint32_t VAL;   // [read-write] SysTick current value register
    volatile uint32_t CALIB; // [read-write] SysTick calibration value register

    static constexpr uint32_t CTRL_RESET_VALUE = 0x0;
    static constexpr uint32_t CTRL_ENABLE = 0x1;        // Counter enable
    static constexpr uint32_t CTRL_TICKINT = 0x2;       // SysTick exception request enable
    static constexpr uint32_t CTRL_CLKSOURCE = 0x4;     // Clock source selection
    static constexpr uint32_t CTRL_COUNTFLAG = 0x10000; // COUNTFLAG

    static constexpr uint32_t LOAD_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LOAD_RELOAD =   // RELOAD value
        bit_field_t<0, 0xffffff>::value<X>();

    static constexpr uint32_t VAL_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t VAL_CURRENT =   // Current counter value
        bit_field_t<0, 0xffffff>::value<X>();

    static constexpr uint32_t CALIB_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CALIB_TENMS =             // Calibration value
        bit_field_t<0, 0xffffff>::value<X>();
    static constexpr uint32_t CALIB_SKEW = 0x40000000;  // SKEW flag: Indicates whether the TENMS value is exact
    static constexpr uint32_t CALIB_NOREF = 0x80000000; // NOREF flag. Reads as zero
};


template<>
struct peripheral_t<STM32F401, STK>
{
    typedef stm32f401_stk_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, STK>
{
    typedef stm32f401_stk_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, STK>
{
    typedef stm32f401_stk_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F410, STK>
{
    typedef stm32f401_stk_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F411, STK>
{
    typedef stm32f401_stk_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, STK>
{
    typedef stm32f401_stk_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, STK>
{
    typedef stm32f401_stk_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, STK>
{
    typedef stm32f401_stk_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, STK>
{
    typedef stm32f401_stk_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, STK>
{
    typedef stm32f401_stk_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, STK>
{
    typedef stm32f401_stk_t T;
    static T& V;
};

using stk_t = peripheral_t<mcu_svd, STK>;

