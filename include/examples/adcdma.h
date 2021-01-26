#include <cstring>
#include <textio.h>
#include <usart.h>
#include <timer.h>
#include <dma.h>
#include <adc.h>

using serial = usart_t<SERIAL_USART, SERIAL_TX, SERIAL_RX>;
using led = output_t<LED>;
using probe = output_t<PROBE>;
using adc = adc_t<1>;
using dma = dma_t<1>;
using tim = tim_t<6>;
using a0 = analog_t<A0>;
using a1 = analog_t<A1>;

static const uint8_t dma_ch = 1;
static const uint8_t buf_size = 2;
static uint16_t buf[buf_size];
static const uint32_t sample_freq = 10000;

template<> void handler<SERIAL_ISR>()
{
    serial::isr();
}

template<> void handler<interrupt::TIM6_DACUNDER>()
{
    tim::clear_update_interrupt_flag();
    probe::set();
}

template<> void handler<interrupt::ADC1_2>()
{
    adc::clear_interrupt_flags(adc::EOS);
    probe::clear();
}

int main()
{
    led::setup();
    probe::setup();
    serial::setup<230400>();
    interrupt::set<SERIAL_ISR>();
    interrupt::enable();

    printf<serial>("ADC DMA demo\n");

    a0::setup();
    a1::setup();

    const auto psc = 0;
    const uint16_t arr = tim::clock() / (sample_freq * (psc + 1)) - 1;

    tim::setup(psc, arr);
    tim::master_mode<tim::mm_update>();
    tim::enable_update_interrupt();
    interrupt::set<interrupt::TIM6_DACUNDER>();

    dma::setup();
    adc::setup();
    adc::oversample<128>();
    adc::sequence<1, 2>();                  // FIXME: use traits!
    adc::dma<dma, dma_ch>(buf, buf_size);
    adc::trigger<0xd>();                    // FIXME: use traits!
    adc::enable();
    adc::enable_interrupt(adc::EOS);
    interrupt::set<interrupt::ADC1_2>();
    adc::start_conversion();

    const auto dt = 1; // ms

    for (auto t = 0;; t += dt)
    {
        uint16_t y0 = buf[0];
        uint16_t y1 = buf[1];

        printf<serial>("%4d %4d\n", y0, y1);

        if (!(t & 0xff))
            led::toggle();
    }
}

