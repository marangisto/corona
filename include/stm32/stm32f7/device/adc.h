#pragma once

////
//
//      STM32F7 ADC peripherals
//
////

////
//
//      Analog-to-digital converter
//
////

struct stm32f722_adc2_t
{
    volatile uint32_t SR;    // [read-write] status register
    volatile uint32_t CR1;   // [read-write] control register 1
    volatile uint32_t CR2;   // [read-write] control register 2
    volatile uint32_t SMPR1; // [read-write] sample time register 1
    volatile uint32_t SMPR2; // [read-write] sample time register 2
    volatile uint32_t JOFR1; // [read-write] injected channel data offset register x
    volatile uint32_t JOFR2; // [read-write] injected channel data offset register x
    volatile uint32_t JOFR3; // [read-write] injected channel data offset register x
    volatile uint32_t JOFR4; // [read-write] injected channel data offset register x
    volatile uint32_t HTR;   // [read-write] watchdog higher threshold register
    volatile uint32_t LTR;   // [read-write] watchdog lower threshold register
    volatile uint32_t SQR1;  // [read-write] regular sequence register 1
    volatile uint32_t SQR2;  // [read-write] regular sequence register 2
    volatile uint32_t SQR3;  // [read-write] regular sequence register 3
    volatile uint32_t JSQR;  // [read-write] injected sequence register
    volatile uint32_t JDR1;  // [read-only] injected data register x
    volatile uint32_t JDR2;  // [read-only] injected data register x
    volatile uint32_t JDR3;  // [read-only] injected data register x
    volatile uint32_t JDR4;  // [read-only] injected data register x
    volatile uint32_t DR;    // [read-only] regular data register

    static constexpr uint32_t SR_RESET_VALUE = 0x0;
    static constexpr uint32_t SR_OVR = 0x20;  // Overrun
    static constexpr uint32_t SR_STRT = 0x10; // Regular channel start flag
    static constexpr uint32_t SR_JSTRT = 0x8; // Injected channel start flag
    static constexpr uint32_t SR_JEOC = 0x4;  // Injected channel end of conversion
    static constexpr uint32_t SR_EOC = 0x2;   // Regular channel end of conversion
    static constexpr uint32_t SR_AWD = 0x1;   // Analog watchdog flag

    static constexpr uint32_t CR1_RESET_VALUE = 0x0;
    static constexpr uint32_t CR1_OVRIE = 0x4000000; // Overrun interrupt enable
    template<uint32_t X>
    static constexpr uint32_t CR1_RES =              // Resolution
        bit_field_t<24, 0x3>::value<X>();
    static constexpr uint32_t CR1_AWDEN = 0x800000;  // Analog watchdog enable on regular channels
    static constexpr uint32_t CR1_JAWDEN = 0x400000; // Analog watchdog enable on injected channels
    template<uint32_t X>
    static constexpr uint32_t CR1_DISCNUM =          // Discontinuous mode channel count
        bit_field_t<13, 0x7>::value<X>();
    static constexpr uint32_t CR1_JDISCEN = 0x1000;  // Discontinuous mode on injected channels
    static constexpr uint32_t CR1_DISCEN = 0x800;    // Discontinuous mode on regular channels
    static constexpr uint32_t CR1_JAUTO = 0x400;     // Automatic injected group conversion
    static constexpr uint32_t CR1_AWDSGL = 0x200;    // Enable the watchdog on a single channel in scan mode
    static constexpr uint32_t CR1_SCAN = 0x100;      // Scan mode
    static constexpr uint32_t CR1_JEOCIE = 0x80;     // Interrupt enable for injected channels
    static constexpr uint32_t CR1_AWDIE = 0x40;      // Analog watchdog interrupt enable
    static constexpr uint32_t CR1_EOCIE = 0x20;      // Interrupt enable for EOC
    template<uint32_t X>
    static constexpr uint32_t CR1_AWDCH =            // Analog watchdog channel select bits
        bit_field_t<0, 0x1f>::value<X>();

