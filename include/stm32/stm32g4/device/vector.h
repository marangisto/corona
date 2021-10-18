#pragma once

////
//
//      STM32G4 vectors
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
template<> void handler<interrupt::RTC_TAMP_CSS_LSE>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
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
template<> void handler<interrupt::USB_HP>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::USB_LP>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::FDCAN1_INTR1_IT>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::FDCAN1_INTR0_IT>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI9_5>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM1_BRK_TIM15>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM1_UP_TIM16>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM1_TRG_COM>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
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
template<> void handler<interrupt::USBWAKEUP>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM8_BRK>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM8_UP>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM8_TRG_COM>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM8_CC>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::ADC3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::FMC>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::LPTIM1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
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
template<> void handler<interrupt::ADC4>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::ADC5>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::UCPD1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::COMP1_2_3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::COMP4_5_6>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::COMP7>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::HRTIM_MASTER_IRQN>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::HRTIM_TIMA_IRQN>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::HRTIM_TIMB_IRQN>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::HRTIM_TIMC_IRQN>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::HRTIM_TIMD_IRQN>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::HRTIM_TIME_IRQN>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::HRTIM_TIM_FLT_IRQN>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::HRTIM_TIMF_IRQN>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::CRS>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SAI>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM20_BRK>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM20_UP>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM20_TRG_COM>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM20_CC>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::FPU>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::I2C4_EV>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::I2C4_ER>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SPI4>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::AES>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::FDCAN2_INTR0>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::FDCAN2_INTR1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::FDCAN3_INTR0>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::FDCAN3_INTR1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::RNG>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::LPUART>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::I2C3_EV>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::I2C3_ER>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMAMUX_OVR>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::QUADSPI>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA1_CH8>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2_CH6>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2_CH7>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2_CH8>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
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
    , handler<interrupt::PVD_PVM> // 1: PVD through EXTI line detection
    , handler<interrupt::RTC_TAMP_CSS_LSE> // 2: RTC_TAMP_CSS_LSE
    , handler<interrupt::RTC_WKUP> // 3: RTC Wakeup timer
    , handler<interrupt::FLASH> // 4: FLASH
    , handler<interrupt::RCC> // 5: RCC
    , handler<interrupt::EXTI0> // 6: EXTI Line0 interrupt
    , handler<interrupt::EXTI1> // 7: EXTI Line1 interrupt
    , handler<interrupt::EXTI2> // 8: EXTI Line2 interrupt
    , handler<interrupt::EXTI3> // 9: EXTI Line3 interrupt
    , handler<interrupt::EXTI4> // 10: EXTI Line4 interrupt
    , handler<interrupt::DMA1_CH1> // 11: DMA1 channel 1 interrupt
    , handler<interrupt::DMA1_CH2> // 12: DMA1 channel 2 interrupt
    , handler<interrupt::DMA1_CH3> // 13: DMA1 channel 3 interrupt
    , handler<interrupt::DMA1_CH4> // 14: DMA1 channel 4 interrupt
    , handler<interrupt::DMA1_CH5> // 15: DMA1 channel 5 interrupt
    , handler<interrupt::DMA1_CH6> // 16: DMA1 channel 6 interrupt
    , handler<interrupt::DMA1_CH7> // 17: DMA1 channel 7 interrupt
    , handler<interrupt::ADC1_2> // 18: ADC1 and ADC2 global interrupt
    , handler<interrupt::USB_HP> // 19: USB_HP
    , handler<interrupt::USB_LP> // 20: USB_LP
    , handler<interrupt::FDCAN1_INTR1_IT> // 21: fdcan1_intr1_it
    , handler<interrupt::FDCAN1_INTR0_IT> // 22: fdcan1_intr0_it
    , handler<interrupt::EXTI9_5> // 23: EXTI9_5
    , handler<interrupt::TIM1_BRK_TIM15> // 24: TIM1_BRK_TIM15
    , handler<interrupt::TIM1_UP_TIM16> // 25: TIM1_UP_TIM16
    , handler<interrupt::TIM1_TRG_COM> // 26: TIM1_TRG_COM/
    , handler<interrupt::TIM1_CC> // 27: TIM1 capture compare interrupt
    , handler<interrupt::TIM2> // 28: TIM2
    , handler<interrupt::TIM3> // 29: TIM3
    , handler<interrupt::TIM4> // 30: TIM4
    , handler<interrupt::I2C1_EV> // 31: I2C1_EV
    , handler<interrupt::I2C1_ER> // 32: I2C1_ER
    , handler<interrupt::I2C2_EV> // 33: I2C2_EV
    , handler<interrupt::I2C2_ER> // 34: I2C2_ER
    , handler<interrupt::SPI1> // 35: SPI1
    , handler<interrupt::SPI2> // 36: SPI2
    , handler<interrupt::USART1> // 37: USART1
    , handler<interrupt::USART2> // 38: USART2
    , handler<interrupt::USART3> // 39: USART3
    , handler<interrupt::EXTI15_10> // 40: EXTI15_10
    , handler<interrupt::RTC_ALARM> // 41: RTC_ALARM
    , handler<interrupt::USBWAKEUP> // 42: USBWakeUP
    , handler<interrupt::TIM8_BRK> // 43: TIM8_BRK
    , handler<interrupt::TIM8_UP> // 44: TIM8_UP
    , handler<interrupt::TIM8_TRG_COM> // 45: TIM8_TRG_COM
    , handler<interrupt::TIM8_CC> // 46: TIM8_CC
    , handler<interrupt::ADC3> // 47: ADC3
    , handler<interrupt::FMC> // 48: FMC
    , handler<interrupt::LPTIM1> // 49: LPTIM1
    , handler<interrupt::TIM5> // 50: TIM5
    , handler<interrupt::SPI3> // 51: SPI3
    , handler<interrupt::UART4> // 52: UART4
    , handler<interrupt::UART5> // 53: UART5
    , handler<interrupt::TIM6_DACUNDER> // 54: TIM6_DACUNDER
    , handler<interrupt::TIM7> // 55: TIM7
    , handler<interrupt::DMA2_CH1> // 56: DMA2_CH1
    , handler<interrupt::DMA2_CH2> // 57: DMA2_CH2
    , handler<interrupt::DMA2_CH3> // 58: DMA2_CH3
    , handler<interrupt::DMA2_CH4> // 59: DMA2_CH4
    , handler<interrupt::DMA2_CH5> // 60: DMA2_CH5
    , handler<interrupt::ADC4> // 61: ADC4
    , handler<interrupt::ADC5> // 62: ADC5
    , handler<interrupt::UCPD1> // 63: UCPD1
    , handler<interrupt::COMP1_2_3> // 64: COMP1_2_3
    , handler<interrupt::COMP4_5_6> // 65: COMP4_5_6
    , handler<interrupt::COMP7> // 66: COMP7
    , handler<interrupt::HRTIM_MASTER_IRQN> // 67: HRTIM_Master_IRQn
    , handler<interrupt::HRTIM_TIMA_IRQN> // 68: HRTIM_TIMA_IRQn
    , handler<interrupt::HRTIM_TIMB_IRQN> // 69: HRTIM_TIMB_IRQn
    , handler<interrupt::HRTIM_TIMC_IRQN> // 70: HRTIM_TIMC_IRQn
    , handler<interrupt::HRTIM_TIMD_IRQN> // 71: HRTIM_TIMD_IRQn
    , handler<interrupt::HRTIM_TIME_IRQN> // 72: HRTIM_TIME_IRQn
    , handler<interrupt::HRTIM_TIM_FLT_IRQN> // 73: HRTIM_TIM_FLT_IRQn
    , handler<interrupt::HRTIM_TIMF_IRQN> // 74: HRTIM_TIMF_IRQn
    , handler<interrupt::CRS> // 75: CRS
    , handler<interrupt::SAI> // 76: SAI
    , handler<interrupt::TIM20_BRK> // 77: TIM20_BRK
    , handler<interrupt::TIM20_UP> // 78: TIM20_UP
    , handler<interrupt::TIM20_TRG_COM> // 79: TIM20_TRG_COM
    , handler<interrupt::TIM20_CC> // 80: TIM20_CC
    , handler<interrupt::FPU> // 81: Floating point unit interrupt
    , handler<interrupt::I2C4_EV> // 82: I2C4_EV
    , handler<interrupt::I2C4_ER> // 83: I2C4_ER
    , handler<interrupt::SPI4> // 84: SPI4
    , handler<interrupt::AES> // 85: AES
    , handler<interrupt::FDCAN2_INTR0> // 86: FDCAN2 interrupt
    , handler<interrupt::FDCAN2_INTR1> // 87: FDCAN2 interrupt
    , handler<interrupt::FDCAN3_INTR0> // 88: FDCAN3 interrupt
    , handler<interrupt::FDCAN3_INTR1> // 89: FDCAN3 interrupt
    , handler<interrupt::RNG> // 90: RNG
    , handler<interrupt::LPUART> // 91: LPUART
    , handler<interrupt::I2C3_EV> // 92: I2C3_EV
    , handler<interrupt::I2C3_ER> // 93: I2C3_ER
    , handler<interrupt::DMAMUX_OVR> // 94: DMAMUX_OVR
    , handler<interrupt::QUADSPI> // 95: QUADSPI
    , handler<interrupt::DMA1_CH8> // 96: DMA1_CH8
    , handler<interrupt::DMA2_CH6> // 97: DMA2_CH6
    , handler<interrupt::DMA2_CH7> // 98: DMA2_CH7
    , handler<interrupt::DMA2_CH8> // 99: DMA2_CH8
    , handler<interrupt::CORDIC> // 100: Cordic
    , handler<interrupt::FMAC> // 101: FMAC
    };

