#pragma once

////
//
//      STM32WL GPTIM peripherals
//
///

// TIM2: General-purpose-timers

struct stm32wl5x_cm0p_tim2_t
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
    volatile uint32_t TIM2_OR1; // TIM2 option register
    reserved_t<0x3> _0x54;
    volatile uint32_t TIM2_AF1; // TIM2 alternate function option register 1
    reserved_t<0x1> _0x64;
    volatile uint32_t TIM2_TISEL; // TIM2 timer input selection register

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

    static constexpr uint32_t TIM2_OR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<2, 0x3> TIM2_OR1_TI4_RMP; // Input capture 4 remap
    static constexpr uint32_t TIM2_OR1_ETR_RMP = 0x2; // External trigger remap


    static constexpr uint32_t TIM2_AF1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<14, 0xf> TIM2_AF1_ETRSEL; // External trigger source selection


    static constexpr uint32_t TIM2_TISEL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> TIM2_TISEL_TI1SEL; // TI1SEL
    typedef bit_field_t<8, 0xf> TIM2_TISEL_TI2SEL; // TI2SEL
};

// TIM16: General-purpose timers

struct stm32wl5x_cm0p_tim16_t
{
    volatile uint32_t CR1; // TIM16/TIM17 control register 1
    volatile uint32_t CR2; // TIM16/TIM17 control register 2
    reserved_t<0x1> _0x8;
    volatile uint32_t DIER; // TIM16/TIM17 DMA/interrupt enable register
    volatile uint32_t SR; // TIM16/TIM17 status register
    volatile uint32_t EGR; // TIM16/TIM17 event generation register
    volatile uint32_t CCMR1; // TIM16/TIM17 capture/compare mode register 1
    reserved_t<0x1> _0x1c;
    volatile uint32_t CCER; // TIM16/TIM17 capture/compare enable register
    volatile uint32_t CNT; // TIM16/TIM17 counter
    volatile uint32_t PSC; // TIM16/TIM17 prescaler
    volatile uint32_t ARR; // TIM16/TIM17 auto-reload register
    volatile uint32_t RCR; // TIM16/TIM17 repetition counter register
    volatile uint32_t CCR1; // TIM16/TIM17 capture/compare register 1
    reserved_t<0x3> _0x38;
    volatile uint32_t BDTR; // TIM16/TIM17 break and dead-time register
    volatile uint32_t DCR; // TIM16/TIM17 DMA control register
    volatile uint32_t DMAR; // TIM16/TIM17 DMA address for full transfer
    volatile uint32_t TIM16_OR1; // TIM16 option register 1
    reserved_t<0x3> _0x54;
    volatile uint32_t TIM16_AF1; // TIM16 alternate function register 1
    reserved_t<0x1> _0x64;
    volatile uint32_t TIM16_TISEL; // TIM16 input selection register

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR1_UIFREMAP = 0x800; // UIF status bit remapping
    typedef bit_field_t<8, 0x3> CR1_CKD; // Clock division
    static constexpr uint32_t CR1_ARPE = 0x80; // Auto-reload preload enable
    static constexpr uint32_t CR1_OPM = 0x8; // One pulse mode
    static constexpr uint32_t CR1_URS = 0x4; // Update request source
    static constexpr uint32_t CR1_UDIS = 0x2; // Update disable
    static constexpr uint32_t CR1_CEN = 0x1; // Counter enable

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR2_OIS1N = 0x200; // OIS1N
    static constexpr uint32_t CR2_OIS1 = 0x100; // OIS1
    static constexpr uint32_t CR2_CCDS = 0x8; // CCDS
    static constexpr uint32_t CR2_CCUS = 0x4; // CCUS
    static constexpr uint32_t CR2_CCPC = 0x1; // CCPC


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
    static constexpr uint32_t SR_CC1IF = 0x2; // Capture/Compare 1 interrupt flag
    static constexpr uint32_t SR_UIF = 0x1; // Update interrupt flag

    static constexpr uint32_t EGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t EGR_BG = 0x80; // Break generation
    static constexpr uint32_t EGR_COMG = 0x20; // Capture/Compare control update generation
    static constexpr uint32_t EGR_CC1G = 0x2; // Capture/Compare 1 generation
    static constexpr uint32_t EGR_UG = 0x1; // Update generation

