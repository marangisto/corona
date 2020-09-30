#pragma once

////
//
//      STM32F4 I2C peripherals
//
///

// FMPI2C: fast-mode Inter-integrated circuit

struct stm32f413_fmpi2c_t
{
    volatile uint32_t CR1; // Control register 1
    volatile uint32_t CR2; // Control register 2
    volatile uint32_t OAR1; // Own address register 1
    volatile uint32_t OAR2; // Own address register 2
    volatile uint32_t TIMINGR; // Timing register
    volatile uint32_t TIMEOUTR; // Timeout register
    volatile uint32_t ISR; // Interrupt and Status register
    volatile uint32_t ICR; // Interrupt clear register
    volatile uint32_t PECR; // PEC register
    volatile uint32_t RXDR; // Receive data register
    volatile uint32_t TXDR; // Transmit data register

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR1_PE = 0x1; // Peripheral enable
    static constexpr uint32_t CR1_TXIE = 0x2; // TXIE
    static constexpr uint32_t CR1_RXIE = 0x4; // RXIE
    static constexpr uint32_t CR1_ADDRE = 0x8; // ADDRE
    static constexpr uint32_t CR1_NACKIE = 0x10; // NACKIE
    static constexpr uint32_t CR1_STOPIE = 0x20; // STOPIE
    static constexpr uint32_t CR1_TCIE = 0x40; // TCIE
    static constexpr uint32_t CR1_ERRIE = 0x80; // ERRIE
    typedef bit_field_t<8, 0xf> CR1_DNF; // DNF
    static constexpr uint32_t CR1_ANFOFF = 0x1000; // ANFOFF
    static constexpr uint32_t CR1_TCDMAEN = 0x4000; // TCDMAEN
    static constexpr uint32_t CR1_RXDMAEN = 0x8000; // RXDMAEN
    static constexpr uint32_t CR1_SBC = 0x10000; // SBC
    static constexpr uint32_t CR1_NOSTRETCH = 0x20000; // NOSTRETCH
    static constexpr uint32_t CR1_GCEN = 0x80000; // GCEN
    static constexpr uint32_t CR1_SMBHEN = 0x100000; // SMBHEN
    static constexpr uint32_t CR1_SMBDEN = 0x200000; // SMBDEN
    static constexpr uint32_t CR1_ALERTEN = 0x400000; // ALERTEN
    static constexpr uint32_t CR1_PECEN = 0x800000; // PECEN

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR2_SADD0 = 0x1; // Slave address bit 0
    typedef bit_field_t<1, 0x7f> CR2_SADD1_7; // Slave address bit 7_1
    typedef bit_field_t<8, 0x3> CR2_SADD8_9; // Slave address bit 8_9
    static constexpr uint32_t CR2_RD_WRN = 0x400; // Transfer direction
    static constexpr uint32_t CR2_ADD10 = 0x800; // 10-bit addressing mode
    static constexpr uint32_t CR2_HEAD10R = 0x1000; // 10-bit address header only read direction
    static constexpr uint32_t CR2_START = 0x2000; // Start generation
    static constexpr uint32_t CR2_STOP = 0x4000; // Stop generation
    static constexpr uint32_t CR2_NACK = 0x8000; // NACK generation
    typedef bit_field_t<16, 0xff> CR2_NBYTES; // Number of bytes
    static constexpr uint32_t CR2_RELOAD = 0x1000000; // NBYTES reload mode
    static constexpr uint32_t CR2_AUTOEND = 0x2000000; // Automatic end mode
    static constexpr uint32_t CR2_PECBYTE = 0x4000000; // Packet error checking byte

    static constexpr uint32_t OAR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OAR1_OA1 = 0x1; // OA1
    typedef bit_field_t<1, 0x7f> OAR1_OA11_7; // OA11_7
    typedef bit_field_t<8, 0x3> OAR1_OA18_9; // OA18_9
    static constexpr uint32_t OAR1_OA1MODE = 0x400; // OA1MODE
    static constexpr uint32_t OAR1_OA1EN = 0x8000; // OA1EN

    static constexpr uint32_t OAR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<1, 0x7f> OAR2_OA21_7; // OA21_7
    typedef bit_field_t<8, 0x7> OAR2_OA2MSK; // OA2MSK
    static constexpr uint32_t OAR2_OA2EN = 0x8000; // OA2EN

    static constexpr uint32_t TIMINGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> TIMINGR_SCLL; // SCLL
    typedef bit_field_t<8, 0xff> TIMINGR_SCLH; // SCLH
    typedef bit_field_t<16, 0xf> TIMINGR_SDADEL; // SDADEL
    typedef bit_field_t<20, 0xf> TIMINGR_SCLDEL; // SCLDEL
    typedef bit_field_t<28, 0xf> TIMINGR_PRESC; // PRESC

