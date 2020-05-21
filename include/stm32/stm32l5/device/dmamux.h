#pragma once

////
//
//      STM32L5 DMAMUX peripherals
//
////

////
//
//      Direct memory access Multiplexer
//
////

struct stm32l552_dmamux1_t
{
    volatile uint32_t C0CR;  // [read-write] DMA Multiplexer Channel 0 Control register
    volatile uint32_t C1CR;  // [read-write] DMA Multiplexer Channel 1 Control register
    volatile uint32_t C2CR;  // [read-write] DMA Multiplexer Channel 2 Control register
    volatile uint32_t C3CR;  // [read-write] DMA Multiplexer Channel 3 Control register
    volatile uint32_t C4CR;  // [read-write] DMA Multiplexer Channel 4 Control register
    volatile uint32_t C5CR;  // [read-write] DMA Multiplexer Channel 5 Control register
    volatile uint32_t C6CR;  // [read-write] DMA Multiplexer Channel 6 Control register
    volatile uint32_t C7CR;  // [read-write] DMA Multiplexer Channel 7 Control register
    volatile uint32_t C8CR;  // [read-write] DMA Multiplexer Channel 8 Control register
    volatile uint32_t C9CR;  // [read-write] DMA Multiplexer Channel 9 Control register
    volatile uint32_t C10CR; // [read-write] DMA Multiplexer Channel 10 Control register
    volatile uint32_t C11CR; // [read-write] DMA Multiplexer Channel 11 Control register
    volatile uint32_t C12CR; // [read-write] DMA Multiplexer Channel 12 Control register
    volatile uint32_t C13CR; // [read-write] DMA Multiplexer Channel 13 Control register
    reserved_t<0x12> _0x80;
    volatile uint32_t CSR;   // [read-write] DMA Multiplexer Channel Status register
    volatile uint32_t CCFR;  // [read-write] DMA Channel Clear Flag Register
    reserved_t<0x1e> _0x100;
    volatile uint32_t RG0CR; // [read-write] DMA Request Generator 0 Control Register
    volatile uint32_t RG1CR; // [read-write] DMA Request Generator 1 Control Register
    volatile uint32_t RG2CR; // [read-write] DMA Request Generator 2 Control Register
    volatile uint32_t RG3CR; // [read-write] DMA Request Generator 3 Control Register
    reserved_t<0xa> _0x138;
    volatile uint32_t C14CR; // [read-write] DMA Multiplexer Channel 10 Control register
    volatile uint32_t C15CR; // [read-write] DMA Multiplexer Channel 10 Control register
    volatile uint32_t RGSR;  // [read-only] DMA Request Generator Status Register
    volatile uint32_t RGCFR; // [read-write] DMA Request Generator Clear Flag Register

    static constexpr uint32_t C0CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C0CR_SYNC_ID =     // SYNC_ID
        bit_field_t<24, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C0CR_NBREQ =       // Nb request
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C0CR_SPOL =        // Sync polarity
        bit_field_t<17, 0x3>::value<X>();
    static constexpr uint32_t C0CR_SE = 0x10000; // Synchronization enable
    static constexpr uint32_t C0CR_EGE = 0x200;  // Event Generation Enable
    static constexpr uint32_t C0CR_SOIE = 0x100; // Synchronization Overrun Interrupt Enable
    template<uint32_t X>
    static constexpr uint32_t C0CR_DMAREQ_ID =   // DMA Request ID
        bit_field_t<0, 0x7f>::value<X>();

    static constexpr uint32_t C1CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C1CR_SYNC_ID =     // SYNC_ID
        bit_field_t<24, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C1CR_NBREQ =       // Nb request
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C1CR_SPOL =        // Sync polarity
        bit_field_t<17, 0x3>::value<X>();
    static constexpr uint32_t C1CR_SE = 0x10000; // Synchronization enable
    static constexpr uint32_t C1CR_EGE = 0x200;  // Event Generation Enable
    static constexpr uint32_t C1CR_SOIE = 0x100; // Synchronization Overrun Interrupt Enable
    template<uint32_t X>
    static constexpr uint32_t C1CR_DMAREQ_ID =   // DMA Request ID
        bit_field_t<0, 0x7f>::value<X>();

