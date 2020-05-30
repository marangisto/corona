#pragma once

////
//
//      STM32G4 ADC peripherals
//
////

////
//
//      Analog-to-Digital Converter
//
////

struct stm32g431xx_adc1_t
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
    reserved_t<0x2> _0xc0;
    volatile uint32_t GCOMP;   // [read-write] Gain compensation Register

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

    static constexpr uint32_t CR_RESET_VALUE = 0x20000000;
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

    static constexpr uint32_t CFGR_RESET_VALUE = 0x80000000;
    static constexpr uint32_t CFGR_JQDIS = 0x80000000;  // Injected Queue disable
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
    static constexpr uint32_t CFGR_ALIGN = 0x8000;      // ALIGN
    static constexpr uint32_t CFGR_AUTDLY = 0x4000;     // AUTDLY
    static constexpr uint32_t CFGR_CONT = 0x2000;       // CONT
    static constexpr uint32_t CFGR_OVRMOD = 0x1000;     // OVRMOD
    template<uint32_t X>
    static constexpr uint32_t CFGR_EXTEN =              // EXTEN
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFGR_EXTSEL =             // EXTSEL
        bit_field_t<6, 0xf>::value<X>();
    static constexpr uint32_t CFGR_ALIGN_5 = 0x20;      // ALIGN_5
    template<uint32_t X>
    static constexpr uint32_t CFGR_RES =                // RES
        bit_field_t<3, 0x3>::value<X>();
    static constexpr uint32_t CFGR_DMACFG = 0x2;        // DMACFG
    static constexpr uint32_t CFGR_DMAEN = 0x1;         // DMAEN

    static constexpr uint32_t CFGR2_RESET_VALUE = 0x0;
    static constexpr uint32_t CFGR2_SMPTRIG = 0x8000000; // SMPTRIG
    static constexpr uint32_t CFGR2_BULB = 0x4000000;    // BULB
    static constexpr uint32_t CFGR2_SWTRIG = 0x2000000;  // SWTRIG
    static constexpr uint32_t CFGR2_GCOMP = 0x10000;     // GCOMP
    static constexpr uint32_t CFGR2_ROVSM = 0x400;       // EXTEN
    static constexpr uint32_t CFGR2_TROVS = 0x200;       // Triggered Regular Oversampling
    template<uint32_t X>
    static constexpr uint32_t CFGR2_OVSS =               // ALIGN
        bit_field_t<5, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFGR2_OVSR =               // RES
        bit_field_t<2, 0x7>::value<X>();
    static constexpr uint32_t CFGR2_JOVSE = 0x2;         // DMACFG
    static constexpr uint32_t CFGR2_ROVSE = 0x1;         // DMAEN

    static constexpr uint32_t SMPR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP9 =                // SMP9
        bit_field_t<27, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP8 =                // SMP8
        bit_field_t<24, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP7 =                // SMP7
        bit_field_t<21, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP6 =                // SMP6
        bit_field_t<18, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP5 =                // SMP5
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP4 =                // SMP4
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP3 =                // SMP3
        bit_field_t<9, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP2 =                // SMP2
        bit_field_t<6, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP1 =                // SMP1
        bit_field_t<3, 0x7>::value<X>();
    static constexpr uint32_t SMPR1_SMPPLUS = 0x80000000; // Addition of one clock cycle to the sampling time
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP0 =                // SMP0
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
    static constexpr uint32_t TR1_HT1 =       // HT1
        bit_field_t<16, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TR1_AWDFILT =   // AWDFILT
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TR1_LT1 =       // LT1
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t TR2_RESET_VALUE = 0xff0000;
    template<uint32_t X>
    static constexpr uint32_t TR2_HT2 =   // HT2
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TR2_LT2 =   // LT2
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t TR3_RESET_VALUE = 0xff0000;
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
    static constexpr uint32_t SQR1_L =     // Regular channel sequence length
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
    static constexpr uint32_t DR_RDATA =   // Regular Data converted
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t JSQR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t JSQR_JSQ4 =      // JSQ4
        bit_field_t<27, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t JSQR_JSQ3 =      // JSQ3
        bit_field_t<21, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t JSQR_JSQ2 =      // JSQ2
        bit_field_t<15, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t JSQR_JSQ1 =      // JSQ1
        bit_field_t<9, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t JSQR_JEXTEN =    // JEXTEN
        bit_field_t<7, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t JSQR_JEXTSEL =   // JEXTSEL
        bit_field_t<2, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t JSQR_JL =        // JL
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t OFR1_RESET_VALUE = 0x0;
    static constexpr uint32_t OFR1_OFFSET1_EN = 0x80000000; // OFFSET1_EN
    template<uint32_t X>
    static constexpr uint32_t OFR1_OFFSET1_CH =             // OFFSET1_CH
        bit_field_t<26, 0x1f>::value<X>();
    static constexpr uint32_t OFR1_SATEN = 0x2000000;       // SATEN
    static constexpr uint32_t OFR1_OFFSETPOS = 0x1000000;   // OFFSETPOS
    template<uint32_t X>
    static constexpr uint32_t OFR1_OFFSET1 =                // OFFSET1
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t OFR2_RESET_VALUE = 0x0;
    static constexpr uint32_t OFR2_OFFSET1_EN = 0x80000000; // OFFSET1_EN
    template<uint32_t X>
    static constexpr uint32_t OFR2_OFFSET1_CH =             // OFFSET1_CH
        bit_field_t<26, 0x1f>::value<X>();
    static constexpr uint32_t OFR2_SATEN = 0x2000000;       // SATEN
    static constexpr uint32_t OFR2_OFFSETPOS = 0x1000000;   // OFFSETPOS
    template<uint32_t X>
    static constexpr uint32_t OFR2_OFFSET1 =                // OFFSET1
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t OFR3_RESET_VALUE = 0x0;
    static constexpr uint32_t OFR3_OFFSET1_EN = 0x80000000; // OFFSET1_EN
    template<uint32_t X>
    static constexpr uint32_t OFR3_OFFSET1_CH =             // OFFSET1_CH
        bit_field_t<26, 0x1f>::value<X>();
    static constexpr uint32_t OFR3_SATEN = 0x2000000;       // SATEN
    static constexpr uint32_t OFR3_OFFSETPOS = 0x1000000;   // OFFSETPOS
    template<uint32_t X>
    static constexpr uint32_t OFR3_OFFSET1 =                // OFFSET1
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t OFR4_RESET_VALUE = 0x0;
    static constexpr uint32_t OFR4_OFFSET1_EN = 0x80000000; // OFFSET1_EN
    template<uint32_t X>
    static constexpr uint32_t OFR4_OFFSET1_CH =             // OFFSET1_CH
        bit_field_t<26, 0x1f>::value<X>();
    static constexpr uint32_t OFR4_SATEN = 0x2000000;       // SATEN
    static constexpr uint32_t OFR4_OFFSETPOS = 0x1000000;   // OFFSETPOS
    template<uint32_t X>
    static constexpr uint32_t OFR4_OFFSET1 =                // OFFSET1
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
        bit_field_t<0, 0x7ffff>::value<X>();

    static constexpr uint32_t AWD3CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t AWD3CR_AWD3CH =   // AWD3CH
        bit_field_t<0, 0x7ffff>::value<X>();

    static constexpr uint32_t DIFSEL_RESET_VALUE = 0x0;
    static constexpr uint32_t DIFSEL_DIFSEL_0 = 0x1; // Differential mode for channels 0
    template<uint32_t X>
    static constexpr uint32_t DIFSEL_DIFSEL_1_18 =   // Differential mode for channels 15 to 1
        bit_field_t<1, 0x3ffff>::value<X>();

    static constexpr uint32_t CALFACT_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CALFACT_CALFACT_D =   // CALFACT_D
        bit_field_t<16, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CALFACT_CALFACT_S =   // CALFACT_S
        bit_field_t<0, 0x7f>::value<X>();

    static constexpr uint32_t GCOMP_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GCOMP_GCOMPCOEFF =   // GCOMPCOEFF
        bit_field_t<0, 0x3fff>::value<X>();
};


