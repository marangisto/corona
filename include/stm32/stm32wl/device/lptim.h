#pragma once

////
//
//      STM32WL LPTIM peripherals
//
///

// LPTIM1: Low-power timer

struct stm32wl5x_cm0p_lptim1_t
{
    volatile uint32_t ISR; // interrupt and status register
    volatile uint32_t ICR; // interrupt clear register
    volatile uint32_t IER; // interrupt enable register
    volatile uint32_t CFGR; // configuration register
    volatile uint32_t CR; // control register
    volatile uint32_t CMP; // compare register
    volatile uint32_t ARR; // autoreload register
    volatile uint32_t CNT; // counter register
    volatile uint32_t LPTIM1_OR; // option register
    reserved_t<0x1> _0x24;
    volatile uint32_t RCR; // repetition register

    static constexpr uint32_t ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ISR_REPOK = 0x100; // Repetition register update Ok
    static constexpr uint32_t ISR_UE = 0x80; // LPTIM update event occurred
    static constexpr uint32_t ISR_DOWN = 0x40; // Counter direction change up to down
    static constexpr uint32_t ISR_UP = 0x20; // Counter direction change down to up
    static constexpr uint32_t ISR_ARROK = 0x10; // Autoreload register update OK
    static constexpr uint32_t ISR_CMPOK = 0x8; // Compare register update OK
    static constexpr uint32_t ISR_EXTTRIG = 0x4; // External trigger edge event
    static constexpr uint32_t ISR_ARRM = 0x2; // Autoreload match
    static constexpr uint32_t ISR_CMPM = 0x1; // Compare match

    static constexpr uint32_t ICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ICR_REPOKCF = 0x100; // Repetition register update OK clear flag
    static constexpr uint32_t ICR_UECF = 0x80; // Update event clear flag
    static constexpr uint32_t ICR_DOWNCF = 0x40; // Direction change to down Clear Flag
    static constexpr uint32_t ICR_UPCF = 0x20; // Direction change to UP Clear Flag
    static constexpr uint32_t ICR_ARROKCF = 0x10; // Autoreload register update OK Clear Flag
    static constexpr uint32_t ICR_CMPOKCF = 0x8; // Compare register update OK Clear Flag
    static constexpr uint32_t ICR_EXTTRIGCF = 0x4; // External trigger valid edge Clear Flag
    static constexpr uint32_t ICR_ARRMCF = 0x2; // Autoreload match Clear Flag
    static constexpr uint32_t ICR_CMPMCF = 0x1; // compare match Clear Flag

    static constexpr uint32_t IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IER_REPOKIE = 0x100; // Repetition register update OK interrupt Enable
    static constexpr uint32_t IER_UEIE = 0x80; // Update event interrupt enable
    static constexpr uint32_t IER_DOWNIE = 0x40; // Direction change to down Interrupt Enable
    static constexpr uint32_t IER_UPIE = 0x20; // Direction change to UP Interrupt Enable
    static constexpr uint32_t IER_ARROKIE = 0x10; // Autoreload register update OK Interrupt Enable
    static constexpr uint32_t IER_CMPOKIE = 0x8; // Compare register update OK Interrupt Enable
    static constexpr uint32_t IER_EXTTRIGIE = 0x4; // External trigger valid edge Interrupt Enable
    static constexpr uint32_t IER_ARRMIE = 0x2; // Autoreload match Interrupt Enable
    static constexpr uint32_t IER_CMPMIE = 0x1; // Compare match Interrupt Enable

