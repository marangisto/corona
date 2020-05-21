#pragma once

////
//
//      STM32H7 TIMs peripherals
//
////

////
//
//      General purpose timers
//
////

struct stm32h742x_tim15_t
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
    volatile uint32_t CNT;          // counter
    volatile uint32_t PSC;          // [read-write] prescaler
    volatile uint32_t ARR;          // [read-write] auto-reload register
    volatile uint32_t RCR;          // [read-write] repetition counter register
    volatile uint32_t CCR1;         // [read-write] capture/compare register 1
    volatile uint32_t CCR2;         // [read-write] capture/compare register 2
    reserved_t<0x2> _0x44;
    volatile uint32_t BDTR;         // [read-write] break and dead-time register
    volatile uint32_t DCR;          // [read-write] DMA control register
    volatile uint32_t DMAR;         // [read-write] DMA address for full transfer
    reserved_t<0x4> _0x60;
    volatile uint32_t AF1;          // [read-write] TIM15 alternate fdfsdm1_breakon register 1
    reserved_t<0x1> _0x68;
    volatile uint32_t TISEL;        // [read-write] TIM15 input selection register

    static constexpr uint32_t CR1_RESET_VALUE = 0x0;
    static constexpr uint32_t CR1_CEN = 0x1;        // Counter enable
    static constexpr uint32_t CR1_UDIS = 0x2;       // Update disable
    static constexpr uint32_t CR1_URS = 0x4;        // Update request source
    static constexpr uint32_t CR1_OPM = 0x8;        // One-pulse mode
    static constexpr uint32_t CR1_ARPE = 0x80;      // Auto-reload preload enable
    template<uint32_t X>
    static constexpr uint32_t CR1_CKD =             // Clock division
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t CR1_UIFREMAP = 0x800; // UIF status bit remapping

    static constexpr uint32_t CR2_RESET_VALUE = 0x0;
    static constexpr uint32_t CR2_CCPC = 0x1;    // Capture/compare preloaded control
    static constexpr uint32_t CR2_CCUS = 0x4;    // Capture/compare control update selection
    static constexpr uint32_t CR2_CCDS = 0x8;    // Capture/compare DMA selection
    template<uint32_t X>
    static constexpr uint32_t CR2_MMS =          // Master mode selection
        bit_field_t<4, 0x7>::value<X>();
    static constexpr uint32_t CR2_TI1S = 0x80;   // TI1 selection
    static constexpr uint32_t CR2_OIS1 = 0x100;  // Output Idle state 1
    static constexpr uint32_t CR2_OIS1N = 0x200; // Output Idle state 1
    static constexpr uint32_t CR2_OIS2 = 0x400;  // Output Idle state 2

    static constexpr uint32_t SMCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SMCR_SMS =            // Slave mode selection
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMCR_TS_2_0 =         // Trigger selection
        bit_field_t<4, 0x7>::value<X>();
    static constexpr uint32_t SMCR_MSM = 0x80;      // Master/Slave mode
    static constexpr uint32_t SMCR_SMS_3 = 0x10000; // Slave mode selection bit 3
    template<uint32_t X>
    static constexpr uint32_t SMCR_TS_4_3 =         // Trigger selection - bit 4:3
        bit_field_t<20, 0x3>::value<X>();

    static constexpr uint32_t DIER_RESET_VALUE = 0x0;
    static constexpr uint32_t DIER_UIE = 0x1;      // Update interrupt enable
    static constexpr uint32_t DIER_CC1IE = 0x2;    // Capture/Compare 1 interrupt enable
    static constexpr uint32_t DIER_CC2IE = 0x4;    // Capture/Compare 2 interrupt enable
    static constexpr uint32_t DIER_COMIE = 0x20;   // COM interrupt enable
    static constexpr uint32_t DIER_TIE = 0x40;     // Trigger interrupt enable
    static constexpr uint32_t DIER_BIE = 0x80;     // Break interrupt enable
    static constexpr uint32_t DIER_UDE = 0x100;    // Update DMA request enable
    static constexpr uint32_t DIER_CC1DE = 0x200;  // Capture/Compare 1 DMA request enable
    static constexpr uint32_t DIER_CC2DE = 0x400;  // Capture/Compare 2 DMA request enable
    static constexpr uint32_t DIER_COMDE = 0x2000; // COM DMA request enable
    static constexpr uint32_t DIER_TDE = 0x4000;   // Trigger DMA request enable

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
    static constexpr uint32_t CCMR1_Output_CC1S =              // Capture/Compare 1 selection
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t CCMR1_Output_OC1FE = 0x4;        // Output Compare 1 fast enable
    static constexpr uint32_t CCMR1_Output_OC1PE = 0x8;        // Output Compare 1 preload enable
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Output_OC1M =              // Output Compare 1 mode
        bit_field_t<4, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Output_CC2S =              // Capture/Compare 2 selection
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t CCMR1_Output_OC2FE = 0x400;      // Output Compare 2 fast enable
    static constexpr uint32_t CCMR1_Output_OC2PE = 0x800;      // Output Compare 2 preload enable
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Output_OC2M =              // Output Compare 2 mode
        bit_field_t<12, 0x7>::value<X>();
    static constexpr uint32_t CCMR1_Output_OC1M_3 = 0x10000;   // Output Compare 1 mode bit 3
    static constexpr uint32_t CCMR1_Output_OC2M_3 = 0x1000000; // Output Compare 2 mode bit 3

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
    static constexpr uint32_t CNT_CNT =                // counter value
        bit_field_t<0, 0xffff>::value<X>();
    static constexpr uint32_t CNT_UIFCPY = 0x80000000; // UIF copy

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
    template<uint32_t X>
    static constexpr uint32_t BDTR_BKF =         // Break filter
        bit_field_t<16, 0xf>::value<X>();

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

    static constexpr uint32_t AF1_RESET_VALUE = 0x0;
    static constexpr uint32_t AF1_BKINE = 0x1;       // BRK BKIN input enable
    static constexpr uint32_t AF1_BKCMP1E = 0x2;     // BRK COMP1 enable
    static constexpr uint32_t AF1_BKCMP2E = 0x4;     // BRK COMP2 enable
    static constexpr uint32_t AF1_BKDF1BK0E = 0x100; // BRK dfsdm1_break[0] enable
    static constexpr uint32_t AF1_BKINP = 0x200;     // BRK BKIN input polarity
    static constexpr uint32_t AF1_BKCMP1P = 0x400;   // BRK COMP1 input polarity
    static constexpr uint32_t AF1_BKCMP2P = 0x800;   // BRK COMP2 input polarity

    static constexpr uint32_t TISEL_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TISEL_TI1SEL =   // selects TI1[0] to TI1[15] input
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TISEL_TI2SEL =   // selects TI2[0] to TI2[15] input
        bit_field_t<8, 0xf>::value<X>();
};


