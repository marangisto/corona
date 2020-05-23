#pragma once

////
//
//      STM32F4 TIM peripherals
//
////

////
//
//      Advanced-timers
//
////

struct stm32f401_tim1_t
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
    static constexpr uint32_t CCMR1_Input_ICPCS =    // Input capture 1 prescaler
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
    static constexpr uint32_t CCR3_CCR3 =   // Capture/Compare value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CCR4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCR4_CCR4 =   // Capture/Compare value
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
    static constexpr uint32_t DMAR_DMAB =   // DMA register for burst accesses
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t RCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RCR_REP =   // Repetition counter value
        bit_field_t<0, 0xff>::value<X>();

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
};


////
//
//      General-purpose-timers
//
////

struct stm32f401_tim10_t
{
    volatile uint32_t CR1;          // [read-write] control register 1
    reserved_t<0x2> _0xc;
    volatile uint32_t DIER;         // [read-write] DMA/Interrupt enable register
    volatile uint32_t SR;           // [read-write] status register
    volatile uint32_t EGR;          // [write-only] event generation register
    volatile uint32_t CCMR1;        // [read-write] capture/compare mode register 1 (output mode)
    reserved_t<0x1> _0x20;
    volatile uint32_t CCER;         // [read-write] capture/compare enable register
    volatile uint32_t CNT;          // [read-write] counter
    volatile uint32_t PSC;          // [read-write] prescaler
    volatile uint32_t ARR;          // [read-write] auto-reload register
    reserved_t<0x1> _0x34;
    volatile uint32_t CCR1;         // [read-write] capture/compare register 1

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
    static constexpr uint32_t CCMR1_Output_OC1M =       // Output Compare 1 mode
        bit_field_t<4, 0x7>::value<X>();
    static constexpr uint32_t CCMR1_Output_OC1PE = 0x8; // Output Compare 1 preload enable
    static constexpr uint32_t CCMR1_Output_OC1FE = 0x4; // Output Compare 1 fast enable
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Output_CC1S =       // Capture/Compare 1 selection
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t CCMR1_Input_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Input_IC1F =    // Input capture 1 filter
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Input_ICPCS =   // Input capture 1 prescaler
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Input_CC1S =    // Capture/Compare 1 selection
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
};


////
//
//      General-purpose-timers
//
////

struct stm32f401_tim11_t
{
    volatile uint32_t CR1;          // [read-write] control register 1
    reserved_t<0x2> _0xc;
    volatile uint32_t DIER;         // [read-write] DMA/Interrupt enable register
    volatile uint32_t SR;           // [read-write] status register
    volatile uint32_t EGR;          // [write-only] event generation register
    volatile uint32_t CCMR1;        // [read-write] capture/compare mode register 1 (output mode)
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
    static constexpr uint32_t CCMR1_Output_OC1M =       // Output Compare 1 mode
        bit_field_t<4, 0x7>::value<X>();
    static constexpr uint32_t CCMR1_Output_OC1PE = 0x8; // Output Compare 1 preload enable
    static constexpr uint32_t CCMR1_Output_OC1FE = 0x4; // Output Compare 1 fast enable
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Output_CC1S =       // Capture/Compare 1 selection
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t CCMR1_Input_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Input_IC1F =    // Input capture 1 filter
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Input_ICPCS =   // Input capture 1 prescaler
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Input_CC1S =    // Capture/Compare 1 selection
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
    static constexpr uint32_t OR_RMP =   // Input 1 remapping capability
        bit_field_t<0, 0x3>::value<X>();
};


////
//
//      General purpose timers
//
////

struct stm32f412_tim12_t
{
    volatile uint32_t CR1;          // [read-write] control register 1
    reserved_t<0x1> _0x8;
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
    reserved_t<0x1> _0x34;
    volatile uint32_t CCR1;         // [read-write] capture/compare register 1
    volatile uint32_t CCR2;         // [read-write] capture/compare register 2

    static constexpr uint32_t CR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CR1_CKD =        // Clock division
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t CR1_ARPE = 0x80; // Auto-reload preload enable
    static constexpr uint32_t CR1_OPM = 0x8;   // One-pulse mode
    static constexpr uint32_t CR1_URS = 0x4;   // Update request source
    static constexpr uint32_t CR1_UDIS = 0x2;  // Update disable
    static constexpr uint32_t CR1_CEN = 0x1;   // Counter enable

