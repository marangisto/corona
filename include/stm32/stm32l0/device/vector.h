#pragma once

////
//
//      STM32L0 vectors
//
////

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
template<> void handler<interrupt::RCC>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI0_1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI2_3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI4_15>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TSC>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA1_CHANNEL1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA1_CHANNEL2_3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA1_CHANNEL4_7>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::ADC>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::LPTIM1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::USART4_USART5>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM6>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM7>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM21>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::I2C3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM22>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::I2C1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::I2C2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SPI1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SPI2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::USART1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::USART2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::LPUART1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::LCD>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::USB>() __attribute__ ((weak, alias("_Z17__default_handlerv")));

void (*vectors[])(void) __attribute__ ((section(".vectors"))) =
    { (void(*)(void)) &__estack                     // -16: Initial stack pointer
    , handler<interrupt::RESET>                     // -15: Reset [fixed]
    , handler<interrupt::NMI>                       // -14: Non maskable interrupt [fixed]
    , handler<interrupt::HARDFAULT>                 // -13: All class of fault [fixed]
    , handler<interrupt::MEMMANAGE>                 // -12: Memory management [settable]
    , handler<interrupt::BUSFAULT>                  // -11: Pre-fetch fault, memory access fault [settable]
    , handler<interrupt::USAGEFAULT>                // -10: Undefined instruction or illegal state [settable]
    , 0x0
    , 0x0
    , 0x0
    , 0x0
    , handler<interrupt::SVCALL>                    // -5: System service call via SWI instruction [settable]
    , handler<interrupt::DEBUG>                     // -4: Monitor Debug Monitor [settable]
    , 0x0
    , handler<interrupt::PENDSV>                    // -2: Pendable request for system service [settable]
    , handler<interrupt::SYSTICK>                   // -1: System tick timer [settable]
    , handler<interrupt::WWDG>                      // 0: Window Watchdog interrupt
    , handler<interrupt::PVD>                       // 1: PVD through EXTI line detection
    , handler<interrupt::RTC>                       // 2: RTC global interrupt
    , handler<interrupt::FLASH>                     // 3: Flash global interrupt
    , handler<interrupt::RCC>                       // 4: RCC global interrupt
    , handler<interrupt::EXTI0_1>                   // 5: EXTI Line[1:0] interrupts
    , handler<interrupt::EXTI2_3>                   // 6: EXTI Line[3:2] interrupts
    , handler<interrupt::EXTI4_15>                  // 7: EXTI Line15 and EXTI4 interrupts
    , handler<interrupt::TSC>                       // 8: Touch sensing interrupt
    , handler<interrupt::DMA1_CHANNEL1>             // 9: DMA1 Channel1 global interrupt
    , handler<interrupt::DMA1_CHANNEL2_3>           // 10: DMA1 Channel2 and 3 interrupts
    , handler<interrupt::DMA1_CHANNEL4_7>           // 11: DMA1 Channel4 to 7 interrupts
    , handler<interrupt::ADC>                       // 12: ADC
    , handler<interrupt::LPTIM1>                    // 13: LPTIMER1 interrupt through EXTI29
    , handler<interrupt::USART4_USART5>             // 14: USART4/USART5 global interrupt
    , handler<interrupt::TIM2>                      // 15: TIM2 global interrupt
    , handler<interrupt::TIM3>                      // 16: TIM3 global interrupt
    , handler<interrupt::TIM6>                      // 17: TIM6 global interrupt and DAC
    , handler<interrupt::TIM7>                      // 18: TIM7 global interrupt and DAC
    , 0x0
    , handler<interrupt::TIM21>                     // 20: TIMER21 global interrupt
    , handler<interrupt::I2C3>                      // 21: I2C3 global interrupt
    , handler<interrupt::TIM22>                     // 22: TIMER22 global interrupt
    , handler<interrupt::I2C1>                      // 23: I2C1 global interrupt
    , handler<interrupt::I2C2>                      // 24: I2C2 global interrupt
    , handler<interrupt::SPI1>                      // 25: SPI1_global_interrupt
    , handler<interrupt::SPI2>                      // 26: SPI2 global interrupt
    , handler<interrupt::USART1>                    // 27: USART1 global interrupt
    , handler<interrupt::USART2>                    // 28: USART2 global interrupt
    , handler<interrupt::LPUART1>                   // 29: LPUART1 global interrupt through
    , handler<interrupt::LCD>                       // 30: LCD global interrupt
    , handler<interrupt::USB>                       // 31: USB event interrupt through EXTI18
    };
