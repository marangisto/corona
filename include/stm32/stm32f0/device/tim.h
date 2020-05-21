#pragma once

////
//
//      STM32F0 TIM peripherals
//
////

////
//
//      Advanced-timers
//
////

struct stm32f0x0_tim1_t
{
    volatile uint32_t CR1;          // [read-write] control register 1
    volatile uint32_t CR2;          // [read-write] control register 2
    volatile uint32_t SMCR;         // [read-write] slave mode control register
    volatile uint32_t DIER;         // [read-write] DMA/Interrupt enable register
    volatile uint32_t SR;           // [read-write] status register
    volatile uint32_t EGR;          // [write-only] event generation register
    volatile uint32_t CCMR1;        // [read-write] capture/compare mode register (output mode)
    volatile uint32_t CCMR2;        // [read-write] capture/compare mode register (output mode)
    volatile uint32_t CCER;         // [read-write] capture/compare enable register
    volatile uint32_t CNT;          // [read-write] counter
    volatile uint32_t PSC;          // [read-write] prescaler
    volatile uint32_t ARR;          // [read-write] auto-reload register
    volatile uint32_t RCR;          // [read-write] repetition counter register
    volatile uint32_t CCR1;         // [read-write] capture/compare register 1
    volatile uint32_t CCR2;         // [read-write] capture/compare register 2
    volatile uint32_t CCR3;         // [read-write] capture/compare register 3
    volatile uint32_t CCR4;         // [read-write] capture/compare register 4
    volatile uint32_t BDTR;         // [read-write] break and dead-time register
    volatile uint32_t DCR;          // [read-write] DMA control register
    volatile uint32_t DMAR;         // [read-write] DMA address for full transfer

    static constexpr uint32_t CR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CR1_CKD =        // Clock division
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t CR1_ARPE = 0x80; // Auto-reload preload enable
    template<uint32_t X>
    static constexpr uint32_t CR1_CMS =        // Center-aligned mode selection
        bit_field_t<5, 0x3>::value<X>();
    static constexpr uint32_t CR1_DIR = 0x10;  // Direction
    static constexpr uint32_t CR1_OPM = 0x8;   // One-pulse mode
    static constexpr uint32_t CR1_URS = 0x4;   // Update request source
    static constexpr uint32_t CR1_UDIS = 0x2;  // Update disable
    static constexpr uint32_t CR1_CEN = 0x1;   // Counter enable

    static constexpr uint32_t CR2_RESET_VALUE = 0x0;
    static constexpr uint32_t CR2_OIS4 = 0x4000;  // Output Idle state 4
    static constexpr uint32_t CR2_OIS3N = 0x2000; // Output Idle state 3
    static constexpr uint32_t CR2_OIS3 = 0x1000;  // Output Idle state 3
    static constexpr uint32_t CR2_OIS2N = 0x800;  // Output Idle state 2
    static constexpr uint32_t CR2_OIS2 = 0x400;   // Output Idle state 2
    static constexpr uint32_t CR2_OIS1N = 0x200;  // Output Idle state 1
    static constexpr uint32_t CR2_OIS1 = 0x100;   // Output Idle state 1
    static constexpr uint32_t CR2_TI1S = 0x80;    // TI1 selection
    template<uint32_t X>
    static constexpr uint32_t CR2_MMS =           // Master mode selection
        bit_field_t<4, 0x7>::value<X>();
    static constexpr uint32_t CR2_CCDS = 0x8;     // Capture/compare DMA selection
    static constexpr uint32_t CR2_CCUS = 0x4;     // Capture/compare control update selection
    static constexpr uint32_t CR2_CCPC = 0x1;     // Capture/compare preloaded control

    static constexpr uint32_t SMCR_RESET_VALUE = 0x0;
    static constexpr uint32_t SMCR_ETP = 0x8000; // External trigger polarity
    static constexpr uint32_t SMCR_ECE = 0x4000; // External clock enable
    template<uint32_t X>
    static constexpr uint32_t SMCR_ETPS =        // External trigger prescaler
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMCR_ETF =         // External trigger filter
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t SMCR_MSM = 0x80;   // Master/Slave mode
    template<uint32_t X>
    static constexpr uint32_t SMCR_TS =          // Trigger selection
        bit_field_t<4, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMCR_SMS =         // Slave mode selection
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t DIER_RESET_VALUE = 0x0;
    static constexpr uint32_t DIER_TDE = 0x4000;   // Trigger DMA request enable
    static constexpr uint32_t DIER_COMDE = 0x2000; // COM DMA request enable
    static constexpr uint32_t DIER_CC4DE = 0x1000; // Capture/Compare 4 DMA request enable
    static constexpr uint32_t DIER_CC3DE = 0x800;  // Capture/Compare 3 DMA request enable
    static constexpr uint32_t DIER_CC2DE = 0x400;  // Capture/Compare 2 DMA request enable
    static constexpr uint32_t DIER_CC1DE = 0x200;  // Capture/Compare 1 DMA request enable
    static constexpr uint32_t DIER_UDE = 0x100;    // Update DMA request enable
    static constexpr uint32_t DIER_BIE = 0x80;     // Break interrupt enable
    static constexpr uint32_t DIER_TIE = 0x40;     // Trigger interrupt enable
    static constexpr uint32_t DIER_COMIE = 0x20;   // COM interrupt enable
    static constexpr uint32_t DIER_CC4IE = 0x10;   // Capture/Compare 4 interrupt enable
    static constexpr uint32_t DIER_CC3IE = 0x8;    // Capture/Compare 3 interrupt enable
    static constexpr uint32_t DIER_CC2IE = 0x4;    // Capture/Compare 2 interrupt enable
    static constexpr uint32_t DIER_CC1IE = 0x2;    // Capture/Compare 1 interrupt enable
    static constexpr uint32_t DIER_UIE = 0x1;      // Update interrupt enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0;
    static constexpr uint32_t SR_CC4OF = 0x1000; // Capture/Compare 4 overcapture flag
    static constexpr uint32_t SR_CC3OF = 0x800;  // Capture/Compare 3 overcapture flag
    static constexpr uint32_t SR_CC2OF = 0x400;  // Capture/compare 2 overcapture flag
    static constexpr uint32_t SR_CC1OF = 0x200;  // Capture/Compare 1 overcapture flag
    static constexpr uint32_t SR_BIF = 0x80;     // Break interrupt flag
    static constexpr uint32_t SR_TIF = 0x40;     // Trigger interrupt flag
    static constexpr uint32_t SR_COMIF = 0x20;   // COM interrupt flag
    static constexpr uint32_t SR_CC4IF = 0x10;   // Capture/Compare 4 interrupt flag
    static constexpr uint32_t SR_CC3IF = 0x8;    // Capture/Compare 3 interrupt flag
    static constexpr uint32_t SR_CC2IF = 0x4;    // Capture/Compare 2 interrupt flag
    static constexpr uint32_t SR_CC1IF = 0x2;    // Capture/compare 1 interrupt flag
    static constexpr uint32_t SR_UIF = 0x1;      // Update interrupt flag

