#include <cstring>
#include <textio.h>
#include <board.h>
#include <timer.h>
#include <dma.h>
#include <adc.h>

using serial = board::serial;
using led = board::led1;
using probe = board::probe;

using adc = adc_t<1>;
using adc_dma = dma_t<1>;
using adc_tim = tim_t<6>;

static const uint8_t adc_dma_ch = 1;
static const uint8_t adc_buf_size = 4;
static uint16_t adc_buf[adc_buf_size];
static const uint32_t adc_sample_freq = 96000;

template<> void handler<board::serial_interrupt>()
{
    serial::isr();
}

template<> void handler<interrupt::TIM6_DACUNDER>()
{
    probe::set();
    adc_tim::clear_update_interrupt_flag();
}

template<> void handler<interrupt::ADC1_2>()
{
    probe::clear();
    adc::clear_interrupt_flags(adc::EOS);
}

int main()
{
    led::setup();
    probe::setup();
    serial::setup<230400>();
    interrupt::set<board::serial_interrupt>();
    interrupt::enable();

    printf<serial>("ADC with DMA demo\n");

    adc_tim::setup(1, (sys_clock::freq() >> 1) / adc_sample_freq - 1);
    adc_tim::master_mode<adc_tim::mm_update>();
    adc_tim::enable_update_interrupt();     // trigger probe
    interrupt::set<interrupt::TIM6_DACUNDER>();

    adc_dma::setup();
    adc::setup();
    adc::sequence<board::A0, board::A1, board::A2, board::A3>();
    adc::dma<adc_dma, adc_dma_ch>(adc_buf, adc_buf_size);
    //adc::trigger<0x5>();          // FIXME: use constant for TIM6_TRGO
    adc::trigger<0xd>();          // FIXME: use constant for TIM6_TRGO
    adc::enable();

    adc::enable_interrupt(adc::EOS);
    interrupt::set<interrupt::ADC1_2>();


    adc::start_conversion();

    for (;;)
    {
        printf<serial>("%4d %4d %4d %4d\n", adc_buf[0], adc_buf[1], adc_buf[2], adc_buf[3]);
        led::toggle();
        sys_tick::delay_ms(100);
    }
}

