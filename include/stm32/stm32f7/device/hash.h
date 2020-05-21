#pragma once

////
//
//      STM32F7 HASH peripherals
//
////

////
//
//      Hash processor
//
////

struct stm32f745_hash_t
{
    volatile uint32_t CR;       // control register
    volatile uint32_t DIN;      // [read-write] data input register
    volatile uint32_t STR;      // start register
    volatile uint32_t HR0;      // [read-only] digest registers
    volatile uint32_t HR1;      // [read-only] digest registers
    volatile uint32_t HR2;      // [read-only] digest registers
    volatile uint32_t HR3;      // [read-only] digest registers
    volatile uint32_t HR4;      // [read-only] digest registers
    volatile uint32_t IMR;      // [read-write] interrupt enable register
    volatile uint32_t SR;       // status register
    reserved_t<0x34> _0xf8;
    volatile uint32_t CSR0;     // [read-write] context swap registers
    volatile uint32_t CSR1;     // [read-write] context swap registers
    volatile uint32_t CSR2;     // [read-write] context swap registers
    volatile uint32_t CSR3;     // [read-write] context swap registers
    volatile uint32_t CSR4;     // [read-write] context swap registers
    volatile uint32_t CSR5;     // [read-write] context swap registers
    volatile uint32_t CSR6;     // [read-write] context swap registers
    volatile uint32_t CSR7;     // [read-write] context swap registers
    volatile uint32_t CSR8;     // [read-write] context swap registers
    volatile uint32_t CSR9;     // [read-write] context swap registers
    volatile uint32_t CSR10;    // [read-write] context swap registers
    volatile uint32_t CSR11;    // [read-write] context swap registers
    volatile uint32_t CSR12;    // [read-write] context swap registers
    volatile uint32_t CSR13;    // [read-write] context swap registers
    volatile uint32_t CSR14;    // [read-write] context swap registers
    volatile uint32_t CSR15;    // [read-write] context swap registers
    volatile uint32_t CSR16;    // [read-write] context swap registers
    volatile uint32_t CSR17;    // [read-write] context swap registers
    volatile uint32_t CSR18;    // [read-write] context swap registers
    volatile uint32_t CSR19;    // [read-write] context swap registers
    volatile uint32_t CSR20;    // [read-write] context swap registers
    volatile uint32_t CSR21;    // [read-write] context swap registers
    volatile uint32_t CSR22;    // [read-write] context swap registers
    volatile uint32_t CSR23;    // [read-write] context swap registers
    volatile uint32_t CSR24;    // [read-write] context swap registers
    volatile uint32_t CSR25;    // [read-write] context swap registers
    volatile uint32_t CSR26;    // [read-write] context swap registers
    volatile uint32_t CSR27;    // [read-write] context swap registers
    volatile uint32_t CSR28;    // [read-write] context swap registers
    volatile uint32_t CSR29;    // [read-write] context swap registers
    volatile uint32_t CSR30;    // [read-write] context swap registers
    volatile uint32_t CSR31;    // [read-write] context swap registers
    volatile uint32_t CSR32;    // [read-write] context swap registers
    volatile uint32_t CSR33;    // [read-write] context swap registers
    volatile uint32_t CSR34;    // [read-write] context swap registers
    volatile uint32_t CSR35;    // [read-write] context swap registers
    volatile uint32_t CSR36;    // [read-write] context swap registers
    volatile uint32_t CSR37;    // [read-write] context swap registers
    volatile uint32_t CSR38;    // [read-write] context swap registers
    volatile uint32_t CSR39;    // [read-write] context swap registers
    volatile uint32_t CSR40;    // [read-write] context swap registers
    volatile uint32_t CSR41;    // [read-write] context swap registers
    volatile uint32_t CSR42;    // [read-write] context swap registers
    volatile uint32_t CSR43;    // [read-write] context swap registers
    volatile uint32_t CSR44;    // [read-write] context swap registers
    volatile uint32_t CSR45;    // [read-write] context swap registers
    volatile uint32_t CSR46;    // [read-write] context swap registers
    volatile uint32_t CSR47;    // [read-write] context swap registers
    volatile uint32_t CSR48;    // [read-write] context swap registers
    volatile uint32_t CSR49;    // [read-write] context swap registers
    volatile uint32_t CSR50;    // [read-write] context swap registers
    volatile uint32_t CSR51;    // [read-write] context swap registers
    volatile uint32_t CSR52;    // [read-write] context swap registers
    volatile uint32_t CSR53;    // [read-write] context swap registers
    reserved_t<0x50> _0x310;
    volatile uint32_t HASH_HR0; // [read-only] HASH digest register
    volatile uint32_t HASH_HR1; // [read-only] read-only
    volatile uint32_t HASH_HR2; // [read-only] read-only
    volatile uint32_t HASH_HR3; // [read-only] read-only
    volatile uint32_t HASH_HR4; // [read-only] read-only
    volatile uint32_t HASH_HR5; // [read-only] read-only
    volatile uint32_t HASH_HR6; // [read-only] read-only
    volatile uint32_t HASH_HR7; // [read-only] read-only

