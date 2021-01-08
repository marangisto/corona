#include "../board.h"
#include <dma.h>
#include <timer.h>

using tim = tim_t<3>;
using dma = dma_t<1>;
using pin = output_t<PA0>;

static constexpr uint32_t bit_rate = 100000;
static constexpr uint8_t dma_ch = 1;
static constexpr uint16_t buf_size = 8;
static uint32_t buf[buf_size] = { 0x1, 0x010000, 0, 0, 0, 0, 0, 0 };

using led = output_t<LED>;
using probe = output_t<PROBE>;

template<> void handler<interrupt::DMA1_CH1>()
{
    //uint32_t sts = dma::interrupt_status<dma_ch>();

    dma::clear_interrupt_flags<dma_ch>();

    probe::toggle();
}

int main()
{
    probe::setup();
    led::setup();
    pin ::setup();

    interrupt::enable();

    dma::setup();
    interrupt::set<interrupt::DMA1_CH1>();
    dma::template mem_to_periph<dma_ch>
        ( buf
        , buf_size
        , pin::bsrr()
        );
    dma::enable<dma_ch>();
    dma::set_request_id<dma_ch, 65>();
    dma::enable_interrupt<dma_ch, false>();

    tim::setup(0, sys_clock::freq() / bit_rate - 1);
    tim::enable_update_dma();

    for (;;)
    {
        led::toggle();
        sys_tick::delay_ms(500);
    }
}

