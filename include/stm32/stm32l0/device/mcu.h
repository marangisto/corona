#pragma once

////
//
//      STM32L0 MCU family
//
///

enum mcu_t
    { STM32L010C6Tx
    , STM32L010F4Px
    , STM32L010K4Tx
    , STM32L010K8Tx
    , STM32L010R8Tx
    , STM32L010RBTx
    , STM32L011D3Px
    , STM32L011D4Px
    , STM32L011E3Yx
    , STM32L011E4Yx
    , STM32L011F3Px
    , STM32L011F4Px
    , STM32L011F3Ux
    , STM32L011F4Ux
    , STM32L011G3Ux
    , STM32L011G4Ux
    , STM32L011K3Tx
    , STM32L011K4Tx
    , STM32L011K3Ux
    , STM32L011K4Ux
    , STM32L021D4Px
    , STM32L021F4Ux
    , STM32L021G4Ux
    , STM32L021K4Tx
    , STM32L031C4Tx
    , STM32L031C6Tx
    , STM32L031C6Ux
    , STM32L031E4Yx
    , STM32L031E6Yx
    , STM32L031F4Px
    , STM32L031F6Px
    , STM32L031G4Ux
    , STM32L031G6Ux
    , STM32L031G6UxS
    , STM32L031K4Tx
    , STM32L031K6Tx
    , STM32L031K4Ux
    , STM32L031K6Ux
    , STM32L041C4Tx
    , STM32L041C6Tx
    , STM32L041E6Yx
    , STM32L041F6Px
    , STM32L041G6Ux
    , STM32L041G6UxS
    , STM32L041K6Tx
    , STM32L041K6Ux
    , STM32L051C6Tx
    , STM32L051C8Tx
    , STM32L051K6Tx
    , STM32L051K8Tx
    , STM32L051K6Ux
    , STM32L051K8Ux
    , STM32L051R6Hx
    , STM32L051R8Hx
    , STM32L051R6Tx
    , STM32L051R8Tx
    , STM32L051T6Yx
    , STM32L051T8Yx
    , STM32L071CBTx
    , STM32L071CZTx
    , STM32L071CBYx
    , STM32L071CZYx
    , STM32L071C8Tx
    , STM32L071KBTx
    , STM32L071KZTx
    , STM32L071KBUx
    , STM32L071KZUx
    , STM32L071K8Ux
    , STM32L071RBHx
    , STM32L071RZHx
    , STM32L071RBTx
    , STM32L071RZTx
    , STM32L071VBTx
    , STM32L071VZTx
    , STM32L071V8Tx
    , STM32L081CBTx
    , STM32L081CZTx
    , STM32L081KZTx
    , STM32L081KZUx
    , STM32L052C6Tx
    , STM32L052C8Tx
    , STM32L052K6Tx
    , STM32L052K8Tx
    , STM32L052K6Ux
    , STM32L052K8Ux
    , STM32L052R6Hx
    , STM32L052R8Hx
    , STM32L052R6Tx
    , STM32L052R8Tx
    , STM32L052T6Yx
    , STM32L052T8Yx
    , STM32L052T8Fx
    , STM32L062K8Tx
    , STM32L062K8Ux
    , STM32L072CBTx
    , STM32L072CZTx
    , STM32L072CBYx
    , STM32L072CZYx
    , STM32L072CZEx
    , STM32L072KBTx
    , STM32L072KZTx
    , STM32L072KBUx
    , STM32L072KZUx
    , STM32L072RBHx
    , STM32L072RZHx
    , STM32L072RBIx
    , STM32L072RZIx
    , STM32L072RBTx
    , STM32L072RZTx
    , STM32L072VBIx
    , STM32L072VZIx
    , STM32L072VBTx
    , STM32L072VZTx
    , STM32L072V8Ix
    , STM32L072V8Tx
    , STM32L082CZYx
    , STM32L082KBTx
    , STM32L082KZTx
    , STM32L082KBUx
    , STM32L082KZUx
    , STM32L053C6Tx
    , STM32L053C8Tx
    , STM32L053R6Hx
    , STM32L053R8Hx
    , STM32L053R6Tx
    , STM32L053R8Tx
    , STM32L063C8Tx
    , STM32L063R8Tx
    , STM32L073CBTx
    , STM32L073CZTx
    , STM32L073RBHx
    , STM32L073RZHx
    , STM32L073RBTx
    , STM32L073RZTx
    , STM32L073RZIx
    , STM32L073VBIx
    , STM32L073VZIx
    , STM32L073VBTx
    , STM32L073VZTx
    , STM32L073V8Tx
    , STM32L083CBTx
    , STM32L083CZTx
    , STM32L083RBHx
    , STM32L083RZHx
    , STM32L083RBTx
    , STM32L083RZTx
    , STM32L083VBIx
    , STM32L083VZIx
    , STM32L083VBTx
    , STM32L083VZTx
    , STM32L083V8Tx
    };

