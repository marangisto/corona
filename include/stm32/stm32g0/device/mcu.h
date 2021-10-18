#pragma once

////
//
//      STM32G0 MCU family
//
///

enum mcu_t
    { STM32G030C6Tx
    , STM32G030C8Tx
    , STM32G030F6Px
    , STM32G030J6Mx
    , STM32G030K6Tx
    , STM32G030K8Tx
    , STM32G050C6Tx
    , STM32G050C8Tx
    , STM32G050F6Px
    , STM32G050K6Tx
    , STM32G050K8Tx
    , STM32G070CBTx
    , STM32G070KBTx
    , STM32G070RBTx
    , STM32G0B0CETx
    , STM32G0B0KETx
    , STM32G0B0RETx
    , STM32G0B0VETx
    , STM32G031C4Tx
    , STM32G031C6Tx
    , STM32G031C8Tx
    , STM32G031C4Ux
    , STM32G031C6Ux
    , STM32G031C8Ux
    , STM32G031F4Px
    , STM32G031F6Px
    , STM32G031F8Px
    , STM32G031G4Ux
    , STM32G031G6Ux
    , STM32G031G8Ux
    , STM32G031J4Mx
    , STM32G031J6Mx
    , STM32G031K4Tx
    , STM32G031K6Tx
    , STM32G031K8Tx
    , STM32G031K4Ux
    , STM32G031K6Ux
    , STM32G031K8Ux
    , STM32G031Y8Yx
    , STM32G041C6Tx
    , STM32G041C8Tx
    , STM32G041C6Ux
    , STM32G041C8Ux
    , STM32G041F6Px
    , STM32G041F8Px
    , STM32G041G6Ux
    , STM32G041G8Ux
    , STM32G041J6Mx
    , STM32G041K6Tx
    , STM32G041K8Tx
    , STM32G041K6Ux
    , STM32G041K8Ux
    , STM32G041Y8Yx
    , STM32G051C6Tx
    , STM32G051C8Tx
    , STM32G051C6Ux
    , STM32G051C8Ux
    , STM32G051F6Px
    , STM32G051F8Px
    , STM32G051F8Yx
    , STM32G051G6Ux
    , STM32G051G8Ux
    , STM32G051K6Tx
    , STM32G051K8Tx
    , STM32G051K6Ux
    , STM32G051K8Ux
    , STM32G061C6Tx
    , STM32G061C8Tx
    , STM32G061C6Ux
    , STM32G061C8Ux
    , STM32G061F6Px
    , STM32G061F8Px
    , STM32G061F8Yx
    , STM32G061G6Ux
    , STM32G061G8Ux
    , STM32G061K6Tx
    , STM32G061K8Tx
    , STM32G061K6Ux
    , STM32G061K8Ux
    , STM32G071C6Tx
    , STM32G071C8Tx
    , STM32G071CBTx
    , STM32G071C6Ux
    , STM32G071C8Ux
    , STM32G071CBUx
    , STM32G071EBYx
    , STM32G071G6Ux
    , STM32G071G8Ux
    , STM32G071GBUx
    , STM32G071G8UxN
    , STM32G071GBUxN
    , STM32G071K6Tx
    , STM32G071K8Tx
    , STM32G071KBTx
    , STM32G071K6Ux
    , STM32G071K8Ux
    , STM32G071KBUx
    , STM32G071K8TxN
    , STM32G071KBTxN
    , STM32G071K8UxN
    , STM32G071KBUxN
    , STM32G071R6Tx
    , STM32G071R8Tx
    , STM32G071RBTx
    , STM32G071RBIx
    , STM32G081CBTx
    , STM32G081CBUx
    , STM32G081EBYx
    , STM32G081GBUx
    , STM32G081GBUxN
    , STM32G081KBTx
    , STM32G081KBTxN
    , STM32G081KBUx
    , STM32G081KBUxN
    , STM32G081RBIx
    , STM32G081RBTx
    , STM32G0B1CBTx
    , STM32G0B1CCTx
    , STM32G0B1CETx
    , STM32G0B1CBTxN
    , STM32G0B1CCTxN
    , STM32G0B1CETxN
    , STM32G0B1CBUx
    , STM32G0B1CCUx
    , STM32G0B1CEUx
    , STM32G0B1CBUxN
    , STM32G0B1CCUxN
    , STM32G0B1CEUxN
    , STM32G0B1KBTx
    , STM32G0B1KCTx
    , STM32G0B1KETx
    , STM32G0B1KBTxN
    , STM32G0B1KCTxN
    , STM32G0B1KETxN
    , STM32G0B1KBUx
    , STM32G0B1KCUx
    , STM32G0B1KEUx
    , STM32G0B1KBUxN
    , STM32G0B1KCUxN
    , STM32G0B1KEUxN
    , STM32G0B1MBTx
    , STM32G0B1MCTx
    , STM32G0B1METx
    , STM32G0B1NEYx
    , STM32G0B1RBIxN
    , STM32G0B1RCIxN
    , STM32G0B1REIxN
    , STM32G0B1RBTx
    , STM32G0B1RCTx
    , STM32G0B1RETx
    , STM32G0B1RBTxN
    , STM32G0B1RCTxN
    , STM32G0B1RETxN
    , STM32G0B1VBIx
    , STM32G0B1VCIx
    , STM32G0B1VEIx
    , STM32G0B1VBTx
    , STM32G0B1VCTx
    , STM32G0B1VETx
    , STM32G0C1CCTx
    , STM32G0C1CETx
    , STM32G0C1CCTxN
    , STM32G0C1CETxN
    , STM32G0C1CCUx
    , STM32G0C1CEUx
    , STM32G0C1CCUxN
    , STM32G0C1CEUxN
    , STM32G0C1KCTx
    , STM32G0C1KETx
    , STM32G0C1KCTxN
    , STM32G0C1KETxN
    , STM32G0C1KCUx
    , STM32G0C1KEUx
    , STM32G0C1KCUxN
    , STM32G0C1KEUxN
    , STM32G0C1MCTx
    , STM32G0C1METx
    , STM32G0C1NEYx
    , STM32G0C1RCIxN
    , STM32G0C1REIxN
    , STM32G0C1RCTx
    , STM32G0C1RETx
    , STM32G0C1RCTxN
    , STM32G0C1RETxN
    , STM32G0C1VCIx
    , STM32G0C1VEIx
    , STM32G0C1VCTx
    , STM32G0C1VETx
    };

