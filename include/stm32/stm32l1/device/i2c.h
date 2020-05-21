#pragma once

////
//
//      STM32L1 I2C peripherals
//
////

////
//
//      Inter-integrated circuit
//
////

struct stm32l100_i2c1_t
{
    volatile uint32_t CR1;   // [read-write] CR1
    volatile uint32_t CR2;   // [read-write] CR2
    volatile uint32_t OAR1;  // [read-write] OAR1
    volatile uint32_t OAR2;  // [read-write] OAR2
    volatile uint32_t DR;    // [read-write] DR
    volatile uint32_t SR1;   // SR1
    volatile uint32_t SR2;   // [read-only] SR2
    volatile uint32_t CCR;   // [read-write] CCR
    volatile uint32_t TRISE; // [read-write] TRISE

    static constexpr uint32_t CR1_RESET_VALUE = 0x0;
    static constexpr uint32_t CR1_SWRST = 0x8000;   // Software reset
    static constexpr uint32_t CR1_ALERT = 0x2000;   // SMBus alert
    static constexpr uint32_t CR1_PEC = 0x1000;     // Packet error checking
    static constexpr uint32_t CR1_POS = 0x800;      // Acknowledge/PEC Position (for data reception)
    static constexpr uint32_t CR1_ACK = 0x400;      // Acknowledge enable
    static constexpr uint32_t CR1_STOP = 0x200;     // Stop generation
    static constexpr uint32_t CR1_START = 0x100;    // Start generation
    static constexpr uint32_t CR1_NOSTRETCH = 0x80; // Clock stretching disable (Slave mode)
    static constexpr uint32_t CR1_ENGC = 0x40;      // General call enable
    static constexpr uint32_t CR1_ENPEC = 0x20;     // PEC enable
    static constexpr uint32_t CR1_ENARP = 0x10;     // ARP enable
    static constexpr uint32_t CR1_SMBTYPE = 0x8;    // SMBus type
    static constexpr uint32_t CR1_SMBUS = 0x2;      // SMBus mode
    static constexpr uint32_t CR1_PE = 0x1;         // Peripheral enable

    static constexpr uint32_t CR2_RESET_VALUE = 0x0;
    static constexpr uint32_t CR2_LAST = 0x1000;   // DMA last transfer
    static constexpr uint32_t CR2_DMAEN = 0x800;   // DMA requests enable
    static constexpr uint32_t CR2_ITBUFEN = 0x400; // Buffer interrupt enable
    static constexpr uint32_t CR2_ITEVTEN = 0x200; // Event interrupt enable
    static constexpr uint32_t CR2_ITERREN = 0x100; // Error interrupt enable
    template<uint32_t X>
    static constexpr uint32_t CR2_FREQ =           // Peripheral clock frequency
        bit_field_t<0, 0x3f>::value<X>();

    static constexpr uint32_t OAR1_RESET_VALUE = 0x0;
    static constexpr uint32_t OAR1_ADDMODE = 0x8000; // ADDMODE
    template<uint32_t X>
    static constexpr uint32_t OAR1_ADD_8_9 =         // Interface address
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OAR1_ADD_1_7 =         // Interface address
        bit_field_t<1, 0x7f>::value<X>();
    static constexpr uint32_t OAR1_ADD_0 = 0x1;      // Interface address

    static constexpr uint32_t OAR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OAR2_ADD2 =        // Interface address
        bit_field_t<1, 0x7f>::value<X>();
    static constexpr uint32_t OAR2_ENDUAL = 0x1; // Dual addressing mode enable

    static constexpr uint32_t DR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DR_DR =   // -bit data register
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t SR1_RESET_VALUE = 0x0;
    static constexpr uint32_t SR1_SMBALERT = 0x8000; // SMBus alert
    static constexpr uint32_t SR1_TIMEOUT = 0x4000;  // Timeout or Tlow error
    static constexpr uint32_t SR1_PECERR = 0x1000;   // PEC Error in reception
    static constexpr uint32_t SR1_OVR = 0x800;       // Overrun/Underrun
    static constexpr uint32_t SR1_AF = 0x400;        // Acknowledge failure
    static constexpr uint32_t SR1_ARLO = 0x200;      // Arbitration lost (master mode)
    static constexpr uint32_t SR1_BERR = 0x100;      // Bus error
    static constexpr uint32_t SR1_TxE = 0x80;        // Data register empty (transmitters)
    static constexpr uint32_t SR1_RxNE = 0x40;       // Data register not empty (receivers)
    static constexpr uint32_t SR1_STOPF = 0x10;      // Stop detection (slave mode)
    static constexpr uint32_t SR1_ADD10 = 0x8;       // 10-bit header sent (Master mode)
    static constexpr uint32_t SR1_BTF = 0x4;         // Byte transfer finished
    static constexpr uint32_t SR1_ADDR = 0x2;        // Address sent (master mode)/matched (slave mode)
    static constexpr uint32_t SR1_SB = 0x1;          // Start bit (Master mode)

    static constexpr uint32_t SR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SR2_PEC =              // acket error checking register
        bit_field_t<8, 0xff>::value<X>();
    static constexpr uint32_t SR2_DUALF = 0x80;      // Dual flag (Slave mode)
    static constexpr uint32_t SR2_SMBHOST = 0x40;    // SMBus host header (Slave mode)
    static constexpr uint32_t SR2_SMBDEFAULT = 0x20; // SMBus device default address (Slave mode)
    static constexpr uint32_t SR2_GENCALL = 0x10;    // General call address (Slave mode)
    static constexpr uint32_t SR2_TRA = 0x4;         // Transmitter/receiver
    static constexpr uint32_t SR2_BUSY = 0x2;        // Bus busy
    static constexpr uint32_t SR2_MSL = 0x1;         // Master/slave

    static constexpr uint32_t CCR_RESET_VALUE = 0x0;
    static constexpr uint32_t CCR_F_S = 0x8000;  // I2C master mode selection
    static constexpr uint32_t CCR_DUTY = 0x4000; // Fast mode duty cycle
    template<uint32_t X>
    static constexpr uint32_t CCR_CCR =          // Clock control register in Fast/Standard mode (Master mode)
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t TRISE_RESET_VALUE = 0x2;
    template<uint32_t X>
    static constexpr uint32_t TRISE_TRISE =   // Maximum rise time in Fast/Standard mode (Master mode)
        bit_field_t<0, 0x3f>::value<X>();
};


template<>
struct peripheral_t<STM32L100, I2C1>
{
    typedef stm32l100_i2c1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L100, I2C2>
{
    typedef stm32l100_i2c1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L151, I2C1>
{
    typedef stm32l100_i2c1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L151, I2C2>
{
    typedef stm32l100_i2c1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L152, I2C1>
{
    typedef stm32l100_i2c1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L152, I2C2>
{
    typedef stm32l100_i2c1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L162, I2C1>
{
    typedef stm32l100_i2c1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L162, I2C2>
{
    typedef stm32l100_i2c1_t T;
    static T& V;
};

using i2c1_t = peripheral_t<mcu_svd, I2C1>;
using i2c2_t = peripheral_t<mcu_svd, I2C2>;

