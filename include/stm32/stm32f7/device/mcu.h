#pragma once

////
//
//      STM32F7 MCU family
//
///

enum mcu_t
    { STM32F730I8Kx
    , STM32F730R8Tx
    , STM32F730V8Tx
    , STM32F730Z8Tx
    , STM32F750N8Hx
    , STM32F750V8Tx
    , STM32F750Z8Tx
    , STM32F722ICKx
    , STM32F722IEKx
    , STM32F722ICTx
    , STM32F722IETx
    , STM32F722RCTx
    , STM32F722RETx
    , STM32F722VCTx
    , STM32F722VETx
    , STM32F722ZCTx
    , STM32F722ZETx
    , STM32F732IEKx
    , STM32F732IETx
    , STM32F732RETx
    , STM32F732VETx
    , STM32F732ZETx
    , STM32F723ICKx
    , STM32F723IEKx
    , STM32F723ICTx
    , STM32F723IETx
    , STM32F723VCTx
    , STM32F723VETx
    , STM32F723VCYx
    , STM32F723VEYx
    , STM32F723ZCIx
    , STM32F723ZEIx
    , STM32F723ZCTx
    , STM32F723ZETx
    , STM32F733IEKx
    , STM32F733IETx
    , STM32F733VETx
    , STM32F733VEYx
    , STM32F733ZEIx
    , STM32F733ZETx
    , STM32F745IEKx
    , STM32F745IGKx
    , STM32F745IETx
    , STM32F745IGTx
    , STM32F745VEHx
    , STM32F745VGHx
    , STM32F745VETx
    , STM32F745VGTx
    , STM32F745ZETx
    , STM32F745ZGTx
    , STM32F765BGTx
    , STM32F765BITx
    , STM32F765IGKx
    , STM32F765IIKx
    , STM32F765IGTx
    , STM32F765IITx
    , STM32F765NGHx
    , STM32F765NIHx
    , STM32F765VGHx
    , STM32F765VIHx
    , STM32F765VGTx
    , STM32F765VITx
    , STM32F765ZGTx
    , STM32F765ZITx
    , STM32F746BETx
    , STM32F746BGTx
    , STM32F746IEKx
    , STM32F746IGKx
    , STM32F746IETx
    , STM32F746IGTx
    , STM32F746NEHx
    , STM32F746NGHx
    , STM32F746VEHx
    , STM32F746VGHx
    , STM32F746VETx
    , STM32F746VGTx
    , STM32F746ZEYx
    , STM32F746ZGYx
    , STM32F746ZETx
    , STM32F746ZGTx
    , STM32F756BGTx
    , STM32F756IGKx
    , STM32F756IGTx
    , STM32F756NGHx
    , STM32F756VGHx
    , STM32F756VGTx
    , STM32F756ZGTx
    , STM32F756ZGYx
    , STM32F767BGTx
    , STM32F767BITx
    , STM32F767IGKx
    , STM32F767IIKx
    , STM32F767IGTx
    , STM32F767IITx
    , STM32F767NGHx
    , STM32F767NIHx
    , STM32F767VGHx
    , STM32F767VGTx
    , STM32F767VIHx
    , STM32F767VITx
    , STM32F767ZGTx
    , STM32F767ZITx
    , STM32F777BITx
    , STM32F777IIKx
    , STM32F777IITx
    , STM32F777NIHx
    , STM32F777VIHx
    , STM32F777VITx
    , STM32F777ZITx
    , STM32F768AIYx
    , STM32F769AGYx
    , STM32F769AIYx
    , STM32F769BGTx
    , STM32F769BITx
    , STM32F769IGTx
    , STM32F769IITx
    , STM32F769NGHx
    , STM32F769NIHx
    , STM32F778AIYx
    , STM32F779AIYx
    , STM32F779BITx
    , STM32F779IITx
    , STM32F779NIHx
    };

