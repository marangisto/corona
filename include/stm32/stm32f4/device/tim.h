#pragma once

////
//
//      STM32F4 TIM peripherals
//
///

// TIM1: Advanced-timers

struct stm32f401_tim1_t
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

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0x3> CR1_CKD; // Clock division
    static constexpr uint32_t CR1_ARPE = 0x80; // Auto-reload preload enable
    typedef bit_field_t<5, 0x3> CR1_CMS; // Center-aligned mode selection
    static constexpr uint32_t CR1_DIR = 0x10; // Direction
    static constexpr uint32_t CR1_OPM = 0x8; // One-pulse mode
    static constexpr uint32_t CR1_URS = 0x4; // Update request source
    static constexpr uint32_t CR1_UDIS = 0x2; // Update disable
    static constexpr uint32_t CR1_CEN = 0x1; // Counter enable

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
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
    static constexpr uint32_t SMCR_ETP = 0x8000; // External trigger polarity
    static constexpr uint32_t SMCR_ECE = 0x4000; // External clock enable
    typedef bit_field_t<12, 0x3> SMCR_ETPS; // External trigger prescaler
    typedef bit_field_t<8, 0xf> SMCR_ETF; // External trigger filter
    static constexpr uint32_t SMCR_MSM = 0x80; // Master/Slave mode
    typedef bit_field_t<4, 0x7> SMCR_TS; // Trigger selection
    typedef bit_field_t<0, 0x7> SMCR_SMS; // Slave mode selection

    static constexpr uint32_t DIER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DIER_TDE = 0x4000; // Trigger DMA request enable
    static constexpr uint32_t DIER_COMDE = 0x2000; // COM DMA request enable
    static constexpr uint32_t DIER_CC4DE = 0x1000; // Capture/Compare 4 DMA request enable
    static constexpr uint32_t DIER_CC3DE = 0x800; // Capture/Compare 3 DMA request enable
    static constexpr uint32_t DIER_CC2DE = 0x400; // Capture/Compare 2 DMA request enable
    static constexpr uint32_t DIER_CC1DE = 0x200; // Capture/Compare 1 DMA request enable
    static constexpr uint32_t DIER_UDE = 0x100; // Update DMA request enable
    static constexpr uint32_t DIER_BIE = 0x80; // Break interrupt enable
    static constexpr uint32_t DIER_TIE = 0x40; // Trigger interrupt enable
    static constexpr uint32_t DIER_COMIE = 0x20; // COM interrupt enable
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
    static constexpr uint32_t SR_BIF = 0x80; // Break interrupt flag
    static constexpr uint32_t SR_TIF = 0x40; // Trigger interrupt flag
    static constexpr uint32_t SR_COMIF = 0x20; // COM interrupt flag
    static constexpr uint32_t SR_CC4IF = 0x10; // Capture/Compare 4 interrupt flag
    static constexpr uint32_t SR_CC3IF = 0x8; // Capture/Compare 3 interrupt flag
    static constexpr uint32_t SR_CC2IF = 0x4; // Capture/Compare 2 interrupt flag
    static constexpr uint32_t SR_CC1IF = 0x2; // Capture/compare 1 interrupt flag
    static constexpr uint32_t SR_UIF = 0x1; // Update interrupt flag

    static constexpr uint32_t EGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t EGR_BG = 0x80; // Break generation
    static constexpr uint32_t EGR_TG = 0x40; // Trigger generation
    static constexpr uint32_t EGR_COMG = 0x20; // Capture/Compare control update generation
    static constexpr uint32_t EGR_CC4G = 0x10; // Capture/compare 4 generation
    static constexpr uint32_t EGR_CC3G = 0x8; // Capture/compare 3 generation
    static constexpr uint32_t EGR_CC2G = 0x4; // Capture/compare 2 generation
    static constexpr uint32_t EGR_CC1G = 0x2; // Capture/compare 1 generation
    static constexpr uint32_t EGR_UG = 0x1; // Update generation

    static constexpr uint32_t CCMR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCMR1_OC2CE = 0x8000; // Output Compare 2 clear enable
    typedef bit_field_t<12, 0x7> CCMR1_OC2M; // Output Compare 2 mode
    static constexpr uint32_t CCMR1_OC2PE = 0x800; // Output Compare 2 preload enable
    static constexpr uint32_t CCMR1_OC2FE = 0x400; // Output Compare 2 fast enable
    typedef bit_field_t<8, 0x3> CCMR1_CC2S; // Capture/Compare 2 selection
    static constexpr uint32_t CCMR1_OC1CE = 0x80; // Output Compare 1 clear enable
    typedef bit_field_t<4, 0x7> CCMR1_OC1M; // Output Compare 1 mode
    static constexpr uint32_t CCMR1_OC1PE = 0x8; // Output Compare 1 preload enable
    static constexpr uint32_t CCMR1_OC1FE = 0x4; // Output Compare 1 fast enable
    typedef bit_field_t<0, 0x3> CCMR1_CC1S; // Capture/Compare 1 selection

    static constexpr uint32_t CCMR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCMR2_OC4CE = 0x8000; // Output compare 4 clear enable
    typedef bit_field_t<12, 0x7> CCMR2_OC4M; // Output compare 4 mode
    static constexpr uint32_t CCMR2_OC4PE = 0x800; // Output compare 4 preload enable
    static constexpr uint32_t CCMR2_OC4FE = 0x400; // Output compare 4 fast enable
    typedef bit_field_t<8, 0x3> CCMR2_CC4S; // Capture/Compare 4 selection
    static constexpr uint32_t CCMR2_OC3CE = 0x80; // Output compare 3 clear enable
    typedef bit_field_t<4, 0x7> CCMR2_OC3M; // Output compare 3 mode
    static constexpr uint32_t CCMR2_OC3PE = 0x8; // Output compare 3 preload enable
    static constexpr uint32_t CCMR2_OC3FE = 0x4; // Output compare 3 fast enable
    typedef bit_field_t<0, 0x3> CCMR2_CC3S; // Capture/Compare 3 selection

    static constexpr uint32_t CCER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCER_CC4P = 0x2000; // Capture/Compare 3 output Polarity
    static constexpr uint32_t CCER_CC4E = 0x1000; // Capture/Compare 4 output enable
    static constexpr uint32_t CCER_CC3NP = 0x800; // Capture/Compare 3 output Polarity
    static constexpr uint32_t CCER_CC3NE = 0x400; // Capture/Compare 3 complementary output enable
    static constexpr uint32_t CCER_CC3P = 0x200; // Capture/Compare 3 output Polarity
    static constexpr uint32_t CCER_CC3E = 0x100; // Capture/Compare 3 output enable
    static constexpr uint32_t CCER_CC2NP = 0x80; // Capture/Compare 2 output Polarity
    static constexpr uint32_t CCER_CC2NE = 0x40; // Capture/Compare 2 complementary output enable
    static constexpr uint32_t CCER_CC2P = 0x20; // Capture/Compare 2 output Polarity
    static constexpr uint32_t CCER_CC2E = 0x10; // Capture/Compare 2 output enable
    static constexpr uint32_t CCER_CC1NP = 0x8; // Capture/Compare 1 output Polarity
    static constexpr uint32_t CCER_CC1NE = 0x4; // Capture/Compare 1 complementary output enable
    static constexpr uint32_t CCER_CC1P = 0x2; // Capture/Compare 1 output Polarity
    static constexpr uint32_t CCER_CC1E = 0x1; // Capture/Compare 1 output enable

    static constexpr uint32_t CNT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNT_CNT; // counter value

    static constexpr uint32_t PSC_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> PSC_PSC; // Prescaler value

    static constexpr uint32_t ARR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> ARR_ARR; // Auto-reload value

    static constexpr uint32_t RCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RCR_REP; // Repetition counter value

    static constexpr uint32_t CCR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR1_CCR1; // Capture/Compare 1 value

    static constexpr uint32_t CCR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR2_CCR2; // Capture/Compare 2 value

    static constexpr uint32_t CCR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR3_CCR3; // Capture/Compare value

    static constexpr uint32_t CCR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR4_CCR4; // Capture/Compare value

    static constexpr uint32_t BDTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BDTR_MOE = 0x8000; // Main output enable
    static constexpr uint32_t BDTR_AOE = 0x4000; // Automatic output enable
    static constexpr uint32_t BDTR_BKP = 0x2000; // Break polarity
    static constexpr uint32_t BDTR_BKE = 0x1000; // Break enable
    static constexpr uint32_t BDTR_OSSR = 0x800; // Off-state selection for Run mode
    static constexpr uint32_t BDTR_OSSI = 0x400; // Off-state selection for Idle mode
    typedef bit_field_t<8, 0x3> BDTR_LOCK; // Lock configuration
    typedef bit_field_t<0, 0xff> BDTR_DTG; // Dead-time generator setup

    static constexpr uint32_t DCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0x1f> DCR_DBL; // DMA burst length
    typedef bit_field_t<0, 0x1f> DCR_DBA; // DMA base address

    static constexpr uint32_t DMAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DMAR_DMAB; // DMA register for burst accesses
};

