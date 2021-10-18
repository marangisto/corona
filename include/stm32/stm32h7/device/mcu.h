#pragma once

////
//
//      STM32H7 MCU family
//
///

enum mcu_t
    { STM32H723VEHx
    , STM32H723VETx
    , STM32H723VGHx
    , STM32H723VGTx
    , STM32H723ZEIx
    , STM32H723ZETx
    , STM32H723ZGIx
    , STM32H723ZGTx
    , STM32H733VGHx
    , STM32H733VGTx
    , STM32H733ZGIx
    , STM32H733ZGTx
    , STM32H725AEIx
    , STM32H725AGIx
    , STM32H725IEKx
    , STM32H725IETx
    , STM32H725IGKx
    , STM32H725IGTx
    , STM32H725REVx
    , STM32H725RGVx
    , STM32H725VEHx
    , STM32H725VETx
    , STM32H725VGHx
    , STM32H725VGTx
    , STM32H725VGYx
    , STM32H725ZETx
    , STM32H725ZGTx
    , STM32H735AGIx
    , STM32H735IGKx
    , STM32H735IGTx
    , STM32H735RGVx
    , STM32H735VGHx
    , STM32H735VGTx
    , STM32H735VGYx
    , STM32H735ZGTx
    , STM32H730ABIxQ
    , STM32H730IBKxQ
    , STM32H730IBTxQ
    , STM32H730VBHx
    , STM32H730VBTx
    , STM32H730ZBIx
    , STM32H730ZBTx
    , STM32H742AGIx
    , STM32H742AIIx
    , STM32H742BGTx
    , STM32H742BITx
    , STM32H742IGKx
    , STM32H742IIKx
    , STM32H742IGTx
    , STM32H742IITx
    , STM32H742VGHx
    , STM32H742VIHx
    , STM32H742VGTx
    , STM32H742VITx
    , STM32H742XGHx
    , STM32H742XIHx
    , STM32H742ZGTx
    , STM32H742ZITx
    , STM32H743AGIx
    , STM32H743AIIx
    , STM32H743BGTx
    , STM32H743BITx
    , STM32H743IGKx
    , STM32H743IGTx
    , STM32H743IIKx
    , STM32H743IITx
    , STM32H743VGHx
    , STM32H743VIHx
    , STM32H743VGTx
    , STM32H743VITx
    , STM32H743XGHx
    , STM32H743XIHx
    , STM32H743ZGTx
    , STM32H743ZITx
    , STM32H753AIIx
    , STM32H753BITx
    , STM32H753IIKx
    , STM32H753IITx
    , STM32H753VIHx
    , STM32H753VITx
    , STM32H753XIHx
    , STM32H753ZITx
    , STM32H745BGTx
    , STM32H745BITx
    , STM32H745IGKx
    , STM32H745IGTx
    , STM32H745IIKx
    , STM32H745IITx
    , STM32H745XGHx
    , STM32H745XIHx
    , STM32H745ZGTx
    , STM32H745ZITx
    , STM32H755BITx
    , STM32H755IIKx
    , STM32H755IITx
    , STM32H755XIHx
    , STM32H755ZITx
    , STM32H747AGIx
    , STM32H747AIIx
    , STM32H747BGTx
    , STM32H747BITx
    , STM32H747IGTx
    , STM32H747IITx
    , STM32H747XGHx
    , STM32H747XIHx
    , STM32H747ZIYx
    , STM32H757AIIx
    , STM32H757BITx
    , STM32H757IITx
    , STM32H757XIHx
    , STM32H757ZIYx
    , STM32H750IBKx
    , STM32H750IBTx
    , STM32H750VBTx
    , STM32H750XBHx
    , STM32H750ZBTx
    , STM32H7A3AGIxQ
    , STM32H7A3AIIxQ
    , STM32H7A3IGKx
    , STM32H7A3IIKx
    , STM32H7A3IGKxQ
    , STM32H7A3IIKxQ
    , STM32H7A3IGTx
    , STM32H7A3IITx
    , STM32H7A3IGTxQ
    , STM32H7A3IITxQ
    , STM32H7A3LGHxQ
    , STM32H7A3LIHxQ
    , STM32H7A3NGHx
    , STM32H7A3NIHx
    , STM32H7A3QIYxQ
    , STM32H7A3RGTx
    , STM32H7A3RITx
    , STM32H7A3VGHx
    , STM32H7A3VIHx
    , STM32H7A3VGHxQ
    , STM32H7A3VIHxQ
    , STM32H7A3VGTx
    , STM32H7A3VITx
    , STM32H7A3VGTxQ
    , STM32H7A3VITxQ
    , STM32H7A3ZGTx
    , STM32H7A3ZITx
    , STM32H7A3ZGTxQ
    , STM32H7A3ZITxQ
    , STM32H7B3AIIxQ
    , STM32H7B3IIKx
    , STM32H7B3IIKxQ
    , STM32H7B3IITx
    , STM32H7B3IITxQ
    , STM32H7B3LIHxQ
    , STM32H7B3NIHx
    , STM32H7B3QIYxQ
    , STM32H7B3RITx
    , STM32H7B3VIHx
    , STM32H7B3VIHxQ
    , STM32H7B3VITx
    , STM32H7B3VITxQ
    , STM32H7B3ZITx
    , STM32H7B3ZITxQ
    , STM32H7B0ABIxQ
    , STM32H7B0IBKxQ
    , STM32H7B0IBTx
    , STM32H7B0RBTx
    , STM32H7B0VBTx
    , STM32H7B0ZBTx
    };

