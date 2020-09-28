#pragma once

////
//
//      STM32F0 MCU family
//
///

enum mcu_t
    { STM32F030C6Tx
    , STM32F030C8Tx
    , STM32F030CCTx
    , STM32F030F4Px
    , STM32F030K6Tx
    , STM32F030R8Tx
    , STM32F030RCTx
    , STM32F070C6Tx
    , STM32F070CBTx
    , STM32F070F6Px
    , STM32F070RBTx
    , STM32F031C4Tx
    , STM32F031C6Tx
    , STM32F031E6Yx
    , STM32F031F4Px
    , STM32F031F6Px
    , STM32F031G4Ux
    , STM32F031G6Ux
    , STM32F031K4Ux
    , STM32F031K6Ux
    , STM32F031K6Tx
    , STM32F051C4Tx
    , STM32F051C4Ux
    , STM32F051C6Tx
    , STM32F051C6Ux
    , STM32F051C8Tx
    , STM32F051C8Ux
    , STM32F051K4Tx
    , STM32F051K4Ux
    , STM32F051K6Tx
    , STM32F051K6Ux
    , STM32F051K8Tx
    , STM32F051K8Ux
    , STM32F051R4Tx
    , STM32F051R6Tx
    , STM32F051R8Hx
    , STM32F051R8Tx
    , STM32F051T8Yx
    , STM32F071C8Tx
    , STM32F071CBTx
    , STM32F071C8Ux
    , STM32F071CBUx
    , STM32F071CBYx
    , STM32F071RBTx
    , STM32F071V8Hx
    , STM32F071VBHx
    , STM32F071V8Tx
    , STM32F071VBTx
    , STM32F091CBTx
    , STM32F091CCTx
    , STM32F091CBUx
    , STM32F091CCUx
    , STM32F091RBTx
    , STM32F091RCTx
    , STM32F091RCHx
    , STM32F091RCYx
    , STM32F091VBTx
    , STM32F091VCTx
    , STM32F091VCHx
    , STM32F042C4Tx
    , STM32F042C6Tx
    , STM32F042C4Ux
    , STM32F042C6Ux
    , STM32F042F4Px
    , STM32F042F6Px
    , STM32F042G4Ux
    , STM32F042G6Ux
    , STM32F042K4Tx
    , STM32F042K6Tx
    , STM32F042K4Ux
    , STM32F042K6Ux
    , STM32F042T6Yx
    , STM32F072C8Tx
    , STM32F072CBTx
    , STM32F072C8Ux
    , STM32F072CBUx
    , STM32F072CBYx
    , STM32F072R8Tx
    , STM32F072RBTx
    , STM32F072RBHx
    , STM32F072RBIx
    , STM32F072V8Hx
    , STM32F072VBHx
    , STM32F072V8Tx
    , STM32F072VBTx
    , STM32F038C6Tx
    , STM32F038E6Yx
    , STM32F038F6Px
    , STM32F038G6Ux
    , STM32F038K6Ux
    , STM32F048C6Ux
    , STM32F048G6Ux
    , STM32F048T6Yx
    , STM32F058C8Ux
    , STM32F058R8Hx
    , STM32F058R8Tx
    , STM32F058T8Yx
    , STM32F078CBTx
    , STM32F078CBUx
    , STM32F078CBYx
    , STM32F078RBHx
    , STM32F078RBTx
    , STM32F078VBHx
    , STM32F078VBTx
    , STM32F098CCTx
    , STM32F098CCUx
    , STM32F098RCHx
    , STM32F098RCTx
    , STM32F098RCYx
    , STM32F098VCHx
    , STM32F098VCTx
    };

enum svd_t
    { STM32F0x0
    , STM32F0x1
    , STM32F0x2
    , STM32F0x8
    };

enum gpio_conf_t
    { STM32F031 = 0x1
    , STM32F042 = 0x2
    , STM32F051 = 0x4
    , STM32F052 = 0x8
    , STM32F091 = 0x10
    };

