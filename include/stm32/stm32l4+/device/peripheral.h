#pragma once

////
//
//      STM32L4+ peripherals
//
////

enum peripheral_enum_t
    { ADC
    , ADC_Common
    , AES
    , CAN1
    , COMP
    , CRC
    , CRS
    , DAC
    , DBGMCU
    , DCMI
    , DFSDM1
    , DMA1
    , DMA2
    , DMA2D
    , DMAMUX1
    , DSI
    , EXTI
    , FIREWALL
    , FLASH
    , FMC
    , FPU
    , FPU_CPACR
    , GFXMMU
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
    , I2C4
    , IWDG
    , LPTIM1
    , LPTIM2
    , LPUART1
    , LTCD
    , MPU
    , NVIC
    , NVIC_STIR
    , OCTOSPI1
    , OCTOSPI2
    , OCTOSPIM
    , OPAMP
    , OTG_FS_DEVICE
    , OTG_FS_GLOBAL
    , OTG_FS_HOST
    , OTG_FS_PWRCLK
    , PWR
    , RCC
    , RNG
    , RTC
    , SAI1
    , SAI2
    , SCB
    , SCB_ACTRL
    , SDMMC1
    , SDMMC2
    , SPI1
    , SPI2
    , SPI3
    , STK
    , SWPMI1
    , SYSCFG
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
    , USART1
    , USART2
    , USART3
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

