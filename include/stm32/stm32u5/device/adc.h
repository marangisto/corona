#pragma once

////
//
//      STM32U5 ADC peripherals
//
///

// ADC1: ADC1

struct stm32u5xx_adc1_t
{
    volatile uint32_t ADC_ISR; // ADC interrupt and status register
    volatile uint32_t ADC_IER; // ADC interrupt enable register
    volatile uint32_t ADC_CR; // ADC control register
    volatile uint32_t ADC_CFGR1; // ADC configuration register
    volatile uint32_t ADC_CFGR2; // ADC configuration register 2
    volatile uint32_t ADC_SMPR1; // ADC sample time register 1
    volatile uint32_t ADC_SMPR2; // ADC sample time register 2
    volatile uint32_t ADC_PCSEL; // ADC channel preselection register
    reserved_t<0x4> _0x20;
    volatile uint32_t ADC_SQR1; // ADC regular sequence register 1
    volatile uint32_t ADC_SQR2; // ADC regular sequence register 2
    volatile uint32_t ADC_SQR3; // ADC regular sequence register 3
    volatile uint32_t ADC_SQR4; // ADC regular sequence register 4
    volatile uint32_t ADC_DR; // ADC regular Data Register
    reserved_t<0x2> _0x44;
    volatile uint32_t ADC_JSQR; // ADC injected sequence register
    reserved_t<0x4> _0x50;
    volatile uint32_t ADC_OFR1; // ADC offset register
    volatile uint32_t ADC_OFR2; // ADC offset register
    volatile uint32_t ADC_OFR3; // ADC offset register
    volatile uint32_t ADC_OFR4; // ADC offset register
    volatile uint32_t ADC_GCOMP; // ADC gain compensation register
    reserved_t<0x3> _0x74;
    volatile uint32_t ADC_JDR1; // ADC injected data register
    volatile uint32_t ADC_JDR2; // ADC injected data register
    volatile uint32_t ADC_JDR3; // ADC injected data register
    volatile uint32_t ADC_JDR4; // ADC injected data register
    reserved_t<0x4> _0x90;
    volatile uint32_t ADC_AWD2CR; // ADC analog watchdog 2 configuration register
    volatile uint32_t ADC_AWD3CR; // ADC analog watchdog 3 configuration register
    volatile uint32_t ADC_LTR1; // ADC watchdog threshold register 1
    volatile uint32_t ADC_HTR1; // ADC watchdog threshold register 1
    volatile uint32_t ADC_LTR2; // ADC watchdog lower threshold register 2
    volatile uint32_t ADC_HTR2; // ADC watchdog higher threshold register 2
    volatile uint32_t ADC_LTR3; // ADC watchdog lower threshold register 3
    volatile uint32_t ADC_HTR3; // ADC watchdog higher threshold register 3
    volatile uint32_t ADC_DIFSEL; // ADC differential mode selection register
    volatile uint32_t ADC_CALFACT; // ADC user control register
    volatile uint32_t ADC_CALFACT2; // ADC calibration factor register

    static constexpr uint32_t ADC_ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ADC_ISR_ADRDY = 0x1; // ADC ready This bit is set by hardware after the ADC has been enabled (bit ADEN=1) and when the ADC reaches a state where it is ready to accept conversion requests. It is cleared by software writing 1 to it.
    static constexpr uint32_t ADC_ISR_EOSMP = 0x2; // End of sampling flag This bit is set by hardware during the conversion of any channel (only for regular channels), at the end of the sampling phase.
    static constexpr uint32_t ADC_ISR_EOC = 0x4; // End of conversion flag This bit is set by hardware at the end of each regular conversion of a channel when a new data is available in the ADC_DR register. It is cleared by software writing 1 to it or by reading the ADC_DR register
    static constexpr uint32_t ADC_ISR_EOS = 0x8; // End of regular sequence flag This bit is set by hardware at the end of the conversions of a regular sequence of channels. It is cleared by software writing 1 to it.
    static constexpr uint32_t ADC_ISR_OVR = 0x10; // ADC overrun This bit is set by hardware when an overrun occurs on a regular channel, meaning that a new conversion has completed while the EOC flag was already set. It is cleared by software writing 1 to it.
    static constexpr uint32_t ADC_ISR_JEOC = 0x20; // Injected channel end of conversion flag This bit is set by hardware at the end of each injected conversion of a channel when a new data is available in the corresponding ADC_JDRy register. It is cleared by software writing 1 to it or by reading the corresponding ADC_JDRy register
    static constexpr uint32_t ADC_ISR_JEOS = 0x40; // Injected channel end of sequence flag This bit is set by hardware at the end of the conversions of all injected channels in the group. It is cleared by software writing 1 to it.
    static constexpr uint32_t ADC_ISR_AWD1 = 0x80; // Analog watchdog 1 flag This bit is set by hardware when the converted voltage crosses the values programmed in the fields LT1[11:0] and HT1[11:0] of ADC_LTR1, &amp; ADC_HTR1 register. It is cleared by software. writing 1 to it.
    static constexpr uint32_t ADC_ISR_AWD2 = 0x100; // Analog watchdog 2 flag This bit is set by hardware when the converted voltage crosses the values programmed in the fields LT2[7:0] and HT2[7:0] of ADC_LTR2 &amp; ADC_HTR2 register. It is cleared by software writing 1 to it.
    static constexpr uint32_t ADC_ISR_AWD3 = 0x200; // Analog watchdog 3 flag This bit is set by hardware when the converted voltage crosses the values programmed in the fields LT3[7:0] and HT3[7:0] of ADC_LTR3 &amp; ADC_HTR3 register. It is cleared by software writing 1 to it.
    static constexpr uint32_t ADC_ISR_LDORDY = 0x1000; // ADC voltage regulator ready This bit is set by hardware. It indicates that the ADC internal supply is ready. The ADC is available after tADCVREG_SETUP time.

    static constexpr uint32_t ADC_IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ADC_IER_ADRDYIE = 0x1; // ADC ready interrupt enable This bit is set and cleared by software to enable/disable the ADC Ready interrupt. Note: Software is allowed to write this bit only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_IER_EOSMPIE = 0x2; // End of sampling flag interrupt enable for regular conversions This bit is set and cleared by software to enable/disable the end of the sampling phase interrupt for regular conversions. Note: Software is allowed to write this bit only when ADSTART=0 (which ensures that no regular conversion is ongoing).
    static constexpr uint32_t ADC_IER_EOCIE = 0x4; // End of regular conversion interrupt enable This bit is set and cleared by software to enable/disable the end of a regular conversion interrupt. Note: Software is allowed to write this bit only when ADSTART=0 (which ensures that no regular conversion is ongoing).
    static constexpr uint32_t ADC_IER_EOSIE = 0x8; // End of regular sequence of conversions interrupt enable This bit is set and cleared by software to enable/disable the end of regular sequence of conversions interrupt. Note: Software is allowed to write this bit only when ADSTART=0 (which ensures that no regular conversion is ongoing).
    static constexpr uint32_t ADC_IER_OVRIE = 0x10; // Overrun interrupt enable This bit is set and cleared by software to enable/disable the Overrun interrupt of a regular conversion. Note: Software is allowed to write this bit only when ADSTART=0 (which ensures that no regular conversion is ongoing).
    static constexpr uint32_t ADC_IER_JEOCIE = 0x20; // End of injected conversion interrupt enable This bit is set and cleared by software to enable/disable the end of an injected conversion interrupt. Note: Software is allowed to write this bit only when JADSTART=0 (which ensures that no regular conversion is ongoing).
    static constexpr uint32_t ADC_IER_JEOSIE = 0x40; // End of injected sequence of conversions interrupt enable This bit is set and cleared by software to enable/disable the end of injected sequence of conversions interrupt. Note: Software is allowed to write this bit only when JADSTART=0 (which ensures that no injected conversion is ongoing).
    static constexpr uint32_t ADC_IER_AWD1IE = 0x80; // Analog watchdog 1 interrupt enable This bit is set and cleared by software to enable/disable the analog watchdog 1 interrupt. Note: Software is allowed to write this bit only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_IER_AWD2IE = 0x100; // Analog watchdog 2 interrupt enable This bit is set and cleared by software to enable/disable the analog watchdog 2 interrupt. Note: Software is allowed to write this bit only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_IER_AWD3IE = 0x200; // Analog watchdog 3 interrupt enable This bit is set and cleared by software to enable/disable the analog watchdog 2 interrupt. Note: Software is allowed to write this bit only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).

