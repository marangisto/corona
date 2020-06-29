#pragma once

////
//
//      STM32WB DMAMUX peripherals
//
///

// DMAMUX: Direct memory access Multiplexer

struct stm32wb30_cm4_dmamux_t
{
    volatile uint32_t C0CR; // DMA Multiplexer Channel 0 Control register
    volatile uint32_t C1CR; // DMA Multiplexer Channel 1 Control register
    volatile uint32_t C2CR; // DMA Multiplexer Channel 2 Control register
    volatile uint32_t C3CR; // DMA Multiplexer Channel 3 Control register
    volatile uint32_t C4CR; // DMA Multiplexer Channel 4 Control register
    volatile uint32_t C5CR; // DMA Multiplexer Channel 5 Control register
    volatile uint32_t C6CR; // DMA Multiplexer Channel 6 Control register
    volatile uint32_t C7CR; // DMA Multiplexer Channel 7 Control register
    volatile uint32_t C8CR; // DMA Multiplexer Channel 8 Control register
    volatile uint32_t C9CR; // DMA Multiplexer Channel 9 Control register
    volatile uint32_t C10CR; // DMA Multiplexer Channel 10 Control register
    volatile uint32_t C11CR; // DMA Multiplexer Channel 11 Control register
    volatile uint32_t C12CR; // DMA Multiplexer Channel 12 Control register
    volatile uint32_t C13CR; // DMA Multiplexer Channel 13 Control register
    reserved_t<0x12> _0x38;
    volatile uint32_t CSR; // DMA Multiplexer Channel Status register
    volatile uint32_t CFR; // DMA Channel Clear Flag Register
    reserved_t<0x1e> _0x88;
    volatile uint32_t RG0CR; // DMA Request Generator 0 Control Register
    volatile uint32_t RG1CR; // DMA Request Generator 1 Control Register
    volatile uint32_t RG2CR; // DMA Request Generator 2 Control Register
    volatile uint32_t RG3CR; // DMA Request Generator 3 Control Register
    reserved_t<0xc> _0x110;
    volatile uint32_t RGSR; // DMA Request Generator Status Register
    volatile uint32_t RGCFR; // DMA Request Generator Clear Flag Register

    static constexpr uint32_t C0CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> C0CR_SYNC_ID; // SYNC_ID
    typedef bit_field_t<19, 0x1f> C0CR_NBREQ; // Nb request
    typedef bit_field_t<17, 0x3> C0CR_SPOL; // Sync polarity
    static constexpr uint32_t C0CR_SE = 0x10000; // Synchronization enable
    static constexpr uint32_t C0CR_EGE = 0x200; // Event Generation Enable
    static constexpr uint32_t C0CR_SOIE = 0x100; // Synchronization Overrun Interrupt Enable
    typedef bit_field_t<0, 0xff> C0CR_DMAREQ_ID; // DMA Request ID

    static constexpr uint32_t C1CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> C1CR_SYNC_ID; // SYNC_ID
    typedef bit_field_t<19, 0x1f> C1CR_NBREQ; // Nb request
    typedef bit_field_t<17, 0x3> C1CR_SPOL; // Sync polarity
    static constexpr uint32_t C1CR_SE = 0x10000; // Synchronization enable
    static constexpr uint32_t C1CR_EGE = 0x200; // Event Generation Enable
    static constexpr uint32_t C1CR_SOIE = 0x100; // Synchronization Overrun Interrupt Enable
    typedef bit_field_t<0, 0xff> C1CR_DMAREQ_ID; // DMA Request ID

    static constexpr uint32_t C2CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> C2CR_SYNC_ID; // SYNC_ID
    typedef bit_field_t<19, 0x1f> C2CR_NBREQ; // Nb request
    typedef bit_field_t<17, 0x3> C2CR_SPOL; // Sync polarity
    static constexpr uint32_t C2CR_SE = 0x10000; // Synchronization enable
    static constexpr uint32_t C2CR_EGE = 0x200; // Event Generation Enable
    static constexpr uint32_t C2CR_SOIE = 0x100; // Synchronization Overrun Interrupt Enable
    typedef bit_field_t<0, 0xff> C2CR_DMAREQ_ID; // DMA Request ID

    static constexpr uint32_t C3CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> C3CR_SYNC_ID; // SYNC_ID
    typedef bit_field_t<19, 0x1f> C3CR_NBREQ; // Nb request
    typedef bit_field_t<17, 0x3> C3CR_SPOL; // Sync polarity
    static constexpr uint32_t C3CR_SE = 0x10000; // Synchronization enable
    static constexpr uint32_t C3CR_EGE = 0x200; // Event Generation Enable
    static constexpr uint32_t C3CR_SOIE = 0x100; // Synchronization Overrun Interrupt Enable
    typedef bit_field_t<0, 0xff> C3CR_DMAREQ_ID; // DMA Request ID

