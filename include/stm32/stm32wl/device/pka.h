#pragma once

////
//
//      STM32WL PKA peripherals
//
///

// PKA: Public key accelerator

struct stm32wl5x_cm0p_pka_t
{
    volatile uint32_t CR; // control register
    volatile uint32_t SR; // status register
    volatile uint32_t CLRFR; // clear flag register

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_ADDRERRIE = 0x100000; // Address error interrupt enable
    static constexpr uint32_t CR_RAMERRIE = 0x80000; // RAM error interrupt enable
    static constexpr uint32_t CR_PROCENDIE = 0x20000; // PROCENDIE
    typedef bit_field_t<8, 0x3f> CR_MODE; // PKA operation code
    static constexpr uint32_t CR_START = 0x2; // start the operation
    static constexpr uint32_t CR_EN = 0x1; // PKA enable.

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_ADDRERRF = 0x100000; // Address error flag
    static constexpr uint32_t SR_RAMERRF = 0x80000; // PKA RAM error flag
    static constexpr uint32_t SR_PROCENDF = 0x20000; // PKA End of Operation flag
    static constexpr uint32_t SR_BUSY = 0x10000; // PKA operation is in progressThis bit is set to 1 whenever START bit in the PKA_CR is set. It is automatically cleared when the computation is complete, meaning that PKA RAM can be safely accessed and a new operation can be started.

    static constexpr uint32_t CLRFR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CLRFR_ADDRERRFC = 0x100000; // Clear Address error flag
    static constexpr uint32_t CLRFR_RAMERRFC = 0x80000; // Clear PKA RAM error flag
    static constexpr uint32_t CLRFR_PROCENDFC = 0x20000; // Clear PKA End of Operation flag
};

template<>
struct peripheral_t<STM32WL5x_CM0P, PKA>
{
    static constexpr periph_t P = PKA;
    using T = stm32wl5x_cm0p_pka_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WL5x_CM4, PKA>
{
    static constexpr periph_t P = PKA;
    using T = stm32wl5x_cm0p_pka_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WLE5_CM4, PKA>
{
    static constexpr periph_t P = PKA;
    using T = stm32wl5x_cm0p_pka_t;
    static T& V;
};

using pka_t = peripheral_t<svd, PKA>;

template<int INST> struct pka_traits {};

template<> struct pka_traits<0>
{
    using pka = pka_t;
    static constexpr clock_source_t CLOCK = AHB_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.AHB3ENR |= RCC::T::AHB3ENR_PKAEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHB3ENR &= ~RCC::T::AHB3ENR_PKAEN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.AHB3SMENR |= RCC::T::AHB3SMENR_PKASMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.AHB3SMENR &= ~RCC::T::AHB3SMENR_PKASMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHB3RSTR |= RCC::T::AHB3RSTR_PKARST;
    }
};
