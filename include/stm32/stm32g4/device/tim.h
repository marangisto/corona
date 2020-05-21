#pragma once

////
//
//      STM32G4 TIM peripherals
//
////

////
//
//      Advanced-timers
//
////

struct stm32g431xx_tim1_t
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
    volatile uint32_t CNT;          // counter
    volatile uint32_t PSC;          // [read-write] prescaler
    volatile uint32_t ARR;          // [read-write] auto-reload register
    volatile uint32_t RCR;          // [read-write] repetition counter register
    volatile uint32_t CCR1;         // [read-write] capture/compare register 1
    volatile uint32_t CCR2;         // [read-write] capture/compare register 2
    volatile uint32_t CCR3;         // [read-write] capture/compare register 3
    volatile uint32_t CCR4;         // [read-write] capture/compare register 4
    volatile uint32_t BDTR;         // [read-write] break and dead-time register
    volatile uint32_t CCR5;         // [read-write] capture/compare register 4
    volatile uint32_t CCR6;         // [read-write] capture/compare register 4
    volatile uint32_t CCMR3_Output; // [read-write] capture/compare mode register 2 (output mode)
    volatile uint32_t DTR2;         // [read-write] timer Deadtime Register 2
    volatile uint32_t ECR;          // [read-write] DMA control register
    volatile uint32_t TISEL;        // [read-write] TIM timer input selection register
    volatile uint32_t AF1;          // [read-write] TIM alternate function option register 1
    volatile uint32_t AF2;          // [read-write] TIM alternate function option register 2
    reserved_t<0xdd> _0x3dc;
    volatile uint32_t DCR;          // [read-write] control register
    volatile uint32_t DMAR;         // [read-write] DMA address for full transfer

    static constexpr uint32_t CR1_RESET_VALUE = 0x0;
    static constexpr uint32_t CR1_DITHEN = 0x1000;  // Dithering Enable
    static constexpr uint32_t CR1_UIFREMAP = 0x800; // UIF status bit remapping
    template<uint32_t X>
    static constexpr uint32_t CR1_CKD =             // Clock division
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t CR1_ARPE = 0x80;      // Auto-reload preload enable
    template<uint32_t X>
    static constexpr uint32_t CR1_CMS =             // Center-aligned mode selection
        bit_field_t<5, 0x3>::value<X>();
    static constexpr uint32_t CR1_DIR = 0x10;       // Direction
    static constexpr uint32_t CR1_OPM = 0x8;        // One-pulse mode
    static constexpr uint32_t CR1_URS = 0x4;        // Update request source
    static constexpr uint32_t CR1_UDIS = 0x2;       // Update disable
    static constexpr uint32_t CR1_CEN = 0x1;        // Counter enable

    static constexpr uint32_t CR2_RESET_VALUE = 0x0;
    static constexpr uint32_t CR2_MMS_3 = 0x2000000; // Master mode selection - bit 3
    template<uint32_t X>
    static constexpr uint32_t CR2_MMS2 =             // Master mode selection 2
        bit_field_t<20, 0xf>::value<X>();
    static constexpr uint32_t CR2_OIS6 = 0x40000;    // Output Idle state 6 (OC6 output)
    static constexpr uint32_t CR2_OIS5 = 0x10000;    // Output Idle state 5 (OC5 output)
    static constexpr uint32_t CR2_OIS4N = 0x8000;    // Output Idle state 4 (OC4N output)
    static constexpr uint32_t CR2_OIS4 = 0x4000;     // Output Idle state 4
    static constexpr uint32_t CR2_OIS3N = 0x2000;    // Output Idle state 3
    static constexpr uint32_t CR2_OIS3 = 0x1000;     // Output Idle state 3
    static constexpr uint32_t CR2_OIS2N = 0x800;     // Output Idle state 2
    static constexpr uint32_t CR2_OIS2 = 0x400;      // Output Idle state 2
    static constexpr uint32_t CR2_OIS1N = 0x200;     // Output Idle state 1
    static constexpr uint32_t CR2_OIS1 = 0x100;      // Output Idle state 1
    static constexpr uint32_t CR2_TI1S = 0x80;       // TI1 selection
    template<uint32_t X>
    static constexpr uint32_t CR2_MMS =              // Master mode selection
        bit_field_t<4, 0x7>::value<X>();
    static constexpr uint32_t CR2_CCDS = 0x8;        // Capture/compare DMA selection
    static constexpr uint32_t CR2_CCUS = 0x4;        // Capture/compare control update selection
    static constexpr uint32_t CR2_CCPC = 0x1;        // Capture/compare preloaded control

    static constexpr uint32_t SMCR_RESET_VALUE = 0x0;
    static constexpr uint32_t SMCR_SMSPS = 0x2000000; // SMS Preload Source
    static constexpr uint32_t SMCR_SMSPE = 0x1000000; // SMS Preload Enable
    template<uint32_t X>
    static constexpr uint32_t SMCR_TS_4_3 =           // Trigger selection - bit 4:3
        bit_field_t<20, 0x3>::value<X>();
    static constexpr uint32_t SMCR_SMS_3 = 0x10000;   // Slave mode selection - bit 3
    static constexpr uint32_t SMCR_ETP = 0x8000;      // External trigger polarity
    static constexpr uint32_t SMCR_ECE = 0x4000;      // External clock enable
    template<uint32_t X>
    static constexpr uint32_t SMCR_ETPS =             // External trigger prescaler
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMCR_ETF =              // External trigger filter
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t SMCR_MSM = 0x80;        // Master/Slave mode
    template<uint32_t X>
    static constexpr uint32_t SMCR_TS =               // Trigger selection
        bit_field_t<4, 0x7>::value<X>();
    static constexpr uint32_t SMCR_OCCS = 0x8;        // OCREF clear selection
    template<uint32_t X>
    static constexpr uint32_t SMCR_SMS =              // Slave mode selection
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t DIER_RESET_VALUE = 0x0;
    static constexpr uint32_t DIER_TERRIE = 0x800000; // Transition Error interrupt enable
    static constexpr uint32_t DIER_IERRIE = 0x400000; // Index Error interrupt enable
    static constexpr uint32_t DIER_DIRIE = 0x200000;  // Direction Change interrupt enable
    static constexpr uint32_t DIER_IDXIE = 0x100000;  // Index interrupt enable
    static constexpr uint32_t DIER_TDE = 0x4000;      // Trigger DMA request enable
    static constexpr uint32_t DIER_COMDE = 0x2000;    // COM DMA request enable
    static constexpr uint32_t DIER_CC4DE = 0x1000;    // Capture/Compare 4 DMA request enable
    static constexpr uint32_t DIER_CC3DE = 0x800;     // Capture/Compare 3 DMA request enable
    static constexpr uint32_t DIER_CC2DE = 0x400;     // Capture/Compare 2 DMA request enable
    static constexpr uint32_t DIER_CC1DE = 0x200;     // Capture/Compare 1 DMA request enable
    static constexpr uint32_t DIER_UDE = 0x100;       // Update DMA request enable
    static constexpr uint32_t DIER_TIE = 0x40;        // Trigger interrupt enable
    static constexpr uint32_t DIER_CC4IE = 0x10;      // Capture/Compare 4 interrupt enable
    static constexpr uint32_t DIER_CC3IE = 0x8;       // Capture/Compare 3 interrupt enable
    static constexpr uint32_t DIER_CC2IE = 0x4;       // Capture/Compare 2 interrupt enable
    static constexpr uint32_t DIER_CC1IE = 0x2;       // Capture/Compare 1 interrupt enable
    static constexpr uint32_t DIER_UIE = 0x1;         // Update interrupt enable
    static constexpr uint32_t DIER_BIE = 0x80;        // Break interrupt enable
    static constexpr uint32_t DIER_COMIE = 0x20;      // COM interrupt enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0;
    static constexpr uint32_t SR_TERRF = 0x800000; // Transition Error interrupt flag
    static constexpr uint32_t SR_IERRF = 0x400000; // Index Error interrupt flag
    static constexpr uint32_t SR_DIRF = 0x200000;  // Direction Change interrupt flag
    static constexpr uint32_t SR_IDXF = 0x100000;  // Index interrupt flag
    static constexpr uint32_t SR_CC6IF = 0x20000;  // Compare 6 interrupt flag
    static constexpr uint32_t SR_CC5IF = 0x10000;  // Compare 5 interrupt flag
    static constexpr uint32_t SR_SBIF = 0x2000;    // System Break interrupt flag
    static constexpr uint32_t SR_CC4OF = 0x1000;   // Capture/Compare 4 overcapture flag
    static constexpr uint32_t SR_CC3OF = 0x800;    // Capture/Compare 3 overcapture flag
    static constexpr uint32_t SR_CC2OF = 0x400;    // Capture/compare 2 overcapture flag
    static constexpr uint32_t SR_CC1OF = 0x200;    // Capture/Compare 1 overcapture flag
    static constexpr uint32_t SR_B2IF = 0x100;     // Break 2 interrupt flag
    static constexpr uint32_t SR_BIF = 0x80;       // Break interrupt flag
    static constexpr uint32_t SR_TIF = 0x40;       // Trigger interrupt flag
    static constexpr uint32_t SR_COMIF = 0x20;     // COM interrupt flag
    static constexpr uint32_t SR_CC4IF = 0x10;     // Capture/Compare 4 interrupt flag
    static constexpr uint32_t SR_CC3IF = 0x8;      // Capture/Compare 3 interrupt flag
    static constexpr uint32_t SR_CC2IF = 0x4;      // Capture/Compare 2 interrupt flag
    static constexpr uint32_t SR_CC1IF = 0x2;      // Capture/compare 1 interrupt flag
    static constexpr uint32_t SR_UIF = 0x1;        // Update interrupt flag

    static constexpr uint32_t EGR_RESET_VALUE = 0x0;
    static constexpr uint32_t EGR_B2G = 0x100; // Break 2 generation
    static constexpr uint32_t EGR_BG = 0x80;   // Break generation
    static constexpr uint32_t EGR_TG = 0x40;   // Trigger generation
    static constexpr uint32_t EGR_COMG = 0x20; // Capture/Compare control update generation
    static constexpr uint32_t EGR_CC4G = 0x10; // Capture/compare 4 generation
    static constexpr uint32_t EGR_CC3G = 0x8;  // Capture/compare 3 generation
    static constexpr uint32_t EGR_CC2G = 0x4;  // Capture/compare 2 generation
    static constexpr uint32_t EGR_CC1G = 0x2;  // Capture/compare 1 generation
    static constexpr uint32_t EGR_UG = 0x1;    // Update generation

    static constexpr uint32_t CCMR1_Output_RESET_VALUE = 0x0;
    static constexpr uint32_t CCMR1_Output_OC2M_3 = 0x1000000; // Output Compare 2 mode - bit 3
    static constexpr uint32_t CCMR1_Output_OC1M_3 = 0x10000;   // Output Compare 1 mode - bit 3
    static constexpr uint32_t CCMR1_Output_OC2CE = 0x8000;     // Output Compare 2 clear enable
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Output_OC2M =              // Output Compare 2 mode
        bit_field_t<12, 0x7>::value<X>();
    static constexpr uint32_t CCMR1_Output_OC2PE = 0x800;      // Output Compare 2 preload enable
    static constexpr uint32_t CCMR1_Output_OC2FE = 0x400;      // Output Compare 2 fast enable
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Output_CC2S =              // Capture/Compare 2 selection
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t CCMR1_Output_OC1CE = 0x80;       // Output Compare 1 clear enable
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Output_OC1M =              // Output Compare 1 mode
        bit_field_t<4, 0x7>::value<X>();
    static constexpr uint32_t CCMR1_Output_OC1PE = 0x8;        // Output Compare 1 preload enable
    static constexpr uint32_t CCMR1_Output_OC1FE = 0x4;        // Output Compare 1 fast enable
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Output_CC1S =              // Capture/Compare 1 selection
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
    static constexpr uint32_t CCMR1_Input_ICPCS =    // Input capture 1 prescaler
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Input_CC1S =     // Capture/Compare 1 selection
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t CCMR2_Output_RESET_VALUE = 0x0;
    static constexpr uint32_t CCMR2_Output_OC4M_3 = 0x1000000; // Output Compare 4 mode - bit 3
    static constexpr uint32_t CCMR2_Output_OC3M_3 = 0x10000;   // Output Compare 3 mode - bit 3
    static constexpr uint32_t CCMR2_Output_OC4CE = 0x8000;     // Output compare 4 clear enable
    template<uint32_t X>
    static constexpr uint32_t CCMR2_Output_OC4M =              // Output compare 4 mode
        bit_field_t<12, 0x7>::value<X>();
    static constexpr uint32_t CCMR2_Output_OC4PE = 0x800;      // Output compare 4 preload enable
    static constexpr uint32_t CCMR2_Output_OC4FE = 0x400;      // Output compare 4 fast enable
    template<uint32_t X>
    static constexpr uint32_t CCMR2_Output_CC4S =              // Capture/Compare 4 selection
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t CCMR2_Output_OC3CE = 0x80;       // Output compare 3 clear enable
    template<uint32_t X>
    static constexpr uint32_t CCMR2_Output_OC3M =              // Output compare 3 mode
        bit_field_t<4, 0x7>::value<X>();
    static constexpr uint32_t CCMR2_Output_OC3PE = 0x8;        // Output compare 3 preload enable
    static constexpr uint32_t CCMR2_Output_OC3FE = 0x4;        // Output compare 3 fast enable
    template<uint32_t X>
    static constexpr uint32_t CCMR2_Output_CC3S =              // Capture/Compare 3 selection
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
    static constexpr uint32_t CCER_CC6P = 0x200000; // Capture/Compare 6 output polarity
    static constexpr uint32_t CCER_CC6E = 0x100000; // Capture/Compare 6 output enable
    static constexpr uint32_t CCER_CC5P = 0x20000;  // Capture/Compare 5 output polarity
    static constexpr uint32_t CCER_CC5E = 0x10000;  // Capture/Compare 5 output enable
    static constexpr uint32_t CCER_CC4NP = 0x8000;  // Capture/Compare 4 complementary output polarity
    static constexpr uint32_t CCER_CC4NE = 0x4000;  // Capture/Compare 4 complementary output enable
    static constexpr uint32_t CCER_CC4P = 0x2000;   // Capture/Compare 3 output Polarity
    static constexpr uint32_t CCER_CC4E = 0x1000;   // Capture/Compare 4 output enable
    static constexpr uint32_t CCER_CC3NP = 0x800;   // Capture/Compare 3 output Polarity
    static constexpr uint32_t CCER_CC3NE = 0x400;   // Capture/Compare 3 complementary output enable
    static constexpr uint32_t CCER_CC3P = 0x200;    // Capture/Compare 3 output Polarity
    static constexpr uint32_t CCER_CC3E = 0x100;    // Capture/Compare 3 output enable
    static constexpr uint32_t CCER_CC2NP = 0x80;    // Capture/Compare 2 output Polarity
    static constexpr uint32_t CCER_CC2NE = 0x40;    // Capture/Compare 2 complementary output enable
    static constexpr uint32_t CCER_CC2P = 0x20;     // Capture/Compare 2 output Polarity
    static constexpr uint32_t CCER_CC2E = 0x10;     // Capture/Compare 2 output enable
    static constexpr uint32_t CCER_CC1NP = 0x8;     // Capture/Compare 1 output Polarity
    static constexpr uint32_t CCER_CC1NE = 0x4;     // Capture/Compare 1 complementary output enable
    static constexpr uint32_t CCER_CC1P = 0x2;      // Capture/Compare 1 output Polarity
    static constexpr uint32_t CCER_CC1E = 0x1;      // Capture/Compare 1 output enable

    static constexpr uint32_t CNT_RESET_VALUE = 0x0;
    static constexpr uint32_t CNT_UIFCPY = 0x80000000; // UIFCPY
    template<uint32_t X>
    static constexpr uint32_t CNT_CNT =                // counter value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t PSC_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t PSC_PSC =   // Prescaler value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t ARR_RESET_VALUE = 0xffff;
    template<uint32_t X>
    static constexpr uint32_t ARR_ARR =   // Auto-reload value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t RCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RCR_REP =   // Repetition counter value
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

    static constexpr uint32_t BDTR_RESET_VALUE = 0x0;
    static constexpr uint32_t BDTR_BK2ID = 0x20000000;  // BK2ID
    static constexpr uint32_t BDTR_BKBID = 0x10000000;  // BKBID
    static constexpr uint32_t BDTR_BK2DSRM = 0x8000000; // BK2DSRM
    static constexpr uint32_t BDTR_BKDSRM = 0x4000000;  // BKDSRM
    static constexpr uint32_t BDTR_BK2P = 0x2000000;    // Break 2 polarity
    static constexpr uint32_t BDTR_BK2E = 0x1000000;    // Break 2 Enable
    template<uint32_t X>
    static constexpr uint32_t BDTR_BK2F =               // Break 2 filter
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BDTR_BKF =                // Break filter
        bit_field_t<16, 0xf>::value<X>();
    static constexpr uint32_t BDTR_MOE = 0x8000;        // Main output enable
    static constexpr uint32_t BDTR_AOE = 0x4000;        // Automatic output enable
    static constexpr uint32_t BDTR_BKP = 0x2000;        // Break polarity
    static constexpr uint32_t BDTR_BKE = 0x1000;        // Break enable
    static constexpr uint32_t BDTR_OSSR = 0x800;        // Off-state selection for Run mode
    static constexpr uint32_t BDTR_OSSI = 0x400;        // Off-state selection for Idle mode
    template<uint32_t X>
    static constexpr uint32_t BDTR_LOCK =               // Lock configuration
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BDTR_DTG =                // Dead-time generator setup
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t CCR5_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCR5_CCR5 =              // Capture/Compare value
        bit_field_t<0, 0xffff>::value<X>();
    static constexpr uint32_t CCR5_GC5C1 = 0x20000000; // Group Channel 5 and Channel 1
    static constexpr uint32_t CCR5_GC5C2 = 0x40000000; // Group Channel 5 and Channel 2
    static constexpr uint32_t CCR5_GC5C3 = 0x80000000; // Group Channel 5 and Channel 3

    static constexpr uint32_t CCR6_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCR6_CCR6 =   // Capture/Compare value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CCMR3_Output_RESET_VALUE = 0x0;
    static constexpr uint32_t CCMR3_Output_OC6M_bit3 = 0x1000000; // Output Compare 6 mode bit 3
    template<uint32_t X>
    static constexpr uint32_t CCMR3_Output_OC5M_bit3 =            // Output Compare 5 mode bit 3
        bit_field_t<16, 0x7>::value<X>();
    static constexpr uint32_t CCMR3_Output_OC6CE = 0x8000;        // Output compare 6 clear enable
    template<uint32_t X>
    static constexpr uint32_t CCMR3_Output_OC6M =                 // Output compare 6 mode
        bit_field_t<12, 0x7>::value<X>();
    static constexpr uint32_t CCMR3_Output_OC6PE = 0x800;         // Output compare 6 preload enable
    static constexpr uint32_t CCMR3_Output_OC6FE = 0x400;         // Output compare 6 fast enable
    static constexpr uint32_t CCMR3_Output_OC5CE = 0x80;          // Output compare 5 clear enable
    template<uint32_t X>
    static constexpr uint32_t CCMR3_Output_OC5M =                 // Output compare 5 mode
        bit_field_t<4, 0x7>::value<X>();
    static constexpr uint32_t CCMR3_Output_OC5PE = 0x8;           // Output compare 5 preload enable
    static constexpr uint32_t CCMR3_Output_OC5FE = 0x4;           // Output compare 5 fast enable

    static constexpr uint32_t DTR2_RESET_VALUE = 0x0;
    static constexpr uint32_t DTR2_DTPE = 0x20000; // Deadtime Preload Enable
    static constexpr uint32_t DTR2_DTAE = 0x10000; // Deadtime Asymmetric Enable
    template<uint32_t X>
    static constexpr uint32_t DTR2_DTGF =          // Dead-time falling edge generator setup
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t ECR_RESET_VALUE = 0x0;
    static constexpr uint32_t ECR_IE = 0x1;    // Index Enable
    template<uint32_t X>
    static constexpr uint32_t ECR_IDIR =       // Index Direction
        bit_field_t<1, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ECR_IBLK =       // Index Blanking
        bit_field_t<3, 0x3>::value<X>();
    static constexpr uint32_t ECR_FIDX = 0x20; // First Index
    template<uint32_t X>
    static constexpr uint32_t ECR_IPOS =       // Index Positioning
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ECR_PW =         // Pulse width
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ECR_PWPRSC =     // Pulse Width prescaler
        bit_field_t<24, 0x7>::value<X>();

    static constexpr uint32_t TISEL_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TISEL_TI1SEL =   // TI1[0] to TI1[15] input selection
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TISEL_TI2SEL =   // TI2[0] to TI2[15] input selection
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TISEL_TI3SEL =   // TI3[0] to TI3[15] input selection
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TISEL_TI4SEL =   // TI4[0] to TI4[15] input selection
        bit_field_t<24, 0xf>::value<X>();

    static constexpr uint32_t AF1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t AF1_ETRSEL =          // ETR source selection
        bit_field_t<14, 0xf>::value<X>();
    static constexpr uint32_t AF1_BKCMP4P = 0x2000; // BRK COMP4 input polarity
    static constexpr uint32_t AF1_BKCMP3P = 0x1000; // BRK COMP3 input polarity
    static constexpr uint32_t AF1_BKCMP2P = 0x800;  // BRK COMP2 input polarity
    static constexpr uint32_t AF1_BKCMP1P = 0x400;  // BRK COMP1 input polarity
    static constexpr uint32_t AF1_BKINP = 0x200;    // BRK BKIN input polarity
    static constexpr uint32_t AF1_BKCMP7E = 0x80;   // BRK COMP7 enable
    static constexpr uint32_t AF1_BKCMP6E = 0x40;   // BRK COMP6 enable
    static constexpr uint32_t AF1_BKCMP5E = 0x20;   // BRK COMP5 enable
    static constexpr uint32_t AF1_BKCMP4E = 0x10;   // BRK COMP4 enable
    static constexpr uint32_t AF1_BKCMP3E = 0x8;    // BRK COMP3 enable
    static constexpr uint32_t AF1_BKCMP2E = 0x4;    // BRK COMP2 enable
    static constexpr uint32_t AF1_BKCMP1E = 0x2;    // BRK COMP1 enable
    static constexpr uint32_t AF1_BKINE = 0x1;      // BRK BKIN input enable

    static constexpr uint32_t AF2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t AF2_OCRSEL =           // OCREF_CLR source selection
        bit_field_t<16, 0x7>::value<X>();
    static constexpr uint32_t AF2_BK2CMP4P = 0x2000; // BRK2 COMP4 input polarity
    static constexpr uint32_t AF2_BK2CMP3P = 0x1000; // BRK2 COMP3 input polarity
    static constexpr uint32_t AF2_BK2CMP2P = 0x800;  // BRK2 COMP2 input polarity
    static constexpr uint32_t AF2_BK2CMP1P = 0x400;  // BRK2 COMP1 input polarity
    static constexpr uint32_t AF2_BK2INP = 0x200;    // BRK2 BKIN input polarity
    static constexpr uint32_t AF2_BK2CMP7E = 0x80;   // BRK2 COMP7 enable
    static constexpr uint32_t AF2_BK2CMP6E = 0x40;   // BRK2 COMP6 enable
    static constexpr uint32_t AF2_BK2CMP5E = 0x20;   // BRK2 COMP5 enable
    static constexpr uint32_t AF2_BK2CMP4E = 0x10;   // BRK2 COMP4 enable
    static constexpr uint32_t AF2_BK2CMP3E = 0x8;    // BRK2 COMP3 enable
    static constexpr uint32_t AF2_BK2CMP2E = 0x4;    // BRK2 COMP2 enable
    static constexpr uint32_t AF2_BK2CMP1E = 0x2;    // BRK2 COMP1 enable
    static constexpr uint32_t AF2_BKINE = 0x1;       // BRK BKIN input enable

    static constexpr uint32_t DCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DCR_DBL =   // DMA burst length
        bit_field_t<8, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DCR_DBA =   // DMA base address
        bit_field_t<0, 0x1f>::value<X>();

    static constexpr uint32_t DMAR_RESET_VALUE = 0x0;
};


