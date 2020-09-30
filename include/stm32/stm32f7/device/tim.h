#pragma once

////
//
//      STM32F7 TIM peripherals
//
///

// TIM1: Advanced-timers

struct stm32f722_tim1_t
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
    volatile uint32_t CCMR3; // capture/compare mode register 3 (output mode)
    volatile uint32_t CCR5; // capture/compare register 5
    volatile uint32_t CCR6; // capture/compare register 6

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0x3> CR1_CKD; // Clock division
    static constexpr uint32_t CR1_ARPE = 0x80; // Auto-reload preload enable
    typedef bit_field_t<5, 0x3> CR1_CMS; // Center-aligned mode selection
    static constexpr uint32_t CR1_DIR = 0x10; // Direction
    static constexpr uint32_t CR1_OPM = 0x8; // One-pulse mode
    static constexpr uint32_t CR1_URS = 0x4; // Update request source
    static constexpr uint32_t CR1_UDIS = 0x2; // Update disable
    static constexpr uint32_t CR1_CEN = 0x1; // Counter enable
    static constexpr uint32_t CR1_UIFREMAP = 0x800; // UIF status bit remapping

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
    typedef bit_field_t<20, 0xf> CR2_MMS2; // Master mode selection 2
    static constexpr uint32_t CR2_OIS6 = 0x40000; // Output Idle state 6 (OC6 output)
    static constexpr uint32_t CR2_OIS5 = 0x10000; // Output Idle state 5 (OC5 output)

    static constexpr uint32_t SMCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SMCR_SMS_3 = 0x10000; // Slave model selection - bit[3]
    static constexpr uint32_t SMCR_ETP = 0x8000; // External trigger polarity
    static constexpr uint32_t SMCR_ECE = 0x4000; // External clock enable
    typedef bit_field_t<12, 0x3> SMCR_ETPS; // External trigger prescaler
    typedef bit_field_t<8, 0xf> SMCR_ETF; // External trigger filter
    static constexpr uint32_t SMCR_MSM = 0x80; // Master/Slave mode
    typedef bit_field_t<4, 0x7> SMCR_TS; // Trigger selection
    typedef bit_field_t<0, 0x7> SMCR_SMS; // Slave mode selection - bit[2:0]

    static constexpr uint32_t DIER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DIER_TDE = 0x4000; // Trigger DMA request enable
    static constexpr uint32_t DIER_COMDE = 0x2000; // COM DMA request enable
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
    static constexpr uint32_t DIER_BIE = 0x80; // Break interrupt enable
    static constexpr uint32_t DIER_COMIE = 0x20; // COM interrupt enable

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
    static constexpr uint32_t SR_B2IF = 0x100; // Break 2 interrupt flag

    static constexpr uint32_t EGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t EGR_BG = 0x80; // Break generation
    static constexpr uint32_t EGR_TG = 0x40; // Trigger generation
    static constexpr uint32_t EGR_COMG = 0x20; // Capture/Compare control update generation
    static constexpr uint32_t EGR_CC4G = 0x10; // Capture/compare 4 generation
    static constexpr uint32_t EGR_CC3G = 0x8; // Capture/compare 3 generation
    static constexpr uint32_t EGR_CC2G = 0x4; // Capture/compare 2 generation
    static constexpr uint32_t EGR_CC1G = 0x2; // Capture/compare 1 generation
    static constexpr uint32_t EGR_UG = 0x1; // Update generation
    static constexpr uint32_t EGR_B2G = 0x100; // Break 2 generation

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
    static constexpr uint32_t CCMR1_OC2M_3 = 0x1000000; // Output Compare 2 mode - bit 3
    static constexpr uint32_t CCMR1_OC1M_3 = 0x10000; // Output Compare 1 mode - bit 3

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
    static constexpr uint32_t CCMR2_OC4M_3 = 0x1000000; // Output Compare 4 mode - bit 3
    static constexpr uint32_t CCMR2_OC3M_3 = 0x10000; // Output Compare 3 mode - bit 3

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
    static constexpr uint32_t CCER_CC6P = 0x200000; // Capture/Compare 6 output polarity
    static constexpr uint32_t CCER_CC6E = 0x100000; // Capture/Compare 6 output enable
    static constexpr uint32_t CCER_CC5P = 0x20000; // Capture/Compare 5 output polarity
    static constexpr uint32_t CCER_CC5E = 0x10000; // Capture/Compare 5 output enable
    static constexpr uint32_t CCER_CC4NP = 0x8000; // Capture/Compare 4 complementary output polarity

    static constexpr uint32_t CNT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNT_CNT; // counter value
    static constexpr uint32_t CNT_UIFCPY = 0x80000000; // UIF copy

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
    static constexpr uint32_t BDTR_BK2P = 0x2000000; // Break 2 polarity
    static constexpr uint32_t BDTR_BK2E = 0x1000000; // Break 2 enable
    typedef bit_field_t<20, 0xf> BDTR_BK2F; // Break 2 filter
    typedef bit_field_t<16, 0xf> BDTR_BKF; // Break filter

    static constexpr uint32_t DCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0x1f> DCR_DBL; // DMA burst length
    typedef bit_field_t<0, 0x1f> DCR_DBA; // DMA base address

    static constexpr uint32_t DMAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DMAR_DMAB; // DMA register for burst accesses


    static constexpr uint32_t CCMR3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCMR3_OC5FE = 0x4; // Output compare 5 fast enable
    static constexpr uint32_t CCMR3_OC5PE = 0x8; // Output compare 5 preload enable
    typedef bit_field_t<4, 0x7> CCMR3_OC5M; // Output compare 5 mode
    static constexpr uint32_t CCMR3_OC5CE = 0x80; // Output compare 5 clear enable
    static constexpr uint32_t CCMR3_OC6FE = 0x400; // Output compare 6 fast enable
    static constexpr uint32_t CCMR3_OC6PE = 0x800; // Output compare 6 preload enable
    typedef bit_field_t<12, 0x7> CCMR3_OC6M; // Output compare 6 mode
    static constexpr uint32_t CCMR3_OC6CE = 0x8000; // Output compare 6 clear enable
    static constexpr uint32_t CCMR3_OC5M3 = 0x10000; // Output Compare 5 mode
    static constexpr uint32_t CCMR3_OC6M3 = 0x1000000; // Output Compare 6 mode

    static constexpr uint32_t CCR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR5_CCR5; // Capture/Compare 5 value
    static constexpr uint32_t CCR5_GC5C1 = 0x20000000; // Group Channel 5 and Channel 1
    static constexpr uint32_t CCR5_GC5C2 = 0x40000000; // Group Channel 5 and Channel 2
    static constexpr uint32_t CCR5_GC5C3 = 0x80000000; // Group Channel 5 and Channel 3

    static constexpr uint32_t CCR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR6_CCR6; // Capture/Compare 6 value
};

// TIM1: Advanced-timers

