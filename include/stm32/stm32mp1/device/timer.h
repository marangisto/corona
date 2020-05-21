#pragma once

////
//
//      STM32MP1 TIMER peripherals
//
////

////
//
//      TIM15
//
////

struct stm32mp15xxx_tim15_t
{
    volatile uint32_t TIM15_CR1;         // [read-write] TIM15 control register 1
    volatile uint32_t TIM15_CR2;         // [read-write] TIM15 control register 2
    volatile uint32_t TIMx_SMCR;         // [read-write] slave mode control register
    volatile uint32_t TIM15_DIER;        // [read-write] TIM15 DMA/interrupt enable register
    volatile uint32_t TIM15_SR;          // [read-write] TIM15 status register
    volatile uint32_t TIMx_EGR;          // [write-only] event generation register
    volatile uint32_t TIMx_CCMR1;        // [read-write] capture/compare mode register 1 (output mode)
    reserved_t<0x1> _0x20;
    volatile uint32_t TIM15_CCER;        // [read-write] TIM15 capture/compare enable register
    volatile uint32_t TIM15_CNT;         // [read-write] TIM15 counter
    volatile uint32_t TIM15_PSC;         // [read-write] TIM15 prescaler
    volatile uint32_t TIM15_ARR;         // [read-write] TIM15 auto-reload register
    volatile uint32_t TIM15_RCR;         // [read-write] TIM15 repetition counter register
    volatile uint32_t TIM15_CCR1;        // [read-write] TIM15 capture/compare register 1
    volatile uint32_t TIM15_CCR2;        // [read-write] TIM15 capture/compare register 2
    reserved_t<0x2> _0x44;
    volatile uint32_t TIMx_BDTR;         // [read-write] As the bits BK2BID, BKBID, BK2DSRM, BKDSRM, BK2P, BK2E, BK2F[3:0], BKF[3:0], AOE, BKP, BKE, OSSI, OSSR and DTG[7:0] can be write-locked depending on the LOCK configuration, it can be necessary to configure all of them during the first write access to the TIMx_BDTR register.
    volatile uint32_t TIM15_DCR;         // [read-write] TIM15 DMA control register
    volatile uint32_t TIM15_DMAR;        // [read-write] TIM15 DMA address for full transfer
    reserved_t<0x4> _0x60;
    volatile uint32_t TIM15_AF1;         // [read-write] TIM15 alternate register 1
    reserved_t<0x1> _0x68;
    volatile uint32_t TIM15_TISEL;       // [read-write] TIM15 input selection register

    static constexpr uint32_t TIM15_CR1_RESET_VALUE = 0x0;
    static constexpr uint32_t TIM15_CR1_CEN = 0x1;        // CEN
    static constexpr uint32_t TIM15_CR1_UDIS = 0x2;       // UDIS
    static constexpr uint32_t TIM15_CR1_URS = 0x4;        // URS
    static constexpr uint32_t TIM15_CR1_OPM = 0x8;        // OPM
    static constexpr uint32_t TIM15_CR1_ARPE = 0x80;      // ARPE
    template<uint32_t X>
    static constexpr uint32_t TIM15_CR1_CKD =             // CKD
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t TIM15_CR1_UIFREMAP = 0x800; // UIFREMAP

    static constexpr uint32_t TIM15_CR2_RESET_VALUE = 0x0;
    static constexpr uint32_t TIM15_CR2_CCPC = 0x1;    // CCPC
    static constexpr uint32_t TIM15_CR2_CCUS = 0x4;    // CCUS
    static constexpr uint32_t TIM15_CR2_CCDS = 0x8;    // CCDS
    template<uint32_t X>
    static constexpr uint32_t TIM15_CR2_MMS =          // MMS
        bit_field_t<4, 0x7>::value<X>();
    static constexpr uint32_t TIM15_CR2_TI1S = 0x80;   // TI1S
    static constexpr uint32_t TIM15_CR2_OIS1 = 0x100;  // OIS1
    static constexpr uint32_t TIM15_CR2_OIS1N = 0x200; // OIS1N
    static constexpr uint32_t TIM15_CR2_OIS2 = 0x400;  // OIS2

