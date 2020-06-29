#pragma once

////
//
//      STM32F4 vectors
//
///

template<> void handler<interrupt::NMI>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::HARDFAULT>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::MEMMANAGE>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::BUSFAULT>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::USAGEFAULT>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SVCALL>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DEBUG>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::PENDSV>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SYSTICK>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::WWDG>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::PVD>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TAMP_STAMP>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::RTC_WKUP>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::FLASH>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::RCC>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI0>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI4>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA1_STREAM0>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA1_STREAM1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA1_STREAM2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA1_STREAM3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA1_STREAM4>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA1_STREAM5>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA1_STREAM6>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::ADC>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::CAN1_TX>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::CAN1_RX0>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::CAN1_RX1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::CAN1_SCE>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI9_5>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM1_BRK_TIM9>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM1_UP_TIM10>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM1_TRG_COM_TIM11>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM1_CC>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM4>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::I2C1_EVT>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::I2C1_ERR>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::I2C2_EVT>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::I2C2_ERR>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SPI1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SPI2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::USART1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::USART2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::USART3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI15_10>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI17_RTC_ALARM>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::OTG_FS_WKUP>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM8_BRK_TIM12>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM8_UP_TIM13>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM8_TRG_COM_TIM14>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM8_CC>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA1_STREAM7>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::FSMC>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SDIO>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM5>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SPI3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::USART4>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::UART5>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM6_GLB_IT_DAC1_DAC2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM7>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2_STREAM0>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2_STREAM1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2_STREAM2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2_STREAM3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2_STREAM4>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DFSDM1_FLT0>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DFSDM1_FLT1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::CAN2_TX>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::CAN2_RX0>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::CAN2_RX1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::CAN2_SCE>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::OTG_FS>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2_STREAM5>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2_STREAM6>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2_STREAM7>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::USART6>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::I2C3_EV>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::I2C3_ER>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::OTG_HS_EP1_OUT>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::OTG_HS_EP1_IN>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::OTG_HS_WKUP>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::CAN3_SCE>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DCMI>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::CRYPTO>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::HASH_RNG>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::FPU>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::USART7>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::USART8>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SPI4>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SPI5>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SPI6>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SAI1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::LCD_TFT>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::LCD_TFT_1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2D>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::QUADSPI>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::QUAD_SP>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::HDMI_CEC>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SPDIF_RX>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::I2CFMP1_EVENT>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::I2CFMP1_ERROR>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::LPTIM1_OR_IT_EIT_23>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DFSDM2_FILTER1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DFSDM2_FILTER2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DFSDM2_FILTER3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DFSDM2_FILTER4>() __attribute__ ((weak, alias("_Z17__default_handlerv")));

