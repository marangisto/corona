#pragma once

////
//
//      STM32F7 DBGMCU peripherals
//
////

////
//
//      MCU debug component
//
////

struct stm32f767_dbgmcu_t
{
    volatile uint32_t IDCODE; // [read-only] DBGMCU_IDCODE

    static constexpr uint32_t IDCODE_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IDCODE_DEV_ID =   // Device identifier
        bit_field_t<0, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IDCODE_REV_ID =   // Revision identifie
        bit_field_t<16, 0xffff>::value<X>();
};


template<>
struct peripheral_t<STM32F767, DBGMCU>
{
    typedef stm32f767_dbgmcu_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, DBGMCU>
{
    typedef stm32f767_dbgmcu_t T;
    static T& V;
};

using dbgmcu_t = peripheral_t<mcu_svd, DBGMCU>;