enum svd_t
    { STM32F722 = 0x1
    , STM32F723 = 0x2
    , STM32F730 = 0x4
    , STM32F732 = 0x8
    , STM32F733 = 0x10
    , STM32F745 = 0x20
    , STM32F746 = 0x40
    , STM32F750x = 0x80
    , STM32F756 = 0x100
    , STM32F765 = 0x200
    , STM32F767 = 0x400
    , STM32F768 = 0x800
    , STM32F769 = 0x1000
    , STM32F777 = 0x2000
    , STM32F778 = 0x4000
    , STM32F779 = 0x8000
    };

enum gpio_conf_t
    { STM32F72x = 0x1
    , STM32F746_ = 0x2
    , STM32F76x = 0x4
    };

enum dma_resource_t
    {
    };

enum periph_t
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
    , DAC1
    , DBG
    , DBGMCU
    , DCMI
    , DFSDM
    , DMA1
    , DMA2
    , DMA2D
    , DSI
    , ETHERNET_DMA
    , ETHERNET_MAC
    , ETHERNET_MMC
    , ETHERNET_PTP
    , EXTI
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
    , PF_
    , PWR
    , QUADSPI1
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
    , TIM2
    , TIM3
    , TIM4
    , TIM5
    , TIM6
    , TIM7
    , TIM8
    , TIM9
    , TIM10
    , TIM11
    , TIM12
    , TIM13
    , TIM14
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

