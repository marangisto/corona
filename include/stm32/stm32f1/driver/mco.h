#pragma once

enum mco_sel_t
    { mco_off
    , mco_sysclk 
    , mco_hsi 
    , mco_hse 
    , mco_pll 
    };

template<pin_t, mco_sel_t> struct mco_sel {};

template<> struct mco_sel<PA8, mco_off> { static const int value = 0x0; };
template<> struct mco_sel<PA8, mco_sysclk> { static const int value = 0x4; };
template<> struct mco_sel<PA8, mco_hsi> { static const int value = 0x5; };
template<> struct mco_sel<PA8, mco_hse> { static const int value = 0x6; };
template<> struct mco_sel<PA8, mco_pll> { static const int value = 0x7; };

template<pin_t>
struct mco_driver {};

// Hack to cater for the fact that the MCO signal is missing
// in the source data used to generate the traits.

static constexpr signal_t MCO = static_cast<signal_t>(0);

template<gpio_conf_t CFG>
struct signal_traits<CFG, PA8, MCO>
{
    static constexpr altfun_t AF = REMAP;
};

template<>
struct mco_driver<PA8>
{
    template<mco_sel_t SEL, int PRE = 1>
    static void setup()
    {
        using _ = rcc_t::T;
        _& RCC = rcc_t::V;

        static_assert(PRE == 1, "pre-scale not available");

        RCC.CFGR |= _::CFGR_MCO::W(mco_sel<PA8, SEL>::value);
        alternate_t<PA8, MCO>::setup<push_pull, high_speed>();
    }
};

