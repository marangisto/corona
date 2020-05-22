#pragma once

////
//
//      STM32H7 DBGMCU peripherals
//
////

////
//
//      Microcontroller Debug Unit
//
////

struct stm32h742x_dbgmcu_t
{
    volatile uint32_t IDC;      // [read-only] DBGMCU Identity Code Register
    volatile uint32_t CR;       // [read-write] DBGMCU Configuration Register
    reserved_t<0xb> _0x34;
    volatile uint32_t APB3FZ1;  // [read-write] DBGMCU APB3 peripheral freeze register
    reserved_t<0x1> _0x3c;
    volatile uint32_t APB1LFZ1; // [read-write] DBGMCU APB1L peripheral freeze register
    reserved_t<0x3> _0x4c;
    volatile uint32_t APB2FZ1;  // [read-write] DBGMCU APB2 peripheral freeze register
    reserved_t<0x1> _0x54;
    volatile uint32_t APB4FZ1;  // [read-write] DBGMCU APB4 peripheral freeze register

    static constexpr uint32_t IDC_RESET_VALUE = 0x10006450;
    template<uint32_t X>
    static constexpr uint32_t IDC_DEV_ID =   // Device ID
        bit_field_t<0, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IDC_REV_ID =   // Revision
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t CR_RESET_VALUE = 0x0;
    static constexpr uint32_t CR_DBGSLEEP_D1 = 0x1;     // Allow D1 domain debug in Sleep mode
    static constexpr uint32_t CR_DBGSTOP_D1 = 0x2;      // Allow D1 domain debug in Stop mode
    static constexpr uint32_t CR_DBGSTBY_D1 = 0x4;      // Allow D1 domain debug in Standby mode
    static constexpr uint32_t CR_DBGSLEEP_D2 = 0x8;     // Allow D2 domain debug in Sleep mode
    static constexpr uint32_t CR_DBGSTOP_D2 = 0x10;     // Allow D2 domain debug in Stop mode
    static constexpr uint32_t CR_DBGSTBY_D2 = 0x20;     // Allow D2 domain debug in Standby mode
    static constexpr uint32_t CR_DBGSTOP_D3 = 0x80;     // Allow debug in D3 Stop mode
    static constexpr uint32_t CR_DBGSTBY_D3 = 0x100;    // Allow debug in D3 Standby mode
    static constexpr uint32_t CR_TRACECLKEN = 0x100000; // Trace port clock enable
    static constexpr uint32_t CR_D1DBGCKEN = 0x200000;  // D1 debug clock enable
    static constexpr uint32_t CR_D3DBGCKEN = 0x400000;  // D3 debug clock enable
    static constexpr uint32_t CR_TRGOEN = 0x10000000;   // External trigger output enable

    static constexpr uint32_t APB3FZ1_RESET_VALUE = 0x0;
    static constexpr uint32_t APB3FZ1_WWDG1 = 0x40; // WWDG1 stop in debug

    static constexpr uint32_t APB1LFZ1_RESET_VALUE = 0x0;
    static constexpr uint32_t APB1LFZ1_DBG_TIM2 = 0x1;      // TIM2 stop in debug
    static constexpr uint32_t APB1LFZ1_DBG_TIM3 = 0x2;      // TIM3 stop in debug
    static constexpr uint32_t APB1LFZ1_DBG_TIM4 = 0x4;      // TIM4 stop in debug
    static constexpr uint32_t APB1LFZ1_DBG_TIM5 = 0x8;      // TIM5 stop in debug
    static constexpr uint32_t APB1LFZ1_DBG_TIM6 = 0x10;     // TIM6 stop in debug
    static constexpr uint32_t APB1LFZ1_DBG_TIM7 = 0x20;     // TIM7 stop in debug
    static constexpr uint32_t APB1LFZ1_DBG_TIM12 = 0x40;    // TIM12 stop in debug
    static constexpr uint32_t APB1LFZ1_DBG_TIM13 = 0x80;    // TIM13 stop in debug
    static constexpr uint32_t APB1LFZ1_DBG_TIM14 = 0x100;   // TIM14 stop in debug
    static constexpr uint32_t APB1LFZ1_DBG_LPTIM1 = 0x200;  // LPTIM1 stop in debug
    static constexpr uint32_t APB1LFZ1_DBG_I2C1 = 0x200000; // I2C1 SMBUS timeout stop in debug
    static constexpr uint32_t APB1LFZ1_DBG_I2C2 = 0x400000; // I2C2 SMBUS timeout stop in debug
    static constexpr uint32_t APB1LFZ1_DBG_I2C3 = 0x800000; // I2C3 SMBUS timeout stop in debug

