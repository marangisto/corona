#pragma once

////
//
//      STM32F7 HASH peripherals
//
///

// HASH: Hash processor

struct stm32f745_hash_t
{
    volatile uint32_t CR; // control register
    volatile uint32_t DIN; // data input register
    volatile uint32_t STR; // start register
    volatile uint32_t HR0; // digest registers
    volatile uint32_t HR1; // digest registers
    volatile uint32_t HR2; // digest registers
    volatile uint32_t HR3; // digest registers
    volatile uint32_t HR4; // digest registers
    volatile uint32_t IMR; // interrupt enable register
    volatile uint32_t SR; // status register
    reserved_t<0x34> _0x28;
    volatile uint32_t CSR0; // context swap registers
    volatile uint32_t CSR1; // context swap registers
    volatile uint32_t CSR2; // context swap registers
    volatile uint32_t CSR3; // context swap registers
    volatile uint32_t CSR4; // context swap registers
    volatile uint32_t CSR5; // context swap registers
    volatile uint32_t CSR6; // context swap registers
    volatile uint32_t CSR7; // context swap registers
    volatile uint32_t CSR8; // context swap registers
    volatile uint32_t CSR9; // context swap registers
    volatile uint32_t CSR10; // context swap registers
    volatile uint32_t CSR11; // context swap registers
    volatile uint32_t CSR12; // context swap registers
    volatile uint32_t CSR13; // context swap registers
    volatile uint32_t CSR14; // context swap registers
    volatile uint32_t CSR15; // context swap registers
    volatile uint32_t CSR16; // context swap registers
    volatile uint32_t CSR17; // context swap registers
    volatile uint32_t CSR18; // context swap registers
    volatile uint32_t CSR19; // context swap registers
    volatile uint32_t CSR20; // context swap registers
    volatile uint32_t CSR21; // context swap registers
    volatile uint32_t CSR22; // context swap registers
    volatile uint32_t CSR23; // context swap registers
    volatile uint32_t CSR24; // context swap registers
    volatile uint32_t CSR25; // context swap registers
    volatile uint32_t CSR26; // context swap registers
    volatile uint32_t CSR27; // context swap registers
    volatile uint32_t CSR28; // context swap registers
    volatile uint32_t CSR29; // context swap registers
    volatile uint32_t CSR30; // context swap registers
    volatile uint32_t CSR31; // context swap registers
    volatile uint32_t CSR32; // context swap registers
    volatile uint32_t CSR33; // context swap registers
    volatile uint32_t CSR34; // context swap registers
    volatile uint32_t CSR35; // context swap registers
    volatile uint32_t CSR36; // context swap registers
    volatile uint32_t CSR37; // context swap registers
    volatile uint32_t CSR38; // context swap registers
    volatile uint32_t CSR39; // context swap registers
    volatile uint32_t CSR40; // context swap registers
    volatile uint32_t CSR41; // context swap registers
    volatile uint32_t CSR42; // context swap registers
    volatile uint32_t CSR43; // context swap registers
    volatile uint32_t CSR44; // context swap registers
    volatile uint32_t CSR45; // context swap registers
    volatile uint32_t CSR46; // context swap registers
    volatile uint32_t CSR47; // context swap registers
    volatile uint32_t CSR48; // context swap registers
    volatile uint32_t CSR49; // context swap registers
    volatile uint32_t CSR50; // context swap registers
    volatile uint32_t CSR51; // context swap registers
    volatile uint32_t CSR52; // context swap registers
    volatile uint32_t CSR53; // context swap registers
    reserved_t<0x50> _0x1d0;
    volatile uint32_t HASH_HR0; // HASH digest register
    volatile uint32_t HASH_HR1; // read-only
    volatile uint32_t HASH_HR2; // read-only
    volatile uint32_t HASH_HR3; // read-only
    volatile uint32_t HASH_HR4; // read-only
    volatile uint32_t HASH_HR5; // read-only
    volatile uint32_t HASH_HR6; // read-only
    volatile uint32_t HASH_HR7; // read-only

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_INIT = 0x4; // Initialize message digest calculation
    static constexpr uint32_t CR_DMAE = 0x8; // DMA enable
    typedef bit_field_t<4, 0x3> CR_DATATYPE; // Data type selection
    static constexpr uint32_t CR_MODE = 0x40; // Mode selection
    static constexpr uint32_t CR_ALGO0 = 0x80; // Algorithm selection
    typedef bit_field_t<8, 0xf> CR_NBW; // Number of words already pushed
    static constexpr uint32_t CR_DINNE = 0x1000; // DIN not empty
    static constexpr uint32_t CR_MDMAT = 0x2000; // Multiple DMA Transfers
    static constexpr uint32_t CR_LKEY = 0x10000; // Long key selection
    static constexpr uint32_t CR_ALGO1 = 0x40000; // ALGO