// TIM2: General purpose timers

struct stm32f401_tim2_t
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
    volatile uint32_t OR; // TIM5 option register

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
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
    static constexpr uint32_t SMCR_ETP = 0x8000; // External trigger polarity
    static constexpr uint32_t SMCR_ECE = 0x4000; // External clock enable
    typedef bit_field_t<12, 0x3> SMCR_ETPS; // External trigger prescaler
    typedef bit_field_t<8, 0xf> SMCR_ETF; // External trigger filter
    static constexpr uint32_t SMCR_MSM = 0x80; // Master/Slave mode
    typedef bit_field_t<4, 0x7> SMCR_TS; // Trigger selection
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
    static constexpr uint32_t CCMR1_OC2CE = 0x8000; // OC2CE
    typedef bit_field_t<12, 0x7> CCMR1_OC2M; // OC2M
    static constexpr uint32_t CCMR1_OC2PE = 0x800; // OC2PE
    static constexpr uint32_t CCMR1_OC2FE = 0x400; // OC2FE
    typedef bit_field_t<8, 0x3> CCMR1_CC2S; // CC2S
    static constexpr uint32_t CCMR1_OC1CE = 0x80; // OC1CE
    typedef bit_field_t<4, 0x7> CCMR1_OC1M; // OC1M
    static constexpr uint32_t CCMR1_OC1PE = 0x8; // OC1PE
    static constexpr uint32_t CCMR1_OC1FE = 0x4; // OC1FE
    typedef bit_field_t<0, 0x3> CCMR1_CC1S; // CC1S

    static constexpr uint32_t CCMR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCMR2_OC4CE = 0x8000; // OC4CE
    typedef bit_field_t<12, 0x7> CCMR2_OC4M; // OC4M
    static constexpr uint32_t CCMR2_OC4PE = 0x800; // OC4PE
    static constexpr uint32_t CCMR2_OC4FE = 0x400; // OC4FE
    typedef bit_field_t<8, 0x3> CCMR2_CC4S; // CC4S
    static constexpr uint32_t CCMR2_OC3CE = 0x80; // OC3CE
    typedef bit_field_t<4, 0x7> CCMR2_OC3M; // OC3M
    static constexpr uint32_t CCMR2_OC3PE = 0x8; // OC3PE
    static constexpr uint32_t CCMR2_OC3FE = 0x4; // OC3FE
    typedef bit_field_t<0, 0x3> CCMR2_CC3S; // CC3S

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
    typedef bit_field_t<16, 0xffff> CNT_CNT_H; // High counter value
    typedef bit_field_t<0, 0xffff> CNT_CNT_L; // Low counter value

    static constexpr uint32_t PSC_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> PSC_PSC; // Prescaler value

    static constexpr uint32_t ARR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> ARR_ARR_H; // High Auto-reload value
    typedef bit_field_t<0, 0xffff> ARR_ARR_L; // Low Auto-reload value


    static constexpr uint32_t CCR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> CCR1_CCR1_H; // High Capture/Compare 1 value
    typedef bit_field_t<0, 0xffff> CCR1_CCR1_L; // Low Capture/Compare 1 value

    static constexpr uint32_t CCR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> CCR2_CCR2_H; // High Capture/Compare 2 value
    typedef bit_field_t<0, 0xffff> CCR2_CCR2_L; // Low Capture/Compare 2 value

    static constexpr uint32_t CCR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> CCR3_CCR3_H; // High Capture/Compare value
    typedef bit_field_t<0, 0xffff> CCR3_CCR3_L; // Low Capture/Compare value

    static constexpr uint32_t CCR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> CCR4_CCR4_H; // High Capture/Compare value
    typedef bit_field_t<0, 0xffff> CCR4_CCR4_L; // Low Capture/Compare value


    static constexpr uint32_t DCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0x1f> DCR_DBL; // DMA burst length
    typedef bit_field_t<0, 0x1f> DCR_DBA; // DMA base address

    static constexpr uint32_t DMAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DMAR_DMAB; // DMA register for burst accesses

    static constexpr uint32_t OR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<10, 0x3> OR_ITR1_RMP; // Timer Input 4 remap
};

// TIM3: General purpose timers

