#pragma once

////
//
//      STM32G0 interrupts
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
    , RTC_TAMP = 2
    , FLASH = 3
    , RCC = 4
    , EXTI0_1 = 5
    , EXTI2_3 = 6
    , EXTI4_15 = 7
    , UCPD1_UCPD2 = 8
    , DMA_CHANNEL1 = 9
    , DMA_CHANNEL2_3 = 10
    , DMA_CHANNEL4_5_6_7 = 11
    , ADC_COMP = 12
    , TIM1_BRK_UP_TRG_COM = 13
    , TIM1_CC = 14
    , TIM2 = 15
    , TIM3 = 16
    , TIM6_DAC_LPTIM1 = 17
    , TIM7_LPTIM2 = 18
    , TIM14 = 19
    , TIM15 = 20
    , TIM16 = 21
    , TIM17 = 22
    , I2C1 = 23
    , I2C2 = 24
    , SPI1 = 25
    , SPI2 = 26
    , USART1 = 27
    , USART2 = 28
    , USART3_USART4_LPUART1 = 29
    , CEC = 30
    , AES_RNG = 31
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
};

