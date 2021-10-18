#pragma once

////
//
//      STM32U5 LPTIM peripherals
//
///

// LPTIM1: Low power timer

struct stm32u5xx_lptim1_t
{
    volatile uint32_t ISR_OUTPUT; // Interrupt and Status Register (output mode)
    volatile uint32_t ICR_OUTPUT; // Interrupt Clear Register (output mode)
    volatile uint32_t DIER_OUTPUT; // LPTIM interrupt Enable Register (output mode)
    volatile uint32_t CFGR; // Configuration Register
    volatile uint32_t CR; // Control Register
    volatile uint32_t CCR1; // Compare Register
    volatile uint32_t ARR; // Autoreload Register
    volatile uint32_t CNT; // Counter Register
    reserved_t<0x1> _0x20;
    volatile uint32_t CFGR2; // LPTIM configuration register 2
    volatile uint32_t RCR; // LPTIM repetition register
    volatile uint32_t CCMR1; // LPTIM capture/compare mode register 1
    reserved_t<0x1> _0x30;
    volatile uint32_t CCR2; // LPTIM Compare Register 2
    reserved_t<0xed> _0x38;
    volatile uint32_t HWCFGR2; // LPTIM peripheral hardware configuration register 2
    volatile uint32_t HWCFGR1; // LPTIM peripheral hardware configuration register 1

    static constexpr uint32_t ISR_OUTPUT_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ISR_OUTPUT_ARRM = 0x2; // Autoreload match
    static constexpr uint32_t ISR_OUTPUT_ARROK = 0x10; // Autoreload register update OK
    static constexpr uint32_t ISR_OUTPUT_CC1IF = 0x1; // Compare 1 interrupt flag
    static constexpr uint32_t ISR_OUTPUT_CC1OF = 0x1000; // Capture 1 over-capture flag
    static constexpr uint32_t ISR_OUTPUT_CC2IF = 0x200; // Compare 2 interrupt flag
    static constexpr uint32_t ISR_OUTPUT_CC2OF = 0x2000; // Capture 2 over-capture flag
    static constexpr uint32_t ISR_OUTPUT_CMP1OK = 0x8; // Compare register 1 update OK
    static constexpr uint32_t ISR_OUTPUT_CMP2OK = 0x80000; // Compare register 2 update OK
    static constexpr uint32_t ISR_OUTPUT_DIEROK = 0x1000000; // Interrupt enable register update OK
    static constexpr uint32_t ISR_OUTPUT_DOWN = 0x40; // Counter direction change up to down
    static constexpr uint32_t ISR_OUTPUT_EXTTRIG = 0x4; // External trigger edge event
    static constexpr uint32_t ISR_OUTPUT_REPOK = 0x100; // Repetition register update Ok
    static constexpr uint32_t ISR_OUTPUT_UE = 0x80; // LPTIM update event occurred
    static constexpr uint32_t ISR_OUTPUT_UP = 0x20; // Counter direction change down to up

    static constexpr uint32_t ICR_OUTPUT_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ICR_OUTPUT_ARRMCF = 0x2; // Autoreload match Clear Flag
    static constexpr uint32_t ICR_OUTPUT_ARROKCF = 0x10; // Autoreload register update OK Clear Flag
    static constexpr uint32_t ICR_OUTPUT_CC1IF = 0x1; // Capture/compare 1 clear flag
    static constexpr uint32_t ICR_OUTPUT_CC1OCF = 0x1000; // Capture/compare 1 over-capture clear flag
    static constexpr uint32_t ICR_OUTPUT_CC2CF = 0x200; // Capture/compare 2 clear flag
    static constexpr uint32_t ICR_OUTPUT_CC2OCF = 0x2000; // Capture/compare 2 over-capture clear flag
    static constexpr uint32_t ICR_OUTPUT_CMP1OKCF = 0x8; // Compare register 1 update OK Clear Flag
    static constexpr uint32_t ICR_OUTPUT_CMP2OKCF = 0x80000; // Compare register 2 update OK clear flag
    static constexpr uint32_t ICR_OUTPUT_DIEROKCF = 0x1000000; // Interrupt enable register update OK clear flag
    static constexpr uint32_t ICR_OUTPUT_DOWNCF = 0x40; // Direction change to down Clear Flag
    static constexpr uint32_t ICR_OUTPUT_EXTTRIGCF = 0x4; // External trigger valid edge Clear Flag
    static constexpr uint32_t ICR_OUTPUT_REPOKCF = 0x100; // Repetition register update OK clear flag
    static constexpr uint32_t ICR_OUTPUT_UECF = 0x80; // Update event clear flag
    static constexpr uint32_t ICR_OUTPUT_UPCF = 0x20; // Direction change to UP Clear Flag

