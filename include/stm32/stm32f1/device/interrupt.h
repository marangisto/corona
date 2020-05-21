#pragma once

////
//
//      STM32F1 interrupts
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
    , TAMPER_STAMP = 2
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
    , USB_HP_CAN_TX = 19
    , USB_LP_CAN_RX0 = 20
    , CAN1_RX1 = 21
    , CAN1_SCE = 22
    , EXTI9_5 = 23
    , TIM1_BRK_TIM15 = 24
    , TIM1_UP_TIM16 = 25
    , TIM1_TRG_COM_TIM17 = 26
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
    , RTCALARM = 41
    , CEC = 42
    , TIM12 = 43
    , TIM13 = 44
    , TIM14 = 45
    , TIM8_CC = 46
    , ADC3 = 47
    , FSMC = 48
    , SDIO = 49
    , TIM5 = 50
    , SPI3 = 51
    , UART4 = 52
    , UART5 = 53
    , TIM6_DAC = 54
    , TIM7 = 55
    , DMA2_CHANNEL1 = 56
    , DMA2_CHANNEL2 = 57
    , DMA2_CHANNEL3 = 58
    , DMA2_CHANNEL4_5 = 59
    , DMA2_CHANNEL5 = 60
    , ETH = 61
    , ETH_WKUP = 62
    , CAN2_TX = 63
    , CAN2_RX0 = 64
    , CAN2_RX1 = 65
    , CAN2_SCE = 66
    , OTG_FS = 67
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
};

