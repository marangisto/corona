#pragma once

////
//
//      STM32L1 MCU family
//
///

enum mcu_t
    { STM32L100C6Ux
    , STM32L100C6UxA
    , STM32L100R8Tx
    , STM32L100RBTx
    , STM32L100R8TxA
    , STM32L100RBTxA
    , STM32L100RCTx
    , STM32L151C6Tx
    , STM32L151C8Tx
    , STM32L151CBTx
    , STM32L151C6TxA
    , STM32L151C8TxA
    , STM32L151CBTxA
    , STM32L151C6Ux
    , STM32L151C8Ux
    , STM32L151CBUx
    , STM32L151C6UxA
    , STM32L151C8UxA
    , STM32L151CBUxA
    , STM32L151CCTx
    , STM32L151CCUx
    , STM32L151QCHx
    , STM32L151QDHx
    , STM32L151QEHx
    , STM32L151R6Hx
    , STM32L151R8Hx
    , STM32L151RBHx
    , STM32L151R6HxA
    , STM32L151R8HxA
    , STM32L151RBHxA
    , STM32L151R6Tx
    , STM32L151R8Tx
    , STM32L151RBTx
    , STM32L151R6TxA
    , STM32L151R8TxA
    , STM32L151RBTxA
    , STM32L151RCTx
    , STM32L151RCTxA
    , STM32L151RCYx
    , STM32L151RDTx
    , STM32L151RDYx
    , STM32L151RETx
    , STM32L151UCYx
    , STM32L151V8Hx
    , STM32L151VBHx
    , STM32L151V8HxA
    , STM32L151VBHxA
    , STM32L151V8Tx
    , STM32L151VBTx
    , STM32L151V8TxA
    , STM32L151VBTxA
    , STM32L151VCHx
    , STM32L151VCTx
    , STM32L151VCTxA
    , STM32L151VDTx
    , STM32L151VDTxX
    , STM32L151VDYxX
    , STM32L151VETx
    , STM32L151VEYx
    , STM32L151ZCTx
    , STM32L151ZDTx
    , STM32L151ZETx
    , STM32L152C6Tx
    , STM32L152C8Tx
    , STM32L152CBTx
    , STM32L152C6TxA
    , STM32L152C8TxA
    , STM32L152CBTxA
    , STM32L152C6Ux
    , STM32L152C8Ux
    , STM32L152CBUx
    , STM32L152C6UxA
    , STM32L152C8UxA
    , STM32L152CBUxA
    , STM32L152CCTx
    , STM32L152CCUx
    , STM32L152QCHx
    , STM32L152QDHx
    , STM32L152QEHx
    , STM32L152R6Hx
    , STM32L152R8Hx
    , STM32L152RBHx
    , STM32L152R6HxA
    , STM32L152R8HxA
    , STM32L152RBHxA
    , STM32L152R6Tx
    , STM32L152R8Tx
    , STM32L152RBTx
    , STM32L152R6TxA
    , STM32L152R8TxA
    , STM32L152RBTxA
    , STM32L152RCTx
    , STM32L152RCTxA
    , STM32L152RDTx
    , STM32L152RDYx
    , STM32L152RETx
    , STM32L152UCYx
    , STM32L152V8Hx
    , STM32L152VBHx
    , STM32L152V8HxA
    , STM32L152VBHxA
    , STM32L152V8Tx
    , STM32L152VBTx
    , STM32L152V8TxA
    , STM32L152VBTxA
    , STM32L152VCHx
    , STM32L152VCTx
    , STM32L152VCTxA
    , STM32L152VDTx
    , STM32L152VDTxX
    , STM32L152VETx
    , STM32L152VEYx
    , STM32L152ZCTx
    , STM32L152ZDTx
    , STM32L152ZETx
    , STM32L162QDHx
    , STM32L162RCTx
    , STM32L162RCTxA
    , STM32L162RDTx
    , STM32L162RDYx
    , STM32L162RETx
    , STM32L162VCHx
    , STM32L162VCTx
    , STM32L162VCTxA
    , STM32L162VDTx
    , STM32L162VDYxX
    , STM32L162VETx
    , STM32L162VEYx
    , STM32L162ZDTx
    , STM32L162ZETx
    };