    static constexpr uint32_t DIER_OUTPUT_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DIER_OUTPUT_ARRMIE = 0x2; // Autoreload match Interrupt Enable
    static constexpr uint32_t DIER_OUTPUT_ARROKIE = 0x10; // Autoreload register update OK Interrupt Enable
    static constexpr uint32_t DIER_OUTPUT_CC1DE = 0x10000; // Capture/compare 1 DMA request enable
    static constexpr uint32_t DIER_OUTPUT_CC1IF = 0x1; // Capture/compare 1 clear flag
    static constexpr uint32_t DIER_OUTPUT_CC1OIE = 0x1000; // Capture/compare 1 over-capture interrupt enable
    static constexpr uint32_t DIER_OUTPUT_CC2DE = 0x2000000; // Capture/compare 2 DMA request enable
    static constexpr uint32_t DIER_OUTPUT_CC2IE = 0x200; // Capture/compare 2 interrupt enable
    static constexpr uint32_t DIER_OUTPUT_CC2OIE = 0x2000; // Capture/compare 2 over-capture interrupt enable
    static constexpr uint32_t DIER_OUTPUT_CMP1OKIE = 0x8; // Compare register 1 update OK Interrupt Enable
    static constexpr uint32_t DIER_OUTPUT_CMP2OKIE = 0x80000; // Compare register 2 update OK interrupt enable
    static constexpr uint32_t DIER_OUTPUT_DOWNIE = 0x40; // Direction change to down Interrupt Enable
    static constexpr uint32_t DIER_OUTPUT_EXTTRIGIE = 0x4; // External trigger valid edge Interrupt Enable
    static constexpr uint32_t DIER_OUTPUT_REPOKIE = 0x100; // REPOKIE
    static constexpr uint32_t DIER_OUTPUT_UEDE = 0x800000; // Update event DMA request enable
    static constexpr uint32_t DIER_OUTPUT_UEIE = 0x80; // Update event interrupt enable
    static constexpr uint32_t DIER_OUTPUT_UPIE = 0x20; // Direction change to UP Interrupt Enable

    static constexpr uint32_t CFGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR_ENC = 0x1000000; // Encoder mode enable
    static constexpr uint32_t CFGR_COUNTMODE = 0x800000; // counter mode enabled
    static constexpr uint32_t CFGR_PRELOAD = 0x400000; // Registers update mode
    static constexpr uint32_t CFGR_WAVPOL = 0x200000; // Waveform shape polarity
    static constexpr uint32_t CFGR_WAVE = 0x100000; // Waveform shape
    static constexpr uint32_t CFGR_TIMOUT = 0x80000; // Timeout enable
    typedef bit_field_t<17, 0x3> CFGR_TRIGEN; // Trigger enable and polarity
    typedef bit_field_t<13, 0x7> CFGR_TRIGSEL; // Trigger selector
    typedef bit_field_t<9, 0x7> CFGR_PRESC; // Clock prescaler
    typedef bit_field_t<6, 0x3> CFGR_TRGFLT; // Configurable digital filter for trigger
    typedef bit_field_t<3, 0x3> CFGR_CKFLT; // Configurable digital filter for external clock
    typedef bit_field_t<1, 0x3> CFGR_CKPOL; // Clock Polarity
    static constexpr uint32_t CFGR_CKSEL = 0x1; // Clock selector

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_RSTARE = 0x10; // Reset after read enable
    static constexpr uint32_t CR_COUNTRST = 0x8; // Counter reset
    static constexpr uint32_t CR_CNTSTRT = 0x4; // Timer start in continuous mode
    static constexpr uint32_t CR_SNGSTRT = 0x2; // LPTIM start in single mode
    static constexpr uint32_t CR_ENABLE = 0x1; // LPTIM Enable

