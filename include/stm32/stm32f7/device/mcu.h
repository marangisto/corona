#pragma once

////
//
//      STM32F7 MCUs
//
////

enum mcu_t
    { STM32F722ICKx
    , STM32F722ICTx
    , STM32F722IEKx
    , STM32F722IETx
    , STM32F722RCTx
    , STM32F722RETx
    , STM32F722VCTx
    , STM32F722VETx
    , STM32F722ZCTx
    , STM32F722ZETx
    , STM32F723ICKx
    , STM32F723ICTx
    , STM32F723IEKx
    , STM32F723IETx
    , STM32F723VEYx
    , STM32F723ZCIx
    , STM32F723ZCTx
    , STM32F723ZEIx
    , STM32F723ZETx
    , STM32F730I8Kx
    , STM32F730R8Tx
    , STM32F730V8Tx
    , STM32F730Z8Tx
    , STM32F732IEKx
    , STM32F732IETx
    , STM32F732RETx
    , STM32F732VETx
    , STM32F732ZETx
    , STM32F733IEKx
    , STM32F733IETx
    , STM32F733VEYx
    , STM32F733ZEIx
    , STM32F733ZETx
    , STM32F745IEKx
    , STM32F745IETx
    , STM32F745IGKx
    , STM32F745IGTx
    , STM32F745VEHx
    , STM32F745VETx
    , STM32F745VGHx
    , STM32F745VGTx
    , STM32F745ZETx
    , STM32F745ZGTx
    , STM32F746BETx
    , STM32F746BGTx
    , STM32F746IEKx
    , STM32F746IETx
    , STM32F746IGKx
    , STM32F746IGTx
    , STM32F746NEHx
    , STM32F746NGHx
    , STM32F746VEHx
    , STM32F746VETx
    , STM32F746VGHx
    , STM32F746VGTx
    , STM32F746ZETx
    , STM32F746ZEYx
    , STM32F746ZGTx
    , STM32F746ZGYx
    , STM32F750N8Hx
    , STM32F750V8Tx
    , STM32F750Z8Tx
    , STM32F756BGTx
    , STM32F756IGKx
    , STM32F756IGTx
    , STM32F756NGHx
    , STM32F756VGHx
    , STM32F756VGTx
    , STM32F756ZGTx
    , STM32F756ZGYx
    , STM32F765BGTx
    , STM32F765BITx
    , STM32F765IGKx
    , STM32F765IGTx
    , STM32F765IIKx
    , STM32F765IITx
    , STM32F765NGHx
    , STM32F765NIHx
    , STM32F765VGHx
    , STM32F765VGTx
    , STM32F765VIHx
    , STM32F765VITx
    , STM32F765ZGTx
    , STM32F765ZITx
    , STM32F767BGTx
    , STM32F767BITx
    , STM32F767IGKx
    , STM32F767IGTx
    , STM32F767IIKx
    , STM32F767IITx
    , STM32F767NGHx
    , STM32F767NIHx
    , STM32F767VGHx
    , STM32F767VGTx
    , STM32F767VIHx
    , STM32F767VITx
    , STM32F767ZGTx
    , STM32F767ZITx
    , STM32F769AIYx
    , STM32F769BGTx
    , STM32F769BITx
    , STM32F769IGTx
    , STM32F769IITx
    , STM32F769NGHx
    , STM32F769NIHx
    , STM32F777BITx
    , STM32F777IIKx
    , STM32F777IITx
    , STM32F777NIHx
    , STM32F777VIHx
    , STM32F777VITx
    , STM32F777ZITx
    , STM32F778AIYx
    , STM32F779AIYx
    , STM32F779BITx
    , STM32F779IITx
    , STM32F779NIHx
    };