enum svd_t
    { STM32H723 = 0x1
    , STM32H725 = 0x2
    , STM32H73x = 0x4
    , STM32H742x = 0x8
    , STM32H743 = 0x10
    , STM32H745_CM4 = 0x20
    , STM32H745_CM7 = 0x40
    , STM32H747_CM4 = 0x80
    , STM32H747_CM7 = 0x100
    , STM32H750x = 0x200
    , STM32H753 = 0x400
    , STM32H755_CM4 = 0x800
    , STM32H755_CM7 = 0x1000
    , STM32H757_CM4 = 0x2000
    , STM32H757_CM7 = 0x4000
    , STM32H7A3x = 0x8000
    , STM32H7B0x = 0x10000
    , STM32H7B3x = 0x20000
    };

enum gpio_conf_t
    { STM32H72 = 0x1
    , STM32H747 = 0x2
    , STM32H7A2 = 0x4
    };

enum dma_resource_t
    { CORDIC_READ
    , CORDIC_WRITE
    , CRYP_IN
    , CRYP_OUT
    , DAC_CH1
    , DAC_CH2
    , DCMI_PSSI
    , DFSDM_FLT0
    , DFSDM_FLT1
    , DFSDM_FLT2
    , DFSDM_FLT3
    , DFSDM_FLT4
    , DFSDM_FLT5
    , FMAC_READ
    , FMAC_WRITE
    , HASH_IN
    , HRTIM_MASTER_
    , HRTIM_TIMER_A
    , HRTIM_TIMER_B
    , HRTIM_TIMER_C
    , HRTIM_TIMER_D
    , HRTIM_TIMER_E
    , I2C_RX
    , I2C_TX
    , SAI_A
    , SAI_B
    , SPDIF_RX_CS
    , SPDIF_RX_DT
    , SPI_RX
    , SPI_TX
    , SWPMI_RX
    , SWPMI_TX
    , TIM_CH1
    , TIM_CH2
    , TIM_CH3
    , TIM_CH4
    , TIM_COM
    , TIM_TRIG
    , TIM_UP
    , UART_RX
    , UART_TX
    , USART_RX
    , USART_TX
    };

enum periph_t
    { AC
    , ADC1
    , ADC2
    , ADC3
    , ADC12_COMMON
    , ADC3_COMMON
    , ART
    , AXI
    , BDMA
    , BDMA1
    , BDMA2
    , CAN_CCU
    , COMP1
    , CORDIC
    , CRC
    , CRS
    , CRYP
    , DAC1
    , DBGMCU
    , DCMI
    , DELAY_BLOCK_OCTOSPI1
    , DELAY_BLOCK_OCTOSPI2
    , DELAY_BLOCK_QUADSPI
    , DELAY_BLOCK_SDMMC1
    , DELAY_BLOCK_SDMMC2
    , DFSDM
    , DFSDM1
    , DFSDM2
    , DMA1
    , DMA2
    , DMA2D
    , DMAMUX1
    , DMAMUX2
    , DMAMUX3
    , DSIHOST
    , ETHERNET_DMA
    , ETHERNET_MAC
    , ETHERNET_MTL
    , EXTI
    , FDCAN
    , FDCAN1
    , FDCAN2
    , FDCAN3
    , FLASH
    , FMAC
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
    , GPIOJ
    , GPIOK
    , HASH
    , HDMI_CEC
    , HRTIM_COMMON
    , HRTIM_MASTER
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
    , I2C5
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
    , OCTOSPI1
    , OCTOSPI2
    , OCTOSPI1_CONTROL_REGISTER
    , OCTOSPII_O_MANAGER
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
    , PF_
    , PSSI
    , PWR
    , QUADSPI1
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
    , TIM2
    , TIM3
    , TIM4
    , TIM5
    , TIM6
    , TIM7
    , TIM8
    , TIM12
    , TIM13
    , TIM14
    , TIM15
    , TIM16
    , TIM17
    , TIM23
    , TIM24
    , TT_FDCAN
    , UART4
    , UART5
    , UART7
    , UART8
    , UART9
    , USART1
    , USART2
    , USART3
    , USART6
    , USART9
    , USART10
    , VREFBUF
    , WWDG
    , WWDG1
    , WWDG2
    };

