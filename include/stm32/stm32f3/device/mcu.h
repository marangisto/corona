#pragma once

////
//
//      STM32F3 MCU family
//
///

enum mcu_t
    { STM32F301C6Tx
    , STM32F301C8Tx
    , STM32F301C8Yx
    , STM32F301K6Tx
    , STM32F301K8Tx
    , STM32F301K6Ux
    , STM32F301K8Ux
    , STM32F301R6Tx
    , STM32F301R8Tx
    , STM32F302C6Tx
    , STM32F302C8Tx
    , STM32F302CBTx
    , STM32F302CCTx
    , STM32F302C8Yx
    , STM32F302K6Ux
    , STM32F302K8Ux
    , STM32F302R6Tx
    , STM32F302R8Tx
    , STM32F302RBTx
    , STM32F302RCTx
    , STM32F302RDTx
    , STM32F302RETx
    , STM32F302VBTx
    , STM32F302VCTx
    , STM32F302VDHx
    , STM32F302VEHx
    , STM32F302VDTx
    , STM32F302VETx
    , STM32F302VCYx
    , STM32F302ZDTx
    , STM32F302ZETx
    , STM32F303C6Tx
    , STM32F303C8Tx
    , STM32F303CBTx
    , STM32F303CCTx
    , STM32F303C8Yx
    , STM32F303K6Tx
    , STM32F303K8Tx
    , STM32F303R6Tx
    , STM32F303R8Tx
    , STM32F303RBTx
    , STM32F303RCTx
    , STM32F303RDTx
    , STM32F303RETx
    , STM32F303VBTx
    , STM32F303VCTx
    , STM32F303VDHx
    , STM32F303VEHx
    , STM32F303VDTx
    , STM32F303VETx
    , STM32F303VCYx
    , STM32F303VEYx
    , STM32F303ZDTx
    , STM32F303ZETx
    , STM32F334C4Tx
    , STM32F334C6Tx
    , STM32F334C8Tx
    , STM32F334C8Yx
    , STM32F334K4Tx
    , STM32F334K6Tx
    , STM32F334K8Tx
    , STM32F334K4Ux
    , STM32F334K6Ux
    , STM32F334K8Ux
    , STM32F334R6Tx
    , STM32F334R8Tx
    , STM32F373C8Tx
    , STM32F373CBTx
    , STM32F373CCTx
    , STM32F373R8Tx
    , STM32F373RBTx
    , STM32F373RCTx
    , STM32F373V8Hx
    , STM32F373VBHx
    , STM32F373VCHx
    , STM32F373V8Tx
    , STM32F373VBTx
    , STM32F373VCTx
    , STM32F318C8Tx
    , STM32F318C8Yx
    , STM32F318K8Ux
    , STM32F328C8Tx
    , STM32F358CCTx
    , STM32F358RCTx
    , STM32F358VCTx
    , STM32F378CCTx
    , STM32F378RCTx
    , STM32F378RCYx
    , STM32F378VCHx
    , STM32F378VCTx
    , STM32F398VETx
    };

enum svd_t
    { STM32F301 = 0x1
    , STM32F302 = 0x2
    , STM32F303 = 0x4
    , STM32F373 = 0x8
    , STM32F3x4 = 0x10
    , STM32F3x8 = 0x20
    };

enum gpio_conf_t
    { STM32F302_ = 0x1
    , STM32F303E = 0x2
    , STM32F303_ = 0x4
    , STM32F333 = 0x8
    , STM32F373_ = 0x10
    };

enum dma_resource_t
    {
    };

