#pragma once

////
//
//      STM32H7 interrupts
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
        , WWDG1 = 0 // Window Watchdog interrupt
        , PVD_PVM = 1 // PVD through EXTI line
        , RTC_TAMP_STAMP_CSS_LSE = 2 // RTC tamper, timestamp
        , RTC_WKUP = 3 // RTC Wakeup interrupt
        , FLASH = 4 // Flash memory
        , RCC = 5 // RCC global interrupt
        , EXTI0 = 6 // EXTI Line 0 interrupt
        , EXTI1 = 7 // EXTI Line 1 interrupt
        , EXTI2 = 8 // EXTI Line 2 interrupt
        , EXTI3 = 9 // EXTI Line 3interrupt
        , EXTI4 = 10 // EXTI Line 4interrupt
        , DMA_STR0 = 11 // DMA1 Stream0
        , DMA_STR1 = 12 // DMA1 Stream1
        , DMA_STR2 = 13 // DMA1 Stream2
        , DMA_STR3 = 14 // DMA1 Stream3
        , DMA_STR4 = 15 // DMA1 Stream4
        , DMA_STR5 = 16 // DMA1 Stream5
        , DMA_STR6 = 17 // DMA1 Stream6
        , ADC1_2 = 18 // ADC1 and ADC2
        , FDCAN1_IT0 = 19 // FDCAN1 Interrupt 0
        , FDCAN2_IT0 = 20 // FDCAN2 Interrupt 0
        , FDCAN1_IT1 = 21 // FDCAN1 Interrupt 1
        , FDCAN2_IT1 = 22 // FDCAN2 Interrupt 1
        , EXTI9_5 = 23 // EXTI Line[9:5] interrupts
        , TIM1_BRK = 24 // TIM1 break interrupt
        , TIM1_UP = 25 // TIM1 update interrupt
        , TIM1_TRG_COM = 26 // TIM1 trigger and commutation
        , TIM1_CC = 27 // TIM1 capture / compare
        , TIM2 = 28 // TIM2 global interrupt
        , TIM3 = 29 // TIM3 global interrupt
        , TIM4 = 30 // TIM4 global interrupt
        , I2C1_EV = 31 // I2C1 event interrupt
        , I2C1_ER = 32 // I2C1 global error interrupt
        , I2C2_EV = 33 // I2C2 event interrupt
        , I2C2_ER = 34 // I2C2 global error interrupt
        , SPI1 = 35 // SPI1 global interrupt
        , SPI2 = 36 // SPI2 global interrupt
        , USART1 = 37 // USART1 global interrupt
        , USART2 = 38 // USART2 global interrupt
        , USART3 = 39 // USART3 global interrupt
        , EXTI15_10 = 40 // EXTI Line[15:10] interrupts
        , RTC_ALARM = 41 // RTC alarms (A and B)
        , TIM8_BRK_TIM12 = 43 // TIM8 and 12 break global
        , TIM8_UP_TIM13 = 44 // TIM8 and 13 update global
        , TIM8_TRG_COM_TIM14 = 45 // TIM8 and 14 trigger /commutation and global
        , TIM8_CC = 46 // TIM8 capture / compare
        , DMA1_STR7 = 47 // DMA1 Stream7
        , FMC = 48 // FMC global interrupt
        , SDMMC1 = 49 // SDMMC1 global interrupt
        , TIM5 = 50 // TIM5 global interrupt
        , SPI3 = 51 // SPI3 global interrupt
        , UART4 = 52 // UART4 global interrupt
        , UART5 = 53 // UART5 global interrupt
        , TIM6_DAC = 54 // TIM6 global interrupt
        , TIM7 = 55 // TIM7 global interrupt
        , DMA2_STR0 = 56 // DMA2 Stream0 interrupt
        , DMA2_STR1 = 57 // DMA2 Stream1 interrupt
        , DMA2_STR2 = 58 // DMA2 Stream2 interrupt
        , DMA2_STR3 = 59 // DMA2 Stream3 interrupt
        , DMA2_STR4 = 60 // DMA2 Stream4 interrupt
        , ETH = 61 // Ethernet global interrupt
        , ETH_WKUP = 62 // Ethernet wakeup through EXTI
        , FDCAN_CAL = 63 // CAN2TX interrupts
        , CM7_SEV_IT = 64 // Arm Cortex-M7 Send
        , CM4_SEV_IT = 65 // Arm Cortex-M4 Send even interrupt
        , DMA2_STR5 = 68 // DMA2 Stream5 interrupt
        , DMA2_STR6 = 69 // DMA2 Stream6 interrupt
        , DMA2_STR7 = 70 // DMA2 Stream7 interrupt
        , USART6 = 71 // USART6 global interrupt
        , I2C3_EV = 72 // I2C3 event interrupt
        , I2C3_ER = 73 // I2C3 error interrupt
        , OTG_HS_EP1_OUT = 74 // OTG_HS out global interrupt
        , OTG_HS_EP1_IN = 75 // OTG_HS in global interrupt
        , OTG_HS_WKUP = 76 // OTG_HS wakeup interrupt
        , OTG_HS = 77 // OTG_HS global interrupt
        , DCMI_PSSI = 78 // DCMI/PSSI global interrupt
        , CRYP = 79 // Crypto global interrupt
        , HASH_RNG = 80 // HASH and RNG
        , FPU = 81 // Floating point unit interrupt
        , UART7 = 82 // UART7 global interrupt
        , UART8 = 83 // UART8 global interrupt
        , SPI4 = 84 // SPI4 global interrupt
        , SPI5 = 85 // SPI5 global interrupt
        , SPI6 = 86 // SPI6 global interrupt
        , SAI1 = 87 // SAI1 global interrupt
        , LTDC = 88 // LCD-TFT global interrupt
        , LTDC_ER = 89 // LCD-TFT error interrupt
        , DMA2D = 90 // DMA2D global interrupt
        , SAI2 = 91 // SAI2 global interrupt
        , OCTOSPI1 = 92 // OCTOSPI1 global interrupt
        , LPTIM1 = 93 // LPTIM1 global interrupt
        , CEC = 94 // HDMI-CEC global interrupt
        , I2C4_EV = 95 // I2C4 event interrupt
        , I2C4_ER = 96 // I2C4 error interrupt
        , SPDIF = 97 // SPDIFRX global interrupt
        , OTG_FS_EP1_OUT = 98 // OTG_FS out global interrupt
        , OTG_FS_EP1_IN = 99 // OTG_FS in global interrupt
        , OTG_FS_WKUP = 100 // OTG_FS wakeup
        , OTG_FS = 101 // OTG_FS global interrupt
        , DMAMUX1_OV = 102 // DMAMUX1 overrun interrupt
        , HRTIM1_MST = 103 // HRTIM1 master timer interrupt
        , HRTIM1_TIMA = 104 // HRTIM1 timer A interrupt
        , HRTIM_TIMB = 105 // HRTIM1 timer B interrupt
        , HRTIM1_TIMC = 106 // HRTIM1 timer C interrupt
        , HRTIM1_TIMD = 107 // HRTIM1 timer D interrupt
        , HRTIM_TIME = 108 // HRTIM1 timer E interrupt
        , HRTIM1_FLT = 109 // HRTIM1 fault interrupt
        , DFSDM1_FLT0 = 110 // DFSDM1 filter 0 interrupt
        , DFSDM1_FLT1 = 111 // DFSDM1 filter 1 interrupt
        , DFSDM1_FLT2 = 112 // DFSDM1 filter 2 interrupt
        , DFSDM1_FLT3 = 113 // DFSDM1 filter 3 interrupt
        , SAI3 = 114 // SAI3 global interrupt
        , SWPMI1 = 115 // SWPMI global interrupt
        , TIM15 = 116 // TIM15 global interrupt
        , TIM16 = 117 // TIM16 global interrupt
        , TIM17 = 118 // TIM17 global interrupt
        , MDIOS_WKUP = 119 // MDIOS wakeup
        , MDIOS = 120 // MDIOS global interrupt
        , JPEG = 121 // JPEG global interrupt
        , MDMA = 122 // MDMA Global interrupt
        , SDMMC2 = 124 // SDMMC2 global interrupt
        , HSEM0 = 125 // HSEM global interrupt 1
        , ADC3 = 127 // ADC3 global interrupt
        , DMAMUX2_OVR = 128 // DMAMUX D3 overrun interrupt
        , BDMA_CH1 = 129 // BDMA channel 1 interrupt
        , BDMA_CH2 = 130 // BDMA channel 2 interrupt
        , BDMA_CH3 = 131 // BDMA channel 3 interrupt
        , BDMA_CH4 = 132 // BDMA channel 4 interrupt
        , BDMA_CH5 = 133 // BDMA channel 5 interrupt
        , BDMA_CH6 = 134 // BDMA channel 6 interrupt
        , BDMA_CH7 = 135 // BDMA channel 7 interrupt
        , BDMA_CH8 = 136 // BDMA channel 8 interrupt
        , COMP = 137 // COMP1 and COMP2 global interrupt
        , LPTIM2 = 138 // LPTIM2 timer interrupt
        , LPTIM3 = 139 // LPTIM2 timer interrupt
        , LPTIM4 = 140 // LPTIM2 timer interrupt
        , LPTIM5 = 141 // LPTIM2 timer interrupt
        , LPUART = 142 // LPUART global interrupt
        , WWDG1_RST = 143 // Window Watchdog interrupt
        , CRS = 144 // Clock Recovery System global interrupt
        , SAI4 = 146 // SAI4 global interrupt
        , HOLD_CORE = 148 // CPU2 hold
        , WKUP = 149 // WKUP1 to WKUP6 pins
        , OCTOSPI2 = 150 // OCTOSPI2 global interrupt
        , OTFDEC1 = 151 // OTFDEC1 interrupt
        , OTFDEC2 = 152 // OTFDEC2 interrupt
        , FMAC = 153 // FMAC interrupt
        , CORDIC_IT = 154 // CORDIC interrupt
        , USART10 = 156 // USART10 interrupt
        , I2C5_EV = 157 // I2C5 event interrupt
        , I2C5_ER = 158 // I2C5 error interrupt
        , FDCAN3_IT0 = 159 // FDCAN3 Interrupt 0
        , FDCAN3_IT1 = 160 // FDCAN3 Interrupt 1
        , TIM23 = 161 // TIM23 global interrupt
        , TIM24 = 162 // TIM24 global interrupt
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

    template<typename NVIC, interrupt_t I>
    struct helper<NVIC, I, is_in_range<(160 <= I && I < 192)>>
    {
        static bool get() { return NVIC::V.ISER5 & 1 << (I - 160); }
        static void set() { NVIC::V.ISER5 = 1 << (I - 160); }
        static void clear() { NVIC::V.ICER5 = 1 << (I - 160); }
        static bool get_pending() { return NVIC::V.ISPR5 & 1 << (I - 160); }
        static void set_pending() { NVIC::V.ISPR5 = 1 << (I - 160); }
        static void clear_pending() { NVIC::V.ICPR5 = 1 << (I - 160); }
    };
};

