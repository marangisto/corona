#pragma once

#include "gpio.h"
#include "dma.h"
#include <device/dac.h>
#include <driver/dac.h>

template<uint8_t INST>
struct dac_pins {};

template<>
struct dac_pins<1>
{
    static constexpr pin_t ch1_pin = PA4;
    static constexpr pin_t ch2_pin = PA5;
};

template<>
struct dac_pins<2>
{
    static constexpr pin_t ch1_pin = PA7;  // FIXME: check this!
};

template<uint8_t INST, uint8_t CH>
struct dac_channel_traits {};

template<uint8_t INST>
struct dac_channel_traits<INST, 1>
{
    using traits = dac_traits<INST>;
    using dac = typename traits::dac;
    using _ = typename dac::T;

    static constexpr pin_t pin = dac_traits<INST>::ch1_pin;
    static constexpr uint32_t CR_EN = _::CR_EN1;
    static constexpr uint32_t CR_TEN = _::CR_TEN1;
    static constexpr uint32_t CR_DMAEN = _::CR_DMAEN1;
    static constexpr uint32_t CR_DMAUDRIE = _::CR_DMAUDRIE1;
    static constexpr uint32_t SWTRGR_SWTRIG = _::SWTRGR_SWTRIG1;
    template<uint32_t X> static constexpr uint32_t CR_TSEL = _::CR_TSEL1::W(X);
    template<uint32_t X> static constexpr uint32_t CR_WAVE = _::CR_WAVE1::W(X);
    template<uint32_t X> static constexpr uint32_t STMODR_STINCTRIGSEL = _::STMODR_STINCTRIGSEL1::W(X);
    template<uint32_t X> static constexpr uint32_t STMODR_STRSTTRIGSEL = _::STMODR_STRSTTRIGSEL1::W(X);
    static inline volatile uint32_t& STR() { return dac::V.STR1; }
    static inline volatile uint32_t& DHR12R() { return dac::V.DHR12R1; }
    static inline void write(uint16_t x) { dac_traits<INST>::dac::V.DHR12R1 = x; }
};

template<uint8_t INST>
struct dac_channel_traits<INST, 2>
{
    using traits = dac_traits<INST>;
    using dac = typename traits::dac;
    using _ = typename dac::T;

    static constexpr pin_t pin = dac_traits<INST>::ch2_pin;
    static constexpr uint32_t CR_EN = _::CR_EN2;
    static constexpr uint32_t CR_TEN = _::CR_TEN2;
    static constexpr uint32_t CR_DMAEN = _::CR_DMAEN2;
    static constexpr uint32_t CR_DMAUDRIE = _::CR_DMAUDRIE2;
    static constexpr uint32_t SWTRGR_SWTRIG = _::SWTRGR_SWTRIG2;
    template<uint32_t X> static constexpr uint32_t CR_TSEL = _::CR_TSEL2::W(X);
    template<uint32_t X> static constexpr uint32_t CR_WAVE = _::CR_WAVE2::W(X);
    template<uint32_t X> static constexpr uint32_t STMODR_STINCTRIGSEL = _::STMODR_STINCTRIGSEL2::W(X);
    template<uint32_t X> static constexpr uint32_t STMODR_STRSTTRIGSEL = _::STMODR_STRSTTRIGSEL2::W(X);
    static inline volatile uint32_t& STR() { return dac::V.STR2; }
    static inline volatile uint32_t& DHR12R() { return dac::V.DHR12R2; }
    static inline void write(uint16_t x) { dac_traits<INST>::dac::V.DHR12R2 = x; }
};

template<uint8_t INST>
struct dac_t
{
    static void setup()
    {
        dac_traits<INST>::template enable<rcc_t>(); // enable clock

        dac::V.CR = _::CR_RESET_VALUE;              // reset control register
        dac::V.MCR = _::MCR_RESET_VALUE             // reset mode register
                   | dac_driver<INST>::HF_MODE      // high-frequency mode
                   ;
    }

    template<uint8_t CH, uint8_t RST, uint8_t INC>
    static inline void setup()
    {
        dac::V.CR |= dac_channel_traits<INST, CH>::CR_TEN                           // enable trigger
                  |  dac_channel_traits<INST, CH>::CR_TSEL::W(RST)                  // trigger selection
                  ;
        dac::V.STMODR |= dac_channel_traits<INST, CH>::STMODR_STRSTTRIGSEL::W(RST)  // reset trigger selection
                      |  dac_channel_traits<INST, CH>::STMODR_STINCTRIGSEL::W(INC)  // increment trigger selection
                      ;
    }

    template<uint8_t CH>
    static inline void enable()
    {
        dac::V.CR |= dac_channel_traits<INST, CH>::CR_EN;   // enable dac channel
        sys_tick::delay_us(8);                              // wait for voltage to settle
    }

    template<uint8_t CH>
    static inline void disable()
    {
        dac::V.CR &= ~dac_channel_traits<INST, CH>::CR_EN;  // disable dac channel
    }

    template<uint8_t CH, typename DMA, uint8_t DMACH, typename T>
    static inline void enable_dma(const T *source, uint16_t nelem)
    {
        volatile uint32_t& reg = dac_channel_traits<INST, CH>::DHR12R();

        dac::V.CR |= dac_channel_traits<INST, CH>::CR_DMAEN;        // enable dac channel dma
        dac::V.CR |= dac_channel_traits<INST, CH>::CR_DMAUDRIE;     // enable dac dma underrun interrupt
        DMA::template disable<DMACH>();                             // disable dma channel
        DMA::template mem_to_periph<DMACH>(source, nelem, &reg);    // configure dma from memory
        DMA::template enable<DMACH>();                              // enable dma channel
        DMA::template set_request_id<DMACH, dac_driver<INST>::DMAREQ_ID>();
        enable<CH>();                                               // enable dac channel
    }

    template<uint8_t CH, typename DMA, uint8_t DMACH>
    static inline void disable_dma()
    {
        dac::V.CR &= ~dac_channel_traits<INST, CH>::CR_DMAEN;       // disable dac channel dma
        disable<CH>();                                              // disable dac channel
        sys_tick::delay_us(500);                                    // ensure miniumum wait before next enable
        DMA::template abort<DMACH>();                               // stop dma on relevant dma channel
        dac::V.CR &= ~dac_channel_traits<INST, CH>::CR_DMAUDRIE;    // disable dac channel underrun interrupt
    }

    template<uint8_t CH, uint32_t RST, uint32_t INC>
    static inline void enable_wave()
    {
        dac_channel_traits<INST, CH>::STR() |= _::STR1_STRSTDATA1::W(RST)   // reset value
                                          |  _::STR1_STINCDATA1::W(INC)     // increment value
                                          |  _::STR1_STDIR1                 // direction increment
                                          ;
        dac::V.CR |= dac_channel_traits<INST, CH>::CR_WAVE::W(0x3);         // sawtooth wave enable
    }

    template<uint8_t CH, uint8_t SEL = 0>
    static inline void enable_trigger()
    {
        dac::V.CR |= dac_channel_traits<INST, CH>::CR_TEN                   // enable trigger
                     |  dac_channel_traits<INST, CH>::template CR_TSEL<SEL>
                     ;
    }

    template<uint8_t CH>
    static inline void write(uint16_t x)
    {
        dac_channel_traits<INST, CH>::write(x);
    }

    template<uint8_t CH>
    static inline void trigger()
    {
        dac::V.SWTRGR |= dac_channel_traits<INST, CH>::SWTRGR_SWTRIG;
    }

    using traits = dac_traits<INST>;
    using dac = typename traits::dac;
    using _ = typename dac::T;
};

