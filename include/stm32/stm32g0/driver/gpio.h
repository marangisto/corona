#pragma once

template<port_t PORT, int POS, typename = is_in_range<true> >
struct exticr_traits
{
    static_assert(always_false_i<POS>::value, "pin out of range");
};

template<port_t PORT, int POS>
struct exti_interrupt
{
    template<bool RISE, bool FALL>
    static void enable()
    {
        static_assert(always_false_i<POS>::value, "not implemented");
    }

    static inline bool pending()
    {
        static_assert(always_false_i<POS>::value, "not implemented");
        return false;
    }

    static inline void clear()
    {
        static_assert(always_false_i<POS>::value, "not implemented");
    }
};

