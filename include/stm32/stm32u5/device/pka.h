#pragma once

////
//
//      STM32U5 PKA peripherals
//
///

// PKA: Private key accelerator

struct stm32u5xx_pka_t
{
    volatile uint32_t CR; // Control register
    volatile uint32_t SR; // PKA status register
    volatile uint32_t CLRFR; // PKA clear flag register

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_OPERRIE = 0x200000; // Operation error interrupt enable
    static constexpr uint32_t CR_ADDRERRIE = 0x100000; // Address error interrupt enable
    static constexpr uint32_t CR_RAMERRIE = 0x80000; // RAM error interrupt enable
    static constexpr uint32_t CR_PROCENDIE = 0x20000; // End of operation interrupt enable
    typedef bit_field_t<8, 0x3f> CR_MODE; // PKA Operation Mode
    static constexpr uint32_t CR_START = 0x2; // Start the operation
    static constexpr uint32_t CR_EN = 0x1; // Peripheral Enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_INITOK = 0x1; // INITOK
    static constexpr uint32_t SR_BUSY = 0x10000; // PKA operation is in progress
    static constexpr uint32_t SR_PROCENDF = 0x20000; // PKA End of Operation flag
    static constexpr uint32_t SR_RAMERRF = 0x80000; // RAMERRF
    static constexpr uint32_t SR_ADDRERRF = 0x100000; // ADDRERRF
    static constexpr uint32_t SR_OPERRF = 0x200000; // OPERRF

    static constexpr uint32_t CLRFR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CLRFR_PROCENDFC = 0x20000; // Clear PKA End of Operation flag
    static constexpr uint32_t CLRFR_RAMERRFC = 0x80000; // RAMERRFC
    static constexpr uint32_t CLRFR_ADDRERRFC = 0x100000; // ADDRERRFC
    static constexpr uint32_t CLRFR_OPERRFC = 0x200000; // OPERRFC
};

template<>
struct peripheral_t<STM32U5xx, PKA>
{
    static constexpr periph_t P = PKA;
    using T = stm32u5xx_pka_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, SEC_PKA>
{
    static constexpr periph_t P = SEC_PKA;
    using T = stm32u5xx_pka_t;
    static T& V;
};

using pka_t = peripheral_t<svd, PKA>;
using sec_pka_t = peripheral_t<svd, SEC_PKA>;