    static constexpr uint32_t ADC_CR_RESET_VALUE = 0x20000000; // Reset value
    static constexpr uint32_t ADC_CR_ADEN = 0x1; // ADC enable control This bit is set by software to enable the ADC. The ADC is effectively ready to operate once the flag ADRDY has been set. It is cleared by hardware when the ADC is disabled, after the execution of the ADDIS command. Note: The software is allowed to set ADEN only when all bits of ADC_CR registers are 0 (ADCAL=0, JADSTART=0, ADSTART=0, ADSTP=0, ADDIS=0 and ADEN=0) except for bit ADVREGEN which must be 1 (and the software must have wait for the startup time of the voltage regulator)
    static constexpr uint32_t ADC_CR_ADDIS = 0x2; // ADC disable command This bit is set by software to disable the ADC (ADDIS command) and put it into power-down state (OFF state). It is cleared by hardware once the ADC is effectively disabled (ADEN is also cleared by hardware at this time). Note: The software is allowed to set ADDIS only when ADEN=1 and both ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing)
    static constexpr uint32_t ADC_CR_ADSTART = 0x4; // ADC start of regular conversion This bit is set by software to start ADC conversion of regular channels. Depending on the configuration bits EXTEN[1:0], a conversion starts immediately (software trigger configuration) or once a regular hardware trigger event occurs (hardware trigger configuration). It is cleared by hardware: in Single conversion mode (CONT=0, DISCEN=0) when software trigger is selected (EXTEN[1:0]=0x0): at the assertion of the end of regular conversion sequence (EOS) flag. In Discontinuous conversion mode (CONT=0, DISCEN=1), when the software trigger is selected (EXTEN[1:0]=0x0): at the end of conversion (EOC) flag. in all other cases: after the execution of the ADSTP command, at the same time that ADSTP is cleared by hardware. Note: The software is allowed to set ADSTART only when ADEN=1 and ADDIS=0 (ADC is enabled and there is no pending request to disable the ADC) In Auto-injection mode (JAUTO=1), regular and auto-injected conversions are started by setting bit ADSTART (JADSTART must be kept cleared)
    static constexpr uint32_t ADC_CR_JADSTART = 0x8; // ADC start of injected conversion This bit is set by software to start ADC conversion of injected channels. Depending on the configuration bits JEXTEN[1:0], a conversion starts immediately (software trigger configuration) or once an injected hardware trigger event occurs (hardware trigger configuration). It is cleared by hardware: in Single conversion mode when software trigger is selected (JEXTSEL=0x0): at the assertion of the end of injected conversion sequence (JEOS) flag. in all cases: after the execution of the JADSTP command, at the same time as JADSTP is cleared by hardware. Note: The software is allowed to set JADSTART only when ADEN=1 and ADDIS=0 (ADC is enabled and there is no pending request to disable the ADC). In Auto-injection mode (JAUTO=1), regular and auto-injected conversions are started by setting bit ADSTART (JADSTART must be kept cleared)
    static constexpr uint32_t ADC_CR_ADSTP = 0x10; // ADC stop of regular conversion command This bit is set by software to stop and discard an ongoing regular conversion (ADSTP Command). It is cleared by hardware when the conversion is effectively discarded and the ADC regular sequence and triggers can be re-configured. The ADC is then ready to accept a new start of regular conversions (ADSTART command). Note: The software is allowed to set ADSTP only when ADSTART=1 and ADDIS=0 (ADC is enabled and eventually converting a regular conversion and there is no pending request to disable the ADC). In Auto-injection mode (JAUTO=1), setting ADSTP bit aborts both regular and injected conversions (do not use JADSTP).
    static constexpr uint32_t ADC_CR_JADSTP = 0x20; // ADC stop of injected conversion command This bit is set by software to stop and discard an ongoing injected conversion (JADSTP Command). It is cleared by hardware when the conversion is effectively discarded and the ADC injected sequence and triggers can be re-configured. The ADC is then ready to accept a new start of injected conversions (JADSTART command). Note: The software is allowed to set JADSTP only when JADSTART=1 and ADDIS=0 (ADC is enabled and eventually converting an injected conversion and there is no pending request to disable the ADC). In Auto-injection mode (JAUTO=1), setting ADSTP bit aborts both regular and injected conversions (do not use JADSTP)
    static constexpr uint32_t ADC_CR_ADCALLIN = 0x10000; // Linearity calibration This bit is set and cleared by software to enable the linearity calibration. Note: The software is allowed to write this bit only when the ADC is disabled and is not calibrating (ADCAL=0, JADSTART=0, JADSTP=0, ADSTART=0, ADSTP=0, ADDIS=0 and ADEN=0).
    typedef bit_field_t<24, 0xf> ADC_CR_CALINDEX; // Calibration factor This bitfield controls the calibration factor to be read or written. Calibration index 0 is dedicated to single-ended and differential offsets, calibration index 1 to 7 to the linearity calibration factors, and index 8 to the internal offset: Others: Reserved, must not be used Note: ADC_CALFACT2[31:0] correspond to the location of CALINDEX[3:0] calibration factor data (see for details).
    static constexpr uint32_t ADC_CR_ADVREGEN = 0x10000000; // ADC voltage regulator enable This bits is set by software to enable the ADC voltage regulator. Before performing any operation such as launching a calibration or enabling the ADC, the ADC voltage regulator must first be enabled and the software must wait for the regulator start-up time. For more details about the ADC voltage regulator enable and disable sequences, refer to (ADVREGEN). The software can program this bit field only when the ADC is disabled (ADCAL=0, JADSTART=0, ADSTART=0, ADSTP=0, ADDIS=0 and ADEN=0).
    static constexpr uint32_t ADC_CR_DEEPPWD = 0x20000000; // Deep-power-down enable This bit is set and cleared by software to put the ADC in Deep-power-down mode. Note: The software is allowed to write this bit only when the ADC is disabled (ADCAL=0, JADSTART=0, JADSTP=0, ADSTART=0, ADSTP=0, ADDIS=0 and ADEN=0).
    static constexpr uint32_t ADC_CR_ADCAL = 0x80000000; // ADC calibration This bit is set by software to start the ADC calibration. It is cleared by hardware after calibration is complete. Note: The software is allowed to launch a calibration by setting ADCAL only when ADEN=0.

    static constexpr uint32_t ADC_CFGR1_RESET_VALUE = 0x80000000; // Reset value
    typedef bit_field_t<0, 0x3> ADC_CFGR1_DMNGT; // Data management configuration This bit is set and cleared by software to select how the ADC interface output data are managed. Note: The software is allowed to write this bit only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<2, 0x3> ADC_CFGR1_RES; // Data resolution These bits are written by software to select the resolution of the conversion. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<5, 0x1f> ADC_CFGR1_EXTSEL; // External trigger selection for regular group These bits select the external event used to trigger the start of conversion of a regular group: ... Refer to the ADC external trigger for regular channels in signals for details on trigger mapping. Note: The software is allowed to write these bits only when ADSTART=0 (which ensures that no regular conversion is ongoing).
    typedef bit_field_t<10, 0x3> ADC_CFGR1_EXTEN; // External trigger enable and polarity selection for regular channels These bits are set and cleared by software to select the external trigger polarity and enable the trigger of a regular group. Note: The software is allowed to write these bits only when ADSTART=0 (which ensures that no regular conversion is ongoing).
    static constexpr uint32_t ADC_CFGR1_OVRMOD = 0x1000; // Overrun Mode This bit is set and cleared by software and configure the way data overrun is managed. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no regular conversion is ongoing).
    static constexpr uint32_t ADC_CFGR1_CONT = 0x2000; // Single / continuous conversion mode for regular conversions This bit is set and cleared by software. If it is set, regular conversion takes place continuously until it is cleared. Note: It is not possible to have both discontinuous mode and continuous mode enabled: it is forbidden to set both DISCEN=1 and CONT=1. The software is allowed to write this bit only when ADSTART=0 (which ensures that no regular conversion is ongoing).
    static constexpr uint32_t ADC_CFGR1_AUTDLY = 0x4000; // Delayed conversion mode This bit is set and cleared by software to enable/disable the Auto Delayed Conversion mode.. Note: The software is allowed to write this bit only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_CFGR1_DISCEN = 0x10000; // Discontinuous mode for regular channels This bit is set and cleared by software to enable/disable Discontinuous mode for regular channels. Note: It is not possible to have both discontinuous mode and continuous mode enabled: it is forbidden to set both DISCEN=1 and CONT=1. It is not possible to use both auto-injected mode and discontinuous mode simultaneously: the bits DISCEN and JDISCEN must be kept cleared by software when JAUTO is set. The software is allowed to write this bit only when ADSTART=0 (which ensures that no regular conversion is ongoing).
    typedef bit_field_t<17, 0x7> ADC_CFGR1_DISCNUM; // Discontinuous mode channel count These bits are written by software to define the number of regular channels to be converted in discontinuous mode, after receiving an external trigger. ... Note: The software is allowed to write these bits only when ADSTART=0 (which ensures that no regular conversion is ongoing).
    static constexpr uint32_t ADC_CFGR1_JDISCEN = 0x100000; // Discontinuous mode on injected channels This bit is set and cleared by software to enable/disable discontinuous mode on the injected channels of a group. Note: The software is allowed to write this bit only when JADSTART=0 (which ensures that no injected conversion is ongoing). It is not possible to use both auto-injected mode and discontinuous mode simultaneously: the bits DISCEN and JDISCEN must be kept cleared by software when JAUTO is set.
    static constexpr uint32_t ADC_CFGR1_AWD1SGL = 0x400000; // Enable the watchdog 1 on a single channel or on all channels This bit is set and cleared by software to enable the analog watchdog on the channel identified by the AWD1CH[4:0] bits or on all the channels Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_CFGR1_AWD1EN = 0x800000; // Analog watchdog 1 enable on regular channels This bit is set and cleared by software Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no regular conversion is ongoing).
    static constexpr uint32_t ADC_CFGR1_JAWD1EN = 0x1000000; // Analog watchdog 1 enable on injected channels This bit is set and cleared by software Note: The software is allowed to write this bit only when JADSTART=0 (which ensures that no injected conversion is ongoing).
    static constexpr uint32_t ADC_CFGR1_JAUTO = 0x2000000; // Automatic injected group conversion This bit is set and cleared by software to enable/disable automatic injected group conversion after regular group conversion. Note: The software is allowed to write this bit only when ADSTART=0 and JADSTART=0 (which ensures that no regular nor injected conversion is ongoing).
    typedef bit_field_t<26, 0x1f> ADC_CFGR1_AWD1CH; // Analog watchdog 1 channel selection These bits are set and cleared by software. They select the input channel to be guarded by the analog watchdog. ..... Others: Reserved, must not be used Note: The channel selected by AWD1CH must be also selected into the SQRi or JSQRi registers. Software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).

