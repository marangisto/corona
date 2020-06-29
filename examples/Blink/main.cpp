#include <board.h>

using led = board::led1;

int main()
{
    led::setup();

    for (;;)
    {
        led::toggle();
        sys_tick::delay_ms(1000);
    }
}

