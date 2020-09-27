#pragma once

////
//
//      STM32WB DBGMCU peripherals
//
///

// DBGMCU: Debug support

struct stm32wb30_cm4_dbgmcu_t
{
    volatile uint32_t IDCODE; // MCU Device ID Code Register
    volatile uint32_t CR; // Debug MCU Configuration Register
    reserved_t<0xd> _0x8;
    volatile uint32_t APB1FZR1; // APB1 Low Freeze Register CPU1
    volatile uint32_t C2AP_B1FZR1; // APB1 Low Freeze Register CPU2
    volatile uint32_t APB1FZR2; // APB1 High Freeze Register CPU1
    volatile uint32_t C2APB1FZR2; // APB1 High Freeze Register CPU2
    volatile uint32_t APB2FZR; // APB2 Freeze Register CPU1

    static constexpr uint32_t IDCODE_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> IDCODE_DEV_ID; // Device Identifier
    typedef bit_field_t<16, 0xffff> IDCODE_REV_ID; // Revision Identifier

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_DBG_SLEEP = 0x1; // Debug Sleep Mode
    static constexpr uint32_t CR_DBG_STOP = 0x2; // Debug Stop Mode
    static constexpr uint32_t CR_DBG_STANDBY = 0x4; // Debug Standby Mode
    static constexpr uint32_t CR_TRACE_IOEN = 0x20; // Trace port and clock enable
    static constexpr uint32_t CR_TRGOEN = 0x10000000; // External trigger output enable


    static constexpr uint32_t APB1FZR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1FZR1_DBG_TIMER2_STOP = 0x1; // Debug Timer 2 stopped when Core is halted
    static constexpr uint32_t APB1FZR1_DBG_RTC_STOP = 0x400; // RTC counter stopped when core is halted
    static constexpr uint32_t APB1FZR1_DBG_WWDG_STOP = 0x800; // WWDG counter stopped when core is halted
    static constexpr uint32_t APB1FZR1_DBG_IWDG_STOP = 0x1000; // IWDG counter stopped when core is halted
    static constexpr uint32_t APB1FZR1_DBG_I2C1_STOP = 0x200000; // Debug I2C1 SMBUS timeout stopped when Core is halted
    static constexpr uint32_t APB1FZR1_DBG_I2C3_STOP = 0x800000; // Debug I2C3 SMBUS timeout stopped when core is halted
    static constexpr uint32_t APB1FZR1_DBG_LPTIM1_STOP = 0x80000000; // Debug LPTIM1 stopped when Core is halted

    static constexpr uint32_t C2AP_B1FZR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C2AP_B1FZR1_DBG_LPTIM2_STOP = 0x1; // LPTIM2 counter stopped when core is halted
    static constexpr uint32_t C2AP_B1FZR1_DBG_RTC_STOP = 0x400; // RTC counter stopped when core is halted
    static constexpr uint32_t C2AP_B1FZR1_DBG_IWDG_STOP = 0x1000; // IWDG stopped when core is halted
    static constexpr uint32_t C2AP_B1FZR1_DBG_I2C1_STOP = 0x200000; // I2C1 SMBUS timeout stopped when core is halted
    static constexpr uint32_t C2AP_B1FZR1_DBG_I2C3_STOP = 0x800000; // I2C3 SMBUS timeout stopped when core is halted
    static constexpr uint32_t C2AP_B1FZR1_DBG_LPTIM1_STOP = 0x80000000; // LPTIM1 counter stopped when core is halted

    static constexpr uint32_t APB1FZR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1FZR2_DBG_LPTIM2_STOP = 0x20; // LPTIM2 counter stopped when core is halted

    static constexpr uint32_t C2APB1FZR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C2APB1FZR2_DBG_LPTIM2_STOP = 0x20; // LPTIM2 counter stopped when core is halted

    static constexpr uint32_t APB2FZR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2FZR_DBG_TIM1_STOP = 0x800; // TIM1 counter stopped when core is halted
    static constexpr uint32_t APB2FZR_DBG_TIM16_STOP = 0x20000; // TIM16 counter stopped when core is halted
    static constexpr uint32_t APB2FZR_DBG_TIM17_STOP = 0x40000; // TIM17 counter stopped when core is halted
};

template<>
struct peripheral_t<STM32WB30_CM4, DBGMCU>
{
    static constexpr periph_t P = DBGMCU;
    using T = stm32wb30_cm4_dbgmcu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WB35_CM4, DBGMCU>
{
    static constexpr periph_t P = DBGMCU;
    using T = stm32wb30_cm4_dbgmcu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WB50_CM4, DBGMCU>
{
    static constexpr periph_t P = DBGMCU;
    using T = stm32wb30_cm4_dbgmcu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WB55_CM4, DBGMCU>
{
    static constexpr periph_t P = DBGMCU;
    using T = stm32wb30_cm4_dbgmcu_t;
    static T& V;
};

using dbgmcu_t = peripheral_t<svd, DBGMCU>;