    static constexpr uint32_t CFGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR_ENC = 0x1000000; // ENC
    static constexpr uint32_t CFGR_COUNTMODE = 0x800000; // COUNTMODE
    static constexpr uint32_t CFGR_PRELOAD = 0x400000; // PRELOAD
    static constexpr uint32_t CFGR_WAVPOL = 0x200000; // WAVPOL
    static constexpr uint32_t CFGR_WAVE = 0x100000; // WAVE
    static constexpr uint32_t CFGR_TIMOUT = 0x80000; // TIMOUT
    typedef bit_field_t<17, 0x3> CFGR_TRIGEN; // TRIGEN
    typedef bit_field_t<13, 0x7> CFGR_TRIGSEL; // TRIGSEL
    typedef bit_field_t<9, 0x7> CFGR_PRESC; // PRESC
    typedef bit_field_t<6, 0x3> CFGR_TRGFLT; // TRGFLT
    typedef bit_field_t<3, 0x3> CFGR_CKFLT; // CKFLT
    typedef bit_field_t<1, 0x3> CFGR_CKPOL; // CKPOL
    static constexpr uint32_t CFGR_CKSEL = 0x1; // CKSEL

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_RSTARE = 0x10; // RSTARE
    static constexpr uint32_t CR_COUNTRST = 0x8; // COUNTRST
    static constexpr uint32_t CR_CNTSTRT = 0x4; // CNTSTRT
    static constexpr uint32_t CR_SNGSTRT = 0x2; // SNGSTRT
    static constexpr uint32_t CR_ENABLE = 0x1; // ENABLE

    static constexpr uint32_t CMP_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CMP_CMP; // CMP

    static constexpr uint32_t ARR_RESET_VALUE = 0x1; // Reset value
    typedef bit_field_t<0, 0xffff> ARR_ARR; // Auto reload value

    static constexpr uint32_t CNT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNT_CNT; // Counter value

    static constexpr uint32_t LPTIM1_OR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t LPTIM1_OR_OR_1 = 0x2; // Option register bit 1
    static constexpr uint32_t LPTIM1_OR_OR_0 = 0x1; // Option register bit 0


    static constexpr uint32_t RCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RCR_REP; // Repetition register value
};

// LPTIM2: Low-power timer

struct stm32wl5x_cm0p_lptim2_t
{
    volatile uint32_t ISR; // interrupt and status register
    volatile uint32_t ICR; // interrupt clear register
    volatile uint32_t IER; // interrupt enable register
    volatile uint32_t CFGR; // configuration register
    volatile uint32_t CR; // control register
    volatile uint32_t CMP; // compare register
    volatile uint32_t ARR; // autoreload register
    volatile uint32_t CNT; // counter register
    volatile uint32_t LPTIM2_OR; // option register
    reserved_t<0x1> _0x24;
    volatile uint32_t RCR; // repetition register

    static constexpr uint32_t ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ISR_REPOK = 0x100; // Repetition register update Ok
    static constexpr uint32_t ISR_UE = 0x80; // LPTIM update event occurred
    static constexpr uint32_t ISR_DOWN = 0x40; // Counter direction change up to down
    static constexpr uint32_t ISR_UP = 0x20; // Counter direction change down to up
    static constexpr uint32_t ISR_ARROK = 0x10; // Autoreload register update OK
    static constexpr uint32_t ISR_CMPOK = 0x8; // Compare register update OK
    static constexpr uint32_t ISR_EXTTRIG = 0x4; // External trigger edge event
    static constexpr uint32_t ISR_ARRM = 0x2; // Autoreload match
    static constexpr uint32_t ISR_CMPM = 0x1; // Compare match

    static constexpr uint32_t ICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ICR_REPOKCF = 0x100; // Repetition register update OK clear flag
    static constexpr uint32_t ICR_UECF = 0x80; // Update event clear flag
    static constexpr uint32_t ICR_DOWNCF = 0x40; // Direction change to down Clear Flag
    static constexpr uint32_t ICR_UPCF = 0x20; // Direction change to UP Clear Flag
    static constexpr uint32_t ICR_ARROKCF = 0x10; // Autoreload register update OK Clear Flag
    static constexpr uint32_t ICR_CMPOKCF = 0x8; // Compare register update OK Clear Flag
    static constexpr uint32_t ICR_EXTTRIGCF = 0x4; // External trigger valid edge Clear Flag
    static constexpr uint32_t ICR_ARRMCF = 0x2; // Autoreload match Clear Flag
    static constexpr uint32_t ICR_CMPMCF = 0x1; // compare match Clear Flag

