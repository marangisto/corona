#pragma once

////
//
//      STM32L1 RI peripherals
//
///

// RI: Routing interface

struct stm32l100_ri_t
{
    reserved_t<0x1> _0x0;
    volatile uint32_t ICR; // RI input capture register
    volatile uint32_t ASCR1; // RI analog switches control register 1
    volatile uint32_t ASCR2; // RI analog switches control register 2
    volatile uint32_t HYSCR1; // RI hysteresis control register 1
    volatile uint32_t HYSCR2; // RI hysteresis control register 2
    volatile uint32_t HYSCR3; // RI hysteresis control register 3
    volatile uint32_t HYSCR4; // Hysteresis control register


    static constexpr uint32_t ICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ICR_IC4 = 0x200000; // IC4
    static constexpr uint32_t ICR_IC3 = 0x100000; // IC3
    static constexpr uint32_t ICR_IC2 = 0x80000; // IC2
    static constexpr uint32_t ICR_IC1 = 0x40000; // IC1
    typedef bit_field_t<16, 0x3> ICR_TIM; // Timer select bits
    typedef bit_field_t<12, 0xf> ICR_IC4IOS; // Input capture 4 select bits
    typedef bit_field_t<8, 0xf> ICR_IC3IOS; // Input capture 3 select bits
    typedef bit_field_t<4, 0xf> ICR_IC2IOS; // Input capture 2 select bits
    typedef bit_field_t<0, 0xf> ICR_IC1IOS; // Input capture 1 select bits

    static constexpr uint32_t ASCR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ASCR1_SCM = 0x80000000; // Switch control mode
    static constexpr uint32_t ASCR1_CH30GR11_4 = 0x40000000; // Analog switch control
    static constexpr uint32_t ASCR1_CH29GR11_3 = 0x20000000; // Analog switch control
    static constexpr uint32_t ASCR1_CH28GR11_2 = 0x10000000; // Analog switch control
    static constexpr uint32_t ASCR1_CH27GR11_1 = 0x8000000; // Analog switch control
    static constexpr uint32_t ASCR1_VCOMP = 0x4000000; // ADC analog switch selection for internal node to comparator 1
    static constexpr uint32_t ASCR1_CH25 = 0x2000000; // Analog I/O switch control of channel CH25
    static constexpr uint32_t ASCR1_CH24 = 0x1000000; // Analog I/O switch control of channel CH24
    static constexpr uint32_t ASCR1_CH23 = 0x800000; // Analog I/O switch control of channel CH23
    static constexpr uint32_t ASCR1_CH22 = 0x400000; // Analog I/O switch control of channel CH22
    static constexpr uint32_t ASCR1_CH21GR7_4 = 0x200000; // Analog switch control
    static constexpr uint32_t ASCR1_CH20GR7_3 = 0x100000; // Analog switch control
    static constexpr uint32_t ASCR1_CH19GR7_2 = 0x80000; // Analog switch control
    static constexpr uint32_t ASCR1_CH18GR7_1 = 0x40000; // Analog switch control
    static constexpr uint32_t ASCR1_CH31GR7_1 = 0x10000; // Analog switch control
    static constexpr uint32_t ASCR1_CH15GR9_2 = 0x8000; // Analog switch control
    static constexpr uint32_t ASCR1_CH14GR9_1 = 0x4000; // Analog switch control
    static constexpr uint32_t ASCR1_CH13GR8_4 = 0x2000; // Analog switch control
    static constexpr uint32_t ASCR1_CH12GR8_3 = 0x1000; // Analog switch control
    static constexpr uint32_t ASCR1_CH11GR8_2 = 0x800; // Analog switch control
    static constexpr uint32_t ASCR1_CH10GR8_1 = 0x400; // Analog switch control
    static constexpr uint32_t ASCR1_CH9GR3_2 = 0x200; // Analog switch control
    static constexpr uint32_t ASCR1_CH8GR3_1 = 0x100; // Analog switch control
    static constexpr uint32_t ASCR1_CH7GR2_2 = 0x80; // Analog switch control
    static constexpr uint32_t ASCR1_CH6GR2_1 = 0x40; // Analog switch control
    static constexpr uint32_t ASCR1_COMP1_SW1 = 0x20; // Comparator 1 analog switch
    static constexpr uint32_t ASCR1_CH31GR11_5 = 0x10; // Analog switch control
    static constexpr uint32_t ASCR1_CH3GR1_4 = 0x8; // Analog switch control
    static constexpr uint32_t ASCR1_CH2GR1_3 = 0x4; // Analog switch control
    static constexpr uint32_t ASCR1_CH1GR1_2 = 0x2; // Analog switch control
    static constexpr uint32_t ASCR1_CH0GR1_1 = 0x1; // Analog switch control