    static constexpr uint32_t ADC_CFGR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ADC_CFGR2_ROVSE = 0x1; // Regular Oversampling Enable This bit is set and cleared by software to enable regular oversampling. Note: The software is allowed to write this bit only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing)
    static constexpr uint32_t ADC_CFGR2_JOVSE = 0x2; // Injected Oversampling Enable This bit is set and cleared by software to enable injected oversampling. Note: The software is allowed to write this bit only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing)
    typedef bit_field_t<5, 0xf> ADC_CFGR2_OVSS; // Oversampling right shift This bit field is set and cleared by software to define the right shifting applied to the raw oversampling result. Others: Reserved, must not be used. Note: The software is allowed to write these bits only when ADSTART = 0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_CFGR2_TROVS = 0x200; // Triggered Regular Oversampling This bit is set and cleared by software to enable triggered oversampling Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_CFGR2_ROVSM = 0x400; // Regular Oversampling mode This bit is set and cleared by software to select the regular oversampling mode. Note: The software is allowed to write this bit only when ADSTART = 0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_CFGR2_BULB = 0x2000; // Bulb sampling mode This bit is set and cleared by software to select the bulb sampling mode. SMPTRIG bit must not be set when the BULB bit is set. The very first ADC conversion is performed with the sampling time specified in SMPx bits. Note: The software is allowed to write this bit only when ADSTART = 0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_CFGR2_SWTRIG = 0x4000; // Software trigger bit for sampling time control trigger mode This bit is set and cleared by software to enable the bulb sampling mode. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_CFGR2_SMPTRIG = 0x8000; // Sampling time control trigger mode This bit is set and cleared by software to enable the sampling time control trigger mode. The sampling time starts on the trigger rising edge, and the conversion on the trigger falling edge. EXTEN[1:0] bits must be set to 01. BULB bit must not be set when the SMPTRIG bit is set. When EXTEN[1:0] bits is set to 00, set SWTRIG to start the sampling and clear SWTRIG bit to start the conversion. Note: The software is allowed to write this bit only when ADSTART = 0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<16, 0x3ff> ADC_CFGR2_OSR; // Oversampling ratio This bitfield is set and cleared by software to define the oversampling ratio. 2: 3x ... 1023: 1024x Note: The software is allowed to write this bit only when ADSTART = 0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_CFGR2_LFTRIG = 0x8000000; // Low-frequency trigger This bit is set and cleared by software Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<28, 0xf> ADC_CFGR2_LSHIFT; // Left shift factor This bitfield is set and cleared by software to define the left shifting applied to the final result with or without oversampling. Note: The software is allowed to write this bit only when ADSTART= 0 (which ensures that no conversion is ongoing).

    static constexpr uint32_t ADC_SMPR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> ADC_SMPR1_SMP0; // Channel x sampling time selection (x = 0 to 9) These bits are written by software to select the sampling time individually for each channel. During sample cycles, the channel selection bits must remain unchanged. Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<3, 0x7> ADC_SMPR1_SMP1; // Channel x sampling time selection (x = 0 to 9) These bits are written by software to select the sampling time individually for each channel. During sample cycles, the channel selection bits must remain unchanged. Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<6, 0x7> ADC_SMPR1_SMP2; // Channel x sampling time selection (x = 0 to 9) These bits are written by software to select the sampling time individually for each channel. During sample cycles, the channel selection bits must remain unchanged. Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<9, 0x7> ADC_SMPR1_SMP3; // Channel x sampling time selection (x = 0 to 9) These bits are written by software to select the sampling time individually for each channel. During sample cycles, the channel selection bits must remain unchanged. Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<12, 0x7> ADC_SMPR1_SMP4; // Channel x sampling time selection (x = 0 to 9) These bits are written by software to select the sampling time individually for each channel. During sample cycles, the channel selection bits must remain unchanged. Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<15, 0x7> ADC_SMPR1_SMP5; // Channel x sampling time selection (x = 0 to 9) These bits are written by software to select the sampling time individually for each channel. During sample cycles, the channel selection bits must remain unchanged. Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<18, 0x7> ADC_SMPR1_SMP6; // Channel x sampling time selection (x = 0 to 9) These bits are written by software to select the sampling time individually for each channel. During sample cycles, the channel selection bits must remain unchanged. Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<21, 0x7> ADC_SMPR1_SMP7; // Channel x sampling time selection (x = 0 to 9) These bits are written by software to select the sampling time individually for each channel. During sample cycles, the channel selection bits must remain unchanged. Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<24, 0x7> ADC_SMPR1_SMP8; // Channel x sampling time selection (x = 0 to 9) These bits are written by software to select the sampling time individually for each channel. During sample cycles, the channel selection bits must remain unchanged. Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<27, 0x7> ADC_SMPR1_SMP9; // Channel x sampling time selection (x = 0 to 9) These bits are written by software to select the sampling time individually for each channel. During sample cycles, the channel selection bits must remain unchanged. Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART=0 (which ensures that no conversion is ongoing).

    static constexpr uint32_t ADC_SMPR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> ADC_SMPR2_SMP10; // Channel x sampling time selection (x = 0 to 9) These bits are written by software to select the sampling time individually for each channel. During sampling cycles, the channel selection bits must remain unchanged. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<3, 0x7> ADC_SMPR2_SMP11; // Channel x sampling time selection (x = 0 to 9) These bits are written by software to select the sampling time individually for each channel. During sampling cycles, the channel selection bits must remain unchanged. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<6, 0x7> ADC_SMPR2_SMP12; // Channel x sampling time selection (x = 0 to 9) These bits are written by software to select the sampling time individually for each channel. During sampling cycles, the channel selection bits must remain unchanged. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<9, 0x7> ADC_SMPR2_SMP13; // Channel x sampling time selection (x = 0 to 9) These bits are written by software to select the sampling time individually for each channel. During sampling cycles, the channel selection bits must remain unchanged. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<12, 0x7> ADC_SMPR2_SMP14; // Channel x sampling time selection (x = 0 to 9) These bits are written by software to select the sampling time individually for each channel. During sampling cycles, the channel selection bits must remain unchanged. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<15, 0x7> ADC_SMPR2_SMP15; // Channel x sampling time selection (x = 0 to 9) These bits are written by software to select the sampling time individually for each channel. During sampling cycles, the channel selection bits must remain unchanged. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<18, 0x7> ADC_SMPR2_SMP16; // Channel x sampling time selection (x = 0 to 9) These bits are written by software to select the sampling time individually for each channel. During sampling cycles, the channel selection bits must remain unchanged. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<21, 0x7> ADC_SMPR2_SMP17; // Channel x sampling time selection (x = 0 to 9) These bits are written by software to select the sampling time individually for each channel. During sampling cycles, the channel selection bits must remain unchanged. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<24, 0x7> ADC_SMPR2_SMP18; // Channel x sampling time selection (x = 0 to 9) These bits are written by software to select the sampling time individually for each channel. During sampling cycles, the channel selection bits must remain unchanged. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<27, 0x7> ADC_SMPR2_SMP19; // Channel x sampling time selection (x = 0 to 9) These bits are written by software to select the sampling time individually for each channel. During sampling cycles, the channel selection bits must remain unchanged. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).

