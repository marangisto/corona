#pragma once

////
//
//      STM32U5 COMP peripherals
//
///

// COMP: Comparator

struct stm32u5xx_comp_t
{
    volatile uint32_t COMP1_CSR; // Comparator 1 control and status register
    volatile uint32_t COMP2_CSR; // Comparator 2 control and status register

    static constexpr uint32_t COMP1_CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t COMP1_CSR_COMP1_EN = 0x1; // Comparator 1 enable bit
    typedef bit_field_t<4, 0xf> COMP1_CSR_COMP1_INMSEL; // Comparator 1 Input Minus connection configuration bit
    typedef bit_field_t<8, 0x3> COMP1_CSR_COMP1_INPSEL; // Comparator1 input plus selection bit
    static constexpr uint32_t COMP1_CSR_COMP1_WINMODE = 0x800; // COMP1_WINMODE
    static constexpr uint32_t COMP1_CSR_COMP1_WINOUT = 0x4000; // COMP1_WINOUT
    static constexpr uint32_t COMP1_CSR_COMP1_POLARITY = 0x8000; // Comparator 1 polarity selection bit
    typedef bit_field_t<16, 0x3> COMP1_CSR_COMP1_HYST; // Comparator 1 hysteresis selection bits
    typedef bit_field_t<18, 0x3> COMP1_CSR_COMP1_PWRMODE; // COMP1_PWRMODE
    typedef bit_field_t<20, 0x1f> COMP1_CSR_COMP1_BLANKSEL; // COMP1_BLANKSEL
    static constexpr uint32_t COMP1_CSR_COMP1_VALUE = 0x40000000; // Comparator 1 output status bit
    static constexpr uint32_t COMP1_CSR_COMP1_LOCK = 0x80000000; // COMP1_CSR register lock bit

    static constexpr uint32_t COMP2_CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t COMP2_CSR_COM2_EN = 0x1; // Comparator 2 enable bit
    typedef bit_field_t<4, 0xf> COMP2_CSR_COM2_INMSEL; // Comparator 2 Input Minus connection configuration bit
    typedef bit_field_t<8, 0x3> COMP2_CSR_COM2_INPSEL; // Comparator 2 input plus selection bit
    static constexpr uint32_t COMP2_CSR_COM2_WINMODE = 0x800; // COM2_WINMODE
    static constexpr uint32_t COMP2_CSR_COM2_WINOUT = 0x4000; // COM2_WINOUT
    static constexpr uint32_t COMP2_CSR_COM2_POLARITY = 0x8000; // Comparator 2 polarity selection bit
    typedef bit_field_t<16, 0x3> COMP2_CSR_COM2_HYST; // Comparator 2 hysteresis selection bits
    typedef bit_field_t<18, 0x3> COMP2_CSR_COM2_PWRMODE; // COM2_PWRMODE
    typedef bit_field_t<20, 0x1f> COMP2_CSR_COM2_BLANKSEL; // COM2_BLANKSEL
    static constexpr uint32_t COMP2_CSR_COM2_VALUE = 0x40000000; // Comparator 2 output status bit
    static constexpr uint32_t COMP2_CSR_COM2_LOCK = 0x80000000; // COMP2_CSR register lock bit
};

template<>
struct peripheral_t<STM32U5xx, COMP>
{
    static constexpr periph_t P = COMP;
    using T = stm32u5xx_comp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, SEC_COMP>
{
    static constexpr periph_t P = SEC_COMP;
    using T = stm32u5xx_comp_t;
    static T& V;
};

using comp_t = peripheral_t<svd, COMP>;
using sec_comp_t = peripheral_t<svd, SEC_COMP>;
