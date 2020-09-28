#pragma once

////
//
//      STM32F4 MCU family
//
///

enum mcu_t
    { STM32F401CBUx
    , STM32F401CCUx
    , STM32F401CBYx
    , STM32F401CCYx
    , STM32F401CDUx
    , STM32F401CEUx
    , STM32F401CDYx
    , STM32F401CEYx
    , STM32F401CCFx
    , STM32F401RBTx
    , STM32F401RCTx
    , STM32F401RDTx
    , STM32F401RETx
    , STM32F401VBHx
    , STM32F401VCHx
    , STM32F401VBTx
    , STM32F401VCTx
    , STM32F401VDHx
    , STM32F401VEHx
    , STM32F401VDTx
    , STM32F401VETx
    , STM32F405OEYx
    , STM32F405OGYx
    , STM32F405RGTx
    , STM32F405VGTx
    , STM32F405ZGTx
    , STM32F415OGYx
    , STM32F415RGTx
    , STM32F415VGTx
    , STM32F415ZGTx
    , STM32F407IEHx
    , STM32F407IGHx
    , STM32F407IETx
    , STM32F407IGTx
    , STM32F407VETx
    , STM32F407VGTx
    , STM32F407ZETx
    , STM32F407ZGTx
    , STM32F417IEHx
    , STM32F417IGHx
    , STM32F417IETx
    , STM32F417IGTx
    , STM32F417VETx
    , STM32F417VGTx
    , STM32F417ZETx
    , STM32F417ZGTx
    , STM32F410C8Tx
    , STM32F410CBTx
    , STM32F410C8Ux
    , STM32F410CBUx
    , STM32F410R8Ix
    , STM32F410RBIx
    , STM32F410R8Tx
    , STM32F410RBTx
    , STM32F410T8Yx
    , STM32F410TBYx
    , STM32F411CCUx
    , STM32F411CEUx
    , STM32F411CCYx
    , STM32F411CEYx
    , STM32F411RCTx
    , STM32F411RETx
    , STM32F411VCHx
    , STM32F411VEHx
    , STM32F411VCTx
    , STM32F411VETx
    , STM32F412CEUx
    , STM32F412CGUx
    , STM32F412RETx
    , STM32F412RGTx
    , STM32F412REYx
    , STM32F412RGYx
    , STM32F412REYxP
    , STM32F412RGYxP
    , STM32F412VEHx
    , STM32F412VGHx
    , STM32F412VETx
    , STM32F412VGTx
    , STM32F412ZEJx
    , STM32F412ZGJx
    , STM32F412ZETx
    , STM32F412ZGTx
    , STM32F413CGUx
    , STM32F413CHUx
    , STM32F413MGYx
    , STM32F413MHYx
    , STM32F413RGTx
    , STM32F413RHTx
    , STM32F413VGHx
    , STM32F413VHHx
    , STM32F413VGTx
    , STM32F413VHTx
    , STM32F413ZGJx
    , STM32F413ZHJx
    , STM32F413ZGTx
    , STM32F413ZHTx
    , STM32F423CHUx
    , STM32F423MHYx
    , STM32F423RHTx
    , STM32F423VHHx
    , STM32F423VHTx
    , STM32F423ZHJx
    , STM32F423ZHTx
    , STM32F427AGHx
    , STM32F427AIHx
    , STM32F427IGHx
    , STM32F427IIHx
    , STM32F427IGTx
    , STM32F427IITx
    , STM32F427VGTx
    , STM32F427VITx
    , STM32F427ZGTx
    , STM32F427ZITx
    , STM32F437AIHx
    , STM32F437IGHx
    , STM32F437IIHx
    , STM32F437IGTx
    , STM32F437IITx
    , STM32F437VGTx
    , STM32F437VITx
    , STM32F437ZGTx
    , STM32F437ZITx
    , STM32F429AGHx
    , STM32F429AIHx
    , STM32F429BETx
    , STM32F429BGTx
    , STM32F429BITx
    , STM32F429IETx
    , STM32F429IGTx
    , STM32F429IEHx
    , STM32F429IGHx
    , STM32F429IIHx
    , STM32F429IITx
    , STM32F429NEHx
    , STM32F429NGHx
    , STM32F429NIHx
    , STM32F429VETx
    , STM32F429VGTx
    , STM32F429VITx
    , STM32F429ZETx
    , STM32F429ZGTx
    , STM32F429ZGYx
    , STM32F429ZITx
    , STM32F429ZIYx
    , STM32F439AIHx
    , STM32F439BGTx
    , STM32F439BITx
    , STM32F439IGHx
    , STM32F439IIHx
    , STM32F439IGTx
    , STM32F439IITx
    , STM32F439NGHx
    , STM32F439NIHx
    , STM32F439VGTx
    , STM32F439VITx
    , STM32F439ZGTx
    , STM32F439ZITx
    , STM32F439ZGYx
    , STM32F439ZIYx
    , STM32F446MCYx
    , STM32F446MEYx
    , STM32F446RCTx
    , STM32F446RETx
    , STM32F446VCTx
    , STM32F446VETx
    , STM32F446ZCHx
    , STM32F446ZEHx
    , STM32F446ZCJx
    , STM32F446ZEJx
    , STM32F446ZCTx
    , STM32F446ZETx
    , STM32F469AEHx
    , STM32F469AGHx
    , STM32F469AIHx
    , STM32F469AEYx
    , STM32F469AGYx
    , STM32F469AIYx
    , STM32F469BETx
    , STM32F469BGTx
    , STM32F469BITx
    , STM32F469IETx
    , STM32F469IGTx
    , STM32F469IEHx
    , STM32F469IGHx
    , STM32F469IIHx
    , STM32F469IITx
    , STM32F469NEHx
    , STM32F469NGHx
    , STM32F469NIHx
    , STM32F469VETx
    , STM32F469VGTx
    , STM32F469VITx
    , STM32F469ZETx
    , STM32F469ZGTx
    , STM32F469ZITx
    , STM32F479AGHx
    , STM32F479AIHx
    , STM32F479AGYx
    , STM32F479AIYx
    , STM32F479BGTx
    , STM32F479BITx
    , STM32F479IGHx
    , STM32F479IIHx
    , STM32F479IGTx
    , STM32F479IITx
    , STM32F479NGHx
    , STM32F479NIHx
    , STM32F479VGTx
    , STM32F479VITx
    , STM32F479ZGTx
    , STM32F479ZITx
    };

