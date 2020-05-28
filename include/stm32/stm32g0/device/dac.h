#pragma once

////
//
//      STM32G0 DAC peripherals
//
////

////
//
//      DAC
//
////

struct stm32g070_dac1_t
{
    volatile uint32_t DAC_CR;      // [read-write] DAC control register
    volatile uint32_t DAC_SWTRGR;  // [write-only] DAC software trigger register
    volatile uint32_t DAC_DHR12R1; // [read-write] DAC channel1 12-bit right-aligned data holding register
    volatile uint32_t DAC_DHR12L1; // [read-write] DAC channel1 12-bit left aligned data holding register
    volatile uint32_t DAC_DHR8R1;  // [read-write] DAC channel1 8-bit right aligned data holding register
    volatile uint32_t DAC_DHR12R2; // [read-write] DAC channel2 12-bit right aligned data holding register
    volatile uint32_t DAC_DHR12L2; // [read-write] DAC channel2 12-bit left aligned data holding register
    volatile uint32_t DAC_DHR8R2;  // [read-write] DAC channel2 8-bit right-aligned data holding register
    volatile uint32_t DAC_DHR12RD; // [read-write] Dual DAC 12-bit right-aligned data holding register
    volatile uint32_t DAC_DHR12LD; // [read-write] DUAL DAC 12-bit left aligned data holding register
    volatile uint32_t DAC_DHR8RD;  // [read-write] DUAL DAC 8-bit right aligned data holding register
    volatile uint32_t DAC_DOR1;    // [read-only] DAC channel1 data output register
    volatile uint32_t DAC_DOR2;    // [read-only] DAC channel2 data output register
    volatile uint32_t DAC_SR;      // DAC status register
    volatile uint32_t DAC_CCR;     // [read-write] DAC calibration control register
    volatile uint32_t DAC_MCR;     // [read-write] DAC mode control register
    volatile uint32_t DAC_SHSR1;   // [read-write] DAC Sample and Hold sample time register 1
    volatile uint32_t DAC_SHSR2;   // [read-write] DAC Sample and Hold sample time register 2
    volatile uint32_t DAC_SHHR;    // [read-write] DAC Sample and Hold hold time register
    volatile uint32_t DAC_SHRR;    // [read-write] DAC Sample and Hold refresh time register
    reserved_t<0xe8> _0x3f0;
    volatile uint32_t IP_HWCFGR0;  // [read-write] DAC IP Hardware Configuration Register
    volatile uint32_t VERR;        // [read-only] EXTI IP Version register
    volatile uint32_t IPIDR;       // [read-only] EXTI Identification register
    volatile uint32_t SIDR;        // [read-only] EXTI Size ID register

