#pragma once

////
//
//      STM32MP1 DMAMUX1 peripherals
//
////

////
//
//      DMAMUX1
//
////

struct stm32mp15xxx_dmamux1_t
{
    volatile uint32_t DMAMUX_C0CR;    // [read-write] DMAMUX request line multiplexer channel 0 configuration register
    volatile uint32_t DMAMUX_C1CR;    // [read-write] DMAMUX request line multiplexer channel 1 configuration register
    volatile uint32_t DMAMUX_C2CR;    // [read-write] DMAMUX request line multiplexer channel 2 configuration register
    volatile uint32_t DMAMUX_C3CR;    // [read-write] DMAMUX request line multiplexer channel 3 configuration register
    volatile uint32_t DMAMUX_C4CR;    // [read-write] DMAMUX request line multiplexer channel 4 configuration register
    volatile uint32_t DMAMUX_C5CR;    // [read-write] DMAMUX request line multiplexer channel 5 configuration register
    volatile uint32_t DMAMUX_C6CR;    // [read-write] DMAMUX request line multiplexer channel 6 configuration register
    volatile uint32_t DMAMUX_C7CR;    // [read-write] DMAMUX request line multiplexer channel 7 configuration register
    volatile uint32_t DMAMUX_C8CR;    // [read-write] DMAMUX request line multiplexer channel 8 configuration register
    volatile uint32_t DMAMUX_C9CR;    // [read-write] DMAMUX request line multiplexer channel 9 configuration register
    volatile uint32_t DMAMUX_C10CR;   // [read-write] DMAMUX request line multiplexer channel 10 configuration register
    volatile uint32_t DMAMUX_C11CR;   // [read-write] DMAMUX request line multiplexer channel 11 configuration register
    volatile uint32_t DMAMUX_C12CR;   // [read-write] DMAMUX request line multiplexer channel 12 configuration register
    volatile uint32_t DMAMUX_C13CR;   // [read-write] DMAMUX request line multiplexer channel 13 configuration register
    volatile uint32_t DMAMUX_C14CR;   // [read-write] DMAMUX request line multiplexer channel 14 configuration register
    volatile uint32_t DMAMUX_C15CR;   // [read-write] DMAMUX request line multiplexer channel 15 configuration register
    reserved_t<0x10> _0x80;
    volatile uint32_t DMAMUX_CSR;     // [read-only] DMAMUX request line multiplexer interrupt channel status register
    volatile uint32_t DMAMUX_CFR;     // [write-only] DMAMUX request line multiplexer interrupt clear flag register
    reserved_t<0x1e> _0x100;
    volatile uint32_t DMAMUX_RG0CR;   // [read-write] DMAMUX request generator channel 0 configuration register
    volatile uint32_t DMAMUX_RG1CR;   // [read-write] DMAMUX request generator channel 1 configuration register
    volatile uint32_t DMAMUX_RG2CR;   // [read-write] DMAMUX request generator channel 2 configuration register
    volatile uint32_t DMAMUX_RG3CR;   // [read-write] DMAMUX request generator channel 3 configuration register
    volatile uint32_t DMAMUX_RG4CR;   // [read-write] DMAMUX request generator channel 4 configuration register
    volatile uint32_t DMAMUX_RG5CR;   // [read-write] DMAMUX request generator channel 5 configuration register
    volatile uint32_t DMAMUX_RG6CR;   // [read-write] DMAMUX request generator channel 6 configuration register
    volatile uint32_t DMAMUX_RG7CR;   // [read-write] DMAMUX request generator channel 7 configuration register
    reserved_t<0x8> _0x140;
    volatile uint32_t DMAMUX_RGSR;    // [read-only] DMAMUX request generator interrupt status register
    volatile uint32_t DMAMUX_RGCFR;   // [write-only] DMAMUX request generator interrupt clear flag register
    reserved_t<0xa9> _0x3ec;
    volatile uint32_t DMAMUX_HWCFGR2; // [read-only] DMAMUX hardware configuration 2 register
    volatile uint32_t DMAMUX_HWCFGR1; // [read-only] DMAMUX hardware configuration 1 register
    volatile uint32_t DMAMUX_VERR;    // [read-only] This register identifies the IP version.
    volatile uint32_t DMAMUX_IPIDR;   // [read-only] This register identifies the IP.
    volatile uint32_t DMAMUX_SIDR;    // [read-only] DMAMUX size identification register

