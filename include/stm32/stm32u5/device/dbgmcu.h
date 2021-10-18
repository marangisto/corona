#pragma once

////
//
//      STM32U5 DBGMCU peripherals
//
///

// DBGMCU: MCU debug component

struct stm32u5xx_dbgmcu_t
{
    volatile uint32_t IDCODE; // DBGMCU_IDCODE
    volatile uint32_t CR; // Debug MCU configuration register
    volatile uint32_t APB1LFZR; // Debug MCU APB1L peripheral freeze register
    volatile uint32_t APB1HFZR; // Debug MCU APB1H peripheral freeze register
    volatile uint32_t APB2FZR; // Debug MCU APB2 peripheral freeze register
    volatile uint32_t APB3FZR; // Debug MCU APB3 peripheral freeze register
    reserved_t<0x2> _0x18;
    volatile uint32_t AHB1FZR; // Debug MCU AHB1 peripheral freeze register
    reserved_t<0x1> _0x24;
    volatile uint32_t AHB3FZR; // Debug MCU AHB3 peripheral freeze register
    reserved_t<0x34> _0x2c;
    volatile uint32_t DBGMCU_SR; // DBGMCU status register
    volatile uint32_t DBGMCU_DBG_AUTH_HOST; // DBGMCU debug host authentication register
    volatile uint32_t DBGMCU_DBG_AUTH_DEVICE; // DBGMCU debug device authentication register
    reserved_t<0x3b2> _0x108;
    volatile uint32_t PIDR4; // Debug MCU CoreSight peripheral identity register 4
    reserved_t<0x3> _0xfd4;
    volatile uint32_t PIDR0; // Debug MCU CoreSight peripheral identity register 0
    volatile uint32_t PIDR1; // Debug MCU CoreSight peripheral identity register 1
    volatile uint32_t PIDR2; // Debug MCU CoreSight peripheral identity register 2
    volatile uint32_t PIDR3; // Debug MCU CoreSight peripheral identity register 3
    volatile uint32_t CIDR0; // Debug MCU CoreSight component identity register 0
    volatile uint32_t CIDR1; // Debug MCU CoreSight component identity register 1
    volatile uint32_t CIDR2; // Debug MCU CoreSight component identity register 2
    volatile uint32_t CIDR3; // Debug MCU CoreSight component identity register 3

    static constexpr uint32_t IDCODE_RESET_VALUE = 0x10006482; // Reset value
    typedef bit_field_t<0, 0xfff> IDCODE_DEV_ID; // Device dentification
    typedef bit_field_t<16, 0xffff> IDCODE_REV_ID; // Revision

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_DBG_STOP = 0x2; // Debug Stop mode
    static constexpr uint32_t CR_DBG_STANDBY = 0x4; // Debug Standby mode
    static constexpr uint32_t CR_TRACE_IOEN = 0x10; // Trace pin assignment control
    static constexpr uint32_t CR_TRACE_EN = 0x20; // trace port and clock enable
    typedef bit_field_t<6, 0x3> CR_TRACE_MODE; // Trace pin assignment control

    static constexpr uint32_t APB1LFZR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1LFZR_DBG_TIM2_STOP = 0x1; // TIM2 stop in debug
    static constexpr uint32_t APB1LFZR_DBG_TIM3_STOP = 0x2; // TIM3 stop in debug
    static constexpr uint32_t APB1LFZR_DBG_TIM4_STOP = 0x4; // TIM4 stop in debug
    static constexpr uint32_t APB1LFZR_DBG_TIM5_STOP = 0x8; // TIM5 stop in debug
    static constexpr uint32_t APB1LFZR_DBG_TIM6_STOP = 0x10; // TIM6 stop in debug
    static constexpr uint32_t APB1LFZR_DBG_TIM7_STOP = 0x20; // TIM7 stop in debug
    static constexpr uint32_t APB1LFZR_DBG_WWDG_STOP = 0x800; // Window watchdog counter stop in debug
    static constexpr uint32_t APB1LFZR_DBG_IWDG_STOP = 0x1000; // Independent watchdog counter stop in debug
    static constexpr uint32_t APB1LFZR_DBG_I2C1_STOP = 0x200000; // I2C1 SMBUS timeout stop in debug
    static constexpr uint32_t APB1LFZR_DBG_I2C2_STOP = 0x400000; // I2C2 SMBUS timeout stop in debug