    static constexpr uint32_t DIN_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DIN_DATAIN; // Data input

    static constexpr uint32_t STR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t STR_DCAL = 0x100; // Digest calculation
    typedef bit_field_t<0, 0x1f> STR_NBLW; // Number of valid bits in the last word of the message

    static constexpr uint32_t HR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HR0_H0; // H0

    static constexpr uint32_t HR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HR1_H1; // H1

    static constexpr uint32_t HR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HR2_H2; // H2

    static constexpr uint32_t HR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HR3_H3; // H3

    static constexpr uint32_t HR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HR4_H4; // H4

    static constexpr uint32_t IMR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IMR_DCIE = 0x2; // Digest calculation completion interrupt enable
    static constexpr uint32_t IMR_DINIE = 0x1; // Data input interrupt enable

    static constexpr uint32_t SR_RESET_VALUE = 0x1; // Reset value
    static constexpr uint32_t SR_BUSY = 0x8; // Busy bit
    static constexpr uint32_t SR_DMAS = 0x4; // DMA Status
    static constexpr uint32_t SR_DCIS = 0x2; // Digest calculation completion interrupt status
    static constexpr uint32_t SR_DINIS = 0x1; // Data input interrupt status


    static constexpr uint32_t CSR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSR0_CSR0; // CSR0

    static constexpr uint32_t CSR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSR1_CSR1; // CSR1

    static constexpr uint32_t CSR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSR2_CSR2; // CSR2

    static constexpr uint32_t CSR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSR3_CSR3; // CSR3

    static constexpr uint32_t CSR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSR4_CSR4; // CSR4

    static constexpr uint32_t CSR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSR5_CSR5; // CSR5

    static constexpr uint32_t CSR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSR6_CSR6; // CSR6

    static constexpr uint32_t CSR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSR7_CSR7; // CSR7

    static constexpr uint32_t CSR8_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSR8_CSR8; // CSR8

    static constexpr uint32_t CSR9_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSR9_CSR9; // CSR9

    static constexpr uint32_t CSR10_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSR10_CSR10; // CSR10

    static constexpr uint32_t CSR11_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSR11_CSR11; // CSR11

    static constexpr uint32_t CSR12_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSR12_CSR12; // CSR12

    static constexpr uint32_t CSR13_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSR13_CSR13; // CSR13

    static constexpr uint32_t CSR14_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSR14_CSR14; // CSR14

    static constexpr uint32_t CSR15_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSR15_CSR15; // CSR15

    static constexpr uint32_t CSR16_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSR16_CSR16; // CSR16

    static constexpr uint32_t CSR17_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSR17_CSR17; // CSR17

    static constexpr uint32_t CSR18_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSR18_CSR18; // CSR18

    static constexpr uint32_t CSR19_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSR19_CSR19; // CSR19

    static constexpr uint32_t CSR20_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSR20_CSR20; // CSR20

    static constexpr uint32_t CSR21_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSR21_CSR21; // CSR21

    static constexpr uint32_t CSR22_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSR22_CSR22; // CSR22

    static constexpr uint32_t CSR23_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSR23_CSR23; // CSR23

    static constexpr uint32_t CSR24_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSR24_CSR24; // CSR24

    static constexpr uint32_t CSR25_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSR25_CSR25; // CSR25

    static constexpr uint32_t CSR26_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSR26_CSR26; // CSR26

    static constexpr uint32_t CSR27_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSR27_CSR27; // CSR27

    static constexpr uint32_t CSR28_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSR28_CSR28; // CSR28

