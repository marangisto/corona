#pragma once

////
//
//      STM32L5 peripherals
//
////

enum peripheral_enum_t
    { ADC
    , ADC_COMMON
    , AES
    , COMP
    , CRC
    , CRS
    , DAC
    , DBGMCU
    , DCB
    , DFSDM1
    , DMA1
    , DMA2
    , DMAMUX1
    , EXTI
    , FDCAN1
    , FLASH
    , FMC
    , GPIOA
    , GPIOB
    , GPIOC
    , GPIOD
    , GPIOE
    , GPIOF
    , GPIOG
    , GPIOH
    , GTZC_MPCBB1
    , GTZC_MPCBB2
    , GTZC_TZIC
    , GTZC_TZSC
    , I2C1
    , I2C2
    , I2C3
    , I2C4
    , ICACHE
    , IWDG
    , LPTIM1
    , LPTIM2
    , LPTIM3
    , LPUART1
    , NVIC
    , NVIC_STIR
    , OCTOSPI1
    , OPAMP
    , OTFDEC1
    , PKA
    , PWR
    , RCC
    , RNG
    , RTC
    , SAI1
    , SAI2
    , SDMMC1
    , SEC_ADC
    , SEC_ADC_COMMON
    , SEC_AES
    , SEC_COMP
    , SEC_CRC
    , SEC_CRS
    , SEC_DAC
    , SEC_DFSDM1
    , SEC_DMA1
    , SEC_DMA2
    , SEC_DMAMUX1
    , SEC_EXTI
    , SEC_FDCAN1
    , SEC_FLASH
    , SEC_FMC
    , SEC_GPIOA
    , SEC_GPIOB
    , SEC_GPIOC
    , SEC_GPIOD
    , SEC_GPIOE
    , SEC_GPIOF
    , SEC_GPIOG
    , SEC_GPIOH
    , SEC_GTZC_MPCBB1
    , SEC_GTZC_MPCBB2
    , SEC_GTZC_TZIC
    , SEC_GTZC_TZSC
    , SEC_I2C1
    , SEC_I2C2
    , SEC_I2C3
    , SEC_I2C4
    , SEC_ICACHE
    , SEC_IWDG
    , SEC_LPTIM1
    , SEC_LPTIM2
    , SEC_LPTIM3
    , SEC_LPUART1
    , SEC_OCTOSPI1
    , SEC_OPAMP
    , SEC_OTFDEC1
    , SEC_PKA
    , SEC_PWR
    , SEC_RCC
    , SEC_RNG
    , SEC_RTC
    , SEC_SAI1
    , SEC_SAI2
    , SEC_SDMMC1
    , SEC_SPI1
    , SEC_SPI2
    , SEC_SPI3
    , SEC_SYSCFG
    , SEC_TAMP
    , SEC_TIM1
    , SEC_TIM15
    , SEC_TIM16
    , SEC_TIM17
    , SEC_TIM2
    , SEC_TIM3
    , SEC_TIM4
    , SEC_TIM5
    , SEC_TIM6
    , SEC_TIM7
    , SEC_TIM8
    , SEC_TSC
    , SEC_UART4
    , SEC_UART5
    , SEC_UCPD1
    , SEC_USART1
    , SEC_USART2
    , SEC_USART3
    , SEC_USB
    , SEC_VREFBUF
    , SEC_WWDG
    , SPI1
    , SPI2
    , SPI3
    , SYSCFG
    , TAMP
    , TIM1
    , TIM15
    , TIM16
    , TIM17
    , TIM2
    , TIM3
    , TIM4
    , TIM5
    , TIM6
    , TIM7
    , TIM8
    , TSC
    , UART4
    , UART5
    , UCPD1
    , USART1
    , USART2
    , USART3
    , USB
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