enum svd_t
    { STM32F401
    , STM32F405
    , STM32F407
    , STM32F410
    , STM32F411
    , STM32F412
    , STM32F413
    , STM32F427
    , STM32F429
    , STM32F446
    , STM32F469
    };

enum gpio_conf_t
    { STM32F401_ = 0x1
    , STM32F410_ = 0x2
    , STM32F411_ = 0x4
    , STM32F412_ = 0x8
    , STM32F413_ = 0x10
    , STM32F417 = 0x20
    , STM32F427_ = 0x40
    , STM32F446_ = 0x80
    , STM32F469_ = 0x100
    };

enum periph_t
    { ADC1
    , ADC2
    , ADC3
    , ADC_COMMON
    , AES
    , CAN1
    , CAN2
    , CAN3
    , CRC
    , CRYP
    , C_ADC
    , DAC1
    , DBG
    , DCMI
    , DFSDM
    , DFSDM1
    , DFSDM2
    , DMA1
    , DMA2
    , DMA2D
    , DSIHOST
    , ETHERNET_DMA
    , ETHERNET_MAC
    , ETHERNET_MMC
    , ETHERNET_PTP
    , EXTI
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
    , I2S2EXT
    , I2S3EXT
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
    , QUADSPI1
    , RCC
    , RNG
    , RTC
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
    , UART9
    , UART10
    , USART1
    , USART2
    , USART3
    , USART6
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

template<mcu_t MCU> struct mcu_traits {};

template<> struct mcu_traits<STM32F401CBUx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F401;
    static constexpr gpio_conf_t gpio_conf = STM32F401_;
    static constexpr unsigned frequency = 84;
};

