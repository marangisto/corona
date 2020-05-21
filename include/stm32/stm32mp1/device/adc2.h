#pragma once

////
//
//      STM32MP1 ADC2 peripherals
//
////

////
//
//      ADC2
//
////

struct stm32mp15xxx_adc2_t
{
    volatile uint32_t ADC_ISR;      // [read-write] ADC interrupt and status register
    volatile uint32_t ADC_IER;      // [read-write] ADC interrupt enable register
    volatile uint32_t ADC_CR;       // [read-write] ADC control register
    volatile uint32_t ADC_CFGR;     // [read-write] ADC configuration register
    volatile uint32_t ADC_CFGR2;    // [read-write] ADC configuration register 2
    volatile uint32_t ADC_SMPR1;    // [read-write] ADC sample time register 1
    volatile uint32_t ADC_SMPR2;    // [read-write] ADC sample time register 2
    volatile uint32_t ADC_PCSEL;    // [read-write] ADC channel preselection register
    volatile uint32_t ADC_LTR1;     // [read-write] ADC watchdog threshold register 1
    volatile uint32_t ADC_HTR1;     // [read-write] ADC watchdog threshold register 1
    reserved_t<0x2> _0x30;
    volatile uint32_t ADC_SQR1;     // [read-write] ADC regular sequence register 1
    volatile uint32_t ADC_SQR2;     // [read-write] ADC regular sequence register 2
    volatile uint32_t ADC_SQR3;     // [read-write] ADC regular sequence register 3
    volatile uint32_t ADC_SQR4;     // [read-write] ADC regular sequence register 4
    volatile uint32_t ADC_DR;       // [read-only] ADC regular Data Register
    reserved_t<0x2> _0x4c;
    volatile uint32_t ADC_JSQR;     // [read-write] ADC injected sequence register
    reserved_t<0x4> _0x60;
    volatile uint32_t ADC_OFR1;     // [read-write] ADC offset register
    volatile uint32_t ADC_OFR2;     // [read-write] ADC offset register
    volatile uint32_t ADC_OFR3;     // [read-write] ADC offset register
    volatile uint32_t ADC_OFR4;     // [read-write] ADC offset register
    reserved_t<0x4> _0x80;
    volatile uint32_t ADC_JDR1;     // [read-only] ADC injected data register
    volatile uint32_t ADC_JDR2;     // [read-only] ADC injected data register
    volatile uint32_t ADC_JDR3;     // [read-only] ADC injected data register
    volatile uint32_t ADC_JDR4;     // [read-only] ADC injected data register
    reserved_t<0x4> _0xa0;
    volatile uint32_t ADC_AWD2CR;   // [read-write] ADC analog watchdog 2 configuration register
    volatile uint32_t ADC_AWD3CR;   // [read-write] ADC analog watchdog 3 configuration register
    reserved_t<0x2> _0xb0;
    volatile uint32_t ADC_LTR2;     // [read-write] ADC watchdog lower threshold register 2
    volatile uint32_t ADC_HTR2;     // [read-write] ADC watchdog higher threshold register 2
    volatile uint32_t ADC_LTR3;     // [read-write] ADC watchdog lower threshold register 3
    volatile uint32_t ADC_HTR3;     // [read-write] ADC watchdog higher threshold register 3
    volatile uint32_t ADC_DIFSEL;   // [read-write] ADC differential mode selection register
    volatile uint32_t ADC_CALFACT;  // [read-write] ADC calibration factors register
    volatile uint32_t ADC_CALFACT2; // [read-write] ADC calibration factor register 2
    reserved_t<0x1> _0xd0;
    volatile uint32_t ADC2_OR;      // [read-write] ADC2 option register

    static constexpr uint32_t ADC_ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t ADC_ISR_ADRDY = 0x1;   // ADRDY
    static constexpr uint32_t ADC_ISR_EOSMP = 0x2;   // EOSMP
    static constexpr uint32_t ADC_ISR_EOC = 0x4;     // EOC
    static constexpr uint32_t ADC_ISR_EOS = 0x8;     // EOS
    static constexpr uint32_t ADC_ISR_OVR = 0x10;    // OVR
    static constexpr uint32_t ADC_ISR_JEOC = 0x20;   // JEOC
    static constexpr uint32_t ADC_ISR_JEOS = 0x40;   // JEOS
    static constexpr uint32_t ADC_ISR_AWD1 = 0x80;   // AWD1
    static constexpr uint32_t ADC_ISR_AWD2 = 0x100;  // AWD2
    static constexpr uint32_t ADC_ISR_AWD3 = 0x200;  // AWD3
    static constexpr uint32_t ADC_ISR_JQOVF = 0x400; // JQOVF