struct stm32f745_tim1_t
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
    volatile uint32_t CCMR3; // capture/compare mode register 3 (output mode)
    volatile uint32_t CCR5; // capture/compare register 5
    volatile uint32_t CRR6; // capture/compare register 6

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
    static constexpr uint32_t SMCR_SMS_3 = 0x10000; // Slave model selection - bit[3]
    static constexpr uint32_t SMCR_ETP = 0x8000; // External trigger polarity
    static constexpr uint32_t SMCR_ECE = 0x4000; // External clock enable
    typedef bit_field_t<12, 0x3> SMCR_ETPS; // External trigger prescaler
    typedef bit_field_t<8, 0xf> SMCR_ETF; // External trigger filter
    static constexpr uint32_t SMCR_MSM = 0x80; // Master/Slave mode
    typedef bit_field_t<4, 0x7> SMCR_TS; // Trigger selection
    typedef bit_field_t<0, 0x7> SMCR_SMS; // Slave mode selection - bit[2:0]

    static constexpr uint32_t DIER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DIER_TDE = 0x4000; // Trigger DMA request enable
    static constexpr uint32_t DIER_COMDE = 0x2000; // COM DMA request enable
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
    static constexpr uint32_t DIER_BIE = 0x80; // Break interrupt enable
    static constexpr uint32_t DIER_COMIE = 0x20; // COM interrupt enable

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


    static constexpr uint32_t CCMR3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCMR3_OC5FE = 0x4; // Output compare 5 fast enable
    static constexpr uint32_t CCMR3_OC5PE = 0x8; // Output compare 5 preload enable
    typedef bit_field_t<4, 0x7> CCMR3_OC5M; // Output compare 5 mode
    static constexpr uint32_t CCMR3_OC5CE = 0x80; // Output compare 5 clear enable
    static constexpr uint32_t CCMR3_OC6FE = 0x400; // Output compare 6 fast enable
    static constexpr uint32_t CCMR3_OC6PE = 0x800; // Output compare 6 preload enable
    typedef bit_field_t<12, 0x7> CCMR3_OC6M; // Output compare 6 mode
    static constexpr uint32_t CCMR3_OC6CE = 0x8000; // Output compare 6 clear enable
    static constexpr uint32_t CCMR3_OC5M3 = 0x10000; // Output Compare 5 mode
    static constexpr uint32_t CCMR3_OC6M3 = 0x1000000; // Output Compare 6 mode

    static constexpr uint32_t CCR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR5_CCR5; // Capture/Compare 5 value
    static constexpr uint32_t CCR5_GC5C1 = 0x20000000; // Group Channel 5 and Channel 1
    static constexpr uint32_t CCR5_GC5C2 = 0x40000000; // Group Channel 5 and Channel 2
    static constexpr uint32_t CCR5_GC5C3 = 0x80000000; // Group Channel 5 and Channel 3

    static constexpr uint32_t CRR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CRR6_CCR6; // Capture/Compare 6 value
};

// TIM1: Advanced-timers

struct stm32f767_tim1_t
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
    volatile uint32_t CCMR3; // capture/compare mode register 3 (output mode)
    volatile uint32_t CCR5; // capture/compare register 5
    volatile uint32_t CRR6; // capture/compare register 6
    volatile uint32_t AF1; // alternate function option register 1
    volatile uint32_t AF2; // alternate function option register 2

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
    static constexpr uint32_t DIER_TIE = 0x40; // Trigger interrupt enable
    static constexpr uint32_t DIER_CC4IE = 0x10; // Capture/Compare 4 interrupt enable
    static constexpr uint32_t DIER_CC3IE = 0x8; // Capture/Compare 3 interrupt enable
    static constexpr uint32_t DIER_CC2IE = 0x4; // Capture/Compare 2 interrupt enable
    static constexpr uint32_t DIER_CC1IE = 0x2; // Capture/Compare 1 interrupt enable
    static constexpr uint32_t DIER_UIE = 0x1; // Update interrupt enable
    static constexpr uint32_t DIER_BIE = 0x80; // Break interrupt enable
    static constexpr uint32_t DIER_COMIE = 0x20; // COM interrupt enable

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

    static constexpr uint32_t DCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0x1f> DCR_DBL; // DMA burst length
    typedef bit_field_t<0, 0x1f> DCR_DBA; // DMA base address

    static constexpr uint32_t DMAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DMAR_DMAB; // DMA register for burst accesses


    static constexpr uint32_t CCMR3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCMR3_OC5FE = 0x4; // Output compare 5 fast enable
    static constexpr uint32_t CCMR3_OC5PE = 0x8; // Output compare 5 preload enable
    typedef bit_field_t<4, 0x7> CCMR3_OC5M; // Output compare 5 mode
    static constexpr uint32_t CCMR3_OC5CE = 0x80; // Output compare 5 clear enable
    static constexpr uint32_t CCMR3_OC6FE = 0x400; // Output compare 6 fast enable
    static constexpr uint32_t CCMR3_OC6PE = 0x800; // Output compare 6 preload enable
    typedef bit_field_t<12, 0x7> CCMR3_OC6M; // Output compare 6 mode
    static constexpr uint32_t CCMR3_OC6CE = 0x8000; // Output compare 6 clear enable
    static constexpr uint32_t CCMR3_OC5M3 = 0x10000; // Output Compare 5 mode
    static constexpr uint32_t CCMR3_OC6M3 = 0x1000000; // Output Compare 6 mode

    static constexpr uint32_t CCR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR5_CCR5; // Capture/Compare 5 value
    static constexpr uint32_t CCR5_GC5C1 = 0x20000000; // Group Channel 5 and Channel 1
    static constexpr uint32_t CCR5_GC5C2 = 0x40000000; // Group Channel 5 and Channel 2
    static constexpr uint32_t CCR5_GC5C3 = 0x80000000; // Group Channel 5 and Channel 3

    static constexpr uint32_t CRR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CRR6_CCR6; // Capture/Compare 6 value

    static constexpr uint32_t AF1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AF1_BKINE = 0x1; // BRK BKIN input enable
    static constexpr uint32_t AF1_BKDFBKE = 0x100; // BRK DFSDM_BREAK[0] enable
    static constexpr uint32_t AF1_BKINP = 0x200; // BRK BKIN input polarity

    static constexpr uint32_t AF2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AF2_BK2INE = 0x1; // BRK2 BKIN input enable
    static constexpr uint32_t AF2_BK2DFBKE = 0x100; // BRK2 DFSDM_BREAK enable
    static constexpr uint32_t AF2_BK2INP = 0x200; // BRK2 BKIN2 input polarity
};

// TIM1: Advanced-timers

struct stm32f768_tim1_t
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
    volatile uint32_t CCMR3; // capture/compare mode register 3 (output mode)
    volatile uint32_t CCR5; // capture/compare register 5
    volatile uint32_t CRR6; // capture/compare register 6

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
    static constexpr uint32_t DIER_TIE = 0x40; // Trigger interrupt enable
    static constexpr uint32_t DIER_CC4IE = 0x10; // Capture/Compare 4 interrupt enable
    static constexpr uint32_t DIER_CC3IE = 0x8; // Capture/Compare 3 interrupt enable
    static constexpr uint32_t DIER_CC2IE = 0x4; // Capture/Compare 2 interrupt enable
    static constexpr uint32_t DIER_CC1IE = 0x2; // Capture/Compare 1 interrupt enable
    static constexpr uint32_t DIER_UIE = 0x1; // Update interrupt enable
    static constexpr uint32_t DIER_BIE = 0x80; // Break interrupt enable
    static constexpr uint32_t DIER_COMIE = 0x20; // COM interrupt enable

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


    static constexpr uint32_t CCMR3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCMR3_OC5FE = 0x4; // Output compare 5 fast enable
    static constexpr uint32_t CCMR3_OC5PE = 0x8; // Output compare 5 preload enable
    typedef bit_field_t<4, 0x7> CCMR3_OC5M; // Output compare 5 mode
    static constexpr uint32_t CCMR3_OC5CE = 0x80; // Output compare 5 clear enable
    static constexpr uint32_t CCMR3_OC6FE = 0x400; // Output compare 6 fast enable
    static constexpr uint32_t CCMR3_OC6PE = 0x800; // Output compare 6 preload enable
    typedef bit_field_t<12, 0x7> CCMR3_OC6M; // Output compare 6 mode
    static constexpr uint32_t CCMR3_OC6CE = 0x8000; // Output compare 6 clear enable
    static constexpr uint32_t CCMR3_OC5M3 = 0x10000; // Output Compare 5 mode
    static constexpr uint32_t CCMR3_OC6M3 = 0x1000000; // Output Compare 6 mode

    static constexpr uint32_t CCR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR5_CCR5; // Capture/Compare 5 value
    static constexpr uint32_t CCR5_GC5C1 = 0x20000000; // Group Channel 5 and Channel 1
    static constexpr uint32_t CCR5_GC5C2 = 0x40000000; // Group Channel 5 and Channel 2
    static constexpr uint32_t CCR5_GC5C3 = 0x80000000; // Group Channel 5 and Channel 3

    static constexpr uint32_t CRR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CRR6_CCR6; // Capture/Compare 6 value
};