    static constexpr uint32_t APB2FZ1_RESET_VALUE = 0x0;
    static constexpr uint32_t APB2FZ1_DBG_TIM1 = 0x1;         // TIM1 stop in debug
    static constexpr uint32_t APB2FZ1_DBG_TIM8 = 0x2;         // TIM8 stop in debug
    static constexpr uint32_t APB2FZ1_DBG_TIM15 = 0x10000;    // TIM15 stop in debug
    static constexpr uint32_t APB2FZ1_DBG_TIM16 = 0x20000;    // TIM16 stop in debug
    static constexpr uint32_t APB2FZ1_DBG_TIM17 = 0x40000;    // TIM17 stop in debug
    static constexpr uint32_t APB2FZ1_DBG_HRTIM = 0x20000000; // HRTIM stop in debug

    static constexpr uint32_t APB4FZ1_RESET_VALUE = 0x0;
    static constexpr uint32_t APB4FZ1_DBG_I2C4 = 0x80;       // I2C4 SMBUS timeout stop in debug
    static constexpr uint32_t APB4FZ1_DBG_LPTIM2 = 0x200;    // LPTIM2 stop in debug
    static constexpr uint32_t APB4FZ1_DBG_LPTIM3 = 0x400;    // LPTIM2 stop in debug
    static constexpr uint32_t APB4FZ1_DBG_LPTIM4 = 0x800;    // LPTIM4 stop in debug
    static constexpr uint32_t APB4FZ1_DBG_LPTIM5 = 0x1000;   // LPTIM5 stop in debug
    static constexpr uint32_t APB4FZ1_DBG_RTC = 0x10000;     // RTC stop in debug
    static constexpr uint32_t APB4FZ1_DBG_WDGLSD1 = 0x40000; // Independent watchdog for D1 stop in debug
};


////
//
//      Microcontroller Debug Unit
//
////

struct stm32h743_dbgmcu_t
{
    volatile uint32_t IDC;      // [read-only] DBGMCU Identity Code Register
    volatile uint32_t CR;       // [read-write] DBGMCU Configuration Register
    reserved_t<0xb> _0x34;
    volatile uint32_t APB3FZ1;  // [read-write] DBGMCU APB3 peripheral freeze register
    reserved_t<0x1> _0x3c;
    volatile uint32_t APB1LFZ1; // [read-write] DBGMCU APB1L peripheral freeze register
    reserved_t<0x3> _0x4c;
    volatile uint32_t APB2FZ1;  // [read-write] DBGMCU APB2 peripheral freeze register
    reserved_t<0x1> _0x54;
    volatile uint32_t APB4FZ1;  // [read-write] DBGMCU APB4 peripheral freeze register

    static constexpr uint32_t IDC_RESET_VALUE = 0x10006450;
    template<uint32_t X>
    static constexpr uint32_t IDC_DEV_ID =   // Device ID
        bit_field_t<0, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IDC_REV_ID =   // Revision
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t CR_RESET_VALUE = 0x0;
    static constexpr uint32_t CR_DBGSLEEP_D1 = 0x1;     // Allow D1 domain debug in Sleep mode
    static constexpr uint32_t CR_DBGSTOP_D1 = 0x2;      // Allow D1 domain debug in Stop mode
    static constexpr uint32_t CR_DBGSTBY_D1 = 0x4;      // Allow D1 domain debug in Standby mode
    static constexpr uint32_t CR_DBGSLEEP_D2 = 0x8;     // Allow D2 domain debug in Sleep mode
    static constexpr uint32_t CR_DBGSTOP_D2 = 0x10;     // Allow D2 domain debug in Stop mode
    static constexpr uint32_t CR_DBGSTBY_D2 = 0x20;     // Allow D2 domain debug in Standby mode
    static constexpr uint32_t CR_DBGSTOP_D3 = 0x80;     // Allow debug in D3 Stop mode
    static constexpr uint32_t CR_DBGSTBY_D3 = 0x100;    // Allow debug in D3 Standby mode
    static constexpr uint32_t CR_TRACECLKEN = 0x100000; // Trace port clock enable
    static constexpr uint32_t CR_D1DBGCKEN = 0x200000;  // D1 debug clock enable
    static constexpr uint32_t CR_D3DBGCKEN = 0x400000;  // D3 debug clock enable
    static constexpr uint32_t CR_TRGOEN = 0x10000000;   // External trigger output enable

