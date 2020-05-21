#pragma once

////
//
//      STM32H7 MCUs
//
////

enum mcu_t
    { STM32H742AGIx
    , STM32H742AIIx
    , STM32H742BGTx
    , STM32H742BITx
    , STM32H742IGKx
    , STM32H742IGTx
    , STM32H742IIKx
    , STM32H742IITx
    , STM32H742VGHx
    , STM32H742VGTx
    , STM32H742VIHx
    , STM32H742VITx
    , STM32H742XGHx
    , STM32H742XIHx
    , STM32H742ZGTx
    , STM32H742ZITx
    , STM32H743AGIx
    , STM32H743AIIx
    , STM32H743BGTx
    , STM32H743BITx
    , STM32H743IGKx
    , STM32H743IGTx
    , STM32H743IIKx
    , STM32H743IITx
    , STM32H743VGHx
    , STM32H743VGTx
    , STM32H743VIHx
    , STM32H743VITx
    , STM32H743XGHx
    , STM32H743XIHx
    , STM32H743ZGTx
    , STM32H743ZITx
    , STM32H745BGTx
    , STM32H745BITx
    , STM32H745IGKx
    , STM32H745IGTx
    , STM32H745IIKx
    , STM32H745IITx
    , STM32H745XGHx
    , STM32H745XIHx
    , STM32H745ZGTx
    , STM32H745ZITx
    , STM32H747AGIx
    , STM32H747AIIx
    , STM32H747BGTx
    , STM32H747BITx
    , STM32H747IGTx
    , STM32H747IITx
    , STM32H747XGHx
    , STM32H747XIHx
    , STM32H747ZIYx
    , STM32H750IBKx
    , STM32H750IBTx
    , STM32H750VBTx
    , STM32H750XBHx
    , STM32H750ZBTx
    , STM32H753AIIx
    , STM32H753BITx
    , STM32H753IIKx
    , STM32H753IITx
    , STM32H753VIHx
    , STM32H753VITx
    , STM32H753XIHx
    , STM32H753ZITx
    , STM32H755BITx
    , STM32H755IIKx
    , STM32H755IITx
    , STM32H755XIHx
    , STM32H755ZITx
    , STM32H757AIIx
    , STM32H757BITx
    , STM32H757IITx
    , STM32H757XIHx
    , STM32H757ZIYx
    , STM32H7A3AGIxQ
    , STM32H7A3AIIxQ
    , STM32H7A3IGKx
    , STM32H7A3IGKxQ
    , STM32H7A3IGTx
    , STM32H7A3IGTxQ
    , STM32H7A3IIKx
    , STM32H7A3IIKxQ
    , STM32H7A3IITx
    , STM32H7A3IITxQ
    , STM32H7A3LGHxQ
    , STM32H7A3LIHxQ
    , STM32H7A3NGHx
    , STM32H7A3NIHx
    , STM32H7A3QIYxQ
    , STM32H7A3RGTx
    , STM32H7A3RITx
    , STM32H7A3VGHx
    , STM32H7A3VGHxQ
    , STM32H7A3VGTx
    , STM32H7A3VGTxQ
    , STM32H7A3VIHx
    , STM32H7A3VIHxQ
    , STM32H7A3VITx
    , STM32H7A3VITxQ
    , STM32H7A3ZGTx
    , STM32H7A3ZGTxQ
    , STM32H7A3ZITx
    , STM32H7A3ZITxQ
    , STM32H7B0ABIxQ
    , STM32H7B0IBKxQ
    , STM32H7B0IBTx
    , STM32H7B0RBTx
    , STM32H7B0VBTx
    , STM32H7B0ZBTx
    , STM32H7B3AIIxQ
    , STM32H7B3IIKx
    , STM32H7B3IIKxQ
    , STM32H7B3IITx
    , STM32H7B3IITxQ
    , STM32H7B3LIHxQ
    , STM32H7B3NIHx
    , STM32H7B3QIYxQ
    , STM32H7B3RITx
    , STM32H7B3VIHx
    , STM32H7B3VIHxQ
    , STM32H7B3VITx
    , STM32H7B3VITxQ
    , STM32H7B3ZITx
    , STM32H7B3ZITxQ
    };

enum mcu_svd_t
    { STM32H742x
    , STM32H743
    , STM32H745_CM4
    , STM32H745_CM7
    , STM32H747_CM4
    , STM32H747_CM7
    , STM32H750x
    , STM32H753
    , STM32H755_CM4
    , STM32H755_CM7
    , STM32H757_CM4
    , STM32H757_CM7
    , STM32H7A3x
    , STM32H7B0x
    , STM32H7B3x
    };

enum gpio_conf_t
    { STM32H743 = 0x1
    , STM32H747 = 0x2
    , STM32H7A2 = 0x4
    };

template<mcu_t MCU> struct mcu_traits {};

