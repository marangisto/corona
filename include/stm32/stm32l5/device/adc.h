#pragma once

////
//
//      STM32L5 ADC peripherals
//
////

////
//
//      Analog-to-Digital Converter
//
////

struct stm32l552_adc_t
{
    volatile uint32_t ISR;     // [read-write] interrupt and status register
    volatile uint32_t IER;     // [read-write] interrupt enable register
    volatile uint32_t CR;      // [read-write] control register
    volatile uint32_t CFGR;    // [read-write] configuration register
    volatile uint32_t CFGR2;   // [read-write] configuration register
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
    static constexpr uint32_t CFGR_JQDIS = 0x80000000;  // JQDIS
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

    static constexpr uint32_t CFGR2_RESET_VALUE = 0x0;
    static constexpr uint32_t CFGR2_ROVSM = 0x400; // EXTEN
    static constexpr uint32_t CFGR2_TOVS = 0x200;  // EXTSEL
    template<uint32_t X>
    static constexpr uint32_t CFGR2_OVSS =         // ALIGN
        bit_field_t<5, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFGR2_OVSR =         // RES
        bit_field_t<2, 0x7>::value<X>();
    static constexpr uint32_t CFGR2_JOVSE = 0x2;   // DMACFG
    static constexpr uint32_t CFGR2_ROVSE = 0x1;   // DMAEN

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
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP0 =   // SMP0
        bit_field_t<0, 0x7>::value<X>();

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
    static constexpr uint32_t SQR1_L =     // L
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
    static constexpr uint32_t DR_RDATA =   // regularDATA
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
    static constexpr uint32_t JDR1_JDATA =   // JDATA1
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t JDR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t JDR2_JDATA =   // JDATA2
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t JDR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t JDR3_JDATA =   // JDATA3
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t JDR4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t JDR4_JDATA =   // JDATA4
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t AWD2CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t AWD2CR_AWD2CH =   // AWD2CH
        bit_field_t<0, 0x7ffff>::value<X>();

    static constexpr uint32_t AWD3CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t AWD3CR_AWD3CH =   // AWD3CH
        bit_field_t<0, 0x7ffff>::value<X>();

    static constexpr uint32_t DIFSEL_RESET_VALUE = 0x0;
    static constexpr uint32_t DIFSEL_DIFSEL_0 = 0x1;  // Differential mode for channel 0
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

struct stm32l552_adc_common_t
{
    volatile uint32_t CSR; // [read-only] ADC Common status register
    reserved_t<0x1> _0x8;
    volatile uint32_t CCR; // [read-write] ADC common control register
    volatile uint32_t CDR; // [read-only] Common regular data register for dual mode

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
    static constexpr uint32_t CSR_EOC_SLV = 0x40000;     // EOC_SLV
    static constexpr uint32_t CSR_EOS_SLV = 0x80000;     // EOS_SLV
    static constexpr uint32_t CSR_OVR_SLV = 0x100000;    // OVR_SLV
    static constexpr uint32_t CSR_JEOC_SLV = 0x200000;   // JEOC_SLV
    static constexpr uint32_t CSR_JEOS_SLV = 0x400000;   // JEOS_SLV
    static constexpr uint32_t CSR_AWD1_SLV = 0x800000;   // AWD1_SLV
    static constexpr uint32_t CSR_AWD2_SLV = 0x1000000;  // AWD2_SLV
    static constexpr uint32_t CSR_AWD3_SLV = 0x2000000;  // AWD3_SLV
    static constexpr uint32_t CSR_JQOVF_SLV = 0x4000000; // JQOVF_SLV

    static constexpr uint32_t CCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCR_CKMODE =             // ADC clock mode
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR_PRESC =              // ADC prescaler
        bit_field_t<18, 0xf>::value<X>();
    static constexpr uint32_t CCR_VREFEN = 0x400000;   // VREFINT enable
    static constexpr uint32_t CCR_CH17SEL = 0x800000;  // CH17SEL
    static constexpr uint32_t CCR_CH18SEL = 0x1000000; // CH18SEL
    template<uint32_t X>
    static constexpr uint32_t CCR_MDMA =               // MDMA
        bit_field_t<14, 0x3>::value<X>();
    static constexpr uint32_t CCR_DMACFG = 0x2000;     // DMACFG
    template<uint32_t X>
    static constexpr uint32_t CCR_DELAY =              // DELAY
        bit_field_t<8, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR_DUAL =               // DUAL
        bit_field_t<0, 0x1f>::value<X>();

    static constexpr uint32_t CDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CDR_RDATA_MST =   // RDATA_MST
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CDR_RDATA_SLV =   // RDATA_SLV
        bit_field_t<16, 0xffff>::value<X>();
};


template<>
struct peripheral_t<STM32L552, ADC_Common>
{
    typedef stm32l552_adc_common_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L552, SEC_ADC_Common>
{
    typedef stm32l552_adc_common_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, ADC_Common>
{
    typedef stm32l552_adc_common_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, SEC_ADC_Common>
{
    typedef stm32l552_adc_common_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L552, ADC>
{
    typedef stm32l552_adc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L552, SEC_ADC>
{
    typedef stm32l552_adc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, ADC>
{
    typedef stm32l552_adc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, SEC_ADC>
{
    typedef stm32l552_adc_t T;
    static T& V;
};

using adc_t = peripheral_t<mcu_svd, ADC>;
using adc_common_t = peripheral_t<mcu_svd, ADC_Common>;
using sec_adc_t = peripheral_t<mcu_svd, SEC_ADC>;
using sec_adc_common_t = peripheral_t<mcu_svd, SEC_ADC_Common>;

