#pragma once

////
//
//      STM32L0 TIM peripherals
//
///

// TIM2: General-purpose-timers

struct stm32l0x0_tim2_t
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
    volatile uint32_t OR; // TIM2 option register

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
    typedef bit_field_t<0, 0x3> CCMR1_CC1S; // Capture/Compare 1 selection
    typedef bit_field_t<8, 0x3> CCMR1_CC2S; // Capture/Compare 2 selection
    typedef bit_field_t<4, 0xf> CCMR1_IC1F; // Input capture 1 filter
    typedef bit_field_t<2, 0x3> CCMR1_IC1PSC; // Input capture 1 prescaler
    typedef bit_field_t<12, 0xf> CCMR1_IC2F; // Input capture 2 filter
    typedef bit_field_t<10, 0x3> CCMR1_IC2PSC; // Input capture 2 prescaler
    static constexpr uint32_t CCMR1_OC1CE = 0x80; // Output compare 1 clear enable
    static constexpr uint32_t CCMR1_OC1FE = 0x4; // Output compare 1 fast enable
    typedef bit_field_t<4, 0x7> CCMR1_OC1M; // Output compare 1 mode
    static constexpr uint32_t CCMR1_OC1PE = 0x8; // Output compare 1 preload enable
    static constexpr uint32_t CCMR1_OC2CE = 0x8000; // Output compare 2 clear enable
    static constexpr uint32_t CCMR1_OC2FE = 0x400; // Output compare 2 fast enable
    typedef bit_field_t<12, 0x7> CCMR1_OC2M; // Output compare 2 mode
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
    static constexpr uint32_t CCMR2_OC3PE = 0x8; // Output compare 3 preload enable
    static constexpr uint32_t CCMR2_OC4CE = 0x8000; // Output compare 4 clear enable
    static constexpr uint32_t CCMR2_OC4FE = 0x400; // Output compare 4 fast enable
    typedef bit_field_t<12, 0x7> CCMR2_OC4M; // Output compare 4 mode
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

    static constexpr uint32_t OR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> OR_ETR_RMP; // Timer2 ETR remap
    typedef bit_field_t<3, 0x3> OR_TI4_RMP; // Internal trigger
};

// TIM6: Basic-timers

struct stm32l0x1_tim6_t
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

// TIM21: General-purpose-timers

struct stm32l0x0_tim21_t
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
    reserved_t<0x1> _0x30;
    volatile uint32_t CCR1; // capture/compare register 1
    volatile uint32_t CCR2; // capture/compare register 2
    reserved_t<0x5> _0x3c;
    volatile uint32_t OR; // TIM21 option register

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR1_CEN = 0x1; // Counter enable
    static constexpr uint32_t CR1_UDIS = 0x2; // Update disable
    static constexpr uint32_t CR1_URS = 0x4; // Update request source
    static constexpr uint32_t CR1_OPM = 0x8; // One-pulse mode
    static constexpr uint32_t CR1_DIR = 0x10; // Direction
    typedef bit_field_t<5, 0x3> CR1_CMS; // Center-aligned mode selection
    static constexpr uint32_t CR1_ARPE = 0x80; // Auto-reload preload enable
    typedef bit_field_t<8, 0x3> CR1_CKD; // Clock division

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0x7> CR2_MMS; // Master mode selection

    static constexpr uint32_t SMCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> SMCR_SMS; // Slave mode selection
    typedef bit_field_t<4, 0x7> SMCR_TS; // Trigger selection
    static constexpr uint32_t SMCR_MSM = 0x80; // Master/Slave mode
    typedef bit_field_t<8, 0xf> SMCR_ETF; // External trigger filter
    typedef bit_field_t<12, 0x3> SMCR_ETPS; // External trigger prescaler
    static constexpr uint32_t SMCR_ECE = 0x4000; // External clock enable
    static constexpr uint32_t SMCR_ETP = 0x8000; // External trigger polarity

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
    typedef bit_field_t<0, 0x3> CCMR1_CC1S; // Capture/Compare 1 selection
    typedef bit_field_t<8, 0x3> CCMR1_CC2S; // Capture/Compare 2 selection
    typedef bit_field_t<4, 0xf> CCMR1_IC1F; // Input capture 1 filter
    typedef bit_field_t<2, 0x3> CCMR1_IC1PSC; // Input capture 1 prescaler
    typedef bit_field_t<12, 0xf> CCMR1_IC2F; // Input capture 2 filter
    typedef bit_field_t<10, 0x3> CCMR1_IC2PSC; // Input capture 2 prescaler
    static constexpr uint32_t CCMR1_OC1FE = 0x4; // Output Compare 1 fast enable
    typedef bit_field_t<4, 0x7> CCMR1_OC1M; // Output Compare 1 mode
    static constexpr uint32_t CCMR1_OC1PE = 0x8; // Output Compare 1 preload enable
    static constexpr uint32_t CCMR1_OC2FE = 0x400; // Output Compare 2 fast enable
    typedef bit_field_t<12, 0x7> CCMR1_OC2M; // Output Compare 2 mode
    static constexpr uint32_t CCMR1_OC2PE = 0x800; // Output Compare 2 preload enable


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


    static constexpr uint32_t OR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> OR_ETR_RMP; // Timer21 ETR remap
    typedef bit_field_t<2, 0x7> OR_TI1_RMP; // Timer21 TI1
    static constexpr uint32_t OR_TI2_RMP = 0x20; // Timer21 TI2
};

