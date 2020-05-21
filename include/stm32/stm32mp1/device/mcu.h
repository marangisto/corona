#pragma once

////
//
//      STM32MP1 MCUs
//
////

enum mcu_t
    { STM32MP151AAAx
    , STM32MP151AABx
    , STM32MP151AACx
    , STM32MP151AADx
    , STM32MP151CAAx
    , STM32MP151CABx
    , STM32MP151CACx
    , STM32MP151CADx
    , STM32MP153AAAx
    , STM32MP153AABx
    , STM32MP153AACx
    , STM32MP153AADx
    , STM32MP153CAAx
    , STM32MP153CABx
    , STM32MP153CACx
    , STM32MP153CADx
    , STM32MP157AAAx
    , STM32MP157AABx
    , STM32MP157AACx
    , STM32MP157AADx
    , STM32MP157CAAx
    , STM32MP157CABx
    , STM32MP157CACx
    , STM32MP157CADx
    };

enum mcu_svd_t
    { STM32MP15xxx
    };

enum gpio_conf_t
    { STM32MPU = 0x1
    };

template<mcu_t MCU> struct mcu_traits {};

template<> struct mcu_traits<STM32MP151AAAx>
{
    static constexpr mcu_family_t mcu_family = STM32MP1;
    static constexpr mcu_svd_t mcu_svd = STM32MP15xxx;
    static constexpr gpio_conf_t gpio_conf = STM32MPU;
};

template<> struct mcu_traits<STM32MP151AABx>
{
    static constexpr mcu_family_t mcu_family = STM32MP1;
    static constexpr mcu_svd_t mcu_svd = STM32MP15xxx;
    static constexpr gpio_conf_t gpio_conf = STM32MPU;
};

template<> struct mcu_traits<STM32MP151AACx>
{
    static constexpr mcu_family_t mcu_family = STM32MP1;
    static constexpr mcu_svd_t mcu_svd = STM32MP15xxx;
    static constexpr gpio_conf_t gpio_conf = STM32MPU;
};

template<> struct mcu_traits<STM32MP151AADx>
{
    static constexpr mcu_family_t mcu_family = STM32MP1;
    static constexpr mcu_svd_t mcu_svd = STM32MP15xxx;
    static constexpr gpio_conf_t gpio_conf = STM32MPU;
};

template<> struct mcu_traits<STM32MP151CAAx>
{
    static constexpr mcu_family_t mcu_family = STM32MP1;
    static constexpr mcu_svd_t mcu_svd = STM32MP15xxx;
    static constexpr gpio_conf_t gpio_conf = STM32MPU;
};

template<> struct mcu_traits<STM32MP151CABx>
{
    static constexpr mcu_family_t mcu_family = STM32MP1;
    static constexpr mcu_svd_t mcu_svd = STM32MP15xxx;
    static constexpr gpio_conf_t gpio_conf = STM32MPU;
};

template<> struct mcu_traits<STM32MP151CACx>
{
    static constexpr mcu_family_t mcu_family = STM32MP1;
    static constexpr mcu_svd_t mcu_svd = STM32MP15xxx;
    static constexpr gpio_conf_t gpio_conf = STM32MPU;
};

template<> struct mcu_traits<STM32MP151CADx>
{
    static constexpr mcu_family_t mcu_family = STM32MP1;
    static constexpr mcu_svd_t mcu_svd = STM32MP15xxx;
    static constexpr gpio_conf_t gpio_conf = STM32MPU;
};

template<> struct mcu_traits<STM32MP153AAAx>
{
    static constexpr mcu_family_t mcu_family = STM32MP1;
    static constexpr mcu_svd_t mcu_svd = STM32MP15xxx;
    static constexpr gpio_conf_t gpio_conf = STM32MPU;
};

template<> struct mcu_traits<STM32MP153AABx>
{
    static constexpr mcu_family_t mcu_family = STM32MP1;
    static constexpr mcu_svd_t mcu_svd = STM32MP15xxx;
    static constexpr gpio_conf_t gpio_conf = STM32MPU;
};

