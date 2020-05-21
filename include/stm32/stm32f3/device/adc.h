#pragma once

////
//
//      STM32F3 ADC peripherals
//
////

////
//
//      Analog to digital converter
//
////

struct stm32f301_adc_t
{
    volatile uint32_t ISR;     // [read-write] ADC interrupt and status register
    volatile uint32_t IER;     // [read-write] ADC interrupt enable register
    volatile uint32_t CR;      // ADC control register
    volatile uint32_t CFGR;    // [read-write] ADC configuration register
    reserved_t<0x1> _0x14;
    volatile uint32_t SMPR1;   // [read-write] ADC sample time register 1
    volatile uint32_t SMPR2;   // [read-write] ADC sample time register 2
    reserved_t<0x1> _0x20;
    volatile uint32_t TR1;     // [read-write] ADC watchdog threshold register 1
    volatile uint32_t TR2;     // [read-write] ADC watchdog threshold register 2
    volatile uint32_t TR3;     // [read-write] read-write
    reserved_t<0x1> _0x30;
    volatile uint32_t SQR1;    // [read-write] ADC regular sequence register 1
    volatile uint32_t SQR2;    // [read-write] ADC regular sequence register 2
    volatile uint32_t SQR3;    // [read-write] ADC regular sequence register 3
    volatile uint32_t SQR4;    // [read-write] ADC regular sequence register 4
    volatile uint32_t DR;      // [read-only] ADC regular Data Register
    reserved_t<0x2> _0x4c;
    volatile uint32_t JSQR;    // [read-write] ADC injected sequence register
    reserved_t<0x4> _0x60;
    volatile uint32_t OFR1;    // [read-write] ADC offset register1
    volatile uint32_t OFR2;    // [read-write] ADC offset register2
    volatile uint32_t OFR3;    // [read-write] ADC offset register3
    volatile uint32_t OFR4;    // [read-write] ADC offset register4
    reserved_t<0x4> _0x80;
    volatile uint32_t JDR1;    // [read-only] ADC offset register1
    volatile uint32_t JDR2;    // [read-only] ADC offset register2
    volatile uint32_t JDR3;    // [read-only] ADC offset register3
    volatile uint32_t JDR4;    // [read-only] ADC offset register4
    reserved_t<0x4> _0xa0;
    volatile uint32_t AWD2CR;  // [read-write] ADC Analog Watchdog 2 Configuration Register
    volatile uint32_t AWD3CR;  // [read-write] ADC Analog Watchdog 3 Configuration Register
    reserved_t<0x2> _0xb0;
    volatile uint32_t DIFSEL;  // [read-write] ADC Differential Mode Selection Register
    volatile uint32_t CALFACT; // [read-write] ADC Calibration Factors
    reserved_t<0x92> _0x300;
    volatile uint32_t CSR;     // [read-only] ADC Common status register
    reserved_t<0x1> _0x308;
    volatile uint32_t CRR;     // [read-write] ADC common control register

    static constexpr uint32_t ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t ISR_JQOVF = 0x400; // Injected context queue overflow
    static constexpr uint32_t ISR_AWD3 = 0x200;  // Analog watchdog 3 flag
    static constexpr uint32_t ISR_AWD2 = 0x100;  // Analog watchdog 2 flag
    static constexpr uint32_t ISR_AWD1 = 0x80;   // Analog watchdog 1 flag
    static constexpr uint32_t ISR_JEOS = 0x40;   // Injected channel end of sequence flag
    static constexpr uint32_t ISR_JEOC = 0x20;   // Injected channel end of conversion flag
    static constexpr uint32_t ISR_OVR = 0x10;    // ADC overrun
    static constexpr uint32_t ISR_EOS = 0x8;     // End of regular sequence flag
    static constexpr uint32_t ISR_EOC = 0x4;     // End of conversion flag
    static constexpr uint32_t ISR_EOSMP = 0x2;   // End of sampling flag
    static constexpr uint32_t ISR_ADRDY = 0x1;   // ADC ready

    static constexpr uint32_t IER_RESET_VALUE = 0x0;
    static constexpr uint32_t IER_JQOVFIE = 0x400; // Injected context queue overflow interrupt enable
    static constexpr uint32_t IER_AWD3IE = 0x200;  // Analog watchdog 3 interrupt enable
    static constexpr uint32_t IER_AWD2IE = 0x100;  // Analog watchdog 2 interrupt enable
    static constexpr uint32_t IER_AWD1IE = 0x80;   // Analog watchdog 1 interrupt enable
    static constexpr uint32_t IER_JEOSIE = 0x40;   // End of injected sequence of conversions interrupt enable
    static constexpr uint32_t IER_JEOCIE = 0x20;   // End of injected conversion interrupt enable
    static constexpr uint32_t IER_OVRIE = 0x10;    // Overrun interrupt enable
    static constexpr uint32_t IER_EOSIE = 0x8;     // End of regular sequence of conversions interrupt enable
    static constexpr uint32_t IER_EOCIE = 0x4;     // End of regular conversion interrupt enable
    static constexpr uint32_t IER_EOSMPIE = 0x2;   // End of sampling flag interrupt enable for regular conversions
    static constexpr uint32_t IER_ADRDYIE = 0x1;   // ADC ready interrupt enable

    static constexpr uint32_t CR_RESET_VALUE = 0x20000000;
    static constexpr uint32_t CR_ADCAL = 0x80000000;    // ADC calibration
    static constexpr uint32_t CR_ADCALDIF = 0x40000000; // Differential mode for calibration
    template<uint32_t X>
    static constexpr uint32_t CR_ADVREGEN =             // ADC voltage regulator enable
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t CR_JADST = 0x20;          // ADC stop of injected conversion command
    static constexpr uint32_t CR_ADSTP = 0x10;          // ADC stop of regular conversion command
    static constexpr uint32_t CR_JADSTART = 0x8;        // ADC start of injected conversion
    static constexpr uint32_t CR_ADSTART = 0x4;         // ADC start of regular conversion
    static constexpr uint32_t CR_ADDIS = 0x2;           // ADC disable command
    static constexpr uint32_t CR_ADEN = 0x1;            // ADC enable control

