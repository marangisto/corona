#pragma once

////
//
//      STM32F4 DBG peripherals
//
////

////
//
//      Debug support
//
////

struct stm32f401_dbg_t
{
    volatile uint32_t DBGMCU_IDCODE;  // [read-only] IDCODE
    volatile uint32_t DBGMCU_CR;      // [read-write] Control Register
    volatile uint32_t DBGMCU_APB1_FZ; // [read-write] Debug MCU APB1 Freeze registe
    volatile uint32_t DBGMCU_APB2_FZ; // [read-write] Debug MCU APB2 Freeze registe

    static constexpr uint32_t DBGMCU_IDCODE_RESET_VALUE = 0x10006411;
    template<uint32_t X>
    static constexpr uint32_t DBGMCU_IDCODE_DEV_ID =   // DEV_ID
        bit_field_t<0, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DBGMCU_IDCODE_REV_ID =   // REV_ID
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t DBGMCU_CR_RESET_VALUE = 0x0;
    static constexpr uint32_t DBGMCU_CR_DBG_SLEEP = 0x1;   // DBG_SLEEP
    static constexpr uint32_t DBGMCU_CR_DBG_STOP = 0x2;    // DBG_STOP
    static constexpr uint32_t DBGMCU_CR_DBG_STANDBY = 0x4; // DBG_STANDBY
    static constexpr uint32_t DBGMCU_CR_TRACE_IOEN = 0x20; // TRACE_IOEN
    template<uint32_t X>
    static constexpr uint32_t DBGMCU_CR_TRACE_MODE =       // TRACE_MODE
        bit_field_t<6, 0x3>::value<X>();

    static constexpr uint32_t DBGMCU_APB1_FZ_RESET_VALUE = 0x0;
    static constexpr uint32_t DBGMCU_APB1_FZ_DBG_TIM2_STOP = 0x1;               // DBG_TIM2_STOP
    static constexpr uint32_t DBGMCU_APB1_FZ_DBG_TIM3_STOP = 0x2;               // DBG_TIM3 _STOP
    static constexpr uint32_t DBGMCU_APB1_FZ_DBG_TIM4_STOP = 0x4;               // DBG_TIM4_STOP
    static constexpr uint32_t DBGMCU_APB1_FZ_DBG_TIM5_STOP = 0x8;               // DBG_TIM5_STOP
    static constexpr uint32_t DBGMCU_APB1_FZ_DBG_RTC_Stop = 0x400;              // RTC stopped when Core is halted
    static constexpr uint32_t DBGMCU_APB1_FZ_DBG_WWDG_STOP = 0x800;             // DBG_WWDG_STOP
    static constexpr uint32_t DBGMCU_APB1_FZ_DBG_IWDEG_STOP = 0x1000;           // DBG_IWDEG_STOP
    static constexpr uint32_t DBGMCU_APB1_FZ_DBG_I2C1_SMBUS_TIMEOUT = 0x200000; // DBG_J2C1_SMBUS_TIMEOUT
    static constexpr uint32_t DBGMCU_APB1_FZ_DBG_I2C2_SMBUS_TIMEOUT = 0x400000; // DBG_J2C2_SMBUS_TIMEOUT
    static constexpr uint32_t DBGMCU_APB1_FZ_DBG_I2C3SMBUS_TIMEOUT = 0x800000;  // DBG_J2C3SMBUS_TIMEOUT

    static constexpr uint32_t DBGMCU_APB2_FZ_RESET_VALUE = 0x0;
    static constexpr uint32_t DBGMCU_APB2_FZ_DBG_TIM1_STOP = 0x1;      // TIM1 counter stopped when core is halted
    static constexpr uint32_t DBGMCU_APB2_FZ_DBG_TIM9_STOP = 0x10000;  // TIM9 counter stopped when core is halted
    static constexpr uint32_t DBGMCU_APB2_FZ_DBG_TIM10_STOP = 0x20000; // TIM10 counter stopped when core is halted
    static constexpr uint32_t DBGMCU_APB2_FZ_DBG_TIM11_STOP = 0x40000; // TIM11 counter stopped when core is halted
};


////
//
//      Debug support
//
////

