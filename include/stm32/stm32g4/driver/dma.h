#pragma once

#include <device/dmamux.h>

template<uint8_t W> struct dma_size_bits {};

template<> struct dma_size_bits<1> { static constexpr uint32_t BITS = 0x0; };
template<> struct dma_size_bits<2> { static constexpr uint32_t BITS = 0x1; };
template<> struct dma_size_bits<4> { static constexpr uint32_t BITS = 0x2; };

template<typename T>
static constexpr uint32_t dma_type_size() { return dma_size_bits<sizeof(T)>::BITS; }

template<int INST, int CH> struct mux_traits {};

template<> struct mux_traits<1, 1> { static inline volatile uint32_t& CCR() { return dmamux_t::V.C0CR; } };
template<> struct mux_traits<1, 2> { static inline volatile uint32_t& CCR() { return dmamux_t::V.C1CR; } };
template<> struct mux_traits<1, 3> { static inline volatile uint32_t& CCR() { return dmamux_t::V.C2CR; } };
template<> struct mux_traits<1, 4> { static inline volatile uint32_t& CCR() { return dmamux_t::V.C3CR; } };
template<> struct mux_traits<1, 5> { static inline volatile uint32_t& CCR() { return dmamux_t::V.C4CR; } };
template<> struct mux_traits<1, 6> { static inline volatile uint32_t& CCR() { return dmamux_t::V.C5CR; } };
template<> struct mux_traits<1, 7> { static inline volatile uint32_t& CCR() { return dmamux_t::V.C6CR; } };
template<> struct mux_traits<1, 8> { static inline volatile uint32_t& CCR() { return dmamux_t::V.C7CR; } };
template<> struct mux_traits<2, 1> { static inline volatile uint32_t& CCR() { return dmamux_t::V.C8CR; } };
template<> struct mux_traits<2, 2> { static inline volatile uint32_t& CCR() { return dmamux_t::V.C9CR; } };
template<> struct mux_traits<2, 3> { static inline volatile uint32_t& CCR() { return dmamux_t::V.C10CR; } };
template<> struct mux_traits<2, 4> { static inline volatile uint32_t& CCR() { return dmamux_t::V.C11CR; } };
template<> struct mux_traits<2, 5> { static inline volatile uint32_t& CCR() { return dmamux_t::V.C12CR; } };
template<> struct mux_traits<2, 6> { static inline volatile uint32_t& CCR() { return dmamux_t::V.C13CR; } };
template<> struct mux_traits<2, 7> { static inline volatile uint32_t& CCR() { return dmamux_t::V.C14CR; } };
template<> struct mux_traits<2, 8> { static inline volatile uint32_t& CCR() { return dmamux_t::V.C15CR; } };

template<uint8_t INST, uint8_t CH> struct dma_channel_traits {};

