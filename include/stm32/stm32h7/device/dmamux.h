#pragma once

////
//
//      STM32H7 DMAMUX peripherals
//
///

// DMAMUX1: DMAMUX

struct stm32h742x_dmamux1_t
{
    volatile uint32_t C0CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t C1CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t C2CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t C3CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t C4CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t C5CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t C6CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t C7CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t C8CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t C9CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t C10CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t C11CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t C12CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t C13CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t C14CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t C15CR; // DMAMux - DMA request line multiplexer channel x control register
    reserved_t<0x10> _0x40;
    volatile uint32_t CSR; // DMAMUX request line multiplexer interrupt channel status register
    volatile uint32_t CFR; // DMAMUX request line multiplexer interrupt clear flag register
    reserved_t<0x1e> _0x88;
    volatile uint32_t RG0CR; // DMAMux - DMA request generator channel x control register
    volatile uint32_t RG1CR; // DMAMux - DMA request generator channel x control register
    volatile uint32_t RG2CR; // DMAMux - DMA request generator channel x control register
    volatile uint32_t RG3CR; // DMAMux - DMA request generator channel x control register
    volatile uint32_t RG4CR; // DMAMux - DMA request generator channel x control register
    volatile uint32_t RG5CR; // DMAMux - DMA request generator channel x control register
    volatile uint32_t RG6CR; // DMAMux - DMA request generator channel x control register
    volatile uint32_t RG7CR; // DMAMux - DMA request generator channel x control register
    reserved_t<0x8> _0x120;
    volatile uint32_t RGSR; // DMAMux - DMA request generator status register
    volatile uint32_t RGCFR; // DMAMux - DMA request generator clear flag register

    static constexpr uint32_t C0CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> C0CR_DMAREQ_ID; // Input DMA request line selected
    static constexpr uint32_t C0CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t C0CR_EGE = 0x200; // Event generation enable/disable
    static constexpr uint32_t C0CR_SE = 0x10000; // Synchronous operating mode enable/disable
    typedef bit_field_t<17, 0x3> C0CR_SPOL; // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
    typedef bit_field_t<19, 0x1f> C0CR_NBREQ; // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
    typedef bit_field_t<24, 0x1f> C0CR_SYNC_ID; // Synchronization input selected

    static constexpr uint32_t C1CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> C1CR_DMAREQ_ID; // Input DMA request line selected
    static constexpr uint32_t C1CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t C1CR_EGE = 0x200; // Event generation enable/disable
    static constexpr uint32_t C1CR_SE = 0x10000; // Synchronous operating mode enable/disable
    typedef bit_field_t<17, 0x3> C1CR_SPOL; // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
    typedef bit_field_t<19, 0x1f> C1CR_NBREQ; // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
    typedef bit_field_t<24, 0x1f> C1CR_SYNC_ID; // Synchronization input selected

    static constexpr uint32_t C2CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> C2CR_DMAREQ_ID; // Input DMA request line selected
    static constexpr uint32_t C2CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t C2CR_EGE = 0x200; // Event generation enable/disable
    static constexpr uint32_t C2CR_SE = 0x10000; // Synchronous operating mode enable/disable
    typedef bit_field_t<17, 0x3> C2CR_SPOL; // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
    typedef bit_field_t<19, 0x1f> C2CR_NBREQ; // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
    typedef bit_field_t<24, 0x1f> C2CR_SYNC_ID; // Synchronization input selected

    static constexpr uint32_t C3CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> C3CR_DMAREQ_ID; // Input DMA request line selected
    static constexpr uint32_t C3CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t C3CR_EGE = 0x200; // Event generation enable/disable
    static constexpr uint32_t C3CR_SE = 0x10000; // Synchronous operating mode enable/disable
    typedef bit_field_t<17, 0x3> C3CR_SPOL; // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
    typedef bit_field_t<19, 0x1f> C3CR_NBREQ; // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
    typedef bit_field_t<24, 0x1f> C3CR_SYNC_ID; // Synchronization input selected

    static constexpr uint32_t C4CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> C4CR_DMAREQ_ID; // Input DMA request line selected
    static constexpr uint32_t C4CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t C4CR_EGE = 0x200; // Event generation enable/disable
    static constexpr uint32_t C4CR_SE = 0x10000; // Synchronous operating mode enable/disable
    typedef bit_field_t<17, 0x3> C4CR_SPOL; // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
    typedef bit_field_t<19, 0x1f> C4CR_NBREQ; // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
    typedef bit_field_t<24, 0x1f> C4CR_SYNC_ID; // Synchronization input selected

    static constexpr uint32_t C5CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> C5CR_DMAREQ_ID; // Input DMA request line selected
    static constexpr uint32_t C5CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t C5CR_EGE = 0x200; // Event generation enable/disable
    static constexpr uint32_t C5CR_SE = 0x10000; // Synchronous operating mode enable/disable
    typedef bit_field_t<17, 0x3> C5CR_SPOL; // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
    typedef bit_field_t<19, 0x1f> C5CR_NBREQ; // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
    typedef bit_field_t<24, 0x1f> C5CR_SYNC_ID; // Synchronization input selected

    static constexpr uint32_t C6CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> C6CR_DMAREQ_ID; // Input DMA request line selected
    static constexpr uint32_t C6CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t C6CR_EGE = 0x200; // Event generation enable/disable
    static constexpr uint32_t C6CR_SE = 0x10000; // Synchronous operating mode enable/disable
    typedef bit_field_t<17, 0x3> C6CR_SPOL; // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
    typedef bit_field_t<19, 0x1f> C6CR_NBREQ; // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
    typedef bit_field_t<24, 0x1f> C6CR_SYNC_ID; // Synchronization input selected

    static constexpr uint32_t C7CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> C7CR_DMAREQ_ID; // Input DMA request line selected
    static constexpr uint32_t C7CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t C7CR_EGE = 0x200; // Event generation enable/disable
    static constexpr uint32_t C7CR_SE = 0x10000; // Synchronous operating mode enable/disable
    typedef bit_field_t<17, 0x3> C7CR_SPOL; // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
    typedef bit_field_t<19, 0x1f> C7CR_NBREQ; // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
    typedef bit_field_t<24, 0x1f> C7CR_SYNC_ID; // Synchronization input selected

    static constexpr uint32_t C8CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> C8CR_DMAREQ_ID; // Input DMA request line selected
    static constexpr uint32_t C8CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t C8CR_EGE = 0x200; // Event generation enable/disable
    static constexpr uint32_t C8CR_SE = 0x10000; // Synchronous operating mode enable/disable
    typedef bit_field_t<17, 0x3> C8CR_SPOL; // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
    typedef bit_field_t<19, 0x1f> C8CR_NBREQ; // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
    typedef bit_field_t<24, 0x1f> C8CR_SYNC_ID; // Synchronization input selected

    static constexpr uint32_t C9CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> C9CR_DMAREQ_ID; // Input DMA request line selected
    static constexpr uint32_t C9CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t C9CR_EGE = 0x200; // Event generation enable/disable
    static constexpr uint32_t C9CR_SE = 0x10000; // Synchronous operating mode enable/disable
    typedef bit_field_t<17, 0x3> C9CR_SPOL; // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
    typedef bit_field_t<19, 0x1f> C9CR_NBREQ; // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
    typedef bit_field_t<24, 0x1f> C9CR_SYNC_ID; // Synchronization input selected

