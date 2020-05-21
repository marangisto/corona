#pragma once

////
//
//      STM32F3 vectors
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
template<> void handler<interrupt::WWDG_IRQ>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::PVD_IRQ>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TAMP>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::RTC_WKUP_IRQ>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::FLASH>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::RCC>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI0_IRQ>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI1_IRQ>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI2_RI_IRQ>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI3_IRQ>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI4_IRQ>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA1_CH1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA1_CH2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA1_CH3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA1_CH4>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA1_CH5>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA1_CH6>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA1_CH7>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::ADC1_IRQ>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::USB_HP_CAN_TX>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::USB_LP_CAN_RX0>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::CAN_RX1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::CAN_SCE>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI5_9_IRQ>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM15_IRQ>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM16_IRQ>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM17_IRQ>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM1_CC>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM4>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::I2C1_EV_IRQ>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::I2C1_ER_IRQ>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::I2C2_EV_IRQ>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::I2C2_ER_IRQ>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SPI1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SPI2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::USART1_IRQ>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::USART2_IRQ>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::USART3_IRQ>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI15_10_IRQ>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::RTC_ALARM_IT_IRQ>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::USB_WKUP>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM8_BRK>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM8_UP>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM8_TRG_COM>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM8_CC>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::ADC3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::FMC>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM5>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SPI3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::UART4_EXTI34>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::UART5_EXTI35>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM6_DAC1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM7>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2_CH1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2_CH2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2_CH3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2_CH4>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::DMA2_CH5>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::ADC4>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SDADC2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SDADC3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::COMP2_IRQ>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::COMP4_6_IRQ>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::COMP7>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::I2C3_EV_EXTI27_IRQ>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::I2C3_ER_IRQ>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::USB_HP>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::USB_LP>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::USB_WKUP_EXTI>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM20_BRK>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM20_UP>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM20_TRG_COM>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TIM20_CC>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::FPU>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::SPI4>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::HRTIM1_MST>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::HRTIM1_TIMA>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::HRTIM_TIMB>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::HRTIM1_TIMC>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::HRTIM1_TIMD>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::HRTIM_TIME>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::HRTIM1_FLT>() __attribute__ ((weak, alias("_Z17__default_handlerv")));

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
    , handler<interrupt::WWDG_IRQ>                  // 0: Window Watchdog interrupt
    , handler<interrupt::PVD_IRQ>                   // 1: Power voltage detector through EXTI line detection interrupt
    , handler<interrupt::TAMP>                      // 2: Tamper and timestamp through EXTI19 line
    , handler<interrupt::RTC_WKUP_IRQ>              // 3: RTC
    , handler<interrupt::FLASH>                     // 4: Flash global interrupt
    , handler<interrupt::RCC>                       // 5: RCC global interrupt
    , handler<interrupt::EXTI0_IRQ>                 // 6: EXTI Line 0 interrupt
    , handler<interrupt::EXTI1_IRQ>                 // 7: EXTI Line1 interrupt
    , handler<interrupt::EXTI2_RI_IRQ>              // 8: EXTI Line 2 and routing interface interrupt
    , handler<interrupt::EXTI3_IRQ>                 // 9: EXTI Line1 interrupt
    , handler<interrupt::EXTI4_IRQ>                 // 10: EXTI Line4 interrupt
    , handler<interrupt::DMA1_CH1>                  // 11: DMA1 channel 1 interrupt
    , handler<interrupt::DMA1_CH2>                  // 12: DMA1 channel 2 interrupt
    , handler<interrupt::DMA1_CH3>                  // 13: DMA1 channel 3 interrupt
    , handler<interrupt::DMA1_CH4>                  // 14: DMA1 channel 4 interrupt
    , handler<interrupt::DMA1_CH5>                  // 15: DMA1 channel 5 interrupt
    , handler<interrupt::DMA1_CH6>                  // 16: DMA1 channel 6 interrupt
    , handler<interrupt::DMA1_CH7>                  // 17: DMA1 channel 7 interrupt
    , handler<interrupt::ADC1_IRQ>                  // 18: ADC1 interrupt
    , handler<interrupt::USB_HP_CAN_TX>             // 19: USB High Priority/CAN_TX interrupts
    , handler<interrupt::USB_LP_CAN_RX0>            // 20: USB Low Priority/CAN_RX0 interrupts
    , handler<interrupt::CAN_RX1>                   // 21: CAN_RX1 interrupt
    , handler<interrupt::CAN_SCE>                   // 22: CAN_SCE interrupt
    , handler<interrupt::EXTI5_9_IRQ>               // 23: EXTI Line[9:5] interrupts
    , handler<interrupt::TIM15_IRQ>                 // 24: Timer 15 global interrupt
    , handler<interrupt::TIM16_IRQ>                 // 25: Timer 16 global interrupt
    , handler<interrupt::TIM17_IRQ>                 // 26: Timer 17 global interrupt
    , handler<interrupt::TIM1_CC>                   // 27: TIM1 capture compare interrupt
    , handler<interrupt::TIM2>                      // 28: Timer 2 global interrupt
    , handler<interrupt::TIM3>                      // 29: TIM3 global interrupt
    , handler<interrupt::TIM4>                      // 30: TIM4 global interrupt
    , handler<interrupt::I2C1_EV_IRQ>               // 31: I2C1_EV global interrupt/EXTI Line[3:2] interrupts
    , handler<interrupt::I2C1_ER_IRQ>               // 32: I2C1_ER
    , handler<interrupt::I2C2_EV_IRQ>               // 33: I2C2_EV global interrupt/EXTI Line[4:2] interrupts
    , handler<interrupt::I2C2_ER_IRQ>               // 34: I2C2_ER
    , handler<interrupt::SPI1>                      // 35: SPI1 global interrupt
    , handler<interrupt::SPI2>                      // 36: SPI2 global interrupt
    , handler<interrupt::USART1_IRQ>                // 37: USART1 global interrupt/EXTI25 (USART1 wakeup event)
    , handler<interrupt::USART2_IRQ>                // 38: USART2 global interrupt/EXTI26 (USART1 wakeup event)
    , handler<interrupt::USART3_IRQ>                // 39: USART3 global interrupt/EXTI28 (USART1 wakeup event)
    , handler<interrupt::EXTI15_10_IRQ>             // 40: EXTI Line[15:10] interrupts
    , handler<interrupt::RTC_ALARM_IT_IRQ>          // 41: RTC alarm interrupt
    , handler<interrupt::USB_WKUP>                  // 42: USB wakeup from Suspend
    , handler<interrupt::TIM8_BRK>                  // 43: TIM8 break interrupt
    , handler<interrupt::TIM8_UP>                   // 44: TIM8 update interrupt
    , handler<interrupt::TIM8_TRG_COM>              // 45: TIM8 Trigger and commutation interrupts
    , handler<interrupt::TIM8_CC>                   // 46: TIM8 capture compare interrupt
    , handler<interrupt::ADC3>                      // 47: ADC3 global interrupt
    , handler<interrupt::FMC>                       // 48: FSMC global interrupt
    , 0x0
    , handler<interrupt::TIM5>                      // 50: Timer 5 global interrupt
    , handler<interrupt::SPI3>                      // 51: SPI3 global interrupt
    , handler<interrupt::UART4_EXTI34>              // 52: UART4 global and EXTI Line 34 interrupts
    , handler<interrupt::UART5_EXTI35>              // 53: UART5 global and EXTI Line 35 interrupts
    , handler<interrupt::TIM6_DAC1>                 // 54: TIM6 global, DAC1 Cahnnel1 and Cahnnel2 underrun error Interrupts
    , handler<interrupt::TIM7>                      // 55: TIM7 global interrupt
    , handler<interrupt::DMA2_CH1>                  // 56: DMA2 channel1 global interrupt
    , handler<interrupt::DMA2_CH2>                  // 57: DMA2 channel2 global interrupt
    , handler<interrupt::DMA2_CH3>                  // 58: DMA2 channel3 global interrupt
    , handler<interrupt::DMA2_CH4>                  // 59: DMA2 channel4 global interrupt
    , handler<interrupt::DMA2_CH5>                  // 60: DMA2 channel5 global interrupt
    , handler<interrupt::ADC4>                      // 61: ADC4 global interrupt
    , handler<interrupt::SDADC2>                    // 62: ADC sigma delta 2 (SDADC2) global interrupt
    , handler<interrupt::SDADC3>                    // 63: ADC sigma delta 3 (SDADC3) global interrupt
    , handler<interrupt::COMP2_IRQ>                 // 64: COMP2 interrupt combined with EXTI Lines
    , handler<interrupt::COMP4_6_IRQ>               // 65: COMP4 & COMP6 interrupts combined with
    , handler<interrupt::COMP7>                     // 66: COMP7 interrupt combined with EXTI Line 33 interrupt
    , 0x0
    , 0x0
    , 0x0
    , 0x0
    , 0x0
    , handler<interrupt::I2C3_EV_EXTI27_IRQ>        // 72: I2C3 event interrupt & EXTI Line27 interrupt
    , handler<interrupt::I2C3_ER_IRQ>               // 73: I2C3 error interrupt
    , handler<interrupt::USB_HP>                    // 74: USB High priority interrupt
    , handler<interrupt::USB_LP>                    // 75: USB Low priority interrupt
    , handler<interrupt::USB_WKUP_EXTI>             // 76: USB wakeup from Suspend and EXTI Line 18
    , handler<interrupt::TIM20_BRK>                 // 77: TIM20 Break interrupt
    , handler<interrupt::TIM20_UP>                  // 78: TIM20 Upgrade interrupt
    , handler<interrupt::TIM20_TRG_COM>             // 79: TIM20 Trigger and Commutation interrupt
    , handler<interrupt::TIM20_CC>                  // 80: TIM20 Capture Compare interrupt
    , handler<interrupt::FPU>                       // 81: Floating point interrupt
    , 0x0
    , 0x0
    , handler<interrupt::SPI4>                      // 84: SPI4 Global interrupt
    , 0x0
    , 0x0
    , 0x0
    , 0x0
    , 0x0
    , 0x0
    , 0x0
    , 0x0
    , 0x0
    , 0x0
    , 0x0
    , 0x0
    , 0x0
    , 0x0
    , 0x0
    , 0x0
    , 0x0
    , 0x0
    , handler<interrupt::HRTIM1_MST>                // 103: HRTIM1 master timer interrupt
    , handler<interrupt::HRTIM1_TIMA>               // 104: HRTIM1 timer A interrupt
    , handler<interrupt::HRTIM_TIMB>                // 105: HRTIM1 timer B interrupt
    , handler<interrupt::HRTIM1_TIMC>               // 106: HRTIM1 timer C interrupt
    , handler<interrupt::HRTIM1_TIMD>               // 107: HRTIM1 timer D interrupt
    , handler<interrupt::HRTIM_TIME>                // 108: HRTIM1 timer E interrupt
    , handler<interrupt::HRTIM1_FLT>                // 109: HRTIM1 fault interrupt
    };
