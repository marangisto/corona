#pragma once

////
//
//      STM32H7 vectors
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
template<> void handler<interrupt::WWDG1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::PVD_PVM>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::RTC_TAMP_STAMP_CSS_LSE>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::RTC_WKUP>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::FLASH>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::RCC>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI0>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI4>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA_STR0>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA_STR1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA_STR2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA_STR3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA_STR4>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA_STR5>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA_STR6>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::ADC1_2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::FDCAN1_IT0>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::FDCAN2_IT0>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::FDCAN1_IT1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::FDCAN2_IT1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI9_5>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM1_BRK>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM1_UP>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM1_TRG_COM>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM_CC>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM4>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::I2C1_EV>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::I2C1_ER>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::I2C2_EV>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::I2C2_ER>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SPI1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SPI2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::USART1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::USART2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::USART3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI15_10>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::RTC_ALARM>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM8_BRK_TIM12>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM8_UP_TIM13>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM8_TRG_COM_TIM14>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM8_CC>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA1_STR7>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::FMC>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SDMMC1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM5>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SPI3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::UART4>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::UART5>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM6_DAC>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM7>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2_STR0>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2_STR1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2_STR2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2_STR3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2_STR4>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::ETH>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::ETH_WKUP>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::FDCAN_CAL>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::CM7_SEV_IT>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::CM4_SEV_IT>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2_STR5>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2_STR6>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2_STR7>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::USART6>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::I2C3_EV>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::I2C3_ER>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::OTG_HS_EP1_OUT>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::OTG_HS_EP1_IN>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::OTG_HS_WKUP>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::OTG_HS>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DCMI>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::CRYP>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::HASH_RNG>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::FPU>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::UART7>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::UART8>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SPI4>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SPI5>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SPI6>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SAI1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::LTDC>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::LTDC_ER>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2D>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SAI2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::QUADSPI>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::LPTIM1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::CEC>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::I2C4_EV>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::I2C4_ER>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SPDIF>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::OTG_FS_EP1_OUT>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::OTG_FS_EP1_IN>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::OTG_FS_WKUP>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::OTG_FS>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMAMUX1_OV>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::HRTIM1_MST>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::HRTIM1_TIMA>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::HRTIM_TIMB>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::HRTIM1_TIMC>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::HRTIM1_TIMD>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::HRTIM_TIME>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::HRTIM1_FLT>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DFSDM1_FLT0>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DFSDM1_FLT1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DFSDM1_FLT2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DFSDM1_FLT3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SAI3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SWPMI1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM15>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM16>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM17>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::MDIOS_WKUP>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::MDIOS>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::JPEG>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::MDMA>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SDMMC>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::HSEM0>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::ADC3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMAMUX2_OVR>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::BDMA_CH1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::BDMA_CH2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::BDMA_CH3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::BDMA_CH4>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::BDMA_CH5>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::BDMA_CH6>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::BDMA_CH7>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::BDMA_CH8>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::COMP>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::LPTIM2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::LPTIM3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::LPTIM4>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::LPTIM5>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::LPUART>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::WWDG1_RST>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::CRS>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SAI4>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::HOLD_CORE>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::WKUP>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::OCTOSPI2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::OTFDEC1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::OTFDEC2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::BDMA1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));

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
    , handler<interrupt::WWDG1> // 0: Window Watchdog interrupt
    , handler<interrupt::PVD_PVM> // 1: PVD through EXTI line
    , handler<interrupt::RTC_TAMP_STAMP_CSS_LSE> // 2: RTC tamper, timestamp
    , handler<interrupt::RTC_WKUP> // 3: RTC Wakeup interrupt
    , handler<interrupt::FLASH> // 4: Flash memory
    , handler<interrupt::RCC> // 5: RCC global interrupt
    , handler<interrupt::EXTI0> // 6: EXTI Line 0 interrupt
    , handler<interrupt::EXTI1> // 7: EXTI Line 1 interrupt
    , handler<interrupt::EXTI2> // 8: EXTI Line 2 interrupt
    , handler<interrupt::EXTI3> // 9: EXTI Line 3interrupt
    , handler<interrupt::EXTI4> // 10: EXTI Line 4interrupt
    , handler<interrupt::DMA_STR0> // 11: DMA1 Stream0
    , handler<interrupt::DMA_STR1> // 12: DMA1 Stream1
    , handler<interrupt::DMA_STR2> // 13: DMA1 Stream2
    , handler<interrupt::DMA_STR3> // 14: DMA1 Stream3
    , handler<interrupt::DMA_STR4> // 15: DMA1 Stream4
    , handler<interrupt::DMA_STR5> // 16: DMA1 Stream5
    , handler<interrupt::DMA_STR6> // 17: DMA1 Stream6
    , handler<interrupt::ADC1_2> // 18: ADC1 and ADC2
    , handler<interrupt::FDCAN1_IT0> // 19: FDCAN1 Interrupt 0
    , handler<interrupt::FDCAN2_IT0> // 20: FDCAN2 Interrupt 0
    , handler<interrupt::FDCAN1_IT1> // 21: FDCAN1 Interrupt 1
    , handler<interrupt::FDCAN2_IT1> // 22: FDCAN2 Interrupt 1
    , handler<interrupt::EXTI9_5> // 23: EXTI Line[9:5] interrupts
    , handler<interrupt::TIM1_BRK> // 24: TIM1 break interrupt
    , handler<interrupt::TIM1_UP> // 25: TIM1 update interrupt
    , handler<interrupt::TIM1_TRG_COM> // 26: TIM1 trigger and commutation
    , handler<interrupt::TIM_CC> // 27: TIM1 capture / compare
    , handler<interrupt::TIM2> // 28: TIM2 global interrupt
    , handler<interrupt::TIM3> // 29: TIM3 global interrupt
    , handler<interrupt::TIM4> // 30: TIM4 global interrupt
    , handler<interrupt::I2C1_EV> // 31: I2C1 event interrupt
    , handler<interrupt::I2C1_ER> // 32: I2C1 error interrupt
    , handler<interrupt::I2C2_EV> // 33: I2C2 event interrupt
    , handler<interrupt::I2C2_ER> // 34: I2C2 error interrupt
    , handler<interrupt::SPI1> // 35: SPI1 global interrupt
    , handler<interrupt::SPI2> // 36: SPI2 global interrupt
    , handler<interrupt::USART1> // 37: USART1 global interrupt
    , handler<interrupt::USART2> // 38: USART2 global interrupt
    , handler<interrupt::USART3> // 39: USART3 global interrupt
    , handler<interrupt::EXTI15_10> // 40: EXTI Line[15:10] interrupts
    , handler<interrupt::RTC_ALARM> // 41: RTC alarms (A and B)
    , 0x0
    , handler<interrupt::TIM8_BRK_TIM12> // 43: TIM8 and 12 break global
    , handler<interrupt::TIM8_UP_TIM13> // 44: TIM8 and 13 update global
    , handler<interrupt::TIM8_TRG_COM_TIM14> // 45: TIM8 and 14 trigger /commutation and global
    , handler<interrupt::TIM8_CC> // 46: TIM8 capture / compare
    , handler<interrupt::DMA1_STR7> // 47: DMA1 Stream7
    , handler<interrupt::FMC> // 48: FMC global interrupt
    , handler<interrupt::SDMMC1> // 49: SDMMC global interrupt
    , handler<interrupt::TIM5> // 50: TIM5 global interrupt
    , handler<interrupt::SPI3> // 51: SPI3 global interrupt
    , handler<interrupt::UART4> // 52: UART4 global interrupt
    , handler<interrupt::UART5> // 53: UART5 global interrupt
    , handler<interrupt::TIM6_DAC> // 54: TIM6 global interrupt
    , handler<interrupt::TIM7> // 55: TIM7 global interrupt
    , handler<interrupt::DMA2_STR0> // 56: DMA2 Stream0 interrupt
    , handler<interrupt::DMA2_STR1> // 57: DMA2 Stream1 interrupt
    , handler<interrupt::DMA2_STR2> // 58: DMA2 Stream2 interrupt
    , handler<interrupt::DMA2_STR3> // 59: DMA2 Stream3 interrupt
    , handler<interrupt::DMA2_STR4> // 60: DMA2 Stream4 interrupt
    , handler<interrupt::ETH> // 61: Ethernet global interrupt
    , handler<interrupt::ETH_WKUP> // 62: Ethernet wakeup through EXTI
    , handler<interrupt::FDCAN_CAL> // 63: CAN2TX interrupts
    , handler<interrupt::CM7_SEV_IT> // 64: Arm Cortex-M7 Send
    , handler<interrupt::CM4_SEV_IT> // 65: Arm Cortex-M4 Send even interrupt
    , 0x0
    , 0x0
    , handler<interrupt::DMA2_STR5> // 68: DMA2 Stream5 interrupt
    , handler<interrupt::DMA2_STR6> // 69: DMA2 Stream6 interrupt
    , handler<interrupt::DMA2_STR7> // 70: DMA2 Stream7 interrupt
    , handler<interrupt::USART6> // 71: USART6 global interrupt
    , handler<interrupt::I2C3_EV> // 72: I2C3 event interrupt
    , handler<interrupt::I2C3_ER> // 73: I2C3 error interrupt
    , handler<interrupt::OTG_HS_EP1_OUT> // 74: OTG_HS out global interrupt
    , handler<interrupt::OTG_HS_EP1_IN> // 75: OTG_HS in global interrupt
    , handler<interrupt::OTG_HS_WKUP> // 76: OTG_HS wakeup interrupt
    , handler<interrupt::OTG_HS> // 77: OTG_HS global interrupt
    , handler<interrupt::DCMI> // 78: DCMI global interrupt
    , handler<interrupt::CRYP> // 79: CRYP global interrupt
    , handler<interrupt::HASH_RNG> // 80: HASH and RNG
    , handler<interrupt::FPU> // 81: Floating point unit interrupt
    , handler<interrupt::UART7> // 82: UART7 global interrupt
    , handler<interrupt::UART8> // 83: UART8 global interrupt
    , handler<interrupt::SPI4> // 84: SPI4 global interrupt
    , handler<interrupt::SPI5> // 85: SPI5 global interrupt
    , handler<interrupt::SPI6> // 86: SPI6 global interrupt
    , handler<interrupt::SAI1> // 87: SAI1 global interrupt
    , handler<interrupt::LTDC> // 88: LCD-TFT global interrupt
    , handler<interrupt::LTDC_ER> // 89: LCD-TFT error interrupt
    , handler<interrupt::DMA2D> // 90: DMA2D global interrupt
    , handler<interrupt::SAI2> // 91: SAI2 global interrupt
    , handler<interrupt::QUADSPI> // 92: QuadSPI global interrupt
    , handler<interrupt::LPTIM1> // 93: LPTIM1 global interrupt
    , handler<interrupt::CEC> // 94: HDMI-CEC global interrupt
    , handler<interrupt::I2C4_EV> // 95: I2C4 event interrupt
    , handler<interrupt::I2C4_ER> // 96: I2C4 error interrupt
    , handler<interrupt::SPDIF> // 97: SPDIFRX global interrupt
    , handler<interrupt::OTG_FS_EP1_OUT> // 98: OTG_FS out global interrupt
    , handler<interrupt::OTG_FS_EP1_IN> // 99: OTG_FS in global interrupt
    , handler<interrupt::OTG_FS_WKUP> // 100: OTG_FS wakeup
    , handler<interrupt::OTG_FS> // 101: OTG_FS global interrupt
    , handler<interrupt::DMAMUX1_OV> // 102: DMAMUX1 overrun interrupt
    , handler<interrupt::HRTIM1_MST> // 103: HRTIM1 master timer interrupt
    , handler<interrupt::HRTIM1_TIMA> // 104: HRTIM1 timer A interrupt
    , handler<interrupt::HRTIM_TIMB> // 105: HRTIM1 timer B interrupt
    , handler<interrupt::HRTIM1_TIMC> // 106: HRTIM1 timer C interrupt
    , handler<interrupt::HRTIM1_TIMD> // 107: HRTIM1 timer D interrupt
    , handler<interrupt::HRTIM_TIME> // 108: HRTIM1 timer E interrupt
    , handler<interrupt::HRTIM1_FLT> // 109: HRTIM1 fault interrupt
    , handler<interrupt::DFSDM1_FLT0> // 110: DFSDM1 filter 0 interrupt
    , handler<interrupt::DFSDM1_FLT1> // 111: DFSDM1 filter 1 interrupt
    , handler<interrupt::DFSDM1_FLT2> // 112: DFSDM1 filter 2 interrupt
    , handler<interrupt::DFSDM1_FLT3> // 113: DFSDM1 filter 3 interrupt
    , handler<interrupt::SAI3> // 114: SAI3 global interrupt
    , handler<interrupt::SWPMI1> // 115: SWPMI global interrupt
    , handler<interrupt::TIM15> // 116: TIM15 global interrupt
    , handler<interrupt::TIM16> // 117: TIM16 global interrupt
    , handler<interrupt::TIM17> // 118: TIM17 global interrupt
    , handler<interrupt::MDIOS_WKUP> // 119: MDIOS wakeup
    , handler<interrupt::MDIOS> // 120: MDIOS global interrupt
    , handler<interrupt::JPEG> // 121: JPEG global interrupt
    , handler<interrupt::MDMA> // 122: MDMA
    , 0x0
    , handler<interrupt::SDMMC> // 124: SDMMC global interrupt
    , handler<interrupt::HSEM0> // 125: HSEM global interrupt 1
    , 0x0
    , handler<interrupt::ADC3> // 127: ADC3 global interrupt
    , handler<interrupt::DMAMUX2_OVR> // 128: DMAMUX2 overrun interrupt
    , handler<interrupt::BDMA_CH1> // 129: BDMA channel 1 interrupt
    , handler<interrupt::BDMA_CH2> // 130: BDMA channel 2 interrupt
    , handler<interrupt::BDMA_CH3> // 131: BDMA channel 3 interrupt
    , handler<interrupt::BDMA_CH4> // 132: BDMA channel 4 interrupt
    , handler<interrupt::BDMA_CH5> // 133: BDMA channel 5 interrupt
    , handler<interrupt::BDMA_CH6> // 134: BDMA channel 6 interrupt
    , handler<interrupt::BDMA_CH7> // 135: BDMA channel 7 interrupt
    , handler<interrupt::BDMA_CH8> // 136: BDMA channel 8 interrupt
    , handler<interrupt::COMP> // 137: COMP1 and COMP2
    , handler<interrupt::LPTIM2> // 138: LPTIM2 timer interrupt
    , handler<interrupt::LPTIM3> // 139: LPTIM2 timer interrupt
    , handler<interrupt::LPTIM4> // 140: LPTIM2 timer interrupt
    , handler<interrupt::LPTIM5> // 141: LPTIM2 timer interrupt
    , handler<interrupt::LPUART> // 142: LPUART global interrupt
    , handler<interrupt::WWDG1_RST> // 143: Window Watchdog interrupt
    , handler<interrupt::CRS> // 144: Clock Recovery System globa
    , 0x0
    , handler<interrupt::SAI4> // 146: SAI4 global interrupt
    , 0x0
    , handler<interrupt::HOLD_CORE> // 148: CPU2 hold
    , handler<interrupt::WKUP> // 149: WKUP1 to WKUP6 pins
    , handler<interrupt::OCTOSPI2> // 150: OCTOSPI2 global interrupt
    , handler<interrupt::OTFDEC1> // 151: OTFDEC1 interrupt
    , handler<interrupt::OTFDEC2> // 152: OTFDEC2 interrupt
    , 0x0
    , handler<interrupt::BDMA1> // 154: BDMA1
    };

