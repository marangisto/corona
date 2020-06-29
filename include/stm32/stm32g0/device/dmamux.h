#pragma once

////
//
//      STM32G0 DMAMUX peripherals
//
///

// DMAMUX: DMAMUX

struct stm32g030_dmamux_t
{
    volatile uint32_t C0CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t C1CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t C2CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t C3CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t C4CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t C5CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t C6CR; // DMAMux - DMA request line multiplexer channel x control register
    reserved_t<0x39> _0x1c;
    volatile uint32_t RG0CR; // DMAMux - DMA request generator channel x control register
    volatile uint32_t RG1CR; // DMAMux - DMA request generator channel x control register
    volatile uint32_t RG2CR; // DMAMux - DMA request generator channel x control register
    volatile uint32_t RG3CR; // DMAMux - DMA request generator channel x control register
    reserved_t<0xc> _0x110;
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


    static constexpr uint32_t RGSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> RGSR_OF; // Trigger event overrun flag The flag is set when a trigger event occurs on DMA request generator channel x, while the DMA request generator counter value is lower than GNBREQ. The flag is cleared by writing 1 to the corresponding COFx bit in DMAMUX_RGCFR register.

    static constexpr uint32_t RGCFR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> RGCFR_COF; // Clear trigger event overrun flag Upon setting, this bit clears the corresponding overrun flag OFx in the DMAMUX_RGCSR register.
};

// DMAMUX: DMAMUX

struct stm32g070_dmamux_t
{
    volatile uint32_t DMAMUX_C0CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t DMAMUX_C1CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t DMAMUX_C2CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t DMAMUX_C3CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t DMAMUX_C4CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t DMAMUX_C5CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t DMAMUX_C6CR; // DMAMux - DMA request line multiplexer channel x control register
    reserved_t<0x19> _0x1c;
    volatile uint32_t DMAMUX_CSR; // DMAMUX request line multiplexer interrupt channel status register
    volatile uint32_t DMAMUX_CFR; // DMAMUX request line multiplexer interrupt clear flag register
    reserved_t<0x1e> _0x88;
    volatile uint32_t DMAMUX_RG0CR; // DMAMux - DMA request generator channel x control register
    volatile uint32_t DMAMUX_RG1CR; // DMAMux - DMA request generator channel x control register
    volatile uint32_t DMAMUX_RG2CR; // DMAMux - DMA request generator channel x control register
    volatile uint32_t DMAMUX_RG3CR; // DMAMux - DMA request generator channel x control register
    reserved_t<0xc> _0x110;
    volatile uint32_t DMAMUX_RGSR; // DMAMux - DMA request generator status register
    volatile uint32_t DMAMUX_RGCFR; // DMAMux - DMA request generator clear flag register
    reserved_t<0xa9> _0x148;
    volatile uint32_t DMAMUX_HWCFGR2; // DMAMUX hardware configuration 2 register
    volatile uint32_t DMAMUX_HWCFGR1; // DMAMUX hardware configuration 1 register
    volatile uint32_t DMAMUX_VERR; // DMAMUX version register
    volatile uint32_t DMAMUX_IPIDR; // DMAMUX IP identification register
    volatile uint32_t DMAMUX_SIDR; // DMAMUX size identification register

    static constexpr uint32_t DMAMUX_C0CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DMAMUX_C0CR_DMAREQ_ID; // Input DMA request line selected
    static constexpr uint32_t DMAMUX_C0CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t DMAMUX_C0CR_EGE = 0x200; // Event generation enable/disable
    static constexpr uint32_t DMAMUX_C0CR_SE = 0x10000; // Synchronous operating mode enable/disable
    typedef bit_field_t<17, 0x3> DMAMUX_C0CR_SPOL; // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
    typedef bit_field_t<19, 0x1f> DMAMUX_C0CR_NBREQ; // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
    typedef bit_field_t<24, 0x1f> DMAMUX_C0CR_SYNC_ID; // Synchronization input selected

    static constexpr uint32_t DMAMUX_C1CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DMAMUX_C1CR_DMAREQ_ID; // Input DMA request line selected
    static constexpr uint32_t DMAMUX_C1CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t DMAMUX_C1CR_EGE = 0x200; // Event generation enable/disable
    static constexpr uint32_t DMAMUX_C1CR_SE = 0x10000; // Synchronous operating mode enable/disable
    typedef bit_field_t<17, 0x3> DMAMUX_C1CR_SPOL; // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
    typedef bit_field_t<19, 0x1f> DMAMUX_C1CR_NBREQ; // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
    typedef bit_field_t<24, 0x1f> DMAMUX_C1CR_SYNC_ID; // Synchronization input selected

