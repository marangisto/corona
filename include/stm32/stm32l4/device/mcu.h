#pragma once

////
//
//      STM32L4 MCUs
//
////

enum mcu_t
    { STM32L412C8Tx
    , STM32L412C8Ux
    , STM32L412CBTx
    , STM32L412CBTxP
    , STM32L412CBUx
    , STM32L412CBUxP
    , STM32L412K8Tx
    , STM32L412K8Ux
    , STM32L412KBTx
    , STM32L412KBUx
    , STM32L412R8Ix
    , STM32L412R8Tx
    , STM32L412RBIx
    , STM32L412RBIxP
    , STM32L412RBTx
    , STM32L412RBTxP
    , STM32L412T8Yx
    , STM32L412TBYx
    , STM32L412TBYxP
    , STM32L422CBTx
    , STM32L422CBUx
    , STM32L422KBTx
    , STM32L422KBUx
    , STM32L422RBIx
    , STM32L422RBTx
    , STM32L422TBYx
    , STM32L431CBTx
    , STM32L431CBUx
    , STM32L431CBYx
    , STM32L431CCTx
    , STM32L431CCUx
    , STM32L431CCYx
    , STM32L431KBUx
    , STM32L431KCUx
    , STM32L431RBIx
    , STM32L431RBTx
    , STM32L431RBYx
    , STM32L431RCIx
    , STM32L431RCTx
    , STM32L431RCYx
    , STM32L431VCIx
    , STM32L431VCTx
    , STM32L432KBUx
    , STM32L432KCUx
    , STM32L433CBTx
    , STM32L433CBUx
    , STM32L433CBYx
    , STM32L433CCTx
    , STM32L433CCUx
    , STM32L433CCYx
    , STM32L433RBIx
    , STM32L433RBTx
    , STM32L433RBYx
    , STM32L433RCIx
    , STM32L433RCTx
    , STM32L433RCTxP
    , STM32L433RCYx
    , STM32L433VCIx
    , STM32L433VCTx
    , STM32L442KCUx
    , STM32L443CCTx
    , STM32L443CCUx
    , STM32L443CCYx
    , STM32L443RCIx
    , STM32L443RCTx
    , STM32L443RCYx
    , STM32L443VCIx
    , STM32L443VCTx
    , STM32L451CCUx
    , STM32L451CEUx
    , STM32L451RCIx
    , STM32L451RCTx
    , STM32L451RCYx
    , STM32L451REIx
    , STM32L451RETx
    , STM32L451REYx
    , STM32L451VCIx
    , STM32L451VCTx
    , STM32L451VEIx
    , STM32L451VETx
    , STM32L452CCUx
    , STM32L452CEUx
    , STM32L452RCIx
    , STM32L452RCTx
    , STM32L452RCYx
    , STM32L452REIx
    , STM32L452RETx
    , STM32L452RETxP
    , STM32L452REYx
    , STM32L452VCIx
    , STM32L452VCTx
    , STM32L452VEIx
    , STM32L452VETx
    , STM32L462CEUx
    , STM32L462REIx
    , STM32L462RETx
    , STM32L462REYx
    , STM32L462VEIx
    , STM32L462VETx
    , STM32L471QEIx
    , STM32L471QGIx
    , STM32L471RETx
    , STM32L471RGTx
    , STM32L471VETx
    , STM32L471VGTx
    , STM32L471ZEJx
    , STM32L471ZETx
    , STM32L471ZGJx
    , STM32L471ZGTx
    , STM32L475RCTx
    , STM32L475RETx
    , STM32L475RGTx
    , STM32L475VCTx
    , STM32L475VETx
    , STM32L475VGTx
    , STM32L476JEYx
    , STM32L476JGYx
    , STM32L476JGYxP
    , STM32L476MEYx
    , STM32L476MGYx
    , STM32L476QEIx
    , STM32L476QGIx
    , STM32L476RCTx
    , STM32L476RETx
    , STM32L476RGTx
    , STM32L476VCTx
    , STM32L476VETx
    , STM32L476VGTx
    , STM32L476ZETx
    , STM32L476ZGJx
    , STM32L476ZGTx
    , STM32L476ZGTxP
    , STM32L485JCYx
    , STM32L485JEYx
    , STM32L486JGYx
    , STM32L486QGIx
    , STM32L486RGTx
    , STM32L486VGTx
    , STM32L486ZGTx
    , STM32L496AEIx
    , STM32L496AGIx
    , STM32L496AGIxP
    , STM32L496QEIx
    , STM32L496QGIx
    , STM32L496QGIxP
    , STM32L496RETx
    , STM32L496RGTx
    , STM32L496RGTxP
    , STM32L496VETx
    , STM32L496VGTx
    , STM32L496VGYx
    , STM32L496VGYxP
    , STM32L496ZETx
    , STM32L496ZGTx
    , STM32L496ZGTxP
    , STM32L4A6AGIx
    , STM32L4A6AGIxP
    , STM32L4A6QGIx
    , STM32L4A6QGIxP
    , STM32L4A6RGTx
    , STM32L4A6RGTxP
    , STM32L4A6VGTx
    , STM32L4A6VGYx
    , STM32L4A6VGYxP
    , STM32L4A6ZGTx
    , STM32L4A6ZGTxP
    };