    static constexpr uint32_t CCMR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> CCMR1_CC1S; // CC1S
    typedef bit_field_t<4, 0xf> CCMR1_IC1F; // IC1F
    typedef bit_field_t<2, 0x3> CCMR1_IC1PSC; // IC1PSC
    static constexpr uint32_t CCMR1_OC1FE = 0x4; // OC1FE
    typedef bit_field_t<4, 0x7> CCMR1_OC1M; // OC1M
    static constexpr uint32_t CCMR1_OC1M_3 = 0x10000; // OC1M
    static constexpr uint32_t CCMR1_OC1PE = 0x8; // OC1PE


    static constexpr uint32_t CCER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCER_CC1NP = 0x8; // Capture/Compare 1 complementary output polarity
    static constexpr uint32_t CCER_CC1NE = 0x4; // Capture/Compare 1 complementary output enable
    static constexpr uint32_t CCER_CC1P = 0x2; // Capture/Compare 1 output polarity
    static constexpr uint32_t CCER_CC1E = 0x1; // Capture/Compare 1 output enable

    static constexpr uint32_t CNT_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CNT_UIFCPYORRES = 0x80000000; // UIF Copy
    typedef bit_field_t<0, 0xffff> CNT_CNT; // CNT

    static constexpr uint32_t PSC_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> PSC_PSC; // Prescaler value

    static constexpr uint32_t ARR_RESET_VALUE = 0xffff; // Reset value
    typedef bit_field_t<0, 0xffff> ARR_ARR; // Auto-reload value

    static constexpr uint32_t RCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RCR_REP; // Repetition counter value

    static constexpr uint32_t CCR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR1_CCR1; // Capture/Compare 1 value


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
    typedef bit_field_t<0, 0xff> BDTR_DT; // Dead-time generator setup

    static constexpr uint32_t DCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0x1f> DCR_DBL; // DMA burst length
    typedef bit_field_t<0, 0x1f> DCR_DBA; // DMA base address

    static constexpr uint32_t DMAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DMAR_DMAB; // DMA register for burst accesses

    static constexpr uint32_t TIM16_OR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> TIM16_OR1_TI1_RMP; // Timer 17 input 1 connection


    static constexpr uint32_t TIM16_AF1_RESET_VALUE = 0x1; // Reset value
    static constexpr uint32_t TIM16_AF1_BKCMP2P = 0x800; // BRK COMP2 input polarity
    static constexpr uint32_t TIM16_AF1_BKCMP1P = 0x400; // BRK COMP1 input polarity
    static constexpr uint32_t TIM16_AF1_BKINP = 0x200; // BRK BKIN input polarity
    static constexpr uint32_t TIM16_AF1_BKCMP2E = 0x4; // BRK COMP2 enable
    static constexpr uint32_t TIM16_AF1_BKCMP1E = 0x2; // BRK COMP1 enable
    static constexpr uint32_t TIM16_AF1_BKINE = 0x1; // BRK BKIN input enable


    static constexpr uint32_t TIM16_TISEL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> TIM16_TISEL_TISEL; // TISEL
};

// TIM17: General-purpose timers

