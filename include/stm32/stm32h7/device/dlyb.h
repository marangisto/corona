#pragma once

////
//
//      STM32H7 DLYB peripherals
//
////

////
//
//      DELAY_Block_SDMMC1
//
////

struct stm32h742x_delay_block_sdmmc1_t
{
    volatile uint32_t CR;   // [read-write] DLYB control register
    volatile uint32_t CFGR; // [read-write] DLYB configuration register

    static constexpr uint32_t CR_RESET_VALUE = 0x0;
    static constexpr uint32_t CR_DEN = 0x1; // Delay block enable bit
    static constexpr uint32_t CR_SEN = 0x2; // Sampler length enable bit

    static constexpr uint32_t CFGR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CFGR_SEL =              // Select the phase for the Output clock
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFGR_UNIT =             // Delay Defines the delay of a Unit delay cell
        bit_field_t<8, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFGR_LNG =              // Delay line length value
        bit_field_t<16, 0xfff>::value<X>();
    static constexpr uint32_t CFGR_LNGF = 0x80000000; // Length valid flag
};


template<>
struct peripheral_t<STM32H742x, DELAY_Block_SDMMC1>
{
    typedef stm32h742x_delay_block_sdmmc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, DELAY_Block_QUADSPI>
{
    typedef stm32h742x_delay_block_sdmmc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, DELAY_Block_SDMMC2>
{
    typedef stm32h742x_delay_block_sdmmc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, DELAY_Block_SDMMC1>
{
    typedef stm32h742x_delay_block_sdmmc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, DELAY_Block_QUADSPI>
{
    typedef stm32h742x_delay_block_sdmmc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, DELAY_Block_SDMMC2>
{
    typedef stm32h742x_delay_block_sdmmc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, DELAY_Block_SDMMC1>
{
    typedef stm32h742x_delay_block_sdmmc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, DELAY_Block_QUADSPI>
{
    typedef stm32h742x_delay_block_sdmmc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, DELAY_Block_SDMMC2>
{
    typedef stm32h742x_delay_block_sdmmc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, DELAY_Block_SDMMC1>
{
    typedef stm32h742x_delay_block_sdmmc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, DELAY_Block_QUADSPI>
{
    typedef stm32h742x_delay_block_sdmmc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, DELAY_Block_SDMMC2>
{
    typedef stm32h742x_delay_block_sdmmc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, DELAY_Block_SDMMC1>
{
    typedef stm32h742x_delay_block_sdmmc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, DELAY_Block_QUADSPI>
{
    typedef stm32h742x_delay_block_sdmmc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, DELAY_Block_SDMMC2>
{
    typedef stm32h742x_delay_block_sdmmc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, DELAY_Block_SDMMC1>
{
    typedef stm32h742x_delay_block_sdmmc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, DELAY_Block_QUADSPI>
{
    typedef stm32h742x_delay_block_sdmmc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, DELAY_Block_SDMMC2>
{
    typedef stm32h742x_delay_block_sdmmc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, DELAY_Block_SDMMC1>
{
    typedef stm32h742x_delay_block_sdmmc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, DELAY_Block_QUADSPI>
{
    typedef stm32h742x_delay_block_sdmmc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, DELAY_Block_SDMMC2>
{
    typedef stm32h742x_delay_block_sdmmc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, DELAY_Block_SDMMC1>
{
    typedef stm32h742x_delay_block_sdmmc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, DELAY_Block_QUADSPI>
{
    typedef stm32h742x_delay_block_sdmmc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, DELAY_Block_SDMMC2>
{
    typedef stm32h742x_delay_block_sdmmc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, DELAY_Block_SDMMC1>
{
    typedef stm32h742x_delay_block_sdmmc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, DELAY_Block_QUADSPI>
{
    typedef stm32h742x_delay_block_sdmmc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, DELAY_Block_SDMMC2>
{
    typedef stm32h742x_delay_block_sdmmc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, DELAY_Block_SDMMC1>
{
    typedef stm32h742x_delay_block_sdmmc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, DELAY_Block_QUADSPI>
{
    typedef stm32h742x_delay_block_sdmmc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, DELAY_Block_SDMMC2>
{
    typedef stm32h742x_delay_block_sdmmc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, DELAY_Block_SDMMC1>
{
    typedef stm32h742x_delay_block_sdmmc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, DELAY_Block_QUADSPI>
{
    typedef stm32h742x_delay_block_sdmmc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, DELAY_Block_SDMMC2>
{
    typedef stm32h742x_delay_block_sdmmc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, DELAY_Block_SDMMC1>
{
    typedef stm32h742x_delay_block_sdmmc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, DELAY_Block_QUADSPI>
{
    typedef stm32h742x_delay_block_sdmmc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, DELAY_Block_SDMMC2>
{
    typedef stm32h742x_delay_block_sdmmc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, DELAY_Block_SDMMC1>
{
    typedef stm32h742x_delay_block_sdmmc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, DELAY_Block_SDMMC2>
{
    typedef stm32h742x_delay_block_sdmmc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, Delay_Block_OCTOSPI1>
{
    typedef stm32h742x_delay_block_sdmmc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, Delay_Block_OCTOSPI2>
{
    typedef stm32h742x_delay_block_sdmmc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, DELAY_Block_SDMMC1>
{
    typedef stm32h742x_delay_block_sdmmc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, DELAY_Block_SDMMC2>
{
    typedef stm32h742x_delay_block_sdmmc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, Delay_Block_OCTOSPI1>
{
    typedef stm32h742x_delay_block_sdmmc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, Delay_Block_OCTOSPI2>
{
    typedef stm32h742x_delay_block_sdmmc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, DELAY_Block_SDMMC1>
{
    typedef stm32h742x_delay_block_sdmmc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, DELAY_Block_SDMMC2>
{
    typedef stm32h742x_delay_block_sdmmc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, Delay_Block_OCTOSPI1>
{
    typedef stm32h742x_delay_block_sdmmc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, Delay_Block_OCTOSPI2>
{
    typedef stm32h742x_delay_block_sdmmc1_t T;
    static T& V;
};

using delay_block_quadspi_t = peripheral_t<mcu_svd, DELAY_Block_QUADSPI>;
using delay_block_sdmmc1_t = peripheral_t<mcu_svd, DELAY_Block_SDMMC1>;
using delay_block_sdmmc2_t = peripheral_t<mcu_svd, DELAY_Block_SDMMC2>;
using delay_block_octospi1_t = peripheral_t<mcu_svd, Delay_Block_OCTOSPI1>;
using delay_block_octospi2_t = peripheral_t<mcu_svd, Delay_Block_OCTOSPI2>;

template<int INST> struct delay_block_sdmmc_traits {};

template<> struct delay_block_sdmmc_traits<1>
{
    using delay_block_sdmmc = delay_block_sdmmc1_t;
};

template<> struct delay_block_sdmmc_traits<2>
{
    using delay_block_sdmmc = delay_block_sdmmc2_t;
};

template<int INST> struct delay_block_octospi_traits {};

template<> struct delay_block_octospi_traits<1>
{
    using delay_block_octospi = delay_block_octospi1_t;
};

template<> struct delay_block_octospi_traits<2>
{
    using delay_block_octospi = delay_block_octospi2_t;
};