enum svd_t
    { STM32L100
    , STM32L151
    , STM32L152
    , STM32L162
    };

enum gpio_conf_t
    { STM32L152x8 = 0x1
    , STM32L152xC = 0x2
    , STM32L15xxA = 0x4
    , STM32L162xD = 0x8
    , STM32L162xE = 0x10
    };

enum periph_t
    { ADC1
    , AES
    , COMP
    , CRC
    , DAC1
    , DBGMCU
    , DMA1
    , DMA2
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
    , I2C1
    , I2C2
    , IWDG
    , LCD
    , MPU
    , NVIC
    , NVIC_STIR
    , OPAMP
    , PWR
    , RCC
    , RI
    , RTC
    , SCB
    , SCB_ACTRL
    , SDIO
    , SPI1
    , SPI2
    , SPI3
    , STK
    , SYSCFG
    , TIM2
    , TIM3
    , TIM4
    , TIM5
    , TIM6
    , TIM7
    , TIM9
    , TIM10
    , TIM11
    , USART1
    , USART2
    , USART3
    , USART4
    , USART5
    , USB
    , USB_SRAM
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

template<> struct mcu_traits<STM32L100C6Ux>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L100;
    static constexpr gpio_conf_t gpio_conf = STM32L152x8;
};

template<> struct mcu_traits<STM32L100C6UxA>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L100;
    static constexpr gpio_conf_t gpio_conf = STM32L15xxA;
};

template<> struct mcu_traits<STM32L100R8Tx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L100;
    static constexpr gpio_conf_t gpio_conf = STM32L152x8;
};

template<> struct mcu_traits<STM32L100RBTx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L100;
    static constexpr gpio_conf_t gpio_conf = STM32L152x8;
};

template<> struct mcu_traits<STM32L100R8TxA>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L100;
    static constexpr gpio_conf_t gpio_conf = STM32L15xxA;
};

template<> struct mcu_traits<STM32L100RBTxA>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L100;
    static constexpr gpio_conf_t gpio_conf = STM32L15xxA;
};

template<> struct mcu_traits<STM32L100RCTx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L100;
    static constexpr gpio_conf_t gpio_conf = STM32L152xC;
};

template<> struct mcu_traits<STM32L151C6Tx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L151;
    static constexpr gpio_conf_t gpio_conf = STM32L152x8;
};

template<> struct mcu_traits<STM32L151C8Tx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L151;
    static constexpr gpio_conf_t gpio_conf = STM32L152x8;
};

template<> struct mcu_traits<STM32L151CBTx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L151;
    static constexpr gpio_conf_t gpio_conf = STM32L152x8;
};

template<> struct mcu_traits<STM32L151C6TxA>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L151;
    static constexpr gpio_conf_t gpio_conf = STM32L15xxA;
};

template<> struct mcu_traits<STM32L151C8TxA>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L151;
    static constexpr gpio_conf_t gpio_conf = STM32L15xxA;
};

template<> struct mcu_traits<STM32L151CBTxA>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L151;
    static constexpr gpio_conf_t gpio_conf = STM32L15xxA;
};

template<> struct mcu_traits<STM32L151C6Ux>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L151;
    static constexpr gpio_conf_t gpio_conf = STM32L152x8;
};

template<> struct mcu_traits<STM32L151C8Ux>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L151;
    static constexpr gpio_conf_t gpio_conf = STM32L152x8;
};

template<> struct mcu_traits<STM32L151CBUx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L151;
    static constexpr gpio_conf_t gpio_conf = STM32L152x8;
};

template<> struct mcu_traits<STM32L151C6UxA>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L151;
    static constexpr gpio_conf_t gpio_conf = STM32L15xxA;
};

template<> struct mcu_traits<STM32L151C8UxA>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L151;
    static constexpr gpio_conf_t gpio_conf = STM32L15xxA;
};

template<> struct mcu_traits<STM32L151CBUxA>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L151;
    static constexpr gpio_conf_t gpio_conf = STM32L15xxA;
};

template<> struct mcu_traits<STM32L151CCTx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L151;
    static constexpr gpio_conf_t gpio_conf = STM32L152xC;
};

