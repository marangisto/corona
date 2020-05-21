#pragma once

////
//
//      STM32F1 MCUs
//
////

enum mcu_t
    { STM32F100C4Tx
    , STM32F100C6Tx
    , STM32F100C8Tx
    , STM32F100CBTx
    , STM32F100R4Hx
    , STM32F100R4Tx
    , STM32F100R6Hx
    , STM32F100R6Tx
    , STM32F100R8Hx
    , STM32F100R8Tx
    , STM32F100RBHx
    , STM32F100RBTx
    , STM32F100RCTx
    , STM32F100RDTx
    , STM32F100RETx
    , STM32F100V8Tx
    , STM32F100VBTx
    , STM32F100VCTx
    , STM32F100VDTx
    , STM32F100VETx
    , STM32F100ZCTx
    , STM32F100ZDTx
    , STM32F100ZETx
    , STM32F101C4Tx
    , STM32F101C6Tx
    , STM32F101C8Tx
    , STM32F101C8Ux
    , STM32F101CBTx
    , STM32F101CBUx
    , STM32F101R4Tx
    , STM32F101R6Tx
    , STM32F101R8Tx
    , STM32F101RBHx
    , STM32F101RBTx
    , STM32F101RCTx
    , STM32F101RDTx
    , STM32F101RETx
    , STM32F101RFTx
    , STM32F101RGTx
    , STM32F101T4Ux
    , STM32F101T6Ux
    , STM32F101T8Ux
    , STM32F101TBUx
    , STM32F101V8Tx
    , STM32F101VBTx
    , STM32F101VCTx
    , STM32F101VDTx
    , STM32F101VETx
    , STM32F101VFTx
    , STM32F101VGTx
    , STM32F101ZCTx
    , STM32F101ZDTx
    , STM32F101ZETx
    , STM32F101ZFTx
    , STM32F101ZGTx
    , STM32F102C4Tx
    , STM32F102C6Tx
    , STM32F102C8Tx
    , STM32F102CBTx
    , STM32F102R4Tx
    , STM32F102R6Tx
    , STM32F102R8Tx
    , STM32F102RBTx
    , STM32F103C4Tx
    , STM32F103C6Tx
    , STM32F103C6Ux
    , STM32F103C8Tx
    , STM32F103CBTx
    , STM32F103CBUx
    , STM32F103R4Hx
    , STM32F103R4Tx
    , STM32F103R6Hx
    , STM32F103R6Tx
    , STM32F103R8Hx
    , STM32F103R8Tx
    , STM32F103RBHx
    , STM32F103RBTx
    , STM32F103RCTx
    , STM32F103RCYx
    , STM32F103RDTx
    , STM32F103RDYx
    , STM32F103RETx
    , STM32F103REYx
    , STM32F103RFTx
    , STM32F103RGTx
    , STM32F103T4Ux
    , STM32F103T6Ux
    , STM32F103T8Ux
    , STM32F103TBUx
    , STM32F103V8Hx
    , STM32F103V8Tx
    , STM32F103VBHx
    , STM32F103VBIx
    , STM32F103VBTx
    , STM32F103VCHx
    , STM32F103VCTx
    , STM32F103VDHx
    , STM32F103VDTx
    , STM32F103VEHx
    , STM32F103VETx
    , STM32F103VFTx
    , STM32F103VGTx
    , STM32F103ZCHx
    , STM32F103ZCTx
    , STM32F103ZDHx
    , STM32F103ZDTx
    , STM32F103ZEHx
    , STM32F103ZETx
    , STM32F103ZFHx
    , STM32F103ZFTx
    , STM32F103ZGHx
    , STM32F103ZGTx
    , STM32F105R8Tx
    , STM32F105RBTx
    , STM32F105RCTx
    , STM32F105V8Hx
    , STM32F105V8Tx
    , STM32F105VBHx
    , STM32F105VBTx
    , STM32F105VCTx
    , STM32F107RBTx
    , STM32F107RCTx
    , STM32F107VBTx
    , STM32F107VCHx
    , STM32F107VCTx
    };

enum mcu_svd_t
    { STM32F100
    , STM32F101
    , STM32F102
    , STM32F103
    , STM32F107
    };