    static constexpr uint32_t DMAMUX_C2CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DMAMUX_C2CR_DMAREQ_ID; // Input DMA request line selected
    static constexpr uint32_t DMAMUX_C2CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t DMAMUX_C2CR_EGE = 0x200; // Event generation enable/disable
    static constexpr uint32_t DMAMUX_C2CR_SE = 0x10000; // Synchronous operating mode enable/disable
    typedef bit_field_t<17, 0x3> DMAMUX_C2CR_SPOL; // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
    typedef bit_field_t<19, 0x1f> DMAMUX_C2CR_NBREQ; // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
    typedef bit_field_t<24, 0x1f> DMAMUX_C2CR_SYNC_ID; // Synchronization input selected

    static constexpr uint32_t DMAMUX_C3CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DMAMUX_C3CR_DMAREQ_ID; // Input DMA request line selected
    static constexpr uint32_t DMAMUX_C3CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t DMAMUX_C3CR_EGE = 0x200; // Event generation enable/disable
    static constexpr uint32_t DMAMUX_C3CR_SE = 0x10000; // Synchronous operating mode enable/disable
    typedef bit_field_t<17, 0x3> DMAMUX_C3CR_SPOL; // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
    typedef bit_field_t<19, 0x1f> DMAMUX_C3CR_NBREQ; // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
    typedef bit_field_t<24, 0x1f> DMAMUX_C3CR_SYNC_ID; // Synchronization input selected

    static constexpr uint32_t DMAMUX_C4CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DMAMUX_C4CR_DMAREQ_ID; // Input DMA request line selected
    static constexpr uint32_t DMAMUX_C4CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t DMAMUX_C4CR_EGE = 0x200; // Event generation enable/disable
    static constexpr uint32_t DMAMUX_C4CR_SE = 0x10000; // Synchronous operating mode enable/disable
    typedef bit_field_t<17, 0x3> DMAMUX_C4CR_SPOL; // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
    typedef bit_field_t<19, 0x1f> DMAMUX_C4CR_NBREQ; // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
    typedef bit_field_t<24, 0x1f> DMAMUX_C4CR_SYNC_ID; // Synchronization input selected

    static constexpr uint32_t DMAMUX_C5CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DMAMUX_C5CR_DMAREQ_ID; // Input DMA request line selected
    static constexpr uint32_t DMAMUX_C5CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t DMAMUX_C5CR_EGE = 0x200; // Event generation enable/disable
    static constexpr uint32_t DMAMUX_C5CR_SE = 0x10000; // Synchronous operating mode enable/disable
    typedef bit_field_t<17, 0x3> DMAMUX_C5CR_SPOL; // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
    typedef bit_field_t<19, 0x1f> DMAMUX_C5CR_NBREQ; // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
    typedef bit_field_t<24, 0x1f> DMAMUX_C5CR_SYNC_ID; // Synchronization input selected

    static constexpr uint32_t DMAMUX_C6CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DMAMUX_C6CR_DMAREQ_ID; // Input DMA request line selected
    static constexpr uint32_t DMAMUX_C6CR_SOIE = 0x100; // Interrupt enable at synchronization event overrun
    static constexpr uint32_t DMAMUX_C6CR_EGE = 0x200; // Event generation enable/disable
    static constexpr uint32_t DMAMUX_C6CR_SE = 0x10000; // Synchronous operating mode enable/disable
    typedef bit_field_t<17, 0x3> DMAMUX_C6CR_SPOL; // Synchronization event type selector Defines the synchronization event on the selected synchronization input:
    typedef bit_field_t<19, 0x1f> DMAMUX_C6CR_NBREQ; // Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
    typedef bit_field_t<24, 0x1f> DMAMUX_C6CR_SYNC_ID; // Synchronization input selected


    static constexpr uint32_t DMAMUX_CSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7f> DMAMUX_CSR_SOF; // Synchronization overrun event flag

    static constexpr uint32_t DMAMUX_CFR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7f> DMAMUX_CFR_CSOF; // Clear synchronization overrun event flag


    static constexpr uint32_t DMAMUX_RG0CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> DMAMUX_RG0CR_SIG_ID; // DMA request trigger input selected
    static constexpr uint32_t DMAMUX_RG0CR_OIE = 0x100; // Interrupt enable at trigger event overrun
    static constexpr uint32_t DMAMUX_RG0CR_GE = 0x10000; // DMA request generator channel enable/disable
    typedef bit_field_t<17, 0x3> DMAMUX_RG0CR_GPOL; // DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
    typedef bit_field_t<19, 0x1f> DMAMUX_RG0CR_GNBREQ; // Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.