    static constexpr uint32_t CR2_RESET_VALUE = 0x0;
    static constexpr uint32_t CR2_SWSTART = 0x40000000; // Start conversion of regular channels
    template<uint32_t X>
    static constexpr uint32_t CR2_EXTEN =               // External trigger enable for regular channels
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CR2_EXTSEL =              // External event select for regular group
        bit_field_t<24, 0xf>::value<X>();
    static constexpr uint32_t CR2_JSWSTART = 0x400000;  // Start conversion of injected channels
    template<uint32_t X>
    static constexpr uint32_t CR2_JEXTEN =              // External trigger enable for injected channels
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CR2_JEXTSEL =             // External event select for injected group
        bit_field_t<16, 0xf>::value<X>();
    static constexpr uint32_t CR2_ALIGN = 0x800;        // Data alignment
    static constexpr uint32_t CR2_EOCS = 0x400;         // End of conversion selection
    static constexpr uint32_t CR2_DDS = 0x200;          // DMA disable selection (for single ADC mode)
    static constexpr uint32_t CR2_DMA = 0x100;          // Direct memory access mode (for single ADC mode)
    static constexpr uint32_t CR2_CONT = 0x2;           // Continuous conversion
    static constexpr uint32_t CR2_ADON = 0x1;           // A/D Converter ON / OFF

    static constexpr uint32_t SMPR1_RESET_VALUE = 0x0;

    static constexpr uint32_t SMPR2_RESET_VALUE = 0x0;

    static constexpr uint32_t JOFR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t JOFR1_JOFFSET1 =   // Data offset for injected channel x
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t JOFR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t JOFR2_JOFFSET2 =   // Data offset for injected channel x
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t JOFR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t JOFR3_JOFFSET3 =   // Data offset for injected channel x
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t JOFR4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t JOFR4_JOFFSET4 =   // Data offset for injected channel x
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t HTR_RESET_VALUE = 0xfff;
    template<uint32_t X>
    static constexpr uint32_t HTR_HT =   // Analog watchdog higher threshold
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t LTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LTR_LT =   // Analog watchdog lower threshold
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t SQR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SQR1_L =      // Regular channel sequence length
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR1_SQ16 =   // 16th conversion in regular sequence
        bit_field_t<15, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR1_SQ15 =   // 15th conversion in regular sequence
        bit_field_t<10, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR1_SQ14 =   // 14th conversion in regular sequence
        bit_field_t<5, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR1_SQ13 =   // 13th conversion in regular sequence
        bit_field_t<0, 0x1f>::value<X>();

    static constexpr uint32_t SQR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SQR2_SQ12 =   // 12th conversion in regular sequence
        bit_field_t<25, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR2_SQ11 =   // 11th conversion in regular sequence
        bit_field_t<20, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR2_SQ10 =   // 10th conversion in regular sequence
        bit_field_t<15, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR2_SQ9 =    // 9th conversion in regular sequence
        bit_field_t<10, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR2_SQ8 =    // 8th conversion in regular sequence
        bit_field_t<5, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR2_SQ7 =    // 7th conversion in regular sequence
        bit_field_t<0, 0x1f>::value<X>();

    static constexpr uint32_t SQR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SQR3_SQ6 =   // 6th conversion in regular sequence
        bit_field_t<25, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR3_SQ5 =   // 5th conversion in regular sequence
        bit_field_t<20, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR3_SQ4 =   // 4th conversion in regular sequence
        bit_field_t<15, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR3_SQ3 =   // 3rd conversion in regular sequence
        bit_field_t<10, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR3_SQ2 =   // 2nd conversion in regular sequence
        bit_field_t<5, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR3_SQ1 =   // 1st conversion in regular sequence
        bit_field_t<0, 0x1f>::value<X>();

    static constexpr uint32_t JSQR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t JSQR_JL =     // Injected sequence length
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t JSQR_JSQ4 =   // 4th conversion in injected sequence
        bit_field_t<15, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t JSQR_JSQ3 =   // 3rd conversion in injected sequence
        bit_field_t<10, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t JSQR_JSQ2 =   // 2nd conversion in injected sequence
        bit_field_t<5, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t JSQR_JSQ1 =   // 1st conversion in injected sequence
        bit_field_t<0, 0x1f>::value<X>();

