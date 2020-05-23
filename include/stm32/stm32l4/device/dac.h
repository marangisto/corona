#pragma once

////
//
//      STM32L4 DAC peripherals
//
////

////
//
//      Digital-to-analog converter
//
////

struct stm32l476_dac_t
{
    volatile uint32_t CR;      // [read-write] control register
    volatile uint32_t SWTRIGR; // [write-only] software trigger register
    volatile uint32_t DHR12R1; // [read-write] channel1 12-bit right-aligned data holding register
    volatile uint32_t DHR12L1; // [read-write] channel1 12-bit left-aligned data holding register
    volatile uint32_t DHR8R1;  // [read-write] channel1 8-bit right-aligned data holding register
    volatile uint32_t DHR12R2; // [read-write] channel2 12-bit right aligned data holding register
    volatile uint32_t DHR12L2; // [read-write] channel2 12-bit left aligned data holding register
    volatile uint32_t DHR8R2;  // [read-write] channel2 8-bit right-aligned data holding register
    volatile uint32_t DHR12RD; // [read-write] Dual DAC 12-bit right-aligned data holding register
    volatile uint32_t DHR12LD; // [read-write] DUAL DAC 12-bit left aligned data holding register
    volatile uint32_t DHR8RD;  // [read-write] DUAL DAC 8-bit right aligned data holding register
    volatile uint32_t DOR1;    // [read-only] channel1 data output register
    volatile uint32_t DOR2;    // [read-only] channel2 data output register
    volatile uint32_t SR;      // status register
    volatile uint32_t CCR;     // [read-write] calibration control register
    volatile uint32_t MCR;     // [read-write] mode control register
    volatile uint32_t SHSR1;   // [read-write] Sample and Hold sample time register 1
    volatile uint32_t SHSR2;   // [read-write] Sample and Hold sample time register 2
    volatile uint32_t SHHR;    // [read-write] Sample and Hold hold time register
    volatile uint32_t SHRR;    // [read-write] Sample and Hold refresh time register

    static constexpr uint32_t CR_RESET_VALUE = 0x0;
    static constexpr uint32_t CR_EN1 = 0x1;              // DAC channel1 enable
    static constexpr uint32_t CR_TEN1 = 0x4;             // DAC channel1 trigger enable
    template<uint32_t X>
    static constexpr uint32_t CR_TSEL1 =                 // DAC channel1 trigger selection
        bit_field_t<3, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CR_WAVE1 =                 // DAC channel1 noise/triangle wave generation enable
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CR_MAMP1 =                 // DAC channel1 mask/amplitude selector
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t CR_DMAEN1 = 0x1000;        // DAC channel1 DMA enable
    static constexpr uint32_t CR_DMAUDRIE1 = 0x2000;     // DAC channel1 DMA Underrun Interrupt enable
    static constexpr uint32_t CR_CEN1 = 0x4000;          // DAC Channel 1 calibration enable
    static constexpr uint32_t CR_EN2 = 0x10000;          // DAC channel2 enable
    static constexpr uint32_t CR_TEN2 = 0x40000;         // DAC channel2 trigger enable
    template<uint32_t X>
    static constexpr uint32_t CR_TSEL2 =                 // DAC channel2 trigger selection
        bit_field_t<19, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CR_WAVE2 =                 // DAC channel2 noise/triangle wave generation enable
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CR_MAMP2 =                 // DAC channel2 mask/amplitude selector
        bit_field_t<24, 0xf>::value<X>();
    static constexpr uint32_t CR_DMAEN2 = 0x10000000;    // DAC channel2 DMA enable
    static constexpr uint32_t CR_DMAUDRIE2 = 0x20000000; // DAC channel2 DMA underrun interrupt enable
    static constexpr uint32_t CR_CEN2 = 0x40000000;      // DAC Channel 2 calibration enable

    static constexpr uint32_t SWTRIGR_RESET_VALUE = 0x0;
    static constexpr uint32_t SWTRIGR_SWTRIG1 = 0x1; // DAC channel1 software trigger
    static constexpr uint32_t SWTRIGR_SWTRIG2 = 0x2; // DAC channel2 software trigger

    static constexpr uint32_t DHR12R1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DHR12R1_DACC1DHR =   // DAC channel1 12-bit right-aligned data
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t DHR12L1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DHR12L1_DACC1DHR =   // DAC channel1 12-bit left-aligned data
        bit_field_t<4, 0xfff>::value<X>();

