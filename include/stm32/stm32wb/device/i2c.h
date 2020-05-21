#pragma once

////
//
//      STM32WB I2C peripherals
//
////

////
//
//      Inter-integrated circuit
//
////

struct stm32wb30_cm4_i2c1_t
{
    volatile uint32_t CR1;      // [read-write] Control register 1
    volatile uint32_t CR2;      // [read-write] Control register 2
    volatile uint32_t OAR1;     // [read-write] Own address register 1
    volatile uint32_t OAR2;     // [read-write] Own address register 2
    volatile uint32_t TIMINGR;  // [read-write] Timing register
    volatile uint32_t TIMEOUTR; // [read-write] Status register 1
    volatile uint32_t ISR;      // Interrupt and Status register
    volatile uint32_t ICR;      // [write-only] Interrupt clear register
    volatile uint32_t PECR;     // [read-only] PEC register
    volatile uint32_t RXDR;     // [read-only] Receive data register
    volatile uint32_t TXDR;     // [read-write] Transmit data register

    static constexpr uint32_t CR1_RESET_VALUE = 0x0;
    static constexpr uint32_t CR1_PE = 0x1;            // Peripheral enable
    static constexpr uint32_t CR1_TXIE = 0x2;          // TX Interrupt enable
    static constexpr uint32_t CR1_RXIE = 0x4;          // RX Interrupt enable
    static constexpr uint32_t CR1_ADDRIE = 0x8;        // Address match interrupt enable (slave only)
    static constexpr uint32_t CR1_NACKIE = 0x10;       // Not acknowledge received interrupt enable
    static constexpr uint32_t CR1_STOPIE = 0x20;       // STOP detection Interrupt enable
    static constexpr uint32_t CR1_TCIE = 0x40;         // Transfer Complete interrupt enable
    static constexpr uint32_t CR1_ERRIE = 0x80;        // Error interrupts enable
    template<uint32_t X>
    static constexpr uint32_t CR1_DNF =                // Digital noise filter
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t CR1_ANFOFF = 0x1000;     // Analog noise filter OFF
    static constexpr uint32_t CR1_TXDMAEN = 0x4000;    // DMA transmission requests enable
    static constexpr uint32_t CR1_RXDMAEN = 0x8000;    // DMA reception requests enable
    static constexpr uint32_t CR1_SBC = 0x10000;       // Slave byte control
    static constexpr uint32_t CR1_NOSTRETCH = 0x20000; // Clock stretching disable
    static constexpr uint32_t CR1_WUPEN = 0x40000;     // Wakeup from STOP enable
    static constexpr uint32_t CR1_GCEN = 0x80000;      // General call enable
    static constexpr uint32_t CR1_SMBHEN = 0x100000;   // SMBus Host address enable
    static constexpr uint32_t CR1_SMBDEN = 0x200000;   // SMBus Device Default address enable
    static constexpr uint32_t CR1_ALERTEN = 0x400000;  // SMBUS alert enable
    static constexpr uint32_t CR1_PECEN = 0x800000;    // PEC enable

    static constexpr uint32_t CR2_RESET_VALUE = 0x0;
    static constexpr uint32_t CR2_PECBYTE = 0x4000000; // Packet error checking byte
    static constexpr uint32_t CR2_AUTOEND = 0x2000000; // Automatic end mode (master mode)
    static constexpr uint32_t CR2_RELOAD = 0x1000000;  // NBYTES reload mode
    template<uint32_t X>
    static constexpr uint32_t CR2_NBYTES =             // Number of bytes
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t CR2_NACK = 0x8000;       // NACK generation (slave mode)
    static constexpr uint32_t CR2_STOP = 0x4000;       // Stop generation (master mode)
    static constexpr uint32_t CR2_START = 0x2000;      // Start generation
    static constexpr uint32_t CR2_HEAD10R = 0x1000;    // 10-bit address header only read direction (master receiver mode)
    static constexpr uint32_t CR2_ADD10 = 0x800;       // 10-bit addressing mode (master mode)
    static constexpr uint32_t CR2_RD_WRN = 0x400;      // Transfer direction (master mode)
    template<uint32_t X>
    static constexpr uint32_t CR2_SADD =               // Slave address bit (master mode)
        bit_field_t<0, 0x3ff>::value<X>();

    static constexpr uint32_t OAR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OAR1_OA1 =            // Interface address
        bit_field_t<0, 0x3ff>::value<X>();
    static constexpr uint32_t OAR1_OA1MODE = 0x400; // Own Address 1 10-bit mode
    static constexpr uint32_t OAR1_OA1EN = 0x8000;  // Own Address 1 enable

    static constexpr uint32_t OAR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OAR2_OA2 =           // Interface address
        bit_field_t<1, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OAR2_OA2MSK =        // Own Address 2 masks
        bit_field_t<8, 0x7>::value<X>();
    static constexpr uint32_t OAR2_OA2EN = 0x8000; // Own Address 2 enable