////
//
//      General purpose timers
//
////

struct stm32g431xx_tim15_t
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
    reserved_t<0x3> _0x54;
    volatile uint32_t DTR2;         // [read-write] timer Deadtime Register 2
    reserved_t<0x1> _0x5c;
    volatile uint32_t TISEL;        // [read-write] TIM timer input selection register
    volatile uint32_t AF1;          // [read-write] TIM alternate function option register 1
    volatile uint32_t AF2;          // [read-write] TIM alternate function option register 2
    reserved_t<0xdd> _0x3dc;
    volatile uint32_t DCR;          // [read-write] DMA control register
    volatile uint32_t DMAR;         // [read-write] DMA address for full transfer

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
    static constexpr uint32_t CR1_DITHEN = 0x1000;  // Dithering Enable

    static constexpr uint32_t CR2_RESET_VALUE = 0x0;
    static constexpr uint32_t CR2_OIS2 = 0x400;  // Output idle state 2 (OC2 output)
    static constexpr uint32_t CR2_OIS1N = 0x200; // Output Idle state 1
    static constexpr uint32_t CR2_OIS1 = 0x100;  // Output Idle state 1
    static constexpr uint32_t CR2_TI1S = 0x80;   // TI1 selection
    template<uint32_t X>
    static constexpr uint32_t CR2_MMS =          // Master mode selection
        bit_field_t<4, 0x7>::value<X>();
    static constexpr uint32_t CR2_CCDS = 0x8;    // Capture/compare DMA selection
    static constexpr uint32_t CR2_CCUS = 0x4;    // Capture/compare control update selection
    static constexpr uint32_t CR2_CCPC = 0x1;    // Capture/compare preloaded control

    static constexpr uint32_t SMCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SMCR_TS_4_3 =         // Trigger selection - bit 4:3
        bit_field_t<20, 0x3>::value<X>();
    static constexpr uint32_t SMCR_SMS_3 = 0x10000; // Slave mode selection - bit 3
    static constexpr uint32_t SMCR_MSM = 0x80;      // Master/Slave mode
    template<uint32_t X>
    static constexpr uint32_t SMCR_TS =             // Trigger selection
        bit_field_t<4, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMCR_SMS =            // Slave mode selection
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t DIER_RESET_VALUE = 0x0;
    static constexpr uint32_t DIER_TDE = 0x4000;   // Trigger DMA request enable
    static constexpr uint32_t DIER_COMDE = 0x2000; // COM DMA request enable
    static constexpr uint32_t DIER_CC2DE = 0x400;  // Capture/Compare 2 DMA request enable
    static constexpr uint32_t DIER_CC1DE = 0x200;  // Capture/Compare 1 DMA request enable
    static constexpr uint32_t DIER_UDE = 0x100;    // Update DMA request enable
    static constexpr uint32_t DIER_BIE = 0x80;     // Break interrupt enable
    static constexpr uint32_t DIER_TIE = 0x40;     // Trigger interrupt enable
    static constexpr uint32_t DIER_COMIE = 0x20;   // COM interrupt enable
    static constexpr uint32_t DIER_CC2IE = 0x4;    // Capture/Compare 2 interrupt enable
    static constexpr uint32_t DIER_CC1IE = 0x2;    // Capture/Compare 1 interrupt enable
    static constexpr uint32_t DIER_UIE = 0x1;      // Update interrupt enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0;
    static constexpr uint32_t SR_CC2OF = 0x400; // Capture/Compare 2 overcapture flag
    static constexpr uint32_t SR_CC1OF = 0x200; // Capture/Compare 1 overcapture flag
    static constexpr uint32_t SR_BIF = 0x80;    // Break interrupt flag
    static constexpr uint32_t SR_TIF = 0x40;    // Trigger interrupt flag
    static constexpr uint32_t SR_COMIF = 0x20;  // COM interrupt flag
    static constexpr uint32_t SR_CC2IF = 0x4;   // Capture/compare 2 interrupt flag
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
    static constexpr uint32_t CCMR1_Output_OC2M_3 = 0x1000000; // Output Compare 2 mode - bit 3
    static constexpr uint32_t CCMR1_Output_OC1M_3 = 0x10000;   // Output Compare 1 mode
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Output_OC2M =              // OC2M
        bit_field_t<12, 0x7>::value<X>();
    static constexpr uint32_t CCMR1_Output_OC2PE = 0x800;      // OC2PE
    static constexpr uint32_t CCMR1_Output_OC2FE = 0x400;      // OC2FE
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Output_CC2S =              // CC2S
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t CCMR1_Output_OC1CE = 0x80;       // OC1CE
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Output_OC1M =              // Output Compare 1 mode
        bit_field_t<4, 0x7>::value<X>();
    static constexpr uint32_t CCMR1_Output_OC1PE = 0x8;        // Output Compare 1 preload enable
    static constexpr uint32_t CCMR1_Output_OC1FE = 0x4;        // Output Compare 1 fast enable
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Output_CC1S =              // Capture/Compare 1 selection
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t CCMR1_Input_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Input_IC2F =     // IC2F
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Input_IC2PSC =   // IC2PSC
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Input_CC2S =     // CC2S
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
    static constexpr uint32_t CCER_CC2NP = 0x80; // Capture/Compare 2 complementary output polarity
    static constexpr uint32_t CCER_CC2P = 0x20;  // Capture/Compare 2 output polarity
    static constexpr uint32_t CCER_CC2E = 0x10;  // Capture/Compare 2 output enable
    static constexpr uint32_t CCER_CC1NP = 0x8;  // Capture/Compare 1 output Polarity
    static constexpr uint32_t CCER_CC1NE = 0x4;  // Capture/Compare 1 complementary output enable
    static constexpr uint32_t CCER_CC1P = 0x2;   // Capture/Compare 1 output Polarity
    static constexpr uint32_t CCER_CC1E = 0x1;   // Capture/Compare 1 output enable

    static constexpr uint32_t CNT_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CNT_CNT =                // counter value
        bit_field_t<0, 0xffff>::value<X>();
    static constexpr uint32_t CNT_UIFCPY = 0x80000000; // UIF Copy

    static constexpr uint32_t PSC_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t PSC_PSC =   // Prescaler value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t ARR_RESET_VALUE = 0xffff;
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
    static constexpr uint32_t CCR2_CCR2 =   // Capture/Compare 1 value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t BDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t BDTR_DTG =               // Dead-time generator setup
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BDTR_LOCK =              // Lock configuration
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t BDTR_OSSI = 0x400;       // Off-state selection for Idle mode
    static constexpr uint32_t BDTR_OSSR = 0x800;       // Off-state selection for Run mode
    static constexpr uint32_t BDTR_BKE = 0x1000;       // Break enable
    static constexpr uint32_t BDTR_BKP = 0x2000;       // Break polarity
    static constexpr uint32_t BDTR_AOE = 0x4000;       // Automatic output enable
    static constexpr uint32_t BDTR_MOE = 0x8000;       // Main output enable
    template<uint32_t X>
    static constexpr uint32_t BDTR_BKF =               // Break filter
        bit_field_t<16, 0xf>::value<X>();
    static constexpr uint32_t BDTR_BKDSRM = 0x4000000; // BKDSRM
    static constexpr uint32_t BDTR_BKBID = 0x10000000; // BKBID

    static constexpr uint32_t DTR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DTR2_DTGF =          // Dead-time generator setup
        bit_field_t<0, 0xff>::value<X>();
    static constexpr uint32_t DTR2_DTAE = 0x10000; // Deadtime Asymmetric Enable
    static constexpr uint32_t DTR2_DTPE = 0x20000; // Deadtime Preload Enable

    static constexpr uint32_t TISEL_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TISEL_TI1SEL =   // TI1[0] to TI1[15] input selection
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TISEL_TI2SEL =   // TI2[0] to TI2[15] input selection
        bit_field_t<8, 0xf>::value<X>();

    static constexpr uint32_t AF1_RESET_VALUE = 0x0;
    static constexpr uint32_t AF1_BKCMP4P = 0x2000; // BRK COMP4 input polarity
    static constexpr uint32_t AF1_BKCMP3P = 0x1000; // BRK COMP3 input polarity
    static constexpr uint32_t AF1_BKCMP2P = 0x800;  // BRK COMP2 input polarity
    static constexpr uint32_t AF1_BKCMP1P = 0x400;  // BRK COMP1 input polarity
    static constexpr uint32_t AF1_BKINP = 0x200;    // BRK BKIN input polarity
    static constexpr uint32_t AF1_BKCMP7E = 0x80;   // BRK COMP7 enable
    static constexpr uint32_t AF1_BKCMP6E = 0x40;   // BRK COMP6 enable
    static constexpr uint32_t AF1_BKCMP5E = 0x20;   // BRK COMP5 enable
    static constexpr uint32_t AF1_BKCMP4E = 0x10;   // BRK COMP4 enable
    static constexpr uint32_t AF1_BKCMP3E = 0x8;    // BRK COMP3 enable
    static constexpr uint32_t AF1_BKCMP2E = 0x4;    // BRK COMP2 enable
    static constexpr uint32_t AF1_BKCMP1E = 0x2;    // BRK COMP1 enable
    static constexpr uint32_t AF1_BKINE = 0x1;      // BRK BKIN input enable

    static constexpr uint32_t AF2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t AF2_OCRSEL =   // OCREF_CLR source selection
        bit_field_t<16, 0x7>::value<X>();

    static constexpr uint32_t DCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DCR_DBL =   // DMA burst length
        bit_field_t<8, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DCR_DBA =   // DMA base address
        bit_field_t<0, 0x1f>::value<X>();

    static constexpr uint32_t DMAR_RESET_VALUE = 0x0;
};