    static constexpr uint32_t DHR8R1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DHR8R1_DACC1DHR =   // DAC channel1 8-bit right-aligned data
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DHR12R2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DHR12R2_DACC2DHR =   // DAC channel2 12-bit right-aligned data
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t DHR12L2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DHR12L2_DACC2DHR =   // DAC channel2 12-bit left-aligned data
        bit_field_t<4, 0xfff>::value<X>();

    static constexpr uint32_t DHR8R2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DHR8R2_DACC2DHR =   // DAC channel2 8-bit right-aligned data
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DHR12RD_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DHR12RD_DACC1DHR =   // DAC channel1 12-bit right-aligned data
        bit_field_t<0, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DHR12RD_DACC2DHR =   // DAC channel2 12-bit right-aligned data
        bit_field_t<16, 0xfff>::value<X>();

    static constexpr uint32_t DHR12LD_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DHR12LD_DACC1DHR =   // DAC channel1 12-bit left-aligned data
        bit_field_t<4, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DHR12LD_DACC2DHR =   // DAC channel2 12-bit left-aligned data
        bit_field_t<20, 0xfff>::value<X>();

    static constexpr uint32_t DHR8RD_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DHR8RD_DACC1DHR =   // DAC channel1 8-bit right-aligned data
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DHR8RD_DACC2DHR =   // DAC channel2 8-bit right-aligned data
        bit_field_t<8, 0xff>::value<X>();

    static constexpr uint32_t DOR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DOR1_DACC1DOR =   // DAC channel1 data output
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t DOR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DOR2_DACC2DOR =   // DAC channel2 data output
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t SR_RESET_VALUE = 0x0;
    static constexpr uint32_t SR_DMAUDR1 = 0x2000;       // DAC channel1 DMA underrun flag
    static constexpr uint32_t SR_CAL_FLAG1 = 0x4000;     // DAC Channel 1 calibration offset status
    static constexpr uint32_t SR_BWST1 = 0x8000;         // DAC Channel 1 busy writing sample time flag
    static constexpr uint32_t SR_DMAUDR2 = 0x20000000;   // DAC channel2 DMA underrun flag
    static constexpr uint32_t SR_CAL_FLAG2 = 0x40000000; // DAC Channel 2 calibration offset status
    static constexpr uint32_t SR_BWST2 = 0x80000000;     // DAC Channel 2 busy writing sample time flag

    static constexpr uint32_t CCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCR_OTRIM1 =   // DAC Channel 1 offset trimming value
        bit_field_t<0, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR_OTRIM2 =   // DAC Channel 2 offset trimming value
        bit_field_t<16, 0x1f>::value<X>();

    static constexpr uint32_t MCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MCR_MODE1 =   // DAC Channel 1 mode
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MCR_MODE2 =   // DAC Channel 2 mode
        bit_field_t<16, 0x7>::value<X>();

    static constexpr uint32_t SHSR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SHSR1_TSAMPLE1 =   // DAC Channel 1 sample Time
        bit_field_t<0, 0x3ff>::value<X>();

    static constexpr uint32_t SHSR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SHSR2_TSAMPLE2 =   // DAC Channel 2 sample Time
        bit_field_t<0, 0x3ff>::value<X>();

    static constexpr uint32_t SHHR_RESET_VALUE = 0x10001;
    template<uint32_t X>
    static constexpr uint32_t SHHR_THOLD1 =   // DAC Channel 1 hold Time
        bit_field_t<0, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SHHR_THOLD2 =   // DAC Channel 2 hold time
        bit_field_t<16, 0x3ff>::value<X>();

    static constexpr uint32_t SHRR_RESET_VALUE = 0x1;
    template<uint32_t X>
    static constexpr uint32_t SHRR_TREFRESH1 =   // DAC Channel 1 refresh Time
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SHRR_TREFRESH2 =   // DAC Channel 2 refresh Time
        bit_field_t<16, 0xff>::value<X>();
};


template<>
struct peripheral_t<STM32L476, DAC>
{
    typedef stm32l476_dac_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L496, DAC>
{
    typedef stm32l476_dac_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4x1, DAC1>
{
    typedef stm32l476_dac_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4x2, DAC1>
{
    typedef stm32l476_dac_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4x3, DAC1>
{
    typedef stm32l476_dac_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4x5, DAC1>
{
    typedef stm32l476_dac_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4x6, DAC>
{
    typedef stm32l476_dac_t T;
    static T& V;
};

using dac_t = peripheral_t<mcu_svd, DAC>;
using dac1_t = peripheral_t<mcu_svd, DAC1>;

template<int INST> struct dac_traits {};

template<> struct dac_traits<1>
{
    using dac = dac1_t;
};

