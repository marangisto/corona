#pragma once

////
//
//      STM32H7 ADC peripherals
//
///

// ADC1: Analog to Digital Converter

struct stm32h723_adc1_t
{
    volatile uint32_t ADC_ISR; // ADC interrupt and status register
    volatile uint32_t ADC_IER; // ADC interrupt enable register
    volatile uint32_t ADC_CR; // ADC control register
    volatile uint32_t ADC_CFGR; // ADC configuration register
    volatile uint32_t ADC_CFGR2; // ADC configuration register 2
    volatile uint32_t ADC_SMPR1; // ADC sample time register 1
    volatile uint32_t ADC_SMPR2; // ADC sample time register 2
    volatile uint32_t ADC_PCSEL; // ADC channel preselection register
    volatile uint32_t ADC_LTR1; // ADC watchdog threshold register 1
    volatile uint32_t ADC_HTR1; // ADC watchdog threshold register 1
    reserved_t<0x2> _0x28;
    volatile uint32_t ADC_SQR1; // ADC regular sequence register 1
    volatile uint32_t ADC_SQR2; // ADC regular sequence register 2
    volatile uint32_t ADC_SQR3; // ADC regular sequence register 3
    volatile uint32_t ADC_SQR4; // ADC regular sequence register 4
    volatile uint32_t ADC_DR; // ADC regular Data Register
    reserved_t<0x2> _0x44;
    volatile uint32_t ADC_JSQR; // ADC injected sequence register
    reserved_t<0x4> _0x50;
    volatile uint32_t ADC_OFR1; // ADC injected channel 1 offset register
    volatile uint32_t ADC_OFR2; // ADC injected channel 2 offset register
    volatile uint32_t ADC_OFR3; // ADC injected channel 3 offset register
    volatile uint32_t ADC_OFR4; // ADC injected channel 4 offset register
    reserved_t<0x4> _0x70;
    volatile uint32_t ADC_JDR1; // ADC injected channel 1 data register
    volatile uint32_t ADC_JDR2; // ADC injected channel 2 data register
    volatile uint32_t ADC_JDR3; // ADC injected channel 3 data register
    volatile uint32_t ADC_JDR4; // ADC injected channel 4 data register
    reserved_t<0x4> _0x90;
    volatile uint32_t ADC_AWD2CR; // ADC analog watchdog 2 configuration register
    volatile uint32_t ADC_AWD3CR; // ADC analog watchdog 3 configuration register
    reserved_t<0x2> _0xa8;
    volatile uint32_t ADC_LTR2; // ADC watchdog lower threshold register 2
    volatile uint32_t ADC_HTR2; // ADC watchdog higher threshold register 2
    volatile uint32_t ADC_LTR3; // ADC watchdog lower threshold register 3
    volatile uint32_t ADC_HTR3; // ADC watchdog higher threshold register 3
    volatile uint32_t ADC_DIFSEL; // ADC differential mode selection register
    volatile uint32_t ADC_CALFACT; // ADC calibration factors register
    volatile uint32_t ADC_CALFACT2; // ADC calibration factor register 2

    static constexpr uint32_t ADC_ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ADC_ISR_ADRDY = 0x1; // ADC ready This bit is set by hardware after the ADC has been enabled (bit ADEN=1) and when the ADC reaches a state where it is ready to accept conversion requests. It is cleared by software writing 1 to it.
    static constexpr uint32_t ADC_ISR_EOSMP = 0x2; // End of sampling flag This bit is set by hardware during the conversion of any channel (only for regular channels), at the end of the sampling phase.
    static constexpr uint32_t ADC_ISR_EOC = 0x4; // End of conversion flag This bit is set by hardware at the end of each regular conversion of a channel when a new data is available in the ADC_DR register. It is cleared by software writing 1 to it or by reading the ADC_DR register
    static constexpr uint32_t ADC_ISR_EOS = 0x8; // End of regular sequence flag This bit is set by hardware at the end of the conversions of a regular sequence of channels. It is cleared by software writing 1 to it.
    static constexpr uint32_t ADC_ISR_OVR = 0x10; // ADC overrun This bit is set by hardware when an overrun occurs on a regular channel, meaning that a new conversion has completed while the EOC flag was already set. It is cleared by software writing 1 to it.
    static constexpr uint32_t ADC_ISR_JEOC = 0x20; // Injected channel end of conversion flag This bit is set by hardware at the end of each injected conversion of a channel when a new data is available in the corresponding ADC_JDRy register. It is cleared by software writing 1 to it or by reading the corresponding ADC_JDRy register
    static constexpr uint32_t ADC_ISR_JEOS = 0x40; // Injected channel end of sequence flag This bit is set by hardware at the end of the conversions of all injected channels in the group. It is cleared by software writing 1 to it.
    static constexpr uint32_t ADC_ISR_AWD1 = 0x80; // Analog watchdog 1 flag This bit is set by hardware when the converted voltage crosses the values programmed in the fields LT1[11:0] and HT1[11:0] of ADC_TR1 register. It is cleared by software. writing 1 to it.
    static constexpr uint32_t ADC_ISR_AWD2 = 0x100; // Analog watchdog 2 flag This bit is set by hardware when the converted voltage crosses the values programmed in the fields LT2[7:0] and HT2[7:0] of ADC_TR2 register. It is cleared by software writing 1 to it.
    static constexpr uint32_t ADC_ISR_AWD3 = 0x200; // Analog watchdog 3 flag This bit is set by hardware when the converted voltage crosses the values programmed in the fields LT3[7:0] and HT3[7:0] of ADC_TR3 register. It is cleared by software writing 1 to it.
    static constexpr uint32_t ADC_ISR_JQOVF = 0x400; // Injected context queue overflow This bit is set by hardware when an Overflow of the Injected Queue of Context occurs. It is cleared by software writing 1 to it. Refer to for more information.
    static constexpr uint32_t ADC_ISR_LDORDY = 0x1000; // ADC LDO output voltage ready bit This bit is set and cleared by hardware. It indicates that the ADC internal LDO output is ready and that the ADC can be enabled or calibrated. Note: Refer to for the availability of the LDO regulator.

    static constexpr uint32_t ADC_IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ADC_IER_ADRDYIE = 0x1; // ADC ready interrupt enable This bit is set and cleared by software to enable/disable the ADC Ready interrupt. Note: The software is allowed to write this bit only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_IER_EOSMPIE = 0x2; // End of sampling flag interrupt enable for regular conversions This bit is set and cleared by software to enable/disable the end of the sampling phase interrupt for regular conversions. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no regular conversion is ongoing).
    static constexpr uint32_t ADC_IER_EOCIE = 0x4; // End of regular conversion interrupt enable This bit is set and cleared by software to enable/disable the end of a regular conversion interrupt. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no regular conversion is ongoing).
    static constexpr uint32_t ADC_IER_EOSIE = 0x8; // End of regular sequence of conversions interrupt enable This bit is set and cleared by software to enable/disable the end of regular sequence of conversions interrupt. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no regular conversion is ongoing).
    static constexpr uint32_t ADC_IER_OVRIE = 0x10; // Overrun interrupt enable This bit is set and cleared by software to enable/disable the Overrun interrupt of a regular conversion. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no regular conversion is ongoing).
    static constexpr uint32_t ADC_IER_JEOCIE = 0x20; // End of injected conversion interrupt enable This bit is set and cleared by software to enable/disable the end of an injected conversion interrupt. Note: The software is allowed to write this bit only when JADSTART is cleared to 0 (no injected conversion is ongoing).
    static constexpr uint32_t ADC_IER_JEOSIE = 0x40; // End of injected sequence of conversions interrupt enable This bit is set and cleared by software to enable/disable the end of injected sequence of conversions interrupt. Note: The software is allowed to write this bit only when JADSTART=0 (which ensures that no injected conversion is ongoing).
    static constexpr uint32_t ADC_IER_AWD1IE = 0x80; // Analog watchdog 1 interrupt enable This bit is set and cleared by software to enable/disable the analog watchdog 1 interrupt. Note: The software is allowed to write this bit only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_IER_AWD2IE = 0x100; // Analog watchdog 2 interrupt enable This bit is set and cleared by software to enable/disable the analog watchdog 2 interrupt. Note: The software is allowed to write this bit only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_IER_AWD3IE = 0x200; // Analog watchdog 3 interrupt enable This bit is set and cleared by software to enable/disable the analog watchdog 2 interrupt. Note: The software is allowed to write this bit only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_IER_JQOVFIE = 0x400; // Injected context queue overflow interrupt enable This bit is set and cleared by software to enable/disable the Injected Context Queue Overflow interrupt. Note: The software is allowed to write this bit only when JADSTART=0 (which ensures that no injected conversion is ongoing).

    static constexpr uint32_t ADC_CR_RESET_VALUE = 0x20000000; // Reset value
    static constexpr uint32_t ADC_CR_ADEN = 0x1; // ADC enable control This bit is set by software to enable the ADC. The ADC will be effectively ready to operate once the flag ADRDY has been set. It is cleared by hardware when the ADC is disabled, after the execution of the ADDIS command. Note: The software is allowed to set ADEN only when all bits of ADC_CR registers are 0 (ADCAL=0, JADSTART=0, ADSTART=0, ADSTP=0, ADDIS=0 and ADEN=0) except for bit ADVREGEN which must be 1 (and the software must have wait for the startup time of the voltage regulator)
    static constexpr uint32_t ADC_CR_ADDIS = 0x2; // ADC disable command This bit is set by software to disable the ADC (ADDIS command) and put it into power-down state (OFF state). It is cleared by hardware once the ADC is effectively disabled (ADEN is also cleared by hardware at this time). Note: The software is allowed to set ADDIS only when ADEN=1 and both ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing)
    static constexpr uint32_t ADC_CR_ADSTART = 0x4; // ADC start of regular conversion This bit is set by software to start ADC conversion of regular channels. Depending on the configuration bits EXTEN, a conversion will start immediately (software trigger configuration) or once a regular hardware trigger event occurs (hardware trigger configuration). It is cleared by hardware: in single conversion mode (CONT=0, DISCEN=0) when software trigger is selected (EXTEN=0x0): at the assertion of the End of Regular Conversion Sequence (EOS) flag. In discontinuous conversion mode (CONT=0, DISCEN=1), when the software trigger is selected (EXTEN=0x0): at the end of conversion (EOC) flag. in all other cases: after the execution of the ADSTP command, at the same time that ADSTP is cleared by hardware. Note: The software is allowed to set ADSTART only when ADEN=1 and ADDIS=0 (ADC is enabled and there is no pending request to disable the ADC) In auto-injection mode (JAUTO=1), regular and auto-injected conversions are started by setting bit ADSTART (JADSTART must be kept cleared)
    static constexpr uint32_t ADC_CR_JADSTART = 0x8; // ADC start of injected conversion This bit is set by software to start ADC conversion of injected channels. Depending on the configuration bits JEXTEN, a conversion will start immediately (software trigger configuration) or once an injected hardware trigger event occurs (hardware trigger configuration). It is cleared by hardware: in single conversion mode when software trigger is selected (JEXTSEL=0x0): at the assertion of the End of Injected Conversion Sequence (JEOS) flag. in all cases: after the execution of the JADSTP command, at the same time that JADSTP is cleared by hardware. Note: The software is allowed to set JADSTART only when ADEN=1 and ADDIS=0 (ADC is enabled and there is no pending request to disable the ADC). In auto-injection mode (JAUTO=1), regular and auto-injected conversions are started by setting bit ADSTART (JADSTART must be kept cleared)
    static constexpr uint32_t ADC_CR_ADSTP = 0x10; // ADC stop of regular conversion command This bit is set by software to stop and discard an ongoing regular conversion (ADSTP Command). It is cleared by hardware when the conversion is effectively discarded and the ADC regular sequence and triggers can be re-configured. The ADC is then ready to accept a new start of regular conversions (ADSTART command). Note: The software is allowed to set ADSTP only when ADSTART=1 and ADDIS=0 (ADC is enabled and eventually converting a regular conversion and there is no pending request to disable the ADC). In auto-injection mode (JAUTO=1), setting ADSTP bit aborts both regular and injected conversions (do not use JADSTP). In dual ADC regular simultaneous mode and interleaved mode, the bit ADSTP of the master ADC must be used to stop regular conversions. The other ADSTP bit is inactive.
    static constexpr uint32_t ADC_CR_JADSTP = 0x20; // ADC stop of injected conversion command This bit is set by software to stop and discard an ongoing injected conversion (JADSTP Command). It is cleared by hardware when the conversion is effectively discarded and the ADC injected sequence and triggers can be re-configured. The ADC is then ready to accept a new start of injected conversions (JADSTART command). Note: The software is allowed to set JADSTP only when JADSTART=1 and ADDIS=0 (ADC is enabled and eventually converting an injected conversion and there is no pending request to disable the ADC). In auto-injection mode (JAUTO=1), setting ADSTP bit aborts both regular and injected conversions (do not use JADSTP)
    typedef bit_field_t<8, 0x3> ADC_CR_BOOST; // Boost mode control This bitfield is set and cleared by software to enable/disable the Boost mode. Note: The software is allowed to write this bit only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing). When dual mode is enabled (bits DAMDF of ADCx_CCR register are not equal to zero), the BOOST bitfield of the slave ADC is no more writable and its content must be equal to the master ADC BOOST bitfield.
    static constexpr uint32_t ADC_CR_ADCALLIN = 0x10000; // Linearity calibration This bit is set and cleared by software to enable the Linearity calibration. Note: The software is allowed to write this bit only when the ADC is disabled and is not calibrating (ADCAL=0, JADSTART=0, JADSTP=0, ADSTART=0, ADSTP=0, ADDIS=0 and ADEN=0).
    static constexpr uint32_t ADC_CR_LINCALRDYW1 = 0x400000; // Linearity calibration ready Word 1 Refer to LINCALRDYW6 description. Note: ADC_CALFACT2[29:0] corresponds linearity correction factor bits[29:0]. The software is allowed to toggle this bit only if the LINCALRDYW6, LINCALRDYW5, LINCALRDYW4, LINCALRDYW3 and LINCALRDYW2 bits are left unchanged.
    static constexpr uint32_t ADC_CR_LINCALRDYW2 = 0x800000; // Linearity calibration ready Word 2 Refer to LINCALRDYW6 description. Note: ADC_CALFACT2[29:0] corresponds linearity correction factor bits[59:30]. The software is allowed to toggle this bit only if the LINCALRDYW6, LINCALRDYW5, LINCALRDYW4, LINCALRDYW3 and LINCALRDYW1 bits are left unchanged.
    static constexpr uint32_t ADC_CR_LINCALRDYW3 = 0x1000000; // Linearity calibration ready Word 3 Refer to LINCALRDYW6 description. Note: ADC_CALFACT2[29:0] corresponds linearity correction factor bits[89:60]. The software is allowed to toggle this bit only if the LINCALRDYW6, LINCALRDYW5, LINCALRDYW4, LINCALRDYW2 and LINCALRDYW1 bits are left unchanged.
    static constexpr uint32_t ADC_CR_LINCALRDYW4 = 0x2000000; // Linearity calibration ready Word 4 Refer to LINCALRDYW6 description. Note: ADC_CALFACT2[29:0] correspond linearity correction factor bits[119:90]. The software is allowed to toggle this bit only if the LINCALRDYW6, LINCALRDYW5, LINCALRDYW3, LINCALRDYW2 and LINCALRDYW1 bits are left unchanged.
    static constexpr uint32_t ADC_CR_LINCALRDYW5 = 0x4000000; // Linearity calibration ready Word 5 Refer to LINCALRDYW6 description. Note: ADC_CALFACT2[29:0] corresponds linearity correction factor bits[149:120]. The software is allowed to toggle this bit only if the LINCALRDYW6, LINCALRDYW5, LINCALRDYW3, LINCALRDYW2 and LINCALRDYW1 bits are left unchanged.
    static constexpr uint32_t ADC_CR_LINCALRDYW6 = 0x8000000; // Linearity calibration ready Word 6 This control / status bit allows to read/write the 6th linearity calibration factor. When the linearity calibration is complete, this bit is set. A bit clear will launch the transfer of the linearity factor 6 into the LINCALFACT[29:0] of the ADC_CALFACT2 register. The bit will be reset by hardware when the ADC_CALFACT2 register can be read (software must poll the bit until it is cleared). When the LINCALRDYW6 bit is reset, a new linearity factor 6 value can be written into the LINCALFACT[29:0] of the ADC_CALFACT2 register. A bit set will launch the linearity factor 6 update and the bit will be effectively set by hardware once the update will be done (software must poll the bit until it is set to indicate the write is effective). Note: ADC_CALFACT2[29:10] contains 0. ADC_CALFACT2[9:0] corresponds linearity correction factor bits[159:150]. The software is allowed to toggle this bit only if the LINCALRDYW5, LINCALRDYW4, LINCALRDYW3, LINCALRDYW2 and LINCALRDYW1 bits are left unchanged, see chapter for details. The software is allowed to update the linearity calibration factor by writing LINCALRDYWx only when ADEN=1 and ADSTART=0 and JADSTART=0 (ADC enabled and no conversion is ongoing)
    static constexpr uint32_t ADC_CR_ADVREGEN = 0x10000000; // ADC voltage regulator enable This bits is set by software to enable the ADC voltage regulator. Before performing any operation such as launching a calibration or enabling the ADC, the ADC voltage regulator must first be enabled and the software must wait for the regulator start-up time. For more details about the ADC voltage regulator enable and disable sequences, refer to (ADVREGEN). The software can program this bitfield only when the ADC is disabled (ADCAL=0, JADSTART=0, ADSTART=0, ADSTP=0, ADDIS=0 and ADEN=0).
    static constexpr uint32_t ADC_CR_DEEPPWD = 0x20000000; // Deep-power-down enable This bit is set and cleared by software to put the ADC in deep-power-down mode. Note: The software is allowed to write this bit only when the ADC is disabled (ADCAL=0, JADSTART=0, JADSTP=0, ADSTART=0, ADSTP=0, ADDIS=0 and ADEN=0).
    static constexpr uint32_t ADC_CR_ADCALDIF = 0x40000000; // Differential mode for calibration This bit is set and cleared by software to configure the single-ended or differential inputs mode for the calibration. Note: The software is allowed to write this bit only when the ADC is disabled and is not calibrating (ADCAL=0, JADSTART=0, JADSTP=0, ADSTART=0, ADSTP=0, ADDIS=0 and ADEN=0).
    static constexpr uint32_t ADC_CR_ADCAL = 0x80000000; // ADC calibration This bit is set by software to start the calibration of the ADC. Program first the bit ADCALDIF to determine if this calibration applies for single-ended or differential inputs mode. It is cleared by hardware after calibration is complete. Note: The software is allowed to launch a calibration by setting ADCAL only when ADEN=0. The software is allowed to update the calibration factor by writing ADC_CALFACT only when ADEN=1 and ADSTART=0 and JADSTART=0 (ADC enabled and no conversion is ongoing)

    static constexpr uint32_t ADC_CFGR_RESET_VALUE = 0x80000000; // Reset value
    typedef bit_field_t<0, 0x3> ADC_CFGR_DMNGT; // Data Management configuration This bit is set and cleared by software to select how ADC interface output data are managed. Note: The software is allowed to write this bit only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing). In dual-ADC modes, this bit is not relevant and replaced by control bit DAMDF of the ADCx_CCR register.
    typedef bit_field_t<2, 0x7> ADC_CFGR_RES; // Data resolution These bits are written by software to select the resolution of the conversion. Others: Reserved, must not be used. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<5, 0x1f> ADC_CFGR_EXTSEL; // External trigger selection for regular group These bits select the external event used to trigger the start of conversion of a regular group: ... Note: The software is allowed to write these bits only when ADSTART=0 (which ensures that no regular conversion is ongoing).
    typedef bit_field_t<10, 0x3> ADC_CFGR_EXTEN; // External trigger enable and polarity selection for regular channels These bits are set and cleared by software to select the external trigger polarity and enable the trigger of a regular group. Note: The software is allowed to write these bits only when ADSTART=0 (which ensures that no regular conversion is ongoing).
    static constexpr uint32_t ADC_CFGR_OVRMOD = 0x1000; // Overrun Mode This bit is set and cleared by software and configure the way data overrun is managed. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no regular conversion is ongoing).
    static constexpr uint32_t ADC_CFGR_CONT = 0x2000; // Single / continuous conversion mode for regular conversions This bit is set and cleared by software. If it is set, regular conversion takes place continuously until it is cleared. Note: It is not possible to have both discontinuous mode and continuous mode enabled: it is forbidden to set both DISCEN=1 and CONT=1. The software is allowed to write this bit only when ADSTART=0 (which ensures that no regular conversion is ongoing). When dual mode is enabled (DAMDF bits in ADCx_CCR register are not equal to zero), the bit CONT of the slave ADC is no more writable and its content is equal to the bit CONT of the master ADC.
    static constexpr uint32_t ADC_CFGR_AUTDLY = 0x4000; // Delayed conversion mode This bit is set and cleared by software to enable/disable the Auto Delayed Conversion mode.. Note: The software is allowed to write this bit only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing). When dual mode is enabled (DAMDF bits in ADCx_CCR register are not equal to zero), the bit AUTDLY of the slave ADC is no more writable and its content is equal to the bit AUTDLY of the master ADC.
    static constexpr uint32_t ADC_CFGR_DISCEN = 0x10000; // Discontinuous mode for regular channels This bit is set and cleared by software to enable/disable Discontinuous mode for regular channels. Note: It is not possible to have both discontinuous mode and continuous mode enabled: it is forbidden to set both DISCEN=1 and CONT=1. It is not possible to use both auto-injected mode and discontinuous mode simultaneously: the bits DISCEN and JDISCEN must be kept cleared by software when JAUTO is set. The software is allowed to write this bit only when ADSTART=0 (which ensures that no regular conversion is ongoing). When dual mode is enabled (DAMDF bits in ADCx_CCR register are not equal to zero), the bit DISCEN of the slave ADC is no more writable and its content is equal to the bit DISCEN of the master ADC.
    typedef bit_field_t<17, 0x7> ADC_CFGR_DISCNUM; // Discontinuous mode channel count These bits are written by software to define the number of regular channels to be converted in discontinuous mode, after receiving an external trigger. ... Note: The software is allowed to write these bits only when ADSTART=0 (which ensures that no regular conversion is ongoing). When dual mode is enabled (DAMDF bits in ADCx_CCR register are not equal to zero), the bits DISCNUM[2:0] of the slave ADC are no more writable and their content is equal to the bits DISCNUM[2:0] of the master ADC.
    static constexpr uint32_t ADC_CFGR_JDISCEN = 0x100000; // Discontinuous mode on injected channels This bit is set and cleared by software to enable/disable discontinuous mode on the injected channels of a group. Note: The software is allowed to write this bit only when JADSTART=0 (which ensures that no injected conversion is ongoing). It is not possible to use both auto-injected mode and discontinuous mode simultaneously: the bits DISCEN and JDISCEN must be kept cleared by software when JAUTO is set. When dual mode is enabled (bits DAMDF of ADCx_CCR register are not equal to zero), the bit JDISCEN of the slave ADC is no more writable and its content is equal to the bit JDISCEN of the master ADC.
    static constexpr uint32_t ADC_CFGR_JQM = 0x200000; // JSQR queue mode This bit is set and cleared by software. It defines how an empty Queue is managed. Refer to for more information. Note: The software is allowed to write this bit only when JADSTART=0 (which ensures that no injected conversion is ongoing). When dual mode is enabled (DAMDF bits in ADCx_CCR register are not equal to zero), the bit JQM of the slave ADC is no more writable and its content is equal to the bit JQM of the master ADC.
    static constexpr uint32_t ADC_CFGR_AWD1SGL = 0x400000; // Enable the watchdog 1 on a single channel or on all channels This bit is set and cleared by software to enable the analog watchdog on the channel identified by the AWD1CH[4:0] bits or on all the channels Note: The software is allowed to write this bit only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_CFGR_AWD1EN = 0x800000; // Analog watchdog 1 enable on regular channels This bit is set and cleared by software Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no regular conversion is ongoing).
    static constexpr uint32_t ADC_CFGR_JAWD1EN = 0x1000000; // Analog watchdog 1 enable on injected channels This bit is set and cleared by software Note: The software is allowed to write this bit only when JADSTART=0 (which ensures that no injected conversion is ongoing).
    static constexpr uint32_t ADC_CFGR_JAUTO = 0x2000000; // Automatic injected group conversion This bit is set and cleared by software to enable/disable automatic injected group conversion after regular group conversion. Note: The software is allowed to write this bit only when ADSTART=0 and JADSTART=0 (which ensures that no regular nor injected conversion is ongoing). When dual mode is enabled (DAMDF bits in ADCx_CCR register are not equal to zero), the bit JAUTO of the slave ADC is no more writable and its content is equal to the bit JAUTO of the master ADC.
    typedef bit_field_t<26, 0x1f> ADC_CFGR_AWD1CH; // Analog watchdog 1 channel selection These bits are set and cleared by software. They select the input channel to be guarded by the analog watchdog. ..... others: Reserved, must not be used Note: The channel selected by AWD1CH must be also selected into the SQRi or JSQRi registers. The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_CFGR_JQDIS = 0x80000000; // Injected Queue disable These bits are set and cleared by software to disable the Injected Queue mechanism: Note: The software is allowed to write this bit only when ADSTART=0 and JADSTART=0 (which ensures that no regular nor injected conversion is ongoing). A set or reset of JQDIS bit causes the injected queue to be flushed and the JSQR register is cleared.

    static constexpr uint32_t ADC_CFGR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ADC_CFGR2_ROVSE = 0x1; // Regular Oversampling Enable This bit is set and cleared by software to enable regular oversampling. Note: The software is allowed to write this bit only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing)
    static constexpr uint32_t ADC_CFGR2_JOVSE = 0x2; // Injected Oversampling Enable This bit is set and cleared by software to enable injected oversampling. Note: The software is allowed to write this bit only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing)
    typedef bit_field_t<5, 0xf> ADC_CFGR2_OVSS; // Oversampling right shift This bitfield is set and cleared by software to define the right shifting applied to the raw oversampling result. Others: Reserved, must not be used. Note: The software is allowed to write these bits only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_CFGR2_TROVS = 0x200; // Triggered Regular Oversampling This bit is set and cleared by software to enable triggered oversampling Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_CFGR2_ROVSM = 0x400; // Regular Oversampling mode This bit is set and cleared by software to select the regular oversampling mode. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_CFGR2_RSHIFT1 = 0x800; // Right-shift data after Offset 1 correction This bitfield is set and cleared by software to right-shift 1-bit data after offset1 correction. This bit can only be used for 8-bit and 16-bit data format (see (ADC_DR, ADC_JDRy, OFFSETy, OFFSETy_CH, OVSS, LSHIFT, RSHIFT, SSATE) for details).
    static constexpr uint32_t ADC_CFGR2_RSHIFT2 = 0x1000; // Right-shift data after Offset 2 correction Refer to RSHIFT1 description
    static constexpr uint32_t ADC_CFGR2_RSHIFT3 = 0x2000; // Right-shift data after Offset 3 correction Refer to RSHIFT1 description
    static constexpr uint32_t ADC_CFGR2_RSHIFT4 = 0x4000; // Right-shift data after Offset 4 correction Refer to RSHIFT1 description.
    typedef bit_field_t<16, 0x3ff> ADC_CFGR2_OSVR; // Oversampling ratio This bitfield is set and cleared by software to define the oversampling ratio. 2: 3x ... 1023: 1024x Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<28, 0xf> ADC_CFGR2_LSHIFT; // Left shift factor This bitfield is set and cleared by software to define the left shifting applied to the final result with or without oversampling. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing).

