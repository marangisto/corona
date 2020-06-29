#pragma once

////
//
//      STM32F3 interrupts
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
        , WWDG_IRQ = 0 // Window Watchdog interrupt
        , PVD_IRQ = 1 // Power voltage detector through EXTI line detection interrupt
        , TAMP_STAMP = 2 // Tamper and TimeStamp interrupts
        , RTC_WKUP_IRQ = 3 // RTC
        , FLASH_IRQ = 4 // Flash global interrupt
        , RCC_IRQ = 5 // RCC global interrupt
        , EXTI0_IRQ = 6 // EXTI Line 0 interrupt
        , EXTI1_IRQ = 7 // EXTI Line1 interrupt
        , EXTI2_RI_IRQ = 8 // EXTI Line 2 and routing interface interrupt
        , EXTI3_IRQ = 9 // EXTI Line1 interrupt
        , EXTI4_IRQ = 10 // EXTI Line4 interrupt
        , DMA1_CH1_IRQ = 11 // DMA1 channel 1 interrupt
        , DMA1_CH2_IRQ = 12 // DMA1 channel 2 interrupt
        , DMA1_CH3_IRQ = 13 // DMA1 channel 3 interrupt
        , DMA1_CH4_IRQ = 14 // DMA1 channel 4 interrupt
        , DMA1_CH5_IRQ = 15 // DMA1 channel 5 interrupt
        , DMA1_CH6_IRQ = 16 // DMA1 channel 6 interrupt
        , DMA1_CH7_IRQ = 17 // DMA1 channel 7 interrupt
        , ADC1_IRQ = 18 // ADC1 interrupt
        , USB_HP_CAN_TX = 19 // USB High Priority/CAN_TX interrupts
        , USB_LP_CAN_RX0 = 20 // USB Low Priority/CAN_RX0 interrupts
        , CAN_RXI_IRQ = 21 // CAN_RXI interrupt
        , CAN_SCE_IRQ = 22 // CAN_SCE interrupt
        , EXTI5_9_IRQ = 23 // EXTI Line[9:5] interrupts
        , TIM1_BRK_TIM15 = 24 // TIM1 Break/TIM15 global interruts
        , TIM1_UP_TIM16 = 25 // TIM1 Update/TIM16 global interrupts
        , TIM1_TRG_COM_TIM17 = 26 // TIM1 trigger and commutation/TIM17 interrupts
        , TIM18_DAC3_IRQ = 27 // Timer 18 global interrupt/DAC3 underrun interrupt
        , TIM2_IRQ = 28 // Timer 2 global interrupt
        , TIM3_IRQ = 29 // Timer 3 global interrupt
        , TIM4_IRQ = 30 // Timer 4 global interrupt
        , I2C1_EV_EXTI23 = 31 // I2C1 event interrupt and EXTI Line23 interrupt
        , I2C1_ER_IRQ = 32 // I2C1_ER
        , I2C2_EV_EXTI24 = 33 // I2C2 event interrupt &amp; EXTI Line24 interrupt
        , I2C2_ER_IRQ = 34 // I2C2_ER
        , SPI1_IRQ = 35 // SPI1 global interrupt
        , SPI2_IRQ = 36 // SPI2 global interrupt
        , USART1_EXTI25 = 37 // USART1 global interrupt and EXTI Line 25 interrupt
        , USART2_EXTI26 = 38 // USART2 global interrupt and EXTI Line 26 interrupt
        , USART3_EXTI28 = 39 // USART3 global interrupt and EXTI Line 28 interrupt
        , EXTI15_10_IRQ = 40 // EXTI Line[15:10] interrupts
        , RTC_ALARM_IT_IRQ = 41 // RTC alarm interrupt
        , USB_WKUP = 42 // USB wakeup from Suspend
        , TIM12_IRQ = 43 // Timer 12 global interrupt
        , TIM13_IRQ = 44 // Timer 13 global interrupt
        , TIM8_TRG_COM = 45 // TIM8 Trigger and commutation interrupts
        , TIM8_CC = 46 // TIM8 capture compare interrupt
        , ADC3 = 47 // ADC3 global interrupt
        , FMC = 48 // FSMC global interrupt
        , TIM5_IRQ = 50 // Timer 5 global interrupt
        , SPI3_IRQ = 51 // SPI3 global interrupt
        , UART4_EXTI34 = 52 // UART4 global and EXTI Line 34 interrupts
        , UART5_EXTI35 = 53 // UART5 global and EXTI Line 35 interrupts
        , TIM6_DACUNDER = 54 // TIM6 global and DAC12 underrun interrupts
        , TIM7_DAC2 = 55 // TIM7 global interrupt
        , DMA2_CHANNEL1 = 56 // DMA2 channel1 global interrupt
        , DMA2_CHANNEL2 = 57 // DMA2 channel2 global interrupt
        , DMA2_CHANNEL3 = 58 // DMA2 channel3 global interrupt
        , DMA2_CHANNEL4 = 59 // DMA2 channel4 global interrupt
        , DMA2_CHANNEL5 = 60 // DMA2 channel5 global interrupt
        , ADC_SD1_IRQ = 61 // ADC sigma delta 1 (SDADC1) global interrupt
        , ADC_SD2_IRQ = 62 // ADC sigma delta 2 (SDADC2) global interrupt
        , ADC_SD3_IRQ = 63 // ADC sigma delta 3 (SDADC3) global interrupt
        , COMP2_IRQ = 64 // COMP2 interrupt combined with EXTI Lines
        , COMP4_6_IRQ = 65 // COMP4 &amp; COMP6 interrupts combined with
        , COMP7 = 66 // COMP7 interrupt combined with EXTI Line 33 interrupt
        , I2C3_EV_EXTI27_IRQ = 72 // I2C3 event interrupt &amp; EXTI Line27 interrupt
        , I2C3_ER_IRQ = 73 // I2C3 error interrupt
        , USB_HP_IRQ = 74 // USB high priority interrupt
        , USB_LP_IRQ = 75 // USB low priority interrupt
        , USB_WAKEUP_IRQ = 76 // USB wakeup interrupt
        , TIM20_BRK = 77 // TIM20 Break interrupt
        , TIM19_IRQ = 78 // Timer 19 global interrupt
        , TIM20_TRG_COM = 79 // TIM20 Trigger and Commutation interrupt
        , TIM20_CC = 80 // TIM20 Capture Compare interrupt
        , FPU = 81 // Floating point interrupt
        , SPI4 = 84 // SPI4 Global interrupt
        , HRTIM1_MST = 103 // HRTIM1 master timer interrupt
        , HRTIM1_TIMA = 104 // HRTIM1 timer A interrupt
        , HRTIM_TIMB = 105 // HRTIM1 timer B interrupt
        , HRTIM1_TIMC = 106 // HRTIM1 timer C interrupt
        , HRTIM1_TIMD = 107 // HRTIM1 timer D interrupt
        , HRTIM_TIME = 108 // HRTIM1 timer E interrupt
        , HRTIM1_FLT = 109 // HRTIM1 fault interrupt
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
};

