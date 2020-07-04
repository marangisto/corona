#include "corona.h"
#include "gpio.h"
#include <device/rcc.h>
#include <driver/mco.h>

template<pin_t PIN>
struct mco_t
{
    template<mco_sel_t SEL, int PRE = 2>
    static void setup()
    {
        mco_driver<PIN>::template setup<SEL, PRE>();
    }
};