struct stm32f401_tim3_t
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

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
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
    static constexpr uint32_t SMCR_ETP = 0x8000; // External trigger polarity
    static constexpr uint32_t SMCR_ECE = 0x4000; // External clock enable
    typedef bit_field_t<12, 0x3> SMCR_ETPS; // External trigger prescaler
    typedef bit_field_t<8, 0xf> SMCR_ETF; // External trigger filter
    static constexpr uint32_t SMCR_MSM = 0x80; // Master/Slave mode
    typedef bit_field_t<4, 0x7> SMCR_TS; // Trigger selection
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
    static constexpr uint32_t CCMR1_OC2CE = 0x8000; // OC2CE
    typedef bit_field_t<12, 0x7> CCMR1_OC2M; // OC2M
    static constexpr uint32_t CCMR1_OC2PE = 0x800; // OC2PE
    static constexpr uint32_t CCMR1_OC2FE = 0x400; // OC2FE
    typedef bit_field_t<8, 0x3> CCMR1_CC2S; // CC2S
    static constexpr uint32_t CCMR1_OC1CE = 0x80; // OC1CE
    typedef bit_field_t<4, 0x7> CCMR1_OC1M; // OC1M
    static constexpr uint32_t CCMR1_OC1PE = 0x8; // OC1PE
    static constexpr uint32_t CCMR1_OC1FE = 0x4; // OC1FE
    typedef bit_field_t<0, 0x3> CCMR1_CC1S; // CC1S

    static constexpr uint32_t CCMR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCMR2_OC4CE = 0x8000; // OC4CE
    typedef bit_field_t<12, 0x7> CCMR2_OC4M; // OC4M
    static constexpr uint32_t CCMR2_OC4PE = 0x800; // OC4PE
    static constexpr uint32_t CCMR2_OC4FE = 0x400; // OC4FE
    typedef bit_field_t<8, 0x3> CCMR2_CC4S; // CC4S
    static constexpr uint32_t CCMR2_OC3CE = 0x80; // OC3CE
    typedef bit_field_t<4, 0x7> CCMR2_OC3M; // OC3M
    static constexpr uint32_t CCMR2_OC3PE = 0x8; // OC3PE
    static constexpr uint32_t CCMR2_OC3FE = 0x4; // OC3FE
    typedef bit_field_t<0, 0x3> CCMR2_CC3S; // CC3S

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
    typedef bit_field_t<16, 0xffff> CNT_CNT_H; // High counter value
    typedef bit_field_t<0, 0xffff> CNT_CNT_L; // Low counter value

    static constexpr uint32_t PSC_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> PSC_PSC; // Prescaler value

    static constexpr uint32_t ARR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> ARR_ARR_H; // High Auto-reload value
    typedef bit_field_t<0, 0xffff> ARR_ARR_L; // Low Auto-reload value


    static constexpr uint32_t CCR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> CCR1_CCR1_H; // High Capture/Compare 1 value
    typedef bit_field_t<0, 0xffff> CCR1_CCR1_L; // Low Capture/Compare 1 value

    static constexpr uint32_t CCR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> CCR2_CCR2_H; // High Capture/Compare 2 value
    typedef bit_field_t<0, 0xffff> CCR2_CCR2_L; // Low Capture/Compare 2 value

    static constexpr uint32_t CCR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> CCR3_CCR3_H; // High Capture/Compare value
    typedef bit_field_t<0, 0xffff> CCR3_CCR3_L; // Low Capture/Compare value

    static constexpr uint32_t CCR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> CCR4_CCR4_H; // High Capture/Compare value
    typedef bit_field_t<0, 0xffff> CCR4_CCR4_L; // Low Capture/Compare value


    static constexpr uint32_t DCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0x1f> DCR_DBL; // DMA burst length
    typedef bit_field_t<0, 0x1f> DCR_DBA; // DMA base address

    static constexpr uint32_t DMAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DMAR_DMAB; // DMA register for burst accesses
};

// TIM5: General-purpose-timers

struct stm32f401_tim5_t
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
    volatile uint32_t OR; // TIM5 option register

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
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
    static constexpr uint32_t SMCR_ETP = 0x8000; // External trigger polarity
    static constexpr uint32_t SMCR_ECE = 0x4000; // External clock enable
    typedef bit_field_t<12, 0x3> SMCR_ETPS; // External trigger prescaler
    typedef bit_field_t<8, 0xf> SMCR_ETF; // External trigger filter
    static constexpr uint32_t SMCR_MSM = 0x80; // Master/Slave mode
    typedef bit_field_t<4, 0x7> SMCR_TS; // Trigger selection
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
    static constexpr uint32_t CCMR1_OC2CE = 0x8000; // OC2CE
    typedef bit_field_t<12, 0x7> CCMR1_OC2M; // OC2M
    static constexpr uint32_t CCMR1_OC2PE = 0x800; // OC2PE
    static constexpr uint32_t CCMR1_OC2FE = 0x400; // OC2FE
    typedef bit_field_t<8, 0x3> CCMR1_CC2S; // CC2S
    static constexpr uint32_t CCMR1_OC1CE = 0x80; // OC1CE
    typedef bit_field_t<4, 0x7> CCMR1_OC1M; // OC1M
    static constexpr uint32_t CCMR1_OC1PE = 0x8; // OC1PE
    static constexpr uint32_t CCMR1_OC1FE = 0x4; // OC1FE
    typedef bit_field_t<0, 0x3> CCMR1_CC1S; // CC1S

    static constexpr uint32_t CCMR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCMR2_OC4CE = 0x8000; // OC4CE
    typedef bit_field_t<12, 0x7> CCMR2_OC4M; // OC4M
    static constexpr uint32_t CCMR2_OC4PE = 0x800; // OC4PE
    static constexpr uint32_t CCMR2_OC4FE = 0x400; // OC4FE
    typedef bit_field_t<8, 0x3> CCMR2_CC4S; // CC4S
    static constexpr uint32_t CCMR2_OC3CE = 0x80; // OC3CE
    typedef bit_field_t<4, 0x7> CCMR2_OC3M; // OC3M
    static constexpr uint32_t CCMR2_OC3PE = 0x8; // OC3PE
    static constexpr uint32_t CCMR2_OC3FE = 0x4; // OC3FE
    typedef bit_field_t<0, 0x3> CCMR2_CC3S; // CC3S

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
    typedef bit_field_t<16, 0xffff> CNT_CNT_H; // High counter value
    typedef bit_field_t<0, 0xffff> CNT_CNT_L; // Low counter value

    static constexpr uint32_t PSC_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> PSC_PSC; // Prescaler value

    static constexpr uint32_t ARR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> ARR_ARR_H; // High Auto-reload value
    typedef bit_field_t<0, 0xffff> ARR_ARR_L; // Low Auto-reload value


    static constexpr uint32_t CCR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> CCR1_CCR1_H; // High Capture/Compare 1 value
    typedef bit_field_t<0, 0xffff> CCR1_CCR1_L; // Low Capture/Compare 1 value

    static constexpr uint32_t CCR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> CCR2_CCR2_H; // High Capture/Compare 2 value
    typedef bit_field_t<0, 0xffff> CCR2_CCR2_L; // Low Capture/Compare 2 value

    static constexpr uint32_t CCR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> CCR3_CCR3_H; // High Capture/Compare value
    typedef bit_field_t<0, 0xffff> CCR3_CCR3_L; // Low Capture/Compare value

    static constexpr uint32_t CCR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> CCR4_CCR4_H; // High Capture/Compare value
    typedef bit_field_t<0, 0xffff> CCR4_CCR4_L; // Low Capture/Compare value


    static constexpr uint32_t DCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0x1f> DCR_DBL; // DMA burst length
    typedef bit_field_t<0, 0x1f> DCR_DBA; // DMA base address

    static constexpr uint32_t DMAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DMAR_DMAB; // DMA register for burst accesses

    static constexpr uint32_t OR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<6, 0x3> OR_IT4_RMP; // Timer Input 4 remap
};

// TIM6: Basic timers

struct stm32f405_tim6_t
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

    static constexpr uint32_t PSC_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> PSC_PSC; // Prescaler value

    static constexpr uint32_t ARR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> ARR_ARR; // Low Auto-reload value
};

// TIM6: Basic timers

struct stm32f412_tim6_t
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
    static constexpr uint32_t CR1_CEN = 0x1; // Counter enable
    static constexpr uint32_t CR1_UDIS = 0x2; // Update disable
    static constexpr uint32_t CR1_URS = 0x4; // Update request source
    static constexpr uint32_t CR1_OPM = 0x8; // One-pulse mode
    static constexpr uint32_t CR1_ARPE = 0x80; // Auto-reload preload enable
    static constexpr uint32_t CR1_UIFREMAP = 0x800; // UIF status bit remapping

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

// TIM9: General purpose timers