enum svd_t
    { STM32L0x0
    , STM32L0x1
    , STM32L0x2
    , STM32L0x3
    };

enum gpio_conf_t
    { STM32L021 = 0x1
    , STM32L031 = 0x2
    , STM32L051 = 0x4
    , STM32L071 = 0x8
    };

enum periph_t
    { ADC1
    , AES
    , CRC
    , CRS
    , DAC1
    , DBG
    , DBGMCU
    , DMA1
    , EXTI
    , FIREWALL
    , FLASH
    , GPIOA
    , GPIOB
    , GPIOC
    , GPIOD
    , GPIOE
    , GPIOH
    , I2C1
    , I2C2
    , I2C3
    , IWDG
    , LCD
    , LPTIM
    , LPUART1
    , LPUSART1
    , MPU
    , NVIC
    , PWR
    , RCC
    , RNG
    , RTC
    , SCB
    , SPI1
    , SPI2
    , STK
    , SYSCFG
    , TIM2
    , TIM3
    , TIM6
    , TIM7
    , TIM21
    , TIM22
    , TSC
    , USART1
    , USART2
    , USART4
    , USART5
    , USB_FS
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

template<> struct mcu_traits<STM32L010C6Tx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x0;
    static constexpr gpio_conf_t gpio_conf = STM32L031;
};

template<> struct mcu_traits<STM32L010F4Px>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x0;
    static constexpr gpio_conf_t gpio_conf = STM32L021;
};

template<> struct mcu_traits<STM32L010K4Tx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x0;
    static constexpr gpio_conf_t gpio_conf = STM32L021;
};

template<> struct mcu_traits<STM32L010K8Tx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x0;
    static constexpr gpio_conf_t gpio_conf = STM32L051;
};

template<> struct mcu_traits<STM32L010R8Tx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x0;
    static constexpr gpio_conf_t gpio_conf = STM32L051;
};

template<> struct mcu_traits<STM32L010RBTx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x0;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L011D3Px>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L021;
};

template<> struct mcu_traits<STM32L011D4Px>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L021;
};

template<> struct mcu_traits<STM32L011E3Yx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L021;
};

template<> struct mcu_traits<STM32L011E4Yx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L021;
};

template<> struct mcu_traits<STM32L011F3Px>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L021;
};

template<> struct mcu_traits<STM32L011F4Px>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L021;
};

template<> struct mcu_traits<STM32L011F3Ux>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L021;
};

template<> struct mcu_traits<STM32L011F4Ux>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L021;
};

template<> struct mcu_traits<STM32L011G3Ux>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L021;
};

template<> struct mcu_traits<STM32L011G4Ux>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L021;
};

template<> struct mcu_traits<STM32L011K3Tx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L021;
};

template<> struct mcu_traits<STM32L011K4Tx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L021;
};

template<> struct mcu_traits<STM32L011K3Ux>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L021;
};

template<> struct mcu_traits<STM32L011K4Ux>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L021;
};

template<> struct mcu_traits<STM32L021D4Px>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L021;
};

template<> struct mcu_traits<STM32L021F4Ux>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L021;
};