    static constexpr uint32_t CFGR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CFGR_AWD1CH =             // Analog watchdog 1 channel selection
        bit_field_t<26, 0x1f>::value<X>();
    static constexpr uint32_t CFGR_JAUTO = 0x2000000;   // Automatic injected group conversion
    static constexpr uint32_t CFGR_JAWD1EN = 0x1000000; // Analog watchdog 1 enable on injected channels
    static constexpr uint32_t CFGR_AWD1EN = 0x800000;   // Analog watchdog 1 enable on regular channels
    static constexpr uint32_t CFGR_AWD1SGL = 0x400000;  // Enable the watchdog 1 on a single channel or on all channels
    static constexpr uint32_t CFGR_JQM = 0x200000;      // JSQR queue mode
    static constexpr uint32_t CFGR_JDISCEN = 0x100000;  // Discontinuous mode on injected channels
    template<uint32_t X>
    static constexpr uint32_t CFGR_DISCNUM =            // Discontinuous mode channel count
        bit_field_t<17, 0x7>::value<X>();
    static constexpr uint32_t CFGR_DISCEN = 0x10000;    // Discontinuous mode for regular channels
    static constexpr uint32_t CFGR_AUTDLY = 0x4000;     // Delayed conversion mode
    static constexpr uint32_t CFGR_CONT = 0x2000;       // Single / continuous conversion mode for regular conversions
    static constexpr uint32_t CFGR_OVRMOD = 0x1000;     // Overrun Mode
    template<uint32_t X>
    static constexpr uint32_t CFGR_EXTEN =              // External trigger enable and polarity selection for regular channels
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFGR_EXTSEL =             // External trigger selection for regular group
        bit_field_t<6, 0xf>::value<X>();
    static constexpr uint32_t CFGR_ALIGN = 0x20;        // Data alignment
    template<uint32_t X>
    static constexpr uint32_t CFGR_RES =                // Data resolution
        bit_field_t<3, 0x3>::value<X>();
    static constexpr uint32_t CFGR_DMACFG = 0x2;        // Direct memory access configuration
    static constexpr uint32_t CFGR_DMAEN = 0x1;         // Direct memory access enable

    static constexpr uint32_t SMPR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP1 =   // Channel 1 sampling time selection
        bit_field_t<3, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP2 =   // Channel 2 sampling time selection
        bit_field_t<6, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP3 =   // Channel 3 sampling time selection
        bit_field_t<9, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP4 =   // Channel 4 sampling time selection
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP5 =   // Channel 5 sampling time selection
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP6 =   // Channel 6 sampling time selection
        bit_field_t<18, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP7 =   // Channel 7 sampling time selection
        bit_field_t<21, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP8 =   // Channel 8 sampling time selection
        bit_field_t<24, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP9 =   // Channel 9 sampling time selection
        bit_field_t<27, 0x7>::value<X>();

    static constexpr uint32_t SMPR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SMPR2_SMP10 =   // Channel 10 sampling time selection
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR2_SMP11 =   // Channel 11 sampling time selection
        bit_field_t<3, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR2_SMP12 =   // Channel 12 sampling time selection
        bit_field_t<6, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR2_SMP13 =   // Channel 13 sampling time selection
        bit_field_t<9, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR2_SMP14 =   // Channel 14 sampling time selection
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR2_SMP15 =   // Channel 15 sampling time selection
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR2_SMP16 =   // Channel 16 sampling time selection
        bit_field_t<18, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR2_SMP17 =   // Channel 17 sampling time selection
        bit_field_t<21, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR2_SMP18 =   // Channel 18 sampling time selection
        bit_field_t<24, 0x7>::value<X>();

    static constexpr uint32_t TR1_RESET_VALUE = 0xfff0000;
    template<uint32_t X>
    static constexpr uint32_t TR1_HT1 =   // Analog watchdog 1 higher threshold
        bit_field_t<16, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TR1_LT1 =   // Analog watchdog 1 lower threshold
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t TR2_RESET_VALUE = 0xfff0000;
    template<uint32_t X>
    static constexpr uint32_t TR2_HT2 =   // Analog watchdog 2 higher threshold
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TR2_LT2 =   // Analog watchdog 2 lower threshold
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t TR3_RESET_VALUE = 0xfff0000;
    template<uint32_t X>
    static constexpr uint32_t TR3_HT3 =   // Analog watchdog 3 higher threshold
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TR3_LT3 =   // Analog watchdog 3 lower threshold
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t SQR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SQR1_SQ4 =   // 4th conversion in regular sequence
        bit_field_t<24, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR1_SQ3 =   // 3rd conversion in regular sequence
        bit_field_t<18, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR1_SQ2 =   // 2nd conversion in regular sequence
        bit_field_t<12, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR1_SQ1 =   // 1st conversion in regular sequence
        bit_field_t<6, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR1_L =     // Regular channel sequence length
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t SQR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SQR2_SQ9 =   // 9th conversion in regular sequence
        bit_field_t<24, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR2_SQ8 =   // 8th conversion in regular sequence
        bit_field_t<18, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR2_SQ7 =   // 7th conversion in regular sequence
        bit_field_t<12, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR2_SQ6 =   // 6th conversion in regular sequence
        bit_field_t<6, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR2_SQ5 =   // 5th conversion in regular sequence
        bit_field_t<0, 0x1f>::value<X>();

    static constexpr uint32_t SQR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SQR3_SQ14 =   // 14th conversion in regular sequence
        bit_field_t<24, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR3_SQ13 =   // 13th conversion in regular sequence
        bit_field_t<18, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR3_SQ12 =   // 13th conversion in regular sequence
        bit_field_t<12, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR3_SQ11 =   // 11th conversion in regular sequence
        bit_field_t<6, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR3_SQ10 =   // 10th conversion in regular sequence
        bit_field_t<0, 0x1f>::value<X>();

    static constexpr uint32_t SQR4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SQR4_SQ16 =   // 16th conversion in regular sequence
        bit_field_t<6, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR4_SQ15 =   // 15th conversion in regular sequence
        bit_field_t<0, 0x1f>::value<X>();

    static constexpr uint32_t DR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DR_RDATA =   // Regular Data converted
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t JSQR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t JSQR_JSQ4 =      // 4th conversion in the injected sequence
        bit_field_t<26, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t JSQR_JSQ3 =      // 3rd conversion in the injected sequence
        bit_field_t<20, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t JSQR_JSQ2 =      // 2nd conversion in the injected sequence
        bit_field_t<14, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t JSQR_JSQ1 =      // 1st conversion in the injected sequence
        bit_field_t<8, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t JSQR_JEXTEN =    // External Trigger Enable and Polarity Selection for injected channels
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t JSQR_JEXTSEL =   // External Trigger Selection for injected group
        bit_field_t<2, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t JSQR_JL =        // Injected channel sequence length
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t OFR1_RESET_VALUE = 0x0;
    static constexpr uint32_t OFR1_OFFSET1_EN = 0x80000000; // Offset1 Enable
    template<uint32_t X>
    static constexpr uint32_t OFR1_OFFSET1_CH =             // Channel selection for the Data offset 1
        bit_field_t<26, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OFR1_OFFSET1 =                // Data offset 1 for the channel programmed into bits OFFSET1_CH
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t OFR2_RESET_VALUE = 0x0;
    static constexpr uint32_t OFR2_OFFSET2_EN = 0x80000000; // Offset 2 Enable
    template<uint32_t X>
    static constexpr uint32_t OFR2_OFFSET2_CH =             // Channel selection for the Data offset 2
        bit_field_t<26, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OFR2_OFFSET2 =                // Data offset 2 for the channel programmed into bits OFFSET2_CH
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t OFR3_RESET_VALUE = 0x0;
    static constexpr uint32_t OFR3_OFFSET3_EN = 0x80000000; // Offset y Enable
    template<uint32_t X>
    static constexpr uint32_t OFR3_OFFSET3_CH =             // Channel selection for the Data offset 3
        bit_field_t<26, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OFR3_OFFSET3 =                // Data offset 3 for the channel programmed into bits OFFSET3_CH
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t OFR4_RESET_VALUE = 0x0;
    static constexpr uint32_t OFR4_OFFSET4_EN = 0x80000000; // Offset 4 Enable
    template<uint32_t X>
    static constexpr uint32_t OFR4_OFFSET4_CH =             // Channel selection for the Data offset 4
        bit_field_t<26, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OFR4_OFFSET4 =                // Data offset 4 for the channel programmed into bits OFFSET4_CH
        bit_field_t<0, 0xfff>::value<X>();

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