enum mcu_svd_t
    { STM32L412
    , STM32L476
    , STM32L496
    , STM32L4x1
    , STM32L4x2
    , STM32L4x3
    , STM32L4x5
    , STM32L4x6
    };

enum gpio_conf_t
    { STM32L41x = 0x1
    , STM32L43x = 0x2
    , STM32L45x = 0x4
    , STM32L47x = 0x8
    , STM32L49x = 0x10
    , STM32L4Rx = 0x20
    };

template<mcu_t MCU> struct mcu_traits {};

template<> struct mcu_traits<STM32L431CBTx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x1;
    static constexpr gpio_conf_t gpio_conf = STM32L43x;
};

template<> struct mcu_traits<STM32L431CCTx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x1;
    static constexpr gpio_conf_t gpio_conf = STM32L43x;
};

template<> struct mcu_traits<STM32L431CBUx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x1;
    static constexpr gpio_conf_t gpio_conf = STM32L43x;
};

template<> struct mcu_traits<STM32L431CCUx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x1;
    static constexpr gpio_conf_t gpio_conf = STM32L43x;
};

template<> struct mcu_traits<STM32L431CBYx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x1;
    static constexpr gpio_conf_t gpio_conf = STM32L43x;
};

template<> struct mcu_traits<STM32L431CCYx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x1;
    static constexpr gpio_conf_t gpio_conf = STM32L43x;
};

template<> struct mcu_traits<STM32L431KBUx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x1;
    static constexpr gpio_conf_t gpio_conf = STM32L43x;
};

template<> struct mcu_traits<STM32L431KCUx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x1;
    static constexpr gpio_conf_t gpio_conf = STM32L43x;
};

template<> struct mcu_traits<STM32L431RBIx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x1;
    static constexpr gpio_conf_t gpio_conf = STM32L43x;
};

template<> struct mcu_traits<STM32L431RCIx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x1;
    static constexpr gpio_conf_t gpio_conf = STM32L43x;
};

template<> struct mcu_traits<STM32L431RBTx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x1;
    static constexpr gpio_conf_t gpio_conf = STM32L43x;
};

template<> struct mcu_traits<STM32L431RCTx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x1;
    static constexpr gpio_conf_t gpio_conf = STM32L43x;
};

template<> struct mcu_traits<STM32L431RBYx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x1;
    static constexpr gpio_conf_t gpio_conf = STM32L43x;
};

template<> struct mcu_traits<STM32L431RCYx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x1;
    static constexpr gpio_conf_t gpio_conf = STM32L43x;
};

template<> struct mcu_traits<STM32L431VCIx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x1;
    static constexpr gpio_conf_t gpio_conf = STM32L43x;
};

template<> struct mcu_traits<STM32L431VCTx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x1;
    static constexpr gpio_conf_t gpio_conf = STM32L43x;
};

template<> struct mcu_traits<STM32L451CCUx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x1;
    static constexpr gpio_conf_t gpio_conf = STM32L45x;
};

template<> struct mcu_traits<STM32L451CEUx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x1;
    static constexpr gpio_conf_t gpio_conf = STM32L45x;
};

template<> struct mcu_traits<STM32L451RCIx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x1;
    static constexpr gpio_conf_t gpio_conf = STM32L45x;
};

