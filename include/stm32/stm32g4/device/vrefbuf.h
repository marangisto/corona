#pragma once

////
//
//      STM32G4 VREFBUF peripherals
//
///

// VREFBUF: Voltage reference buffer

struct stm32g431xx_vrefbuf_t
{
    volatile uint32_t CSR; // VREF_BUF Control and Status Register
    volatile uint32_t CCR; // VREF_BUF Calibration Control Register

    static constexpr uint32_t CSR_RESET_VALUE = 0x2; // Reset value
    static constexpr uint32_t CSR_ENVR = 0x1; // Enable Voltage Reference
    static constexpr uint32_t CSR_HIZ = 0x2; // High impedence mode for the VREF_BUF
    static constexpr uint32_t CSR_VRR = 0x8; // Voltage reference buffer ready
    typedef bit_field_t<4, 0x3> CSR_VRS; // Voltage reference scale

    static constexpr uint32_t CCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> CCR_TRIM; // Trimming code
};

template<>
struct peripheral_t<STM32G431xx, VREFBUF>
{
    using T = stm32g431xx_vrefbuf_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G441xx, VREFBUF>
{
    using T = stm32g431xx_vrefbuf_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G471xx, VREFBUF>
{
    using T = stm32g431xx_vrefbuf_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G473xx, VREFBUF>
{
    using T = stm32g431xx_vrefbuf_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G474xx, VREFBUF>
{
    using T = stm32g431xx_vrefbuf_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G483xx, VREFBUF>
{
    using T = stm32g431xx_vrefbuf_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, VREFBUF>
{
    using T = stm32g431xx_vrefbuf_t;
    static T& V;
};

using vrefbuf_t = peripheral_t<svd, VREFBUF>;
