#pragma once

////
//
//      STM32MP1 I2C2_IPXACT peripherals
//
////

////
//
//      I2C2
//
////

struct stm32mp15xxx_i2c2_t
{
    volatile uint32_t I2C_CR1;      // [read-write] Access: No wait states, except if a write access occurs while a write access to this register is ongoing. In this case, wait states are inserted in the second write access until the previous one is completed. The latency of the second write access can be up to 2xi2c_pclk+6xi2c_ker_ck.
    volatile uint32_t I2C_CR2;      // [read-write] Access: No wait states, except if a write access occurs while a write access to this register is ongoing. In this case, wait states are inserted in the second write access until the previous one is completed. The latency of the second write access can be up to 2 x i2c_pclk + 6 x i2c_ker_ck.
    volatile uint32_t I2C_OAR1;     // [read-write] Access: No wait states, except if a write access occurs while a write access to this register is ongoing. In this case, wait states are inserted in the second write access until the previous one is completed. The latency of the second write access can be up to 2 x i2c_pclk + 6 x i2c_ker_ck.
    volatile uint32_t I2C_OAR2;     // [read-write] Access: No wait states, except if a write access occurs while a write access to this register is ongoing. In this case, wait states are inserted in the second write access until the previous one is completed. The latency of the second write access can be up to 2 x i2c_pclk + 6 x i2c_ker_ck.
    volatile uint32_t I2C_TIMINGR;  // [read-write] Access: No wait states
    volatile uint32_t I2C_TIMEOUTR; // [read-write] Access: No wait states, except if a write access occurs while a write access to this register is ongoing. In this case, wait states are inserted in the second write access until the previous one is completed. The latency of the second write access can be up to 2 x i2c_pclk + 6 x i2c_ker_ck.
    volatile uint32_t I2C_ISR;      // Access: No wait states
    volatile uint32_t I2C_ICR;      // [write-only] Access: No wait states
    volatile uint32_t I2C_PECR;     // [read-only] Access: No wait states
    volatile uint32_t I2C_RXDR;     // [read-only] Access: No wait states
    volatile uint32_t I2C_TXDR;     // [read-write] Access: No wait states
    reserved_t<0xf1> _0x3f0;
    volatile uint32_t I2C_HWCFGR;   // [read-only] I2C hardware configuration register
    volatile uint32_t I2C_VERR;     // [read-only] I2C version register
    volatile uint32_t I2C_IPIDR;    // [read-only] I2C identification register
    volatile uint32_t I2C_SIDR;     // [read-only] I2C size identification register

    static constexpr uint32_t I2C_CR1_RESET_VALUE = 0x0;
    static constexpr uint32_t I2C_CR1_PE = 0x1;            // PE
    static constexpr uint32_t I2C_CR1_TXIE = 0x2;          // TXIE
    static constexpr uint32_t I2C_CR1_RXIE = 0x4;          // RXIE
    static constexpr uint32_t I2C_CR1_ADDRIE = 0x8;        // ADDRIE
    static constexpr uint32_t I2C_CR1_NACKIE = 0x10;       // NACKIE
    static constexpr uint32_t I2C_CR1_STOPIE = 0x20;       // STOPIE
    static constexpr uint32_t I2C_CR1_TCIE = 0x40;         // TCIE
    static constexpr uint32_t I2C_CR1_ERRIE = 0x80;        // ERRIE
    template<uint32_t X>
    static constexpr uint32_t I2C_CR1_DNF =                // DNF
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t I2C_CR1_ANFOFF = 0x1000;     // ANFOFF
    static constexpr uint32_t I2C_CR1_TXDMAEN = 0x4000;    // TXDMAEN
    static constexpr uint32_t I2C_CR1_RXDMAEN = 0x8000;    // RXDMAEN
    static constexpr uint32_t I2C_CR1_SBC = 0x10000;       // SBC
    static constexpr uint32_t I2C_CR1_NOSTRETCH = 0x20000; // NOSTRETCH
    static constexpr uint32_t I2C_CR1_WUPEN = 0x40000;     // WUPEN
    static constexpr uint32_t I2C_CR1_GCEN = 0x80000;      // GCEN
    static constexpr uint32_t I2C_CR1_SMBHEN = 0x100000;   // SMBHEN
    static constexpr uint32_t I2C_CR1_SMBDEN = 0x200000;   // SMBDEN
    static constexpr uint32_t I2C_CR1_ALERTEN = 0x400000;  // ALERTEN
    static constexpr uint32_t I2C_CR1_PECEN = 0x800000;    // PECEN