    static constexpr uint32_t SMCR_RESET_VALUE = 0x0;
    static constexpr uint32_t SMCR_MSM = 0x80; // Master/Slave mode
    template<uint32_t X>
    static constexpr uint32_t SMCR_TS =        // Trigger selection
        bit_field_t<4, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMCR_SMS =       // Slave mode selection
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t DIER_RESET_VALUE = 0x0;
    static constexpr uint32_t DIER_TIE = 0x40;  // Trigger interrupt enable
    static constexpr uint32_t DIER_CC2IE = 0x4; // Capture/Compare 2 interrupt enable
    static constexpr uint32_t DIER_CC1IE = 0x2; // Capture/Compare 1 interrupt enable
    static constexpr uint32_t DIER_UIE = 0x1;   // Update interrupt enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0;
    static constexpr uint32_t SR_CC2OF = 0x400; // Capture/compare 2 overcapture flag
    static constexpr uint32_t SR_CC1OF = 0x200; // Capture/Compare 1 overcapture flag
    static constexpr uint32_t SR_TIF = 0x40;    // Trigger interrupt flag
    static constexpr uint32_t SR_CC2IF = 0x4;   // Capture/Compare 2 interrupt flag
    static constexpr uint32_t SR_CC1IF = 0x2;   // Capture/compare 1 interrupt flag
    static constexpr uint32_t SR_UIF = 0x1;     // Update interrupt flag

    static constexpr uint32_t EGR_RESET_VALUE = 0x0;
    static constexpr uint32_t EGR_TG = 0x40;  // Trigger generation
    static constexpr uint32_t EGR_CC2G = 0x4; // Capture/compare 2 generation
    static constexpr uint32_t EGR_CC1G = 0x2; // Capture/compare 1 generation
    static constexpr uint32_t EGR_UG = 0x1;   // Update generation

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
        bit_field_t<4, 0x7>::value<X>();
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

    static constexpr uint32_t CCR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCR1_CCR1 =   // Capture/Compare 1 value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CCR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCR2_CCR2 =   // Capture/Compare 2 value
        bit_field_t<0, 0xffff>::value<X>();
};


////
//
//      General purpose timers
//
////

struct stm32f412_tim13_t
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
};


////
//
//      General purpose timers
//
////

struct stm32f401_tim2_t
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
    volatile uint32_t OR;           // [read-write] TIM5 option register

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
    static constexpr uint32_t CCMR1_Output_OC2CE = 0x8000; // OC2CE
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Output_OC2M =          // OC2M
        bit_field_t<12, 0x7>::value<X>();
    static constexpr uint32_t CCMR1_Output_OC2PE = 0x800;  // OC2PE
    static constexpr uint32_t CCMR1_Output_OC2FE = 0x400;  // OC2FE
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Output_CC2S =          // CC2S
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t CCMR1_Output_OC1CE = 0x80;   // OC1CE
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Output_OC1M =          // OC1M
        bit_field_t<4, 0x7>::value<X>();
    static constexpr uint32_t CCMR1_Output_OC1PE = 0x8;    // OC1PE
    static constexpr uint32_t CCMR1_Output_OC1FE = 0x4;    // OC1FE
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Output_CC1S =          // CC1S
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
    static constexpr uint32_t CCMR1_Input_ICPCS =    // Input capture 1 prescaler
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Input_CC1S =     // Capture/Compare 1 selection
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t CCMR2_Output_RESET_VALUE = 0x0;
    static constexpr uint32_t CCMR2_Output_OC4CE = 0x8000; // OC4CE
    template<uint32_t X>
    static constexpr uint32_t CCMR2_Output_OC4M =          // OC4M
        bit_field_t<12, 0x7>::value<X>();
    static constexpr uint32_t CCMR2_Output_OC4PE = 0x800;  // OC4PE
    static constexpr uint32_t CCMR2_Output_OC4FE = 0x400;  // OC4FE
    template<uint32_t X>
    static constexpr uint32_t CCMR2_Output_CC4S =          // CC4S
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t CCMR2_Output_OC3CE = 0x80;   // OC3CE
    template<uint32_t X>
    static constexpr uint32_t CCMR2_Output_OC3M =          // OC3M
        bit_field_t<4, 0x7>::value<X>();
    static constexpr uint32_t CCMR2_Output_OC3PE = 0x8;    // OC3PE
    static constexpr uint32_t CCMR2_Output_OC3FE = 0x4;    // OC3FE
    template<uint32_t X>
    static constexpr uint32_t CCMR2_Output_CC3S =          // CC3S
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
    static constexpr uint32_t CNT_CNT_H =   // High counter value
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
    static constexpr uint32_t ARR_ARR_H =   // High Auto-reload value
        bit_field_t<16, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ARR_ARR_L =   // Low Auto-reload value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CCR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCR1_CCR1_H =   // High Capture/Compare 1 value
        bit_field_t<16, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR1_CCR1_L =   // Low Capture/Compare 1 value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CCR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCR2_CCR2_H =   // High Capture/Compare 2 value
        bit_field_t<16, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR2_CCR2_L =   // Low Capture/Compare 2 value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CCR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCR3_CCR3_H =   // High Capture/Compare value
        bit_field_t<16, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR3_CCR3_L =   // Low Capture/Compare value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CCR4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCR4_CCR4_H =   // High Capture/Compare value
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
    static constexpr uint32_t DMAR_DMAB =   // DMA register for burst accesses
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t OR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OR_ITR1_RMP =   // Timer Input 4 remap
        bit_field_t<10, 0x3>::value<X>();
};


////
//
//      General purpose timers
//
////

