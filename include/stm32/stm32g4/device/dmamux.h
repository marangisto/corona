#pragma once

////
//
//      STM32G4 DMAMUX peripherals
//
////

////
//
//      DMAMUX
//
////

struct stm32g431xx_dmamux_t
{
    volatile uint32_t C0CR;  // [read-write] DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t C1CR;  // [read-write] DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t C2CR;  // [read-write] DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t C3CR;  // [read-write] DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t C4CR;  // [read-write] DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t C5CR;  // [read-write] DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t C6CR;  // [read-write] DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t C7CR;  // [read-write] DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t C8CR;  // [read-write] DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t C9CR;  // [read-write] DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t C10CR; // [read-write] DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t C11CR; // [read-write] DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t C12CR; // [read-write] DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t C13CR; // [read-write] DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t C14CR; // [read-write] DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t C15CR; // [read-write] DMAMux - DMA request line multiplexer channel x control register
    reserved_t<0x10> _0x80;
    volatile uint32_t CSR;   // [read-only] DMAMUX request line multiplexer interrupt channel status register
    volatile uint32_t CFR;   // [write-only] DMAMUX request line multiplexer interrupt clear flag register
    reserved_t<0x1e> _0x100;
    volatile uint32_t RG0CR; // [read-write] DMAMux - DMA request generator channel x control register
    volatile uint32_t RG1CR; // [read-write] DMAMux - DMA request generator channel x control register
    volatile uint32_t RG2CR; // [read-write] DMAMux - DMA request generator channel x control register
    volatile uint32_t RG3CR; // [read-write] DMAMux - DMA request generator channel x control register
    reserved_t<0xc> _0x140;
    volatile uint32_t RGSR;  // [read-only] DMAMux - DMA request generator status register
    volatile uint32_t RGCFR; // [write-only] DMAMux - DMA request generator clear flag register

    static constexpr uint32_t C0CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C0CR_DMAREQ_ID =   // Input DMA request line selected
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t C0CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t C0CR_EGE = 0x200;  // Event generation enable/disable
    static constexpr uint32_t C0CR_SE = 0x10000; // Synchronous operating mode enable/disable
    template<uint32_t X>
    static constexpr uint32_t C0CR_SPOL =        // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
        bit_field_t<17, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C0CR_NBREQ =       // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C0CR_SYNC_ID =     // Synchronization input selected
        bit_field_t<24, 0x1f>::value<X>();

    static constexpr uint32_t C1CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C1CR_DMAREQ_ID =   // Input DMA request line selected
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t C1CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t C1CR_EGE = 0x200;  // Event generation enable/disable
    static constexpr uint32_t C1CR_SE = 0x10000; // Synchronous operating mode enable/disable
    template<uint32_t X>
    static constexpr uint32_t C1CR_SPOL =        // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
        bit_field_t<17, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C1CR_NBREQ =       // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C1CR_SYNC_ID =     // Synchronization input selected
        bit_field_t<24, 0x1f>::value<X>();

    static constexpr uint32_t C2CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C2CR_DMAREQ_ID =   // Input DMA request line selected
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t C2CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t C2CR_EGE = 0x200;  // Event generation enable/disable
    static constexpr uint32_t C2CR_SE = 0x10000; // Synchronous operating mode enable/disable
    template<uint32_t X>
    static constexpr uint32_t C2CR_SPOL =        // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
        bit_field_t<17, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C2CR_NBREQ =       // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C2CR_SYNC_ID =     // Synchronization input selected
        bit_field_t<24, 0x1f>::value<X>();

    static constexpr uint32_t C3CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C3CR_DMAREQ_ID =   // Input DMA request line selected
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t C3CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t C3CR_EGE = 0x200;  // Event generation enable/disable
    static constexpr uint32_t C3CR_SE = 0x10000; // Synchronous operating mode enable/disable
    template<uint32_t X>
    static constexpr uint32_t C3CR_SPOL =        // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
        bit_field_t<17, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C3CR_NBREQ =       // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C3CR_SYNC_ID =     // Synchronization input selected
        bit_field_t<24, 0x1f>::value<X>();

    static constexpr uint32_t C4CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C4CR_DMAREQ_ID =   // Input DMA request line selected
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t C4CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t C4CR_EGE = 0x200;  // Event generation enable/disable
    static constexpr uint32_t C4CR_SE = 0x10000; // Synchronous operating mode enable/disable
    template<uint32_t X>
    static constexpr uint32_t C4CR_SPOL =        // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
        bit_field_t<17, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C4CR_NBREQ =       // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C4CR_SYNC_ID =     // Synchronization input selected
        bit_field_t<24, 0x1f>::value<X>();