struct stm32wl5x_cm0p_tim17_t
{
    volatile uint32_t CR1; // TIM16/TIM17 control register 1
    volatile uint32_t CR2; // TIM16/TIM17 control register 2
    reserved_t<0x1> _0x8;
    volatile uint32_t DIER; // TIM16/TIM17 DMA/interrupt enable register
    volatile uint32_t SR; // TIM16/TIM17 status register
    volatile uint32_t EGR; // TIM16/TIM17 event generation register
    volatile uint32_t CCMR1; // TIM16/TIM17 capture/compare mode register 1
    reserved_t<0x1> _0x1c;
    volatile uint32_t CCER; // TIM16/TIM17 capture/compare enable register
    volatile uint32_t CNT; // TIM16/TIM17 counter
    volatile uint32_t PSC; // TIM16/TIM17 prescaler
    volatile uint32_t ARR; // TIM16/TIM17 auto-reload register
    volatile uint32_t RCR; // TIM16/TIM17 repetition counter register
    volatile uint32_t CCR1; // TIM16/TIM17 capture/compare register 1
    reserved_t<0x3> _0x38;
    volatile uint32_t BDTR; // TIM16/TIM17 break and dead-time register
    volatile uint32_t DCR; // TIM16/TIM17 DMA control register
    volatile uint32_t DMAR; // TIM16/TIM17 DMA address for full transfer
    volatile uint32_t TIM17_OR1; // TIM17 option register 1
    reserved_t<0x3> _0x54;
    volatile uint32_t TIM17_AF1; // TIM17 alternate function register 1
    reserved_t<0x1> _0x64;
    volatile uint32_t TIM17_TISEL; // TIM17 input selection register

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR1_UIFREMAP = 0x800; // UIF status bit remapping
    typedef bit_field_t<8, 0x3> CR1_CKD; // Clock division
    static constexpr uint32_t CR1_ARPE = 0x80; // Auto-reload preload enable
    static constexpr uint32_t CR1_OPM = 0x8; // One pulse mode
    static constexpr uint32_t CR1_URS = 0x4; // Update request source
    static constexpr uint32_t CR1_UDIS = 0x2; // Update disable
    static constexpr uint32_t CR1_CEN = 0x1; // Counter enable

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR2_OIS1N = 0x200; // OIS1N
    static constexpr uint32_t CR2_OIS1 = 0x100; // OIS1
    static constexpr uint32_t CR2_CCDS = 0x8; // CCDS
    static constexpr uint32_t CR2_CCUS = 0x4; // CCUS
    static constexpr uint32_t CR2_CCPC = 0x1; // CCPC


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
    static constexpr uint32_t SR_CC1IF = 0x2; // Capture/Compare 1 interrupt flag
    static constexpr uint32_t SR_UIF = 0x1; // Update interrupt flag

    static constexpr uint32_t EGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t EGR_BG = 0x80; // Break generation
    static constexpr uint32_t EGR_COMG = 0x20; // Capture/Compare control update generation
    static constexpr uint32_t EGR_CC1G = 0x2; // Capture/Compare 1 generation
    static constexpr uint32_t EGR_UG = 0x1; // Update generation

    static constexpr uint32_t CCMR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> CCMR1_CC1S; // CC1S
    typedef bit_field_t<4, 0xf> CCMR1_IC1F; // IC1F
    typedef bit_field_t<2, 0x3> CCMR1_IC1PSC; // IC1PSC
    static constexpr uint32_t CCMR1_OC1FE = 0x4; // OC1FE
    typedef bit_field_t<4, 0x7> CCMR1_OC1M; // OC1M
    static constexpr uint32_t CCMR1_OC1M_3 = 0x10000; // OC1M
    static constexpr uint32_t CCMR1_OC1PE = 0x8; // OC1PE


    static constexpr uint32_t CCER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCER_CC1NP = 0x8; // Capture/Compare 1 complementary output polarity
    static constexpr uint32_t CCER_CC1NE = 0x4; // Capture/Compare 1 complementary output enable
    static constexpr uint32_t CCER_CC1P = 0x2; // Capture/Compare 1 output polarity
    static constexpr uint32_t CCER_CC1E = 0x1; // Capture/Compare 1 output enable

    static constexpr uint32_t CNT_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CNT_UIFCPYORRES = 0x80000000; // UIF Copy
    typedef bit_field_t<0, 0xffff> CNT_CNT; // CNT

    static constexpr uint32_t PSC_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> PSC_PSC; // Prescaler value

    static constexpr uint32_t ARR_RESET_VALUE = 0xffff; // Reset value
    typedef bit_field_t<0, 0xffff> ARR_ARR; // Auto-reload value

    static constexpr uint32_t RCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RCR_REP; // Repetition counter value

    static constexpr uint32_t CCR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR1_CCR1; // Capture/Compare 1 value


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
    typedef bit_field_t<0, 0xff> BDTR_DT; // Dead-time generator setup

    static constexpr uint32_t DCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0x1f> DCR_DBL; // DMA burst length
    typedef bit_field_t<0, 0x1f> DCR_DBA; // DMA base address

    static constexpr uint32_t DMAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DMAR_DMAB; // DMA register for burst accesses

    static constexpr uint32_t TIM17_OR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> TIM17_OR1_TI1_RMP; // Timer 17 input 1 connection


