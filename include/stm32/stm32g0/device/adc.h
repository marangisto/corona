#pragma once

////
//
//      STM32G0 ADC peripherals
//
////

////
//
//      Analog to Digital Converter instance 1
//
////

struct stm32g030_adc_t
{
    volatile uint32_t ISR;      // [read-write] ADC interrupt and status register
    volatile uint32_t IER;      // [read-write] ADC interrupt enable register
    volatile uint32_t CR;       // [read-write] ADC control register
    volatile uint32_t CFGR1;    // [read-write] ADC configuration register 1
    volatile uint32_t CFGR2;    // [read-write] ADC configuration register 2
    volatile uint32_t SMPR;     // [read-write] ADC sampling time register
    reserved_t<0x2> _0x20;
    volatile uint32_t AWD1TR;   // [read-write] watchdog threshold register
    volatile uint32_t AWD2TR;   // [read-write] watchdog threshold register
    volatile uint32_t CHSELR;   // [read-write] channel selection register
    volatile uint32_t AWD3TR;   // [read-write] watchdog threshold register
    reserved_t<0x4> _0x40;
    volatile uint32_t DR;       // [read-only] ADC group regular conversion data register
    reserved_t<0x17> _0xa0;
    volatile uint32_t AWD2CR;   // [read-write] ADC analog watchdog 2 configuration register
    volatile uint32_t AWD3CR;   // [read-write] ADC analog watchdog 3 configuration register
    reserved_t<0x3> _0xb4;
    volatile uint32_t CALFACT;  // [read-write] ADC calibration factors register
    reserved_t<0x94> _0x308;
    volatile uint32_t CCR;      // [read-write] ADC common control register

    static constexpr uint32_t ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t ISR_CCRDY = 0x2000; // Channel Configuration Ready flag
    static constexpr uint32_t ISR_EOCAL = 0x800;  // End Of Calibration flag
    static constexpr uint32_t ISR_AWD3 = 0x200;   // ADC analog watchdog 3 flag
    static constexpr uint32_t ISR_AWD2 = 0x100;   // ADC analog watchdog 2 flag
    static constexpr uint32_t ISR_AWD1 = 0x80;    // ADC analog watchdog 1 flag
    static constexpr uint32_t ISR_OVR = 0x10;     // ADC group regular overrun flag
    static constexpr uint32_t ISR_EOS = 0x8;      // ADC group regular end of sequence conversions flag
    static constexpr uint32_t ISR_EOC = 0x4;      // ADC group regular end of unitary conversion flag
    static constexpr uint32_t ISR_EOSMP = 0x2;    // ADC group regular end of sampling flag
    static constexpr uint32_t ISR_ADRDY = 0x1;    // ADC ready flag

    static constexpr uint32_t IER_RESET_VALUE = 0x0;
    static constexpr uint32_t IER_CCRDYIE = 0x2000; // Channel Configuration Ready Interrupt enable
    static constexpr uint32_t IER_EOCALIE = 0x800;  // End of calibration interrupt enable
    static constexpr uint32_t IER_AWD3IE = 0x200;   // ADC analog watchdog 3 interrupt
    static constexpr uint32_t IER_AWD2IE = 0x100;   // ADC analog watchdog 2 interrupt
    static constexpr uint32_t IER_AWD1IE = 0x80;    // ADC analog watchdog 1 interrupt
    static constexpr uint32_t IER_OVRIE = 0x10;     // ADC group regular overrun interrupt
    static constexpr uint32_t IER_EOSIE = 0x8;      // ADC group regular end of sequence conversions interrupt
    static constexpr uint32_t IER_EOCIE = 0x4;      // ADC group regular end of unitary conversion interrupt
    static constexpr uint32_t IER_EOSMPIE = 0x2;    // ADC group regular end of sampling interrupt
    static constexpr uint32_t IER_ADRDYIE = 0x1;    // ADC ready interrupt

    static constexpr uint32_t CR_RESET_VALUE = 0x0;
    static constexpr uint32_t CR_ADCAL = 0x80000000;    // ADC calibration
    static constexpr uint32_t CR_ADVREGEN = 0x10000000; // ADC voltage regulator enable
    static constexpr uint32_t CR_ADSTP = 0x10;          // ADC group regular conversion stop
    static constexpr uint32_t CR_ADSTART = 0x4;         // ADC group regular conversion start
    static constexpr uint32_t CR_ADDIS = 0x2;           // ADC disable
    static constexpr uint32_t CR_ADEN = 0x1;            // ADC enable

