#pragma once

////
//
//      STM32WL DMAMUX peripherals
//
///

// DMAMUX: DMA request multiplexer

struct stm32wl5x_cm0p_dmamux_t
{
    volatile uint32_t C0CR; // request line multiplexer channel x configuration register
    volatile uint32_t C1CR; // request line multiplexer channel x configuration register
    volatile uint32_t C2CR; // request line multiplexer channel x configuration register
    volatile uint32_t C3CR; // request line multiplexer channel x configuration register
    volatile uint32_t C4CR; // request line multiplexer channel x configuration register
    volatile uint32_t C5CR; // request line multiplexer channel x configuration register
    volatile uint32_t C6CR; // request line multiplexer channel x configuration register
    volatile uint32_t C7CR; // request line multiplexer channel x configuration register
    volatile uint32_t C8CR; // request line multiplexer channel x configuration register
    volatile uint32_t C9CR; // request line multiplexer channel x configuration register
    volatile uint32_t C10CR; // C10CR
    volatile uint32_t C11CR; // C11CR
    volatile uint32_t C12CR; // C12CR
    volatile uint32_t C13CR; // C13CR
    reserved_t<0x12> _0x38;
    volatile uint32_t CSR; // request line multiplexer interrupt channel status register
    volatile uint32_t CCFR; // request line multiplexer interrupt channel clear flag register
    reserved_t<0x1e> _0x88;
    volatile uint32_t RG0CR; // request generator channel x configuration register
    volatile uint32_t RG1CR; // request generator channel x configuration register
    volatile uint32_t RG2CR; // request generator channel x configuration register
    volatile uint32_t RG3CR; // request generator channel x configuration register
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
    typedef bit_field_t<0, 0xff> C0CR_DMAREQ_ID; // DMA request identification

    static constexpr uint32_t C1CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> C1CR_SYNC_ID; // Synchronization identification
    typedef bit_field_t<19, 0x1f> C1CR_NBREQ; // Number of DMA requests minus 1 to forward
    typedef bit_field_t<17, 0x3> C1CR_SPOL; // Synchronization polarity
    static constexpr uint32_t C1CR_SE = 0x10000; // Synchronization enable
    static constexpr uint32_t C1CR_EGE = 0x200; // Event generation enable
    static constexpr uint32_t C1CR_SOIE = 0x100; // Synchronization overrun interrupt enable
    typedef bit_field_t<0, 0xff> C1CR_DMAREQ_ID; // DMA request identification

    static constexpr uint32_t C2CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> C2CR_SYNC_ID; // Synchronization identification
    typedef bit_field_t<19, 0x1f> C2CR_NBREQ; // Number of DMA requests minus 1 to forward
    typedef bit_field_t<17, 0x3> C2CR_SPOL; // Synchronization polarity
    static constexpr uint32_t C2CR_SE = 0x10000; // Synchronization enable
    static constexpr uint32_t C2CR_EGE = 0x200; // Event generation enable
    static constexpr uint32_t C2CR_SOIE = 0x100; // Synchronization overrun interrupt enable
    typedef bit_field_t<0, 0xff> C2CR_DMAREQ_ID; // DMA request identification

    static constexpr uint32_t C3CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> C3CR_SYNC_ID; // Synchronization identification
    typedef bit_field_t<19, 0x1f> C3CR_NBREQ; // Number of DMA requests minus 1 to forward
    typedef bit_field_t<17, 0x3> C3CR_SPOL; // Synchronization polarity
    static constexpr uint32_t C3CR_SE = 0x10000; // Synchronization enable
    static constexpr uint32_t C3CR_EGE = 0x200; // Event generation enable
    static constexpr uint32_t C3CR_SOIE = 0x100; // Synchronization overrun interrupt enable
    typedef bit_field_t<0, 0xff> C3CR_DMAREQ_ID; // DMA request identification

