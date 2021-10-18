#pragma once

////
//
//      STM32L4 VREF peripherals
//
///

// VREFBUF: Voltage reference buffer

struct stm32l476_vrefbuf_t
{
    volatile uint32_t CSR; // VREF control and status register
    volatile uint32_t CCR; // calibration control register

    static constexpr uint32_t CSR_RESET_VALUE = 0x2; // Reset value
    static constexpr uint32_t CSR_ENVR = 0x1; // Voltage reference buffer enable
    static constexpr uint32_t CSR_HIZ = 0x2; // High impedance mode
    static constexpr uint32_t CSR_VRS = 0x4; // Voltage reference scale
    static constexpr uint32_t CSR_VRR = 0x8; // Voltage reference buffer ready

    static constexpr uint32_t CCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> CCR_TRIM; // Trimming code
};

template<>
struct peripheral_t<STM32L476, VREFBUF>
{
    static constexpr periph_t P = VREFBUF;
    using T = stm32l476_vrefbuf_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L496, VREFBUF>
{
    static constexpr periph_t P = VREFBUF;
    using T = stm32l476_vrefbuf_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4x1, VREFBUF>
{
    static constexpr periph_t P = VREFBUF;
    using T = stm32l476_vrefbuf_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4x2, VREFBUF>
{
    static constexpr periph_t P = VREFBUF;
    using T = stm32l476_vrefbuf_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4x3, VREFBUF>
{
    static constexpr periph_t P = VREFBUF;
    using T = stm32l476_vrefbuf_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4x5, VREFBUF>
{
    static constexpr periph_t P = VREFBUF;
    using T = stm32l476_vrefbuf_t;
    static T& V;
};

using vrefbuf_t = peripheral_t<svd, VREFBUF>;