////
//
//      General-purpose-timers
//
////

struct stm32h742x_tim16_t
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
    volatile uint32_t CNT;          // counter
    volatile uint32_t PSC;          // [read-write] prescaler
    volatile uint32_t ARR;          // [read-write] auto-reload register
    volatile uint32_t RCR;          // [read-write] repetition counter register
    volatile uint32_t CCR1;         // [read-write] capture/compare register 1
    reserved_t<0x3> _0x44;
    volatile uint32_t BDTR;         // [read-write] break and dead-time register
    volatile uint32_t DCR;          // [read-write] DMA control register
    volatile uint32_t DMAR;         // [read-write] DMA address for full transfer
    reserved_t<0x4> _0x60;
    volatile uint32_t TIM16_AF1;    // [read-write] TIM16 alternate function register 1
    reserved_t<0x1> _0x68;
    volatile uint32_t TIM16_TISEL;  // [read-write] TIM16 input selection register

    static constexpr uint32_t CR1_RESET_VALUE = 0x0;
    static constexpr uint32_t CR1_CEN = 0x1;        // Counter enable
    static constexpr uint32_t CR1_UDIS = 0x2;       // Update disable
    static constexpr uint32_t CR1_URS = 0x4;        // Update request source
    static constexpr uint32_t CR1_OPM = 0x8;        // One-pulse mode
    static constexpr uint32_t CR1_ARPE = 0x80;      // Auto-reload preload enable
    template<uint32_t X>
    static constexpr uint32_t CR1_CKD =             // Clock division
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t CR1_UIFREMAP = 0x800; // UIF status bit remapping

    static constexpr uint32_t CR2_RESET_VALUE = 0x0;
    static constexpr uint32_t CR2_OIS1N = 0x200; // Output Idle state 1
    static constexpr uint32_t CR2_OIS1 = 0x100;  // Output Idle state 1
    static constexpr uint32_t CR2_CCDS = 0x8;    // Capture/compare DMA selection
    static constexpr uint32_t CR2_CCUS = 0x4;    // Capture/compare control update selection
    static constexpr uint32_t CR2_CCPC = 0x1;    // Capture/compare preloaded control

    static constexpr uint32_t DIER_RESET_VALUE = 0x0;
    static constexpr uint32_t DIER_UIE = 0x1;      // Update interrupt enable
    static constexpr uint32_t DIER_CC1IE = 0x2;    // Capture/Compare 1 interrupt enable
    static constexpr uint32_t DIER_COMIE = 0x20;   // COM interrupt enable
    static constexpr uint32_t DIER_BIE = 0x80;     // Break interrupt enable
    static constexpr uint32_t DIER_UDE = 0x100;    // Update DMA request enable
    static constexpr uint32_t DIER_CC1DE = 0x200;  // Capture/Compare 1 DMA request enable
    static constexpr uint32_t DIER_COMDE = 0x2000; // COM DMA request enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0;
    static constexpr uint32_t SR_CC1OF = 0x200; // Capture/Compare 1 overcapture flag
    static constexpr uint32_t SR_BIF = 0x80;    // Break interrupt flag
    static constexpr uint32_t SR_COMIF = 0x20;  // COM interrupt flag
    static constexpr uint32_t SR_CC1IF = 0x2;   // Capture/compare 1 interrupt flag
    static constexpr uint32_t SR_UIF = 0x1;     // Update interrupt flag

    static constexpr uint32_t EGR_RESET_VALUE = 0x0;
    static constexpr uint32_t EGR_BG = 0x80;   // Break generation
    static constexpr uint32_t EGR_COMG = 0x20; // Capture/Compare control update generation
    static constexpr uint32_t EGR_CC1G = 0x2;  // Capture/compare 1 generation
    static constexpr uint32_t EGR_UG = 0x1;    // Update generation

    static constexpr uint32_t CCMR1_Output_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Output_CC1S =            // Capture/Compare 1 selection
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t CCMR1_Output_OC1FE = 0x4;      // Output Compare 1 fast enable
    static constexpr uint32_t CCMR1_Output_OC1PE = 0x8;      // Output Compare 1 preload enable
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Output_OC1M =            // Output Compare 1 mode
        bit_field_t<4, 0x7>::value<X>();
    static constexpr uint32_t CCMR1_Output_OC1M_3 = 0x10000; // Output Compare 1 mode

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
    static constexpr uint32_t CNT_CNT =                // counter value
        bit_field_t<0, 0xffff>::value<X>();
    static constexpr uint32_t CNT_UIFCPY = 0x80000000; // UIF Copy

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
    template<uint32_t X>
    static constexpr uint32_t BDTR_DTG =         // Dead-time generator setup
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BDTR_LOCK =        // Lock configuration
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t BDTR_OSSI = 0x400; // Off-state selection for Idle mode
    static constexpr uint32_t BDTR_OSSR = 0x800; // Off-state selection for Run mode
    static constexpr uint32_t BDTR_BKE = 0x1000; // Break enable
    static constexpr uint32_t BDTR_BKP = 0x2000; // Break polarity
    static constexpr uint32_t BDTR_AOE = 0x4000; // Automatic output enable
    static constexpr uint32_t BDTR_MOE = 0x8000; // Main output enable
    template<uint32_t X>
    static constexpr uint32_t BDTR_BKF =         // Break filter
        bit_field_t<16, 0xf>::value<X>();

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

    static constexpr uint32_t TIM16_AF1_RESET_VALUE = 0x0;
    static constexpr uint32_t TIM16_AF1_BKINE = 0x1;      // BRK BKIN input enable
    static constexpr uint32_t TIM16_AF1_BKCMP1E = 0x2;    // BRK COMP1 enable
    static constexpr uint32_t TIM16_AF1_BKCMP2E = 0x4;    // BRK COMP2 enable
    static constexpr uint32_t TIM16_AF1_BKDFBK1E = 0x100; // BRK dfsdm1_break[1] enable
    static constexpr uint32_t TIM16_AF1_BKINP = 0x200;    // BRK BKIN input polarity
    static constexpr uint32_t TIM16_AF1_BKCMP1P = 0x400;  // BRK COMP1 input polarity
    static constexpr uint32_t TIM16_AF1_BKCMP2P = 0x800;  // BRK COMP2 input polarity

    static constexpr uint32_t TIM16_TISEL_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TIM16_TISEL_TI1SEL =   // selects TI1[0] to TI1[15] input
        bit_field_t<0, 0xf>::value<X>();
};


