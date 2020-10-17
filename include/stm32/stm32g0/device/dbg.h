#pragma once

////
//
//      STM32G0 DBG peripherals
//
///

// DBG: MCU debug component

struct stm32g030_dbg_t
{
    volatile uint32_t IDCODE; // DBGMCU_IDCODE
    volatile uint32_t CR; // Debug MCU configuration register
    volatile uint32_t APB_FZ1; // Debug MCU APB1 freeze register1
    volatile uint32_t APB_FZ2; // Debug MCU APB1 freeze register 2

    static constexpr uint32_t IDCODE_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> IDCODE_DEV_ID; // Device identifier
    typedef bit_field_t<16, 0xffff> IDCODE_REV_ID; // Revision identifie

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_DBG_STOP = 0x2; // Debug Stop mode
    static constexpr uint32_t CR_DBG_STANDBY = 0x4; // Debug Standby mode

    static constexpr uint32_t APB_FZ1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB_FZ1_DBG_TIM2_STOP = 0x1; // TIM2 counter stopped when core is halted
    static constexpr uint32_t APB_FZ1_DBG_TIM3_STOP = 0x2; // TIM3 counter stopped when core is halted
    static constexpr uint32_t APB_FZ1_DBG_RTC_STOP = 0x400; // RTC counter stopped when core is halted
    static constexpr uint32_t APB_FZ1_DBG_WWDG_STOP = 0x800; // Window watchdog counter stopped when core is halted
    static constexpr uint32_t APB_FZ1_DBG_IWDG_STOP = 0x1000; // Independent watchdog counter stopped when core is halted
    static constexpr uint32_t APB_FZ1_DBG_I2C1_STOP = 0x200000; // I2C1 SMBUS timeout counter stopped when core is halted

    static constexpr uint32_t APB_FZ2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB_FZ2_DBG_TIM1_STOP = 0x800; // TIM1 counter stopped when core is halted
    static constexpr uint32_t APB_FZ2_DBG_TIM14_STOP = 0x8000; // DBG_TIM14_STOP
    static constexpr uint32_t APB_FZ2_DBG_TIM16_STOP = 0x20000; // DBG_TIM16_STOP
    static constexpr uint32_t APB_FZ2_DBG_TIM17_STOP = 0x40000; // DBG_TIM17_STOP
};

// DBG: MCU debug component

struct stm32g031_dbg_t
{
    volatile uint32_t IDCODE; // DBGMCU_IDCODE
    volatile uint32_t CR; // Debug MCU configuration register
    volatile uint32_t APB_FZ1; // Debug MCU APB1 freeze register1
    volatile uint32_t APB_FZ2; // Debug MCU APB1 freeze register 2

    static constexpr uint32_t IDCODE_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> IDCODE_DEV_ID; // Device identifier
    typedef bit_field_t<16, 0xffff> IDCODE_REV_ID; // Revision identifie

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_DBG_STOP = 0x2; // Debug Stop mode
    static constexpr uint32_t CR_DBG_STANDBY = 0x4; // Debug Standby mode

    static constexpr uint32_t APB_FZ1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB_FZ1_DBG_TIM2_STOP = 0x1; // TIM2 counter stopped when core is halted
    static constexpr uint32_t APB_FZ1_DBG_TIM3_STOP = 0x2; // TIM3 counter stopped when core is halted
    static constexpr uint32_t APB_FZ1_DBG_RTC_STOP = 0x400; // RTC counter stopped when core is halted
    static constexpr uint32_t APB_FZ1_DBG_WWDG_STOP = 0x800; // Window watchdog counter stopped when core is halted
    static constexpr uint32_t APB_FZ1_DBG_IWDG_STOP = 0x1000; // Independent watchdog counter stopped when core is halted
    static constexpr uint32_t APB_FZ1_DBG_I2C1_STOP = 0x200000; // I2C1 SMBUS timeout counter stopped when core is halted
    static constexpr uint32_t APB_FZ1_DBG_LPTIM2_STOP = 0x40000000; // LPTIM2 counter stopped when core is halted
    static constexpr uint32_t APB_FZ1_DBG_LPTIM1_STOP = 0x80000000; // LPTIM1 counter stopped when core is halted