    static constexpr uint32_t EGR_RESET_VALUE = 0x0;
    static constexpr uint32_t EGR_BG = 0x80;   // Break generation
    static constexpr uint32_t EGR_TG = 0x40;   // Trigger generation
    static constexpr uint32_t EGR_COMG = 0x20; // Capture/Compare control update generation
    static constexpr uint32_t EGR_CC4G = 0x10; // Capture/compare 4 generation
    static constexpr uint32_t EGR_CC3G = 0x8;  // Capture/compare 3 generation
    static constexpr uint32_t EGR_CC2G = 0x4;  // Capture/compare 2 generation
    static constexpr uint32_t EGR_CC1G = 0x2;  // Capture/compare 1 generation
    static constexpr uint32_t EGR_UG = 0x1;    // Update generation

    static constexpr uint32_t CCMR1_Output_RESET_VALUE = 0x0;
    static constexpr uint32_t CCMR1_Output_OC2CE = 0x8000; // Output Compare 2 clear enable
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Output_OC2M =          // Output Compare 2 mode
        bit_field_t<12, 0x7>::value<X>();
    static constexpr uint32_t CCMR1_Output_OC2PE = 0x800;  // Output Compare 2 preload enable
    static constexpr uint32_t CCMR1_Output_OC2FE = 0x400;  // Output Compare 2 fast enable
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Output_CC2S =          // Capture/Compare 2 selection
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t CCMR1_Output_OC1CE = 0x80;   // Output Compare 1 clear enable
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Output_OC1M =          // Output Compare 1 mode
        bit_field_t<4, 0x7>::value<X>();
    static constexpr uint32_t CCMR1_Output_OC1PE = 0x8;    // Output Compare 1 preload enable
    static constexpr uint32_t CCMR1_Output_OC1FE = 0x4;    // Output Compare 1 fast enable
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Output_CC1S =          // Capture/Compare 1 selection
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t CCMR1_Input_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Input_IC2F =     // Input capture 2 filter
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Input_IC2PCS =   // Input capture 2 prescaler
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Input_CC2S =     // Capture/Compare 2 selection
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Input_IC1F =     // Input capture 1 filter
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Input_IC1PCS =   // Input capture 1 prescaler
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Input_CC1S =     // Capture/Compare 1 selection
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t CCMR2_Output_RESET_VALUE = 0x0;
    static constexpr uint32_t CCMR2_Output_OC4CE = 0x8000; // Output compare 4 clear enable
    template<uint32_t X>
    static constexpr uint32_t CCMR2_Output_OC4M =          // Output compare 4 mode
        bit_field_t<12, 0x7>::value<X>();
    static constexpr uint32_t CCMR2_Output_OC4PE = 0x800;  // Output compare 4 preload enable
    static constexpr uint32_t CCMR2_Output_OC4FE = 0x400;  // Output compare 4 fast enable
    template<uint32_t X>
    static constexpr uint32_t CCMR2_Output_CC4S =          // Capture/Compare 4 selection
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t CCMR2_Output_OC3CE = 0x80;   // Output compare 3 clear enable
    template<uint32_t X>
    static constexpr uint32_t CCMR2_Output_OC3M =          // Output compare 3 mode
        bit_field_t<4, 0x7>::value<X>();
    static constexpr uint32_t CCMR2_Output_OC3PE = 0x8;    // Output compare 3 preload enable
    static constexpr uint32_t CCMR2_Output_OC3FE = 0x4;    // Output compare 3 fast enable
    template<uint32_t X>
    static constexpr uint32_t CCMR2_Output_CC3S =          // Capture/Compare 3 selection
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t CCMR2_Input_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCMR2_Input_IC4F =     // Input capture 4 filter
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCMR2_Input_IC4PSC =   // Input capture 4 prescaler
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCMR2_Input_CC4S =     // Capture/Compare 4 selection
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCMR2_Input_IC3F =     // Input capture 3 filter
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCMR2_Input_IC3PSC =   // Input capture 3 prescaler
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCMR2_Input_CC3S =     // Capture/compare 3 selection
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t CCER_RESET_VALUE = 0x0;
    static constexpr uint32_t CCER_CC4P = 0x2000; // Capture/Compare 3 output Polarity
    static constexpr uint32_t CCER_CC4E = 0x1000; // Capture/Compare 4 output enable
    static constexpr uint32_t CCER_CC3NP = 0x800; // Capture/Compare 3 output Polarity
    static constexpr uint32_t CCER_CC3NE = 0x400; // Capture/Compare 3 complementary output enable
    static constexpr uint32_t CCER_CC3P = 0x200;  // Capture/Compare 3 output Polarity
    static constexpr uint32_t CCER_CC3E = 0x100;  // Capture/Compare 3 output enable
    static constexpr uint32_t CCER_CC2NP = 0x80;  // Capture/Compare 2 output Polarity
    static constexpr uint32_t CCER_CC2NE = 0x40;  // Capture/Compare 2 complementary output enable
    static constexpr uint32_t CCER_CC2P = 0x20;   // Capture/Compare 2 output Polarity
    static constexpr uint32_t CCER_CC2E = 0x10;   // Capture/Compare 2 output enable
    static constexpr uint32_t CCER_CC1NP = 0x8;   // Capture/Compare 1 output Polarity
    static constexpr uint32_t CCER_CC1NE = 0x4;   // Capture/Compare 1 complementary output enable
    static constexpr uint32_t CCER_CC1P = 0x2;    // Capture/Compare 1 output Polarity
    static constexpr uint32_t CCER_CC1E = 0x1;    // Capture/Compare 1 output enable