    static constexpr uint32_t CCR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR1_CCR1; // Capture/compare 1 value

    static constexpr uint32_t ARR_RESET_VALUE = 0x1; // Reset value
    typedef bit_field_t<0, 0xffff> ARR_ARR; // Auto reload value

    static constexpr uint32_t CNT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNT_CNT; // Counter value


    static constexpr uint32_t CFGR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<20, 0x3> CFGR2_IC2SEL; // LPTIM input capture 2 selection
    typedef bit_field_t<16, 0x3> CFGR2_IC1SEL; // LPTIM input capture 1 selection
    typedef bit_field_t<4, 0x3> CFGR2_IN2SEL; // LPTIM input 2 selection
    typedef bit_field_t<0, 0x3> CFGR2_IN1SEL; // LPTIM input 1 selection

    static constexpr uint32_t RCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RCR_REP; // Repetition register value

    static constexpr uint32_t CCMR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCMR1_CC1SEL = 0x1; // Capture/compare 1 selection
    static constexpr uint32_t CCMR1_CC1E = 0x2; // Capture/compare 1 output enable
    typedef bit_field_t<2, 0x3> CCMR1_CC1P; // Capture/compare 1 output polarity
    typedef bit_field_t<8, 0x3> CCMR1_IC1PSC; // Input capture 1 prescaler
    typedef bit_field_t<12, 0x3> CCMR1_IC1F; // Input capture 1 filter
    static constexpr uint32_t CCMR1_CC2SEL = 0x10000; // Capture/compare 2 selection
    static constexpr uint32_t CCMR1_CC2E = 0x20000; // Capture/compare 2 output enable
    typedef bit_field_t<18, 0x3> CCMR1_CC2P; // Capture/compare 2 output polarity
    typedef bit_field_t<24, 0x3> CCMR1_IC2PSC; // Input capture 2 prescaler
    typedef bit_field_t<28, 0x3> CCMR1_IC2F; // Input capture 2 filter


    static constexpr uint32_t CCR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR2_CCR2; // Capture/compare 2 value


    static constexpr uint32_t HWCFGR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> HWCFGR2_CFG1; // peripheral hardware configuration 1
    typedef bit_field_t<8, 0xff> HWCFGR2_CFG2; // peripheral hardware configuration 2
    static constexpr uint32_t HWCFGR2_CFG3 = 0x10000; // peripheral hardware configuration 3

    static constexpr uint32_t HWCFGR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HWCFGR1_CFG1; // peripheral hardware configuration 1
    typedef bit_field_t<8, 0xff> HWCFGR1_CFG2; // peripheral hardware configuration 2
    typedef bit_field_t<16, 0xf> HWCFGR1_CFG3; // peripheral hardware configuration 3
    typedef bit_field_t<24, 0xff> HWCFGR1_CFG4; // peripheral hardware configuration 4
};

// LPTIM4: Low power timer