template<> struct mcu_traits<STM32MP153AACx>
{
    static constexpr mcu_family_t mcu_family = STM32MP1;
    static constexpr mcu_svd_t mcu_svd = STM32MP15xxx;
    static constexpr gpio_conf_t gpio_conf = STM32MPU;
};

template<> struct mcu_traits<STM32MP153AADx>
{
    static constexpr mcu_family_t mcu_family = STM32MP1;
    static constexpr mcu_svd_t mcu_svd = STM32MP15xxx;
    static constexpr gpio_conf_t gpio_conf = STM32MPU;
};

template<> struct mcu_traits<STM32MP153CAAx>
{
    static constexpr mcu_family_t mcu_family = STM32MP1;
    static constexpr mcu_svd_t mcu_svd = STM32MP15xxx;
    static constexpr gpio_conf_t gpio_conf = STM32MPU;
};

template<> struct mcu_traits<STM32MP153CABx>
{
    static constexpr mcu_family_t mcu_family = STM32MP1;
    static constexpr mcu_svd_t mcu_svd = STM32MP15xxx;
    static constexpr gpio_conf_t gpio_conf = STM32MPU;
};

template<> struct mcu_traits<STM32MP153CACx>
{
    static constexpr mcu_family_t mcu_family = STM32MP1;
    static constexpr mcu_svd_t mcu_svd = STM32MP15xxx;
    static constexpr gpio_conf_t gpio_conf = STM32MPU;
};

template<> struct mcu_traits<STM32MP153CADx>
{
    static constexpr mcu_family_t mcu_family = STM32MP1;
    static constexpr mcu_svd_t mcu_svd = STM32MP15xxx;
    static constexpr gpio_conf_t gpio_conf = STM32MPU;
};

template<> struct mcu_traits<STM32MP157AAAx>
{
    static constexpr mcu_family_t mcu_family = STM32MP1;
    static constexpr mcu_svd_t mcu_svd = STM32MP15xxx;
    static constexpr gpio_conf_t gpio_conf = STM32MPU;
};

template<> struct mcu_traits<STM32MP157AABx>
{
    static constexpr mcu_family_t mcu_family = STM32MP1;
    static constexpr mcu_svd_t mcu_svd = STM32MP15xxx;
    static constexpr gpio_conf_t gpio_conf = STM32MPU;
};

template<> struct mcu_traits<STM32MP157AACx>
{
    static constexpr mcu_family_t mcu_family = STM32MP1;
    static constexpr mcu_svd_t mcu_svd = STM32MP15xxx;
    static constexpr gpio_conf_t gpio_conf = STM32MPU;
};

template<> struct mcu_traits<STM32MP157AADx>
{
    static constexpr mcu_family_t mcu_family = STM32MP1;
    static constexpr mcu_svd_t mcu_svd = STM32MP15xxx;
    static constexpr gpio_conf_t gpio_conf = STM32MPU;
};

template<> struct mcu_traits<STM32MP157CAAx>
{
    static constexpr mcu_family_t mcu_family = STM32MP1;
    static constexpr mcu_svd_t mcu_svd = STM32MP15xxx;
    static constexpr gpio_conf_t gpio_conf = STM32MPU;
};

template<> struct mcu_traits<STM32MP157CABx>
{
    static constexpr mcu_family_t mcu_family = STM32MP1;
    static constexpr mcu_svd_t mcu_svd = STM32MP15xxx;
    static constexpr gpio_conf_t gpio_conf = STM32MPU;
};

template<> struct mcu_traits<STM32MP157CACx>
{
    static constexpr mcu_family_t mcu_family = STM32MP1;
    static constexpr mcu_svd_t mcu_svd = STM32MP15xxx;
    static constexpr gpio_conf_t gpio_conf = STM32MPU;
};

template<> struct mcu_traits<STM32MP157CADx>
{
    static constexpr mcu_family_t mcu_family = STM32MP1;
    static constexpr mcu_svd_t mcu_svd = STM32MP15xxx;
    static constexpr gpio_conf_t gpio_conf = STM32MPU;
};

static constexpr mcu_t target = MCU;