// TIM2: General purpose timers

struct stm32f722_tim2_t
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
    volatile uint32_t OR; // TIM2 option register 1

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0x3> CR1_CKD; // Clock division
    static constexpr uint32_t CR1_ARPE = 0x80; // Auto-reload preload enable
    typedef bit_field_t<5, 0x3> CR1_CMS; // Center-aligned mode selection
    static constexpr uint32_t CR1_DIR = 0x10; // Direction
    static constexpr uint32_t CR1_OPM = 0x8; // One-pulse mode
    static constexpr uint32_t CR1_URS = 0x4; // Update request source
    static constexpr uint32_t CR1_UDIS = 0x2; // Update disable
    static constexpr uint32_t CR1_CEN = 0x1; // Counter enable
    static constexpr uint32_t CR1_UIFREMAP = 0x800; // UIF status bit remapping

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR2_TI1S = 0x80; // TI1 selection
    typedef bit_field_t<4, 0x7> CR2_MMS; // Master mode selection
    static constexpr uint32_t CR2_CCDS = 0x8; // Capture/compare DMA selection

    static constexpr uint32_t SMCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> SMCR_SMS; // Slave mode selection
    typedef bit_field_t<4, 0x7> SMCR_TS; // Trigger selection
    static constexpr uint32_t SMCR_MSM = 0x80; // Master/Slave mode
    typedef bit_field_t<8, 0xf> SMCR_ETF; // External trigger filter
    typedef bit_field_t<12, 0x3> SMCR_ETPS; // External trigger prescaler
    static constexpr uint32_t SMCR_ECE = 0x4000; // External clock enable
    static constexpr uint32_t SMCR_ETP = 0x8000; // External trigger polarity
    static constexpr uint32_t SMCR_SMS_3 = 0x10000; // Slave model selection - bit[3]

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
    static constexpr uint32_t CCMR1_OC2M_3 = 0x1000000; // Output Compare 2 mode - bit 3
    static constexpr uint32_t CCMR1_OC1M_3 = 0x10000; // Output Compare 1 mode - bit 3

    static constexpr uint32_t CCMR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCMR2_O24CE = 0x8000; // O24CE
    typedef bit_field_t<12, 0x7> CCMR2_OC4M; // OC4M
    static constexpr uint32_t CCMR2_OC4PE = 0x800; // OC4PE
    static constexpr uint32_t CCMR2_OC4FE = 0x400; // OC4FE
    typedef bit_field_t<8, 0x3> CCMR2_CC4S; // CC4S
    static constexpr uint32_t CCMR2_OC3CE = 0x80; // OC3CE
    typedef bit_field_t<4, 0x7> CCMR2_OC3M; // OC3M
    static constexpr uint32_t CCMR2_OC3PE = 0x8; // OC3PE
    static constexpr uint32_t CCMR2_OC3FE = 0x4; // OC3FE
    typedef bit_field_t<0, 0x3> CCMR2_CC3S; // CC3S
    static constexpr uint32_t CCMR2_OC4M_3 = 0x1000000; // Output Compare 2 mode - bit 3
    static constexpr uint32_t CCMR2_OC3M_3 = 0x10000; // Output Compare 1 mode - bit 3

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
    typedef bit_field_t<10, 0x3> OR_ITR1_RMP; // Internal trigger 1 remap
};

// TIM2: General purpose timers

struct stm32f730_tim2_t
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
    volatile uint32_t OR; // TIM2 option register 1

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0x3> CR1_CKD; // Clock division
    static constexpr uint32_t CR1_ARPE = 0x80; // Auto-reload preload enable
    typedef bit_field_t<5, 0x3> CR1_CMS; // Center-aligned mode selection
    static constexpr uint32_t CR1_DIR = 0x10; // Direction
    static constexpr uint32_t CR1_OPM = 0x8; // One-pulse mode
    static constexpr uint32_t CR1_URS = 0x4; // Update request source
    static constexpr uint32_t CR1_UDIS = 0x2; // Update disable
    static constexpr uint32_t CR1_CEN = 0x1; // Counter enable
    static constexpr uint32_t CR1_UIFREMAP = 0x800; // UIF status bit remapping

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR2_TI1S = 0x80; // TI1 selection
    typedef bit_field_t<4, 0x7> CR2_MMS; // Master mode selection
    static constexpr uint32_t CR2_CCDS = 0x8; // Capture/compare DMA selection

    static constexpr uint32_t SMCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> SMCR_SMS; // Slave mode selection
    typedef bit_field_t<4, 0x7> SMCR_TS; // Trigger selection
    static constexpr uint32_t SMCR_MSM = 0x80; // Master/Slave mode
    typedef bit_field_t<8, 0xf> SMCR_ETF; // External trigger filter
    typedef bit_field_t<12, 0x3> SMCR_ETPS; // External trigger prescaler
    static constexpr uint32_t SMCR_ECE = 0x4000; // External clock enable
    static constexpr uint32_t SMCR_ETP = 0x8000; // External trigger polarity
    static constexpr uint32_t SMCR_SMS_3 = 0x10000; // Slave model selection - bit[3]

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
    static constexpr uint32_t CCMR1_OC2M_3 = 0x1000000; // Output Compare 2 mode - bit 3
    static constexpr uint32_t CCMR1_OC1M_3 = 0x10000; // Output Compare 1 mode - bit 3

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
    static constexpr uint32_t CCMR2_OC4M_3 = 0x1000000; // Output Compare 2 mode - bit 3
    static constexpr uint32_t CCMR2_OC3M_3 = 0x10000; // Output Compare 1 mode - bit 3

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
    typedef bit_field_t<10, 0x3> OR_ITR1_RMP; // Internal trigger 1 remap
};

// TIM2: General purpose timers

struct stm32f745_tim2_t
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
    volatile uint32_t OR1; // TIM2 option register 1
    reserved_t<0x3> _0x54;
    volatile uint32_t OR2; // TIM2 option register 2

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
    typedef bit_field_t<0, 0x7> SMCR_SMS; // Slave mode selection
    typedef bit_field_t<4, 0x7> SMCR_TS; // Trigger selection
    static constexpr uint32_t SMCR_MSM = 0x80; // Master/Slave mode
    typedef bit_field_t<8, 0xf> SMCR_ETF; // External trigger filter
    typedef bit_field_t<12, 0x3> SMCR_ETPS; // External trigger prescaler
    static constexpr uint32_t SMCR_ECE = 0x4000; // External clock enable
    static constexpr uint32_t SMCR_ETP = 0x8000; // External trigger polarity
    static constexpr uint32_t SMCR_SMS_3 = 0x10000; // Slave model selection - bit[3]

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
    static constexpr uint32_t CCMR2_O24CE = 0x8000; // O24CE
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

    static constexpr uint32_t OR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<2, 0x3> OR1_TI4_RMP; // Input Capture 4 remap
    static constexpr uint32_t OR1_ETR1_RMP = 0x2; // External trigger remap
    static constexpr uint32_t OR1_ITR1_RMP = 0x1; // Internal trigger 1 remap


    static constexpr uint32_t OR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<14, 0x7> OR2_ETRSEL; // ETR source selection
};

// TIM2: General purpose timers

struct stm32f767_tim2_t
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
    volatile uint32_t OR1; // TIM2 option register 1
    reserved_t<0x3> _0x54;
    volatile uint32_t OR2; // TIM2 option register 2

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
    static constexpr uint32_t CCMR2_O24CE = 0x8000; // O24CE
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

    static constexpr uint32_t OR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<2, 0x3> OR1_TI4_RMP; // Input Capture 4 remap
    static constexpr uint32_t OR1_ETR1_RMP = 0x2; // External trigger remap
    static constexpr uint32_t OR1_ITR1_RMP = 0x1; // Internal trigger 1 remap


    static constexpr uint32_t OR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<14, 0x7> OR2_ETRSEL; // ETR source selection
};

