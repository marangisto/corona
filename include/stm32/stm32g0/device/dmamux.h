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

struct stm32g050_dmamux_t
{
    volatile uint32_t C0CR; // DMAMUX request line multiplexer channel x configuration register
    volatile uint32_t C1CR; // DMAMUX request line multiplexer channel x configuration register
    volatile uint32_t C2CR; // DMAMUX request line multiplexer channel x configuration register
    volatile uint32_t C3CR; // DMAMUX request line multiplexer channel x configuration register
    volatile uint32_t C4CR; // DMAMUX request line multiplexer channel x configuration register
    volatile uint32_t C5CR; // DMAMUX request line multiplexer channel x configuration register
    volatile uint32_t C6CR; // DMAMUX request line multiplexer channel x configuration register
    volatile uint32_t C7CR; // DMAMUX request line multiplexer channel x configuration register
    volatile uint32_t C8CR; // DMAMUX request line multiplexer channel x configuration register
    volatile uint32_t C9CR; // DMAMUX request line multiplexer channel x configuration register
    volatile uint32_t C10CR; // DMAMUX request line multiplexer channel x configuration register
    volatile uint32_t C11CR; // DMAMUX request line multiplexer channel x configuration register
    reserved_t<0x14> _0x30;
    volatile uint32_t CSR; // DMAMUX request line multiplexer interrupt channel status register
    volatile uint32_t CFR; // DMAMUX request line multiplexer interrupt clear flag register
    reserved_t<0x1e> _0x88;
    volatile uint32_t RG0CR; // DMAMUX request generator channel x configuration register
    volatile uint32_t RG1CR; // DMAMUX request generator channel x configuration register
    volatile uint32_t RG2CR; // DMAMUX request generator channel x configuration register
    volatile uint32_t RG3CR; // DMAMUX request generator channel x configuration register
    reserved_t<0xc> _0x110;
    volatile uint32_t RGSR; // DMAMUX request generator interrupt status register
    volatile uint32_t RGCFR; // DMAMUX request generator interrupt clear flag register

    static constexpr uint32_t C0CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> C0CR_DMAREQ_ID; // DMA request identification Selects the input DMA request. See the DMAMUX table about assignments of multiplexer inputs to resources.
    static constexpr uint32_t C0CR_SOIE = 0x100; // Synchronization overrun interrupt enable
    static constexpr uint32_t C0CR_EGE = 0x200; // Event generation enable
    static constexpr uint32_t C0CR_SE = 0x10000; // Synchronization enable
    typedef bit_field_t<17, 0x3> C0CR_SPOL; // Synchronization polarity Defines the edge polarity of the selected synchronization input:
    typedef bit_field_t<19, 0x1f> C0CR_NBREQ; // Number of DMA requests minus 1 to forward Defines the number of DMA requests to forward to the DMA controller after a synchronization event, and/or the number of DMA requests before an output event is generated. This field shall only be written when both SE and EGE bits are low.
    typedef bit_field_t<24, 0x1f> C0CR_SYNC_ID; // Synchronization identification Selects the synchronization input (see inputs to resources STM32G0).

    static constexpr uint32_t C1CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> C1CR_DMAREQ_ID; // DMA request identification Selects the input DMA request. See the DMAMUX table about assignments of multiplexer inputs to resources.
    static constexpr uint32_t C1CR_SOIE = 0x100; // Synchronization overrun interrupt enable
    static constexpr uint32_t C1CR_EGE = 0x200; // Event generation enable
    static constexpr uint32_t C1CR_SE = 0x10000; // Synchronization enable
    typedef bit_field_t<17, 0x3> C1CR_SPOL; // Synchronization polarity Defines the edge polarity of the selected synchronization input:
    typedef bit_field_t<19, 0x1f> C1CR_NBREQ; // Number of DMA requests minus 1 to forward Defines the number of DMA requests to forward to the DMA controller after a synchronization event, and/or the number of DMA requests before an output event is generated. This field shall only be written when both SE and EGE bits are low.
    typedef bit_field_t<24, 0x1f> C1CR_SYNC_ID; // Synchronization identification Selects the synchronization input (see inputs to resources STM32G0).

    static constexpr uint32_t C2CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> C2CR_DMAREQ_ID; // DMA request identification Selects the input DMA request. See the DMAMUX table about assignments of multiplexer inputs to resources.
    static constexpr uint32_t C2CR_SOIE = 0x100; // Synchronization overrun interrupt enable
    static constexpr uint32_t C2CR_EGE = 0x200; // Event generation enable
    static constexpr uint32_t C2CR_SE = 0x10000; // Synchronization enable
    typedef bit_field_t<17, 0x3> C2CR_SPOL; // Synchronization polarity Defines the edge polarity of the selected synchronization input:
    typedef bit_field_t<19, 0x1f> C2CR_NBREQ; // Number of DMA requests minus 1 to forward Defines the number of DMA requests to forward to the DMA controller after a synchronization event, and/or the number of DMA requests before an output event is generated. This field shall only be written when both SE and EGE bits are low.
    typedef bit_field_t<24, 0x1f> C2CR_SYNC_ID; // Synchronization identification Selects the synchronization input (see inputs to resources STM32G0).

    static constexpr uint32_t C3CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> C3CR_DMAREQ_ID; // DMA request identification Selects the input DMA request. See the DMAMUX table about assignments of multiplexer inputs to resources.
    static constexpr uint32_t C3CR_SOIE = 0x100; // Synchronization overrun interrupt enable
    static constexpr uint32_t C3CR_EGE = 0x200; // Event generation enable
    static constexpr uint32_t C3CR_SE = 0x10000; // Synchronization enable
    typedef bit_field_t<17, 0x3> C3CR_SPOL; // Synchronization polarity Defines the edge polarity of the selected synchronization input:
    typedef bit_field_t<19, 0x1f> C3CR_NBREQ; // Number of DMA requests minus 1 to forward Defines the number of DMA requests to forward to the DMA controller after a synchronization event, and/or the number of DMA requests before an output event is generated. This field shall only be written when both SE and EGE bits are low.
    typedef bit_field_t<24, 0x1f> C3CR_SYNC_ID; // Synchronization identification Selects the synchronization input (see inputs to resources STM32G0).

