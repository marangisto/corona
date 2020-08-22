#include <cstring>
#include <textio.h>
#include <board.h>
#include <adc.h>

using serial = board::serial;
using led = board::led1;

using adc = adc_t<1>;

template<> void handler<board::serial_interrupt>()
{
    serial::isr();
}

int main()
{
    led::setup();
    serial::setup<230400>();
    interrupt::set<board::serial_interrupt>();
    interrupt::enable();

    printf<serial>("ADC demo\n");

    adc::setup();
    adc::enable();

    for (;;)
    {
        printf<serial>("%4d %4d\n", adc::read<4>(), adc::read<9>());; 
        sys_tick::delay_ms(100);
        led::toggle();
    }
}

