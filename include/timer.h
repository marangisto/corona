#pragma once

#include "gpio.h"
#include <device/tim.h>
#include <driver/timer.h>
#include <limits>
#include <math.h>

template<int> struct counter_traits { using type = uint16_t; };
template<> struct counter_traits<2> { using type = uint32_t; };
template<> struct counter_traits<5> { using type = uint32_t; };

template<int> struct icc_prescale {};
template<> struct icc_prescale<1> { static constexpr uint8_t P = 0x0; };
template<> struct icc_prescale<2> { static constexpr uint8_t P = 0x1; };
template<> struct icc_prescale<4> { static constexpr uint8_t P = 0x2; };
template<> struct icc_prescale<8> { static constexpr uint8_t P = 0x3; };

enum pwm_mode_t
    { pwm_mode_1 = 0x0
    , pwm_mode_2 = 0x1
    };

enum icc_input_t
    { regular_input = 0x1
    , alternate_input = 0x2
    };

template<typename TIMER, channel_t CH> struct timch_traits {};

template<typename TIMER> struct timch_traits<TIMER, CH1>
{
    using tim = typename TIMER::tim;
    using _ = typename tim::T;

    static constexpr signal_t CH = TIMER::traits::CH1;
    static constexpr uint32_t CCDE = _::DIER_CC1DE;
    static constexpr uint32_t CCIE = _::DIER_CC1IE;
    static constexpr uint32_t CCIF = _::SR_CC1IF;

    template <pwm_mode_t MODE = pwm_mode_1>
    static void setup_pwm
        ( typename TIMER::count_t initial_duty
        , bool invert
        )
    {
        tim::V.CCMR1 |= _::CCMR1_OC1M::W(0x6 | MODE)
                     |  _::CCMR1_OC1PE
                     ;
        tim::V.CCR1  = initial_duty;
        tim::V.CCER  |= _::CCER_CC1E
                     | (invert ? _::CCER_CC1P : 0)
                     ;
    }

    template
        < icc_input_t       INPUT   // regular|alternate|trigger
        , trigger_edge_t    EDGE    // rising|falling\both
        , uint8_t           PRE     // 1|2|4|8
        , uint8_t           FILTER  // see docs
        >
    static void setup_icc()
    {
        tim::V.CCMR1 |= _::CCMR1_CC1S::W(INPUT)
                     |  _::CCMR1_IC1PSC::W(icc_prescale<PRE>::P)
                     |  _::CCMR1_IC1F::W(FILTER & 0xf)
                     ;
        tim::V.CCER  |= ccer_traits<CH1, EDGE, _>::CCER;
        tim::V.CCR1  = 0;
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

    template <pwm_mode_t MODE = pwm_mode_1>
    static void setup_pwm
        ( typename TIMER::count_t initial_duty
        , bool invert
        )
    {
        tim::V.CCMR1 |= _::CCMR1_OC2M::W(0x6 | MODE)
                     |  _::CCMR1_OC2PE
                     ;
        tim::V.CCR2  = initial_duty;
        tim::V.CCER  |= _::CCER_CC2E
                     | (invert ? _::CCER_CC2P : 0)
                     ;
    }

    template
        < icc_input_t       INPUT   // regular|alternate|trigger
        , trigger_edge_t    EDGE    // rising|falling\both
        , uint8_t           PRE     // 1|2|4|8
        , uint8_t           FILTER  // see docs
        >
    static void setup_icc()
    {
        tim::V.CCMR1 |= _::CCMR1_CC2S::W(INPUT)
                     |  _::CCMR1_IC2PSC::W(icc_prescale<PRE>::P)
                     |  _::CCMR1_IC2F::W(FILTER & 0xf)
                     ;
        tim::V.CCER  |= ccer_traits<CH2, EDGE, _>::CCER;
        tim::V.CCR2  = 0;
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

    template <pwm_mode_t MODE = pwm_mode_1>
    static void setup_pwm
        ( typename TIMER::count_t initial_duty
        , bool invert
        )
    {
        tim::V.CCMR2 |= _::CCMR2_OC3M::W(0x6 | MODE)
                     |  _::CCMR2_OC3PE
                     ;
        tim::V.CCR3  = initial_duty;
        tim::V.CCER  |= _::CCER_CC3E
                     | (invert ? _::CCER_CC3P : 0)
                     ;
    }

    template
        < icc_input_t       INPUT   // regular|alternate|trigger
        , trigger_edge_t    EDGE    // rising|falling\both
        , uint8_t           PRE     // 1|2|4|8
        , uint8_t           FILTER  // see docs
        >
    static void setup_icc()
    {
        tim::V.CCMR2 |= _::CCMR2_CC1S::W(INPUT)
                     |  _::CCMR2_IC1PSC::W(icc_prescale<PRE>::P)
                     |  _::CCMR2_IC1F::W(FILTER & 0xf)
                     ;
        tim::V.CCER  |= ccer_traits<CH3, EDGE, _>::CCER;
        tim::V.CCR3  = 0;
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

    template <pwm_mode_t MODE = pwm_mode_1>
    static void setup_pwm
        ( typename TIMER::count_t initial_duty
        , bool invert
        )
    {
        tim::V.CCMR2 |= _::CCMR2_OC4M::W(0x6 | MODE)
                     |  _::CCMR2_OC4PE
                     ;
        tim::V.CCR4  = initial_duty;
        tim::V.CCER  |= _::CCER_CC4E
                     | (invert ? _::CCER_CC4P : 0)
                     ;
    }

    template
        < icc_input_t       INPUT   // regular|alternate|trigger
        , trigger_edge_t    EDGE    // rising|falling\both
        , uint8_t           PRE     // 1|2|4|8
        , uint8_t           FILTER  // see docs
        >
    static void setup_icc()
    {
        tim::V.CCMR2 |= _::CCMR2_CC4S::W(INPUT)
                     |  _::CCMR2_IC4PSC::W(icc_prescale<PRE>::P)
                     |  _::CCMR2_IC4F::W(FILTER & 0xf)
                     ;
        tim::V.CCER  |= ccer_traits<CH4, EDGE, _>::CCER;
        tim::V.CCR4  = 0;
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

    static inline void setup(double t)  // period in seconds
    {
        const double tc = t * clock();  
        const uint16_t pre = ceil(tc / std::numeric_limits<uint16_t>::max());
        const count_t arr = floor(tc / (pre + 1) - 1);

        setup(pre, arr);
    }

    static inline void setup(uint16_t psc = 0, count_t arr = 1)
    {
        typename tim::T& TIM = tim::V;

        tim_traits<INST>::template enable<rcc_t>();

        TIM.CR1 = _::CR1_RESET_VALUE;
        TIM.PSC = psc;
        TIM.ARR = arr;
        TIM.CR1 |= _::CR1_ARPE;
        TIM.CR1 |= _::CR1_CEN;
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

    static inline void disable_update_interrupt()
    {
        tim::V.DIER &= ~_::DIER_UIE;
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

    static inline void set_prescale(uint16_t psc)
    {
        tim::V.PSC = psc;
    }

    static inline uint32_t clock()
    {
        return sys_clock::freq(traits::CLOCK);
    }

    static inline void enable_update_dma()
    {
        tim::V.DIER |= _::DIER_UDE;
    }

    static inline void enable_trigger_dma()
    {
        tim::V.DIER |= _::DIER_TDE;
    }

    static inline void set_one_pulse_mode()
    {
        disable();
        set_count(0);
        tim::V.CR1 |= _::CR1_OPM;
    }

    template<channel_t CH, pin_t PIN>
    struct pwm
    {
        using traits = timch_traits<tim_t<INST>, CH>;

        template
            < pwm_mode_t MODE = pwm_mode_1
            , output_type_t ot = push_pull
            , output_speed_t s = high_speed
            >
        static void setup
            ( count_t initial_duty = 0
            , bool invert = false
            )
        {
            alternate_t<PIN, traits::CH>::template setup<ot, s>();
            traits::template setup_pwm<MODE>(initial_duty, invert);
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

        template
            < input_type_t      it      = floating
            , trigger_edge_t    edge    = rising_edge
            , uint8_t           pre     = 1
            , uint8_t           filter  = 0
            >
        static void setup()
        {
            alternate_t<PIN, traits::CH>::template setup<it>();
            traits::template setup_icc<regular_input, edge, pre, filter>();
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

