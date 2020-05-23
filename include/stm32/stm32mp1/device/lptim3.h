#pragma once

////
//
//      STM32MP1 LPTIM3 peripherals
//
////

////
//
//      LPTIM3
//
////

struct stm32mp15xxx_lptim3_t
{
    volatile uint32_t LPTIM_ISR;     // [read-only] LPTIM interrupt and status register
    volatile uint32_t LPTIM_ICR;     // [write-only] LPTIM interrupt clear register
    volatile uint32_t LPTIM_IER;     // [read-write] LPTIM interrupt enable register
    volatile uint32_t LPTIM_CFGR;    // [read-write] LPTIM configuration register
    volatile uint32_t LPTIM_CR;      // [read-write] LPTIM control register
    volatile uint32_t LPTIM_CMP;     // [read-write] LPTIM compare register
    volatile uint32_t LPTIM_ARR;     // [read-write] LPTIM autoreload register
    volatile uint32_t LPTIM_CNT;     // [read-only] LPTIM counter register
    reserved_t<0x1> _0x24;
    volatile uint32_t LPTIM3_CFGR2;  // [read-write] LPTIM3 configuration register 2
    reserved_t<0xf2> _0x3f0;
    volatile uint32_t LPTIM3_HWCFGR; // [read-only] LPTIM 3 peripheral hardware configuration register
    volatile uint32_t LPTIM_VERR;    // [read-only] LPTIM peripheral version identification register
    volatile uint32_t LPTIM_PIDR;    // [read-only] LPTIM peripheral type identification register
    volatile uint32_t LPTIM_SIDR;    // [read-only] LPTIM registers map size identification register

    static constexpr uint32_t LPTIM3_CFGR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LPTIM3_CFGR2_IN1SEL =   // IN1SEL
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t LPTIM_ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t LPTIM_ISR_CMPM = 0x1;    // CMPM
    static constexpr uint32_t LPTIM_ISR_ARRM = 0x2;    // ARRM
    static constexpr uint32_t LPTIM_ISR_EXTTRIG = 0x4; // EXTTRIG
    static constexpr uint32_t LPTIM_ISR_CMPOK = 0x8;   // CMPOK
    static constexpr uint32_t LPTIM_ISR_ARROK = 0x10;  // ARROK
    static constexpr uint32_t LPTIM_ISR_UP = 0x20;     // UP
    static constexpr uint32_t LPTIM_ISR_DOWN = 0x40;   // DOWN

    static constexpr uint32_t LPTIM_ICR_RESET_VALUE = 0x0;
    static constexpr uint32_t LPTIM_ICR_CMPMCF = 0x1;    // CMPMCF
    static constexpr uint32_t LPTIM_ICR_ARRMCF = 0x2;    // ARRMCF
    static constexpr uint32_t LPTIM_ICR_EXTTRIGCF = 0x4; // EXTTRIGCF
    static constexpr uint32_t LPTIM_ICR_CMPOKCF = 0x8;   // CMPOKCF
    static constexpr uint32_t LPTIM_ICR_ARROKCF = 0x10;  // ARROKCF
    static constexpr uint32_t LPTIM_ICR_UPCF = 0x20;     // UPCF
    static constexpr uint32_t LPTIM_ICR_DOWNCF = 0x40;   // DOWNCF

    static constexpr uint32_t LPTIM_IER_RESET_VALUE = 0x0;
    static constexpr uint32_t LPTIM_IER_CMPMIE = 0x1;    // CMPMIE
    static constexpr uint32_t LPTIM_IER_ARRMIE = 0x2;    // ARRMIE
    static constexpr uint32_t LPTIM_IER_EXTTRIGIE = 0x4; // EXTTRIGIE
    static constexpr uint32_t LPTIM_IER_CMPOKIE = 0x8;   // CMPOKIE
    static constexpr uint32_t LPTIM_IER_ARROKIE = 0x10;  // ARROKIE
    static constexpr uint32_t LPTIM_IER_UPIE = 0x20;     // UPIE
    static constexpr uint32_t LPTIM_IER_DOWNIE = 0x40;   // DOWNIE