    static constexpr uint32_t TIMEOUTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> TIMEOUTR_TIMEOUTA; // TIMEOUTA
    static constexpr uint32_t TIMEOUTR_TIDLE = 0x1000; // TIDLE
    static constexpr uint32_t TIMEOUTR_TIMOUTEN = 0x8000; // TIMOUTEN
    typedef bit_field_t<16, 0xfff> TIMEOUTR_TIMEOUTB; // TIMEOUTB
    static constexpr uint32_t TIMEOUTR_TEXTEN = 0x80000000; // TEXTEN

    static constexpr uint32_t ISR_RESET_VALUE = 0x1; // Reset value
    static constexpr uint32_t ISR_TXE = 0x1; // TXE
    static constexpr uint32_t ISR_TXIS = 0x2; // TXIS
    static constexpr uint32_t ISR_RXNE = 0x4; // RXNE
    static constexpr uint32_t ISR_ADDR = 0x8; // ADDR
    static constexpr uint32_t ISR_NACKF = 0x10; // NACKF
    static constexpr uint32_t ISR_STOPF = 0x20; // STOPF
    static constexpr uint32_t ISR_TC = 0x40; // TC
    static constexpr uint32_t ISR_TCR = 0x80; // TCR
    static constexpr uint32_t ISR_BERR = 0x100; // BERR
    static constexpr uint32_t ISR_ARLO = 0x200; // ARLO
    static constexpr uint32_t ISR_OVR = 0x400; // OVR
    static constexpr uint32_t ISR_PECERR = 0x800; // PECERR
    static constexpr uint32_t ISR_TIMEOUT = 0x1000; // TIMEOUT
    static constexpr uint32_t ISR_ALERT = 0x2000; // ALERT
    static constexpr uint32_t ISR_BUSY = 0x8000; // BUSY
    static constexpr uint32_t ISR_DIR = 0x10000; // DIR
    typedef bit_field_t<17, 0x7f> ISR_ADDCODE; // ADDCODE

    static constexpr uint32_t ICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ICR_ADDRCF = 0x8; // Address matched flag clear
    static constexpr uint32_t ICR_NACKCF = 0x10; // Not Acknowledge flag clear
    static constexpr uint32_t ICR_STOPCF = 0x20; // Stop detection flag clear
    static constexpr uint32_t ICR_BERRCF = 0x100; // Bus error flag clear
    static constexpr uint32_t ICR_ARLOCF = 0x200; // Arbitration Lost flag clear
    static constexpr uint32_t ICR_OVRCF = 0x400; // Overrun/Underrun flag clear
    static constexpr uint32_t ICR_PECCF = 0x800; // PEC Error flag clear
    static constexpr uint32_t ICR_TIMOUTCF = 0x1000; // Timeout detection flag clear
    static constexpr uint32_t ICR_ALERTCF = 0x2000; // Alert flag clear

    static constexpr uint32_t PECR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> PECR_PEC; // PEC

    static constexpr uint32_t RXDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RXDR_RXDATA; // RXDATA

    static constexpr uint32_t TXDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> TXDR_TXDATA; // TXDATA
};

// FMPI2C: Fast-mode Plus Inter-integrated circuit interface

struct stm32f446_fmpi2c_t
{
    volatile uint32_t CR1; // Control register 1
    volatile uint32_t CR2; // Control register 1
    volatile uint32_t OAR1; // Own address 1 register
    volatile uint32_t OAR2; // Own address 2 register
    volatile uint32_t TIMINGR; // Timing register
    volatile uint32_t TIMEOUTR; // Timeout register
    volatile uint32_t ISR; // Interrupt and status register
    volatile uint32_t ICR; // Interrupt clear register
    volatile uint32_t PECR; // PEC register
    volatile uint32_t RXDR; // Receive data register
    volatile uint32_t TXDR; // Transmit data register

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR1_PECEN = 0x800000; // PEC enable
    static constexpr uint32_t CR1_ALERTEN = 0x400000; // SMBus alert enable
    static constexpr uint32_t CR1_SMBDEN = 0x200000; // SMBus Device Default address enable
    static constexpr uint32_t CR1_SMBHEN = 0x100000; // SMBus Host address enable
    static constexpr uint32_t CR1_GCEN = 0x80000; // General call enable
    static constexpr uint32_t CR1_NOSTRETCH = 0x20000; // Clock stretching disable
    static constexpr uint32_t CR1_SBC = 0x10000; // Slave byte control
    static constexpr uint32_t CR1_RXDMAEN = 0x8000; // DMA reception requests enable
    static constexpr uint32_t CR1_TXDMAEN = 0x4000; // DMA transmission requests enable
    static constexpr uint32_t CR1_ANFOFF = 0x1000; // Analog noise filter OFF
    typedef bit_field_t<8, 0xf> CR1_DNF; // Digital noise filter
    static constexpr uint32_t CR1_ERRIE = 0x80; // Error interrupts enable
    static constexpr uint32_t CR1_TCIE = 0x40; // Transfer Complete interrupt enable
    static constexpr uint32_t CR1_STOPIE = 0x20; // STOP detection Interrupt enable
    static constexpr uint32_t CR1_NACKIE = 0x10; // Not acknowledge received Interrupt enable
    static constexpr uint32_t CR1_ADDRIE = 0x8; // Address match Interrupt enable (slave only)
    static constexpr uint32_t CR1_RXIE = 0x4; // RX Interrupt enable
    static constexpr uint32_t CR1_TXIE = 0x2; // TX Interrupt enable
    static constexpr uint32_t CR1_PE = 0x1; // Peripheral enable

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR2_SADD0 = 0x1; // Slave address bit 0 (master mode)
    typedef bit_field_t<1, 0x7f> CR2_SADD7_1; // Slave address bit 7:1 (master mode)
    typedef bit_field_t<8, 0x3> CR2_SADD9_8; // Slave address bit 9:8 (master mode)
    static constexpr uint32_t CR2_RD_WRN = 0x400; // Transfer direction (master mode)
    static constexpr uint32_t CR2_ADD10 = 0x800; // 10-bit addressing mode (master mode)
    static constexpr uint32_t CR2_HEAD10R = 0x1000; // 10-bit address header only read direction (master receiver mode)
    static constexpr uint32_t CR2_START = 0x2000; // Start generation
    static constexpr uint32_t CR2_STOP = 0x4000; // Stop generation (master mode)
    static constexpr uint32_t CR2_NACK = 0x8000; // NACK generation (slave mode)
    typedef bit_field_t<16, 0xff> CR2_NBYTES; // Number of bytes
    static constexpr uint32_t CR2_RELOAD = 0x1000000; // NBYTES reload mode
    static constexpr uint32_t CR2_AUTOEND = 0x2000000; // Automatic end mode (master mode)
    static constexpr uint32_t CR2_PECBYTE = 0x4000000; // Packet error checking byte

