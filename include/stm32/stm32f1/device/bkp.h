#pragma once

////
//
//      STM32F1 BKP peripherals
//
////

////
//
//      Backup registers
//
////

struct stm32f100_bkp_t
{
    volatile uint32_t DR1;   // [read-write] Backup data register (BKP_DR)
    volatile uint32_t DR2;   // [read-write] Backup data register (BKP_DR)
    volatile uint32_t DR3;   // [read-write] Backup data register (BKP_DR)
    volatile uint32_t DR4;   // [read-write] Backup data register (BKP_DR)
    volatile uint32_t DR5;   // [read-write] Backup data register (BKP_DR)
    volatile uint32_t DR6;   // [read-write] Backup data register (BKP_DR)
    volatile uint32_t DR7;   // [read-write] Backup data register (BKP_DR)
    volatile uint32_t DR8;   // [read-write] Backup data register (BKP_DR)
    volatile uint32_t DR9;   // [read-write] Backup data register (BKP_DR)
    volatile uint32_t DR10;  // [read-write] Backup data register (BKP_DR)
    volatile uint32_t RTCCR; // [read-write] RTC clock calibration register (BKP_RTCCR)
    volatile uint32_t CR;    // [read-write] Backup control register (BKP_CR)
    volatile uint32_t CSR;   // BKP_CSR control/status register (BKP_CSR)
    reserved_t<0x2> _0x3c;
    volatile uint32_t DR11;  // [read-write] Backup data register (BKP_DR)
    volatile uint32_t DR12;  // [read-write] Backup data register (BKP_DR)
    volatile uint32_t DR13;  // [read-write] Backup data register (BKP_DR)
    volatile uint32_t DR14;  // [read-write] Backup data register (BKP_DR)
    volatile uint32_t DR15;  // [read-write] Backup data register (BKP_DR)
    volatile uint32_t DR16;  // [read-write] Backup data register (BKP_DR)
    volatile uint32_t DR17;  // [read-write] Backup data register (BKP_DR)
    volatile uint32_t DR18;  // [read-write] Backup data register (BKP_DR)
    volatile uint32_t DR19;  // [read-write] Backup data register (BKP_DR)
    volatile uint32_t DR20;  // [read-write] Backup data register (BKP_DR)
    volatile uint32_t DR21;  // [read-write] Backup data register (BKP_DR)
    volatile uint32_t DR22;  // [read-write] Backup data register (BKP_DR)
    volatile uint32_t DR23;  // [read-write] Backup data register (BKP_DR)
    volatile uint32_t DR24;  // [read-write] Backup data register (BKP_DR)
    volatile uint32_t DR25;  // [read-write] Backup data register (BKP_DR)
    volatile uint32_t DR26;  // [read-write] Backup data register (BKP_DR)
    volatile uint32_t DR27;  // [read-write] Backup data register (BKP_DR)
    volatile uint32_t DR28;  // [read-write] Backup data register (BKP_DR)
    volatile uint32_t DR29;  // [read-write] Backup data register (BKP_DR)
    volatile uint32_t DR30;  // [read-write] Backup data register (BKP_DR)
    volatile uint32_t DR31;  // [read-write] Backup data register (BKP_DR)
    volatile uint32_t DR32;  // [read-write] Backup data register (BKP_DR)
    volatile uint32_t DR33;  // [read-write] Backup data register (BKP_DR)
    volatile uint32_t DR34;  // [read-write] Backup data register (BKP_DR)
    volatile uint32_t DR35;  // [read-write] Backup data register (BKP_DR)
    volatile uint32_t DR36;  // [read-write] Backup data register (BKP_DR)
    volatile uint32_t DR37;  // [read-write] Backup data register (BKP_DR)
    volatile uint32_t DR38;  // [read-write] Backup data register (BKP_DR)
    volatile uint32_t DR39;  // [read-write] Backup data register (BKP_DR)
    volatile uint32_t DR40;  // [read-write] Backup data register (BKP_DR)
    volatile uint32_t DR41;  // [read-write] Backup data register (BKP_DR)
    volatile uint32_t DR42;  // [read-write] Backup data register (BKP_DR)