    static constexpr uint32_t C4CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> C4CR_DMAREQ_ID; // DMA request identification Selects the input DMA request. See the DMAMUX table about assignments of multiplexer inputs to resources.
    static constexpr uint32_t C4CR_SOIE = 0x100; // Synchronization overrun interrupt enable
    static constexpr uint32_t C4CR_EGE = 0x200; // Event generation enable
    static constexpr uint32_t C4CR_SE = 0x10000; // Synchronization enable
    typedef bit_field_t<17, 0x3> C4CR_SPOL; // Synchronization polarity Defines the edge polarity of the selected synchronization input:
    typedef bit_field_t<19, 0x1f> C4CR_NBREQ; // Number of DMA requests minus 1 to forward Defines the number of DMA requests to forward to the DMA controller after a synchronization event, and/or the number of DMA requests before an output event is generated. This field shall only be written when both SE and EGE bits are low.
    typedef bit_field_t<24, 0x1f> C4CR_SYNC_ID; // Synchronization identification Selects the synchronization input (see inputs to resources STM32G0).

    static constexpr uint32_t C5CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> C5CR_DMAREQ_ID; // DMA request identification Selects the input DMA request. See the DMAMUX table about assignments of multiplexer inputs to resources.
    static constexpr uint32_t C5CR_SOIE = 0x100; // Synchronization overrun interrupt enable
    static constexpr uint32_t C5CR_EGE = 0x200; // Event generation enable
    static constexpr uint32_t C5CR_SE = 0x10000; // Synchronization enable
    typedef bit_field_t<17, 0x3> C5CR_SPOL; // Synchronization polarity Defines the edge polarity of the selected synchronization input:
    typedef bit_field_t<19, 0x1f> C5CR_NBREQ; // Number of DMA requests minus 1 to forward Defines the number of DMA requests to forward to the DMA controller after a synchronization event, and/or the number of DMA requests before an output event is generated. This field shall only be written when both SE and EGE bits are low.
    typedef bit_field_t<24, 0x1f> C5CR_SYNC_ID; // Synchronization identification Selects the synchronization input (see inputs to resources STM32G0).

    static constexpr uint32_t C6CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> C6CR_DMAREQ_ID; // DMA request identification Selects the input DMA request. See the DMAMUX table about assignments of multiplexer inputs to resources.
    static constexpr uint32_t C6CR_SOIE = 0x100; // Synchronization overrun interrupt enable
    static constexpr uint32_t C6CR_EGE = 0x200; // Event generation enable
    static constexpr uint32_t C6CR_SE = 0x10000; // Synchronization enable
    typedef bit_field_t<17, 0x3> C6CR_SPOL; // Synchronization polarity Defines the edge polarity of the selected synchronization input:
    typedef bit_field_t<19, 0x1f> C6CR_NBREQ; // Number of DMA requests minus 1 to forward Defines the number of DMA requests to forward to the DMA controller after a synchronization event, and/or the number of DMA requests before an output event is generated. This field shall only be written when both SE and EGE bits are low.
    typedef bit_field_t<24, 0x1f> C6CR_SYNC_ID; // Synchronization identification Selects the synchronization input (see inputs to resources STM32G0).

    static constexpr uint32_t C7CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> C7CR_DMAREQ_ID; // DMA request identification Selects the input DMA request. See the DMAMUX table about assignments of multiplexer inputs to resources.
    static constexpr uint32_t C7CR_SOIE = 0x100; // Synchronization overrun interrupt enable
    static constexpr uint32_t C7CR_EGE = 0x200; // Event generation enable
    static constexpr uint32_t C7CR_SE = 0x10000; // Synchronization enable
    typedef bit_field_t<17, 0x3> C7CR_SPOL; // Synchronization polarity Defines the edge polarity of the selected synchronization input:
    typedef bit_field_t<19, 0x1f> C7CR_NBREQ; // Number of DMA requests minus 1 to forward Defines the number of DMA requests to forward to the DMA controller after a synchronization event, and/or the number of DMA requests before an output event is generated. This field shall only be written when both SE and EGE bits are low.
    typedef bit_field_t<24, 0x1f> C7CR_SYNC_ID; // Synchronization identification Selects the synchronization input (see inputs to resources STM32G0).

    static constexpr uint32_t C8CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> C8CR_DMAREQ_ID; // DMA request identification Selects the input DMA request. See the DMAMUX table about assignments of multiplexer inputs to resources.
    static constexpr uint32_t C8CR_SOIE = 0x100; // Synchronization overrun interrupt enable
    static constexpr uint32_t C8CR_EGE = 0x200; // Event generation enable
    static constexpr uint32_t C8CR_SE = 0x10000; // Synchronization enable
    typedef bit_field_t<17, 0x3> C8CR_SPOL; // Synchronization polarity Defines the edge polarity of the selected synchronization input:
    typedef bit_field_t<19, 0x1f> C8CR_NBREQ; // Number of DMA requests minus 1 to forward Defines the number of DMA requests to forward to the DMA controller after a synchronization event, and/or the number of DMA requests before an output event is generated. This field shall only be written when both SE and EGE bits are low.
    typedef bit_field_t<24, 0x1f> C8CR_SYNC_ID; // Synchronization identification Selects the synchronization input (see inputs to resources STM32G0).

    static constexpr uint32_t C9CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> C9CR_DMAREQ_ID; // DMA request identification Selects the input DMA request. See the DMAMUX table about assignments of multiplexer inputs to resources.
    static constexpr uint32_t C9CR_SOIE = 0x100; // Synchronization overrun interrupt enable
    static constexpr uint32_t C9CR_EGE = 0x200; // Event generation enable
    static constexpr uint32_t C9CR_SE = 0x10000; // Synchronization enable
    typedef bit_field_t<17, 0x3> C9CR_SPOL; // Synchronization polarity Defines the edge polarity of the selected synchronization input:
    typedef bit_field_t<19, 0x1f> C9CR_NBREQ; // Number of DMA requests minus 1 to forward Defines the number of DMA requests to forward to the DMA controller after a synchronization event, and/or the number of DMA requests before an output event is generated. This field shall only be written when both SE and EGE bits are low.
    typedef bit_field_t<24, 0x1f> C9CR_SYNC_ID; // Synchronization identification Selects the synchronization input (see inputs to resources STM32G0).

