#pragma once

////
//
//      STM32F3 TSC peripherals
//
///

// TSC: Touch sensing controller

struct stm32f301_tsc_t
{
    volatile uint32_t CR; // control register
    volatile uint32_t IER; // interrupt enable register
    volatile uint32_t ICR; // interrupt clear register
    volatile uint32_t ISR; // interrupt status register
    volatile uint32_t IOHCR; // I/O hysteresis control register
    reserved_t<0x1> _0x14;
    volatile uint32_t IOASCR; // I/O analog switch control register
    reserved_t<0x1> _0x1c;
    volatile uint32_t IOSCR; // I/O sampling control register
    reserved_t<0x1> _0x24;
    volatile uint32_t IOCCR; // I/O channel control register
    reserved_t<0x1> _0x2c;
    volatile uint32_t IOGCSR; // I/O group control status register
    volatile uint32_t IOG1CR; // I/O group x counter register
    volatile uint32_t IOG2CR; // I/O group x counter register
    volatile uint32_t IOG3CR; // I/O group x counter register
    volatile uint32_t IOG4CR; // I/O group x counter register
    volatile uint32_t IOG5CR; // I/O group x counter register
    volatile uint32_t IOG6CR; // I/O group x counter register

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<28, 0xf> CR_CTPH; // Charge transfer pulse high
    typedef bit_field_t<24, 0xf> CR_CTPL; // Charge transfer pulse low
    typedef bit_field_t<17, 0x7f> CR_SSD; // Spread spectrum deviation
    static constexpr uint32_t CR_SSE = 0x10000; // Spread spectrum enable
    static constexpr uint32_t CR_SSPSC = 0x8000; // Spread spectrum prescaler
    typedef bit_field_t<12, 0x7> CR_PGPSC; // pulse generator prescaler
    typedef bit_field_t<5, 0x7> CR_MCV; // Max count value
    static constexpr uint32_t CR_IODEF = 0x10; // I/O Default mode
    static constexpr uint32_t CR_SYNCPOL = 0x8; // Synchronization pin polarity
    static constexpr uint32_t CR_AM = 0x4; // Acquisition mode
    static constexpr uint32_t CR_START = 0x2; // Start a new acquisition
    static constexpr uint32_t CR_TSCE = 0x1; // Touch sensing controller enable

    static constexpr uint32_t IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IER_MCEIE = 0x2; // Max count error interrupt enable
    static constexpr uint32_t IER_EOAIE = 0x1; // End of acquisition interrupt enable

    static constexpr uint32_t ICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ICR_MCEIC = 0x2; // Max count error interrupt clear
    static constexpr uint32_t ICR_EOAIC = 0x1; // End of acquisition interrupt clear

    static constexpr uint32_t ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ISR_MCEF = 0x2; // Max count error flag
    static constexpr uint32_t ISR_EOAF = 0x1; // End of acquisition flag

    static constexpr uint32_t IOHCR_RESET_VALUE = 0xffffffff; // Reset value
    static constexpr uint32_t IOHCR_G1_IO1 = 0x1; // G1_IO1 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G1_IO2 = 0x2; // G1_IO2 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G1_IO3 = 0x4; // G1_IO3 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G1_IO4 = 0x8; // G1_IO4 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G2_IO1 = 0x10; // G2_IO1 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G2_IO2 = 0x20; // G2_IO2 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G2_IO3 = 0x40; // G2_IO3 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G2_IO4 = 0x80; // G2_IO4 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G3_IO1 = 0x100; // G3_IO1 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G3_IO2 = 0x200; // G3_IO2 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G3_IO3 = 0x400; // G3_IO3 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G3_IO4 = 0x800; // G3_IO4 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G4_IO1 = 0x1000; // G4_IO1 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G4_IO2 = 0x2000; // G4_IO2 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G4_IO3 = 0x4000; // G4_IO3 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G4_IO4 = 0x8000; // G4_IO4 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G5_IO1 = 0x10000; // G5_IO1 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G5_IO2 = 0x20000; // G5_IO2 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G5_IO3 = 0x40000; // G5_IO3 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G5_IO4 = 0x80000; // G5_IO4 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G6_IO1 = 0x100000; // G6_IO1 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G6_IO2 = 0x200000; // G6_IO2 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G6_IO3 = 0x400000; // G6_IO3 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G6_IO4 = 0x800000; // G6_IO4 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G7_IO1 = 0x1000000; // G7_IO1 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G7_IO2 = 0x2000000; // G7_IO2 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G7_IO3 = 0x4000000; // G7_IO3 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G7_IO4 = 0x8000000; // G7_IO4 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G8_IO1 = 0x10000000; // G8_IO1 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G8_IO2 = 0x20000000; // G8_IO2 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G8_IO3 = 0x40000000; // G8_IO3 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G8_IO4 = 0x80000000; // G8_IO4 Schmitt trigger hysteresis mode


