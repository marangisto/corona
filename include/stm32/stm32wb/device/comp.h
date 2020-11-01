#pragma once

////
//
//      STM32WB COMP peripherals
//
///

// COMP: Comparator instance 1

struct stm32wb35_cm4_comp_t
{
    volatile uint32_t COMP1_CSR; // Comparator control and status register
    volatile uint32_t COMP2_CSR; // Comparator 2 control and status register

    static constexpr uint32_t COMP1_CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t COMP1_CSR_COMP1_EN = 0x1; // Comparator enable
    typedef bit_field_t<2, 0x3> COMP1_CSR_COMP1_PWRMODE; // Comparator power mode
    typedef bit_field_t<4, 0x7> COMP1_CSR_COMP1_INMSEL; // Comparator input minus selection
    typedef bit_field_t<7, 0x3> COMP1_CSR_COMP1_INPSEL; // Comparator input plus selection
    static constexpr uint32_t COMP1_CSR_COMP1_POLARITY = 0x8000; // Comparator output polarity
    typedef bit_field_t<16, 0x3> COMP1_CSR_COMP1_HYST; // Comparator hysteresis
    typedef bit_field_t<18, 0x7> COMP1_CSR_COMP1_BLANKING; // Comparator blanking source
    static constexpr uint32_t COMP1_CSR_COMP1_BRGEN = 0x400000; // Comparator voltage scaler enable
    static constexpr uint32_t COMP1_CSR_COMP1_SCALEN = 0x800000; // Comparator scaler bridge enable
    typedef bit_field_t<25, 0x3> COMP1_CSR_COMP1_INMESEL; // Comparator input minus extended selection
    static constexpr uint32_t COMP1_CSR_COMP1_VALUE = 0x40000000; // Comparator output level
    static constexpr uint32_t COMP1_CSR_COMP1_LOCK = 0x80000000; // Comparator lock

    static constexpr uint32_t COMP2_CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t COMP2_CSR_COMP2_EN = 0x1; // Comparator 2 enable bit
    typedef bit_field_t<2, 0x3> COMP2_CSR_COMP2_PWRMODE; // Power Mode of the comparator 2
    typedef bit_field_t<4, 0x3> COMP2_CSR_COMP2_INMSEL; // Comparator 2 input minus selection bits
    typedef bit_field_t<7, 0x3> COMP2_CSR_COMP2_INPSEL; // Comparator 1 input plus selection bit
    static constexpr uint32_t COMP2_CSR_COMP2_WINMODE = 0x200; // Windows mode selection bit
    static constexpr uint32_t COMP2_CSR_COMP2_POLARITY = 0x8000; // Comparator 2 polarity selection bit
    typedef bit_field_t<16, 0x3> COMP2_CSR_COMP2_HYST; // Comparator 2 hysteresis selection bits
    typedef bit_field_t<18, 0x7> COMP2_CSR_COMP2_BLANKING; // Comparator 2 blanking source selection bits
    static constexpr uint32_t COMP2_CSR_COMP2_BRGEN = 0x400000; // Scaler bridge enable
    static constexpr uint32_t COMP2_CSR_COMP2_SCALEN = 0x800000; // Voltage scaler enable bit
    typedef bit_field_t<25, 0x3> COMP2_CSR_COMP2_INMESEL; // comparator 2 input minus extended selection bits.
    static constexpr uint32_t COMP2_CSR_COMP2_VALUE = 0x40000000; // Comparator 2 output status bit
    static constexpr uint32_t COMP2_CSR_COMP2_LOCK = 0x80000000; // CSR register lock bit
};

template<>
struct peripheral_t<STM32WB35_CM4, COMP>
{
    static constexpr periph_t P = COMP;
    using T = stm32wb35_cm4_comp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WB55_CM4, COMP>
{
    static constexpr periph_t P = COMP;
    using T = stm32wb35_cm4_comp_t;
    static T& V;
};

using comp_t = peripheral_t<svd, COMP>;
