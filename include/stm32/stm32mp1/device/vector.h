#pragma once

////
//
//      STM32MP1 vectors
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
template<> void handler<interrupt::WWDG1_IT>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::PVD_AVD>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TAMP>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::RTC_WKUP_ALARM>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TZC_IT>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::RCC>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI0>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI1>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI2>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI3>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI4>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI5>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI10>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::RTC_TS>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI11>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI6>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI7>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI8>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI9>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI12>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI13>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI14>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::EXTI15>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::RCC_WAKEUP>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::TAMP_S>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::RTC_WKUP_ALARM_S>() __attribute__ ((weak, alias("_Z17__default_handlerv")));
template<> void handler<interrupt::RTC_TS_S>() __attribute__ ((weak, alias("_Z17__default_handlerv")));

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
    , handler<interrupt::WWDG1_IT>                  // 0: Window Watchdog interrupt
    , handler<interrupt::PVD_AVD>                   // 1: PVD AND AVD detector through EXTI
    , handler<interrupt::TAMP>                      // 2: Tamper interrupt (include LSECSS interrupts)
    , handler<interrupt::RTC_WKUP_ALARM>            // 3: RTC Tamper or TimeStamp
    , handler<interrupt::TZC_IT>                    // 4: TrustZone DDR address space controller
    , handler<interrupt::RCC>                       // 5: RCC global interrupt
    , handler<interrupt::EXTI0>                     // 6: EXTI Line 0 interrupt
    , handler<interrupt::EXTI1>                     // 7: EXTI Line 1 interrupt
    , handler<interrupt::EXTI2>                     // 8: EXTI Line 2 interrupt
    , handler<interrupt::EXTI3>                     // 9: EXTI Line 3 interrupt
    , handler<interrupt::EXTI4>                     // 10: EXTI Line 4 interrupt
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
    , handler<interrupt::EXTI5>                     // 23: EXTI line 5 interrupt
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
    , handler<interrupt::EXTI10>                    // 40: EXTI line 10 interrupt
    , handler<interrupt::RTC_TS>                    // 41: RTC timestamp interrupt
    , handler<interrupt::EXTI11>                    // 42: EXTI line 11 interrupt
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
    , 0x0
    , 0x0
    , 0x0
    , handler<interrupt::EXTI6>                     // 64: EXTI line 6 interrupt
    , handler<interrupt::EXTI7>                     // 65: EXTI line 7 interrupt
    , handler<interrupt::EXTI8>                     // 66: EXTI line 8 interrupt
    , handler<interrupt::EXTI9>                     // 67: EXTI line 9 interrupt
    , 0x0
    , 0x0
    , 0x0
    , 0x0
    , 0x0
    , 0x0
    , 0x0
    , 0x0
    , handler<interrupt::EXTI12>                    // 76: EXTI line 12 interrupt
    , handler<interrupt::EXTI13>                    // 77: EXTI line 13 interrupt
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
    , 0x0
    , 0x0
    , 0x0
    , 0x0
    , 0x0
    , 0x0
    , 0x0
    , handler<interrupt::EXTI14>                    // 121: EXTI line 14 interrupt
    , 0x0
    , 0x0
    , 0x0
    , 0x0
    , 0x0
    , handler<interrupt::EXTI15>                    // 127: EXTI line 15 interrupt
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
    , handler<interrupt::RCC_WAKEUP>                // 145: RCC MPU wakeup interrupt
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
    , handler<interrupt::TAMP_S>                    // 197: TAMP tamper secure interrupt
    , handler<interrupt::RTC_WKUP_ALARM_S>          // 198: RTC wakeup timer and alarms (A and B) secure interrupt
    , handler<interrupt::RTC_TS_S>                  // 199: RTC timestamp secure interrupt
    };