    static constexpr uint32_t IOASCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IOASCR_G1_IO1 = 0x1; // G1_IO1 analog switch enable
    static constexpr uint32_t IOASCR_G1_IO2 = 0x2; // G1_IO2 analog switch enable
    static constexpr uint32_t IOASCR_G1_IO3 = 0x4; // G1_IO3 analog switch enable
    static constexpr uint32_t IOASCR_G1_IO4 = 0x8; // G1_IO4 analog switch enable
    static constexpr uint32_t IOASCR_G2_IO1 = 0x10; // G2_IO1 analog switch enable
    static constexpr uint32_t IOASCR_G2_IO2 = 0x20; // G2_IO2 analog switch enable
    static constexpr uint32_t IOASCR_G2_IO3 = 0x40; // G2_IO3 analog switch enable
    static constexpr uint32_t IOASCR_G2_IO4 = 0x80; // G2_IO4 analog switch enable
    static constexpr uint32_t IOASCR_G3_IO1 = 0x100; // G3_IO1 analog switch enable
    static constexpr uint32_t IOASCR_G3_IO2 = 0x200; // G3_IO2 analog switch enable
    static constexpr uint32_t IOASCR_G3_IO3 = 0x400; // G3_IO3 analog switch enable
    static constexpr uint32_t IOASCR_G3_IO4 = 0x800; // G3_IO4 analog switch enable
    static constexpr uint32_t IOASCR_G4_IO1 = 0x1000; // G4_IO1 analog switch enable
    static constexpr uint32_t IOASCR_G4_IO2 = 0x2000; // G4_IO2 analog switch enable
    static constexpr uint32_t IOASCR_G4_IO3 = 0x4000; // G4_IO3 analog switch enable
    static constexpr uint32_t IOASCR_G4_IO4 = 0x8000; // G4_IO4 analog switch enable
    static constexpr uint32_t IOASCR_G5_IO1 = 0x10000; // G5_IO1 analog switch enable
    static constexpr uint32_t IOASCR_G5_IO2 = 0x20000; // G5_IO2 analog switch enable
    static constexpr uint32_t IOASCR_G5_IO3 = 0x40000; // G5_IO3 analog switch enable
    static constexpr uint32_t IOASCR_G5_IO4 = 0x80000; // G5_IO4 analog switch enable
    static constexpr uint32_t IOASCR_G6_IO1 = 0x100000; // G6_IO1 analog switch enable
    static constexpr uint32_t IOASCR_G6_IO2 = 0x200000; // G6_IO2 analog switch enable
    static constexpr uint32_t IOASCR_G6_IO3 = 0x400000; // G6_IO3 analog switch enable
    static constexpr uint32_t IOASCR_G6_IO4 = 0x800000; // G6_IO4 analog switch enable
    static constexpr uint32_t IOASCR_G7_IO1 = 0x1000000; // G7_IO1 analog switch enable
    static constexpr uint32_t IOASCR_G7_IO2 = 0x2000000; // G7_IO2 analog switch enable
    static constexpr uint32_t IOASCR_G7_IO3 = 0x4000000; // G7_IO3 analog switch enable
    static constexpr uint32_t IOASCR_G7_IO4 = 0x8000000; // G7_IO4 analog switch enable
    static constexpr uint32_t IOASCR_G8_IO1 = 0x10000000; // G8_IO1 analog switch enable
    static constexpr uint32_t IOASCR_G8_IO2 = 0x20000000; // G8_IO2 analog switch enable
    static constexpr uint32_t IOASCR_G8_IO3 = 0x40000000; // G8_IO3 analog switch enable
    static constexpr uint32_t IOASCR_G8_IO4 = 0x80000000; // G8_IO4 analog switch enable


