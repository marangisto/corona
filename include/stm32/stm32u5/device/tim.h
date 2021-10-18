#pragma once

////
//
//      STM32U5 TIM peripherals
//
///

// TIM1: Advanced-timers

struct stm32u5xx_tim1_t
{
    volatile uint16_t TIM1_CR1; // TIM1 control register 1
    reserved_t<0x0> _0x2;
    volatile uint32_t TIM1_CR2; // control register 2
    volatile uint32_t TIM1_SMCR; // TIM1 slave mode control register
    volatile uint32_t TIM1_DIER; // TIM1 DMA/interrupt enable register
    volatile uint32_t TIM1_SR; // TIM1 status register
    volatile uint16_t TIM1_EGR; // TIM1 event generation register
    reserved_t<0x0> _0x16;
    volatile uint32_t TIM1_CCMR1; // capture/compare mode register 1 (output mode)
    volatile uint32_t TIM1_CCMR2; // capture/compare mode register 2 (output mode)
    volatile uint32_t TIM1_CCER; // TIM1 capture/compare enable register
    volatile uint32_t TIM1_CNT; // TIM1 counter
    volatile uint16_t TIM1_PSC; // TIM1 prescaler
    reserved_t<0x0> _0x2a;
    volatile uint32_t TIM1_ARR; // TIM1 auto-reload register
    volatile uint16_t TIM1_RCR; // TIM1 repetition counter register
    reserved_t<0x0> _0x32;
    volatile uint32_t TIM1_CCR1; // TIM1 capture/compare register 1
    volatile uint32_t TIM1_CCR2; // TIM1 capture/compare register 2
    volatile uint32_t TIM1_CCR3; // TIM1 capture/compare register 3
    volatile uint32_t TIM1_CCR4; // TIM1 capture/compare register 4
    volatile uint32_t TIM1_BDTR; // TIM1 break and dead-time register
    volatile uint32_t TIM1_CCR5; // TIM1 capture/compare register 5
    volatile uint32_t TIM1_CCR6; // TIM1 capture/compare register 6
    volatile uint32_t TIM1_CCMR3; // TIM1 capture/compare mode register 3
    volatile uint32_t TIM1_DTR2; // TIM1 timer deadtime register 2
    volatile uint32_t TIM1_ECR; // TIM1 timer encoder control register
    volatile uint32_t TIM1_TISEL; // TIM1 timer input selection register
    volatile uint32_t TIM1_AF1; // TIM1 alternate function option register 1
    volatile uint32_t TIM1_AF2; // TIM1 alternate function register 2
    reserved_t<0xdd> _0x68;
    volatile uint32_t TIM1_DCR; // TIM1 DMA control register
    volatile uint32_t TIM1_DMAR; // TIM1 DMA address for full transfer

    static constexpr uint32_t TIM1_CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t TIM1_CR1_CEN = 0x1; // Counter enable Note: External clock, gated mode and encoder mode can work only if the CEN bit has been previously set by software. However trigger mode can set the CEN bit automatically by hardware.
    static constexpr uint32_t TIM1_CR1_UDIS = 0x2; // Update disable This bit is set and cleared by software to enable/disable UEV event generation. Counter overflow/underflow Setting the UG bit Update generation through the slave mode controller Buffered registers are then loaded with their preload values.
    static constexpr uint32_t TIM1_CR1_URS = 0x4; // Update request source This bit is set and cleared by software to select the UEV event sources. Counter overflow/underflow Setting the UG bit Update generation through the slave mode controller
    static constexpr uint32_t TIM1_CR1_OPM = 0x8; // One pulse mode
    static constexpr uint32_t TIM1_CR1_DIR = 0x10; // Direction Note: This bit is read only when the timer is configured in Center-aligned mode or Encoder mode.
    typedef bit_field_t<5, 0x3> TIM1_CR1_CMS; // Center-aligned mode selection Note: It is not allowed to switch from edge-aligned mode to center-aligned mode as long as the counter is enabled (CEN=1)
    static constexpr uint32_t TIM1_CR1_ARPE = 0x80; // Auto-reload preload enable
    typedef bit_field_t<8, 0x3> TIM1_CR1_CKD; // Clock division This bit-field indicates the division ratio between the timer clock (tim_ker_ck) frequency and the dead-time and sampling clock (tDTS)used by the dead-time generators and the digital filters (tim_etr_in, tim_tix),
    static constexpr uint32_t TIM1_CR1_UIFREMAP = 0x800; // UIF status bit remapping
    static constexpr uint32_t TIM1_CR1_DITHEN = 0x1000; // Dithering enable Note: The DITHEN bit can only be modified when CEN bit is reset.


    static constexpr uint32_t TIM1_CR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t TIM1_CR2_MMS_3 = 0x2000000; // Master mode selection 2
    typedef bit_field_t<20, 0xf> TIM1_CR2_MMS2; // Master mode selection 2
    static constexpr uint32_t TIM1_CR2_OIS6 = 0x40000; // Output Idle state 6
    static constexpr uint32_t TIM1_CR2_OIS5 = 0x10000; // Output Idle state 5
    static constexpr uint32_t TIM1_CR2_OIS4N = 0x8000; // Output Idle state 4 (OC5 output)
    static constexpr uint32_t TIM1_CR2_OIS4 = 0x4000; // Output Idle state 4
    static constexpr uint32_t TIM1_CR2_OIS3N = 0x2000; // Output Idle state 3
    static constexpr uint32_t TIM1_CR2_OIS3 = 0x1000; // Output Idle state 3
    static constexpr uint32_t TIM1_CR2_OIS2N = 0x800; // Output Idle state 2
    static constexpr uint32_t TIM1_CR2_OIS2 = 0x400; // Output Idle state 2
    static constexpr uint32_t TIM1_CR2_OIS1N = 0x200; // Output Idle state 1
    static constexpr uint32_t TIM1_CR2_OIS1 = 0x100; // Output Idle state 1
    static constexpr uint32_t TIM1_CR2_TI1S = 0x80; // TI1 selection
    typedef bit_field_t<4, 0x7> TIM1_CR2_MMS0_2; // Master mode selection
    static constexpr uint32_t TIM1_CR2_CCDS = 0x8; // Capture/compare DMA selection
    static constexpr uint32_t TIM1_CR2_CCUS = 0x4; // Capture/compare control update selection
    static constexpr uint32_t TIM1_CR2_CCPC = 0x1; // Capture/compare preloaded control

    static constexpr uint32_t TIM1_SMCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> TIM1_SMCR_SMS1; // Slave mode selection When external signals are selected the active edge of the trigger signal (tim_trgi) is linked to the polarity selected on the external input (see Input Control register and Control Register description. Note: The gated mode must not be used if tim_ti1f_ed is selected as the trigger input (TS=00100). Indeed, tim_ti1f_ed outputs 1 pulse for each transition on TI1F, whereas the gated mode checks the level of the trigger signal. Note: The clock of the slave peripherals (timer, ADC, ...) receiving the tim_trgo or the tim_trgo2 signals must be enabled prior to receive events from the master timer, and the clock frequency (prescaler) must not be changed on-the-fly while triggers are received from the master timer.
    static constexpr uint32_t TIM1_SMCR_OCCS = 0x8; // OCREF clear selection This bit is used to select the OCREF clear source.
    typedef bit_field_t<4, 0x7> TIM1_SMCR_TS1; // Trigger selection - bit 4:3 Refer to TS[2:0] description - bits 6:4 null Trigger selection This bitfield is combined with TS[4:3] bits. This bit-field selects the trigger input to be used to synchronize the counter. others: Reserved See for more details on tim_itrx meaning for each Timer. Note: These bits must be changed only when they are not used (e.g. when SMS=000) to avoid wrong edge detections at the transition.
    static constexpr uint32_t TIM1_SMCR_MSM = 0x80; // Master/slave mode
    typedef bit_field_t<8, 0xf> TIM1_SMCR_ETF; // External trigger filter This bit-field then defines the frequency used to sample tim_etrp signal and the length of the digital filter applied to tim_etrp. The digital filter is made of an event counter in which N consecutive events are needed to validate a transition on the output:
    typedef bit_field_t<12, 0x3> TIM1_SMCR_ETPS; // External trigger prescaler External trigger signal tim_etrp frequency must be at most 1/4 of TIMxCLK frequency. A prescaler can be enabled to reduce tim_etrp frequency. It is useful when inputting fast external clocks on tim_etr_in.
    static constexpr uint32_t TIM1_SMCR_ECE = 0x4000; // External clock enable This bit enables External clock mode 2. Note: Setting the ECE bit has the same effect as selecting external clock mode 1 with tim_trgi connected to tim_etrf (SMS=111 and TS=00111). It is possible to simultaneously use external clock mode 2 with the following slave modes: reset mode, gated mode and trigger mode. Nevertheless, tim_trgi must not be connected to tim_etrf in this case (TS bits must not be 00111). If external clock mode 1 and external clock mode 2 are enabled at the same time, the external clock input is tim_etrf.
    static constexpr uint32_t TIM1_SMCR_ETP = 0x8000; // External trigger polarity This bit selects whether tim_etr_in or tim_etr_in is used for trigger operations
    static constexpr uint32_t TIM1_SMCR_SMS2 = 0x10000; // Slave mode selection When external signals are selected the active edge of the trigger signal (tim_trgi) is linked to the polarity selected on the external input (see Input Control register and Control Register description. Note: The gated mode must not be used if tim_ti1f_ed is selected as the trigger input (TS=00100). Indeed, tim_ti1f_ed outputs 1 pulse for each transition on TI1F, whereas the gated mode checks the level of the trigger signal. Note: The clock of the slave peripherals (timer, ADC, ...) receiving the tim_trgo or the tim_trgo2 signals must be enabled prior to receive events from the master timer, and the clock frequency (prescaler) must not be changed on-the-fly while triggers are received from the master timer.
    typedef bit_field_t<20, 0x3> TIM1_SMCR_TS2; // Trigger selection - bit 4:3 Refer to TS[2:0] description - bits 6:4 null Trigger selection This bitfield is combined with TS[4:3] bits. This bit-field selects the trigger input to be used to synchronize the counter. others: Reserved See for more details on tim_itrx meaning for each Timer. Note: These bits must be changed only when they are not used (e.g. when SMS=000) to avoid wrong edge detections at the transition.
    static constexpr uint32_t TIM1_SMCR_SMSPE = 0x1000000; // SMS preload enable This bit selects whether the SMS[3:0] bitfield is preloaded
    static constexpr uint32_t TIM1_SMCR_SMSPS = 0x2000000; // SMS preload source This bit selects whether the events that triggers the SMS[3:0] bitfield transfer from preload to active

    static constexpr uint32_t TIM1_DIER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t TIM1_DIER_UIE = 0x1; // Update interrupt enable
    static constexpr uint32_t TIM1_DIER_CC1IE = 0x2; // Capture/compare 1 interrupt enable
    static constexpr uint32_t TIM1_DIER_CC2IE = 0x4; // Capture/compare 2 interrupt enable
    static constexpr uint32_t TIM1_DIER_CC3IE = 0x8; // Capture/compare 3 interrupt enable
    static constexpr uint32_t TIM1_DIER_CC4IE = 0x10; // Capture/compare 4 interrupt enable
    static constexpr uint32_t TIM1_DIER_COMIE = 0x20; // COM interrupt enable
    static constexpr uint32_t TIM1_DIER_TIE = 0x40; // Trigger interrupt enable
    static constexpr uint32_t TIM1_DIER_BIE = 0x80; // Break interrupt enable
    static constexpr uint32_t TIM1_DIER_UDE = 0x100; // Update DMA request enable
    static constexpr uint32_t TIM1_DIER_CC1DE = 0x200; // Capture/compare 1 DMA request enable
    static constexpr uint32_t TIM1_DIER_CC2DE = 0x400; // Capture/compare 2 DMA request enable
    static constexpr uint32_t TIM1_DIER_CC3DE = 0x800; // Capture/compare 3 DMA request enable
    static constexpr uint32_t TIM1_DIER_CC4DE = 0x1000; // Capture/compare 4 DMA request enable
    static constexpr uint32_t TIM1_DIER_COMDE = 0x2000; // COM DMA request enable
    static constexpr uint32_t TIM1_DIER_TDE = 0x4000; // Trigger DMA request enable
    static constexpr uint32_t TIM1_DIER_IDXIE = 0x100000; // Index interrupt enable
    static constexpr uint32_t TIM1_DIER_DIRIE = 0x200000; // Direction change interrupt enable
    static constexpr uint32_t TIM1_DIER_IERRIE = 0x400000; // Index error interrupt enable
    static constexpr uint32_t TIM1_DIER_TERRIE = 0x800000; // Transition error interrupt enable