struct request
{
    enum request_t
    { DMAMUX_REQ_G0 = 1, DMAMUX_REQ_G1 = 2, DMAMUX_REQG2 = 3, DMAMUX_REQ_G3 = 4, ADC1 = 5, DAC1_CH1 = 6
    , DAC1_CH2 = 7, TIM6_UP = 8, TIM7_UP = 9, SPI1_RX = 10, SPI1_TX = 11, SPI2_RX = 12, SPI2_TX = 13
    , SPI3_RX = 14, SPI3_TX = 15, I2C1_RX = 16, I2C1_TX = 17, I2C2_RX = 18, I2C2_TX = 19, I2C3_RX = 20
    , I2C3_TX = 21, I2C4_RX = 22, I2C4_TX = 23, USART1_RX = 24, USART1_TX = 25, USART2_RX = 26
    , USART2_TX = 27, USART3_RX = 28, USART3_TX = 29, UART4_RX = 30, UART4_TX = 31, UART5_RX = 32
    , UART5_TX = 33, LPUART1_RX = 34, LPUART1_TX = 35, ADC2 = 36, ADC3 = 37, ADC4 = 38, ADC5 = 39
    , QUADSPI = 40, DAC2_CH1 = 41, TIM1_CH1 = 42, TIM1_CH2 = 43, TIM1_CH3 = 44, TIM1_CH4 = 45
    , TIM1_UP = 46, TIM1_TRIG = 47, TIM1_COM = 48, TIM8_CH1 = 49, TIM8_CH2 = 50, TIM8_CH3 = 51
    , TIM8_CH4 = 52, TIM8_UP = 53, TIM8_TRIG = 54, TIM8_COM = 55, TIM2_CH1 = 56, TIM2_CH2 = 57
    , TIM2_CH3 = 58, TIM2_CH4 = 59, TIM2_UP = 60, TIM3_CH1 = 61, TIM3_CH2 = 62, TIM3_CH3 = 63
    , TIM3_CH4 = 64, TIM3_UP = 65, TIM3_TRIG = 66, TIM4_CH1 = 67, TIM4_CH2 = 68, TIM4_CH3 = 69
    , TIM4_CH4 = 70, TIM4_UP = 71, TIM5_CH1 = 72, TIM5_CH2 = 73, TIM5_CH3 = 74, TIM5_CH4 = 75
    , TIM5_UP = 76, TIM5_TRIG = 77, TIM15_CH1 = 78, TIM15_UP = 79, TIM15_TRIG = 80, TIM15_COM = 81
    , TIM16_CH1 = 82, TIM16_UP = 83, TIM17_CH1 = 84, TIM17_UP = 85, TIM20_CH1 = 86, TIM20_CH2 = 87
    , TIM20_CH3 = 88, TIM20_CH4 = 89, TIM20_UP = 90, AES_IN = 91, AES_OUT = 92, TIM20_TRIG = 93
    , TIM20_COM = 94, HRTIM_MASTER = 95, HRTIM_TIMA = 96, HRTIM_TIMB = 97, HRTIM_TIMC = 98
    , HRTIM_TIMD = 99, HRTIM_TIME = 100, HRTIM_TIMF = 101, DAC3_CH1 = 102, DAC3_CH2 = 103, DAC4_CH1 = 104
    , DAC4_CH2 = 105, SPI4_RX = 106, SPI4_TX = 107, SAI1_A = 108, SAI1_B = 109, FMAC_READ = 110
    , FMAC_WRITE = 111, CORDIC_READ = 112, CORDIC_WRITE = 113, UCPD1_RX = 114, UCPD1_TX = 115
    };
}; 

template<uint8_t INST> struct dma_channel_traits<INST, 1>
{
    using traits = dma_traits<INST>;
    using dma = typename traits::dma;
    using _ = typename dma::T;

    static constexpr uint32_t ISR_TEIF = _::ISR_TEIF1;
    static constexpr uint32_t ISR_HTIF = _::ISR_HTIF1;
    static constexpr uint32_t ISR_TCIF = _::ISR_TCIF1;
    static constexpr uint32_t ISR_GIF = _::ISR_GIF1;

    static constexpr uint32_t IFCR_TEIF = _::IFCR_TEIF1;
    static constexpr uint32_t IFCR_HTIF = _::IFCR_HTIF1;
    static constexpr uint32_t IFCR_TCIF = _::IFCR_TCIF1;
    static constexpr uint32_t IFCR_GIF = _::IFCR_GIF1;

    static inline volatile uint32_t& CCR() { return dma::V.CCR1; }
    static inline volatile uint32_t& CNDTR() { return dma::V.CNDTR1; }
    static inline volatile uint32_t& CPAR() { return dma::V.CPAR1; }
    static inline volatile uint32_t& CMAR() { return dma::V.CMAR1; }
};

template<uint8_t INST> struct dma_channel_traits<INST, 2>
{
    using traits = dma_traits<INST>;
    using dma = typename traits::dma;
    using _ = typename dma::T;

    static constexpr uint32_t ISR_TEIF = _::ISR_TEIF2;
    static constexpr uint32_t ISR_HTIF = _::ISR_HTIF2;
    static constexpr uint32_t ISR_TCIF = _::ISR_TCIF2;
    static constexpr uint32_t ISR_GIF = _::ISR_GIF2;

    static constexpr uint32_t IFCR_TEIF = _::IFCR_TEIF2;
    static constexpr uint32_t IFCR_HTIF = _::IFCR_HTIF2;
    static constexpr uint32_t IFCR_TCIF = _::IFCR_TCIF2;
    static constexpr uint32_t IFCR_GIF = _::IFCR_GIF2;

    static inline volatile uint32_t& CCR() { return dma::V.CCR2; }
    static inline volatile uint32_t& CNDTR() { return dma::V.CNDTR2; }
    static inline volatile uint32_t& CPAR() { return dma::V.CPAR2; }
    static inline volatile uint32_t& CMAR() { return dma::V.CMAR2; }
};

