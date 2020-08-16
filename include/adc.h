#pragma once

#include "gpio.h"
#include <device/adc.h>
#include <driver/adc.h>
//#include "dma.h"

template<int NO, template<int> typename IMPL>
struct adc_api_t: private IMPL<NO>
{
    typedef IMPL<NO> impl;
    static constexpr uint8_t nulch = impl::nulch;

    template<uint16_t PRESCALE = 1>
    static void setup() { impl::template setup<PRESCALE>(); }

    static void enable() { impl::enable(); }

    template<uint16_t K>
    static void oversample() { impl::template oversample<K>(); }

    template<uint8_t X>
    static void sample_time() { impl::template sample_time<X>(); }

    template< uint8_t S1, uint8_t S2 = nulch, uint8_t S3 = nulch, uint8_t S4 = nulch
            , uint8_t S5 = nulch, uint8_t S6 = nulch, uint8_t S7 = nulch, uint8_t S8 = nulch>
    static void sequence() { impl:: template sequence<S1, S2, S3, S4, S5, S6, S7, S8>(); }

    template<typename DMA, uint8_t DMACH, typename T>
    static void dma(volatile T *dest, uint16_t nelem) { impl::template dma<DMA, DMACH, T>(dest, nelem); }

    template<uint8_t SEL>
    static void trigger() { impl::template trigger<SEL>(); }

    static void start_conversion() { impl::start_conversion(); }

    static uint16_t read() { return impl::read(); }
};

template<int NO> using adc_t = adc_api_t<NO, internal::adc_impl>;

/*
namespace internal
{

template<uint8_t NO> struct adc_traits {};

} // namespace internal

#if defined(STM32F0)
#include "adc/f0.h"
template<int NO> using adc_t = adc_api_t<NO, internal::adc_impl_f0>;
#elif defined(STM32F1) || defined(STM32F4) || defined(STM32F7)
#include "adc/f1.h"
template<int NO> using adc_t = adc_api_t<NO, internal::adc_impl_f1>;
#elif defined(STM32G0)
#include "adc/g0.h"
template<int NO> using adc_t = adc_api_t<NO, internal::adc_impl_g0>;
#elif defined(STM32G4)
#include "adc/g4.h"
template<int NO> using adc_t = adc_api_t<NO, internal::adc_impl_g4>;
#else
        static_assert(false, "ADC driver not implemented for this MCU");
#endif
*/
