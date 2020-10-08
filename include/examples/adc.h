#include <cstring>
#include <textio.h>
#include <usart.h>
#include <adc.h>

using serial = usart_t<SERIAL_USART, SERIAL_TX, SERIAL_RX>;
using led = output_t<LED>;
using adc = adc_t<1>;

// FIXME: use traits to map pins to ADC channels
static constexpr int A0 = 1;
static constexpr int A1 = 2;
static constexpr int A2 = 7;    // A4 on board!
static constexpr int A3 = 6;    // A5 on board!

template<> void handler<SERIAL_ISR>()
{
    serial::isr();
}

int main()
{
    led::setup();
    serial::setup<230400>();
    interrupt::set<SERIAL_ISR>();
    interrupt::enable();

    printf<serial>("ADC demo\n");

    adc::setup();
    adc::enable();

    const auto dt = 10; // ms

    for (auto t = 0;; t += dt)
    {
        uint16_t y0 = adc::read<A0>();
        uint16_t y1 = adc::read<A1>();

        printf<serial>("%4d %4d\n", y0, y1);
        sys_tick::delay_ms(dt);
        if (!(t & 0xff))
            led::toggle();
    }
}