template<uint8_t INST> struct dma_channel_traits<INST, 3>
{
    using traits = dma_traits<INST>;
    using dma = typename traits::dma;
    using _ = typename dma::T;

    static constexpr uint32_t ISR_TEIF = _::ISR_TEIF3;
    static constexpr uint32_t ISR_HTIF = _::ISR_HTIF3;
    static constexpr uint32_t ISR_TCIF = _::ISR_TCIF3;
    static constexpr uint32_t ISR_GIF = _::ISR_GIF3;

    static constexpr uint32_t IFCR_TEIF = _::IFCR_TEIF3;
    static constexpr uint32_t IFCR_HTIF = _::IFCR_HTIF3;
    static constexpr uint32_t IFCR_TCIF = _::IFCR_TCIF3;
    static constexpr uint32_t IFCR_GIF = _::IFCR_GIF3;

    static inline volatile uint32_t& CCR() { return dma::V.CCR3; }
    static inline volatile uint32_t& CNDTR() { return dma::V.CNDTR3; }
    static inline volatile uint32_t& CPAR() { return dma::V.CPAR3; }
    static inline volatile uint32_t& CMAR() { return dma::V.CMAR3; }
};

template<uint8_t INST> struct dma_channel_traits<INST, 4>
{
    using traits = dma_traits<INST>;
    using dma = typename traits::dma;
    using _ = typename dma::T;

    static constexpr uint32_t ISR_TEIF = _::ISR_TEIF4;
    static constexpr uint32_t ISR_HTIF = _::ISR_HTIF4;
    static constexpr uint32_t ISR_TCIF = _::ISR_TCIF4;
    static constexpr uint32_t ISR_GIF = _::ISR_GIF4;

    static constexpr uint32_t IFCR_TEIF = _::IFCR_TEIF4;
    static constexpr uint32_t IFCR_HTIF = _::IFCR_HTIF4;
    static constexpr uint32_t IFCR_TCIF = _::IFCR_TCIF4;
    static constexpr uint32_t IFCR_GIF = _::IFCR_GIF4;

    static inline volatile uint32_t& CCR() { return dma::V.CCR4; }
    static inline volatile uint32_t& CNDTR() { return dma::V.CNDTR4; }
    static inline volatile uint32_t& CPAR() { return dma::V.CPAR4; }
    static inline volatile uint32_t& CMAR() { return dma::V.CMAR4; }
};

template<uint8_t INST> struct dma_channel_traits<INST, 5>
{
    using traits = dma_traits<INST>;
    using dma = typename traits::dma;
    using _ = typename dma::T;

    static constexpr uint32_t ISR_TEIF = _::ISR_TEIF5;
    static constexpr uint32_t ISR_HTIF = _::ISR_HTIF5;
    static constexpr uint32_t ISR_TCIF = _::ISR_TCIF5;
    static constexpr uint32_t ISR_GIF = _::ISR_GIF5;

    static constexpr uint32_t IFCR_TEIF = _::IFCR_TEIF5;
    static constexpr uint32_t IFCR_HTIF = _::IFCR_HTIF5;
    static constexpr uint32_t IFCR_TCIF = _::IFCR_TCIF5;
    static constexpr uint32_t IFCR_GIF = _::IFCR_GIF5;

    static inline volatile uint32_t& CCR() { return dma::V.CCR5; }
    static inline volatile uint32_t& CNDTR() { return dma::V.CNDTR5; }
    static inline volatile uint32_t& CPAR() { return dma::V.CPAR5; }
    static inline volatile uint32_t& CMAR() { return dma::V.CMAR5; }
};

