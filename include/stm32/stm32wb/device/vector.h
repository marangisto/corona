#pragma once

////
//
//      STM32WB vectors
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
template<> void handler<interrupt::RTC_TAMP>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::RTC_WKUP>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::FLASH>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::RCC>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI0>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI4>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA1_CHANNEL1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA1_CHANNEL2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA1_CHANNEL3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA1_CHANNEL4>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA1_CHANNEL5>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA1_CHANNEL6>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA1_CHANNEL7>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::ADC1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::USB_HP>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::USB_LP>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::C2SEV>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::COMP>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI5_9>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM1_BRK>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM1_UP>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM1_TRG_COM_TIM17>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM1_CC>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::PKA>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::I2C1_EV>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::I2C1_ER>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::I2C3_EV>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::I2C3_ER>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SPI1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SPI2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::USART1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::LPUART1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SAI1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TSC>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI10_15>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::RTC_ALARM>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::CRS_IT>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::PWR_SOTF>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::IPCC_C1_RX_IT>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::IPCC_C1_TX_IT>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::HSEM>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::LPTIM1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::LPTIM2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::LCD>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::QUADSPI>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::AES1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::AES2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TRUE_RNG>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::FPU>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2_CH1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2_CH2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2_CH3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2_CH4>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2_CH5>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2_CH6>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2_CH7>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
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
    , handler<interrupt::PVD> // 1: PVD through EXTI[16] (C1IMR2[20])
    , handler<interrupt::RTC_TAMP> // 2: RTC/TAMP/CSS on LSE through EXTI line 19 interrupt
    , handler<interrupt::RTC_WKUP> // 3: RTC wakeup interrupt through EXTI[19]
    , handler<interrupt::FLASH> // 4: Flash global interrupt
    , handler<interrupt::RCC> // 5: RCC global interrupt
    , handler<interrupt::EXTI0> // 6: EXTI line 0 interrupt through EXTI[0]
    , handler<interrupt::EXTI1> // 7: EXTI line 0 interrupt through EXTI[1]
    , handler<interrupt::EXTI2> // 8: EXTI line 0 interrupt through EXTI[2]
    , handler<interrupt::EXTI3> // 9: EXTI line 0 interrupt through EXTI[3]
    , handler<interrupt::EXTI4> // 10: EXTI line 0 interrupt through EXTI[4]
    , handler<interrupt::DMA1_CHANNEL1> // 11: DMA1 Channel1 global interrupt
    , handler<interrupt::DMA1_CHANNEL2> // 12: DMA1 Channel2 global interrupt
    , handler<interrupt::DMA1_CHANNEL3> // 13: DMA1 Channel3 interrupt
    , handler<interrupt::DMA1_CHANNEL4> // 14: DMA1 Channel4 interrupt
    , handler<interrupt::DMA1_CHANNEL5> // 15: DMA1 Channel5 interrupt
    , handler<interrupt::DMA1_CHANNEL6> // 16: DMA1 Channel6 interrupt
    , handler<interrupt::DMA1_CHANNEL7> // 17: DMA1 Channel 7 interrupt
    , handler<interrupt::ADC1> // 18: ADC1 global interrupt
    , handler<interrupt::USB_HP> // 19: USB high priority interrupt
    , handler<interrupt::USB_LP> // 20: USB low priority interrupt (including USB wakeup)
    , handler<interrupt::C2SEV> // 21: CPU2 SEV through EXTI[40]
    , handler<interrupt::COMP> // 22: COMP1 interrupt through EXTI[21:20]
    , handler<interrupt::EXTI5_9> // 23: EXTI line [9:5] interrupt through EXTI[9:5]
    , handler<interrupt::TIM1_BRK> // 24: Timer 1 break interrupt
    , handler<interrupt::TIM1_UP> // 25: Timer 1 Update
    , handler<interrupt::TIM1_TRG_COM_TIM17> // 26: TIM1 Trigger and Commutation interrupts and TIM17 global interrupt
    , handler<interrupt::TIM1_CC> // 27: TIM1 Capture Compare interrupt
    , handler<interrupt::TIM2> // 28: TIM2 global interrupt
    , handler<interrupt::PKA> // 29: Private key accelerator interrupt
    , handler<interrupt::I2C1_EV> // 30: I2C1 event interrupt
    , handler<interrupt::I2C1_ER> // 31: I2C1 error interrupt
    , handler<interrupt::I2C3_EV> // 32: I2C3 event interrupt
    , handler<interrupt::I2C3_ER> // 33: I2C3 error interrupt
    , handler<interrupt::SPI1> // 34: SPI 1 global interrupt
    , handler<interrupt::SPI2> // 35: SPI1 global interrupt
    , handler<interrupt::USART1> // 36: USART1 global interrupt
    , handler<interrupt::LPUART1> // 37: LPUART1 global interrupt
    , handler<interrupt::SAI1> // 38: SAI1 global interrupt
    , handler<interrupt::TSC> // 39: TSC global interrupt
    , handler<interrupt::EXTI10_15> // 40: EXTI line [15:10] interrupt through EXTI[15:10]
    , handler<interrupt::RTC_ALARM> // 41: RTC Alarms (A and B) interrupt through AIEC
    , handler<interrupt::CRS_IT> // 42: CRS interrupt
    , handler<interrupt::PWR_SOTF> // 43: PWR switching on the fly interrupt
    , handler<interrupt::IPCC_C1_RX_IT> // 44: IPCC CPU1 RX occupied interrupt
    , handler<interrupt::IPCC_C1_TX_IT> // 45: IPCC CPU1 TX free interrupt
    , handler<interrupt::HSEM> // 46: Semaphore interrupt 0 to CPU1
    , handler<interrupt::LPTIM1> // 47: LPtimer 1 global interrupt
    , handler<interrupt::LPTIM2> // 48: LPtimer 2 global interrupt
    , handler<interrupt::LCD> // 49: LCD global interrupt
    , handler<interrupt::QUADSPI> // 50: QSPI global interrupt
    , handler<interrupt::AES1> // 51: AES1 global interrupt
    , handler<interrupt::AES2> // 52: AES2 global interrupt
    , handler<interrupt::TRUE_RNG> // 53: True random number generator interrupt
    , handler<interrupt::FPU> // 54: Floating point unit interrupt
    , handler<interrupt::DMA2_CH1> // 55: DMA2 channel 1 interrupt
    , handler<interrupt::DMA2_CH2> // 56: DMA2 channel 2 interrupt
    , handler<interrupt::DMA2_CH3> // 57: DMA2 channel 3 interrupt
    , handler<interrupt::DMA2_CH4> // 58: DMA2 channel 4 interrupt
    , handler<interrupt::DMA2_CH5> // 59: DMA2 channel 5 interrupt
    , handler<interrupt::DMA2_CH6> // 60: DMA2 channel 6 interrupt
    , handler<interrupt::DMA2_CH7> // 61: DMA2 channel 7 interrupt
    , handler<interrupt::DMAMUX1_OVR> // 62: DMAMUX1 overrun interrupt
    };

