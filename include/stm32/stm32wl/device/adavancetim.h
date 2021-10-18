#pragma once

////
//
//      STM32WL ADAVANCETIM peripherals
//
///

// TIM1: Advanced-control timers

struct stm32wl5x_cm0p_tim1_t
{
    volatile uint32_t CR1; // control register 1
    volatile uint32_t CR2; // control register 2
    volatile uint32_t SMCR; // slave mode control register
    volatile uint32_t DIER; // DMA/interrupt enable register
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
    volatile uint32_t OR1; // option register 1
    volatile uint32_t CCMR3OUTPUTCOMPAREMODE; // capture/compare mode register 3
    volatile uint32_t CCR5; // capture/compare register 5
    volatile uint32_t CCR6; // capture/compare register 6
    volatile uint32_t AF1; // alternate function option register 1
    volatile uint32_t AF2; // Alternate function register 2
    volatile uint32_t TISEL; // timer input selection register

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR1_UIFREMAP = 0x800; // UIF status bit remapping
    typedef bit_field_t<8, 0x3> CR1_CKD; // Clock division
    static constexpr uint32_t CR1_ARPE = 0x80; // Auto-reload preload enable
    typedef bit_field_t<5, 0x3> CR1_CMS; // Center-aligned mode selection
    static constexpr uint32_t CR1_DIR = 0x10; // Direction
    static constexpr uint32_t CR1_OPM = 0x8; // One pulse mode
    static constexpr uint32_t CR1_URS = 0x4; // Update request source
    static constexpr uint32_t CR1_UDIS = 0x2; // Update disable
    static constexpr uint32_t CR1_CEN = 0x1; // Counter enable

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<20, 0xf> CR2_MMS2; // Master mode selection 2
    static constexpr uint32_t CR2_OIS6 = 0x40000; // Output Idle state 6 (OC6 output)
    static constexpr uint32_t CR2_OIS5 = 0x10000; // Output Idle state 5 (OC5 output)
    static constexpr uint32_t CR2_OIS4 = 0x4000; // Output Idle state 4 (OC4 output)
    static constexpr uint32_t CR2_OIS3N = 0x2000; // Output Idle state 3 (OC3N output)
    static constexpr uint32_t CR2_OIS3 = 0x1000; // Output Idle state 3 (OC3 output)
    static constexpr uint32_t CR2_OIS2N = 0x800; // Output Idle state 2 (OC2N output)
    static constexpr uint32_t CR2_OIS2 = 0x400; // Output Idle state 2 (OC2 output)
    static constexpr uint32_t CR2_OIS1N = 0x200; // Output Idle state 1 (OC1N output)
    static constexpr uint32_t CR2_OIS1 = 0x100; // Output Idle state 1 (OC1 output)
    static constexpr uint32_t CR2_TI1S = 0x80; // TI1 selection
    typedef bit_field_t<4, 0x7> CR2_MMS; // Master mode selection
    static constexpr uint32_t CR2_CCDS = 0x8; // Capture/compare DMA selection
    static constexpr uint32_t CR2_CCUS = 0x4; // Capture/compare control update selection
    static constexpr uint32_t CR2_CCPC = 0x1; // Capture/compare preloaded control

    static constexpr uint32_t SMCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<20, 0x3> SMCR_TS3_4; // Trigger selection
    static constexpr uint32_t SMCR_SMS_3 = 0x10000; // Slave mode selection
    static constexpr uint32_t SMCR_ETP = 0x8000; // External trigger polarity
    static constexpr uint32_t SMCR_ECE = 0x4000; // External clock enable
    typedef bit_field_t<12, 0x3> SMCR_ETPS; // External trigger prescaler
    typedef bit_field_t<8, 0xf> SMCR_ETF; // External trigger filter
    static constexpr uint32_t SMCR_MSM = 0x80; // Master/slave mode
    typedef bit_field_t<4, 0x7> SMCR_TS; // Trigger selection
    static constexpr uint32_t SMCR_OCCS = 0x8; // OCREF clear selection
    typedef bit_field_t<0, 0x7> SMCR_SMS; // Slave mode selection

