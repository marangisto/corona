#pragma once

////
//
//      STM32L5 OTFDEC peripherals
//
////

////
//
//      On-The-Fly Decryption engine
//
////

struct stm32l562_otfdec1_t
{
    volatile uint32_t CR;          // [read-write] OTFDEC control register
    reserved_t<0x7> _0x20;
    volatile uint32_t R1CFGR;      // OTFDEC region x configuration register
    volatile uint32_t R1STARTADDR; // [read-write] OTFDEC region x start address register
    volatile uint32_t R1ENDADDR;   // [read-write] OTFDEC region x end address register
    volatile uint32_t R1NONCER0;   // [read-write] OTFDEC region x nonce register 0
    volatile uint32_t R1NONCER1;   // [read-write] OTFDEC region x nonce register 1
    volatile uint32_t R1KEYR0;     // [write-only] OTFDEC region x key register 0
    volatile uint32_t R1KEYR1;     // [write-only] OTFDEC region x key register 1
    volatile uint32_t R1KEYR2;     // [write-only] OTFDEC region x key register 2
    volatile uint32_t R1KEYR3;     // [write-only] OTFDEC region x key register 3
    reserved_t<0x3> _0x50;
    volatile uint32_t R2CFGR;      // OTFDEC region x configuration register
    volatile uint32_t R2STARTADDR; // [read-write] OTFDEC region x start address register
    volatile uint32_t R2ENDADDR;   // [read-write] OTFDEC region x end address register
    volatile uint32_t R2NONCER0;   // [read-write] OTFDEC region x nonce register 0
    volatile uint32_t R2NONCER1;   // [read-write] OTFDEC region x nonce register 1
    volatile uint32_t R2KEYR0;     // [write-only] OTFDEC region x key register 0
    volatile uint32_t R2KEYR1;     // [write-only] OTFDEC region x key register 1
    volatile uint32_t R2KEYR2;     // [write-only] OTFDEC region x key register 2
    volatile uint32_t R2KEYR3;     // [write-only] OTFDEC region x key register 3
    reserved_t<0x3> _0x80;
    volatile uint32_t R3CFGR;      // OTFDEC region x configuration register
    volatile uint32_t R3STARTADDR; // [read-write] OTFDEC region x start address register
    volatile uint32_t R3ENDADDR;   // [read-write] OTFDEC region x end address register
    volatile uint32_t R3NONCER0;   // [read-write] OTFDEC region x nonce register 0
    volatile uint32_t R3NONCER1;   // [read-write] OTFDEC region x nonce register 1
    volatile uint32_t R3KEYR0;     // [write-only] OTFDEC region x key register 0
    volatile uint32_t R3KEYR1;     // [write-only] OTFDEC region x key register 1
    volatile uint32_t R3KEYR2;     // [write-only] OTFDEC region x key register 2
    volatile uint32_t R3KEYR3;     // [write-only] OTFDEC region x key register 3
    reserved_t<0x3> _0xb0;
    volatile uint32_t R4CFGR;      // OTFDEC region x configuration register
    volatile uint32_t R4STARTADDR; // [read-write] OTFDEC region x start address register
    volatile uint32_t R4ENDADDR;   // [read-write] OTFDEC region x end address register
    volatile uint32_t R4NONCER0;   // [read-write] OTFDEC region x nonce register 0
    volatile uint32_t R4NONCER1;   // [read-write] OTFDEC region x nonce register 1
    volatile uint32_t R4KEYR0;     // [write-only] OTFDEC region x key register 0
    volatile uint32_t R4KEYR1;     // [write-only] OTFDEC region x key register 1
    volatile uint32_t R4KEYR2;     // [write-only] OTFDEC region x key register 2
    volatile uint32_t R4KEYR3;     // [write-only] OTFDEC region x key register 3
    reserved_t<0x8b> _0x300;
    volatile uint32_t ISR;         // [read-only] OTFDEC interrupt status register
    volatile uint32_t ICR;         // [write-only] OTFDEC interrupt clear register
    volatile uint32_t IER;         // [read-write] OTFDEC interrupt enable register

    static constexpr uint32_t CR_RESET_VALUE = 0x0;
    static constexpr uint32_t CR_ENC = 0x1; // Encryption mode bit

    static constexpr uint32_t R1CFGR_RESET_VALUE = 0x0;
    static constexpr uint32_t R1CFGR_REG_EN = 0x1;     // region on-the-fly decryption enable
    static constexpr uint32_t R1CFGR_CONFIGLOCK = 0x2; // region config lock
    static constexpr uint32_t R1CFGR_KEYLOCK = 0x4;    // region key lock
    template<uint32_t X>
    static constexpr uint32_t R1CFGR_MODE =            // operating mode
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t R1CFGR_KEYCRC =          // region key 8-bit CRC
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t R1CFGR_REGx_VERSION =    // region firmware version
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t R2CFGR_RESET_VALUE = 0x0;
    static constexpr uint32_t R2CFGR_REG_EN = 0x1;     // region on-the-fly decryption enable
    static constexpr uint32_t R2CFGR_CONFIGLOCK = 0x2; // region config lock
    static constexpr uint32_t R2CFGR_KEYLOCK = 0x4;    // region key lock
    template<uint32_t X>
    static constexpr uint32_t R2CFGR_MODE =            // operating mode
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t R2CFGR_KEYCRC =          // region key 8-bit CRC
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t R2CFGR_REGx_VERSION =    // region firmware version
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t R3CFGR_RESET_VALUE = 0x0;
    static constexpr uint32_t R3CFGR_REG_EN = 0x1;     // region on-the-fly decryption enable
    static constexpr uint32_t R3CFGR_CONFIGLOCK = 0x2; // region config lock
    static constexpr uint32_t R3CFGR_KEYLOCK = 0x4;    // region key lock
    template<uint32_t X>
    static constexpr uint32_t R3CFGR_MODE =            // operating mode
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t R3CFGR_KEYCRC =          // region key 8-bit CRC
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t R3CFGR_REGx_VERSION =    // region firmware version
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t R4CFGR_RESET_VALUE = 0x0;
    static constexpr uint32_t R4CFGR_REG_EN = 0x1;     // region on-the-fly decryption enable
    static constexpr uint32_t R4CFGR_CONFIGLOCK = 0x2; // region config lock
    static constexpr uint32_t R4CFGR_KEYLOCK = 0x4;    // region key lock
    template<uint32_t X>
    static constexpr uint32_t R4CFGR_MODE =            // operating mode
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t R4CFGR_KEYCRC =          // region key 8-bit CRC
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t R4CFGR_REGx_VERSION =    // region firmware version
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t R1STARTADDR_RESET_VALUE = 0x0;