    static constexpr uint32_t DMAMUX_C0CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C0CR_DMAREQ_ID =   // DMAREQ_ID
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t DMAMUX_C0CR_SOIE = 0x100; // SOIE
    static constexpr uint32_t DMAMUX_C0CR_EGE = 0x200;  // EGE
    static constexpr uint32_t DMAMUX_C0CR_SE = 0x10000; // SE
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C0CR_SPOL =        // SPOL
        bit_field_t<17, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C0CR_NBREQ =       // NBREQ
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C0CR_SYNC_ID =     // SYNC_ID
        bit_field_t<24, 0x7>::value<X>();

    static constexpr uint32_t DMAMUX_C1CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C1CR_DMAREQ_ID =   // DMAREQ_ID
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t DMAMUX_C1CR_SOIE = 0x100; // SOIE
    static constexpr uint32_t DMAMUX_C1CR_EGE = 0x200;  // EGE
    static constexpr uint32_t DMAMUX_C1CR_SE = 0x10000; // SE
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C1CR_SPOL =        // SPOL
        bit_field_t<17, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C1CR_NBREQ =       // NBREQ
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C1CR_SYNC_ID =     // SYNC_ID
        bit_field_t<24, 0x7>::value<X>();

    static constexpr uint32_t DMAMUX_C2CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C2CR_DMAREQ_ID =   // DMAREQ_ID
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t DMAMUX_C2CR_SOIE = 0x100; // SOIE
    static constexpr uint32_t DMAMUX_C2CR_EGE = 0x200;  // EGE
    static constexpr uint32_t DMAMUX_C2CR_SE = 0x10000; // SE
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C2CR_SPOL =        // SPOL
        bit_field_t<17, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C2CR_NBREQ =       // NBREQ
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C2CR_SYNC_ID =     // SYNC_ID
        bit_field_t<24, 0x7>::value<X>();

    static constexpr uint32_t DMAMUX_C3CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C3CR_DMAREQ_ID =   // DMAREQ_ID
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t DMAMUX_C3CR_SOIE = 0x100; // SOIE
    static constexpr uint32_t DMAMUX_C3CR_EGE = 0x200;  // EGE
    static constexpr uint32_t DMAMUX_C3CR_SE = 0x10000; // SE
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C3CR_SPOL =        // SPOL
        bit_field_t<17, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C3CR_NBREQ =       // NBREQ
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C3CR_SYNC_ID =     // SYNC_ID
        bit_field_t<24, 0x7>::value<X>();

    static constexpr uint32_t DMAMUX_C4CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C4CR_DMAREQ_ID =   // DMAREQ_ID
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t DMAMUX_C4CR_SOIE = 0x100; // SOIE
    static constexpr uint32_t DMAMUX_C4CR_EGE = 0x200;  // EGE
    static constexpr uint32_t DMAMUX_C4CR_SE = 0x10000; // SE
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C4CR_SPOL =        // SPOL
        bit_field_t<17, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C4CR_NBREQ =       // NBREQ
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C4CR_SYNC_ID =     // SYNC_ID
        bit_field_t<24, 0x7>::value<X>();

    static constexpr uint32_t DMAMUX_C5CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C5CR_DMAREQ_ID =   // DMAREQ_ID
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t DMAMUX_C5CR_SOIE = 0x100; // SOIE
    static constexpr uint32_t DMAMUX_C5CR_EGE = 0x200;  // EGE
    static constexpr uint32_t DMAMUX_C5CR_SE = 0x10000; // SE
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C5CR_SPOL =        // SPOL
        bit_field_t<17, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C5CR_NBREQ =       // NBREQ
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C5CR_SYNC_ID =     // SYNC_ID
        bit_field_t<24, 0x7>::value<X>();

