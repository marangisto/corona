#pragma once

////
//
//      STM32F0 interrupts
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
        , PVD = 1 // PVD and VDDIO2 supply comparator interrupt
        , RTC = 2 // RTC interrupts
        , FLASH = 3 // Flash global interrupt
        , RCC_CRS = 4 // RCC and CRS global interrupts
        , EXTI0_1 = 5 // EXTI Line[1:0] interrupts
        , EXTI2_3 = 6 // EXTI Line[3:2] interrupts
        , EXTI4_15 = 7 // EXTI Line15 and EXTI4 interrupts
        , TSC = 8 // Touch sensing interrupt
        , DMA1_CH1 = 9 // DMA1 channel 1 interrupt
        , DMA1_CH2_3_DMA2_CH1_2 = 10 // DMA1 channel 2 and 3 and DMA2 channel 1 and 2 interrupt
        , DMA1_CH4_5_6_7_DMA2_CH3_4_5 = 11 // DMA1 channel 4, 5, 6 and 7 and DMA2 channel 3, 4 and 5 interrupts
        , ADC_COMP = 12 // ADC and comparator interrupts
        , TIM1_BRK_UP_TRG_COM = 13 // TIM1 break, update, trigger and commutation interrupt
        , TIM1_CC = 14 // TIM1 Capture Compare interrupt
        , TIM2 = 15 // TIM2 global interrupt
        , TIM3 = 16 // TIM3 global interrupt
        , TIM6_DAC = 17 // TIM6 global interrupt and DAC underrun interrupt
        , TIM7 = 18 // TIM7 global interrupt
        , TIM14 = 19 // TIM14 global interrupt
        , TIM15 = 20 // TIM15 global interrupt
        , TIM16 = 21 // TIM16 global interrupt
        , TIM17 = 22 // TIM17 global interrupt
        , I2C1 = 23 // I2C1 global interrupt
        , I2C2 = 24 // I2C2 global interrupt
        , SPI1 = 25 // SPI1_global_interrupt
        , SPI2 = 26 // SPI2 global interrupt
        , USART1 = 27 // USART1 global interrupt
        , USART2 = 28 // USART2 global interrupt
        , USART3_4_5_6_7_8 = 29 // USART3, USART4, USART5, USART6, USART7, USART8 global interrupt
        , CEC_CAN = 30 // CEC and CAN global interrupt
        , USB = 31 // USB global interrupt
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

