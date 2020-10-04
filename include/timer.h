#pragma once

#include "gpio.h"
#include <device/tim.h>

template<int> struct counter_traits { using type = uint16_t; };
template<> struct counter_traits<2> { using type = uint32_t; };
template<> struct counter_traits<5> { using type = uint32_t; };

template<typename TIMER, channel_t CH> struct timch_traits {};

template<typename TIMER> struct timch_traits<TIMER, CH1>
{
    using tim = typename TIMER::tim;
    using _ = typename tim::T;

    static constexpr signal_t CH = TIMER::traits::CH1;
    static constexpr uint32_t CCDE = _::DIER_CC1DE;
    static constexpr uint32_t CCIE = _::DIER_CC1IE;
    static constexpr uint32_t CCIF = _::SR_CC1IF;

    static void setup_pwm(typename TIMER::count_t initial_duty)
    {
        tim::V.CCMR1 |= _::CCMR1_OC1M::W(0x6)
                     |  _::CCMR1_OC1PE
                     ;
        tim::V.CCR1  = initial_duty;
        tim::V.CCER  |= _::CCER_CC1E;
    }

    static void setup_icc()
    {
        tim::V.CCMR1 |= _::CCMR1_CC1S::W(0x1)   // map TI1 input
                     |  _::CCMR1_IC1PSC::W(0)   // prescaler
                     |  _::CCMR1_IC1F::W(0)     // filter
                     ;
        tim::V.CCR1  = 0;
        tim::V.CCER  |= _::CCER_CC1E;
        tim::V.CCER  |= _::CCER_CC1E
                     //|  _::CCER_CC1P::W(0x3)    // both edges
                     ;
    }

    static inline volatile uint32_t& CCR() { return tim::V.CCR1; }
};

template<typename TIMER> struct timch_traits<TIMER, CH2>
{
    using tim = typename TIMER::tim;
    using _ = typename tim::T;

    static constexpr signal_t CH = TIMER::traits::CH2;
    static constexpr uint32_t CCDE = _::DIER_CC2DE;
    static constexpr uint32_t CCIE = _::DIER_CC2IE;
    static constexpr uint32_t CCIF = _::SR_CC2IF;

    static void setup_pwm(typename TIMER::count_t initial_duty)
    {
        tim::V.CCMR1 |= _::CCMR1_OC2M::W(0x6)
                     |  _::CCMR1_OC2PE
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

    static constexpr signal_t CH = TIMER::traits::CH3;
    static constexpr uint32_t CCDE = _::DIER_CC3DE;
    static constexpr uint32_t CCIE = _::DIER_CC3IE;
    static constexpr uint32_t CCIF = _::SR_CC3IF;

    static void setup_pwm(typename TIMER::count_t initial_duty)
    {
        tim::V.CCMR2 |= _::CCMR2_OC3M::W(0x6)
                     |  _::CCMR2_OC3PE
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

    static constexpr signal_t CH = TIMER::traits::CH4;
    static constexpr uint32_t CCDE = _::DIER_CC4DE;
    static constexpr uint32_t CCIE = _::DIER_CC4IE;
    static constexpr uint32_t CCIF = _::SR_CC4IF;

    static void setup_pwm(typename TIMER::count_t initial_duty)
    {
        tim::V.CCMR2 |= _::CCMR2_OC4M::W(0x6)
                     |  _::CCMR2_OC4PE
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

        tim_traits<INST>::template enable<rcc_t>();

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
        tim::V.CR2 |= _::CR2_MMS::W(MM);
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

    static inline volatile count_t arr()
    {
        return tim::V.ARR;
    }

    static inline void main_output_enable()
    {
        tim::V.BDTR |= _::BDTR_MOE;
    }

    static inline void set_auto_reload_value(count_t arr)
    {
        tim::V.ARR = arr;
    }

    static inline uint32_t clock()
    {
        return sys_clock::freq(traits::CLOCK);
    }

    template<channel_t CH, pin_t PIN>
    struct pwm
    {
        using traits = timch_traits<tim_t<INST>, CH>;

        template<output_type_t ot = push_pull, output_speed_t s = high_speed>
        static void setup(count_t initial_duty = 0)
        {
            alternate_t<PIN, traits::CH>::template setup<ot, s>();
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

    template<channel_t CH, pin_t PIN>
    struct icc
    {
        using traits = timch_traits<tim_t<INST>, CH>;

        template<input_type_t it = floating>
        static void setup()
        {
            alternate_t<PIN, traits::CH>::template setup<it>();
            traits::setup_icc();
        }

        static inline void enable_interrupt()
        {
            tim::V.DIER |= traits::CCIE;
        }

        static inline volatile bool interrupt_flag()
        {
            return (tim::V.SR & traits::CCIF) != 0;
        }

        static inline void clear_interrupt_flag()
        {
            tim::V.SR &= ~traits::CCIF;
        }

        static count_t count()
        {
            return traits::CCR();
        }

        static void count(count_t x)
        {
            traits::CCR() = x;
        }
    };

    // for debug only

    // static inline volatile count_t dier() { return tim::V.DIER; }
    // static inline volatile count_t sr() { return tim::V.SR; }
};

template<int INST, pin_t PIN1, pin_t PIN2>
class encoder_t
{
public:
    using traits = tim_traits<INST>;
    using tim = typename traits::tim;
    using _ = typename tim::T;
    using count_t = typename counter_traits<INST>::type;

    template<input_type_t input_type>
    static inline void setup(count_t arr)
    {
        typename tim::T& TIM = tim::V;

        alternate_t<PIN1, traits::CH1>::template setup<input_type>();
        alternate_t<PIN2, traits::CH2>::template setup<input_type>();

        tim_traits<INST>::template enable<rcc_t>();

        TIM.CCMR1 = _::CCMR1_RESET_VALUE
                  | _::CCMR1_CC1S::W(0x1)
                  | _::CCMR1_CC2S::W(0x1)
                  ; // TI1 & TI2 as inputs
        TIM.CCER = _::CCER_RESET_VALUE;   // CCER_CC1P CCER_CC2P polarity choices
        TIM.SMCR = _::SMCR_RESET_VALUE | _::SMCR_SMS::W(0x1);
        TIM.ARR = arr;
        TIM.CNT = _::CNT_RESET_VALUE;;
        TIM.CR1 = _::CR1_RESET_VALUE | _::CR1_CEN;
    }

    static inline volatile count_t count()
    {
        return tim::V.CNT;
    }

    static inline void set_count(count_t x)
    {
        tim::V.CNT = x;
    }
};

