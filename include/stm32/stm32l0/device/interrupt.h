#pragma once

////
//
//      STM32L0 interrupts
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
    , WWDG = 0
    , PVD = 1
    , RTC = 2
    , FLASH = 3
    , RCC = 4
    , EXTI0_1 = 5
    , EXTI2_3 = 6
    , EXTI4_15 = 7
    , TSC = 8
    , DMA1_CHANNEL1 = 9
    , DMA1_CHANNEL2_3 = 10
    , DMA1_CHANNEL4_7 = 11
    , ADC = 12
    , LPTIM1 = 13
    , USART4_USART5 = 14
    , TIM2 = 15
    , TIM3 = 16
    , TIM6 = 17
    , TIM7 = 18
    , TIM21 = 20
    , I2C3 = 21
    , TIM22 = 22
    , I2C1 = 23
    , I2C2 = 24
    , SPI1 = 25
    , SPI2 = 26
    , USART1 = 27
    , USART2 = 28
    , LPUART1 = 29
    , LCD = 30
    , USB = 31
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
};

