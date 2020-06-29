#pragma once

////
//
//      STM32H7 TIMS peripherals
//
///

// TIM15: General purpose timers

struct stm32h742x_tim15_t
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
    volatile uint32_t AF1; // TIM15 alternate fdfsdm1_breakon register 1
    reserved_t<0x1> _0x64;
    volatile uint32_t TISEL; // TIM15 input selection register

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR1_CEN = 0x1; // Counter enable
    static constexpr uint32_t CR1_UDIS = 0x2; // Update disable
    static constexpr uint32_t CR1_URS = 0x4; // Update request source
    static constexpr uint32_t CR1_OPM = 0x8; // One-pulse mode
    static constexpr uint32_t CR1_ARPE = 0x80; // Auto-reload preload enable
    typedef bit_field_t<8, 0x3> CR1_CKD; // Clock division
    static constexpr uint32_t CR1_UIFREMAP = 0x800; // UIF status bit remapping

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR2_CCPC = 0x1; // Capture/compare preloaded control
    static constexpr uint32_t CR2_CCUS = 0x4; // Capture/compare control update selection
    static constexpr uint32_t CR2_CCDS = 0x8; // Capture/compare DMA selection
    typedef bit_field_t<4, 0x7> CR2_MMS; // Master mode selection
    static constexpr uint32_t CR2_TI1S = 0x80; // TI1 selection
    static constexpr uint32_t CR2_OIS1 = 0x100; // Output Idle state 1
    static constexpr uint32_t CR2_OIS1N = 0x200; // Output Idle state 1
    static constexpr uint32_t CR2_OIS2 = 0x400; // Output Idle state 2

    static constexpr uint32_t SMCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> SMCR_SMS; // Slave mode selection
    typedef bit_field_t<4, 0x7> SMCR_TS_2_0; // Trigger selection
    static constexpr uint32_t SMCR_MSM = 0x80; // Master/Slave mode
    static constexpr uint32_t SMCR_SMS_3 = 0x10000; // Slave mode selection bit 3
    typedef bit_field_t<20, 0x3> SMCR_TS_4_3; // Trigger selection - bit 4:3

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
    static constexpr uint32_t SR_CC2OF = 0x400; // Capture/compare 2 overcapture flag
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
    static constexpr uint32_t EGR_CC2G = 0x4; // Capture/compare 2 generation
    static constexpr uint32_t EGR_CC1G = 0x2; // Capture/compare 1 generation
    static constexpr uint32_t EGR_UG = 0x1; // Update generation

    static constexpr uint32_t CCMR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> CCMR1_CC1S; // Capture/Compare 1 selection
    static constexpr uint32_t CCMR1_OC1FE = 0x4; // Output Compare 1 fast enable
    static constexpr uint32_t CCMR1_OC1PE = 0x8; // Output Compare 1 preload enable
    typedef bit_field_t<4, 0x7> CCMR1_OC1M; // Output Compare 1 mode
    typedef bit_field_t<8, 0x3> CCMR1_CC2S; // Capture/Compare 2 selection
    static constexpr uint32_t CCMR1_OC2FE = 0x400; // Output Compare 2 fast enable
    static constexpr uint32_t CCMR1_OC2PE = 0x800; // Output Compare 2 preload enable
    typedef bit_field_t<12, 0x7> CCMR1_OC2M; // Output Compare 2 mode
    static constexpr uint32_t CCMR1_OC1M_3 = 0x10000; // Output Compare 1 mode bit 3
    static constexpr uint32_t CCMR1_OC2M_3 = 0x1000000; // Output Compare 2 mode bit 3


    static constexpr uint32_t CCER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCER_CC2NP = 0x80; // Capture/Compare 2 output Polarity
    static constexpr uint32_t CCER_CC2P = 0x20; // Capture/Compare 2 output Polarity
    static constexpr uint32_t CCER_CC2E = 0x10; // Capture/Compare 2 output enable
    static constexpr uint32_t CCER_CC1NP = 0x8; // Capture/Compare 1 output Polarity
    static constexpr uint32_t CCER_CC1NE = 0x4; // Capture/Compare 1 complementary output enable
    static constexpr uint32_t CCER_CC1P = 0x2; // Capture/Compare 1 output Polarity
    static constexpr uint32_t CCER_CC1E = 0x1; // Capture/Compare 1 output enable

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


    static constexpr uint32_t BDTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BDTR_MOE = 0x8000; // Main output enable
    static constexpr uint32_t BDTR_AOE = 0x4000; // Automatic output enable
    static constexpr uint32_t BDTR_BKP = 0x2000; // Break polarity
    static constexpr uint32_t BDTR_BKE = 0x1000; // Break enable
    static constexpr uint32_t BDTR_OSSR = 0x800; // Off-state selection for Run mode
    static constexpr uint32_t BDTR_OSSI = 0x400; // Off-state selection for Idle mode
    typedef bit_field_t<8, 0x3> BDTR_LOCK; // Lock configuration
    typedef bit_field_t<0, 0xff> BDTR_DTG; // Dead-time generator setup
    typedef bit_field_t<16, 0xf> BDTR_BKF; // Break filter

    static constexpr uint32_t DCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0x1f> DCR_DBL; // DMA burst length
    typedef bit_field_t<0, 0x1f> DCR_DBA; // DMA base address

    static constexpr uint32_t DMAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DMAR_DMAB; // DMA register for burst accesses


    static constexpr uint32_t AF1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t AF1_BKINE = 0x1; // BRK BKIN input enable
    static constexpr uint32_t AF1_BKCMP1E = 0x2; // BRK COMP1 enable
    static constexpr uint32_t AF1_BKCMP2E = 0x4; // BRK COMP2 enable
    static constexpr uint32_t AF1_BKDF1BK0E = 0x100; // BRK dfsdm1_break[0] enable
    static constexpr uint32_t AF1_BKINP = 0x200; // BRK BKIN input polarity
    static constexpr uint32_t AF1_BKCMP1P = 0x400; // BRK COMP1 input polarity
    static constexpr uint32_t AF1_BKCMP2P = 0x800; // BRK COMP2 input polarity


    static constexpr uint32_t TISEL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> TISEL_TI1SEL; // selects TI1[0] to TI1[15] input
    typedef bit_field_t<8, 0xf> TISEL_TI2SEL; // selects TI2[0] to TI2[15] input
};

