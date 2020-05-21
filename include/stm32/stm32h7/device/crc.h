#pragma once

////
//
//      STM32H7 CRC peripherals
//
////

////
//
//      Cryptographic processor
//
////

struct stm32h742x_crc_t
{
    volatile uint32_t DR;   // [read-write] Data register
    volatile uint32_t IDR;  // [read-write] Independent Data register
    volatile uint32_t CR;   // Control register
    volatile uint32_t INIT; // [read-write] Initial CRC value
    volatile uint32_t POL;  // [read-write] CRC polynomial

    static constexpr uint32_t DR_RESET_VALUE = 0xffffffff;

    static constexpr uint32_t IDR_RESET_VALUE = 0x0;

    static constexpr uint32_t CR_RESET_VALUE = 0x0;
    static constexpr uint32_t CR_RESET = 0x1;    // RESET bit
    template<uint32_t X>
    static constexpr uint32_t CR_POLYSIZE =      // Polynomial size
        bit_field_t<3, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CR_REV_IN =        // Reverse input data
        bit_field_t<5, 0x3>::value<X>();
    static constexpr uint32_t CR_REV_OUT = 0x80; // Reverse output data

    static constexpr uint32_t INIT_RESET_VALUE = 0x0;

    static constexpr uint32_t POL_RESET_VALUE = 0x0;
};


template<>
struct peripheral_t<STM32H742x, CRC>
{
    typedef stm32h742x_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, CRC>
{
    typedef stm32h742x_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, CRC>
{
    typedef stm32h742x_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, CRC>
{
    typedef stm32h742x_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, CRC>
{
    typedef stm32h742x_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, CRC>
{
    typedef stm32h742x_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, CRC>
{
    typedef stm32h742x_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, CRC>
{
    typedef stm32h742x_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, CRC>
{
    typedef stm32h742x_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, CRC>
{
    typedef stm32h742x_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, CRC>
{
    typedef stm32h742x_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, CRC>
{
    typedef stm32h742x_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, CRC>
{
    typedef stm32h742x_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, CRC>
{
    typedef stm32h742x_crc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, CRC>
{
    typedef stm32h742x_crc_t T;
    static T& V;
};

using crc_t = peripheral_t<mcu_svd, CRC>;

