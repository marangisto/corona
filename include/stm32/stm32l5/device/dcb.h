#pragma once

////
//
//      STM32L5 DCB peripherals
//
////

////
//
//      Debug Control Block
//
////

struct stm32l552_dcb_t
{
    volatile uint32_t DSCSR; // [read-write] Debug Security Control and Status Register

    static constexpr uint32_t DSCSR_RESET_VALUE = 0x0;
    static constexpr uint32_t DSCSR_CDS = 0x10000; // Current domain Secure
};


template<>
struct peripheral_t<STM32L552, DCB>
{
    typedef stm32l552_dcb_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, DCB>
{
    typedef stm32l552_dcb_t T;
    static T& V;
};

using dcb_t = peripheral_t<mcu_svd, DCB>;

