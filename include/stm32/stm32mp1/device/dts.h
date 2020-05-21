#pragma once

////
//
//      STM32MP1 DTS peripherals
//
////

////
//
//      DTS register block
//
////

struct stm32mp15xxx_dts_t
{
    volatile uint32_t DTS_CFGR1;    // [read-write] DTS_CFGR1 is the configuration register for temperature sensor 1.
    reserved_t<0x1> _0x8;
    volatile uint32_t DTS_T0VALR1;  // [read-only] DTS_T0VALR1 contains the value of the factory calibration temperature (T0) for temperature sensor 1. The system reset value is factory trimmed.
    reserved_t<0x1> _0x10;
    volatile uint32_t DTS_RAMPVALR; // [read-only] The DTS_RAMPVALR is the ramp coefficient for the temperature sensor. The system reset value is factory trimmed.
    volatile uint32_t DTS_ITR1;     // [read-write] DTS_ITR1 contains the threshold values for sensor 1.
    reserved_t<0x1> _0x1c;
    volatile uint32_t DTS_DR;       // [read-write] The DTS_DR contains the number of REF_CLK cycles used to compute the FM(T) frequency.
    volatile uint32_t DTS_SR;       // [read-only] Temperature sensor status register
    volatile uint32_t DTS_ITENR;    // [read-write] Temperature sensor interrupt enable register
    volatile uint32_t DTS_ICIFR;    // [read-write] DTS_ICIFR is the control register for the interrupt flags.
    volatile uint32_t DTS_OR;       // [read-write] The DTS_OR contains general-purpose option bits.

    static constexpr uint32_t DTS_CFGR1_RESET_VALUE = 0x0;
    static constexpr uint32_t DTS_CFGR1_TS1_EN = 0x1;          // TS1_EN
    static constexpr uint32_t DTS_CFGR1_TS1_START = 0x10;      // TS1_START
    template<uint32_t X>
    static constexpr uint32_t DTS_CFGR1_TS1_INTRIG_SEL =       // TS1_INTRIG_SEL
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DTS_CFGR1_TS1_SMP_TIME =         // TS1_SMP_TIME
        bit_field_t<16, 0xf>::value<X>();
    static constexpr uint32_t DTS_CFGR1_REFCLK_SEL = 0x100000; // REFCLK_SEL
    static constexpr uint32_t DTS_CFGR1_Q_MEAS_opt = 0x200000; // Q_MEAS_opt
    template<uint32_t X>
    static constexpr uint32_t DTS_CFGR1_HSREF_CLK_DIV =        // HSREF_CLK_DIV
        bit_field_t<24, 0x7f>::value<X>();

    static constexpr uint32_t DTS_T0VALR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DTS_T0VALR1_TS1_FMT0 =   // TS1_FMT0
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DTS_T0VALR1_TS1_T0 =     // TS1_T0
        bit_field_t<16, 0x3>::value<X>();

    static constexpr uint32_t DTS_RAMPVALR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DTS_RAMPVALR_TS1_RAMP_COEFF =   // TS1_RAMP_COEFF
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DTS_ITR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DTS_ITR1_TS1_LITTHD =   // TS1_LITTHD
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DTS_ITR1_TS1_HITTHD =   // TS1_HITTHD
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t DTS_DR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DTS_DR_TS1_MFREQ =   // TS1_MFREQ
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DTS_SR_RESET_VALUE = 0x0;
    static constexpr uint32_t DTS_SR_TS1_ITEF = 0x1;   // TS1_ITEF
    static constexpr uint32_t DTS_SR_TS1_ITLF = 0x2;   // TS1_ITLF
    static constexpr uint32_t DTS_SR_TS1_ITHF = 0x4;   // TS1_ITHF
    static constexpr uint32_t DTS_SR_TS1_AITEF = 0x10; // TS1_AITEF
    static constexpr uint32_t DTS_SR_TS1_AITLF = 0x20; // TS1_AITLF
    static constexpr uint32_t DTS_SR_TS1_AITHF = 0x40; // TS1_AITHF
    static constexpr uint32_t DTS_SR_TS1_RDY = 0x8000; // TS1_RDY

    static constexpr uint32_t DTS_ITENR_RESET_VALUE = 0x0;
    static constexpr uint32_t DTS_ITENR_TS1_ITEEN = 0x1;   // TS1_ITEEN
    static constexpr uint32_t DTS_ITENR_TS1_ITLEN = 0x2;   // TS1_ITLEN
    static constexpr uint32_t DTS_ITENR_TS1_ITHEN = 0x4;   // TS1_ITHEN
    static constexpr uint32_t DTS_ITENR_TS1_AITEEN = 0x10; // TS1_AITEEN
    static constexpr uint32_t DTS_ITENR_TS1_AITLEN = 0x20; // TS1_AITLEN
    static constexpr uint32_t DTS_ITENR_TS1_AITHEN = 0x40; // TS1_AITHEN

