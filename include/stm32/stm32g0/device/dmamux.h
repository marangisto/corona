#pragma once

////
//
//      STM32G0 DMAMUX peripherals
//
////

////
//
//      DMAMUX
//
////

struct stm32g030_dmamux_t
{
    volatile uint32_t C0CR;  // [read-write] DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t C1CR;  // [read-write] DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t C2CR;  // [read-write] DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t C3CR;  // [read-write] DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t C4CR;  // [read-write] DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t C5CR;  // [read-write] DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t C6CR;  // [read-write] DMAMux - DMA request line multiplexer channel x control register
    reserved_t<0x39> _0x100;
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
        bit_field_t<0, 0xff>::value<X>();
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
        bit_field_t<0, 0xff>::value<X>();
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
        bit_field_t<0, 0xff>::value<X>();
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
        bit_field_t<0, 0xff>::value<X>();
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
        bit_field_t<0, 0xff>::value<X>();
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
        bit_field_t<0, 0xff>::value<X>();
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
        bit_field_t<0, 0xff>::value<X>();
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
};


////
//
//      DMAMUX
//
////

struct stm32g070_dmamux_t
{
    volatile uint32_t DMAMUX_C0CR;    // [read-write] DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t DMAMUX_C1CR;    // [read-write] DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t DMAMUX_C2CR;    // [read-write] DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t DMAMUX_C3CR;    // [read-write] DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t DMAMUX_C4CR;    // [read-write] DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t DMAMUX_C5CR;    // [read-write] DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t DMAMUX_C6CR;    // [read-write] DMAMux - DMA request line multiplexer channel x control register
    reserved_t<0x19> _0x80;
    volatile uint32_t DMAMUX_CSR;     // [read-only] DMAMUX request line multiplexer interrupt channel status register
    volatile uint32_t DMAMUX_CFR;     // [write-only] DMAMUX request line multiplexer interrupt clear flag register
    reserved_t<0x1e> _0x100;
    volatile uint32_t DMAMUX_RG0CR;   // [read-write] DMAMux - DMA request generator channel x control register
    volatile uint32_t DMAMUX_RG1CR;   // [read-write] DMAMux - DMA request generator channel x control register
    volatile uint32_t DMAMUX_RG2CR;   // [read-write] DMAMux - DMA request generator channel x control register
    volatile uint32_t DMAMUX_RG3CR;   // [read-write] DMAMux - DMA request generator channel x control register
    reserved_t<0xc> _0x140;
    volatile uint32_t DMAMUX_RGSR;    // [read-only] DMAMux - DMA request generator status register
    volatile uint32_t DMAMUX_RGCFR;   // [write-only] DMAMux - DMA request generator clear flag register
    reserved_t<0xa9> _0x3ec;
    volatile uint32_t DMAMUX_HWCFGR2; // [read-only] DMAMUX hardware configuration 2 register
    volatile uint32_t DMAMUX_HWCFGR1; // [read-only] DMAMUX hardware configuration 1 register
    volatile uint32_t DMAMUX_VERR;    // [read-only] DMAMUX version register
    volatile uint32_t DMAMUX_IPIDR;   // [read-only] DMAMUX IP identification register
    volatile uint32_t DMAMUX_SIDR;    // [read-only] DMAMUX size identification register

    static constexpr uint32_t DMAMUX_C0CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C0CR_DMAREQ_ID =   // Input DMA request line selected
        bit_field_t<0, 0xff>::value<X>();
    static constexpr uint32_t DMAMUX_C0CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t DMAMUX_C0CR_EGE = 0x200;  // Event generation enable/disable
    static constexpr uint32_t DMAMUX_C0CR_SE = 0x10000; // Synchronous operating mode enable/disable
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C0CR_SPOL =        // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
        bit_field_t<17, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C0CR_NBREQ =       // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C0CR_SYNC_ID =     // Synchronization input selected
        bit_field_t<24, 0x1f>::value<X>();

    static constexpr uint32_t DMAMUX_C1CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C1CR_DMAREQ_ID =   // Input DMA request line selected
        bit_field_t<0, 0xff>::value<X>();
    static constexpr uint32_t DMAMUX_C1CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t DMAMUX_C1CR_EGE = 0x200;  // Event generation enable/disable
    static constexpr uint32_t DMAMUX_C1CR_SE = 0x10000; // Synchronous operating mode enable/disable
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C1CR_SPOL =        // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
        bit_field_t<17, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C1CR_NBREQ =       // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C1CR_SYNC_ID =     // Synchronization input selected
        bit_field_t<24, 0x1f>::value<X>();

