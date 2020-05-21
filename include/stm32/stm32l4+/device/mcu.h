#pragma once

////
//
//      STM32L4+ MCUs
//
////

enum mcu_t
    { STM32L4P5AEIx
    , STM32L4P5AGIx
    , STM32L4P5AGIxP
    , STM32L4P5CETx
    , STM32L4P5CEUx
    , STM32L4P5CGTx
    , STM32L4P5CGTxP
    , STM32L4P5CGUx
    , STM32L4P5CGUxP
    , STM32L4P5QEIx
    , STM32L4P5QGIx
    , STM32L4P5QGIxP
    , STM32L4P5RETx
    , STM32L4P5RGTx
    , STM32L4P5RGTxP
    , STM32L4P5VETx
    , STM32L4P5VEYx
    , STM32L4P5VGTx
    , STM32L4P5VGTxP
    , STM32L4P5VGYx
    , STM32L4P5VGYxP
    , STM32L4P5ZETx
    , STM32L4P5ZGTx
    , STM32L4P5ZGTxP
    , STM32L4Q5AGIx
    , STM32L4Q5CGTx
    , STM32L4Q5CGUx
    , STM32L4Q5QGIx
    , STM32L4Q5RGTx
    , STM32L4Q5VGTx
    , STM32L4Q5VGYx
    , STM32L4Q5ZGTx
    , STM32L4R5AGIx
    , STM32L4R5AIIx
    , STM32L4R5QGIx
    , STM32L4R5QIIx
    , STM32L4R5VGTx
    , STM32L4R5VITx
    , STM32L4R5ZGTx
    , STM32L4R5ZGYx
    , STM32L4R5ZITx
    , STM32L4R5ZITxP
    , STM32L4R5ZIYx
    , STM32L4R7AIIx
    , STM32L4R7VITx
    , STM32L4R7ZITx
    , STM32L4R9AGIx
    , STM32L4R9AIIx
    , STM32L4R9VGTx
    , STM32L4R9VITx
    , STM32L4R9ZGJx
    , STM32L4R9ZGTx
    , STM32L4R9ZGYx
    , STM32L4R9ZIJx
    , STM32L4R9ZITx
    , STM32L4R9ZIYx
    , STM32L4S5AIIx
    , STM32L4S5QIIx
    , STM32L4S5VITx
    , STM32L4S5ZITx
    , STM32L4S5ZIYx
    , STM32L4S7AIIx
    , STM32L4S7VITx
    , STM32L4S7ZITx
    , STM32L4S9AIIx
    , STM32L4S9VITx
    , STM32L4S9ZIJx
    , STM32L4S9ZITx
    , STM32L4S9ZIYx
    };

enum mcu_svd_t
    { STM32L4P5
    , STM32L4Q5
    , STM32L4R5
    , STM32L4R7
    , STM32L4R9
    , STM32L4S5
    , STM32L4S7
    , STM32L4S9
    };

enum gpio_conf_t
    { STM32L4P = 0x1
    };

template<mcu_t MCU> struct mcu_traits {};

template<> struct mcu_traits<STM32L4P5AGIx>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4P5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
};

template<> struct mcu_traits<STM32L4P5AEIx>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4P5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
};

template<> struct mcu_traits<STM32L4P5AGIxP>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4P5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
};

template<> struct mcu_traits<STM32L4P5CGTx>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4P5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
};

template<> struct mcu_traits<STM32L4P5CETx>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4P5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
};

template<> struct mcu_traits<STM32L4P5CGUx>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4P5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
};

template<> struct mcu_traits<STM32L4P5CEUx>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4P5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
};

template<> struct mcu_traits<STM32L4P5CGTxP>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4P5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
};

template<> struct mcu_traits<STM32L4P5CGUxP>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4P5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
};

template<> struct mcu_traits<STM32L4P5QGIx>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4P5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
};

template<> struct mcu_traits<STM32L4P5QEIx>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4P5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
};

template<> struct mcu_traits<STM32L4P5QGIxP>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4P5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
};

template<> struct mcu_traits<STM32L4P5RGTx>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4P5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
};

template<> struct mcu_traits<STM32L4P5RETx>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4P5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
};

template<> struct mcu_traits<STM32L4P5RGTxP>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4P5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
};

template<> struct mcu_traits<STM32L4P5VGTx>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4P5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
};

template<> struct mcu_traits<STM32L4P5VETx>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4P5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
};

template<> struct mcu_traits<STM32L4P5VGYx>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4P5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
};

template<> struct mcu_traits<STM32L4P5VEYx>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4P5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
};

