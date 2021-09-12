#include "../board.h"
#include <i2s.h>
#include <dma.h>
#include <cordic.h>
#include <fixed.h>

using namespace fixed;

static constexpr bool USE_CKIN = false;
static constexpr pin_t CKIN = USE_CKIN ? PC9 : NO_PIN;
static constexpr unsigned CKDIV = USE_CKIN ? 4 : 27;

using led = output_t<LED>;
using probe = output_t<PROBE>;
//using i2s = i2s_t<2, PB13, PB15, PB12, CKIN>;
using i2s = i2s_t<3, PC10, PC12, PA4, CKIN>;
using dma = dma_t<1>;
static const unsigned dmach = 1;
static const uint16_t half_samples = 256;               // half number of samples
static const uint16_t n_samples = half_samples << 1;    // number of samples
static const unsigned buf_size = n_samples << 1;        // we have two channels
static int32_t buf[buf_size];                           // sample buffer

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
    probe::set();
    auto sts = dma::interrupt_status<dmach>();
    dma::clear_interrupt_flags<dmach>();

    if (sts & (dma_half_transfer | dma_transfer_complete))
    {
        int32_t *p = buf + (sts & dma_transfer_complete ? n_samples : 0);

        for (uint16_t i = 0; i < half_samples; ++i)
        {
            *p++ = swap(drawL().q);
            *p++ = swap(drawR().q);
        }
    }

    probe::clear();
}

int main()
{
    led::setup();
    probe::setup();
    cordic::setup<cordic::sine, 4>();

    dma::setup();
    i2s::setup<philips_i2s, low_level, format_32_32, CKDIV>();
    i2s::enable_dma<dma, dmach>(reinterpret_cast<uint16_t*>(buf), buf_size << 1);
    dma::enable_interrupt<dmach, true>();
    interrupt::set<interrupt::DMA1_CH1>();

    for (;;)
    {
        led::toggle();
        sys_tick::delay_ms(500);
    }
}

