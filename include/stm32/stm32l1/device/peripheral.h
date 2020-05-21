#pragma once

////
//
//      STM32L1 peripherals
//
////

enum peripheral_enum_t
    { ADC
    , AES
    , COMP
    , CRC
    , DAC
    , DBGMCU
    , DMA1
    , DMA2
    , EXTI
    , FSMC
    , Flash
    , GPIOA
    , GPIOB
    , GPIOC
    , GPIOD
    , GPIOE
    , GPIOF
    , GPIOG
    , GPIOH
    , I2C1
    , I2C2
    , IWDG
    , LCD
    , MPU
    , NVIC
    , NVIC_STIR
    , OPAMP
    , PWR
    , RCC
    , RI
    , RTC
    , SCB
    , SCB_ACTRL
    , SDIO
    , SPI1
    , SPI2
    , SPI3
    , STK
    , SYSCFG
    , TIM10
    , TIM11
    , TIM2
    , TIM3
    , TIM4
    , TIM5
    , TIM6
    , TIM7
    , TIM9
    , UART4
    , UART5
    , USART1
    , USART2
    , USART3
    , USART4
    , USART5
    , USB
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