    static constexpr uint32_t C10CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> C10CR_DMAREQ_ID; // Input DMA request line selected
    static constexpr uint32_t C10CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t C10CR_EGE = 0x200; // Event generation enable/disable
    static constexpr uint32_t C10CR_SE = 0x10000; // Synchronous operating mode enable/disable
    typedef bit_field_t<17, 0x3> C10CR_SPOL; // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
    typedef bit_field_t<19, 0x1f> C10CR_NBREQ; // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
    typedef bit_field_t<24, 0x1f> C10CR_SYNC_ID; // Synchronization input selected

    static constexpr uint32_t C11CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> C11CR_DMAREQ_ID; // Input DMA request line selected
    static constexpr uint32_t C11CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t C11CR_EGE = 0x200; // Event generation enable/disable
    static constexpr uint32_t C11CR_SE = 0x10000; // Synchronous operating mode enable/disable
    typedef bit_field_t<17, 0x3> C11CR_SPOL; // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
    typedef bit_field_t<19, 0x1f> C11CR_NBREQ; // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
    typedef bit_field_t<24, 0x1f> C11CR_SYNC_ID; // Synchronization input selected

    static constexpr uint32_t C12CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> C12CR_DMAREQ_ID; // Input DMA request line selected
    static constexpr uint32_t C12CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t C12CR_EGE = 0x200; // Event generation enable/disable
    static constexpr uint32_t C12CR_SE = 0x10000; // Synchronous operating mode enable/disable
    typedef bit_field_t<17, 0x3> C12CR_SPOL; // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
    typedef bit_field_t<19, 0x1f> C12CR_NBREQ; // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
    typedef bit_field_t<24, 0x1f> C12CR_SYNC_ID; // Synchronization input selected

    static constexpr uint32_t C13CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> C13CR_DMAREQ_ID; // Input DMA request line selected
    static constexpr uint32_t C13CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t C13CR_EGE = 0x200; // Event generation enable/disable
    static constexpr uint32_t C13CR_SE = 0x10000; // Synchronous operating mode enable/disable
    typedef bit_field_t<17, 0x3> C13CR_SPOL; // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
    typedef bit_field_t<19, 0x1f> C13CR_NBREQ; // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
    typedef bit_field_t<24, 0x1f> C13CR_SYNC_ID; // Synchronization input selected

    static constexpr uint32_t C14CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> C14CR_DMAREQ_ID; // Input DMA request line selected
    static constexpr uint32_t C14CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t C14CR_EGE = 0x200; // Event generation enable/disable
    static constexpr uint32_t C14CR_SE = 0x10000; // Synchronous operating mode enable/disable
    typedef bit_field_t<17, 0x3> C14CR_SPOL; // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
    typedef bit_field_t<19, 0x1f> C14CR_NBREQ; // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
    typedef bit_field_t<24, 0x1f> C14CR_SYNC_ID; // Synchronization input selected

    static constexpr uint32_t C15CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> C15CR_DMAREQ_ID; // Input DMA request line selected
    static constexpr uint32_t C15CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t C15CR_EGE = 0x200; // Event generation enable/disable
    static constexpr uint32_t C15CR_SE = 0x10000; // Synchronous operating mode enable/disable
    typedef bit_field_t<17, 0x3> C15CR_SPOL; // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
    typedef bit_field_t<19, 0x1f> C15CR_NBREQ; // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
    typedef bit_field_t<24, 0x1f> C15CR_SYNC_ID; // Synchronization input selected


    static constexpr uint32_t CSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CSR_SOF; // Synchronization overrun event flag

    static constexpr uint32_t CFR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CFR_CSOF; // Clear synchronization overrun event flag


    static constexpr uint32_t RG0CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> RG0CR_SIG_ID; // DMA request trigger input selected
    static constexpr uint32_t RG0CR_OIE = 0x100; // Interrupt enable at trigger event overrun
    static constexpr uint32_t RG0CR_GE = 0x10000; // DMA request generator channel enable/disable
    typedef bit_field_t<17, 0x3> RG0CR_GPOL; // DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
    typedef bit_field_t<19, 0x1f> RG0CR_GNBREQ; // Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.

    static constexpr uint32_t RG1CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> RG1CR_SIG_ID; // DMA request trigger input selected
    static constexpr uint32_t RG1CR_OIE = 0x100; // Interrupt enable at trigger event overrun
    static constexpr uint32_t RG1CR_GE = 0x10000; // DMA request generator channel enable/disable
    typedef bit_field_t<17, 0x3> RG1CR_GPOL; // DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
    typedef bit_field_t<19, 0x1f> RG1CR_GNBREQ; // Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.

    static constexpr uint32_t RG2CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> RG2CR_SIG_ID; // DMA request trigger input selected
    static constexpr uint32_t RG2CR_OIE = 0x100; // Interrupt enable at trigger event overrun
    static constexpr uint32_t RG2CR_GE = 0x10000; // DMA request generator channel enable/disable
    typedef bit_field_t<17, 0x3> RG2CR_GPOL; // DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
    typedef bit_field_t<19, 0x1f> RG2CR_GNBREQ; // Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.

    static constexpr uint32_t RG3CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> RG3CR_SIG_ID; // DMA request trigger input selected
    static constexpr uint32_t RG3CR_OIE = 0x100; // Interrupt enable at trigger event overrun
    static constexpr uint32_t RG3CR_GE = 0x10000; // DMA request generator channel enable/disable
    typedef bit_field_t<17, 0x3> RG3CR_GPOL; // DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
    typedef bit_field_t<19, 0x1f> RG3CR_GNBREQ; // Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.

    static constexpr uint32_t RG4CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> RG4CR_SIG_ID; // DMA request trigger input selected
    static constexpr uint32_t RG4CR_OIE = 0x100; // Interrupt enable at trigger event overrun
    static constexpr uint32_t RG4CR_GE = 0x10000; // DMA request generator channel enable/disable
    typedef bit_field_t<17, 0x3> RG4CR_GPOL; // DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
    typedef bit_field_t<19, 0x1f> RG4CR_GNBREQ; // Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.

    static constexpr uint32_t RG5CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> RG5CR_SIG_ID; // DMA request trigger input selected
    static constexpr uint32_t RG5CR_OIE = 0x100; // Interrupt enable at trigger event overrun
    static constexpr uint32_t RG5CR_GE = 0x10000; // DMA request generator channel enable/disable
    typedef bit_field_t<17, 0x3> RG5CR_GPOL; // DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
    typedef bit_field_t<19, 0x1f> RG5CR_GNBREQ; // Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.

    static constexpr uint32_t RG6CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> RG6CR_SIG_ID; // DMA request trigger input selected
    static constexpr uint32_t RG6CR_OIE = 0x100; // Interrupt enable at trigger event overrun
    static constexpr uint32_t RG6CR_GE = 0x10000; // DMA request generator channel enable/disable
    typedef bit_field_t<17, 0x3> RG6CR_GPOL; // DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
    typedef bit_field_t<19, 0x1f> RG6CR_GNBREQ; // Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.

    static constexpr uint32_t RG7CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> RG7CR_SIG_ID; // DMA request trigger input selected
    static constexpr uint32_t RG7CR_OIE = 0x100; // Interrupt enable at trigger event overrun
    static constexpr uint32_t RG7CR_GE = 0x10000; // DMA request generator channel enable/disable
    typedef bit_field_t<17, 0x3> RG7CR_GPOL; // DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
    typedef bit_field_t<19, 0x1f> RG7CR_GNBREQ; // Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.


    static constexpr uint32_t RGSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RGSR_OF; // Trigger event overrun flag The flag is set when a trigger event occurs on DMA request generator channel x, while the DMA request generator counter value is lower than GNBREQ. The flag is cleared by writing 1 to the corresponding COFx bit in DMAMUX_RGCFR register.