// TIM3: General purpose timers

struct stm32f722_tim3_t
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
    static constexpr uint32_t CR1_UIFREMAP = 0x800; // UIF status bit remapping

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR2_TI1S = 0x80; // TI1 selection
    typedef bit_field_t<4, 0x7> CR2_MMS; // Master mode selection
    static constexpr uint32_t CR2_CCDS = 0x8; // Capture/compare DMA selection

    static constexpr uint32_t SMCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> SMCR_SMS; // Slave mode selection
    typedef bit_field_t<4, 0x7> SMCR_TS; // Trigger selection
    static constexpr uint32_t SMCR_MSM = 0x80; // Master/Slave mode
    typedef bit_field_t<8, 0xf> SMCR_ETF; // External trigger filter
    typedef bit_field_t<12, 0x3> SMCR_ETPS; // External trigger prescaler
    static constexpr uint32_t SMCR_ECE = 0x4000; // External clock enable
    static constexpr uint32_t SMCR_ETP = 0x8000; // External trigger polarity
    static constexpr uint32_t SMCR_SMS_3 = 0x10000; // Slave model selection - bit[3]

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
    static constexpr uint32_t CCMR1_OC2M_3 = 0x1000000; // Output Compare 2 mode - bit 3
    static constexpr uint32_t CCMR1_OC1M_3 = 0x10000; // Output Compare 1 mode - bit 3

    static constexpr uint32_t CCMR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCMR2_O24CE = 0x8000; // O24CE
    typedef bit_field_t<12, 0x7> CCMR2_OC4M; // OC4M
    static constexpr uint32_t CCMR2_OC4PE = 0x800; // OC4PE
    static constexpr uint32_t CCMR2_OC4FE = 0x400; // OC4FE
    typedef bit_field_t<8, 0x3> CCMR2_CC4S; // CC4S
    static constexpr uint32_t CCMR2_OC3CE = 0x80; // OC3CE
    typedef bit_field_t<4, 0x7> CCMR2_OC3M; // OC3M
    static constexpr uint32_t CCMR2_OC3PE = 0x8; // OC3PE
    static constexpr uint32_t CCMR2_OC3FE = 0x4; // OC3FE
    typedef bit_field_t<0, 0x3> CCMR2_CC3S; // CC3S
    static constexpr uint32_t CCMR2_OC4M_3 = 0x1000000; // Output Compare 2 mode - bit 3
    static constexpr uint32_t CCMR2_OC3M_3 = 0x10000; // Output Compare 1 mode - bit 3

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

// TIM3: General purpose timers

struct stm32f730_tim3_t
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
    static constexpr uint32_t CR1_UIFREMAP = 0x800; // UIF status bit remapping

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR2_TI1S = 0x80; // TI1 selection
    typedef bit_field_t<4, 0x7> CR2_MMS; // Master mode selection
    static constexpr uint32_t CR2_CCDS = 0x8; // Capture/compare DMA selection

    static constexpr uint32_t SMCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> SMCR_SMS; // Slave mode selection
    typedef bit_field_t<4, 0x7> SMCR_TS; // Trigger selection
    static constexpr uint32_t SMCR_MSM = 0x80; // Master/Slave mode
    typedef bit_field_t<8, 0xf> SMCR_ETF; // External trigger filter
    typedef bit_field_t<12, 0x3> SMCR_ETPS; // External trigger prescaler
    static constexpr uint32_t SMCR_ECE = 0x4000; // External clock enable
    static constexpr uint32_t SMCR_ETP = 0x8000; // External trigger polarity
    static constexpr uint32_t SMCR_SMS_3 = 0x10000; // Slave model selection - bit[3]

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
    static constexpr uint32_t CCMR1_OC2M_3 = 0x1000000; // Output Compare 2 mode - bit 3
    static constexpr uint32_t CCMR1_OC1M_3 = 0x10000; // Output Compare 1 mode - bit 3

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
    static constexpr uint32_t CCMR2_OC4M_3 = 0x1000000; // Output Compare 2 mode - bit 3
    static constexpr uint32_t CCMR2_OC3M_3 = 0x10000; // Output Compare 1 mode - bit 3

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

// TIM3: General purpose timers

struct stm32f745_tim3_t
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
    volatile uint32_t OR1; // TIM3 option register 1
    reserved_t<0x3> _0x54;
    volatile uint32_t OR2; // TIM3 option register 2

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
    typedef bit_field_t<0, 0x7> SMCR_SMS; // Slave mode selection
    typedef bit_field_t<4, 0x7> SMCR_TS; // Trigger selection
    static constexpr uint32_t SMCR_MSM = 0x80; // Master/Slave mode
    typedef bit_field_t<8, 0xf> SMCR_ETF; // External trigger filter
    typedef bit_field_t<12, 0x3> SMCR_ETPS; // External trigger prescaler
    static constexpr uint32_t SMCR_ECE = 0x4000; // External clock enable
    static constexpr uint32_t SMCR_ETP = 0x8000; // External trigger polarity
    static constexpr uint32_t SMCR_SMS_3 = 0x10000; // Slave model selection - bit[3]

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
    static constexpr uint32_t CCMR2_O24CE = 0x8000; // O24CE
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

    static constexpr uint32_t OR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> OR1_TI1_RMP; // Input Capture 1 remap


    static constexpr uint32_t OR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<14, 0x7> OR2_ETRSEL; // ETR source selection
};

// TIM3: General purpose timers

struct stm32f767_tim3_t
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
    volatile uint32_t OR1; // TIM3 option register 1
    reserved_t<0x3> _0x54;
    volatile uint32_t OR2; // TIM3 option register 2

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
    static constexpr uint32_t CCMR2_O24CE = 0x8000; // O24CE
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

    static constexpr uint32_t OR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> OR1_TI1_RMP; // Input Capture 1 remap


    static constexpr uint32_t OR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<14, 0x7> OR2_ETRSEL; // ETR source selection
};

// TIM4: General purpose timers

struct stm32f745_tim4_t
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
    typedef bit_field_t<0, 0x7> SMCR_SMS; // Slave mode selection
    typedef bit_field_t<4, 0x7> SMCR_TS; // Trigger selection
    static constexpr uint32_t SMCR_MSM = 0x80; // Master/Slave mode
    typedef bit_field_t<8, 0xf> SMCR_ETF; // External trigger filter
    typedef bit_field_t<12, 0x3> SMCR_ETPS; // External trigger prescaler
    static constexpr uint32_t SMCR_ECE = 0x4000; // External clock enable
    static constexpr uint32_t SMCR_ETP = 0x8000; // External trigger polarity
    static constexpr uint32_t SMCR_SMS_3 = 0x10000; // Slave model selection - bit[3]

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
    static constexpr uint32_t CCMR2_O24CE = 0x8000; // O24CE
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

// TIM4: General purpose timers

struct stm32f767_tim4_t
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
    static constexpr uint32_t CCMR2_O24CE = 0x8000; // O24CE
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

// TIM5: General purpose timers