    static constexpr uint32_t APB1HFZR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB1HFZR_DBG_I2C4_STOP = 0x2; // I2C4 stop in debug
    static constexpr uint32_t APB1HFZR_DBG_LPTIM2_STOP = 0x20; // LPTIM2 stop in debug

    static constexpr uint32_t APB2FZR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB2FZR_DBG_TIM1_STOP = 0x800; // TIM1 counter stopped when core is halted
    static constexpr uint32_t APB2FZR_DBG_TIM8_STOP = 0x2000; // TIM8 stop in debug
    static constexpr uint32_t APB2FZR_DBG_TIM15_STOP = 0x10000; // TIM15 counter stopped when core is halted
    static constexpr uint32_t APB2FZR_DBG_TIM16_STOP = 0x20000; // TIM16 counter stopped when core is halted
    static constexpr uint32_t APB2FZR_DBG_TIM17_STOP = 0x40000; // DBG_TIM17_STOP

    static constexpr uint32_t APB3FZR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t APB3FZR_DBG_I2C3_STOP = 0x400; // I2C3 stop in debug
    static constexpr uint32_t APB3FZR_DBG_LPTIM1_STOP = 0x20000; // LPTIM1 stop in debug
    static constexpr uint32_t APB3FZR_DBG_LPTIM3_STOP = 0x40000; // LPTIM3 stop in debug
    static constexpr uint32_t APB3FZR_DBG_LPTIM4_STOP = 0x80000; // LPTIM4 stop in debug
    static constexpr uint32_t APB3FZR_DBG_RTC_STOP = 0x40000000; // RTC stop in debug


    static constexpr uint32_t AHB1FZR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB1FZR_DBG_GPDMA0_STOP = 0x1; // GPDMA channel 0 stop in debug
    static constexpr uint32_t AHB1FZR_DBG_GPDMA1_STOP = 0x2; // GPDMA channel 1 stop in debug
    static constexpr uint32_t AHB1FZR_DBG_GPDMA2_STOP = 0x4; // GPDMA channel 2 stop in debug
    static constexpr uint32_t AHB1FZR_DBG_GPDMA3_STOP = 0x8; // GPDMA channel 3 stop in debug
    static constexpr uint32_t AHB1FZR_DBG_GPDMA4_STOP = 0x10; // GPDMA channel 4 stop in debug
    static constexpr uint32_t AHB1FZR_DBG_GPDMA5_STOP = 0x20; // GPDMA channel 5 stop in debug
    static constexpr uint32_t AHB1FZR_DBG_GPDMA6_STOP = 0x40; // GPDMA channel 6 stop in debug
    static constexpr uint32_t AHB1FZR_DBG_GPDMA7_STOP = 0x80; // GPDMA channel 7 stop in debug
    static constexpr uint32_t AHB1FZR_DBG_GPDMA8_STOP = 0x100; // GPDMA channel 8 stop in debug
    static constexpr uint32_t AHB1FZR_DBG_GPDMA9_STOP = 0x200; // GPDMA channel 9 stop in debug
    static constexpr uint32_t AHB1FZR_DBG_GPDMA10_STOP = 0x400; // GPDMA channel 10 stop in debug
    static constexpr uint32_t AHB1FZR_DBG_GPDMA11_STOP = 0x800; // GPDMA channel 11 stop in debug
    static constexpr uint32_t AHB1FZR_DBG_GPDMA12_STOP = 0x1000; // GPDMA channel 12 stop in debug
    static constexpr uint32_t AHB1FZR_DBG_GPDMA13_STOP = 0x2000; // GPDMA channel 13 stop in debug
    static constexpr uint32_t AHB1FZR_DBG_GPDMA14_STOP = 0x4000; // GPDMA channel 14 stop in debug
    static constexpr uint32_t AHB1FZR_DBG_GPDMA15_STOP = 0x8000; // GPDMA channel 15 stop in debug


