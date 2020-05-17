#pragma once

////
//
//      STM32G0 LPTIM peripherals
//
////

////
//
//      Low power timer
//
////

struct stm32g031_lptim1_t
{
    volatile uint32_t ISR;   // [read-only] Interrupt and Status Register
    volatile uint32_t ICR;   // [write-only] Interrupt Clear Register
    volatile uint32_t IER;   // [read-write] Interrupt Enable Register
    volatile uint32_t CFGR;  // [read-write] Configuration Register
    volatile uint32_t CR;    // [read-write] Control Register
    volatile uint32_t CMP;   // [read-write] Compare Register
    volatile uint32_t ARR;   // [read-write] Autoreload Register
    volatile uint32_t CNT;   // [read-only] Counter Register
    reserved_t<0x1> _0x24;
    volatile uint32_t CFGR2; // [read-write] LPTIM configuration register 2

    static constexpr uint32_t ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t ISR_DOWN = 0x40;   // Counter direction change up to down
    static constexpr uint32_t ISR_UP = 0x20;     // Counter direction change down to up
    static constexpr uint32_t ISR_ARROK = 0x10;  // Autoreload register update OK
    static constexpr uint32_t ISR_CMPOK = 0x8;   // Compare register update OK
    static constexpr uint32_t ISR_EXTTRIG = 0x4; // External trigger edge event
    static constexpr uint32_t ISR_ARRM = 0x2;    // Autoreload match
    static constexpr uint32_t ISR_CMPM = 0x1;    // Compare match

    static constexpr uint32_t ICR_RESET_VALUE = 0x0;
    static constexpr uint32_t ICR_DOWNCF = 0x40;   // Direction change to down Clear Flag
    static constexpr uint32_t ICR_UPCF = 0x20;     // Direction change to UP Clear Flag
    static constexpr uint32_t ICR_ARROKCF = 0x10;  // Autoreload register update OK Clear Flag
    static constexpr uint32_t ICR_CMPOKCF = 0x8;   // Compare register update OK Clear Flag
    static constexpr uint32_t ICR_EXTTRIGCF = 0x4; // External trigger valid edge Clear Flag
    static constexpr uint32_t ICR_ARRMCF = 0x2;    // Autoreload match Clear Flag
    static constexpr uint32_t ICR_CMPMCF = 0x1;    // compare match Clear Flag

    static constexpr uint32_t IER_RESET_VALUE = 0x0;
    static constexpr uint32_t IER_DOWNIE = 0x40;   // Direction change to down Interrupt Enable
    static constexpr uint32_t IER_UPIE = 0x20;     // Direction change to UP Interrupt Enable
    static constexpr uint32_t IER_ARROKIE = 0x10;  // Autoreload register update OK Interrupt Enable
    static constexpr uint32_t IER_CMPOKIE = 0x8;   // Compare register update OK Interrupt Enable
    static constexpr uint32_t IER_EXTTRIGIE = 0x4; // External trigger valid edge Interrupt Enable
    static constexpr uint32_t IER_ARRMIE = 0x2;    // Autoreload match Interrupt Enable
    static constexpr uint32_t IER_CMPMIE = 0x1;    // Compare match Interrupt Enable

    static constexpr uint32_t CFGR_RESET_VALUE = 0x0;
    static constexpr uint32_t CFGR_ENC = 0x1000000;      // Encoder mode enable
    static constexpr uint32_t CFGR_COUNTMODE = 0x800000; // counter mode enabled
    static constexpr uint32_t CFGR_PRELOAD = 0x400000;   // Registers update mode
    static constexpr uint32_t CFGR_WAVPOL = 0x200000;    // Waveform shape polarity
    static constexpr uint32_t CFGR_WAVE = 0x100000;      // Waveform shape
    static constexpr uint32_t CFGR_TIMOUT = 0x80000;     // Timeout enable
    template<uint32_t X>
    static constexpr uint32_t CFGR_TRIGEN =              // Trigger enable and polarity
        bit_field_t<17, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFGR_TRIGSEL =             // Trigger selector
        bit_field_t<13, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFGR_PRESC =               // Clock prescaler
        bit_field_t<9, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFGR_TRGFLT =              // Configurable digital filter for trigger
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFGR_CKFLT =               // Configurable digital filter for external clock
        bit_field_t<3, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFGR_CKPOL =               // Clock Polarity
        bit_field_t<1, 0x3>::value<X>();
    static constexpr uint32_t CFGR_CKSEL = 0x1;          // Clock selector

    static constexpr uint32_t CR_RESET_VALUE = 0x0;
    static constexpr uint32_t CR_RSTARE = 0x10;  // Reset after read enable
    static constexpr uint32_t CR_COUNTRST = 0x8; // Counter reset
    static constexpr uint32_t CR_CNTSTRT = 0x4;  // Timer start in continuous mode
    static constexpr uint32_t CR_SNGSTRT = 0x2;  // LPTIM start in single mode
    static constexpr uint32_t CR_ENABLE = 0x1;   // LPTIM Enable

    static constexpr uint32_t CMP_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CMP_CMP =   // Compare value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t ARR_RESET_VALUE = 0x1;
    template<uint32_t X>
    static constexpr uint32_t ARR_ARR =   // Auto reload value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CNT_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CNT_CNT =   // Counter value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CFGR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CFGR2_IN2SEL =   // LPTIM1 Input 2 selection
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CFGR2_IN1SEL =   // LPTIMx Input 1 selection
        bit_field_t<0, 0x3>::value<X>();
};


template<>
struct peripheral_t<STM32G031, LPTIM1>
{
    typedef stm32g031_lptim1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G031, LPTIM2>
{
    typedef stm32g031_lptim1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G041, LPTIM1>
{
    typedef stm32g031_lptim1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G041, LPTIM2>
{
    typedef stm32g031_lptim1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G070, LPTIM1>
{
    typedef stm32g031_lptim1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G070, LPTIM2>
{
    typedef stm32g031_lptim1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G071, LPTIM1>
{
    typedef stm32g031_lptim1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G071, LPTIM2>
{
    typedef stm32g031_lptim1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G081, LPTIM1>
{
    typedef stm32g031_lptim1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G081, LPTIM2>
{
    typedef stm32g031_lptim1_t T;
    static T& V;
};

using lptim1_t = peripheral_t<mcu_svd, LPTIM1>;
using lptim2_t = peripheral_t<mcu_svd, LPTIM2>;

