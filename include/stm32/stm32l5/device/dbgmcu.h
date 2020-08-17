#pragma once

////
//
//      STM32L5 DBGMCU peripherals
//
///

// DBGMCU: MCU debug component

struct stm32l552_dbgmcu_t
{
    volatile uint32_t IDCODE; // DBGMCU_IDCODE
    volatile uint32_t CR; // Debug MCU configuration register
    volatile uint32_t APB1LFZR; // Debug MCU APB1 freeze register1
    volatile uint32_t APB1HFZR; // Debug MCU APB1 freeze register 2
    volatile uint32_t APB2FZR; // Debug MCU APB2 freeze register

    static constexpr uint32_t IDCODE_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> IDCODE_DEV_ID; // Device identifier
    typedef bit_field_t<16, 0xffff> IDCODE_REV_ID; // Revision identifie

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_DBG_STOP = 0x2; // Debug Stop mode
    static constexpr uint32_t CR_DBG_STANDBY = 0x4; // Debug Standby mode
    static constexpr uint32_t CR_TRACE_IOEN = 0x10; // Trace pin assignment control
    typedef bit_field_t<6, 0x3> CR_TRACE_MODE; // Trace pin assignment control
    static constexpr uint32_t CR_TRACE_EN = 0x20; // trace port and clock enable

    static constexpr uint32_t APB1LFZR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1LFZR_DBG_TIM2_STOP = 0x1; // TIM2 counter stopped when core is halted
    static constexpr uint32_t APB1LFZR_DBG_TIM6_STOP = 0x10; // TIM6 counter stopped when core is halted
    static constexpr uint32_t APB1LFZR_DBG_TIM7_STOP = 0x20; // TIM7 counter stopped when core is halted
    static constexpr uint32_t APB1LFZR_DBG_RTC_STOP = 0x400; // RTC counter stopped when core is halted
    static constexpr uint32_t APB1LFZR_DBG_WWDG_STOP = 0x800; // Window watchdog counter stopped when core is halted
    static constexpr uint32_t APB1LFZR_DBG_IWDG_STOP = 0x1000; // Independent watchdog counter stopped when core is halted
    static constexpr uint32_t APB1LFZR_DBG_I2C1_STOP = 0x200000; // I2C1 SMBUS timeout counter stopped when core is halted
    static constexpr uint32_t APB1LFZR_DBG_I2C2_STOP = 0x400000; // I2C2 SMBUS timeout counter stopped when core is halted
    static constexpr uint32_t APB1LFZR_DBG_I2C3_STOP = 0x800000; // I2C3 SMBUS timeout counter stopped when core is halted
    static constexpr uint32_t APB1LFZR_DBG_LPTIM1_STOP = 0x80000000; // LPTIM1 counter stopped when core is halted
    static constexpr uint32_t APB1LFZR_DBG_TIM3_STOP = 0x2; // TIM3 stop in debug
    static constexpr uint32_t APB1LFZR_DBG_TIM4_STOP = 0x4; // TIM4 stop in debug
    static constexpr uint32_t APB1LFZR_DBG_TIM5_STOP = 0x8; // TIM5 stop in debug

    static constexpr uint32_t APB1HFZR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1HFZR_DBG_LPTIM2_STOP = 0x20; // LPTIM2 counter stopped when core is halted
    static constexpr uint32_t APB1HFZR_DBG_I2C4_STOP = 0x2; // I2C4 stop in debug
    static constexpr uint32_t APB1HFZR_DBG_LPTIM3_STOP = 0x40; // LPTIM3 stop in debug

    static constexpr uint32_t APB2FZR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2FZR_DBG_TIM1_STOP = 0x800; // TIM1 counter stopped when core is halted
    static constexpr uint32_t APB2FZR_DBG_TIM15_STOP = 0x10000; // TIM15 counter stopped when core is halted
    static constexpr uint32_t APB2FZR_DBG_TIM16_STOP = 0x20000; // TIM16 counter stopped when core is halted
    static constexpr uint32_t APB2FZR_DBG_TIM8_STOP = 0x2000; // TIM8 stop in debug
    static constexpr uint32_t APB2FZR_DBG_TIM17_STOP = 0x40000; // DBG_TIM17_STOP
};

template<>
struct peripheral_t<STM32L552, DBGMCU>
{
    using T = stm32l552_dbgmcu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, DBGMCU>
{
    using T = stm32l552_dbgmcu_t;
    static T& V;
};

using dbgmcu_t = peripheral_t<svd, DBGMCU>;
