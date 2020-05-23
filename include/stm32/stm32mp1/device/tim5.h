#pragma once

////
//
//      STM32MP1 TIM5 peripherals
//
////

////
//
//      TIM5
//
////

struct stm32mp15xxx_tim5_t
{
    volatile uint32_t TIM5_CR1;              // [read-write] TIM5 control register 1
    volatile uint32_t TIM5_CR2;              // [read-write] TIM5 control register 2
    volatile uint32_t TIM5_SMCR;             // [read-write] TIM5 slave mode control register
    volatile uint32_t TIM5_DIER;             // [read-write] TIM5 DMA/interrupt enable register
    volatile uint32_t TIM5_SR;               // [read-write] TIM5 status register
    volatile uint32_t TIM5_EGR;              // [write-only] TIM5 event generation register
    volatile uint32_t TIM5_CCMR1ALTERNATE5;  // [read-write] The same register can be used for input capture mode (this section) or for output compare mode (next section). The direction of a channel is defined by configuring the corresponding CCxS bits. All the other bits of this register have a different function for input capture and for output compare modes. It is possible to combine both modes independently (e.g. channel 1 in input capture mode and channel 2 in output compare mode). Input capture mode:
    volatile uint32_t TIM5_CCMR2ALTERNATE21; // [read-write] The same register can be used for input capture mode (this section) or for output compare mode (next section). The direction of a channel is defined by configuring the corresponding CCxS bits. All the other bits of this register have a different function for input capture and for output compare modes. It is possible to combine both modes independently (e.g. channel 1 in input capture mode and channel 2 in output compare mode). Input capture mode:
    volatile uint32_t TIM5_CCER;             // [read-write] TIM5 capture/compare enable register
    volatile uint32_t TIM5_CNT;              // TIM5 counter
    volatile uint32_t TIM5_PSC;              // [read-write] TIM5 prescaler
    volatile uint32_t TIM5_ARR;              // [read-write] TIM5 auto-reload register
    volatile uint32_t TIM5_RCR;              // [read-write] TIM5 repetition counter register
    volatile uint32_t TIM5_CCR1;             // [read-write] TIM5 capture/compare register 1
    volatile uint32_t TIM5_CCR2;             // [read-write] TIM5 capture/compare register 2
    volatile uint32_t TIM5_CCR3;             // [read-write] TIM5 capture/compare register 3
    volatile uint32_t TIM5_CCR4;             // [read-write] TIM5 capture/compare register 4
    volatile uint32_t TIM5_BDTR;             // [read-write] As the bits BK2BID, BKBID, BK2DSRM, BKDSRM, BK2P, BK2E, BK2F[3:0], BKF[3:0], AOE, BKP, BKE, OSSI, OSSR and DTG[7:0] can be write-locked depending on the LOCK configuration, it can be necessary to configure all of them during the first write access to the TIMx_BDTR register.
    volatile uint32_t TIM5_DCR;              // [read-write] TIM5 DMA control register
    volatile uint32_t TIM5_DMAR;             // [read-write] TIM5 DMA address for full transfer
    reserved_t<0x1> _0x54;
    volatile uint32_t TIM5_CCMR3;            // [read-write] The channels 5 and 6 can only be configured in output. Output compare mode:
    volatile uint32_t TIM5_CCR5;             // [read-write] TIM5 capture/compare register 5
    volatile uint32_t TIM5_CCR6;             // [read-write] TIM5 capture/compare register 6