    static constexpr uint32_t TIM1_SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t TIM1_SR_UIF = 0x1; // Update interrupt flag This bit is set by hardware on an update event. It is cleared by software. At overflow or underflow regarding the repetition counter value (update if repetition counter = 0) and if the UDIS=0 in the TIMx_CR1 register. When CNT is reinitialized by software using the UG bit in TIMx_EGR register, if URS=0 and UDIS=0 in the TIMx_CR1 register. When CNT is reinitialized by a trigger event (refer to control register (TIMx_SMCR)(x = 1, 8)), if URS=0 and UDIS=0 in the TIMx_CR1 register.
    static constexpr uint32_t TIM1_SR_CC1IF = 0x2; // Capture/compare 1 interrupt flag This flag is set by hardware. It is cleared by software (input capture or output compare mode) or by reading the TIMx_CCR1 register (input capture mode only). If channel CC1 is configured as output: this flag is set when the content of the counter TIMx_CNT matches the content of the TIMx_CCR1 register. When the content of TIMx_CCR1 is greater than the content of TIMx_ARR, the CC1IF bit goes high on the counter overflow (in up-counting and up/down-counting modes) or underflow (in downcounting mode). There are 3 possible options for flag setting in center-aligned mode, refer to the CMS bits in the TIMx_CR1 register for the full description. If channel CC1 is configured as input: this bit is set when counter value has been captured in TIMx_CCR1 register (an edge has been detected on IC1, as per the edge sensitivity defined with the CC1P and CC1NP bits setting, in TIMx_CCER).
    static constexpr uint32_t TIM1_SR_CC2IF = 0x4; // Capture/compare 2 interrupt flag Refer to CC1IF description
    static constexpr uint32_t TIM1_SR_CC3IF = 0x8; // Capture/compare 3 interrupt flag Refer to CC1IF description
    static constexpr uint32_t TIM1_SR_CC4IF = 0x10; // Capture/compare 4 interrupt flag Refer to CC1IF description
    static constexpr uint32_t TIM1_SR_COMIF = 0x20; // COM interrupt flag This flag is set by hardware on COM event (when capture/compare Control bits - CCxE, CCxNE, OCxM - have been updated). It is cleared by software.
    static constexpr uint32_t TIM1_SR_TIF = 0x40; // Trigger interrupt flag This flag is set by hardware on the TRG trigger event (active edge detected on tim_trgi input when the slave mode controller is enabled in all modes but gated mode. It is set when the counter starts or stops when gated mode is selected. It is cleared by software.
    static constexpr uint32_t TIM1_SR_BIF = 0x80; // Break interrupt flag This flag is set by hardware as soon as the break input goes active. It can be cleared by software if the break input is not active.
    static constexpr uint32_t TIM1_SR_B2IF = 0x100; // Break 2 interrupt flag This flag is set by hardware as soon as the break 2 input goes active. It can be cleared by software if the break 2 input is not active.
    static constexpr uint32_t TIM1_SR_CC1OF = 0x200; // Capture/compare 1 overcapture flag This flag is set by hardware only when the corresponding channel is configured in input capture mode. It is cleared by software by writing it to &#39;0.
    static constexpr uint32_t TIM1_SR_CC2OF = 0x400; // Capture/compare 2 overcapture flag Refer to CC1OF description
    static constexpr uint32_t TIM1_SR_CC3OF = 0x800; // Capture/compare 3 overcapture flag Refer to CC1OF description
    static constexpr uint32_t TIM1_SR_CC4OF = 0x1000; // Capture/compare 4 overcapture flag Refer to CC1OF description
    static constexpr uint32_t TIM1_SR_SBIF = 0x2000; // System break interrupt flag This flag is set by hardware as soon as the system break input goes active. It can be cleared by software if the system break input is not active. This flag must be reset to re-start PWM operation.
    static constexpr uint32_t TIM1_SR_CC5IF = 0x10000; // Compare 5 interrupt flag Refer to CC1IF description Note: Channel 5 can only be configured as output.
    static constexpr uint32_t TIM1_SR_CC6IF = 0x20000; // Compare 6 interrupt flag Refer to CC1IF description Note: Channel 6 can only be configured as output.
    static constexpr uint32_t TIM1_SR_IDXF = 0x100000; // Index interrupt flag This flag is set by hardware when an index event is detected. It is cleared by software by writing it to &#39;0.
    static constexpr uint32_t TIM1_SR_DIRF = 0x200000; // Direction change interrupt flag This flag is set by hardware when the direction changes in encoder mode (DIR bit value in TIMx_CR is changing). It is cleared by software by writing it to &#39;0.
    static constexpr uint32_t TIM1_SR_IERRF = 0x400000; // Index error interrupt flag This flag is set by hardware when an index error is detected. It is cleared by software by writing it to &#39;0.
    static constexpr uint32_t TIM1_SR_TERRF = 0x800000; // Transition error interrupt flag This flag is set by hardware when a transition error is detected in encoder mode. It is cleared by software by writing it to &#39;0.

    static constexpr uint32_t TIM1_EGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t TIM1_EGR_UG = 0x1; // Update generation This bit can be set by software, it is automatically cleared by hardware.
    static constexpr uint32_t TIM1_EGR_CC1G = 0x2; // Capture/compare 1 generation This bit is set by software in order to generate an event, it is automatically cleared by hardware. If channel CC1 is configured as output: CC1IF flag is set, Corresponding interrupt or DMA request is sent if enabled. If channel CC1 is configured as input: The current value of the counter is captured in TIMx_CCR1 register. The CC1IF flag is set, the corresponding interrupt or DMA request is sent if enabled. The CC1OF flag is set if the CC1IF flag was already high.
    static constexpr uint32_t TIM1_EGR_CC2G = 0x4; // Capture/compare 2 generation Refer to CC1G description
    static constexpr uint32_t TIM1_EGR_CC3G = 0x8; // Capture/compare 3 generation Refer to CC1G description
    static constexpr uint32_t TIM1_EGR_CC4G = 0x10; // Capture/compare 4 generation Refer to CC1G description
    static constexpr uint32_t TIM1_EGR_COMG = 0x20; // Capture/compare control update generation This bit can be set by software, it is automatically cleared by hardware Note: This bit acts only on channels having a complementary output.
    static constexpr uint32_t TIM1_EGR_TG = 0x40; // Trigger generation This bit is set by software in order to generate an event, it is automatically cleared by hardware.
    static constexpr uint32_t TIM1_EGR_BG = 0x80; // Break generation This bit is set by software in order to generate an event, it is automatically cleared by hardware.
    static constexpr uint32_t TIM1_EGR_B2G = 0x100; // Break 2 generation This bit is set by software in order to generate an event, it is automatically cleared by hardware.


    static constexpr uint32_t TIM1_CCMR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> TIM1_CCMR1_CC1S; // Capture/Compare 1 selection
    typedef bit_field_t<8, 0x3> TIM1_CCMR1_CC2S; // Capture/Compare 2 selection
    typedef bit_field_t<4, 0xf> TIM1_CCMR1_IC1F; // Input capture 1 filter This bit-field defines the frequency used to sample tim_ti1 input and the length of the digital filter applied to tim_ti1. The digital filter is made of an event counter in which N consecutive events are needed to validate a transition on the output:
    typedef bit_field_t<2, 0x3> TIM1_CCMR1_IC1PSC; // Input capture 1 prescaler This bit-field defines the ratio of the prescaler acting on CC1 input (tim_ic1). The prescaler is reset as soon as CC1E=0 (TIMx_CCER register).
    typedef bit_field_t<12, 0xf> TIM1_CCMR1_IC2F; // Input capture 2 filter
    typedef bit_field_t<10, 0x3> TIM1_CCMR1_IC2PSC; // Input capture 2 prescaler
    static constexpr uint32_t TIM1_CCMR1_OC1CE = 0x80; // Output Compare 1 clear enable
    static constexpr uint32_t TIM1_CCMR1_OC1FE = 0x4; // Output Compare 1 fast enable
    typedef bit_field_t<4, 0x7> TIM1_CCMR1_OC1M; // Output Compare 1 mode
    static constexpr uint32_t TIM1_CCMR1_OC1M_BIT3 = 0x10000; // Output Compare 1 mode - bit 3
    static constexpr uint32_t TIM1_CCMR1_OC1PE = 0x8; // Output Compare 1 preload enable
    static constexpr uint32_t TIM1_CCMR1_OC2CE = 0x8000; // Output Compare 2 clear enable
    static constexpr uint32_t TIM1_CCMR1_OC2FE = 0x400; // Output Compare 2 fast enable
    typedef bit_field_t<12, 0x7> TIM1_CCMR1_OC2M; // Output Compare 2 mode
    static constexpr uint32_t TIM1_CCMR1_OC2M_BIT3 = 0x1000000; // Output Compare 2 mode - bit 3
    static constexpr uint32_t TIM1_CCMR1_OC2PE = 0x800; // Output Compare 2 preload enable

    static constexpr uint32_t TIM1_CCMR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> TIM1_CCMR2_CC3S; // Capture/compare 3 selection This bit-field defines the direction of the channel (input/output) as well as the used input. Note: CC3S bits are writable only when the channel is OFF (CC3E = &#39;0 in TIMx_CCER).
    typedef bit_field_t<0, 0x3> TIM1_CCMR2_CC3S_1_0; // Capture/Compare 3 selection
    typedef bit_field_t<8, 0x3> TIM1_CCMR2_CC4S; // Capture/compare 4 selection This bit-field defines the direction of the channel (input/output) as well as the used input. Note: CC4S bits are writable only when the channel is OFF (CC4E = &#39;0 in TIMx_CCER).
    typedef bit_field_t<8, 0x3> TIM1_CCMR2_CC4S_1_0; // Capture/Compare 4 selection
    typedef bit_field_t<4, 0xf> TIM1_CCMR2_IC3F; // Input capture 3 filter
    typedef bit_field_t<2, 0x3> TIM1_CCMR2_IC3PSC; // Input capture 3 prescaler
    typedef bit_field_t<12, 0xf> TIM1_CCMR2_IC4F; // Input capture 4 filter
    typedef bit_field_t<10, 0x3> TIM1_CCMR2_IC4PSC; // Input capture 4 prescaler
    static constexpr uint32_t TIM1_CCMR2_OC3CE = 0x80; // Output compare 3 clear enable
    static constexpr uint32_t TIM1_CCMR2_OC3FE = 0x4; // Output compare 3 fast enable
    typedef bit_field_t<4, 0x7> TIM1_CCMR2_OC3M_2_0; // Output compare 3 mode
    static constexpr uint32_t TIM1_CCMR2_OC3M_3 = 0x10000; // Output compare 3 mode
    static constexpr uint32_t TIM1_CCMR2_OC3PE = 0x8; // Output compare 3 preload enable
    static constexpr uint32_t TIM1_CCMR2_OC4CE = 0x8000; // Output compare 4 clear enable
    static constexpr uint32_t TIM1_CCMR2_OC4FE = 0x400; // Output compare 4 fast enable
    typedef bit_field_t<12, 0x7> TIM1_CCMR2_OC4M_3_0; // Output compare 4 mode
    static constexpr uint32_t TIM1_CCMR2_OC4M_BIT3 = 0x1000000; // Output Compare 4 mode - bit 3
    static constexpr uint32_t TIM1_CCMR2_OC4PE = 0x800; // Output compare 4 preload enable

