#include <board.h>
#include <mco.h>

using led = board::led1;
using probe = board::probe;
using mco1 = mco_t<PA8>;
using mco2 = mco_t<PC9>;

int main()
{
    led::setup();
    probe::setup<push_pull, high_speed>();
    mco1::setup<mco_hsi, 5>();
    mco2::setup<mco_sys, 5>();

    for (;;)
    {
        led::toggle();
        sys_tick::delay_ms(1000);
    
        probe::toggle();
        probe::toggle();
    }
}

