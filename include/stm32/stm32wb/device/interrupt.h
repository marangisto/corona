#pragma once

////
//
//      STM32WB interrupts
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
        , PVD = 1 // PVD through EXTI[16] (C1IMR2[20])
        , RTC_TAMP = 2 // RTC/TAMP/CSS on LSE through EXTI line 19 interrupt
        , RTC_WKUP = 3 // RTC wakeup interrupt through EXTI[19]
        , FLASH = 4 // Flash global interrupt
        , RCC = 5 // RCC global interrupt
        , EXTI0 = 6 // EXTI line 0 interrupt through EXTI[0]
        , EXTI1 = 7 // EXTI line 0 interrupt through EXTI[1]
        , EXTI2 = 8 // EXTI line 0 interrupt through EXTI[2]
        , EXTI3 = 9 // EXTI line 0 interrupt through EXTI[3]
        , EXTI4 = 10 // EXTI line 0 interrupt through EXTI[4]
        , DMA1_CHANNEL1 = 11 // DMA1 Channel1 global interrupt
        , DMA1_CHANNEL2 = 12 // DMA1 Channel2 global interrupt
        , DMA1_CHANNEL3 = 13 // DMA1 Channel3 interrupt
        , DMA1_CHANNEL4 = 14 // DMA1 Channel4 interrupt
        , DMA1_CHANNEL5 = 15 // DMA1 Channel5 interrupt
        , DMA1_CHANNEL6 = 16 // DMA1 Channel6 interrupt
        , DMA1_CHANNEL7 = 17 // DMA1 Channel 7 interrupt
        , ADC1 = 18 // ADC1 global interrupt
        , USB_HP = 19 // USB high priority interrupt
        , USB_LP = 20 // USB low priority interrupt (including USB wakeup)
        , C2SEV = 21 // CPU2 SEV through EXTI[40]
        , COMP = 22 // COMP1 interrupt through EXTI[21:20]
        , EXTI5_9 = 23 // EXTI line [9:5] interrupt through EXTI[9:5]
        , TIM1_BRK = 24 // Timer 1 break interrupt
        , TIM1_UP = 25 // Timer 1 Update
        , TIM1_TRG_COM_TIM17 = 26 // TIM1 Trigger and Commutation interrupts and TIM17 global interrupt
        , TIM1_CC = 27 // TIM1 Capture Compare interrupt
        , TIM2 = 28 // TIM2 global interrupt
        , PKA = 29 // Private key accelerator interrupt
        , I2C1_EV = 30 // I2C1 event interrupt
        , I2C1_ER = 31 // I2C1 error interrupt
        , I2C3_EV = 32 // I2C3 event interrupt
        , I2C3_ER = 33 // I2C3 error interrupt
        , SPI1 = 34 // SPI 1 global interrupt
        , SPI2 = 35 // SPI1 global interrupt
        , USART1 = 36 // USART1 global interrupt
        , LPUART1 = 37 // LPUART1 global interrupt
        , SAI1 = 38 // SAI1 global interrupt
        , TSC = 39 // TSC global interrupt
        , EXTI10_15 = 40 // EXTI line [15:10] interrupt through EXTI[15:10]
        , RTC_ALARM = 41 // RTC Alarms (A and B) interrupt through AIEC
        , CRS_IT = 42 // CRS interrupt
        , PWR_SOTF = 43 // PWR switching on the fly interrupt
        , IPCC_C1_RX_IT = 44 // IPCC CPU1 RX occupied interrupt
        , IPCC_C1_TX_IT = 45 // IPCC CPU1 TX free interrupt
        , HSEM = 46 // Semaphore interrupt 0 to CPU1
        , LPTIM1 = 47 // LPtimer 1 global interrupt
        , LPTIM2 = 48 // LPtimer 2 global interrupt
        , LCD = 49 // LCD global interrupt
        , QUADSPI = 50 // QSPI global interrupt
        , AES1 = 51 // AES1 global interrupt
        , AES2 = 52 // AES2 global interrupt
        , TRUE_RNG = 53 // True random number generator interrupt
        , FPU = 54 // Floating point unit interrupt
        , DMA2_CH1 = 55 // DMA2 channel 1 interrupt
        , DMA2_CH2 = 56 // DMA2 channel 2 interrupt
        , DMA2_CH3 = 57 // DMA2 channel 3 interrupt
        , DMA2_CH4 = 58 // DMA2 channel 4 interrupt
        , DMA2_CH5 = 59 // DMA2 channel 5 interrupt
        , DMA2_CH6 = 60 // DMA2 channel 6 interrupt
        , DMA2_CH7 = 61 // DMA2 channel 7 interrupt
        , DMAMUX1_OVR = 62 // DMAMUX1 overrun interrupt
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

