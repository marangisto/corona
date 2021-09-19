#include "../board.h"
#include <i2s.h>
#include <dma.h>
#include <fixed.h>
#include <cstring>
#include <textio.h>
#include <usart.h>
#include <adc.h>

using namespace fixed;

using led = output_t<LED>;
using probe = output_t<PROBE>;
using adc = adc_t<1>;
using a0 = analog_t<A0>;
using a1 = analog_t<A1>;
using serial = usart_t<SERIAL_USART, SERIAL_TX, SERIAL_RX>;
using in_i2s = i2s_receiver_t<2, PB13, PB15, PB12, PC9>;
using out_i2s = i2s_transmitter_t<3, PC10, PC12, PA4>;
using dma = dma_t<1>;

static const unsigned in_dma_ch = 1;
static const unsigned out_dma_ch = 2;
static const uint16_t half_samples = 64;                // half number of samples
static const uint16_t n_samples = half_samples << 1;    // number of samples
static const unsigned buf_size = n_samples << 1;        // we have two channels
static int32_t in_buf[buf_size], out_buf[buf_size];     // i/o sample buffers
static volatile bool target_upper_half = false;         // where to write output
static volatile q31_t lVolume(.0), rVolume(.0);         // volume controls

static inline uint32_t swap(uint32_t x)
{
    return (x >> 16) | (x << 16);
}

template<> void handler<SERIAL_ISR>()
{
    serial::isr();
}

template<> void handler<interrupt::DMA1_CH1>()
{
    probe::set();
 
    auto sts = dma::interrupt_status<in_dma_ch>();
    dma::clear_interrupt_flags<in_dma_ch>();

    if (sts & (dma_half_transfer | dma_transfer_complete))
    {
        int32_t *src = in_buf + (sts & dma_transfer_complete ? n_samples : 0);
        int32_t *dst = out_buf + (target_upper_half ? n_samples : 0);

        for (uint16_t i = 0; i < half_samples; ++i)
        {
            q31_t l(static_cast<int32_t>(swap(*src++)));
            q31_t r(static_cast<int32_t>(swap(*src++)));

            *dst++ = swap((l * lVolume).q);
            *dst++ = swap((r * rVolume).q);
        }
    }

    probe::clear();
}

template<> void handler<interrupt::DMA1_CH2>()
{
    auto sts = dma::interrupt_status<out_dma_ch>();
    dma::clear_interrupt_flags<out_dma_ch>();

    if (sts & (dma_half_transfer | dma_transfer_complete))
        target_upper_half = sts & dma_transfer_complete;
}

int main()
{
    led::setup();
    probe::setup();

    a0::setup();
    a1::setup();
    adc::setup();
    adc::enable();

    serial::setup<230400>();
    interrupt::set<SERIAL_ISR>();
    interrupt::enable();

    printf<serial>("Welcome to I2S!\n");
    printf<serial>("sys-clock = %d\n", sys_clock::freq());

    dma::setup();

    in_i2s::setup<philips_i2s, low_level, format_32_32, 4>();
    in_i2s::enable_dma<dma, in_dma_ch>(reinterpret_cast<uint16_t*>(in_buf), buf_size << 1);
    dma::enable_interrupt<in_dma_ch, true>();
    interrupt::set<interrupt::DMA1_CH1>();

    out_i2s::setup<philips_i2s, low_level, format_32_32, 4>();
    out_i2s::enable_dma<dma, out_dma_ch>(reinterpret_cast<uint16_t*>(out_buf), buf_size << 1);
    dma::enable_interrupt<out_dma_ch, true>();
    interrupt::set<interrupt::DMA1_CH2>();

    for (;;)
    {
        float x0 = (1. / 4096.) * adc::read<a0>();
        float x1 = (1. / 4096.) * adc::read<a1>();

        lVolume = q31_t(x0);
        rVolume = q31_t(x1);

        printf<serial>("%0.2f %40.2f\n", x0, x1);
        led::toggle();
        sys_tick::delay_ms(500);
    }
}