    static constexpr uint32_t C10CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> C10CR_DMAREQ_ID; // DMA request identification Selects the input DMA request. See the DMAMUX table about assignments of multiplexer inputs to resources.
    static constexpr uint32_t C10CR_SOIE = 0x100; // Synchronization overrun interrupt enable
    static constexpr uint32_t C10CR_EGE = 0x200; // Event generation enable
    static constexpr uint32_t C10CR_SE = 0x10000; // Synchronization enable
    typedef bit_field_t<17, 0x3> C10CR_SPOL; // Synchronization polarity Defines the edge polarity of the selected synchronization input:
    typedef bit_field_t<19, 0x1f> C10CR_NBREQ; // Number of DMA requests minus 1 to forward Defines the number of DMA requests to forward to the DMA controller after a synchronization event, and/or the number of DMA requests before an output event is generated. This field shall only be written when both SE and EGE bits are low.
    typedef bit_field_t<24, 0x1f> C10CR_SYNC_ID; // Synchronization identification Selects the synchronization input (see inputs to resources STM32G0).

    static constexpr uint32_t C11CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> C11CR_DMAREQ_ID; // DMA request identification Selects the input DMA request. See the DMAMUX table about assignments of multiplexer inputs to resources.
    static constexpr uint32_t C11CR_SOIE = 0x100; // Synchronization overrun interrupt enable
    static constexpr uint32_t C11CR_EGE = 0x200; // Event generation enable
    static constexpr uint32_t C11CR_SE = 0x10000; // Synchronization enable
    typedef bit_field_t<17, 0x3> C11CR_SPOL; // Synchronization polarity Defines the edge polarity of the selected synchronization input:
    typedef bit_field_t<19, 0x1f> C11CR_NBREQ; // Number of DMA requests minus 1 to forward Defines the number of DMA requests to forward to the DMA controller after a synchronization event, and/or the number of DMA requests before an output event is generated. This field shall only be written when both SE and EGE bits are low.
    typedef bit_field_t<24, 0x1f> C11CR_SYNC_ID; // Synchronization identification Selects the synchronization input (see inputs to resources STM32G0).


    static constexpr uint32_t CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CSR_SOF0 = 0x1; // Synchronization overrun event flag The flag is set when a synchronization event occurs on a DMA request line multiplexer channel x, while the DMA request counter value is lower than NBREQ. The flag is cleared by writing 1 to the corresponding CSOFx bit in DMAMUX_CFR register.
    static constexpr uint32_t CSR_SOF1 = 0x2; // Synchronization overrun event flag The flag is set when a synchronization event occurs on a DMA request line multiplexer channel x, while the DMA request counter value is lower than NBREQ. The flag is cleared by writing 1 to the corresponding CSOFx bit in DMAMUX_CFR register.
    static constexpr uint32_t CSR_SOF2 = 0x4; // Synchronization overrun event flag The flag is set when a synchronization event occurs on a DMA request line multiplexer channel x, while the DMA request counter value is lower than NBREQ. The flag is cleared by writing 1 to the corresponding CSOFx bit in DMAMUX_CFR register.
    static constexpr uint32_t CSR_SOF3 = 0x8; // Synchronization overrun event flag The flag is set when a synchronization event occurs on a DMA request line multiplexer channel x, while the DMA request counter value is lower than NBREQ. The flag is cleared by writing 1 to the corresponding CSOFx bit in DMAMUX_CFR register.
    static constexpr uint32_t CSR_SOF4 = 0x10; // Synchronization overrun event flag The flag is set when a synchronization event occurs on a DMA request line multiplexer channel x, while the DMA request counter value is lower than NBREQ. The flag is cleared by writing 1 to the corresponding CSOFx bit in DMAMUX_CFR register.
    static constexpr uint32_t CSR_SOF5 = 0x20; // Synchronization overrun event flag The flag is set when a synchronization event occurs on a DMA request line multiplexer channel x, while the DMA request counter value is lower than NBREQ. The flag is cleared by writing 1 to the corresponding CSOFx bit in DMAMUX_CFR register.
    static constexpr uint32_t CSR_SOF6 = 0x40; // Synchronization overrun event flag The flag is set when a synchronization event occurs on a DMA request line multiplexer channel x, while the DMA request counter value is lower than NBREQ. The flag is cleared by writing 1 to the corresponding CSOFx bit in DMAMUX_CFR register.
    static constexpr uint32_t CSR_SOF7 = 0x80; // Synchronization overrun event flag The flag is set when a synchronization event occurs on a DMA request line multiplexer channel x, while the DMA request counter value is lower than NBREQ. The flag is cleared by writing 1 to the corresponding CSOFx bit in DMAMUX_CFR register.
    static constexpr uint32_t CSR_SOF8 = 0x100; // Synchronization overrun event flag The flag is set when a synchronization event occurs on a DMA request line multiplexer channel x, while the DMA request counter value is lower than NBREQ. The flag is cleared by writing 1 to the corresponding CSOFx bit in DMAMUX_CFR register.
    static constexpr uint32_t CSR_SOF9 = 0x200; // Synchronization overrun event flag The flag is set when a synchronization event occurs on a DMA request line multiplexer channel x, while the DMA request counter value is lower than NBREQ. The flag is cleared by writing 1 to the corresponding CSOFx bit in DMAMUX_CFR register.
    static constexpr uint32_t CSR_SOF10 = 0x400; // Synchronization overrun event flag The flag is set when a synchronization event occurs on a DMA request line multiplexer channel x, while the DMA request counter value is lower than NBREQ. The flag is cleared by writing 1 to the corresponding CSOFx bit in DMAMUX_CFR register.
    static constexpr uint32_t CSR_SOF11 = 0x800; // Synchronization overrun event flag The flag is set when a synchronization event occurs on a DMA request line multiplexer channel x, while the DMA request counter value is lower than NBREQ. The flag is cleared by writing 1 to the corresponding CSOFx bit in DMAMUX_CFR register.