    static constexpr uint32_t ADC_IER_RESET_VALUE = 0x0;
    static constexpr uint32_t ADC_IER_ADRDYIE = 0x1;   // ADRDYIE
    static constexpr uint32_t ADC_IER_EOSMPIE = 0x2;   // EOSMPIE
    static constexpr uint32_t ADC_IER_EOCIE = 0x4;     // EOCIE
    static constexpr uint32_t ADC_IER_EOSIE = 0x8;     // EOSIE
    static constexpr uint32_t ADC_IER_OVRIE = 0x10;    // OVRIE
    static constexpr uint32_t ADC_IER_JEOCIE = 0x20;   // JEOCIE
    static constexpr uint32_t ADC_IER_JEOSIE = 0x40;   // JEOSIE
    static constexpr uint32_t ADC_IER_AWD1IE = 0x80;   // AWD1IE
    static constexpr uint32_t ADC_IER_AWD2IE = 0x100;  // AWD2IE
    static constexpr uint32_t ADC_IER_AWD3IE = 0x200;  // AWD3IE
    static constexpr uint32_t ADC_IER_JQOVFIE = 0x400; // JQOVFIE

    static constexpr uint32_t ADC_CR_RESET_VALUE = 0x20000000;
    static constexpr uint32_t ADC_CR_ADEN = 0x1;              // ADEN
    static constexpr uint32_t ADC_CR_ADDIS = 0x2;             // ADDIS
    static constexpr uint32_t ADC_CR_ADSTART = 0x4;           // ADSTART
    static constexpr uint32_t ADC_CR_JADSTART = 0x8;          // JADSTART
    static constexpr uint32_t ADC_CR_ADSTP = 0x10;            // ADSTP
    static constexpr uint32_t ADC_CR_JADSTP = 0x20;           // JADSTP
    static constexpr uint32_t ADC_CR_BOOST = 0x100;           // BOOST
    static constexpr uint32_t ADC_CR_ADCALLIN = 0x10000;      // ADCALLIN
    static constexpr uint32_t ADC_CR_LINCALRDYW1 = 0x400000;  // LINCALRDYW1
    static constexpr uint32_t ADC_CR_LINCALRDYW2 = 0x800000;  // LINCALRDYW2
    static constexpr uint32_t ADC_CR_LINCALRDYW3 = 0x1000000; // LINCALRDYW3
    static constexpr uint32_t ADC_CR_LINCALRDYW4 = 0x2000000; // LINCALRDYW4
    static constexpr uint32_t ADC_CR_LINCALRDYW5 = 0x4000000; // LINCALRDYW5
    static constexpr uint32_t ADC_CR_LINCALRDYW6 = 0x8000000; // LINCALRDYW6
    static constexpr uint32_t ADC_CR_ADVREGEN = 0x10000000;   // ADVREGEN
    static constexpr uint32_t ADC_CR_DEEPPWD = 0x20000000;    // DEEPPWD
    static constexpr uint32_t ADC_CR_ADCALDIF = 0x40000000;   // ADCALDIF
    static constexpr uint32_t ADC_CR_ADCAL = 0x80000000;      // ADCAL

    static constexpr uint32_t ADC_CFGR_RESET_VALUE = 0x80000000;
    template<uint32_t X>
    static constexpr uint32_t ADC_CFGR_DMNGT =              // DMNGT
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADC_CFGR_RES =                // RES
        bit_field_t<2, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADC_CFGR_EXTSEL =             // EXTSEL
        bit_field_t<5, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADC_CFGR_EXTEN =              // EXTEN
        bit_field_t<10, 0x3>::value<X>();
    static constexpr uint32_t ADC_CFGR_OVRMOD = 0x1000;     // OVRMOD
    static constexpr uint32_t ADC_CFGR_CONT = 0x2000;       // CONT
    static constexpr uint32_t ADC_CFGR_AUTDLY = 0x4000;     // AUTDLY
    static constexpr uint32_t ADC_CFGR_DISCEN = 0x10000;    // DISCEN
    template<uint32_t X>
    static constexpr uint32_t ADC_CFGR_DISCNUM =            // DISCNUM
        bit_field_t<17, 0x7>::value<X>();
    static constexpr uint32_t ADC_CFGR_JDISCEN = 0x100000;  // JDISCEN
    static constexpr uint32_t ADC_CFGR_JQM = 0x200000;      // JQM
    static constexpr uint32_t ADC_CFGR_AWD1SGL = 0x400000;  // AWD1SGL
    static constexpr uint32_t ADC_CFGR_AWD1EN = 0x800000;   // AWD1EN
    static constexpr uint32_t ADC_CFGR_JAWD1EN = 0x1000000; // JAWD1EN
    static constexpr uint32_t ADC_CFGR_JAUTO = 0x2000000;   // JAUTO
    template<uint32_t X>
    static constexpr uint32_t ADC_CFGR_AWD1CH =             // AWD1CH
        bit_field_t<26, 0x1f>::value<X>();
    static constexpr uint32_t ADC_CFGR_JQDIS = 0x80000000;  // JQDIS

