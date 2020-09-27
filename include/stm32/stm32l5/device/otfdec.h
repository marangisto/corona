#pragma once

////
//
//      STM32L5 OTFDEC peripherals
//
///

// OTFDEC1: On-The-Fly Decryption engine

struct stm32l562_otfdec1_t
{
    volatile uint32_t CR; // OTFDEC control register
    reserved_t<0x7> _0x4;
    volatile uint32_t R1CFGR; // OTFDEC region x configuration register
    volatile uint32_t R1STARTADDR; // OTFDEC region x start address register
    volatile uint32_t R1ENDADDR; // OTFDEC region x end address register
    volatile uint32_t R1NONCER0; // OTFDEC region x nonce register 0
    volatile uint32_t R1NONCER1; // OTFDEC region x nonce register 1
    volatile uint32_t R1KEYR0; // OTFDEC region x key register 0
    volatile uint32_t R1KEYR1; // OTFDEC region x key register 1
    volatile uint32_t R1KEYR2; // OTFDEC region x key register 2
    volatile uint32_t R1KEYR3; // OTFDEC region x key register 3
    reserved_t<0x3> _0x44;
    volatile uint32_t R2CFGR; // OTFDEC region x configuration register
    volatile uint32_t R2STARTADDR; // OTFDEC region x start address register
    volatile uint32_t R2ENDADDR; // OTFDEC region x end address register
    volatile uint32_t R2NONCER0; // OTFDEC region x nonce register 0
    volatile uint32_t R2NONCER1; // OTFDEC region x nonce register 1
    volatile uint32_t R2KEYR0; // OTFDEC region x key register 0
    volatile uint32_t R2KEYR1; // OTFDEC region x key register 1
    volatile uint32_t R2KEYR2; // OTFDEC region x key register 2
    volatile uint32_t R2KEYR3; // OTFDEC region x key register 3
    reserved_t<0x3> _0x74;
    volatile uint32_t R3CFGR; // OTFDEC region x configuration register
    volatile uint32_t R3STARTADDR; // OTFDEC region x start address register
    volatile uint32_t R3ENDADDR; // OTFDEC region x end address register
    volatile uint32_t R3NONCER0; // OTFDEC region x nonce register 0
    volatile uint32_t R3NONCER1; // OTFDEC region x nonce register 1
    volatile uint32_t R3KEYR0; // OTFDEC region x key register 0
    volatile uint32_t R3KEYR1; // OTFDEC region x key register 1
    volatile uint32_t R3KEYR2; // OTFDEC region x key register 2
    volatile uint32_t R3KEYR3; // OTFDEC region x key register 3
    reserved_t<0x3> _0xa4;
    volatile uint32_t R4CFGR; // OTFDEC region x configuration register
    volatile uint32_t R4STARTADDR; // OTFDEC region x start address register
    volatile uint32_t R4ENDADDR; // OTFDEC region x end address register
    volatile uint32_t R4NONCER0; // OTFDEC region x nonce register 0
    volatile uint32_t R4NONCER1; // OTFDEC region x nonce register 1
    volatile uint32_t R4KEYR0; // OTFDEC region x key register 0
    volatile uint32_t R4KEYR1; // OTFDEC region x key register 1
    volatile uint32_t R4KEYR2; // OTFDEC region x key register 2
    volatile uint32_t R4KEYR3; // OTFDEC region x key register 3
    reserved_t<0x8b> _0xd4;
    volatile uint32_t ISR; // OTFDEC interrupt status register
    volatile uint32_t ICR; // OTFDEC interrupt clear register
    volatile uint32_t IER; // OTFDEC interrupt enable register

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_ENC = 0x1; // Encryption mode bit


    static constexpr uint32_t R1CFGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t R1CFGR_REG_EN = 0x1; // region on-the-fly decryption enable
    static constexpr uint32_t R1CFGR_CONFIGLOCK = 0x2; // region config lock
    static constexpr uint32_t R1CFGR_KEYLOCK = 0x4; // region key lock
    typedef bit_field_t<4, 0x3> R1CFGR_MODE; // operating mode
    typedef bit_field_t<8, 0xff> R1CFGR_KEYCRC; // region key 8-bit CRC
    typedef bit_field_t<16, 0xffff> R1CFGR_REGX_VERSION; // region firmware version