    static constexpr uint32_t ADC_SMPR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> ADC_SMPR1_SMP0; // Channel x sampling time selection (x = 0 to 9) These bits are written by software to select the sampling time individually for each channel. During sample cycles, the channel selection bits must remain unchanged. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<3, 0x7> ADC_SMPR1_SMP1; // Channel x sampling time selection (x = 0 to 9) These bits are written by software to select the sampling time individually for each channel. During sample cycles, the channel selection bits must remain unchanged. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<6, 0x7> ADC_SMPR1_SMP2; // Channel x sampling time selection (x = 0 to 9) These bits are written by software to select the sampling time individually for each channel. During sample cycles, the channel selection bits must remain unchanged. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<9, 0x7> ADC_SMPR1_SMP3; // Channel x sampling time selection (x = 0 to 9) These bits are written by software to select the sampling time individually for each channel. During sample cycles, the channel selection bits must remain unchanged. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<12, 0x7> ADC_SMPR1_SMP4; // Channel x sampling time selection (x = 0 to 9) These bits are written by software to select the sampling time individually for each channel. During sample cycles, the channel selection bits must remain unchanged. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<15, 0x7> ADC_SMPR1_SMP5; // Channel x sampling time selection (x = 0 to 9) These bits are written by software to select the sampling time individually for each channel. During sample cycles, the channel selection bits must remain unchanged. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<18, 0x7> ADC_SMPR1_SMP6; // Channel x sampling time selection (x = 0 to 9) These bits are written by software to select the sampling time individually for each channel. During sample cycles, the channel selection bits must remain unchanged. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<21, 0x7> ADC_SMPR1_SMP7; // Channel x sampling time selection (x = 0 to 9) These bits are written by software to select the sampling time individually for each channel. During sample cycles, the channel selection bits must remain unchanged. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<24, 0x7> ADC_SMPR1_SMP8; // Channel x sampling time selection (x = 0 to 9) These bits are written by software to select the sampling time individually for each channel. During sample cycles, the channel selection bits must remain unchanged. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<27, 0x7> ADC_SMPR1_SMP9; // Channel x sampling time selection (x = 0 to 9) These bits are written by software to select the sampling time individually for each channel. During sample cycles, the channel selection bits must remain unchanged. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).

    static constexpr uint32_t ADC_SMPR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> ADC_SMPR2_SMP10; // Channel x sampling time selection (x = 10 to 19) These bits are written by software to select the sampling time individually for each channel. During sampling cycles, the channel selection bits must remain unchanged. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<3, 0x7> ADC_SMPR2_SMP11; // Channel x sampling time selection (x = 10 to 19) These bits are written by software to select the sampling time individually for each channel. During sampling cycles, the channel selection bits must remain unchanged. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<6, 0x7> ADC_SMPR2_SMP12; // Channel x sampling time selection (x = 10 to 19) These bits are written by software to select the sampling time individually for each channel. During sampling cycles, the channel selection bits must remain unchanged. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<9, 0x7> ADC_SMPR2_SMP13; // Channel x sampling time selection (x = 10 to 19) These bits are written by software to select the sampling time individually for each channel. During sampling cycles, the channel selection bits must remain unchanged. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<12, 0x7> ADC_SMPR2_SMP14; // Channel x sampling time selection (x = 10 to 19) These bits are written by software to select the sampling time individually for each channel. During sampling cycles, the channel selection bits must remain unchanged. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<15, 0x7> ADC_SMPR2_SMP15; // Channel x sampling time selection (x = 10 to 19) These bits are written by software to select the sampling time individually for each channel. During sampling cycles, the channel selection bits must remain unchanged. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<18, 0x7> ADC_SMPR2_SMP16; // Channel x sampling time selection (x = 10 to 19) These bits are written by software to select the sampling time individually for each channel. During sampling cycles, the channel selection bits must remain unchanged. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<21, 0x7> ADC_SMPR2_SMP17; // Channel x sampling time selection (x = 10 to 19) These bits are written by software to select the sampling time individually for each channel. During sampling cycles, the channel selection bits must remain unchanged. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<24, 0x7> ADC_SMPR2_SMP18; // Channel x sampling time selection (x = 10 to 19) These bits are written by software to select the sampling time individually for each channel. During sampling cycles, the channel selection bits must remain unchanged. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<27, 0x7> ADC_SMPR2_SMP19; // Channel x sampling time selection (x = 10 to 19) These bits are written by software to select the sampling time individually for each channel. During sampling cycles, the channel selection bits must remain unchanged. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).

    static constexpr uint32_t ADC_PCSEL_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ADC_PCSEL_PCSEL0 = 0x1; // :Channel x (VINP[i]) pre selection (x = 0 to 19) These bits are written by software to pre select the input channel at IO instance to be converted. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_PCSEL_PCSEL1 = 0x2; // :Channel x (VINP[i]) pre selection (x = 0 to 19) These bits are written by software to pre select the input channel at IO instance to be converted. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_PCSEL_PCSEL2 = 0x4; // :Channel x (VINP[i]) pre selection (x = 0 to 19) These bits are written by software to pre select the input channel at IO instance to be converted. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_PCSEL_PCSEL3 = 0x8; // :Channel x (VINP[i]) pre selection (x = 0 to 19) These bits are written by software to pre select the input channel at IO instance to be converted. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_PCSEL_PCSEL4 = 0x10; // :Channel x (VINP[i]) pre selection (x = 0 to 19) These bits are written by software to pre select the input channel at IO instance to be converted. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_PCSEL_PCSEL5 = 0x20; // :Channel x (VINP[i]) pre selection (x = 0 to 19) These bits are written by software to pre select the input channel at IO instance to be converted. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_PCSEL_PCSEL6 = 0x40; // :Channel x (VINP[i]) pre selection (x = 0 to 19) These bits are written by software to pre select the input channel at IO instance to be converted. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_PCSEL_PCSEL7 = 0x80; // :Channel x (VINP[i]) pre selection (x = 0 to 19) These bits are written by software to pre select the input channel at IO instance to be converted. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_PCSEL_PCSEL8 = 0x100; // :Channel x (VINP[i]) pre selection (x = 0 to 19) These bits are written by software to pre select the input channel at IO instance to be converted. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_PCSEL_PCSEL9 = 0x200; // :Channel x (VINP[i]) pre selection (x = 0 to 19) These bits are written by software to pre select the input channel at IO instance to be converted. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_PCSEL_PCSEL10 = 0x400; // :Channel x (VINP[i]) pre selection (x = 0 to 19) These bits are written by software to pre select the input channel at IO instance to be converted. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_PCSEL_PCSEL11 = 0x800; // :Channel x (VINP[i]) pre selection (x = 0 to 19) These bits are written by software to pre select the input channel at IO instance to be converted. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_PCSEL_PCSEL12 = 0x1000; // :Channel x (VINP[i]) pre selection (x = 0 to 19) These bits are written by software to pre select the input channel at IO instance to be converted. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_PCSEL_PCSEL13 = 0x2000; // :Channel x (VINP[i]) pre selection (x = 0 to 19) These bits are written by software to pre select the input channel at IO instance to be converted. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_PCSEL_PCSEL14 = 0x4000; // :Channel x (VINP[i]) pre selection (x = 0 to 19) These bits are written by software to pre select the input channel at IO instance to be converted. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_PCSEL_PCSEL15 = 0x8000; // :Channel x (VINP[i]) pre selection (x = 0 to 19) These bits are written by software to pre select the input channel at IO instance to be converted. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_PCSEL_PCSEL16 = 0x10000; // :Channel x (VINP[i]) pre selection (x = 0 to 19) These bits are written by software to pre select the input channel at IO instance to be converted. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_PCSEL_PCSEL17 = 0x20000; // :Channel x (VINP[i]) pre selection (x = 0 to 19) These bits are written by software to pre select the input channel at IO instance to be converted. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_PCSEL_PCSEL18 = 0x40000; // :Channel x (VINP[i]) pre selection (x = 0 to 19) These bits are written by software to pre select the input channel at IO instance to be converted. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_PCSEL_PCSEL19 = 0x80000; // :Channel x (VINP[i]) pre selection (x = 0 to 19) These bits are written by software to pre select the input channel at IO instance to be converted. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).

    static constexpr uint32_t ADC_LTR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffffff> ADC_LTR1_LTR1; // Analog watchdog 1 lower threshold These bits are written by software to define the lower threshold for the analog watchdog 1. Refer to AWD2CH, AWD3CH, AWD_HTRy, AWD_LTRy, AWDy) Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).

    static constexpr uint32_t ADC_HTR1_RESET_VALUE = 0x3ffffff; // Reset value
    typedef bit_field_t<0, 0x3ffffff> ADC_HTR1_HTR1; // Analog watchdog 1 higher threshold These bits are written by software to define the higher threshold for the analog watchdog 1. Refer to AWD2CH, AWD3CH, AWD_HTRy, AWD_LTRy, AWDy) Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).


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
    typedef bit_field_t<0, 0xffffffff> ADC_DR_RDATA; // Regular Data converted These bits are read-only. They contain the conversion result from the last converted regular channel. The data are left- or right-aligned as described in .


    static constexpr uint32_t ADC_JSQR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> ADC_JSQR_JL; // Injected channel sequence length These bits are written by software to define the total number of conversions in the injected channel conversion sequence. Note: The software is allowed to write these bits only when JADSTART is cleared to 0 (no injected conversion is ongoing).
    typedef bit_field_t<2, 0x1f> ADC_JSQR_JEXTSEL; // External trigger selection for injected group These bits select the external event used to trigger the start of conversion of an injected group: ... Note: The software is allowed to write these bits only when JADSTART is cleared to 0 (no injected conversion is ongoing).
    typedef bit_field_t<7, 0x3> ADC_JSQR_JEXTEN; // External trigger enable and polarity selection for injected channels These bits are set and cleared by software to select the external trigger polarity and enable the trigger of an injected group. If JQDIS=1 (queue disabled), Hardware trigger detection disabled (conversions can be launched by software Note: The software is allowed to write these bits only when JADSTART is cleared to 0 (no injected conversion is ongoing). If JQM=1 and if the Queue of Context becomes empty, the software and hardware triggers of the injected sequence are both internally disabled (refer to Queue of context for injected conversions)
    typedef bit_field_t<9, 0x1f> ADC_JSQR_JSQ1; // 1st conversion in the injected sequence These bits are written by software with the channel number (0..19) assigned as the 1st in the injected conversion sequence. Note: The software is allowed to write these bits only when JADSTART is cleared to 0 (no injected conversion is ongoing) unless the context queue is enabled (JQDIS=0 in ADC_CFGR register).
    typedef bit_field_t<15, 0x1f> ADC_JSQR_JSQ2; // 2nd conversion in the injected sequence These bits are written by software with the channel number (0..19) assigned as the 2nd in the injected conversion sequence. Note: The software is allowed to write these bits only when JADSTART is cleared to 0 (no injected conversion is ongoing) unless the context queue is enabled (JQDIS=0 in ADC_CFGR register).
    typedef bit_field_t<21, 0x1f> ADC_JSQR_JSQ3; // 3rd conversion in the injected sequence These bits are written by software with the channel number (0..19) assigned as the 3rd in the injected conversion sequence. Note: The software is allowed to write these bits only when JADSTART is cleared to 0 (no injected conversion is ongoing) unless the context queue is enabled (JQDIS=0 in ADC_CFGR register).
    typedef bit_field_t<27, 0x1f> ADC_JSQR_JSQ4; // 4th conversion in the injected sequence These bits are written by software with the channel number (0..19) assigned as the 4th in the injected conversion sequence. Note: The software is allowed to write these bits only when JADSTART is cleared to 0 (no injected conversion is ongoing) unless the context queue is enabled (JQDIS=0 in ADC_CFGR register).


    static constexpr uint32_t ADC_OFR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffffff> ADC_OFR1_OFFSET1; // Data offset y for the channel programmed into bits OFFSETy_CH[4:0] These bits are written by software to define the offset y to be subtracted from the raw converted data when converting a channel (can be regular or injected). The channel to which applies the data offset y must be programmed in the bits OFFSETy_CH[4:0]. The conversion result can be read from in the ADC_DR (regular conversion) or from in the ADC_JDRyi registers (injected conversion). When OFFSETy[25:0] bitfield is reset, the offset compensation is disabled. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing). If several offset (OFFSETy) point to the same channel, only the offset with the lowest x value is considered for the subtraction. Ex: if OFFSET1_CH[4:0]=4 and OFFSET2_CH[4:0]=4, this is OFFSET1[25:0] which is subtracted when converting channel 4.
    typedef bit_field_t<26, 0x1f> ADC_OFR1_OFFSET1_CH; // Channel selection for the Data offset y These bits are written by software to define the channel to which the offset programmed into bits OFFSETy[25:0] will apply. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_OFR1_SSATE = 0x80000000; // Signed saturation Enable This bit is written by software to enable or disable the Signed saturation feature. This bit can be enabled only for 8-bit and 16-bit data format (see alignment and offset (ADC_DR, ADC_JDRy, OFFSETy, OFFSETy_CH, OVSS, LSHIFT, RSHIFT, SSATE) for details). Note: The software is allowed to write this bit only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).

    static constexpr uint32_t ADC_OFR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffffff> ADC_OFR2_OFFSET2; // Data offset y for the channel programmed into bits OFFSETy_CH[4:0] These bits are written by software to define the offset y to be subtracted from the raw converted data when converting a channel (can be regular or injected). The channel to which applies the data offset y must be programmed in the bits OFFSETy_CH[4:0]. The conversion result can be read from in the ADC_DR (regular conversion) or from in the ADC_JDRyi registers (injected conversion). When OFFSETy[25:0] bitfield is reset, the offset compensation is disabled. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing). If several offset (OFFSETy) point to the same channel, only the offset with the lowest x value is considered for the subtraction. Ex: if OFFSET1_CH[4:0]=4 and OFFSET2_CH[4:0]=4, this is OFFSET1[25:0] which is subtracted when converting channel 4.
    typedef bit_field_t<26, 0x1f> ADC_OFR2_OFFSET2_CH; // Channel selection for the Data offset y These bits are written by software to define the channel to which the offset programmed into bits OFFSETy[25:0] will apply. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_OFR2_SSATE = 0x80000000; // Signed saturation Enable This bit is written by software to enable or disable the Signed saturation feature. This bit can be enabled only for 8-bit and 16-bit data format (see alignment and offset (ADC_DR, ADC_JDRy, OFFSETy, OFFSETy_CH, OVSS, LSHIFT, RSHIFT, SSATE) for details). Note: The software is allowed to write this bit only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).

    static constexpr uint32_t ADC_OFR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffffff> ADC_OFR3_OFFSET3; // Data offset y for the channel programmed into bits OFFSETy_CH[4:0] These bits are written by software to define the offset y to be subtracted from the raw converted data when converting a channel (can be regular or injected). The channel to which applies the data offset y must be programmed in the bits OFFSETy_CH[4:0]. The conversion result can be read from in the ADC_DR (regular conversion) or from in the ADC_JDRyi registers (injected conversion). When OFFSETy[25:0] bitfield is reset, the offset compensation is disabled. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing). If several offset (OFFSETy) point to the same channel, only the offset with the lowest x value is considered for the subtraction. Ex: if OFFSET1_CH[4:0]=4 and OFFSET2_CH[4:0]=4, this is OFFSET1[25:0] which is subtracted when converting channel 4.
    typedef bit_field_t<26, 0x1f> ADC_OFR3_OFFSET3_CH; // Channel selection for the Data offset y These bits are written by software to define the channel to which the offset programmed into bits OFFSETy[25:0] will apply. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_OFR3_SSATE = 0x80000000; // Signed saturation Enable This bit is written by software to enable or disable the Signed saturation feature. This bit can be enabled only for 8-bit and 16-bit data format (see alignment and offset (ADC_DR, ADC_JDRy, OFFSETy, OFFSETy_CH, OVSS, LSHIFT, RSHIFT, SSATE) for details). Note: The software is allowed to write this bit only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).

    static constexpr uint32_t ADC_OFR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffffff> ADC_OFR4_OFFSET4; // Data offset y for the channel programmed into bits OFFSETy_CH[4:0] These bits are written by software to define the offset y to be subtracted from the raw converted data when converting a channel (can be regular or injected). The channel to which applies the data offset y must be programmed in the bits OFFSETy_CH[4:0]. The conversion result can be read from in the ADC_DR (regular conversion) or from in the ADC_JDRyi registers (injected conversion). When OFFSETy[25:0] bitfield is reset, the offset compensation is disabled. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing). If several offset (OFFSETy) point to the same channel, only the offset with the lowest x value is considered for the subtraction. Ex: if OFFSET1_CH[4:0]=4 and OFFSET2_CH[4:0]=4, this is OFFSET1[25:0] which is subtracted when converting channel 4.
    typedef bit_field_t<26, 0x1f> ADC_OFR4_OFFSET4_CH; // Channel selection for the Data offset y These bits are written by software to define the channel to which the offset programmed into bits OFFSETy[25:0] will apply. Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_OFR4_SSATE = 0x80000000; // Signed saturation Enable This bit is written by software to enable or disable the Signed saturation feature. This bit can be enabled only for 8-bit and 16-bit data format (see alignment and offset (ADC_DR, ADC_JDRy, OFFSETy, OFFSETy_CH, OVSS, LSHIFT, RSHIFT, SSATE) for details). Note: The software is allowed to write this bit only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).


    static constexpr uint32_t ADC_JDR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ADC_JDR1_JDATA; // Injected data These bits are read-only. They contain the conversion result from injected channel y. The data are left -or right-aligned as described in .

    static constexpr uint32_t ADC_JDR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ADC_JDR2_JDATA; // Injected data These bits are read-only. They contain the conversion result from injected channel y. The data are left -or right-aligned as described in .

    static constexpr uint32_t ADC_JDR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ADC_JDR3_JDATA; // Injected data These bits are read-only. They contain the conversion result from injected channel y. The data are left -or right-aligned as described in .

    static constexpr uint32_t ADC_JDR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ADC_JDR4_JDATA; // Injected data These bits are read-only. They contain the conversion result from injected channel y. The data are left -or right-aligned as described in .


    static constexpr uint32_t ADC_AWD2CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfffff> ADC_AWD2CR_AWD2CH; // Analog watchdog 2 channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by the analog watchdog 2. AWD2CH[i] = 0: ADC analog input channel-i is not monitored by AWD2 AWD2CH[i] = 1: ADC analog input channel-i is monitored by AWD2 When AWD2CH[19:0] = 000..0, the analog Watchdog 2 is disabled Note: The channels selected by AWD2CH must be also selected into the SQRi or JSQRi registers. The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).

    static constexpr uint32_t ADC_AWD3CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfffff> ADC_AWD3CR_AWD3CH; // Analog watchdog 3 channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by the analog watchdog 3. AWD3CH[i] = 0: ADC analog input channel-i is not monitored by AWD3 AWD3CH[i] = 1: ADC analog input channel-i is monitored by AWD3 When AWD3CH[19:0] = 000..0, the analog Watchdog 3 is disabled Note: The channels selected by AWD3CH must be also selected into the SQRi or JSQRi registers. The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).


    static constexpr uint32_t ADC_LTR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffffff> ADC_LTR2_LTR2; // Analog watchdog 2 lower threshold These bits are written by software to define the lower threshold for the analog watchdog 2. Refer to AWD2CH, AWD3CH, AWD_HTRy, AWD_LTRy, AWDy). Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).

    static constexpr uint32_t ADC_HTR2_RESET_VALUE = 0x3ffffff; // Reset value
    typedef bit_field_t<0, 0x3ffffff> ADC_HTR2_HTR2; // Analog watchdog 2 higher threshold These bits are written by software to define the higher threshold for the analog watchdog 2. Refer to AWD2CH, AWD3CH, AWD_HTRy, AWD_LTRy, AWDy). Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).

    static constexpr uint32_t ADC_LTR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffffff> ADC_LTR3_LTR3; // Analog watchdog 3 lower threshold These bits are written by software to define the lower threshold for the analog watchdog 3. Refer to AWD2CH, AWD3CH, AWD_HTRy, AWD_LTRy, AWDy) Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).

    static constexpr uint32_t ADC_HTR3_RESET_VALUE = 0x3ffffff; // Reset value
    typedef bit_field_t<0, 0x3ffffff> ADC_HTR3_HTR3; // Analog watchdog 3 higher threshold These bits are written by software to define the higher threshold for the analog watchdog 3. Refer to AWD2CH, AWD3CH, AWD_HTRy, AWD_LTRy, AWDy) Note: The software is allowed to write these bits only when ADSTART=0 and JADSTART=0 (which ensures that no conversion is ongoing).

    static constexpr uint32_t ADC_DIFSEL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfffff> ADC_DIFSEL_DIFSEL; // Differential mode for channels 19 to 0 These bits are set and cleared by software. They allow to select if a channel is configured as single ended or differential mode. DIFSEL[i] = 0: ADC analog input channel-i is configured in single ended mode DIFSEL[i] = 1: ADC analog input channel-i is configured in differential mode Note: The software is allowed to write these bits only when the ADC is disabled (ADCAL=0, JADSTART=0, JADSTP=0, ADSTART=0, ADSTP=0, ADDIS=0 and ADEN=0).

    static constexpr uint32_t ADC_CALFACT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> ADC_CALFACT_CALFACT_S; // Calibration Factors In Single-Ended mode These bits are written by hardware or by software. Once a single-ended inputs calibration is complete, they are updated by hardware with the calibration factors. Software can write these bits with a new calibration factor. If the new calibration factor is different from the current one stored into the analog ADC, it will then be applied once a new single-ended conversion is launched. Note: The software is allowed to write these bits only when ADEN=1, ADSTART=0 and JADSTART=0 (ADC is enabled and no calibration is ongoing and no conversion is ongoing).
    typedef bit_field_t<16, 0x7ff> ADC_CALFACT_CALFACT_D; // Calibration Factors in differential mode These bits are written by hardware or by software. Once a differential inputs calibration is complete, they are updated by hardware with the calibration factors. Software can write these bits with a new calibration factor. If the new calibration factor is different from the current one stored into the analog ADC, it will then be applied once a new differential conversion is launched. Note: The software is allowed to write these bits only when ADEN=1, ADSTART=0 and JADSTART=0 (ADC is enabled and no calibration is ongoing and no conversion is ongoing).

    static constexpr uint32_t ADC_CALFACT2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3fffffff> ADC_CALFACT2_LINCALFACT; // Linearity Calibration Factor These bits are written by hardware or by software. They hold 30-bit out of the 160-bit linearity calibration factor. Once a single-ended inputs calibration is complete, they are updated by hardware with the calibration factors. Software can write these bits with a new calibration factor. If the new calibration factor is different from the current one stored into the analog ADC, it will then be applied once a new single-ended calibration is launched. Note: The software is allowed to write these bits only when ADEN=1, ADSTART=0 and JADSTART=0 (ADC is enabled and no calibration is ongoing and no conversion is ongoing).
};

// ADC1: Analog to Digital Converter

struct stm32h7a3x_adc1_t
{
    volatile uint32_t ISR; // ADC interrupt and status register
    volatile uint32_t IER; // ADC interrupt enable register
    volatile uint32_t CR; // ADC control register
    volatile uint32_t CFGR; // ADC configuration register 1
    volatile uint32_t CFGR2; // ADC configuration register 2
    volatile uint32_t SMPR1; // ADC sampling time register 1
    volatile uint32_t SMPR2; // ADC sampling time register 2
    volatile uint32_t PCSEL; // ADC pre channel selection register
    volatile uint32_t LTR1; // ADC analog watchdog 1 threshold register
    volatile uint32_t LHTR1; // ADC analog watchdog 2 threshold register
    reserved_t<0x2> _0x28;
    volatile uint32_t SQR1; // ADC group regular sequencer ranks register 1
    volatile uint32_t SQR2; // ADC group regular sequencer ranks register 2
    volatile uint32_t SQR3; // ADC group regular sequencer ranks register 3
    volatile uint32_t SQR4; // ADC group regular sequencer ranks register 4
    volatile uint32_t DR; // ADC group regular conversion data register
    reserved_t<0x2> _0x44;
    volatile uint32_t JSQR; // ADC group injected sequencer register
    reserved_t<0x4> _0x50;
    volatile uint32_t OFR1; // ADC offset number 1 register
    volatile uint32_t OFR2; // ADC offset number 2 register
    volatile uint32_t OFR3; // ADC offset number 3 register
    volatile uint32_t OFR4; // ADC offset number 4 register
    reserved_t<0x4> _0x70;
    volatile uint32_t JDR1; // ADC group injected sequencer rank 1 register
    volatile uint32_t JDR2; // ADC group injected sequencer rank 2 register
    volatile uint32_t JDR3; // ADC group injected sequencer rank 3 register
    volatile uint32_t JDR4; // ADC group injected sequencer rank 4 register
    reserved_t<0x4> _0x90;
    volatile uint32_t AWD2CR; // ADC analog watchdog 2 configuration register
    volatile uint32_t AWD3CR; // ADC analog watchdog 3 configuration register
    reserved_t<0x2> _0xa8;
    volatile uint32_t LTR2; // ADC watchdog lower threshold register 2
    volatile uint32_t HTR2; // ADC watchdog higher threshold register 2
    volatile uint32_t LTR3; // ADC watchdog lower threshold register 3
    volatile uint32_t HTR3; // ADC watchdog higher threshold register 3
    volatile uint32_t DIFSEL; // ADC channel differential or single-ended mode selection register
    volatile uint32_t CALFACT; // ADC calibration factors register
    volatile uint32_t CALFACT2; // ADC Calibration Factor register 2