template<> struct mcu_traits<STM32F401CCUx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F401;
    static constexpr gpio_conf_t gpio_conf = STM32F401_;
    static constexpr unsigned frequency = 84;
};

template<> struct mcu_traits<STM32F401CBYx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F401;
    static constexpr gpio_conf_t gpio_conf = STM32F401_;
    static constexpr unsigned frequency = 84;
};

template<> struct mcu_traits<STM32F401CCYx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F401;
    static constexpr gpio_conf_t gpio_conf = STM32F401_;
    static constexpr unsigned frequency = 84;
};

template<> struct mcu_traits<STM32F401CDUx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F401;
    static constexpr gpio_conf_t gpio_conf = STM32F401_;
    static constexpr unsigned frequency = 84;
};

template<> struct mcu_traits<STM32F401CEUx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F401;
    static constexpr gpio_conf_t gpio_conf = STM32F401_;
    static constexpr unsigned frequency = 84;
};

template<> struct mcu_traits<STM32F401CDYx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F401;
    static constexpr gpio_conf_t gpio_conf = STM32F401_;
    static constexpr unsigned frequency = 84;
};

template<> struct mcu_traits<STM32F401CEYx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F401;
    static constexpr gpio_conf_t gpio_conf = STM32F401_;
    static constexpr unsigned frequency = 84;
};

template<> struct mcu_traits<STM32F401CCFx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F401;
    static constexpr gpio_conf_t gpio_conf = STM32F401_;
    static constexpr unsigned frequency = 84;
};

template<> struct mcu_traits<STM32F401RBTx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F401;
    static constexpr gpio_conf_t gpio_conf = STM32F401_;
    static constexpr unsigned frequency = 84;
};

template<> struct mcu_traits<STM32F401RCTx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F401;
    static constexpr gpio_conf_t gpio_conf = STM32F401_;
    static constexpr unsigned frequency = 84;
};

template<> struct mcu_traits<STM32F401RDTx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F401;
    static constexpr gpio_conf_t gpio_conf = STM32F401_;
    static constexpr unsigned frequency = 84;
};

template<> struct mcu_traits<STM32F401RETx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F401;
    static constexpr gpio_conf_t gpio_conf = STM32F401_;
    static constexpr unsigned frequency = 84;
};

template<> struct mcu_traits<STM32F401VBHx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F401;
    static constexpr gpio_conf_t gpio_conf = STM32F401_;
    static constexpr unsigned frequency = 84;
};

template<> struct mcu_traits<STM32F401VCHx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F401;
    static constexpr gpio_conf_t gpio_conf = STM32F401_;
    static constexpr unsigned frequency = 84;
};

template<> struct mcu_traits<STM32F401VBTx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F401;
    static constexpr gpio_conf_t gpio_conf = STM32F401_;
    static constexpr unsigned frequency = 84;
};

template<> struct mcu_traits<STM32F401VCTx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F401;
    static constexpr gpio_conf_t gpio_conf = STM32F401_;
    static constexpr unsigned frequency = 84;
};

template<> struct mcu_traits<STM32F401VDHx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F401;
    static constexpr gpio_conf_t gpio_conf = STM32F401_;
    static constexpr unsigned frequency = 84;
};

template<> struct mcu_traits<STM32F401VEHx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F401;
    static constexpr gpio_conf_t gpio_conf = STM32F401_;
    static constexpr unsigned frequency = 84;
};

template<> struct mcu_traits<STM32F401VDTx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F401;
    static constexpr gpio_conf_t gpio_conf = STM32F401_;
    static constexpr unsigned frequency = 84;
};

template<> struct mcu_traits<STM32F401VETx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F401;
    static constexpr gpio_conf_t gpio_conf = STM32F401_;
    static constexpr unsigned frequency = 84;
};

template<> struct mcu_traits<STM32F405OEYx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F405;
    static constexpr gpio_conf_t gpio_conf = STM32F417;
    static constexpr unsigned frequency = 168;
};

