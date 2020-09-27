#pragma once

////
//
//      STM32L4+ DMAMUX peripherals
//
///

// DMAMUX1: DMA request multiplexer

struct stm32l4p5_dmamux1_t
{
    volatile uint32_t C0CR; // channel 0 configuration register
    volatile uint32_t C1CR; // channel 1 configuration register
    volatile uint32_t C2CR; // channel 2 configuration register
    volatile uint32_t C3CR; // channel 3 configuration register
    volatile uint32_t C4CR; // channel 4 configuration register
    volatile uint32_t C5CR; // channel 5 configuration register
    volatile uint32_t C6CR; // channel 6 configuration register
    volatile uint32_t C7CR; // channel 7 configuration register
    volatile uint32_t C8CR; // channel 8 configuration register
    volatile uint32_t C9CR; // channel 9 configuration register
    volatile uint32_t C10CR; // channel 10 configuration register
    volatile uint32_t C11CR; // channel 11 configuration register
    volatile uint32_t C12CR; // channel 12 configuration register
    volatile uint32_t C13CR; // channel 13 configuration register
    reserved_t<0x12> _0x38;
    volatile uint32_t CSR; // channel status register
    volatile uint32_t CFR; // clear flag register
    reserved_t<0x1e> _0x88;
    volatile uint32_t RG0CR; // request generator channel 0 configuration register
    volatile uint32_t RG1CR; // request generator channel 1 configuration register
    volatile uint32_t RG2CR; // request generator channel 2 configuration register
    volatile uint32_t RG3CR; // request generator channel 3 configuration register
    reserved_t<0xc> _0x110;
    volatile uint32_t RGSR; // request generator interrupt status register
    volatile uint32_t RGCFR; // request generator interrupt clear flag register

    static constexpr uint32_t C0CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> C0CR_SYNC_ID; // Synchronization identification
    typedef bit_field_t<19, 0x1f> C0CR_NBREQ; // Number of DMA requests minus 1 to forward
    typedef bit_field_t<17, 0x3> C0CR_SPOL; // Synchronization polarity
    static constexpr uint32_t C0CR_SE = 0x10000; // Synchronization enable
    static constexpr uint32_t C0CR_EGE = 0x200; // Event generation enable
    static constexpr uint32_t C0CR_SOIE = 0x100; // Synchronization overrun interrupt enable
    typedef bit_field_t<0, 0x7f> C0CR_DMAREQ_ID; // DMA request identification

    static constexpr uint32_t C1CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> C1CR_SYNC_ID; // Synchronization identification
    typedef bit_field_t<19, 0x1f> C1CR_NBREQ; // Number of DMA requests minus 1 to forward
    typedef bit_field_t<17, 0x3> C1CR_SPOL; // Synchronization polarity
    static constexpr uint32_t C1CR_SE = 0x10000; // Synchronization enable
    static constexpr uint32_t C1CR_EGE = 0x200; // Event generation enable
    static constexpr uint32_t C1CR_SOIE = 0x100; // Synchronization overrun interrupt enable
    typedef bit_field_t<0, 0x7f> C1CR_DMAREQ_ID; // DMA request identification

    static constexpr uint32_t C2CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> C2CR_SYNC_ID; // Synchronization identification
    typedef bit_field_t<19, 0x1f> C2CR_NBREQ; // Number of DMA requests minus 1 to forward
    typedef bit_field_t<17, 0x3> C2CR_SPOL; // Synchronization polarity
    static constexpr uint32_t C2CR_SE = 0x10000; // Synchronization enable
    static constexpr uint32_t C2CR_EGE = 0x200; // Event generation enable
    static constexpr uint32_t C2CR_SOIE = 0x100; // Synchronization overrun interrupt enable
    typedef bit_field_t<0, 0x7f> C2CR_DMAREQ_ID; // DMA request identification

    static constexpr uint32_t C3CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> C3CR_SYNC_ID; // Synchronization identification
    typedef bit_field_t<19, 0x1f> C3CR_NBREQ; // Number of DMA requests minus 1 to forward
    typedef bit_field_t<17, 0x3> C3CR_SPOL; // Synchronization polarity
    static constexpr uint32_t C3CR_SE = 0x10000; // Synchronization enable
    static constexpr uint32_t C3CR_EGE = 0x200; // Event generation enable
    static constexpr uint32_t C3CR_SOIE = 0x100; // Synchronization overrun interrupt enable
    typedef bit_field_t<0, 0x7f> C3CR_DMAREQ_ID; // DMA request identification

