#pragma once

////
//
//      STM32F2 MCU family
//
///

enum mcu_t
    { STM32F205RBTx
    , STM32F205RCTx
    , STM32F205RETx
    , STM32F205RFTx
    , STM32F205RGTx
    , STM32F205REYx
    , STM32F205RGYx
    , STM32F205RGEx
    , STM32F205VBTx
    , STM32F205VCTx
    , STM32F205VETx
    , STM32F205VFTx
    , STM32F205VGTx
    , STM32F205ZCTx
    , STM32F205ZETx
    , STM32F205ZFTx
    , STM32F205ZGTx
    , STM32F215RETx
    , STM32F215RGTx
    , STM32F215VETx
    , STM32F215VGTx
    , STM32F215ZETx
    , STM32F215ZGTx
    , STM32F207ICHx
    , STM32F207IEHx
    , STM32F207IFHx
    , STM32F207IGHx
    , STM32F207ICTx
    , STM32F207IETx
    , STM32F207IFTx
    , STM32F207IGTx
    , STM32F207VCTx
    , STM32F207VETx
    , STM32F207VFTx
    , STM32F207VGTx
    , STM32F207ZCTx
    , STM32F207ZETx
    , STM32F207ZFTx
    , STM32F207ZGTx
    , STM32F217IEHx
    , STM32F217IGHx
    , STM32F217IETx
    , STM32F217IGTx
    , STM32F217VETx
    , STM32F217VGTx
    , STM32F217ZETx
    , STM32F217ZGTx
    };

enum svd_t
    { STM32F215 = 0x1
    , STM32F217 = 0x2
    };

enum gpio_conf_t
    { STM32F217_ = 0x1
    };