////
//
//      Analog-to-Digital Converter
//
////

struct stm32g431xx_adc12_common_t
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
    static constexpr uint32_t CCR_DUAL =                // Dual ADC mode selection
        bit_field_t<0, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR_DELAY =               // Delay between 2 sampling phases
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t CCR_DMACFG = 0x2000;      // DMA configuration (for multi-ADC mode)
    template<uint32_t X>
    static constexpr uint32_t CCR_MDMA =                // Direct memory access mode for multi ADC mode
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR_CKMODE =              // ADC clock mode
        bit_field_t<16, 0x3>::value<X>();
    static constexpr uint32_t CCR_VREFEN = 0x400000;    // VREFINT enable
    static constexpr uint32_t CCR_VSENSESEL = 0x800000; // VTS selection
    static constexpr uint32_t CCR_VBATSEL = 0x1000000;  // VBAT selection
    template<uint32_t X>
    static constexpr uint32_t CCR_PRESC =               // ADC prescaler
        bit_field_t<18, 0xf>::value<X>();

    static constexpr uint32_t CDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CDR_RDATA_SLV =   // Regular data of the slave ADC
        bit_field_t<16, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CDR_RDATA_MST =   // Regular data of the master ADC
        bit_field_t<0, 0xffff>::value<X>();
};