    static constexpr uint32_t CR_RESET_VALUE = 0x0;
    static constexpr uint32_t CR_INIT = 0x4;      // Initialize message digest calculation
    static constexpr uint32_t CR_DMAE = 0x8;      // DMA enable
    template<uint32_t X>
    static constexpr uint32_t CR_DATATYPE =       // Data type selection
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t CR_MODE = 0x40;     // Mode selection
    static constexpr uint32_t CR_ALGO0 = 0x80;    // Algorithm selection
    template<uint32_t X>
    static constexpr uint32_t CR_NBW =            // Number of words already pushed
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t CR_DINNE = 0x1000;  // DIN not empty
    static constexpr uint32_t CR_MDMAT = 0x2000;  // Multiple DMA Transfers
    static constexpr uint32_t CR_LKEY = 0x10000;  // Long key selection
    static constexpr uint32_t CR_ALGO1 = 0x40000; // ALGO

    static constexpr uint32_t DIN_RESET_VALUE = 0x0;

    static constexpr uint32_t STR_RESET_VALUE = 0x0;
    static constexpr uint32_t STR_DCAL = 0x100; // Digest calculation
    template<uint32_t X>
    static constexpr uint32_t STR_NBLW =        // Number of valid bits in the last word of the message
        bit_field_t<0, 0x1f>::value<X>();

    static constexpr uint32_t HR0_RESET_VALUE = 0x0;

    static constexpr uint32_t HR1_RESET_VALUE = 0x0;

    static constexpr uint32_t HR2_RESET_VALUE = 0x0;

    static constexpr uint32_t HR3_RESET_VALUE = 0x0;

    static constexpr uint32_t HR4_RESET_VALUE = 0x0;

    static constexpr uint32_t IMR_RESET_VALUE = 0x0;
    static constexpr uint32_t IMR_DCIE = 0x2;  // Digest calculation completion interrupt enable
    static constexpr uint32_t IMR_DINIE = 0x1; // Data input interrupt enable

    static constexpr uint32_t SR_RESET_VALUE = 0x1;
    static constexpr uint32_t SR_BUSY = 0x8;  // Busy bit
    static constexpr uint32_t SR_DMAS = 0x4;  // DMA Status
    static constexpr uint32_t SR_DCIS = 0x2;  // Digest calculation completion interrupt status
    static constexpr uint32_t SR_DINIS = 0x1; // Data input interrupt status

    static constexpr uint32_t CSR0_RESET_VALUE = 0x0;

    static constexpr uint32_t CSR1_RESET_VALUE = 0x0;

    static constexpr uint32_t CSR2_RESET_VALUE = 0x0;

    static constexpr uint32_t CSR3_RESET_VALUE = 0x0;

    static constexpr uint32_t CSR4_RESET_VALUE = 0x0;

    static constexpr uint32_t CSR5_RESET_VALUE = 0x0;

    static constexpr uint32_t CSR6_RESET_VALUE = 0x0;

    static constexpr uint32_t CSR7_RESET_VALUE = 0x0;

    static constexpr uint32_t CSR8_RESET_VALUE = 0x0;

    static constexpr uint32_t CSR9_RESET_VALUE = 0x0;

    static constexpr uint32_t CSR10_RESET_VALUE = 0x0;