    static constexpr uint32_t DIER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DIER_TDE = 0x4000; // Trigger DMA request enable
    static constexpr uint32_t DIER_COMDE = 0x2000; // COM DMA request enable
    static constexpr uint32_t DIER_CC4DE = 0x1000; // Capture/Compare 4 DMA request enable
    static constexpr uint32_t DIER_CC3DE = 0x800; // Capture/Compare 3 DMA request enable
    static constexpr uint32_t DIER_CC2DE = 0x400; // Capture/Compare 2 DMA request enable
    static constexpr uint32_t DIER_CC1DE = 0x200; // Capture/Compare 1 DMA request enable
    static constexpr uint32_t DIER_UDE = 0x100; // Update DMA request enable
    static constexpr uint32_t DIER_BIE = 0x80; // Break interrupt enable
    static constexpr uint32_t DIER_TIE = 0x40; // Trigger interrupt enable
    static constexpr uint32_t DIER_COMIE = 0x20; // COM interrupt enable
    static constexpr uint32_t DIER_CC4IE = 0x10; // Capture/Compare 4 interrupt enable
    static constexpr uint32_t DIER_CC3IE = 0x8; // Capture/Compare 3 interrupt enable
    static constexpr uint32_t DIER_CC2IE = 0x4; // Capture/Compare 2 interrupt enable
    static constexpr uint32_t DIER_CC1IE = 0x2; // Capture/Compare 1 interrupt enable
    static constexpr uint32_t DIER_UIE = 0x1; // Update interrupt enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_CC6IF = 0x20000; // Compare 6 interrupt flag
    static constexpr uint32_t SR_CC5IF = 0x10000; // Compare 5 interrupt flag
    static constexpr uint32_t SR_SBIF = 0x2000; // System Break interrupt flag
    static constexpr uint32_t SR_CC4OF = 0x1000; // Capture/Compare 4 overcapture flag
    static constexpr uint32_t SR_CC3OF = 0x800; // Capture/Compare 3 overcapture flag
    static constexpr uint32_t SR_CC2OF = 0x400; // Capture/Compare 2 overcapture flag
    static constexpr uint32_t SR_CC1OF = 0x200; // Capture/Compare 1 overcapture flag
    static constexpr uint32_t SR_B2IF = 0x100; // Break 2 interrupt flag
    static constexpr uint32_t SR_BIF = 0x80; // Break interrupt flag
    static constexpr uint32_t SR_TIF = 0x40; // Trigger interrupt flag
    static constexpr uint32_t SR_COMIF = 0x20; // COM interrupt flag
    static constexpr uint32_t SR_CC4IF = 0x10; // Capture/Compare 4 interrupt flag
    static constexpr uint32_t SR_CC3IF = 0x8; // Capture/Compare 3 interrupt flag
    static constexpr uint32_t SR_CC2IF = 0x4; // Capture/Compare 2 interrupt flag
    static constexpr uint32_t SR_CC1IF = 0x2; // Capture/Compare 1 interrupt flag
    static constexpr uint32_t SR_UIF = 0x1; // Update interrupt flag