template<svd_t SVD, periph_t PERIPH>
struct peripheral_t
{
    static_assert
        ( always_false_i<SVD>::value
        , "peripheral not available on this MCU!"
        );
};

template<periph_t P, dma_resource_t R>
struct dma_request_t
{
    static_assert
        ( always_false_i<P>::value
        , "DMA resource not available on this peripheral!"
        );
};

template<mcu_t MCU> struct mcu_traits {};

template<> struct mcu_traits<STM32H723VEHx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H723;
    static constexpr gpio_conf_t gpio_conf = STM32H72;
    static constexpr unsigned frequency = 550;
};

template<> struct mcu_traits<STM32H723VETx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H723;
    static constexpr gpio_conf_t gpio_conf = STM32H72;
    static constexpr unsigned frequency = 550;
};

template<> struct mcu_traits<STM32H723VGHx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H723;
    static constexpr gpio_conf_t gpio_conf = STM32H72;
    static constexpr unsigned frequency = 550;
};

template<> struct mcu_traits<STM32H723VGTx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H723;
    static constexpr gpio_conf_t gpio_conf = STM32H72;
    static constexpr unsigned frequency = 550;
};

template<> struct mcu_traits<STM32H723ZEIx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H723;
    static constexpr gpio_conf_t gpio_conf = STM32H72;
    static constexpr unsigned frequency = 550;
};

template<> struct mcu_traits<STM32H723ZETx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H723;
    static constexpr gpio_conf_t gpio_conf = STM32H72;
    static constexpr unsigned frequency = 550;
};

template<> struct mcu_traits<STM32H723ZGIx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H723;
    static constexpr gpio_conf_t gpio_conf = STM32H72;
    static constexpr unsigned frequency = 550;
};

template<> struct mcu_traits<STM32H723ZGTx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H723;
    static constexpr gpio_conf_t gpio_conf = STM32H72;
    static constexpr unsigned frequency = 550;
};

template<> struct mcu_traits<STM32H733VGHx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H73x;
    static constexpr gpio_conf_t gpio_conf = STM32H72;
    static constexpr unsigned frequency = 550;
};

template<> struct mcu_traits<STM32H733VGTx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H73x;
    static constexpr gpio_conf_t gpio_conf = STM32H72;
    static constexpr unsigned frequency = 550;
};

template<> struct mcu_traits<STM32H733ZGIx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H73x;
    static constexpr gpio_conf_t gpio_conf = STM32H72;
    static constexpr unsigned frequency = 550;
};

template<> struct mcu_traits<STM32H733ZGTx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H73x;
    static constexpr gpio_conf_t gpio_conf = STM32H72;
    static constexpr unsigned frequency = 550;
};

template<> struct mcu_traits<STM32H725AEIx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H725;
    static constexpr gpio_conf_t gpio_conf = STM32H72;
    static constexpr unsigned frequency = 550;
};

template<> struct mcu_traits<STM32H725AGIx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H725;
    static constexpr gpio_conf_t gpio_conf = STM32H72;
    static constexpr unsigned frequency = 550;
};

template<> struct mcu_traits<STM32H725IEKx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H725;
    static constexpr gpio_conf_t gpio_conf = STM32H72;
    static constexpr unsigned frequency = 550;
};

template<> struct mcu_traits<STM32H725IETx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H725;
    static constexpr gpio_conf_t gpio_conf = STM32H72;
    static constexpr unsigned frequency = 550;
};

template<> struct mcu_traits<STM32H725IGKx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H725;
    static constexpr gpio_conf_t gpio_conf = STM32H72;
    static constexpr unsigned frequency = 550;
};