// TIM22: General-purpose-timers

struct stm32l0x0_tim22_t
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
    reserved_t<0x1> _0x30;
    volatile uint32_t CCR1; // capture/compare register 1
    volatile uint32_t CCR2; // capture/compare register 2
    reserved_t<0x5> _0x3c;
    volatile uint32_t OR; // TIM22 option register

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR1_CEN = 0x1; // Counter enable
    static constexpr uint32_t CR1_UDIS = 0x2; // Update disable
    static constexpr uint32_t CR1_URS = 0x4; // Update request source
    static constexpr uint32_t CR1_OPM = 0x8; // One-pulse mode
    static constexpr uint32_t CR1_DIR = 0x10; // Direction
    typedef bit_field_t<5, 0x3> CR1_CMS; // Center-aligned mode selection
    static constexpr uint32_t CR1_ARPE = 0x80; // Auto-reload preload enable
    typedef bit_field_t<8, 0x3> CR1_CKD; // Clock division

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0x7> CR2_MMS; // Master mode selection

    static constexpr uint32_t SMCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> SMCR_SMS; // Slave mode selection
    typedef bit_field_t<4, 0x7> SMCR_TS; // Trigger selection
    static constexpr uint32_t SMCR_MSM = 0x80; // Master/Slave mode
    typedef bit_field_t<8, 0xf> SMCR_ETF; // External trigger filter
    typedef bit_field_t<12, 0x3> SMCR_ETPS; // External trigger prescaler
    static constexpr uint32_t SMCR_ECE = 0x4000; // External clock enable
    static constexpr uint32_t SMCR_ETP = 0x8000; // External trigger polarity

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
    typedef bit_field_t<0, 0x3> CCMR1_CC1S; // Capture/Compare 1 selection
    typedef bit_field_t<8, 0x3> CCMR1_CC2S; // Capture/Compare 2 selection
    typedef bit_field_t<4, 0xf> CCMR1_IC1F; // Input capture 1 filter
    typedef bit_field_t<2, 0x3> CCMR1_IC1PSC; // Input capture 1 prescaler
    typedef bit_field_t<12, 0xf> CCMR1_IC2F; // Input capture 2 filter
    typedef bit_field_t<10, 0x3> CCMR1_IC2PSC; // Input capture 2 prescaler
    static constexpr uint32_t CCMR1_OC1FE = 0x4; // Output Compare 1 fast enable
    typedef bit_field_t<4, 0x7> CCMR1_OC1M; // Output Compare 1 mode
    static constexpr uint32_t CCMR1_OC1PE = 0x8; // Output Compare 1 preload enable
    static constexpr uint32_t CCMR1_OC2FE = 0x400; // Output Compare 2 fast enable
    typedef bit_field_t<12, 0x7> CCMR1_OC2M; // Output Compare 2 mode
    static constexpr uint32_t CCMR1_OC2PE = 0x800; // Output Compare 2 preload enable


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


    static constexpr uint32_t OR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> OR_ETR_RMP; // Timer22 ETR remap
    typedef bit_field_t<2, 0x3> OR_TI1_RMP; // Timer22 TI1
};