    static constexpr uint32_t AWD2CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t AWD2CR_AWD2CH =   // Analog watchdog 2 channel selection
        bit_field_t<1, 0x3ffff>::value<X>();

    static constexpr uint32_t AWD3CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t AWD3CR_AWD3CH =   // Analog watchdog 3 channel selection
        bit_field_t<1, 0x3ffff>::value<X>();

    static constexpr uint32_t DIFSEL_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DIFSEL_DIFSEL =   // Differential mode for channels 15 to 1
        bit_field_t<1, 0x3ffff>::value<X>();

    static constexpr uint32_t CALFACT_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CALFACT_CALFACT_D =   // Calibration Factors in differential mode
        bit_field_t<16, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CALFACT_CALFACT_S =   // Calibration Factors In Single-Ended mode
        bit_field_t<0, 0x7f>::value<X>();

    static constexpr uint32_t CSR_RESET_VALUE = 0x0;
    static constexpr uint32_t CSR_JQOVF_SLV = 0x4000000; // Injected Context Queue Overflow flag of the slave ADC
    static constexpr uint32_t CSR_AWD3_SLV = 0x2000000;  // Analog watchdog 3 flag of the slave ADC
    static constexpr uint32_t CSR_AWD2_SLV = 0x1000000;  // Analog watchdog 2 flag of the slave ADC
    static constexpr uint32_t CSR_AWD1_SLV = 0x800000;   // Analog watchdog 1 flag of the slave ADC
    static constexpr uint32_t CSR_JEOS_SLV = 0x400000;   // End of injected sequence flag of the slave ADC
    static constexpr uint32_t CSR_JEOC_SLV = 0x200000;   // End of injected conversion flag of the slave ADC
    static constexpr uint32_t CSR_OVR_SLV = 0x100000;    // Overrun flag of the slave ADC
    static constexpr uint32_t CSR_EOS_SLV = 0x80000;     // End of regular sequence flag of the slave ADC
    static constexpr uint32_t CSR_EOC_SLV = 0x40000;     // End of regular conversion of the slave ADC
    static constexpr uint32_t CSR_EOSMP_SLV = 0x20000;   // End of Sampling phase flag of the slave ADC
    static constexpr uint32_t CSR_ADRDY_SLV = 0x10000;   // Slave ADC ready
    static constexpr uint32_t CSR_JQOVF_MST = 0x400;     // Injected Context Queue Overflow flag of the master ADC
    static constexpr uint32_t CSR_AWD3_MST = 0x200;      // Analog watchdog 3 flag of the master ADC
    static constexpr uint32_t CSR_AWD2_MST = 0x100;      // Analog watchdog 2 flag of the master ADC
    static constexpr uint32_t CSR_AWD1_MST = 0x80;       // Analog watchdog 1 flag of the master ADC
    static constexpr uint32_t CSR_JEOS_MST = 0x40;       // End of injected sequence flag of the master ADC
    static constexpr uint32_t CSR_JEOC_MST = 0x20;       // End of injected conversion flag of the master ADC
    static constexpr uint32_t CSR_OVR_MST = 0x10;        // Overrun flag of the master ADC
    static constexpr uint32_t CSR_EOS_MST = 0x8;         // End of regular sequence flag of the master ADC
    static constexpr uint32_t CSR_EOC_MST = 0x4;         // End of regular conversion of the master ADC
    static constexpr uint32_t CSR_EOSMP_MST = 0x2;       // End of Sampling phase flag of the master ADC
    static constexpr uint32_t CSR_ADRDY_MST = 0x1;       // Master ADC ready

    static constexpr uint32_t CRR_RESET_VALUE = 0x0;
    static constexpr uint32_t CRR_VBATEN = 0x1000000; // VBATEN
    static constexpr uint32_t CRR_TSEN = 0x800000;    // Temperature sensor enable
    static constexpr uint32_t CRR_VREFEN = 0x400000;  // VREFINT enable
    template<uint32_t X>
    static constexpr uint32_t CRR_CKMODE =            // ADC clock mode
        bit_field_t<16, 0x3>::value<X>();
};


////
//
//      Analog to digital converter
//
////