    static constexpr uint32_t CFR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFR_CSOF0 = 0x1; // Clear synchronization overrun event flag Writing 1 in each bit clears the corresponding overrun flag SOFx in the DMAMUX_CSR register.
    static constexpr uint32_t CFR_CSOF1 = 0x2; // Clear synchronization overrun event flag Writing 1 in each bit clears the corresponding overrun flag SOFx in the DMAMUX_CSR register.
    static constexpr uint32_t CFR_CSOF2 = 0x4; // Clear synchronization overrun event flag Writing 1 in each bit clears the corresponding overrun flag SOFx in the DMAMUX_CSR register.
    static constexpr uint32_t CFR_CSOF3 = 0x8; // Clear synchronization overrun event flag Writing 1 in each bit clears the corresponding overrun flag SOFx in the DMAMUX_CSR register.
    static constexpr uint32_t CFR_CSOF4 = 0x10; // Clear synchronization overrun event flag Writing 1 in each bit clears the corresponding overrun flag SOFx in the DMAMUX_CSR register.
    static constexpr uint32_t CFR_CSOF5 = 0x20; // Clear synchronization overrun event flag Writing 1 in each bit clears the corresponding overrun flag SOFx in the DMAMUX_CSR register.
    static constexpr uint32_t CFR_CSOF6 = 0x40; // Clear synchronization overrun event flag Writing 1 in each bit clears the corresponding overrun flag SOFx in the DMAMUX_CSR register.
    static constexpr uint32_t CFR_CSOF7 = 0x80; // Clear synchronization overrun event flag Writing 1 in each bit clears the corresponding overrun flag SOFx in the DMAMUX_CSR register.
    static constexpr uint32_t CFR_CSOF8 = 0x100; // Clear synchronization overrun event flag Writing 1 in each bit clears the corresponding overrun flag SOFx in the DMAMUX_CSR register.
    static constexpr uint32_t CFR_CSOF9 = 0x200; // Clear synchronization overrun event flag Writing 1 in each bit clears the corresponding overrun flag SOFx in the DMAMUX_CSR register.
    static constexpr uint32_t CFR_CSOF10 = 0x400; // Clear synchronization overrun event flag Writing 1 in each bit clears the corresponding overrun flag SOFx in the DMAMUX_CSR register.
    static constexpr uint32_t CFR_CSOF11 = 0x800; // Clear synchronization overrun event flag Writing 1 in each bit clears the corresponding overrun flag SOFx in the DMAMUX_CSR register.


    static constexpr uint32_t RG0CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> RG0CR_SIG_ID; // Signal identification Selects the DMA request trigger input used for the channel x of the DMA request generator
    static constexpr uint32_t RG0CR_OIE = 0x100; // Trigger overrun interrupt enable
    static constexpr uint32_t RG0CR_GE = 0x10000; // DMA request generator channel x enable
    typedef bit_field_t<17, 0x3> RG0CR_GPOL; // DMA request generator trigger polarity Defines the edge polarity of the selected trigger input
    typedef bit_field_t<19, 0x1f> RG0CR_GNBREQ; // Number of DMA requests to be generated (minus 1) Defines the number of DMA requests to be generated after a trigger event. The actual number of generated DMA requests is GNBREQ +1. Note: This field shall only be written when GE bit is disabled.

    static constexpr uint32_t RG1CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> RG1CR_SIG_ID; // Signal identification Selects the DMA request trigger input used for the channel x of the DMA request generator
    static constexpr uint32_t RG1CR_OIE = 0x100; // Trigger overrun interrupt enable
    static constexpr uint32_t RG1CR_GE = 0x10000; // DMA request generator channel x enable
    typedef bit_field_t<17, 0x3> RG1CR_GPOL; // DMA request generator trigger polarity Defines the edge polarity of the selected trigger input
    typedef bit_field_t<19, 0x1f> RG1CR_GNBREQ; // Number of DMA requests to be generated (minus 1) Defines the number of DMA requests to be generated after a trigger event. The actual number of generated DMA requests is GNBREQ +1. Note: This field shall only be written when GE bit is disabled.

    static constexpr uint32_t RG2CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> RG2CR_SIG_ID; // Signal identification Selects the DMA request trigger input used for the channel x of the DMA request generator
    static constexpr uint32_t RG2CR_OIE = 0x100; // Trigger overrun interrupt enable
    static constexpr uint32_t RG2CR_GE = 0x10000; // DMA request generator channel x enable
    typedef bit_field_t<17, 0x3> RG2CR_GPOL; // DMA request generator trigger polarity Defines the edge polarity of the selected trigger input
    typedef bit_field_t<19, 0x1f> RG2CR_GNBREQ; // Number of DMA requests to be generated (minus 1) Defines the number of DMA requests to be generated after a trigger event. The actual number of generated DMA requests is GNBREQ +1. Note: This field shall only be written when GE bit is disabled.

    static constexpr uint32_t RG3CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> RG3CR_SIG_ID; // Signal identification Selects the DMA request trigger input used for the channel x of the DMA request generator
    static constexpr uint32_t RG3CR_OIE = 0x100; // Trigger overrun interrupt enable
    static constexpr uint32_t RG3CR_GE = 0x10000; // DMA request generator channel x enable
    typedef bit_field_t<17, 0x3> RG3CR_GPOL; // DMA request generator trigger polarity Defines the edge polarity of the selected trigger input
    typedef bit_field_t<19, 0x1f> RG3CR_GNBREQ; // Number of DMA requests to be generated (minus 1) Defines the number of DMA requests to be generated after a trigger event. The actual number of generated DMA requests is GNBREQ +1. Note: This field shall only be written when GE bit is disabled.


