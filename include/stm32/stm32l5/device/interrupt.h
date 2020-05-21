#pragma once

////
//
//      STM32L5 interrupts
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
    , RTC = 2
    , RTC_S = 3
    , TAMP = 4
    , TAMP_S = 5
    , FLASH = 6
    , FLASH_S = 7
    , RCC = 9
    , RCC_S = 10
    , EXTI0 = 11
    , EXTI1 = 12
    , EXTI2 = 13
    , EXTI3 = 14
    , EXTI4 = 15
    , EXTI5 = 16
    , EXTI6 = 17
    , EXTI7 = 18
    , EXTI8 = 19
    , EXTI9 = 20
    , EXTI10 = 21
    , EXTI11 = 22
    , EXTI12 = 23
    , EXTI13 = 24
    , EXTI14 = 25
    , EXTI15 = 26
    , DMAMUX1_OVR = 27
    , DMAMUX1_OVR_S = 28
    , DMA1_CHANNEL1 = 29
    , DMA1_CHANNEL2 = 30
    , DMA1_CHANNEL3 = 31
    , DMA1_CHANNEL4 = 32
    , DMA1_CHANNEL5 = 33
    , DMA1_CHANNEL6 = 34
    , DMA1_CHANNEL7 = 35
    , DMA1_CHANNEL8 = 36
    , ADC1_2 = 37
    , FDCAN1_IT0 = 39
    , FDCAN1_IT1 = 40
    , TIM1_BRK = 41
    , TIM1_UP = 42
    , TIM1_TRG_COM = 43
    , TIM1_CC = 44
    , TIM2 = 45
    , TIM2_3 = 46
    , TIM2_4 = 47
    , TIM2_5 = 48
    , TIM8_BRK = 51
    , TIM8_UP = 52
    , TIM8_TRG_COM = 53
    , TIM8_CC = 54
    , I2C1_EV = 55
    , I2C1_ER = 56
    , I2C2_EV = 57
    , I2C2_ER = 58
    , SPI1 = 59
    , SPI2 = 60
    , USART1 = 61
    , USART2 = 62
    , USART3 = 63
    , UART4 = 64
    , UART5 = 65
    , LPUART1 = 66
    , LPTIM1 = 67
    , LPTIM2 = 68
    , TIM15 = 69
    , TIM16 = 70
    , TIM17 = 71
    , COMP = 72
    , USB_FS = 73
    , FMC = 75
    , OCTOSPI1 = 76
    , SDMMC1 = 78
    , DMA2_CH1 = 80
    , DMA2_CH2 = 81
    , DMA2_CH3 = 82
    , DMA2_CH4 = 83
    , DMA2_CH5 = 84
    , DMA2_CH6 = 85
    , DMA2_CH7 = 86
    , DMA2_CH8 = 87
    , I2C3_EV = 88
    , I2C3_ER = 89
    , SAI1 = 90
    , SAI2 = 91
    , TSC = 92
    , AES = 93
    , RNG = 94
    , PKA = 97
    , LPTIM3 = 98
    , SPI3 = 99
    , I2C4_ER = 100
    , I2C4_EV = 101
    , DFSDM1_FLT0 = 102
    , DFSDM1_FLT1 = 103
    , DFSDM1_FLT2 = 104
    , DFSDM1_FLT3 = 105
    , UCPD1 = 106
    , ICACHE = 107
    , OTFDEC1 = 108
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

