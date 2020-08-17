#pragma once

////
//
//      STM32G0 MPU peripherals
//
///

// MPU: Memory protection unit

struct stm32g030_mpu_t
{
    volatile uint32_t TYPER; // MPU type register
    volatile uint32_t CTRL; // MPU control register
    volatile uint32_t RNR; // MPU region number register
    volatile uint32_t RBAR; // MPU region base address register
    volatile uint32_t RASR; // MPU region attribute and size register

    static constexpr uint32_t TYPER_RESET_VALUE = 0x800; // Reset value
    static constexpr uint32_t TYPER_SEPARATE = 0x1; // Separate flag
    typedef bit_field_t<8, 0xff> TYPER_DREGION; // Number of MPU data regions
    typedef bit_field_t<16, 0xff> TYPER_IREGION; // Number of MPU instruction regions

    static constexpr uint32_t CTRL_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CTRL_ENABLE = 0x1; // Enables the MPU
    static constexpr uint32_t CTRL_HFNMIENA = 0x2; // Enables the operation of MPU during hard fault
    static constexpr uint32_t CTRL_PRIVDEFENA = 0x4; // Enable priviliged software access to default memory map

    static constexpr uint32_t RNR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RNR_REGION; // MPU region

    static constexpr uint32_t RBAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> RBAR_REGION; // MPU region field
    static constexpr uint32_t RBAR_VALID = 0x10; // MPU region number valid
    typedef bit_field_t<5, 0x7ffffff> RBAR_ADDR; // Region base address field

    static constexpr uint32_t RASR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RASR_ENABLE = 0x1; // Region enable bit.
    typedef bit_field_t<1, 0x1f> RASR_SIZE; // Size of the MPU protection region
    typedef bit_field_t<8, 0xff> RASR_SRD; // Subregion disable bits
    static constexpr uint32_t RASR_B = 0x10000; // memory attribute
    static constexpr uint32_t RASR_C = 0x20000; // memory attribute
    static constexpr uint32_t RASR_S = 0x40000; // Shareable memory attribute
    typedef bit_field_t<19, 0x7> RASR_TEX; // memory attribute
    typedef bit_field_t<24, 0x7> RASR_AP; // Access permission
    static constexpr uint32_t RASR_XN = 0x10000000; // Instruction access disable bit
};

template<>
struct peripheral_t<STM32G030, MPU>
{
    using T = stm32g030_mpu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G031, MPU>
{
    using T = stm32g030_mpu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G041, MPU>
{
    using T = stm32g030_mpu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G070, MPU>
{
    using T = stm32g030_mpu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G071, MPU>
{
    using T = stm32g030_mpu_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G081, MPU>
{
    using T = stm32g030_mpu_t;
    static T& V;
};

using mpu_t = peripheral_t<svd, MPU>;
