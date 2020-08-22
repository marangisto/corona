#include <dac.h>
#include <dma.h>
#include <timer.h>

using tim6 = tim_t<6>;
using dac = dac_t<1>;
using dma = dma_t<1>;

static constexpr uint32_t sample_freq = 96000;
static constexpr uint8_t dac_dma_ch = 1;
static constexpr uint16_t buffer_size = 256; // N.B. even!
static constexpr uint16_t half_buffer_size = buffer_size >> 1;
static uint16_t buffer[buffer_size];

using led = output_t<PA5>;
using probe = output_t<PA10>;

template<> void handler<interrupt::TIM6_DAC_LPTIM1>()
{
    //probe::set();
    tim6::clear_update_interrupt_flag();
    //probe::clear();
}

template<> void handler<interrupt::DMA_CHANNEL1>()
{
    uint32_t sts = dma::interrupt_status<dac_dma_ch>();

    dma::clear_interrupt_flags<dac_dma_ch>();

    probe::set();

    if (sts & (dma_half_transfer | dma_transfer_complete))
    {
        uint16_t *q = buffer + (sts & dma_transfer_complete ? half_buffer_size : 0);

        for (uint16_t i = 0; i < half_buffer_size; ++i)
            *q++ = i << 5;
    } 

    probe::clear();
}

int main()
{
    probe::setup();
    led::setup();

    interrupt::enable();

    dma::setup();
    interrupt::set<interrupt::DMA_CHANNEL1>();
    interrupt::set<interrupt::DMA_CHANNEL2_3>();

    dac::setup();
    dac::enable_trigger<1, 5>();    // FIXME: use constant for TIM6_TRGO
    dac::enable_dma<1, dma, dac_dma_ch, uint16_t>(buffer, buffer_size);
    dma::enable_interrupt<dac_dma_ch, true>();

    tim6::setup(0, sys_clock::freq() / sample_freq - 1);
    tim6::master_mode<tim6::mm_update>();
    //tim6::enable_update_interrupt();    // enable sampling frequency probe
    //interrupt::set<interrupt::TIM6_DAC_LPTIM1>();

    for (;;)
    {
        led::toggle();
        sys_tick::delay_ms(500);
    }
}

