#pragma once

#include <device/tim.h>

template<int> struct counter_traits { using type = uint16_t; };
template<> struct counter_traits<2> { using type = uint32_t; };
template<> struct counter_traits<5> { using type = uint32_t; };

template<int INST>
class timer_t
{
public:
    using count_t = typename counter_traits<INST>::type;
    enum master_mode_t { mm_reset, mm_enable, mm_update };

    static inline void setup(uint16_t psc, count_t arr)
    {
        typename tim::T& TIM = tim::V;

        clock_control_t<rcc_t, tim>::enable();  // enable clock
        TIM.CR1 = _::CR1_RESET_VALUE;
        TIM.PSC = psc;
        TIM.ARR = arr;
        TIM.CR1 |= _::CR1_ARPE;
        TIM.CR1 |= _::CR1_CEN;  // FIXME: should this be on by default?
    }

    static inline void enable()
    {
        tim::V.CR1 |= _::CR1_CEN;
    }

    static inline void disable()
    {
        tim::V.CR1 &= ~_::CR1_CEN;
    }

    static inline void enable_update_interrupt()
    {
        tim::V.DIER |= _::DIER_UIE;
    }

    template<master_mode_t MM>
    static inline void master_mode()
    {
        tim::V.CR2 |= _::template CR2_MMS<MM>;
    }

    static inline volatile bool update_interrupt_flag()
    {
        return (tim::V.SR & _::SR_UIF) != 0;
    }

    static inline void clear_update_interrupt_flag()
    {
        tim::V.SR &= ~_::SR_UIF;
    }

    static inline volatile count_t count()
    {
        return tim::V.CNT;
    }

    static inline void set_count(count_t x)
    {
        tim::V.CNT = x;
    }

    static inline void main_output_enable()
    {
        tim::V.BDTR |= _::BDTR_MOE;
    }

    static inline void set_auto_reload_value(count_t arr)
    {
        tim::V.ARR = arr;
    }

private:
    using traits = tim_traits<INST>;
    using tim = typename traits::tim;
    using _ = typename tim::T;
};

