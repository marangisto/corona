#include "../board.h"
#include <textio.h>
#include <hardware/tm1637.h>
#include <math.h>

using led = output_t<LED>;
using probe = output_t<PROBE>;

using disp0 = tm1637_t<4, 1, 1, PC6, PC8>;
using disp1 = tm1637_t<4, 1, 2, PA11, PA12>;
using disp2 = tm1637_t<4, 1, 3, PB11, PB12>;

template<typename DISPLAY>
void write(float x)
{
    char str[8];

    sprintf(str, "%7.4f", x);
    DISPLAY::write_string(str);
}

int main()
{
    led::setup();
    probe::setup();
    disp0::setup<10000>();
    disp1::setup<10000>();
    disp2::setup<10000>();

    float x = -M_PI, dx = M_PI / 100.0;

    for (uint16_t i = 0;; ++i)
    {
        char str[8];

        sprintf(str, "%7.2f", static_cast<float>(i) / 13);
        led::toggle();
        probe::toggle();
        probe::set();
        write<disp0>(x);
        write<disp1>(cos(x));
        write<disp2>(sin(x));
        probe::clear();
        sys_tick::delay_ms(100);
        x += dx;
        if (x > M_PI)
            x = -M_PI;
    }
}

