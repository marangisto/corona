#pragma once

////
//
//      STM32L4 VREF peripherals
//
////

////
//
//      Voltage reference buffer
//
////

struct stm32l476_vrefbuf_t
{
    volatile uint32_t CSR; // VREF control and status register
    volatile uint32_t CCR; // [read-write] calibration control register

    static constexpr uint32_t CSR_RESET_VALUE = 0x2;
    static constexpr uint32_t CSR_ENVR = 0x1; // Voltage reference buffer enable
    static constexpr uint32_t CSR_HIZ = 0x2;  // High impedance mode
    static constexpr uint32_t CSR_VRS = 0x4;  // Voltage reference scale
    static constexpr uint32_t CSR_VRR = 0x8;  // Voltage reference buffer ready

    static constexpr uint32_t CCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCR_TRIM =   // Trimming code
        bit_field_t<0, 0x3f>::value<X>();
};


template<>
struct peripheral_t<STM32L476, VREFBUF>
{
    typedef stm32l476_vrefbuf_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L496, VREFBUF>
{
    typedef stm32l476_vrefbuf_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4x1, VREFBUF>
{
    typedef stm32l476_vrefbuf_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4x2, VREFBUF>
{
    typedef stm32l476_vrefbuf_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4x3, VREFBUF>
{
    typedef stm32l476_vrefbuf_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4x5, VREFBUF>
{
    typedef stm32l476_vrefbuf_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4x6, VREFBUF>
{
    typedef stm32l476_vrefbuf_t T;
    static T& V;
};

using vrefbuf_t = peripheral_t<mcu_svd, VREFBUF>;