struct stm32f373_adc_t
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
    static constexpr uint32_t SR_STRT = 0x10; // Regular channel start flag
    static constexpr uint32_t SR_JSTRT = 0x8; // Injected channel start flag
    static constexpr uint32_t SR_JEOC = 0x4;  // Injected channel end of conversion
    static constexpr uint32_t SR_EOC = 0x2;   // Regular channel end of conversion
    static constexpr uint32_t SR_AWD = 0x1;   // Analog watchdog flag

    static constexpr uint32_t CR1_RESET_VALUE = 0x0;
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
    static constexpr uint32_t CR2_TSVREFE = 0x800000;  // Temperature sensor and VREFINT enable
    static constexpr uint32_t CR2_SWSTART = 0x400000;  // Start conversion of regular channels
    static constexpr uint32_t CR2_JSWSTART = 0x200000; // Start conversion of injected channels
    static constexpr uint32_t CR2_EXTTRIG = 0x100000;  // External trigger conversion mode for regular channels
    template<uint32_t X>
    static constexpr uint32_t CR2_EXTSEL =             // External event select for regular group
        bit_field_t<17, 0x7>::value<X>();
    static constexpr uint32_t CR2_JEXTTRIG = 0x8000;   // External trigger conversion mode for injected channels
    template<uint32_t X>
    static constexpr uint32_t CR2_JEXTSEL =            // External event select for injected group
        bit_field_t<12, 0x7>::value<X>();
    static constexpr uint32_t CR2_ALIGN = 0x800;       // Data alignment
    static constexpr uint32_t CR2_DMA = 0x100;         // Direct memory access mode
    static constexpr uint32_t CR2_RSTCAL = 0x8;        // Reset calibration
    static constexpr uint32_t CR2_CAL = 0x4;           // A/D calibration
    static constexpr uint32_t CR2_CONT = 0x2;          // Continuous conversion
    static constexpr uint32_t CR2_ADON = 0x1;          // A/D converter ON / OFF

    static constexpr uint32_t SMPR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP10 =   // Channel 10 sampling time selection
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP11 =   // Channel 11 sampling time selection
        bit_field_t<3, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP12 =   // Channel 12 sampling time selection
        bit_field_t<6, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP13 =   // Channel 13 sampling time selection
        bit_field_t<9, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP14 =   // Channel 14 sampling time selection
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP15 =   // Channel 15 sampling time selection
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP16 =   // Channel 16 sampling time selection
        bit_field_t<18, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP17 =   // Channel 17 sampling time selection
        bit_field_t<21, 0x7>::value<X>();

    static constexpr uint32_t SMPR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SMPR2_SMP0 =   // Channel 0 sampling time selection
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR2_SMP1 =   // Channel 1 sampling time selection
        bit_field_t<3, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR2_SMP2 =   // Channel 2 sampling time selection
        bit_field_t<6, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR2_SMP3 =   // Channel 3 sampling time selection
        bit_field_t<9, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR2_SMP4 =   // Channel 4 sampling time selection
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR2_SMP5 =   // Channel 5 sampling time selection
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR2_SMP6 =   // Channel 6 sampling time selection
        bit_field_t<18, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR2_SMP7 =   // Channel 7 sampling time selection
        bit_field_t<21, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR2_SMP8 =   // Channel 8 sampling time selection
        bit_field_t<24, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR2_SMP9 =   // Channel 9 sampling time selection
        bit_field_t<27, 0x7>::value<X>();

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
//      Analog-to-Digital Converter
//
////

struct stm32f302_adc1_t
{
    volatile uint32_t ISR;     // [read-write] interrupt and status register
    volatile uint32_t IER;     // [read-write] interrupt enable register
    volatile uint32_t CR;      // [read-write] control register
    volatile uint32_t CFGR;    // [read-write] configuration register
    reserved_t<0x1> _0x14;
    volatile uint32_t SMPR1;   // [read-write] sample time register 1
    volatile uint32_t SMPR2;   // [read-write] sample time register 2
    reserved_t<0x1> _0x20;
    volatile uint32_t TR1;     // [read-write] watchdog threshold register 1
    volatile uint32_t TR2;     // [read-write] watchdog threshold register
    volatile uint32_t TR3;     // [read-write] watchdog threshold register 3
    reserved_t<0x1> _0x30;
    volatile uint32_t SQR1;    // [read-write] regular sequence register 1
    volatile uint32_t SQR2;    // [read-write] regular sequence register 2
    volatile uint32_t SQR3;    // [read-write] regular sequence register 3
    volatile uint32_t SQR4;    // [read-write] regular sequence register 4
    volatile uint32_t DR;      // [read-only] regular Data Register
    reserved_t<0x2> _0x4c;
    volatile uint32_t JSQR;    // [read-write] injected sequence register
    reserved_t<0x4> _0x60;
    volatile uint32_t OFR1;    // [read-write] offset register 1
    volatile uint32_t OFR2;    // [read-write] offset register 2
    volatile uint32_t OFR3;    // [read-write] offset register 3
    volatile uint32_t OFR4;    // [read-write] offset register 4
    reserved_t<0x4> _0x80;
    volatile uint32_t JDR1;    // [read-only] injected data register 1
    volatile uint32_t JDR2;    // [read-only] injected data register 2
    volatile uint32_t JDR3;    // [read-only] injected data register 3
    volatile uint32_t JDR4;    // [read-only] injected data register 4
    reserved_t<0x4> _0xa0;
    volatile uint32_t AWD2CR;  // [read-write] Analog Watchdog 2 Configuration Register
    volatile uint32_t AWD3CR;  // [read-write] Analog Watchdog 3 Configuration Register
    reserved_t<0x2> _0xb0;
    volatile uint32_t DIFSEL;  // Differential Mode Selection Register 2
    volatile uint32_t CALFACT; // [read-write] Calibration Factors

    static constexpr uint32_t ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t ISR_JQOVF = 0x400; // JQOVF
    static constexpr uint32_t ISR_AWD3 = 0x200;  // AWD3
    static constexpr uint32_t ISR_AWD2 = 0x100;  // AWD2
    static constexpr uint32_t ISR_AWD1 = 0x80;   // AWD1
    static constexpr uint32_t ISR_JEOS = 0x40;   // JEOS
    static constexpr uint32_t ISR_JEOC = 0x20;   // JEOC
    static constexpr uint32_t ISR_OVR = 0x10;    // OVR
    static constexpr uint32_t ISR_EOS = 0x8;     // EOS
    static constexpr uint32_t ISR_EOC = 0x4;     // EOC
    static constexpr uint32_t ISR_EOSMP = 0x2;   // EOSMP
    static constexpr uint32_t ISR_ADRDY = 0x1;   // ADRDY

    static constexpr uint32_t IER_RESET_VALUE = 0x0;
    static constexpr uint32_t IER_JQOVFIE = 0x400; // JQOVFIE
    static constexpr uint32_t IER_AWD3IE = 0x200;  // AWD3IE
    static constexpr uint32_t IER_AWD2IE = 0x100;  // AWD2IE
    static constexpr uint32_t IER_AWD1IE = 0x80;   // AWD1IE
    static constexpr uint32_t IER_JEOSIE = 0x40;   // JEOSIE
    static constexpr uint32_t IER_JEOCIE = 0x20;   // JEOCIE
    static constexpr uint32_t IER_OVRIE = 0x10;    // OVRIE
    static constexpr uint32_t IER_EOSIE = 0x8;     // EOSIE
    static constexpr uint32_t IER_EOCIE = 0x4;     // EOCIE
    static constexpr uint32_t IER_EOSMPIE = 0x2;   // EOSMPIE
    static constexpr uint32_t IER_ADRDYIE = 0x1;   // ADRDYIE

    static constexpr uint32_t CR_RESET_VALUE = 0x0;
    static constexpr uint32_t CR_ADCAL = 0x80000000;    // ADCAL
    static constexpr uint32_t CR_ADCALDIF = 0x40000000; // ADCALDIF
    static constexpr uint32_t CR_DEEPPWD = 0x20000000;  // DEEPPWD
    static constexpr uint32_t CR_ADVREGEN = 0x10000000; // ADVREGEN
    static constexpr uint32_t CR_JADSTP = 0x20;         // JADSTP
    static constexpr uint32_t CR_ADSTP = 0x10;          // ADSTP
    static constexpr uint32_t CR_JADSTART = 0x8;        // JADSTART
    static constexpr uint32_t CR_ADSTART = 0x4;         // ADSTART
    static constexpr uint32_t CR_ADDIS = 0x2;           // ADDIS
    static constexpr uint32_t CR_ADEN = 0x1;            // ADEN