    static constexpr uint32_t AHB3FZR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AHB3FZR_DBG_LPDMA0_STOP = 0x1; // LPDMA channel 0 stop in debug
    static constexpr uint32_t AHB3FZR_DBG_LPDMA1_STOP = 0x2; // LPDMA channel 1 stop in debug
    static constexpr uint32_t AHB3FZR_DBG_LPDMA2_STOP = 0x4; // LPDMA channel 2 stop in debug
    static constexpr uint32_t AHB3FZR_DBG_LPDMA3_STOP = 0x8; // LPDMA channel 3 stop in debug


    static constexpr uint32_t DBGMCU_SR_RESET_VALUE = 0x1; // Reset value
    typedef bit_field_t<0, 0xff> DBGMCU_SR_AP_PRESENT; // Bit n identifies whether access port AP n is present in device Bit n=0: APn absent Bit n=1: APn present
    typedef bit_field_t<8, 0xff> DBGMCU_SR_AP_LOCKED; // DECLARATION TO BE CONFIRMED by PRODUCT OWNER! Bit n identifies whether access port AP n is open (can be accessed via the debug port) or locked (debug access to the AP is blocked) Bit n=0: APn locked Bit n=1: APn enabled

    static constexpr uint32_t DBGMCU_DBG_AUTH_HOST_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DBGMCU_DBG_AUTH_HOST_AUTH_KEY; // Device authentication key The device specific 64-bit authentication key (OEM key) must be written to this register (in two successive 32-bit writes, least significant word first) to permit RDP regression. Writing a wrong key locks access to the device and prevent code execution from the Flash memory.

    static constexpr uint32_t DBGMCU_DBG_AUTH_DEVICE_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DBGMCU_DBG_AUTH_DEVICE_AUTH_ID; // Device specific ID Device specific ID used for RDP regression.


    static constexpr uint32_t PIDR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> PIDR4_JEP106CON; // JEP106 continuation code
    typedef bit_field_t<4, 0xf> PIDR4_KCOUNT_4; // register file size


    static constexpr uint32_t PIDR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> PIDR0_PARTNUM; // part number bits [7:0]

    static constexpr uint32_t PIDR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> PIDR1_PARTNUM; // part number bits [11:8]
    typedef bit_field_t<4, 0xf> PIDR1_JEP106ID; // JEP106 identity code bits [3:0]

    static constexpr uint32_t PIDR2_RESET_VALUE = 0xa; // Reset value
    typedef bit_field_t<0, 0x7> PIDR2_JEP106ID; // JEP106 identity code bits [6:4]
    static constexpr uint32_t PIDR2_JEDEC = 0x8; // JEDEC assigned value
    typedef bit_field_t<4, 0xf> PIDR2_REVISION; // component revision number

    static constexpr uint32_t PIDR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> PIDR3_CMOD; // customer modified
    typedef bit_field_t<4, 0xf> PIDR3_REVAND; // metal fix version

    static constexpr uint32_t CIDR0_RESET_VALUE = 0xd; // Reset value
    typedef bit_field_t<0, 0xff> CIDR0_PREAMBLE; // component identification bits [7:0]

    static constexpr uint32_t CIDR1_RESET_VALUE = 0xf0; // Reset value
    typedef bit_field_t<0, 0xf> CIDR1_PREAMBLE; // component identification bits [11:8]
    typedef bit_field_t<4, 0xf> CIDR1_CLASS; // component identification bits [15:12] - component class

    static constexpr uint32_t CIDR2_RESET_VALUE = 0x5; // Reset value
    typedef bit_field_t<0, 0xff> CIDR2_PREAMBLE; // component identification bits [23:16]

    static constexpr uint32_t CIDR3_RESET_VALUE = 0xb1; // Reset value
    typedef bit_field_t<0, 0xff> CIDR3_PREAMBLE; // component identification bits [31:24]
};

template<>
struct peripheral_t<STM32U5xx, DBGMCU>
{
    static constexpr periph_t P = DBGMCU;
    using T = stm32u5xx_dbgmcu_t;
    static T& V;
};

using dbgmcu_t = peripheral_t<svd, DBGMCU>;