    static constexpr uint32_t DMAMUX_C6CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C6CR_DMAREQ_ID =   // DMAREQ_ID
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t DMAMUX_C6CR_SOIE = 0x100; // SOIE
    static constexpr uint32_t DMAMUX_C6CR_EGE = 0x200;  // EGE
    static constexpr uint32_t DMAMUX_C6CR_SE = 0x10000; // SE
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C6CR_SPOL =        // SPOL
        bit_field_t<17, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C6CR_NBREQ =       // NBREQ
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C6CR_SYNC_ID =     // SYNC_ID
        bit_field_t<24, 0x7>::value<X>();

    static constexpr uint32_t DMAMUX_C7CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C7CR_DMAREQ_ID =   // DMAREQ_ID
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t DMAMUX_C7CR_SOIE = 0x100; // SOIE
    static constexpr uint32_t DMAMUX_C7CR_EGE = 0x200;  // EGE
    static constexpr uint32_t DMAMUX_C7CR_SE = 0x10000; // SE
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C7CR_SPOL =        // SPOL
        bit_field_t<17, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C7CR_NBREQ =       // NBREQ
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C7CR_SYNC_ID =     // SYNC_ID
        bit_field_t<24, 0x7>::value<X>();

    static constexpr uint32_t DMAMUX_C8CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C8CR_DMAREQ_ID =   // DMAREQ_ID
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t DMAMUX_C8CR_SOIE = 0x100; // SOIE
    static constexpr uint32_t DMAMUX_C8CR_EGE = 0x200;  // EGE
    static constexpr uint32_t DMAMUX_C8CR_SE = 0x10000; // SE
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C8CR_SPOL =        // SPOL
        bit_field_t<17, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C8CR_NBREQ =       // NBREQ
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C8CR_SYNC_ID =     // SYNC_ID
        bit_field_t<24, 0x7>::value<X>();

    static constexpr uint32_t DMAMUX_C9CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C9CR_DMAREQ_ID =   // DMAREQ_ID
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t DMAMUX_C9CR_SOIE = 0x100; // SOIE
    static constexpr uint32_t DMAMUX_C9CR_EGE = 0x200;  // EGE
    static constexpr uint32_t DMAMUX_C9CR_SE = 0x10000; // SE
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C9CR_SPOL =        // SPOL
        bit_field_t<17, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C9CR_NBREQ =       // NBREQ
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C9CR_SYNC_ID =     // SYNC_ID
        bit_field_t<24, 0x7>::value<X>();

    static constexpr uint32_t DMAMUX_C10CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C10CR_DMAREQ_ID =   // DMAREQ_ID
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t DMAMUX_C10CR_SOIE = 0x100; // SOIE
    static constexpr uint32_t DMAMUX_C10CR_EGE = 0x200;  // EGE
    static constexpr uint32_t DMAMUX_C10CR_SE = 0x10000; // SE
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C10CR_SPOL =        // SPOL
        bit_field_t<17, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C10CR_NBREQ =       // NBREQ
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C10CR_SYNC_ID =     // SYNC_ID
        bit_field_t<24, 0x7>::value<X>();

    static constexpr uint32_t DMAMUX_C11CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C11CR_DMAREQ_ID =   // DMAREQ_ID
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t DMAMUX_C11CR_SOIE = 0x100; // SOIE
    static constexpr uint32_t DMAMUX_C11CR_EGE = 0x200;  // EGE
    static constexpr uint32_t DMAMUX_C11CR_SE = 0x10000; // SE
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C11CR_SPOL =        // SPOL
        bit_field_t<17, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C11CR_NBREQ =       // NBREQ
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C11CR_SYNC_ID =     // SYNC_ID
        bit_field_t<24, 0x7>::value<X>();

    static constexpr uint32_t DMAMUX_C12CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C12CR_DMAREQ_ID =   // DMAREQ_ID
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t DMAMUX_C12CR_SOIE = 0x100; // SOIE
    static constexpr uint32_t DMAMUX_C12CR_EGE = 0x200;  // EGE
    static constexpr uint32_t DMAMUX_C12CR_SE = 0x10000; // SE
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C12CR_SPOL =        // SPOL
        bit_field_t<17, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C12CR_NBREQ =       // NBREQ
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C12CR_SYNC_ID =     // SYNC_ID
        bit_field_t<24, 0x7>::value<X>();