    static constexpr uint32_t C4CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> C4CR_SYNC_ID; // SYNC_ID
    typedef bit_field_t<19, 0x1f> C4CR_NBREQ; // Nb request
    typedef bit_field_t<17, 0x3> C4CR_SPOL; // Sync polarity
    static constexpr uint32_t C4CR_SE = 0x10000; // Synchronization enable
    static constexpr uint32_t C4CR_EGE = 0x200; // Event Generation Enable
    static constexpr uint32_t C4CR_SOIE = 0x100; // Synchronization Overrun Interrupt Enable
    typedef bit_field_t<0, 0xff> C4CR_DMAREQ_ID; // DMA Request ID

    static constexpr uint32_t C5CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> C5CR_SYNC_ID; // SYNC_ID
    typedef bit_field_t<19, 0x1f> C5CR_NBREQ; // Nb request
    typedef bit_field_t<17, 0x3> C5CR_SPOL; // Sync polarity
    static constexpr uint32_t C5CR_SE = 0x10000; // Synchronization enable
    static constexpr uint32_t C5CR_EGE = 0x200; // Event Generation Enable
    static constexpr uint32_t C5CR_SOIE = 0x100; // Synchronization Overrun Interrupt Enable
    typedef bit_field_t<0, 0xff> C5CR_DMAREQ_ID; // DMA Request ID

    static constexpr uint32_t C6CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> C6CR_SYNC_ID; // SYNC_ID
    typedef bit_field_t<19, 0x1f> C6CR_NBREQ; // Nb request
    typedef bit_field_t<17, 0x3> C6CR_SPOL; // Sync polarity
    static constexpr uint32_t C6CR_SE = 0x10000; // Synchronization enable
    static constexpr uint32_t C6CR_EGE = 0x200; // Event Generation Enable
    static constexpr uint32_t C6CR_SOIE = 0x100; // Synchronization Overrun Interrupt Enable
    typedef bit_field_t<0, 0xff> C6CR_DMAREQ_ID; // DMA Request ID

    static constexpr uint32_t C7CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> C7CR_SYNC_ID; // SYNC_ID
    typedef bit_field_t<19, 0x1f> C7CR_NBREQ; // Nb request
    typedef bit_field_t<17, 0x3> C7CR_SPOL; // Sync polarity
    static constexpr uint32_t C7CR_SE = 0x10000; // Synchronization enable
    static constexpr uint32_t C7CR_EGE = 0x200; // Event Generation Enable
    static constexpr uint32_t C7CR_SOIE = 0x100; // Synchronization Overrun Interrupt Enable
    typedef bit_field_t<0, 0xff> C7CR_DMAREQ_ID; // DMA Request ID

    static constexpr uint32_t C8CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> C8CR_SYNC_ID; // SYNC_ID
    typedef bit_field_t<19, 0x1f> C8CR_NBREQ; // Nb request
    typedef bit_field_t<17, 0x3> C8CR_SPOL; // Sync polarity
    static constexpr uint32_t C8CR_SE = 0x10000; // Synchronization enable
    static constexpr uint32_t C8CR_EGE = 0x200; // Event Generation Enable
    static constexpr uint32_t C8CR_SOIE = 0x100; // Synchronization Overrun Interrupt Enable
    typedef bit_field_t<0, 0xff> C8CR_DMAREQ_ID; // DMA Request ID

    static constexpr uint32_t C9CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> C9CR_SYNC_ID; // SYNC_ID
    typedef bit_field_t<19, 0x1f> C9CR_NBREQ; // Nb request
    typedef bit_field_t<17, 0x3> C9CR_SPOL; // Sync polarity
    static constexpr uint32_t C9CR_SE = 0x10000; // Synchronization enable
    static constexpr uint32_t C9CR_EGE = 0x200; // Event Generation Enable
    static constexpr uint32_t C9CR_SOIE = 0x100; // Synchronization Overrun Interrupt Enable
    typedef bit_field_t<0, 0xff> C9CR_DMAREQ_ID; // DMA Request ID

    static constexpr uint32_t C10CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> C10CR_SYNC_ID; // SYNC_ID
    typedef bit_field_t<19, 0x1f> C10CR_NBREQ; // Nb request
    typedef bit_field_t<17, 0x3> C10CR_SPOL; // Sync polarity
    static constexpr uint32_t C10CR_SE = 0x10000; // Synchronization enable
    static constexpr uint32_t C10CR_EGE = 0x200; // Event Generation Enable
    static constexpr uint32_t C10CR_SOIE = 0x100; // Synchronization Overrun Interrupt Enable
    typedef bit_field_t<0, 0xff> C10CR_DMAREQ_ID; // DMA Request ID

