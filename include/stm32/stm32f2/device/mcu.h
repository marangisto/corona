#pragma once

////
//
//      STM32F2 MCUs
//
////

enum mcu_t
    { STM32F205RBTx
    , STM32F205RCTx
    , STM32F205RETx
    , STM32F205REYx
    , STM32F205RFTx
    , STM32F205RGEx
    , STM32F205RGTx
    , STM32F205RGYx
    , STM32F205VBTx
    , STM32F205VCTx
    , STM32F205VETx
    , STM32F205VFTx
    , STM32F205VGTx
    , STM32F205ZCTx
    , STM32F205ZETx
    , STM32F205ZFTx
    , STM32F205ZGTx
    , STM32F207ICHx
    , STM32F207ICTx
    , STM32F207IEHx
    , STM32F207IETx
    , STM32F207IFHx
    , STM32F207IFTx
    , STM32F207IGHx
    , STM32F207IGTx
    , STM32F207VCTx
    , STM32F207VETx
    , STM32F207VFTx
    , STM32F207VGTx
    , STM32F207ZCTx
    , STM32F207ZETx
    , STM32F207ZFTx
    , STM32F207ZGTx
    , STM32F215RETx
    , STM32F215RGTx
    , STM32F215VETx
    , STM32F215VGTx
    , STM32F215ZETx
    , STM32F215ZGTx
    , STM32F217IEHx
    , STM32F217IETx
    , STM32F217IGHx
    , STM32F217IGTx
    , STM32F217VETx
    , STM32F217VGTx
    , STM32F217ZETx
    , STM32F217ZGTx
    };

enum mcu_svd_t
    { STM32F215
    , STM32F217
    };

enum gpio_conf_t
    { STM32F217_ = 0x1
    };

template<mcu_t MCU> struct mcu_traits {};

template<> struct mcu_traits<STM32F205RBTx>
{
    static constexpr mcu_family_t mcu_family = STM32F2;
    static constexpr mcu_svd_t mcu_svd = STM32F215;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
};

template<> struct mcu_traits<STM32F205RCTx>
{
    static constexpr mcu_family_t mcu_family = STM32F2;
    static constexpr mcu_svd_t mcu_svd = STM32F215;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
};

template<> struct mcu_traits<STM32F205RETx>
{
    static constexpr mcu_family_t mcu_family = STM32F2;
    static constexpr mcu_svd_t mcu_svd = STM32F215;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
};

template<> struct mcu_traits<STM32F205RFTx>
{
    static constexpr mcu_family_t mcu_family = STM32F2;
    static constexpr mcu_svd_t mcu_svd = STM32F215;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
};

template<> struct mcu_traits<STM32F205RGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F2;
    static constexpr mcu_svd_t mcu_svd = STM32F215;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
};

template<> struct mcu_traits<STM32F205REYx>
{
    static constexpr mcu_family_t mcu_family = STM32F2;
    static constexpr mcu_svd_t mcu_svd = STM32F215;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
};

template<> struct mcu_traits<STM32F205RGYx>
{
    static constexpr mcu_family_t mcu_family = STM32F2;
    static constexpr mcu_svd_t mcu_svd = STM32F215;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
};

template<> struct mcu_traits<STM32F205RGEx>
{
    static constexpr mcu_family_t mcu_family = STM32F2;
    static constexpr mcu_svd_t mcu_svd = STM32F215;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
};

template<> struct mcu_traits<STM32F205VBTx>
{
    static constexpr mcu_family_t mcu_family = STM32F2;
    static constexpr mcu_svd_t mcu_svd = STM32F215;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
};

template<> struct mcu_traits<STM32F205VCTx>
{
    static constexpr mcu_family_t mcu_family = STM32F2;
    static constexpr mcu_svd_t mcu_svd = STM32F215;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
};

template<> struct mcu_traits<STM32F205VETx>
{
    static constexpr mcu_family_t mcu_family = STM32F2;
    static constexpr mcu_svd_t mcu_svd = STM32F215;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
};

template<> struct mcu_traits<STM32F205VFTx>
{
    static constexpr mcu_family_t mcu_family = STM32F2;
    static constexpr mcu_svd_t mcu_svd = STM32F215;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
};

template<> struct mcu_traits<STM32F205VGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F2;
    static constexpr mcu_svd_t mcu_svd = STM32F215;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
};

template<> struct mcu_traits<STM32F205ZCTx>
{
    static constexpr mcu_family_t mcu_family = STM32F2;
    static constexpr mcu_svd_t mcu_svd = STM32F215;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
};

template<> struct mcu_traits<STM32F205ZETx>
{
    static constexpr mcu_family_t mcu_family = STM32F2;
    static constexpr mcu_svd_t mcu_svd = STM32F215;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
};

template<> struct mcu_traits<STM32F205ZFTx>
{
    static constexpr mcu_family_t mcu_family = STM32F2;
    static constexpr mcu_svd_t mcu_svd = STM32F215;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
};

template<> struct mcu_traits<STM32F205ZGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F2;
    static constexpr mcu_svd_t mcu_svd = STM32F215;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
};

template<> struct mcu_traits<STM32F215RETx>
{
    static constexpr mcu_family_t mcu_family = STM32F2;
    static constexpr mcu_svd_t mcu_svd = STM32F215;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
};

template<> struct mcu_traits<STM32F215RGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F2;
    static constexpr mcu_svd_t mcu_svd = STM32F215;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
};