    static constexpr uint32_t DMAMUX_C13CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C13CR_DMAREQ_ID =   // DMAREQ_ID
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t DMAMUX_C13CR_SOIE = 0x100; // SOIE
    static constexpr uint32_t DMAMUX_C13CR_EGE = 0x200;  // EGE
    static constexpr uint32_t DMAMUX_C13CR_SE = 0x10000; // SE
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C13CR_SPOL =        // SPOL
        bit_field_t<17, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C13CR_NBREQ =       // NBREQ
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C13CR_SYNC_ID =     // SYNC_ID
        bit_field_t<24, 0x7>::value<X>();

    static constexpr uint32_t DMAMUX_C14CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C14CR_DMAREQ_ID =   // DMAREQ_ID
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t DMAMUX_C14CR_SOIE = 0x100; // SOIE
    static constexpr uint32_t DMAMUX_C14CR_EGE = 0x200;  // EGE
    static constexpr uint32_t DMAMUX_C14CR_SE = 0x10000; // SE
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C14CR_SPOL =        // SPOL
        bit_field_t<17, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C14CR_NBREQ =       // NBREQ
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C14CR_SYNC_ID =     // SYNC_ID
        bit_field_t<24, 0x7>::value<X>();

    static constexpr uint32_t DMAMUX_C15CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C15CR_DMAREQ_ID =   // DMAREQ_ID
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t DMAMUX_C15CR_SOIE = 0x100; // SOIE
    static constexpr uint32_t DMAMUX_C15CR_EGE = 0x200;  // EGE
    static constexpr uint32_t DMAMUX_C15CR_SE = 0x10000; // SE
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C15CR_SPOL =        // SPOL
        bit_field_t<17, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C15CR_NBREQ =       // NBREQ
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C15CR_SYNC_ID =     // SYNC_ID
        bit_field_t<24, 0x7>::value<X>();

    static constexpr uint32_t DMAMUX_CSR_RESET_VALUE = 0x0;
    static constexpr uint32_t DMAMUX_CSR_SOF0 = 0x1;     // SOF0
    static constexpr uint32_t DMAMUX_CSR_SOF1 = 0x2;     // SOF1
    static constexpr uint32_t DMAMUX_CSR_SOF2 = 0x4;     // SOF2
    static constexpr uint32_t DMAMUX_CSR_SOF3 = 0x8;     // SOF3
    static constexpr uint32_t DMAMUX_CSR_SOF4 = 0x10;    // SOF4
    static constexpr uint32_t DMAMUX_CSR_SOF5 = 0x20;    // SOF5
    static constexpr uint32_t DMAMUX_CSR_SOF6 = 0x40;    // SOF6
    static constexpr uint32_t DMAMUX_CSR_SOF7 = 0x80;    // SOF7
    static constexpr uint32_t DMAMUX_CSR_SOF8 = 0x100;   // SOF8
    static constexpr uint32_t DMAMUX_CSR_SOF9 = 0x200;   // SOF9
    static constexpr uint32_t DMAMUX_CSR_SOF10 = 0x400;  // SOF10
    static constexpr uint32_t DMAMUX_CSR_SOF11 = 0x800;  // SOF11
    static constexpr uint32_t DMAMUX_CSR_SOF12 = 0x1000; // SOF12
    static constexpr uint32_t DMAMUX_CSR_SOF13 = 0x2000; // SOF13
    static constexpr uint32_t DMAMUX_CSR_SOF14 = 0x4000; // SOF14
    static constexpr uint32_t DMAMUX_CSR_SOF15 = 0x8000; // SOF15