    static constexpr uint32_t C4CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> C4CR_SYNC_ID; // Synchronization identification
    typedef bit_field_t<19, 0x1f> C4CR_NBREQ; // Number of DMA requests minus 1 to forward
    typedef bit_field_t<17, 0x3> C4CR_SPOL; // Synchronization polarity
    static constexpr uint32_t C4CR_SE = 0x10000; // Synchronization enable
    static constexpr uint32_t C4CR_EGE = 0x200; // Event generation enable
    static constexpr uint32_t C4CR_SOIE = 0x100; // Synchronization overrun interrupt enable
    typedef bit_field_t<0, 0x7f> C4CR_DMAREQ_ID; // DMA request identification

    static constexpr uint32_t C5CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> C5CR_SYNC_ID; // Synchronization identification
    typedef bit_field_t<19, 0x1f> C5CR_NBREQ; // Number of DMA requests minus 1 to forward
    typedef bit_field_t<17, 0x3> C5CR_SPOL; // Synchronization polarity
    static constexpr uint32_t C5CR_SE = 0x10000; // Synchronization enable
    static constexpr uint32_t C5CR_EGE = 0x200; // Event generation enable
    static constexpr uint32_t C5CR_SOIE = 0x100; // Synchronization overrun interrupt enable
    typedef bit_field_t<0, 0x7f> C5CR_DMAREQ_ID; // DMA request identification

    static constexpr uint32_t C6CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> C6CR_SYNC_ID; // Synchronization identification
    typedef bit_field_t<19, 0x1f> C6CR_NBREQ; // Number of DMA requests minus 1 to forward
    typedef bit_field_t<17, 0x3> C6CR_SPOL; // Synchronization polarity
    static constexpr uint32_t C6CR_SE = 0x10000; // Synchronization enable
    static constexpr uint32_t C6CR_EGE = 0x200; // Event generation enable
    static constexpr uint32_t C6CR_SOIE = 0x100; // Synchronization overrun interrupt enable
    typedef bit_field_t<0, 0x7f> C6CR_DMAREQ_ID; // DMA request identification

    static constexpr uint32_t C7CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> C7CR_SYNC_ID; // Synchronization identification
    typedef bit_field_t<19, 0x1f> C7CR_NBREQ; // Number of DMA requests minus 1 to forward
    typedef bit_field_t<17, 0x3> C7CR_SPOL; // Synchronization polarity
    static constexpr uint32_t C7CR_SE = 0x10000; // Synchronization enable
    static constexpr uint32_t C7CR_EGE = 0x200; // Event generation enable
    static constexpr uint32_t C7CR_SOIE = 0x100; // Synchronization overrun interrupt enable
    typedef bit_field_t<0, 0x7f> C7CR_DMAREQ_ID; // DMA request identification

    static constexpr uint32_t C8CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> C8CR_SYNC_ID; // Synchronization identification
    typedef bit_field_t<19, 0x1f> C8CR_NBREQ; // Number of DMA requests minus 1 to forward
    typedef bit_field_t<17, 0x3> C8CR_SPOL; // Synchronization polarity
    static constexpr uint32_t C8CR_SE = 0x10000; // Synchronization enable
    static constexpr uint32_t C8CR_EGE = 0x200; // Event generation enable
    static constexpr uint32_t C8CR_SOIE = 0x100; // Synchronization overrun interrupt enable
    typedef bit_field_t<0, 0x7f> C8CR_DMAREQ_ID; // DMA request identification

    static constexpr uint32_t C9CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> C9CR_SYNC_ID; // Synchronization identification
    typedef bit_field_t<19, 0x1f> C9CR_NBREQ; // Number of DMA requests minus 1 to forward
    typedef bit_field_t<17, 0x3> C9CR_SPOL; // Synchronization polarity
    static constexpr uint32_t C9CR_SE = 0x10000; // Synchronization enable
    static constexpr uint32_t C9CR_EGE = 0x200; // Event generation enable
    static constexpr uint32_t C9CR_SOIE = 0x100; // Synchronization overrun interrupt enable
    typedef bit_field_t<0, 0x7f> C9CR_DMAREQ_ID; // DMA request identification

    static constexpr uint32_t C10CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> C10CR_SYNC_ID; // Synchronization identification
    typedef bit_field_t<19, 0x1f> C10CR_NBREQ; // Number of DMA requests minus 1 to forward
    typedef bit_field_t<17, 0x3> C10CR_SPOL; // Synchronization polarity
    static constexpr uint32_t C10CR_SE = 0x10000; // Synchronization enable
    static constexpr uint32_t C10CR_EGE = 0x200; // Event generation enable
    static constexpr uint32_t C10CR_SOIE = 0x100; // Synchronization overrun interrupt enable
    typedef bit_field_t<0, 0x7f> C10CR_DMAREQ_ID; // DMA request identification

