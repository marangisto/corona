#pragma once

////
//
//      STM32L4 interrupts
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
    , PVD_PVM = 1
    , RTC_TAMP_STAMP = 2
    , RTC_WKUP = 3
    , FLASH = 4
    , RCC = 5
    , EXTI0 = 6
    , EXTI1 = 7
    , EXTI2 = 8
    , EXTI3 = 9
    , EXTI4 = 10
    , DMA1_CHANNEL1 = 11
    , DMA1_CHANNEL2 = 12
    , DMA1_CHANNEL3 = 13
    , DMA1_CHANNEL4 = 14
    , DMA1_CHANNEL5 = 15
    , DMA1_CHANNEL6 = 16
    , DMA1_CHANNEL7 = 17
    , ADC = 18
    , CAN1_TX = 19
    , CAN1_RX0 = 20
    , CAN1_RX1 = 21
    , CAN1_SCE = 22
    , EXTI9_5 = 23
    , TIM15 = 24
    , TIM16 = 25
    , TIM1_TRG_COM = 26
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
    , DFSDM1_FLT3 = 42
    , TIM8_BRK = 43
    , TIM8_UP = 44
    , TIM8_TRG_COM = 45
    , TIM8_CC = 46
    , ADC3 = 47
    , FMC = 48
    , SDMMC1 = 49
    , TIM5 = 50
    , SPI3 = 51
    , UART4 = 52
    , UART5 = 53
    , TIM6_DACUNDER = 54
    , TIM7 = 55
    , DMA2_CHANNEL1 = 56
    , DMA2_CHANNEL2 = 57
    , DMA2_CHANNEL3 = 58
    , DMA2_CHANNEL4 = 59
    , DMA2_CHANNEL5 = 60
    , DFSDM1_FLT0 = 61
    , DFSDM1_FLT1 = 62
    , DFSDM1_FLT2 = 63
    , COMP = 64
    , LPTIM1 = 65
    , LPTIM2 = 66
    , USB = 67
    , DMA2_CHANNEL6 = 68
    , DMA2_CHANNEL7 = 69
    , LPUART1 = 70
    , QUADSPI = 71
    , I2C3_EV = 72
    , I2C3_ER = 73
    , SAI1 = 74
    , SAI2 = 75
    , SWPMI1 = 76
    , TSC = 77
    , LCD = 78
    , AES = 79
    , RNG = 80
    , FPU = 81
    , CRS = 82
    , I2C4_EV = 83
    , I2C4_ER = 84
    , DCMI = 85
    , CAN2_TX = 86
    , CAN2_RX0 = 87
    , CAN2_RX1 = 88
    , CAN2_SCE = 89
    , DMA2D = 90
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

