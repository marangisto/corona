#pragma once

////
//
//      STM32L1 interrupts
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
        , PVD = 1 // PVD through EXTI Line detection interrupt
        , TAMPER_STAMP = 2 // Tamper and TimeStamp through EXTI line interrupts
        , RTC_WKUP = 3 // RTC Wakeup through EXTI line interrupt
        , FLASH = 4 // Flash global interrupt
        , RCC = 5 // RCC global interrupt
        , EXTI0 = 6 // EXTI Line0 interrupt
        , EXTI1 = 7 // EXTI Line1 interrupt
        , EXTI2 = 8 // EXTI Line2 interrupt
        , EXTI3 = 9 // EXTI Line3 interrupt
        , EXTI4 = 10 // EXTI Line4 interrupt
        , DMA1_CHANNEL1 = 11 // DMA1 Channel1 global interrupt
        , DMA1_CHANNEL2 = 12 // DMA1 Channel2 global interrupt
        , DMA1_CHANNEL3 = 13 // DMA1 Channel3 global interrupt
        , DMA1_CHANNEL4 = 14 // DMA1 Channel4 global interrupt
        , DMA1_CHANNEL5 = 15 // DMA1 Channel5 global interrupt
        , DMA1_CHANNEL6 = 16 // DMA1 Channel6 global interrupt
        , DMA1_CHANNEL7 = 17 // DMA1 Channel7 global interrupt
        , ADC1 = 18 // ADC1 global interrupt
        , USB_HP = 19 // USB High priority interrupt
        , USB_LP = 20 // USB Low priority interrupt
        , DAC = 21 // DAC interrupt
        , COMP_CA = 22 // Comparator wakeup through EXTI line (21 and 22) interrupt/Channel acquisition interrupt
        , EXTI9_5 = 23 // EXTI Line[9:5] interrupts
        , LCD = 24 // LCD global interrupt
        , TIM9 = 25 // TIM9 global interrupt
        , TIM10 = 26 // TIM10 global interrupt
        , TIM11 = 27 // TIM11 global interrupt
        , TIM2 = 28 // TIM2 global interrupt
        , TIM3 = 29 // TIM3 global interrupt
        , TIM4 = 30 // TIM4 global interrupt
        , I2C1_EV = 31 // I2C1 event interrupt
        , I2C1_ER = 32 // I2C1 error interrupt
        , I2C2_EV = 33 // I2C2 event interrupt
        , I2C2_ER = 34 // I2C2 error interrupt
        , SPI1 = 35 // SPI1 global interrupt
        , SPI2 = 36 // SPI2 global interrupt
        , USART1 = 37 // USART1 global interrupt
        , USART2 = 38 // USART2 global interrupt
        , USART3 = 39 // USART3 global interrupt
        , EXTI15_10 = 40 // EXTI Line[15:10] interrupts
        , RTC_ALARM = 41 // RTC Alarms (A and B) through EXTI line interrupt
        , USB_FS_WKUP = 42 // USB Device FS Wakeup through EXTI line interrupt
        , TIM6 = 43 // TIM6 global interrupt
        , TIM7 = 44 // TIM7 global interrupt
        , SDIO = 45 // SDIO Global interrupt
        , TIM5 = 46 // TIM5 Global interrupt
        , SPI3 = 47 // SPI3 global interrupt
        , USART4 = 48 // USART4 global interrupt
        , USART5 = 49 // USART5 global interrupt
        , DMA2_CH1 = 50 // DMA2 Channel 1 interrupt
        , DMA2_CH2 = 51 // DMA2 Channel 2 interrupt
        , DMA2_CH3 = 52 // DMA2 Channel 3 interrupt
        , DMA2_CH4 = 53 // DMA2 Channel 4 interrupt
        , DMA2_CH5 = 54 // DMA2 Channel 5 interrupt
        , AES = 55 // AES global interrupt
        , COMP_ACQ = 56 // Comparator Channel Acquisition interrupt
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
};

