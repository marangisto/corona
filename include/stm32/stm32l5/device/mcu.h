#pragma once

////
//
//      STM32L5 MCUs
//
////

enum mcu_t
    { STM32L552CCTx
    , STM32L552CCUx
    , STM32L552CETx
    , STM32L552CETxP
    , STM32L552CEUx
    , STM32L552CEUxP
    , STM32L552MEYxP
    , STM32L552MEYxQ
    , STM32L552QCIxQ
    , STM32L552QEIx
    , STM32L552QEIxP
    , STM32L552QEIxQ
    , STM32L552RCTx
    , STM32L552RETx
    , STM32L552RETxP
    , STM32L552RETxQ
    , STM32L552VCTxQ
    , STM32L552VETx
    , STM32L552VETxQ
    , STM32L552ZCTxQ
    , STM32L552ZETx
    , STM32L552ZETxQ
    , STM32L562CETx
    , STM32L562CETxP
    , STM32L562CEUx
    , STM32L562CEUxP
    , STM32L562MEYxP
    , STM32L562MEYxQ
    , STM32L562QEIxP
    , STM32L562QEIxQ
    , STM32L562RETx
    , STM32L562RETxP
    , STM32L562VETx
    , STM32L562VETxQ
    , STM32L562ZETx
    , STM32L562ZETxQ
    };

enum mcu_svd_t
    { STM32L552
    , STM32L562
    };

enum gpio_conf_t
    { STM32L55x = 0x1
    };

template<mcu_t MCU> struct mcu_traits {};

template<> struct mcu_traits<STM32L552CCTx>
{
    static constexpr mcu_family_t mcu_family = STM32L5;
    static constexpr mcu_svd_t mcu_svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L552CETx>
{
    static constexpr mcu_family_t mcu_family = STM32L5;
    static constexpr mcu_svd_t mcu_svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L552CCUx>
{
    static constexpr mcu_family_t mcu_family = STM32L5;
    static constexpr mcu_svd_t mcu_svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L552CEUx>
{
    static constexpr mcu_family_t mcu_family = STM32L5;
    static constexpr mcu_svd_t mcu_svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L552CETxP>
{
    static constexpr mcu_family_t mcu_family = STM32L5;
    static constexpr mcu_svd_t mcu_svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L552CEUxP>
{
    static constexpr mcu_family_t mcu_family = STM32L5;
    static constexpr mcu_svd_t mcu_svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L552MEYxP>
{
    static constexpr mcu_family_t mcu_family = STM32L5;
    static constexpr mcu_svd_t mcu_svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L552MEYxQ>
{
    static constexpr mcu_family_t mcu_family = STM32L5;
    static constexpr mcu_svd_t mcu_svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L552QCIxQ>
{
    static constexpr mcu_family_t mcu_family = STM32L5;
    static constexpr mcu_svd_t mcu_svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L552QEIxQ>
{
    static constexpr mcu_family_t mcu_family = STM32L5;
    static constexpr mcu_svd_t mcu_svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L552QEIx>
{
    static constexpr mcu_family_t mcu_family = STM32L5;
    static constexpr mcu_svd_t mcu_svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L552QEIxP>
{
    static constexpr mcu_family_t mcu_family = STM32L5;
    static constexpr mcu_svd_t mcu_svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L552RCTx>
{
    static constexpr mcu_family_t mcu_family = STM32L5;
    static constexpr mcu_svd_t mcu_svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L552RETx>
{
    static constexpr mcu_family_t mcu_family = STM32L5;
    static constexpr mcu_svd_t mcu_svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L552RETxP>
{
    static constexpr mcu_family_t mcu_family = STM32L5;
    static constexpr mcu_svd_t mcu_svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L552RETxQ>
{
    static constexpr mcu_family_t mcu_family = STM32L5;
    static constexpr mcu_svd_t mcu_svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L552VCTxQ>
{
    static constexpr mcu_family_t mcu_family = STM32L5;
    static constexpr mcu_svd_t mcu_svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L552VETxQ>
{
    static constexpr mcu_family_t mcu_family = STM32L5;
    static constexpr mcu_svd_t mcu_svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L552VETx>
{
    static constexpr mcu_family_t mcu_family = STM32L5;
    static constexpr mcu_svd_t mcu_svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L552ZCTxQ>
{
    static constexpr mcu_family_t mcu_family = STM32L5;
    static constexpr mcu_svd_t mcu_svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L552ZETxQ>
{
    static constexpr mcu_family_t mcu_family = STM32L5;
    static constexpr mcu_svd_t mcu_svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L552ZETx>
{
    static constexpr mcu_family_t mcu_family = STM32L5;
    static constexpr mcu_svd_t mcu_svd = STM32L552;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L562CETx>
{
    static constexpr mcu_family_t mcu_family = STM32L5;
    static constexpr mcu_svd_t mcu_svd = STM32L562;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L562CETxP>
{
    static constexpr mcu_family_t mcu_family = STM32L5;
    static constexpr mcu_svd_t mcu_svd = STM32L562;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L562CEUx>
{
    static constexpr mcu_family_t mcu_family = STM32L5;
    static constexpr mcu_svd_t mcu_svd = STM32L562;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L562CEUxP>
{
    static constexpr mcu_family_t mcu_family = STM32L5;
    static constexpr mcu_svd_t mcu_svd = STM32L562;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L562MEYxP>
{
    static constexpr mcu_family_t mcu_family = STM32L5;
    static constexpr mcu_svd_t mcu_svd = STM32L562;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L562MEYxQ>
{
    static constexpr mcu_family_t mcu_family = STM32L5;
    static constexpr mcu_svd_t mcu_svd = STM32L562;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L562QEIxP>
{
    static constexpr mcu_family_t mcu_family = STM32L5;
    static constexpr mcu_svd_t mcu_svd = STM32L562;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L562QEIxQ>
{
    static constexpr mcu_family_t mcu_family = STM32L5;
    static constexpr mcu_svd_t mcu_svd = STM32L562;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L562RETx>
{
    static constexpr mcu_family_t mcu_family = STM32L5;
    static constexpr mcu_svd_t mcu_svd = STM32L562;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L562RETxP>
{
    static constexpr mcu_family_t mcu_family = STM32L5;
    static constexpr mcu_svd_t mcu_svd = STM32L562;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L562VETx>
{
    static constexpr mcu_family_t mcu_family = STM32L5;
    static constexpr mcu_svd_t mcu_svd = STM32L562;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L562VETxQ>
{
    static constexpr mcu_family_t mcu_family = STM32L5;
    static constexpr mcu_svd_t mcu_svd = STM32L562;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L562ZETx>
{
    static constexpr mcu_family_t mcu_family = STM32L5;
    static constexpr mcu_svd_t mcu_svd = STM32L562;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

template<> struct mcu_traits<STM32L562ZETxQ>
{
    static constexpr mcu_family_t mcu_family = STM32L5;
    static constexpr mcu_svd_t mcu_svd = STM32L562;
    static constexpr gpio_conf_t gpio_conf = STM32L55x;
};

static constexpr mcu_t target = MCU;