    static constexpr uint32_t CSR29_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSR29_CSR29; // CSR29

    static constexpr uint32_t CSR30_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSR30_CSR30; // CSR30

    static constexpr uint32_t CSR31_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSR31_CSR31; // CSR31

    static constexpr uint32_t CSR32_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSR32_CSR32; // CSR32

    static constexpr uint32_t CSR33_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSR33_CSR33; // CSR33

    static constexpr uint32_t CSR34_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSR34_CSR34; // CSR34

    static constexpr uint32_t CSR35_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSR35_CSR35; // CSR35

    static constexpr uint32_t CSR36_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSR36_CSR36; // CSR36

    static constexpr uint32_t CSR37_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSR37_CSR37; // CSR37

    static constexpr uint32_t CSR38_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSR38_CSR38; // CSR38

    static constexpr uint32_t CSR39_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSR39_CSR39; // CSR39

    static constexpr uint32_t CSR40_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSR40_CSR40; // CSR40

    static constexpr uint32_t CSR41_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSR41_CSR41; // CSR41

    static constexpr uint32_t CSR42_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSR42_CSR42; // CSR42

    static constexpr uint32_t CSR43_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSR43_CSR43; // CSR43

    static constexpr uint32_t CSR44_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSR44_CSR44; // CSR44

    static constexpr uint32_t CSR45_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSR45_CSR45; // CSR45

    static constexpr uint32_t CSR46_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSR46_CSR46; // CSR46

    static constexpr uint32_t CSR47_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSR47_CSR47; // CSR47

    static constexpr uint32_t CSR48_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSR48_CSR48; // CSR48

    static constexpr uint32_t CSR49_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSR49_CSR49; // CSR49

    static constexpr uint32_t CSR50_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSR50_CSR50; // CSR50

    static constexpr uint32_t CSR51_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSR51_CSR51; // CSR51

    static constexpr uint32_t CSR52_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSR52_CSR52; // CSR52

    static constexpr uint32_t CSR53_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CSR53_CSR53; // CSR53


    static constexpr uint32_t HASH_HR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HASH_HR0_H0; // H0

    static constexpr uint32_t HASH_HR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HASH_HR1_H1; // H1

    static constexpr uint32_t HASH_HR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HASH_HR2_H2; // H2

    static constexpr uint32_t HASH_HR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HASH_HR3_H3; // H3

    static constexpr uint32_t HASH_HR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HASH_HR4_H4; // H4

    static constexpr uint32_t HASH_HR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HASH_HR5_H5; // H5

    static constexpr uint32_t HASH_HR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HASH_HR6_H6; // H6

    static constexpr uint32_t HASH_HR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HASH_HR7_H7; // H7
};

template<>
struct peripheral_t<STM32F745, HASH>
{
    static constexpr periph_t P = HASH;
    using T = stm32f745_hash_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, HASH>
{
    static constexpr periph_t P = HASH;
    using T = stm32f745_hash_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, HASH>
{
    static constexpr periph_t P = HASH;
    using T = stm32f745_hash_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, HASH>
{
    static constexpr periph_t P = HASH;
    using T = stm32f745_hash_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, HASH>
{
    static constexpr periph_t P = HASH;
    using T = stm32f745_hash_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, HASH>
{
    static constexpr periph_t P = HASH;
    using T = stm32f745_hash_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, HASH>
{
    static constexpr periph_t P = HASH;
    using T = stm32f745_hash_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, HASH>
{
    static constexpr periph_t P = HASH;
    using T = stm32f745_hash_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, HASH>
{
    static constexpr periph_t P = HASH;
    using T = stm32f745_hash_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, HASH>
{
    static constexpr periph_t P = HASH;
    using T = stm32f745_hash_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, HASH>
{
    static constexpr periph_t P = HASH;
    using T = stm32f745_hash_t;
    static T& V;
};

using hash_t = peripheral_t<svd, HASH>;

template<int INST> struct hash_traits {};

template<> struct hash_traits<0>
{
    using hash = hash_t;

    template<typename RCC>
    static void enable()
    {
        RCC::V.AHB2ENR |= RCC::T::AHB2ENR_HASHEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHB2ENR &= ~RCC::T::AHB2ENR_HASHEN;
    }
};