    static constexpr uint32_t TIMx_SMCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TIMx_SMCR_TS_4_3 =         // Trigger selection
        bit_field_t<20, 0x3>::value<X>();
    static constexpr uint32_t TIMx_SMCR_SMS_3 = 0x10000; // Slave mode selection - bit 3
    static constexpr uint32_t TIMx_SMCR_MSM = 0x80;      // Master/Slave mode
    template<uint32_t X>
    static constexpr uint32_t TIMx_SMCR_TS =             // Trigger selection
        bit_field_t<4, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TIMx_SMCR_SMS =            // Slave mode selection
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t TIM15_DIER_RESET_VALUE = 0x0;
    static constexpr uint32_t TIM15_DIER_UIE = 0x1;      // UIE
    static constexpr uint32_t TIM15_DIER_CC1IE = 0x2;    // CC1IE
    static constexpr uint32_t TIM15_DIER_CC2IE = 0x4;    // CC2IE
    static constexpr uint32_t TIM15_DIER_COMIE = 0x20;   // COMIE
    static constexpr uint32_t TIM15_DIER_TIE = 0x40;     // TIE
    static constexpr uint32_t TIM15_DIER_BIE = 0x80;     // BIE
    static constexpr uint32_t TIM15_DIER_UDE = 0x100;    // UDE
    static constexpr uint32_t TIM15_DIER_CC1DE = 0x200;  // CC1DE
    static constexpr uint32_t TIM15_DIER_CC2DE = 0x400;  // CC2DE
    static constexpr uint32_t TIM15_DIER_COMDE = 0x2000; // COMDE
    static constexpr uint32_t TIM15_DIER_TDE = 0x4000;   // TDE

    static constexpr uint32_t TIM15_SR_RESET_VALUE = 0x0;
    static constexpr uint32_t TIM15_SR_UIF = 0x1;     // UIF
    static constexpr uint32_t TIM15_SR_CC1IF = 0x2;   // CC1IF
    static constexpr uint32_t TIM15_SR_CC2IF = 0x4;   // CC2IF
    static constexpr uint32_t TIM15_SR_COMIF = 0x20;  // COMIF
    static constexpr uint32_t TIM15_SR_TIF = 0x40;    // TIF
    static constexpr uint32_t TIM15_SR_BIF = 0x80;    // BIF
    static constexpr uint32_t TIM15_SR_CC1OF = 0x200; // CC1OF
    static constexpr uint32_t TIM15_SR_CC2OF = 0x400; // CC2OF

    static constexpr uint32_t TIMx_EGR_RESET_VALUE = 0x0;
    static constexpr uint32_t TIMx_EGR_BG = 0x80;   // BG
    static constexpr uint32_t TIMx_EGR_TG = 0x40;   // Trigger generation
    static constexpr uint32_t TIMx_EGR_COMG = 0x20; // COMG
    static constexpr uint32_t TIMx_EGR_CC2G = 0x4;  // Capture/compare 2 generation
    static constexpr uint32_t TIMx_EGR_CC1G = 0x2;  // Capture/compare 1 generation
    static constexpr uint32_t TIMx_EGR_UG = 0x1;    // Update generation