    static constexpr uint32_t RGSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RGSR_OF0 = 0x1; // Trigger overrun event flag The flag is set when a new trigger event occurs on DMA request generator channel x, before the request counter underrun (the internal request counter programmed via the GNBREQ field of the DMAMUX_RGxCR register). The flag is cleared by writing 1 to the corresponding COFx bit in the DMAMUX_RGCFR register.
    static constexpr uint32_t RGSR_OF1 = 0x2; // Trigger overrun event flag The flag is set when a new trigger event occurs on DMA request generator channel x, before the request counter underrun (the internal request counter programmed via the GNBREQ field of the DMAMUX_RGxCR register). The flag is cleared by writing 1 to the corresponding COFx bit in the DMAMUX_RGCFR register.
    static constexpr uint32_t RGSR_OF2 = 0x4; // Trigger overrun event flag The flag is set when a new trigger event occurs on DMA request generator channel x, before the request counter underrun (the internal request counter programmed via the GNBREQ field of the DMAMUX_RGxCR register). The flag is cleared by writing 1 to the corresponding COFx bit in the DMAMUX_RGCFR register.
    static constexpr uint32_t RGSR_OF3 = 0x8; // Trigger overrun event flag The flag is set when a new trigger event occurs on DMA request generator channel x, before the request counter underrun (the internal request counter programmed via the GNBREQ field of the DMAMUX_RGxCR register). The flag is cleared by writing 1 to the corresponding COFx bit in the DMAMUX_RGCFR register.

    static constexpr uint32_t RGCFR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RGCFR_COF0 = 0x1; // Clear trigger overrun event flag Writing 1 in each bit clears the corresponding overrun flag OFx in the DMAMUX_RGSR register.
    static constexpr uint32_t RGCFR_COF1 = 0x2; // Clear trigger overrun event flag Writing 1 in each bit clears the corresponding overrun flag OFx in the DMAMUX_RGSR register.
    static constexpr uint32_t RGCFR_COF2 = 0x4; // Clear trigger overrun event flag Writing 1 in each bit clears the corresponding overrun flag OFx in the DMAMUX_RGSR register.
    static constexpr uint32_t RGCFR_COF3 = 0x8; // Clear trigger overrun event flag Writing 1 in each bit clears the corresponding overrun flag OFx in the DMAMUX_RGSR register.
};

// DMAMUX: DMAMUX

struct stm32g051_dmamux_t
{
    volatile uint32_t C0CR; // DMAMUX request line multiplexer channel x configuration register
    volatile uint32_t C1CR; // DMAMUX request line multiplexer channel x configuration register
    volatile uint32_t C2CR; // DMAMUX request line multiplexer channel x configuration register
    volatile uint32_t C3CR; // DMAMUX request line multiplexer channel x configuration register
    volatile uint32_t C4CR; // DMAMUX request line multiplexer channel x configuration register
    volatile uint32_t C5CR; // DMAMUX request line multiplexer channel x configuration register
    volatile uint32_t C6CR; // DMAMUX request line multiplexer channel x configuration register
    reserved_t<0x19> _0x1c;
    volatile uint32_t CSR; // DMAMUX request line multiplexer interrupt channel status register
    volatile uint32_t CFR; // DMAMUX request line multiplexer interrupt clear flag register
    reserved_t<0x1e> _0x88;
    volatile uint32_t RG0CR; // DMAMUX request generator channel x configuration register
    volatile uint32_t RG1CR; // DMAMUX request generator channel x configuration register
    volatile uint32_t RG2CR; // DMAMUX request generator channel x configuration register
    volatile uint32_t RG3CR; // DMAMUX request generator channel x configuration register
    reserved_t<0xc> _0x110;
    volatile uint32_t RGSR; // DMAMUX request generator interrupt status register
    volatile uint32_t RGCFR; // DMAMUX request generator interrupt clear flag register

    static constexpr uint32_t C0CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> C0CR_DMAREQ_ID; // DMA request identification Selects the input DMA request. See the DMAMUX table about assignments of multiplexer inputs to resources.
    static constexpr uint32_t C0CR_SOIE = 0x100; // Synchronization overrun interrupt enable
    static constexpr uint32_t C0CR_EGE = 0x200; // Event generation enable
    static constexpr uint32_t C0CR_SE = 0x10000; // Synchronization enable
    typedef bit_field_t<17, 0x3> C0CR_SPOL; // Synchronization polarity Defines the edge polarity of the selected synchronization input:
    typedef bit_field_t<19, 0x1f> C0CR_NBREQ; // Number of DMA requests minus 1 to forward Defines the number of DMA requests to forward to the DMA controller after a synchronization event, and/or the number of DMA requests before an output event is generated. This field shall only be written when both SE and EGE bits are low.
    typedef bit_field_t<24, 0x1f> C0CR_SYNC_ID; // Synchronization identification Selects the synchronization input (see inputs to resources STM32G0).

    static constexpr uint32_t C1CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> C1CR_DMAREQ_ID; // DMA request identification Selects the input DMA request. See the DMAMUX table about assignments of multiplexer inputs to resources.
    static constexpr uint32_t C1CR_SOIE = 0x100; // Synchronization overrun interrupt enable
    static constexpr uint32_t C1CR_EGE = 0x200; // Event generation enable
    static constexpr uint32_t C1CR_SE = 0x10000; // Synchronization enable
    typedef bit_field_t<17, 0x3> C1CR_SPOL; // Synchronization polarity Defines the edge polarity of the selected synchronization input:
    typedef bit_field_t<19, 0x1f> C1CR_NBREQ; // Number of DMA requests minus 1 to forward Defines the number of DMA requests to forward to the DMA controller after a synchronization event, and/or the number of DMA requests before an output event is generated. This field shall only be written when both SE and EGE bits are low.
    typedef bit_field_t<24, 0x1f> C1CR_SYNC_ID; // Synchronization identification Selects the synchronization input (see inputs to resources STM32G0).

    static constexpr uint32_t C2CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> C2CR_DMAREQ_ID; // DMA request identification Selects the input DMA request. See the DMAMUX table about assignments of multiplexer inputs to resources.
    static constexpr uint32_t C2CR_SOIE = 0x100; // Synchronization overrun interrupt enable
    static constexpr uint32_t C2CR_EGE = 0x200; // Event generation enable
    static constexpr uint32_t C2CR_SE = 0x10000; // Synchronization enable
    typedef bit_field_t<17, 0x3> C2CR_SPOL; // Synchronization polarity Defines the edge polarity of the selected synchronization input:
    typedef bit_field_t<19, 0x1f> C2CR_NBREQ; // Number of DMA requests minus 1 to forward Defines the number of DMA requests to forward to the DMA controller after a synchronization event, and/or the number of DMA requests before an output event is generated. This field shall only be written when both SE and EGE bits are low.
    typedef bit_field_t<24, 0x1f> C2CR_SYNC_ID; // Synchronization identification Selects the synchronization input (see inputs to resources STM32G0).