    static constexpr uint32_t APB3FZ1_RESET_VALUE = 0x0;
    static constexpr uint32_t APB3FZ1_WWDG1 = 0x40; // WWDG1 stop in debug

    static constexpr uint32_t APB1LFZ1_RESET_VALUE = 0x0;
    static constexpr uint32_t APB1LFZ1_DBG_TIM2 = 0x1;      // TIM2 stop in debug
    static constexpr uint32_t APB1LFZ1_DBG_TIM3 = 0x2;      // TIM3 stop in debug
    static constexpr uint32_t APB1LFZ1_DBG_TIM4 = 0x4;      // TIM4 stop in debug
    static constexpr uint32_t APB1LFZ1_DBG_TIM5 = 0x8;      // TIM5 stop in debug
    static constexpr uint32_t APB1LFZ1_DBG_TIM6 = 0x10;     // TIM6 stop in debug
    static constexpr uint32_t APB1LFZ1_DBG_TIM7 = 0x20;     // TIM7 stop in debug
    static constexpr uint32_t APB1LFZ1_DBG_TIM12 = 0x40;    // TIM12 stop in debug
    static constexpr uint32_t APB1LFZ1_DBG_TIM13 = 0x80;    // TIM13 stop in debug
    static constexpr uint32_t APB1LFZ1_DBG_TIM14 = 0x100;   // TIM14 stop in debug
    static constexpr uint32_t APB1LFZ1_DBG_LPTIM1 = 0x200;  // LPTIM1 stop in debug
    static constexpr uint32_t APB1LFZ1_DBG_I2C1 = 0x200000; // I2C1 SMBUS timeout stop in debug
    static constexpr uint32_t APB1LFZ1_DBG_I2C2 = 0x400000; // I2C2 SMBUS timeout stop in debug
    static constexpr uint32_t APB1LFZ1_DBG_I2C3 = 0x800000; // I2C3 SMBUS timeout stop in debug

    static constexpr uint32_t APB2FZ1_RESET_VALUE = 0x0;
    static constexpr uint32_t APB2FZ1_DBG_TIM1 = 0x1;         // TIM1 stop in debug
    static constexpr uint32_t APB2FZ1_DBG_TIM8 = 0x2;         // TIM8 stop in debug
    static constexpr uint32_t APB2FZ1_DBG_TIM15 = 0x10000;    // TIM15 stop in debug
    static constexpr uint32_t APB2FZ1_DBG_TIM16 = 0x20000;    // TIM16 stop in debug
    static constexpr uint32_t APB2FZ1_DBG_TIM17 = 0x40000;    // TIM17 stop in debug
    static constexpr uint32_t APB2FZ1_DBG_HRTIM = 0x20000000; // HRTIM stop in debug

    static constexpr uint32_t APB4FZ1_RESET_VALUE = 0x0;
    static constexpr uint32_t APB4FZ1_DBG_I2C4 = 0x80;     // I2C4 SMBUS timeout stop in debug
    static constexpr uint32_t APB4FZ1_DBG_LPTIM2 = 0x200;  // LPTIM2 stop in debug
    static constexpr uint32_t APB4FZ1_DBG_LPTIM3 = 0x400;  // LPTIM2 stop in debug
    static constexpr uint32_t APB4FZ1_DBG_LPTIM4 = 0x800;  // LPTIM4 stop in debug
    static constexpr uint32_t APB4FZ1_DBG_LPTIM5 = 0x1000; // LPTIM5 stop in debug
    static constexpr uint32_t APB4FZ1_DBG_RTC = 0x10000;   // RTC stop in debug
    static constexpr uint32_t APB4FZ1_DBG_IWDG1 = 0x40000; // Independent watchdog for D1 stop in debug
};


////
//
//      Microcontroller Debug Unit
//
////