    static constexpr uint32_t RGCFR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RGCFR_COF; // Clear trigger event overrun flag Upon setting, this bit clears the corresponding overrun flag OFx in the DMAMUX_RGCSR register.
};

// DMAMUX1: DMAMUX

struct stm32h750x_dmamux1_t
{
    volatile uint32_t DMAMUX1_C0CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t DMAMUX1_C1CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t DMAMUX1_C2CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t DMAMUX1_C3CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t DMAMUX1_C4CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t DMAMUX1_C5CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t DMAMUX1_C6CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t DMAMUX1_C7CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t DMAMUX1_C8CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t DMAMUX1_C9CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t DMAMUX1_C10CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t DMAMUX1_C11CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t DMAMUX1_C12CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t DMAMUX1_C13CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t DMAMUX1_C14CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t DMAMUX1_C15CR; // DMAMux - DMA request line multiplexer channel x control register
    reserved_t<0x10> _0x40;
    volatile uint32_t DMAMUX1_CSR; // DMAMUX request line multiplexer interrupt channel status register
    volatile uint32_t DMAMUX1_CFR; // DMAMUX request line multiplexer interrupt clear flag register
    reserved_t<0x1e> _0x88;
    volatile uint32_t DMAMUX1_RG0CR; // DMAMux - DMA request generator channel x control register
    volatile uint32_t DMAMUX1_RG1CR; // DMAMux - DMA request generator channel x control register
    volatile uint32_t DMAMUX1_RG2CR; // DMAMux - DMA request generator channel x control register
    volatile uint32_t DMAMUX1_RG3CR; // DMAMux - DMA request generator channel x control register
    volatile uint32_t DMAMUX1_RG4CR; // DMAMux - DMA request generator channel x control register
    volatile uint32_t DMAMUX1_RG5CR; // DMAMux - DMA request generator channel x control register
    volatile uint32_t DMAMUX1_RG6CR; // DMAMux - DMA request generator channel x control register
    volatile uint32_t DMAMUX1_RG7CR; // DMAMux - DMA request generator channel x control register
    reserved_t<0x8> _0x120;
    volatile uint32_t DMAMUX1_RGSR; // DMAMux - DMA request generator status register
    volatile uint32_t DMAMUX1_RGCFR; // DMAMux - DMA request generator clear flag register

    static constexpr uint32_t DMAMUX1_C0CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DMAMUX1_C0CR_DMAREQ_ID; // Input DMA request line selected
    static constexpr uint32_t DMAMUX1_C0CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t DMAMUX1_C0CR_EGE = 0x200; // Event generation enable/disable
    static constexpr uint32_t DMAMUX1_C0CR_SE = 0x10000; // Synchronous operating mode enable/disable
    typedef bit_field_t<17, 0x3> DMAMUX1_C0CR_SPOL; // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
    typedef bit_field_t<19, 0x1f> DMAMUX1_C0CR_NBREQ; // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
    typedef bit_field_t<24, 0x1f> DMAMUX1_C0CR_SYNC_ID; // Synchronization input selected

    static constexpr uint32_t DMAMUX1_C1CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DMAMUX1_C1CR_DMAREQ_ID; // Input DMA request line selected
    static constexpr uint32_t DMAMUX1_C1CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t DMAMUX1_C1CR_EGE = 0x200; // Event generation enable/disable
    static constexpr uint32_t DMAMUX1_C1CR_SE = 0x10000; // Synchronous operating mode enable/disable
    typedef bit_field_t<17, 0x3> DMAMUX1_C1CR_SPOL; // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
    typedef bit_field_t<19, 0x1f> DMAMUX1_C1CR_NBREQ; // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
    typedef bit_field_t<24, 0x1f> DMAMUX1_C1CR_SYNC_ID; // Synchronization input selected

    static constexpr uint32_t DMAMUX1_C2CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DMAMUX1_C2CR_DMAREQ_ID; // Input DMA request line selected
    static constexpr uint32_t DMAMUX1_C2CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t DMAMUX1_C2CR_EGE = 0x200; // Event generation enable/disable
    static constexpr uint32_t DMAMUX1_C2CR_SE = 0x10000; // Synchronous operating mode enable/disable
    typedef bit_field_t<17, 0x3> DMAMUX1_C2CR_SPOL; // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
    typedef bit_field_t<19, 0x1f> DMAMUX1_C2CR_NBREQ; // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
    typedef bit_field_t<24, 0x1f> DMAMUX1_C2CR_SYNC_ID; // Synchronization input selected

    static constexpr uint32_t DMAMUX1_C3CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DMAMUX1_C3CR_DMAREQ_ID; // Input DMA request line selected
    static constexpr uint32_t DMAMUX1_C3CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t DMAMUX1_C3CR_EGE = 0x200; // Event generation enable/disable
    static constexpr uint32_t DMAMUX1_C3CR_SE = 0x10000; // Synchronous operating mode enable/disable
    typedef bit_field_t<17, 0x3> DMAMUX1_C3CR_SPOL; // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
    typedef bit_field_t<19, 0x1f> DMAMUX1_C3CR_NBREQ; // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
    typedef bit_field_t<24, 0x1f> DMAMUX1_C3CR_SYNC_ID; // Synchronization input selected

    static constexpr uint32_t DMAMUX1_C4CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DMAMUX1_C4CR_DMAREQ_ID; // Input DMA request line selected
    static constexpr uint32_t DMAMUX1_C4CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t DMAMUX1_C4CR_EGE = 0x200; // Event generation enable/disable
    static constexpr uint32_t DMAMUX1_C4CR_SE = 0x10000; // Synchronous operating mode enable/disable
    typedef bit_field_t<17, 0x3> DMAMUX1_C4CR_SPOL; // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
    typedef bit_field_t<19, 0x1f> DMAMUX1_C4CR_NBREQ; // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
    typedef bit_field_t<24, 0x1f> DMAMUX1_C4CR_SYNC_ID; // Synchronization input selected

    static constexpr uint32_t DMAMUX1_C5CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DMAMUX1_C5CR_DMAREQ_ID; // Input DMA request line selected
    static constexpr uint32_t DMAMUX1_C5CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t DMAMUX1_C5CR_EGE = 0x200; // Event generation enable/disable
    static constexpr uint32_t DMAMUX1_C5CR_SE = 0x10000; // Synchronous operating mode enable/disable
    typedef bit_field_t<17, 0x3> DMAMUX1_C5CR_SPOL; // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
    typedef bit_field_t<19, 0x1f> DMAMUX1_C5CR_NBREQ; // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
    typedef bit_field_t<24, 0x1f> DMAMUX1_C5CR_SYNC_ID; // Synchronization input selected

    static constexpr uint32_t DMAMUX1_C6CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DMAMUX1_C6CR_DMAREQ_ID; // Input DMA request line selected
    static constexpr uint32_t DMAMUX1_C6CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t DMAMUX1_C6CR_EGE = 0x200; // Event generation enable/disable
    static constexpr uint32_t DMAMUX1_C6CR_SE = 0x10000; // Synchronous operating mode enable/disable
    typedef bit_field_t<17, 0x3> DMAMUX1_C6CR_SPOL; // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
    typedef bit_field_t<19, 0x1f> DMAMUX1_C6CR_NBREQ; // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
    typedef bit_field_t<24, 0x1f> DMAMUX1_C6CR_SYNC_ID; // Synchronization input selected

