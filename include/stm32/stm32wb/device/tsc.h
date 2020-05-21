#pragma once

////
//
//      STM32WB TSC peripherals
//
////

////
//
//      Touch sensing controller
//
////

struct stm32wb30_cm4_tsc_t
{
    volatile uint32_t CR;     // [read-write] control register
    volatile uint32_t IER;    // [read-write] interrupt enable register
    volatile uint32_t ICR;    // [read-write] interrupt clear register
    volatile uint32_t ISR;    // [read-write] interrupt status register
    volatile uint32_t IOHCR;  // [read-write] I/O hysteresis control register
    reserved_t<0x1> _0x18;
    volatile uint32_t IOASCR; // [read-write] I/O analog switch control register
    reserved_t<0x1> _0x20;
    volatile uint32_t IOSCR;  // [read-write] I/O sampling control register
    reserved_t<0x1> _0x28;
    volatile uint32_t IOCCR;  // [read-write] I/O channel control register
    reserved_t<0x1> _0x30;
    volatile uint32_t IOGCSR; // I/O group control status register
    volatile uint32_t IOG1CR; // [read-only] I/O group x counter register
    volatile uint32_t IOG2CR; // [read-only] I/O group x counter register
    volatile uint32_t IOG3CR; // [read-only] I/O group x counter register
    volatile uint32_t IOG4CR; // [read-only] I/O group x counter register
    volatile uint32_t IOG5CR; // [read-only] I/O group x counter register
    volatile uint32_t IOG6CR; // [read-only] I/O group x counter register
    volatile uint32_t IOG7CR; // [read-only] I/O group x counter register

    static constexpr uint32_t CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CR_CTPH =          // Charge transfer pulse high
        bit_field_t<28, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CR_CTPL =          // Charge transfer pulse low
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CR_SSD =           // Spread spectrum deviation
        bit_field_t<17, 0x7f>::value<X>();
    static constexpr uint32_t CR_SSE = 0x10000;  // Spread spectrum enable
    static constexpr uint32_t CR_SSPSC = 0x8000; // Spread spectrum prescaler
    template<uint32_t X>
    static constexpr uint32_t CR_PGPSC =         // pulse generator prescaler
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CR_MCV =           // Max count value
        bit_field_t<5, 0x7>::value<X>();
    static constexpr uint32_t CR_IODEF = 0x10;   // I/O Default mode
    static constexpr uint32_t CR_SYNCPOL = 0x8;  // Synchronization pin polarity
    static constexpr uint32_t CR_AM = 0x4;       // Acquisition mode
    static constexpr uint32_t CR_START = 0x2;    // Start a new acquisition
    static constexpr uint32_t CR_TSCE = 0x1;     // Touch sensing controller enable

    static constexpr uint32_t IER_RESET_VALUE = 0x0;
    static constexpr uint32_t IER_MCEIE = 0x2; // Max count error interrupt enable
    static constexpr uint32_t IER_EOAIE = 0x1; // End of acquisition interrupt enable

    static constexpr uint32_t ICR_RESET_VALUE = 0x0;
    static constexpr uint32_t ICR_MCEIC = 0x2; // Max count error interrupt clear
    static constexpr uint32_t ICR_EOAIC = 0x1; // End of acquisition interrupt clear

    static constexpr uint32_t ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t ISR_MCEF = 0x2; // Max count error flag
    static constexpr uint32_t ISR_EOAF = 0x1; // End of acquisition flag