    static constexpr uint32_t CFGR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CFGR1_AWDCH1CH =            // ADC analog watchdog 1 monitored channel selection
        bit_field_t<26, 0x1f>::value<X>();
    static constexpr uint32_t CFGR1_AWD1EN = 0x800000;    // ADC analog watchdog 1 enable on scope ADC group regular
    static constexpr uint32_t CFGR1_AWD1SGL = 0x400000;   // ADC analog watchdog 1 monitoring a single channel or all channels
    static constexpr uint32_t CFGR1_CHSELRMOD = 0x200000; // Mode selection of the ADC_CHSELR register
    static constexpr uint32_t CFGR1_DISCEN = 0x10000;     // ADC group regular sequencer discontinuous mode
    static constexpr uint32_t CFGR1_AUTOFF = 0x8000;      // Auto-off mode
    static constexpr uint32_t CFGR1_WAIT = 0x4000;        // Wait conversion mode
    static constexpr uint32_t CFGR1_CONT = 0x2000;        // ADC group regular continuous conversion mode
    static constexpr uint32_t CFGR1_OVRMOD = 0x1000;      // ADC group regular overrun configuration
    template<uint32_t X>
    static constexpr uint32_t CFGR1_EXTEN =               // ADC group regular external trigger polarity
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFGR1_EXTSEL =              // ADC group regular external trigger source
        bit_field_t<6, 0x7>::value<X>();
    static constexpr uint32_t CFGR1_ALIGN = 0x20;         // ADC data alignement
    template<uint32_t X>
    static constexpr uint32_t CFGR1_RES =                 // ADC data resolution
        bit_field_t<3, 0x3>::value<X>();
    static constexpr uint32_t CFGR1_SCANDIR = 0x4;        // Scan sequence direction
    static constexpr uint32_t CFGR1_DMACFG = 0x2;         // ADC DMA transfer configuration
    static constexpr uint32_t CFGR1_DMAEN = 0x1;          // ADC DMA transfer enable

    static constexpr uint32_t CFGR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CFGR2_CKMODE =             // ADC clock mode
        bit_field_t<30, 0x3>::value<X>();
    static constexpr uint32_t CFGR2_LFTRIG = 0x20000000; // Low frequency trigger mode enable
    static constexpr uint32_t CFGR2_TOVS = 0x200;        // ADC oversampling discontinuous mode (triggered mode) for ADC group regular
    template<uint32_t X>
    static constexpr uint32_t CFGR2_OVSS =               // ADC oversampling shift
        bit_field_t<5, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFGR2_OVSR =               // ADC oversampling ratio
        bit_field_t<2, 0x7>::value<X>();
    static constexpr uint32_t CFGR2_OVSE = 0x1;          // ADC oversampler enable on scope ADC group regular

    static constexpr uint32_t SMPR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SMPR_SMP1 =     // Sampling time selection
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR_SMP2 =     // Sampling time selection
        bit_field_t<4, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR_SMPSEL =   // Channel sampling time selection
        bit_field_t<8, 0x7ffff>::value<X>();

    static constexpr uint32_t AWD1TR_RESET_VALUE = 0xfff0000;
    template<uint32_t X>
    static constexpr uint32_t AWD1TR_HT1 =   // ADC analog watchdog 1 threshold high
        bit_field_t<16, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AWD1TR_LT1 =   // ADC analog watchdog 1 threshold low
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t AWD2TR_RESET_VALUE = 0xfff0000;
    template<uint32_t X>
    static constexpr uint32_t AWD2TR_HT2 =   // ADC analog watchdog 2 threshold high
        bit_field_t<16, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AWD2TR_LT2 =   // ADC analog watchdog 2 threshold low
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t CHSELR_RESET_VALUE = 0xfff0000;
    template<uint32_t X>
    static constexpr uint32_t CHSELR_CHSEL =   // Channel-x selection
        bit_field_t<0, 0x7ffff>::value<X>();