struct stm32f722_tim5_t
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
    volatile uint32_t OR; // option register 1

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0x3> CR1_CKD; // Clock division
    static constexpr uint32_t CR1_ARPE = 0x80; // Auto-reload preload enable
    typedef bit_field_t<5, 0x3> CR1_CMS; // Center-aligned mode selection
    static constexpr uint32_t CR1_DIR = 0x10; // Direction
    static constexpr uint32_t CR1_OPM = 0x8; // One-pulse mode
    static constexpr uint32_t CR1_URS = 0x4; // Update request source
    static constexpr uint32_t CR1_UDIS = 0x2; // Update disable
    static constexpr uint32_t CR1_CEN = 0x1; // Counter enable
    static constexpr uint32_t CR1_UIFREMAP = 0x800; // UIF status bit remapping

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR2_TI1S = 0x80; // TI1 selection
    typedef bit_field_t<4, 0x7> CR2_MMS; // Master mode selection
    static constexpr uint32_t CR2_CCDS = 0x8; // Capture/compare DMA selection

    static constexpr uint32_t SMCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> SMCR_SMS; // Slave mode selection
    typedef bit_field_t<4, 0x7> SMCR_TS; // Trigger selection
    static constexpr uint32_t SMCR_MSM = 0x80; // Master/Slave mode
    typedef bit_field_t<8, 0xf> SMCR_ETF; // External trigger filter
    typedef bit_field_t<12, 0x3> SMCR_ETPS; // External trigger prescaler
    static constexpr uint32_t SMCR_ECE = 0x4000; // External clock enable
    static constexpr uint32_t SMCR_ETP = 0x8000; // External trigger polarity
    static constexpr uint32_t SMCR_SMS_3 = 0x10000; // Slave model selection - bit[3]

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
    static constexpr uint32_t CCMR1_OC2M_3 = 0x1000000; // Output Compare 2 mode - bit 3
    static constexpr uint32_t CCMR1_OC1M_3 = 0x10000; // Output Compare 1 mode - bit 3

    static constexpr uint32_t CCMR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCMR2_O24CE = 0x8000; // O24CE
    typedef bit_field_t<12, 0x7> CCMR2_OC4M; // OC4M
    static constexpr uint32_t CCMR2_OC4PE = 0x800; // OC4PE
    static constexpr uint32_t CCMR2_OC4FE = 0x400; // OC4FE
    typedef bit_field_t<8, 0x3> CCMR2_CC4S; // CC4S
    static constexpr uint32_t CCMR2_OC3CE = 0x80; // OC3CE
    typedef bit_field_t<4, 0x7> CCMR2_OC3M; // OC3M
    static constexpr uint32_t CCMR2_OC3PE = 0x8; // OC3PE
    static constexpr uint32_t CCMR2_OC3FE = 0x4; // OC3FE
    typedef bit_field_t<0, 0x3> CCMR2_CC3S; // CC3S
    static constexpr uint32_t CCMR2_OC4M_3 = 0x1000000; // Output Compare 2 mode - bit 3
    static constexpr uint32_t CCMR2_OC3M_3 = 0x10000; // Output Compare 1 mode - bit 3

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
    typedef bit_field_t<6, 0x3> OR_TI4_RMP; // Timer Input 4 remap
};

// TIM5: General purpose timers

struct stm32f730_tim5_t
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
    volatile uint32_t OR; // option register 1

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0x3> CR1_CKD; // Clock division
    static constexpr uint32_t CR1_ARPE = 0x80; // Auto-reload preload enable
    typedef bit_field_t<5, 0x3> CR1_CMS; // Center-aligned mode selection
    static constexpr uint32_t CR1_DIR = 0x10; // Direction
    static constexpr uint32_t CR1_OPM = 0x8; // One-pulse mode
    static constexpr uint32_t CR1_URS = 0x4; // Update request source
    static constexpr uint32_t CR1_UDIS = 0x2; // Update disable
    static constexpr uint32_t CR1_CEN = 0x1; // Counter enable
    static constexpr uint32_t CR1_UIFREMAP = 0x800; // UIF status bit remapping

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR2_TI1S = 0x80; // TI1 selection
    typedef bit_field_t<4, 0x7> CR2_MMS; // Master mode selection
    static constexpr uint32_t CR2_CCDS = 0x8; // Capture/compare DMA selection

    static constexpr uint32_t SMCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> SMCR_SMS; // Slave mode selection
    typedef bit_field_t<4, 0x7> SMCR_TS; // Trigger selection
    static constexpr uint32_t SMCR_MSM = 0x80; // Master/Slave mode
    typedef bit_field_t<8, 0xf> SMCR_ETF; // External trigger filter
    typedef bit_field_t<12, 0x3> SMCR_ETPS; // External trigger prescaler
    static constexpr uint32_t SMCR_ECE = 0x4000; // External clock enable
    static constexpr uint32_t SMCR_ETP = 0x8000; // External trigger polarity
    static constexpr uint32_t SMCR_SMS_3 = 0x10000; // Slave model selection - bit[3]

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
    static constexpr uint32_t CCMR1_OC2M_3 = 0x1000000; // Output Compare 2 mode - bit 3
    static constexpr uint32_t CCMR1_OC1M_3 = 0x10000; // Output Compare 1 mode - bit 3

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
    static constexpr uint32_t CCMR2_OC4M_3 = 0x1000000; // Output Compare 2 mode - bit 3
    static constexpr uint32_t CCMR2_OC3M_3 = 0x10000; // Output Compare 1 mode - bit 3

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
    typedef bit_field_t<6, 0x3> OR_TI4_RMP; // Timer Input 4 remap
};

// TIM6: Basic timers

struct stm32f722_tim6_t
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
    static constexpr uint32_t CNT_UIFCPY = 0x80000000; // UIF Copy

    static constexpr uint32_t PSC_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> PSC_PSC; // Prescaler value

    static constexpr uint32_t ARR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> ARR_ARR; // Low Auto-reload value
};

// TIM6: Basic timers

struct stm32f745_tim6_t
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

// TIM9: General purpose timers

struct stm32f722_tim9_t
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
    static constexpr uint32_t CCMR1_OC2M_3 = 0x1000000; // Output Compare 2 mode - bit 3
    static constexpr uint32_t CCMR1_OC1M_3 = 0x10000; // Output Compare 1 mode - bit 3


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

struct stm32f745_tim9_t
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

struct stm32f745_tim10_t
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
    reserved_t<0x6> _0x38;
    volatile uint32_t OR; // option register

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0x3> CR1_CKD; // Clock division
    static constexpr uint32_t CR1_ARPE = 0x80; // Auto-reload preload enable
    static constexpr uint32_t CR1_URS = 0x4; // Update request source
    static constexpr uint32_t CR1_UDIS = 0x2; // Update disable
    static constexpr uint32_t CR1_CEN = 0x1; // Counter enable


    static constexpr uint32_t SMCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SMCR_SMS3 = 0x10000; // Slave mode selection
    static constexpr uint32_t SMCR_ETP = 0x8000; // External trigger polarity
    static constexpr uint32_t SMCR_ECE = 0x4000; // External clock enable
    typedef bit_field_t<12, 0x3> SMCR_ETPS; // External trigger prescaler
    typedef bit_field_t<8, 0xf> SMCR_ETF; // External trigger filter
    static constexpr uint32_t SMCR_MSM = 0x80; // Master/slave mode
    typedef bit_field_t<4, 0x7> SMCR_TS; // Trigger selection
    typedef bit_field_t<0, 0x7> SMCR_SMS; // Slave mode selection

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
    typedef bit_field_t<0, 0x3> OR_TI1_RMP; // TIM11 Input 1 remapping capability
};

// TIM13: General-purpose-timers

struct stm32f722_tim13_t
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
    reserved_t<0x6> _0x38;
    volatile uint32_t OR; // option register

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0x3> CR1_CKD; // Clock division
    static constexpr uint32_t CR1_ARPE = 0x80; // Auto-reload preload enable
    static constexpr uint32_t CR1_URS = 0x4; // Update request source
    static constexpr uint32_t CR1_UDIS = 0x2; // Update disable
    static constexpr uint32_t CR1_CEN = 0x1; // Counter enable
    static constexpr uint32_t CR1_OPM = 0x8; // One-pulse mode


    static constexpr uint32_t SMCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SMCR_RES; // Res.

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
    static constexpr uint32_t CCMR1_OC1M_3 = 0x10000; // Output Compare 1 mode - bit 3


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
    typedef bit_field_t<0, 0x3> OR_TI1_RMP; // TIM11 Input 1 remapping capability
};

