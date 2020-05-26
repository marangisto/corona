#pragma once

////
//
//      STM32F7 peripherals
//
////

enum peripheral_enum_t
    { AC
    , ADC1
    , ADC2
    , ADC3
    , AES
    , CAN1
    , CAN2
    , CAN3
    , CRC
    , CRYP
    , C_ADC
    , DAC
    , DBG
    , DBGMCU
    , DCMI
    , DFSDM
    , DMA1
    , DMA2
    , DMA2D
    , DSI
    , EXTI
    , Ethernet_DMA
    , Ethernet_MAC
    , Ethernet_MMC
    , Ethernet_PTP
    , FLASH
    , FMC
    , FPU
    , FPU_CPACR
    , Flash
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
    , IWDG
    , JPEG
    , LPTIM1
    , LTCD
    , LTDC
    , MDIOS
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
    , PF
    , PWR
    , QUADSPI
    , RCC
    , RNG
    , RTC
    , SAI1
    , SAI2
    , SCB
    , SCB_ACTRL
    , SDMMC1
    , SDMMC2
    , SPDIFRX
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
    , UART4
    , UART5
    , UART7
    , UART8
    , USART1
    , USART2
    , USART3
    , USART6
    , USBPHYC
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

