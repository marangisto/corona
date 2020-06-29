#pragma once

////
//
//      STM32L4 DBGMCU peripherals
//
///

// DBGMCU: MCU debug component

struct stm32l412_dbgmcu_t
{
    volatile uint32_t IDCODE; // DBGMCU_IDCODE
    volatile uint32_t CR; // Debug MCU configuration register
    volatile uint32_t APB1FZR1; // Debug MCU APB1 freeze register1
    volatile uint32_t APB1FZR2; // Debug MCU APB1 freeze register 2
    volatile uint32_t APB2FZR; // Debug MCU APB2 freeze register

    static constexpr uint32_t IDCODE_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> IDCODE_DEV_ID; // Device identifier
    typedef bit_field_t<16, 0xffff> IDCODE_REV_ID; // Revision identifie

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_DBG_SLEEP = 0x1; // Debug Sleep mode
    static constexpr uint32_t CR_DBG_STOP = 0x2; // Debug Stop mode
    static constexpr uint32_t CR_DBG_STANDBY = 0x4; // Debug Standby mode
    static constexpr uint32_t CR_TRACE_IOEN = 0x20; // Trace pin assignment control
    typedef bit_field_t<6, 0x3> CR_TRACE_MODE; // Trace pin assignment control

    static constexpr uint32_t APB1FZR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1FZR1_DBG_TIM2_STOP = 0x1; // TIM2 counter stopped when core is halted
    static constexpr uint32_t APB1FZR1_DBG_TIM6_STOP = 0x10; // TIM6 counter stopped when core is halted
    static constexpr uint32_t APB1FZR1_DBG_TIM7_STOP = 0x20; // TIM7 counter stopped when core is halted
    static constexpr uint32_t APB1FZR1_DBG_RTC_STOP = 0x400; // RTC counter stopped when core is halted
    static constexpr uint32_t APB1FZR1_DBG_WWDG_STOP = 0x800; // Window watchdog counter stopped when core is halted
    static constexpr uint32_t APB1FZR1_DBG_IWDG_STOP = 0x1000; // Independent watchdog counter stopped when core is halted
    static constexpr uint32_t APB1FZR1_DBG_I2C1_STOP = 0x200000; // I2C1 SMBUS timeout counter stopped when core is halted
    static constexpr uint32_t APB1FZR1_DBG_I2C2_STOP = 0x400000; // I2C2 SMBUS timeout counter stopped when core is halted
    static constexpr uint32_t APB1FZR1_DBG_I2C3_STOP = 0x800000; // I2C3 SMBUS timeout counter stopped when core is halted
    static constexpr uint32_t APB1FZR1_DBG_CAN_STOP = 0x2000000; // bxCAN stopped when core is halted
    static constexpr uint32_t APB1FZR1_DBG_LPTIM1_STOP = 0x80000000; // LPTIM1 counter stopped when core is halted

    static constexpr uint32_t APB1FZR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1FZR2_DBG_LPTIM2_STOP = 0x20; // LPTIM2 counter stopped when core is halted

    static constexpr uint32_t APB2FZR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2FZR_DBG_TIM1_STOP = 0x800; // TIM1 counter stopped when core is halted
    static constexpr uint32_t APB2FZR_DBG_TIM15_STOP = 0x10000; // TIM15 counter stopped when core is halted
    static constexpr uint32_t APB2FZR_DBG_TIM16_STOP = 0x20000; // TIM16 counter stopped when core is halted
};

// DBGMCU: Debug support

struct stm32l476_dbgmcu_t
{
    volatile uint32_t IDCODE; // MCU Device ID Code Register
    volatile uint32_t CR; // Debug MCU Configuration Register
    volatile uint32_t APB1_FZR1; // APB Low Freeze Register 1
    volatile uint32_t APB1_FZR2; // APB Low Freeze Register 2
    volatile uint32_t APB2_FZR; // APB High Freeze Register

