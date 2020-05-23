#pragma once

////
//
//      STM32L1 TIM peripherals
//
////

////
//
//      General-purpose timers
//
////

struct stm32l100_tim10_t
{
    volatile uint32_t CR1;          // [read-write] control register 1
    reserved_t<0x2> _0xc;
    volatile uint32_t DIER;         // [read-write] Interrupt enable register
    volatile uint32_t SR;           // [read-write] status register
    volatile uint32_t EGR;          // [read-write] event generation register
    volatile uint32_t CCMR1;        // [read-write] capture/compare mode register
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
    static constexpr uint32_t SR_CC1OF = 0x200; // Capture/compare 1 overcapture flag
    static constexpr uint32_t SR_CC1IF = 0x2;   // Capture/Compare 1 interrupt flag
    static constexpr uint32_t SR_UIF = 0x1;     // Update interrupt flag

    static constexpr uint32_t EGR_RESET_VALUE = 0x0;
    static constexpr uint32_t EGR_CC1G = 0x2; // Capture/Compare 1 generation
    static constexpr uint32_t EGR_UG = 0x1;   // Update generation

    static constexpr uint32_t CCMR1_Output_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Output_OC1M =       // Output compare 1 mode
        bit_field_t<4, 0x7>::value<X>();
    static constexpr uint32_t CCMR1_Output_OC1PE = 0x8; // Output compare 1 preload enable
    static constexpr uint32_t CCMR1_Output_OC1FE = 0x4; // Output compare 1 fast enable
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
    static constexpr uint32_t CCER_CC1NP = 0x8; // Capture/Compare 1 complementary output Polarity
    static constexpr uint32_t CCER_CC1P = 0x2;  // Capture/Compare 1 output Polarity
    static constexpr uint32_t CCER_CC1E = 0x1;  // Capture/Compare 1 output enable

    static constexpr uint32_t CNT_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CNT_CNT =   // TIM10 counter
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t PSC_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t PSC_PSC =   // TIM9 prescaler
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
    static constexpr uint32_t OR_TI1_RMP =   // TIM11 Input 1 remapping capability
        bit_field_t<0, 0x3>::value<X>();
};


////
//
//      General-purpose timers
//
////

struct stm32l151_tim10_t
{
    volatile uint32_t CR1;          // [read-write] control register 1
    volatile uint32_t CR2;          // [read-write] TIM10 control register 2
    volatile uint32_t SMCR;         // [read-write] TIM10 slave mode control register
    volatile uint32_t DIER;         // [read-write] Interrupt enable register
    volatile uint32_t SR;           // [read-write] status register
    volatile uint32_t EGR;          // [write-only] event generation register
    volatile uint32_t CCMR1;        // [read-write] capture/compare mode register
    reserved_t<0x1> _0x20;
    volatile uint32_t CCER;         // [read-write] capture/compare enable register
    volatile uint32_t CNT;          // [read-write] counter
    volatile uint32_t PSC;          // [read-write] prescaler
    volatile uint32_t ARR;          // [read-write] auto-reload register
    reserved_t<0x1> _0x34;
    volatile uint32_t CCR1;         // [read-write] capture/compare register 1
    volatile uint32_t CCR2;         // [read-write] TIM10 capture/compare register 2
    reserved_t<0x5> _0x50;
    volatile uint32_t OR;           // [read-write] option register

    static constexpr uint32_t CR1_RESET_VALUE = 0x0;
    static constexpr uint32_t CR1_CEN = 0x1;   // Counter enable
    static constexpr uint32_t CR1_UDIS = 0x2;  // Update disable
    static constexpr uint32_t CR1_URS = 0x4;   // Update request source
    static constexpr uint32_t CR1_OPM = 0x8;   // One-pulse mode
    static constexpr uint32_t CR1_ARPE = 0x80; // Auto-reload preload enable
    template<uint32_t X>
    static constexpr uint32_t CR1_CKD =        // Clock division
        bit_field_t<8, 0x3>::value<X>();

    static constexpr uint32_t DIER_RESET_VALUE = 0x0;
    static constexpr uint32_t DIER_UIE = 0x1;   // Update interrupt enable
    static constexpr uint32_t DIER_CC1IE = 0x2; // Capture/Compare 1 interrupt enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0;
    static constexpr uint32_t SR_UIF = 0x1;     // Update interrupt flag
    static constexpr uint32_t SR_CC1IF = 0x2;   // Capture/Compare 1 interrupt flag
    static constexpr uint32_t SR_CC1OF = 0x200; // Capture/compare 1 overcapture flag