    static constexpr uint32_t CNT_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CNT_CNT =   // counter value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t PSC_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t PSC_PSC =   // Prescaler value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t ARR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ARR_ARR =   // Auto-reload value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t RCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RCR_REP =   // Repetition counter value
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t CCR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCR1_CCR1 =   // Capture/Compare 1 value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CCR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCR2_CCR2 =   // Capture/Compare 2 value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CCR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCR3_CCR3 =   // Capture/Compare 3 value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CCR4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCR4_CCR4 =   // Capture/Compare 3 value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t BDTR_RESET_VALUE = 0x0;
    static constexpr uint32_t BDTR_MOE = 0x8000; // Main output enable
    static constexpr uint32_t BDTR_AOE = 0x4000; // Automatic output enable
    static constexpr uint32_t BDTR_BKP = 0x2000; // Break polarity
    static constexpr uint32_t BDTR_BKE = 0x1000; // Break enable
    static constexpr uint32_t BDTR_OSSR = 0x800; // Off-state selection for Run mode
    static constexpr uint32_t BDTR_OSSI = 0x400; // Off-state selection for Idle mode
    template<uint32_t X>
    static constexpr uint32_t BDTR_LOCK =        // Lock configuration
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BDTR_DTG =         // Dead-time generator setup
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DCR_DBL =   // DMA burst length
        bit_field_t<8, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DCR_DBA =   // DMA base address
        bit_field_t<0, 0x1f>::value<X>();

    static constexpr uint32_t DMAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMAR_DMAB =   // DMA register for burst accesses
        bit_field_t<0, 0xffff>::value<X>();
};


////
//
//      General-purpose-timers
//
////

struct stm32f0x0_tim14_t
{
    volatile uint32_t CR1;          // [read-write] control register 1
    reserved_t<0x2> _0xc;
    volatile uint32_t DIER;         // [read-write] DMA/Interrupt enable register
    volatile uint32_t SR;           // [read-write] status register
    volatile uint32_t EGR;          // [write-only] event generation register
    volatile uint32_t CCMR1;        // [read-write] capture/compare mode register (output mode)
    reserved_t<0x1> _0x20;
    volatile uint32_t CCER;         // [read-write] capture/compare enable register
    volatile uint32_t CNT;          // [read-write] counter
    volatile uint32_t PSC;          // [read-write] prescaler
    volatile uint32_t ARR;          // [read-write] auto-reload register
    reserved_t<0x1> _0x34;
    volatile uint32_t CCR1;         // [read-write] capture/compare register 1
    reserved_t<0x6> _0x50;
    volatile uint32_t OR;           // [read-write] option register

    static constexpr uint32_t CR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CR1_CKD =        // Clock division
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t CR1_ARPE = 0x80; // Auto-reload preload enable
    static constexpr uint32_t CR1_URS = 0x4;   // Update request source
    static constexpr uint32_t CR1_UDIS = 0x2;  // Update disable
    static constexpr uint32_t CR1_CEN = 0x1;   // Counter enable

    static constexpr uint32_t DIER_RESET_VALUE = 0x0;
    static constexpr uint32_t DIER_CC1IE = 0x2; // Capture/Compare 1 interrupt enable
    static constexpr uint32_t DIER_UIE = 0x1;   // Update interrupt enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0;
    static constexpr uint32_t SR_CC1OF = 0x200; // Capture/Compare 1 overcapture flag
    static constexpr uint32_t SR_CC1IF = 0x2;   // Capture/compare 1 interrupt flag
    static constexpr uint32_t SR_UIF = 0x1;     // Update interrupt flag

    static constexpr uint32_t EGR_RESET_VALUE = 0x0;
    static constexpr uint32_t EGR_CC1G = 0x2; // Capture/compare 1 generation
    static constexpr uint32_t EGR_UG = 0x1;   // Update generation

    static constexpr uint32_t CCMR1_Output_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Output_CC1S =       // Capture/Compare 1 selection
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t CCMR1_Output_OC1FE = 0x4; // Output compare 1 fast enable
    static constexpr uint32_t CCMR1_Output_OC1PE = 0x8; // Output Compare 1 preload enable
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Output_OC1M =       // Output Compare 1 mode
        bit_field_t<4, 0x7>::value<X>();

    static constexpr uint32_t CCMR1_Input_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Input_IC1F =     // Input capture 1 filter
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Input_IC1PSC =   // Input capture 1 prescaler
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Input_CC1S =     // Capture/Compare 1 selection
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t CCER_RESET_VALUE = 0x0;
    static constexpr uint32_t CCER_CC1NP = 0x8; // Capture/Compare 1 output Polarity
    static constexpr uint32_t CCER_CC1P = 0x2;  // Capture/Compare 1 output Polarity
    static constexpr uint32_t CCER_CC1E = 0x1;  // Capture/Compare 1 output enable

    static constexpr uint32_t CNT_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CNT_CNT =   // counter value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t PSC_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t PSC_PSC =   // Prescaler value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t ARR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ARR_ARR =   // Auto-reload value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CCR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCR1_CCR1 =   // Capture/Compare 1 value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t OR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OR_RMP =   // Timer input 1 remap
        bit_field_t<0, 0x3>::value<X>();
};


////
//
//      General-purpose-timers
//
////

struct stm32f0x0_tim15_t
{
    volatile uint32_t CR1;          // [read-write] control register 1
    volatile uint32_t CR2;          // [read-write] control register 2
    volatile uint32_t SMCR;         // [read-write] slave mode control register
    volatile uint32_t DIER;         // [read-write] DMA/Interrupt enable register
    volatile uint32_t SR;           // [read-write] status register
    volatile uint32_t EGR;          // [write-only] event generation register
    volatile uint32_t CCMR1;        // [read-write] capture/compare mode register (output mode)
    reserved_t<0x1> _0x20;
    volatile uint32_t CCER;         // [read-write] capture/compare enable register
    volatile uint32_t CNT;          // [read-write] counter
    volatile uint32_t PSC;          // [read-write] prescaler
    volatile uint32_t ARR;          // [read-write] auto-reload register
    volatile uint32_t RCR;          // [read-write] repetition counter register
    volatile uint32_t CCR1;         // [read-write] capture/compare register 1
    volatile uint32_t CCR2;         // [read-write] capture/compare register 2
    reserved_t<0x2> _0x44;
    volatile uint32_t BDTR;         // [read-write] break and dead-time register
    volatile uint32_t DCR;          // [read-write] DMA control register
    volatile uint32_t DMAR;         // [read-write] DMA address for full transfer