struct stm32f405_dbg_t
{
    volatile uint32_t DBGMCU_IDCODE;  // [read-only] IDCODE
    volatile uint32_t DBGMCU_CR;      // [read-write] Control Register
    volatile uint32_t DBGMCU_APB1_FZ; // [read-write] Debug MCU APB1 Freeze registe
    volatile uint32_t DBGMCU_APB2_FZ; // [read-write] Debug MCU APB2 Freeze registe

    static constexpr uint32_t DBGMCU_IDCODE_RESET_VALUE = 0x10006411;
    template<uint32_t X>
    static constexpr uint32_t DBGMCU_IDCODE_DEV_ID =   // DEV_ID
        bit_field_t<0, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DBGMCU_IDCODE_REV_ID =   // REV_ID
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t DBGMCU_CR_RESET_VALUE = 0x0;
    static constexpr uint32_t DBGMCU_CR_DBG_SLEEP = 0x1;                  // DBG_SLEEP
    static constexpr uint32_t DBGMCU_CR_DBG_STOP = 0x2;                   // DBG_STOP
    static constexpr uint32_t DBGMCU_CR_DBG_STANDBY = 0x4;                // DBG_STANDBY
    static constexpr uint32_t DBGMCU_CR_TRACE_IOEN = 0x20;                // TRACE_IOEN
    template<uint32_t X>
    static constexpr uint32_t DBGMCU_CR_TRACE_MODE =                      // TRACE_MODE
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t DBGMCU_CR_DBG_I2C2_SMBUS_TIMEOUT = 0x10000; // DBG_I2C2_SMBUS_TIMEOUT
    static constexpr uint32_t DBGMCU_CR_DBG_TIM8_STOP = 0x20000;          // DBG_TIM8_STOP
    static constexpr uint32_t DBGMCU_CR_DBG_TIM5_STOP = 0x40000;          // DBG_TIM5_STOP
    static constexpr uint32_t DBGMCU_CR_DBG_TIM6_STOP = 0x80000;          // DBG_TIM6_STOP
    static constexpr uint32_t DBGMCU_CR_DBG_TIM7_STOP = 0x100000;         // DBG_TIM7_STOP

    static constexpr uint32_t DBGMCU_APB1_FZ_RESET_VALUE = 0x0;
    static constexpr uint32_t DBGMCU_APB1_FZ_DBG_TIM2_STOP = 0x1;               // DBG_TIM2_STOP
    static constexpr uint32_t DBGMCU_APB1_FZ_DBG_TIM3_STOP = 0x2;               // DBG_TIM3 _STOP
    static constexpr uint32_t DBGMCU_APB1_FZ_DBG_TIM4_STOP = 0x4;               // DBG_TIM4_STOP
    static constexpr uint32_t DBGMCU_APB1_FZ_DBG_TIM5_STOP = 0x8;               // DBG_TIM5_STOP
    static constexpr uint32_t DBGMCU_APB1_FZ_DBG_TIM6_STOP = 0x10;              // DBG_TIM6_STOP
    static constexpr uint32_t DBGMCU_APB1_FZ_DBG_TIM7_STOP = 0x20;              // DBG_TIM7_STOP
    static constexpr uint32_t DBGMCU_APB1_FZ_DBG_TIM12_STOP = 0x40;             // DBG_TIM12_STOP
    static constexpr uint32_t DBGMCU_APB1_FZ_DBG_TIM13_STOP = 0x80;             // DBG_TIM13_STOP
    static constexpr uint32_t DBGMCU_APB1_FZ_DBG_TIM14_STOP = 0x100;            // DBG_TIM14_STOP
    static constexpr uint32_t DBGMCU_APB1_FZ_DBG_WWDG_STOP = 0x800;             // DBG_WWDG_STOP
    static constexpr uint32_t DBGMCU_APB1_FZ_DBG_IWDEG_STOP = 0x1000;           // DBG_IWDEG_STOP
    static constexpr uint32_t DBGMCU_APB1_FZ_DBG_J2C1_SMBUS_TIMEOUT = 0x200000; // DBG_J2C1_SMBUS_TIMEOUT
    static constexpr uint32_t DBGMCU_APB1_FZ_DBG_J2C2_SMBUS_TIMEOUT = 0x400000; // DBG_J2C2_SMBUS_TIMEOUT
    static constexpr uint32_t DBGMCU_APB1_FZ_DBG_J2C3SMBUS_TIMEOUT = 0x800000;  // DBG_J2C3SMBUS_TIMEOUT
    static constexpr uint32_t DBGMCU_APB1_FZ_DBG_CAN1_STOP = 0x2000000;         // DBG_CAN1_STOP
    static constexpr uint32_t DBGMCU_APB1_FZ_DBG_CAN2_STOP = 0x4000000;         // DBG_CAN2_STOP

