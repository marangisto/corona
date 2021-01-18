#pragma once

////
//
//      STM32F1 MCU family
//
///

enum mcu_t
    { STM32F100C4Tx
    , STM32F100C6Tx
    , STM32F100C8Tx
    , STM32F100CBTx
    , STM32F100R4Hx
    , STM32F100R6Hx
    , STM32F100R4Tx
    , STM32F100R6Tx
    , STM32F100R8Hx
    , STM32F100RBHx
    , STM32F100R8Tx
    , STM32F100RBTx
    , STM32F100RCTx
    , STM32F100RDTx
    , STM32F100RETx
    , STM32F100V8Tx
    , STM32F100VBTx
    , STM32F100VCTx
    , STM32F100VDTx
    , STM32F100VETx
    , STM32F100ZCTx
    , STM32F100ZDTx
    , STM32F100ZETx
    , STM32F101C4Tx
    , STM32F101C6Tx
    , STM32F101C8Tx
    , STM32F101CBTx
    , STM32F101C8Ux
    , STM32F101CBUx
    , STM32F101R4Tx
    , STM32F101R6Tx
    , STM32F101R8Tx
    , STM32F101RBTx
    , STM32F101RCTx
    , STM32F101RDTx
    , STM32F101RETx
    , STM32F101RFTx
    , STM32F101RGTx
    , STM32F101RBHx
    , STM32F101T4Ux
    , STM32F101T6Ux
    , STM32F101T8Ux
    , STM32F101TBUx
    , STM32F101V8Tx
    , STM32F101VBTx
    , STM32F101VCTx
    , STM32F101VDTx
    , STM32F101VETx
    , STM32F101VFTx
    , STM32F101VGTx
    , STM32F101ZCTx
    , STM32F101ZDTx
    , STM32F101ZETx
    , STM32F101ZFTx
    , STM32F101ZGTx
    , STM32F102C4Tx
    , STM32F102C6Tx
    , STM32F102C8Tx
    , STM32F102CBTx
    , STM32F102R4Tx
    , STM32F102R6Tx
    , STM32F102R8Tx
    , STM32F102RBTx
    , STM32F103C4Tx
    , STM32F103C6Tx
    , STM32F103C8Tx
    , STM32F103CBTx
    , STM32F103C6Ux
    , STM32F103CBUx
    , STM32F103R4Hx
    , STM32F103R6Hx
    , STM32F103R4Tx
    , STM32F103R6Tx
    , STM32F103R8Hx
    , STM32F103RBHx
    , STM32F103R8Tx
    , STM32F103RBTx
    , STM32F103RCTx
    , STM32F103RDTx
    , STM32F103RETx
    , STM32F103RCYx
    , STM32F103RDYx
    , STM32F103REYx
    , STM32F103RFTx
    , STM32F103RGTx
    , STM32F103T4Ux
    , STM32F103T6Ux
    , STM32F103T8Ux
    , STM32F103TBUx
    , STM32F103V8Hx
    , STM32F103VBHx
    , STM32F103V8Tx
    , STM32F103VBTx
    , STM32F103VCHx
    , STM32F103VDHx
    , STM32F103VEHx
    , STM32F103VCTx
    , STM32F103VDTx
    , STM32F103VETx
    , STM32F103VFTx
    , STM32F103VGTx
    , STM32F103VBIx
    , STM32F103ZCHx
    , STM32F103ZDHx
    , STM32F103ZEHx
    , STM32F103ZCTx
    , STM32F103ZDTx
    , STM32F103ZETx
    , STM32F103ZFHx
    , STM32F103ZGHx
    , STM32F103ZFTx
    , STM32F103ZGTx
    , STM32F105R8Tx
    , STM32F105RBTx
    , STM32F105RCTx
    , STM32F105V8Hx
    , STM32F105VBHx
    , STM32F105V8Tx
    , STM32F105VBTx
    , STM32F105VCTx
    , STM32F107RBTx
    , STM32F107RCTx
    , STM32F107VBTx
    , STM32F107VCTx
    , STM32F107VCHx
    };

enum svd_t
    { STM32F100 = 0x1
    , STM32F101 = 0x2
    , STM32F102 = 0x4
    , STM32F103 = 0x8
    , STM32F107 = 0x10
    };

enum gpio_conf_t
    { STM32F100x8 = 0x1
    , STM32F100xC = 0x2
    , STM32F103x4 = 0x4
    , STM32F103x8 = 0x8
    , STM32F103xC = 0x10
    , STM32F103xF = 0x20
    , STM32F107_ = 0x40
    };