    static constexpr uint32_t C5CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C5CR_DMAREQ_ID =   // Input DMA request line selected
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t C5CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t C5CR_EGE = 0x200;  // Event generation enable/disable
    static constexpr uint32_t C5CR_SE = 0x10000; // Synchronous operating mode enable/disable
    template<uint32_t X>
    static constexpr uint32_t C5CR_SPOL =        // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
        bit_field_t<17, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C5CR_NBREQ =       // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C5CR_SYNC_ID =     // Synchronization input selected
        bit_field_t<24, 0x1f>::value<X>();

    static constexpr uint32_t C6CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C6CR_DMAREQ_ID =   // Input DMA request line selected
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t C6CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t C6CR_EGE = 0x200;  // Event generation enable/disable
    static constexpr uint32_t C6CR_SE = 0x10000; // Synchronous operating mode enable/disable
    template<uint32_t X>
    static constexpr uint32_t C6CR_SPOL =        // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
        bit_field_t<17, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C6CR_NBREQ =       // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C6CR_SYNC_ID =     // Synchronization input selected
        bit_field_t<24, 0x1f>::value<X>();

    static constexpr uint32_t C7CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C7CR_DMAREQ_ID =   // Input DMA request line selected
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t C7CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t C7CR_EGE = 0x200;  // Event generation enable/disable
    static constexpr uint32_t C7CR_SE = 0x10000; // Synchronous operating mode enable/disable
    template<uint32_t X>
    static constexpr uint32_t C7CR_SPOL =        // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
        bit_field_t<17, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C7CR_NBREQ =       // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C7CR_SYNC_ID =     // Synchronization input selected
        bit_field_t<24, 0x1f>::value<X>();

    static constexpr uint32_t C8CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C8CR_DMAREQ_ID =   // Input DMA request line selected
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t C8CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t C8CR_EGE = 0x200;  // Event generation enable/disable
    static constexpr uint32_t C8CR_SE = 0x10000; // Synchronous operating mode enable/disable
    template<uint32_t X>
    static constexpr uint32_t C8CR_SPOL =        // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
        bit_field_t<17, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C8CR_NBREQ =       // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C8CR_SYNC_ID =     // Synchronization input selected
        bit_field_t<24, 0x1f>::value<X>();

    static constexpr uint32_t C9CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C9CR_DMAREQ_ID =   // Input DMA request line selected
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t C9CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t C9CR_EGE = 0x200;  // Event generation enable/disable
    static constexpr uint32_t C9CR_SE = 0x10000; // Synchronous operating mode enable/disable
    template<uint32_t X>
    static constexpr uint32_t C9CR_SPOL =        // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
        bit_field_t<17, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C9CR_NBREQ =       // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C9CR_SYNC_ID =     // Synchronization input selected
        bit_field_t<24, 0x1f>::value<X>();

    static constexpr uint32_t C10CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C10CR_DMAREQ_ID =   // Input DMA request line selected
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t C10CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t C10CR_EGE = 0x200;  // Event generation enable/disable
    static constexpr uint32_t C10CR_SE = 0x10000; // Synchronous operating mode enable/disable
    template<uint32_t X>
    static constexpr uint32_t C10CR_SPOL =        // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
        bit_field_t<17, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C10CR_NBREQ =       // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C10CR_SYNC_ID =     // Synchronization input selected
        bit_field_t<24, 0x1f>::value<X>();

    static constexpr uint32_t C11CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C11CR_DMAREQ_ID =   // Input DMA request line selected
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t C11CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t C11CR_EGE = 0x200;  // Event generation enable/disable
    static constexpr uint32_t C11CR_SE = 0x10000; // Synchronous operating mode enable/disable
    template<uint32_t X>
    static constexpr uint32_t C11CR_SPOL =        // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
        bit_field_t<17, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C11CR_NBREQ =       // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C11CR_SYNC_ID =     // Synchronization input selected
        bit_field_t<24, 0x1f>::value<X>();

    static constexpr uint32_t C12CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C12CR_DMAREQ_ID =   // Input DMA request line selected
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t C12CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t C12CR_EGE = 0x200;  // Event generation enable/disable
    static constexpr uint32_t C12CR_SE = 0x10000; // Synchronous operating mode enable/disable
    template<uint32_t X>
    static constexpr uint32_t C12CR_SPOL =        // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
        bit_field_t<17, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C12CR_NBREQ =       // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C12CR_SYNC_ID =     // Synchronization input selected
        bit_field_t<24, 0x1f>::value<X>();

    static constexpr uint32_t C13CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C13CR_DMAREQ_ID =   // Input DMA request line selected
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t C13CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t C13CR_EGE = 0x200;  // Event generation enable/disable
    static constexpr uint32_t C13CR_SE = 0x10000; // Synchronous operating mode enable/disable
    template<uint32_t X>
    static constexpr uint32_t C13CR_SPOL =        // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
        bit_field_t<17, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C13CR_NBREQ =       // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C13CR_SYNC_ID =     // Synchronization input selected
        bit_field_t<24, 0x1f>::value<X>();