enum gpio_conf_t
    { STM32F100x8 = 0x1
    , STM32F100xC = 0x2
    , STM32F103x4 = 0x4
    , STM32F103x8 = 0x8
    , STM32F103xC = 0x10
    , STM32F103xF = 0x20
    , STM32F107 = 0x40
    };

template<mcu_t MCU> struct mcu_traits {};

template<> struct mcu_traits<STM32F100C4Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F100;
    static constexpr gpio_conf_t gpio_conf = STM32F100x8;
};

template<> struct mcu_traits<STM32F100C6Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F100;
    static constexpr gpio_conf_t gpio_conf = STM32F100x8;
};

template<> struct mcu_traits<STM32F100C8Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F100;
    static constexpr gpio_conf_t gpio_conf = STM32F100x8;
};

template<> struct mcu_traits<STM32F100CBTx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F100;
    static constexpr gpio_conf_t gpio_conf = STM32F100x8;
};

template<> struct mcu_traits<STM32F100R4Hx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F100;
    static constexpr gpio_conf_t gpio_conf = STM32F100x8;
};

template<> struct mcu_traits<STM32F100R6Hx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F100;
    static constexpr gpio_conf_t gpio_conf = STM32F100x8;
};

template<> struct mcu_traits<STM32F100R4Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F100;
    static constexpr gpio_conf_t gpio_conf = STM32F100x8;
};

template<> struct mcu_traits<STM32F100R6Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F100;
    static constexpr gpio_conf_t gpio_conf = STM32F100x8;
};

template<> struct mcu_traits<STM32F100R8Hx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F100;
    static constexpr gpio_conf_t gpio_conf = STM32F100x8;
};

template<> struct mcu_traits<STM32F100RBHx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F100;
    static constexpr gpio_conf_t gpio_conf = STM32F100x8;
};

template<> struct mcu_traits<STM32F100R8Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F100;
    static constexpr gpio_conf_t gpio_conf = STM32F100x8;
};

template<> struct mcu_traits<STM32F100RBTx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F100;
    static constexpr gpio_conf_t gpio_conf = STM32F100x8;
};

template<> struct mcu_traits<STM32F100RCTx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F100;
    static constexpr gpio_conf_t gpio_conf = STM32F100xC;
};

template<> struct mcu_traits<STM32F100RDTx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F100;
    static constexpr gpio_conf_t gpio_conf = STM32F100xC;
};

template<> struct mcu_traits<STM32F100RETx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F100;
    static constexpr gpio_conf_t gpio_conf = STM32F100xC;
};

template<> struct mcu_traits<STM32F100V8Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F100;
    static constexpr gpio_conf_t gpio_conf = STM32F100x8;
};

template<> struct mcu_traits<STM32F100VBTx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F100;
    static constexpr gpio_conf_t gpio_conf = STM32F100x8;
};

template<> struct mcu_traits<STM32F100VCTx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F100;
    static constexpr gpio_conf_t gpio_conf = STM32F100xC;
};

template<> struct mcu_traits<STM32F100VDTx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F100;
    static constexpr gpio_conf_t gpio_conf = STM32F100xC;
};

template<> struct mcu_traits<STM32F100VETx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F100;
    static constexpr gpio_conf_t gpio_conf = STM32F100xC;
};

template<> struct mcu_traits<STM32F100ZCTx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F100;
    static constexpr gpio_conf_t gpio_conf = STM32F100xC;
};

template<> struct mcu_traits<STM32F100ZDTx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F100;
    static constexpr gpio_conf_t gpio_conf = STM32F100xC;
};

template<> struct mcu_traits<STM32F100ZETx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F100;
    static constexpr gpio_conf_t gpio_conf = STM32F100xC;
};

template<> struct mcu_traits<STM32F101C4Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103x4;
};

template<> struct mcu_traits<STM32F101C6Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103x4;
};

template<> struct mcu_traits<STM32F101C8Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103x8;
};

template<> struct mcu_traits<STM32F101CBTx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103x8;
};

template<> struct mcu_traits<STM32F101C8Ux>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103x8;
};

template<> struct mcu_traits<STM32F101CBUx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103x8;
};

template<> struct mcu_traits<STM32F101R4Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103x4;
};

template<> struct mcu_traits<STM32F101R6Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103x4;
};

template<> struct mcu_traits<STM32F101R8Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103x8;
};