    static constexpr uint32_t CR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CR1_CKD =        // Clock division
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t CR1_ARPE = 0x80; // Auto-reload preload enable
    static constexpr uint32_t CR1_OPM = 0x8;   // One-pulse mode
    static constexpr uint32_t CR1_URS = 0x4;   // Update request source
    static constexpr uint32_t CR1_UDIS = 0x2;  // Update disable
    static constexpr uint32_t CR1_CEN = 0x1;   // Counter enable

    static constexpr uint32_t CR2_RESET_VALUE = 0x0;
    static constexpr uint32_t CR2_OIS2 = 0x400;  // Output Idle state 2
    static constexpr uint32_t CR2_OIS1N = 0x200; // Output Idle state 1
    static constexpr uint32_t CR2_OIS1 = 0x100;  // Output Idle state 1
    template<uint32_t X>
    static constexpr uint32_t CR2_MMS =          // Master mode selection
        bit_field_t<4, 0x7>::value<X>();
    static constexpr uint32_t CR2_CCDS = 0x8;    // Capture/compare DMA selection
    static constexpr uint32_t CR2_CCUS = 0x4;    // Capture/compare control update selection
    static constexpr uint32_t CR2_CCPC = 0x1;    // Capture/compare preloaded control

    static constexpr uint32_t SMCR_RESET_VALUE = 0x0;
    static constexpr uint32_t SMCR_MSM = 0x80; // Master/Slave mode
    template<uint32_t X>
    static constexpr uint32_t SMCR_TS =        // Trigger selection
        bit_field_t<4, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMCR_SMS =       // Slave mode selection
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t DIER_RESET_VALUE = 0x0;
    static constexpr uint32_t DIER_TDE = 0x4000;  // Trigger DMA request enable
    static constexpr uint32_t DIER_CC2DE = 0x400; // Capture/Compare 2 DMA request enable
    static constexpr uint32_t DIER_CC1DE = 0x200; // Capture/Compare 1 DMA request enable
    static constexpr uint32_t DIER_UDE = 0x100;   // Update DMA request enable
    static constexpr uint32_t DIER_BIE = 0x80;    // Break interrupt enable
    static constexpr uint32_t DIER_TIE = 0x40;    // Trigger interrupt enable
    static constexpr uint32_t DIER_COMIE = 0x20;  // COM interrupt enable
    static constexpr uint32_t DIER_CC2IE = 0x4;   // Capture/Compare 2 interrupt enable
    static constexpr uint32_t DIER_CC1IE = 0x2;   // Capture/Compare 1 interrupt enable
    static constexpr uint32_t DIER_UIE = 0x1;     // Update interrupt enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0;
    static constexpr uint32_t SR_CC2OF = 0x400; // Capture/compare 2 overcapture flag
    static constexpr uint32_t SR_CC1OF = 0x200; // Capture/Compare 1 overcapture flag
    static constexpr uint32_t SR_BIF = 0x80;    // Break interrupt flag
    static constexpr uint32_t SR_TIF = 0x40;    // Trigger interrupt flag
    static constexpr uint32_t SR_COMIF = 0x20;  // COM interrupt flag
    static constexpr uint32_t SR_CC2IF = 0x4;   // Capture/Compare 2 interrupt flag
    static constexpr uint32_t SR_CC1IF = 0x2;   // Capture/compare 1 interrupt flag
    static constexpr uint32_t SR_UIF = 0x1;     // Update interrupt flag

    static constexpr uint32_t EGR_RESET_VALUE = 0x0;
    static constexpr uint32_t EGR_BG = 0x80;   // Break generation
    static constexpr uint32_t EGR_TG = 0x40;   // Trigger generation
    static constexpr uint32_t EGR_COMG = 0x20; // Capture/Compare control update generation
    static constexpr uint32_t EGR_CC2G = 0x4;  // Capture/compare 2 generation
    static constexpr uint32_t EGR_CC1G = 0x2;  // Capture/compare 1 generation
    static constexpr uint32_t EGR_UG = 0x1;    // Update generation

    static constexpr uint32_t CCMR1_Output_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Output_OC2M =         // Output Compare 2 mode
        bit_field_t<12, 0x7>::value<X>();
    static constexpr uint32_t CCMR1_Output_OC2PE = 0x800; // Output Compare 2 preload enable
    static constexpr uint32_t CCMR1_Output_OC2FE = 0x400; // Output Compare 2 fast enable
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Output_CC2S =         // Capture/Compare 2 selection
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Output_OC1M =         // Output Compare 1 mode
        bit_field_t<4, 0x7>::value<X>();
    static constexpr uint32_t CCMR1_Output_OC1PE = 0x8;   // Output Compare 1 preload enable
    static constexpr uint32_t CCMR1_Output_OC1FE = 0x4;   // Output Compare 1 fast enable
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Output_CC1S =         // Capture/Compare 1 selection
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t CCMR1_Input_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Input_IC2F =     // Input capture 2 filter
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Input_IC2PSC =   // Input capture 2 prescaler
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Input_CC2S =     // Capture/Compare 2 selection
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Input_IC1F =     // Input capture 1 filter
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Input_IC1PSC =   // Input capture 1 prescaler
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Input_CC1S =     // Capture/Compare 1 selection
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t CCER_RESET_VALUE = 0x0;
    static constexpr uint32_t CCER_CC2NP = 0x80; // Capture/Compare 2 output Polarity
    static constexpr uint32_t CCER_CC2P = 0x20;  // Capture/Compare 2 output Polarity
    static constexpr uint32_t CCER_CC2E = 0x10;  // Capture/Compare 2 output enable
    static constexpr uint32_t CCER_CC1NP = 0x8;  // Capture/Compare 1 output Polarity
    static constexpr uint32_t CCER_CC1NE = 0x4;  // Capture/Compare 1 complementary output enable
    static constexpr uint32_t CCER_CC1P = 0x2;   // Capture/Compare 1 output Polarity
    static constexpr uint32_t CCER_CC1E = 0x1;   // Capture/Compare 1 output enable