enum dma_resource_t
    {
    };

enum periph_t
    { ADC1
    , ADC2
    , ADC3
    , AFIO
    , BKP
    , CAN1
    , CAN2
    , CRC
    , DAC1
    , DBG
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
    , HDMI_CEC
    , I2C1
    , I2C2
    , IWDG
    , MPU
    , NVIC
    , NVIC_STIR
    , OTG_FS_DEVICE
    , OTG_FS_GLOBAL
    , OTG_FS_HOST
    , OTG_FS_PWRCLK
    , PWR
    , RCC
    , RTC
    , SCB
    , SCB_ACTRL
    , SDIO
    , SPI1
    , SPI2
    , SPI3
    , STK
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
    , TIM15
    , TIM16
    , TIM17
    , UART4
    , UART5
    , USART1
    , USART2
    , USART3
    , USB
    , USB_OTG_DEVICE
    , USB_OTG_GLOBAL
    , USB_OTG_HOST
    , USB_OTG_PWRCLK
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

template<> struct mcu_traits<STM32F100C4Tx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F100;
    static constexpr gpio_conf_t gpio_conf = STM32F100x8;
    static constexpr unsigned frequency = 24;
};

template<> struct mcu_traits<STM32F100C6Tx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F100;
    static constexpr gpio_conf_t gpio_conf = STM32F100x8;
    static constexpr unsigned frequency = 24;
};

template<> struct mcu_traits<STM32F100C8Tx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F100;
    static constexpr gpio_conf_t gpio_conf = STM32F100x8;
    static constexpr unsigned frequency = 24;
};

template<> struct mcu_traits<STM32F100CBTx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F100;
    static constexpr gpio_conf_t gpio_conf = STM32F100x8;
    static constexpr unsigned frequency = 24;
};

template<> struct mcu_traits<STM32F100R4Hx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F100;
    static constexpr gpio_conf_t gpio_conf = STM32F100x8;
    static constexpr unsigned frequency = 24;
};

template<> struct mcu_traits<STM32F100R6Hx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F100;
    static constexpr gpio_conf_t gpio_conf = STM32F100x8;
    static constexpr unsigned frequency = 24;
};

template<> struct mcu_traits<STM32F100R4Tx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F100;
    static constexpr gpio_conf_t gpio_conf = STM32F100x8;
    static constexpr unsigned frequency = 24;
};

template<> struct mcu_traits<STM32F100R6Tx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F100;
    static constexpr gpio_conf_t gpio_conf = STM32F100x8;
    static constexpr unsigned frequency = 24;
};

template<> struct mcu_traits<STM32F100R8Hx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F100;
    static constexpr gpio_conf_t gpio_conf = STM32F100x8;
    static constexpr unsigned frequency = 24;
};

template<> struct mcu_traits<STM32F100RBHx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F100;
    static constexpr gpio_conf_t gpio_conf = STM32F100x8;
    static constexpr unsigned frequency = 24;
};

template<> struct mcu_traits<STM32F100R8Tx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F100;
    static constexpr gpio_conf_t gpio_conf = STM32F100x8;
    static constexpr unsigned frequency = 24;
};

template<> struct mcu_traits<STM32F100RBTx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F100;
    static constexpr gpio_conf_t gpio_conf = STM32F100x8;
    static constexpr unsigned frequency = 24;
};

template<> struct mcu_traits<STM32F100RCTx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F100;
    static constexpr gpio_conf_t gpio_conf = STM32F100xC;
    static constexpr unsigned frequency = 24;
};

template<> struct mcu_traits<STM32F100RDTx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F100;
    static constexpr gpio_conf_t gpio_conf = STM32F100xC;
    static constexpr unsigned frequency = 24;
};

template<> struct mcu_traits<STM32F100RETx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F100;
    static constexpr gpio_conf_t gpio_conf = STM32F100xC;
    static constexpr unsigned frequency = 24;
};

template<> struct mcu_traits<STM32F100V8Tx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F100;
    static constexpr gpio_conf_t gpio_conf = STM32F100x8;
    static constexpr unsigned frequency = 24;
};

template<> struct mcu_traits<STM32F100VBTx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F100;
    static constexpr gpio_conf_t gpio_conf = STM32F100x8;
    static constexpr unsigned frequency = 24;
};

