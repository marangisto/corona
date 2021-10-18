#pragma once

////
//
//      STM32WL DBGMCU peripherals
//
///

// DBGMCU: Microcontroller Debug Unit

struct stm32wl5x_cm4_dbgmcu_t
{
    volatile uint32_t IDCODER; // DBGMCU Identity Code Register
    volatile uint32_t CR; // DBGMCU Configuration Register
    reserved_t<0xd> _0x8;
    volatile uint32_t APB1FZR1; // DBGMCU CPU1 APB1 Peripheral Freeze Register 1
    volatile uint32_t C2APB1FZR1; // DBGMCU CPU2 APB1 Peripheral Freeze Register 1 [dual core device
    volatile uint32_t APB1FZR2; // DBGMCU CPU1 APB1 Peripheral Freeze Register 2
    volatile uint32_t C2APB1FZR2; // DBGMCU CPU2 APB1 Peripheral Freeze Register 2 [dual core device
    volatile uint32_t APB2FZR; // DBGMCU CPU1 APB2 Peripheral Freeze Register
    volatile uint32_t C2APB2FZR; // DBGMCU CPU2 APB2 Peripheral Freeze Register [dual core device

    static constexpr uint32_t IDCODER_RESET_VALUE = 0x10006497; // Reset value
    typedef bit_field_t<0, 0xfff> IDCODER_DEV_ID; // Device ID
    typedef bit_field_t<16, 0xffff> IDCODER_REV_ID; // Revision

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_DBG_SLEEP = 0x1; // Allow debug in SLEEP mode
    static constexpr uint32_t CR_DBG_STOP = 0x2; // Allow debug in STOP mode
    static constexpr uint32_t CR_DBG_STANDBY = 0x4; // Allow debug in STANDBY mode


    static constexpr uint32_t APB1FZR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1FZR1_DBG_TIM2_STOP = 0x1; // TIM2 stop in CPU1 debug
    static constexpr uint32_t APB1FZR1_DBG_RTC_STOP = 0x400; // RTC stop in CPU1 debug
    static constexpr uint32_t APB1FZR1_DBG_WWDG_STOP = 0x800; // WWDG stop in CPU1 debug
    static constexpr uint32_t APB1FZR1_DBG_IWDG_STOP = 0x1000; // IWDG stop in CPU1 debug
    static constexpr uint32_t APB1FZR1_DBG_I2C1_STOP = 0x200000; // I2C1 SMBUS timeout stop in CPU1 debug
    static constexpr uint32_t APB1FZR1_DBG_I2C2_STOP = 0x400000; // I2C2 SMBUS timeout stop in CPU1 debug
    static constexpr uint32_t APB1FZR1_DBG_I2C3_STOP = 0x800000; // I2C3 SMBUS timeout stop in CPU1 debug
    static constexpr uint32_t APB1FZR1_DBG_LPTIM1_STOP = 0x80000000; // LPTIM1 stop in CPU1 debug

    static constexpr uint32_t C2APB1FZR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C2APB1FZR1_DBG_TIM2_STOP = 0x1; // DBG_TIM2_STOP
    static constexpr uint32_t C2APB1FZR1_DBG_RTC_STOP = 0x400; // DBG_RTC_STOP
    static constexpr uint32_t C2APB1FZR1_DBG_IWDG_STOP = 0x1000; // DBG_IWDG_STOP
    static constexpr uint32_t C2APB1FZR1_DBG_I2C1_STOP = 0x200000; // DBG_I2C1_STOP
    static constexpr uint32_t C2APB1FZR1_DBG_I2C2_STOP = 0x400000; // DBG_I2C2_STOP
    static constexpr uint32_t C2APB1FZR1_DBG_I2C3_STOP = 0x800000; // DBG_I2C3_STOP
    static constexpr uint32_t C2APB1FZR1_DBG_LPTIM1_STOP = 0x80000000; // DBG_LPTIM1_STOP

    static constexpr uint32_t APB1FZR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1FZR2_DBG_LPTIM2_STOP = 0x20; // DBG_LPTIM2_STOP
    static constexpr uint32_t APB1FZR2_DBG_LPTIM3_STOP = 0x40; // DBG_LPTIM3_STOP

    static constexpr uint32_t C2APB1FZR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C2APB1FZR2_DBG_LPTIM2_STOP = 0x20; // DBG_LPTIM2_STOP
    static constexpr uint32_t C2APB1FZR2_DBG_LPTIM3_STOP = 0x40; // DBG_LPTIM3_STOP

