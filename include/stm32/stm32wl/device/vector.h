#pragma once

////
//
//      STM32WL vectors
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
template<> void handler<interrupt::TZIC_ILA>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::PVD_PVM_3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TAMP_RTCSTAMP_LSECSS_RTCALARM_RTCSSRU_RTCWKUP>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::FLASH_RCC_C1SEV>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI1_0>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI3_2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI15_4>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::ADC_COMP_DAC>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA1_CH3_1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA1_CH7_4>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2_CH7_1_DMAMUX1_OVR>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA1_CH1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA1_CH2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA1_CH3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM1_BRK_TIM1_UP_TIM1_TRG_COM_TIM1_CC>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA1_CH5>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA1_CH6>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA1_CH7>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::IPCC_C2_RX_IT_IPCC_C2_TX_IT>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::HSEM>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::PWR_C2H_C2SEV>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::AES_PKA>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::I2C1_EV_I2C1_ER>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::I2C2_EV_I2C2_ER>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::I2C3_EV_I2C3_ER>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM1_TRG_COM>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM1_CC>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::USART1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::USART2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::LPUART1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SUBGHZSPI>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::RADIO_IRQ_BUSY>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::I2C2_EV>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::I2C2_ER>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SPI1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SPI2S2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::USART1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::USART2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::LPUART1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::LPTIM1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::LPTIM2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI15_10>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::RTC_ALARM>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::LPTIM3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SUBGHZSPI>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::IPCC_C1_RX_IT>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::IPCC_C1_TX_IT>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::HSEM>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::I2C3_EV>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::I2C3_ER>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::RADIO_IRQ_BUSY>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::AES>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TRUE_RNG>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::PKA>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
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
    , handler<interrupt::TZIC_ILA> // 0: Security Interrupt controller illegal access interrupt
    , handler<interrupt::PVD_PVM_3> // 1: PVD through EXTI[16], PVM[3] through EXTI[34]
    , handler<interrupt::TAMP_RTCSTAMP_LSECSS_RTCALARM_RTCSSRU_RTCWKUP> // 2: Tamper, TimeStamp, LSECSS,alarm A and B,SSR underflow,RTC wakeup interrupt
    , handler<interrupt::FLASH_RCC_C1SEV> // 3: Flash memory global interrupt and Flash memory ECC single error interrupt,RCC global interrupt,CPU1 SEV through EXTI
    , handler<interrupt::EXTI1_0> // 4: EXTI line 0 interrupt through EXTI
    , handler<interrupt::EXTI3_2> // 5: EXTI line 1 interrupt through EXTI
    , handler<interrupt::EXTI15_4> // 6: EXTI line 2 interrupt through EXTI
    , handler<interrupt::ADC_COMP_DAC> // 7: ADC and DAC global interrupt,COMP1 and COMP2 interrupt through EXTI
    , handler<interrupt::DMA1_CH3_1> // 8: DMA1 channel 3:1 secure and non-secure interrupt (C2IMR2[2:0])
    , handler<interrupt::DMA1_CH7_4> // 9: DMA1 channel 7:4 secure and non-secure interrupt (C2IMR2[6:3])
    , handler<interrupt::DMA2_CH7_1_DMAMUX1_OVR> // 10: DMA2 channel 7:1 secure and non-secure interrupt (C2IMR2[14:8]),DMAMUX1 overrun interrupt (C2IMR2[15])
    , handler<interrupt::DMA1_CH1> // 11: DMA1 channel 1 non-secure interrupt
    , handler<interrupt::DMA1_CH2> // 12: DMA1 channel 2 non-secure interrupt
    , handler<interrupt::DMA1_CH3> // 13: DMA1 channel 3 non-secure interrupt
    , handler<interrupt::TIM1_BRK_TIM1_UP_TIM1_TRG_COM_TIM1_CC> // 14: Timer 1 break, update, trigger and communication,capture compare interrupt
    , handler<interrupt::DMA1_CH5> // 15: DMA1 channel 5 non-secure interrupt
    , handler<interrupt::DMA1_CH6> // 16: DMA1 channel 6 non-secure interrupt
    , handler<interrupt::DMA1_CH7> // 17: DMA1 channel 7 non-secure interrupt
    , handler<interrupt::IPCC_C2_RX_IT_IPCC_C2_TX_IT> // 18: IPCC CPU2 RX occupied interrupt, IPCC CPU2 TX free interrupt
    , handler<interrupt::HSEM> // 19: Semaphore interrupt 1 to CPU2
    , handler<interrupt::PWR_C2H_C2SEV> // 20: PWR CPU2 HOLD wakeup interrupt ,CPU2 SEV through EXTI
    , handler<interrupt::AES_PKA> // 21: AES global interrupt , Private key accelerator interrupt
    , handler<interrupt::I2C1_EV_I2C1_ER> // 22: I2C1 event interrupt,I2C1 error interrupt
    , handler<interrupt::I2C2_EV_I2C2_ER> // 23: I2C2 event interrupt , I2C2 error interrupt
    , handler<interrupt::I2C3_EV_I2C3_ER> // 24: I2C3 event interrupt , I2C2 error interrupt
    , handler<interrupt::TIM1_TRG_COM> // 25: Timer 1 trigger and communication
    , handler<interrupt::TIM1_CC> // 26: Timer 1 capture compare interrupt
    , handler<interrupt::USART1> // 27: USART1 global interrupt
    , handler<interrupt::USART2> // 28: USART2 global interrupt
    , handler<interrupt::LPUART1> // 29: LPUART1 global interrupt
    , handler<interrupt::SUBGHZSPI> // 30: Sub-GHz radio SPI global interrupt
    , handler<interrupt::RADIO_IRQ_BUSY> // 31: Radio IRQs, RFBUSY interrupt through EXTI
    , handler<interrupt::I2C2_EV> // 32: I2C2 event interrupt
    , handler<interrupt::I2C2_ER> // 33: I2C2 error interrupt
    , handler<interrupt::SPI1> // 34: SPI 1 global interrupt
    , handler<interrupt::SPI2S2> // 35: SPI2S2 global interrupt
    , handler<interrupt::USART1> // 36: USART1 global interrupt
    , handler<interrupt::USART2> // 37: USART2 global interrupt
    , handler<interrupt::LPUART1> // 38: LPUART1 global interrupt
    , handler<interrupt::LPTIM1> // 39: LPtimer 1 global interrupt
    , handler<interrupt::LPTIM2> // 40: LPtimer 2 global interrupt
    , handler<interrupt::EXTI15_10> // 41: EXTI line 15_10] interrupt through EXTI
    , handler<interrupt::RTC_ALARM> // 42: RTC alarms A and B interrupt
    , handler<interrupt::LPTIM3> // 43: LPtimer 3 global interrupt
    , handler<interrupt::SUBGHZSPI> // 44: Sub-GHz radio SPI global interrupt
    , handler<interrupt::IPCC_C1_RX_IT> // 45: IPCC CPU1 RX occupied interrupt
    , handler<interrupt::IPCC_C1_TX_IT> // 46: IPCC CPU1 TX free interrupt
    , handler<interrupt::HSEM> // 47: Semaphore interrupt 0 to CPU1
    , handler<interrupt::I2C3_EV> // 48: I2C3 event interrupt
    , handler<interrupt::I2C3_ER> // 49: I2C3 error interrupt
    , handler<interrupt::RADIO_IRQ_BUSY> // 50: Radio IRQs, RFBUSY interrupt through EXTI
    , handler<interrupt::AES> // 51: AES global interrupt
    , handler<interrupt::TRUE_RNG> // 52: True random number generator interrupt
    , handler<interrupt::PKA> // 53: Private key accelerator interrupt
    , handler<interrupt::DMA2_CH1> // 54: DMA2 channel 1 non-secure interrupt
    , handler<interrupt::DMA2_CH2> // 55: DMA2 channel 2 non-secure interrupt
    , handler<interrupt::DMA2_CH3> // 56: DMA2 channel 3 non-secure interrupt
    , handler<interrupt::DMA2_CH4> // 57: DMA2 channel 4 non-secure interrupt
    , handler<interrupt::DMA2_CH5> // 58: DMA2 channel 5 non-secure interrupt
    , handler<interrupt::DMA2_CH6> // 59: DMA2 channel 6 non-secure interrupt
    , handler<interrupt::DMA2_CH7> // 60: DMA2 channel 7 non-secure interrupt
    , handler<interrupt::DMAMUX1_OVR> // 61: DMAMUX1 overrun interrupt
    };