    static constexpr uint32_t ADC_CFGR2_RESET_VALUE = 0x0;
    static constexpr uint32_t ADC_CFGR2_ROVSE = 0x1;      // ROVSE
    static constexpr uint32_t ADC_CFGR2_JOVSE = 0x2;      // JOVSE
    template<uint32_t X>
    static constexpr uint32_t ADC_CFGR2_OVSS =            // OVSS
        bit_field_t<5, 0xf>::value<X>();
    static constexpr uint32_t ADC_CFGR2_TROVS = 0x200;    // TROVS
    static constexpr uint32_t ADC_CFGR2_ROVSM = 0x400;    // ROVSM
    static constexpr uint32_t ADC_CFGR2_RSHIFT1 = 0x800;  // RSHIFT1
    static constexpr uint32_t ADC_CFGR2_RSHIFT2 = 0x1000; // RSHIFT2
    static constexpr uint32_t ADC_CFGR2_RSHIFT3 = 0x2000; // RSHIFT3
    static constexpr uint32_t ADC_CFGR2_RSHIFT4 = 0x4000; // RSHIFT4
    template<uint32_t X>
    static constexpr uint32_t ADC_CFGR2_OSVR =            // OSVR
        bit_field_t<16, 0x3ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADC_CFGR2_LSHIFT =          // LSHIFT
        bit_field_t<28, 0xf>::value<X>();

    static constexpr uint32_t ADC_SMPR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ADC_SMPR1_SMP0 =   // SMP0
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADC_SMPR1_SMP1 =   // SMP1
        bit_field_t<3, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADC_SMPR1_SMP2 =   // SMP2
        bit_field_t<6, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADC_SMPR1_SMP3 =   // SMP3
        bit_field_t<9, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADC_SMPR1_SMP4 =   // SMP4
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADC_SMPR1_SMP5 =   // SMP5
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADC_SMPR1_SMP6 =   // SMP6
        bit_field_t<18, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADC_SMPR1_SMP7 =   // SMP7
        bit_field_t<21, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADC_SMPR1_SMP8 =   // SMP8
        bit_field_t<24, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADC_SMPR1_SMP9 =   // SMP9
        bit_field_t<27, 0x7>::value<X>();

    static constexpr uint32_t ADC_SMPR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ADC_SMPR2_SMP10 =   // SMP10
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADC_SMPR2_SMP11 =   // SMP11
        bit_field_t<3, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADC_SMPR2_SMP12 =   // SMP12
        bit_field_t<6, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADC_SMPR2_SMP13 =   // SMP13
        bit_field_t<9, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADC_SMPR2_SMP14 =   // SMP14
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADC_SMPR2_SMP15 =   // SMP15
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADC_SMPR2_SMP16 =   // SMP16
        bit_field_t<18, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADC_SMPR2_SMP17 =   // SMP17
        bit_field_t<21, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADC_SMPR2_SMP18 =   // SMP18
        bit_field_t<24, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADC_SMPR2_SMP19 =   // SMP19
        bit_field_t<27, 0x7>::value<X>();