template<> struct mcu_traits<STM32L451REIx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x1;
    static constexpr gpio_conf_t gpio_conf = STM32L45x;
};

template<> struct mcu_traits<STM32L451RCTx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x1;
    static constexpr gpio_conf_t gpio_conf = STM32L45x;
};

template<> struct mcu_traits<STM32L451RETx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x1;
    static constexpr gpio_conf_t gpio_conf = STM32L45x;
};

template<> struct mcu_traits<STM32L451RCYx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x1;
    static constexpr gpio_conf_t gpio_conf = STM32L45x;
};

template<> struct mcu_traits<STM32L451REYx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x1;
    static constexpr gpio_conf_t gpio_conf = STM32L45x;
};

template<> struct mcu_traits<STM32L451VCIx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x1;
    static constexpr gpio_conf_t gpio_conf = STM32L45x;
};

template<> struct mcu_traits<STM32L451VEIx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x1;
    static constexpr gpio_conf_t gpio_conf = STM32L45x;
};

template<> struct mcu_traits<STM32L451VCTx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x1;
    static constexpr gpio_conf_t gpio_conf = STM32L45x;
};

template<> struct mcu_traits<STM32L451VETx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x1;
    static constexpr gpio_conf_t gpio_conf = STM32L45x;
};

template<> struct mcu_traits<STM32L471QEIx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x1;
    static constexpr gpio_conf_t gpio_conf = STM32L47x;
};

template<> struct mcu_traits<STM32L471QGIx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x1;
    static constexpr gpio_conf_t gpio_conf = STM32L47x;
};

template<> struct mcu_traits<STM32L471RETx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x1;
    static constexpr gpio_conf_t gpio_conf = STM32L47x;
};

template<> struct mcu_traits<STM32L471RGTx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x1;
    static constexpr gpio_conf_t gpio_conf = STM32L47x;
};

template<> struct mcu_traits<STM32L471VETx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x1;
    static constexpr gpio_conf_t gpio_conf = STM32L47x;
};

template<> struct mcu_traits<STM32L471VGTx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x1;
    static constexpr gpio_conf_t gpio_conf = STM32L47x;
};

template<> struct mcu_traits<STM32L471ZEJx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x1;
    static constexpr gpio_conf_t gpio_conf = STM32L47x;
};

template<> struct mcu_traits<STM32L471ZGJx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x1;
    static constexpr gpio_conf_t gpio_conf = STM32L47x;
};

template<> struct mcu_traits<STM32L471ZETx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x1;
    static constexpr gpio_conf_t gpio_conf = STM32L47x;
};

template<> struct mcu_traits<STM32L471ZGTx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x1;
    static constexpr gpio_conf_t gpio_conf = STM32L47x;
};

template<> struct mcu_traits<STM32L412C8Tx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L412;
    static constexpr gpio_conf_t gpio_conf = STM32L41x;
};

template<> struct mcu_traits<STM32L412C8Ux>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L412;
    static constexpr gpio_conf_t gpio_conf = STM32L41x;
};

template<> struct mcu_traits<STM32L412CBTx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L412;
    static constexpr gpio_conf_t gpio_conf = STM32L41x;
};

template<> struct mcu_traits<STM32L412CBTxP>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L412;
    static constexpr gpio_conf_t gpio_conf = STM32L41x;
};

template<> struct mcu_traits<STM32L412CBUx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L412;
    static constexpr gpio_conf_t gpio_conf = STM32L41x;
};

template<> struct mcu_traits<STM32L412CBUxP>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L412;
    static constexpr gpio_conf_t gpio_conf = STM32L41x;
};

template<> struct mcu_traits<STM32L412K8Tx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L412;
    static constexpr gpio_conf_t gpio_conf = STM32L41x;
};

template<> struct mcu_traits<STM32L412K8Ux>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L412;
    static constexpr gpio_conf_t gpio_conf = STM32L41x;
};

template<> struct mcu_traits<STM32L412KBTx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L412;
    static constexpr gpio_conf_t gpio_conf = STM32L41x;
};

template<> struct mcu_traits<STM32L412KBUx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L412;
    static constexpr gpio_conf_t gpio_conf = STM32L41x;
};

template<> struct mcu_traits<STM32L412R8Ix>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L412;
    static constexpr gpio_conf_t gpio_conf = STM32L41x;
};

