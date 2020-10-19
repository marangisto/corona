#pragma once

enum mco_sel_t
    { mco_off
    , mco_sysclk 
    , mco_msi 
    , mco_hsi16 
    , mco_hse 
    , mco_pll 
    , mco_lsi 
    , mco_lse 
    , mco_hsi48 
    };

template<pin_t, mco_sel_t> struct mco_sel {};

template<> struct mco_sel<PA8, mco_off> { static const int value = 0x0; };
template<> struct mco_sel<PA8, mco_sysclk> { static const int value = 0x1; };
template<> struct mco_sel<PA8, mco_msi> { static const int value = 0x2; };
template<> struct mco_sel<PA8, mco_hsi16> { static const int value = 0x3; };
template<> struct mco_sel<PA8, mco_hse> { static const int value = 0x4; };
template<> struct mco_sel<PA8, mco_pll> { static const int value = 0x5; };
template<> struct mco_sel<PA8, mco_lsi> { static const int value = 0x6; };
template<> struct mco_sel<PA8, mco_lse> { static const int value = 0x7; };
template<> struct mco_sel<PA8, mco_hsi48> { static const int value = 0x8; };

template<int> struct mco_pre {};
template<> struct mco_pre<1> { static const int value = 0x0; };
template<> struct mco_pre<2> { static const int value = 0x1; };
template<> struct mco_pre<4> { static const int value = 0x2; };
template<> struct mco_pre<8> { static const int value = 0x3; };
template<> struct mco_pre<16> { static const int value = 0x4; };

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

        RCC.CFGR |= _::CFGR_MCOSEL::W(mco_sel<PA8, SEL>::value)
                 |  _::CFGR_MCOPRE::W(mco_pre<PRE>::value);
                 ;
        alternate_t<PA8, RCC_MCO>::template setup<push_pull, high_speed>();
    }
};