    static constexpr uint32_t OAR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OAR1_OA1_0 = 0x1; // Interface address
    typedef bit_field_t<1, 0x7f> OAR1_OA1_7_1; // Interface address
    typedef bit_field_t<8, 0x3> OAR1_OA1_9_8; // Interface address
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
    typedef bit_field_t<0, 0xfff> TIMEOUTR_TIMEOUTA; // Bus Timeout A
    static constexpr uint32_t TIMEOUTR_TIDLE = 0x1000; // Idle clock timeout detection
    static constexpr uint32_t TIMEOUTR_TIMOUTEN = 0x8000; // Clock timeout enable
    typedef bit_field_t<16, 0xfff> TIMEOUTR_TIMEOUTB; // Bus timeout B
    static constexpr uint32_t TIMEOUTR_TEXTEN = 0x80000000; // Extended clock timeout enable

    static constexpr uint32_t ISR_RESET_VALUE = 0x1; // Reset value
    static constexpr uint32_t ISR_TXE = 0x1; // Transmit data register empty (transmitters)
    static constexpr uint32_t ISR_TXIS = 0x2; // Transmit interrupt status (transmitters)
    static constexpr uint32_t ISR_RXNE = 0x4; // Receive data register not empty (receivers)
    static constexpr uint32_t ISR_ADDR = 0x8; // Address matched (slave mode)
    static constexpr uint32_t ISR_NACKF = 0x10; // Not Acknowledge received flag
    static constexpr uint32_t ISR_STOPF = 0x20; // Stop detection flag
    static constexpr uint32_t ISR_TC = 0x40; // Transfer Complete (master mode)
    static constexpr uint32_t ISR_TCR = 0x80; // Transfer Complete Reload
    static constexpr uint32_t ISR_BERR = 0x100; // Bus error
    static constexpr uint32_t ISR_ARLO = 0x200; // Arbitration lost
    static constexpr uint32_t ISR_OVR = 0x400; // Overrun/Underrun (slave mode)
    static constexpr uint32_t ISR_PECERR = 0x800; // PEC Error in reception
    static constexpr uint32_t ISR_TIMEOUT = 0x1000; // Timeout or tLOW detection flag
    static constexpr uint32_t ISR_ALERT = 0x2000; // SMBus alert
    static constexpr uint32_t ISR_BUSY = 0x8000; // Bus busy
    static constexpr uint32_t ISR_DIR = 0x10000; // Transfer direction (Slave mode)
    typedef bit_field_t<17, 0x7f> ISR_ADDCODE; // Address match code (Slave mode)

    static constexpr uint32_t ICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ICR_ADDRCF = 0x8; // Address matched flag clear
    static constexpr uint32_t ICR_NACKCF = 0x10; // Not Acknowledge flag clear
    static constexpr uint32_t ICR_STOPCF = 0x20; // Stop detection flag clear
    static constexpr uint32_t ICR_BERRCF = 0x100; // Bus error flag clear
    static constexpr uint32_t ICR_ARLOCF = 0x200; // Arbitration Lost flag clear
    static constexpr uint32_t ICR_OVRCF = 0x400; // Overrun/Underrun flag clear
    static constexpr uint32_t ICR_PECCF = 0x800; // PEC Error flag clear
    static constexpr uint32_t ICR_TIMOUTCF = 0x1000; // Timeout detection flag clear
    static constexpr uint32_t ICR_ALERTCF = 0x2000; // Alert flag clear

