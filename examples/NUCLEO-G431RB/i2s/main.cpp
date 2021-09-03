#include "../board.h"
#include <i2s.h>
#include <dma.h>
#include <cordic.h>
#include <fixed.h>

using namespace fixed;

using led = output_t<LED>;
using i2s = i2s_t<2, PB13, PB15, PB12>;
using dma = dma_t<1>;
static const unsigned dmach = 1;
static const uint16_t half_samples = 128;               // half number of samples
static const uint16_t n_samples = half_samples << 1;    // number of samples
static const unsigned buf_size = n_samples << 1;        // we have two channels
static int32_t buf[buf_size];                           // sample buffer

static inline uint32_t swap(uint32_t x)
{
    return (x >> 16) | (x << 16);
}

void process(int32_t *p, uint16_t n)
{
    static q31_t t1 = q31_t(0.0), t2 = t1, dt1 = q31_t(0.01), dt2 = q31_t(0.03);

    for (uint32_t i = 0; i < n; ++i)
    {
        q31_t y1 = q31_t(cordic::compute(t1.q));
        q31_t y2 = q31_t(cordic::compute(t2.q));

        *p++ = swap(y2.q);
        *p++ = swap(y1.q);
        t1 = t1 + dt1;
        t2 = t2 + dt2;
    }
}

template<> void handler<interrupt::DMA1_CH1>()
{
    auto sts = dma::interrupt_status<dmach>();

    dma::clear_interrupt_flags<dmach>();

    if (sts & (dma_half_transfer | dma_transfer_complete))
    {
        int32_t *p = buf + (sts & dma_transfer_complete ? n_samples : 0);
        process(p, half_samples);
    }
}

int main()
{
    led::setup();
    cordic::setup<cordic::sine, 4>();

    dma::setup();
    i2s::setup<philips_i2s, low_level, format_32_32, 27>();
    i2s::enable_dma<dma, dmach>(reinterpret_cast<uint16_t*>(buf), buf_size << 1);
    dma::enable_interrupt<dmach, true>();
    interrupt::set<interrupt::DMA1_CH1>();

    for (;;) ;
}