    static constexpr uint32_t TIM5_CR1_RESET_VALUE = 0x0;
    static constexpr uint32_t TIM5_CR1_CEN = 0x1;        // CEN
    static constexpr uint32_t TIM5_CR1_UDIS = 0x2;       // UDIS
    static constexpr uint32_t TIM5_CR1_URS = 0x4;        // URS
    static constexpr uint32_t TIM5_CR1_OPM = 0x8;        // OPM
    static constexpr uint32_t TIM5_CR1_DIR = 0x10;       // DIR
    template<uint32_t X>
    static constexpr uint32_t TIM5_CR1_CMS =             // CMS
        bit_field_t<5, 0x3>::value<X>();
    static constexpr uint32_t TIM5_CR1_ARPE = 0x80;      // ARPE
    template<uint32_t X>
    static constexpr uint32_t TIM5_CR1_CKD =             // CKD
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t TIM5_CR1_UIFREMAP = 0x800; // UIFREMAP

    static constexpr uint32_t TIM5_CR2_RESET_VALUE = 0x0;
    static constexpr uint32_t TIM5_CR2_CCPC = 0x1;     // CCPC
    static constexpr uint32_t TIM5_CR2_CCUS = 0x4;     // CCUS
    static constexpr uint32_t TIM5_CR2_CCDS = 0x8;     // CCDS
    template<uint32_t X>
    static constexpr uint32_t TIM5_CR2_MMS =           // MMS
        bit_field_t<4, 0x7>::value<X>();
    static constexpr uint32_t TIM5_CR2_TI1S = 0x80;    // TI1S
    static constexpr uint32_t TIM5_CR2_OIS1 = 0x100;   // OIS1
    static constexpr uint32_t TIM5_CR2_OIS1N = 0x200;  // OIS1N
    static constexpr uint32_t TIM5_CR2_OIS2 = 0x400;   // OIS2
    static constexpr uint32_t TIM5_CR2_OIS2N = 0x800;  // OIS2N
    static constexpr uint32_t TIM5_CR2_OIS3 = 0x1000;  // OIS3
    static constexpr uint32_t TIM5_CR2_OIS3N = 0x2000; // OIS3N
    static constexpr uint32_t TIM5_CR2_OIS4 = 0x4000;  // OIS4
    static constexpr uint32_t TIM5_CR2_OIS5 = 0x10000; // OIS5
    static constexpr uint32_t TIM5_CR2_OIS6 = 0x40000; // OIS6
    template<uint32_t X>
    static constexpr uint32_t TIM5_CR2_MMS2 =          // MMS2
        bit_field_t<20, 0xf>::value<X>();

    static constexpr uint32_t TIM5_SMCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TIM5_SMCR_SMS =           // SMS
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TIM5_SMCR_TS =            // TS
        bit_field_t<4, 0x7>::value<X>();
    static constexpr uint32_t TIM5_SMCR_MSM = 0x80;     // MSM
    template<uint32_t X>
    static constexpr uint32_t TIM5_SMCR_ETF =           // ETF
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TIM5_SMCR_ETPS =          // ETPS
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t TIM5_SMCR_ECE = 0x4000;   // ECE
    static constexpr uint32_t TIM5_SMCR_ETP = 0x8000;   // ETP
    static constexpr uint32_t TIM5_SMCR_SMS3 = 0x10000; // SMS3
    static constexpr uint32_t TIM5_SMCR_TS3 = 0x100000; // TS3
    static constexpr uint32_t TIM5_SMCR_TS4 = 0x200000; // TS4

    static constexpr uint32_t TIM5_DIER_RESET_VALUE = 0x0;
    static constexpr uint32_t TIM5_DIER_UIE = 0x1;      // UIE
    static constexpr uint32_t TIM5_DIER_CC1IE = 0x2;    // CC1IE
    static constexpr uint32_t TIM5_DIER_CC2IE = 0x4;    // CC2IE
    static constexpr uint32_t TIM5_DIER_CC3IE = 0x8;    // CC3IE
    static constexpr uint32_t TIM5_DIER_CC4IE = 0x10;   // CC4IE
    static constexpr uint32_t TIM5_DIER_COMIE = 0x20;   // COMIE
    static constexpr uint32_t TIM5_DIER_TIE = 0x40;     // TIE
    static constexpr uint32_t TIM5_DIER_BIE = 0x80;     // BIE
    static constexpr uint32_t TIM5_DIER_UDE = 0x100;    // UDE
    static constexpr uint32_t TIM5_DIER_CC1DE = 0x200;  // CC1DE
    static constexpr uint32_t TIM5_DIER_CC2DE = 0x400;  // CC2DE
    static constexpr uint32_t TIM5_DIER_CC3DE = 0x800;  // CC3DE
    static constexpr uint32_t TIM5_DIER_CC4DE = 0x1000; // CC4DE
    static constexpr uint32_t TIM5_DIER_COMDE = 0x2000; // COMDE
    static constexpr uint32_t TIM5_DIER_TDE = 0x4000;   // TDE

