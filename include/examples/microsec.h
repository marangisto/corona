#include <gpio.h>

using probe = output_t<PROBE>;

int main()
{
    probe::setup();

    for (;;)
    {
        probe::set();
        sys_tick::delay_us(5);
        probe::clear();
        sys_tick::delay_us(20);
    }
}