    static constexpr uint32_t IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IER_REPOKIE = 0x100; // Repetition register update OK interrupt Enable
    static constexpr uint32_t IER_UEIE = 0x80; // Update event interrupt enable
    static constexpr uint32_t IER_DOWNIE = 0x40; // Direction change to down Interrupt Enable
    static constexpr uint32_t IER_UPIE = 0x20; // Direction change to UP Interrupt Enable
    static constexpr uint32_t IER_ARROKIE = 0x10; // Autoreload register update OK Interrupt Enable
    static constexpr uint32_t IER_CMPOKIE = 0x8; // Compare register update OK Interrupt Enable
    static constexpr uint32_t IER_EXTTRIGIE = 0x4; // External trigger valid edge Interrupt Enable
    static constexpr uint32_t IER_ARRMIE = 0x2; // Autoreload match Interrupt Enable
    static constexpr uint32_t IER_CMPMIE = 0x1; // Compare match Interrupt Enable

    static constexpr uint32_t CFGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR_ENC = 0x1000000; // ENC
    static constexpr uint32_t CFGR_COUNTMODE = 0x800000; // COUNTMODE
    static constexpr uint32_t CFGR_PRELOAD = 0x400000; // PRELOAD
    static constexpr uint32_t CFGR_WAVPOL = 0x200000; // WAVPOL
    static constexpr uint32_t CFGR_WAVE = 0x100000; // WAVE
    static constexpr uint32_t CFGR_TIMOUT = 0x80000; // TIMOUT
    typedef bit_field_t<17, 0x3> CFGR_TRIGEN; // TRIGEN
    typedef bit_field_t<13, 0x7> CFGR_TRIGSEL; // TRIGSEL
    typedef bit_field_t<9, 0x7> CFGR_PRESC; // PRESC
    typedef bit_field_t<6, 0x3> CFGR_TRGFLT; // TRGFLT
    typedef bit_field_t<3, 0x3> CFGR_CKFLT; // CKFLT
    typedef bit_field_t<1, 0x3> CFGR_CKPOL; // CKPOL
    static constexpr uint32_t CFGR_CKSEL = 0x1; // CKSEL

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_RSTARE = 0x10; // RSTARE
    static constexpr uint32_t CR_COUNTRST = 0x8; // COUNTRST
    static constexpr uint32_t CR_CNTSTRT = 0x4; // CNTSTRT
    static constexpr uint32_t CR_SNGSTRT = 0x2; // SNGSTRT
    static constexpr uint32_t CR_ENABLE = 0x1; // ENABLE

    static constexpr uint32_t CMP_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CMP_CMP; // CMP

    static constexpr uint32_t ARR_RESET_VALUE = 0x1; // Reset value
    typedef bit_field_t<0, 0xffff> ARR_ARR; // Auto reload value

    static constexpr uint32_t CNT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNT_CNT; // Counter value

    static constexpr uint32_t LPTIM2_OR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t LPTIM2_OR_OR_1 = 0x2; // Option register bit 1
    static constexpr uint32_t LPTIM2_OR_OR_0 = 0x1; // Option register bit 0


    static constexpr uint32_t RCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RCR_REP; // Repetition register value
};

// LPTIM3: Low-power timer

struct stm32wl5x_cm0p_lptim3_t
{
    volatile uint32_t ISR; // interrupt and status register
    volatile uint32_t ICR; // interrupt clear register
    volatile uint32_t IER; // interrupt enable register
    volatile uint32_t CFGR; // configuration register
    volatile uint32_t CR; // control register
    volatile uint32_t CMP; // compare register
    volatile uint32_t ARR; // autoreload register
    volatile uint32_t CNT; // counter register
    volatile uint32_t LPTIM3_OR; // option register
    reserved_t<0x1> _0x24;
    volatile uint32_t RCR; // repetition register

    static constexpr uint32_t ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ISR_REPOK = 0x100; // Repetition register update Ok
    static constexpr uint32_t ISR_UE = 0x80; // LPTIM update event occurred
    static constexpr uint32_t ISR_DOWN = 0x40; // Counter direction change up to down
    static constexpr uint32_t ISR_UP = 0x20; // Counter direction change down to up
    static constexpr uint32_t ISR_ARROK = 0x10; // Autoreload register update OK
    static constexpr uint32_t ISR_CMPOK = 0x8; // Compare register update OK
    static constexpr uint32_t ISR_EXTTRIG = 0x4; // External trigger edge event
    static constexpr uint32_t ISR_ARRM = 0x2; // Autoreload match
    static constexpr uint32_t ISR_CMPM = 0x1; // Compare match