template<> struct mcu_traits<STM32L4P5VGTxP>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4P5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
};

template<> struct mcu_traits<STM32L4P5VGYxP>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4P5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
};

template<> struct mcu_traits<STM32L4P5ZGTx>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4P5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
};

template<> struct mcu_traits<STM32L4P5ZETx>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4P5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
};

template<> struct mcu_traits<STM32L4P5ZGTxP>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4P5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
};

template<> struct mcu_traits<STM32L4Q5AGIx>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4Q5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
};

template<> struct mcu_traits<STM32L4Q5CGTx>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4Q5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
};

template<> struct mcu_traits<STM32L4Q5CGUx>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4Q5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
};

template<> struct mcu_traits<STM32L4Q5QGIx>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4Q5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
};

template<> struct mcu_traits<STM32L4Q5RGTx>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4Q5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
};

template<> struct mcu_traits<STM32L4Q5VGTx>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4Q5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
};

template<> struct mcu_traits<STM32L4Q5VGYx>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4Q5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
};

template<> struct mcu_traits<STM32L4Q5ZGTx>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4Q5;
    static constexpr gpio_conf_t gpio_conf = STM32L4P;
};

template<> struct mcu_traits<STM32L4R5AGIx>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4R5;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
};

template<> struct mcu_traits<STM32L4R5AIIx>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4R5;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
};

template<> struct mcu_traits<STM32L4R5QGIx>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4R5;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
};

template<> struct mcu_traits<STM32L4R5QIIx>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4R5;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
};

template<> struct mcu_traits<STM32L4R5VGTx>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4R5;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
};

template<> struct mcu_traits<STM32L4R5VITx>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4R5;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
};

template<> struct mcu_traits<STM32L4R5ZGTx>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4R5;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
};

template<> struct mcu_traits<STM32L4R5ZITx>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4R5;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
};

template<> struct mcu_traits<STM32L4R5ZGYx>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4R5;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
};

template<> struct mcu_traits<STM32L4R5ZIYx>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4R5;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
};

template<> struct mcu_traits<STM32L4R5ZITxP>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4R5;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
};

template<> struct mcu_traits<STM32L4S5AIIx>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4S5;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
};

template<> struct mcu_traits<STM32L4S5QIIx>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4S5;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
};

template<> struct mcu_traits<STM32L4S5VITx>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4S5;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
};

template<> struct mcu_traits<STM32L4S5ZITx>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4S5;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
};

template<> struct mcu_traits<STM32L4S5ZIYx>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4S5;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
};

template<> struct mcu_traits<STM32L4R7AIIx>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4R7;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
};

template<> struct mcu_traits<STM32L4R7VITx>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4R7;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
};

template<> struct mcu_traits<STM32L4R7ZITx>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4R7;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
};

template<> struct mcu_traits<STM32L4S7AIIx>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4S7;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
};

template<> struct mcu_traits<STM32L4S7VITx>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4S7;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
};

template<> struct mcu_traits<STM32L4S7ZITx>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4S7;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
};

template<> struct mcu_traits<STM32L4R9AGIx>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4R9;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
};

template<> struct mcu_traits<STM32L4R9AIIx>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4R9;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
};

template<> struct mcu_traits<STM32L4R9VGTx>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4R9;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
};

template<> struct mcu_traits<STM32L4R9VITx>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4R9;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
};

template<> struct mcu_traits<STM32L4R9ZGJx>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4R9;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
};

template<> struct mcu_traits<STM32L4R9ZIJx>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4R9;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
};

template<> struct mcu_traits<STM32L4R9ZGTx>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4R9;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
};

template<> struct mcu_traits<STM32L4R9ZITx>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4R9;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
};

template<> struct mcu_traits<STM32L4R9ZGYx>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4R9;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
};

template<> struct mcu_traits<STM32L4R9ZIYx>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4R9;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
};

template<> struct mcu_traits<STM32L4S9AIIx>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4S9;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
};

template<> struct mcu_traits<STM32L4S9VITx>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4S9;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
};

template<> struct mcu_traits<STM32L4S9ZIJx>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4S9;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
};

template<> struct mcu_traits<STM32L4S9ZITx>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4S9;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
};

template<> struct mcu_traits<STM32L4S9ZIYx>
{
    static constexpr mcu_family_t mcu_family = STM32L4Plus;
    static constexpr mcu_svd_t mcu_svd = STM32L4S9;
    static constexpr gpio_conf_t gpio_conf = STM32L4Rx;
};

static constexpr mcu_t target = MCU;