template<> struct mcu_traits<STM32L151CCUx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L151;
    static constexpr gpio_conf_t gpio_conf = STM32L152xC;
};

template<> struct mcu_traits<STM32L151QCHx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L151;
    static constexpr gpio_conf_t gpio_conf = STM32L162xD;
};

template<> struct mcu_traits<STM32L151QDHx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L151;
    static constexpr gpio_conf_t gpio_conf = STM32L162xD;
};

template<> struct mcu_traits<STM32L151QEHx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L151;
    static constexpr gpio_conf_t gpio_conf = STM32L162xE;
};

template<> struct mcu_traits<STM32L151R6Hx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L151;
    static constexpr gpio_conf_t gpio_conf = STM32L152x8;
};

template<> struct mcu_traits<STM32L151R8Hx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L151;
    static constexpr gpio_conf_t gpio_conf = STM32L152x8;
};

template<> struct mcu_traits<STM32L151RBHx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L151;
    static constexpr gpio_conf_t gpio_conf = STM32L152x8;
};

template<> struct mcu_traits<STM32L151R6HxA>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L151;
    static constexpr gpio_conf_t gpio_conf = STM32L15xxA;
};

template<> struct mcu_traits<STM32L151R8HxA>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L151;
    static constexpr gpio_conf_t gpio_conf = STM32L15xxA;
};

template<> struct mcu_traits<STM32L151RBHxA>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L151;
    static constexpr gpio_conf_t gpio_conf = STM32L15xxA;
};

template<> struct mcu_traits<STM32L151R6Tx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L151;
    static constexpr gpio_conf_t gpio_conf = STM32L152x8;
};

template<> struct mcu_traits<STM32L151R8Tx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L151;
    static constexpr gpio_conf_t gpio_conf = STM32L152x8;
};

template<> struct mcu_traits<STM32L151RBTx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L151;
    static constexpr gpio_conf_t gpio_conf = STM32L152x8;
};

template<> struct mcu_traits<STM32L151R6TxA>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L151;
    static constexpr gpio_conf_t gpio_conf = STM32L15xxA;
};

template<> struct mcu_traits<STM32L151R8TxA>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L151;
    static constexpr gpio_conf_t gpio_conf = STM32L15xxA;
};

template<> struct mcu_traits<STM32L151RBTxA>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L151;
    static constexpr gpio_conf_t gpio_conf = STM32L15xxA;
};

template<> struct mcu_traits<STM32L151RCTx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L151;
    static constexpr gpio_conf_t gpio_conf = STM32L152xC;
};

template<> struct mcu_traits<STM32L151RCTxA>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L151;
    static constexpr gpio_conf_t gpio_conf = STM32L162xD;
};

template<> struct mcu_traits<STM32L151RCYx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L151;
    static constexpr gpio_conf_t gpio_conf = STM32L162xD;
};

template<> struct mcu_traits<STM32L151RDTx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L151;
    static constexpr gpio_conf_t gpio_conf = STM32L162xD;
};

template<> struct mcu_traits<STM32L151RDYx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L151;
    static constexpr gpio_conf_t gpio_conf = STM32L162xD;
};

template<> struct mcu_traits<STM32L151RETx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L151;
    static constexpr gpio_conf_t gpio_conf = STM32L162xE;
};

template<> struct mcu_traits<STM32L151UCYx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L151;
    static constexpr gpio_conf_t gpio_conf = STM32L152xC;
};

template<> struct mcu_traits<STM32L151V8Hx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L151;
    static constexpr gpio_conf_t gpio_conf = STM32L152x8;
};

template<> struct mcu_traits<STM32L151VBHx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L151;
    static constexpr gpio_conf_t gpio_conf = STM32L152x8;
};

template<> struct mcu_traits<STM32L151V8HxA>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L151;
    static constexpr gpio_conf_t gpio_conf = STM32L15xxA;
};

template<> struct mcu_traits<STM32L151VBHxA>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L151;
    static constexpr gpio_conf_t gpio_conf = STM32L15xxA;
};