struct stm32f401_tim3_t
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
    static constexpr uint32_t CCMR1_Output_OC2CE = 0x8000; // OC2CE
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Output_OC2M =          // OC2M
        bit_field_t<12, 0x7>::value<X>();
    static constexpr uint32_t CCMR1_Output_OC2PE = 0x800;  // OC2PE
    static constexpr uint32_t CCMR1_Output_OC2FE = 0x400;  // OC2FE
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Output_CC2S =          // CC2S
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t CCMR1_Output_OC1CE = 0x80;   // OC1CE
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Output_OC1M =          // OC1M
        bit_field_t<4, 0x7>::value<X>();
    static constexpr uint32_t CCMR1_Output_OC1PE = 0x8;    // OC1PE
    static constexpr uint32_t CCMR1_Output_OC1FE = 0x4;    // OC1FE
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Output_CC1S =          // CC1S
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
    static constexpr uint32_t CCMR1_Input_ICPCS =    // Input capture 1 prescaler
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Input_CC1S =     // Capture/Compare 1 selection
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t CCMR2_Output_RESET_VALUE = 0x0;
    static constexpr uint32_t CCMR2_Output_OC4CE = 0x8000; // OC4CE
    template<uint32_t X>
    static constexpr uint32_t CCMR2_Output_OC4M =          // OC4M
        bit_field_t<12, 0x7>::value<X>();
    static constexpr uint32_t CCMR2_Output_OC4PE = 0x800;  // OC4PE
    static constexpr uint32_t CCMR2_Output_OC4FE = 0x400;  // OC4FE
    template<uint32_t X>
    static constexpr uint32_t CCMR2_Output_CC4S =          // CC4S
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t CCMR2_Output_OC3CE = 0x80;   // OC3CE
    template<uint32_t X>
    static constexpr uint32_t CCMR2_Output_OC3M =          // OC3M
        bit_field_t<4, 0x7>::value<X>();
    static constexpr uint32_t CCMR2_Output_OC3PE = 0x8;    // OC3PE
    static constexpr uint32_t CCMR2_Output_OC3FE = 0x4;    // OC3FE
    template<uint32_t X>
    static constexpr uint32_t CCMR2_Output_CC3S =          // CC3S
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
    static constexpr uint32_t CNT_CNT_H =   // High counter value
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
    static constexpr uint32_t ARR_ARR_H =   // High Auto-reload value
        bit_field_t<16, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ARR_ARR_L =   // Low Auto-reload value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CCR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCR1_CCR1_H =   // High Capture/Compare 1 value
        bit_field_t<16, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR1_CCR1_L =   // Low Capture/Compare 1 value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CCR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCR2_CCR2_H =   // High Capture/Compare 2 value
        bit_field_t<16, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR2_CCR2_L =   // Low Capture/Compare 2 value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CCR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCR3_CCR3_H =   // High Capture/Compare value
        bit_field_t<16, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR3_CCR3_L =   // Low Capture/Compare value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CCR4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCR4_CCR4_H =   // High Capture/Compare value
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
    static constexpr uint32_t DMAR_DMAB =   // DMA register for burst accesses
        bit_field_t<0, 0xffff>::value<X>();
};


////
//
//      General-purpose-timers
//
////

struct stm32f401_tim5_t
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
    volatile uint32_t OR;           // [read-write] TIM5 option register

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
    static constexpr uint32_t CCMR1_Output_OC2CE = 0x8000; // OC2CE
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Output_OC2M =          // OC2M
        bit_field_t<12, 0x7>::value<X>();
    static constexpr uint32_t CCMR1_Output_OC2PE = 0x800;  // OC2PE
    static constexpr uint32_t CCMR1_Output_OC2FE = 0x400;  // OC2FE
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Output_CC2S =          // CC2S
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t CCMR1_Output_OC1CE = 0x80;   // OC1CE
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Output_OC1M =          // OC1M
        bit_field_t<4, 0x7>::value<X>();
    static constexpr uint32_t CCMR1_Output_OC1PE = 0x8;    // OC1PE
    static constexpr uint32_t CCMR1_Output_OC1FE = 0x4;    // OC1FE
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Output_CC1S =          // CC1S
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
    static constexpr uint32_t CCMR1_Input_ICPCS =    // Input capture 1 prescaler
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Input_CC1S =     // Capture/Compare 1 selection
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t CCMR2_Output_RESET_VALUE = 0x0;
    static constexpr uint32_t CCMR2_Output_OC4CE = 0x8000; // OC4CE
    template<uint32_t X>
    static constexpr uint32_t CCMR2_Output_OC4M =          // OC4M
        bit_field_t<12, 0x7>::value<X>();
    static constexpr uint32_t CCMR2_Output_OC4PE = 0x800;  // OC4PE
    static constexpr uint32_t CCMR2_Output_OC4FE = 0x400;  // OC4FE
    template<uint32_t X>
    static constexpr uint32_t CCMR2_Output_CC4S =          // CC4S
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t CCMR2_Output_OC3CE = 0x80;   // OC3CE
    template<uint32_t X>
    static constexpr uint32_t CCMR2_Output_OC3M =          // OC3M
        bit_field_t<4, 0x7>::value<X>();
    static constexpr uint32_t CCMR2_Output_OC3PE = 0x8;    // OC3PE
    static constexpr uint32_t CCMR2_Output_OC3FE = 0x4;    // OC3FE
    template<uint32_t X>
    static constexpr uint32_t CCMR2_Output_CC3S =          // CC3S
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
    static constexpr uint32_t CNT_CNT_H =   // High counter value
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
    static constexpr uint32_t ARR_ARR_H =   // High Auto-reload value
        bit_field_t<16, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ARR_ARR_L =   // Low Auto-reload value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CCR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCR1_CCR1_H =   // High Capture/Compare 1 value
        bit_field_t<16, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR1_CCR1_L =   // Low Capture/Compare 1 value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CCR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCR2_CCR2_H =   // High Capture/Compare 2 value
        bit_field_t<16, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR2_CCR2_L =   // Low Capture/Compare 2 value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CCR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCR3_CCR3_H =   // High Capture/Compare value
        bit_field_t<16, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR3_CCR3_L =   // Low Capture/Compare value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CCR4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCR4_CCR4_H =   // High Capture/Compare value
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
    static constexpr uint32_t DMAR_DMAB =   // DMA register for burst accesses
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t OR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OR_IT4_RMP =   // Timer Input 4 remap
        bit_field_t<6, 0x3>::value<X>();
};