template<> struct mcu_traits<STM32H725IGTx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H725;
    static constexpr gpio_conf_t gpio_conf = STM32H72;
    static constexpr unsigned frequency = 550;
};

template<> struct mcu_traits<STM32H725REVx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H725;
    static constexpr gpio_conf_t gpio_conf = STM32H72;
    static constexpr unsigned frequency = 550;
};

template<> struct mcu_traits<STM32H725RGVx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H725;
    static constexpr gpio_conf_t gpio_conf = STM32H72;
    static constexpr unsigned frequency = 550;
};

template<> struct mcu_traits<STM32H725VEHx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H725;
    static constexpr gpio_conf_t gpio_conf = STM32H72;
    static constexpr unsigned frequency = 550;
};

template<> struct mcu_traits<STM32H725VETx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H725;
    static constexpr gpio_conf_t gpio_conf = STM32H72;
    static constexpr unsigned frequency = 550;
};

template<> struct mcu_traits<STM32H725VGHx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H725;
    static constexpr gpio_conf_t gpio_conf = STM32H72;
    static constexpr unsigned frequency = 550;
};

template<> struct mcu_traits<STM32H725VGTx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H725;
    static constexpr gpio_conf_t gpio_conf = STM32H72;
    static constexpr unsigned frequency = 550;
};

template<> struct mcu_traits<STM32H725VGYx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H725;
    static constexpr gpio_conf_t gpio_conf = STM32H72;
    static constexpr unsigned frequency = 550;
};

template<> struct mcu_traits<STM32H725ZETx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H725;
    static constexpr gpio_conf_t gpio_conf = STM32H72;
    static constexpr unsigned frequency = 550;
};

template<> struct mcu_traits<STM32H725ZGTx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H725;
    static constexpr gpio_conf_t gpio_conf = STM32H72;
    static constexpr unsigned frequency = 550;
};

template<> struct mcu_traits<STM32H735AGIx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H73x;
    static constexpr gpio_conf_t gpio_conf = STM32H72;
    static constexpr unsigned frequency = 550;
};

template<> struct mcu_traits<STM32H735IGKx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H73x;
    static constexpr gpio_conf_t gpio_conf = STM32H72;
    static constexpr unsigned frequency = 550;
};

template<> struct mcu_traits<STM32H735IGTx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H73x;
    static constexpr gpio_conf_t gpio_conf = STM32H72;
    static constexpr unsigned frequency = 550;
};

template<> struct mcu_traits<STM32H735RGVx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H73x;
    static constexpr gpio_conf_t gpio_conf = STM32H72;
    static constexpr unsigned frequency = 550;
};

template<> struct mcu_traits<STM32H735VGHx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H73x;
    static constexpr gpio_conf_t gpio_conf = STM32H72;
    static constexpr unsigned frequency = 550;
};

template<> struct mcu_traits<STM32H735VGTx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H73x;
    static constexpr gpio_conf_t gpio_conf = STM32H72;
    static constexpr unsigned frequency = 550;
};

template<> struct mcu_traits<STM32H735VGYx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H73x;
    static constexpr gpio_conf_t gpio_conf = STM32H72;
    static constexpr unsigned frequency = 550;
};

template<> struct mcu_traits<STM32H735ZGTx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H73x;
    static constexpr gpio_conf_t gpio_conf = STM32H72;
    static constexpr unsigned frequency = 550;
};

template<> struct mcu_traits<STM32H730ABIxQ>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H73x;
    static constexpr gpio_conf_t gpio_conf = STM32H72;
    static constexpr unsigned frequency = 550;
};

template<> struct mcu_traits<STM32H730IBKxQ>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H73x;
    static constexpr gpio_conf_t gpio_conf = STM32H72;
    static constexpr unsigned frequency = 550;
};

template<> struct mcu_traits<STM32H730IBTxQ>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H73x;
    static constexpr gpio_conf_t gpio_conf = STM32H72;
    static constexpr unsigned frequency = 550;
};

template<> struct mcu_traits<STM32H730VBHx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H73x;
    static constexpr gpio_conf_t gpio_conf = STM32H72;
    static constexpr unsigned frequency = 550;
};

template<> struct mcu_traits<STM32H730VBTx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H73x;
    static constexpr gpio_conf_t gpio_conf = STM32H72;
    static constexpr unsigned frequency = 550;
};

template<> struct mcu_traits<STM32H730ZBIx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H73x;
    static constexpr gpio_conf_t gpio_conf = STM32H72;
    static constexpr unsigned frequency = 550;
};