    static constexpr uint32_t CNT_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CNT_CNT =   // counter value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t PSC_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t PSC_PSC =   // Prescaler value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t ARR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ARR_ARR =   // Auto-reload value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t RCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RCR_REP =   // Repetition counter value
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t CCR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCR1_CCR1 =   // Capture/Compare 1 value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CCR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCR2_CCR2 =   // Capture/Compare 2 value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t BDTR_RESET_VALUE = 0x0;
    static constexpr uint32_t BDTR_MOE = 0x8000; // Main output enable
    static constexpr uint32_t BDTR_AOE = 0x4000; // Automatic output enable
    static constexpr uint32_t BDTR_BKP = 0x2000; // Break polarity
    static constexpr uint32_t BDTR_BKE = 0x1000; // Break enable
    static constexpr uint32_t BDTR_OSSR = 0x800; // Off-state selection for Run mode
    static constexpr uint32_t BDTR_OSSI = 0x400; // Off-state selection for Idle mode
    template<uint32_t X>
    static constexpr uint32_t BDTR_LOCK =        // Lock configuration
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BDTR_DTG =         // Dead-time generator setup
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DCR_DBL =   // DMA burst length
        bit_field_t<8, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DCR_DBA =   // DMA base address
        bit_field_t<0, 0x1f>::value<X>();

    static constexpr uint32_t DMAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMAR_DMAB =   // DMA register for burst accesses
        bit_field_t<0, 0xffff>::value<X>();
};


////
//
//      General-purpose-timers
//
////

struct stm32f0x0_tim16_t
{
    volatile uint32_t CR1;          // [read-write] control register 1
    volatile uint32_t CR2;          // [read-write] control register 2
    reserved_t<0x1> _0xc;
    volatile uint32_t DIER;         // [read-write] DMA/Interrupt enable register
    volatile uint32_t SR;           // [read-write] status register
    volatile uint32_t EGR;          // [write-only] event generation register
    volatile uint32_t CCMR1;        // [read-write] capture/compare mode register (output mode)
    reserved_t<0x1> _0x20;
    volatile uint32_t CCER;         // [read-write] capture/compare enable register
    volatile uint32_t CNT;          // [read-write] counter
    volatile uint32_t PSC;          // [read-write] prescaler
    volatile uint32_t ARR;          // [read-write] auto-reload register
    volatile uint32_t RCR;          // [read-write] repetition counter register
    volatile uint32_t CCR1;         // [read-write] capture/compare register 1
    reserved_t<0x3> _0x44;
    volatile uint32_t BDTR;         // [read-write] break and dead-time register
    volatile uint32_t DCR;          // [read-write] DMA control register
    volatile uint32_t DMAR;         // [read-write] DMA address for full transfer

    static constexpr uint32_t CR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CR1_CKD =        // Clock division
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t CR1_ARPE = 0x80; // Auto-reload preload enable
    static constexpr uint32_t CR1_OPM = 0x8;   // One-pulse mode
    static constexpr uint32_t CR1_URS = 0x4;   // Update request source
    static constexpr uint32_t CR1_UDIS = 0x2;  // Update disable
    static constexpr uint32_t CR1_CEN = 0x1;   // Counter enable

    static constexpr uint32_t CR2_RESET_VALUE = 0x0;
    static constexpr uint32_t CR2_OIS1N = 0x200; // Output Idle state 1
    static constexpr uint32_t CR2_OIS1 = 0x100;  // Output Idle state 1
    static constexpr uint32_t CR2_CCDS = 0x8;    // Capture/compare DMA selection
    static constexpr uint32_t CR2_CCUS = 0x4;    // Capture/compare control update selection
    static constexpr uint32_t CR2_CCPC = 0x1;    // Capture/compare preloaded control

    static constexpr uint32_t DIER_RESET_VALUE = 0x0;
    static constexpr uint32_t DIER_TDE = 0x4000;  // Trigger DMA request enable
    static constexpr uint32_t DIER_CC1DE = 0x200; // Capture/Compare 1 DMA request enable
    static constexpr uint32_t DIER_UDE = 0x100;   // Update DMA request enable
    static constexpr uint32_t DIER_BIE = 0x80;    // Break interrupt enable
    static constexpr uint32_t DIER_TIE = 0x40;    // Trigger interrupt enable
    static constexpr uint32_t DIER_COMIE = 0x20;  // COM interrupt enable
    static constexpr uint32_t DIER_CC1IE = 0x2;   // Capture/Compare 1 interrupt enable
    static constexpr uint32_t DIER_UIE = 0x1;     // Update interrupt enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0;
    static constexpr uint32_t SR_CC1OF = 0x200; // Capture/Compare 1 overcapture flag
    static constexpr uint32_t SR_BIF = 0x80;    // Break interrupt flag
    static constexpr uint32_t SR_TIF = 0x40;    // Trigger interrupt flag
    static constexpr uint32_t SR_COMIF = 0x20;  // COM interrupt flag
    static constexpr uint32_t SR_CC1IF = 0x2;   // Capture/compare 1 interrupt flag
    static constexpr uint32_t SR_UIF = 0x1;     // Update interrupt flag

    static constexpr uint32_t EGR_RESET_VALUE = 0x0;
    static constexpr uint32_t EGR_BG = 0x80;   // Break generation
    static constexpr uint32_t EGR_TG = 0x40;   // Trigger generation
    static constexpr uint32_t EGR_COMG = 0x20; // Capture/Compare control update generation
    static constexpr uint32_t EGR_CC1G = 0x2;  // Capture/compare 1 generation
    static constexpr uint32_t EGR_UG = 0x1;    // Update generation

    static constexpr uint32_t CCMR1_Output_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Output_OC1M =       // Output Compare 1 mode
        bit_field_t<4, 0x7>::value<X>();
    static constexpr uint32_t CCMR1_Output_OC1PE = 0x8; // Output Compare 1 preload enable
    static constexpr uint32_t CCMR1_Output_OC1FE = 0x4; // Output Compare 1 fast enable
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Output_CC1S =       // Capture/Compare 1 selection
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t CCMR1_Input_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Input_IC1F =     // Input capture 1 filter
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Input_IC1PSC =   // Input capture 1 prescaler
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Input_CC1S =     // Capture/Compare 1 selection
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t CCER_RESET_VALUE = 0x0;
    static constexpr uint32_t CCER_CC1NP = 0x8; // Capture/Compare 1 output Polarity
    static constexpr uint32_t CCER_CC1NE = 0x4; // Capture/Compare 1 complementary output enable
    static constexpr uint32_t CCER_CC1P = 0x2;  // Capture/Compare 1 output Polarity
    static constexpr uint32_t CCER_CC1E = 0x1;  // Capture/Compare 1 output enable

