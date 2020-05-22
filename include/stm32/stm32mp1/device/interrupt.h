#pragma once

////
//
//      STM32MP1 interrupts
//
////

struct interrupt
{
    static inline void enable() { __asm volatile ("cpsie i"); }
    static inline void disable() { __asm volatile ("cpsid i"); }

    enum interrupt_t
    { RESET = -15
    , NMI = -14
    , HARDFAULT = -13
    , MEMMANAGE = -12
    , BUSFAULT = -11
    , USAGEFAULT = -10
    , SVCALL = -5
    , DEBUG = -4
    , PENDSV = -2
    , SYSTICK = -1
    , WWDG1_IT = 0
    , PVD_AVD = 1
    , TAMP = 2
    , RTC_WKUP_ALARM = 3
    , TZC_IT = 4
    , RCC = 5
    , EXTI0 = 6
    , EXTI1 = 7
    , EXTI2 = 8
    , EXTI3 = 9
    , EXTI4 = 10
    , EXTI5 = 23
    , EXTI10 = 40
    , RTC_TS = 41
    , EXTI11 = 42
    , EXTI6 = 64
    , EXTI7 = 65
    , EXTI8 = 66
    , EXTI9 = 67
    , EXTI12 = 76
    , EXTI13 = 77
    , EXTI14 = 121
    , EXTI15 = 127
    , RCC_WAKEUP = 145
    , TAMP_S = 197
    , RTC_WKUP_ALARM_S = 198
    , RTC_TS_S = 199
    };

    template<interrupt_t INTERRUPT>
    static bool get()
    {
        return helper<nvic_t, INTERRUPT>::get();
    }

    template<interrupt_t INTERRUPT>
    static void set()
    {
        helper<nvic_t, INTERRUPT>::set();
    }

    template<interrupt_t INTERRUPT>
    static void clear()
    {
        helper<nvic_t, INTERRUPT>::clear();
    }

    template<interrupt_t INTERRUPT>
    static bool get_pending()
    {
        return helper<nvic_t, INTERRUPT>::get_pending();
    }

    template<interrupt_t INTERRUPT>
    static void set_pending()
    {
        helper<nvic_t, INTERRUPT>::set_pending();
    }

    template<interrupt_t INTERRUPT>
    static void clear_pending()
    {
        helper<nvic_t, INTERRUPT>::clear_pending();
    }

    template<typename NVIC, interrupt_t I, typename = is_in_range<true>>
    struct helper
    {
        static_assert(always_false_i<I>::value, "no such interrupt");
    };

    template<typename NVIC, interrupt_t I>
    struct helper<NVIC, I, is_in_range<(0 <= I && I < 32)>>
    {
        static bool get() { return NVIC::V.ISER0 & 1 << (I - 0); }
        static void set() { NVIC::V.ISER0 = 1 << (I - 0); }
        static void clear() { NVIC::V.ICER0 = 1 << (I - 0); }
        static bool get_pending() { return NVIC::V.ISPR0 & 1 << (I - 0); }
        static void set_pending() { NVIC::V.ISPR0 = 1 << (I - 0); }
        static void clear_pending() { NVIC::V.ICPR0 = 1 << (I - 0); }
    };

    template<typename NVIC, interrupt_t I>
    struct helper<NVIC, I, is_in_range<(32 <= I && I < 64)>>
    {
        static bool get() { return NVIC::V.ISER1 & 1 << (I - 32); }
        static void set() { NVIC::V.ISER1 = 1 << (I - 32); }
        static void clear() { NVIC::V.ICER1 = 1 << (I - 32); }
        static bool get_pending() { return NVIC::V.ISPR1 & 1 << (I - 32); }
        static void set_pending() { NVIC::V.ISPR1 = 1 << (I - 32); }
        static void clear_pending() { NVIC::V.ICPR1 = 1 << (I - 32); }
    };

    template<typename NVIC, interrupt_t I>
    struct helper<NVIC, I, is_in_range<(64 <= I && I < 96)>>
    {
        static bool get() { return NVIC::V.ISER2 & 1 << (I - 64); }
        static void set() { NVIC::V.ISER2 = 1 << (I - 64); }
        static void clear() { NVIC::V.ICER2 = 1 << (I - 64); }
        static bool get_pending() { return NVIC::V.ISPR2 & 1 << (I - 64); }
        static void set_pending() { NVIC::V.ISPR2 = 1 << (I - 64); }
        static void clear_pending() { NVIC::V.ICPR2 = 1 << (I - 64); }
    };

    template<typename NVIC, interrupt_t I>
    struct helper<NVIC, I, is_in_range<(96 <= I && I < 128)>>
    {
        static bool get() { return NVIC::V.ISER3 & 1 << (I - 96); }
        static void set() { NVIC::V.ISER3 = 1 << (I - 96); }
        static void clear() { NVIC::V.ICER3 = 1 << (I - 96); }
        static bool get_pending() { return NVIC::V.ISPR3 & 1 << (I - 96); }
        static void set_pending() { NVIC::V.ISPR3 = 1 << (I - 96); }
        static void clear_pending() { NVIC::V.ICPR3 = 1 << (I - 96); }
    };

    template<typename NVIC, interrupt_t I>
    struct helper<NVIC, I, is_in_range<(128 <= I && I < 160)>>
    {
        static bool get() { return NVIC::V.ISER4 & 1 << (I - 128); }
        static void set() { NVIC::V.ISER4 = 1 << (I - 128); }
        static void clear() { NVIC::V.ICER4 = 1 << (I - 128); }
        static bool get_pending() { return NVIC::V.ISPR4 & 1 << (I - 128); }
        static void set_pending() { NVIC::V.ISPR4 = 1 << (I - 128); }
        static void clear_pending() { NVIC::V.ICPR4 = 1 << (I - 128); }
    };

    template<typename NVIC, interrupt_t I>
    struct helper<NVIC, I, is_in_range<(160 <= I && I < 192)>>
    {
        static bool get() { return NVIC::V.ISER5 & 1 << (I - 160); }
        static void set() { NVIC::V.ISER5 = 1 << (I - 160); }
        static void clear() { NVIC::V.ICER5 = 1 << (I - 160); }
        static bool get_pending() { return NVIC::V.ISPR5 & 1 << (I - 160); }
        static void set_pending() { NVIC::V.ISPR5 = 1 << (I - 160); }
        static void clear_pending() { NVIC::V.ICPR5 = 1 << (I - 160); }
    };

    template<typename NVIC, interrupt_t I>
    struct helper<NVIC, I, is_in_range<(192 <= I && I < 224)>>
    {
        static bool get() { return NVIC::V.ISER6 & 1 << (I - 192); }
        static void set() { NVIC::V.ISER6 = 1 << (I - 192); }
        static void clear() { NVIC::V.ICER6 = 1 << (I - 192); }
        static bool get_pending() { return NVIC::V.ISPR6 & 1 << (I - 192); }
        static void set_pending() { NVIC::V.ISPR6 = 1 << (I - 192); }
        static void clear_pending() { NVIC::V.ICPR6 = 1 << (I - 192); }
    };
};

