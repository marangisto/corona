#pragma once

////
//
//      STM32G0 interrupts
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
        , WWDG = 0 // Window watchdog interrupt
        , PVD = 1 // Power voltage detector interrupt
        , RTC_STAMP = 2 // RTC and TAMP interrupts
        , FLASH = 3 // Flash global interrupt
        , RCC = 4 // RCC global interrupt
        , EXTI0_1 = 5 // EXTI line 0 &amp; 1 interrupt
        , EXTI2_3 = 6 // EXTI line 2 &amp; 3 interrupt
        , EXTI4_15 = 7 // EXTI line 4 to 15 interrupt
        , UCPD1_UCPD2 = 8 // UCPD global interrupt
        , DMA_CHANNEL1 = 9 // DMA channel 1 interrupt
        , DMA_CHANNEL2_3 = 10 // DMA channel 2 &amp; 3 interrupts
        , DMA_CHANNEL4_5_6_7 = 11 // DMA channel 4, 5, 6 &amp; 7 and DMAMUX
        , ADC_COMP = 12 // ADC and COMP interrupts
        , TIM1_BRK_UP_TRG_COMP = 13 // TIM1 break, update, trigger
        , TIM1_CC = 14 // TIM1 Capture Compare interrupt
        , TIM2 = 15 // TIM2 global interrupt
        , TIM3 = 16 // TIM3 global interrupt
        , TIM6_DAC_LPTIM1 = 17 // TIM6 + LPTIM1 and DAC global interrupt
        , TIM7_LPTIM2 = 18 // TIM7 + LPTIM2 global interrupt
        , TIM14 = 19 // TIM14 global interrupt
        , TIM15 = 20 // TIM15 global interrupt
        , TIM16 = 21 // TIM16 global interrupt
        , TIM17 = 22 // TIM17 global interrupt
        , I2C1 = 23 // I2C1 global interrupt
        , I2C2 = 24 // I2C2 global interrupt
        , SPI1 = 25 // SPI1 global interrupt
        , SPI2 = 26 // SPI2 global interrupt
        , USART1 = 27 // USART1 global interrupt
        , USART2 = 28 // USART2 global interrupt
        , USART3_USART4_LPUART1 = 29 // USART3 + USART4 + LPUART1
        , CEC = 30 // CEC global interrupt
        , AES_RNG = 31 // AES and RNG global interrupts
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

