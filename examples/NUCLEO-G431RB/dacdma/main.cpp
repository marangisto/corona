#include "../board.h"
#include <dac.h>
#include <dma.h>
#include <timer.h>
#include <fixed.h>

using namespace fixed;

using tim6 = tim_t<6>;
using dac = dac_t<1>;
using dma = dma_t<1>;

static constexpr uint32_t sample_freq = 96000;
static constexpr uint8_t dac_dma_ch = 1;
static constexpr uint16_t buffer_size = 256; // N.B. even!
static constexpr uint16_t half_buffer_size = buffer_size >> 1;
static uint16_t buffer[buffer_size];

using led = output_t<LED>;
using probe = output_t<PROBE>;

struct phase_accumulator_t
{
    void set_freq(float f)
    {
        m_dphi = q31_t(2. * f / sample_freq);
    }

    inline q31_t sample()
    {
        q31_t s = m_phi;
        m_phi = m_phi + m_dphi;
        return s;
    }

    q31_t           m_phi;
    volatile q31_t  m_dphi;
};

static phase_accumulator_t pacc0;

static void generate(uint16_t *buf, uint16_t len)
{
    for (uint16_t i = 0; i < len; ++i)
        buf[i] = 2048 + (pacc0.sample().q >> 20);
}

template<> void handler<interrupt::DMA1_CH1>()
{
    uint32_t sts = dma::interrupt_status<dac_dma_ch>();

    dma::clear_interrupt_flags<dac_dma_ch>();

    probe::set();

    if (sts & (dma_half_transfer | dma_transfer_complete))
        generate
            ( buffer
            + (sts & dma_transfer_complete ? half_buffer_size : 0)
            , half_buffer_size
            );

    probe::clear();
}

template<> void handler<interrupt::TIM6_DACUNDER>()
{
    probe::set();
    tim6::clear_update_interrupt_flag();
    probe::clear();
}

int main()
{
    probe::setup();
    led::setup();

    interrupt::enable();

    dma::setup();
    interrupt::set<interrupt::DMA1_CH1>();

    dac::setup();
    //dac::enable_trigger<1, 5>();    // FIXME: use constant for TIM6_TRGO
    dac::enable_trigger<1, 7>();    // FIXME: use constant for TIM6_TRGO
    dac::enable_dma<1, dma, dac_dma_ch, uint16_t>(buffer, buffer_size);
    dma::enable_interrupt<dac_dma_ch, true>();

    tim6::setup(0, sys_clock::freq() / sample_freq - 1);
    tim6::master_mode<tim6::mm_update>();
    //tim6::enable_update_interrupt();    // enable sampling frequency probe
    //interrupt::set<interrupt::TIM6_DACUNDER>();

    pacc0.set_freq(440);

    for (;;)
    {
        led::toggle();
        sys_tick::delay_ms(500);
    }
}

