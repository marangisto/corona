#pragma once

////
//
//      STM32F0 I2C peripherals
//
///

// I2C1: Inter-integrated circuit

struct stm32f0x0_i2c1_t
{
    volatile uint32_t CR1; // Control register 1
    volatile uint32_t CR2; // Control register 2
    volatile uint32_t OAR1; // Own address register 1
    volatile uint32_t OAR2; // Own address register 2
    volatile uint32_t TIMINGR; // Timing register
    volatile uint32_t TIMEOUTR; // Status register 1
    volatile uint32_t ISR; // Interrupt and Status register
    volatile uint32_t ICR; // Interrupt clear register
    volatile uint32_t PECR; // PEC register
    volatile uint32_t RXDR; // Receive data register
    volatile uint32_t TXDR; // Transmit data register

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR1_PE = 0x1; // Peripheral enable
    static constexpr uint32_t CR1_TXIE = 0x2; // TX Interrupt enable
    static constexpr uint32_t CR1_RXIE = 0x4; // RX Interrupt enable
    static constexpr uint32_t CR1_ADDRIE = 0x8; // Address match interrupt enable (slave only)
    static constexpr uint32_t CR1_NACKIE = 0x10; // Not acknowledge received interrupt enable
    static constexpr uint32_t CR1_STOPIE = 0x20; // STOP detection Interrupt enable
    static constexpr uint32_t CR1_TCIE = 0x40; // Transfer Complete interrupt enable
    static constexpr uint32_t CR1_ERRIE = 0x80; // Error interrupts enable
    typedef bit_field_t<8, 0xf> CR1_DNF; // Digital noise filter
    static constexpr uint32_t CR1_ANFOFF = 0x1000; // Analog noise filter OFF
    static constexpr uint32_t CR1_SWRST = 0x2000; // Software reset
    static constexpr uint32_t CR1_TXDMAEN = 0x4000; // DMA transmission requests enable
    static constexpr uint32_t CR1_RXDMAEN = 0x8000; // DMA reception requests enable
    static constexpr uint32_t CR1_SBC = 0x10000; // Slave byte control
    static constexpr uint32_t CR1_NOSTRETCH = 0x20000; // Clock stretching disable
    static constexpr uint32_t CR1_WUPEN = 0x40000; // Wakeup from STOP enable
    static constexpr uint32_t CR1_GCEN = 0x80000; // General call enable
    static constexpr uint32_t CR1_SMBHEN = 0x100000; // SMBus Host address enable
    static constexpr uint32_t CR1_SMBDEN = 0x200000; // SMBus Device Default address enable
    static constexpr uint32_t CR1_ALERTEN = 0x400000; // SMBUS alert enable
    static constexpr uint32_t CR1_PECEN = 0x800000; // PEC enable

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR2_PECBYTE = 0x4000000; // Packet error checking byte
    static constexpr uint32_t CR2_AUTOEND = 0x2000000; // Automatic end mode (master mode)
    static constexpr uint32_t CR2_RELOAD = 0x1000000; // NBYTES reload mode
    typedef bit_field_t<16, 0xff> CR2_NBYTES; // Number of bytes
    static constexpr uint32_t CR2_NACK = 0x8000; // NACK generation (slave mode)
    static constexpr uint32_t CR2_STOP = 0x4000; // Stop generation (master mode)
    static constexpr uint32_t CR2_START = 0x2000; // Start generation
    static constexpr uint32_t CR2_HEAD10R = 0x1000; // 10-bit address header only read direction (master receiver mode)
    static constexpr uint32_t CR2_ADD10 = 0x800; // 10-bit addressing mode (master mode)
    static constexpr uint32_t CR2_RD_WRN = 0x400; // Transfer direction (master mode)
    typedef bit_field_t<8, 0x3> CR2_SADD8; // Slave address bit 9:8 (master mode)
    typedef bit_field_t<1, 0x7f> CR2_SADD1; // Slave address bit 7:1 (master mode)
    static constexpr uint32_t CR2_SADD0 = 0x1; // Slave address bit 0 (master mode)

    static constexpr uint32_t OAR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OAR1_OA1_0 = 0x1; // Interface address
    typedef bit_field_t<1, 0x7f> OAR1_OA1_1; // Interface address
    typedef bit_field_t<8, 0x3> OAR1_OA1_8; // Interface address
    static constexpr uint32_t OAR1_OA1MODE = 0x400; // Own Address 1 10-bit mode
    static constexpr uint32_t OAR1_OA1EN = 0x8000; // Own Address 1 enable

    static constexpr uint32_t OAR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<1, 0x7f> OAR2_OA2; // Interface address
    typedef bit_field_t<8, 0x7> OAR2_OA2MSK; // Own Address 2 masks
    static constexpr uint32_t OAR2_OA2EN = 0x8000; // Own Address 2 enable

    static constexpr uint32_t TIMINGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> TIMINGR_SCLL; // SCL low period (master mode)
    typedef bit_field_t<8, 0xff> TIMINGR_SCLH; // SCL high period (master mode)
    typedef bit_field_t<16, 0xf> TIMINGR_SDADEL; // Data hold time
    typedef bit_field_t<20, 0xf> TIMINGR_SCLDEL; // Data setup time
    typedef bit_field_t<28, 0xf> TIMINGR_PRESC; // Timing prescaler