template<> struct mcu_traits<STM32F101RBTx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103x8;
};

template<> struct mcu_traits<STM32F101RCTx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103xC;
};

template<> struct mcu_traits<STM32F101RDTx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103xC;
};

template<> struct mcu_traits<STM32F101RETx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103xC;
};

template<> struct mcu_traits<STM32F101RFTx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103xF;
};

template<> struct mcu_traits<STM32F101RGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103xF;
};

template<> struct mcu_traits<STM32F101RBHx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103x8;
};

template<> struct mcu_traits<STM32F101T4Ux>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103x4;
};

template<> struct mcu_traits<STM32F101T6Ux>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103x4;
};

template<> struct mcu_traits<STM32F101T8Ux>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103x8;
};

template<> struct mcu_traits<STM32F101TBUx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103x8;
};

template<> struct mcu_traits<STM32F101V8Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103x8;
};

template<> struct mcu_traits<STM32F101VBTx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103x8;
};

template<> struct mcu_traits<STM32F101VCTx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103xC;
};

template<> struct mcu_traits<STM32F101VDTx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103xC;
};

template<> struct mcu_traits<STM32F101VETx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103xC;
};

template<> struct mcu_traits<STM32F101VFTx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103xF;
};

template<> struct mcu_traits<STM32F101VGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103xF;
};

template<> struct mcu_traits<STM32F101ZCTx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103xC;
};

template<> struct mcu_traits<STM32F101ZDTx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103xC;
};

template<> struct mcu_traits<STM32F101ZETx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103xC;
};

template<> struct mcu_traits<STM32F101ZFTx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103xF;
};

template<> struct mcu_traits<STM32F101ZGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F101;
    static constexpr gpio_conf_t gpio_conf = STM32F103xF;
};

template<> struct mcu_traits<STM32F102C4Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F102;
    static constexpr gpio_conf_t gpio_conf = STM32F103x4;
};

template<> struct mcu_traits<STM32F102C6Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F102;
    static constexpr gpio_conf_t gpio_conf = STM32F103x4;
};

template<> struct mcu_traits<STM32F102C8Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F102;
    static constexpr gpio_conf_t gpio_conf = STM32F103x8;
};

template<> struct mcu_traits<STM32F102CBTx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F102;
    static constexpr gpio_conf_t gpio_conf = STM32F103x8;
};

template<> struct mcu_traits<STM32F102R4Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F102;
    static constexpr gpio_conf_t gpio_conf = STM32F103x4;
};

template<> struct mcu_traits<STM32F102R6Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F102;
    static constexpr gpio_conf_t gpio_conf = STM32F103x4;
};

template<> struct mcu_traits<STM32F102R8Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F102;
    static constexpr gpio_conf_t gpio_conf = STM32F103x8;
};

template<> struct mcu_traits<STM32F102RBTx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F102;
    static constexpr gpio_conf_t gpio_conf = STM32F103x8;
};

template<> struct mcu_traits<STM32F103C4Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103x4;
};

template<> struct mcu_traits<STM32F103C6Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103x4;
};

template<> struct mcu_traits<STM32F103C8Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103x8;
};

template<> struct mcu_traits<STM32F103CBTx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103x8;
};

template<> struct mcu_traits<STM32F103C6Ux>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103x4;
};

template<> struct mcu_traits<STM32F103CBUx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103x8;
};

template<> struct mcu_traits<STM32F103R4Hx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103x4;
};

template<> struct mcu_traits<STM32F103R6Hx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103x4;
};

template<> struct mcu_traits<STM32F103R4Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103x4;
};

template<> struct mcu_traits<STM32F103R6Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103x4;
};

template<> struct mcu_traits<STM32F103R8Hx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103x8;
};

template<> struct mcu_traits<STM32F103RBHx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103x8;
};

template<> struct mcu_traits<STM32F103R8Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103x8;
};

template<> struct mcu_traits<STM32F103RBTx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103x8;
};

template<> struct mcu_traits<STM32F103RCTx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103xC;
};

template<> struct mcu_traits<STM32F103RDTx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103xC;
};

template<> struct mcu_traits<STM32F103RETx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103xC;
};

template<> struct mcu_traits<STM32F103RCYx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103xC;
};

template<> struct mcu_traits<STM32F103RDYx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103xC;
};