enum periph_t
    { ADC1
    , ADC2
    , ADC3
    , ADC4
    , ADC1_2
    , ADC3_4
    , ADC_COMMON
    , CAN
    , CRC
    , DAC1
    , DAC2
    , DBGMCU
    , DMA1
    , DMA2
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
    , HDMI_CEC
    , HRTIM_COMMON
    , HRTIM_MASTER
    , HRTIM_TIMA
    , HRTIM_TIMB
    , HRTIM_TIMC
    , HRTIM_TIMD
    , HRTIM_TIME
    , I2C1
    , I2C2
    , I2C3
    , I2S2EXT
    , I2S3EXT
    , IWDG
    , MPU
    , NVIC
    , NVIC_STIR
    , PWR
    , RCC
    , RTC
    , SCB
    , SCB_ACTRL
    , SDADC1
    , SDADC2
    , SDADC3
    , SPI1
    , SPI2
    , SPI3
    , SPI4
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
    , TIM12
    , TIM13
    , TIM14
    , TIM15
    , TIM16
    , TIM17
    , TIM18
    , TIM19
    , TIM20
    , TSC
    , UART4
    , UART5
    , USART1
    , USART2
    , USART3
    , USB
    , USB_FS
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

template<> struct mcu_traits<STM32F301C6Tx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F301;
    static constexpr gpio_conf_t gpio_conf = STM32F302_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F301C8Tx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F301;
    static constexpr gpio_conf_t gpio_conf = STM32F302_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F301C8Yx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F301;
    static constexpr gpio_conf_t gpio_conf = STM32F302_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F301K6Tx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F301;
    static constexpr gpio_conf_t gpio_conf = STM32F302_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F301K8Tx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F301;
    static constexpr gpio_conf_t gpio_conf = STM32F302_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F301K6Ux>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F301;
    static constexpr gpio_conf_t gpio_conf = STM32F302_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F301K8Ux>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F301;
    static constexpr gpio_conf_t gpio_conf = STM32F302_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F301R6Tx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F301;
    static constexpr gpio_conf_t gpio_conf = STM32F302_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F301R8Tx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F301;
    static constexpr gpio_conf_t gpio_conf = STM32F302_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F302C6Tx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F302;
    static constexpr gpio_conf_t gpio_conf = STM32F302_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F302C8Tx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F302;
    static constexpr gpio_conf_t gpio_conf = STM32F302_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F302CBTx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F302;
    static constexpr gpio_conf_t gpio_conf = STM32F303_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F302CCTx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F302;
    static constexpr gpio_conf_t gpio_conf = STM32F303_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F302C8Yx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F302;
    static constexpr gpio_conf_t gpio_conf = STM32F302_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F302K6Ux>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F302;
    static constexpr gpio_conf_t gpio_conf = STM32F302_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F302K8Ux>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F302;
    static constexpr gpio_conf_t gpio_conf = STM32F302_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F302R6Tx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F302;
    static constexpr gpio_conf_t gpio_conf = STM32F302_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F302R8Tx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F302;
    static constexpr gpio_conf_t gpio_conf = STM32F302_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F302RBTx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F302;
    static constexpr gpio_conf_t gpio_conf = STM32F303_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F302RCTx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F302;
    static constexpr gpio_conf_t gpio_conf = STM32F303_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F302RDTx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F302;
    static constexpr gpio_conf_t gpio_conf = STM32F303E;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F302RETx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F302;
    static constexpr gpio_conf_t gpio_conf = STM32F303E;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F302VBTx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F302;
    static constexpr gpio_conf_t gpio_conf = STM32F303_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F302VCTx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F302;
    static constexpr gpio_conf_t gpio_conf = STM32F303_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F302VDHx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F302;
    static constexpr gpio_conf_t gpio_conf = STM32F303E;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F302VEHx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F302;
    static constexpr gpio_conf_t gpio_conf = STM32F303E;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F302VDTx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F302;
    static constexpr gpio_conf_t gpio_conf = STM32F303E;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F302VETx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F302;
    static constexpr gpio_conf_t gpio_conf = STM32F303E;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F302VCYx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F302;
    static constexpr gpio_conf_t gpio_conf = STM32F303_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F302ZDTx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F302;
    static constexpr gpio_conf_t gpio_conf = STM32F303E;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F302ZETx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F302;
    static constexpr gpio_conf_t gpio_conf = STM32F303E;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F303C6Tx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F303;
    static constexpr gpio_conf_t gpio_conf = STM32F333;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F303C8Tx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F303;
    static constexpr gpio_conf_t gpio_conf = STM32F333;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F303CBTx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F303;
    static constexpr gpio_conf_t gpio_conf = STM32F303_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F303CCTx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F303;
    static constexpr gpio_conf_t gpio_conf = STM32F303_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F303C8Yx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F303;
    static constexpr gpio_conf_t gpio_conf = STM32F333;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F303K6Tx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F303;
    static constexpr gpio_conf_t gpio_conf = STM32F333;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F303K8Tx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F303;
    static constexpr gpio_conf_t gpio_conf = STM32F333;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F303R6Tx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F303;
    static constexpr gpio_conf_t gpio_conf = STM32F333;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F303R8Tx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F303;
    static constexpr gpio_conf_t gpio_conf = STM32F333;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F303RBTx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F303;
    static constexpr gpio_conf_t gpio_conf = STM32F303_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F303RCTx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F303;
    static constexpr gpio_conf_t gpio_conf = STM32F303_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F303RDTx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F303;
    static constexpr gpio_conf_t gpio_conf = STM32F303E;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F303RETx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F303;
    static constexpr gpio_conf_t gpio_conf = STM32F303E;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F303VBTx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F303;
    static constexpr gpio_conf_t gpio_conf = STM32F303_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F303VCTx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F303;
    static constexpr gpio_conf_t gpio_conf = STM32F303_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F303VDHx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F303;
    static constexpr gpio_conf_t gpio_conf = STM32F303E;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F303VEHx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F303;
    static constexpr gpio_conf_t gpio_conf = STM32F303E;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F303VDTx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F303;
    static constexpr gpio_conf_t gpio_conf = STM32F303E;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F303VETx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F303;
    static constexpr gpio_conf_t gpio_conf = STM32F303E;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F303VCYx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F303;
    static constexpr gpio_conf_t gpio_conf = STM32F303_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F303VEYx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F303;
    static constexpr gpio_conf_t gpio_conf = STM32F303E;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F303ZDTx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F303;
    static constexpr gpio_conf_t gpio_conf = STM32F303E;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F303ZETx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F303;
    static constexpr gpio_conf_t gpio_conf = STM32F303E;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F334C4Tx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F3x4;
    static constexpr gpio_conf_t gpio_conf = STM32F333;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F334C6Tx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F3x4;
    static constexpr gpio_conf_t gpio_conf = STM32F333;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F334C8Tx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F3x4;
    static constexpr gpio_conf_t gpio_conf = STM32F333;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F334C8Yx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F3x4;
    static constexpr gpio_conf_t gpio_conf = STM32F333;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F334K4Tx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F3x4;
    static constexpr gpio_conf_t gpio_conf = STM32F333;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F334K6Tx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F3x4;
    static constexpr gpio_conf_t gpio_conf = STM32F333;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F334K8Tx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F3x4;
    static constexpr gpio_conf_t gpio_conf = STM32F333;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F334K4Ux>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F3x4;
    static constexpr gpio_conf_t gpio_conf = STM32F333;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F334K6Ux>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F3x4;
    static constexpr gpio_conf_t gpio_conf = STM32F333;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F334K8Ux>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F3x4;
    static constexpr gpio_conf_t gpio_conf = STM32F333;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F334R6Tx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F3x4;
    static constexpr gpio_conf_t gpio_conf = STM32F333;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F334R8Tx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F3x4;
    static constexpr gpio_conf_t gpio_conf = STM32F333;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F373C8Tx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F373;
    static constexpr gpio_conf_t gpio_conf = STM32F373_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F373CBTx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F373;
    static constexpr gpio_conf_t gpio_conf = STM32F373_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F373CCTx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F373;
    static constexpr gpio_conf_t gpio_conf = STM32F373_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F373R8Tx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F373;
    static constexpr gpio_conf_t gpio_conf = STM32F373_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F373RBTx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F373;
    static constexpr gpio_conf_t gpio_conf = STM32F373_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F373RCTx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F373;
    static constexpr gpio_conf_t gpio_conf = STM32F373_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F373V8Hx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F373;
    static constexpr gpio_conf_t gpio_conf = STM32F373_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F373VBHx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F373;
    static constexpr gpio_conf_t gpio_conf = STM32F373_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F373VCHx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F373;
    static constexpr gpio_conf_t gpio_conf = STM32F373_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F373V8Tx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F373;
    static constexpr gpio_conf_t gpio_conf = STM32F373_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F373VBTx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F373;
    static constexpr gpio_conf_t gpio_conf = STM32F373_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F373VCTx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F373;
    static constexpr gpio_conf_t gpio_conf = STM32F373_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F318C8Tx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F3x8;
    static constexpr gpio_conf_t gpio_conf = STM32F302_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F318C8Yx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F3x8;
    static constexpr gpio_conf_t gpio_conf = STM32F302_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F318K8Ux>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F3x8;
    static constexpr gpio_conf_t gpio_conf = STM32F302_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F328C8Tx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F3x8;
    static constexpr gpio_conf_t gpio_conf = STM32F333;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F358CCTx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F3x8;
    static constexpr gpio_conf_t gpio_conf = STM32F303_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F358RCTx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F3x8;
    static constexpr gpio_conf_t gpio_conf = STM32F303_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F358VCTx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F3x8;
    static constexpr gpio_conf_t gpio_conf = STM32F303_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F378CCTx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F3x8;
    static constexpr gpio_conf_t gpio_conf = STM32F373_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F378RCTx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F3x8;
    static constexpr gpio_conf_t gpio_conf = STM32F373_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F378RCYx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F3x8;
    static constexpr gpio_conf_t gpio_conf = STM32F373_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F378VCHx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F3x8;
    static constexpr gpio_conf_t gpio_conf = STM32F373_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F378VCTx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F3x8;
    static constexpr gpio_conf_t gpio_conf = STM32F373_;
    static constexpr unsigned frequency = 72;
};

template<> struct mcu_traits<STM32F398VETx>
{
    static constexpr family_t family = STM32F3;
    static constexpr svd_t svd = STM32F3x8;
    static constexpr gpio_conf_t gpio_conf = STM32F303E;
    static constexpr unsigned frequency = 72;
};

// Set target from command-line -DMCU= option
static constexpr mcu_t target = MCU;

