#pragma once

////
//
//      STM32F3 interrupts
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
    , WWDG_IRQ = 0
    , PVD_IRQ = 1
    , TAMP = 2
    , RTC_WKUP_IRQ = 3
    , FLASH = 4
    , RCC = 5
    , EXTI0_IRQ = 6
    , EXTI1_IRQ = 7
    , EXTI2_RI_IRQ = 8
    , EXTI3_IRQ = 9
    , EXTI4_IRQ = 10
    , DMA1_CH1 = 11
    , DMA1_CH2 = 12
    , DMA1_CH3 = 13
    , DMA1_CH4 = 14
    , DMA1_CH5 = 15
    , DMA1_CH6 = 16
    , DMA1_CH7 = 17
    , ADC1_IRQ = 18
    , USB_HP_CAN_TX = 19
    , USB_LP_CAN_RX0 = 20
    , CAN_RX1 = 21
    , CAN_SCE = 22
    , EXTI5_9_IRQ = 23
    , TIM15_IRQ = 24
    , TIM16_IRQ = 25
    , TIM17_IRQ = 26
    , TIM1_CC = 27
    , TIM2 = 28
    , TIM3 = 29
    , TIM4 = 30
    , I2C1_EV_IRQ = 31
    , I2C1_ER_IRQ = 32
    , I2C2_EV_IRQ = 33
    , I2C2_ER_IRQ = 34
    , SPI1 = 35
    , SPI2 = 36
    , USART1_IRQ = 37
    , USART2_IRQ = 38
    , USART3_IRQ = 39
    , EXTI15_10_IRQ = 40
    , RTC_ALARM_IT_IRQ = 41
    , USB_WKUP = 42
    , TIM8_BRK = 43
    , TIM8_UP = 44
    , TIM8_TRG_COM = 45
    , TIM8_CC = 46
    , ADC3 = 47
    , FMC = 48
    , TIM5 = 50
    , SPI3 = 51
    , UART4_EXTI34 = 52
    , UART5_EXTI35 = 53
    , TIM6_DAC1 = 54
    , TIM7 = 55
    , DMA2_CH1 = 56
    , DMA2_CH2 = 57
    , DMA2_CH3 = 58
    , DMA2_CH4 = 59
    , DMA2_CH5 = 60
    , ADC4 = 61
    , SDADC2 = 62
    , SDADC3 = 63
    , COMP2_IRQ = 64
    , COMP4_6_IRQ = 65
    , COMP7 = 66
    , I2C3_EV_EXTI27_IRQ = 72
    , I2C3_ER_IRQ = 73
    , USB_HP = 74
    , USB_LP = 75
    , USB_WKUP_EXTI = 76
    , TIM20_BRK = 77
    , TIM20_UP = 78
    , TIM20_TRG_COM = 79
    , TIM20_CC = 80
    , FPU = 81
    , SPI4 = 84
    , HRTIM1_MST = 103
    , HRTIM1_TIMA = 104
    , HRTIM_TIMB = 105
    , HRTIM1_TIMC = 106
    , HRTIM1_TIMD = 107
    , HRTIM_TIME = 108
    , HRTIM1_FLT = 109
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