    static constexpr uint32_t C2CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C2CR_SYNC_ID =     // SYNC_ID
        bit_field_t<24, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C2CR_NBREQ =       // Nb request
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C2CR_SPOL =        // Sync polarity
        bit_field_t<17, 0x3>::value<X>();
    static constexpr uint32_t C2CR_SE = 0x10000; // Synchronization enable
    static constexpr uint32_t C2CR_EGE = 0x200;  // Event Generation Enable
    static constexpr uint32_t C2CR_SOIE = 0x100; // Synchronization Overrun Interrupt Enable
    template<uint32_t X>
    static constexpr uint32_t C2CR_DMAREQ_ID =   // DMA Request ID
        bit_field_t<0, 0x7f>::value<X>();

    static constexpr uint32_t C3CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C3CR_SYNC_ID =     // SYNC_ID
        bit_field_t<24, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C3CR_NBREQ =       // Nb request
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C3CR_SPOL =        // Sync polarity
        bit_field_t<17, 0x3>::value<X>();
    static constexpr uint32_t C3CR_SE = 0x10000; // Synchronization enable
    static constexpr uint32_t C3CR_EGE = 0x200;  // Event Generation Enable
    static constexpr uint32_t C3CR_SOIE = 0x100; // Synchronization Overrun Interrupt Enable
    template<uint32_t X>
    static constexpr uint32_t C3CR_DMAREQ_ID =   // DMA Request ID
        bit_field_t<0, 0x7f>::value<X>();

    static constexpr uint32_t C4CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C4CR_SYNC_ID =     // SYNC_ID
        bit_field_t<24, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C4CR_NBREQ =       // Nb request
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C4CR_SPOL =        // Sync polarity
        bit_field_t<17, 0x3>::value<X>();
    static constexpr uint32_t C4CR_SE = 0x10000; // Synchronization enable
    static constexpr uint32_t C4CR_EGE = 0x200;  // Event Generation Enable
    static constexpr uint32_t C4CR_SOIE = 0x100; // Synchronization Overrun Interrupt Enable
    template<uint32_t X>
    static constexpr uint32_t C4CR_DMAREQ_ID =   // DMA Request ID
        bit_field_t<0, 0x7f>::value<X>();

    static constexpr uint32_t C5CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C5CR_SYNC_ID =     // SYNC_ID
        bit_field_t<24, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C5CR_NBREQ =       // Nb request
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C5CR_SPOL =        // Sync polarity
        bit_field_t<17, 0x3>::value<X>();
    static constexpr uint32_t C5CR_SE = 0x10000; // Synchronization enable
    static constexpr uint32_t C5CR_EGE = 0x200;  // Event Generation Enable
    static constexpr uint32_t C5CR_OIE = 0x100;  // Synchronization Overrun Interrupt Enable
    template<uint32_t X>
    static constexpr uint32_t C5CR_DMAREQ_ID =   // DMA Request ID
        bit_field_t<0, 0x7f>::value<X>();

    static constexpr uint32_t C6CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C6CR_SYNC_ID =     // SYNC_ID
        bit_field_t<24, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C6CR_NBREQ =       // Nb request
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C6CR_SPOL =        // Sync polarity
        bit_field_t<17, 0x3>::value<X>();
    static constexpr uint32_t C6CR_SE = 0x10000; // Synchronization enable
    static constexpr uint32_t C6CR_EGE = 0x200;  // Event Generation Enable
    static constexpr uint32_t C6CR_SOIE = 0x100; // Synchronization Overrun Interrupt Enable
    template<uint32_t X>
    static constexpr uint32_t C6CR_DMAREQ_ID =   // DMA Request ID
        bit_field_t<0, 0x7f>::value<X>();

    static constexpr uint32_t C7CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C7CR_SYNC_ID =     // SYNC_ID
        bit_field_t<24, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C7CR_NBREQ =       // Nb request
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C7CR_SPOL =        // Sync polarity
        bit_field_t<17, 0x3>::value<X>();
    static constexpr uint32_t C7CR_SE = 0x10000; // Synchronization enable
    static constexpr uint32_t C7CR_EGE = 0x200;  // Event Generation Enable
    static constexpr uint32_t C7CR_SOIE = 0x100; // Synchronization Overrun Interrupt Enable
    template<uint32_t X>
    static constexpr uint32_t C7CR_DMAREQ_ID =   // DMA Request ID
        bit_field_t<0, 0x7f>::value<X>();

