#pragma once

#include "gpio.h"
#include <device/hrtim.h>

enum cont_mode_t { single_shot, continuous };

enum timer_event_t
    { SST       = (1 << 0)
    , RESYNC    = (1 << 1)
    , PER       = (1 << 2)
    , CMP1      = (1 << 3)
    , CMP2      = (1 << 4)
    , CMP3      = (1 << 5)
    , CMP4      = (1 << 6)
    };

enum sub_tim_t  // use reset flags for effective use
    { MASTER = hrtim_common_t::T::CR2_MRST
    , TIMA = hrtim_common_t::T::CR2_TARST
    , TIMB = hrtim_common_t::T::CR2_TBRST
    , TIMC = hrtim_common_t::T::CR2_TCRST
    , TIMD = hrtim_common_t::T::CR2_TDRST
    , TIME = hrtim_common_t::T::CR2_TERST
    //, TIMF = hrtim_common_t::T::CR2_TFRST
    };

template<sub_tim_t TIM> struct sub_tim_traits {};

template<> struct sub_tim_traits<TIMA>
{
    template<cont_mode_t CONT>
    static void setup
        ( uint16_t per
        , uint16_t cmp1
        , uint16_t cmp2
        , uint16_t cmp3
        , uint16_t cmp4
        )
    {
        using T = hrtim_tima_t;
        using M = hrtim_master_t;

        T::V.TIMACR
            = T::T::TIMACR_RESET_VALUE      // reset register
            | T::T::TIMACR_CK_PSCX::W(0x5)  // prescale = 1
            | (CONT == continuous ? T::T::TIMACR_CONT : 0)
            ;

        T::V.CNTAR = 0;                     // set counter
        T::V.PERAR = per;                   // set period
        T::V.REPAR = 0;                     // repetition
        T::V.CMP1AR = cmp1;                 // compare reg 1
        T::V.CMP2AR = cmp2;                 // compare reg 2
        T::V.CMP3AR = cmp3;                 // compare reg 3
        T::V.CMP4AR = cmp4;                 // compare reg 4

        M::V.MCR |= M::V.MCR_TACEN;         // enable A
    }
};

template<> struct sub_tim_traits<TIMB>
{
    template<cont_mode_t CONT>
    static void setup
        ( uint16_t per
        , uint16_t cmp1
        , uint16_t cmp2
        , uint16_t cmp3
        , uint16_t cmp4
        )
    {
        using T = hrtim_timb_t;
        using M = hrtim_master_t;

        T::V.TIMBCR
            = T::T::TIMBCR_RESET_VALUE      // reset register
            | T::T::TIMBCR_CK_PSCX::W(0x5)  // prescale = 1
            | (CONT == continuous ? T::T::TIMBCR_CONT : 0)
            ;

        T::V.CNTR = 0;                      // set counter
        T::V.PERBR = per;                   // set period
        T::V.REPBR = 0;                     // repetition
        T::V.CMP1BR = cmp1;                 // compare reg 1
        T::V.CMP2BR = cmp2;                 // compare reg 2
        T::V.CMP3BR = cmp3;                 // compare reg 3
        T::V.CMP4BR = cmp4;                 // compare reg 4

        M::V.MCR |= M::V.MCR_TBCEN;         // enable B
    }
};

template<> struct sub_tim_traits<TIMC>
{
    using T = hrtim_timc_t;
    using M = hrtim_master_t;

    template<cont_mode_t CONT>
    static void setup
        ( uint16_t per
        , uint16_t cmp1
        , uint16_t cmp2
        , uint16_t cmp3
        , uint16_t cmp4
        )
    {
        T::V.TIMCCR
            = T::T::TIMCCR_RESET_VALUE      // reset register
            | T::T::TIMCCR_CK_PSCX::W(0x5)  // prescale = 1
            | (CONT == continuous ? T::T::TIMCCR_CONT : 0)
            ;

        T::V.CNTCR = 0;                     // set counter
        T::V.PERCR = per;                   // set period
        T::V.REPCR = 0;                     // repetition
        T::V.CMP1CR = cmp1;                 // compare reg 1
        T::V.CMP2CR = cmp2;                 // compare reg 2
        T::V.CMP3CR = cmp3;                 // compare reg 3
        T::V.CMP4CR = cmp4;                 // compare reg 4

        M::V.MCR |= M::V.MCR_TCCEN;         // enable C
    }
};

template<> struct sub_tim_traits<TIMD>
{
    template<cont_mode_t CONT>
    static void setup
        ( uint16_t per
        , uint16_t cmp1
        , uint16_t cmp2
        , uint16_t cmp3
        , uint16_t cmp4
        )
    {
        using T = hrtim_timd_t;
        using M = hrtim_master_t;

        T::V.TIMDCR
            = T::T::TIMDCR_RESET_VALUE      // reset register
            | T::T::TIMDCR_CK_PSCX::W(0x5)  // prescale = 1
            | (CONT == continuous ? T::T::TIMDCR_CONT : 0)
            ;

        T::V.CNTDR = 0;                     // set counter
        T::V.PERDR = per;                   // set period
        T::V.REPDR = 0;                     // repetition
        T::V.CMP1DR = cmp1;                 // compare reg 1
        T::V.CMP2DR = cmp2;                 // compare reg 2
        T::V.CMP3DR = cmp3;                 // compare reg 3
        T::V.CMP4DR = cmp4;                 // compare reg 4

        M::V.MCR |= M::V.MCR_TDCEN;         // enable D
    }
};