    static constexpr uint32_t EGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t EGR_B2G = 0x100; // Break 2 generation
    static constexpr uint32_t EGR_BG = 0x80; // Break generation
    static constexpr uint32_t EGR_TG = 0x40; // Trigger generation
    static constexpr uint32_t EGR_COM = 0x20; // Capture/Compare control update generation
    static constexpr uint32_t EGR_CC4G = 0x10; // Capture/Compare 4 generation
    static constexpr uint32_t EGR_CC3G = 0x8; // Capture/Compare 3 generation
    static constexpr uint32_t EGR_CC2G = 0x4; // Capture/Compare 2 generation
    static constexpr uint32_t EGR_CC1G = 0x2; // Capture/Compare 1 generation
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
    static constexpr uint32_t CCMR1_OC1M_3 = 0x10000; // Output Compare 1 mode - bit 3
    static constexpr uint32_t CCMR1_OC1PE = 0x8; // Output compare 1 preload enable
    static constexpr uint32_t CCMR1_OC2CE = 0x8000; // Output compare 2 clear enable
    static constexpr uint32_t CCMR1_OC2FE = 0x400; // Output compare 2 fast enable
    typedef bit_field_t<12, 0x7> CCMR1_OC2M; // Output compare 2 mode
    static constexpr uint32_t CCMR1_OC2M_3 = 0x1000000; // Output Compare 2 mode - bit 3
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
    static constexpr uint32_t CCMR2_OC3M_3 = 0x10000; // Output Compare 3 mode - bit 3
    static constexpr uint32_t CCMR2_OC3PE = 0x8; // Output compare 3 preload enable
    static constexpr uint32_t CCMR2_OC4CE = 0x8000; // Output compare 4 clear enable
    static constexpr uint32_t CCMR2_OC4FE = 0x400; // Output compare 4 fast enable
    typedef bit_field_t<12, 0x7> CCMR2_OC4M; // Output compare 4 mode
    static constexpr uint32_t CCMR2_OC4M_3 = 0x1000000; // Output Compare 4 mode - bit 3
    static constexpr uint32_t CCMR2_OC4PE = 0x800; // Output compare 4 preload enable

    static constexpr uint32_t CCER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCER_CC6P = 0x200000; // CC6P
    static constexpr uint32_t CCER_CC6E = 0x100000; // CC6E
    static constexpr uint32_t CCER_CC5P = 0x20000; // CC5P
    static constexpr uint32_t CCER_CC5E = 0x10000; // CC5E
    static constexpr uint32_t CCER_CC4P = 0x2000; // CC4P
    static constexpr uint32_t CCER_CC4E = 0x1000; // CC4E
    static constexpr uint32_t CCER_CC3NP = 0x800; // CC3NP
    static constexpr uint32_t CCER_CC3NE = 0x400; // CC3NE
    static constexpr uint32_t CCER_CC3P = 0x200; // CC3P
    static constexpr uint32_t CCER_CC3E = 0x100; // CC3E
    static constexpr uint32_t CCER_CC2NP = 0x80; // CC2NP
    static constexpr uint32_t CCER_CC2NE = 0x40; // CC2NE
    static constexpr uint32_t CCER_CC2P = 0x20; // CC2P
    static constexpr uint32_t CCER_CC2E = 0x10; // CC2E
    static constexpr uint32_t CCER_CC1NP = 0x8; // CC1NP
    static constexpr uint32_t CCER_CC1NE = 0x4; // CC1NE
    static constexpr uint32_t CCER_CC1P = 0x2; // CC1P
    static constexpr uint32_t CCER_CC1E = 0x1; // CC1E

    static constexpr uint32_t CNT_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CNT_UIFCPY = 0x80000000; // UIF copy
    typedef bit_field_t<0, 0xffff> CNT_CNT; // CNT

    static constexpr uint32_t PSC_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> PSC_PSC; // Prescaler value

    static constexpr uint32_t ARR_RESET_VALUE = 0xffff; // Reset value
    typedef bit_field_t<0, 0xffff> ARR_ARR; // Auto-reload value

    static constexpr uint32_t RCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> RCR_REP; // Repetition counter value

    static constexpr uint32_t CCR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR1_CCR1; // Capture/Compare 1 value

    static constexpr uint32_t CCR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR2_CCR2; // Capture/Compare 2 value

    static constexpr uint32_t CCR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR3_CCR3; // Capture/Compare value

    static constexpr uint32_t CCR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR4_CCR4; // Capture/Compare value

