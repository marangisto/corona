#pragma once

////
//
//      STM32H7 DLYB peripherals
//
///

// DELAY_BLOCK_SDMMC1: DELAY_Block_SDMMC1

struct stm32h723_delay_block_sdmmc1_t
{
    volatile uint32_t CR; // DLYB control register
    volatile uint32_t CFGR; // DLYB configuration register

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_DEN = 0x1; // Delay block enable bit
    static constexpr uint32_t CR_SEN = 0x2; // Sampler length enable bit

    static constexpr uint32_t CFGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> CFGR_SEL; // Select the phase for the Output clock
    typedef bit_field_t<8, 0x7f> CFGR_UNIT; // Delay Defines the delay of a Unit delay cell
    typedef bit_field_t<16, 0xfff> CFGR_LNG; // Delay line length value
    static constexpr uint32_t CFGR_LNGF = 0x80000000; // Length valid flag
};

template<>
struct peripheral_t<STM32H723, DELAY_BLOCK_OCTOSPI1>
{
    static constexpr periph_t P = DELAY_BLOCK_OCTOSPI1;
    using T = stm32h723_delay_block_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H723, DELAY_BLOCK_OCTOSPI2>
{
    static constexpr periph_t P = DELAY_BLOCK_OCTOSPI2;
    using T = stm32h723_delay_block_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H723, DELAY_BLOCK_SDMMC1>
{
    static constexpr periph_t P = DELAY_BLOCK_SDMMC1;
    using T = stm32h723_delay_block_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H723, DELAY_BLOCK_SDMMC2>
{
    static constexpr periph_t P = DELAY_BLOCK_SDMMC2;
    using T = stm32h723_delay_block_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H73x, DELAY_BLOCK_OCTOSPI1>
{
    static constexpr periph_t P = DELAY_BLOCK_OCTOSPI1;
    using T = stm32h723_delay_block_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H73x, DELAY_BLOCK_OCTOSPI2>
{
    static constexpr periph_t P = DELAY_BLOCK_OCTOSPI2;
    using T = stm32h723_delay_block_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H73x, DELAY_BLOCK_SDMMC1>
{
    static constexpr periph_t P = DELAY_BLOCK_SDMMC1;
    using T = stm32h723_delay_block_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H73x, DELAY_BLOCK_SDMMC2>
{
    static constexpr periph_t P = DELAY_BLOCK_SDMMC2;
    using T = stm32h723_delay_block_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, DELAY_BLOCK_QUADSPI>
{
    static constexpr periph_t P = DELAY_BLOCK_QUADSPI;
    using T = stm32h723_delay_block_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, DELAY_BLOCK_SDMMC1>
{
    static constexpr periph_t P = DELAY_BLOCK_SDMMC1;
    using T = stm32h723_delay_block_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, DELAY_BLOCK_SDMMC2>
{
    static constexpr periph_t P = DELAY_BLOCK_SDMMC2;
    using T = stm32h723_delay_block_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, DELAY_BLOCK_QUADSPI>
{
    static constexpr periph_t P = DELAY_BLOCK_QUADSPI;
    using T = stm32h723_delay_block_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, DELAY_BLOCK_SDMMC1>
{
    static constexpr periph_t P = DELAY_BLOCK_SDMMC1;
    using T = stm32h723_delay_block_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, DELAY_BLOCK_SDMMC2>
{
    static constexpr periph_t P = DELAY_BLOCK_SDMMC2;
    using T = stm32h723_delay_block_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, DELAY_BLOCK_QUADSPI>
{
    static constexpr periph_t P = DELAY_BLOCK_QUADSPI;
    using T = stm32h723_delay_block_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, DELAY_BLOCK_SDMMC1>
{
    static constexpr periph_t P = DELAY_BLOCK_SDMMC1;
    using T = stm32h723_delay_block_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, DELAY_BLOCK_SDMMC2>
{
    static constexpr periph_t P = DELAY_BLOCK_SDMMC2;
    using T = stm32h723_delay_block_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, DELAY_BLOCK_QUADSPI>
{
    static constexpr periph_t P = DELAY_BLOCK_QUADSPI;
    using T = stm32h723_delay_block_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, DELAY_BLOCK_SDMMC1>
{
    static constexpr periph_t P = DELAY_BLOCK_SDMMC1;
    using T = stm32h723_delay_block_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, DELAY_BLOCK_SDMMC2>
{
    static constexpr periph_t P = DELAY_BLOCK_SDMMC2;
    using T = stm32h723_delay_block_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, DELAY_BLOCK_QUADSPI>
{
    static constexpr periph_t P = DELAY_BLOCK_QUADSPI;
    using T = stm32h723_delay_block_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, DELAY_BLOCK_SDMMC1>
{
    static constexpr periph_t P = DELAY_BLOCK_SDMMC1;
    using T = stm32h723_delay_block_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, DELAY_BLOCK_SDMMC2>
{
    static constexpr periph_t P = DELAY_BLOCK_SDMMC2;
    using T = stm32h723_delay_block_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, DELAY_BLOCK_QUADSPI>
{
    static constexpr periph_t P = DELAY_BLOCK_QUADSPI;
    using T = stm32h723_delay_block_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, DELAY_BLOCK_SDMMC1>
{
    static constexpr periph_t P = DELAY_BLOCK_SDMMC1;
    using T = stm32h723_delay_block_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, DELAY_BLOCK_SDMMC2>
{
    static constexpr periph_t P = DELAY_BLOCK_SDMMC2;
    using T = stm32h723_delay_block_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, DELAY_BLOCK_QUADSPI>
{
    static constexpr periph_t P = DELAY_BLOCK_QUADSPI;
    using T = stm32h723_delay_block_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, DELAY_BLOCK_SDMMC1>
{
    static constexpr periph_t P = DELAY_BLOCK_SDMMC1;
    using T = stm32h723_delay_block_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, DELAY_BLOCK_SDMMC2>
{
    static constexpr periph_t P = DELAY_BLOCK_SDMMC2;
    using T = stm32h723_delay_block_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, DELAY_BLOCK_QUADSPI>
{
    static constexpr periph_t P = DELAY_BLOCK_QUADSPI;
    using T = stm32h723_delay_block_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, DELAY_BLOCK_SDMMC1>
{
    static constexpr periph_t P = DELAY_BLOCK_SDMMC1;
    using T = stm32h723_delay_block_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, DELAY_BLOCK_SDMMC2>
{
    static constexpr periph_t P = DELAY_BLOCK_SDMMC2;
    using T = stm32h723_delay_block_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, DELAY_BLOCK_QUADSPI>
{
    static constexpr periph_t P = DELAY_BLOCK_QUADSPI;
    using T = stm32h723_delay_block_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, DELAY_BLOCK_SDMMC1>
{
    static constexpr periph_t P = DELAY_BLOCK_SDMMC1;
    using T = stm32h723_delay_block_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, DELAY_BLOCK_SDMMC2>
{
    static constexpr periph_t P = DELAY_BLOCK_SDMMC2;
    using T = stm32h723_delay_block_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, DELAY_BLOCK_QUADSPI>
{
    static constexpr periph_t P = DELAY_BLOCK_QUADSPI;
    using T = stm32h723_delay_block_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, DELAY_BLOCK_SDMMC1>
{
    static constexpr periph_t P = DELAY_BLOCK_SDMMC1;
    using T = stm32h723_delay_block_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, DELAY_BLOCK_SDMMC2>
{
    static constexpr periph_t P = DELAY_BLOCK_SDMMC2;
    using T = stm32h723_delay_block_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, DELAY_BLOCK_QUADSPI>
{
    static constexpr periph_t P = DELAY_BLOCK_QUADSPI;
    using T = stm32h723_delay_block_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, DELAY_BLOCK_SDMMC1>
{
    static constexpr periph_t P = DELAY_BLOCK_SDMMC1;
    using T = stm32h723_delay_block_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, DELAY_BLOCK_SDMMC2>
{
    static constexpr periph_t P = DELAY_BLOCK_SDMMC2;
    using T = stm32h723_delay_block_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, DELAY_BLOCK_QUADSPI>
{
    static constexpr periph_t P = DELAY_BLOCK_QUADSPI;
    using T = stm32h723_delay_block_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, DELAY_BLOCK_SDMMC1>
{
    static constexpr periph_t P = DELAY_BLOCK_SDMMC1;
    using T = stm32h723_delay_block_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, DELAY_BLOCK_SDMMC2>
{
    static constexpr periph_t P = DELAY_BLOCK_SDMMC2;
    using T = stm32h723_delay_block_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, DELAY_BLOCK_OCTOSPI1>
{
    static constexpr periph_t P = DELAY_BLOCK_OCTOSPI1;
    using T = stm32h723_delay_block_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, DELAY_BLOCK_OCTOSPI2>
{
    static constexpr periph_t P = DELAY_BLOCK_OCTOSPI2;
    using T = stm32h723_delay_block_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, DELAY_BLOCK_SDMMC1>
{
    static constexpr periph_t P = DELAY_BLOCK_SDMMC1;
    using T = stm32h723_delay_block_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, DELAY_BLOCK_SDMMC2>
{
    static constexpr periph_t P = DELAY_BLOCK_SDMMC2;
    using T = stm32h723_delay_block_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, DELAY_BLOCK_OCTOSPI1>
{
    static constexpr periph_t P = DELAY_BLOCK_OCTOSPI1;
    using T = stm32h723_delay_block_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, DELAY_BLOCK_OCTOSPI2>
{
    static constexpr periph_t P = DELAY_BLOCK_OCTOSPI2;
    using T = stm32h723_delay_block_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, DELAY_BLOCK_SDMMC1>
{
    static constexpr periph_t P = DELAY_BLOCK_SDMMC1;
    using T = stm32h723_delay_block_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, DELAY_BLOCK_SDMMC2>
{
    static constexpr periph_t P = DELAY_BLOCK_SDMMC2;
    using T = stm32h723_delay_block_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, DELAY_BLOCK_OCTOSPI1>
{
    static constexpr periph_t P = DELAY_BLOCK_OCTOSPI1;
    using T = stm32h723_delay_block_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, DELAY_BLOCK_OCTOSPI2>
{
    static constexpr periph_t P = DELAY_BLOCK_OCTOSPI2;
    using T = stm32h723_delay_block_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, DELAY_BLOCK_SDMMC1>
{
    static constexpr periph_t P = DELAY_BLOCK_SDMMC1;
    using T = stm32h723_delay_block_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, DELAY_BLOCK_SDMMC2>
{
    static constexpr periph_t P = DELAY_BLOCK_SDMMC2;
    using T = stm32h723_delay_block_sdmmc1_t;
    static T& V;
};

using delay_block_octospi1_t = peripheral_t<svd, DELAY_BLOCK_OCTOSPI1>;
using delay_block_octospi2_t = peripheral_t<svd, DELAY_BLOCK_OCTOSPI2>;
using delay_block_quadspi_t = peripheral_t<svd, DELAY_BLOCK_QUADSPI>;
using delay_block_sdmmc1_t = peripheral_t<svd, DELAY_BLOCK_SDMMC1>;
using delay_block_sdmmc2_t = peripheral_t<svd, DELAY_BLOCK_SDMMC2>;