    static constexpr uint32_t C3CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> C3CR_DMAREQ_ID; // DMA request identification Selects the input DMA request. See the DMAMUX table about assignments of multiplexer inputs to resources.
    static constexpr uint32_t C3CR_SOIE = 0x100; // Synchronization overrun interrupt enable
    static constexpr uint32_t C3CR_EGE = 0x200; // Event generation enable
    static constexpr uint32_t C3CR_SE = 0x10000; // Synchronization enable
    typedef bit_field_t<17, 0x3> C3CR_SPOL; // Synchronization polarity Defines the edge polarity of the selected synchronization input:
    typedef bit_field_t<19, 0x1f> C3CR_NBREQ; // Number of DMA requests minus 1 to forward Defines the number of DMA requests to forward to the DMA controller after a synchronization event, and/or the number of DMA requests before an output event is generated. This field shall only be written when both SE and EGE bits are low.
    typedef bit_field_t<24, 0x1f> C3CR_SYNC_ID; // Synchronization identification Selects the synchronization input (see inputs to resources STM32G0).

    static constexpr uint32_t C4CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> C4CR_DMAREQ_ID; // DMA request identification Selects the input DMA request. See the DMAMUX table about assignments of multiplexer inputs to resources.
    static constexpr uint32_t C4CR_SOIE = 0x100; // Synchronization overrun interrupt enable
    static constexpr uint32_t C4CR_EGE = 0x200; // Event generation enable
    static constexpr uint32_t C4CR_SE = 0x10000; // Synchronization enable
    typedef bit_field_t<17, 0x3> C4CR_SPOL; // Synchronization polarity Defines the edge polarity of the selected synchronization input:
    typedef bit_field_t<19, 0x1f> C4CR_NBREQ; // Number of DMA requests minus 1 to forward Defines the number of DMA requests to forward to the DMA controller after a synchronization event, and/or the number of DMA requests before an output event is generated. This field shall only be written when both SE and EGE bits are low.
    typedef bit_field_t<24, 0x1f> C4CR_SYNC_ID; // Synchronization identification Selects the synchronization input (see inputs to resources STM32G0).

    static constexpr uint32_t C5CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> C5CR_DMAREQ_ID; // DMA request identification Selects the input DMA request. See the DMAMUX table about assignments of multiplexer inputs to resources.
    static constexpr uint32_t C5CR_SOIE = 0x100; // Synchronization overrun interrupt enable
    static constexpr uint32_t C5CR_EGE = 0x200; // Event generation enable
    static constexpr uint32_t C5CR_SE = 0x10000; // Synchronization enable
    typedef bit_field_t<17, 0x3> C5CR_SPOL; // Synchronization polarity Defines the edge polarity of the selected synchronization input:
    typedef bit_field_t<19, 0x1f> C5CR_NBREQ; // Number of DMA requests minus 1 to forward Defines the number of DMA requests to forward to the DMA controller after a synchronization event, and/or the number of DMA requests before an output event is generated. This field shall only be written when both SE and EGE bits are low.
    typedef bit_field_t<24, 0x1f> C5CR_SYNC_ID; // Synchronization identification Selects the synchronization input (see inputs to resources STM32G0).

    static constexpr uint32_t C6CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> C6CR_DMAREQ_ID; // DMA request identification Selects the input DMA request. See the DMAMUX table about assignments of multiplexer inputs to resources.
    static constexpr uint32_t C6CR_SOIE = 0x100; // Synchronization overrun interrupt enable
    static constexpr uint32_t C6CR_EGE = 0x200; // Event generation enable
    static constexpr uint32_t C6CR_SE = 0x10000; // Synchronization enable
    typedef bit_field_t<17, 0x3> C6CR_SPOL; // Synchronization polarity Defines the edge polarity of the selected synchronization input:
    typedef bit_field_t<19, 0x1f> C6CR_NBREQ; // Number of DMA requests minus 1 to forward Defines the number of DMA requests to forward to the DMA controller after a synchronization event, and/or the number of DMA requests before an output event is generated. This field shall only be written when both SE and EGE bits are low.
    typedef bit_field_t<24, 0x1f> C6CR_SYNC_ID; // Synchronization identification Selects the synchronization input (see inputs to resources STM32G0).


    static constexpr uint32_t CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CSR_SOF0 = 0x1; // Synchronization overrun event flag The flag is set when a synchronization event occurs on a DMA request line multiplexer channel x, while the DMA request counter value is lower than NBREQ. The flag is cleared by writing 1 to the corresponding CSOFx bit in DMAMUX_CFR register.
    static constexpr uint32_t CSR_SOF1 = 0x2; // Synchronization overrun event flag The flag is set when a synchronization event occurs on a DMA request line multiplexer channel x, while the DMA request counter value is lower than NBREQ. The flag is cleared by writing 1 to the corresponding CSOFx bit in DMAMUX_CFR register.
    static constexpr uint32_t CSR_SOF2 = 0x4; // Synchronization overrun event flag The flag is set when a synchronization event occurs on a DMA request line multiplexer channel x, while the DMA request counter value is lower than NBREQ. The flag is cleared by writing 1 to the corresponding CSOFx bit in DMAMUX_CFR register.
    static constexpr uint32_t CSR_SOF3 = 0x8; // Synchronization overrun event flag The flag is set when a synchronization event occurs on a DMA request line multiplexer channel x, while the DMA request counter value is lower than NBREQ. The flag is cleared by writing 1 to the corresponding CSOFx bit in DMAMUX_CFR register.
    static constexpr uint32_t CSR_SOF4 = 0x10; // Synchronization overrun event flag The flag is set when a synchronization event occurs on a DMA request line multiplexer channel x, while the DMA request counter value is lower than NBREQ. The flag is cleared by writing 1 to the corresponding CSOFx bit in DMAMUX_CFR register.
    static constexpr uint32_t CSR_SOF5 = 0x20; // Synchronization overrun event flag The flag is set when a synchronization event occurs on a DMA request line multiplexer channel x, while the DMA request counter value is lower than NBREQ. The flag is cleared by writing 1 to the corresponding CSOFx bit in DMAMUX_CFR register.
    static constexpr uint32_t CSR_SOF6 = 0x40; // Synchronization overrun event flag The flag is set when a synchronization event occurs on a DMA request line multiplexer channel x, while the DMA request counter value is lower than NBREQ. The flag is cleared by writing 1 to the corresponding CSOFx bit in DMAMUX_CFR register.

