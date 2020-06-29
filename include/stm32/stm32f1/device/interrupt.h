#pragma once

////
//
//      STM32F1 interrupts
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
        , PVD = 1 // PVD through EXTI line detection interrupt
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
        , ADC1_2 = 18 // ADC1 and ADC2 global interrupt
        , USB_HP_CAN_TX = 19 // USB High Priority or CAN TX
        , USB_LP_CAN_RX0 = 20 // USB Low Priority or CAN RX0
        , CAN1_RX1 = 21 // CAN1 RX1 interrupts
        , CAN1_SCE = 22 // CAN1 SCE interrupt
        , EXTI9_5 = 23 // EXTI Line[9:5] interrupts
        , TIM1_BRK_TIM15 = 24 // TIM1 Break interrupt and TIM15 global interrupt
        , TIM1_UP_TIM16 = 25 // TIM1 Update interrupt and TIM16 global interrupt
        , TIM1_TRG_COM_TIM17 = 26 // TIM1 Trigger and Commutation interrupts and TIM17 global interrupt
        , TIM1_CC = 27 // TIM1 Capture Compare interrupt
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
        , USBWAKEUP = 42 // USB Device FS Wakeup through EXTI line interrupt
        , TIM8_BRK = 43 // TIM8 Break interrupt
        , TIM8_UP = 44 // TIM8 Update interrupt
        , TIM8_TRG_COM = 45 // TIM8 Trigger and Commutation
        , TIM8_CC = 46 // TIM8 Capture Compare interrupt
        , ADC3 = 47 // ADC3 global interrupt
        , FSMC = 48 // FSMC global interrupt
        , SDIO = 49 // SDIO global interrupt
        , TIM5 = 50 // TIM5 global interrupt
        , SPI3 = 51 // SPI3 global interrupt
        , UART4 = 52 // UART4 global interrupt
        , UART5 = 53 // UART5 global interrupt
        , TIM6_DAC = 54 // TIM6 global and DAC underrun interrupts
        , TIM7 = 55 // TIM7 global interrupt
        , DMA2_CHANNEL1 = 56 // DMA2 Channel1 global interrupt
        , DMA2_CHANNEL2 = 57 // DMA2 Channel2 global interrupt
        , DMA2_CHANNEL3 = 58 // DMA2 Channel3 global interrupt
        , DMA2_CHANNEL4_5 = 59 // DMA2 Channel4 and DMA2 Channel5 global interrupt
        , DMA2_CHANNEL5 = 60 // DMA2 Channel5 global interrupt
        , ETH = 61 // Ethernet global interrupt
        , ETH_WKUP = 62 // Ethernet Wakeup through EXTI line interrupt
        , CAN2_TX = 63 // CAN2 TX interrupts
        , CAN2_RX0 = 64 // CAN2 RX0 interrupts
        , CAN2_RX1 = 65 // CAN2 RX1 interrupts
        , CAN2_SCE = 66 // CAN2 SCE interrupt
        , OTG_FS = 67 // USB On The Go FS global interrupt
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
};

