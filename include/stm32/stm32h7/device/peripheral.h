#pragma once

////
//
//      STM32H7 peripherals
//
////

enum peripheral_enum_t
    { AC
    , ADC1
    , ADC12_Common
    , ADC2
    , ADC3
    , ADC3_Common
    , ART
    , AXI
    , BDMA
    , BDMA1
    , BDMA2
    , CAN_CCU
    , CEC
    , COMP1
    , CRC
    , CRS
    , CRYP
    , DAC
    , DBGMCU
    , DCMI
    , DELAY_Block_QUADSPI
    , DELAY_Block_SDMMC1
    , DELAY_Block_SDMMC2
    , DFSDM
    , DMA1
    , DMA2
    , DMA2D
    , DMAMUX1
    , DMAMUX2
    , DSIHOST
    , Delay_Block_OCTOSPI1
    , Delay_Block_OCTOSPI2
    , EXTI
    , Ethernet_DMA
    , Ethernet_MAC
    , Ethernet_MTL
    , FDCAN
    , FDCAN1
    , FDCAN2
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
    , HRTIM_Common
    , HRTIM_Master
    , HRTIM_TIMA
    , HRTIM_TIMB
    , HRTIM_TIMC
    , HRTIM_TIMD
    , HRTIM_TIME
    , HSEM
    , I2C1
    , I2C2
    , I2C3
    , I2C4
    , IWDG
    , IWDG1
    , IWDG2
    , JPEG
    , LPTIM1
    , LPTIM2
    , LPTIM3
    , LPTIM4
    , LPTIM5
    , LPUART1
    , LTDC
    , MDIOS
    , MDMA
    , MPU
    , NVIC
    , NVIC_STIR
    , OCTOSPI1_CONTROL_REGISTER
    , OCTOSPI2
    , OPAMP
    , OTFDEC1
    , OTFDEC2
    , OTG1_HS_DEVICE
    , OTG1_HS_GLOBAL
    , OTG1_HS_HOST
    , OTG1_HS_PWRCLK
    , OTG2_HS_DEVICE
    , OTG2_HS_GLOBAL
    , OTG2_HS_HOST
    , OTG2_HS_PWRCLK
    , OctoSPII_O_Manager
    , PF
    , PWR
    , QUADSPI
    , RAMECC
    , RAMECC1
    , RAMECC2
    , RAMECC3
    , RCC
    , RNG
    , RTC
    , SAI1
    , SAI2
    , SAI3
    , SAI4
    , SCB
    , SCB_ACTRL
    , SDMMC1
    , SDMMC2
    , SPDIFRX
    , SPI1
    , SPI2
    , SPI3
    , SPI4
    , SPI5
    , SPI6
    , STK
    , SWPMI
    , SYSCFG
    , TIM1
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
    , TT_FDCAN
    , UART4
    , UART5
    , UART7
    , UART8
    , USART1
    , USART10
    , USART2
    , USART3
    , USART6
    , USART9
    , VREFBUF
    , WWDG
    , WWDG1
    , WWDG2
    };

template<mcu_svd_t SVD, peripheral_enum_t PERIPHERAL>
struct peripheral_t
{
    static_assert
        ( always_false_i<SVD>::value
        , "peripheral not available on MCU!"
        );
};
