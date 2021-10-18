#pragma once

////
//
//      STM32U5 SAES peripherals
//
///

// SAES: Secure AES coprocessor

struct stm32u5xx_saes_t
{
    volatile uint32_t CR; // control register
    volatile uint32_t SR; // status register
    volatile uint32_t DINR; // data input register
    volatile uint32_t DOUTR; // data output register
    volatile uint32_t KEYR0; // key register 0
    volatile uint32_t KEYR1; // key register 1
    volatile uint32_t KEYR2; // key register 2
    volatile uint32_t KEYR3; // key register 3
    volatile uint32_t IVR0; // initialization vector register 0
    volatile uint32_t IVR1; // initialization vector register 1
    volatile uint32_t IVR2; // initialization vector register 2
    volatile uint32_t IVR3; // initialization vector register 3
    volatile uint32_t KEYR4; // key register 4
    volatile uint32_t KEYR5; // key register 5
    volatile uint32_t KEYR6; // key register 6
    volatile uint32_t KEYR7; // key register 7
    reserved_t<0x30> _0x40;
    volatile uint32_t DPACFGR; // configuration register
    reserved_t<0x7f> _0x104;
    volatile uint32_t IER; // interrupt enable register
    volatile uint32_t ISR; // interrupt status register
    volatile uint32_t ICR; // interrupt clear register

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_IPRST = 0x80000000; // IPRST
    typedef bit_field_t<28, 0x7> CR_KEYSEL; // KEYSEL
    typedef bit_field_t<26, 0x3> CR_KSHAREID; // KSHAREID
    typedef bit_field_t<24, 0x3> CR_KMOD; // KMOD
    static constexpr uint32_t CR_KEYPROT = 0x80000; // KEYPROT
    static constexpr uint32_t CR_KEYSIZE = 0x40000; // KEYSIZE
    static constexpr uint32_t CR_DMAOUTEN = 0x1000; // DMAOUTEN
    static constexpr uint32_t CR_DMAINEN = 0x800; // DMAINEN
    typedef bit_field_t<5, 0x3> CR_CHMOD; // CHMOD
    typedef bit_field_t<3, 0x3> CR_MODE; // MODE
    typedef bit_field_t<1, 0x3> CR_DATATYPE; // DATATYPE
    static constexpr uint32_t CR_EN = 0x1; // SAES enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_KEYVALID = 0x80; // Key Valid flag
    static constexpr uint32_t SR_BUSY = 0x8; // BUSY
    static constexpr uint32_t SR_WRERR = 0x4; // Write error flag
    static constexpr uint32_t SR_RDERR = 0x2; // Read error flag
    static constexpr uint32_t SR_CCF = 0x1; // Computation complete flag

    static constexpr uint32_t DINR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DINR_DIN; // Input data word

    static constexpr uint32_t DOUTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DOUTR_DOUT; // Output data word

    static constexpr uint32_t KEYR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR0_KEY; // Cryptographic key, bits [31:0]

    static constexpr uint32_t KEYR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR1_KEY; // Cryptographic key, bits [63:32]

    static constexpr uint32_t KEYR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR2_KEYR; // Cryptographic key, bits [95:64]

    static constexpr uint32_t KEYR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR3_SAES_KEYR3; // Cryptographic key, bits [127:96]

    static constexpr uint32_t IVR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> IVR0_IVI; // Initialization vector input, bits [31:0]

    static constexpr uint32_t IVR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> IVR1_IVI; // Initialization vector input, bits [63:32]

    static constexpr uint32_t IVR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> IVR2_IVI; // Initialization vector input, bits [95:64]

    static constexpr uint32_t IVR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> IVR3_IVI; // Initialization vector input, bits [127:96]

    static constexpr uint32_t KEYR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR4_KEY; // Cryptographic key, bits [159:128]

    static constexpr uint32_t KEYR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR5_KEY; // Cryptographic key, bits [191:160]

    static constexpr uint32_t KEYR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR6_KEY; // Cryptographic key, bits [223:192]

    static constexpr uint32_t KEYR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR7_KEY; // Cryptographic key, bits [255:224]


    static constexpr uint32_t DPACFGR_RESET_VALUE = 0x8; // Reset value
    static constexpr uint32_t DPACFGR_CONFIGLOCK = 0x80000000; // CONFIGLOCK
    typedef bit_field_t<3, 0x3> DPACFGR_TRIMCFG; // TRIMCFG
    static constexpr uint32_t DPACFGR_RESEED = 0x4; // RESEED
    static constexpr uint32_t DPACFGR_REDCFG = 0x2; // REDCFG


    static constexpr uint32_t IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IER_RNGEIE = 0x8; // RNGEIE
    static constexpr uint32_t IER_KEIE = 0x4; // Key error interrupt enable
    static constexpr uint32_t IER_RWEIE = 0x2; // Read or write error interrupt enable
    static constexpr uint32_t IER_CCFIE = 0x1; // Computation complete flag interrupt enable

    static constexpr uint32_t ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ISR_RNGEIF = 0x8; // RNGEIF
    static constexpr uint32_t ISR_KEIF = 0x4; // Key error interrupt flag
    static constexpr uint32_t ISR_RWEIF = 0x2; // Read or write error interrupt flag
    static constexpr uint32_t ISR_CCF = 0x1; // Computation complete flag

    static constexpr uint32_t ICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ICR_RNGEIF = 0x8; // RNGEIF
    static constexpr uint32_t ICR_KEIF = 0x4; // Key error interrupt flag clear
    static constexpr uint32_t ICR_RWEIF = 0x2; // Read or write error interrupt flag clear
    static constexpr uint32_t ICR_CCF = 0x1; // Computation complete flag clear
};

template<>
struct peripheral_t<STM32U5xx, SAES>
{
    static constexpr periph_t P = SAES;
    using T = stm32u5xx_saes_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, SEC_SAES>
{
    static constexpr periph_t P = SEC_SAES;
    using T = stm32u5xx_saes_t;
    static T& V;
};

using saes_t = peripheral_t<svd, SAES>;
using sec_saes_t = peripheral_t<svd, SEC_SAES>;