    static constexpr uint32_t R1STARTADDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> R1STARTADDR_REGX_START_ADDR; // Region AXI start address

    static constexpr uint32_t R1ENDADDR_RESET_VALUE = 0xfff; // Reset value
    typedef bit_field_t<0, 0xffffffff> R1ENDADDR_REGX_END_ADDR; // Region AXI end address

    static constexpr uint32_t R1NONCER0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> R1NONCER0_REGX_NONCE; // REGx_NONCE

    static constexpr uint32_t R1NONCER1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> R1NONCER1_REGX_NONCE; // Region nonce

    static constexpr uint32_t R1KEYR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> R1KEYR0_REGX_KEY; // REGx_KEY

    static constexpr uint32_t R1KEYR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> R1KEYR1_REGX_KEY; // REGx_KEY

    static constexpr uint32_t R1KEYR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> R1KEYR2_REGX_KEY; // REGx_KEY

    static constexpr uint32_t R1KEYR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> R1KEYR3_REGX_KEY; // REGx_KEY


    static constexpr uint32_t R2CFGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t R2CFGR_REG_EN = 0x1; // region on-the-fly decryption enable
    static constexpr uint32_t R2CFGR_CONFIGLOCK = 0x2; // region config lock
    static constexpr uint32_t R2CFGR_KEYLOCK = 0x4; // region key lock
    typedef bit_field_t<4, 0x3> R2CFGR_MODE; // operating mode
    typedef bit_field_t<8, 0xff> R2CFGR_KEYCRC; // region key 8-bit CRC
    typedef bit_field_t<16, 0xffff> R2CFGR_REGX_VERSION; // region firmware version

    static constexpr uint32_t R2STARTADDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> R2STARTADDR_REGX_START_ADDR; // Region AXI start address

    static constexpr uint32_t R2ENDADDR_RESET_VALUE = 0xfff; // Reset value
    typedef bit_field_t<0, 0xffffffff> R2ENDADDR_REGX_END_ADDR; // Region AXI end address

    static constexpr uint32_t R2NONCER0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> R2NONCER0_REGX_NONCE; // REGx_NONCE

    static constexpr uint32_t R2NONCER1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> R2NONCER1_REGX_NONCE; // Region nonce, bits [63:32]REGx_NONCE[63:32]

    static constexpr uint32_t R2KEYR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> R2KEYR0_REGX_KEY; // REGx_KEY

    static constexpr uint32_t R2KEYR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> R2KEYR1_REGX_KEY; // REGx_KEY

    static constexpr uint32_t R2KEYR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> R2KEYR2_REGX_KEY_; // REGx_KEY

    static constexpr uint32_t R2KEYR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> R2KEYR3_REGX_KEY; // REGx_KEY


    static constexpr uint32_t R3CFGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t R3CFGR_REG_EN = 0x1; // region on-the-fly decryption enable
    static constexpr uint32_t R3CFGR_CONFIGLOCK = 0x2; // region config lock
    static constexpr uint32_t R3CFGR_KEYLOCK = 0x4; // region key lock
    typedef bit_field_t<4, 0x3> R3CFGR_MODE; // operating mode
    typedef bit_field_t<8, 0xff> R3CFGR_KEYCRC; // region key 8-bit CRC
    typedef bit_field_t<16, 0xffff> R3CFGR_REGX_VERSION; // region firmware version

    static constexpr uint32_t R3STARTADDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> R3STARTADDR_REGX_START_ADDR; // Region AXI start address

    static constexpr uint32_t R3ENDADDR_RESET_VALUE = 0xfff; // Reset value
    typedef bit_field_t<0, 0xffffffff> R3ENDADDR_REGX_END_ADDR; // Region AXI end address

    static constexpr uint32_t R3NONCER0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> R3NONCER0_REGX_NONCE; // REGx_NONCE

    static constexpr uint32_t R3NONCER1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> R3NONCER1_REGX_NONCE; // REGx_NONCE

