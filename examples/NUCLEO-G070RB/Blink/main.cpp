#include <board.h>
#include <gpio.h>

using led = output_t<board::LED1>;

int main()
{
    led::setup();

    for (;;)
    {
        led::toggle();
        sys_tick::delay_ms(1000);
    }
}