    static constexpr uint32_t C11CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> C11CR_SYNC_ID; // SYNC_ID
    typedef bit_field_t<19, 0x1f> C11CR_NBREQ; // Nb request
    typedef bit_field_t<17, 0x3> C11CR_SPOL; // Sync polarity
    static constexpr uint32_t C11CR_SE = 0x10000; // Synchronization enable
    static constexpr uint32_t C11CR_EGE = 0x200; // Event Generation Enable
    static constexpr uint32_t C11CR_SOIE = 0x100; // Synchronization Overrun Interrupt Enable
    typedef bit_field_t<0, 0xff> C11CR_DMAREQ_ID; // DMA Request ID

    static constexpr uint32_t C12CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> C12CR_SYNC_ID; // SYNC_ID
    typedef bit_field_t<19, 0x1f> C12CR_NBREQ; // Nb request
    typedef bit_field_t<17, 0x3> C12CR_SPOL; // Sync polarity
    static constexpr uint32_t C12CR_SE = 0x10000; // Synchronization enable
    static constexpr uint32_t C12CR_EGE = 0x200; // Event Generation Enable
    static constexpr uint32_t C12CR_SOIE = 0x100; // Synchronization Overrun Interrupt Enable
    typedef bit_field_t<0, 0xff> C12CR_DMAREQ_ID; // DMA Request ID

    static constexpr uint32_t C13CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> C13CR_SYNC_ID; // SYNC_ID
    typedef bit_field_t<19, 0x1f> C13CR_NBREQ; // Nb request
    typedef bit_field_t<17, 0x3> C13CR_SPOL; // Sync polarity
    static constexpr uint32_t C13CR_SE = 0x10000; // Synchronization enable
    static constexpr uint32_t C13CR_EGE = 0x200; // Event Generation Enable
    static constexpr uint32_t C13CR_SOIE = 0x100; // Synchronization Overrun Interrupt Enable
    typedef bit_field_t<0, 0xff> C13CR_DMAREQ_ID; // DMA Request ID


    static constexpr uint32_t CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CSR_SOF0 = 0x1; // Synchronization Overrun Flag 0
    static constexpr uint32_t CSR_SOF1 = 0x2; // Synchronization Overrun Flag 1
    static constexpr uint32_t CSR_SOF2 = 0x4; // Synchronization Overrun Flag 2
    static constexpr uint32_t CSR_SOF3 = 0x8; // Synchronization Overrun Flag 3
    static constexpr uint32_t CSR_SOF4 = 0x10; // Synchronization Overrun Flag 4
    static constexpr uint32_t CSR_SOF5 = 0x20; // Synchronization Overrun Flag 5
    static constexpr uint32_t CSR_SOF6 = 0x40; // Synchronization Overrun Flag 6
    static constexpr uint32_t CSR_SOF7 = 0x80; // Synchronization Overrun Flag 7
    static constexpr uint32_t CSR_SOF8 = 0x100; // Synchronization Overrun Flag 8
    static constexpr uint32_t CSR_SOF9 = 0x200; // Synchronization Overrun Flag 9
    static constexpr uint32_t CSR_SOF10 = 0x400; // Synchronization Overrun Flag 10
    static constexpr uint32_t CSR_SOF11 = 0x800; // Synchronization Overrun Flag 11
    static constexpr uint32_t CSR_SOF12 = 0x1000; // Synchronization Overrun Flag 12
    static constexpr uint32_t CSR_SOF13 = 0x2000; // Synchronization Overrun Flag 13

    static constexpr uint32_t CFR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFR_CSOF0 = 0x1; // Synchronization Clear Overrun Flag 0
    static constexpr uint32_t CFR_CSOF1 = 0x2; // Synchronization Clear Overrun Flag 1
    static constexpr uint32_t CFR_CSOF2 = 0x4; // Synchronization Clear Overrun Flag 2
    static constexpr uint32_t CFR_CSOF3 = 0x8; // Synchronization Clear Overrun Flag 3
    static constexpr uint32_t CFR_CSOF4 = 0x10; // Synchronization Clear Overrun Flag 4
    static constexpr uint32_t CFR_CSOF5 = 0x20; // Synchronization Clear Overrun Flag 5
    static constexpr uint32_t CFR_CSOF6 = 0x40; // Synchronization Clear Overrun Flag 6
    static constexpr uint32_t CFR_CSOF7 = 0x80; // Synchronization Clear Overrun Flag 7
    static constexpr uint32_t CFR_CSOF8 = 0x100; // Synchronization Clear Overrun Flag 8
    static constexpr uint32_t CFR_CSOF9 = 0x200; // Synchronization Clear Overrun Flag 9
    static constexpr uint32_t CFR_CSOF10 = 0x400; // Synchronization Clear Overrun Flag 10
    static constexpr uint32_t CFR_CSOF11 = 0x800; // Synchronization Clear Overrun Flag 11
    static constexpr uint32_t CFR_CSOF12 = 0x1000; // Synchronization Clear Overrun Flag 12
    static constexpr uint32_t CFR_CSOF13 = 0x2000; // Synchronization Clear Overrun Flag 13