    static constexpr uint32_t R3KEYR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> R3KEYR0_REGX_KEY; // REGx_KEY

    static constexpr uint32_t R3KEYR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> R3KEYR1_REGX_KEY; // REGx_KEY

    static constexpr uint32_t R3KEYR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> R3KEYR2_REGX_KEY; // REGx_KEY

    static constexpr uint32_t R3KEYR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> R3KEYR3_REGX_KEY; // REGx_KEY


    static constexpr uint32_t R4CFGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t R4CFGR_REG_EN = 0x1; // region on-the-fly decryption enable
    static constexpr uint32_t R4CFGR_CONFIGLOCK = 0x2; // region config lock
    static constexpr uint32_t R4CFGR_KEYLOCK = 0x4; // region key lock
    typedef bit_field_t<4, 0x3> R4CFGR_MODE; // operating mode
    typedef bit_field_t<8, 0xff> R4CFGR_KEYCRC; // region key 8-bit CRC
    typedef bit_field_t<16, 0xffff> R4CFGR_REGX_VERSION; // region firmware version

    static constexpr uint32_t R4STARTADDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> R4STARTADDR_REGX_START_ADDR; // Region AXI start address

    static constexpr uint32_t R4ENDADDR_RESET_VALUE = 0xfff; // Reset value
    typedef bit_field_t<0, 0xffffffff> R4ENDADDR_REGX_END_ADDR; // Region AXI end address

    static constexpr uint32_t R4NONCER0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> R4NONCER0_REGX_NONCE; // REGx_NONCE

    static constexpr uint32_t R4NONCER1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> R4NONCER1_REGX_NONCE; // REGx_NONCE

    static constexpr uint32_t R4KEYR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> R4KEYR0_REGX_KEY; // REGx_KEY

    static constexpr uint32_t R4KEYR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> R4KEYR1_REGX_KEY; // REGx_KEY

    static constexpr uint32_t R4KEYR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> R4KEYR2_REGX_KEY; // REGx_KEY

    static constexpr uint32_t R4KEYR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> R4KEYR3_REGX_KEY; // REGx_KEY


    static constexpr uint32_t ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ISR_SEIF = 0x1; // Security Error Interrupt Flag status
    static constexpr uint32_t ISR_XONEIF = 0x2; // Execute-only execute-Never Error Interrupt Flag status
    static constexpr uint32_t ISR_KEIF = 0x4; // Key Error Interrupt Flag status

    static constexpr uint32_t ICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ICR_SEIF = 0x1; // SEIF
    static constexpr uint32_t ICR_XONEIF = 0x2; // Execute-only execute-Never Error Interrupt Flag clear
    static constexpr uint32_t ICR_KEIF = 0x4; // KEIF

    static constexpr uint32_t IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IER_SEIE = 0x1; // Security Error Interrupt Enable
    static constexpr uint32_t IER_XONEIE = 0x2; // XONEIE
    static constexpr uint32_t IER_KEIE = 0x4; // KEIE
};

template<>
struct peripheral_t<STM32L562, OTFDEC1>
{
    static constexpr periph_t P = OTFDEC1;
    using T = stm32l562_otfdec1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, SEC_OTFDEC1>
{
    static constexpr periph_t P = SEC_OTFDEC1;
    using T = stm32l562_otfdec1_t;
    static T& V;
};

using otfdec1_t = peripheral_t<svd, OTFDEC1>;
using sec_otfdec1_t = peripheral_t<svd, SEC_OTFDEC1>;

template<int INST> struct otfdec_traits {};

template<> struct otfdec_traits<1>
{
    using otfdec = otfdec1_t;

    template<typename RCC>
    static void enable()
    {
        RCC::V.AHB2ENR |= RCC::T::AHB2ENR_OTFDEC1EN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHB2ENR &= ~RCC::T::AHB2ENR_OTFDEC1EN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.AHB2SMENR |= RCC::T::AHB2SMENR_OTFDEC1SMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_OTFDEC1SMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHB2RSTR |= RCC::T::AHB2RSTR_OTFDEC1RST;
    }
};