    static constexpr uint32_t JDR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t JDR1_JDATA =   // Injected data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t JDR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t JDR2_JDATA =   // Injected data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t JDR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t JDR3_JDATA =   // Injected data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t JDR4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t JDR4_JDATA =   // Injected data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DR_DATA =   // Regular data
        bit_field_t<0, 0xffff>::value<X>();
};


////
//
//      Common ADC registers
//
////

struct stm32f722_c_adc_t
{
    volatile uint32_t CSR; // [read-only] ADC Common status register
    volatile uint32_t CCR; // [read-write] ADC common control register
    volatile uint32_t CDR; // [read-only] ADC common regular data register for dual and triple modes

    static constexpr uint32_t CSR_RESET_VALUE = 0x0;
    static constexpr uint32_t CSR_OVR3 = 0x200000;  // Overrun flag of ADC3
    static constexpr uint32_t CSR_STRT3 = 0x100000; // Regular channel Start flag of ADC 3
    static constexpr uint32_t CSR_JSTRT3 = 0x80000; // Injected channel Start flag of ADC 3
    static constexpr uint32_t CSR_JEOC3 = 0x40000;  // Injected channel end of conversion of ADC 3
    static constexpr uint32_t CSR_EOC3 = 0x20000;   // End of conversion of ADC 3
    static constexpr uint32_t CSR_AWD3 = 0x10000;   // Analog watchdog flag of ADC 3
    static constexpr uint32_t CSR_OVR2 = 0x2000;    // Overrun flag of ADC 2
    static constexpr uint32_t CSR_STRT2 = 0x1000;   // Regular channel Start flag of ADC 2
    static constexpr uint32_t CSR_JSTRT2 = 0x800;   // Injected channel Start flag of ADC 2
    static constexpr uint32_t CSR_JEOC2 = 0x400;    // Injected channel end of conversion of ADC 2
    static constexpr uint32_t CSR_EOC2 = 0x200;     // End of conversion of ADC 2
    static constexpr uint32_t CSR_AWD2 = 0x100;     // Analog watchdog flag of ADC 2
    static constexpr uint32_t CSR_OVR1 = 0x20;      // Overrun flag of ADC 1
    static constexpr uint32_t CSR_STRT1 = 0x10;     // Regular channel Start flag of ADC 1
    static constexpr uint32_t CSR_JSTRT1 = 0x8;     // Injected channel Start flag of ADC 1
    static constexpr uint32_t CSR_JEOC1 = 0x4;      // Injected channel end of conversion of ADC 1
    static constexpr uint32_t CSR_EOC1 = 0x2;       // End of conversion of ADC 1
    static constexpr uint32_t CSR_AWD1 = 0x1;       // Analog watchdog flag of ADC 1

    static constexpr uint32_t CCR_RESET_VALUE = 0x0;
    static constexpr uint32_t CCR_TSVREFE = 0x800000; // Temperature sensor and VREFINT enable
    static constexpr uint32_t CCR_VBATE = 0x400000;   // VBAT enable
    template<uint32_t X>
    static constexpr uint32_t CCR_ADCPRE =            // ADC prescaler
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR_DMA =               // Direct memory access mode for multi ADC mode
        bit_field_t<14, 0x3>::value<X>();
    static constexpr uint32_t CCR_DDS = 0x2000;       // DMA disable selection for multi-ADC mode
    template<uint32_t X>
    static constexpr uint32_t CCR_DELAY =             // Delay between 2 sampling phases
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR_MULT =              // Multi ADC mode selection
        bit_field_t<0, 0x1f>::value<X>();

    static constexpr uint32_t CDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CDR_DATA2 =   // 2nd data item of a pair of regular conversions
        bit_field_t<16, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CDR_DATA1 =   // 1st data item of a pair of regular conversions
        bit_field_t<0, 0xffff>::value<X>();
};