    static constexpr uint32_t CNT_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CNT_CNT =   // counter value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t PSC_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t PSC_PSC =   // Prescaler value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t ARR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ARR_ARR =   // Auto-reload value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t RCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RCR_REP =   // Repetition counter value
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t CCR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCR1_CCR1 =   // Capture/Compare 1 value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t BDTR_RESET_VALUE = 0x0;
    static constexpr uint32_t BDTR_MOE = 0x8000; // Main output enable
    static constexpr uint32_t BDTR_AOE = 0x4000; // Automatic output enable
    static constexpr uint32_t BDTR_BKP = 0x2000; // Break polarity
    static constexpr uint32_t BDTR_BKE = 0x1000; // Break enable
    static constexpr uint32_t BDTR_OSSR = 0x800; // Off-state selection for Run mode
    static constexpr uint32_t BDTR_OSSI = 0x400; // Off-state selection for Idle mode
    template<uint32_t X>
    static constexpr uint32_t BDTR_LOCK =        // Lock configuration
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BDTR_DTG =         // Dead-time generator setup
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DCR_DBL =   // DMA burst length
        bit_field_t<8, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DCR_DBA =   // DMA base address
        bit_field_t<0, 0x1f>::value<X>();

    static constexpr uint32_t DMAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMAR_DMAB =   // DMA register for burst accesses
        bit_field_t<0, 0xffff>::value<X>();
};


////
//
//      General-purpose-timers
//
////

struct stm32f0x0_tim3_t
{
    volatile uint32_t CR1;          // [read-write] control register 1
    volatile uint32_t CR2;          // [read-write] control register 2
    volatile uint32_t SMCR;         // [read-write] slave mode control register
    volatile uint32_t DIER;         // [read-write] DMA/Interrupt enable register
    volatile uint32_t SR;           // [read-write] status register
    volatile uint32_t EGR;          // [write-only] event generation register
    volatile uint32_t CCMR1;        // [read-write] capture/compare mode register 1 (output mode)
    volatile uint32_t CCMR2;        // [read-write] capture/compare mode register 2 (output mode)
    volatile uint32_t CCER;         // [read-write] capture/compare enable register
    volatile uint32_t CNT;          // [read-write] counter
    volatile uint32_t PSC;          // [read-write] prescaler
    volatile uint32_t ARR;          // [read-write] auto-reload register
    reserved_t<0x1> _0x34;
    volatile uint32_t CCR1;         // [read-write] capture/compare register 1
    volatile uint32_t CCR2;         // [read-write] capture/compare register 2
    volatile uint32_t CCR3;         // [read-write] capture/compare register 3
    volatile uint32_t CCR4;         // [read-write] capture/compare register 4
    reserved_t<0x1> _0x48;
    volatile uint32_t DCR;          // [read-write] DMA control register
    volatile uint32_t DMAR;         // [read-write] DMA address for full transfer

    static constexpr uint32_t CR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CR1_CKD =        // Clock division
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t CR1_ARPE = 0x80; // Auto-reload preload enable
    template<uint32_t X>
    static constexpr uint32_t CR1_CMS =        // Center-aligned mode selection
        bit_field_t<5, 0x3>::value<X>();
    static constexpr uint32_t CR1_DIR = 0x10;  // Direction
    static constexpr uint32_t CR1_OPM = 0x8;   // One-pulse mode
    static constexpr uint32_t CR1_URS = 0x4;   // Update request source
    static constexpr uint32_t CR1_UDIS = 0x2;  // Update disable
    static constexpr uint32_t CR1_CEN = 0x1;   // Counter enable

    static constexpr uint32_t CR2_RESET_VALUE = 0x0;
    static constexpr uint32_t CR2_TI1S = 0x80; // TI1 selection
    template<uint32_t X>
    static constexpr uint32_t CR2_MMS =        // Master mode selection
        bit_field_t<4, 0x7>::value<X>();
    static constexpr uint32_t CR2_CCDS = 0x8;  // Capture/compare DMA selection

    static constexpr uint32_t SMCR_RESET_VALUE = 0x0;
    static constexpr uint32_t SMCR_ETP = 0x8000; // External trigger polarity
    static constexpr uint32_t SMCR_ECE = 0x4000; // External clock enable
    template<uint32_t X>
    static constexpr uint32_t SMCR_ETPS =        // External trigger prescaler
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMCR_ETF =         // External trigger filter
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t SMCR_MSM = 0x80;   // Master/Slave mode
    template<uint32_t X>
    static constexpr uint32_t SMCR_TS =          // Trigger selection
        bit_field_t<4, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMCR_SMS =         // Slave mode selection
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t DIER_RESET_VALUE = 0x0;
    static constexpr uint32_t DIER_TDE = 0x4000;   // Trigger DMA request enable
    static constexpr uint32_t DIER_COMDE = 0x2000; // COM DMA request enable
    static constexpr uint32_t DIER_CC4DE = 0x1000; // Capture/Compare 4 DMA request enable
    static constexpr uint32_t DIER_CC3DE = 0x800;  // Capture/Compare 3 DMA request enable
    static constexpr uint32_t DIER_CC2DE = 0x400;  // Capture/Compare 2 DMA request enable
    static constexpr uint32_t DIER_CC1DE = 0x200;  // Capture/Compare 1 DMA request enable
    static constexpr uint32_t DIER_UDE = 0x100;    // Update DMA request enable
    static constexpr uint32_t DIER_TIE = 0x40;     // Trigger interrupt enable
    static constexpr uint32_t DIER_CC4IE = 0x10;   // Capture/Compare 4 interrupt enable
    static constexpr uint32_t DIER_CC3IE = 0x8;    // Capture/Compare 3 interrupt enable
    static constexpr uint32_t DIER_CC2IE = 0x4;    // Capture/Compare 2 interrupt enable
    static constexpr uint32_t DIER_CC1IE = 0x2;    // Capture/Compare 1 interrupt enable
    static constexpr uint32_t DIER_UIE = 0x1;      // Update interrupt enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0;
    static constexpr uint32_t SR_CC4OF = 0x1000; // Capture/Compare 4 overcapture flag
    static constexpr uint32_t SR_CC3OF = 0x800;  // Capture/Compare 3 overcapture flag
    static constexpr uint32_t SR_CC2OF = 0x400;  // Capture/compare 2 overcapture flag
    static constexpr uint32_t SR_CC1OF = 0x200;  // Capture/Compare 1 overcapture flag
    static constexpr uint32_t SR_TIF = 0x40;     // Trigger interrupt flag
    static constexpr uint32_t SR_CC4IF = 0x10;   // Capture/Compare 4 interrupt flag
    static constexpr uint32_t SR_CC3IF = 0x8;    // Capture/Compare 3 interrupt flag
    static constexpr uint32_t SR_CC2IF = 0x4;    // Capture/Compare 2 interrupt flag
    static constexpr uint32_t SR_CC1IF = 0x2;    // Capture/compare 1 interrupt flag
    static constexpr uint32_t SR_UIF = 0x1;      // Update interrupt flag

