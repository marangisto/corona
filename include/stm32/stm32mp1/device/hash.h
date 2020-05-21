#pragma once

////
//
//      STM32MP1 HASH peripherals
//
////

////
//
//      HASH register block
//
////

struct stm32mp15xxx_hash1_t
{
    volatile uint32_t HASH_CR;     // HASH control register
    volatile uint32_t HASH_DIN;    // [read-write] HASH_DIN is the data input register.
    volatile uint32_t HASH_STR;    // The HASH_STR register has two functions: It is used to define the number of valid bits in the last word of the message entered in the hash processor (that is the number of valid least significant bits in the last data written to the HASH_DIN register) It is used to start the processing of the last block in the message by writing the DCAL bit to 1
    volatile uint32_t HASH_HR0;    // [read-only] HASH digest register 0
    volatile uint32_t HASH_HR1;    // [read-only] HASH digest register 1
    volatile uint32_t HASH_HR2;    // [read-only] HASH digest register 2
    volatile uint32_t HASH_HR3;    // [read-only] HASH digest register 3
    volatile uint32_t HASH_HR4;    // [read-only] HASH digest register 4
    volatile uint32_t HASH_IMR;    // [read-write] HASH interrupt enable register
    volatile uint32_t HASH_SR;     // HASH status register
    reserved_t<0x34> _0xf8;
    volatile uint32_t HASH_CSR0;   // [read-write] These registers contain the complete internal register states of the hash processor. They are useful when a context swap has to be done because a high-priority task needs to use the hash processor while it is already used by another task. When such an event occurs, the HASH_CSRx registers have to be read and the read values have to be saved in the system memory space. Then the hash processor can be used by the preemptive task, and when the hash computation is complete, the saved context can be read from memory and written back into the HASH_CSRx registers.
    volatile uint32_t HASH_CSR1;   // [read-write] HASH context swap registers
    volatile uint32_t HASH_CSR2;   // [read-write] HASH context swap registers
    volatile uint32_t HASH_CSR3;   // [read-write] HASH context swap registers
    volatile uint32_t HASH_CSR4;   // [read-write] HASH context swap registers
    volatile uint32_t HASH_CSR5;   // [read-write] HASH context swap registers
    volatile uint32_t HASH_CSR6;   // [read-write] HASH context swap registers
    volatile uint32_t HASH_CSR7;   // [read-write] HASH context swap registers
    volatile uint32_t HASH_CSR8;   // [read-write] HASH context swap registers
    volatile uint32_t HASH_CSR9;   // [read-write] HASH context swap registers
    volatile uint32_t HASH_CSR10;  // [read-write] HASH context swap registers
    volatile uint32_t HASH_CSR11;  // [read-write] HASH context swap registers
    volatile uint32_t HASH_CSR12;  // [read-write] HASH context swap registers
    volatile uint32_t HASH_CSR13;  // [read-write] HASH context swap registers
    volatile uint32_t HASH_CSR14;  // [read-write] HASH context swap registers
    volatile uint32_t HASH_CSR15;  // [read-write] HASH context swap registers
    volatile uint32_t HASH_CSR16;  // [read-write] HASH context swap registers
    volatile uint32_t HASH_CSR17;  // [read-write] HASH context swap registers
    volatile uint32_t HASH_CSR18;  // [read-write] HASH context swap registers
    volatile uint32_t HASH_CSR19;  // [read-write] HASH context swap registers
    volatile uint32_t HASH_CSR20;  // [read-write] HASH context swap registers
    volatile uint32_t HASH_CSR21;  // [read-write] HASH context swap registers
    volatile uint32_t HASH_CSR22;  // [read-write] HASH context swap registers
    volatile uint32_t HASH_CSR23;  // [read-write] HASH context swap registers
    volatile uint32_t HASH_CSR24;  // [read-write] HASH context swap registers
    volatile uint32_t HASH_CSR25;  // [read-write] HASH context swap registers
    volatile uint32_t HASH_CSR26;  // [read-write] HASH context swap registers
    volatile uint32_t HASH_CSR27;  // [read-write] HASH context swap registers
    volatile uint32_t HASH_CSR28;  // [read-write] HASH context swap registers
    volatile uint32_t HASH_CSR29;  // [read-write] HASH context swap registers
    volatile uint32_t HASH_CSR30;  // [read-write] HASH context swap registers
    volatile uint32_t HASH_CSR31;  // [read-write] HASH context swap registers
    volatile uint32_t HASH_CSR32;  // [read-write] HASH context swap registers
    volatile uint32_t HASH_CSR33;  // [read-write] HASH context swap registers
    volatile uint32_t HASH_CSR34;  // [read-write] HASH context swap registers
    volatile uint32_t HASH_CSR35;  // [read-write] HASH context swap registers
    volatile uint32_t HASH_CSR36;  // [read-write] HASH context swap registers
    volatile uint32_t HASH_CSR37;  // [read-write] HASH context swap registers
    volatile uint32_t HASH_CSR38;  // [read-write] HASH context swap registers
    volatile uint32_t HASH_CSR39;  // [read-write] HASH context swap registers
    volatile uint32_t HASH_CSR40;  // [read-write] HASH context swap registers
    volatile uint32_t HASH_CSR41;  // [read-write] HASH context swap registers
    volatile uint32_t HASH_CSR42;  // [read-write] HASH context swap registers
    volatile uint32_t HASH_CSR43;  // [read-write] HASH context swap registers
    volatile uint32_t HASH_CSR44;  // [read-write] HASH context swap registers
    volatile uint32_t HASH_CSR45;  // [read-write] HASH context swap registers
    volatile uint32_t HASH_CSR46;  // [read-write] HASH context swap registers
    volatile uint32_t HASH_CSR47;  // [read-write] HASH context swap registers
    volatile uint32_t HASH_CSR48;  // [read-write] HASH context swap registers
    volatile uint32_t HASH_CSR49;  // [read-write] HASH context swap registers
    volatile uint32_t HASH_CSR50;  // [read-write] HASH context swap registers
    volatile uint32_t HASH_CSR51;  // [read-write] HASH context swap registers
    volatile uint32_t HASH_CSR52;  // [read-write] HASH context swap registers
    volatile uint32_t HASH_CSR53;  // [read-write] HASH context swap registers
    reserved_t<0x55> _0x324;
    volatile uint32_t HASH_HR5;    // [read-only] HASH digest register 5
    volatile uint32_t HASH_HR6;    // [read-only] HASH digest register 6
    volatile uint32_t HASH_HR7;    // [read-only] HASH digest register 7
    reserved_t<0x30> _0x3f0;
    volatile uint32_t HASH_HWCFGR; // [read-only] HASH Hardware Configuration Register
    volatile uint32_t HASH_VERR;   // [read-only] HASH Version Register
    volatile uint32_t HASH_IPIDR;  // [read-only] HASH Identification
    volatile uint32_t HASH_MID;    // [read-only] HASH Hardware Magic ID

