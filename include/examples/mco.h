#include <mco.h>

using led = output_t<LED>;
using mco1 = mco_t<PA8>;
using mco2 = mco_t<PC9>;

int main()
{
    led::setup();
    mco1::setup<mco_hsi, 5>();
    //mco1::setup<mco_sysclk, 1>();
    mco2::setup<mco_sysclk, 5>();

    for (;;)
    {
        led::toggle();
        sys_tick::delay_ms(1000);
    }
}

