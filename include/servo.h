#pragma once

#include "timer.h"

template<int TIMER_INST>
struct servo_timer_t: tim_t<TIMER_INST>
{
    using timer = tim_t<TIMER_INST>;

    static constexpr uint32_t arr = 0xffff;
    static constexpr float f_pwm = 50;
    static constexpr float t_c = arr * f_pwm;

    static void setup()
    {
        const auto f_clk = timer::clock();
        const auto psc = f_clk / (f_pwm * (arr + 1)) - 1;

        timer::setup(psc, arr);
    }

    template<channel_t CH, pin_t PIN>
    struct servo
    {
        using pwm = typename timer::template pwm<CH, PIN>;

        static void setup
            ( float x = 0
            , float t_min = 0.6e-3
            , float t_max = 2.4e-3
            )
        {
            m_k = t_c * (t_max - t_min) / 2.;
            m_a = t_c * t_min + m_k;
            pwm::setup(m_a + m_k * x);
        }

        static void set(float x)
        {
            pwm::duty(static_cast<uint16_t>(m_a + m_k * x));
        }

        static float m_k, m_a;
    };
};

template<int TIMER_INST>
template<channel_t CH, pin_t PIN>
float servo_timer_t<TIMER_INST>::servo<CH, PIN>::m_k;

template<int TIMER_INST>
template<channel_t CH, pin_t PIN>
float servo_timer_t<TIMER_INST>::servo<CH, PIN>::m_a;

