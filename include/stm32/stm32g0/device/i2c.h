#pragma once

////
//
//      STM32G0 I2C peripherals
//
///

// I2C1: Inter-integrated circuit

struct stm32g030_i2c1_t
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
    static constexpr uint32_t OAR1_OA1_0 = 0x1; // Interface address
    typedef bit_field_t<1, 0x7f> OAR1_OA1_7_1; // Interface address
    typedef bit_field_t<8, 0x3> OAR1_OA1_8_9; // Interface address
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

// I2C1: Inter-integrated circuit

struct stm32g050_i2c1_t
{
    volatile uint32_t I2C_CR1; // Control register 1
    volatile uint32_t I2C_CR2; // Control register 2
    volatile uint32_t I2C_OAR1; // Own address register 1
    volatile uint32_t I2C_OAR2; // Own address register 2
    volatile uint32_t I2C_TIMINGR; // Timing register
    volatile uint32_t I2C_TIMEOUTR; // Status register 1
    volatile uint32_t I2C_ISR; // Interrupt and Status register
    volatile uint32_t I2C_ICR; // Interrupt clear register
    volatile uint32_t I2C_PECR; // PEC register
    volatile uint32_t I2C_RXDR; // Receive data register
    volatile uint32_t I2C_TXDR; // Transmit data register

    static constexpr uint32_t I2C_CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t I2C_CR1_PE = 0x1; // Peripheral enable Note: When PE=0, the I2C SCL and SDA lines are released. Internal state machines and status bits are put back to their reset value. When cleared, PE must be kept low for at least 3 APB clock cycles.
    static constexpr uint32_t I2C_CR1_TXIE = 0x2; // TX Interrupt enable
    static constexpr uint32_t I2C_CR1_RXIE = 0x4; // RX Interrupt enable
    static constexpr uint32_t I2C_CR1_ADDRIE = 0x8; // Address match Interrupt enable (slave only)
    static constexpr uint32_t I2C_CR1_NACKIE = 0x10; // Not acknowledge received Interrupt enable
    static constexpr uint32_t I2C_CR1_STOPIE = 0x20; // Stop detection Interrupt enable
    static constexpr uint32_t I2C_CR1_TCIE = 0x40; // Transfer Complete interrupt enable Note: Any of these events generate an interrupt: Transfer Complete (TC) Transfer Complete Reload (TCR)
    static constexpr uint32_t I2C_CR1_ERRIE = 0x80; // Error interrupts enable Note: Any of these errors generate an interrupt: Arbitration Loss (ARLO) Bus Error detection (BERR) Overrun/Underrun (OVR) Timeout detection (TIMEOUT) PEC error detection (PECERR) Alert pin event detection (ALERT)
    typedef bit_field_t<8, 0xf> I2C_CR1_DNF; // Digital noise filter These bits are used to configure the digital noise filter on SDA and SCL input. The digital filter, filters spikes with a length of up to DNF[3:0] * tI2CCLK ... Note: If the analog filter is also enabled, the digital filter is added to the analog filter. This filter can only be programmed when the I2C is disabled (PE = 0).
    static constexpr uint32_t I2C_CR1_ANFOFF = 0x1000; // Analog noise filter OFF Note: This bit can only be programmed when the I2C is disabled (PE = 0).
    static constexpr uint32_t I2C_CR1_TXDMAEN = 0x4000; // DMA transmission requests enable
    static constexpr uint32_t I2C_CR1_RXDMAEN = 0x8000; // DMA reception requests enable
    static constexpr uint32_t I2C_CR1_SBC = 0x10000; // Slave byte control This bit is used to enable hardware byte control in slave mode.
    static constexpr uint32_t I2C_CR1_NOSTRETCH = 0x20000; // Clock stretching disable This bit is used to disable clock stretching in slave mode. It must be kept cleared in master mode. Note: This bit can only be programmed when the I2C is disabled (PE = 0).
    static constexpr uint32_t I2C_CR1_WUPEN = 0x40000; // Wakeup from Stop mode enable Note: If the Wakeup from Stop mode feature is not supported, this bit is reserved and forced by hardware to &#39;0. Refer to . Note: WUPEN can be set only when DNF = &#39;0000
    static constexpr uint32_t I2C_CR1_GCEN = 0x80000; // General call enable
    static constexpr uint32_t I2C_CR1_SMBHEN = 0x100000; // SMBus Host Address enable Note: If the SMBus feature is not supported, this bit is reserved and forced by hardware to &#39;0. Refer to .
    static constexpr uint32_t I2C_CR1_SMBDEN = 0x200000; // SMBus Device Default Address enable Note: If the SMBus feature is not supported, this bit is reserved and forced by hardware to &#39;0. Refer to .
    static constexpr uint32_t I2C_CR1_ALERTEN = 0x400000; // SMBus alert enable Note: When ALERTEN=0, the SMBA pin can be used as a standard GPIO. If the SMBus feature is not supported, this bit is reserved and forced by hardware to &#39;0. Refer to .
    static constexpr uint32_t I2C_CR1_PECEN = 0x800000; // PEC enable Note: If the SMBus feature is not supported, this bit is reserved and forced by hardware to &#39;0. Refer to .

