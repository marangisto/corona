#pragma once

enum mco_sel_t
    { mco_hse
    , mco_hsi 
    , mco_lse
    , mco_pll
    , mco_plli2s
    , mco_sys
    };

template<pin_t, mco_sel_t> struct mco_sel {};

template<> struct mco_sel<PA8, mco_hsi> { static const int value = 0x0; };
template<> struct mco_sel<PA8, mco_lse> { static const int value = 0x1; };
template<> struct mco_sel<PA8, mco_hse> { static const int value = 0x2; };
template<> struct mco_sel<PA8, mco_pll> { static const int value = 0x3; };

template<> struct mco_sel<PC9, mco_sys> { static const int value = 0x0; };
template<> struct mco_sel<PC9, mco_plli2s> { static const int value = 0x1; };
template<> struct mco_sel<PC9, mco_hse> { static const int value = 0x2; };
template<> struct mco_sel<PC9, mco_pll> { static const int value = 0x3; };

template<int> struct mco_pre {};
template<> struct mco_pre<1> { static const int value = 0x0; };
template<> struct mco_pre<2> { static const int value = 0x4; };
template<> struct mco_pre<3> { static const int value = 0x5; };
template<> struct mco_pre<4> { static const int value = 0x6; };
template<> struct mco_pre<5> { static const int value = 0x7; };

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

        RCC.CFGR |= _::CFGR_MCO1::W(mco_sel<PA8, SEL>::value)
                 |  _::CFGR_MCO1PRE::W(mco_pre<PRE>::value);
                 ;
        alternate_t<PA8, RCC_MCO_1>::template setup<high_speed>();
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

        RCC.CFGR |= _::CFGR_MCO2::W(mco_sel<PC9, SEL>::value)
                 |  _::CFGR_MCO2PRE::W(mco_pre<PRE>::value);
                 ;
        alternate_t<PC9, RCC_MCO_2>::template setup<high_speed>();
    }
};

