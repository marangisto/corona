#pragma once

////
//
//      STM32H7 COMP1 peripherals
//
///

// COMP1: COMP1

struct stm32h723_comp1_t
{
    volatile uint32_t SR; // Comparator status register
    volatile uint32_t ICFR; // Comparator interrupt clear flag register
    volatile uint32_t OR; // Comparator option register
    volatile uint32_t CFGR1; // Comparator configuration register 1
    volatile uint32_t CFGR2; // Comparator configuration register 2

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_C1VAL = 0x1; // COMP channel 1 output status bit
    static constexpr uint32_t SR_C2VAL = 0x2; // COMP channel 2 output status bit
    static constexpr uint32_t SR_C1IF = 0x10000; // COMP channel 1 Interrupt Flag
    static constexpr uint32_t SR_C2IF = 0x20000; // COMP channel 2 Interrupt Flag

    static constexpr uint32_t ICFR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ICFR_CC1IF = 0x10000; // Clear COMP channel 1 Interrupt Flag
    static constexpr uint32_t ICFR_CC2IF = 0x20000; // Clear COMP channel 2 Interrupt Flag

    static constexpr uint32_t OR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> OR_AFOP; // Selection of source for alternate function of output ports
    typedef bit_field_t<11, 0x1fffff> OR_OR; // Option Register

    static constexpr uint32_t CFGR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR1_EN = 0x1; // COMP channel 1 enable bit
    static constexpr uint32_t CFGR1_BRGEN = 0x2; // Scaler bridge enable
    static constexpr uint32_t CFGR1_SCALEN = 0x4; // Voltage scaler enable bit
    static constexpr uint32_t CFGR1_POLARITY = 0x8; // COMP channel 1 polarity selection bit
    static constexpr uint32_t CFGR1_ITEN = 0x40; // COMP channel 1 interrupt enable
    typedef bit_field_t<8, 0x3> CFGR1_HYST; // COMP channel 1 hysteresis selection bits
    typedef bit_field_t<12, 0x3> CFGR1_PWRMODE; // Power Mode of the COMP channel 1
    typedef bit_field_t<16, 0x7> CFGR1_INMSEL; // COMP channel 1 inverting input selection field
    static constexpr uint32_t CFGR1_INPSEL = 0x100000; // COMP channel 1 non-inverting input selection bit
    typedef bit_field_t<24, 0xf> CFGR1_BLANKING; // COMP channel 1 blanking source selection bits
    static constexpr uint32_t CFGR1_LOCK = 0x80000000; // Lock bit

    static constexpr uint32_t CFGR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR2_EN = 0x1; // COMP channel 1 enable bit
    static constexpr uint32_t CFGR2_BRGEN = 0x2; // Scaler bridge enable
    static constexpr uint32_t CFGR2_SCALEN = 0x4; // Voltage scaler enable bit
    static constexpr uint32_t CFGR2_POLARITY = 0x8; // COMP channel 1 polarity selection bit
    static constexpr uint32_t CFGR2_WINMODE = 0x10; // Window comparator mode selection bit
    static constexpr uint32_t CFGR2_ITEN = 0x40; // COMP channel 1 interrupt enable
    typedef bit_field_t<8, 0x3> CFGR2_HYST; // COMP channel 1 hysteresis selection bits
    typedef bit_field_t<12, 0x3> CFGR2_PWRMODE; // Power Mode of the COMP channel 1
    typedef bit_field_t<16, 0x7> CFGR2_INMSEL; // COMP channel 1 inverting input selection field
    static constexpr uint32_t CFGR2_INPSEL = 0x100000; // COMP channel 1 non-inverting input selection bit
    typedef bit_field_t<24, 0xf> CFGR2_BLANKING; // COMP channel 1 blanking source selection bits
    static constexpr uint32_t CFGR2_LOCK = 0x80000000; // Lock bit
};

// COMP1: COMP1

struct stm32h750x_comp1_t
{
    volatile uint32_t COMP1_SR; // Comparator status register
    volatile uint32_t COMP1_ICFR; // Comparator interrupt clear flag register
    volatile uint32_t COMP1_OR; // Comparator option register
    volatile uint32_t COMP1_CFGR1; // Comparator configuration register 1
    volatile uint32_t COMP1_CFGR2; // Comparator configuration register 2

    static constexpr uint32_t COMP1_SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t COMP1_SR_C1VAL = 0x1; // COMP channel 1 output status bit
    static constexpr uint32_t COMP1_SR_C2VAL = 0x2; // COMP channel 2 output status bit
    static constexpr uint32_t COMP1_SR_C1IF = 0x10000; // COMP channel 1 Interrupt Flag
    static constexpr uint32_t COMP1_SR_C2IF = 0x20000; // COMP channel 2 Interrupt Flag

    static constexpr uint32_t COMP1_ICFR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t COMP1_ICFR_CC1IF = 0x10000; // Clear COMP channel 1 Interrupt Flag
    static constexpr uint32_t COMP1_ICFR_CC2IF = 0x20000; // Clear COMP channel 2 Interrupt Flag