    static constexpr uint32_t CHSELR_1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CHSELR_1_SQ1 =   // conversion of the sequence
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CHSELR_1_SQ2 =   // conversion of the sequence
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CHSELR_1_SQ3 =   // conversion of the sequence
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CHSELR_1_SQ4 =   // conversion of the sequence
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CHSELR_1_SQ5 =   // conversion of the sequence
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CHSELR_1_SQ6 =   // conversion of the sequence
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CHSELR_1_SQ7 =   // conversion of the sequence
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CHSELR_1_SQ8 =   // conversion of the sequence
        bit_field_t<28, 0xf>::value<X>();

    static constexpr uint32_t AWD3TR_RESET_VALUE = 0xfff0000;
    template<uint32_t X>
    static constexpr uint32_t AWD3TR_HT3 =   // ADC analog watchdog 3 threshold high
        bit_field_t<16, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AWD3TR_LT3 =   // ADC analog watchdog 3 threshold high
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t DR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DR_regularDATA =   // ADC group regular conversion data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t AWD2CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t AWD2CR_AWD2CH =   // ADC analog watchdog 2 monitored channel selection
        bit_field_t<0, 0x7ffff>::value<X>();

    static constexpr uint32_t AWD3CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t AWD3CR_AWD3CH =   // ADC analog watchdog 3 monitored channel selection
        bit_field_t<0, 0x7ffff>::value<X>();

    static constexpr uint32_t CALFACT_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CALFACT_CALFACT =   // ADC calibration factor in single-ended mode
        bit_field_t<0, 0x7f>::value<X>();

    static constexpr uint32_t CCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCR_PRESC =             // ADC prescaler
        bit_field_t<18, 0xf>::value<X>();
    static constexpr uint32_t CCR_VREFEN = 0x400000;  // VREFINT enable
    static constexpr uint32_t CCR_TSEN = 0x800000;    // Temperature sensor enable
    static constexpr uint32_t CCR_VBATEN = 0x1000000; // VBAT enable
};


////
//
//      Analog to Digital Converter instance 1
//
////

struct stm32g070_adc_t
{
    volatile uint32_t ISR;      // [read-write] ADC interrupt and status register
    volatile uint32_t IER;      // [read-write] ADC interrupt enable register
    volatile uint32_t CR;       // [read-write] ADC control register
    volatile uint32_t CFGR1;    // [read-write] ADC configuration register 1
    volatile uint32_t CFGR2;    // [read-write] ADC configuration register 2
    volatile uint32_t SMPR;     // [read-write] ADC sampling time register
    reserved_t<0x2> _0x20;
    volatile uint32_t AWD1TR;   // [read-write] watchdog threshold register
    volatile uint32_t AWD2TR;   // [read-write] watchdog threshold register
    volatile uint32_t CHSELR;   // [read-write] channel selection register
    volatile uint32_t AWD3TR;   // [read-write] watchdog threshold register
    reserved_t<0x4> _0x40;
    volatile uint32_t DR;       // [read-only] ADC group regular conversion data register
    reserved_t<0x17> _0xa0;
    volatile uint32_t AWD2CR;   // [read-write] ADC analog watchdog 2 configuration register
    volatile uint32_t AWD3CR;   // [read-write] ADC analog watchdog 3 configuration register
    reserved_t<0x3> _0xb4;
    volatile uint32_t CALFACT;  // [read-write] ADC calibration factors register
    reserved_t<0x94> _0x308;
    volatile uint32_t CCR;      // [read-write] ADC common control register
    reserved_t<0x33> _0x3d8;
    volatile uint32_t HWCFGR6;  // [read-write] Hardware Configuration Register
    volatile uint32_t HWCFGR5;  // [read-write] Hardware Configuration Register
    volatile uint32_t HWCFGR4;  // [read-write] Hardware Configuration Register
    volatile uint32_t HWCFGR3;  // [read-write] Hardware Configuration Register
    volatile uint32_t HWCFGR2;  // [read-write] Hardware Configuration Register
    volatile uint32_t HWCFGR1;  // [read-write] Hardware Configuration Register
    volatile uint32_t HWCFGR0;  // [read-only] Hardware Configuration Register
    volatile uint32_t VERR;     // [read-only] EXTI IP Version register
    volatile uint32_t IPIDR;    // [read-only] EXTI Identification register
    volatile uint32_t SIDR;     // [read-only] EXTI Size ID register