    static constexpr uint32_t C8CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C8CR_SYNC_ID =     // SYNC_ID
        bit_field_t<24, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C8CR_NBREQ =       // Nb request
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C8CR_SPOL =        // Sync polarity
        bit_field_t<17, 0x3>::value<X>();
    static constexpr uint32_t C8CR_SE = 0x10000; // Synchronization enable
    static constexpr uint32_t C8CR_EGE = 0x200;  // Event Generation Enable
    static constexpr uint32_t C8CR_SOIE = 0x100; // Synchronization Overrun Interrupt Enable
    template<uint32_t X>
    static constexpr uint32_t C8CR_DMAREQ_ID =   // DMA Request ID
        bit_field_t<0, 0x7f>::value<X>();

    static constexpr uint32_t C9CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C9CR_SYNC_ID =     // SYNC_ID
        bit_field_t<24, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C9CR_NBREQ =       // Nb request
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C9CR_SPOL =        // Sync polarity
        bit_field_t<17, 0x3>::value<X>();
    static constexpr uint32_t C9CR_SE = 0x10000; // Synchronization enable
    static constexpr uint32_t C9CR_EGE = 0x200;  // Event Generation Enable
    static constexpr uint32_t C9CR_SOIE = 0x100; // Synchronization Overrun Interrupt Enable
    template<uint32_t X>
    static constexpr uint32_t C9CR_DMAREQ_ID =   // DMA Request ID
        bit_field_t<0, 0x7f>::value<X>();

    static constexpr uint32_t C10CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C10CR_SYNC_ID =     // SYNC_ID
        bit_field_t<24, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C10CR_NBREQ =       // Nb request
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C10CR_SPOL =        // Sync polarity
        bit_field_t<17, 0x3>::value<X>();
    static constexpr uint32_t C10CR_SE = 0x10000; // Synchronization enable
    static constexpr uint32_t C10CR_EGE = 0x200;  // Event Generation Enable
    static constexpr uint32_t C10CR_SOIE = 0x100; // Synchronization Overrun Interrupt Enable
    template<uint32_t X>
    static constexpr uint32_t C10CR_DMAREQ_ID =   // DMA Request ID
        bit_field_t<0, 0x7f>::value<X>();

    static constexpr uint32_t C11CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C11CR_SYNC_ID =     // SYNC_ID
        bit_field_t<24, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C11CR_NBREQ =       // Nb request
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C11CR_SPOL =        // Sync polarity
        bit_field_t<17, 0x3>::value<X>();
    static constexpr uint32_t C11CR_SE = 0x10000; // Synchronization enable
    static constexpr uint32_t C11CR_EGE = 0x200;  // Event Generation Enable
    static constexpr uint32_t C11CR_SOIE = 0x100; // Synchronization Overrun Interrupt Enable
    template<uint32_t X>
    static constexpr uint32_t C11CR_DMAREQ_ID =   // DMA Request ID
        bit_field_t<0, 0x7f>::value<X>();

    static constexpr uint32_t C12CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C12CR_SYNC_ID =     // SYNC_ID
        bit_field_t<24, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C12CR_NBREQ =       // Nb request
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C12CR_SPOL =        // Sync polarity
        bit_field_t<17, 0x3>::value<X>();
    static constexpr uint32_t C12CR_SE = 0x10000; // Synchronization enable
    static constexpr uint32_t C12CR_EGE = 0x200;  // Event Generation Enable
    static constexpr uint32_t C12CR_SOIE = 0x100; // Synchronization Overrun Interrupt Enable
    template<uint32_t X>
    static constexpr uint32_t C12CR_DMAREQ_ID =   // DMA Request ID
        bit_field_t<0, 0x7f>::value<X>();

    static constexpr uint32_t C13CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C13CR_SYNC_ID =     // SYNC_ID
        bit_field_t<24, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C13CR_NBREQ =       // Nb request
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C13CR_SPOL =        // Sync polarity
        bit_field_t<17, 0x3>::value<X>();
    static constexpr uint32_t C13CR_SE = 0x10000; // Synchronization enable
    static constexpr uint32_t C13CR_EGE = 0x200;  // Event Generation Enable
    static constexpr uint32_t C13CR_SOIE = 0x100; // Synchronization Overrun Interrupt Enable
    template<uint32_t X>
    static constexpr uint32_t C13CR_DMAREQ_ID =   // DMA Request ID
        bit_field_t<0, 0x7f>::value<X>();

