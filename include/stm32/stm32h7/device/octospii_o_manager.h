#pragma once

////
//
//      STM32H7 OCTOSPII_O_MANAGER peripherals
//
///

// OCTOSPII_O_MANAGER: OctoSPI IO Manager

struct stm32h7a3x_octospii_o_manager_t
{
    volatile uint32_t CR; // OctoSPI IO Manager Control Register
    volatile uint32_t P1CR; // OctoSPI IO Manager Port 1 configuration register
    volatile uint32_t P2CR; // OctoSPI IO Manager Port 2 configuration register

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_MUXEN = 0x1; // Multiplexed mode Enable
    typedef bit_field_t<16, 0xff> CR_REQ2ACK_TIME; // REQ to ACK Time

    static constexpr uint32_t P1CR_RESET_VALUE = 0x3010111; // Reset value
    static constexpr uint32_t P1CR_CLKEN = 0x1; // CLK/CLKn Enable for Port n
    static constexpr uint32_t P1CR_CLKSRC = 0x2; // CLK/CLKn Source for Port n
    static constexpr uint32_t P1CR_DQSEN = 0x10; // DQSEN
    static constexpr uint32_t P1CR_DQSSRC = 0x20; // DQSSRC
    static constexpr uint32_t P1CR_NCSEN = 0x100; // NCSEN
    static constexpr uint32_t P1CR_NCSSRC = 0x200; // NCSSRC
    static constexpr uint32_t P1CR_IOLEN = 0x10000; // IOLEN
    typedef bit_field_t<17, 0x3> P1CR_IOLSRC; // IOLSRC
    static constexpr uint32_t P1CR_IOHEN = 0x1000000; // IOHEN
    typedef bit_field_t<25, 0x3> P1CR_IOHSRC; // IOHSRC

    static constexpr uint32_t P2CR_RESET_VALUE = 0x7050333; // Reset value
    static constexpr uint32_t P2CR_CLKEN = 0x1; // CLKEN
    static constexpr uint32_t P2CR_CLKSRC = 0x2; // CLKSRC
    static constexpr uint32_t P2CR_DQSEN = 0x10; // DQSEN
    static constexpr uint32_t P2CR_DQSSRC = 0x20; // DQSSRC
    static constexpr uint32_t P2CR_NCSEN = 0x100; // NCSEN
    static constexpr uint32_t P2CR_NCSSRC = 0x200; // NCSSRC
    static constexpr uint32_t P2CR_IOLEN = 0x10000; // IOLEN
    typedef bit_field_t<17, 0x3> P2CR_IOLSRC; // IOLSRC
    static constexpr uint32_t P2CR_IOHEN = 0x1000000; // IOHEN
    typedef bit_field_t<25, 0x3> P2CR_IOHSRC; // IOHSRC
};

template<>
struct peripheral_t<STM32H7A3x, OCTOSPII_O_MANAGER>
{
    using T = stm32h7a3x_octospii_o_manager_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, OCTOSPII_O_MANAGER>
{
    using T = stm32h7a3x_octospii_o_manager_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, OCTOSPII_O_MANAGER>
{
    using T = stm32h7a3x_octospii_o_manager_t;
    static T& V;
};

using octospii_o_manager_t = peripheral_t<svd, OCTOSPII_O_MANAGER>;

template<int INST> struct octospii_o_manager_traits {};