template<> struct mcu_traits<STM32F100VCTx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F100;
    static constexpr gpio_conf_t gpio_conf = STM32F100xC;
    static constexpr unsigned frequency = 24;
};

template<> struct mcu_traits<STM32F100VDTx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F100;
    static constexpr gpio_conf_t gpio_conf = STM32F100xC;
    static constexpr unsigned frequency = 24;
};

template<> struct mcu_traits<STM32F100VETx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F100;
    static constexpr gpio_conf_t gpio_conf = STM32F100xC;
    static constexpr unsigned frequency = 24;
};

template<> struct mcu_traits<STM32F100ZCTx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F100;
    static constexpr gpio_conf_t gpio_conf = STM32F100xC;
    static constexpr unsigned frequency = 24;
};

template<> struct mcu_traits<STM32F100ZDTx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F100;
    static constexpr gpio_conf_t gpio_conf = STM32F100xC;
    static constexpr unsigned frequency = 24;
};

template<> struct mcu_traits<STM32F100ZETx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F100;
    static constexpr gpio_conf_t gpio_conf = STM32F100xC;
    static constexpr unsigned frequency = 24;
};

template<> struct mcu_traits<STM32F101C4Tx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103x4;
    static constexpr unsigned frequency = 36;
};

template<> struct mcu_traits<STM32F101C6Tx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103x4;
    static constexpr unsigned frequency = 36;
};

template<> struct mcu_traits<STM32F101C8Tx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103x8;
    static constexpr unsigned frequency = 36;
};

template<> struct mcu_traits<STM32F101CBTx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103x8;
    static constexpr unsigned frequency = 36;
};

template<> struct mcu_traits<STM32F101C8Ux>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103x8;
    static constexpr unsigned frequency = 36;
};

template<> struct mcu_traits<STM32F101CBUx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103x8;
    static constexpr unsigned frequency = 36;
};

template<> struct mcu_traits<STM32F101R4Tx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103x4;
    static constexpr unsigned frequency = 36;
};

template<> struct mcu_traits<STM32F101R6Tx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103x4;
    static constexpr unsigned frequency = 36;
};

template<> struct mcu_traits<STM32F101R8Tx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103x8;
    static constexpr unsigned frequency = 36;
};

template<> struct mcu_traits<STM32F101RBTx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103x8;
    static constexpr unsigned frequency = 36;
};

template<> struct mcu_traits<STM32F101RCTx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103xC;
    static constexpr unsigned frequency = 36;
};

template<> struct mcu_traits<STM32F101RDTx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103xC;
    static constexpr unsigned frequency = 36;
};

template<> struct mcu_traits<STM32F101RETx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103xC;
    static constexpr unsigned frequency = 36;
};

template<> struct mcu_traits<STM32F101RFTx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103xF;
    static constexpr unsigned frequency = 36;
};

template<> struct mcu_traits<STM32F101RGTx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103xF;
    static constexpr unsigned frequency = 36;
};

template<> struct mcu_traits<STM32F101RBHx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103x8;
    static constexpr unsigned frequency = 36;
};

template<> struct mcu_traits<STM32F101T4Ux>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103x4;
    static constexpr unsigned frequency = 36;
};

template<> struct mcu_traits<STM32F101T6Ux>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103x4;
    static constexpr unsigned frequency = 36;
};

template<> struct mcu_traits<STM32F101T8Ux>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103x8;
    static constexpr unsigned frequency = 36;
};

template<> struct mcu_traits<STM32F101TBUx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103x8;
    static constexpr unsigned frequency = 36;
};

template<> struct mcu_traits<STM32F101V8Tx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103x8;
    static constexpr unsigned frequency = 36;
};

template<> struct mcu_traits<STM32F101VBTx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103x8;
    static constexpr unsigned frequency = 36;
};

template<> struct mcu_traits<STM32F101VCTx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103xC;
    static constexpr unsigned frequency = 36;
};

template<> struct mcu_traits<STM32F101VDTx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103xC;
    static constexpr unsigned frequency = 36;
};

template<> struct mcu_traits<STM32F101VETx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103xC;
    static constexpr unsigned frequency = 36;
};

template<> struct mcu_traits<STM32F101VFTx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103xF;
    static constexpr unsigned frequency = 36;
};

template<> struct mcu_traits<STM32F101VGTx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103xF;
    static constexpr unsigned frequency = 36;
};

template<> struct mcu_traits<STM32F101ZCTx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103xC;
    static constexpr unsigned frequency = 36;
};

