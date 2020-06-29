#pragma once

////
//
//      STM32F1 DBG peripherals
//
///

// DBG: Debug support

struct stm32f100_dbg_t
{
    volatile uint32_t IDCODE; // DBGMCU_IDCODE
    volatile uint32_t CR; // DBGMCU_CR

    static constexpr uint32_t IDCODE_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> IDCODE_DEV_ID; // DEV_ID
    typedef bit_field_t<16, 0xffff> IDCODE_REV_ID; // REV_ID

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_DBG_SLEEP = 0x1; // DBG_SLEEP
    static constexpr uint32_t CR_DBG_STOP = 0x2; // DBG_STOP
    static constexpr uint32_t CR_DBG_STANDBY = 0x4; // DBG_STANDBY
    static constexpr uint32_t CR_TRACE_IOEN = 0x20; // TRACE_IOEN
    typedef bit_field_t<6, 0x3> CR_TRACE_MODE; // TRACE_MODE
    static constexpr uint32_t CR_DBG_IWDG_STOP = 0x100; // DBG_IWDG_STOP
    static constexpr uint32_t CR_DBG_WWDG_STOP = 0x200; // DBG_WWDG_STOP
    static constexpr uint32_t CR_DBG_TIM1_STOP = 0x400; // DBG_TIM1_STOP
    static constexpr uint32_t CR_DBG_TIM2_STOP = 0x800; // DBG_TIM2_STOP
    static constexpr uint32_t CR_DBG_TIM3_STOP = 0x1000; // DBG_TIM3_STOP
    static constexpr uint32_t CR_DBG_TIM4_STOP = 0x2000; // DBG_TIM4_STOP
    static constexpr uint32_t CR_DBG_I2C1_SMBUS_TIMEOUT = 0x8000; // DBG_I2C1_SMBUS_TIMEOUT
    static constexpr uint32_t CR_DBG_I2C2_SMBUS_TIMEOUT = 0x10000; // DBG_I2C2_SMBUS_TIMEOUT
    static constexpr uint32_t CR_DBG_TIM5_STOP = 0x40000; // DBG_TIM5_STOP
    static constexpr uint32_t CR_DBG_TIM6_STOP = 0x80000; // DBG_TIM6_STOP
    static constexpr uint32_t CR_DBG_TIM7_STOP = 0x100000; // DBG_TIM7_STOP
    static constexpr uint32_t CR_DBG_TIM15_STOP = 0x400000; // DBG_TIM15_STOP
    static constexpr uint32_t CR_DBG_TIM16_STOP = 0x800000; // DBG_TIM16_STOP
    static constexpr uint32_t CR_DBG_TIM17_STOP = 0x1000000; // DBG_TIM17_STOP
    static constexpr uint32_t CR_DBG_TIM12_STOP = 0x2000000; // DBG_TIM12_STOP
    static constexpr uint32_t CR_DBG_TIM13_STOP = 0x4000000; // DBG_TIM13_STOP
    static constexpr uint32_t CR_DBG_TIM14_STOP = 0x8000000; // DBG_TIM14_STOP
};

// DBG: Debug support

struct stm32f102_dbg_t
{
    volatile uint32_t IDCODE; // DBGMCU_IDCODE
    volatile uint32_t CR; // DBGMCU_CR

    static constexpr uint32_t IDCODE_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> IDCODE_DEV_ID; // DEV_ID
    typedef bit_field_t<16, 0xffff> IDCODE_REV_ID; // REV_ID

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_DBG_SLEEP = 0x1; // DBG_SLEEP
    static constexpr uint32_t CR_DBG_STOP = 0x2; // DBG_STOP
    static constexpr uint32_t CR_DBG_STANDBY = 0x4; // DBG_STANDBY
    static constexpr uint32_t CR_TRACE_IOEN = 0x20; // TRACE_IOEN
    typedef bit_field_t<6, 0x3> CR_TRACE_MODE; // TRACE_MODE
    static constexpr uint32_t CR_DBG_IWDG_STOP = 0x100; // DBG_IWDG_STOP
    static constexpr uint32_t CR_DBG_WWDG_STOP = 0x200; // DBG_WWDG_STOP
    static constexpr uint32_t CR_DBG_TIM2_STOP = 0x800; // DBG_TIM2_STOP
    static constexpr uint32_t CR_DBG_TIM3_STOP = 0x1000; // DBG_TIM3_STOP
    static constexpr uint32_t CR_DBG_I2C1_SMBUS_TIMEOUT = 0x8000; // DBG_I2C1_SMBUS_TIMEOUT
};

// DBG: Debug support

struct stm32f103_dbg_t
{
    volatile uint32_t IDCODE; // DBGMCU_IDCODE
    volatile uint32_t CR; // DBGMCU_CR

