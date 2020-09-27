#pragma once

////
//
//      STM32G0 COMP1 peripherals
//
///

// COMP: COMP1

struct stm32g070_comp_t
{
    volatile uint32_t COMP1_CSR; // Comparator 1 control and status register
    volatile uint32_t COMP2_CSR; // Comparator 2 control and status register

    static constexpr uint32_t COMP1_CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t COMP1_CSR_EN = 0x1; // COMP channel 1 enable bit
    typedef bit_field_t<4, 0xf> COMP1_CSR_INMSEL; // Comparator 2 signal selector for inverting input INM
    typedef bit_field_t<8, 0x3> COMP1_CSR_INPSEL; // Comparator 2 signal selector for non-inverting input
    static constexpr uint32_t COMP1_CSR_WINMODE = 0x800; // Comparator 2 non-inverting input selector for window mode
    static constexpr uint32_t COMP1_CSR_WINOUT = 0x4000; // Comparator 2 output selector
    static constexpr uint32_t COMP1_CSR_POLARITY = 0x8000; // Comparator 2 polarity selector
    typedef bit_field_t<16, 0x3> COMP1_CSR_HYST; // Comparator 2 hysteresis selector
    typedef bit_field_t<18, 0x3> COMP1_CSR_PWRMODE; // Comparator 2 power mode selector
    typedef bit_field_t<20, 0x1f> COMP1_CSR_BLANKSEL; // Comparator 2 blanking source selector
    static constexpr uint32_t COMP1_CSR_VALUE = 0x40000000; // Comparator 2 output status
    static constexpr uint32_t COMP1_CSR_LOCK = 0x80000000; // COMP2_CSR register lock

    static constexpr uint32_t COMP2_CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t COMP2_CSR_EN = 0x1; // COMP channel 1 enable bit
    typedef bit_field_t<4, 0xf> COMP2_CSR_INMSEL; // Comparator 2 signal selector for inverting input INM
    typedef bit_field_t<8, 0x3> COMP2_CSR_INPSEL; // Comparator 2 signal selector for non-inverting input
    static constexpr uint32_t COMP2_CSR_WINMODE = 0x800; // Comparator 2 non-inverting input selector for window mode
    static constexpr uint32_t COMP2_CSR_WINOUT = 0x4000; // Comparator 2 output selector
    static constexpr uint32_t COMP2_CSR_POLARITY = 0x8000; // Comparator 2 polarity selector
    typedef bit_field_t<16, 0x3> COMP2_CSR_HYST; // Comparator 2 hysteresis selector
    typedef bit_field_t<18, 0x3> COMP2_CSR_PWRMODE; // Comparator 2 power mode selector
    typedef bit_field_t<20, 0x1f> COMP2_CSR_BLANKSEL; // Comparator 2 blanking source selector
    static constexpr uint32_t COMP2_CSR_VALUE = 0x40000000; // Comparator 2 output status
    static constexpr uint32_t COMP2_CSR_LOCK = 0x80000000; // COMP2_CSR register lock
};

template<>
struct peripheral_t<STM32G070, COMP>
{
    static constexpr periph_t P = COMP;
    using T = stm32g070_comp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G071, COMP>
{
    static constexpr periph_t P = COMP;
    using T = stm32g070_comp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G081, COMP>
{
    static constexpr periph_t P = COMP;
    using T = stm32g070_comp_t;
    static T& V;
};

using comp_t = peripheral_t<svd, COMP>;