    static constexpr uint32_t TIM1_CCER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t TIM1_CCER_CC1E = 0x1; // Capture/compare 1 output enable When CC1 channel is configured as output, the OC1 level depends on MOE, OSSI, OSSR, OIS1, OIS1N and CC1NE bits, regardless of the CC1E bits state. Refer to for details. Note: On channels having a complementary output, this bit is preloaded. If the CCPC bit is set in the TIMx_CR2 register then the CC1E active bit takes the new value from the preloaded bit only when a Commutation event is generated.
    static constexpr uint32_t TIM1_CCER_CC1P = 0x2; // Capture/compare 1 output polarity When CC1 channel is configured as input, both CC1NP/CC1P bits select the active polarity of TI1FP1 and TI2FP1 for trigger or capture operations. CC1NP=0, CC1P=0: non-inverted/rising edge. The circuit is sensitive to TIxFP1 rising edge (capture or trigger operations in reset, external clock or trigger mode), TIxFP1 is not inverted (trigger operation in gated mode or encoder mode). CC1NP=0, CC1P=1: inverted/falling edge. The circuit is sensitive to TIxFP1 falling edge (capture or trigger operations in reset, external clock or trigger mode), TIxFP1 is inverted (trigger operation in gated mode or encoder mode). CC1NP=1, CC1P=1: non-inverted/both edges/ The circuit is sensitive to both TIxFP1 rising and falling edges (capture or trigger operations in reset, external clock or trigger mode), TIxFP1is not inverted (trigger operation in gated mode). This configuration must not be used in encoder mode. CC1NP=1, CC1P=0: the configuration is reserved, it must not be used. Note: This bit is not writable as soon as LOCK level 2 or 3 has been programmed (LOCK bits in TIMx_BDTR register). Note: On channels having a complementary output, this bit is preloaded. If the CCPC bit is set in the TIMx_CR2 register then the CC1P active bit takes the new value from the preloaded bit only when a Commutation event is generated.
    static constexpr uint32_t TIM1_CCER_CC1NE = 0x4; // Capture/compare 1 complementary output enable Note: On channels having a complementary output, this bit is preloaded. If the CCPC bit is set in the TIMx_CR2 register then the CC1NE active bit takes the new value from the preloaded bit only when a Commutation event is generated.
    static constexpr uint32_t TIM1_CCER_CC1NP = 0x8; // Capture/compare 1 complementary output polarity CC1 channel configured as output: CC1 channel configured as input: This bit is used in conjunction with CC1P to define the polarity of tim_ti1fp1 and tim_ti2fp1. Refer to CC1P description. Note: This bit is not writable as soon as LOCK level 2 or 3 has been programmed (LOCK bits in TIMx_BDTR register) and CC1S=00 (channel configured as output). Note: On channels having a complementary output, this bit is preloaded. If the CCPC bit is set in the TIMx_CR2 register then the CC1NP active bit takes the new value from the preloaded bit only when a Commutation event is generated.
    static constexpr uint32_t TIM1_CCER_CC2E = 0x10; // Capture/compare 2 output enable Refer to CC1E description
    static constexpr uint32_t TIM1_CCER_CC2P = 0x20; // Capture/compare 2 output polarity Refer to CC1P description
    static constexpr uint32_t TIM1_CCER_CC2NE = 0x40; // Capture/compare 2 complementary output enable Refer to CC1NE description
    static constexpr uint32_t TIM1_CCER_CC2NP = 0x80; // Capture/compare 2 complementary output polarity Refer to CC1NP description
    static constexpr uint32_t TIM1_CCER_CC3E = 0x100; // Capture/compare 3 output enable Refer to CC1E description
    static constexpr uint32_t TIM1_CCER_CC3P = 0x200; // Capture/compare 3 output polarity Refer to CC1P description
    static constexpr uint32_t TIM1_CCER_CC3NE = 0x400; // Capture/compare 3 complementary output enable Refer to CC1NE description
    static constexpr uint32_t TIM1_CCER_CC3NP = 0x800; // Capture/compare 3 complementary output polarity Refer to CC1NP description
    static constexpr uint32_t TIM1_CCER_CC4E = 0x1000; // Capture/compare 4 output enable Refer to CC1E description
    static constexpr uint32_t TIM1_CCER_CC4P = 0x2000; // Capture/compare 4 output polarity Refer to CC1P description
    static constexpr uint32_t TIM1_CCER_CC4NE = 0x4000; // Capture/compare 4 complementary output enable Refer to CC1NE description
    static constexpr uint32_t TIM1_CCER_CC4NP = 0x8000; // Capture/compare 4 complementary output polarity Refer to CC1NP description
    static constexpr uint32_t TIM1_CCER_CC5E = 0x10000; // Capture/compare 5 output enable Refer to CC1E description
    static constexpr uint32_t TIM1_CCER_CC5P = 0x20000; // Capture/compare 5 output polarity Refer to CC1P description
    static constexpr uint32_t TIM1_CCER_CC6E = 0x100000; // Capture/compare 6 output enable Refer to CC1E description
    static constexpr uint32_t TIM1_CCER_CC6P = 0x200000; // Capture/compare 6 output polarity Refer to CC1P description

    static constexpr uint32_t TIM1_CNT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> TIM1_CNT_CNT; // Counter value Non-dithering mode (DITHEN = 0) The register holds the counter value. Dithering mode (DITHEN = 1) The register only holds the non-dithered part in CNT[15:0]. The fractional part is not available.
    static constexpr uint32_t TIM1_CNT_UIFCPY = 0x80000000; // UIF copy This bit is a read-only copy of the UIF bit of the TIMx_ISR register. If the UIFREMAP bit in the TIMxCR1 is reset, bit 31 is reserved and read at 0.

    static constexpr uint32_t TIM1_PSC_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> TIM1_PSC_PSC; // Prescaler value The counter clock frequency (ftim_cnt_ck) is equal to ftim_psc_ck / (PSC[15:0] + 1). PSC contains the value to be loaded in the active prescaler register at each update event (including when the counter is cleared through UG bit of TIMx_EGR register or through trigger controller when configured in reset mode).


    static constexpr uint32_t TIM1_ARR_RESET_VALUE = 0xffff; // Reset value
    typedef bit_field_t<0, 0xfffff> TIM1_ARR_ARR; // Auto-reload value ARR is the value to be loaded in the actual auto-reload register. Refer to the for more details about ARR update and behavior. The counter is blocked while the auto-reload value is null. Non-dithering mode (DITHEN = 0) The register holds the auto-reload value. Dithering mode (DITHEN = 1) The register holds the integer part in ARR[19:4]. The ARR[3:0] bitfield contains the dithered part.

    static constexpr uint32_t TIM1_RCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> TIM1_RCR_REP; // Repetition counter reload value This bitfield defines the update rate of the compare registers (i.e. periodic transfers from preload to active registers) when preload registers are enable. It also defines the update interrupt generation rate, if this interrupt is enable. When the repetition down-counter reaches zero, an update event is generated and it restarts counting from REP value. As the repetition counter is reloaded with REP value only at the repetition update event UEV, any write to the TIMx_RCR register is not taken in account until the next repetition update event. It means in PWM mode (REP+1) corresponds to: the number of PWM periods in edge-aligned mode the number of half PWM period in center-aligned mode.


    static constexpr uint32_t TIM1_CCR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfffff> TIM1_CCR1_CCR1; // Capture/compare 1 value If channel CC1 is configured as output: CCR1 is the value to be loaded in the actual capture/compare 1 register (preload value). It is loaded permanently if the preload feature is not selected in the TIMx_CCMR1 register (bit OC1PE). Else the preload value is copied in the active capture/compare 1 register when an update event occurs. The active capture/compare register contains the value to be compared to the counter TIMx_CNT and signaled on tim_oc1 output. Non-dithering mode (DITHEN = 0) The register holds the compare value in CCR1[15:0]. The CCR1[19:16] bits are reset. Dithering mode (DITHEN = 1) The register holds the integer part in CCR1[19:4]. The CCR1[3:0] bitfield contains the dithered part. If channel CC1 is configured as input: CR1 is the counter value transferred by the last input capture 1 event (tim_ic1). The TIMx_CCR1 register is read-only and cannot be programmed. Non-dithering mode (DITHEN = 0) The register holds the capture value in CCR1[15:0]. The CCR1[19:16] bits are reset. Dithering mode (DITHEN = 1) The register holds the capture in CCR1[19:4]. The CCR1[3:0] bits are reset.

    static constexpr uint32_t TIM1_CCR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfffff> TIM1_CCR2_CCR2; // Capture/compare 2 value If channel CC2 is configured as output: CCR2 is the value to be loaded in the actual capture/compare 2 register (preload value). It is loaded permanently if the preload feature is not selected in the TIMx_CCMR1 register (bit OC2PE). Else the preload value is copied in the active capture/compare 2 register when an update event occurs. The active capture/compare register contains the value to be compared to the counter TIMx_CNT and signaled on tim_oc2 output. Non-dithering mode (DITHEN = 0) The register holds the compare value in CCR2[15:0]. The CCR2[19:16] bits are reset. Dithering mode (DITHEN = 1) The register holds the integer part in CCR2[19:4]. The CCR2[3:0] bitfield contains the dithered part. If channel CC2 is configured as input: CCR2 is the counter value transferred by the last input capture 2 event (tim_ic2). The TIMx_CCR2 register is read-only and cannot be programmed. Non-dithering mode (DITHEN = 0) The register holds the capture value in CCR2[15:0]. The CCR2[19:16] bits are reset. Dithering mode (DITHEN = 1) The register holds the capture in CCR2[19:4]. The CCR2[3:0] bits are reset.

    static constexpr uint32_t TIM1_CCR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfffff> TIM1_CCR3_CCR3; // Capture/compare value If channel CC3 is configured as output: CCR3 is the value to be loaded in the actual capture/compare 3 register (preload value). It is loaded permanently if the preload feature is not selected in the TIMx_CCMR2 register (bit OC3PE). Else the preload value is copied in the active capture/compare 3 register when an update event occurs. The active capture/compare register contains the value to be compared to the counter TIMx_CNT and signaled on tim_oc3 output. Non-dithering mode (DITHEN = 0) The register holds the compare value in CCR3[15:0]. The CCR3[19:16] bits are reset. Dithering mode (DITHEN = 1) The register holds the integer part in CCR3[19:4]. The CCR3[3:0] bitfield contains the dithered part. If channel CC3 is configured as input: CCR3 is the counter value transferred by the last input capture 3 event (tim_ic3). The TIMx_CCR3 register is read-only and cannot be programmed. Non-dithering mode (DITHEN = 0) The register holds the capture value in CCR3[15:0]. The CCR3[19:16] bits are reset. Dithering mode (DITHEN = 1) The register holds the capture in CCR3[19:4]. The CCR3[3:0] bits are reset.

    static constexpr uint32_t TIM1_CCR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfffff> TIM1_CCR4_CCR4; // Capture/compare value If channel CC4 is configured as output: CCR4 is the value to be loaded in the actual capture/compare 4 register (preload value). It is loaded permanently if the preload feature is not selected in the TIMx_CCMR2 register (bit OC4PE). Else the preload value is copied in the active capture/compare 4 register when an update event occurs. The active capture/compare register contains the value to be compared to the counter TIMx_CNT and signalled on tim_oc4 output. Non-dithering mode (DITHEN = 0) The register holds the compare value in CCR4[15:0]. The CCR4[19:16] bits are reset. Dithering mode (DITHEN = 1) The register holds the integer part in CCR4[19:4]. The CCR4[3:0] bitfield contains the dithered part. If channel CC4 is configured as input: CCR4 is the counter value transferred by the last input capture 4 event (tim_ic4). The TIMx_CCR4 register is read-only and cannot be programmed. Non-dithering mode (DITHEN = 0) The register holds the capture value in CCR4[15:0]. The CCR4[19:16] bits are reset. Dithering mode (DITHEN = 1) The register holds the capture in CCR4[19:4]. The CCR4[3:0] bits are reset.

    static constexpr uint32_t TIM1_BDTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> TIM1_BDTR_DTG; // Dead-time generator setup This bit-field defines the duration of the dead-time inserted between the complementary outputs. DT correspond to this duration. DTG[7:5]=0xx =&gt; DT=DTG[7:0]x tdtg with tdtg=tDTS. DTG[7:5]=10x =&gt; DT=(64+DTG[5:0])xtdtg with Tdtg=2xtDTS. DTG[7:5]=110 =&gt; DT=(32+DTG[4:0])xtdtg with Tdtg=8xtDTS. DTG[7:5]=111 =&gt; DT=(32+DTG[4:0])xtdtg with Tdtg=16xtDTS. Example if TDTS=125ns (8MHz), dead-time possible values are: 0 to 15875 ns by 125 ns steps, 16 us to 31750 ns by 250 ns steps, 32 us to 63us by 1 us steps, 64 us to 126 us by 2 us steps Note: This bit-field can not be modified as long as LOCK level 1, 2 or 3 has been programmed (LOCK bits in TIMx_BDTR register).
    typedef bit_field_t<8, 0x3> TIM1_BDTR_LOCK; // Lock configuration These bits offer a write protection against software errors. Note: The LOCK bits can be written only once after the reset. Once the TIMx_BDTR register has been written, their content is frozen until the next reset.
    static constexpr uint32_t TIM1_BDTR_OSSI = 0x400; // Off-state selection for idle mode This bit is used when MOE=0 due to a break event or by a software write, on channels configured as outputs. See OC/OCN enable description for more details (enable register (TIMx_CCER)(x = 1, 8)). Note: This bit can not be modified as soon as the LOCK level 2 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t TIM1_BDTR_OSSR = 0x800; // Off-state selection for Run mode This bit is used when MOE=1 on channels having a complementary output which are configured as outputs. OSSR is not implemented if no complementary output is implemented in the timer. See OC/OCN enable description for more details (enable register (TIMx_CCER)(x = 1, 8)). Note: This bit can not be modified as soon as the LOCK level 2 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t TIM1_BDTR_BKE = 0x1000; // Break enable This bit enables the complete break protection (including all sources connected to bk_acth and BKIN sources, as per ). Note: This bit cannot be modified when LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register). Note: Any write operation to this bit takes a delay of 1 APB clock cycle to become effective.
    static constexpr uint32_t TIM1_BDTR_BKP = 0x2000; // Break polarity Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register). Note: Any write operation to this bit takes a delay of 1 APB clock cycle to become effective.
    static constexpr uint32_t TIM1_BDTR_AOE = 0x4000; // Automatic output enable Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t TIM1_BDTR_MOE = 0x8000; // Main output enable This bit is cleared asynchronously by hardware as soon as one of the break inputs is active (tim_brk or tim_brk2). It is set by software or automatically depending on the AOE bit. It is acting only on the channels which are configured in output. In response to a break event or if MOE is written to 0: OC and OCN outputs are disabled or forced to idle state depending on the OSSI bit. enable register (TIMx_CCER)(x = 1, 8)).
    typedef bit_field_t<16, 0xf> TIM1_BDTR_BKF; // Break filter This bit-field defines the frequency used to sample tim_brk input and the length of the digital filter applied to tim_brk. The digital filter is made of an event counter in which N consecutive events are needed to validate a transition on the output: Note: This bit cannot be modified when LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    typedef bit_field_t<20, 0xf> TIM1_BDTR_BK2F; // Break 2 filter This bit-field defines the frequency used to sample tim_brk2 input and the length of the digital filter applied to tim_brk2. The digital filter is made of an event counter in which N consecutive events are needed to validate a transition on the output: Note: This bit cannot be modified when LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t TIM1_BDTR_BK2E = 0x1000000; // Break 2 enable This bit enables the complete break 2 protection (including all sources connected to bk_acth and BKIN sources, as per ). Note: The BRKIN2 must only be used with OSSR = OSSI = 1. Note: This bit cannot be modified when LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register). Note: Any write operation to this bit takes a delay of 1 APB clock cycle to become effective.
    static constexpr uint32_t TIM1_BDTR_BK2P = 0x2000000; // Break 2 polarity Note: This bit cannot be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register). Note: Any write operation to this bit takes a delay of 1 APB clock cycle to become effective.
    static constexpr uint32_t TIM1_BDTR_BKDSRM = 0x4000000; // Break disarm This bit is cleared by hardware when no break source is active. The BKDSRM bit must be set by software to release the bidirectional output control (open-drain output in Hi-Z state) and then be polled it until it is reset by hardware, indicating that the fault condition has disappeared. Note: Any write operation to this bit takes a delay of 1 APB clock cycle to become effective.
    static constexpr uint32_t TIM1_BDTR_BK2DSRM = 0x8000000; // Break2 disarm Refer to BKDSRM description
    static constexpr uint32_t TIM1_BDTR_BKBID = 0x10000000; // Break bidirectional In the bidirectional mode (BKBID bit set to 1), the break input is configured both in input mode and in open drain output mode. Any active break event asserts a low logic level on the Break input to indicate an internal break event to external devices. Note: This bit cannot be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register). Note: Any write operation to this bit takes a delay of 1 APB clock cycle to become effective.
    static constexpr uint32_t TIM1_BDTR_BK2BID = 0x20000000; // Break2 bidirectional Refer to BKBID description