template<> struct mcu_traits<STM32L412R8Tx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L412;
    static constexpr gpio_conf_t gpio_conf = STM32L41x;
};

template<> struct mcu_traits<STM32L412RBIx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L412;
    static constexpr gpio_conf_t gpio_conf = STM32L41x;
};

template<> struct mcu_traits<STM32L412RBIxP>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L412;
    static constexpr gpio_conf_t gpio_conf = STM32L41x;
};

template<> struct mcu_traits<STM32L412RBTx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L412;
    static constexpr gpio_conf_t gpio_conf = STM32L41x;
};

template<> struct mcu_traits<STM32L412RBTxP>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L412;
    static constexpr gpio_conf_t gpio_conf = STM32L41x;
};

template<> struct mcu_traits<STM32L412T8Yx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L412;
    static constexpr gpio_conf_t gpio_conf = STM32L41x;
};

template<> struct mcu_traits<STM32L412TBYx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L412;
    static constexpr gpio_conf_t gpio_conf = STM32L41x;
};

template<> struct mcu_traits<STM32L412TBYxP>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L412;
    static constexpr gpio_conf_t gpio_conf = STM32L41x;
};

template<> struct mcu_traits<STM32L422CBTx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x2;
    static constexpr gpio_conf_t gpio_conf = STM32L41x;
};

template<> struct mcu_traits<STM32L422CBUx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x2;
    static constexpr gpio_conf_t gpio_conf = STM32L41x;
};

template<> struct mcu_traits<STM32L422KBTx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x2;
    static constexpr gpio_conf_t gpio_conf = STM32L41x;
};

template<> struct mcu_traits<STM32L422KBUx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x2;
    static constexpr gpio_conf_t gpio_conf = STM32L41x;
};

template<> struct mcu_traits<STM32L422RBIx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x2;
    static constexpr gpio_conf_t gpio_conf = STM32L41x;
};

template<> struct mcu_traits<STM32L422RBTx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x2;
    static constexpr gpio_conf_t gpio_conf = STM32L41x;
};

template<> struct mcu_traits<STM32L422TBYx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x2;
    static constexpr gpio_conf_t gpio_conf = STM32L41x;
};

template<> struct mcu_traits<STM32L432KBUx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x2;
    static constexpr gpio_conf_t gpio_conf = STM32L43x;
};

template<> struct mcu_traits<STM32L432KCUx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x2;
    static constexpr gpio_conf_t gpio_conf = STM32L43x;
};

template<> struct mcu_traits<STM32L442KCUx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x2;
    static constexpr gpio_conf_t gpio_conf = STM32L43x;
};

template<> struct mcu_traits<STM32L452CCUx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x2;
    static constexpr gpio_conf_t gpio_conf = STM32L45x;
};

template<> struct mcu_traits<STM32L452CEUx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x2;
    static constexpr gpio_conf_t gpio_conf = STM32L45x;
};

template<> struct mcu_traits<STM32L452RCIx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x2;
    static constexpr gpio_conf_t gpio_conf = STM32L45x;
};

template<> struct mcu_traits<STM32L452REIx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x2;
    static constexpr gpio_conf_t gpio_conf = STM32L45x;
};

template<> struct mcu_traits<STM32L452RCTx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x2;
    static constexpr gpio_conf_t gpio_conf = STM32L45x;
};

template<> struct mcu_traits<STM32L452RETx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x2;
    static constexpr gpio_conf_t gpio_conf = STM32L45x;
};

template<> struct mcu_traits<STM32L452RCYx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x2;
    static constexpr gpio_conf_t gpio_conf = STM32L45x;
};

template<> struct mcu_traits<STM32L452REYx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x2;
    static constexpr gpio_conf_t gpio_conf = STM32L45x;
};

template<> struct mcu_traits<STM32L452RETxP>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x2;
    static constexpr gpio_conf_t gpio_conf = STM32L45x;
};

template<> struct mcu_traits<STM32L452VCIx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x2;
    static constexpr gpio_conf_t gpio_conf = STM32L45x;
};

template<> struct mcu_traits<STM32L452VEIx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x2;
    static constexpr gpio_conf_t gpio_conf = STM32L45x;
};

template<> struct mcu_traits<STM32L452VCTx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x2;
    static constexpr gpio_conf_t gpio_conf = STM32L45x;
};

