#pragma once

#include <cstdint>

namespace fixed
{

template<typename>struct q_traits {};

template<>
struct q_traits<int16_t>
{
    typedef int16_t T;
    typedef int32_t T2;

    static constexpr uint8_t Q = 15;
    static constexpr T max_val = 0x7fff;
    static constexpr T min_val = -0x8000;
};

template<>
struct q_traits<int32_t>
{
    typedef int32_t T;
    typedef int64_t T2;

    static constexpr uint8_t Q = 31;
    static constexpr T max_val = 0x7fffffff;
    static constexpr T min_val = -0x80000000;
};

template<typename T>
struct q_t
{
    static constexpr float inv_max_val = 1. / static_cast<float>(q_traits<T>::max_val);
    static constexpr q_t<T> max_val = q_t(q_traits<T>::max_val);
    static constexpr q_t<T> min_val = q_t(q_traits<T>::min_val);

    constexpr q_t(): q(0) {}
    constexpr q_t(const q_t& x): q(x.q) {}
    q_t(volatile const q_t& x): q(x.q) {}
    constexpr void operator=(const q_t& x) { q = x.q; }
    void operator=(const q_t& x) volatile { q = x.q; }

    explicit constexpr q_t(T x): q(x) {}

    explicit constexpr q_t(float x): q(from_float(x)) {}

    // constexpr operator float() { return to_float(); }
    constexpr float to_float() const { return static_cast<float>(q) * inv_max_val; }

    static constexpr inline q_t lshift(const q_t& x, uint8_t n)
    {
        return q_t(x.q << n); // FIXME: needs sign treatment and saturation!
    }

    static inline constexpr T from_float(float x)
    {
        if (x >= 1.0f)
            return q_traits<T>::max_val;
        else if (x <= -1.0f)
            return q_traits<T>::min_val;
        else
            return static_cast<T>(x * q_traits<T>::max_val);
    }

    static constexpr T sat(typename q_traits<T>::T2 x)
    {
        if (x > q_traits<T>::max_val)
            return q_traits<T>::max_val;
        else if (x < q_traits<T>::min_val)
            return q_traits<T>::min_val;
        else
            return static_cast<T>(x);
    }

    T q;
};

static inline int32_t signed_multiply(int32_t x, int32_t y)
{
    int32_t z;

    asm
    (
        "smmul %0, %1, %2"
            : "=r" (z)
            : "r" (x), "r" (y)
            : "r0"
    );

    return z << 1;
}

template<typename T>
inline constexpr bool operator<(q_t<T> x, q_t<T> y)
{
    return x.q < y.q;
}

template<typename T>
inline constexpr q_t<T> operator-(q_t<T> x)
{
    return q_t<T>(-x.q);
}

template<typename T>
inline constexpr q_t<T> operator+(q_t<T> x, q_t<T> y)
{
    return q_t<T>(x.q + y.q);
}

template<typename T>
inline constexpr q_t<T> operator-(q_t<T> x, q_t<T> y)
{
    return q_t<T>(x.q - y.q);
}

template<typename T>
inline constexpr q_t<T> operator*(q_t<T> x, q_t<T> y)
{
    // FIXME: this will be wrong for q15!
    return q_t<T>(signed_multiply(x.q, y.q));
}

template<typename T>
inline constexpr q_t<T> operator/(q_t<T> x, q_t<T> y)
{
    return q_t<T>(x.q / y.q);
}

static inline float q31tof(int32_t x)
{
    constexpr float k = 1. / static_cast<float>(0x7FFFFFFF);
    return x * k;
}

static inline int32_t ftoq31(float x)
{
    constexpr float k = static_cast<float>(0x7FFFFFFF);
    return x * k;
}

typedef q_t<int16_t> q15_t;
typedef q_t<int32_t> q31_t;

} // namespace fixed