    static constexpr uint32_t I2C_CR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ff> I2C_CR2_SADD; // Slave address (master mode) In 7-bit addressing mode (ADD10 = 0): SADD[7:1] should be written with the 7-bit slave address to be sent. The bits SADD[9], SADD[8] and SADD[0] are don&#39;t care. In 10-bit addressing mode (ADD10 = 1): SADD[9:0] should be written with the 10-bit slave address to be sent. Note: Changing these bits when the START bit is set is not allowed.
    static constexpr uint32_t I2C_CR2_RD_WRN = 0x400; // Transfer direction (master mode) Note: Changing this bit when the START bit is set is not allowed.
    static constexpr uint32_t I2C_CR2_ADD10 = 0x800; // 10-bit addressing mode (master mode) Note: Changing this bit when the START bit is set is not allowed.
    static constexpr uint32_t I2C_CR2_HEAD10R = 0x1000; // 10-bit address header only read direction (master receiver mode) Note: Changing this bit when the START bit is set is not allowed.
    static constexpr uint32_t I2C_CR2_START = 0x2000; // Start generation This bit is set by software, and cleared by hardware after the Start followed by the address sequence is sent, by an arbitration loss, by a timeout error detection, or when PE = 0. It can also be cleared by software by writing &#39;1 to the ADDRCF bit in the I2C_ICR register. If the I2C is already in master mode with AUTOEND = 0, setting this bit generates a Repeated Start condition when RELOAD=0, after the end of the NBYTES transfer. Otherwise setting this bit generates a START condition once the bus is free. Note: Writing &#39;0 to this bit has no effect. The START bit can be set even if the bus is BUSY or I2C is in slave mode. This bit has no effect when RELOAD is set.
    static constexpr uint32_t I2C_CR2_STOP = 0x4000; // Stop generation (master mode) The bit is set by software, cleared by hardware when a STOP condition is detected, or when PE = 0. In Master Mode: Note: Writing &#39;0 to this bit has no effect.
    static constexpr uint32_t I2C_CR2_NACK = 0x8000; // NACK generation (slave mode) The bit is set by software, cleared by hardware when the NACK is sent, or when a STOP condition or an Address matched is received, or when PE=0. Note: Writing &#39;0 to this bit has no effect. This bit is used in slave mode only: in master receiver mode, NACK is automatically generated after last byte preceding STOP or RESTART condition, whatever the NACK bit value. When an overrun occurs in slave receiver NOSTRETCH mode, a NACK is automatically generated whatever the NACK bit value. When hardware PEC checking is enabled (PECBYTE=1), the PEC acknowledge value does not depend on the NACK value.
    typedef bit_field_t<16, 0xff> I2C_CR2_NBYTES; // Number of bytes The number of bytes to be transmitted/received is programmed there. This field is dont care in slave mode with SBC=0. Note: Changing these bits when the START bit is set is not allowed.
    static constexpr uint32_t I2C_CR2_RELOAD = 0x1000000; // NBYTES reload mode This bit is set and cleared by software.
    static constexpr uint32_t I2C_CR2_AUTOEND = 0x2000000; // Automatic end mode (master mode) This bit is set and cleared by software. Note: This bit has no effect in slave mode or when the RELOAD bit is set.
    static constexpr uint32_t I2C_CR2_PECBYTE = 0x4000000; // Packet error checking byte This bit is set by software, and cleared by hardware when the PEC is transferred, or when a STOP condition or an Address matched is received, also when PE=0. Note: Writing &#39;0 to this bit has no effect. This bit has no effect when RELOAD is set. This bit has no effect is slave mode when SBC=0. If the SMBus feature is not supported, this bit is reserved and forced by hardware to &#39;0. Refer to .

