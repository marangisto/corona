#pragma once

////
//
//      Sundry collection math-related utilites
//
////

// exponential function approximation
static inline float exp6(float x)
{
    x = 1. + x / 64;
    x *= x; x *= x; x *= x;
    x *= x; x *= x; x *= x;
    return x;
}

static inline float remap(const float a, const float b, float x)
{
    const float k = 1. / (b - a);

    return k * (x - a);
}

