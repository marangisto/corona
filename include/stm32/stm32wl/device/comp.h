#pragma once

////
//
//      STM32WL COMP peripherals
//
///

// COMP: Comparator

struct stm32wl5x_cm0p_comp_t
{
    volatile uint32_t COMP1_CSR; // COMP1_CSR
    volatile uint32_t COMP2_CSR; // COMP2_CSR

    static constexpr uint32_t COMP1_CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t COMP1_CSR_LOCK = 0x80000000; // COMP1_CSR register lock bit
    static constexpr uint32_t COMP1_CSR_VALUE = 0x40000000; // Comparator 1 output status bit
    typedef bit_field_t<25, 0x3> COMP1_CSR_INMESEL; // comparator 1 input minus extended selection bits.
    static constexpr uint32_t COMP1_CSR_SCALEN = 0x800000; // Voltage scaler enable bit
    static constexpr uint32_t COMP1_CSR_BRGEN = 0x400000; // Scaler bridge enable
    typedef bit_field_t<18, 0x7> COMP1_CSR_BLANKING; // Comparator 1 blanking source selection bits
    typedef bit_field_t<16, 0x3> COMP1_CSR_HYST; // Comparator 1 hysteresis selection bits
    static constexpr uint32_t COMP1_CSR_POLARITY = 0x8000; // Comparator 1 polarity selection bit
    typedef bit_field_t<7, 0x3> COMP1_CSR_INPSEL; // Comparator1 input plus selection bit
    typedef bit_field_t<4, 0x7> COMP1_CSR_INMSEL; // Comparator 1 input minus selection bits
    typedef bit_field_t<2, 0x3> COMP1_CSR_PWRMODE; // Power Mode of the comparator 1
    static constexpr uint32_t COMP1_CSR_EN = 0x1; // Comparator 1 enable bit

    static constexpr uint32_t COMP2_CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t COMP2_CSR_LOCK = 0x80000000; // CSR register lock bit
    static constexpr uint32_t COMP2_CSR_VALUE = 0x40000000; // Comparator 2 output status bit
    typedef bit_field_t<25, 0x3> COMP2_CSR_INMESEL; // comparator 2 input minus extended selection bits.
    static constexpr uint32_t COMP2_CSR_SCALEN = 0x800000; // Voltage scaler enable bit
    static constexpr uint32_t COMP2_CSR_BRGEN = 0x400000; // Scaler bridge enable
    typedef bit_field_t<18, 0x7> COMP2_CSR_BLANKING; // Comparator 2 blanking source selection bits
    typedef bit_field_t<16, 0x3> COMP2_CSR_HYST; // Comparator 2 hysteresis selection bits
    static constexpr uint32_t COMP2_CSR_POLARITY = 0x8000; // Comparator 2 polarity selection bit
    static constexpr uint32_t COMP2_CSR_WINMODE = 0x200; // Windows mode selection bit
    typedef bit_field_t<7, 0x3> COMP2_CSR_INPSEL; // Comparator 1 input plus selection bit
    typedef bit_field_t<4, 0x7> COMP2_CSR_INMSEL; // Comparator 2 input minus selection bits
    typedef bit_field_t<2, 0x3> COMP2_CSR_PWRMODE; // Power Mode of the comparator 2
    static constexpr uint32_t COMP2_CSR_EN = 0x1; // Comparator 2 enable bit
};

template<>
struct peripheral_t<STM32WL5x_CM0P, COMP>
{
    static constexpr periph_t P = COMP;
    using T = stm32wl5x_cm0p_comp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WL5x_CM4, COMP>
{
    static constexpr periph_t P = COMP;
    using T = stm32wl5x_cm0p_comp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WLE5_CM4, COMP>
{
    static constexpr periph_t P = COMP;
    using T = stm32wl5x_cm0p_comp_t;
    static T& V;
};

using comp_t = peripheral_t<svd, COMP>;