    static constexpr uint32_t DAC_CR_RESET_VALUE = 0x0;
    static constexpr uint32_t DAC_CR_EN1 = 0x1;              // DAC channel1 enable This bit is set and cleared by software to enable/disable DAC channel1.
    static constexpr uint32_t DAC_CR_TEN1 = 0x2;             // DAC channel1 trigger enable
    template<uint32_t X>
    static constexpr uint32_t DAC_CR_TSEL1 =                 // DAC channel1 trigger selection These bits select the external event used to trigger DAC channel1. Note: Only used if bit TEN1 = 1 (DAC channel1 trigger enabled).
        bit_field_t<2, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DAC_CR_WAVE1 =                 // DAC channel1 noise/triangle wave generation enable These bits are set and cleared by software. Note: Only used if bit TEN1 = 1 (DAC channel1 trigger enabled).
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DAC_CR_MAMP1 =                 // DAC channel1 mask/amplitude selector These bits are written by software to select mask in wave generation mode or amplitude in triangle generation mode. = 1011: Unmask bits[11:0] of LFSR/ triangle amplitude equal to 4095
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t DAC_CR_DMAEN1 = 0x1000;        // DAC channel1 DMA enable This bit is set and cleared by software.
    static constexpr uint32_t DAC_CR_DMAUDRIE1 = 0x2000;     // DAC channel1 DMA Underrun Interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t DAC_CR_CEN1 = 0x4000;          // DAC Channel 1 calibration enable This bit is set and cleared by software to enable/disable DAC channel 1 calibration, it can be written only if bit EN1=0 into DAC_CR (the calibration mode can be entered/exit only when the DAC channel is disabled) Otherwise, the write operation is ignored.
    static constexpr uint32_t DAC_CR_EN2 = 0x10000;          // DAC channel2 enable This bit is set and cleared by software to enable/disable DAC channel2.
    static constexpr uint32_t DAC_CR_TEN2 = 0x20000;         // DAC channel2 trigger enable
    template<uint32_t X>
    static constexpr uint32_t DAC_CR_TSEL2 =                 // DAC channel2 trigger selection These bits select the external event used to trigger DAC channel2 Note: Only used if bit TEN2 = 1 (DAC channel2 trigger enabled).
        bit_field_t<18, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DAC_CR_WAVE2 =                 // DAC channel2 noise/triangle wave generation enable These bits are set/reset by software. 1x: Triangle wave generation enabled Note: Only used if bit TEN2 = 1 (DAC channel2 trigger enabled)
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DAC_CR_MAMP2 =                 // DAC channel2 mask/amplitude selector These bits are written by software to select mask in wave generation mode or amplitude in triangle generation mode. = 1011: Unmask bits[11:0] of LFSR/ triangle amplitude equal to 4095
        bit_field_t<24, 0xf>::value<X>();
    static constexpr uint32_t DAC_CR_DMAEN2 = 0x10000000;    // DAC channel2 DMA enable This bit is set and cleared by software.
    static constexpr uint32_t DAC_CR_DMAUDRIE2 = 0x20000000; // DAC channel2 DMA underrun interrupt enable This bit is set and cleared by software.
    static constexpr uint32_t DAC_CR_CEN2 = 0x40000000;      // DAC Channel 2 calibration enable This bit is set and cleared by software to enable/disable DAC channel 2 calibration, it can be written only if bit EN2=0 into DAC_CR (the calibration mode can be entered/exit only when the DAC channel is disabled) Otherwise, the write operation is ignored.

    static constexpr uint32_t DAC_SWTRGR_RESET_VALUE = 0x0;
    static constexpr uint32_t DAC_SWTRGR_SWTRIG1 = 0x1; // DAC channel1 software trigger This bit is set by software to trigger the DAC in software trigger mode. Note: This bit is cleared by hardware (one APB1 clock cycle later) once the DAC_DHR1 register value has been loaded into the DAC_DOR1 register.
    static constexpr uint32_t DAC_SWTRGR_SWTRIG2 = 0x2; // DAC channel2 software trigger This bit is set by software to trigger the DAC in software trigger mode. Note: This bit is cleared by hardware (one APB1 clock cycle later) once the DAC_DHR2 register value has been loaded into the DAC_DOR2 register.

    static constexpr uint32_t DAC_DHR12R1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DAC_DHR12R1_DACC1DHR =   // DAC channel1 12-bit right-aligned data These bits are written by software which specifies 12-bit data for DAC channel1.
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t DAC_DHR12L1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DAC_DHR12L1_DACC1DHR =   // DAC channel1 12-bit left-aligned data These bits are written by software which specifies 12-bit data for DAC channel1.
        bit_field_t<4, 0xfff>::value<X>();

    static constexpr uint32_t DAC_DHR8R1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DAC_DHR8R1_DACC1DHR =   // DAC channel1 8-bit right-aligned data These bits are written by software which specifies 8-bit data for DAC channel1.
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DAC_DHR12R2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DAC_DHR12R2_DACC2DHR =   // DAC channel2 12-bit right-aligned data These bits are written by software which specifies 12-bit data for DAC channel2.
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t DAC_DHR12L2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DAC_DHR12L2_DACC2DHR =   // DAC channel2 12-bit left-aligned data These bits are written by software which specify 12-bit data for DAC channel2.
        bit_field_t<4, 0xfff>::value<X>();

