#pragma once

#include <stdint.h>

template<int N> class reserved_t { private: uint32_t m_pad[N]; };

template<uint8_t POS, uint32_t MASK>
struct bit_field_t
{
    template <uint32_t X>
    static constexpr uint32_t value()
    {
        static_assert((X & ~MASK) == 0, "field value too large");
        return X << POS;
    }
};

template<typename T>
struct always_false_t
{
    static const bool value = false;
};

template<int I>
struct always_false_i
{
    static const bool value = false;
};

template<bool> struct is_in_range;