    static constexpr uint32_t DTS_ICIFR_RESET_VALUE = 0x0;
    static constexpr uint32_t DTS_ICIFR_TS1_CITEF = 0x1;   // TS1_CITEF
    static constexpr uint32_t DTS_ICIFR_TS1_CITLF = 0x2;   // TS1_CITLF
    static constexpr uint32_t DTS_ICIFR_TS1_CITHF = 0x4;   // TS1_CITHF
    static constexpr uint32_t DTS_ICIFR_TS1_CAITEF = 0x10; // TS1_CAITEF
    static constexpr uint32_t DTS_ICIFR_TS1_CAITLF = 0x20; // TS1_CAITLF
    static constexpr uint32_t DTS_ICIFR_TS1_CAITHF = 0x40; // TS1_CAITHF

    static constexpr uint32_t DTS_OR_RESET_VALUE = 0x0;
    static constexpr uint32_t DTS_OR_TS_Op0 = 0x1;         // TS_Op0
    static constexpr uint32_t DTS_OR_TS_Op1 = 0x2;         // TS_Op1
    static constexpr uint32_t DTS_OR_TS_Op2 = 0x4;         // TS_Op2
    static constexpr uint32_t DTS_OR_TS_Op3 = 0x8;         // TS_Op3
    static constexpr uint32_t DTS_OR_TS_Op4 = 0x10;        // TS_Op4
    static constexpr uint32_t DTS_OR_TS_Op5 = 0x20;        // TS_Op5
    static constexpr uint32_t DTS_OR_TS_Op6 = 0x40;        // TS_Op6
    static constexpr uint32_t DTS_OR_TS_Op7 = 0x80;        // TS_Op7
    static constexpr uint32_t DTS_OR_TS_Op8 = 0x100;       // TS_Op8
    static constexpr uint32_t DTS_OR_TS_Op9 = 0x200;       // TS_Op9
    static constexpr uint32_t DTS_OR_TS_Op10 = 0x400;      // TS_Op10
    static constexpr uint32_t DTS_OR_TS_Op11 = 0x800;      // TS_Op11
    static constexpr uint32_t DTS_OR_TS_Op12 = 0x1000;     // TS_Op12
    static constexpr uint32_t DTS_OR_TS_Op13 = 0x2000;     // TS_Op13
    static constexpr uint32_t DTS_OR_TS_Op14 = 0x4000;     // TS_Op14
    static constexpr uint32_t DTS_OR_TS_Op15 = 0x8000;     // TS_Op15
    static constexpr uint32_t DTS_OR_TS_Op16 = 0x10000;    // TS_Op16
    static constexpr uint32_t DTS_OR_TS_Op17 = 0x20000;    // TS_Op17
    static constexpr uint32_t DTS_OR_TS_Op18 = 0x40000;    // TS_Op18
    static constexpr uint32_t DTS_OR_TS_Op19 = 0x80000;    // TS_Op19
    static constexpr uint32_t DTS_OR_TS_Op20 = 0x100000;   // TS_Op20
    static constexpr uint32_t DTS_OR_TS_Op21 = 0x200000;   // TS_Op21
    static constexpr uint32_t DTS_OR_TS_Op22 = 0x400000;   // TS_Op22
    static constexpr uint32_t DTS_OR_TS_Op23 = 0x800000;   // TS_Op23
    static constexpr uint32_t DTS_OR_TS_Op24 = 0x1000000;  // TS_Op24
    static constexpr uint32_t DTS_OR_TS_Op25 = 0x2000000;  // TS_Op25
    static constexpr uint32_t DTS_OR_TS_Op26 = 0x4000000;  // TS_Op26
    static constexpr uint32_t DTS_OR_TS_Op27 = 0x8000000;  // TS_Op27
    static constexpr uint32_t DTS_OR_TS_Op28 = 0x10000000; // TS_Op28
    static constexpr uint32_t DTS_OR_TS_Op29 = 0x20000000; // TS_Op29
    static constexpr uint32_t DTS_OR_TS_Op30 = 0x40000000; // TS_Op30
    static constexpr uint32_t DTS_OR_TS_Op31 = 0x80000000; // TS_Op31
};


template<>
struct peripheral_t<STM32MP15xxx, DTS>
{
    typedef stm32mp15xxx_dts_t T;
    static T& V;
};

using dts_t = peripheral_t<mcu_svd, DTS>;

