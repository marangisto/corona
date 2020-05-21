#pragma once

////
//
//      STM32F0 DBGMCU peripherals
//
////

////
//
//      Debug support
//
////

struct stm32f0x0_dbgmcu_t
{
    volatile uint32_t IDCODE;  // [read-only] MCU Device ID Code Register
    volatile uint32_t CR;      // [read-write] Debug MCU Configuration Register
    volatile uint32_t APB1_FZ; // [read-write] Debug MCU APB1 freeze register
    volatile uint32_t APB2_FZ; // [read-write] Debug MCU APB2 freeze register

    static constexpr uint32_t IDCODE_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IDCODE_DEV_ID =   // Device Identifier
        bit_field_t<0, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IDCODE_DIV_ID =   // Division Identifier
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IDCODE_REV_ID =   // Revision Identifier
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t CR_RESET_VALUE = 0x0;
    static constexpr uint32_t CR_DBG_STOP = 0x2;    // Debug Stop Mode
    static constexpr uint32_t CR_DBG_STANDBY = 0x4; // Debug Standby Mode

    static constexpr uint32_t APB1_FZ_RESET_VALUE = 0x0;
    static constexpr uint32_t APB1_FZ_DBG_TIM3_STOP = 0x2;               // TIM3 counter stopped when core is halted
    static constexpr uint32_t APB1_FZ_DBG_TIM6_STOP = 0x10;              // TIM6 counter stopped when core is halted
    static constexpr uint32_t APB1_FZ_DBG_TIM7_STOP = 0x20;              // TIM7 counter stopped when core is halted
    static constexpr uint32_t APB1_FZ_DBG_TIM14_STOP = 0x100;            // TIM14 counter stopped when core is halted
    static constexpr uint32_t APB1_FZ_DBG_WWDG_STOP = 0x800;             // Debug window watchdog stopped when core is halted
    static constexpr uint32_t APB1_FZ_DBG_IWDG_STOP = 0x1000;            // Debug independent watchdog stopped when core is halted
    static constexpr uint32_t APB1_FZ_DBG_I2C1_SMBUS_TIMEOUT = 0x200000; // SMBUS timeout mode stopped when core is halted

    static constexpr uint32_t APB2_FZ_RESET_VALUE = 0x0;
    static constexpr uint32_t APB2_FZ_DBG_TIM1_STOP = 0x800;    // TIM1 counter stopped when core is halted
    static constexpr uint32_t APB2_FZ_DBG_TIM15_STOP = 0x10000; // TIM15 counter stopped when core is halted
    static constexpr uint32_t APB2_FZ_DBG_TIM16_STOP = 0x20000; // TIM16 counter stopped when core is halted
    static constexpr uint32_t APB2_FZ_DBG_TIM17_STOP = 0x40000; // TIM17 counter stopped when core is halted
};


////
//
//      Debug support
//
////

struct stm32f0x1_dbgmcu_t
{
    volatile uint32_t IDCODE;  // [read-only] MCU Device ID Code Register
    volatile uint32_t CR;      // [read-write] Debug MCU Configuration Register
    volatile uint32_t APB1_FZ; // [read-write] Debug MCU APB1 freeze register
    volatile uint32_t APB2_FZ; // [read-write] Debug MCU APB2 freeze register

    static constexpr uint32_t IDCODE_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IDCODE_DEV_ID =   // Device Identifier
        bit_field_t<0, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IDCODE_DIV_ID =   // Division Identifier
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IDCODE_REV_ID =   // Revision Identifier
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t CR_RESET_VALUE = 0x0;
    static constexpr uint32_t CR_DBG_STOP = 0x2;    // Debug Stop Mode
    static constexpr uint32_t CR_DBG_STANDBY = 0x4; // Debug Standby Mode

    static constexpr uint32_t APB1_FZ_RESET_VALUE = 0x0;
    static constexpr uint32_t APB1_FZ_DBG_TIM2_STOP = 0x1;                             // TIM2 counter stopped when core is halted
    static constexpr uint32_t APB1_FZ_DBG_TIM3_STOP = 0x2;                             // TIM3 counter stopped when core is halted
    static constexpr uint32_t APB1_FZ_TIM3_counter_stopped_when_core_is_halted = 0x10; // TIM6 counter stopped when core is halted
    static constexpr uint32_t APB1_FZ_DBG_TIM7_STOP = 0x20;                            // TIM7 counter stopped when core is halted
    static constexpr uint32_t APB1_FZ_DBG_TIM14_STOP = 0x100;                          // TIM14 counter stopped when core is halted
    static constexpr uint32_t APB1_FZ_DBG_RTC_STOP = 0x400;                            // Debug RTC stopped when core is halted
    static constexpr uint32_t APB1_FZ_DBG_WWDG_STOP = 0x800;                           // Debug window watchdog stopped when core is halted
    static constexpr uint32_t APB1_FZ_DBG_IWDG_STOP = 0x1000;                          // Debug independent watchdog stopped when core is halted
    static constexpr uint32_t APB1_FZ_DBG_I2C1_SMBUS_TIMEOUT = 0x200000;               // SMBUS timeout mode stopped when core is halted
    static constexpr uint32_t APB1_FZ_DBG_CAN_STOP = 0x2000000;                        // CAN stopped when core is halted