    static constexpr uint32_t RG0CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<19, 0x1f> RG0CR_GNBREQ; // Number of Request
    typedef bit_field_t<17, 0x3> RG0CR_GPOL; // Generation Polarity
    static constexpr uint32_t RG0CR_GE = 0x10000; // Generation Enable
    static constexpr uint32_t RG0CR_OIE = 0x100; // Overrun Interrupt Enable
    typedef bit_field_t<0, 0x1f> RG0CR_SIG_ID; // Signal ID

    static constexpr uint32_t RG1CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<19, 0x1f> RG1CR_GNBREQ; // Number of Request
    typedef bit_field_t<17, 0x3> RG1CR_GPOL; // Generation Polarity
    static constexpr uint32_t RG1CR_GE = 0x10000; // Generation Enable
    static constexpr uint32_t RG1CR_OIE = 0x100; // Overrun Interrupt Enable
    typedef bit_field_t<0, 0x1f> RG1CR_SIG_ID; // Signal ID

    static constexpr uint32_t RG2CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<19, 0x1f> RG2CR_GNBREQ; // Number of Request
    typedef bit_field_t<17, 0x3> RG2CR_GPOL; // Generation Polarity
    static constexpr uint32_t RG2CR_GE = 0x10000; // Generation Enable
    static constexpr uint32_t RG2CR_OIE = 0x100; // Overrun Interrupt Enable
    typedef bit_field_t<0, 0x1f> RG2CR_SIG_ID; // Signal ID

    static constexpr uint32_t RG3CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<19, 0x1f> RG3CR_GNBREQ; // Number of Request
    typedef bit_field_t<17, 0x3> RG3CR_GPOL; // Generation Polarity
    static constexpr uint32_t RG3CR_GE = 0x10000; // Generation Enable
    static constexpr uint32_t RG3CR_OIE = 0x100; // Overrun Interrupt Enable
    typedef bit_field_t<0, 0x1f> RG3CR_SIG_ID; // Signal ID


    static constexpr uint32_t RGSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RGSR_OF0 = 0x1; // Generator Overrun Flag 0
    static constexpr uint32_t RGSR_OF1 = 0x2; // Generator Overrun Flag 1
    static constexpr uint32_t RGSR_OF2 = 0x4; // Generator Overrun Flag 2
    static constexpr uint32_t RGSR_OF3 = 0x8; // Generator Overrun Flag 3

    static constexpr uint32_t RGCFR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RGCFR_CSOF0 = 0x1; // Generator Clear Overrun Flag 0
    static constexpr uint32_t RGCFR_CSOF1 = 0x2; // Generator Clear Overrun Flag 1
    static constexpr uint32_t RGCFR_CSOF2 = 0x4; // Generator Clear Overrun Flag 2
    static constexpr uint32_t RGCFR_CSOF3 = 0x8; // Generator Clear Overrun Flag 3
};

template<>
struct peripheral_t<STM32WB30_CM4, DMAMUX>
{
    using T = stm32wb30_cm4_dmamux_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WB35_CM4, DMAMUX>
{
    using T = stm32wb30_cm4_dmamux_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WB50_CM4, DMAMUX>
{
    using T = stm32wb30_cm4_dmamux_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WB55_CM4, DMAMUX1>
{
    using T = stm32wb30_cm4_dmamux_t;
    static T& V;
};

using dmamux_t = peripheral_t<svd, DMAMUX>;
using dmamux1_t = peripheral_t<svd, DMAMUX1>;

template<int INST> struct dmamux_traits {};

template<> struct dmamux_traits<0>
{
    using dmamux = dmamux_t;

    template<typename RCC>
    static void enable()
    {
        RCC::V.AHB1ENR |= RCC::T::AHB1ENR_DMAMUXEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHB1ENR &= ~RCC::T::AHB1ENR_DMAMUXEN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.AHB1SMENR |= RCC::T::AHB1SMENR_DMAMUXSMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_DMAMUXSMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHB1RSTR |= RCC::T::AHB1RSTR_DMAMUXRST;
    }
};