template<> struct mcu_traits<STM32F405OGYx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F405;
    static constexpr gpio_conf_t gpio_conf = STM32F417;
    static constexpr unsigned frequency = 168;
};

template<> struct mcu_traits<STM32F405RGTx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F405;
    static constexpr gpio_conf_t gpio_conf = STM32F417;
    static constexpr unsigned frequency = 168;
};

template<> struct mcu_traits<STM32F405VGTx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F405;
    static constexpr gpio_conf_t gpio_conf = STM32F417;
    static constexpr unsigned frequency = 168;
};

template<> struct mcu_traits<STM32F405ZGTx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F405;
    static constexpr gpio_conf_t gpio_conf = STM32F417;
    static constexpr unsigned frequency = 168;
};

template<> struct mcu_traits<STM32F415OGYx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F405;
    static constexpr gpio_conf_t gpio_conf = STM32F417;
    static constexpr unsigned frequency = 168;
};

template<> struct mcu_traits<STM32F415RGTx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F405;
    static constexpr gpio_conf_t gpio_conf = STM32F417;
    static constexpr unsigned frequency = 168;
};

template<> struct mcu_traits<STM32F415VGTx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F405;
    static constexpr gpio_conf_t gpio_conf = STM32F417;
    static constexpr unsigned frequency = 168;
};

template<> struct mcu_traits<STM32F415ZGTx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F405;
    static constexpr gpio_conf_t gpio_conf = STM32F417;
    static constexpr unsigned frequency = 168;
};

template<> struct mcu_traits<STM32F407IEHx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F407;
    static constexpr gpio_conf_t gpio_conf = STM32F417;
    static constexpr unsigned frequency = 168;
};

template<> struct mcu_traits<STM32F407IGHx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F407;
    static constexpr gpio_conf_t gpio_conf = STM32F417;
    static constexpr unsigned frequency = 168;
};

template<> struct mcu_traits<STM32F407IETx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F407;
    static constexpr gpio_conf_t gpio_conf = STM32F417;
    static constexpr unsigned frequency = 168;
};

template<> struct mcu_traits<STM32F407IGTx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F407;
    static constexpr gpio_conf_t gpio_conf = STM32F417;
    static constexpr unsigned frequency = 168;
};

template<> struct mcu_traits<STM32F407VETx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F407;
    static constexpr gpio_conf_t gpio_conf = STM32F417;
    static constexpr unsigned frequency = 168;
};

template<> struct mcu_traits<STM32F407VGTx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F407;
    static constexpr gpio_conf_t gpio_conf = STM32F417;
    static constexpr unsigned frequency = 168;
};

template<> struct mcu_traits<STM32F407ZETx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F407;
    static constexpr gpio_conf_t gpio_conf = STM32F417;
    static constexpr unsigned frequency = 168;
};

template<> struct mcu_traits<STM32F407ZGTx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F407;
    static constexpr gpio_conf_t gpio_conf = STM32F417;
    static constexpr unsigned frequency = 168;
};

template<> struct mcu_traits<STM32F417IEHx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F407;
    static constexpr gpio_conf_t gpio_conf = STM32F417;
    static constexpr unsigned frequency = 168;
};

template<> struct mcu_traits<STM32F417IGHx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F407;
    static constexpr gpio_conf_t gpio_conf = STM32F417;
    static constexpr unsigned frequency = 168;
};

template<> struct mcu_traits<STM32F417IETx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F407;
    static constexpr gpio_conf_t gpio_conf = STM32F417;
    static constexpr unsigned frequency = 168;
};

template<> struct mcu_traits<STM32F417IGTx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F407;
    static constexpr gpio_conf_t gpio_conf = STM32F417;
    static constexpr unsigned frequency = 168;
};

template<> struct mcu_traits<STM32F417VETx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F407;
    static constexpr gpio_conf_t gpio_conf = STM32F417;
    static constexpr unsigned frequency = 168;
};

template<> struct mcu_traits<STM32F417VGTx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F407;
    static constexpr gpio_conf_t gpio_conf = STM32F417;
    static constexpr unsigned frequency = 168;
};