struct stm32f401_tim9_t
{
    volatile uint32_t CR1; // control register 1
    volatile uint32_t CR2; // control register 2
    volatile uint32_t SMCR; // slave mode control register
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
    volatile uint32_t CCR2; // capture/compare register 2

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0x3> CR1_CKD; // Clock division
    static constexpr uint32_t CR1_ARPE = 0x80; // Auto-reload preload enable
    static constexpr uint32_t CR1_OPM = 0x8; // One-pulse mode
    static constexpr uint32_t CR1_URS = 0x4; // Update request source
    static constexpr uint32_t CR1_UDIS = 0x2; // Update disable
    static constexpr uint32_t CR1_CEN = 0x1; // Counter enable

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0x7> CR2_MMS; // Master mode selection

    static constexpr uint32_t SMCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SMCR_MSM = 0x80; // Master/Slave mode
    typedef bit_field_t<4, 0x7> SMCR_TS; // Trigger selection
    typedef bit_field_t<0, 0x7> SMCR_SMS; // Slave mode selection

    static constexpr uint32_t DIER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DIER_TIE = 0x40; // Trigger interrupt enable
    static constexpr uint32_t DIER_CC2IE = 0x4; // Capture/Compare 2 interrupt enable
    static constexpr uint32_t DIER_CC1IE = 0x2; // Capture/Compare 1 interrupt enable
    static constexpr uint32_t DIER_UIE = 0x1; // Update interrupt enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_CC2OF = 0x400; // Capture/compare 2 overcapture flag
    static constexpr uint32_t SR_CC1OF = 0x200; // Capture/Compare 1 overcapture flag
    static constexpr uint32_t SR_TIF = 0x40; // Trigger interrupt flag
    static constexpr uint32_t SR_CC2IF = 0x4; // Capture/Compare 2 interrupt flag
    static constexpr uint32_t SR_CC1IF = 0x2; // Capture/compare 1 interrupt flag
    static constexpr uint32_t SR_UIF = 0x1; // Update interrupt flag

    static constexpr uint32_t EGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t EGR_TG = 0x40; // Trigger generation
    static constexpr uint32_t EGR_CC2G = 0x4; // Capture/compare 2 generation
    static constexpr uint32_t EGR_CC1G = 0x2; // Capture/compare 1 generation
    static constexpr uint32_t EGR_UG = 0x1; // Update generation

    static constexpr uint32_t CCMR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<12, 0x7> CCMR1_OC2M; // Output Compare 2 mode
    static constexpr uint32_t CCMR1_OC2PE = 0x800; // Output Compare 2 preload enable
    static constexpr uint32_t CCMR1_OC2FE = 0x400; // Output Compare 2 fast enable
    typedef bit_field_t<8, 0x3> CCMR1_CC2S; // Capture/Compare 2 selection
    typedef bit_field_t<4, 0x7> CCMR1_OC1M; // Output Compare 1 mode
    static constexpr uint32_t CCMR1_OC1PE = 0x8; // Output Compare 1 preload enable
    static constexpr uint32_t CCMR1_OC1FE = 0x4; // Output Compare 1 fast enable
    typedef bit_field_t<0, 0x3> CCMR1_CC1S; // Capture/Compare 1 selection


    static constexpr uint32_t CCER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCER_CC2NP = 0x80; // Capture/Compare 2 output Polarity
    static constexpr uint32_t CCER_CC2P = 0x20; // Capture/Compare 2 output Polarity
    static constexpr uint32_t CCER_CC2E = 0x10; // Capture/Compare 2 output enable
    static constexpr uint32_t CCER_CC1NP = 0x8; // Capture/Compare 1 output Polarity
    static constexpr uint32_t CCER_CC1P = 0x2; // Capture/Compare 1 output Polarity
    static constexpr uint32_t CCER_CC1E = 0x1; // Capture/Compare 1 output enable

    static constexpr uint32_t CNT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNT_CNT; // counter value

    static constexpr uint32_t PSC_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> PSC_PSC; // Prescaler value

    static constexpr uint32_t ARR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> ARR_ARR; // Auto-reload value


    static constexpr uint32_t CCR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR1_CCR1; // Capture/Compare 1 value

    static constexpr uint32_t CCR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR2_CCR2; // Capture/Compare 2 value
};

// TIM9: General purpose timers

struct stm32f469_tim9_t
{
    volatile uint32_t CR1; // control register 1
    reserved_t<0x1> _0x4;
    volatile uint32_t SMCR; // slave mode control register
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
    volatile uint32_t CCR2; // capture/compare register 2

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0x3> CR1_CKD; // Clock division
    static constexpr uint32_t CR1_ARPE = 0x80; // Auto-reload preload enable
    static constexpr uint32_t CR1_OPM = 0x8; // One-pulse mode
    static constexpr uint32_t CR1_URS = 0x4; // Update request source
    static constexpr uint32_t CR1_UDIS = 0x2; // Update disable
    static constexpr uint32_t CR1_CEN = 0x1; // Counter enable


    static constexpr uint32_t SMCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SMCR_MSM = 0x80; // Master/Slave mode
    typedef bit_field_t<4, 0x7> SMCR_TS; // Trigger selection
    typedef bit_field_t<0, 0x7> SMCR_SMS; // Slave mode selection

    static constexpr uint32_t DIER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DIER_TIE = 0x40; // Trigger interrupt enable
    static constexpr uint32_t DIER_CC2IE = 0x4; // Capture/Compare 2 interrupt enable
    static constexpr uint32_t DIER_CC1IE = 0x2; // Capture/Compare 1 interrupt enable
    static constexpr uint32_t DIER_UIE = 0x1; // Update interrupt enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_CC2OF = 0x400; // Capture/compare 2 overcapture flag
    static constexpr uint32_t SR_CC1OF = 0x200; // Capture/Compare 1 overcapture flag
    static constexpr uint32_t SR_TIF = 0x40; // Trigger interrupt flag
    static constexpr uint32_t SR_CC2IF = 0x4; // Capture/Compare 2 interrupt flag
    static constexpr uint32_t SR_CC1IF = 0x2; // Capture/compare 1 interrupt flag
    static constexpr uint32_t SR_UIF = 0x1; // Update interrupt flag

    static constexpr uint32_t EGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t EGR_TG = 0x40; // Trigger generation
    static constexpr uint32_t EGR_CC2G = 0x4; // Capture/compare 2 generation
    static constexpr uint32_t EGR_CC1G = 0x2; // Capture/compare 1 generation
    static constexpr uint32_t EGR_UG = 0x1; // Update generation

    static constexpr uint32_t CCMR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<12, 0x7> CCMR1_OC2M; // Output Compare 2 mode
    static constexpr uint32_t CCMR1_OC2PE = 0x800; // Output Compare 2 preload enable
    static constexpr uint32_t CCMR1_OC2FE = 0x400; // Output Compare 2 fast enable
    typedef bit_field_t<8, 0x3> CCMR1_CC2S; // Capture/Compare 2 selection
    typedef bit_field_t<4, 0x7> CCMR1_OC1M; // Output Compare 1 mode
    static constexpr uint32_t CCMR1_OC1PE = 0x8; // Output Compare 1 preload enable
    static constexpr uint32_t CCMR1_OC1FE = 0x4; // Output Compare 1 fast enable
    typedef bit_field_t<0, 0x3> CCMR1_CC1S; // Capture/Compare 1 selection


    static constexpr uint32_t CCER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCER_CC2NP = 0x80; // Capture/Compare 2 output Polarity
    static constexpr uint32_t CCER_CC2P = 0x20; // Capture/Compare 2 output Polarity
    static constexpr uint32_t CCER_CC2E = 0x10; // Capture/Compare 2 output enable
    static constexpr uint32_t CCER_CC1NP = 0x8; // Capture/Compare 1 output Polarity
    static constexpr uint32_t CCER_CC1P = 0x2; // Capture/Compare 1 output Polarity
    static constexpr uint32_t CCER_CC1E = 0x1; // Capture/Compare 1 output enable