    static constexpr uint32_t EGR_RESET_VALUE = 0x0;
    static constexpr uint32_t EGR_UG = 0x1;   // Update generation
    static constexpr uint32_t EGR_CC1G = 0x2; // Capture/Compare 1 generation

    static constexpr uint32_t CCMR1_Output_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Output_CC1S =        // Capture/Compare 1 selection
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t CCMR1_Output_OC1FE = 0x4;  // Output compare 1 fast enable
    static constexpr uint32_t CCMR1_Output_OC1PE = 0x8;  // Output compare 1 preload enable
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Output_OC1M =        // Output compare 1 mode
        bit_field_t<4, 0x7>::value<X>();
    static constexpr uint32_t CCMR1_Output_OC1CE = 0x80; // Output compare 1 clear enable

    static constexpr uint32_t CCMR1_Input_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Input_CC1S =     // Capture/Compare 1 selection
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Input_IC1PSC =   // Input capture 1 prescaler
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Input_IC1F =     // Input capture 1 filter
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t CCER_RESET_VALUE = 0x0;
    static constexpr uint32_t CCER_CC1NP = 0x8; // Capture/Compare 1 complementary output Polarity
    static constexpr uint32_t CCER_CC1P = 0x2;  // Capture/Compare 1 output Polarity
    static constexpr uint32_t CCER_CC1E = 0x1;  // Capture/Compare 1 output enable

    static constexpr uint32_t CNT_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CNT_CNT =   // TIM10 counter
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t PSC_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t PSC_PSC =   // TIM9 prescaler
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
    static constexpr uint32_t OR_TI1_RMP =         // Timer 10 input 1 remap
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t OR_ETR_RMP = 0x4;    // Timer10 ETR remap
    static constexpr uint32_t OR_TI1_RMP_RI = 0x8; // Timer10 Input 1 remap for Routing Interface (RI)

    static constexpr uint32_t CR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CR2_MMS =   // Master mode selection
        bit_field_t<4, 0x7>::value<X>();

    static constexpr uint32_t SMCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SMCR_ETF =         // External trigger filter
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMCR_ETPS =        // External trigger prescaler
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t SMCR_ECE = 0x4000; // External clock enable
    static constexpr uint32_t SMCR_ETP = 0x8000; // External trigger polarity

    static constexpr uint32_t CCR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCR2_CCR2 =   // Capture/Compare 2 value
        bit_field_t<0, 0xffff>::value<X>();
};


////
//
//      General-purpose timers
//
////

struct stm32l151_tim11_t
{
    volatile uint32_t CR1;          // [read-write] control register 1
    reserved_t<0x1> _0x8;
    volatile uint32_t SMCR;         // [read-write] TIM 11 slave mode control register 1
    volatile uint32_t DIER;         // [read-write] Interrupt enable register
    volatile uint32_t SR;           // [read-write] status register
    volatile uint32_t EGR;          // [write-only] event generation register
    volatile uint32_t CCMR1;        // [read-write] capture/compare mode register
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
    static constexpr uint32_t CR1_OPM = 0x8;   // One-pulse mode

    static constexpr uint32_t DIER_RESET_VALUE = 0x0;
    static constexpr uint32_t DIER_UIE = 0x1;   // Update interrupt enable
    static constexpr uint32_t DIER_CC1IE = 0x2; // Capture/Compare 1 interrupt enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0;
    static constexpr uint32_t SR_CC1OF = 0x200; // Capture/compare 1 overcapture flag
    static constexpr uint32_t SR_CC1IF = 0x2;   // Capture/Compare 1 interrupt flag
    static constexpr uint32_t SR_UIF = 0x1;     // Update interrupt flag

    static constexpr uint32_t EGR_RESET_VALUE = 0x0;
    static constexpr uint32_t EGR_CC1G = 0x2; // Capture/Compare 1 generation
    static constexpr uint32_t EGR_UG = 0x1;   // Update generation