struct stm32u5xx_lptim4_t
{
    volatile uint32_t ISR; // Interrupt and Status Register
    volatile uint32_t ICR; // Interrupt Clear Register
    volatile uint32_t DIER; // LPTIM interrupt Enable Register
    volatile uint32_t CFGR; // Configuration Register
    volatile uint32_t CR; // Control Register
    volatile uint32_t CCR1; // Compare Register
    volatile uint32_t ARR; // Autoreload Register
    volatile uint32_t CNT; // Counter Register
    reserved_t<0x1> _0x20;
    volatile uint32_t CFGR2; // LPTIM configuration register 2
    volatile uint32_t RCR; // LPTIM repetition register
    volatile uint32_t CCMR1; // LPTIM capture/compare mode register 1
    reserved_t<0x1> _0x30;
    volatile uint32_t CCR2; // LPTIM Compare Register 2
    reserved_t<0xed> _0x38;
    volatile uint32_t HWCFGR2; // LPTIM peripheral hardware configuration register 2
    volatile uint32_t HWCFGR1; // LPTIM peripheral hardware configuration register 1

    static constexpr uint32_t ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ISR_DIEROK = 0x1000000; // Interrupt enable register update OK
    static constexpr uint32_t ISR_REPOK = 0x100; // Repetition register update Ok
    static constexpr uint32_t ISR_UE = 0x80; // LPTIM update event occurred
    static constexpr uint32_t ISR_DOWN = 0x40; // Counter direction change up to down
    static constexpr uint32_t ISR_UP = 0x20; // Counter direction change down to up
    static constexpr uint32_t ISR_ARROK = 0x10; // Autoreload register update OK
    static constexpr uint32_t ISR_CMP1OK = 0x8; // Compare register 1 update OK
    static constexpr uint32_t ISR_EXTTRIG = 0x4; // External trigger edge event
    static constexpr uint32_t ISR_ARRM = 0x2; // Autoreload match
    static constexpr uint32_t ISR_CC1IF = 0x1; // Compare 1 interrupt flag

    static constexpr uint32_t ICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ICR_DIEROKCF = 0x1000000; // Interrupt enable register update OK clear flag
    static constexpr uint32_t ICR_REPOKCF = 0x100; // Repetition register update OK clear flag
    static constexpr uint32_t ICR_UECF = 0x80; // Update event clear flag
    static constexpr uint32_t ICR_DOWNCF = 0x40; // Direction change to down Clear Flag
    static constexpr uint32_t ICR_UPCF = 0x20; // Direction change to UP Clear Flag
    static constexpr uint32_t ICR_ARROKCF = 0x10; // Autoreload register update OK Clear Flag
    static constexpr uint32_t ICR_CMP1OKCF = 0x8; // Compare register 1 update OK Clear Flag
    static constexpr uint32_t ICR_EXTTRIGCF = 0x4; // External trigger valid edge Clear Flag
    static constexpr uint32_t ICR_ARRMCF = 0x2; // Autoreload match Clear Flag
    static constexpr uint32_t ICR_CC1IF = 0x1; // Capture/compare 1 clear flag

    static constexpr uint32_t DIER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DIER_REPOKIE = 0x100; // REPOKIE
    static constexpr uint32_t DIER_UEIE = 0x80; // Update event interrupt enable
    static constexpr uint32_t DIER_DOWNIE = 0x40; // Direction change to down Interrupt Enable
    static constexpr uint32_t DIER_UPIE = 0x20; // Direction change to UP Interrupt Enable
    static constexpr uint32_t DIER_ARROKIE = 0x10; // Autoreload register update OK Interrupt Enable
    static constexpr uint32_t DIER_CMP1OKIE = 0x8; // Compare register 1 update OK Interrupt Enable
    static constexpr uint32_t DIER_EXTTRIGIE = 0x4; // External trigger valid edge Interrupt Enable
    static constexpr uint32_t DIER_ARRMIE = 0x2; // Autoreload match Interrupt Enable
    static constexpr uint32_t DIER_CC1IF = 0x1; // Capture/compare 1 clear flag