template<> struct mcu_traits<STM32L151V8Tx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L151;
    static constexpr gpio_conf_t gpio_conf = STM32L152x8;
};

template<> struct mcu_traits<STM32L151VBTx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L151;
    static constexpr gpio_conf_t gpio_conf = STM32L152x8;
};

template<> struct mcu_traits<STM32L151V8TxA>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L151;
    static constexpr gpio_conf_t gpio_conf = STM32L15xxA;
};

template<> struct mcu_traits<STM32L151VBTxA>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L151;
    static constexpr gpio_conf_t gpio_conf = STM32L15xxA;
};

template<> struct mcu_traits<STM32L151VCHx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L151;
    static constexpr gpio_conf_t gpio_conf = STM32L152xC;
};

template<> struct mcu_traits<STM32L151VCTx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L151;
    static constexpr gpio_conf_t gpio_conf = STM32L152xC;
};

template<> struct mcu_traits<STM32L151VCTxA>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L151;
    static constexpr gpio_conf_t gpio_conf = STM32L162xD;
};

template<> struct mcu_traits<STM32L151VDTx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L151;
    static constexpr gpio_conf_t gpio_conf = STM32L162xD;
};

template<> struct mcu_traits<STM32L151VDTxX>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L151;
    static constexpr gpio_conf_t gpio_conf = STM32L162xE;
};

template<> struct mcu_traits<STM32L151VDYxX>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L151;
    static constexpr gpio_conf_t gpio_conf = STM32L162xE;
};

template<> struct mcu_traits<STM32L151VETx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L151;
    static constexpr gpio_conf_t gpio_conf = STM32L162xE;
};

template<> struct mcu_traits<STM32L151VEYx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L151;
    static constexpr gpio_conf_t gpio_conf = STM32L162xE;
};

template<> struct mcu_traits<STM32L151ZCTx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L151;
    static constexpr gpio_conf_t gpio_conf = STM32L162xD;
};

template<> struct mcu_traits<STM32L151ZDTx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L151;
    static constexpr gpio_conf_t gpio_conf = STM32L162xD;
};

template<> struct mcu_traits<STM32L151ZETx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L151;
    static constexpr gpio_conf_t gpio_conf = STM32L162xE;
};

template<> struct mcu_traits<STM32L152C6Tx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L152;
    static constexpr gpio_conf_t gpio_conf = STM32L152x8;
};

template<> struct mcu_traits<STM32L152C8Tx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L152;
    static constexpr gpio_conf_t gpio_conf = STM32L152x8;
};

template<> struct mcu_traits<STM32L152CBTx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L152;
    static constexpr gpio_conf_t gpio_conf = STM32L152x8;
};

template<> struct mcu_traits<STM32L152C6TxA>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L152;
    static constexpr gpio_conf_t gpio_conf = STM32L15xxA;
};

template<> struct mcu_traits<STM32L152C8TxA>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L152;
    static constexpr gpio_conf_t gpio_conf = STM32L15xxA;
};

template<> struct mcu_traits<STM32L152CBTxA>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L152;
    static constexpr gpio_conf_t gpio_conf = STM32L15xxA;
};

template<> struct mcu_traits<STM32L152C6Ux>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L152;
    static constexpr gpio_conf_t gpio_conf = STM32L152x8;
};

template<> struct mcu_traits<STM32L152C8Ux>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L152;
    static constexpr gpio_conf_t gpio_conf = STM32L152x8;
};

template<> struct mcu_traits<STM32L152CBUx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L152;
    static constexpr gpio_conf_t gpio_conf = STM32L152x8;
};

template<> struct mcu_traits<STM32L152C6UxA>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L152;
    static constexpr gpio_conf_t gpio_conf = STM32L15xxA;
};

template<> struct mcu_traits<STM32L152C8UxA>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L152;
    static constexpr gpio_conf_t gpio_conf = STM32L15xxA;
};

template<> struct mcu_traits<STM32L152CBUxA>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L152;
    static constexpr gpio_conf_t gpio_conf = STM32L15xxA;
};

template<> struct mcu_traits<STM32L152CCTx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L152;
    static constexpr gpio_conf_t gpio_conf = STM32L152xC;
};