    static constexpr uint32_t BDTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BDTR_BK2BID = 0x20000000; // Break2 bidirectional
    static constexpr uint32_t BDTR_BKBID = 0x10000000; // BKBID
    static constexpr uint32_t BDTR_BK2DSRM = 0x8000000; // Break2 Disarm
    static constexpr uint32_t BDTR_BKDSRM = 0x4000000; // BKDSRM
    static constexpr uint32_t BDTR_BK2P = 0x2000000; // Break 2 polarity
    static constexpr uint32_t BDTR_BK2E = 0x1000000; // Break 2 enable
    typedef bit_field_t<20, 0xf> BDTR_BK2F; // Break 2 filter
    typedef bit_field_t<16, 0xf> BDTR_BKF; // Break filter
    static constexpr uint32_t BDTR_MOE = 0x8000; // Main output enable
    static constexpr uint32_t BDTR_AOE = 0x4000; // Automatic output enable
    static constexpr uint32_t BDTR_BKP = 0x2000; // Break polarity
    static constexpr uint32_t BDTR_BKE = 0x1000; // Break enable
    static constexpr uint32_t BDTR_OSSR = 0x800; // Off-state selection for Run mode
    static constexpr uint32_t BDTR_OSSI = 0x400; // Off-state selection for Idle mode
    typedef bit_field_t<8, 0x3> BDTR_LOCK; // Lock configuration
    typedef bit_field_t<0, 0xff> BDTR_DT; // Dead-time generator setup

    static constexpr uint32_t DCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0x1f> DCR_DBL; // DMA burst length
    typedef bit_field_t<0, 0x1f> DCR_DBA; // DMA base address

    static constexpr uint32_t DMAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DMAR_DMAB; // DMA register for burst accesses

    static constexpr uint32_t OR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OR1_TI1_RMP = 0x10; // Input Capture 1 remap
    typedef bit_field_t<0, 0x3> OR1_TIM1_ETR_ADC1_RMP; // TIM1_ETR_ADC1 remapping capability

    static constexpr uint32_t CCMR3OUTPUTCOMPAREMODE_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCMR3OUTPUTCOMPAREMODE_OC6M_3 = 0x1000000; // OC6M
    static constexpr uint32_t CCMR3OUTPUTCOMPAREMODE_OC5M_3 = 0x10000; // OC5M
    static constexpr uint32_t CCMR3OUTPUTCOMPAREMODE_OC6CE = 0x8000; // OC6CE
    typedef bit_field_t<12, 0x7> CCMR3OUTPUTCOMPAREMODE_OC6M; // OC6M
    static constexpr uint32_t CCMR3OUTPUTCOMPAREMODE_OC6PE = 0x800; // OC6PE
    static constexpr uint32_t CCMR3OUTPUTCOMPAREMODE_OC6FE = 0x400; // OC6FE
    static constexpr uint32_t CCMR3OUTPUTCOMPAREMODE_OC5CE = 0x80; // OC5CE
    typedef bit_field_t<4, 0x7> CCMR3OUTPUTCOMPAREMODE_OC5M; // OC5M
    static constexpr uint32_t CCMR3OUTPUTCOMPAREMODE_OC5PE = 0x8; // OC5PE
    static constexpr uint32_t CCMR3OUTPUTCOMPAREMODE_OC5FE = 0x4; // OC5FE

    static constexpr uint32_t CCR5_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR5_GC5C3 = 0x80000000; // Group Channel 5 and Channel 3
    static constexpr uint32_t CCR5_GC5C2 = 0x40000000; // Group Channel 5 and Channel 2
    static constexpr uint32_t CCR5_GC5C1 = 0x20000000; // Group Channel 5 and Channel 1
    typedef bit_field_t<0, 0xffff> CCR5_CCR5; // Capture/Compare 5 value

    static constexpr uint32_t CCR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR6_CCR6; // Capture/Compare 6 value