    static constexpr uint32_t DMAMUX_RG1CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> DMAMUX_RG1CR_SIG_ID; // DMA request trigger input selected
    static constexpr uint32_t DMAMUX_RG1CR_OIE = 0x100; // Interrupt enable at trigger event overrun
    static constexpr uint32_t DMAMUX_RG1CR_GE = 0x10000; // DMA request generator channel enable/disable
    typedef bit_field_t<17, 0x3> DMAMUX_RG1CR_GPOL; // DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
    typedef bit_field_t<19, 0x1f> DMAMUX_RG1CR_GNBREQ; // Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.

    static constexpr uint32_t DMAMUX_RG2CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> DMAMUX_RG2CR_SIG_ID; // DMA request trigger input selected
    static constexpr uint32_t DMAMUX_RG2CR_OIE = 0x100; // Interrupt enable at trigger event overrun
    static constexpr uint32_t DMAMUX_RG2CR_GE = 0x10000; // DMA request generator channel enable/disable
    typedef bit_field_t<17, 0x3> DMAMUX_RG2CR_GPOL; // DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
    typedef bit_field_t<19, 0x1f> DMAMUX_RG2CR_GNBREQ; // Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.

    static constexpr uint32_t DMAMUX_RG3CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> DMAMUX_RG3CR_SIG_ID; // DMA request trigger input selected
    static constexpr uint32_t DMAMUX_RG3CR_OIE = 0x100; // Interrupt enable at trigger event overrun
    static constexpr uint32_t DMAMUX_RG3CR_GE = 0x10000; // DMA request generator channel enable/disable
    typedef bit_field_t<17, 0x3> DMAMUX_RG3CR_GPOL; // DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
    typedef bit_field_t<19, 0x1f> DMAMUX_RG3CR_GNBREQ; // Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.


    static constexpr uint32_t DMAMUX_RGSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> DMAMUX_RGSR_OF; // Trigger event overrun flag The flag is set when a trigger event occurs on DMA request generator channel x, while the DMA request generator counter value is lower than GNBREQ. The flag is cleared by writing 1 to the corresponding COFx bit in DMAMUX_RGCFR register.

    static constexpr uint32_t DMAMUX_RGCFR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> DMAMUX_RGCFR_COF; // Clear trigger event overrun flag Upon setting, this bit clears the corresponding overrun flag OFx in the DMAMUX_RGCSR register.


    static constexpr uint32_t DMAMUX_HWCFGR2_RESET_VALUE = 0x17; // Reset value
    typedef bit_field_t<0, 0xff> DMAMUX_HWCFGR2_NUM_DMA_EXT_REQ; // Number of DMA request trigger inputs

    static constexpr uint32_t DMAMUX_HWCFGR1_RESET_VALUE = 0x4173907; // Reset value
    typedef bit_field_t<0, 0xff> DMAMUX_HWCFGR1_NUM_DMA_STREAMS; // number of DMA request line multiplexer (output) channels
    typedef bit_field_t<8, 0xff> DMAMUX_HWCFGR1_NUM_DMA_PERIPH_REQ; // number of DMA request lines from peripherals
    typedef bit_field_t<16, 0xff> DMAMUX_HWCFGR1_NUM_DMA_TRIG; // number of synchronization inputs
    typedef bit_field_t<24, 0xff> DMAMUX_HWCFGR1_NUM_DMA_REQGEN; // number of DMA request generator channels

    static constexpr uint32_t DMAMUX_VERR_RESET_VALUE = 0x11; // Reset value
    typedef bit_field_t<0, 0xf> DMAMUX_VERR_MINREV; // Minor IP revision
    typedef bit_field_t<4, 0xf> DMAMUX_VERR_MAJREV; // Major IP revision

    static constexpr uint32_t DMAMUX_IPIDR_RESET_VALUE = 0x100011; // Reset value
    typedef bit_field_t<0, 0xffffffff> DMAMUX_IPIDR_ID; // IP identification

    static constexpr uint32_t DMAMUX_SIDR_RESET_VALUE = 0xa3c5dd01; // Reset value
    typedef bit_field_t<0, 0xffffffff> DMAMUX_SIDR_SID; // Size identification
};

template<>
struct peripheral_t<STM32G030, DMAMUX>
{
    using T = stm32g030_dmamux_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G031, DMAMUX>
{
    using T = stm32g030_dmamux_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G041, DMAMUX>
{
    using T = stm32g030_dmamux_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G070, DMAMUX>
{
    using T = stm32g070_dmamux_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G071, DMAMUX>
{
    using T = stm32g070_dmamux_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G081, DMAMUX>
{
    using T = stm32g070_dmamux_t;
    static T& V;
};

using dmamux_t = peripheral_t<svd, DMAMUX>;

template<int INST> struct dmamux_traits {};
