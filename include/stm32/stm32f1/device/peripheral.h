#pragma once

////
//
//      STM32F1 peripherals
//
////

enum peripheral_enum_t
    { ADC1
    , ADC2
    , ADC3
    , AFIO
    , BKP
    , CAN1
    , CAN2
    , CRC
    , DAC1
    , DBG
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
    , HDMI_CEC
    , I2C1
    , I2C2
    , IWDG
    , MPU
    , NVIC
    , NVIC_STIR
    , OTG_FS_DEVICE
    , OTG_FS_GLOBAL
    , OTG_FS_HOST
    , OTG_FS_PWRCLK
    , PWR
    , RCC
    , RTC
    , SCB
    , SCB_ACTRL
    , SDIO
    , SPI1
    , SPI2
    , SPI3
    , STK
    , TIM1
    , TIM10
    , TIM11
    , TIM12
    , TIM13
    , TIM14
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
    , TIM9
    , UART4
    , UART5
    , USART1
    , USART2
    , USART3
    , USB
    , USB_OTG_DEVICE
    , USB_OTG_GLOBAL
    , USB_OTG_HOST
    , USB_OTG_PWRCLK
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

