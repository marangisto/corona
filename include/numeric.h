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

static inline float remap(float a, float b, float x)
{
    return (x - a) / (b - a);
}

