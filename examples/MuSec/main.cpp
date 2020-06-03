#include <board.h>

using probe = board::probe;

void loop();

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