    static constexpr uint32_t TIMINGR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TIMINGR_SCLL =     // SCL low period (master mode)
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TIMINGR_SCLH =     // SCL high period (master mode)
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TIMINGR_SDADEL =   // Data hold time
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TIMINGR_SCLDEL =   // Data setup time
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TIMINGR_PRESC =    // Timing prescaler
        bit_field_t<28, 0xf>::value<X>();

    static constexpr uint32_t TIMEOUTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TIMEOUTR_TIMEOUTA =           // Bus timeout A
        bit_field_t<0, 0xfff>::value<X>();
    static constexpr uint32_t TIMEOUTR_TIDLE = 0x1000;      // Idle clock timeout detection
    static constexpr uint32_t TIMEOUTR_TIMOUTEN = 0x8000;   // Clock timeout enable
    template<uint32_t X>
    static constexpr uint32_t TIMEOUTR_TIMEOUTB =           // Bus timeout B
        bit_field_t<16, 0xfff>::value<X>();
    static constexpr uint32_t TIMEOUTR_TEXTEN = 0x80000000; // Extended clock timeout enable

    static constexpr uint32_t ISR_RESET_VALUE = 0x1;
    template<uint32_t X>
    static constexpr uint32_t ISR_ADDCODE =         // Address match code (Slave mode)
        bit_field_t<17, 0x7f>::value<X>();
    static constexpr uint32_t ISR_DIR = 0x10000;    // Transfer direction (Slave mode)
    static constexpr uint32_t ISR_BUSY = 0x8000;    // Bus busy
    static constexpr uint32_t ISR_ALERT = 0x2000;   // SMBus alert
    static constexpr uint32_t ISR_TIMEOUT = 0x1000; // Timeout or t_low detection flag
    static constexpr uint32_t ISR_PECERR = 0x800;   // PEC Error in reception
    static constexpr uint32_t ISR_OVR = 0x400;      // Overrun/Underrun (slave mode)
    static constexpr uint32_t ISR_ARLO = 0x200;     // Arbitration lost
    static constexpr uint32_t ISR_BERR = 0x100;     // Bus error
    static constexpr uint32_t ISR_TCR = 0x80;       // Transfer Complete Reload
    static constexpr uint32_t ISR_TC = 0x40;        // Transfer Complete (master mode)
    static constexpr uint32_t ISR_STOPF = 0x20;     // Stop detection flag
    static constexpr uint32_t ISR_NACKF = 0x10;     // Not acknowledge received flag
    static constexpr uint32_t ISR_ADDR = 0x8;       // Address matched (slave mode)
    static constexpr uint32_t ISR_RXNE = 0x4;       // Receive data register not empty (receivers)
    static constexpr uint32_t ISR_TXIS = 0x2;       // Transmit interrupt status (transmitters)
    static constexpr uint32_t ISR_TXE = 0x1;        // Transmit data register empty (transmitters)

    static constexpr uint32_t ICR_RESET_VALUE = 0x0;
    static constexpr uint32_t ICR_ALERTCF = 0x2000;  // Alert flag clear
    static constexpr uint32_t ICR_TIMOUTCF = 0x1000; // Timeout detection flag clear
    static constexpr uint32_t ICR_PECCF = 0x800;     // PEC Error flag clear
    static constexpr uint32_t ICR_OVRCF = 0x400;     // Overrun/Underrun flag clear
    static constexpr uint32_t ICR_ARLOCF = 0x200;    // Arbitration lost flag clear
    static constexpr uint32_t ICR_BERRCF = 0x100;    // Bus error flag clear
    static constexpr uint32_t ICR_STOPCF = 0x20;     // Stop detection flag clear
    static constexpr uint32_t ICR_NACKCF = 0x10;     // Not Acknowledge flag clear
    static constexpr uint32_t ICR_ADDRCF = 0x8;      // Address Matched flag clear

    static constexpr uint32_t PECR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t PECR_PEC =   // Packet error checking register
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t RXDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RXDR_RXDATA =   // 8-bit receive data
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t TXDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TXDR_TXDATA =   // 8-bit transmit data
        bit_field_t<0, 0xff>::value<X>();
};


template<>
struct peripheral_t<STM32WB30_CM4, I2C1>
{
    typedef stm32wb30_cm4_i2c1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32WB30_CM4, I2C3>
{
    typedef stm32wb30_cm4_i2c1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32WB35_CM4, I2C1>
{
    typedef stm32wb30_cm4_i2c1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32WB35_CM4, I2C3>
{
    typedef stm32wb30_cm4_i2c1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32WB50_CM4, I2C1>
{
    typedef stm32wb30_cm4_i2c1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32WB55_CM4, I2C1>
{
    typedef stm32wb30_cm4_i2c1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32WB55_CM4, I2C3>
{
    typedef stm32wb30_cm4_i2c1_t T;
    static T& V;
};

using i2c1_t = peripheral_t<mcu_svd, I2C1>;
using i2c3_t = peripheral_t<mcu_svd, I2C3>;