    static constexpr uint32_t C14CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C14CR_DMAREQ_ID =   // Input DMA request line selected
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t C14CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t C14CR_EGE = 0x200;  // Event generation enable/disable
    static constexpr uint32_t C14CR_SE = 0x10000; // Synchronous operating mode enable/disable
    template<uint32_t X>
    static constexpr uint32_t C14CR_SPOL =        // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
        bit_field_t<17, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C14CR_NBREQ =       // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C14CR_SYNC_ID =     // Synchronization input selected
        bit_field_t<24, 0x1f>::value<X>();

    static constexpr uint32_t C15CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t C15CR_DMAREQ_ID =   // Input DMA request line selected
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t C15CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t C15CR_EGE = 0x200;  // Event generation enable/disable
    static constexpr uint32_t C15CR_SE = 0x10000; // Synchronous operating mode enable/disable
    template<uint32_t X>
    static constexpr uint32_t C15CR_SPOL =        // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
        bit_field_t<17, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C15CR_NBREQ =       // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t C15CR_SYNC_ID =     // Synchronization input selected
        bit_field_t<24, 0x1f>::value<X>();

    static constexpr uint32_t RG0CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RG0CR_SIG_ID =      // DMA request trigger input selected
        bit_field_t<0, 0x1f>::value<X>();
    static constexpr uint32_t RG0CR_OIE = 0x100;  // Interrupt enable at trigger event overrun
    static constexpr uint32_t RG0CR_GE = 0x10000; // DMA request generator channel enable/disable
    template<uint32_t X>
    static constexpr uint32_t RG0CR_GPOL =        // DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
        bit_field_t<17, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RG0CR_GNBREQ =      // Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.
        bit_field_t<19, 0x1f>::value<X>();

    static constexpr uint32_t RG1CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RG1CR_SIG_ID =      // DMA request trigger input selected
        bit_field_t<0, 0x1f>::value<X>();
    static constexpr uint32_t RG1CR_OIE = 0x100;  // Interrupt enable at trigger event overrun
    static constexpr uint32_t RG1CR_GE = 0x10000; // DMA request generator channel enable/disable
    template<uint32_t X>
    static constexpr uint32_t RG1CR_GPOL =        // DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
        bit_field_t<17, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RG1CR_GNBREQ =      // Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.
        bit_field_t<19, 0x1f>::value<X>();

    static constexpr uint32_t RG2CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RG2CR_SIG_ID =      // DMA request trigger input selected
        bit_field_t<0, 0x1f>::value<X>();
    static constexpr uint32_t RG2CR_OIE = 0x100;  // Interrupt enable at trigger event overrun
    static constexpr uint32_t RG2CR_GE = 0x10000; // DMA request generator channel enable/disable
    template<uint32_t X>
    static constexpr uint32_t RG2CR_GPOL =        // DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
        bit_field_t<17, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RG2CR_GNBREQ =      // Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.
        bit_field_t<19, 0x1f>::value<X>();

    static constexpr uint32_t RG3CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RG3CR_SIG_ID =      // DMA request trigger input selected
        bit_field_t<0, 0x1f>::value<X>();
    static constexpr uint32_t RG3CR_OIE = 0x100;  // Interrupt enable at trigger event overrun
    static constexpr uint32_t RG3CR_GE = 0x10000; // DMA request generator channel enable/disable
    template<uint32_t X>
    static constexpr uint32_t RG3CR_GPOL =        // DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
        bit_field_t<17, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RG3CR_GNBREQ =      // Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.
        bit_field_t<19, 0x1f>::value<X>();

    static constexpr uint32_t RGSR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RGSR_OF =   // Trigger event overrun flag The flag is set when a trigger event occurs on DMA request generator channel x, while the DMA request generator counter value is lower than GNBREQ. The flag is cleared by writing 1 to the corresponding COFx bit in DMAMUX_RGCFR register.
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t RGCFR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RGCFR_COF =   // Clear trigger event overrun flag Upon setting, this bit clears the corresponding overrun flag OFx in the DMAMUX_RGCSR register.
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t CSR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CSR_SOF =   // Synchronization overrun event flag
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CFR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CFR_CSOF =   // Clear synchronization overrun event flag
        bit_field_t<0, 0xffff>::value<X>();
};


template<>
struct peripheral_t<STM32G431xx, DMAMUX>
{
    typedef stm32g431xx_dmamux_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G441xx, DMAMUX>
{
    typedef stm32g431xx_dmamux_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G471xx, DMAMUX>
{
    typedef stm32g431xx_dmamux_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G473xx, DMAMUX>
{
    typedef stm32g431xx_dmamux_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G474xx, DMAMUX>
{
    typedef stm32g431xx_dmamux_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G483xx, DMAMUX>
{
    typedef stm32g431xx_dmamux_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, DMAMUX>
{
    typedef stm32g431xx_dmamux_t T;
    static T& V;
};

using dmamux_t = peripheral_t<mcu_svd, DMAMUX>;