    static constexpr uint32_t HASH_CR_RESET_VALUE = 0x0;
    static constexpr uint32_t HASH_CR_INIT = 0x4;      // INIT
    static constexpr uint32_t HASH_CR_DMAE = 0x8;      // DMAE
    template<uint32_t X>
    static constexpr uint32_t HASH_CR_DATATYPE =       // DATATYPE
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t HASH_CR_MODE = 0x40;     // MODE
    static constexpr uint32_t HASH_CR_ALGO0 = 0x80;    // ALGO0
    template<uint32_t X>
    static constexpr uint32_t HASH_CR_NBW =            // NBW
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t HASH_CR_DINNE = 0x1000;  // DINNE
    static constexpr uint32_t HASH_CR_MDMAT = 0x2000;  // MDMAT
    static constexpr uint32_t HASH_CR_DMAA = 0x4000;   // DMAA
    static constexpr uint32_t HASH_CR_LKEY = 0x10000;  // LKEY
    static constexpr uint32_t HASH_CR_ALGO1 = 0x40000; // ALGO1

    static constexpr uint32_t HASH_DIN_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_STR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t HASH_STR_NBLW =        // NBLW
        bit_field_t<0, 0x1f>::value<X>();
    static constexpr uint32_t HASH_STR_DCAL = 0x100; // DCAL

    static constexpr uint32_t HASH_HR0_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_HR1_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_HR2_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_HR3_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_HR4_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_IMR_RESET_VALUE = 0x0;
    static constexpr uint32_t HASH_IMR_DINIE = 0x1; // DINIE
    static constexpr uint32_t HASH_IMR_DCIE = 0x2;  // DCIE

    static constexpr uint32_t HASH_SR_RESET_VALUE = 0x1;
    static constexpr uint32_t HASH_SR_DINIS = 0x1; // DINIS
    static constexpr uint32_t HASH_SR_DCIS = 0x2;  // DCIS
    static constexpr uint32_t HASH_SR_DMAS = 0x4;  // DMAS
    static constexpr uint32_t HASH_SR_BUSY = 0x8;  // BUSY

    static constexpr uint32_t HASH_CSR0_RESET_VALUE = 0x2;

    static constexpr uint32_t HASH_CSR1_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_CSR2_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_CSR3_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_CSR4_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_CSR5_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_CSR6_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_CSR7_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_CSR8_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_CSR9_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_CSR10_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_CSR11_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_CSR12_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_CSR13_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_CSR14_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_CSR15_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_CSR16_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_CSR17_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_CSR18_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_CSR19_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_CSR20_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_CSR21_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_CSR22_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_CSR23_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_CSR24_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_CSR25_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_CSR26_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_CSR27_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_CSR28_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_CSR29_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_CSR30_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_CSR31_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_CSR32_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_CSR33_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_CSR34_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_CSR35_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_CSR36_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_CSR37_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_CSR38_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_CSR39_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_CSR40_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_CSR41_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_CSR42_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_CSR43_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_CSR44_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_CSR45_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_CSR46_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_CSR47_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_CSR48_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_CSR49_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_CSR50_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_CSR51_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_CSR52_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_CSR53_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_HR5_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_HR6_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_HR7_RESET_VALUE = 0x0;

    static constexpr uint32_t HASH_HWCFGR_RESET_VALUE = 0x1;
    template<uint32_t X>
    static constexpr uint32_t HASH_HWCFGR_CFG1 =   // CFG1
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t HASH_VERR_RESET_VALUE = 0x23;
    template<uint32_t X>
    static constexpr uint32_t HASH_VERR_VER =   // VER
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t HASH_IPIDR_RESET_VALUE = 0x170031;

    static constexpr uint32_t HASH_MID_RESET_VALUE = 0xa3c5dd01;
};


template<>
struct peripheral_t<STM32MP15xxx, HASH1>
{
    typedef stm32mp15xxx_hash1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32MP15xxx, HASH2>
{
    typedef stm32mp15xxx_hash1_t T;
    static T& V;
};

using hash1_t = peripheral_t<mcu_svd, HASH1>;
using hash2_t = peripheral_t<mcu_svd, HASH2>;

