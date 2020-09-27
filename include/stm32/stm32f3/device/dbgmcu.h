#pragma once

////
//
//      STM32F3 DBGMCU peripherals
//
///

// DBGMCU: Debug support

struct stm32f301_dbgmcu_t
{
    volatile uint32_t IDCODE; // MCU Device ID Code Register
    volatile uint32_t CR; // Debug MCU Configuration Register
    volatile uint32_t APB1FZ; // APB Low Freeze Register
    volatile uint32_t APB2FZ; // APB High Freeze Register

    static constexpr uint32_t IDCODE_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> IDCODE_DEV_ID; // Device Identifier
    typedef bit_field_t<16, 0xffff> IDCODE_REV_ID; // Revision Identifier

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_DBG_SLEEP = 0x1; // Debug Sleep mode
    static constexpr uint32_t CR_DBG_STOP = 0x2; // Debug Stop Mode
    static constexpr uint32_t CR_DBG_STANDBY = 0x4; // Debug Standby Mode
    static constexpr uint32_t CR_TRACE_IOEN = 0x20; // Trace pin assignment control
    typedef bit_field_t<6, 0x3> CR_TRACE_MODE; // Trace pin assignment control

    static constexpr uint32_t APB1FZ_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1FZ_DBG_TIM2_STOP = 0x1; // Debug Timer 2 stopped when Core is halted
    static constexpr uint32_t APB1FZ_DBG_TIM3_STOP = 0x2; // Debug Timer 3 stopped when Core is halted
    static constexpr uint32_t APB1FZ_DBG_TIM4_STOP = 0x4; // Debug Timer 4 stopped when Core is halted
    static constexpr uint32_t APB1FZ_DBG_TIM5_STOP = 0x8; // Debug Timer 5 stopped when Core is halted
    static constexpr uint32_t APB1FZ_DBG_TIM6_STOP = 0x10; // Debug Timer 6 stopped when Core is halted
    static constexpr uint32_t APB1FZ_DBG_TIM7_STOP = 0x20; // Debug Timer 7 stopped when Core is halted
    static constexpr uint32_t APB1FZ_DBG_TIM12_STOP = 0x40; // Debug Timer 12 stopped when Core is halted
    static constexpr uint32_t APB1FZ_DBG_TIM13_STOP = 0x80; // Debug Timer 13 stopped when Core is halted
    static constexpr uint32_t APB1FZ_DBG_TIMER14_STOP = 0x100; // Debug Timer 14 stopped when Core is halted
    static constexpr uint32_t APB1FZ_DBG_TIM18_STOP = 0x200; // Debug Timer 18 stopped when Core is halted
    static constexpr uint32_t APB1FZ_DBG_RTC_STOP = 0x400; // Debug RTC stopped when Core is halted
    static constexpr uint32_t APB1FZ_DBG_WWDG_STOP = 0x800; // Debug Window Wachdog stopped when Core is halted
    static constexpr uint32_t APB1FZ_DBG_IWDG_STOP = 0x1000; // Debug Independent Wachdog stopped when Core is halted
    static constexpr uint32_t APB1FZ_I2C1_SMBUS_TIMEOUT = 0x200000; // SMBUS timeout mode stopped when Core is halted
    static constexpr uint32_t APB1FZ_I2C2_SMBUS_TIMEOUT = 0x400000; // SMBUS timeout mode stopped when Core is halted
    static constexpr uint32_t APB1FZ_DBG_CAN_STOP = 0x2000000; // Debug CAN stopped when core is halted

    static constexpr uint32_t APB2FZ_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2FZ_DBG_TIM15_STOP = 0x4; // Debug Timer 15 stopped when Core is halted
    static constexpr uint32_t APB2FZ_DBG_TIM16_STOP = 0x8; // Debug Timer 16 stopped when Core is halted
    static constexpr uint32_t APB2FZ_DBG_TIM17_STO = 0x10; // Debug Timer 17 stopped when Core is halted
    static constexpr uint32_t APB2FZ_DBG_TIM19_STOP = 0x20; // Debug Timer 19 stopped when Core is halted
};

template<>
struct peripheral_t<STM32F301, DBGMCU>
{
    static constexpr periph_t P = DBGMCU;
    using T = stm32f301_dbgmcu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F302, DBGMCU>
{
    static constexpr periph_t P = DBGMCU;
    using T = stm32f301_dbgmcu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F303, DBGMCU>
{
    static constexpr periph_t P = DBGMCU;
    using T = stm32f301_dbgmcu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F373, DBGMCU>
{
    static constexpr periph_t P = DBGMCU;
    using T = stm32f301_dbgmcu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F3x4, DBGMCU>
{
    static constexpr periph_t P = DBGMCU;
    using T = stm32f301_dbgmcu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F3x8, DBGMCU>
{
    static constexpr periph_t P = DBGMCU;
    using T = stm32f301_dbgmcu_t;
    static T& V;
};

using dbgmcu_t = peripheral_t<svd, DBGMCU>;

template<int INST> struct dbgmcu_traits {};

template<> struct dbgmcu_traits<0>
{
    using dbgmcu = dbgmcu_t;

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
};