    static constexpr uint32_t PECR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> PECR_PEC; // Packet error checking register

    static constexpr uint32_t RXDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RXDR_RXDATA; // 8-bit receive data

    static constexpr uint32_t TXDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> TXDR_TXDATA; // 8-bit transmit data
};

// I2C2: Inter-integrated circuit

struct stm32f413_i2c2_t
{
    volatile uint32_t CR1; // Control register 1
    volatile uint32_t CR2; // Control register 2
    volatile uint32_t OAR1; // Own address register 1
    volatile uint32_t OAR2; // Own address register 2
    volatile uint32_t DR; // Data register
    volatile uint32_t SR1; // Status register 1
    volatile uint32_t SR2; // Status register 2
    volatile uint32_t CCR; // Clock control register
    volatile uint32_t TRISE; // TRISE register
    volatile uint32_t FLTR; // FLTR register

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR1_SWRST = 0x8000; // Software reset
    static constexpr uint32_t CR1_ALERT = 0x2000; // SMBus alert
    static constexpr uint32_t CR1_PEC = 0x1000; // Packet error checking
    static constexpr uint32_t CR1_POS = 0x800; // Acknowledge/PEC Position (for data reception)
    static constexpr uint32_t CR1_ACK = 0x400; // Acknowledge enable
    static constexpr uint32_t CR1_STOP = 0x200; // Stop generation
    static constexpr uint32_t CR1_START = 0x100; // Start generation
    static constexpr uint32_t CR1_NOSTRETCH = 0x80; // Clock stretching disable (Slave mode)
    static constexpr uint32_t CR1_ENGC = 0x40; // General call enable
    static constexpr uint32_t CR1_ENPEC = 0x20; // PEC enable
    static constexpr uint32_t CR1_ENARP = 0x10; // ARP enable
    static constexpr uint32_t CR1_SMBTYPE = 0x8; // SMBus type
    static constexpr uint32_t CR1_SMBUS = 0x2; // SMBus mode
    static constexpr uint32_t CR1_PE = 0x1; // Peripheral enable

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR2_LAST = 0x1000; // DMA last transfer
    static constexpr uint32_t CR2_DMAEN = 0x800; // DMA requests enable
    static constexpr uint32_t CR2_ITBUFEN = 0x400; // Buffer interrupt enable
    static constexpr uint32_t CR2_ITEVTEN = 0x200; // Event interrupt enable
    static constexpr uint32_t CR2_ITERREN = 0x100; // Error interrupt enable
    typedef bit_field_t<0, 0x3f> CR2_FREQ; // Peripheral clock frequency

    static constexpr uint32_t OAR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OAR1_ADDMODE = 0x8000; // Addressing mode (slave mode)
    typedef bit_field_t<8, 0x3> OAR1_ADD10; // Interface address
    typedef bit_field_t<1, 0x7f> OAR1_ADD7; // Interface address
    static constexpr uint32_t OAR1_ADD0 = 0x1; // Interface address

    static constexpr uint32_t OAR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<1, 0x7f> OAR2_ADD2; // Interface address
    static constexpr uint32_t OAR2_ENDUAL = 0x1; // Dual addressing mode enable

    static constexpr uint32_t DR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DR_DR; // 8-bit data register

    static constexpr uint32_t SR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR1_SMBALERT = 0x8000; // SMBus alert
    static constexpr uint32_t SR1_TIMEOUT = 0x4000; // Timeout or Tlow error
    static constexpr uint32_t SR1_PECERR = 0x1000; // PEC Error in reception
    static constexpr uint32_t SR1_OVR = 0x800; // Overrun/Underrun
    static constexpr uint32_t SR1_AF = 0x400; // Acknowledge failure
    static constexpr uint32_t SR1_ARLO = 0x200; // Arbitration lost (master mode)
    static constexpr uint32_t SR1_BERR = 0x100; // Bus error
    static constexpr uint32_t SR1_TXE = 0x80; // Data register empty (transmitters)
    static constexpr uint32_t SR1_RXNE = 0x40; // Data register not empty (receivers)
    static constexpr uint32_t SR1_STOPF = 0x10; // Stop detection (slave mode)
    static constexpr uint32_t SR1_ADD10 = 0x8; // 10-bit header sent (Master mode)
    static constexpr uint32_t SR1_BTF = 0x4; // Byte transfer finished
    static constexpr uint32_t SR1_ADDR = 0x2; // Address sent (master mode)/matched (slave mode)
    static constexpr uint32_t SR1_SB = 0x1; // Start bit (Master mode)

    static constexpr uint32_t SR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xff> SR2_PEC; // acket error checking register
    static constexpr uint32_t SR2_DUALF = 0x80; // Dual flag (Slave mode)
    static constexpr uint32_t SR2_SMBHOST = 0x40; // SMBus host header (Slave mode)
    static constexpr uint32_t SR2_SMBDEFAULT = 0x20; // SMBus device default address (Slave mode)
    static constexpr uint32_t SR2_GENCALL = 0x10; // General call address (Slave mode)
    static constexpr uint32_t SR2_TRA = 0x4; // Transmitter/receiver
    static constexpr uint32_t SR2_BUSY = 0x2; // Bus busy
    static constexpr uint32_t SR2_MSL = 0x1; // Master/slave