enum periph_t
    { ADC1
    , ADC2
    , ADC3
    , ADC_COMMON
    , CAN1
    , CAN2
    , CRC
    , CRYP
    , DAC1
    , DBG
    , DCMI
    , DMA1
    , DMA2
    , ETHERNET_DMA
    , ETHERNET_MAC
    , ETHERNET_MMC
    , ETHERNET_PTP
    , EXTI
    , FLASH
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
    , HASH
    , I2C1
    , I2C2
    , I2C3
    , IWDG
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
    , RCC
    , RNG
    , RTC
    , SCB
    , SCB_ACTRL
    , SDIO
    , SPI1
    , SPI2
    , SPI3
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

template<> struct mcu_traits<STM32F205RBTx>
{
    static constexpr family_t family = STM32F2;
    static constexpr svd_t svd = STM32F215;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32F205RCTx>
{
    static constexpr family_t family = STM32F2;
    static constexpr svd_t svd = STM32F215;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32F205RETx>
{
    static constexpr family_t family = STM32F2;
    static constexpr svd_t svd = STM32F215;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32F205RFTx>
{
    static constexpr family_t family = STM32F2;
    static constexpr svd_t svd = STM32F215;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32F205RGTx>
{
    static constexpr family_t family = STM32F2;
    static constexpr svd_t svd = STM32F215;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32F205REYx>
{
    static constexpr family_t family = STM32F2;
    static constexpr svd_t svd = STM32F215;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32F205RGYx>
{
    static constexpr family_t family = STM32F2;
    static constexpr svd_t svd = STM32F215;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32F205RGEx>
{
    static constexpr family_t family = STM32F2;
    static constexpr svd_t svd = STM32F215;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32F205VBTx>
{
    static constexpr family_t family = STM32F2;
    static constexpr svd_t svd = STM32F215;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32F205VCTx>
{
    static constexpr family_t family = STM32F2;
    static constexpr svd_t svd = STM32F215;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32F205VETx>
{
    static constexpr family_t family = STM32F2;
    static constexpr svd_t svd = STM32F215;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32F205VFTx>
{
    static constexpr family_t family = STM32F2;
    static constexpr svd_t svd = STM32F215;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32F205VGTx>
{
    static constexpr family_t family = STM32F2;
    static constexpr svd_t svd = STM32F215;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32F205ZCTx>
{
    static constexpr family_t family = STM32F2;
    static constexpr svd_t svd = STM32F215;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32F205ZETx>
{
    static constexpr family_t family = STM32F2;
    static constexpr svd_t svd = STM32F215;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32F205ZFTx>
{
    static constexpr family_t family = STM32F2;
    static constexpr svd_t svd = STM32F215;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32F205ZGTx>
{
    static constexpr family_t family = STM32F2;
    static constexpr svd_t svd = STM32F215;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32F215RETx>
{
    static constexpr family_t family = STM32F2;
    static constexpr svd_t svd = STM32F215;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32F215RGTx>
{
    static constexpr family_t family = STM32F2;
    static constexpr svd_t svd = STM32F215;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32F215VETx>
{
    static constexpr family_t family = STM32F2;
    static constexpr svd_t svd = STM32F215;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32F215VGTx>
{
    static constexpr family_t family = STM32F2;
    static constexpr svd_t svd = STM32F215;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32F215ZETx>
{
    static constexpr family_t family = STM32F2;
    static constexpr svd_t svd = STM32F215;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32F215ZGTx>
{
    static constexpr family_t family = STM32F2;
    static constexpr svd_t svd = STM32F215;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32F207ICHx>
{
    static constexpr family_t family = STM32F2;
    static constexpr svd_t svd = STM32F217;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32F207IEHx>
{
    static constexpr family_t family = STM32F2;
    static constexpr svd_t svd = STM32F217;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32F207IFHx>
{
    static constexpr family_t family = STM32F2;
    static constexpr svd_t svd = STM32F217;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32F207IGHx>
{
    static constexpr family_t family = STM32F2;
    static constexpr svd_t svd = STM32F217;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32F207ICTx>
{
    static constexpr family_t family = STM32F2;
    static constexpr svd_t svd = STM32F217;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32F207IETx>
{
    static constexpr family_t family = STM32F2;
    static constexpr svd_t svd = STM32F217;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32F207IFTx>
{
    static constexpr family_t family = STM32F2;
    static constexpr svd_t svd = STM32F217;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32F207IGTx>
{
    static constexpr family_t family = STM32F2;
    static constexpr svd_t svd = STM32F217;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32F207VCTx>
{
    static constexpr family_t family = STM32F2;
    static constexpr svd_t svd = STM32F217;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32F207VETx>
{
    static constexpr family_t family = STM32F2;
    static constexpr svd_t svd = STM32F217;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32F207VFTx>
{
    static constexpr family_t family = STM32F2;
    static constexpr svd_t svd = STM32F217;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32F207VGTx>
{
    static constexpr family_t family = STM32F2;
    static constexpr svd_t svd = STM32F217;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32F207ZCTx>
{
    static constexpr family_t family = STM32F2;
    static constexpr svd_t svd = STM32F217;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32F207ZETx>
{
    static constexpr family_t family = STM32F2;
    static constexpr svd_t svd = STM32F217;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32F207ZFTx>
{
    static constexpr family_t family = STM32F2;
    static constexpr svd_t svd = STM32F217;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32F207ZGTx>
{
    static constexpr family_t family = STM32F2;
    static constexpr svd_t svd = STM32F217;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32F217IEHx>
{
    static constexpr family_t family = STM32F2;
    static constexpr svd_t svd = STM32F217;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32F217IGHx>
{
    static constexpr family_t family = STM32F2;
    static constexpr svd_t svd = STM32F217;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32F217IETx>
{
    static constexpr family_t family = STM32F2;
    static constexpr svd_t svd = STM32F217;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32F217IGTx>
{
    static constexpr family_t family = STM32F2;
    static constexpr svd_t svd = STM32F217;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32F217VETx>
{
    static constexpr family_t family = STM32F2;
    static constexpr svd_t svd = STM32F217;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32F217VGTx>
{
    static constexpr family_t family = STM32F2;
    static constexpr svd_t svd = STM32F217;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32F217ZETx>
{
    static constexpr family_t family = STM32F2;
    static constexpr svd_t svd = STM32F217;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
    static constexpr unsigned frequency = 120;
};

template<> struct mcu_traits<STM32F217ZGTx>
{
    static constexpr family_t family = STM32F2;
    static constexpr svd_t svd = STM32F217;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
    static constexpr unsigned frequency = 120;
};

// Set target from command-line -DMCU= option
static constexpr mcu_t target = MCU;