template<> struct mcu_traits<STM32F417ZETx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F407;
    static constexpr gpio_conf_t gpio_conf = STM32F417;
    static constexpr unsigned frequency = 168;
};

template<> struct mcu_traits<STM32F417ZGTx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F407;
    static constexpr gpio_conf_t gpio_conf = STM32F417;
    static constexpr unsigned frequency = 168;
};

template<> struct mcu_traits<STM32F410C8Tx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F410;
    static constexpr gpio_conf_t gpio_conf = STM32F410_;
    static constexpr unsigned frequency = 100;
};

template<> struct mcu_traits<STM32F410CBTx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F410;
    static constexpr gpio_conf_t gpio_conf = STM32F410_;
    static constexpr unsigned frequency = 100;
};

template<> struct mcu_traits<STM32F410C8Ux>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F410;
    static constexpr gpio_conf_t gpio_conf = STM32F410_;
    static constexpr unsigned frequency = 100;
};

template<> struct mcu_traits<STM32F410CBUx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F410;
    static constexpr gpio_conf_t gpio_conf = STM32F410_;
    static constexpr unsigned frequency = 100;
};

template<> struct mcu_traits<STM32F410R8Ix>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F410;
    static constexpr gpio_conf_t gpio_conf = STM32F410_;
    static constexpr unsigned frequency = 100;
};

template<> struct mcu_traits<STM32F410RBIx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F410;
    static constexpr gpio_conf_t gpio_conf = STM32F410_;
    static constexpr unsigned frequency = 100;
};

template<> struct mcu_traits<STM32F410R8Tx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F410;
    static constexpr gpio_conf_t gpio_conf = STM32F410_;
    static constexpr unsigned frequency = 100;
};

template<> struct mcu_traits<STM32F410RBTx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F410;
    static constexpr gpio_conf_t gpio_conf = STM32F410_;
    static constexpr unsigned frequency = 100;
};

template<> struct mcu_traits<STM32F410T8Yx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F410;
    static constexpr gpio_conf_t gpio_conf = STM32F410_;
    static constexpr unsigned frequency = 100;
};

template<> struct mcu_traits<STM32F410TBYx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F410;
    static constexpr gpio_conf_t gpio_conf = STM32F410_;
    static constexpr unsigned frequency = 100;
};

template<> struct mcu_traits<STM32F411CCUx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F411;
    static constexpr gpio_conf_t gpio_conf = STM32F411_;
    static constexpr unsigned frequency = 100;
};

template<> struct mcu_traits<STM32F411CEUx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F411;
    static constexpr gpio_conf_t gpio_conf = STM32F411_;
    static constexpr unsigned frequency = 100;
};

template<> struct mcu_traits<STM32F411CCYx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F411;
    static constexpr gpio_conf_t gpio_conf = STM32F411_;
    static constexpr unsigned frequency = 100;
};

template<> struct mcu_traits<STM32F411CEYx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F411;
    static constexpr gpio_conf_t gpio_conf = STM32F411_;
    static constexpr unsigned frequency = 100;
};

template<> struct mcu_traits<STM32F411RCTx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F411;
    static constexpr gpio_conf_t gpio_conf = STM32F411_;
    static constexpr unsigned frequency = 100;
};

template<> struct mcu_traits<STM32F411RETx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F411;
    static constexpr gpio_conf_t gpio_conf = STM32F411_;
    static constexpr unsigned frequency = 100;
};

template<> struct mcu_traits<STM32F411VCHx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F411;
    static constexpr gpio_conf_t gpio_conf = STM32F411_;
    static constexpr unsigned frequency = 100;
};

template<> struct mcu_traits<STM32F411VEHx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F411;
    static constexpr gpio_conf_t gpio_conf = STM32F411_;
    static constexpr unsigned frequency = 100;
};

template<> struct mcu_traits<STM32F411VCTx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F411;
    static constexpr gpio_conf_t gpio_conf = STM32F411_;
    static constexpr unsigned frequency = 100;
};