template<> struct mcu_traits<STM32L452VETx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x2;
    static constexpr gpio_conf_t gpio_conf = STM32L45x;
};

template<> struct mcu_traits<STM32L462CEUx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x2;
    static constexpr gpio_conf_t gpio_conf = STM32L45x;
};

template<> struct mcu_traits<STM32L462REIx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x2;
    static constexpr gpio_conf_t gpio_conf = STM32L45x;
};

template<> struct mcu_traits<STM32L462RETx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x2;
    static constexpr gpio_conf_t gpio_conf = STM32L45x;
};

template<> struct mcu_traits<STM32L462REYx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x2;
    static constexpr gpio_conf_t gpio_conf = STM32L45x;
};

template<> struct mcu_traits<STM32L462VEIx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x2;
    static constexpr gpio_conf_t gpio_conf = STM32L45x;
};

template<> struct mcu_traits<STM32L462VETx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x2;
    static constexpr gpio_conf_t gpio_conf = STM32L45x;
};

template<> struct mcu_traits<STM32L433CBTx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x3;
    static constexpr gpio_conf_t gpio_conf = STM32L43x;
};

template<> struct mcu_traits<STM32L433CCTx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x3;
    static constexpr gpio_conf_t gpio_conf = STM32L43x;
};

template<> struct mcu_traits<STM32L433CBUx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x3;
    static constexpr gpio_conf_t gpio_conf = STM32L43x;
};

template<> struct mcu_traits<STM32L433CCUx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x3;
    static constexpr gpio_conf_t gpio_conf = STM32L43x;
};

template<> struct mcu_traits<STM32L433CBYx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x3;
    static constexpr gpio_conf_t gpio_conf = STM32L43x;
};

template<> struct mcu_traits<STM32L433CCYx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x3;
    static constexpr gpio_conf_t gpio_conf = STM32L43x;
};

template<> struct mcu_traits<STM32L433RBIx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x3;
    static constexpr gpio_conf_t gpio_conf = STM32L43x;
};

template<> struct mcu_traits<STM32L433RCIx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x3;
    static constexpr gpio_conf_t gpio_conf = STM32L43x;
};

template<> struct mcu_traits<STM32L433RBTx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x3;
    static constexpr gpio_conf_t gpio_conf = STM32L43x;
};

template<> struct mcu_traits<STM32L433RCTx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x3;
    static constexpr gpio_conf_t gpio_conf = STM32L43x;
};

template<> struct mcu_traits<STM32L433RBYx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x3;
    static constexpr gpio_conf_t gpio_conf = STM32L43x;
};

template<> struct mcu_traits<STM32L433RCYx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x3;
    static constexpr gpio_conf_t gpio_conf = STM32L43x;
};

template<> struct mcu_traits<STM32L433RCTxP>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x3;
    static constexpr gpio_conf_t gpio_conf = STM32L43x;
};

template<> struct mcu_traits<STM32L433VCIx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x3;
    static constexpr gpio_conf_t gpio_conf = STM32L43x;
};

template<> struct mcu_traits<STM32L433VCTx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x3;
    static constexpr gpio_conf_t gpio_conf = STM32L43x;
};

template<> struct mcu_traits<STM32L443CCTx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x3;
    static constexpr gpio_conf_t gpio_conf = STM32L43x;
};

template<> struct mcu_traits<STM32L443CCUx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x3;
    static constexpr gpio_conf_t gpio_conf = STM32L43x;
};

template<> struct mcu_traits<STM32L443CCYx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x3;
    static constexpr gpio_conf_t gpio_conf = STM32L43x;
};

template<> struct mcu_traits<STM32L443RCIx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x3;
    static constexpr gpio_conf_t gpio_conf = STM32L43x;
};

template<> struct mcu_traits<STM32L443RCTx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x3;
    static constexpr gpio_conf_t gpio_conf = STM32L43x;
};

template<> struct mcu_traits<STM32L443RCYx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x3;
    static constexpr gpio_conf_t gpio_conf = STM32L43x;
};

template<> struct mcu_traits<STM32L443VCIx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x3;
    static constexpr gpio_conf_t gpio_conf = STM32L43x;
};