    static constexpr uint32_t CSR_RESET_VALUE = 0x0;
    static constexpr uint32_t CSR_SOF0 = 0x1;     // Synchronization Overrun Flag 0
    static constexpr uint32_t CSR_SOF1 = 0x2;     // Synchronization Overrun Flag 1
    static constexpr uint32_t CSR_SOF2 = 0x4;     // Synchronization Overrun Flag 2
    static constexpr uint32_t CSR_SOF3 = 0x8;     // Synchronization Overrun Flag 3
    static constexpr uint32_t CSR_SOF4 = 0x10;    // Synchronization Overrun Flag 4
    static constexpr uint32_t CSR_SOF5 = 0x20;    // Synchronization Overrun Flag 5
    static constexpr uint32_t CSR_SOF6 = 0x40;    // Synchronization Overrun Flag 6
    static constexpr uint32_t CSR_SOF7 = 0x80;    // Synchronization Overrun Flag 7
    static constexpr uint32_t CSR_SOF8 = 0x100;   // Synchronization Overrun Flag 8
    static constexpr uint32_t CSR_SOF9 = 0x200;   // Synchronization Overrun Flag 9
    static constexpr uint32_t CSR_SOF10 = 0x400;  // Synchronization Overrun Flag 10
    static constexpr uint32_t CSR_SOF11 = 0x800;  // Synchronization Overrun Flag 11
    static constexpr uint32_t CSR_SOF12 = 0x1000; // Synchronization Overrun Flag 12
    static constexpr uint32_t CSR_SOF13 = 0x2000; // Synchronization Overrun Flag 13
    static constexpr uint32_t CSR_SOF14 = 0x4000; // Synchronization Overrun Flag 13
    static constexpr uint32_t CSR_SOF15 = 0x8000; // Synchronization Overrun Flag 13

    static constexpr uint32_t CCFR_RESET_VALUE = 0x0;
    static constexpr uint32_t CCFR_CSOF0 = 0x1;     // Synchronization Clear Overrun Flag 0
    static constexpr uint32_t CCFR_CSOF1 = 0x2;     // Synchronization Clear Overrun Flag 1
    static constexpr uint32_t CCFR_CSOF2 = 0x4;     // Synchronization Clear Overrun Flag 2
    static constexpr uint32_t CCFR_CSOF3 = 0x8;     // Synchronization Clear Overrun Flag 3
    static constexpr uint32_t CCFR_CSOF4 = 0x10;    // Synchronization Clear Overrun Flag 4
    static constexpr uint32_t CCFR_CSOF5 = 0x20;    // Synchronization Clear Overrun Flag 5
    static constexpr uint32_t CCFR_CSOF6 = 0x40;    // Synchronization Clear Overrun Flag 6
    static constexpr uint32_t CCFR_CSOF7 = 0x80;    // Synchronization Clear Overrun Flag 7
    static constexpr uint32_t CCFR_CSOF8 = 0x100;   // Synchronization Clear Overrun Flag 8
    static constexpr uint32_t CCFR_CSOF9 = 0x200;   // Synchronization Clear Overrun Flag 9
    static constexpr uint32_t CCFR_CSOF10 = 0x400;  // Synchronization Clear Overrun Flag 10
    static constexpr uint32_t CCFR_CSOF11 = 0x800;  // Synchronization Clear Overrun Flag 11
    static constexpr uint32_t CCFR_CSOF12 = 0x1000; // Synchronization Clear Overrun Flag 12
    static constexpr uint32_t CCFR_CSOF13 = 0x2000; // Synchronization Clear Overrun Flag 13
    static constexpr uint32_t CCFR_CSOF14 = 0x4000; // Synchronization Clear Overrun Flag 13
    static constexpr uint32_t CCFR_CSOF15 = 0x8000; // Synchronization Clear Overrun Flag 13

    static constexpr uint32_t RG0CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RG0CR_GNBREQ =      // Number of Request
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RG0CR_GPOL =        // Generation Polarity
        bit_field_t<17, 0x3>::value<X>();
    static constexpr uint32_t RG0CR_GE = 0x10000; // Generation Enable
    static constexpr uint32_t RG0CR_OIE = 0x100;  // Overrun Interrupt Enable
    template<uint32_t X>
    static constexpr uint32_t RG0CR_SIG_ID =      // Signal ID
        bit_field_t<0, 0x1f>::value<X>();

    static constexpr uint32_t RG1CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RG1CR_GNBREQ =      // Number of Request
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RG1CR_GPOL =        // Generation Polarity
        bit_field_t<17, 0x3>::value<X>();
    static constexpr uint32_t RG1CR_GE = 0x10000; // Generation Enable
    static constexpr uint32_t RG1CR_OIE = 0x100;  // Overrun Interrupt Enable
    template<uint32_t X>
    static constexpr uint32_t RG1CR_SIG_ID =      // Signal ID
        bit_field_t<0, 0x1f>::value<X>();