    static constexpr uint32_t IDCODE_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> IDCODE_DEV_ID; // DEV_ID
    typedef bit_field_t<16, 0xffff> IDCODE_REV_ID; // REV_ID

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_DBG_SLEEP = 0x1; // DBG_SLEEP
    static constexpr uint32_t CR_DBG_STOP = 0x2; // DBG_STOP
    static constexpr uint32_t CR_DBG_STANDBY = 0x4; // DBG_STANDBY
    static constexpr uint32_t CR_TRACE_IOEN = 0x20; // TRACE_IOEN
    typedef bit_field_t<6, 0x3> CR_TRACE_MODE; // TRACE_MODE
    static constexpr uint32_t CR_DBG_IWDG_STOP = 0x100; // DBG_IWDG_STOP
    static constexpr uint32_t CR_DBG_WWDG_STOP = 0x200; // DBG_WWDG_STOP
    static constexpr uint32_t CR_DBG_TIM1_STOP = 0x400; // DBG_TIM1_STOP
    static constexpr uint32_t CR_DBG_TIM2_STOP = 0x800; // DBG_TIM2_STOP
    static constexpr uint32_t CR_DBG_TIM3_STOP = 0x1000; // DBG_TIM3_STOP
    static constexpr uint32_t CR_DBG_TIM4_STOP = 0x2000; // DBG_TIM4_STOP
    static constexpr uint32_t CR_DBG_CAN1_STOP = 0x4000; // DBG_CAN1_STOP
    static constexpr uint32_t CR_DBG_I2C1_SMBUS_TIMEOUT = 0x8000; // DBG_I2C1_SMBUS_TIMEOUT
    static constexpr uint32_t CR_DBG_I2C2_SMBUS_TIMEOUT = 0x10000; // DBG_I2C2_SMBUS_TIMEOUT
    static constexpr uint32_t CR_DBG_TIM8_STOP = 0x20000; // DBG_TIM8_STOP
    static constexpr uint32_t CR_DBG_TIM5_STOP = 0x40000; // DBG_TIM5_STOP
    static constexpr uint32_t CR_DBG_TIM6_STOP = 0x80000; // DBG_TIM6_STOP
    static constexpr uint32_t CR_DBG_TIM7_STOP = 0x100000; // DBG_TIM7_STOP
    static constexpr uint32_t CR_DBG_CAN2_STOP = 0x200000; // DBG_CAN2_STOP
};

// DBG: Debug support

struct stm32f107_dbg_t
{
    volatile uint32_t IDCODE; // DBGMCU_IDCODE
    volatile uint32_t CR; // DBGMCU_CR

    static constexpr uint32_t IDCODE_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> IDCODE_DEV_ID; // DEV_ID
    typedef bit_field_t<16, 0xffff> IDCODE_REV_ID; // REV_ID

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_DBG_SLEEP = 0x1; // DBG_SLEEP
    static constexpr uint32_t CR_DBG_STOP = 0x2; // DBG_STOP
    static constexpr uint32_t CR_DBG_STANDBY = 0x4; // DBG_STANDBY
    static constexpr uint32_t CR_TRACE_IOEN = 0x20; // TRACE_IOEN
    typedef bit_field_t<6, 0x3> CR_TRACE_MODE; // TRACE_MODE
    static constexpr uint32_t CR_DBG_IWDG_STOP = 0x100; // DBG_IWDG_STOP
    static constexpr uint32_t CR_DBG_WWDG_STOP = 0x200; // DBG_WWDG_STOP
    static constexpr uint32_t CR_DBG_TIM1_STOP = 0x400; // DBG_TIM1_STOP
    static constexpr uint32_t CR_DBG_TIM2_STOP = 0x800; // DBG_TIM2_STOP
    static constexpr uint32_t CR_DBG_TIM3_STOP = 0x1000; // DBG_TIM3_STOP
    static constexpr uint32_t CR_DBG_TIM4_STOP = 0x2000; // DBG_TIM4_STOP
    static constexpr uint32_t CR_DBG_CAN1_STOP = 0x4000; // DBG_CAN1_STOP
    static constexpr uint32_t CR_DBG_I2C1_SMBUS_TIMEOUT = 0x8000; // DBG_I2C1_SMBUS_TIMEOUT
    static constexpr uint32_t CR_DBG_I2C2_SMBUS_TIMEOUT = 0x10000; // DBG_I2C2_SMBUS_TIMEOUT
    static constexpr uint32_t CR_DBG_TIM5_STOP = 0x40000; // DBG_TIM5_STOP
    static constexpr uint32_t CR_DBG_TIM6_STOP = 0x80000; // DBG_TIM6_STOP
    static constexpr uint32_t CR_DBG_TIM7_STOP = 0x100000; // DBG_TIM7_STOP
    static constexpr uint32_t CR_DBG_CAN2_STOP = 0x200000; // DBG_CAN2_STOP
};

template<>
struct peripheral_t<STM32F100, DBG>
{
    using T = stm32f100_dbg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F101, DBG>
{
    using T = stm32f100_dbg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F102, DBG>
{
    using T = stm32f102_dbg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F103, DBG>
{
    using T = stm32f103_dbg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F107, DBG>
{
    using T = stm32f107_dbg_t;
    static T& V;
};

using dbg_t = peripheral_t<svd, DBG>;

template<int INST> struct dbg_traits {};
