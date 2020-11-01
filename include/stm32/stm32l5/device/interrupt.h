#pragma once

////
//
//      STM32L5 interrupts
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
        , PVD_PVM = 1 // PVD/PVM1/PVM2/PVM3/PVM4 through EXTI
        , RTC = 2 // RTC global interrupts (EXTI line 17)
        , RTC_S = 3 // RTC secure global interrupts (EXTI line 18)
        , TAMP = 4 // TAMPTamper global interrupt (EXTI line 19)
        , TAMP_S = 5 // Tamper secure global interrupt (EXTI line 20)
        , FLASH = 6 // Flash global interrupt
        , FLASH_S = 7 // Flash memory secure global interrupt
        , GTZC = 8 // TZIC secure global interrupt
        , RCC = 9 // RCC global interrupt
        , RCC_S = 10 // RCC SECURE GLOBAL INTERRUPT
        , EXTI0 = 11 // EXTI line0 interrupt
        , EXTI1 = 12 // EXTI line1 interrupt
        , EXTI2 = 13 // EXTI line2 interrupt
        , EXTI3 = 14 // EXTI line3 interrupt
        , EXTI4 = 15 // EXTI line4 interrupt
        , EXTI5 = 16 // EXTI line5 interrupt
        , EXTI6 = 17 // EXTI line6 interrupt
        , EXTI7 = 18 // EXTI line7 interrupt
        , EXTI8 = 19 // EXTI line8 interrupt
        , EXTI9 = 20 // EXTI line9 interrupt
        , EXTI10 = 21 // EXTI line10 interrupt
        , EXTI11 = 22 // EXTI line11 interrupt
        , EXTI12 = 23 // EXTI line12 interrupt
        , EXTI13 = 24 // EXTI line13 interrupt
        , EXTI14 = 25 // EXTI line14 interrupt
        , EXTI15 = 26 // EXTI line15 interrupt
        , DMAMUX1_OVR = 27 // DMAMUX overrun interrupt
        , DMAMUX1_OVR_S = 28 // DMAMUX1 secure overRun interrupt
        , DMA1_CHANNEL1 = 29 // DMA1 Channel1 global interrupt
        , DMA1_CHANNEL2 = 30 // DMA1 Channel2 global interrupt
        , DMA1_CHANNEL3 = 31 // DMA1 Channel3 interrupt
        , DMA1_CHANNEL4 = 32 // DMA1 Channel4 interrupt
        , DMA1_CHANNEL5 = 33 // DMA1 Channel5 interrupt
        , DMA1_CHANNEL6 = 34 // DMA1 Channel6 interrupt
        , DMA1_CHANNEL7 = 35 // DMA1 Channel 7 interrupt
        , DMA1_CHANNEL8 = 36 // DMA1_Channel8
        , ADC1_2 = 37 // ADC1_2 global interrupt
        , DAC = 38 // DAC global interrupt
        , FDCAN1_IT0 = 39 // FDCAN1 Interrupt 0
        , FDCAN1_IT1 = 40 // FDCAN1 Interrupt 1
        , TIM1_BRK = 41 // TIM1 Break
        , TIM1_UP = 42 // TIM1 Update
        , TIM1_TRG_COM = 43 // TIM1 Trigger and Commutation
        , TIM1_CC = 44 // TIM1 Capture Compare interrupt
        , TIM2 = 45 // TIM2 global interrupt
        , TIM3 = 46 // TIM3 global interrupt
        , TIM4 = 47 // TIM4 global interrupt
        , TIM5 = 48 // TIM5 global interrupt
        , TIM6 = 49 // TIM6 global interrupt
        , TIM7 = 50 // TIM7 global interrupt
        , TIM8_BRK = 51 // TIM8 Break Interrupt
        , TIM8_UP = 52 // TIM8 Update Interrupt
        , TIM8_TRG_COM = 53 // TIM8 Trigger and Commutation Interrupt
        , TIM8_CC = 54 // TIM8 Capture Compare Interrupt
        , I2C1_EV = 55 // I2C1 event interrupt
        , I2C1_ER = 56 // I2C1 error interrupt
        , I2C2_EV = 57 // I2C2 event interrupt
        , I2C2_ER = 58 // I2C2 error interrupt
        , SPI1 = 59 // SPI1 global interrupt
        , SPI2 = 60 // SPI2 global interrupt
        , USART1 = 61 // USART1 global interrupt
        , USART2 = 62 // USART2 global interrupt
        , USART3 = 63 // USART3 global interrupt
        , UART4 = 64 // UART4 global interrupt
        , UART5 = 65 // UART5 global interrupt
        , LPUART1 = 66 // LPUART1 global interrupt
        , LPTIM1 = 67 // LP TIM1 interrupt
        , LPTIM2 = 68 // LP TIM2 interrupt
        , TIM15 = 69 // TIM15 global interrupt
        , TIM16 = 70 // TIM16 global interrupt
        , TIM17 = 71 // TIM17 global interrupt
        , COMP = 72 // COMP1 and COMP2 interrupts
        , USB_FS = 73 // USB FS global interrupt
        , CRS = 74 // Clock recovery system global interrupt
        , FMC = 75 // FMC global interrupt
        , OCTOSPI1 = 76 // OCTOSPI1 global interrupt
        , SDMMC1 = 78 // SDMMC1 global interrupt
        , DMA2_CH1 = 80 // DMA2_CH1
        , DMA2_CH2 = 81 // DMA2_CH2
        , DMA2_CH3 = 82 // DMA2_CH3
        , DMA2_CH4 = 83 // DMA2_CH4
        , DMA2_CH5 = 84 // DMA2_CH5
        , DMA2_CH6 = 85 // DMA2_CH6
        , DMA2_CH7 = 86 // DMA2_CH7
        , DMA2_CH8 = 87 // DMA2_CH8
        , I2C3_EV = 88 // I2C3 event interrupt
        , I2C3_ER = 89 // I2C3 error interrupt
        , SAI1 = 90 // SAI1 global interrupt
        , SAI2 = 91 // SAI2 global interrupt
        , TSC = 92 // TSC global interrupt
        , AES = 93 // AES global interrupts
        , RNG = 94 // RNG global interrupt
        , HASH = 96 // HASH interrupt
        , PKA = 97 // PKA global interrupts
        , LPTIM3 = 98 // LPTIM3
        , SPI3 = 99 // SPI3
        , I2C4_ER = 100 // I2C4 error interrupt
        , I2C4_EV = 101 // I2C4 event interrupt
        , DFSDM1_FLT0 = 102 // DFSDM1_FLT0 global interrupt
        , DFSDM1_FLT1 = 103 // DFSDM1_FLT1 global interrupt
        , DFSDM1_FLT2 = 104 // DFSDM1_FLT2 global interrupt
        , DFSDM1_FLT3 = 105 // DFSDM1_FLT3 global interrupt
        , UCPD1 = 106 // UCPD global interrupt
        , ICACHE = 107 // ICACHE
        , OTFDEC1 = 108 // OTFDEC1 secure global interrupt
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