// TIM16: General-purpose-timers

struct stm32h742x_tim16_t
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
    volatile uint32_t TIM16_AF1; // TIM16 alternate function register 1
    reserved_t<0x1> _0x64;
    volatile uint32_t TIM16_TISEL; // TIM16 input selection register

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
    static constexpr uint32_t DIER_UIE = 0x1; // Update interrupt enable
    static constexpr uint32_t DIER_CC1IE = 0x2; // Capture/Compare 1 interrupt enable
    static constexpr uint32_t DIER_COMIE = 0x20; // COM interrupt enable
    static constexpr uint32_t DIER_BIE = 0x80; // Break interrupt enable
    static constexpr uint32_t DIER_UDE = 0x100; // Update DMA request enable
    static constexpr uint32_t DIER_CC1DE = 0x200; // Capture/Compare 1 DMA request enable
    static constexpr uint32_t DIER_COMDE = 0x2000; // COM DMA request enable

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
    static constexpr uint32_t CCMR1_OC1FE = 0x4; // Output Compare 1 fast enable
    static constexpr uint32_t CCMR1_OC1PE = 0x8; // Output Compare 1 preload enable
    typedef bit_field_t<4, 0x7> CCMR1_OC1M; // Output Compare 1 mode
    static constexpr uint32_t CCMR1_OC1M_3 = 0x10000; // Output Compare 1 mode


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

    static constexpr uint32_t DCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0x1f> DCR_DBL; // DMA burst length
    typedef bit_field_t<0, 0x1f> DCR_DBA; // DMA base address

    static constexpr uint32_t DMAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DMAR_DMAB; // DMA register for burst accesses


    static constexpr uint32_t TIM16_AF1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t TIM16_AF1_BKINE = 0x1; // BRK BKIN input enable
    static constexpr uint32_t TIM16_AF1_BKCMP1E = 0x2; // BRK COMP1 enable
    static constexpr uint32_t TIM16_AF1_BKCMP2E = 0x4; // BRK COMP2 enable
    static constexpr uint32_t TIM16_AF1_BKDFBK1E = 0x100; // BRK dfsdm1_break[1] enable
    static constexpr uint32_t TIM16_AF1_BKINP = 0x200; // BRK BKIN input polarity
    static constexpr uint32_t TIM16_AF1_BKCMP1P = 0x400; // BRK COMP1 input polarity
    static constexpr uint32_t TIM16_AF1_BKCMP2P = 0x800; // BRK COMP2 input polarity


    static constexpr uint32_t TIM16_TISEL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> TIM16_TISEL_TI1SEL; // selects TI1[0] to TI1[15] input
};