    static constexpr uint32_t TIMx_CCMR1_Output_RESET_VALUE = 0x0;
    static constexpr uint32_t TIMx_CCMR1_Output_OC2M_3 = 0x1000000; // Output Compare 2 mode - bit 3
    static constexpr uint32_t TIMx_CCMR1_Output_OC1M_3 = 0x10000;   // Output Compare 1 mode - bit 3
    static constexpr uint32_t TIMx_CCMR1_Output_OC2CE = 0x8000;     // Output compare 2 clear enable
    template<uint32_t X>
    static constexpr uint32_t TIMx_CCMR1_Output_OC2M =              // Output compare 2 mode
        bit_field_t<12, 0x7>::value<X>();
    static constexpr uint32_t TIMx_CCMR1_Output_OC2PE = 0x800;      // Output compare 2 preload enable
    static constexpr uint32_t TIMx_CCMR1_Output_OC2FE = 0x400;      // Output compare 2 fast enable
    template<uint32_t X>
    static constexpr uint32_t TIMx_CCMR1_Output_CC2S =              // Capture/Compare 2 selection
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t TIMx_CCMR1_Output_OC1CE = 0x80;       // Output compare 1 clear enable
    template<uint32_t X>
    static constexpr uint32_t TIMx_CCMR1_Output_OC1M =              // Output compare 1 mode
        bit_field_t<4, 0x7>::value<X>();
    static constexpr uint32_t TIMx_CCMR1_Output_OC1PE = 0x8;        // Output compare 1 preload enable
    static constexpr uint32_t TIMx_CCMR1_Output_OC1FE = 0x4;        // Output compare 1 fast enable
    template<uint32_t X>
    static constexpr uint32_t TIMx_CCMR1_Output_CC1S =              // Capture/Compare 1 selection
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t TIMx_CCMR1_Input_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TIMx_CCMR1_Input_IC2F =     // Input capture 2 filter
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TIMx_CCMR1_Input_IC2PSC =   // Input capture 2 prescaler
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TIMx_CCMR1_Input_CC2S =     // Capture/compare 2 selection
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TIMx_CCMR1_Input_IC1F =     // Input capture 1 filter
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TIMx_CCMR1_Input_IC1PSC =   // Input capture 1 prescaler
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TIMx_CCMR1_Input_CC1S =     // Capture/Compare 1 selection
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t TIM15_CCER_RESET_VALUE = 0x0;
    static constexpr uint32_t TIM15_CCER_CC1E = 0x1;   // CC1E
    static constexpr uint32_t TIM15_CCER_CC1P = 0x2;   // CC1P
    static constexpr uint32_t TIM15_CCER_CC1NE = 0x4;  // CC1NE
    static constexpr uint32_t TIM15_CCER_CC1NP = 0x8;  // CC1NP
    static constexpr uint32_t TIM15_CCER_CC2E = 0x10;  // CC2E
    static constexpr uint32_t TIM15_CCER_CC2P = 0x20;  // CC2P
    static constexpr uint32_t TIM15_CCER_CC2NP = 0x80; // CC2NP

    static constexpr uint32_t TIM15_CNT_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TIM15_CNT_CNT =                // CNT
        bit_field_t<0, 0xffff>::value<X>();
    static constexpr uint32_t TIM15_CNT_UIFCPY = 0x80000000; // UIFCPY

    static constexpr uint32_t TIM15_PSC_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TIM15_PSC_PSC =   // PSC
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t TIM15_ARR_RESET_VALUE = 0xffff;
    template<uint32_t X>
    static constexpr uint32_t TIM15_ARR_ARR =   // ARR
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t TIM15_RCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TIM15_RCR_REP =   // REP
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t TIM15_CCR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TIM15_CCR1_CCR1 =   // CCR1
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t TIM15_CCR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TIM15_CCR2_CCR2 =   // CCR2
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t TIMx_BDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TIMx_BDTR_DTG =               // DTG
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TIMx_BDTR_LOCK =              // LOCK
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t TIMx_BDTR_OSSI = 0x400;       // OSSI
    static constexpr uint32_t TIMx_BDTR_OSSR = 0x800;       // OSSR
    static constexpr uint32_t TIMx_BDTR_BKE = 0x1000;       // BKE
    static constexpr uint32_t TIMx_BDTR_BKP = 0x2000;       // BKP
    static constexpr uint32_t TIMx_BDTR_AOE = 0x4000;       // AOE
    static constexpr uint32_t TIMx_BDTR_MOE = 0x8000;       // MOE
    template<uint32_t X>
    static constexpr uint32_t TIMx_BDTR_BKF =               // BKF
        bit_field_t<16, 0xf>::value<X>();
    static constexpr uint32_t TIMx_BDTR_BKDSRM = 0x4000000; // BKDSRM
    static constexpr uint32_t TIMx_BDTR_BKBID = 0x10000000; // BKBID

    static constexpr uint32_t TIM15_DCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TIM15_DCR_DBA =   // DBA
        bit_field_t<0, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TIM15_DCR_DBL =   // DBL
        bit_field_t<8, 0x1f>::value<X>();

    static constexpr uint32_t TIM15_DMAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TIM15_DMAR_DMAB =   // DMAB
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t TIM15_AF1_RESET_VALUE = 0x1;
    static constexpr uint32_t TIM15_AF1_BKINE = 0x1;       // BKINE
    static constexpr uint32_t TIM15_AF1_BKDF1BK0E = 0x100; // BKDF1BK0E
    static constexpr uint32_t TIM15_AF1_BKINP = 0x200;     // BKINP