////
//
//      General-purpose-timers
//
////

struct stm32h742x_tim17_t
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
    volatile uint32_t CNT;          // counter
    volatile uint32_t PSC;          // [read-write] prescaler
    volatile uint32_t ARR;          // [read-write] auto-reload register
    volatile uint32_t RCR;          // [read-write] repetition counter register
    volatile uint32_t CCR1;         // [read-write] capture/compare register 1
    reserved_t<0x3> _0x44;
    volatile uint32_t BDTR;         // [read-write] break and dead-time register
    volatile uint32_t DCR;          // [read-write] DMA control register
    volatile uint32_t DMAR;         // [read-write] DMA address for full transfer
    reserved_t<0x4> _0x60;
    volatile uint32_t TIM17_AF1;    // [read-write] TIM17 alternate function register 1
    reserved_t<0x1> _0x68;
    volatile uint32_t TIM17_TISEL;  // [read-write] TIM17 input selection register

    static constexpr uint32_t CR1_RESET_VALUE = 0x0;
    static constexpr uint32_t CR1_CEN = 0x1;        // Counter enable
    static constexpr uint32_t CR1_UDIS = 0x2;       // Update disable
    static constexpr uint32_t CR1_URS = 0x4;        // Update request source
    static constexpr uint32_t CR1_OPM = 0x8;        // One-pulse mode
    static constexpr uint32_t CR1_ARPE = 0x80;      // Auto-reload preload enable
    template<uint32_t X>
    static constexpr uint32_t CR1_CKD =             // Clock division
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t CR1_UIFREMAP = 0x800; // UIF status bit remapping

    static constexpr uint32_t CR2_RESET_VALUE = 0x0;
    static constexpr uint32_t CR2_OIS1N = 0x200; // Output Idle state 1
    static constexpr uint32_t CR2_OIS1 = 0x100;  // Output Idle state 1
    static constexpr uint32_t CR2_CCDS = 0x8;    // Capture/compare DMA selection
    static constexpr uint32_t CR2_CCUS = 0x4;    // Capture/compare control update selection
    static constexpr uint32_t CR2_CCPC = 0x1;    // Capture/compare preloaded control

    static constexpr uint32_t DIER_RESET_VALUE = 0x0;
    static constexpr uint32_t DIER_UIE = 0x1;      // Update interrupt enable
    static constexpr uint32_t DIER_CC1IE = 0x2;    // Capture/Compare 1 interrupt enable
    static constexpr uint32_t DIER_COMIE = 0x20;   // COM interrupt enable
    static constexpr uint32_t DIER_BIE = 0x80;     // Break interrupt enable
    static constexpr uint32_t DIER_UDE = 0x100;    // Update DMA request enable
    static constexpr uint32_t DIER_CC1DE = 0x200;  // Capture/Compare 1 DMA request enable
    static constexpr uint32_t DIER_COMDE = 0x2000; // COM DMA request enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0;
    static constexpr uint32_t SR_CC1OF = 0x200; // Capture/Compare 1 overcapture flag
    static constexpr uint32_t SR_BIF = 0x80;    // Break interrupt flag
    static constexpr uint32_t SR_COMIF = 0x20;  // COM interrupt flag
    static constexpr uint32_t SR_CC1IF = 0x2;   // Capture/compare 1 interrupt flag
    static constexpr uint32_t SR_UIF = 0x1;     // Update interrupt flag

    static constexpr uint32_t EGR_RESET_VALUE = 0x0;
    static constexpr uint32_t EGR_BG = 0x80;   // Break generation
    static constexpr uint32_t EGR_COMG = 0x20; // Capture/Compare control update generation
    static constexpr uint32_t EGR_CC1G = 0x2;  // Capture/compare 1 generation
    static constexpr uint32_t EGR_UG = 0x1;    // Update generation

    static constexpr uint32_t CCMR1_Output_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Output_CC1S =            // Capture/Compare 1 selection
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t CCMR1_Output_OC1FE = 0x4;      // Output Compare 1 fast enable
    static constexpr uint32_t CCMR1_Output_OC1PE = 0x8;      // Output Compare 1 preload enable
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Output_OC1M =            // Output Compare 1 mode
        bit_field_t<4, 0x7>::value<X>();
    static constexpr uint32_t CCMR1_Output_OC1M_3 = 0x10000; // Output Compare 1 mode

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
    static constexpr uint32_t CNT_CNT =                // counter value
        bit_field_t<0, 0xffff>::value<X>();
    static constexpr uint32_t CNT_UIFCPY = 0x80000000; // UIF Copy

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
    template<uint32_t X>
    static constexpr uint32_t BDTR_DTG =         // Dead-time generator setup
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BDTR_LOCK =        // Lock configuration
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t BDTR_OSSI = 0x400; // Off-state selection for Idle mode
    static constexpr uint32_t BDTR_OSSR = 0x800; // Off-state selection for Run mode
    static constexpr uint32_t BDTR_BKE = 0x1000; // Break enable
    static constexpr uint32_t BDTR_BKP = 0x2000; // Break polarity
    static constexpr uint32_t BDTR_AOE = 0x4000; // Automatic output enable
    static constexpr uint32_t BDTR_MOE = 0x8000; // Main output enable
    template<uint32_t X>
    static constexpr uint32_t BDTR_BKF =         // Break filter
        bit_field_t<16, 0xf>::value<X>();

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

    static constexpr uint32_t TIM17_AF1_RESET_VALUE = 0x0;
    static constexpr uint32_t TIM17_AF1_BKINE = 0x1;      // BRK BKIN input enable
    static constexpr uint32_t TIM17_AF1_BKCMP1E = 0x2;    // BRK COMP1 enable
    static constexpr uint32_t TIM17_AF1_BKCMP2E = 0x4;    // BRK COMP2 enable
    static constexpr uint32_t TIM17_AF1_BKDFBK1E = 0x100; // BRK dfsdm1_break[1] enable
    static constexpr uint32_t TIM17_AF1_BKINP = 0x200;    // BRK BKIN input polarity
    static constexpr uint32_t TIM17_AF1_BKCMP1P = 0x400;  // BRK COMP1 input polarity
    static constexpr uint32_t TIM17_AF1_BKCMP2P = 0x800;  // BRK COMP2 input polarity

    static constexpr uint32_t TIM17_TISEL_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TIM17_TISEL_TI1SEL =   // selects TI1[0] to TI1[15] input
        bit_field_t<0, 0xf>::value<X>();
};