    static constexpr uint32_t CFGR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CFGR_AWDCH1CH =           // AWDCH1CH
        bit_field_t<26, 0x1f>::value<X>();
    static constexpr uint32_t CFGR_JAUTO = 0x2000000;   // JAUTO
    static constexpr uint32_t CFGR_JAWD1EN = 0x1000000; // JAWD1EN
    static constexpr uint32_t CFGR_AWD1EN = 0x800000;   // AWD1EN
    static constexpr uint32_t CFGR_AWD1SGL = 0x400000;  // AWD1SGL
    static constexpr uint32_t CFGR_JQM = 0x200000;      // JQM
    static constexpr uint32_t CFGR_JDISCEN = 0x100000;  // JDISCEN
    template<uint32_t X>
    static constexpr uint32_t CFGR_DISCNUM =            // DISCNUM
        bit_field_t<17, 0x7>::value<X>();
    static constexpr uint32_t CFGR_DISCEN = 0x10000;    // DISCEN
    static constexpr uint32_t CFGR_AUTOFF = 0x8000;     // AUTOFF
    static constexpr uint32_t CFGR_AUTDLY = 0x4000;     // AUTDLY
    static constexpr uint32_t CFGR_CONT = 0x2000;       // CONT
    static constexpr uint32_t CFGR_OVRMOD = 0x1000;     // OVRMOD
    template<uint32_t X>
    static constexpr uint32_t CFGR_EXTEN =              // EXTEN
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFGR_EXTSEL =             // EXTSEL
        bit_field_t<6, 0xf>::value<X>();
    static constexpr uint32_t CFGR_ALIGN = 0x20;        // ALIGN
    template<uint32_t X>
    static constexpr uint32_t CFGR_RES =                // RES
        bit_field_t<3, 0x3>::value<X>();
    static constexpr uint32_t CFGR_DMACFG = 0x2;        // DMACFG
    static constexpr uint32_t CFGR_DMAEN = 0x1;         // DMAEN

    static constexpr uint32_t SMPR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP9 =   // SMP9
        bit_field_t<27, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP8 =   // SMP8
        bit_field_t<24, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP7 =   // SMP7
        bit_field_t<21, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP6 =   // SMP6
        bit_field_t<18, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP5 =   // SMP5
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP4 =   // SMP4
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP3 =   // SMP3
        bit_field_t<9, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP2 =   // SMP2
        bit_field_t<6, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP1 =   // SMP1
        bit_field_t<3, 0x7>::value<X>();

    static constexpr uint32_t SMPR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SMPR2_SMP18 =   // SMP18
        bit_field_t<24, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR2_SMP17 =   // SMP17
        bit_field_t<21, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR2_SMP16 =   // SMP16
        bit_field_t<18, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR2_SMP15 =   // SMP15
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR2_SMP14 =   // SMP14
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR2_SMP13 =   // SMP13
        bit_field_t<9, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR2_SMP12 =   // SMP12
        bit_field_t<6, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR2_SMP11 =   // SMP11
        bit_field_t<3, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR2_SMP10 =   // SMP10
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t TR1_RESET_VALUE = 0xfff0000;
    template<uint32_t X>
    static constexpr uint32_t TR1_HT1 =   // HT1
        bit_field_t<16, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TR1_LT1 =   // LT1
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t TR2_RESET_VALUE = 0xfff0000;
    template<uint32_t X>
    static constexpr uint32_t TR2_HT2 =   // HT2
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TR2_LT2 =   // LT2
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t TR3_RESET_VALUE = 0xfff0000;
    template<uint32_t X>
    static constexpr uint32_t TR3_HT3 =   // HT3
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TR3_LT3 =   // LT3
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t SQR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SQR1_SQ4 =   // SQ4
        bit_field_t<24, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR1_SQ3 =   // SQ3
        bit_field_t<18, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR1_SQ2 =   // SQ2
        bit_field_t<12, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR1_SQ1 =   // SQ1
        bit_field_t<6, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR1_L3 =    // L3
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t SQR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SQR2_SQ9 =   // SQ9
        bit_field_t<24, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR2_SQ8 =   // SQ8
        bit_field_t<18, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR2_SQ7 =   // SQ7
        bit_field_t<12, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR2_SQ6 =   // SQ6
        bit_field_t<6, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR2_SQ5 =   // SQ5
        bit_field_t<0, 0x1f>::value<X>();

    static constexpr uint32_t SQR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SQR3_SQ14 =   // SQ14
        bit_field_t<24, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR3_SQ13 =   // SQ13
        bit_field_t<18, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR3_SQ12 =   // SQ12
        bit_field_t<12, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR3_SQ11 =   // SQ11
        bit_field_t<6, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR3_SQ10 =   // SQ10
        bit_field_t<0, 0x1f>::value<X>();

    static constexpr uint32_t SQR4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SQR4_SQ16 =   // SQ16
        bit_field_t<6, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR4_SQ15 =   // SQ15
        bit_field_t<0, 0x1f>::value<X>();

    static constexpr uint32_t DR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DR_regularDATA =   // regularDATA
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t JSQR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t JSQR_JSQ4 =      // JSQ4
        bit_field_t<26, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t JSQR_JSQ3 =      // JSQ3
        bit_field_t<20, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t JSQR_JSQ2 =      // JSQ2
        bit_field_t<14, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t JSQR_JSQ1 =      // JSQ1
        bit_field_t<8, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t JSQR_JEXTEN =    // JEXTEN
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t JSQR_JEXTSEL =   // JEXTSEL
        bit_field_t<2, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t JSQR_JL =        // JL
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t OFR1_RESET_VALUE = 0x0;
    static constexpr uint32_t OFR1_OFFSET1_EN = 0x80000000; // OFFSET1_EN
    template<uint32_t X>
    static constexpr uint32_t OFR1_OFFSET1_CH =             // OFFSET1_CH
        bit_field_t<26, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OFR1_OFFSET1 =                // OFFSET1
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t OFR2_RESET_VALUE = 0x0;
    static constexpr uint32_t OFR2_OFFSET2_EN = 0x80000000; // OFFSET2_EN
    template<uint32_t X>
    static constexpr uint32_t OFR2_OFFSET2_CH =             // OFFSET2_CH
        bit_field_t<26, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OFR2_OFFSET2 =                // OFFSET2
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t OFR3_RESET_VALUE = 0x0;
    static constexpr uint32_t OFR3_OFFSET3_EN = 0x80000000; // OFFSET3_EN
    template<uint32_t X>
    static constexpr uint32_t OFR3_OFFSET3_CH =             // OFFSET3_CH
        bit_field_t<26, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OFR3_OFFSET3 =                // OFFSET3
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t OFR4_RESET_VALUE = 0x0;
    static constexpr uint32_t OFR4_OFFSET4_EN = 0x80000000; // OFFSET4_EN
    template<uint32_t X>
    static constexpr uint32_t OFR4_OFFSET4_CH =             // OFFSET4_CH
        bit_field_t<26, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OFR4_OFFSET4 =                // OFFSET4
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t JDR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t JDR1_JDATA1 =   // JDATA1
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t JDR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t JDR2_JDATA2 =   // JDATA2
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t JDR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t JDR3_JDATA3 =   // JDATA3
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t JDR4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t JDR4_JDATA4 =   // JDATA4
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t AWD2CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t AWD2CR_AWD2CH =   // AWD2CH
        bit_field_t<1, 0x3ffff>::value<X>();

