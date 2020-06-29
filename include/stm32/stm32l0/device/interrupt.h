#pragma once

////
//
//      STM32L0 interrupts
//
///

struct interrupt
{
    static inline void enable() { __asm volatile ("cpsie i"); }
    static inline void disable() { __asm volatile ("cpsid i"); }

    enum interrupt_t
        { RESET = -15 // Reset [fixed]
        , NMI = -14 // Non maskable interrupt [fixed]
        , HARDFAULT = -13 // All class of fault [fixed]
        , MEMMANAGE = -12 // Memory management [settable]
        , BUSFAULT = -11 // Pre-fetch fault, memory access fault [settable]
        , USAGEFAULT = -10 // Undefined instruction or illegal state [settable]
        , SVCALL = -5 // System service call via SWI instruction [settable]
        , DEBUG = -4 // Monitor Debug Monitor [settable]
        , PENDSV = -2 // Pendable request for system service [settable]
        , SYSTICK = -1 // System tick timer [settable]
        , WWDG = 0 // Window Watchdog interrupt
        , PVD = 1 // PVD through EXTI line detection
        , RTC = 2 // RTC global interrupt
        , FLASH = 3 // Flash global interrupt
        , RCC = 4 // RCC global interrupt
        , EXTI0_1 = 5 // EXTI Line[1:0] interrupts
        , EXTI2_3 = 6 // EXTI Line[3:2] interrupts
        , EXTI4_15 = 7 // EXTI Line15 and EXTI4 interrupts
        , TSC = 8 // Touch sensing interrupt
        , DMA1_CHANNEL1 = 9 // DMA1 Channel1 global interrupt
        , DMA1_CHANNEL2_3 = 10 // DMA1 Channel2 and 3 interrupts
        , DMA1_CHANNEL4_7 = 11 // DMA1 Channel4 to 7 interrupts
        , ADC_COMP = 12 // ADC and comparator 1 and 2
        , LPTIM1 = 13 // LPTIMER1 interrupt through EXTI29
        , USART4_USART5 = 14 // USART4/USART5 global interrupt
        , TIM2 = 15 // TIM2 global interrupt
        , TIM3 = 16 // TIM3 global interrupt
        , TIM6_DAC = 17 // TIM6 global interrupt and DAC
        , TIM7 = 18 // TIM7 global interrupt and DAC
        , TIM21 = 20 // TIMER21 global interrupt
        , I2C3 = 21 // I2C3 global interrupt
        , TIM22 = 22 // TIMER22 global interrupt
        , I2C1 = 23 // I2C1 global interrupt
        , I2C2 = 24 // I2C2 global interrupt
        , SPI1 = 25 // SPI1_global_interrupt
        , SPI2 = 26 // SPI2 global interrupt
        , USART1 = 27 // USART1 global interrupt
        , USART2 = 28 // USART2 global interrupt
        , AES_RNG_LPUART1 = 29 // AES global interrupt RNG global interrupt and LPUART1 global interrupt through
        , LCD = 30 // LCD global interrupt
        , USB = 31 // USB event interrupt through EXTI18
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