    static constexpr uint32_t TIM1_CCR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfffff> TIM1_CCR5_CCR5; // Capture/compare 5 value CCR5 is the value to be loaded in the actual capture/compare 5 register (preload value). It is loaded permanently if the preload feature is not selected in the TIMx_CCMR3 register (bit OC5PE). Else the preload value is copied in the active capture/compare 5 register when an update event occurs. The active capture/compare register contains the value to be compared to the counter TIMx_CNT and signaled on tim_oc5 output. Non-dithering mode (DITHEN = 0) The register holds the compare value in CCR5[15:0]. The CCR5[19:16] bits are reset. Dithering mode (DITHEN = 1) The register holds the integer part in CCR5[19:4]. The CCR5[3:0] bitfield contains the dithered part.
    static constexpr uint32_t TIM1_CCR5_GC5C1 = 0x20000000; // Group channel 5 and channel 1 Distortion on channel 1 output: This bit can either have immediate effect or be preloaded and taken into account after an update event (if preload feature is selected in TIMxCCMR1). Note: it is also possible to apply this distortion on combined PWM signals.
    static constexpr uint32_t TIM1_CCR5_GC5C2 = 0x40000000; // Group channel 5 and channel 2 Distortion on channel 2 output: This bit can either have immediate effect or be preloaded and taken into account after an update event (if preload feature is selected in TIMxCCMR1). Note: it is also possible to apply this distortion on combined PWM signals.
    static constexpr uint32_t TIM1_CCR5_GC5C3 = 0x80000000; // Group channel 5 and channel 3 Distortion on channel 3 output: This bit can either have immediate effect or be preloaded and taken into account after an update event (if preload feature is selected in TIMxCCMR2). Note: it is also possible to apply this distortion on combined PWM signals.

    static constexpr uint32_t TIM1_CCR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfffff> TIM1_CCR6_CCR6; // Capture/compare 6 value CCR6 is the value to be loaded in the actual capture/compare 6 register (preload value). It is loaded permanently if the preload feature is not selected in the TIMx_CCMR3 register (bit OC6PE). Else the preload value is copied in the active capture/compare 6 register when an update event occurs. The active capture/compare register contains the value to be compared to the counter TIMx_CNT and signaled on tim_oc6 output. Non-dithering mode (DITHEN = 0) The register holds the compare value in CCR6[15:0]. The CCR6[19:16] bits are reset. Dithering mode (DITHEN = 1) The register holds the integer part in CCR6[19:4]. The CCR6[3:0] bitfield contains the dithered part.

    static constexpr uint32_t TIM1_CCMR3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t TIM1_CCMR3_OC5FE = 0x4; // Output compare 5 fast enable
    static constexpr uint32_t TIM1_CCMR3_OC5PE = 0x8; // Output compare 5 preload enable
    typedef bit_field_t<4, 0x7> TIM1_CCMR3_OC5M1; // Output compare 5 mode
    static constexpr uint32_t TIM1_CCMR3_OC5CE = 0x80; // Output compare 5 clear enable
    static constexpr uint32_t TIM1_CCMR3_OC6FE = 0x400; // Output compare 6 fast enable
    static constexpr uint32_t TIM1_CCMR3_OC6PE = 0x800; // Output compare 6 preload enable
    typedef bit_field_t<12, 0x7> TIM1_CCMR3_OC6M1; // Output compare 6 mode
    static constexpr uint32_t TIM1_CCMR3_OC6CE = 0x8000; // Output compare 6 clear enable
    static constexpr uint32_t TIM1_CCMR3_OC5M2 = 0x10000; // Output compare 5 mode
    static constexpr uint32_t TIM1_CCMR3_OC6M2 = 0x1000000; // Output compare 6 mode

    static constexpr uint32_t TIM1_DTR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> TIM1_DTR2_DTGF; // Dead-time falling edge generator setup This bit-field defines the duration of the dead-time inserted between the complementary outputs, on the falling edge. DTGF[7:5]=0xx =&gt; DTF=DTGF[7:0]x tdtg with tdtg=tDTS. DTGF[7:5]=10x =&gt; DTF=(64+DTGF[5:0])xtdtg with Tdtg=2xtDTS. DTGF[7:5]=110 =&gt; DTF=(32+DTGF[4:0])xtdtg with Tdtg=8xtDTS. DTGF[7:5]=111 =&gt; DTF=(32+DTGF[4:0])xtdtg with Tdtg=16xtDTS. Example if TDTS=125ns (8MHz), dead-time possible values are: 0 to 15875 ns by 125 ns steps, 16 us to 31750 ns by 250 ns steps, 32 us to 63us by 1 us steps, 64 us to 126 us by 2 us steps Note: This bit-field can not be modified as long as LOCK level 1, 2 or 3 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t TIM1_DTR2_DTAE = 0x10000; // Deadtime asymmetric enable Note: This bit can not be modified as long as LOCK level 1, 2 or 3 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t TIM1_DTR2_DTPE = 0x20000; // Deadtime preload enable Note: This bit can not be modified as long as LOCK level 1, 2 or 3 has been programmed (LOCK bits in TIMx_BDTR register).

    static constexpr uint32_t TIM1_ECR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t TIM1_ECR_IE = 0x1; // Index enable This bit indicates if the Index event resets the counter.
    typedef bit_field_t<1, 0x3> TIM1_ECR_IDIR; // Index direction This bit indicates in which direction the Index event resets the counter. Note: The IDR[1:0] bitfield must be written when IE bit is reset (index disabled).
    typedef bit_field_t<3, 0x3> TIM1_ECR_IBLK; // Index blanking This bit indicates if the Index event is conditioned by the tim_ti3 input
    static constexpr uint32_t TIM1_ECR_FIDX = 0x20; // First index This bit indicates if the first index only is taken into account
    typedef bit_field_t<6, 0x3> TIM1_ECR_IPOS; // Index positioning In quadrature encoder mode (SMS[3:0] = 0001, 0010, 0011, 1110, 1111), this bit indicates in which AB input configuration the Index event resets the counter. In directional clock mode or clock plus direction mode (SMS[3:0] = 1010, 1011, 1100, 1101), these bits indicates on which level the Index event resets the counter. In bidirectional clock mode, this applies for both clock inputs. x0: Index resets the counter when clock is 0 x1: Index resets the counter when clock is 1 Note: IPOS[1]bit is not significant
    typedef bit_field_t<16, 0xff> TIM1_ECR_PW; // Pulse width This bitfield defines the pulse duration, as following: tPW = PW[7:0] x tPWG
    typedef bit_field_t<24, 0x7> TIM1_ECR_PWPRSC; // Pulse width prescaler This bitfield sets the clock prescaler for the pulse generator, as following: tPWG = (2(PWPRSC[2:0])) x ttim_ker_ck

    static constexpr uint32_t TIM1_TISEL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> TIM1_TISEL_TI1SEL; // Selects tim_ti1[0..15] input ... Refer to for interconnects list.
    typedef bit_field_t<8, 0xf> TIM1_TISEL_TI2SEL; // Selects tim_ti2[0..15] input ... Refer to for interconnects list.
    typedef bit_field_t<16, 0xf> TIM1_TISEL_TI3SEL; // Selects tim_ti3[0..15] input ... Refer to for interconnects list.
    typedef bit_field_t<24, 0xf> TIM1_TISEL_TI4SEL; // Selects tim_ti4[0..15] input ... Refer to for interconnects list.

    static constexpr uint32_t TIM1_AF1_RESET_VALUE = 0x1; // Reset value
    static constexpr uint32_t TIM1_AF1_BKINE = 0x1; // TIMx_BKIN input enable This bit enables the TIMx_BKIN alternate function input for the timers tim_brk input. TIMx_BKIN input is &#39;ORed with the other tim_brk sources. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t TIM1_AF1_BKCMP1E = 0x2; // tim_brk_cmp1 enable This bit enables the tim_brk_cmp1 for the timers tim_brk input. tim_brk_cmp1 output is &#39;ORed with the other tim_brk sources. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t TIM1_AF1_BKCMP2E = 0x4; // tim_brk_cmp2 enable This bit enables the tim_brk_cmp2 for the timers tim_brk input. tim_brk_cmp2 output is &#39;ORed with the other tim_brk sources. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t TIM1_AF1_BKCMP3E = 0x8; // tim_brk_cmp3 enable This bit enables the tim_brk_cmp3 for the timers tim_brk input. tim_brk_cmp3 output is &#39;ORed with the other tim_brk sources. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t TIM1_AF1_BKCMP4E = 0x10; // tim_brk_cmp4 enable This bit enables the tim_brk_cmp4 for the timers tim_brk input. tim_brk_cmp4 output is &#39;ORed with the other tim_brk sources. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t TIM1_AF1_BKCMP5E = 0x20; // tim_brk_cmp5 enable This bit enables the tim_brk_cmp5 for the timers tim_brk input. tim_brk_cmp5 output is &#39;ORed with the other tim_brk sources. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t TIM1_AF1_BKCMP6E = 0x40; // tim_brk_cmp6 enable This bit enables the tim_brk_cmp6 for the timers tim_brk input. tim_brk_cmp6 output is &#39;ORed with the other tim_brk sources. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t TIM1_AF1_BKCMP7E = 0x80; // tim_brk_cmp7 enable This bit enables the tim_brk_cmp7 for the timers tim_brk input. tim_brk_cmp7 output is &#39;ORed with the other tim_brk sources. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t TIM1_AF1_BKCMP8E = 0x100; // tim_brk_cmp8 enable This bit enables the tim_brk_cmp8 for the timers tim_brk input. tim_brk_cmp8 output is &#39;ORed with the other tim_brk sources. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t TIM1_AF1_BKINP = 0x200; // TIMx_BKIN input polarity This bit selects the TIMx_BKIN alternate function input sensitivity. It must be programmed together with the BKP polarity bit. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t TIM1_AF1_BKCMP1P = 0x400; // tim_brk_cmp1 input polarity This bit selects the tim_brk_cmp1 input sensitivity. It must be programmed together with the BKP polarity bit. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t TIM1_AF1_BKCMP2P = 0x800; // tim_brk_cmp2 input polarity This bit selects the tim_brk_cmp2 input sensitivity. It must be programmed together with the BKP polarity bit. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t TIM1_AF1_BKCMP3P = 0x1000; // tim_brk_cmp3 input polarity This bit selects the tim_brk_cmp3 input sensitivity. It must be programmed together with the BKP polarity bit. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t TIM1_AF1_BKCMP4P = 0x2000; // tim_brk_cmp4 input polarity This bit selects the tim_brk_cmp4 input sensitivity. It must be programmed together with the BKP polarity bit. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    typedef bit_field_t<14, 0xf> TIM1_AF1_ETRSEL; // etr_in source selection These bits select the etr_in input source. ... Refer to for product specific implementation. Note: These bits can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).