    static constexpr uint32_t DMAMUX_C2CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C2CR_DMAREQ_ID =   // Input DMA request line selected
        bit_field_t<0, 0xff>::value<X>();
    static constexpr uint32_t DMAMUX_C2CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t DMAMUX_C2CR_EGE = 0x200;  // Event generation enable/disable
    static constexpr uint32_t DMAMUX_C2CR_SE = 0x10000; // Synchronous operating mode enable/disable
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C2CR_SPOL =        // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
        bit_field_t<17, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C2CR_NBREQ =       // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C2CR_SYNC_ID =     // Synchronization input selected
        bit_field_t<24, 0x1f>::value<X>();

    static constexpr uint32_t DMAMUX_C3CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C3CR_DMAREQ_ID =   // Input DMA request line selected
        bit_field_t<0, 0xff>::value<X>();
    static constexpr uint32_t DMAMUX_C3CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t DMAMUX_C3CR_EGE = 0x200;  // Event generation enable/disable
    static constexpr uint32_t DMAMUX_C3CR_SE = 0x10000; // Synchronous operating mode enable/disable
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C3CR_SPOL =        // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
        bit_field_t<17, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C3CR_NBREQ =       // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C3CR_SYNC_ID =     // Synchronization input selected
        bit_field_t<24, 0x1f>::value<X>();

    static constexpr uint32_t DMAMUX_C4CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C4CR_DMAREQ_ID =   // Input DMA request line selected
        bit_field_t<0, 0xff>::value<X>();
    static constexpr uint32_t DMAMUX_C4CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t DMAMUX_C4CR_EGE = 0x200;  // Event generation enable/disable
    static constexpr uint32_t DMAMUX_C4CR_SE = 0x10000; // Synchronous operating mode enable/disable
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C4CR_SPOL =        // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
        bit_field_t<17, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C4CR_NBREQ =       // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C4CR_SYNC_ID =     // Synchronization input selected
        bit_field_t<24, 0x1f>::value<X>();

    static constexpr uint32_t DMAMUX_C5CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C5CR_DMAREQ_ID =   // Input DMA request line selected
        bit_field_t<0, 0xff>::value<X>();
    static constexpr uint32_t DMAMUX_C5CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t DMAMUX_C5CR_EGE = 0x200;  // Event generation enable/disable
    static constexpr uint32_t DMAMUX_C5CR_SE = 0x10000; // Synchronous operating mode enable/disable
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C5CR_SPOL =        // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
        bit_field_t<17, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C5CR_NBREQ =       // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C5CR_SYNC_ID =     // Synchronization input selected
        bit_field_t<24, 0x1f>::value<X>();

    static constexpr uint32_t DMAMUX_C6CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C6CR_DMAREQ_ID =   // Input DMA request line selected
        bit_field_t<0, 0xff>::value<X>();
    static constexpr uint32_t DMAMUX_C6CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t DMAMUX_C6CR_EGE = 0x200;  // Event generation enable/disable
    static constexpr uint32_t DMAMUX_C6CR_SE = 0x10000; // Synchronous operating mode enable/disable
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C6CR_SPOL =        // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
        bit_field_t<17, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C6CR_NBREQ =       // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_C6CR_SYNC_ID =     // Synchronization input selected
        bit_field_t<24, 0x1f>::value<X>();

    static constexpr uint32_t DMAMUX_RG0CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_RG0CR_SIG_ID =      // DMA request trigger input selected
        bit_field_t<0, 0x1f>::value<X>();
    static constexpr uint32_t DMAMUX_RG0CR_OIE = 0x100;  // Interrupt enable at trigger event overrun
    static constexpr uint32_t DMAMUX_RG0CR_GE = 0x10000; // DMA request generator channel enable/disable
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_RG0CR_GPOL =        // DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
        bit_field_t<17, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_RG0CR_GNBREQ =      // Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.
        bit_field_t<19, 0x1f>::value<X>();