    static constexpr uint32_t ADC_PCSEL_RESET_VALUE = 0x0;
    static constexpr uint32_t ADC_PCSEL_PCSEL0 = 0x1;      // PCSEL0
    static constexpr uint32_t ADC_PCSEL_PCSEL1 = 0x2;      // PCSEL1
    static constexpr uint32_t ADC_PCSEL_PCSEL2 = 0x4;      // PCSEL2
    static constexpr uint32_t ADC_PCSEL_PCSEL3 = 0x8;      // PCSEL3
    static constexpr uint32_t ADC_PCSEL_PCSEL4 = 0x10;     // PCSEL4
    static constexpr uint32_t ADC_PCSEL_PCSEL5 = 0x20;     // PCSEL5
    static constexpr uint32_t ADC_PCSEL_PCSEL6 = 0x40;     // PCSEL6
    static constexpr uint32_t ADC_PCSEL_PCSEL7 = 0x80;     // PCSEL7
    static constexpr uint32_t ADC_PCSEL_PCSEL8 = 0x100;    // PCSEL8
    static constexpr uint32_t ADC_PCSEL_PCSEL9 = 0x200;    // PCSEL9
    static constexpr uint32_t ADC_PCSEL_PCSEL10 = 0x400;   // PCSEL10
    static constexpr uint32_t ADC_PCSEL_PCSEL11 = 0x800;   // PCSEL11
    static constexpr uint32_t ADC_PCSEL_PCSEL12 = 0x1000;  // PCSEL12
    static constexpr uint32_t ADC_PCSEL_PCSEL13 = 0x2000;  // PCSEL13
    static constexpr uint32_t ADC_PCSEL_PCSEL14 = 0x4000;  // PCSEL14
    static constexpr uint32_t ADC_PCSEL_PCSEL15 = 0x8000;  // PCSEL15
    static constexpr uint32_t ADC_PCSEL_PCSEL16 = 0x10000; // PCSEL16
    static constexpr uint32_t ADC_PCSEL_PCSEL17 = 0x20000; // PCSEL17
    static constexpr uint32_t ADC_PCSEL_PCSEL18 = 0x40000; // PCSEL18
    static constexpr uint32_t ADC_PCSEL_PCSEL19 = 0x80000; // PCSEL19

    static constexpr uint32_t ADC_LTR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ADC_LTR1_LTR1 =   // LTR1
        bit_field_t<0, 0x3ffffff>::value<X>();

    static constexpr uint32_t ADC_HTR1_RESET_VALUE = 0x3ffffff;
    template<uint32_t X>
    static constexpr uint32_t ADC_HTR1_HTR1 =   // HTR1
        bit_field_t<0, 0x3ffffff>::value<X>();

    static constexpr uint32_t ADC_SQR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ADC_SQR1_L =     // L
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADC_SQR1_SQ1 =   // SQ1
        bit_field_t<6, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADC_SQR1_SQ2 =   // SQ2
        bit_field_t<12, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADC_SQR1_SQ3 =   // SQ3
        bit_field_t<18, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADC_SQR1_SQ4 =   // SQ4
        bit_field_t<24, 0x1f>::value<X>();

    static constexpr uint32_t ADC_SQR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ADC_SQR2_SQ5 =   // SQ5
        bit_field_t<0, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADC_SQR2_SQ6 =   // SQ6
        bit_field_t<6, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADC_SQR2_SQ7 =   // SQ7
        bit_field_t<12, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADC_SQR2_SQ8 =   // SQ8
        bit_field_t<18, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADC_SQR2_SQ9 =   // SQ9
        bit_field_t<24, 0x1f>::value<X>();

    static constexpr uint32_t ADC_SQR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ADC_SQR3_SQ10 =   // SQ10
        bit_field_t<0, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADC_SQR3_SQ11 =   // SQ11
        bit_field_t<6, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADC_SQR3_SQ12 =   // SQ12
        bit_field_t<12, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADC_SQR3_SQ13 =   // SQ13
        bit_field_t<18, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADC_SQR3_SQ14 =   // SQ14
        bit_field_t<24, 0x1f>::value<X>();

    static constexpr uint32_t ADC_SQR4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ADC_SQR4_SQ15 =   // SQ15
        bit_field_t<0, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADC_SQR4_SQ16 =   // SQ16
        bit_field_t<6, 0x1f>::value<X>();

    static constexpr uint32_t ADC_DR_RESET_VALUE = 0x0;

    static constexpr uint32_t ADC_JSQR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ADC_JSQR_JL =        // JL
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADC_JSQR_JEXTSEL =   // JEXTSEL
        bit_field_t<2, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADC_JSQR_JEXTEN =    // JEXTEN
        bit_field_t<7, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADC_JSQR_JSQ1 =      // JSQ1
        bit_field_t<9, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADC_JSQR_JSQ2 =      // JSQ2
        bit_field_t<15, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADC_JSQR_JSQ3 =      // JSQ3
        bit_field_t<21, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADC_JSQR_JSQ4 =      // JSQ4
        bit_field_t<27, 0x1f>::value<X>();