    static constexpr uint32_t R2STARTADDR_RESET_VALUE = 0x0;

    static constexpr uint32_t R3STARTADDR_RESET_VALUE = 0x0;

    static constexpr uint32_t R4STARTADDR_RESET_VALUE = 0x0;

    static constexpr uint32_t R1ENDADDR_RESET_VALUE = 0xfff;

    static constexpr uint32_t R2ENDADDR_RESET_VALUE = 0xfff;

    static constexpr uint32_t R3ENDADDR_RESET_VALUE = 0xfff;

    static constexpr uint32_t R4ENDADDR_RESET_VALUE = 0xfff;

    static constexpr uint32_t R1NONCER0_RESET_VALUE = 0x0;

    static constexpr uint32_t R2NONCER0_RESET_VALUE = 0x0;

    static constexpr uint32_t R3NONCER0_RESET_VALUE = 0x0;

    static constexpr uint32_t R4NONCER0_RESET_VALUE = 0x0;

    static constexpr uint32_t R1NONCER1_RESET_VALUE = 0x0;

    static constexpr uint32_t R2NONCER1_RESET_VALUE = 0x0;

    static constexpr uint32_t R3NONCER1_RESET_VALUE = 0x0;

    static constexpr uint32_t R4NONCER1_RESET_VALUE = 0x0;

    static constexpr uint32_t R1KEYR0_RESET_VALUE = 0x0;

    static constexpr uint32_t R2KEYR0_RESET_VALUE = 0x0;

    static constexpr uint32_t R3KEYR0_RESET_VALUE = 0x0;

    static constexpr uint32_t R4KEYR0_RESET_VALUE = 0x0;

    static constexpr uint32_t R1KEYR1_RESET_VALUE = 0x0;

    static constexpr uint32_t R2KEYR1_RESET_VALUE = 0x0;

    static constexpr uint32_t R3KEYR1_RESET_VALUE = 0x0;

    static constexpr uint32_t R4KEYR1_RESET_VALUE = 0x0;

    static constexpr uint32_t R1KEYR2_RESET_VALUE = 0x0;

    static constexpr uint32_t R2KEYR2_RESET_VALUE = 0x0;

    static constexpr uint32_t R3KEYR2_RESET_VALUE = 0x0;

    static constexpr uint32_t R4KEYR2_RESET_VALUE = 0x0;

    static constexpr uint32_t R1KEYR3_RESET_VALUE = 0x0;

    static constexpr uint32_t R2KEYR3_RESET_VALUE = 0x0;

    static constexpr uint32_t R3KEYR3_RESET_VALUE = 0x0;

    static constexpr uint32_t R4KEYR3_RESET_VALUE = 0x0;

    static constexpr uint32_t ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t ISR_SEIF = 0x1;   // Security Error Interrupt Flag status
    static constexpr uint32_t ISR_XONEIF = 0x2; // Execute-only execute-Never Error Interrupt Flag status
    static constexpr uint32_t ISR_KEIF = 0x4;   // Key Error Interrupt Flag status

    static constexpr uint32_t ICR_RESET_VALUE = 0x0;
    static constexpr uint32_t ICR_SEIF = 0x1;   // SEIF
    static constexpr uint32_t ICR_XONEIF = 0x2; // Execute-only execute-Never Error Interrupt Flag clear
    static constexpr uint32_t ICR_KEIF = 0x4;   // KEIF

    static constexpr uint32_t IER_RESET_VALUE = 0x0;
    static constexpr uint32_t IER_SEIE = 0x1;   // Security Error Interrupt Enable
    static constexpr uint32_t IER_XONEIE = 0x2; // XONEIE
    static constexpr uint32_t IER_KEIE = 0x4;   // KEIE
};


template<>
struct peripheral_t<STM32L562, OTFDEC1>
{
    typedef stm32l562_otfdec1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, SEC_OTFDEC1>
{
    typedef stm32l562_otfdec1_t T;
    static T& V;
};

using otfdec1_t = peripheral_t<mcu_svd, OTFDEC1>;
using sec_otfdec1_t = peripheral_t<mcu_svd, SEC_OTFDEC1>;

template<int INST> struct otfdec_traits {};

template<> struct otfdec_traits<1>
{
    using otfdec = otfdec1_t;
};

template<int INST> struct sec_otfdec_traits {};

template<> struct sec_otfdec_traits<1>
{
    using sec_otfdec = sec_otfdec1_t;
};