template<> struct mcu_traits<STM32L021G4Ux>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L021;
};

template<> struct mcu_traits<STM32L021K4Tx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L021;
};

template<> struct mcu_traits<STM32L031C4Tx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L031;
};

template<> struct mcu_traits<STM32L031C6Tx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L031;
};

template<> struct mcu_traits<STM32L031C6Ux>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L031;
};

template<> struct mcu_traits<STM32L031E4Yx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L031;
};

template<> struct mcu_traits<STM32L031E6Yx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L031;
};

template<> struct mcu_traits<STM32L031F4Px>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L031;
};

template<> struct mcu_traits<STM32L031F6Px>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L031;
};

template<> struct mcu_traits<STM32L031G4Ux>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L031;
};

template<> struct mcu_traits<STM32L031G6Ux>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L031;
};

template<> struct mcu_traits<STM32L031G6UxS>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L031;
};

template<> struct mcu_traits<STM32L031K4Tx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L031;
};

template<> struct mcu_traits<STM32L031K6Tx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L031;
};

template<> struct mcu_traits<STM32L031K4Ux>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L031;
};

template<> struct mcu_traits<STM32L031K6Ux>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L031;
};

template<> struct mcu_traits<STM32L041C4Tx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L031;
};

template<> struct mcu_traits<STM32L041C6Tx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L031;
};

template<> struct mcu_traits<STM32L041E6Yx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L031;
};

template<> struct mcu_traits<STM32L041F6Px>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L031;
};

template<> struct mcu_traits<STM32L041G6Ux>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L031;
};

template<> struct mcu_traits<STM32L041G6UxS>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L031;
};

template<> struct mcu_traits<STM32L041K6Tx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L031;
};

template<> struct mcu_traits<STM32L041K6Ux>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L031;
};

template<> struct mcu_traits<STM32L051C6Tx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L051;
};

template<> struct mcu_traits<STM32L051C8Tx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L051;
};

template<> struct mcu_traits<STM32L051K6Tx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L051;
};

template<> struct mcu_traits<STM32L051K8Tx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L051;
};

template<> struct mcu_traits<STM32L051K6Ux>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L051;
};

template<> struct mcu_traits<STM32L051K8Ux>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L051;
};

template<> struct mcu_traits<STM32L051R6Hx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L051;
};

template<> struct mcu_traits<STM32L051R8Hx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L051;
};

template<> struct mcu_traits<STM32L051R6Tx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L051;
};

template<> struct mcu_traits<STM32L051R8Tx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L051;
};

template<> struct mcu_traits<STM32L051T6Yx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L051;
};

template<> struct mcu_traits<STM32L051T8Yx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L051;
};

template<> struct mcu_traits<STM32L071CBTx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L071CZTx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L071CBYx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L071CZYx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L071C8Tx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L071KBTx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L071KZTx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L071KBUx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L071KZUx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L071K8Ux>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L071RBHx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L071RZHx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L071RBTx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L071RZTx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L071VBTx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L071VZTx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L071V8Tx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L081CBTx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L081CZTx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L081KZTx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L081KZUx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x1;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L052C6Tx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x2;
    static constexpr gpio_conf_t gpio_conf = STM32L051;
};

template<> struct mcu_traits<STM32L052C8Tx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x2;
    static constexpr gpio_conf_t gpio_conf = STM32L051;
};

template<> struct mcu_traits<STM32L052K6Tx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x2;
    static constexpr gpio_conf_t gpio_conf = STM32L051;
};

template<> struct mcu_traits<STM32L052K8Tx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x2;
    static constexpr gpio_conf_t gpio_conf = STM32L051;
};

template<> struct mcu_traits<STM32L052K6Ux>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x2;
    static constexpr gpio_conf_t gpio_conf = STM32L051;
};

template<> struct mcu_traits<STM32L052K8Ux>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x2;
    static constexpr gpio_conf_t gpio_conf = STM32L051;
};

template<> struct mcu_traits<STM32L052R6Hx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x2;
    static constexpr gpio_conf_t gpio_conf = STM32L051;
};

