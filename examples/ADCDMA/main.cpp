#include <cstring>
#include <textio.h>
#include <board.h>
#include <timer.h>
#include <dma.h>
#include <adc.h>

using serial = board::serial;
using led = board::led1;

using adc = adc_t<1>;
using adc_dma = dma_t<1>;
using adc_tim = tim_t<6>;

static const uint8_t adc_dma_ch = 1;
static const uint8_t adc_buf_size = 4;
static uint16_t adc_buf[adc_buf_size];
static const uint32_t adc_sample_freq = 2000;

template<> void handler<board::serial_interrupt>()
{
    led::toggle();
    serial::isr();
}

int main()
{
    led::setup();
    serial::setup<230400>();
    interrupt::set<board::serial_interrupt>();
    interrupt::enable();

    printf<serial>("ADC with DMA demo\n");

    adc_tim::setup(1, (sys_clock::freq() >> 1) / adc_sample_freq - 1);
    adc_tim::master_mode<adc_tim::mm_update>();
    adc_dma::setup();
    adc::setup();
    adc::sequence<0, 1, 4, 9>(); // PA0, PA1, PA4, PB1
    adc::dma<adc_dma, adc_dma_ch>(adc_buf, adc_buf_size);
    adc::trigger<0x5>();          // FIXME: use constant for TIM6_TRGO
    adc::enable();
    adc::start_conversion();

    for (;;)
    {
        printf<serial>("%4d %4d %4d %4d\n", adc_buf[0], adc_buf[1], adc_buf[2], adc_buf[3]);
    }
}

