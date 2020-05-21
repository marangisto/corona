#pragma once

////
//
//      STM32G4 CRC peripherals
//
////

////
//
//      Cyclic redundancy check calculation unit
//
////

struct stm32g431xx_crc_t
{
    volatile uint32_t DR;   // [read-write] Data register
    volatile uint32_t IDR;  // [read-write] Independent data register
    volatile uint32_t CR;   // Control register
    reserved_t<0x1> _0x10;
    volatile uint32_t INIT; // [read-write] Initial CRC value
    volatile uint32_t POL;  // [read-write] polynomial

    static constexpr uint32_t DR_RESET_VALUE = 0xffffffff;

    static constexpr uint32_t IDR_RESET_VALUE = 0x0;

    static constexpr uint32_t CR_RESET_VALUE = 0x0;
    static constexpr uint32_t CR_REV_OUT = 0x80; // Reverse output data
    template<uint32_t X>
    static constexpr uint32_t CR_REV_IN =        // Reverse input data
        bit_field_t<5, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CR_POLYSIZE =      // Polynomial size
        bit_field_t<3, 0x3>::value<X>();
    static constexpr uint32_t CR_RESET = 0x1;    // RESET bit

    static constexpr uint32_t INIT_RESET_VALUE = 0xffffffff;

    static constexpr uint32_t POL_RESET_VALUE = 0x4c11db7;
};


template<>
struct peripheral_t<STM32G431xx, CRC>
{
    typedef stm32g431xx_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G441xx, CRC>
{
    typedef stm32g431xx_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G471xx, CRC>
{
    typedef stm32g431xx_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G473xx, CRC>
{
    typedef stm32g431xx_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G474xx, CRC>
{
    typedef stm32g431xx_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G483xx, CRC>
{
    typedef stm32g431xx_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, CRC>
{
    typedef stm32g431xx_crc_t T;
    static T& V;
};

using crc_t = peripheral_t<mcu_svd, CRC>;