    static constexpr uint32_t ADC_PCSEL_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ADC_PCSEL_PCSEL0 = 0x1; // Channel i (VINP[i]) preselection These bits are written by software to preselect the input channel I/O instance to be converted. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_PCSEL_PCSEL1 = 0x2; // Channel i (VINP[i]) preselection These bits are written by software to preselect the input channel I/O instance to be converted. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_PCSEL_PCSEL2 = 0x4; // Channel i (VINP[i]) preselection These bits are written by software to preselect the input channel I/O instance to be converted. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_PCSEL_PCSEL3 = 0x8; // Channel i (VINP[i]) preselection These bits are written by software to preselect the input channel I/O instance to be converted. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_PCSEL_PCSEL4 = 0x10; // Channel i (VINP[i]) preselection These bits are written by software to preselect the input channel I/O instance to be converted. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_PCSEL_PCSEL5 = 0x20; // Channel i (VINP[i]) preselection These bits are written by software to preselect the input channel I/O instance to be converted. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_PCSEL_PCSEL6 = 0x40; // Channel i (VINP[i]) preselection These bits are written by software to preselect the input channel I/O instance to be converted. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_PCSEL_PCSEL7 = 0x80; // Channel i (VINP[i]) preselection These bits are written by software to preselect the input channel I/O instance to be converted. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_PCSEL_PCSEL8 = 0x100; // Channel i (VINP[i]) preselection These bits are written by software to preselect the input channel I/O instance to be converted. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_PCSEL_PCSEL9 = 0x200; // Channel i (VINP[i]) preselection These bits are written by software to preselect the input channel I/O instance to be converted. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_PCSEL_PCSEL10 = 0x400; // Channel i (VINP[i]) preselection These bits are written by software to preselect the input channel I/O instance to be converted. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_PCSEL_PCSEL11 = 0x800; // Channel i (VINP[i]) preselection These bits are written by software to preselect the input channel I/O instance to be converted. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_PCSEL_PCSEL12 = 0x1000; // Channel i (VINP[i]) preselection These bits are written by software to preselect the input channel I/O instance to be converted. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_PCSEL_PCSEL13 = 0x2000; // Channel i (VINP[i]) preselection These bits are written by software to preselect the input channel I/O instance to be converted. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_PCSEL_PCSEL14 = 0x4000; // Channel i (VINP[i]) preselection These bits are written by software to preselect the input channel I/O instance to be converted. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_PCSEL_PCSEL15 = 0x8000; // Channel i (VINP[i]) preselection These bits are written by software to preselect the input channel I/O instance to be converted. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_PCSEL_PCSEL16 = 0x10000; // Channel i (VINP[i]) preselection These bits are written by software to preselect the input channel I/O instance to be converted. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_PCSEL_PCSEL17 = 0x20000; // Channel i (VINP[i]) preselection These bits are written by software to preselect the input channel I/O instance to be converted. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_PCSEL_PCSEL18 = 0x40000; // Channel i (VINP[i]) preselection These bits are written by software to preselect the input channel I/O instance to be converted. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_PCSEL_PCSEL19 = 0x80000; // Channel i (VINP[i]) preselection These bits are written by software to preselect the input channel I/O instance to be converted. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).


    static constexpr uint32_t ADC_SQR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> ADC_SQR1_L; // Regular channel sequence length These bits are written by software to define the total number of conversions in the regular channel conversion sequence. ... Note: The software is allowed to write these bits only when ADSTART=0 (which ensures that no regular conversion is ongoing).
    typedef bit_field_t<6, 0x1f> ADC_SQR1_SQ1; // 1st conversion in regular sequence These bits are written by software with the channel number (0..19) assigned as the 1st in the regular conversion sequence. Note: The software is allowed to write these bits only when ADSTART=0 (which ensures that no regular conversion is ongoing).
    typedef bit_field_t<12, 0x1f> ADC_SQR1_SQ2; // 2nd conversion in regular sequence These bits are written by software with the channel number (0..19) assigned as the 2nd in the regular conversion sequence. Note: The software is allowed to write these bits only when ADSTART=0 (which ensures that no regular conversion is ongoing).
    typedef bit_field_t<18, 0x1f> ADC_SQR1_SQ3; // 3rd conversion in regular sequence These bits are written by software with the channel number (0..19) assigned as the 3rd in the regular conversion sequence. Note: The software is allowed to write these bits only when ADSTART=0 (which ensures that no regular conversion is ongoing).
    typedef bit_field_t<24, 0x1f> ADC_SQR1_SQ4; // 4th conversion in regular sequence These bits are written by software with the channel number (0..19) assigned as the 4th in the regular conversion sequence.

    static constexpr uint32_t ADC_SQR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> ADC_SQR2_SQ5; // 5th conversion in regular sequence These bits are written by software with the channel number (0..19) assigned as the 5th in the regular conversion sequence. Note: The software is allowed to write these bits only when ADSTART=0 (which ensures that no regular conversion is ongoing).
    typedef bit_field_t<6, 0x1f> ADC_SQR2_SQ6; // 6th conversion in regular sequence These bits are written by software with the channel number (0..19) assigned as the 6th in the regular conversion sequence. Note: The software is allowed to write these bits only when ADSTART=0 (which ensures that no regular conversion is ongoing).
    typedef bit_field_t<12, 0x1f> ADC_SQR2_SQ7; // 7th conversion in regular sequence These bits are written by software with the channel number (0..19) assigned as the 7th in the regular conversion sequence. Note: The software is allowed to write these bits only when ADSTART=0 (which ensures that no regular conversion is ongoing).
    typedef bit_field_t<18, 0x1f> ADC_SQR2_SQ8; // 8th conversion in regular sequence These bits are written by software with the channel number (0..19) assigned as the 8th in the regular conversion sequence Note: The software is allowed to write these bits only when ADSTART=0 (which ensures that no regular conversion is ongoing).
    typedef bit_field_t<24, 0x1f> ADC_SQR2_SQ9; // 9th conversion in regular sequence These bits are written by software with the channel number (0..19) assigned as the 9th in the regular conversion sequence. Note: The software is allowed to write these bits only when ADSTART=0 (which ensures that no regular conversion is ongoing).

    static constexpr uint32_t ADC_SQR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> ADC_SQR3_SQ10; // 10th conversion in regular sequence These bits are written by software with the channel number (0..19) assigned as the 10th in the regular conversion sequence. Note: The software is allowed to write these bits only when ADSTART=0 (which ensures that no regular conversion is ongoing).
    typedef bit_field_t<6, 0x1f> ADC_SQR3_SQ11; // 11th conversion in regular sequence These bits are written by software with the channel number (0..19) assigned as the 11th in the regular conversion sequence. Note: The software is allowed to write these bits only when ADSTART=0 (which ensures that no regular conversion is ongoing).
    typedef bit_field_t<12, 0x1f> ADC_SQR3_SQ12; // 12th conversion in regular sequence These bits are written by software with the channel number (0..19) assigned as the 12th in the regular conversion sequence. Note: The software is allowed to write these bits only when ADSTART=0 (which ensures that no regular conversion is ongoing).
    typedef bit_field_t<18, 0x1f> ADC_SQR3_SQ13; // 13th conversion in regular sequence These bits are written by software with the channel number (0..19) assigned as the 13th in the regular conversion sequence. Note: The software is allowed to write these bits only when ADSTART=0 (which ensures that no regular conversion is ongoing).
    typedef bit_field_t<24, 0x1f> ADC_SQR3_SQ14; // 14th conversion in regular sequence These bits are written by software with the channel number (0..19) assigned as the 14th in the regular conversion sequence. Note: The software is allowed to write these bits only when ADSTART=0 (which ensures that no regular conversion is ongoing).

    static constexpr uint32_t ADC_SQR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> ADC_SQR4_SQ15; // 15th conversion in regular sequence These bits are written by software with the channel number (0..19) assigned as the 15th in the regular conversion sequence. Note: The software is allowed to write these bits only when ADSTART=0 (which ensures that no regular conversion is ongoing).
    typedef bit_field_t<6, 0x1f> ADC_SQR4_SQ16; // 16th conversion in regular sequence These bits are written by software with the channel number (0..19) assigned as the 16th in the regular conversion sequence. Note: The software is allowed to write these bits only when ADSTART=0 (which ensures that no regular conversion is ongoing).

