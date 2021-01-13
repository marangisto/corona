#include "../board.h"
#include <textio.h>
#include <hardware/tm1637.h>

using led = output_t<LED>;
using probe = output_t<PROBE>;
using tm1637 = tm1637_t<3, 2, 5, PB4, PB6>;

int main()
{
    led::setup();
    probe::setup();
    tm1637::setup();

    for (uint16_t i = 0;; ++i)
    {
        char str[8];

        sprintf(str, "%7.2f", static_cast<float>(i) / 13);
        led::toggle();
        probe::toggle();
        probe::set();
        tm1637::write_string(str);
        probe::clear();
        sys_tick::delay_ms(20);
    }
}