    static constexpr uint32_t IOHCR_RESET_VALUE = 0xffffffff;
    static constexpr uint32_t IOHCR_G7_IO4 = 0x8000000; // G7_IO4
    static constexpr uint32_t IOHCR_G7_IO3 = 0x4000000; // G7_IO3
    static constexpr uint32_t IOHCR_G7_IO2 = 0x2000000; // G7_IO2
    static constexpr uint32_t IOHCR_G7_IO1 = 0x1000000; // G7_IO1
    static constexpr uint32_t IOHCR_G6_IO4 = 0x800000;  // G6_IO4
    static constexpr uint32_t IOHCR_G6_IO3 = 0x400000;  // G6_IO3
    static constexpr uint32_t IOHCR_G6_IO2 = 0x200000;  // G6_IO2
    static constexpr uint32_t IOHCR_G6_IO1 = 0x100000;  // G6_IO1
    static constexpr uint32_t IOHCR_G5_IO4 = 0x80000;   // G5_IO4
    static constexpr uint32_t IOHCR_G5_IO3 = 0x40000;   // G5_IO3
    static constexpr uint32_t IOHCR_G5_IO2 = 0x20000;   // G5_IO2
    static constexpr uint32_t IOHCR_G5_IO1 = 0x10000;   // G5_IO1
    static constexpr uint32_t IOHCR_G4_IO4 = 0x8000;    // G4_IO4
    static constexpr uint32_t IOHCR_G4_IO3 = 0x4000;    // G4_IO3
    static constexpr uint32_t IOHCR_G4_IO2 = 0x2000;    // G4_IO2
    static constexpr uint32_t IOHCR_G4_IO1 = 0x1000;    // G4_IO1
    static constexpr uint32_t IOHCR_G3_IO4 = 0x800;     // G3_IO4
    static constexpr uint32_t IOHCR_G3_IO3 = 0x400;     // G3_IO3
    static constexpr uint32_t IOHCR_G3_IO2 = 0x200;     // G3_IO2
    static constexpr uint32_t IOHCR_G3_IO1 = 0x100;     // G3_IO1
    static constexpr uint32_t IOHCR_G2_IO4 = 0x80;      // G2_IO4
    static constexpr uint32_t IOHCR_G2_IO3 = 0x40;      // G2_IO3
    static constexpr uint32_t IOHCR_G2_IO2 = 0x20;      // G2_IO2
    static constexpr uint32_t IOHCR_G2_IO1 = 0x10;      // G2_IO1
    static constexpr uint32_t IOHCR_G1_IO4 = 0x8;       // G1_IO4
    static constexpr uint32_t IOHCR_G1_IO3 = 0x4;       // G1_IO3
    static constexpr uint32_t IOHCR_G1_IO2 = 0x2;       // G1_IO2
    static constexpr uint32_t IOHCR_G1_IO1 = 0x1;       // G1_IO1

    static constexpr uint32_t IOASCR_RESET_VALUE = 0x0;
    static constexpr uint32_t IOASCR_G7_IO4 = 0x8000000; // G7_IO4
    static constexpr uint32_t IOASCR_G7_IO3 = 0x4000000; // G7_IO3
    static constexpr uint32_t IOASCR_G7_IO2 = 0x2000000; // G7_IO2
    static constexpr uint32_t IOASCR_G7_IO1 = 0x1000000; // G7_IO1
    static constexpr uint32_t IOASCR_G6_IO4 = 0x800000;  // G6_IO4
    static constexpr uint32_t IOASCR_G6_IO3 = 0x400000;  // G6_IO3
    static constexpr uint32_t IOASCR_G6_IO2 = 0x200000;  // G6_IO2
    static constexpr uint32_t IOASCR_G6_IO1 = 0x100000;  // G6_IO1
    static constexpr uint32_t IOASCR_G5_IO4 = 0x80000;   // G5_IO4
    static constexpr uint32_t IOASCR_G5_IO3 = 0x40000;   // G5_IO3
    static constexpr uint32_t IOASCR_G5_IO2 = 0x20000;   // G5_IO2
    static constexpr uint32_t IOASCR_G5_IO1 = 0x10000;   // G5_IO1
    static constexpr uint32_t IOASCR_G4_IO4 = 0x8000;    // G4_IO4
    static constexpr uint32_t IOASCR_G4_IO3 = 0x4000;    // G4_IO3
    static constexpr uint32_t IOASCR_G4_IO2 = 0x2000;    // G4_IO2
    static constexpr uint32_t IOASCR_G4_IO1 = 0x1000;    // G4_IO1
    static constexpr uint32_t IOASCR_G3_IO4 = 0x800;     // G3_IO4
    static constexpr uint32_t IOASCR_G3_IO3 = 0x400;     // G3_IO3
    static constexpr uint32_t IOASCR_G3_IO2 = 0x200;     // G3_IO2
    static constexpr uint32_t IOASCR_G3_IO1 = 0x100;     // G3_IO1
    static constexpr uint32_t IOASCR_G2_IO4 = 0x80;      // G2_IO4
    static constexpr uint32_t IOASCR_G2_IO3 = 0x40;      // G2_IO3
    static constexpr uint32_t IOASCR_G2_IO2 = 0x20;      // G2_IO2
    static constexpr uint32_t IOASCR_G2_IO1 = 0x10;      // G2_IO1
    static constexpr uint32_t IOASCR_G1_IO4 = 0x8;       // G1_IO4
    static constexpr uint32_t IOASCR_G1_IO3 = 0x4;       // G1_IO3
    static constexpr uint32_t IOASCR_G1_IO2 = 0x2;       // G1_IO2
    static constexpr uint32_t IOASCR_G1_IO1 = 0x1;       // G1_IO1