    static constexpr uint32_t ADC_DR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ADC_DR_RDATA; // Regular data converted These bits are read-only. They contain the conversion result from the last converted regular channel. The data are left- or right-aligned as described in .


    static constexpr uint32_t ADC_JSQR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> ADC_JSQR_JL; // Injected channel sequence length These bits are written by software to define the total number of conversions in the injected channel conversion sequence. Note: The software is allowed to write these bits only when JADSTART=0 (which ensures that no injected conversion is ongoing.
    typedef bit_field_t<2, 0x1f> ADC_JSQR_JEXTSEL; // External trigger selection for injected group These bits select the external event used to trigger the start of conversion of an injected group: ... Refer to the ADC external trigger for injected channels in internal signals for details on trigger mapping. Note: The software is allowed to write these bits only when JADSTART=0 (which ensures that no injected conversion is ongoing.
    typedef bit_field_t<7, 0x3> ADC_JSQR_JEXTEN; // External trigger enable and polarity selection for injected channels These bits are set and cleared by software to select the external trigger polarity and enable the trigger of an injected group. Note: The software is allowed to write these bits only when JADSTART=0 (which ensures that no injected conversion is ongoing.
    typedef bit_field_t<9, 0x1f> ADC_JSQR_JSQ1; // 1st conversion in the injected sequence These bits are written by software with the channel number (0..19) assigned as the 1st in the injected conversion sequence. Note: The software is allowed to write these bits only when JADSTART=0 (which ensures that no injected conversion is ongoing.
    typedef bit_field_t<15, 0x1f> ADC_JSQR_JSQ2; // 2nd conversion in the injected sequence These bits are written by software with the channel number (0..19) assigned as the 2nd in the injected conversion sequence. Note: The software is allowed to write these bits only when JADSTART=0 (which ensures that no injected conversion is ongoing.
    typedef bit_field_t<21, 0x1f> ADC_JSQR_JSQ3; // 3rd conversion in the injected sequence These bits are written by software with the channel number (0..19) assigned as the 3rd in the injected conversion sequence. Note: The software is allowed to write these bits only when JADSTART=0 (which ensures that no injected conversion is ongoing.
    typedef bit_field_t<27, 0x1f> ADC_JSQR_JSQ4; // 4th conversion in the injected sequence These bits are written by software with the channel number (0..19) assigned as the 4th in the injected conversion sequence. Note: The software is allowed to write these bits only when JADSTART=0 (which ensures that no injected conversion is ongoing.


    static constexpr uint32_t ADC_OFR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffff> ADC_OFR1_OFFSET; // Data offset y for the channel programmed into OFFSETy_CH[4:0] bits These bits are written by software to define the offset y to be subtracted from the raw converted data when converting a channel (regular or injected). The channel to which the data offset y applies must be programmed to the OFFSETy_CH[4:0] bits. The conversion result can be read from in the ADC_DR (regular conversion) or from in the ADC_JDRyi registers (injected conversion). When OFFSETy[21:0] bitfield is reset, the offset compensation is disabled. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing). If several offsets (OFFSETy) point to the same channel, only the offset with the lowest y value is considered for the subtraction. For example, if OFFSET1_CH[4:0]=4 and OFFSET2_CH[4:0]=4, this is OFFSET1[25:0] that is subtracted when converting channel 4.
    static constexpr uint32_t ADC_OFR1_POSOFF = 0x1000000; // offset sign This bit is set and cleared by software to enable the positive offset. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_OFR1_USAT = 0x2000000; // Unsigned saturation enable This bit is written by software to enable or disable the unsigned saturation feature. Note: The software is allowed to write this bit only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_OFR1_SSAT = 0x4000000; // Signed saturation enable This bit is written by software to enable or disable the Signed saturation feature. (see OFFSETy_CH, OVSS, LSHIFT, USAT, SSAT) for details). Note: The software is allowed to write this bit only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<27, 0x1f> ADC_OFR1_OFFSET_CH; // Channel selection for the data offset y These bits are written by software to define the channel to which the offset programmed into OFFSETy[25:0] bits applies. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing). If OFFSETy_EN bit is set, it is not allowed to select the same channel in different ADC_OFRy registers.

    static constexpr uint32_t ADC_OFR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffff> ADC_OFR2_OFFSET; // Data offset y for the channel programmed into OFFSETy_CH[4:0] bits These bits are written by software to define the offset y to be subtracted from the raw converted data when converting a channel (regular or injected). The channel to which the data offset y applies must be programmed to the OFFSETy_CH[4:0] bits. The conversion result can be read from in the ADC_DR (regular conversion) or from in the ADC_JDRyi registers (injected conversion). When OFFSETy[21:0] bitfield is reset, the offset compensation is disabled. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing). If several offsets (OFFSETy) point to the same channel, only the offset with the lowest y value is considered for the subtraction. For example, if OFFSET1_CH[4:0]=4 and OFFSET2_CH[4:0]=4, this is OFFSET1[25:0] that is subtracted when converting channel 4.
    static constexpr uint32_t ADC_OFR2_POSOFF = 0x1000000; // offset sign This bit is set and cleared by software to enable the positive offset. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_OFR2_USAT = 0x2000000; // Unsigned saturation enable This bit is written by software to enable or disable the unsigned saturation feature. Note: The software is allowed to write this bit only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_OFR2_SSAT = 0x4000000; // Signed saturation enable This bit is written by software to enable or disable the Signed saturation feature. (see OFFSETy_CH, OVSS, LSHIFT, USAT, SSAT) for details). Note: The software is allowed to write this bit only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<27, 0x1f> ADC_OFR2_OFFSET_CH; // Channel selection for the data offset y These bits are written by software to define the channel to which the offset programmed into OFFSETy[25:0] bits applies. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing). If OFFSETy_EN bit is set, it is not allowed to select the same channel in different ADC_OFRy registers.

    static constexpr uint32_t ADC_OFR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffff> ADC_OFR3_OFFSET; // Data offset y for the channel programmed into OFFSETy_CH[4:0] bits These bits are written by software to define the offset y to be subtracted from the raw converted data when converting a channel (regular or injected). The channel to which the data offset y applies must be programmed to the OFFSETy_CH[4:0] bits. The conversion result can be read from in the ADC_DR (regular conversion) or from in the ADC_JDRyi registers (injected conversion). When OFFSETy[21:0] bitfield is reset, the offset compensation is disabled. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing). If several offsets (OFFSETy) point to the same channel, only the offset with the lowest y value is considered for the subtraction. For example, if OFFSET1_CH[4:0]=4 and OFFSET2_CH[4:0]=4, this is OFFSET1[25:0] that is subtracted when converting channel 4.
    static constexpr uint32_t ADC_OFR3_POSOFF = 0x1000000; // offset sign This bit is set and cleared by software to enable the positive offset. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_OFR3_USAT = 0x2000000; // Unsigned saturation enable This bit is written by software to enable or disable the unsigned saturation feature. Note: The software is allowed to write this bit only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_OFR3_SSAT = 0x4000000; // Signed saturation enable This bit is written by software to enable or disable the Signed saturation feature. (see OFFSETy_CH, OVSS, LSHIFT, USAT, SSAT) for details). Note: The software is allowed to write this bit only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<27, 0x1f> ADC_OFR3_OFFSET_CH; // Channel selection for the data offset y These bits are written by software to define the channel to which the offset programmed into OFFSETy[25:0] bits applies. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing). If OFFSETy_EN bit is set, it is not allowed to select the same channel in different ADC_OFRy registers.

    static constexpr uint32_t ADC_OFR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffff> ADC_OFR4_OFFSET; // Data offset y for the channel programmed into OFFSETy_CH[4:0] bits These bits are written by software to define the offset y to be subtracted from the raw converted data when converting a channel (regular or injected). The channel to which the data offset y applies must be programmed to the OFFSETy_CH[4:0] bits. The conversion result can be read from in the ADC_DR (regular conversion) or from in the ADC_JDRyi registers (injected conversion). When OFFSETy[21:0] bitfield is reset, the offset compensation is disabled. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing). If several offsets (OFFSETy) point to the same channel, only the offset with the lowest y value is considered for the subtraction. For example, if OFFSET1_CH[4:0]=4 and OFFSET2_CH[4:0]=4, this is OFFSET1[25:0] that is subtracted when converting channel 4.
    static constexpr uint32_t ADC_OFR4_POSOFF = 0x1000000; // offset sign This bit is set and cleared by software to enable the positive offset. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_OFR4_USAT = 0x2000000; // Unsigned saturation enable This bit is written by software to enable or disable the unsigned saturation feature. Note: The software is allowed to write this bit only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_OFR4_SSAT = 0x4000000; // Signed saturation enable This bit is written by software to enable or disable the Signed saturation feature. (see OFFSETy_CH, OVSS, LSHIFT, USAT, SSAT) for details). Note: The software is allowed to write this bit only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<27, 0x1f> ADC_OFR4_OFFSET_CH; // Channel selection for the data offset y These bits are written by software to define the channel to which the offset programmed into OFFSETy[25:0] bits applies. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing). If OFFSETy_EN bit is set, it is not allowed to select the same channel in different ADC_OFRy registers.

