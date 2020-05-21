#pragma once

////
//
//      STM32L0 peripherals
//
////

enum peripheral_enum_t
    { ADC
    , AES
    , CRC
    , CRS
    , DAC
    , DBG
    , DBGMCU
    , DMA1
    , EXTI
    , Firewall
    , Flash
    , GPIOA
    , GPIOB
    , GPIOC
    , GPIOD
    , GPIOE
    , GPIOH
    , I2C1
    , I2C2
    , I2C3
    , IWDG
    , LCD
    , LPTIM
    , LPUART1
    , LPUSART1
    , MPU
    , NVIC
    , PWR
    , RCC
    , RNG
    , RTC
    , SCB
    , SPI1
    , SPI2
    , STK
    , SYSCFG
    , SYSCFG_COMP
    , TIM2
    , TIM21
    , TIM22
    , TIM3
    , TIM6
    , TIM7
    , TSC
    , USART1
    , USART2
    , USART4
    , USART5
    , USB_FS
    , USB_SRAM
    , WWDG
    };

template<mcu_svd_t SVD, peripheral_enum_t PERIPHERAL>
struct peripheral_t
{
    static_assert
        ( always_false_i<SVD>::value
        , "peripheral not available on MCU!"
        );
};