enum periph_t
    { ADC1
    , CAN
    , CRC
    , CRS
    , DAC1
    , DBGMCU
    , DMA1
    , DMA2
    , EXTI
    , FLASH
    , GPIOA
    , GPIOB
    , GPIOC
    , GPIOD
    , GPIOE
    , GPIOF
    , HDMI_CEC
    , I2C1
    , I2C2
    , IWDG
    , NVIC
    , PWR
    , RCC
    , RTC
    , SCB
    , SPI1
    , SPI2
    , STK
    , SYSCFG
    , TIM1
    , TIM2
    , TIM3
    , TIM6
    , TIM7
    , TIM14
    , TIM15
    , TIM16
    , TIM17
    , TSC
    , USART1
    , USART2
    , USART3
    , USART4
    , USART5
    , USART6
    , USART7
    , USART8
    , USB
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

template<> struct mcu_traits<STM32F030C6Tx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x0;
    static constexpr gpio_conf_t gpio_conf = STM32F031;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F030C8Tx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x0;
    static constexpr gpio_conf_t gpio_conf = STM32F051;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F030CCTx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x0;
    static constexpr gpio_conf_t gpio_conf = STM32F091;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F030F4Px>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x0;
    static constexpr gpio_conf_t gpio_conf = STM32F031;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F030K6Tx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x0;
    static constexpr gpio_conf_t gpio_conf = STM32F031;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F030R8Tx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x0;
    static constexpr gpio_conf_t gpio_conf = STM32F051;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F030RCTx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x0;
    static constexpr gpio_conf_t gpio_conf = STM32F091;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F070C6Tx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x0;
    static constexpr gpio_conf_t gpio_conf = STM32F042;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F070CBTx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x0;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F070F6Px>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x0;
    static constexpr gpio_conf_t gpio_conf = STM32F042;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F070RBTx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x0;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F031C4Tx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F031;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F031C6Tx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F031;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F031E6Yx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F031;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F031F4Px>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F031;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F031F6Px>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F031;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F031G4Ux>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F031;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F031G6Ux>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F031;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F031K4Ux>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F031;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F031K6Ux>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F031;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F031K6Tx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F031;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F051C4Tx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F051;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F051C4Ux>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F051;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F051C6Tx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F051;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F051C6Ux>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F051;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F051C8Tx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F051;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F051C8Ux>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F051;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F051K4Tx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F051;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F051K4Ux>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F051;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F051K6Tx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F051;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F051K6Ux>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F051;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F051K8Tx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F051;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F051K8Ux>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F051;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F051R4Tx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F051;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F051R6Tx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F051;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F051R8Hx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F051;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F051R8Tx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F051;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F051T8Yx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F051;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F071C8Tx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F071CBTx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F071C8Ux>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F071CBUx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F071CBYx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F071RBTx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F071V8Hx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F071VBHx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F071V8Tx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F071VBTx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F091CBTx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F091;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F091CCTx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F091;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F091CBUx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F091;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F091CCUx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F091;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F091RBTx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F091;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F091RCTx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F091;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F091RCHx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F091;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F091RCYx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F091;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F091VBTx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F091;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F091VCTx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F091;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F091VCHx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x1;
    static constexpr gpio_conf_t gpio_conf = STM32F091;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F042C4Tx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x2;
    static constexpr gpio_conf_t gpio_conf = STM32F042;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F042C6Tx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x2;
    static constexpr gpio_conf_t gpio_conf = STM32F042;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F042C4Ux>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x2;
    static constexpr gpio_conf_t gpio_conf = STM32F042;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F042C6Ux>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x2;
    static constexpr gpio_conf_t gpio_conf = STM32F042;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F042F4Px>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x2;
    static constexpr gpio_conf_t gpio_conf = STM32F042;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F042F6Px>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x2;
    static constexpr gpio_conf_t gpio_conf = STM32F042;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F042G4Ux>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x2;
    static constexpr gpio_conf_t gpio_conf = STM32F042;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F042G6Ux>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x2;
    static constexpr gpio_conf_t gpio_conf = STM32F042;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F042K4Tx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x2;
    static constexpr gpio_conf_t gpio_conf = STM32F042;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F042K6Tx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x2;
    static constexpr gpio_conf_t gpio_conf = STM32F042;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F042K4Ux>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x2;
    static constexpr gpio_conf_t gpio_conf = STM32F042;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F042K6Ux>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x2;
    static constexpr gpio_conf_t gpio_conf = STM32F042;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F042T6Yx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x2;
    static constexpr gpio_conf_t gpio_conf = STM32F042;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F072C8Tx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x2;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F072CBTx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x2;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F072C8Ux>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x2;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F072CBUx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x2;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F072CBYx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x2;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F072R8Tx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x2;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F072RBTx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x2;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F072RBHx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x2;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F072RBIx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x2;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F072V8Hx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x2;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F072VBHx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x2;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F072V8Tx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x2;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F072VBTx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x2;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F038C6Tx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x8;
    static constexpr gpio_conf_t gpio_conf = STM32F031;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F038E6Yx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x8;
    static constexpr gpio_conf_t gpio_conf = STM32F031;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F038F6Px>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x8;
    static constexpr gpio_conf_t gpio_conf = STM32F031;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F038G6Ux>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x8;
    static constexpr gpio_conf_t gpio_conf = STM32F031;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F038K6Ux>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x8;
    static constexpr gpio_conf_t gpio_conf = STM32F031;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F048C6Ux>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x8;
    static constexpr gpio_conf_t gpio_conf = STM32F042;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F048G6Ux>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x8;
    static constexpr gpio_conf_t gpio_conf = STM32F042;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F048T6Yx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x8;
    static constexpr gpio_conf_t gpio_conf = STM32F042;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F058C8Ux>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x8;
    static constexpr gpio_conf_t gpio_conf = STM32F051;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F058R8Hx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x8;
    static constexpr gpio_conf_t gpio_conf = STM32F051;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F058R8Tx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x8;
    static constexpr gpio_conf_t gpio_conf = STM32F051;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F058T8Yx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x8;
    static constexpr gpio_conf_t gpio_conf = STM32F051;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F078CBTx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x8;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F078CBUx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x8;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F078CBYx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x8;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F078RBHx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x8;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F078RBTx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x8;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F078VBHx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x8;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F078VBTx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x8;
    static constexpr gpio_conf_t gpio_conf = STM32F052;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F098CCTx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x8;
    static constexpr gpio_conf_t gpio_conf = STM32F091;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F098CCUx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x8;
    static constexpr gpio_conf_t gpio_conf = STM32F091;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F098RCHx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x8;
    static constexpr gpio_conf_t gpio_conf = STM32F091;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F098RCTx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x8;
    static constexpr gpio_conf_t gpio_conf = STM32F091;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F098RCYx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x8;
    static constexpr gpio_conf_t gpio_conf = STM32F091;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F098VCHx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x8;
    static constexpr gpio_conf_t gpio_conf = STM32F091;
    static constexpr unsigned frequency = 48;
};

template<> struct mcu_traits<STM32F098VCTx>
{
    static constexpr family_t family = STM32F0;
    static constexpr svd_t svd = STM32F0x8;
    static constexpr gpio_conf_t gpio_conf = STM32F091;
    static constexpr unsigned frequency = 48;
};

// Set target from command-line -DMCU= option
static constexpr mcu_t target = MCU;

