#pragma once

////
//
//      STM32MP1 DAC1 peripherals
//
////

////
//
//      DAC1
//
////

struct stm32mp15xxx_dac1_t
{
    volatile uint32_t DAC_CR;      // [read-write] DAC control register
    volatile uint32_t DAC_SWTRGR;  // [write-only] DAC software trigger register
    volatile uint32_t DAC_DHR12R1; // [read-write] DAC channel1 12-bit right-aligned data holding register
    volatile uint32_t DAC_DHR12L1; // [read-write] DAC channel1 12-bit left aligned data holding register
    volatile uint32_t DAC_DHR8R1;  // [read-write] DAC channel1 8-bit right aligned data holding register
    volatile uint32_t DAC_DHR12R2; // [read-write] This register is available only on dual-channel DACs. Refer to Section29.3: DAC implementation.
    volatile uint32_t DAC_DHR12L2; // [read-write] This register is available only on dual-channel DACs. Refer to Section29.3: DAC implementation.
    volatile uint32_t DAC_DHR8R2;  // [read-write] This register is available only on dual-channel DACs. Refer to Section29.3: DAC implementation.
    volatile uint32_t DAC_DHR12RD; // [read-write] Dual DAC 12-bit right-aligned data holding register
    volatile uint32_t DAC_DHR12LD; // [read-write] Dual DAC 12-bit left aligned data holding register
    volatile uint32_t DAC_DHR8RD;  // [read-write] Dual DAC 8-bit right aligned data holding register
    volatile uint32_t DAC_DOR1;    // [read-only] DAC channel1 data output register
    volatile uint32_t DAC_DOR2;    // [read-only] This register is available only on dual-channel DACs. Refer to Section29.3: DAC implementation.
    volatile uint32_t DAC_SR;      // DAC status register
    volatile uint32_t DAC_CCR;     // [read-write] DAC calibration control register
    volatile uint32_t DAC_MCR;     // [read-write] DAC mode control register
    volatile uint32_t DAC_SHSR1;   // [read-write] DAC channel 1 sample and hold sample time register
    volatile uint32_t DAC_SHSR2;   // [read-write] This register is available only on dual-channel DACs. Refer to Section29.3: DAC implementation.
    volatile uint32_t DAC_SHHR;    // [read-write] DAC sample and hold time register
    volatile uint32_t DAC_SHRR;    // [read-write] DAC sample and hold refresh time register
    reserved_t<0xe8> _0x3f0;
    volatile uint32_t DAC_HWCFGR0; // [read-only] DAC IP hardware configuration register
    volatile uint32_t DAC_VERR;    // [read-only] No
    volatile uint32_t DAC_IPIDR;   // [read-only] No
    volatile uint32_t DAC_SIDR;    // [read-only] No

    static constexpr uint32_t DAC_CR_RESET_VALUE = 0x0;
    static constexpr uint32_t DAC_CR_EN1 = 0x1;              // EN1
    static constexpr uint32_t DAC_CR_TEN1 = 0x2;             // TEN1
    static constexpr uint32_t DAC_CR_TSEL10 = 0x4;           // TSEL10
    static constexpr uint32_t DAC_CR_TSEL11 = 0x8;           // TSEL11
    static constexpr uint32_t DAC_CR_TSEL12 = 0x10;          // TSEL12
    static constexpr uint32_t DAC_CR_TSEL13 = 0x20;          // TSEL13
    template<uint32_t X>
    static constexpr uint32_t DAC_CR_WAVE1 =                 // WAVE1
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DAC_CR_MAMP1 =                 // MAMP1
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t DAC_CR_DMAEN1 = 0x1000;        // DMAEN1
    static constexpr uint32_t DAC_CR_DMAUDRIE1 = 0x2000;     // DMAUDRIE1
    static constexpr uint32_t DAC_CR_CEN1 = 0x4000;          // CEN1
    static constexpr uint32_t DAC_CR_HFSEL = 0x8000;         // HFSEL
    static constexpr uint32_t DAC_CR_EN2 = 0x10000;          // EN2
    static constexpr uint32_t DAC_CR_TEN2 = 0x20000;         // TEN2
    static constexpr uint32_t DAC_CR_TSEL20 = 0x40000;       // TSEL20
    static constexpr uint32_t DAC_CR_TSEL21 = 0x80000;       // TSEL21
    static constexpr uint32_t DAC_CR_TSEL22 = 0x100000;      // TSEL22
    static constexpr uint32_t DAC_CR_TSEL23 = 0x200000;      // TSEL23
    template<uint32_t X>
    static constexpr uint32_t DAC_CR_WAVE2 =                 // WAVE2
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DAC_CR_MAMP2 =                 // MAMP2
        bit_field_t<24, 0xf>::value<X>();
    static constexpr uint32_t DAC_CR_DMAEN2 = 0x10000000;    // DMAEN2
    static constexpr uint32_t DAC_CR_DMAUDRIE2 = 0x20000000; // DMAUDRIE2
    static constexpr uint32_t DAC_CR_CEN2 = 0x40000000;      // CEN2

    static constexpr uint32_t DAC_SWTRGR_RESET_VALUE = 0x0;
    static constexpr uint32_t DAC_SWTRGR_SWTRIG1 = 0x1; // SWTRIG1
    static constexpr uint32_t DAC_SWTRGR_SWTRIG2 = 0x2; // SWTRIG2