    static constexpr uint32_t DMAMUX_RG1CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_RG1CR_SIG_ID =      // DMA request trigger input selected
        bit_field_t<0, 0x1f>::value<X>();
    static constexpr uint32_t DMAMUX_RG1CR_OIE = 0x100;  // Interrupt enable at trigger event overrun
    static constexpr uint32_t DMAMUX_RG1CR_GE = 0x10000; // DMA request generator channel enable/disable
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_RG1CR_GPOL =        // DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
        bit_field_t<17, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_RG1CR_GNBREQ =      // Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.
        bit_field_t<19, 0x1f>::value<X>();

    static constexpr uint32_t DMAMUX_RG2CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_RG2CR_SIG_ID =      // DMA request trigger input selected
        bit_field_t<0, 0x1f>::value<X>();
    static constexpr uint32_t DMAMUX_RG2CR_OIE = 0x100;  // Interrupt enable at trigger event overrun
    static constexpr uint32_t DMAMUX_RG2CR_GE = 0x10000; // DMA request generator channel enable/disable
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_RG2CR_GPOL =        // DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
        bit_field_t<17, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_RG2CR_GNBREQ =      // Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.
        bit_field_t<19, 0x1f>::value<X>();

    static constexpr uint32_t DMAMUX_RG3CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_RG3CR_SIG_ID =      // DMA request trigger input selected
        bit_field_t<0, 0x1f>::value<X>();
    static constexpr uint32_t DMAMUX_RG3CR_OIE = 0x100;  // Interrupt enable at trigger event overrun
    static constexpr uint32_t DMAMUX_RG3CR_GE = 0x10000; // DMA request generator channel enable/disable
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_RG3CR_GPOL =        // DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
        bit_field_t<17, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_RG3CR_GNBREQ =      // Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.
        bit_field_t<19, 0x1f>::value<X>();

    static constexpr uint32_t DMAMUX_RGSR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_RGSR_OF =   // Trigger event overrun flag The flag is set when a trigger event occurs on DMA request generator channel x, while the DMA request generator counter value is lower than GNBREQ. The flag is cleared by writing 1 to the corresponding COFx bit in DMAMUX_RGCFR register.
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t DMAMUX_RGCFR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_RGCFR_COF =   // Clear trigger event overrun flag Upon setting, this bit clears the corresponding overrun flag OFx in the DMAMUX_RGCSR register.
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t DMAMUX_CSR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_CSR_SOF =   // Synchronization overrun event flag
        bit_field_t<0, 0x7f>::value<X>();

    static constexpr uint32_t DMAMUX_CFR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_CFR_CSOF =   // Clear synchronization overrun event flag
        bit_field_t<0, 0x7f>::value<X>();

    static constexpr uint32_t DMAMUX_SIDR_RESET_VALUE = 0xa3c5dd01;

    static constexpr uint32_t DMAMUX_IPIDR_RESET_VALUE = 0x100011;

    static constexpr uint32_t DMAMUX_VERR_RESET_VALUE = 0x11;
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_VERR_MINREV =   // Minor IP revision
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_VERR_MAJREV =   // Major IP revision
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t DMAMUX_HWCFGR1_RESET_VALUE = 0x4173907;
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_HWCFGR1_NUM_DMA_STREAMS =      // number of DMA request line multiplexer (output) channels
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_HWCFGR1_NUM_DMA_PERIPH_REQ =   // number of DMA request lines from peripherals
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_HWCFGR1_NUM_DMA_TRIG =         // number of synchronization inputs
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_HWCFGR1_NUM_DMA_REQGEN =       // number of DMA request generator channels
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t DMAMUX_HWCFGR2_RESET_VALUE = 0x17;
    template<uint32_t X>
    static constexpr uint32_t DMAMUX_HWCFGR2_NUM_DMA_EXT_REQ =   // Number of DMA request trigger inputs
        bit_field_t<0, 0xff>::value<X>();
};


template<>
struct peripheral_t<STM32G030, DMAMUX>
{
    typedef stm32g030_dmamux_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G031, DMAMUX>
{
    typedef stm32g030_dmamux_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G041, DMAMUX>
{
    typedef stm32g030_dmamux_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G070, DMAMUX>
{
    typedef stm32g070_dmamux_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G071, DMAMUX>
{
    typedef stm32g070_dmamux_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G081, DMAMUX>
{
    typedef stm32g070_dmamux_t T;
    static T& V;
};

using dmamux_t = peripheral_t<mcu_svd, DMAMUX>;