    static constexpr uint32_t I2C_CR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t I2C_CR2_SADD =               // SADD
        bit_field_t<0, 0x3ff>::value<X>();
    static constexpr uint32_t I2C_CR2_RD_WRN = 0x400;      // RD_WRN
    static constexpr uint32_t I2C_CR2_ADD10 = 0x800;       // ADD10
    static constexpr uint32_t I2C_CR2_HEAD10R = 0x1000;    // HEAD10R
    static constexpr uint32_t I2C_CR2_START = 0x2000;      // START
    static constexpr uint32_t I2C_CR2_STOP = 0x4000;       // STOP
    static constexpr uint32_t I2C_CR2_NACK = 0x8000;       // NACK
    template<uint32_t X>
    static constexpr uint32_t I2C_CR2_NBYTES =             // NBYTES
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t I2C_CR2_RELOAD = 0x1000000;  // RELOAD
    static constexpr uint32_t I2C_CR2_AUTOEND = 0x2000000; // AUTOEND
    static constexpr uint32_t I2C_CR2_PECBYTE = 0x4000000; // PECBYTE

    static constexpr uint32_t I2C_OAR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t I2C_OAR1_OA1 =            // OA1
        bit_field_t<0, 0x3ff>::value<X>();
    static constexpr uint32_t I2C_OAR1_OA1MODE = 0x400; // OA1MODE
    static constexpr uint32_t I2C_OAR1_OA1EN = 0x8000;  // OA1EN

    static constexpr uint32_t I2C_OAR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t I2C_OAR2_OA2 =           // OA2
        bit_field_t<1, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t I2C_OAR2_OA2MSK =        // OA2MSK
        bit_field_t<8, 0x7>::value<X>();
    static constexpr uint32_t I2C_OAR2_OA2EN = 0x8000; // OA2EN

    static constexpr uint32_t I2C_TIMINGR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t I2C_TIMINGR_SCLL =     // SCLL
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t I2C_TIMINGR_SCLH =     // SCLH
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t I2C_TIMINGR_SDADEL =   // SDADEL
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t I2C_TIMINGR_SCLDEL =   // SCLDEL
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t I2C_TIMINGR_PRESC =    // PRESC
        bit_field_t<28, 0xf>::value<X>();

    static constexpr uint32_t I2C_TIMEOUTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t I2C_TIMEOUTR_TIMEOUTA =           // TIMEOUTA
        bit_field_t<0, 0xfff>::value<X>();
    static constexpr uint32_t I2C_TIMEOUTR_TIDLE = 0x1000;      // TIDLE
    static constexpr uint32_t I2C_TIMEOUTR_TIMOUTEN = 0x8000;   // TIMOUTEN
    template<uint32_t X>
    static constexpr uint32_t I2C_TIMEOUTR_TIMEOUTB =           // TIMEOUTB
        bit_field_t<16, 0xfff>::value<X>();
    static constexpr uint32_t I2C_TIMEOUTR_TEXTEN = 0x80000000; // TEXTEN