    static constexpr uint32_t IOSCR_RESET_VALUE = 0x0;
    static constexpr uint32_t IOSCR_G7_IO4 = 0x8000000; // G7_IO4
    static constexpr uint32_t IOSCR_G7_IO3 = 0x4000000; // G7_IO3
    static constexpr uint32_t IOSCR_G7_IO2 = 0x2000000; // G7_IO2
    static constexpr uint32_t IOSCR_G7_IO1 = 0x1000000; // G7_IO1
    static constexpr uint32_t IOSCR_G6_IO4 = 0x800000;  // G6_IO4
    static constexpr uint32_t IOSCR_G6_IO3 = 0x400000;  // G6_IO3
    static constexpr uint32_t IOSCR_G6_IO2 = 0x200000;  // G6_IO2
    static constexpr uint32_t IOSCR_G6_IO1 = 0x100000;  // G6_IO1
    static constexpr uint32_t IOSCR_G5_IO4 = 0x80000;   // G5_IO4
    static constexpr uint32_t IOSCR_G5_IO3 = 0x40000;   // G5_IO3
    static constexpr uint32_t IOSCR_G5_IO2 = 0x20000;   // G5_IO2
    static constexpr uint32_t IOSCR_G5_IO1 = 0x10000;   // G5_IO1
    static constexpr uint32_t IOSCR_G4_IO4 = 0x8000;    // G4_IO4
    static constexpr uint32_t IOSCR_G4_IO3 = 0x4000;    // G4_IO3
    static constexpr uint32_t IOSCR_G4_IO2 = 0x2000;    // G4_IO2
    static constexpr uint32_t IOSCR_G4_IO1 = 0x1000;    // G4_IO1
    static constexpr uint32_t IOSCR_G3_IO4 = 0x800;     // G3_IO4
    static constexpr uint32_t IOSCR_G3_IO3 = 0x400;     // G3_IO3
    static constexpr uint32_t IOSCR_G3_IO2 = 0x200;     // G3_IO2
    static constexpr uint32_t IOSCR_G3_IO1 = 0x100;     // G3_IO1
    static constexpr uint32_t IOSCR_G2_IO4 = 0x80;      // G2_IO4
    static constexpr uint32_t IOSCR_G2_IO3 = 0x40;      // G2_IO3
    static constexpr uint32_t IOSCR_G2_IO2 = 0x20;      // G2_IO2
    static constexpr uint32_t IOSCR_G2_IO1 = 0x10;      // G2_IO1
    static constexpr uint32_t IOSCR_G1_IO4 = 0x8;       // G1_IO4
    static constexpr uint32_t IOSCR_G1_IO3 = 0x4;       // G1_IO3
    static constexpr uint32_t IOSCR_G1_IO2 = 0x2;       // G1_IO2
    static constexpr uint32_t IOSCR_G1_IO1 = 0x1;       // G1_IO1