    static constexpr uint32_t IOSCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IOSCR_G1_IO1 = 0x1; // G1_IO1 sampling mode
    static constexpr uint32_t IOSCR_G1_IO2 = 0x2; // G1_IO2 sampling mode
    static constexpr uint32_t IOSCR_G1_IO3 = 0x4; // G1_IO3 sampling mode
    static constexpr uint32_t IOSCR_G1_IO4 = 0x8; // G1_IO4 sampling mode
    static constexpr uint32_t IOSCR_G2_IO1 = 0x10; // G2_IO1 sampling mode
    static constexpr uint32_t IOSCR_G2_IO2 = 0x20; // G2_IO2 sampling mode
    static constexpr uint32_t IOSCR_G2_IO3 = 0x40; // G2_IO3 sampling mode
    static constexpr uint32_t IOSCR_G2_IO4 = 0x80; // G2_IO4 sampling mode
    static constexpr uint32_t IOSCR_G3_IO1 = 0x100; // G3_IO1 sampling mode
    static constexpr uint32_t IOSCR_G3_IO2 = 0x200; // G3_IO2 sampling mode
    static constexpr uint32_t IOSCR_G3_IO3 = 0x400; // G3_IO3 sampling mode
    static constexpr uint32_t IOSCR_G3_IO4 = 0x800; // G3_IO4 sampling mode
    static constexpr uint32_t IOSCR_G4_IO1 = 0x1000; // G4_IO1 sampling mode
    static constexpr uint32_t IOSCR_G4_IO2 = 0x2000; // G4_IO2 sampling mode
    static constexpr uint32_t IOSCR_G4_IO3 = 0x4000; // G4_IO3 sampling mode
    static constexpr uint32_t IOSCR_G4_IO4 = 0x8000; // G4_IO4 sampling mode
    static constexpr uint32_t IOSCR_G5_IO1 = 0x10000; // G5_IO1 sampling mode
    static constexpr uint32_t IOSCR_G5_IO2 = 0x20000; // G5_IO2 sampling mode
    static constexpr uint32_t IOSCR_G5_IO3 = 0x40000; // G5_IO3 sampling mode
    static constexpr uint32_t IOSCR_G5_IO4 = 0x80000; // G5_IO4 sampling mode
    static constexpr uint32_t IOSCR_G6_IO1 = 0x100000; // G6_IO1 sampling mode
    static constexpr uint32_t IOSCR_G6_IO2 = 0x200000; // G6_IO2 sampling mode
    static constexpr uint32_t IOSCR_G6_IO3 = 0x400000; // G6_IO3 sampling mode
    static constexpr uint32_t IOSCR_G6_IO4 = 0x800000; // G6_IO4 sampling mode
    static constexpr uint32_t IOSCR_G7_IO1 = 0x1000000; // G7_IO1 sampling mode
    static constexpr uint32_t IOSCR_G7_IO2 = 0x2000000; // G7_IO2 sampling mode
    static constexpr uint32_t IOSCR_G7_IO3 = 0x4000000; // G7_IO3 sampling mode
    static constexpr uint32_t IOSCR_G7_IO4 = 0x8000000; // G7_IO4 sampling mode
    static constexpr uint32_t IOSCR_G8_IO1 = 0x10000000; // G8_IO1 sampling mode
    static constexpr uint32_t IOSCR_G8_IO2 = 0x20000000; // G8_IO2 sampling mode
    static constexpr uint32_t IOSCR_G8_IO3 = 0x40000000; // G8_IO3 sampling mode
    static constexpr uint32_t IOSCR_G8_IO4 = 0x80000000; // G8_IO4 sampling mode


    static constexpr uint32_t IOCCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IOCCR_G1_IO1 = 0x1; // G1_IO1 channel mode
    static constexpr uint32_t IOCCR_G1_IO2 = 0x2; // G1_IO2 channel mode
    static constexpr uint32_t IOCCR_G1_IO3 = 0x4; // G1_IO3 channel mode
    static constexpr uint32_t IOCCR_G1_IO4 = 0x8; // G1_IO4 channel mode
    static constexpr uint32_t IOCCR_G2_IO1 = 0x10; // G2_IO1 channel mode
    static constexpr uint32_t IOCCR_G2_IO2 = 0x20; // G2_IO2 channel mode
    static constexpr uint32_t IOCCR_G2_IO3 = 0x40; // G2_IO3 channel mode
    static constexpr uint32_t IOCCR_G2_IO4 = 0x80; // G2_IO4 channel mode
    static constexpr uint32_t IOCCR_G3_IO1 = 0x100; // G3_IO1 channel mode
    static constexpr uint32_t IOCCR_G3_IO2 = 0x200; // G3_IO2 channel mode
    static constexpr uint32_t IOCCR_G3_IO3 = 0x400; // G3_IO3 channel mode
    static constexpr uint32_t IOCCR_G3_IO4 = 0x800; // G3_IO4 channel mode
    static constexpr uint32_t IOCCR_G4_IO1 = 0x1000; // G4_IO1 channel mode
    static constexpr uint32_t IOCCR_G4_IO2 = 0x2000; // G4_IO2 channel mode
    static constexpr uint32_t IOCCR_G4_IO3 = 0x4000; // G4_IO3 channel mode
    static constexpr uint32_t IOCCR_G4_IO4 = 0x8000; // G4_IO4 channel mode
    static constexpr uint32_t IOCCR_G5_IO1 = 0x10000; // G5_IO1 channel mode
    static constexpr uint32_t IOCCR_G5_IO2 = 0x20000; // G5_IO2 channel mode
    static constexpr uint32_t IOCCR_G5_IO3 = 0x40000; // G5_IO3 channel mode
    static constexpr uint32_t IOCCR_G5_IO4 = 0x80000; // G5_IO4 channel mode
    static constexpr uint32_t IOCCR_G6_IO1 = 0x100000; // G6_IO1 channel mode
    static constexpr uint32_t IOCCR_G6_IO2 = 0x200000; // G6_IO2 channel mode
    static constexpr uint32_t IOCCR_G6_IO3 = 0x400000; // G6_IO3 channel mode
    static constexpr uint32_t IOCCR_G6_IO4 = 0x800000; // G6_IO4 channel mode
    static constexpr uint32_t IOCCR_G7_IO1 = 0x1000000; // G7_IO1 channel mode
    static constexpr uint32_t IOCCR_G7_IO2 = 0x2000000; // G7_IO2 channel mode
    static constexpr uint32_t IOCCR_G7_IO3 = 0x4000000; // G7_IO3 channel mode
    static constexpr uint32_t IOCCR_G7_IO4 = 0x8000000; // G7_IO4 channel mode
    static constexpr uint32_t IOCCR_G8_IO1 = 0x10000000; // G8_IO1 channel mode
    static constexpr uint32_t IOCCR_G8_IO2 = 0x20000000; // G8_IO2 channel mode
    static constexpr uint32_t IOCCR_G8_IO3 = 0x40000000; // G8_IO3 channel mode
    static constexpr uint32_t IOCCR_G8_IO4 = 0x80000000; // G8_IO4 channel mode


