#pragma once

////
//
//      STM32H7 MPU peripherals
//
///

// MPU: Memory protection unit

struct stm32h742x_mpu_t
{
    volatile uint32_t MPU_TYPER; // MPU type register
    volatile uint32_t MPU_CTRL; // MPU control register
    volatile uint32_t MPU_RNR; // MPU region number register
    volatile uint32_t MPU_RBAR; // MPU region base address register
    volatile uint32_t MPU_RASR; // MPU region attribute and size register

    static constexpr uint32_t MPU_TYPER_RESET_VALUE = 0x800; // Reset value
    static constexpr uint32_t MPU_TYPER_SEPARATE = 0x1; // Separate flag
    typedef bit_field_t<8, 0xff> MPU_TYPER_DREGION; // Number of MPU data regions
    typedef bit_field_t<16, 0xff> MPU_TYPER_IREGION; // Number of MPU instruction regions

    static constexpr uint32_t MPU_CTRL_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MPU_CTRL_ENABLE = 0x1; // Enables the MPU
    static constexpr uint32_t MPU_CTRL_HFNMIENA = 0x2; // Enables the operation of MPU during hard fault
    static constexpr uint32_t MPU_CTRL_PRIVDEFENA = 0x4; // Enable priviliged software access to default memory map

    static constexpr uint32_t MPU_RNR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> MPU_RNR_REGION; // MPU region

    static constexpr uint32_t MPU_RBAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> MPU_RBAR_REGION; // MPU region field
    static constexpr uint32_t MPU_RBAR_VALID = 0x10; // MPU region number valid
    typedef bit_field_t<5, 0x7ffffff> MPU_RBAR_ADDR; // Region base address field

    static constexpr uint32_t MPU_RASR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MPU_RASR_ENABLE = 0x1; // Region enable bit.
    typedef bit_field_t<1, 0x1f> MPU_RASR_SIZE; // Size of the MPU protection region
    typedef bit_field_t<8, 0xff> MPU_RASR_SRD; // Subregion disable bits
    static constexpr uint32_t MPU_RASR_B = 0x10000; // memory attribute
    static constexpr uint32_t MPU_RASR_C = 0x20000; // memory attribute
    static constexpr uint32_t MPU_RASR_S = 0x40000; // Shareable memory attribute
    typedef bit_field_t<19, 0x7> MPU_RASR_TEX; // memory attribute
    typedef bit_field_t<24, 0x7> MPU_RASR_AP; // Access permission
    static constexpr uint32_t MPU_RASR_XN = 0x10000000; // Instruction access disable bit
};

template<>
struct peripheral_t<STM32H742x, MPU>
{
    static constexpr periph_t P = MPU;
    using T = stm32h742x_mpu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, MPU>
{
    static constexpr periph_t P = MPU;
    using T = stm32h742x_mpu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, MPU>
{
    static constexpr periph_t P = MPU;
    using T = stm32h742x_mpu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, MPU>
{
    static constexpr periph_t P = MPU;
    using T = stm32h742x_mpu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, MPU>
{
    static constexpr periph_t P = MPU;
    using T = stm32h742x_mpu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, MPU>
{
    static constexpr periph_t P = MPU;
    using T = stm32h742x_mpu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, MPU>
{
    static constexpr periph_t P = MPU;
    using T = stm32h742x_mpu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, MPU>
{
    static constexpr periph_t P = MPU;
    using T = stm32h742x_mpu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, MPU>
{
    static constexpr periph_t P = MPU;
    using T = stm32h742x_mpu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, MPU>
{
    static constexpr periph_t P = MPU;
    using T = stm32h742x_mpu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, MPU>
{
    static constexpr periph_t P = MPU;
    using T = stm32h742x_mpu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, MPU>
{
    static constexpr periph_t P = MPU;
    using T = stm32h742x_mpu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, MPU>
{
    static constexpr periph_t P = MPU;
    using T = stm32h742x_mpu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, MPU>
{
    static constexpr periph_t P = MPU;
    using T = stm32h742x_mpu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, MPU>
{
    static constexpr periph_t P = MPU;
    using T = stm32h742x_mpu_t;
    static T& V;
};

using mpu_t = peripheral_t<svd, MPU>;
