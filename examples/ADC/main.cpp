#include <cstring>
#include <textio.h>
#include <board.h>
#include <adc.h>

using serial = board::serial;
using led = board::led1;
using probe = board::probe;
using adc = adc_t<1>;

template<> void handler<board::serial_interrupt>()
{
    serial::isr();
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

    printf<serial>("ADC demo\n");

    adc::setup();
    adc::enable();
    adc::enable_interrupt(adc::EOS);
    interrupt::set<interrupt::ADC1_2>();

    for (;;)
    {
        probe::set();
        uint16_t x0 = adc::read<board::A0>();
        uint16_t x1 = adc::read<board::A1>();

        printf<serial>("%4d %4d\n", x0, x1);
        sys_tick::delay_ms(100);
        led::toggle();
    }
}