template<> struct mcu_traits<STM32L152CCUx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L152;
    static constexpr gpio_conf_t gpio_conf = STM32L152xC;
};

template<> struct mcu_traits<STM32L152QCHx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L152;
    static constexpr gpio_conf_t gpio_conf = STM32L162xD;
};

template<> struct mcu_traits<STM32L152QDHx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L152;
    static constexpr gpio_conf_t gpio_conf = STM32L162xD;
};

template<> struct mcu_traits<STM32L152QEHx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L152;
    static constexpr gpio_conf_t gpio_conf = STM32L162xE;
};

template<> struct mcu_traits<STM32L152R6Hx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L152;
    static constexpr gpio_conf_t gpio_conf = STM32L152x8;
};

template<> struct mcu_traits<STM32L152R8Hx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L152;
    static constexpr gpio_conf_t gpio_conf = STM32L152x8;
};

template<> struct mcu_traits<STM32L152RBHx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L152;
    static constexpr gpio_conf_t gpio_conf = STM32L152x8;
};

template<> struct mcu_traits<STM32L152R6HxA>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L152;
    static constexpr gpio_conf_t gpio_conf = STM32L15xxA;
};

template<> struct mcu_traits<STM32L152R8HxA>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L152;
    static constexpr gpio_conf_t gpio_conf = STM32L15xxA;
};

template<> struct mcu_traits<STM32L152RBHxA>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L152;
    static constexpr gpio_conf_t gpio_conf = STM32L15xxA;
};

template<> struct mcu_traits<STM32L152R6Tx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L152;
    static constexpr gpio_conf_t gpio_conf = STM32L152x8;
};

template<> struct mcu_traits<STM32L152R8Tx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L152;
    static constexpr gpio_conf_t gpio_conf = STM32L152x8;
};

template<> struct mcu_traits<STM32L152RBTx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L152;
    static constexpr gpio_conf_t gpio_conf = STM32L152x8;
};

template<> struct mcu_traits<STM32L152R6TxA>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L152;
    static constexpr gpio_conf_t gpio_conf = STM32L15xxA;
};

template<> struct mcu_traits<STM32L152R8TxA>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L152;
    static constexpr gpio_conf_t gpio_conf = STM32L15xxA;
};

template<> struct mcu_traits<STM32L152RBTxA>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L152;
    static constexpr gpio_conf_t gpio_conf = STM32L15xxA;
};

template<> struct mcu_traits<STM32L152RCTx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L152;
    static constexpr gpio_conf_t gpio_conf = STM32L152xC;
};

template<> struct mcu_traits<STM32L152RCTxA>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L152;
    static constexpr gpio_conf_t gpio_conf = STM32L162xD;
};

template<> struct mcu_traits<STM32L152RDTx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L152;
    static constexpr gpio_conf_t gpio_conf = STM32L162xD;
};

template<> struct mcu_traits<STM32L152RDYx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L152;
    static constexpr gpio_conf_t gpio_conf = STM32L162xD;
};

template<> struct mcu_traits<STM32L152RETx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L152;
    static constexpr gpio_conf_t gpio_conf = STM32L162xE;
};

template<> struct mcu_traits<STM32L152UCYx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L152;
    static constexpr gpio_conf_t gpio_conf = STM32L152xC;
};

template<> struct mcu_traits<STM32L152V8Hx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L152;
    static constexpr gpio_conf_t gpio_conf = STM32L152x8;
};

template<> struct mcu_traits<STM32L152VBHx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L152;
    static constexpr gpio_conf_t gpio_conf = STM32L152x8;
};

template<> struct mcu_traits<STM32L152V8HxA>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L152;
    static constexpr gpio_conf_t gpio_conf = STM32L15xxA;
};

template<> struct mcu_traits<STM32L152VBHxA>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L152;
    static constexpr gpio_conf_t gpio_conf = STM32L15xxA;
};

template<> struct mcu_traits<STM32L152V8Tx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L152;
    static constexpr gpio_conf_t gpio_conf = STM32L152x8;
};

template<> struct mcu_traits<STM32L152VBTx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L152;
    static constexpr gpio_conf_t gpio_conf = STM32L152x8;
};

