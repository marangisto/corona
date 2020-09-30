#pragma once

////
//
//      STM32F0 DBGMCU peripherals
//
///

// DBGMCU: Debug support

struct stm32f0x0_dbgmcu_t
{
    volatile uint32_t IDCODE; // MCU Device ID Code Register
    volatile uint32_t CR; // Debug MCU Configuration Register
    volatile uint32_t APB1_FZ; // Debug MCU APB1 freeze register
    volatile uint32_t APB2_FZ; // Debug MCU APB2 freeze register

    static constexpr uint32_t IDCODE_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> IDCODE_DEV_ID; // Device Identifier
    typedef bit_field_t<12, 0xf> IDCODE_DIV_ID; // Division Identifier
    typedef bit_field_t<16, 0xffff> IDCODE_REV_ID; // Revision Identifier

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_DBG_STOP = 0x2; // Debug Stop Mode
    static constexpr uint32_t CR_DBG_STANDBY = 0x4; // Debug Standby Mode

    static constexpr uint32_t APB1_FZ_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1_FZ_DBG_TIM3_STOP = 0x2; // TIM3 counter stopped when core is halted
    static constexpr uint32_t APB1_FZ_DBG_TIM6_STOP = 0x10; // TIM6 counter stopped when core is halted
    static constexpr uint32_t APB1_FZ_DBG_TIM7_STOP = 0x20; // TIM7 counter stopped when core is halted
    static constexpr uint32_t APB1_FZ_DBG_TIM14_STOP = 0x100; // TIM14 counter stopped when core is halted
    static constexpr uint32_t APB1_FZ_DBG_WWDG_STOP = 0x800; // Debug window watchdog stopped when core is halted
    static constexpr uint32_t APB1_FZ_DBG_IWDG_STOP = 0x1000; // Debug independent watchdog stopped when core is halted
    static constexpr uint32_t APB1_FZ_DBG_I2C1_SMBUS_TIMEOUT = 0x200000; // SMBUS timeout mode stopped when core is halted

    static constexpr uint32_t APB2_FZ_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2_FZ_DBG_TIM1_STOP = 0x800; // TIM1 counter stopped when core is halted
    static constexpr uint32_t APB2_FZ_DBG_TIM15_STOP = 0x10000; // TIM15 counter stopped when core is halted
    static constexpr uint32_t APB2_FZ_DBG_TIM16_STOP = 0x20000; // TIM16 counter stopped when core is halted
    static constexpr uint32_t APB2_FZ_DBG_TIM17_STOP = 0x40000; // TIM17 counter stopped when core is halted
};

// DBGMCU: Debug support

struct stm32f0x1_dbgmcu_t
{
    volatile uint32_t IDCODE; // MCU Device ID Code Register
    volatile uint32_t CR; // Debug MCU Configuration Register
    volatile uint32_t APB1_FZ; // Debug MCU APB1 freeze register
    volatile uint32_t APB2_FZ; // Debug MCU APB2 freeze register

    static constexpr uint32_t IDCODE_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> IDCODE_DEV_ID; // Device Identifier
    typedef bit_field_t<12, 0xf> IDCODE_DIV_ID; // Division Identifier
    typedef bit_field_t<16, 0xffff> IDCODE_REV_ID; // Revision Identifier

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_DBG_STOP = 0x2; // Debug Stop Mode
    static constexpr uint32_t CR_DBG_STANDBY = 0x4; // Debug Standby Mode

    static constexpr uint32_t APB1_FZ_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1_FZ_DBG_TIM2_STOP = 0x1; // TIM2 counter stopped when core is halted
    static constexpr uint32_t APB1_FZ_DBG_TIM3_STOP = 0x2; // TIM3 counter stopped when core is halted
    static constexpr uint32_t APB1_FZ_TIM3_COUNTER_STOPPED_WHEN_CORE_IS_HALTED = 0x10; // TIM6 counter stopped when core is halted
    static constexpr uint32_t APB1_FZ_DBG_TIM7_STOP = 0x20; // TIM7 counter stopped when core is halted
    static constexpr uint32_t APB1_FZ_DBG_TIM14_STOP = 0x100; // TIM14 counter stopped when core is halted
    static constexpr uint32_t APB1_FZ_DBG_RTC_STOP = 0x400; // Debug RTC stopped when core is halted
    static constexpr uint32_t APB1_FZ_DBG_WWDG_STOP = 0x800; // Debug window watchdog stopped when core is halted
    static constexpr uint32_t APB1_FZ_DBG_IWDG_STOP = 0x1000; // Debug independent watchdog stopped when core is halted
    static constexpr uint32_t APB1_FZ_DBG_I2C1_SMBUS_TIMEOUT = 0x200000; // SMBUS timeout mode stopped when core is halted
    static constexpr uint32_t APB1_FZ_DBG_CAN_STOP = 0x2000000; // CAN stopped when core is halted