    static constexpr uint32_t TIM15_TISEL_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TIM15_TISEL_TI1SEL =   // TI1SEL
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TIM15_TISEL_TI2SEL =   // TI2SEL
        bit_field_t<8, 0xf>::value<X>();
};


////
//
//      TIM16
//
////

struct stm32mp15xxx_tim16_t
{
    volatile uint32_t TIMx_CR1;   // [read-write] TIM16/TIM17 control register 1
    volatile uint32_t TIMx_CR2;   // [read-write] TIM16/TIM17 control register 2
    reserved_t<0x1> _0xc;
    volatile uint32_t TIMx_DIER;  // [read-write] TIM16/TIM17 DMA/interrupt enable register
    volatile uint32_t TIMx_SR;    // [read-write] TIM16/TIM17 status register
    volatile uint32_t TIMx_EGR;   // [write-only] event generation register
    reserved_t<0x2> _0x20;
    volatile uint32_t TIMx_CCER;  // [read-write] TIM16/TIM17 capture/compare enable register
    volatile uint32_t TIMx_CNT;   // [read-write] TIM16/TIM17 counter
    volatile uint32_t TIMx_PSC;   // [read-write] TIM16/TIM17 prescaler
    volatile uint32_t TIMx_ARR;   // [read-write] TIM16/TIM17 auto-reload register
    volatile uint32_t TIMx_RCR;   // [read-write] TIM16/TIM17 repetition counter register
    volatile uint32_t TIMx_CCR1;  // [read-write] TIM16/TIM17 capture/compare register 1
    reserved_t<0x3> _0x44;
    volatile uint32_t TIMx_BDTR;  // [read-write] As the BKBID, BKDSRM, BKF[3:0], AOE, BKP, BKE, OSSI, OSSR and DTG[7:0] bits may be write-locked depending on the LOCK configuration, it may be necessary to configure all of them during the first write access to the TIMx_BDTR register.
    volatile uint32_t TIMx_DCR;   // [read-write] TIM16/TIM17 DMA control register
    volatile uint32_t TIMx_DMAR;  // [read-write] TIM16/TIM17 DMA address for full transfer
    reserved_t<0x4> _0x60;
    volatile uint32_t TIMx_AF1;   // [read-write] TIM17 alternate function register 1
    reserved_t<0x1> _0x68;
    volatile uint32_t TIMx_TISEL; // [read-write] TIM17 input selection register

    static constexpr uint32_t TIMx_CR1_RESET_VALUE = 0x0;
    static constexpr uint32_t TIMx_CR1_CEN = 0x1;        // CEN
    static constexpr uint32_t TIMx_CR1_UDIS = 0x2;       // UDIS
    static constexpr uint32_t TIMx_CR1_URS = 0x4;        // URS
    static constexpr uint32_t TIMx_CR1_OPM = 0x8;        // OPM
    static constexpr uint32_t TIMx_CR1_ARPE = 0x80;      // ARPE
    template<uint32_t X>
    static constexpr uint32_t TIMx_CR1_CKD =             // CKD
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t TIMx_CR1_UIFREMAP = 0x800; // UIFREMAP

    static constexpr uint32_t TIMx_CR2_RESET_VALUE = 0x0;
    static constexpr uint32_t TIMx_CR2_CCPC = 0x1;    // CCPC
    static constexpr uint32_t TIMx_CR2_CCUS = 0x4;    // CCUS
    static constexpr uint32_t TIMx_CR2_CCDS = 0x8;    // CCDS
    static constexpr uint32_t TIMx_CR2_OIS1 = 0x100;  // OIS1
    static constexpr uint32_t TIMx_CR2_OIS1N = 0x200; // OIS1N

    static constexpr uint32_t TIMx_DIER_RESET_VALUE = 0x0;
    static constexpr uint32_t TIMx_DIER_UIE = 0x1;      // UIE
    static constexpr uint32_t TIMx_DIER_CC1IE = 0x2;    // CC1IE
    static constexpr uint32_t TIMx_DIER_COMIE = 0x20;   // COMIE
    static constexpr uint32_t TIMx_DIER_BIE = 0x80;     // BIE
    static constexpr uint32_t TIMx_DIER_UDE = 0x100;    // UDE
    static constexpr uint32_t TIMx_DIER_CC1DE = 0x200;  // CC1DE
    static constexpr uint32_t TIMx_DIER_COMDE = 0x2000; // COMDE

