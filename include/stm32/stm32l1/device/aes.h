#pragma once

////
//
//      STM32L1 AES peripherals
//
///

// AES: Advanced encrytion standard hardware accelerator

struct stm32l100_aes_t
{
    volatile uint32_t CR; // control register
    volatile uint32_t SR; // Status register
    volatile uint32_t DINR; // Data input register
    volatile uint32_t DOUTR; // Data output register
    volatile uint32_t KEYR0; // AES Key register 0
    volatile uint32_t KEYR1; // AES Key register 1
    volatile uint32_t KEYR2; // AES Key register 2
    volatile uint32_t KEYR3; // AES Key register 3
    volatile uint32_t IVR0; // Initialization Vector Register 0
    volatile uint32_t IVR1; // Initialization Vector Register 1
    volatile uint32_t IVR2; // Initialization Vector Register 2
    volatile uint32_t IVR3; // Initialization Vector Register 3

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_DMAOUTEN = 0x1000; // Enable DMA management of data output phase
    static constexpr uint32_t CR_DMAINEN = 0x800; // Enable DMA management of data input phase
    static constexpr uint32_t CR_ERRIE = 0x400; // Error interrupt enable
    static constexpr uint32_t CR_CCFIE = 0x200; // CCF flag interrupt enable
    static constexpr uint32_t CR_ERRC = 0x100; // Error clear
    static constexpr uint32_t CR_CCFC = 0x80; // Computation Complete Flag Clear
    typedef bit_field_t<5, 0x3> CR_CHMOD; // AES chaining mode
    typedef bit_field_t<3, 0x3> CR_MODE; // AES operating mode
    typedef bit_field_t<1, 0x3> CR_DATATYPE; // Data type selection
    static constexpr uint32_t CR_EN = 0x1; // AES enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_WRERR = 0x4; // Write error flag
    static constexpr uint32_t SR_RDERR = 0x2; // Read error flag
    static constexpr uint32_t SR_CCF = 0x1; // Computation complete flag

    static constexpr uint32_t DINR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DINR_DINR; // Data input

    static constexpr uint32_t DOUTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DOUTR_DOUTR; // Data output

    static constexpr uint32_t KEYR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR0_KEYR0; // AES key

    static constexpr uint32_t KEYR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR1_KEYR1; // AES key

    static constexpr uint32_t KEYR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR2_KEYR2; // AES key

    static constexpr uint32_t KEYR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR3_KEYR3; // AES key

    static constexpr uint32_t IVR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> IVR0_IVR0; // Initialization Vector Register

    static constexpr uint32_t IVR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> IVR1_IVR1; // Initialization Vector Register

    static constexpr uint32_t IVR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> IVR2_IVR2; // Initialization Vector Register

    static constexpr uint32_t IVR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> IVR3_IVR3; // Initialization Vector Register
};

template<>
struct peripheral_t<STM32L100, AES>
{
    static constexpr periph_t P = AES;
    using T = stm32l100_aes_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L151, AES>
{
    static constexpr periph_t P = AES;
    using T = stm32l100_aes_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L152, AES>
{
    static constexpr periph_t P = AES;
    using T = stm32l100_aes_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L162, AES>
{
    static constexpr periph_t P = AES;
    using T = stm32l100_aes_t;
    static T& V;
};

using aes_t = peripheral_t<svd, AES>;