    static constexpr uint32_t CNT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNT_CNT; // counter value

    static constexpr uint32_t PSC_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> PSC_PSC; // Prescaler value

    static constexpr uint32_t ARR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> ARR_ARR; // Auto-reload value


    static constexpr uint32_t CCR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR1_CCR1; // Capture/Compare 1 value

    static constexpr uint32_t CCR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR2_CCR2; // Capture/Compare 2 value
};

// TIM10: General-purpose-timers

struct stm32f401_tim10_t
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

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0x3> CR1_CKD; // Clock division
    static constexpr uint32_t CR1_ARPE = 0x80; // Auto-reload preload enable
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
    typedef bit_field_t<4, 0x7> CCMR1_OC1M; // Output Compare 1 mode
    static constexpr uint32_t CCMR1_OC1PE = 0x8; // Output Compare 1 preload enable
    static constexpr uint32_t CCMR1_OC1FE = 0x4; // Output Compare 1 fast enable
    typedef bit_field_t<0, 0x3> CCMR1_CC1S; // Capture/Compare 1 selection


    static constexpr uint32_t CCER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCER_CC1NP = 0x8; // Capture/Compare 1 output Polarity
    static constexpr uint32_t CCER_CC1P = 0x2; // Capture/Compare 1 output Polarity
    static constexpr uint32_t CCER_CC1E = 0x1; // Capture/Compare 1 output enable

    static constexpr uint32_t CNT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNT_CNT; // counter value

    static constexpr uint32_t PSC_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> PSC_PSC; // Prescaler value

    static constexpr uint32_t ARR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> ARR_ARR; // Auto-reload value


    static constexpr uint32_t CCR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR1_CCR1; // Capture/Compare 1 value
};

// TIM11: General-purpose-timers

struct stm32f401_tim11_t
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
    reserved_t<0x6> _0x38;
    volatile uint32_t OR; // option register

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0x3> CR1_CKD; // Clock division
    static constexpr uint32_t CR1_ARPE = 0x80; // Auto-reload preload enable
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
    typedef bit_field_t<4, 0x7> CCMR1_OC1M; // Output Compare 1 mode
    static constexpr uint32_t CCMR1_OC1PE = 0x8; // Output Compare 1 preload enable
    static constexpr uint32_t CCMR1_OC1FE = 0x4; // Output Compare 1 fast enable
    typedef bit_field_t<0, 0x3> CCMR1_CC1S; // Capture/Compare 1 selection


    static constexpr uint32_t CCER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCER_CC1NP = 0x8; // Capture/Compare 1 output Polarity
    static constexpr uint32_t CCER_CC1P = 0x2; // Capture/Compare 1 output Polarity
    static constexpr uint32_t CCER_CC1E = 0x1; // Capture/Compare 1 output enable

    static constexpr uint32_t CNT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNT_CNT; // counter value

    static constexpr uint32_t PSC_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> PSC_PSC; // Prescaler value

    static constexpr uint32_t ARR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> ARR_ARR; // Auto-reload value


    static constexpr uint32_t CCR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR1_CCR1; // Capture/Compare 1 value


    static constexpr uint32_t OR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> OR_RMP; // Input 1 remapping capability
};

// TIM12: General purpose timers

struct stm32f412_tim12_t
{
    volatile uint32_t CR1; // control register 1
    reserved_t<0x1> _0x4;
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
    reserved_t<0x1> _0x30;
    volatile uint32_t CCR1; // capture/compare register 1
    volatile uint32_t CCR2; // capture/compare register 2

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0x3> CR1_CKD; // Clock division
    static constexpr uint32_t CR1_ARPE = 0x80; // Auto-reload preload enable
    static constexpr uint32_t CR1_OPM = 0x8; // One-pulse mode
    static constexpr uint32_t CR1_URS = 0x4; // Update request source
    static constexpr uint32_t CR1_UDIS = 0x2; // Update disable
    static constexpr uint32_t CR1_CEN = 0x1; // Counter enable


    static constexpr uint32_t SMCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SMCR_MSM = 0x80; // Master/Slave mode
    typedef bit_field_t<4, 0x7> SMCR_TS; // Trigger selection
    typedef bit_field_t<0, 0x7> SMCR_SMS; // Slave mode selection

    static constexpr uint32_t DIER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DIER_TIE = 0x40; // Trigger interrupt enable
    static constexpr uint32_t DIER_CC2IE = 0x4; // Capture/Compare 2 interrupt enable
    static constexpr uint32_t DIER_CC1IE = 0x2; // Capture/Compare 1 interrupt enable
    static constexpr uint32_t DIER_UIE = 0x1; // Update interrupt enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_CC2OF = 0x400; // Capture/compare 2 overcapture flag
    static constexpr uint32_t SR_CC1OF = 0x200; // Capture/Compare 1 overcapture flag
    static constexpr uint32_t SR_TIF = 0x40; // Trigger interrupt flag
    static constexpr uint32_t SR_CC2IF = 0x4; // Capture/Compare 2 interrupt flag
    static constexpr uint32_t SR_CC1IF = 0x2; // Capture/compare 1 interrupt flag
    static constexpr uint32_t SR_UIF = 0x1; // Update interrupt flag

    static constexpr uint32_t EGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t EGR_TG = 0x40; // Trigger generation
    static constexpr uint32_t EGR_CC2G = 0x4; // Capture/compare 2 generation
    static constexpr uint32_t EGR_CC1G = 0x2; // Capture/compare 1 generation
    static constexpr uint32_t EGR_UG = 0x1; // Update generation

    static constexpr uint32_t CCMR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<12, 0x7> CCMR1_OC2M; // Output Compare 2 mode
    static constexpr uint32_t CCMR1_OC2PE = 0x800; // Output Compare 2 preload enable
    static constexpr uint32_t CCMR1_OC2FE = 0x400; // Output Compare 2 fast enable
    typedef bit_field_t<8, 0x3> CCMR1_CC2S; // Capture/Compare 2 selection
    typedef bit_field_t<4, 0x7> CCMR1_OC1M; // Output Compare 1 mode
    static constexpr uint32_t CCMR1_OC1PE = 0x8; // Output Compare 1 preload enable
    static constexpr uint32_t CCMR1_OC1FE = 0x4; // Output Compare 1 fast enable
    typedef bit_field_t<0, 0x3> CCMR1_CC1S; // Capture/Compare 1 selection


    static constexpr uint32_t CCER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCER_CC2NP = 0x80; // Capture/Compare 2 output Polarity
    static constexpr uint32_t CCER_CC2P = 0x20; // Capture/Compare 2 output Polarity
    static constexpr uint32_t CCER_CC2E = 0x10; // Capture/Compare 2 output enable
    static constexpr uint32_t CCER_CC1NP = 0x8; // Capture/Compare 1 output Polarity
    static constexpr uint32_t CCER_CC1P = 0x2; // Capture/Compare 1 output Polarity
    static constexpr uint32_t CCER_CC1E = 0x1; // Capture/Compare 1 output enable

    static constexpr uint32_t CNT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNT_CNT; // counter value

    static constexpr uint32_t PSC_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> PSC_PSC; // Prescaler value