    static constexpr uint32_t ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t ISR_CCRDY = 0x2000; // Channel Configuration Ready flag
    static constexpr uint32_t ISR_EOCAL = 0x800;  // End Of Calibration flag
    static constexpr uint32_t ISR_AWD3 = 0x200;   // ADC analog watchdog 3 flag
    static constexpr uint32_t ISR_AWD2 = 0x100;   // ADC analog watchdog 2 flag
    static constexpr uint32_t ISR_AWD1 = 0x80;    // ADC analog watchdog 1 flag
    static constexpr uint32_t ISR_OVR = 0x10;     // ADC group regular overrun flag
    static constexpr uint32_t ISR_EOS = 0x8;      // ADC group regular end of sequence conversions flag
    static constexpr uint32_t ISR_EOC = 0x4;      // ADC group regular end of unitary conversion flag
    static constexpr uint32_t ISR_EOSMP = 0x2;    // ADC group regular end of sampling flag
    static constexpr uint32_t ISR_ADRDY = 0x1;    // ADC ready flag

    static constexpr uint32_t IER_RESET_VALUE = 0x0;
    static constexpr uint32_t IER_CCRDYIE = 0x2000; // Channel Configuration Ready Interrupt enable
    static constexpr uint32_t IER_EOCALIE = 0x800;  // End of calibration interrupt enable
    static constexpr uint32_t IER_AWD3IE = 0x200;   // ADC analog watchdog 3 interrupt
    static constexpr uint32_t IER_AWD2IE = 0x100;   // ADC analog watchdog 2 interrupt
    static constexpr uint32_t IER_AWD1IE = 0x80;    // ADC analog watchdog 1 interrupt
    static constexpr uint32_t IER_OVRIE = 0x10;     // ADC group regular overrun interrupt
    static constexpr uint32_t IER_EOSIE = 0x8;      // ADC group regular end of sequence conversions interrupt
    static constexpr uint32_t IER_EOCIE = 0x4;      // ADC group regular end of unitary conversion interrupt
    static constexpr uint32_t IER_EOSMPIE = 0x2;    // ADC group regular end of sampling interrupt
    static constexpr uint32_t IER_ADRDYIE = 0x1;    // ADC ready interrupt

    static constexpr uint32_t CR_RESET_VALUE = 0x0;
    static constexpr uint32_t CR_ADCAL = 0x80000000;    // ADC calibration
    static constexpr uint32_t CR_ADVREGEN = 0x10000000; // ADC voltage regulator enable
    static constexpr uint32_t CR_ADSTP = 0x10;          // ADC group regular conversion stop
    static constexpr uint32_t CR_ADSTART = 0x4;         // ADC group regular conversion start
    static constexpr uint32_t CR_ADDIS = 0x2;           // ADC disable
    static constexpr uint32_t CR_ADEN = 0x1;            // ADC enable

    static constexpr uint32_t CFGR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CFGR1_AWDCH1CH =            // ADC analog watchdog 1 monitored channel selection
        bit_field_t<26, 0x1f>::value<X>();
    static constexpr uint32_t CFGR1_AWD1EN = 0x800000;    // ADC analog watchdog 1 enable on scope ADC group regular
    static constexpr uint32_t CFGR1_AWD1SGL = 0x400000;   // ADC analog watchdog 1 monitoring a single channel or all channels
    static constexpr uint32_t CFGR1_CHSELRMOD = 0x200000; // Mode selection of the ADC_CHSELR register
    static constexpr uint32_t CFGR1_DISCEN = 0x10000;     // ADC group regular sequencer discontinuous mode
    static constexpr uint32_t CFGR1_AUTOFF = 0x8000;      // Auto-off mode
    static constexpr uint32_t CFGR1_WAIT = 0x4000;        // Wait conversion mode
    static constexpr uint32_t CFGR1_CONT = 0x2000;        // ADC group regular continuous conversion mode
    static constexpr uint32_t CFGR1_OVRMOD = 0x1000;      // ADC group regular overrun configuration
    template<uint32_t X>
    static constexpr uint32_t CFGR1_EXTEN =               // ADC group regular external trigger polarity
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFGR1_EXTSEL =              // ADC group regular external trigger source
        bit_field_t<6, 0x7>::value<X>();
    static constexpr uint32_t CFGR1_ALIGN = 0x20;         // ADC data alignement
    template<uint32_t X>
    static constexpr uint32_t CFGR1_RES =                 // ADC data resolution
        bit_field_t<3, 0x3>::value<X>();
    static constexpr uint32_t CFGR1_SCANDIR = 0x4;        // Scan sequence direction
    static constexpr uint32_t CFGR1_DMACFG = 0x2;         // ADC DMA transfer configuration
    static constexpr uint32_t CFGR1_DMAEN = 0x1;          // ADC DMA transfer enable