struct stm32h745_cm4_dbgmcu_t
{
    volatile uint32_t IDC;      // [read-only] DBGMCU Identity Code Register
    volatile uint32_t CR;       // [read-write] DBGMCU Configuration Register
    reserved_t<0xb> _0x34;
    volatile uint32_t APB3FZ1;  // [read-write] DBGMCU APB3 peripheral freeze register CPU1
    volatile uint32_t APB3FZ2;  // [read-write] DBGMCU APB3 peripheral freeze register CPU2
    volatile uint32_t APB1LFZ1; // [read-write] DBGMCU APB1L peripheral freeze register
    volatile uint32_t APB1LFZ2; // [read-write] DBGMCU APB1L peripheral freeze register CPU2
    reserved_t<0x2> _0x4c;
    volatile uint32_t APB2FZ1;  // [read-write] DBGMCU APB2 peripheral freeze register
    volatile uint32_t APB2FZ2;  // [read-write] DBGMCU APB2 peripheral freeze register CPU2
    volatile uint32_t APB4FZ1;  // [read-write] DBGMCU APB4 peripheral freeze register
    volatile uint32_t APB4FZ2;  // [read-write] DBGMCU APB4 peripheral freeze register CPU2

    static constexpr uint32_t IDC_RESET_VALUE = 0x10006450;
    template<uint32_t X>
    static constexpr uint32_t IDC_DEV_ID =   // Device ID
        bit_field_t<0, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IDC_REV_ID =   // Revision
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t CR_RESET_VALUE = 0x0;
    static constexpr uint32_t CR_DBGSLPD1 = 0x1;        // Allow D1 domain debug in Sleep mode
    static constexpr uint32_t CR_DBGSTPD1 = 0x2;        // Allow D1 domain debug in Stop mode
    static constexpr uint32_t CR_DBGSTBD1 = 0x4;        // Allow D1 domain debug in Standby mode
    static constexpr uint32_t CR_DBGSLPD2 = 0x8;        // Allow D2 domain debug in Sleep mode
    static constexpr uint32_t CR_DBGSTPD2 = 0x10;       // Allow D2 domain debug in Stop mode
    static constexpr uint32_t CR_DBGSTBD2 = 0x20;       // Allow D2 domain debug in Standby mode
    static constexpr uint32_t CR_DBGSTPD3 = 0x80;       // Allow debug in D3 Stop mode
    static constexpr uint32_t CR_DBGSTBD3 = 0x100;      // Allow debug in D3 Standby mode
    static constexpr uint32_t CR_TRACECLKEN = 0x100000; // Trace port clock enable
    static constexpr uint32_t CR_D1DBGCKEN = 0x200000;  // D1 debug clock enable
    static constexpr uint32_t CR_D3DBGCKEN = 0x400000;  // D3 debug clock enable
    static constexpr uint32_t CR_TRGOEN = 0x10000000;   // External trigger output enable

    static constexpr uint32_t APB3FZ1_RESET_VALUE = 0x0;
    static constexpr uint32_t APB3FZ1_WWDG1 = 0x40; // WWDG1 stop in debug

    static constexpr uint32_t APB3FZ2_RESET_VALUE = 0x0;
    static constexpr uint32_t APB3FZ2_WWDG1 = 0x40; // WWDG1 stop in debug

    static constexpr uint32_t APB1LFZ1_RESET_VALUE = 0x0;
    static constexpr uint32_t APB1LFZ1_DBG_TIM2 = 0x1;      // TIM2 stop in debug
    static constexpr uint32_t APB1LFZ1_DBG_TIM3 = 0x2;      // TIM3 stop in debug
    static constexpr uint32_t APB1LFZ1_DBG_TIM4 = 0x4;      // TIM4 stop in debug
    static constexpr uint32_t APB1LFZ1_DBG_TIM5 = 0x8;      // TIM5 stop in debug
    static constexpr uint32_t APB1LFZ1_DBG_TIM6 = 0x10;     // TIM6 stop in debug
    static constexpr uint32_t APB1LFZ1_DBG_TIM7 = 0x20;     // TIM7 stop in debug
    static constexpr uint32_t APB1LFZ1_DBG_TIM12 = 0x40;    // TIM12 stop in debug
    static constexpr uint32_t APB1LFZ1_DBG_TIM13 = 0x80;    // TIM13 stop in debug
    static constexpr uint32_t APB1LFZ1_DBG_TIM14 = 0x100;   // TIM14 stop in debug
    static constexpr uint32_t APB1LFZ1_DBG_LPTIM1 = 0x200;  // LPTIM1 stop in debug
    static constexpr uint32_t APB1LFZ1_DBG_WWDG2 = 0x800;   // WWDG2 stop in debug
    static constexpr uint32_t APB1LFZ1_DBG_I2C1 = 0x200000; // I2C1 SMBUS timeout stop in debug
    static constexpr uint32_t APB1LFZ1_DBG_I2C2 = 0x400000; // I2C2 SMBUS timeout stop in debug
    static constexpr uint32_t APB1LFZ1_DBG_I2C3 = 0x800000; // I2C3 SMBUS timeout stop in debug

