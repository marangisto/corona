#include <gpio.h>

using ld4 = output_t<PA5>;

int main()
{
    ld4::setup();

    for (;;)
    {
        ld4::toggle();
        sys_tick::delay_ms(1000);
    }
}