    static constexpr uint32_t TIMx_SR_RESET_VALUE = 0x0;
    static constexpr uint32_t TIMx_SR_UIF = 0x1;     // UIF
    static constexpr uint32_t TIMx_SR_CC1IF = 0x2;   // CC1IF
    static constexpr uint32_t TIMx_SR_COMIF = 0x20;  // COMIF
    static constexpr uint32_t TIMx_SR_BIF = 0x80;    // BIF
    static constexpr uint32_t TIMx_SR_CC1OF = 0x200; // CC1OF

    static constexpr uint32_t TIMx_EGR_RESET_VALUE = 0x0;
    static constexpr uint32_t TIMx_EGR_UG = 0x1; // Update generation

    static constexpr uint32_t TIMx_CCER_RESET_VALUE = 0x0;
    static constexpr uint32_t TIMx_CCER_CC1E = 0x1;  // CC1E
    static constexpr uint32_t TIMx_CCER_CC1P = 0x2;  // CC1P
    static constexpr uint32_t TIMx_CCER_CC1NE = 0x4; // CC1NE
    static constexpr uint32_t TIMx_CCER_CC1NP = 0x8; // CC1NP

    static constexpr uint32_t TIMx_CNT_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TIMx_CNT_CNT =                // CNT
        bit_field_t<0, 0xffff>::value<X>();
    static constexpr uint32_t TIMx_CNT_UIFCPY = 0x80000000; // UIFCPY

    static constexpr uint32_t TIMx_PSC_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TIMx_PSC_PSC =   // PSC
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t TIMx_ARR_RESET_VALUE = 0xffff;
    template<uint32_t X>
    static constexpr uint32_t TIMx_ARR_ARR =   // ARR
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t TIMx_RCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TIMx_RCR_REP =   // REP
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t TIMx_CCR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TIMx_CCR1_CCR1 =   // CCR1
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t TIMx_BDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TIMx_BDTR_DTG =               // DTG
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TIMx_BDTR_LOCK =              // LOCK
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t TIMx_BDTR_OSSI = 0x400;       // OSSI
    static constexpr uint32_t TIMx_BDTR_OSSR = 0x800;       // OSSR
    static constexpr uint32_t TIMx_BDTR_BKE = 0x1000;       // BKE
    static constexpr uint32_t TIMx_BDTR_BKP = 0x2000;       // BKP
    static constexpr uint32_t TIMx_BDTR_AOE = 0x4000;       // AOE
    static constexpr uint32_t TIMx_BDTR_MOE = 0x8000;       // MOE
    template<uint32_t X>
    static constexpr uint32_t TIMx_BDTR_BKF =               // BKF
        bit_field_t<16, 0xf>::value<X>();
    static constexpr uint32_t TIMx_BDTR_BKDSRM = 0x4000000; // BKDSRM
    static constexpr uint32_t TIMx_BDTR_BKBID = 0x10000000; // BKBID

    static constexpr uint32_t TIMx_DCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TIMx_DCR_DBA =   // DBA
        bit_field_t<0, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TIMx_DCR_DBL =   // DBL
        bit_field_t<8, 0x1f>::value<X>();

    static constexpr uint32_t TIMx_DMAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TIMx_DMAR_DMAB =   // DMAB
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t TIMx_AF1_RESET_VALUE = 0x1;
    static constexpr uint32_t TIMx_AF1_BKINE = 0x1;       // BKINE
    static constexpr uint32_t TIMx_AF1_BKDF1BK2E = 0x100; // BKDF1BK2E
    static constexpr uint32_t TIMx_AF1_BKINP = 0x200;     // BKINP

    static constexpr uint32_t TIMx_TISEL_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TIMx_TISEL_TI1SEL =   // TI1SEL
        bit_field_t<0, 0xf>::value<X>();
};


template<>
struct peripheral_t<STM32MP15xxx, TIM15>
{
    typedef stm32mp15xxx_tim15_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32MP15xxx, TIM16>
{
    typedef stm32mp15xxx_tim16_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32MP15xxx, TIM17>
{
    typedef stm32mp15xxx_tim16_t T;
    static T& V;
};

using tim15_t = peripheral_t<mcu_svd, TIM15>;
using tim16_t = peripheral_t<mcu_svd, TIM16>;
using tim17_t = peripheral_t<mcu_svd, TIM17>;