    static constexpr uint32_t DR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DR1_D1 =   // Backup data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DR2_D2 =   // Backup data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DR3_D3 =   // Backup data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DR4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DR4_D4 =   // Backup data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DR5_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DR5_D5 =   // Backup data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DR6_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DR6_D6 =   // Backup data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DR7_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DR7_D7 =   // Backup data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DR8_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DR8_D8 =   // Backup data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DR9_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DR9_D9 =   // Backup data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DR10_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DR10_D10 =   // Backup data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DR11_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DR11_DR11 =   // Backup data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DR12_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DR12_DR12 =   // Backup data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DR13_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DR13_DR13 =   // Backup data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DR14_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DR14_D14 =   // Backup data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DR15_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DR15_D15 =   // Backup data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DR16_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DR16_D16 =   // Backup data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DR17_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DR17_D17 =   // Backup data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DR18_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DR18_D18 =   // Backup data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DR19_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DR19_D19 =   // Backup data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DR20_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DR20_D20 =   // Backup data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DR21_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DR21_D21 =   // Backup data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DR22_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DR22_D22 =   // Backup data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DR23_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DR23_D23 =   // Backup data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DR24_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DR24_D24 =   // Backup data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DR25_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DR25_D25 =   // Backup data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DR26_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DR26_D26 =   // Backup data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DR27_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DR27_D27 =   // Backup data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DR28_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DR28_D28 =   // Backup data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DR29_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DR29_D29 =   // Backup data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DR30_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DR30_D30 =   // Backup data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DR31_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DR31_D31 =   // Backup data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DR32_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DR32_D32 =   // Backup data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DR33_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DR33_D33 =   // Backup data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DR34_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DR34_D34 =   // Backup data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DR35_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DR35_D35 =   // Backup data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DR36_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DR36_D36 =   // Backup data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DR37_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DR37_D37 =   // Backup data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DR38_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DR38_D38 =   // Backup data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DR39_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DR39_D39 =   // Backup data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DR40_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DR40_D40 =   // Backup data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DR41_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DR41_D41 =   // Backup data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DR42_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DR42_D42 =   // Backup data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t RTCCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RTCCR_CAL =         // Calibration value
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t RTCCR_CCO = 0x80;   // Calibration Clock Output
    static constexpr uint32_t RTCCR_ASOE = 0x100; // Alarm or second output enable
    static constexpr uint32_t RTCCR_ASOS = 0x200; // Alarm or second output selection

    static constexpr uint32_t CR_RESET_VALUE = 0x0;
    static constexpr uint32_t CR_TPE = 0x1;  // Tamper pin enable
    static constexpr uint32_t CR_TPAL = 0x2; // Tamper pin active level

    static constexpr uint32_t CSR_RESET_VALUE = 0x0;
    static constexpr uint32_t CSR_CTE = 0x1;   // Clear Tamper event
    static constexpr uint32_t CSR_CTI = 0x2;   // Clear Tamper Interrupt
    static constexpr uint32_t CSR_TPIE = 0x4;  // Tamper Pin interrupt enable
    static constexpr uint32_t CSR_TEF = 0x100; // Tamper Event Flag
    static constexpr uint32_t CSR_TIF = 0x200; // Tamper Interrupt Flag
};


template<>
struct peripheral_t<STM32F100, BKP>
{
    typedef stm32f100_bkp_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F101, BKP>
{
    typedef stm32f100_bkp_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F102, BKP>
{
    typedef stm32f100_bkp_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F103, BKP>
{
    typedef stm32f100_bkp_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F107, BKP>
{
    typedef stm32f100_bkp_t T;
    static T& V;
};

using bkp_t = peripheral_t<mcu_svd, BKP>;