    static constexpr uint32_t IOGCSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IOGCSR_G8S = 0x800000; // Analog I/O group x status
    static constexpr uint32_t IOGCSR_G7S = 0x400000; // Analog I/O group x status
    static constexpr uint32_t IOGCSR_G6S = 0x200000; // Analog I/O group x status
    static constexpr uint32_t IOGCSR_G5S = 0x100000; // Analog I/O group x status
    static constexpr uint32_t IOGCSR_G4S = 0x80000; // Analog I/O group x status
    static constexpr uint32_t IOGCSR_G3S = 0x40000; // Analog I/O group x status
    static constexpr uint32_t IOGCSR_G2S = 0x20000; // Analog I/O group x status
    static constexpr uint32_t IOGCSR_G1S = 0x10000; // Analog I/O group x status
    static constexpr uint32_t IOGCSR_G8E = 0x80; // Analog I/O group x enable
    static constexpr uint32_t IOGCSR_G7E = 0x40; // Analog I/O group x enable
    static constexpr uint32_t IOGCSR_G6E = 0x20; // Analog I/O group x enable
    static constexpr uint32_t IOGCSR_G5E = 0x10; // Analog I/O group x enable
    static constexpr uint32_t IOGCSR_G4E = 0x8; // Analog I/O group x enable
    static constexpr uint32_t IOGCSR_G3E = 0x4; // Analog I/O group x enable
    static constexpr uint32_t IOGCSR_G2E = 0x2; // Analog I/O group x enable
    static constexpr uint32_t IOGCSR_G1E = 0x1; // Analog I/O group x enable

    static constexpr uint32_t IOG1CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3fff> IOG1CR_CNT; // Counter value

    static constexpr uint32_t IOG2CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3fff> IOG2CR_CNT; // Counter value

    static constexpr uint32_t IOG3CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3fff> IOG3CR_CNT; // Counter value

    static constexpr uint32_t IOG4CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3fff> IOG4CR_CNT; // Counter value

    static constexpr uint32_t IOG5CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3fff> IOG5CR_CNT; // Counter value

    static constexpr uint32_t IOG6CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3fff> IOG6CR_CNT; // Counter value
};

// TSC: Touch sensing controller

struct stm32f302_tsc_t
{
    volatile uint32_t CR; // control register
    volatile uint32_t IER; // interrupt enable register
    volatile uint32_t ICR; // interrupt clear register
    volatile uint32_t ISR; // interrupt status register
    volatile uint32_t IOHCR; // I/O hysteresis control register
    reserved_t<0x1> _0x14;
    volatile uint32_t IOASCR; // I/O analog switch control register
    reserved_t<0x1> _0x1c;
    volatile uint32_t IOSCR; // I/O sampling control register
    reserved_t<0x1> _0x24;
    volatile uint32_t IOCCR; // I/O channel control register
    reserved_t<0x1> _0x2c;
    volatile uint32_t IOGCSR; // I/O group control status register
    volatile uint32_t IOG1CR; // I/O group x counter register
    volatile uint32_t IOG2CR; // I/O group x counter register
    volatile uint32_t IOG3CR; // I/O group x counter register
    volatile uint32_t IOG4CR; // I/O group x counter register
    volatile uint32_t IOG5CR; // I/O group x counter register
    volatile uint32_t IOG6CR; // I/O group x counter register
    volatile uint32_t IOG7CR; // I/O group x counter register
    volatile uint32_t IOG8CR; // I/O group x counter register

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<28, 0xf> CR_CTPH; // Charge transfer pulse high
    typedef bit_field_t<24, 0xf> CR_CTPL; // Charge transfer pulse low
    typedef bit_field_t<17, 0x7f> CR_SSD; // Spread spectrum deviation
    static constexpr uint32_t CR_SSE = 0x10000; // Spread spectrum enable
    static constexpr uint32_t CR_SSPSC = 0x8000; // Spread spectrum prescaler
    typedef bit_field_t<12, 0x7> CR_PGPSC; // pulse generator prescaler
    typedef bit_field_t<5, 0x7> CR_MCV; // Max count value
    static constexpr uint32_t CR_IODEF = 0x10; // I/O Default mode
    static constexpr uint32_t CR_SYNCPOL = 0x8; // Synchronization pin polarity
    static constexpr uint32_t CR_AM = 0x4; // Acquisition mode
    static constexpr uint32_t CR_START = 0x2; // Start a new acquisition
    static constexpr uint32_t CR_TSCE = 0x1; // Touch sensing controller enable