template<> struct mcu_traits<STM32F215VETx>
{
    static constexpr mcu_family_t mcu_family = STM32F2;
    static constexpr mcu_svd_t mcu_svd = STM32F215;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
};

template<> struct mcu_traits<STM32F215VGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F2;
    static constexpr mcu_svd_t mcu_svd = STM32F215;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
};

template<> struct mcu_traits<STM32F215ZETx>
{
    static constexpr mcu_family_t mcu_family = STM32F2;
    static constexpr mcu_svd_t mcu_svd = STM32F215;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
};

template<> struct mcu_traits<STM32F215ZGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F2;
    static constexpr mcu_svd_t mcu_svd = STM32F215;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
};

template<> struct mcu_traits<STM32F207ICHx>
{
    static constexpr mcu_family_t mcu_family = STM32F2;
    static constexpr mcu_svd_t mcu_svd = STM32F217;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
};

template<> struct mcu_traits<STM32F207IEHx>
{
    static constexpr mcu_family_t mcu_family = STM32F2;
    static constexpr mcu_svd_t mcu_svd = STM32F217;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
};

template<> struct mcu_traits<STM32F207IFHx>
{
    static constexpr mcu_family_t mcu_family = STM32F2;
    static constexpr mcu_svd_t mcu_svd = STM32F217;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
};

template<> struct mcu_traits<STM32F207IGHx>
{
    static constexpr mcu_family_t mcu_family = STM32F2;
    static constexpr mcu_svd_t mcu_svd = STM32F217;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
};

template<> struct mcu_traits<STM32F207ICTx>
{
    static constexpr mcu_family_t mcu_family = STM32F2;
    static constexpr mcu_svd_t mcu_svd = STM32F217;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
};

template<> struct mcu_traits<STM32F207IETx>
{
    static constexpr mcu_family_t mcu_family = STM32F2;
    static constexpr mcu_svd_t mcu_svd = STM32F217;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
};

template<> struct mcu_traits<STM32F207IFTx>
{
    static constexpr mcu_family_t mcu_family = STM32F2;
    static constexpr mcu_svd_t mcu_svd = STM32F217;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
};

template<> struct mcu_traits<STM32F207IGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F2;
    static constexpr mcu_svd_t mcu_svd = STM32F217;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
};

template<> struct mcu_traits<STM32F207VCTx>
{
    static constexpr mcu_family_t mcu_family = STM32F2;
    static constexpr mcu_svd_t mcu_svd = STM32F217;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
};

template<> struct mcu_traits<STM32F207VETx>
{
    static constexpr mcu_family_t mcu_family = STM32F2;
    static constexpr mcu_svd_t mcu_svd = STM32F217;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
};

template<> struct mcu_traits<STM32F207VFTx>
{
    static constexpr mcu_family_t mcu_family = STM32F2;
    static constexpr mcu_svd_t mcu_svd = STM32F217;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
};

template<> struct mcu_traits<STM32F207VGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F2;
    static constexpr mcu_svd_t mcu_svd = STM32F217;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
};

template<> struct mcu_traits<STM32F207ZCTx>
{
    static constexpr mcu_family_t mcu_family = STM32F2;
    static constexpr mcu_svd_t mcu_svd = STM32F217;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
};

template<> struct mcu_traits<STM32F207ZETx>
{
    static constexpr mcu_family_t mcu_family = STM32F2;
    static constexpr mcu_svd_t mcu_svd = STM32F217;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
};

template<> struct mcu_traits<STM32F207ZFTx>
{
    static constexpr mcu_family_t mcu_family = STM32F2;
    static constexpr mcu_svd_t mcu_svd = STM32F217;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
};

template<> struct mcu_traits<STM32F207ZGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F2;
    static constexpr mcu_svd_t mcu_svd = STM32F217;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
};

template<> struct mcu_traits<STM32F217IEHx>
{
    static constexpr mcu_family_t mcu_family = STM32F2;
    static constexpr mcu_svd_t mcu_svd = STM32F217;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
};

template<> struct mcu_traits<STM32F217IGHx>
{
    static constexpr mcu_family_t mcu_family = STM32F2;
    static constexpr mcu_svd_t mcu_svd = STM32F217;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
};

template<> struct mcu_traits<STM32F217IETx>
{
    static constexpr mcu_family_t mcu_family = STM32F2;
    static constexpr mcu_svd_t mcu_svd = STM32F217;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
};

template<> struct mcu_traits<STM32F217IGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F2;
    static constexpr mcu_svd_t mcu_svd = STM32F217;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
};

template<> struct mcu_traits<STM32F217VETx>
{
    static constexpr mcu_family_t mcu_family = STM32F2;
    static constexpr mcu_svd_t mcu_svd = STM32F217;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
};

template<> struct mcu_traits<STM32F217VGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F2;
    static constexpr mcu_svd_t mcu_svd = STM32F217;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
};

template<> struct mcu_traits<STM32F217ZETx>
{
    static constexpr mcu_family_t mcu_family = STM32F2;
    static constexpr mcu_svd_t mcu_svd = STM32F217;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
};

template<> struct mcu_traits<STM32F217ZGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F2;
    static constexpr mcu_svd_t mcu_svd = STM32F217;
    static constexpr gpio_conf_t gpio_conf = STM32F217_;
};

static constexpr mcu_t target = MCU;