    static constexpr uint32_t C4CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> C4CR_SYNC_ID; // Synchronization identification
    typedef bit_field_t<19, 0x1f> C4CR_NBREQ; // Number of DMA requests minus 1 to forward
    typedef bit_field_t<17, 0x3> C4CR_SPOL; // Synchronization polarity
    static constexpr uint32_t C4CR_SE = 0x10000; // Synchronization enable
    static constexpr uint32_t C4CR_EGE = 0x200; // Event generation enable
    static constexpr uint32_t C4CR_SOIE = 0x100; // Synchronization overrun interrupt enable
    typedef bit_field_t<0, 0xff> C4CR_DMAREQ_ID; // DMA request identification

    static constexpr uint32_t C5CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> C5CR_SYNC_ID; // Synchronization identification
    typedef bit_field_t<19, 0x1f> C5CR_NBREQ; // Number of DMA requests minus 1 to forward
    typedef bit_field_t<17, 0x3> C5CR_SPOL; // Synchronization polarity
    static constexpr uint32_t C5CR_SE = 0x10000; // Synchronization enable
    static constexpr uint32_t C5CR_EGE = 0x200; // Event generation enable
    static constexpr uint32_t C5CR_SOIE = 0x100; // Synchronization overrun interrupt enable
    typedef bit_field_t<0, 0xff> C5CR_DMAREQ_ID; // DMA request identification

    static constexpr uint32_t C6CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> C6CR_SYNC_ID; // Synchronization identification
    typedef bit_field_t<19, 0x1f> C6CR_NBREQ; // Number of DMA requests minus 1 to forward
    typedef bit_field_t<17, 0x3> C6CR_SPOL; // Synchronization polarity
    static constexpr uint32_t C6CR_SE = 0x10000; // Synchronization enable
    static constexpr uint32_t C6CR_EGE = 0x200; // Event generation enable
    static constexpr uint32_t C6CR_SOIE = 0x100; // Synchronization overrun interrupt enable
    typedef bit_field_t<0, 0xff> C6CR_DMAREQ_ID; // DMA request identification

    static constexpr uint32_t C7CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> C7CR_SYNC_ID; // Synchronization identification
    typedef bit_field_t<19, 0x1f> C7CR_NBREQ; // Number of DMA requests minus 1 to forward
    typedef bit_field_t<17, 0x3> C7CR_SPOL; // Synchronization polarity
    static constexpr uint32_t C7CR_SE = 0x10000; // Synchronization enable
    static constexpr uint32_t C7CR_EGE = 0x200; // Event generation enable
    static constexpr uint32_t C7CR_SOIE = 0x100; // Synchronization overrun interrupt enable
    typedef bit_field_t<0, 0xff> C7CR_DMAREQ_ID; // DMA request identification

    static constexpr uint32_t C8CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> C8CR_SYNC_ID; // Synchronization identification
    typedef bit_field_t<19, 0x1f> C8CR_NBREQ; // Number of DMA requests minus 1 to forward
    typedef bit_field_t<17, 0x3> C8CR_SPOL; // Synchronization polarity
    static constexpr uint32_t C8CR_SE = 0x10000; // Synchronization enable
    static constexpr uint32_t C8CR_EGE = 0x200; // Event generation enable
    static constexpr uint32_t C8CR_SOIE = 0x100; // Synchronization overrun interrupt enable
    typedef bit_field_t<0, 0xff> C8CR_DMAREQ_ID; // DMA request identification

    static constexpr uint32_t C9CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> C9CR_SYNC_ID; // Synchronization identification
    typedef bit_field_t<19, 0x1f> C9CR_NBREQ; // Number of DMA requests minus 1 to forward
    typedef bit_field_t<17, 0x3> C9CR_SPOL; // Synchronization polarity
    static constexpr uint32_t C9CR_SE = 0x10000; // Synchronization enable
    static constexpr uint32_t C9CR_EGE = 0x200; // Event generation enable
    static constexpr uint32_t C9CR_SOIE = 0x100; // Synchronization overrun interrupt enable
    typedef bit_field_t<0, 0xff> C9CR_DMAREQ_ID; // DMA request identification

    static constexpr uint32_t C10CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> C10CR_SYNC_ID; // SYNC_ID
    typedef bit_field_t<19, 0x1f> C10CR_NBREQ; // NBREQ
    typedef bit_field_t<17, 0x3> C10CR_SPOL; // SPOL
    static constexpr uint32_t C10CR_SE = 0x10000; // SE
    static constexpr uint32_t C10CR_EGE = 0x200; // EGE
    static constexpr uint32_t C10CR_SOIE = 0x100; // SOIE
    typedef bit_field_t<0, 0xff> C10CR_DMAREQ_ID; // DMAREQ_ID