    static constexpr uint32_t CCMR1_Output_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Output_CC1S =        // Capture/Compare 1 selection
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t CCMR1_Output_OC1FE = 0x4;  // Output compare 1 fast enable
    static constexpr uint32_t CCMR1_Output_OC1PE = 0x8;  // Output compare 1 preload enable
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Output_OC1M =        // Output compare 1 mode
        bit_field_t<4, 0x7>::value<X>();
    static constexpr uint32_t CCMR1_Output_OC1CE = 0x80; // Output compare 1 clear enable

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
    static constexpr uint32_t CCER_CC1NP = 0x8; // Capture/Compare 1 complementary output Polarity
    static constexpr uint32_t CCER_CC1P = 0x2;  // Capture/Compare 1 output Polarity
    static constexpr uint32_t CCER_CC1E = 0x1;  // Capture/Compare 1 output enable

    static constexpr uint32_t CNT_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CNT_CNT =   // TIM10 counter
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t PSC_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t PSC_PSC =   // TIM9 prescaler
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
    static constexpr uint32_t OR_TI1_RMP =         // TIM11 Input 1 remapping capability
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t OR_ETR_RMP = 0x4;    // Timer11 ETR remap
    static constexpr uint32_t OR_TI1_RMP_RI = 0x8; // Timer11 Input 1 remap for Routing Interface (RI)

    static constexpr uint32_t SMCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SMCR_ETF =         // External trigger filter
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMCR_ETPS =        // External trigger prescaler
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t SMCR_ECE = 0x4000; // External clock enable
    static constexpr uint32_t SMCR_ETP = 0x8000; // External trigger polarity
};


////
//
//      General-purpose timers
//
////

struct stm32l100_tim2_t
{
    volatile uint32_t CR1;          // [read-write] control register 1
    volatile uint32_t CR2;          // [read-write] control register 2
    volatile uint32_t SMCR;         // [read-write] slave mode control register
    volatile uint32_t DIER;         // [read-write] Interrupt enable register
    volatile uint32_t SR;           // [read-write] status register
    volatile uint32_t EGR;          // [read-write] event generation register
    volatile uint32_t CCMR1;        // [read-write] capture/compare mode register 1
    volatile uint32_t CCMR2;        // [read-write] capture/compare mode register 2
    volatile uint32_t CCER;         // [read-write] capture/compare enable register
    volatile uint32_t CNT;          // [read-write] counter
    volatile uint32_t PSC;          // [read-write] prescaler
    volatile uint32_t ARR;          // [read-write] auto-reload register
    reserved_t<0x1> _0x34;
    volatile uint32_t CCR1;         // [read-write] capture/compare register 1
    volatile uint32_t CCR2;         // [read-write] capture/compare register 1
    volatile uint32_t CCR3;         // [read-write] capture/compare register 1
    volatile uint32_t CCR4;         // [read-write] capture/compare register 1
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
    static constexpr uint32_t SMCR_OCCS = 0x8;   // OCREF clear selection
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
    static constexpr uint32_t SR_CC4OF = 0x1000; // Capture/compare 1 overcapture flag
    static constexpr uint32_t SR_CC3OF = 0x800;  // Capture/compare 3 overcapture flag
    static constexpr uint32_t SR_CC2OF = 0x400;  // Capture/compare 2 overcapture flag
    static constexpr uint32_t SR_CC1OF = 0x200;  // Capture/compare 1 overcapture flag
    static constexpr uint32_t SR_TIF = 0x40;     // Trigger interrupt flag
    static constexpr uint32_t SR_CC4IF = 0x10;   // Capture/Compare 4 interrupt flag
    static constexpr uint32_t SR_CC3IF = 0x8;    // Capture/Compare 3 interrupt flag
    static constexpr uint32_t SR_CC2IF = 0x4;    // Capture/Compare 2 interrupt flag
    static constexpr uint32_t SR_CC1IF = 0x2;    // Capture/Compare 1 interrupt flag
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
    static constexpr uint32_t CCMR1_Output_CC2S = 0x100;   // Capture/Compare 2 selection
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
    static constexpr uint32_t CCMR2_Output_CC4S = 0x100;   // Capture/Compare 4 selection
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
    static constexpr uint32_t CCER_CC4NP = 0x8000; // Capture/Compare 4 output Polarity
    static constexpr uint32_t CCER_CC4P = 0x2000;  // Capture/Compare 4 output Polarity
    static constexpr uint32_t CCER_CC4E = 0x1000;  // Capture/Compare 4 output enable
    static constexpr uint32_t CCER_CC3NP = 0x800;  // Capture/Compare 3 output Polarity
    static constexpr uint32_t CCER_CC3P = 0x200;   // Capture/Compare 3 output Polarity
    static constexpr uint32_t CCER_CC3E = 0x100;   // Capture/Compare 3 output enable
    static constexpr uint32_t CCER_CC2NP = 0x80;   // Capture/Compare 2 output Polarity
    static constexpr uint32_t CCER_CC2P = 0x20;    // Capture/Compare 2 output Polarity
    static constexpr uint32_t CCER_CC2E = 0x10;    // Capture/Compare 2 output enable
    static constexpr uint32_t CCER_CC1NP = 0x8;    // Capture/Compare 1 complementary output Polarity
    static constexpr uint32_t CCER_CC1P = 0x2;     // Capture/Compare 1 output Polarity
    static constexpr uint32_t CCER_CC1E = 0x1;     // Capture/Compare 1 output enable