    static constexpr uint32_t TIM1_AF2_RESET_VALUE = 0x1; // Reset value
    static constexpr uint32_t TIM1_AF2_BK2INE = 0x1; // TIMx_BKIN2 input enable This bit enables the TIMx_BKIN2 alternate function input for the timers tim_brk2 input. TIMx_BKIN2 input is &#39;ORed with the other tim_brk2 sources. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t TIM1_AF2_BK2CMP1E = 0x2; // tim_brk2_cmp1 enable This bit enables the tim_brk2_cmp1 for the timers tim_brk2 input. tim_brk2_cmp1 output is &#39;ORed with the other tim_brk2 sources. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t TIM1_AF2_BK2CMP2E = 0x4; // tim_brk2_cmp2 enable This bit enables the tim_brk2_cmp2 for the timers tim_brk2 input. tim_brk2_cmp2 output is &#39;ORed with the other tim_brk2 sources. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t TIM1_AF2_BK2CMP3E = 0x8; // tim_brk2_cmp3 enable This bit enables the tim_brk2_cmp3 for the timers tim_brk2 input. tim_brk2_cmp3 output is &#39;ORed with the other tim_brk2 sources. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t TIM1_AF2_BK2CMP4E = 0x10; // tim_brk2_cmp4 enable This bit enables the tim_brk2_cmp4 for the timers tim_brk2 input. tim_brk2_cmp4 output is &#39;ORed with the other tim_brk2 sources. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t TIM1_AF2_BK2CMP5E = 0x20; // tim_brk2_cmp5 enable This bit enables the tim_brk2_cmp5 for the timers tim_brk2 input. tim_brk2_cmp5 output is &#39;ORed with the other tim_brk2 sources. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t TIM1_AF2_BK2CMP6E = 0x40; // tim_brk2_cmp6 enable This bit enables the tim_brk2_cmp6 for the timers tim_brk2 input. tim_brk2_cmp6 output is &#39;ORed with the other tim_brk2 sources. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t TIM1_AF2_BK2CMP7E = 0x80; // tim_brk2_cmp7 enable This bit enables the tim_brk2_cmp7 for the timers tim_brk2 input. tim_brk2_cmp7 output is &#39;ORed with the other tim_brk2 sources. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t TIM1_AF2_BK2CMP8E = 0x100; // tim_brk2_cmp8 enable This bit enables the tim_brk2_cmp8 for the timers tim_brk2 input. tim_brk2_cmp8 output is &#39;ORed with the other tim_brk2 sources. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t TIM1_AF2_BK2INP = 0x200; // TIMx_BKIN2 input polarity This bit selects the TIMx_BKIN2 alternate function input sensitivity. It must be programmed together with the BK2P polarity bit. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t TIM1_AF2_BK2CMP1P = 0x400; // tim_brk2_cmp1 input polarity This bit selects the tim_brk2_cmp1 input sensitivity. It must be programmed together with the BK2P polarity bit. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t TIM1_AF2_BK2CMP2P = 0x800; // tim_brk2_cmp2 input polarity This bit selects the tim_brk2_cmp2 input sensitivity. It must be programmed together with the BK2P polarity bit. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t TIM1_AF2_BK2CMP3P = 0x1000; // tim_brk2_cmp3 input polarity This bit selects the tim_brk2_cmp3 input sensitivity. It must be programmed together with the BK2P polarity bit. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t TIM1_AF2_BK2CMP4P = 0x2000; // tim_brk2_cmp4 input polarity This bit selects the tim_brk2_cmp4 input sensitivity. It must be programmed together with the BK2P polarity bit. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    typedef bit_field_t<16, 0x7> TIM1_AF2_OCRSEL; // ocref_clr source selection These bits select the ocref_clr input source. ... Refer to for product specific information. Note: These bits can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).


    static constexpr uint32_t TIM1_DCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> TIM1_DCR_DBA; // DMA base address This 5-bits vector defines the base-address for DMA transfers (when read/write access are done through the TIMx_DMAR address). DBA is defined as an offset starting from the address of the TIMx_CR1 register. Example: ...
    typedef bit_field_t<8, 0x1f> TIM1_DCR_DBL; // DMA burst length This 5-bit vector defines the length of DMA transfers (the timer recognizes a burst transfer when a read or a write access is done to the TIMx_DMAR address), i.e. the number of transfers. Transfers can be in half-words or in bytes (see example below). ... Example: Let us consider the following transfer: DBL = 7 bytes &amp; DBA = TIM2_CR1. If DBL = 7 bytes and DBA = TIM2_CR1 represents the address of the byte to be transferred, the address of the transfer should be given by the following equation: (TIMx_CR1 address) + DBA + (DMA index), where DMA index = DBL In this example, 7 bytes are added to (TIMx_CR1 address) + DBA, which gives us the address from/to which the data are copied. In this case, the transfer is done to 7 registers starting from the following address: (TIMx_CR1 address) + DBA According to the configuration of the DMA Data Size, several cases may occur: If the DMA Data Size is configured in half-words, 16-bit data are transferred to each of the 7 registers. If the DMA Data Size is configured in bytes, the data are also transferred to 7 registers: the first register contains the first MSB byte, the second register, the first LSB byte and so on. So with the transfer Timer, one also has to specify the size of data transferred by DMA.
    typedef bit_field_t<16, 0xf> TIM1_DCR_DBSS; // DMA burst source selection This bitfield defines the interrupt source that triggers the DMA burst transfers (the timer recognizes a burst transfer when a read or a write access is done to the TIMx_DMAR address). Others: reserved

    static constexpr uint32_t TIM1_DMAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> TIM1_DMAR_DMAB; // DMA register for burst accesses A read or write operation to the DMAR register accesses the register located at the address (TIMx_CR1 address) + (DBA + DMA index) x 4 where TIMx_CR1 address is the address of the control register 1, DBA is the DMA base address configured in TIMx_DCR register, DMA index is automatically controlled by the DMA transfer, and ranges from 0 to DBL (DBL configured in TIMx_DCR).
};

// TIM2: General-purpose-timers

struct stm32u5xx_tim2_t
{
    volatile uint32_t CR1; // control register 1
    volatile uint32_t CR2; // control register 2
    volatile uint32_t SMCR; // slave mode control register
    volatile uint32_t DIER; // DMA/Interrupt enable register
    volatile uint32_t SR; // status register
    volatile uint32_t EGR; // event generation register
    volatile uint32_t CCMR1; // capture/compare mode register 1 (output mode)
    volatile uint32_t CCMR2; // capture/compare mode register 2 (output mode)
    volatile uint32_t CCER; // capture/compare enable register
    volatile uint32_t CNT; // counter
    volatile uint32_t PSC; // prescaler
    volatile uint32_t ARR; // auto-reload register
    reserved_t<0x1> _0x30;
    volatile uint32_t CCR1; // capture/compare register 1
    volatile uint32_t CCR2; // capture/compare register 2
    volatile uint32_t CCR3; // capture/compare register 3
    volatile uint32_t CCR4; // capture/compare register 4
    reserved_t<0x5> _0x44;
    volatile uint32_t ECR; // encoder control register
    volatile uint32_t TISEL; // timer input selection register
    volatile uint32_t AF1; // alternate function register 1
    volatile uint32_t AF2; // alternate function register 2
    reserved_t<0xdd> _0x68;
    volatile uint32_t DCR; // DMA control register
    volatile uint32_t DMAR; // DMA address for full transfer

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR1_DITHEN = 0x1000; // Dithering Enable
    static constexpr uint32_t CR1_UIFREMAP = 0x800; // UIF status bit remapping
    typedef bit_field_t<8, 0x3> CR1_CKD; // Clock division
    static constexpr uint32_t CR1_ARPE = 0x80; // Auto-reload preload enable
    typedef bit_field_t<5, 0x3> CR1_CMS; // Center-aligned mode selection
    static constexpr uint32_t CR1_DIR = 0x10; // Direction
    static constexpr uint32_t CR1_OPM = 0x8; // One-pulse mode
    static constexpr uint32_t CR1_URS = 0x4; // Update request source
    static constexpr uint32_t CR1_UDIS = 0x2; // Update disable
    static constexpr uint32_t CR1_CEN = 0x1; // Counter enable

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR2_MMS_3 = 0x2000000; // Master mode selection
    static constexpr uint32_t CR2_TI1S = 0x80; // TI1 selection
    typedef bit_field_t<4, 0x7> CR2_MMS; // Master mode selection
    static constexpr uint32_t CR2_CCDS = 0x8; // Capture/compare DMA selection

    static constexpr uint32_t SMCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SMCR_SMSPS = 0x2000000; // SMS preload source
    static constexpr uint32_t SMCR_SMSPE = 0x1000000; // SMS preload enable
    typedef bit_field_t<20, 0x3> SMCR_TS_4_3; // Trigger selection
    static constexpr uint32_t SMCR_SMS_BIT3 = 0x10000; // Slave mode selection - bit 3
    static constexpr uint32_t SMCR_ETP = 0x8000; // External trigger polarity
    static constexpr uint32_t SMCR_ECE = 0x4000; // External clock enable
    typedef bit_field_t<12, 0x3> SMCR_ETPS; // External trigger prescaler
    typedef bit_field_t<8, 0xf> SMCR_ETF; // External trigger filter
    static constexpr uint32_t SMCR_MSM = 0x80; // Master/Slave mode
    typedef bit_field_t<4, 0x7> SMCR_TS_2_0; // Trigger selection
    static constexpr uint32_t SMCR_OCCS = 0x8; // OCREF clear selection
    typedef bit_field_t<0, 0x7> SMCR_SMS; // Slave mode selection

    static constexpr uint32_t DIER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DIER_TERRIE = 0x800000; // Transition error interrupt enable
    static constexpr uint32_t DIER_IERRIE = 0x400000; // Index error interrupt enable
    static constexpr uint32_t DIER_DIRIE = 0x200000; // Direction change interrupt enable
    static constexpr uint32_t DIER_IDXIE = 0x100000; // Index interrupt enable
    static constexpr uint32_t DIER_TDE = 0x4000; // Trigger DMA request enable
    static constexpr uint32_t DIER_CC4DE = 0x1000; // Capture/Compare 4 DMA request enable
    static constexpr uint32_t DIER_CC3DE = 0x800; // Capture/Compare 3 DMA request enable
    static constexpr uint32_t DIER_CC2DE = 0x400; // Capture/Compare 2 DMA request enable
    static constexpr uint32_t DIER_CC1DE = 0x200; // Capture/Compare 1 DMA request enable
    static constexpr uint32_t DIER_UDE = 0x100; // Update DMA request enable
    static constexpr uint32_t DIER_TIE = 0x40; // Trigger interrupt enable
    static constexpr uint32_t DIER_CC4IE = 0x10; // Capture/Compare 4 interrupt enable
    static constexpr uint32_t DIER_CC3IE = 0x8; // Capture/Compare 3 interrupt enable
    static constexpr uint32_t DIER_CC2IE = 0x4; // Capture/Compare 2 interrupt enable
    static constexpr uint32_t DIER_CC1IE = 0x2; // Capture/Compare 1 interrupt enable
    static constexpr uint32_t DIER_UIE = 0x1; // Update interrupt enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_TERRF = 0x800000; // Transition error interrupt flag
    static constexpr uint32_t SR_IERRF = 0x400000; // Index error interrupt flag
    static constexpr uint32_t SR_DIRF = 0x200000; // Direction change interrupt flag
    static constexpr uint32_t SR_IDXF = 0x100000; // Index interrupt flag
    static constexpr uint32_t SR_CC4OF = 0x1000; // Capture/Compare 4 overcapture flag
    static constexpr uint32_t SR_CC3OF = 0x800; // Capture/Compare 3 overcapture flag
    static constexpr uint32_t SR_CC2OF = 0x400; // Capture/compare 2 overcapture flag
    static constexpr uint32_t SR_CC1OF = 0x200; // Capture/Compare 1 overcapture flag
    static constexpr uint32_t SR_TIF = 0x40; // Trigger interrupt flag
    static constexpr uint32_t SR_CC4IF = 0x10; // Capture/Compare 4 interrupt flag
    static constexpr uint32_t SR_CC3IF = 0x8; // Capture/Compare 3 interrupt flag
    static constexpr uint32_t SR_CC2IF = 0x4; // Capture/Compare 2 interrupt flag
    static constexpr uint32_t SR_CC1IF = 0x2; // Capture/compare 1 interrupt flag
    static constexpr uint32_t SR_UIF = 0x1; // Update interrupt flag

    static constexpr uint32_t EGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t EGR_TG = 0x40; // Trigger generation
    static constexpr uint32_t EGR_CC4G = 0x10; // Capture/compare 4 generation
    static constexpr uint32_t EGR_CC3G = 0x8; // Capture/compare 3 generation
    static constexpr uint32_t EGR_CC2G = 0x4; // Capture/compare 2 generation
    static constexpr uint32_t EGR_CC1G = 0x2; // Capture/compare 1 generation
    static constexpr uint32_t EGR_UG = 0x1; // Update generation

