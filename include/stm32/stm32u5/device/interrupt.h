#pragma once

////
//
//      STM32U5 interrupts
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
        , PDV_AVD = 1 // Power voltage monitor/Analog voltage monitor
        , RTC = 2 // RTC global non-secure interrupts
        , RTC_S = 3 // RTC secure global secure interrupts
        , TAMP = 4 // Tamper global interrupts
        , RAMCFG = 5 // RAM configuration global interrupt
        , FLASH = 6 // Flash memory non-secure global interrupt
        , FLASH_S = 7 // Flash memory secure global interrupt
        , RCC = 9 // RCC secure global interrupt
        , RCC_S = 10 // RCC SECURE GLOBAL INTERRUPT
        , EXTI0 = 11 // EXTI line0 interrupt
        , EXTI1 = 12 // EXTI line1 interrupt
        , EXTI2 = 13 // EXTI line2 interrupt
        , EXTI3 = 14 // EXTI line3 interrupt
        , EXTI4 = 15 // EXTI line4 interrupt
        , EXTI5 = 16 // EXTI line5 interrupt
        , EXTI6 = 17 // EXTI line6 interrupt
        , EXTI7 = 18 // EXTI line7 interrupt
        , EXTI8 = 19 // EXTI line8 interrupt
        , EXTI9 = 20 // EXTI line9 interrupt
        , EXTI10 = 21 // EXTI line10 interrupt
        , EXTI11 = 22 // EXTI line11 interrupt
        , EXTI12 = 23 // EXTI line12 interrupt
        , EXTI13 = 24 // EXTI line13 interrupt
        , EXTI14 = 25 // EXTI line14 interrupt
        , EXTI15 = 26 // EXTI line15 interrupt
        , SAES = 28 // SAES global interrupt
        , GPDMA1_CH0 = 29 // GPDMA1 channel 0 global interrupt
        , GPDMA1_CH1 = 30 // GPDMA1 channel 1 global interrupt
        , GPDMA1_CH2 = 31 // GPDMA1 channel 2 global interrupt
        , GPDMA1_CH3 = 32 // GPDMA1 channel 3 global interrupt
        , GPDMA1_CH4 = 33 // GPDMA1 channel 4 global interrupt
        , GPDMA1_CH5 = 34 // GPDMA1 channel 5 global interrupt
        , GPDMA1_CH6 = 35 // GPDMA1 channel 6 global interrupt
        , GPDMA1_CH7 = 36 // GPDMA1 channel 7 global interrupt
        , ADC1 = 37 // ADC1 (16 bits) global interrupt
        , DAC1 = 38 // DAC1 global interrupt
        , FDCAN1_IT0 = 39 // FDCAN1 Interrupt 0
        , FDCAN1_IT1 = 40 // FDCAN1 Interrupt 1
        , TIM1_BRK = 41 // TIM1 Break - transition error -index error
        , TIM1_UP = 42 // TIM1 Update
        , TIM1_TRG_COM = 43 // TIM1 Trigger and Commutation - direction change interrupt -index
        , TIM1_CC = 44 // TIM1 Capture Compare interrupt
        , TIM2 = 45 // TIM2 global interrupt
        , TIM3 = 46 // TIM3 global interrupt
        , TIM4 = 47 // TIM4 global interrupt
        , TIM5 = 48 // TIM5 global interrupt
        , TIM6 = 49 // TIM6 global interrupt
        , TIM7 = 50 // TIM7 global interrupt
        , TIM8_BRK = 51 // TIM8 Break Interrupt
        , TIM8_UP = 52 // TIM8 Update Interrupt
        , TIM8_TRG_COM = 53 // TIM8 Trigger and Commutation Interrupt
        , TIM8_CC = 54 // TIM8 Capture Compare Interrupt
        , I2C1_EV = 55 // I2C1 event interrupt
        , I2C1_ER = 56 // I2C1 error interrupt
        , I2C2_EV = 57 // I2C2 event interrupt
        , I2C2_ER = 58 // I2C2 error interrupt
        , SPI1 = 59 // SPI1 global interrupt
        , SPI2 = 60 // SPI2 global interrupt
        , USART1 = 61 // USART1 global interrupt
        , USART2 = 62 // USART2 global interrupt
        , USART3 = 63 // USART3 global interrupt
        , UART4 = 64 // UART4 global interrupt
        , UART5 = 65 // UART5 global interrupt
        , LPUART1 = 66 // LPUART1 global interrupt
        , LPTIM1 = 67 // LPTIM1 global interrupt
        , LPTIM2 = 68 // LPTIM2 global interrupt
        , TIM15 = 69 // TIM15 global interrupt
        , TIM16 = 70 // TIM16 global interrupt
        , TIM17 = 71 // TIM17 global interrupt
        , COMP = 72 // COMP1 and COMP2 interrupts
        , OTG_FS = 73 // USB OTG FS global interrupt
        , FMC = 75 // FMC global interrupt
        , OCTOSPI1 = 76 // OCTOSPI1 global interrupt
        , PWR_S3WU = 77 // PWR wakeup from Stop 3 interrupt
        , SDMMC1 = 78 // SDMMC1 global interrupt
        , SDMMC2 = 79 // SDMMC2 global interrupt
        , I2C3_EV = 88 // I2C3 event interrupt
        , I2C3_ER = 89 // I2C3 error interrupt
        , SAI1 = 90 // SAI1 global interrupt
        , SAI2 = 91 // SAI2 global interrupt
        , TSC = 92 // TSC global interrupt
        , AES = 93 // AES global interrupt
        , RNG = 94 // RNG global interrupt
        , HASH = 96 // HASH interrupt
        , PKA = 97 // PKA global interrupt
        , LPTIM3 = 98 // LPTIM3 global interrupt
        , SPI3 = 99 // SPI3 global interrupt
        , I2C4_ER = 100 // I2C4 error interrupt
        , I2C4_EV = 101 // I2C4 event interrupt
        , MDF1_FLT0 = 102 // MDF1 filter 0 global interrupt
        , MDF1_FLT1 = 103 // MDF1 filter 1 global interrupt
        , MDF1_FLT2 = 104 // MDF1 filter 2 global interrupt
        , MDF1_FLT3 = 105 // MDF1 filter 3 global interrupt
        , UCPD1 = 106 // UCPD1 global interrupt
        , ICACHE = 107 // Instruction cache global interrupt
        , OTFDEC1 = 108 // OTFDEC1 interrupt
        , OTFDEC2 = 109 // OTFDEC2 interrupt
        , LPTIM4 = 110 // LPTIM4 global interrupt
        , DCACHE = 111 // Data cache global interrupt
        , ADF1_FLT0 = 112 // ADF1 filter 0 global interrupt
        , ADC4 = 113 // ADC4 (12 bits) global interrupt
        , LPDMA1_CH0 = 114 // LPDMA1 SmartRun channel 0 global interrupt
        , LPDMA1_CH1 = 115 // LPDMA1 SmartRun channel 1 global interrupt
        , LPDMA1_CH2 = 116 // LPDMA1 SmartRun channel 2 global interrupt
        , LPDMA1_CH3 = 117 // LPDMA1 SmartRun channel 3 global interrupt
        , DMA2D = 118 // DMA2D global interrupt
        , DCMI = 119 // Digital camera interface
        , OCTOSPI2 = 120 // OCTOSPI2 global interrupt
        , MDF1_FLT4 = 121 // MDF1 filter 4 global interrupt
        , MDF1_FLT5 = 122 // MDF1 filter 5 global interrupt
        , CORDIC = 123 // Cordic interrupt
        , FMAC = 124 // FMAC interrupt
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