    static constexpr uint32_t ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ISR_JQOVF = 0x400; // ADC group injected contexts queue overflow flag
    static constexpr uint32_t ISR_AWD3 = 0x200; // ADC analog watchdog 3 flag
    static constexpr uint32_t ISR_AWD2 = 0x100; // ADC analog watchdog 2 flag
    static constexpr uint32_t ISR_AWD1 = 0x80; // ADC analog watchdog 1 flag
    static constexpr uint32_t ISR_JEOS = 0x40; // ADC group injected end of sequence conversions flag
    static constexpr uint32_t ISR_JEOC = 0x20; // ADC group injected end of unitary conversion flag
    static constexpr uint32_t ISR_OVR = 0x10; // ADC group regular overrun flag
    static constexpr uint32_t ISR_EOS = 0x8; // ADC group regular end of sequence conversions flag
    static constexpr uint32_t ISR_EOC = 0x4; // ADC group regular end of unitary conversion flag
    static constexpr uint32_t ISR_EOSMP = 0x2; // ADC group regular end of sampling flag
    static constexpr uint32_t ISR_ADRDY = 0x1; // ADC ready flag

    static constexpr uint32_t IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IER_JQOVFIE = 0x400; // ADC group injected contexts queue overflow interrupt
    static constexpr uint32_t IER_AWD3IE = 0x200; // ADC analog watchdog 3 interrupt
    static constexpr uint32_t IER_AWD2IE = 0x100; // ADC analog watchdog 2 interrupt
    static constexpr uint32_t IER_AWD1IE = 0x80; // ADC analog watchdog 1 interrupt
    static constexpr uint32_t IER_JEOSIE = 0x40; // ADC group injected end of sequence conversions interrupt
    static constexpr uint32_t IER_JEOCIE = 0x20; // ADC group injected end of unitary conversion interrupt
    static constexpr uint32_t IER_OVRIE = 0x10; // ADC group regular overrun interrupt
    static constexpr uint32_t IER_EOSIE = 0x8; // ADC group regular end of sequence conversions interrupt
    static constexpr uint32_t IER_EOCIE = 0x4; // ADC group regular end of unitary conversion interrupt
    static constexpr uint32_t IER_EOSMPIE = 0x2; // ADC group regular end of sampling interrupt
    static constexpr uint32_t IER_ADRDYIE = 0x1; // ADC ready interrupt

    static constexpr uint32_t CR_RESET_VALUE = 0x20000000; // Reset value
    static constexpr uint32_t CR_ADCAL = 0x80000000; // ADC calibration
    static constexpr uint32_t CR_ADCALDIF = 0x40000000; // ADC differential mode for calibration
    static constexpr uint32_t CR_DEEPPWD = 0x20000000; // ADC deep power down enable
    static constexpr uint32_t CR_ADVREGEN = 0x10000000; // ADC voltage regulator enable
    static constexpr uint32_t CR_LINCALRDYW6 = 0x8000000; // Linearity calibration ready Word 6
    static constexpr uint32_t CR_LINCALRDYW5 = 0x4000000; // Linearity calibration ready Word 5
    static constexpr uint32_t CR_LINCALRDYW4 = 0x2000000; // Linearity calibration ready Word 4
    static constexpr uint32_t CR_LINCALRDYW3 = 0x1000000; // Linearity calibration ready Word 3
    static constexpr uint32_t CR_LINCALRDYW2 = 0x800000; // Linearity calibration ready Word 2
    static constexpr uint32_t CR_LINCALRDYW1 = 0x400000; // Linearity calibration ready Word 1
    static constexpr uint32_t CR_ADCALLIN = 0x10000; // Linearity calibration
    static constexpr uint32_t CR_BOOST = 0x100; // Boost mode control
    static constexpr uint32_t CR_JADSTP = 0x20; // ADC group injected conversion stop
    static constexpr uint32_t CR_ADSTP = 0x10; // ADC group regular conversion stop
    static constexpr uint32_t CR_JADSTART = 0x8; // ADC group injected conversion start
    static constexpr uint32_t CR_ADSTART = 0x4; // ADC group regular conversion start
    static constexpr uint32_t CR_ADDIS = 0x2; // ADC disable
    static constexpr uint32_t CR_ADEN = 0x1; // ADC enable

    static constexpr uint32_t CFGR_RESET_VALUE = 0x80000000; // Reset value
    static constexpr uint32_t CFGR_JQDIS = 0x80000000; // ADC group injected contexts queue disable
    typedef bit_field_t<26, 0x1f> CFGR_AWDCH1CH; // ADC analog watchdog 1 monitored channel selection
    static constexpr uint32_t CFGR_JAUTO = 0x2000000; // ADC group injected automatic trigger mode
    static constexpr uint32_t CFGR_JAWD1EN = 0x1000000; // ADC analog watchdog 1 enable on scope ADC group injected
    static constexpr uint32_t CFGR_AWD1EN = 0x800000; // ADC analog watchdog 1 enable on scope ADC group regular
    static constexpr uint32_t CFGR_AWD1SGL = 0x400000; // ADC analog watchdog 1 monitoring a single channel or all channels
    static constexpr uint32_t CFGR_JQM = 0x200000; // ADC group injected contexts queue mode
    static constexpr uint32_t CFGR_JDISCEN = 0x100000; // ADC group injected sequencer discontinuous mode
    typedef bit_field_t<17, 0x7> CFGR_DISCNUM; // ADC group regular sequencer discontinuous number of ranks
    static constexpr uint32_t CFGR_DISCEN = 0x10000; // ADC group regular sequencer discontinuous mode
    static constexpr uint32_t CFGR_AUTDLY = 0x4000; // ADC low power auto wait
    static constexpr uint32_t CFGR_CONT = 0x2000; // ADC group regular continuous conversion mode
    static constexpr uint32_t CFGR_OVRMOD = 0x1000; // ADC group regular overrun configuration
    typedef bit_field_t<10, 0x3> CFGR_EXTEN; // ADC group regular external trigger polarity
    typedef bit_field_t<5, 0x1f> CFGR_EXTSEL; // ADC group regular external trigger source
    typedef bit_field_t<2, 0x3> CFGR_RES; // ADC data resolution
    typedef bit_field_t<0, 0x3> CFGR_DMNGT; // ADC DMA transfer enable

    static constexpr uint32_t CFGR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR2_ROVSE = 0x1; // ADC oversampler enable on scope ADC group regular
    static constexpr uint32_t CFGR2_JOVSE = 0x2; // ADC oversampler enable on scope ADC group injected
    typedef bit_field_t<5, 0xf> CFGR2_OVSS; // ADC oversampling shift
    static constexpr uint32_t CFGR2_TROVS = 0x200; // ADC oversampling discontinuous mode (triggered mode) for ADC group regular
    static constexpr uint32_t CFGR2_ROVSM = 0x400; // Regular Oversampling mode
    static constexpr uint32_t CFGR2_RSHIFT1 = 0x800; // Right-shift data after Offset 1 correction
    static constexpr uint32_t CFGR2_RSHIFT2 = 0x1000; // Right-shift data after Offset 2 correction
    static constexpr uint32_t CFGR2_RSHIFT3 = 0x2000; // Right-shift data after Offset 3 correction
    static constexpr uint32_t CFGR2_RSHIFT4 = 0x4000; // Right-shift data after Offset 4 correction
    typedef bit_field_t<16, 0x3ff> CFGR2_OSR; // Oversampling ratio
    typedef bit_field_t<28, 0xf> CFGR2_LSHIFT; // Left shift factor

    static constexpr uint32_t SMPR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<27, 0x7> SMPR1_SMP9; // ADC channel 9 sampling time selection
    typedef bit_field_t<24, 0x7> SMPR1_SMP8; // ADC channel 8 sampling time selection
    typedef bit_field_t<21, 0x7> SMPR1_SMP7; // ADC channel 7 sampling time selection
    typedef bit_field_t<18, 0x7> SMPR1_SMP6; // ADC channel 6 sampling time selection
    typedef bit_field_t<15, 0x7> SMPR1_SMP5; // ADC channel 5 sampling time selection
    typedef bit_field_t<12, 0x7> SMPR1_SMP4; // ADC channel 4 sampling time selection
    typedef bit_field_t<9, 0x7> SMPR1_SMP3; // ADC channel 3 sampling time selection
    typedef bit_field_t<6, 0x7> SMPR1_SMP2; // ADC channel 2 sampling time selection
    typedef bit_field_t<3, 0x7> SMPR1_SMP1; // ADC channel 1 sampling time selection

    static constexpr uint32_t SMPR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<27, 0x7> SMPR2_SMP19; // ADC channel 18 sampling time selection
    typedef bit_field_t<24, 0x7> SMPR2_SMP18; // ADC channel 18 sampling time selection
    typedef bit_field_t<21, 0x7> SMPR2_SMP17; // ADC channel 17 sampling time selection
    typedef bit_field_t<18, 0x7> SMPR2_SMP16; // ADC channel 16 sampling time selection
    typedef bit_field_t<15, 0x7> SMPR2_SMP15; // ADC channel 15 sampling time selection
    typedef bit_field_t<12, 0x7> SMPR2_SMP14; // ADC channel 14 sampling time selection
    typedef bit_field_t<9, 0x7> SMPR2_SMP13; // ADC channel 13 sampling time selection
    typedef bit_field_t<6, 0x7> SMPR2_SMP12; // ADC channel 12 sampling time selection
    typedef bit_field_t<3, 0x7> SMPR2_SMP11; // ADC channel 11 sampling time selection
    typedef bit_field_t<0, 0x7> SMPR2_SMP10; // ADC channel 10 sampling time selection

    static constexpr uint32_t PCSEL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfffff> PCSEL_PCSEL; // Channel x (VINP[i]) pre selection

    static constexpr uint32_t LTR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffffff> LTR1_LTR1; // ADC analog watchdog 1 threshold low

    static constexpr uint32_t LHTR1_RESET_VALUE = 0x3ffffff; // Reset value
    typedef bit_field_t<0, 0x3ffffff> LHTR1_LHTR1; // ADC analog watchdog 2 threshold low


    static constexpr uint32_t SQR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> SQR1_SQ4; // ADC group regular sequencer rank 4
    typedef bit_field_t<18, 0x1f> SQR1_SQ3; // ADC group regular sequencer rank 3
    typedef bit_field_t<12, 0x1f> SQR1_SQ2; // ADC group regular sequencer rank 2
    typedef bit_field_t<6, 0x1f> SQR1_SQ1; // ADC group regular sequencer rank 1
    typedef bit_field_t<0, 0xf> SQR1_L3; // L3

    static constexpr uint32_t SQR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> SQR2_SQ9; // ADC group regular sequencer rank 9
    typedef bit_field_t<18, 0x1f> SQR2_SQ8; // ADC group regular sequencer rank 8
    typedef bit_field_t<12, 0x1f> SQR2_SQ7; // ADC group regular sequencer rank 7
    typedef bit_field_t<6, 0x1f> SQR2_SQ6; // ADC group regular sequencer rank 6
    typedef bit_field_t<0, 0x1f> SQR2_SQ5; // ADC group regular sequencer rank 5

    static constexpr uint32_t SQR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> SQR3_SQ14; // ADC group regular sequencer rank 14
    typedef bit_field_t<18, 0x1f> SQR3_SQ13; // ADC group regular sequencer rank 13
    typedef bit_field_t<12, 0x1f> SQR3_SQ12; // ADC group regular sequencer rank 12
    typedef bit_field_t<6, 0x1f> SQR3_SQ11; // ADC group regular sequencer rank 11
    typedef bit_field_t<0, 0x1f> SQR3_SQ10; // ADC group regular sequencer rank 10

    static constexpr uint32_t SQR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<6, 0x1f> SQR4_SQ16; // ADC group regular sequencer rank 16
    typedef bit_field_t<0, 0x1f> SQR4_SQ15; // ADC group regular sequencer rank 15

    static constexpr uint32_t DR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR_RDATA; // ADC group regular conversion data


    static constexpr uint32_t JSQR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<27, 0x1f> JSQR_JSQ4; // ADC group injected sequencer rank 4
    typedef bit_field_t<21, 0x1f> JSQR_JSQ3; // ADC group injected sequencer rank 3
    typedef bit_field_t<15, 0x1f> JSQR_JSQ2; // ADC group injected sequencer rank 2
    typedef bit_field_t<9, 0x1f> JSQR_JSQ1; // ADC group injected sequencer rank 1
    typedef bit_field_t<7, 0x3> JSQR_JEXTEN; // ADC group injected external trigger polarity
    typedef bit_field_t<2, 0x1f> JSQR_JEXTSEL; // ADC group injected external trigger source
    typedef bit_field_t<0, 0x3> JSQR_JL; // ADC group injected sequencer scan length


    static constexpr uint32_t OFR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OFR1_SSATE = 0x80000000; // ADC offset number 1 enable
    typedef bit_field_t<26, 0x1f> OFR1_OFFSET1_CH; // ADC offset number 1 channel selection
    typedef bit_field_t<0, 0x3ffffff> OFR1_OFFSET1; // ADC offset number 1 offset level

    static constexpr uint32_t OFR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OFR2_SSATE = 0x80000000; // ADC offset number 1 enable
    typedef bit_field_t<26, 0x1f> OFR2_OFFSET1_CH; // ADC offset number 1 channel selection
    typedef bit_field_t<0, 0x3ffffff> OFR2_OFFSET1; // ADC offset number 1 offset level

    static constexpr uint32_t OFR3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OFR3_SSATE = 0x80000000; // ADC offset number 1 enable
    typedef bit_field_t<26, 0x1f> OFR3_OFFSET1_CH; // ADC offset number 1 channel selection
    typedef bit_field_t<0, 0x3ffffff> OFR3_OFFSET1; // ADC offset number 1 offset level

    static constexpr uint32_t OFR4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OFR4_SSATE = 0x80000000; // ADC offset number 1 enable
    typedef bit_field_t<26, 0x1f> OFR4_OFFSET1_CH; // ADC offset number 1 channel selection
    typedef bit_field_t<0, 0x3ffffff> OFR4_OFFSET1; // ADC offset number 1 offset level


    static constexpr uint32_t JDR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> JDR1_JDATA1; // ADC group injected sequencer rank 1 conversion data

    static constexpr uint32_t JDR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> JDR2_JDATA2; // ADC group injected sequencer rank 2 conversion data

    static constexpr uint32_t JDR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> JDR3_JDATA3; // ADC group injected sequencer rank 3 conversion data

    static constexpr uint32_t JDR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> JDR4_JDATA4; // ADC group injected sequencer rank 4 conversion data


    static constexpr uint32_t AWD2CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfffff> AWD2CR_AWD2CH; // ADC analog watchdog 2 monitored channel selection

    static constexpr uint32_t AWD3CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<1, 0xfffff> AWD3CR_AWD3CH; // ADC analog watchdog 3 monitored channel selection


    static constexpr uint32_t LTR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffffff> LTR2_LTR2; // Analog watchdog 2 lower threshold

    static constexpr uint32_t HTR2_RESET_VALUE = 0x3ffffff; // Reset value
    typedef bit_field_t<0, 0x3ffffff> HTR2_HTR2; // Analog watchdog 2 higher threshold

    static constexpr uint32_t LTR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffffff> LTR3_LTR3; // Analog watchdog 3 lower threshold

    static constexpr uint32_t HTR3_RESET_VALUE = 0x3ffffff; // Reset value
    typedef bit_field_t<0, 0x3ffffff> HTR3_HTR3; // Analog watchdog 3 higher threshold

    static constexpr uint32_t DIFSEL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfffff> DIFSEL_DIFSEL; // ADC channel differential or single-ended mode for channel

    static constexpr uint32_t CALFACT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0x7ff> CALFACT_CALFACT_D; // ADC calibration factor in differential mode
    typedef bit_field_t<0, 0x7ff> CALFACT_CALFACT_S; // ADC calibration factor in single-ended mode

    static constexpr uint32_t CALFACT2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3fffffff> CALFACT2_LINCALFACT; // Linearity Calibration Factor
};

// ADC2: Analog to Digital Converter

struct stm32h7a3x_adc2_t
{
    volatile uint32_t ISR; // ADC interrupt and status register
    volatile uint32_t IER; // ADC interrupt enable register
    volatile uint32_t CR; // ADC control register
    volatile uint32_t CFGR; // ADC configuration register 1
    volatile uint32_t CFGR2; // ADC configuration register 2
    volatile uint32_t SMPR1; // ADC sampling time register 1
    volatile uint32_t SMPR2; // ADC sampling time register 2
    volatile uint32_t PCSEL; // ADC pre channel selection register
    volatile uint32_t LTR1; // ADC analog watchdog 1 threshold register
    volatile uint32_t LHTR1; // ADC analog watchdog 2 threshold register
    reserved_t<0x2> _0x28;
    volatile uint32_t SQR1; // ADC group regular sequencer ranks register 1
    volatile uint32_t SQR2; // ADC group regular sequencer ranks register 2
    volatile uint32_t SQR3; // ADC group regular sequencer ranks register 3
    volatile uint32_t SQR4; // ADC group regular sequencer ranks register 4
    volatile uint32_t DR; // ADC group regular conversion data register
    reserved_t<0x2> _0x44;
    volatile uint32_t JSQR; // ADC group injected sequencer register
    reserved_t<0x4> _0x50;
    volatile uint32_t OFR1; // ADC offset number 1 register
    volatile uint32_t OFR2; // ADC offset number 2 register
    volatile uint32_t OFR3; // ADC offset number 3 register
    volatile uint32_t OFR4; // ADC offset number 4 register
    reserved_t<0x4> _0x70;
    volatile uint32_t JDR1; // ADC group injected sequencer rank 1 register
    volatile uint32_t JDR2; // ADC group injected sequencer rank 2 register
    volatile uint32_t JDR3; // ADC group injected sequencer rank 3 register
    volatile uint32_t JDR4; // ADC group injected sequencer rank 4 register
    reserved_t<0x4> _0x90;
    volatile uint32_t AWD2CR; // ADC analog watchdog 2 configuration register
    volatile uint32_t AWD3CR; // ADC analog watchdog 3 configuration register
    reserved_t<0x2> _0xa8;
    volatile uint32_t LTR2; // ADC watchdog lower threshold register 2
    volatile uint32_t HTR2; // ADC watchdog higher threshold register 2
    volatile uint32_t LTR3; // ADC watchdog lower threshold register 3
    volatile uint32_t HTR3; // ADC watchdog higher threshold register 3
    volatile uint32_t DIFSEL; // ADC channel differential or single-ended mode selection register
    volatile uint32_t CALFACT; // ADC calibration factors register
    volatile uint32_t CALFACT2; // ADC Calibration Factor register 2

    static constexpr uint32_t ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ISR_JQOVF = 0x400; // ADC group injected contexts queue overflow flag
    static constexpr uint32_t ISR_AWD3 = 0x200; // ADC analog watchdog 3 flag
    static constexpr uint32_t ISR_AWD2 = 0x100; // ADC analog watchdog 2 flag
    static constexpr uint32_t ISR_AWD1 = 0x80; // ADC analog watchdog 1 flag
    static constexpr uint32_t ISR_JEOS = 0x40; // ADC group injected end of sequence conversions flag
    static constexpr uint32_t ISR_JEOC = 0x20; // ADC group injected end of unitary conversion flag
    static constexpr uint32_t ISR_OVR = 0x10; // ADC group regular overrun flag
    static constexpr uint32_t ISR_EOS = 0x8; // ADC group regular end of sequence conversions flag
    static constexpr uint32_t ISR_EOC = 0x4; // ADC group regular end of unitary conversion flag
    static constexpr uint32_t ISR_EOSMP = 0x2; // ADC group regular end of sampling flag
    static constexpr uint32_t ISR_ADRDY = 0x1; // ADC ready flag

    static constexpr uint32_t IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IER_JQOVFIE = 0x400; // ADC group injected contexts queue overflow interrupt
    static constexpr uint32_t IER_AWD3IE = 0x200; // ADC analog watchdog 3 interrupt
    static constexpr uint32_t IER_AWD2IE = 0x100; // ADC analog watchdog 2 interrupt
    static constexpr uint32_t IER_AWD1IE = 0x80; // ADC analog watchdog 1 interrupt
    static constexpr uint32_t IER_JEOSIE = 0x40; // ADC group injected end of sequence conversions interrupt
    static constexpr uint32_t IER_JEOCIE = 0x20; // ADC group injected end of unitary conversion interrupt
    static constexpr uint32_t IER_OVRIE = 0x10; // ADC group regular overrun interrupt
    static constexpr uint32_t IER_EOSIE = 0x8; // ADC group regular end of sequence conversions interrupt
    static constexpr uint32_t IER_EOCIE = 0x4; // ADC group regular end of unitary conversion interrupt
    static constexpr uint32_t IER_EOSMPIE = 0x2; // ADC group regular end of sampling interrupt
    static constexpr uint32_t IER_ADRDYIE = 0x1; // ADC ready interrupt

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_ADCAL = 0x80000000; // ADC calibration
    static constexpr uint32_t CR_ADCALDIF = 0x40000000; // ADC differential mode for calibration
    static constexpr uint32_t CR_DEEPPWD = 0x20000000; // ADC deep power down enable
    static constexpr uint32_t CR_ADVREGEN = 0x10000000; // ADC voltage regulator enable
    static constexpr uint32_t CR_LINCALRDYW6 = 0x8000000; // Linearity calibration ready Word 6
    static constexpr uint32_t CR_LINCALRDYW5 = 0x4000000; // Linearity calibration ready Word 5
    static constexpr uint32_t CR_LINCALRDYW4 = 0x2000000; // Linearity calibration ready Word 4
    static constexpr uint32_t CR_LINCALRDYW3 = 0x1000000; // Linearity calibration ready Word 3
    static constexpr uint32_t CR_LINCALRDYW2 = 0x800000; // Linearity calibration ready Word 2
    static constexpr uint32_t CR_LINCALRDYW1 = 0x400000; // Linearity calibration ready Word 1
    static constexpr uint32_t CR_ADCALLIN = 0x10000; // Linearity calibration
    static constexpr uint32_t CR_BOOST = 0x100; // Boost mode control
    static constexpr uint32_t CR_JADSTP = 0x20; // ADC group injected conversion stop
    static constexpr uint32_t CR_ADSTP = 0x10; // ADC group regular conversion stop
    static constexpr uint32_t CR_JADSTART = 0x8; // ADC group injected conversion start
    static constexpr uint32_t CR_ADSTART = 0x4; // ADC group regular conversion start
    static constexpr uint32_t CR_ADDIS = 0x2; // ADC disable
    static constexpr uint32_t CR_ADEN = 0x1; // ADC enable

    static constexpr uint32_t CFGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR_JQDIS = 0x80000000; // ADC group injected contexts queue disable
    typedef bit_field_t<26, 0x1f> CFGR_AWDCH1CH; // ADC analog watchdog 1 monitored channel selection
    static constexpr uint32_t CFGR_JAUTO = 0x2000000; // ADC group injected automatic trigger mode
    static constexpr uint32_t CFGR_JAWD1EN = 0x1000000; // ADC analog watchdog 1 enable on scope ADC group injected
    static constexpr uint32_t CFGR_AWD1EN = 0x800000; // ADC analog watchdog 1 enable on scope ADC group regular
    static constexpr uint32_t CFGR_AWD1SGL = 0x400000; // ADC analog watchdog 1 monitoring a single channel or all channels
    static constexpr uint32_t CFGR_JQM = 0x200000; // ADC group injected contexts queue mode
    static constexpr uint32_t CFGR_JDISCEN = 0x100000; // ADC group injected sequencer discontinuous mode
    typedef bit_field_t<17, 0x7> CFGR_DISCNUM; // ADC group regular sequencer discontinuous number of ranks
    static constexpr uint32_t CFGR_DISCEN = 0x10000; // ADC group regular sequencer discontinuous mode
    static constexpr uint32_t CFGR_AUTDLY = 0x4000; // ADC low power auto wait
    static constexpr uint32_t CFGR_CONT = 0x2000; // ADC group regular continuous conversion mode
    static constexpr uint32_t CFGR_OVRMOD = 0x1000; // ADC group regular overrun configuration
    typedef bit_field_t<10, 0x3> CFGR_EXTEN; // ADC group regular external trigger polarity
    typedef bit_field_t<5, 0x1f> CFGR_EXTSEL; // ADC group regular external trigger source
    typedef bit_field_t<2, 0x3> CFGR_RES; // ADC data resolution
    typedef bit_field_t<0, 0x3> CFGR_DMNGT; // ADC DMA transfer enable

    static constexpr uint32_t CFGR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR2_ROVSE = 0x1; // ADC oversampler enable on scope ADC group regular
    static constexpr uint32_t CFGR2_JOVSE = 0x2; // ADC oversampler enable on scope ADC group injected
    typedef bit_field_t<5, 0xf> CFGR2_OVSS; // ADC oversampling shift
    static constexpr uint32_t CFGR2_TROVS = 0x200; // ADC oversampling discontinuous mode (triggered mode) for ADC group regular
    static constexpr uint32_t CFGR2_ROVSM = 0x400; // Regular Oversampling mode
    static constexpr uint32_t CFGR2_RSHIFT1 = 0x800; // Right-shift data after Offset 1 correction
    static constexpr uint32_t CFGR2_RSHIFT2 = 0x1000; // Right-shift data after Offset 2 correction
    static constexpr uint32_t CFGR2_RSHIFT3 = 0x2000; // Right-shift data after Offset 3 correction
    static constexpr uint32_t CFGR2_RSHIFT4 = 0x4000; // Right-shift data after Offset 4 correction
    typedef bit_field_t<16, 0x3ff> CFGR2_OSR; // Oversampling ratio
    typedef bit_field_t<28, 0xf> CFGR2_LSHIFT; // Left shift factor

    static constexpr uint32_t SMPR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<27, 0x7> SMPR1_SMP9; // ADC channel 9 sampling time selection
    typedef bit_field_t<24, 0x7> SMPR1_SMP8; // ADC channel 8 sampling time selection
    typedef bit_field_t<21, 0x7> SMPR1_SMP7; // ADC channel 7 sampling time selection
    typedef bit_field_t<18, 0x7> SMPR1_SMP6; // ADC channel 6 sampling time selection
    typedef bit_field_t<15, 0x7> SMPR1_SMP5; // ADC channel 5 sampling time selection
    typedef bit_field_t<12, 0x7> SMPR1_SMP4; // ADC channel 4 sampling time selection
    typedef bit_field_t<9, 0x7> SMPR1_SMP3; // ADC channel 3 sampling time selection
    typedef bit_field_t<6, 0x7> SMPR1_SMP2; // ADC channel 2 sampling time selection
    typedef bit_field_t<3, 0x7> SMPR1_SMP1; // ADC channel 1 sampling time selection