    static constexpr uint32_t ADC_OFR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ADC_OFR1_OFFSET1 =           // OFFSET1
        bit_field_t<0, 0x3ffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADC_OFR1_OFFSET1_CH =        // OFFSET1_CH
        bit_field_t<26, 0x1f>::value<X>();
    static constexpr uint32_t ADC_OFR1_SSATE = 0x80000000; // SSATE

    static constexpr uint32_t ADC_OFR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ADC_OFR2_OFFSET2 =           // OFFSET2
        bit_field_t<0, 0x3ffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADC_OFR2_OFFSET2_CH =        // OFFSET2_CH
        bit_field_t<26, 0x1f>::value<X>();
    static constexpr uint32_t ADC_OFR2_SSATE = 0x80000000; // SSATE

    static constexpr uint32_t ADC_OFR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ADC_OFR3_OFFSET3 =           // OFFSET3
        bit_field_t<0, 0x3ffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADC_OFR3_OFFSET3_CH =        // OFFSET3_CH
        bit_field_t<26, 0x1f>::value<X>();
    static constexpr uint32_t ADC_OFR3_SSATE = 0x80000000; // SSATE

    static constexpr uint32_t ADC_OFR4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ADC_OFR4_OFFSET4 =           // OFFSET4
        bit_field_t<0, 0x3ffffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADC_OFR4_OFFSET4_CH =        // OFFSET4_CH
        bit_field_t<26, 0x1f>::value<X>();
    static constexpr uint32_t ADC_OFR4_SSATE = 0x80000000; // SSATE

    static constexpr uint32_t ADC_JDR1_RESET_VALUE = 0x0;

    static constexpr uint32_t ADC_JDR2_RESET_VALUE = 0x0;

    static constexpr uint32_t ADC_JDR3_RESET_VALUE = 0x0;

    static constexpr uint32_t ADC_JDR4_RESET_VALUE = 0x0;

    static constexpr uint32_t ADC_AWD2CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ADC_AWD2CR_AWD2CH =   // AWD2CH
        bit_field_t<0, 0xfffff>::value<X>();

    static constexpr uint32_t ADC_AWD3CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ADC_AWD3CR_AWD3CH =   // AWD3CH
        bit_field_t<0, 0xfffff>::value<X>();

    static constexpr uint32_t ADC_LTR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ADC_LTR2_LTR2 =   // LTR2
        bit_field_t<0, 0x3ffffff>::value<X>();

    static constexpr uint32_t ADC_HTR2_RESET_VALUE = 0x3ffffff;
    template<uint32_t X>
    static constexpr uint32_t ADC_HTR2_HTR2 =   // HTR2
        bit_field_t<0, 0x3ffffff>::value<X>();

    static constexpr uint32_t ADC_LTR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ADC_LTR3_LTR3 =   // LTR3
        bit_field_t<0, 0x3ffffff>::value<X>();

    static constexpr uint32_t ADC_HTR3_RESET_VALUE = 0x3ffffff;
    template<uint32_t X>
    static constexpr uint32_t ADC_HTR3_HTR3 =   // HTR3
        bit_field_t<0, 0x3ffffff>::value<X>();

    static constexpr uint32_t ADC_DIFSEL_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ADC_DIFSEL_DIFSEL =   // DIFSEL
        bit_field_t<0, 0xfffff>::value<X>();

    static constexpr uint32_t ADC_CALFACT_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ADC_CALFACT_CALFACT_S =   // CALFACT_S
        bit_field_t<0, 0x7ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADC_CALFACT_CALFACT_D =   // CALFACT_D
        bit_field_t<16, 0x7ff>::value<X>();

    static constexpr uint32_t ADC_CALFACT2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ADC_CALFACT2_LINCALFACT =   // LINCALFACT
        bit_field_t<0, 0x3fffffff>::value<X>();

    static constexpr uint32_t ADC2_OR_RESET_VALUE = 0x0;
    static constexpr uint32_t ADC2_OR_VDDCOREEN = 0x1; // VDDCOREEN
};


template<>
struct peripheral_t<STM32MP15xxx, ADC2>
{
    typedef stm32mp15xxx_adc2_t T;
    static T& V;
};

using adc2_t = peripheral_t<mcu_svd, ADC2>;