    static constexpr uint32_t CCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR_F_S = 0x8000; // I2C master mode selection
    static constexpr uint32_t CCR_DUTY = 0x4000; // Fast mode duty cycle
    typedef bit_field_t<0, 0xfff> CCR_CCR; // Clock control register in Fast/Standard mode (Master mode)

    static constexpr uint32_t TRISE_RESET_VALUE = 0x2; // Reset value
    typedef bit_field_t<0, 0x3f> TRISE_TRISE; // Maximum rise time in Fast/Standard mode (Master mode)

    static constexpr uint32_t FLTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> FLTR_DNF; // Digital noise filter
    static constexpr uint32_t FLTR_ANOFF = 0x10; // Analog noise filter OFF
};

// I2C3: Inter-integrated circuit

struct stm32f401_i2c3_t
{
    volatile uint32_t CR1; // Control register 1
    volatile uint32_t CR2; // Control register 2
    volatile uint32_t OAR1; // Own address register 1
    volatile uint32_t OAR2; // Own address register 2
    volatile uint32_t DR; // Data register
    volatile uint32_t SR1; // Status register 1
    volatile uint32_t SR2; // Status register 2
    volatile uint32_t CCR; // Clock control register
    volatile uint32_t TRISE; // TRISE register

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR1_SWRST = 0x8000; // Software reset
    static constexpr uint32_t CR1_ALERT = 0x2000; // SMBus alert
    static constexpr uint32_t CR1_PEC = 0x1000; // Packet error checking
    static constexpr uint32_t CR1_POS = 0x800; // Acknowledge/PEC Position (for data reception)
    static constexpr uint32_t CR1_ACK = 0x400; // Acknowledge enable
    static constexpr uint32_t CR1_STOP = 0x200; // Stop generation
    static constexpr uint32_t CR1_START = 0x100; // Start generation
    static constexpr uint32_t CR1_NOSTRETCH = 0x80; // Clock stretching disable (Slave mode)
    static constexpr uint32_t CR1_ENGC = 0x40; // General call enable
    static constexpr uint32_t CR1_ENPEC = 0x20; // PEC enable
    static constexpr uint32_t CR1_ENARP = 0x10; // ARP enable
    static constexpr uint32_t CR1_SMBTYPE = 0x8; // SMBus type
    static constexpr uint32_t CR1_SMBUS = 0x2; // SMBus mode
    static constexpr uint32_t CR1_PE = 0x1; // Peripheral enable

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR2_LAST = 0x1000; // DMA last transfer
    static constexpr uint32_t CR2_DMAEN = 0x800; // DMA requests enable
    static constexpr uint32_t CR2_ITBUFEN = 0x400; // Buffer interrupt enable
    static constexpr uint32_t CR2_ITEVTEN = 0x200; // Event interrupt enable
    static constexpr uint32_t CR2_ITERREN = 0x100; // Error interrupt enable
    typedef bit_field_t<0, 0x3f> CR2_FREQ; // Peripheral clock frequency

    static constexpr uint32_t OAR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OAR1_ADDMODE = 0x8000; // Addressing mode (slave mode)
    typedef bit_field_t<8, 0x3> OAR1_ADD10; // Interface address
    typedef bit_field_t<1, 0x7f> OAR1_ADD7; // Interface address
    static constexpr uint32_t OAR1_ADD0 = 0x1; // Interface address

    static constexpr uint32_t OAR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<1, 0x7f> OAR2_ADD2; // Interface address
    static constexpr uint32_t OAR2_ENDUAL = 0x1; // Dual addressing mode enable

    static constexpr uint32_t DR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DR_DR; // 8-bit data register

    static constexpr uint32_t SR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR1_SMBALERT = 0x8000; // SMBus alert
    static constexpr uint32_t SR1_TIMEOUT = 0x4000; // Timeout or Tlow error
    static constexpr uint32_t SR1_PECERR = 0x1000; // PEC Error in reception
    static constexpr uint32_t SR1_OVR = 0x800; // Overrun/Underrun
    static constexpr uint32_t SR1_AF = 0x400; // Acknowledge failure
    static constexpr uint32_t SR1_ARLO = 0x200; // Arbitration lost (master mode)
    static constexpr uint32_t SR1_BERR = 0x100; // Bus error
    static constexpr uint32_t SR1_TXE = 0x80; // Data register empty (transmitters)
    static constexpr uint32_t SR1_RXNE = 0x40; // Data register not empty (receivers)
    static constexpr uint32_t SR1_STOPF = 0x10; // Stop detection (slave mode)
    static constexpr uint32_t SR1_ADD10 = 0x8; // 10-bit header sent (Master mode)
    static constexpr uint32_t SR1_BTF = 0x4; // Byte transfer finished
    static constexpr uint32_t SR1_ADDR = 0x2; // Address sent (master mode)/matched (slave mode)
    static constexpr uint32_t SR1_SB = 0x1; // Start bit (Master mode)