template<>
struct peripheral_t<STM32H742x, TIM16>
{
    typedef stm32h742x_tim16_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, TIM16>
{
    typedef stm32h742x_tim16_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, TIM16>
{
    typedef stm32h742x_tim16_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, TIM16>
{
    typedef stm32h742x_tim16_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, TIM16>
{
    typedef stm32h742x_tim16_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, TIM16>
{
    typedef stm32h742x_tim16_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, TIM16>
{
    typedef stm32h742x_tim16_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, TIM16>
{
    typedef stm32h742x_tim16_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, TIM16>
{
    typedef stm32h742x_tim16_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, TIM16>
{
    typedef stm32h742x_tim16_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, TIM16>
{
    typedef stm32h742x_tim16_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, TIM16>
{
    typedef stm32h742x_tim16_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, TIM16>
{
    typedef stm32h742x_tim16_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, TIM16>
{
    typedef stm32h742x_tim16_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, TIM16>
{
    typedef stm32h742x_tim16_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, TIM17>
{
    typedef stm32h742x_tim17_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, TIM17>
{
    typedef stm32h742x_tim17_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, TIM17>
{
    typedef stm32h742x_tim17_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, TIM17>
{
    typedef stm32h742x_tim17_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, TIM17>
{
    typedef stm32h742x_tim17_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, TIM17>
{
    typedef stm32h742x_tim17_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, TIM17>
{
    typedef stm32h742x_tim17_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, TIM17>
{
    typedef stm32h742x_tim17_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, TIM17>
{
    typedef stm32h742x_tim17_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, TIM17>
{
    typedef stm32h742x_tim17_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, TIM17>
{
    typedef stm32h742x_tim17_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, TIM17>
{
    typedef stm32h742x_tim17_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, TIM17>
{
    typedef stm32h742x_tim17_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, TIM17>
{
    typedef stm32h742x_tim17_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, TIM17>
{
    typedef stm32h742x_tim17_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, TIM15>
{
    typedef stm32h742x_tim15_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, TIM15>
{
    typedef stm32h742x_tim15_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, TIM15>
{
    typedef stm32h742x_tim15_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, TIM15>
{
    typedef stm32h742x_tim15_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, TIM15>
{
    typedef stm32h742x_tim15_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, TIM15>
{
    typedef stm32h742x_tim15_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, TIM15>
{
    typedef stm32h742x_tim15_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, TIM15>
{
    typedef stm32h742x_tim15_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, TIM15>
{
    typedef stm32h742x_tim15_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, TIM15>
{
    typedef stm32h742x_tim15_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, TIM15>
{
    typedef stm32h742x_tim15_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, TIM15>
{
    typedef stm32h742x_tim15_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, TIM15>
{
    typedef stm32h742x_tim15_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, TIM15>
{
    typedef stm32h742x_tim15_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, TIM15>
{
    typedef stm32h742x_tim15_t T;
    static T& V;
};

using tim15_t = peripheral_t<mcu_svd, TIM15>;
using tim16_t = peripheral_t<mcu_svd, TIM16>;
using tim17_t = peripheral_t<mcu_svd, TIM17>;

