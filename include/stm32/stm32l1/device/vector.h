#pragma once

////
//
//      STM32L1 vectors
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
template<> void handler<interrupt::ADC1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::USB_HP>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::USB_LP>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DAC>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::COMP_CA>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI9_5>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::LCD>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM9>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM10>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM11>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
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
template<> void handler<interrupt::USB_FS_WKUP>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM6>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM7>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SDIO>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM5>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SPI3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::USART4>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::USART5>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2_CH1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2_CH2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2_CH3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2_CH4>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2_CH5>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::AES>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::COMP_ACQ>() __attribute__ ((weak, alias("_Z17__default_handlerv")));

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
    , handler<interrupt::PVD> // 1: PVD through EXTI Line detection interrupt
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
    , handler<interrupt::ADC1> // 18: ADC1 global interrupt
    , handler<interrupt::USB_HP> // 19: USB High priority interrupt
    , handler<interrupt::USB_LP> // 20: USB Low priority interrupt
    , handler<interrupt::DAC> // 21: DAC interrupt
    , handler<interrupt::COMP_CA> // 22: Comparator wakeup through EXTI line (21 and 22) interrupt/Channel acquisition interrupt
    , handler<interrupt::EXTI9_5> // 23: EXTI Line[9:5] interrupts
    , handler<interrupt::LCD> // 24: LCD global interrupt
    , handler<interrupt::TIM9> // 25: TIM9 global interrupt
    , handler<interrupt::TIM10> // 26: TIM10 global interrupt
    , handler<interrupt::TIM11> // 27: TIM11 global interrupt
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
    , handler<interrupt::USB_FS_WKUP> // 42: USB Device FS Wakeup through EXTI line interrupt
    , handler<interrupt::TIM6> // 43: TIM6 global interrupt
    , handler<interrupt::TIM7> // 44: TIM7 global interrupt
    , handler<interrupt::SDIO> // 45: SDIO Global interrupt
    , handler<interrupt::TIM5> // 46: TIM5 Global interrupt
    , handler<interrupt::SPI3> // 47: SPI3 global interrupt
    , handler<interrupt::USART4> // 48: USART4 global interrupt
    , handler<interrupt::USART5> // 49: USART5 global interrupt
    , handler<interrupt::DMA2_CH1> // 50: DMA2 Channel 1 interrupt
    , handler<interrupt::DMA2_CH2> // 51: DMA2 Channel 2 interrupt
    , handler<interrupt::DMA2_CH3> // 52: DMA2 Channel 3 interrupt
    , handler<interrupt::DMA2_CH4> // 53: DMA2 Channel 4 interrupt
    , handler<interrupt::DMA2_CH5> // 54: DMA2 Channel 5 interrupt
    , handler<interrupt::AES> // 55: AES global interrupt
    , handler<interrupt::COMP_ACQ> // 56: Comparator Channel Acquisition interrupt
    };

