#pragma once

#include "corona.h"

enum dma_interrupt_status
    { dma_global_interrupt  = 0x1
    , dma_transfer_complete = 0x2
    , dma_half_transfer     = 0x4
    , dma_transfer_error    = 0x8
    };

enum circular_mode
    { circular
    , linear
    };

#include <device/dma.h>
#include <driver/dma.h>

/*
#if defined(HAVE_PERIPHERAL_DMAMUX)
template<uint8_t NO, uint8_t CH> struct dmamux_traits {};

template<> struct dmamux_traits<1, 1> { static inline volatile uint32_t& CCR() { return device::DMAMUX.C0CR; } };
template<> struct dmamux_traits<1, 2> { static inline volatile uint32_t& CCR() { return device::DMAMUX.C1CR; } };
template<> struct dmamux_traits<1, 3> { static inline volatile uint32_t& CCR() { return device::DMAMUX.C2CR; } };
template<> struct dmamux_traits<1, 4> { static inline volatile uint32_t& CCR() { return device::DMAMUX.C3CR; } };
template<> struct dmamux_traits<1, 5> { static inline volatile uint32_t& CCR() { return device::DMAMUX.C4CR; } };
template<> struct dmamux_traits<1, 6> { static inline volatile uint32_t& CCR() { return device::DMAMUX.C5CR; } };
template<> struct dmamux_traits<1, 7> { static inline volatile uint32_t& CCR() { return device::DMAMUX.C6CR; } };
#if defined(STM32G4)
template<> struct dmamux_traits<1, 8> { static inline volatile uint32_t& CCR() { return device::DMAMUX.C7CR; } };
template<> struct dmamux_traits<2, 1> { static inline volatile uint32_t& CCR() { return device::DMAMUX.C8CR; } };
template<> struct dmamux_traits<2, 2> { static inline volatile uint32_t& CCR() { return device::DMAMUX.C9CR; } };
template<> struct dmamux_traits<2, 3> { static inline volatile uint32_t& CCR() { return device::DMAMUX.C10CR; } };
template<> struct dmamux_traits<2, 4> { static inline volatile uint32_t& CCR() { return device::DMAMUX.C11CR; } };
template<> struct dmamux_traits<2, 5> { static inline volatile uint32_t& CCR() { return device::DMAMUX.C12CR; } };
template<> struct dmamux_traits<2, 6> { static inline volatile uint32_t& CCR() { return device::DMAMUX.C13CR; } };
template<> struct dmamux_traits<2, 7> { static inline volatile uint32_t& CCR() { return device::DMAMUX.C14CR; } };
template<> struct dmamux_traits<2, 8> { static inline volatile uint32_t& CCR() { return device::DMAMUX.C15CR; } };
#endif // STM32G431
#endif // HAVE_PERIPHERAL_DMAMUX

template<uint8_t NO> struct dma_traits {};

#if defined(HAVE_PERIPHERAL_DMA1)
template<> struct dma_traits<1>
{
    typedef device::dma1_t T;
    static inline T& DMA() { return device::DMA1; }
};
#endif

#if defined(HAVE_PERIPHERAL_DMA2)
template<> struct dma_traits<2>
{
    typedef device::dma2_t T;
    static inline T& DMA() { return device::DMA2; }
};
#endif

#if defined(HAVE_PERIPHERAL_DMA)
template<> struct dma_traits<1>
{
    typedef device::dma_t T;
    static inline T& DMA() { return device::DMA; }
};
#endif

template<uint8_t NO, uint8_t CH> struct dma_channel_traits {};

#if defined(STM32G4)
enum resource_t
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

template<uint8_t NO> struct dma_channel_traits<NO, 1>
{
    typedef typename dma_traits<NO>::T _;
    static inline typename dma_traits<NO>::T& DMA() { return dma_traits<NO>::DMA(); }

    static constexpr uint32_t ISR_TEIF = _::ISR_TEIF1;
    static constexpr uint32_t ISR_HTIF = _::ISR_HTIF1;
    static constexpr uint32_t ISR_TCIF = _::ISR_TCIF1;
    static constexpr uint32_t ISR_GIF = _::ISR_GIF1;

    static constexpr uint32_t IFCR_TEIF = _::IFCR_TEIF1;
    static constexpr uint32_t IFCR_HTIF = _::IFCR_HTIF1;
    static constexpr uint32_t IFCR_TCIF = _::IFCR_TCIF1;
    static constexpr uint32_t IFCR_GIF = _::IFCR_GIF1;

    static inline volatile uint32_t& CCR() { return DMA().CCR1; }
    static inline volatile uint32_t& CNDTR() { return DMA().CNDTR1; }
    static inline volatile uint32_t& CPAR() { return DMA().CPAR1; }
    static inline volatile uint32_t& CMAR() { return DMA().CMAR1; }
};

template<uint8_t NO> struct dma_channel_traits<NO, 2>
{
    typedef typename dma_traits<NO>::T _;
    static inline typename dma_traits<NO>::T& DMA() { return dma_traits<NO>::DMA(); }

    static constexpr uint32_t ISR_TEIF = _::ISR_TEIF2;
    static constexpr uint32_t ISR_HTIF = _::ISR_HTIF2;
    static constexpr uint32_t ISR_TCIF = _::ISR_TCIF2;
    static constexpr uint32_t ISR_GIF = _::ISR_GIF2;

    static constexpr uint32_t IFCR_TEIF = _::IFCR_TEIF2;
    static constexpr uint32_t IFCR_HTIF = _::IFCR_HTIF2;
    static constexpr uint32_t IFCR_TCIF = _::IFCR_TCIF2;
    static constexpr uint32_t IFCR_GIF = _::IFCR_GIF2;

    static inline volatile uint32_t& CCR() { return DMA().CCR2; }
    static inline volatile uint32_t& CNDTR() { return DMA().CNDTR2; }
    static inline volatile uint32_t& CPAR() { return DMA().CPAR2; }
    static inline volatile uint32_t& CMAR() { return DMA().CMAR2; }
};

template<uint8_t NO> struct dma_channel_traits<NO, 3>
{
    typedef typename dma_traits<NO>::T _;
    static inline typename dma_traits<NO>::T& DMA() { return dma_traits<NO>::DMA(); }

    static constexpr uint32_t ISR_TEIF = _::ISR_TEIF3;
    static constexpr uint32_t ISR_HTIF = _::ISR_HTIF3;
    static constexpr uint32_t ISR_TCIF = _::ISR_TCIF3;
    static constexpr uint32_t ISR_GIF = _::ISR_GIF3;

    static constexpr uint32_t IFCR_TEIF = _::IFCR_TEIF3;
    static constexpr uint32_t IFCR_HTIF = _::IFCR_HTIF3;
    static constexpr uint32_t IFCR_TCIF = _::IFCR_TCIF3;
    static constexpr uint32_t IFCR_GIF = _::IFCR_GIF3;

    static inline volatile uint32_t& CCR() { return DMA().CCR3; }
    static inline volatile uint32_t& CNDTR() { return DMA().CNDTR3; }
    static inline volatile uint32_t& CPAR() { return DMA().CPAR3; }
    static inline volatile uint32_t& CMAR() { return DMA().CMAR3; }
};

template<uint8_t NO> struct dma_channel_traits<NO, 4>
{
    typedef typename dma_traits<NO>::T _;
    static inline typename dma_traits<NO>::T& DMA() { return dma_traits<NO>::DMA(); }

    static constexpr uint32_t ISR_TEIF = _::ISR_TEIF4;
    static constexpr uint32_t ISR_HTIF = _::ISR_HTIF4;
    static constexpr uint32_t ISR_TCIF = _::ISR_TCIF4;
    static constexpr uint32_t ISR_GIF = _::ISR_GIF4;

    static constexpr uint32_t IFCR_TEIF = _::IFCR_TEIF4;
    static constexpr uint32_t IFCR_HTIF = _::IFCR_HTIF4;
    static constexpr uint32_t IFCR_TCIF = _::IFCR_TCIF4;
    static constexpr uint32_t IFCR_GIF = _::IFCR_GIF4;

    static inline volatile uint32_t& CCR() { return DMA().CCR4; }
    static inline volatile uint32_t& CNDTR() { return DMA().CNDTR4; }
    static inline volatile uint32_t& CPAR() { return DMA().CPAR4; }
    static inline volatile uint32_t& CMAR() { return DMA().CMAR4; }
};

template<uint8_t NO> struct dma_channel_traits<NO, 5>
{
    typedef typename dma_traits<NO>::T _;
    static inline typename dma_traits<NO>::T& DMA() { return dma_traits<NO>::DMA(); }

    static constexpr uint32_t ISR_TEIF = _::ISR_TEIF5;
    static constexpr uint32_t ISR_HTIF = _::ISR_HTIF5;
    static constexpr uint32_t ISR_TCIF = _::ISR_TCIF5;
    static constexpr uint32_t ISR_GIF = _::ISR_GIF5;

    static constexpr uint32_t IFCR_TEIF = _::IFCR_TEIF5;
    static constexpr uint32_t IFCR_HTIF = _::IFCR_HTIF5;
    static constexpr uint32_t IFCR_TCIF = _::IFCR_TCIF5;
    static constexpr uint32_t IFCR_GIF = _::IFCR_GIF5;

    static inline volatile uint32_t& CCR() { return DMA().CCR5; }
    static inline volatile uint32_t& CNDTR() { return DMA().CNDTR5; }
    static inline volatile uint32_t& CPAR() { return DMA().CPAR5; }
    static inline volatile uint32_t& CMAR() { return DMA().CMAR5; }
};

template<uint8_t NO> struct dma_channel_traits<NO, 6>
{
    typedef typename dma_traits<NO>::T _;
    static inline typename dma_traits<NO>::T& DMA() { return dma_traits<NO>::DMA(); }

    static constexpr uint32_t ISR_TEIF = _::ISR_TEIF6;
    static constexpr uint32_t ISR_HTIF = _::ISR_HTIF6;
    static constexpr uint32_t ISR_TCIF = _::ISR_TCIF6;
    static constexpr uint32_t ISR_GIF = _::ISR_GIF6;

    static constexpr uint32_t IFCR_TEIF = _::IFCR_TEIF6;
    static constexpr uint32_t IFCR_HTIF = _::IFCR_HTIF6;
    static constexpr uint32_t IFCR_TCIF = _::IFCR_TCIF6;
    static constexpr uint32_t IFCR_GIF = _::IFCR_GIF6;

    static inline volatile uint32_t& CCR() { return DMA().CCR6; }
    static inline volatile uint32_t& CNDTR() { return DMA().CNDTR6; }
    static inline volatile uint32_t& CPAR() { return DMA().CPAR6; }
    static inline volatile uint32_t& CMAR() { return DMA().CMAR6; }
};

template<uint8_t NO> struct dma_channel_traits<NO, 7>
{
    typedef typename dma_traits<NO>::T _;
    static inline typename dma_traits<NO>::T& DMA() { return dma_traits<NO>::DMA(); }

    static constexpr uint32_t ISR_TEIF = _::ISR_TEIF7;
    static constexpr uint32_t ISR_HTIF = _::ISR_HTIF7;
    static constexpr uint32_t ISR_TCIF = _::ISR_TCIF7;
    static constexpr uint32_t ISR_GIF = _::ISR_GIF7;

    static constexpr uint32_t IFCR_TEIF = _::IFCR_TEIF7;
    static constexpr uint32_t IFCR_HTIF = _::IFCR_HTIF7;
    static constexpr uint32_t IFCR_TCIF = _::IFCR_TCIF7;
    static constexpr uint32_t IFCR_GIF = _::IFCR_GIF7;

    static inline volatile uint32_t& CCR() { return DMA().CCR7; }
    static inline volatile uint32_t& CNDTR() { return DMA().CNDTR7; }
    static inline volatile uint32_t& CPAR() { return DMA().CPAR7; }
    static inline volatile uint32_t& CMAR() { return DMA().CMAR7; }
};

template<uint8_t NO> struct dma_channel_traits<NO, 8>
{
    typedef typename dma_traits<NO>::T _;
    static inline typename dma_traits<NO>::T& DMA() { return dma_traits<NO>::DMA(); }

    static constexpr uint32_t ISR_TEIF = _::ISR_TEIF8;
    static constexpr uint32_t ISR_HTIF = _::ISR_HTIF8;
    static constexpr uint32_t ISR_TCIF = _::ISR_TCIF8;
    static constexpr uint32_t ISR_GIF = _::ISR_GIF8;

    static constexpr uint32_t IFCR_TEIF = _::IFCR_TEIF8;
    static constexpr uint32_t IFCR_HTIF = _::IFCR_HTIF8;
    static constexpr uint32_t IFCR_TCIF = _::IFCR_TCIF8;
    static constexpr uint32_t IFCR_GIF = _::IFCR_GIF8;

    static inline volatile uint32_t& CCR() { return DMA().CCR8; }
    static inline volatile uint32_t& CNDTR() { return DMA().CNDTR8; }
    static inline volatile uint32_t& CPAR() { return DMA().CPAR8; }
    static inline volatile uint32_t& CMAR() { return DMA().CMAR8; }
};
#elif defined(STM32G0)
template<uint8_t NO> struct dma_channel_traits<NO, 1>
{
    typedef typename dma_traits<NO>::T _;
    static inline typename dma_traits<NO>::T& DMA() { return dma_traits<NO>::DMA(); }

    static constexpr uint32_t ISR_TEIF = _::ISR_TEIF3;
    static constexpr uint32_t ISR_HTIF = _::ISR_HTIF2;
    static constexpr uint32_t ISR_TCIF = _::ISR_TCIF1;
    static constexpr uint32_t ISR_GIF = _::ISR_GIF0;

    static constexpr uint32_t IFCR_TEIF = _::IFCR_CTEIF3;
    static constexpr uint32_t IFCR_HTIF = _::IFCR_CHTIF2;
    static constexpr uint32_t IFCR_TCIF = _::IFCR_CTCIF1;
    static constexpr uint32_t IFCR_GIF = _::IFCR_CGIF0;

    static inline volatile uint32_t& CCR() { return DMA().CCR1; }
    static inline volatile uint32_t& CNDTR() { return DMA().CNDTR1; }
    static inline volatile uint32_t& CPAR() { return DMA().CPAR1; }
    static inline volatile uint32_t& CMAR() { return DMA().CMAR1; }
};

template<uint8_t NO> struct dma_channel_traits<NO, 2>
{
    typedef typename dma_traits<NO>::T _;
    static inline typename dma_traits<NO>::T& DMA() { return dma_traits<NO>::DMA(); }

    static constexpr uint32_t ISR_TEIF = _::ISR_TEIF7;
    static constexpr uint32_t ISR_HTIF = _::ISR_HTIF6;
    static constexpr uint32_t ISR_TCIF = _::ISR_TCIF5;
    static constexpr uint32_t ISR_GIF = _::ISR_GIF4;

    static constexpr uint32_t IFCR_TEIF = _::IFCR_CTEIF7;
    static constexpr uint32_t IFCR_HTIF = _::IFCR_CHTIF6;
    static constexpr uint32_t IFCR_TCIF = _::IFCR_CTCIF5;
    static constexpr uint32_t IFCR_GIF = _::IFCR_CGIF4;

    static inline volatile uint32_t& CCR() { return DMA().CCR2; }
    static inline volatile uint32_t& CNDTR() { return DMA().CNDTR2; }
    static inline volatile uint32_t& CPAR() { return DMA().CPAR2; }
    static inline volatile uint32_t& CMAR() { return DMA().CMAR2; }
};
#elif defined(STM32F0)
// TODO: Complete this section
template<uint8_t NO> struct dma_channel_traits<NO, 1>
{
    typedef typename dma_traits<NO>::T _;
    static inline typename dma_traits<NO>::T& DMA() { return dma_traits<NO>::DMA(); }

    static constexpr uint32_t ISR_TEIF = _::ISR_TEIF1;
    static constexpr uint32_t ISR_HTIF = _::ISR_HTIF1;
    static constexpr uint32_t ISR_TCIF = _::ISR_TCIF1;
    static constexpr uint32_t ISR_GIF = _::ISR_GIF1;

    static constexpr uint32_t IFCR_TEIF = _::IFCR_CTEIF1;
    static constexpr uint32_t IFCR_HTIF = _::IFCR_CHTIF1;
    static constexpr uint32_t IFCR_TCIF = _::IFCR_CTCIF1;
    static constexpr uint32_t IFCR_GIF = _::IFCR_CGIF1;

    static inline volatile uint32_t& CCR() { return DMA().CCR1; }
    static inline volatile uint32_t& CNDTR() { return DMA().CNDTR1; }
    static inline volatile uint32_t& CPAR() { return DMA().CPAR1; }
    static inline volatile uint32_t& CMAR() { return DMA().CMAR1; }
};

template<uint8_t NO> struct dma_channel_traits<NO, 5>
{
    typedef typename dma_traits<NO>::T _;
    static inline typename dma_traits<NO>::T& DMA() { return dma_traits<NO>::DMA(); }

    static constexpr uint32_t ISR_TEIF = _::ISR_TEIF5;
    static constexpr uint32_t ISR_HTIF = _::ISR_HTIF5;
    static constexpr uint32_t ISR_TCIF = _::ISR_TCIF5;
    static constexpr uint32_t ISR_GIF = _::ISR_GIF5;

    static constexpr uint32_t IFCR_TEIF = _::IFCR_CTEIF5;
    static constexpr uint32_t IFCR_HTIF = _::IFCR_CHTIF5;
    static constexpr uint32_t IFCR_TCIF = _::IFCR_CTCIF5;
    static constexpr uint32_t IFCR_GIF = _::IFCR_CGIF5;

    static inline volatile uint32_t& CCR() { return DMA().CCR5; }
    static inline volatile uint32_t& CNDTR() { return DMA().CNDTR5; }
    static inline volatile uint32_t& CPAR() { return DMA().CPAR5; }
    static inline volatile uint32_t& CMAR() { return DMA().CMAR5; }
};
#endif

template<uint8_t W> struct dma_size_bits {};

template<> struct dma_size_bits<1> { static constexpr uint32_t BITS = 0x0; };
template<> struct dma_size_bits<2> { static constexpr uint32_t BITS = 0x1; };
template<> struct dma_size_bits<4> { static constexpr uint32_t BITS = 0x2; };

template<typename T>
static constexpr uint32_t dma_type_size() { return dma_size_bits<sizeof(T)>::BITS; }

template<uint8_t NO>
struct dma_t
{
    static constexpr uint8_t INST = NO;
    typedef typename dma_traits<NO>::T _;
    static inline typename dma_traits<NO>::T& DMA() { return dma_traits<NO>::DMA(); }

#if defined(HAVE_PERIPHERAL_DMAMUX)
    typedef typename device::dmamux_t MUX;
    static inline MUX& DMAMUX() { return device::DMAMUX; }
#endif // HAVE_PERIPHERAL_DMAMUX

    static void setup()
    {
#if defined(HAVE_PERIPHERAL_DMAMUX) && !defined(STM32G0)
        device::peripheral_traits<MUX>::enable();               // enable dma multiplexer
#endif // HAVE_PERIPHERAL_DMAMUX
        device::peripheral_traits<_>::enable();                 // enable dma clock
    }

    template<uint8_t CH, typename T>
    static inline void periph_to_mem(volatile uint32_t *source, volatile T *dest, uint16_t nelem)
    {
        typedef dma_channel_traits<NO, CH> __;

#if defined(HAVE_PERIPHERAL_DMAMUX)
        DMAMUX().CFR &= ~(1 << (CH-1));                                 // clear synchronization overrun flag
#endif // HAVE_PERIPHERAL_DMAMUX
        clear_interrupt_flags<CH>();                                    // clear all interrupt flags
        __::CNDTR() = nelem;                                            // set number of data elements
        __::CPAR() = reinterpret_cast<uint32_t>(source);
        __::CMAR() = reinterpret_cast<uint32_t>(dest);

        __::CCR() = _::CCR1_RESET_VALUE                                 // reset channel configuration register
                  | _::CCR1_MINC                                        // set memory increment mode
                  | _::CCR1_CIRC                                        // use circular mode
                  | _::template CCR1_MSIZE<dma_type_size<T>()>          // set memory item size
                  | _::template CCR1_PSIZE<dma_type_size<uint32_t>()>   // set peripheral register size to 32-bits
                  ;
    }

    template<uint8_t CH, typename T, uint32_t PERIPH_REG_SIZE = dma_type_size<uint32_t>(), circular_mode CIRC_MODE = circular>
    static inline void mem_to_periph(const T *source, uint16_t nelem, volatile uint32_t *dest)
    {
        typedef dma_channel_traits<NO, CH> __;

#if defined(HAVE_PERIPHERAL_DMAMUX)
        DMAMUX().CFR &= ~(1 << (CH-1));                                 // clear synchronization overrun flag
#endif // HAVE_PERIPHERAL_DMAMUX
        clear_interrupt_flags<CH>();                                    // clear all interrupt flags
        __::CNDTR() = nelem;                                            // set number of data elements
        __::CPAR() = reinterpret_cast<uint32_t>(dest);
        __::CMAR() = reinterpret_cast<uint32_t>(source);

        __::CCR() = _::CCR1_RESET_VALUE                                 // reset channel configuration register
                  | _::CCR1_DIR                                         // direction read from memory, write periphal
                  | _::CCR1_MINC                                        // set memory increment mode
                  | (CIRC_MODE == circular ? _::CCR1_CIRC : 0)          // use circular mode
                  | _::template CCR1_MSIZE<dma_type_size<T>()>          // set memory item size
                  | _::template CCR1_PSIZE<PERIPH_REG_SIZE>             // set peripheral register size
                  ;
    }

    template<uint8_t CH, bool HALF = false>
    static inline void enable_interrupt()
    {
        dma_channel_traits<NO, CH>::CCR() |= _::CCR1_TEIE               // interrupt on transfer error
                                          |  _::CCR1_TCIE               // interrupt on transfer complete
                                          |  (HALF ? _::CCR1_HTIE : 0)  // interrupt on half transfer
                                          ;
    }

    template<uint8_t CH>
    static inline void disable_interrupt()
    {
        dma_channel_traits<NO, CH>::CCR() &= ~(_::CCR1_TEIE | _::CCR1_HTIE | _::CCR1_TCIE);
    }

    template<uint8_t CH>
    static inline uint32_t interrupt_status()
    {
        uint32_t x = DMA().ISR;

        return ((x & dma_channel_traits<NO, CH>::ISR_GIF)  ? dma_global_interrupt  : 0)
             | ((x & dma_channel_traits<NO, CH>::ISR_TCIF) ? dma_transfer_complete : 0)
             | ((x & dma_channel_traits<NO, CH>::ISR_HTIF) ? dma_half_transfer     : 0)
             | ((x & dma_channel_traits<NO, CH>::ISR_TEIF) ? dma_transfer_error    : 0)
             ;
    }

    template<uint8_t CH>
    static inline void clear_interrupt_flags()
    {
        DMA().IFCR |= dma_channel_traits<NO, CH>::IFCR_GIF;     // clear general interrupt flag
    }

    template<uint8_t CH>
    static inline void enable()
    {
        dma_channel_traits<NO, CH>::CCR() |= _::CCR1_EN;        // enable dma channel
    }

    template<uint8_t CH>
    static inline void disable()
    {
        dma_channel_traits<NO, CH>::CCR() &= ~_::CCR1_EN;       // disable dma channel
    }

    template<uint8_t CH>
    static inline void abort()
    {
        disable_interrupt<CH>();                                // disable dma channel interrupts
#if defined(HAVE_PERIPHERAL_DMAMUX)
        dmamux_traits<NO, CH>::CCR() &= ~MUX::C0CR_SOIE;        // disable synchronization overrun interrupt
#endif // HAVE_PERIPHERAL_DMAMUX
        disable<CH>();                                          // disable dma channel
        clear_interrupt_flags<CH>();                            // clear all interrupt flags
#if defined(HAVE_PERIPHERAL_DMAMUX)
        DMAMUX().CFR &= ~(1 << (CH-1));                         // clear synchronization overrun flag
#endif // HAVE_PERIPHERAL_DMAMUX
    }
};
*/
