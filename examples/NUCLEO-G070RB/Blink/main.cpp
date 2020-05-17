#include <gpio.h>

typedef output_t<PA5> ld4;

int main()
{
    ld4::setup();

    for (;;)
    {
        ld4::toggle();
        sys_tick::delay_ms(1000);
    }
}

