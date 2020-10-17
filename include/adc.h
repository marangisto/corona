#pragma once

#include "gpio.h"
#include <device/adc.h>
#include <driver/adc.h>

template<int NO, template<int> typename IMPL>
struct adc_api_t: private IMPL<NO>
{
    enum interrupt_flag
        { ADRDY = 1 << 0
        , EOSMP = 1 << 1
        , EOC   = 1 << 2
        , EOS   = 1 << 3
        , OVR   = 1 << 4
        };

    typedef IMPL<NO> impl;
    static constexpr uint8_t nulch = impl::nulch;

    template<uint16_t PRESCALE = 1>
    static void setup() { impl::template setup<PRESCALE>(); }

    static void enable() { impl::enable(); }

    template<uint16_t K>
    static void oversample() { impl::template oversample<K>(); }

    template<uint8_t X>
    static void sample_time() { impl::template sample_time<X>(); }

    template
        < uint8_t CH1
        , uint8_t CH2 = nulch
        , uint8_t CH3 = nulch
        , uint8_t CH4 = nulch
        , uint8_t CH5 = nulch
        , uint8_t CH6 = nulch
        , uint8_t CH7 = nulch
        , uint8_t CH8 = nulch
        >
    static void sequence()
    {
        impl:: template sequence<CH1, CH2, CH3, CH4, CH5, CH6, CH7, CH8>();
    }

    template<typename DMA, uint8_t DMACH, typename T>
    static void dma(volatile T *dest, uint16_t nelem)
    {
        impl::template dma<DMA, DMACH, T>(dest, nelem);
    }

    template<uint8_t SEL>
    static void trigger() { impl::template trigger<SEL>(); }

    static void start_conversion() { impl::start_conversion(); }

    template<typename ANALOG>
    static uint16_t read()
    {
        constexpr periph_t P = adc_traits<NO>::adc::P;
        constexpr uint8_t CH = ANALOG::template CHAN<P>;

        return impl::template read<CH>();
    }

    static inline void enable_interrupt(uint32_t flags)
    {
        impl::enable_interrupt(flags);
    }

    static inline uint32_t interrupt_flags()
    {
        return impl::interrupt_flags();
    }

    static inline void clear_interrupt_flags(uint32_t flags)
    {
        impl::clear_interrupt_flags(flags);
    }
};

template<int NO> using adc_t = adc_api_t<NO, internal::adc_impl>;