    static constexpr uint32_t SMPR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<27, 0x7> SMPR2_SMP19; // ADC channel 18 sampling time selection
    typedef bit_field_t<24, 0x7> SMPR2_SMP18; // ADC channel 18 sampling time selection
    typedef bit_field_t<21, 0x7> SMPR2_SMP17; // ADC channel 17 sampling time selection
    typedef bit_field_t<18, 0x7> SMPR2_SMP16; // ADC channel 16 sampling time selection
    typedef bit_field_t<15, 0x7> SMPR2_SMP15; // ADC channel 15 sampling time selection
    typedef bit_field_t<12, 0x7> SMPR2_SMP14; // ADC channel 14 sampling time selection
    typedef bit_field_t<9, 0x7> SMPR2_SMP13; // ADC channel 13 sampling time selection
    typedef bit_field_t<6, 0x7> SMPR2_SMP12; // ADC channel 12 sampling time selection
    typedef bit_field_t<3, 0x7> SMPR2_SMP11; // ADC channel 11 sampling time selection
    typedef bit_field_t<0, 0x7> SMPR2_SMP10; // ADC channel 10 sampling time selection

    static constexpr uint32_t PCSEL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfffff> PCSEL_PCSEL; // Channel x (VINP[i]) pre selection

    static constexpr uint32_t LTR1_RESET_VALUE = 0xfff0000; // Reset value
    typedef bit_field_t<0, 0x3ffffff> LTR1_LTR1; // ADC analog watchdog 1 threshold low

    static constexpr uint32_t LHTR1_RESET_VALUE = 0xfff0000; // Reset value
    typedef bit_field_t<0, 0x3ffffff> LHTR1_LHTR1; // ADC analog watchdog 2 threshold low


    static constexpr uint32_t SQR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> SQR1_SQ4; // ADC group regular sequencer rank 4
    typedef bit_field_t<18, 0x1f> SQR1_SQ3; // ADC group regular sequencer rank 3
    typedef bit_field_t<12, 0x1f> SQR1_SQ2; // ADC group regular sequencer rank 2
    typedef bit_field_t<6, 0x1f> SQR1_SQ1; // ADC group regular sequencer rank 1
    typedef bit_field_t<0, 0xf> SQR1_L3; // L3

    static constexpr uint32_t SQR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> SQR2_SQ9; // ADC group regular sequencer rank 9
    typedef bit_field_t<18, 0x1f> SQR2_SQ8; // ADC group regular sequencer rank 8
    typedef bit_field_t<12, 0x1f> SQR2_SQ7; // ADC group regular sequencer rank 7
    typedef bit_field_t<6, 0x1f> SQR2_SQ6; // ADC group regular sequencer rank 6
    typedef bit_field_t<0, 0x1f> SQR2_SQ5; // ADC group regular sequencer rank 5

    static constexpr uint32_t SQR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> SQR3_SQ14; // ADC group regular sequencer rank 14
    typedef bit_field_t<18, 0x1f> SQR3_SQ13; // ADC group regular sequencer rank 13
    typedef bit_field_t<12, 0x1f> SQR3_SQ12; // ADC group regular sequencer rank 12
    typedef bit_field_t<6, 0x1f> SQR3_SQ11; // ADC group regular sequencer rank 11
    typedef bit_field_t<0, 0x1f> SQR3_SQ10; // ADC group regular sequencer rank 10

    static constexpr uint32_t SQR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<6, 0x1f> SQR4_SQ16; // ADC group regular sequencer rank 16
    typedef bit_field_t<0, 0x1f> SQR4_SQ15; // ADC group regular sequencer rank 15

    static constexpr uint32_t DR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR_RDATA; // ADC group regular conversion data


    static constexpr uint32_t JSQR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<27, 0x1f> JSQR_JSQ4; // ADC group injected sequencer rank 4
    typedef bit_field_t<21, 0x1f> JSQR_JSQ3; // ADC group injected sequencer rank 3
    typedef bit_field_t<15, 0x1f> JSQR_JSQ2; // ADC group injected sequencer rank 2
    typedef bit_field_t<9, 0x1f> JSQR_JSQ1; // ADC group injected sequencer rank 1
    typedef bit_field_t<7, 0x3> JSQR_JEXTEN; // ADC group injected external trigger polarity
    typedef bit_field_t<2, 0x1f> JSQR_JEXTSEL; // ADC group injected external trigger source
    typedef bit_field_t<0, 0x3> JSQR_JL; // ADC group injected sequencer scan length


    static constexpr uint32_t OFR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OFR1_SSATE = 0x80000000; // ADC offset number 1 enable
    typedef bit_field_t<26, 0x1f> OFR1_OFFSET1_CH; // ADC offset number 1 channel selection
    typedef bit_field_t<0, 0x3ffffff> OFR1_OFFSET1; // ADC offset number 1 offset level

    static constexpr uint32_t OFR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OFR2_SSATE = 0x80000000; // ADC offset number 1 enable
    typedef bit_field_t<26, 0x1f> OFR2_OFFSET1_CH; // ADC offset number 1 channel selection
    typedef bit_field_t<0, 0x3ffffff> OFR2_OFFSET1; // ADC offset number 1 offset level

    static constexpr uint32_t OFR3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OFR3_SSATE = 0x80000000; // ADC offset number 1 enable
    typedef bit_field_t<26, 0x1f> OFR3_OFFSET1_CH; // ADC offset number 1 channel selection
    typedef bit_field_t<0, 0x3ffffff> OFR3_OFFSET1; // ADC offset number 1 offset level

    static constexpr uint32_t OFR4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OFR4_SSATE = 0x80000000; // ADC offset number 1 enable
    typedef bit_field_t<26, 0x1f> OFR4_OFFSET1_CH; // ADC offset number 1 channel selection
    typedef bit_field_t<0, 0x3ffffff> OFR4_OFFSET1; // ADC offset number 1 offset level


    static constexpr uint32_t JDR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> JDR1_JDATA1; // ADC group injected sequencer rank 1 conversion data

    static constexpr uint32_t JDR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> JDR2_JDATA2; // ADC group injected sequencer rank 2 conversion data

    static constexpr uint32_t JDR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> JDR3_JDATA3; // ADC group injected sequencer rank 3 conversion data

    static constexpr uint32_t JDR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> JDR4_JDATA4; // ADC group injected sequencer rank 4 conversion data


    static constexpr uint32_t AWD2CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfffff> AWD2CR_AWD2CH; // ADC analog watchdog 2 monitored channel selection

    static constexpr uint32_t AWD3CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<1, 0xfffff> AWD3CR_AWD3CH; // ADC analog watchdog 3 monitored channel selection


    static constexpr uint32_t LTR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffffff> LTR2_LTR2; // Analog watchdog 2 lower threshold

    static constexpr uint32_t HTR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffffff> HTR2_HTR2; // Analog watchdog 2 higher threshold

    static constexpr uint32_t LTR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffffff> LTR3_LTR3; // Analog watchdog 3 lower threshold

    static constexpr uint32_t HTR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffffff> HTR3_HTR3; // Analog watchdog 3 higher threshold

    static constexpr uint32_t DIFSEL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfffff> DIFSEL_DIFSEL; // ADC channel differential or single-ended mode for channel

    static constexpr uint32_t CALFACT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0x7ff> CALFACT_CALFACT_D; // ADC calibration factor in differential mode
    typedef bit_field_t<0, 0x7ff> CALFACT_CALFACT_S; // ADC calibration factor in single-ended mode

    static constexpr uint32_t CALFACT2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3fffffff> CALFACT2_LINCALFACT; // Linearity Calibration Factor
};

// ADC3: Analog-to-Digital Converter

struct stm32h723_adc3_t
{
    volatile uint32_t ADC_ISR; // ADC interrupt and status register
    volatile uint32_t ADC_IER; // ADC interrupt enable register
    volatile uint32_t ADC_CR; // ADC control register
    volatile uint32_t ADC_CFGR; // ADC configuration register
    volatile uint32_t ADC_CFGR2; // ADC configuration register 2
    volatile uint32_t ADC_SMPR1; // ADC sample time register 1
    volatile uint32_t ADC_SMPR2; // ADC sample time register 2
    reserved_t<0x1> _0x1c;
    volatile uint32_t ADC_TR1; // ADC watchdog threshold register 1
    volatile uint32_t ADC_TR2; // ADC watchdog threshold register 2
    volatile uint32_t ADC_TR3; // ADC watchdog threshold register 3
    reserved_t<0x1> _0x2c;
    volatile uint32_t ADC_SQR1; // ADC regular sequence register 1
    volatile uint32_t ADC_SQR2; // ADC regular sequence register 2
    volatile uint32_t ADC_SQR3; // ADC regular sequence register 3
    volatile uint32_t ADC_SQR4; // ADC regular sequence register 4
    volatile uint32_t ADC_DR; // ADC regular data register
    reserved_t<0x2> _0x44;
    volatile uint32_t ADC_JSQR; // ADC injected sequence register
    reserved_t<0x4> _0x50;
    volatile uint32_t ADC_OFR1; // ADC offset 1 register
    volatile uint32_t ADC_OFR2; // ADC offset 2 register
    volatile uint32_t ADC_OFR3; // ADC offset 3 register
    volatile uint32_t ADC_OFR4; // ADC offset 4 register
    reserved_t<0x4> _0x70;
    volatile uint32_t ADC_JDR1; // ADC injected channel 1 data register
    volatile uint32_t ADC_JDR2; // ADC injected channel 2 data register
    volatile uint32_t ADC_JDR3; // ADC injected channel 3 data register
    volatile uint32_t ADC_JDR4; // ADC injected channel 4 data register
    reserved_t<0x4> _0x90;
    volatile uint32_t ADC_AWD2CR; // ADC Analog Watchdog 2 Configuration Register
    volatile uint32_t ADC_AWD3CR; // ADC Analog Watchdog 3 Configuration Register
    reserved_t<0x2> _0xa8;
    volatile uint32_t ADC_DIFSEL; // ADC Differential mode Selection Register
    volatile uint32_t ADC_CALFACT; // ADC Calibration Factors

    static constexpr uint32_t ADC_ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ADC_ISR_ADRDY = 0x1; // ADC ready This bit is set by hardware after the ADC has been enabled (ADEN = 1) and when the ADC reaches a state where it is ready to accept conversion requests. It is cleared by software writing 1 to it.
    static constexpr uint32_t ADC_ISR_EOSMP = 0x2; // End of sampling flag This bit is set by hardware during the conversion of any channel (only for regular channels), at the end of the sampling phase.
    static constexpr uint32_t ADC_ISR_EOC = 0x4; // End of conversion flag This bit is set by hardware at the end of each regular conversion of a channel when a new data is available in the ADC_DR register. It is cleared by software writing 1 to it or by reading the ADC_DR register
    static constexpr uint32_t ADC_ISR_EOS = 0x8; // End of regular sequence flag This bit is set by hardware at the end of the conversions of a regular sequence of channels. It is cleared by software writing 1 to it.
    static constexpr uint32_t ADC_ISR_OVR = 0x10; // ADC overrun This bit is set by hardware when an overrun occurs on a regular channel, meaning that a new conversion has completed while the EOC flag was already set. It is cleared by software writing 1 to it.
    static constexpr uint32_t ADC_ISR_JEOC = 0x20; // Injected channel end of conversion flag This bit is set by hardware at the end of each injected conversion of a channel when a new data is available in the corresponding ADC_JDRy register. It is cleared by software writing 1 to it or by reading the corresponding ADC_JDRy register
    static constexpr uint32_t ADC_ISR_JEOS = 0x40; // Injected channel end of sequence flag This bit is set by hardware at the end of the conversions of all injected channels in the group. It is cleared by software writing 1 to it.
    static constexpr uint32_t ADC_ISR_AWD1 = 0x80; // Analog watchdog 1 flag This bit is set by hardware when the converted voltage crosses the values programmed in the fields LT1[11:0] and HT1[11:0] of ADC_TR1 register. It is cleared by software. writing 1 to it.
    static constexpr uint32_t ADC_ISR_AWD2 = 0x100; // Analog watchdog 2 flag This bit is set by hardware when the converted voltage crosses the values programmed in the fields LT2[7:0] and HT2[7:0] of ADC_TR2 register. It is cleared by software writing 1 to it.
    static constexpr uint32_t ADC_ISR_AWD3 = 0x200; // Analog watchdog 3 flag This bit is set by hardware when the converted voltage crosses the values programmed in the fields LT3[7:0] and HT3[7:0] of ADC_TR3 register. It is cleared by software writing 1 to it.
    static constexpr uint32_t ADC_ISR_JQOVF = 0x400; // Injected context queue overflow This bit is set by hardware when an Overflow of the Injected Queue of Context occurs. It is cleared by software writing 1 to it. Refer to for more information.

    static constexpr uint32_t ADC_IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ADC_IER_ADRDYIE = 0x1; // ADC ready interrupt enable This bit is set and cleared by software to enable/disable the ADC Ready interrupt. Note: The software is allowed to write this bit only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_IER_EOSMPIE = 0x2; // End of sampling flag interrupt enable for regular conversions This bit is set and cleared by software to enable/disable the end of the sampling phase interrupt for regular conversions. Note: The software is allowed to write this bit only when ADSTART = 0 (which ensures that no regular conversion is ongoing).
    static constexpr uint32_t ADC_IER_EOCIE = 0x4; // End of regular conversion interrupt enable This bit is set and cleared by software to enable/disable the end of a regular conversion interrupt. Note: The software is allowed to write this bit only when ADSTART = 0 (which ensures that no regular conversion is ongoing).
    static constexpr uint32_t ADC_IER_EOSIE = 0x8; // End of regular sequence of conversions interrupt enable This bit is set and cleared by software to enable/disable the end of regular sequence of conversions interrupt. Note: The software is allowed to write this bit only when ADSTART = 0 (which ensures that no regular conversion is ongoing).
    static constexpr uint32_t ADC_IER_OVRIE = 0x10; // Overrun interrupt enable This bit is set and cleared by software to enable/disable the Overrun interrupt of a regular conversion. Note: The software is allowed to write this bit only when ADSTART = 0 (which ensures that no regular conversion is ongoing).
    static constexpr uint32_t ADC_IER_JEOCIE = 0x20; // End of injected conversion interrupt enable This bit is set and cleared by software to enable/disable the end of an injected conversion interrupt. Note: The software is allowed to write this bit only when JADSTART = 0 (which ensures that no injected conversion is ongoing).
    static constexpr uint32_t ADC_IER_JEOSIE = 0x40; // End of injected sequence of conversions interrupt enable This bit is set and cleared by software to enable/disable the end of injected sequence of conversions interrupt. Note: The software is allowed to write this bit only when JADSTART = 0 (which ensures that no injected conversion is ongoing).
    static constexpr uint32_t ADC_IER_AWD1IE = 0x80; // Analog watchdog 1 interrupt enable This bit is set and cleared by software to enable/disable the analog watchdog 1 interrupt. Note: The software is allowed to write this bit only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_IER_AWD2IE = 0x100; // Analog watchdog 2 interrupt enable This bit is set and cleared by software to enable/disable the analog watchdog 2 interrupt. Note: The software is allowed to write this bit only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_IER_AWD3IE = 0x200; // Analog watchdog 3 interrupt enable This bit is set and cleared by software to enable/disable the analog watchdog 2 interrupt. Note: The software is allowed to write this bit only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_IER_JQOVFIE = 0x400; // Injected context queue overflow interrupt enable This bit is set and cleared by software to enable/disable the Injected Context Queue Overflow interrupt. Note: The software is allowed to write this bit only when JADSTART = 0 (which ensures that no injected conversion is ongoing).

    static constexpr uint32_t ADC_CR_RESET_VALUE = 0x20000000; // Reset value
    static constexpr uint32_t ADC_CR_ADEN = 0x1; // ADC enable control This bit is set by software to enable the ADC. The ADC is effectively ready to operate once the flag ADRDY has been set. It is cleared by hardware when the ADC is disabled, after the execution of the ADDIS command. Note: The software is allowed to set ADEN only when all bits of ADC_CR registers are 0 (ADCAL = 0, JADSTART = 0, ADSTART = 0, ADSTP = 0, ADDIS = 0 and ADEN = 0) except for bit ADVREGEN which must be 1 (and the software must have wait for the startup time of the voltage regulator)
    static constexpr uint32_t ADC_CR_ADDIS = 0x2; // ADC disable command This bit is set by software to disable the ADC (ADDIS command) and put it into power-down state (OFF state). It is cleared by hardware once the ADC is effectively disabled (ADEN is also cleared by hardware at this time). Note: The software is allowed to set ADDIS only when ADEN = 1 and both ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing)
    static constexpr uint32_t ADC_CR_ADSTART = 0x4; // ADC start of regular conversion This bit is set by software to start ADC conversion of regular channels. Depending on the configuration bits EXTEN, a conversion immediately starts (software trigger configuration) or once a regular hardware trigger event occurs (hardware trigger configuration). It is cleared by hardware: in Single conversion mode when software trigger is selected (EXTSEL = 0x0): at the assertion of the End of Regular Conversion Sequence (EOS) flag. in all cases: after the execution of the ADSTP command, at the same time that ADSTP is cleared by hardware. Note: The software is allowed to set ADSTART only when ADEN = 1 and ADDIS = 0 (ADC is enabled and there is no pending request to disable the ADC) In auto-injection mode (JAUTO = 1), regular and auto-injected conversions are started by setting bit ADSTART (JADSTART must be kept cleared)
    static constexpr uint32_t ADC_CR_JADSTART = 0x8; // ADC start of injected conversion This bit is set by software to start ADC conversion of injected channels. Depending on the configuration bits JEXTEN, a conversion immediately starts (software trigger configuration) or once an injected hardware trigger event occurs (hardware trigger configuration). It is cleared by hardware: in Single conversion mode when software trigger is selected (JEXTSEL = 0x0): at the assertion of the End of Injected Conversion Sequence (JEOS) flag. in all cases: after the execution of the JADSTP command, at the same time that JADSTP is cleared by hardware. Note: The software is allowed to set JADSTART only when ADEN = 1 and ADDIS = 0 (ADC is enabled and there is no pending request to disable the ADC). In auto-injection mode (JAUTO = 1), regular and auto-injected conversions are started by setting bit ADSTART (JADSTART must be kept cleared)
    static constexpr uint32_t ADC_CR_ADSTP = 0x10; // ADC stop of regular conversion command This bit is set by software to stop and discard an ongoing regular conversion (ADSTP Command). It is cleared by hardware when the conversion is effectively discarded and the ADC regular sequence and triggers can be re-configured. The ADC is then ready to accept a new start of regular conversions (ADSTART command). Note: The software is allowed to set ADSTP only when ADSTART = 1 and ADDIS = 0 (ADC is enabled and eventually converting a regular conversion and there is no pending request to disable the ADC). In auto-injection mode (JAUTO = 1), setting ADSTP bit aborts both regular and injected conversions (do not use JADSTP).
    static constexpr uint32_t ADC_CR_JADSTP = 0x20; // ADC stop of injected conversion command This bit is set by software to stop and discard an ongoing injected conversion (JADSTP Command). It is cleared by hardware when the conversion is effectively discarded and the ADC injected sequence and triggers can be re-configured. The ADC is then ready to accept a new start of injected conversions (JADSTART command). Note: The software is allowed to set JADSTP only when JADSTART = 1 and ADDIS = 0 (ADC is enabled and eventually converting an injected conversion and there is no pending request to disable the ADC) In Auto-injection mode (JAUTO = 1), setting ADSTP bit aborts both regular and injected conversions (do not use JADSTP)
    static constexpr uint32_t ADC_CR_ADVREGEN = 0x10000000; // ADC voltage regulator enable This bits is set by software to enable the ADC voltage regulator. Before performing any operation such as launching a calibration or enabling the ADC, the ADC voltage regulator must first be enabled and the software must wait for the regulator start-up time. For more details about the ADC voltage regulator enable and disable sequences, refer to (ADVREGEN). The software can program this bit field only when the ADC is disabled (ADCAL = 0, JADSTART = 0, ADSTART = 0, ADSTP = 0, ADDIS = 0 and ADEN = 0).
    static constexpr uint32_t ADC_CR_DEEPPWD = 0x20000000; // Deep-power-down enable This bit is set and cleared by software to put the ADC in Deep-power-down mode. Note: The software is allowed to write this bit only when the ADC is disabled (ADCAL = 0, JADSTART = 0, JADSTP = 0, ADSTART = 0, ADSTP = 0, ADDIS = 0 and ADEN = 0).
    static constexpr uint32_t ADC_CR_ADCALDIF = 0x40000000; // Differential mode for calibration This bit is set and cleared by software to configure the Single-ended or Differential inputs mode for the calibration. Note: The software is allowed to write this bit only when the ADC is disabled and is not calibrating (ADCAL = 0, JADSTART = 0, JADSTP = 0, ADSTART = 0, ADSTP = 0, ADDIS = 0 and ADEN = 0).
    static constexpr uint32_t ADC_CR_ADCAL = 0x80000000; // ADC calibration This bit is set by software to start the calibration of the ADC. Program first the bit ADCALDIF to determine if this calibration applies for Single-ended or Differential inputs mode. It is cleared by hardware after calibration is complete. Note: The software is allowed to launch a calibration by setting ADCAL only when ADEN = 0. The software is allowed to update the calibration factor by writing ADC_CALFACT only when ADEN = 1 and ADSTART = 0 and JADSTART = 0 (ADC enabled and no conversion is ongoing)

    static constexpr uint32_t ADC_CFGR_RESET_VALUE = 0x80000000; // Reset value
    static constexpr uint32_t ADC_CFGR_DMAEN = 0x1; // Direct memory access enable This bit is set and cleared by software to enable the generation of DMA requests. This allows to use the DMA to manage automatically the converted data. For more details, refer to conversions using the DMA. Note: The software is allowed to write this bit only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_CFGR_DMACFG = 0x2; // Direct memory access configuration This bit is set and cleared by software to select between two DMA modes of operation and is effective only when DMAEN = 1. For more details, refer to Note: The software is allowed to write this bit only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_CFGR_DFSDMCFG = 0x4; // DFSDM mode configuration This bit is set and cleared by software to enable the DFSDM mode. It is effective only when DMAEN = 0. Note: To make sure no conversion is ongoing, the software is allowed to write this bit only when ADSTART = 0 and JADSTART = 0.
    typedef bit_field_t<3, 0x3> ADC_CFGR_RES; // Data resolution These bits are written by software to select the resolution of the conversion. Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_CFGR_EXTSEL0 = 0x20; // External trigger selection for regular group These bits select the external event used to trigger the start of conversion of a regular group: ... Note: The software is allowed to write these bits only when ADSTART = 0 (which ensures that no regular conversion is ongoing).
    static constexpr uint32_t ADC_CFGR_EXTSEL1 = 0x40; // External trigger selection for regular group These bits select the external event used to trigger the start of conversion of a regular group: ... Note: The software is allowed to write these bits only when ADSTART = 0 (which ensures that no regular conversion is ongoing).
    static constexpr uint32_t ADC_CFGR_EXTSEL2 = 0x80; // External trigger selection for regular group These bits select the external event used to trigger the start of conversion of a regular group: ... Note: The software is allowed to write these bits only when ADSTART = 0 (which ensures that no regular conversion is ongoing).
    static constexpr uint32_t ADC_CFGR_EXTSEL3 = 0x100; // External trigger selection for regular group These bits select the external event used to trigger the start of conversion of a regular group: ... Note: The software is allowed to write these bits only when ADSTART = 0 (which ensures that no regular conversion is ongoing).
    static constexpr uint32_t ADC_CFGR_EXTSEL4 = 0x200; // External trigger selection for regular group These bits select the external event used to trigger the start of conversion of a regular group: ... Note: The software is allowed to write these bits only when ADSTART = 0 (which ensures that no regular conversion is ongoing).
    typedef bit_field_t<10, 0x3> ADC_CFGR_EXTEN; // External trigger enable and polarity selection for regular channels These bits are set and cleared by software to select the external trigger polarity and enable the trigger of a regular group. Note: The software is allowed to write these bits only when ADSTART = 0 (which ensures that no regular conversion is ongoing).
    static constexpr uint32_t ADC_CFGR_OVRMOD = 0x1000; // Overrun mode This bit is set and cleared by software and configure the way data overrun is managed. Note: The software is allowed to write this bit only when ADSTART = 0 (which ensures that no regular conversion is ongoing).
    static constexpr uint32_t ADC_CFGR_CONT = 0x2000; // Single / Continuous conversion mode for regular conversions This bit is set and cleared by software. If it is set, regular conversion takes place continuously until it is cleared. Note: It is not possible to have both Discontinuous mode and Continuous mode enabled: it is forbidden to set both DISCEN = 1 and CONT = 1. The software is allowed to write this bit only when ADSTART = 0 (which ensures that no regular conversion is ongoing).
    static constexpr uint32_t ADC_CFGR_AUTDLY = 0x4000; // Delayed conversion mode This bit is set and cleared by software to enable/disable the Auto Delayed Conversion mode.. Note: The software is allowed to write this bit only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_CFGR_ALIGN = 0x8000; // Data alignment This bit is set and cleared by software to select right or left alignment. Refer to register, data alignment and offset (ADC_DR, OFFSET, OFFSET_CH, ALIGN). Note: The software is allowed to write this bit only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_CFGR_DISCEN = 0x10000; // Discontinuous mode for regular channels This bit is set and cleared by software to enable/disable Discontinuous mode for regular channels. Note: It is not possible to have both Discontinuous mode and Continuous mode enabled: it is forbidden to set both DISCEN = 1 and CONT = 1. It is not possible to use both auto-injected mode and Discontinuous mode simultaneously: the bits DISCEN and JDISCEN must be kept cleared by software when JAUTO is set. The software is allowed to write this bit only when ADSTART = 0 (which ensures that no regular conversion is ongoing).
    typedef bit_field_t<17, 0x7> ADC_CFGR_DISCNUM; // Discontinuous mode channel count These bits are written by software to define the number of regular channels to be converted in Discontinuous mode, after receiving an external trigger. ... Note: The software is allowed to write these bits only when ADSTART = 0 (which ensures that no regular conversion is ongoing).
    static constexpr uint32_t ADC_CFGR_JDISCEN = 0x100000; // Discontinuous mode on injected channels This bit is set and cleared by software to enable/disable Discontinuous mode on the injected channels of a group. Note: The software is allowed to write this bit only when JADSTART = 0 (which ensures that no injected conversion is ongoing). It is not possible to use both auto-injected mode and Discontinuous mode simultaneously: the bits DISCEN and JDISCEN must be kept cleared by software when JAUTO is set.
    static constexpr uint32_t ADC_CFGR_JQM = 0x200000; // JSQR queue mode This bit is set and cleared by software. It defines how an empty Queue is managed. Refer to for more information. Note: The software is allowed to write this bit only when JADSTART = 0 (which ensures that no injected conversion is ongoing).
    static constexpr uint32_t ADC_CFGR_AWD1SGL = 0x400000; // Enable the watchdog 1 on a single channel or on all channels This bit is set and cleared by software to enable the analog watchdog on the channel identified by the AWD1CH[4:0] bits or on all the channels Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_CFGR_AWD1EN = 0x800000; // Analog watchdog 1 enable on regular channels This bit is set and cleared by software Note: The software is allowed to write this bit only when ADSTART = 0 (which ensures that no regular conversion is ongoing).
    static constexpr uint32_t ADC_CFGR_JAWD1EN = 0x1000000; // Analog watchdog 1 enable on injected channels This bit is set and cleared by software Note: The software is allowed to write this bit only when JADSTART = 0 (which ensures that no injected conversion is ongoing).
    static constexpr uint32_t ADC_CFGR_JAUTO = 0x2000000; // Automatic injected group conversion This bit is set and cleared by software to enable/disable automatic injected group conversion after regular group conversion. Note: The software is allowed to write this bit only when ADSTART = 0 and JADSTART = 0 (which ensures that no regular nor injected conversion is ongoing).
    typedef bit_field_t<26, 0x1f> ADC_CFGR_AWD1CH; // Analog watchdog 1 channel selection These bits are set and cleared by software. They select the input channel to be guarded by the analog watchdog. ..... others: reserved, must not be used Note: Some channels are not connected physically. Keep the corresponding AWD1CH[4:0] setting to the reset value. The channel selected by AWD1CH must be also selected into the SQRi or JSQRi registers. The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_CFGR_JQDIS = 0x80000000; // Injected Queue disable These bits are set and cleared by software to disable the Injected Queue mechanism : Note: The software is allowed to write this bit only when ADSTART = 0 and JADSTART = 0 (which ensures that no regular nor injected conversion is ongoing). A set or reset of JQDIS bit causes the injected queue to be flushed and the JSQR register is cleared.

