#pragma once

////
//
//      STM32L1 DBGMCU peripherals
//
////

////
//
//      debug support
//
////

struct stm32l100_dbgmcu_t
{
    volatile uint32_t IDCODE;  // [read-only] DBGMCU_IDCODE
    volatile uint32_t CR;      // [read-write] Debug MCU configuration register
    volatile uint32_t APB1_FZ; // [read-write] Debug MCU APB1 freeze register1
    volatile uint32_t APB2_FZ; // [read-write] Debug MCU APB1 freeze register 2

    static constexpr uint32_t IDCODE_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IDCODE_DEV_ID =   // Device identifier
        bit_field_t<0, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IDCODE_REV_ID =   // Revision identifie
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t CR_RESET_VALUE = 0x0;
    static constexpr uint32_t CR_DBG_SLEEP = 0x1;   // Debug Sleep mode
    static constexpr uint32_t CR_DBG_STOP = 0x2;    // Debug Stop mode
    static constexpr uint32_t CR_DBG_STANDBY = 0x4; // Debug Standby mode
    static constexpr uint32_t CR_TRACE_IOEN = 0x20; // Trace pin assignment control
    template<uint32_t X>
    static constexpr uint32_t CR_TRACE_MODE =       // Trace pin assignment control
        bit_field_t<6, 0x3>::value<X>();

    static constexpr uint32_t APB1_FZ_RESET_VALUE = 0x0;
    static constexpr uint32_t APB1_FZ_DBG_TIM2_STOP = 0x1;               // TIM2 counter stopped when core is halted
    static constexpr uint32_t APB1_FZ_DBG_TIM3_STOP = 0x2;               // TIM3 counter stopped when core is halted
    static constexpr uint32_t APB1_FZ_DBG_TIM4_STOP = 0x4;               // TIM4 counter stopped when core is halted
    static constexpr uint32_t APB1_FZ_DBG_TIM5_STOP = 0x8;               // TIM5 counter stopped when core is halted
    static constexpr uint32_t APB1_FZ_DBG_TIM6_STOP = 0x10;              // TIM6 counter stopped when core is halted
    static constexpr uint32_t APB1_FZ_DBG_TIM7_STOP = 0x20;              // TIM7 counter stopped when core is halted
    static constexpr uint32_t APB1_FZ_DBG_RTC_STOP = 0x400;              // Debug RTC stopped when core is halted
    static constexpr uint32_t APB1_FZ_DBG_WWDG_STOP = 0x800;             // Debug window watchdog stopped when core is halted
    static constexpr uint32_t APB1_FZ_DBG_IWDG_STOP = 0x1000;            // Debug independent watchdog stopped when core is halted
    static constexpr uint32_t APB1_FZ_DBG_I2C1_SMBUS_TIMEOUT = 0x200000; // SMBUS timeout mode stopped when core is halted
    static constexpr uint32_t APB1_FZ_DBG_I2C2_SMBUS_TIMEOUT = 0x400000; // SMBUS timeout mode stopped when core is halted

    static constexpr uint32_t APB2_FZ_RESET_VALUE = 0x0;
    static constexpr uint32_t APB2_FZ_DBG_TIM9_STOP = 0x4;   // TIM counter stopped when core is halted
    static constexpr uint32_t APB2_FZ_DBG_TIM10_STOP = 0x8;  // TIM counter stopped when core is halted
    static constexpr uint32_t APB2_FZ_DBG_TIM11_STOP = 0x10; // TIM counter stopped when core is halted
};


template<>
struct peripheral_t<STM32L100, DBGMCU>
{
    typedef stm32l100_dbgmcu_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L151, DBGMCU>
{
    typedef stm32l100_dbgmcu_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L152, DBGMCU>
{
    typedef stm32l100_dbgmcu_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L162, DBGMCU>
{
    typedef stm32l100_dbgmcu_t T;
    static T& V;
};

using dbgmcu_t = peripheral_t<mcu_svd, DBGMCU>;

