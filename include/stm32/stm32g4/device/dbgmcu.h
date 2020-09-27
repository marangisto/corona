#pragma once

////
//
//      STM32G4 DBGMCU peripherals
//
///

// DBGMCU: Debug support

struct stm32g431xx_dbgmcu_t
{
    volatile uint32_t IDCODE; // MCU Device ID Code Register
    volatile uint32_t CR; // Debug MCU Configuration Register
    volatile uint32_t APB1L_FZ; // APB Low Freeze Register 1
    volatile uint32_t APB1H_FZ; // APB Low Freeze Register 2
    volatile uint32_t APB2_FZ; // APB High Freeze Register

    static constexpr uint32_t IDCODE_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> IDCODE_DEV_ID; // Device Identifier
    typedef bit_field_t<16, 0xffff> IDCODE_REV_ID; // Revision Identifier

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_DBG_SLEEP = 0x1; // Debug Sleep Mode
    static constexpr uint32_t CR_DBG_STOP = 0x2; // Debug Stop Mode
    static constexpr uint32_t CR_DBG_STANDBY = 0x4; // Debug Standby Mode
    static constexpr uint32_t CR_TRACE_IOEN = 0x20; // Trace pin assignment control
    typedef bit_field_t<6, 0x3> CR_TRACE_MODE; // Trace pin assignment control

    static constexpr uint32_t APB1L_FZ_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1L_FZ_DBG_TIMER2_STOP = 0x1; // Debug Timer 2 stopped when Core is halted
    static constexpr uint32_t APB1L_FZ_DBG_TIM3_STOP = 0x2; // TIM3 counter stopped when core is halted
    static constexpr uint32_t APB1L_FZ_DBG_TIM4_STOP = 0x4; // TIM4 counter stopped when core is halted
    static constexpr uint32_t APB1L_FZ_DBG_TIM5_STOP = 0x8; // TIM5 counter stopped when core is halted
    static constexpr uint32_t APB1L_FZ_DBG_TIMER6_STOP = 0x10; // Debug Timer 6 stopped when Core is halted
    static constexpr uint32_t APB1L_FZ_DBG_TIM7_STOP = 0x20; // TIM7 counter stopped when core is halted
    static constexpr uint32_t APB1L_FZ_DBG_RTC_STOP = 0x400; // Debug RTC stopped when Core is halted
    static constexpr uint32_t APB1L_FZ_DBG_WWDG_STOP = 0x800; // Debug Window Wachdog stopped when Core is halted
    static constexpr uint32_t APB1L_FZ_DBG_IWDG_STOP = 0x1000; // Debug Independent Wachdog stopped when Core is halted
    static constexpr uint32_t APB1L_FZ_DBG_I2C1_STOP = 0x200000; // I2C1 SMBUS timeout mode stopped when core is halted
    static constexpr uint32_t APB1L_FZ_DBG_I2C2_STOP = 0x400000; // I2C2 SMBUS timeout mode stopped when core is halted
    static constexpr uint32_t APB1L_FZ_DBG_I2C3_STOP = 0x40000000; // I2C3 SMBUS timeout mode stopped when core is halted
    static constexpr uint32_t APB1L_FZ_DBG_LPTIMER_STOP = 0x80000000; // LPTIM1 counter stopped when core is halted

    static constexpr uint32_t APB1H_FZ_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1H_FZ_DBG_I2C4_STOP = 0x2; // DBG_I2C4_STOP

    static constexpr uint32_t APB2_FZ_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2_FZ_DBG_TIM1_STOP = 0x800; // TIM1 counter stopped when core is halted
    static constexpr uint32_t APB2_FZ_DBG_TIM8_STOP = 0x2000; // TIM8 counter stopped when core is halted
    static constexpr uint32_t APB2_FZ_DBG_TIM15_STOP = 0x10000; // TIM15 counter stopped when core is halted
    static constexpr uint32_t APB2_FZ_DBG_TIM16_STOP = 0x20000; // TIM16 counter stopped when core is halted
    static constexpr uint32_t APB2_FZ_DBG_TIM17_STOP = 0x40000; // TIM17 counter stopped when core is halted
    static constexpr uint32_t APB2_FZ_DBG_TIM20_STOP = 0x100000; // TIM20counter stopped when core is halted
    static constexpr uint32_t APB2_FZ_DBG_HRTIM0_STOP = 0x4000000; // DBG_HRTIM0_STOP
    static constexpr uint32_t APB2_FZ_DBG_HRTIM1_STOP = 0x8000000; // DBG_HRTIM0_STOP
    static constexpr uint32_t APB2_FZ_DBG_HRTIM2_STOP = 0x10000000; // DBG_HRTIM0_STOP
    static constexpr uint32_t APB2_FZ_DBG_HRTIM3_STOP = 0x20000000; // DBG_HRTIM0_STOP
};

template<>
struct peripheral_t<STM32G431xx, DBGMCU>
{
    static constexpr periph_t P = DBGMCU;
    using T = stm32g431xx_dbgmcu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G441xx, DBGMCU>
{
    static constexpr periph_t P = DBGMCU;
    using T = stm32g431xx_dbgmcu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G471xx, DBGMCU>
{
    static constexpr periph_t P = DBGMCU;
    using T = stm32g431xx_dbgmcu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G473xx, DBGMCU>
{
    static constexpr periph_t P = DBGMCU;
    using T = stm32g431xx_dbgmcu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G474xx, DBGMCU>
{
    static constexpr periph_t P = DBGMCU;
    using T = stm32g431xx_dbgmcu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G483xx, DBGMCU>
{
    static constexpr periph_t P = DBGMCU;
    using T = stm32g431xx_dbgmcu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, DBGMCU>
{
    static constexpr periph_t P = DBGMCU;
    using T = stm32g431xx_dbgmcu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32GBK1CBT6, DBGMCU>
{
    static constexpr periph_t P = DBGMCU;
    using T = stm32g431xx_dbgmcu_t;
    static T& V;
};

using dbgmcu_t = peripheral_t<svd, DBGMCU>;