    static constexpr uint32_t ADC_CFGR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ADC_CFGR2_ROVSE = 0x1; // Regular Oversampling Enable This bit is set and cleared by software to enable regular oversampling. Note: The software is allowed to write this bit only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing)
    static constexpr uint32_t ADC_CFGR2_JOVSE = 0x2; // Injected Oversampling Enable This bit is set and cleared by software to enable injected oversampling. Note: The software is allowed to write this bit only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing)
    typedef bit_field_t<2, 0x7> ADC_CFGR2_OVSR; // Oversampling ratio This bitfield is set and cleared by software to define the oversampling ratio. Note: The software is allowed to write these bits only when ADSTART = 0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<5, 0xf> ADC_CFGR2_OVSS; // Oversampling shift This bitfield is set and cleared by software to define the right shifting applied to the raw oversampling result. Other codes reserved Note: The software is allowed to write these bits only when ADSTART = 0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_CFGR2_TROVS = 0x200; // Triggered Regular Oversampling This bit is set and cleared by software to enable triggered oversampling Note: The software is allowed to write this bit only when ADSTART = 0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_CFGR2_ROVSM = 0x400; // Regular Oversampling mode This bit is set and cleared by software to select the regular oversampling mode. Note: The software is allowed to write this bit only when ADSTART = 0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_CFGR2_SWTRIG = 0x2000000; // Software trigger bit for sampling time control trigger mode This bit is set and cleared by software to enable the bulb sampling mode. Note: The software is allowed to write this bit only when ADSTART = 0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_CFGR2_BULB = 0x4000000; // Bulb sampling mode This bit is set and cleared by software to enable the bulb sampling mode. SAMPTRIG bit must not be set when the BULB bit is set. The very first ADC conversion is performed with the sampling time specified in SMPx bits. Note: The software is allowed to write this bit only when ADSTART = 0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_CFGR2_SMPTRIG = 0x8000000; // Sampling time control trigger mode This bit is set and cleared by software to enable the sampling time control trigger mode. The sampling time starts on the trigger rising edge, and the conversion on the trigger falling edge. EXTEN bit should be set to 01. BULB bit must not be set when the SMPTRIG bit is set. When EXTEN bit is set to 00, set SWTRIG to start the sampling and clear SWTRIG bit to start the conversion. Note: The software is allowed to write this bit only when ADSTART = 0 (which ensures that no conversion is ongoing).

    static constexpr uint32_t ADC_SMPR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> ADC_SMPR1_SMP0; // Channel x sampling time selection These bits are written by software to select the sampling time individually for each channel. During sample cycles, the channel selection bits must remain unchanged. Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing). Some channels are not connected physically. Keep the corresponding SMPx[2:0] setting to the reset value.
    typedef bit_field_t<3, 0x7> ADC_SMPR1_SMP1; // Channel x sampling time selection These bits are written by software to select the sampling time individually for each channel. During sample cycles, the channel selection bits must remain unchanged. Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing). Some channels are not connected physically. Keep the corresponding SMPx[2:0] setting to the reset value.
    typedef bit_field_t<6, 0x7> ADC_SMPR1_SMP2; // Channel x sampling time selection These bits are written by software to select the sampling time individually for each channel. During sample cycles, the channel selection bits must remain unchanged. Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing). Some channels are not connected physically. Keep the corresponding SMPx[2:0] setting to the reset value.
    typedef bit_field_t<9, 0x7> ADC_SMPR1_SMP3; // Channel x sampling time selection These bits are written by software to select the sampling time individually for each channel. During sample cycles, the channel selection bits must remain unchanged. Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing). Some channels are not connected physically. Keep the corresponding SMPx[2:0] setting to the reset value.
    typedef bit_field_t<12, 0x7> ADC_SMPR1_SMP4; // Channel x sampling time selection These bits are written by software to select the sampling time individually for each channel. During sample cycles, the channel selection bits must remain unchanged. Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing). Some channels are not connected physically. Keep the corresponding SMPx[2:0] setting to the reset value.
    typedef bit_field_t<15, 0x7> ADC_SMPR1_SMP5; // Channel x sampling time selection These bits are written by software to select the sampling time individually for each channel. During sample cycles, the channel selection bits must remain unchanged. Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing). Some channels are not connected physically. Keep the corresponding SMPx[2:0] setting to the reset value.
    typedef bit_field_t<18, 0x7> ADC_SMPR1_SMP6; // Channel x sampling time selection These bits are written by software to select the sampling time individually for each channel. During sample cycles, the channel selection bits must remain unchanged. Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing). Some channels are not connected physically. Keep the corresponding SMPx[2:0] setting to the reset value.
    typedef bit_field_t<21, 0x7> ADC_SMPR1_SMP7; // Channel x sampling time selection These bits are written by software to select the sampling time individually for each channel. During sample cycles, the channel selection bits must remain unchanged. Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing). Some channels are not connected physically. Keep the corresponding SMPx[2:0] setting to the reset value.
    typedef bit_field_t<24, 0x7> ADC_SMPR1_SMP8; // Channel x sampling time selection These bits are written by software to select the sampling time individually for each channel. During sample cycles, the channel selection bits must remain unchanged. Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing). Some channels are not connected physically. Keep the corresponding SMPx[2:0] setting to the reset value.
    typedef bit_field_t<27, 0x7> ADC_SMPR1_SMP9; // Channel x sampling time selection These bits are written by software to select the sampling time individually for each channel. During sample cycles, the channel selection bits must remain unchanged. Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing). Some channels are not connected physically. Keep the corresponding SMPx[2:0] setting to the reset value.
    static constexpr uint32_t ADC_SMPR1_SMPPLUS = 0x80000000; // Addition of one clock cycle to the sampling time. To make sure no conversion is ongoing, the software is allowed to write this bit only when ADSTART = 0 and JADSTART = 0.

    static constexpr uint32_t ADC_SMPR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> ADC_SMPR2_SMP10; // Channel x sampling time selection These bits are written by software to select the sampling time individually for each channel. During sampling cycles, the channel selection bits must remain unchanged. Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing). Some channels are not connected physically. Keep the corresponding SMPx[2:0] setting to the reset value.
    typedef bit_field_t<3, 0x7> ADC_SMPR2_SMP11; // Channel x sampling time selection These bits are written by software to select the sampling time individually for each channel. During sampling cycles, the channel selection bits must remain unchanged. Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing). Some channels are not connected physically. Keep the corresponding SMPx[2:0] setting to the reset value.
    typedef bit_field_t<6, 0x7> ADC_SMPR2_SMP12; // Channel x sampling time selection These bits are written by software to select the sampling time individually for each channel. During sampling cycles, the channel selection bits must remain unchanged. Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing). Some channels are not connected physically. Keep the corresponding SMPx[2:0] setting to the reset value.
    typedef bit_field_t<9, 0x7> ADC_SMPR2_SMP13; // Channel x sampling time selection These bits are written by software to select the sampling time individually for each channel. During sampling cycles, the channel selection bits must remain unchanged. Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing). Some channels are not connected physically. Keep the corresponding SMPx[2:0] setting to the reset value.
    typedef bit_field_t<12, 0x7> ADC_SMPR2_SMP14; // Channel x sampling time selection These bits are written by software to select the sampling time individually for each channel. During sampling cycles, the channel selection bits must remain unchanged. Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing). Some channels are not connected physically. Keep the corresponding SMPx[2:0] setting to the reset value.
    typedef bit_field_t<15, 0x7> ADC_SMPR2_SMP15; // Channel x sampling time selection These bits are written by software to select the sampling time individually for each channel. During sampling cycles, the channel selection bits must remain unchanged. Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing). Some channels are not connected physically. Keep the corresponding SMPx[2:0] setting to the reset value.
    typedef bit_field_t<18, 0x7> ADC_SMPR2_SMP16; // Channel x sampling time selection These bits are written by software to select the sampling time individually for each channel. During sampling cycles, the channel selection bits must remain unchanged. Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing). Some channels are not connected physically. Keep the corresponding SMPx[2:0] setting to the reset value.
    typedef bit_field_t<21, 0x7> ADC_SMPR2_SMP17; // Channel x sampling time selection These bits are written by software to select the sampling time individually for each channel. During sampling cycles, the channel selection bits must remain unchanged. Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing). Some channels are not connected physically. Keep the corresponding SMPx[2:0] setting to the reset value.
    typedef bit_field_t<24, 0x7> ADC_SMPR2_SMP18; // Channel x sampling time selection These bits are written by software to select the sampling time individually for each channel. During sampling cycles, the channel selection bits must remain unchanged. Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing). Some channels are not connected physically. Keep the corresponding SMPx[2:0] setting to the reset value.


    static constexpr uint32_t ADC_TR1_RESET_VALUE = 0xfff0000; // Reset value
    typedef bit_field_t<0, 0xfff> ADC_TR1_LT1; // Analog watchdog 1 lower threshold These bits are written by software to define the lower threshold for the analog watchdog 1. Refer to AWD2CH, AWD3CH, AWD_HTx, AWD_LTx, AWDx) Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<12, 0x7> ADC_TR1_AWDFILT; // Analog watchdog filtering parameter This bit is set and cleared by software. ... Note: The software is allowed to write this bit only when ADSTART = 0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<16, 0xfff> ADC_TR1_HT1; // Analog watchdog 1 higher threshold These bits are written by software to define the higher threshold for the analog watchdog 1. Refer to AWD2CH, AWD3CH, AWD_HTx, AWD_LTx, AWDx) Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).

    static constexpr uint32_t ADC_TR2_RESET_VALUE = 0xff0000; // Reset value
    typedef bit_field_t<0, 0xff> ADC_TR2_LT2; // Analog watchdog 2 lower threshold These bits are written by software to define the lower threshold for the analog watchdog 2. Refer to AWD2CH, AWD3CH, AWD_HTx, AWD_LTx, AWDx) Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<16, 0xff> ADC_TR2_HT2; // Analog watchdog 2 higher threshold These bits are written by software to define the higher threshold for the analog watchdog 2. Refer to AWD2CH, AWD3CH, AWD_HTx, AWD_LTx, AWDx) Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).

    static constexpr uint32_t ADC_TR3_RESET_VALUE = 0xff0000; // Reset value
    typedef bit_field_t<0, 0xff> ADC_TR3_LT3; // Analog watchdog 3 lower threshold These bits are written by software to define the lower threshold for the analog watchdog 3. This watchdog compares the 8-bit of LT3 with the 8 MSB of the converted data. Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<16, 0xff> ADC_TR3_HT3; // Analog watchdog 3 higher threshold These bits are written by software to define the higher threshold for the analog watchdog 3. Refer to AWD2CH, AWD3CH, AWD_HTx, AWD_LTx, AWDx) Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).


    static constexpr uint32_t ADC_SQR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> ADC_SQR1_L; // Regular channel sequence length These bits are written by software to define the total number of conversions in the regular channel conversion sequence. ... Note: The software is allowed to write these bits only when ADSTART = 0 (which ensures that no regular conversion is ongoing).
    typedef bit_field_t<6, 0x1f> ADC_SQR1_SQ1; // 1st conversion in regular sequence These bits are written by software with the channel number (0 to 18) assigned as the 1st in the regular conversion sequence. Note: The software is allowed to write these bits only when ADSTART = 0 (which ensures that no regular conversion is ongoing).
    typedef bit_field_t<12, 0x1f> ADC_SQR1_SQ2; // 2nd conversion in regular sequence These bits are written by software with the channel number (0 to 18) assigned as the 2nd in the regular conversion sequence. Note: The software is allowed to write these bits only when ADSTART = 0 (which ensures that no regular conversion is ongoing).
    typedef bit_field_t<18, 0x1f> ADC_SQR1_SQ3; // 3rd conversion in regular sequence These bits are written by software with the channel number (0 to 18) assigned as the 3rd in the regular conversion sequence. Note: The software is allowed to write these bits only when ADSTART = 0 (which ensures that no regular conversion is ongoing).
    typedef bit_field_t<24, 0x1f> ADC_SQR1_SQ4; // 4th conversion in regular sequence These bits are written by software with the channel number (0 to 18) assigned as the 4th in the regular conversion sequence. Note: The software is allowed to write these bits only when ADSTART = 0 (which ensures that no regular conversion is ongoing).

    static constexpr uint32_t ADC_SQR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> ADC_SQR2_SQ5; // 5th conversion in regular sequence These bits are written by software with the channel number (0 to 18) assigned as the 5th in the regular conversion sequence. Note: The software is allowed to write these bits only when ADSTART = 0 (which ensures that no regular conversion is ongoing).
    typedef bit_field_t<6, 0x1f> ADC_SQR2_SQ6; // 6th conversion in regular sequence These bits are written by software with the channel number (0 to 18) assigned as the 6th in the regular conversion sequence. Note: The software is allowed to write these bits only when ADSTART = 0 (which ensures that no regular conversion is ongoing).
    typedef bit_field_t<12, 0x1f> ADC_SQR2_SQ7; // 7th conversion in regular sequence These bits are written by software with the channel number (0 to 18) assigned as the 7th in the regular conversion sequence. Note: The software is allowed to write these bits only when ADSTART = 0 (which ensures that no regular conversion is ongoing).
    typedef bit_field_t<18, 0x1f> ADC_SQR2_SQ8; // 8th conversion in regular sequence These bits are written by software with the channel number (0 to 18) assigned as the 8th in the regular conversion sequence Note: The software is allowed to write these bits only when ADSTART = 0 (which ensures that no regular conversion is ongoing).
    typedef bit_field_t<24, 0x1f> ADC_SQR2_SQ9; // 9th conversion in regular sequence These bits are written by software with the channel number (0 to 18) assigned as the 9th in the regular conversion sequence. Note: The software is allowed to write these bits only when ADSTART = 0 (which ensures that no regular conversion is ongoing).

    static constexpr uint32_t ADC_SQR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> ADC_SQR3_SQ10; // 10th conversion in regular sequence These bits are written by software with the channel number (0 to 18) assigned as the 10th in the regular conversion sequence. Note: The software is allowed to write these bits only when ADSTART = 0 (which ensures that no regular conversion is ongoing).
    typedef bit_field_t<6, 0x1f> ADC_SQR3_SQ11; // 11th conversion in regular sequence These bits are written by software with the channel number (0 to 18) assigned as the 11th in the regular conversion sequence. Note: The software is allowed to write these bits only when ADSTART = 0 (which ensures that no regular conversion is ongoing).
    typedef bit_field_t<12, 0x1f> ADC_SQR3_SQ12; // 12th conversion in regular sequence These bits are written by software with the channel number (0 to 18) assigned as the 12th in the regular conversion sequence. Note: The software is allowed to write these bits only when ADSTART = 0 (which ensures that no regular conversion is ongoing).
    typedef bit_field_t<18, 0x1f> ADC_SQR3_SQ13; // 13th conversion in regular sequence These bits are written by software with the channel number (0 to 18) assigned as the 13th in the regular conversion sequence. Note: The software is allowed to write these bits only when ADSTART = 0 (which ensures that no regular conversion is ongoing).
    typedef bit_field_t<24, 0x1f> ADC_SQR3_SQ14; // 14th conversion in regular sequence These bits are written by software with the channel number (0 to 18) assigned as the 14th in the regular conversion sequence. Note: The software is allowed to write these bits only when ADSTART = 0 (which ensures that no regular conversion is ongoing).

    static constexpr uint32_t ADC_SQR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> ADC_SQR4_SQ15; // 15th conversion in regular sequence These bits are written by software with the channel number (0 to 18) assigned as the 15th in the regular conversion sequence. Note: The software is allowed to write these bits only when ADSTART = 0 (which ensures that no regular conversion is ongoing).
    typedef bit_field_t<6, 0x1f> ADC_SQR4_SQ16; // 16th conversion in regular sequence These bits are written by software with the channel number (0 to 18) assigned as the 16th in the regular conversion sequence. Note: The software is allowed to write these bits only when ADSTART = 0 (which ensures that no regular conversion is ongoing).

    static constexpr uint32_t ADC_DR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> ADC_DR_RDATA; // Regular data converted These bits are read-only. They contain the conversion result from the last converted regular channel. The data are left- or right-aligned as described in .


    static constexpr uint32_t ADC_JSQR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> ADC_JSQR_JL; // Injected channel sequence length These bits are written by software to define the total number of conversions in the injected channel conversion sequence. Note: The software is allowed to write these bits only when JADSTART = 0 (which ensures that no injected conversion is ongoing).
    typedef bit_field_t<2, 0x1f> ADC_JSQR_JEXTSEL; // External Trigger Selection for injected group These bits select the external event used to trigger the start of conversion of an injected group: ... Note: The software is allowed to write these bits only when JADSTART = 0 (which ensures that no injected conversion is ongoing).
    typedef bit_field_t<7, 0x3> ADC_JSQR_JEXTEN; // External trigger enable and polarity selection for injected channels These bits are set and cleared by software to select the external trigger polarity and enable the trigger of an injected group. Note: The software is allowed to write these bits only when JADSTART = 0 (which ensures that no injected conversion is ongoing). If JQM = 1 and if the Queue of Context becomes empty, the software and hardware triggers of the injected sequence are both internally disabled (refer to Queue of context for injected conversions)
    typedef bit_field_t<9, 0x1f> ADC_JSQR_JSQ1; // 1st conversion in the injected sequence These bits are written by software with the channel number (0 to 18) assigned as the 1st in the injected conversion sequence. Note: The software is allowed to write these bits only when JADSTART = 0 (which ensures that no injected conversion is ongoing).
    typedef bit_field_t<15, 0x1f> ADC_JSQR_JSQ2; // 2nd conversion in the injected sequence These bits are written by software with the channel number (0 to 18) assigned as the 2nd in the injected conversion sequence. Note: The software is allowed to write these bits only when JADSTART = 0 (which ensures that no injected conversion is ongoing).
    typedef bit_field_t<21, 0x1f> ADC_JSQR_JSQ3; // 3rd conversion in the injected sequence These bits are written by software with the channel number (0 to 18) assigned as the 3rd in the injected conversion sequence. Note: The software is allowed to write these bits only when JADSTART = 0 (which ensures that no injected conversion is ongoing).
    typedef bit_field_t<27, 0x1f> ADC_JSQR_JSQ4; // 4th conversion in the injected sequence These bits are written by software with the channel number (0 to 18) assigned as the 4th in the injected conversion sequence. Note: The software is allowed to write these bits only when JADSTART = 0 (which ensures that no injected conversion is ongoing).


    static constexpr uint32_t ADC_OFR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> ADC_OFR1_OFFSET; // Data offset y for the channel programmed into bits OFFSET_CH[4:0] These bits are written by software to define the offset to be subtracted from the raw converted data when converting a channel (can be regular or injected). The channel to which applies the data offset must be programmed in the bits OFFSET_CH[4:0]. The conversion result can be read from in the ADC_DR (regular conversion) or from in the ADC_JDRyi registers (injected conversion). Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing). If several offset (OFFSET) point to the same channel, only the offset with the lowest x value is considered for the subtraction. Ex: if OFFSET1_CH[4:0] = 4 and OFFSET2_CH[4:0] = 4, this is OFFSET1[11:0] which is subtracted when converting channel 4.
    static constexpr uint32_t ADC_OFR1_OFFSETPOS = 0x1000000; // Positive offset This bit is set and cleared by software to enable the positive offset. Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_OFR1_SATEN = 0x2000000; // Saturation enable This bit is set and cleared by software to enable the saturation at 0x000 and 0xFFF for the offset function. Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<26, 0x1f> ADC_OFR1_OFFSET_CH; // Channel selection for the data offset y These bits are written by software to define the channel to which the offset programmed into bits OFFSET[11:0] applies. Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing). Some channels are not connected physically and must not be selected for the data offset y. If OFFSET_EN is set, it is not allowed to select the same channel for different ADC_OFRy registers.
    static constexpr uint32_t ADC_OFR1_OFFSET_EN = 0x80000000; // Offset y enable This bit is written by software to enable or disable the offset programmed into bits OFFSET[11:0]. Note: The software is allowed to write this bit only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).

    static constexpr uint32_t ADC_OFR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> ADC_OFR2_OFFSET; // Data offset y for the channel programmed into bits OFFSET_CH[4:0] These bits are written by software to define the offset to be subtracted from the raw converted data when converting a channel (can be regular or injected). The channel to which applies the data offset must be programmed in the bits OFFSET_CH[4:0]. The conversion result can be read from in the ADC_DR (regular conversion) or from in the ADC_JDRyi registers (injected conversion). Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing). If several offset (OFFSET) point to the same channel, only the offset with the lowest x value is considered for the subtraction. Ex: if OFFSET1_CH[4:0] = 4 and OFFSET2_CH[4:0] = 4, this is OFFSET1[11:0] which is subtracted when converting channel 4.
    static constexpr uint32_t ADC_OFR2_OFFSETPOS = 0x1000000; // Positive offset This bit is set and cleared by software to enable the positive offset. Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_OFR2_SATEN = 0x2000000; // Saturation enable This bit is set and cleared by software to enable the saturation at 0x000 and 0xFFF for the offset function. Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<26, 0x1f> ADC_OFR2_OFFSET_CH; // Channel selection for the data offset y These bits are written by software to define the channel to which the offset programmed into bits OFFSET[11:0] applies. Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing). Some channels are not connected physically and must not be selected for the data offset y. If OFFSET_EN is set, it is not allowed to select the same channel for different ADC_OFRy registers.
    static constexpr uint32_t ADC_OFR2_OFFSET_EN = 0x80000000; // Offset y enable This bit is written by software to enable or disable the offset programmed into bits OFFSET[11:0]. Note: The software is allowed to write this bit only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).

    static constexpr uint32_t ADC_OFR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> ADC_OFR3_OFFSET; // Data offset y for the channel programmed into bits OFFSET_CH[4:0] These bits are written by software to define the offset to be subtracted from the raw converted data when converting a channel (can be regular or injected). The channel to which applies the data offset must be programmed in the bits OFFSET_CH[4:0]. The conversion result can be read from in the ADC_DR (regular conversion) or from in the ADC_JDRyi registers (injected conversion). Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing). If several offset (OFFSET) point to the same channel, only the offset with the lowest x value is considered for the subtraction. Ex: if OFFSET1_CH[4:0] = 4 and OFFSET2_CH[4:0] = 4, this is OFFSET1[11:0] which is subtracted when converting channel 4.
    static constexpr uint32_t ADC_OFR3_OFFSETPOS = 0x1000000; // Positive offset This bit is set and cleared by software to enable the positive offset. Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_OFR3_SATEN = 0x2000000; // Saturation enable This bit is set and cleared by software to enable the saturation at 0x000 and 0xFFF for the offset function. Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<26, 0x1f> ADC_OFR3_OFFSET_CH; // Channel selection for the data offset y These bits are written by software to define the channel to which the offset programmed into bits OFFSET[11:0] applies. Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing). Some channels are not connected physically and must not be selected for the data offset y. If OFFSET_EN is set, it is not allowed to select the same channel for different ADC_OFRy registers.
    static constexpr uint32_t ADC_OFR3_OFFSET_EN = 0x80000000; // Offset y enable This bit is written by software to enable or disable the offset programmed into bits OFFSET[11:0]. Note: The software is allowed to write this bit only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).

    static constexpr uint32_t ADC_OFR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> ADC_OFR4_OFFSET; // Data offset y for the channel programmed into bits OFFSET_CH[4:0] These bits are written by software to define the offset to be subtracted from the raw converted data when converting a channel (can be regular or injected). The channel to which applies the data offset must be programmed in the bits OFFSET_CH[4:0]. The conversion result can be read from in the ADC_DR (regular conversion) or from in the ADC_JDRyi registers (injected conversion). Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing). If several offset (OFFSET) point to the same channel, only the offset with the lowest x value is considered for the subtraction. Ex: if OFFSET1_CH[4:0] = 4 and OFFSET2_CH[4:0] = 4, this is OFFSET1[11:0] which is subtracted when converting channel 4.
    static constexpr uint32_t ADC_OFR4_OFFSETPOS = 0x1000000; // Positive offset This bit is set and cleared by software to enable the positive offset. Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).
    static constexpr uint32_t ADC_OFR4_SATEN = 0x2000000; // Saturation enable This bit is set and cleared by software to enable the saturation at 0x000 and 0xFFF for the offset function. Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).
    typedef bit_field_t<26, 0x1f> ADC_OFR4_OFFSET_CH; // Channel selection for the data offset y These bits are written by software to define the channel to which the offset programmed into bits OFFSET[11:0] applies. Note: The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing). Some channels are not connected physically and must not be selected for the data offset y. If OFFSET_EN is set, it is not allowed to select the same channel for different ADC_OFRy registers.
    static constexpr uint32_t ADC_OFR4_OFFSET_EN = 0x80000000; // Offset y enable This bit is written by software to enable or disable the offset programmed into bits OFFSET[11:0]. Note: The software is allowed to write this bit only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing).