template<> struct mcu_traits<STM32L052R8Hx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x2;
    static constexpr gpio_conf_t gpio_conf = STM32L051;
};

template<> struct mcu_traits<STM32L052R6Tx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x2;
    static constexpr gpio_conf_t gpio_conf = STM32L051;
};

template<> struct mcu_traits<STM32L052R8Tx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x2;
    static constexpr gpio_conf_t gpio_conf = STM32L051;
};

template<> struct mcu_traits<STM32L052T6Yx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x2;
    static constexpr gpio_conf_t gpio_conf = STM32L051;
};

template<> struct mcu_traits<STM32L052T8Yx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x2;
    static constexpr gpio_conf_t gpio_conf = STM32L051;
};

template<> struct mcu_traits<STM32L052T8Fx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x2;
    static constexpr gpio_conf_t gpio_conf = STM32L051;
};

template<> struct mcu_traits<STM32L062K8Tx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x2;
    static constexpr gpio_conf_t gpio_conf = STM32L051;
};

template<> struct mcu_traits<STM32L062K8Ux>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x2;
    static constexpr gpio_conf_t gpio_conf = STM32L051;
};

template<> struct mcu_traits<STM32L072CBTx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x2;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L072CZTx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x2;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L072CBYx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x2;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L072CZYx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x2;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L072CZEx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x2;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L072KBTx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x2;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L072KZTx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x2;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L072KBUx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x2;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L072KZUx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x2;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L072RBHx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x2;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L072RZHx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x2;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L072RBIx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x2;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L072RZIx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x2;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L072RBTx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x2;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L072RZTx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x2;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L072VBIx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x2;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L072VZIx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x2;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L072VBTx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x2;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L072VZTx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x2;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L072V8Ix>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x2;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L072V8Tx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x2;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L082CZYx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x2;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L082KBTx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x2;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L082KZTx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x2;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L082KBUx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x2;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L082KZUx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x2;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L053C6Tx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x3;
    static constexpr gpio_conf_t gpio_conf = STM32L051;
};

template<> struct mcu_traits<STM32L053C8Tx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x3;
    static constexpr gpio_conf_t gpio_conf = STM32L051;
};

template<> struct mcu_traits<STM32L053R6Hx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x3;
    static constexpr gpio_conf_t gpio_conf = STM32L051;
};

template<> struct mcu_traits<STM32L053R8Hx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x3;
    static constexpr gpio_conf_t gpio_conf = STM32L051;
};

template<> struct mcu_traits<STM32L053R6Tx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x3;
    static constexpr gpio_conf_t gpio_conf = STM32L051;
};

template<> struct mcu_traits<STM32L053R8Tx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x3;
    static constexpr gpio_conf_t gpio_conf = STM32L051;
};

template<> struct mcu_traits<STM32L063C8Tx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x3;
    static constexpr gpio_conf_t gpio_conf = STM32L051;
};

template<> struct mcu_traits<STM32L063R8Tx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x3;
    static constexpr gpio_conf_t gpio_conf = STM32L051;
};

template<> struct mcu_traits<STM32L073CBTx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x3;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L073CZTx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x3;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L073RBHx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x3;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L073RZHx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x3;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L073RBTx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x3;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L073RZTx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x3;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L073RZIx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x3;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L073VBIx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x3;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L073VZIx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x3;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L073VBTx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x3;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L073VZTx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x3;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L073V8Tx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x3;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L083CBTx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x3;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L083CZTx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x3;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L083RBHx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x3;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L083RZHx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x3;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L083RBTx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x3;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L083RZTx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x3;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L083VBIx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x3;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L083VZIx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x3;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L083VBTx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x3;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L083VZTx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x3;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

template<> struct mcu_traits<STM32L083V8Tx>
{
    static constexpr family_t family = STM32L0;
    static constexpr svd_t svd = STM32L0x3;
    static constexpr gpio_conf_t gpio_conf = STM32L071;
};

// Set target from command-line -DMCU= option
static constexpr mcu_t target = MCU;