    static constexpr uint32_t CFGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR_ENC = 0x1000000; // Encoder mode enable
    static constexpr uint32_t CFGR_COUNTMODE = 0x800000; // counter mode enabled
    static constexpr uint32_t CFGR_PRELOAD = 0x400000; // Registers update mode
    static constexpr uint32_t CFGR_WAVPOL = 0x200000; // Waveform shape polarity
    static constexpr uint32_t CFGR_WAVE = 0x100000; // Waveform shape
    static constexpr uint32_t CFGR_TIMOUT = 0x80000; // Timeout enable
    typedef bit_field_t<17, 0x3> CFGR_TRIGEN; // Trigger enable and polarity
    typedef bit_field_t<13, 0x7> CFGR_TRIGSEL; // Trigger selector
    typedef bit_field_t<9, 0x7> CFGR_PRESC; // Clock prescaler
    typedef bit_field_t<6, 0x3> CFGR_TRGFLT; // Configurable digital filter for trigger
    typedef bit_field_t<3, 0x3> CFGR_CKFLT; // Configurable digital filter for external clock
    typedef bit_field_t<1, 0x3> CFGR_CKPOL; // Clock Polarity
    static constexpr uint32_t CFGR_CKSEL = 0x1; // Clock selector

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_RSTARE = 0x10; // Reset after read enable
    static constexpr uint32_t CR_COUNTRST = 0x8; // Counter reset
    static constexpr uint32_t CR_CNTSTRT = 0x4; // Timer start in continuous mode
    static constexpr uint32_t CR_SNGSTRT = 0x2; // LPTIM start in single mode
    static constexpr uint32_t CR_ENABLE = 0x1; // LPTIM Enable

    static constexpr uint32_t CCR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR1_CCR1; // Capture/compare 1 value

    static constexpr uint32_t ARR_RESET_VALUE = 0x1; // Reset value
    typedef bit_field_t<0, 0xffff> ARR_ARR; // Auto reload value

    static constexpr uint32_t CNT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNT_CNT; // Counter value


    static constexpr uint32_t CFGR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<20, 0x3> CFGR2_IC2SEL; // LPTIM input capture 2 selection
    typedef bit_field_t<16, 0x3> CFGR2_IC1SEL; // LPTIM input capture 1 selection
    typedef bit_field_t<4, 0x3> CFGR2_IN2SEL; // LPTIM input 2 selection
    typedef bit_field_t<0, 0x3> CFGR2_IN1SEL; // LPTIM input 1 selection

    static constexpr uint32_t RCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RCR_REP; // Repetition register value

    static constexpr uint32_t CCMR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCMR1_CC1SEL = 0x1; // Capture/compare 1 selection
    static constexpr uint32_t CCMR1_CC1E = 0x2; // Capture/compare 1 output enable
    typedef bit_field_t<2, 0x3> CCMR1_CC1P; // Capture/compare 1 output polarity
    typedef bit_field_t<8, 0x3> CCMR1_IC1PSC; // Input capture 1 prescaler
    typedef bit_field_t<12, 0x3> CCMR1_IC1F; // Input capture 1 filter
    static constexpr uint32_t CCMR1_CC2SEL = 0x10000; // Capture/compare 2 selection
    static constexpr uint32_t CCMR1_CC2E = 0x20000; // Capture/compare 2 output enable
    typedef bit_field_t<18, 0x3> CCMR1_CC2P; // Capture/compare 2 output polarity
    typedef bit_field_t<24, 0x3> CCMR1_IC2PSC; // Input capture 2 prescaler
    typedef bit_field_t<28, 0x3> CCMR1_IC2F; // Input capture 2 filter


    static constexpr uint32_t CCR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CCR2_CCR2; // Capture/compare 2 value


    static constexpr uint32_t HWCFGR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> HWCFGR2_CFG1; // peripheral hardware configuration 1
    typedef bit_field_t<8, 0xff> HWCFGR2_CFG2; // peripheral hardware configuration 2
    static constexpr uint32_t HWCFGR2_CFG3 = 0x10000; // peripheral hardware configuration 3