    static constexpr uint32_t ADC_JDR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> ADC_JDR1_JDATA; // Injected data These bits are read-only. They contain the conversion result from injected channel y. The data are left -or right-aligned as described in .

    static constexpr uint32_t ADC_JDR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> ADC_JDR2_JDATA; // Injected data These bits are read-only. They contain the conversion result from injected channel y. The data are left -or right-aligned as described in .

    static constexpr uint32_t ADC_JDR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> ADC_JDR3_JDATA; // Injected data These bits are read-only. They contain the conversion result from injected channel y. The data are left -or right-aligned as described in .

    static constexpr uint32_t ADC_JDR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> ADC_JDR4_JDATA; // Injected data These bits are read-only. They contain the conversion result from injected channel y. The data are left -or right-aligned as described in .


    static constexpr uint32_t ADC_AWD2CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> ADC_AWD2CR_AWD2CH; // Analog watchdog 2 channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by the analog watchdog 2. AWD2CH[i] = 0: ADC analog input channel i is not monitored by AWD2 AWD2CH[i] = 1: ADC analog input channel i is monitored by AWD2 When AWD2CH[18:0] = 000..0, the analog Watchdog 2 is disabled Note: The channels selected by AWD2CH must be also selected into the SQRi or JSQRi registers. The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing). Some channels are not connected physically and must not be selected for the analog watchdog.

    static constexpr uint32_t ADC_AWD3CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> ADC_AWD3CR_AWD3CH; // Analog watchdog 3 channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by the analog watchdog 3. AWD3CH[i] = 0: ADC analog input channel i is not monitored by AWD3 AWD3CH[i] = 1: ADC analog input channel i is monitored by AWD3 When AWD3CH[18:0] = 000..0, the analog Watchdog 3 is disabled Note: The channels selected by AWD3CH must be also selected into the SQRi or JSQRi registers. The software is allowed to write these bits only when ADSTART = 0 and JADSTART = 0 (which ensures that no conversion is ongoing). Some channels are not connected physically and must not be selected for the analog watchdog.


    static constexpr uint32_t ADC_DIFSEL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> ADC_DIFSEL_DIFSEL; // Differential mode for channels 18 to 0. These bits are set and cleared by software. They allow to select if a channel is configured as Single-ended or Differential mode. DIFSEL[i] = 0: ADC analog input channel is configured in Single-ended mode DIFSEL[i] = 1: ADC analog input channel i is configured in Differential mode Note: The DIFSEL bits corresponding to channels that are either connected to a single-ended I/O port or to an internal channel must be kept their reset value (Single-ended input mode). The software is allowed to write these bits only when the ADC is disabled (ADCAL = 0, JADSTART = 0, JADSTP = 0, ADSTART = 0, ADSTP = 0, ADDIS = 0 and ADEN = 0).

    static constexpr uint32_t ADC_CALFACT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7f> ADC_CALFACT_CALFACT_S; // Calibration Factors In Single-ended mode These bits are written by hardware or by software. Once a single-ended inputs calibration is complete, they are updated by hardware with the calibration factors. Software can write these bits with a new calibration factor. If the new calibration factor is different from the current one stored into the analog ADC, it is then applied once a new single-ended calibration is launched. Note: The software is allowed to write these bits only when ADEN = 1, ADSTART = 0 and JADSTART = 0 (ADC is enabled and no calibration is ongoing and no conversion is ongoing).
    typedef bit_field_t<16, 0x7f> ADC_CALFACT_CALFACT_D; // Calibration Factors in differential mode These bits are written by hardware or by software. Once a differential inputs calibration is complete, they are updated by hardware with the calibration factors. Software can write these bits with a new calibration factor. If the new calibration factor is different from the current one stored into the analog ADC, it is then applied once a new differential calibration is launched. Note: The software is allowed to write these bits only when ADEN = 1, ADSTART = 0 and JADSTART = 0 (ADC is enabled and no calibration is ongoing and no conversion is ongoing).
};

// ADC3: Analog to Digital Converter

struct stm32h742x_adc3_t
{
    volatile uint32_t ISR; // ADC interrupt and status register
    volatile uint32_t IER; // ADC interrupt enable register
    volatile uint32_t CR; // ADC control register
    volatile uint32_t CFGR; // ADC configuration register 1
    volatile uint32_t CFGR2; // ADC configuration register 2
    volatile uint32_t SMPR1; // ADC sampling time register 1
    volatile uint32_t SMPR2; // ADC sampling time register 2
    volatile uint32_t PCSEL; // ADC pre channel selection register
    volatile uint32_t LTR1; // ADC analog watchdog 1 threshold register
    volatile uint32_t LHTR1; // ADC analog watchdog 2 threshold register
    reserved_t<0x2> _0x28;
    volatile uint32_t SQR1; // ADC group regular sequencer ranks register 1
    volatile uint32_t SQR2; // ADC group regular sequencer ranks register 2
    volatile uint32_t SQR3; // ADC group regular sequencer ranks register 3
    volatile uint32_t SQR4; // ADC group regular sequencer ranks register 4
    volatile uint32_t DR; // ADC group regular conversion data register
    reserved_t<0x2> _0x44;
    volatile uint32_t JSQR; // ADC group injected sequencer register
    reserved_t<0x4> _0x50;
    volatile uint32_t OFR1; // ADC offset number 1 register
    volatile uint32_t OFR2; // ADC offset number 2 register
    volatile uint32_t OFR3; // ADC offset number 3 register
    volatile uint32_t OFR4; // ADC offset number 4 register
    reserved_t<0x4> _0x70;
    volatile uint32_t JDR1; // ADC group injected sequencer rank 1 register
    volatile uint32_t JDR2; // ADC group injected sequencer rank 2 register
    volatile uint32_t JDR3; // ADC group injected sequencer rank 3 register
    volatile uint32_t JDR4; // ADC group injected sequencer rank 4 register
    reserved_t<0x4> _0x90;
    volatile uint32_t AWD2CR; // ADC analog watchdog 2 configuration register
    volatile uint32_t AWD3CR; // ADC analog watchdog 3 configuration register
    reserved_t<0x2> _0xa8;
    volatile uint32_t LTR2; // ADC watchdog lower threshold register 2
    volatile uint32_t HTR2; // ADC watchdog higher threshold register 2
    volatile uint32_t LTR3; // ADC watchdog lower threshold register 3
    volatile uint32_t HTR3; // ADC watchdog higher threshold register 3
    volatile uint32_t DIFSEL; // ADC channel differential or single-ended mode selection register
    volatile uint32_t CALFACT; // ADC calibration factors register
    volatile uint32_t CALFACT2; // ADC Calibration Factor register 2

    static constexpr uint32_t ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ISR_JQOVF = 0x400; // ADC group injected contexts queue overflow flag
    static constexpr uint32_t ISR_AWD3 = 0x200; // ADC analog watchdog 3 flag
    static constexpr uint32_t ISR_AWD2 = 0x100; // ADC analog watchdog 2 flag
    static constexpr uint32_t ISR_AWD1 = 0x80; // ADC analog watchdog 1 flag
    static constexpr uint32_t ISR_JEOS = 0x40; // ADC group injected end of sequence conversions flag
    static constexpr uint32_t ISR_JEOC = 0x20; // ADC group injected end of unitary conversion flag
    static constexpr uint32_t ISR_OVR = 0x10; // ADC group regular overrun flag
    static constexpr uint32_t ISR_EOS = 0x8; // ADC group regular end of sequence conversions flag
    static constexpr uint32_t ISR_EOC = 0x4; // ADC group regular end of unitary conversion flag
    static constexpr uint32_t ISR_EOSMP = 0x2; // ADC group regular end of sampling flag
    static constexpr uint32_t ISR_ADRDY = 0x1; // ADC ready flag

    static constexpr uint32_t IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IER_JQOVFIE = 0x400; // ADC group injected contexts queue overflow interrupt
    static constexpr uint32_t IER_AWD3IE = 0x200; // ADC analog watchdog 3 interrupt
    static constexpr uint32_t IER_AWD2IE = 0x100; // ADC analog watchdog 2 interrupt
    static constexpr uint32_t IER_AWD1IE = 0x80; // ADC analog watchdog 1 interrupt
    static constexpr uint32_t IER_JEOSIE = 0x40; // ADC group injected end of sequence conversions interrupt
    static constexpr uint32_t IER_JEOCIE = 0x20; // ADC group injected end of unitary conversion interrupt
    static constexpr uint32_t IER_OVRIE = 0x10; // ADC group regular overrun interrupt
    static constexpr uint32_t IER_EOSIE = 0x8; // ADC group regular end of sequence conversions interrupt
    static constexpr uint32_t IER_EOCIE = 0x4; // ADC group regular end of unitary conversion interrupt
    static constexpr uint32_t IER_EOSMPIE = 0x2; // ADC group regular end of sampling interrupt
    static constexpr uint32_t IER_ADRDYIE = 0x1; // ADC ready interrupt

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_ADCAL = 0x80000000; // ADC calibration
    static constexpr uint32_t CR_ADCALDIF = 0x40000000; // ADC differential mode for calibration
    static constexpr uint32_t CR_DEEPPWD = 0x20000000; // ADC deep power down enable
    static constexpr uint32_t CR_ADVREGEN = 0x10000000; // ADC voltage regulator enable
    static constexpr uint32_t CR_LINCALRDYW6 = 0x8000000; // Linearity calibration ready Word 6
    static constexpr uint32_t CR_LINCALRDYW5 = 0x4000000; // Linearity calibration ready Word 5
    static constexpr uint32_t CR_LINCALRDYW4 = 0x2000000; // Linearity calibration ready Word 4
    static constexpr uint32_t CR_LINCALRDYW3 = 0x1000000; // Linearity calibration ready Word 3
    static constexpr uint32_t CR_LINCALRDYW2 = 0x800000; // Linearity calibration ready Word 2
    static constexpr uint32_t CR_LINCALRDYW1 = 0x400000; // Linearity calibration ready Word 1
    static constexpr uint32_t CR_ADCALLIN = 0x10000; // Linearity calibration
    static constexpr uint32_t CR_BOOST = 0x100; // Boost mode control
    static constexpr uint32_t CR_JADSTP = 0x20; // ADC group injected conversion stop
    static constexpr uint32_t CR_ADSTP = 0x10; // ADC group regular conversion stop
    static constexpr uint32_t CR_JADSTART = 0x8; // ADC group injected conversion start
    static constexpr uint32_t CR_ADSTART = 0x4; // ADC group regular conversion start
    static constexpr uint32_t CR_ADDIS = 0x2; // ADC disable
    static constexpr uint32_t CR_ADEN = 0x1; // ADC enable

    static constexpr uint32_t CFGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR_JQDIS = 0x80000000; // ADC group injected contexts queue disable
    typedef bit_field_t<26, 0x1f> CFGR_AWDCH1CH; // ADC analog watchdog 1 monitored channel selection
    static constexpr uint32_t CFGR_JAUTO = 0x2000000; // ADC group injected automatic trigger mode
    static constexpr uint32_t CFGR_JAWD1EN = 0x1000000; // ADC analog watchdog 1 enable on scope ADC group injected
    static constexpr uint32_t CFGR_AWD1EN = 0x800000; // ADC analog watchdog 1 enable on scope ADC group regular
    static constexpr uint32_t CFGR_AWD1SGL = 0x400000; // ADC analog watchdog 1 monitoring a single channel or all channels
    static constexpr uint32_t CFGR_JQM = 0x200000; // ADC group injected contexts queue mode
    static constexpr uint32_t CFGR_JDISCEN = 0x100000; // ADC group injected sequencer discontinuous mode
    typedef bit_field_t<17, 0x7> CFGR_DISCNUM; // ADC group regular sequencer discontinuous number of ranks
    static constexpr uint32_t CFGR_DISCEN = 0x10000; // ADC group regular sequencer discontinuous mode
    static constexpr uint32_t CFGR_AUTDLY = 0x4000; // ADC low power auto wait
    static constexpr uint32_t CFGR_CONT = 0x2000; // ADC group regular continuous conversion mode
    static constexpr uint32_t CFGR_OVRMOD = 0x1000; // ADC group regular overrun configuration
    typedef bit_field_t<10, 0x3> CFGR_EXTEN; // ADC group regular external trigger polarity
    typedef bit_field_t<5, 0x1f> CFGR_EXTSEL; // ADC group regular external trigger source
    typedef bit_field_t<2, 0x7> CFGR_RES; // ADC data resolution
    typedef bit_field_t<0, 0x3> CFGR_DMNGT; // ADC DMA transfer enable

    static constexpr uint32_t CFGR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR2_ROVSE = 0x1; // ADC oversampler enable on scope ADC group regular
    static constexpr uint32_t CFGR2_JOVSE = 0x2; // ADC oversampler enable on scope ADC group injected
    typedef bit_field_t<5, 0xf> CFGR2_OVSS; // ADC oversampling shift
    static constexpr uint32_t CFGR2_TROVS = 0x200; // ADC oversampling discontinuous mode (triggered mode) for ADC group regular
    static constexpr uint32_t CFGR2_ROVSM = 0x400; // Regular Oversampling mode
    static constexpr uint32_t CFGR2_RSHIFT1 = 0x800; // Right-shift data after Offset 1 correction
    static constexpr uint32_t CFGR2_RSHIFT2 = 0x1000; // Right-shift data after Offset 2 correction
    static constexpr uint32_t CFGR2_RSHIFT3 = 0x2000; // Right-shift data after Offset 3 correction
    static constexpr uint32_t CFGR2_RSHIFT4 = 0x4000; // Right-shift data after Offset 4 correction
    typedef bit_field_t<16, 0x3ff> CFGR2_OSR; // Oversampling ratio
    typedef bit_field_t<28, 0xf> CFGR2_LSHIFT; // Left shift factor

    static constexpr uint32_t SMPR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<27, 0x7> SMPR1_SMP9; // ADC channel 9 sampling time selection
    typedef bit_field_t<24, 0x7> SMPR1_SMP8; // ADC channel 8 sampling time selection
    typedef bit_field_t<21, 0x7> SMPR1_SMP7; // ADC channel 7 sampling time selection
    typedef bit_field_t<18, 0x7> SMPR1_SMP6; // ADC channel 6 sampling time selection
    typedef bit_field_t<15, 0x7> SMPR1_SMP5; // ADC channel 5 sampling time selection
    typedef bit_field_t<12, 0x7> SMPR1_SMP4; // ADC channel 4 sampling time selection
    typedef bit_field_t<9, 0x7> SMPR1_SMP3; // ADC channel 3 sampling time selection
    typedef bit_field_t<6, 0x7> SMPR1_SMP2; // ADC channel 2 sampling time selection
    typedef bit_field_t<3, 0x7> SMPR1_SMP1; // ADC channel 1 sampling time selection

    static constexpr uint32_t SMPR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<27, 0x7> SMPR2_SMP19; // ADC channel 18 sampling time selection
    typedef bit_field_t<24, 0x7> SMPR2_SMP18; // ADC channel 18 sampling time selection
    typedef bit_field_t<21, 0x7> SMPR2_SMP17; // ADC channel 17 sampling time selection
    typedef bit_field_t<18, 0x7> SMPR2_SMP16; // ADC channel 16 sampling time selection
    typedef bit_field_t<15, 0x7> SMPR2_SMP15; // ADC channel 15 sampling time selection
    typedef bit_field_t<12, 0x7> SMPR2_SMP14; // ADC channel 14 sampling time selection
    typedef bit_field_t<9, 0x7> SMPR2_SMP13; // ADC channel 13 sampling time selection
    typedef bit_field_t<6, 0x7> SMPR2_SMP12; // ADC channel 12 sampling time selection
    typedef bit_field_t<3, 0x7> SMPR2_SMP11; // ADC channel 11 sampling time selection
    typedef bit_field_t<0, 0x7> SMPR2_SMP10; // ADC channel 10 sampling time selection

    static constexpr uint32_t PCSEL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfffff> PCSEL_PCSEL; // Channel x (VINP[i]) pre selection

    static constexpr uint32_t LTR1_RESET_VALUE = 0xfff0000; // Reset value
    typedef bit_field_t<0, 0x3ffffff> LTR1_LTR1; // ADC analog watchdog 1 threshold low

    static constexpr uint32_t LHTR1_RESET_VALUE = 0xfff0000; // Reset value
    typedef bit_field_t<0, 0x3ffffff> LHTR1_LHTR1; // ADC analog watchdog 2 threshold low


    static constexpr uint32_t SQR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> SQR1_SQ4; // ADC group regular sequencer rank 4
    typedef bit_field_t<18, 0x1f> SQR1_SQ3; // ADC group regular sequencer rank 3
    typedef bit_field_t<12, 0x1f> SQR1_SQ2; // ADC group regular sequencer rank 2
    typedef bit_field_t<6, 0x1f> SQR1_SQ1; // ADC group regular sequencer rank 1
    typedef bit_field_t<0, 0xf> SQR1_L3; // L3

    static constexpr uint32_t SQR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> SQR2_SQ9; // ADC group regular sequencer rank 9
    typedef bit_field_t<18, 0x1f> SQR2_SQ8; // ADC group regular sequencer rank 8
    typedef bit_field_t<12, 0x1f> SQR2_SQ7; // ADC group regular sequencer rank 7
    typedef bit_field_t<6, 0x1f> SQR2_SQ6; // ADC group regular sequencer rank 6
    typedef bit_field_t<0, 0x1f> SQR2_SQ5; // ADC group regular sequencer rank 5

    static constexpr uint32_t SQR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> SQR3_SQ14; // ADC group regular sequencer rank 14
    typedef bit_field_t<18, 0x1f> SQR3_SQ13; // ADC group regular sequencer rank 13
    typedef bit_field_t<12, 0x1f> SQR3_SQ12; // ADC group regular sequencer rank 12
    typedef bit_field_t<6, 0x1f> SQR3_SQ11; // ADC group regular sequencer rank 11
    typedef bit_field_t<0, 0x1f> SQR3_SQ10; // ADC group regular sequencer rank 10

    static constexpr uint32_t SQR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<6, 0x1f> SQR4_SQ16; // ADC group regular sequencer rank 16
    typedef bit_field_t<0, 0x1f> SQR4_SQ15; // ADC group regular sequencer rank 15

    static constexpr uint32_t DR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR_RDATA; // ADC group regular conversion data


    static constexpr uint32_t JSQR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<27, 0x1f> JSQR_JSQ4; // ADC group injected sequencer rank 4
    typedef bit_field_t<21, 0x1f> JSQR_JSQ3; // ADC group injected sequencer rank 3
    typedef bit_field_t<15, 0x1f> JSQR_JSQ2; // ADC group injected sequencer rank 2
    typedef bit_field_t<9, 0x1f> JSQR_JSQ1; // ADC group injected sequencer rank 1
    typedef bit_field_t<7, 0x3> JSQR_JEXTEN; // ADC group injected external trigger polarity
    typedef bit_field_t<2, 0x1f> JSQR_JEXTSEL; // ADC group injected external trigger source
    typedef bit_field_t<0, 0x3> JSQR_JL; // ADC group injected sequencer scan length


    static constexpr uint32_t OFR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OFR1_SSATE = 0x80000000; // ADC offset number 1 enable
    typedef bit_field_t<26, 0x1f> OFR1_OFFSET1_CH; // ADC offset number 1 channel selection
    typedef bit_field_t<0, 0x3ffffff> OFR1_OFFSET1; // ADC offset number 1 offset level

    static constexpr uint32_t OFR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OFR2_SSATE = 0x80000000; // ADC offset number 1 enable
    typedef bit_field_t<26, 0x1f> OFR2_OFFSET1_CH; // ADC offset number 1 channel selection
    typedef bit_field_t<0, 0x3ffffff> OFR2_OFFSET1; // ADC offset number 1 offset level

    static constexpr uint32_t OFR3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OFR3_SSATE = 0x80000000; // ADC offset number 1 enable
    typedef bit_field_t<26, 0x1f> OFR3_OFFSET1_CH; // ADC offset number 1 channel selection
    typedef bit_field_t<0, 0x3ffffff> OFR3_OFFSET1; // ADC offset number 1 offset level

    static constexpr uint32_t OFR4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OFR4_SSATE = 0x80000000; // ADC offset number 1 enable
    typedef bit_field_t<26, 0x1f> OFR4_OFFSET1_CH; // ADC offset number 1 channel selection
    typedef bit_field_t<0, 0x3ffffff> OFR4_OFFSET1; // ADC offset number 1 offset level


    static constexpr uint32_t JDR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> JDR1_JDATA1; // ADC group injected sequencer rank 1 conversion data

    static constexpr uint32_t JDR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> JDR2_JDATA2; // ADC group injected sequencer rank 2 conversion data

    static constexpr uint32_t JDR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> JDR3_JDATA3; // ADC group injected sequencer rank 3 conversion data

    static constexpr uint32_t JDR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> JDR4_JDATA4; // ADC group injected sequencer rank 4 conversion data


    static constexpr uint32_t AWD2CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfffff> AWD2CR_AWD2CH; // ADC analog watchdog 2 monitored channel selection

    static constexpr uint32_t AWD3CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<1, 0xfffff> AWD3CR_AWD3CH; // ADC analog watchdog 3 monitored channel selection


    static constexpr uint32_t LTR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffffff> LTR2_LTR2; // Analog watchdog 2 lower threshold

    static constexpr uint32_t HTR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffffff> HTR2_HTR2; // Analog watchdog 2 higher threshold

    static constexpr uint32_t LTR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffffff> LTR3_LTR3; // Analog watchdog 3 lower threshold

    static constexpr uint32_t HTR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffffff> HTR3_HTR3; // Analog watchdog 3 higher threshold

    static constexpr uint32_t DIFSEL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfffff> DIFSEL_DIFSEL; // ADC channel differential or single-ended mode for channel

    static constexpr uint32_t CALFACT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0x7ff> CALFACT_CALFACT_D; // ADC calibration factor in differential mode
    typedef bit_field_t<0, 0x7ff> CALFACT_CALFACT_S; // ADC calibration factor in single-ended mode

    static constexpr uint32_t CALFACT2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3fffffff> CALFACT2_LINCALFACT; // Linearity Calibration Factor
};

// ADC3: Analog to Digital Converter

struct stm32h745_cm4_adc3_t
{
    volatile uint32_t ISR; // ADC interrupt and status register
    volatile uint32_t IER; // ADC interrupt enable register
    volatile uint32_t CR; // ADC control register
    volatile uint32_t CFGR; // ADC configuration register 1
    volatile uint32_t CFGR2; // ADC configuration register 2
    volatile uint32_t SMPR1; // ADC sampling time register 1
    volatile uint32_t SMPR2; // ADC sampling time register 2
    volatile uint32_t PCSEL; // ADC pre channel selection register
    volatile uint32_t LTR1; // ADC analog watchdog 1 threshold register
    volatile uint32_t LHTR1; // ADC analog watchdog 2 threshold register
    reserved_t<0x2> _0x28;
    volatile uint32_t SQR1; // ADC group regular sequencer ranks register 1
    volatile uint32_t SQR2; // ADC group regular sequencer ranks register 2
    volatile uint32_t SQR3; // ADC group regular sequencer ranks register 3
    volatile uint32_t SQR4; // ADC group regular sequencer ranks register 4
    volatile uint32_t DR; // ADC group regular conversion data register
    reserved_t<0x2> _0x44;
    volatile uint32_t JSQR; // ADC group injected sequencer register
    reserved_t<0x4> _0x50;
    volatile uint32_t OFR1; // ADC offset number 1 register
    volatile uint32_t OFR2; // ADC offset number 2 register
    volatile uint32_t OFR3; // ADC offset number 3 register
    volatile uint32_t OFR4; // ADC offset number 4 register
    reserved_t<0x4> _0x70;
    volatile uint32_t JDR1; // ADC group injected sequencer rank 1 register
    volatile uint32_t JDR2; // ADC group injected sequencer rank 2 register
    volatile uint32_t JDR3; // ADC group injected sequencer rank 3 register
    volatile uint32_t JDR4; // ADC group injected sequencer rank 4 register
    reserved_t<0x4> _0x90;
    volatile uint32_t AWD2CR; // ADC analog watchdog 2 configuration register
    volatile uint32_t AWD3CR; // ADC analog watchdog 3 configuration register
    reserved_t<0x2> _0xa8;
    volatile uint32_t LTR2; // ADC watchdog lower threshold register 2
    volatile uint32_t HTR2; // ADC watchdog higher threshold register 2
    volatile uint32_t LTR3; // ADC watchdog lower threshold register 3
    volatile uint32_t HTR3; // ADC watchdog higher threshold register 3
    volatile uint32_t DIFSEL; // ADC channel differential or single-ended mode selection register
    volatile uint32_t CALFACT; // ADC calibration factors register
    volatile uint32_t CALFACT2; // ADC Calibration Factor register 2

    static constexpr uint32_t ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ISR_JQOVF = 0x400; // ADC group injected contexts queue overflow flag
    static constexpr uint32_t ISR_AWD3 = 0x200; // ADC analog watchdog 3 flag
    static constexpr uint32_t ISR_AWD2 = 0x100; // ADC analog watchdog 2 flag
    static constexpr uint32_t ISR_AWD1 = 0x80; // ADC analog watchdog 1 flag
    static constexpr uint32_t ISR_JEOS = 0x40; // ADC group injected end of sequence conversions flag
    static constexpr uint32_t ISR_JEOC = 0x20; // ADC group injected end of unitary conversion flag
    static constexpr uint32_t ISR_OVR = 0x10; // ADC group regular overrun flag
    static constexpr uint32_t ISR_EOS = 0x8; // ADC group regular end of sequence conversions flag
    static constexpr uint32_t ISR_EOC = 0x4; // ADC group regular end of unitary conversion flag
    static constexpr uint32_t ISR_EOSMP = 0x2; // ADC group regular end of sampling flag
    static constexpr uint32_t ISR_ADRDY = 0x1; // ADC ready flag