    static constexpr uint32_t C11CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> C11CR_SYNC_ID; // Synchronization identification
    typedef bit_field_t<19, 0x1f> C11CR_NBREQ; // Number of DMA requests minus 1 to forward
    typedef bit_field_t<17, 0x3> C11CR_SPOL; // Synchronization polarity
    static constexpr uint32_t C11CR_SE = 0x10000; // Synchronization enable
    static constexpr uint32_t C11CR_EGE = 0x200; // Event generation enable
    static constexpr uint32_t C11CR_SOIE = 0x100; // Synchronization overrun interrupt enable
    typedef bit_field_t<0, 0x7f> C11CR_DMAREQ_ID; // DMA request identification

    static constexpr uint32_t C12CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> C12CR_SYNC_ID; // Synchronization identification
    typedef bit_field_t<19, 0x1f> C12CR_NBREQ; // Number of DMA requests minus 1 to forward
    typedef bit_field_t<17, 0x3> C12CR_SPOL; // Synchronization polarity
    static constexpr uint32_t C12CR_SE = 0x10000; // Synchronization enable
    static constexpr uint32_t C12CR_EGE = 0x200; // Event generation enable
    static constexpr uint32_t C12CR_SOIE = 0x100; // Synchronization overrun interrupt enable
    typedef bit_field_t<0, 0x7f> C12CR_DMAREQ_ID; // DMA request identification

    static constexpr uint32_t C13CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> C13CR_SYNC_ID; // Synchronization identification
    typedef bit_field_t<19, 0x1f> C13CR_NBREQ; // Number of DMA requests minus 1 to forward
    typedef bit_field_t<17, 0x3> C13CR_SPOL; // Synchronization polarity
    static constexpr uint32_t C13CR_SE = 0x10000; // Synchronization enable
    static constexpr uint32_t C13CR_EGE = 0x200; // Event generation enable
    static constexpr uint32_t C13CR_SOIE = 0x100; // Synchronization overrun interrupt enable
    typedef bit_field_t<0, 0x7f> C13CR_DMAREQ_ID; // DMA request identification


    static constexpr uint32_t CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CSR_SOF0 = 0x1; // Synchronization overrun event flag
    static constexpr uint32_t CSR_SOF1 = 0x2; // Synchronization overrun event flag
    static constexpr uint32_t CSR_SOF2 = 0x4; // Synchronization overrun event flag
    static constexpr uint32_t CSR_SOF3 = 0x8; // Synchronization overrun event flag
    static constexpr uint32_t CSR_SOF4 = 0x10; // Synchronization overrun event flag
    static constexpr uint32_t CSR_SOF5 = 0x20; // Synchronization overrun event flag
    static constexpr uint32_t CSR_SOF6 = 0x40; // Synchronization overrun event flag
    static constexpr uint32_t CSR_SOF7 = 0x80; // Synchronization overrun event flag
    static constexpr uint32_t CSR_SOF8 = 0x100; // Synchronization overrun event flag
    static constexpr uint32_t CSR_SOF9 = 0x200; // Synchronization overrun event flag
    static constexpr uint32_t CSR_SOF10 = 0x400; // Synchronization overrun event flag
    static constexpr uint32_t CSR_SOF11 = 0x800; // Synchronization overrun event flag
    static constexpr uint32_t CSR_SOF12 = 0x1000; // Synchronization overrun event flag
    static constexpr uint32_t CSR_SOF13 = 0x2000; // Synchronization overrun event flag

    static constexpr uint32_t CFR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFR_CSOF0 = 0x1; // Clear synchronization overrun event flag
    static constexpr uint32_t CFR_CSOF1 = 0x2; // Clear synchronization overrun event flag
    static constexpr uint32_t CFR_CSOF2 = 0x4; // Clear synchronization overrun event flag
    static constexpr uint32_t CFR_CSOF3 = 0x8; // Clear synchronization overrun event flag
    static constexpr uint32_t CFR_CSOF4 = 0x10; // Clear synchronization overrun event flag
    static constexpr uint32_t CFR_CSOF5 = 0x20; // Clear synchronization overrun event flag
    static constexpr uint32_t CFR_CSOF6 = 0x40; // Clear synchronization overrun event flag
    static constexpr uint32_t CFR_CSOF7 = 0x80; // Clear synchronization overrun event flag
    static constexpr uint32_t CFR_CSOF8 = 0x100; // Clear synchronization overrun event flag
    static constexpr uint32_t CFR_CSOF9 = 0x200; // Clear synchronization overrun event flag
    static constexpr uint32_t CFR_CSOF10 = 0x400; // Clear synchronization overrun event flag
    static constexpr uint32_t CFR_CSOF11 = 0x800; // Clear synchronization overrun event flag
    static constexpr uint32_t CFR_CSOF12 = 0x1000; // Clear synchronization overrun event flag
    static constexpr uint32_t CFR_CSOF13 = 0x2000; // Clear synchronization overrun event flag


