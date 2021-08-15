#include "../board.h"
#include <i2s.h>

using i2s = i2s_t<2, PB13, PB15, PB12>;
using led = output_t<LED>;

int main()
{
    i2s::setup<philips_i2s, low_level, format_32_32, 27>();
    led::setup();

    for (int16_t i = 0;; i += 256)
    {
        i2s::write32(i);
        i2s::write32(0xffff - i);
        led::toggle();
    }
}

