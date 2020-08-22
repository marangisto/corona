#include <dac.h>

using dac = dac_t<1>;

int main()
{
    dac::setup();
    dac::enable<1>();
    dac::enable<2>();

    static uint32_t i = 0;

    for (;;)
    {
        uint16_t x = i++ & 0xfff;
    
        dac::write<1>(x);
        dac::write<2>(4095 - x);
    }
}

