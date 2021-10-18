#pragma once

////
//
//      STM32G0 vectors
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
template<> void handler<interrupt::RTC_STAMP>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::FLASH>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::RCC_CRS>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI0_1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI2_3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI4_15>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::UCPD1_UCPD2_USB>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA1_CHANNEL1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA1_CHANNEL2_3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA1_CHANNEL4_5_6_7_DMAMUX_DMA2_CHANNEL1_2_3_4_5>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::ADC_COMP>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM1_BRK_UP_TRG_COMP>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM1_CC>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM3_TIM4>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM6_DAC_LPTIM1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM7_LPTIM2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM14>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM15>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM16>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM17>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::I2C1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::I2C2_I2C3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SPI1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SPI2_SPI3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::USART1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::USART2_LPUART2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::USART3_USART4_USART5_USART6_LPUART1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::CEC>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::AES_RNG>() __attribute__ ((weak, alias("_Z17__default_handlerv")));

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
    , handler<interrupt::WWDG> // 0: Window watchdog interrupt
    , handler<interrupt::PVD> // 1: Power voltage detector interrupt
    , handler<interrupt::RTC_STAMP> // 2: RTC and TAMP interrupts
    , handler<interrupt::FLASH> // 3: Flash global interrupt
    , handler<interrupt::RCC_CRS> // 4: RCC global interrupt
    , handler<interrupt::EXTI0_1> // 5: EXTI line 0 &amp; 1 interrupt
    , handler<interrupt::EXTI2_3> // 6: EXTI line 2 &amp; 3 interrupt
    , handler<interrupt::EXTI4_15> // 7: EXTI line 4 to 15 interrupt
    , handler<interrupt::UCPD1_UCPD2_USB> // 8: UCPD and USB global interrupt
    , handler<interrupt::DMA1_CHANNEL1> // 9: DMA1 channel 1 interrupt
    , handler<interrupt::DMA1_CHANNEL2_3> // 10: DMA1 channel 2 and 3 interrupts
    , handler<interrupt::DMA1_CHANNEL4_5_6_7_DMAMUX_DMA2_CHANNEL1_2_3_4_5> // 11: DMA1 channel 4, 5, 6, 7, DMAMUX,DMA2 channel 1, 2, 3, 4, 5 interrupts
    , handler<interrupt::ADC_COMP> // 12: ADC and COMP interrupts
    , handler<interrupt::TIM1_BRK_UP_TRG_COMP> // 13: TIM1 break, update, trigger
    , handler<interrupt::TIM1_CC> // 14: TIM1 Capture Compare interrupt
    , handler<interrupt::TIM2> // 15: TIM2 global interrupt
    , handler<interrupt::TIM3_TIM4> // 16: TIM3 global interrupt
    , handler<interrupt::TIM6_DAC_LPTIM1> // 17: TIM6 + LPTIM1 and DAC global interrupt
    , handler<interrupt::TIM7_LPTIM2> // 18: TIM7 + LPTIM2 global interrupt
    , handler<interrupt::TIM14> // 19: TIM14 global interrupt
    , handler<interrupt::TIM15> // 20: TIM 15 global interrupt
    , handler<interrupt::TIM16> // 21: TIM16 global interrupt
    , handler<interrupt::TIM17> // 22: TIM17 global interrupt
    , handler<interrupt::I2C1> // 23: I2C1 global interrupt
    , handler<interrupt::I2C2_I2C3> // 24: I2C2 and I2C3 global interrupt
    , handler<interrupt::SPI1> // 25: SPI1 global interrupt
    , handler<interrupt::SPI2_SPI3> // 26: SPI2 gloabl interrupt
    , handler<interrupt::USART1> // 27: USART1 global interrupt
    , handler<interrupt::USART2_LPUART2> // 28: USART2 and LPUART2 global interrupt (combined with EXTI 26)
    , handler<interrupt::USART3_USART4_USART5_USART6_LPUART1> // 29: USART3,4,5,6 and LPUART1 global interrupt
    , handler<interrupt::CEC> // 30: CEC global interrupt
    , handler<interrupt::AES_RNG> // 31: AES and RNG global interrupts
    };

