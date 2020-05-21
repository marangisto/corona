#pragma once

////
//
//      STM32L1 ADC peripherals
//
////

////
//
//      Analog-to-digital converter
//
////

struct stm32l100_adc_t
{
    volatile uint32_t SR;    // status register
    volatile uint32_t CR1;   // [read-write] control register 1
    volatile uint32_t CR2;   // [read-write] control register 2
    volatile uint32_t SMPR1; // [read-write] sample time register 1
    volatile uint32_t SMPR2; // [read-write] sample time register 2
    volatile uint32_t SMPR3; // [read-write] sample time register 3
    volatile uint32_t JOFR1; // [read-write] injected channel data offset register x
    volatile uint32_t JOFR2; // [read-write] injected channel data offset register x
    volatile uint32_t JOFR3; // [read-write] injected channel data offset register x
    volatile uint32_t JOFR4; // [read-write] injected channel data offset register x
    volatile uint32_t HTR;   // [read-write] watchdog higher threshold register
    volatile uint32_t LTR;   // [read-write] watchdog lower threshold register
    volatile uint32_t SQR1;  // [read-write] regular sequence register 1
    volatile uint32_t SQR2;  // [read-write] regular sequence register 2
    volatile uint32_t SQR3;  // [read-write] regular sequence register 3
    volatile uint32_t SQR4;  // [read-write] regular sequence register 4
    volatile uint32_t SQR5;  // [read-write] regular sequence register 5
    volatile uint32_t JSQR;  // [read-write] injected sequence register
    volatile uint32_t JDR1;  // [read-only] injected data register x
    volatile uint32_t JDR2;  // [read-only] injected data register x
    volatile uint32_t JDR3;  // [read-only] injected data register x
    volatile uint32_t JDR4;  // [read-only] injected data register x
    volatile uint32_t DR;    // [read-only] regular data register
    volatile uint32_t SMPR0; // [read-write] sample time register 0
    reserved_t<0xa8> _0x300;
    volatile uint32_t CSR;   // [read-only] ADC common status register
    volatile uint32_t CCR;   // [read-write] ADC common control register

    static constexpr uint32_t SR_RESET_VALUE = 0x0;
    static constexpr uint32_t SR_JCNR = 0x200; // Injected channel not ready
    static constexpr uint32_t SR_RCNR = 0x100; // Regular channel not ready
    static constexpr uint32_t SR_ADONS = 0x40; // ADC ON status
    static constexpr uint32_t SR_OVR = 0x20;   // Overrun
    static constexpr uint32_t SR_STRT = 0x10;  // Regular channel start flag
    static constexpr uint32_t SR_JSTRT = 0x8;  // Injected channel start flag
    static constexpr uint32_t SR_JEOC = 0x4;   // Injected channel end of conversion
    static constexpr uint32_t SR_EOC = 0x2;    // Regular channel end of conversion
    static constexpr uint32_t SR_AWD = 0x1;    // Analog watchdog flag

    static constexpr uint32_t CR1_RESET_VALUE = 0x0;
    static constexpr uint32_t CR1_OVRIE = 0x4000000; // Overrun interrupt enable
    template<uint32_t X>
    static constexpr uint32_t CR1_RES =              // Resolution
        bit_field_t<24, 0x3>::value<X>();
    static constexpr uint32_t CR1_AWDEN = 0x800000;  // Analog watchdog enable on regular channels
    static constexpr uint32_t CR1_JAWDEN = 0x400000; // Analog watchdog enable on injected channels
    static constexpr uint32_t CR1_PDI = 0x20000;     // Power down during the idle phase
    static constexpr uint32_t CR1_PDD = 0x10000;     // Power down during the delay phase
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
    static constexpr uint32_t CR2_DDS = 0x200;          // DMA disable selection
    static constexpr uint32_t CR2_DMA = 0x100;          // Direct memory access mode
    template<uint32_t X>
    static constexpr uint32_t CR2_DELS =                // Delay selection
        bit_field_t<4, 0x7>::value<X>();
    static constexpr uint32_t CR2_ADC_CFG = 0x4;        // ADC configuration
    static constexpr uint32_t CR2_CONT = 0x2;           // Continuous conversion
    static constexpr uint32_t CR2_ADON = 0x1;           // A/D Converter ON / OFF

    static constexpr uint32_t SMPR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP =   // Channel sampling time selection
        bit_field_t<0, 0x3fffffff>::value<X>();

    static constexpr uint32_t SMPR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SMPR2_SMP =   // Channel sampling time selection
        bit_field_t<0, 0x3fffffff>::value<X>();