////
//
//      Analog-to-Digital Converter
//
////

struct stm32g471xx_adc3_t
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
    reserved_t<0x2> _0xc0;
    volatile uint32_t GCOMP;   // [read-write] Gain compensation Register

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

    static constexpr uint32_t CR_RESET_VALUE = 0x20002000;
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

    static constexpr uint32_t CFGR_RESET_VALUE = 0x80000000;
    static constexpr uint32_t CFGR_JQDIS = 0x80000000;  // Injected Queue disable
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
    static constexpr uint32_t CFGR_ALIGN = 0x8000;      // ALIGN
    static constexpr uint32_t CFGR_AUTDLY = 0x4000;     // AUTDLY
    static constexpr uint32_t CFGR_CONT = 0x2000;       // CONT
    static constexpr uint32_t CFGR_OVRMOD = 0x1000;     // OVRMOD
    template<uint32_t X>
    static constexpr uint32_t CFGR_EXTEN =              // EXTEN
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFGR_EXTSEL =             // EXTSEL
        bit_field_t<6, 0xf>::value<X>();
    static constexpr uint32_t CFGR_ALIGN_5 = 0x20;      // ALIGN_5
    template<uint32_t X>
    static constexpr uint32_t CFGR_RES =                // RES
        bit_field_t<3, 0x3>::value<X>();
    static constexpr uint32_t CFGR_DMACFG = 0x2;        // DMACFG
    static constexpr uint32_t CFGR_DMAEN = 0x1;         // DMAEN

    static constexpr uint32_t CFGR2_RESET_VALUE = 0x0;
    static constexpr uint32_t CFGR2_SMPTRIG = 0x8000000; // SMPTRIG
    static constexpr uint32_t CFGR2_BULB = 0x4000000;    // BULB
    static constexpr uint32_t CFGR2_SWTRIG = 0x2000000;  // SWTRIG
    static constexpr uint32_t CFGR2_GCOMP = 0x10000;     // GCOMP
    static constexpr uint32_t CFGR2_ROVSM = 0x400;       // EXTEN
    static constexpr uint32_t CFGR2_TROVS = 0x200;       // Triggered Regular Oversampling
    template<uint32_t X>
    static constexpr uint32_t CFGR2_OVSS =               // ALIGN
        bit_field_t<5, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFGR2_OVSR =               // RES
        bit_field_t<2, 0x7>::value<X>();
    static constexpr uint32_t CFGR2_JOVSE = 0x2;         // DMACFG
    static constexpr uint32_t CFGR2_ROVSE = 0x1;         // DMAEN

    static constexpr uint32_t SMPR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP9 =                // SMP9
        bit_field_t<27, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP8 =                // SMP8
        bit_field_t<24, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP7 =                // SMP7
        bit_field_t<21, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP6 =                // SMP6
        bit_field_t<18, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP5 =                // SMP5
        bit_field_t<15, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP4 =                // SMP4
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP3 =                // SMP3
        bit_field_t<9, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP2 =                // SMP2
        bit_field_t<6, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP1 =                // SMP1
        bit_field_t<3, 0x7>::value<X>();
    static constexpr uint32_t SMPR1_SMPPLUS = 0x80000000; // Addition of one clock cycle to the sampling time
    template<uint32_t X>
    static constexpr uint32_t SMPR1_SMP0 =                // SMP0
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
    static constexpr uint32_t TR1_HT1 =       // HT1
        bit_field_t<16, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TR1_AWDFILT =   // AWDFILT
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TR1_LT1 =       // LT1
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t TR2_RESET_VALUE = 0xff0000;
    template<uint32_t X>
    static constexpr uint32_t TR2_HT2 =   // HT2
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TR2_LT2 =   // LT2
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t TR3_RESET_VALUE = 0xff0000;
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
    static constexpr uint32_t SQR1_L =     // Regular channel sequence length
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
    static constexpr uint32_t DR_RDATA =   // Regular Data converted
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t JSQR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t JSQR_JSQ4 =      // JSQ4
        bit_field_t<27, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t JSQR_JSQ3 =      // JSQ3
        bit_field_t<21, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t JSQR_JSQ2 =      // JSQ2
        bit_field_t<15, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t JSQR_JSQ1 =      // JSQ1
        bit_field_t<9, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t JSQR_JEXTEN =    // JEXTEN
        bit_field_t<7, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t JSQR_JEXTSEL =   // JEXTSEL
        bit_field_t<2, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t JSQR_JL =        // JL
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t OFR1_RESET_VALUE = 0x0;
    static constexpr uint32_t OFR1_OFFSET1_EN = 0x80000000; // OFFSET1_EN
    template<uint32_t X>
    static constexpr uint32_t OFR1_OFFSET1_CH =             // OFFSET1_CH
        bit_field_t<26, 0x1f>::value<X>();
    static constexpr uint32_t OFR1_SATEN = 0x2000000;       // SATEN
    static constexpr uint32_t OFR1_OFFSETPOS = 0x1000000;   // OFFSETPOS
    template<uint32_t X>
    static constexpr uint32_t OFR1_OFFSET1 =                // OFFSET1
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t OFR2_RESET_VALUE = 0x0;
    static constexpr uint32_t OFR2_OFFSET1_EN = 0x80000000; // OFFSET1_EN
    template<uint32_t X>
    static constexpr uint32_t OFR2_OFFSET1_CH =             // OFFSET1_CH
        bit_field_t<26, 0x1f>::value<X>();
    static constexpr uint32_t OFR2_SATEN = 0x2000000;       // SATEN
    static constexpr uint32_t OFR2_OFFSETPOS = 0x1000000;   // OFFSETPOS
    template<uint32_t X>
    static constexpr uint32_t OFR2_OFFSET1 =                // OFFSET1
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t OFR3_RESET_VALUE = 0x0;
    static constexpr uint32_t OFR3_OFFSET1_EN = 0x80000000; // OFFSET1_EN
    template<uint32_t X>
    static constexpr uint32_t OFR3_OFFSET1_CH =             // OFFSET1_CH
        bit_field_t<26, 0x1f>::value<X>();
    static constexpr uint32_t OFR3_SATEN = 0x2000000;       // SATEN
    static constexpr uint32_t OFR3_OFFSETPOS = 0x1000000;   // OFFSETPOS
    template<uint32_t X>
    static constexpr uint32_t OFR3_OFFSET1 =                // OFFSET1
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t OFR4_RESET_VALUE = 0x0;
    static constexpr uint32_t OFR4_OFFSET1_EN = 0x80000000; // OFFSET1_EN
    template<uint32_t X>
    static constexpr uint32_t OFR4_OFFSET1_CH =             // OFFSET1_CH
        bit_field_t<26, 0x1f>::value<X>();
    static constexpr uint32_t OFR4_SATEN = 0x2000000;       // SATEN
    static constexpr uint32_t OFR4_OFFSETPOS = 0x1000000;   // OFFSETPOS
    template<uint32_t X>
    static constexpr uint32_t OFR4_OFFSET1 =                // OFFSET1
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
        bit_field_t<0, 0x7ffff>::value<X>();

    static constexpr uint32_t AWD3CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t AWD3CR_AWD3CH =   // AWD3CH
        bit_field_t<0, 0x7ffff>::value<X>();

    static constexpr uint32_t DIFSEL_RESET_VALUE = 0x0;
    static constexpr uint32_t DIFSEL_DIFSEL_0 = 0x1; // Differential mode for channels 0
    template<uint32_t X>
    static constexpr uint32_t DIFSEL_DIFSEL_1_18 =   // Differential mode for channels 15 to 1
        bit_field_t<1, 0x3ffff>::value<X>();

    static constexpr uint32_t CALFACT_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CALFACT_CALFACT_D =   // CALFACT_D
        bit_field_t<16, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CALFACT_CALFACT_S =   // CALFACT_S
        bit_field_t<0, 0x7f>::value<X>();

    static constexpr uint32_t GCOMP_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t GCOMP_GCOMPCOEFF =   // GCOMPCOEFF
        bit_field_t<0, 0x3fff>::value<X>();
};