template<> struct mcu_traits<STM32F411VETx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F411;
    static constexpr gpio_conf_t gpio_conf = STM32F411_;
    static constexpr unsigned frequency = 100;
};

template<> struct mcu_traits<STM32F412CEUx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F412;
    static constexpr gpio_conf_t gpio_conf = STM32F412_;
    static constexpr unsigned frequency = 100;
};

template<> struct mcu_traits<STM32F412CGUx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F412;
    static constexpr gpio_conf_t gpio_conf = STM32F412_;
    static constexpr unsigned frequency = 100;
};

template<> struct mcu_traits<STM32F412RETx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F412;
    static constexpr gpio_conf_t gpio_conf = STM32F412_;
    static constexpr unsigned frequency = 100;
};

template<> struct mcu_traits<STM32F412RGTx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F412;
    static constexpr gpio_conf_t gpio_conf = STM32F412_;
    static constexpr unsigned frequency = 100;
};

template<> struct mcu_traits<STM32F412REYx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F412;
    static constexpr gpio_conf_t gpio_conf = STM32F412_;
    static constexpr unsigned frequency = 100;
};

template<> struct mcu_traits<STM32F412RGYx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F412;
    static constexpr gpio_conf_t gpio_conf = STM32F412_;
    static constexpr unsigned frequency = 100;
};

template<> struct mcu_traits<STM32F412REYxP>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F412;
    static constexpr gpio_conf_t gpio_conf = STM32F412_;
    static constexpr unsigned frequency = 100;
};

template<> struct mcu_traits<STM32F412RGYxP>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F412;
    static constexpr gpio_conf_t gpio_conf = STM32F412_;
    static constexpr unsigned frequency = 100;
};

template<> struct mcu_traits<STM32F412VEHx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F412;
    static constexpr gpio_conf_t gpio_conf = STM32F412_;
    static constexpr unsigned frequency = 100;
};

template<> struct mcu_traits<STM32F412VGHx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F412;
    static constexpr gpio_conf_t gpio_conf = STM32F412_;
    static constexpr unsigned frequency = 100;
};

template<> struct mcu_traits<STM32F412VETx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F412;
    static constexpr gpio_conf_t gpio_conf = STM32F412_;
    static constexpr unsigned frequency = 100;
};

template<> struct mcu_traits<STM32F412VGTx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F412;
    static constexpr gpio_conf_t gpio_conf = STM32F412_;
    static constexpr unsigned frequency = 100;
};

template<> struct mcu_traits<STM32F412ZEJx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F412;
    static constexpr gpio_conf_t gpio_conf = STM32F412_;
    static constexpr unsigned frequency = 100;
};

template<> struct mcu_traits<STM32F412ZGJx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F412;
    static constexpr gpio_conf_t gpio_conf = STM32F412_;
    static constexpr unsigned frequency = 100;
};

template<> struct mcu_traits<STM32F412ZETx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F412;
    static constexpr gpio_conf_t gpio_conf = STM32F412_;
    static constexpr unsigned frequency = 100;
};

template<> struct mcu_traits<STM32F412ZGTx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F412;
    static constexpr gpio_conf_t gpio_conf = STM32F412_;
    static constexpr unsigned frequency = 100;
};

template<> struct mcu_traits<STM32F413CGUx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F413;
    static constexpr gpio_conf_t gpio_conf = STM32F413_;
    static constexpr unsigned frequency = 100;
};

template<> struct mcu_traits<STM32F413CHUx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F413;
    static constexpr gpio_conf_t gpio_conf = STM32F413_;
    static constexpr unsigned frequency = 100;
};

template<> struct mcu_traits<STM32F413MGYx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F413;
    static constexpr gpio_conf_t gpio_conf = STM32F413_;
    static constexpr unsigned frequency = 100;
};

template<> struct mcu_traits<STM32F413MHYx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F413;
    static constexpr gpio_conf_t gpio_conf = STM32F413_;
    static constexpr unsigned frequency = 100;
};