template<> struct mcu_traits<STM32F103REYx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103xC;
};

template<> struct mcu_traits<STM32F103RFTx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103xF;
};

template<> struct mcu_traits<STM32F103RGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103xF;
};

template<> struct mcu_traits<STM32F103T4Ux>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103x4;
};

template<> struct mcu_traits<STM32F103T6Ux>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103x4;
};

template<> struct mcu_traits<STM32F103T8Ux>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103x8;
};

template<> struct mcu_traits<STM32F103TBUx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103x8;
};

template<> struct mcu_traits<STM32F103V8Hx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103x8;
};

template<> struct mcu_traits<STM32F103VBHx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103x8;
};

template<> struct mcu_traits<STM32F103V8Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103x8;
};

template<> struct mcu_traits<STM32F103VBTx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103x8;
};

template<> struct mcu_traits<STM32F103VCHx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103xC;
};

template<> struct mcu_traits<STM32F103VDHx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103xC;
};

template<> struct mcu_traits<STM32F103VEHx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103xC;
};

template<> struct mcu_traits<STM32F103VCTx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103xC;
};

template<> struct mcu_traits<STM32F103VDTx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103xC;
};

template<> struct mcu_traits<STM32F103VETx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103xC;
};

template<> struct mcu_traits<STM32F103VFTx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103xF;
};

template<> struct mcu_traits<STM32F103VGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103xF;
};

template<> struct mcu_traits<STM32F103VBIx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103x8;
};

template<> struct mcu_traits<STM32F103ZCHx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103xC;
};

template<> struct mcu_traits<STM32F103ZDHx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103xC;
};

template<> struct mcu_traits<STM32F103ZEHx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103xC;
};

template<> struct mcu_traits<STM32F103ZCTx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103xC;
};

template<> struct mcu_traits<STM32F103ZDTx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103xC;
};

template<> struct mcu_traits<STM32F103ZETx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103xC;
};

template<> struct mcu_traits<STM32F103ZFHx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103xF;
};

template<> struct mcu_traits<STM32F103ZGHx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103xF;
};

template<> struct mcu_traits<STM32F103ZFTx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103xF;
};

template<> struct mcu_traits<STM32F103ZGTx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F103;
    static constexpr gpio_conf_t gpio_conf = STM32F103xF;
};

template<> struct mcu_traits<STM32F105R8Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F107;
    static constexpr gpio_conf_t gpio_conf = STM32F107;
};

template<> struct mcu_traits<STM32F105RBTx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F107;
    static constexpr gpio_conf_t gpio_conf = STM32F107;
};

template<> struct mcu_traits<STM32F105RCTx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F107;
    static constexpr gpio_conf_t gpio_conf = STM32F107;
};

template<> struct mcu_traits<STM32F105V8Hx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F107;
    static constexpr gpio_conf_t gpio_conf = STM32F107;
};

template<> struct mcu_traits<STM32F105VBHx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F107;
    static constexpr gpio_conf_t gpio_conf = STM32F107;
};

template<> struct mcu_traits<STM32F105V8Tx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F107;
    static constexpr gpio_conf_t gpio_conf = STM32F107;
};

template<> struct mcu_traits<STM32F105VBTx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F107;
    static constexpr gpio_conf_t gpio_conf = STM32F107;
};

template<> struct mcu_traits<STM32F105VCTx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F107;
    static constexpr gpio_conf_t gpio_conf = STM32F107;
};

template<> struct mcu_traits<STM32F107RBTx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F107;
    static constexpr gpio_conf_t gpio_conf = STM32F107;
};

template<> struct mcu_traits<STM32F107RCTx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F107;
    static constexpr gpio_conf_t gpio_conf = STM32F107;
};

template<> struct mcu_traits<STM32F107VBTx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F107;
    static constexpr gpio_conf_t gpio_conf = STM32F107;
};

template<> struct mcu_traits<STM32F107VCTx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F107;
    static constexpr gpio_conf_t gpio_conf = STM32F107;
};

template<> struct mcu_traits<STM32F107VCHx>
{
    static constexpr mcu_family_t mcu_family = STM32F1;
    static constexpr mcu_svd_t mcu_svd = STM32F107;
    static constexpr gpio_conf_t gpio_conf = STM32F107;
};

static constexpr mcu_t target = MCU;
