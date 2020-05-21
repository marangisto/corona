#pragma once

////
//
//      STM32WB MCUs
//
////

enum mcu_t
    { STM32WB50CGUx
    , STM32WB55CCUx
    , STM32WB55CEUx
    , STM32WB55CGUx
    , STM32WB55RCVx
    , STM32WB55REVx
    , STM32WB55RGVx
    , STM32WB55VCQx
    , STM32WB55VCYx
    , STM32WB55VEQx
    , STM32WB55VEYx
    , STM32WB55VGQx
    , STM32WB55VGYx
    };

enum mcu_svd_t
    { STM32WB30_CM4
    , STM32WB35_CM4
    , STM32WB50_CM4
    , STM32WB55_CM4
    };

enum gpio_conf_t
    { STM32WB55x = 0x1
    };

template<mcu_t MCU> struct mcu_traits {};

template<> struct mcu_traits<STM32WB50CGUx>
{
    static constexpr mcu_family_t mcu_family = STM32WB;
    static constexpr mcu_svd_t mcu_svd = STM32WB50_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32WB55x;
};

template<> struct mcu_traits<STM32WB55CCUx>
{
    static constexpr mcu_family_t mcu_family = STM32WB;
    static constexpr mcu_svd_t mcu_svd = STM32WB55_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32WB55x;
};

template<> struct mcu_traits<STM32WB55CEUx>
{
    static constexpr mcu_family_t mcu_family = STM32WB;
    static constexpr mcu_svd_t mcu_svd = STM32WB55_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32WB55x;
};

template<> struct mcu_traits<STM32WB55CGUx>
{
    static constexpr mcu_family_t mcu_family = STM32WB;
    static constexpr mcu_svd_t mcu_svd = STM32WB55_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32WB55x;
};

template<> struct mcu_traits<STM32WB55RCVx>
{
    static constexpr mcu_family_t mcu_family = STM32WB;
    static constexpr mcu_svd_t mcu_svd = STM32WB55_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32WB55x;
};

template<> struct mcu_traits<STM32WB55REVx>
{
    static constexpr mcu_family_t mcu_family = STM32WB;
    static constexpr mcu_svd_t mcu_svd = STM32WB55_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32WB55x;
};

template<> struct mcu_traits<STM32WB55RGVx>
{
    static constexpr mcu_family_t mcu_family = STM32WB;
    static constexpr mcu_svd_t mcu_svd = STM32WB55_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32WB55x;
};

template<> struct mcu_traits<STM32WB55VCQx>
{
    static constexpr mcu_family_t mcu_family = STM32WB;
    static constexpr mcu_svd_t mcu_svd = STM32WB55_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32WB55x;
};

template<> struct mcu_traits<STM32WB55VCYx>
{
    static constexpr mcu_family_t mcu_family = STM32WB;
    static constexpr mcu_svd_t mcu_svd = STM32WB55_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32WB55x;
};

template<> struct mcu_traits<STM32WB55VEQx>
{
    static constexpr mcu_family_t mcu_family = STM32WB;
    static constexpr mcu_svd_t mcu_svd = STM32WB55_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32WB55x;
};

template<> struct mcu_traits<STM32WB55VEYx>
{
    static constexpr mcu_family_t mcu_family = STM32WB;
    static constexpr mcu_svd_t mcu_svd = STM32WB55_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32WB55x;
};

template<> struct mcu_traits<STM32WB55VGQx>
{
    static constexpr mcu_family_t mcu_family = STM32WB;
    static constexpr mcu_svd_t mcu_svd = STM32WB55_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32WB55x;
};

template<> struct mcu_traits<STM32WB55VGYx>
{
    static constexpr mcu_family_t mcu_family = STM32WB;
    static constexpr mcu_svd_t mcu_svd = STM32WB55_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32WB55x;
};

static constexpr mcu_t target = MCU;
