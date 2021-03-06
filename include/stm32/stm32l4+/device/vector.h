#pragma once

////
//
//      STM32L4+ vectors
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
template<> void handler<interrupt::PVD_PVM>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TAMP_STAMP>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::RTC_WKUP>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::FLASH>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::RCC>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI0>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI4>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA1_CH1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA1_CH2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA1_CH3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA1_CH4>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA1_CH5>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA1_CH6>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA1_CH7>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::ADC1_2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::CAN1_TX>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::CAN1_RX0>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::CAN1_RX1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::CAN1_SCE>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI9_5>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM1_BRK_TIM15>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM1_UP_TIM16>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM1_TRG_COM_TIM17>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM1_CC>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
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
template<> void handler<interrupt::DFSDM1_FLT3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM8_BRK>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM8_UP>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM8_TRG_COM>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM8_CC>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SDMMC2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::FMC>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SDMMC1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM5>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SPI3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::UART4>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::UART5>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM6_DACUNDER>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM7>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2_CH1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2_CH2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2_CH3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2_CH4>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2_CH5>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DFSDM1_FLT0>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DFSDM1_FLT1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DFSDM1_FLT2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::COMP>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::LPTIM1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::LPTIM2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::OTG_FS>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2_CH6>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2_CH7>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::LPUART1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::OCTOSPI1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::I2C3_EV>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::I2C3_ER>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SAI1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SAI2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::OCTOSPI2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TSC>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DSIHSOT>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::AES>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::RNG_HASH>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::FPU>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::CRS>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::I2C4_ER>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::I2C4_EV>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DCMI>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2D>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::LCD_TFT>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::LCD_TFT_ER>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::GFXMMU>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMAMUX1_OVR>() __attribute__ ((weak, alias("_Z17__default_handlerv")));

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
    , handler<interrupt::PVD_PVM> // 1: PVD through EXTI line detection
    , handler<interrupt::TAMP_STAMP> // 2: Tamper and TimeStamp interrupts
    , handler<interrupt::RTC_WKUP> // 3: RTC Tamper or TimeStamp /CSS on LSE through EXTI line 19 interrupts
    , handler<interrupt::FLASH> // 4: Flash global interrupt
    , handler<interrupt::RCC> // 5: RCC global interrupt
    , handler<interrupt::EXTI0> // 6: EXTI Line 0 interrupt
    , handler<interrupt::EXTI1> // 7: EXTI Line 1 interrupt
    , handler<interrupt::EXTI2> // 8: EXTI Line 2 interrupt
    , handler<interrupt::EXTI3> // 9: EXTI Line 3 interrupt
    , handler<interrupt::EXTI4> // 10: EXTI Line 4 interrupt
    , handler<interrupt::DMA1_CH1> // 11: DMA1 Channel1 global interrupt
    , handler<interrupt::DMA1_CH2> // 12: DMA1 Channel2 global interrupt
    , handler<interrupt::DMA1_CH3> // 13: DMA1 Channel3 interrupt
    , handler<interrupt::DMA1_CH4> // 14: DMA1 Channel4 interrupt
    , handler<interrupt::DMA1_CH5> // 15: DMA1 Channel5 interrupt
    , handler<interrupt::DMA1_CH6> // 16: DMA1 Channel6 interrupt
    , handler<interrupt::DMA1_CH7> // 17: DMA1 Channel 7 interrupt
    , handler<interrupt::ADC1_2> // 18: ADC1 and ADC2 global interrupt
    , handler<interrupt::CAN1_TX> // 19: CAN1 TX interrupts
    , handler<interrupt::CAN1_RX0> // 20: CAN1 RX0 interrupts
    , handler<interrupt::CAN1_RX1> // 21: CAN1 RX1 interrupts
    , handler<interrupt::CAN1_SCE> // 22: CAN1 SCE interrupt
    , handler<interrupt::EXTI9_5> // 23: EXTI Line5 to Line9 interrupts
    , handler<interrupt::TIM1_BRK_TIM15> // 24: TIM1 Break/TIM15 global interrupts
    , handler<interrupt::TIM1_UP_TIM16> // 25: TIM1 Update/TIM16 global interrupts
    , handler<interrupt::TIM1_TRG_COM_TIM17> // 26: TIM1 Trigger and Commutation interrupts and TIM17 global interrupt
    , handler<interrupt::TIM1_CC> // 27: TIM1 Capture Compare interrupt
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
    , handler<interrupt::EXTI15_10> // 40: EXTI Lines 10 to 15 interrupts
    , handler<interrupt::RTC_ALARM> // 41: RTC alarms through EXTI line 18 interrupts
    , handler<interrupt::DFSDM1_FLT3> // 42: DFSDM1_FLT3 global interrupt
    , handler<interrupt::TIM8_BRK> // 43: TIM8 Break Interrupt
    , handler<interrupt::TIM8_UP> // 44: TIM8 Update Interrupt
    , handler<interrupt::TIM8_TRG_COM> // 45: TIM8 Trigger and Commutation Interrupt
    , handler<interrupt::TIM8_CC> // 46: TIM8 Capture Compare Interrupt
    , handler<interrupt::SDMMC2> // 47: SDMMC2 global Interrupt
    , handler<interrupt::FMC> // 48: FMC global Interrupt
    , handler<interrupt::SDMMC1> // 49: SDMMC1 global Interrupt
    , handler<interrupt::TIM5> // 50: TIM5 global Interrupt
    , handler<interrupt::SPI3> // 51: SPI3 global Interrupt
    , handler<interrupt::UART4> // 52: UART4 global Interrupt
    , handler<interrupt::UART5> // 53: UART5 global Interrupt
    , handler<interrupt::TIM6_DACUNDER> // 54: TIM6 global and DAC1 and 2 underrun error interrupts
    , handler<interrupt::TIM7> // 55: TIM7 global interrupt
    , handler<interrupt::DMA2_CH1> // 56: DMA2 Channel 1 global Interrupt
    , handler<interrupt::DMA2_CH2> // 57: DMA2 Channel 2 global Interrupt
    , handler<interrupt::DMA2_CH3> // 58: DMA2 Channel 3 global Interrupt
    , handler<interrupt::DMA2_CH4> // 59: DMA2 Channel 4 global Interrupt
    , handler<interrupt::DMA2_CH5> // 60: DMA2 Channel 5 global Interrupt
    , handler<interrupt::DFSDM1_FLT0> // 61: DFSDM1_FLT0 global interrupt
    , handler<interrupt::DFSDM1_FLT1> // 62: DFSDM1_FLT1 global interrupt
    , handler<interrupt::DFSDM1_FLT2> // 63: DFSDM1_FLT2 global interrupt
    , handler<interrupt::COMP> // 64: COMP1 and COMP2 interrupts
    , handler<interrupt::LPTIM1> // 65: LP TIM1 interrupt
    , handler<interrupt::LPTIM2> // 66: LP TIM2 interrupt
    , handler<interrupt::OTG_FS> // 67: USB OTG FS global Interrupt
    , handler<interrupt::DMA2_CH6> // 68: DMA2 Channel 6 global Interrupt
    , handler<interrupt::DMA2_CH7> // 69: DMA2 Channel 7 global Interrupt
    , handler<interrupt::LPUART1> // 70: LPUART1 global interrupt
    , handler<interrupt::OCTOSPI1> // 71: OCTOSPI1 global interrupt
    , handler<interrupt::I2C3_EV> // 72: I2C3 event interrupt
    , handler<interrupt::I2C3_ER> // 73: I2C3 error interrupt
    , handler<interrupt::SAI1> // 74: SAI1 global interrupt
    , handler<interrupt::SAI2> // 75: SAI2 global interrupt
    , handler<interrupt::OCTOSPI2> // 76: OCTOSPI2 global interrupt
    , handler<interrupt::TSC> // 77: TSC global interrupt
    , handler<interrupt::DSIHSOT> // 78: DSI global interrupt
    , handler<interrupt::AES> // 79: AES global interrupt
    , handler<interrupt::RNG_HASH> // 80: RNG and HASH global interrupt
    , handler<interrupt::FPU> // 81: Floating point interrupt
    , handler<interrupt::CRS> // 82: CRS global interrupt
    , handler<interrupt::I2C4_ER> // 83: I2C4 error interrupt
    , handler<interrupt::I2C4_EV> // 84: I2C4 event interrupt
    , handler<interrupt::DCMI> // 85: DCMI global interrupt
    , 0x0
    , 0x0
    , 0x0
    , 0x0
    , handler<interrupt::DMA2D> // 90: DMA2D global interrupt
    , handler<interrupt::LCD_TFT> // 91: LTDC global interrupt
    , handler<interrupt::LCD_TFT_ER> // 92: LTDC global error interrupt
    , handler<interrupt::GFXMMU> // 93: GFXMMU global error interrupt
    , handler<interrupt::DMAMUX1_OVR> // 94: DMAMUX Overrun interrupt
    };