template<> struct mcu_traits<STM32F413RGTx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F413;
    static constexpr gpio_conf_t gpio_conf = STM32F413_;
    static constexpr unsigned frequency = 100;
};

template<> struct mcu_traits<STM32F413RHTx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F413;
    static constexpr gpio_conf_t gpio_conf = STM32F413_;
    static constexpr unsigned frequency = 100;
};

template<> struct mcu_traits<STM32F413VGHx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F413;
    static constexpr gpio_conf_t gpio_conf = STM32F413_;
    static constexpr unsigned frequency = 100;
};

template<> struct mcu_traits<STM32F413VHHx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F413;
    static constexpr gpio_conf_t gpio_conf = STM32F413_;
    static constexpr unsigned frequency = 100;
};

template<> struct mcu_traits<STM32F413VGTx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F413;
    static constexpr gpio_conf_t gpio_conf = STM32F413_;
    static constexpr unsigned frequency = 100;
};

template<> struct mcu_traits<STM32F413VHTx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F413;
    static constexpr gpio_conf_t gpio_conf = STM32F413_;
    static constexpr unsigned frequency = 100;
};

template<> struct mcu_traits<STM32F413ZGJx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F413;
    static constexpr gpio_conf_t gpio_conf = STM32F413_;
    static constexpr unsigned frequency = 100;
};

template<> struct mcu_traits<STM32F413ZHJx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F413;
    static constexpr gpio_conf_t gpio_conf = STM32F413_;
    static constexpr unsigned frequency = 100;
};

template<> struct mcu_traits<STM32F413ZGTx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F413;
    static constexpr gpio_conf_t gpio_conf = STM32F413_;
    static constexpr unsigned frequency = 100;
};

template<> struct mcu_traits<STM32F413ZHTx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F413;
    static constexpr gpio_conf_t gpio_conf = STM32F413_;
    static constexpr unsigned frequency = 100;
};

template<> struct mcu_traits<STM32F423CHUx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F413;
    static constexpr gpio_conf_t gpio_conf = STM32F413_;
    static constexpr unsigned frequency = 100;
};

template<> struct mcu_traits<STM32F423MHYx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F413;
    static constexpr gpio_conf_t gpio_conf = STM32F413_;
    static constexpr unsigned frequency = 100;
};

template<> struct mcu_traits<STM32F423RHTx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F413;
    static constexpr gpio_conf_t gpio_conf = STM32F413_;
    static constexpr unsigned frequency = 100;
};

template<> struct mcu_traits<STM32F423VHHx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F413;
    static constexpr gpio_conf_t gpio_conf = STM32F413_;
    static constexpr unsigned frequency = 100;
};

template<> struct mcu_traits<STM32F423VHTx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F413;
    static constexpr gpio_conf_t gpio_conf = STM32F413_;
    static constexpr unsigned frequency = 100;
};

template<> struct mcu_traits<STM32F423ZHJx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F413;
    static constexpr gpio_conf_t gpio_conf = STM32F413_;
    static constexpr unsigned frequency = 100;
};

template<> struct mcu_traits<STM32F423ZHTx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F413;
    static constexpr gpio_conf_t gpio_conf = STM32F413_;
    static constexpr unsigned frequency = 100;
};

