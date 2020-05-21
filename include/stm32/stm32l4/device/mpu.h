#pragma once

////
//
//      STM32L4 MPU peripherals
//
////

////
//
//      Memory protection unit
//
////

struct stm32l412_mpu_t
{
    volatile uint32_t MPU_TYPER; // [read-only] MPU type register
    volatile uint32_t MPU_CTRL;  // [read-write] MPU control register
    volatile uint32_t MPU_RNR;   // [read-write] MPU region number register
    volatile uint32_t MPU_RBAR;  // [read-write] MPU region base address register
    volatile uint32_t MPU_RASR;  // [read-write] MPU region attribute and size register

    static constexpr uint32_t MPU_TYPER_RESET_VALUE = 0x800;
    static constexpr uint32_t MPU_TYPER_SEPARATE = 0x1; // Separate flag
    template<uint32_t X>
    static constexpr uint32_t MPU_TYPER_DREGION =       // Number of MPU data regions
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MPU_TYPER_IREGION =       // Number of MPU instruction regions
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t MPU_CTRL_RESET_VALUE = 0x0;
    static constexpr uint32_t MPU_CTRL_ENABLE = 0x1;     // Enables the MPU
    static constexpr uint32_t MPU_CTRL_HFNMIENA = 0x2;   // Enables the operation of MPU during hard fault
    static constexpr uint32_t MPU_CTRL_PRIVDEFENA = 0x4; // Enable priviliged software access to default memory map

    static constexpr uint32_t MPU_RNR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MPU_RNR_REGION =   // MPU region
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t MPU_RBAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MPU_RBAR_REGION =      // MPU region field
        bit_field_t<0, 0xf>::value<X>();
    static constexpr uint32_t MPU_RBAR_VALID = 0x10; // MPU region number valid
    template<uint32_t X>
    static constexpr uint32_t MPU_RBAR_ADDR =        // Region base address field
        bit_field_t<5, 0x7ffffff>::value<X>();

    static constexpr uint32_t MPU_RASR_RESET_VALUE = 0x0;
    static constexpr uint32_t MPU_RASR_ENABLE = 0x1;    // Region enable bit.
    template<uint32_t X>
    static constexpr uint32_t MPU_RASR_SIZE =           // Size of the MPU protection region
        bit_field_t<1, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MPU_RASR_SRD =            // Subregion disable bits
        bit_field_t<8, 0xff>::value<X>();
    static constexpr uint32_t MPU_RASR_B = 0x10000;     // memory attribute
    static constexpr uint32_t MPU_RASR_C = 0x20000;     // memory attribute
    static constexpr uint32_t MPU_RASR_S = 0x40000;     // Shareable memory attribute
    template<uint32_t X>
    static constexpr uint32_t MPU_RASR_TEX =            // memory attribute
        bit_field_t<19, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MPU_RASR_AP =             // Access permission
        bit_field_t<24, 0x7>::value<X>();
    static constexpr uint32_t MPU_RASR_XN = 0x10000000; // Instruction access disable bit
};


template<>
struct peripheral_t<STM32L412, MPU>
{
    typedef stm32l412_mpu_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L476, MPU>
{
    typedef stm32l412_mpu_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L496, MPU>
{
    typedef stm32l412_mpu_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4x1, MPU>
{
    typedef stm32l412_mpu_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4x2, MPU>
{
    typedef stm32l412_mpu_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4x3, MPU>
{
    typedef stm32l412_mpu_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4x5, MPU>
{
    typedef stm32l412_mpu_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4x6, MPU>
{
    typedef stm32l412_mpu_t T;
    static T& V;
};

using mpu_t = peripheral_t<mcu_svd, MPU>;