    static constexpr uint32_t ARR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> ARR_ARR; // Auto-reload value


    static constexpr uint32_t CCR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR1_CCR1; // Capture/Compare 1 value

    static constexpr uint32_t CCR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR2_CCR2; // Capture/Compare 2 value
};

// TIM13: General purpose timers

struct stm32f412_tim13_t
{
    volatile uint32_t CR1; // control register 1
    reserved_t<0x2> _0x4;
    volatile uint32_t DIER; // DMA/Interrupt enable register
    volatile uint32_t SR; // status register
    volatile uint32_t EGR; // event generation register
    volatile uint32_t CCMR1; // capture/compare mode register (output mode)
    reserved_t<0x1> _0x1c;
    volatile uint32_t CCER; // capture/compare enable register
    volatile uint32_t CNT; // counter
    volatile uint32_t PSC; // prescaler
    volatile uint32_t ARR; // auto-reload register
    reserved_t<0x1> _0x30;
    volatile uint32_t CCR1; // capture/compare register 1

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0x3> CR1_CKD; // Clock division
    static constexpr uint32_t CR1_ARPE = 0x80; // Auto-reload preload enable
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
    typedef bit_field_t<0, 0x3> CCMR1_CC1S; // Capture/Compare 1 selection
    static constexpr uint32_t CCMR1_OC1FE = 0x4; // Output compare 1 fast enable
    static constexpr uint32_t CCMR1_OC1PE = 0x8; // Output Compare 1 preload enable
    typedef bit_field_t<4, 0x7> CCMR1_OC1M; // Output Compare 1 mode


    static constexpr uint32_t CCER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCER_CC1NP = 0x8; // Capture/Compare 1 output Polarity
    static constexpr uint32_t CCER_CC1P = 0x2; // Capture/Compare 1 output Polarity
    static constexpr uint32_t CCER_CC1E = 0x1; // Capture/Compare 1 output enable

    static constexpr uint32_t CNT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNT_CNT; // counter value

    static constexpr uint32_t PSC_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> PSC_PSC; // Prescaler value

    static constexpr uint32_t ARR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> ARR_ARR; // Auto-reload value


    static constexpr uint32_t CCR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR1_CCR1; // Capture/Compare 1 value
};