    static constexpr uint32_t APB2_FZ_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2_FZ_DBG_TIM1_STOP = 0x800; // TIM1 counter stopped when core is halted
    static constexpr uint32_t APB2_FZ_DBG_TIM15_STOP = 0x10000; // TIM15 counter stopped when core is halted
    static constexpr uint32_t APB2_FZ_DBG_TIM16_STOP = 0x20000; // TIM16 counter stopped when core is halted
    static constexpr uint32_t APB2_FZ_DBG_TIM17_STOP = 0x40000; // TIM17 counter stopped when core is halted
};

// DBGMCU: Debug support

struct stm32f0x2_dbgmcu_t
{
    volatile uint32_t IDCODE; // MCU Device ID Code Register
    volatile uint32_t CR; // Debug MCU Configuration Register
    volatile uint32_t APB1_FZ; // Debug MCU APB1 freeze register
    volatile uint32_t APB2_FZ; // Debug MCU APB2 freeze register

    static constexpr uint32_t IDCODE_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> IDCODE_DEV_ID; // Device Identifier
    typedef bit_field_t<12, 0xf> IDCODE_DIV_ID; // Division Identifier
    typedef bit_field_t<16, 0xffff> IDCODE_REV_ID; // Revision Identifier

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_DBG_STOP = 0x2; // Debug Stop Mode
    static constexpr uint32_t CR_DBG_STANDBY = 0x4; // Debug Standby Mode

    static constexpr uint32_t APB1_FZ_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1_FZ_DBG_TIM2_STOP = 0x1; // TIM2 counter stopped when core is halted
    static constexpr uint32_t APB1_FZ_DBG_TIM3_STOP = 0x2; // TIM3 counter stopped when core is halted
    static constexpr uint32_t APB1_FZ_DBG_TIM6_STOP = 0x10; // TIM6 counter stopped when core is halted
    static constexpr uint32_t APB1_FZ_DBG_TIM7_STOP = 0x20; // TIM7 counter stopped when core is halted
    static constexpr uint32_t APB1_FZ_DBG_TIM14_STOP = 0x100; // TIM14 counter stopped when core is halted
    static constexpr uint32_t APB1_FZ_DBG_RTC_STOP = 0x400; // Debug RTC stopped when core is halted
    static constexpr uint32_t APB1_FZ_DBG_WWDG_STOP = 0x800; // Debug window watchdog stopped when core is halted
    static constexpr uint32_t APB1_FZ_DBG_IWDG_STOP = 0x1000; // Debug independent watchdog stopped when core is halted
    static constexpr uint32_t APB1_FZ_DBG_I2C1_SMBUS_TIMEOUT = 0x200000; // SMBUS timeout mode stopped when core is halted
    static constexpr uint32_t APB1_FZ_DBG_CAN_STOP = 0x2000000; // CAN stopped when core is halted

    static constexpr uint32_t APB2_FZ_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2_FZ_DBG_TIM1_STOP = 0x800; // TIM1 counter stopped when core is halted
    static constexpr uint32_t APB2_FZ_DBG_TIM15_STOP = 0x10000; // TIM15 counter stopped when core is halted
    static constexpr uint32_t APB2_FZ_DBG_TIM16_STOP = 0x20000; // TIM16 counter stopped when core is halted
    static constexpr uint32_t APB2_FZ_DBG_TIM17_STOP = 0x40000; // TIM17 counter stopped when core is halted
};

template<>
struct peripheral_t<STM32F0x0, DBGMCU>
{
    static constexpr periph_t P = DBGMCU;
    using T = stm32f0x0_dbgmcu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x1, DBGMCU>
{
    static constexpr periph_t P = DBGMCU;
    using T = stm32f0x1_dbgmcu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x2, DBGMCU>
{
    static constexpr periph_t P = DBGMCU;
    using T = stm32f0x2_dbgmcu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x8, DBGMCU>
{
    static constexpr periph_t P = DBGMCU;
    using T = stm32f0x2_dbgmcu_t;
    static T& V;
};

using dbgmcu_t = peripheral_t<svd, DBGMCU>;

template<int INST> struct dbgmcu_traits {};

template<> struct dbgmcu_traits<0>
{
    using dbgmcu = dbgmcu_t;
    static constexpr clock_source_t CS = APB2_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB2ENR |= RCC::T::APB2ENR_DBGMCUEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB2ENR &= ~RCC::T::APB2ENR_DBGMCUEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB2RSTR |= RCC::T::APB2RSTR_DBGMCURST;
    }
};
