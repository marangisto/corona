#include "../board.h"

static const pin_t SX = PB1;
static const pin_t SY = PB2;
static const pin_t SZ = PB3;

static const pin_t CX = PA6;
static const pin_t CY = PA7;
static const pin_t CZ = PA8;

using led = output_t<LED>;
using out = outputs_t<SX, SY, SZ>;
using in = inputs_t<CX, CY, CZ>;

volatile uint8_t i = 0;

template<> void handler<interrupt::EXTI9_5>()
{
    uint32_t bits = in::interrupt_pending();

    in::clear_interrupt(bits);
    if (in::read() != (i & 0x7))
        led::set(); // on for error!
}

int main()
{
    led::setup();
    out::setup();
    in::setup();

    in::enable_interrupt();
    interrupt::set<interrupt::EXTI9_5>();
    interrupt::enable();

    for (;; ++i)
    {
        out::write(i);
        sys_tick::delay_us(1);
    }
}