    static constexpr uint32_t RG0CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<19, 0x1f> RG0CR_GNBREQ; // Number of DMA requests to be generated minus 1
    typedef bit_field_t<17, 0x3> RG0CR_GPOL; // DMA request generator trigger polarity
    static constexpr uint32_t RG0CR_GE = 0x10000; // DMA request generator channel 0 enable
    static constexpr uint32_t RG0CR_OIE = 0x100; // Trigger overrun interrupt enable
    typedef bit_field_t<0, 0x1f> RG0CR_SIG_ID; // Signal identification

    static constexpr uint32_t RG1CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<19, 0x1f> RG1CR_GNBREQ; // Number of DMA requests to be generated minus 1
    typedef bit_field_t<17, 0x3> RG1CR_GPOL; // DMA request generator trigger polarity
    static constexpr uint32_t RG1CR_GE = 0x10000; // DMA request generator channel 1 enable
    static constexpr uint32_t RG1CR_OIE = 0x100; // Trigger overrun interrupt enable
    typedef bit_field_t<0, 0x1f> RG1CR_SIG_ID; // Signal identification

    static constexpr uint32_t RG2CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<19, 0x1f> RG2CR_GNBREQ; // Number of DMA requests to be generated minus 1
    typedef bit_field_t<17, 0x3> RG2CR_GPOL; // DMA request generator trigger polarity
    static constexpr uint32_t RG2CR_GE = 0x10000; // DMA request generator channel 2 enable
    static constexpr uint32_t RG2CR_OIE = 0x100; // Trigger overrun interrupt enable
    typedef bit_field_t<0, 0x1f> RG2CR_SIG_ID; // Signal identification

    static constexpr uint32_t RG3CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<19, 0x1f> RG3CR_GNBREQ; // Number of DMA requests to be generated minus 1
    typedef bit_field_t<17, 0x3> RG3CR_GPOL; // DMA request generator trigger polarity
    static constexpr uint32_t RG3CR_GE = 0x10000; // DMA request generator channel 3 enable
    static constexpr uint32_t RG3CR_OIE = 0x100; // Trigger overrun interrupt enable
    typedef bit_field_t<0, 0x1f> RG3CR_SIG_ID; // Signal identification


    static constexpr uint32_t RGSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RGSR_OF3 = 0x8; // Trigger overrun event flag
    static constexpr uint32_t RGSR_OF2 = 0x4; // Trigger overrun event flag
    static constexpr uint32_t RGSR_OF1 = 0x2; // Trigger overrun event flag
    static constexpr uint32_t RGSR_OF0 = 0x1; // Trigger overrun event flag

    static constexpr uint32_t RGCFR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RGCFR_COF3 = 0x8; // Clear trigger overrun event flag
    static constexpr uint32_t RGCFR_COF2 = 0x4; // Clear trigger overrun event flag
    static constexpr uint32_t RGCFR_COF1 = 0x2; // Clear trigger overrun event flag
    static constexpr uint32_t RGCFR_COF0 = 0x1; // Clear trigger overrun event flag
};

template<>
struct peripheral_t<STM32L4P5, DMAMUX1>
{
    static constexpr periph_t P = DMAMUX1;
    using T = stm32l4p5_dmamux1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4Q5, DMAMUX1>
{
    static constexpr periph_t P = DMAMUX1;
    using T = stm32l4p5_dmamux1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R5, DMAMUX1>
{
    static constexpr periph_t P = DMAMUX1;
    using T = stm32l4p5_dmamux1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R7, DMAMUX1>
{
    static constexpr periph_t P = DMAMUX1;
    using T = stm32l4p5_dmamux1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R9, DMAMUX1>
{
    static constexpr periph_t P = DMAMUX1;
    using T = stm32l4p5_dmamux1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S5, DMAMUX1>
{
    static constexpr periph_t P = DMAMUX1;
    using T = stm32l4p5_dmamux1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S7, DMAMUX1>
{
    static constexpr periph_t P = DMAMUX1;
    using T = stm32l4p5_dmamux1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S9, DMAMUX1>
{
    static constexpr periph_t P = DMAMUX1;
    using T = stm32l4p5_dmamux1_t;
    static T& V;
};

using dmamux1_t = peripheral_t<svd, DMAMUX1>;