// TIM17: General-purpose-timers

struct stm32h742x_tim17_t
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
    volatile uint32_t TIM17_AF1; // TIM17 alternate function register 1
    reserved_t<0x1> _0x64;
    volatile uint32_t TIM17_TISEL; // TIM17 input selection register

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
    static constexpr uint32_t DIER_UIE = 0x1; // Update interrupt enable
    static constexpr uint32_t DIER_CC1IE = 0x2; // Capture/Compare 1 interrupt enable
    static constexpr uint32_t DIER_COMIE = 0x20; // COM interrupt enable
    static constexpr uint32_t DIER_BIE = 0x80; // Break interrupt enable
    static constexpr uint32_t DIER_UDE = 0x100; // Update DMA request enable
    static constexpr uint32_t DIER_CC1DE = 0x200; // Capture/Compare 1 DMA request enable
    static constexpr uint32_t DIER_COMDE = 0x2000; // COM DMA request enable

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
    static constexpr uint32_t CCMR1_OC1FE = 0x4; // Output Compare 1 fast enable
    static constexpr uint32_t CCMR1_OC1PE = 0x8; // Output Compare 1 preload enable
    typedef bit_field_t<4, 0x7> CCMR1_OC1M; // Output Compare 1 mode
    static constexpr uint32_t CCMR1_OC1M_3 = 0x10000; // Output Compare 1 mode


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

    static constexpr uint32_t DCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0x1f> DCR_DBL; // DMA burst length
    typedef bit_field_t<0, 0x1f> DCR_DBA; // DMA base address

    static constexpr uint32_t DMAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DMAR_DMAB; // DMA register for burst accesses


    static constexpr uint32_t TIM17_AF1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t TIM17_AF1_BKINE = 0x1; // BRK BKIN input enable
    static constexpr uint32_t TIM17_AF1_BKCMP1E = 0x2; // BRK COMP1 enable
    static constexpr uint32_t TIM17_AF1_BKCMP2E = 0x4; // BRK COMP2 enable
    static constexpr uint32_t TIM17_AF1_BKDFBK1E = 0x100; // BRK dfsdm1_break[1] enable
    static constexpr uint32_t TIM17_AF1_BKINP = 0x200; // BRK BKIN input polarity
    static constexpr uint32_t TIM17_AF1_BKCMP1P = 0x400; // BRK COMP1 input polarity
    static constexpr uint32_t TIM17_AF1_BKCMP2P = 0x800; // BRK COMP2 input polarity


    static constexpr uint32_t TIM17_TISEL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> TIM17_TISEL_TI1SEL; // selects TI1[0] to TI1[15] input
};