    static constexpr uint32_t RG2CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RG2CR_GNBREQ =      // Number of Request
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RG2CR_GPOL =        // Generation Polarity
        bit_field_t<17, 0x3>::value<X>();
    static constexpr uint32_t RG2CR_GE = 0x10000; // Generation Enable
    static constexpr uint32_t RG2CR_OIE = 0x100;  // Overrun Interrupt Enable
    template<uint32_t X>
    static constexpr uint32_t RG2CR_SIG_ID =      // Signal ID
        bit_field_t<0, 0x1f>::value<X>();

    static constexpr uint32_t RG3CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RG3CR_GNBREQ =      // Number of Request
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RG3CR_GPOL =        // Generation Polarity
        bit_field_t<17, 0x3>::value<X>();
    static constexpr uint32_t RG3CR_GE = 0x10000; // Generation Enable
    static constexpr uint32_t RG3CR_OIE = 0x100;  // Overrun Interrupt Enable
    template<uint32_t X>
    static constexpr uint32_t RG3CR_SIG_ID =      // Signal ID
        bit_field_t<0, 0x1f>::value<X>();

    static constexpr uint32_t RGSR_RESET_VALUE = 0x0;
    static constexpr uint32_t RGSR_OF0 = 0x1; // Generator Overrun Flag 0
    static constexpr uint32_t RGSR_OF1 = 0x2; // Generator Overrun Flag 1
    static constexpr uint32_t RGSR_OF2 = 0x4; // Generator Overrun Flag 2
    static constexpr uint32_t RGSR_OF3 = 0x8; // Generator Overrun Flag 3

    static constexpr uint32_t RGCFR_RESET_VALUE = 0x0;
    static constexpr uint32_t RGCFR_CSOF0 = 0x1; // Generator Clear Overrun Flag 0
    static constexpr uint32_t RGCFR_CSOF1 = 0x2; // Generator Clear Overrun Flag 1
    static constexpr uint32_t RGCFR_CSOF2 = 0x4; // Generator Clear Overrun Flag 2
    static constexpr uint32_t RGCFR_CSOF3 = 0x8; // Generator Clear Overrun Flag 3

    static constexpr uint32_t C14CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C14CR_SYNC_ID =     // Synchronization identification
        bit_field_t<24, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C14CR_NBREQ =       // Number of DMA requests minus 1 to forward
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C14CR_SPOL =        // Synchronization polarity
        bit_field_t<17, 0x3>::value<X>();
    static constexpr uint32_t C14CR_SE = 0x10000; // Synchronization enable
    static constexpr uint32_t C14CR_EGE = 0x200;  // Event generation enable
    static constexpr uint32_t C14CR_SOIE = 0x100; // Synchronization overrun interrupt enable
    template<uint32_t X>
    static constexpr uint32_t C14CR_DMAREQ_ID =   // DMA request identification
        bit_field_t<0, 0x7f>::value<X>();

    static constexpr uint32_t C15CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C15CR_SYNC_ID =     // Synchronization identification
        bit_field_t<24, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C15CR_NBREQ =       // Number of DMA requests minus 1 to forward
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C15CR_SPOL =        // Synchronization polarity
        bit_field_t<17, 0x3>::value<X>();
    static constexpr uint32_t C15CR_SE = 0x10000; // Synchronization enable
    static constexpr uint32_t C15CR_EGE = 0x200;  // Event generation enable
    static constexpr uint32_t C15CR_SOIE = 0x100; // Synchronization overrun interrupt enable
    template<uint32_t X>
    static constexpr uint32_t C15CR_DMAREQ_ID =   // DMA request identification
        bit_field_t<0, 0x7f>::value<X>();
};


template<>
struct peripheral_t<STM32L552, DMAMUX1>
{
    typedef stm32l552_dmamux1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L552, SEC_DMAMUX1>
{
    typedef stm32l552_dmamux1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, DMAMUX1>
{
    typedef stm32l552_dmamux1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, SEC_DMAMUX1>
{
    typedef stm32l552_dmamux1_t T;
    static T& V;
};

using dmamux1_t = peripheral_t<mcu_svd, DMAMUX1>;
using sec_dmamux1_t = peripheral_t<mcu_svd, SEC_DMAMUX1>;