    static constexpr uint32_t DAC_DHR8R2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DAC_DHR8R2_DACC2DHR =   // DAC channel2 8-bit right-aligned data These bits are written by software which specifies 8-bit data for DAC channel2.
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DAC_DHR12RD_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DAC_DHR12RD_DACC1DHR =   // DAC channel1 12-bit right-aligned data These bits are written by software which specifies 12-bit data for DAC channel1.
        bit_field_t<0, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DAC_DHR12RD_DACC2DHR =   // DAC channel2 12-bit right-aligned data These bits are written by software which specifies 12-bit data for DAC channel2.
        bit_field_t<16, 0xfff>::value<X>();

    static constexpr uint32_t DAC_DHR12LD_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DAC_DHR12LD_DACC1DHR =   // DAC channel1 12-bit left-aligned data These bits are written by software which specifies 12-bit data for DAC channel1.
        bit_field_t<4, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DAC_DHR12LD_DACC2DHR =   // DAC channel2 12-bit left-aligned data These bits are written by software which specifies 12-bit data for DAC channel2.
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t DAC_DHR8RD_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DAC_DHR8RD_DACC1DHR =   // DAC channel1 8-bit right-aligned data These bits are written by software which specifies 8-bit data for DAC channel1.
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DAC_DHR8RD_DACC2DHR =   // DAC channel2 8-bit right-aligned data These bits are written by software which specifies 8-bit data for DAC channel2.
        bit_field_t<8, 0xff>::value<X>();

    static constexpr uint32_t DAC_DOR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DAC_DOR1_DACC1DOR =   // DAC channel1 data output These bits are read-only, they contain data output for DAC channel1.
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t DAC_DOR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DAC_DOR2_DACC2DOR =   // DAC channel2 data output These bits are read-only, they contain data output for DAC channel2.
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t DAC_SR_RESET_VALUE = 0x0;
    static constexpr uint32_t DAC_SR_DMAUDR1 = 0x2000;       // DAC channel1 DMA underrun flag This bit is set by hardware and cleared by software (by writing it to 1).
    static constexpr uint32_t DAC_SR_CAL_FLAG1 = 0x4000;     // DAC Channel 1 calibration offset status This bit is set and cleared by hardware
    static constexpr uint32_t DAC_SR_BWST1 = 0x8000;         // DAC Channel 1 busy writing sample time flag This bit is systematically set just after Sample & Hold mode enable and is set each time the software writes the register DAC_SHSR1, It is cleared by hardware when the write operation of DAC_SHSR1 is complete. (It takes about 3LSI periods of synchronization).
    static constexpr uint32_t DAC_SR_DMAUDR2 = 0x20000000;   // DAC channel2 DMA underrun flag This bit is set by hardware and cleared by software (by writing it to 1).
    static constexpr uint32_t DAC_SR_CAL_FLAG2 = 0x40000000; // DAC Channel 2 calibration offset status This bit is set and cleared by hardware
    static constexpr uint32_t DAC_SR_BWST2 = 0x80000000;     // DAC Channel 2 busy writing sample time flag This bit is systematically set just after Sample & Hold mode enable and is set each time the software writes the register DAC_SHSR2, It is cleared by hardware when the write operation of DAC_SHSR2 is complete. (It takes about 3 LSI periods of synchronization).

    static constexpr uint32_t DAC_CCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DAC_CCR_OTRIM1 =   // DAC Channel 1 offset trimming value
        bit_field_t<0, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DAC_CCR_OTRIM2 =   // DAC Channel 2 offset trimming value
        bit_field_t<16, 0x1f>::value<X>();