    static constexpr uint32_t I2C_OAR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ff> I2C_OAR1_OA1; // Interface own slave address 7-bit addressing mode: OA1[7:1] contains the 7-bit own slave address. The bits OA1[9], OA1[8] and OA1[0] are don&#39;t care. 10-bit addressing mode: OA1[9:0] contains the 10-bit own slave address. Note: These bits can be written only when OA1EN=0.
    static constexpr uint32_t I2C_OAR1_OA1MODE = 0x400; // Own Address 1 10-bit mode Note: This bit can be written only when OA1EN=0.
    static constexpr uint32_t I2C_OAR1_OA1EN = 0x8000; // Own Address 1 enable

    static constexpr uint32_t I2C_OAR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<1, 0x7f> I2C_OAR2_OA2; // Interface address 7-bit addressing mode: 7-bit address Note: These bits can be written only when OA2EN=0.
    typedef bit_field_t<8, 0x7> I2C_OAR2_OA2MSK; // Own Address 2 masks Note: These bits can be written only when OA2EN=0. As soon as OA2MSK is not equal to 0, the reserved I2C addresses (0b0000xxx and 0b1111xxx) are not acknowledged even if the comparison matches.
    static constexpr uint32_t I2C_OAR2_OA2EN = 0x8000; // Own Address 2 enable

    static constexpr uint32_t I2C_TIMINGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> I2C_TIMINGR_SCLL; // SCL low period (master mode)
    typedef bit_field_t<8, 0xff> I2C_TIMINGR_SCLH; // SCL high period (master mode)
    typedef bit_field_t<16, 0xf> I2C_TIMINGR_SDADEL; // Data hold time
    typedef bit_field_t<20, 0xf> I2C_TIMINGR_SCLDEL; // Data setup time
    typedef bit_field_t<28, 0xf> I2C_TIMINGR_PRESC; // Timing prescaler

    static constexpr uint32_t I2C_TIMEOUTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> I2C_TIMEOUTR_TIMEOUTA; // Bus Timeout A This field is used to configure: The SCL low timeout condition tTIMEOUT when TIDLE=0 tTIMEOUT= (TIMEOUTA+1) x 2048 x tI2CCLK The bus idle condition (both SCL and SDA high) when TIDLE=1 tIDLE= (TIMEOUTA+1) x 4 x tI2CCLK Note: These bits can be written only when TIMOUTEN=0.
    static constexpr uint32_t I2C_TIMEOUTR_TIDLE = 0x1000; // Idle clock timeout detection Note: This bit can be written only when TIMOUTEN=0.
    static constexpr uint32_t I2C_TIMEOUTR_TIMOUTEN = 0x8000; // Clock timeout enable
    typedef bit_field_t<16, 0xfff> I2C_TIMEOUTR_TIMEOUTB; // Bus timeout B This field is used to configure the cumulative clock extension timeout: In master mode, the master cumulative clock low extend time (tLOW:MEXT) is detected In slave mode, the slave cumulative clock low extend time (tLOW:SEXT) is detected tLOW:EXT= (TIMEOUTB+1) x 2048 x tI2CCLK Note: These bits can be written only when TEXTEN=0.
    static constexpr uint32_t I2C_TIMEOUTR_TEXTEN = 0x80000000; // Extended clock timeout enable