template<>
struct peripheral_t<STM32L0x0, TIM2>
{
    static constexpr periph_t P = TIM2;
    using T = stm32l0x0_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x1, TIM2>
{
    static constexpr periph_t P = TIM2;
    using T = stm32l0x0_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x1, TIM3>
{
    static constexpr periph_t P = TIM3;
    using T = stm32l0x0_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x2, TIM2>
{
    static constexpr periph_t P = TIM2;
    using T = stm32l0x0_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x2, TIM3>
{
    static constexpr periph_t P = TIM3;
    using T = stm32l0x0_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x3, TIM2>
{
    static constexpr periph_t P = TIM2;
    using T = stm32l0x0_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x3, TIM3>
{
    static constexpr periph_t P = TIM3;
    using T = stm32l0x0_tim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x1, TIM6>
{
    static constexpr periph_t P = TIM6;
    using T = stm32l0x1_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x1, TIM7>
{
    static constexpr periph_t P = TIM7;
    using T = stm32l0x1_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x2, TIM6>
{
    static constexpr periph_t P = TIM6;
    using T = stm32l0x1_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x2, TIM7>
{
    static constexpr periph_t P = TIM7;
    using T = stm32l0x1_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x3, TIM6>
{
    static constexpr periph_t P = TIM6;
    using T = stm32l0x1_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x3, TIM7>
{
    static constexpr periph_t P = TIM7;
    using T = stm32l0x1_tim6_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x0, TIM21>
{
    static constexpr periph_t P = TIM21;
    using T = stm32l0x0_tim21_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x1, TIM21>
{
    static constexpr periph_t P = TIM21;
    using T = stm32l0x0_tim21_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x2, TIM21>
{
    static constexpr periph_t P = TIM21;
    using T = stm32l0x0_tim21_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x3, TIM21>
{
    static constexpr periph_t P = TIM21;
    using T = stm32l0x0_tim21_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x0, TIM22>
{
    static constexpr periph_t P = TIM22;
    using T = stm32l0x0_tim22_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x1, TIM22>
{
    static constexpr periph_t P = TIM22;
    using T = stm32l0x0_tim22_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x2, TIM22>
{
    static constexpr periph_t P = TIM22;
    using T = stm32l0x0_tim22_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x3, TIM22>
{
    static constexpr periph_t P = TIM22;
    using T = stm32l0x0_tim22_t;
    static T& V;
};

using tim2_t = peripheral_t<svd, TIM2>;
using tim21_t = peripheral_t<svd, TIM21>;
using tim22_t = peripheral_t<svd, TIM22>;
using tim3_t = peripheral_t<svd, TIM3>;
using tim6_t = peripheral_t<svd, TIM6>;
using tim7_t = peripheral_t<svd, TIM7>;

template<int INST> struct tim_traits {};

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

template<> struct tim_traits<21>
{
    using tim = tim21_t;
    static constexpr signal_t CH1 = TIM21_CH1;
    static constexpr signal_t CH2 = TIM21_CH2;
    static constexpr signal_t ETR = TIM21_ETR;
    static constexpr clock_source_t CLOCK = APB2_TIMER;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB2ENR |= RCC::T::APB2ENR_TIM21EN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB2ENR &= ~RCC::T::APB2ENR_TIM21EN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.APB2SMENR |= RCC::T::APB2SMENR_TIM21SMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM21SMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB2RSTR |= RCC::T::APB2RSTR_TIM21RST;
    }
};

template<> struct tim_traits<22>
{
    using tim = tim22_t;
    static constexpr signal_t CH1 = TIM22_CH1;
    static constexpr signal_t CH2 = TIM22_CH2;
    static constexpr signal_t ETR = TIM22_ETR;
    static constexpr clock_source_t CLOCK = APB2_TIMER;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB2ENR |= RCC::T::APB2ENR_TIM22EN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB2ENR &= ~RCC::T::APB2ENR_TIM22EN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.APB2SMENR |= RCC::T::APB2SMENR_TIM22SMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM22SMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB2RSTR |= RCC::T::APB2RSTR_TIM22RST;
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
