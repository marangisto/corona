#pragma once

////
//
//      STM32G0 peripherals
//
////

enum peripheral_enum_t
    { ADC
    , AES
    , COMP
    , CRC
    , DAC
    , DBG
    , DMA
    , DMAMUX
    , EXTI
    , FLASH
    , FPU
    , FPU_CPACR
    , GPIOA
    , GPIOB
    , GPIOC
    , GPIOD
    , GPIOF
    , HDMI_CEC
    , I2C1
    , I2C2
    , IWDG
    , LPTIM1
    , LPTIM2
    , LPUART
    , MPU
    , NVIC
    , NVIC_STIR
    , PWR
    , RCC
    , RNG
    , RTC
    , SCB
    , SCB_ACTRL
    , SPI1
    , SPI2
    , STK
    , SYSCFG
    , SYSCFG_ITLINE
    , SYSCFG_VREFBUF
    , TAMP
    , TIM1
    , TIM14
    , TIM15
    , TIM16
    , TIM17
    , TIM2
    , TIM3
    , TIM6
    , TIM7
    , UCPD1
    , UCPD2
    , USART1
    , USART2
    , USART3
    , USART4
    , VREFBUF
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