    static constexpr uint32_t CFR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFR_CSOF0 = 0x1; // Clear synchronization overrun event flag Writing 1 in each bit clears the corresponding overrun flag SOFx in the DMAMUX_CSR register.
    static constexpr uint32_t CFR_CSOF1 = 0x2; // Clear synchronization overrun event flag Writing 1 in each bit clears the corresponding overrun flag SOFx in the DMAMUX_CSR register.
    static constexpr uint32_t CFR_CSOF2 = 0x4; // Clear synchronization overrun event flag Writing 1 in each bit clears the corresponding overrun flag SOFx in the DMAMUX_CSR register.
    static constexpr uint32_t CFR_CSOF3 = 0x8; // Clear synchronization overrun event flag Writing 1 in each bit clears the corresponding overrun flag SOFx in the DMAMUX_CSR register.
    static constexpr uint32_t CFR_CSOF4 = 0x10; // Clear synchronization overrun event flag Writing 1 in each bit clears the corresponding overrun flag SOFx in the DMAMUX_CSR register.
    static constexpr uint32_t CFR_CSOF5 = 0x20; // Clear synchronization overrun event flag Writing 1 in each bit clears the corresponding overrun flag SOFx in the DMAMUX_CSR register.
    static constexpr uint32_t CFR_CSOF6 = 0x40; // Clear synchronization overrun event flag Writing 1 in each bit clears the corresponding overrun flag SOFx in the DMAMUX_CSR register.


    static constexpr uint32_t RG0CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> RG0CR_SIG_ID; // Signal identification Selects the DMA request trigger input used for the channel x of the DMA request generator
    static constexpr uint32_t RG0CR_OIE = 0x100; // Trigger overrun interrupt enable
    static constexpr uint32_t RG0CR_GE = 0x10000; // DMA request generator channel x enable
    typedef bit_field_t<17, 0x3> RG0CR_GPOL; // DMA request generator trigger polarity Defines the edge polarity of the selected trigger input
    typedef bit_field_t<19, 0x1f> RG0CR_GNBREQ; // Number of DMA requests to be generated (minus 1) Defines the number of DMA requests to be generated after a trigger event. The actual number of generated DMA requests is GNBREQ +1. Note: This field shall only be written when GE bit is disabled.

    static constexpr uint32_t RG1CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> RG1CR_SIG_ID; // Signal identification Selects the DMA request trigger input used for the channel x of the DMA request generator
    static constexpr uint32_t RG1CR_OIE = 0x100; // Trigger overrun interrupt enable
    static constexpr uint32_t RG1CR_GE = 0x10000; // DMA request generator channel x enable
    typedef bit_field_t<17, 0x3> RG1CR_GPOL; // DMA request generator trigger polarity Defines the edge polarity of the selected trigger input
    typedef bit_field_t<19, 0x1f> RG1CR_GNBREQ; // Number of DMA requests to be generated (minus 1) Defines the number of DMA requests to be generated after a trigger event. The actual number of generated DMA requests is GNBREQ +1. Note: This field shall only be written when GE bit is disabled.

    static constexpr uint32_t RG2CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> RG2CR_SIG_ID; // Signal identification Selects the DMA request trigger input used for the channel x of the DMA request generator
    static constexpr uint32_t RG2CR_OIE = 0x100; // Trigger overrun interrupt enable
    static constexpr uint32_t RG2CR_GE = 0x10000; // DMA request generator channel x enable
    typedef bit_field_t<17, 0x3> RG2CR_GPOL; // DMA request generator trigger polarity Defines the edge polarity of the selected trigger input
    typedef bit_field_t<19, 0x1f> RG2CR_GNBREQ; // Number of DMA requests to be generated (minus 1) Defines the number of DMA requests to be generated after a trigger event. The actual number of generated DMA requests is GNBREQ +1. Note: This field shall only be written when GE bit is disabled.

    static constexpr uint32_t RG3CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> RG3CR_SIG_ID; // Signal identification Selects the DMA request trigger input used for the channel x of the DMA request generator
    static constexpr uint32_t RG3CR_OIE = 0x100; // Trigger overrun interrupt enable
    static constexpr uint32_t RG3CR_GE = 0x10000; // DMA request generator channel x enable
    typedef bit_field_t<17, 0x3> RG3CR_GPOL; // DMA request generator trigger polarity Defines the edge polarity of the selected trigger input
    typedef bit_field_t<19, 0x1f> RG3CR_GNBREQ; // Number of DMA requests to be generated (minus 1) Defines the number of DMA requests to be generated after a trigger event. The actual number of generated DMA requests is GNBREQ +1. Note: This field shall only be written when GE bit is disabled.


    static constexpr uint32_t RGSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RGSR_OF0 = 0x1; // Trigger overrun event flag The flag is set when a new trigger event occurs on DMA request generator channel x, before the request counter underrun (the internal request counter programmed via the GNBREQ field of the DMAMUX_RGxCR register). The flag is cleared by writing 1 to the corresponding COFx bit in the DMAMUX_RGCFR register.
    static constexpr uint32_t RGSR_OF1 = 0x2; // Trigger overrun event flag The flag is set when a new trigger event occurs on DMA request generator channel x, before the request counter underrun (the internal request counter programmed via the GNBREQ field of the DMAMUX_RGxCR register). The flag is cleared by writing 1 to the corresponding COFx bit in the DMAMUX_RGCFR register.
    static constexpr uint32_t RGSR_OF2 = 0x4; // Trigger overrun event flag The flag is set when a new trigger event occurs on DMA request generator channel x, before the request counter underrun (the internal request counter programmed via the GNBREQ field of the DMAMUX_RGxCR register). The flag is cleared by writing 1 to the corresponding COFx bit in the DMAMUX_RGCFR register.
    static constexpr uint32_t RGSR_OF3 = 0x8; // Trigger overrun event flag The flag is set when a new trigger event occurs on DMA request generator channel x, before the request counter underrun (the internal request counter programmed via the GNBREQ field of the DMAMUX_RGxCR register). The flag is cleared by writing 1 to the corresponding COFx bit in the DMAMUX_RGCFR register.

