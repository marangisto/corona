#pragma once

////
//
//      STM32L4+ OCTOSPIM peripherals
//
///

// OCTOSPIM: OctoSPI IO Manager

struct stm32l4p5_octospim_t
{
    reserved_t<0x1> _0x0;
    volatile uint32_t P1CR; // OctoSPI IO Manager Port 1 Configuration Register
    volatile uint32_t P2CR; // OctoSPI IO Manager Port 2 Configuration Register


    static constexpr uint32_t P1CR_RESET_VALUE = 0x3010111; // Reset value
    static constexpr uint32_t P1CR_CLKEN = 0x1; // CLK/CLK Enable for Port
    static constexpr uint32_t P1CR_CLKSRC = 0x2; // CLK/CLK Source for Port
    static constexpr uint32_t P1CR_DQSEN = 0x10; // DQS Enable for Port
    static constexpr uint32_t P1CR_DQSSRC = 0x20; // DQS Source for Port
    static constexpr uint32_t P1CR_NCSEN = 0x100; // CS Enable for Port
    static constexpr uint32_t P1CR_NCSSRC = 0x200; // CS Source for Port
    static constexpr uint32_t P1CR_IOLEN = 0x10000; // Enable for Port
    typedef bit_field_t<17, 0x3> P1CR_IOLSRC; // Source for Port
    static constexpr uint32_t P1CR_IOHEN = 0x1000000; // Enable for Port n
    typedef bit_field_t<25, 0x3> P1CR_IOHSRC; // Source for Port

    static constexpr uint32_t P2CR_RESET_VALUE = 0x7050333; // Reset value
    static constexpr uint32_t P2CR_CLKEN = 0x1; // CLK/CLK Enable for Port
    static constexpr uint32_t P2CR_CLKSRC = 0x2; // CLK/CLK Source for Port
    static constexpr uint32_t P2CR_DQSEN = 0x10; // DQS Enable for Port
    static constexpr uint32_t P2CR_DQSSRC = 0x20; // DQS Source for Port
    static constexpr uint32_t P2CR_NCSEN = 0x100; // CS Enable for Port
    static constexpr uint32_t P2CR_NCSSRC = 0x200; // CS Source for Port
    static constexpr uint32_t P2CR_IOLEN = 0x10000; // Enable for Port
    typedef bit_field_t<17, 0x3> P2CR_IOLSRC; // Source for Port
    static constexpr uint32_t P2CR_IOHEN = 0x1000000; // Enable for Port n
    typedef bit_field_t<25, 0x3> P2CR_IOHSRC; // Source for Port
};

template<>
struct peripheral_t<STM32L4P5, OCTOSPIM>
{
    using T = stm32l4p5_octospim_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4Q5, OCTOSPIM>
{
    using T = stm32l4p5_octospim_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R5, OCTOSPIM>
{
    using T = stm32l4p5_octospim_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R7, OCTOSPIM>
{
    using T = stm32l4p5_octospim_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R9, OCTOSPIM>
{
    using T = stm32l4p5_octospim_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S5, OCTOSPIM>
{
    using T = stm32l4p5_octospim_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S7, OCTOSPIM>
{
    using T = stm32l4p5_octospim_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S9, OCTOSPIM>
{
    using T = stm32l4p5_octospim_t;
    static T& V;
};

using octospim_t = peripheral_t<svd, OCTOSPIM>;

template<int INST> struct octospim_traits {};

template<> struct octospim_traits<0>
{
    using octospim = octospim_t;
    static constexpr signal_t P1_CLK = OCTOSPIM_P1_CLK;
    static constexpr signal_t P1_DQS = OCTOSPIM_P1_DQS;
    static constexpr signal_t P1_IO0 = OCTOSPIM_P1_IO0;
    static constexpr signal_t P1_IO1 = OCTOSPIM_P1_IO1;
    static constexpr signal_t P1_IO2 = OCTOSPIM_P1_IO2;
    static constexpr signal_t P1_IO3 = OCTOSPIM_P1_IO3;
    static constexpr signal_t P1_IO4 = OCTOSPIM_P1_IO4;
    static constexpr signal_t P1_IO5 = OCTOSPIM_P1_IO5;
    static constexpr signal_t P1_IO6 = OCTOSPIM_P1_IO6;
    static constexpr signal_t P1_IO7 = OCTOSPIM_P1_IO7;
    static constexpr signal_t P1_NCLK = OCTOSPIM_P1_NCLK;
    static constexpr signal_t P1_NCS = OCTOSPIM_P1_NCS;
    static constexpr signal_t P2_CLK = OCTOSPIM_P2_CLK;
    static constexpr signal_t P2_DQS = OCTOSPIM_P2_DQS;
    static constexpr signal_t P2_IO0 = OCTOSPIM_P2_IO0;
    static constexpr signal_t P2_IO1 = OCTOSPIM_P2_IO1;
    static constexpr signal_t P2_IO2 = OCTOSPIM_P2_IO2;
    static constexpr signal_t P2_IO3 = OCTOSPIM_P2_IO3;
    static constexpr signal_t P2_IO4 = OCTOSPIM_P2_IO4;
    static constexpr signal_t P2_IO5 = OCTOSPIM_P2_IO5;
    static constexpr signal_t P2_IO6 = OCTOSPIM_P2_IO6;
    static constexpr signal_t P2_IO7 = OCTOSPIM_P2_IO7;
    static constexpr signal_t P2_NCLK = OCTOSPIM_P2_NCLK;
    static constexpr signal_t P2_NCS = OCTOSPIM_P2_NCS;
};