    static constexpr uint32_t SR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0xff> SR2_PEC; // acket error checking register
    static constexpr uint32_t SR2_DUALF = 0x80; // Dual flag (Slave mode)
    static constexpr uint32_t SR2_SMBHOST = 0x40; // SMBus host header (Slave mode)
    static constexpr uint32_t SR2_SMBDEFAULT = 0x20; // SMBus device default address (Slave mode)
    static constexpr uint32_t SR2_GENCALL = 0x10; // General call address (Slave mode)
    static constexpr uint32_t SR2_TRA = 0x4; // Transmitter/receiver
    static constexpr uint32_t SR2_BUSY = 0x2; // Bus busy
    static constexpr uint32_t SR2_MSL = 0x1; // Master/slave

    static constexpr uint32_t CCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR_F_S = 0x8000; // I2C master mode selection
    static constexpr uint32_t CCR_DUTY = 0x4000; // Fast mode duty cycle
    typedef bit_field_t<0, 0xfff> CCR_CCR; // Clock control register in Fast/Standard mode (Master mode)

    static constexpr uint32_t TRISE_RESET_VALUE = 0x2; // Reset value
    typedef bit_field_t<0, 0x3f> TRISE_TRISE; // Maximum rise time in Fast/Standard mode (Master mode)
};

// I2C4: Inter-integrated circuit

struct stm32f410_i2c4_t
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
    typedef bit_field_t<0, 0x3ff> CR2_SADD; // Slave address bit (master mode)

    static constexpr uint32_t OAR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ff> OAR1_OA1; // Interface address
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

// I2C4: Inter-integrated circuit

struct stm32f412_i2c4_t
{
    volatile uint32_t CR1; // Control register 1
    volatile uint32_t CR2; // Control register 2
    volatile uint32_t OAR1; // Own address register 1
    volatile uint32_t OAR2; // Own address register 2
    volatile uint32_t TIMINGR; // Timing register
    volatile uint32_t TIMEOUTR; // Timeout register
    volatile uint32_t ISR; // Interrupt and Status register
    volatile uint32_t ICR; // Interrupt clear register
    volatile uint32_t PECR; // PEC register
    volatile uint32_t RXDR; // Receive data register
    volatile uint32_t TXDR; // Transmit data register

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR1_PE = 0x1; // Peripheral enable
    static constexpr uint32_t CR1_TXIE = 0x2; // TXIE
    static constexpr uint32_t CR1_RXIE = 0x4; // RXIE
    static constexpr uint32_t CR1_ADDRE = 0x8; // ADDRE
    static constexpr uint32_t CR1_NACKIE = 0x10; // NACKIE
    static constexpr uint32_t CR1_STOPIE = 0x20; // STOPIE
    static constexpr uint32_t CR1_TCIE = 0x40; // TCIE
    static constexpr uint32_t CR1_ERRIE = 0x80; // ERRIE
    typedef bit_field_t<8, 0xf> CR1_DNF; // DNF
    static constexpr uint32_t CR1_ANFOFF = 0x1000; // ANFOFF
    static constexpr uint32_t CR1_TCDMAEN = 0x4000; // TCDMAEN
    static constexpr uint32_t CR1_RXDMAEN = 0x8000; // RXDMAEN
    static constexpr uint32_t CR1_SBC = 0x10000; // SBC
    static constexpr uint32_t CR1_NOSTRETCH = 0x20000; // NOSTRETCH
    static constexpr uint32_t CR1_WUPEN = 0x40000; // WUPEN
    static constexpr uint32_t CR1_GCEN = 0x80000; // GCEN
    static constexpr uint32_t CR1_SMBHEN = 0x100000; // SMBHEN
    static constexpr uint32_t CR1_SMBDEN = 0x200000; // SMBDEN
    static constexpr uint32_t CR1_ALERTEN = 0x400000; // ALERTEN
    static constexpr uint32_t CR1_PECEN = 0x800000; // PECEN

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR2_SADD0 = 0x1; // Slave address bit 0
    typedef bit_field_t<1, 0x7f> CR2_SADD1_7; // Slave address bit 7_1
    typedef bit_field_t<8, 0x3> CR2_SADD8_9; // Slave address bit 8_9
    static constexpr uint32_t CR2_RD_WRN = 0x400; // Transfer direction
    static constexpr uint32_t CR2_ADD10 = 0x800; // 10-bit addressing mode
    static constexpr uint32_t CR2_HEAD10R = 0x1000; // 10-bit address header only read direction
    static constexpr uint32_t CR2_START = 0x2000; // Start generation
    static constexpr uint32_t CR2_STOP = 0x4000; // Stop generation
    static constexpr uint32_t CR2_NACK = 0x8000; // NACK generation
    typedef bit_field_t<16, 0xff> CR2_NBYTES; // Number of bytes
    static constexpr uint32_t CR2_RELOAD = 0x1000000; // NBYTES reload mode
    static constexpr uint32_t CR2_AUTOEND = 0x2000000; // Automatic end mode
    static constexpr uint32_t CR2_PECBYTE = 0x4000000; // Packet error checking byte

