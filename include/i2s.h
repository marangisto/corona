#pragma once

#include "gpio.h"
#include "dma.h"
#include "spi.h"

enum i2s_standard_t
    { philips_i2s       = 0x0
    , left_justified    = 0x1
    , right_justified   = 0x2
    , pcm_standard      = 0x3
    };

enum i2s_clock_polarity_t { low_level, high_level };

enum i2s_format_t
    { format_16_16 = 0x0
    , format_16_32 = 0x4
    , format_24_32 = 0x1
    , format_32_32 = 0x2
    };

template<int INST> struct i2s_traits {};

/*
#if !defined(STM32G431)
template<> struct i2s_traits<1>
{
    static const signal_t ck = I2S1_CK;
    static const signal_t mck = I2S1_MCK;
    static const signal_t sd = I2S1_SD;
    static const signal_t ws = I2S1_WS;
    static const request::request_t tx_request = request::SPI1_TX;
};
#endif
*/

template<> struct i2s_traits<2>
{
    static const signal_t ck = I2S2_CK;
    static const signal_t mck = I2S2_MCK;
    static const signal_t sd = I2S2_SD;
    static const signal_t ws = I2S2_WS;
    static const request::request_t tx_request = request::SPI2_TX;
};

template<> struct i2s_traits<3>
{
    static const signal_t ck = I2S3_CK;
    static const signal_t mck = I2S3_MCK;
    static const signal_t sd = I2S3_SD;
    static const signal_t ws = I2S3_WS;
    static const request::request_t tx_request = request::SPI3_TX;
};

template<int INST, pin_t CK, pin_t SD, pin_t WS> struct i2s_t
{
private:
    using traits = spi_traits<INST>;
    using i2s = typename traits::spi;
    using _ = typename i2s::T;

public:
    template
        < i2s_standard_t        standard
        , i2s_clock_polarity_t  polarity
        , i2s_format_t          format
        , uint8_t               divider
        , output_speed_t        speed = high_speed
        >
    static inline void setup()
    {
        typename i2s::T& I2S = i2s::V;

        alternate_t<SD, i2s_traits<INST>::sd>::template setup<speed>();
        alternate_t<WS, i2s_traits<INST>::ws>::template setup<speed>();
        alternate_t<CK, i2s_traits<INST>::ck>::template setup<speed>();

        traits::template enable<rcc_t>();       // enable clock

        I2S.CR1 = _::CR1_RESET_VALUE;                   // reset cr1
        I2S.CR2 = _::CR2_RESET_VALUE;                   // reset cr2
        I2S.I2SCFGR = _::I2SCFGR_RESET_VALUE            // reset config
                      | _::I2SCFGR_I2SMOD               // enable i2s mode
                      | _::I2SCFGR_I2SCFG::W(0x2)       // master transmit
                      | _::I2SCFGR_I2SSTD::W(standard)  // standard selection
                      | (polarity == high_level ? _::I2SCFGR_CKPOL : 0)
                      | _::I2SCFGR_DATLEN::W(format & 0x3)  // data length
                      | ((format & 0x4) ? _::I2SCFGR_CHLEN : 0)
                      ;

        static_assert(divider > 3, "I2S clock division must be > 3");

        I2S.I2SPR = _::I2SPR_I2SDIV::W((divider >> 1))      // linear scale
                    | ((divider & 0x1) ? _::I2SPR_ODD : 0)  // odd prescaler
                    ; // FIXME: master clock output enable option

        I2S.I2SCFGR |= _::I2SCFGR_I2SE;     // enable i2s peripheral

        // note dma and interrupt enable flags are in CR2
    }

    template<typename DMA, uint8_t DMACH, typename T>
    static inline void enable_dma(const T *source, uint16_t nelem)
    {
        typename i2s::T& I2S = i2s::V;

        I2S.CR2 |= _::CR2_TXDMAEN;          // enable dma transmission

        DMA::template disable<DMACH>();     // disable dma channel
        DMA::template mem_to_periph<DMACH>(source, nelem, &I2S.DR);
        DMA::template enable<DMACH>();      // enable dma channel
        DMA::template set_request_id<DMACH, i2s_traits<INST>::tx_request>();
    }

    __attribute__((always_inline))
    static inline void write16(uint16_t x)
    {
        while (!(i2s::V.SR & _::SR_TXE));   // wait until tx buffer is empty
        i2s::V.DR = x;
    }

    __attribute__((always_inline))
    static inline void write24(uint32_t x)
    {
        while (!(i2s::V.SR & _::SR_TXE));   // wait until tx buffer is empty
        i2s::V.DR = x >> 8;
        while (!(i2s::V.SR & _::SR_TXE));   // wait until tx buffer is empty
        i2s::V.DR = (x & 0xffff) << 8;
    }

    __attribute__((always_inline))
    static inline void write32(uint32_t x)
    {
        while (!(i2s::V.SR & _::SR_TXE));   // wait until tx buffer is empty
        i2s::V.DR = x & 0xffff;
        while (!(i2s::V.SR & _::SR_TXE));   // wait until tx buffer is empty
        i2s::V.DR = x >> 16;
    }

    __attribute__((always_inline))
    static inline bool busy()
    {
        return i2s::V.SR & _::SR_BSY;
    }

    __attribute__((always_inline))
    static inline void wait_idle()
    {
        while ((i2s::V.SR & (_::SR_BSY | _::SR_TXE)) != _::SR_TXE);
    }

    enum interrupt_t
        { err_interrupt = _::CR2_ERRIE
        , rx_interrupt = _::CR2_RXNEIE
        , tx_interrupt = _::CR2_TXEIE
        };

    static inline void interrupt_enable(uint32_t flags)
    {
        static const uint32_t mask = err_interrupt
                                   | rx_interrupt
                                   | tx_interrupt
                                   ;

        i2s::V.CR2 &= ~mask;
        i2s::V.CR2 |= flags & mask;
    }
};