template<> struct mcu_traits<STM32F730I8Kx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F730;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F730R8Tx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F730;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F730V8Tx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F730;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F730Z8Tx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F730;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F750N8Hx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F750x;
    static constexpr gpio_conf_t gpio_conf = STM32F746_;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F750V8Tx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F750x;
    static constexpr gpio_conf_t gpio_conf = STM32F746_;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F750Z8Tx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F750x;
    static constexpr gpio_conf_t gpio_conf = STM32F746_;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F722ICKx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F722;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F722IEKx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F722;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F722ICTx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F722;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F722IETx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F722;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F722RCTx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F722;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F722RETx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F722;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F722VCTx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F722;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F722VETx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F722;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F722ZCTx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F722;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F722ZETx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F722;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F732IEKx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F732;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F732IETx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F732;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F732RETx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F732;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F732VETx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F732;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F732ZETx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F732;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F723ICKx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F723;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F723IEKx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F723;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F723ICTx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F723;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F723IETx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F723;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F723VCTx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F723;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F723VETx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F723;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F723VCYx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F723;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F723VEYx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F723;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F723ZCIx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F723;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F723ZEIx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F723;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F723ZCTx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F723;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F723ZETx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F723;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F733IEKx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F733;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F733IETx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F733;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F733VETx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F733;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F733VEYx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F733;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F733ZEIx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F733;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F733ZETx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F733;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F745IEKx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F745;
    static constexpr gpio_conf_t gpio_conf = STM32F746_;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F745IGKx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F745;
    static constexpr gpio_conf_t gpio_conf = STM32F746_;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F745IETx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F745;
    static constexpr gpio_conf_t gpio_conf = STM32F746_;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F745IGTx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F745;
    static constexpr gpio_conf_t gpio_conf = STM32F746_;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F745VEHx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F745;
    static constexpr gpio_conf_t gpio_conf = STM32F746_;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F745VGHx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F745;
    static constexpr gpio_conf_t gpio_conf = STM32F746_;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F745VETx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F745;
    static constexpr gpio_conf_t gpio_conf = STM32F746_;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F745VGTx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F745;
    static constexpr gpio_conf_t gpio_conf = STM32F746_;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F745ZETx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F745;
    static constexpr gpio_conf_t gpio_conf = STM32F746_;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F745ZGTx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F745;
    static constexpr gpio_conf_t gpio_conf = STM32F746_;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F765BGTx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F765;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F765BITx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F765;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F765IGKx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F765;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F765IIKx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F765;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F765IGTx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F765;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F765IITx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F765;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F765NGHx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F765;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F765NIHx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F765;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F765VGHx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F765;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F765VIHx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F765;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F765VGTx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F765;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F765VITx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F765;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F765ZGTx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F765;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F765ZITx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F765;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F746BETx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F746;
    static constexpr gpio_conf_t gpio_conf = STM32F746_;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F746BGTx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F746;
    static constexpr gpio_conf_t gpio_conf = STM32F746_;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F746IEKx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F746;
    static constexpr gpio_conf_t gpio_conf = STM32F746_;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F746IGKx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F746;
    static constexpr gpio_conf_t gpio_conf = STM32F746_;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F746IETx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F746;
    static constexpr gpio_conf_t gpio_conf = STM32F746_;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F746IGTx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F746;
    static constexpr gpio_conf_t gpio_conf = STM32F746_;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F746NEHx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F746;
    static constexpr gpio_conf_t gpio_conf = STM32F746_;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F746NGHx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F746;
    static constexpr gpio_conf_t gpio_conf = STM32F746_;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F746VEHx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F746;
    static constexpr gpio_conf_t gpio_conf = STM32F746_;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F746VGHx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F746;
    static constexpr gpio_conf_t gpio_conf = STM32F746_;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F746VETx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F746;
    static constexpr gpio_conf_t gpio_conf = STM32F746_;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F746VGTx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F746;
    static constexpr gpio_conf_t gpio_conf = STM32F746_;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F746ZEYx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F746;
    static constexpr gpio_conf_t gpio_conf = STM32F746_;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F746ZGYx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F746;
    static constexpr gpio_conf_t gpio_conf = STM32F746_;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F746ZETx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F746;
    static constexpr gpio_conf_t gpio_conf = STM32F746_;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F746ZGTx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F746;
    static constexpr gpio_conf_t gpio_conf = STM32F746_;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F756BGTx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F756;
    static constexpr gpio_conf_t gpio_conf = STM32F746_;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F756IGKx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F756;
    static constexpr gpio_conf_t gpio_conf = STM32F746_;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F756IGTx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F756;
    static constexpr gpio_conf_t gpio_conf = STM32F746_;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F756NGHx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F756;
    static constexpr gpio_conf_t gpio_conf = STM32F746_;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F756VGHx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F756;
    static constexpr gpio_conf_t gpio_conf = STM32F746_;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F756VGTx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F756;
    static constexpr gpio_conf_t gpio_conf = STM32F746_;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F756ZGTx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F756;
    static constexpr gpio_conf_t gpio_conf = STM32F746_;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F756ZGYx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F756;
    static constexpr gpio_conf_t gpio_conf = STM32F746_;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F767BGTx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F767;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F767BITx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F767;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F767IGKx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F767;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F767IIKx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F767;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F767IGTx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F767;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F767IITx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F767;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F767NGHx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F767;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F767NIHx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F767;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F767VGHx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F767;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F767VGTx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F767;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F767VIHx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F767;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F767VITx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F767;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F767ZGTx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F767;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F767ZITx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F767;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F777BITx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F777;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F777IIKx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F777;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F777IITx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F777;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F777NIHx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F777;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F777VIHx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F777;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F777VITx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F777;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F777ZITx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F777;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F768AIYx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F768;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F769AGYx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F769;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F769AIYx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F769;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F769BGTx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F769;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F769BITx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F769;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F769IGTx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F769;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F769IITx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F769;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F769NGHx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F769;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F769NIHx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F769;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F778AIYx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F778;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F779AIYx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F779;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F779BITx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F779;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F779IITx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F779;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
    static constexpr unsigned frequency = 216;
};

template<> struct mcu_traits<STM32F779NIHx>
{
    static constexpr family_t family = STM32F7;
    static constexpr svd_t svd = STM32F779;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
    static constexpr unsigned frequency = 216;
};

// Set target from command-line -DMCU= option
static constexpr mcu_t target = MCU;