template<>
struct peripheral_t<STM32G431xx, ADC1>
{
    typedef stm32g431xx_adc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G431xx, ADC2>
{
    typedef stm32g431xx_adc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G441xx, ADC1>
{
    typedef stm32g431xx_adc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G441xx, ADC2>
{
    typedef stm32g431xx_adc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G471xx, ADC1>
{
    typedef stm32g431xx_adc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G471xx, ADC2>
{
    typedef stm32g431xx_adc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G473xx, ADC1>
{
    typedef stm32g431xx_adc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G473xx, ADC2>
{
    typedef stm32g431xx_adc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G473xx, ADC4>
{
    typedef stm32g431xx_adc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G474xx, ADC1>
{
    typedef stm32g431xx_adc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G474xx, ADC2>
{
    typedef stm32g431xx_adc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G474xx, ADC4>
{
    typedef stm32g431xx_adc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G483xx, ADC1>
{
    typedef stm32g431xx_adc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G483xx, ADC2>
{
    typedef stm32g431xx_adc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G483xx, ADC4>
{
    typedef stm32g431xx_adc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, ADC1>
{
    typedef stm32g431xx_adc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, ADC2>
{
    typedef stm32g431xx_adc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, ADC4>
{
    typedef stm32g431xx_adc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G431xx, ADC12_COMMON>
{
    typedef stm32g431xx_adc12_common_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G431xx, ADC345_COMMON>
{
    typedef stm32g431xx_adc12_common_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G441xx, ADC12_COMMON>
{
    typedef stm32g431xx_adc12_common_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G441xx, ADC345_COMMON>
{
    typedef stm32g431xx_adc12_common_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G471xx, ADC12_COMMON>
{
    typedef stm32g431xx_adc12_common_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G471xx, ADC345_COMMON>
{
    typedef stm32g431xx_adc12_common_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G473xx, ADC12_COMMON>
{
    typedef stm32g431xx_adc12_common_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G473xx, ADC345_COMMON>
{
    typedef stm32g431xx_adc12_common_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G474xx, ADC12_COMMON>
{
    typedef stm32g431xx_adc12_common_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G474xx, ADC345_COMMON>
{
    typedef stm32g431xx_adc12_common_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G483xx, ADC12_COMMON>
{
    typedef stm32g431xx_adc12_common_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G483xx, ADC345_COMMON>
{
    typedef stm32g431xx_adc12_common_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, ADC12_COMMON>
{
    typedef stm32g431xx_adc12_common_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, ADC345_COMMON>
{
    typedef stm32g431xx_adc12_common_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G471xx, ADC3>
{
    typedef stm32g471xx_adc3_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G473xx, ADC3>
{
    typedef stm32g471xx_adc3_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G473xx, ADC5>
{
    typedef stm32g471xx_adc3_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G474xx, ADC3>
{
    typedef stm32g471xx_adc3_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G474xx, ADC5>
{
    typedef stm32g471xx_adc3_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G483xx, ADC3>
{
    typedef stm32g471xx_adc3_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G483xx, ADC5>
{
    typedef stm32g471xx_adc3_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, ADC3>
{
    typedef stm32g471xx_adc3_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, ADC5>
{
    typedef stm32g471xx_adc3_t T;
    static T& V;
};

using adc1_t = peripheral_t<mcu_svd, ADC1>;
using adc12_common_t = peripheral_t<mcu_svd, ADC12_COMMON>;
using adc2_t = peripheral_t<mcu_svd, ADC2>;
using adc3_t = peripheral_t<mcu_svd, ADC3>;
using adc345_common_t = peripheral_t<mcu_svd, ADC345_COMMON>;
using adc4_t = peripheral_t<mcu_svd, ADC4>;
using adc5_t = peripheral_t<mcu_svd, ADC5>;

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

template<> struct adc_traits<4>
{
    using adc = adc4_t;
};

template<> struct adc_traits<5>
{
    using adc = adc5_t;
};