    static constexpr uint32_t IDCODE_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> IDCODE_DEV_ID; // Device Identifier
    typedef bit_field_t<16, 0xffff> IDCODE_REV_ID; // Revision Identifier

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_DBG_SLEEP = 0x1; // Debug Sleep Mode
    static constexpr uint32_t CR_DBG_STOP = 0x2; // Debug Stop Mode
    static constexpr uint32_t CR_DBG_STANDBY = 0x4; // Debug Standby Mode
    static constexpr uint32_t CR_TRACE_IOEN = 0x20; // Trace pin assignment control
    typedef bit_field_t<6, 0x3> CR_TRACE_MODE; // Trace pin assignment control

    static constexpr uint32_t APB1_FZR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1_FZR1_DBG_TIMER2_STOP = 0x1; // Debug Timer 2 stopped when Core is halted
    static constexpr uint32_t APB1_FZR1_DBG_TIM3_STOP = 0x2; // TIM3 counter stopped when core is halted
    static constexpr uint32_t APB1_FZR1_DBG_TIM4_STOP = 0x4; // TIM4 counter stopped when core is halted
    static constexpr uint32_t APB1_FZR1_DBG_TIM5_STOP = 0x8; // TIM5 counter stopped when core is halted
    static constexpr uint32_t APB1_FZR1_DBG_TIMER6_STOP = 0x10; // Debug Timer 6 stopped when Core is halted
    static constexpr uint32_t APB1_FZR1_DBG_TIM7_STOP = 0x20; // TIM7 counter stopped when core is halted
    static constexpr uint32_t APB1_FZR1_DBG_RTC_STOP = 0x400; // Debug RTC stopped when Core is halted
    static constexpr uint32_t APB1_FZR1_DBG_WWDG_STOP = 0x800; // Debug Window Wachdog stopped when Core is halted
    static constexpr uint32_t APB1_FZR1_DBG_IWDG_STOP = 0x1000; // Debug Independent Wachdog stopped when Core is halted
    static constexpr uint32_t APB1_FZR1_DBG_I2C1_STOP = 0x200000; // I2C1 SMBUS timeout mode stopped when core is halted
    static constexpr uint32_t APB1_FZR1_DBG_I2C2_STOP = 0x400000; // I2C2 SMBUS timeout mode stopped when core is halted
    static constexpr uint32_t APB1_FZR1_DBG_I2C3_STOP = 0x800000; // I2C3 SMBUS timeout counter stopped when core is halted
    static constexpr uint32_t APB1_FZR1_DBG_CAN_STOP = 0x2000000; // bxCAN stopped when core is halted
    static constexpr uint32_t APB1_FZR1_DBG_LPTIMER_STOP = 0x80000000; // LPTIM1 counter stopped when core is halted

    static constexpr uint32_t APB1_FZR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1_FZR2_DBG_LPTIM2_STOP = 0x20; // LPTIM2 counter stopped when core is halted

    static constexpr uint32_t APB2_FZR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2_FZR_DBG_TIM1_STOP = 0x800; // TIM1 counter stopped when core is halted
    static constexpr uint32_t APB2_FZR_DBG_TIM8_STOP = 0x2000; // TIM8 counter stopped when core is halted
    static constexpr uint32_t APB2_FZR_DBG_TIM15_STOP = 0x10000; // TIM15 counter stopped when core is halted
    static constexpr uint32_t APB2_FZR_DBG_TIM16_STOP = 0x20000; // TIM16 counter stopped when core is halted
    static constexpr uint32_t APB2_FZR_DBG_TIM17_STOP = 0x40000; // TIM17 counter stopped when core is halted
};

template<>
struct peripheral_t<STM32L412, DBGMCU>
{
    using T = stm32l412_dbgmcu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4x1, DBGMCU>
{
    using T = stm32l412_dbgmcu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4x2, DBGMCU>
{
    using T = stm32l412_dbgmcu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4x3, DBGMCU>
{
    using T = stm32l412_dbgmcu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L476, DBGMCU>
{
    using T = stm32l476_dbgmcu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L496, DBGMCU>
{
    using T = stm32l476_dbgmcu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4x5, DBGMCU>
{
    using T = stm32l476_dbgmcu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4x6, DBGMCU>
{
    using T = stm32l476_dbgmcu_t;
    static T& V;
};

using dbgmcu_t = peripheral_t<svd, DBGMCU>;

template<int INST> struct dbgmcu_traits {};