    static constexpr uint32_t APB_FZ2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB_FZ2_DBG_TIM1_STOP = 0x800; // TIM1 counter stopped when core is halted
    static constexpr uint32_t APB_FZ2_DBG_TIM14_STOP = 0x8000; // DBG_TIM14_STOP
    static constexpr uint32_t APB_FZ2_DBG_TIM16_STOP = 0x20000; // DBG_TIM16_STOP
    static constexpr uint32_t APB_FZ2_DBG_TIM17_STOP = 0x40000; // DBG_TIM17_STOP
};

// DBG: Debug support

struct stm32g070_dbg_t
{
    volatile uint32_t IDCODE; // MCU Device ID Code Register
    volatile uint32_t CR; // Debug MCU Configuration Register
    volatile uint32_t APB_FZ1; // DBG APB freeze register 1
    volatile uint32_t APB_FZ2; // DBG APB freeze register 2

    static constexpr uint32_t IDCODE_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> IDCODE_DEV_ID; // Device Identifier
    typedef bit_field_t<16, 0xffff> IDCODE_REV_ID; // Revision Identifier

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_DBG_STOP = 0x2; // Debug Stop Mode
    static constexpr uint32_t CR_DBG_STANDBY = 0x4; // Debug Standby Mode

    static constexpr uint32_t APB_FZ1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB_FZ1_DBG_TIMER2_STOP = 0x1; // Debug Timer 2 stopped when Core is halted
    static constexpr uint32_t APB_FZ1_DBG_TIM3_STOP = 0x2; // TIM3 counter stopped when core is halted
    static constexpr uint32_t APB_FZ1_DBG_TIMER6_STOP = 0x10; // Debug Timer 6 stopped when Core is halted
    static constexpr uint32_t APB_FZ1_DBG_TIM7_STOP = 0x20; // TIM7 counter stopped when core is halted
    static constexpr uint32_t APB_FZ1_DBG_RTC_STOP = 0x400; // Debug RTC stopped when Core is halted
    static constexpr uint32_t APB_FZ1_DBG_WWDG_STOP = 0x800; // Debug Window Wachdog stopped when Core is halted
    static constexpr uint32_t APB_FZ1_DBG_IWDG_STOP = 0x1000; // Debug Independent Wachdog stopped when Core is halted
    static constexpr uint32_t APB_FZ1_DBG_I2C1_STOP = 0x200000; // I2C1 SMBUS timeout mode stopped when core is halted
    static constexpr uint32_t APB_FZ1_DBG_LPTIM2_STOP = 0x40000000; // Clocking of LPTIMER2 counter when the core is halted
    static constexpr uint32_t APB_FZ1_DBG_LPTIM1_STOP = 0x80000000; // Clocking of LPTIMER1 counter when the core is halted

    static constexpr uint32_t APB_FZ2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB_FZ2_DBG_TIM1_STOP = 0x800; // DBG_TIM1_STOP
    static constexpr uint32_t APB_FZ2_DBG_TIM14_STOP = 0x8000; // DBG_TIM14_STOP
    static constexpr uint32_t APB_FZ2_DBG_TIM15_STOP = 0x10000; // DBG_TIM15_STOP
    static constexpr uint32_t APB_FZ2_DBG_TIM16_STOP = 0x20000; // DBG_TIM16_STOP
    static constexpr uint32_t APB_FZ2_DBG_TIM17_STOP = 0x40000; // DBG_TIM17_STOP
};

template<>
struct peripheral_t<STM32G030, DBG>
{
    static constexpr periph_t P = DBG;
    using T = stm32g030_dbg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G031, DBG>
{
    static constexpr periph_t P = DBG;
    using T = stm32g031_dbg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G041, DBG>
{
    static constexpr periph_t P = DBG;
    using T = stm32g031_dbg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G070, DBG>
{
    static constexpr periph_t P = DBG;
    using T = stm32g070_dbg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G071, DBG>
{
    static constexpr periph_t P = DBG;
    using T = stm32g070_dbg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G081, DBG>
{
    static constexpr periph_t P = DBG;
    using T = stm32g070_dbg_t;
    static T& V;
};

using dbg_t = peripheral_t<svd, DBG>;

template<int INST> struct dbg_traits {};

template<> struct dbg_traits<0>
{
    using dbg = dbg_t;
    static constexpr clock_source_t CLOCK = APB1_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR |= RCC::T::APB1ENR_DBGEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR &= ~RCC::T::APB1ENR_DBGEN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.APB1SMENR |= RCC::T::APB1SMENR_DBGSMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.APB1SMENR &= ~RCC::T::APB1SMENR_DBGSMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR |= RCC::T::APB1RSTR_DBGRST;
    }
};