    static constexpr uint32_t DMAMUX1_C7CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DMAMUX1_C7CR_DMAREQ_ID; // Input DMA request line selected
    static constexpr uint32_t DMAMUX1_C7CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t DMAMUX1_C7CR_EGE = 0x200; // Event generation enable/disable
    static constexpr uint32_t DMAMUX1_C7CR_SE = 0x10000; // Synchronous operating mode enable/disable
    typedef bit_field_t<17, 0x3> DMAMUX1_C7CR_SPOL; // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
    typedef bit_field_t<19, 0x1f> DMAMUX1_C7CR_NBREQ; // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
    typedef bit_field_t<24, 0x1f> DMAMUX1_C7CR_SYNC_ID; // Synchronization input selected

    static constexpr uint32_t DMAMUX1_C8CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DMAMUX1_C8CR_DMAREQ_ID; // Input DMA request line selected
    static constexpr uint32_t DMAMUX1_C8CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t DMAMUX1_C8CR_EGE = 0x200; // Event generation enable/disable
    static constexpr uint32_t DMAMUX1_C8CR_SE = 0x10000; // Synchronous operating mode enable/disable
    typedef bit_field_t<17, 0x3> DMAMUX1_C8CR_SPOL; // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
    typedef bit_field_t<19, 0x1f> DMAMUX1_C8CR_NBREQ; // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
    typedef bit_field_t<24, 0x1f> DMAMUX1_C8CR_SYNC_ID; // Synchronization input selected

    static constexpr uint32_t DMAMUX1_C9CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DMAMUX1_C9CR_DMAREQ_ID; // Input DMA request line selected
    static constexpr uint32_t DMAMUX1_C9CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t DMAMUX1_C9CR_EGE = 0x200; // Event generation enable/disable
    static constexpr uint32_t DMAMUX1_C9CR_SE = 0x10000; // Synchronous operating mode enable/disable
    typedef bit_field_t<17, 0x3> DMAMUX1_C9CR_SPOL; // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
    typedef bit_field_t<19, 0x1f> DMAMUX1_C9CR_NBREQ; // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
    typedef bit_field_t<24, 0x1f> DMAMUX1_C9CR_SYNC_ID; // Synchronization input selected

    static constexpr uint32_t DMAMUX1_C10CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DMAMUX1_C10CR_DMAREQ_ID; // Input DMA request line selected
    static constexpr uint32_t DMAMUX1_C10CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t DMAMUX1_C10CR_EGE = 0x200; // Event generation enable/disable
    static constexpr uint32_t DMAMUX1_C10CR_SE = 0x10000; // Synchronous operating mode enable/disable
    typedef bit_field_t<17, 0x3> DMAMUX1_C10CR_SPOL; // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
    typedef bit_field_t<19, 0x1f> DMAMUX1_C10CR_NBREQ; // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
    typedef bit_field_t<24, 0x1f> DMAMUX1_C10CR_SYNC_ID; // Synchronization input selected

    static constexpr uint32_t DMAMUX1_C11CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DMAMUX1_C11CR_DMAREQ_ID; // Input DMA request line selected
    static constexpr uint32_t DMAMUX1_C11CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t DMAMUX1_C11CR_EGE = 0x200; // Event generation enable/disable
    static constexpr uint32_t DMAMUX1_C11CR_SE = 0x10000; // Synchronous operating mode enable/disable
    typedef bit_field_t<17, 0x3> DMAMUX1_C11CR_SPOL; // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
    typedef bit_field_t<19, 0x1f> DMAMUX1_C11CR_NBREQ; // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
    typedef bit_field_t<24, 0x1f> DMAMUX1_C11CR_SYNC_ID; // Synchronization input selected

    static constexpr uint32_t DMAMUX1_C12CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DMAMUX1_C12CR_DMAREQ_ID; // Input DMA request line selected
    static constexpr uint32_t DMAMUX1_C12CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t DMAMUX1_C12CR_EGE = 0x200; // Event generation enable/disable
    static constexpr uint32_t DMAMUX1_C12CR_SE = 0x10000; // Synchronous operating mode enable/disable
    typedef bit_field_t<17, 0x3> DMAMUX1_C12CR_SPOL; // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
    typedef bit_field_t<19, 0x1f> DMAMUX1_C12CR_NBREQ; // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
    typedef bit_field_t<24, 0x1f> DMAMUX1_C12CR_SYNC_ID; // Synchronization input selected

    static constexpr uint32_t DMAMUX1_C13CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DMAMUX1_C13CR_DMAREQ_ID; // Input DMA request line selected
    static constexpr uint32_t DMAMUX1_C13CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t DMAMUX1_C13CR_EGE = 0x200; // Event generation enable/disable
    static constexpr uint32_t DMAMUX1_C13CR_SE = 0x10000; // Synchronous operating mode enable/disable
    typedef bit_field_t<17, 0x3> DMAMUX1_C13CR_SPOL; // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
    typedef bit_field_t<19, 0x1f> DMAMUX1_C13CR_NBREQ; // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
    typedef bit_field_t<24, 0x1f> DMAMUX1_C13CR_SYNC_ID; // Synchronization input selected

    static constexpr uint32_t DMAMUX1_C14CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DMAMUX1_C14CR_DMAREQ_ID; // Input DMA request line selected
    static constexpr uint32_t DMAMUX1_C14CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t DMAMUX1_C14CR_EGE = 0x200; // Event generation enable/disable
    static constexpr uint32_t DMAMUX1_C14CR_SE = 0x10000; // Synchronous operating mode enable/disable
    typedef bit_field_t<17, 0x3> DMAMUX1_C14CR_SPOL; // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
    typedef bit_field_t<19, 0x1f> DMAMUX1_C14CR_NBREQ; // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
    typedef bit_field_t<24, 0x1f> DMAMUX1_C14CR_SYNC_ID; // Synchronization input selected

    static constexpr uint32_t DMAMUX1_C15CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DMAMUX1_C15CR_DMAREQ_ID; // Input DMA request line selected
    static constexpr uint32_t DMAMUX1_C15CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t DMAMUX1_C15CR_EGE = 0x200; // Event generation enable/disable
    static constexpr uint32_t DMAMUX1_C15CR_SE = 0x10000; // Synchronous operating mode enable/disable
    typedef bit_field_t<17, 0x3> DMAMUX1_C15CR_SPOL; // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
    typedef bit_field_t<19, 0x1f> DMAMUX1_C15CR_NBREQ; // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
    typedef bit_field_t<24, 0x1f> DMAMUX1_C15CR_SYNC_ID; // Synchronization input selected


    static constexpr uint32_t DMAMUX1_CSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DMAMUX1_CSR_SOF; // Synchronization overrun event flag

    static constexpr uint32_t DMAMUX1_CFR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DMAMUX1_CFR_CSOF; // Clear synchronization overrun event flag


    static constexpr uint32_t DMAMUX1_RG0CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> DMAMUX1_RG0CR_SIG_ID; // DMA request trigger input selected
    static constexpr uint32_t DMAMUX1_RG0CR_OIE = 0x100; // Interrupt enable at trigger event overrun
    static constexpr uint32_t DMAMUX1_RG0CR_GE = 0x10000; // DMA request generator channel enable/disable
    typedef bit_field_t<17, 0x3> DMAMUX1_RG0CR_GPOL; // DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
    typedef bit_field_t<19, 0x1f> DMAMUX1_RG0CR_GNBREQ; // Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.

    static constexpr uint32_t DMAMUX1_RG1CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> DMAMUX1_RG1CR_SIG_ID; // DMA request trigger input selected
    static constexpr uint32_t DMAMUX1_RG1CR_OIE = 0x100; // Interrupt enable at trigger event overrun
    static constexpr uint32_t DMAMUX1_RG1CR_GE = 0x10000; // DMA request generator channel enable/disable
    typedef bit_field_t<17, 0x3> DMAMUX1_RG1CR_GPOL; // DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
    typedef bit_field_t<19, 0x1f> DMAMUX1_RG1CR_GNBREQ; // Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.