    static constexpr uint32_t CCMR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> CCMR1_CC1S; // Capture/Compare 1 selection
    typedef bit_field_t<8, 0x3> CCMR1_CC2S; // Capture/Compare 2 selection
    typedef bit_field_t<4, 0xf> CCMR1_IC1F; // Input capture 1 filter
    typedef bit_field_t<2, 0x3> CCMR1_IC1PSC; // Input capture 1 prescaler
    typedef bit_field_t<12, 0xf> CCMR1_IC2F; // Input capture 2 filter
    typedef bit_field_t<10, 0x3> CCMR1_IC2PSC; // Input capture 2 prescaler
    static constexpr uint32_t CCMR1_OC1CE = 0x80; // Output compare 1 clear enable
    static constexpr uint32_t CCMR1_OC1FE = 0x4; // Output compare 1 fast enable
    typedef bit_field_t<4, 0x7> CCMR1_OC1M; // Output compare 1 mode
    static constexpr uint32_t CCMR1_OC1M_BIT3 = 0x10000; // Output Compare 1 mode - bit 3
    static constexpr uint32_t CCMR1_OC1PE = 0x8; // Output compare 1 preload enable
    static constexpr uint32_t CCMR1_OC2CE = 0x8000; // Output compare 2 clear enable
    static constexpr uint32_t CCMR1_OC2FE = 0x400; // Output compare 2 fast enable
    typedef bit_field_t<12, 0x7> CCMR1_OC2M; // Output compare 2 mode
    static constexpr uint32_t CCMR1_OC2M_BIT3 = 0x1000000; // Output Compare 2 mode - bit 3
    static constexpr uint32_t CCMR1_OC2PE = 0x800; // Output compare 2 preload enable

    static constexpr uint32_t CCMR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> CCMR2_CC3S; // Capture/Compare 3 selection
    typedef bit_field_t<8, 0x3> CCMR2_CC4S; // Capture/Compare 4 selection
    typedef bit_field_t<4, 0xf> CCMR2_IC3F; // Input capture 3 filter
    typedef bit_field_t<2, 0x3> CCMR2_IC3PSC; // Input capture 3 prescaler
    typedef bit_field_t<12, 0xf> CCMR2_IC4F; // Input capture 4 filter
    typedef bit_field_t<10, 0x3> CCMR2_IC4PSC; // Input capture 4 prescaler
    static constexpr uint32_t CCMR2_OC3CE = 0x80; // Output compare 3 clear enable
    static constexpr uint32_t CCMR2_OC3FE = 0x4; // Output compare 3 fast enable
    typedef bit_field_t<4, 0x7> CCMR2_OC3M; // Output compare 3 mode
    static constexpr uint32_t CCMR2_OC3M_BIT3 = 0x10000; // Output Compare 1 mode - bit 3
    static constexpr uint32_t CCMR2_OC3PE = 0x8; // Output compare 3 preload enable
    static constexpr uint32_t CCMR2_OC4CE = 0x8000; // Output compare 4 clear enable
    static constexpr uint32_t CCMR2_OC4FE = 0x400; // Output compare 4 fast enable
    typedef bit_field_t<12, 0x7> CCMR2_OC4M; // Output compare 4 mode
    static constexpr uint32_t CCMR2_OC4M_BIT3 = 0x1000000; // Output Compare 2 mode - bit 3
    static constexpr uint32_t CCMR2_OC4PE = 0x800; // Output compare 4 preload enable

    static constexpr uint32_t CCER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCER_CC4NP = 0x8000; // Capture/Compare 4 output Polarity
    static constexpr uint32_t CCER_CC4P = 0x2000; // Capture/Compare 3 output Polarity
    static constexpr uint32_t CCER_CC4E = 0x1000; // Capture/Compare 4 output enable
    static constexpr uint32_t CCER_CC3NP = 0x800; // Capture/Compare 3 output Polarity
    static constexpr uint32_t CCER_CC3P = 0x200; // Capture/Compare 3 output Polarity
    static constexpr uint32_t CCER_CC3E = 0x100; // Capture/Compare 3 output enable
    static constexpr uint32_t CCER_CC2NP = 0x80; // Capture/Compare 2 output Polarity
    static constexpr uint32_t CCER_CC2P = 0x20; // Capture/Compare 2 output Polarity
    static constexpr uint32_t CCER_CC2E = 0x10; // Capture/Compare 2 output enable
    static constexpr uint32_t CCER_CC1NP = 0x8; // Capture/Compare 1 output Polarity
    static constexpr uint32_t CCER_CC1P = 0x2; // Capture/Compare 1 output Polarity
    static constexpr uint32_t CCER_CC1E = 0x1; // Capture/Compare 1 output enable

    static constexpr uint32_t CNT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0x7fff> CNT_CNT_H; // Most significant part counter value (on TIM2 and TIM5)
    typedef bit_field_t<0, 0xffff> CNT_CNT_L; // Least significant part of counter value
    static constexpr uint32_t CNT_CNT_BIT31 = 0x80000000; // Most significant bit of counter value (on TIM2 and TIM5)

    static constexpr uint32_t PSC_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> PSC_PSC; // Prescaler value

    static constexpr uint32_t ARR_RESET_VALUE = 0xffffffff; // Reset value
    typedef bit_field_t<16, 0xffff> ARR_ARR_H; // High Auto-reload value (TIM2 only)
    typedef bit_field_t<0, 0xffff> ARR_ARR_L; // Low Auto-reload value


    static constexpr uint32_t CCR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> CCR1_CCR1_H; // High Capture/Compare 1 value (TIM2 only)
    typedef bit_field_t<0, 0xffff> CCR1_CCR1_L; // Low Capture/Compare 1 value

    static constexpr uint32_t CCR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> CCR2_CCR2_H; // High Capture/Compare 2 value (TIM2 only)
    typedef bit_field_t<0, 0xffff> CCR2_CCR2_L; // Low Capture/Compare 2 value

    static constexpr uint32_t CCR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> CCR3_CCR3_H; // High Capture/Compare value (TIM2 only)
    typedef bit_field_t<0, 0xffff> CCR3_CCR3_L; // Low Capture/Compare value

    static constexpr uint32_t CCR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> CCR4_CCR4_H; // High Capture/Compare value (TIM2 only)
    typedef bit_field_t<0, 0xffff> CCR4_CCR4_L; // Low Capture/Compare value


    static constexpr uint32_t ECR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x7> ECR_PWPRSC; // Pulse width prescaler
    typedef bit_field_t<16, 0xff> ECR_PW; // Pulse width
    typedef bit_field_t<6, 0x3> ECR_IPOS; // Index positioning
    static constexpr uint32_t ECR_FIDX = 0x20; // First index
    typedef bit_field_t<3, 0x3> ECR_IBLK; // Index blanking This bit indicates if the Index event is conditioned by the tim_ti3 input
    typedef bit_field_t<1, 0x3> ECR_IDIR; // Index direction
    static constexpr uint32_t ECR_IE = 0x1; // Index enable

    static constexpr uint32_t TISEL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xf> TISEL_TI4SEL; // Selects tim_ti4[0..15] input
    typedef bit_field_t<16, 0xf> TISEL_TI3SEL; // Selects tim_ti3[0..15] input
    typedef bit_field_t<8, 0xf> TISEL_TI2SEL; // Selects tim_ti2[0..15] input
    typedef bit_field_t<0, 0xf> TISEL_TI1SEL; // Selects tim_ti1[0..15] input

    static constexpr uint32_t AF1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<14, 0xf> AF1_ETRSEL; // etr_in source selection

    static constexpr uint32_t AF2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0x7> AF2_OCRSEL; // ocref_clr source selection


    static constexpr uint32_t DCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xf> DCR_DBSS; // DMA burst source selection
    typedef bit_field_t<8, 0x1f> DCR_DBL; // DMA burst length
    typedef bit_field_t<0, 0x1f> DCR_DBA; // DMA base address

    static constexpr uint32_t DMAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DMAR_ETRSEL; // DMA register for burst accesses
};

// TIM6: General-purpose-timers

struct stm32u5xx_tim6_t
{
    volatile uint32_t CR1; // control register 1
    volatile uint32_t CR2; // control register 2
    reserved_t<0x1> _0x8;
    volatile uint32_t DIER; // DMA/Interrupt enable register
    volatile uint32_t SR; // status register
    volatile uint32_t EGR; // event generation register
    reserved_t<0x3> _0x18;
    volatile uint32_t CNT; // counter
    volatile uint32_t PSC; // prescaler
    volatile uint32_t ARR; // auto-reload register

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR1_DITHEN = 0x1000; // Dithering Enable
    static constexpr uint32_t CR1_UIFREMAP = 0x800; // UIF status bit remapping
    static constexpr uint32_t CR1_ARPE = 0x80; // Auto-reload preload enable
    static constexpr uint32_t CR1_OPM = 0x8; // One-pulse mode
    static constexpr uint32_t CR1_URS = 0x4; // Update request source
    static constexpr uint32_t CR1_UDIS = 0x2; // Update disable
    static constexpr uint32_t CR1_CEN = 0x1; // Counter enable

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0x7> CR2_MMS; // Master mode selection


    static constexpr uint32_t DIER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DIER_UDE = 0x100; // UDE
    static constexpr uint32_t DIER_UIE = 0x1; // UIE

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_UIF = 0x1; // UIF

    static constexpr uint32_t EGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t EGR_UG = 0x1; // UG


    static constexpr uint32_t CNT_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CNT_UIFCPY = 0x80000000; // UIFCPY
    typedef bit_field_t<0, 0xffff> CNT_CNT; // CNT

    static constexpr uint32_t PSC_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> PSC_PSC; // PSC

    static constexpr uint32_t ARR_RESET_VALUE = 0xffff; // Reset value
    typedef bit_field_t<0, 0x7ffff> ARR_ARR; // ARR
};

// TIM15: General purpose timers

struct stm32u5xx_tim15_t
{
    volatile uint32_t CR1; // control register 1
    volatile uint32_t CR2; // control register 2
    volatile uint32_t SMCR; // slave mode control register
    volatile uint32_t DIER; // DMA/Interrupt enable register
    volatile uint32_t SR; // status register
    volatile uint32_t EGR; // event generation register
    volatile uint32_t CCMR1; // capture/compare mode register (output mode)
    reserved_t<0x1> _0x1c;
    volatile uint32_t CCER; // capture/compare enable register
    volatile uint32_t CNT; // counter
    volatile uint32_t PSC; // prescaler
    volatile uint32_t ARR; // auto-reload register
    volatile uint32_t RCR; // repetition counter register
    volatile uint32_t CCR1; // capture/compare register 1
    volatile uint32_t CCR2; // capture/compare register 2
    reserved_t<0x2> _0x3c;
    volatile uint32_t BDTR; // break and dead-time register
    reserved_t<0x3> _0x48;
    volatile uint32_t DTR2; // timer deadtime register 2
    reserved_t<0x1> _0x58;
    volatile uint32_t TISEL; // input selection register
    volatile uint32_t AF1; // alternate function register 1
    volatile uint32_t AF2; // alternate function register 2
    reserved_t<0xdd> _0x68;
    volatile uint32_t DCR; // DMA control register
    volatile uint32_t DMAR; // DMA address for full transfer

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR1_DITHEN = 0x1000; // Dithering enable
    static constexpr uint32_t CR1_UIFREMAP = 0x800; // UIF status bit remapping
    typedef bit_field_t<8, 0x3> CR1_CKD; // Clock division
    static constexpr uint32_t CR1_ARPE = 0x80; // Auto-reload preload enable
    static constexpr uint32_t CR1_OPM = 0x8; // One-pulse mode
    static constexpr uint32_t CR1_URS = 0x4; // Update request source
    static constexpr uint32_t CR1_UDIS = 0x2; // Update disable
    static constexpr uint32_t CR1_CEN = 0x1; // Counter enable

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR2_OIS2 = 0x400; // Output idle state 2 (OC2 output)
    static constexpr uint32_t CR2_OIS1N = 0x200; // Output Idle state 1
    static constexpr uint32_t CR2_OIS1 = 0x100; // Output Idle state 1
    static constexpr uint32_t CR2_TI1S = 0x80; // TI1 selection
    typedef bit_field_t<4, 0x3> CR2_MMS; // Master mode selection
    static constexpr uint32_t CR2_CCDS = 0x8; // Capture/compare DMA selection
    static constexpr uint32_t CR2_CCUS = 0x4; // Capture/compare control update selection
    static constexpr uint32_t CR2_CCPC = 0x1; // Capture/compare preloaded control

    static constexpr uint32_t SMCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<20, 0x3> SMCR_TS_4_3; // Trigger selection
    static constexpr uint32_t SMCR_SMS_3 = 0x10000; // Slave mode selection
    static constexpr uint32_t SMCR_CC1DE = 0x200; // Capture/Compare 1 DMA request enable
    static constexpr uint32_t SMCR_MSM = 0x80; // Master/slave mode
    typedef bit_field_t<4, 0x7> SMCR_TS_2_0; // Trigger selection
    typedef bit_field_t<0, 0x7> SMCR_SMS; // Slave mode selection

