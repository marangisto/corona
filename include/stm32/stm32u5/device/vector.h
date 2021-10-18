#pragma once

////
//
//      STM32U5 vectors
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
template<> void handler<interrupt::PDV_AVD>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::RTC>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::RTC_S>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TAMP>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::RAMCFG>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
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
template<> void handler<interrupt::SAES>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::GPDMA1_CH0>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::GPDMA1_CH1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::GPDMA1_CH2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::GPDMA1_CH3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::GPDMA1_CH4>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::GPDMA1_CH5>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::GPDMA1_CH6>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::GPDMA1_CH7>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::ADC1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DAC1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
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
template<> void handler<interrupt::OTG_FS>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::FMC>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::OCTOSPI1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::PWR_S3WU>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SDMMC1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SDMMC2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::I2C3_EV>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::I2C3_ER>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SAI1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SAI2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TSC>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::AES>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::RNG>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::HASH>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::PKA>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::LPTIM3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SPI3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::I2C4_ER>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::I2C4_EV>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::MDF1_FLT0>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::MDF1_FLT1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::MDF1_FLT2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::MDF1_FLT3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::UCPD1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::ICACHE>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::OTFDEC1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::OTFDEC2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::LPTIM4>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DCACHE>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::ADF1_FLT0>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::ADC4>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::LPDMA1_CH0>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::LPDMA1_CH1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::LPDMA1_CH2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::LPDMA1_CH3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2D>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DCMI>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::OCTOSPI2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::MDF1_FLT4>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::MDF1_FLT5>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::CORDIC>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::FMAC>() __attribute__ ((weak, alias("_Z17__default_handlerv")));

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
    , handler<interrupt::PDV_AVD> // 1: Power voltage monitor/Analog voltage monitor
    , handler<interrupt::RTC> // 2: RTC global non-secure interrupts
    , handler<interrupt::RTC_S> // 3: RTC secure global secure interrupts
    , handler<interrupt::TAMP> // 4: Tamper global interrupts
    , handler<interrupt::RAMCFG> // 5: RAM configuration global interrupt
    , handler<interrupt::FLASH> // 6: Flash memory non-secure global interrupt
    , handler<interrupt::FLASH_S> // 7: Flash memory secure global interrupt
    , 0x0
    , handler<interrupt::RCC> // 9: RCC secure global interrupt
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
    , 0x0
    , handler<interrupt::SAES> // 28: SAES global interrupt
    , handler<interrupt::GPDMA1_CH0> // 29: GPDMA1 channel 0 global interrupt
    , handler<interrupt::GPDMA1_CH1> // 30: GPDMA1 channel 1 global interrupt
    , handler<interrupt::GPDMA1_CH2> // 31: GPDMA1 channel 2 global interrupt
    , handler<interrupt::GPDMA1_CH3> // 32: GPDMA1 channel 3 global interrupt
    , handler<interrupt::GPDMA1_CH4> // 33: GPDMA1 channel 4 global interrupt
    , handler<interrupt::GPDMA1_CH5> // 34: GPDMA1 channel 5 global interrupt
    , handler<interrupt::GPDMA1_CH6> // 35: GPDMA1 channel 6 global interrupt
    , handler<interrupt::GPDMA1_CH7> // 36: GPDMA1 channel 7 global interrupt
    , handler<interrupt::ADC1> // 37: ADC1 (16 bits) global interrupt
    , handler<interrupt::DAC1> // 38: DAC1 global interrupt
    , handler<interrupt::FDCAN1_IT0> // 39: FDCAN1 Interrupt 0
    , handler<interrupt::FDCAN1_IT1> // 40: FDCAN1 Interrupt 1
    , handler<interrupt::TIM1_BRK> // 41: TIM1 Break - transition error -index error
    , handler<interrupt::TIM1_UP> // 42: TIM1 Update
    , handler<interrupt::TIM1_TRG_COM> // 43: TIM1 Trigger and Commutation - direction change interrupt -index
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
    , handler<interrupt::LPTIM1> // 67: LPTIM1 global interrupt
    , handler<interrupt::LPTIM2> // 68: LPTIM2 global interrupt
    , handler<interrupt::TIM15> // 69: TIM15 global interrupt
    , handler<interrupt::TIM16> // 70: TIM16 global interrupt
    , handler<interrupt::TIM17> // 71: TIM17 global interrupt
    , handler<interrupt::COMP> // 72: COMP1 and COMP2 interrupts
    , handler<interrupt::OTG_FS> // 73: USB OTG FS global interrupt
    , 0x0
    , handler<interrupt::FMC> // 75: FMC global interrupt
    , handler<interrupt::OCTOSPI1> // 76: OCTOSPI1 global interrupt
    , handler<interrupt::PWR_S3WU> // 77: PWR wakeup from Stop 3 interrupt
    , handler<interrupt::SDMMC1> // 78: SDMMC1 global interrupt
    , handler<interrupt::SDMMC2> // 79: SDMMC2 global interrupt
    , 0x0
    , 0x0
    , 0x0
    , 0x0
    , 0x0
    , 0x0
    , 0x0
    , 0x0
    , handler<interrupt::I2C3_EV> // 88: I2C3 event interrupt
    , handler<interrupt::I2C3_ER> // 89: I2C3 error interrupt
    , handler<interrupt::SAI1> // 90: SAI1 global interrupt
    , handler<interrupt::SAI2> // 91: SAI2 global interrupt
    , handler<interrupt::TSC> // 92: TSC global interrupt
    , handler<interrupt::AES> // 93: AES global interrupt
    , handler<interrupt::RNG> // 94: RNG global interrupt
    , 0x0
    , handler<interrupt::HASH> // 96: HASH interrupt
    , handler<interrupt::PKA> // 97: PKA global interrupt
    , handler<interrupt::LPTIM3> // 98: LPTIM3 global interrupt
    , handler<interrupt::SPI3> // 99: SPI3 global interrupt
    , handler<interrupt::I2C4_ER> // 100: I2C4 error interrupt
    , handler<interrupt::I2C4_EV> // 101: I2C4 event interrupt
    , handler<interrupt::MDF1_FLT0> // 102: MDF1 filter 0 global interrupt
    , handler<interrupt::MDF1_FLT1> // 103: MDF1 filter 1 global interrupt
    , handler<interrupt::MDF1_FLT2> // 104: MDF1 filter 2 global interrupt
    , handler<interrupt::MDF1_FLT3> // 105: MDF1 filter 3 global interrupt
    , handler<interrupt::UCPD1> // 106: UCPD1 global interrupt
    , handler<interrupt::ICACHE> // 107: Instruction cache global interrupt
    , handler<interrupt::OTFDEC1> // 108: OTFDEC1 interrupt
    , handler<interrupt::OTFDEC2> // 109: OTFDEC2 interrupt
    , handler<interrupt::LPTIM4> // 110: LPTIM4 global interrupt
    , handler<interrupt::DCACHE> // 111: Data cache global interrupt
    , handler<interrupt::ADF1_FLT0> // 112: ADF1 filter 0 global interrupt
    , handler<interrupt::ADC4> // 113: ADC4 (12 bits) global interrupt
    , handler<interrupt::LPDMA1_CH0> // 114: LPDMA1 SmartRun channel 0 global interrupt
    , handler<interrupt::LPDMA1_CH1> // 115: LPDMA1 SmartRun channel 1 global interrupt
    , handler<interrupt::LPDMA1_CH2> // 116: LPDMA1 SmartRun channel 2 global interrupt
    , handler<interrupt::LPDMA1_CH3> // 117: LPDMA1 SmartRun channel 3 global interrupt
    , handler<interrupt::DMA2D> // 118: DMA2D global interrupt
    , handler<interrupt::DCMI> // 119: Digital camera interface
    , handler<interrupt::OCTOSPI2> // 120: OCTOSPI2 global interrupt
    , handler<interrupt::MDF1_FLT4> // 121: MDF1 filter 4 global interrupt
    , handler<interrupt::MDF1_FLT5> // 122: MDF1 filter 5 global interrupt
    , handler<interrupt::CORDIC> // 123: Cordic interrupt
    , handler<interrupt::FMAC> // 124: FMAC interrupt
    };

