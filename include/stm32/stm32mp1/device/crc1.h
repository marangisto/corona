#pragma once

////
//
//      STM32MP1 CRC1 peripherals
//
////

////
//
//      CRC1
//
////

struct stm32mp15xxx_crc1_t
{
    volatile uint32_t CRC_DR;   // [read-write] CRC data register
    volatile uint32_t CRC_IDR;  // [read-write] CRC independent data register
    volatile uint32_t CRC_CR;   // [read-write] CRC control register
    reserved_t<0x1> _0x10;
    volatile uint32_t CRC_INIT; // [read-write] CRC initial value
    volatile uint32_t CRC_POL;  // [read-write] CRC polynomial

    static constexpr uint32_t CRC_DR_RESET_VALUE = 0xffffffff;

    static constexpr uint32_t CRC_IDR_RESET_VALUE = 0x0;

    static constexpr uint32_t CRC_CR_RESET_VALUE = 0x0;
    static constexpr uint32_t CRC_CR_RESET = 0x1;    // RESET
    template<uint32_t X>
    static constexpr uint32_t CRC_CR_POLYSIZE =      // POLYSIZE
        bit_field_t<3, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CRC_CR_REV_IN =        // REV_IN
        bit_field_t<5, 0x3>::value<X>();
    static constexpr uint32_t CRC_CR_REV_OUT = 0x80; // REV_OUT

    static constexpr uint32_t CRC_INIT_RESET_VALUE = 0xffffffff;

    static constexpr uint32_t CRC_POL_RESET_VALUE = 0x4c11db7;
};


template<>
struct peripheral_t<STM32MP15xxx, CRC1>
{
    typedef stm32mp15xxx_crc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32MP15xxx, CRC2>
{
    typedef stm32mp15xxx_crc1_t T;
    static T& V;
};

using crc1_t = peripheral_t<mcu_svd, CRC1>;
using crc2_t = peripheral_t<mcu_svd, CRC2>;

