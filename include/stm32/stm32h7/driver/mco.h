#pragma once

enum mco_sel_t
    { mco_csi
    , mco_hse
    , mco_hsi
    , mco_hsi48
    , mco_lse
    , mco_lsi
    , mco_pll1
    , mco_pll2
    , mco_sys
    };

template<pin_t, mco_sel_t> struct mco_sel {};

template<> struct mco_sel<PA8, mco_hsi> { static const int value = 0x0; };
template<> struct mco_sel<PA8, mco_lse> { static const int value = 0x1; };
template<> struct mco_sel<PA8, mco_hse> { static const int value = 0x2; };
template<> struct mco_sel<PA8, mco_pll1> { static const int value = 0x3; };
template<> struct mco_sel<PA8, mco_hsi48> { static const int value = 0x4; };

template<> struct mco_sel<PC9, mco_sys> { static const int value = 0x0; };
template<> struct mco_sel<PC9, mco_pll2> { static const int value = 0x1; };
template<> struct mco_sel<PC9, mco_hse> { static const int value = 0x2; };
template<> struct mco_sel<PC9, mco_pll1> { static const int value = 0x3; };
template<> struct mco_sel<PC9, mco_csi> { static const int value = 0x4; };
template<> struct mco_sel<PC9, mco_lsi> { static const int value = 0x5; };

template<pin_t>
struct mco_driver {};

template<>
struct mco_driver<PA8>
{
    template<mco_sel_t SEL, int PRE = 1>
    static void setup()
    {
        using _ = rcc_t::T;
        _& RCC = rcc_t::V;

        static_assert(PRE <= 15, "illegal prescale value");

        RCC.CFGR |= _::CFGR_MCO1SEL::W(mco_sel<PA8, SEL>::value)
                 |  _::CFGR_MCO1PRE::W(PRE);
                 ;
        alternate_t<PA8, RCC_MCO_1>::template setup<push_pull, high_speed>();
    }
};

template<>
struct mco_driver<PC9>
{
    template<mco_sel_t SEL, int PRE = 1>
    static void setup()
    {
        using _ = rcc_t::T;
        _& RCC = rcc_t::V;

        static_assert(PRE <= 15, "illegal prescale value");

        RCC.CFGR |= _::CFGR_MCO2SEL::W(mco_sel<PC9, SEL>::value)
                 |  _::CFGR_MCO2PRE::W(PRE);
                 ;
        alternate_t<PC9, RCC_MCO_2>::template setup<push_pull, high_speed>();
    }
};