    static constexpr uint32_t APB1LFZ2_RESET_VALUE = 0x0;
    static constexpr uint32_t APB1LFZ2_DBG_TIM2 = 0x1;      // TIM2 stop in debug
    static constexpr uint32_t APB1LFZ2_DBG_TIM3 = 0x2;      // TIM3 stop in debug
    static constexpr uint32_t APB1LFZ2_DBG_TIM4 = 0x4;      // TIM4 stop in debug
    static constexpr uint32_t APB1LFZ2_DBG_TIM5 = 0x8;      // TIM5 stop in debug
    static constexpr uint32_t APB1LFZ2_DBG_TIM6 = 0x10;     // TIM6 stop in debug
    static constexpr uint32_t APB1LFZ2_DBG_TIM7 = 0x20;     // TIM4 stop in debug
    static constexpr uint32_t APB1LFZ2_DBG_TIM12 = 0x40;    // TIM12 stop in debug
    static constexpr uint32_t APB1LFZ2_DBG_TIM13 = 0x80;    // TIM13 stop in debug
    static constexpr uint32_t APB1LFZ2_DBG_TIM14 = 0x100;   // TIM14 stop in debug
    static constexpr uint32_t APB1LFZ2_DBG_LPTIM1 = 0x200;  // LPTIM1 stop in debug
    static constexpr uint32_t APB1LFZ2_DBG_WWDG2 = 0x800;   // WWDG2 stop in debug
    static constexpr uint32_t APB1LFZ2_DBG_I2C1 = 0x200000; // I2C1 SMBUS timeout stop in debug
    static constexpr uint32_t APB1LFZ2_DBG_I2C2 = 0x400000; // I2C2 SMBUS timeout stop in debug
    static constexpr uint32_t APB1LFZ2_DBG_I2C3 = 0x800000; // I2C3 SMBUS timeout stop in debug

    static constexpr uint32_t APB2FZ1_RESET_VALUE = 0x0;
    static constexpr uint32_t APB2FZ1_DBG_TIM1 = 0x1;         // TIM1 stop in debug
    static constexpr uint32_t APB2FZ1_DBG_TIM8 = 0x2;         // TIM8 stop in debug
    static constexpr uint32_t APB2FZ1_DBG_TIM15 = 0x10000;    // TIM15 stop in debug
    static constexpr uint32_t APB2FZ1_DBG_TIM16 = 0x20000;    // TIM16 stop in debug
    static constexpr uint32_t APB2FZ1_DBG_TIM17 = 0x40000;    // TIM17 stop in debug
    static constexpr uint32_t APB2FZ1_DBG_HRTIM = 0x20000000; // HRTIM stop in debug

    static constexpr uint32_t APB2FZ2_RESET_VALUE = 0x0;
    static constexpr uint32_t APB2FZ2_DBG_TIM1 = 0x1;         // TIM1 stop in debug
    static constexpr uint32_t APB2FZ2_DBG_TIM8 = 0x2;         // TIM8 stop in debug
    static constexpr uint32_t APB2FZ2_DBG_TIM15 = 0x10000;    // TIM15 stop in debug
    static constexpr uint32_t APB2FZ2_DBG_TIM16 = 0x20000;    // TIM16 stop in debug
    static constexpr uint32_t APB2FZ2_DBG_TIM17 = 0x40000;    // TIM17 stop in debug
    static constexpr uint32_t APB2FZ2_DBG_HRTIM = 0x20000000; // HRTIM stop in debug