    static constexpr uint32_t DMAMUX_CFR_RESET_VALUE = 0x0;
    static constexpr uint32_t DMAMUX_CFR_CSOF0 = 0x1;     // CSOF0
    static constexpr uint32_t DMAMUX_CFR_CSOF1 = 0x2;     // CSOF1
    static constexpr uint32_t DMAMUX_CFR_CSOF2 = 0x4;     // CSOF2
    static constexpr uint32_t DMAMUX_CFR_CSOF3 = 0x8;     // CSOF3
    static constexpr uint32_t DMAMUX_CFR_CSOF4 = 0x10;    // CSOF4
    static constexpr uint32_t DMAMUX_CFR_CSOF5 = 0x20;    // CSOF5
    static constexpr uint32_t DMAMUX_CFR_CSOF6 = 0x40;    // CSOF6
    static constexpr uint32_t DMAMUX_CFR_CSOF7 = 0x80;    // CSOF7
    static constexpr uint32_t DMAMUX_CFR_CSOF8 = 0x100;   // CSOF8
    static constexpr uint32_t DMAMUX_CFR_CSOF9 = 0x200;   // CSOF9
    static constexpr uint32_t DMAMUX_CFR_CSOF10 = 0x400;  // CSOF10
    static constexpr uint32_t DMAMUX_CFR_CSOF11 = 0x800;  // CSOF11
    static constexpr uint32_t DMAMUX_CFR_CSOF12 = 0x1000; // CSOF12
    static constexpr uint32_t DMAMUX_CFR_CSOF13 = 0x2000; // CSOF13
    static constexpr uint32_t DMAMUX_CFR_CSOF14 = 0x4000; // CSOF14
    static constexpr uint32_t DMAMUX_CFR_CSOF15 = 0x8000; // CSOF15

    static constexpr uint32_t DMAMUX_RG0CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_RG0CR_SIG_ID =      // SIG_ID
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t DMAMUX_RG0CR_OIE = 0x100;  // OIE
    static constexpr uint32_t DMAMUX_RG0CR_GE = 0x10000; // GE
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_RG0CR_GPOL =        // GPOL
        bit_field_t<17, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_RG0CR_GNBREQ =      // GNBREQ
        bit_field_t<19, 0x1f>::value<X>();

    static constexpr uint32_t DMAMUX_RG1CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_RG1CR_SIG_ID =      // SIG_ID
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t DMAMUX_RG1CR_OIE = 0x100;  // OIE
    static constexpr uint32_t DMAMUX_RG1CR_GE = 0x10000; // GE
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_RG1CR_GPOL =        // GPOL
        bit_field_t<17, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_RG1CR_GNBREQ =      // GNBREQ
        bit_field_t<19, 0x1f>::value<X>();

    static constexpr uint32_t DMAMUX_RG2CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_RG2CR_SIG_ID =      // SIG_ID
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t DMAMUX_RG2CR_OIE = 0x100;  // OIE
    static constexpr uint32_t DMAMUX_RG2CR_GE = 0x10000; // GE
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_RG2CR_GPOL =        // GPOL
        bit_field_t<17, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_RG2CR_GNBREQ =      // GNBREQ
        bit_field_t<19, 0x1f>::value<X>();

    static constexpr uint32_t DMAMUX_RG3CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_RG3CR_SIG_ID =      // SIG_ID
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t DMAMUX_RG3CR_OIE = 0x100;  // OIE
    static constexpr uint32_t DMAMUX_RG3CR_GE = 0x10000; // GE
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_RG3CR_GPOL =        // GPOL
        bit_field_t<17, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_RG3CR_GNBREQ =      // GNBREQ
        bit_field_t<19, 0x1f>::value<X>();

    static constexpr uint32_t DMAMUX_RG4CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_RG4CR_SIG_ID =      // SIG_ID
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t DMAMUX_RG4CR_OIE = 0x100;  // OIE
    static constexpr uint32_t DMAMUX_RG4CR_GE = 0x10000; // GE
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_RG4CR_GPOL =        // GPOL
        bit_field_t<17, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_RG4CR_GNBREQ =      // GNBREQ
        bit_field_t<19, 0x1f>::value<X>();

    static constexpr uint32_t DMAMUX_RG5CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_RG5CR_SIG_ID =      // SIG_ID
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t DMAMUX_RG5CR_OIE = 0x100;  // OIE
    static constexpr uint32_t DMAMUX_RG5CR_GE = 0x10000; // GE
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_RG5CR_GPOL =        // GPOL
        bit_field_t<17, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_RG5CR_GNBREQ =      // GNBREQ
        bit_field_t<19, 0x1f>::value<X>();

