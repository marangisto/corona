#pragma once

////
//
//      STM32F4 peripherals
//
////

enum peripheral_enum_t
    { ADC1
    , ADC2
    , ADC3
    , ADC_Common
    , AES
    , CAN1
    , CAN2
    , CAN3
    , CRC
    , CRYP
    , C_ADC
    , DAC
    , DBG
    , DCMI
    , DFSDM
    , DFSDM1
    , DFSDM2
    , DMA1
    , DMA2
    , DMA2D
    , DSIHOST
    , EXTI
    , Ethernet_DMA
    , Ethernet_MAC
    , Ethernet_MMC
    , Ethernet_PTP
    , FLASH
    , FMC
    , FMPI2C
    , FPU
    , FPU_CPACR
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
    , GPIOJ
    , GPIOK
    , HASH
    , HDMI_CEC
    , I2C1
    , I2C2
    , I2C3
    , I2C4
    , I2S2ext
    , I2S3ext
    , IWDG
    , LPTIM
    , LPTIM1
    , LTDC
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
    , QUADSPI
    , RCC
    , RNG
    , RTC
    , SAI
    , SAI1
    , SAI2
    , SCB
    , SCB_ACTRL
    , SDIO
    , SPDIF_RX
    , SPI1
    , SPI2
    , SPI3
    , SPI4
    , SPI5
    , SPI6
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
    , UART10
    , UART4
    , UART5
    , UART7
    , UART8
    , UART9
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