enum mcu_svd_t
    { STM32F722
    , STM32F723
    , STM32F730
    , STM32F732
    , STM32F733
    , STM32F745
    , STM32F746
    , STM32F750x
    , STM32F756
    , STM32F765
    , STM32F767
    , STM32F768
    , STM32F769
    , STM32F777
    , STM32F778
    , STM32F779
    };

enum gpio_conf_t
    { STM32F72x = 0x1
    , STM32F746 = 0x2
    , STM32F76x = 0x4
    };

template<mcu_t MCU> struct mcu_traits {};

template<> struct mcu_traits<STM32F730I8Kx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F730;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
};

template<> struct mcu_traits<STM32F730R8Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F730;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
};

template<> struct mcu_traits<STM32F730V8Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F730;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
};

template<> struct mcu_traits<STM32F730Z8Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F730;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
};

template<> struct mcu_traits<STM32F750N8Hx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F750x;
    static constexpr gpio_conf_t gpio_conf = STM32F746;
};

template<> struct mcu_traits<STM32F750V8Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F750x;
    static constexpr gpio_conf_t gpio_conf = STM32F746;
};

template<> struct mcu_traits<STM32F750Z8Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F750x;
    static constexpr gpio_conf_t gpio_conf = STM32F746;
};

template<> struct mcu_traits<STM32F722ICKx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F722;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
};

template<> struct mcu_traits<STM32F722IEKx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F722;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
};

template<> struct mcu_traits<STM32F722ICTx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F722;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
};

template<> struct mcu_traits<STM32F722IETx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F722;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
};

template<> struct mcu_traits<STM32F722RCTx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F722;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
};

template<> struct mcu_traits<STM32F722RETx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F722;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
};

template<> struct mcu_traits<STM32F722VCTx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F722;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
};

template<> struct mcu_traits<STM32F722VETx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F722;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
};

template<> struct mcu_traits<STM32F722ZCTx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F722;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
};

template<> struct mcu_traits<STM32F722ZETx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F722;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
};

template<> struct mcu_traits<STM32F732IEKx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F732;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
};

template<> struct mcu_traits<STM32F732IETx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F732;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
};

template<> struct mcu_traits<STM32F732RETx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F732;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
};

template<> struct mcu_traits<STM32F732VETx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F732;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
};

template<> struct mcu_traits<STM32F732ZETx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F732;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
};

template<> struct mcu_traits<STM32F723ICKx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F723;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
};

template<> struct mcu_traits<STM32F723IEKx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F723;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
};

template<> struct mcu_traits<STM32F723ICTx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F723;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
};

template<> struct mcu_traits<STM32F723IETx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F723;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
};

template<> struct mcu_traits<STM32F723VEYx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F723;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
};

template<> struct mcu_traits<STM32F723ZCIx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F723;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
};

template<> struct mcu_traits<STM32F723ZEIx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F723;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
};

template<> struct mcu_traits<STM32F723ZCTx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F723;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
};

template<> struct mcu_traits<STM32F723ZETx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F723;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
};

template<> struct mcu_traits<STM32F733IEKx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F733;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
};

template<> struct mcu_traits<STM32F733IETx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F733;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
};

template<> struct mcu_traits<STM32F733VEYx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F733;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
};

template<> struct mcu_traits<STM32F733ZEIx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F733;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
};

template<> struct mcu_traits<STM32F733ZETx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F733;
    static constexpr gpio_conf_t gpio_conf = STM32F72x;
};

template<> struct mcu_traits<STM32F745IEKx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F745;
    static constexpr gpio_conf_t gpio_conf = STM32F746;
};

template<> struct mcu_traits<STM32F745IGKx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F745;
    static constexpr gpio_conf_t gpio_conf = STM32F746;
};

template<> struct mcu_traits<STM32F745IETx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F745;
    static constexpr gpio_conf_t gpio_conf = STM32F746;
};

template<> struct mcu_traits<STM32F745IGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F745;
    static constexpr gpio_conf_t gpio_conf = STM32F746;
};