void (*vectors[])(void) __attribute__ ((section(".vectors"))) =
    { (void(*)(void)) &__estack // -16: Initial stack pointer
    , handler<interrupt::RESET> // -15: Reset [fixed]
    , handler<interrupt::NMI> // -14: Non maskable interrupt [fixed]
    , handler<interrupt::HARDFAULT> // -13: All class of fault [fixed]
    , handler<interrupt::MEMMANAGE> // -12: Memory management [settable]
    , handler<interrupt::BUSFAULT> // -11: Pre-fetch fault, memory access fault [settable]
    , handler<interrupt::USAGEFAULT> // -10: Undefined instruction or illegal state [settable]
    , 0x0
    , 0x0
    , 0x0
    , 0x0
    , handler<interrupt::SVCALL> // -5: System service call via SWI instruction [settable]
    , handler<interrupt::DEBUG> // -4: Monitor Debug Monitor [settable]
    , 0x0
    , handler<interrupt::PENDSV> // -2: Pendable request for system service [settable]
    , handler<interrupt::SYSTICK> // -1: System tick timer [settable]
    , handler<interrupt::WWDG> // 0: Window Watchdog interrupt
    , handler<interrupt::PVD> // 1: PVD through EXTI line detection interrupt
    , handler<interrupt::TAMP_STAMP> // 2: Tamper and TimeStamp interrupts through the EXTI line
    , handler<interrupt::RTC_WKUP> // 3: RTC Wakeup interrupt through the EXTI line
    , handler<interrupt::FLASH> // 4: FLASH global interrupt
    , handler<interrupt::RCC> // 5: RCC global interrupt
    , handler<interrupt::EXTI0> // 6: EXTI Line0 interrupt
    , handler<interrupt::EXTI1> // 7: EXTI Line1 interrupt
    , handler<interrupt::EXTI2> // 8: EXTI Line2 interrupt
    , handler<interrupt::EXTI3> // 9: EXTI Line3 interrupt
    , handler<interrupt::EXTI4> // 10: EXTI Line4 interrupt
    , handler<interrupt::DMA1_STREAM0> // 11: DMA1 Stream0 global interrupt
    , handler<interrupt::DMA1_STREAM1> // 12: DMA1 Stream1 global interrupt
    , handler<interrupt::DMA1_STREAM2> // 13: DMA1 Stream2 global interrupt
    , handler<interrupt::DMA1_STREAM3> // 14: DMA1 Stream3 global interrupt
    , handler<interrupt::DMA1_STREAM4> // 15: DMA1 Stream4 global interrupt
    , handler<interrupt::DMA1_STREAM5> // 16: DMA1 Stream5 global interrupt
    , handler<interrupt::DMA1_STREAM6> // 17: DMA1 Stream6 global interrupt
    , handler<interrupt::ADC> // 18: ADC1 global interrupt
    , handler<interrupt::CAN1_TX> // 19: CAN1 TX interrupts
    , handler<interrupt::CAN1_RX0> // 20: CAN1 RX0 interrupts
    , handler<interrupt::CAN1_RX1> // 21: CAN1 RX1 interrupts
    , handler<interrupt::CAN1_SCE> // 22: CAN1 SCE interrupt
    , handler<interrupt::EXTI9_5> // 23: EXTI Line[9:5] interrupts
    , handler<interrupt::TIM1_BRK_TIM9> // 24: TIM1 Break interrupt and TIM9 global interrupt
    , handler<interrupt::TIM1_UP_TIM10> // 25: TIM1 Update interrupt and TIM10 global interrupt
    , handler<interrupt::TIM1_TRG_COM_TIM11> // 26: TIM1 Trigger and Commutation interrupts and TIM11 global interrupt
    , handler<interrupt::TIM1_CC> // 27: TIM1 Capture Compare interrupt
    , handler<interrupt::TIM2> // 28: TIM2 global interrupt
    , handler<interrupt::TIM3> // 29: TIM3 global interrupt
    , handler<interrupt::TIM4> // 30: TIM4 global interrupt
    , handler<interrupt::I2C1_EVT> // 31: I2C1 event interrupt
    , handler<interrupt::I2C1_ERR> // 32: I2C1 error interrupt
    , handler<interrupt::I2C2_EVT> // 33: I2C2 event interrupt
    , handler<interrupt::I2C2_ERR> // 34: I2C2 error interrupt
    , handler<interrupt::SPI1> // 35: SPI1 global interrupt
    , handler<interrupt::SPI2> // 36: SPI2 global interrupt
    , handler<interrupt::USART1> // 37: USART1 global interrupt
    , handler<interrupt::USART2> // 38: USART2 global interrupt
    , handler<interrupt::USART3> // 39: USART3 global interrupt
    , handler<interrupt::EXTI15_10> // 40: EXTI Line[15:10] interrupts
    , handler<interrupt::EXTI17_RTC_ALARM> // 41: RTC Alarms (A and B) through EXTI line interrupt
    , handler<interrupt::OTG_FS_WKUP> // 42: USB On-The-Go FS Wakeup through EXTI line interrupt
    , handler<interrupt::TIM8_BRK_TIM12> // 43: TIM8 Break interrupt and TIM12 global interrupt
    , handler<interrupt::TIM8_UP_TIM13> // 44: TIM8 Update interrupt and TIM13 global interrupt
    , handler<interrupt::TIM8_TRG_COM_TIM14> // 45: TIM8 Trigger and Commutation interrupts and TIM14 global interrupt
    , handler<interrupt::TIM8_CC> // 46: TIM8 Capture Compare interrupt
    , handler<interrupt::DMA1_STREAM7> // 47: DMA1 Stream7 global interrupt
    , handler<interrupt::FSMC> // 48: FSMC global interrupt
    , handler<interrupt::SDIO> // 49: SDIO global interrupt
    , handler<interrupt::TIM5> // 50: TIM5 global interrupt
    , handler<interrupt::SPI3> // 51: SPI3 global interrupt
    , handler<interrupt::USART4> // 52: UART 4 global interrupt
    , handler<interrupt::UART5> // 53: UART5 global interrupt
    , handler<interrupt::TIM6_GLB_IT_DAC1_DAC2> // 54: TIM6 global and DAC12 underrun interrupts
    , handler<interrupt::TIM7> // 55: TIM7 global interrupt
    , handler<interrupt::DMA2_STREAM0> // 56: DMA2 Stream0 global interrupt
    , handler<interrupt::DMA2_STREAM1> // 57: DMA2 Stream1 global interrupt
    , handler<interrupt::DMA2_STREAM2> // 58: DMA2 Stream2 global interrupt
    , handler<interrupt::DMA2_STREAM3> // 59: DMA2 Stream3 global interrupt
    , handler<interrupt::DMA2_STREAM4> // 60: DMA2 Stream4 global interrupt
    , handler<interrupt::DFSDM1_FLT0> // 61: SD filter0 global interrupt
    , handler<interrupt::DFSDM1_FLT1> // 62: SD filter1 global interrupt
    , handler<interrupt::CAN2_TX> // 63: CAN2 TX interrupts
    , handler<interrupt::CAN2_RX0> // 64: CAN2 RX0 interrupts
    , handler<interrupt::CAN2_RX1> // 65: CAN2 RX1 interrupts
    , handler<interrupt::CAN2_SCE> // 66: CAN2 SCE interrupt
    , handler<interrupt::OTG_FS> // 67: USB On The Go FS global interrupt
    , handler<interrupt::DMA2_STREAM5> // 68: DMA2 Stream5 global interrupt
    , handler<interrupt::DMA2_STREAM6> // 69: DMA2 Stream6 global interrupt
    , handler<interrupt::DMA2_STREAM7> // 70: DMA2 Stream7 global interrupt
    , handler<interrupt::USART6> // 71: USART6 global interrupt
    , handler<interrupt::I2C3_EV> // 72: I2C3 event interrupt
    , handler<interrupt::I2C3_ER> // 73: I2C3 error interrupt
    , handler<interrupt::OTG_HS_EP1_OUT> // 74: USB On The Go HS End Point 1 Out global interrupt
    , handler<interrupt::OTG_HS_EP1_IN> // 75: USB On The Go HS End Point 1 In global interrupt
    , handler<interrupt::OTG_HS_WKUP> // 76: USB On The Go HS Wakeup through EXTI interrupt
    , handler<interrupt::CAN3_SCE> // 77: CAN 3 SCE interrupt
    , handler<interrupt::DCMI> // 78: DCMI global interrupt
    , handler<interrupt::CRYPTO> // 79: AES global interrupt
    , handler<interrupt::HASH_RNG> // 80: Hash and Rng global interrupt
    , handler<interrupt::FPU> // 81: FPU interrupt
    , handler<interrupt::USART7> // 82: USART7 global interrupt
    , handler<interrupt::USART8> // 83: USART8 global interrupt
    , handler<interrupt::SPI4> // 84: SPI4 global interrupt
    , handler<interrupt::SPI5> // 85: SPI 5 global interrupt
    , handler<interrupt::SPI6> // 86: SPI 6 global interrupt
    , handler<interrupt::SAI1> // 87: SAI1 global interrupt
    , handler<interrupt::LCD_TFT> // 88: LTDC global interrupt
    , handler<interrupt::LCD_TFT_1> // 89: LTDC global error interrupt
    , handler<interrupt::DMA2D> // 90: DMA2D global interrupt
    , handler<interrupt::QUADSPI> // 91: QuadSPI global interrupt
    , handler<interrupt::QUAD_SP> // 92: Quad-SPI global interrupt
    , handler<interrupt::HDMI_CEC> // 93: HDMI-CEC global interrupt
    , handler<interrupt::SPDIF_RX> // 94: SPDIF-Rx global interrupt
    , handler<interrupt::I2CFMP1_EVENT> // 95: I2CFMP1 event interrupt
    , handler<interrupt::I2CFMP1_ERROR> // 96: I2CFMP1 error interrupt
    , handler<interrupt::LPTIM1_OR_IT_EIT_23> // 97: LP Timer global interrupt or EXT1 interrupt line 23
    , handler<interrupt::DFSDM2_FILTER1> // 98: DFSDM2 SD filter 1 global interrupt
    , handler<interrupt::DFSDM2_FILTER2> // 99: DFSDM2 SD filter 2 global interrupt
    , handler<interrupt::DFSDM2_FILTER3> // 100: DFSDM2 SD filter 3 global interrupt
    , handler<interrupt::DFSDM2_FILTER4> // 101: DFSDM2 SD filter 4 global interrupt
    };

