#pragma once

////
//
//      STM32F0 peripherals
//
////

enum peripheral_enum_t
    { ADC
    , CAN
    , CRC
    , CRS
    , DAC
    , DBGMCU
    , DMA1
    , DMA2
    , EXTI
    , FLASH
    , GPIOA
    , GPIOB
    , GPIOC
    , GPIOD
    , GPIOE
    , GPIOF
    , HDMI_CEC
    , I2C1
    , I2C2
    , IWDG
    , NVIC
    , PWR
    , RCC
    , RTC
    , SCB
    , SPI1
    , SPI2
    , STK
    , SYSCFG
    , SYSCFG_COMP
    , TIM1
    , TIM14
    , TIM15
    , TIM16
    , TIM17
    , TIM2
    , TIM3
    , TIM6
    , TIM7
    , TSC
    , USART1
    , USART2
    , USART3
    , USART4
    , USART5
    , USART6
    , USART7
    , USART8
    , USB
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

