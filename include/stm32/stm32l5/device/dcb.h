#pragma once

////
//
//      STM32L5 DCB peripherals
//
///

// DCB: Debug Control Block

struct stm32l552_dcb_t
{
    volatile uint32_t DSCSR; // Debug Security Control and Status Register

    static constexpr uint32_t DSCSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DSCSR_CDS = 0x10000; // Current domain Secure
};

template<>
struct peripheral_t<STM32L552, DCB>
{
    using T = stm32l552_dcb_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, DCB>
{
    using T = stm32l552_dcb_t;
    static T& V;
};

using dcb_t = peripheral_t<svd, DCB>;