    static constexpr uint32_t CNT_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CNT_CNT =   // TIM2 counter
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t PSC_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t PSC_PSC =   // TIM2 prescaler
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
    static constexpr uint32_t CCR3_CCR1 =   // Capture/Compare 1 value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CCR4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCR4_CCR4 =   // Capture/Compare 4 value
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
//      Basic timers
//
////

struct stm32l100_tim6_t
{
    volatile uint32_t CR1;  // [read-write] TIM6 control register 1
    volatile uint32_t CR2;  // [read-write] TIM6 control register 2
    reserved_t<0x1> _0xc;
    volatile uint32_t DIER; // [read-write] TIM6 DMA/Interrupt enable register
    volatile uint32_t SR;   // [read-write] TIM6 status register
    volatile uint32_t EGR;  // [write-only] TIM6 event generation register
    reserved_t<0x3> _0x24;
    volatile uint32_t CNT;  // [read-write] TIM6 counter
    volatile uint32_t PSC;  // [read-write] TIM6 prescaler
    volatile uint32_t ARR;  // [read-write] TIM6 auto-reload register

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
    static constexpr uint32_t CNT_CNT =   // CNT
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t PSC_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t PSC_PSC =   // Prescaler valueThe counter clock frequency CK_CNT is equal to fCK_PSC / (PSC[15:0] + 1).
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t ARR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ARR_ARR =   // Prescaler value
        bit_field_t<0, 0xffff>::value<X>();
};


////
//
//      General-purpose timers
//
////

struct stm32l100_tim9_t
{
    volatile uint32_t CR1;          // [read-write] control register 1
    volatile uint32_t CR2;          // [read-write] control register 2
    volatile uint32_t SMCR;         // [read-write] slave mode control register
    volatile uint32_t DIER;         // [read-write] Interrupt enable register
    volatile uint32_t SR;           // [read-write] status register
    volatile uint32_t EGR;          // [read-write] event generation register
    volatile uint32_t CCMR1;        // [read-write] capture/compare mode register 1
    reserved_t<0x2> _0x24;
    volatile uint32_t CNT;          // [read-write] counter
    volatile uint32_t PSC;          // [read-write] prescaler
    volatile uint32_t ARR;          // [read-write] auto-reload register
    reserved_t<0x1> _0x34;
    volatile uint32_t CCR1;         // [read-write] capture/compare register 1
    volatile uint32_t CCR2;         // [read-write] capture/compare register 2
    reserved_t<0x5> _0x50;
    volatile uint32_t OR;           // [read-write] option register

    static constexpr uint32_t CR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CR1_CKD =        // Clock division
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t CR1_ARPE = 0x80; // Auto-reload preload enable
    static constexpr uint32_t CR1_OMP = 0x8;   // One-pulse mode
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
    static constexpr uint32_t SR_CC1OF = 0x200; // Capture/compare 1 overcapture flag
    static constexpr uint32_t SR_TIF = 0x40;    // Trigger interrupt flag
    static constexpr uint32_t SR_CC2IF = 0x4;   // Capture/Compare 2 interrupt flag
    static constexpr uint32_t SR_CC1IF = 0x2;   // Capture/Compare 1 interrupt flag
    static constexpr uint32_t SR_UIF = 0x1;     // Update interrupt flag

    static constexpr uint32_t EGR_RESET_VALUE = 0x0;
    static constexpr uint32_t EGR_TG = 0x40;  // Trigger generation
    static constexpr uint32_t EGR_CC2G = 0x4; // Capture/Compare 2 generation
    static constexpr uint32_t EGR_CC1G = 0x2; // Capture/Compare 1 generation
    static constexpr uint32_t EGR_UG = 0x1;   // Update generation

