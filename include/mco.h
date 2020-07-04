#include "corona.h"
#include "gpio.h"
#include <device/rcc.h>

enum mco_sel_t
    { mco_hsi = 0x0
    , mco_lse = 0x1
    , mco_hse = 0x2
    , mco_pll = 0x3
    };

template<pin_t PIN>
struct mco_t
{
    template<mco_sel_t SEL, int PRESCALE = 1>
    static void setup()
    {
        using _ = rcc_t::T;
        rcc_t::T& RCC = rcc_t::V;
        constexpr int PS = prescale(PRESCALE);

        static_assert(PS >= 0, "illegal mco prescale value");
        
        // FIXME: use mask to clear before setting
        RCC.CFGR |= _::CFGR_MCO1::W(SEL)
                 |  _::CFGR_MCO1PRE::W(PS)
                 ;
        alternate_t<PIN, RCC_MCO_1>::template setup<high_speed>();
    }

    static constexpr int prescale(int n)
    {
        switch (n)
        {
            case 1: return 0x0;
            case 2: return 0x4;
            case 3: return 0x5;
            case 4: return 0x6;
            case 5: return 0x7;
            default: return -1;
        }
    }
};