////
//
//      Basic timers
//
////

struct stm32f405_tim6_t
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


////
//
//      Basic timers
//
////

struct stm32f412_tim6_t
{
    volatile uint32_t CR1;  // [read-write] control register 1
    volatile uint32_t CR2;  // [read-write] control register 2
    reserved_t<0x1> _0xc;
    volatile uint32_t DIER; // [read-write] DMA/Interrupt enable register
    volatile uint32_t SR;   // [read-write] status register
    volatile uint32_t EGR;  // [write-only] event generation register
    reserved_t<0x3> _0x24;
    volatile uint32_t CNT;  // counter
    volatile uint32_t PSC;  // [read-write] prescaler
    volatile uint32_t ARR;  // [read-write] auto-reload register

    static constexpr uint32_t CR1_RESET_VALUE = 0x0;
    static constexpr uint32_t CR1_CEN = 0x1;        // Counter enable
    static constexpr uint32_t CR1_UDIS = 0x2;       // Update disable
    static constexpr uint32_t CR1_URS = 0x4;        // Update request source
    static constexpr uint32_t CR1_OPM = 0x8;        // One-pulse mode
    static constexpr uint32_t CR1_ARPE = 0x80;      // Auto-reload preload enable
    static constexpr uint32_t CR1_UIFREMAP = 0x800; // UIF status bit remapping

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
    static constexpr uint32_t CNT_CNT =                // Low counter value
        bit_field_t<0, 0xffff>::value<X>();
    static constexpr uint32_t CNT_UIFCPY = 0x80000000; // UIF Copy

    static constexpr uint32_t PSC_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t PSC_PSC =   // Prescaler value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t ARR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ARR_ARR =   // Low Auto-reload value
        bit_field_t<0, 0xffff>::value<X>();
};


////
//
//      General purpose timers
//
////

struct stm32f401_tim9_t
{
    volatile uint32_t CR1;          // [read-write] control register 1
    volatile uint32_t CR2;          // [read-write] control register 2
    volatile uint32_t SMCR;         // [read-write] slave mode control register
    volatile uint32_t DIER;         // [read-write] DMA/Interrupt enable register
    volatile uint32_t SR;           // [read-write] status register
    volatile uint32_t EGR;          // [write-only] event generation register
    volatile uint32_t CCMR1;        // [read-write] capture/compare mode register 1 (output mode)
    reserved_t<0x1> _0x20;
    volatile uint32_t CCER;         // [read-write] capture/compare enable register
    volatile uint32_t CNT;          // [read-write] counter
    volatile uint32_t PSC;          // [read-write] prescaler
    volatile uint32_t ARR;          // [read-write] auto-reload register
    reserved_t<0x1> _0x34;
    volatile uint32_t CCR1;         // [read-write] capture/compare register 1
    volatile uint32_t CCR2;         // [read-write] capture/compare register 2

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
    template<uint32_t X>
    static constexpr uint32_t CR2_MMS =   // Master mode selection
        bit_field_t<4, 0x7>::value<X>();

