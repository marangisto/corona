#pragma once

////
//
//      STM32G4 interrupts
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
    , RTC_TAMP_CSS_LSE = 2
    , RTC_WKUP = 3
    , FLASH = 4
    , RCC = 5
    , EXTI0 = 6
    , EXTI1 = 7
    , EXTI2 = 8
    , EXTI3 = 9
    , EXTI4 = 10
    , DMA1_CH1 = 11
    , DMA1_CH2 = 12
    , DMA1_CH3 = 13
    , DMA1_CH4 = 14
    , DMA1_CH5 = 15
    , DMA1_CH6 = 16
    , DMA1_CH7 = 17
    , ADC1_2 = 18
    , USB_HP = 19
    , USB_LP = 20
    , FDCAN1_INTR1_IT = 21
    , FDCAN1_INTR0_IT = 22
    , EXTI9_5 = 23
    , TIM1_BRK_TIM15 = 24
    , TIM1_UP_TIM16 = 25
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
    , USBWAKEUP = 42
    , TIM8_BRK = 43
    , TIM8_UP = 44
    , TIM8_TRG_COM = 45
    , TIM8_CC = 46
    , ADC3 = 47
    , FMC = 48
    , LPTIM1 = 49
    , TIM5 = 50
    , SPI3 = 51
    , UART4 = 52
    , UART5 = 53
    , TIM6_DACUNDER = 54
    , TIM7 = 55
    , DMA2_CH1 = 56
    , DMA2_CH2 = 57
    , DMA2_CH3 = 58
    , DMA2_CH4 = 59
    , DMA2_CH5 = 60
    , ADC4 = 61
    , ADC5 = 62
    , UCPD1 = 63
    , COMP1_2_3 = 64
    , COMP4 = 65
    , COMP7 = 66
    , HRTIM_MASTER_IRQN = 67
    , HRTIM_TIMA_IRQN = 68
    , HRTIM_TIMB_IRQN = 69
    , HRTIM_TIMC_IRQN = 70
    , HRTIM_TIMD_IRQN = 71
    , HRTIM_TIME_IRQN = 72
    , HRTIM_TIM_FLT_IRQN = 73
    , HRTIM_TIMF_IRQN = 74
    , CRS = 75
    , SAI = 76
    , TIM20_BRK = 77
    , TIM20_UP = 78
    , TIM20_TRG_COM = 79
    , TIM20_CC = 80
    , FPU = 81
    , I2C4_EV = 82
    , I2C4_ER = 83
    , SPI4 = 84
    , AES = 85
    , FDCAN2_INTR0 = 86
    , FDCAN2_INTR1 = 87
    , FDCAN3_INTR0 = 88
    , FDCAN3_INTR1 = 89
    , RNG = 90
    , LPUART = 91
    , I2C3_EV = 92
    , I2C3_ER = 93
    , DMAMUX_OVR = 94
    , QUADSPI = 95
    , DMA1_CH8 = 96
    , DMA2_CH6 = 97
    , DMA2_CH7 = 98
    , DMA2_CH8 = 99
    , CORDIC = 100
    , FMAC = 101
    };

    template<interrupt_t INTERRUPT>
    static void enable() { helper<nvic_t, INTERRUPT>::enable(); }

    template<typename NVIC, interrupt_t I, typename = is_in_range<true>>
    struct helper
    {
        static_assert(always_false_i<I>::value, "no such interrupt");
    };

    template<typename NVIC, interrupt_t I>
    struct helper<NVIC, I, is_in_range<(0 <= I && I < 32)>>
    {
        static void enable() { NVIC::V.ISER0 |= 1 << (I - 0); }
    };

    template<typename NVIC, interrupt_t I>
    struct helper<NVIC, I, is_in_range<(32 <= I && I < 64)>>
    {
        static void enable() { NVIC::V.ISER1 |= 1 << (I - 32); }
    };

    template<typename NVIC, interrupt_t I>
    struct helper<NVIC, I, is_in_range<(64 <= I && I < 96)>>
    {
        static void enable() { NVIC::V.ISER2 |= 1 << (I - 64); }
    };

    template<typename NVIC, interrupt_t I>
    struct helper<NVIC, I, is_in_range<(96 <= I && I < 128)>>
    {
        static void enable() { NVIC::V.ISER3 |= 1 << (I - 96); }
    };
};