    static constexpr uint32_t DIER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DIER_TDE = 0x4000; // Trigger DMA request enable
    static constexpr uint32_t DIER_COMDE = 0x2000; // COM DMA request enable
    static constexpr uint32_t DIER_CC2DE = 0x400; // Capture/Compare 2 DMA request enable
    static constexpr uint32_t DIER_CC1DE = 0x200; // Capture/Compare 1 DMA request enable
    static constexpr uint32_t DIER_UDE = 0x100; // Update DMA request enable
    static constexpr uint32_t DIER_BIE = 0x80; // Break interrupt enable
    static constexpr uint32_t DIER_TIE = 0x40; // Trigger interrupt enable
    static constexpr uint32_t DIER_COMIE = 0x20; // COM interrupt enable
    static constexpr uint32_t DIER_CC2IE = 0x4; // Capture/Compare 2 interrupt enable
    static constexpr uint32_t DIER_CC1IE = 0x2; // Capture/Compare 1 interrupt enable
    static constexpr uint32_t DIER_UIE = 0x1; // Update interrupt enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_CC2OF = 0x400; // Capture/Compare 2 overcapture flag
    static constexpr uint32_t SR_CC1OF = 0x200; // Capture/Compare 1 overcapture flag
    static constexpr uint32_t SR_BIF = 0x80; // Break interrupt flag
    static constexpr uint32_t SR_TIF = 0x40; // Trigger interrupt flag
    static constexpr uint32_t SR_COMIF = 0x20; // COM interrupt flag
    static constexpr uint32_t SR_CC2IF = 0x4; // Capture/Compare 2 interrupt flag
    static constexpr uint32_t SR_CC1IF = 0x2; // Capture/compare 1 interrupt flag
    static constexpr uint32_t SR_UIF = 0x1; // Update interrupt flag

    static constexpr uint32_t EGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t EGR_BG = 0x80; // Break generation
    static constexpr uint32_t EGR_TG = 0x40; // Trigger generation
    static constexpr uint32_t EGR_COMG = 0x20; // Capture/Compare control update generation
    static constexpr uint32_t EGR_CC2G = 0x4; // Capture/Compare 2 generation
    static constexpr uint32_t EGR_CC1G = 0x2; // Capture/compare 1 generation
    static constexpr uint32_t EGR_UG = 0x1; // Update generation

    static constexpr uint32_t CCMR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> CCMR1_CC1S; // Capture/Compare 1 selection
    typedef bit_field_t<8, 0x3> CCMR1_CC2S; // Capture/Compare 2 selection
    typedef bit_field_t<4, 0xf> CCMR1_IC1F; // Input capture 1 filter
    typedef bit_field_t<2, 0x3> CCMR1_IC1PSC; // Input capture 1 prescaler
    typedef bit_field_t<12, 0xf> CCMR1_IC2F; // Input capture 2 filter
    typedef bit_field_t<10, 0x3> CCMR1_IC2PSC; // Input capture 2 prescaler
    static constexpr uint32_t CCMR1_OC1CE = 0x80; // Output compare 1 clear enable
    static constexpr uint32_t CCMR1_OC1FE = 0x4; // Output Compare 1 fast enable
    typedef bit_field_t<4, 0x7> CCMR1_OC1M; // Output Compare 1 mode
    static constexpr uint32_t CCMR1_OC1M_BIT3 = 0x10000; // Output Compare 1 mode
    static constexpr uint32_t CCMR1_OC1PE = 0x8; // Output Compare 1 preload enable
    static constexpr uint32_t CCMR1_OC2FE = 0x400; // Output compare 2 fast enable
    typedef bit_field_t<12, 0x7> CCMR1_OC2M; // Output Compare 2 mode
    static constexpr uint32_t CCMR1_OC2M_BIT3 = 0x1000000; // Output Compare 2 mode - bit 3
    static constexpr uint32_t CCMR1_OC2PE = 0x800; // Output Compare 2 preload enable


    static constexpr uint32_t CCER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCER_CC2NP = 0x80; // Capture/Compare 2 complementary output polarity
    static constexpr uint32_t CCER_CC2P = 0x20; // Capture/Compare 2 output polarity
    static constexpr uint32_t CCER_CC2E = 0x10; // Capture/Compare 2 output enable
    static constexpr uint32_t CCER_CC1NP = 0x8; // Capture/Compare 1 output Polarity
    static constexpr uint32_t CCER_CC1NE = 0x4; // Capture/Compare 1 complementary output enable
    static constexpr uint32_t CCER_CC1P = 0x2; // Capture/Compare 1 output Polarity
    static constexpr uint32_t CCER_CC1E = 0x1; // Capture/Compare 1 output enable

    static constexpr uint32_t CNT_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CNT_UIFCPY = 0x80000000; // UIF Copy
    typedef bit_field_t<0, 0xffff> CNT_CNT; // counter value

    static constexpr uint32_t PSC_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> PSC_PSC; // Prescaler value

    static constexpr uint32_t ARR_RESET_VALUE = 0xffff; // Reset value
    typedef bit_field_t<0, 0xfffff> ARR_ARR; // Auto-reload value

    static constexpr uint32_t RCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RCR_REP; // Repetition counter value

    static constexpr uint32_t CCR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfffff> CCR1_CCR1; // Capture/Compare 1 value

    static constexpr uint32_t CCR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfffff> CCR2_CCR1; // Capture/Compare 1 value


    static constexpr uint32_t BDTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BDTR_BKBID = 0x10000000; // Break Bidirectional
    static constexpr uint32_t BDTR_BKDSRM = 0x4000000; // Break Disarm
    typedef bit_field_t<16, 0xf> BDTR_BKF; // Break filter
    static constexpr uint32_t BDTR_MOE = 0x8000; // Main output enable
    static constexpr uint32_t BDTR_AOE = 0x4000; // Automatic output enable
    static constexpr uint32_t BDTR_BKP = 0x2000; // Break polarity
    static constexpr uint32_t BDTR_BKE = 0x1000; // Break enable
    static constexpr uint32_t BDTR_OSSR = 0x800; // Off-state selection for Run mode
    static constexpr uint32_t BDTR_OSSI = 0x400; // Off-state selection for Idle mode
    typedef bit_field_t<8, 0x3> BDTR_LOCK; // Lock configuration
    typedef bit_field_t<0, 0xff> BDTR_DTG; // Dead-time generator setup


    static constexpr uint32_t DTR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DTR2_DTPE = 0x20000; // Deadtime preload enable
    static constexpr uint32_t DTR2_DTAE = 0x10000; // Deadtime asymmetric enable
    typedef bit_field_t<0, 0xff> DTR2_DTGF; // Dead-time falling edge generator setup


    static constexpr uint32_t TISEL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xf> TISEL_TI2SEL; // selects tim_ti2_in[0..15] input
    typedef bit_field_t<0, 0xf> TISEL_TI1SEL; // selects tim_ti1_in[0..15] input

    static constexpr uint32_t AF1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AF1_BKCMP4P = 0x2000; // tim_brk_cmp4 input polarity
    static constexpr uint32_t AF1_BKCMP3P = 0x1000; // tim_brk_cmp3 input polarity
    static constexpr uint32_t AF1_BKCMP2P = 0x800; // tim_brk_cmp2 input polarity
    static constexpr uint32_t AF1_BKCMP1P = 0x400; // tim_brk_cmp1 input polarity
    static constexpr uint32_t AF1_BKINP = 0x200; // TIMx_BKIN input polarity
    static constexpr uint32_t AF1_BKCMP7E = 0x80; // tim_brk_cmp7 enable
    static constexpr uint32_t AF1_BKCMP6E = 0x40; // tim_brk_cmp6 enable
    static constexpr uint32_t AF1_BKCMP5E = 0x20; // tim_brk_cmp5 enable
    static constexpr uint32_t AF1_BKCMP4E = 0x10; // tim_brk_cmp4 enable
    static constexpr uint32_t AF1_BKCMP3E = 0x8; // tim_brk_cmp3 enable
    static constexpr uint32_t AF1_BKCMP2E = 0x4; // tim_brk_cmp2 enable
    static constexpr uint32_t AF1_BKCMP1E = 0x2; // tim_brk_cmp1 enable
    static constexpr uint32_t AF1_BKINE = 0x1; // TIMx_BKIN input enable

    static constexpr uint32_t AF2_RESET_VALUE = 0x1; // Reset value
    typedef bit_field_t<16, 0x7> AF2_OCRSEL; // ocref_clr source selection


    static constexpr uint32_t DCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xf> DCR_DBSS; // DMA burst source selection
    typedef bit_field_t<8, 0x1f> DCR_DBL; // DMA burst length
    typedef bit_field_t<0, 0x1f> DCR_DBA; // DMA base address

    static constexpr uint32_t DMAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DMAR_DMAB; // DMA register for burst accesses
};

// TIM16: General purpose timers

struct stm32u5xx_tim16_t
{
    volatile uint32_t CR1; // control register 1
    volatile uint32_t CR2; // control register 2
    reserved_t<0x1> _0x8;
    volatile uint32_t DIER; // DMA/interrupt enable register
    volatile uint32_t SR; // status register
    volatile uint32_t EGR; // event generation register
    volatile uint32_t CCMR1; // capture/compare mode register (output mode)
    reserved_t<0x1> _0x1c;
    volatile uint32_t CCER; // capture/compare enable register
    volatile uint32_t CNT; // counter
    volatile uint32_t PSC; // prescaler
    volatile uint32_t ARR; // auto-reload register
    volatile uint32_t RCR; // repetition counter register
    volatile uint32_t CCR1; // capture/compare register 1
    reserved_t<0x3> _0x38;
    volatile uint32_t BDTR; // break and dead-time register
    reserved_t<0x3> _0x48;
    volatile uint32_t DTR2; // timer deadtime register 2
    reserved_t<0x1> _0x58;
    volatile uint32_t TISEL; // TIM17 option register 1
    volatile uint32_t AF1; // alternate function register 1
    volatile uint32_t AF2; // alternate function register 2
    reserved_t<0xdd> _0x68;
    volatile uint32_t DCR; // DMA control register
    volatile uint32_t DMAR; // TIM17 option register 1

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR1_UIFREMAP = 0x800; // UIF status bit remapping
    typedef bit_field_t<8, 0x3> CR1_CKD; // Clock division
    static constexpr uint32_t CR1_ARPE = 0x80; // Auto-reload preload enable
    static constexpr uint32_t CR1_OPM = 0x8; // One pulse mode
    static constexpr uint32_t CR1_URS = 0x4; // Update request source
    static constexpr uint32_t CR1_UDIS = 0x2; // Update disable
    static constexpr uint32_t CR1_CEN = 0x1; // Counter enable

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR2_OIS1N = 0x200; // Output Idle state 1
    static constexpr uint32_t CR2_OIS1 = 0x100; // Output Idle state 1
    static constexpr uint32_t CR2_CCDS = 0x8; // Capture/compare DMA selection
    static constexpr uint32_t CR2_CCUS = 0x4; // Capture/compare control update selection
    static constexpr uint32_t CR2_CCPC = 0x1; // Capture/compare preloaded control


    static constexpr uint32_t DIER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DIER_COMDE = 0x2000; // COM DMA request enable
    static constexpr uint32_t DIER_CC1DE = 0x200; // Capture/Compare 1 DMA request enable
    static constexpr uint32_t DIER_UDE = 0x100; // Update DMA request enable
    static constexpr uint32_t DIER_BIE = 0x80; // Break interrupt enable
    static constexpr uint32_t DIER_COMIE = 0x20; // COM interrupt enable
    static constexpr uint32_t DIER_CC1IE = 0x2; // Capture/Compare 1 interrupt enable
    static constexpr uint32_t DIER_UIE = 0x1; // Update interrupt enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_CC1OF = 0x200; // CC1OF
    static constexpr uint32_t SR_BIF = 0x80; // Break interrupt flag
    static constexpr uint32_t SR_COMIF = 0x20; // COM interrupt flag
    static constexpr uint32_t SR_CC1IF = 0x2; // Capture/Compare 1 interrupt flag
    static constexpr uint32_t SR_UIF = 0x1; // Update interrupt flag

    static constexpr uint32_t EGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t EGR_BG = 0x80; // Break generation
    static constexpr uint32_t EGR_COMG = 0x20; // Capture/Compare control update generation
    static constexpr uint32_t EGR_CC1G = 0x2; // Capture/compare 1 generation
    static constexpr uint32_t EGR_UG = 0x1; // Update generation