    static constexpr uint32_t AWD3CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t AWD3CR_AWD3CH =   // AWD3CH
        bit_field_t<1, 0x3ffff>::value<X>();

    static constexpr uint32_t DIFSEL_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DIFSEL_DIFSEL_1_15 =    // Differential mode for channels 15 to 1
        bit_field_t<1, 0x7fff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DIFSEL_DIFSEL_16_18 =   // Differential mode for channels 18 to 16
        bit_field_t<16, 0x7>::value<X>();

    static constexpr uint32_t CALFACT_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CALFACT_CALFACT_D =   // CALFACT_D
        bit_field_t<16, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CALFACT_CALFACT_S =   // CALFACT_S
        bit_field_t<0, 0x7f>::value<X>();
};


////
//
//      Analog-to-Digital Converter
//
////

struct stm32f303_adc1_t
{
    volatile uint32_t ISR;     // [read-write] interrupt and status register
    volatile uint32_t IER;     // [read-write] interrupt enable register
    volatile uint32_t CR;      // [read-write] control register
    volatile uint32_t CFGR;    // [read-write] configuration register
    reserved_t<0x1> _0x14;
    volatile uint32_t SMPR1;   // [read-write] sample time register 1
    volatile uint32_t SMPR2;   // [read-write] sample time register 2
    reserved_t<0x1> _0x20;
    volatile uint32_t TR1;     // [read-write] watchdog threshold register 1
    volatile uint32_t TR2;     // [read-write] watchdog threshold register
    volatile uint32_t TR3;     // [read-write] watchdog threshold register 3
    reserved_t<0x1> _0x30;
    volatile uint32_t SQR1;    // [read-write] regular sequence register 1
    volatile uint32_t SQR2;    // [read-write] regular sequence register 2
    volatile uint32_t SQR3;    // [read-write] regular sequence register 3
    volatile uint32_t SQR4;    // [read-write] regular sequence register 4
    volatile uint32_t DR;      // [read-only] regular Data Register
    reserved_t<0x2> _0x4c;
    volatile uint32_t JSQR;    // [read-write] injected sequence register
    reserved_t<0x4> _0x60;
    volatile uint32_t OFR1;    // [read-write] offset register 1
    volatile uint32_t OFR2;    // [read-write] offset register 2
    volatile uint32_t OFR3;    // [read-write] offset register 3
    volatile uint32_t OFR4;    // [read-write] offset register 4
    reserved_t<0x4> _0x80;
    volatile uint32_t JDR1;    // [read-only] injected data register 1
    volatile uint32_t JDR2;    // [read-only] injected data register 2
    volatile uint32_t JDR3;    // [read-only] injected data register 3
    volatile uint32_t JDR4;    // [read-only] injected data register 4
    reserved_t<0x4> _0xa0;
    volatile uint32_t AWD2CR;  // [read-write] Analog Watchdog 2 Configuration Register
    volatile uint32_t AWD3CR;  // [read-write] Analog Watchdog 3 Configuration Register
    reserved_t<0x2> _0xb0;
    volatile uint32_t DIFSEL;  // Differential Mode Selection Register 2
    volatile uint32_t CALFACT; // [read-write] Calibration Factors

    static constexpr uint32_t ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t ISR_JQOVF = 0x400; // JQOVF
    static constexpr uint32_t ISR_AWD3 = 0x200;  // AWD3
    static constexpr uint32_t ISR_AWD2 = 0x100;  // AWD2
    static constexpr uint32_t ISR_AWD1 = 0x80;   // AWD1
    static constexpr uint32_t ISR_JEOS = 0x40;   // JEOS
    static constexpr uint32_t ISR_JEOC = 0x20;   // JEOC
    static constexpr uint32_t ISR_OVR = 0x10;    // OVR
    static constexpr uint32_t ISR_EOS = 0x8;     // EOS
    static constexpr uint32_t ISR_EOC = 0x4;     // EOC
    static constexpr uint32_t ISR_EOSMP = 0x2;   // EOSMP
    static constexpr uint32_t ISR_ADRDY = 0x1;   // ADRDY

    static constexpr uint32_t IER_RESET_VALUE = 0x0;
    static constexpr uint32_t IER_JQOVFIE = 0x400; // JQOVFIE
    static constexpr uint32_t IER_AWD3IE = 0x200;  // AWD3IE
    static constexpr uint32_t IER_AWD2IE = 0x100;  // AWD2IE
    static constexpr uint32_t IER_AWD1IE = 0x80;   // AWD1IE
    static constexpr uint32_t IER_JEOSIE = 0x40;   // JEOSIE
    static constexpr uint32_t IER_JEOCIE = 0x20;   // JEOCIE
    static constexpr uint32_t IER_OVRIE = 0x10;    // OVRIE
    static constexpr uint32_t IER_EOSIE = 0x8;     // EOSIE
    static constexpr uint32_t IER_EOCIE = 0x4;     // EOCIE
    static constexpr uint32_t IER_EOSMPIE = 0x2;   // EOSMPIE
    static constexpr uint32_t IER_ADRDYIE = 0x1;   // ADRDYIE

    static constexpr uint32_t CR_RESET_VALUE = 0x0;
    static constexpr uint32_t CR_ADCAL = 0x80000000;    // ADCAL
    static constexpr uint32_t CR_ADCALDIF = 0x40000000; // ADCALDIF
    template<uint32_t X>
    static constexpr uint32_t CR_ADVREGEN =             // ADVREGEN
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t CR_JADSTP = 0x20;         // JADSTP
    static constexpr uint32_t CR_ADSTP = 0x10;          // ADSTP
    static constexpr uint32_t CR_JADSTART = 0x8;        // JADSTART
    static constexpr uint32_t CR_ADSTART = 0x4;         // ADSTART
    static constexpr uint32_t CR_ADDIS = 0x2;           // ADDIS
    static constexpr uint32_t CR_ADEN = 0x1;            // ADEN

