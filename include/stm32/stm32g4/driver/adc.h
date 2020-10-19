#pragma once

#include <device/rcc.h>

namespace internal
{

template<int INST>
struct adc_common_traits {};

template<>
struct adc_common_traits<1>
{
    using common = adc_traits<12>;
};

template<>
struct adc_common_traits<2>
{
    using common = adc_traits<12>;
};

template<>
struct adc_common_traits<3>
{
    using common = adc_traits<345>;
};

template<>
struct adc_common_traits<4>
{
    using common = adc_traits<345>;
};

template<>
struct adc_common_traits<5>
{
    using common = adc_traits<345>;
};

template<uint16_t> struct prescale_traits {};

template<> struct prescale_traits<1> { static const uint8_t presc = 0x0; };
template<> struct prescale_traits<2> { static const uint8_t presc = 0x1; };
template<> struct prescale_traits<4> { static const uint8_t presc = 0x2; };
template<> struct prescale_traits<6> { static const uint8_t presc = 0x3; };
template<> struct prescale_traits<8> { static const uint8_t presc = 0x4; };
template<> struct prescale_traits<10> { static const uint8_t presc = 0x5; };
template<> struct prescale_traits<12> { static const uint8_t presc = 0x6; };
template<> struct prescale_traits<16> { static const uint8_t presc = 0x7; };
template<> struct prescale_traits<32> { static const uint8_t presc = 0x8; };
template<> struct prescale_traits<64> { static const uint8_t presc = 0x9; };
template<> struct prescale_traits<128> { static const uint8_t presc = 0xa; };
template<> struct prescale_traits<256> { static const uint8_t presc = 0xb; };

template<uint16_t> struct oversampling_traits {};

template<> struct oversampling_traits<2> { static const uint8_t ratio = 0x0; };
template<> struct oversampling_traits<4> { static const uint8_t ratio = 0x1; };
template<> struct oversampling_traits<8> { static const uint8_t ratio = 0x2; };
template<> struct oversampling_traits<16> { static const uint8_t ratio = 0x3; };
template<> struct oversampling_traits<32> { static const uint8_t ratio = 0x4; };
template<> struct oversampling_traits<64> { static const uint8_t ratio = 0x5; };
template<> struct oversampling_traits<128> { static const uint8_t ratio = 0x6; };
template<> struct oversampling_traits<256> { static const uint8_t ratio = 0x7; };

template<uint8_t INST>
struct adc_impl
{
    template<uint16_t PRESCALE = 4>
    static void setup()
    {
        typename adc::T& ADC = adc::V;

        com::template enable<rcc_t>();   // enable common adc clock

        ADC.CR = _::CR_RESET_VALUE;         // reset control register
        ADC.IER = _::IER_RESET_VALUE;       // reset interrupt register
        ADC.CFGR = _::CFGR_RESET_VALUE      // reset configuration register 1
                 | _::CFGR_OVRMOD           // overwrite on overrun
                 ;

        rcc_t::V.CCIPR1 |= rcc_t::T::CCIPR1_ADCSEL::W(0x2); // use sys-clock

        com::adc::V.CCR = __::CCR_RESET_VALUE   // common control register
                        | __::CCR_CKMODE::W(0x2) // synchronous hclk/2 mode
                        | __::CCR_PRESC::W(prescale_traits<PRESCALE>::presc)
                        ;

        ADC.DIFSEL = _::DIFSEL_RESET_VALUE;  // differential mode register
        ADC.GCOMP = _::GCOMP_RESET_VALUE;    // gain compensation register
        ADC.CFGR2 = _::CFGR2_RESET_VALUE;    // reset configuration register 2
    }

    static void enable()
    {
        typename adc::T& ADC = adc::V;

        uint32_t saved_dmaen = ADC.CFGR & _::CFGR_DMAEN; 

        ADC.CR &= ~_::CR_DEEPPWD;           // disable deep power down mode
        ADC.CR |= _::CR_ADVREGEN;           // enable adc voltage regulator
        sys_tick::delay_us(10);             // wait for regulator to stabilize
        ADC.CFGR &= ~_::CFGR_DMAEN;         // disabled DMA during calibration
        ADC.CR |= _::CR_ADCAL;              // start calibration
        while (ADC.CR & _::CR_ADCAL);       // wait for calibration complete
        ADC.CFGR |= saved_dmaen;            // restore DMA setting
        for (volatile uint8_t i = 0; i < 4; ++i); // wait cycles
        ADC.ISR |= _::ISR_ADRDY;            // clear ready flag by writing '1'
        ADC.CR |= _::CR_ADEN;               // enable adc 
        while (!(ADC.ISR & _::ISR_ADRDY));  // wait for adc ready 
    }