template<> struct mcu_traits<STM32F745VEHx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F745;
    static constexpr gpio_conf_t gpio_conf = STM32F746;
};

template<> struct mcu_traits<STM32F745VGHx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F745;
    static constexpr gpio_conf_t gpio_conf = STM32F746;
};

template<> struct mcu_traits<STM32F745VETx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F745;
    static constexpr gpio_conf_t gpio_conf = STM32F746;
};

template<> struct mcu_traits<STM32F745VGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F745;
    static constexpr gpio_conf_t gpio_conf = STM32F746;
};

template<> struct mcu_traits<STM32F745ZETx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F745;
    static constexpr gpio_conf_t gpio_conf = STM32F746;
};

template<> struct mcu_traits<STM32F745ZGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F745;
    static constexpr gpio_conf_t gpio_conf = STM32F746;
};

template<> struct mcu_traits<STM32F765BGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F765;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
};

template<> struct mcu_traits<STM32F765BITx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F765;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
};

template<> struct mcu_traits<STM32F765IGKx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F765;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
};

template<> struct mcu_traits<STM32F765IIKx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F765;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
};

template<> struct mcu_traits<STM32F765IGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F765;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
};

template<> struct mcu_traits<STM32F765IITx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F765;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
};

template<> struct mcu_traits<STM32F765NGHx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F765;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
};

template<> struct mcu_traits<STM32F765NIHx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F765;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
};

template<> struct mcu_traits<STM32F765VGHx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F765;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
};

template<> struct mcu_traits<STM32F765VIHx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F765;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
};

template<> struct mcu_traits<STM32F765VGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F765;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
};

template<> struct mcu_traits<STM32F765VITx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F765;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
};

template<> struct mcu_traits<STM32F765ZGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F765;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
};

template<> struct mcu_traits<STM32F765ZITx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F765;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
};

template<> struct mcu_traits<STM32F746BETx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F746;
    static constexpr gpio_conf_t gpio_conf = STM32F746;
};

template<> struct mcu_traits<STM32F746BGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F746;
    static constexpr gpio_conf_t gpio_conf = STM32F746;
};

template<> struct mcu_traits<STM32F746IEKx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F746;
    static constexpr gpio_conf_t gpio_conf = STM32F746;
};

template<> struct mcu_traits<STM32F746IGKx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F746;
    static constexpr gpio_conf_t gpio_conf = STM32F746;
};

template<> struct mcu_traits<STM32F746IETx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F746;
    static constexpr gpio_conf_t gpio_conf = STM32F746;
};

template<> struct mcu_traits<STM32F746IGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F746;
    static constexpr gpio_conf_t gpio_conf = STM32F746;
};

template<> struct mcu_traits<STM32F746NEHx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F746;
    static constexpr gpio_conf_t gpio_conf = STM32F746;
};

template<> struct mcu_traits<STM32F746NGHx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F746;
    static constexpr gpio_conf_t gpio_conf = STM32F746;
};

template<> struct mcu_traits<STM32F746VEHx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F746;
    static constexpr gpio_conf_t gpio_conf = STM32F746;
};

template<> struct mcu_traits<STM32F746VGHx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F746;
    static constexpr gpio_conf_t gpio_conf = STM32F746;
};

template<> struct mcu_traits<STM32F746VETx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F746;
    static constexpr gpio_conf_t gpio_conf = STM32F746;
};

template<> struct mcu_traits<STM32F746VGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F746;
    static constexpr gpio_conf_t gpio_conf = STM32F746;
};

template<> struct mcu_traits<STM32F746ZEYx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F746;
    static constexpr gpio_conf_t gpio_conf = STM32F746;
};

template<> struct mcu_traits<STM32F746ZGYx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F746;
    static constexpr gpio_conf_t gpio_conf = STM32F746;
};

template<> struct mcu_traits<STM32F746ZETx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F746;
    static constexpr gpio_conf_t gpio_conf = STM32F746;
};

