#pragma once

////
//
//      STM32L0 DBGMCU peripherals
//
///

// DBG: Debug support

struct stm32l0x0_dbg_t
{
    volatile uint32_t IDCODE; // MCU Device ID Code Register
    volatile uint32_t CR; // Debug MCU Configuration Register
    volatile uint32_t APB1_FZ; // APB Low Freeze Register
    volatile uint32_t APB2_FZ; // APB High Freeze Register

    static constexpr uint32_t IDCODE_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> IDCODE_DEV_ID; // Device Identifier
    typedef bit_field_t<16, 0xffff> IDCODE_REV_ID; // Revision Identifier

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_DBG_STOP = 0x2; // Debug Stop Mode
    static constexpr uint32_t CR_DBG_STANDBY = 0x4; // Debug Standby Mode
    static constexpr uint32_t CR_DBG_SLEEP = 0x1; // Debug Sleep Mode

    static constexpr uint32_t APB1_FZ_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1_FZ_DBG_TIMER2_STOP = 0x1; // Debug Timer 2 stopped when Core is halted
    static constexpr uint32_t APB1_FZ_DBG_TIMER6_STOP = 0x10; // Debug Timer 6 stopped when Core is halted
    static constexpr uint32_t APB1_FZ_DBG_RTC_STOP = 0x400; // Debug RTC stopped when Core is halted
    static constexpr uint32_t APB1_FZ_DBG_WWDG_STOP = 0x800; // Debug Window Wachdog stopped when Core is halted
    static constexpr uint32_t APB1_FZ_DBG_IWDG_STOP = 0x1000; // Debug Independent Wachdog stopped when Core is halted
    static constexpr uint32_t APB1_FZ_DBG_I2C1_STOP = 0x200000; // I2C1 SMBUS timeout mode stopped when core is halted
    static constexpr uint32_t APB1_FZ_DBG_I2C2_STOP = 0x400000; // I2C2 SMBUS timeout mode stopped when core is halted
    static constexpr uint32_t APB1_FZ_DBG_LPTIMER_STOP = 0x80000000; // LPTIM1 counter stopped when core is halted

    static constexpr uint32_t APB2_FZ_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2_FZ_DBG_TIMER21_STOP = 0x4; // Debug Timer 21 stopped when Core is halted
    static constexpr uint32_t APB2_FZ_DBG_TIMER22_STO = 0x40; // Debug Timer 22 stopped when Core is halted
};

template<>
struct peripheral_t<STM32L0x0, DBG>
{
    using T = stm32l0x0_dbg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x1, DBG>
{
    using T = stm32l0x0_dbg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x2, DBGMCU>
{
    using T = stm32l0x0_dbg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x3, DBGMCU>
{
    using T = stm32l0x0_dbg_t;
    static T& V;
};

using dbg_t = peripheral_t<svd, DBG>;
using dbgmcu_t = peripheral_t<svd, DBGMCU>;

template<int INST> struct dbgmcu_traits {};

template<> struct dbgmcu_traits<0>
{
    using dbgmcu = dbg_t;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB2ENR |= RCC::T::APB2ENR_DBGEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB2ENR &= ~RCC::T::APB2ENR_DBGEN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.APB2SMENR |= RCC::T::APB2SMENR_DBGSMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.APB2SMENR &= ~RCC::T::APB2SMENR_DBGSMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB2RSTR |= RCC::T::APB2RSTR_DBGRST;
    }
};