    static constexpr uint32_t ICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ICR_REPOKCF = 0x100; // Repetition register update OK clear flag
    static constexpr uint32_t ICR_UECF = 0x80; // Update event clear flag
    static constexpr uint32_t ICR_DOWNCF = 0x40; // Direction change to down Clear Flag
    static constexpr uint32_t ICR_UPCF = 0x20; // Direction change to UP Clear Flag
    static constexpr uint32_t ICR_ARROKCF = 0x10; // Autoreload register update OK Clear Flag
    static constexpr uint32_t ICR_CMPOKCF = 0x8; // Compare register update OK Clear Flag
    static constexpr uint32_t ICR_EXTTRIGCF = 0x4; // External trigger valid edge Clear Flag
    static constexpr uint32_t ICR_ARRMCF = 0x2; // Autoreload match Clear Flag
    static constexpr uint32_t ICR_CMPMCF = 0x1; // compare match Clear Flag

    static constexpr uint32_t IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IER_REPOKIE = 0x100; // Repetition register update OK interrupt Enable
    static constexpr uint32_t IER_UEIE = 0x80; // Update event interrupt enable
    static constexpr uint32_t IER_DOWNIE = 0x40; // Direction change to down Interrupt Enable
    static constexpr uint32_t IER_UPIE = 0x20; // Direction change to UP Interrupt Enable
    static constexpr uint32_t IER_ARROKIE = 0x10; // Autoreload register update OK Interrupt Enable
    static constexpr uint32_t IER_CMPOKIE = 0x8; // Compare register update OK Interrupt Enable
    static constexpr uint32_t IER_EXTTRIGIE = 0x4; // External trigger valid edge Interrupt Enable
    static constexpr uint32_t IER_ARRMIE = 0x2; // Autoreload match Interrupt Enable
    static constexpr uint32_t IER_CMPMIE = 0x1; // Compare match Interrupt Enable

    static constexpr uint32_t CFGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR_ENC = 0x1000000; // ENC
    static constexpr uint32_t CFGR_COUNTMODE = 0x800000; // COUNTMODE
    static constexpr uint32_t CFGR_PRELOAD = 0x400000; // PRELOAD
    static constexpr uint32_t CFGR_WAVPOL = 0x200000; // WAVPOL
    static constexpr uint32_t CFGR_WAVE = 0x100000; // WAVE
    static constexpr uint32_t CFGR_TIMOUT = 0x80000; // TIMOUT
    typedef bit_field_t<17, 0x3> CFGR_TRIGEN; // TRIGEN
    typedef bit_field_t<13, 0x7> CFGR_TRIGSEL; // TRIGSEL
    typedef bit_field_t<9, 0x7> CFGR_PRESC; // PRESC
    typedef bit_field_t<6, 0x3> CFGR_TRGFLT; // TRGFLT
    typedef bit_field_t<3, 0x3> CFGR_CKFLT; // CKFLT
    typedef bit_field_t<1, 0x3> CFGR_CKPOL; // CKPOL
    static constexpr uint32_t CFGR_CKSEL = 0x1; // CKSEL

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_RSTARE = 0x10; // RSTARE
    static constexpr uint32_t CR_COUNTRST = 0x8; // COUNTRST
    static constexpr uint32_t CR_CNTSTRT = 0x4; // CNTSTRT
    static constexpr uint32_t CR_SNGSTRT = 0x2; // SNGSTRT
    static constexpr uint32_t CR_ENABLE = 0x1; // ENABLE

    static constexpr uint32_t CMP_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CMP_CMP; // CMP

    static constexpr uint32_t ARR_RESET_VALUE = 0x1; // Reset value
    typedef bit_field_t<0, 0xffff> ARR_ARR; // Auto reload value

    static constexpr uint32_t CNT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNT_CNT; // Counter value

    static constexpr uint32_t LPTIM3_OR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t LPTIM3_OR_OR_1 = 0x2; // Option register bit 1
    static constexpr uint32_t LPTIM3_OR_OR_0 = 0x1; // Option register bit 0