template<> struct mcu_traits<STM32F101ZDTx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103xC;
    static constexpr unsigned frequency = 36;
};

template<> struct mcu_traits<STM32F101ZETx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103xC;
    static constexpr unsigned frequency = 36;
};

template<> struct mcu_traits<STM32F101ZFTx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103xF;
    static constexpr unsigned frequency = 36;
};

template<> struct mcu_traits<STM32F101ZGTx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103xF;
    static constexpr unsigned frequency = 36;
};

template<> struct mcu_traits<STM32F102C4Tx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F102;
    static constexpr gpio_conf_t gpio_conf = STM32F103x4;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F102C6Tx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F102;
    static constexpr gpio_conf_t gpio_conf = STM32F103x4;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F102C8Tx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F102;
    static constexpr gpio_conf_t gpio_conf = STM32F103x8;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F102CBTx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F102;
    static constexpr gpio_conf_t gpio_conf = STM32F103x8;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F102R4Tx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F102;
    static constexpr gpio_conf_t gpio_conf = STM32F103x4;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F102R6Tx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F102;
    static constexpr gpio_conf_t gpio_conf = STM32F103x4;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F102R8Tx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F102;
    static constexpr gpio_conf_t gpio_conf = STM32F103x8;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F102RBTx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F102;
    static constexpr gpio_conf_t gpio_conf = STM32F103x8;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F103C4Tx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103x4;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F103C6Tx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103x4;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F103C8Tx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103x8;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F103CBTx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103x8;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F103C6Ux>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103x4;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F103CBUx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103x8;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F103R4Hx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103x4;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F103R6Hx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103x4;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F103R4Tx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103x4;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F103R6Tx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103x4;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F103R8Hx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103x8;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F103RBHx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103x8;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F103R8Tx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103x8;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F103RBTx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103x8;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F103RCTx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103xC;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F103RDTx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103xC;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F103RETx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103xC;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F103RCYx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103xC;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F103RDYx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103xC;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F103REYx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103xC;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F103RFTx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103xF;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F103RGTx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103xF;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F103T4Ux>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103x4;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F103T6Ux>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103x4;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F103T8Ux>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103x8;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F103TBUx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103x8;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F103V8Hx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103x8;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F103VBHx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103x8;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F103V8Tx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103x8;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F103VBTx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103x8;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F103VCHx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103xC;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F103VDHx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103xC;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F103VEHx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103xC;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F103VCTx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103xC;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F103VDTx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103xC;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F103VETx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103xC;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F103VFTx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103xF;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F103VGTx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103xF;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F103VBIx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103x8;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F103ZCHx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103xC;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F103ZDHx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103xC;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F103ZEHx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103xC;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F103ZCTx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103xC;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F103ZDTx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103xC;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F103ZETx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103xC;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F103ZFHx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103xF;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F103ZGHx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103xF;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F103ZFTx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103xF;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F103ZGTx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103xF;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F105R8Tx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F107;
    static constexpr gpio_conf_t gpio_conf = STM32F107_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F105RBTx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F107;
    static constexpr gpio_conf_t gpio_conf = STM32F107_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F105RCTx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F107;
    static constexpr gpio_conf_t gpio_conf = STM32F107_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F105V8Hx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F107;
    static constexpr gpio_conf_t gpio_conf = STM32F107_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F105VBHx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F107;
    static constexpr gpio_conf_t gpio_conf = STM32F107_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F105V8Tx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F107;
    static constexpr gpio_conf_t gpio_conf = STM32F107_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F105VBTx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F107;
    static constexpr gpio_conf_t gpio_conf = STM32F107_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F105VCTx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F107;
    static constexpr gpio_conf_t gpio_conf = STM32F107_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F107RBTx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F107;
    static constexpr gpio_conf_t gpio_conf = STM32F107_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F107RCTx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F107;
    static constexpr gpio_conf_t gpio_conf = STM32F107_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F107VBTx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F107;
    static constexpr gpio_conf_t gpio_conf = STM32F107_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F107VCTx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F107;
    static constexpr gpio_conf_t gpio_conf = STM32F107_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F107VCHx>
{
    static constexpr family_t family = STM32F1;
    static constexpr svd_t svd = STM32F107;
    static constexpr gpio_conf_t gpio_conf = STM32F107_;
    static constexpr unsigned frequency = 72;
};

// Set target from command-line -DMCU= option
static constexpr mcu_t target = MCU;