    static constexpr uint32_t SMCR_RESET_VALUE = 0x0;
    static constexpr uint32_t SMCR_MSM = 0x80; // Master/Slave mode
    template<uint32_t X>
    static constexpr uint32_t SMCR_TS =        // Trigger selection
        bit_field_t<4, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMCR_SMS =       // Slave mode selection
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t DIER_RESET_VALUE = 0x0;
    static constexpr uint32_t DIER_TIE = 0x40;  // Trigger interrupt enable
    static constexpr uint32_t DIER_CC2IE = 0x4; // Capture/Compare 2 interrupt enable
    static constexpr uint32_t DIER_CC1IE = 0x2; // Capture/Compare 1 interrupt enable
    static constexpr uint32_t DIER_UIE = 0x1;   // Update interrupt enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0;
    static constexpr uint32_t SR_CC2OF = 0x400; // Capture/compare 2 overcapture flag
    static constexpr uint32_t SR_CC1OF = 0x200; // Capture/Compare 1 overcapture flag
    static constexpr uint32_t SR_TIF = 0x40;    // Trigger interrupt flag
    static constexpr uint32_t SR_CC2IF = 0x4;   // Capture/Compare 2 interrupt flag
    static constexpr uint32_t SR_CC1IF = 0x2;   // Capture/compare 1 interrupt flag
    static constexpr uint32_t SR_UIF = 0x1;     // Update interrupt flag

    static constexpr uint32_t EGR_RESET_VALUE = 0x0;
    static constexpr uint32_t EGR_TG = 0x40;  // Trigger generation
    static constexpr uint32_t EGR_CC2G = 0x4; // Capture/compare 2 generation
    static constexpr uint32_t EGR_CC1G = 0x2; // Capture/compare 1 generation
    static constexpr uint32_t EGR_UG = 0x1;   // Update generation

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
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Input_IC2PCS =   // Input capture 2 prescaler
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Input_CC2S =     // Capture/Compare 2 selection
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Input_IC1F =     // Input capture 1 filter
        bit_field_t<4, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Input_ICPCS =    // Input capture 1 prescaler
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Input_CC1S =     // Capture/Compare 1 selection
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t CCER_RESET_VALUE = 0x0;
    static constexpr uint32_t CCER_CC2NP = 0x80; // Capture/Compare 2 output Polarity
    static constexpr uint32_t CCER_CC2P = 0x20;  // Capture/Compare 2 output Polarity
    static constexpr uint32_t CCER_CC2E = 0x10;  // Capture/Compare 2 output enable
    static constexpr uint32_t CCER_CC1NP = 0x8;  // Capture/Compare 1 output Polarity
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

    static constexpr uint32_t CCR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCR1_CCR1 =   // Capture/Compare 1 value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CCR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCR2_CCR2 =   // Capture/Compare 2 value
        bit_field_t<0, 0xffff>::value<X>();
};


////
//
//      General purpose timers
//
////

struct stm32f469_tim9_t
{
    volatile uint32_t CR1;          // [read-write] control register 1
    reserved_t<0x1> _0x8;
    volatile uint32_t SMCR;         // [read-write] slave mode control register
    volatile uint32_t DIER;         // [read-write] DMA/Interrupt enable register
    volatile uint32_t SR;           // [read-write] status register
    volatile uint32_t EGR;          // [write-only] event generation register
    volatile uint32_t CCMR1;        // [read-write] capture/compare mode register 1 (output mode)
    reserved_t<0x1> _0x20;
    volatile uint32_t CCER;         // [read-write] capture/compare enable register
    volatile uint32_t CNT;          // [read-write] counter
    volatile uint32_t PSC;          // [read-write] prescaler
    volatile uint32_t ARR;          // [read-write] auto-reload register
    reserved_t<0x1> _0x34;
    volatile uint32_t CCR1;         // [read-write] capture/compare register 1
    volatile uint32_t CCR2;         // [read-write] capture/compare register 2

    static constexpr uint32_t CR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CR1_CKD =        // Clock division
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t CR1_ARPE = 0x80; // Auto-reload preload enable
    static constexpr uint32_t CR1_OPM = 0x8;   // One-pulse mode
    static constexpr uint32_t CR1_URS = 0x4;   // Update request source
    static constexpr uint32_t CR1_UDIS = 0x2;  // Update disable
    static constexpr uint32_t CR1_CEN = 0x1;   // Counter enable

    static constexpr uint32_t SMCR_RESET_VALUE = 0x0;
    static constexpr uint32_t SMCR_MSM = 0x80; // Master/Slave mode
    template<uint32_t X>
    static constexpr uint32_t SMCR_TS =        // Trigger selection
        bit_field_t<4, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMCR_SMS =       // Slave mode selection
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t DIER_RESET_VALUE = 0x0;
    static constexpr uint32_t DIER_TIE = 0x40;  // Trigger interrupt enable
    static constexpr uint32_t DIER_CC2IE = 0x4; // Capture/Compare 2 interrupt enable
    static constexpr uint32_t DIER_CC1IE = 0x2; // Capture/Compare 1 interrupt enable
    static constexpr uint32_t DIER_UIE = 0x1;   // Update interrupt enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0;
    static constexpr uint32_t SR_CC2OF = 0x400; // Capture/compare 2 overcapture flag
    static constexpr uint32_t SR_CC1OF = 0x200; // Capture/Compare 1 overcapture flag
    static constexpr uint32_t SR_TIF = 0x40;    // Trigger interrupt flag
    static constexpr uint32_t SR_CC2IF = 0x4;   // Capture/Compare 2 interrupt flag
    static constexpr uint32_t SR_CC1IF = 0x2;   // Capture/compare 1 interrupt flag
    static constexpr uint32_t SR_UIF = 0x1;     // Update interrupt flag

