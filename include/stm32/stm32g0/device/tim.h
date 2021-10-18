#pragma once

////
//
//      STM32G0 TIM peripherals
//
///

// TIM1: Advanced-timers

struct stm32g030_tim1_t
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
    volatile uint32_t RCR; // repetition counter register
    volatile uint32_t CCR1; // capture/compare register 1
    volatile uint32_t CCR2; // capture/compare register 2
    volatile uint32_t CCR3; // capture/compare register 3
    volatile uint32_t CCR4; // capture/compare register 4
    volatile uint32_t BDTR; // break and dead-time register
    volatile uint32_t DCR; // DMA control register
    volatile uint32_t DMAR; // DMA address for full transfer
    volatile uint32_t OR1; // option register 1
    volatile uint32_t CCMR3; // capture/compare mode register 2 (output mode)
    volatile uint32_t CCR5; // capture/compare register 4
    volatile uint32_t CCR6; // capture/compare register 4
    volatile uint32_t AF1; // DMA address for full transfer
    volatile uint32_t AF2; // DMA address for full transfer
    volatile uint32_t TISEL; // TIM1 timer input selection register

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR1_CEN = 0x1; // Counter enable
    static constexpr uint32_t CR1_OPM = 0x8; // One-pulse mode
    static constexpr uint32_t CR1_UDIS = 0x2; // Update disable
    static constexpr uint32_t CR1_URS = 0x4; // Update request source
    static constexpr uint32_t CR1_DIR = 0x10; // Direction
    typedef bit_field_t<5, 0x3> CR1_CMS; // Center-aligned mode selection
    static constexpr uint32_t CR1_ARPE = 0x80; // Auto-reload preload enable
    typedef bit_field_t<8, 0x3> CR1_CKD; // Clock division
    static constexpr uint32_t CR1_UIFREMAP = 0x800; // UIF status bit remapping

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<20, 0xf> CR2_MMS2; // Master mode selection 2
    static constexpr uint32_t CR2_OIS6 = 0x40000; // Output Idle state 6 (OC6 output)
    static constexpr uint32_t CR2_OIS5 = 0x10000; // Output Idle state 5 (OC5 output)
    static constexpr uint32_t CR2_OIS4 = 0x4000; // Output Idle state 4
    static constexpr uint32_t CR2_OIS3N = 0x2000; // Output Idle state 3
    static constexpr uint32_t CR2_OIS3 = 0x1000; // Output Idle state 3
    static constexpr uint32_t CR2_OIS2N = 0x800; // Output Idle state 2
    static constexpr uint32_t CR2_OIS2 = 0x400; // Output Idle state 2
    static constexpr uint32_t CR2_OIS1N = 0x200; // Output Idle state 1
    static constexpr uint32_t CR2_OIS1 = 0x100; // Output Idle state 1
    static constexpr uint32_t CR2_TI1S = 0x80; // TI1 selection
    typedef bit_field_t<4, 0x7> CR2_MMS; // Master mode selection
    static constexpr uint32_t CR2_CCDS = 0x8; // Capture/compare DMA selection
    static constexpr uint32_t CR2_CCUS = 0x4; // Capture/compare control update selection
    static constexpr uint32_t CR2_CCPC = 0x1; // Capture/compare preloaded control

    static constexpr uint32_t SMCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> SMCR_SMS; // Slave mode selection
    static constexpr uint32_t SMCR_OCCS = 0x8; // OCREF clear selection
    typedef bit_field_t<4, 0x7> SMCR_TS_4; // Trigger selection
    static constexpr uint32_t SMCR_MSM = 0x80; // Master/Slave mode
    typedef bit_field_t<8, 0xf> SMCR_ETF; // External trigger filter
    typedef bit_field_t<12, 0x3> SMCR_ETPS; // External trigger prescaler
    static constexpr uint32_t SMCR_ECE = 0x4000; // External clock enable
    static constexpr uint32_t SMCR_ETP = 0x8000; // External trigger polarity
    static constexpr uint32_t SMCR_SMS_3 = 0x10000; // Slave mode selection - bit 3
    typedef bit_field_t<20, 0x3> SMCR_TS; // Trigger selection

    static constexpr uint32_t DIER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DIER_UIE = 0x1; // Update interrupt enable
    static constexpr uint32_t DIER_CC1IE = 0x2; // Capture/Compare 1 interrupt enable
    static constexpr uint32_t DIER_CC2IE = 0x4; // Capture/Compare 2 interrupt enable
    static constexpr uint32_t DIER_CC3IE = 0x8; // Capture/Compare 3 interrupt enable
    static constexpr uint32_t DIER_CC4IE = 0x10; // Capture/Compare 4 interrupt enable
    static constexpr uint32_t DIER_COMIE = 0x20; // COM interrupt enable
    static constexpr uint32_t DIER_TIE = 0x40; // Trigger interrupt enable
    static constexpr uint32_t DIER_BIE = 0x80; // Break interrupt enable
    static constexpr uint32_t DIER_UDE = 0x100; // Update DMA request enable
    static constexpr uint32_t DIER_CC1DE = 0x200; // Capture/Compare 1 DMA request enable
    static constexpr uint32_t DIER_CC2DE = 0x400; // Capture/Compare 2 DMA request enable
    static constexpr uint32_t DIER_CC3DE = 0x800; // Capture/Compare 3 DMA request enable
    static constexpr uint32_t DIER_CC4DE = 0x1000; // Capture/Compare 4 DMA request enable
    static constexpr uint32_t DIER_COMDE = 0x2000; // COM DMA request enable
    static constexpr uint32_t DIER_TDE = 0x4000; // Trigger DMA request enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_UIF = 0x1; // Update interrupt flag
    static constexpr uint32_t SR_CC1IF = 0x2; // Capture/compare 1 interrupt flag
    static constexpr uint32_t SR_CC2IF = 0x4; // Capture/Compare 2 interrupt flag
    static constexpr uint32_t SR_CC3IF = 0x8; // Capture/Compare 3 interrupt flag
    static constexpr uint32_t SR_CC4IF = 0x10; // Capture/Compare 4 interrupt flag
    static constexpr uint32_t SR_COMIF = 0x20; // COM interrupt flag
    static constexpr uint32_t SR_TIF = 0x40; // Trigger interrupt flag
    static constexpr uint32_t SR_BIF = 0x80; // Break interrupt flag
    static constexpr uint32_t SR_B2IF = 0x100; // Break 2 interrupt flag
    static constexpr uint32_t SR_CC1OF = 0x200; // Capture/Compare 1 overcapture flag
    static constexpr uint32_t SR_CC2OF = 0x400; // Capture/compare 2 overcapture flag
    static constexpr uint32_t SR_CC3OF = 0x800; // Capture/Compare 3 overcapture flag
    static constexpr uint32_t SR_CC4OF = 0x1000; // Capture/Compare 4 overcapture flag
    static constexpr uint32_t SR_SBIF = 0x2000; // System Break interrupt flag
    static constexpr uint32_t SR_CC5IF = 0x10000; // Compare 5 interrupt flag
    static constexpr uint32_t SR_CC6IF = 0x20000; // Compare 6 interrupt flag

    static constexpr uint32_t EGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t EGR_UG = 0x1; // Update generation
    static constexpr uint32_t EGR_CC1G = 0x2; // Capture/compare 1 generation
    static constexpr uint32_t EGR_CC2G = 0x4; // Capture/compare 2 generation
    static constexpr uint32_t EGR_CC3G = 0x8; // Capture/compare 3 generation
    static constexpr uint32_t EGR_CC4G = 0x10; // Capture/compare 4 generation
    static constexpr uint32_t EGR_COMG = 0x20; // Capture/Compare control update generation
    static constexpr uint32_t EGR_TG = 0x40; // Trigger generation
    static constexpr uint32_t EGR_BG = 0x80; // Break generation
    static constexpr uint32_t EGR_B2G = 0x100; // Break 2 generation

    static constexpr uint32_t CCMR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> CCMR1_CC1S; // Capture/Compare 1 selection
    typedef bit_field_t<8, 0x3> CCMR1_CC2S; // Capture/Compare 2 selection
    static constexpr uint32_t CCMR1_OC1CE = 0x80; // Output Compare 1 clear enable
    static constexpr uint32_t CCMR1_OC1FE = 0x4; // Output Compare 1 fast enable
    typedef bit_field_t<4, 0x7> CCMR1_OC1M; // Output Compare 1 mode
    static constexpr uint32_t CCMR1_OC1M_3 = 0x10000; // Output Compare 1 mode - bit 3
    static constexpr uint32_t CCMR1_OC1PE = 0x8; // Output Compare 1 preload enable
    static constexpr uint32_t CCMR1_OC2CE = 0x8000; // Output Compare 2 clear enable
    static constexpr uint32_t CCMR1_OC2FE = 0x400; // Output Compare 2 fast enable
    typedef bit_field_t<12, 0x7> CCMR1_OC2M; // Output Compare 2 mode
    static constexpr uint32_t CCMR1_OC2M_3 = 0x1000000; // Output Compare 2 mode - bit 3
    static constexpr uint32_t CCMR1_OC2PE = 0x800; // Output Compare 2 preload enable

    static constexpr uint32_t CCMR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> CCMR2_CC3S; // Capture/Compare 3 selection
    typedef bit_field_t<8, 0x3> CCMR2_CC4S; // Capture/Compare 4 selection
    static constexpr uint32_t CCMR2_OC3CE = 0x80; // Output compare 3 clear enable
    static constexpr uint32_t CCMR2_OC3FE = 0x4; // Output compare 3 fast enable
    typedef bit_field_t<4, 0x7> CCMR2_OC3M; // Output compare 3 mode
    static constexpr uint32_t CCMR2_OC3M_3 = 0x10000; // Output Compare 3 mode - bit 3
    static constexpr uint32_t CCMR2_OC3PE = 0x8; // Output compare 3 preload enable
    static constexpr uint32_t CCMR2_OC4CE = 0x8000; // Output compare 4 clear enable
    static constexpr uint32_t CCMR2_OC4FE = 0x400; // Output compare 4 fast enable
    typedef bit_field_t<12, 0x7> CCMR2_OC4M; // Output compare 4 mode
    static constexpr uint32_t CCMR2_OC4M_3 = 0x1000000; // Output Compare 4 mode - bit 3
    static constexpr uint32_t CCMR2_OC4PE = 0x800; // Output compare 4 preload enable

    static constexpr uint32_t CCER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCER_CC1E = 0x1; // Capture/Compare 1 output enable
    static constexpr uint32_t CCER_CC1P = 0x2; // Capture/Compare 1 output Polarity
    static constexpr uint32_t CCER_CC1NE = 0x4; // Capture/Compare 1 complementary output enable
    static constexpr uint32_t CCER_CC1NP = 0x8; // Capture/Compare 1 output Polarity
    static constexpr uint32_t CCER_CC2E = 0x10; // Capture/Compare 2 output enable
    static constexpr uint32_t CCER_CC2P = 0x20; // Capture/Compare 2 output Polarity
    static constexpr uint32_t CCER_CC2NE = 0x40; // Capture/Compare 2 complementary output enable
    static constexpr uint32_t CCER_CC2NP = 0x80; // Capture/Compare 2 output Polarity
    static constexpr uint32_t CCER_CC3E = 0x100; // Capture/Compare 3 output enable
    static constexpr uint32_t CCER_CC3P = 0x200; // Capture/Compare 3 output Polarity
    static constexpr uint32_t CCER_CC3NE = 0x400; // Capture/Compare 3 complementary output enable
    static constexpr uint32_t CCER_CC3NP = 0x800; // Capture/Compare 3 output Polarity
    static constexpr uint32_t CCER_CC4E = 0x1000; // Capture/Compare 4 output enable
    static constexpr uint32_t CCER_CC4P = 0x2000; // Capture/Compare 3 output Polarity
    static constexpr uint32_t CCER_CC4NP = 0x8000; // Capture/Compare 4 complementary output polarity
    static constexpr uint32_t CCER_CC5E = 0x10000; // Capture/Compare 5 output enable
    static constexpr uint32_t CCER_CC5P = 0x20000; // Capture/Compare 5 output polarity
    static constexpr uint32_t CCER_CC6E = 0x100000; // Capture/Compare 6 output enable
    static constexpr uint32_t CCER_CC6P = 0x200000; // Capture/Compare 6 output polarity

    static constexpr uint32_t CNT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNT_CNT; // counter value
    static constexpr uint32_t CNT_UIFCPY = 0x80000000; // UIF copy

    static constexpr uint32_t PSC_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> PSC_PSC; // Prescaler value

    static constexpr uint32_t ARR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> ARR_ARR; // Auto-reload value

    static constexpr uint32_t RCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> RCR_REP; // Repetition counter value

    static constexpr uint32_t CCR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR1_CCR1; // Capture/Compare 1 value

    static constexpr uint32_t CCR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR2_CCR2; // Capture/Compare 2 value

    static constexpr uint32_t CCR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR3_CCR3; // Capture/Compare value

    static constexpr uint32_t CCR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR4_CCR4; // Capture/Compare value

    static constexpr uint32_t BDTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> BDTR_DTG; // Dead-time generator setup
    typedef bit_field_t<8, 0x3> BDTR_LOCK; // Lock configuration
    static constexpr uint32_t BDTR_OSSI = 0x400; // Off-state selection for Idle mode
    static constexpr uint32_t BDTR_OSSR = 0x800; // Off-state selection for Run mode
    static constexpr uint32_t BDTR_BKE = 0x1000; // Break enable
    static constexpr uint32_t BDTR_BKP = 0x2000; // Break polarity
    static constexpr uint32_t BDTR_AOE = 0x4000; // Automatic output enable
    static constexpr uint32_t BDTR_MOE = 0x8000; // Main output enable
    typedef bit_field_t<16, 0xf> BDTR_BKF; // Break filter
    typedef bit_field_t<20, 0xf> BDTR_BK2F; // Break 2 filter
    static constexpr uint32_t BDTR_BK2E = 0x1000000; // Break 2 enable
    static constexpr uint32_t BDTR_BK2P = 0x2000000; // Break 2 polarity
    static constexpr uint32_t BDTR_BKDSRM = 0x4000000; // Break Disarm
    static constexpr uint32_t BDTR_BK2DSRM = 0x8000000; // Break2 Disarm
    static constexpr uint32_t BDTR_BKBID = 0x10000000; // Break Bidirectional
    static constexpr uint32_t BDTR_BK2ID = 0x20000000; // Break2 bidirectional

    static constexpr uint32_t DCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0x1f> DCR_DBL; // DMA burst length
    typedef bit_field_t<0, 0x1f> DCR_DBA; // DMA base address

    static constexpr uint32_t DMAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DMAR_DMAB; // DMA register for burst accesses

    static constexpr uint32_t OR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OR1_OCREF_CLR = 0x1; // Ocref_clr source selection

    static constexpr uint32_t CCMR3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCMR3_OC6M_BIT3 = 0x1000000; // Output Compare 6 mode bit 3
    static constexpr uint32_t CCMR3_OC5M_BIT3 = 0x10000; // Output Compare 5 mode bit 3
    static constexpr uint32_t CCMR3_OC6CE = 0x8000; // Output compare 6 clear enable
    typedef bit_field_t<12, 0x7> CCMR3_OC6M; // Output compare 6 mode
    static constexpr uint32_t CCMR3_OC6PE = 0x800; // Output compare 6 preload enable
    static constexpr uint32_t CCMR3_OC6FE = 0x400; // Output compare 6 fast enable
    static constexpr uint32_t CCMR3_OC5CE = 0x80; // Output compare 5 clear enable
    typedef bit_field_t<4, 0x7> CCMR3_OC5M; // Output compare 5 mode
    static constexpr uint32_t CCMR3_OC5PE = 0x8; // Output compare 5 preload enable
    static constexpr uint32_t CCMR3_OC5FE = 0x4; // Output compare 5 fast enable

    static constexpr uint32_t CCR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR5_CCR5; // Capture/Compare value
    static constexpr uint32_t CCR5_GC5C1 = 0x20000000; // Group Channel 5 and Channel 1
    static constexpr uint32_t CCR5_GC5C2 = 0x40000000; // Group Channel 5 and Channel 2
    static constexpr uint32_t CCR5_GC5C3 = 0x80000000; // Group Channel 5 and Channel 3

    static constexpr uint32_t CCR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR6_CCR6; // Capture/Compare value

    static constexpr uint32_t AF1_RESET_VALUE = 0x1; // Reset value
    static constexpr uint32_t AF1_BKINE = 0x1; // BRK BKIN input enable
    static constexpr uint32_t AF1_BKCMP1E = 0x2; // BRK COMP1 enable
    static constexpr uint32_t AF1_BKCMP2E = 0x4; // BRK COMP2 enable
    static constexpr uint32_t AF1_BKINP = 0x200; // BRK BKIN input polarity
    static constexpr uint32_t AF1_BKCMP1P = 0x400; // BRK COMP1 input polarity
    static constexpr uint32_t AF1_BKCMP2P = 0x800; // BRK COMP2 input polarity
    typedef bit_field_t<14, 0x7> AF1_ETRSEL; // ETR source selection

    static constexpr uint32_t AF2_RESET_VALUE = 0x1; // Reset value
    static constexpr uint32_t AF2_BK2INE = 0x1; // BRK2 BKIN input enable
    static constexpr uint32_t AF2_BK2CMP1E = 0x2; // BRK2 COMP1 enable
    static constexpr uint32_t AF2_BK2CMP2E = 0x4; // BRK2 COMP2 enable
    static constexpr uint32_t AF2_BK2DFBK0E = 0x100; // BRK2 DFSDM_BREAK0 enable
    static constexpr uint32_t AF2_BK2INP = 0x200; // BRK2 BKIN input polarity
    static constexpr uint32_t AF2_BK2CMP1P = 0x400; // BRK2 COMP1 input polarity
    static constexpr uint32_t AF2_BK2CMP2P = 0x800; // BRK2 COMP2 input polarity

    static constexpr uint32_t TISEL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> TISEL_TI1SEL3_0; // selects TI1[0] to TI1[15] input
    typedef bit_field_t<8, 0xf> TISEL_TI2SEL3_0; // selects TI2[0] to TI2[15] input
    typedef bit_field_t<16, 0xf> TISEL_TI3SEL3_0; // selects TI3[0] to TI3[15] input
    typedef bit_field_t<24, 0xf> TISEL_TI4SEL3_0; // selects TI4[0] to TI4[15] input
};

// TIM1: Advanced-timers

struct stm32g050_tim1_t
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
    volatile uint32_t RCR; // repetition counter register
    volatile uint32_t CCR1; // capture/compare register 1
    volatile uint32_t CCR2; // capture/compare register 2
    volatile uint32_t CCR3; // capture/compare register 3
    volatile uint32_t CCR4; // capture/compare register 4
    volatile uint32_t BDTR; // break and dead-time register
    volatile uint32_t DCR; // DMA control register
    volatile uint32_t DMAR; // DMA address for full transfer
    reserved_t<0x1> _0x50;
    volatile uint32_t CCMR3; // capture/compare mode register 2 (output mode)
    volatile uint32_t CCR5; // capture/compare register 4
    volatile uint32_t CCR6; // capture/compare register 6
    volatile uint32_t AF1; // TIM1 alternate function option register 1
    volatile uint32_t AF2; // TIM1 alternate function option register 2
    volatile uint32_t TISEL; // TIM1 timer input selection register

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR1_CEN = 0x1; // Counter enable Note: External clock, gated mode and encoder mode can work only if the CEN bit has been previously set by software. However trigger mode can set the CEN bit automatically by hardware.
    static constexpr uint32_t CR1_UDIS = 0x2; // Update disable This bit is set and cleared by software to enable/disable UEV event generation. Counter overflow/underflow Setting the UG bit Update generation through the slave mode controller Buffered registers are then loaded with their preload values.
    static constexpr uint32_t CR1_URS = 0x4; // Update request source This bit is set and cleared by software to select the UEV event sources. Counter overflow/underflow Setting the UG bit Update generation through the slave mode controller
    static constexpr uint32_t CR1_OPM = 0x8; // One pulse mode
    static constexpr uint32_t CR1_DIR = 0x10; // Direction Note: This bit is read only when the timer is configured in Center-aligned mode or Encoder mode.
    typedef bit_field_t<5, 0x3> CR1_CMS; // Center-aligned mode selection Note: Switch from edge-aligned mode to center-aligned mode as long as the counter is enabled (CEN=1) is not allowed
    static constexpr uint32_t CR1_ARPE = 0x80; // Auto-reload preload enable
    typedef bit_field_t<8, 0x3> CR1_CKD; // Clock division This bit-field indicates the division ratio between the timer clock (CK_INT) frequency and the dead-time and sampling clock (tDTS)used by the dead-time generators and the digital filters (ETR, TIx): Note: tDTS = 1/fDTS, tCK_INT = 1/fCK_INT.
    static constexpr uint32_t CR1_UIFREMAP = 0x800; // UIF status bit remapping

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR2_CCPC = 0x1; // Capture/compare preloaded control Note: This bit acts only on channels that have a complementary output.
    static constexpr uint32_t CR2_CCUS = 0x4; // Capture/compare control update selection Note: This bit acts only on channels that have a complementary output.
    static constexpr uint32_t CR2_CCDS = 0x8; // Capture/compare DMA selection
    typedef bit_field_t<4, 0x7> CR2_MMS; // Master mode selection These bits allow selected information to be sent in master mode to slave timers for synchronization (TRGO). The combination is as follows: Note: The clock of the slave timer or ADC must be enabled prior to receive events from the master timer, and must not be changed on-the-fly while triggers are received from the master timer.
    static constexpr uint32_t CR2_TI1S = 0x80; // TI1 selection
    static constexpr uint32_t CR2_OIS1 = 0x100; // Output Idle state 1 (OC1 output) Note: This bit can not be modified as long as LOCK level 1, 2 or 3 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t CR2_OIS1N = 0x200; // Output Idle state 1 (OC1N output) Note: This bit can not be modified as long as LOCK level 1, 2 or 3 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t CR2_OIS2 = 0x400; // Output Idle state 2 (OC2 output) Refer to OIS1 bit
    static constexpr uint32_t CR2_OIS2N = 0x800; // Output Idle state 2 (OC2N output) Refer to OIS1N bit
    static constexpr uint32_t CR2_OIS3 = 0x1000; // Output Idle state 3 (OC3 output) Refer to OIS1 bit
    static constexpr uint32_t CR2_OIS3N = 0x2000; // Output Idle state 3 (OC3N output) Refer to OIS1N bit
    static constexpr uint32_t CR2_OIS4 = 0x4000; // Output Idle state 4 (OC4 output) Refer to OIS1 bit
    static constexpr uint32_t CR2_OIS5 = 0x10000; // Output Idle state 5 (OC5 output) Refer to OIS1 bit
    static constexpr uint32_t CR2_OIS6 = 0x40000; // Output Idle state 6 (OC6 output) Refer to OIS1 bit
    typedef bit_field_t<20, 0xf> CR2_MMS2; // Master mode selection 2 These bits allow the information to be sent to ADC for synchronization (TRGO2) to be selected. The combination is as follows: Note: The clock of the slave timer or ADC must be enabled prior to receive events from the master timer, and must not be changed on-the-fly while triggers are received from the master timer.

    static constexpr uint32_t SMCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> SMCR_SMS1; // Slave mode selection When external signals are selected the active edge of the trigger signal (TRGI) is linked to the polarity selected on the external input (see Input Control register and Control Register description. Note: The gated mode must not be used if TI1F_ED is selected as the trigger input (TS=00100). Indeed, TI1F_ED outputs 1 pulse for each transition on TI1F, whereas the gated mode checks the level of the trigger signal. Note: The clock of the slave peripherals (timer, ADC, ...) receiving the TRGO or the TRGO2 signals must be enabled prior to receive events from the master timer, and the clock frequency (prescaler) must not be changed on-the-fly while triggers are received from the master timer.
    static constexpr uint32_t SMCR_OCCS = 0x8; // OCREF clear selection This bit is used to select the OCREF clear source.
    typedef bit_field_t<4, 0x7> SMCR_TS1; // Trigger selection This bit-field selects the trigger input to be used to synchronize the counter. Others: Reserved See for more details on ITRx meaning for each Timer. Note: These bits must be changed only when they are not used (e.g. when SMS=000) to avoid wrong edge detections at the transition.
    static constexpr uint32_t SMCR_MSM = 0x80; // Master/slave mode
    typedef bit_field_t<8, 0xf> SMCR_ETF; // External trigger filter This bit-field then defines the frequency used to sample ETRP signal and the length of the digital filter applied to ETRP. The digital filter is made of an event counter in which N consecutive events are needed to validate a transition on the output:
    typedef bit_field_t<12, 0x3> SMCR_ETPS; // External trigger prescaler External trigger signal ETRP frequency must be at most 1/4 of fCK_INT frequency. A prescaler can be enabled to reduce ETRP frequency. It is useful when inputting fast external clocks.
    static constexpr uint32_t SMCR_ECE = 0x4000; // External clock enable This bit enables External clock mode 2. Note: Setting the ECE bit has the same effect as selecting external clock mode 1 with TRGI connected to ETRF (SMS=111 and TS=00111). It is possible to simultaneously use external clock mode 2 with the following slave modes: reset mode, gated mode and trigger mode. Nevertheless, TRGI must not be connected to ETRF in this case (TS bits must not be 00111). If external clock mode 1 and external clock mode 2 are enabled at the same time, the external clock input is ETRF.
    static constexpr uint32_t SMCR_ETP = 0x8000; // External trigger polarity This bit selects whether ETR or ETR is used for trigger operations
    static constexpr uint32_t SMCR_SMS2 = 0x10000; // Slave mode selection When external signals are selected the active edge of the trigger signal (TRGI) is linked to the polarity selected on the external input (see Input Control register and Control Register description. Note: The gated mode must not be used if TI1F_ED is selected as the trigger input (TS=00100). Indeed, TI1F_ED outputs 1 pulse for each transition on TI1F, whereas the gated mode checks the level of the trigger signal. Note: The clock of the slave peripherals (timer, ADC, ...) receiving the TRGO or the TRGO2 signals must be enabled prior to receive events from the master timer, and the clock frequency (prescaler) must not be changed on-the-fly while triggers are received from the master timer.
    typedef bit_field_t<20, 0x3> SMCR_TS2; // Trigger selection This bit-field selects the trigger input to be used to synchronize the counter. Others: Reserved See for more details on ITRx meaning for each Timer. Note: These bits must be changed only when they are not used (e.g. when SMS=000) to avoid wrong edge detections at the transition.

    static constexpr uint32_t DIER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DIER_UIE = 0x1; // Update interrupt enable
    static constexpr uint32_t DIER_CC1IE = 0x2; // Capture/Compare 1 interrupt enable
    static constexpr uint32_t DIER_CC2IE = 0x4; // Capture/Compare 2 interrupt enable
    static constexpr uint32_t DIER_CC3IE = 0x8; // Capture/Compare 3 interrupt enable
    static constexpr uint32_t DIER_CC4IE = 0x10; // Capture/Compare 4 interrupt enable
    static constexpr uint32_t DIER_COMIE = 0x20; // COM interrupt enable
    static constexpr uint32_t DIER_TIE = 0x40; // Trigger interrupt enable
    static constexpr uint32_t DIER_BIE = 0x80; // Break interrupt enable
    static constexpr uint32_t DIER_UDE = 0x100; // Update DMA request enable
    static constexpr uint32_t DIER_CC1DE = 0x200; // Capture/Compare 1 DMA request enable
    static constexpr uint32_t DIER_CC2DE = 0x400; // Capture/Compare 2 DMA request enable
    static constexpr uint32_t DIER_CC3DE = 0x800; // Capture/Compare 3 DMA request enable
    static constexpr uint32_t DIER_CC4DE = 0x1000; // Capture/Compare 4 DMA request enable
    static constexpr uint32_t DIER_COMDE = 0x2000; // COM DMA request enable
    static constexpr uint32_t DIER_TDE = 0x4000; // Trigger DMA request enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_UIF = 0x1; // Update interrupt flag This bit is set by hardware on an update event. It is cleared by software. At overflow or underflow regarding the repetition counter value (update if repetition counter = 0) and if the UDIS=0 in the TIMx_CR1 register. When CNT is reinitialized by software using the UG bit in TIMx_EGR register, if URS=0 and UDIS=0 in the TIMx_CR1 register. When CNT is reinitialized by a trigger event (refer to control register (TIM1_SMCRTIMx_SMCR)N/A), if URS=0 and UDIS=0 in the TIMx_CR1 register.
    static constexpr uint32_t SR_CC1IF = 0x2; // Capture/Compare 1 interrupt flag This flag is set by hardware. It is cleared by software (input capture or output compare mode) or by reading the TIMx_CCR1 register (input capture mode only). If channel CC1 is configured as output: this flag is set when he content of the counter TIMx_CNT matches the content of the TIMx_CCR1 register. When the content of TIMx_CCR1 is greater than the content of TIMx_ARR, the CC1IF bit goes high on the counter overflow (in up-counting and up/down-counting modes) or underflow (in down-counting mode). There are 3 possible options for flag setting in center-aligned mode, refer to the CMS bits in the TIMx_CR1 register for the full description. If channel CC1 is configured as input: this bit is set when counter value has been captured in TIMx_CCR1 register (an edge has been detected on IC1, as per the edge sensitivity defined with the CC1P and CC1NP bits setting, in TIMx_CCER).
    static constexpr uint32_t SR_CC2IF = 0x4; // Capture/Compare 2 interrupt flag Refer to CC1IF description
    static constexpr uint32_t SR_CC3IF = 0x8; // Capture/Compare 3 interrupt flag Refer to CC1IF description
    static constexpr uint32_t SR_CC4IF = 0x10; // Capture/Compare 4 interrupt flag Refer to CC1IF description
    static constexpr uint32_t SR_COMIF = 0x20; // COM interrupt flag This flag is set by hardware on COM event (when Capture/compare Control bits - CCxE, CCxNE, OCxM - have been updated). It is cleared by software.
    static constexpr uint32_t SR_TIF = 0x40; // Trigger interrupt flag This flag is set by hardware on the TRG trigger event (active edge detected on TRGI input when the slave mode controller is enabled in all modes but gated mode. It is set when the counter starts or stops when gated mode is selected. It is cleared by software.
    static constexpr uint32_t SR_BIF = 0x80; // Break interrupt flag This flag is set by hardware as soon as the break input goes active. It can be cleared by software if the break input is not active.
    static constexpr uint32_t SR_B2IF = 0x100; // Break 2 interrupt flag This flag is set by hardware as soon as the break 2 input goes active. It can be cleared by software if the break 2 input is not active.
    static constexpr uint32_t SR_CC1OF = 0x200; // Capture/Compare 1 overcapture flag This flag is set by hardware only when the corresponding channel is configured in input capture mode. It is cleared by software by writing it to &#39;0.
    static constexpr uint32_t SR_CC2OF = 0x400; // Capture/Compare 2 overcapture flag Refer to CC1OF description
    static constexpr uint32_t SR_CC3OF = 0x800; // Capture/Compare 3 overcapture flag Refer to CC1OF description
    static constexpr uint32_t SR_CC4OF = 0x1000; // Capture/Compare 4 overcapture flag Refer to CC1OF description
    static constexpr uint32_t SR_SBIF = 0x2000; // System Break interrupt flag This flag is set by hardware as soon as the system break input goes active. It can be cleared by software if the system break input is not active. This flag must be reset to re-start PWM operation.
    static constexpr uint32_t SR_CC5IF = 0x10000; // Compare 5 interrupt flag Refer to CC1IF description (Note: Channel 5 can only be configured as output)
    static constexpr uint32_t SR_CC6IF = 0x20000; // Compare 6 interrupt flag Refer to CC1IF description (Note: Channel 6 can only be configured as output)

    static constexpr uint32_t EGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t EGR_UG = 0x1; // Update generation This bit can be set by software, it is automatically cleared by hardware.
    static constexpr uint32_t EGR_CC1G = 0x2; // Capture/Compare 1 generation This bit is set by software in order to generate an event, it is automatically cleared by hardware. If channel CC1 is configured as output: CC1IF flag is set, Corresponding interrupt or DMA request is sent if enabled. If channel CC1 is configured as input: The current value of the counter is captured in TIMx_CCR1 register. The CC1IF flag is set, the corresponding interrupt or DMA request is sent if enabled. The CC1OF flag is set if the CC1IF flag was already high.
    static constexpr uint32_t EGR_CC2G = 0x4; // Capture/Compare 2 generation Refer to CC1G description
    static constexpr uint32_t EGR_CC3G = 0x8; // Capture/Compare 3 generation Refer to CC1G description
    static constexpr uint32_t EGR_CC4G = 0x10; // Capture/Compare 4 generation Refer to CC1G description
    static constexpr uint32_t EGR_COMG = 0x20; // Capture/Compare control update generation This bit can be set by software, it is automatically cleared by hardware Note: This bit acts only on channels having a complementary output.
    static constexpr uint32_t EGR_TG = 0x40; // Trigger generation This bit is set by software in order to generate an event, it is automatically cleared by hardware.
    static constexpr uint32_t EGR_BG = 0x80; // Break generation This bit is set by software in order to generate an event, it is automatically cleared by hardware.
    static constexpr uint32_t EGR_B2G = 0x100; // Break 2 generation This bit is set by software in order to generate an event, it is automatically cleared by hardware.

    static constexpr uint32_t CCMR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> CCMR1_CC1S; // Capture/Compare 1 selection This bit-field defines the direction of the channel (input/output) as well as the used input. Note: CC1S bits are writable only when the channel is OFF (CC1E = &#39;0 in TIMx_CCER).
    typedef bit_field_t<8, 0x3> CCMR1_CC2S; // Capture/Compare 2 selection This bit-field defines the direction of the channel (input/output) as well as the used input. Note: CC2S bits are writable only when the channel is OFF (CC2E = &#39;0 in TIMx_CCER).
    typedef bit_field_t<4, 0xf> CCMR1_IC1F; // Input capture 1 filter This bit-field defines the frequency used to sample TI1 input and the length of the digital filter applied to TI1. The digital filter is made of an event counter in which N consecutive events are needed to validate a transition on the output:
    typedef bit_field_t<2, 0x3> CCMR1_IC1PSC; // Input capture 1 prescaler This bit-field defines the ratio of the prescaler acting on CC1 input (IC1). The prescaler is reset as soon as CC1E=0 (TIMx_CCER register).
    typedef bit_field_t<12, 0xf> CCMR1_IC2F; // Input capture 2 filter Refer to IC1F[3:0] description.
    typedef bit_field_t<10, 0x3> CCMR1_IC2PSC; // Input capture 2 prescaler Refer to IC1PSC[1:0] description.
    static constexpr uint32_t CCMR1_OC1CE = 0x80; // Output Compare 1 clear enable
    static constexpr uint32_t CCMR1_OC1FE = 0x4; // Output Compare 1 fast enable This bit decreases the latency between a trigger event and a transition on the timer output. It must be used in one-pulse mode (OPM bit set in TIMx_CR1 register), to have the output pulse starting as soon as possible after the starting trigger.
    typedef bit_field_t<4, 0x7> CCMR1_OC1M1; // Output Compare 1 mode These bits define the behavior of the output reference signal OC1REF from which OC1 and OC1N are derived. OC1REF is active high whereas OC1 and OC1N active level depends on CC1P and CC1NP bits. Note: These bits can not be modified as long as LOCK level 3 has been programmed (LOCK bits in TIMx_BDTR register) and CC1S=00 (the channel is configured in output). Note: In PWM mode, the OCREF level changes only when the result of the comparison changes or when the output compare mode switches from frozen mode to PWM mode. Note: On channels having a complementary output, this bit field is preloaded. If the CCPC bit is set in the TIMx_CR2 register then the OC1M active bits take the new value from the preloaded bits only when a COM event is generated. Note: The OC1M[3] bit is not contiguous, located in bit 16.
    static constexpr uint32_t CCMR1_OC1M2 = 0x10000; // Output Compare 1 mode These bits define the behavior of the output reference signal OC1REF from which OC1 and OC1N are derived. OC1REF is active high whereas OC1 and OC1N active level depends on CC1P and CC1NP bits. Note: These bits can not be modified as long as LOCK level 3 has been programmed (LOCK bits in TIMx_BDTR register) and CC1S=00 (the channel is configured in output). Note: In PWM mode, the OCREF level changes only when the result of the comparison changes or when the output compare mode switches from frozen mode to PWM mode. Note: On channels having a complementary output, this bit field is preloaded. If the CCPC bit is set in the TIMx_CR2 register then the OC1M active bits take the new value from the preloaded bits only when a COM event is generated. Note: The OC1M[3] bit is not contiguous, located in bit 16.
    static constexpr uint32_t CCMR1_OC1PE = 0x8; // Output Compare 1 preload enable Note: These bits can not be modified as long as LOCK level 3 has been programmed (LOCK bits in TIMx_BDTR register) and CC1S=00 (the channel is configured in output). The PWM mode can be used without validating the preload register only in one pulse mode (OPM bit set in TIMx_CR1 register). Else the behavior is not guaranteed.
    static constexpr uint32_t CCMR1_OC2CE = 0x8000; // Output Compare 2 clear enable Refer to OC1CE description.
    static constexpr uint32_t CCMR1_OC2FE = 0x400; // Output Compare 2 fast enable Refer to OC1FE description.
    typedef bit_field_t<12, 0x7> CCMR1_OC2M1; // Output Compare 2 mode Refer to OC1M[3:0] description.
    static constexpr uint32_t CCMR1_OC2M2 = 0x1000000; // Output Compare 2 mode Refer to OC1M[3:0] description.
    static constexpr uint32_t CCMR1_OC2PE = 0x800; // Output Compare 2 preload enable Refer to OC1PE description.

    static constexpr uint32_t CCMR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> CCMR2_CC3S; // Capture/Compare 3 selection This bit-field defines the direction of the channel (input/output) as well as the used input. Note: CC3S bits are writable only when the channel is OFF (CC3E = &#39;0 in TIMx_CCER).
    typedef bit_field_t<8, 0x3> CCMR2_CC4S; // Capture/Compare 4 selection This bit-field defines the direction of the channel (input/output) as well as the used input. Note: CC4S bits are writable only when the channel is OFF (CC4E = &#39;0 in TIMx_CCER).
    typedef bit_field_t<4, 0xf> CCMR2_IC3F; // Input capture 3 filter Refer to IC1F[3:0] description.
    typedef bit_field_t<2, 0x3> CCMR2_IC3PSC; // Input capture 3 prescaler Refer to IC1PSC[1:0] description.
    typedef bit_field_t<12, 0xf> CCMR2_IC4F; // Input capture 4 filter Refer to IC1F[3:0] description.
    typedef bit_field_t<10, 0x3> CCMR2_IC4PSC; // Input capture 4 prescaler Refer to IC1PSC[1:0] description.
    static constexpr uint32_t CCMR2_OC3CE = 0x80; // Output compare 3 clear enable Refer to OC1CE description.
    static constexpr uint32_t CCMR2_OC3FE = 0x4; // Output compare 3 fast enable Refer to OC1FE description.
    typedef bit_field_t<4, 0x7> CCMR2_OC3M1; // Output compare 3 mode Refer to OC1M[3:0] description.
    static constexpr uint32_t CCMR2_OC3M2 = 0x10000; // Output compare 3 mode Refer to OC1M[3:0] description.
    static constexpr uint32_t CCMR2_OC3PE = 0x8; // Output compare 3 preload enable Refer to OC1PE description.
    static constexpr uint32_t CCMR2_OC4CE = 0x8000; // Output compare 4 clear enable Refer to OC1CE description.
    static constexpr uint32_t CCMR2_OC4FE = 0x400; // Output compare 4 fast enable Refer to OC1FE description.
    typedef bit_field_t<12, 0x7> CCMR2_OC4M1; // Output compare 4 mode Refer to OC3M[3:0] description.
    static constexpr uint32_t CCMR2_OC4M2 = 0x1000000; // Output compare 4 mode Refer to OC3M[3:0] description.
    static constexpr uint32_t CCMR2_OC4PE = 0x800; // Output compare 4 preload enable Refer to OC1PE description.

    static constexpr uint32_t CCER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCER_CC1E = 0x1; // Capture/Compare 1 output enable When CC1 channel is configured as output, the OC1 level depends on MOE, OSSI, OSSR, OIS1, OIS1N and CC1NE bits, regardless of the CC1E bits state. Refer to for details. Note: On channels having a complementary output, this bit is preloaded. If the CCPC bit is set in the TIMx_CR2 register then the CC1E active bit takes the new value from the preloaded bit only when a Commutation event is generated.
    static constexpr uint32_t CCER_CC1P = 0x2; // Capture/Compare 1 output polarity When CC1 channel is configured as input, both CC1NP/CC1P bits select the active polarity of TI1FP1 and TI2FP1 for trigger or capture operations. CC1NP=0, CC1P=0: non-inverted/rising edge. The circuit is sensitive to TIxFP1 rising edge (capture or trigger operations in reset, external clock or trigger mode), TIxFP1 is not inverted (trigger operation in gated mode or encoder mode). CC1NP=0, CC1P=1: inverted/falling edge. The circuit is sensitive to TIxFP1 falling edge (capture or trigger operations in reset, external clock or trigger mode), TIxFP1 is inverted (trigger operation in gated mode or encoder mode). CC1NP=1, CC1P=1: non-inverted/both edges/ The circuit is sensitive to both TIxFP1 rising and falling edges (capture or trigger operations in reset, external clock or trigger mode), TIxFP1is not inverted (trigger operation in gated mode). This configuration must not be used in encoder mode. CC1NP=1, CC1P=0: The configuration is reserved, it must not be used. Note: This bit is not writable as soon as LOCK level 2 or 3 has been programmed (LOCK bits in TIMx_BDTR register). On channels having a complementary output, this bit is preloaded. If the CCPC bit is set in the TIMx_CR2 register then the CC1P active bit takes the new value from the preloaded bit only when a Commutation event is generated.
    static constexpr uint32_t CCER_CC1NE = 0x4; // Capture/Compare 1 complementary output enable On channels having a complementary output, this bit is preloaded. If the CCPC bit is set in the TIMx_CR2 register then the CC1NE active bit takes the new value from the preloaded bit only when a Commutation event is generated.
    static constexpr uint32_t CCER_CC1NP = 0x8; // Capture/Compare 1 complementary output polarity CC1 channel configured as output: CC1 channel configured as input: This bit is used in conjunction with CC1P to define the polarity of TI1FP1 and TI2FP1. Refer to CC1P description. Note: This bit is not writable as soon as LOCK level 2 or 3 has been programmed (LOCK bits in TIMx_BDTR register) and CC1S=00 (channel configured as output). On channels having a complementary output, this bit is preloaded. If the CCPC bit is set in the TIMx_CR2 register then the CC1NP active bit takes the new value from the preloaded bit only when a Commutation event is generated.
    static constexpr uint32_t CCER_CC2E = 0x10; // Capture/Compare 2 output enable Refer to CC1E description
    static constexpr uint32_t CCER_CC2P = 0x20; // Capture/Compare 2 output polarity Refer to CC1P description
    static constexpr uint32_t CCER_CC2NE = 0x40; // Capture/Compare 2 complementary output enable Refer to CC1NE description
    static constexpr uint32_t CCER_CC2NP = 0x80; // Capture/Compare 2 complementary output polarity Refer to CC1NP description
    static constexpr uint32_t CCER_CC3E = 0x100; // Capture/Compare 3 output enable Refer to CC1E description
    static constexpr uint32_t CCER_CC3P = 0x200; // Capture/Compare 3 output polarity Refer to CC1P description
    static constexpr uint32_t CCER_CC3NE = 0x400; // Capture/Compare 3 complementary output enable Refer to CC1NE description
    static constexpr uint32_t CCER_CC3NP = 0x800; // Capture/Compare 3 complementary output polarity Refer to CC1NP description
    static constexpr uint32_t CCER_CC4E = 0x1000; // Capture/Compare 4 output enable Refer to CC1E description
    static constexpr uint32_t CCER_CC4P = 0x2000; // Capture/Compare 4 output polarity Refer to CC1P description
    static constexpr uint32_t CCER_CC4NP = 0x8000; // Capture/Compare 4 complementary output polarity Refer to CC1NP description
    static constexpr uint32_t CCER_CC5E = 0x10000; // Capture/Compare 5 output enable Refer to CC1E description
    static constexpr uint32_t CCER_CC5P = 0x20000; // Capture/Compare 5 output polarity Refer to CC1P description
    static constexpr uint32_t CCER_CC6E = 0x100000; // Capture/Compare 6 output enable Refer to CC1E description
    static constexpr uint32_t CCER_CC6P = 0x200000; // Capture/Compare 6 output polarity Refer to CC1P description

    static constexpr uint32_t CNT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNT_CNT; // Counter value
    static constexpr uint32_t CNT_UIFCPY = 0x80000000; // UIF copy This bit is a read-only copy of the UIF bit of the TIMx_ISR register. If the UIFREMAP bit in the TIMxCR1 is reset, bit 31 is reserved and read at 0.

    static constexpr uint32_t PSC_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> PSC_PSC; // Prescaler value The counter clock frequency (CK_CNT) is equal to fCK_PSC / (PSC[15:0] + 1). PSC contains the value to be loaded in the active prescaler register at each update event (including when the counter is cleared through UG bit of TIMx_EGR register or through trigger controller when configured in reset mode).

    static constexpr uint32_t ARR_RESET_VALUE = 0xffff; // Reset value
    typedef bit_field_t<0, 0xffff> ARR_ARR; // Auto-reload value ARR is the value to be loaded in the actual auto-reload register. Refer to the for more details about ARR update and behavior. The counter is blocked while the auto-reload value is null.

    static constexpr uint32_t RCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> RCR_REP; // Repetition counter value

    static constexpr uint32_t CCR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR1_CCR1; // Capture/Compare 1 value

    static constexpr uint32_t CCR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR2_CCR2; // Capture/Compare 2 value

    static constexpr uint32_t CCR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR3_CCR3; // Capture/Compare value

    static constexpr uint32_t CCR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR4_CCR4; // Capture/Compare value

    static constexpr uint32_t BDTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> BDTR_DTG; // Dead-time generator setup This bit-field defines the duration of the dead-time inserted between the complementary outputs. DT correspond to this duration. DTG[7:5]=0xx =&gt; DT=DTG[7:0]x tDTG with tDTG=tDTS. DTG[7:5]=10x =&gt; DT=(64+DTG[5:0])xtDTG with tDTG=2xtDTS. DTG[7:5]=110 =&gt; DT=(32+DTG[4:0])xtDTG with tDTG=8xtDTS. DTG[7:5]=111 =&gt; DT=(32+DTG[4:0])xtDTG with tDTG=16xtDTS. Example if tDTS=125ns (8MHz), dead-time possible values are: 0 to 15875ns by 125ns steps, 16s to 31750ns by 250ns steps, 32s to 63s by 1s steps, 64s to 126s by 2s steps Note: This bit-field can not be modified as long as LOCK level 1, 2 or 3 has been programmed (LOCK bits in TIMx_BDTR register).
    typedef bit_field_t<8, 0x3> BDTR_LOCK; // Lock configuration These bits offer a write protection against software errors. Note: The LOCK bits can be written only once after the reset. Once the TIMx_BDTR register has been written, their content is frozen until the next reset.
    static constexpr uint32_t BDTR_OSSI = 0x400; // Off-state selection for Idle mode This bit is used when MOE=0 due to a break event or by a software write, on channels configured as outputs. See OC/OCN enable description for more details (enable register (TIM1_CCERTIMx_CCER)N/A). Note: This bit can not be modified as soon as the LOCK level 2 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t BDTR_OSSR = 0x800; // Off-state selection for Run mode This bit is used when MOE=1 on channels having a complementary output which are configured as outputs. OSSR is not implemented if no complementary output is implemented in the timer. See OC/OCN enable description for more details (enable register (TIM1_CCERTIMx_CCER)N/A). Note: This bit can not be modified as soon as the LOCK level 2 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t BDTR_BKE = 0x1000; // Break enable This bit enables the complete break protection (including all sources connected to bk_acth and BKIN sources, as per ). Note: This bit cannot be modified when LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register). Note: Any write operation to this bit takes a delay of 1 APB clock cycle to become effective.
    static constexpr uint32_t BDTR_BKP = 0x2000; // Break polarity Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register). Note: Any write operation to this bit takes a delay of 1 APB clock cycle to become effective.
    static constexpr uint32_t BDTR_AOE = 0x4000; // Automatic output enable Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t BDTR_MOE = 0x8000; // Main output enable This bit is cleared asynchronously by hardware as soon as one of the break inputs is active (BRK or BRK2). It is set by software or automatically depending on the AOE bit. It is acting only on the channels which are configured in output. In response to a break event or if MOE is written to 0: OC and OCN outputs are disabled or forced to idle state depending on the OSSI bit. See OC/OCN enable description for more details (enable register (TIM1_CCERTIMx_CCER)N/A).
    typedef bit_field_t<16, 0xf> BDTR_BKF; // Break filter This bit-field defines the frequency used to sample BRK input and the length of the digital filter applied to BRK. The digital filter is made of an event counter in which N consecutive events are needed to validate a transition on the output: Note: This bit cannot be modified when LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    typedef bit_field_t<20, 0xf> BDTR_BK2F; // Break 2 filter This bit-field defines the frequency used to sample BRK2 input and the length of the digital filter applied to BRK2. The digital filter is made of an event counter in which N consecutive events are needed to validate a transition on the output: Note: This bit cannot be modified when LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t BDTR_BK2E = 0x1000000; // Break 2 enable Note: The BRK2 must only be used with OSSR = OSSI = 1. Note: This bit cannot be modified when LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register). Note: Any write operation to this bit takes a delay of 1 APB clock cycle to become effective.
    static constexpr uint32_t BDTR_BK2P = 0x2000000; // Break 2 polarity Note: This bit cannot be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register). Note: Any write operation to this bit takes a delay of 1 APB clock cycle to become effective.
    static constexpr uint32_t BDTR_BKDSRM = 0x4000000; // Break Disarm This bit is cleared by hardware when no break source is active. The BKDSRM bit must be set by software to release the bidirectional output control (open-drain output in Hi-Z state) and then be polled it until it is reset by hardware, indicating that the fault condition has disappeared. Note: Any write operation to this bit takes a delay of 1 APB clock cycle to become effective.
    static constexpr uint32_t BDTR_BK2DSRM = 0x8000000; // Break2 Disarm Refer to BKDSRM description
    static constexpr uint32_t BDTR_BKBID = 0x10000000; // Break Bidirectional In the bidirectional mode (BKBID bit set to 1), the break input is configured both in input mode and in open drain output mode. Any active break event asserts a low logic level on the Break input to indicate an internal break event to external devices. Note: This bit cannot be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register). Note: Any write operation to this bit takes a delay of 1 APB clock cycle to become effective.
    static constexpr uint32_t BDTR_BK2BID = 0x20000000; // Break2 bidirectional Refer to BKBID description

    static constexpr uint32_t DCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> DCR_DBA; // DMA base address This 5-bits vector defines the base-address for DMA transfers (when read/write access are done through the TIMx_DMAR address). DBA is defined as an offset starting from the address of the TIMx_CR1 register. Example: ...
    typedef bit_field_t<8, 0x1f> DCR_DBL; // DMA burst length This 5-bit vector defines the length of DMA transfers (the timer recognizes a burst transfer when a read or a write access is done to the TIMx_DMAR address), i.e. the number of transfers. Transfers can be in half-words or in bytes (see example below). ... Example: Let us consider the following transfer: DBL = 7 bytes &amp; DBA = TIMx_CR1. If DBL = 7 bytes and DBA = TIMx_CR1 represents the address of the byte to be transferred, the address of the transfer should be given by the following equation: (TIMx_CR1 address) + DBA + (DMA index), where DMA index = DBL In this example, 7 bytes are added to (TIMx_CR1 address) + DBA, which gives us the address from/to which the data is copied. In this case, the transfer is done to 7 registers starting from the following address: (TIMx_CR1 address) + DBA According to the configuration of the DMA Data Size, several cases may occur: If the DMA Data Size is configured in half-words, 16-bit data is transferred to each of the 7 registers. If the DMA Data Size is configured in bytes, the data is also transferred to 7 registers: the first register contains the first MSB byte, the second register, the first LSB byte and so on. So with the transfer Timer, one also has to specify the size of data transferred by DMA.

    static constexpr uint32_t DMAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DMAR_DMAB; // DMA register for burst accesses A read or write operation to the DMAR register accesses the register located at the address (TIMx_CR1 address) + (DBA + DMA index) x 4 where TIMx_CR1 address is the address of the control register 1, DBA is the DMA base address configured in TIMx_DCR register, DMA index is automatically controlled by the DMA transfer, and ranges from 0 to DBL (DBL configured in TIMx_DCR).


    static constexpr uint32_t CCMR3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCMR3_OC6M_BIT3 = 0x1000000; // Output Compare 6 mode bit 3
    static constexpr uint32_t CCMR3_OC5M_BIT3 = 0x10000; // Output Compare 5 mode bit 3
    static constexpr uint32_t CCMR3_OC6CE = 0x8000; // Output compare 6 clear enable
    typedef bit_field_t<12, 0x7> CCMR3_OC6M; // Output compare 6 mode
    static constexpr uint32_t CCMR3_OC6PE = 0x800; // Output compare 6 preload enable
    static constexpr uint32_t CCMR3_OC6FE = 0x400; // Output compare 6 fast enable
    static constexpr uint32_t CCMR3_OC5CE = 0x80; // Output compare 5 clear enable
    typedef bit_field_t<4, 0x7> CCMR3_OC5M; // Output compare 5 mode
    static constexpr uint32_t CCMR3_OC5PE = 0x8; // Output compare 5 preload enable
    static constexpr uint32_t CCMR3_OC5FE = 0x4; // Output compare 5 fast enable

    static constexpr uint32_t CCR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR5_CCR5; // Capture/Compare 5 value CCR5 is the value to be loaded in the actual capture/compare 5 register (preload value). It is loaded permanently if the preload feature is not selected in the TIMx_CCMR3 register (bit OC5PE). Else the preload value is copied in the active capture/compare 5 register when an update event occurs. The active capture/compare register contains the value to be compared to the counter TIMx_CNT and signaled on OC5 output.
    static constexpr uint32_t CCR5_GC5C1 = 0x20000000; // Group Channel 5 and Channel 1 Distortion on Channel 1 output: This bit can either have immediate effect or be preloaded and taken into account after an update event (if preload feature is selected in TIMxCCMR1). Note: it is also possible to apply this distortion on combined PWM signals.
    static constexpr uint32_t CCR5_GC5C2 = 0x40000000; // Group Channel 5 and Channel 2 Distortion on Channel 2 output: This bit can either have immediate effect or be preloaded and taken into account after an update event (if preload feature is selected in TIMxCCMR1). Note: it is also possible to apply this distortion on combined PWM signals.
    static constexpr uint32_t CCR5_GC5C3 = 0x80000000; // Group Channel 5 and Channel 3 Distortion on Channel 3 output: This bit can either have immediate effect or be preloaded and taken into account after an update event (if preload feature is selected in TIMxCCMR2). Note: it is also possible to apply this distortion on combined PWM signals.

    static constexpr uint32_t CCR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR6_CCR6; // Capture/Compare value

    static constexpr uint32_t AF1_RESET_VALUE = 0x1; // Reset value
    static constexpr uint32_t AF1_BKINE = 0x1; // BRK BKIN input enable This bit enables the BKIN alternate function input for the timers BRK input. BKIN input is &#39;ORed with the other BRK sources. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t AF1_BKINP = 0x200; // BRK BKIN input polarity This bit selects the BKIN alternate function input sensitivity. It must be programmed together with the BKP polarity bit. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    typedef bit_field_t<14, 0xf> AF1_ETRSEL; // ETR source selection These bits select the ETR input source. Others: Reserved Note: These bits can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).

    static constexpr uint32_t AF2_RESET_VALUE = 0x1; // Reset value
    static constexpr uint32_t AF2_BK2INE = 0x1; // BRK2 BKIN input enable This bit enables the BKIN2 alternate function input for the timers BRK2 input. BKIN2 input is &#39;ORed with the other BRK2 sources. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t AF2_BK2INP = 0x200; // BRK2 BKIN2 input polarity This bit selects the BKIN2 alternate function input sensitivity. It must be programmed together with the BK2P polarity bit. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).

    static constexpr uint32_t TISEL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> TISEL_TI1SEL; // selects TI1[0] to TI1[15] input Others: Reserved
    typedef bit_field_t<8, 0xf> TISEL_TI2SEL; // selects TI2[0] to TI2[15] input Others: Reserved
    typedef bit_field_t<16, 0xf> TISEL_TI3SEL; // selects TI3[0] to TI3[15] input Others: Reserved
    typedef bit_field_t<24, 0xf> TISEL_TI4SEL; // selects TI4[0] to TI4[15] input Others: Reserved
};

// TIM1: Advanced-timers

struct stm32g051_tim1_t
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
    volatile uint32_t RCR; // repetition counter register
    volatile uint32_t CCR1; // capture/compare register 1
    volatile uint32_t CCR2; // capture/compare register 2
    volatile uint32_t CCR3; // capture/compare register 3
    volatile uint32_t CCR4; // capture/compare register 4
    volatile uint32_t BDTR; // break and dead-time register
    volatile uint32_t DCR; // DMA control register
    volatile uint32_t DMAR; // DMA address for full transfer
    volatile uint32_t OR1; // option register 1
    volatile uint32_t CCMR3; // capture/compare mode register 2 (output mode)
    volatile uint32_t CCR5; // capture/compare register 4
    volatile uint32_t CCR6; // capture/compare register 4
    volatile uint32_t AF1; // DMA address for full transfer
    volatile uint32_t AF2; // DMA address for full transfer
    volatile uint32_t TISEL; // TIM1 timer input selection register

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR1_CEN = 0x1; // Counter enable Note: External clock, gated mode and encoder mode can work only if the CEN bit has been previously set by software. However trigger mode can set the CEN bit automatically by hardware.
    static constexpr uint32_t CR1_UDIS = 0x2; // Update disable This bit is set and cleared by software to enable/disable UEV event generation. Counter overflow/underflow Setting the UG bit Update generation through the slave mode controller Buffered registers are then loaded with their preload values.
    static constexpr uint32_t CR1_URS = 0x4; // Update request source This bit is set and cleared by software to select the UEV event sources. Counter overflow/underflow Setting the UG bit Update generation through the slave mode controller
    static constexpr uint32_t CR1_OPM = 0x8; // One pulse mode
    static constexpr uint32_t CR1_DIR = 0x10; // Direction Note: This bit is read only when the timer is configured in Center-aligned mode or Encoder mode.
    typedef bit_field_t<5, 0x3> CR1_CMS; // Center-aligned mode selection Note: Switch from edge-aligned mode to center-aligned mode as long as the counter is enabled (CEN=1) is not allowed
    static constexpr uint32_t CR1_ARPE = 0x80; // Auto-reload preload enable
    typedef bit_field_t<8, 0x3> CR1_CKD; // Clock division This bit-field indicates the division ratio between the timer clock (CK_INT) frequency and the dead-time and sampling clock (tDTS)used by the dead-time generators and the digital filters (ETR, TIx): Note: tDTS = 1/fDTS, tCK_INT = 1/fCK_INT.
    static constexpr uint32_t CR1_UIFREMAP = 0x800; // UIF status bit remapping

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR2_CCPC = 0x1; // Capture/compare preloaded control Note: This bit acts only on channels that have a complementary output.
    static constexpr uint32_t CR2_CCUS = 0x4; // Capture/compare control update selection Note: This bit acts only on channels that have a complementary output.
    static constexpr uint32_t CR2_CCDS = 0x8; // Capture/compare DMA selection
    typedef bit_field_t<4, 0x7> CR2_MMS; // Master mode selection These bits allow selected information to be sent in master mode to slave timers for synchronization (TRGO). The combination is as follows: Note: The clock of the slave timer or ADC must be enabled prior to receive events from the master timer, and must not be changed on-the-fly while triggers are received from the master timer.
    static constexpr uint32_t CR2_TI1S = 0x80; // TI1 selection
    static constexpr uint32_t CR2_OIS1 = 0x100; // Output Idle state 1 (OC1 output) Note: This bit can not be modified as long as LOCK level 1, 2 or 3 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t CR2_OIS1N = 0x200; // Output Idle state 1 (OC1N output) Note: This bit can not be modified as long as LOCK level 1, 2 or 3 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t CR2_OIS2 = 0x400; // Output Idle state 2 (OC2 output) Refer to OIS1 bit
    static constexpr uint32_t CR2_OIS2N = 0x800; // Output Idle state 2 (OC2N output) Refer to OIS1N bit
    static constexpr uint32_t CR2_OIS3 = 0x1000; // Output Idle state 3 (OC3 output) Refer to OIS1 bit
    static constexpr uint32_t CR2_OIS3N = 0x2000; // Output Idle state 3 (OC3N output) Refer to OIS1N bit
    static constexpr uint32_t CR2_OIS4 = 0x4000; // Output Idle state 4 (OC4 output) Refer to OIS1 bit
    static constexpr uint32_t CR2_OIS5 = 0x10000; // Output Idle state 5 (OC5 output) Refer to OIS1 bit
    static constexpr uint32_t CR2_OIS6 = 0x40000; // Output Idle state 6 (OC6 output) Refer to OIS1 bit
    typedef bit_field_t<20, 0xf> CR2_MMS2; // Master mode selection 2 These bits allow the information to be sent to ADC for synchronization (TRGO2) to be selected. The combination is as follows: Note: The clock of the slave timer or ADC must be enabled prior to receive events from the master timer, and must not be changed on-the-fly while triggers are received from the master timer.

    static constexpr uint32_t SMCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> SMCR_SMS1; // Slave mode selection When external signals are selected the active edge of the trigger signal (TRGI) is linked to the polarity selected on the external input (see Input Control register and Control Register description. Note: The gated mode must not be used if TI1F_ED is selected as the trigger input (TS=00100). Indeed, TI1F_ED outputs 1 pulse for each transition on TI1F, whereas the gated mode checks the level of the trigger signal. Note: The clock of the slave peripherals (timer, ADC, ...) receiving the TRGO or the TRGO2 signals must be enabled prior to receive events from the master timer, and the clock frequency (prescaler) must not be changed on-the-fly while triggers are received from the master timer.
    static constexpr uint32_t SMCR_OCCS = 0x8; // OCREF clear selection This bit is used to select the OCREF clear source.
    typedef bit_field_t<4, 0x7> SMCR_TS1; // Trigger selection This bit-field selects the trigger input to be used to synchronize the counter. Others: Reserved See for more details on ITRx meaning for each Timer. Note: These bits must be changed only when they are not used (e.g. when SMS=000) to avoid wrong edge detections at the transition.
    static constexpr uint32_t SMCR_MSM = 0x80; // Master/slave mode
    typedef bit_field_t<8, 0xf> SMCR_ETF; // External trigger filter This bit-field then defines the frequency used to sample ETRP signal and the length of the digital filter applied to ETRP. The digital filter is made of an event counter in which N consecutive events are needed to validate a transition on the output:
    typedef bit_field_t<12, 0x3> SMCR_ETPS; // External trigger prescaler External trigger signal ETRP frequency must be at most 1/4 of fCK_INT frequency. A prescaler can be enabled to reduce ETRP frequency. It is useful when inputting fast external clocks.
    static constexpr uint32_t SMCR_ECE = 0x4000; // External clock enable This bit enables External clock mode 2. Note: Setting the ECE bit has the same effect as selecting external clock mode 1 with TRGI connected to ETRF (SMS=111 and TS=00111). It is possible to simultaneously use external clock mode 2 with the following slave modes: reset mode, gated mode and trigger mode. Nevertheless, TRGI must not be connected to ETRF in this case (TS bits must not be 00111). If external clock mode 1 and external clock mode 2 are enabled at the same time, the external clock input is ETRF.
    static constexpr uint32_t SMCR_ETP = 0x8000; // External trigger polarity This bit selects whether ETR or ETR is used for trigger operations
    static constexpr uint32_t SMCR_SMS2 = 0x10000; // Slave mode selection When external signals are selected the active edge of the trigger signal (TRGI) is linked to the polarity selected on the external input (see Input Control register and Control Register description. Note: The gated mode must not be used if TI1F_ED is selected as the trigger input (TS=00100). Indeed, TI1F_ED outputs 1 pulse for each transition on TI1F, whereas the gated mode checks the level of the trigger signal. Note: The clock of the slave peripherals (timer, ADC, ...) receiving the TRGO or the TRGO2 signals must be enabled prior to receive events from the master timer, and the clock frequency (prescaler) must not be changed on-the-fly while triggers are received from the master timer.
    typedef bit_field_t<20, 0x3> SMCR_TS2; // Trigger selection This bit-field selects the trigger input to be used to synchronize the counter. Others: Reserved See for more details on ITRx meaning for each Timer. Note: These bits must be changed only when they are not used (e.g. when SMS=000) to avoid wrong edge detections at the transition.

    static constexpr uint32_t DIER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DIER_UIE = 0x1; // Update interrupt enable
    static constexpr uint32_t DIER_CC1IE = 0x2; // Capture/Compare 1 interrupt enable
    static constexpr uint32_t DIER_CC2IE = 0x4; // Capture/Compare 2 interrupt enable
    static constexpr uint32_t DIER_CC3IE = 0x8; // Capture/Compare 3 interrupt enable
    static constexpr uint32_t DIER_CC4IE = 0x10; // Capture/Compare 4 interrupt enable
    static constexpr uint32_t DIER_COMIE = 0x20; // COM interrupt enable
    static constexpr uint32_t DIER_TIE = 0x40; // Trigger interrupt enable
    static constexpr uint32_t DIER_BIE = 0x80; // Break interrupt enable
    static constexpr uint32_t DIER_UDE = 0x100; // Update DMA request enable
    static constexpr uint32_t DIER_CC1DE = 0x200; // Capture/Compare 1 DMA request enable
    static constexpr uint32_t DIER_CC2DE = 0x400; // Capture/Compare 2 DMA request enable
    static constexpr uint32_t DIER_CC3DE = 0x800; // Capture/Compare 3 DMA request enable
    static constexpr uint32_t DIER_CC4DE = 0x1000; // Capture/Compare 4 DMA request enable
    static constexpr uint32_t DIER_COMDE = 0x2000; // COM DMA request enable
    static constexpr uint32_t DIER_TDE = 0x4000; // Trigger DMA request enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_UIF = 0x1; // Update interrupt flag This bit is set by hardware on an update event. It is cleared by software. At overflow or underflow regarding the repetition counter value (update if repetition counter = 0) and if the UDIS=0 in the TIMx_CR1 register. When CNT is reinitialized by software using the UG bit in TIMx_EGR register, if URS=0 and UDIS=0 in the TIMx_CR1 register. When CNT is reinitialized by a trigger event (refer to control register (TIM1_SMCRTIMx_SMCR)N/A), if URS=0 and UDIS=0 in the TIMx_CR1 register.
    static constexpr uint32_t SR_CC1IF = 0x2; // Capture/Compare 1 interrupt flag This flag is set by hardware. It is cleared by software (input capture or output compare mode) or by reading the TIMx_CCR1 register (input capture mode only). If channel CC1 is configured as output: this flag is set when he content of the counter TIMx_CNT matches the content of the TIMx_CCR1 register. When the content of TIMx_CCR1 is greater than the content of TIMx_ARR, the CC1IF bit goes high on the counter overflow (in up-counting and up/down-counting modes) or underflow (in down-counting mode). There are 3 possible options for flag setting in center-aligned mode, refer to the CMS bits in the TIMx_CR1 register for the full description. If channel CC1 is configured as input: this bit is set when counter value has been captured in TIMx_CCR1 register (an edge has been detected on IC1, as per the edge sensitivity defined with the CC1P and CC1NP bits setting, in TIMx_CCER).
    static constexpr uint32_t SR_CC2IF = 0x4; // Capture/Compare 2 interrupt flag Refer to CC1IF description
    static constexpr uint32_t SR_CC3IF = 0x8; // Capture/Compare 3 interrupt flag Refer to CC1IF description
    static constexpr uint32_t SR_CC4IF = 0x10; // Capture/Compare 4 interrupt flag Refer to CC1IF description
    static constexpr uint32_t SR_COMIF = 0x20; // COM interrupt flag This flag is set by hardware on COM event (when Capture/compare Control bits - CCxE, CCxNE, OCxM - have been updated). It is cleared by software.
    static constexpr uint32_t SR_TIF = 0x40; // Trigger interrupt flag This flag is set by hardware on the TRG trigger event (active edge detected on TRGI input when the slave mode controller is enabled in all modes but gated mode. It is set when the counter starts or stops when gated mode is selected. It is cleared by software.
    static constexpr uint32_t SR_BIF = 0x80; // Break interrupt flag This flag is set by hardware as soon as the break input goes active. It can be cleared by software if the break input is not active.
    static constexpr uint32_t SR_B2IF = 0x100; // Break 2 interrupt flag This flag is set by hardware as soon as the break 2 input goes active. It can be cleared by software if the break 2 input is not active.
    static constexpr uint32_t SR_CC1OF = 0x200; // Capture/Compare 1 overcapture flag This flag is set by hardware only when the corresponding channel is configured in input capture mode. It is cleared by software by writing it to &#39;0.
    static constexpr uint32_t SR_CC2OF = 0x400; // Capture/Compare 2 overcapture flag Refer to CC1OF description
    static constexpr uint32_t SR_CC3OF = 0x800; // Capture/Compare 3 overcapture flag Refer to CC1OF description
    static constexpr uint32_t SR_CC4OF = 0x1000; // Capture/Compare 4 overcapture flag Refer to CC1OF description
    static constexpr uint32_t SR_SBIF = 0x2000; // System Break interrupt flag This flag is set by hardware as soon as the system break input goes active. It can be cleared by software if the system break input is not active. This flag must be reset to re-start PWM operation.
    static constexpr uint32_t SR_CC5IF = 0x10000; // Compare 5 interrupt flag Refer to CC1IF description (Note: Channel 5 can only be configured as output)
    static constexpr uint32_t SR_CC6IF = 0x20000; // Compare 6 interrupt flag Refer to CC1IF description (Note: Channel 6 can only be configured as output)

    static constexpr uint32_t EGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t EGR_UG = 0x1; // Update generation This bit can be set by software, it is automatically cleared by hardware.
    static constexpr uint32_t EGR_CC1G = 0x2; // Capture/Compare 1 generation This bit is set by software in order to generate an event, it is automatically cleared by hardware. If channel CC1 is configured as output: CC1IF flag is set, Corresponding interrupt or DMA request is sent if enabled. If channel CC1 is configured as input: The current value of the counter is captured in TIMx_CCR1 register. The CC1IF flag is set, the corresponding interrupt or DMA request is sent if enabled. The CC1OF flag is set if the CC1IF flag was already high.
    static constexpr uint32_t EGR_CC2G = 0x4; // Capture/Compare 2 generation Refer to CC1G description
    static constexpr uint32_t EGR_CC3G = 0x8; // Capture/Compare 3 generation Refer to CC1G description
    static constexpr uint32_t EGR_CC4G = 0x10; // Capture/Compare 4 generation Refer to CC1G description
    static constexpr uint32_t EGR_COMG = 0x20; // Capture/Compare control update generation This bit can be set by software, it is automatically cleared by hardware Note: This bit acts only on channels having a complementary output.
    static constexpr uint32_t EGR_TG = 0x40; // Trigger generation This bit is set by software in order to generate an event, it is automatically cleared by hardware.
    static constexpr uint32_t EGR_BG = 0x80; // Break generation This bit is set by software in order to generate an event, it is automatically cleared by hardware.
    static constexpr uint32_t EGR_B2G = 0x100; // Break 2 generation This bit is set by software in order to generate an event, it is automatically cleared by hardware.

    static constexpr uint32_t CCMR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> CCMR1_CC1S; // Capture/Compare 1 selection This bit-field defines the direction of the channel (input/output) as well as the used input. Note: CC1S bits are writable only when the channel is OFF (CC1E = &#39;0 in TIMx_CCER).
    typedef bit_field_t<8, 0x3> CCMR1_CC2S; // Capture/Compare 2 selection This bit-field defines the direction of the channel (input/output) as well as the used input. Note: CC2S bits are writable only when the channel is OFF (CC2E = &#39;0 in TIMx_CCER).
    typedef bit_field_t<4, 0xf> CCMR1_IC1F; // Input capture 1 filter This bit-field defines the frequency used to sample TI1 input and the length of the digital filter applied to TI1. The digital filter is made of an event counter in which N consecutive events are needed to validate a transition on the output:
    typedef bit_field_t<2, 0x3> CCMR1_IC1PSC; // Input capture 1 prescaler This bit-field defines the ratio of the prescaler acting on CC1 input (IC1). The prescaler is reset as soon as CC1E=0 (TIMx_CCER register).
    typedef bit_field_t<12, 0xf> CCMR1_IC2F; // Input capture 2 filter Refer to IC1F[3:0] description.
    typedef bit_field_t<10, 0x3> CCMR1_IC2PSC; // Input capture 2 prescaler Refer to IC1PSC[1:0] description.
    static constexpr uint32_t CCMR1_OC1CE = 0x80; // Output Compare 1 clear enable
    static constexpr uint32_t CCMR1_OC1FE = 0x4; // Output Compare 1 fast enable This bit decreases the latency between a trigger event and a transition on the timer output. It must be used in one-pulse mode (OPM bit set in TIMx_CR1 register), to have the output pulse starting as soon as possible after the starting trigger.
    typedef bit_field_t<4, 0x7> CCMR1_OC1M1; // Output Compare 1 mode These bits define the behavior of the output reference signal OC1REF from which OC1 and OC1N are derived. OC1REF is active high whereas OC1 and OC1N active level depends on CC1P and CC1NP bits. Note: These bits can not be modified as long as LOCK level 3 has been programmed (LOCK bits in TIMx_BDTR register) and CC1S=00 (the channel is configured in output). Note: In PWM mode, the OCREF level changes only when the result of the comparison changes or when the output compare mode switches from frozen mode to PWM mode. Note: On channels having a complementary output, this bit field is preloaded. If the CCPC bit is set in the TIMx_CR2 register then the OC1M active bits take the new value from the preloaded bits only when a COM event is generated. Note: The OC1M[3] bit is not contiguous, located in bit 16.
    static constexpr uint32_t CCMR1_OC1M2 = 0x10000; // Output Compare 1 mode These bits define the behavior of the output reference signal OC1REF from which OC1 and OC1N are derived. OC1REF is active high whereas OC1 and OC1N active level depends on CC1P and CC1NP bits. Note: These bits can not be modified as long as LOCK level 3 has been programmed (LOCK bits in TIMx_BDTR register) and CC1S=00 (the channel is configured in output). Note: In PWM mode, the OCREF level changes only when the result of the comparison changes or when the output compare mode switches from frozen mode to PWM mode. Note: On channels having a complementary output, this bit field is preloaded. If the CCPC bit is set in the TIMx_CR2 register then the OC1M active bits take the new value from the preloaded bits only when a COM event is generated. Note: The OC1M[3] bit is not contiguous, located in bit 16.
    static constexpr uint32_t CCMR1_OC1PE = 0x8; // Output Compare 1 preload enable Note: These bits can not be modified as long as LOCK level 3 has been programmed (LOCK bits in TIMx_BDTR register) and CC1S=00 (the channel is configured in output). The PWM mode can be used without validating the preload register only in one pulse mode (OPM bit set in TIMx_CR1 register). Else the behavior is not guaranteed.
    static constexpr uint32_t CCMR1_OC2CE = 0x8000; // Output Compare 2 clear enable Refer to OC1CE description.
    static constexpr uint32_t CCMR1_OC2FE = 0x400; // Output Compare 2 fast enable Refer to OC1FE description.
    typedef bit_field_t<12, 0x7> CCMR1_OC2M1; // Output Compare 2 mode Refer to OC1M[3:0] description.
    static constexpr uint32_t CCMR1_OC2M2 = 0x1000000; // Output Compare 2 mode Refer to OC1M[3:0] description.
    static constexpr uint32_t CCMR1_OC2PE = 0x800; // Output Compare 2 preload enable Refer to OC1PE description.

    static constexpr uint32_t CCMR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> CCMR2_CC3S; // Capture/Compare 3 selection This bit-field defines the direction of the channel (input/output) as well as the used input. Note: CC3S bits are writable only when the channel is OFF (CC3E = &#39;0 in TIMx_CCER).
    typedef bit_field_t<8, 0x3> CCMR2_CC4S; // Capture/Compare 4 selection This bit-field defines the direction of the channel (input/output) as well as the used input. Note: CC4S bits are writable only when the channel is OFF (CC4E = &#39;0 in TIMx_CCER).
    typedef bit_field_t<4, 0xf> CCMR2_IC3F; // Input capture 3 filter Refer to IC1F[3:0] description.
    typedef bit_field_t<2, 0x3> CCMR2_IC3PSC; // Input capture 3 prescaler Refer to IC1PSC[1:0] description.
    typedef bit_field_t<12, 0xf> CCMR2_IC4F; // Input capture 4 filter Refer to IC1F[3:0] description.
    typedef bit_field_t<10, 0x3> CCMR2_IC4PSC; // Input capture 4 prescaler Refer to IC1PSC[1:0] description.
    static constexpr uint32_t CCMR2_OC3CE = 0x80; // Output compare 3 clear enable Refer to OC1CE description.
    static constexpr uint32_t CCMR2_OC3FE = 0x4; // Output compare 3 fast enable Refer to OC1FE description.
    typedef bit_field_t<4, 0x7> CCMR2_OC3M1; // Output compare 3 mode Refer to OC1M[3:0] description.
    static constexpr uint32_t CCMR2_OC3M2 = 0x10000; // Output compare 3 mode Refer to OC1M[3:0] description.
    static constexpr uint32_t CCMR2_OC3PE = 0x8; // Output compare 3 preload enable Refer to OC1PE description.
    static constexpr uint32_t CCMR2_OC4CE = 0x8000; // Output compare 4 clear enable Refer to OC1CE description.
    static constexpr uint32_t CCMR2_OC4FE = 0x400; // Output compare 4 fast enable Refer to OC1FE description.
    typedef bit_field_t<12, 0x7> CCMR2_OC4M1; // Output compare 4 mode Refer to OC3M[3:0] description.
    static constexpr uint32_t CCMR2_OC4M2 = 0x1000000; // Output compare 4 mode Refer to OC3M[3:0] description.
    static constexpr uint32_t CCMR2_OC4PE = 0x800; // Output compare 4 preload enable Refer to OC1PE description.

    static constexpr uint32_t CCER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCER_CC1E = 0x1; // Capture/Compare 1 output enable When CC1 channel is configured as output, the OC1 level depends on MOE, OSSI, OSSR, OIS1, OIS1N and CC1NE bits, regardless of the CC1E bits state. Refer to for details. Note: On channels having a complementary output, this bit is preloaded. If the CCPC bit is set in the TIMx_CR2 register then the CC1E active bit takes the new value from the preloaded bit only when a Commutation event is generated.
    static constexpr uint32_t CCER_CC1P = 0x2; // Capture/Compare 1 output polarity When CC1 channel is configured as input, both CC1NP/CC1P bits select the active polarity of TI1FP1 and TI2FP1 for trigger or capture operations. CC1NP=0, CC1P=0: non-inverted/rising edge. The circuit is sensitive to TIxFP1 rising edge (capture or trigger operations in reset, external clock or trigger mode), TIxFP1 is not inverted (trigger operation in gated mode or encoder mode). CC1NP=0, CC1P=1: inverted/falling edge. The circuit is sensitive to TIxFP1 falling edge (capture or trigger operations in reset, external clock or trigger mode), TIxFP1 is inverted (trigger operation in gated mode or encoder mode). CC1NP=1, CC1P=1: non-inverted/both edges/ The circuit is sensitive to both TIxFP1 rising and falling edges (capture or trigger operations in reset, external clock or trigger mode), TIxFP1is not inverted (trigger operation in gated mode). This configuration must not be used in encoder mode. CC1NP=1, CC1P=0: The configuration is reserved, it must not be used. Note: This bit is not writable as soon as LOCK level 2 or 3 has been programmed (LOCK bits in TIMx_BDTR register). On channels having a complementary output, this bit is preloaded. If the CCPC bit is set in the TIMx_CR2 register then the CC1P active bit takes the new value from the preloaded bit only when a Commutation event is generated.
    static constexpr uint32_t CCER_CC1NE = 0x4; // Capture/Compare 1 complementary output enable On channels having a complementary output, this bit is preloaded. If the CCPC bit is set in the TIMx_CR2 register then the CC1NE active bit takes the new value from the preloaded bit only when a Commutation event is generated.
    static constexpr uint32_t CCER_CC1NP = 0x8; // Capture/Compare 1 complementary output polarity CC1 channel configured as output: CC1 channel configured as input: This bit is used in conjunction with CC1P to define the polarity of TI1FP1 and TI2FP1. Refer to CC1P description. Note: This bit is not writable as soon as LOCK level 2 or 3 has been programmed (LOCK bits in TIMx_BDTR register) and CC1S=00 (channel configured as output). On channels having a complementary output, this bit is preloaded. If the CCPC bit is set in the TIMx_CR2 register then the CC1NP active bit takes the new value from the preloaded bit only when a Commutation event is generated.
    static constexpr uint32_t CCER_CC2E = 0x10; // Capture/Compare 2 output enable Refer to CC1E description
    static constexpr uint32_t CCER_CC2P = 0x20; // Capture/Compare 2 output polarity Refer to CC1P description
    static constexpr uint32_t CCER_CC2NE = 0x40; // Capture/Compare 2 complementary output enable Refer to CC1NE description
    static constexpr uint32_t CCER_CC2NP = 0x80; // Capture/Compare 2 complementary output polarity Refer to CC1NP description
    static constexpr uint32_t CCER_CC3E = 0x100; // Capture/Compare 3 output enable Refer to CC1E description
    static constexpr uint32_t CCER_CC3P = 0x200; // Capture/Compare 3 output polarity Refer to CC1P description
    static constexpr uint32_t CCER_CC3NE = 0x400; // Capture/Compare 3 complementary output enable Refer to CC1NE description
    static constexpr uint32_t CCER_CC3NP = 0x800; // Capture/Compare 3 complementary output polarity Refer to CC1NP description
    static constexpr uint32_t CCER_CC4E = 0x1000; // Capture/Compare 4 output enable Refer to CC1E description
    static constexpr uint32_t CCER_CC4P = 0x2000; // Capture/Compare 4 output polarity Refer to CC1P description
    static constexpr uint32_t CCER_CC4NP = 0x8000; // Capture/Compare 4 complementary output polarity Refer to CC1NP description
    static constexpr uint32_t CCER_CC5E = 0x10000; // Capture/Compare 5 output enable Refer to CC1E description
    static constexpr uint32_t CCER_CC5P = 0x20000; // Capture/Compare 5 output polarity Refer to CC1P description
    static constexpr uint32_t CCER_CC6E = 0x100000; // Capture/Compare 6 output enable Refer to CC1E description
    static constexpr uint32_t CCER_CC6P = 0x200000; // Capture/Compare 6 output polarity Refer to CC1P description

    static constexpr uint32_t CNT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNT_CNT; // Counter value
    static constexpr uint32_t CNT_UIFCPY = 0x80000000; // UIF copy This bit is a read-only copy of the UIF bit of the TIMx_ISR register. If the UIFREMAP bit in the TIMxCR1 is reset, bit 31 is reserved and read at 0.

    static constexpr uint32_t PSC_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> PSC_PSC; // Prescaler value The counter clock frequency (CK_CNT) is equal to fCK_PSC / (PSC[15:0] + 1). PSC contains the value to be loaded in the active prescaler register at each update event (including when the counter is cleared through UG bit of TIMx_EGR register or through trigger controller when configured in reset mode).

    static constexpr uint32_t ARR_RESET_VALUE = 0xffff; // Reset value
    typedef bit_field_t<0, 0xffff> ARR_ARR; // Auto-reload value ARR is the value to be loaded in the actual auto-reload register. Refer to the for more details about ARR update and behavior. The counter is blocked while the auto-reload value is null.

    static constexpr uint32_t RCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> RCR_REP; // Repetition counter value

    static constexpr uint32_t CCR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR1_CCR1; // Capture/Compare 1 value

    static constexpr uint32_t CCR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR2_CCR2; // Capture/Compare 2 value

    static constexpr uint32_t CCR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR3_CCR3; // Capture/Compare value

    static constexpr uint32_t CCR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR4_CCR4; // Capture/Compare value

    static constexpr uint32_t BDTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> BDTR_DTG; // Dead-time generator setup This bit-field defines the duration of the dead-time inserted between the complementary outputs. DT correspond to this duration. DTG[7:5]=0xx =&gt; DT=DTG[7:0]x tDTG with tDTG=tDTS. DTG[7:5]=10x =&gt; DT=(64+DTG[5:0])xtDTG with tDTG=2xtDTS. DTG[7:5]=110 =&gt; DT=(32+DTG[4:0])xtDTG with tDTG=8xtDTS. DTG[7:5]=111 =&gt; DT=(32+DTG[4:0])xtDTG with tDTG=16xtDTS. Example if tDTS=125ns (8MHz), dead-time possible values are: 0 to 15875ns by 125ns steps, 16s to 31750ns by 250ns steps, 32s to 63s by 1s steps, 64s to 126s by 2s steps Note: This bit-field can not be modified as long as LOCK level 1, 2 or 3 has been programmed (LOCK bits in TIMx_BDTR register).
    typedef bit_field_t<8, 0x3> BDTR_LOCK; // Lock configuration These bits offer a write protection against software errors. Note: The LOCK bits can be written only once after the reset. Once the TIMx_BDTR register has been written, their content is frozen until the next reset.
    static constexpr uint32_t BDTR_OSSI = 0x400; // Off-state selection for Idle mode This bit is used when MOE=0 due to a break event or by a software write, on channels configured as outputs. See OC/OCN enable description for more details (enable register (TIM1_CCERTIMx_CCER)N/A). Note: This bit can not be modified as soon as the LOCK level 2 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t BDTR_OSSR = 0x800; // Off-state selection for Run mode This bit is used when MOE=1 on channels having a complementary output which are configured as outputs. OSSR is not implemented if no complementary output is implemented in the timer. See OC/OCN enable description for more details (enable register (TIM1_CCERTIMx_CCER)N/A). Note: This bit can not be modified as soon as the LOCK level 2 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t BDTR_BKE = 0x1000; // Break enable This bit enables the complete break protection (including all sources connected to bk_acth and BKIN sources, as per ). Note: This bit cannot be modified when LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register). Note: Any write operation to this bit takes a delay of 1 APB clock cycle to become effective.
    static constexpr uint32_t BDTR_BKP = 0x2000; // Break polarity Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register). Note: Any write operation to this bit takes a delay of 1 APB clock cycle to become effective.
    static constexpr uint32_t BDTR_AOE = 0x4000; // Automatic output enable Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t BDTR_MOE = 0x8000; // Main output enable This bit is cleared asynchronously by hardware as soon as one of the break inputs is active (BRK or BRK2). It is set by software or automatically depending on the AOE bit. It is acting only on the channels which are configured in output. In response to a break event or if MOE is written to 0: OC and OCN outputs are disabled or forced to idle state depending on the OSSI bit. See OC/OCN enable description for more details (enable register (TIM1_CCERTIMx_CCER)N/A).
    typedef bit_field_t<16, 0xf> BDTR_BKF; // Break filter This bit-field defines the frequency used to sample BRK input and the length of the digital filter applied to BRK. The digital filter is made of an event counter in which N consecutive events are needed to validate a transition on the output: Note: This bit cannot be modified when LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    typedef bit_field_t<20, 0xf> BDTR_BK2F; // Break 2 filter This bit-field defines the frequency used to sample BRK2 input and the length of the digital filter applied to BRK2. The digital filter is made of an event counter in which N consecutive events are needed to validate a transition on the output: Note: This bit cannot be modified when LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t BDTR_BK2E = 0x1000000; // Break 2 enable Note: The BRK2 must only be used with OSSR = OSSI = 1. Note: This bit cannot be modified when LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register). Note: Any write operation to this bit takes a delay of 1 APB clock cycle to become effective.
    static constexpr uint32_t BDTR_BK2P = 0x2000000; // Break 2 polarity Note: This bit cannot be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register). Note: Any write operation to this bit takes a delay of 1 APB clock cycle to become effective.
    static constexpr uint32_t BDTR_BKDSRM = 0x4000000; // Break Disarm This bit is cleared by hardware when no break source is active. The BKDSRM bit must be set by software to release the bidirectional output control (open-drain output in Hi-Z state) and then be polled it until it is reset by hardware, indicating that the fault condition has disappeared. Note: Any write operation to this bit takes a delay of 1 APB clock cycle to become effective.
    static constexpr uint32_t BDTR_BK2DSRM = 0x8000000; // Break2 Disarm Refer to BKDSRM description
    static constexpr uint32_t BDTR_BKBID = 0x10000000; // Break Bidirectional In the bidirectional mode (BKBID bit set to 1), the break input is configured both in input mode and in open drain output mode. Any active break event asserts a low logic level on the Break input to indicate an internal break event to external devices. Note: This bit cannot be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register). Note: Any write operation to this bit takes a delay of 1 APB clock cycle to become effective.
    static constexpr uint32_t BDTR_BK2BID = 0x20000000; // Break2 bidirectional Refer to BKBID description

    static constexpr uint32_t DCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> DCR_DBA; // DMA base address This 5-bits vector defines the base-address for DMA transfers (when read/write access are done through the TIMx_DMAR address). DBA is defined as an offset starting from the address of the TIMx_CR1 register. Example: ...
    typedef bit_field_t<8, 0x1f> DCR_DBL; // DMA burst length This 5-bit vector defines the length of DMA transfers (the timer recognizes a burst transfer when a read or a write access is done to the TIMx_DMAR address), i.e. the number of transfers. Transfers can be in half-words or in bytes (see example below). ... Example: Let us consider the following transfer: DBL = 7 bytes &amp; DBA = TIMx_CR1. If DBL = 7 bytes and DBA = TIMx_CR1 represents the address of the byte to be transferred, the address of the transfer should be given by the following equation: (TIMx_CR1 address) + DBA + (DMA index), where DMA index = DBL In this example, 7 bytes are added to (TIMx_CR1 address) + DBA, which gives us the address from/to which the data is copied. In this case, the transfer is done to 7 registers starting from the following address: (TIMx_CR1 address) + DBA According to the configuration of the DMA Data Size, several cases may occur: If the DMA Data Size is configured in half-words, 16-bit data is transferred to each of the 7 registers. If the DMA Data Size is configured in bytes, the data is also transferred to 7 registers: the first register contains the first MSB byte, the second register, the first LSB byte and so on. So with the transfer Timer, one also has to specify the size of data transferred by DMA.

    static constexpr uint32_t DMAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DMAR_DMAB; // DMA register for burst accesses A read or write operation to the DMAR register accesses the register located at the address (TIMx_CR1 address) + (DBA + DMA index) x 4 where TIMx_CR1 address is the address of the control register 1, DBA is the DMA base address configured in TIMx_DCR register, DMA index is automatically controlled by the DMA transfer, and ranges from 0 to DBL (DBL configured in TIMx_DCR).

    static constexpr uint32_t OR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OR1_OCREF_CLR = 0x1; // Ocref_clr source selection This bit selects the ocref_clr input source.

    static constexpr uint32_t CCMR3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCMR3_OC6M_BIT3 = 0x1000000; // Output Compare 6 mode bit 3
    static constexpr uint32_t CCMR3_OC5M_BIT3 = 0x10000; // Output Compare 5 mode bit 3
    static constexpr uint32_t CCMR3_OC6CE = 0x8000; // Output compare 6 clear enable
    typedef bit_field_t<12, 0x7> CCMR3_OC6M; // Output compare 6 mode
    static constexpr uint32_t CCMR3_OC6PE = 0x800; // Output compare 6 preload enable
    static constexpr uint32_t CCMR3_OC6FE = 0x400; // Output compare 6 fast enable
    static constexpr uint32_t CCMR3_OC5CE = 0x80; // Output compare 5 clear enable
    typedef bit_field_t<4, 0x7> CCMR3_OC5M; // Output compare 5 mode
    static constexpr uint32_t CCMR3_OC5PE = 0x8; // Output compare 5 preload enable
    static constexpr uint32_t CCMR3_OC5FE = 0x4; // Output compare 5 fast enable

    static constexpr uint32_t CCR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR5_CCR5; // Capture/Compare 5 value CCR5 is the value to be loaded in the actual capture/compare 5 register (preload value). It is loaded permanently if the preload feature is not selected in the TIMx_CCMR3 register (bit OC5PE). Else the preload value is copied in the active capture/compare 5 register when an update event occurs. The active capture/compare register contains the value to be compared to the counter TIMx_CNT and signaled on OC5 output.
    static constexpr uint32_t CCR5_GC5C1 = 0x20000000; // Group Channel 5 and Channel 1 Distortion on Channel 1 output: This bit can either have immediate effect or be preloaded and taken into account after an update event (if preload feature is selected in TIMxCCMR1). Note: it is also possible to apply this distortion on combined PWM signals.
    static constexpr uint32_t CCR5_GC5C2 = 0x40000000; // Group Channel 5 and Channel 2 Distortion on Channel 2 output: This bit can either have immediate effect or be preloaded and taken into account after an update event (if preload feature is selected in TIMxCCMR1). Note: it is also possible to apply this distortion on combined PWM signals.
    static constexpr uint32_t CCR5_GC5C3 = 0x80000000; // Group Channel 5 and Channel 3 Distortion on Channel 3 output: This bit can either have immediate effect or be preloaded and taken into account after an update event (if preload feature is selected in TIMxCCMR2). Note: it is also possible to apply this distortion on combined PWM signals.

    static constexpr uint32_t CCR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR6_CCR6; // Capture/Compare value

    static constexpr uint32_t AF1_RESET_VALUE = 0x1; // Reset value
    static constexpr uint32_t AF1_BKINE = 0x1; // BRK BKIN input enable This bit enables the BKIN alternate function input for the timers BRK input. BKIN input is &#39;ORed with the other BRK sources. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t AF1_BKCMP1E = 0x2; // BRK COMP1 enable This bit enables the COMP1 for the timers BRK input. COMP1 output is &#39;ORed with the other BRK sources. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t AF1_BKCMP2E = 0x4; // BRK COMP2 enable This bit enables the COMP2 for the timers BRK input. COMP2 output is &#39;ORed with the other BRK sources. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t AF1_BKINP = 0x200; // BRK BKIN input polarity This bit selects the BKIN alternate function input sensitivity. It must be programmed together with the BKP polarity bit. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t AF1_BKCMP1P = 0x400; // BRK COMP1 input polarity This bit selects the COMP1 input sensitivity. It must be programmed together with the BKP polarity bit. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t AF1_BKCMP2P = 0x800; // BRK COMP2 input polarity This bit selects the COMP2 input sensitivity. It must be programmed together with the BKP polarity bit. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    typedef bit_field_t<14, 0xf> AF1_ETRSEL; // ETR source selection These bits select the ETR input source. Others: Reserved Note: These bits can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).

    static constexpr uint32_t AF2_RESET_VALUE = 0x1; // Reset value
    static constexpr uint32_t AF2_BK2INE = 0x1; // BRK2 BKIN input enable This bit enables the BKIN2 alternate function input for the timers BRK2 input. BKIN2 input is &#39;ORed with the other BRK2 sources. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t AF2_BK2CMP1E = 0x2; // BRK2 COMP1 enable This bit enables the COMP1 for the timers BRK2 input. COMP1 output is &#39;ORed with the other BRK2 sources. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t AF2_BK2CMP2E = 0x4; // BRK2 COMP2 enable This bit enables the COMP2 for the timers BRK2 input. COMP2 output is &#39;ORed with the other BRK2 sources. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t AF2_BK2INP = 0x200; // BRK2 BKIN2 input polarity This bit selects the BKIN2 alternate function input sensitivity. It must be programmed together with the BK2P polarity bit. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t AF2_BK2CMP1P = 0x400; // BRK2 COMP1 input polarity This bit selects the COMP1 input sensitivity. It must be programmed together with the BK2P polarity bit. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t AF2_BK2CMP2P = 0x800; // BRK2 COMP2 input polarity This bit selects the COMP2 input sensitivity. It must be programmed together with the BK2P polarity bit. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).

    static constexpr uint32_t TISEL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> TISEL_TI1SEL; // selects TI1[0] to TI1[15] input Others: Reserved
    typedef bit_field_t<8, 0xf> TISEL_TI2SEL; // selects TI2[0] to TI2[15] input Others: Reserved
    typedef bit_field_t<16, 0xf> TISEL_TI3SEL; // selects TI3[0] to TI3[15] input Others: Reserved
    typedef bit_field_t<24, 0xf> TISEL_TI4SEL; // selects TI4[0] to TI4[15] input Others: Reserved
};

// TIM1: Advanced-timers

struct stm32g070_tim1_t
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
    volatile uint32_t RCR; // repetition counter register
    volatile uint32_t CCR1; // capture/compare register 1
    volatile uint32_t CCR2; // capture/compare register 2
    volatile uint32_t CCR3; // capture/compare register 3
    volatile uint32_t CCR4; // capture/compare register 4
    volatile uint32_t BDTR; // break and dead-time register
    volatile uint32_t DCR; // DMA control register
    volatile uint32_t DMAR; // DMA address for full transfer
    volatile uint32_t OR1; // option register 1
    volatile uint32_t CCMR3; // capture/compare mode register 2 (output mode)
    volatile uint32_t CCR5; // capture/compare register 4
    volatile uint32_t CCR6; // capture/compare register 4
    volatile uint32_t AF1; // DMA address for full transfer
    volatile uint32_t AF2; // DMA address for full transfer

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR1_CEN = 0x1; // Counter enable
    static constexpr uint32_t CR1_OPM = 0x8; // One-pulse mode
    static constexpr uint32_t CR1_UDIS = 0x2; // Update disable
    static constexpr uint32_t CR1_URS = 0x4; // Update request source
    static constexpr uint32_t CR1_DIR = 0x10; // Direction
    typedef bit_field_t<5, 0x3> CR1_CMS; // Center-aligned mode selection
    static constexpr uint32_t CR1_ARPE = 0x80; // Auto-reload preload enable
    typedef bit_field_t<8, 0x3> CR1_CKD; // Clock division
    static constexpr uint32_t CR1_UIFREMAP = 0x800; // UIF status bit remapping

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<20, 0xf> CR2_MMS2; // Master mode selection 2
    static constexpr uint32_t CR2_OIS6 = 0x40000; // Output Idle state 6 (OC6 output)
    static constexpr uint32_t CR2_OIS5 = 0x10000; // Output Idle state 5 (OC5 output)
    static constexpr uint32_t CR2_OIS4 = 0x4000; // Output Idle state 4
    static constexpr uint32_t CR2_OIS3N = 0x2000; // Output Idle state 3
    static constexpr uint32_t CR2_OIS3 = 0x1000; // Output Idle state 3
    static constexpr uint32_t CR2_OIS2N = 0x800; // Output Idle state 2
    static constexpr uint32_t CR2_OIS2 = 0x400; // Output Idle state 2
    static constexpr uint32_t CR2_OIS1N = 0x200; // Output Idle state 1
    static constexpr uint32_t CR2_OIS1 = 0x100; // Output Idle state 1
    static constexpr uint32_t CR2_TI1S = 0x80; // TI1 selection
    typedef bit_field_t<4, 0x7> CR2_MMS; // Master mode selection
    static constexpr uint32_t CR2_CCDS = 0x8; // Capture/compare DMA selection
    static constexpr uint32_t CR2_CCUS = 0x4; // Capture/compare control update selection
    static constexpr uint32_t CR2_CCPC = 0x1; // Capture/compare preloaded control

    static constexpr uint32_t SMCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> SMCR_SMS; // Slave mode selection
    static constexpr uint32_t SMCR_OCCS = 0x8; // OCREF clear selection
    typedef bit_field_t<4, 0x7> SMCR_TS_4; // Trigger selection
    static constexpr uint32_t SMCR_MSM = 0x80; // Master/Slave mode
    typedef bit_field_t<8, 0xf> SMCR_ETF; // External trigger filter
    typedef bit_field_t<12, 0x3> SMCR_ETPS; // External trigger prescaler
    static constexpr uint32_t SMCR_ECE = 0x4000; // External clock enable
    static constexpr uint32_t SMCR_ETP = 0x8000; // External trigger polarity
    static constexpr uint32_t SMCR_SMS_3 = 0x10000; // Slave mode selection - bit 3
    typedef bit_field_t<20, 0x3> SMCR_TS; // Trigger selection

    static constexpr uint32_t DIER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DIER_UIE = 0x1; // Update interrupt enable
    static constexpr uint32_t DIER_CC1IE = 0x2; // Capture/Compare 1 interrupt enable
    static constexpr uint32_t DIER_CC2IE = 0x4; // Capture/Compare 2 interrupt enable
    static constexpr uint32_t DIER_CC3IE = 0x8; // Capture/Compare 3 interrupt enable
    static constexpr uint32_t DIER_CC4IE = 0x10; // Capture/Compare 4 interrupt enable
    static constexpr uint32_t DIER_COMIE = 0x20; // COM interrupt enable
    static constexpr uint32_t DIER_TIE = 0x40; // Trigger interrupt enable
    static constexpr uint32_t DIER_BIE = 0x80; // Break interrupt enable
    static constexpr uint32_t DIER_UDE = 0x100; // Update DMA request enable
    static constexpr uint32_t DIER_CC1DE = 0x200; // Capture/Compare 1 DMA request enable
    static constexpr uint32_t DIER_CC2DE = 0x400; // Capture/Compare 2 DMA request enable
    static constexpr uint32_t DIER_CC3DE = 0x800; // Capture/Compare 3 DMA request enable
    static constexpr uint32_t DIER_CC4DE = 0x1000; // Capture/Compare 4 DMA request enable
    static constexpr uint32_t DIER_COMDE = 0x2000; // COM DMA request enable
    static constexpr uint32_t DIER_TDE = 0x4000; // Trigger DMA request enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_UIF = 0x1; // Update interrupt flag
    static constexpr uint32_t SR_CC1IF = 0x2; // Capture/compare 1 interrupt flag
    static constexpr uint32_t SR_CC2IF = 0x4; // Capture/Compare 2 interrupt flag
    static constexpr uint32_t SR_CC3IF = 0x8; // Capture/Compare 3 interrupt flag
    static constexpr uint32_t SR_CC4IF = 0x10; // Capture/Compare 4 interrupt flag
    static constexpr uint32_t SR_COMIF = 0x20; // COM interrupt flag
    static constexpr uint32_t SR_TIF = 0x40; // Trigger interrupt flag
    static constexpr uint32_t SR_BIF = 0x80; // Break interrupt flag
    static constexpr uint32_t SR_B2IF = 0x100; // Break 2 interrupt flag
    static constexpr uint32_t SR_CC1OF = 0x200; // Capture/Compare 1 overcapture flag
    static constexpr uint32_t SR_CC2OF = 0x400; // Capture/compare 2 overcapture flag
    static constexpr uint32_t SR_CC3OF = 0x800; // Capture/Compare 3 overcapture flag
    static constexpr uint32_t SR_CC4OF = 0x1000; // Capture/Compare 4 overcapture flag
    static constexpr uint32_t SR_SBIF = 0x2000; // System Break interrupt flag
    static constexpr uint32_t SR_CC5IF = 0x10000; // Compare 5 interrupt flag
    static constexpr uint32_t SR_CC6IF = 0x20000; // Compare 6 interrupt flag

    static constexpr uint32_t EGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t EGR_UG = 0x1; // Update generation
    static constexpr uint32_t EGR_CC1G = 0x2; // Capture/compare 1 generation
    static constexpr uint32_t EGR_CC2G = 0x4; // Capture/compare 2 generation
    static constexpr uint32_t EGR_CC3G = 0x8; // Capture/compare 3 generation
    static constexpr uint32_t EGR_CC4G = 0x10; // Capture/compare 4 generation
    static constexpr uint32_t EGR_COMG = 0x20; // Capture/Compare control update generation
    static constexpr uint32_t EGR_TG = 0x40; // Trigger generation
    static constexpr uint32_t EGR_BG = 0x80; // Break generation
    static constexpr uint32_t EGR_B2G = 0x100; // Break 2 generation

    static constexpr uint32_t CCMR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> CCMR1_CC1S; // Capture/Compare 1 selection
    typedef bit_field_t<8, 0x3> CCMR1_CC2S; // Capture/Compare 2 selection
    static constexpr uint32_t CCMR1_OC1CE = 0x80; // Output Compare 1 clear enable
    static constexpr uint32_t CCMR1_OC1FE = 0x4; // Output Compare 1 fast enable
    typedef bit_field_t<4, 0x7> CCMR1_OC1M; // Output Compare 1 mode
    static constexpr uint32_t CCMR1_OC1M_3 = 0x10000; // Output Compare 1 mode - bit 3
    static constexpr uint32_t CCMR1_OC1PE = 0x8; // Output Compare 1 preload enable
    static constexpr uint32_t CCMR1_OC2CE = 0x8000; // Output Compare 2 clear enable
    static constexpr uint32_t CCMR1_OC2FE = 0x400; // Output Compare 2 fast enable
    typedef bit_field_t<12, 0x7> CCMR1_OC2M; // Output Compare 2 mode
    static constexpr uint32_t CCMR1_OC2M_3 = 0x1000000; // Output Compare 2 mode - bit 3
    static constexpr uint32_t CCMR1_OC2PE = 0x800; // Output Compare 2 preload enable

    static constexpr uint32_t CCMR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> CCMR2_CC3S; // Capture/Compare 3 selection
    typedef bit_field_t<8, 0x3> CCMR2_CC4S; // Capture/Compare 4 selection
    static constexpr uint32_t CCMR2_OC3CE = 0x80; // Output compare 3 clear enable
    static constexpr uint32_t CCMR2_OC3FE = 0x4; // Output compare 3 fast enable
    typedef bit_field_t<4, 0x7> CCMR2_OC3M; // Output compare 3 mode
    static constexpr uint32_t CCMR2_OC3M_3 = 0x10000; // Output Compare 3 mode - bit 3
    static constexpr uint32_t CCMR2_OC3PE = 0x8; // Output compare 3 preload enable
    static constexpr uint32_t CCMR2_OC4CE = 0x8000; // Output compare 4 clear enable
    static constexpr uint32_t CCMR2_OC4FE = 0x400; // Output compare 4 fast enable
    typedef bit_field_t<12, 0x7> CCMR2_OC4M; // Output compare 4 mode
    static constexpr uint32_t CCMR2_OC4M_3 = 0x1000000; // Output Compare 4 mode - bit 3
    static constexpr uint32_t CCMR2_OC4PE = 0x800; // Output compare 4 preload enable

    static constexpr uint32_t CCER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCER_CC1E = 0x1; // Capture/Compare 1 output enable
    static constexpr uint32_t CCER_CC1P = 0x2; // Capture/Compare 1 output Polarity
    static constexpr uint32_t CCER_CC1NE = 0x4; // Capture/Compare 1 complementary output enable
    static constexpr uint32_t CCER_CC1NP = 0x8; // Capture/Compare 1 output Polarity
    static constexpr uint32_t CCER_CC2E = 0x10; // Capture/Compare 2 output enable
    static constexpr uint32_t CCER_CC2P = 0x20; // Capture/Compare 2 output Polarity
    static constexpr uint32_t CCER_CC2NE = 0x40; // Capture/Compare 2 complementary output enable
    static constexpr uint32_t CCER_CC2NP = 0x80; // Capture/Compare 2 output Polarity
    static constexpr uint32_t CCER_CC3E = 0x100; // Capture/Compare 3 output enable
    static constexpr uint32_t CCER_CC3P = 0x200; // Capture/Compare 3 output Polarity
    static constexpr uint32_t CCER_CC3NE = 0x400; // Capture/Compare 3 complementary output enable
    static constexpr uint32_t CCER_CC3NP = 0x800; // Capture/Compare 3 output Polarity
    static constexpr uint32_t CCER_CC4E = 0x1000; // Capture/Compare 4 output enable
    static constexpr uint32_t CCER_CC4P = 0x2000; // Capture/Compare 3 output Polarity
    static constexpr uint32_t CCER_CC4NP = 0x8000; // Capture/Compare 4 complementary output polarity
    static constexpr uint32_t CCER_CC5E = 0x10000; // Capture/Compare 5 output enable
    static constexpr uint32_t CCER_CC5P = 0x20000; // Capture/Compare 5 output polarity
    static constexpr uint32_t CCER_CC6E = 0x100000; // Capture/Compare 6 output enable
    static constexpr uint32_t CCER_CC6P = 0x200000; // Capture/Compare 6 output polarity

    static constexpr uint32_t CNT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNT_CNT; // counter value
    static constexpr uint32_t CNT_UIFCPY = 0x80000000; // UIF copy

    static constexpr uint32_t PSC_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> PSC_PSC; // Prescaler value

    static constexpr uint32_t ARR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> ARR_ARR; // Auto-reload value

    static constexpr uint32_t RCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> RCR_REP; // Repetition counter value

    static constexpr uint32_t CCR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR1_CCR1; // Capture/Compare 1 value

    static constexpr uint32_t CCR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR2_CCR2; // Capture/Compare 2 value

    static constexpr uint32_t CCR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR3_CCR3; // Capture/Compare value

    static constexpr uint32_t CCR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR4_CCR4; // Capture/Compare value

    static constexpr uint32_t BDTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> BDTR_DTG; // Dead-time generator setup
    typedef bit_field_t<8, 0x3> BDTR_LOCK; // Lock configuration
    static constexpr uint32_t BDTR_OSSI = 0x400; // Off-state selection for Idle mode
    static constexpr uint32_t BDTR_OSSR = 0x800; // Off-state selection for Run mode
    static constexpr uint32_t BDTR_BKE = 0x1000; // Break enable
    static constexpr uint32_t BDTR_BKP = 0x2000; // Break polarity
    static constexpr uint32_t BDTR_AOE = 0x4000; // Automatic output enable
    static constexpr uint32_t BDTR_MOE = 0x8000; // Main output enable
    typedef bit_field_t<16, 0xf> BDTR_BKF; // Break filter
    typedef bit_field_t<20, 0xf> BDTR_BK2F; // Break 2 filter
    static constexpr uint32_t BDTR_BK2E = 0x1000000; // Break 2 enable
    static constexpr uint32_t BDTR_BK2P = 0x2000000; // Break 2 polarity
    static constexpr uint32_t BDTR_BKDSRM = 0x4000000; // Break Disarm
    static constexpr uint32_t BDTR_BK2DSRM = 0x8000000; // Break2 Disarm
    static constexpr uint32_t BDTR_BKBID = 0x10000000; // Break Bidirectional
    static constexpr uint32_t BDTR_BK2ID = 0x20000000; // Break2 bidirectional

    static constexpr uint32_t DCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0x1f> DCR_DBL; // DMA burst length
    typedef bit_field_t<0, 0x1f> DCR_DBA; // DMA base address

    static constexpr uint32_t DMAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DMAR_DMAB; // DMA register for burst accesses

    static constexpr uint32_t OR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OR1_OCREF_CLR = 0x1; // Ocref_clr source selection

    static constexpr uint32_t CCMR3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCMR3_OC6M_BIT3 = 0x1000000; // Output Compare 6 mode bit 3
    static constexpr uint32_t CCMR3_OC5M_BIT3 = 0x10000; // Output Compare 5 mode bit 3
    static constexpr uint32_t CCMR3_OC6CE = 0x8000; // Output compare 6 clear enable
    typedef bit_field_t<12, 0x7> CCMR3_OC6M; // Output compare 6 mode
    static constexpr uint32_t CCMR3_OC6PE = 0x800; // Output compare 6 preload enable
    static constexpr uint32_t CCMR3_OC6FE = 0x400; // Output compare 6 fast enable
    static constexpr uint32_t CCMR3_OC5CE = 0x80; // Output compare 5 clear enable
    typedef bit_field_t<4, 0x7> CCMR3_OC5M; // Output compare 5 mode
    static constexpr uint32_t CCMR3_OC5PE = 0x8; // Output compare 5 preload enable
    static constexpr uint32_t CCMR3_OC5FE = 0x4; // Output compare 5 fast enable

    static constexpr uint32_t CCR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR5_CCR5; // Capture/Compare value
    static constexpr uint32_t CCR5_GC5C1 = 0x20000000; // Group Channel 5 and Channel 1
    static constexpr uint32_t CCR5_GC5C2 = 0x40000000; // Group Channel 5 and Channel 2
    static constexpr uint32_t CCR5_GC5C3 = 0x80000000; // Group Channel 5 and Channel 3

    static constexpr uint32_t CCR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR6_CCR6; // Capture/Compare value

    static constexpr uint32_t AF1_RESET_VALUE = 0x1; // Reset value
    static constexpr uint32_t AF1_BKINE = 0x1; // BRK BKIN input enable
    static constexpr uint32_t AF1_BKCMP1E = 0x2; // BRK COMP1 enable
    static constexpr uint32_t AF1_BKCMP2E = 0x4; // BRK COMP2 enable
    static constexpr uint32_t AF1_BKINP = 0x200; // BRK BKIN input polarity
    static constexpr uint32_t AF1_BKCMP1P = 0x400; // BRK COMP1 input polarity
    static constexpr uint32_t AF1_BKCMP2P = 0x800; // BRK COMP2 input polarity
    typedef bit_field_t<14, 0x7> AF1_ETRSEL; // ETR source selection

    static constexpr uint32_t AF2_RESET_VALUE = 0x1; // Reset value
    static constexpr uint32_t AF2_BK2INE = 0x1; // BRK2 BKIN input enable
    static constexpr uint32_t AF2_BK2CMP1E = 0x2; // BRK2 COMP1 enable
    static constexpr uint32_t AF2_BK2CMP2E = 0x4; // BRK2 COMP2 enable
    static constexpr uint32_t AF2_BK2DFBK0E = 0x100; // BRK2 DFSDM_BREAK0 enable
    static constexpr uint32_t AF2_BK2INP = 0x200; // BRK2 BKIN input polarity
    static constexpr uint32_t AF2_BK2CMP1P = 0x400; // BRK2 COMP1 input polarity
    static constexpr uint32_t AF2_BK2CMP2P = 0x800; // BRK2 COMP2 input polarity
};

// TIM2: General-purpose-timers

struct stm32g030_tim2_t
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
    reserved_t<0x1> _0x44;
    volatile uint32_t DCR; // DMA control register
    volatile uint32_t DMAR; // DMA address for full transfer
    volatile uint32_t OR1; // TIM option register
    reserved_t<0x3> _0x54;
    volatile uint32_t AF1; // TIM alternate function option register 1
    reserved_t<0x1> _0x64;
    volatile uint32_t TISEL; // TIM alternate function option register 1

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
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
    static constexpr uint32_t CR2_TI1S = 0x80; // TI1 selection
    typedef bit_field_t<4, 0x7> CR2_MMS; // Master mode selection
    static constexpr uint32_t CR2_CCDS = 0x8; // Capture/compare DMA selection

    static constexpr uint32_t SMCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<20, 0x3> SMCR_TS_4_3; // Trigger selection
    static constexpr uint32_t SMCR_SMS_3 = 0x10000; // Slave mode selection - bit 3
    static constexpr uint32_t SMCR_ETP = 0x8000; // External trigger polarity
    static constexpr uint32_t SMCR_ECE = 0x4000; // External clock enable
    typedef bit_field_t<12, 0x3> SMCR_ETPS; // External trigger prescaler
    typedef bit_field_t<8, 0xf> SMCR_ETF; // External trigger filter
    static constexpr uint32_t SMCR_MSM = 0x80; // Master/Slave mode
    typedef bit_field_t<4, 0x7> SMCR_TS; // Trigger selection
    static constexpr uint32_t SMCR_OCCS = 0x8; // OCREF clear selection
    typedef bit_field_t<0, 0x7> SMCR_SMS; // Slave mode selection

    static constexpr uint32_t DIER_RESET_VALUE = 0x0; // Reset value
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
    static constexpr uint32_t CCMR1_OC1M_3 = 0x10000; // Output Compare 1 mode - bit 3
    static constexpr uint32_t CCMR1_OC1PE = 0x8; // Output compare 1 preload enable
    static constexpr uint32_t CCMR1_OC2CE = 0x8000; // Output compare 2 clear enable
    static constexpr uint32_t CCMR1_OC2FE = 0x400; // Output compare 2 fast enable
    typedef bit_field_t<12, 0x7> CCMR1_OC2M; // Output compare 2 mode
    static constexpr uint32_t CCMR1_OC2M_3 = 0x1000000; // Output Compare 2 mode - bit 3
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
    static constexpr uint32_t CCMR2_OC3M_3 = 0x10000; // Output Compare 3 mode - bit 3
    static constexpr uint32_t CCMR2_OC3PE = 0x8; // Output compare 3 preload enable
    static constexpr uint32_t CCMR2_OC4CE = 0x8000; // Output compare 4 clear enable
    static constexpr uint32_t CCMR2_OC4FE = 0x400; // Output compare 4 fast enable
    typedef bit_field_t<12, 0x7> CCMR2_OC4M; // Output compare 4 mode
    static constexpr uint32_t CCMR2_OC4M_3 = 0x1000000; // Output Compare 4 mode - bit 3
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
    typedef bit_field_t<16, 0xffff> CNT_CNT_H; // High counter value (TIM2 only)
    typedef bit_field_t<0, 0xffff> CNT_CNT_L; // Low counter value

    static constexpr uint32_t PSC_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> PSC_PSC; // Prescaler value

    static constexpr uint32_t ARR_RESET_VALUE = 0x0; // Reset value
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


    static constexpr uint32_t DCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0x1f> DCR_DBL; // DMA burst length
    typedef bit_field_t<0, 0x1f> DCR_DBA; // DMA base address

    static constexpr uint32_t DMAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DMAR_DMAB; // DMA register for burst accesses

    static constexpr uint32_t OR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OR1_IOCREF_CLR = 0x1; // IOCREF_CLR


    static constexpr uint32_t AF1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<14, 0xf> AF1_ETRSEL; // External trigger source selection


    static constexpr uint32_t TISEL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> TISEL_TI1SEL; // TI1SEL
    typedef bit_field_t<8, 0xf> TISEL_TI2SEL; // TI2SEL
};

// TIM2: General-purpose-timers

struct stm32g051_tim2_t
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
    reserved_t<0x1> _0x44;
    volatile uint32_t DCR; // DMA control register
    volatile uint32_t DMAR; // DMA address for full transfer
    volatile uint32_t OR1; // TIM option register
    reserved_t<0x3> _0x54;
    volatile uint32_t AF1; // TIM alternate function option register 1
    reserved_t<0x1> _0x64;
    volatile uint32_t TISEL; // TIM alternate function option register 1

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR1_CEN = 0x1; // Counter enable Note: External clock, gated mode and encoder mode can work only if the CEN bit has been previously set by software. However trigger mode can set the CEN bit automatically by hardware. CEN is cleared automatically in one-pulse mode, when an update event occurs.
    static constexpr uint32_t CR1_UDIS = 0x2; // Update disable This bit is set and cleared by software to enable/disable UEV event generation. Counter overflow/underflow Setting the UG bit Update generation through the slave mode controller Buffered registers are then loaded with their preload values.
    static constexpr uint32_t CR1_URS = 0x4; // Update request source This bit is set and cleared by software to select the UEV event sources. Counter overflow/underflow Setting the UG bit Update generation through the slave mode controller
    static constexpr uint32_t CR1_OPM = 0x8; // One-pulse mode
    static constexpr uint32_t CR1_DIR = 0x10; // Direction Note: This bit is read only when the timer is configured in Center-aligned mode or Encoder mode.
    typedef bit_field_t<5, 0x3> CR1_CMS; // Center-aligned mode selection Note: It is not allowed to switch from edge-aligned mode to center-aligned mode as long as the counter is enabled (CEN=1)
    static constexpr uint32_t CR1_ARPE = 0x80; // Auto-reload preload enable
    typedef bit_field_t<8, 0x3> CR1_CKD; // Clock division This bit-field indicates the division ratio between the timer clock (CK_INT) frequency and sampling clock used by the digital filters (ETR, TIx),
    static constexpr uint32_t CR1_UIFREMAP = 0x800; // UIF status bit remapping

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR2_CCDS = 0x8; // Capture/compare DMA selection
    typedef bit_field_t<4, 0x7> CR2_MMS; // Master mode selection These bits permit to select the information to be sent in master mode to slave timers for synchronization (TRGO). The combination is as follows: When the Counter Enable signal is controlled by the trigger input, there is a delay on TRGO, except if the master/slave mode is selected (see the MSM bit description in TIMx_SMCR register). Note: The clock of the slave timer or ADC must be enabled prior to receive events from the master timer, and must not be changed on-the-fly while triggers are received from the master timer.
    static constexpr uint32_t CR2_TI1S = 0x80; // TI1 selection

    static constexpr uint32_t SMCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> SMCR_SMS1; // Slave mode selection When external signals are selected the active edge of the trigger signal (TRGI) is linked to the polarity selected on the external input (see Input Control register and Control Register description. reinitializes the counter, generates an update of the registers and starts the counter. Note: The gated mode must not be used if TI1F_ED is selected as the trigger input (TS=00100). Indeed, TI1F_ED outputs 1 pulse for each transition on TI1F, whereas the gated mode checks the level of the trigger signal. Note: The clock of the slave peripherals (timer, ADC, ...) receiving the TRGO or the TRGO2 signals must be enabled prior to receive events from the master timer, and the clock frequency (prescaler) must not be changed on-the-fly while triggers are received from the master timer.
    static constexpr uint32_t SMCR_OCCS = 0x8; // OCREF clear selection This bit is used to select the OCREF clear source
    typedef bit_field_t<4, 0x7> SMCR_TS1; // Trigger selection This bit-field selects the trigger input to be used to synchronize the counter. Others: Reserved See for more details on ITRx meaning for each Timer. Note: These bits must be changed only when they are not used (e.g. when SMS=000) to avoid wrong edge detections at the transition.
    static constexpr uint32_t SMCR_MSM = 0x80; // Master/Slave mode
    typedef bit_field_t<8, 0xf> SMCR_ETF; // External trigger filter This bit-field then defines the frequency used to sample ETRP signal and the length of the digital filter applied to ETRP. The digital filter is made of an event counter in which N consecutive events are needed to validate a transition on the output:
    typedef bit_field_t<12, 0x3> SMCR_ETPS; // External trigger prescaler External trigger signal ETRP frequency must be at most 1/4 of CK_INT frequency. A prescaler can be enabled to reduce ETRP frequency. It is useful when inputting fast external clocks.
    static constexpr uint32_t SMCR_ECE = 0x4000; // External clock enable This bit enables External clock mode 2. Note: Setting the ECE bit has the same effect as selecting external clock mode 1 with TRGI connected to ETRF (SMS=111 and TS=00111). It is possible to simultaneously use external clock mode 2 with the following slave modes: reset mode, gated mode and trigger mode. Nevertheless, TRGI must not be connected to ETRF in this case (TS bits must not be 00111). If external clock mode 1 and external clock mode 2 are enabled at the same time, the external clock input is ETRF.
    static constexpr uint32_t SMCR_ETP = 0x8000; // External trigger polarity This bit selects whether ETR or ETR is used for trigger operations
    static constexpr uint32_t SMCR_SMS2 = 0x10000; // Slave mode selection When external signals are selected the active edge of the trigger signal (TRGI) is linked to the polarity selected on the external input (see Input Control register and Control Register description. reinitializes the counter, generates an update of the registers and starts the counter. Note: The gated mode must not be used if TI1F_ED is selected as the trigger input (TS=00100). Indeed, TI1F_ED outputs 1 pulse for each transition on TI1F, whereas the gated mode checks the level of the trigger signal. Note: The clock of the slave peripherals (timer, ADC, ...) receiving the TRGO or the TRGO2 signals must be enabled prior to receive events from the master timer, and the clock frequency (prescaler) must not be changed on-the-fly while triggers are received from the master timer.
    typedef bit_field_t<20, 0x3> SMCR_TS2; // Trigger selection This bit-field selects the trigger input to be used to synchronize the counter. Others: Reserved See for more details on ITRx meaning for each Timer. Note: These bits must be changed only when they are not used (e.g. when SMS=000) to avoid wrong edge detections at the transition.

    static constexpr uint32_t DIER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DIER_UIE = 0x1; // Update interrupt enable
    static constexpr uint32_t DIER_CC1IE = 0x2; // Capture/Compare 1 interrupt enable
    static constexpr uint32_t DIER_CC2IE = 0x4; // Capture/Compare 2 interrupt enable
    static constexpr uint32_t DIER_CC3IE = 0x8; // Capture/Compare 3 interrupt enable
    static constexpr uint32_t DIER_CC4IE = 0x10; // Capture/Compare 4 interrupt enable
    static constexpr uint32_t DIER_TIE = 0x40; // Trigger interrupt enable
    static constexpr uint32_t DIER_UDE = 0x100; // Update DMA request enable
    static constexpr uint32_t DIER_CC1DE = 0x200; // Capture/Compare 1 DMA request enable
    static constexpr uint32_t DIER_CC2DE = 0x400; // Capture/Compare 2 DMA request enable
    static constexpr uint32_t DIER_CC3DE = 0x800; // Capture/Compare 3 DMA request enable
    static constexpr uint32_t DIER_CC4DE = 0x1000; // Capture/Compare 4 DMA request enable
    static constexpr uint32_t DIER_TDE = 0x4000; // Trigger DMA request enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_UIF = 0x1; // Update interrupt flag This bit is set by hardware on an update event. It is cleared by software. At overflow or underflow and if UDIS=0 in the TIMx_CR1 register. When CNT is reinitialized by software using the UG bit in TIMx_EGR register, if URS=0 and UDIS=0 in the TIMx_CR1 register. When CNT is reinitialized by a trigger event (refer to the synchro control register description), if URS=0 and UDIS=0 in the TIMx_CR1 register.
    static constexpr uint32_t SR_CC1IF = 0x2; // Capture/compare 1 interrupt flag This flag is set by hardware. It is cleared by software (input capture or output compare mode) or by reading the TIMx_CCR1 register (input capture mode only). If channel CC1 is configured as output: this flag is set when the content of the counter TIMx_CNT matches the content of the TIMx_CCR1 register. When the content of TIMx_CCR1 is greater than the content of TIMx_ARR, the CC1IF bit goes high on the counter overflow (in up-counting and up/down-counting modes) or underflow (in down-counting mode). There are 3 possible options for flag setting in center-aligned mode, refer to the CMS bits in the TIMx_CR1 register for the full description. If channel CC1 is configured as input: this bit is set when counter value has been captured in TIMx_CCR1 register (an edge has been detected on IC1, as per the edge sensitivity defined with the CC1P and CC1NP bits setting, in TIMx_CCER).
    static constexpr uint32_t SR_CC2IF = 0x4; // Capture/Compare 2 interrupt flag Refer to CC1IF description
    static constexpr uint32_t SR_CC3IF = 0x8; // Capture/Compare 3 interrupt flag Refer to CC1IF description
    static constexpr uint32_t SR_CC4IF = 0x10; // Capture/Compare 4 interrupt flag Refer to CC1IF description
    static constexpr uint32_t SR_TIF = 0x40; // Trigger interrupt flag This flag is set by hardware on the TRG trigger event (active edge detected on TRGI input when the slave mode controller is enabled in all modes but gated mode. It is set when the counter starts or stops when gated mode is selected. It is cleared by software.
    static constexpr uint32_t SR_CC1OF = 0x200; // Capture/Compare 1 overcapture flag This flag is set by hardware only when the corresponding channel is configured in input capture mode. It is cleared by software by writing it to &#39;0.
    static constexpr uint32_t SR_CC2OF = 0x400; // Capture/compare 2 overcapture flag refer to CC1OF description
    static constexpr uint32_t SR_CC3OF = 0x800; // Capture/Compare 3 overcapture flag refer to CC1OF description
    static constexpr uint32_t SR_CC4OF = 0x1000; // Capture/Compare 4 overcapture flag refer to CC1OF description

    static constexpr uint32_t EGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t EGR_UG = 0x1; // Update generation This bit can be set by software, it is automatically cleared by hardware.
    static constexpr uint32_t EGR_CC1G = 0x2; // Capture/compare 1 generation This bit is set by software in order to generate an event, it is automatically cleared by hardware. If channel CC1 is configured as output: CC1IF flag is set, Corresponding interrupt or DMA request is sent if enabled. If channel CC1 is configured as input: The current value of the counter is captured in TIMx_CCR1 register. The CC1IF flag is set, the corresponding interrupt or DMA request is sent if enabled. The CC1OF flag is set if the CC1IF flag was already high.
    static constexpr uint32_t EGR_CC2G = 0x4; // Capture/compare 2 generation Refer to CC1G description
    static constexpr uint32_t EGR_CC3G = 0x8; // Capture/compare 3 generation Refer to CC1G description
    static constexpr uint32_t EGR_CC4G = 0x10; // Capture/compare 4 generation Refer to CC1G description
    static constexpr uint32_t EGR_TG = 0x40; // Trigger generation This bit is set by software in order to generate an event, it is automatically cleared by hardware.

    static constexpr uint32_t CCMR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> CCMR1_CC1S; // Capture/Compare 1 selection This bit-field defines the direction of the channel (input/output) as well as the used input. Note: CC1S bits are writable only when the channel is OFF (CC1E = 0 in TIMx_CCER).
    typedef bit_field_t<8, 0x3> CCMR1_CC2S; // Capture/compare 2 selection This bit-field defines the direction of the channel (input/output) as well as the used input. Note: CC2S bits are writable only when the channel is OFF (CC2E = 0 in TIMx_CCER).
    typedef bit_field_t<4, 0xf> CCMR1_IC1F; // Input capture 1 filter
    typedef bit_field_t<2, 0x3> CCMR1_IC1PSC; // Input capture 1 prescaler
    typedef bit_field_t<12, 0xf> CCMR1_IC2F; // Input capture 2 filter
    typedef bit_field_t<10, 0x3> CCMR1_IC2PSC; // Input capture 2 prescaler
    static constexpr uint32_t CCMR1_OC1CE = 0x80; // Output compare 1 clear enable
    static constexpr uint32_t CCMR1_OC1FE = 0x4; // Output compare 1 fast enable
    typedef bit_field_t<4, 0x7> CCMR1_OC1M1; // Output compare 1 mode These bits define the behavior of the output reference signal OC1REF from which OC1 and OC1N are derived. OC1REF is active high whereas OC1 and OC1N active level depends on CC1P and CC1NP bits. Note: In PWM mode, the OCREF level changes only when the result of the comparison changes or when the output compare mode switches from frozen mode to PWM mode. Note: The OC1M[3] bit is not contiguous, located in bit 16.
    static constexpr uint32_t CCMR1_OC1M_3 = 0x10000; // Output Compare 1 mode - bit 3
    static constexpr uint32_t CCMR1_OC1PE = 0x8; // Output compare 1 preload enable Note: The PWM mode can be used without validating the preload register only in one-pulse mode (OPM bit set in TIMx_CR1 register). Else the behavior is not guaranteed.
    static constexpr uint32_t CCMR1_OC2CE = 0x8000; // Output compare 2 clear enable
    static constexpr uint32_t CCMR1_OC2FE = 0x400; // Output compare 2 fast enable
    typedef bit_field_t<12, 0x7> CCMR1_OC2M; // Output compare 2 mode
    static constexpr uint32_t CCMR1_OC2M_3 = 0x1000000; // Output Compare 2 mode - bit 3
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
    static constexpr uint32_t CCMR2_OC3M_3 = 0x10000; // Output Compare 3 mode - bit 3
    static constexpr uint32_t CCMR2_OC3PE = 0x8; // Output compare 3 preload enable
    static constexpr uint32_t CCMR2_OC4CE = 0x8000; // Output compare 4 clear enable
    static constexpr uint32_t CCMR2_OC4FE = 0x400; // Output compare 4 fast enable
    typedef bit_field_t<12, 0x7> CCMR2_OC4M; // Output compare 4 mode
    static constexpr uint32_t CCMR2_OC4M_3 = 0x1000000; // Output Compare 4 mode - bit 3
    static constexpr uint32_t CCMR2_OC4PE = 0x800; // Output compare 4 preload enable

    static constexpr uint32_t CCER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCER_CC1E = 0x1; // Capture/Compare 1 output enable.
    static constexpr uint32_t CCER_CC1P = 0x2; // Capture/Compare 1 output Polarity. When CC1 channel is configured as input, both CC1NP/CC1P bits select the active polarity of TI1FP1 and TI2FP1 for trigger or capture operations. CC1NP=0, CC1P=0: non-inverted/rising edge. The circuit is sensitive to TIxFP1 rising edge (capture or trigger operations in reset, external clock or trigger mode), TIxFP1 is not inverted (trigger operation in gated mode or encoder mode). CC1NP=0, CC1P=1: inverted/falling edge. The circuit is sensitive to TIxFP1 falling edge (capture or trigger operations in reset, external clock or trigger mode), TIxFP1 is inverted (trigger operation in gated mode or encoder mode). CC1NP=1, CC1P=1: non-inverted/both edges. The circuit is sensitive to both TIxFP1 rising and falling edges (capture or trigger operations in reset, external clock or trigger mode), TIxFP1is not inverted (trigger operation in gated mode). This configuration must not be used in encoder mode. CC1NP=1, CC1P=0: This configuration is reserved, it must not be used.
    static constexpr uint32_t CCER_CC1NP = 0x8; // Capture/Compare 1 output Polarity. CC1 channel configured as output: CC1NP must be kept cleared in this case. CC1 channel configured as input: This bit is used in conjunction with CC1P to define TI1FP1/TI2FP1 polarity. refer to CC1P description.
    static constexpr uint32_t CCER_CC2E = 0x10; // Capture/Compare 2 output enable. Refer to CC1E description
    static constexpr uint32_t CCER_CC2P = 0x20; // Capture/Compare 2 output Polarity. refer to CC1P description
    static constexpr uint32_t CCER_CC2NP = 0x80; // Capture/Compare 2 output Polarity. Refer to CC1NP description
    static constexpr uint32_t CCER_CC3E = 0x100; // Capture/Compare 3 output enable. Refer to CC1E description
    static constexpr uint32_t CCER_CC3P = 0x200; // Capture/Compare 3 output Polarity. Refer to CC1P description
    static constexpr uint32_t CCER_CC3NP = 0x800; // Capture/Compare 3 output Polarity. Refer to CC1NP description
    static constexpr uint32_t CCER_CC4E = 0x1000; // Capture/Compare 4 output enable. refer to CC1E description
    static constexpr uint32_t CCER_CC4P = 0x2000; // Capture/Compare 4 output Polarity. Refer to CC1P description
    static constexpr uint32_t CCER_CC4NP = 0x8000; // Capture/Compare 4 output Polarity. Refer to CC1NP description

    static constexpr uint32_t CNT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7fffffff> CNT_CNT; // Most significant part counter value (TIM2) nullLeast significant part of counter value
    typedef bit_field_t<16, 0xffff> CNT_CNT_H; // High counter value (TIM2 only)
    typedef bit_field_t<0, 0xffff> CNT_CNT_L; // Low counter value
    static constexpr uint32_t CNT_UIFCPY = 0x80000000; // UIF Copy This bit is a read-only copy of the UIF bit of the TIMx_ISR register

    static constexpr uint32_t PSC_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> PSC_PSC; // Prescaler value

    static constexpr uint32_t ARR_RESET_VALUE = 0xffffffff; // Reset value
    typedef bit_field_t<0, 0xffffffff> ARR_ARR; // High auto-reload value (TIM2) nullLow Auto-reload value ARR is the value to be loaded in the actual auto-reload register. Refer to the for more details about ARR update and behavior. The counter is blocked while the auto-reload value is null.


    static constexpr uint32_t CCR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CCR1_CCR1; // High Capture/Compare 1 value (TIM2) nullLow Capture/Compare 1 value If channel CC1 is configured as output: CCR1 is the value to be loaded in the actual capture/compare 1 register (preload value). It is loaded permanently if the preload feature is not selected in the TIMx_CCMR1 register (bit OC1PE). Else the preload value is copied in the active capture/compare 1 register when an update event occurs. The active capture/compare register contains the value to be compared to the counter TIMx_CNT and signaled on OC1 output. If channel CC1is configured as input: CCR1 is the counter value transferred by the last input capture 1 event (IC1). The TIMx_CCR1 register is read-only and cannot be programmed.

    static constexpr uint32_t CCR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CCR2_CCR2; // High Capture/Compare 2 value (TIM2) nullLow Capture/Compare 2 value If channel CC2 is configured as output: CCR2 is the value to be loaded in the actual capture/compare 2 register (preload value). It is loaded permanently if the preload feature is not selected in the TIMx_CCMR1 register (bit OC2PE). Else the preload value is copied in the active capture/compare 2 register when an update event occurs. The active capture/compare register contains the value to be compared to the counter TIMx_CNT and signalled on OC2 output. If channel CC2 is configured as input: CCR2 is the counter value transferred by the last input capture 2 event (IC2). The TIMx_CCR2 register is read-only and cannot be programmed.

    static constexpr uint32_t CCR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CCR3_CCR3; // High Capture/Compare 3 value (TIM2) nullLow Capture/Compare value If channel CC3 is configured as output: CCR3 is the value to be loaded in the actual capture/compare 3 register (preload value). It is loaded permanently if the preload feature is not selected in the TIMx_CCMR2 register (bit OC3PE). Else the preload value is copied in the active capture/compare 3 register when an update event occurs. The active capture/compare register contains the value to be compared to the counter TIMx_CNT and signalled on OC3 output. If channel CC3is configured as input: CCR3 is the counter value transferred by the last input capture 3 event (IC3). The TIMx_CCR3 register is read-only and cannot be programmed.

    static constexpr uint32_t CCR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CCR4_CCR4; // High Capture/Compare 4 value (TIM2) nullLow Capture/Compare value if CC4 channel is configured as output (CC4S bits): CCR4 is the value to be loaded in the actual capture/compare 4 register (preload value). It is loaded permanently if the preload feature is not selected in the TIMx_CCMR2 register (bit OC4PE). Else the preload value is copied in the active capture/compare 4 register when an update event occurs. The active capture/compare register contains the value to be compared to the counter TIMx_CNT and signalled on OC4 output. if CC4 channel is configured as input (CC4S bits in TIMx_CCMR4 register): CCR4 is the counter value transferred by the last input capture 4 event (IC4). The TIMx_CCR4 register is read-only and cannot be programmed.


    static constexpr uint32_t DCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> DCR_DBA; // DMA base address This 5-bit vector defines the base-address for DMA transfers (when read/write access are done through the TIMx_DMAR address). DBA is defined as an offset starting from the address of the TIMx_CR1 register. Example: ... Example: Let us consider the following transfer: DBL = 7 transfers &amp; DBA = TIMx_CR1. In this case the transfer is done to/from 7 registers starting from the TIMx_CR1 address.
    typedef bit_field_t<8, 0x1f> DCR_DBL; // DMA burst length This 5-bit vector defines the number of DMA transfers (the timer recognizes a burst transfer when a read or a write access is done to the TIMx_DMAR address). ...

    static constexpr uint32_t DMAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DMAR_DMAB; // DMA register for burst accesses

    static constexpr uint32_t OR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OR1_OCREF_CLR = 0x1; // Ocref_clr source selection This bit selects the ocref_clr input source.


    static constexpr uint32_t AF1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<14, 0xf> AF1_ETRSEL; // ETR source selection These bits select the ETR input source. Others: Reserved


    static constexpr uint32_t TISEL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> TISEL_TI1SEL; // TI1[0] to TI1[15] input selection These bits select the TI1[0] to TI1[15] input source. Others: Reserved
    typedef bit_field_t<8, 0xf> TISEL_TI2SEL; // TI2[0] to TI2[15] input selection These bits select the TI2[0] to TI2[15] input source. Others: Reserved
};

// TIM3: General-purpose-timers

struct stm32g050_tim3_t
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
    reserved_t<0x1> _0x44;
    volatile uint32_t DCR; // DMA control register
    volatile uint32_t DMAR; // DMA address for full transfer
    reserved_t<0x4> _0x50;
    volatile uint32_t AF1; // TIM alternate function option register 1
    reserved_t<0x1> _0x64;
    volatile uint32_t TISEL; // TIM alternate function option register 1

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR1_CEN = 0x1; // Counter enable Note: External clock, gated mode and encoder mode can work only if the CEN bit has been previously set by software. However trigger mode can set the CEN bit automatically by hardware. CEN is cleared automatically in one-pulse mode, when an update event occurs.
    static constexpr uint32_t CR1_UDIS = 0x2; // Update disable This bit is set and cleared by software to enable/disable UEV event generation. Counter overflow/underflow Setting the UG bit Update generation through the slave mode controller Buffered registers are then loaded with their preload values.
    static constexpr uint32_t CR1_URS = 0x4; // Update request source This bit is set and cleared by software to select the UEV event sources. Counter overflow/underflow Setting the UG bit Update generation through the slave mode controller
    static constexpr uint32_t CR1_OPM = 0x8; // One-pulse mode
    static constexpr uint32_t CR1_DIR = 0x10; // Direction Note: This bit is read only when the timer is configured in Center-aligned mode or Encoder mode.
    typedef bit_field_t<5, 0x3> CR1_CMS; // Center-aligned mode selection Note: It is not allowed to switch from edge-aligned mode to center-aligned mode as long as the counter is enabled (CEN=1)
    static constexpr uint32_t CR1_ARPE = 0x80; // Auto-reload preload enable
    typedef bit_field_t<8, 0x3> CR1_CKD; // Clock division This bit-field indicates the division ratio between the timer clock (CK_INT) frequency and sampling clock used by the digital filters (ETR, TIx),
    static constexpr uint32_t CR1_UIFREMAP = 0x800; // UIF status bit remapping

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR2_CCDS = 0x8; // Capture/compare DMA selection
    typedef bit_field_t<4, 0x7> CR2_MMS; // Master mode selection These bits permit to select the information to be sent in master mode to slave timers for synchronization (TRGO). The combination is as follows: When the Counter Enable signal is controlled by the trigger input, there is a delay on TRGO, except if the master/slave mode is selected (see the MSM bit description in TIMx_SMCR register). Note: The clock of the slave timer or ADC must be enabled prior to receive events from the master timer, and must not be changed on-the-fly while triggers are received from the master timer.
    static constexpr uint32_t CR2_TI1S = 0x80; // TI1 selection

    static constexpr uint32_t SMCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> SMCR_SMS1; // Slave mode selection When external signals are selected the active edge of the trigger signal (TRGI) is linked to the polarity selected on the external input (see Input Control register and Control Register description. reinitializes the counter, generates an update of the registers and starts the counter. Note: The gated mode must not be used if TI1F_ED is selected as the trigger input (TS=00100). Indeed, TI1F_ED outputs 1 pulse for each transition on TI1F, whereas the gated mode checks the level of the trigger signal. Note: The clock of the slave peripherals (timer, ADC, ...) receiving the TRGO or the TRGO2 signals must be enabled prior to receive events from the master timer, and the clock frequency (prescaler) must not be changed on-the-fly while triggers are received from the master timer.
    static constexpr uint32_t SMCR_OCCS = 0x8; // OCREF clear selection This bit is used to select the OCREF clear source
    typedef bit_field_t<4, 0x7> SMCR_TS1; // Trigger selection This bit-field selects the trigger input to be used to synchronize the counter. Others: Reserved See for more details on ITRx meaning for each Timer. Note: These bits must be changed only when they are not used (e.g. when SMS=000) to avoid wrong edge detections at the transition.
    static constexpr uint32_t SMCR_MSM = 0x80; // Master/Slave mode
    typedef bit_field_t<8, 0xf> SMCR_ETF; // External trigger filter This bit-field then defines the frequency used to sample ETRP signal and the length of the digital filter applied to ETRP. The digital filter is made of an event counter in which N consecutive events are needed to validate a transition on the output:
    typedef bit_field_t<12, 0x3> SMCR_ETPS; // External trigger prescaler External trigger signal ETRP frequency must be at most 1/4 of CK_INT frequency. A prescaler can be enabled to reduce ETRP frequency. It is useful when inputting fast external clocks.
    static constexpr uint32_t SMCR_ECE = 0x4000; // External clock enable This bit enables External clock mode 2. Note: Setting the ECE bit has the same effect as selecting external clock mode 1 with TRGI connected to ETRF (SMS=111 and TS=00111). It is possible to simultaneously use external clock mode 2 with the following slave modes: reset mode, gated mode and trigger mode. Nevertheless, TRGI must not be connected to ETRF in this case (TS bits must not be 00111). If external clock mode 1 and external clock mode 2 are enabled at the same time, the external clock input is ETRF.
    static constexpr uint32_t SMCR_ETP = 0x8000; // External trigger polarity This bit selects whether ETR or ETR is used for trigger operations
    static constexpr uint32_t SMCR_SMS2 = 0x10000; // Slave mode selection When external signals are selected the active edge of the trigger signal (TRGI) is linked to the polarity selected on the external input (see Input Control register and Control Register description. reinitializes the counter, generates an update of the registers and starts the counter. Note: The gated mode must not be used if TI1F_ED is selected as the trigger input (TS=00100). Indeed, TI1F_ED outputs 1 pulse for each transition on TI1F, whereas the gated mode checks the level of the trigger signal. Note: The clock of the slave peripherals (timer, ADC, ...) receiving the TRGO or the TRGO2 signals must be enabled prior to receive events from the master timer, and the clock frequency (prescaler) must not be changed on-the-fly while triggers are received from the master timer.
    typedef bit_field_t<20, 0x3> SMCR_TS2; // Trigger selection This bit-field selects the trigger input to be used to synchronize the counter. Others: Reserved See for more details on ITRx meaning for each Timer. Note: These bits must be changed only when they are not used (e.g. when SMS=000) to avoid wrong edge detections at the transition.

    static constexpr uint32_t DIER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DIER_UIE = 0x1; // Update interrupt enable
    static constexpr uint32_t DIER_CC1IE = 0x2; // Capture/Compare 1 interrupt enable
    static constexpr uint32_t DIER_CC2IE = 0x4; // Capture/Compare 2 interrupt enable
    static constexpr uint32_t DIER_CC3IE = 0x8; // Capture/Compare 3 interrupt enable
    static constexpr uint32_t DIER_CC4IE = 0x10; // Capture/Compare 4 interrupt enable
    static constexpr uint32_t DIER_TIE = 0x40; // Trigger interrupt enable
    static constexpr uint32_t DIER_UDE = 0x100; // Update DMA request enable
    static constexpr uint32_t DIER_CC1DE = 0x200; // Capture/Compare 1 DMA request enable
    static constexpr uint32_t DIER_CC2DE = 0x400; // Capture/Compare 2 DMA request enable
    static constexpr uint32_t DIER_CC3DE = 0x800; // Capture/Compare 3 DMA request enable
    static constexpr uint32_t DIER_CC4DE = 0x1000; // Capture/Compare 4 DMA request enable
    static constexpr uint32_t DIER_TDE = 0x4000; // Trigger DMA request enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_UIF = 0x1; // Update interrupt flag This bit is set by hardware on an update event. It is cleared by software. At overflow or underflow and if UDIS=0 in the TIMx_CR1 register. When CNT is reinitialized by software using the UG bit in TIMx_EGR register, if URS=0 and UDIS=0 in the TIMx_CR1 register. When CNT is reinitialized by a trigger event (refer to the synchro control register description), if URS=0 and UDIS=0 in the TIMx_CR1 register.
    static constexpr uint32_t SR_CC1IF = 0x2; // Capture/compare 1 interrupt flag This flag is set by hardware. It is cleared by software (input capture or output compare mode) or by reading the TIMx_CCR1 register (input capture mode only). If channel CC1 is configured as output: this flag is set when the content of the counter TIMx_CNT matches the content of the TIMx_CCR1 register. When the content of TIMx_CCR1 is greater than the content of TIMx_ARR, the CC1IF bit goes high on the counter overflow (in up-counting and up/down-counting modes) or underflow (in down-counting mode). There are 3 possible options for flag setting in center-aligned mode, refer to the CMS bits in the TIMx_CR1 register for the full description. If channel CC1 is configured as input: this bit is set when counter value has been captured in TIMx_CCR1 register (an edge has been detected on IC1, as per the edge sensitivity defined with the CC1P and CC1NP bits setting, in TIMx_CCER).
    static constexpr uint32_t SR_CC2IF = 0x4; // Capture/Compare 2 interrupt flag Refer to CC1IF description
    static constexpr uint32_t SR_CC3IF = 0x8; // Capture/Compare 3 interrupt flag Refer to CC1IF description
    static constexpr uint32_t SR_CC4IF = 0x10; // Capture/Compare 4 interrupt flag Refer to CC1IF description
    static constexpr uint32_t SR_TIF = 0x40; // Trigger interrupt flag This flag is set by hardware on the TRG trigger event (active edge detected on TRGI input when the slave mode controller is enabled in all modes but gated mode. It is set when the counter starts or stops when gated mode is selected. It is cleared by software.
    static constexpr uint32_t SR_CC1OF = 0x200; // Capture/Compare 1 overcapture flag This flag is set by hardware only when the corresponding channel is configured in input capture mode. It is cleared by software by writing it to &#39;0.
    static constexpr uint32_t SR_CC2OF = 0x400; // Capture/compare 2 overcapture flag refer to CC1OF description
    static constexpr uint32_t SR_CC3OF = 0x800; // Capture/Compare 3 overcapture flag refer to CC1OF description
    static constexpr uint32_t SR_CC4OF = 0x1000; // Capture/Compare 4 overcapture flag refer to CC1OF description

    static constexpr uint32_t EGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t EGR_UG = 0x1; // Update generation This bit can be set by software, it is automatically cleared by hardware.
    static constexpr uint32_t EGR_CC1G = 0x2; // Capture/compare 1 generation This bit is set by software in order to generate an event, it is automatically cleared by hardware. If channel CC1 is configured as output: CC1IF flag is set, Corresponding interrupt or DMA request is sent if enabled. If channel CC1 is configured as input: The current value of the counter is captured in TIMx_CCR1 register. The CC1IF flag is set, the corresponding interrupt or DMA request is sent if enabled. The CC1OF flag is set if the CC1IF flag was already high.
    static constexpr uint32_t EGR_CC2G = 0x4; // Capture/compare 2 generation Refer to CC1G description
    static constexpr uint32_t EGR_CC3G = 0x8; // Capture/compare 3 generation Refer to CC1G description
    static constexpr uint32_t EGR_CC4G = 0x10; // Capture/compare 4 generation Refer to CC1G description
    static constexpr uint32_t EGR_TG = 0x40; // Trigger generation This bit is set by software in order to generate an event, it is automatically cleared by hardware.

    static constexpr uint32_t CCMR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> CCMR1_CC1S; // Capture/Compare 1 selection This bit-field defines the direction of the channel (input/output) as well as the used input. Note: CC1S bits are writable only when the channel is OFF (CC1E = 0 in TIMx_CCER).
    typedef bit_field_t<8, 0x3> CCMR1_CC2S; // Capture/compare 2 selection This bit-field defines the direction of the channel (input/output) as well as the used input. Note: CC2S bits are writable only when the channel is OFF (CC2E = 0 in TIMx_CCER).
    typedef bit_field_t<4, 0xf> CCMR1_IC1F; // Input capture 1 filter
    typedef bit_field_t<2, 0x3> CCMR1_IC1PSC; // Input capture 1 prescaler
    typedef bit_field_t<12, 0xf> CCMR1_IC2F; // Input capture 2 filter
    typedef bit_field_t<10, 0x3> CCMR1_IC2PSC; // Input capture 2 prescaler
    static constexpr uint32_t CCMR1_OC1CE = 0x80; // Output compare 1 clear enable
    static constexpr uint32_t CCMR1_OC1FE = 0x4; // Output compare 1 fast enable
    typedef bit_field_t<4, 0x7> CCMR1_OC1M1; // Output compare 1 mode These bits define the behavior of the output reference signal OC1REF from which OC1 and OC1N are derived. OC1REF is active high whereas OC1 and OC1N active level depends on CC1P and CC1NP bits. Note: In PWM mode, the OCREF level changes only when the result of the comparison changes or when the output compare mode switches from frozen mode to PWM mode. Note: The OC1M[3] bit is not contiguous, located in bit 16.
    static constexpr uint32_t CCMR1_OC1M_3 = 0x10000; // Output Compare 1 mode - bit 3
    static constexpr uint32_t CCMR1_OC1PE = 0x8; // Output compare 1 preload enable Note: The PWM mode can be used without validating the preload register only in one-pulse mode (OPM bit set in TIMx_CR1 register). Else the behavior is not guaranteed.
    static constexpr uint32_t CCMR1_OC2CE = 0x8000; // Output compare 2 clear enable
    static constexpr uint32_t CCMR1_OC2FE = 0x400; // Output compare 2 fast enable
    typedef bit_field_t<12, 0x7> CCMR1_OC2M; // Output compare 2 mode
    static constexpr uint32_t CCMR1_OC2M_3 = 0x1000000; // Output Compare 2 mode - bit 3
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
    static constexpr uint32_t CCMR2_OC3M_3 = 0x10000; // Output Compare 3 mode - bit 3
    static constexpr uint32_t CCMR2_OC3PE = 0x8; // Output compare 3 preload enable
    static constexpr uint32_t CCMR2_OC4CE = 0x8000; // Output compare 4 clear enable
    static constexpr uint32_t CCMR2_OC4FE = 0x400; // Output compare 4 fast enable
    typedef bit_field_t<12, 0x7> CCMR2_OC4M; // Output compare 4 mode
    static constexpr uint32_t CCMR2_OC4M_3 = 0x1000000; // Output Compare 4 mode - bit 3
    static constexpr uint32_t CCMR2_OC4PE = 0x800; // Output compare 4 preload enable

    static constexpr uint32_t CCER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCER_CC1E = 0x1; // Capture/Compare 1 output enable.
    static constexpr uint32_t CCER_CC1P = 0x2; // Capture/Compare 1 output Polarity. When CC1 channel is configured as input, both CC1NP/CC1P bits select the active polarity of TI1FP1 and TI2FP1 for trigger or capture operations. CC1NP=0, CC1P=0: non-inverted/rising edge. The circuit is sensitive to TIxFP1 rising edge (capture or trigger operations in reset, external clock or trigger mode), TIxFP1 is not inverted (trigger operation in gated mode or encoder mode). CC1NP=0, CC1P=1: inverted/falling edge. The circuit is sensitive to TIxFP1 falling edge (capture or trigger operations in reset, external clock or trigger mode), TIxFP1 is inverted (trigger operation in gated mode or encoder mode). CC1NP=1, CC1P=1: non-inverted/both edges. The circuit is sensitive to both TIxFP1 rising and falling edges (capture or trigger operations in reset, external clock or trigger mode), TIxFP1is not inverted (trigger operation in gated mode). This configuration must not be used in encoder mode. CC1NP=1, CC1P=0: This configuration is reserved, it must not be used.
    static constexpr uint32_t CCER_CC1NP = 0x8; // Capture/Compare 1 output Polarity. CC1 channel configured as output: CC1NP must be kept cleared in this case. CC1 channel configured as input: This bit is used in conjunction with CC1P to define TI1FP1/TI2FP1 polarity. refer to CC1P description.
    static constexpr uint32_t CCER_CC2E = 0x10; // Capture/Compare 2 output enable. Refer to CC1E description
    static constexpr uint32_t CCER_CC2P = 0x20; // Capture/Compare 2 output Polarity. refer to CC1P description
    static constexpr uint32_t CCER_CC2NP = 0x80; // Capture/Compare 2 output Polarity. Refer to CC1NP description
    static constexpr uint32_t CCER_CC3E = 0x100; // Capture/Compare 3 output enable. Refer to CC1E description
    static constexpr uint32_t CCER_CC3P = 0x200; // Capture/Compare 3 output Polarity. Refer to CC1P description
    static constexpr uint32_t CCER_CC3NP = 0x800; // Capture/Compare 3 output Polarity. Refer to CC1NP description
    static constexpr uint32_t CCER_CC4E = 0x1000; // Capture/Compare 4 output enable. refer to CC1E description
    static constexpr uint32_t CCER_CC4P = 0x2000; // Capture/Compare 4 output Polarity. Refer to CC1P description
    static constexpr uint32_t CCER_CC4NP = 0x8000; // Capture/Compare 4 output Polarity. Refer to CC1NP description

    static constexpr uint32_t CNT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> CNT_CNT_H; // High counter value (TIM2 only)
    typedef bit_field_t<0, 0xffff> CNT_CNT_L; // Low counter value

    static constexpr uint32_t PSC_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> PSC_PSC; // Prescaler value

    static constexpr uint32_t ARR_RESET_VALUE = 0xffffffff; // Reset value
    typedef bit_field_t<0, 0xffffffff> ARR_ARR; // High auto-reload value (TIM2) nullLow Auto-reload value ARR is the value to be loaded in the actual auto-reload register. Refer to the for more details about ARR update and behavior. The counter is blocked while the auto-reload value is null.


    static constexpr uint32_t CCR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CCR1_CCR1; // High Capture/Compare 1 value (TIM2) nullLow Capture/Compare 1 value If channel CC1 is configured as output: CCR1 is the value to be loaded in the actual capture/compare 1 register (preload value). It is loaded permanently if the preload feature is not selected in the TIMx_CCMR1 register (bit OC1PE). Else the preload value is copied in the active capture/compare 1 register when an update event occurs. The active capture/compare register contains the value to be compared to the counter TIMx_CNT and signaled on OC1 output. If channel CC1is configured as input: CCR1 is the counter value transferred by the last input capture 1 event (IC1). The TIMx_CCR1 register is read-only and cannot be programmed.

    static constexpr uint32_t CCR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CCR2_CCR2; // High Capture/Compare 2 value (TIM2) nullLow Capture/Compare 2 value If channel CC2 is configured as output: CCR2 is the value to be loaded in the actual capture/compare 2 register (preload value). It is loaded permanently if the preload feature is not selected in the TIMx_CCMR1 register (bit OC2PE). Else the preload value is copied in the active capture/compare 2 register when an update event occurs. The active capture/compare register contains the value to be compared to the counter TIMx_CNT and signalled on OC2 output. If channel CC2 is configured as input: CCR2 is the counter value transferred by the last input capture 2 event (IC2). The TIMx_CCR2 register is read-only and cannot be programmed.

    static constexpr uint32_t CCR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CCR3_CCR3; // High Capture/Compare 3 value (TIM2) nullLow Capture/Compare value If channel CC3 is configured as output: CCR3 is the value to be loaded in the actual capture/compare 3 register (preload value). It is loaded permanently if the preload feature is not selected in the TIMx_CCMR2 register (bit OC3PE). Else the preload value is copied in the active capture/compare 3 register when an update event occurs. The active capture/compare register contains the value to be compared to the counter TIMx_CNT and signalled on OC3 output. If channel CC3is configured as input: CCR3 is the counter value transferred by the last input capture 3 event (IC3). The TIMx_CCR3 register is read-only and cannot be programmed.

    static constexpr uint32_t CCR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> CCR4_CCR4; // High Capture/Compare 4 value (TIM2) nullLow Capture/Compare value if CC4 channel is configured as output (CC4S bits): CCR4 is the value to be loaded in the actual capture/compare 4 register (preload value). It is loaded permanently if the preload feature is not selected in the TIMx_CCMR2 register (bit OC4PE). Else the preload value is copied in the active capture/compare 4 register when an update event occurs. The active capture/compare register contains the value to be compared to the counter TIMx_CNT and signalled on OC4 output. if CC4 channel is configured as input (CC4S bits in TIMx_CCMR4 register): CCR4 is the counter value transferred by the last input capture 4 event (IC4). The TIMx_CCR4 register is read-only and cannot be programmed.


    static constexpr uint32_t DCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> DCR_DBA; // DMA base address This 5-bit vector defines the base-address for DMA transfers (when read/write access are done through the TIMx_DMAR address). DBA is defined as an offset starting from the address of the TIMx_CR1 register. Example: ... Example: Let us consider the following transfer: DBL = 7 transfers &amp; DBA = TIMx_CR1. In this case the transfer is done to/from 7 registers starting from the TIMx_CR1 address.
    typedef bit_field_t<8, 0x1f> DCR_DBL; // DMA burst length This 5-bit vector defines the number of DMA transfers (the timer recognizes a burst transfer when a read or a write access is done to the TIMx_DMAR address). ...

    static constexpr uint32_t DMAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DMAR_DMAB; // DMA register for burst accesses


    static constexpr uint32_t AF1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<14, 0xf> AF1_ETRSEL; // ETR source selection These bits select the ETR input source. Others: Reserved


    static constexpr uint32_t TISEL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> TISEL_TI1SEL; // TI1[0] to TI1[15] input selection These bits select the TI1[0] to TI1[15] input source. Others: Reserved
    typedef bit_field_t<8, 0xf> TISEL_TI2SEL; // TI2[0] to TI2[15] input selection These bits select the TI2[0] to TI2[15] input source. Others: Reserved
    typedef bit_field_t<16, 0xf> TISEL_TI3SEL; // TI3[0] to TI3[15] input selection These bits select the TI3[0] to TI3[15] input source. Others: Reserved
};

// TIM6: Basic timers

struct stm32g050_tim6_t
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
    static constexpr uint32_t CR1_CEN = 0x1; // Counter enable Note: Gated mode can work only if the CEN bit has been previously set by software. However trigger mode can set the CEN bit automatically by hardware. CEN is cleared automatically in one-pulse mode, when an update event occurs.
    static constexpr uint32_t CR1_UDIS = 0x2; // Update disable This bit is set and cleared by software to enable/disable UEV event generation. Counter overflow/underflow Setting the UG bit Update generation through the slave mode controller Buffered registers are then loaded with their preload values.
    static constexpr uint32_t CR1_URS = 0x4; // Update request source This bit is set and cleared by software to select the UEV event sources. Counter overflow/underflow Setting the UG bit Update generation through the slave mode controller
    static constexpr uint32_t CR1_OPM = 0x8; // One-pulse mode
    static constexpr uint32_t CR1_ARPE = 0x80; // Auto-reload preload enable
    static constexpr uint32_t CR1_UIFREMAP = 0x800; // UIF status bit remapping

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0x7> CR2_MMS; // Master mode selection These bits are used to select the information to be sent in master mode to slave timers for synchronization (TRGO). The combination is as follows: When the Counter Enable signal is controlled by the trigger input, there is a delay on TRGO, except if the master/slave mode is selected (see the MSM bit description in the TIMx_SMCR register). Note: The clock of the slave timer or ADC must be enabled prior to receive events from the master timer, and must not be changed on-the-fly while triggers are received from the master timer.


    static constexpr uint32_t DIER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DIER_UIE = 0x1; // Update interrupt enable
    static constexpr uint32_t DIER_UDE = 0x100; // Update DMA request enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_UIF = 0x1; // Update interrupt flag This bit is set by hardware on an update event. It is cleared by software. At overflow or underflow regarding the repetition counter value and if UDIS = 0 in the TIMx_CR1 register. When CNT is reinitialized by software using the UG bit in the TIMx_EGR register, if URS=0 and UDIS=0 in the TIMx_CR1 register.

    static constexpr uint32_t EGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t EGR_UG = 0x1; // Update generation This bit can be set by software, it is automatically cleared by hardware.


    static constexpr uint32_t CNT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNT_CNT; // Counter value
    static constexpr uint32_t CNT_UIFCPY = 0x80000000; // UIF Copy This bit is a read-only copy of the UIF bit of the TIMx_ISR register. If the UIFREMAP bit in TIMx_CR1 is reset, bit 31 is reserved and read as 0.

    static constexpr uint32_t PSC_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> PSC_PSC; // Prescaler value

    static constexpr uint32_t ARR_RESET_VALUE = 0xffff; // Reset value
    typedef bit_field_t<0, 0xffff> ARR_ARR; // Prescaler value
};

// TIM6: Basic timers

struct stm32g070_tim6_t
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
    static constexpr uint32_t CR1_UIFREMAP = 0x800; // UIF status bit remapping
    static constexpr uint32_t CR1_ARPE = 0x80; // Auto-reload preload enable
    static constexpr uint32_t CR1_OPM = 0x8; // One-pulse mode
    static constexpr uint32_t CR1_URS = 0x4; // Update request source
    static constexpr uint32_t CR1_UDIS = 0x2; // Update disable
    static constexpr uint32_t CR1_CEN = 0x1; // Counter enable

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0x7> CR2_MMS; // Master mode selection


    static constexpr uint32_t DIER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DIER_UDE = 0x100; // Update DMA request enable
    static constexpr uint32_t DIER_UIE = 0x1; // Update interrupt enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_UIF = 0x1; // Update interrupt flag

    static constexpr uint32_t EGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t EGR_UG = 0x1; // Update generation


    static constexpr uint32_t CNT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNT_CNT; // Low counter value
    static constexpr uint32_t CNT_UIFCPY = 0x80000000; // UIF Copy

    static constexpr uint32_t PSC_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> PSC_PSC; // Prescaler value

    static constexpr uint32_t ARR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> ARR_ARR; // Low Auto-reload value
};

// TIM14: General purpose timers

struct stm32g030_tim14_t
{
    volatile uint32_t CR1; // control register 1
    reserved_t<0x2> _0x4;
    volatile uint32_t DIER; // DMA/Interrupt enable register
    volatile uint32_t SR; // status register
    volatile uint32_t EGR; // event generation register
    volatile uint32_t CCMR1; // capture/compare mode register 1 (output mode)
    reserved_t<0x1> _0x1c;
    volatile uint32_t CCER; // capture/compare enable register
    volatile uint32_t CNT; // counter
    volatile uint32_t PSC; // prescaler
    volatile uint32_t ARR; // auto-reload register
    reserved_t<0x1> _0x30;
    volatile uint32_t CCR1; // capture/compare register 1
    reserved_t<0xc> _0x38;
    volatile uint32_t TISEL; // TIM timer input selection register

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR1_UIFREMAP = 0x800; // UIF status bit remapping
    typedef bit_field_t<8, 0x3> CR1_CKD; // Clock division
    static constexpr uint32_t CR1_ARPE = 0x80; // Auto-reload preload enable
    static constexpr uint32_t CR1_OPM = 0x8; // One-pulse mode
    static constexpr uint32_t CR1_URS = 0x4; // Update request source
    static constexpr uint32_t CR1_UDIS = 0x2; // Update disable
    static constexpr uint32_t CR1_CEN = 0x1; // Counter enable


    static constexpr uint32_t DIER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DIER_CC1IE = 0x2; // Capture/Compare 1 interrupt enable
    static constexpr uint32_t DIER_UIE = 0x1; // Update interrupt enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_CC1OF = 0x200; // Capture/Compare 1 overcapture flag
    static constexpr uint32_t SR_CC1IF = 0x2; // Capture/compare 1 interrupt flag
    static constexpr uint32_t SR_UIF = 0x1; // Update interrupt flag

    static constexpr uint32_t EGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t EGR_CC1G = 0x2; // Capture/compare 1 generation
    static constexpr uint32_t EGR_UG = 0x1; // Update generation

    static constexpr uint32_t CCMR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> CCMR1_CC1S; // CC1S
    typedef bit_field_t<4, 0xf> CCMR1_IC1F; // Input capture 1 filter
    typedef bit_field_t<2, 0x3> CCMR1_IC1PSC; // Input capture 1 prescaler
    static constexpr uint32_t CCMR1_OC1CE = 0x80; // OC1CE
    static constexpr uint32_t CCMR1_OC1FE = 0x4; // OC1FE
    typedef bit_field_t<4, 0x7> CCMR1_OC1M; // OC1M
    static constexpr uint32_t CCMR1_OC1M_3 = 0x10000; // Output Compare 1 mode - bit 3
    static constexpr uint32_t CCMR1_OC1PE = 0x8; // OC1PE


    static constexpr uint32_t CCER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCER_CC1NP = 0x8; // Capture/Compare 1 output Polarity
    static constexpr uint32_t CCER_CC1P = 0x2; // Capture/Compare 1 output Polarity
    static constexpr uint32_t CCER_CC1E = 0x1; // Capture/Compare 1 output enable

    static constexpr uint32_t CNT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNT_CNT; // low counter value
    static constexpr uint32_t CNT_UIFCPY = 0x80000000; // UIF Copy

    static constexpr uint32_t PSC_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> PSC_PSC; // Prescaler value

    static constexpr uint32_t ARR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> ARR_ARR; // Low Auto-reload value


    static constexpr uint32_t CCR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR1_CCR1; // Low Capture/Compare 1 value


    static constexpr uint32_t TISEL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> TISEL_TISEL; // TI1[0] to TI1[15] input selection
};

// TIM14: General purpose timers

struct stm32g050_tim14_t
{
    volatile uint32_t CR1; // control register 1
    reserved_t<0x2> _0x4;
    volatile uint32_t DIER; // DMA/Interrupt enable register
    volatile uint32_t SR; // status register
    volatile uint32_t EGR; // event generation register
    volatile uint32_t CCMR1; // capture/compare mode register 1 (output mode)
    reserved_t<0x1> _0x1c;
    volatile uint32_t CCER; // capture/compare enable register
    volatile uint32_t CNT; // counter
    volatile uint32_t PSC; // prescaler
    volatile uint32_t ARR; // auto-reload register
    reserved_t<0x1> _0x30;
    volatile uint32_t CCR1; // capture/compare register 1
    reserved_t<0xc> _0x38;
    volatile uint32_t TISEL; // TIM timer input selection register

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR1_CEN = 0x1; // Counter enable Note: External clock and gated mode can work only if the CEN bit has been previously set by software. However trigger mode can set the CEN bit automatically by hardware.
    static constexpr uint32_t CR1_UDIS = 0x2; // Update disable This bit is set and cleared by software to enable/disable update interrupt (UEV) event generation. Counter overflow Setting the UG bit. Buffered registers are then loaded with their preload values.
    static constexpr uint32_t CR1_URS = 0x4; // Update request source This bit is set and cleared by software to select the update interrupt (UEV) sources. Counter overflow Setting the UG bit
    static constexpr uint32_t CR1_OPM = 0x8; // One-pulse mode
    static constexpr uint32_t CR1_ARPE = 0x80; // Auto-reload preload enable
    typedef bit_field_t<8, 0x3> CR1_CKD; // Clock division This bit-field indicates the division ratio between the timer clock (CK_INT) frequency and sampling clock used by the digital filters (TIx),
    static constexpr uint32_t CR1_UIFREMAP = 0x800; // UIF status bit remapping


    static constexpr uint32_t DIER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DIER_UIE = 0x1; // Update interrupt enable
    static constexpr uint32_t DIER_CC1IE = 0x2; // Capture/Compare 1 interrupt enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_UIF = 0x1; // Update interrupt flag This bit is set by hardware on an update event. It is cleared by software. At overflow and if UDIS=0 in the TIMx_CR1 register. When CNT is reinitialized by software using the UG bit in TIMx_EGR register, if URS=0 and UDIS=0 in the TIMx_CR1 register.
    static constexpr uint32_t SR_CC1IF = 0x2; // Capture/compare 1 interrupt flag This flag is set by hardware. It is cleared by software (input capture or output compare mode) or by reading the TIMx_CCR1 register (input capture mode only). If channel CC1 is configured as output: this flag is set when he content of the counter TIMx_CNT matches the content of the TIMx_CCR1 register. When the content of TIMx_CCR1 is greater than the content of TIMx_ARR, the CC1IF bit goes high on the counter overflow (in up-counting and up/down-counting modes) or underflow (in down-counting mode). There are 3 possible options for flag setting in center-aligned mode, refer to the CMS bits in the TIMx_CR1 register for the full description. If channel CC1 is configured as input: this bit is set when counter value has been captured in TIMx_CCR1 register (an edge has been detected on IC1, as per the edge sensitivity defined with the CC1P and CC1NP bits setting, in TIMx_CCER).
    static constexpr uint32_t SR_CC1OF = 0x200; // Capture/Compare 1 overcapture flag This flag is set by hardware only when the corresponding channel is configured in input capture mode. It is cleared by software by writing it to &#39;0.

    static constexpr uint32_t EGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t EGR_UG = 0x1; // Update generation This bit can be set by software, it is automatically cleared by hardware.
    static constexpr uint32_t EGR_CC1G = 0x2; // Capture/compare 1 generation This bit is set by software in order to generate an event, it is automatically cleared by hardware. If channel CC1 is configured as output: CC1IF flag is set, Corresponding interrupt or is sent if enabled. If channel CC1 is configured as input: The current value of the counter is captured in TIMx_CCR1 register. The CC1IF flag is set, the corresponding interrupt is sent if enabled. The CC1OF flag is set if the CC1IF flag was already high.

    static constexpr uint32_t CCMR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> CCMR1_CC1S; // Capture/Compare 1 selection This bit-field defines the direction of the channel (input/output) as well as the used input. Note: CC1S bits are writable only when the channel is OFF (CC1E = 0 in TIMx_CCER).
    typedef bit_field_t<4, 0xf> CCMR1_IC1F; // Input capture 1 filter This bit-field defines the frequency used to sample TI1 input and the length of the digital filter applied to TI1. The digital filter is made of an event counter in which N consecutive events are needed to validate a transition on the output:
    typedef bit_field_t<2, 0x3> CCMR1_IC1PSC; // Input capture 1 prescaler This bit-field defines the ratio of the prescaler acting on CC1 input (IC1). The prescaler is reset as soon as CC1E=0 (TIMx_CCER register).
    static constexpr uint32_t CCMR1_OC1FE = 0x4; // Output compare 1 fast enable This bit decreases the latency between a trigger event and a transition on the timer output. It must be used in one-pulse mode (OPM bit set in TIMx_CR1 register), to have the output pulse starting as soon as possible after the starting trigger.
    typedef bit_field_t<4, 0x7> CCMR1_OC1M1; // Output compare 1 mode (refer to bit 16 for OC1M[3]) These bits define the behavior of the output reference signal OC1REF from which OC1 is derived. OC1REF is active high whereas OC1 active level depends on CC1P bit. Others: Reserved Note: In PWM mode 1 or 2, the OCREF level changes when the result of the comparison changes or when the output compare mode switches from frozen to PWM mode. Note: The OC1M[3] bit is not contiguous, located in bit 16.
    static constexpr uint32_t CCMR1_OC1M2 = 0x10000; // Output compare 1 mode (refer to bit 16 for OC1M[3]) These bits define the behavior of the output reference signal OC1REF from which OC1 is derived. OC1REF is active high whereas OC1 active level depends on CC1P bit. Others: Reserved Note: In PWM mode 1 or 2, the OCREF level changes when the result of the comparison changes or when the output compare mode switches from frozen to PWM mode. Note: The OC1M[3] bit is not contiguous, located in bit 16.
    static constexpr uint32_t CCMR1_OC1PE = 0x8; // Output compare 1 preload enable Note: The PWM mode can be used without validating the preload register only in one pulse mode (OPM bit set in TIMx_CR1 register). Else the behavior is not guaranteed.


    static constexpr uint32_t CCER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCER_CC1E = 0x1; // Capture/Compare 1 output enable.
    static constexpr uint32_t CCER_CC1P = 0x2; // Capture/Compare 1 output Polarity. When CC1 channel is configured as input, both CC1NP/CC1P bits select the active polarity of TI1FP1 and TI2FP1 for trigger or capture operations. CC1NP=0, CC1P=0: non-inverted/rising edge. The circuit is sensitive to TIxFP1 rising edge (capture or trigger operations in reset, external clock or trigger mode), TIxFP1 is not inverted (trigger operation in gated mode or encoder mode). CC1NP=0, CC1P=1: inverted/falling edge. The circuit is sensitive to TIxFP1 falling edge (capture or trigger operations in reset, external clock or trigger mode), TIxFP1 is inverted (trigger operation in gated mode or encoder mode). CC1NP=1, CC1P=1: non-inverted/both edges/ The circuit is sensitive to both TIxFP1 rising and falling edges (capture or trigger operations in reset, external clock or trigger mode), TIxFP1is not inverted (trigger operation in gated mode). This configuration must not be used in encoder mode. CC1NP=1, CC1P=0: This configuration is reserved, it must not be used.
    static constexpr uint32_t CCER_CC1NP = 0x8; // Capture/Compare 1 complementary output Polarity. CC1 channel configured as output: CC1NP must be kept cleared. CC1 channel configured as input: CC1NP bit is used in conjunction with CC1P to define TI1FP1 polarity (refer to CC1P description).

    static constexpr uint32_t CNT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNT_CNT; // low counter value
    static constexpr uint32_t CNT_UIFCPY = 0x80000000; // UIF Copy

    static constexpr uint32_t PSC_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> PSC_PSC; // Prescaler value

    static constexpr uint32_t ARR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> ARR_ARR; // Low Auto-reload value


    static constexpr uint32_t CCR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR1_CCR1; // Low Capture/Compare 1 value


    static constexpr uint32_t TISEL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> TISEL_TI1SEL; // selects TI1[0] to TI1[15] input Others: Reserved
};

// TIM15: General purpose timers

struct stm32g050_tim15_t
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
    volatile uint32_t DCR; // DMA control register
    volatile uint32_t DMAR; // DMA address for full transfer
    reserved_t<0x4> _0x50;
    volatile uint32_t AF1; // TIM15 alternate register 1
    reserved_t<0x1> _0x64;
    volatile uint32_t TISEL; // input selection register

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR1_CEN = 0x1; // Counter enable Note: External clock and gated mode can work only if the CEN bit has been previously set by software. However trigger mode can set the CEN bit automatically by hardware.
    static constexpr uint32_t CR1_UDIS = 0x2; // Update disable This bit is set and cleared by software to enable/disable UEV event generation. Counter overflow/underflow Setting the UG bit Update generation through the slave mode controller Buffered registers are then loaded with their preload values.
    static constexpr uint32_t CR1_URS = 0x4; // Update request source This bit is set and cleared by software to select the UEV event sources. Counter overflow/underflow Setting the UG bit Update generation through the slave mode controller
    static constexpr uint32_t CR1_OPM = 0x8; // One-pulse mode
    static constexpr uint32_t CR1_ARPE = 0x80; // Auto-reload preload enable
    typedef bit_field_t<8, 0x3> CR1_CKD; // Clock division This bitfield indicates the division ratio between the timer clock (CK_INT) frequency and the dead-time and sampling clock (tDTS) used by the dead-time generators and the digital filters (TIx)
    static constexpr uint32_t CR1_UIFREMAP = 0x800; // UIF status bit remapping

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR2_CCPC = 0x1; // Capture/compare preloaded control Note: This bit acts only on channels that have a complementary output.
    static constexpr uint32_t CR2_CCUS = 0x4; // Capture/compare control update selection Note: This bit acts only on channels that have a complementary output.
    static constexpr uint32_t CR2_CCDS = 0x8; // Capture/compare DMA selection
    typedef bit_field_t<4, 0x7> CR2_MMS; // Master mode selection These bits allow to select the information to be sent in master mode to slave timers for synchronization (TRGO). The combination is as follows:
    static constexpr uint32_t CR2_TI1S = 0x80; // TI1 selection
    static constexpr uint32_t CR2_OIS1 = 0x100; // Output Idle state 1 (OC1 output) Note: This bit can not be modified as long as LOCK level 1, 2 or 3 has been programmed (LOCK bits in TIM15_BDTR register).
    static constexpr uint32_t CR2_OIS1N = 0x200; // Output Idle state 1 (OC1N output) Note: This bit can not be modified as long as LOCK level 1, 2 or 3 has been programmed (LOCK bits in TIM15_BDTR register).
    static constexpr uint32_t CR2_OIS2 = 0x400; // Output idle state 2 (OC2 output) Note: This bit cannot be modified as long as LOCK level 1, 2 or 3 has been programmed (LOCK bits in the TIM15_BDTR register).

    static constexpr uint32_t SMCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> SMCR_SMS1; // Slave mode selection When external signals are selected the active edge of the trigger signal (TRGI) is linked to the polarity selected on the external input (see Input Control register and Control Register description. Other codes: reserved. Note: The gated mode must not be used if TI1F_ED is selected as the trigger input (TS=00100). Indeed, TI1F_ED outputs 1 pulse for each transition on TI1F, whereas the gated mode checks the level of the trigger signal. Note: The clock of the slave peripherals (timer, ADC, ...) receiving the TRGO or the TRGO2 signals must be enabled prior to receive events from the master timer, and the clock frequency (prescaler) must not be changed on-the-fly while triggers are received from the master timer.
    typedef bit_field_t<4, 0x7> SMCR_TS1; // Trigger selection This bit field selects the trigger input to be used to synchronize the counter. Other: Reserved See for more details on ITRx meaning for each Timer. Note: These bits must be changed only when they are not used (e.g. when SMS=000) to avoid wrong edge detections at the transition.
    static constexpr uint32_t SMCR_MSM = 0x80; // Master/slave mode
    static constexpr uint32_t SMCR_SMS2 = 0x10000; // Slave mode selection When external signals are selected the active edge of the trigger signal (TRGI) is linked to the polarity selected on the external input (see Input Control register and Control Register description. Other codes: reserved. Note: The gated mode must not be used if TI1F_ED is selected as the trigger input (TS=00100). Indeed, TI1F_ED outputs 1 pulse for each transition on TI1F, whereas the gated mode checks the level of the trigger signal. Note: The clock of the slave peripherals (timer, ADC, ...) receiving the TRGO or the TRGO2 signals must be enabled prior to receive events from the master timer, and the clock frequency (prescaler) must not be changed on-the-fly while triggers are received from the master timer.
    typedef bit_field_t<20, 0x3> SMCR_TS2; // Trigger selection This bit field selects the trigger input to be used to synchronize the counter. Other: Reserved See for more details on ITRx meaning for each Timer. Note: These bits must be changed only when they are not used (e.g. when SMS=000) to avoid wrong edge detections at the transition.

    static constexpr uint32_t DIER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DIER_UIE = 0x1; // Update interrupt enable
    static constexpr uint32_t DIER_CC1IE = 0x2; // Capture/Compare 1 interrupt enable
    static constexpr uint32_t DIER_CC2IE = 0x4; // Capture/Compare 2 interrupt enable
    static constexpr uint32_t DIER_COMIE = 0x20; // COM interrupt enable
    static constexpr uint32_t DIER_TIE = 0x40; // Trigger interrupt enable
    static constexpr uint32_t DIER_BIE = 0x80; // Break interrupt enable
    static constexpr uint32_t DIER_UDE = 0x100; // Update DMA request enable
    static constexpr uint32_t DIER_CC1DE = 0x200; // Capture/Compare 1 DMA request enable
    static constexpr uint32_t DIER_CC2DE = 0x400; // Capture/Compare 2 DMA request enable
    static constexpr uint32_t DIER_COMDE = 0x2000; // COM DMA request enable
    static constexpr uint32_t DIER_TDE = 0x4000; // Trigger DMA request enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_UIF = 0x1; // Update interrupt flag This bit is set by hardware on an update event. It is cleared by software. At overflow regarding the repetition counter value (update if repetition counter = 0) and if the UDIS=0 in the TIMx_CR1 register. When CNT is reinitialized by software using the UG bit in TIMx_EGR register, if URS=0 and UDIS=0 in the TIMx_CR1 register. When CNT is reinitialized by a trigger event (refer to control register (TIM15_SMCR)), if URS=0 and UDIS=0 in the TIMx_CR1 register.
    static constexpr uint32_t SR_CC1IF = 0x2; // Capture/Compare 1 interrupt flag This flag is set by hardware. It is cleared by software (input capture or output compare mode) or by reading the TIMx_CCR1 register (input capture mode only). If channel CC1 is configured as output: this flag is set when the content of the counter TIMx_CNT matches the content of the TIMx_CCR1 register. When the content of TIMx_CCR1 is greater than the content of TIMx_ARR, the CC1IF bit goes high on the counter overflow (in up-counting and up/down-counting modes) or underflow (in down-counting mode). There are 3 possible options for flag setting in center-aligned mode, refer to the CMS bits in the TIMx_CR1 register for the full description. If channel CC1 is configured as input: this bit is set when counter value has been captured in TIMx_CCR1 register (an edge has been detected on IC1, as per the edge sensitivity defined with the CC1P and CC1NP bits setting, in TIMx_CCER).
    static constexpr uint32_t SR_CC2IF = 0x4; // Capture/Compare 2 interrupt flag refer to CC1IF description
    static constexpr uint32_t SR_COMIF = 0x20; // COM interrupt flag This flag is set by hardware on a COM event (once the capture/compare control bits CCxE, CCxNE, OCxM have been updated). It is cleared by software.
    static constexpr uint32_t SR_TIF = 0x40; // Trigger interrupt flag This flag is set by hardware on the TRG trigger event (active edge detected on TRGI input when the slave mode controller is enabled in all modes but gated mode, both edges in case gated mode is selected). It is set when the counter starts or stops when gated mode is selected. It is cleared by software.
    static constexpr uint32_t SR_BIF = 0x80; // Break interrupt flag This flag is set by hardware as soon as the break input goes active. It can be cleared by software if the break input is not active.
    static constexpr uint32_t SR_CC1OF = 0x200; // Capture/Compare 1 overcapture flag This flag is set by hardware only when the corresponding channel is configured in input capture mode. It is cleared by software by writing it to &#39;0.
    static constexpr uint32_t SR_CC2OF = 0x400; // Capture/Compare 2 overcapture flag Refer to CC1OF description

    static constexpr uint32_t EGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t EGR_UG = 0x1; // Update generation This bit can be set by software, it is automatically cleared by hardware.
    static constexpr uint32_t EGR_CC1G = 0x2; // Capture/Compare 1 generation This bit is set by software in order to generate an event, it is automatically cleared by hardware. If channel CC1 is configured as output: CC1IF flag is set, Corresponding interrupt or DMA request is sent if enabled. If channel CC1 is configured as input: The current value of the counter is captured in TIMx_CCR1 register. The CC1IF flag is set, the corresponding interrupt or DMA request is sent if enabled. The CC1OF flag is set if the CC1IF flag was already high.
    static constexpr uint32_t EGR_CC2G = 0x4; // Capture/Compare 2 generation Refer to CC1G description
    static constexpr uint32_t EGR_COMG = 0x20; // Capture/Compare control update generation This bit can be set by software, it is automatically cleared by hardware. Note: This bit acts only on channels that have a complementary output.
    static constexpr uint32_t EGR_TG = 0x40; // Trigger generation This bit is set by software in order to generate an event, it is automatically cleared by hardware.
    static constexpr uint32_t EGR_BG = 0x80; // Break generation This bit is set by software in order to generate an event, it is automatically cleared by hardware.

    static constexpr uint32_t CCMR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> CCMR1_CC1S; // Capture/Compare 1 selection This bit-field defines the direction of the channel (input/output) as well as the used input. Note: CC1S bits are writable only when the channel is OFF (CC1E = &#39;0 in TIMx_CCER).
    typedef bit_field_t<8, 0x3> CCMR1_CC2S; // Capture/Compare 2 selection This bit-field defines the direction of the channel (input/output) as well as the used input. Note: CC2S bits are writable only when the channel is OFF (CC2E = &#39;0 in TIMx_CCER).
    typedef bit_field_t<4, 0xf> CCMR1_IC1F; // Input capture 1 filter This bit-field defines the frequency used to sample TI1 input and the length of the digital filter applied to TI1. The digital filter is made of an event counter in which N consecutive events are needed to validate a transition on the output:
    typedef bit_field_t<2, 0x3> CCMR1_IC1PSC; // Input capture 1 prescaler This bit-field defines the ratio of the prescaler acting on CC1 input (IC1). The prescaler is reset as soon as CC1E=0 (TIMx_CCER register).
    typedef bit_field_t<12, 0xf> CCMR1_IC2F; // Input capture 2 filter
    typedef bit_field_t<10, 0x3> CCMR1_IC2PSC; // Input capture 2 prescaler
    static constexpr uint32_t CCMR1_OC1FE = 0x4; // Output Compare 1 fast enable This bit decreases the latency between a trigger event and a transition on the timer output. It must be used in one-pulse mode (OPM bit set in TIMx_CR1 register), to have the output pulse starting as soon as possible after the starting trigger.
    typedef bit_field_t<4, 0x7> CCMR1_OC1M1; // Output Compare 1 mode These bits define the behavior of the output reference signal OC1REF from which OC1 and OC1N are derived. OC1REF is active high whereas OC1 and OC1N active level depends on CC1P and CC1NP bits. Note: These bits can not be modified as long as LOCK level 3 has been programmed (LOCK bits in TIMx_BDTR register) and CC1S=00 (the channel is configured in output). In PWM mode, the OCREF level changes only when the result of the comparison changes or when the output compare mode switches from frozen mode to PWM mode. On channels that have a complementary output, this bit field is preloaded. If the CCPC bit is set in the TIMx_CR2 register then the OC1M active bits take the new value from the preloaded bits only when a COM event is generated. The OC1M[3] bit is not contiguous, located in bit 16.
    static constexpr uint32_t CCMR1_OC1M2 = 0x10000; // Output Compare 1 mode These bits define the behavior of the output reference signal OC1REF from which OC1 and OC1N are derived. OC1REF is active high whereas OC1 and OC1N active level depends on CC1P and CC1NP bits. Note: These bits can not be modified as long as LOCK level 3 has been programmed (LOCK bits in TIMx_BDTR register) and CC1S=00 (the channel is configured in output). In PWM mode, the OCREF level changes only when the result of the comparison changes or when the output compare mode switches from frozen mode to PWM mode. On channels that have a complementary output, this bit field is preloaded. If the CCPC bit is set in the TIMx_CR2 register then the OC1M active bits take the new value from the preloaded bits only when a COM event is generated. The OC1M[3] bit is not contiguous, located in bit 16.
    static constexpr uint32_t CCMR1_OC1PE = 0x8; // Output Compare 1 preload enable Note: These bits can not be modified as long as LOCK level 3 has been programmed (LOCK bits in TIMx_BDTR register) and CC1S=00 (the channel is configured in output). The PWM mode can be used without validating the preload register only in one pulse mode (OPM bit set in TIMx_CR1 register). Else the behavior is not guaranteed.
    static constexpr uint32_t CCMR1_OC2FE = 0x400; // Output Compare 2 fast enable
    typedef bit_field_t<12, 0x7> CCMR1_OC2M1; // Output Compare 2 mode
    static constexpr uint32_t CCMR1_OC2M2 = 0x1000000; // Output Compare 2 mode
    static constexpr uint32_t CCMR1_OC2PE = 0x800; // Output Compare 2 preload enable


    static constexpr uint32_t CCER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCER_CC1E = 0x1; // Capture/Compare 1 output enable When CC1 channel is configured as output, the OC1 level depends on MOE, OSSI, OSSR, OIS1, OIS1N and CC1NE bits, regardless of the CC1E bits state. Refer to for details.
    static constexpr uint32_t CCER_CC1P = 0x2; // Capture/Compare 1 output polarity When CC1 channel is configured as input, both CC1NP/CC1P bits select the active polarity of TI1FP1 and TI2FP1 for trigger or capture operations. CC1NP=0, CC1P=0: non-inverted/rising edge. The circuit is sensitive to TIxFP1 rising edge (capture or trigger operations in reset, external clock or trigger mode), TIxFP1 is not inverted (trigger operation in gated mode or encoder mode). CC1NP=0, CC1P=1: inverted/falling edge. The circuit is sensitive to TIxFP1 falling edge (capture or trigger operations in reset, external clock or trigger mode), TIxFP1 is inverted (trigger operation in gated mode or encoder mode). CC1NP=1, CC1P=1: non-inverted/both edges/ The circuit is sensitive to both TIxFP1 rising and falling edges (capture or trigger operations in reset, external clock or trigger mode), TIxFP1is not inverted (trigger operation in gated mode). This configuration must not be used in encoder mode. CC1NP=1, CC1P=0: this configuration is reserved, it must not be used. Note: This bit is not writable as soon as LOCK level 2 or 3 has been programmed (LOCK bits in TIMx_BDTR register). On channels that have a complementary output, this bit is preloaded. If the CCPC bit is set in the TIMx_CR2 register then the CC1P active bit takes the new value from the preloaded bit only when a Commutation event is generated.
    static constexpr uint32_t CCER_CC1NE = 0x4; // Capture/Compare 1 complementary output enable
    static constexpr uint32_t CCER_CC1NP = 0x8; // Capture/Compare 1 complementary output polarity CC1 channel configured as output: CC1 channel configured as input: This bit is used in conjunction with CC1P to define the polarity of TI1FP1 and TI2FP1. Refer to CC1P description. Note: This bit is not writable as soon as LOCK level 2 or 3 has been programmed (LOCK bits in TIMx_BDTR register) and CC1S=00 (the channel is configured in output). On channels that have a complementary output, this bit is preloaded. If the CCPC bit is set in the TIMx_CR2 register then the CC1NP active bit takes the new value from the preloaded bit only when a Commutation event is generated.
    static constexpr uint32_t CCER_CC2E = 0x10; // Capture/Compare 2 output enable Refer to CC1E description
    static constexpr uint32_t CCER_CC2P = 0x20; // Capture/Compare 2 output polarity Refer to CC1P description
    static constexpr uint32_t CCER_CC2NP = 0x80; // Capture/Compare 2 complementary output polarity Refer to CC1NP description

    static constexpr uint32_t CNT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNT_CNT; // counter value
    static constexpr uint32_t CNT_UIFCPY = 0x80000000; // UIF Copy

    static constexpr uint32_t PSC_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> PSC_PSC; // Prescaler value

    static constexpr uint32_t ARR_RESET_VALUE = 0xffff; // Reset value
    typedef bit_field_t<0, 0xffff> ARR_ARR; // Auto-reload value

    static constexpr uint32_t RCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RCR_REP; // Repetition counter value

    static constexpr uint32_t CCR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR1_CCR1; // Capture/Compare 1 value

    static constexpr uint32_t CCR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR2_CCR2; // Capture/Compare 2 value


    static constexpr uint32_t BDTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> BDTR_DTG; // Dead-time generator setup This bit-field defines the duration of the dead-time inserted between the complementary outputs. DT correspond to this duration. DTG[7:5]=0xx =&gt; DT=DTG[7:0]x tdtg with tdtg=tDTS DTG[7:5]=10x =&gt; DT=(64+DTG[5:0])xtdtg with Tdtg=2xtDTS DTG[7:5]=110 =&gt; DT=(32+DTG[4:0])xtdtg with Tdtg=8xtDTS DTG[7:5]=111 =&gt; DT=(32+DTG[4:0])xtdtg with Tdtg=16xtDTS Example if TDTS=125ns (8MHz), dead-time possible values are: 0 to 15875 ns by 125 ns steps, 16 s to 31750 ns by 250 ns steps, 32 s to 63 s by 1 s steps, 64 s to 126 s by 2 s steps Note: This bit-field can not be modified as long as LOCK level 1, 2 or 3 has been programmed (LOCK bits in TIMx_BDTR register).
    typedef bit_field_t<8, 0x3> BDTR_LOCK; // Lock configuration These bits offer a write protection against software errors. Note: The LOCK bits can be written only once after the reset. Once the TIMx_BDTR register has been written, their content is frozen until the next reset.
    static constexpr uint32_t BDTR_OSSI = 0x400; // Off-state selection for Idle mode This bit is used when MOE=0 on channels configured as outputs. See OC/OCN enable description for more details (enable register (TIM15_CCER) on page818). Note: This bit can not be modified as soon as the LOCK level 2 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t BDTR_OSSR = 0x800; // Off-state selection for Run mode This bit is used when MOE=1 on channels that have a complementary output which are configured as outputs. OSSR is not implemented if no complementary output is implemented in the timer. See OC/OCN enable description for more details (enable register (TIM15_CCER) on page818). Note: This bit can not be modified as soon as the LOCK level 2 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t BDTR_BKE = 0x1000; // Break enable 1; Break inputs (BRK and CCS clock failure event) enabled This bit cannot be modified when LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register). Note: Any write operation to this bit takes a delay of 1 APB clock cycle to become effective.
    static constexpr uint32_t BDTR_BKP = 0x2000; // Break polarity Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register). Any write operation to this bit takes a delay of 1 APB clock cycle to become effective.
    static constexpr uint32_t BDTR_AOE = 0x4000; // Automatic output enable Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t BDTR_MOE = 0x8000; // Main output enable This bit is cleared asynchronously by hardware as soon as the break input is active. It is set by software or automatically depending on the AOE bit. It is acting only on the channels which are configured in output. See OC/OCN enable description for more details (enable register (TIM15_CCER) on page818).
    typedef bit_field_t<16, 0xf> BDTR_BKF; // Break filter This bit-field defines the frequency used to sample the BRK input signal and the length of the digital filter applied to BRK. The digital filter is made of an event counter in which N events are needed to validate a transition on the output: Note: This bit cannot be modified when LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t BDTR_BKDSRM = 0x4000000; // Break Disarm This bit is cleared by hardware when no break source is active. The BKDSRM bit must be set by software to release the bidirectional output control (open-drain output in Hi-Z state) and then be polled it until it is reset by hardware, indicating that the fault condition has disappeared. Note: Any write operation to this bit takes a delay of 1 APB clock cycle to become effective.
    static constexpr uint32_t BDTR_BKBID = 0x10000000; // Break Bidirectional In the bidirectional mode (BKBID bit set to 1), the break input is configured both in input mode and in open drain output mode. Any active break event asserts a low logic level on the Break input to indicate an internal break event to external devices. Note: This bit cannot be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register). Note: Any write operation to this bit takes a delay of 1 APB clock cycle to become effective.

    static constexpr uint32_t DCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> DCR_DBA; // DMA base address This 5-bit field defines the base-address for DMA transfers (when read/write access are done through the TIMx_DMAR address). DBA is defined as an offset starting from the address of the TIMx_CR1 register. Example: ...
    typedef bit_field_t<8, 0x1f> DCR_DBL; // DMA burst length This 5-bit field defines the length of DMA transfers (the timer recognizes a burst transfer when a read or a write access is done to the TIMx_DMAR address). ...

    static constexpr uint32_t DMAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DMAR_DMAB; // DMA register for burst accesses


    static constexpr uint32_t AF1_RESET_VALUE = 0x1; // Reset value
    static constexpr uint32_t AF1_BKINE = 0x1; // BRK BKIN input enable This bit enables the BKIN alternate function input for the timers BRK input. BKIN input is &#39;ORed with the other BRK sources. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t AF1_BKINP = 0x200; // BRK BKIN input polarity This bit selects the BKIN alternate function input sensitivity. It must be programmed together with the BKP polarity bit. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).


    static constexpr uint32_t TISEL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> TISEL_TI1SEL; // selects TI1[0] to TI1[15] input Others: Reserved
    typedef bit_field_t<8, 0xf> TISEL_TI2SEL; // selects TI2[0] to TI2[15] input Others: Reserved
};

// TIM15: General purpose timers

struct stm32g051_tim15_t
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
    volatile uint32_t DCR; // DMA control register
    volatile uint32_t DMAR; // DMA address for full transfer
    reserved_t<0x4> _0x50;
    volatile uint32_t AF1; // TIM15 alternate register 1
    reserved_t<0x1> _0x64;
    volatile uint32_t TISEL; // input selection register

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR1_CEN = 0x1; // Counter enable Note: External clock and gated mode can work only if the CEN bit has been previously set by software. However trigger mode can set the CEN bit automatically by hardware.
    static constexpr uint32_t CR1_UDIS = 0x2; // Update disable This bit is set and cleared by software to enable/disable UEV event generation. Counter overflow/underflow Setting the UG bit Update generation through the slave mode controller Buffered registers are then loaded with their preload values.
    static constexpr uint32_t CR1_URS = 0x4; // Update request source This bit is set and cleared by software to select the UEV event sources. Counter overflow/underflow Setting the UG bit Update generation through the slave mode controller
    static constexpr uint32_t CR1_OPM = 0x8; // One-pulse mode
    static constexpr uint32_t CR1_ARPE = 0x80; // Auto-reload preload enable
    typedef bit_field_t<8, 0x3> CR1_CKD; // Clock division This bitfield indicates the division ratio between the timer clock (CK_INT) frequency and the dead-time and sampling clock (tDTS) used by the dead-time generators and the digital filters (TIx)
    static constexpr uint32_t CR1_UIFREMAP = 0x800; // UIF status bit remapping

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR2_CCPC = 0x1; // Capture/compare preloaded control Note: This bit acts only on channels that have a complementary output.
    static constexpr uint32_t CR2_CCUS = 0x4; // Capture/compare control update selection Note: This bit acts only on channels that have a complementary output.
    static constexpr uint32_t CR2_CCDS = 0x8; // Capture/compare DMA selection
    typedef bit_field_t<4, 0x7> CR2_MMS; // Master mode selection These bits allow to select the information to be sent in master mode to slave timers for synchronization (TRGO). The combination is as follows:
    static constexpr uint32_t CR2_TI1S = 0x80; // TI1 selection
    static constexpr uint32_t CR2_OIS1 = 0x100; // Output Idle state 1 (OC1 output) Note: This bit can not be modified as long as LOCK level 1, 2 or 3 has been programmed (LOCK bits in TIM15_BDTR register).
    static constexpr uint32_t CR2_OIS1N = 0x200; // Output Idle state 1 (OC1N output) Note: This bit can not be modified as long as LOCK level 1, 2 or 3 has been programmed (LOCK bits in TIM15_BDTR register).
    static constexpr uint32_t CR2_OIS2 = 0x400; // Output idle state 2 (OC2 output) Note: This bit cannot be modified as long as LOCK level 1, 2 or 3 has been programmed (LOCK bits in the TIM15_BDTR register).

    static constexpr uint32_t SMCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> SMCR_SMS1; // Slave mode selection When external signals are selected the active edge of the trigger signal (TRGI) is linked to the polarity selected on the external input (see Input Control register and Control Register description. Other codes: reserved. Note: The gated mode must not be used if TI1F_ED is selected as the trigger input (TS=00100). Indeed, TI1F_ED outputs 1 pulse for each transition on TI1F, whereas the gated mode checks the level of the trigger signal. Note: The clock of the slave peripherals (timer, ADC, ...) receiving the TRGO or the TRGO2 signals must be enabled prior to receive events from the master timer, and the clock frequency (prescaler) must not be changed on-the-fly while triggers are received from the master timer.
    typedef bit_field_t<4, 0x7> SMCR_TS1; // Trigger selection This bit field selects the trigger input to be used to synchronize the counter. Other: Reserved See for more details on ITRx meaning for each Timer. Note: These bits must be changed only when they are not used (e.g. when SMS=000) to avoid wrong edge detections at the transition.
    static constexpr uint32_t SMCR_MSM = 0x80; // Master/slave mode
    static constexpr uint32_t SMCR_SMS2 = 0x10000; // Slave mode selection When external signals are selected the active edge of the trigger signal (TRGI) is linked to the polarity selected on the external input (see Input Control register and Control Register description. Other codes: reserved. Note: The gated mode must not be used if TI1F_ED is selected as the trigger input (TS=00100). Indeed, TI1F_ED outputs 1 pulse for each transition on TI1F, whereas the gated mode checks the level of the trigger signal. Note: The clock of the slave peripherals (timer, ADC, ...) receiving the TRGO or the TRGO2 signals must be enabled prior to receive events from the master timer, and the clock frequency (prescaler) must not be changed on-the-fly while triggers are received from the master timer.
    typedef bit_field_t<20, 0x3> SMCR_TS2; // Trigger selection This bit field selects the trigger input to be used to synchronize the counter. Other: Reserved See for more details on ITRx meaning for each Timer. Note: These bits must be changed only when they are not used (e.g. when SMS=000) to avoid wrong edge detections at the transition.

    static constexpr uint32_t DIER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DIER_UIE = 0x1; // Update interrupt enable
    static constexpr uint32_t DIER_CC1IE = 0x2; // Capture/Compare 1 interrupt enable
    static constexpr uint32_t DIER_CC2IE = 0x4; // Capture/Compare 2 interrupt enable
    static constexpr uint32_t DIER_COMIE = 0x20; // COM interrupt enable
    static constexpr uint32_t DIER_TIE = 0x40; // Trigger interrupt enable
    static constexpr uint32_t DIER_BIE = 0x80; // Break interrupt enable
    static constexpr uint32_t DIER_UDE = 0x100; // Update DMA request enable
    static constexpr uint32_t DIER_CC1DE = 0x200; // Capture/Compare 1 DMA request enable
    static constexpr uint32_t DIER_CC2DE = 0x400; // Capture/Compare 2 DMA request enable
    static constexpr uint32_t DIER_COMDE = 0x2000; // COM DMA request enable
    static constexpr uint32_t DIER_TDE = 0x4000; // Trigger DMA request enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_UIF = 0x1; // Update interrupt flag This bit is set by hardware on an update event. It is cleared by software. At overflow regarding the repetition counter value (update if repetition counter = 0) and if the UDIS=0 in the TIMx_CR1 register. When CNT is reinitialized by software using the UG bit in TIMx_EGR register, if URS=0 and UDIS=0 in the TIMx_CR1 register. When CNT is reinitialized by a trigger event (refer to control register (TIM15_SMCR)), if URS=0 and UDIS=0 in the TIMx_CR1 register.
    static constexpr uint32_t SR_CC1IF = 0x2; // Capture/Compare 1 interrupt flag This flag is set by hardware. It is cleared by software (input capture or output compare mode) or by reading the TIMx_CCR1 register (input capture mode only). If channel CC1 is configured as output: this flag is set when the content of the counter TIMx_CNT matches the content of the TIMx_CCR1 register. When the content of TIMx_CCR1 is greater than the content of TIMx_ARR, the CC1IF bit goes high on the counter overflow (in up-counting and up/down-counting modes) or underflow (in down-counting mode). There are 3 possible options for flag setting in center-aligned mode, refer to the CMS bits in the TIMx_CR1 register for the full description. If channel CC1 is configured as input: this bit is set when counter value has been captured in TIMx_CCR1 register (an edge has been detected on IC1, as per the edge sensitivity defined with the CC1P and CC1NP bits setting, in TIMx_CCER).
    static constexpr uint32_t SR_CC2IF = 0x4; // Capture/Compare 2 interrupt flag refer to CC1IF description
    static constexpr uint32_t SR_COMIF = 0x20; // COM interrupt flag This flag is set by hardware on a COM event (once the capture/compare control bits CCxE, CCxNE, OCxM have been updated). It is cleared by software.
    static constexpr uint32_t SR_TIF = 0x40; // Trigger interrupt flag This flag is set by hardware on the TRG trigger event (active edge detected on TRGI input when the slave mode controller is enabled in all modes but gated mode, both edges in case gated mode is selected). It is set when the counter starts or stops when gated mode is selected. It is cleared by software.
    static constexpr uint32_t SR_BIF = 0x80; // Break interrupt flag This flag is set by hardware as soon as the break input goes active. It can be cleared by software if the break input is not active.
    static constexpr uint32_t SR_CC1OF = 0x200; // Capture/Compare 1 overcapture flag This flag is set by hardware only when the corresponding channel is configured in input capture mode. It is cleared by software by writing it to &#39;0.
    static constexpr uint32_t SR_CC2OF = 0x400; // Capture/Compare 2 overcapture flag Refer to CC1OF description

    static constexpr uint32_t EGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t EGR_UG = 0x1; // Update generation This bit can be set by software, it is automatically cleared by hardware.
    static constexpr uint32_t EGR_CC1G = 0x2; // Capture/Compare 1 generation This bit is set by software in order to generate an event, it is automatically cleared by hardware. If channel CC1 is configured as output: CC1IF flag is set, Corresponding interrupt or DMA request is sent if enabled. If channel CC1 is configured as input: The current value of the counter is captured in TIMx_CCR1 register. The CC1IF flag is set, the corresponding interrupt or DMA request is sent if enabled. The CC1OF flag is set if the CC1IF flag was already high.
    static constexpr uint32_t EGR_CC2G = 0x4; // Capture/Compare 2 generation Refer to CC1G description
    static constexpr uint32_t EGR_COMG = 0x20; // Capture/Compare control update generation This bit can be set by software, it is automatically cleared by hardware. Note: This bit acts only on channels that have a complementary output.
    static constexpr uint32_t EGR_TG = 0x40; // Trigger generation This bit is set by software in order to generate an event, it is automatically cleared by hardware.
    static constexpr uint32_t EGR_BG = 0x80; // Break generation This bit is set by software in order to generate an event, it is automatically cleared by hardware.

    static constexpr uint32_t CCMR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> CCMR1_CC1S; // Capture/Compare 1 selection This bit-field defines the direction of the channel (input/output) as well as the used input. Note: CC1S bits are writable only when the channel is OFF (CC1E = &#39;0 in TIMx_CCER).
    typedef bit_field_t<8, 0x3> CCMR1_CC2S; // Capture/Compare 2 selection This bit-field defines the direction of the channel (input/output) as well as the used input. Note: CC2S bits are writable only when the channel is OFF (CC2E = &#39;0 in TIMx_CCER).
    typedef bit_field_t<4, 0xf> CCMR1_IC1F; // Input capture 1 filter This bit-field defines the frequency used to sample TI1 input and the length of the digital filter applied to TI1. The digital filter is made of an event counter in which N consecutive events are needed to validate a transition on the output:
    typedef bit_field_t<2, 0x3> CCMR1_IC1PSC; // Input capture 1 prescaler This bit-field defines the ratio of the prescaler acting on CC1 input (IC1). The prescaler is reset as soon as CC1E=0 (TIMx_CCER register).
    typedef bit_field_t<12, 0xf> CCMR1_IC2F; // Input capture 2 filter
    typedef bit_field_t<10, 0x3> CCMR1_IC2PSC; // Input capture 2 prescaler
    static constexpr uint32_t CCMR1_OC1FE = 0x4; // Output Compare 1 fast enable This bit decreases the latency between a trigger event and a transition on the timer output. It must be used in one-pulse mode (OPM bit set in TIMx_CR1 register), to have the output pulse starting as soon as possible after the starting trigger.
    typedef bit_field_t<4, 0x7> CCMR1_OC1M1; // Output Compare 1 mode These bits define the behavior of the output reference signal OC1REF from which OC1 and OC1N are derived. OC1REF is active high whereas OC1 and OC1N active level depends on CC1P and CC1NP bits. Note: These bits can not be modified as long as LOCK level 3 has been programmed (LOCK bits in TIMx_BDTR register) and CC1S=00 (the channel is configured in output). In PWM mode, the OCREF level changes only when the result of the comparison changes or when the output compare mode switches from frozen mode to PWM mode. On channels that have a complementary output, this bit field is preloaded. If the CCPC bit is set in the TIMx_CR2 register then the OC1M active bits take the new value from the preloaded bits only when a COM event is generated. The OC1M[3] bit is not contiguous, located in bit 16.
    static constexpr uint32_t CCMR1_OC1M2 = 0x10000; // Output Compare 1 mode These bits define the behavior of the output reference signal OC1REF from which OC1 and OC1N are derived. OC1REF is active high whereas OC1 and OC1N active level depends on CC1P and CC1NP bits. Note: These bits can not be modified as long as LOCK level 3 has been programmed (LOCK bits in TIMx_BDTR register) and CC1S=00 (the channel is configured in output). In PWM mode, the OCREF level changes only when the result of the comparison changes or when the output compare mode switches from frozen mode to PWM mode. On channels that have a complementary output, this bit field is preloaded. If the CCPC bit is set in the TIMx_CR2 register then the OC1M active bits take the new value from the preloaded bits only when a COM event is generated. The OC1M[3] bit is not contiguous, located in bit 16.
    static constexpr uint32_t CCMR1_OC1PE = 0x8; // Output Compare 1 preload enable Note: These bits can not be modified as long as LOCK level 3 has been programmed (LOCK bits in TIMx_BDTR register) and CC1S=00 (the channel is configured in output). The PWM mode can be used without validating the preload register only in one pulse mode (OPM bit set in TIMx_CR1 register). Else the behavior is not guaranteed.
    static constexpr uint32_t CCMR1_OC2FE = 0x400; // Output Compare 2 fast enable
    typedef bit_field_t<12, 0x7> CCMR1_OC2M1; // Output Compare 2 mode
    static constexpr uint32_t CCMR1_OC2M2 = 0x1000000; // Output Compare 2 mode
    static constexpr uint32_t CCMR1_OC2PE = 0x800; // Output Compare 2 preload enable


    static constexpr uint32_t CCER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCER_CC1E = 0x1; // Capture/Compare 1 output enable When CC1 channel is configured as output, the OC1 level depends on MOE, OSSI, OSSR, OIS1, OIS1N and CC1NE bits, regardless of the CC1E bits state. Refer to for details.
    static constexpr uint32_t CCER_CC1P = 0x2; // Capture/Compare 1 output polarity When CC1 channel is configured as input, both CC1NP/CC1P bits select the active polarity of TI1FP1 and TI2FP1 for trigger or capture operations. CC1NP=0, CC1P=0: non-inverted/rising edge. The circuit is sensitive to TIxFP1 rising edge (capture or trigger operations in reset, external clock or trigger mode), TIxFP1 is not inverted (trigger operation in gated mode or encoder mode). CC1NP=0, CC1P=1: inverted/falling edge. The circuit is sensitive to TIxFP1 falling edge (capture or trigger operations in reset, external clock or trigger mode), TIxFP1 is inverted (trigger operation in gated mode or encoder mode). CC1NP=1, CC1P=1: non-inverted/both edges/ The circuit is sensitive to both TIxFP1 rising and falling edges (capture or trigger operations in reset, external clock or trigger mode), TIxFP1is not inverted (trigger operation in gated mode). This configuration must not be used in encoder mode. CC1NP=1, CC1P=0: this configuration is reserved, it must not be used. Note: This bit is not writable as soon as LOCK level 2 or 3 has been programmed (LOCK bits in TIMx_BDTR register). On channels that have a complementary output, this bit is preloaded. If the CCPC bit is set in the TIMx_CR2 register then the CC1P active bit takes the new value from the preloaded bit only when a Commutation event is generated.
    static constexpr uint32_t CCER_CC1NE = 0x4; // Capture/Compare 1 complementary output enable
    static constexpr uint32_t CCER_CC1NP = 0x8; // Capture/Compare 1 complementary output polarity CC1 channel configured as output: CC1 channel configured as input: This bit is used in conjunction with CC1P to define the polarity of TI1FP1 and TI2FP1. Refer to CC1P description. Note: This bit is not writable as soon as LOCK level 2 or 3 has been programmed (LOCK bits in TIMx_BDTR register) and CC1S=00 (the channel is configured in output). On channels that have a complementary output, this bit is preloaded. If the CCPC bit is set in the TIMx_CR2 register then the CC1NP active bit takes the new value from the preloaded bit only when a Commutation event is generated.
    static constexpr uint32_t CCER_CC2E = 0x10; // Capture/Compare 2 output enable Refer to CC1E description
    static constexpr uint32_t CCER_CC2P = 0x20; // Capture/Compare 2 output polarity Refer to CC1P description
    static constexpr uint32_t CCER_CC2NP = 0x80; // Capture/Compare 2 complementary output polarity Refer to CC1NP description

    static constexpr uint32_t CNT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNT_CNT; // counter value
    static constexpr uint32_t CNT_UIFCPY = 0x80000000; // UIF Copy

    static constexpr uint32_t PSC_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> PSC_PSC; // Prescaler value

    static constexpr uint32_t ARR_RESET_VALUE = 0xffff; // Reset value
    typedef bit_field_t<0, 0xffff> ARR_ARR; // Auto-reload value

    static constexpr uint32_t RCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RCR_REP; // Repetition counter value

    static constexpr uint32_t CCR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR1_CCR1; // Capture/Compare 1 value

    static constexpr uint32_t CCR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR2_CCR2; // Capture/Compare 2 value


    static constexpr uint32_t BDTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> BDTR_DTG; // Dead-time generator setup This bit-field defines the duration of the dead-time inserted between the complementary outputs. DT correspond to this duration. DTG[7:5]=0xx =&gt; DT=DTG[7:0]x tdtg with tdtg=tDTS DTG[7:5]=10x =&gt; DT=(64+DTG[5:0])xtdtg with Tdtg=2xtDTS DTG[7:5]=110 =&gt; DT=(32+DTG[4:0])xtdtg with Tdtg=8xtDTS DTG[7:5]=111 =&gt; DT=(32+DTG[4:0])xtdtg with Tdtg=16xtDTS Example if TDTS=125ns (8MHz), dead-time possible values are: 0 to 15875 ns by 125 ns steps, 16 s to 31750 ns by 250 ns steps, 32 s to 63 s by 1 s steps, 64 s to 126 s by 2 s steps Note: This bit-field can not be modified as long as LOCK level 1, 2 or 3 has been programmed (LOCK bits in TIMx_BDTR register).
    typedef bit_field_t<8, 0x3> BDTR_LOCK; // Lock configuration These bits offer a write protection against software errors. Note: The LOCK bits can be written only once after the reset. Once the TIMx_BDTR register has been written, their content is frozen until the next reset.
    static constexpr uint32_t BDTR_OSSI = 0x400; // Off-state selection for Idle mode This bit is used when MOE=0 on channels configured as outputs. See OC/OCN enable description for more details (enable register (TIM15_CCER) on page818). Note: This bit can not be modified as soon as the LOCK level 2 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t BDTR_OSSR = 0x800; // Off-state selection for Run mode This bit is used when MOE=1 on channels that have a complementary output which are configured as outputs. OSSR is not implemented if no complementary output is implemented in the timer. See OC/OCN enable description for more details (enable register (TIM15_CCER) on page818). Note: This bit can not be modified as soon as the LOCK level 2 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t BDTR_BKE = 0x1000; // Break enable 1; Break inputs (BRK and CCS clock failure event) enabled This bit cannot be modified when LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register). Note: Any write operation to this bit takes a delay of 1 APB clock cycle to become effective.
    static constexpr uint32_t BDTR_BKP = 0x2000; // Break polarity Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register). Any write operation to this bit takes a delay of 1 APB clock cycle to become effective.
    static constexpr uint32_t BDTR_AOE = 0x4000; // Automatic output enable Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t BDTR_MOE = 0x8000; // Main output enable This bit is cleared asynchronously by hardware as soon as the break input is active. It is set by software or automatically depending on the AOE bit. It is acting only on the channels which are configured in output. See OC/OCN enable description for more details (enable register (TIM15_CCER) on page818).
    typedef bit_field_t<16, 0xf> BDTR_BKF; // Break filter This bit-field defines the frequency used to sample the BRK input signal and the length of the digital filter applied to BRK. The digital filter is made of an event counter in which N events are needed to validate a transition on the output: Note: This bit cannot be modified when LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t BDTR_BKDSRM = 0x4000000; // Break Disarm This bit is cleared by hardware when no break source is active. The BKDSRM bit must be set by software to release the bidirectional output control (open-drain output in Hi-Z state) and then be polled it until it is reset by hardware, indicating that the fault condition has disappeared. Note: Any write operation to this bit takes a delay of 1 APB clock cycle to become effective.
    static constexpr uint32_t BDTR_BKBID = 0x10000000; // Break Bidirectional In the bidirectional mode (BKBID bit set to 1), the break input is configured both in input mode and in open drain output mode. Any active break event asserts a low logic level on the Break input to indicate an internal break event to external devices. Note: This bit cannot be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register). Note: Any write operation to this bit takes a delay of 1 APB clock cycle to become effective.

    static constexpr uint32_t DCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> DCR_DBA; // DMA base address This 5-bit field defines the base-address for DMA transfers (when read/write access are done through the TIMx_DMAR address). DBA is defined as an offset starting from the address of the TIMx_CR1 register. Example: ...
    typedef bit_field_t<8, 0x1f> DCR_DBL; // DMA burst length This 5-bit field defines the length of DMA transfers (the timer recognizes a burst transfer when a read or a write access is done to the TIMx_DMAR address). ...

    static constexpr uint32_t DMAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DMAR_DMAB; // DMA register for burst accesses


    static constexpr uint32_t AF1_RESET_VALUE = 0x1; // Reset value
    static constexpr uint32_t AF1_BKINE = 0x1; // BRK BKIN input enable This bit enables the BKIN alternate function input for the timers BRK input. BKIN input is &#39;ORed with the other BRK sources. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t AF1_BKCMP1E = 0x2; // BRK COMP1 enable This bit enables the COMP1 for the timers BRK input. COMP1 output is &#39;ORed with the other BRK sources. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t AF1_BKCMP2E = 0x4; // BRK COMP2 enable This bit enables the COMP2 for the timers BRK input. COMP2 output is &#39;ORed with the other BRK sources. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t AF1_BKCMP3E = 0x8; // BRK COMP3 enable This bit enables the COMP3 for the timers BRK input. COMP3 output is &#39;ORed with the other BRK sources. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t AF1_BKINP = 0x200; // BRK BKIN input polarity This bit selects the BKIN alternate function input sensitivity. It must be programmed together with the BKP polarity bit. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t AF1_BKCMP1P = 0x400; // BRK COMP1 input polarity This bit selects the COMP1 input sensitivity. It must be programmed together with the BKP polarity bit. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t AF1_BKCMP2P = 0x800; // BRK COMP2 input polarity This bit selects the COMP2 input sensitivity. It must be programmed together with the BKP polarity bit. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t AF1_BKCMP3P = 0x1000; // BRK COMP3 input polarity This bit selects the COMP3 input sensitivity. It must be programmed together with the BKP polarity bit. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).


    static constexpr uint32_t TISEL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> TISEL_TI1SEL; // selects TI1[0] to TI1[15] input Others: Reserved
    typedef bit_field_t<8, 0xf> TISEL_TI2SEL; // selects TI2[0] to TI2[15] input Others: Reserved
};

// TIM15: General purpose timers

struct stm32g070_tim15_t
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
    volatile uint32_t DCR; // DMA control register
    volatile uint32_t DMAR; // DMA address for full transfer

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR1_CEN = 0x1; // Counter enable Note: External clock and gated mode can work only if the CEN bit has been previously set by software. However trigger mode can set the CEN bit automatically by hardware.
    static constexpr uint32_t CR1_UDIS = 0x2; // Update disable This bit is set and cleared by software to enable/disable UEV event generation. Counter overflow/underflow Setting the UG bit Update generation through the slave mode controller Buffered registers are then loaded with their preload values.
    static constexpr uint32_t CR1_URS = 0x4; // Update request source This bit is set and cleared by software to select the UEV event sources. Counter overflow/underflow Setting the UG bit Update generation through the slave mode controller
    static constexpr uint32_t CR1_OPM = 0x8; // One-pulse mode
    static constexpr uint32_t CR1_ARPE = 0x80; // Auto-reload preload enable
    typedef bit_field_t<8, 0x3> CR1_CKD; // Clock division This bitfield indicates the division ratio between the timer clock (CK_INT) frequency and the dead-time and sampling clock (tDTS) used by the dead-time generators and the digital filters (TIx)
    static constexpr uint32_t CR1_UIFREMAP = 0x800; // UIF status bit remapping

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR2_CCPC = 0x1; // Capture/compare preloaded control Note: This bit acts only on channels that have a complementary output.
    static constexpr uint32_t CR2_CCUS = 0x4; // Capture/compare control update selection Note: This bit acts only on channels that have a complementary output.
    static constexpr uint32_t CR2_CCDS = 0x8; // Capture/compare DMA selection
    typedef bit_field_t<4, 0x7> CR2_MMS; // Master mode selection These bits allow to select the information to be sent in master mode to slave timers for synchronization (TRGO). The combination is as follows:
    static constexpr uint32_t CR2_TI1S = 0x80; // TI1 selection
    static constexpr uint32_t CR2_OIS1 = 0x100; // Output Idle state 1 (OC1 output) Note: This bit can not be modified as long as LOCK level 1, 2 or 3 has been programmed (LOCK bits in TIM15_BDTR register).
    static constexpr uint32_t CR2_OIS1N = 0x200; // Output Idle state 1 (OC1N output) Note: This bit can not be modified as long as LOCK level 1, 2 or 3 has been programmed (LOCK bits in TIM15_BDTR register).
    static constexpr uint32_t CR2_OIS2 = 0x400; // Output idle state 2 (OC2 output) Note: This bit cannot be modified as long as LOCK level 1, 2 or 3 has been programmed (LOCK bits in the TIM15_BDTR register).

    static constexpr uint32_t SMCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> SMCR_SMS1; // Slave mode selection When external signals are selected the active edge of the trigger signal (TRGI) is linked to the polarity selected on the external input (see Input Control register and Control Register description. Other codes: reserved. Note: The gated mode must not be used if TI1F_ED is selected as the trigger input (TS=00100). Indeed, TI1F_ED outputs 1 pulse for each transition on TI1F, whereas the gated mode checks the level of the trigger signal. Note: The clock of the slave peripherals (timer, ADC, ...) receiving the TRGO or the TRGO2 signals must be enabled prior to receive events from the master timer, and the clock frequency (prescaler) must not be changed on-the-fly while triggers are received from the master timer.
    typedef bit_field_t<4, 0x7> SMCR_TS1; // Trigger selection This bit field selects the trigger input to be used to synchronize the counter. Other: Reserved See for more details on ITRx meaning for each Timer. Note: These bits must be changed only when they are not used (e.g. when SMS=000) to avoid wrong edge detections at the transition.
    static constexpr uint32_t SMCR_MSM = 0x80; // Master/slave mode
    static constexpr uint32_t SMCR_SMS2 = 0x10000; // Slave mode selection When external signals are selected the active edge of the trigger signal (TRGI) is linked to the polarity selected on the external input (see Input Control register and Control Register description. Other codes: reserved. Note: The gated mode must not be used if TI1F_ED is selected as the trigger input (TS=00100). Indeed, TI1F_ED outputs 1 pulse for each transition on TI1F, whereas the gated mode checks the level of the trigger signal. Note: The clock of the slave peripherals (timer, ADC, ...) receiving the TRGO or the TRGO2 signals must be enabled prior to receive events from the master timer, and the clock frequency (prescaler) must not be changed on-the-fly while triggers are received from the master timer.
    typedef bit_field_t<20, 0x3> SMCR_TS2; // Trigger selection This bit field selects the trigger input to be used to synchronize the counter. Other: Reserved See for more details on ITRx meaning for each Timer. Note: These bits must be changed only when they are not used (e.g. when SMS=000) to avoid wrong edge detections at the transition.

    static constexpr uint32_t DIER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DIER_UIE = 0x1; // Update interrupt enable
    static constexpr uint32_t DIER_CC1IE = 0x2; // Capture/Compare 1 interrupt enable
    static constexpr uint32_t DIER_CC2IE = 0x4; // Capture/Compare 2 interrupt enable
    static constexpr uint32_t DIER_COMIE = 0x20; // COM interrupt enable
    static constexpr uint32_t DIER_TIE = 0x40; // Trigger interrupt enable
    static constexpr uint32_t DIER_BIE = 0x80; // Break interrupt enable
    static constexpr uint32_t DIER_UDE = 0x100; // Update DMA request enable
    static constexpr uint32_t DIER_CC1DE = 0x200; // Capture/Compare 1 DMA request enable
    static constexpr uint32_t DIER_CC2DE = 0x400; // Capture/Compare 2 DMA request enable
    static constexpr uint32_t DIER_COMDE = 0x2000; // COM DMA request enable
    static constexpr uint32_t DIER_TDE = 0x4000; // Trigger DMA request enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_UIF = 0x1; // Update interrupt flag This bit is set by hardware on an update event. It is cleared by software. At overflow regarding the repetition counter value (update if repetition counter = 0) and if the UDIS=0 in the TIMx_CR1 register. When CNT is reinitialized by software using the UG bit in TIMx_EGR register, if URS=0 and UDIS=0 in the TIMx_CR1 register. When CNT is reinitialized by a trigger event (refer to control register (TIM15_SMCR)), if URS=0 and UDIS=0 in the TIMx_CR1 register.
    static constexpr uint32_t SR_CC1IF = 0x2; // Capture/Compare 1 interrupt flag This flag is set by hardware. It is cleared by software (input capture or output compare mode) or by reading the TIMx_CCR1 register (input capture mode only). If channel CC1 is configured as output: this flag is set when the content of the counter TIMx_CNT matches the content of the TIMx_CCR1 register. When the content of TIMx_CCR1 is greater than the content of TIMx_ARR, the CC1IF bit goes high on the counter overflow (in up-counting and up/down-counting modes) or underflow (in down-counting mode). There are 3 possible options for flag setting in center-aligned mode, refer to the CMS bits in the TIMx_CR1 register for the full description. If channel CC1 is configured as input: this bit is set when counter value has been captured in TIMx_CCR1 register (an edge has been detected on IC1, as per the edge sensitivity defined with the CC1P and CC1NP bits setting, in TIMx_CCER).
    static constexpr uint32_t SR_CC2IF = 0x4; // Capture/Compare 2 interrupt flag refer to CC1IF description
    static constexpr uint32_t SR_COMIF = 0x20; // COM interrupt flag This flag is set by hardware on a COM event (once the capture/compare control bits CCxE, CCxNE, OCxM have been updated). It is cleared by software.
    static constexpr uint32_t SR_TIF = 0x40; // Trigger interrupt flag This flag is set by hardware on the TRG trigger event (active edge detected on TRGI input when the slave mode controller is enabled in all modes but gated mode, both edges in case gated mode is selected). It is set when the counter starts or stops when gated mode is selected. It is cleared by software.
    static constexpr uint32_t SR_BIF = 0x80; // Break interrupt flag This flag is set by hardware as soon as the break input goes active. It can be cleared by software if the break input is not active.
    static constexpr uint32_t SR_CC1OF = 0x200; // Capture/Compare 1 overcapture flag This flag is set by hardware only when the corresponding channel is configured in input capture mode. It is cleared by software by writing it to &#39;0.
    static constexpr uint32_t SR_CC2OF = 0x400; // Capture/Compare 2 overcapture flag Refer to CC1OF description

    static constexpr uint32_t EGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t EGR_UG = 0x1; // Update generation This bit can be set by software, it is automatically cleared by hardware.
    static constexpr uint32_t EGR_CC1G = 0x2; // Capture/Compare 1 generation This bit is set by software in order to generate an event, it is automatically cleared by hardware. If channel CC1 is configured as output: CC1IF flag is set, Corresponding interrupt or DMA request is sent if enabled. If channel CC1 is configured as input: The current value of the counter is captured in TIMx_CCR1 register. The CC1IF flag is set, the corresponding interrupt or DMA request is sent if enabled. The CC1OF flag is set if the CC1IF flag was already high.
    static constexpr uint32_t EGR_CC2G = 0x4; // Capture/Compare 2 generation Refer to CC1G description
    static constexpr uint32_t EGR_COMG = 0x20; // Capture/Compare control update generation This bit can be set by software, it is automatically cleared by hardware. Note: This bit acts only on channels that have a complementary output.
    static constexpr uint32_t EGR_TG = 0x40; // Trigger generation This bit is set by software in order to generate an event, it is automatically cleared by hardware.
    static constexpr uint32_t EGR_BG = 0x80; // Break generation This bit is set by software in order to generate an event, it is automatically cleared by hardware.

    static constexpr uint32_t CCMR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> CCMR1_CC1S; // Capture/Compare 1 selection This bit-field defines the direction of the channel (input/output) as well as the used input. Note: CC1S bits are writable only when the channel is OFF (CC1E = &#39;0 in TIMx_CCER).
    typedef bit_field_t<8, 0x3> CCMR1_CC2S; // Capture/Compare 2 selection This bit-field defines the direction of the channel (input/output) as well as the used input. Note: CC2S bits are writable only when the channel is OFF (CC2E = &#39;0 in TIMx_CCER).
    typedef bit_field_t<4, 0xf> CCMR1_IC1F; // Input capture 1 filter This bit-field defines the frequency used to sample TI1 input and the length of the digital filter applied to TI1. The digital filter is made of an event counter in which N consecutive events are needed to validate a transition on the output:
    typedef bit_field_t<2, 0x3> CCMR1_IC1PSC; // Input capture 1 prescaler This bit-field defines the ratio of the prescaler acting on CC1 input (IC1). The prescaler is reset as soon as CC1E=0 (TIMx_CCER register).
    typedef bit_field_t<12, 0xf> CCMR1_IC2F; // Input capture 2 filter
    typedef bit_field_t<10, 0x3> CCMR1_IC2PSC; // Input capture 2 prescaler
    static constexpr uint32_t CCMR1_OC1FE = 0x4; // Output Compare 1 fast enable This bit decreases the latency between a trigger event and a transition on the timer output. It must be used in one-pulse mode (OPM bit set in TIMx_CR1 register), to have the output pulse starting as soon as possible after the starting trigger.
    typedef bit_field_t<4, 0x7> CCMR1_OC1M1; // Output Compare 1 mode These bits define the behavior of the output reference signal OC1REF from which OC1 and OC1N are derived. OC1REF is active high whereas OC1 and OC1N active level depends on CC1P and CC1NP bits. Note: These bits can not be modified as long as LOCK level 3 has been programmed (LOCK bits in TIMx_BDTR register) and CC1S=00 (the channel is configured in output). In PWM mode, the OCREF level changes only when the result of the comparison changes or when the output compare mode switches from frozen mode to PWM mode. On channels that have a complementary output, this bit field is preloaded. If the CCPC bit is set in the TIMx_CR2 register then the OC1M active bits take the new value from the preloaded bits only when a COM event is generated. The OC1M[3] bit is not contiguous, located in bit 16.
    static constexpr uint32_t CCMR1_OC1M2 = 0x10000; // Output Compare 1 mode These bits define the behavior of the output reference signal OC1REF from which OC1 and OC1N are derived. OC1REF is active high whereas OC1 and OC1N active level depends on CC1P and CC1NP bits. Note: These bits can not be modified as long as LOCK level 3 has been programmed (LOCK bits in TIMx_BDTR register) and CC1S=00 (the channel is configured in output). In PWM mode, the OCREF level changes only when the result of the comparison changes or when the output compare mode switches from frozen mode to PWM mode. On channels that have a complementary output, this bit field is preloaded. If the CCPC bit is set in the TIMx_CR2 register then the OC1M active bits take the new value from the preloaded bits only when a COM event is generated. The OC1M[3] bit is not contiguous, located in bit 16.
    static constexpr uint32_t CCMR1_OC1PE = 0x8; // Output Compare 1 preload enable Note: These bits can not be modified as long as LOCK level 3 has been programmed (LOCK bits in TIMx_BDTR register) and CC1S=00 (the channel is configured in output). The PWM mode can be used without validating the preload register only in one pulse mode (OPM bit set in TIMx_CR1 register). Else the behavior is not guaranteed.
    static constexpr uint32_t CCMR1_OC2FE = 0x400; // Output Compare 2 fast enable
    typedef bit_field_t<12, 0x7> CCMR1_OC2M1; // Output Compare 2 mode
    static constexpr uint32_t CCMR1_OC2M2 = 0x1000000; // Output Compare 2 mode
    static constexpr uint32_t CCMR1_OC2PE = 0x800; // Output Compare 2 preload enable


    static constexpr uint32_t CCER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCER_CC1E = 0x1; // Capture/Compare 1 output enable When CC1 channel is configured as output, the OC1 level depends on MOE, OSSI, OSSR, OIS1, OIS1N and CC1NE bits, regardless of the CC1E bits state. Refer to for details.
    static constexpr uint32_t CCER_CC1P = 0x2; // Capture/Compare 1 output polarity When CC1 channel is configured as input, both CC1NP/CC1P bits select the active polarity of TI1FP1 and TI2FP1 for trigger or capture operations. CC1NP=0, CC1P=0: non-inverted/rising edge. The circuit is sensitive to TIxFP1 rising edge (capture or trigger operations in reset, external clock or trigger mode), TIxFP1 is not inverted (trigger operation in gated mode or encoder mode). CC1NP=0, CC1P=1: inverted/falling edge. The circuit is sensitive to TIxFP1 falling edge (capture or trigger operations in reset, external clock or trigger mode), TIxFP1 is inverted (trigger operation in gated mode or encoder mode). CC1NP=1, CC1P=1: non-inverted/both edges/ The circuit is sensitive to both TIxFP1 rising and falling edges (capture or trigger operations in reset, external clock or trigger mode), TIxFP1is not inverted (trigger operation in gated mode). This configuration must not be used in encoder mode. CC1NP=1, CC1P=0: this configuration is reserved, it must not be used. Note: This bit is not writable as soon as LOCK level 2 or 3 has been programmed (LOCK bits in TIMx_BDTR register). On channels that have a complementary output, this bit is preloaded. If the CCPC bit is set in the TIMx_CR2 register then the CC1P active bit takes the new value from the preloaded bit only when a Commutation event is generated.
    static constexpr uint32_t CCER_CC1NE = 0x4; // Capture/Compare 1 complementary output enable
    static constexpr uint32_t CCER_CC1NP = 0x8; // Capture/Compare 1 complementary output polarity CC1 channel configured as output: CC1 channel configured as input: This bit is used in conjunction with CC1P to define the polarity of TI1FP1 and TI2FP1. Refer to CC1P description. Note: This bit is not writable as soon as LOCK level 2 or 3 has been programmed (LOCK bits in TIMx_BDTR register) and CC1S=00 (the channel is configured in output). On channels that have a complementary output, this bit is preloaded. If the CCPC bit is set in the TIMx_CR2 register then the CC1NP active bit takes the new value from the preloaded bit only when a Commutation event is generated.
    static constexpr uint32_t CCER_CC2E = 0x10; // Capture/Compare 2 output enable Refer to CC1E description
    static constexpr uint32_t CCER_CC2P = 0x20; // Capture/Compare 2 output polarity Refer to CC1P description
    static constexpr uint32_t CCER_CC2NP = 0x80; // Capture/Compare 2 complementary output polarity Refer to CC1NP description

    static constexpr uint32_t CNT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNT_CNT; // counter value
    static constexpr uint32_t CNT_UIFCPY = 0x80000000; // UIF Copy

    static constexpr uint32_t PSC_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> PSC_PSC; // Prescaler value

    static constexpr uint32_t ARR_RESET_VALUE = 0xffff; // Reset value
    typedef bit_field_t<0, 0xffff> ARR_ARR; // Auto-reload value

    static constexpr uint32_t RCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RCR_REP; // Repetition counter value

    static constexpr uint32_t CCR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR1_CCR1; // Capture/Compare 1 value

    static constexpr uint32_t CCR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR2_CCR2; // Capture/Compare 2 value


    static constexpr uint32_t BDTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> BDTR_DTG; // Dead-time generator setup This bit-field defines the duration of the dead-time inserted between the complementary outputs. DT correspond to this duration. DTG[7:5]=0xx =&gt; DT=DTG[7:0]x tdtg with tdtg=tDTS DTG[7:5]=10x =&gt; DT=(64+DTG[5:0])xtdtg with Tdtg=2xtDTS DTG[7:5]=110 =&gt; DT=(32+DTG[4:0])xtdtg with Tdtg=8xtDTS DTG[7:5]=111 =&gt; DT=(32+DTG[4:0])xtdtg with Tdtg=16xtDTS Example if TDTS=125ns (8MHz), dead-time possible values are: 0 to 15875 ns by 125 ns steps, 16 s to 31750 ns by 250 ns steps, 32 s to 63 s by 1 s steps, 64 s to 126 s by 2 s steps Note: This bit-field can not be modified as long as LOCK level 1, 2 or 3 has been programmed (LOCK bits in TIMx_BDTR register).
    typedef bit_field_t<8, 0x3> BDTR_LOCK; // Lock configuration These bits offer a write protection against software errors. Note: The LOCK bits can be written only once after the reset. Once the TIMx_BDTR register has been written, their content is frozen until the next reset.
    static constexpr uint32_t BDTR_OSSI = 0x400; // Off-state selection for Idle mode This bit is used when MOE=0 on channels configured as outputs. See OC/OCN enable description for more details (enable register (TIM15_CCER) on page818). Note: This bit can not be modified as soon as the LOCK level 2 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t BDTR_OSSR = 0x800; // Off-state selection for Run mode This bit is used when MOE=1 on channels that have a complementary output which are configured as outputs. OSSR is not implemented if no complementary output is implemented in the timer. See OC/OCN enable description for more details (enable register (TIM15_CCER) on page818). Note: This bit can not be modified as soon as the LOCK level 2 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t BDTR_BKE = 0x1000; // Break enable 1; Break inputs (BRK and CCS clock failure event) enabled This bit cannot be modified when LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register). Note: Any write operation to this bit takes a delay of 1 APB clock cycle to become effective.
    static constexpr uint32_t BDTR_BKP = 0x2000; // Break polarity Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register). Any write operation to this bit takes a delay of 1 APB clock cycle to become effective.
    static constexpr uint32_t BDTR_AOE = 0x4000; // Automatic output enable Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t BDTR_MOE = 0x8000; // Main output enable This bit is cleared asynchronously by hardware as soon as the break input is active. It is set by software or automatically depending on the AOE bit. It is acting only on the channels which are configured in output. See OC/OCN enable description for more details (enable register (TIM15_CCER) on page818).
    typedef bit_field_t<16, 0xf> BDTR_BKF; // Break filter This bit-field defines the frequency used to sample the BRK input signal and the length of the digital filter applied to BRK. The digital filter is made of an event counter in which N events are needed to validate a transition on the output: Note: This bit cannot be modified when LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t BDTR_BKDSRM = 0x4000000; // Break Disarm This bit is cleared by hardware when no break source is active. The BKDSRM bit must be set by software to release the bidirectional output control (open-drain output in Hi-Z state) and then be polled it until it is reset by hardware, indicating that the fault condition has disappeared. Note: Any write operation to this bit takes a delay of 1 APB clock cycle to become effective.
    static constexpr uint32_t BDTR_BKBID = 0x10000000; // Break Bidirectional In the bidirectional mode (BKBID bit set to 1), the break input is configured both in input mode and in open drain output mode. Any active break event asserts a low logic level on the Break input to indicate an internal break event to external devices. Note: This bit cannot be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register). Note: Any write operation to this bit takes a delay of 1 APB clock cycle to become effective.

    static constexpr uint32_t DCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> DCR_DBA; // DMA base address This 5-bit field defines the base-address for DMA transfers (when read/write access are done through the TIMx_DMAR address). DBA is defined as an offset starting from the address of the TIMx_CR1 register. Example: ...
    typedef bit_field_t<8, 0x1f> DCR_DBL; // DMA burst length This 5-bit field defines the length of DMA transfers (the timer recognizes a burst transfer when a read or a write access is done to the TIMx_DMAR address). ...

    static constexpr uint32_t DMAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DMAR_DMAB; // DMA register for burst accesses
};

// TIM15: General purpose timers

struct stm32g0b0_tim15_t
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
    volatile uint32_t DCR; // DMA control register
    volatile uint32_t DMAR; // DMA address for full transfer
    reserved_t<0x4> _0x50;
    volatile uint32_t AF1; // TIM15 alternate register 1
    reserved_t<0x1> _0x64;
    volatile uint32_t TISEL; // input selection register

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR1_CEN = 0x1; // Counter enable Note: External clock and gated mode can work only if the CEN bit has been previously set by software. However trigger mode can set the CEN bit automatically by hardware.
    static constexpr uint32_t CR1_UDIS = 0x2; // Update disable This bit is set and cleared by software to enable/disable UEV event generation. Counter overflow/underflow Setting the UG bit Update generation through the slave mode controller Buffered registers are then loaded with their preload values.
    static constexpr uint32_t CR1_URS = 0x4; // Update request source This bit is set and cleared by software to select the UEV event sources. Counter overflow/underflow Setting the UG bit Update generation through the slave mode controller
    static constexpr uint32_t CR1_OPM = 0x8; // One-pulse mode
    static constexpr uint32_t CR1_ARPE = 0x80; // Auto-reload preload enable
    typedef bit_field_t<8, 0x3> CR1_CKD; // Clock division This bitfield indicates the division ratio between the timer clock (CK_INT) frequency and the dead-time and sampling clock (tDTS) used by the dead-time generators and the digital filters (TIx)
    static constexpr uint32_t CR1_UIFREMAP = 0x800; // UIF status bit remapping

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR2_CCPC = 0x1; // Capture/compare preloaded control Note: This bit acts only on channels that have a complementary output.
    static constexpr uint32_t CR2_CCUS = 0x4; // Capture/compare control update selection Note: This bit acts only on channels that have a complementary output.
    static constexpr uint32_t CR2_CCDS = 0x8; // Capture/compare DMA selection
    typedef bit_field_t<4, 0x7> CR2_MMS; // Master mode selection These bits allow to select the information to be sent in master mode to slave timers for synchronization (TRGO). The combination is as follows:
    static constexpr uint32_t CR2_TI1S = 0x80; // TI1 selection
    static constexpr uint32_t CR2_OIS1 = 0x100; // Output Idle state 1 (OC1 output) Note: This bit can not be modified as long as LOCK level 1, 2 or 3 has been programmed (LOCK bits in TIM15_BDTR register).
    static constexpr uint32_t CR2_OIS1N = 0x200; // Output Idle state 1 (OC1N output) Note: This bit can not be modified as long as LOCK level 1, 2 or 3 has been programmed (LOCK bits in TIM15_BDTR register).
    static constexpr uint32_t CR2_OIS2 = 0x400; // Output idle state 2 (OC2 output) Note: This bit cannot be modified as long as LOCK level 1, 2 or 3 has been programmed (LOCK bits in the TIM15_BDTR register).

    static constexpr uint32_t SMCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> SMCR_SMS1; // Slave mode selection When external signals are selected the active edge of the trigger signal (TRGI) is linked to the polarity selected on the external input (see Input Control register and Control Register description. Other codes: reserved. Note: The gated mode must not be used if TI1F_ED is selected as the trigger input (TS=00100). Indeed, TI1F_ED outputs 1 pulse for each transition on TI1F, whereas the gated mode checks the level of the trigger signal. Note: The clock of the slave peripherals (timer, ADC, ...) receiving the TRGO or the TRGO2 signals must be enabled prior to receive events from the master timer, and the clock frequency (prescaler) must not be changed on-the-fly while triggers are received from the master timer.
    typedef bit_field_t<4, 0x7> SMCR_TS1; // Trigger selection This bit field selects the trigger input to be used to synchronize the counter. Other: Reserved See for more details on ITRx meaning for each Timer. Note: These bits must be changed only when they are not used (e.g. when SMS=000) to avoid wrong edge detections at the transition.
    static constexpr uint32_t SMCR_MSM = 0x80; // Master/slave mode
    static constexpr uint32_t SMCR_SMS2 = 0x10000; // Slave mode selection When external signals are selected the active edge of the trigger signal (TRGI) is linked to the polarity selected on the external input (see Input Control register and Control Register description. Other codes: reserved. Note: The gated mode must not be used if TI1F_ED is selected as the trigger input (TS=00100). Indeed, TI1F_ED outputs 1 pulse for each transition on TI1F, whereas the gated mode checks the level of the trigger signal. Note: The clock of the slave peripherals (timer, ADC, ...) receiving the TRGO or the TRGO2 signals must be enabled prior to receive events from the master timer, and the clock frequency (prescaler) must not be changed on-the-fly while triggers are received from the master timer.
    typedef bit_field_t<20, 0x3> SMCR_TS2; // Trigger selection This bit field selects the trigger input to be used to synchronize the counter. Other: Reserved See for more details on ITRx meaning for each Timer. Note: These bits must be changed only when they are not used (e.g. when SMS=000) to avoid wrong edge detections at the transition.

    static constexpr uint32_t DIER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DIER_UIE = 0x1; // Update interrupt enable
    static constexpr uint32_t DIER_CC1IE = 0x2; // Capture/Compare 1 interrupt enable
    static constexpr uint32_t DIER_CC2IE = 0x4; // Capture/Compare 2 interrupt enable
    static constexpr uint32_t DIER_COMIE = 0x20; // COM interrupt enable
    static constexpr uint32_t DIER_TIE = 0x40; // Trigger interrupt enable
    static constexpr uint32_t DIER_BIE = 0x80; // Break interrupt enable
    static constexpr uint32_t DIER_UDE = 0x100; // Update DMA request enable
    static constexpr uint32_t DIER_CC1DE = 0x200; // Capture/Compare 1 DMA request enable
    static constexpr uint32_t DIER_CC2DE = 0x400; // Capture/Compare 2 DMA request enable
    static constexpr uint32_t DIER_COMDE = 0x2000; // COM DMA request enable
    static constexpr uint32_t DIER_TDE = 0x4000; // Trigger DMA request enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_UIF = 0x1; // Update interrupt flag This bit is set by hardware on an update event. It is cleared by software. At overflow regarding the repetition counter value (update if repetition counter = 0) and if the UDIS=0 in the TIMx_CR1 register. When CNT is reinitialized by software using the UG bit in TIMx_EGR register, if URS=0 and UDIS=0 in the TIMx_CR1 register. When CNT is reinitialized by a trigger event (refer to control register (TIM15_SMCR)), if URS=0 and UDIS=0 in the TIMx_CR1 register.
    static constexpr uint32_t SR_CC1IF = 0x2; // Capture/Compare 1 interrupt flag This flag is set by hardware. It is cleared by software (input capture or output compare mode) or by reading the TIMx_CCR1 register (input capture mode only). If channel CC1 is configured as output: this flag is set when the content of the counter TIMx_CNT matches the content of the TIMx_CCR1 register. When the content of TIMx_CCR1 is greater than the content of TIMx_ARR, the CC1IF bit goes high on the counter overflow (in up-counting and up/down-counting modes) or underflow (in down-counting mode). There are 3 possible options for flag setting in center-aligned mode, refer to the CMS bits in the TIMx_CR1 register for the full description. If channel CC1 is configured as input: this bit is set when counter value has been captured in TIMx_CCR1 register (an edge has been detected on IC1, as per the edge sensitivity defined with the CC1P and CC1NP bits setting, in TIMx_CCER).
    static constexpr uint32_t SR_CC2IF = 0x4; // Capture/Compare 2 interrupt flag refer to CC1IF description
    static constexpr uint32_t SR_COMIF = 0x20; // COM interrupt flag This flag is set by hardware on a COM event (once the capture/compare control bits CCxE, CCxNE, OCxM have been updated). It is cleared by software.
    static constexpr uint32_t SR_TIF = 0x40; // Trigger interrupt flag This flag is set by hardware on the TRG trigger event (active edge detected on TRGI input when the slave mode controller is enabled in all modes but gated mode, both edges in case gated mode is selected). It is set when the counter starts or stops when gated mode is selected. It is cleared by software.
    static constexpr uint32_t SR_BIF = 0x80; // Break interrupt flag This flag is set by hardware as soon as the break input goes active. It can be cleared by software if the break input is not active.
    static constexpr uint32_t SR_CC1OF = 0x200; // Capture/Compare 1 overcapture flag This flag is set by hardware only when the corresponding channel is configured in input capture mode. It is cleared by software by writing it to &#39;0.
    static constexpr uint32_t SR_CC2OF = 0x400; // Capture/Compare 2 overcapture flag Refer to CC1OF description

    static constexpr uint32_t EGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t EGR_UG = 0x1; // Update generation This bit can be set by software, it is automatically cleared by hardware.
    static constexpr uint32_t EGR_CC1G = 0x2; // Capture/Compare 1 generation This bit is set by software in order to generate an event, it is automatically cleared by hardware. If channel CC1 is configured as output: CC1IF flag is set, Corresponding interrupt or DMA request is sent if enabled. If channel CC1 is configured as input: The current value of the counter is captured in TIMx_CCR1 register. The CC1IF flag is set, the corresponding interrupt or DMA request is sent if enabled. The CC1OF flag is set if the CC1IF flag was already high.
    static constexpr uint32_t EGR_CC2G = 0x4; // Capture/Compare 2 generation Refer to CC1G description
    static constexpr uint32_t EGR_COMG = 0x20; // Capture/Compare control update generation This bit can be set by software, it is automatically cleared by hardware. Note: This bit acts only on channels that have a complementary output.
    static constexpr uint32_t EGR_TG = 0x40; // Trigger generation This bit is set by software in order to generate an event, it is automatically cleared by hardware.
    static constexpr uint32_t EGR_BG = 0x80; // Break generation This bit is set by software in order to generate an event, it is automatically cleared by hardware.

    static constexpr uint32_t CCMR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> CCMR1_CC1S; // Capture/Compare 1 selection This bit-field defines the direction of the channel (input/output) as well as the used input. Note: CC1S bits are writable only when the channel is OFF (CC1E = &#39;0 in TIMx_CCER).
    typedef bit_field_t<8, 0x3> CCMR1_CC2S; // Capture/Compare 2 selection This bit-field defines the direction of the channel (input/output) as well as the used input. Note: CC2S bits are writable only when the channel is OFF (CC2E = &#39;0 in TIMx_CCER).
    typedef bit_field_t<4, 0xf> CCMR1_IC1F; // Input capture 1 filter This bit-field defines the frequency used to sample TI1 input and the length of the digital filter applied to TI1. The digital filter is made of an event counter in which N consecutive events are needed to validate a transition on the output:
    typedef bit_field_t<2, 0x3> CCMR1_IC1PSC; // Input capture 1 prescaler This bit-field defines the ratio of the prescaler acting on CC1 input (IC1). The prescaler is reset as soon as CC1E=0 (TIMx_CCER register).
    typedef bit_field_t<12, 0xf> CCMR1_IC2F; // Input capture 2 filter
    typedef bit_field_t<10, 0x3> CCMR1_IC2PSC; // Input capture 2 prescaler
    static constexpr uint32_t CCMR1_OC1FE = 0x4; // Output Compare 1 fast enable This bit decreases the latency between a trigger event and a transition on the timer output. It must be used in one-pulse mode (OPM bit set in TIMx_CR1 register), to have the output pulse starting as soon as possible after the starting trigger.
    typedef bit_field_t<4, 0x7> CCMR1_OC1M1; // Output Compare 1 mode These bits define the behavior of the output reference signal OC1REF from which OC1 and OC1N are derived. OC1REF is active high whereas OC1 and OC1N active level depends on CC1P and CC1NP bits. Note: These bits can not be modified as long as LOCK level 3 has been programmed (LOCK bits in TIMx_BDTR register) and CC1S=00 (the channel is configured in output). In PWM mode, the OCREF level changes only when the result of the comparison changes or when the output compare mode switches from frozen mode to PWM mode. On channels that have a complementary output, this bit field is preloaded. If the CCPC bit is set in the TIMx_CR2 register then the OC1M active bits take the new value from the preloaded bits only when a COM event is generated. The OC1M[3] bit is not contiguous, located in bit 16.
    static constexpr uint32_t CCMR1_OC1M2 = 0x10000; // Output Compare 1 mode These bits define the behavior of the output reference signal OC1REF from which OC1 and OC1N are derived. OC1REF is active high whereas OC1 and OC1N active level depends on CC1P and CC1NP bits. Note: These bits can not be modified as long as LOCK level 3 has been programmed (LOCK bits in TIMx_BDTR register) and CC1S=00 (the channel is configured in output). In PWM mode, the OCREF level changes only when the result of the comparison changes or when the output compare mode switches from frozen mode to PWM mode. On channels that have a complementary output, this bit field is preloaded. If the CCPC bit is set in the TIMx_CR2 register then the OC1M active bits take the new value from the preloaded bits only when a COM event is generated. The OC1M[3] bit is not contiguous, located in bit 16.
    static constexpr uint32_t CCMR1_OC1PE = 0x8; // Output Compare 1 preload enable Note: These bits can not be modified as long as LOCK level 3 has been programmed (LOCK bits in TIMx_BDTR register) and CC1S=00 (the channel is configured in output). The PWM mode can be used without validating the preload register only in one pulse mode (OPM bit set in TIMx_CR1 register). Else the behavior is not guaranteed.
    static constexpr uint32_t CCMR1_OC2FE = 0x400; // Output Compare 2 fast enable
    typedef bit_field_t<12, 0x7> CCMR1_OC2M1; // Output Compare 2 mode
    static constexpr uint32_t CCMR1_OC2M2 = 0x1000000; // Output Compare 2 mode
    static constexpr uint32_t CCMR1_OC2PE = 0x800; // Output Compare 2 preload enable


    static constexpr uint32_t CCER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCER_CC1E = 0x1; // Capture/Compare 1 output enable When CC1 channel is configured as output, the OC1 level depends on MOE, OSSI, OSSR, OIS1, OIS1N and CC1NE bits, regardless of the CC1E bits state. Refer to for details.
    static constexpr uint32_t CCER_CC1P = 0x2; // Capture/Compare 1 output polarity When CC1 channel is configured as input, both CC1NP/CC1P bits select the active polarity of TI1FP1 and TI2FP1 for trigger or capture operations. CC1NP=0, CC1P=0: non-inverted/rising edge. The circuit is sensitive to TIxFP1 rising edge (capture or trigger operations in reset, external clock or trigger mode), TIxFP1 is not inverted (trigger operation in gated mode or encoder mode). CC1NP=0, CC1P=1: inverted/falling edge. The circuit is sensitive to TIxFP1 falling edge (capture or trigger operations in reset, external clock or trigger mode), TIxFP1 is inverted (trigger operation in gated mode or encoder mode). CC1NP=1, CC1P=1: non-inverted/both edges/ The circuit is sensitive to both TIxFP1 rising and falling edges (capture or trigger operations in reset, external clock or trigger mode), TIxFP1is not inverted (trigger operation in gated mode). This configuration must not be used in encoder mode. CC1NP=1, CC1P=0: this configuration is reserved, it must not be used. Note: This bit is not writable as soon as LOCK level 2 or 3 has been programmed (LOCK bits in TIMx_BDTR register). On channels that have a complementary output, this bit is preloaded. If the CCPC bit is set in the TIMx_CR2 register then the CC1P active bit takes the new value from the preloaded bit only when a Commutation event is generated.
    static constexpr uint32_t CCER_CC1NE = 0x4; // Capture/Compare 1 complementary output enable
    static constexpr uint32_t CCER_CC1NP = 0x8; // Capture/Compare 1 complementary output polarity CC1 channel configured as output: CC1 channel configured as input: This bit is used in conjunction with CC1P to define the polarity of TI1FP1 and TI2FP1. Refer to CC1P description. Note: This bit is not writable as soon as LOCK level 2 or 3 has been programmed (LOCK bits in TIMx_BDTR register) and CC1S=00 (the channel is configured in output). On channels that have a complementary output, this bit is preloaded. If the CCPC bit is set in the TIMx_CR2 register then the CC1NP active bit takes the new value from the preloaded bit only when a Commutation event is generated.
    static constexpr uint32_t CCER_CC2E = 0x10; // Capture/Compare 2 output enable Refer to CC1E description
    static constexpr uint32_t CCER_CC2P = 0x20; // Capture/Compare 2 output polarity Refer to CC1P description
    static constexpr uint32_t CCER_CC2NP = 0x80; // Capture/Compare 2 complementary output polarity Refer to CC1NP description

    static constexpr uint32_t CNT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNT_CNT; // counter value
    static constexpr uint32_t CNT_UIFCPY = 0x80000000; // UIF Copy

    static constexpr uint32_t PSC_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> PSC_PSC; // Prescaler value

    static constexpr uint32_t ARR_RESET_VALUE = 0xffff; // Reset value
    typedef bit_field_t<0, 0xffff> ARR_ARR; // Auto-reload value

    static constexpr uint32_t RCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RCR_REP; // Repetition counter value

    static constexpr uint32_t CCR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR1_CCR1; // Capture/Compare 1 value

    static constexpr uint32_t CCR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR2_CCR2; // Capture/Compare 2 value


    static constexpr uint32_t BDTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> BDTR_DTG; // Dead-time generator setup This bit-field defines the duration of the dead-time inserted between the complementary outputs. DT correspond to this duration. DTG[7:5]=0xx =&gt; DT=DTG[7:0]x tdtg with tdtg=tDTS DTG[7:5]=10x =&gt; DT=(64+DTG[5:0])xtdtg with Tdtg=2xtDTS DTG[7:5]=110 =&gt; DT=(32+DTG[4:0])xtdtg with Tdtg=8xtDTS DTG[7:5]=111 =&gt; DT=(32+DTG[4:0])xtdtg with Tdtg=16xtDTS Example if TDTS=125ns (8MHz), dead-time possible values are: 0 to 15875 ns by 125 ns steps, 16 s to 31750 ns by 250 ns steps, 32 s to 63 s by 1 s steps, 64 s to 126 s by 2 s steps Note: This bit-field can not be modified as long as LOCK level 1, 2 or 3 has been programmed (LOCK bits in TIMx_BDTR register).
    typedef bit_field_t<8, 0x3> BDTR_LOCK; // Lock configuration These bits offer a write protection against software errors. Note: The LOCK bits can be written only once after the reset. Once the TIMx_BDTR register has been written, their content is frozen until the next reset.
    static constexpr uint32_t BDTR_OSSI = 0x400; // Off-state selection for Idle mode This bit is used when MOE=0 on channels configured as outputs. See OC/OCN enable description for more details (enable register (TIM15_CCER) on page818). Note: This bit can not be modified as soon as the LOCK level 2 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t BDTR_OSSR = 0x800; // Off-state selection for Run mode This bit is used when MOE=1 on channels that have a complementary output which are configured as outputs. OSSR is not implemented if no complementary output is implemented in the timer. See OC/OCN enable description for more details (enable register (TIM15_CCER) on page818). Note: This bit can not be modified as soon as the LOCK level 2 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t BDTR_BKE = 0x1000; // Break enable 1; Break inputs (BRK and CCS clock failure event) enabled This bit cannot be modified when LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register). Note: Any write operation to this bit takes a delay of 1 APB clock cycle to become effective.
    static constexpr uint32_t BDTR_BKP = 0x2000; // Break polarity Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register). Any write operation to this bit takes a delay of 1 APB clock cycle to become effective.
    static constexpr uint32_t BDTR_AOE = 0x4000; // Automatic output enable Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t BDTR_MOE = 0x8000; // Main output enable This bit is cleared asynchronously by hardware as soon as the break input is active. It is set by software or automatically depending on the AOE bit. It is acting only on the channels which are configured in output. See OC/OCN enable description for more details (enable register (TIM15_CCER) on page818).
    typedef bit_field_t<16, 0xf> BDTR_BKF; // Break filter This bit-field defines the frequency used to sample the BRK input signal and the length of the digital filter applied to BRK. The digital filter is made of an event counter in which N events are needed to validate a transition on the output: Note: This bit cannot be modified when LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t BDTR_BKDSRM = 0x4000000; // Break Disarm This bit is cleared by hardware when no break source is active. The BKDSRM bit must be set by software to release the bidirectional output control (open-drain output in Hi-Z state) and then be polled it until it is reset by hardware, indicating that the fault condition has disappeared. Note: Any write operation to this bit takes a delay of 1 APB clock cycle to become effective.
    static constexpr uint32_t BDTR_BKBID = 0x10000000; // Break Bidirectional In the bidirectional mode (BKBID bit set to 1), the break input is configured both in input mode and in open drain output mode. Any active break event asserts a low logic level on the Break input to indicate an internal break event to external devices. Note: This bit cannot be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register). Note: Any write operation to this bit takes a delay of 1 APB clock cycle to become effective.

    static constexpr uint32_t DCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> DCR_DBA; // DMA base address This 5-bit field defines the base-address for DMA transfers (when read/write access are done through the TIMx_DMAR address). DBA is defined as an offset starting from the address of the TIMx_CR1 register. Example: ...
    typedef bit_field_t<8, 0x1f> DCR_DBL; // DMA burst length This 5-bit field defines the length of DMA transfers (the timer recognizes a burst transfer when a read or a write access is done to the TIMx_DMAR address). ...

    static constexpr uint32_t DMAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DMAR_DMAB; // DMA register for burst accesses


    static constexpr uint32_t AF1_RESET_VALUE = 0x1; // Reset value
    static constexpr uint32_t AF1_BKINE = 0x1; // BRK BKIN input enable This bit enables the BKIN alternate function input for the timers BRK input. BKIN input is &#39;ORed with the other BRK sources. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t AF1_BKCMP1E = 0x2; // BRK COMP1 enable This bit enables the COMP1 for the timers BRK input. COMP1 output is &#39;ORed with the other BRK sources. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t AF1_BKCMP2E = 0x4; // BRK COMP2 enable This bit enables the COMP2 for the timers BRK input. COMP2 output is &#39;ORed with the other BRK sources. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t AF1_BKINP = 0x200; // BRK BKIN input polarity This bit selects the BKIN alternate function input sensitivity. It must be programmed together with the BKP polarity bit. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t AF1_BKCMP1P = 0x400; // BRK COMP1 input polarity This bit selects the COMP1 input sensitivity. It must be programmed together with the BKP polarity bit. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t AF1_BKCMP2P = 0x800; // BRK COMP2 input polarity This bit selects the COMP2 input sensitivity. It must be programmed together with the BKP polarity bit. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).


    static constexpr uint32_t TISEL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> TISEL_TI1SEL; // selects TI1[0] to TI1[15] input Others: Reserved
    typedef bit_field_t<8, 0xf> TISEL_TI2SEL; // selects TI2[0] to TI2[15] input Others: Reserved
};

// TIM16: General purpose timers

struct stm32g030_tim16_t
{
    volatile uint32_t CR1; // control register 1
    volatile uint32_t CR2; // control register 2
    reserved_t<0x1> _0x8;
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
    reserved_t<0x3> _0x38;
    volatile uint32_t BDTR; // break and dead-time register
    volatile uint32_t DCR; // DMA control register
    volatile uint32_t DMAR; // DMA address for full transfer
    reserved_t<0x4> _0x50;
    volatile uint32_t AF1; // TIM17 option register 1
    reserved_t<0x1> _0x64;
    volatile uint32_t TISEL; // input selection register

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR1_CEN = 0x1; // Counter enable
    static constexpr uint32_t CR1_UDIS = 0x2; // Update disable
    static constexpr uint32_t CR1_URS = 0x4; // Update request source
    static constexpr uint32_t CR1_OPM = 0x8; // One-pulse mode
    static constexpr uint32_t CR1_ARPE = 0x80; // Auto-reload preload enable
    typedef bit_field_t<8, 0x3> CR1_CKD; // Clock division
    static constexpr uint32_t CR1_UIFREMAP = 0x800; // UIF status bit remapping

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
    static constexpr uint32_t SR_CC1OF = 0x200; // Capture/Compare 1 overcapture flag
    static constexpr uint32_t SR_BIF = 0x80; // Break interrupt flag
    static constexpr uint32_t SR_COMIF = 0x20; // COM interrupt flag
    static constexpr uint32_t SR_CC1IF = 0x2; // Capture/compare 1 interrupt flag
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
    typedef bit_field_t<0, 0xffff> CNT_CNT; // counter value
    static constexpr uint32_t CNT_UIFCPY = 0x80000000; // UIF Copy

    static constexpr uint32_t PSC_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> PSC_PSC; // Prescaler value

    static constexpr uint32_t ARR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> ARR_ARR; // Auto-reload value

    static constexpr uint32_t RCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RCR_REP; // Repetition counter value

    static constexpr uint32_t CCR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR1_CCR1; // Capture/Compare 1 value


    static constexpr uint32_t BDTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> BDTR_DTG; // Dead-time generator setup
    typedef bit_field_t<8, 0x3> BDTR_LOCK; // Lock configuration
    static constexpr uint32_t BDTR_OSSI = 0x400; // Off-state selection for Idle mode
    static constexpr uint32_t BDTR_OSSR = 0x800; // Off-state selection for Run mode
    static constexpr uint32_t BDTR_BKE = 0x1000; // Break enable
    static constexpr uint32_t BDTR_BKP = 0x2000; // Break polarity
    static constexpr uint32_t BDTR_AOE = 0x4000; // Automatic output enable
    static constexpr uint32_t BDTR_MOE = 0x8000; // Main output enable
    typedef bit_field_t<16, 0xf> BDTR_BKF; // Break filter
    static constexpr uint32_t BDTR_BKDSRM = 0x4000000; // Break Disarm
    static constexpr uint32_t BDTR_BKBID = 0x10000000; // Break Bidirectional

    static constexpr uint32_t DCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0x1f> DCR_DBL; // DMA burst length
    typedef bit_field_t<0, 0x1f> DCR_DBA; // DMA base address

    static constexpr uint32_t DMAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DMAR_DMAB; // DMA register for burst accesses


    static constexpr uint32_t AF1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AF1_BKINE = 0x1; // BRK BKIN input enable
    static constexpr uint32_t AF1_BKCMP1E = 0x2; // BRK COMP1 enable
    static constexpr uint32_t AF1_BKCMP2E = 0x4; // BRK COMP2 enable
    static constexpr uint32_t AF1_BKDFBK1E = 0x100; // BRK DFSDM_BREAK1 enable
    static constexpr uint32_t AF1_BKINP = 0x200; // BRK BKIN input polarity
    static constexpr uint32_t AF1_BKCMP1P = 0x400; // BRK COMP1 input polarity
    static constexpr uint32_t AF1_BKCMP2P = 0x800; // BRK COMP2 input polarit


    static constexpr uint32_t TISEL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> TISEL_TI1SEL; // selects input
};

// TIM16: General purpose timers

struct stm32g050_tim16_t
{
    volatile uint32_t CR1; // control register 1
    volatile uint32_t CR2; // control register 2
    reserved_t<0x1> _0x8;
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
    reserved_t<0x3> _0x38;
    volatile uint32_t BDTR; // break and dead-time register
    volatile uint32_t DCR; // DMA control register
    volatile uint32_t DMAR; // DMA address for full transfer
    reserved_t<0x4> _0x50;
    volatile uint32_t AF1; // TIM17 option register 1
    reserved_t<0x1> _0x64;
    volatile uint32_t TISEL; // input selection register

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR1_CEN = 0x1; // Counter enable Note: External clock and gated mode can work only if the CEN bit has been previously set by software. However trigger mode can set the CEN bit automatically by hardware.
    static constexpr uint32_t CR1_UDIS = 0x2; // Update disable This bit is set and cleared by software to enable/disable UEV event generation. Counter overflow/underflow Setting the UG bit Update generation through the slave mode controller Buffered registers are then loaded with their preload values.
    static constexpr uint32_t CR1_URS = 0x4; // Update request source This bit is set and cleared by software to select the UEV event sources. Counter overflow/underflow Setting the UG bit Update generation through the slave mode controller
    static constexpr uint32_t CR1_OPM = 0x8; // One pulse mode
    static constexpr uint32_t CR1_ARPE = 0x80; // Auto-reload preload enable
    typedef bit_field_t<8, 0x3> CR1_CKD; // Clock division This bit-field indicates the division ratio between the timer clock (CK_INT) frequency and the dead-time and sampling clock (tDTS)used by the dead-time generators and the digital filters (TIx),
    static constexpr uint32_t CR1_UIFREMAP = 0x800; // UIF status bit remapping

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR2_CCPC = 0x1; // Capture/compare preloaded control Note: This bit acts only on channels that have a complementary output.
    static constexpr uint32_t CR2_CCUS = 0x4; // Capture/compare control update selection Note: This bit acts only on channels that have a complementary output.
    static constexpr uint32_t CR2_CCDS = 0x8; // Capture/compare DMA selection
    static constexpr uint32_t CR2_OIS1 = 0x100; // Output Idle state 1 (OC1 output) Note: This bit can not be modified as long as LOCK level 1, 2 or 3 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t CR2_OIS1N = 0x200; // Output Idle state 1 (OC1N output) Note: This bit can not be modified as long as LOCK level 1, 2 or 3 has been programmed (LOCK bits in TIMx_BDTR register).


    static constexpr uint32_t DIER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DIER_UIE = 0x1; // Update interrupt enable
    static constexpr uint32_t DIER_CC1IE = 0x2; // Capture/Compare 1 interrupt enable
    static constexpr uint32_t DIER_COMIE = 0x20; // COM interrupt enable
    static constexpr uint32_t DIER_BIE = 0x80; // Break interrupt enable
    static constexpr uint32_t DIER_UDE = 0x100; // Update DMA request enable
    static constexpr uint32_t DIER_CC1DE = 0x200; // Capture/Compare 1 DMA request enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_UIF = 0x1; // Update interrupt flag This bit is set by hardware on an update event. It is cleared by software. At overflow regarding the repetition counter value (update if repetition counter = 0) and if the UDIS=0 in the TIMx_CR1 register. When CNT is reinitialized by software using the UG bit in TIMx_EGR register, if URS=0 and UDIS=0 in the TIMx_CR1 register.
    static constexpr uint32_t SR_CC1IF = 0x2; // Capture/Compare 1 interrupt flag This flag is set by hardware. It is cleared by software (input capture or output compare mode) or by reading the TIMx_CCR1 register (input capture mode only). If channel CC1 is configured as output: this flag is set when the content of the counter TIMx_CNT matches the content of the TIMx_CCR1 register. When the content of TIMx_CCR1 is greater than the content of TIMx_ARR, the CC1IF bit goes high on the counter overflow (in up-counting and up/down-counting modes) or underflow (in down-counting mode). There are 3 possible options for flag setting in center-aligned mode, refer to the CMS bits in the TIMx_CR1 register for the full description. If channel CC1 is configured as input: this bit is set when counter value has been captured in TIMx_CCR1 register (an edge has been detected on IC1, as per the edge sensitivity defined with the CC1P and CC1NP bits setting, in TIMx_CCER).
    static constexpr uint32_t SR_COMIF = 0x20; // COM interrupt flag This flag is set by hardware on a COM event (once the capture/compare control bits CCxE, CCxNE, OCxM have been updated). It is cleared by software.
    static constexpr uint32_t SR_BIF = 0x80; // Break interrupt flag This flag is set by hardware as soon as the break input goes active. It can be cleared by software if the break input is not active.
    static constexpr uint32_t SR_CC1OF = 0x200; // Capture/Compare 1 overcapture flag This flag is set by hardware only when the corresponding channel is configured in input capture mode. It is cleared by software by writing it to &#39;0.

    static constexpr uint32_t EGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t EGR_UG = 0x1; // Update generation This bit can be set by software, it is automatically cleared by hardware.
    static constexpr uint32_t EGR_CC1G = 0x2; // Capture/Compare 1 generation This bit is set by software in order to generate an event, it is automatically cleared by hardware. If channel CC1 is configured as output: CC1IF flag is set, Corresponding interrupt or DMA request is sent if enabled. If channel CC1 is configured as input: The current value of the counter is captured in TIMx_CCR1 register. The CC1IF flag is set, the corresponding interrupt or DMA request is sent if enabled. The CC1OF flag is set if the CC1IF flag was already high.
    static constexpr uint32_t EGR_COMG = 0x20; // Capture/Compare control update generation This bit can be set by software, it is automatically cleared by hardware. Note: This bit acts only on channels that have a complementary output.
    static constexpr uint32_t EGR_BG = 0x80; // Break generation This bit is set by software in order to generate an event, it is automatically cleared by hardware.

    static constexpr uint32_t CCMR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> CCMR1_CC1S; // Capture/Compare 1 selection This bit-field defines the direction of the channel (input/output) as well as the used input. Others: Reserved Note: CC1S bits are writable only when the channel is OFF (CC1E = &#39;0 in TIMx_CCER).
    typedef bit_field_t<4, 0xf> CCMR1_IC1F; // Input capture 1 filter This bit-field defines the frequency used to sample TI1 input and the length of the digital filter applied to TI1. The digital filter is made of an event counter in which N consecutive events are needed to validate a transition on the output:
    typedef bit_field_t<2, 0x3> CCMR1_IC1PSC; // Input capture 1 prescaler This bit-field defines the ratio of the prescaler acting on CC1 input (IC1). The prescaler is reset as soon as CC1E=0 (TIMx_CCER register).
    static constexpr uint32_t CCMR1_OC1FE = 0x4; // Output Compare 1 fast enable This bit decreases the latency between a trigger event and a transition on the timer output. It must be used in one-pulse mode (OPM bit set in TIMx_CR1 register), to have the output pulse starting as soon as possible after the starting trigger.
    typedef bit_field_t<4, 0x7> CCMR1_OC1M1; // Output Compare 1 mode These bits define the behavior of the output reference signal OC1REF from which OC1 and OC1N are derived. OC1REF is active high whereas OC1 and OC1N active level depends on CC1P and CC1NP bits. All other values: Reserved Note: These bits can not be modified as long as LOCK level 3 has been programmed (LOCK bits in TIMx_BDTR register) and CC1S=00 (the channel is configured in output). In PWM mode 1 or 2, the OCREF level changes only when the result of the comparison changes or when the output compare mode switches from frozen mode to PWM mode. The OC1M[3] bit is not contiguous, located in bit 16.
    static constexpr uint32_t CCMR1_OC1M2 = 0x10000; // Output Compare 1 mode These bits define the behavior of the output reference signal OC1REF from which OC1 and OC1N are derived. OC1REF is active high whereas OC1 and OC1N active level depends on CC1P and CC1NP bits. All other values: Reserved Note: These bits can not be modified as long as LOCK level 3 has been programmed (LOCK bits in TIMx_BDTR register) and CC1S=00 (the channel is configured in output). In PWM mode 1 or 2, the OCREF level changes only when the result of the comparison changes or when the output compare mode switches from frozen mode to PWM mode. The OC1M[3] bit is not contiguous, located in bit 16.
    static constexpr uint32_t CCMR1_OC1PE = 0x8; // Output Compare 1 preload enable Note: These bits can not be modified as long as LOCK level 3 has been programmed (LOCK bits in TIMx_BDTR register) and CC1S=00 (the channel is configured in output). The PWM mode can be used without validating the preload register only in one pulse mode (OPM bit set in TIMx_CR1 register). Else the behavior is not guaranteed.


    static constexpr uint32_t CCER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCER_CC1E = 0x1; // Capture/Compare 1 output enable When CC1 channel is configured as output, the OC1 level depends on MOE, OSSI, OSSR, OIS1, OIS1N and CC1NE bits, regardless of the CC1E bits state. Refer to for details.
    static constexpr uint32_t CCER_CC1P = 0x2; // Capture/Compare 1 output polarity When CC1 channel is configured as input, both CC1NP/CC1P bits select the active polarity of TI1FP1 and TI2FP1 for trigger or capture operations. CC1NP=0, CC1P=0: non-inverted/rising edge. The circuit is sensitive to TIxFP1 rising edge (capture or trigger operations in reset, external clock or trigger mode), TIxFP1 is not inverted (trigger operation in gated mode or encoder mode). CC1NP=0, CC1P=1: inverted/falling edge. The circuit is sensitive to TIxFP1 falling edge (capture or trigger operations in reset, external clock or trigger mode), TIxFP1 is inverted (trigger operation in gated mode or encoder mode). CC1NP=1, CC1P=1: non-inverted/both edges/ The circuit is sensitive to both TIxFP1 rising and falling edges (capture or trigger operations in reset, external clock or trigger mode), TIxFP1is not inverted (trigger operation in gated mode). This configuration must not be used in encoder mode. CC1NP=1, CC1P=0: this configuration is reserved, it must not be used. Note: This bit is not writable as soon as LOCK level 2 or 3 has been programmed (LOCK bits in TIMx_BDTR register). On channels that have a complementary output, this bit is preloaded. If the CCPC bit is set in the TIMx_CR2 register then the CC1P active bit takes the new value from the preloaded bit only when a Commutation event is generated.
    static constexpr uint32_t CCER_CC1NE = 0x4; // Capture/Compare 1 complementary output enable
    static constexpr uint32_t CCER_CC1NP = 0x8; // Capture/Compare 1 complementary output polarity CC1 channel configured as output: CC1 channel configured as input: This bit is used in conjunction with CC1P to define the polarity of TI1FP1 and TI2FP1. Refer to the description of CC1P. Note: This bit is not writable as soon as LOCK level 2 or 3 has been programmed (LOCK bits in TIMx_BDTR register) and CC1S=00 (the channel is configured in output). On channels that have a complementary output, this bit is preloaded. If the CCPC bit is set in the TIMx_CR2 register then the CC1NP active bit takes the new value from the preloaded bit only when a commutation event is generated.

    static constexpr uint32_t CNT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNT_CNT; // counter value
    static constexpr uint32_t CNT_UIFCPY = 0x80000000; // UIF Copy

    static constexpr uint32_t PSC_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> PSC_PSC; // Prescaler value

    static constexpr uint32_t ARR_RESET_VALUE = 0xffff; // Reset value
    typedef bit_field_t<0, 0xffff> ARR_ARR; // Auto-reload value

    static constexpr uint32_t RCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RCR_REP; // Repetition counter value

    static constexpr uint32_t CCR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR1_CCR1; // Capture/Compare 1 value


    static constexpr uint32_t BDTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> BDTR_DTG; // Dead-time generator setup This bit-field defines the duration of the dead-time inserted between the complementary outputs. DT correspond to this duration. DTG[7:5]=0xx =&gt; DT=DTG[7:0]x tdtg with tdtg=tDTS DTG[7:5]=10x =&gt; DT=(64+DTG[5:0])xtdtg with Tdtg=2xtDTS DTG[7:5]=110 =&gt; DT=(32+DTG[4:0])xtdtg with Tdtg=8xtDTS DTG[7:5]=111 =&gt; DT=(32+DTG[4:0])xtdtg with Tdtg=16xtDTS Example if TDTS=125ns (8MHz), dead-time possible values are: 0 to 15875 ns by 125 ns steps, 16 s to 31750 ns by 250 ns steps, 32 s to 63 s by 1 s steps, 64 s to 126 s by 2 s steps Note: This bit-field can not be modified as long as LOCK level 1, 2 or 3 has been programmed (LOCK bits in TIMx_BDTR register).
    typedef bit_field_t<8, 0x3> BDTR_LOCK; // Lock configuration These bits offer a write protection against software errors. Note: The LOCK bits can be written only once after the reset. Once the TIMx_BDTR register has been written, their content is frozen until the next reset.
    static constexpr uint32_t BDTR_OSSI = 0x400; // Off-state selection for Idle mode This bit is used when MOE=0 on channels configured as outputs. See OC/OCN enable description for more details (enable register (TIM16_CCER)(TIMx_CCER)(x = 16 to 17) on page846). Note: This bit can not be modified as soon as the LOCK level 2 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t BDTR_OSSR = 0x800; // Off-state selection for Run mode This bit is used when MOE=1 on channels that have a complementary output which are configured as outputs. OSSR is not implemented if no complementary output is implemented in the timer. See OC/OCN enable description for more details (enable register (TIM16_CCER)(TIMx_CCER)(x = 16 to 17) on page846). Note: This bit can not be modified as soon as the LOCK level 2 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t BDTR_BKE = 0x1000; // Break enable 1; Break inputs (BRK and CCS clock failure event) enabled Note: This bit cannot be modified when LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register). Any write operation to this bit takes a delay of 1 APB clock cycle to become effective.
    static constexpr uint32_t BDTR_BKP = 0x2000; // Break polarity Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register). Any write operation to this bit takes a delay of 1 APB clock cycle to become effective.
    static constexpr uint32_t BDTR_AOE = 0x4000; // Automatic output enable Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t BDTR_MOE = 0x8000; // Main output enable This bit is cleared asynchronously by hardware as soon as the break input is active. It is set by software or automatically depending on the AOE bit. It is acting only on the channels which are configured in output. enable register (TIM16_CCER)(TIMx_CCER)(x = 16 to 17) on page846).
    typedef bit_field_t<16, 0xf> BDTR_BKF; // Break filter This bit-field defines the frequency used to sample BRK input and the length of the digital filter applied to BRK. The digital filter is made of an event counter in which N events are needed to validate a transition on the output: This bit cannot be modified when LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t BDTR_BKDSRM = 0x4000000; // Break Disarm This bit is cleared by hardware when no break source is active. The BKDSRM bit must be set by software to release the bidirectional output control (open-drain output in Hi-Z state) and then be polled it until it is reset by hardware, indicating that the fault condition has disappeared. Note: Any write operation to this bit takes a delay of 1 APB clock cycle to become effective.
    static constexpr uint32_t BDTR_BKBID = 0x10000000; // Break Bidirectional In the bidirectional mode (BKBID bit set to 1), the break input is configured both in input mode and in open drain output mode. Any active break event asserts a low logic level on the Break input to indicate an internal break event to external devices. Note: This bit cannot be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register). Note: Any write operation to this bit takes a delay of 1 APB clock cycle to become effective.

    static constexpr uint32_t DCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> DCR_DBA; // DMA base address This 5-bit field defines the base-address for DMA transfers (when read/write access are done through the TIMx_DMAR address). DBA is defined as an offset starting from the address of the TIMx_CR1 register. Example: ... Example: Let us consider the following transfer: DBL = 7 transfers and DBA = TIMx_CR1. In this case the transfer is done to/from 7 registers starting from the TIMx_CR1 address.
    typedef bit_field_t<8, 0x1f> DCR_DBL; // DMA burst length This 5-bit field defines the length of DMA transfers (the timer recognizes a burst transfer when a read or a write access is done to the TIMx_DMAR address), i.e. the number of transfers. Transfers can be in half-words or in bytes (see example below). ...

    static constexpr uint32_t DMAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DMAR_DMAB; // DMA register for burst accesses


    static constexpr uint32_t AF1_RESET_VALUE = 0x1; // Reset value
    static constexpr uint32_t AF1_BKINE = 0x1; // BRK BKIN input enable This bit enables the BKIN alternate function input for the timers BRK input. BKIN input is &#39;ORed with the other BRK sources. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t AF1_BKINP = 0x200; // BRK BKIN input polarity This bit selects the BKIN alternate function input sensitivity. It must be programmed together with the BKP polarity bit. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).


    static constexpr uint32_t TISEL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> TISEL_TI1SEL; // selects TI1[0] to TI1[15] input Others: Reserved
};

// TIM16: General purpose timers

struct stm32g051_tim16_t
{
    volatile uint32_t CR1; // control register 1
    volatile uint32_t CR2; // control register 2
    reserved_t<0x1> _0x8;
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
    reserved_t<0x3> _0x38;
    volatile uint32_t BDTR; // break and dead-time register
    volatile uint32_t DCR; // DMA control register
    volatile uint32_t DMAR; // DMA address for full transfer
    reserved_t<0x4> _0x50;
    volatile uint32_t AF1; // TIM17 option register 1
    reserved_t<0x1> _0x64;
    volatile uint32_t TISEL; // input selection register

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR1_CEN = 0x1; // Counter enable Note: External clock and gated mode can work only if the CEN bit has been previously set by software. However trigger mode can set the CEN bit automatically by hardware.
    static constexpr uint32_t CR1_UDIS = 0x2; // Update disable This bit is set and cleared by software to enable/disable UEV event generation. Counter overflow/underflow Setting the UG bit Update generation through the slave mode controller Buffered registers are then loaded with their preload values.
    static constexpr uint32_t CR1_URS = 0x4; // Update request source This bit is set and cleared by software to select the UEV event sources. Counter overflow/underflow Setting the UG bit Update generation through the slave mode controller
    static constexpr uint32_t CR1_OPM = 0x8; // One pulse mode
    static constexpr uint32_t CR1_ARPE = 0x80; // Auto-reload preload enable
    typedef bit_field_t<8, 0x3> CR1_CKD; // Clock division This bit-field indicates the division ratio between the timer clock (CK_INT) frequency and the dead-time and sampling clock (tDTS)used by the dead-time generators and the digital filters (TIx),
    static constexpr uint32_t CR1_UIFREMAP = 0x800; // UIF status bit remapping

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR2_CCPC = 0x1; // Capture/compare preloaded control Note: This bit acts only on channels that have a complementary output.
    static constexpr uint32_t CR2_CCUS = 0x4; // Capture/compare control update selection Note: This bit acts only on channels that have a complementary output.
    static constexpr uint32_t CR2_CCDS = 0x8; // Capture/compare DMA selection
    static constexpr uint32_t CR2_OIS1 = 0x100; // Output Idle state 1 (OC1 output) Note: This bit can not be modified as long as LOCK level 1, 2 or 3 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t CR2_OIS1N = 0x200; // Output Idle state 1 (OC1N output) Note: This bit can not be modified as long as LOCK level 1, 2 or 3 has been programmed (LOCK bits in TIMx_BDTR register).


    static constexpr uint32_t DIER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DIER_UIE = 0x1; // Update interrupt enable
    static constexpr uint32_t DIER_CC1IE = 0x2; // Capture/Compare 1 interrupt enable
    static constexpr uint32_t DIER_COMIE = 0x20; // COM interrupt enable
    static constexpr uint32_t DIER_BIE = 0x80; // Break interrupt enable
    static constexpr uint32_t DIER_UDE = 0x100; // Update DMA request enable
    static constexpr uint32_t DIER_CC1DE = 0x200; // Capture/Compare 1 DMA request enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_UIF = 0x1; // Update interrupt flag This bit is set by hardware on an update event. It is cleared by software. At overflow regarding the repetition counter value (update if repetition counter = 0) and if the UDIS=0 in the TIMx_CR1 register. When CNT is reinitialized by software using the UG bit in TIMx_EGR register, if URS=0 and UDIS=0 in the TIMx_CR1 register.
    static constexpr uint32_t SR_CC1IF = 0x2; // Capture/Compare 1 interrupt flag This flag is set by hardware. It is cleared by software (input capture or output compare mode) or by reading the TIMx_CCR1 register (input capture mode only). If channel CC1 is configured as output: this flag is set when the content of the counter TIMx_CNT matches the content of the TIMx_CCR1 register. When the content of TIMx_CCR1 is greater than the content of TIMx_ARR, the CC1IF bit goes high on the counter overflow (in up-counting and up/down-counting modes) or underflow (in down-counting mode). There are 3 possible options for flag setting in center-aligned mode, refer to the CMS bits in the TIMx_CR1 register for the full description. If channel CC1 is configured as input: this bit is set when counter value has been captured in TIMx_CCR1 register (an edge has been detected on IC1, as per the edge sensitivity defined with the CC1P and CC1NP bits setting, in TIMx_CCER).
    static constexpr uint32_t SR_COMIF = 0x20; // COM interrupt flag This flag is set by hardware on a COM event (once the capture/compare control bits CCxE, CCxNE, OCxM have been updated). It is cleared by software.
    static constexpr uint32_t SR_BIF = 0x80; // Break interrupt flag This flag is set by hardware as soon as the break input goes active. It can be cleared by software if the break input is not active.
    static constexpr uint32_t SR_CC1OF = 0x200; // Capture/Compare 1 overcapture flag This flag is set by hardware only when the corresponding channel is configured in input capture mode. It is cleared by software by writing it to &#39;0.

    static constexpr uint32_t EGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t EGR_UG = 0x1; // Update generation This bit can be set by software, it is automatically cleared by hardware.
    static constexpr uint32_t EGR_CC1G = 0x2; // Capture/Compare 1 generation This bit is set by software in order to generate an event, it is automatically cleared by hardware. If channel CC1 is configured as output: CC1IF flag is set, Corresponding interrupt or DMA request is sent if enabled. If channel CC1 is configured as input: The current value of the counter is captured in TIMx_CCR1 register. The CC1IF flag is set, the corresponding interrupt or DMA request is sent if enabled. The CC1OF flag is set if the CC1IF flag was already high.
    static constexpr uint32_t EGR_COMG = 0x20; // Capture/Compare control update generation This bit can be set by software, it is automatically cleared by hardware. Note: This bit acts only on channels that have a complementary output.
    static constexpr uint32_t EGR_BG = 0x80; // Break generation This bit is set by software in order to generate an event, it is automatically cleared by hardware.

    static constexpr uint32_t CCMR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> CCMR1_CC1S; // Capture/Compare 1 selection This bit-field defines the direction of the channel (input/output) as well as the used input. Others: Reserved Note: CC1S bits are writable only when the channel is OFF (CC1E = &#39;0 in TIMx_CCER).
    typedef bit_field_t<4, 0xf> CCMR1_IC1F; // Input capture 1 filter This bit-field defines the frequency used to sample TI1 input and the length of the digital filter applied to TI1. The digital filter is made of an event counter in which N consecutive events are needed to validate a transition on the output:
    typedef bit_field_t<2, 0x3> CCMR1_IC1PSC; // Input capture 1 prescaler This bit-field defines the ratio of the prescaler acting on CC1 input (IC1). The prescaler is reset as soon as CC1E=0 (TIMx_CCER register).
    static constexpr uint32_t CCMR1_OC1FE = 0x4; // Output Compare 1 fast enable This bit decreases the latency between a trigger event and a transition on the timer output. It must be used in one-pulse mode (OPM bit set in TIMx_CR1 register), to have the output pulse starting as soon as possible after the starting trigger.
    typedef bit_field_t<4, 0x7> CCMR1_OC1M1; // Output Compare 1 mode These bits define the behavior of the output reference signal OC1REF from which OC1 and OC1N are derived. OC1REF is active high whereas OC1 and OC1N active level depends on CC1P and CC1NP bits. All other values: Reserved Note: These bits can not be modified as long as LOCK level 3 has been programmed (LOCK bits in TIMx_BDTR register) and CC1S=00 (the channel is configured in output). In PWM mode 1 or 2, the OCREF level changes only when the result of the comparison changes or when the output compare mode switches from frozen mode to PWM mode. The OC1M[3] bit is not contiguous, located in bit 16.
    static constexpr uint32_t CCMR1_OC1M2 = 0x10000; // Output Compare 1 mode These bits define the behavior of the output reference signal OC1REF from which OC1 and OC1N are derived. OC1REF is active high whereas OC1 and OC1N active level depends on CC1P and CC1NP bits. All other values: Reserved Note: These bits can not be modified as long as LOCK level 3 has been programmed (LOCK bits in TIMx_BDTR register) and CC1S=00 (the channel is configured in output). In PWM mode 1 or 2, the OCREF level changes only when the result of the comparison changes or when the output compare mode switches from frozen mode to PWM mode. The OC1M[3] bit is not contiguous, located in bit 16.
    static constexpr uint32_t CCMR1_OC1PE = 0x8; // Output Compare 1 preload enable Note: These bits can not be modified as long as LOCK level 3 has been programmed (LOCK bits in TIMx_BDTR register) and CC1S=00 (the channel is configured in output). The PWM mode can be used without validating the preload register only in one pulse mode (OPM bit set in TIMx_CR1 register). Else the behavior is not guaranteed.


    static constexpr uint32_t CCER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCER_CC1E = 0x1; // Capture/Compare 1 output enable When CC1 channel is configured as output, the OC1 level depends on MOE, OSSI, OSSR, OIS1, OIS1N and CC1NE bits, regardless of the CC1E bits state. Refer to for details.
    static constexpr uint32_t CCER_CC1P = 0x2; // Capture/Compare 1 output polarity When CC1 channel is configured as input, both CC1NP/CC1P bits select the active polarity of TI1FP1 and TI2FP1 for trigger or capture operations. CC1NP=0, CC1P=0: non-inverted/rising edge. The circuit is sensitive to TIxFP1 rising edge (capture or trigger operations in reset, external clock or trigger mode), TIxFP1 is not inverted (trigger operation in gated mode or encoder mode). CC1NP=0, CC1P=1: inverted/falling edge. The circuit is sensitive to TIxFP1 falling edge (capture or trigger operations in reset, external clock or trigger mode), TIxFP1 is inverted (trigger operation in gated mode or encoder mode). CC1NP=1, CC1P=1: non-inverted/both edges/ The circuit is sensitive to both TIxFP1 rising and falling edges (capture or trigger operations in reset, external clock or trigger mode), TIxFP1is not inverted (trigger operation in gated mode). This configuration must not be used in encoder mode. CC1NP=1, CC1P=0: this configuration is reserved, it must not be used. Note: This bit is not writable as soon as LOCK level 2 or 3 has been programmed (LOCK bits in TIMx_BDTR register). On channels that have a complementary output, this bit is preloaded. If the CCPC bit is set in the TIMx_CR2 register then the CC1P active bit takes the new value from the preloaded bit only when a Commutation event is generated.
    static constexpr uint32_t CCER_CC1NE = 0x4; // Capture/Compare 1 complementary output enable
    static constexpr uint32_t CCER_CC1NP = 0x8; // Capture/Compare 1 complementary output polarity CC1 channel configured as output: CC1 channel configured as input: This bit is used in conjunction with CC1P to define the polarity of TI1FP1 and TI2FP1. Refer to the description of CC1P. Note: This bit is not writable as soon as LOCK level 2 or 3 has been programmed (LOCK bits in TIMx_BDTR register) and CC1S=00 (the channel is configured in output). On channels that have a complementary output, this bit is preloaded. If the CCPC bit is set in the TIMx_CR2 register then the CC1NP active bit takes the new value from the preloaded bit only when a commutation event is generated.

    static constexpr uint32_t CNT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNT_CNT; // counter value
    static constexpr uint32_t CNT_UIFCPY = 0x80000000; // UIF Copy

    static constexpr uint32_t PSC_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> PSC_PSC; // Prescaler value

    static constexpr uint32_t ARR_RESET_VALUE = 0xffff; // Reset value
    typedef bit_field_t<0, 0xffff> ARR_ARR; // Auto-reload value

    static constexpr uint32_t RCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RCR_REP; // Repetition counter value

    static constexpr uint32_t CCR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR1_CCR1; // Capture/Compare 1 value


    static constexpr uint32_t BDTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> BDTR_DTG; // Dead-time generator setup This bit-field defines the duration of the dead-time inserted between the complementary outputs. DT correspond to this duration. DTG[7:5]=0xx =&gt; DT=DTG[7:0]x tdtg with tdtg=tDTS DTG[7:5]=10x =&gt; DT=(64+DTG[5:0])xtdtg with Tdtg=2xtDTS DTG[7:5]=110 =&gt; DT=(32+DTG[4:0])xtdtg with Tdtg=8xtDTS DTG[7:5]=111 =&gt; DT=(32+DTG[4:0])xtdtg with Tdtg=16xtDTS Example if TDTS=125ns (8MHz), dead-time possible values are: 0 to 15875 ns by 125 ns steps, 16 s to 31750 ns by 250 ns steps, 32 s to 63 s by 1 s steps, 64 s to 126 s by 2 s steps Note: This bit-field can not be modified as long as LOCK level 1, 2 or 3 has been programmed (LOCK bits in TIMx_BDTR register).
    typedef bit_field_t<8, 0x3> BDTR_LOCK; // Lock configuration These bits offer a write protection against software errors. Note: The LOCK bits can be written only once after the reset. Once the TIMx_BDTR register has been written, their content is frozen until the next reset.
    static constexpr uint32_t BDTR_OSSI = 0x400; // Off-state selection for Idle mode This bit is used when MOE=0 on channels configured as outputs. See OC/OCN enable description for more details (enable register (TIM16_CCER)(TIMx_CCER)(x = 16 to 17) on page846). Note: This bit can not be modified as soon as the LOCK level 2 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t BDTR_OSSR = 0x800; // Off-state selection for Run mode This bit is used when MOE=1 on channels that have a complementary output which are configured as outputs. OSSR is not implemented if no complementary output is implemented in the timer. See OC/OCN enable description for more details (enable register (TIM16_CCER)(TIMx_CCER)(x = 16 to 17) on page846). Note: This bit can not be modified as soon as the LOCK level 2 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t BDTR_BKE = 0x1000; // Break enable 1; Break inputs (BRK and CCS clock failure event) enabled Note: This bit cannot be modified when LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register). Any write operation to this bit takes a delay of 1 APB clock cycle to become effective.
    static constexpr uint32_t BDTR_BKP = 0x2000; // Break polarity Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register). Any write operation to this bit takes a delay of 1 APB clock cycle to become effective.
    static constexpr uint32_t BDTR_AOE = 0x4000; // Automatic output enable Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t BDTR_MOE = 0x8000; // Main output enable This bit is cleared asynchronously by hardware as soon as the break input is active. It is set by software or automatically depending on the AOE bit. It is acting only on the channels which are configured in output. enable register (TIM16_CCER)(TIMx_CCER)(x = 16 to 17) on page846).
    typedef bit_field_t<16, 0xf> BDTR_BKF; // Break filter This bit-field defines the frequency used to sample BRK input and the length of the digital filter applied to BRK. The digital filter is made of an event counter in which N events are needed to validate a transition on the output: This bit cannot be modified when LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t BDTR_BKDSRM = 0x4000000; // Break Disarm This bit is cleared by hardware when no break source is active. The BKDSRM bit must be set by software to release the bidirectional output control (open-drain output in Hi-Z state) and then be polled it until it is reset by hardware, indicating that the fault condition has disappeared. Note: Any write operation to this bit takes a delay of 1 APB clock cycle to become effective.
    static constexpr uint32_t BDTR_BKBID = 0x10000000; // Break Bidirectional In the bidirectional mode (BKBID bit set to 1), the break input is configured both in input mode and in open drain output mode. Any active break event asserts a low logic level on the Break input to indicate an internal break event to external devices. Note: This bit cannot be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register). Note: Any write operation to this bit takes a delay of 1 APB clock cycle to become effective.

    static constexpr uint32_t DCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> DCR_DBA; // DMA base address This 5-bit field defines the base-address for DMA transfers (when read/write access are done through the TIMx_DMAR address). DBA is defined as an offset starting from the address of the TIMx_CR1 register. Example: ... Example: Let us consider the following transfer: DBL = 7 transfers and DBA = TIMx_CR1. In this case the transfer is done to/from 7 registers starting from the TIMx_CR1 address.
    typedef bit_field_t<8, 0x1f> DCR_DBL; // DMA burst length This 5-bit field defines the length of DMA transfers (the timer recognizes a burst transfer when a read or a write access is done to the TIMx_DMAR address), i.e. the number of transfers. Transfers can be in half-words or in bytes (see example below). ...

    static constexpr uint32_t DMAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DMAR_DMAB; // DMA register for burst accesses


    static constexpr uint32_t AF1_RESET_VALUE = 0x1; // Reset value
    static constexpr uint32_t AF1_BKINE = 0x1; // BRK BKIN input enable This bit enables the BKIN alternate function input for the timers BRK input. BKIN input is &#39;ORed with the other BRK sources. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t AF1_BKCMP1E = 0x2; // BRK COMP1 enable This bit enables the COMP1 for the timers BRK input. COMP1 output is &#39;ORed with the other BRK sources. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t AF1_BKCMP2E = 0x4; // BRK COMP2 enable This bit enables the COMP2 for the timers BRK input. COMP2 output is &#39;ORed with the other BRK sources. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t AF1_BKINP = 0x200; // BRK BKIN input polarity This bit selects the BKIN alternate function input sensitivity. It must be programmed together with the BKP polarity bit. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t AF1_BKCMP1P = 0x400; // BRK COMP1 input polarity This bit selects the COMP1 input sensitivity. It must be programmed together with the BKP polarity bit. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).
    static constexpr uint32_t AF1_BKCMP2P = 0x800; // BRK COMP2 input polarity This bit selects the COMP2 input sensitivity. It must be programmed together with the BKP polarity bit. Note: This bit can not be modified as long as LOCK level 1 has been programmed (LOCK bits in TIMx_BDTR register).


    static constexpr uint32_t TISEL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> TISEL_TI1SEL; // selects TI1[0] to TI1[15] input Others: Reserved
};

// TIM16: General purpose timers

struct stm32g071_tim16_t
{
    volatile uint32_t CR1; // control register 1
    volatile uint32_t CR2; // control register 2
    reserved_t<0x1> _0x8;
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
    reserved_t<0x3> _0x38;
    volatile uint32_t BDTR; // break and dead-time register
    volatile uint32_t DCR; // DMA control register
    volatile uint32_t DMAR; // DMA address for full transfer
    reserved_t<0x4> _0x50;
    volatile uint32_t AF1; // TIM17 option register 1
    reserved_t<0x1> _0x64;
    volatile uint32_t TISEL; // input selection register

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR1_CEN = 0x1; // Counter enable
    static constexpr uint32_t CR1_UDIS = 0x2; // Update disable
    static constexpr uint32_t CR1_URS = 0x4; // Update request source
    static constexpr uint32_t CR1_OPM = 0x8; // One-pulse mode
    static constexpr uint32_t CR1_ARPE = 0x80; // Auto-reload preload enable
    typedef bit_field_t<8, 0x3> CR1_CKD; // Clock division
    static constexpr uint32_t CR1_UIFREMAP = 0x800; // UIF status bit remapping

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
    static constexpr uint32_t SR_CC1OF = 0x200; // Capture/Compare 1 overcapture flag
    static constexpr uint32_t SR_BIF = 0x80; // Break interrupt flag
    static constexpr uint32_t SR_COMIF = 0x20; // COM interrupt flag
    static constexpr uint32_t SR_CC1IF = 0x2; // Capture/compare 1 interrupt flag
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
    typedef bit_field_t<0, 0xffff> CNT_CNT; // counter value
    static constexpr uint32_t CNT_UIFCPY = 0x80000000; // UIF Copy

    static constexpr uint32_t PSC_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> PSC_PSC; // Prescaler value

    static constexpr uint32_t ARR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> ARR_ARR; // Auto-reload value

    static constexpr uint32_t RCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RCR_REP; // Repetition counter value

    static constexpr uint32_t CCR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR1_CCR1; // Capture/Compare 1 value


    static constexpr uint32_t BDTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> BDTR_DTG; // Dead-time generator setup
    typedef bit_field_t<8, 0x3> BDTR_LOCK; // Lock configuration
    static constexpr uint32_t BDTR_OSSI = 0x400; // Off-state selection for Idle mode
    static constexpr uint32_t BDTR_OSSR = 0x800; // Off-state selection for Run mode
    static constexpr uint32_t BDTR_BKE = 0x1000; // Break enable
    static constexpr uint32_t BDTR_BKP = 0x2000; // Break polarity
    static constexpr uint32_t BDTR_AOE = 0x4000; // Automatic output enable
    static constexpr uint32_t BDTR_MOE = 0x8000; // Main output enable
    typedef bit_field_t<16, 0xf> BDTR_BKF; // Break filter
    static constexpr uint32_t BDTR_BKDSRM = 0x4000000; // Break Disarm
    static constexpr uint32_t BDTR_BKBID = 0x10000000; // Break Bidirectional

    static constexpr uint32_t DCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0x1f> DCR_DBL; // DMA burst length
    typedef bit_field_t<0, 0x1f> DCR_DBA; // DMA base address

    static constexpr uint32_t DMAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DMAR_DMAB; // DMA register for burst accesses


    static constexpr uint32_t AF1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AF1_BKINE = 0x1; // BRK BKIN input enable
    static constexpr uint32_t AF1_BKCMP1E = 0x2; // BRK COMP1 enable
    static constexpr uint32_t AF1_BKCMP2E = 0x4; // BRK COMP2 enable
    static constexpr uint32_t AF1_BKDFBK1E = 0x100; // BRK DFSDM_BREAK1 enable
    static constexpr uint32_t AF1_BKINP = 0x200; // BRK BKIN input polarity
    static constexpr uint32_t AF1_BKCMP1P = 0x400; // BRK COMP1 input polarity
    static constexpr uint32_t AF1_BKCMP2P = 0x800; // BRK COMP2 input polarit


    static constexpr uint32_t TISEL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> TISEL_TI1SEL; // selects input
    typedef bit_field_t<8, 0xf> TISEL_TI2SEL; // selects input
};

template<>
struct peripheral_t<STM32G030, TIM1>
{
    static constexpr periph_t P = TIM1;
    using T = stm32g030_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G031, TIM1>
{
    static constexpr periph_t P = TIM1;
    using T = stm32g030_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G041, TIM1>
{
    static constexpr periph_t P = TIM1;
    using T = stm32g030_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G050, TIM1>
{
    static constexpr periph_t P = TIM1;
    using T = stm32g050_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G051, TIM1>
{
    static constexpr periph_t P = TIM1;
    using T = stm32g051_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G061, TIM1>
{
    static constexpr periph_t P = TIM1;
    using T = stm32g051_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0B0, TIM1>
{
    static constexpr periph_t P = TIM1;
    using T = stm32g051_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0B1, TIM1>
{
    static constexpr periph_t P = TIM1;
    using T = stm32g051_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0C1, TIM1>
{
    static constexpr periph_t P = TIM1;
    using T = stm32g051_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G070, TIM1>
{
    static constexpr periph_t P = TIM1;
    using T = stm32g070_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G071, TIM1>
{
    static constexpr periph_t P = TIM1;
    using T = stm32g070_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G081, TIM1>
{
    static constexpr periph_t P = TIM1;
    using T = stm32g070_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G030, TIM2>
{
    static constexpr periph_t P = TIM2;
    using T = stm32g030_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G030, TIM3>
{
    static constexpr periph_t P = TIM3;
    using T = stm32g030_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G031, TIM2>
{
    static constexpr periph_t P = TIM2;
    using T = stm32g030_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G031, TIM3>
{
    static constexpr periph_t P = TIM3;
    using T = stm32g030_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G041, TIM2>
{
    static constexpr periph_t P = TIM2;
    using T = stm32g030_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G041, TIM3>
{
    static constexpr periph_t P = TIM3;
    using T = stm32g030_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G070, TIM2>
{
    static constexpr periph_t P = TIM2;
    using T = stm32g030_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G070, TIM3>
{
    static constexpr periph_t P = TIM3;
    using T = stm32g030_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G071, TIM2>
{
    static constexpr periph_t P = TIM2;
    using T = stm32g030_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G071, TIM3>
{
    static constexpr periph_t P = TIM3;
    using T = stm32g030_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G081, TIM2>
{
    static constexpr periph_t P = TIM2;
    using T = stm32g030_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G081, TIM3>
{
    static constexpr periph_t P = TIM3;
    using T = stm32g030_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G051, TIM2>
{
    static constexpr periph_t P = TIM2;
    using T = stm32g051_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G051, TIM3>
{
    static constexpr periph_t P = TIM3;
    using T = stm32g051_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G061, TIM2>
{
    static constexpr periph_t P = TIM2;
    using T = stm32g051_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G061, TIM3>
{
    static constexpr periph_t P = TIM3;
    using T = stm32g051_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0B0, TIM3>
{
    static constexpr periph_t P = TIM3;
    using T = stm32g051_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0B1, TIM2>
{
    static constexpr periph_t P = TIM2;
    using T = stm32g051_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0B1, TIM3>
{
    static constexpr periph_t P = TIM3;
    using T = stm32g051_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0B1, TIM4>
{
    static constexpr periph_t P = TIM4;
    using T = stm32g051_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0C1, TIM2>
{
    static constexpr periph_t P = TIM2;
    using T = stm32g051_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0C1, TIM3>
{
    static constexpr periph_t P = TIM3;
    using T = stm32g051_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0C1, TIM4>
{
    static constexpr periph_t P = TIM4;
    using T = stm32g051_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G050, TIM3>
{
    static constexpr periph_t P = TIM3;
    using T = stm32g050_tim3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G050, TIM6>
{
    static constexpr periph_t P = TIM6;
    using T = stm32g050_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G050, TIM7>
{
    static constexpr periph_t P = TIM7;
    using T = stm32g050_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G051, TIM6>
{
    static constexpr periph_t P = TIM6;
    using T = stm32g050_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G051, TIM7>
{
    static constexpr periph_t P = TIM7;
    using T = stm32g050_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G061, TIM6>
{
    static constexpr periph_t P = TIM6;
    using T = stm32g050_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G061, TIM7>
{
    static constexpr periph_t P = TIM7;
    using T = stm32g050_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0B0, TIM6>
{
    static constexpr periph_t P = TIM6;
    using T = stm32g050_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0B0, TIM7>
{
    static constexpr periph_t P = TIM7;
    using T = stm32g050_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0B1, TIM6>
{
    static constexpr periph_t P = TIM6;
    using T = stm32g050_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0B1, TIM7>
{
    static constexpr periph_t P = TIM7;
    using T = stm32g050_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0C1, TIM6>
{
    static constexpr periph_t P = TIM6;
    using T = stm32g050_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0C1, TIM7>
{
    static constexpr periph_t P = TIM7;
    using T = stm32g050_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G070, TIM6>
{
    static constexpr periph_t P = TIM6;
    using T = stm32g070_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G070, TIM7>
{
    static constexpr periph_t P = TIM7;
    using T = stm32g070_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G071, TIM6>
{
    static constexpr periph_t P = TIM6;
    using T = stm32g070_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G071, TIM7>
{
    static constexpr periph_t P = TIM7;
    using T = stm32g070_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G081, TIM6>
{
    static constexpr periph_t P = TIM6;
    using T = stm32g070_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G081, TIM7>
{
    static constexpr periph_t P = TIM7;
    using T = stm32g070_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G030, TIM14>
{
    static constexpr periph_t P = TIM14;
    using T = stm32g030_tim14_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G031, TIM14>
{
    static constexpr periph_t P = TIM14;
    using T = stm32g030_tim14_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G041, TIM14>
{
    static constexpr periph_t P = TIM14;
    using T = stm32g030_tim14_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G070, TIM14>
{
    static constexpr periph_t P = TIM14;
    using T = stm32g030_tim14_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G071, TIM14>
{
    static constexpr periph_t P = TIM14;
    using T = stm32g030_tim14_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G081, TIM14>
{
    static constexpr periph_t P = TIM14;
    using T = stm32g030_tim14_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G050, TIM14>
{
    static constexpr periph_t P = TIM14;
    using T = stm32g050_tim14_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G051, TIM14>
{
    static constexpr periph_t P = TIM14;
    using T = stm32g050_tim14_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G061, TIM14>
{
    static constexpr periph_t P = TIM14;
    using T = stm32g050_tim14_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0B0, TIM14>
{
    static constexpr periph_t P = TIM14;
    using T = stm32g050_tim14_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0B1, TIM14>
{
    static constexpr periph_t P = TIM14;
    using T = stm32g050_tim14_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0C1, TIM14>
{
    static constexpr periph_t P = TIM14;
    using T = stm32g050_tim14_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G050, TIM15>
{
    static constexpr periph_t P = TIM15;
    using T = stm32g050_tim15_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G051, TIM15>
{
    static constexpr periph_t P = TIM15;
    using T = stm32g051_tim15_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G061, TIM15>
{
    static constexpr periph_t P = TIM15;
    using T = stm32g051_tim15_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G070, TIM15>
{
    static constexpr periph_t P = TIM15;
    using T = stm32g070_tim15_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G071, TIM15>
{
    static constexpr periph_t P = TIM15;
    using T = stm32g070_tim15_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0B0, TIM15>
{
    static constexpr periph_t P = TIM15;
    using T = stm32g0b0_tim15_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0B1, TIM15>
{
    static constexpr periph_t P = TIM15;
    using T = stm32g0b0_tim15_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0C1, TIM15>
{
    static constexpr periph_t P = TIM15;
    using T = stm32g0b0_tim15_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G030, TIM16>
{
    static constexpr periph_t P = TIM16;
    using T = stm32g030_tim16_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G030, TIM17>
{
    static constexpr periph_t P = TIM17;
    using T = stm32g030_tim16_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G031, TIM16>
{
    static constexpr periph_t P = TIM16;
    using T = stm32g030_tim16_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G031, TIM17>
{
    static constexpr periph_t P = TIM17;
    using T = stm32g030_tim16_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G041, TIM16>
{
    static constexpr periph_t P = TIM16;
    using T = stm32g030_tim16_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G041, TIM17>
{
    static constexpr periph_t P = TIM17;
    using T = stm32g030_tim16_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G070, TIM16>
{
    static constexpr periph_t P = TIM16;
    using T = stm32g030_tim16_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G070, TIM17>
{
    static constexpr periph_t P = TIM17;
    using T = stm32g030_tim16_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G081, TIM15>
{
    static constexpr periph_t P = TIM15;
    using T = stm32g030_tim16_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G081, TIM16>
{
    static constexpr periph_t P = TIM16;
    using T = stm32g030_tim16_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G081, TIM17>
{
    static constexpr periph_t P = TIM17;
    using T = stm32g030_tim16_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G050, TIM16>
{
    static constexpr periph_t P = TIM16;
    using T = stm32g050_tim16_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G050, TIM17>
{
    static constexpr periph_t P = TIM17;
    using T = stm32g050_tim16_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G051, TIM16>
{
    static constexpr periph_t P = TIM16;
    using T = stm32g051_tim16_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G051, TIM17>
{
    static constexpr periph_t P = TIM17;
    using T = stm32g051_tim16_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G061, TIM16>
{
    static constexpr periph_t P = TIM16;
    using T = stm32g051_tim16_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G061, TIM17>
{
    static constexpr periph_t P = TIM17;
    using T = stm32g051_tim16_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0B0, TIM16>
{
    static constexpr periph_t P = TIM16;
    using T = stm32g051_tim16_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0B0, TIM17>
{
    static constexpr periph_t P = TIM17;
    using T = stm32g051_tim16_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0B1, TIM16>
{
    static constexpr periph_t P = TIM16;
    using T = stm32g051_tim16_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0B1, TIM17>
{
    static constexpr periph_t P = TIM17;
    using T = stm32g051_tim16_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0C1, TIM16>
{
    static constexpr periph_t P = TIM16;
    using T = stm32g051_tim16_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0C1, TIM17>
{
    static constexpr periph_t P = TIM17;
    using T = stm32g051_tim16_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G071, TIM16>
{
    static constexpr periph_t P = TIM16;
    using T = stm32g071_tim16_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G071, TIM17>
{
    static constexpr periph_t P = TIM17;
    using T = stm32g071_tim16_t;
    static T& V;
};

using tim1_t = peripheral_t<svd, TIM1>;
using tim14_t = peripheral_t<svd, TIM14>;
using tim15_t = peripheral_t<svd, TIM15>;
using tim16_t = peripheral_t<svd, TIM16>;
using tim17_t = peripheral_t<svd, TIM17>;
using tim2_t = peripheral_t<svd, TIM2>;
using tim3_t = peripheral_t<svd, TIM3>;
using tim4_t = peripheral_t<svd, TIM4>;
using tim6_t = peripheral_t<svd, TIM6>;
using tim7_t = peripheral_t<svd, TIM7>;

template<int INST> struct tim_traits {};

template<> struct tim_traits<1>
{
    using tim = tim1_t;
    static constexpr signal_t BK = TIM1_BK;
    static constexpr signal_t BK2 = TIM1_BK2;
    static constexpr signal_t CH1 = TIM1_CH1;
    static constexpr signal_t CH1N = TIM1_CH1N;
    static constexpr signal_t CH2 = TIM1_CH2;
    static constexpr signal_t CH2N = TIM1_CH2N;
    static constexpr signal_t CH3 = TIM1_CH3;
    static constexpr signal_t CH3N = TIM1_CH3N;
    static constexpr signal_t CH4 = TIM1_CH4;
    static constexpr signal_t ETR = TIM1_ETR;
    static constexpr clock_source_t CLOCK = APB2_TIMER;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB2ENR |= RCC::T::APB2ENR_TIM1EN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB2ENR &= ~RCC::T::APB2ENR_TIM1EN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.APB2SMENR |= RCC::T::APB2SMENR_TIM1SMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM1SMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB2RSTR |= RCC::T::APB2RSTR_TIM1RST;
    }
};

template<> struct tim_traits<14>
{
    using tim = tim14_t;
    static constexpr signal_t CH1 = TIM14_CH1;
    static constexpr clock_source_t CLOCK = APB2_TIMER;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB2ENR |= RCC::T::APB2ENR_TIM14EN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB2ENR &= ~RCC::T::APB2ENR_TIM14EN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.APB2SMENR |= RCC::T::APB2SMENR_TIM14SMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM14SMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB2RSTR |= RCC::T::APB2RSTR_TIM14RST;
    }
};

template<> struct tim_traits<15>
{
    using tim = tim15_t;
    static constexpr signal_t BK = TIM15_BK;
    static constexpr signal_t CH1 = TIM15_CH1;
    static constexpr signal_t CH1N = TIM15_CH1N;
    static constexpr signal_t CH2 = TIM15_CH2;
    static constexpr clock_source_t CLOCK = APB2_TIMER;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB2ENR |= RCC::T::APB2ENR_TIM15EN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB2ENR &= ~RCC::T::APB2ENR_TIM15EN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.APB2SMENR |= RCC::T::APB2SMENR_TIM15SMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM15SMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB2RSTR |= RCC::T::APB2RSTR_TIM15RST;
    }
};

template<> struct tim_traits<16>
{
    using tim = tim16_t;
    static constexpr signal_t BK = TIM16_BK;
    static constexpr signal_t CH1 = TIM16_CH1;
    static constexpr signal_t CH1N = TIM16_CH1N;
    static constexpr clock_source_t CLOCK = APB2_TIMER;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB2ENR |= RCC::T::APB2ENR_TIM16EN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB2ENR &= ~RCC::T::APB2ENR_TIM16EN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.APB2SMENR |= RCC::T::APB2SMENR_TIM16SMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM16SMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB2RSTR |= RCC::T::APB2RSTR_TIM16RST;
    }
};

template<> struct tim_traits<17>
{
    using tim = tim17_t;
    static constexpr signal_t BK = TIM17_BK;
    static constexpr signal_t CH1 = TIM17_CH1;
    static constexpr signal_t CH1N = TIM17_CH1N;
    static constexpr clock_source_t CLOCK = APB2_TIMER;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB2ENR |= RCC::T::APB2ENR_TIM17EN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB2ENR &= ~RCC::T::APB2ENR_TIM17EN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.APB2SMENR |= RCC::T::APB2SMENR_TIM17SMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM17SMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB2RSTR |= RCC::T::APB2RSTR_TIM17RST;
    }
};

template<> struct tim_traits<2>
{
    using tim = tim2_t;
    static constexpr signal_t CH1 = TIM2_CH1;
    static constexpr signal_t CH2 = TIM2_CH2;
    static constexpr signal_t CH3 = TIM2_CH3;
    static constexpr signal_t CH4 = TIM2_CH4;
    static constexpr signal_t ETR = TIM2_ETR;
    static constexpr clock_source_t CLOCK = APB1_TIMER;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR |= RCC::T::APB1ENR_TIM2EN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR &= ~RCC::T::APB1ENR_TIM2EN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.APB1SMENR |= RCC::T::APB1SMENR_TIM2SMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.APB1SMENR &= ~RCC::T::APB1SMENR_TIM2SMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR |= RCC::T::APB1RSTR_TIM2RST;
    }
};

template<> struct tim_traits<3>
{
    using tim = tim3_t;
    static constexpr signal_t CH1 = TIM3_CH1;
    static constexpr signal_t CH2 = TIM3_CH2;
    static constexpr signal_t CH3 = TIM3_CH3;
    static constexpr signal_t CH4 = TIM3_CH4;
    static constexpr signal_t ETR = TIM3_ETR;
    static constexpr clock_source_t CLOCK = APB1_TIMER;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR |= RCC::T::APB1ENR_TIM3EN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR &= ~RCC::T::APB1ENR_TIM3EN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.APB1SMENR |= RCC::T::APB1SMENR_TIM3SMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.APB1SMENR &= ~RCC::T::APB1SMENR_TIM3SMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR |= RCC::T::APB1RSTR_TIM3RST;
    }
};

template<> struct tim_traits<4>
{
    using tim = tim4_t;
    static constexpr signal_t CH1 = TIM4_CH1;
    static constexpr signal_t CH2 = TIM4_CH2;
    static constexpr signal_t CH3 = TIM4_CH3;
    static constexpr signal_t CH4 = TIM4_CH4;
    static constexpr signal_t ETR = TIM4_ETR;
    static constexpr clock_source_t CLOCK = APB1_TIMER;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR |= RCC::T::APB1ENR_TIM4EN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR &= ~RCC::T::APB1ENR_TIM4EN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.APB1SMENR |= RCC::T::APB1SMENR_TIM4SMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.APB1SMENR &= ~RCC::T::APB1SMENR_TIM4SMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR |= RCC::T::APB1RSTR_TIM4RST;
    }
};

template<> struct tim_traits<6>
{
    using tim = tim6_t;
    static constexpr clock_source_t CLOCK = APB1_TIMER;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR |= RCC::T::APB1ENR_TIM6EN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR &= ~RCC::T::APB1ENR_TIM6EN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.APB1SMENR |= RCC::T::APB1SMENR_TIM6SMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.APB1SMENR &= ~RCC::T::APB1SMENR_TIM6SMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR |= RCC::T::APB1RSTR_TIM6RST;
    }
};

template<> struct tim_traits<7>
{
    using tim = tim7_t;
    static constexpr clock_source_t CLOCK = APB1_TIMER;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR |= RCC::T::APB1ENR_TIM7EN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR &= ~RCC::T::APB1ENR_TIM7EN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.APB1SMENR |= RCC::T::APB1SMENR_TIM7SMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.APB1SMENR &= ~RCC::T::APB1SMENR_TIM7SMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR |= RCC::T::APB1RSTR_TIM7RST;
    }
};

template<> struct dma_request_t<TIM1, TIM_CH1>
{
    static constexpr unsigned ID = 20;
};

template<> struct dma_request_t<TIM1, TIM_CH2>
{
    static constexpr unsigned ID = 21;
};

template<> struct dma_request_t<TIM1, TIM_CH3>
{
    static constexpr unsigned ID = 22;
};

template<> struct dma_request_t<TIM1, TIM_CH4>
{
    static constexpr unsigned ID = 23;
};

template<> struct dma_request_t<TIM1, TIM_TRIG_COM>
{
    static constexpr unsigned ID = 24;
};

template<> struct dma_request_t<TIM1, TIM_UP>
{
    static constexpr unsigned ID = 25;
};

template<> struct dma_request_t<TIM15, TIM_CH1>
{
    static constexpr unsigned ID = 40;
};

template<> struct dma_request_t<TIM15, TIM_CH2>
{
    static constexpr unsigned ID = 41;
};

template<> struct dma_request_t<TIM15, TIM_TRIG_COM>
{
    static constexpr unsigned ID = 42;
};

template<> struct dma_request_t<TIM15, TIM_UP>
{
    static constexpr unsigned ID = 43;
};

template<> struct dma_request_t<TIM16, TIM_CH1>
{
    static constexpr unsigned ID = 44;
};

template<> struct dma_request_t<TIM16, TIM_TRIG_COM>
{
    static constexpr unsigned ID = 45;
};

template<> struct dma_request_t<TIM16, TIM_COM>
{
    static constexpr unsigned ID = 46;
};

template<> struct dma_request_t<TIM16, TIM_UP>
{
    static constexpr unsigned ID = 47;
};

template<> struct dma_request_t<TIM17, TIM_CH1>
{
    static constexpr unsigned ID = 48;
};

template<> struct dma_request_t<TIM17, TIM_COM>
{
    static constexpr unsigned ID = 49;
};

template<> struct dma_request_t<TIM17, TIM_TRIG_COM>
{
    static constexpr unsigned ID = 50;
};

template<> struct dma_request_t<TIM17, TIM_UP>
{
    static constexpr unsigned ID = 51;
};

template<> struct dma_request_t<TIM2, TIM_CH1>
{
    static constexpr unsigned ID = 26;
};

template<> struct dma_request_t<TIM2, TIM_CH2>
{
    static constexpr unsigned ID = 27;
};

template<> struct dma_request_t<TIM2, TIM_CH3>
{
    static constexpr unsigned ID = 28;
};

template<> struct dma_request_t<TIM2, TIM_CH4>
{
    static constexpr unsigned ID = 29;
};

template<> struct dma_request_t<TIM2, TIM_TRIG>
{
    static constexpr unsigned ID = 30;
};

template<> struct dma_request_t<TIM2, TIM_UP>
{
    static constexpr unsigned ID = 31;
};

template<> struct dma_request_t<TIM3, TIM_CH1>
{
    static constexpr unsigned ID = 32;
};

template<> struct dma_request_t<TIM3, TIM_CH2>
{
    static constexpr unsigned ID = 33;
};

template<> struct dma_request_t<TIM3, TIM_CH3>
{
    static constexpr unsigned ID = 34;
};

template<> struct dma_request_t<TIM3, TIM_CH4>
{
    static constexpr unsigned ID = 35;
};

template<> struct dma_request_t<TIM3, TIM_TRIG>
{
    static constexpr unsigned ID = 36;
};

template<> struct dma_request_t<TIM3, TIM_UP>
{
    static constexpr unsigned ID = 37;
};

template<> struct dma_request_t<TIM4, TIM_CH1>
{
    static constexpr unsigned ID = 70;
};

template<> struct dma_request_t<TIM4, TIM_CH2>
{
    static constexpr unsigned ID = 71;
};

template<> struct dma_request_t<TIM4, TIM_CH3>
{
    static constexpr unsigned ID = 72;
};

template<> struct dma_request_t<TIM4, TIM_CH4>
{
    static constexpr unsigned ID = 73;
};

template<> struct dma_request_t<TIM4, TIM_TRIG>
{
    static constexpr unsigned ID = 74;
};

template<> struct dma_request_t<TIM4, TIM_UP>
{
    static constexpr unsigned ID = 75;
};

template<> struct dma_request_t<TIM6, TIM_UP>
{
    static constexpr unsigned ID = 38;
};

template<> struct dma_request_t<TIM7, TIM_UP>
{
    static constexpr unsigned ID = 39;
};