    static constexpr uint32_t APB2FZR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2FZR_DBG_TIM1_STOP = 0x800; // DBG_TIM1_STOP
    static constexpr uint32_t APB2FZR_DBG_TIM16_STOP = 0x20000; // DBG_TIM16_STOP
    static constexpr uint32_t APB2FZR_DBG_TIM17_STOP = 0x40000; // DBG_TIM17_STOP

    static constexpr uint32_t C2APB2FZR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t C2APB2FZR_DBG_TIM1_STOP = 0x800; // DBG_TIM1_STOP
    static constexpr uint32_t C2APB2FZR_DBG_TIM16_STOP = 0x20000; // DBG_TIM16_STOP
    static constexpr uint32_t C2APB2FZR_DBG_TIM17_STOP = 0x40000; // DBG_TIM17_STOP
};

// DBGMCU: Microcontroller Debug Unit

struct stm32wle5_cm4_dbgmcu_t
{
    volatile uint32_t IDCODER; // DBGMCU Identity Code Register
    volatile uint32_t CR; // DBGMCU Configuration Register
    reserved_t<0xd> _0x8;
    volatile uint32_t APB1FZR1; // DBGMCU CPU1 APB1 Peripheral Freeze Register 1
    reserved_t<0x1> _0x40;
    volatile uint32_t APB1FZR2; // DBGMCU CPU1 APB1 Peripheral Freeze Register 2
    reserved_t<0x1> _0x48;
    volatile uint32_t APB2FZR; // DBGMCU CPU1 APB2 Peripheral Freeze Register

    static constexpr uint32_t IDCODER_RESET_VALUE = 0x10006497; // Reset value
    typedef bit_field_t<0, 0xfff> IDCODER_DEV_ID; // Device ID
    typedef bit_field_t<16, 0xffff> IDCODER_REV_ID; // Revision

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_DBG_SLEEP = 0x1; // Allow debug in SLEEP mode
    static constexpr uint32_t CR_DBG_STOP = 0x2; // Allow debug in STOP mode
    static constexpr uint32_t CR_DBG_STANDBY = 0x4; // Allow debug in STANDBY mode


    static constexpr uint32_t APB1FZR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1FZR1_DBG_TIM2_STOP = 0x1; // TIM2 stop in CPU1 debug
    static constexpr uint32_t APB1FZR1_DBG_RTC_STOP = 0x400; // RTC stop in CPU1 debug
    static constexpr uint32_t APB1FZR1_DBG_WWDG_STOP = 0x800; // WWDG stop in CPU1 debug
    static constexpr uint32_t APB1FZR1_DBG_IWDG_STOP = 0x1000; // IWDG stop in CPU1 debug
    static constexpr uint32_t APB1FZR1_DBG_I2C1_STOP = 0x200000; // I2C1 SMBUS timeout stop in CPU1 debug
    static constexpr uint32_t APB1FZR1_DBG_I2C2_STOP = 0x400000; // I2C2 SMBUS timeout stop in CPU1 debug
    static constexpr uint32_t APB1FZR1_DBG_I2C3_STOP = 0x800000; // I2C3 SMBUS timeout stop in CPU1 debug
    static constexpr uint32_t APB1FZR1_DBG_LPTIM1_STOP = 0x80000000; // LPTIM1 stop in CPU1 debug


    static constexpr uint32_t APB1FZR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1FZR2_DBG_LPTIM2_STOP = 0x20; // DBG_LPTIM2_STOP
    static constexpr uint32_t APB1FZR2_DBG_LPTIM3_STOP = 0x40; // DBG_LPTIM3_STOP


    static constexpr uint32_t APB2FZR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2FZR_DBG_TIM1_STOP = 0x800; // DBG_TIM1_STOP
    static constexpr uint32_t APB2FZR_DBG_TIM16_STOP = 0x20000; // DBG_TIM16_STOP
    static constexpr uint32_t APB2FZR_DBG_TIM17_STOP = 0x40000; // DBG_TIM17_STOP
};

template<>
struct peripheral_t<STM32WL5x_CM4, DBGMCU>
{
    static constexpr periph_t P = DBGMCU;
    using T = stm32wl5x_cm4_dbgmcu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WLE5_CM4, DBGMCU>
{
    static constexpr periph_t P = DBGMCU;
    using T = stm32wle5_cm4_dbgmcu_t;
    static T& V;
};

using dbgmcu_t = peripheral_t<svd, DBGMCU>;