    static constexpr uint32_t CCMR1_Output_RESET_VALUE = 0x0;
    static constexpr uint32_t CCMR1_Output_OC2CE = 0x8000; // Output compare 2 clear enable
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Output_OC2M =          // Output compare 2 mode
        bit_field_t<12, 0x7>::value<X>();
    static constexpr uint32_t CCMR1_Output_OC2PE = 0x800;  // Output compare 2 preload enable
    static constexpr uint32_t CCMR1_Output_OC2FE = 0x400;  // Output compare 2 fast enable
    static constexpr uint32_t CCMR1_Output_CC2S = 0x100;   // Capture/Compare 2 selection
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

    static constexpr uint32_t CNT_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CNT_CNT =   // TIM9 counter
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t PSC_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t PSC_PSC =   // TIM9 prescaler
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

    static constexpr uint32_t OR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OR_TI1_RMP =   // TIM9 Input 1 remapping capability
        bit_field_t<0, 0x3>::value<X>();
};


template<>
struct peripheral_t<STM32L100, TIM10>
{
    typedef stm32l100_tim10_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L100, TIM11>
{
    typedef stm32l100_tim10_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L162, TIM10>
{
    typedef stm32l100_tim10_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L162, TIM11>
{
    typedef stm32l100_tim10_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L100, TIM2>
{
    typedef stm32l100_tim2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L100, TIM3>
{
    typedef stm32l100_tim2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L100, TIM4>
{
    typedef stm32l100_tim2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L100, TIM5>
{
    typedef stm32l100_tim2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L151, TIM2>
{
    typedef stm32l100_tim2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L151, TIM3>
{
    typedef stm32l100_tim2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L151, TIM4>
{
    typedef stm32l100_tim2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L151, TIM5>
{
    typedef stm32l100_tim2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L152, TIM2>
{
    typedef stm32l100_tim2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L152, TIM3>
{
    typedef stm32l100_tim2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L152, TIM4>
{
    typedef stm32l100_tim2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L152, TIM5>
{
    typedef stm32l100_tim2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L162, TIM2>
{
    typedef stm32l100_tim2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L162, TIM3>
{
    typedef stm32l100_tim2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L162, TIM4>
{
    typedef stm32l100_tim2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L162, TIM5>
{
    typedef stm32l100_tim2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L100, TIM6>
{
    typedef stm32l100_tim6_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L100, TIM7>
{
    typedef stm32l100_tim6_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L151, TIM6>
{
    typedef stm32l100_tim6_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L151, TIM7>
{
    typedef stm32l100_tim6_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L152, TIM6>
{
    typedef stm32l100_tim6_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L152, TIM7>
{
    typedef stm32l100_tim6_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L162, TIM6>
{
    typedef stm32l100_tim6_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L162, TIM7>
{
    typedef stm32l100_tim6_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L100, TIM9>
{
    typedef stm32l100_tim9_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L151, TIM9>
{
    typedef stm32l100_tim9_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L152, TIM9>
{
    typedef stm32l100_tim9_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L162, TIM9>
{
    typedef stm32l100_tim9_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L151, TIM10>
{
    typedef stm32l151_tim10_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L152, TIM10>
{
    typedef stm32l151_tim10_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L151, TIM11>
{
    typedef stm32l151_tim11_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L152, TIM11>
{
    typedef stm32l151_tim11_t T;
    static T& V;
};

using tim10_t = peripheral_t<mcu_svd, TIM10>;
using tim11_t = peripheral_t<mcu_svd, TIM11>;
using tim2_t = peripheral_t<mcu_svd, TIM2>;
using tim3_t = peripheral_t<mcu_svd, TIM3>;
using tim4_t = peripheral_t<mcu_svd, TIM4>;
using tim5_t = peripheral_t<mcu_svd, TIM5>;
using tim6_t = peripheral_t<mcu_svd, TIM6>;
using tim7_t = peripheral_t<mcu_svd, TIM7>;
using tim9_t = peripheral_t<mcu_svd, TIM9>;

template<int INST> struct tim_traits {};

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
    static constexpr alternate_function_t ETR = TIM5_ETR;
};

template<> struct tim_traits<6>
{
    using tim = tim6_t;
};

template<> struct tim_traits<7>
{
    using tim = tim7_t;
};

template<> struct tim_traits<9>
{
    using tim = tim9_t;
    static constexpr alternate_function_t CH1 = TIM9_CH1;
    static constexpr alternate_function_t CH2 = TIM9_CH2;
};