template<> struct mcu_traits<STM32H742AGIx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H742x;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H742AIIx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H742x;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H742BGTx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H742x;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H742BITx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H742x;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H742IGKx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H742x;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H742IIKx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H742x;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H742IGTx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H742x;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H742IITx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H742x;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H742VGHx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H742x;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H742VIHx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H742x;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H742VGTx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H742x;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H742VITx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H742x;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H742XGHx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H742x;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H742XIHx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H742x;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H742ZGTx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H742x;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H742ZITx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H742x;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H743AGIx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H743;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H743AIIx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H743;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H743BGTx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H743;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H743BITx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H743;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H743IGKx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H743;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H743IGTx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H743;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H743IIKx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H743;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H743IITx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H743;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H743VGHx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H743;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H743VIHx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H743;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H743VGTx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H743;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H743VITx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H743;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H743XGHx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H743;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H743XIHx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H743;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H743ZGTx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H743;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H743ZITx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H743;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H753AIIx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H753;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H753BITx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H753;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H753IIKx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H753;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H753IITx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H753;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H753VIHx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H753;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H753VITx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H753;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H753XIHx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H753;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H753ZITx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H753;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H745BGTx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H745_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H745BITx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H745_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H745IGKx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H745_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H745IGTx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H745_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H745IIKx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H745_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H745IITx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H745_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H745XGHx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H745_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H745XIHx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H745_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H745ZGTx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H745_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H745ZITx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H745_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H755BITx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H755_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H755IIKx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H755_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H755IITx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H755_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H755XIHx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H755_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H755ZITx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H755_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H747AGIx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H747_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H747AIIx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H747_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H747BGTx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H747_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H747BITx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H747_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H747IGTx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H747_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H747IITx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H747_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H747XGHx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H747_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H747XIHx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H747_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H747ZIYx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H747_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H757AIIx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H757_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H757BITx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H757_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H757IITx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H757_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H757XIHx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H757_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H757ZIYx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H757_CM4;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H750IBKx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H750x;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H750IBTx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H750x;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H750VBTx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H750x;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H750XBHx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H750x;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H750ZBTx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H750x;
    static constexpr gpio_conf_t gpio_conf = STM32H747;
};

template<> struct mcu_traits<STM32H7A3AGIxQ>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H7A3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
};

template<> struct mcu_traits<STM32H7A3AIIxQ>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H7A3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
};

template<> struct mcu_traits<STM32H7A3IGKx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H7A3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
};

template<> struct mcu_traits<STM32H7A3IIKx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H7A3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
};

template<> struct mcu_traits<STM32H7A3IGKxQ>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H7A3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
};

template<> struct mcu_traits<STM32H7A3IIKxQ>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H7A3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
};

template<> struct mcu_traits<STM32H7A3IGTx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H7A3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
};

template<> struct mcu_traits<STM32H7A3IITx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H7A3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
};

template<> struct mcu_traits<STM32H7A3IGTxQ>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H7A3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
};

template<> struct mcu_traits<STM32H7A3IITxQ>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H7A3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
};

template<> struct mcu_traits<STM32H7A3LGHxQ>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H7A3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
};

template<> struct mcu_traits<STM32H7A3LIHxQ>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H7A3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
};

template<> struct mcu_traits<STM32H7A3NGHx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H7A3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
};

template<> struct mcu_traits<STM32H7A3NIHx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H7A3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
};

template<> struct mcu_traits<STM32H7A3QIYxQ>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H7A3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
};

template<> struct mcu_traits<STM32H7A3RGTx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H7A3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
};

template<> struct mcu_traits<STM32H7A3RITx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H7A3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
};

template<> struct mcu_traits<STM32H7A3VGHx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H7A3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
};

template<> struct mcu_traits<STM32H7A3VIHx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H7A3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
};

template<> struct mcu_traits<STM32H7A3VGHxQ>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H7A3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
};

template<> struct mcu_traits<STM32H7A3VIHxQ>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H7A3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
};

template<> struct mcu_traits<STM32H7A3VGTx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H7A3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
};

template<> struct mcu_traits<STM32H7A3VITx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H7A3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
};

template<> struct mcu_traits<STM32H7A3VGTxQ>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H7A3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
};

template<> struct mcu_traits<STM32H7A3VITxQ>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H7A3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
};

template<> struct mcu_traits<STM32H7A3ZGTx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H7A3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
};

template<> struct mcu_traits<STM32H7A3ZITx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H7A3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
};

template<> struct mcu_traits<STM32H7A3ZGTxQ>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H7A3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
};

template<> struct mcu_traits<STM32H7A3ZITxQ>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H7A3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
};

template<> struct mcu_traits<STM32H7B3AIIxQ>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H7B3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
};

template<> struct mcu_traits<STM32H7B3IIKx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H7B3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
};

template<> struct mcu_traits<STM32H7B3IIKxQ>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H7B3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
};

template<> struct mcu_traits<STM32H7B3IITx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H7B3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
};

template<> struct mcu_traits<STM32H7B3IITxQ>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H7B3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
};

template<> struct mcu_traits<STM32H7B3LIHxQ>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H7B3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
};

template<> struct mcu_traits<STM32H7B3NIHx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H7B3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
};

template<> struct mcu_traits<STM32H7B3QIYxQ>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H7B3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
};

template<> struct mcu_traits<STM32H7B3RITx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H7B3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
};

template<> struct mcu_traits<STM32H7B3VIHx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H7B3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
};

template<> struct mcu_traits<STM32H7B3VIHxQ>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H7B3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
};

template<> struct mcu_traits<STM32H7B3VITx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H7B3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
};

template<> struct mcu_traits<STM32H7B3VITxQ>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H7B3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
};

template<> struct mcu_traits<STM32H7B3ZITx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H7B3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
};

template<> struct mcu_traits<STM32H7B3ZITxQ>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H7B3x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
};

template<> struct mcu_traits<STM32H7B0ABIxQ>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H7B0x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
};

template<> struct mcu_traits<STM32H7B0IBKxQ>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H7B0x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
};

template<> struct mcu_traits<STM32H7B0IBTx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H7B0x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
};

template<> struct mcu_traits<STM32H7B0RBTx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H7B0x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
};

template<> struct mcu_traits<STM32H7B0VBTx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H7B0x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
};

template<> struct mcu_traits<STM32H7B0ZBTx>
{
    static constexpr mcu_family_t mcu_family = STM32H7;
    static constexpr mcu_svd_t mcu_svd = STM32H7B0x;
    static constexpr gpio_conf_t gpio_conf = STM32H7A2;
};

static constexpr mcu_t target = MCU;