template<> struct sub_tim_traits<TIME>
{
    template<cont_mode_t CONT>
    static void setup
        ( uint16_t per
        , uint16_t cmp1
        , uint16_t cmp2
        , uint16_t cmp3
        , uint16_t cmp4
        )
    {
        using T = hrtim_time_t;
        using M = hrtim_master_t;

        T::V.TIMECR
            = T::T::TIMECR_RESET_VALUE      // reset register
            | T::T::TIMECR_CK_PSCX::W(0x5)  // prescale = 1
            | (CONT == continuous ? T::T::TIMECR_CONT : 0)
            ;

        T::V.CNTER = 0;                     // set counter
        T::V.PERER = per;                   // set period
        T::V.REPER = 0;                     // repetition
        T::V.CMP1ER = cmp1;                 // compare reg 1
        T::V.CMP2ER = cmp2;                 // compare reg 2
        T::V.CMP3ER = cmp3;                 // compare reg 3
        T::V.CMP4ER = cmp4;                 // compare reg 4

        M::V.MCR |= M::V.MCR_TECEN;         // enable E
    }
};

template<sub_tim_t TIM, channel_t CH> struct sub_tim_channel_traits {};

template<> struct sub_tim_channel_traits<TIMA, CH1>
{
    using T = hrtim_tima_t;
    using C = hrtim_common_t;

    template<pin_t PIN>
    static void setup()
    {
        alternate_t<PIN, HRTIM_CHA1>::template setup<push_pull, high_speed>();
        C::V.OENR |= C::T::OENR_TA1OEN;     // enable A channel 1
    }

    static void set(uint32_t events)
    {
        T::V.SETA1R = events;
    }

    static void rst(uint32_t events)
    {
        T::V.RSTA1R = events;
    }
};

template<> struct sub_tim_channel_traits<TIMB, CH1>
{
    using T = hrtim_timb_t;
    using C = hrtim_common_t;

    template<pin_t PIN>
    static void setup()
    {

        alternate_t<PIN, HRTIM_CHB1>::template setup<push_pull, high_speed>();
        C::V.OENR |= C::T::OENR_TB1OEN;     // enable B channel 1
    }

    static void set(uint32_t events)
    {
        T::V.SETB1R = events;
    }

    static void rst(uint32_t events)
    {
        T::V.RSTB1R = events;
    }
};

template<> struct sub_tim_channel_traits<TIMC, CH1>
{
    using T = hrtim_timc_t;
    using C = hrtim_common_t;

    template<pin_t PIN>
    static void setup()
    {

        alternate_t<PIN, HRTIM_CHC1>::template setup<push_pull, high_speed>();
        C::V.OENR |= C::T::OENR_TC1OEN;     // enable C channel 1
    }

    static void set(uint32_t events)
    {
        T::V.SETC1R = events;
    }

    static void rst(uint32_t events)
    {
        T::V.RSTC1R = events;
    }
};

template<> struct sub_tim_channel_traits<TIMD, CH1>
{
    using T = hrtim_timd_t;
    using C = hrtim_common_t;

    template<pin_t PIN>
    static void setup()
    {

        alternate_t<PIN, HRTIM_CHD1>::template setup<push_pull, high_speed>();
        C::V.OENR |= C::T::OENR_TD1OEN;     // enable D channel 1
    }

    static void set(uint32_t events)
    {
        T::V.SETD1R = events;
    }

    static void rst(uint32_t events)
    {
        T::V.RSTD1R = events;
    }
};

template<> struct sub_tim_channel_traits<TIME, CH1>
{
    using T = hrtim_time_t;
    using C = hrtim_common_t;

    template<pin_t PIN>
    static void setup()
    {

        alternate_t<PIN, HRTIM_CHE1>::template setup<push_pull, high_speed>();
        C::V.OENR |= C::T::OENR_TE1OEN;     // enable E channel 1
    }

    static void set(uint32_t events)
    {
        T::V.SETE1R = events;
    }

    static void rst(uint32_t events)
    {
        T::V.RSTE1R = events;
    }
};

struct hrtim_t
{
    using C = hrtim_common_t;
    using M = hrtim_master_t;

    static void setup()
    {
        rcc_t::V.APB2ENR |= rcc_t::T::APB2ENR_HRTIMEN;
        rcc_t::V.CFGR |= rcc_t::T::CFGR_HRTIMSEL; // sys_clock::freq

        C::V.CR1 = C::T::CR1_RESET_VALUE;   // reset register
        C::V.CR2 = C::T::CR2_RESET_VALUE;   // reset register
        C::V.IER = C::T::IER_RESET_VALUE;   // reset register
        C::V.OENR = C::T::OENR_RESET_VALUE; // reset register
        M::V.MCR = M::V.MCR_RESET_VALUE;    // reset register
    }

    static void reset(uint32_t timers)      // use sub_tim_t as flags
    {
        C::V.CR2 |= timers;
    }

    template<sub_tim_t TIM>
    struct tim
    {
        template<cont_mode_t CONT = continuous>
        static void setup
            ( uint16_t per
            , uint16_t cmp1
            , uint16_t cmp2 = 0
            , uint16_t cmp3 = 0
            , uint16_t cmp4 = 0
            )
        {
            sub_tim_traits<TIM>::template setup<CONT>
                ( per
                , cmp1
                , cmp2
                , cmp3
                , cmp4
                );
        }

        template<channel_t CH, pin_t PIN>
        static void setup()
        {
            sub_tim_channel_traits<TIM, CH>::template setup<PIN>();
        }

        template<channel_t CH>
        static void set(uint32_t events)
        {
            sub_tim_channel_traits<TIM, CH>::set(events);
        }

        template<channel_t CH>
        static void rst(uint32_t events)
        {
            sub_tim_channel_traits<TIM, CH>::rst(events);
        }
    };
};

