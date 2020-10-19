#pragma once

////
//
//      STM32L5 vectors
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
template<> void handler<interrupt::RTC>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::RTC_S>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TAMP>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TAMP_S>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::FLASH>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::FLASH_S>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::RCC>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::RCC_S>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI0>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI4>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI5>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI6>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI7>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI8>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI9>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI10>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI11>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI12>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI13>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI14>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI15>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMAMUX1_OVR>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMAMUX1_OVR_S>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA1_CHANNEL1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA1_CHANNEL2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA1_CHANNEL3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA1_CHANNEL4>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA1_CHANNEL5>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA1_CHANNEL6>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA1_CHANNEL7>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA1_CHANNEL8>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::ADC1_2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::FDCAN1_IT0>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::FDCAN1_IT1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM1_BRK>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM1_UP>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM1_TRG_COM>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM1_CC>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM4>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM5>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM6>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM7>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM8_BRK>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM8_UP>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM8_TRG_COM>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM8_CC>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::I2C1_EV>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::I2C1_ER>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::I2C2_EV>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::I2C2_ER>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SPI1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SPI2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::USART1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::USART2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::USART3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::UART4>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::UART5>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::LPUART1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::LPTIM1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::LPTIM2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM15>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM16>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM17>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::COMP>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::USB_FS>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::FMC>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::OCTOSPI1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SDMMC1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2_CH1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2_CH2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2_CH3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2_CH4>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2_CH5>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2_CH6>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2_CH7>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2_CH8>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::I2C3_EV>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::I2C3_ER>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SAI1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SAI2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TSC>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::AES>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::RNG>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::PKA>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::LPTIM3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SPI3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::I2C4_ER>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::I2C4_EV>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DFSDM1_FLT0>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DFSDM1_FLT1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DFSDM1_FLT2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DFSDM1_FLT3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::UCPD1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::ICACHE>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::OTFDEC1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));

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
    , handler<interrupt::PVD_PVM> // 1: PVD/PVM1/PVM2/PVM3/PVM4 through EXTI
    , handler<interrupt::RTC> // 2: RTC global interrupts (EXTI line 17)
    , handler<interrupt::RTC_S> // 3: RTC secure global interrupts (EXTI line 18)
    , handler<interrupt::TAMP> // 4: TAMPTamper global interrupt (EXTI line 19)
    , handler<interrupt::TAMP_S> // 5: Tamper secure global interrupt (EXTI line 20)
    , handler<interrupt::FLASH> // 6: Flash global interrupt
    , handler<interrupt::FLASH_S> // 7: Flash memory secure global interrupt
    , 0x0
    , handler<interrupt::RCC> // 9: RCC global interrupt
    , handler<interrupt::RCC_S> // 10: RCC SECURE GLOBAL INTERRUPT
    , handler<interrupt::EXTI0> // 11: EXTI line0 interrupt
    , handler<interrupt::EXTI1> // 12: EXTI line1 interrupt
    , handler<interrupt::EXTI2> // 13: EXTI line2 interrupt
    , handler<interrupt::EXTI3> // 14: EXTI line3 interrupt
    , handler<interrupt::EXTI4> // 15: EXTI line4 interrupt
    , handler<interrupt::EXTI5> // 16: EXTI line5 interrupt
    , handler<interrupt::EXTI6> // 17: EXTI line6 interrupt
    , handler<interrupt::EXTI7> // 18: EXTI line7 interrupt
    , handler<interrupt::EXTI8> // 19: EXTI line8 interrupt
    , handler<interrupt::EXTI9> // 20: EXTI line9 interrupt
    , handler<interrupt::EXTI10> // 21: EXTI line10 interrupt
    , handler<interrupt::EXTI11> // 22: EXTI line11 interrupt
    , handler<interrupt::EXTI12> // 23: EXTI line12 interrupt
    , handler<interrupt::EXTI13> // 24: EXTI line13 interrupt
    , handler<interrupt::EXTI14> // 25: EXTI line14 interrupt
    , handler<interrupt::EXTI15> // 26: EXTI line15 interrupt
    , handler<interrupt::DMAMUX1_OVR> // 27: DMAMUX overrun interrupt
    , handler<interrupt::DMAMUX1_OVR_S> // 28: DMAMUX1 secure overRun interrupt
    , handler<interrupt::DMA1_CHANNEL1> // 29: DMA1 Channel1 global interrupt
    , handler<interrupt::DMA1_CHANNEL2> // 30: DMA1 Channel2 global interrupt
    , handler<interrupt::DMA1_CHANNEL3> // 31: DMA1 Channel3 interrupt
    , handler<interrupt::DMA1_CHANNEL4> // 32: DMA1 Channel4 interrupt
    , handler<interrupt::DMA1_CHANNEL5> // 33: DMA1 Channel5 interrupt
    , handler<interrupt::DMA1_CHANNEL6> // 34: DMA1 Channel6 interrupt
    , handler<interrupt::DMA1_CHANNEL7> // 35: DMA1 Channel 7 interrupt
    , handler<interrupt::DMA1_CHANNEL8> // 36: DMA1_Channel8
    , handler<interrupt::ADC1_2> // 37: ADC1_2 global interrupt
    , 0x0
    , handler<interrupt::FDCAN1_IT0> // 39: FDCAN1 Interrupt 0
    , handler<interrupt::FDCAN1_IT1> // 40: FDCAN1 Interrupt 1
    , handler<interrupt::TIM1_BRK> // 41: TIM1 Break
    , handler<interrupt::TIM1_UP> // 42: TIM1 Update
    , handler<interrupt::TIM1_TRG_COM> // 43: TIM1 Trigger and Commutation
    , handler<interrupt::TIM1_CC> // 44: TIM1 Capture Compare interrupt
    , handler<interrupt::TIM2> // 45: TIM2 global interrupt
    , handler<interrupt::TIM3> // 46: TIM3 global interrupt
    , handler<interrupt::TIM4> // 47: TIM4 global interrupt
    , handler<interrupt::TIM5> // 48: TIM5 global interrupt
    , handler<interrupt::TIM6> // 49: TIM6 global interrupt
    , handler<interrupt::TIM7> // 50: TIM7 global interrupt
    , handler<interrupt::TIM8_BRK> // 51: TIM8 Break Interrupt
    , handler<interrupt::TIM8_UP> // 52: TIM8 Update Interrupt
    , handler<interrupt::TIM8_TRG_COM> // 53: TIM8 Trigger and Commutation Interrupt
    , handler<interrupt::TIM8_CC> // 54: TIM8 Capture Compare Interrupt
    , handler<interrupt::I2C1_EV> // 55: I2C1 event interrupt
    , handler<interrupt::I2C1_ER> // 56: I2C1 error interrupt
    , handler<interrupt::I2C2_EV> // 57: I2C2 event interrupt
    , handler<interrupt::I2C2_ER> // 58: I2C2 error interrupt
    , handler<interrupt::SPI1> // 59: SPI1 global interrupt
    , handler<interrupt::SPI2> // 60: SPI2 global interrupt
    , handler<interrupt::USART1> // 61: USART1 global interrupt
    , handler<interrupt::USART2> // 62: USART2 global interrupt
    , handler<interrupt::USART3> // 63: USART3 global interrupt
    , handler<interrupt::UART4> // 64: UART4 global interrupt
    , handler<interrupt::UART5> // 65: UART5 global interrupt
    , handler<interrupt::LPUART1> // 66: LPUART1 global interrupt
    , handler<interrupt::LPTIM1> // 67: LP TIM1 interrupt
    , handler<interrupt::LPTIM2> // 68: LP TIM2 interrupt
    , handler<interrupt::TIM15> // 69: TIM15 global interrupt
    , handler<interrupt::TIM16> // 70: TIM16 global interrupt
    , handler<interrupt::TIM17> // 71: TIM17 global interrupt
    , handler<interrupt::COMP> // 72: COMP1 and COMP2 interrupts
    , handler<interrupt::USB_FS> // 73: USB FS global interrupt
    , 0x0
    , handler<interrupt::FMC> // 75: FMC global interrupt
    , handler<interrupt::OCTOSPI1> // 76: OCTOSPI1 global interrupt
    , 0x0
    , handler<interrupt::SDMMC1> // 78: SDMMC1 global interrupt
    , 0x0
    , handler<interrupt::DMA2_CH1> // 80: DMA2_CH1
    , handler<interrupt::DMA2_CH2> // 81: DMA2_CH2
    , handler<interrupt::DMA2_CH3> // 82: DMA2_CH3
    , handler<interrupt::DMA2_CH4> // 83: DMA2_CH4
    , handler<interrupt::DMA2_CH5> // 84: DMA2_CH5
    , handler<interrupt::DMA2_CH6> // 85: DMA2_CH6
    , handler<interrupt::DMA2_CH7> // 86: DMA2_CH7
    , handler<interrupt::DMA2_CH8> // 87: DMA2_CH8
    , handler<interrupt::I2C3_EV> // 88: I2C3 event interrupt
    , handler<interrupt::I2C3_ER> // 89: I2C3 error interrupt
    , handler<interrupt::SAI1> // 90: SAI1 global interrupt
    , handler<interrupt::SAI2> // 91: SAI2 global interrupt
    , handler<interrupt::TSC> // 92: TSC global interrupt
    , handler<interrupt::AES> // 93: AES global interrupts
    , handler<interrupt::RNG> // 94: RNG global interrupt
    , 0x0
    , 0x0
    , handler<interrupt::PKA> // 97: PKA global interrupts
    , handler<interrupt::LPTIM3> // 98: LPTIM3
    , handler<interrupt::SPI3> // 99: SPI3
    , handler<interrupt::I2C4_ER> // 100: I2C4 error interrupt
    , handler<interrupt::I2C4_EV> // 101: I2C4 event interrupt
    , handler<interrupt::DFSDM1_FLT0> // 102: DFSDM1_FLT0 global interrupt
    , handler<interrupt::DFSDM1_FLT1> // 103: DFSDM1_FLT1 global interrupt
    , handler<interrupt::DFSDM1_FLT2> // 104: DFSDM1_FLT2 global interrupt
    , handler<interrupt::DFSDM1_FLT3> // 105: DFSDM1_FLT3 global interrupt
    , handler<interrupt::UCPD1> // 106: UCPD global interrupt
    , handler<interrupt::ICACHE> // 107: ICACHE
    , handler<interrupt::OTFDEC1> // 108: OTFDEC1 secure global interrupt
    };

