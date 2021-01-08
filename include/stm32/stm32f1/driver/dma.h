#pragma once

template<uint8_t W> struct dma_size_bits {};

template<> struct dma_size_bits<1> { static constexpr uint32_t BITS = 0x0; };
template<> struct dma_size_bits<2> { static constexpr uint32_t BITS = 0x1; };
template<> struct dma_size_bits<4> { static constexpr uint32_t BITS = 0x2; };

template<typename T>
static constexpr uint32_t dma_type_size() { return dma_size_bits<sizeof(T)>::BITS; }

template<uint8_t INST, uint8_t CH> struct dma_channel_traits {};

// TODO: Complete this section
template<uint8_t INST> struct dma_channel_traits<INST, 1>
{
    using traits = dma_traits<INST>;
    using dma = typename traits::dma;
    using _ = typename dma::T;

    static constexpr uint32_t ISR_TEIF = _::ISR_TEIF1;
    static constexpr uint32_t ISR_HTIF = _::ISR_HTIF1;
    static constexpr uint32_t ISR_TCIF = _::ISR_TCIF1;
    static constexpr uint32_t ISR_GIF = _::ISR_GIF1;

    static constexpr uint32_t IFCR_TEIF = _::IFCR_CTEIF1;
    static constexpr uint32_t IFCR_HTIF = _::IFCR_CHTIF1;
    static constexpr uint32_t IFCR_TCIF = _::IFCR_CTCIF1;
    static constexpr uint32_t IFCR_GIF = _::IFCR_CGIF1;

    static inline volatile uint32_t& CCR() { return dma::V.CCR1; }
    static inline volatile uint32_t& CNDTR() { return dma::V.CNDTR1; }
    static inline volatile uint32_t& CPAR() { return dma::V.CPAR1; }
    static inline volatile uint32_t& CMAR() { return dma::V.CMAR1; }
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

    static constexpr uint32_t IFCR_TEIF = _::IFCR_CTEIF5;
    static constexpr uint32_t IFCR_HTIF = _::IFCR_CHTIF5;
    static constexpr uint32_t IFCR_TCIF = _::IFCR_CTCIF5;
    static constexpr uint32_t IFCR_GIF = _::IFCR_CGIF5;

    static inline volatile uint32_t& CCR() { return dma::V.CCR5; }
    static inline volatile uint32_t& CNDTR() { return dma::V.CNDTR5; }
    static inline volatile uint32_t& CPAR() { return dma::V.CPAR5; }
    static inline volatile uint32_t& CMAR() { return dma::V.CMAR5; }
};

template<int INST>
struct dma_t
{
    static void setup()
    {
        dma_traits<INST>::template enable<rcc_t>();   // enable dma clock
    }

    template<uint8_t CH, typename T>
    static inline void periph_to_mem(volatile uint32_t *source, volatile T *dest, uint16_t nelem)
    {
        typedef dma_channel_traits<INST, CH> __;

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

    template
        < uint8_t CH                    // dma channel
        , typename T                    // type of source buffer
        , circular_mode CIRC_MODE = circular
        , typename R = uint32_t         // type of peripheral register
        >
    static inline void mem_to_periph(const T *source, uint16_t nelem, volatile uint32_t *dest)
    {
        typedef dma_channel_traits<INST, CH> __;

        clear_interrupt_flags<CH>();    // clear all interrupt flags
        __::CNDTR() = nelem;            // set number of data elements
        __::CPAR() = reinterpret_cast<uint32_t>(dest);
        __::CMAR() = reinterpret_cast<uint32_t>(source);

        __::CCR() = _::CCR1_RESET_VALUE // reset configuration register
                  | _::CCR1_DIR         // read from memory, write periphal
                  | _::CCR1_MINC        // set memory increment mode
                  | (CIRC_MODE == circular ? _::CCR1_CIRC : 0)
                  | _::CCR1_MSIZE::W(dma_type_size<T>()) // set item size
                  | _::CCR1_PSIZE::W(dma_type_size<R>()) // set peripheral register size
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

    template<uint8_t CH>
    static inline void abort()
    {
        disable_interrupt<CH>();        // disable dma channel interrupts
        disable<CH>();                  // disable dma channel
        clear_interrupt_flags<CH>();    // clear all interrupt flags
    }

    using traits = dma_traits<INST>;
    using dma = typename traits::dma;
    using _ = typename dma::T;
};