    static constexpr uint32_t APB4FZ1_RESET_VALUE = 0x0;
    static constexpr uint32_t APB4FZ1_DBG_I2C4 = 0x80;       // I2C4 SMBUS timeout stop in debug
    static constexpr uint32_t APB4FZ1_DBG_LPTIM2 = 0x200;    // LPTIM2 stop in debug
    static constexpr uint32_t APB4FZ1_DBG_LPTIM3 = 0x400;    // LPTIM2 stop in debug
    static constexpr uint32_t APB4FZ1_DBG_LPTIM4 = 0x800;    // LPTIM4 stop in debug
    static constexpr uint32_t APB4FZ1_DBG_LPTIM5 = 0x1000;   // LPTIM5 stop in debug
    static constexpr uint32_t APB4FZ1_DBG_RTC = 0x10000;     // RTC stop in debug
    static constexpr uint32_t APB4FZ1_DBG_WDGLSD1 = 0x40000; // Independent watchdog for D1 stop in debug
    static constexpr uint32_t APB4FZ1_DBG_WDGLSD2 = 0x80000; // Independent watchdog for D2 stop in debug

    static constexpr uint32_t APB4FZ2_RESET_VALUE = 0x0;
    static constexpr uint32_t APB4FZ2_DBG_I2C4 = 0x80;       // I2C4 SMBUS timeout stop in debug
    static constexpr uint32_t APB4FZ2_DBG_LPTIM2 = 0x200;    // LPTIM2 stop in debug
    static constexpr uint32_t APB4FZ2_DBG_LPTIM3 = 0x400;    // LPTIM2 stop in debug
    static constexpr uint32_t APB4FZ2_DBG_LPTIM4 = 0x800;    // LPTIM4 stop in debug
    static constexpr uint32_t APB4FZ2_DBG_LPTIM5 = 0x1000;   // LPTIM5 stop in debug
    static constexpr uint32_t APB4FZ2_DBG_RTC = 0x10000;     // RTC stop in debug
    static constexpr uint32_t APB4FZ2_DBG_WDGLSD1 = 0x40000; // LS watchdog for D1 stop in debug
    static constexpr uint32_t APB4FZ2_DBG_WDGLSD2 = 0x80000; // LS watchdog for D2 stop in debug
};


////
//
//      Microcontroller Debug Unit
//
////

struct stm32h7a3x_dbgmcu_t
{
    volatile uint32_t IDC;      // [read-only] DBGMCU Identity Code Register
    volatile uint32_t CR;       // [read-write] DBGMCU Configuration Register
    reserved_t<0xb> _0x34;
    volatile uint32_t APB3FZ1;  // [read-write] DBGMCU APB3 peripheral freeze register
    reserved_t<0x1> _0x3c;
    volatile uint32_t APB1LFZ1; // [read-write] DBGMCU APB1L peripheral freeze register
    reserved_t<0x3> _0x4c;
    volatile uint32_t APB2FZ1;  // [read-write] DBGMCU APB2 peripheral freeze register
    reserved_t<0x1> _0x54;
    volatile uint32_t APB4FZ1;  // [read-write] DBGMCU APB4 peripheral freeze register

    static constexpr uint32_t IDC_RESET_VALUE = 0x10006480;
    template<uint32_t X>
    static constexpr uint32_t IDC_DEV_ID =   // Device ID
        bit_field_t<0, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IDC_REV_ID =   // Revision
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t CR_RESET_VALUE = 0x0;
    static constexpr uint32_t CR_DBGSLEEP_CD = 0x1;     // Allow D1 domain debug in Sleep mode
    static constexpr uint32_t CR_DBGSTOP_CD = 0x2;      // Allow D1 domain debug in Stop mode
    static constexpr uint32_t CR_DBGSTBY_CD = 0x4;      // Allow D1 domain debug in Standby mode
    static constexpr uint32_t CR_DBGSTOP_SRD = 0x80;    // debug in SmartRun domain Stop mode
    static constexpr uint32_t CR_DBGSTBY_SRD = 0x100;   // debug in SmartRun domain Standby mode
    static constexpr uint32_t CR_TRACECLKEN = 0x100000; // Trace port clock enable
    static constexpr uint32_t CR_CDDBGCKEN = 0x200000;  // CPU domain debug clock enable
    static constexpr uint32_t CR_SRDDBGCKEN = 0x400000; // SmartRun domain debug clock enable
    static constexpr uint32_t CR_TRGOEN = 0x10000000;   // External trigger output enable

    static constexpr uint32_t APB3FZ1_RESET_VALUE = 0x0;
    static constexpr uint32_t APB3FZ1_WWDG = 0x40; // WWDG stop in debug