    static constexpr uint32_t SMPR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SMPR3_SMP =   // Channel Sample time selection
        bit_field_t<0, 0x3fffffff>::value<X>();

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
    static constexpr uint32_t SQR1_SQ28 =   // 28th conversion in regular sequence
        bit_field_t<15, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR1_SQ27 =   // 27th conversion in regular sequence
        bit_field_t<10, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR1_SQ26 =   // 26th conversion in regular sequence
        bit_field_t<5, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR1_SQ25 =   // 25th conversion in regular sequence
        bit_field_t<0, 0x1f>::value<X>();

    static constexpr uint32_t SQR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SQR2_SQ24 =   // 24th conversion in regular sequence
        bit_field_t<25, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR2_SQ23 =   // 23rd conversion in regular sequence
        bit_field_t<20, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR2_SQ22 =   // 22nd conversion in regular sequence
        bit_field_t<15, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR2_SQ21 =   // 21st conversion in regular sequence
        bit_field_t<10, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR2_SQ20 =   // 20th conversion in regular sequence
        bit_field_t<5, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR2_SQ19 =   // 19th conversion in regular sequence
        bit_field_t<0, 0x1f>::value<X>();

    static constexpr uint32_t SQR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SQR3_SQ18 =   // 18th conversion in regular sequence
        bit_field_t<25, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR3_SQ17 =   // 17th conversion in regular sequence
        bit_field_t<20, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR3_SQ16 =   // 16th conversion in regular sequence
        bit_field_t<15, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR3_SQ15 =   // 15th conversion in regular sequence
        bit_field_t<10, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR3_SQ14 =   // 14th conversion in regular sequence
        bit_field_t<5, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR3_SQ13 =   // 13th conversion in regular sequence
        bit_field_t<0, 0x1f>::value<X>();

    static constexpr uint32_t SQR4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SQR4_SQ12 =   // 12th conversion in regular sequence
        bit_field_t<25, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR4_SQ11 =   // 11th conversion in regular sequence
        bit_field_t<20, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR4_SQ10 =   // 10th conversion in regular sequence
        bit_field_t<15, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR4_SQ9 =    // 9th conversion in regular sequence
        bit_field_t<10, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR4_SQ8 =    // 8th conversion in regular sequence
        bit_field_t<5, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR4_SQ7 =    // 7th conversion in regular sequence
        bit_field_t<0, 0x1f>::value<X>();

    static constexpr uint32_t SQR5_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SQR5_SQ6 =   // 6th conversion in regular sequence
        bit_field_t<25, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR5_SQ5 =   // 5th conversion in regular sequence
        bit_field_t<20, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR5_SQ4 =   // 4th conversion in regular sequence
        bit_field_t<15, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR5_SQ3 =   // 3rd conversion in regular sequence
        bit_field_t<10, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR5_SQ2 =   // 2nd conversion in regular sequence
        bit_field_t<5, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR5_SQ1 =   // 1st conversion in regular sequence
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
    static constexpr uint32_t DR_RegularDATA =   // Regular data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t SMPR0_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SMPR0_SMP =   // Channel Sample time selection
        bit_field_t<0, 0x3f>::value<X>();

    static constexpr uint32_t CSR_RESET_VALUE = 0x0;
    static constexpr uint32_t CSR_AWD1 = 0x1;    // Analog watchdog flag of the ADC
    static constexpr uint32_t CSR_EOC1 = 0x2;    // End of conversion of the ADC
    static constexpr uint32_t CSR_JEOC1 = 0x4;   // Injected channel end of conversion of the ADC
    static constexpr uint32_t CSR_JSTRT1 = 0x8;  // Injected channel Start flag of the ADC
    static constexpr uint32_t CSR_STRT1 = 0x10;  // Regular channel Start flag of the ADC
    static constexpr uint32_t CSR_OVR1 = 0x20;   // Overrun flag of the ADC
    static constexpr uint32_t CSR_ADONS1 = 0x40; // ADON Status of ADC1

    static constexpr uint32_t CCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCR_ADCPRE =            // ADC prescaler
        bit_field_t<16, 0x3>::value<X>();
    static constexpr uint32_t CCR_TSVREFE = 0x800000; // Temperature sensor and VREFINT enable
};


template<>
struct peripheral_t<STM32L100, ADC>
{
    typedef stm32l100_adc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L151, ADC>
{
    typedef stm32l100_adc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L152, ADC>
{
    typedef stm32l100_adc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L162, ADC>
{
    typedef stm32l100_adc_t T;
    static T& V;
};

using adc_t = peripheral_t<mcu_svd, ADC>;

