#pragma once

////
//
//      STM32F1 vectors
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
template<> void handler<interrupt::TAMPER_STAMP>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
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
template<> void handler<interrupt::ADC1_2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::USB_HP_CAN_TX>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::USB_LP_CAN_RX0>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
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
template<> void handler<interrupt::USBWAKEUP>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM8_BRK>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM8_UP>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM8_TRG_COM>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM8_CC>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::ADC3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::FSMC>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SDIO>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM5>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SPI3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::UART4>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::UART5>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM6_DAC>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM7>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2_CHANNEL1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2_CHANNEL2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2_CHANNEL3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2_CHANNEL4_5>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2_CHANNEL5>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::ETH>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::ETH_WKUP>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::CAN2_TX>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::CAN2_RX0>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::CAN2_RX1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::CAN2_SCE>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::OTG_FS>() __attribute__ ((weak, alias("_Z17__default_handlerv")));

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
    , handler<interrupt::TAMPER_STAMP> // 2: Tamper and TimeStamp through EXTI line interrupts
    , handler<interrupt::RTC_WKUP> // 3: RTC Wakeup through EXTI line interrupt
    , handler<interrupt::FLASH> // 4: Flash global interrupt
    , handler<interrupt::RCC> // 5: RCC global interrupt
    , handler<interrupt::EXTI0> // 6: EXTI Line0 interrupt
    , handler<interrupt::EXTI1> // 7: EXTI Line1 interrupt
    , handler<interrupt::EXTI2> // 8: EXTI Line2 interrupt
    , handler<interrupt::EXTI3> // 9: EXTI Line3 interrupt
    , handler<interrupt::EXTI4> // 10: EXTI Line4 interrupt
    , handler<interrupt::DMA1_CHANNEL1> // 11: DMA1 Channel1 global interrupt
    , handler<interrupt::DMA1_CHANNEL2> // 12: DMA1 Channel2 global interrupt
    , handler<interrupt::DMA1_CHANNEL3> // 13: DMA1 Channel3 global interrupt
    , handler<interrupt::DMA1_CHANNEL4> // 14: DMA1 Channel4 global interrupt
    , handler<interrupt::DMA1_CHANNEL5> // 15: DMA1 Channel5 global interrupt
    , handler<interrupt::DMA1_CHANNEL6> // 16: DMA1 Channel6 global interrupt
    , handler<interrupt::DMA1_CHANNEL7> // 17: DMA1 Channel7 global interrupt
    , handler<interrupt::ADC1_2> // 18: ADC1 and ADC2 global interrupt
    , handler<interrupt::USB_HP_CAN_TX> // 19: USB High Priority or CAN TX
    , handler<interrupt::USB_LP_CAN_RX0> // 20: USB Low Priority or CAN RX0
    , handler<interrupt::CAN1_RX1> // 21: CAN1 RX1 interrupts
    , handler<interrupt::CAN1_SCE> // 22: CAN1 SCE interrupt
    , handler<interrupt::EXTI9_5> // 23: EXTI Line[9:5] interrupts
    , handler<interrupt::TIM1_BRK_TIM15> // 24: TIM1 Break interrupt and TIM15 global interrupt
    , handler<interrupt::TIM1_UP_TIM16> // 25: TIM1 Update interrupt and TIM16 global interrupt
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
    , handler<interrupt::EXTI15_10> // 40: EXTI Line[15:10] interrupts
    , handler<interrupt::RTC_ALARM> // 41: RTC Alarms (A and B) through EXTI line interrupt
    , handler<interrupt::USBWAKEUP> // 42: USB Device FS Wakeup through EXTI line interrupt
    , handler<interrupt::TIM8_BRK> // 43: TIM8 Break interrupt
    , handler<interrupt::TIM8_UP> // 44: TIM8 Update interrupt
    , handler<interrupt::TIM8_TRG_COM> // 45: TIM8 Trigger and Commutation
    , handler<interrupt::TIM8_CC> // 46: TIM8 Capture Compare interrupt
    , handler<interrupt::ADC3> // 47: ADC3 global interrupt
    , handler<interrupt::FSMC> // 48: FSMC global interrupt
    , handler<interrupt::SDIO> // 49: SDIO global interrupt
    , handler<interrupt::TIM5> // 50: TIM5 global interrupt
    , handler<interrupt::SPI3> // 51: SPI3 global interrupt
    , handler<interrupt::UART4> // 52: UART4 global interrupt
    , handler<interrupt::UART5> // 53: UART5 global interrupt
    , handler<interrupt::TIM6_DAC> // 54: TIM6 global and DAC underrun interrupts
    , handler<interrupt::TIM7> // 55: TIM7 global interrupt
    , handler<interrupt::DMA2_CHANNEL1> // 56: DMA2 Channel1 global interrupt
    , handler<interrupt::DMA2_CHANNEL2> // 57: DMA2 Channel2 global interrupt
    , handler<interrupt::DMA2_CHANNEL3> // 58: DMA2 Channel3 global interrupt
    , handler<interrupt::DMA2_CHANNEL4_5> // 59: DMA2 Channel4 and DMA2 Channel5 global interrupt
    , handler<interrupt::DMA2_CHANNEL5> // 60: DMA2 Channel5 global interrupt
    , handler<interrupt::ETH> // 61: Ethernet global interrupt
    , handler<interrupt::ETH_WKUP> // 62: Ethernet Wakeup through EXTI line interrupt
    , handler<interrupt::CAN2_TX> // 63: CAN2 TX interrupts
    , handler<interrupt::CAN2_RX0> // 64: CAN2 RX0 interrupts
    , handler<interrupt::CAN2_RX1> // 65: CAN2 RX1 interrupts
    , handler<interrupt::CAN2_SCE> // 66: CAN2 SCE interrupt
    , handler<interrupt::OTG_FS> // 67: USB On The Go FS global interrupt
    };