    static constexpr uint32_t DAC_DHR12R1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DAC_DHR12R1_DACC1DHR =   // DACC1DHR
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t DAC_DHR12L1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DAC_DHR12L1_DACC1DHR =   // DACC1DHR
        bit_field_t<4, 0xfff>::value<X>();

    static constexpr uint32_t DAC_DHR8R1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DAC_DHR8R1_DACC1DHR =   // DACC1DHR
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DAC_DHR12R2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DAC_DHR12R2_DACC2DHR =   // DACC2DHR
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t DAC_DHR12L2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DAC_DHR12L2_DACC2DHR =   // DACC2DHR
        bit_field_t<4, 0xfff>::value<X>();

    static constexpr uint32_t DAC_DHR8R2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DAC_DHR8R2_DACC2DHR =   // DACC2DHR
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DAC_DHR12RD_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DAC_DHR12RD_DACC1DHR =   // DACC1DHR
        bit_field_t<0, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DAC_DHR12RD_DACC2DHR =   // DACC2DHR
        bit_field_t<16, 0xfff>::value<X>();

    static constexpr uint32_t DAC_DHR12LD_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DAC_DHR12LD_DACC1DHR =   // DACC1DHR
        bit_field_t<4, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DAC_DHR12LD_DACC2DHR =   // DACC2DHR
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t DAC_DHR8RD_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DAC_DHR8RD_DACC1DHR =   // DACC1DHR
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DAC_DHR8RD_DACC2DHR =   // DACC2DHR
        bit_field_t<8, 0xff>::value<X>();

    static constexpr uint32_t DAC_DOR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DAC_DOR1_DACC1DOR =   // DACC1DOR
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t DAC_DOR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DAC_DOR2_DACC2DOR =   // DACC2DOR
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t DAC_SR_RESET_VALUE = 0x0;
    static constexpr uint32_t DAC_SR_DMAUDR1 = 0x2000;       // DMAUDR1
    static constexpr uint32_t DAC_SR_CAL_FLAG1 = 0x4000;     // CAL_FLAG1
    static constexpr uint32_t DAC_SR_BWST1 = 0x8000;         // BWST1
    static constexpr uint32_t DAC_SR_DMAUDR2 = 0x20000000;   // DMAUDR2
    static constexpr uint32_t DAC_SR_CAL_FLAG2 = 0x40000000; // CAL_FLAG2
    static constexpr uint32_t DAC_SR_BWST2 = 0x80000000;     // BWST2

    static constexpr uint32_t DAC_CCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DAC_CCR_OTRIM1 =   // OTRIM1
        bit_field_t<0, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DAC_CCR_OTRIM2 =   // OTRIM2
        bit_field_t<16, 0x1f>::value<X>();

    static constexpr uint32_t DAC_MCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DAC_MCR_MODE1 =   // MODE1
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DAC_MCR_MODE2 =   // MODE2
        bit_field_t<16, 0x7>::value<X>();

    static constexpr uint32_t DAC_SHSR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DAC_SHSR1_TSAMPLE1 =   // TSAMPLE1
        bit_field_t<0, 0x3ff>::value<X>();

    static constexpr uint32_t DAC_SHSR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DAC_SHSR2_TSAMPLE2 =   // TSAMPLE2
        bit_field_t<0, 0x3ff>::value<X>();

    static constexpr uint32_t DAC_SHHR_RESET_VALUE = 0x10001;
    template<uint32_t X>
    static constexpr uint32_t DAC_SHHR_THOLD1 =   // THOLD1
        bit_field_t<0, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DAC_SHHR_THOLD2 =   // THOLD2
        bit_field_t<16, 0x3ff>::value<X>();

    static constexpr uint32_t DAC_SHRR_RESET_VALUE = 0x10001;
    template<uint32_t X>
    static constexpr uint32_t DAC_SHRR_TREFRESH1 =   // TREFRESH1
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DAC_SHRR_TREFRESH2 =   // TREFRESH2
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t DAC_HWCFGR0_RESET_VALUE = 0x1111;
    template<uint32_t X>
    static constexpr uint32_t DAC_HWCFGR0_DUAL =       // DUAL
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DAC_HWCFGR0_LFSR =       // LFSR
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DAC_HWCFGR0_TRIANGLE =   // TRIANGLE
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DAC_HWCFGR0_SAMPLE =     // SAMPLE
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DAC_HWCFGR0_OR_CFG =     // OR_CFG
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t DAC_VERR_RESET_VALUE = 0x31;
    template<uint32_t X>
    static constexpr uint32_t DAC_VERR_MINREV =   // MINREV
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DAC_VERR_MAJREV =   // MAJREV
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t DAC_IPIDR_RESET_VALUE = 0x110011;

    static constexpr uint32_t DAC_SIDR_RESET_VALUE = 0xa3c5dd01;
};


template<>
struct peripheral_t<STM32MP15xxx, DAC1>
{
    typedef stm32mp15xxx_dac1_t T;
    static T& V;
};

using dac1_t = peripheral_t<mcu_svd, DAC1>;

template<int INST> struct dac_traits {};

template<> struct dac_traits<1>
{
    using dac = dac1_t;
};