    static constexpr uint32_t TIM5_SR_RESET_VALUE = 0x0;
    static constexpr uint32_t TIM5_SR_UIF = 0x1;       // UIF
    static constexpr uint32_t TIM5_SR_CC1IF = 0x2;     // CC1IF
    static constexpr uint32_t TIM5_SR_CC2IF = 0x4;     // CC2IF
    static constexpr uint32_t TIM5_SR_CC3IF = 0x8;     // CC3IF
    static constexpr uint32_t TIM5_SR_CC4IF = 0x10;    // CC4IF
    static constexpr uint32_t TIM5_SR_COMIF = 0x20;    // COMIF
    static constexpr uint32_t TIM5_SR_TIF = 0x40;      // TIF
    static constexpr uint32_t TIM5_SR_BIF = 0x80;      // BIF
    static constexpr uint32_t TIM5_SR_B2IF = 0x100;    // B2IF
    static constexpr uint32_t TIM5_SR_CC1OF = 0x200;   // CC1OF
    static constexpr uint32_t TIM5_SR_CC2OF = 0x400;   // CC2OF
    static constexpr uint32_t TIM5_SR_CC3OF = 0x800;   // CC3OF
    static constexpr uint32_t TIM5_SR_CC4OF = 0x1000;  // CC4OF
    static constexpr uint32_t TIM5_SR_SBIF = 0x2000;   // SBIF
    static constexpr uint32_t TIM5_SR_CC5IF = 0x10000; // CC5IF
    static constexpr uint32_t TIM5_SR_CC6IF = 0x20000; // CC6IF

    static constexpr uint32_t TIM5_EGR_RESET_VALUE = 0x0;
    static constexpr uint32_t TIM5_EGR_UG = 0x1;    // UG
    static constexpr uint32_t TIM5_EGR_CC1G = 0x2;  // CC1G
    static constexpr uint32_t TIM5_EGR_CC2G = 0x4;  // CC2G
    static constexpr uint32_t TIM5_EGR_CC3G = 0x8;  // CC3G
    static constexpr uint32_t TIM5_EGR_CC4G = 0x10; // CC4G
    static constexpr uint32_t TIM5_EGR_COMG = 0x20; // COMG
    static constexpr uint32_t TIM5_EGR_TG = 0x40;   // TG
    static constexpr uint32_t TIM5_EGR_BG = 0x80;   // BG
    static constexpr uint32_t TIM5_EGR_B2G = 0x100; // B2G

    static constexpr uint32_t TIM5_CCMR1ALTERNATE5_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TIM5_CCMR1ALTERNATE5_CC1S =     // CC1S
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TIM5_CCMR1ALTERNATE5_IC1PSC =   // IC1PSC
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TIM5_CCMR1ALTERNATE5_IC1F =     // IC1F
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TIM5_CCMR1ALTERNATE5_CC2S =     // CC2S
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TIM5_CCMR1ALTERNATE5_IC2PSC =   // IC2PSC
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TIM5_CCMR1ALTERNATE5_IC2F =     // IC2F
        bit_field_t<12, 0xf>::value<X>();