    static constexpr uint32_t DBGMCU_APB2_FZ_RESET_VALUE = 0x0;
    static constexpr uint32_t DBGMCU_APB2_FZ_DBG_TIM1_STOP = 0x1;      // TIM1 counter stopped when core is halted
    static constexpr uint32_t DBGMCU_APB2_FZ_DBG_TIM8_STOP = 0x2;      // TIM8 counter stopped when core is halted
    static constexpr uint32_t DBGMCU_APB2_FZ_DBG_TIM9_STOP = 0x10000;  // TIM9 counter stopped when core is halted
    static constexpr uint32_t DBGMCU_APB2_FZ_DBG_TIM10_STOP = 0x20000; // TIM10 counter stopped when core is halted
    static constexpr uint32_t DBGMCU_APB2_FZ_DBG_TIM11_STOP = 0x40000; // TIM11 counter stopped when core is halted
};


////
//
//      Debug support
//
////

struct stm32f427_dbg_t
{
    volatile uint32_t DBGMCU_IDCODE;  // [read-only] IDCODE
    volatile uint32_t DBGMCU_CR;      // [read-write] Control Register
    volatile uint32_t DBGMCU_APB1_FZ; // [read-write] Debug MCU APB1 Freeze registe
    volatile uint32_t DBGMCU_APB2_FZ; // [read-write] Debug MCU APB2 Freeze registe

    static constexpr uint32_t DBGMCU_IDCODE_RESET_VALUE = 0x10006411;
    template<uint32_t X>
    static constexpr uint32_t DBGMCU_IDCODE_DEV_ID =   // DEV_ID
        bit_field_t<0, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DBGMCU_IDCODE_REV_ID =   // REV_ID
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t DBGMCU_CR_RESET_VALUE = 0x0;
    static constexpr uint32_t DBGMCU_CR_DBG_SLEEP = 0x1;   // DBG_SLEEP
    static constexpr uint32_t DBGMCU_CR_DBG_STOP = 0x2;    // DBG_STOP
    static constexpr uint32_t DBGMCU_CR_DBG_STANDBY = 0x4; // DBG_STANDBY
    static constexpr uint32_t DBGMCU_CR_TRACE_IOEN = 0x20; // TRACE_IOEN
    template<uint32_t X>
    static constexpr uint32_t DBGMCU_CR_TRACE_MODE =       // TRACE_MODE
        bit_field_t<6, 0x3>::value<X>();

