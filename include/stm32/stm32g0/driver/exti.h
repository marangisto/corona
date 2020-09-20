#pragma once

#include <device/exti.h>
#include <device/syscfg.h>

template<port_t PORT, int POS, typename = is_in_range<true> >
struct exticr_traits
{
    static_assert(always_false_i<POS>::value, "pin out of range");
};

template<port_t PORT, int POS>
struct exticr_traits<PORT, POS, is_in_range<(0 <= POS && POS < 4)> >
{
    static void select()
    {
        constexpr uint8_t shift = (POS & 0x3) << 3;
        exti_t::V.EXTICR1 &= ~(0xff << shift);
        exti_t::V.EXTICR1 |= (PORT << shift);
    }
};

template<port_t PORT, int POS>
struct exticr_traits<PORT, POS, is_in_range<(4 <= POS && POS < 8)> >
{
    static void select()
    {
        constexpr uint8_t shift = (POS & 0x3) << 3;
        exti_t::V.EXTICR2 &= ~(0xff << shift);
        exti_t::V.EXTICR2 |= (PORT << shift);
    }
};

template<port_t PORT, int POS>
struct exticr_traits<PORT, POS, is_in_range<(8 <= POS && POS < 12)> >
{
    static void select()
    {
        constexpr uint8_t shift = (POS & 0x3) << 3;
        exti_t::V.EXTICR3 &= ~(0xff << shift);
        exti_t::V.EXTICR3 |= (PORT << shift);
    }
};

template<port_t PORT, int POS>
struct exticr_traits<PORT, POS, is_in_range<(12 <= POS && POS < 16)> >
{
    static void select()
    {
        constexpr uint8_t shift = (POS & 0x3) << 3;
        exti_t::V.EXTICR4 &= ~(0xff << shift);
        exti_t::V.EXTICR4 |= (PORT << shift);
    }
};

template<port_t PORT, int POS>
struct exti_interrupt
{
    template<bool RISE, bool FALL>
    static void enable()
    {
        typename exti_t::T& EXTI = exti_t::V;

        syscfg_traits<0>::template enable<rcc_t>();
        exticr_traits<PORT, POS>::select();
        EXTI.IMR1 |= MASK;
        if (RISE)
            EXTI.RTSR1 |= MASK;
        if (FALL)
            EXTI.FTSR1 |= MASK;
    }

    static inline bool pending()
    {
        return (exti_t::V.RPR1 & MASK) || (exti_t::V.FPR1 & MASK);
    }

    static inline void clear()
    {
        exti_t::V.RPR1 = MASK;
        exti_t::V.FPR1 = MASK;
    }

    static constexpr uint32_t MASK = 1 << POS;
};