    static constexpr uint32_t OAR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OAR1_OA1 = 0x1; // OA1
    typedef bit_field_t<1, 0x7f> OAR1_OA11_7; // OA11_7
    typedef bit_field_t<8, 0x3> OAR1_OA18_9; // OA18_9
    static constexpr uint32_t OAR1_OA1MODE = 0x400; // OA1MODE
    static constexpr uint32_t OAR1_OA1EN = 0x8000; // OA1EN

    static constexpr uint32_t OAR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<1, 0x7f> OAR2_OA21_7; // OA21_7
    typedef bit_field_t<8, 0x7> OAR2_OA2MSK; // OA2MSK
    static constexpr uint32_t OAR2_OA2EN = 0x8000; // OA2EN

    static constexpr uint32_t TIMINGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> TIMINGR_SCLL; // SCLL
    typedef bit_field_t<8, 0xff> TIMINGR_SCLH; // SCLH
    typedef bit_field_t<16, 0xf> TIMINGR_SDADEL; // SDADEL
    typedef bit_field_t<20, 0xf> TIMINGR_SCLDEL; // SCLDEL
    typedef bit_field_t<28, 0xf> TIMINGR_PRESC; // PRESC

    static constexpr uint32_t TIMEOUTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> TIMEOUTR_TIMEOUTA; // TIMEOUTA
    static constexpr uint32_t TIMEOUTR_TIDLE = 0x1000; // TIDLE
    static constexpr uint32_t TIMEOUTR_TIMOUTEN = 0x8000; // TIMOUTEN
    typedef bit_field_t<16, 0xfff> TIMEOUTR_TIMEOUTB; // TIMEOUTB
    static constexpr uint32_t TIMEOUTR_TEXTEN = 0x80000000; // TEXTEN

    static constexpr uint32_t ISR_RESET_VALUE = 0x1; // Reset value
    static constexpr uint32_t ISR_TXE = 0x1; // TXE
    static constexpr uint32_t ISR_TXIS = 0x2; // TXIS
    static constexpr uint32_t ISR_RXNE = 0x4; // RXNE
    static constexpr uint32_t ISR_ADDR = 0x8; // ADDR
    static constexpr uint32_t ISR_NACKF = 0x10; // NACKF
    static constexpr uint32_t ISR_STOPF = 0x20; // STOPF
    static constexpr uint32_t ISR_TC = 0x40; // TC
    static constexpr uint32_t ISR_TCR = 0x80; // TCR
    static constexpr uint32_t ISR_BERR = 0x100; // BERR
    static constexpr uint32_t ISR_ARLO = 0x200; // ARLO
    static constexpr uint32_t ISR_OVR = 0x400; // OVR
    static constexpr uint32_t ISR_PECERR = 0x800; // PECERR
    static constexpr uint32_t ISR_TIMEOUT = 0x1000; // TIMEOUT
    static constexpr uint32_t ISR_ALERT = 0x2000; // ALERT
    static constexpr uint32_t ISR_BUSY = 0x8000; // BUSY
    static constexpr uint32_t ISR_DIR = 0x10000; // DIR
    typedef bit_field_t<17, 0x7f> ISR_ADDCODE; // ADDCODE

    static constexpr uint32_t ICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ICR_ADDRCF = 0x8; // ADDRCF
    static constexpr uint32_t ICR_NACKCF = 0x10; // NACKCF
    static constexpr uint32_t ICR_STOPCF = 0x20; // STOPCF
    static constexpr uint32_t ICR_BERRCF = 0x100; // BERRCF
    static constexpr uint32_t ICR_ARLOCF = 0x200; // ARLOCF
    static constexpr uint32_t ICR_OVRCF = 0x400; // OVRCF
    static constexpr uint32_t ICR_PECCF = 0x800; // PECCF
    static constexpr uint32_t ICR_TIMOUTCF = 0x1000; // TIMOUTCF
    static constexpr uint32_t ICR_ALERTC = 0x2000; // ALERTC

    static constexpr uint32_t PECR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> PECR_PEC; // PEC

    static constexpr uint32_t RXDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RXDR_RXDATA; // RXDATA

    static constexpr uint32_t TXDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> TXDR_TXDATA; // TXDATA
};