    static constexpr uint32_t CFGR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CFGR2_CKMODE =             // ADC clock mode
        bit_field_t<30, 0x3>::value<X>();
    static constexpr uint32_t CFGR2_LFTRIG = 0x20000000; // Low frequency trigger mode enable
    static constexpr uint32_t CFGR2_TOVS = 0x200;        // ADC oversampling discontinuous mode (triggered mode) for ADC group regular
    template<uint32_t X>
    static constexpr uint32_t CFGR2_OVSS =               // ADC oversampling shift
        bit_field_t<5, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFGR2_OVSR =               // ADC oversampling ratio
        bit_field_t<2, 0x7>::value<X>();
    static constexpr uint32_t CFGR2_OVSE = 0x1;          // ADC oversampler enable on scope ADC group regular

    static constexpr uint32_t SMPR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SMPR_SMP1 =     // Sampling time selection
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR_SMP2 =     // Sampling time selection
        bit_field_t<4, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMPR_SMPSEL =   // Channel sampling time selection
        bit_field_t<8, 0x7ffff>::value<X>();

    static constexpr uint32_t AWD1TR_RESET_VALUE = 0xfff0000;
    template<uint32_t X>
    static constexpr uint32_t AWD1TR_HT1 =   // ADC analog watchdog 1 threshold high
        bit_field_t<16, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AWD1TR_LT1 =   // ADC analog watchdog 1 threshold low
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t AWD2TR_RESET_VALUE = 0xfff0000;
    template<uint32_t X>
    static constexpr uint32_t AWD2TR_HT2 =   // ADC analog watchdog 2 threshold high
        bit_field_t<16, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AWD2TR_LT2 =   // ADC analog watchdog 2 threshold low
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t CHSELR_RESET_VALUE = 0xfff0000;
    template<uint32_t X>
    static constexpr uint32_t CHSELR_CHSEL =   // Channel-x selection
        bit_field_t<0, 0x7ffff>::value<X>();

    static constexpr uint32_t CHSELR_1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CHSELR_1_SQ1 =   // conversion of the sequence
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CHSELR_1_SQ2 =   // conversion of the sequence
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CHSELR_1_SQ3 =   // conversion of the sequence
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CHSELR_1_SQ4 =   // conversion of the sequence
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CHSELR_1_SQ5 =   // conversion of the sequence
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CHSELR_1_SQ6 =   // conversion of the sequence
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CHSELR_1_SQ7 =   // conversion of the sequence
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CHSELR_1_SQ8 =   // conversion of the sequence
        bit_field_t<28, 0xf>::value<X>();

    static constexpr uint32_t AWD3TR_RESET_VALUE = 0xfff0000;
    template<uint32_t X>
    static constexpr uint32_t AWD3TR_HT3 =   // ADC analog watchdog 3 threshold high
        bit_field_t<16, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AWD3TR_LT3 =   // ADC analog watchdog 3 threshold high
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t DR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DR_regularDATA =   // ADC group regular conversion data
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t AWD2CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t AWD2CR_AWD2CH =   // ADC analog watchdog 2 monitored channel selection
        bit_field_t<0, 0x7ffff>::value<X>();

    static constexpr uint32_t AWD3CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t AWD3CR_AWD3CH =   // ADC analog watchdog 3 monitored channel selection
        bit_field_t<0, 0x7ffff>::value<X>();

    static constexpr uint32_t CALFACT_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CALFACT_CALFACT =   // ADC calibration factor in single-ended mode
        bit_field_t<0, 0x7f>::value<X>();

    static constexpr uint32_t CCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCR_PRESC =             // ADC prescaler
        bit_field_t<18, 0xf>::value<X>();
    static constexpr uint32_t CCR_VREFEN = 0x400000;  // VREFINT enable
    static constexpr uint32_t CCR_TSEN = 0x800000;    // Temperature sensor enable
    static constexpr uint32_t CCR_VBATEN = 0x1000000; // VBAT enable