    static constexpr uint32_t ASCR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ASCR2_GR5_4 = 0x20000000; // GR5_4 analog switch control
    static constexpr uint32_t ASCR2_GR6_4 = 0x10000000; // GR6_4 analog switch control
    static constexpr uint32_t ASCR2_GR6_3 = 0x8000000; // GR6_3 analog switch control
    static constexpr uint32_t ASCR2_GR7_7 = 0x4000000; // GR7_7 analog switch control
    static constexpr uint32_t ASCR2_GR7_6 = 0x2000000; // GR7_6 analog switch control
    static constexpr uint32_t ASCR2_GR7_5 = 0x1000000; // GR7_5 analog switch control
    static constexpr uint32_t ASCR2_GR2_5 = 0x800000; // GR2_5 analog switch control
    static constexpr uint32_t ASCR2_GR2_4 = 0x400000; // GR2_4 analog switch control
    static constexpr uint32_t ASCR2_GR2_3 = 0x200000; // GR2_3 analog switch control
    static constexpr uint32_t ASCR2_GR9_4 = 0x100000; // GR9_4 analog switch control
    static constexpr uint32_t ASCR2_GR9_3 = 0x80000; // GR9_3 analog switch control
    static constexpr uint32_t ASCR2_GR3_5 = 0x40000; // GR3_5 analog switch control
    static constexpr uint32_t ASCR2_GR3_4 = 0x20000; // GR3_4 analog switch control
    static constexpr uint32_t ASCR2_GR3_3 = 0x10000; // GR3_3 analog switch control
    static constexpr uint32_t ASCR2_GR4_3 = 0x800; // GR4_3 analog switch control
    static constexpr uint32_t ASCR2_GR4_2 = 0x400; // GR4_2 analog switch control
    static constexpr uint32_t ASCR2_GR4_1 = 0x200; // GR4_1 analog switch control
    static constexpr uint32_t ASCR2_GR5_3 = 0x100; // GR5_3 analog switch control
    static constexpr uint32_t ASCR2_GR5_2 = 0x80; // GR5_2 analog switch control
    static constexpr uint32_t ASCR2_GR5_1 = 0x40; // GR5_1 analog switch control
    static constexpr uint32_t ASCR2_GR6_2 = 0x20; // GR6_2 analog switch control
    static constexpr uint32_t ASCR2_GR6_1 = 0x10; // GR6_1 analog switch control
    static constexpr uint32_t ASCR2_GR10_4 = 0x8; // GR10_4 analog switch control
    static constexpr uint32_t ASCR2_GR10_3 = 0x4; // GR10_3 analog switch control
    static constexpr uint32_t ASCR2_GR10_2 = 0x2; // GR10_2 analog switch control
    static constexpr uint32_t ASCR2_GR10_1 = 0x1; // GR10_1 analog switch control

    static constexpr uint32_t HYSCR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> HYSCR1_PB; // Port B hysteresis control on/off
    typedef bit_field_t<0, 0xffff> HYSCR1_PA; // Port A hysteresis control on/off

    static constexpr uint32_t HYSCR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> HYSCR2_PD; // Port D hysteresis control on/off
    typedef bit_field_t<0, 0xffff> HYSCR2_PC; // Port C hysteresis control on/off

    static constexpr uint32_t HYSCR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xffff> HYSCR3_PF; // Port F hysteresis control on/off
    typedef bit_field_t<0, 0xffff> HYSCR3_PE; // Port E hysteresis control on/off

    static constexpr uint32_t HYSCR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> HYSCR4_PG; // Port G hysteresis control on/off
};

template<>
struct peripheral_t<STM32L100, RI>
{
    using T = stm32l100_ri_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L151, RI>
{
    using T = stm32l100_ri_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L152, RI>
{
    using T = stm32l100_ri_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L162, RI>
{
    using T = stm32l100_ri_t;
    static T& V;
};

using ri_t = peripheral_t<svd, RI>;

template<int INST> struct ri_traits {};