template<> struct mcu_traits<STM32L152V8TxA>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L152;
    static constexpr gpio_conf_t gpio_conf = STM32L15xxA;
};

template<> struct mcu_traits<STM32L152VBTxA>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L152;
    static constexpr gpio_conf_t gpio_conf = STM32L15xxA;
};

template<> struct mcu_traits<STM32L152VCHx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L152;
    static constexpr gpio_conf_t gpio_conf = STM32L152xC;
};

template<> struct mcu_traits<STM32L152VCTx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L152;
    static constexpr gpio_conf_t gpio_conf = STM32L152xC;
};

template<> struct mcu_traits<STM32L152VCTxA>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L152;
    static constexpr gpio_conf_t gpio_conf = STM32L162xD;
};

template<> struct mcu_traits<STM32L152VDTx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L152;
    static constexpr gpio_conf_t gpio_conf = STM32L162xD;
};

template<> struct mcu_traits<STM32L152VDTxX>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L152;
    static constexpr gpio_conf_t gpio_conf = STM32L162xE;
};

template<> struct mcu_traits<STM32L152VETx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L152;
    static constexpr gpio_conf_t gpio_conf = STM32L162xE;
};

template<> struct mcu_traits<STM32L152VEYx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L152;
    static constexpr gpio_conf_t gpio_conf = STM32L162xE;
};

template<> struct mcu_traits<STM32L152ZCTx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L152;
    static constexpr gpio_conf_t gpio_conf = STM32L162xD;
};

template<> struct mcu_traits<STM32L152ZDTx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L152;
    static constexpr gpio_conf_t gpio_conf = STM32L162xD;
};

template<> struct mcu_traits<STM32L152ZETx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L152;
    static constexpr gpio_conf_t gpio_conf = STM32L162xE;
};

template<> struct mcu_traits<STM32L162QDHx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L162;
    static constexpr gpio_conf_t gpio_conf = STM32L162xD;
};

template<> struct mcu_traits<STM32L162RCTx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L162;
    static constexpr gpio_conf_t gpio_conf = STM32L152xC;
};

template<> struct mcu_traits<STM32L162RCTxA>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L162;
    static constexpr gpio_conf_t gpio_conf = STM32L162xD;
};

template<> struct mcu_traits<STM32L162RDTx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L162;
    static constexpr gpio_conf_t gpio_conf = STM32L162xD;
};

template<> struct mcu_traits<STM32L162RDYx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L162;
    static constexpr gpio_conf_t gpio_conf = STM32L162xD;
};

template<> struct mcu_traits<STM32L162RETx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L162;
    static constexpr gpio_conf_t gpio_conf = STM32L162xE;
};

template<> struct mcu_traits<STM32L162VCHx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L162;
    static constexpr gpio_conf_t gpio_conf = STM32L152xC;
};

template<> struct mcu_traits<STM32L162VCTx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L162;
    static constexpr gpio_conf_t gpio_conf = STM32L152xC;
};

template<> struct mcu_traits<STM32L162VCTxA>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L162;
    static constexpr gpio_conf_t gpio_conf = STM32L162xD;
};

template<> struct mcu_traits<STM32L162VDTx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L162;
    static constexpr gpio_conf_t gpio_conf = STM32L162xD;
};

template<> struct mcu_traits<STM32L162VDYxX>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L162;
    static constexpr gpio_conf_t gpio_conf = STM32L162xE;
};

template<> struct mcu_traits<STM32L162VETx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L162;
    static constexpr gpio_conf_t gpio_conf = STM32L162xE;
};

template<> struct mcu_traits<STM32L162VEYx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L162;
    static constexpr gpio_conf_t gpio_conf = STM32L162xE;
};

template<> struct mcu_traits<STM32L162ZDTx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L162;
    static constexpr gpio_conf_t gpio_conf = STM32L162xD;
};

template<> struct mcu_traits<STM32L162ZETx>
{
    static constexpr family_t family = STM32L1;
    static constexpr svd_t svd = STM32L162;
    static constexpr gpio_conf_t gpio_conf = STM32L162xE;
};

// Set target from command-line -DMCU= option
static constexpr mcu_t target = MCU;