    static constexpr uint32_t CFGR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CFGR_AWDCH1CH =           // AWDCH1CH
        bit_field_t<26, 0x1f>::value<X>();
    static constexpr uint32_t CFGR_JAUTO = 0x2000000;   // JAUTO
    static constexpr uint32_t CFGR_JAWD1EN = 0x1000000; // JAWD1EN
    static constexpr uint32_t CFGR_AWD1EN = 0x800000;   // AWD1EN
    static constexpr uint32_t CFGR_AWD1SGL = 0x400000;  // AWD1SGL
    static constexpr uint32_t CFGR_JQM = 0x200000;      // JQM
    static constexpr uint32_t CFGR_JDISCEN = 0x100000;  // JDISCEN
    template<uint32_t X>
    static constexpr uint32_t CFGR_DISCNUM =            // DISCNUM
        bit_field_t<17, 0x7>::value<X>();
    static constexpr uint32_t CFGR_DISCEN = 0x10000;    // DISCEN
    static constexpr uint32_t CFGR_AUTDLY = 0x4000;     // AUTDLY
    static constexpr uint32_t CFGR_CONT = 0x2000;       // CONT
    static constexpr uint32_t CFGR_OVRMOD = 0x1000;     // OVRMOD
    template<uint32_t X>
    static constexpr uint32_t CFGR_EXTEN =              // EXTEN
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFGR_EXTSEL =             // EXTSEL
        bit_field_t<6, 0xf>::value<X>();
    static constexpr uint32_t CFGR_ALIGN = 0x20;        // ALIGN
    template<uint32_t X>
    static constexpr uint32_t CFGR_RES =                // RES
        bit_field_t<3, 0x3>::value<X>();
    static constexpr uint32_t CFGR_DMACFG = 0x2;        // DMACFG
    static constexpr uint32_t CFGR_DMAEN = 0x1;         // DMAEN

    static constexpr uint32_t SMPR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP9 =   // SMP9
        bit_field_t<27, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP8 =   // SMP8
        bit_field_t<24, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP7 =   // SMP7
        bit_field_t<21, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP6 =   // SMP6
        bit_field_t<18, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP5 =   // SMP5
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP4 =   // SMP4
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP3 =   // SMP3
        bit_field_t<9, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP2 =   // SMP2
        bit_field_t<6, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP1 =   // SMP1
        bit_field_t<3, 0x7>::value<X>();

    static constexpr uint32_t SMPR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SMPR2_SMP18 =   // SMP18
        bit_field_t<24, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR2_SMP17 =   // SMP17
        bit_field_t<21, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR2_SMP16 =   // SMP16
        bit_field_t<18, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR2_SMP15 =   // SMP15
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR2_SMP14 =   // SMP14
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR2_SMP13 =   // SMP13
        bit_field_t<9, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR2_SMP12 =   // SMP12
        bit_field_t<6, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR2_SMP11 =   // SMP11
        bit_field_t<3, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR2_SMP10 =   // SMP10
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t TR1_RESET_VALUE = 0xfff0000;
    template<uint32_t X>
    static constexpr uint32_t TR1_HT1 =   // HT1
        bit_field_t<16, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TR1_LT1 =   // LT1
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t TR2_RESET_VALUE = 0xfff0000;
    template<uint32_t X>
    static constexpr uint32_t TR2_HT2 =   // HT2
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TR2_LT2 =   // LT2
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t TR3_RESET_VALUE = 0xfff0000;
    template<uint32_t X>
    static constexpr uint32_t TR3_HT3 =   // HT3
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TR3_LT3 =   // LT3
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t SQR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SQR1_SQ4 =   // SQ4
        bit_field_t<24, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR1_SQ3 =   // SQ3
        bit_field_t<18, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR1_SQ2 =   // SQ2
        bit_field_t<12, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR1_SQ1 =   // SQ1
        bit_field_t<6, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR1_L3 =    // L3
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t SQR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SQR2_SQ9 =   // SQ9
        bit_field_t<24, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR2_SQ8 =   // SQ8
        bit_field_t<18, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR2_SQ7 =   // SQ7
        bit_field_t<12, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR2_SQ6 =   // SQ6
        bit_field_t<6, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR2_SQ5 =   // SQ5
        bit_field_t<0, 0x1f>::value<X>();

    static constexpr uint32_t SQR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SQR3_SQ14 =   // SQ14
        bit_field_t<24, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR3_SQ13 =   // SQ13
        bit_field_t<18, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR3_SQ12 =   // SQ12
        bit_field_t<12, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR3_SQ11 =   // SQ11
        bit_field_t<6, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR3_SQ10 =   // SQ10
        bit_field_t<0, 0x1f>::value<X>();

    static constexpr uint32_t SQR4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SQR4_SQ16 =   // SQ16
        bit_field_t<6, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SQR4_SQ15 =   // SQ15
        bit_field_t<0, 0x1f>::value<X>();

    static constexpr uint32_t DR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DR_regularDATA =   // regularDATA
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t JSQR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t JSQR_JSQ4 =      // JSQ4
        bit_field_t<26, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t JSQR_JSQ3 =      // JSQ3
        bit_field_t<20, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t JSQR_JSQ2 =      // JSQ2
        bit_field_t<14, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t JSQR_JSQ1 =      // JSQ1
        bit_field_t<8, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t JSQR_JEXTEN =    // JEXTEN
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t JSQR_JEXTSEL =   // JEXTSEL
        bit_field_t<2, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t JSQR_JL =        // JL
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t OFR1_RESET_VALUE = 0x0;
    static constexpr uint32_t OFR1_OFFSET1_EN = 0x80000000; // OFFSET1_EN
    template<uint32_t X>
    static constexpr uint32_t OFR1_OFFSET1_CH =             // OFFSET1_CH
        bit_field_t<26, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OFR1_OFFSET1 =                // OFFSET1
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t OFR2_RESET_VALUE = 0x0;
    static constexpr uint32_t OFR2_OFFSET2_EN = 0x80000000; // OFFSET2_EN
    template<uint32_t X>
    static constexpr uint32_t OFR2_OFFSET2_CH =             // OFFSET2_CH
        bit_field_t<26, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OFR2_OFFSET2 =                // OFFSET2
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t OFR3_RESET_VALUE = 0x0;
    static constexpr uint32_t OFR3_OFFSET3_EN = 0x80000000; // OFFSET3_EN
    template<uint32_t X>
    static constexpr uint32_t OFR3_OFFSET3_CH =             // OFFSET3_CH
        bit_field_t<26, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OFR3_OFFSET3 =                // OFFSET3
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t OFR4_RESET_VALUE = 0x0;
    static constexpr uint32_t OFR4_OFFSET4_EN = 0x80000000; // OFFSET4_EN
    template<uint32_t X>
    static constexpr uint32_t OFR4_OFFSET4_CH =             // OFFSET4_CH
        bit_field_t<26, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OFR4_OFFSET4 =                // OFFSET4
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t JDR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t JDR1_JDATA1 =   // JDATA1
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t JDR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t JDR2_JDATA2 =   // JDATA2
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t JDR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t JDR3_JDATA3 =   // JDATA3
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t JDR4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t JDR4_JDATA4 =   // JDATA4
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t AWD2CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t AWD2CR_AWD2CH =   // AWD2CH
        bit_field_t<1, 0x3ffff>::value<X>();

