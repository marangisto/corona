#pragma once

////
//
//      STM32F7 STK peripherals
//
////

////
//
//      SysTick timer
//
////

struct stm32f722_stk_t
{
    volatile uint32_t CSR;   // [read-write] SysTick control and status register
    volatile uint32_t RVR;   // [read-write] SysTick reload value register
    volatile uint32_t CVR;   // [read-write] SysTick current value register
    volatile uint32_t CALIB; // [read-write] SysTick calibration value register

    static constexpr uint32_t CSR_RESET_VALUE = 0x0;
    static constexpr uint32_t CSR_ENABLE = 0x1;        // Counter enable
    static constexpr uint32_t CSR_TICKINT = 0x2;       // SysTick exception request enable
    static constexpr uint32_t CSR_CLKSOURCE = 0x4;     // Clock source selection
    static constexpr uint32_t CSR_COUNTFLAG = 0x10000; // COUNTFLAG

    static constexpr uint32_t RVR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RVR_RELOAD =   // RELOAD value
        bit_field_t<0, 0xffffff>::value<X>();

    static constexpr uint32_t CVR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CVR_CURRENT =   // Current counter value
        bit_field_t<0, 0xffffff>::value<X>();

    static constexpr uint32_t CALIB_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CALIB_TENMS =             // Calibration value
        bit_field_t<0, 0xffffff>::value<X>();
    static constexpr uint32_t CALIB_SKEW = 0x40000000;  // SKEW flag: Indicates whether the TENMS value is exact
    static constexpr uint32_t CALIB_NOREF = 0x80000000; // NOREF flag. Reads as zero
};


template<>
struct peripheral_t<STM32F722, STK>
{
    typedef stm32f722_stk_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, STK>
{
    typedef stm32f722_stk_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, STK>
{
    typedef stm32f722_stk_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, STK>
{
    typedef stm32f722_stk_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, STK>
{
    typedef stm32f722_stk_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, STK>
{
    typedef stm32f722_stk_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, STK>
{
    typedef stm32f722_stk_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, STK>
{
    typedef stm32f722_stk_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, STK>
{
    typedef stm32f722_stk_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, STK>
{
    typedef stm32f722_stk_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, STK>
{
    typedef stm32f722_stk_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, STK>
{
    typedef stm32f722_stk_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, STK>
{
    typedef stm32f722_stk_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, STK>
{
    typedef stm32f722_stk_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, STK>
{
    typedef stm32f722_stk_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, STK>
{
    typedef stm32f722_stk_t T;
    static T& V;
};

using stk_t = peripheral_t<mcu_svd, STK>;

