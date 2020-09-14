#pragma once

#include <device/gpio.h>
#include <device/exti.h>

template<port_t PORT, int POS, typename = is_in_range<true> >
struct exticr_traits
{
    static_assert(always_false_i<POS>::value, "pin out of range");
};

/*
template<port_t PORT, int POS>
struct exticr_traits<PORT, POS, is_in_range<(0 <= POS && POS < 4)> >
{
    static void select()
    {
        constexpr uint8_t shift = (POS & 0x3) << 2;
        syscfg_t::V.EXTICR1 &= ~(0xf << shift);
        syscfg_t::V.EXTICR1 |= (PORT << shift);
    }
};

template<port_t PORT, int POS>
struct exticr_traits<PORT, POS, is_in_range<(4 <= POS && POS < 8)> >
{
    static void select()
    {
        constexpr uint8_t shift = (POS & 0x3) << 2;
        syscfg_t::V.EXTICR2 &= ~(0xf << shift);
        syscfg_t::V.EXTICR2 |= (PORT << shift);
    }
};

template<port_t PORT, int POS>
struct exticr_traits<PORT, POS, is_in_range<(8 <= POS && POS < 12)> >
{
    static void select()
    {
        constexpr uint8_t shift = (POS & 0x3) << 2;
        syscfg_t::V.EXTICR3 &= ~(0xf << shift);
        syscfg_t::V.EXTICR3 |= (PORT << shift);
    }
};

template<port_t PORT, int POS>
struct exticr_traits<PORT, POS, is_in_range<(12 <= POS && POS < 16)> >
{
    static void select()
    {
        constexpr uint8_t shift = (POS & 0x3) << 2;
        syscfg_t::V.EXTICR4 &= ~(0xf << shift);
        syscfg_t::V.EXTICR4 |= (PORT << shift);
    }
};
*/
template<port_t PORT, int POS>
struct exti_interrupt
{
    template<bool RISE, bool FALL>
    static void enable()
    {
        typename exti_t::T& EXTI = exti_t::V;

        exticr_traits<PORT, POS>::select();
        EXTI.IMR |= MASK;
        if (RISE)
            EXTI.RTSR |= MASK;
        if (FALL)
            EXTI.FTSR |= MASK;
    }

    static inline bool pending()
    {
        return exti_t::V.PR & MASK;
    }

    static inline void clear()
    {
        exti_t::V.PR = MASK;
    }

    static constexpr uint32_t MASK = 1 << POS;
};