    static constexpr uint32_t C11CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> C11CR_SYNC_ID; // SYNC_ID
    typedef bit_field_t<19, 0x1f> C11CR_NBREQ; // NBREQ
    typedef bit_field_t<17, 0x3> C11CR_SPOL; // SPOL
    static constexpr uint32_t C11CR_SE = 0x10000; // SE
    static constexpr uint32_t C11CR_EGE = 0x200; // EGE
    static constexpr uint32_t C11CR_SOIE = 0x100; // SOIE
    typedef bit_field_t<0, 0xff> C11CR_DMAREQ_ID; // DMAREQ_ID

    static constexpr uint32_t C12CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> C12CR_SYNC_ID; // SYNC_ID
    typedef bit_field_t<19, 0x1f> C12CR_NBREQ; // NBREQ
    typedef bit_field_t<17, 0x3> C12CR_SPOL; // SPOL
    static constexpr uint32_t C12CR_SE = 0x10000; // SE
    static constexpr uint32_t C12CR_EGE = 0x200; // EGE
    static constexpr uint32_t C12CR_SOIE = 0x100; // SOIE
    typedef bit_field_t<0, 0xff> C12CR_DMAREQ_ID; // DMAREQ_ID

    static constexpr uint32_t C13CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x1f> C13CR_SYNC_ID; // SYNC_ID
    typedef bit_field_t<19, 0x1f> C13CR_NBREQ; // NBREQ
    typedef bit_field_t<17, 0x3> C13CR_SPOL; // SPOL
    static constexpr uint32_t C13CR_SE = 0x10000; // SE
    static constexpr uint32_t C13CR_EGE = 0x200; // EGE
    static constexpr uint32_t C13CR_SOIE = 0x100; // SOIE
    typedef bit_field_t<0, 0xff> C13CR_DMAREQ_ID; // DMAREQ_ID


    static constexpr uint32_t CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CSR_SOF13 = 0x2000; // Synchronization overrun event flag
    static constexpr uint32_t CSR_SOF12 = 0x1000; // SOF12
    static constexpr uint32_t CSR_SOF11 = 0x800; // SOF11
    static constexpr uint32_t CSR_SOF10 = 0x400; // SOF10
    static constexpr uint32_t CSR_SOF9 = 0x200; // SOF9
    static constexpr uint32_t CSR_SOF8 = 0x100; // SOF8
    static constexpr uint32_t CSR_SOF7 = 0x80; // SOF7
    static constexpr uint32_t CSR_SOF6 = 0x40; // SOF6
    static constexpr uint32_t CSR_SOF5 = 0x20; // SOF5
    static constexpr uint32_t CSR_SOF4 = 0x10; // SOF4
    static constexpr uint32_t CSR_SOF3 = 0x8; // SOF3
    static constexpr uint32_t CSR_SOF2 = 0x4; // SOF2
    static constexpr uint32_t CSR_SOF1 = 0x2; // SOF1
    static constexpr uint32_t CSR_SOF0 = 0x1; // SOF0

    static constexpr uint32_t CCFR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCFR_CSOF13 = 0x2000; // CSOF13
    static constexpr uint32_t CCFR_CSOF12 = 0x1000; // CSOF12
    static constexpr uint32_t CCFR_CSOF11 = 0x800; // CSOF11
    static constexpr uint32_t CCFR_CSOF10 = 0x400; // CSOF10
    static constexpr uint32_t CCFR_CSOF9 = 0x200; // CSOF9
    static constexpr uint32_t CCFR_CSOF8 = 0x100; // CSOF8
    static constexpr uint32_t CCFR_CSOF7 = 0x80; // CSOF7
    static constexpr uint32_t CCFR_CSOF6 = 0x40; // CSOF6
    static constexpr uint32_t CCFR_CSOF5 = 0x20; // CSOF5
    static constexpr uint32_t CCFR_CSOF4 = 0x10; // CSOF4
    static constexpr uint32_t CCFR_CSOF3 = 0x8; // CSOF3
    static constexpr uint32_t CCFR_CSOF2 = 0x4; // CSOF2
    static constexpr uint32_t CCFR_CSOF1 = 0x2; // CSOF1
    static constexpr uint32_t CCFR_CSOF0 = 0x1; // CSOF0