    static constexpr uint32_t IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IER_MCEIE = 0x2; // Max count error interrupt enable
    static constexpr uint32_t IER_EOAIE = 0x1; // End of acquisition interrupt enable

    static constexpr uint32_t ICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ICR_MCEIC = 0x2; // Max count error interrupt clear
    static constexpr uint32_t ICR_EOAIC = 0x1; // End of acquisition interrupt clear

    static constexpr uint32_t ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ISR_MCEF = 0x2; // Max count error flag
    static constexpr uint32_t ISR_EOAF = 0x1; // End of acquisition flag

    static constexpr uint32_t IOHCR_RESET_VALUE = 0xffffffff; // Reset value
    static constexpr uint32_t IOHCR_G1_IO1 = 0x1; // G1_IO1 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G1_IO2 = 0x2; // G1_IO2 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G1_IO3 = 0x4; // G1_IO3 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G1_IO4 = 0x8; // G1_IO4 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G2_IO1 = 0x10; // G2_IO1 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G2_IO2 = 0x20; // G2_IO2 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G2_IO3 = 0x40; // G2_IO3 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G2_IO4 = 0x80; // G2_IO4 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G3_IO1 = 0x100; // G3_IO1 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G3_IO2 = 0x200; // G3_IO2 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G3_IO3 = 0x400; // G3_IO3 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G3_IO4 = 0x800; // G3_IO4 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G4_IO1 = 0x1000; // G4_IO1 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G4_IO2 = 0x2000; // G4_IO2 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G4_IO3 = 0x4000; // G4_IO3 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G4_IO4 = 0x8000; // G4_IO4 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G5_IO1 = 0x10000; // G5_IO1 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G5_IO2 = 0x20000; // G5_IO2 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G5_IO3 = 0x40000; // G5_IO3 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G5_IO4 = 0x80000; // G5_IO4 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G6_IO1 = 0x100000; // G6_IO1 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G6_IO2 = 0x200000; // G6_IO2 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G6_IO3 = 0x400000; // G6_IO3 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G6_IO4 = 0x800000; // G6_IO4 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G7_IO1 = 0x1000000; // G7_IO1 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G7_IO2 = 0x2000000; // G7_IO2 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G7_IO3 = 0x4000000; // G7_IO3 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G7_IO4 = 0x8000000; // G7_IO4 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G8_IO1 = 0x10000000; // G8_IO1 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G8_IO2 = 0x20000000; // G8_IO2 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G8_IO3 = 0x40000000; // G8_IO3 Schmitt trigger hysteresis mode
    static constexpr uint32_t IOHCR_G8_IO4 = 0x80000000; // G8_IO4 Schmitt trigger hysteresis mode


