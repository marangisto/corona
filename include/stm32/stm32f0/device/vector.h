#pragma once

////
//
//      STM32F0 vectors
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
template<> void handler<interrupt::RTC>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::FLASH>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::RCC_CRS>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI0_1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI2_3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI4_15>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TSC>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA1_CH1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA1_CH2_3_DMA2_CH1_2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA1_CH4_5_6_7_DMA2_CH3_4_5>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::ADC_COMP>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM1_BRK_UP_TRG_COM>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM1_CC>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM6_DAC>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM7>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM14>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM15>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM16>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM17>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::I2C1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::I2C2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SPI1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SPI2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::USART1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::USART2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::USART3_4_5_6_7_8>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::CEC_CAN>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::USB>() __attribute__ ((weak, alias("_Z17__default_handlerv")));

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
    , handler<interrupt::PVD> // 1: PVD and VDDIO2 supply comparator interrupt
    , handler<interrupt::RTC> // 2: RTC interrupts
    , handler<interrupt::FLASH> // 3: Flash global interrupt
    , handler<interrupt::RCC_CRS> // 4: RCC and CRS global interrupts
    , handler<interrupt::EXTI0_1> // 5: EXTI Line[1:0] interrupts
    , handler<interrupt::EXTI2_3> // 6: EXTI Line[3:2] interrupts
    , handler<interrupt::EXTI4_15> // 7: EXTI Line15 and EXTI4 interrupts
    , handler<interrupt::TSC> // 8: Touch sensing interrupt
    , handler<interrupt::DMA1_CH1> // 9: DMA1 channel 1 interrupt
    , handler<interrupt::DMA1_CH2_3_DMA2_CH1_2> // 10: DMA1 channel 2 and 3 and DMA2 channel 1 and 2 interrupt
    , handler<interrupt::DMA1_CH4_5_6_7_DMA2_CH3_4_5> // 11: DMA1 channel 4, 5, 6 and 7 and DMA2 channel 3, 4 and 5 interrupts
    , handler<interrupt::ADC_COMP> // 12: ADC and comparator interrupts
    , handler<interrupt::TIM1_BRK_UP_TRG_COM> // 13: TIM1 break, update, trigger and commutation interrupt
    , handler<interrupt::TIM1_CC> // 14: TIM1 Capture Compare interrupt
    , handler<interrupt::TIM2> // 15: TIM2 global interrupt
    , handler<interrupt::TIM3> // 16: TIM3 global interrupt
    , handler<interrupt::TIM6_DAC> // 17: TIM6 global interrupt and DAC underrun interrupt
    , handler<interrupt::TIM7> // 18: TIM7 global interrupt
    , handler<interrupt::TIM14> // 19: TIM14 global interrupt
    , handler<interrupt::TIM15> // 20: TIM15 global interrupt
    , handler<interrupt::TIM16> // 21: TIM16 global interrupt
    , handler<interrupt::TIM17> // 22: TIM17 global interrupt
    , handler<interrupt::I2C1> // 23: I2C1 global interrupt
    , handler<interrupt::I2C2> // 24: I2C2 global interrupt
    , handler<interrupt::SPI1> // 25: SPI1_global_interrupt
    , handler<interrupt::SPI2> // 26: SPI2 global interrupt
    , handler<interrupt::USART1> // 27: USART1 global interrupt
    , handler<interrupt::USART2> // 28: USART2 global interrupt
    , handler<interrupt::USART3_4_5_6_7_8> // 29: USART3, USART4, USART5, USART6, USART7, USART8 global interrupt
    , handler<interrupt::CEC_CAN> // 30: CEC and CAN global interrupt
    , handler<interrupt::USB> // 31: USB global interrupt
    };

