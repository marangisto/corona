#pragma once

////
//
//      STM32G4 MCUs
//
////

enum mcu_t
    { STM32G431C6Tx
    , STM32G431C6Ux
    , STM32G431C8Tx
    , STM32G431C8Ux
    , STM32G431CBTx
    , STM32G431CBUx
    , STM32G431CBYx
    , STM32G431K6Tx
    , STM32G431K6Ux
    , STM32G431K8Tx
    , STM32G431K8Ux
    , STM32G431KBTx
    , STM32G431KBUx
    , STM32G431M6Tx
    , STM32G431M8Tx
    , STM32G431MBTx
    , STM32G431R6Ix
    , STM32G431R6Tx
    , STM32G431R8Ix
    , STM32G431R8Tx
    , STM32G431RBIx
    , STM32G431RBTx
    , STM32G431V6Tx
    , STM32G431V8Tx
    , STM32G431VBTx
    , STM32G441CBTx
    , STM32G441CBUx
    , STM32G441CBYx
    , STM32G441KBTx
    , STM32G441KBUx
    , STM32G441MBTx
    , STM32G441RBIx
    , STM32G441RBTx
    , STM32G441VBTx
    , STM32G471CCTx
    , STM32G471CCUx
    , STM32G471CETx
    , STM32G471CEUx
    , STM32G471MCTx
    , STM32G471METx
    , STM32G471MEYx
    , STM32G471QCTx
    , STM32G471QETx
    , STM32G471RCTx
    , STM32G471RETx
    , STM32G471VCHx
    , STM32G471VCIx
    , STM32G471VCTx
    , STM32G471VEHx
    , STM32G471VEIx
    , STM32G471VETx
    , STM32G473CBTx
    , STM32G473CBUx
    , STM32G473CCTx
    , STM32G473CCUx
    , STM32G473CETx
    , STM32G473CEUx
    , STM32G473MBTx
    , STM32G473MCTx
    , STM32G473METx
    , STM32G473MEYx
    , STM32G473QBTx
    , STM32G473QCTx
    , STM32G473QETx
    , STM32G473RBTx
    , STM32G473RCTx
    , STM32G473RETx
    , STM32G473VBHx
    , STM32G473VBIx
    , STM32G473VBTx
    , STM32G473VCHx
    , STM32G473VCIx
    , STM32G473VCTx
    , STM32G473VEHx
    , STM32G473VEIx
    , STM32G473VETx
    , STM32G474CBTx
    , STM32G474CBUx
    , STM32G474CCTx
    , STM32G474CCUx
    , STM32G474CETx
    , STM32G474CEUx
    , STM32G474MBTx
    , STM32G474MCTx
    , STM32G474METx
    , STM32G474MEYx
    , STM32G474QBTx
    , STM32G474QCTx
    , STM32G474QETx
    , STM32G474RBTx
    , STM32G474RCTx
    , STM32G474RETx
    , STM32G474VBHx
    , STM32G474VBIx
    , STM32G474VBTx
    , STM32G474VCHx
    , STM32G474VCIx
    , STM32G474VCTx
    , STM32G474VEHx
    , STM32G474VEIx
    , STM32G474VETx
    , STM32G483CETx
    , STM32G483CEUx
    , STM32G483METx
    , STM32G483MEYx
    , STM32G483QETx
    , STM32G483RETx
    , STM32G483VEHx
    , STM32G483VEIx
    , STM32G483VETx
    , STM32G484CETx
    , STM32G484CEUx
    , STM32G484METx
    , STM32G484MEYx
    , STM32G484QETx
    , STM32G484RETx
    , STM32G484VEHx
    , STM32G484VEIx
    , STM32G484VETx
    , STM32GBK1CBTx
    };

enum mcu_svd_t
    { STM32G431xx
    , STM32G441xx
    , STM32G471xx
    , STM32G473xx
    , STM32G474xx
    , STM32G483xx
    , STM32G484xx
    };