template<uint8_t INST> struct dma_channel_traits<INST, 6>
{
    using traits = dma_traits<INST>;
    using dma = typename traits::dma;
    using _ = typename dma::T;

    static constexpr uint32_t ISR_TEIF = _::ISR_TEIF6;
    static constexpr uint32_t ISR_HTIF = _::ISR_HTIF6;
    static constexpr uint32_t ISR_TCIF = _::ISR_TCIF6;
    static constexpr uint32_t ISR_GIF = _::ISR_GIF6;

    static constexpr uint32_t IFCR_TEIF = _::IFCR_TEIF6;
    static constexpr uint32_t IFCR_HTIF = _::IFCR_HTIF6;
    static constexpr uint32_t IFCR_TCIF = _::IFCR_TCIF6;
    static constexpr uint32_t IFCR_GIF = _::IFCR_GIF6;

    static inline volatile uint32_t& CCR() { return dma::V.CCR6; }
    static inline volatile uint32_t& CNDTR() { return dma::V.CNDTR6; }
    static inline volatile uint32_t& CPAR() { return dma::V.CPAR6; }
    static inline volatile uint32_t& CMAR() { return dma::V.CMAR6; }
};

template<uint8_t INST> struct dma_channel_traits<INST, 7>
{
    using traits = dma_traits<INST>;
    using dma = typename traits::dma;
    using _ = typename dma::T;

    static constexpr uint32_t ISR_TEIF = _::ISR_TEIF7;
    static constexpr uint32_t ISR_HTIF = _::ISR_HTIF7;
    static constexpr uint32_t ISR_TCIF = _::ISR_TCIF7;
    static constexpr uint32_t ISR_GIF = _::ISR_GIF7;

    static constexpr uint32_t IFCR_TEIF = _::IFCR_TEIF7;
    static constexpr uint32_t IFCR_HTIF = _::IFCR_HTIF7;
    static constexpr uint32_t IFCR_TCIF = _::IFCR_TCIF7;
    static constexpr uint32_t IFCR_GIF = _::IFCR_GIF7;

    static inline volatile uint32_t& CCR() { return dma::V.CCR7; }
    static inline volatile uint32_t& CNDTR() { return dma::V.CNDTR7; }
    static inline volatile uint32_t& CPAR() { return dma::V.CPAR7; }
    static inline volatile uint32_t& CMAR() { return dma::V.CMAR7; }
};

template<uint8_t INST> struct dma_channel_traits<INST, 8>
{
    using traits = dma_traits<INST>;
    using dma = typename traits::dma;
    using _ = typename dma::T;

    static constexpr uint32_t ISR_TEIF = _::ISR_TEIF8;
    static constexpr uint32_t ISR_HTIF = _::ISR_HTIF8;
    static constexpr uint32_t ISR_TCIF = _::ISR_TCIF8;
    static constexpr uint32_t ISR_GIF = _::ISR_GIF8;

    static constexpr uint32_t IFCR_TEIF = _::IFCR_TEIF8;
    static constexpr uint32_t IFCR_HTIF = _::IFCR_HTIF8;
    static constexpr uint32_t IFCR_TCIF = _::IFCR_TCIF8;
    static constexpr uint32_t IFCR_GIF = _::IFCR_GIF8;

    static inline volatile uint32_t& CCR() { return dma::V.CCR8; }
    static inline volatile uint32_t& CNDTR() { return dma::V.CNDTR8; }
    static inline volatile uint32_t& CPAR() { return dma::V.CPAR8; }
    static inline volatile uint32_t& CMAR() { return dma::V.CMAR8; }
};

template<int INST>
struct dma_t
{
    static void setup()
    {
        dma_traits<INST>::template enable<rcc_t>();   // enable dma clock
        dmamux_traits<0>::template enable<rcc_t>();   // enable dmamux clock
    }

    template<uint8_t CH, typename T>
    static inline void periph_to_mem(volatile uint32_t *source, volatile T *dest, uint16_t nelem)
    {
        typedef dma_channel_traits<INST, CH> __;

        dmamux_t::V.CFR &= ~(1 << (CH-1)); // clear sync overrun flag
        clear_interrupt_flags<CH>();    // clear all interrupt flags

        __::CNDTR() = nelem;            // set number of data elements
        __::CPAR() = reinterpret_cast<uint32_t>(source);
        __::CMAR() = reinterpret_cast<uint32_t>(dest);

        __::CCR() = _::CCR1_RESET_VALUE // reset configuration register
                  | _::CCR1_MINC        // set memory increment mode
                  | _::CCR1_CIRC        // use circular mode
                  | _::CCR1_MSIZE::W(dma_type_size<T>()) // set item size
                  | _::CCR1_PSIZE::W(dma_type_size<uint32_t>()) // set peripheral register size to 32-bits
                  ;
    }