    static constexpr uint32_t RGCFR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RGCFR_COF0 = 0x1; // Clear trigger overrun event flag Writing 1 in each bit clears the corresponding overrun flag OFx in the DMAMUX_RGSR register.
    static constexpr uint32_t RGCFR_COF1 = 0x2; // Clear trigger overrun event flag Writing 1 in each bit clears the corresponding overrun flag OFx in the DMAMUX_RGSR register.
    static constexpr uint32_t RGCFR_COF2 = 0x4; // Clear trigger overrun event flag Writing 1 in each bit clears the corresponding overrun flag OFx in the DMAMUX_RGSR register.
    static constexpr uint32_t RGCFR_COF3 = 0x8; // Clear trigger overrun event flag Writing 1 in each bit clears the corresponding overrun flag OFx in the DMAMUX_RGSR register.
};

// DMAMUX: DMAMUX

struct stm32g070_dmamux_t
{
    volatile uint32_t C0CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t C1CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t C2CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t C3CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t C4CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t C5CR; // DMAMux - DMA request line multiplexer channel x control register
    volatile uint32_t C6CR; // DMAMux - DMA request line multiplexer channel x control register
    reserved_t<0x19> _0x1c;
    volatile uint32_t CSR; // DMAMUX request line multiplexer interrupt channel status register
    volatile uint32_t CFR; // DMAMUX request line multiplexer interrupt clear flag register
    reserved_t<0x1e> _0x88;
    volatile uint32_t RG0CR; // DMAMux - DMA request generator channel x control register
    volatile uint32_t RG1CR; // DMAMux - DMA request generator channel x control register
    volatile uint32_t RG2CR; // DMAMux - DMA request generator channel x control register
    volatile uint32_t RG3CR; // DMAMux - DMA request generator channel x control register
    reserved_t<0xc> _0x110;
    volatile uint32_t RGSR; // DMAMux - DMA request generator status register
    volatile uint32_t RGCFR; // DMAMux - DMA request generator clear flag register
    reserved_t<0xa9> _0x148;
    volatile uint32_t HWCFGR2; // DMAMUX hardware configuration 2 register
    volatile uint32_t HWCFGR1; // DMAMUX hardware configuration 1 register
    volatile uint32_t VERR; // DMAMUX version register
    volatile uint32_t IPIDR; // DMAMUX IP identification register
    volatile uint32_t SIDR; // DMAMUX size identification register

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


    static constexpr uint32_t CSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7f> CSR_SOF; // Synchronization overrun event flag

    static constexpr uint32_t CFR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7f> CFR_CSOF; // Clear synchronization overrun event flag


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


    static constexpr uint32_t HWCFGR2_RESET_VALUE = 0x17; // Reset value
    typedef bit_field_t<0, 0xff> HWCFGR2_NUM_DMA_EXT_REQ; // Number of DMA request trigger inputs

    static constexpr uint32_t HWCFGR1_RESET_VALUE = 0x4173907; // Reset value
    typedef bit_field_t<0, 0xff> HWCFGR1_NUM_DMA_STREAMS; // number of DMA request line multiplexer (output) channels
    typedef bit_field_t<8, 0xff> HWCFGR1_NUM_DMA_PERIPH_REQ; // number of DMA request lines from peripherals
    typedef bit_field_t<16, 0xff> HWCFGR1_NUM_DMA_TRIG; // number of synchronization inputs
    typedef bit_field_t<24, 0xff> HWCFGR1_NUM_DMA_REQGEN; // number of DMA request generator channels

    static constexpr uint32_t VERR_RESET_VALUE = 0x11; // Reset value
    typedef bit_field_t<0, 0xf> VERR_MINREV; // Minor IP revision
    typedef bit_field_t<4, 0xf> VERR_MAJREV; // Major IP revision

    static constexpr uint32_t IPIDR_RESET_VALUE = 0x100011; // Reset value
    typedef bit_field_t<0, 0xffffffff> IPIDR_ID; // IP identification

    static constexpr uint32_t SIDR_RESET_VALUE = 0xa3c5dd01; // Reset value
    typedef bit_field_t<0, 0xffffffff> SIDR_SID; // Size identification
};

template<>
struct peripheral_t<STM32G030, DMAMUX>
{
    static constexpr periph_t P = DMAMUX;
    using T = stm32g030_dmamux_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G031, DMAMUX>
{
    static constexpr periph_t P = DMAMUX;
    using T = stm32g030_dmamux_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G041, DMAMUX>
{
    static constexpr periph_t P = DMAMUX;
    using T = stm32g030_dmamux_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G050, DMAMUX>
{
    static constexpr periph_t P = DMAMUX;
    using T = stm32g050_dmamux_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G051, DMAMUX>
{
    static constexpr periph_t P = DMAMUX;
    using T = stm32g051_dmamux_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G061, DMAMUX>
{
    static constexpr periph_t P = DMAMUX;
    using T = stm32g051_dmamux_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0B0, DMAMUX>
{
    static constexpr periph_t P = DMAMUX;
    using T = stm32g051_dmamux_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0B1, DMAMUX>
{
    static constexpr periph_t P = DMAMUX;
    using T = stm32g051_dmamux_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0C1, DMAMUX>
{
    static constexpr periph_t P = DMAMUX;
    using T = stm32g051_dmamux_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G070, DMAMUX>
{
    static constexpr periph_t P = DMAMUX;
    using T = stm32g070_dmamux_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G071, DMAMUX>
{
    static constexpr periph_t P = DMAMUX;
    using T = stm32g070_dmamux_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G081, DMAMUX>
{
    static constexpr periph_t P = DMAMUX;
    using T = stm32g070_dmamux_t;
    static T& V;
};

using dmamux_t = peripheral_t<svd, DMAMUX>;
