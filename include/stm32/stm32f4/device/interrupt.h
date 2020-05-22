#pragma once

////
//
//      STM32F4 interrupts
//
////

struct interrupt
{
    static inline void enable() { __asm volatile ("cpsie i"); }
    static inline void disable() { __asm volatile ("cpsid i"); }

    enum interrupt_t
    { RESET = -15
    , NMI = -14
    , HARDFAULT = -13
    , MEMMANAGE = -12
    , BUSFAULT = -11
    , USAGEFAULT = -10
    , SVCALL = -5
    , DEBUG = -4
    , PENDSV = -2
    , SYSTICK = -1
    , WWDG = 0
    , PVD = 1
    , TAMP_STAMP = 2
    , RTC_WKUP = 3
    , FLASH = 4
    , RCC = 5
    , EXTI0 = 6
    , EXTI1 = 7
    , EXTI2 = 8
    , EXTI3 = 9
    , EXTI4 = 10
    , DMA1_STREAM0 = 11
    , DMA1_STREAM1 = 12
    , DMA1_STREAM2 = 13
    , DMA1_STREAM3 = 14
    , DMA1_STREAM4 = 15
    , DMA1_STREAM5 = 16
    , DMA1_STREAM6 = 17
    , ADC = 18
    , CAN1_TX = 19
    , CAN1_RX0 = 20
    , CAN1_RX1 = 21
    , CAN1_SCE = 22
    , EXTI9_5 = 23
    , TIM1_BRK_TIM9 = 24
    , TIM1_UP_TIM10 = 25
    , TIM1_TRG_COM_TIM11 = 26
    , TIM1_CC = 27
    , TIM2 = 28
    , TIM3 = 29
    , TIM4 = 30
    , I2C1_EV = 31
    , I2C1_ER = 32
    , I2C2_EV = 33
    , I2C2_ER = 34
    , SPI1 = 35
    , SPI2 = 36
    , USART1 = 37
    , USART2 = 38
    , USART3 = 39
    , EXTI15_10 = 40
    , RTC_ALARM = 41
    , OTG_FS_WKUP = 42
    , TIM8_BRK_TIM12 = 43
    , TIM8_UP_TIM13 = 44
    , TIM8_TRG_COM_TIM14 = 45
    , TIM8_CC = 46
    , DMA1_STREAM7 = 47
    , FSMC = 48
    , SDIO = 49
    , TIM5 = 50
    , SPI3 = 51
    , UART4 = 52
    , UART5 = 53
    , TIM6_DAC = 54
    , TIM7 = 55
    , DMA2_STREAM0 = 56
    , DMA2_STREAM1 = 57
    , DMA2_STREAM2 = 58
    , DMA2_STREAM3 = 59
    , DMA2_STREAM4 = 60
    , ETH = 61
    , ETH_WKUP = 62
    , CAN2_TX = 63
    , CAN2_RX0 = 64
    , CAN2_RX1 = 65
    , CAN2_SCE = 66
    , OTG_FS = 67
    , DMA2_STREAM5 = 68
    , DMA2_STREAM6 = 69
    , DMA2_STREAM7 = 70
    , USART6 = 71
    , I2C3_EV = 72
    , I2C3_ER = 73
    , OTG_HS_EP1_OUT = 74
    , OTG_HS_EP1_IN = 75
    , OTG_HS_WKUP = 76
    , OTG_HS = 77
    , DCMI = 78
    , CRYP = 79
    , HASH_RNG = 80
    , FPU = 81
    , USART7 = 82
    , USART8 = 83
    , SPI4 = 84
    , SPI5 = 85
    , SPI6 = 86
    , SAI1 = 87
    , LCD_TFT = 88
    , LCD_TFT_1 = 89
    , DMA2D = 90
    , SAI2 = 91
    , QUAD_SP = 92
    , HDMI_CEC = 93
    , SPDIF_RX = 94
    , I2C4_EV = 95
    , I2C4_ER = 96
    , LPTIM1 = 97
    , DFSDM2_FILTER1 = 98
    , DFSDM2_FILTER2 = 99
    , DFSDM2_FILTER3 = 100
    , DFSDM2_FILTER4 = 101
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