    static constexpr uint32_t ADC_GCOMP_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3fff> ADC_GCOMP_GCOMPCOEFF; // Gain compensation coefficient These bits are set and cleared by software to program the gain compensation coefficient. ... ... The coefficient is divided by 4096 to get the gain factor ranging from 0 to 3.999756. Note: This gain compensation is only applied when GCOMP bit of ADCx_CFGR2 register is 1.
    static constexpr uint32_t ADC_GCOMP_GCOMP = 0x80000000; // Gain compensation mode This bit is set and cleared by software to enable the gain compensation mode. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).


    static constexpr uint32_t ADC_JDR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ADC_JDR1_JDATA; // Injected data These bits are read-only. They contain the conversion result from injected channel y. The data are left -or right-aligned as described in .

    static constexpr uint32_t ADC_JDR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ADC_JDR2_JDATA; // Injected data These bits are read-only. They contain the conversion result from injected channel y. The data are left -or right-aligned as described in .

    static constexpr uint32_t ADC_JDR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ADC_JDR3_JDATA; // Injected data These bits are read-only. They contain the conversion result from injected channel y. The data are left -or right-aligned as described in .

    static constexpr uint32_t ADC_JDR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ADC_JDR4_JDATA; // Injected data These bits are read-only. They contain the conversion result from injected channel y. The data are left -or right-aligned as described in .


    static constexpr uint32_t ADC_AWD2CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfffff> ADC_AWD2CR_AWD2CH; // Analog watchdog 2 channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by the analog watchdog 2. AWD2CH[i] = 0: ADC analog input channel-i is not monitored by AWD2 AWD2CH[i] = 1: ADC analog input channel-i is monitored by AWD2 When AWD2CH[19:0] = 000..0, the analog Watchdog 2 is disabled Note: The channels selected by AWD2CH must be also selected into the SQRi or JSQRi registers. Software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).

    static constexpr uint32_t ADC_AWD3CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfffff> ADC_AWD3CR_AWD3CH; // Analog watchdog 3 channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by the analog watchdog 3. AWD3CH[i] = 0: ADC analog input channel-i is not monitored by AWD3 AWD3CH[i] = 1: ADC analog input channel-i is monitored by AWD3 When AWD3CH[19:0] = 000..0, the analog Watchdog 3 is disabled Note: The channels selected by AWD3CH must be also selected into the SQRi or JSQRi registers. The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).

    static constexpr uint32_t ADC_LTR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ffffff> ADC_LTR1_LTR1; // Analog watchdog 1 lower threshold These bits are written by software to define the lower threshold for the analog watchdog 1. Refer to AWD2CH, AWD3CH, AWD_HTRy, AWD_LTRy, AWDy).

    static constexpr uint32_t ADC_HTR1_RESET_VALUE = 0x1ffffff; // Reset value
    typedef bit_field_t<0, 0x1ffffff> ADC_HTR1_HTR1; // Analog watchdog 1 higher threshold These bits are written by software to define the higher threshold for the analog watchdog 1. Refer to AWD2CH, AWD3CH, AWD_HTRy, AWD_LTRy, AWDy).
    typedef bit_field_t<29, 0x7> ADC_HTR1_AWDFILT1; // Analog watchdog filtering parameter This bit is set and cleared by software. ... Note: The software is allowed to write this bit only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).

    static constexpr uint32_t ADC_LTR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ffffff> ADC_LTR2_LTR2; // Analog watchdog 2 lower threshold These bits are written by software to define the lower threshold for the analog watchdog 2. Refer to AWD2CH, AWD3CH, AWD_HTRy, AWD_LTRy, AWDy).

    static constexpr uint32_t ADC_HTR2_RESET_VALUE = 0x1ffffff; // Reset value
    typedef bit_field_t<0, 0x1ffffff> ADC_HTR2_HTR2; // Analog watchdog 2 higher threshold These bits are written by software to define the higher threshold for the analog watchdog 2. Refer to AWD2CH, AWD3CH, AWD_HTRy, AWD_LTRy, AWDy).

    static constexpr uint32_t ADC_LTR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ffffff> ADC_LTR3_LTR3; // Analog watchdog 3 lower threshold These bits are written by software to define the lower threshold for the analog watchdog 3. Refer to AWD2CH, AWD3CH, AWD_HTRy, AWD_LTRy, AWDy).

    static constexpr uint32_t ADC_HTR3_RESET_VALUE = 0x1ffffff; // Reset value
    typedef bit_field_t<0, 0x1ffffff> ADC_HTR3_HTR3; // Analog watchdog 3 higher threshold These bits are written by software to define the higher threshold for the analog watchdog 3. Refer to AWD2CH, AWD3CH, AWD_HTRy, AWD_LTRy, AWDy).

    static constexpr uint32_t ADC_DIFSEL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfffff> ADC_DIFSEL_DIFSEL; // Differential mode for channels 19 to 0 These bits are set and cleared by software. They allow selecting if a channel is configured as single ended or differential mode. DIFSEL[i] = 0: ADC analog input channel-i is configured in single ended mode DIFSEL[i] = 1: ADC analog input channel-i is configured in differential mode Note: The software is allowed to write these bits only when the ADC is disabled (ADCAL=0, JADSTART=0, JADSTP=0, ADSTART=0, ADSTP=0, ADDIS=0 and ADEN=0).

    static constexpr uint32_t ADC_CALFACT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> ADC_CALFACT_I_APB_ADDR; // Delayed write access address This bitfield contains the address that is being written during delayed write accesses.
    typedef bit_field_t<8, 0xff> ADC_CALFACT_I_APB_DATA; // Delayed write access data This bitfield contains the data that are being written during delayed write accesses.
    static constexpr uint32_t ADC_CALFACT_VALIDITY = 0x10000; // Delayed write access status bit This bit indicates the communication status between the ADC digital and analog blocks.
    static constexpr uint32_t ADC_CALFACT_LATCH_COEF = 0x1000000; // Calibration factor latch enable bit This bit latches the calibration factor in the CALFACT[31:0] bits.
    static constexpr uint32_t ADC_CALFACT_CAPTURE_COEF = 0x2000000; // Calibration factor capture enable bit This bit enables the internal calibration factor capture.

    static constexpr uint32_t ADC_CALFACT2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ADC_CALFACT2_CALFACT; // Linearity or offset calibration factor These bits can be written either by hardware or by software. They contain the 32-bit offset or linearity calibration factor. When CAPTURE_COEF is set to 1, the calibration factor of the analog block is read back and stored in CALFACT[31:0], indexed by CALINDEX[3:0] bits. When LATCH_COEF is set to 1, the calibration factor of the analog block is updated with the value programmed in CALFACT[31:0], indexed by CALINDEX[3:0] bits. To read all calibration factors, perform nine accesses to the ADC_CALFACT2 register. To write all calibration factors, perform eight accesses to the ADC_CALFACT2 register. Note: The software is allowed to write these bits only when ADEN=1, ADSTART=0 and JADSTART=0 (ADC is enabled and no calibration is ongoing and no conversion is ongoing).
};

// ADC4: ADC4

struct stm32u5xx_adc4_t
{
    volatile uint32_t ADC_ISR; // ADC interrupt and status register
    volatile uint32_t ADC_IER; // ADC interrupt enable register
    volatile uint32_t ADC_CR; // ADC control register
    volatile uint32_t ADC_CFGR1; // ADC configuration register
    volatile uint32_t ADC_CFGR2; // ADC configuration register 2
    volatile uint32_t ADC_SMPR; // ADC sample time register
    reserved_t<0x2> _0x18;
    volatile uint32_t ADC_AWD1TR; // ADC watchdog threshold register
    volatile uint32_t ADC_AWD2TR; // ADC watchdog threshold register
    volatile uint32_t ADC_CHSELRMOD0; // ADC channel selection register [alternate]
    volatile uint32_t ADC_AWD3TR; // ADC watchdog threshold register
    reserved_t<0x4> _0x30;
    volatile uint32_t ADC_DR; // ADC data register
    volatile uint32_t ADC_PWR; // ADC data register
    reserved_t<0x16> _0x48;
    volatile uint32_t ADC_AWD2CR; // ADC Analog Watchdog 2 Configuration register
    volatile uint32_t ADC_AWD3CR; // ADC Analog Watchdog 3 Configuration register
    reserved_t<0x7> _0xa8;
    volatile uint32_t ADC_CALFACT; // ADC Calibration factor
    reserved_t<0x2> _0xc8;
    volatile uint32_t ADC_OR; // ADC option register
    reserved_t<0x8d> _0xd4;
    volatile uint32_t ADC_CCR; // ADC common configuration register