    static constexpr uint32_t AWD3CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t AWD3CR_AWD3CH =   // AWD3CH
        bit_field_t<1, 0x3ffff>::value<X>();

    static constexpr uint32_t DIFSEL_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DIFSEL_DIFSEL_1_15 =    // Differential mode for channels 15 to 1
        bit_field_t<1, 0x7fff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DIFSEL_DIFSEL_16_18 =   // Differential mode for channels 18 to 16
        bit_field_t<16, 0x7>::value<X>();

    static constexpr uint32_t CALFACT_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CALFACT_CALFACT_D =   // CALFACT_D
        bit_field_t<16, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CALFACT_CALFACT_S =   // CALFACT_S
        bit_field_t<0, 0x7f>::value<X>();
};


////
//
//      Analog-to-Digital Converter
//
////

struct stm32f302_adc1_2_t
{
    volatile uint32_t CSR; // [read-only] ADC Common status register
    reserved_t<0x1> _0x8;
    volatile uint32_t CCR; // [read-write] ADC common control register
    volatile uint32_t CDR; // [read-only] ADC common regular data register for dual and triple modes

    static constexpr uint32_t CSR_RESET_VALUE = 0x0;
    static constexpr uint32_t CSR_ADDRDY_MST = 0x1;      // ADDRDY_MST
    static constexpr uint32_t CSR_EOSMP_MST = 0x2;       // EOSMP_MST
    static constexpr uint32_t CSR_EOC_MST = 0x4;         // EOC_MST
    static constexpr uint32_t CSR_EOS_MST = 0x8;         // EOS_MST
    static constexpr uint32_t CSR_OVR_MST = 0x10;        // OVR_MST
    static constexpr uint32_t CSR_JEOC_MST = 0x20;       // JEOC_MST
    static constexpr uint32_t CSR_JEOS_MST = 0x40;       // JEOS_MST
    static constexpr uint32_t CSR_AWD1_MST = 0x80;       // AWD1_MST
    static constexpr uint32_t CSR_AWD2_MST = 0x100;      // AWD2_MST
    static constexpr uint32_t CSR_AWD3_MST = 0x200;      // AWD3_MST
    static constexpr uint32_t CSR_JQOVF_MST = 0x400;     // JQOVF_MST
    static constexpr uint32_t CSR_ADRDY_SLV = 0x10000;   // ADRDY_SLV
    static constexpr uint32_t CSR_EOSMP_SLV = 0x20000;   // EOSMP_SLV
    static constexpr uint32_t CSR_EOC_SLV = 0x40000;     // End of regular conversion of the slave ADC
    static constexpr uint32_t CSR_EOS_SLV = 0x80000;     // End of regular sequence flag of the slave ADC
    static constexpr uint32_t CSR_OVR_SLV = 0x100000;    // Overrun flag of the slave ADC
    static constexpr uint32_t CSR_JEOC_SLV = 0x200000;   // End of injected conversion flag of the slave ADC
    static constexpr uint32_t CSR_JEOS_SLV = 0x400000;   // End of injected sequence flag of the slave ADC
    static constexpr uint32_t CSR_AWD1_SLV = 0x800000;   // Analog watchdog 1 flag of the slave ADC
    static constexpr uint32_t CSR_AWD2_SLV = 0x1000000;  // Analog watchdog 2 flag of the slave ADC
    static constexpr uint32_t CSR_AWD3_SLV = 0x2000000;  // Analog watchdog 3 flag of the slave ADC
    static constexpr uint32_t CSR_JQOVF_SLV = 0x4000000; // Injected Context Queue Overflow flag of the slave ADC

    static constexpr uint32_t CCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCR_MULT =              // Multi ADC mode selection
        bit_field_t<0, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR_DELAY =             // Delay between 2 sampling phases
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t CCR_DMACFG = 0x2000;    // DMA configuration (for multi-ADC mode)
    template<uint32_t X>
    static constexpr uint32_t CCR_MDMA =              // Direct memory access mode for multi ADC mode
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR_CKMODE =            // ADC clock mode
        bit_field_t<16, 0x3>::value<X>();
    static constexpr uint32_t CCR_VREFEN = 0x400000;  // VREFINT enable
    static constexpr uint32_t CCR_TSEN = 0x800000;    // Temperature sensor enable
    static constexpr uint32_t CCR_VBATEN = 0x1000000; // VBAT enable

    static constexpr uint32_t CDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CDR_RDATA_SLV =   // Regular data of the slave ADC
        bit_field_t<16, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CDR_RDATA_MST =   // Regular data of the master ADC
        bit_field_t<0, 0xffff>::value<X>();
};


template<>
struct peripheral_t<STM32F301, ADC>
{
    typedef stm32f301_adc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F302, ADC1>
{
    typedef stm32f302_adc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F302, ADC2>
{
    typedef stm32f302_adc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F302, ADC3>
{
    typedef stm32f302_adc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F302, ADC4>
{
    typedef stm32f302_adc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F3x4, ADC1>
{
    typedef stm32f302_adc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F3x4, ADC2>
{
    typedef stm32f302_adc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F3x8, ADC2>
{
    typedef stm32f302_adc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F302, ADC1_2>
{
    typedef stm32f302_adc1_2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F302, ADC3_4>
{
    typedef stm32f302_adc1_2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F303, ADC1_2>
{
    typedef stm32f302_adc1_2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F303, ADC3_4>
{
    typedef stm32f302_adc1_2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F303, ADC1>
{
    typedef stm32f303_adc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F303, ADC2>
{
    typedef stm32f303_adc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F303, ADC3>
{
    typedef stm32f303_adc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F303, ADC4>
{
    typedef stm32f303_adc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F373, ADC>
{
    typedef stm32f373_adc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F3x8, ADC1>
{
    typedef stm32f373_adc_t T;
    static T& V;
};

using adc_t = peripheral_t<mcu_svd, ADC>;
using adc1_t = peripheral_t<mcu_svd, ADC1>;
using adc1_2_t = peripheral_t<mcu_svd, ADC1_2>;
using adc2_t = peripheral_t<mcu_svd, ADC2>;
using adc3_t = peripheral_t<mcu_svd, ADC3>;
using adc3_4_t = peripheral_t<mcu_svd, ADC3_4>;
using adc4_t = peripheral_t<mcu_svd, ADC4>;