    static constexpr uint32_t HWCFGR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HWCFGR1_CFG1; // peripheral hardware configuration 1
    typedef bit_field_t<8, 0xff> HWCFGR1_CFG2; // peripheral hardware configuration 2
    typedef bit_field_t<16, 0xf> HWCFGR1_CFG3; // peripheral hardware configuration 3
    typedef bit_field_t<24, 0xff> HWCFGR1_CFG4; // peripheral hardware configuration 4
};

template<>
struct peripheral_t<STM32U5xx, LPTIM1>
{
    static constexpr periph_t P = LPTIM1;
    using T = stm32u5xx_lptim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, LPTIM2>
{
    static constexpr periph_t P = LPTIM2;
    using T = stm32u5xx_lptim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, LPTIM3>
{
    static constexpr periph_t P = LPTIM3;
    using T = stm32u5xx_lptim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, SEC_LPTIM1>
{
    static constexpr periph_t P = SEC_LPTIM1;
    using T = stm32u5xx_lptim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, SEC_LPTIM2>
{
    static constexpr periph_t P = SEC_LPTIM2;
    using T = stm32u5xx_lptim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, SEC_LPTIM3>
{
    static constexpr periph_t P = SEC_LPTIM3;
    using T = stm32u5xx_lptim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, LPTIM4>
{
    static constexpr periph_t P = LPTIM4;
    using T = stm32u5xx_lptim4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, SEC_LPTIM4>
{
    static constexpr periph_t P = SEC_LPTIM4;
    using T = stm32u5xx_lptim4_t;
    static T& V;
};

using lptim1_t = peripheral_t<svd, LPTIM1>;
using lptim2_t = peripheral_t<svd, LPTIM2>;
using lptim3_t = peripheral_t<svd, LPTIM3>;
using lptim4_t = peripheral_t<svd, LPTIM4>;
using sec_lptim1_t = peripheral_t<svd, SEC_LPTIM1>;
using sec_lptim2_t = peripheral_t<svd, SEC_LPTIM2>;
using sec_lptim3_t = peripheral_t<svd, SEC_LPTIM3>;
using sec_lptim4_t = peripheral_t<svd, SEC_LPTIM4>;

template<int INST> struct lptim_traits {};

template<> struct lptim_traits<1>
{
    using lptim = lptim1_t;
    static constexpr signal_t CH1 = LPTIM1_CH1;
    static constexpr signal_t CH2 = LPTIM1_CH2;
    static constexpr signal_t ETR = LPTIM1_ETR;
    static constexpr signal_t IN1 = LPTIM1_IN1;
    static constexpr signal_t IN2 = LPTIM1_IN2;
};

template<> struct lptim_traits<2>
{
    using lptim = lptim2_t;
    static constexpr signal_t CH1 = LPTIM2_CH1;
    static constexpr signal_t CH2 = LPTIM2_CH2;
    static constexpr signal_t ETR = LPTIM2_ETR;
    static constexpr signal_t IN1 = LPTIM2_IN1;
    static constexpr signal_t IN2 = LPTIM2_IN2;
};

template<> struct lptim_traits<3>
{
    using lptim = lptim3_t;
    static constexpr signal_t CH1 = LPTIM3_CH1;
    static constexpr signal_t CH2 = LPTIM3_CH2;
    static constexpr signal_t ETR = LPTIM3_ETR;
    static constexpr signal_t IN1 = LPTIM3_IN1;
};

template<> struct lptim_traits<4>
{
    using lptim = lptim4_t;
    static constexpr signal_t ETR = LPTIM4_ETR;
    static constexpr signal_t IN1 = LPTIM4_IN1;
    static constexpr signal_t OUT = LPTIM4_OUT;
};
