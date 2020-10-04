#pragma once

template<channel_t CH, trigger_edge_t EDGE, typename _>
struct ccer_traits {};

template<typename _> struct ccer_traits<CH1, rising_edge, _>
{
    static constexpr uint32_t CCER = _::CCER_CC1E;
};

template<typename _> struct ccer_traits<CH1, falling_edge, _>
{
    static constexpr uint32_t CCER = _::CCER_CC1E | _::CCER_CC1P;
};

template<typename _> struct ccer_traits<CH1, both_edges, _>
{
    static_assert(always_false_t<_>::value, "cc on both edges not possible on this MCU");
};

template<typename _> struct ccer_traits<CH2, rising_edge, _>
{
    static constexpr uint32_t CCER = _::CCER_CC2E;
};

template<typename _> struct ccer_traits<CH2, falling_edge, _>
{
    static constexpr uint32_t CCER = _::CCER_CC2E | _::CCER_CC2P;
};

template<typename _> struct ccer_traits<CH2, both_edges, _>
{
    static_assert(always_false_t<_>::value, "cc on both edges not possible on this MCU");
};

template<typename _> struct ccer_traits<CH3, rising_edge, _>
{
    static constexpr uint32_t CCER = _::CCER_CC3E;
};

template<typename _> struct ccer_traits<CH3, falling_edge, _>
{
    static constexpr uint32_t CCER = _::CCER_CC3E | _::CCER_CC3P;
};

template<typename _> struct ccer_traits<CH3, both_edges, _>
{
    static_assert(always_false_t<_>::value, "cc on both edges not possible on this MCU");
};

template<typename _> struct ccer_traits<CH4, rising_edge, _>
{
    static constexpr uint32_t CCER = _::CCER_CC4E;
};

template<typename _> struct ccer_traits<CH4, falling_edge, _>
{
    static constexpr uint32_t CCER = _::CCER_CC4E | _::CCER_CC4P;
};

template<typename _> struct ccer_traits<CH4, both_edges, _>
{
    static_assert(always_false_t<_>::value, "cc on both edges not possible on this MCU");
};

