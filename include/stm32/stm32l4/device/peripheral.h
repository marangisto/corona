#pragma once

////
//
//      STM32L4 peripherals
//
////

enum peripheral_enum_t
    { ADC
    , ADC1
    , ADC123_COMMON
    , ADC2
    , ADC3
    , ADC_COMMON
    , AES
    , CAN1
    , CAN2
    , COMP
    , CRC
    , CRS
    , DAC1
    , DBGMCU
    , DCMI
    , DFSDM
    , DFSDM1
    , DMA1
    , DMA2
    , DMA2D
    , EXTI
    , FIREWALL
    , FLASH
    , FMC
    , FPU
    , FPU_CPACR
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
    , LCD
    , LPTIM1
    , LPTIM2
    , LPUART1
    , MPU
    , NVIC
    , NVIC_STIR
    , OPAMP
    , OTG_FS_DEVICE
    , OTG_FS_GLOBAL
    , OTG_FS_HOST
    , OTG_FS_PWRCLK
    , PWR
    , QUADSPI1
    , RCC
    , RNG
    , RTC
    , SAI1
    , SAI2
    , SCB
    , SCB_ACTRL
    , SDMMC
    , SDMMC1
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
    , USB
    , USB_FS
    , USB_SRAM
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

