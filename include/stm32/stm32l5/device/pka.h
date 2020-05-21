#pragma once

////
//
//      STM32L5 PKA peripherals
//
////

////
//
//      PKA
//
////

struct stm32l562_pka_t
{
    volatile uint32_t PKA_CR;    // [read-write] PKA control register
    volatile uint32_t PKA_SR;    // [read-only] PKA status register
    volatile uint32_t PKA_CLRFR; // [write-only] PKA clear flag register

    static constexpr uint32_t PKA_CR_RESET_VALUE = 0x0;
    static constexpr uint32_t PKA_CR_EN = 0x1;             // PKA Enable
    static constexpr uint32_t PKA_CR_START = 0x2;          // Start the operation
    template<uint32_t X>
    static constexpr uint32_t PKA_CR_MODE =                // PKA operation code
        bit_field_t<8, 0x3f>::value<X>();
    static constexpr uint32_t PKA_CR_PROCENDIE = 0x20000;  // End of operation interrupt enable
    static constexpr uint32_t PKA_CR_RAMERRIE = 0x80000;   // RAM error interrupt enable
    static constexpr uint32_t PKA_CR_ADDRERRIE = 0x100000; // Address error interrupt enable

    static constexpr uint32_t PKA_SR_RESET_VALUE = 0x0;
    static constexpr uint32_t PKA_SR_BUSY = 0x10000;      // PKA operation in progress
    static constexpr uint32_t PKA_SR_PROCENDF = 0x20000;  // PKA end of operation flag
    static constexpr uint32_t PKA_SR_RAMERRF = 0x80000;   // PKA ram error flag
    static constexpr uint32_t PKA_SR_ADDRERRF = 0x100000; // address er flag

    static constexpr uint32_t PKA_CLRFR_RESET_VALUE = 0x0;
    static constexpr uint32_t PKA_CLRFR_PROCENDFC = 0x20000;  // clear PKA end of operation flag
    static constexpr uint32_t PKA_CLRFR_RAMERRFC = 0x80000;   // CLEAR PKA RAM ERROR FLAG
    static constexpr uint32_t PKA_CLRFR_ADDRERRFC = 0x100000; // clear address error flag
};


template<>
struct peripheral_t<STM32L562, PKA>
{
    typedef stm32l562_pka_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, SEC_PKA>
{
    typedef stm32l562_pka_t T;
    static T& V;
};

using pka_t = peripheral_t<mcu_svd, PKA>;
using sec_pka_t = peripheral_t<mcu_svd, SEC_PKA>;