    static constexpr uint32_t APB2_FZ_RESET_VALUE = 0x0;
    static constexpr uint32_t APB2_FZ_DBG_TIM1_STOP = 0x800;    // TIM1 counter stopped when core is halted
    static constexpr uint32_t APB2_FZ_DBG_TIM15_STOP = 0x10000; // TIM15 counter stopped when core is halted
    static constexpr uint32_t APB2_FZ_DBG_TIM16_STOP = 0x20000; // TIM16 counter stopped when core is halted
    static constexpr uint32_t APB2_FZ_DBG_TIM17_STOP = 0x40000; // TIM17 counter stopped when core is halted
};


////
//
//      Debug support
//
////

struct stm32f0x2_dbgmcu_t
{
    volatile uint32_t IDCODE;  // [read-only] MCU Device ID Code Register
    volatile uint32_t CR;      // [read-write] Debug MCU Configuration Register
    volatile uint32_t APB1_FZ; // [read-write] Debug MCU APB1 freeze register
    volatile uint32_t APB2_FZ; // [read-write] Debug MCU APB2 freeze register

    static constexpr uint32_t IDCODE_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IDCODE_DEV_ID =   // Device Identifier
        bit_field_t<0, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IDCODE_DIV_ID =   // Division Identifier
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IDCODE_REV_ID =   // Revision Identifier
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t CR_RESET_VALUE = 0x0;
    static constexpr uint32_t CR_DBG_STOP = 0x2;    // Debug Stop Mode
    static constexpr uint32_t CR_DBG_STANDBY = 0x4; // Debug Standby Mode

    static constexpr uint32_t APB1_FZ_RESET_VALUE = 0x0;
    static constexpr uint32_t APB1_FZ_DBG_TIM2_STOP = 0x1;               // TIM2 counter stopped when core is halted
    static constexpr uint32_t APB1_FZ_DBG_TIM3_STOP = 0x2;               // TIM3 counter stopped when core is halted
    static constexpr uint32_t APB1_FZ_DBG_TIM6_STOP = 0x10;              // TIM6 counter stopped when core is halted
    static constexpr uint32_t APB1_FZ_DBG_TIM7_STOP = 0x20;              // TIM7 counter stopped when core is halted
    static constexpr uint32_t APB1_FZ_DBG_TIM14_STOP = 0x100;            // TIM14 counter stopped when core is halted
    static constexpr uint32_t APB1_FZ_DBG_RTC_STOP = 0x400;              // Debug RTC stopped when core is halted
    static constexpr uint32_t APB1_FZ_DBG_WWDG_STOP = 0x800;             // Debug window watchdog stopped when core is halted
    static constexpr uint32_t APB1_FZ_DBG_IWDG_STOP = 0x1000;            // Debug independent watchdog stopped when core is halted
    static constexpr uint32_t APB1_FZ_DBG_I2C1_SMBUS_TIMEOUT = 0x200000; // SMBUS timeout mode stopped when core is halted
    static constexpr uint32_t APB1_FZ_DBG_CAN_STOP = 0x2000000;          // CAN stopped when core is halted

    static constexpr uint32_t APB2_FZ_RESET_VALUE = 0x0;
    static constexpr uint32_t APB2_FZ_DBG_TIM1_STOP = 0x800;    // TIM1 counter stopped when core is halted
    static constexpr uint32_t APB2_FZ_DBG_TIM15_STOP = 0x10000; // TIM15 counter stopped when core is halted
    static constexpr uint32_t APB2_FZ_DBG_TIM16_STOP = 0x20000; // TIM16 counter stopped when core is halted
    static constexpr uint32_t APB2_FZ_DBG_TIM17_STOP = 0x40000; // TIM17 counter stopped when core is halted
};


template<>
struct peripheral_t<STM32F0x0, DBGMCU>
{
    typedef stm32f0x0_dbgmcu_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x1, DBGMCU>
{
    typedef stm32f0x1_dbgmcu_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x2, DBGMCU>
{
    typedef stm32f0x2_dbgmcu_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x8, DBGMCU>
{
    typedef stm32f0x2_dbgmcu_t T;
    static T& V;
};

using dbgmcu_t = peripheral_t<mcu_svd, DBGMCU>;