    static constexpr uint32_t COMP1_OR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> COMP1_OR_AFOP; // Selection of source for alternate function of output ports
    typedef bit_field_t<11, 0x1fffff> COMP1_OR_OR; // Option Register

    static constexpr uint32_t COMP1_CFGR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t COMP1_CFGR1_EN = 0x1; // COMP channel 1 enable bit
    static constexpr uint32_t COMP1_CFGR1_BRGEN = 0x2; // Scaler bridge enable
    static constexpr uint32_t COMP1_CFGR1_SCALEN = 0x4; // Voltage scaler enable bit
    static constexpr uint32_t COMP1_CFGR1_POLARITY = 0x8; // COMP channel 1 polarity selection bit
    static constexpr uint32_t COMP1_CFGR1_ITEN = 0x40; // COMP channel 1 interrupt enable
    typedef bit_field_t<8, 0x3> COMP1_CFGR1_HYST; // COMP channel 1 hysteresis selection bits
    typedef bit_field_t<12, 0x3> COMP1_CFGR1_PWRMODE; // Power Mode of the COMP channel 1
    typedef bit_field_t<16, 0x7> COMP1_CFGR1_INMSEL; // COMP channel 1 inverting input selection field
    static constexpr uint32_t COMP1_CFGR1_INPSEL = 0x100000; // COMP channel 1 non-inverting input selection bit
    typedef bit_field_t<24, 0xf> COMP1_CFGR1_BLANKING; // COMP channel 1 blanking source selection bits
    static constexpr uint32_t COMP1_CFGR1_LOCK = 0x80000000; // Lock bit

    static constexpr uint32_t COMP1_CFGR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t COMP1_CFGR2_EN = 0x1; // COMP channel 1 enable bit
    static constexpr uint32_t COMP1_CFGR2_BRGEN = 0x2; // Scaler bridge enable
    static constexpr uint32_t COMP1_CFGR2_SCALEN = 0x4; // Voltage scaler enable bit
    static constexpr uint32_t COMP1_CFGR2_POLARITY = 0x8; // COMP channel 1 polarity selection bit
    static constexpr uint32_t COMP1_CFGR2_WINMODE = 0x10; // Window comparator mode selection bit
    static constexpr uint32_t COMP1_CFGR2_ITEN = 0x40; // COMP channel 1 interrupt enable
    typedef bit_field_t<8, 0x3> COMP1_CFGR2_HYST; // COMP channel 1 hysteresis selection bits
    typedef bit_field_t<12, 0x3> COMP1_CFGR2_PWRMODE; // Power Mode of the COMP channel 1
    typedef bit_field_t<16, 0x7> COMP1_CFGR2_INMSEL; // COMP channel 1 inverting input selection field
    static constexpr uint32_t COMP1_CFGR2_INPSEL = 0x100000; // COMP channel 1 non-inverting input selection bit
    typedef bit_field_t<24, 0xf> COMP1_CFGR2_BLANKING; // COMP channel 1 blanking source selection bits
    static constexpr uint32_t COMP1_CFGR2_LOCK = 0x80000000; // Lock bit
};

template<>
struct peripheral_t<STM32H723, COMP1>
{
    static constexpr periph_t P = COMP1;
    using T = stm32h723_comp1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H725, COMP1>
{
    static constexpr periph_t P = COMP1;
    using T = stm32h723_comp1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H73x, COMP1>
{
    static constexpr periph_t P = COMP1;
    using T = stm32h723_comp1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, COMP1>
{
    static constexpr periph_t P = COMP1;
    using T = stm32h723_comp1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, COMP1>
{
    static constexpr periph_t P = COMP1;
    using T = stm32h723_comp1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, COMP1>
{
    static constexpr periph_t P = COMP1;
    using T = stm32h723_comp1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, COMP1>
{
    static constexpr periph_t P = COMP1;
    using T = stm32h723_comp1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, COMP1>
{
    static constexpr periph_t P = COMP1;
    using T = stm32h723_comp1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, COMP1>
{
    static constexpr periph_t P = COMP1;
    using T = stm32h723_comp1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, COMP1>
{
    static constexpr periph_t P = COMP1;
    using T = stm32h723_comp1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, COMP1>
{
    static constexpr periph_t P = COMP1;
    using T = stm32h723_comp1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, COMP1>
{
    static constexpr periph_t P = COMP1;
    using T = stm32h723_comp1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, COMP1>
{
    static constexpr periph_t P = COMP1;
    using T = stm32h723_comp1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, COMP1>
{
    static constexpr periph_t P = COMP1;
    using T = stm32h723_comp1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, COMP1>
{
    static constexpr periph_t P = COMP1;
    using T = stm32h723_comp1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, COMP1>
{
    static constexpr periph_t P = COMP1;
    using T = stm32h750x_comp1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, COMP1>
{
    static constexpr periph_t P = COMP1;
    using T = stm32h750x_comp1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, COMP1>
{
    static constexpr periph_t P = COMP1;
    using T = stm32h750x_comp1_t;
    static T& V;
};

using comp1_t = peripheral_t<svd, COMP1>;

template<int INST> struct comp1_traits {};

template<> struct comp1_traits<1>
{
    using comp1 = comp1_t;
    static constexpr signal_t OUT = COMP1_OUT;
};
