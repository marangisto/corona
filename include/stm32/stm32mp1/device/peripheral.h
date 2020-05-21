#pragma once

////
//
//      STM32MP1 peripherals
//
////

enum peripheral_enum_t
    { ADC
    , ADC2
    , ADC_common
    , AXIMC_Mx
    , BSEC
    , CCU
    , CRC1
    , CRC2
    , CRYP1
    , CRYP2
    , DAC1
    , DCMI
    , DDRCTRL
    , DDRPERFM
    , DDRPHYC
    , DFSDM1
    , DLYBQS
    , DLYBSD1
    , DLYBSD2
    , DLYBSD3
    , DMA1
    , DMA2
    , DMAMUX1
    , DSIHOST1
    , DTS
    , ETH_DMA
    , ETH_MAC_MMC
    , ETH_MTL
    , ETZPC
    , EXTI
    , FDCAN1
    , FDCAN2
    , FMC
    , GICC
    , GICD
    , GICH
    , GICV
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
    , GPIOZ
    , HASH1
    , HASH2
    , HDMI_CEC
    , HDP
    , HSEM
    , I2C1
    , I2C2
    , I2C3
    , I2C4
    , I2C5
    , I2C6
    , IPCC
    , IWDG1
    , IWDG2
    , LPTIM1
    , LPTIM2
    , LPTIM3
    , LPTIM4
    , LPTIM5
    , LTDC
    , MDIOS
    , MDMA
    , NVIC
    , OTGHSFS1
    , PWR
    , QUADSPI
    , RCC
    , RNG1
    , RNG2
    , RTC
    , SAI1
    , SAI2
    , SAI3
    , SAI4
    , SDMMC1
    , SDMMC2
    , SDMMC3
    , SPDIFRX
    , SPI1
    , SPI2
    , SPI3
    , SPI4
    , SPI5
    , SPI6
    , STGENC
    , STGENR
    , SYSCFG
    , TAMP
    , TIM1
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
    , TZC
    , UART4
    , UART5
    , UART7
    , UART8
    , USART1
    , USART2
    , USART3
    , USART6
    , USBPHYC
    , VREFBUF
    , WWDG1
    };

template<mcu_svd_t SVD, peripheral_enum_t PERIPHERAL>
struct peripheral_t
{
    static_assert
        ( always_false_i<SVD>::value
        , "peripheral not available on MCU!"
        );
};