    static constexpr uint32_t I2C_ISR_RESET_VALUE = 0x1; // Reset value
    typedef bit_field_t<17, 0x7f> I2C_ISR_ADDCODE; // Address match code (Slave mode)
    static constexpr uint32_t I2C_ISR_DIR = 0x10000; // Transfer direction (Slave mode) This flag is updated when an address match event occurs (ADDR=1).
    static constexpr uint32_t I2C_ISR_BUSY = 0x8000; // Bus busy
    static constexpr uint32_t I2C_ISR_ALERT = 0x2000; // SMBus alert
    static constexpr uint32_t I2C_ISR_TIMEOUT = 0x1000; // Timeout or t_low detection flag
    static constexpr uint32_t I2C_ISR_PECERR = 0x800; // PEC Error in reception
    static constexpr uint32_t I2C_ISR_OVR = 0x400; // Overrun/Underrun (slave mode)
    static constexpr uint32_t I2C_ISR_ARLO = 0x200; // Arbitration lost
    static constexpr uint32_t I2C_ISR_BERR = 0x100; // Bus error
    static constexpr uint32_t I2C_ISR_TCR = 0x80; // Transfer Complete Reload
    static constexpr uint32_t I2C_ISR_TC = 0x40; // Transfer Complete (master mode)
    static constexpr uint32_t I2C_ISR_STOPF = 0x20; // Stop detection flag
    static constexpr uint32_t I2C_ISR_NACKF = 0x10; // Not acknowledge received flag
    static constexpr uint32_t I2C_ISR_ADDR = 0x8; // Address matched (slave mode)
    static constexpr uint32_t I2C_ISR_RXNE = 0x4; // Receive data register not empty (receivers)
    static constexpr uint32_t I2C_ISR_TXIS = 0x2; // Transmit interrupt status (transmitters)
    static constexpr uint32_t I2C_ISR_TXE = 0x1; // Transmit data register empty (transmitters)

    static constexpr uint32_t I2C_ICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t I2C_ICR_ALERTCF = 0x2000; // Alert flag clear
    static constexpr uint32_t I2C_ICR_TIMOUTCF = 0x1000; // Timeout detection flag clear
    static constexpr uint32_t I2C_ICR_PECCF = 0x800; // PEC Error flag clear
    static constexpr uint32_t I2C_ICR_OVRCF = 0x400; // Overrun/Underrun flag clear
    static constexpr uint32_t I2C_ICR_ARLOCF = 0x200; // Arbitration lost flag clear
    static constexpr uint32_t I2C_ICR_BERRCF = 0x100; // Bus error flag clear
    static constexpr uint32_t I2C_ICR_STOPCF = 0x20; // Stop detection flag clear
    static constexpr uint32_t I2C_ICR_NACKCF = 0x10; // Not Acknowledge flag clear
    static constexpr uint32_t I2C_ICR_ADDRCF = 0x8; // Address Matched flag clear

    static constexpr uint32_t I2C_PECR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> I2C_PECR_PEC; // Packet error checking register

    static constexpr uint32_t I2C_RXDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> I2C_RXDR_RXDATA; // 8-bit receive data

    static constexpr uint32_t I2C_TXDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> I2C_TXDR_TXDATA; // 8-bit transmit data
};