template<> struct mcu_traits<STM32H730ZBTx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H73x;
    static constexpr gpio_conf_t gpio_conf = STM32H72;
    static constexpr unsigned frequency = 550;
};

template<> struct mcu_traits<STM32H742AGIx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H742x;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H742AIIx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H742x;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H742BGTx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H742x;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H742BITx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H742x;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H742IGKx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H742x;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H742IIKx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H742x;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H742IGTx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H742x;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H742IITx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H742x;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H742VGHx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H742x;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H742VIHx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H742x;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H742VGTx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H742x;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H742VITx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H742x;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H742XGHx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H742x;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H742XIHx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H742x;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H742ZGTx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H742x;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H742ZITx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H742x;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H743AGIx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H743;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H743AIIx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H743;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H743BGTx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H743;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H743BITx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H743;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H743IGKx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H743;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H743IGTx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H743;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H743IIKx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H743;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H743IITx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H743;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H743VGHx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H743;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H743VIHx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H743;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H743VGTx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H743;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H743VITx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H743;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H743XGHx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H743;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H743XIHx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H743;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H743ZGTx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H743;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H743ZITx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H743;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H753AIIx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H753;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H753BITx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H753;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H753IIKx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H753;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H753IITx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H753;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H753VIHx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H753;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H753VITx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H753;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H753XIHx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H753;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H753ZITx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H753;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H745BGTx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H745_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H745BITx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H745_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H745IGKx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H745_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H745IGTx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H745_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H745IIKx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H745_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H745IITx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H745_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H745XGHx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H745_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H745XIHx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H745_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H745ZGTx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H745_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H745ZITx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H745_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H755BITx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H755_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H755IIKx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H755_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H755IITx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H755_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H755XIHx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H755_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H755ZITx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H755_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H747AGIx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H747_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H747AIIx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H747_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H747BGTx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H747_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H747BITx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H747_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H747IGTx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H747_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H747IITx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H747_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H747XGHx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H747_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H747XIHx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H747_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H747ZIYx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H747_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H757AIIx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H757_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H757BITx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H757_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H757IITx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H757_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H757XIHx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H757_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H757ZIYx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H757_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H750IBKx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H750x;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H750IBTx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H750x;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H750VBTx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H750x;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H750XBHx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H750x;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H750ZBTx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H750x;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
    static constexpr unsigned frequency = 480;
};

template<> struct mcu_traits<STM32H7A3AGIxQ>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H7A3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
    static constexpr unsigned frequency = 280;
};

template<> struct mcu_traits<STM32H7A3AIIxQ>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H7A3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
    static constexpr unsigned frequency = 280;
};

template<> struct mcu_traits<STM32H7A3IGKx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H7A3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
    static constexpr unsigned frequency = 280;
};

template<> struct mcu_traits<STM32H7A3IIKx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H7A3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
    static constexpr unsigned frequency = 280;
};

template<> struct mcu_traits<STM32H7A3IGKxQ>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H7A3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
    static constexpr unsigned frequency = 280;
};

template<> struct mcu_traits<STM32H7A3IIKxQ>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H7A3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
    static constexpr unsigned frequency = 280;
};

template<> struct mcu_traits<STM32H7A3IGTx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H7A3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
    static constexpr unsigned frequency = 280;
};

template<> struct mcu_traits<STM32H7A3IITx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H7A3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
    static constexpr unsigned frequency = 280;
};

template<> struct mcu_traits<STM32H7A3IGTxQ>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H7A3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
    static constexpr unsigned frequency = 280;
};

template<> struct mcu_traits<STM32H7A3IITxQ>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H7A3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
    static constexpr unsigned frequency = 280;
};

template<> struct mcu_traits<STM32H7A3LGHxQ>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H7A3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
    static constexpr unsigned frequency = 280;
};

template<> struct mcu_traits<STM32H7A3LIHxQ>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H7A3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
    static constexpr unsigned frequency = 280;
};

template<> struct mcu_traits<STM32H7A3NGHx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H7A3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
    static constexpr unsigned frequency = 280;
};

template<> struct mcu_traits<STM32H7A3NIHx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H7A3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
    static constexpr unsigned frequency = 280;
};

template<> struct mcu_traits<STM32H7A3QIYxQ>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H7A3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
    static constexpr unsigned frequency = 280;
};

template<> struct mcu_traits<STM32H7A3RGTx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H7A3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
    static constexpr unsigned frequency = 280;
};

template<> struct mcu_traits<STM32H7A3RITx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H7A3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
    static constexpr unsigned frequency = 280;
};