template<> struct mcu_traits<STM32L443VCTx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x3;
    static constexpr gpio_conf_t gpio_conf = STM32L43x;
};

template<> struct mcu_traits<STM32L475RCTx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x5;
    static constexpr gpio_conf_t gpio_conf = STM32L47x;
};

template<> struct mcu_traits<STM32L475RETx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x5;
    static constexpr gpio_conf_t gpio_conf = STM32L47x;
};

template<> struct mcu_traits<STM32L475RGTx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x5;
    static constexpr gpio_conf_t gpio_conf = STM32L47x;
};

template<> struct mcu_traits<STM32L475VCTx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x5;
    static constexpr gpio_conf_t gpio_conf = STM32L47x;
};

template<> struct mcu_traits<STM32L475VETx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x5;
    static constexpr gpio_conf_t gpio_conf = STM32L47x;
};

template<> struct mcu_traits<STM32L475VGTx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x5;
    static constexpr gpio_conf_t gpio_conf = STM32L47x;
};

template<> struct mcu_traits<STM32L485JCYx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x5;
    static constexpr gpio_conf_t gpio_conf = STM32L47x;
};

template<> struct mcu_traits<STM32L485JEYx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x5;
    static constexpr gpio_conf_t gpio_conf = STM32L47x;
};

template<> struct mcu_traits<STM32L476JEYx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L476;
    static constexpr gpio_conf_t gpio_conf = STM32L47x;
};

template<> struct mcu_traits<STM32L476JGYx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L476;
    static constexpr gpio_conf_t gpio_conf = STM32L47x;
};

template<> struct mcu_traits<STM32L476JGYxP>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L476;
    static constexpr gpio_conf_t gpio_conf = STM32L47x;
};

template<> struct mcu_traits<STM32L476MEYx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L476;
    static constexpr gpio_conf_t gpio_conf = STM32L47x;
};

template<> struct mcu_traits<STM32L476MGYx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L476;
    static constexpr gpio_conf_t gpio_conf = STM32L47x;
};

template<> struct mcu_traits<STM32L476QEIx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L476;
    static constexpr gpio_conf_t gpio_conf = STM32L47x;
};

template<> struct mcu_traits<STM32L476QGIx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L476;
    static constexpr gpio_conf_t gpio_conf = STM32L47x;
};

template<> struct mcu_traits<STM32L476RCTx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L476;
    static constexpr gpio_conf_t gpio_conf = STM32L47x;
};

template<> struct mcu_traits<STM32L476RETx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L476;
    static constexpr gpio_conf_t gpio_conf = STM32L47x;
};

template<> struct mcu_traits<STM32L476RGTx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L476;
    static constexpr gpio_conf_t gpio_conf = STM32L47x;
};

template<> struct mcu_traits<STM32L476VCTx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L476;
    static constexpr gpio_conf_t gpio_conf = STM32L47x;
};

template<> struct mcu_traits<STM32L476VETx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L476;
    static constexpr gpio_conf_t gpio_conf = STM32L47x;
};

template<> struct mcu_traits<STM32L476VGTx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L476;
    static constexpr gpio_conf_t gpio_conf = STM32L47x;
};

template<> struct mcu_traits<STM32L476ZETx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L476;
    static constexpr gpio_conf_t gpio_conf = STM32L47x;
};

template<> struct mcu_traits<STM32L476ZGTx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L476;
    static constexpr gpio_conf_t gpio_conf = STM32L47x;
};

template<> struct mcu_traits<STM32L476ZGJx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L476;
    static constexpr gpio_conf_t gpio_conf = STM32L47x;
};

template<> struct mcu_traits<STM32L476ZGTxP>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L476;
    static constexpr gpio_conf_t gpio_conf = STM32L47x;
};

template<> struct mcu_traits<STM32L486JGYx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x6;
    static constexpr gpio_conf_t gpio_conf = STM32L47x;
};

template<> struct mcu_traits<STM32L486QGIx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x6;
    static constexpr gpio_conf_t gpio_conf = STM32L47x;
};

template<> struct mcu_traits<STM32L486RGTx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x6;
    static constexpr gpio_conf_t gpio_conf = STM32L47x;
};

template<> struct mcu_traits<STM32L486VGTx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x6;
    static constexpr gpio_conf_t gpio_conf = STM32L47x;
};

