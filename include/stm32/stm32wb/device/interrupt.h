#pragma once

////
//
//      STM32WB interrupts
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
    , ADC1 = 18
    , USB_HP = 19
    , USB_LP = 20
    , C2SEV = 21
    , COMP = 22
    , EXTI5_9 = 23
    , TIM1_BRK = 24
    , TIM1_UP = 25
    , TIM1_TRG_COM_TIM17 = 26
    , TIM1_CC = 27
    , TIM2 = 28
    , PKA = 29
    , I2C1_EV = 30
    , I2C1_ER = 31
    , I2C3_EV = 32
    , I2C3_ER = 33
    , SPI1 = 34
    , SPI2 = 35
    , USART1 = 36
    , LPUART1 = 37
    , SAI1 = 38
    , TSC = 39
    , EXTI10_15 = 40
    , RTC_ALARM = 41
    , CRS_IT = 42
    , PWR_SOTF = 43
    , IPCC_C1_RX_IT = 44
    , IPCC_C1_TX_IT = 45
    , HSEM = 46
    , LPTIM1 = 47
    , LPTIM2 = 48
    , LCD = 49
    , QUADSPI = 50
    , AES1 = 51
    , AES2 = 52
    , TRUE_RNG = 53
    , FPU = 54
    , DMA2_CH1 = 55
    , DMA2_CH2 = 56
    , DMA2_CH3 = 57
    , DMA2_CH4 = 58
    , DMA2_CH5 = 59
    , DMA2_CH6 = 60
    , DMA2_CH7 = 61
    , DMAMUX_OVR = 62
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
};