template<> struct mcu_traits<STM32F427AGHx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F427;
    static constexpr gpio_conf_t gpio_conf = STM32F427_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F427AIHx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F427;
    static constexpr gpio_conf_t gpio_conf = STM32F427_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F427IGHx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F427;
    static constexpr gpio_conf_t gpio_conf = STM32F427_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F427IIHx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F427;
    static constexpr gpio_conf_t gpio_conf = STM32F427_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F427IGTx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F427;
    static constexpr gpio_conf_t gpio_conf = STM32F427_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F427IITx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F427;
    static constexpr gpio_conf_t gpio_conf = STM32F427_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F427VGTx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F427;
    static constexpr gpio_conf_t gpio_conf = STM32F427_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F427VITx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F427;
    static constexpr gpio_conf_t gpio_conf = STM32F427_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F427ZGTx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F427;
    static constexpr gpio_conf_t gpio_conf = STM32F427_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F427ZITx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F427;
    static constexpr gpio_conf_t gpio_conf = STM32F427_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F437AIHx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F427;
    static constexpr gpio_conf_t gpio_conf = STM32F427_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F437IGHx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F427;
    static constexpr gpio_conf_t gpio_conf = STM32F427_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F437IIHx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F427;
    static constexpr gpio_conf_t gpio_conf = STM32F427_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F437IGTx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F427;
    static constexpr gpio_conf_t gpio_conf = STM32F427_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F437IITx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F427;
    static constexpr gpio_conf_t gpio_conf = STM32F427_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F437VGTx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F427;
    static constexpr gpio_conf_t gpio_conf = STM32F427_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F437VITx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F427;
    static constexpr gpio_conf_t gpio_conf = STM32F427_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F437ZGTx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F427;
    static constexpr gpio_conf_t gpio_conf = STM32F427_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F437ZITx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F427;
    static constexpr gpio_conf_t gpio_conf = STM32F427_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F429AGHx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F429AIHx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F429BETx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F429BGTx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F429BITx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F429IETx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F429IGTx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F429IEHx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F429IGHx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F429IIHx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F429IITx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F429NEHx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F429NGHx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F429NIHx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F429VETx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F429VGTx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F429VITx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F429ZETx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F429ZGTx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F429ZGYx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F429ZITx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F429ZIYx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F439AIHx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F439BGTx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F439BITx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F439IGHx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F439IIHx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F439IGTx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F439IITx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F439NGHx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F439NIHx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F439VGTx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F439VITx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F439ZGTx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F439ZITx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F439ZGYx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F439ZIYx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F429;
    static constexpr gpio_conf_t gpio_conf = STM32F427_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F446MCYx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F446;
    static constexpr gpio_conf_t gpio_conf = STM32F446_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F446MEYx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F446;
    static constexpr gpio_conf_t gpio_conf = STM32F446_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F446RCTx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F446;
    static constexpr gpio_conf_t gpio_conf = STM32F446_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F446RETx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F446;
    static constexpr gpio_conf_t gpio_conf = STM32F446_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F446VCTx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F446;
    static constexpr gpio_conf_t gpio_conf = STM32F446_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F446VETx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F446;
    static constexpr gpio_conf_t gpio_conf = STM32F446_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F446ZCHx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F446;
    static constexpr gpio_conf_t gpio_conf = STM32F446_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F446ZEHx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F446;
    static constexpr gpio_conf_t gpio_conf = STM32F446_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F446ZCJx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F446;
    static constexpr gpio_conf_t gpio_conf = STM32F446_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F446ZEJx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F446;
    static constexpr gpio_conf_t gpio_conf = STM32F446_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F446ZCTx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F446;
    static constexpr gpio_conf_t gpio_conf = STM32F446_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F446ZETx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F446;
    static constexpr gpio_conf_t gpio_conf = STM32F446_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F469AEHx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F469AGHx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F469AIHx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F469AEYx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F469AGYx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F469AIYx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F469BETx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F469BGTx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F469BITx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F469IETx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F469IGTx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F469IEHx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F469IGHx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F469IIHx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F469IITx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F469NEHx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F469NGHx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F469NIHx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F469VETx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F469VGTx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F469VITx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F469ZETx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F469ZGTx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F469ZITx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F479AGHx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F479AIHx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F479AGYx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F479AIYx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F479BGTx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F479BITx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F479IGHx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F479IIHx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F479IGTx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F479IITx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F479NGHx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F479NIHx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F479VGTx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F479VITx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F479ZGTx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469_;
    static constexpr unsigned frequency = 180;
};

template<> struct mcu_traits<STM32F479ZITx>
{
    static constexpr family_t family = STM32F4;
    static constexpr svd_t svd = STM32F469;
    static constexpr gpio_conf_t gpio_conf = STM32F469_;
    static constexpr unsigned frequency = 180;
};

// Set target from command-line -DMCU= option
static constexpr mcu_t target = MCU;