template<> struct mcu_traits<STM32F746ZGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F746;
    static constexpr gpio_conf_t gpio_conf = STM32F746;
};

template<> struct mcu_traits<STM32F756BGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F756;
    static constexpr gpio_conf_t gpio_conf = STM32F746;
};

template<> struct mcu_traits<STM32F756IGKx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F756;
    static constexpr gpio_conf_t gpio_conf = STM32F746;
};

template<> struct mcu_traits<STM32F756IGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F756;
    static constexpr gpio_conf_t gpio_conf = STM32F746;
};

template<> struct mcu_traits<STM32F756NGHx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F756;
    static constexpr gpio_conf_t gpio_conf = STM32F746;
};

template<> struct mcu_traits<STM32F756VGHx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F756;
    static constexpr gpio_conf_t gpio_conf = STM32F746;
};

template<> struct mcu_traits<STM32F756VGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F756;
    static constexpr gpio_conf_t gpio_conf = STM32F746;
};

template<> struct mcu_traits<STM32F756ZGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F756;
    static constexpr gpio_conf_t gpio_conf = STM32F746;
};

template<> struct mcu_traits<STM32F756ZGYx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F756;
    static constexpr gpio_conf_t gpio_conf = STM32F746;
};

template<> struct mcu_traits<STM32F767BGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F767;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
};

template<> struct mcu_traits<STM32F767BITx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F767;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
};

template<> struct mcu_traits<STM32F767IGKx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F767;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
};

template<> struct mcu_traits<STM32F767IIKx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F767;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
};

template<> struct mcu_traits<STM32F767IGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F767;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
};

template<> struct mcu_traits<STM32F767IITx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F767;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
};

template<> struct mcu_traits<STM32F767NGHx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F767;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
};

template<> struct mcu_traits<STM32F767NIHx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F767;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
};

template<> struct mcu_traits<STM32F767VGHx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F767;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
};

template<> struct mcu_traits<STM32F767VGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F767;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
};

template<> struct mcu_traits<STM32F767VIHx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F767;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
};

template<> struct mcu_traits<STM32F767VITx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F767;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
};

template<> struct mcu_traits<STM32F767ZGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F767;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
};

template<> struct mcu_traits<STM32F767ZITx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F767;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
};

template<> struct mcu_traits<STM32F777BITx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F777;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
};

template<> struct mcu_traits<STM32F777IIKx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F777;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
};

template<> struct mcu_traits<STM32F777IITx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F777;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
};

template<> struct mcu_traits<STM32F777NIHx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F777;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
};

template<> struct mcu_traits<STM32F777VIHx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F777;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
};

template<> struct mcu_traits<STM32F777VITx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F777;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
};

template<> struct mcu_traits<STM32F777ZITx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F777;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
};

template<> struct mcu_traits<STM32F769AIYx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F769;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
};

template<> struct mcu_traits<STM32F769BGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F769;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
};

template<> struct mcu_traits<STM32F769BITx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F769;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
};

template<> struct mcu_traits<STM32F769IGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F769;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
};

template<> struct mcu_traits<STM32F769IITx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F769;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
};

template<> struct mcu_traits<STM32F769NGHx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F769;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
};

template<> struct mcu_traits<STM32F769NIHx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F769;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
};

template<> struct mcu_traits<STM32F778AIYx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F778;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
};

template<> struct mcu_traits<STM32F779AIYx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F779;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
};

template<> struct mcu_traits<STM32F779BITx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F779;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
};

template<> struct mcu_traits<STM32F779IITx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F779;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
};

template<> struct mcu_traits<STM32F779NIHx>
{
    static constexpr mcu_family_t mcu_family = STM32F7;
    static constexpr mcu_svd_t mcu_svd = STM32F779;
    static constexpr gpio_conf_t gpio_conf = STM32F76x;
};

static constexpr mcu_t target = MCU;