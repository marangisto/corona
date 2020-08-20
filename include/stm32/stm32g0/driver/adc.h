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
                  | _::CFGR1_CHSELRMOD      // alternate channel select mode
                  | _::CFGR1_OVRMOD         // overwrite on overrun
                  ;
        ADC.CFGR2 = _::CFGR2_RESET_VALUE    // reset configuration register 2
                  | _::CFGR2_CKMODE::W(0x3) // use PCLK synchronous mode
                  ;
    }

    static void enable()
    {
        typename adc::T& ADC = adc::V;

        uint32_t saved_dmaen = ADC.CFGR1 & _::CFGR1_DMAEN; 

        ADC.CR |= _::CR_ADVREGEN;           // enable adc voltage regulator
        sys_tick::delay_us(10);             // wait for regulator to stabilize
        ADC.CFGR1 &= ~_::CFGR1_DMAEN;       // disabled DMA during calibration
        ADC.CR |= _::CR_ADCAL;              // start calibration
        while (ADC.CR & _::CR_ADCAL);       // wait for calibration complete
        ADC.CFGR1 |= saved_dmaen;           // restore DMA setting
        for (volatile uint8_t i = 0; i < 4; ++i); // wait cycles
        ADC.CR |= _::CR_ADEN;               // enable adc 
        while (!(ADC.ISR & _::ISR_ADRDY));  // wait for adc ready 
    }

    static constexpr uint8_t nulch = 0xf;

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

        ADC.ISR &= ~_::ISR_CCRDY;           // clear channel config ready
        ADC.CHSELR = ((S1 & 0xf) << (0*4))  // sequence slot 1
                   | ((S2 & 0xf) << (1*4))  // sequence slot 2
                   | ((S3 & 0xf) << (2*4))  // sequence slot 3
                   | ((S4 & 0xf) << (3*4))  // sequence slot 4
                   | ((S5 & 0xf) << (4*4))  // sequence slot 5
                   | ((S6 & 0xf) << (5*4))  // sequence slot 6
                   | ((S7 & 0xf) << (6*4))  // sequence slot 7
                   | ((S8 & 0xf) << (7*4))  // sequence slot 8
                   ;
        while (!(ADC.ISR & _::ISR_CCRDY));  // wait for selection ready
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
        dmamux_traits<DMACH>::CCR() = dmamux_t::T::C0CR_DMAREQ_ID::W(5);
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