template<>
struct peripheral_t<STM32F722, TIM1>
{
    static constexpr periph_t P = TIM1;
    using T = stm32f722_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F722, TIM8>
{
    static constexpr periph_t P = TIM8;
    using T = stm32f722_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, TIM1>
{
    static constexpr periph_t P = TIM1;
    using T = stm32f722_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, TIM8>
{
    static constexpr periph_t P = TIM8;
    using T = stm32f722_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, TIM1>
{
    static constexpr periph_t P = TIM1;
    using T = stm32f722_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, TIM8>
{
    static constexpr periph_t P = TIM8;
    using T = stm32f722_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, TIM1>
{
    static constexpr periph_t P = TIM1;
    using T = stm32f722_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, TIM8>
{
    static constexpr periph_t P = TIM8;
    using T = stm32f722_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, TIM1>
{
    static constexpr periph_t P = TIM1;
    using T = stm32f722_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, TIM8>
{
    static constexpr periph_t P = TIM8;
    using T = stm32f722_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, TIM1>
{
    static constexpr periph_t P = TIM1;
    using T = stm32f745_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, TIM8>
{
    static constexpr periph_t P = TIM8;
    using T = stm32f745_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, TIM1>
{
    static constexpr periph_t P = TIM1;
    using T = stm32f745_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, TIM8>
{
    static constexpr periph_t P = TIM8;
    using T = stm32f745_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, TIM1>
{
    static constexpr periph_t P = TIM1;
    using T = stm32f745_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, TIM8>
{
    static constexpr periph_t P = TIM8;
    using T = stm32f745_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, TIM1>
{
    static constexpr periph_t P = TIM1;
    using T = stm32f745_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, TIM8>
{
    static constexpr periph_t P = TIM8;
    using T = stm32f745_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, TIM1>
{
    static constexpr periph_t P = TIM1;
    using T = stm32f745_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, TIM8>
{
    static constexpr periph_t P = TIM8;
    using T = stm32f745_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, TIM1>
{
    static constexpr periph_t P = TIM1;
    using T = stm32f767_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, TIM8>
{
    static constexpr periph_t P = TIM8;
    using T = stm32f767_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, TIM1>
{
    static constexpr periph_t P = TIM1;
    using T = stm32f767_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, TIM8>
{
    static constexpr periph_t P = TIM8;
    using T = stm32f767_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, TIM1>
{
    static constexpr periph_t P = TIM1;
    using T = stm32f768_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, TIM8>
{
    static constexpr periph_t P = TIM8;
    using T = stm32f768_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, TIM1>
{
    static constexpr periph_t P = TIM1;
    using T = stm32f768_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, TIM8>
{
    static constexpr periph_t P = TIM8;
    using T = stm32f768_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, TIM1>
{
    static constexpr periph_t P = TIM1;
    using T = stm32f768_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, TIM8>
{
    static constexpr periph_t P = TIM8;
    using T = stm32f768_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, TIM1>
{
    static constexpr periph_t P = TIM1;
    using T = stm32f768_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, TIM8>
{
    static constexpr periph_t P = TIM8;
    using T = stm32f768_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F722, TIM2>
{
    static constexpr periph_t P = TIM2;
    using T = stm32f722_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, TIM2>
{
    static constexpr periph_t P = TIM2;
    using T = stm32f722_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, TIM2>
{
    static constexpr periph_t P = TIM2;
    using T = stm32f722_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, TIM2>
{
    static constexpr periph_t P = TIM2;
    using T = stm32f722_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, TIM2>
{
    static constexpr periph_t P = TIM2;
    using T = stm32f730_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, TIM2>
{
    static constexpr periph_t P = TIM2;
    using T = stm32f745_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, TIM2>
{
    static constexpr periph_t P = TIM2;
    using T = stm32f745_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, TIM2>
{
    static constexpr periph_t P = TIM2;
    using T = stm32f745_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, TIM2>
{
    static constexpr periph_t P = TIM2;
    using T = stm32f745_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, TIM2>
{
    static constexpr periph_t P = TIM2;
    using T = stm32f745_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, TIM2>
{
    static constexpr periph_t P = TIM2;
    using T = stm32f767_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, TIM2>
{
    static constexpr periph_t P = TIM2;
    using T = stm32f767_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, TIM2>
{
    static constexpr periph_t P = TIM2;
    using T = stm32f767_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, TIM2>
{
    static constexpr periph_t P = TIM2;
    using T = stm32f767_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, TIM2>
{
    static constexpr periph_t P = TIM2;
    using T = stm32f767_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, TIM2>
{
    static constexpr periph_t P = TIM2;
    using T = stm32f767_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F722, TIM3>
{
    static constexpr periph_t P = TIM3;
    using T = stm32f722_tim3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F722, TIM4>
{
    static constexpr periph_t P = TIM4;
    using T = stm32f722_tim3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, TIM3>
{
    static constexpr periph_t P = TIM3;
    using T = stm32f722_tim3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, TIM4>
{
    static constexpr periph_t P = TIM4;
    using T = stm32f722_tim3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, TIM3>
{
    static constexpr periph_t P = TIM3;
    using T = stm32f722_tim3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, TIM4>
{
    static constexpr periph_t P = TIM4;
    using T = stm32f722_tim3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, TIM3>
{
    static constexpr periph_t P = TIM3;
    using T = stm32f722_tim3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, TIM4>
{
    static constexpr periph_t P = TIM4;
    using T = stm32f722_tim3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, TIM3>
{
    static constexpr periph_t P = TIM3;
    using T = stm32f730_tim3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, TIM4>
{
    static constexpr periph_t P = TIM4;
    using T = stm32f730_tim3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, TIM3>
{
    static constexpr periph_t P = TIM3;
    using T = stm32f745_tim3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, TIM3>
{
    static constexpr periph_t P = TIM3;
    using T = stm32f745_tim3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, TIM3>
{
    static constexpr periph_t P = TIM3;
    using T = stm32f745_tim3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, TIM3>
{
    static constexpr periph_t P = TIM3;
    using T = stm32f745_tim3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, TIM3>
{
    static constexpr periph_t P = TIM3;
    using T = stm32f745_tim3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, TIM3>
{
    static constexpr periph_t P = TIM3;
    using T = stm32f767_tim3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, TIM3>
{
    static constexpr periph_t P = TIM3;
    using T = stm32f767_tim3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, TIM3>
{
    static constexpr periph_t P = TIM3;
    using T = stm32f767_tim3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, TIM3>
{
    static constexpr periph_t P = TIM3;
    using T = stm32f767_tim3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, TIM3>
{
    static constexpr periph_t P = TIM3;
    using T = stm32f767_tim3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, TIM3>
{
    static constexpr periph_t P = TIM3;
    using T = stm32f767_tim3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, TIM4>
{
    static constexpr periph_t P = TIM4;
    using T = stm32f745_tim4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, TIM5>
{
    static constexpr periph_t P = TIM5;
    using T = stm32f745_tim4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, TIM4>
{
    static constexpr periph_t P = TIM4;
    using T = stm32f745_tim4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, TIM5>
{
    static constexpr periph_t P = TIM5;
    using T = stm32f745_tim4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, TIM4>
{
    static constexpr periph_t P = TIM4;
    using T = stm32f745_tim4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, TIM5>
{
    static constexpr periph_t P = TIM5;
    using T = stm32f745_tim4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, TIM4>
{
    static constexpr periph_t P = TIM4;
    using T = stm32f745_tim4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, TIM5>
{
    static constexpr periph_t P = TIM5;
    using T = stm32f745_tim4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, TIM4>
{
    static constexpr periph_t P = TIM4;
    using T = stm32f745_tim4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, TIM5>
{
    static constexpr periph_t P = TIM5;
    using T = stm32f745_tim4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, TIM4>
{
    static constexpr periph_t P = TIM4;
    using T = stm32f767_tim4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, TIM5>
{
    static constexpr periph_t P = TIM5;
    using T = stm32f767_tim4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, TIM4>
{
    static constexpr periph_t P = TIM4;
    using T = stm32f767_tim4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, TIM5>
{
    static constexpr periph_t P = TIM5;
    using T = stm32f767_tim4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, TIM4>
{
    static constexpr periph_t P = TIM4;
    using T = stm32f767_tim4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, TIM5>
{
    static constexpr periph_t P = TIM5;
    using T = stm32f767_tim4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, TIM4>
{
    static constexpr periph_t P = TIM4;
    using T = stm32f767_tim4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, TIM5>
{
    static constexpr periph_t P = TIM5;
    using T = stm32f767_tim4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, TIM4>
{
    static constexpr periph_t P = TIM4;
    using T = stm32f767_tim4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, TIM5>
{
    static constexpr periph_t P = TIM5;
    using T = stm32f767_tim4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, TIM4>
{
    static constexpr periph_t P = TIM4;
    using T = stm32f767_tim4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, TIM5>
{
    static constexpr periph_t P = TIM5;
    using T = stm32f767_tim4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F722, TIM5>
{
    static constexpr periph_t P = TIM5;
    using T = stm32f722_tim5_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, TIM5>
{
    static constexpr periph_t P = TIM5;
    using T = stm32f722_tim5_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, TIM5>
{
    static constexpr periph_t P = TIM5;
    using T = stm32f722_tim5_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, TIM5>
{
    static constexpr periph_t P = TIM5;
    using T = stm32f722_tim5_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, TIM5>
{
    static constexpr periph_t P = TIM5;
    using T = stm32f730_tim5_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F722, TIM6>
{
    static constexpr periph_t P = TIM6;
    using T = stm32f722_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F722, TIM7>
{
    static constexpr periph_t P = TIM7;
    using T = stm32f722_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, TIM6>
{
    static constexpr periph_t P = TIM6;
    using T = stm32f722_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, TIM7>
{
    static constexpr periph_t P = TIM7;
    using T = stm32f722_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, TIM6>
{
    static constexpr periph_t P = TIM6;
    using T = stm32f722_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, TIM7>
{
    static constexpr periph_t P = TIM7;
    using T = stm32f722_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, TIM6>
{
    static constexpr periph_t P = TIM6;
    using T = stm32f722_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, TIM7>
{
    static constexpr periph_t P = TIM7;
    using T = stm32f722_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, TIM6>
{
    static constexpr periph_t P = TIM6;
    using T = stm32f722_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, TIM7>
{
    static constexpr periph_t P = TIM7;
    using T = stm32f722_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, TIM6>
{
    static constexpr periph_t P = TIM6;
    using T = stm32f745_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, TIM7>
{
    static constexpr periph_t P = TIM7;
    using T = stm32f745_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, TIM6>
{
    static constexpr periph_t P = TIM6;
    using T = stm32f745_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, TIM7>
{
    static constexpr periph_t P = TIM7;
    using T = stm32f745_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, TIM6>
{
    static constexpr periph_t P = TIM6;
    using T = stm32f745_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, TIM7>
{
    static constexpr periph_t P = TIM7;
    using T = stm32f745_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, TIM6>
{
    static constexpr periph_t P = TIM6;
    using T = stm32f745_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, TIM7>
{
    static constexpr periph_t P = TIM7;
    using T = stm32f745_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, TIM6>
{
    static constexpr periph_t P = TIM6;
    using T = stm32f745_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, TIM7>
{
    static constexpr periph_t P = TIM7;
    using T = stm32f745_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, TIM6>
{
    static constexpr periph_t P = TIM6;
    using T = stm32f745_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, TIM7>
{
    static constexpr periph_t P = TIM7;
    using T = stm32f745_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, TIM6>
{
    static constexpr periph_t P = TIM6;
    using T = stm32f745_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, TIM7>
{
    static constexpr periph_t P = TIM7;
    using T = stm32f745_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, TIM6>
{
    static constexpr periph_t P = TIM6;
    using T = stm32f745_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, TIM7>
{
    static constexpr periph_t P = TIM7;
    using T = stm32f745_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, TIM6>
{
    static constexpr periph_t P = TIM6;
    using T = stm32f745_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, TIM7>
{
    static constexpr periph_t P = TIM7;
    using T = stm32f745_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, TIM6>
{
    static constexpr periph_t P = TIM6;
    using T = stm32f745_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, TIM7>
{
    static constexpr periph_t P = TIM7;
    using T = stm32f745_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, TIM6>
{
    static constexpr periph_t P = TIM6;
    using T = stm32f745_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, TIM7>
{
    static constexpr periph_t P = TIM7;
    using T = stm32f745_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F722, TIM12>
{
    static constexpr periph_t P = TIM12;
    using T = stm32f722_tim9_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F722, TIM9>
{
    static constexpr periph_t P = TIM9;
    using T = stm32f722_tim9_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, TIM12>
{
    static constexpr periph_t P = TIM12;
    using T = stm32f722_tim9_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, TIM9>
{
    static constexpr periph_t P = TIM9;
    using T = stm32f722_tim9_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, TIM12>
{
    static constexpr periph_t P = TIM12;
    using T = stm32f722_tim9_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, TIM9>
{
    static constexpr periph_t P = TIM9;
    using T = stm32f722_tim9_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, TIM12>
{
    static constexpr periph_t P = TIM12;
    using T = stm32f722_tim9_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, TIM9>
{
    static constexpr periph_t P = TIM9;
    using T = stm32f722_tim9_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, TIM12>
{
    static constexpr periph_t P = TIM12;
    using T = stm32f722_tim9_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, TIM9>
{
    static constexpr periph_t P = TIM9;
    using T = stm32f722_tim9_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, TIM12>
{
    static constexpr periph_t P = TIM12;
    using T = stm32f745_tim9_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, TIM9>
{
    static constexpr periph_t P = TIM9;
    using T = stm32f745_tim9_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, TIM12>
{
    static constexpr periph_t P = TIM12;
    using T = stm32f745_tim9_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, TIM9>
{
    static constexpr periph_t P = TIM9;
    using T = stm32f745_tim9_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, TIM12>
{
    static constexpr periph_t P = TIM12;
    using T = stm32f745_tim9_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, TIM9>
{
    static constexpr periph_t P = TIM9;
    using T = stm32f745_tim9_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, TIM12>
{
    static constexpr periph_t P = TIM12;
    using T = stm32f745_tim9_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, TIM9>
{
    static constexpr periph_t P = TIM9;
    using T = stm32f745_tim9_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, TIM12>
{
    static constexpr periph_t P = TIM12;
    using T = stm32f745_tim9_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, TIM9>
{
    static constexpr periph_t P = TIM9;
    using T = stm32f745_tim9_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, TIM12>
{
    static constexpr periph_t P = TIM12;
    using T = stm32f745_tim9_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, TIM9>
{
    static constexpr periph_t P = TIM9;
    using T = stm32f745_tim9_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, TIM12>
{
    static constexpr periph_t P = TIM12;
    using T = stm32f745_tim9_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, TIM9>
{
    static constexpr periph_t P = TIM9;
    using T = stm32f745_tim9_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, TIM12>
{
    static constexpr periph_t P = TIM12;
    using T = stm32f745_tim9_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, TIM9>
{
    static constexpr periph_t P = TIM9;
    using T = stm32f745_tim9_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, TIM12>
{
    static constexpr periph_t P = TIM12;
    using T = stm32f745_tim9_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, TIM9>
{
    static constexpr periph_t P = TIM9;
    using T = stm32f745_tim9_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, TIM12>
{
    static constexpr periph_t P = TIM12;
    using T = stm32f745_tim9_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, TIM9>
{
    static constexpr periph_t P = TIM9;
    using T = stm32f745_tim9_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, TIM12>
{
    static constexpr periph_t P = TIM12;
    using T = stm32f745_tim9_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, TIM9>
{
    static constexpr periph_t P = TIM9;
    using T = stm32f745_tim9_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, TIM10>
{
    static constexpr periph_t P = TIM10;
    using T = stm32f745_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, TIM11>
{
    static constexpr periph_t P = TIM11;
    using T = stm32f745_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, TIM13>
{
    static constexpr periph_t P = TIM13;
    using T = stm32f745_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, TIM14>
{
    static constexpr periph_t P = TIM14;
    using T = stm32f745_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, TIM10>
{
    static constexpr periph_t P = TIM10;
    using T = stm32f745_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, TIM11>
{
    static constexpr periph_t P = TIM11;
    using T = stm32f745_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, TIM13>
{
    static constexpr periph_t P = TIM13;
    using T = stm32f745_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, TIM14>
{
    static constexpr periph_t P = TIM14;
    using T = stm32f745_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, TIM10>
{
    static constexpr periph_t P = TIM10;
    using T = stm32f745_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, TIM11>
{
    static constexpr periph_t P = TIM11;
    using T = stm32f745_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, TIM13>
{
    static constexpr periph_t P = TIM13;
    using T = stm32f745_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, TIM14>
{
    static constexpr periph_t P = TIM14;
    using T = stm32f745_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, TIM10>
{
    static constexpr periph_t P = TIM10;
    using T = stm32f745_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, TIM11>
{
    static constexpr periph_t P = TIM11;
    using T = stm32f745_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, TIM13>
{
    static constexpr periph_t P = TIM13;
    using T = stm32f745_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, TIM14>
{
    static constexpr periph_t P = TIM14;
    using T = stm32f745_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, TIM10>
{
    static constexpr periph_t P = TIM10;
    using T = stm32f745_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, TIM11>
{
    static constexpr periph_t P = TIM11;
    using T = stm32f745_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, TIM13>
{
    static constexpr periph_t P = TIM13;
    using T = stm32f745_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, TIM14>
{
    static constexpr periph_t P = TIM14;
    using T = stm32f745_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, TIM10>
{
    static constexpr periph_t P = TIM10;
    using T = stm32f745_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, TIM11>
{
    static constexpr periph_t P = TIM11;
    using T = stm32f745_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, TIM13>
{
    static constexpr periph_t P = TIM13;
    using T = stm32f745_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, TIM14>
{
    static constexpr periph_t P = TIM14;
    using T = stm32f745_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, TIM10>
{
    static constexpr periph_t P = TIM10;
    using T = stm32f745_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, TIM11>
{
    static constexpr periph_t P = TIM11;
    using T = stm32f745_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, TIM13>
{
    static constexpr periph_t P = TIM13;
    using T = stm32f745_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, TIM14>
{
    static constexpr periph_t P = TIM14;
    using T = stm32f745_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, TIM10>
{
    static constexpr periph_t P = TIM10;
    using T = stm32f745_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, TIM11>
{
    static constexpr periph_t P = TIM11;
    using T = stm32f745_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, TIM13>
{
    static constexpr periph_t P = TIM13;
    using T = stm32f745_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, TIM14>
{
    static constexpr periph_t P = TIM14;
    using T = stm32f745_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, TIM10>
{
    static constexpr periph_t P = TIM10;
    using T = stm32f745_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, TIM11>
{
    static constexpr periph_t P = TIM11;
    using T = stm32f745_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, TIM13>
{
    static constexpr periph_t P = TIM13;
    using T = stm32f745_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, TIM14>
{
    static constexpr periph_t P = TIM14;
    using T = stm32f745_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, TIM10>
{
    static constexpr periph_t P = TIM10;
    using T = stm32f745_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, TIM11>
{
    static constexpr periph_t P = TIM11;
    using T = stm32f745_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, TIM13>
{
    static constexpr periph_t P = TIM13;
    using T = stm32f745_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, TIM14>
{
    static constexpr periph_t P = TIM14;
    using T = stm32f745_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, TIM10>
{
    static constexpr periph_t P = TIM10;
    using T = stm32f745_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, TIM11>
{
    static constexpr periph_t P = TIM11;
    using T = stm32f745_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, TIM13>
{
    static constexpr periph_t P = TIM13;
    using T = stm32f745_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, TIM14>
{
    static constexpr periph_t P = TIM14;
    using T = stm32f745_tim10_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F722, TIM10>
{
    static constexpr periph_t P = TIM10;
    using T = stm32f722_tim13_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F722, TIM11>
{
    static constexpr periph_t P = TIM11;
    using T = stm32f722_tim13_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F722, TIM13>
{
    static constexpr periph_t P = TIM13;
    using T = stm32f722_tim13_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F722, TIM14>
{
    static constexpr periph_t P = TIM14;
    using T = stm32f722_tim13_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, TIM10>
{
    static constexpr periph_t P = TIM10;
    using T = stm32f722_tim13_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, TIM11>
{
    static constexpr periph_t P = TIM11;
    using T = stm32f722_tim13_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, TIM13>
{
    static constexpr periph_t P = TIM13;
    using T = stm32f722_tim13_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, TIM14>
{
    static constexpr periph_t P = TIM14;
    using T = stm32f722_tim13_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, TIM10>
{
    static constexpr periph_t P = TIM10;
    using T = stm32f722_tim13_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, TIM11>
{
    static constexpr periph_t P = TIM11;
    using T = stm32f722_tim13_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, TIM13>
{
    static constexpr periph_t P = TIM13;
    using T = stm32f722_tim13_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, TIM14>
{
    static constexpr periph_t P = TIM14;
    using T = stm32f722_tim13_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, TIM10>
{
    static constexpr periph_t P = TIM10;
    using T = stm32f722_tim13_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, TIM11>
{
    static constexpr periph_t P = TIM11;
    using T = stm32f722_tim13_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, TIM13>
{
    static constexpr periph_t P = TIM13;
    using T = stm32f722_tim13_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, TIM14>
{
    static constexpr periph_t P = TIM14;
    using T = stm32f722_tim13_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, TIM10>
{
    static constexpr periph_t P = TIM10;
    using T = stm32f722_tim13_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, TIM11>
{
    static constexpr periph_t P = TIM11;
    using T = stm32f722_tim13_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, TIM13>
{
    static constexpr periph_t P = TIM13;
    using T = stm32f722_tim13_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, TIM14>
{
    static constexpr periph_t P = TIM14;
    using T = stm32f722_tim13_t;
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
    static constexpr signal_t BKIN2 = TIM1_BKIN2;
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
    }
};

template<> struct tim_traits<10>
{
    using tim = tim10_t;
    static constexpr signal_t CH1 = TIM10_CH1;
    static constexpr clock_source_t CLOCK = APB2_TIMER;

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
    }
};

template<> struct tim_traits<11>
{
    using tim = tim11_t;
    static constexpr signal_t CH1 = TIM11_CH1;
    static constexpr clock_source_t CLOCK = APB2_TIMER;

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
    }
};

template<> struct tim_traits<12>
{
    using tim = tim12_t;
    static constexpr signal_t CH1 = TIM12_CH1;
    static constexpr signal_t CH2 = TIM12_CH2;
    static constexpr clock_source_t CLOCK = APB1_TIMER;

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
    }
};

template<> struct tim_traits<13>
{
    using tim = tim13_t;
    static constexpr signal_t CH1 = TIM13_CH1;
    static constexpr clock_source_t CLOCK = APB1_TIMER;

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
    }
};

template<> struct tim_traits<14>
{
    using tim = tim14_t;
    static constexpr signal_t CH1 = TIM14_CH1;
    static constexpr clock_source_t CLOCK = APB1_TIMER;

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
    }
};

template<> struct tim_traits<5>
{
    using tim = tim5_t;
    static constexpr signal_t CH1 = TIM5_CH1;
    static constexpr signal_t CH2 = TIM5_CH2;
    static constexpr signal_t CH3 = TIM5_CH3;
    static constexpr signal_t CH4 = TIM5_CH4;
    static constexpr clock_source_t CLOCK = APB1_TIMER;

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
    }
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
    static constexpr signal_t ETR = TIM8_ETR;
    static constexpr clock_source_t CLOCK = APB2_TIMER;

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
    }
};

template<> struct tim_traits<9>
{
    using tim = tim9_t;
    static constexpr signal_t CH1 = TIM9_CH1;
    static constexpr signal_t CH2 = TIM9_CH2;
    static constexpr clock_source_t CLOCK = APB2_TIMER;

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
    }
};