    static constexpr uint32_t IOASCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IOASCR_G1_IO1 = 0x1; // G1_IO1 analog switch enable
    static constexpr uint32_t IOASCR_G1_IO2 = 0x2; // G1_IO2 analog switch enable
    static constexpr uint32_t IOASCR_G1_IO3 = 0x4; // G1_IO3 analog switch enable
    static constexpr uint32_t IOASCR_G1_IO4 = 0x8; // G1_IO4 analog switch enable
    static constexpr uint32_t IOASCR_G2_IO1 = 0x10; // G2_IO1 analog switch enable
    static constexpr uint32_t IOASCR_G2_IO2 = 0x20; // G2_IO2 analog switch enable
    static constexpr uint32_t IOASCR_G2_IO3 = 0x40; // G2_IO3 analog switch enable
    static constexpr uint32_t IOASCR_G2_IO4 = 0x80; // G2_IO4 analog switch enable
    static constexpr uint32_t IOASCR_G3_IO1 = 0x100; // G3_IO1 analog switch enable
    static constexpr uint32_t IOASCR_G3_IO2 = 0x200; // G3_IO2 analog switch enable
    static constexpr uint32_t IOASCR_G3_IO3 = 0x400; // G3_IO3 analog switch enable
    static constexpr uint32_t IOASCR_G3_IO4 = 0x800; // G3_IO4 analog switch enable
    static constexpr uint32_t IOASCR_G4_IO1 = 0x1000; // G4_IO1 analog switch enable
    static constexpr uint32_t IOASCR_G4_IO2 = 0x2000; // G4_IO2 analog switch enable
    static constexpr uint32_t IOASCR_G4_IO3 = 0x4000; // G4_IO3 analog switch enable
    static constexpr uint32_t IOASCR_G4_IO4 = 0x8000; // G4_IO4 analog switch enable
    static constexpr uint32_t IOASCR_G5_IO1 = 0x10000; // G5_IO1 analog switch enable
    static constexpr uint32_t IOASCR_G5_IO2 = 0x20000; // G5_IO2 analog switch enable
    static constexpr uint32_t IOASCR_G5_IO3 = 0x40000; // G5_IO3 analog switch enable
    static constexpr uint32_t IOASCR_G5_IO4 = 0x80000; // G5_IO4 analog switch enable
    static constexpr uint32_t IOASCR_G6_IO1 = 0x100000; // G6_IO1 analog switch enable
    static constexpr uint32_t IOASCR_G6_IO2 = 0x200000; // G6_IO2 analog switch enable
    static constexpr uint32_t IOASCR_G6_IO3 = 0x400000; // G6_IO3 analog switch enable
    static constexpr uint32_t IOASCR_G6_IO4 = 0x800000; // G6_IO4 analog switch enable
    static constexpr uint32_t IOASCR_G7_IO1 = 0x1000000; // G7_IO1 analog switch enable
    static constexpr uint32_t IOASCR_G7_IO2 = 0x2000000; // G7_IO2 analog switch enable
    static constexpr uint32_t IOASCR_G7_IO3 = 0x4000000; // G7_IO3 analog switch enable
    static constexpr uint32_t IOASCR_G7_IO4 = 0x8000000; // G7_IO4 analog switch enable
    static constexpr uint32_t IOASCR_G8_IO1 = 0x10000000; // G8_IO1 analog switch enable
    static constexpr uint32_t IOASCR_G8_IO2 = 0x20000000; // G8_IO2 analog switch enable
    static constexpr uint32_t IOASCR_G8_IO3 = 0x40000000; // G8_IO3 analog switch enable
    static constexpr uint32_t IOASCR_G8_IO4 = 0x80000000; // G8_IO4 analog switch enable


    static constexpr uint32_t IOSCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IOSCR_G1_IO1 = 0x1; // G1_IO1 sampling mode
    static constexpr uint32_t IOSCR_G1_IO2 = 0x2; // G1_IO2 sampling mode
    static constexpr uint32_t IOSCR_G1_IO3 = 0x4; // G1_IO3 sampling mode
    static constexpr uint32_t IOSCR_G1_IO4 = 0x8; // G1_IO4 sampling mode
    static constexpr uint32_t IOSCR_G2_IO1 = 0x10; // G2_IO1 sampling mode
    static constexpr uint32_t IOSCR_G2_IO2 = 0x20; // G2_IO2 sampling mode
    static constexpr uint32_t IOSCR_G2_IO3 = 0x40; // G2_IO3 sampling mode
    static constexpr uint32_t IOSCR_G2_IO4 = 0x80; // G2_IO4 sampling mode
    static constexpr uint32_t IOSCR_G3_IO1 = 0x100; // G3_IO1 sampling mode
    static constexpr uint32_t IOSCR_G3_IO2 = 0x200; // G3_IO2 sampling mode
    static constexpr uint32_t IOSCR_G3_IO3 = 0x400; // G3_IO3 sampling mode
    static constexpr uint32_t IOSCR_G3_IO4 = 0x800; // G3_IO4 sampling mode
    static constexpr uint32_t IOSCR_G4_IO1 = 0x1000; // G4_IO1 sampling mode
    static constexpr uint32_t IOSCR_G4_IO2 = 0x2000; // G4_IO2 sampling mode
    static constexpr uint32_t IOSCR_G4_IO3 = 0x4000; // G4_IO3 sampling mode
    static constexpr uint32_t IOSCR_G4_IO4 = 0x8000; // G4_IO4 sampling mode
    static constexpr uint32_t IOSCR_G5_IO1 = 0x10000; // G5_IO1 sampling mode
    static constexpr uint32_t IOSCR_G5_IO2 = 0x20000; // G5_IO2 sampling mode
    static constexpr uint32_t IOSCR_G5_IO3 = 0x40000; // G5_IO3 sampling mode
    static constexpr uint32_t IOSCR_G5_IO4 = 0x80000; // G5_IO4 sampling mode
    static constexpr uint32_t IOSCR_G6_IO1 = 0x100000; // G6_IO1 sampling mode
    static constexpr uint32_t IOSCR_G6_IO2 = 0x200000; // G6_IO2 sampling mode
    static constexpr uint32_t IOSCR_G6_IO3 = 0x400000; // G6_IO3 sampling mode
    static constexpr uint32_t IOSCR_G6_IO4 = 0x800000; // G6_IO4 sampling mode
    static constexpr uint32_t IOSCR_G7_IO1 = 0x1000000; // G7_IO1 sampling mode
    static constexpr uint32_t IOSCR_G7_IO2 = 0x2000000; // G7_IO2 sampling mode
    static constexpr uint32_t IOSCR_G7_IO3 = 0x4000000; // G7_IO3 sampling mode
    static constexpr uint32_t IOSCR_G7_IO4 = 0x8000000; // G7_IO4 sampling mode
    static constexpr uint32_t IOSCR_G8_IO1 = 0x10000000; // G8_IO1 sampling mode
    static constexpr uint32_t IOSCR_G8_IO2 = 0x20000000; // G8_IO2 sampling mode
    static constexpr uint32_t IOSCR_G8_IO3 = 0x40000000; // G8_IO3 sampling mode
    static constexpr uint32_t IOSCR_G8_IO4 = 0x80000000; // G8_IO4 sampling mode


