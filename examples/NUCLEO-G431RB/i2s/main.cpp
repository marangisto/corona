#include "../board.h"
#include <i2s.h>
#include <cordic.h>
#include <fixed.h>

using namespace fixed;

using i2s = i2s_t<2, PB13, PB15, PB12>;
using led = output_t<LED>;

static inline uint32_t swap(uint32_t x)
{
    return (x >> 16) | (x << 16);
}

int main()
{
    i2s::setup<philips_i2s, low_level, format_32_32, 27>();
    led::setup();
    cordic::setup<cordic::sine, 4>();

    q31_t t1 = q31_t(0.0), t2 = t1, dt1 = q31_t(0.01), dt2 = q31_t(0.03);

    for (;;)
    {
        q31_t y1 = q31_t(cordic::compute(t1.q));
        q31_t y2 = q31_t(cordic::compute(t2.q));

        i2s::write32(swap(y2.q));
        i2s::write32(swap(y1.q));
        t1 = t1 + dt1;
        t2 = t2 + dt2;
    }
}

