#pragma once

////
//
//      STM32F7 DBGMCU peripherals
//
///

// DBGMCU: MCU debug component

struct stm32f767_dbgmcu_t
{
    volatile uint32_t IDCODE; // DBGMCU_IDCODE

    static constexpr uint32_t IDCODE_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> IDCODE_DEV_ID; // Device identifier
    typedef bit_field_t<16, 0xffff> IDCODE_REV_ID; // Revision identifie
};

template<>
struct peripheral_t<STM32F767, DBGMCU>
{
    static constexpr periph_t P = DBGMCU;
    using T = stm32f767_dbgmcu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, DBGMCU>
{
    static constexpr periph_t P = DBGMCU;
    using T = stm32f767_dbgmcu_t;
    static T& V;
};

using dbgmcu_t = peripheral_t<svd, DBGMCU>;
