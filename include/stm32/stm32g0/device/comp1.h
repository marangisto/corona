#pragma once

////
//
//      STM32G0 COMP1 peripherals
//
////

////
//
//      COMP1
//
////

struct stm32g070_comp_t
{
    volatile uint32_t COMP1_CSR; // [read-write] Comparator 1 control and status register
    volatile uint32_t COMP2_CSR; // [read-write] Comparator 2 control and status register

    static constexpr uint32_t COMP1_CSR_RESET_VALUE = 0x0;
    static constexpr uint32_t COMP1_CSR_EN = 0x1;           // COMP channel 1 enable bit
    template<uint32_t X>
    static constexpr uint32_t COMP1_CSR_INMSEL =            // Comparator 2 signal selector for inverting input INM
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t COMP1_CSR_INPSEL =            // Comparator 2 signal selector for non-inverting input
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t COMP1_CSR_WINMODE = 0x800;    // Comparator 2 non-inverting input selector for window mode
    static constexpr uint32_t COMP1_CSR_WINOUT = 0x4000;    // Comparator 2 output selector
    static constexpr uint32_t COMP1_CSR_POLARITY = 0x8000;  // Comparator 2 polarity selector
    template<uint32_t X>
    static constexpr uint32_t COMP1_CSR_HYST =              // Comparator 2 hysteresis selector
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t COMP1_CSR_PWRMODE =           // Comparator 2 power mode selector
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t COMP1_CSR_BLANKSEL =          // Comparator 2 blanking source selector
        bit_field_t<20, 0x1f>::value<X>();
    static constexpr uint32_t COMP1_CSR_VALUE = 0x40000000; // Comparator 2 output status
    static constexpr uint32_t COMP1_CSR_LOCK = 0x80000000;  // COMP2_CSR register lock

    static constexpr uint32_t COMP2_CSR_RESET_VALUE = 0x0;
    static constexpr uint32_t COMP2_CSR_EN = 0x1;           // COMP channel 1 enable bit
    template<uint32_t X>
    static constexpr uint32_t COMP2_CSR_INMSEL =            // Comparator 2 signal selector for inverting input INM
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t COMP2_CSR_INPSEL =            // Comparator 2 signal selector for non-inverting input
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t COMP2_CSR_WINMODE = 0x800;    // Comparator 2 non-inverting input selector for window mode
    static constexpr uint32_t COMP2_CSR_WINOUT = 0x4000;    // Comparator 2 output selector
    static constexpr uint32_t COMP2_CSR_POLARITY = 0x8000;  // Comparator 2 polarity selector
    template<uint32_t X>
    static constexpr uint32_t COMP2_CSR_HYST =              // Comparator 2 hysteresis selector
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t COMP2_CSR_PWRMODE =           // Comparator 2 power mode selector
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t COMP2_CSR_BLANKSEL =          // Comparator 2 blanking source selector
        bit_field_t<20, 0x1f>::value<X>();
    static constexpr uint32_t COMP2_CSR_VALUE = 0x40000000; // Comparator 2 output status
    static constexpr uint32_t COMP2_CSR_LOCK = 0x80000000;  // COMP2_CSR register lock
};


template<>
struct peripheral_t<STM32G070, COMP>
{
    typedef stm32g070_comp_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G071, COMP>
{
    typedef stm32g070_comp_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G081, COMP>
{
    typedef stm32g070_comp_t T;
    static T& V;
};

using comp_t = peripheral_t<mcu_svd, COMP>;