    static constexpr uint32_t IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IER_JQOVFIE = 0x400; // ADC group injected contexts queue overflow interrupt
    static constexpr uint32_t IER_AWD3IE = 0x200; // ADC analog watchdog 3 interrupt
    static constexpr uint32_t IER_AWD2IE = 0x100; // ADC analog watchdog 2 interrupt
    static constexpr uint32_t IER_AWD1IE = 0x80; // ADC analog watchdog 1 interrupt
    static constexpr uint32_t IER_JEOSIE = 0x40; // ADC group injected end of sequence conversions interrupt
    static constexpr uint32_t IER_JEOCIE = 0x20; // ADC group injected end of unitary conversion interrupt
    static constexpr uint32_t IER_OVRIE = 0x10; // ADC group regular overrun interrupt
    static constexpr uint32_t IER_EOSIE = 0x8; // ADC group regular end of sequence conversions interrupt
    static constexpr uint32_t IER_EOCIE = 0x4; // ADC group regular end of unitary conversion interrupt
    static constexpr uint32_t IER_EOSMPIE = 0x2; // ADC group regular end of sampling interrupt
    static constexpr uint32_t IER_ADRDYIE = 0x1; // ADC ready interrupt

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_ADCAL = 0x80000000; // ADC calibration
    static constexpr uint32_t CR_ADCALDIF = 0x40000000; // ADC differential mode for calibration
    static constexpr uint32_t CR_DEEPPWD = 0x20000000; // ADC deep power down enable
    static constexpr uint32_t CR_ADVREGEN = 0x10000000; // ADC voltage regulator enable
    static constexpr uint32_t CR_LINCALRDYW6 = 0x8000000; // Linearity calibration ready Word 6
    static constexpr uint32_t CR_LINCALRDYW5 = 0x4000000; // Linearity calibration ready Word 5
    static constexpr uint32_t CR_LINCALRDYW4 = 0x2000000; // Linearity calibration ready Word 4
    static constexpr uint32_t CR_LINCALRDYW3 = 0x1000000; // Linearity calibration ready Word 3
    static constexpr uint32_t CR_LINCALRDYW2 = 0x800000; // Linearity calibration ready Word 2
    static constexpr uint32_t CR_LINCALRDYW1 = 0x400000; // Linearity calibration ready Word 1
    static constexpr uint32_t CR_ADCALLIN = 0x10000; // Linearity calibration
    typedef bit_field_t<8, 0x3> CR_BOOST; // Boost mode control
    static constexpr uint32_t CR_JADSTP = 0x20; // ADC group injected conversion stop
    static constexpr uint32_t CR_ADSTP = 0x10; // ADC group regular conversion stop
    static constexpr uint32_t CR_JADSTART = 0x8; // ADC group injected conversion start
    static constexpr uint32_t CR_ADSTART = 0x4; // ADC group regular conversion start
    static constexpr uint32_t CR_ADDIS = 0x2; // ADC disable
    static constexpr uint32_t CR_ADEN = 0x1; // ADC enable

    static constexpr uint32_t CFGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR_JQDIS = 0x80000000; // ADC group injected contexts queue disable
    typedef bit_field_t<26, 0x1f> CFGR_AWDCH1CH; // ADC analog watchdog 1 monitored channel selection
    static constexpr uint32_t CFGR_JAUTO = 0x2000000; // ADC group injected automatic trigger mode
    static constexpr uint32_t CFGR_JAWD1EN = 0x1000000; // ADC analog watchdog 1 enable on scope ADC group injected
    static constexpr uint32_t CFGR_AWD1EN = 0x800000; // ADC analog watchdog 1 enable on scope ADC group regular
    static constexpr uint32_t CFGR_AWD1SGL = 0x400000; // ADC analog watchdog 1 monitoring a single channel or all channels
    static constexpr uint32_t CFGR_JQM = 0x200000; // ADC group injected contexts queue mode
    static constexpr uint32_t CFGR_JDISCEN = 0x100000; // ADC group injected sequencer discontinuous mode
    typedef bit_field_t<17, 0x7> CFGR_DISCNUM; // ADC group regular sequencer discontinuous number of ranks
    static constexpr uint32_t CFGR_DISCEN = 0x10000; // ADC group regular sequencer discontinuous mode
    static constexpr uint32_t CFGR_AUTDLY = 0x4000; // ADC low power auto wait
    static constexpr uint32_t CFGR_CONT = 0x2000; // ADC group regular continuous conversion mode
    static constexpr uint32_t CFGR_OVRMOD = 0x1000; // ADC group regular overrun configuration
    typedef bit_field_t<10, 0x3> CFGR_EXTEN; // ADC group regular external trigger polarity
    typedef bit_field_t<5, 0x1f> CFGR_EXTSEL; // ADC group regular external trigger source
    typedef bit_field_t<2, 0x7> CFGR_RES; // ADC data resolution
    typedef bit_field_t<0, 0x3> CFGR_DMNGT; // ADC DMA transfer enable

    static constexpr uint32_t CFGR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR2_ROVSE = 0x1; // ADC oversampler enable on scope ADC group regular
    static constexpr uint32_t CFGR2_JOVSE = 0x2; // ADC oversampler enable on scope ADC group injected
    typedef bit_field_t<5, 0xf> CFGR2_OVSS; // ADC oversampling shift
    static constexpr uint32_t CFGR2_TROVS = 0x200; // ADC oversampling discontinuous mode (triggered mode) for ADC group regular
    static constexpr uint32_t CFGR2_ROVSM = 0x400; // Regular Oversampling mode
    static constexpr uint32_t CFGR2_RSHIFT1 = 0x800; // Right-shift data after Offset 1 correction
    static constexpr uint32_t CFGR2_RSHIFT2 = 0x1000; // Right-shift data after Offset 2 correction
    static constexpr uint32_t CFGR2_RSHIFT3 = 0x2000; // Right-shift data after Offset 3 correction
    static constexpr uint32_t CFGR2_RSHIFT4 = 0x4000; // Right-shift data after Offset 4 correction
    typedef bit_field_t<16, 0x3ff> CFGR2_OSR; // Oversampling ratio
    typedef bit_field_t<28, 0xf> CFGR2_LSHIFT; // Left shift factor

    static constexpr uint32_t SMPR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<27, 0x7> SMPR1_SMP9; // ADC channel 9 sampling time selection
    typedef bit_field_t<24, 0x7> SMPR1_SMP8; // ADC channel 8 sampling time selection
    typedef bit_field_t<21, 0x7> SMPR1_SMP7; // ADC channel 7 sampling time selection
    typedef bit_field_t<18, 0x7> SMPR1_SMP6; // ADC channel 6 sampling time selection
    typedef bit_field_t<15, 0x7> SMPR1_SMP5; // ADC channel 5 sampling time selection
    typedef bit_field_t<12, 0x7> SMPR1_SMP4; // ADC channel 4 sampling time selection
    typedef bit_field_t<9, 0x7> SMPR1_SMP3; // ADC channel 3 sampling time selection
    typedef bit_field_t<6, 0x7> SMPR1_SMP2; // ADC channel 2 sampling time selection
    typedef bit_field_t<3, 0x7> SMPR1_SMP1; // ADC channel 1 sampling time selection

    static constexpr uint32_t SMPR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<27, 0x7> SMPR2_SMP19; // ADC channel 18 sampling time selection
    typedef bit_field_t<24, 0x7> SMPR2_SMP18; // ADC channel 18 sampling time selection
    typedef bit_field_t<21, 0x7> SMPR2_SMP17; // ADC channel 17 sampling time selection
    typedef bit_field_t<18, 0x7> SMPR2_SMP16; // ADC channel 16 sampling time selection
    typedef bit_field_t<15, 0x7> SMPR2_SMP15; // ADC channel 15 sampling time selection
    typedef bit_field_t<12, 0x7> SMPR2_SMP14; // ADC channel 14 sampling time selection
    typedef bit_field_t<9, 0x7> SMPR2_SMP13; // ADC channel 13 sampling time selection
    typedef bit_field_t<6, 0x7> SMPR2_SMP12; // ADC channel 12 sampling time selection
    typedef bit_field_t<3, 0x7> SMPR2_SMP11; // ADC channel 11 sampling time selection
    typedef bit_field_t<0, 0x7> SMPR2_SMP10; // ADC channel 10 sampling time selection

    static constexpr uint32_t PCSEL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfffff> PCSEL_PCSEL; // Channel x (VINP[i]) pre selection

    static constexpr uint32_t LTR1_RESET_VALUE = 0xfff0000; // Reset value
    typedef bit_field_t<0, 0x3ffffff> LTR1_LTR1; // ADC analog watchdog 1 threshold low

    static constexpr uint32_t LHTR1_RESET_VALUE = 0xfff0000; // Reset value
    typedef bit_field_t<0, 0x3ffffff> LHTR1_LHTR1; // ADC analog watchdog 2 threshold low


    static constexpr uint32_t SQR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> SQR1_SQ4; // ADC group regular sequencer rank 4
    typedef bit_field_t<18, 0x1f> SQR1_SQ3; // ADC group regular sequencer rank 3
    typedef bit_field_t<12, 0x1f> SQR1_SQ2; // ADC group regular sequencer rank 2
    typedef bit_field_t<6, 0x1f> SQR1_SQ1; // ADC group regular sequencer rank 1
    typedef bit_field_t<0, 0xf> SQR1_L3; // L3

    static constexpr uint32_t SQR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> SQR2_SQ9; // ADC group regular sequencer rank 9
    typedef bit_field_t<18, 0x1f> SQR2_SQ8; // ADC group regular sequencer rank 8
    typedef bit_field_t<12, 0x1f> SQR2_SQ7; // ADC group regular sequencer rank 7
    typedef bit_field_t<6, 0x1f> SQR2_SQ6; // ADC group regular sequencer rank 6
    typedef bit_field_t<0, 0x1f> SQR2_SQ5; // ADC group regular sequencer rank 5

    static constexpr uint32_t SQR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> SQR3_SQ14; // ADC group regular sequencer rank 14
    typedef bit_field_t<18, 0x1f> SQR3_SQ13; // ADC group regular sequencer rank 13
    typedef bit_field_t<12, 0x1f> SQR3_SQ12; // ADC group regular sequencer rank 12
    typedef bit_field_t<6, 0x1f> SQR3_SQ11; // ADC group regular sequencer rank 11
    typedef bit_field_t<0, 0x1f> SQR3_SQ10; // ADC group regular sequencer rank 10

    static constexpr uint32_t SQR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<6, 0x1f> SQR4_SQ16; // ADC group regular sequencer rank 16
    typedef bit_field_t<0, 0x1f> SQR4_SQ15; // ADC group regular sequencer rank 15

    static constexpr uint32_t DR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR_RDATA; // ADC group regular conversion data


    static constexpr uint32_t JSQR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<27, 0x1f> JSQR_JSQ4; // ADC group injected sequencer rank 4
    typedef bit_field_t<21, 0x1f> JSQR_JSQ3; // ADC group injected sequencer rank 3
    typedef bit_field_t<15, 0x1f> JSQR_JSQ2; // ADC group injected sequencer rank 2
    typedef bit_field_t<9, 0x1f> JSQR_JSQ1; // ADC group injected sequencer rank 1
    typedef bit_field_t<7, 0x3> JSQR_JEXTEN; // ADC group injected external trigger polarity
    typedef bit_field_t<2, 0x1f> JSQR_JEXTSEL; // ADC group injected external trigger source
    typedef bit_field_t<0, 0x3> JSQR_JL; // ADC group injected sequencer scan length


    static constexpr uint32_t OFR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OFR1_SSATE = 0x80000000; // ADC offset number 1 enable
    typedef bit_field_t<26, 0x1f> OFR1_OFFSET1_CH; // ADC offset number 1 channel selection
    typedef bit_field_t<0, 0x3ffffff> OFR1_OFFSET1; // ADC offset number 1 offset level

    static constexpr uint32_t OFR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OFR2_SSATE = 0x80000000; // ADC offset number 1 enable
    typedef bit_field_t<26, 0x1f> OFR2_OFFSET1_CH; // ADC offset number 1 channel selection
    typedef bit_field_t<0, 0x3ffffff> OFR2_OFFSET1; // ADC offset number 1 offset level

    static constexpr uint32_t OFR3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OFR3_SSATE = 0x80000000; // ADC offset number 1 enable
    typedef bit_field_t<26, 0x1f> OFR3_OFFSET1_CH; // ADC offset number 1 channel selection
    typedef bit_field_t<0, 0x3ffffff> OFR3_OFFSET1; // ADC offset number 1 offset level

    static constexpr uint32_t OFR4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OFR4_SSATE = 0x80000000; // ADC offset number 1 enable
    typedef bit_field_t<26, 0x1f> OFR4_OFFSET1_CH; // ADC offset number 1 channel selection
    typedef bit_field_t<0, 0x3ffffff> OFR4_OFFSET1; // ADC offset number 1 offset level


    static constexpr uint32_t JDR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> JDR1_JDATA1; // ADC group injected sequencer rank 1 conversion data

    static constexpr uint32_t JDR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> JDR2_JDATA2; // ADC group injected sequencer rank 2 conversion data

    static constexpr uint32_t JDR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> JDR3_JDATA3; // ADC group injected sequencer rank 3 conversion data

    static constexpr uint32_t JDR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> JDR4_JDATA4; // ADC group injected sequencer rank 4 conversion data


    static constexpr uint32_t AWD2CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfffff> AWD2CR_AWD2CH; // ADC analog watchdog 2 monitored channel selection

    static constexpr uint32_t AWD3CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<1, 0xfffff> AWD3CR_AWD3CH; // ADC analog watchdog 3 monitored channel selection


    static constexpr uint32_t LTR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffffff> LTR2_LTR2; // Analog watchdog 2 lower threshold

    static constexpr uint32_t HTR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffffff> HTR2_HTR2; // Analog watchdog 2 higher threshold

    static constexpr uint32_t LTR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffffff> LTR3_LTR3; // Analog watchdog 3 lower threshold

    static constexpr uint32_t HTR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffffff> HTR3_HTR3; // Analog watchdog 3 higher threshold

    static constexpr uint32_t DIFSEL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfffff> DIFSEL_DIFSEL; // ADC channel differential or single-ended mode for channel

    static constexpr uint32_t CALFACT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0x7ff> CALFACT_CALFACT_D; // ADC calibration factor in differential mode
    typedef bit_field_t<0, 0x7ff> CALFACT_CALFACT_S; // ADC calibration factor in single-ended mode

    static constexpr uint32_t CALFACT2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3fffffff> CALFACT2_LINCALFACT; // Linearity Calibration Factor
};

// ADC3: Analog to Digital Converter

struct stm32h750x_adc3_t
{
    volatile uint32_t ISR; // ADC interrupt and status register
    volatile uint32_t IER; // ADC interrupt enable register
    volatile uint32_t CR; // ADC control register
    volatile uint32_t CFGR; // ADC configuration register 1
    volatile uint32_t CFGR2; // ADC configuration register 2
    volatile uint32_t SMPR1; // ADC sampling time register 1
    volatile uint32_t SMPR2; // ADC sampling time register 2
    volatile uint32_t PCSEL; // ADC pre channel selection register
    volatile uint32_t LTR1; // ADC analog watchdog 1 threshold register
    volatile uint32_t LHTR1; // ADC analog watchdog 2 threshold register
    reserved_t<0x2> _0x28;
    volatile uint32_t SQR1; // ADC group regular sequencer ranks register 1
    volatile uint32_t SQR2; // ADC group regular sequencer ranks register 2
    volatile uint32_t SQR3; // ADC group regular sequencer ranks register 3
    volatile uint32_t SQR4; // ADC group regular sequencer ranks register 4
    volatile uint32_t DR; // ADC group regular conversion data register
    reserved_t<0x2> _0x44;
    volatile uint32_t JSQR; // ADC group injected sequencer register
    reserved_t<0x4> _0x50;
    volatile uint32_t OFR1; // ADC offset number 1 register
    volatile uint32_t OFR2; // ADC offset number 2 register
    volatile uint32_t OFR3; // ADC offset number 3 register
    volatile uint32_t OFR4; // ADC offset number 4 register
    reserved_t<0x4> _0x70;
    volatile uint32_t JDR1; // ADC group injected sequencer rank 1 register
    volatile uint32_t JDR2; // ADC group injected sequencer rank 2 register
    volatile uint32_t JDR3; // ADC group injected sequencer rank 3 register
    volatile uint32_t JDR4; // ADC group injected sequencer rank 4 register
    reserved_t<0x4> _0x90;
    volatile uint32_t AWD2CR; // ADC analog watchdog 2 configuration register
    volatile uint32_t AWD3CR; // ADC analog watchdog 3 configuration register
    reserved_t<0x2> _0xa8;
    volatile uint32_t LTR2; // ADC watchdog lower threshold register 2
    volatile uint32_t HTR2; // ADC watchdog higher threshold register 2
    volatile uint32_t LTR3; // ADC watchdog lower threshold register 3
    volatile uint32_t HTR3; // ADC watchdog higher threshold register 3
    volatile uint32_t DIFSEL; // ADC channel differential or single-ended mode selection register
    volatile uint32_t CALFACT; // ADC calibration factors register
    volatile uint32_t CALFACT2; // ADC Calibration Factor register 2

    static constexpr uint32_t ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ISR_JQOVF = 0x400; // ADC group injected contexts queue overflow flag
    static constexpr uint32_t ISR_AWD3 = 0x200; // ADC analog watchdog 3 flag
    static constexpr uint32_t ISR_AWD2 = 0x100; // ADC analog watchdog 2 flag
    static constexpr uint32_t ISR_AWD1 = 0x80; // ADC analog watchdog 1 flag
    static constexpr uint32_t ISR_JEOS = 0x40; // ADC group injected end of sequence conversions flag
    static constexpr uint32_t ISR_JEOC = 0x20; // ADC group injected end of unitary conversion flag
    static constexpr uint32_t ISR_OVR = 0x10; // ADC group regular overrun flag
    static constexpr uint32_t ISR_EOS = 0x8; // ADC group regular end of sequence conversions flag
    static constexpr uint32_t ISR_EOC = 0x4; // ADC group regular end of unitary conversion flag
    static constexpr uint32_t ISR_EOSMP = 0x2; // ADC group regular end of sampling flag
    static constexpr uint32_t ISR_ADRDY = 0x1; // ADC ready flag

    static constexpr uint32_t IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IER_JQOVFIE = 0x400; // ADC group injected contexts queue overflow interrupt
    static constexpr uint32_t IER_AWD3IE = 0x200; // ADC analog watchdog 3 interrupt
    static constexpr uint32_t IER_AWD2IE = 0x100; // ADC analog watchdog 2 interrupt
    static constexpr uint32_t IER_AWD1IE = 0x80; // ADC analog watchdog 1 interrupt
    static constexpr uint32_t IER_JEOSIE = 0x40; // ADC group injected end of sequence conversions interrupt
    static constexpr uint32_t IER_JEOCIE = 0x20; // ADC group injected end of unitary conversion interrupt
    static constexpr uint32_t IER_OVRIE = 0x10; // ADC group regular overrun interrupt
    static constexpr uint32_t IER_EOSIE = 0x8; // ADC group regular end of sequence conversions interrupt
    static constexpr uint32_t IER_EOCIE = 0x4; // ADC group regular end of unitary conversion interrupt
    static constexpr uint32_t IER_EOSMPIE = 0x2; // ADC group regular end of sampling interrupt
    static constexpr uint32_t IER_ADRDYIE = 0x1; // ADC ready interrupt

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_ADCAL = 0x80000000; // ADC calibration
    static constexpr uint32_t CR_ADCALDIF = 0x40000000; // ADC differential mode for calibration
    static constexpr uint32_t CR_ADCALLIN = 0x10000; // Linearity calibration
    static constexpr uint32_t CR_ADDIS = 0x2; // ADC disable
    static constexpr uint32_t CR_ADEN = 0x1; // ADC enable
    static constexpr uint32_t CR_ADSTART = 0x4; // ADC group regular conversion start
    static constexpr uint32_t CR_ADSTP = 0x10; // ADC group regular conversion stop
    static constexpr uint32_t CR_ADVREGEN = 0x10000000; // ADC voltage regulator enable
    static constexpr uint32_t CR_BOOST = 0x100; // Boost mode control
    typedef bit_field_t<16, 0x3> CR_CKMODE; // ADC clock mode
    static constexpr uint32_t CR_DEEPPWD = 0x20000000; // ADC deep power down enable
    static constexpr uint32_t CR_JADSTART = 0x8; // ADC group injected conversion start
    static constexpr uint32_t CR_JADSTP = 0x20; // ADC group injected conversion stop
    static constexpr uint32_t CR_LINCALRDYW1 = 0x400000; // Linearity calibration ready Word 1
    static constexpr uint32_t CR_LINCALRDYW2 = 0x800000; // Linearity calibration ready Word 2
    static constexpr uint32_t CR_LINCALRDYW3 = 0x1000000; // Linearity calibration ready Word 3
    static constexpr uint32_t CR_LINCALRDYW4 = 0x2000000; // Linearity calibration ready Word 4
    static constexpr uint32_t CR_LINCALRDYW5 = 0x4000000; // Linearity calibration ready Word 5
    static constexpr uint32_t CR_LINCALRDYW6 = 0x8000000; // Linearity calibration ready Word 6
    typedef bit_field_t<18, 0xf> CR_PRESC; // ADC prescaler
    static constexpr uint32_t CR_VBATEN = 0x1000000; // VBAT enable
    static constexpr uint32_t CR_VREFEN = 0x400000; // VREFINT enable
    static constexpr uint32_t CR_VSENSEEN = 0x800000; // Temperature sensor enable

    static constexpr uint32_t CFGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR_JQDIS = 0x80000000; // ADC group injected contexts queue disable
    typedef bit_field_t<26, 0x1f> CFGR_AWDCH1CH; // ADC analog watchdog 1 monitored channel selection
    static constexpr uint32_t CFGR_JAUTO = 0x2000000; // ADC group injected automatic trigger mode
    static constexpr uint32_t CFGR_JAWD1EN = 0x1000000; // ADC analog watchdog 1 enable on scope ADC group injected
    static constexpr uint32_t CFGR_AWD1EN = 0x800000; // ADC analog watchdog 1 enable on scope ADC group regular
    static constexpr uint32_t CFGR_AWD1SGL = 0x400000; // ADC analog watchdog 1 monitoring a single channel or all channels
    static constexpr uint32_t CFGR_JQM = 0x200000; // ADC group injected contexts queue mode
    static constexpr uint32_t CFGR_JDISCEN = 0x100000; // ADC group injected sequencer discontinuous mode
    typedef bit_field_t<17, 0x7> CFGR_DISCNUM; // ADC group regular sequencer discontinuous number of ranks
    static constexpr uint32_t CFGR_DISCEN = 0x10000; // ADC group regular sequencer discontinuous mode
    static constexpr uint32_t CFGR_AUTDLY = 0x4000; // ADC low power auto wait
    static constexpr uint32_t CFGR_CONT = 0x2000; // ADC group regular continuous conversion mode
    static constexpr uint32_t CFGR_OVRMOD = 0x1000; // ADC group regular overrun configuration
    typedef bit_field_t<10, 0x3> CFGR_EXTEN; // ADC group regular external trigger polarity
    typedef bit_field_t<5, 0x1f> CFGR_EXTSEL; // ADC group regular external trigger source
    typedef bit_field_t<2, 0x3> CFGR_RES; // ADC data resolution
    typedef bit_field_t<0, 0x3> CFGR_DMNGT; // ADC DMA transfer enable

    static constexpr uint32_t CFGR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR2_ROVSE = 0x1; // ADC oversampler enable on scope ADC group regular
    static constexpr uint32_t CFGR2_JOVSE = 0x2; // ADC oversampler enable on scope ADC group injected
    typedef bit_field_t<5, 0xf> CFGR2_OVSS; // ADC oversampling shift
    static constexpr uint32_t CFGR2_TROVS = 0x200; // ADC oversampling discontinuous mode (triggered mode) for ADC group regular
    static constexpr uint32_t CFGR2_ROVSM = 0x400; // Regular Oversampling mode
    static constexpr uint32_t CFGR2_RSHIFT1 = 0x800; // Right-shift data after Offset 1 correction
    static constexpr uint32_t CFGR2_RSHIFT2 = 0x1000; // Right-shift data after Offset 2 correction
    static constexpr uint32_t CFGR2_RSHIFT3 = 0x2000; // Right-shift data after Offset 3 correction
    static constexpr uint32_t CFGR2_RSHIFT4 = 0x4000; // Right-shift data after Offset 4 correction
    typedef bit_field_t<16, 0x3ff> CFGR2_OSR; // Oversampling ratio
    typedef bit_field_t<28, 0xf> CFGR2_LSHIFT; // Left shift factor

    static constexpr uint32_t SMPR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<27, 0x7> SMPR1_SMP9; // ADC channel 9 sampling time selection
    typedef bit_field_t<24, 0x7> SMPR1_SMP8; // ADC channel 8 sampling time selection
    typedef bit_field_t<21, 0x7> SMPR1_SMP7; // ADC channel 7 sampling time selection
    typedef bit_field_t<18, 0x7> SMPR1_SMP6; // ADC channel 6 sampling time selection
    typedef bit_field_t<15, 0x7> SMPR1_SMP5; // ADC channel 5 sampling time selection
    typedef bit_field_t<12, 0x7> SMPR1_SMP4; // ADC channel 4 sampling time selection
    typedef bit_field_t<9, 0x7> SMPR1_SMP3; // ADC channel 3 sampling time selection
    typedef bit_field_t<6, 0x7> SMPR1_SMP2; // ADC channel 2 sampling time selection
    typedef bit_field_t<3, 0x7> SMPR1_SMP1; // ADC channel 1 sampling time selection

    static constexpr uint32_t SMPR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<27, 0x7> SMPR2_SMP19; // ADC channel 18 sampling time selection
    typedef bit_field_t<24, 0x7> SMPR2_SMP18; // ADC channel 18 sampling time selection
    typedef bit_field_t<21, 0x7> SMPR2_SMP17; // ADC channel 17 sampling time selection
    typedef bit_field_t<18, 0x7> SMPR2_SMP16; // ADC channel 16 sampling time selection
    typedef bit_field_t<15, 0x7> SMPR2_SMP15; // ADC channel 15 sampling time selection
    typedef bit_field_t<12, 0x7> SMPR2_SMP14; // ADC channel 14 sampling time selection
    typedef bit_field_t<9, 0x7> SMPR2_SMP13; // ADC channel 13 sampling time selection
    typedef bit_field_t<6, 0x7> SMPR2_SMP12; // ADC channel 12 sampling time selection
    typedef bit_field_t<3, 0x7> SMPR2_SMP11; // ADC channel 11 sampling time selection
    typedef bit_field_t<0, 0x7> SMPR2_SMP10; // ADC channel 10 sampling time selection

    static constexpr uint32_t PCSEL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfffff> PCSEL_PCSEL; // Channel x (VINP[i]) pre selection

    static constexpr uint32_t LTR1_RESET_VALUE = 0xfff0000; // Reset value
    typedef bit_field_t<0, 0x3ffffff> LTR1_LTR1; // ADC analog watchdog 1 threshold low

    static constexpr uint32_t LHTR1_RESET_VALUE = 0xfff0000; // Reset value
    typedef bit_field_t<0, 0x3ffffff> LHTR1_LHTR1; // ADC analog watchdog 2 threshold low


