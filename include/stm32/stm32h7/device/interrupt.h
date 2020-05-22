#pragma once

////
//
//      STM32H7 interrupts
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
    , WWDG1 = 0
    , PVD_PVM = 1
    , RTC_TAMP_STAMP_CSS_LSE = 2
    , RTC_WKUP = 3
    , FLASH = 4
    , RCC = 5
    , EXTI0 = 6
    , EXTI1 = 7
    , EXTI2 = 8
    , EXTI3 = 9
    , EXTI4 = 10
    , DMA_STR0 = 11
    , DMA_STR1 = 12
    , DMA_STR2 = 13
    , DMA_STR3 = 14
    , DMA_STR4 = 15
    , DMA_STR5 = 16
    , DMA_STR6 = 17
    , ADC1_2 = 18
    , FDCAN1_IT0 = 19
    , FDCAN2_IT0 = 20
    , FDCAN1_IT1 = 21
    , FDCAN2_IT1 = 22
    , EXTI9_5 = 23
    , TIM1_BRK = 24
    , TIM1_UP = 25
    , TIM1_TRG_COM = 26
    , TIM_CC = 27
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
    , TIM8_BRK_TIM12 = 43
    , TIM8_UP_TIM13 = 44
    , TIM8_TRG_COM_TIM14 = 45
    , TIM8_CC = 46
    , DMA1_STR7 = 47
    , FMC = 48
    , SDMMC1 = 49
    , TIM5 = 50
    , SPI3 = 51
    , UART4 = 52
    , UART5 = 53
    , TIM6_DAC = 54
    , TIM7 = 55
    , DMA2_STR0 = 56
    , DMA2_STR1 = 57
    , DMA2_STR2 = 58
    , DMA2_STR3 = 59
    , DMA2_STR4 = 60
    , ETH = 61
    , ETH_WKUP = 62
    , FDCAN_CAL = 63
    , CM7_SEV_IT = 64
    , CM4_SEV_IT = 65
    , DMA2_STR5 = 68
    , DMA2_STR6 = 69
    , DMA2_STR7 = 70
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
    , UART7 = 82
    , UART8 = 83
    , SPI4 = 84
    , SPI5 = 85
    , SPI6 = 86
    , SAI1 = 87
    , LTDC = 88
    , LTDC_ER = 89
    , DMA2D = 90
    , SAI2 = 91
    , QUADSPI = 92
    , LPTIM1 = 93
    , CEC = 94
    , I2C4_EV = 95
    , I2C4_ER = 96
    , SPDIF = 97
    , OTG_FS_EP1_OUT = 98
    , OTG_FS_EP1_IN = 99
    , OTG_FS_WKUP = 100
    , OTG_FS = 101
    , DMAMUX1_OV = 102
    , HRTIM1_MST = 103
    , HRTIM1_TIMA = 104
    , HRTIM_TIMB = 105
    , HRTIM1_TIMC = 106
    , HRTIM1_TIMD = 107
    , HRTIM_TIME = 108
    , HRTIM1_FLT = 109
    , DFSDM1_FLT0 = 110
    , DFSDM1_FLT1 = 111
    , DFSDM1_FLT2 = 112
    , DFSDM1_FLT3 = 113
    , SAI3 = 114
    , SWPMI1 = 115
    , TIM15 = 116
    , TIM16 = 117
    , TIM17 = 118
    , MDIOS_WKUP = 119
    , MDIOS = 120
    , JPEG = 121
    , MDMA = 122
    , SDMMC = 124
    , HSEM0 = 125
    , ADC3 = 127
    , DMAMUX2_OVR = 128
    , BDMA_CH1 = 129
    , BDMA_CH2 = 130
    , BDMA_CH3 = 131
    , BDMA_CH4 = 132
    , BDMA_CH5 = 133
    , BDMA_CH6 = 134
    , BDMA_CH7 = 135
    , BDMA_CH8 = 136
    , COMP = 137
    , LPTIM2 = 138
    , LPTIM3 = 139
    , LPTIM4 = 140
    , LPTIM5 = 141
    , LPUART = 142
    , WWDG1_RST = 143
    , CRS = 144
    , SAI4 = 146
    , HOLD_CORE = 148
    , WKUP = 149
    , OCTOSPI2 = 150
    , OTFDEC1 = 151
    , OTFDEC2 = 152
    , BDMA1 = 154
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

    template<typename NVIC, interrupt_t I>
    struct helper<NVIC, I, is_in_range<(128 <= I && I < 160)>>
    {
        static bool get() { return NVIC::V.ISER4 & 1 << (I - 128); }
        static void set() { NVIC::V.ISER4 = 1 << (I - 128); }
        static void clear() { NVIC::V.ICER4 = 1 << (I - 128); }
        static bool get_pending() { return NVIC::V.ISPR4 & 1 << (I - 128); }
        static void set_pending() { NVIC::V.ISPR4 = 1 << (I - 128); }
        static void clear_pending() { NVIC::V.ICPR4 = 1 << (I - 128); }
    };
};