    static constexpr uint32_t CCMR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> CCMR1_CC1S; // Capture/Compare 1 selection
    typedef bit_field_t<4, 0xf> CCMR1_IC1F; // Input capture 1 filter
    typedef bit_field_t<2, 0x3> CCMR1_IC1PSC; // Input capture 1 prescaler
    static constexpr uint32_t CCMR1_OC1CE = 0x80; // Output Compare 1 clear enable
    static constexpr uint32_t CCMR1_OC1FE = 0x4; // Output Compare 1 fast enable
    typedef bit_field_t<4, 0x7> CCMR1_OC1M; // Output Compare 1 mode
    static constexpr uint32_t CCMR1_OC1M_2 = 0x10000; // Output Compare 1 mode
    static constexpr uint32_t CCMR1_OC1PE = 0x8; // Output Compare 1 preload enable


    static constexpr uint32_t CCER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCER_CC1NP = 0x8; // Capture/Compare 1 output Polarity
    static constexpr uint32_t CCER_CC1NE = 0x4; // Capture/Compare 1 complementary output enable
    static constexpr uint32_t CCER_CC1P = 0x2; // Capture/Compare 1 output Polarity
    static constexpr uint32_t CCER_CC1E = 0x1; // Capture/Compare 1 output enable

    static constexpr uint32_t CNT_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CNT_UIFCPY = 0x80000000; // UIF Copy
    typedef bit_field_t<0, 0xffff> CNT_CNT; // CNT

    static constexpr uint32_t PSC_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> PSC_PSC; // Prescaler value

    static constexpr uint32_t ARR_RESET_VALUE = 0xffff; // Reset value
    typedef bit_field_t<0, 0xfffff> ARR_ARR; // Auto-reload value

    static constexpr uint32_t RCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RCR_REP; // Repetition counter value

    static constexpr uint32_t CCR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfffff> CCR1_CCR1; // Capture/Compare 1 value


    static constexpr uint32_t BDTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BDTR_BKBID = 0x10000000; // Break Bidirectional
    static constexpr uint32_t BDTR_BKDSRM = 0x4000000; // Break Disarm
    static constexpr uint32_t BDTR_MOE = 0x8000; // Main output enable
    static constexpr uint32_t BDTR_AOE = 0x4000; // Automatic output enable
    static constexpr uint32_t BDTR_BKP = 0x2000; // Break polarity
    static constexpr uint32_t BDTR_BKE = 0x1000; // Break enable
    static constexpr uint32_t BDTR_OSSR = 0x800; // Off-state selection for Run mode
    static constexpr uint32_t BDTR_OSSI = 0x400; // Off-state selection for Idle mode
    typedef bit_field_t<8, 0x3> BDTR_LOCK; // Lock configuration
    typedef bit_field_t<0, 0xff> BDTR_DTG; // Dead-time generator setup


    static constexpr uint32_t DTR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DTR2_DTPE = 0x20000; // Deadtime preload enable
    static constexpr uint32_t DTR2_DTAE = 0x10000; // Deadtime asymmetric enable
    typedef bit_field_t<0, 0xff> DTR2_DTGF; // Deadtime asymmetric enable


    static constexpr uint32_t TISEL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> TISEL_TI1SEL; // selects tim_ti1_in[0..15] input

    static constexpr uint32_t AF1_RESET_VALUE = 0x1; // Reset value
    static constexpr uint32_t AF1_BKCMP4P = 0x2000; // tim_brk_cmp4 input polarity
    static constexpr uint32_t AF1_BKCMP3P = 0x1000; // tim_brk_cmp3 input polarity
    static constexpr uint32_t AF1_BKCMP2P = 0x800; // tim_brk_cmp2 input polarity
    static constexpr uint32_t AF1_BKCMP1P = 0x400; // tim_brk_cmp1 input polarity
    static constexpr uint32_t AF1_BKINP = 0x200; // TIMx_BKIN input polarity
    static constexpr uint32_t AF1_BKCMP7E = 0x80; // tim_brk_cmp7 enable
    static constexpr uint32_t AF1_BKCMP6E = 0x40; // tim_brk_cmp6 enable
    static constexpr uint32_t AF1_BKCMP5E = 0x20; // tim_brk_cmp5 enable
    static constexpr uint32_t AF1_BKCMP4E = 0x10; // tim_brk_cmp4 enable
    static constexpr uint32_t AF1_BKCMP3E = 0x8; // tim_brk_cmp3 enable
    static constexpr uint32_t AF1_BKCMP2E = 0x4; // tim_brk_cmp2 enable
    static constexpr uint32_t AF1_BKCMP1E = 0x2; // tim_brk_cmp1 enable
    static constexpr uint32_t AF1_BKINE = 0x1; // TIMx_BKIN input enable

    static constexpr uint32_t AF2_RESET_VALUE = 0x1; // Reset value
    typedef bit_field_t<16, 0x7> AF2_OCRSEL; // tim_ocref_clr source selection


    static constexpr uint32_t DCR_RESET_VALUE = 0x1; // Reset value
    typedef bit_field_t<16, 0xf> DCR_DBSS; // DMA burst source selection
    typedef bit_field_t<8, 0x1f> DCR_DBL; // DMA burst length
    typedef bit_field_t<0, 0x1f> DCR_DBA; // DMA base address

    static constexpr uint32_t DMAR_RESET_VALUE = 0x1; // Reset value
    typedef bit_field_t<0, 0xffffffff> DMAR_DMAB; // DMA register for burst accesses
};

template<>
struct peripheral_t<STM32U5xx, SEC_TIM1>
{
    static constexpr periph_t P = SEC_TIM1;
    using T = stm32u5xx_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, SEC_TIM8>
{
    static constexpr periph_t P = SEC_TIM8;
    using T = stm32u5xx_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, TIM1>
{
    static constexpr periph_t P = TIM1;
    using T = stm32u5xx_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, TIM8>
{
    static constexpr periph_t P = TIM8;
    using T = stm32u5xx_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, SEC_TIM2>
{
    static constexpr periph_t P = SEC_TIM2;
    using T = stm32u5xx_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, SEC_TIM3>
{
    static constexpr periph_t P = SEC_TIM3;
    using T = stm32u5xx_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, SEC_TIM4>
{
    static constexpr periph_t P = SEC_TIM4;
    using T = stm32u5xx_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, SEC_TIM5>
{
    static constexpr periph_t P = SEC_TIM5;
    using T = stm32u5xx_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, TIM2>
{
    static constexpr periph_t P = TIM2;
    using T = stm32u5xx_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, TIM3>
{
    static constexpr periph_t P = TIM3;
    using T = stm32u5xx_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, TIM4>
{
    static constexpr periph_t P = TIM4;
    using T = stm32u5xx_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, TIM5>
{
    static constexpr periph_t P = TIM5;
    using T = stm32u5xx_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, SEC_TIM6>
{
    static constexpr periph_t P = SEC_TIM6;
    using T = stm32u5xx_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, SEC_TIM7>
{
    static constexpr periph_t P = SEC_TIM7;
    using T = stm32u5xx_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, TIM6>
{
    static constexpr periph_t P = TIM6;
    using T = stm32u5xx_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, TIM7>
{
    static constexpr periph_t P = TIM7;
    using T = stm32u5xx_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, SEC_TIM15>
{
    static constexpr periph_t P = SEC_TIM15;
    using T = stm32u5xx_tim15_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, TIM15>
{
    static constexpr periph_t P = TIM15;
    using T = stm32u5xx_tim15_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, SEC_TIM16>
{
    static constexpr periph_t P = SEC_TIM16;
    using T = stm32u5xx_tim16_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, SEC_TIM17>
{
    static constexpr periph_t P = SEC_TIM17;
    using T = stm32u5xx_tim16_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, TIM16>
{
    static constexpr periph_t P = TIM16;
    using T = stm32u5xx_tim16_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, TIM17>
{
    static constexpr periph_t P = TIM17;
    using T = stm32u5xx_tim16_t;
    static T& V;
};

using sec_tim1_t = peripheral_t<svd, SEC_TIM1>;
using sec_tim15_t = peripheral_t<svd, SEC_TIM15>;
using sec_tim16_t = peripheral_t<svd, SEC_TIM16>;
using sec_tim17_t = peripheral_t<svd, SEC_TIM17>;
using sec_tim2_t = peripheral_t<svd, SEC_TIM2>;
using sec_tim3_t = peripheral_t<svd, SEC_TIM3>;
using sec_tim4_t = peripheral_t<svd, SEC_TIM4>;
using sec_tim5_t = peripheral_t<svd, SEC_TIM5>;
using sec_tim6_t = peripheral_t<svd, SEC_TIM6>;
using sec_tim7_t = peripheral_t<svd, SEC_TIM7>;
using sec_tim8_t = peripheral_t<svd, SEC_TIM8>;
using tim1_t = peripheral_t<svd, TIM1>;
using tim15_t = peripheral_t<svd, TIM15>;
using tim16_t = peripheral_t<svd, TIM16>;
using tim17_t = peripheral_t<svd, TIM17>;
using tim2_t = peripheral_t<svd, TIM2>;
using tim3_t = peripheral_t<svd, TIM3>;
using tim4_t = peripheral_t<svd, TIM4>;
using tim5_t = peripheral_t<svd, TIM5>;
using tim6_t = peripheral_t<svd, TIM6>;
using tim7_t = peripheral_t<svd, TIM7>;
using tim8_t = peripheral_t<svd, TIM8>;

template<int INST> struct tim_traits {};

template<> struct tim_traits<1>
{
    using tim = tim1_t;
    static constexpr signal_t BKIN = TIM1_BKIN;
    static constexpr signal_t BKIN2 = TIM1_BKIN2;
    static constexpr signal_t CH1 = TIM1_CH1;
    static constexpr signal_t CH1N = TIM1_CH1N;
    static constexpr signal_t CH2 = TIM1_CH2;
    static constexpr signal_t CH2N = TIM1_CH2N;
    static constexpr signal_t CH3 = TIM1_CH3;
    static constexpr signal_t CH3N = TIM1_CH3N;
    static constexpr signal_t CH4 = TIM1_CH4;
    static constexpr signal_t CH4N = TIM1_CH4N;
    static constexpr signal_t ETR = TIM1_ETR;
};

template<> struct tim_traits<15>
{
    using tim = tim15_t;
    static constexpr signal_t BKIN = TIM15_BKIN;
    static constexpr signal_t CH1 = TIM15_CH1;
    static constexpr signal_t CH1N = TIM15_CH1N;
    static constexpr signal_t CH2 = TIM15_CH2;
};

template<> struct tim_traits<16>
{
    using tim = tim16_t;
    static constexpr signal_t BKIN = TIM16_BKIN;
    static constexpr signal_t CH1 = TIM16_CH1;
    static constexpr signal_t CH1N = TIM16_CH1N;
};

template<> struct tim_traits<17>
{
    using tim = tim17_t;
    static constexpr signal_t BKIN = TIM17_BKIN;
    static constexpr signal_t CH1 = TIM17_CH1;
    static constexpr signal_t CH1N = TIM17_CH1N;
};

template<> struct tim_traits<2>
{
    using tim = tim2_t;
    static constexpr signal_t CH1 = TIM2_CH1;
    static constexpr signal_t CH2 = TIM2_CH2;
    static constexpr signal_t CH3 = TIM2_CH3;
    static constexpr signal_t CH4 = TIM2_CH4;
    static constexpr signal_t ETR = TIM2_ETR;
};

template<> struct tim_traits<3>
{
    using tim = tim3_t;
    static constexpr signal_t CH1 = TIM3_CH1;
    static constexpr signal_t CH2 = TIM3_CH2;
    static constexpr signal_t CH3 = TIM3_CH3;
    static constexpr signal_t CH4 = TIM3_CH4;
    static constexpr signal_t ETR = TIM3_ETR;
};

template<> struct tim_traits<4>
{
    using tim = tim4_t;
    static constexpr signal_t CH1 = TIM4_CH1;
    static constexpr signal_t CH2 = TIM4_CH2;
    static constexpr signal_t CH3 = TIM4_CH3;
    static constexpr signal_t CH4 = TIM4_CH4;
    static constexpr signal_t ETR = TIM4_ETR;
};

template<> struct tim_traits<5>
{
    using tim = tim5_t;
    static constexpr signal_t CH1 = TIM5_CH1;
    static constexpr signal_t CH2 = TIM5_CH2;
    static constexpr signal_t CH3 = TIM5_CH3;
    static constexpr signal_t CH4 = TIM5_CH4;
    static constexpr signal_t ETR = TIM5_ETR;
};

template<> struct tim_traits<8>
{
    using tim = tim8_t;
    static constexpr signal_t BKIN = TIM8_BKIN;
    static constexpr signal_t BKIN2 = TIM8_BKIN2;
    static constexpr signal_t CH1 = TIM8_CH1;
    static constexpr signal_t CH1N = TIM8_CH1N;
    static constexpr signal_t CH2 = TIM8_CH2;
    static constexpr signal_t CH2N = TIM8_CH2N;
    static constexpr signal_t CH3 = TIM8_CH3;
    static constexpr signal_t CH3N = TIM8_CH3N;
    static constexpr signal_t CH4 = TIM8_CH4;
    static constexpr signal_t CH4N = TIM8_CH4N;
    static constexpr signal_t ETR = TIM8_ETR;
};
