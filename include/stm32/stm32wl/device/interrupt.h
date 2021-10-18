#pragma once

////
//
//      STM32WL interrupts
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
        , TZIC_ILA = 0 // Security Interrupt controller illegal access interrupt
        , PVD_PVM_3 = 1 // PVD through EXTI[16], PVM[3] through EXTI[34]
        , TAMP_RTCSTAMP_LSECSS_RTCALARM_RTCSSRU_RTCWKUP = 2 // Tamper, TimeStamp, LSECSS,alarm A and B,SSR underflow,RTC wakeup interrupt
        , FLASH_RCC_C1SEV = 3 // Flash memory global interrupt and Flash memory ECC single error interrupt,RCC global interrupt,CPU1 SEV through EXTI
        , EXTI1_0 = 4 // EXTI line 0 interrupt through EXTI
        , EXTI3_2 = 5 // EXTI line 1 interrupt through EXTI
        , EXTI15_4 = 6 // EXTI line 2 interrupt through EXTI
        , ADC_COMP_DAC = 7 // ADC and DAC global interrupt,COMP1 and COMP2 interrupt through EXTI
        , DMA1_CH3_1 = 8 // DMA1 channel 3:1 secure and non-secure interrupt (C2IMR2[2:0])
        , DMA1_CH7_4 = 9 // DMA1 channel 7:4 secure and non-secure interrupt (C2IMR2[6:3])
        , DMA2_CH7_1_DMAMUX1_OVR = 10 // DMA2 channel 7:1 secure and non-secure interrupt (C2IMR2[14:8]),DMAMUX1 overrun interrupt (C2IMR2[15])
        , DMA1_CH1 = 11 // DMA1 channel 1 non-secure interrupt
        , DMA1_CH2 = 12 // DMA1 channel 2 non-secure interrupt
        , DMA1_CH3 = 13 // DMA1 channel 3 non-secure interrupt
        , TIM1_BRK_TIM1_UP_TIM1_TRG_COM_TIM1_CC = 14 // Timer 1 break, update, trigger and communication,capture compare interrupt
        , DMA1_CH5 = 15 // DMA1 channel 5 non-secure interrupt
        , DMA1_CH6 = 16 // DMA1 channel 6 non-secure interrupt
        , DMA1_CH7 = 17 // DMA1 channel 7 non-secure interrupt
        , IPCC_C2_RX_IT_IPCC_C2_TX_IT = 18 // IPCC CPU2 RX occupied interrupt, IPCC CPU2 TX free interrupt
        , HSEM = 19 // Semaphore interrupt 1 to CPU2
        , PWR_C2H_C2SEV = 20 // PWR CPU2 HOLD wakeup interrupt ,CPU2 SEV through EXTI
        , AES_PKA = 21 // AES global interrupt , Private key accelerator interrupt
        , I2C1_EV_I2C1_ER = 22 // I2C1 event interrupt,I2C1 error interrupt
        , I2C2_EV_I2C2_ER = 23 // I2C2 event interrupt , I2C2 error interrupt
        , I2C3_EV_I2C3_ER = 24 // I2C3 event interrupt , I2C2 error interrupt
        , TIM1_TRG_COM = 25 // Timer 1 trigger and communication
        , TIM1_CC = 26 // Timer 1 capture compare interrupt
        , USART1 = 27 // USART1 global interrupt
        , USART2 = 28 // USART2 global interrupt
        , LPUART1 = 29 // LPUART1 global interrupt
        , SUBGHZSPI = 30 // Sub-GHz radio SPI global interrupt
        , RADIO_IRQ_BUSY = 31 // Radio IRQs, RFBUSY interrupt through EXTI
        , I2C2_EV = 32 // I2C2 event interrupt
        , I2C2_ER = 33 // I2C2 error interrupt
        , SPI1 = 34 // SPI 1 global interrupt
        , SPI2S2 = 35 // SPI2S2 global interrupt
        , USART1 = 36 // USART1 global interrupt
        , USART2 = 37 // USART2 global interrupt
        , LPUART1 = 38 // LPUART1 global interrupt
        , LPTIM1 = 39 // LPtimer 1 global interrupt
        , LPTIM2 = 40 // LPtimer 2 global interrupt
        , EXTI15_10 = 41 // EXTI line 15_10] interrupt through EXTI
        , RTC_ALARM = 42 // RTC alarms A and B interrupt
        , LPTIM3 = 43 // LPtimer 3 global interrupt
        , SUBGHZSPI = 44 // Sub-GHz radio SPI global interrupt
        , IPCC_C1_RX_IT = 45 // IPCC CPU1 RX occupied interrupt
        , IPCC_C1_TX_IT = 46 // IPCC CPU1 TX free interrupt
        , HSEM = 47 // Semaphore interrupt 0 to CPU1
        , I2C3_EV = 48 // I2C3 event interrupt
        , I2C3_ER = 49 // I2C3 error interrupt
        , RADIO_IRQ_BUSY = 50 // Radio IRQs, RFBUSY interrupt through EXTI
        , AES = 51 // AES global interrupt
        , TRUE_RNG = 52 // True random number generator interrupt
        , PKA = 53 // Private key accelerator interrupt
        , DMA2_CH1 = 54 // DMA2 channel 1 non-secure interrupt
        , DMA2_CH2 = 55 // DMA2 channel 2 non-secure interrupt
        , DMA2_CH3 = 56 // DMA2 channel 3 non-secure interrupt
        , DMA2_CH4 = 57 // DMA2 channel 4 non-secure interrupt
        , DMA2_CH5 = 58 // DMA2 channel 5 non-secure interrupt
        , DMA2_CH6 = 59 // DMA2 channel 6 non-secure interrupt
        , DMA2_CH7 = 60 // DMA2 channel 7 non-secure interrupt
        , DMAMUX1_OVR = 61 // DMAMUX1 overrun interrupt
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