template<>
struct peripheral_t<STM32G030, I2C1>
{
    static constexpr periph_t P = I2C1;
    using T = stm32g030_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G030, I2C2>
{
    static constexpr periph_t P = I2C2;
    using T = stm32g030_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G031, I2C1>
{
    static constexpr periph_t P = I2C1;
    using T = stm32g030_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G031, I2C2>
{
    static constexpr periph_t P = I2C2;
    using T = stm32g030_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G041, I2C1>
{
    static constexpr periph_t P = I2C1;
    using T = stm32g030_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G041, I2C2>
{
    static constexpr periph_t P = I2C2;
    using T = stm32g030_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G070, I2C1>
{
    static constexpr periph_t P = I2C1;
    using T = stm32g030_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G070, I2C2>
{
    static constexpr periph_t P = I2C2;
    using T = stm32g030_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G071, I2C1>
{
    static constexpr periph_t P = I2C1;
    using T = stm32g030_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G071, I2C2>
{
    static constexpr periph_t P = I2C2;
    using T = stm32g030_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G081, I2C1>
{
    static constexpr periph_t P = I2C1;
    using T = stm32g030_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G081, I2C2>
{
    static constexpr periph_t P = I2C2;
    using T = stm32g030_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G050, I2C1>
{
    static constexpr periph_t P = I2C1;
    using T = stm32g050_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G050, I2C2>
{
    static constexpr periph_t P = I2C2;
    using T = stm32g050_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G051, I2C1>
{
    static constexpr periph_t P = I2C1;
    using T = stm32g050_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G051, I2C2>
{
    static constexpr periph_t P = I2C2;
    using T = stm32g050_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G061, I2C1>
{
    static constexpr periph_t P = I2C1;
    using T = stm32g050_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G061, I2C2>
{
    static constexpr periph_t P = I2C2;
    using T = stm32g050_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0B0, I2C1>
{
    static constexpr periph_t P = I2C1;
    using T = stm32g050_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0B0, I2C2>
{
    static constexpr periph_t P = I2C2;
    using T = stm32g050_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0B1, I2C1>
{
    static constexpr periph_t P = I2C1;
    using T = stm32g050_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0B1, I2C2>
{
    static constexpr periph_t P = I2C2;
    using T = stm32g050_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0B1, I2C3>
{
    static constexpr periph_t P = I2C3;
    using T = stm32g050_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0C1, I2C1>
{
    static constexpr periph_t P = I2C1;
    using T = stm32g050_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0C1, I2C2>
{
    static constexpr periph_t P = I2C2;
    using T = stm32g050_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0C1, I2C3>
{
    static constexpr periph_t P = I2C3;
    using T = stm32g050_i2c1_t;
    static T& V;
};

using i2c1_t = peripheral_t<svd, I2C1>;
using i2c2_t = peripheral_t<svd, I2C2>;
using i2c3_t = peripheral_t<svd, I2C3>;

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
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR &= ~RCC::T::APB1ENR_I2C1EN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.APB1SMENR |= RCC::T::APB1SMENR_I2C1SMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.APB1SMENR &= ~RCC::T::APB1SMENR_I2C1SMEN;
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
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR &= ~RCC::T::APB1ENR_I2C2EN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.APB1SMENR |= RCC::T::APB1SMENR_I2C2SMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.APB1SMENR &= ~RCC::T::APB1SMENR_I2C2SMEN;
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
    static constexpr clock_source_t CLOCK = APB1_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR |= RCC::T::APB1ENR_I2C3EN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR &= ~RCC::T::APB1ENR_I2C3EN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.APB1SMENR |= RCC::T::APB1SMENR_I2C3SMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.APB1SMENR &= ~RCC::T::APB1SMENR_I2C3SMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR |= RCC::T::APB1RSTR_I2C3RST;
    }
};

template<> struct dma_request_t<I2C1, I2C_RX>
{
    static constexpr unsigned ID = 10;
};

template<> struct dma_request_t<I2C1, I2C_TX>
{
    static constexpr unsigned ID = 11;
};

template<> struct dma_request_t<I2C2, I2C_RX>
{
    static constexpr unsigned ID = 12;
};

template<> struct dma_request_t<I2C2, I2C_TX>
{
    static constexpr unsigned ID = 13;
};

template<> struct dma_request_t<I2C3, I2C_RX>
{
    static constexpr unsigned ID = 64;
};

template<> struct dma_request_t<I2C3, I2C_TX>
{
    static constexpr unsigned ID = 65;
};