    static constexpr uint32_t IOCCR_RESET_VALUE = 0x0;
    static constexpr uint32_t IOCCR_G7_IO4 = 0x8000000; // G7_IO4
    static constexpr uint32_t IOCCR_G7_IO3 = 0x4000000; // G7_IO3
    static constexpr uint32_t IOCCR_G7_IO2 = 0x2000000; // G7_IO2
    static constexpr uint32_t IOCCR_G7_IO1 = 0x1000000; // G7_IO1
    static constexpr uint32_t IOCCR_G6_IO4 = 0x800000;  // G6_IO4
    static constexpr uint32_t IOCCR_G6_IO3 = 0x400000;  // G6_IO3
    static constexpr uint32_t IOCCR_G6_IO2 = 0x200000;  // G6_IO2
    static constexpr uint32_t IOCCR_G6_IO1 = 0x100000;  // G6_IO1
    static constexpr uint32_t IOCCR_G5_IO4 = 0x80000;   // G5_IO4
    static constexpr uint32_t IOCCR_G5_IO3 = 0x40000;   // G5_IO3
    static constexpr uint32_t IOCCR_G5_IO2 = 0x20000;   // G5_IO2
    static constexpr uint32_t IOCCR_G5_IO1 = 0x10000;   // G5_IO1
    static constexpr uint32_t IOCCR_G4_IO4 = 0x8000;    // G4_IO4
    static constexpr uint32_t IOCCR_G4_IO3 = 0x4000;    // G4_IO3
    static constexpr uint32_t IOCCR_G4_IO2 = 0x2000;    // G4_IO2
    static constexpr uint32_t IOCCR_G4_IO1 = 0x1000;    // G4_IO1
    static constexpr uint32_t IOCCR_G3_IO4 = 0x800;     // G3_IO4
    static constexpr uint32_t IOCCR_G3_IO3 = 0x400;     // G3_IO3
    static constexpr uint32_t IOCCR_G3_IO2 = 0x200;     // G3_IO2
    static constexpr uint32_t IOCCR_G3_IO1 = 0x100;     // G3_IO1
    static constexpr uint32_t IOCCR_G2_IO4 = 0x80;      // G2_IO4
    static constexpr uint32_t IOCCR_G2_IO3 = 0x40;      // G2_IO3
    static constexpr uint32_t IOCCR_G2_IO2 = 0x20;      // G2_IO2
    static constexpr uint32_t IOCCR_G2_IO1 = 0x10;      // G2_IO1
    static constexpr uint32_t IOCCR_G1_IO4 = 0x8;       // G1_IO4
    static constexpr uint32_t IOCCR_G1_IO3 = 0x4;       // G1_IO3
    static constexpr uint32_t IOCCR_G1_IO2 = 0x2;       // G1_IO2
    static constexpr uint32_t IOCCR_G1_IO1 = 0x1;       // G1_IO1

    static constexpr uint32_t IOGCSR_RESET_VALUE = 0x0;
    static constexpr uint32_t IOGCSR_G7S = 0x400000; // Analog I/O group x status
    static constexpr uint32_t IOGCSR_G6S = 0x200000; // Analog I/O group x status
    static constexpr uint32_t IOGCSR_G5S = 0x100000; // Analog I/O group x status
    static constexpr uint32_t IOGCSR_G4S = 0x80000;  // Analog I/O group x status
    static constexpr uint32_t IOGCSR_G3S = 0x40000;  // Analog I/O group x status
    static constexpr uint32_t IOGCSR_G2S = 0x20000;  // Analog I/O group x status
    static constexpr uint32_t IOGCSR_G1S = 0x10000;  // Analog I/O group x status
    static constexpr uint32_t IOGCSR_G7E = 0x40;     // Analog I/O group x enable
    static constexpr uint32_t IOGCSR_G6E = 0x20;     // Analog I/O group x enable
    static constexpr uint32_t IOGCSR_G5E = 0x10;     // Analog I/O group x enable
    static constexpr uint32_t IOGCSR_G4E = 0x8;      // Analog I/O group x enable
    static constexpr uint32_t IOGCSR_G3E = 0x4;      // Analog I/O group x enable
    static constexpr uint32_t IOGCSR_G2E = 0x2;      // Analog I/O group x enable
    static constexpr uint32_t IOGCSR_G1E = 0x1;      // Analog I/O group x enable

    static constexpr uint32_t IOG1CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IOG1CR_CNT =   // Counter value
        bit_field_t<0, 0x3fff>::value<X>();

    static constexpr uint32_t IOG2CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IOG2CR_CNT =   // Counter value
        bit_field_t<0, 0x3fff>::value<X>();

    static constexpr uint32_t IOG3CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IOG3CR_CNT =   // Counter value
        bit_field_t<0, 0x3fff>::value<X>();

    static constexpr uint32_t IOG4CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IOG4CR_CNT =   // Counter value
        bit_field_t<0, 0x3fff>::value<X>();

    static constexpr uint32_t IOG5CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IOG5CR_CNT =   // Counter value
        bit_field_t<0, 0x3fff>::value<X>();

    static constexpr uint32_t IOG6CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IOG6CR_CNT =   // Counter value
        bit_field_t<0, 0x3fff>::value<X>();

    static constexpr uint32_t IOG7CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IOG7CR_CNT =   // Counter value
        bit_field_t<0, 0x3fff>::value<X>();
};


template<>
struct peripheral_t<STM32WB30_CM4, TSC>
{
    typedef stm32wb30_cm4_tsc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32WB35_CM4, TSC>
{
    typedef stm32wb30_cm4_tsc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32WB55_CM4, TSC>
{
    typedef stm32wb30_cm4_tsc_t T;
    static T& V;
};

using tsc_t = peripheral_t<mcu_svd, TSC>;

