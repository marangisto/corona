#pragma once

#include <device/tim.h>

template<int> struct counter_traits { using type = uint16_t; };
template<> struct counter_traits<2> { using type = uint32_t; };
template<> struct counter_traits<5> { using type = uint32_t; };

template<typename TIMER, channel_t CH> struct timch_traits {};

template<typename TIMER> struct timch_traits<TIMER, CH1>
{
    using tim = typename TIMER::tim;
    using _ = typename tim::T;

    static constexpr alternate_function_t CH = TIMER::traits::CH1;

    static void setup_pwm(typename TIMER::count_t initial_duty)
    {
        tim::V.CCMR1 |= _::template CCMR1_Output_OC1M<0x6>
                     |  _::CCMR1_Output_OC1PE
                     ;
        tim::V.CCR1  = initial_duty;
        tim::V.CCER  |= _::CCER_CC1E;
    }

    static inline volatile uint32_t& CCR() { return tim::V.CCR1; }
};

template<typename TIMER> struct timch_traits<TIMER, CH2>
{
    using tim = typename TIMER::tim;
    using _ = typename tim::T;

    static constexpr alternate_function_t CH = TIMER::traits::CH2;

    static void setup_pwm(typename TIMER::count_t initial_duty)
    {
        tim::V.CCMR1 |= _::template CCMR1_Output_OC2M<0x6>
                     |  _::CCMR1_Output_OC2PE
                     ;
        tim::V.CCR2  = initial_duty;
        tim::V.CCER  |= _::CCER_CC2E;
    }

    static inline volatile uint32_t& CCR() { return tim::V.CCR2; }
};

template<typename TIMER> struct timch_traits<TIMER, CH3>
{
    using tim = typename TIMER::tim;
    using _ = typename tim::T;

    static constexpr alternate_function_t CH = TIMER::traits::CH3;

    static void setup_pwm(typename TIMER::count_t initial_duty)
    {
        tim::V.CCMR2 |= _::template CCMR2_Output_OC3M<0x6>
                     |  _::CCMR2_Output_OC3PE
                     ;
        tim::V.CCR3  = initial_duty;
        tim::V.CCER  |= _::CCER_CC3E;
    }

    static inline volatile uint32_t& CCR() { return tim::V.CCR3; }
};

template<typename TIMER> struct timch_traits<TIMER, CH4>
{
    using tim = typename TIMER::tim;
    using _ = typename tim::T;

    static constexpr alternate_function_t CH = TIMER::traits::CH4;

    static void setup_pwm(typename TIMER::count_t initial_duty)
    {
        tim::V.CCMR2 |= _::template CCMR2_Output_OC4M<0x6>
                     |  _::CCMR2_Output_OC4PE
                     ;
        tim::V.CCR4  = initial_duty;
        tim::V.CCER  |= _::CCER_CC4E;
    }

    static inline volatile uint32_t& CCR() { return tim::V.CCR4; }
};

template<int INST>
class tim_t
{
public:
    using traits = tim_traits<INST>;
    using tim = typename traits::tim;
    using _ = typename tim::T;
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

    template<channel_t CH, gpio_pin_t PIN>
    struct pwm
    {
        using traits = timch_traits<tim_t<INST>, CH>;

        static void setup(count_t initial_duty = 0)
        {
            alternate_t<PIN, traits::CH>::template setup<high_speed>();
            traits::setup_pwm(initial_duty);
        }

        static count_t duty()
        {
            return traits::CCR();
        }

        static void duty(count_t x)
        {
            traits::CCR() = x;
        }
    };
};