    static constexpr uint32_t APB1LFZ1_RESET_VALUE = 0x0;
    static constexpr uint32_t APB1LFZ1_TIM2 = 0x1;      // TIM2 stop in debug
    static constexpr uint32_t APB1LFZ1_TIM3 = 0x2;      // TIM3 stop in debug
    static constexpr uint32_t APB1LFZ1_TIM4 = 0x4;      // TIM4 stop in debug
    static constexpr uint32_t APB1LFZ1_TIM5 = 0x8;      // TIM5 stop in debug
    static constexpr uint32_t APB1LFZ1_TIM6 = 0x10;     // TIM6 stop in debug
    static constexpr uint32_t APB1LFZ1_TIM7 = 0x20;     // TIM7 stop in debug
    static constexpr uint32_t APB1LFZ1_TIM12 = 0x40;    // TIM12 stop in debug
    static constexpr uint32_t APB1LFZ1_TIM13 = 0x80;    // TIM13 stop in debug
    static constexpr uint32_t APB1LFZ1_TIM14 = 0x100;   // TIM14 stop in debug
    static constexpr uint32_t APB1LFZ1_LPTIM1 = 0x200;  // LPTIM1 stop in debug
    static constexpr uint32_t APB1LFZ1_I2C1 = 0x200000; // I2C1 SMBUS timeout stop in debug
    static constexpr uint32_t APB1LFZ1_I2C2 = 0x400000; // I2C2 SMBUS timeout stop in debug
    static constexpr uint32_t APB1LFZ1_I2C3 = 0x800000; // I2C3 SMBUS timeout stop in debug

    static constexpr uint32_t APB2FZ1_RESET_VALUE = 0x0;
    static constexpr uint32_t APB2FZ1_TIM1 = 0x1;      // TIM1 stop in debug
    static constexpr uint32_t APB2FZ1_TIM8 = 0x2;      // TIM8 stop in debug
    static constexpr uint32_t APB2FZ1_TIM15 = 0x10000; // TIM15 stop in debug
    static constexpr uint32_t APB2FZ1_TIM16 = 0x20000; // TIM16 stop in debug
    static constexpr uint32_t APB2FZ1_TIM17 = 0x40000; // TIM17 stop in debug

    static constexpr uint32_t APB4FZ1_RESET_VALUE = 0x0;
    static constexpr uint32_t APB4FZ1_I2C4 = 0x80;       // I2C4 SMBUS timeout stop in debug
    static constexpr uint32_t APB4FZ1_LPTIM2 = 0x200;    // LPTIM2 stop in debug
    static constexpr uint32_t APB4FZ1_LPTIM3 = 0x400;    // LPTIM3 stop in debug
    static constexpr uint32_t APB4FZ1_RTC = 0x10000;     // RTC stop in debug
    static constexpr uint32_t APB4FZ1_WDGLSCD = 0x40000; // LS watchdog for CPU domain stop in debug
};


template<>
struct peripheral_t<STM32H742x, DBGMCU>
{
    typedef stm32h742x_dbgmcu_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, DBGMCU>
{
    typedef stm32h742x_dbgmcu_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, DBGMCU>
{
    typedef stm32h742x_dbgmcu_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, DBGMCU>
{
    typedef stm32h743_dbgmcu_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, DBGMCU>
{
    typedef stm32h745_cm4_dbgmcu_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, DBGMCU>
{
    typedef stm32h745_cm4_dbgmcu_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, DBGMCU>
{
    typedef stm32h745_cm4_dbgmcu_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, DBGMCU>
{
    typedef stm32h745_cm4_dbgmcu_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, DBGMCU>
{
    typedef stm32h745_cm4_dbgmcu_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, DBGMCU>
{
    typedef stm32h745_cm4_dbgmcu_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, DBGMCU>
{
    typedef stm32h745_cm4_dbgmcu_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, DBGMCU>
{
    typedef stm32h745_cm4_dbgmcu_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, DBGMCU>
{
    typedef stm32h7a3x_dbgmcu_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, DBGMCU>
{
    typedef stm32h7a3x_dbgmcu_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, DBGMCU>
{
    typedef stm32h7a3x_dbgmcu_t T;
    static T& V;
};

using dbgmcu_t = peripheral_t<mcu_svd, DBGMCU>;