template<>
struct peripheral_t<STM32F413, FMPI2C>
{
    static constexpr periph_t P = FMPI2C;
    using T = stm32f413_fmpi2c_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, FMPI2C>
{
    static constexpr periph_t P = FMPI2C;
    using T = stm32f446_fmpi2c_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, I2C1>
{
    static constexpr periph_t P = I2C1;
    using T = stm32f413_i2c2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, I2C2>
{
    static constexpr periph_t P = I2C2;
    using T = stm32f413_i2c2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, I2C3>
{
    static constexpr periph_t P = I2C3;
    using T = stm32f413_i2c2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, I2C1>
{
    static constexpr periph_t P = I2C1;
    using T = stm32f413_i2c2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, I2C2>
{
    static constexpr periph_t P = I2C2;
    using T = stm32f413_i2c2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, I2C3>
{
    static constexpr periph_t P = I2C3;
    using T = stm32f413_i2c2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, I2C1>
{
    static constexpr periph_t P = I2C1;
    using T = stm32f413_i2c2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, I2C2>
{
    static constexpr periph_t P = I2C2;
    using T = stm32f413_i2c2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, I2C3>
{
    static constexpr periph_t P = I2C3;
    using T = stm32f413_i2c2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, I2C1>
{
    static constexpr periph_t P = I2C1;
    using T = stm32f413_i2c2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, I2C2>
{
    static constexpr periph_t P = I2C2;
    using T = stm32f413_i2c2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, I2C3>
{
    static constexpr periph_t P = I2C3;
    using T = stm32f413_i2c2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, I2C1>
{
    static constexpr periph_t P = I2C1;
    using T = stm32f413_i2c2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, I2C2>
{
    static constexpr periph_t P = I2C2;
    using T = stm32f413_i2c2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, I2C3>
{
    static constexpr periph_t P = I2C3;
    using T = stm32f413_i2c2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F401, I2C1>
{
    static constexpr periph_t P = I2C1;
    using T = stm32f401_i2c3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F401, I2C2>
{
    static constexpr periph_t P = I2C2;
    using T = stm32f401_i2c3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F401, I2C3>
{
    static constexpr periph_t P = I2C3;
    using T = stm32f401_i2c3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, I2C1>
{
    static constexpr periph_t P = I2C1;
    using T = stm32f401_i2c3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, I2C2>
{
    static constexpr periph_t P = I2C2;
    using T = stm32f401_i2c3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, I2C3>
{
    static constexpr periph_t P = I2C3;
    using T = stm32f401_i2c3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, I2C1>
{
    static constexpr periph_t P = I2C1;
    using T = stm32f401_i2c3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, I2C2>
{
    static constexpr periph_t P = I2C2;
    using T = stm32f401_i2c3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, I2C3>
{
    static constexpr periph_t P = I2C3;
    using T = stm32f401_i2c3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F410, I2C1>
{
    static constexpr periph_t P = I2C1;
    using T = stm32f401_i2c3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F410, I2C2>
{
    static constexpr periph_t P = I2C2;
    using T = stm32f401_i2c3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F411, I2C1>
{
    static constexpr periph_t P = I2C1;
    using T = stm32f401_i2c3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F411, I2C2>
{
    static constexpr periph_t P = I2C2;
    using T = stm32f401_i2c3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F411, I2C3>
{
    static constexpr periph_t P = I2C3;
    using T = stm32f401_i2c3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, I2C1>
{
    static constexpr periph_t P = I2C1;
    using T = stm32f401_i2c3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, I2C2>
{
    static constexpr periph_t P = I2C2;
    using T = stm32f401_i2c3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, I2C3>
{
    static constexpr periph_t P = I2C3;
    using T = stm32f401_i2c3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F410, I2C4>
{
    static constexpr periph_t P = I2C4;
    using T = stm32f410_i2c4_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, I2C4>
{
    static constexpr periph_t P = I2C4;
    using T = stm32f412_i2c4_t;
    static T& V;
};

using fmpi2c_t = peripheral_t<svd, FMPI2C>;
using i2c1_t = peripheral_t<svd, I2C1>;
using i2c2_t = peripheral_t<svd, I2C2>;
using i2c3_t = peripheral_t<svd, I2C3>;
using i2c4_t = peripheral_t<svd, I2C4>;

template<int INST> struct i2c_traits {};

template<> struct i2c_traits<1>
{
    using i2c = i2c1_t;
    static constexpr signal_t SCL = I2C1_SCL;
    static constexpr signal_t SDA = I2C1_SDA;
    static constexpr signal_t SMBA = I2C1_SMBA;
    static constexpr clock_source_t CLOCK = APB1_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR |= RCC::T::APB1ENR_I2C1EN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
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
    static constexpr signal_t SMBA = I2C2_SMBA;
    static constexpr clock_source_t CLOCK = APB1_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR |= RCC::T::APB1ENR_I2C2EN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
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

template<> struct i2c_traits<3>
{
    using i2c = i2c3_t;
    static constexpr signal_t SCL = I2C3_SCL;
    static constexpr signal_t SDA = I2C3_SDA;
    static constexpr signal_t SMBA = I2C3_SMBA;
    static constexpr clock_source_t CLOCK = APB1_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR |= RCC::T::APB1ENR_I2C3EN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR &= ~RCC::T::APB1ENR_I2C3EN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR |= RCC::T::APB1RSTR_I2C3RST;
    }
};

template<> struct i2c_traits<4>
{
    using i2c = i2c4_t;
    static constexpr clock_source_t CLOCK = APB1_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR |= RCC::T::APB1ENR_I2C4EN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR &= ~RCC::T::APB1ENR_I2C4EN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR |= RCC::T::APB1RSTR_I2C4RST;
    }
};
