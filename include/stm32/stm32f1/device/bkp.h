#pragma once

////
//
//      STM32F1 BKP peripherals
//
///

// BKP: Backup registers

struct stm32f100_bkp_t
{
    volatile uint32_t DR1; // Backup data register (BKP_DR)
    volatile uint32_t DR2; // Backup data register (BKP_DR)
    volatile uint32_t DR3; // Backup data register (BKP_DR)
    volatile uint32_t DR4; // Backup data register (BKP_DR)
    volatile uint32_t DR5; // Backup data register (BKP_DR)
    volatile uint32_t DR6; // Backup data register (BKP_DR)
    volatile uint32_t DR7; // Backup data register (BKP_DR)
    volatile uint32_t DR8; // Backup data register (BKP_DR)
    volatile uint32_t DR9; // Backup data register (BKP_DR)
    volatile uint32_t DR10; // Backup data register (BKP_DR)
    volatile uint32_t RTCCR; // RTC clock calibration register (BKP_RTCCR)
    volatile uint32_t CR; // Backup control register (BKP_CR)
    volatile uint32_t CSR; // BKP_CSR control/status register (BKP_CSR)
    reserved_t<0x2> _0x34;
    volatile uint32_t DR11; // Backup data register (BKP_DR)
    volatile uint32_t DR12; // Backup data register (BKP_DR)
    volatile uint32_t DR13; // Backup data register (BKP_DR)
    volatile uint32_t DR14; // Backup data register (BKP_DR)
    volatile uint32_t DR15; // Backup data register (BKP_DR)
    volatile uint32_t DR16; // Backup data register (BKP_DR)
    volatile uint32_t DR17; // Backup data register (BKP_DR)
    volatile uint32_t DR18; // Backup data register (BKP_DR)
    volatile uint32_t DR19; // Backup data register (BKP_DR)
    volatile uint32_t DR20; // Backup data register (BKP_DR)
    volatile uint32_t DR21; // Backup data register (BKP_DR)
    volatile uint32_t DR22; // Backup data register (BKP_DR)
    volatile uint32_t DR23; // Backup data register (BKP_DR)
    volatile uint32_t DR24; // Backup data register (BKP_DR)
    volatile uint32_t DR25; // Backup data register (BKP_DR)
    volatile uint32_t DR26; // Backup data register (BKP_DR)
    volatile uint32_t DR27; // Backup data register (BKP_DR)
    volatile uint32_t DR28; // Backup data register (BKP_DR)
    volatile uint32_t DR29; // Backup data register (BKP_DR)
    volatile uint32_t DR30; // Backup data register (BKP_DR)
    volatile uint32_t DR31; // Backup data register (BKP_DR)
    volatile uint32_t DR32; // Backup data register (BKP_DR)
    volatile uint32_t DR33; // Backup data register (BKP_DR)
    volatile uint32_t DR34; // Backup data register (BKP_DR)
    volatile uint32_t DR35; // Backup data register (BKP_DR)
    volatile uint32_t DR36; // Backup data register (BKP_DR)
    volatile uint32_t DR37; // Backup data register (BKP_DR)
    volatile uint32_t DR38; // Backup data register (BKP_DR)
    volatile uint32_t DR39; // Backup data register (BKP_DR)
    volatile uint32_t DR40; // Backup data register (BKP_DR)
    volatile uint32_t DR41; // Backup data register (BKP_DR)
    volatile uint32_t DR42; // Backup data register (BKP_DR)

    static constexpr uint32_t DR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR1_D1; // Backup data

    static constexpr uint32_t DR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR2_D2; // Backup data

    static constexpr uint32_t DR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR3_D3; // Backup data

    static constexpr uint32_t DR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR4_D4; // Backup data

    static constexpr uint32_t DR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR5_D5; // Backup data

    static constexpr uint32_t DR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR6_D6; // Backup data

    static constexpr uint32_t DR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR7_D7; // Backup data

    static constexpr uint32_t DR8_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR8_D8; // Backup data

    static constexpr uint32_t DR9_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR9_D9; // Backup data

    static constexpr uint32_t DR10_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR10_D10; // Backup data