template<> struct mcu_traits<STM32L486ZGTx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x6;
    static constexpr gpio_conf_t gpio_conf = STM32L47x;
};

template<> struct mcu_traits<STM32L496AEIx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L496;
    static constexpr gpio_conf_t gpio_conf = STM32L49x;
};

template<> struct mcu_traits<STM32L496AGIx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L496;
    static constexpr gpio_conf_t gpio_conf = STM32L49x;
};

template<> struct mcu_traits<STM32L496AGIxP>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L496;
    static constexpr gpio_conf_t gpio_conf = STM32L49x;
};

template<> struct mcu_traits<STM32L496QEIx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L496;
    static constexpr gpio_conf_t gpio_conf = STM32L49x;
};

template<> struct mcu_traits<STM32L496QGIx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L496;
    static constexpr gpio_conf_t gpio_conf = STM32L49x;
};

template<> struct mcu_traits<STM32L496QGIxP>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L496;
    static constexpr gpio_conf_t gpio_conf = STM32L49x;
};

template<> struct mcu_traits<STM32L496RETx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L496;
    static constexpr gpio_conf_t gpio_conf = STM32L49x;
};

template<> struct mcu_traits<STM32L496RGTx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L496;
    static constexpr gpio_conf_t gpio_conf = STM32L49x;
};

template<> struct mcu_traits<STM32L496RGTxP>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L496;
    static constexpr gpio_conf_t gpio_conf = STM32L49x;
};

template<> struct mcu_traits<STM32L496VETx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L496;
    static constexpr gpio_conf_t gpio_conf = STM32L49x;
};

template<> struct mcu_traits<STM32L496VGTx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L496;
    static constexpr gpio_conf_t gpio_conf = STM32L49x;
};

template<> struct mcu_traits<STM32L496VGYx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L496;
    static constexpr gpio_conf_t gpio_conf = STM32L49x;
};

template<> struct mcu_traits<STM32L496VGYxP>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L496;
    static constexpr gpio_conf_t gpio_conf = STM32L49x;
};

template<> struct mcu_traits<STM32L496ZETx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L496;
    static constexpr gpio_conf_t gpio_conf = STM32L49x;
};

template<> struct mcu_traits<STM32L496ZGTx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L496;
    static constexpr gpio_conf_t gpio_conf = STM32L49x;
};

template<> struct mcu_traits<STM32L496ZGTxP>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L496;
    static constexpr gpio_conf_t gpio_conf = STM32L49x;
};

template<> struct mcu_traits<STM32L4A6AGIx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x6;
    static constexpr gpio_conf_t gpio_conf = STM32L49x;
};

template<> struct mcu_traits<STM32L4A6AGIxP>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x6;
    static constexpr gpio_conf_t gpio_conf = STM32L49x;
};

template<> struct mcu_traits<STM32L4A6QGIx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x6;
    static constexpr gpio_conf_t gpio_conf = STM32L49x;
};

template<> struct mcu_traits<STM32L4A6QGIxP>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x6;
    static constexpr gpio_conf_t gpio_conf = STM32L49x;
};

template<> struct mcu_traits<STM32L4A6RGTx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x6;
    static constexpr gpio_conf_t gpio_conf = STM32L49x;
};

template<> struct mcu_traits<STM32L4A6RGTxP>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x6;
    static constexpr gpio_conf_t gpio_conf = STM32L49x;
};

template<> struct mcu_traits<STM32L4A6VGTx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x6;
    static constexpr gpio_conf_t gpio_conf = STM32L49x;
};

template<> struct mcu_traits<STM32L4A6VGYx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x6;
    static constexpr gpio_conf_t gpio_conf = STM32L49x;
};

template<> struct mcu_traits<STM32L4A6VGYxP>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x6;
    static constexpr gpio_conf_t gpio_conf = STM32L49x;
};

template<> struct mcu_traits<STM32L4A6ZGTx>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x6;
    static constexpr gpio_conf_t gpio_conf = STM32L49x;
};

template<> struct mcu_traits<STM32L4A6ZGTxP>
{
    static constexpr mcu_family_t mcu_family = STM32L4;
    static constexpr mcu_svd_t mcu_svd = STM32L4x6;
    static constexpr gpio_conf_t gpio_conf = STM32L49x;
};

static constexpr mcu_t target = MCU;