    static constexpr uint32_t DMAMUX1_RG2CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> DMAMUX1_RG2CR_SIG_ID; // DMA request trigger input selected
    static constexpr uint32_t DMAMUX1_RG2CR_OIE = 0x100; // Interrupt enable at trigger event overrun
    static constexpr uint32_t DMAMUX1_RG2CR_GE = 0x10000; // DMA request generator channel enable/disable
    typedef bit_field_t<17, 0x3> DMAMUX1_RG2CR_GPOL; // DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
    typedef bit_field_t<19, 0x1f> DMAMUX1_RG2CR_GNBREQ; // Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.

    static constexpr uint32_t DMAMUX1_RG3CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> DMAMUX1_RG3CR_SIG_ID; // DMA request trigger input selected
    static constexpr uint32_t DMAMUX1_RG3CR_OIE = 0x100; // Interrupt enable at trigger event overrun
    static constexpr uint32_t DMAMUX1_RG3CR_GE = 0x10000; // DMA request generator channel enable/disable
    typedef bit_field_t<17, 0x3> DMAMUX1_RG3CR_GPOL; // DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
    typedef bit_field_t<19, 0x1f> DMAMUX1_RG3CR_GNBREQ; // Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.

    static constexpr uint32_t DMAMUX1_RG4CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> DMAMUX1_RG4CR_SIG_ID; // DMA request trigger input selected
    static constexpr uint32_t DMAMUX1_RG4CR_OIE = 0x100; // Interrupt enable at trigger event overrun
    static constexpr uint32_t DMAMUX1_RG4CR_GE = 0x10000; // DMA request generator channel enable/disable
    typedef bit_field_t<17, 0x3> DMAMUX1_RG4CR_GPOL; // DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
    typedef bit_field_t<19, 0x1f> DMAMUX1_RG4CR_GNBREQ; // Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.

    static constexpr uint32_t DMAMUX1_RG5CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> DMAMUX1_RG5CR_SIG_ID; // DMA request trigger input selected
    static constexpr uint32_t DMAMUX1_RG5CR_OIE = 0x100; // Interrupt enable at trigger event overrun
    static constexpr uint32_t DMAMUX1_RG5CR_GE = 0x10000; // DMA request generator channel enable/disable
    typedef bit_field_t<17, 0x3> DMAMUX1_RG5CR_GPOL; // DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
    typedef bit_field_t<19, 0x1f> DMAMUX1_RG5CR_GNBREQ; // Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.

    static constexpr uint32_t DMAMUX1_RG6CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> DMAMUX1_RG6CR_SIG_ID; // DMA request trigger input selected
    static constexpr uint32_t DMAMUX1_RG6CR_OIE = 0x100; // Interrupt enable at trigger event overrun
    static constexpr uint32_t DMAMUX1_RG6CR_GE = 0x10000; // DMA request generator channel enable/disable
    typedef bit_field_t<17, 0x3> DMAMUX1_RG6CR_GPOL; // DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
    typedef bit_field_t<19, 0x1f> DMAMUX1_RG6CR_GNBREQ; // Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.

    static constexpr uint32_t DMAMUX1_RG7CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> DMAMUX1_RG7CR_SIG_ID; // DMA request trigger input selected
    static constexpr uint32_t DMAMUX1_RG7CR_OIE = 0x100; // Interrupt enable at trigger event overrun
    static constexpr uint32_t DMAMUX1_RG7CR_GE = 0x10000; // DMA request generator channel enable/disable
    typedef bit_field_t<17, 0x3> DMAMUX1_RG7CR_GPOL; // DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
    typedef bit_field_t<19, 0x1f> DMAMUX1_RG7CR_GNBREQ; // Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.


    static constexpr uint32_t DMAMUX1_RGSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DMAMUX1_RGSR_OF; // Trigger event overrun flag The flag is set when a trigger event occurs on DMA request generator channel x, while the DMA request generator counter value is lower than GNBREQ. The flag is cleared by writing 1 to the corresponding COFx bit in DMAMUX_RGCFR register.

    static constexpr uint32_t DMAMUX1_RGCFR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DMAMUX1_RGCFR_COF; // Clear trigger event overrun flag Upon setting, this bit clears the corresponding overrun flag OFx in the DMAMUX_RGCSR register.
};

// DMAMUX2: DMAMUX

struct stm32h742x_dmamux2_t
{
    volatile uint32_t C0CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t C1CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t C2CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t C3CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t C4CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t C5CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t C6CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t C7CR; // DMAMux - DMA request line multiplexer channel x control register
    reserved_t<0x18> _0x20;
    volatile uint32_t CSR; // DMAMUX request line multiplexer interrupt channel status register
    volatile uint32_t CFR; // DMAMUX request line multiplexer interrupt clear flag register
    reserved_t<0x1e> _0x88;
    volatile uint32_t RG0CR; // DMAMux - DMA request generator channel x control register
    volatile uint32_t RG1CR; // DMAMux - DMA request generator channel x control register
    volatile uint32_t RG2CR; // DMAMux - DMA request generator channel x control register
    volatile uint32_t RG3CR; // DMAMux - DMA request generator channel x control register
    volatile uint32_t RG4CR; // DMAMux - DMA request generator channel x control register
    volatile uint32_t RG5CR; // DMAMux - DMA request generator channel x control register
    volatile uint32_t RG6CR; // DMAMux - DMA request generator channel x control register
    volatile uint32_t RG7CR; // DMAMux - DMA request generator channel x control register
    reserved_t<0x8> _0x120;
    volatile uint32_t RGSR; // DMAMux - DMA request generator status register
    volatile uint32_t RGCFR; // DMAMux - DMA request generator clear flag register

    static constexpr uint32_t C0CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> C0CR_DMAREQ_ID; // Input DMA request line selected
    static constexpr uint32_t C0CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t C0CR_EGE = 0x200; // Event generation enable/disable
    static constexpr uint32_t C0CR_SE = 0x10000; // Synchronous operating mode enable/disable
    typedef bit_field_t<17, 0x3> C0CR_SPOL; // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
    typedef bit_field_t<19, 0x1f> C0CR_NBREQ; // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
    typedef bit_field_t<24, 0x1f> C0CR_SYNC_ID; // Synchronization input selected

    static constexpr uint32_t C1CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> C1CR_DMAREQ_ID; // Input DMA request line selected
    static constexpr uint32_t C1CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t C1CR_EGE = 0x200; // Event generation enable/disable
    static constexpr uint32_t C1CR_SE = 0x10000; // Synchronous operating mode enable/disable
    typedef bit_field_t<17, 0x3> C1CR_SPOL; // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
    typedef bit_field_t<19, 0x1f> C1CR_NBREQ; // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
    typedef bit_field_t<24, 0x1f> C1CR_SYNC_ID; // Synchronization input selected

    static constexpr uint32_t C2CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> C2CR_DMAREQ_ID; // Input DMA request line selected
    static constexpr uint32_t C2CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t C2CR_EGE = 0x200; // Event generation enable/disable
    static constexpr uint32_t C2CR_SE = 0x10000; // Synchronous operating mode enable/disable
    typedef bit_field_t<17, 0x3> C2CR_SPOL; // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
    typedef bit_field_t<19, 0x1f> C2CR_NBREQ; // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
    typedef bit_field_t<24, 0x1f> C2CR_SYNC_ID; // Synchronization input selected