    static constexpr uint32_t I2C_ISR_RESET_VALUE = 0x1;
    static constexpr uint32_t I2C_ISR_TXE = 0x1;        // TXE
    static constexpr uint32_t I2C_ISR_TXIS = 0x2;       // TXIS
    static constexpr uint32_t I2C_ISR_RXNE = 0x4;       // RXNE
    static constexpr uint32_t I2C_ISR_ADDR = 0x8;       // ADDR
    static constexpr uint32_t I2C_ISR_NACKF = 0x10;     // NACKF
    static constexpr uint32_t I2C_ISR_STOPF = 0x20;     // STOPF
    static constexpr uint32_t I2C_ISR_TC = 0x40;        // TC
    static constexpr uint32_t I2C_ISR_TCR = 0x80;       // TCR
    static constexpr uint32_t I2C_ISR_BERR = 0x100;     // BERR
    static constexpr uint32_t I2C_ISR_ARLO = 0x200;     // ARLO
    static constexpr uint32_t I2C_ISR_OVR = 0x400;      // OVR
    static constexpr uint32_t I2C_ISR_PECERR = 0x800;   // PECERR
    static constexpr uint32_t I2C_ISR_TIMEOUT = 0x1000; // TIMEOUT
    static constexpr uint32_t I2C_ISR_ALERT = 0x2000;   // ALERT
    static constexpr uint32_t I2C_ISR_BUSY = 0x8000;    // BUSY
    static constexpr uint32_t I2C_ISR_DIR = 0x10000;    // DIR
    template<uint32_t X>
    static constexpr uint32_t I2C_ISR_ADDCODE =         // ADDCODE
        bit_field_t<17, 0x7f>::value<X>();

    static constexpr uint32_t I2C_ICR_RESET_VALUE = 0x0;
    static constexpr uint32_t I2C_ICR_ADDRCF = 0x8;      // ADDRCF
    static constexpr uint32_t I2C_ICR_NACKCF = 0x10;     // NACKCF
    static constexpr uint32_t I2C_ICR_STOPCF = 0x20;     // STOPCF
    static constexpr uint32_t I2C_ICR_BERRCF = 0x100;    // BERRCF
    static constexpr uint32_t I2C_ICR_ARLOCF = 0x200;    // ARLOCF
    static constexpr uint32_t I2C_ICR_OVRCF = 0x400;     // OVRCF
    static constexpr uint32_t I2C_ICR_PECCF = 0x800;     // PECCF
    static constexpr uint32_t I2C_ICR_TIMOUTCF = 0x1000; // TIMOUTCF
    static constexpr uint32_t I2C_ICR_ALERTCF = 0x2000;  // ALERTCF

    static constexpr uint32_t I2C_PECR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t I2C_PECR_PEC =   // PEC
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t I2C_RXDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t I2C_RXDR_RXDATA =   // RXDATA
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t I2C_TXDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t I2C_TXDR_TXDATA =   // TXDATA
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t I2C_HWCFGR_RESET_VALUE = 0x111;
    template<uint32_t X>
    static constexpr uint32_t I2C_HWCFGR_SMBUS =   // SMBUS
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t I2C_HWCFGR_ASYN =    // ASYN
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t I2C_HWCFGR_WKP =     // WKP
        bit_field_t<8, 0xf>::value<X>();

    static constexpr uint32_t I2C_VERR_RESET_VALUE = 0x12;
    template<uint32_t X>
    static constexpr uint32_t I2C_VERR_MINREV =   // MINREV
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t I2C_VERR_MAJREV =   // MAJREV
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t I2C_IPIDR_RESET_VALUE = 0x130012;

    static constexpr uint32_t I2C_SIDR_RESET_VALUE = 0xa3c5dd01;
};


template<>
struct peripheral_t<STM32MP15xxx, I2C2>
{
    typedef stm32mp15xxx_i2c2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32MP15xxx, I2C1>
{
    typedef stm32mp15xxx_i2c2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32MP15xxx, I2C3>
{
    typedef stm32mp15xxx_i2c2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32MP15xxx, I2C4>
{
    typedef stm32mp15xxx_i2c2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32MP15xxx, I2C5>
{
    typedef stm32mp15xxx_i2c2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32MP15xxx, I2C6>
{
    typedef stm32mp15xxx_i2c2_t T;
    static T& V;
};

using i2c1_t = peripheral_t<mcu_svd, I2C1>;
using i2c2_t = peripheral_t<mcu_svd, I2C2>;
using i2c3_t = peripheral_t<mcu_svd, I2C3>;
using i2c4_t = peripheral_t<mcu_svd, I2C4>;
using i2c5_t = peripheral_t<mcu_svd, I2C5>;
using i2c6_t = peripheral_t<mcu_svd, I2C6>;