    static constexpr uint32_t ADC_ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ADC_ISR_LDORDY = 0x1000; // LDORDY
    static constexpr uint32_t ADC_ISR_EOCAL = 0x800; // EOCAL
    static constexpr uint32_t ADC_ISR_AWD3 = 0x200; // AWD3
    static constexpr uint32_t ADC_ISR_AWD2 = 0x100; // AWD2
    static constexpr uint32_t ADC_ISR_AWD1 = 0x80; // AWD1
    static constexpr uint32_t ADC_ISR_OVR = 0x10; // OVR
    static constexpr uint32_t ADC_ISR_EOS = 0x8; // EOS
    static constexpr uint32_t ADC_ISR_EOC = 0x4; // EOC
    static constexpr uint32_t ADC_ISR_EOSMP = 0x2; // EOSMP
    static constexpr uint32_t ADC_ISR_ADRDY = 0x1; // ADRDY

    static constexpr uint32_t ADC_IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ADC_IER_LDORDYIE = 0x1000; // LDORDYIE
    static constexpr uint32_t ADC_IER_EOCALIE = 0x800; // EOCALIE
    static constexpr uint32_t ADC_IER_AWD3IE = 0x200; // AWD3IE
    static constexpr uint32_t ADC_IER_AWD2IE = 0x100; // AWD2IE
    static constexpr uint32_t ADC_IER_AWD1IE = 0x80; // AWD1IE
    static constexpr uint32_t ADC_IER_OVRIE = 0x10; // OVRIE
    static constexpr uint32_t ADC_IER_EOSIE = 0x8; // EOSIE
    static constexpr uint32_t ADC_IER_EOCIE = 0x4; // EOCIE
    static constexpr uint32_t ADC_IER_EOSMPIE = 0x2; // EOSMPIE
    static constexpr uint32_t ADC_IER_ADRDYIE = 0x1; // ADRDYIE

    static constexpr uint32_t ADC_CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ADC_CR_ADCAL = 0x80000000; // ADCAL
    static constexpr uint32_t ADC_CR_ADVREGEN = 0x10000000; // ADVREGEN
    static constexpr uint32_t ADC_CR_ADSTP = 0x10; // ADSTP
    static constexpr uint32_t ADC_CR_ADSTART = 0x4; // ADSTART
    static constexpr uint32_t ADC_CR_ADDIS = 0x2; // ADDIS
    static constexpr uint32_t ADC_CR_ADEN = 0x1; // ADEN

    static constexpr uint32_t ADC_CFGR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<26, 0x1f> ADC_CFGR1_AWD1CH; // AWD1CH
    static constexpr uint32_t ADC_CFGR1_AWD1EN = 0x800000; // AWD1EN
    static constexpr uint32_t ADC_CFGR1_AWD1SGL = 0x400000; // AWD1SGL
    static constexpr uint32_t ADC_CFGR1_CHSELRMOD = 0x200000; // CHSELRMOD
    static constexpr uint32_t ADC_CFGR1_DISCEN = 0x10000; // DISCEN
    static constexpr uint32_t ADC_CFGR1_WAIT = 0x4000; // WAIT
    static constexpr uint32_t ADC_CFGR1_CONT = 0x2000; // CONT
    static constexpr uint32_t ADC_CFGR1_OVRMOD = 0x1000; // OVRMOD
    typedef bit_field_t<10, 0x3> ADC_CFGR1_EXTEN; // EXTEN
    typedef bit_field_t<6, 0x7> ADC_CFGR1_EXTSEL; // EXTSEL
    static constexpr uint32_t ADC_CFGR1_ALIGN = 0x20; // ALIGN
    static constexpr uint32_t ADC_CFGR1_SCANDIR = 0x10; // SCANDIR
    typedef bit_field_t<2, 0x3> ADC_CFGR1_RES; // RES
    static constexpr uint32_t ADC_CFGR1_DMACFG = 0x2; // DMACFG
    static constexpr uint32_t ADC_CFGR1_DMAEN = 0x1; // DMAEN

    static constexpr uint32_t ADC_CFGR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ADC_CFGR2_LFTRIG = 0x20000000; // LFTRIG
    static constexpr uint32_t ADC_CFGR2_TOVS = 0x200; // TOVS
    typedef bit_field_t<5, 0xf> ADC_CFGR2_OVSS; // OVSS
    typedef bit_field_t<2, 0x7> ADC_CFGR2_OVSR; // OVSR
    static constexpr uint32_t ADC_CFGR2_OVSE = 0x1; // OVSE

    static constexpr uint32_t ADC_SMPR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ADC_SMPR_SMPSEL23 = 0x80000000; // SMPSEL23
    static constexpr uint32_t ADC_SMPR_SMPSEL22 = 0x40000000; // SMPSEL22
    static constexpr uint32_t ADC_SMPR_SMPSEL21 = 0x20000000; // SMPSEL21
    static constexpr uint32_t ADC_SMPR_SMPSEL20 = 0x10000000; // SMPSEL20
    static constexpr uint32_t ADC_SMPR_SMPSEL19 = 0x8000000; // SMPSEL19
    static constexpr uint32_t ADC_SMPR_SMPSEL18 = 0x4000000; // SMPSEL18
    static constexpr uint32_t ADC_SMPR_SMPSEL17 = 0x2000000; // SMPSEL17
    static constexpr uint32_t ADC_SMPR_SMPSEL16 = 0x1000000; // SMPSEL16
    static constexpr uint32_t ADC_SMPR_SMPSEL15 = 0x800000; // SMPSEL15
    static constexpr uint32_t ADC_SMPR_SMPSEL14 = 0x400000; // SMPSEL14
    static constexpr uint32_t ADC_SMPR_SMPSEL13 = 0x200000; // SMPSEL13
    static constexpr uint32_t ADC_SMPR_SMPSEL12 = 0x100000; // SMPSEL12
    static constexpr uint32_t ADC_SMPR_SMPSEL11 = 0x80000; // SMPSEL11
    static constexpr uint32_t ADC_SMPR_SMPSEL10 = 0x40000; // SMPSEL10
    static constexpr uint32_t ADC_SMPR_SMPSEL9 = 0x20000; // SMPSEL9
    static constexpr uint32_t ADC_SMPR_SMPSEL8 = 0x10000; // SMPSEL8
    static constexpr uint32_t ADC_SMPR_SMPSEL7 = 0x8000; // SMPSEL7
    static constexpr uint32_t ADC_SMPR_SMPSEL6 = 0x4000; // SMPSEL6
    static constexpr uint32_t ADC_SMPR_SMPSEL5 = 0x2000; // SMPSEL5
    static constexpr uint32_t ADC_SMPR_SMPSEL4 = 0x1000; // SMPSEL4
    static constexpr uint32_t ADC_SMPR_SMPSEL3 = 0x800; // SMPSEL3
    static constexpr uint32_t ADC_SMPR_SMPSEL2 = 0x400; // SMPSEL2
    static constexpr uint32_t ADC_SMPR_SMPSEL1 = 0x200; // SMPSEL1
    static constexpr uint32_t ADC_SMPR_SMPSEL0 = 0x100; // SMPSEL0
    typedef bit_field_t<4, 0x7> ADC_SMPR_SMP2; // SMP2
    typedef bit_field_t<0, 0x7> ADC_SMPR_SMP1; // SMP1


    static constexpr uint32_t ADC_AWD1TR_RESET_VALUE = 0xfff0000; // Reset value
    typedef bit_field_t<16, 0xfff> ADC_AWD1TR_HT1; // HT1
    typedef bit_field_t<0, 0xfff> ADC_AWD1TR_LT1; // LT1

    static constexpr uint32_t ADC_AWD2TR_RESET_VALUE = 0xfff0000; // Reset value
    typedef bit_field_t<16, 0xfff> ADC_AWD2TR_HT2; // HT2
    typedef bit_field_t<0, 0xfff> ADC_AWD2TR_LT2; // LT2

