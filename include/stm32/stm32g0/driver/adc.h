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
        typename adc::T& ADC = adc::V;

        ADC.ISR &= ~_::ISR_CCRDY;           // clear channel config ready
        ADC.CHSELR = ((CH1 & 0xf) << (0*4))  // sequence slot 1
                   | ((CH2 & 0xf) << (1*4))  // sequence slot 2
                   | ((CH3 & 0xf) << (2*4))  // sequence slot 3
                   | ((CH4 & 0xf) << (3*4))  // sequence slot 4
                   | ((CH5 & 0xf) << (4*4))  // sequence slot 5
                   | ((CH6 & 0xf) << (5*4))  // sequence slot 6
                   | ((CH7 & 0xf) << (6*4))  // sequence slot 7
                   | ((CH8 & 0xf) << (7*4))  // sequence slot 8
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
        DMA::template set_request_id<DMACH, 5>();   // FIXME: use constant!
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

    template<uint8_t CH>
    static inline uint16_t read()
    {
        typename adc::T& ADC = adc::V;

        sequence<CH>();                     // select channel to convert
        start_conversion();                 // start conversion
        while (!(ADC.ISR & _::ISR_EOC));    // conversion complete
        return ADC.DR;                      // read data register
    }

    using traits = adc_traits<INST>;
    using adc = typename traits::adc;
    using _ = typename adc::T;
};

} // namespace internal

