#pragma once

////
//
//      STM32L4+ MCU family
//
///

enum mcu_t
    { STM32L4P5AGIx
    , STM32L4P5AEIx
    , STM32L4P5AGIxP
    , STM32L4P5CGTx
    , STM32L4P5CETx
    , STM32L4P5CGUx
    , STM32L4P5CEUx
    , STM32L4P5CGTxP
    , STM32L4P5CGUxP
    , STM32L4P5QGIx
    , STM32L4P5QEIx
    , STM32L4P5QGIxP
    , STM32L4P5RGTx
    , STM32L4P5RETx
    , STM32L4P5RGTxP
    , STM32L4P5VGTx
    , STM32L4P5VETx
    , STM32L4P5VGYx
    , STM32L4P5VEYx
    , STM32L4P5VGTxP
    , STM32L4P5VGYxP
    , STM32L4P5ZGTx
    , STM32L4P5ZETx
    , STM32L4P5ZGTxP
    , STM32L4Q5AGIx
    , STM32L4Q5CGTx
    , STM32L4Q5CGUx
    , STM32L4Q5QGIx
    , STM32L4Q5RGTx
    , STM32L4Q5VGTx
    , STM32L4Q5VGYx
    , STM32L4Q5ZGTx
    , STM32L4R5AGIx
    , STM32L4R5AIIx
    , STM32L4R5QGIx
    , STM32L4R5QIIx
    , STM32L4R5VGTx
    , STM32L4R5VITx
    , STM32L4R5ZGTx
    , STM32L4R5ZITx
    , STM32L4R5ZGYx
    , STM32L4R5ZIYx
    , STM32L4R5ZITxP
    , STM32L4S5AIIx
    , STM32L4S5QIIx
    , STM32L4S5VITx
    , STM32L4S5ZITx
    , STM32L4S5ZIYx
    , STM32L4R7AIIx
    , STM32L4R7VITx
    , STM32L4R7ZITx
    , STM32L4S7AIIx
    , STM32L4S7VITx
    , STM32L4S7ZITx
    , STM32L4R9AGIx
    , STM32L4R9AIIx
    , STM32L4R9VGTx
    , STM32L4R9VITx
    , STM32L4R9ZGJx
    , STM32L4R9ZIJx
    , STM32L4R9ZGTx
    , STM32L4R9ZITx
    , STM32L4R9ZGYx
    , STM32L4R9ZIYx
    , STM32L4R9ZIYxP
    , STM32L4S9AIIx
    , STM32L4S9VITx
    , STM32L4S9ZIJx
    , STM32L4S9ZITx
    , STM32L4S9ZIYx
    };

enum svd_t
    { STM32L4P5 = 0x1
    , STM32L4Q5 = 0x2
    , STM32L4R5 = 0x4
    , STM32L4R7 = 0x8
    , STM32L4R9 = 0x10
    , STM32L4S5 = 0x20
    , STM32L4S7 = 0x40
    , STM32L4S9 = 0x80
    };

enum gpio_conf_t
    { STM32L4P = 0x1
    , STM32L4Rx = 0x2
    };

enum dma_resource_t
    { AES_IN
    , AES_OUT
    , DAC_CH1
    , DAC_CH2
    , DCMI_PSSI
    , DFSDM_FLT0
    , DFSDM_FLT1
    , DFSDM_FLT2
    , DFSDM_FLT3
    , HASH_IN
    , I2C_RX
    , I2C_TX
    , LPUART_RX
    , LPUART_TX
    , SAI_A
    , SAI_B
    , SPI_RX
    , SPI_TX
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
    { ADC1
    , ADC_COMMON
    , AES
    , CAN1
    , COMP
    , CRC
    , CRS
    , DAC1
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
    , TIM2
    , TIM3
    , TIM4
    , TIM5
    , TIM6
    , TIM7
    , TIM8
    , TIM15
    , TIM16
    , TIM17
    , TSC
    , UART4
    , UART5
    , USART1
    , USART2
    , USART3
    , VREFBUF
    , WWDG
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

template<> struct mcu_traits<STM32L4P5AGIx>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4P5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4P5AEIx>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4P5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4P5AGIxP>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4P5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4P5CGTx>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4P5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4P5CETx>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4P5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4P5CGUx>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4P5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4P5CEUx>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4P5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4P5CGTxP>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4P5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4P5CGUxP>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4P5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4P5QGIx>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4P5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4P5QEIx>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4P5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4P5QGIxP>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4P5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4P5RGTx>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4P5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4P5RETx>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4P5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4P5RGTxP>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4P5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4P5VGTx>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4P5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4P5VETx>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4P5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4P5VGYx>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4P5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4P5VEYx>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4P5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4P5VGTxP>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4P5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4P5VGYxP>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4P5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4P5ZGTx>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4P5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4P5ZETx>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4P5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4P5ZGTxP>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4P5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4Q5AGIx>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4Q5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4Q5CGTx>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4Q5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4Q5CGUx>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4Q5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4Q5QGIx>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4Q5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4Q5RGTx>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4Q5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4Q5VGTx>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4Q5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4Q5VGYx>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4Q5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4Q5ZGTx>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4Q5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4R5AGIx>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4R5;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4R5AIIx>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4R5;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4R5QGIx>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4R5;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4R5QIIx>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4R5;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4R5VGTx>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4R5;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4R5VITx>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4R5;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4R5ZGTx>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4R5;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4R5ZITx>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4R5;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4R5ZGYx>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4R5;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4R5ZIYx>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4R5;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4R5ZITxP>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4R5;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4S5AIIx>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4S5;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4S5QIIx>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4S5;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4S5VITx>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4S5;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4S5ZITx>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4S5;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4S5ZIYx>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4S5;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4R7AIIx>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4R7;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4R7VITx>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4R7;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4R7ZITx>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4R7;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4S7AIIx>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4S7;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4S7VITx>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4S7;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4S7ZITx>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4S7;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4R9AGIx>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4R9;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4R9AIIx>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4R9;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4R9VGTx>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4R9;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4R9VITx>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4R9;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4R9ZGJx>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4R9;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4R9ZIJx>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4R9;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4R9ZGTx>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4R9;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4R9ZITx>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4R9;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4R9ZGYx>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4R9;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4R9ZIYx>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4R9;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4R9ZIYxP>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4R9;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4S9AIIx>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4S9;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4S9VITx>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4S9;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4S9ZIJx>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4S9;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4S9ZITx>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4S9;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32L4S9ZIYx>
{
    static constexpr family_t family = STM32L4Plus;
    static constexpr svd_t svd = STM32L4S9;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
    static constexpr unsigned frequency = 120;
};

// Set target from command-line -DMCU= option
static constexpr mcu_t target = MCU;