    static constexpr uint32_t TIMEOUTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> TIMEOUTR_TIMEOUTA; // Bus timeout A
    static constexpr uint32_t TIMEOUTR_TIDLE = 0x1000; // Idle clock timeout detection
    static constexpr uint32_t TIMEOUTR_TIMOUTEN = 0x8000; // Clock timeout enable
    typedef bit_field_t<16, 0xfff> TIMEOUTR_TIMEOUTB; // Bus timeout B
    static constexpr uint32_t TIMEOUTR_TEXTEN = 0x80000000; // Extended clock timeout enable

    static constexpr uint32_t ISR_RESET_VALUE = 0x1; // Reset value
    typedef bit_field_t<17, 0x7f> ISR_ADDCODE; // Address match code (Slave mode)
    static constexpr uint32_t ISR_DIR = 0x10000; // Transfer direction (Slave mode)
    static constexpr uint32_t ISR_BUSY = 0x8000; // Bus busy
    static constexpr uint32_t ISR_ALERT = 0x2000; // SMBus alert
    static constexpr uint32_t ISR_TIMEOUT = 0x1000; // Timeout or t_low detection flag
    static constexpr uint32_t ISR_PECERR = 0x800; // PEC Error in reception
    static constexpr uint32_t ISR_OVR = 0x400; // Overrun/Underrun (slave mode)
    static constexpr uint32_t ISR_ARLO = 0x200; // Arbitration lost
    static constexpr uint32_t ISR_BERR = 0x100; // Bus error
    static constexpr uint32_t ISR_TCR = 0x80; // Transfer Complete Reload
    static constexpr uint32_t ISR_TC = 0x40; // Transfer Complete (master mode)
    static constexpr uint32_t ISR_STOPF = 0x20; // Stop detection flag
    static constexpr uint32_t ISR_NACKF = 0x10; // Not acknowledge received flag
    static constexpr uint32_t ISR_ADDR = 0x8; // Address matched (slave mode)
    static constexpr uint32_t ISR_RXNE = 0x4; // Receive data register not empty (receivers)
    static constexpr uint32_t ISR_TXIS = 0x2; // Transmit interrupt status (transmitters)
    static constexpr uint32_t ISR_TXE = 0x1; // Transmit data register empty (transmitters)

    static constexpr uint32_t ICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ICR_ALERTCF = 0x2000; // Alert flag clear
    static constexpr uint32_t ICR_TIMOUTCF = 0x1000; // Timeout detection flag clear
    static constexpr uint32_t ICR_PECCF = 0x800; // PEC Error flag clear
    static constexpr uint32_t ICR_OVRCF = 0x400; // Overrun/Underrun flag clear
    static constexpr uint32_t ICR_ARLOCF = 0x200; // Arbitration lost flag clear
    static constexpr uint32_t ICR_BERRCF = 0x100; // Bus error flag clear
    static constexpr uint32_t ICR_STOPCF = 0x20; // Stop detection flag clear
    static constexpr uint32_t ICR_NACKCF = 0x10; // Not Acknowledge flag clear
    static constexpr uint32_t ICR_ADDRCF = 0x8; // Address Matched flag clear

    static constexpr uint32_t PECR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> PECR_PEC; // Packet error checking register

    static constexpr uint32_t RXDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RXDR_RXDATA; // 8-bit receive data

    static constexpr uint32_t TXDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> TXDR_TXDATA; // 8-bit transmit data
};

template<>
struct peripheral_t<STM32F0x0, I2C1>
{
    using T = stm32f0x0_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x0, I2C2>
{
    using T = stm32f0x0_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x1, I2C1>
{
    using T = stm32f0x0_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x1, I2C2>
{
    using T = stm32f0x0_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x2, I2C1>
{
    using T = stm32f0x0_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x2, I2C2>
{
    using T = stm32f0x0_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x8, I2C1>
{
    using T = stm32f0x0_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F0x8, I2C2>
{
    using T = stm32f0x0_i2c1_t;
    static T& V;
};

using i2c1_t = peripheral_t<svd, I2C1>;
using i2c2_t = peripheral_t<svd, I2C2>;

template<int INST> struct i2c_traits {};

template<> struct i2c_traits<1>
{
    using i2c = i2c1_t;
    static constexpr signal_t SCL = I2C1_SCL;
    static constexpr signal_t SDA = I2C1_SDA;
    static constexpr signal_t SMBA = I2C1_SMBA;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR |= RCC::T::APB1ENR_I2C1EN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR &= ~RCC::T::APB1ENR_I2C1EN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR |= RCC::T::APB1RSTR_I2C1RST;
    }
};

template<> struct i2c_traits<2>
{
    using i2c = i2c2_t;
    static constexpr signal_t SCL = I2C2_SCL;
    static constexpr signal_t SDA = I2C2_SDA;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR |= RCC::T::APB1ENR_I2C2EN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR &= ~RCC::T::APB1ENR_I2C2EN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR |= RCC::T::APB1RSTR_I2C2RST;
    }
};
