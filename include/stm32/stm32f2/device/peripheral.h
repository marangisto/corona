#pragma once

////
//
//      STM32F2 peripherals
//
////

enum peripheral_enum_t
    { ADC1
    , ADC2
    , ADC3
    , ADC_COMMON
    , CAN1
    , CAN2
    , CRC
    , CRYP
    , DAC1
    , DBG
    , DCMI
    , DMA1
    , DMA2
    , ETHERNET_DMA
    , ETHERNET_MAC
    , ETHERNET_MMC
    , ETHERNET_PTP
    , EXTI
    , FLASH
    , FSMC
    , GPIOA
    , GPIOB
    , GPIOC
    , GPIOD
    , GPIOE
    , GPIOF
    , GPIOG
    , GPIOH
    , GPIOI
    , HASH
    , I2C1
    , I2C2
    , I2C3
    , IWDG
    , MPU
    , NVIC
    , NVIC_STIR
    , OTG_FS_DEVICE
    , OTG_FS_GLOBAL
    , OTG_FS_HOST
    , OTG_FS_PWRCLK
    , OTG_HS_DEVICE
    , OTG_HS_GLOBAL
    , OTG_HS_HOST
    , OTG_HS_PWRCLK
    , PWR
    , RCC
    , RNG
    , RTC
    , SCB
    , SCB_ACTRL
    , SDIO
    , SPI1
    , SPI2
    , SPI3
    , STK
    , SYSCFG
    , TIM1
    , TIM10
    , TIM11
    , TIM12
    , TIM13
    , TIM14
    , TIM2
    , TIM3
    , TIM4
    , TIM5
    , TIM6
    , TIM7
    , TIM8
    , TIM9
    , UART4
    , UART5
    , USART1
    , USART2
    , USART3
    , USART6
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

