#include "../board.h"
#include <i2s.h>
#include <dma.h>
#include <cordic.h>
#include <fixed.h>

using namespace fixed;

static constexpr bool USE_CKIN = true;
static constexpr pin_t CKIN = USE_CKIN ? PC9 : NO_PIN;
static constexpr unsigned CKDIV = USE_CKIN ? 4 : 27;

using led = output_t<LED>;
using probe = output_t<PROBE>;
using in_i2s = i2s_receiver_t<2, PB13, PB15, PB12, CKIN>;
using out_i2s = i2s_transmitter_t<3, PC10, PC12, PA4>;
using dma = dma_t<1>;
static const unsigned in_dma_ch = 1;
static const unsigned out_dma_ch = 2;
static const uint16_t half_samples = 256;               // half number of samples
static const uint16_t n_samples = half_samples << 1;    // number of samples
static const unsigned buf_size = n_samples << 1;        // we have two channels
static int32_t in_buf[buf_size], out_buf[buf_size];     // i/o sample buffers

static inline uint32_t swap(uint32_t x)
{
    return (x >> 16) | (x << 16);
}

inline q31_t drawL()
{
    static q31_t t = q31_t(0.0), dt = q31_t(0.01);

    t = t + dt;
    return q31_t(cordic::compute(t.q));
}

inline q31_t drawR()
{
    static q31_t t = q31_t(0.0), dt = q31_t(0.0025);

    t = t + dt;
    return q31_t(cordic::compute(t.q));
}

template<> void handler<interrupt::DMA1_CH1>()
{
    probe::toggle();
    //probe::set();
    //auto sts = dma::interrupt_status<in_dma_ch>();
    dma::clear_interrupt_flags<in_dma_ch>();

    /*
    if (sts & (dma_half_transfer | dma_transfer_complete))
    {
        int32_t *p = out_buf + (sts & dma_transfer_complete ? n_samples : 0);

        for (uint16_t i = 0; i < half_samples; ++i)
        {
            *p++ = swap(drawL().q);
            *p++ = swap(drawR().q);
        }
    }
    */

    //probe::clear();
}

template<> void handler<interrupt::DMA1_CH2>()
{
    //probe::set();
    auto sts = dma::interrupt_status<out_dma_ch>();
    dma::clear_interrupt_flags<out_dma_ch>();

    if (sts & (dma_half_transfer | dma_transfer_complete))
    {
        int32_t *p = out_buf + (sts & dma_transfer_complete ? n_samples : 0);

        for (uint16_t i = 0; i < half_samples; ++i)
        {
            *p++ = swap(drawL().q);
            *p++ = swap(drawR().q);
        }
    }

    //probe::clear();
}

int main()
{
    led::setup();
    probe::setup();
    cordic::setup<cordic::sine, 4>();

    dma::setup();

    in_i2s::setup<philips_i2s, low_level, format_32_32, CKDIV>();
    in_i2s::enable_dma<dma, in_dma_ch>(reinterpret_cast<uint16_t*>(in_buf), buf_size << 1);
    dma::enable_interrupt<in_dma_ch, true>();
    interrupt::set<interrupt::DMA1_CH1>();

    out_i2s::setup<philips_i2s, low_level, format_32_32, CKDIV>();
    out_i2s::enable_dma<dma, out_dma_ch>(reinterpret_cast<uint16_t*>(out_buf), buf_size << 1);
    dma::enable_interrupt<out_dma_ch, true>();
    interrupt::set<interrupt::DMA1_CH2>();

    for (;;)
    {
        led::toggle();
        sys_tick::delay_ms(500);
    }
}