template<>
struct peripheral_t<STM32H742x, TIM15>
{
    using T = stm32h742x_tim15_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, TIM15>
{
    using T = stm32h742x_tim15_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, TIM15>
{
    using T = stm32h742x_tim15_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, TIM15>
{
    using T = stm32h742x_tim15_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, TIM15>
{
    using T = stm32h742x_tim15_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, TIM15>
{
    using T = stm32h742x_tim15_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, TIM15>
{
    using T = stm32h742x_tim15_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, TIM15>
{
    using T = stm32h742x_tim15_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, TIM15>
{
    using T = stm32h742x_tim15_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, TIM15>
{
    using T = stm32h742x_tim15_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, TIM15>
{
    using T = stm32h742x_tim15_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, TIM15>
{
    using T = stm32h742x_tim15_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, TIM15>
{
    using T = stm32h742x_tim15_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, TIM15>
{
    using T = stm32h742x_tim15_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, TIM15>
{
    using T = stm32h742x_tim15_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, TIM16>
{
    using T = stm32h742x_tim16_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, TIM16>
{
    using T = stm32h742x_tim16_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, TIM16>
{
    using T = stm32h742x_tim16_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, TIM16>
{
    using T = stm32h742x_tim16_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, TIM16>
{
    using T = stm32h742x_tim16_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, TIM16>
{
    using T = stm32h742x_tim16_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, TIM16>
{
    using T = stm32h742x_tim16_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, TIM16>
{
    using T = stm32h742x_tim16_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, TIM16>
{
    using T = stm32h742x_tim16_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, TIM16>
{
    using T = stm32h742x_tim16_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, TIM16>
{
    using T = stm32h742x_tim16_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, TIM16>
{
    using T = stm32h742x_tim16_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, TIM16>
{
    using T = stm32h742x_tim16_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, TIM16>
{
    using T = stm32h742x_tim16_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, TIM16>
{
    using T = stm32h742x_tim16_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, TIM17>
{
    using T = stm32h742x_tim17_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, TIM17>
{
    using T = stm32h742x_tim17_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, TIM17>
{
    using T = stm32h742x_tim17_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, TIM17>
{
    using T = stm32h742x_tim17_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, TIM17>
{
    using T = stm32h742x_tim17_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, TIM17>
{
    using T = stm32h742x_tim17_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, TIM17>
{
    using T = stm32h742x_tim17_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, TIM17>
{
    using T = stm32h742x_tim17_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, TIM17>
{
    using T = stm32h742x_tim17_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, TIM17>
{
    using T = stm32h742x_tim17_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, TIM17>
{
    using T = stm32h742x_tim17_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, TIM17>
{
    using T = stm32h742x_tim17_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, TIM17>
{
    using T = stm32h742x_tim17_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, TIM17>
{
    using T = stm32h742x_tim17_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, TIM17>
{
    using T = stm32h742x_tim17_t;
    static T& V;
};

using tim15_t = peripheral_t<svd, TIM15>;
using tim16_t = peripheral_t<svd, TIM16>;
using tim17_t = peripheral_t<svd, TIM17>;

template<int INST> struct tims_traits {};

template<> struct tims_traits<15>
{
    using tims = tim15_t;
    static constexpr signal_t BKIN = TIM15_BKIN;
    static constexpr signal_t CH1 = TIM15_CH1;
    static constexpr signal_t CH1N = TIM15_CH1N;
    static constexpr signal_t CH2 = TIM15_CH2;

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
    static void reset()
    {
        RCC::V.APB2RSTR |= RCC::T::APB2RSTR_TIM15RST;
    }
};

template<> struct tims_traits<16>
{
    using tims = tim16_t;
    static constexpr signal_t BKIN = TIM16_BKIN;
    static constexpr signal_t CH1 = TIM16_CH1;
    static constexpr signal_t CH1N = TIM16_CH1N;

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
    static void reset()
    {
        RCC::V.APB2RSTR |= RCC::T::APB2RSTR_TIM16RST;
    }
};

template<> struct tims_traits<17>
{
    using tims = tim17_t;
    static constexpr signal_t BKIN = TIM17_BKIN;
    static constexpr signal_t CH1 = TIM17_CH1;
    static constexpr signal_t CH1N = TIM17_CH1N;

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
    static void reset()
    {
        RCC::V.APB2RSTR |= RCC::T::APB2RSTR_TIM17RST;
    }
};