    static constexpr uint32_t ADC_CHSELRMOD0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffff> ADC_CHSELRMOD0_CHSEL; // CHSEL
    typedef bit_field_t<0, 0xf> ADC_CHSELRMOD0_SQ1; // SQ1
    typedef bit_field_t<4, 0xf> ADC_CHSELRMOD0_SQ2; // SQ2
    typedef bit_field_t<8, 0xf> ADC_CHSELRMOD0_SQ3; // SQ3
    typedef bit_field_t<12, 0xf> ADC_CHSELRMOD0_SQ4; // SQ4
    typedef bit_field_t<16, 0xf> ADC_CHSELRMOD0_SQ5; // SQ5
    typedef bit_field_t<20, 0xf> ADC_CHSELRMOD0_SQ6; // SQ6
    typedef bit_field_t<24, 0xf> ADC_CHSELRMOD0_SQ7; // SQ7
    typedef bit_field_t<28, 0xf> ADC_CHSELRMOD0_SQ8; // SQ8

    static constexpr uint32_t ADC_AWD3TR_RESET_VALUE = 0xfff0000; // Reset value
    typedef bit_field_t<16, 0xfff> ADC_AWD3TR_HT3; // HT3
    typedef bit_field_t<0, 0xfff> ADC_AWD3TR_LT3; // LT3


    static constexpr uint32_t ADC_DR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> ADC_DR_DATA; // DATA

    static constexpr uint32_t ADC_PWR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ADC_PWR_VREFSECSMP = 0x8; // VREFSECSMP
    static constexpr uint32_t ADC_PWR_VREFPROT = 0x4; // VREFPROT
    static constexpr uint32_t ADC_PWR_DPD = 0x2; // DPD
    static constexpr uint32_t ADC_PWR_AUTOFF = 0x1; // AUTOFF


    static constexpr uint32_t ADC_AWD2CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ADC_AWD2CR_AWD2CH23 = 0x800000; // AWD2CH23
    static constexpr uint32_t ADC_AWD2CR_AWD2CH22 = 0x400000; // AWD2CH22
    static constexpr uint32_t ADC_AWD2CR_AWD2CH21 = 0x200000; // AWD2CH21
    static constexpr uint32_t ADC_AWD2CR_AWD2CH20 = 0x100000; // AWD2CH20
    static constexpr uint32_t ADC_AWD2CR_AWD2CH19 = 0x80000; // AWD2CH19
    static constexpr uint32_t ADC_AWD2CR_AWD2CH18 = 0x40000; // AWD2CH18
    static constexpr uint32_t ADC_AWD2CR_AWD2CH17 = 0x20000; // AWD2CH17
    static constexpr uint32_t ADC_AWD2CR_AWD2CH16 = 0x10000; // AWD2CH16
    static constexpr uint32_t ADC_AWD2CR_AWD2CH15 = 0x8000; // AWD2CH15
    static constexpr uint32_t ADC_AWD2CR_AWD2CH14 = 0x4000; // AWD2CH14
    static constexpr uint32_t ADC_AWD2CR_AWD2CH13 = 0x2000; // AWD2CH13
    static constexpr uint32_t ADC_AWD2CR_AWD2CH12 = 0x1000; // AWD2CH12
    static constexpr uint32_t ADC_AWD2CR_AWD2CH11 = 0x800; // AWD2CH11
    static constexpr uint32_t ADC_AWD2CR_AWD2CH10 = 0x400; // AWD2CH10
    static constexpr uint32_t ADC_AWD2CR_AWD2CH9 = 0x200; // AWD2CH9
    static constexpr uint32_t ADC_AWD2CR_AWD2CH8 = 0x100; // AWD2CH8
    static constexpr uint32_t ADC_AWD2CR_AWD2CH7 = 0x80; // AWD2CH7
    static constexpr uint32_t ADC_AWD2CR_AWD2CH6 = 0x40; // AWD2CH6
    static constexpr uint32_t ADC_AWD2CR_AWD2CH5 = 0x20; // AWD2CH5
    static constexpr uint32_t ADC_AWD2CR_AWD2CH4 = 0x10; // AWD2CH4
    static constexpr uint32_t ADC_AWD2CR_AWD2CH3 = 0x8; // AWD2CH3
    static constexpr uint32_t ADC_AWD2CR_AWD2CH2 = 0x4; // AWD2CH2
    static constexpr uint32_t ADC_AWD2CR_AWD2CH1 = 0x2; // AWD2CH1
    static constexpr uint32_t ADC_AWD2CR_AWD2CH0 = 0x1; // AWD2CH0

    static constexpr uint32_t ADC_AWD3CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ADC_AWD3CR_AWD3CH23 = 0x800000; // AWD3CH23
    static constexpr uint32_t ADC_AWD3CR_AWD3CH22 = 0x400000; // AWD3CH22
    static constexpr uint32_t ADC_AWD3CR_AWD3CH21 = 0x200000; // AWD3CH21
    static constexpr uint32_t ADC_AWD3CR_AWD3CH20 = 0x100000; // AWD3CH20
    static constexpr uint32_t ADC_AWD3CR_AWD3CH19 = 0x80000; // AWD3CH19
    static constexpr uint32_t ADC_AWD3CR_AWD3CH18 = 0x40000; // AWD3CH18
    static constexpr uint32_t ADC_AWD3CR_AWD3CH17 = 0x20000; // AWD3CH17
    static constexpr uint32_t ADC_AWD3CR_AWD3CH16 = 0x10000; // AWD3CH16
    static constexpr uint32_t ADC_AWD3CR_AWD3CH15 = 0x8000; // AWD3CH15
    static constexpr uint32_t ADC_AWD3CR_AWD3CH14 = 0x4000; // AWD3CH14
    static constexpr uint32_t ADC_AWD3CR_AWD3CH13 = 0x2000; // AWD3CH13
    static constexpr uint32_t ADC_AWD3CR_AWD3CH12 = 0x1000; // AWD3CH12
    static constexpr uint32_t ADC_AWD3CR_AWD3CH11 = 0x800; // AWD3CH11
    static constexpr uint32_t ADC_AWD3CR_AWD3CH10 = 0x400; // AWD3CH10
    static constexpr uint32_t ADC_AWD3CR_AWD3CH9 = 0x200; // AWD3CH9
    static constexpr uint32_t ADC_AWD3CR_AWD3CH8 = 0x100; // AWD3CH8
    static constexpr uint32_t ADC_AWD3CR_AWD3CH7 = 0x80; // AWD3CH7
    static constexpr uint32_t ADC_AWD3CR_AWD3CH6 = 0x40; // AWD3CH6
    static constexpr uint32_t ADC_AWD3CR_AWD3CH5 = 0x20; // AWD3CH5
    static constexpr uint32_t ADC_AWD3CR_AWD3CH4 = 0x10; // AWD3CH4
    static constexpr uint32_t ADC_AWD3CR_AWD3CH3 = 0x8; // AWD3CH3
    static constexpr uint32_t ADC_AWD3CR_AWD3CH2 = 0x4; // AWD3CH2
    static constexpr uint32_t ADC_AWD3CR_AWD3CH1 = 0x2; // AWD3CH1
    static constexpr uint32_t ADC_AWD3CR_AWD3CH0 = 0x1; // AWD3CH0


    static constexpr uint32_t ADC_CALFACT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7f> ADC_CALFACT_CALFACT; // CALFACT


    static constexpr uint32_t ADC_OR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ADC_OR_CHN21SEL = 0x1; // CHN21SEL


    static constexpr uint32_t ADC_CCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ADC_CCR_VBATEN = 0x1000000; // VBATEN
    static constexpr uint32_t ADC_CCR_VSENSESEL = 0x800000; // VSENSESEL
    static constexpr uint32_t ADC_CCR_VREFEN = 0x400000; // VREFEN
    typedef bit_field_t<18, 0xf> ADC_CCR_PRESC; // PRESC
};

template<>
struct peripheral_t<STM32U5xx, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32u5xx_adc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, SEC_ADC1>
{
    static constexpr periph_t P = SEC_ADC1;
    using T = stm32u5xx_adc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, ADC4>
{
    static constexpr periph_t P = ADC4;
    using T = stm32u5xx_adc4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, SEC_ADC4>
{
    static constexpr periph_t P = SEC_ADC4;
    using T = stm32u5xx_adc4_t;
    static T& V;
};

using adc1_t = peripheral_t<svd, ADC1>;
using adc4_t = peripheral_t<svd, ADC4>;
using sec_adc1_t = peripheral_t<svd, SEC_ADC1>;
using sec_adc4_t = peripheral_t<svd, SEC_ADC4>;

template<int INST> struct adc_traits {};

template<> struct adc_traits<1>
{
    using adc = adc1_t;
};

template<> struct adc_traits<4>
{
    using adc = adc4_t;
};