    template<uint8_t CH, typename T, uint32_t PERIPH_REG_SIZE = dma_type_size<uint32_t>(), circular_mode CIRC_MODE = circular>
    static inline void mem_to_periph(const T *source, uint16_t nelem, volatile uint32_t *dest)
    {
        typedef dma_channel_traits<INST, CH> __;

        dmamux_t::V.CFR &= ~(1 << (CH-1)); // clear sync overrun flag
        clear_interrupt_flags<CH>();    // clear all interrupt flags

        __::CNDTR() = nelem;            // set number of data elements
        __::CPAR() = reinterpret_cast<uint32_t>(dest);
        __::CMAR() = reinterpret_cast<uint32_t>(source);

        __::CCR() = _::CCR1_RESET_VALUE // reset configuration register
                  | _::CCR1_DIR         // read from memory, write periphal
                  | _::CCR1_MINC        // set memory increment mode
                  | (CIRC_MODE == circular ? _::CCR1_CIRC : 0)
                  | _::CCR1_MSIZE::W(dma_type_size<T>()) // set item size
                  | _::CCR1_PSIZE::W(PERIPH_REG_SIZE)    // set peripheral register size
                  ;
    }

    template<uint8_t CH, bool HALF = false>
    static inline void enable_interrupt()
    {
        dma_channel_traits<INST, CH>::CCR()
            |= _::CCR1_TEIE               // interrupt on transfer error
            |  _::CCR1_TCIE               // interrupt on transfer complete
            |  (HALF ? _::CCR1_HTIE : 0)  // interrupt on half transfer
            ;
    }

    template<uint8_t CH>
    static inline void disable_interrupt()
    {
        dma_channel_traits<INST, CH>::CCR()
            &= ~(_::CCR1_TEIE | _::CCR1_HTIE | _::CCR1_TCIE);
    }

    template<uint8_t CH>
    static inline uint32_t interrupt_status()
    {
        uint32_t x = dma::V.ISR;

        return ((x & dma_channel_traits<INST, CH>::ISR_GIF)  ? dma_global_interrupt  : 0)
             | ((x & dma_channel_traits<INST, CH>::ISR_TCIF) ? dma_transfer_complete : 0)
             | ((x & dma_channel_traits<INST, CH>::ISR_HTIF) ? dma_half_transfer     : 0)
             | ((x & dma_channel_traits<INST, CH>::ISR_TEIF) ? dma_transfer_error    : 0)
             ;
    }

    template<uint8_t CH>
    static inline void clear_interrupt_flags()
    {
        dma::V.IFCR |= dma_channel_traits<INST, CH>::IFCR_GIF;
    }

    template<uint8_t CH>
    static inline void enable()
    {
        dma_channel_traits<INST, CH>::CCR() |= _::CCR1_EN;
    }

    template<uint8_t CH>
    static inline void disable()
    {
        dma_channel_traits<INST, CH>::CCR() &= ~_::CCR1_EN;
    }

    template<uint8_t CH, uint8_t ID>
    static inline void set_request_id()
    {
        mux_traits<INST, CH>::CCR() |= dmamux_t::T::C0CR_DMAREQ_ID::W(ID);
    }

    template<uint8_t CH>
    static inline void abort()
    {
        disable_interrupt<CH>();            // disable dma channel interrupts
        mux_traits<INST, CH>::CCR()
            &= ~dmamux_t::T::C0CR_SOIE;     // disable synch overrun interrupt
        disable<CH>();                      // disable dma channel
        clear_interrupt_flags<CH>();        // clear all interrupt flags
        dmamux_t::V.CFR &= ~(1 << (CH-1));  // clear sync overrun flag
    }

    using traits = dma_traits<INST>;
    using dma = typename traits::dma;
    using _ = typename dma::T;
};