    static constexpr uint32_t TIM5_CCMR2ALTERNATE21_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TIM5_CCMR2ALTERNATE21_CC3S =     // CC3S
        bit_field_t<0, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TIM5_CCMR2ALTERNATE21_IC3PSC =   // IC3PSC
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TIM5_CCMR2ALTERNATE21_IC3F =     // IC3F
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TIM5_CCMR2ALTERNATE21_CC4S =     // CC4S
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TIM5_CCMR2ALTERNATE21_IC4PSC =   // IC4PSC
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TIM5_CCMR2ALTERNATE21_IC4F =     // IC4F
        bit_field_t<12, 0xf>::value<X>();

    static constexpr uint32_t TIM5_CCER_RESET_VALUE = 0x0;
    static constexpr uint32_t TIM5_CCER_CC1E = 0x1;      // CC1E
    static constexpr uint32_t TIM5_CCER_CC1P = 0x2;      // CC1P
    static constexpr uint32_t TIM5_CCER_CC1NE = 0x4;     // CC1NE
    static constexpr uint32_t TIM5_CCER_CC1NP = 0x8;     // CC1NP
    static constexpr uint32_t TIM5_CCER_CC2E = 0x10;     // CC2E
    static constexpr uint32_t TIM5_CCER_CC2P = 0x20;     // CC2P
    static constexpr uint32_t TIM5_CCER_CC2NE = 0x40;    // CC2NE
    static constexpr uint32_t TIM5_CCER_CC2NP = 0x80;    // CC2NP
    static constexpr uint32_t TIM5_CCER_CC3E = 0x100;    // CC3E
    static constexpr uint32_t TIM5_CCER_CC3P = 0x200;    // CC3P
    static constexpr uint32_t TIM5_CCER_CC3NE = 0x400;   // CC3NE
    static constexpr uint32_t TIM5_CCER_CC3NP = 0x800;   // CC3NP
    static constexpr uint32_t TIM5_CCER_CC4E = 0x1000;   // CC4E
    static constexpr uint32_t TIM5_CCER_CC4P = 0x2000;   // CC4P
    static constexpr uint32_t TIM5_CCER_CC4NP = 0x8000;  // CC4NP
    static constexpr uint32_t TIM5_CCER_CC5E = 0x10000;  // CC5E
    static constexpr uint32_t TIM5_CCER_CC5P = 0x20000;  // CC5P
    static constexpr uint32_t TIM5_CCER_CC6E = 0x100000; // CC6E
    static constexpr uint32_t TIM5_CCER_CC6P = 0x200000; // CC6P

    static constexpr uint32_t TIM5_CNT_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TIM5_CNT_CNT =                // CNT
        bit_field_t<0, 0xffff>::value<X>();
    static constexpr uint32_t TIM5_CNT_UIFCPY = 0x80000000; // UIFCPY

    static constexpr uint32_t TIM5_PSC_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TIM5_PSC_PSC =   // PSC
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t TIM5_ARR_RESET_VALUE = 0xffff;
    template<uint32_t X>
    static constexpr uint32_t TIM5_ARR_ARR =   // ARR
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t TIM5_RCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TIM5_RCR_REP =   // REP
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t TIM5_CCR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TIM5_CCR1_CCR1 =   // CCR1
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t TIM5_CCR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TIM5_CCR2_CCR2 =   // CCR2
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t TIM5_CCR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TIM5_CCR3_CCR3 =   // CCR3
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t TIM5_CCR4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TIM5_CCR4_CCR4 =   // CCR4
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t TIM5_BDTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TIM5_BDTR_DTG =                // DTG
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TIM5_BDTR_LOCK =               // LOCK
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t TIM5_BDTR_OSSI = 0x400;        // OSSI
    static constexpr uint32_t TIM5_BDTR_OSSR = 0x800;        // OSSR
    static constexpr uint32_t TIM5_BDTR_BKE = 0x1000;        // BKE
    static constexpr uint32_t TIM5_BDTR_BKP = 0x2000;        // BKP
    static constexpr uint32_t TIM5_BDTR_AOE = 0x4000;        // AOE
    static constexpr uint32_t TIM5_BDTR_MOE = 0x8000;        // MOE
    template<uint32_t X>
    static constexpr uint32_t TIM5_BDTR_BKF =                // BKF
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TIM5_BDTR_BK2F =               // BK2F
        bit_field_t<20, 0xf>::value<X>();
    static constexpr uint32_t TIM5_BDTR_BK2E = 0x1000000;    // BK2E
    static constexpr uint32_t TIM5_BDTR_BK2P = 0x2000000;    // BK2P
    static constexpr uint32_t TIM5_BDTR_BKDSRM = 0x4000000;  // BKDSRM
    static constexpr uint32_t TIM5_BDTR_BK2DSRM = 0x8000000; // BK2DSRM
    static constexpr uint32_t TIM5_BDTR_BKBID = 0x10000000;  // BKBID
    static constexpr uint32_t TIM5_BDTR_BK2BID = 0x20000000; // BK2BID