    static constexpr uint32_t SQR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> SQR1_SQ4; // ADC group regular sequencer rank 4
    typedef bit_field_t<18, 0x1f> SQR1_SQ3; // ADC group regular sequencer rank 3
    typedef bit_field_t<12, 0x1f> SQR1_SQ2; // ADC group regular sequencer rank 2
    typedef bit_field_t<6, 0x1f> SQR1_SQ1; // ADC group regular sequencer rank 1
    typedef bit_field_t<0, 0xf> SQR1_L3; // L3

    static constexpr uint32_t SQR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> SQR2_SQ9; // ADC group regular sequencer rank 9
    typedef bit_field_t<18, 0x1f> SQR2_SQ8; // ADC group regular sequencer rank 8
    typedef bit_field_t<12, 0x1f> SQR2_SQ7; // ADC group regular sequencer rank 7
    typedef bit_field_t<6, 0x1f> SQR2_SQ6; // ADC group regular sequencer rank 6
    typedef bit_field_t<0, 0x1f> SQR2_SQ5; // ADC group regular sequencer rank 5

    static constexpr uint32_t SQR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> SQR3_SQ14; // ADC group regular sequencer rank 14
    typedef bit_field_t<18, 0x1f> SQR3_SQ13; // ADC group regular sequencer rank 13
    typedef bit_field_t<12, 0x1f> SQR3_SQ12; // ADC group regular sequencer rank 12
    typedef bit_field_t<6, 0x1f> SQR3_SQ11; // ADC group regular sequencer rank 11
    typedef bit_field_t<0, 0x1f> SQR3_SQ10; // ADC group regular sequencer rank 10

    static constexpr uint32_t SQR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<6, 0x1f> SQR4_SQ16; // ADC group regular sequencer rank 16
    typedef bit_field_t<0, 0x1f> SQR4_SQ15; // ADC group regular sequencer rank 15

    static constexpr uint32_t DR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DR_RDATA; // ADC group regular conversion data


    static constexpr uint32_t JSQR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<27, 0x1f> JSQR_JSQ4; // ADC group injected sequencer rank 4
    typedef bit_field_t<21, 0x1f> JSQR_JSQ3; // ADC group injected sequencer rank 3
    typedef bit_field_t<15, 0x1f> JSQR_JSQ2; // ADC group injected sequencer rank 2
    typedef bit_field_t<9, 0x1f> JSQR_JSQ1; // ADC group injected sequencer rank 1
    typedef bit_field_t<7, 0x3> JSQR_JEXTEN; // ADC group injected external trigger polarity
    typedef bit_field_t<2, 0x1f> JSQR_JEXTSEL; // ADC group injected external trigger source
    typedef bit_field_t<0, 0x3> JSQR_JL; // ADC group injected sequencer scan length


    static constexpr uint32_t OFR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OFR1_SSATE = 0x80000000; // ADC offset number 1 enable
    typedef bit_field_t<26, 0x1f> OFR1_OFFSET1_CH; // ADC offset number 1 channel selection
    typedef bit_field_t<0, 0x3ffffff> OFR1_OFFSET1; // ADC offset number 1 offset level

    static constexpr uint32_t OFR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OFR2_SSATE = 0x80000000; // ADC offset number 1 enable
    typedef bit_field_t<26, 0x1f> OFR2_OFFSET1_CH; // ADC offset number 1 channel selection
    typedef bit_field_t<0, 0x3ffffff> OFR2_OFFSET1; // ADC offset number 1 offset level

    static constexpr uint32_t OFR3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OFR3_SSATE = 0x80000000; // ADC offset number 1 enable
    typedef bit_field_t<26, 0x1f> OFR3_OFFSET1_CH; // ADC offset number 1 channel selection
    typedef bit_field_t<0, 0x3ffffff> OFR3_OFFSET1; // ADC offset number 1 offset level

    static constexpr uint32_t OFR4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OFR4_SSATE = 0x80000000; // ADC offset number 1 enable
    typedef bit_field_t<26, 0x1f> OFR4_OFFSET1_CH; // ADC offset number 1 channel selection
    typedef bit_field_t<0, 0x3ffffff> OFR4_OFFSET1; // ADC offset number 1 offset level


    static constexpr uint32_t JDR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> JDR1_JDATA1; // ADC group injected sequencer rank 1 conversion data

    static constexpr uint32_t JDR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> JDR2_JDATA2; // ADC group injected sequencer rank 2 conversion data

    static constexpr uint32_t JDR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> JDR3_JDATA3; // ADC group injected sequencer rank 3 conversion data

    static constexpr uint32_t JDR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> JDR4_JDATA4; // ADC group injected sequencer rank 4 conversion data


    static constexpr uint32_t AWD2CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfffff> AWD2CR_AWD2CH; // ADC analog watchdog 2 monitored channel selection

    static constexpr uint32_t AWD3CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<1, 0xfffff> AWD3CR_AWD3CH; // ADC analog watchdog 3 monitored channel selection


    static constexpr uint32_t LTR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffffff> LTR2_LTR2; // Analog watchdog 2 lower threshold

    static constexpr uint32_t HTR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffffff> HTR2_HTR2; // Analog watchdog 2 higher threshold

    static constexpr uint32_t LTR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffffff> LTR3_LTR3; // Analog watchdog 3 lower threshold

    static constexpr uint32_t HTR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ffffff> HTR3_HTR3; // Analog watchdog 3 higher threshold

    static constexpr uint32_t DIFSEL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfffff> DIFSEL_DIFSEL; // ADC channel differential or single-ended mode for channel

    static constexpr uint32_t CALFACT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0x7ff> CALFACT_CALFACT_D; // ADC calibration factor in differential mode
    typedef bit_field_t<0, 0x7ff> CALFACT_CALFACT_S; // ADC calibration factor in single-ended mode

    static constexpr uint32_t CALFACT2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3fffffff> CALFACT2_LINCALFACT; // Linearity Calibration Factor
};

// ADC12_COMMON: Analog-to-Digital Converter

struct stm32h723_adc12_common_t
{
    volatile uint32_t CSR; // ADC Common status register
    reserved_t<0x1> _0x4;
    volatile uint32_t CCR; // ADC common control register
    volatile uint32_t CDR; // ADC common regular data register for dual and triple modes
    volatile uint32_t CDR2; // ADC x common regular data register for 32-bit dual mode

    static constexpr uint32_t CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CSR_ADRDY_MST = 0x1; // Master ADC ready
    static constexpr uint32_t CSR_EOSMP_MST = 0x2; // End of Sampling phase flag of the master ADC
    static constexpr uint32_t CSR_EOC_MST = 0x4; // End of regular conversion of the master ADC
    static constexpr uint32_t CSR_EOS_MST = 0x8; // End of regular sequence flag of the master ADC
    static constexpr uint32_t CSR_OVR_MST = 0x10; // Overrun flag of the master ADC
    static constexpr uint32_t CSR_JEOC_MST = 0x20; // End of injected conversion flag of the master ADC
    static constexpr uint32_t CSR_JEOS_MST = 0x40; // End of injected sequence flag of the master ADC
    static constexpr uint32_t CSR_AWD1_MST = 0x80; // Analog watchdog 1 flag of the master ADC
    static constexpr uint32_t CSR_AWD2_MST = 0x100; // Analog watchdog 2 flag of the master ADC
    static constexpr uint32_t CSR_AWD3_MST = 0x200; // Analog watchdog 3 flag of the master ADC
    static constexpr uint32_t CSR_JQOVF_MST = 0x400; // Injected Context Queue Overflow flag of the master ADC
    static constexpr uint32_t CSR_ADRDY_SLV = 0x10000; // Slave ADC ready
    static constexpr uint32_t CSR_EOSMP_SLV = 0x20000; // End of Sampling phase flag of the slave ADC
    static constexpr uint32_t CSR_EOC_SLV = 0x40000; // End of regular conversion of the slave ADC
    static constexpr uint32_t CSR_EOS_SLV = 0x80000; // End of regular sequence flag of the slave ADC
    static constexpr uint32_t CSR_OVR_SLV = 0x100000; // Overrun flag of the slave ADC
    static constexpr uint32_t CSR_JEOC_SLV = 0x200000; // End of injected conversion flag of the slave ADC
    static constexpr uint32_t CSR_JEOS_SLV = 0x400000; // End of injected sequence flag of the slave ADC
    static constexpr uint32_t CSR_AWD1_SLV = 0x800000; // Analog watchdog 1 flag of the slave ADC
    static constexpr uint32_t CSR_AWD2_SLV = 0x1000000; // Analog watchdog 2 flag of the slave ADC
    static constexpr uint32_t CSR_AWD3_SLV = 0x2000000; // Analog watchdog 3 flag of the slave ADC
    static constexpr uint32_t CSR_JQOVF_SLV = 0x4000000; // Injected Context Queue Overflow flag of the slave ADC


    static constexpr uint32_t CCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> CCR_DUAL; // Dual ADC mode selection
    typedef bit_field_t<8, 0xf> CCR_DELAY; // Delay between 2 sampling phases
    typedef bit_field_t<14, 0x3> CCR_DAMDF; // Dual ADC Mode Data Format
    typedef bit_field_t<16, 0x3> CCR_CKMODE; // ADC clock mode
    typedef bit_field_t<18, 0xf> CCR_PRESC; // ADC prescaler
    static constexpr uint32_t CCR_VREFEN = 0x400000; // VREFINT enable
    static constexpr uint32_t CCR_VSENSEEN = 0x800000; // Temperature sensor enable
    static constexpr uint32_t CCR_VBATEN = 0x1000000; // VBAT enable

    static constexpr uint32_t CDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> CDR_RDATA_SLV; // Regular data of the slave ADC
    typedef bit_field_t<0, 0xffff> CDR_RDATA_MST; // Regular data of the master ADC

    static constexpr uint32_t CDR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CDR2_RDATA_ALT; // Regular data of the master/slave alternated ADCs
};

// ADC3_COMMON: Analog-to-Digital Converter

struct stm32h723_adc3_common_t
{
    volatile uint32_t ADC_CSR; // ADC common status register
    reserved_t<0x1> _0x4;
    volatile uint32_t ADC_CCR; // ADC common control register

    static constexpr uint32_t ADC_CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ADC_CSR_ADRDY_MST = 0x1; // Master ADC ready This bit is a copy of the ADRDY bit in the corresponding ADC_ISR register.
    static constexpr uint32_t ADC_CSR_EOSMP_MST = 0x2; // End of Sampling phase flag of the master ADC This bit is a copy of the EOSMP bit in the corresponding ADC_ISR register.
    static constexpr uint32_t ADC_CSR_EOC_MST = 0x4; // End of regular conversion of the master ADC This bit is a copy of the EOC bit in the corresponding ADC_ISR register.
    static constexpr uint32_t ADC_CSR_EOS_MST = 0x8; // End of regular sequence flag of the master ADC This bit is a copy of the EOS bit in the corresponding ADC_ISR register.
    static constexpr uint32_t ADC_CSR_OVR_MST = 0x10; // Overrun flag of the master ADC This bit is a copy of the OVR bit in the corresponding ADC_ISR register.
    static constexpr uint32_t ADC_CSR_JEOC_MST = 0x20; // End of injected conversion flag of the master ADC This bit is a copy of the JEOC bit in the corresponding ADC_ISR register.
    static constexpr uint32_t ADC_CSR_JEOS_MST = 0x40; // End of injected sequence flag of the master ADC This bit is a copy of the JEOS bit in the corresponding ADC_ISR register.
    static constexpr uint32_t ADC_CSR_AWD1_MST = 0x80; // Analog watchdog 1 flag of the master ADC This bit is a copy of the AWD1 bit in the corresponding ADC_ISR register.
    static constexpr uint32_t ADC_CSR_AWD2_MST = 0x100; // Analog watchdog 2 flag of the master ADC This bit is a copy of the AWD2 bit in the corresponding ADC_ISR register.
    static constexpr uint32_t ADC_CSR_AWD3_MST = 0x200; // Analog watchdog 3 flag of the master ADC This bit is a copy of the AWD3 bit in the corresponding ADC_ISR register.
    static constexpr uint32_t ADC_CSR_JQOVF_MST = 0x400; // Injected Context Queue Overflow flag of the master ADC This bit is a copy of the JQOVF bit in the corresponding ADC_ISR register.


    static constexpr uint32_t ADC_CCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0x3> ADC_CCR_CKMODE; // ADC clock mode These bits are set and cleared by software to define the ADC clock scheme (which is common to both master and slave ADCs): In all synchronous clock modes, there is no jitter in the delay from a timer trigger to the start of a conversion. Note: The software is allowed to write these bits only when the ADCs are disabled (ADCAL = 0, JADSTART = 0, ADSTART = 0, ADSTP = 0, ADDIS = 0 and ADEN = 0).
    typedef bit_field_t<18, 0xf> ADC_CCR_PRESC; // ADC prescaler These bits are set and cleared by software to select the frequency of the clock to the ADC. The clock is common for all the ADCs. other: reserved Note: The software is allowed to write these bits only when the ADC is disabled (ADCAL = 0, JADSTART = 0, ADSTART = 0, ADSTP = 0, ADDIS = 0 and ADEN = 0). The ADC prescaler value is applied only when CKMODE[1:0] = 0b00.
    static constexpr uint32_t ADC_CCR_VREFEN = 0x400000; // VREFINT enable This bit is set and cleared by software to enable/disable the VREFINT channel.
    static constexpr uint32_t ADC_CCR_TSEN = 0x800000; // VSENSE enable This bit is set and cleared by software to control VSENSE.
    static constexpr uint32_t ADC_CCR_VBATEN = 0x1000000; // VBAT enable This bit is set and cleared by software to control.
};

// ADC3_COMMON: Analog-to-Digital Converter

struct stm32h750x_adc3_common_t
{
    volatile uint32_t CSR; // ADC Common status register
    reserved_t<0x1> _0x4;
    volatile uint32_t CCR; // ADC common control register
    volatile uint32_t CDR; // ADC common regular data register for dual and triple modes

    static constexpr uint32_t CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CSR_ADRDY_MST = 0x1; // Master ADC ready
    static constexpr uint32_t CSR_EOSMP_MST = 0x2; // End of Sampling phase flag of the master ADC
    static constexpr uint32_t CSR_EOC_MST = 0x4; // End of regular conversion of the master ADC
    static constexpr uint32_t CSR_EOS_MST = 0x8; // End of regular sequence flag of the master ADC
    static constexpr uint32_t CSR_OVR_MST = 0x10; // Overrun flag of the master ADC
    static constexpr uint32_t CSR_JEOC_MST = 0x20; // End of injected conversion flag of the master ADC
    static constexpr uint32_t CSR_JEOS_MST = 0x40; // End of injected sequence flag of the master ADC
    static constexpr uint32_t CSR_AWD1_MST = 0x80; // Analog watchdog 1 flag of the master ADC
    static constexpr uint32_t CSR_AWD2_MST = 0x100; // Analog watchdog 2 flag of the master ADC
    static constexpr uint32_t CSR_AWD3_MST = 0x200; // Analog watchdog 3 flag of the master ADC
    static constexpr uint32_t CSR_JQOVF_MST = 0x400; // Injected Context Queue Overflow flag of the master ADC
    static constexpr uint32_t CSR_ADRDY_SLV = 0x10000; // Slave ADC ready
    static constexpr uint32_t CSR_EOSMP_SLV = 0x20000; // End of Sampling phase flag of the slave ADC
    static constexpr uint32_t CSR_EOC_SLV = 0x40000; // End of regular conversion of the slave ADC
    static constexpr uint32_t CSR_EOS_SLV = 0x80000; // End of regular sequence flag of the slave ADC
    static constexpr uint32_t CSR_OVR_SLV = 0x100000; // Overrun flag of the slave ADC
    static constexpr uint32_t CSR_JEOC_SLV = 0x200000; // End of injected conversion flag of the slave ADC
    static constexpr uint32_t CSR_JEOS_SLV = 0x400000; // End of injected sequence flag of the slave ADC
    static constexpr uint32_t CSR_AWD1_SLV = 0x800000; // Analog watchdog 1 flag of the slave ADC
    static constexpr uint32_t CSR_AWD2_SLV = 0x1000000; // Analog watchdog 2 flag of the slave ADC
    static constexpr uint32_t CSR_AWD3_SLV = 0x2000000; // Analog watchdog 3 flag of the slave ADC
    static constexpr uint32_t CSR_JQOVF_SLV = 0x4000000; // Injected Context Queue Overflow flag of the slave ADC


    static constexpr uint32_t CCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> CCR_DUAL; // Dual ADC mode selection
    typedef bit_field_t<8, 0xf> CCR_DELAY; // Delay between 2 sampling phases
    typedef bit_field_t<14, 0x3> CCR_DAMDF; // Dual ADC Mode Data Format
    typedef bit_field_t<16, 0x3> CCR_CKMODE; // ADC clock mode
    typedef bit_field_t<18, 0xf> CCR_PRESC; // ADC prescaler
    static constexpr uint32_t CCR_VREFEN = 0x400000; // VREFINT enable
    static constexpr uint32_t CCR_VSENSEEN = 0x800000; // Temperature sensor enable
    static constexpr uint32_t CCR_VBATEN = 0x1000000; // VBAT enable

    static constexpr uint32_t CDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> CDR_RDATA_SLV; // Regular data of the slave ADC
    typedef bit_field_t<0, 0xffff> CDR_RDATA_MST; // Regular data of the master ADC
};

template<>
struct peripheral_t<STM32H723, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32h723_adc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H723, ADC2>
{
    static constexpr periph_t P = ADC2;
    using T = stm32h723_adc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H725, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32h723_adc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H725, ADC2>
{
    static constexpr periph_t P = ADC2;
    using T = stm32h723_adc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H73x, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32h723_adc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H73x, ADC2>
{
    static constexpr periph_t P = ADC2;
    using T = stm32h723_adc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32h7a3x_adc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32h7a3x_adc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32h7a3x_adc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, ADC2>
{
    static constexpr periph_t P = ADC2;
    using T = stm32h7a3x_adc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, ADC2>
{
    static constexpr periph_t P = ADC2;
    using T = stm32h7a3x_adc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, ADC2>
{
    static constexpr periph_t P = ADC2;
    using T = stm32h7a3x_adc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H723, ADC3>
{
    static constexpr periph_t P = ADC3;
    using T = stm32h723_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H725, ADC3>
{
    static constexpr periph_t P = ADC3;
    using T = stm32h723_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H73x, ADC3>
{
    static constexpr periph_t P = ADC3;
    using T = stm32h723_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32h742x_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, ADC2>
{
    static constexpr periph_t P = ADC2;
    using T = stm32h742x_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, ADC3>
{
    static constexpr periph_t P = ADC3;
    using T = stm32h742x_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32h742x_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, ADC2>
{
    static constexpr periph_t P = ADC2;
    using T = stm32h742x_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, ADC3>
{
    static constexpr periph_t P = ADC3;
    using T = stm32h742x_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32h742x_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, ADC2>
{
    static constexpr periph_t P = ADC2;
    using T = stm32h742x_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, ADC3>
{
    static constexpr periph_t P = ADC3;
    using T = stm32h742x_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32h745_cm4_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, ADC2>
{
    static constexpr periph_t P = ADC2;
    using T = stm32h745_cm4_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, ADC3>
{
    static constexpr periph_t P = ADC3;
    using T = stm32h745_cm4_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32h745_cm4_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, ADC2>
{
    static constexpr periph_t P = ADC2;
    using T = stm32h745_cm4_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, ADC3>
{
    static constexpr periph_t P = ADC3;
    using T = stm32h745_cm4_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32h745_cm4_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, ADC2>
{
    static constexpr periph_t P = ADC2;
    using T = stm32h745_cm4_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, ADC3>
{
    static constexpr periph_t P = ADC3;
    using T = stm32h745_cm4_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32h745_cm4_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, ADC2>
{
    static constexpr periph_t P = ADC2;
    using T = stm32h745_cm4_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, ADC3>
{
    static constexpr periph_t P = ADC3;
    using T = stm32h745_cm4_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32h745_cm4_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, ADC2>
{
    static constexpr periph_t P = ADC2;
    using T = stm32h745_cm4_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, ADC3>
{
    static constexpr periph_t P = ADC3;
    using T = stm32h745_cm4_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32h745_cm4_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, ADC2>
{
    static constexpr periph_t P = ADC2;
    using T = stm32h745_cm4_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, ADC3>
{
    static constexpr periph_t P = ADC3;
    using T = stm32h745_cm4_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32h745_cm4_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, ADC2>
{
    static constexpr periph_t P = ADC2;
    using T = stm32h745_cm4_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, ADC3>
{
    static constexpr periph_t P = ADC3;
    using T = stm32h745_cm4_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32h745_cm4_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, ADC2>
{
    static constexpr periph_t P = ADC2;
    using T = stm32h745_cm4_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, ADC3>
{
    static constexpr periph_t P = ADC3;
    using T = stm32h745_cm4_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, ADC1>
{
    static constexpr periph_t P = ADC1;
    using T = stm32h750x_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, ADC2>
{
    static constexpr periph_t P = ADC2;
    using T = stm32h750x_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, ADC3>
{
    static constexpr periph_t P = ADC3;
    using T = stm32h750x_adc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H723, ADC12_COMMON>
{
    static constexpr periph_t P = ADC12_COMMON;
    using T = stm32h723_adc12_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H725, ADC12_COMMON>
{
    static constexpr periph_t P = ADC12_COMMON;
    using T = stm32h723_adc12_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H73x, ADC12_COMMON>
{
    static constexpr periph_t P = ADC12_COMMON;
    using T = stm32h723_adc12_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, ADC12_COMMON>
{
    static constexpr periph_t P = ADC12_COMMON;
    using T = stm32h723_adc12_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, ADC3_COMMON>
{
    static constexpr periph_t P = ADC3_COMMON;
    using T = stm32h723_adc12_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, ADC12_COMMON>
{
    static constexpr periph_t P = ADC12_COMMON;
    using T = stm32h723_adc12_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, ADC3_COMMON>
{
    static constexpr periph_t P = ADC3_COMMON;
    using T = stm32h723_adc12_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, ADC12_COMMON>
{
    static constexpr periph_t P = ADC12_COMMON;
    using T = stm32h723_adc12_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, ADC3_COMMON>
{
    static constexpr periph_t P = ADC3_COMMON;
    using T = stm32h723_adc12_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, ADC12_COMMON>
{
    static constexpr periph_t P = ADC12_COMMON;
    using T = stm32h723_adc12_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, ADC3_COMMON>
{
    static constexpr periph_t P = ADC3_COMMON;
    using T = stm32h723_adc12_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, ADC12_COMMON>
{
    static constexpr periph_t P = ADC12_COMMON;
    using T = stm32h723_adc12_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, ADC3_COMMON>
{
    static constexpr periph_t P = ADC3_COMMON;
    using T = stm32h723_adc12_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, ADC12_COMMON>
{
    static constexpr periph_t P = ADC12_COMMON;
    using T = stm32h723_adc12_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, ADC3_COMMON>
{
    static constexpr periph_t P = ADC3_COMMON;
    using T = stm32h723_adc12_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, ADC12_COMMON>
{
    static constexpr periph_t P = ADC12_COMMON;
    using T = stm32h723_adc12_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, ADC3_COMMON>
{
    static constexpr periph_t P = ADC3_COMMON;
    using T = stm32h723_adc12_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, ADC12_COMMON>
{
    static constexpr periph_t P = ADC12_COMMON;
    using T = stm32h723_adc12_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, ADC3_COMMON>
{
    static constexpr periph_t P = ADC3_COMMON;
    using T = stm32h723_adc12_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, ADC12_COMMON>
{
    static constexpr periph_t P = ADC12_COMMON;
    using T = stm32h723_adc12_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, ADC3_COMMON>
{
    static constexpr periph_t P = ADC3_COMMON;
    using T = stm32h723_adc12_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, ADC12_COMMON>
{
    static constexpr periph_t P = ADC12_COMMON;
    using T = stm32h723_adc12_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, ADC3_COMMON>
{
    static constexpr periph_t P = ADC3_COMMON;
    using T = stm32h723_adc12_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, ADC12_COMMON>
{
    static constexpr periph_t P = ADC12_COMMON;
    using T = stm32h723_adc12_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, ADC3_COMMON>
{
    static constexpr periph_t P = ADC3_COMMON;
    using T = stm32h723_adc12_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H723, ADC3_COMMON>
{
    static constexpr periph_t P = ADC3_COMMON;
    using T = stm32h723_adc3_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H725, ADC3_COMMON>
{
    static constexpr periph_t P = ADC3_COMMON;
    using T = stm32h723_adc3_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H73x, ADC3_COMMON>
{
    static constexpr periph_t P = ADC3_COMMON;
    using T = stm32h723_adc3_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, ADC12_COMMON>
{
    static constexpr periph_t P = ADC12_COMMON;
    using T = stm32h750x_adc3_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, ADC3_COMMON>
{
    static constexpr periph_t P = ADC3_COMMON;
    using T = stm32h750x_adc3_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, ADC12_COMMON>
{
    static constexpr periph_t P = ADC12_COMMON;
    using T = stm32h750x_adc3_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, ADC12_COMMON>
{
    static constexpr periph_t P = ADC12_COMMON;
    using T = stm32h750x_adc3_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, ADC12_COMMON>
{
    static constexpr periph_t P = ADC12_COMMON;
    using T = stm32h750x_adc3_common_t;
    static T& V;
};

using adc1_t = peripheral_t<svd, ADC1>;
using adc12_common_t = peripheral_t<svd, ADC12_COMMON>;
using adc2_t = peripheral_t<svd, ADC2>;
using adc3_t = peripheral_t<svd, ADC3>;
using adc3_common_t = peripheral_t<svd, ADC3_COMMON>;

template<int INST> struct adc_traits {};

template<> struct adc_traits<1>
{
    using adc = adc1_t;
};

template<> struct adc_traits<12>
{
    using adc = adc12_common_t;
    static constexpr clock_source_t CLOCK = AHB_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.AHB1ENR |= RCC::T::AHB1ENR_ADC12_COMMONEN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHB1ENR &= ~RCC::T::AHB1ENR_ADC12_COMMONEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHB1RSTR |= RCC::T::AHB1RSTR_ADC12_COMMONRST;
    }
};

template<> struct adc_traits<2>
{
    using adc = adc2_t;
};

template<> struct adc_traits<3>
{
    using adc = adc3_t;
    static constexpr clock_source_t CLOCK = AHB_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.AHB4ENR |= RCC::T::AHB4ENR_ADC3EN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHB4ENR &= ~RCC::T::AHB4ENR_ADC3EN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHB4RSTR |= RCC::T::AHB4RSTR_ADC3RST;
    }
};

template<> struct adc_traits<0>
{
    using adc = adc3_common_t;
};
