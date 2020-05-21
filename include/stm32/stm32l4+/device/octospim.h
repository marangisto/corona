#pragma once

////
//
//      STM32L4+ OCTOSPIM peripherals
//
////

////
//
//      OctoSPI IO Manager
//
////

struct stm32l4p5_octospim_t
{
    volatile uint32_t P1CR; // [read-write] OctoSPI IO Manager Port 1 Configuration Register
    volatile uint32_t P2CR; // [read-write] OctoSPI IO Manager Port 2 Configuration Register

    static constexpr uint32_t P1CR_RESET_VALUE = 0x3010111;
    static constexpr uint32_t P1CR_CLKEN = 0x1;       // CLK/CLK Enable for Port
    static constexpr uint32_t P1CR_CLKSRC = 0x2;      // CLK/CLK Source for Port
    static constexpr uint32_t P1CR_DQSEN = 0x10;      // DQS Enable for Port
    static constexpr uint32_t P1CR_DQSSRC = 0x20;     // DQS Source for Port
    static constexpr uint32_t P1CR_NCSEN = 0x100;     // CS Enable for Port
    static constexpr uint32_t P1CR_NCSSRC = 0x200;    // CS Source for Port
    static constexpr uint32_t P1CR_IOLEN = 0x10000;   // Enable for Port
    template<uint32_t X>
    static constexpr uint32_t P1CR_IOLSRC =           // Source for Port
        bit_field_t<17, 0x3>::value<X>();
    static constexpr uint32_t P1CR_IOHEN = 0x1000000; // Enable for Port n
    template<uint32_t X>
    static constexpr uint32_t P1CR_IOHSRC =           // Source for Port
        bit_field_t<25, 0x3>::value<X>();

    static constexpr uint32_t P2CR_RESET_VALUE = 0x7050333;
    static constexpr uint32_t P2CR_CLKEN = 0x1;       // CLK/CLK Enable for Port
    static constexpr uint32_t P2CR_CLKSRC = 0x2;      // CLK/CLK Source for Port
    static constexpr uint32_t P2CR_DQSEN = 0x10;      // DQS Enable for Port
    static constexpr uint32_t P2CR_DQSSRC = 0x20;     // DQS Source for Port
    static constexpr uint32_t P2CR_NCSEN = 0x100;     // CS Enable for Port
    static constexpr uint32_t P2CR_NCSSRC = 0x200;    // CS Source for Port
    static constexpr uint32_t P2CR_IOLEN = 0x10000;   // Enable for Port
    template<uint32_t X>
    static constexpr uint32_t P2CR_IOLSRC =           // Source for Port
        bit_field_t<17, 0x3>::value<X>();
    static constexpr uint32_t P2CR_IOHEN = 0x1000000; // Enable for Port n
    template<uint32_t X>
    static constexpr uint32_t P2CR_IOHSRC =           // Source for Port
        bit_field_t<25, 0x3>::value<X>();
};


template<>
struct peripheral_t<STM32L4P5, OCTOSPIM>
{
    typedef stm32l4p5_octospim_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4Q5, OCTOSPIM>
{
    typedef stm32l4p5_octospim_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R5, OCTOSPIM>
{
    typedef stm32l4p5_octospim_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R7, OCTOSPIM>
{
    typedef stm32l4p5_octospim_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R9, OCTOSPIM>
{
    typedef stm32l4p5_octospim_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S5, OCTOSPIM>
{
    typedef stm32l4p5_octospim_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S7, OCTOSPIM>
{
    typedef stm32l4p5_octospim_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S9, OCTOSPIM>
{
    typedef stm32l4p5_octospim_t T;
    static T& V;
};

using octospim_t = peripheral_t<mcu_svd, OCTOSPIM>;