    static constexpr uint32_t RG0CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<19, 0x1f> RG0CR_GNBREQ; // Number of DMA requests to be generated (minus 1)
    typedef bit_field_t<17, 0x3> RG0CR_GPOL; // DMA request generator trigger polarity
    static constexpr uint32_t RG0CR_GE = 0x10000; // DMA request generator channel x enable
    static constexpr uint32_t RG0CR_OIE = 0x100; // Trigger overrun interrupt enable
    typedef bit_field_t<0, 0x1f> RG0CR_SIG_ID; // Signal identification

    static constexpr uint32_t RG1CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<19, 0x1f> RG1CR_GNBREQ; // Number of DMA requests to be generated (minus 1)
    typedef bit_field_t<17, 0x3> RG1CR_GPOL; // DMA request generator trigger polarity
    static constexpr uint32_t RG1CR_GE = 0x10000; // DMA request generator channel x enable
    static constexpr uint32_t RG1CR_OIE = 0x100; // Trigger overrun interrupt enable
    typedef bit_field_t<0, 0x1f> RG1CR_SIG_ID; // Signal identification

    static constexpr uint32_t RG2CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<19, 0x1f> RG2CR_GNBREQ; // Number of DMA requests to be generated (minus 1)
    typedef bit_field_t<17, 0x3> RG2CR_GPOL; // DMA request generator trigger polarity
    static constexpr uint32_t RG2CR_GE = 0x10000; // DMA request generator channel x enable
    static constexpr uint32_t RG2CR_OIE = 0x100; // Trigger overrun interrupt enable
    typedef bit_field_t<0, 0x1f> RG2CR_SIG_ID; // Signal identification

    static constexpr uint32_t RG3CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<19, 0x1f> RG3CR_GNBREQ; // Number of DMA requests to be generated (minus 1)
    typedef bit_field_t<17, 0x3> RG3CR_GPOL; // DMA request generator trigger polarity
    static constexpr uint32_t RG3CR_GE = 0x10000; // DMA request generator channel x enable
    static constexpr uint32_t RG3CR_OIE = 0x100; // Trigger overrun interrupt enable
    typedef bit_field_t<0, 0x1f> RG3CR_SIG_ID; // Signal identification


    static constexpr uint32_t RGSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RGSR_OF3 = 0x8; // Trigger overrun event flag
    static constexpr uint32_t RGSR_OF2 = 0x4; // OF2
    static constexpr uint32_t RGSR_OF1 = 0x2; // OF1
    static constexpr uint32_t RGSR_OF0 = 0x1; // OF0

    static constexpr uint32_t RGCFR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RGCFR_COF3 = 0x8; // Clear trigger overrun event flag
    static constexpr uint32_t RGCFR_COF2 = 0x4; // COF2
    static constexpr uint32_t RGCFR_COF1 = 0x2; // COF1
    static constexpr uint32_t RGCFR_COF0 = 0x1; // COF0
};

template<>
struct peripheral_t<STM32WL5x_CM0P, DMAMUX>
{
    static constexpr periph_t P = DMAMUX;
    using T = stm32wl5x_cm0p_dmamux_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WL5x_CM4, DMAMUX>
{
    static constexpr periph_t P = DMAMUX;
    using T = stm32wl5x_cm0p_dmamux_t;
    static T& V;
};

template<>
struct peripheral_t<STM32WLE5_CM4, DMAMUX>
{
    static constexpr periph_t P = DMAMUX;
    using T = stm32wl5x_cm0p_dmamux_t;
    static T& V;
};

using dmamux_t = peripheral_t<svd, DMAMUX>;

template<int INST> struct dmamux_traits {};

template<> struct dmamux_traits<0>
{
    using dmamux = dmamux_t;
    static constexpr clock_source_t CLOCK = AHB_PERIPH;

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