    static constexpr uint32_t LPTIM_CFGR_RESET_VALUE = 0x0;
    static constexpr uint32_t LPTIM_CFGR_CKSEL = 0x1;          // CKSEL
    template<uint32_t X>
    static constexpr uint32_t LPTIM_CFGR_CKPOL =               // CKPOL
        bit_field_t<1, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LPTIM_CFGR_CKFLT =               // CKFLT
        bit_field_t<3, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LPTIM_CFGR_TRGFLT =              // TRGFLT
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LPTIM_CFGR_PRESC =               // PRESC
        bit_field_t<9, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LPTIM_CFGR_TRIGSEL =             // TRIGSEL
        bit_field_t<13, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LPTIM_CFGR_TRIGEN =              // TRIGEN
        bit_field_t<17, 0x3>::value<X>();
    static constexpr uint32_t LPTIM_CFGR_TIMOUT = 0x80000;     // TIMOUT
    static constexpr uint32_t LPTIM_CFGR_WAVE = 0x100000;      // WAVE
    static constexpr uint32_t LPTIM_CFGR_WAVPOL = 0x200000;    // WAVPOL
    static constexpr uint32_t LPTIM_CFGR_PRELOAD = 0x400000;   // PRELOAD
    static constexpr uint32_t LPTIM_CFGR_COUNTMODE = 0x800000; // COUNTMODE
    static constexpr uint32_t LPTIM_CFGR_ENC = 0x1000000;      // ENC

    static constexpr uint32_t LPTIM_CR_RESET_VALUE = 0x0;
    static constexpr uint32_t LPTIM_CR_ENABLE = 0x1;   // ENABLE
    static constexpr uint32_t LPTIM_CR_SNGSTRT = 0x2;  // SNGSTRT
    static constexpr uint32_t LPTIM_CR_CNTSTRT = 0x4;  // CNTSTRT
    static constexpr uint32_t LPTIM_CR_COUNTRST = 0x8; // COUNTRST
    static constexpr uint32_t LPTIM_CR_RSTARE = 0x10;  // RSTARE

    static constexpr uint32_t LPTIM_CMP_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LPTIM_CMP_CMP =   // CMP
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t LPTIM_ARR_RESET_VALUE = 0x1;
    template<uint32_t X>
    static constexpr uint32_t LPTIM_ARR_ARR =   // ARR
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t LPTIM_CNT_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LPTIM_CNT_CNT =   // CNT
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t LPTIM_VERR_RESET_VALUE = 0x14;
    template<uint32_t X>
    static constexpr uint32_t LPTIM_VERR_MINREV =   // MINREV
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LPTIM_VERR_MAJREV =   // MAJREV
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t LPTIM_PIDR_RESET_VALUE = 0x120011;

    static constexpr uint32_t LPTIM_SIDR_RESET_VALUE = 0xa3c5dd01;

    static constexpr uint32_t LPTIM3_HWCFGR_RESET_VALUE = 0x804;
    template<uint32_t X>
    static constexpr uint32_t LPTIM3_HWCFGR_CFG1 =   // CFG1
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LPTIM3_HWCFGR_CFG2 =   // CFG2
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LPTIM3_HWCFGR_CFG3 =   // CFG3
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LPTIM3_HWCFGR_CFG4 =   // CFG4
        bit_field_t<24, 0xff>::value<X>();
};


template<>
struct peripheral_t<STM32MP15xxx, LPTIM3>
{
    typedef stm32mp15xxx_lptim3_t T;
    static T& V;
};

using lptim3_t = peripheral_t<mcu_svd, LPTIM3>;

template<int INST> struct lptim_traits {};

template<> struct lptim_traits<3>
{
    using lptim = lptim3_t;
    static constexpr alternate_function_t OUT = LPTIM3_OUT;
};

