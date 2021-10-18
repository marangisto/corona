#pragma once

////
//
//      STM32F4 interrupts
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
        , EXTI16_PVD = 1 // EXTI Line 16 interrupt /PVD through EXTI line detection interrupt
        , TAMP_STAMP = 2 // Tamper and TimeStamp interrupts through the EXTI line
        , EXTI22_RTC_WKUP = 3 // EXTI Line 22 interrupt /RTC Wakeup interrupt through the EXTI line
        , FLASH = 4 // FLASH global interrupt
        , RCC = 5 // RCC global interrupt
        , EXTI0 = 6 // EXTI Line0 interrupt
        , EXTI1 = 7 // EXTI Line1 interrupt
        , EXTI2 = 8 // EXTI Line2 interrupt
        , EXTI3 = 9 // EXTI Line3 interrupt
        , EXTI4 = 10 // EXTI Line4 interrupt
        , DMA1_STREAM0 = 11 // DMA1 Stream0 global interrupt
        , DMA1_STREAM1 = 12 // DMA1 Stream1 global interrupt
        , DMA1_STREAM2 = 13 // DMA1 Stream2 global interrupt
        , DMA1_STREAM3 = 14 // DMA1 Stream3 global interrupt
        , DMA1_STREAM4 = 15 // DMA1 Stream4 global interrupt
        , DMA1_STREAM5 = 16 // DMA1 Stream5 global interrupt
        , DMA1_STREAM6 = 17 // DMA1 Stream6 global interrupt
        , ADC = 18 // ADC1 global interrupt
        , CAN1_TX = 19 // CAN1 TX interrupts
        , CAN1_RX0 = 20 // CAN1 RX0 interrupts
        , CAN1_RX1 = 21 // CAN1 RX1 interrupts
        , CAN1_SCE = 22 // CAN1 SCE interrupt
        , EXTI9_5 = 23 // EXTI Line[9:5] interrupts
        , TIM1_BRK_TIM9 = 24 // TIM1 Break interrupt and TIM9 global interrupt
        , TIM1_UP_TIM10 = 25 // TIM1 Update interrupt and TIM10 global interrupt
        , TIM1_TRG_COM_TIM11 = 26 // TIM1 Trigger and Commutation interrupts and TIM11 global interrupt
        , TIM1_CC = 27 // TIM1 Capture Compare interrupt
        , TIM2 = 28 // TIM2 global interrupt
        , TIM3 = 29 // TIM3 global interrupt
        , TIM4 = 30 // TIM4 global interrupt
        , I2C1_EVT = 31 // I2C1 event interrupt
        , I2C1_ERR = 32 // I2C1 error interrupt
        , I2C2_EVT = 33 // I2C2 event interrupt
        , I2C2_ERR = 34 // I2C2 error interrupt
        , SPI1 = 35 // SPI1 global interrupt
        , SPI2 = 36 // SPI2 global interrupt
        , USART1 = 37 // USART1 global interrupt
        , USART2 = 38 // USART2 global interrupt
        , USART3 = 39 // USART3 global interrupt
        , EXTI15_10 = 40 // EXTI Line[15:10] interrupts
        , EXTI17_RTC_ALARM = 41 // EXTI Line 17 interrupt / RTC Alarms (A and B) through EXTI line interrupt
        , EXTI18_OTG_FS_WKUP = 42 // EXTI Line 18 interrupt / USBUSB On-The-Go FS Wakeup through EXTI line interrupt
        , TIM8_BRK_TIM12 = 43 // TIM8 Break interrupt and TIM12 global interrupt
        , TIM8_UP_TIM13 = 44 // TIM8 Update interrupt and TIM13 global interrupt
        , TIM8_TRG_COM_TIM14 = 45 // TIM8 Trigger and Commutation interrupts and TIM14 global interrupt
        , TIM8_CC = 46 // TIM8 Capture Compare interrupt
        , DMA1_STREAM7 = 47 // DMA1 Stream7 global interrupt
        , FSMC = 48 // FSMC global interrupt
        , SDIO = 49 // SDIO global interrupt
        , TIM5 = 50 // TIM5 global interrupt
        , SPI3 = 51 // SPI3 global interrupt
        , USART4 = 52 // UART 4 global interrupt
        , UART5 = 53 // UART5 global interrupt
        , TIM6_GLB_IT_DAC1_DAC2 = 54 // TIM6 global and DAC12 underrun interrupts
        , TIM7 = 55 // TIM7 global interrupt
        , DMA2_STREAM0 = 56 // DMA2 Stream0 global interrupt
        , DMA2_STREAM1 = 57 // DMA2 Stream1 global interrupt
        , DMA2_STREAM2 = 58 // DMA2 Stream2 global interrupt
        , DMA2_STREAM3 = 59 // DMA2 Stream3 global interrupt
        , DMA2_STREAM4 = 60 // DMA2 Stream4 global interrupt
        , DFSDM1_FLT0 = 61 // SD filter0 global interrupt
        , DFSDM1_FLT1 = 62 // SD filter1 global interrupt
        , CAN2_TX = 63 // CAN2 TX interrupts
        , CAN2_RX0 = 64 // CAN2 RX0 interrupts
        , CAN2_RX1 = 65 // CAN2 RX1 interrupts
        , CAN2_SCE = 66 // CAN2 SCE interrupt
        , OTG_FS = 67 // USB On The Go FS global interrupt
        , DMA2_STREAM5 = 68 // DMA2 Stream5 global interrupt
        , DMA2_STREAM6 = 69 // DMA2 Stream6 global interrupt
        , DMA2_STREAM7 = 70 // DMA2 Stream7 global interrupt
        , USART6 = 71 // USART6 global interrupt
        , I2C3_EV = 72 // I2C3 event interrupt
        , I2C3_ER = 73 // I2C3 error interrupt
        , OTG_HS_EP1_OUT = 74 // USB On The Go HS End Point 1 Out global interrupt
        , OTG_HS_EP1_IN = 75 // USB On The Go HS End Point 1 In global interrupt
        , OTG_HS_WKUP = 76 // USB On The Go HS Wakeup through EXTI interrupt
        , CAN3_SCE = 77 // CAN 3 SCE interrupt
        , DCMI = 78 // DCMI global interrupt
        , CRYPTO = 79 // AES global interrupt
        , HASH_RNG = 80 // Hash and Rng global interrupt
        , FPU = 81 // Floating point unit interrupt
        , USART7 = 82 // USART7 global interrupt
        , USART8 = 83 // USART8 global interrupt
        , SPI4 = 84 // SPI4 global interrupt
        , SPI5 = 85 // SPI 5 global interrupt
        , SPI6 = 86 // SPI 6 global interrupt
        , SAI1 = 87 // SAI1 global interrupt
        , LCD_TFT = 88 // LTDC global interrupt
        , LCD_TFT_1 = 89 // LTDC global error interrupt
        , DMA2D = 90 // DMA2D global interrupt
        , QUADSPI = 91 // QuadSPI global interrupt
        , QUAD_SP = 92 // Quad-SPI global interrupt
        , HDMI_CEC = 93 // HDMI-CEC global interrupt
        , SPDIF_RX = 94 // SPDIF-Rx global interrupt
        , I2CFMP1_EVENT = 95 // I2CFMP1 event interrupt
        , I2CFMP1_ERROR = 96 // I2CFMP1 error interrupt
        , LPTIM1_OR_IT_EIT_23 = 97 // LP Timer global interrupt or EXT1 interrupt line 23
        , DFSDM2_FILTER1 = 98 // DFSDM2 SD filter 1 global interrupt
        , DFSDM2_FILTER2 = 99 // DFSDM2 SD filter 2 global interrupt
        , DFSDM2_FILTER3 = 100 // DFSDM2 SD filter 3 global interrupt
        , DFSDM2_FILTER4 = 101 // DFSDM2 SD filter 4 global interrupt
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