    static constexpr uint32_t EGR_RESET_VALUE = 0x0;
    static constexpr uint32_t EGR_TG = 0x40;   // Trigger generation
    static constexpr uint32_t EGR_CC4G = 0x10; // Capture/compare 4 generation
    static constexpr uint32_t EGR_CC3G = 0x8;  // Capture/compare 3 generation
    static constexpr uint32_t EGR_CC2G = 0x4;  // Capture/compare 2 generation
    static constexpr uint32_t EGR_CC1G = 0x2;  // Capture/compare 1 generation
    static constexpr uint32_t EGR_UG = 0x1;    // Update generation

    static constexpr uint32_t CCMR1_Output_RESET_VALUE = 0x0;
    static constexpr uint32_t CCMR1_Output_OC2CE = 0x8000; // Output compare 2 clear enable
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Output_OC2M =          // Output compare 2 mode
        bit_field_t<12, 0x7>::value<X>();
    static constexpr uint32_t CCMR1_Output_OC2PE = 0x800;  // Output compare 2 preload enable
    static constexpr uint32_t CCMR1_Output_OC2FE = 0x400;  // Output compare 2 fast enable
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Output_CC2S =          // Capture/Compare 2 selection
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t CCMR1_Output_OC1CE = 0x80;   // Output compare 1 clear enable
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Output_OC1M =          // Output compare 1 mode
        bit_field_t<4, 0x7>::value<X>();
    static constexpr uint32_t CCMR1_Output_OC1PE = 0x8;    // Output compare 1 preload enable
    static constexpr uint32_t CCMR1_Output_OC1FE = 0x4;    // Output compare 1 fast enable
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Output_CC1S =          // Capture/Compare 1 selection
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t CCMR1_Input_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Input_IC2F =     // Input capture 2 filter
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Input_IC2PSC =   // Input capture 2 prescaler
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Input_CC2S =     // Capture/compare 2 selection
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Input_IC1F =     // Input capture 1 filter
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Input_IC1PSC =   // Input capture 1 prescaler
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Input_CC1S =     // Capture/Compare 1 selection
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t CCMR2_Output_RESET_VALUE = 0x0;
    static constexpr uint32_t CCMR2_Output_OC4CE = 0x8000; // Output compare 4 clear enable
    template<uint32_t X>
    static constexpr uint32_t CCMR2_Output_OC4M =          // Output compare 4 mode
        bit_field_t<12, 0x7>::value<X>();
    static constexpr uint32_t CCMR2_Output_OC4PE = 0x800;  // Output compare 4 preload enable
    static constexpr uint32_t CCMR2_Output_OC4FE = 0x400;  // Output compare 4 fast enable
    template<uint32_t X>
    static constexpr uint32_t CCMR2_Output_CC4S =          // Capture/Compare 4 selection
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t CCMR2_Output_OC3CE = 0x80;   // Output compare 3 clear enable
    template<uint32_t X>
    static constexpr uint32_t CCMR2_Output_OC3M =          // Output compare 3 mode
        bit_field_t<4, 0x7>::value<X>();
    static constexpr uint32_t CCMR2_Output_OC3PE = 0x8;    // Output compare 3 preload enable
    static constexpr uint32_t CCMR2_Output_OC3FE = 0x4;    // Output compare 3 fast enable
    template<uint32_t X>
    static constexpr uint32_t CCMR2_Output_CC3S =          // Capture/Compare 3 selection
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t CCMR2_Input_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCMR2_Input_IC4F =     // Input capture 4 filter
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCMR2_Input_IC4PSC =   // Input capture 4 prescaler
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCMR2_Input_CC4S =     // Capture/Compare 4 selection
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCMR2_Input_IC3F =     // Input capture 3 filter
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCMR2_Input_IC3PSC =   // Input capture 3 prescaler
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCMR2_Input_CC3S =     // Capture/Compare 3 selection
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t CCER_RESET_VALUE = 0x0;
    static constexpr uint32_t CCER_CC4NP = 0x8000; // Capture/Compare 4 output Polarity
    static constexpr uint32_t CCER_CC4P = 0x2000;  // Capture/Compare 3 output Polarity
    static constexpr uint32_t CCER_CC4E = 0x1000;  // Capture/Compare 4 output enable
    static constexpr uint32_t CCER_CC3NP = 0x800;  // Capture/Compare 3 output Polarity
    static constexpr uint32_t CCER_CC3P = 0x200;   // Capture/Compare 3 output Polarity
    static constexpr uint32_t CCER_CC3E = 0x100;   // Capture/Compare 3 output enable
    static constexpr uint32_t CCER_CC2NP = 0x80;   // Capture/Compare 2 output Polarity
    static constexpr uint32_t CCER_CC2P = 0x20;    // Capture/Compare 2 output Polarity
    static constexpr uint32_t CCER_CC2E = 0x10;    // Capture/Compare 2 output enable
    static constexpr uint32_t CCER_CC1NP = 0x8;    // Capture/Compare 1 output Polarity
    static constexpr uint32_t CCER_CC1P = 0x2;     // Capture/Compare 1 output Polarity
    static constexpr uint32_t CCER_CC1E = 0x1;     // Capture/Compare 1 output enable