    static constexpr uint32_t TIM5_DCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TIM5_DCR_DBA =   // DBA
        bit_field_t<0, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TIM5_DCR_DBL =   // DBL
        bit_field_t<8, 0x1f>::value<X>();

    static constexpr uint32_t TIM5_DMAR_RESET_VALUE = 0x0;

    static constexpr uint32_t TIM5_CCMR3_RESET_VALUE = 0x0;
    static constexpr uint32_t TIM5_CCMR3_OC5FE = 0x4;       // OC5FE
    static constexpr uint32_t TIM5_CCMR3_OC5PE = 0x8;       // OC5PE
    template<uint32_t X>
    static constexpr uint32_t TIM5_CCMR3_OC5M =             // OC5M
        bit_field_t<4, 0x7>::value<X>();
    static constexpr uint32_t TIM5_CCMR3_OC5CE = 0x80;      // OC5CE
    static constexpr uint32_t TIM5_CCMR3_OC6FE = 0x400;     // OC6FE
    static constexpr uint32_t TIM5_CCMR3_OC6PE = 0x800;     // OC6PE
    template<uint32_t X>
    static constexpr uint32_t TIM5_CCMR3_OC6M =             // OC6M
        bit_field_t<12, 0x7>::value<X>();
    static constexpr uint32_t TIM5_CCMR3_OC6CE = 0x8000;    // OC6CE
    static constexpr uint32_t TIM5_CCMR3_OC5M3 = 0x10000;   // OC5M3
    static constexpr uint32_t TIM5_CCMR3_OC6M3 = 0x1000000; // OC6M3

    static constexpr uint32_t TIM5_CCR5_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TIM5_CCR5_CCR5 =              // CCR5
        bit_field_t<0, 0xffff>::value<X>();
    static constexpr uint32_t TIM5_CCR5_GC5C1 = 0x20000000; // GC5C1
    static constexpr uint32_t TIM5_CCR5_GC5C2 = 0x40000000; // GC5C2
    static constexpr uint32_t TIM5_CCR5_GC5C3 = 0x80000000; // GC5C3

    static constexpr uint32_t TIM5_CCR6_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TIM5_CCR6_CCR6 =   // CCR6
        bit_field_t<0, 0xffff>::value<X>();
};


template<>
struct peripheral_t<STM32MP15xxx, TIM5>
{
    typedef stm32mp15xxx_tim5_t T;
    static T& V;
};

using tim5_t = peripheral_t<mcu_svd, TIM5>;

template<int INST> struct tim_traits {};

template<> struct tim_traits<5>
{
    using tim = tim5_t;
    static constexpr alternate_function_t CH1 = TIM5_CH1;
    static constexpr alternate_function_t CH2 = TIM5_CH2;
    static constexpr alternate_function_t CH3 = TIM5_CH3;
    static constexpr alternate_function_t CH4 = TIM5_CH4;
    static constexpr alternate_function_t ETR = TIM5_ETR;
};

