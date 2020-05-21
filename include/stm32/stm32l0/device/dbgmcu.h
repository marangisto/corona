#pragma once

////
//
//      STM32L0 DBGMCU peripherals
//
////

////
//
//      Debug support
//
////

struct stm32l0x0_dbg_t
{
    volatile uint32_t IDCODE;  // [read-only] MCU Device ID Code Register
    volatile uint32_t CR;      // [read-write] Debug MCU Configuration Register
    volatile uint32_t APB1_FZ; // [read-write] APB Low Freeze Register
    volatile uint32_t APB2_FZ; // [read-write] APB High Freeze Register

    static constexpr uint32_t IDCODE_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IDCODE_DEV_ID =   // Device Identifier
        bit_field_t<0, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IDCODE_REV_ID =   // Revision Identifier
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t CR_RESET_VALUE = 0x0;
    static constexpr uint32_t CR_DBG_STOP = 0x2;    // Debug Stop Mode
    static constexpr uint32_t CR_DBG_STANDBY = 0x4; // Debug Standby Mode
    static constexpr uint32_t CR_DBG_SLEEP = 0x1;   // Debug Sleep Mode

    static constexpr uint32_t APB1_FZ_RESET_VALUE = 0x0;
    static constexpr uint32_t APB1_FZ_DBG_TIMER2_STOP = 0x1;         // Debug Timer 2 stopped when Core is halted
    static constexpr uint32_t APB1_FZ_DBG_TIMER6_STOP = 0x10;        // Debug Timer 6 stopped when Core is halted
    static constexpr uint32_t APB1_FZ_DBG_RTC_STOP = 0x400;          // Debug RTC stopped when Core is halted
    static constexpr uint32_t APB1_FZ_DBG_WWDG_STOP = 0x800;         // Debug Window Wachdog stopped when Core is halted
    static constexpr uint32_t APB1_FZ_DBG_IWDG_STOP = 0x1000;        // Debug Independent Wachdog stopped when Core is halted
    static constexpr uint32_t APB1_FZ_DBG_I2C1_STOP = 0x200000;      // I2C1 SMBUS timeout mode stopped when core is halted
    static constexpr uint32_t APB1_FZ_DBG_I2C2_STOP = 0x400000;      // I2C2 SMBUS timeout mode stopped when core is halted
    static constexpr uint32_t APB1_FZ_DBG_LPTIMER_STOP = 0x80000000; // LPTIM1 counter stopped when core is halted

    static constexpr uint32_t APB2_FZ_RESET_VALUE = 0x0;
    static constexpr uint32_t APB2_FZ_DBG_TIMER21_STOP = 0x4; // Debug Timer 21 stopped when Core is halted
    static constexpr uint32_t APB2_FZ_DBG_TIMER22_STO = 0x40; // Debug Timer 22 stopped when Core is halted
};


template<>
struct peripheral_t<STM32L0x0, DBG>
{
    typedef stm32l0x0_dbg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x1, DBG>
{
    typedef stm32l0x0_dbg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x2, DBGMCU>
{
    typedef stm32l0x0_dbg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x3, DBGMCU>
{
    typedef stm32l0x0_dbg_t T;
    static T& V;
};

using dbg_t = peripheral_t<mcu_svd, DBG>;
using dbgmcu_t = peripheral_t<mcu_svd, DBGMCU>;