template<>
struct peripheral_t<STM32F722, ADC2>
{
    typedef stm32f722_adc2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F722, ADC1>
{
    typedef stm32f722_adc2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F722, ADC3>
{
    typedef stm32f722_adc2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, ADC2>
{
    typedef stm32f722_adc2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, ADC1>
{
    typedef stm32f722_adc2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, ADC3>
{
    typedef stm32f722_adc2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, ADC2>
{
    typedef stm32f722_adc2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, ADC1>
{
    typedef stm32f722_adc2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, ADC3>
{
    typedef stm32f722_adc2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, ADC2>
{
    typedef stm32f722_adc2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, ADC1>
{
    typedef stm32f722_adc2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, ADC3>
{
    typedef stm32f722_adc2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, ADC2>
{
    typedef stm32f722_adc2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, ADC1>
{
    typedef stm32f722_adc2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, ADC3>
{
    typedef stm32f722_adc2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, ADC1>
{
    typedef stm32f722_adc2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, ADC2>
{
    typedef stm32f722_adc2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, ADC3>
{
    typedef stm32f722_adc2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, ADC1>
{
    typedef stm32f722_adc2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, ADC2>
{
    typedef stm32f722_adc2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, ADC3>
{
    typedef stm32f722_adc2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, ADC1>
{
    typedef stm32f722_adc2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, ADC2>
{
    typedef stm32f722_adc2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, ADC3>
{
    typedef stm32f722_adc2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, ADC1>
{
    typedef stm32f722_adc2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, ADC2>
{
    typedef stm32f722_adc2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, ADC3>
{
    typedef stm32f722_adc2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, ADC1>
{
    typedef stm32f722_adc2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, ADC2>
{
    typedef stm32f722_adc2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, ADC3>
{
    typedef stm32f722_adc2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, ADC1>
{
    typedef stm32f722_adc2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, ADC2>
{
    typedef stm32f722_adc2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, ADC3>
{
    typedef stm32f722_adc2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, ADC1>
{
    typedef stm32f722_adc2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, ADC2>
{
    typedef stm32f722_adc2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, ADC3>
{
    typedef stm32f722_adc2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, ADC1>
{
    typedef stm32f722_adc2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, ADC2>
{
    typedef stm32f722_adc2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, ADC3>
{
    typedef stm32f722_adc2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, ADC1>
{
    typedef stm32f722_adc2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, ADC2>
{
    typedef stm32f722_adc2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, ADC3>
{
    typedef stm32f722_adc2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, ADC1>
{
    typedef stm32f722_adc2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, ADC2>
{
    typedef stm32f722_adc2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, ADC3>
{
    typedef stm32f722_adc2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, ADC1>
{
    typedef stm32f722_adc2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, ADC2>
{
    typedef stm32f722_adc2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, ADC3>
{
    typedef stm32f722_adc2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F722, C_ADC>
{
    typedef stm32f722_c_adc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, C_ADC>
{
    typedef stm32f722_c_adc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, C_ADC>
{
    typedef stm32f722_c_adc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, C_ADC>
{
    typedef stm32f722_c_adc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, C_ADC>
{
    typedef stm32f722_c_adc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, C_ADC>
{
    typedef stm32f722_c_adc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, C_ADC>
{
    typedef stm32f722_c_adc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, C_ADC>
{
    typedef stm32f722_c_adc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, C_ADC>
{
    typedef stm32f722_c_adc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, C_ADC>
{
    typedef stm32f722_c_adc_t T;
    static T& V;
};

using adc1_t = peripheral_t<mcu_svd, ADC1>;
using adc2_t = peripheral_t<mcu_svd, ADC2>;
using adc3_t = peripheral_t<mcu_svd, ADC3>;
using c_adc_t = peripheral_t<mcu_svd, C_ADC>;

template<int INST> struct adc_traits {};

template<> struct adc_traits<1>
{
    using adc = adc1_t;
};

template<> struct adc_traits<2>
{
    using adc = adc2_t;
};

template<> struct adc_traits<3>
{
    using adc = adc3_t;
};