    static constexpr uint32_t C3CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> C3CR_DMAREQ_ID; // Input DMA request line selected
    static constexpr uint32_t C3CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t C3CR_EGE = 0x200; // Event generation enable/disable
    static constexpr uint32_t C3CR_SE = 0x10000; // Synchronous operating mode enable/disable
    typedef bit_field_t<17, 0x3> C3CR_SPOL; // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
    typedef bit_field_t<19, 0x1f> C3CR_NBREQ; // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
    typedef bit_field_t<24, 0x1f> C3CR_SYNC_ID; // Synchronization input selected

    static constexpr uint32_t C4CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> C4CR_DMAREQ_ID; // Input DMA request line selected
    static constexpr uint32_t C4CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t C4CR_EGE = 0x200; // Event generation enable/disable
    static constexpr uint32_t C4CR_SE = 0x10000; // Synchronous operating mode enable/disable
    typedef bit_field_t<17, 0x3> C4CR_SPOL; // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
    typedef bit_field_t<19, 0x1f> C4CR_NBREQ; // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
    typedef bit_field_t<24, 0x1f> C4CR_SYNC_ID; // Synchronization input selected

    static constexpr uint32_t C5CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> C5CR_DMAREQ_ID; // Input DMA request line selected
    static constexpr uint32_t C5CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t C5CR_EGE = 0x200; // Event generation enable/disable
    static constexpr uint32_t C5CR_SE = 0x10000; // Synchronous operating mode enable/disable
    typedef bit_field_t<17, 0x3> C5CR_SPOL; // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
    typedef bit_field_t<19, 0x1f> C5CR_NBREQ; // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
    typedef bit_field_t<24, 0x1f> C5CR_SYNC_ID; // Synchronization input selected

    static constexpr uint32_t C6CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> C6CR_DMAREQ_ID; // Input DMA request line selected
    static constexpr uint32_t C6CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t C6CR_EGE = 0x200; // Event generation enable/disable
    static constexpr uint32_t C6CR_SE = 0x10000; // Synchronous operating mode enable/disable
    typedef bit_field_t<17, 0x3> C6CR_SPOL; // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
    typedef bit_field_t<19, 0x1f> C6CR_NBREQ; // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
    typedef bit_field_t<24, 0x1f> C6CR_SYNC_ID; // Synchronization input selected

    static constexpr uint32_t C7CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> C7CR_DMAREQ_ID; // Input DMA request line selected
    static constexpr uint32_t C7CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t C7CR_EGE = 0x200; // Event generation enable/disable
    static constexpr uint32_t C7CR_SE = 0x10000; // Synchronous operating mode enable/disable
    typedef bit_field_t<17, 0x3> C7CR_SPOL; // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
    typedef bit_field_t<19, 0x1f> C7CR_NBREQ; // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
    typedef bit_field_t<24, 0x1f> C7CR_SYNC_ID; // Synchronization input selected


    static constexpr uint32_t CSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CSR_SOF; // Synchronization overrun event flag

    static constexpr uint32_t CFR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CFR_CSOF; // Clear synchronization overrun event flag


    static constexpr uint32_t RG0CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> RG0CR_SIG_ID; // DMA request trigger input selected
    static constexpr uint32_t RG0CR_OIE = 0x100; // Interrupt enable at trigger event overrun
    static constexpr uint32_t RG0CR_GE = 0x10000; // DMA request generator channel enable/disable
    typedef bit_field_t<17, 0x3> RG0CR_GPOL; // DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
    typedef bit_field_t<19, 0x1f> RG0CR_GNBREQ; // Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.

    static constexpr uint32_t RG1CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> RG1CR_SIG_ID; // DMA request trigger input selected
    static constexpr uint32_t RG1CR_OIE = 0x100; // Interrupt enable at trigger event overrun
    static constexpr uint32_t RG1CR_GE = 0x10000; // DMA request generator channel enable/disable
    typedef bit_field_t<17, 0x3> RG1CR_GPOL; // DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
    typedef bit_field_t<19, 0x1f> RG1CR_GNBREQ; // Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.

    static constexpr uint32_t RG2CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> RG2CR_SIG_ID; // DMA request trigger input selected
    static constexpr uint32_t RG2CR_OIE = 0x100; // Interrupt enable at trigger event overrun
    static constexpr uint32_t RG2CR_GE = 0x10000; // DMA request generator channel enable/disable
    typedef bit_field_t<17, 0x3> RG2CR_GPOL; // DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
    typedef bit_field_t<19, 0x1f> RG2CR_GNBREQ; // Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.

    static constexpr uint32_t RG3CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> RG3CR_SIG_ID; // DMA request trigger input selected
    static constexpr uint32_t RG3CR_OIE = 0x100; // Interrupt enable at trigger event overrun
    static constexpr uint32_t RG3CR_GE = 0x10000; // DMA request generator channel enable/disable
    typedef bit_field_t<17, 0x3> RG3CR_GPOL; // DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
    typedef bit_field_t<19, 0x1f> RG3CR_GNBREQ; // Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.

    static constexpr uint32_t RG4CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> RG4CR_SIG_ID; // DMA request trigger input selected
    static constexpr uint32_t RG4CR_OIE = 0x100; // Interrupt enable at trigger event overrun
    static constexpr uint32_t RG4CR_GE = 0x10000; // DMA request generator channel enable/disable
    typedef bit_field_t<17, 0x3> RG4CR_GPOL; // DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
    typedef bit_field_t<19, 0x1f> RG4CR_GNBREQ; // Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.

    static constexpr uint32_t RG5CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> RG5CR_SIG_ID; // DMA request trigger input selected
    static constexpr uint32_t RG5CR_OIE = 0x100; // Interrupt enable at trigger event overrun
    static constexpr uint32_t RG5CR_GE = 0x10000; // DMA request generator channel enable/disable
    typedef bit_field_t<17, 0x3> RG5CR_GPOL; // DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
    typedef bit_field_t<19, 0x1f> RG5CR_GNBREQ; // Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.

    static constexpr uint32_t RG6CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> RG6CR_SIG_ID; // DMA request trigger input selected
    static constexpr uint32_t RG6CR_OIE = 0x100; // Interrupt enable at trigger event overrun
    static constexpr uint32_t RG6CR_GE = 0x10000; // DMA request generator channel enable/disable
    typedef bit_field_t<17, 0x3> RG6CR_GPOL; // DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
    typedef bit_field_t<19, 0x1f> RG6CR_GNBREQ; // Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.

    static constexpr uint32_t RG7CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> RG7CR_SIG_ID; // DMA request trigger input selected
    static constexpr uint32_t RG7CR_OIE = 0x100; // Interrupt enable at trigger event overrun
    static constexpr uint32_t RG7CR_GE = 0x10000; // DMA request generator channel enable/disable
    typedef bit_field_t<17, 0x3> RG7CR_GPOL; // DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
    typedef bit_field_t<19, 0x1f> RG7CR_GNBREQ; // Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.


    static constexpr uint32_t RGSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RGSR_OF; // Trigger event overrun flag The flag is set when a trigger event occurs on DMA request generator channel x, while the DMA request generator counter value is lower than GNBREQ. The flag is cleared by writing 1 to the corresponding COFx bit in DMAMUX_RGCFR register.

    static constexpr uint32_t RGCFR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RGCFR_COF; // Clear trigger event overrun flag Upon setting, this bit clears the corresponding overrun flag OFx in the DMAMUX_RGCSR register.
};

// DMAMUX2: DMAMUX