template<> struct mcu_traits<STM32H7A3VGHx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H7A3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
    static constexpr unsigned frequency = 280;
};

template<> struct mcu_traits<STM32H7A3VIHx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H7A3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
    static constexpr unsigned frequency = 280;
};

template<> struct mcu_traits<STM32H7A3VGHxQ>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H7A3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
    static constexpr unsigned frequency = 280;
};

template<> struct mcu_traits<STM32H7A3VIHxQ>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H7A3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
    static constexpr unsigned frequency = 280;
};

template<> struct mcu_traits<STM32H7A3VGTx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H7A3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
    static constexpr unsigned frequency = 280;
};

template<> struct mcu_traits<STM32H7A3VITx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H7A3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
    static constexpr unsigned frequency = 280;
};

template<> struct mcu_traits<STM32H7A3VGTxQ>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H7A3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
    static constexpr unsigned frequency = 280;
};

template<> struct mcu_traits<STM32H7A3VITxQ>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H7A3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
    static constexpr unsigned frequency = 280;
};

template<> struct mcu_traits<STM32H7A3ZGTx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H7A3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
    static constexpr unsigned frequency = 280;
};

template<> struct mcu_traits<STM32H7A3ZITx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H7A3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
    static constexpr unsigned frequency = 280;
};

template<> struct mcu_traits<STM32H7A3ZGTxQ>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H7A3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
    static constexpr unsigned frequency = 280;
};

template<> struct mcu_traits<STM32H7A3ZITxQ>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H7A3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
    static constexpr unsigned frequency = 280;
};

template<> struct mcu_traits<STM32H7B3AIIxQ>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H7B3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
    static constexpr unsigned frequency = 280;
};

template<> struct mcu_traits<STM32H7B3IIKx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H7B3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
    static constexpr unsigned frequency = 280;
};

template<> struct mcu_traits<STM32H7B3IIKxQ>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H7B3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
    static constexpr unsigned frequency = 280;
};

template<> struct mcu_traits<STM32H7B3IITx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H7B3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
    static constexpr unsigned frequency = 280;
};

template<> struct mcu_traits<STM32H7B3IITxQ>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H7B3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
    static constexpr unsigned frequency = 280;
};

template<> struct mcu_traits<STM32H7B3LIHxQ>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H7B3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
    static constexpr unsigned frequency = 280;
};

template<> struct mcu_traits<STM32H7B3NIHx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H7B3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
    static constexpr unsigned frequency = 280;
};

template<> struct mcu_traits<STM32H7B3QIYxQ>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H7B3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
    static constexpr unsigned frequency = 280;
};

template<> struct mcu_traits<STM32H7B3RITx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H7B3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
    static constexpr unsigned frequency = 280;
};

template<> struct mcu_traits<STM32H7B3VIHx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H7B3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
    static constexpr unsigned frequency = 280;
};

template<> struct mcu_traits<STM32H7B3VIHxQ>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H7B3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
    static constexpr unsigned frequency = 280;
};

template<> struct mcu_traits<STM32H7B3VITx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H7B3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
    static constexpr unsigned frequency = 280;
};

template<> struct mcu_traits<STM32H7B3VITxQ>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H7B3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
    static constexpr unsigned frequency = 280;
};

template<> struct mcu_traits<STM32H7B3ZITx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H7B3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
    static constexpr unsigned frequency = 280;
};

template<> struct mcu_traits<STM32H7B3ZITxQ>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H7B3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
    static constexpr unsigned frequency = 280;
};

template<> struct mcu_traits<STM32H7B0ABIxQ>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H7B0x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
    static constexpr unsigned frequency = 280;
};

template<> struct mcu_traits<STM32H7B0IBKxQ>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H7B0x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
    static constexpr unsigned frequency = 280;
};

template<> struct mcu_traits<STM32H7B0IBTx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H7B0x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
    static constexpr unsigned frequency = 280;
};

template<> struct mcu_traits<STM32H7B0RBTx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H7B0x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
    static constexpr unsigned frequency = 280;
};

template<> struct mcu_traits<STM32H7B0VBTx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H7B0x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
    static constexpr unsigned frequency = 280;
};

template<> struct mcu_traits<STM32H7B0ZBTx>
{
    static constexpr family_t family = STM32H7;
    static constexpr svd_t svd = STM32H7B0x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
    static constexpr unsigned frequency = 280;
};

// Set target from command-line -DMCU= option
static constexpr mcu_t target = MCU;