////
//
//      General purpose timers
//
////

struct stm32g431xx_tim16_t
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
    reserved_t<0x3> _0x54;
    volatile uint32_t DTR2;         // [read-write] timer Deadtime Register 2
    reserved_t<0x1> _0x5c;
    volatile uint32_t TISEL;        // [read-write] TIM timer input selection register
    volatile uint32_t AF1;          // [read-write] TIM alternate function option register 1
    volatile uint32_t AF2;          // [read-write] TIM alternate function option register 2
    reserved_t<0xdd> _0x3dc;
    volatile uint32_t DCR;          // [read-write] DMA control register
    volatile uint32_t DMAR;         // [read-write] DMA address for full transfer

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
    static constexpr uint32_t CR1_DITHEN = 0x1000;  // Dithering Enable

    static constexpr uint32_t CR2_RESET_VALUE = 0x0;
    static constexpr uint32_t CR2_OIS1N = 0x200; // Output Idle state 1
    static constexpr uint32_t CR2_OIS1 = 0x100;  // Output Idle state 1
    static constexpr uint32_t CR2_CCDS = 0x8;    // Capture/compare DMA selection
    static constexpr uint32_t CR2_CCUS = 0x4;    // Capture/compare control update selection
    static constexpr uint32_t CR2_CCPC = 0x1;    // Capture/compare preloaded control

    static constexpr uint32_t DIER_RESET_VALUE = 0x0;
    static constexpr uint32_t DIER_COMDE = 0x2000; // COM DMA request enable
    static constexpr uint32_t DIER_CC1DE = 0x200;  // Capture/Compare 1 DMA request enable
    static constexpr uint32_t DIER_UDE = 0x100;    // Update DMA request enable
    static constexpr uint32_t DIER_BIE = 0x80;     // Break interrupt enable
    static constexpr uint32_t DIER_COMIE = 0x20;   // COM interrupt enable
    static constexpr uint32_t DIER_CC1IE = 0x2;    // Capture/Compare 1 interrupt enable
    static constexpr uint32_t DIER_UIE = 0x1;      // Update interrupt enable

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
    static constexpr uint32_t CCMR1_Output_OC1M_3 = 0x10000; // Output Compare 1 mode
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Output_OC1M =            // Output Compare 1 mode
        bit_field_t<4, 0x7>::value<X>();
    static constexpr uint32_t CCMR1_Output_OC1PE = 0x8;      // Output Compare 1 preload enable
    static constexpr uint32_t CCMR1_Output_OC1FE = 0x4;      // Output Compare 1 fast enable
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Output_CC1S =            // Capture/Compare 1 selection
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
    static constexpr uint32_t CNT_CNT =                // counter value
        bit_field_t<0, 0xffff>::value<X>();
    static constexpr uint32_t CNT_UIFCPY = 0x80000000; // UIF Copy

    static constexpr uint32_t PSC_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t PSC_PSC =   // Prescaler value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t ARR_RESET_VALUE = 0xffff;
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
    static constexpr uint32_t BDTR_DTG =               // Dead-time generator setup
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BDTR_LOCK =              // Lock configuration
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t BDTR_OSSI = 0x400;       // Off-state selection for Idle mode
    static constexpr uint32_t BDTR_OSSR = 0x800;       // Off-state selection for Run mode
    static constexpr uint32_t BDTR_BKE = 0x1000;       // Break enable
    static constexpr uint32_t BDTR_BKP = 0x2000;       // Break polarity
    static constexpr uint32_t BDTR_AOE = 0x4000;       // Automatic output enable
    static constexpr uint32_t BDTR_MOE = 0x8000;       // Main output enable
    template<uint32_t X>
    static constexpr uint32_t BDTR_BKF =               // Break filter
        bit_field_t<16, 0xf>::value<X>();
    static constexpr uint32_t BDTR_BKDSRM = 0x4000000; // BKDSRM
    static constexpr uint32_t BDTR_BKBID = 0x10000000; // BKBID

    static constexpr uint32_t DTR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DTR2_DTGF =          // Dead-time generator setup
        bit_field_t<0, 0xff>::value<X>();
    static constexpr uint32_t DTR2_DTAE = 0x10000; // Deadtime Asymmetric Enable
    static constexpr uint32_t DTR2_DTPE = 0x20000; // Deadtime Preload Enable

    static constexpr uint32_t TISEL_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TISEL_TI1SEL =   // TI1[0] to TI1[15] input selection
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t AF1_RESET_VALUE = 0x0;
    static constexpr uint32_t AF1_BKCMP4P = 0x2000; // BRK COMP4 input polarity
    static constexpr uint32_t AF1_BKCMP3P = 0x1000; // BRK COMP3 input polarity
    static constexpr uint32_t AF1_BKCMP2P = 0x800;  // BRK COMP2 input polarity
    static constexpr uint32_t AF1_BKCMP1P = 0x400;  // BRK COMP1 input polarity
    static constexpr uint32_t AF1_BKINP = 0x200;    // BRK BKIN input polarity
    static constexpr uint32_t AF1_BKCMP7E = 0x80;   // BRK COMP7 enable
    static constexpr uint32_t AF1_BKCMP6E = 0x40;   // BRK COMP6 enable
    static constexpr uint32_t AF1_BKCMP5E = 0x20;   // BRK COMP5 enable
    static constexpr uint32_t AF1_BKCMP4E = 0x10;   // BRK COMP4 enable
    static constexpr uint32_t AF1_BKCMP3E = 0x8;    // BRK COMP3 enable
    static constexpr uint32_t AF1_BKCMP2E = 0x4;    // BRK COMP2 enable
    static constexpr uint32_t AF1_BKCMP1E = 0x2;    // BRK COMP1 enable
    static constexpr uint32_t AF1_BKINE = 0x1;      // BRK BKIN input enable

    static constexpr uint32_t AF2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t AF2_OCRSEL =   // OCREF_CLR source selection
        bit_field_t<16, 0x7>::value<X>();

    static constexpr uint32_t DCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DCR_DBL =   // DMA burst length
        bit_field_t<8, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DCR_DBA =   // DMA base address
        bit_field_t<0, 0x1f>::value<X>();

    static constexpr uint32_t DMAR_RESET_VALUE = 0x0;
};