enum svd_t
    { STM32G030 = 0x1
    , STM32G031 = 0x2
    , STM32G041 = 0x4
    , STM32G050 = 0x8
    , STM32G051 = 0x10
    , STM32G061 = 0x20
    , STM32G070 = 0x40
    , STM32G071 = 0x80
    , STM32G081 = 0x100
    , STM32G0B0 = 0x200
    , STM32G0B1 = 0x400
    , STM32G0C1 = 0x800
    };

enum gpio_conf_t
    { STM32G03x = 0x1
    , STM32G05x = 0x2
    , STM32G07x = 0x4
    , STM32G0Bx = 0x8
    };

enum dma_resource_t
    { AES_IN
    , AES_OUT
    , DAC_CHANNEL1
    , DAC_CHANNEL2
    , I2C_RX
    , I2C_TX
    , LPUART_RX
    , LPUART_TX
    , SPI_RX
    , SPI_TX
    , TIM_CH1
    , TIM_CH2
    , TIM_CH3
    , TIM_CH4
    , TIM_COM
    , TIM_TRIG
    , TIM_TRIG_COM
    , TIM_UP
    , UCPD_RX
    , UCPD_TX
    , USART_RX
    , USART_TX
    };

enum periph_t
    { ADC1
    , AES
    , COMP
    , CRC
    , DAC1
    , DBG
    , DMA1
    , DMA2
    , DMAMUX
    , EXTI
    , FDCAN1
    , FDCAN2
    , FLASH
    , FPU
    , FPU_CPACR
    , GPIOA
    , GPIOB
    , GPIOC
    , GPIOD
    , GPIOE
    , GPIOF
    , HDMI_CEC
    , I2C1
    , I2C2
    , I2C3
    , IWDG
    , LPTIM1
    , LPTIM2
    , LPUART1
    , LPUART2
    , MPU
    , NVIC
    , NVIC_STIR
    , PWR
    , RCC
    , RNG
    , RTC
    , SCB
    , SCB_ACTRL
    , SPI1
    , SPI2
    , SPI3
    , STK
    , SYSCFG
    , SYSCFG_ITLINE
    , TAMP
    , TIM1
    , TIM2
    , TIM3
    , TIM4
    , TIM6
    , TIM7
    , TIM14
    , TIM15
    , TIM16
    , TIM17
    , UCPD1
    , UCPD2
    , USART1
    , USART2
    , USART3
    , USART4
    , USART5
    , USART6
    , USB
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

template<> struct mcu_traits<STM32G030C6Tx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G030;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G030C8Tx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G030;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G030F6Px>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G030;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G030J6Mx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G030;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G030K6Tx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G030;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G030K8Tx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G030;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G050C6Tx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G050;
    static constexpr gpio_conf_t gpio_conf = STM32G05x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G050C8Tx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G050;
    static constexpr gpio_conf_t gpio_conf = STM32G05x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G050F6Px>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G050;
    static constexpr gpio_conf_t gpio_conf = STM32G05x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G050K6Tx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G050;
    static constexpr gpio_conf_t gpio_conf = STM32G05x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G050K8Tx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G050;
    static constexpr gpio_conf_t gpio_conf = STM32G05x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G070CBTx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G070;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G070KBTx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G070;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G070RBTx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G070;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0B0CETx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0B0;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0B0KETx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0B0;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0B0RETx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0B0;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0B0VETx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0B0;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G031C4Tx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G031;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G031C6Tx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G031;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G031C8Tx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G031;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G031C4Ux>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G031;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G031C6Ux>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G031;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G031C8Ux>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G031;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G031F4Px>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G031;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G031F6Px>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G031;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G031F8Px>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G031;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G031G4Ux>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G031;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G031G6Ux>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G031;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G031G8Ux>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G031;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G031J4Mx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G031;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G031J6Mx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G031;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G031K4Tx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G031;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G031K6Tx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G031;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G031K8Tx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G031;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G031K4Ux>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G031;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G031K6Ux>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G031;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G031K8Ux>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G031;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G031Y8Yx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G031;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G041C6Tx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G041;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G041C8Tx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G041;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G041C6Ux>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G041;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G041C8Ux>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G041;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G041F6Px>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G041;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G041F8Px>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G041;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G041G6Ux>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G041;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G041G8Ux>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G041;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G041J6Mx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G041;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G041K6Tx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G041;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G041K8Tx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G041;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G041K6Ux>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G041;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G041K8Ux>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G041;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G041Y8Yx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G041;
    static constexpr gpio_conf_t gpio_conf = STM32G03x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G051C6Tx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G051;
    static constexpr gpio_conf_t gpio_conf = STM32G05x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G051C8Tx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G051;
    static constexpr gpio_conf_t gpio_conf = STM32G05x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G051C6Ux>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G051;
    static constexpr gpio_conf_t gpio_conf = STM32G05x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G051C8Ux>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G051;
    static constexpr gpio_conf_t gpio_conf = STM32G05x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G051F6Px>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G051;
    static constexpr gpio_conf_t gpio_conf = STM32G05x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G051F8Px>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G051;
    static constexpr gpio_conf_t gpio_conf = STM32G05x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G051F8Yx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G051;
    static constexpr gpio_conf_t gpio_conf = STM32G05x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G051G6Ux>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G051;
    static constexpr gpio_conf_t gpio_conf = STM32G05x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G051G8Ux>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G051;
    static constexpr gpio_conf_t gpio_conf = STM32G05x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G051K6Tx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G051;
    static constexpr gpio_conf_t gpio_conf = STM32G05x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G051K8Tx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G051;
    static constexpr gpio_conf_t gpio_conf = STM32G05x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G051K6Ux>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G051;
    static constexpr gpio_conf_t gpio_conf = STM32G05x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G051K8Ux>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G051;
    static constexpr gpio_conf_t gpio_conf = STM32G05x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G061C6Tx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G061;
    static constexpr gpio_conf_t gpio_conf = STM32G05x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G061C8Tx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G061;
    static constexpr gpio_conf_t gpio_conf = STM32G05x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G061C6Ux>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G061;
    static constexpr gpio_conf_t gpio_conf = STM32G05x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G061C8Ux>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G061;
    static constexpr gpio_conf_t gpio_conf = STM32G05x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G061F6Px>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G061;
    static constexpr gpio_conf_t gpio_conf = STM32G05x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G061F8Px>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G061;
    static constexpr gpio_conf_t gpio_conf = STM32G05x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G061F8Yx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G061;
    static constexpr gpio_conf_t gpio_conf = STM32G05x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G061G6Ux>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G061;
    static constexpr gpio_conf_t gpio_conf = STM32G05x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G061G8Ux>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G061;
    static constexpr gpio_conf_t gpio_conf = STM32G05x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G061K6Tx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G061;
    static constexpr gpio_conf_t gpio_conf = STM32G05x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G061K8Tx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G061;
    static constexpr gpio_conf_t gpio_conf = STM32G05x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G061K6Ux>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G061;
    static constexpr gpio_conf_t gpio_conf = STM32G05x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G061K8Ux>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G061;
    static constexpr gpio_conf_t gpio_conf = STM32G05x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G071C6Tx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G071;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G071C8Tx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G071;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G071CBTx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G071;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G071C6Ux>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G071;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G071C8Ux>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G071;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G071CBUx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G071;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G071EBYx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G071;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G071G6Ux>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G071;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G071G8Ux>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G071;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G071GBUx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G071;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G071G8UxN>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G071;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G071GBUxN>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G071;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G071K6Tx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G071;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G071K8Tx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G071;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G071KBTx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G071;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G071K6Ux>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G071;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G071K8Ux>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G071;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G071KBUx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G071;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G071K8TxN>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G071;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G071KBTxN>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G071;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G071K8UxN>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G071;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G071KBUxN>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G071;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G071R6Tx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G071;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G071R8Tx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G071;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G071RBTx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G071;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G071RBIx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G071;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G081CBTx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G081;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G081CBUx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G081;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G081EBYx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G081;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G081GBUx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G081;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G081GBUxN>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G081;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G081KBTx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G081;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G081KBTxN>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G081;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G081KBUx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G081;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G081KBUxN>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G081;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G081RBIx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G081;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G081RBTx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G081;
    static constexpr gpio_conf_t gpio_conf = STM32G07x;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0B1CBTx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0B1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0B1CCTx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0B1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0B1CETx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0B1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0B1CBTxN>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0B1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0B1CCTxN>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0B1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0B1CETxN>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0B1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0B1CBUx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0B1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0B1CCUx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0B1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0B1CEUx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0B1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0B1CBUxN>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0B1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0B1CCUxN>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0B1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0B1CEUxN>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0B1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0B1KBTx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0B1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0B1KCTx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0B1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0B1KETx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0B1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0B1KBTxN>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0B1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0B1KCTxN>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0B1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0B1KETxN>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0B1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0B1KBUx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0B1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0B1KCUx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0B1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0B1KEUx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0B1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0B1KBUxN>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0B1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0B1KCUxN>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0B1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0B1KEUxN>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0B1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0B1MBTx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0B1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0B1MCTx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0B1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0B1METx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0B1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0B1NEYx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0B1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0B1RBIxN>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0B1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0B1RCIxN>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0B1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0B1REIxN>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0B1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0B1RBTx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0B1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0B1RCTx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0B1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0B1RETx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0B1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0B1RBTxN>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0B1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0B1RCTxN>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0B1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0B1RETxN>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0B1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0B1VBIx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0B1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0B1VCIx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0B1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0B1VEIx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0B1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0B1VBTx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0B1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0B1VCTx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0B1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0B1VETx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0B1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0C1CCTx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0C1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0C1CETx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0C1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0C1CCTxN>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0C1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0C1CETxN>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0C1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0C1CCUx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0C1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0C1CEUx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0C1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0C1CCUxN>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0C1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0C1CEUxN>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0C1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0C1KCTx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0C1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0C1KETx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0C1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0C1KCTxN>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0C1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0C1KETxN>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0C1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0C1KCUx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0C1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0C1KEUx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0C1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0C1KCUxN>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0C1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0C1KEUxN>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0C1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0C1MCTx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0C1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0C1METx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0C1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0C1NEYx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0C1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0C1RCIxN>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0C1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0C1REIxN>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0C1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0C1RCTx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0C1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0C1RETx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0C1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0C1RCTxN>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0C1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0C1RETxN>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0C1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0C1VCIx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0C1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0C1VEIx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0C1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0C1VCTx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0C1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

template<> struct mcu_traits<STM32G0C1VETx>
{
    static constexpr family_t family = STM32G0;
    static constexpr svd_t svd = STM32G0C1;
    static constexpr gpio_conf_t gpio_conf = STM32G0Bx;
    static constexpr unsigned frequency = 64;
};

// Set target from command-line -DMCU= option
static constexpr mcu_t target = MCU;

