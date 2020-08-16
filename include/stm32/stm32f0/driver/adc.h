#pragma once

namespace internal
{

template<uint8_t INST>
struct adc_impl
{
    template<uint16_t PRESCALE>
    static void setup()
    {
        typename adc::T& ADC = adc::V;

        static_assert(PRESCALE == 1, "unsupported prescale");

        adc_traits<INST>::template enable<rcc_t>();   // enable adc clock

        ADC.CR = _::CR_RESET_VALUE;         // reset control register
        ADC.IER = _::IER_RESET_VALUE;       // reset interrupt register
        ADC.CFGR1 = _::CFGR1_RESET_VALUE    // reset configuration register 1
                  | _::CFGR1_OVRMOD         // overwrite on overrun
                  ;
        ADC.CFGR2 = _::CFGR2_RESET_VALUE    // reset configuration register 2
                  | _::CFGR2_JITOFF_D2      // use PCLK/2 synchronous mode
                  ;
    }

    static void enable()
    {
        typename adc::T& ADC = adc::V;

        uint32_t saved_dmaen = ADC.CFGR1 & _::CFGR1_DMAEN; 

        ADC.CFGR1 &= ~_::CFGR1_DMAEN;       // disabled DMA during calibration
        ADC.CR |= _::CR_ADCAL;              // start calibration
        while (ADC.CR & _::CR_ADCAL);       // wait for calibration complete
        ADC.CFGR1 |= saved_dmaen;           // restore DMA setting
        for (volatile uint8_t i = 0; i < 4; ++i); // wait cycles
        ADC.CR |= _::CR_ADEN;               // enable adc 
        while (!(ADC.ISR & _::ISR_ADRDY));  // wait for adc ready 
    }

    static constexpr uint8_t nulch = 0xff;

    template
        < uint8_t S1
        , uint8_t S2 = nulch
        , uint8_t S3 = nulch
        , uint8_t S4 = nulch
        , uint8_t S5 = nulch
        , uint8_t S6 = nulch
        , uint8_t S7 = nulch
        , uint8_t S8 = nulch
        >
    static void sequence()
    {
        typename adc::T& ADC = adc::V;

        ADC.CHSELR = _::CHSELR_RESET_VALUE;         // reset register
        ADC.CHSELR = (S1 != nulch ? (1 << S1) : 0)  // channel-x selection
                   | (S2 != nulch ? (1 << S2) : 0)  // channel-x selection
                   | (S3 != nulch ? (1 << S3) : 0)  // channel-x selection
                   | (S4 != nulch ? (1 << S4) : 0)  // channel-x selection
                   | (S5 != nulch ? (1 << S5) : 0)  // channel-x selection
                   | (S6 != nulch ? (1 << S6) : 0)  // channel-x selection
                   | (S7 != nulch ? (1 << S7) : 0)  // channel-x selection
                   | (S8 != nulch ? (1 << S8) : 0)  // channel-x selection
                   ;
    }

    template<typename DMA, uint8_t DMACH, typename T>
    static inline void dma(volatile T *dest, uint16_t nelem)
    {
        typename adc::T& ADC = adc::V;

        ADC.CFGR1 |= _::CFGR1_DMAEN         // enable adc channel dma
                  |  _::CFGR1_DMACFG        // select circular mode
                  ;
        DMA::template disable<DMACH>();     // disable dma channel
        DMA::template periph_to_mem<DMACH>(&ADC.DR, dest, nelem);
        DMA::template enable<DMACH>();      // enable dma channel
        DMA::template enable_interrupt<DMACH, true>();
    }

    template<uint8_t SEL>
    static inline void trigger()
    {
        typename adc::T& ADC = adc::V;

        ADC.CFGR1 |= _::CFGR1_EXTEN::W(0x1)     // trigger on rising edge
                  |  _::CFGR1_EXTSEL::W(SEL)    // trigger source
                  ;
    }

    static inline void start_conversion()
    {
        typename adc::T& ADC = adc::V;

        ADC.CR |= _::CR_ADSTART;            // start conversion
    }

    static inline uint16_t read()
    {
        typename adc::T& ADC = adc::V;

        start_conversion();                 // start conversion
        while (!(ADC.ISR & _::ISR_EOC));    // conversion complete
        return ADC.DR;                      // read data register
    }

    using traits = adc_traits<INST>;
    using adc = typename traits::adc;
    using _ = typename adc::T;
};

} // namespace internal