    static constexpr uint32_t IOCCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IOCCR_G1_IO1 = 0x1; // G1_IO1 channel mode
    static constexpr uint32_t IOCCR_G1_IO2 = 0x2; // G1_IO2 channel mode
    static constexpr uint32_t IOCCR_G1_IO3 = 0x4; // G1_IO3 channel mode
    static constexpr uint32_t IOCCR_G1_IO4 = 0x8; // G1_IO4 channel mode
    static constexpr uint32_t IOCCR_G2_IO1 = 0x10; // G2_IO1 channel mode
    static constexpr uint32_t IOCCR_G2_IO2 = 0x20; // G2_IO2 channel mode
    static constexpr uint32_t IOCCR_G2_IO3 = 0x40; // G2_IO3 channel mode
    static constexpr uint32_t IOCCR_G2_IO4 = 0x80; // G2_IO4 channel mode
    static constexpr uint32_t IOCCR_G3_IO1 = 0x100; // G3_IO1 channel mode
    static constexpr uint32_t IOCCR_G3_IO2 = 0x200; // G3_IO2 channel mode
    static constexpr uint32_t IOCCR_G3_IO3 = 0x400; // G3_IO3 channel mode
    static constexpr uint32_t IOCCR_G3_IO4 = 0x800; // G3_IO4 channel mode
    static constexpr uint32_t IOCCR_G4_IO1 = 0x1000; // G4_IO1 channel mode
    static constexpr uint32_t IOCCR_G4_IO2 = 0x2000; // G4_IO2 channel mode
    static constexpr uint32_t IOCCR_G4_IO3 = 0x4000; // G4_IO3 channel mode
    static constexpr uint32_t IOCCR_G4_IO4 = 0x8000; // G4_IO4 channel mode
    static constexpr uint32_t IOCCR_G5_IO1 = 0x10000; // G5_IO1 channel mode
    static constexpr uint32_t IOCCR_G5_IO2 = 0x20000; // G5_IO2 channel mode
    static constexpr uint32_t IOCCR_G5_IO3 = 0x40000; // G5_IO3 channel mode
    static constexpr uint32_t IOCCR_G5_IO4 = 0x80000; // G5_IO4 channel mode
    static constexpr uint32_t IOCCR_G6_IO1 = 0x100000; // G6_IO1 channel mode
    static constexpr uint32_t IOCCR_G6_IO2 = 0x200000; // G6_IO2 channel mode
    static constexpr uint32_t IOCCR_G6_IO3 = 0x400000; // G6_IO3 channel mode
    static constexpr uint32_t IOCCR_G6_IO4 = 0x800000; // G6_IO4 channel mode
    static constexpr uint32_t IOCCR_G7_IO1 = 0x1000000; // G7_IO1 channel mode
    static constexpr uint32_t IOCCR_G7_IO2 = 0x2000000; // G7_IO2 channel mode
    static constexpr uint32_t IOCCR_G7_IO3 = 0x4000000; // G7_IO3 channel mode
    static constexpr uint32_t IOCCR_G7_IO4 = 0x8000000; // G7_IO4 channel mode
    static constexpr uint32_t IOCCR_G8_IO1 = 0x10000000; // G8_IO1 channel mode
    static constexpr uint32_t IOCCR_G8_IO2 = 0x20000000; // G8_IO2 channel mode
    static constexpr uint32_t IOCCR_G8_IO3 = 0x40000000; // G8_IO3 channel mode
    static constexpr uint32_t IOCCR_G8_IO4 = 0x80000000; // G8_IO4 channel mode