    static constexpr uint32_t RCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RCR_REP; // Repetition register value
};

template<>
struct peripheral_t<STM32WL5x_CM0P, LPTIM1>
{
    static constexpr periph_t P = LPTIM1;
    using T = stm32wl5x_cm0p_lptim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WL5x_CM4, LPTIM1>
{
    static constexpr periph_t P = LPTIM1;
    using T = stm32wl5x_cm0p_lptim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WLE5_CM4, LPTIM1>
{
    static constexpr periph_t P = LPTIM1;
    using T = stm32wl5x_cm0p_lptim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WL5x_CM0P, LPTIM2>
{
    static constexpr periph_t P = LPTIM2;
    using T = stm32wl5x_cm0p_lptim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WL5x_CM4, LPTIM2>
{
    static constexpr periph_t P = LPTIM2;
    using T = stm32wl5x_cm0p_lptim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WLE5_CM4, LPTIM2>
{
    static constexpr periph_t P = LPTIM2;
    using T = stm32wl5x_cm0p_lptim2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WL5x_CM0P, LPTIM3>
{
    static constexpr periph_t P = LPTIM3;
    using T = stm32wl5x_cm0p_lptim3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WL5x_CM4, LPTIM3>
{
    static constexpr periph_t P = LPTIM3;
    using T = stm32wl5x_cm0p_lptim3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WLE5_CM4, LPTIM3>
{
    static constexpr periph_t P = LPTIM3;
    using T = stm32wl5x_cm0p_lptim3_t;
    static T& V;
};

using lptim1_t = peripheral_t<svd, LPTIM1>;
using lptim2_t = peripheral_t<svd, LPTIM2>;
using lptim3_t = peripheral_t<svd, LPTIM3>;

template<int INST> struct lptim_traits {};

template<> struct lptim_traits<1>
{
    using lptim = lptim1_t;
    static constexpr signal_t ETR = LPTIM1_ETR;
    static constexpr signal_t IN1 = LPTIM1_IN1;
    static constexpr signal_t IN2 = LPTIM1_IN2;
    static constexpr signal_t OUT = LPTIM1_OUT;
    static constexpr clock_source_t CLOCK = APB1_TIMER;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR1 |= RCC::T::APB1ENR1_LPTIM1EN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR1 &= ~RCC::T::APB1ENR1_LPTIM1EN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.APB1SMENR1 |= RCC::T::APB1SMENR1_LPTIM1SMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.APB1SMENR1 &= ~RCC::T::APB1SMENR1_LPTIM1SMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR1 |= RCC::T::APB1RSTR1_LPTIM1RST;
    }
};

template<> struct lptim_traits<2>
{
    using lptim = lptim2_t;
    static constexpr signal_t ETR = LPTIM2_ETR;
    static constexpr signal_t IN1 = LPTIM2_IN1;
    static constexpr signal_t OUT = LPTIM2_OUT;
    static constexpr clock_source_t CLOCK = APB1_TIMER;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR2 |= RCC::T::APB1ENR2_LPTIM2EN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR2 &= ~RCC::T::APB1ENR2_LPTIM2EN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.APB1SMENR2 |= RCC::T::APB1SMENR2_LPTIM2SMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.APB1SMENR2 &= ~RCC::T::APB1SMENR2_LPTIM2SMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR2 |= RCC::T::APB1RSTR2_LPTIM2RST;
    }
};

template<> struct lptim_traits<3>
{
    using lptim = lptim3_t;
    static constexpr signal_t ETR = LPTIM3_ETR;
    static constexpr signal_t IN1 = LPTIM3_IN1;
    static constexpr signal_t OUT = LPTIM3_OUT;
    static constexpr clock_source_t CLOCK = APB1_TIMER;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR2 |= RCC::T::APB1ENR2_LPTIM3EN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR2 &= ~RCC::T::APB1ENR2_LPTIM3EN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.APB1SMENR2 |= RCC::T::APB1SMENR2_LPTIM3SMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.APB1SMENR2 &= ~RCC::T::APB1SMENR2_LPTIM3SMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR2 |= RCC::T::APB1RSTR2_LPTIM3RST;
    }
};