struct stm32h750x_dmamux2_t
{
    volatile uint32_t DMAMUX2_C0CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t DMAMUX2_C1CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t DMAMUX2_C2CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t DMAMUX2_C3CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t DMAMUX2_C4CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t DMAMUX2_C5CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t DMAMUX2_C6CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t DMAMUX2_C7CR; // DMAMux - DMA request line multiplexer channel x control register
    reserved_t<0x18> _0x20;
    volatile uint32_t DMAMUX2_CSR; // DMAMUX request line multiplexer interrupt channel status register
    volatile uint32_t DMAMUX2_CFR; // DMAMUX request line multiplexer interrupt clear flag register
    reserved_t<0x1e> _0x88;
    volatile uint32_t DMAMUX2_RG0CR; // DMAMux - DMA request generator channel x control register
    volatile uint32_t DMAMUX2_RG1CR; // DMAMux - DMA request generator channel x control register
    volatile uint32_t DMAMUX2_RG2CR; // DMAMux - DMA request generator channel x control register
    volatile uint32_t DMAMUX2_RG3CR; // DMAMux - DMA request generator channel x control register
    volatile uint32_t DMAMUX2_RG4CR; // DMAMux - DMA request generator channel x control register
    volatile uint32_t DMAMUX2_RG5CR; // DMAMux - DMA request generator channel x control register
    volatile uint32_t DMAMUX2_RG6CR; // DMAMux - DMA request generator channel x control register
    volatile uint32_t DMAMUX2_RG7CR; // DMAMux - DMA request generator channel x control register
    reserved_t<0x8> _0x120;
    volatile uint32_t DMAMUX2_RGSR; // DMAMux - DMA request generator status register
    volatile uint32_t DMAMUX2_RGCFR; // DMAMux - DMA request generator clear flag register

    static constexpr uint32_t DMAMUX2_C0CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DMAMUX2_C0CR_DMAREQ_ID; // Input DMA request line selected
    static constexpr uint32_t DMAMUX2_C0CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t DMAMUX2_C0CR_EGE = 0x200; // Event generation enable/disable
    static constexpr uint32_t DMAMUX2_C0CR_SE = 0x10000; // Synchronous operating mode enable/disable
    typedef bit_field_t<17, 0x3> DMAMUX2_C0CR_SPOL; // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
    typedef bit_field_t<19, 0x1f> DMAMUX2_C0CR_NBREQ; // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
    typedef bit_field_t<24, 0x1f> DMAMUX2_C0CR_SYNC_ID; // Synchronization input selected

    static constexpr uint32_t DMAMUX2_C1CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DMAMUX2_C1CR_DMAREQ_ID; // Input DMA request line selected
    static constexpr uint32_t DMAMUX2_C1CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t DMAMUX2_C1CR_EGE = 0x200; // Event generation enable/disable
    static constexpr uint32_t DMAMUX2_C1CR_SE = 0x10000; // Synchronous operating mode enable/disable
    typedef bit_field_t<17, 0x3> DMAMUX2_C1CR_SPOL; // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
    typedef bit_field_t<19, 0x1f> DMAMUX2_C1CR_NBREQ; // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
    typedef bit_field_t<24, 0x1f> DMAMUX2_C1CR_SYNC_ID; // Synchronization input selected

    static constexpr uint32_t DMAMUX2_C2CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DMAMUX2_C2CR_DMAREQ_ID; // Input DMA request line selected
    static constexpr uint32_t DMAMUX2_C2CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t DMAMUX2_C2CR_EGE = 0x200; // Event generation enable/disable
    static constexpr uint32_t DMAMUX2_C2CR_SE = 0x10000; // Synchronous operating mode enable/disable
    typedef bit_field_t<17, 0x3> DMAMUX2_C2CR_SPOL; // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
    typedef bit_field_t<19, 0x1f> DMAMUX2_C2CR_NBREQ; // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
    typedef bit_field_t<24, 0x1f> DMAMUX2_C2CR_SYNC_ID; // Synchronization input selected

    static constexpr uint32_t DMAMUX2_C3CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DMAMUX2_C3CR_DMAREQ_ID; // Input DMA request line selected
    static constexpr uint32_t DMAMUX2_C3CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t DMAMUX2_C3CR_EGE = 0x200; // Event generation enable/disable
    static constexpr uint32_t DMAMUX2_C3CR_SE = 0x10000; // Synchronous operating mode enable/disable
    typedef bit_field_t<17, 0x3> DMAMUX2_C3CR_SPOL; // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
    typedef bit_field_t<19, 0x1f> DMAMUX2_C3CR_NBREQ; // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
    typedef bit_field_t<24, 0x1f> DMAMUX2_C3CR_SYNC_ID; // Synchronization input selected

    static constexpr uint32_t DMAMUX2_C4CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DMAMUX2_C4CR_DMAREQ_ID; // Input DMA request line selected
    static constexpr uint32_t DMAMUX2_C4CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t DMAMUX2_C4CR_EGE = 0x200; // Event generation enable/disable
    static constexpr uint32_t DMAMUX2_C4CR_SE = 0x10000; // Synchronous operating mode enable/disable
    typedef bit_field_t<17, 0x3> DMAMUX2_C4CR_SPOL; // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
    typedef bit_field_t<19, 0x1f> DMAMUX2_C4CR_NBREQ; // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
    typedef bit_field_t<24, 0x1f> DMAMUX2_C4CR_SYNC_ID; // Synchronization input selected

    static constexpr uint32_t DMAMUX2_C5CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DMAMUX2_C5CR_DMAREQ_ID; // Input DMA request line selected
    static constexpr uint32_t DMAMUX2_C5CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t DMAMUX2_C5CR_EGE = 0x200; // Event generation enable/disable
    static constexpr uint32_t DMAMUX2_C5CR_SE = 0x10000; // Synchronous operating mode enable/disable
    typedef bit_field_t<17, 0x3> DMAMUX2_C5CR_SPOL; // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
    typedef bit_field_t<19, 0x1f> DMAMUX2_C5CR_NBREQ; // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
    typedef bit_field_t<24, 0x1f> DMAMUX2_C5CR_SYNC_ID; // Synchronization input selected

    static constexpr uint32_t DMAMUX2_C6CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DMAMUX2_C6CR_DMAREQ_ID; // Input DMA request line selected
    static constexpr uint32_t DMAMUX2_C6CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t DMAMUX2_C6CR_EGE = 0x200; // Event generation enable/disable
    static constexpr uint32_t DMAMUX2_C6CR_SE = 0x10000; // Synchronous operating mode enable/disable
    typedef bit_field_t<17, 0x3> DMAMUX2_C6CR_SPOL; // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
    typedef bit_field_t<19, 0x1f> DMAMUX2_C6CR_NBREQ; // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
    typedef bit_field_t<24, 0x1f> DMAMUX2_C6CR_SYNC_ID; // Synchronization input selected

    static constexpr uint32_t DMAMUX2_C7CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DMAMUX2_C7CR_DMAREQ_ID; // Input DMA request line selected
    static constexpr uint32_t DMAMUX2_C7CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t DMAMUX2_C7CR_EGE = 0x200; // Event generation enable/disable
    static constexpr uint32_t DMAMUX2_C7CR_SE = 0x10000; // Synchronous operating mode enable/disable
    typedef bit_field_t<17, 0x3> DMAMUX2_C7CR_SPOL; // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
    typedef bit_field_t<19, 0x1f> DMAMUX2_C7CR_NBREQ; // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
    typedef bit_field_t<24, 0x1f> DMAMUX2_C7CR_SYNC_ID; // Synchronization input selected


    static constexpr uint32_t DMAMUX2_CSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DMAMUX2_CSR_SOF; // Synchronization overrun event flag

    static constexpr uint32_t DMAMUX2_CFR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DMAMUX2_CFR_CSOF; // Clear synchronization overrun event flag