    static constexpr uint32_t IOGCSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IOGCSR_G8S = 0x800000; // Analog I/O group x status
    static constexpr uint32_t IOGCSR_G7S = 0x400000; // Analog I/O group x status
    static constexpr uint32_t IOGCSR_G6S = 0x200000; // Analog I/O group x status
    static constexpr uint32_t IOGCSR_G5S = 0x100000; // Analog I/O group x status
    static constexpr uint32_t IOGCSR_G4S = 0x80000; // Analog I/O group x status
    static constexpr uint32_t IOGCSR_G3S = 0x40000; // Analog I/O group x status
    static constexpr uint32_t IOGCSR_G2S = 0x20000; // Analog I/O group x status
    static constexpr uint32_t IOGCSR_G1S = 0x10000; // Analog I/O group x status
    static constexpr uint32_t IOGCSR_G8E = 0x80; // Analog I/O group x enable
    static constexpr uint32_t IOGCSR_G7E = 0x40; // Analog I/O group x enable
    static constexpr uint32_t IOGCSR_G6E = 0x20; // Analog I/O group x enable
    static constexpr uint32_t IOGCSR_G5E = 0x10; // Analog I/O group x enable
    static constexpr uint32_t IOGCSR_G4E = 0x8; // Analog I/O group x enable
    static constexpr uint32_t IOGCSR_G3E = 0x4; // Analog I/O group x enable
    static constexpr uint32_t IOGCSR_G2E = 0x2; // Analog I/O group x enable
    static constexpr uint32_t IOGCSR_G1E = 0x1; // Analog I/O group x enable

    static constexpr uint32_t IOG1CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3fff> IOG1CR_CNT; // Counter value

    static constexpr uint32_t IOG2CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3fff> IOG2CR_CNT; // Counter value

    static constexpr uint32_t IOG3CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3fff> IOG3CR_CNT; // Counter value

    static constexpr uint32_t IOG4CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3fff> IOG4CR_CNT; // Counter value

    static constexpr uint32_t IOG5CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3fff> IOG5CR_CNT; // Counter value

    static constexpr uint32_t IOG6CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3fff> IOG6CR_CNT; // Counter value

    static constexpr uint32_t IOG7CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3fff> IOG7CR_CNT; // Counter value

    static constexpr uint32_t IOG8CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3fff> IOG8CR_CNT; // Counter value
};

template<>
struct peripheral_t<STM32F301, TSC>
{
    using T = stm32f301_tsc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F302, TSC>
{
    using T = stm32f302_tsc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F303, TSC>
{
    using T = stm32f302_tsc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F373, TSC>
{
    using T = stm32f302_tsc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F3x4, TSC>
{
    using T = stm32f302_tsc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F3x8, TSC>
{
    using T = stm32f302_tsc_t;
    static T& V;
};

using tsc_t = peripheral_t<svd, TSC>;

template<int INST> struct tsc_traits {};

template<> struct tsc_traits<0>
{
    using tsc = tsc_t;
    static constexpr signal_t G1_IO1 = TSC_G1_IO1;
    static constexpr signal_t G1_IO2 = TSC_G1_IO2;
    static constexpr signal_t G1_IO3 = TSC_G1_IO3;
    static constexpr signal_t G1_IO4 = TSC_G1_IO4;
    static constexpr signal_t G2_IO1 = TSC_G2_IO1;
    static constexpr signal_t G2_IO2 = TSC_G2_IO2;
    static constexpr signal_t G2_IO3 = TSC_G2_IO3;
    static constexpr signal_t G2_IO4 = TSC_G2_IO4;
    static constexpr signal_t G3_IO1 = TSC_G3_IO1;
    static constexpr signal_t G3_IO2 = TSC_G3_IO2;
    static constexpr signal_t G3_IO3 = TSC_G3_IO3;
    static constexpr signal_t G3_IO4 = TSC_G3_IO4;
    static constexpr signal_t G4_IO1 = TSC_G4_IO1;
    static constexpr signal_t G4_IO2 = TSC_G4_IO2;
    static constexpr signal_t G4_IO3 = TSC_G4_IO3;
    static constexpr signal_t G4_IO4 = TSC_G4_IO4;
    static constexpr signal_t G5_IO1 = TSC_G5_IO1;
    static constexpr signal_t G5_IO2 = TSC_G5_IO2;
    static constexpr signal_t G5_IO3 = TSC_G5_IO3;
    static constexpr signal_t G5_IO4 = TSC_G5_IO4;
    static constexpr signal_t G6_IO1 = TSC_G6_IO1;
    static constexpr signal_t G6_IO2 = TSC_G6_IO2;
    static constexpr signal_t G6_IO3 = TSC_G6_IO3;
    static constexpr signal_t G6_IO4 = TSC_G6_IO4;
    static constexpr signal_t G7_IO1 = TSC_G7_IO1;
    static constexpr signal_t G7_IO2 = TSC_G7_IO2;
    static constexpr signal_t G7_IO3 = TSC_G7_IO3;
    static constexpr signal_t G7_IO4 = TSC_G7_IO4;
    static constexpr signal_t G8_IO1 = TSC_G8_IO1;
    static constexpr signal_t G8_IO2 = TSC_G8_IO2;
    static constexpr signal_t G8_IO3 = TSC_G8_IO3;
    static constexpr signal_t G8_IO4 = TSC_G8_IO4;
    static constexpr signal_t SYNC = TSC_SYNC;

    template<typename RCC>
    static void enable()
    {
        RCC::V.AHBENR |= RCC::T::AHBENR_TSCEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHBENR &= ~RCC::T::AHBENR_TSCEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHBRSTR |= RCC::T::AHBRSTR_TSCRST;
    }
};