template<>
struct peripheral_t<STM32F401, TIM1>
{
    static constexpr periph_t P = TIM1;
    using T = stm32f401_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F401, TIM8>
{
    static constexpr periph_t P = TIM8;
    using T = stm32f401_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, TIM1>
{
    static constexpr periph_t P = TIM1;
    using T = stm32f401_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, TIM8>
{
    static constexpr periph_t P = TIM8;
    using T = stm32f401_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, TIM1>
{
    static constexpr periph_t P = TIM1;
    using T = stm32f401_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, TIM8>
{
    static constexpr periph_t P = TIM8;
    using T = stm32f401_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F410, TIM1>
{
    static constexpr periph_t P = TIM1;
    using T = stm32f401_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F410, TIM8>
{
    static constexpr periph_t P = TIM8;
    using T = stm32f401_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F411, TIM1>
{
    static constexpr periph_t P = TIM1;
    using T = stm32f401_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F411, TIM8>
{
    static constexpr periph_t P = TIM8;
    using T = stm32f401_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, TIM1>
{
    static constexpr periph_t P = TIM1;
    using T = stm32f401_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, TIM8>
{
    static constexpr periph_t P = TIM8;
    using T = stm32f401_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, TIM1>
{
    static constexpr periph_t P = TIM1;
    using T = stm32f401_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, TIM8>
{
    static constexpr periph_t P = TIM8;
    using T = stm32f401_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, TIM1>
{
    static constexpr periph_t P = TIM1;
    using T = stm32f401_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, TIM8>
{
    static constexpr periph_t P = TIM8;
    using T = stm32f401_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, TIM1>
{
    static constexpr periph_t P = TIM1;
    using T = stm32f401_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, TIM8>
{
    static constexpr periph_t P = TIM8;
    using T = stm32f401_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, TIM1>
{
    static constexpr periph_t P = TIM1;
    using T = stm32f401_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, TIM8>
{
    static constexpr periph_t P = TIM8;
    using T = stm32f401_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, TIM1>
{
    static constexpr periph_t P = TIM1;
    using T = stm32f401_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, TIM8>
{
    static constexpr periph_t P = TIM8;
    using T = stm32f401_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F401, TIM2>
{
    static constexpr periph_t P = TIM2;
    using T = stm32f401_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, TIM2>
{
    static constexpr periph_t P = TIM2;
    using T = stm32f401_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, TIM2>
{
    static constexpr periph_t P = TIM2;
    using T = stm32f401_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F411, TIM2>
{
    static constexpr periph_t P = TIM2;
    using T = stm32f401_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, TIM2>
{
    static constexpr periph_t P = TIM2;
    using T = stm32f401_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, TIM2>
{
    static constexpr periph_t P = TIM2;
    using T = stm32f401_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, TIM2>
{
    static constexpr periph_t P = TIM2;
    using T = stm32f401_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, TIM2>
{
    static constexpr periph_t P = TIM2;
    using T = stm32f401_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, TIM2>
{
    static constexpr periph_t P = TIM2;
    using T = stm32f401_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, TIM2>
{
    static constexpr periph_t P = TIM2;
    using T = stm32f401_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F401, TIM3>
{
    static constexpr periph_t P = TIM3;
    using T = stm32f401_tim3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F401, TIM4>
{
    static constexpr periph_t P = TIM4;
    using T = stm32f401_tim3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, TIM3>
{
    static constexpr periph_t P = TIM3;
    using T = stm32f401_tim3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, TIM4>
{
    static constexpr periph_t P = TIM4;
    using T = stm32f401_tim3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, TIM3>
{
    static constexpr periph_t P = TIM3;
    using T = stm32f401_tim3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, TIM4>
{
    static constexpr periph_t P = TIM4;
    using T = stm32f401_tim3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F411, TIM3>
{
    static constexpr periph_t P = TIM3;
    using T = stm32f401_tim3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F411, TIM4>
{
    static constexpr periph_t P = TIM4;
    using T = stm32f401_tim3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, TIM3>
{
    static constexpr periph_t P = TIM3;
    using T = stm32f401_tim3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, TIM4>
{
    static constexpr periph_t P = TIM4;
    using T = stm32f401_tim3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, TIM3>
{
    static constexpr periph_t P = TIM3;
    using T = stm32f401_tim3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, TIM4>
{
    static constexpr periph_t P = TIM4;
    using T = stm32f401_tim3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, TIM3>
{
    static constexpr periph_t P = TIM3;
    using T = stm32f401_tim3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, TIM4>
{
    static constexpr periph_t P = TIM4;
    using T = stm32f401_tim3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, TIM3>
{
    static constexpr periph_t P = TIM3;
    using T = stm32f401_tim3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, TIM4>
{
    static constexpr periph_t P = TIM4;
    using T = stm32f401_tim3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, TIM3>
{
    static constexpr periph_t P = TIM3;
    using T = stm32f401_tim3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, TIM4>
{
    static constexpr periph_t P = TIM4;
    using T = stm32f401_tim3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, TIM3>
{
    static constexpr periph_t P = TIM3;
    using T = stm32f401_tim3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, TIM4>
{
    static constexpr periph_t P = TIM4;
    using T = stm32f401_tim3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F401, TIM5>
{
    static constexpr periph_t P = TIM5;
    using T = stm32f401_tim5_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, TIM5>
{
    static constexpr periph_t P = TIM5;
    using T = stm32f401_tim5_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, TIM5>
{
    static constexpr periph_t P = TIM5;
    using T = stm32f401_tim5_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F410, TIM5>
{
    static constexpr periph_t P = TIM5;
    using T = stm32f401_tim5_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F411, TIM5>
{
    static constexpr periph_t P = TIM5;
    using T = stm32f401_tim5_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, TIM5>
{
    static constexpr periph_t P = TIM5;
    using T = stm32f401_tim5_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, TIM5>
{
    static constexpr periph_t P = TIM5;
    using T = stm32f401_tim5_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, TIM5>
{
    static constexpr periph_t P = TIM5;
    using T = stm32f401_tim5_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, TIM5>
{
    static constexpr periph_t P = TIM5;
    using T = stm32f401_tim5_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, TIM5>
{
    static constexpr periph_t P = TIM5;
    using T = stm32f401_tim5_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, TIM5>
{
    static constexpr periph_t P = TIM5;
    using T = stm32f401_tim5_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, TIM6>
{
    static constexpr periph_t P = TIM6;
    using T = stm32f405_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, TIM7>
{
    static constexpr periph_t P = TIM7;
    using T = stm32f405_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, TIM6>
{
    static constexpr periph_t P = TIM6;
    using T = stm32f405_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, TIM7>
{
    static constexpr periph_t P = TIM7;
    using T = stm32f405_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F410, TIM6>
{
    static constexpr periph_t P = TIM6;
    using T = stm32f405_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, TIM6>
{
    static constexpr periph_t P = TIM6;
    using T = stm32f405_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, TIM7>
{
    static constexpr periph_t P = TIM7;
    using T = stm32f405_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, TIM6>
{
    static constexpr periph_t P = TIM6;
    using T = stm32f405_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, TIM7>
{
    static constexpr periph_t P = TIM7;
    using T = stm32f405_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, TIM6>
{
    static constexpr periph_t P = TIM6;
    using T = stm32f405_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, TIM7>
{
    static constexpr periph_t P = TIM7;
    using T = stm32f405_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, TIM6>
{
    static constexpr periph_t P = TIM6;
    using T = stm32f405_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, TIM7>
{
    static constexpr periph_t P = TIM7;
    using T = stm32f405_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, TIM6>
{
    static constexpr periph_t P = TIM6;
    using T = stm32f412_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, TIM7>
{
    static constexpr periph_t P = TIM7;
    using T = stm32f412_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, TIM6>
{
    static constexpr periph_t P = TIM6;
    using T = stm32f412_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, TIM7>
{
    static constexpr periph_t P = TIM7;
    using T = stm32f412_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F401, TIM9>
{
    static constexpr periph_t P = TIM9;
    using T = stm32f401_tim9_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, TIM12>
{
    static constexpr periph_t P = TIM12;
    using T = stm32f401_tim9_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, TIM9>
{
    static constexpr periph_t P = TIM9;
    using T = stm32f401_tim9_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, TIM12>
{
    static constexpr periph_t P = TIM12;
    using T = stm32f401_tim9_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, TIM9>
{
    static constexpr periph_t P = TIM9;
    using T = stm32f401_tim9_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F410, TIM9>
{
    static constexpr periph_t P = TIM9;
    using T = stm32f401_tim9_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F411, TIM9>
{
    static constexpr periph_t P = TIM9;
    using T = stm32f401_tim9_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, TIM9>
{
    static constexpr periph_t P = TIM9;
    using T = stm32f401_tim9_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, TIM9>
{
    static constexpr periph_t P = TIM9;
    using T = stm32f401_tim9_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, TIM12>
{
    static constexpr periph_t P = TIM12;
    using T = stm32f401_tim9_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, TIM9>
{
    static constexpr periph_t P = TIM9;
    using T = stm32f401_tim9_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, TIM12>
{
    static constexpr periph_t P = TIM12;
    using T = stm32f401_tim9_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, TIM9>
{
    static constexpr periph_t P = TIM9;
    using T = stm32f401_tim9_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, TIM12>
{
    static constexpr periph_t P = TIM12;
    using T = stm32f401_tim9_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, TIM9>
{
    static constexpr periph_t P = TIM9;
    using T = stm32f401_tim9_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, TIM12>
{
    static constexpr periph_t P = TIM12;
    using T = stm32f469_tim9_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, TIM9>
{
    static constexpr periph_t P = TIM9;
    using T = stm32f469_tim9_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F401, TIM10>
{
    static constexpr periph_t P = TIM10;
    using T = stm32f401_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, TIM10>
{
    static constexpr periph_t P = TIM10;
    using T = stm32f401_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, TIM13>
{
    static constexpr periph_t P = TIM13;
    using T = stm32f401_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, TIM14>
{
    static constexpr periph_t P = TIM14;
    using T = stm32f401_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, TIM10>
{
    static constexpr periph_t P = TIM10;
    using T = stm32f401_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, TIM13>
{
    static constexpr periph_t P = TIM13;
    using T = stm32f401_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, TIM14>
{
    static constexpr periph_t P = TIM14;
    using T = stm32f401_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F411, TIM10>
{
    static constexpr periph_t P = TIM10;
    using T = stm32f401_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, TIM10>
{
    static constexpr periph_t P = TIM10;
    using T = stm32f401_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, TIM10>
{
    static constexpr periph_t P = TIM10;
    using T = stm32f401_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, TIM10>
{
    static constexpr periph_t P = TIM10;
    using T = stm32f401_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, TIM13>
{
    static constexpr periph_t P = TIM13;
    using T = stm32f401_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, TIM14>
{
    static constexpr periph_t P = TIM14;
    using T = stm32f401_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, TIM10>
{
    static constexpr periph_t P = TIM10;
    using T = stm32f401_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, TIM13>
{
    static constexpr periph_t P = TIM13;
    using T = stm32f401_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, TIM14>
{
    static constexpr periph_t P = TIM14;
    using T = stm32f401_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, TIM10>
{
    static constexpr periph_t P = TIM10;
    using T = stm32f401_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, TIM13>
{
    static constexpr periph_t P = TIM13;
    using T = stm32f401_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, TIM14>
{
    static constexpr periph_t P = TIM14;
    using T = stm32f401_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, TIM10>
{
    static constexpr periph_t P = TIM10;
    using T = stm32f401_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, TIM13>
{
    static constexpr periph_t P = TIM13;
    using T = stm32f401_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, TIM14>
{
    static constexpr periph_t P = TIM14;
    using T = stm32f401_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F401, TIM11>
{
    static constexpr periph_t P = TIM11;
    using T = stm32f401_tim11_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, TIM11>
{
    static constexpr periph_t P = TIM11;
    using T = stm32f401_tim11_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, TIM11>
{
    static constexpr periph_t P = TIM11;
    using T = stm32f401_tim11_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F410, TIM11>
{
    static constexpr periph_t P = TIM11;
    using T = stm32f401_tim11_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F411, TIM11>
{
    static constexpr periph_t P = TIM11;
    using T = stm32f401_tim11_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, TIM11>
{
    static constexpr periph_t P = TIM11;
    using T = stm32f401_tim11_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, TIM11>
{
    static constexpr periph_t P = TIM11;
    using T = stm32f401_tim11_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, TIM11>
{
    static constexpr periph_t P = TIM11;
    using T = stm32f401_tim11_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, TIM11>
{
    static constexpr periph_t P = TIM11;
    using T = stm32f401_tim11_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, TIM11>
{
    static constexpr periph_t P = TIM11;
    using T = stm32f401_tim11_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, TIM11>
{
    static constexpr periph_t P = TIM11;
    using T = stm32f401_tim11_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, TIM12>
{
    static constexpr periph_t P = TIM12;
    using T = stm32f412_tim12_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, TIM12>
{
    static constexpr periph_t P = TIM12;
    using T = stm32f412_tim12_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, TIM13>
{
    static constexpr periph_t P = TIM13;
    using T = stm32f412_tim13_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, TIM14>
{
    static constexpr periph_t P = TIM14;
    using T = stm32f412_tim13_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, TIM13>
{
    static constexpr periph_t P = TIM13;
    using T = stm32f412_tim13_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, TIM14>
{
    static constexpr periph_t P = TIM14;
    using T = stm32f412_tim13_t;
    static T& V;
};

using tim1_t = peripheral_t<svd, TIM1>;
using tim10_t = peripheral_t<svd, TIM10>;
using tim11_t = peripheral_t<svd, TIM11>;
using tim12_t = peripheral_t<svd, TIM12>;
using tim13_t = peripheral_t<svd, TIM13>;
using tim14_t = peripheral_t<svd, TIM14>;
using tim2_t = peripheral_t<svd, TIM2>;
using tim3_t = peripheral_t<svd, TIM3>;
using tim4_t = peripheral_t<svd, TIM4>;
using tim5_t = peripheral_t<svd, TIM5>;
using tim6_t = peripheral_t<svd, TIM6>;
using tim7_t = peripheral_t<svd, TIM7>;
using tim8_t = peripheral_t<svd, TIM8>;
using tim9_t = peripheral_t<svd, TIM9>;

template<int INST> struct tim_traits {};

template<> struct tim_traits<1>
{
    using tim = tim1_t;
    static constexpr signal_t BKIN = TIM1_BKIN;
    static constexpr signal_t CH1 = TIM1_CH1;
    static constexpr signal_t CH1N = TIM1_CH1N;
    static constexpr signal_t CH2 = TIM1_CH2;
    static constexpr signal_t CH2N = TIM1_CH2N;
    static constexpr signal_t CH3 = TIM1_CH3;
    static constexpr signal_t CH3N = TIM1_CH3N;
    static constexpr signal_t CH4 = TIM1_CH4;
    static constexpr signal_t ETR = TIM1_ETR;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB2ENR |= RCC::T::APB2ENR_TIM1EN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB2ENR &= ~RCC::T::APB2ENR_TIM1EN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB2RSTR |= RCC::T::APB2RSTR_TIM1RST;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }
};

template<> struct tim_traits<10>
{
    using tim = tim10_t;
    static constexpr signal_t CH1 = TIM10_CH1;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB2ENR |= RCC::T::APB2ENR_TIM10EN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB2ENR &= ~RCC::T::APB2ENR_TIM10EN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB2RSTR |= RCC::T::APB2RSTR_TIM10RST;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }
};

template<> struct tim_traits<11>
{
    using tim = tim11_t;
    static constexpr signal_t CH1 = TIM11_CH1;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB2ENR |= RCC::T::APB2ENR_TIM11EN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB2ENR &= ~RCC::T::APB2ENR_TIM11EN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB2RSTR |= RCC::T::APB2RSTR_TIM11RST;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }
};

template<> struct tim_traits<12>
{
    using tim = tim12_t;
    static constexpr signal_t CH1 = TIM12_CH1;
    static constexpr signal_t CH2 = TIM12_CH2;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR |= RCC::T::APB1ENR_TIM12EN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR &= ~RCC::T::APB1ENR_TIM12EN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR |= RCC::T::APB1RSTR_TIM12RST;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }
};

template<> struct tim_traits<13>
{
    using tim = tim13_t;
    static constexpr signal_t CH1 = TIM13_CH1;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR |= RCC::T::APB1ENR_TIM13EN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR &= ~RCC::T::APB1ENR_TIM13EN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR |= RCC::T::APB1RSTR_TIM13RST;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }
};

template<> struct tim_traits<14>
{
    using tim = tim14_t;
    static constexpr signal_t CH1 = TIM14_CH1;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR |= RCC::T::APB1ENR_TIM14EN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR &= ~RCC::T::APB1ENR_TIM14EN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR |= RCC::T::APB1RSTR_TIM14RST;
        __asm volatile ("dsb"); // dm00037591 2.1.13
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

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR |= RCC::T::APB1ENR_TIM2EN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR &= ~RCC::T::APB1ENR_TIM2EN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR |= RCC::T::APB1RSTR_TIM2RST;
        __asm volatile ("dsb"); // dm00037591 2.1.13
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

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR |= RCC::T::APB1ENR_TIM3EN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR &= ~RCC::T::APB1ENR_TIM3EN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR |= RCC::T::APB1RSTR_TIM3RST;
        __asm volatile ("dsb"); // dm00037591 2.1.13
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

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR |= RCC::T::APB1ENR_TIM4EN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR &= ~RCC::T::APB1ENR_TIM4EN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR |= RCC::T::APB1RSTR_TIM4RST;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }
};

template<> struct tim_traits<5>
{
    using tim = tim5_t;
    static constexpr signal_t CH1 = TIM5_CH1;
    static constexpr signal_t CH2 = TIM5_CH2;
    static constexpr signal_t CH3 = TIM5_CH3;
    static constexpr signal_t CH4 = TIM5_CH4;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR |= RCC::T::APB1ENR_TIM5EN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR &= ~RCC::T::APB1ENR_TIM5EN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR |= RCC::T::APB1RSTR_TIM5RST;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }
};

template<> struct tim_traits<6>
{
    using tim = tim6_t;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR |= RCC::T::APB1ENR_TIM6EN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR &= ~RCC::T::APB1ENR_TIM6EN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR |= RCC::T::APB1RSTR_TIM6RST;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }
};

template<> struct tim_traits<7>
{
    using tim = tim7_t;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR |= RCC::T::APB1ENR_TIM7EN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR &= ~RCC::T::APB1ENR_TIM7EN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR |= RCC::T::APB1RSTR_TIM7RST;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }
};

template<> struct tim_traits<8>
{
    using tim = tim8_t;
    static constexpr signal_t BKIN = TIM8_BKIN;
    static constexpr signal_t CH1 = TIM8_CH1;
    static constexpr signal_t CH1N = TIM8_CH1N;
    static constexpr signal_t CH2 = TIM8_CH2;
    static constexpr signal_t CH2N = TIM8_CH2N;
    static constexpr signal_t CH3 = TIM8_CH3;
    static constexpr signal_t CH3N = TIM8_CH3N;
    static constexpr signal_t CH4 = TIM8_CH4;
    static constexpr signal_t ETR = TIM8_ETR;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB2ENR |= RCC::T::APB2ENR_TIM8EN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB2ENR &= ~RCC::T::APB2ENR_TIM8EN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB2RSTR |= RCC::T::APB2RSTR_TIM8RST;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }
};

template<> struct tim_traits<9>
{
    using tim = tim9_t;
    static constexpr signal_t CH1 = TIM9_CH1;
    static constexpr signal_t CH2 = TIM9_CH2;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB2ENR |= RCC::T::APB2ENR_TIM9EN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB2ENR &= ~RCC::T::APB2ENR_TIM9EN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB2RSTR |= RCC::T::APB2RSTR_TIM9RST;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }
};