    static constexpr uint32_t HWCFGR6_RESET_VALUE = 0x1f1f1f1f;
    template<uint32_t X>
    static constexpr uint32_t HWCFGR6_CHMAP20 =   // Input channel mapping
        bit_field_t<0, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HWCFGR6_CHMAP21 =   // Input channel mapping
        bit_field_t<8, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HWCFGR6_CHMAP22 =   // Input channel mapping
        bit_field_t<16, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HWCFGR6_CHMAP23 =   // Input channel mapping
        bit_field_t<24, 0x1f>::value<X>();

    static constexpr uint32_t HWCFGR5_RESET_VALUE = 0x1f080807;
    template<uint32_t X>
    static constexpr uint32_t HWCFGR5_CHMAP19 =   // Input channel mapping
        bit_field_t<0, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HWCFGR5_CHMAP18 =   // Input channel mapping
        bit_field_t<8, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HWCFGR5_CHMAP17 =   // Input channel mapping
        bit_field_t<16, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HWCFGR5_CHMAP16 =   // Input channel mapping
        bit_field_t<24, 0x1f>::value<X>();

    static constexpr uint32_t HWCFGR4_RESET_VALUE = 0x70b0a09;
    template<uint32_t X>
    static constexpr uint32_t HWCFGR4_CHMAP15 =   // Input channel mapping
        bit_field_t<0, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HWCFGR4_CHMAP14 =   // Input channel mapping
        bit_field_t<8, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HWCFGR4_CHMAP13 =   // Input channel mapping
        bit_field_t<16, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HWCFGR4_CHMAP12 =   // Input channel mapping
        bit_field_t<24, 0x1f>::value<X>();

    static constexpr uint32_t HWCFGR3_RESET_VALUE = 0x7060605;
    template<uint32_t X>
    static constexpr uint32_t HWCFGR3_CHMAP11 =   // Input channel mapping
        bit_field_t<0, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HWCFGR3_CHMAP10 =   // Input channel mapping
        bit_field_t<8, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HWCFGR3_CHMAP9 =    // Input channel mapping
        bit_field_t<16, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HWCFGR3_CHMAP8 =    // Input channel mapping
        bit_field_t<24, 0x1f>::value<X>();

    static constexpr uint32_t HWCFGR2_RESET_VALUE = 0x5050404;
    template<uint32_t X>
    static constexpr uint32_t HWCFGR2_CHMAP7 =   // Input channel mapping
        bit_field_t<0, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HWCFGR2_CHMAP6 =   // Input channel mapping
        bit_field_t<8, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HWCFGR2_CHMAP5 =   // Input channel mapping
        bit_field_t<16, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HWCFGR2_CHMAP4 =   // Input channel mapping
        bit_field_t<24, 0x1f>::value<X>();

    static constexpr uint32_t HWCFGR1_RESET_VALUE = 0x3020100;
    template<uint32_t X>
    static constexpr uint32_t HWCFGR1_CHMAP3 =   // Input channel mapping
        bit_field_t<0, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HWCFGR1_CHMAP2 =   // Input channel mapping
        bit_field_t<8, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HWCFGR1_CHMAP1 =   // Input channel mapping
        bit_field_t<16, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HWCFGR1_CHMAP0 =   // Input channel mapping
        bit_field_t<24, 0x1f>::value<X>();

    static constexpr uint32_t HWCFGR0_RESET_VALUE = 0x110;
    template<uint32_t X>
    static constexpr uint32_t HWCFGR0_NUM_CHAN_24 =   // NUM_CHAN_24
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HWCFGR0_EXTRA_AWDS =    // Extra analog watchdog
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HWCFGR0_OVS =           // Oversampling
        bit_field_t<8, 0xf>::value<X>();

    static constexpr uint32_t VERR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t VERR_MINREV =   // Minor Revision number
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t VERR_MAJREV =   // Major Revision number
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t IPIDR_RESET_VALUE = 0x0;

    static constexpr uint32_t SIDR_RESET_VALUE = 0x0;
};


template<>
struct peripheral_t<STM32G030, ADC>
{
    typedef stm32g030_adc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G031, ADC>
{
    typedef stm32g030_adc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G041, ADC>
{
    typedef stm32g030_adc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G070, ADC>
{
    typedef stm32g070_adc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G071, ADC>
{
    typedef stm32g070_adc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G081, ADC>
{
    typedef stm32g070_adc_t T;
    static T& V;
};

using adc_t = peripheral_t<mcu_svd, ADC>;