    static constexpr uint32_t DBGMCU_APB1_FZ_RESET_VALUE = 0x0;
    static constexpr uint32_t DBGMCU_APB1_FZ_DBG_TIM2_STOP = 0x1;               // DBG_TIM2_STOP
    static constexpr uint32_t DBGMCU_APB1_FZ_DBG_TIM3_STOP = 0x2;               // DBG_TIM3 _STOP
    static constexpr uint32_t DBGMCU_APB1_FZ_DBG_TIM4_STOP = 0x4;               // DBG_TIM4_STOP
    static constexpr uint32_t DBGMCU_APB1_FZ_DBG_TIM5_STOP = 0x8;               // DBG_TIM5_STOP
    static constexpr uint32_t DBGMCU_APB1_FZ_DBG_TIM6_STOP = 0x10;              // DBG_TIM6_STOP
    static constexpr uint32_t DBGMCU_APB1_FZ_DBG_TIM7_STOP = 0x20;              // DBG_TIM7_STOP
    static constexpr uint32_t DBGMCU_APB1_FZ_DBG_TIM12_STOP = 0x40;             // DBG_TIM12_STOP
    static constexpr uint32_t DBGMCU_APB1_FZ_DBG_TIM13_STOP = 0x80;             // DBG_TIM13_STOP
    static constexpr uint32_t DBGMCU_APB1_FZ_DBG_TIM14_STOP = 0x100;            // DBG_TIM14_STOP
    static constexpr uint32_t DBGMCU_APB1_FZ_DBG_WWDG_STOP = 0x800;             // DBG_WWDG_STOP
    static constexpr uint32_t DBGMCU_APB1_FZ_DBG_IWDEG_STOP = 0x1000;           // DBG_IWDEG_STOP
    static constexpr uint32_t DBGMCU_APB1_FZ_DBG_J2C1_SMBUS_TIMEOUT = 0x200000; // DBG_J2C1_SMBUS_TIMEOUT
    static constexpr uint32_t DBGMCU_APB1_FZ_DBG_J2C2_SMBUS_TIMEOUT = 0x400000; // DBG_J2C2_SMBUS_TIMEOUT
    static constexpr uint32_t DBGMCU_APB1_FZ_DBG_J2C3SMBUS_TIMEOUT = 0x800000;  // DBG_J2C3SMBUS_TIMEOUT
    static constexpr uint32_t DBGMCU_APB1_FZ_DBG_CAN1_STOP = 0x2000000;         // DBG_CAN1_STOP
    static constexpr uint32_t DBGMCU_APB1_FZ_DBG_CAN2_STOP = 0x4000000;         // DBG_CAN2_STOP

    static constexpr uint32_t DBGMCU_APB2_FZ_RESET_VALUE = 0x0;
    static constexpr uint32_t DBGMCU_APB2_FZ_DBG_TIM1_STOP = 0x1;      // TIM1 counter stopped when core is halted
    static constexpr uint32_t DBGMCU_APB2_FZ_DBG_TIM8_STOP = 0x2;      // TIM8 counter stopped when core is halted
    static constexpr uint32_t DBGMCU_APB2_FZ_DBG_TIM9_STOP = 0x10000;  // TIM9 counter stopped when core is halted
    static constexpr uint32_t DBGMCU_APB2_FZ_DBG_TIM10_STOP = 0x20000; // TIM10 counter stopped when core is halted
    static constexpr uint32_t DBGMCU_APB2_FZ_DBG_TIM11_STOP = 0x40000; // TIM11 counter stopped when core is halted
};


////
//
//      Debug support
//
////

struct stm32f446_dbg_t
{
    volatile uint32_t DBGMCU_IDCODE;  // [read-only] IDCODE
    volatile uint32_t DBGMCU_CR;      // [read-write] Control Register
    volatile uint32_t DBGMCU_APB1_FZ; // [read-write] Debug MCU APB1 Freeze registe
    volatile uint32_t DBGMCU_APB2_FZ; // [read-write] Debug MCU APB2 Freeze registe

    static constexpr uint32_t DBGMCU_IDCODE_RESET_VALUE = 0x10006411;
    template<uint32_t X>
    static constexpr uint32_t DBGMCU_IDCODE_DEV_ID =   // DEV_ID
        bit_field_t<0, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DBGMCU_IDCODE_REV_ID =   // REV_ID
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t DBGMCU_CR_RESET_VALUE = 0x0;
    static constexpr uint32_t DBGMCU_CR_DBG_SLEEP = 0x1;   // DBG_SLEEP
    static constexpr uint32_t DBGMCU_CR_DBG_STOP = 0x2;    // DBG_STOP
    static constexpr uint32_t DBGMCU_CR_DBG_STANDBY = 0x4; // DBG_STANDBY
    static constexpr uint32_t DBGMCU_CR_TRACE_IOEN = 0x20; // TRACE_IOEN
    template<uint32_t X>
    static constexpr uint32_t DBGMCU_CR_TRACE_MODE =       // TRACE_MODE
        bit_field_t<6, 0x3>::value<X>();