    static constexpr uint32_t AF1_RESET_VALUE = 0x1; // Reset value
    typedef bit_field_t<14, 0xf> AF1_RESETRSEL; // ETR source selection
    static constexpr uint32_t AF1_BKCMP2P = 0x800; // BRK COMP2 input polarity
    static constexpr uint32_t AF1_BKCMP1P = 0x400; // BRK COMP1 input polarity
    static constexpr uint32_t AF1_BKINP = 0x200; // BRK BKIN input polarity
    static constexpr uint32_t AF1_BKCMP2E = 0x4; // BRK COMP2 enable
    static constexpr uint32_t AF1_BKCMP1E = 0x2; // BRK COMP1 enable
    static constexpr uint32_t AF1_BKINE = 0x1; // BRK BKIN input enable

    static constexpr uint32_t AF2_RESET_VALUE = 0x1; // Reset value
    static constexpr uint32_t AF2_BK2CMP2P = 0x800; // BRK2 COMP2 input polarity
    static constexpr uint32_t AF2_BK2CMP1P = 0x400; // BRK2 COMP1 input polarity
    static constexpr uint32_t AF2_BK2INP = 0x200; // BRK2 BKIN2 input polarity
    static constexpr uint32_t AF2_BK2CMP2E = 0x4; // BRK2 COMP2 enable
    static constexpr uint32_t AF2_BK2CMP1E = 0x2; // BRK2 COMP1 enable
    static constexpr uint32_t AF2_BK2INE = 0x1; // BRK2 BKIN input enable

    static constexpr uint32_t TISEL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xf> TISEL_TI4SEL; // selects TI4[0] to TI4[15] input
    typedef bit_field_t<16, 0xf> TISEL_TI3SEL; // selects TI3[0] to TI3[15] input
    typedef bit_field_t<8, 0xf> TISEL_TI2SEL; // selects TI2[0] to TI2[15] input
    typedef bit_field_t<0, 0xf> TISEL_TI1SEL; // selects TI1[0] to TI1[15] input
};

template<>
struct peripheral_t<STM32WL5x_CM0P, TIM1>
{
    static constexpr periph_t P = TIM1;
    using T = stm32wl5x_cm0p_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WL5x_CM4, TIM1>
{
    static constexpr periph_t P = TIM1;
    using T = stm32wl5x_cm0p_tim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WLE5_CM4, TIM1>
{
    static constexpr periph_t P = TIM1;
    using T = stm32wl5x_cm0p_tim1_t;
    static T& V;
};

using tim1_t = peripheral_t<svd, TIM1>;

template<int INST> struct adavancetim_traits {};

template<> struct adavancetim_traits<1>
{
    using adavancetim = tim1_t;
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
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB2ENR &= ~RCC::T::APB2ENR_TIM1EN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.APB2SMENR |= RCC::T::APB2SMENR_TIM1SMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.APB2SMENR &= ~RCC::T::APB2SMENR_TIM1SMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB2RSTR |= RCC::T::APB2RSTR_TIM1RST;
    }
};

template<> struct dma_request_t<TIM1, TIM_CH1>
{
    static constexpr unsigned ID = 30;
};

template<> struct dma_request_t<TIM1, TIM_CH2>
{
    static constexpr unsigned ID = 31;
};

template<> struct dma_request_t<TIM1, TIM_CH3>
{
    static constexpr unsigned ID = 32;
};

template<> struct dma_request_t<TIM1, TIM_CH4>
{
    static constexpr unsigned ID = 33;
};

template<> struct dma_request_t<TIM1, TIM_UP>
{
    static constexpr unsigned ID = 34;
};

template<> struct dma_request_t<TIM1, TIM_TRIG>
{
    static constexpr unsigned ID = 35;
};

template<> struct dma_request_t<TIM1, TIM_COM>
{
    static constexpr unsigned ID = 36;
};