    static constexpr uint32_t RTCCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7f> RTCCR_CAL; // Calibration value
    static constexpr uint32_t RTCCR_CCO = 0x80; // Calibration Clock Output
    static constexpr uint32_t RTCCR_ASOE = 0x100; // Alarm or second output enable
    static constexpr uint32_t RTCCR_ASOS = 0x200; // Alarm or second output selection

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_TPE = 0x1; // Tamper pin enable
    static constexpr uint32_t CR_TPAL = 0x2; // Tamper pin active level

    static constexpr uint32_t CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CSR_CTE = 0x1; // Clear Tamper event
    static constexpr uint32_t CSR_CTI = 0x2; // Clear Tamper Interrupt
    static constexpr uint32_t CSR_TPIE = 0x4; // Tamper Pin interrupt enable
    static constexpr uint32_t CSR_TEF = 0x100; // Tamper Event Flag
    static constexpr uint32_t CSR_TIF = 0x200; // Tamper Interrupt Flag


    static constexpr uint32_t DR11_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR11_DR11; // Backup data

    static constexpr uint32_t DR12_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR12_DR12; // Backup data

    static constexpr uint32_t DR13_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR13_DR13; // Backup data

    static constexpr uint32_t DR14_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR14_D14; // Backup data

    static constexpr uint32_t DR15_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR15_D15; // Backup data

    static constexpr uint32_t DR16_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR16_D16; // Backup data

    static constexpr uint32_t DR17_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR17_D17; // Backup data

    static constexpr uint32_t DR18_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR18_D18; // Backup data

    static constexpr uint32_t DR19_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR19_D19; // Backup data

    static constexpr uint32_t DR20_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR20_D20; // Backup data

    static constexpr uint32_t DR21_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR21_D21; // Backup data

    static constexpr uint32_t DR22_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR22_D22; // Backup data

    static constexpr uint32_t DR23_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR23_D23; // Backup data

    static constexpr uint32_t DR24_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR24_D24; // Backup data

    static constexpr uint32_t DR25_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR25_D25; // Backup data

    static constexpr uint32_t DR26_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR26_D26; // Backup data

    static constexpr uint32_t DR27_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR27_D27; // Backup data

    static constexpr uint32_t DR28_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR28_D28; // Backup data

    static constexpr uint32_t DR29_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR29_D29; // Backup data

    static constexpr uint32_t DR30_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR30_D30; // Backup data

    static constexpr uint32_t DR31_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR31_D31; // Backup data

    static constexpr uint32_t DR32_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR32_D32; // Backup data

    static constexpr uint32_t DR33_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR33_D33; // Backup data

    static constexpr uint32_t DR34_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR34_D34; // Backup data

    static constexpr uint32_t DR35_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR35_D35; // Backup data

    static constexpr uint32_t DR36_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR36_D36; // Backup data

    static constexpr uint32_t DR37_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR37_D37; // Backup data

    static constexpr uint32_t DR38_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR38_D38; // Backup data

    static constexpr uint32_t DR39_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR39_D39; // Backup data

    static constexpr uint32_t DR40_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR40_D40; // Backup data

    static constexpr uint32_t DR41_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR41_D41; // Backup data

    static constexpr uint32_t DR42_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR42_D42; // Backup data
};

template<>
struct peripheral_t<STM32F100, BKP>
{
    static constexpr periph_t P = BKP;
    using T = stm32f100_bkp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F101, BKP>
{
    static constexpr periph_t P = BKP;
    using T = stm32f100_bkp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F102, BKP>
{
    static constexpr periph_t P = BKP;
    using T = stm32f100_bkp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F103, BKP>
{
    static constexpr periph_t P = BKP;
    using T = stm32f100_bkp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F107, BKP>
{
    static constexpr periph_t P = BKP;
    using T = stm32f100_bkp_t;
    static T& V;
};

using bkp_t = peripheral_t<svd, BKP>;

template<int INST> struct bkp_traits {};

template<> struct bkp_traits<0>
{
    using bkp = bkp_t;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR |= RCC::T::APB1ENR_BKPEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR &= ~RCC::T::APB1ENR_BKPEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR |= RCC::T::APB1RSTR_BKPRST;
    }
};