    static constexpr uint32_t DBGMCU_APB1_FZ_RESET_VALUE = 0x0;
    static constexpr uint32_t DBGMCU_APB1_FZ_DBG_TIM2_STOP = 0x1;                  // DBG_TIM2_STOP
    static constexpr uint32_t DBGMCU_APB1_FZ_DBG_TIM3_STOP = 0x2;                  // DBG_TIM3 _STOP
    static constexpr uint32_t DBGMCU_APB1_FZ_DBG_TIM4_STOP = 0x4;                  // DBG_TIM4_STOP
    static constexpr uint32_t DBGMCU_APB1_FZ_DBG_TIM5_STOP = 0x8;                  // DBG_TIM5_STOP
    static constexpr uint32_t DBGMCU_APB1_FZ_DBG_TIM6_STOP = 0x10;                 // DBG_TIM6_STOP
    static constexpr uint32_t DBGMCU_APB1_FZ_DBG_TIM7_STOP = 0x20;                 // DBG_TIM7_STOP
    static constexpr uint32_t DBGMCU_APB1_FZ_DBG_TIM12_STOP = 0x40;                // DBG_TIM12_STOP
    static constexpr uint32_t DBGMCU_APB1_FZ_DBG_TIM13_STOP = 0x80;                // DBG_TIM13_STOP
    static constexpr uint32_t DBGMCU_APB1_FZ_DBG_TIM14_STOP = 0x100;               // DBG_TIM14_STOP
    static constexpr uint32_t DBGMCU_APB1_FZ_DBG_RTC_STOP = 0x400;                 // RTC stopped when Core is halted
    static constexpr uint32_t DBGMCU_APB1_FZ_DBG_WWDG_STOP = 0x800;                // DBG_WWDG_STOP
    static constexpr uint32_t DBGMCU_APB1_FZ_DBG_IWDEG_STOP = 0x1000;              // DBG_IWDEG_STOP
    static constexpr uint32_t DBGMCU_APB1_FZ_DBG_J2C1_SMBUS_TIMEOUT = 0x200000;    // DBG_J2C1_SMBUS_TIMEOUT
    static constexpr uint32_t DBGMCU_APB1_FZ_DBG_J2C2_SMBUS_TIMEOUT = 0x400000;    // DBG_J2C2_SMBUS_TIMEOUT
    static constexpr uint32_t DBGMCU_APB1_FZ_DBG_J2C3SMBUS_TIMEOUT = 0x800000;     // DBG_J2C3SMBUS_TIMEOUT
    static constexpr uint32_t DBGMCU_APB1_FZ_DBG_I2CFMP_SMBUS_TIMEOUT = 0x1000000; // SMBUS timeout mode stopped when Core is halted
    static constexpr uint32_t DBGMCU_APB1_FZ_DBG_CAN1_STOP = 0x2000000;            // DBG_CAN1_STOP
    static constexpr uint32_t DBGMCU_APB1_FZ_DBG_CAN2_STOP = 0x4000000;            // DBG_CAN2_STOP

    static constexpr uint32_t DBGMCU_APB2_FZ_RESET_VALUE = 0x0;
    static constexpr uint32_t DBGMCU_APB2_FZ_DBG_TIM1_STOP = 0x1;      // TIM1 counter stopped when core is halted
    static constexpr uint32_t DBGMCU_APB2_FZ_DBG_TIM8_STOP = 0x2;      // TIM8 counter stopped when core is halted
    static constexpr uint32_t DBGMCU_APB2_FZ_DBG_TIM9_STOP = 0x10000;  // TIM9 counter stopped when core is halted
    static constexpr uint32_t DBGMCU_APB2_FZ_DBG_TIM10_STOP = 0x20000; // TIM10 counter stopped when core is halted
    static constexpr uint32_t DBGMCU_APB2_FZ_DBG_TIM11_STOP = 0x40000; // TIM11 counter stopped when core is halted
};


template<>
struct peripheral_t<STM32F401, DBG>
{
    typedef stm32f401_dbg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F410, DBG>
{
    typedef stm32f401_dbg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F411, DBG>
{
    typedef stm32f401_dbg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, DBG>
{
    typedef stm32f401_dbg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, DBG>
{
    typedef stm32f401_dbg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, DBG>
{
    typedef stm32f405_dbg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, DBG>
{
    typedef stm32f405_dbg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, DBG>
{
    typedef stm32f427_dbg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, DBG>
{
    typedef stm32f427_dbg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, DBG>
{
    typedef stm32f427_dbg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, DBG>
{
    typedef stm32f446_dbg_t T;
    static T& V;
};

using dbg_t = peripheral_t<mcu_svd, DBG>;