enum gpio_conf_t
    { STM32G43x = 0x1
    , STM32G47x = 0x2
    };

template<mcu_t MCU> struct mcu_traits {};

template<> struct mcu_traits<STM32G431C6Tx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G431xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G431C8Tx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G431xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G431CBTx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G431xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G431C6Ux>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G431xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G431C8Ux>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G431xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G431CBUx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G431xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G431CBYx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G431xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G431K6Tx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G431xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G431K8Tx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G431xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G431KBTx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G431xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G431K6Ux>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G431xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G431K8Ux>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G431xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G431KBUx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G431xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G431M6Tx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G431xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G431M8Tx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G431xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G431MBTx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G431xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G431R6Ix>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G431xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G431R8Ix>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G431xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G431RBIx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G431xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G431R6Tx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G431xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G431R8Tx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G431xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G431RBTx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G431xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G431V6Tx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G431xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G431V8Tx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G431xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G431VBTx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G431xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G441CBTx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G441xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G441CBUx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G441xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G441CBYx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G441xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G441KBTx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G441xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G441KBUx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G441xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G441MBTx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G441xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G441RBIx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G441xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G441RBTx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G441xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G441VBTx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G441xx;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G471CCTx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G471xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G471CETx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G471xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G471CCUx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G471xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G471CEUx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G471xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G471MCTx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G471xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G471METx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G471xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G471MEYx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G471xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G471QCTx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G471xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G471QETx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G471xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G471RCTx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G471xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G471RETx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G471xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G471VCHx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G471xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G471VEHx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G471xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G471VCIx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G471xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G471VEIx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G471xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G471VCTx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G471xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G471VETx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G471xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32GBK1CBTx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr gpio_conf_t gpio_conf = STM32G43x;
};

template<> struct mcu_traits<STM32G473CBTx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G473xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G473CCTx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G473xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G473CETx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G473xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G473CBUx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G473xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G473CCUx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G473xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G473CEUx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G473xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G473MBTx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G473xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G473MCTx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G473xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G473METx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G473xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G473MEYx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G473xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G473QBTx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G473xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G473QCTx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G473xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G473QETx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G473xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G473RBTx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G473xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G473RCTx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G473xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G473RETx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G473xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G473VBHx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G473xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G473VCHx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G473xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G473VEHx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G473xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G473VBIx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G473xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G473VCIx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G473xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G473VEIx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G473xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G473VBTx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G473xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G473VCTx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G473xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G473VETx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G473xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G483CETx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G483xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G483CEUx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G483xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G483METx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G483xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G483MEYx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G483xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G483QETx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G483xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G483RETx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G483xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G483VEHx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G483xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G483VEIx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G483xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G483VETx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G483xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G474CBTx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G474xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G474CCTx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G474xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G474CETx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G474xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G474CBUx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G474xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G474CCUx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G474xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G474CEUx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G474xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G474MBTx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G474xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G474MCTx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G474xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G474METx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G474xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G474MEYx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G474xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G474QBTx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G474xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G474QCTx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G474xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G474QETx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G474xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G474RBTx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G474xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G474RCTx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G474xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G474RETx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G474xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G474VBHx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G474xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G474VCHx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G474xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G474VEHx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G474xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G474VBIx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G474xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G474VCIx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G474xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G474VEIx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G474xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G474VBTx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G474xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G474VCTx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G474xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G474VETx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G474xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G484CETx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G484xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G484CEUx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G484xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G484METx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G484xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G484MEYx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G484xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G484QETx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G484xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G484RETx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G484xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G484VEHx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G484xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G484VEIx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G484xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

template<> struct mcu_traits<STM32G484VETx>
{
    static constexpr mcu_family_t mcu_family = STM32G4;
    static constexpr mcu_svd_t mcu_svd = STM32G484xx;
    static constexpr gpio_conf_t gpio_conf = STM32G47x;
};

static constexpr mcu_t target = MCU;