    static constexpr uint32_t TIM17_AF1_RESET_VALUE = 0x1; // Reset value
    static constexpr uint32_t TIM17_AF1_BKCMP2P = 0x800; // BRK COMP2 input polarity
    static constexpr uint32_t TIM17_AF1_BKCMP1P = 0x400; // BRK COMP1 input polarity
    static constexpr uint32_t TIM17_AF1_BKINP = 0x200; // BRK BKIN input polarity
    static constexpr uint32_t TIM17_AF1_BKCMP2E = 0x4; // BRK COMP2 enable
    static constexpr uint32_t TIM17_AF1_BKCMP1E = 0x2; // BRK COMP1 enable
    static constexpr uint32_t TIM17_AF1_BKINE = 0x1; // BRK BKIN input enable


    static constexpr uint32_t TIM17_TISEL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> TIM17_TISEL_TISEL; // TISEL
};

template<>
struct peripheral_t<STM32WL5x_CM0P, TIM2>
{
    static constexpr periph_t P = TIM2;
    using T = stm32wl5x_cm0p_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WL5x_CM4, TIM2>
{
    static constexpr periph_t P = TIM2;
    using T = stm32wl5x_cm0p_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WLE5_CM4, TIM2>
{
    static constexpr periph_t P = TIM2;
    using T = stm32wl5x_cm0p_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WL5x_CM0P, TIM16>
{
    static constexpr periph_t P = TIM16;
    using T = stm32wl5x_cm0p_tim16_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WL5x_CM4, TIM16>
{
    static constexpr periph_t P = TIM16;
    using T = stm32wl5x_cm0p_tim16_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WLE5_CM4, TIM16>
{
    static constexpr periph_t P = TIM16;
    using T = stm32wl5x_cm0p_tim16_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WL5x_CM0P, TIM17>
{
    static constexpr periph_t P = TIM17;
    using T = stm32wl5x_cm0p_tim17_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WL5x_CM4, TIM17>
{
    static constexpr periph_t P = TIM17;
    using T = stm32wl5x_cm0p_tim17_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WLE5_CM4, TIM17>
{
    static constexpr periph_t P = TIM17;
    using T = stm32wl5x_cm0p_tim17_t;
    static T& V;
};

using tim16_t = peripheral_t<svd, TIM16>;
using tim17_t = peripheral_t<svd, TIM17>;
using tim2_t = peripheral_t<svd, TIM2>;

template<int INST> struct gptim_traits {};

template<> struct gptim_traits<16>
{
    using gptim = tim16_t;
    static constexpr signal_t BKIN = TIM16_BKIN;
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

template<> struct gptim_traits<17>
{
    using gptim = tim17_t;
    static constexpr signal_t BKIN = TIM17_BKIN;
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

template<> struct gptim_traits<2>
{
    using gptim = tim2_t;
    static constexpr signal_t CH1 = TIM2_CH1;
    static constexpr signal_t CH2 = TIM2_CH2;
    static constexpr signal_t CH3 = TIM2_CH3;
    static constexpr signal_t CH4 = TIM2_CH4;
    static constexpr signal_t ETR = TIM2_ETR;
    static constexpr clock_source_t CLOCK = APB1_TIMER;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR1 |= RCC::T::APB1ENR1_TIM2EN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR1 &= ~RCC::T::APB1ENR1_TIM2EN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.APB1SMENR1 |= RCC::T::APB1SMENR1_TIM2SMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_TIM2SMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR1 |= RCC::T::APB1RSTR1_TIM2RST;
    }
};

template<> struct dma_request_t<TIM16, TIM_CH1>
{
    static constexpr unsigned ID = 42;
};

template<> struct dma_request_t<TIM16, TIM_UP>
{
    static constexpr unsigned ID = 43;
};

template<> struct dma_request_t<TIM17, TIM_CH1>
{
    static constexpr unsigned ID = 44;
};

template<> struct dma_request_t<TIM17, TIM_UP>
{
    static constexpr unsigned ID = 45;
};

template<> struct dma_request_t<TIM2, TIM_CH1>
{
    static constexpr unsigned ID = 37;
};

template<> struct dma_request_t<TIM2, TIM_CH2>
{
    static constexpr unsigned ID = 38;
};

template<> struct dma_request_t<TIM2, TIM_CH3>
{
    static constexpr unsigned ID = 39;
};

template<> struct dma_request_t<TIM2, TIM_CH4>
{
    static constexpr unsigned ID = 40;
};

template<> struct dma_request_t<TIM2, TIM_UP>
{
    static constexpr unsigned ID = 41;
};
