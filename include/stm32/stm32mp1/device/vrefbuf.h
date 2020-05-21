#pragma once

////
//
//      STM32MP1 VREFBUF peripherals
//
////

////
//
//      VREFBUF
//
////

struct stm32mp15xxx_vrefbuf_t
{
    volatile uint32_t VREFBUF_CSR; // VREFBUF control and status register
    volatile uint32_t VREFBUF_CCR; // [read-write] VREFBUF calibration control register

    static constexpr uint32_t VREFBUF_CSR_RESET_VALUE = 0x2;
    static constexpr uint32_t VREFBUF_CSR_ENVR = 0x1; // ENVR
    static constexpr uint32_t VREFBUF_CSR_HIZ = 0x2;  // HIZ
    static constexpr uint32_t VREFBUF_CSR_VRR = 0x8;  // VRR
    template<uint32_t X>
    static constexpr uint32_t VREFBUF_CSR_VRS =       // VRS
        bit_field_t<4, 0x7>::value<X>();

    static constexpr uint32_t VREFBUF_CCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t VREFBUF_CCR_TRIM =   // TRIM
        bit_field_t<0, 0x3f>::value<X>();
};


template<>
struct peripheral_t<STM32MP15xxx, VREFBUF>
{
    typedef stm32mp15xxx_vrefbuf_t T;
    static T& V;
};

using vrefbuf_t = peripheral_t<mcu_svd, VREFBUF>;