    static constexpr uint32_t EGR_RESET_VALUE = 0x0;
    static constexpr uint32_t EGR_TG = 0x40;  // Trigger generation
    static constexpr uint32_t EGR_CC2G = 0x4; // Capture/compare 2 generation
    static constexpr uint32_t EGR_CC1G = 0x2; // Capture/compare 1 generation
    static constexpr uint32_t EGR_UG = 0x1;   // Update generation

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
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Input_IC2PCS =   // Input capture 2 prescaler
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Input_CC2S =     // Capture/Compare 2 selection
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Input_IC1F =     // Input capture 1 filter
        bit_field_t<4, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Input_ICPCS =    // Input capture 1 prescaler
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Input_CC1S =     // Capture/Compare 1 selection
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t CCER_RESET_VALUE = 0x0;
    static constexpr uint32_t CCER_CC2NP = 0x80; // Capture/Compare 2 output Polarity
    static constexpr uint32_t CCER_CC2P = 0x20;  // Capture/Compare 2 output Polarity
    static constexpr uint32_t CCER_CC2E = 0x10;  // Capture/Compare 2 output enable
    static constexpr uint32_t CCER_CC1NP = 0x8;  // Capture/Compare 1 output Polarity
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

    static constexpr uint32_t CCR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCR1_CCR1 =   // Capture/Compare 1 value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CCR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCR2_CCR2 =   // Capture/Compare 2 value
        bit_field_t<0, 0xffff>::value<X>();
};


