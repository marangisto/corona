#include <board.h>
#include <mco.h>

using led = board::led1;
using probe = output_t<PE13>;
using mco = mco_t<PA8>;

int main()
{
    led::setup();
    probe::setup<push_pull, high_speed>();
    mco::setup<mco_pll, 5>();


    for (;;)
    {
        led::toggle();
        sys_tick::delay_ms(1000);

        probe::set();
        probe::set();
        probe::set();
        probe::set();
        probe::clear();
        probe::clear();
        probe::clear();
        probe::clear();
        /*
        probe::set(); probe::clear();
        probe::set(); probe::clear();
        probe::set(); probe::clear();
        probe::set(); probe::clear();
        */
    }
}