    static constexpr uint32_t CSR11_RESET_VALUE = 0x0;

    static constexpr uint32_t CSR12_RESET_VALUE = 0x0;

    static constexpr uint32_t CSR13_RESET_VALUE = 0x0;

    static constexpr uint32_t CSR14_RESET_VALUE = 0x0;

    static constexpr uint32_t CSR15_RESET_VALUE = 0x0;

    static constexpr uint32_t CSR16_RESET_VALUE = 0x0;

    static constexpr uint32_t CSR17_RESET_VALUE = 0x0;

    static constexpr uint32_t CSR18_RESET_VALUE = 0x0;

    static constexpr uint32_t CSR19_RESET_VALUE = 0x0;

    static constexpr uint32_t CSR20_RESET_VALUE = 0x0;

    static constexpr uint32_t CSR21_RESET_VALUE = 0x0;

    static constexpr uint32_t CSR22_RESET_VALUE = 0x0;

    static constexpr uint32_t CSR23_RESET_VALUE = 0x0;

    static constexpr uint32_t CSR24_RESET_VALUE = 0x0;

    static constexpr uint32_t CSR25_RESET_VALUE = 0x0;

    static constexpr uint32_t CSR26_RESET_VALUE = 0x0;

    static constexpr uint32_t CSR27_RESET_VALUE = 0x0;

    static constexpr uint32_t CSR28_RESET_VALUE = 0x0;

    static constexpr uint32_t CSR29_RESET_VALUE = 0x0;

    static constexpr uint32_t CSR30_RESET_VALUE = 0x0;

    static constexpr uint32_t CSR31_RESET_VALUE = 0x0;

    static constexpr uint32_t CSR32_RESET_VALUE = 0x0;

    static constexpr uint32_t CSR33_RESET_VALUE = 0x0;

    static constexpr uint32_t CSR34_RESET_VALUE = 0x0;

    static constexpr uint32_t CSR35_RESET_VALUE = 0x0;

    static constexpr uint32_t CSR36_RESET_VALUE = 0x0;

    static constexpr uint32_t CSR37_RESET_VALUE = 0x0;

    static constexpr uint32_t CSR38_RESET_VALUE = 0x0;

    static constexpr uint32_t CSR39_RESET_VALUE = 0x0;

    static constexpr uint32_t CSR40_RESET_VALUE = 0x0;

    static constexpr uint32_t CSR41_RESET_VALUE = 0x0;

    static constexpr uint32_t CSR42_RESET_VALUE = 0x0;

    static constexpr uint32_t CSR43_RESET_VALUE = 0x0;

    static constexpr uint32_t CSR44_RESET_VALUE = 0x0;

    static constexpr uint32_t CSR45_RESET_VALUE = 0x0;

    static constexpr uint32_t CSR46_RESET_VALUE = 0x0;

    static constexpr uint32_t CSR47_RESET_VALUE = 0x0;

    static constexpr uint32_t CSR48_RESET_VALUE = 0x0;

    static constexpr uint32_t CSR49_RESET_VALUE = 0x0;

    static constexpr uint32_t CSR50_RESET_VALUE = 0x0;

    static constexpr uint32_t CSR51_RESET_VALUE = 0x0;

    static constexpr uint32_t CSR52_RESET_VALUE = 0x0;

    static constexpr uint32_t CSR53_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_HR0_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_HR1_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_HR2_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_HR3_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_HR4_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_HR5_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_HR6_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_HR7_RESET_VALUE = 0x0;
};


template<>
struct peripheral_t<STM32F745, HASH>
{
    typedef stm32f745_hash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, HASH>
{
    typedef stm32f745_hash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, HASH>
{
    typedef stm32f745_hash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, HASH>
{
    typedef stm32f745_hash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, HASH>
{
    typedef stm32f745_hash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, HASH>
{
    typedef stm32f745_hash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, HASH>
{
    typedef stm32f745_hash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, HASH>
{
    typedef stm32f745_hash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, HASH>
{
    typedef stm32f745_hash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, HASH>
{
    typedef stm32f745_hash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, HASH>
{
    typedef stm32f745_hash_t T;
    static T& V;
};

using hash_t = peripheral_t<mcu_svd, HASH>;