template<>
struct peripheral_t<STM32F401, TIM1>
{
    typedef stm32f401_tim1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F401, TIM8>
{
    typedef stm32f401_tim1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, TIM1>
{
    typedef stm32f401_tim1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, TIM8>
{
    typedef stm32f401_tim1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, TIM1>
{
    typedef stm32f401_tim1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, TIM8>
{
    typedef stm32f401_tim1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F410, TIM1>
{
    typedef stm32f401_tim1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F410, TIM8>
{
    typedef stm32f401_tim1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F411, TIM1>
{
    typedef stm32f401_tim1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F411, TIM8>
{
    typedef stm32f401_tim1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, TIM1>
{
    typedef stm32f401_tim1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, TIM8>
{
    typedef stm32f401_tim1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, TIM1>
{
    typedef stm32f401_tim1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, TIM8>
{
    typedef stm32f401_tim1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, TIM1>
{
    typedef stm32f401_tim1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, TIM8>
{
    typedef stm32f401_tim1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, TIM1>
{
    typedef stm32f401_tim1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, TIM8>
{
    typedef stm32f401_tim1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, TIM1>
{
    typedef stm32f401_tim1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, TIM8>
{
    typedef stm32f401_tim1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, TIM1>
{
    typedef stm32f401_tim1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, TIM8>
{
    typedef stm32f401_tim1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F401, TIM10>
{
    typedef stm32f401_tim10_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, TIM10>
{
    typedef stm32f401_tim10_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, TIM13>
{
    typedef stm32f401_tim10_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, TIM14>
{
    typedef stm32f401_tim10_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, TIM10>
{
    typedef stm32f401_tim10_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, TIM13>
{
    typedef stm32f401_tim10_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, TIM14>
{
    typedef stm32f401_tim10_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F411, TIM10>
{
    typedef stm32f401_tim10_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, TIM10>
{
    typedef stm32f401_tim10_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, TIM10>
{
    typedef stm32f401_tim10_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, TIM10>
{
    typedef stm32f401_tim10_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, TIM13>
{
    typedef stm32f401_tim10_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, TIM14>
{
    typedef stm32f401_tim10_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, TIM10>
{
    typedef stm32f401_tim10_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, TIM13>
{
    typedef stm32f401_tim10_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, TIM14>
{
    typedef stm32f401_tim10_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, TIM10>
{
    typedef stm32f401_tim10_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, TIM13>
{
    typedef stm32f401_tim10_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, TIM14>
{
    typedef stm32f401_tim10_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, TIM10>
{
    typedef stm32f401_tim10_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, TIM13>
{
    typedef stm32f401_tim10_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, TIM14>
{
    typedef stm32f401_tim10_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F401, TIM11>
{
    typedef stm32f401_tim11_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, TIM11>
{
    typedef stm32f401_tim11_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, TIM11>
{
    typedef stm32f401_tim11_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F410, TIM11>
{
    typedef stm32f401_tim11_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F411, TIM11>
{
    typedef stm32f401_tim11_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, TIM11>
{
    typedef stm32f401_tim11_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, TIM11>
{
    typedef stm32f401_tim11_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, TIM11>
{
    typedef stm32f401_tim11_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, TIM11>
{
    typedef stm32f401_tim11_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, TIM11>
{
    typedef stm32f401_tim11_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, TIM11>
{
    typedef stm32f401_tim11_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F401, TIM2>
{
    typedef stm32f401_tim2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, TIM2>
{
    typedef stm32f401_tim2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, TIM2>
{
    typedef stm32f401_tim2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F411, TIM2>
{
    typedef stm32f401_tim2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, TIM2>
{
    typedef stm32f401_tim2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, TIM2>
{
    typedef stm32f401_tim2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, TIM2>
{
    typedef stm32f401_tim2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, TIM2>
{
    typedef stm32f401_tim2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, TIM2>
{
    typedef stm32f401_tim2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, TIM2>
{
    typedef stm32f401_tim2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F401, TIM3>
{
    typedef stm32f401_tim3_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F401, TIM4>
{
    typedef stm32f401_tim3_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, TIM3>
{
    typedef stm32f401_tim3_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, TIM4>
{
    typedef stm32f401_tim3_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, TIM3>
{
    typedef stm32f401_tim3_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, TIM4>
{
    typedef stm32f401_tim3_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F411, TIM3>
{
    typedef stm32f401_tim3_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F411, TIM4>
{
    typedef stm32f401_tim3_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, TIM3>
{
    typedef stm32f401_tim3_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, TIM4>
{
    typedef stm32f401_tim3_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, TIM3>
{
    typedef stm32f401_tim3_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, TIM4>
{
    typedef stm32f401_tim3_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, TIM3>
{
    typedef stm32f401_tim3_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, TIM4>
{
    typedef stm32f401_tim3_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, TIM3>
{
    typedef stm32f401_tim3_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, TIM4>
{
    typedef stm32f401_tim3_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, TIM3>
{
    typedef stm32f401_tim3_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, TIM4>
{
    typedef stm32f401_tim3_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, TIM3>
{
    typedef stm32f401_tim3_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, TIM4>
{
    typedef stm32f401_tim3_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F401, TIM5>
{
    typedef stm32f401_tim5_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, TIM5>
{
    typedef stm32f401_tim5_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, TIM5>
{
    typedef stm32f401_tim5_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F410, TIM5>
{
    typedef stm32f401_tim5_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F411, TIM5>
{
    typedef stm32f401_tim5_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, TIM5>
{
    typedef stm32f401_tim5_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, TIM5>
{
    typedef stm32f401_tim5_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, TIM5>
{
    typedef stm32f401_tim5_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, TIM5>
{
    typedef stm32f401_tim5_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, TIM5>
{
    typedef stm32f401_tim5_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, TIM5>
{
    typedef stm32f401_tim5_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F401, TIM9>
{
    typedef stm32f401_tim9_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, TIM9>
{
    typedef stm32f401_tim9_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, TIM12>
{
    typedef stm32f401_tim9_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, TIM9>
{
    typedef stm32f401_tim9_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, TIM12>
{
    typedef stm32f401_tim9_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F410, TIM9>
{
    typedef stm32f401_tim9_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F411, TIM9>
{
    typedef stm32f401_tim9_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, TIM9>
{
    typedef stm32f401_tim9_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, TIM9>
{
    typedef stm32f401_tim9_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, TIM9>
{
    typedef stm32f401_tim9_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, TIM12>
{
    typedef stm32f401_tim9_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, TIM9>
{
    typedef stm32f401_tim9_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, TIM12>
{
    typedef stm32f401_tim9_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, TIM9>
{
    typedef stm32f401_tim9_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, TIM12>
{
    typedef stm32f401_tim9_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, TIM6>
{
    typedef stm32f405_tim6_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, TIM7>
{
    typedef stm32f405_tim6_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, TIM6>
{
    typedef stm32f405_tim6_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, TIM7>
{
    typedef stm32f405_tim6_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F410, TIM6>
{
    typedef stm32f405_tim6_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, TIM6>
{
    typedef stm32f405_tim6_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, TIM7>
{
    typedef stm32f405_tim6_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, TIM6>
{
    typedef stm32f405_tim6_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, TIM7>
{
    typedef stm32f405_tim6_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, TIM6>
{
    typedef stm32f405_tim6_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, TIM7>
{
    typedef stm32f405_tim6_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, TIM6>
{
    typedef stm32f405_tim6_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, TIM7>
{
    typedef stm32f405_tim6_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, TIM6>
{
    typedef stm32f412_tim6_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, TIM7>
{
    typedef stm32f412_tim6_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, TIM7>
{
    typedef stm32f412_tim6_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, TIM6>
{
    typedef stm32f412_tim6_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, TIM12>
{
    typedef stm32f412_tim12_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, TIM12>
{
    typedef stm32f412_tim12_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, TIM13>
{
    typedef stm32f412_tim13_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, TIM14>
{
    typedef stm32f412_tim13_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, TIM13>
{
    typedef stm32f412_tim13_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, TIM14>
{
    typedef stm32f412_tim13_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, TIM9>
{
    typedef stm32f469_tim9_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, TIM12>
{
    typedef stm32f469_tim9_t T;
    static T& V;
};

using tim1_t = peripheral_t<mcu_svd, TIM1>;
using tim10_t = peripheral_t<mcu_svd, TIM10>;
using tim11_t = peripheral_t<mcu_svd, TIM11>;
using tim12_t = peripheral_t<mcu_svd, TIM12>;
using tim13_t = peripheral_t<mcu_svd, TIM13>;
using tim14_t = peripheral_t<mcu_svd, TIM14>;
using tim2_t = peripheral_t<mcu_svd, TIM2>;
using tim3_t = peripheral_t<mcu_svd, TIM3>;
using tim4_t = peripheral_t<mcu_svd, TIM4>;
using tim5_t = peripheral_t<mcu_svd, TIM5>;
using tim6_t = peripheral_t<mcu_svd, TIM6>;
using tim7_t = peripheral_t<mcu_svd, TIM7>;
using tim8_t = peripheral_t<mcu_svd, TIM8>;
using tim9_t = peripheral_t<mcu_svd, TIM9>;

template<int INST> struct tim_traits {};

template<> struct tim_traits<1>
{
    using tim = tim1_t;
    static constexpr alternate_function_t BKIN = TIM1_BKIN;
    static constexpr alternate_function_t CH1 = TIM1_CH1;
    static constexpr alternate_function_t CH1N = TIM1_CH1N;
    static constexpr alternate_function_t CH2 = TIM1_CH2;
    static constexpr alternate_function_t CH2N = TIM1_CH2N;
    static constexpr alternate_function_t CH3 = TIM1_CH3;
    static constexpr alternate_function_t CH3N = TIM1_CH3N;
    static constexpr alternate_function_t CH4 = TIM1_CH4;
    static constexpr alternate_function_t ETR = TIM1_ETR;
};

template<> struct tim_traits<10>
{
    using tim = tim10_t;
    static constexpr alternate_function_t CH1 = TIM10_CH1;
};

template<> struct tim_traits<11>
{
    using tim = tim11_t;
    static constexpr alternate_function_t CH1 = TIM11_CH1;
};

template<> struct tim_traits<12>
{
    using tim = tim12_t;
    static constexpr alternate_function_t CH1 = TIM12_CH1;
    static constexpr alternate_function_t CH2 = TIM12_CH2;
};

template<> struct tim_traits<13>
{
    using tim = tim13_t;
    static constexpr alternate_function_t CH1 = TIM13_CH1;
};

template<> struct tim_traits<14>
{
    using tim = tim14_t;
    static constexpr alternate_function_t CH1 = TIM14_CH1;
};

template<> struct tim_traits<2>
{
    using tim = tim2_t;
    static constexpr alternate_function_t CH1 = TIM2_CH1;
    static constexpr alternate_function_t CH2 = TIM2_CH2;
    static constexpr alternate_function_t CH3 = TIM2_CH3;
    static constexpr alternate_function_t CH4 = TIM2_CH4;
    static constexpr alternate_function_t ETR = TIM2_ETR;
};

template<> struct tim_traits<3>
{
    using tim = tim3_t;
    static constexpr alternate_function_t CH1 = TIM3_CH1;
    static constexpr alternate_function_t CH2 = TIM3_CH2;
    static constexpr alternate_function_t CH3 = TIM3_CH3;
    static constexpr alternate_function_t CH4 = TIM3_CH4;
    static constexpr alternate_function_t ETR = TIM3_ETR;
};

template<> struct tim_traits<4>
{
    using tim = tim4_t;
    static constexpr alternate_function_t CH1 = TIM4_CH1;
    static constexpr alternate_function_t CH2 = TIM4_CH2;
    static constexpr alternate_function_t CH3 = TIM4_CH3;
    static constexpr alternate_function_t CH4 = TIM4_CH4;
    static constexpr alternate_function_t ETR = TIM4_ETR;
};

template<> struct tim_traits<5>
{
    using tim = tim5_t;
    static constexpr alternate_function_t CH1 = TIM5_CH1;
    static constexpr alternate_function_t CH2 = TIM5_CH2;
    static constexpr alternate_function_t CH3 = TIM5_CH3;
    static constexpr alternate_function_t CH4 = TIM5_CH4;
};

template<> struct tim_traits<6>
{
    using tim = tim6_t;
};

template<> struct tim_traits<7>
{
    using tim = tim7_t;
};

template<> struct tim_traits<8>
{
    using tim = tim8_t;
    static constexpr alternate_function_t BKIN = TIM8_BKIN;
    static constexpr alternate_function_t CH1 = TIM8_CH1;
    static constexpr alternate_function_t CH1N = TIM8_CH1N;
    static constexpr alternate_function_t CH2 = TIM8_CH2;
    static constexpr alternate_function_t CH2N = TIM8_CH2N;
    static constexpr alternate_function_t CH3 = TIM8_CH3;
    static constexpr alternate_function_t CH3N = TIM8_CH3N;
    static constexpr alternate_function_t CH4 = TIM8_CH4;
    static constexpr alternate_function_t ETR = TIM8_ETR;
};

template<> struct tim_traits<9>
{
    using tim = tim9_t;
    static constexpr alternate_function_t CH1 = TIM9_CH1;
    static constexpr alternate_function_t CH2 = TIM9_CH2;
};