////
//
//      Advanced-timers
//
////

struct stm32g431xx_tim2_t
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
    volatile uint32_t CCR5;         // [read-write] capture/compare register 4
    volatile uint32_t CCR6;         // [read-write] capture/compare register 4
    volatile uint32_t CCMR3_Output; // [read-write] capture/compare mode register 2 (output mode)
    volatile uint32_t DTR2;         // [read-write] timer Deadtime Register 2
    volatile uint32_t ECR;          // [read-write] DMA control register
    volatile uint32_t TISEL;        // [read-write] TIM timer input selection register
    volatile uint32_t AF1;          // [read-write] TIM alternate function option register 1
    volatile uint32_t AF2;          // [read-write] TIM alternate function option register 2
    reserved_t<0xdd> _0x3dc;
    volatile uint32_t DCR;          // [read-write] control register
    volatile uint32_t DMAR;         // [read-write] DMA address for full transfer

    static constexpr uint32_t CR1_RESET_VALUE = 0x0;
    static constexpr uint32_t CR1_DITHEN = 0x1000;  // Dithering Enable
    static constexpr uint32_t CR1_UIFREMAP = 0x800; // UIF status bit remapping
    template<uint32_t X>
    static constexpr uint32_t CR1_CKD =             // Clock division
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t CR1_ARPE = 0x80;      // Auto-reload preload enable
    template<uint32_t X>
    static constexpr uint32_t CR1_CMS =             // Center-aligned mode selection
        bit_field_t<5, 0x3>::value<X>();
    static constexpr uint32_t CR1_DIR = 0x10;       // Direction
    static constexpr uint32_t CR1_OPM = 0x8;        // One-pulse mode
    static constexpr uint32_t CR1_URS = 0x4;        // Update request source
    static constexpr uint32_t CR1_UDIS = 0x2;       // Update disable
    static constexpr uint32_t CR1_CEN = 0x1;        // Counter enable

    static constexpr uint32_t CR2_RESET_VALUE = 0x0;
    static constexpr uint32_t CR2_MMS_3 = 0x2000000; // Master mode selection - bit 3
    template<uint32_t X>
    static constexpr uint32_t CR2_MMS2 =             // Master mode selection 2
        bit_field_t<20, 0xf>::value<X>();
    static constexpr uint32_t CR2_OIS6 = 0x40000;    // Output Idle state 6 (OC6 output)
    static constexpr uint32_t CR2_OIS5 = 0x10000;    // Output Idle state 5 (OC5 output)
    static constexpr uint32_t CR2_OIS4N = 0x8000;    // Output Idle state 4 (OC4N output)
    static constexpr uint32_t CR2_OIS4 = 0x4000;     // Output Idle state 4
    static constexpr uint32_t CR2_OIS3N = 0x2000;    // Output Idle state 3
    static constexpr uint32_t CR2_OIS3 = 0x1000;     // Output Idle state 3
    static constexpr uint32_t CR2_OIS2N = 0x800;     // Output Idle state 2
    static constexpr uint32_t CR2_OIS2 = 0x400;      // Output Idle state 2
    static constexpr uint32_t CR2_OIS1N = 0x200;     // Output Idle state 1
    static constexpr uint32_t CR2_OIS1 = 0x100;      // Output Idle state 1
    static constexpr uint32_t CR2_TI1S = 0x80;       // TI1 selection
    template<uint32_t X>
    static constexpr uint32_t CR2_MMS =              // Master mode selection
        bit_field_t<4, 0x7>::value<X>();
    static constexpr uint32_t CR2_CCDS = 0x8;        // Capture/compare DMA selection
    static constexpr uint32_t CR2_CCUS = 0x4;        // Capture/compare control update selection
    static constexpr uint32_t CR2_CCPC = 0x1;        // Capture/compare preloaded control

    static constexpr uint32_t SMCR_RESET_VALUE = 0x0;
    static constexpr uint32_t SMCR_SMSPS = 0x2000000; // SMS Preload Source
    static constexpr uint32_t SMCR_SMSPE = 0x1000000; // SMS Preload Enable
    template<uint32_t X>
    static constexpr uint32_t SMCR_TS_4_3 =           // Trigger selection - bit 4:3
        bit_field_t<20, 0x3>::value<X>();
    static constexpr uint32_t SMCR_SMS_3 = 0x10000;   // Slave mode selection - bit 3
    static constexpr uint32_t SMCR_ETP = 0x8000;      // External trigger polarity
    static constexpr uint32_t SMCR_ECE = 0x4000;      // External clock enable
    template<uint32_t X>
    static constexpr uint32_t SMCR_ETPS =             // External trigger prescaler
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SMCR_ETF =              // External trigger filter
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t SMCR_MSM = 0x80;        // Master/Slave mode
    template<uint32_t X>
    static constexpr uint32_t SMCR_TS =               // Trigger selection
        bit_field_t<4, 0x7>::value<X>();
    static constexpr uint32_t SMCR_OCCS = 0x8;        // OCREF clear selection
    template<uint32_t X>
    static constexpr uint32_t SMCR_SMS =              // Slave mode selection
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t DIER_RESET_VALUE = 0x0;
    static constexpr uint32_t DIER_TERRIE = 0x800000; // Transition Error interrupt enable
    static constexpr uint32_t DIER_IERRIE = 0x400000; // Index Error interrupt enable
    static constexpr uint32_t DIER_DIRIE = 0x200000;  // Direction Change interrupt enable
    static constexpr uint32_t DIER_IDXIE = 0x100000;  // Index interrupt enable
    static constexpr uint32_t DIER_TDE = 0x4000;      // Trigger DMA request enable
    static constexpr uint32_t DIER_COMDE = 0x2000;    // COM DMA request enable
    static constexpr uint32_t DIER_CC4DE = 0x1000;    // Capture/Compare 4 DMA request enable
    static constexpr uint32_t DIER_CC3DE = 0x800;     // Capture/Compare 3 DMA request enable
    static constexpr uint32_t DIER_CC2DE = 0x400;     // Capture/Compare 2 DMA request enable
    static constexpr uint32_t DIER_CC1DE = 0x200;     // Capture/Compare 1 DMA request enable
    static constexpr uint32_t DIER_UDE = 0x100;       // Update DMA request enable
    static constexpr uint32_t DIER_TIE = 0x40;        // Trigger interrupt enable
    static constexpr uint32_t DIER_CC4IE = 0x10;      // Capture/Compare 4 interrupt enable
    static constexpr uint32_t DIER_CC3IE = 0x8;       // Capture/Compare 3 interrupt enable
    static constexpr uint32_t DIER_CC2IE = 0x4;       // Capture/Compare 2 interrupt enable
    static constexpr uint32_t DIER_CC1IE = 0x2;       // Capture/Compare 1 interrupt enable
    static constexpr uint32_t DIER_UIE = 0x1;         // Update interrupt enable
    static constexpr uint32_t DIER_BIE = 0x80;        // Break interrupt enable
    static constexpr uint32_t DIER_COMIE = 0x20;      // COM interrupt enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0;
    static constexpr uint32_t SR_TERRF = 0x800000; // Transition Error interrupt flag
    static constexpr uint32_t SR_IERRF = 0x400000; // Index Error interrupt flag
    static constexpr uint32_t SR_DIRF = 0x200000;  // Direction Change interrupt flag
    static constexpr uint32_t SR_IDXF = 0x100000;  // Index interrupt flag
    static constexpr uint32_t SR_CC6IF = 0x20000;  // Compare 6 interrupt flag
    static constexpr uint32_t SR_CC5IF = 0x10000;  // Compare 5 interrupt flag
    static constexpr uint32_t SR_SBIF = 0x2000;    // System Break interrupt flag
    static constexpr uint32_t SR_CC4OF = 0x1000;   // Capture/Compare 4 overcapture flag
    static constexpr uint32_t SR_CC3OF = 0x800;    // Capture/Compare 3 overcapture flag
    static constexpr uint32_t SR_CC2OF = 0x400;    // Capture/compare 2 overcapture flag
    static constexpr uint32_t SR_CC1OF = 0x200;    // Capture/Compare 1 overcapture flag
    static constexpr uint32_t SR_B2IF = 0x100;     // Break 2 interrupt flag
    static constexpr uint32_t SR_BIF = 0x80;       // Break interrupt flag
    static constexpr uint32_t SR_TIF = 0x40;       // Trigger interrupt flag
    static constexpr uint32_t SR_COMIF = 0x20;     // COM interrupt flag
    static constexpr uint32_t SR_CC4IF = 0x10;     // Capture/Compare 4 interrupt flag
    static constexpr uint32_t SR_CC3IF = 0x8;      // Capture/Compare 3 interrupt flag
    static constexpr uint32_t SR_CC2IF = 0x4;      // Capture/Compare 2 interrupt flag
    static constexpr uint32_t SR_CC1IF = 0x2;      // Capture/compare 1 interrupt flag
    static constexpr uint32_t SR_UIF = 0x1;        // Update interrupt flag

    static constexpr uint32_t EGR_RESET_VALUE = 0x0;
    static constexpr uint32_t EGR_B2G = 0x100; // Break 2 generation
    static constexpr uint32_t EGR_BG = 0x80;   // Break generation
    static constexpr uint32_t EGR_TG = 0x40;   // Trigger generation
    static constexpr uint32_t EGR_COMG = 0x20; // Capture/Compare control update generation
    static constexpr uint32_t EGR_CC4G = 0x10; // Capture/compare 4 generation
    static constexpr uint32_t EGR_CC3G = 0x8;  // Capture/compare 3 generation
    static constexpr uint32_t EGR_CC2G = 0x4;  // Capture/compare 2 generation
    static constexpr uint32_t EGR_CC1G = 0x2;  // Capture/compare 1 generation
    static constexpr uint32_t EGR_UG = 0x1;    // Update generation

    static constexpr uint32_t CCMR1_Output_RESET_VALUE = 0x0;
    static constexpr uint32_t CCMR1_Output_OC2M_3 = 0x1000000; // Output Compare 2 mode - bit 3
    static constexpr uint32_t CCMR1_Output_OC1M_3 = 0x10000;   // Output Compare 1 mode - bit 3
    static constexpr uint32_t CCMR1_Output_OC2CE = 0x8000;     // Output Compare 2 clear enable
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Output_OC2M =              // Output Compare 2 mode
        bit_field_t<12, 0x7>::value<X>();
    static constexpr uint32_t CCMR1_Output_OC2PE = 0x800;      // Output Compare 2 preload enable
    static constexpr uint32_t CCMR1_Output_OC2FE = 0x400;      // Output Compare 2 fast enable
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Output_CC2S =              // Capture/Compare 2 selection
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t CCMR1_Output_OC1CE = 0x80;       // Output Compare 1 clear enable
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Output_OC1M =              // Output Compare 1 mode
        bit_field_t<4, 0x7>::value<X>();
    static constexpr uint32_t CCMR1_Output_OC1PE = 0x8;        // Output Compare 1 preload enable
    static constexpr uint32_t CCMR1_Output_OC1FE = 0x4;        // Output Compare 1 fast enable
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Output_CC1S =              // Capture/Compare 1 selection
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
    static constexpr uint32_t CCMR1_Input_ICPCS =    // Input capture 1 prescaler
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCMR1_Input_CC1S =     // Capture/Compare 1 selection
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t CCMR2_Output_RESET_VALUE = 0x0;
    static constexpr uint32_t CCMR2_Output_OC4M_3 = 0x1000000; // Output Compare 4 mode - bit 3
    static constexpr uint32_t CCMR2_Output_OC3M_3 = 0x10000;   // Output Compare 3 mode - bit 3
    static constexpr uint32_t CCMR2_Output_OC4CE = 0x8000;     // Output compare 4 clear enable
    template<uint32_t X>
    static constexpr uint32_t CCMR2_Output_OC4M =              // Output compare 4 mode
        bit_field_t<12, 0x7>::value<X>();
    static constexpr uint32_t CCMR2_Output_OC4PE = 0x800;      // Output compare 4 preload enable
    static constexpr uint32_t CCMR2_Output_OC4FE = 0x400;      // Output compare 4 fast enable
    template<uint32_t X>
    static constexpr uint32_t CCMR2_Output_CC4S =              // Capture/Compare 4 selection
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t CCMR2_Output_OC3CE = 0x80;       // Output compare 3 clear enable
    template<uint32_t X>
    static constexpr uint32_t CCMR2_Output_OC3M =              // Output compare 3 mode
        bit_field_t<4, 0x7>::value<X>();
    static constexpr uint32_t CCMR2_Output_OC3PE = 0x8;        // Output compare 3 preload enable
    static constexpr uint32_t CCMR2_Output_OC3FE = 0x4;        // Output compare 3 fast enable
    template<uint32_t X>
    static constexpr uint32_t CCMR2_Output_CC3S =              // Capture/Compare 3 selection
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
    static constexpr uint32_t CCER_CC6P = 0x200000; // Capture/Compare 6 output polarity
    static constexpr uint32_t CCER_CC6E = 0x100000; // Capture/Compare 6 output enable
    static constexpr uint32_t CCER_CC5P = 0x20000;  // Capture/Compare 5 output polarity
    static constexpr uint32_t CCER_CC5E = 0x10000;  // Capture/Compare 5 output enable
    static constexpr uint32_t CCER_CC4NP = 0x8000;  // Capture/Compare 4 complementary output polarity
    static constexpr uint32_t CCER_CC4NE = 0x4000;  // Capture/Compare 4 complementary output enable
    static constexpr uint32_t CCER_CC4P = 0x2000;   // Capture/Compare 3 output Polarity
    static constexpr uint32_t CCER_CC4E = 0x1000;   // Capture/Compare 4 output enable
    static constexpr uint32_t CCER_CC3NP = 0x800;   // Capture/Compare 3 output Polarity
    static constexpr uint32_t CCER_CC3NE = 0x400;   // Capture/Compare 3 complementary output enable
    static constexpr uint32_t CCER_CC3P = 0x200;    // Capture/Compare 3 output Polarity
    static constexpr uint32_t CCER_CC3E = 0x100;    // Capture/Compare 3 output enable
    static constexpr uint32_t CCER_CC2NP = 0x80;    // Capture/Compare 2 output Polarity
    static constexpr uint32_t CCER_CC2NE = 0x40;    // Capture/Compare 2 complementary output enable
    static constexpr uint32_t CCER_CC2P = 0x20;     // Capture/Compare 2 output Polarity
    static constexpr uint32_t CCER_CC2E = 0x10;     // Capture/Compare 2 output enable
    static constexpr uint32_t CCER_CC1NP = 0x8;     // Capture/Compare 1 output Polarity
    static constexpr uint32_t CCER_CC1NE = 0x4;     // Capture/Compare 1 complementary output enable
    static constexpr uint32_t CCER_CC1P = 0x2;      // Capture/Compare 1 output Polarity
    static constexpr uint32_t CCER_CC1E = 0x1;      // Capture/Compare 1 output enable

    static constexpr uint32_t CNT_RESET_VALUE = 0x0;
    static constexpr uint32_t CNT_UIFCPY = 0x80000000; // UIFCPY
    template<uint32_t X>
    static constexpr uint32_t CNT_CNT =                // counter value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t PSC_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t PSC_PSC =   // Prescaler value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t ARR_RESET_VALUE = 0xffffffff;
    template<uint32_t X>
    static constexpr uint32_t ARR_ARR =   // Auto-reload value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t RCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RCR_REP =   // Repetition counter value
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

    static constexpr uint32_t BDTR_RESET_VALUE = 0x0;
    static constexpr uint32_t BDTR_BK2ID = 0x20000000;  // BK2ID
    static constexpr uint32_t BDTR_BKBID = 0x10000000;  // BKBID
    static constexpr uint32_t BDTR_BK2DSRM = 0x8000000; // BK2DSRM
    static constexpr uint32_t BDTR_BKDSRM = 0x4000000;  // BKDSRM
    static constexpr uint32_t BDTR_BK2P = 0x2000000;    // Break 2 polarity
    static constexpr uint32_t BDTR_BK2E = 0x1000000;    // Break 2 Enable
    template<uint32_t X>
    static constexpr uint32_t BDTR_BK2F =               // Break 2 filter
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BDTR_BKF =                // Break filter
        bit_field_t<16, 0xf>::value<X>();
    static constexpr uint32_t BDTR_MOE = 0x8000;        // Main output enable
    static constexpr uint32_t BDTR_AOE = 0x4000;        // Automatic output enable
    static constexpr uint32_t BDTR_BKP = 0x2000;        // Break polarity
    static constexpr uint32_t BDTR_BKE = 0x1000;        // Break enable
    static constexpr uint32_t BDTR_OSSR = 0x800;        // Off-state selection for Run mode
    static constexpr uint32_t BDTR_OSSI = 0x400;        // Off-state selection for Idle mode
    template<uint32_t X>
    static constexpr uint32_t BDTR_LOCK =               // Lock configuration
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BDTR_DTG =                // Dead-time generator setup
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t CCR5_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCR5_CCR5 =              // Capture/Compare value
        bit_field_t<0, 0xffff>::value<X>();
    static constexpr uint32_t CCR5_GC5C1 = 0x20000000; // Group Channel 5 and Channel 1
    static constexpr uint32_t CCR5_GC5C2 = 0x40000000; // Group Channel 5 and Channel 2
    static constexpr uint32_t CCR5_GC5C3 = 0x80000000; // Group Channel 5 and Channel 3

    static constexpr uint32_t CCR6_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCR6_CCR6 =   // Capture/Compare value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CCMR3_Output_RESET_VALUE = 0x0;
    static constexpr uint32_t CCMR3_Output_OC6M_bit3 = 0x1000000; // Output Compare 6 mode bit 3
    template<uint32_t X>
    static constexpr uint32_t CCMR3_Output_OC5M_bit3 =            // Output Compare 5 mode bit 3
        bit_field_t<16, 0x7>::value<X>();
    static constexpr uint32_t CCMR3_Output_OC6CE = 0x8000;        // Output compare 6 clear enable
    template<uint32_t X>
    static constexpr uint32_t CCMR3_Output_OC6M =                 // Output compare 6 mode
        bit_field_t<12, 0x7>::value<X>();
    static constexpr uint32_t CCMR3_Output_OC6PE = 0x800;         // Output compare 6 preload enable
    static constexpr uint32_t CCMR3_Output_OC6FE = 0x400;         // Output compare 6 fast enable
    static constexpr uint32_t CCMR3_Output_OC5CE = 0x80;          // Output compare 5 clear enable
    template<uint32_t X>
    static constexpr uint32_t CCMR3_Output_OC5M =                 // Output compare 5 mode
        bit_field_t<4, 0x7>::value<X>();
    static constexpr uint32_t CCMR3_Output_OC5PE = 0x8;           // Output compare 5 preload enable
    static constexpr uint32_t CCMR3_Output_OC5FE = 0x4;           // Output compare 5 fast enable

    static constexpr uint32_t DTR2_RESET_VALUE = 0x0;
    static constexpr uint32_t DTR2_DTPE = 0x20000; // Deadtime Preload Enable
    static constexpr uint32_t DTR2_DTAE = 0x10000; // Deadtime Asymmetric Enable
    template<uint32_t X>
    static constexpr uint32_t DTR2_DTGF =          // Dead-time falling edge generator setup
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t ECR_RESET_VALUE = 0x0;
    static constexpr uint32_t ECR_IE = 0x1;    // Index Enable
    template<uint32_t X>
    static constexpr uint32_t ECR_IDIR =       // Index Direction
        bit_field_t<1, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ECR_IBLK =       // Index Blanking
        bit_field_t<3, 0x3>::value<X>();
    static constexpr uint32_t ECR_FIDX = 0x20; // First Index
    template<uint32_t X>
    static constexpr uint32_t ECR_IPOS =       // Index Positioning
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ECR_PW =         // Pulse width
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ECR_PWPRSC =     // Pulse Width prescaler
        bit_field_t<24, 0x7>::value<X>();

    static constexpr uint32_t TISEL_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TISEL_TI1SEL =   // TI1[0] to TI1[15] input selection
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TISEL_TI2SEL =   // TI2[0] to TI2[15] input selection
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TISEL_TI3SEL =   // TI3[0] to TI3[15] input selection
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TISEL_TI4SEL =   // TI4[0] to TI4[15] input selection
        bit_field_t<24, 0xf>::value<X>();

    static constexpr uint32_t AF1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t AF1_ETRSEL =          // ETR source selection
        bit_field_t<14, 0xf>::value<X>();
    static constexpr uint32_t AF1_BKCMP4P = 0x2000; // BRK COMP4 input polarity
    static constexpr uint32_t AF1_BKCMP3P = 0x1000; // BRK COMP3 input polarity
    static constexpr uint32_t AF1_BKCMP2P = 0x800;  // BRK COMP2 input polarity
    static constexpr uint32_t AF1_BKCMP1P = 0x400;  // BRK COMP1 input polarity
    static constexpr uint32_t AF1_BKINP = 0x200;    // BRK BKIN input polarity
    static constexpr uint32_t AF1_BKCMP7E = 0x80;   // BRK COMP7 enable
    static constexpr uint32_t AF1_BKCMP6E = 0x40;   // BRK COMP6 enable
    static constexpr uint32_t AF1_BKCMP5E = 0x20;   // BRK COMP5 enable
    static constexpr uint32_t AF1_BKCMP4E = 0x10;   // BRK COMP4 enable
    static constexpr uint32_t AF1_BKCMP3E = 0x8;    // BRK COMP3 enable
    static constexpr uint32_t AF1_BKCMP2E = 0x4;    // BRK COMP2 enable
    static constexpr uint32_t AF1_BKCMP1E = 0x2;    // BRK COMP1 enable
    static constexpr uint32_t AF1_BKINE = 0x1;      // BRK BKIN input enable

    static constexpr uint32_t AF2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t AF2_OCRSEL =           // OCREF_CLR source selection
        bit_field_t<16, 0x7>::value<X>();
    static constexpr uint32_t AF2_BK2CMP4P = 0x2000; // BRK2 COMP4 input polarity
    static constexpr uint32_t AF2_BK2CMP3P = 0x1000; // BRK2 COMP3 input polarity
    static constexpr uint32_t AF2_BK2CMP2P = 0x800;  // BRK2 COMP2 input polarity
    static constexpr uint32_t AF2_BK2CMP1P = 0x400;  // BRK2 COMP1 input polarity
    static constexpr uint32_t AF2_BK2INP = 0x200;    // BRK2 BKIN input polarity
    static constexpr uint32_t AF2_BK2CMP7E = 0x80;   // BRK2 COMP7 enable
    static constexpr uint32_t AF2_BK2CMP6E = 0x40;   // BRK2 COMP6 enable
    static constexpr uint32_t AF2_BK2CMP5E = 0x20;   // BRK2 COMP5 enable
    static constexpr uint32_t AF2_BK2CMP4E = 0x10;   // BRK2 COMP4 enable
    static constexpr uint32_t AF2_BK2CMP3E = 0x8;    // BRK2 COMP3 enable
    static constexpr uint32_t AF2_BK2CMP2E = 0x4;    // BRK2 COMP2 enable
    static constexpr uint32_t AF2_BK2CMP1E = 0x2;    // BRK2 COMP1 enable
    static constexpr uint32_t AF2_BKINE = 0x1;       // BRK BKIN input enable

    static constexpr uint32_t DCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DCR_DBL =   // DMA burst length
        bit_field_t<8, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DCR_DBA =   // DMA base address
        bit_field_t<0, 0x1f>::value<X>();

    static constexpr uint32_t DMAR_RESET_VALUE = 0x0;
};