    template<uint16_t K>
    static void oversample()
    {
        adc::V.CFGR2 |= _::CFGR2_ROVSE
                     |  _::CFGR2_OVSR::W(oversampling_traits<K>::ratio)
                     |  _::CFGR2_OVSS::W(oversampling_traits<K>::ratio + 1)
                     ;
    }

    template<uint8_t X>
    static void sample_time()
    {
        adc::V.SMPR1 = _::SMPR1_RESET_VALUE
                     | _::SMPR1_SMP0::W(X)
                     | _::SMPR1_SMP1::W(X)
                     | _::SMPR1_SMP2::W(X)
                     | _::SMPR1_SMP3::W(X)
                     | _::SMPR1_SMP4::W(X)
                     | _::SMPR1_SMP5::W(X)
                     | _::SMPR1_SMP6::W(X)
                     | _::SMPR1_SMP7::W(X)
                     | _::SMPR1_SMP8::W(X)
                     | _::SMPR1_SMP9::W(X)
                     ;
    }

    static constexpr uint8_t nulch = 0x1f;

    template< uint8_t CH1, uint8_t CH2 = nulch, uint8_t CH3 = nulch, uint8_t CH4 = nulch
            , uint8_t CH5 = nulch, uint8_t CH6 = nulch, uint8_t CH7 = nulch, uint8_t CH8 = nulch>
    static void sequence()
    {
        static constexpr uint8_t L = (CH2 != nulch ? 1 : 0)
                                   + (CH3 != nulch ? 1 : 0)
                                   + (CH4 != nulch ? 1 : 0)
                                   + (CH5 != nulch ? 1 : 0)
                                   + (CH6 != nulch ? 1 : 0)
                                   + (CH7 != nulch ? 1 : 0)
                                   + (CH8 != nulch ? 1 : 0)
                                   ;

        adc::V.SQR1 = _::SQR1_RESET_VALUE   // reset sequence 1 register
                    | _::SQR1_L::W(L)       // sequence length less one
                    | _::SQR1_SQ1::W(CH1)   // sequence slot 1
                    | _::SQR1_SQ2::W(CH2)   // sequence slot 2
                    | _::SQR1_SQ3::W(CH3)   // sequence slot 2
                    | _::SQR1_SQ4::W(CH4)   // sequence slot 4
                    ;
        adc::V.SQR2 = _::SQR2_RESET_VALUE   // reset sequence 2 register
                    | _::SQR2_SQ5::W(CH5)   // sequence slot 5
                    | _::SQR2_SQ6::W(CH6)   // sequence slot 6
                    | _::SQR2_SQ7::W(CH7)   // sequence slot 7
                    | _::SQR2_SQ8::W(CH8)   // sequence slot 8
                    ;
    }

    template<typename DMA, uint8_t DMACH, typename T>
    static inline void dma(volatile T *dest, uint16_t nelem)
    {
        typename adc::T& ADC = adc::V;

        ADC.CFGR |= _::CFGR_DMAEN       // enable adc channel dma
                 |  _::CFGR_DMACFG       // select circular mode
                 ;

        DMA::template disable<DMACH>();    // disable dma channel
        DMA::template periph_to_mem<DMACH>(&ADC.DR, dest, nelem);
        DMA::template enable<DMACH>();     // enable dma channel
        DMA::template set_request_id<DMACH, 5>();   // FIXME: use constant!
        DMA::template enable_interrupt<DMACH, true>();
    }

    template<uint8_t SEL>
    static inline void trigger()
    {
        adc::V.CFGR |= _::CFGR_EXTEN::W(0x1)    // trigger on rising edge
                    |  _::CFGR_EXTSEL::W(SEL)   // trigger source
                    ;
    }

    static inline void start_conversion()
    {
        adc::V.CR |= _::CR_ADSTART;         // start conversion
    }

    template<uint8_t CH>
    static inline uint16_t read()
    {
        typename adc::T& ADC = adc::V;

        sequence<CH>();                     // select channel to convert
        start_conversion();                 // start conversion
        while (!(ADC.ISR & _::ISR_EOC));    // conversion complete
        return ADC.DR;                      // read data register
    }

    static inline void enable_interrupt(uint32_t flags)
    {
        adc::V.IER |= flags;
    }

    static inline uint32_t interrupt_flags()
    {
        return adc::V.ISR;
    }

    static inline void clear_interrupt_flags(uint32_t flags)
    {
        adc::V.ISR = flags;
    }

    using traits = adc_traits<INST>;
    using adc = typename traits::adc;
    using _ = typename adc::T;
    using com = typename adc_common_traits<INST>::common;
    using __ = typename com::adc::T;
};

} // namespace internal

