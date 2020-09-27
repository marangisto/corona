#pragma once

////
//
//      STM32L5 PKA peripherals
//
///

// PKA: PKA

struct stm32l562_pka_t
{
    volatile uint32_t PKA_CR; // PKA control register
    volatile uint32_t PKA_SR; // PKA status register
    volatile uint32_t PKA_CLRFR; // PKA clear flag register

    static constexpr uint32_t PKA_CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PKA_CR_EN = 0x1; // PKA Enable
    static constexpr uint32_t PKA_CR_START = 0x2; // Start the operation
    typedef bit_field_t<8, 0x3f> PKA_CR_MODE; // PKA operation code
    static constexpr uint32_t PKA_CR_PROCENDIE = 0x20000; // End of operation interrupt enable
    static constexpr uint32_t PKA_CR_RAMERRIE = 0x80000; // RAM error interrupt enable
    static constexpr uint32_t PKA_CR_ADDRERRIE = 0x100000; // Address error interrupt enable

    static constexpr uint32_t PKA_SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PKA_SR_BUSY = 0x10000; // PKA operation in progress
    static constexpr uint32_t PKA_SR_PROCENDF = 0x20000; // PKA end of operation flag
    static constexpr uint32_t PKA_SR_RAMERRF = 0x80000; // PKA ram error flag
    static constexpr uint32_t PKA_SR_ADDRERRF = 0x100000; // address er flag

    static constexpr uint32_t PKA_CLRFR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PKA_CLRFR_PROCENDFC = 0x20000; // clear PKA end of operation flag
    static constexpr uint32_t PKA_CLRFR_RAMERRFC = 0x80000; // CLEAR PKA RAM ERROR FLAG
    static constexpr uint32_t PKA_CLRFR_ADDRERRFC = 0x100000; // clear address error flag
};

template<>
struct peripheral_t<STM32L562, PKA>
{
    static constexpr periph_t P = PKA;
    using T = stm32l562_pka_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, SEC_PKA>
{
    static constexpr periph_t P = SEC_PKA;
    using T = stm32l562_pka_t;
    static T& V;
};

using pka_t = peripheral_t<svd, PKA>;
using sec_pka_t = peripheral_t<svd, SEC_PKA>;

template<int INST> struct pka_traits {};

template<> struct pka_traits<0>
{
    using pka = pka_t;

    template<typename RCC>
    static void enable()
    {
        RCC::V.AHB2ENR |= RCC::T::AHB2ENR_PKAEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHB2ENR &= ~RCC::T::AHB2ENR_PKAEN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.AHB2SMENR |= RCC::T::AHB2SMENR_PKASMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_PKASMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHB2RSTR |= RCC::T::AHB2RSTR_PKARST;
    }
};