////
//
//      Basic-timers
//
////

struct stm32g431xx_tim6_t
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
    static constexpr uint32_t CR1_DITHEN = 0x1000;  // Dithering Enable
    static constexpr uint32_t CR1_UIFREMAP = 0x800; // UIF status bit remapping
    static constexpr uint32_t CR1_ARPE = 0x80;      // Auto-reload preload enable
    static constexpr uint32_t CR1_OPM = 0x8;        // One-pulse mode
    static constexpr uint32_t CR1_URS = 0x4;        // Update request source
    static constexpr uint32_t CR1_UDIS = 0x2;       // Update disable
    static constexpr uint32_t CR1_CEN = 0x1;        // Counter enable

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
    static constexpr uint32_t CNT_UIFCPY = 0x80000000; // UIF Copy
    template<uint32_t X>
    static constexpr uint32_t CNT_CNT =                // Low counter value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t PSC_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t PSC_PSC =   // Prescaler value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t ARR_RESET_VALUE = 0xffff;
    template<uint32_t X>
    static constexpr uint32_t ARR_ARR =   // Low Auto-reload value
        bit_field_t<0, 0xffff>::value<X>();
};


template<>
struct peripheral_t<STM32G431xx, TIM15>
{
    typedef stm32g431xx_tim15_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G441xx, TIM15>
{
    typedef stm32g431xx_tim15_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G471xx, TIM15>
{
    typedef stm32g431xx_tim15_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G473xx, TIM15>
{
    typedef stm32g431xx_tim15_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G474xx, TIM15>
{
    typedef stm32g431xx_tim15_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G483xx, TIM15>
{
    typedef stm32g431xx_tim15_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, TIM15>
{
    typedef stm32g431xx_tim15_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G431xx, TIM16>
{
    typedef stm32g431xx_tim16_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G431xx, TIM17>
{
    typedef stm32g431xx_tim16_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G441xx, TIM16>
{
    typedef stm32g431xx_tim16_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G441xx, TIM17>
{
    typedef stm32g431xx_tim16_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G471xx, TIM16>
{
    typedef stm32g431xx_tim16_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G471xx, TIM17>
{
    typedef stm32g431xx_tim16_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G473xx, TIM16>
{
    typedef stm32g431xx_tim16_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G473xx, TIM17>
{
    typedef stm32g431xx_tim16_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G474xx, TIM16>
{
    typedef stm32g431xx_tim16_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G474xx, TIM17>
{
    typedef stm32g431xx_tim16_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G483xx, TIM16>
{
    typedef stm32g431xx_tim16_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G483xx, TIM17>
{
    typedef stm32g431xx_tim16_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, TIM16>
{
    typedef stm32g431xx_tim16_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, TIM17>
{
    typedef stm32g431xx_tim16_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G431xx, TIM1>
{
    typedef stm32g431xx_tim1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G431xx, TIM8>
{
    typedef stm32g431xx_tim1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G441xx, TIM1>
{
    typedef stm32g431xx_tim1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G441xx, TIM8>
{
    typedef stm32g431xx_tim1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G471xx, TIM1>
{
    typedef stm32g431xx_tim1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G471xx, TIM8>
{
    typedef stm32g431xx_tim1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G473xx, TIM1>
{
    typedef stm32g431xx_tim1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G473xx, TIM20>
{
    typedef stm32g431xx_tim1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G473xx, TIM8>
{
    typedef stm32g431xx_tim1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G474xx, TIM1>
{
    typedef stm32g431xx_tim1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G474xx, TIM20>
{
    typedef stm32g431xx_tim1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G474xx, TIM8>
{
    typedef stm32g431xx_tim1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G483xx, TIM1>
{
    typedef stm32g431xx_tim1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G483xx, TIM20>
{
    typedef stm32g431xx_tim1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G483xx, TIM8>
{
    typedef stm32g431xx_tim1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, TIM1>
{
    typedef stm32g431xx_tim1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, TIM20>
{
    typedef stm32g431xx_tim1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, TIM8>
{
    typedef stm32g431xx_tim1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G431xx, TIM2>
{
    typedef stm32g431xx_tim2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G431xx, TIM3>
{
    typedef stm32g431xx_tim2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G431xx, TIM4>
{
    typedef stm32g431xx_tim2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G441xx, TIM2>
{
    typedef stm32g431xx_tim2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G441xx, TIM3>
{
    typedef stm32g431xx_tim2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G441xx, TIM4>
{
    typedef stm32g431xx_tim2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G471xx, TIM2>
{
    typedef stm32g431xx_tim2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G471xx, TIM3>
{
    typedef stm32g431xx_tim2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G471xx, TIM4>
{
    typedef stm32g431xx_tim2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G471xx, TIM5>
{
    typedef stm32g431xx_tim2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G473xx, TIM2>
{
    typedef stm32g431xx_tim2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G473xx, TIM3>
{
    typedef stm32g431xx_tim2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G473xx, TIM4>
{
    typedef stm32g431xx_tim2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G473xx, TIM5>
{
    typedef stm32g431xx_tim2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G474xx, TIM2>
{
    typedef stm32g431xx_tim2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G474xx, TIM3>
{
    typedef stm32g431xx_tim2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G474xx, TIM4>
{
    typedef stm32g431xx_tim2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G474xx, TIM5>
{
    typedef stm32g431xx_tim2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G483xx, TIM2>
{
    typedef stm32g431xx_tim2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G483xx, TIM3>
{
    typedef stm32g431xx_tim2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G483xx, TIM4>
{
    typedef stm32g431xx_tim2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G483xx, TIM5>
{
    typedef stm32g431xx_tim2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, TIM2>
{
    typedef stm32g431xx_tim2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, TIM3>
{
    typedef stm32g431xx_tim2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, TIM4>
{
    typedef stm32g431xx_tim2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, TIM5>
{
    typedef stm32g431xx_tim2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G431xx, TIM6>
{
    typedef stm32g431xx_tim6_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G431xx, TIM7>
{
    typedef stm32g431xx_tim6_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G441xx, TIM6>
{
    typedef stm32g431xx_tim6_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G441xx, TIM7>
{
    typedef stm32g431xx_tim6_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G471xx, TIM6>
{
    typedef stm32g431xx_tim6_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G471xx, TIM7>
{
    typedef stm32g431xx_tim6_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G473xx, TIM6>
{
    typedef stm32g431xx_tim6_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G473xx, TIM7>
{
    typedef stm32g431xx_tim6_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G474xx, TIM6>
{
    typedef stm32g431xx_tim6_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G474xx, TIM7>
{
    typedef stm32g431xx_tim6_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G483xx, TIM6>
{
    typedef stm32g431xx_tim6_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G483xx, TIM7>
{
    typedef stm32g431xx_tim6_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, TIM6>
{
    typedef stm32g431xx_tim6_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, TIM7>
{
    typedef stm32g431xx_tim6_t T;
    static T& V;
};

using tim1_t = peripheral_t<mcu_svd, TIM1>;
using tim15_t = peripheral_t<mcu_svd, TIM15>;
using tim16_t = peripheral_t<mcu_svd, TIM16>;
using tim17_t = peripheral_t<mcu_svd, TIM17>;
using tim2_t = peripheral_t<mcu_svd, TIM2>;
using tim20_t = peripheral_t<mcu_svd, TIM20>;
using tim3_t = peripheral_t<mcu_svd, TIM3>;
using tim4_t = peripheral_t<mcu_svd, TIM4>;
using tim5_t = peripheral_t<mcu_svd, TIM5>;
using tim6_t = peripheral_t<mcu_svd, TIM6>;
using tim7_t = peripheral_t<mcu_svd, TIM7>;
using tim8_t = peripheral_t<mcu_svd, TIM8>;