    static constexpr uint32_t DAC_MCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DAC_MCR_MODE1 =   // DAC Channel 1 mode These bits can be written only when the DAC is disabled and not in the calibration mode (when bit EN1=0 and bit CEN1 =0 in the DAC_CR register). If EN1=1 or CEN1 =1 the write operation is ignored. They can be set and cleared by software to select the DAC Channel 1 mode: DAC Channel 1 in normal Mode DAC Channel 1 in sample &amp; hold mode
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DAC_MCR_MODE2 =   // DAC Channel 2 mode These bits can be written only when the DAC is disabled and not in the calibration mode (when bit EN2=0 and bit CEN2 =0 in the DAC_CR register). If EN2=1 or CEN2 =1 the write operation is ignored. They can be set and cleared by software to select the DAC Channel 2 mode: DAC Channel 2 in normal Mode DAC Channel 2 in sample &amp; hold mode
        bit_field_t<16, 0x7>::value<X>();

    static constexpr uint32_t DAC_SHSR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DAC_SHSR1_TSAMPLE1 =   // DAC Channel 1 sample Time (only valid in sample &amp; hold mode) These bits can be written when the DAC channel1 is disabled or also during normal operation. in the latter case, the write can be done only when BWSTx of DAC_SR register is low, If BWSTx=1, the write operation is ignored.
        bit_field_t<0, 0x3ff>::value<X>();

    static constexpr uint32_t DAC_SHSR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DAC_SHSR2_TSAMPLE2 =   // DAC Channel 2 sample Time (only valid in sample &amp; hold mode) These bits can be written when the DAC channel2 is disabled or also during normal operation. in the latter case, the write can be done only when BWSTx of DAC_SR register is low, if BWSTx=1, the write operation is ignored.
        bit_field_t<0, 0x3ff>::value<X>();

    static constexpr uint32_t DAC_SHHR_RESET_VALUE = 0x10001;
    template<uint32_t X>
    static constexpr uint32_t DAC_SHHR_THOLD1 =   // DAC Channel 1 hold Time (only valid in sample &amp; hold mode) Hold time= (THOLD[9:0]) x T LSI
        bit_field_t<0, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DAC_SHHR_THOLD2 =   // DAC Channel 2 hold time (only valid in sample &amp; hold mode). Hold time= (THOLD[9:0]) x T LSI
        bit_field_t<16, 0x3ff>::value<X>();

    static constexpr uint32_t DAC_SHRR_RESET_VALUE = 0x10001;
    template<uint32_t X>
    static constexpr uint32_t DAC_SHRR_TREFRESH1 =   // DAC Channel 1 refresh Time (only valid in sample &amp; hold mode) Refresh time= (TREFRESH[7:0]) x T LSI
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DAC_SHRR_TREFRESH2 =   // DAC Channel 2 refresh Time (only valid in sample &amp; hold mode) Refresh time= (TREFRESH[7:0]) x T LSI
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t IP_HWCFGR0_RESET_VALUE = 0x1111;
    template<uint32_t X>
    static constexpr uint32_t IP_HWCFGR0_DUAL =       // Dual DAC capability
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IP_HWCFGR0_LFSR =       // Pseudonoise wave generation capability
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IP_HWCFGR0_TRIANGLE =   // Triangle wave generation capability
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IP_HWCFGR0_SAMPLE =     // Sample and hold mode capability
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t IP_HWCFGR0_OR_CFG =     // option register bit width
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t VERR_RESET_VALUE = 0x31;
    template<uint32_t X>
    static constexpr uint32_t VERR_MINREV =   // Minor Revision number
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t VERR_MAJREV =   // Major Revision number
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t IPIDR_RESET_VALUE = 0x110011;

    static constexpr uint32_t SIDR_RESET_VALUE = 0xa3c5dd01;
};


template<>
struct peripheral_t<STM32G070, DAC1>
{
    typedef stm32g070_dac1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G071, DAC1>
{
    typedef stm32g070_dac1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G081, DAC1>
{
    typedef stm32g070_dac1_t T;
    static T& V;
};

using dac1_t = peripheral_t<mcu_svd, DAC1>;

template<int INST> struct dac_traits {};

template<> struct dac_traits<1>
{
    using dac = dac1_t;
};

