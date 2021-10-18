#pragma once

////
//
//      STM32U5 VREF peripherals
//
///

// VREFBUF: Voltage reference buffer

struct stm32u5xx_vrefbuf_t
{
    volatile uint32_t VREFBUF_CSR; // VREFBUF control and status register
    volatile uint32_t VREFBUF_CCR; // VREFBUF calibration control register

    static constexpr uint32_t VREFBUF_CSR_RESET_VALUE = 0x2; // Reset value
    static constexpr uint32_t VREFBUF_CSR_ENVR = 0x1; // ENVR
    static constexpr uint32_t VREFBUF_CSR_HIZ = 0x2; // HIZ
    static constexpr uint32_t VREFBUF_CSR_VRR = 0x8; // VRR
    typedef bit_field_t<4, 0x7> VREFBUF_CSR_VRS; // VRS

    static constexpr uint32_t VREFBUF_CCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> VREFBUF_CCR_TRIM; // TRIM
};

template<>
struct peripheral_t<STM32U5xx, SEC_VREFBUF>
{
    static constexpr periph_t P = SEC_VREFBUF;
    using T = stm32u5xx_vrefbuf_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, VREFBUF>
{
    static constexpr periph_t P = VREFBUF;
    using T = stm32u5xx_vrefbuf_t;
    static T& V;
};

using sec_vrefbuf_t = peripheral_t<svd, SEC_VREFBUF>;
using vrefbuf_t = peripheral_t<svd, VREFBUF>;