    static constexpr uint32_t DMAMUX2_RG0CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> DMAMUX2_RG0CR_SIG_ID; // DMA request trigger input selected
    static constexpr uint32_t DMAMUX2_RG0CR_OIE = 0x100; // Interrupt enable at trigger event overrun
    static constexpr uint32_t DMAMUX2_RG0CR_GE = 0x10000; // DMA request generator channel enable/disable
    typedef bit_field_t<17, 0x3> DMAMUX2_RG0CR_GPOL; // DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
    typedef bit_field_t<19, 0x1f> DMAMUX2_RG0CR_GNBREQ; // Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.

    static constexpr uint32_t DMAMUX2_RG1CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> DMAMUX2_RG1CR_SIG_ID; // DMA request trigger input selected
    static constexpr uint32_t DMAMUX2_RG1CR_OIE = 0x100; // Interrupt enable at trigger event overrun
    static constexpr uint32_t DMAMUX2_RG1CR_GE = 0x10000; // DMA request generator channel enable/disable
    typedef bit_field_t<17, 0x3> DMAMUX2_RG1CR_GPOL; // DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
    typedef bit_field_t<19, 0x1f> DMAMUX2_RG1CR_GNBREQ; // Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.

    static constexpr uint32_t DMAMUX2_RG2CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> DMAMUX2_RG2CR_SIG_ID; // DMA request trigger input selected
    static constexpr uint32_t DMAMUX2_RG2CR_OIE = 0x100; // Interrupt enable at trigger event overrun
    static constexpr uint32_t DMAMUX2_RG2CR_GE = 0x10000; // DMA request generator channel enable/disable
    typedef bit_field_t<17, 0x3> DMAMUX2_RG2CR_GPOL; // DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
    typedef bit_field_t<19, 0x1f> DMAMUX2_RG2CR_GNBREQ; // Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.

    static constexpr uint32_t DMAMUX2_RG3CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> DMAMUX2_RG3CR_SIG_ID; // DMA request trigger input selected
    static constexpr uint32_t DMAMUX2_RG3CR_OIE = 0x100; // Interrupt enable at trigger event overrun
    static constexpr uint32_t DMAMUX2_RG3CR_GE = 0x10000; // DMA request generator channel enable/disable
    typedef bit_field_t<17, 0x3> DMAMUX2_RG3CR_GPOL; // DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
    typedef bit_field_t<19, 0x1f> DMAMUX2_RG3CR_GNBREQ; // Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.

    static constexpr uint32_t DMAMUX2_RG4CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> DMAMUX2_RG4CR_SIG_ID; // DMA request trigger input selected
    static constexpr uint32_t DMAMUX2_RG4CR_OIE = 0x100; // Interrupt enable at trigger event overrun
    static constexpr uint32_t DMAMUX2_RG4CR_GE = 0x10000; // DMA request generator channel enable/disable
    typedef bit_field_t<17, 0x3> DMAMUX2_RG4CR_GPOL; // DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
    typedef bit_field_t<19, 0x1f> DMAMUX2_RG4CR_GNBREQ; // Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.

    static constexpr uint32_t DMAMUX2_RG5CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> DMAMUX2_RG5CR_SIG_ID; // DMA request trigger input selected
    static constexpr uint32_t DMAMUX2_RG5CR_OIE = 0x100; // Interrupt enable at trigger event overrun
    static constexpr uint32_t DMAMUX2_RG5CR_GE = 0x10000; // DMA request generator channel enable/disable
    typedef bit_field_t<17, 0x3> DMAMUX2_RG5CR_GPOL; // DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
    typedef bit_field_t<19, 0x1f> DMAMUX2_RG5CR_GNBREQ; // Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.

    static constexpr uint32_t DMAMUX2_RG6CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> DMAMUX2_RG6CR_SIG_ID; // DMA request trigger input selected
    static constexpr uint32_t DMAMUX2_RG6CR_OIE = 0x100; // Interrupt enable at trigger event overrun
    static constexpr uint32_t DMAMUX2_RG6CR_GE = 0x10000; // DMA request generator channel enable/disable
    typedef bit_field_t<17, 0x3> DMAMUX2_RG6CR_GPOL; // DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
    typedef bit_field_t<19, 0x1f> DMAMUX2_RG6CR_GNBREQ; // Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.

    static constexpr uint32_t DMAMUX2_RG7CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> DMAMUX2_RG7CR_SIG_ID; // DMA request trigger input selected
    static constexpr uint32_t DMAMUX2_RG7CR_OIE = 0x100; // Interrupt enable at trigger event overrun
    static constexpr uint32_t DMAMUX2_RG7CR_GE = 0x10000; // DMA request generator channel enable/disable
    typedef bit_field_t<17, 0x3> DMAMUX2_RG7CR_GPOL; // DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
    typedef bit_field_t<19, 0x1f> DMAMUX2_RG7CR_GNBREQ; // Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.


    static constexpr uint32_t DMAMUX2_RGSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DMAMUX2_RGSR_OF; // Trigger event overrun flag The flag is set when a trigger event occurs on DMA request generator channel x, while the DMA request generator counter value is lower than GNBREQ. The flag is cleared by writing 1 to the corresponding COFx bit in DMAMUX_RGCFR register.

    static constexpr uint32_t DMAMUX2_RGCFR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DMAMUX2_RGCFR_COF; // Clear trigger event overrun flag Upon setting, this bit clears the corresponding overrun flag OFx in the DMAMUX_RGCSR register.
};

template<>
struct peripheral_t<STM32H742x, DMAMUX1>
{
    using T = stm32h742x_dmamux1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, DMAMUX1>
{
    using T = stm32h742x_dmamux1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, DMAMUX1>
{
    using T = stm32h742x_dmamux1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, DMAMUX1>
{
    using T = stm32h742x_dmamux1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, DMAMUX1>
{
    using T = stm32h742x_dmamux1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, DMAMUX1>
{
    using T = stm32h742x_dmamux1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, DMAMUX1>
{
    using T = stm32h742x_dmamux1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, DMAMUX1>
{
    using T = stm32h742x_dmamux1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, DMAMUX1>
{
    using T = stm32h742x_dmamux1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, DMAMUX1>
{
    using T = stm32h742x_dmamux1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, DMAMUX1>
{
    using T = stm32h742x_dmamux1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, DMAMUX1>
{
    using T = stm32h750x_dmamux1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, DMAMUX1>
{
    using T = stm32h750x_dmamux1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, DMAMUX1>
{
    using T = stm32h750x_dmamux1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, DMAMUX1>
{
    using T = stm32h750x_dmamux1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, DMAMUX2>
{
    using T = stm32h742x_dmamux2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, DMAMUX2>
{
    using T = stm32h742x_dmamux2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, DMAMUX2>
{
    using T = stm32h742x_dmamux2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, DMAMUX2>
{
    using T = stm32h742x_dmamux2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, DMAMUX2>
{
    using T = stm32h742x_dmamux2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, DMAMUX2>
{
    using T = stm32h742x_dmamux2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, DMAMUX2>
{
    using T = stm32h742x_dmamux2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, DMAMUX2>
{
    using T = stm32h742x_dmamux2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, DMAMUX2>
{
    using T = stm32h742x_dmamux2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, DMAMUX2>
{
    using T = stm32h742x_dmamux2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, DMAMUX2>
{
    using T = stm32h742x_dmamux2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, DMAMUX2>
{
    using T = stm32h742x_dmamux2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, DMAMUX2>
{
    using T = stm32h750x_dmamux2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, DMAMUX2>
{
    using T = stm32h750x_dmamux2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, DMAMUX2>
{
    using T = stm32h750x_dmamux2_t;
    static T& V;
};

using dmamux1_t = peripheral_t<svd, DMAMUX1>;
using dmamux2_t = peripheral_t<svd, DMAMUX2>;