    static constexpr uint32_t DMAMUX_RG6CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_RG6CR_SIG_ID =      // SIG_ID
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t DMAMUX_RG6CR_OIE = 0x100;  // OIE
    static constexpr uint32_t DMAMUX_RG6CR_GE = 0x10000; // GE
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_RG6CR_GPOL =        // GPOL
        bit_field_t<17, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_RG6CR_GNBREQ =      // GNBREQ
        bit_field_t<19, 0x1f>::value<X>();

    static constexpr uint32_t DMAMUX_RG7CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_RG7CR_SIG_ID =      // SIG_ID
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t DMAMUX_RG7CR_OIE = 0x100;  // OIE
    static constexpr uint32_t DMAMUX_RG7CR_GE = 0x10000; // GE
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_RG7CR_GPOL =        // GPOL
        bit_field_t<17, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_RG7CR_GNBREQ =      // GNBREQ
        bit_field_t<19, 0x1f>::value<X>();

    static constexpr uint32_t DMAMUX_RGSR_RESET_VALUE = 0x0;
    static constexpr uint32_t DMAMUX_RGSR_OF0 = 0x1;  // OF0
    static constexpr uint32_t DMAMUX_RGSR_OF1 = 0x2;  // OF1
    static constexpr uint32_t DMAMUX_RGSR_OF2 = 0x4;  // OF2
    static constexpr uint32_t DMAMUX_RGSR_OF3 = 0x8;  // OF3
    static constexpr uint32_t DMAMUX_RGSR_OF4 = 0x10; // OF4
    static constexpr uint32_t DMAMUX_RGSR_OF5 = 0x20; // OF5
    static constexpr uint32_t DMAMUX_RGSR_OF6 = 0x40; // OF6
    static constexpr uint32_t DMAMUX_RGSR_OF7 = 0x80; // OF7

    static constexpr uint32_t DMAMUX_RGCFR_RESET_VALUE = 0x0;
    static constexpr uint32_t DMAMUX_RGCFR_COF0 = 0x1;  // COF0
    static constexpr uint32_t DMAMUX_RGCFR_COF1 = 0x2;  // COF1
    static constexpr uint32_t DMAMUX_RGCFR_COF2 = 0x4;  // COF2
    static constexpr uint32_t DMAMUX_RGCFR_COF3 = 0x8;  // COF3
    static constexpr uint32_t DMAMUX_RGCFR_COF4 = 0x10; // COF4
    static constexpr uint32_t DMAMUX_RGCFR_COF5 = 0x20; // COF5
    static constexpr uint32_t DMAMUX_RGCFR_COF6 = 0x40; // COF6
    static constexpr uint32_t DMAMUX_RGCFR_COF7 = 0x80; // COF7

    static constexpr uint32_t DMAMUX_HWCFGR2_RESET_VALUE = 0x8;
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_HWCFGR2_NUM_DMA_EXT_REQ =   // NUM_DMA_EXT_REQ
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DMAMUX_HWCFGR1_RESET_VALUE = 0x8086c10;
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_HWCFGR1_NUM_DMA_STREAMS =      // NUM_DMA_STREAMS
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_HWCFGR1_NUM_DMA_PERIPH_REQ =   // NUM_DMA_PERIPH_REQ
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_HWCFGR1_NUM_DMA_TRIG =         // NUM_DMA_TRIG
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_HWCFGR1_NUM_DMA_REQGEN =       // NUM_DMA_REQGEN
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t DMAMUX_VERR_RESET_VALUE = 0x11;
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_VERR_MINREV =   // MINREV
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_VERR_MAJREV =   // MAJREV
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t DMAMUX_IPIDR_RESET_VALUE = 0x100011;

    static constexpr uint32_t DMAMUX_SIDR_RESET_VALUE = 0xa3c5dd01;
};


template<>
struct peripheral_t<STM32MP15xxx, DMAMUX1>
{
    typedef stm32mp15xxx_dmamux1_t T;
    static T& V;
};

using dmamux1_t = peripheral_t<mcu_svd, DMAMUX1>;

template<int INST> struct dmamux_traits {};

template<> struct dmamux_traits<1>
{
    using dmamux = dmamux1_t;
};