    static constexpr uint32_t CNT_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CNT_CNT_H =   // High counter value (TIM2 only)
        bit_field_t<16, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CNT_CNT_L =   // Low counter value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t PSC_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t PSC_PSC =   // Prescaler value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t ARR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ARR_ARR_H =   // High Auto-reload value (TIM2 only)
        bit_field_t<16, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ARR_ARR_L =   // Low Auto-reload value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CCR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCR1_CCR1_H =   // High Capture/Compare 1 value (TIM2 only)
        bit_field_t<16, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR1_CCR1_L =   // Low Capture/Compare 1 value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CCR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCR2_CCR2_H =   // High Capture/Compare 2 value (TIM2 only)
        bit_field_t<16, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR2_CCR2_L =   // Low Capture/Compare 2 value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CCR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCR3_CCR3_H =   // High Capture/Compare value (TIM2 only)
        bit_field_t<16, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR3_CCR3_L =   // Low Capture/Compare value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CCR4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCR4_CCR4_H =   // High Capture/Compare value (TIM2 only)
        bit_field_t<16, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR4_CCR4_L =   // Low Capture/Compare value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DCR_DBL =   // DMA burst length
        bit_field_t<8, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DCR_DBA =   // DMA base address
        bit_field_t<0, 0x1f>::value<X>();

    static constexpr uint32_t DMAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMAR_DMAR =   // DMA register for burst accesses
        bit_field_t<0, 0xffff>::value<X>();
};


////
//
//      Basic-timers
//
////

struct stm32f0x0_tim6_t
{
    volatile uint32_t CR1;  // [read-write] control register 1
    volatile uint32_t CR2;  // [read-write] control register 2
    reserved_t<0x1> _0xc;
    volatile uint32_t DIER; // [read-write] DMA/Interrupt enable register
    volatile uint32_t SR;   // [read-write] status register
    volatile uint32_t EGR;  // [write-only] event generation register
    reserved_t<0x3> _0x24;
    volatile uint32_t CNT;  // [read-write] counter
    volatile uint32_t PSC;  // [read-write] prescaler
    volatile uint32_t ARR;  // [read-write] auto-reload register

    static constexpr uint32_t CR1_RESET_VALUE = 0x0;
    static constexpr uint32_t CR1_ARPE = 0x80; // Auto-reload preload enable
    static constexpr uint32_t CR1_OPM = 0x8;   // One-pulse mode
    static constexpr uint32_t CR1_URS = 0x4;   // Update request source
    static constexpr uint32_t CR1_UDIS = 0x2;  // Update disable
    static constexpr uint32_t CR1_CEN = 0x1;   // Counter enable

    static constexpr uint32_t CR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CR2_MMS =   // Master mode selection
        bit_field_t<4, 0x7>::value<X>();

    static constexpr uint32_t DIER_RESET_VALUE = 0x0;
    static constexpr uint32_t DIER_UDE = 0x100; // Update DMA request enable
    static constexpr uint32_t DIER_UIE = 0x1;   // Update interrupt enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0;
    static constexpr uint32_t SR_UIF = 0x1; // Update interrupt flag

    static constexpr uint32_t EGR_RESET_VALUE = 0x0;
    static constexpr uint32_t EGR_UG = 0x1; // Update generation

    static constexpr uint32_t CNT_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CNT_CNT =   // Low counter value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t PSC_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t PSC_PSC =   // Prescaler value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t ARR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ARR_ARR =   // Low Auto-reload value
        bit_field_t<0, 0xffff>::value<X>();
};


template<>
struct peripheral_t<STM32F0x0, TIM1>
{
    typedef stm32f0x0_tim1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x1, TIM1>
{
    typedef stm32f0x0_tim1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x2, TIM1>
{
    typedef stm32f0x0_tim1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x8, TIM1>
{
    typedef stm32f0x0_tim1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x0, TIM3>
{
    typedef stm32f0x0_tim3_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x1, TIM2>
{
    typedef stm32f0x0_tim3_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x1, TIM3>
{
    typedef stm32f0x0_tim3_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x2, TIM2>
{
    typedef stm32f0x0_tim3_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x2, TIM3>
{
    typedef stm32f0x0_tim3_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x8, TIM2>
{
    typedef stm32f0x0_tim3_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x8, TIM3>
{
    typedef stm32f0x0_tim3_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x0, TIM14>
{
    typedef stm32f0x0_tim14_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x1, TIM14>
{
    typedef stm32f0x0_tim14_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x2, TIM14>
{
    typedef stm32f0x0_tim14_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x8, TIM14>
{
    typedef stm32f0x0_tim14_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x0, TIM6>
{
    typedef stm32f0x0_tim6_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x0, TIM7>
{
    typedef stm32f0x0_tim6_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x1, TIM6>
{
    typedef stm32f0x0_tim6_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x1, TIM7>
{
    typedef stm32f0x0_tim6_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x2, TIM6>
{
    typedef stm32f0x0_tim6_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x2, TIM7>
{
    typedef stm32f0x0_tim6_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x8, TIM6>
{
    typedef stm32f0x0_tim6_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x8, TIM7>
{
    typedef stm32f0x0_tim6_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x0, TIM15>
{
    typedef stm32f0x0_tim15_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x1, TIM15>
{
    typedef stm32f0x0_tim15_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x2, TIM15>
{
    typedef stm32f0x0_tim15_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x8, TIM15>
{
    typedef stm32f0x0_tim15_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x0, TIM16>
{
    typedef stm32f0x0_tim16_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x0, TIM17>
{
    typedef stm32f0x0_tim16_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x1, TIM16>
{
    typedef stm32f0x0_tim16_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x1, TIM17>
{
    typedef stm32f0x0_tim16_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x2, TIM16>
{
    typedef stm32f0x0_tim16_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x2, TIM17>
{
    typedef stm32f0x0_tim16_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x8, TIM16>
{
    typedef stm32f0x0_tim16_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x8, TIM17>
{
    typedef stm32f0x0_tim16_t T;
    static T& V;
};

using tim1_t = peripheral_t<mcu_svd, TIM1>;
using tim14_t = peripheral_t<mcu_svd, TIM14>;
using tim15_t = peripheral_t<mcu_svd, TIM15>;
using tim16_t = peripheral_t<mcu_svd, TIM16>;
using tim17_t = peripheral_t<mcu_svd, TIM17>;
using tim2_t = peripheral_t<mcu_svd, TIM2>;
using tim3_t = peripheral_t<mcu_svd, TIM3>;
using tim6_t = peripheral_t<mcu_svd, TIM6>;
using tim7_t = peripheral_t<mcu_svd, TIM7>;

