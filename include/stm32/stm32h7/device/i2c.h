#pragma once

////
//
//      STM32H7 I2C peripherals
//
///

// I2C1: I2C

struct stm32h742x_i2c1_t
{
    volatile uint32_t CR1; // Access: No wait states, except if a write access occurs while a write access to this register is ongoing. In this case, wait states are inserted in the second write access until the previous one is completed. The latency of the second write access can be up to 2 x PCLK1 + 6 x I2CCLK.
    volatile uint32_t CR2; // Access: No wait states, except if a write access occurs while a write access to this register is ongoing. In this case, wait states are inserted in the second write access until the previous one is completed. The latency of the second write access can be up to 2 x PCLK1 + 6 x I2CCLK.
    volatile uint32_t OAR1; // Access: No wait states, except if a write access occurs while a write access to this register is ongoing. In this case, wait states are inserted in the second write access until the previous one is completed. The latency of the second write access can be up to 2 x PCLK1 + 6 x I2CCLK.
    volatile uint32_t OAR2; // Access: No wait states, except if a write access occurs while a write access to this register is ongoing. In this case, wait states are inserted in the second write access until the previous one is completed. The latency of the second write access can be up to 2 x PCLK1 + 6 x I2CCLK.
    volatile uint32_t TIMINGR; // Access: No wait states
    volatile uint32_t TIMEOUTR; // Access: No wait states, except if a write access occurs while a write access to this register is ongoing. In this case, wait states are inserted in the second write access until the previous one is completed. The latency of the second write access can be up to 2 x PCLK1 + 6 x I2CCLK.
    volatile uint32_t ISR; // Access: No wait states
    volatile uint32_t ICR; // Access: No wait states
    volatile uint32_t PECR; // Access: No wait states
    volatile uint32_t RXDR; // Access: No wait states
    volatile uint32_t TXDR; // Access: No wait states

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR1_PE = 0x1; // Peripheral enable Note: When PE=0, the I2C SCL and SDA lines are released. Internal state machines and status bits are put back to their reset value. When cleared, PE must be kept low for at least 3 APB clock cycles.
    static constexpr uint32_t CR1_TXIE = 0x2; // TX Interrupt enable
    static constexpr uint32_t CR1_RXIE = 0x4; // RX Interrupt enable
    static constexpr uint32_t CR1_ADDRIE = 0x8; // Address match Interrupt enable (slave only)
    static constexpr uint32_t CR1_NACKIE = 0x10; // Not acknowledge received Interrupt enable
    static constexpr uint32_t CR1_STOPIE = 0x20; // STOP detection Interrupt enable
    static constexpr uint32_t CR1_TCIE = 0x40; // Transfer Complete interrupt enable Note: Any of these events will generate an interrupt: Transfer Complete (TC) Transfer Complete Reload (TCR)
    static constexpr uint32_t CR1_ERRIE = 0x80; // Error interrupts enable Note: Any of these errors generate an interrupt: Arbitration Loss (ARLO) Bus Error detection (BERR) Overrun/Underrun (OVR) Timeout detection (TIMEOUT) PEC error detection (PECERR) Alert pin event detection (ALERT)
    typedef bit_field_t<8, 0xf> CR1_DNF; // Digital noise filter These bits are used to configure the digital noise filter on SDA and SCL input. The digital filter will filter spikes with a length of up to DNF[3:0] * tI2CCLK ... Note: If the analog filter is also enabled, the digital filter is added to the analog filter. This filter can only be programmed when the I2C is disabled (PE = 0).
    static constexpr uint32_t CR1_ANFOFF = 0x1000; // Analog noise filter OFF Note: This bit can only be programmed when the I2C is disabled (PE = 0).
    static constexpr uint32_t CR1_TXDMAEN = 0x4000; // DMA transmission requests enable
    static constexpr uint32_t CR1_RXDMAEN = 0x8000; // DMA reception requests enable
    static constexpr uint32_t CR1_SBC = 0x10000; // Slave byte control This bit is used to enable hardware byte control in slave mode.
    static constexpr uint32_t CR1_NOSTRETCH = 0x20000; // Clock stretching disable This bit is used to disable clock stretching in slave mode. It must be kept cleared in master mode. Note: This bit can only be programmed when the I2C is disabled (PE = 0).
    static constexpr uint32_t CR1_WUPEN = 0x40000; // Wakeup from Stop mode enable Note: If the Wakeup from Stop mode feature is not supported, this bit is reserved and forced by hardware to 0. Please refer to Section25.3: I2C implementation. Note: WUPEN can be set only when DNF = 0000
    static constexpr uint32_t CR1_GCEN = 0x80000; // General call enable
    static constexpr uint32_t CR1_SMBHEN = 0x100000; // SMBus Host address enable Note: If the SMBus feature is not supported, this bit is reserved and forced by hardware to 0. Please refer to Section25.3: I2C implementation.
    static constexpr uint32_t CR1_SMBDEN = 0x200000; // SMBus Device Default address enable Note: If the SMBus feature is not supported, this bit is reserved and forced by hardware to 0. Please refer to Section25.3: I2C implementation.
    static constexpr uint32_t CR1_ALERTEN = 0x400000; // SMBus alert enable Device mode (SMBHEN=0): Host mode (SMBHEN=1): Note: When ALERTEN=0, the SMBA pin can be used as a standard GPIO. If the SMBus feature is not supported, this bit is reserved and forced by hardware to 0. Please refer to Section25.3: I2C implementation.
    static constexpr uint32_t CR1_PECEN = 0x800000; // PEC enable Note: If the SMBus feature is not supported, this bit is reserved and forced by hardware to 0. Please refer to Section25.3: I2C implementation.

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR2_SADD0 = 0x1; // Slave address bit 0 (master mode) In 7-bit addressing mode (ADD10 = 0): This bit is dont care In 10-bit addressing mode (ADD10 = 1): This bit should be written with bit 0 of the slave address to be sent Note: Changing these bits when the START bit is set is not allowed.
    static constexpr uint32_t CR2_SADD1 = 0x2; // Slave address bit 7:1 (master mode) In 7-bit addressing mode (ADD10 = 0): These bits should be written with the 7-bit slave address to be sent In 10-bit addressing mode (ADD10 = 1): These bits should be written with bits 7:1 of the slave address to be sent. Note: Changing these bits when the START bit is set is not allowed.
    static constexpr uint32_t CR2_SADD2 = 0x4; // Slave address bit 7:1 (master mode) In 7-bit addressing mode (ADD10 = 0): These bits should be written with the 7-bit slave address to be sent In 10-bit addressing mode (ADD10 = 1): These bits should be written with bits 7:1 of the slave address to be sent. Note: Changing these bits when the START bit is set is not allowed.
    static constexpr uint32_t CR2_SADD3 = 0x8; // Slave address bit 7:1 (master mode) In 7-bit addressing mode (ADD10 = 0): These bits should be written with the 7-bit slave address to be sent In 10-bit addressing mode (ADD10 = 1): These bits should be written with bits 7:1 of the slave address to be sent. Note: Changing these bits when the START bit is set is not allowed.
    static constexpr uint32_t CR2_SADD4 = 0x10; // Slave address bit 7:1 (master mode) In 7-bit addressing mode (ADD10 = 0): These bits should be written with the 7-bit slave address to be sent In 10-bit addressing mode (ADD10 = 1): These bits should be written with bits 7:1 of the slave address to be sent. Note: Changing these bits when the START bit is set is not allowed.
    static constexpr uint32_t CR2_SADD5 = 0x20; // Slave address bit 7:1 (master mode) In 7-bit addressing mode (ADD10 = 0): These bits should be written with the 7-bit slave address to be sent In 10-bit addressing mode (ADD10 = 1): These bits should be written with bits 7:1 of the slave address to be sent. Note: Changing these bits when the START bit is set is not allowed.
    static constexpr uint32_t CR2_SADD6 = 0x40; // Slave address bit 7:1 (master mode) In 7-bit addressing mode (ADD10 = 0): These bits should be written with the 7-bit slave address to be sent In 10-bit addressing mode (ADD10 = 1): These bits should be written with bits 7:1 of the slave address to be sent. Note: Changing these bits when the START bit is set is not allowed.
    static constexpr uint32_t CR2_SADD7 = 0x80; // Slave address bit 7:1 (master mode) In 7-bit addressing mode (ADD10 = 0): These bits should be written with the 7-bit slave address to be sent In 10-bit addressing mode (ADD10 = 1): These bits should be written with bits 7:1 of the slave address to be sent. Note: Changing these bits when the START bit is set is not allowed.
    static constexpr uint32_t CR2_SADD8 = 0x100; // Slave address bit 9:8 (master mode) In 7-bit addressing mode (ADD10 = 0): These bits are dont care In 10-bit addressing mode (ADD10 = 1): These bits should be written with bits 9:8 of the slave address to be sent Note: Changing these bits when the START bit is set is not allowed.
    static constexpr uint32_t CR2_SADD9 = 0x200; // Slave address bit 9:8 (master mode) In 7-bit addressing mode (ADD10 = 0): These bits are dont care In 10-bit addressing mode (ADD10 = 1): These bits should be written with bits 9:8 of the slave address to be sent Note: Changing these bits when the START bit is set is not allowed.
    static constexpr uint32_t CR2_RD_WRN = 0x400; // Transfer direction (master mode) Note: Changing this bit when the START bit is set is not allowed.
    static constexpr uint32_t CR2_ADD10 = 0x800; // 10-bit addressing mode (master mode) Note: Changing this bit when the START bit is set is not allowed.
    static constexpr uint32_t CR2_HEAD10R = 0x1000; // 10-bit address header only read direction (master receiver mode) Note: Changing this bit when the START bit is set is not allowed.
    static constexpr uint32_t CR2_START = 0x2000; // Start generation This bit is set by software, and cleared by hardware after the Start followed by the address sequence is sent, by an arbitration loss, by a timeout error detection, or when PE = 0. It can also be cleared by software by writing 1 to the ADDRCF bit in the I2C_ICR register. If the I2C is already in master mode with AUTOEND = 0, setting this bit generates a Repeated Start condition when RELOAD=0, after the end of the NBYTES transfer. Otherwise setting this bit will generate a START condition once the bus is free. Note: Writing 0 to this bit has no effect. The START bit can be set even if the bus is BUSY or I2C is in slave mode. This bit has no effect when RELOAD is set.
    static constexpr uint32_t CR2_STOP = 0x4000; // Stop generation (master mode) The bit is set by software, cleared by hardware when a Stop condition is detected, or when PE = 0. In Master Mode: Note: Writing 0 to this bit has no effect.
    static constexpr uint32_t CR2_NACK = 0x8000; // NACK generation (slave mode) The bit is set by software, cleared by hardware when the NACK is sent, or when a STOP condition or an Address matched is received, or when PE=0. Note: Writing 0 to this bit has no effect. This bit is used in slave mode only: in master receiver mode, NACK is automatically generated after last byte preceding STOP or RESTART condition, whatever the NACK bit value. When an overrun occurs in slave receiver NOSTRETCH mode, a NACK is automatically generated whatever the NACK bit value. When hardware PEC checking is enabled (PECBYTE=1), the PEC acknowledge value does not depend on the NACK value.
    typedef bit_field_t<16, 0xff> CR2_NBYTES; // Number of bytes The number of bytes to be transmitted/received is programmed there. This field is dont care in slave mode with SBC=0. Note: Changing these bits when the START bit is set is not allowed.
    static constexpr uint32_t CR2_RELOAD = 0x1000000; // NBYTES reload mode This bit is set and cleared by software.
    static constexpr uint32_t CR2_AUTOEND = 0x2000000; // Automatic end mode (master mode) This bit is set and cleared by software. Note: This bit has no effect in slave mode or when the RELOAD bit is set.
    static constexpr uint32_t CR2_PECBYTE = 0x4000000; // Packet error checking byte This bit is set by software, and cleared by hardware when the PEC is transferred, or when a STOP condition or an Address matched is received, also when PE=0. Note: Writing 0 to this bit has no effect. This bit has no effect when RELOAD is set. This bit has no effect is slave mode when SBC=0. If the SMBus feature is not supported, this bit is reserved and forced by hardware to 0. Please refer to Section25.3: I2C implementation.

    static constexpr uint32_t OAR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ff> OAR1_OA1; // Interface address 7-bit addressing mode: dont care 10-bit addressing mode: bits 9:8 of address Note: These bits can be written only when OA1EN=0. OA1[7:1]: Interface address Bits 7:1 of address Note: These bits can be written only when OA1EN=0. OA1[0]: Interface address 7-bit addressing mode: dont care 10-bit addressing mode: bit 0 of address Note: This bit can be written only when OA1EN=0.
    static constexpr uint32_t OAR1_OA1MODE = 0x400; // Own Address 1 10-bit mode Note: This bit can be written only when OA1EN=0.
    static constexpr uint32_t OAR1_OA1EN = 0x8000; // Own Address 1 enable

    static constexpr uint32_t OAR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<1, 0x7f> OAR2_OA2; // Interface address bits 7:1 of address Note: These bits can be written only when OA2EN=0.
    typedef bit_field_t<8, 0x7> OAR2_OA2MSK; // Own Address 2 masks Note: These bits can be written only when OA2EN=0. As soon as OA2MSK is not equal to 0, the reserved I2C addresses (0b0000xxx and 0b1111xxx) are not acknowledged even if the comparison matches.
    static constexpr uint32_t OAR2_OA2EN = 0x8000; // Own Address 2 enable

    static constexpr uint32_t TIMINGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> TIMINGR_SCLL; // SCL low period (master mode) This field is used to generate the SCL low period in master mode. tSCLL = (SCLL+1) x tPRESC Note: SCLL is also used to generate tBUF and tSU:STA timings.
    typedef bit_field_t<8, 0xff> TIMINGR_SCLH; // SCL high period (master mode) This field is used to generate the SCL high period in master mode. tSCLH = (SCLH+1) x tPRESC Note: SCLH is also used to generate tSU:STO and tHD:STA timing.
    typedef bit_field_t<16, 0xf> TIMINGR_SDADEL; // Data hold time This field is used to generate the delay tSDADEL between SCL falling edge and SDA edge. In master mode and in slave mode with NOSTRETCH = 0, the SCL line is stretched low during tSDADEL. tSDADEL= SDADEL x tPRESC Note: SDADEL is used to generate tHD:DAT timing.
    typedef bit_field_t<20, 0xf> TIMINGR_SCLDEL; // Data setup time This field is used to generate a delay tSCLDEL between SDA edge and SCL rising edge. In master mode and in slave mode with NOSTRETCH = 0, the SCL line is stretched low during tSCLDEL. tSCLDEL = (SCLDEL+1) x tPRESC Note: tSCLDEL is used to generate tSU:DAT timing.
    typedef bit_field_t<28, 0xf> TIMINGR_PRESC; // Timing prescaler This field is used to prescale I2CCLK in order to generate the clock period tPRESC used for data setup and hold counters (refer to I2C timings on page9) and for SCL high and low level counters (refer to I2C master initialization on page24). tPRESC = (PRESC+1) x tI2CCLK

    static constexpr uint32_t TIMEOUTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> TIMEOUTR_TIMEOUTA; // Bus Timeout A This field is used to configure: The SCL low timeout condition tTIMEOUT when TIDLE=0 tTIMEOUT= (TIMEOUTA+1) x 2048 x tI2CCLK The bus idle condition (both SCL and SDA high) when TIDLE=1 tIDLE= (TIMEOUTA+1) x 4 x tI2CCLK Note: These bits can be written only when TIMOUTEN=0.
    static constexpr uint32_t TIMEOUTR_TIDLE = 0x1000; // Idle clock timeout detection Note: This bit can be written only when TIMOUTEN=0.
    static constexpr uint32_t TIMEOUTR_TIMOUTEN = 0x8000; // Clock timeout enable
    typedef bit_field_t<16, 0xfff> TIMEOUTR_TIMEOUTB; // Bus timeout B This field is used to configure the cumulative clock extension timeout: In master mode, the master cumulative clock low extend time (tLOW:MEXT) is detected In slave mode, the slave cumulative clock low extend time (tLOW:SEXT) is detected tLOW:EXT= (TIMEOUTB+1) x 2048 x tI2CCLK Note: These bits can be written only when TEXTEN=0.
    static constexpr uint32_t TIMEOUTR_TEXTEN = 0x80000000; // Extended clock timeout enable

    static constexpr uint32_t ISR_RESET_VALUE = 0x1; // Reset value
    static constexpr uint32_t ISR_TXE = 0x1; // Transmit data register empty (transmitters) This bit is set by hardware when the I2C_TXDR register is empty. It is cleared when the next data to be sent is written in the I2C_TXDR register. This bit can be written to 1 by software in order to flush the transmit data register I2C_TXDR. Note: This bit is set by hardware when PE=0.
    static constexpr uint32_t ISR_TXIS = 0x2; // Transmit interrupt status (transmitters) This bit is set by hardware when the I2C_TXDR register is empty and the data to be transmitted must be written in the I2C_TXDR register. It is cleared when the next data to be sent is written in the I2C_TXDR register. This bit can be written to 1 by software when NOSTRETCH=1 only, in order to generate a TXIS event (interrupt if TXIE=1 or DMA request if TXDMAEN=1). Note: This bit is cleared by hardware when PE=0.
    static constexpr uint32_t ISR_RXNE = 0x4; // Receive data register not empty (receivers) This bit is set by hardware when the received data is copied into the I2C_RXDR register, and is ready to be read. It is cleared when I2C_RXDR is read. Note: This bit is cleared by hardware when PE=0.
    static constexpr uint32_t ISR_ADDR = 0x8; // Address matched (slave mode) This bit is set by hardware as soon as the received slave address matched with one of the enabled slave addresses. It is cleared by software by setting ADDRCF bit. Note: This bit is cleared by hardware when PE=0.
    static constexpr uint32_t ISR_NACKF = 0x10; // Not Acknowledge received flag This flag is set by hardware when a NACK is received after a byte transmission. It is cleared by software by setting the NACKCF bit. Note: This bit is cleared by hardware when PE=0.
    static constexpr uint32_t ISR_STOPF = 0x20; // Stop detection flag This flag is set by hardware when a Stop condition is detected on the bus and the peripheral is involved in this transfer: either as a master, provided that the STOP condition is generated by the peripheral. or as a slave, provided that the peripheral has been addressed previously during this transfer. It is cleared by software by setting the STOPCF bit. Note: This bit is cleared by hardware when PE=0.
    static constexpr uint32_t ISR_TC = 0x40; // Transfer Complete (master mode) This flag is set by hardware when RELOAD=0, AUTOEND=0 and NBYTES data have been transferred. It is cleared by software when START bit or STOP bit is set. Note: This bit is cleared by hardware when PE=0.
    static constexpr uint32_t ISR_TCR = 0x80; // Transfer Complete Reload This flag is set by hardware when RELOAD=1 and NBYTES data have been transferred. It is cleared by software when NBYTES is written to a non-zero value. Note: This bit is cleared by hardware when PE=0. This flag is only for master mode, or for slave mode when the SBC bit is set.
    static constexpr uint32_t ISR_BERR = 0x100; // Bus error This flag is set by hardware when a misplaced Start or Stop condition is detected whereas the peripheral is involved in the transfer. The flag is not set during the address phase in slave mode. It is cleared by software by setting BERRCF bit. Note: This bit is cleared by hardware when PE=0.
    static constexpr uint32_t ISR_ARLO = 0x200; // Arbitration lost This flag is set by hardware in case of arbitration loss. It is cleared by software by setting the ARLOCF bit. Note: This bit is cleared by hardware when PE=0.
    static constexpr uint32_t ISR_OVR = 0x400; // Overrun/Underrun (slave mode) This flag is set by hardware in slave mode with NOSTRETCH=1, when an overrun/underrun error occurs. It is cleared by software by setting the OVRCF bit. Note: This bit is cleared by hardware when PE=0.
    static constexpr uint32_t ISR_PECERR = 0x800; // PEC Error in reception This flag is set by hardware when the received PEC does not match with the PEC register content. A NACK is automatically sent after the wrong PEC reception. It is cleared by software by setting the PECCF bit. Note: This bit is cleared by hardware when PE=0. If the SMBus feature is not supported, this bit is reserved and forced by hardware to 0. Please refer to Section25.3: I2C implementation.
    static constexpr uint32_t ISR_TIMEOUT = 0x1000; // Timeout or tLOW detection flag This flag is set by hardware when a timeout or extended clock timeout occurred. It is cleared by software by setting the TIMEOUTCF bit. Note: This bit is cleared by hardware when PE=0. If the SMBus feature is not supported, this bit is reserved and forced by hardware to 0. Please refer to Section25.3: I2C implementation.
    static constexpr uint32_t ISR_ALERT = 0x2000; // SMBus alert This flag is set by hardware when SMBHEN=1 (SMBus host configuration), ALERTEN=1 and a SMBALERT event (falling edge) is detected on SMBA pin. It is cleared by software by setting the ALERTCF bit. Note: This bit is cleared by hardware when PE=0. If the SMBus feature is not supported, this bit is reserved and forced by hardware to 0. Please refer to Section25.3: I2C implementation.
    static constexpr uint32_t ISR_BUSY = 0x8000; // Bus busy This flag indicates that a communication is in progress on the bus. It is set by hardware when a START condition is detected. It is cleared by hardware when a Stop condition is detected, or when PE=0.
    static constexpr uint32_t ISR_DIR = 0x10000; // Transfer direction (Slave mode) This flag is updated when an address match event occurs (ADDR=1).
    typedef bit_field_t<17, 0x7f> ISR_ADDCODE; // Address match code (Slave mode) These bits are updated with the received address when an address match event occurs (ADDR = 1). In the case of a 10-bit address, ADDCODE provides the 10-bit header followed by the 2 MSBs of the address.

    static constexpr uint32_t ICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ICR_ADDRCF = 0x8; // Address matched flag clear Writing 1 to this bit clears the ADDR flag in the I2C_ISR register. Writing 1 to this bit also clears the START bit in the I2C_CR2 register.
    static constexpr uint32_t ICR_NACKCF = 0x10; // Not Acknowledge flag clear Writing 1 to this bit clears the ACKF flag in I2C_ISR register.
    static constexpr uint32_t ICR_STOPCF = 0x20; // Stop detection flag clear Writing 1 to this bit clears the STOPF flag in the I2C_ISR register.
    static constexpr uint32_t ICR_BERRCF = 0x100; // Bus error flag clear Writing 1 to this bit clears the BERRF flag in the I2C_ISR register.
    static constexpr uint32_t ICR_ARLOCF = 0x200; // Arbitration Lost flag clear Writing 1 to this bit clears the ARLO flag in the I2C_ISR register.
    static constexpr uint32_t ICR_OVRCF = 0x400; // Overrun/Underrun flag clear Writing 1 to this bit clears the OVR flag in the I2C_ISR register.
    static constexpr uint32_t ICR_PECCF = 0x800; // PEC Error flag clear Writing 1 to this bit clears the PECERR flag in the I2C_ISR register. Note: If the SMBus feature is not supported, this bit is reserved and forced by hardware to 0. Please refer to Section25.3: I2C implementation.
    static constexpr uint32_t ICR_TIMOUTCF = 0x1000; // Timeout detection flag clear Writing 1 to this bit clears the TIMEOUT flag in the I2C_ISR register. Note: If the SMBus feature is not supported, this bit is reserved and forced by hardware to 0. Please refer to Section25.3: I2C implementation.
    static constexpr uint32_t ICR_ALERTCF = 0x2000; // Alert flag clear Writing 1 to this bit clears the ALERT flag in the I2C_ISR register. Note: If the SMBus feature is not supported, this bit is reserved and forced by hardware to 0. Please refer to Section25.3: I2C implementation.

    static constexpr uint32_t PECR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> PECR_PEC; // Packet error checking register This field contains the internal PEC when PECEN=1. The PEC is cleared by hardware when PE=0.

    static constexpr uint32_t RXDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> RXDR_RXDATA; // 8-bit receive data Data byte received from the I2C bus.

    static constexpr uint32_t TXDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> TXDR_TXDATA; // 8-bit transmit data Data byte to be transmitted to the I2C bus. Note: These bits can be written only when TXE=1.
};

// I2C1: I2C

struct stm32h750x_i2c1_t
{
    volatile uint32_t I2C_CR1; // Access: No wait states, except if a write access occurs while a write access to this register is ongoing. In this case, wait states are inserted in the second write access until the previous one is completed. The latency of the second write access can be up to 2 x PCLK1 + 6 x I2CCLK.
    volatile uint32_t I2C_CR2; // Access: No wait states, except if a write access occurs while a write access to this register is ongoing. In this case, wait states are inserted in the second write access until the previous one is completed. The latency of the second write access can be up to 2 x PCLK1 + 6 x I2CCLK.
    volatile uint32_t I2C_OAR1; // Access: No wait states, except if a write access occurs while a write access to this register is ongoing. In this case, wait states are inserted in the second write access until the previous one is completed. The latency of the second write access can be up to 2 x PCLK1 + 6 x I2CCLK.
    volatile uint32_t I2C_OAR2; // Access: No wait states, except if a write access occurs while a write access to this register is ongoing. In this case, wait states are inserted in the second write access until the previous one is completed. The latency of the second write access can be up to 2 x PCLK1 + 6 x I2CCLK.
    volatile uint32_t I2C_TIMINGR; // Access: No wait states
    volatile uint32_t I2C_TIMEOUTR; // Access: No wait states, except if a write access occurs while a write access to this register is ongoing. In this case, wait states are inserted in the second write access until the previous one is completed. The latency of the second write access can be up to 2 x PCLK1 + 6 x I2CCLK.
    volatile uint32_t I2C_ISR; // Access: No wait states
    volatile uint32_t I2C_ICR; // Access: No wait states
    volatile uint32_t I2C_PECR; // Access: No wait states
    volatile uint32_t I2C_RXDR; // Access: No wait states
    volatile uint32_t I2C_TXDR; // Access: No wait states

    static constexpr uint32_t I2C_CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t I2C_CR1_PE = 0x1; // Peripheral enable Note: When PE=0, the I2C SCL and SDA lines are released. Internal state machines and status bits are put back to their reset value. When cleared, PE must be kept low for at least 3 APB clock cycles.
    static constexpr uint32_t I2C_CR1_TXIE = 0x2; // TX Interrupt enable
    static constexpr uint32_t I2C_CR1_RXIE = 0x4; // RX Interrupt enable
    static constexpr uint32_t I2C_CR1_ADDRIE = 0x8; // Address match Interrupt enable (slave only)
    static constexpr uint32_t I2C_CR1_NACKIE = 0x10; // Not acknowledge received Interrupt enable
    static constexpr uint32_t I2C_CR1_STOPIE = 0x20; // STOP detection Interrupt enable
    static constexpr uint32_t I2C_CR1_TCIE = 0x40; // Transfer Complete interrupt enable Note: Any of these events will generate an interrupt: Transfer Complete (TC) Transfer Complete Reload (TCR)
    static constexpr uint32_t I2C_CR1_ERRIE = 0x80; // Error interrupts enable Note: Any of these errors generate an interrupt: Arbitration Loss (ARLO) Bus Error detection (BERR) Overrun/Underrun (OVR) Timeout detection (TIMEOUT) PEC error detection (PECERR) Alert pin event detection (ALERT)
    typedef bit_field_t<8, 0xf> I2C_CR1_DNF; // Digital noise filter These bits are used to configure the digital noise filter on SDA and SCL input. The digital filter will filter spikes with a length of up to DNF[3:0] * tI2CCLK ... Note: If the analog filter is also enabled, the digital filter is added to the analog filter. This filter can only be programmed when the I2C is disabled (PE = 0).
    static constexpr uint32_t I2C_CR1_ANFOFF = 0x1000; // Analog noise filter OFF Note: This bit can only be programmed when the I2C is disabled (PE = 0).
    static constexpr uint32_t I2C_CR1_TXDMAEN = 0x4000; // DMA transmission requests enable
    static constexpr uint32_t I2C_CR1_RXDMAEN = 0x8000; // DMA reception requests enable
    static constexpr uint32_t I2C_CR1_SBC = 0x10000; // Slave byte control This bit is used to enable hardware byte control in slave mode.
    static constexpr uint32_t I2C_CR1_NOSTRETCH = 0x20000; // Clock stretching disable This bit is used to disable clock stretching in slave mode. It must be kept cleared in master mode. Note: This bit can only be programmed when the I2C is disabled (PE = 0).
    static constexpr uint32_t I2C_CR1_WUPEN = 0x40000; // Wakeup from Stop mode enable Note: If the Wakeup from Stop mode feature is not supported, this bit is reserved and forced by hardware to 0. Please refer to Section25.3: I2C implementation. Note: WUPEN can be set only when DNF = 0000
    static constexpr uint32_t I2C_CR1_GCEN = 0x80000; // General call enable
    static constexpr uint32_t I2C_CR1_SMBHEN = 0x100000; // SMBus Host address enable Note: If the SMBus feature is not supported, this bit is reserved and forced by hardware to 0. Please refer to Section25.3: I2C implementation.
    static constexpr uint32_t I2C_CR1_SMBDEN = 0x200000; // SMBus Device Default address enable Note: If the SMBus feature is not supported, this bit is reserved and forced by hardware to 0. Please refer to Section25.3: I2C implementation.
    static constexpr uint32_t I2C_CR1_ALERTEN = 0x400000; // SMBus alert enable Device mode (SMBHEN=0): Host mode (SMBHEN=1): Note: When ALERTEN=0, the SMBA pin can be used as a standard GPIO. If the SMBus feature is not supported, this bit is reserved and forced by hardware to 0. Please refer to Section25.3: I2C implementation.
    static constexpr uint32_t I2C_CR1_PECEN = 0x800000; // PEC enable Note: If the SMBus feature is not supported, this bit is reserved and forced by hardware to 0. Please refer to Section25.3: I2C implementation.

    static constexpr uint32_t I2C_CR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t I2C_CR2_SADD0 = 0x1; // Slave address bit 0 (master mode) In 7-bit addressing mode (ADD10 = 0): This bit is dont care In 10-bit addressing mode (ADD10 = 1): This bit should be written with bit 0 of the slave address to be sent Note: Changing these bits when the START bit is set is not allowed.
    static constexpr uint32_t I2C_CR2_SADD1 = 0x2; // Slave address bit 7:1 (master mode) In 7-bit addressing mode (ADD10 = 0): These bits should be written with the 7-bit slave address to be sent In 10-bit addressing mode (ADD10 = 1): These bits should be written with bits 7:1 of the slave address to be sent. Note: Changing these bits when the START bit is set is not allowed.
    static constexpr uint32_t I2C_CR2_SADD2 = 0x4; // Slave address bit 7:1 (master mode) In 7-bit addressing mode (ADD10 = 0): These bits should be written with the 7-bit slave address to be sent In 10-bit addressing mode (ADD10 = 1): These bits should be written with bits 7:1 of the slave address to be sent. Note: Changing these bits when the START bit is set is not allowed.
    static constexpr uint32_t I2C_CR2_SADD3 = 0x8; // Slave address bit 7:1 (master mode) In 7-bit addressing mode (ADD10 = 0): These bits should be written with the 7-bit slave address to be sent In 10-bit addressing mode (ADD10 = 1): These bits should be written with bits 7:1 of the slave address to be sent. Note: Changing these bits when the START bit is set is not allowed.
    static constexpr uint32_t I2C_CR2_SADD4 = 0x10; // Slave address bit 7:1 (master mode) In 7-bit addressing mode (ADD10 = 0): These bits should be written with the 7-bit slave address to be sent In 10-bit addressing mode (ADD10 = 1): These bits should be written with bits 7:1 of the slave address to be sent. Note: Changing these bits when the START bit is set is not allowed.
    static constexpr uint32_t I2C_CR2_SADD5 = 0x20; // Slave address bit 7:1 (master mode) In 7-bit addressing mode (ADD10 = 0): These bits should be written with the 7-bit slave address to be sent In 10-bit addressing mode (ADD10 = 1): These bits should be written with bits 7:1 of the slave address to be sent. Note: Changing these bits when the START bit is set is not allowed.
    static constexpr uint32_t I2C_CR2_SADD6 = 0x40; // Slave address bit 7:1 (master mode) In 7-bit addressing mode (ADD10 = 0): These bits should be written with the 7-bit slave address to be sent In 10-bit addressing mode (ADD10 = 1): These bits should be written with bits 7:1 of the slave address to be sent. Note: Changing these bits when the START bit is set is not allowed.
    static constexpr uint32_t I2C_CR2_SADD7 = 0x80; // Slave address bit 7:1 (master mode) In 7-bit addressing mode (ADD10 = 0): These bits should be written with the 7-bit slave address to be sent In 10-bit addressing mode (ADD10 = 1): These bits should be written with bits 7:1 of the slave address to be sent. Note: Changing these bits when the START bit is set is not allowed.
    static constexpr uint32_t I2C_CR2_SADD8 = 0x100; // Slave address bit 9:8 (master mode) In 7-bit addressing mode (ADD10 = 0): These bits are dont care In 10-bit addressing mode (ADD10 = 1): These bits should be written with bits 9:8 of the slave address to be sent Note: Changing these bits when the START bit is set is not allowed.
    static constexpr uint32_t I2C_CR2_SADD9 = 0x200; // Slave address bit 9:8 (master mode) In 7-bit addressing mode (ADD10 = 0): These bits are dont care In 10-bit addressing mode (ADD10 = 1): These bits should be written with bits 9:8 of the slave address to be sent Note: Changing these bits when the START bit is set is not allowed.
    static constexpr uint32_t I2C_CR2_RD_WRN = 0x400; // Transfer direction (master mode) Note: Changing this bit when the START bit is set is not allowed.
    static constexpr uint32_t I2C_CR2_ADD10 = 0x800; // 10-bit addressing mode (master mode) Note: Changing this bit when the START bit is set is not allowed.
    static constexpr uint32_t I2C_CR2_HEAD10R = 0x1000; // 10-bit address header only read direction (master receiver mode) Note: Changing this bit when the START bit is set is not allowed.
    static constexpr uint32_t I2C_CR2_START = 0x2000; // Start generation This bit is set by software, and cleared by hardware after the Start followed by the address sequence is sent, by an arbitration loss, by a timeout error detection, or when PE = 0. It can also be cleared by software by writing 1 to the ADDRCF bit in the I2C_ICR register. If the I2C is already in master mode with AUTOEND = 0, setting this bit generates a Repeated Start condition when RELOAD=0, after the end of the NBYTES transfer. Otherwise setting this bit will generate a START condition once the bus is free. Note: Writing 0 to this bit has no effect. The START bit can be set even if the bus is BUSY or I2C is in slave mode. This bit has no effect when RELOAD is set.
    static constexpr uint32_t I2C_CR2_STOP = 0x4000; // Stop generation (master mode) The bit is set by software, cleared by hardware when a Stop condition is detected, or when PE = 0. In Master Mode: Note: Writing 0 to this bit has no effect.
    static constexpr uint32_t I2C_CR2_NACK = 0x8000; // NACK generation (slave mode) The bit is set by software, cleared by hardware when the NACK is sent, or when a STOP condition or an Address matched is received, or when PE=0. Note: Writing 0 to this bit has no effect. This bit is used in slave mode only: in master receiver mode, NACK is automatically generated after last byte preceding STOP or RESTART condition, whatever the NACK bit value. When an overrun occurs in slave receiver NOSTRETCH mode, a NACK is automatically generated whatever the NACK bit value. When hardware PEC checking is enabled (PECBYTE=1), the PEC acknowledge value does not depend on the NACK value.
    typedef bit_field_t<16, 0xff> I2C_CR2_NBYTES; // Number of bytes The number of bytes to be transmitted/received is programmed there. This field is dont care in slave mode with SBC=0. Note: Changing these bits when the START bit is set is not allowed.
    static constexpr uint32_t I2C_CR2_RELOAD = 0x1000000; // NBYTES reload mode This bit is set and cleared by software.
    static constexpr uint32_t I2C_CR2_AUTOEND = 0x2000000; // Automatic end mode (master mode) This bit is set and cleared by software. Note: This bit has no effect in slave mode or when the RELOAD bit is set.
    static constexpr uint32_t I2C_CR2_PECBYTE = 0x4000000; // Packet error checking byte This bit is set by software, and cleared by hardware when the PEC is transferred, or when a STOP condition or an Address matched is received, also when PE=0. Note: Writing 0 to this bit has no effect. This bit has no effect when RELOAD is set. This bit has no effect is slave mode when SBC=0. If the SMBus feature is not supported, this bit is reserved and forced by hardware to 0. Please refer to Section25.3: I2C implementation.

    static constexpr uint32_t I2C_OAR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ff> I2C_OAR1_OA1; // Interface address 7-bit addressing mode: dont care 10-bit addressing mode: bits 9:8 of address Note: These bits can be written only when OA1EN=0. OA1[7:1]: Interface address Bits 7:1 of address Note: These bits can be written only when OA1EN=0. OA1[0]: Interface address 7-bit addressing mode: dont care 10-bit addressing mode: bit 0 of address Note: This bit can be written only when OA1EN=0.
    static constexpr uint32_t I2C_OAR1_OA1MODE = 0x400; // Own Address 1 10-bit mode Note: This bit can be written only when OA1EN=0.
    static constexpr uint32_t I2C_OAR1_OA1EN = 0x8000; // Own Address 1 enable

    static constexpr uint32_t I2C_OAR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<1, 0x7f> I2C_OAR2_OA2; // Interface address bits 7:1 of address Note: These bits can be written only when OA2EN=0.
    typedef bit_field_t<8, 0x7> I2C_OAR2_OA2MSK; // Own Address 2 masks Note: These bits can be written only when OA2EN=0. As soon as OA2MSK is not equal to 0, the reserved I2C addresses (0b0000xxx and 0b1111xxx) are not acknowledged even if the comparison matches.
    static constexpr uint32_t I2C_OAR2_OA2EN = 0x8000; // Own Address 2 enable

    static constexpr uint32_t I2C_TIMINGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> I2C_TIMINGR_SCLL; // SCL low period (master mode) This field is used to generate the SCL low period in master mode. tSCLL = (SCLL+1) x tPRESC Note: SCLL is also used to generate tBUF and tSU:STA timings.
    typedef bit_field_t<8, 0xff> I2C_TIMINGR_SCLH; // SCL high period (master mode) This field is used to generate the SCL high period in master mode. tSCLH = (SCLH+1) x tPRESC Note: SCLH is also used to generate tSU:STO and tHD:STA timing.
    typedef bit_field_t<16, 0xf> I2C_TIMINGR_SDADEL; // Data hold time This field is used to generate the delay tSDADEL between SCL falling edge and SDA edge. In master mode and in slave mode with NOSTRETCH = 0, the SCL line is stretched low during tSDADEL. tSDADEL= SDADEL x tPRESC Note: SDADEL is used to generate tHD:DAT timing.
    typedef bit_field_t<20, 0xf> I2C_TIMINGR_SCLDEL; // Data setup time This field is used to generate a delay tSCLDEL between SDA edge and SCL rising edge. In master mode and in slave mode with NOSTRETCH = 0, the SCL line is stretched low during tSCLDEL. tSCLDEL = (SCLDEL+1) x tPRESC Note: tSCLDEL is used to generate tSU:DAT timing.
    typedef bit_field_t<28, 0xf> I2C_TIMINGR_PRESC; // Timing prescaler This field is used to prescale I2CCLK in order to generate the clock period tPRESC used for data setup and hold counters (refer to I2C timings on page9) and for SCL high and low level counters (refer to I2C master initialization on page24). tPRESC = (PRESC+1) x tI2CCLK

    static constexpr uint32_t I2C_TIMEOUTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfff> I2C_TIMEOUTR_TIMEOUTA; // Bus Timeout A This field is used to configure: The SCL low timeout condition tTIMEOUT when TIDLE=0 tTIMEOUT= (TIMEOUTA+1) x 2048 x tI2CCLK The bus idle condition (both SCL and SDA high) when TIDLE=1 tIDLE= (TIMEOUTA+1) x 4 x tI2CCLK Note: These bits can be written only when TIMOUTEN=0.
    static constexpr uint32_t I2C_TIMEOUTR_TIDLE = 0x1000; // Idle clock timeout detection Note: This bit can be written only when TIMOUTEN=0.
    static constexpr uint32_t I2C_TIMEOUTR_TIMOUTEN = 0x8000; // Clock timeout enable
    typedef bit_field_t<16, 0xfff> I2C_TIMEOUTR_TIMEOUTB; // Bus timeout B This field is used to configure the cumulative clock extension timeout: In master mode, the master cumulative clock low extend time (tLOW:MEXT) is detected In slave mode, the slave cumulative clock low extend time (tLOW:SEXT) is detected tLOW:EXT= (TIMEOUTB+1) x 2048 x tI2CCLK Note: These bits can be written only when TEXTEN=0.
    static constexpr uint32_t I2C_TIMEOUTR_TEXTEN = 0x80000000; // Extended clock timeout enable

    static constexpr uint32_t I2C_ISR_RESET_VALUE = 0x1; // Reset value
    static constexpr uint32_t I2C_ISR_TXE = 0x1; // Transmit data register empty (transmitters) This bit is set by hardware when the I2C_TXDR register is empty. It is cleared when the next data to be sent is written in the I2C_TXDR register. This bit can be written to 1 by software in order to flush the transmit data register I2C_TXDR. Note: This bit is set by hardware when PE=0.
    static constexpr uint32_t I2C_ISR_TXIS = 0x2; // Transmit interrupt status (transmitters) This bit is set by hardware when the I2C_TXDR register is empty and the data to be transmitted must be written in the I2C_TXDR register. It is cleared when the next data to be sent is written in the I2C_TXDR register. This bit can be written to 1 by software when NOSTRETCH=1 only, in order to generate a TXIS event (interrupt if TXIE=1 or DMA request if TXDMAEN=1). Note: This bit is cleared by hardware when PE=0.
    static constexpr uint32_t I2C_ISR_RXNE = 0x4; // Receive data register not empty (receivers) This bit is set by hardware when the received data is copied into the I2C_RXDR register, and is ready to be read. It is cleared when I2C_RXDR is read. Note: This bit is cleared by hardware when PE=0.
    static constexpr uint32_t I2C_ISR_ADDR = 0x8; // Address matched (slave mode) This bit is set by hardware as soon as the received slave address matched with one of the enabled slave addresses. It is cleared by software by setting ADDRCF bit. Note: This bit is cleared by hardware when PE=0.
    static constexpr uint32_t I2C_ISR_NACKF = 0x10; // Not Acknowledge received flag This flag is set by hardware when a NACK is received after a byte transmission. It is cleared by software by setting the NACKCF bit. Note: This bit is cleared by hardware when PE=0.
    static constexpr uint32_t I2C_ISR_STOPF = 0x20; // Stop detection flag This flag is set by hardware when a Stop condition is detected on the bus and the peripheral is involved in this transfer: either as a master, provided that the STOP condition is generated by the peripheral. or as a slave, provided that the peripheral has been addressed previously during this transfer. It is cleared by software by setting the STOPCF bit. Note: This bit is cleared by hardware when PE=0.
    static constexpr uint32_t I2C_ISR_TC = 0x40; // Transfer Complete (master mode) This flag is set by hardware when RELOAD=0, AUTOEND=0 and NBYTES data have been transferred. It is cleared by software when START bit or STOP bit is set. Note: This bit is cleared by hardware when PE=0.
    static constexpr uint32_t I2C_ISR_TCR = 0x80; // Transfer Complete Reload This flag is set by hardware when RELOAD=1 and NBYTES data have been transferred. It is cleared by software when NBYTES is written to a non-zero value. Note: This bit is cleared by hardware when PE=0. This flag is only for master mode, or for slave mode when the SBC bit is set.
    static constexpr uint32_t I2C_ISR_BERR = 0x100; // Bus error This flag is set by hardware when a misplaced Start or Stop condition is detected whereas the peripheral is involved in the transfer. The flag is not set during the address phase in slave mode. It is cleared by software by setting BERRCF bit. Note: This bit is cleared by hardware when PE=0.
    static constexpr uint32_t I2C_ISR_ARLO = 0x200; // Arbitration lost This flag is set by hardware in case of arbitration loss. It is cleared by software by setting the ARLOCF bit. Note: This bit is cleared by hardware when PE=0.
    static constexpr uint32_t I2C_ISR_OVR = 0x400; // Overrun/Underrun (slave mode) This flag is set by hardware in slave mode with NOSTRETCH=1, when an overrun/underrun error occurs. It is cleared by software by setting the OVRCF bit. Note: This bit is cleared by hardware when PE=0.
    static constexpr uint32_t I2C_ISR_PECERR = 0x800; // PEC Error in reception This flag is set by hardware when the received PEC does not match with the PEC register content. A NACK is automatically sent after the wrong PEC reception. It is cleared by software by setting the PECCF bit. Note: This bit is cleared by hardware when PE=0. If the SMBus feature is not supported, this bit is reserved and forced by hardware to 0. Please refer to Section25.3: I2C implementation.
    static constexpr uint32_t I2C_ISR_TIMEOUT = 0x1000; // Timeout or tLOW detection flag This flag is set by hardware when a timeout or extended clock timeout occurred. It is cleared by software by setting the TIMEOUTCF bit. Note: This bit is cleared by hardware when PE=0. If the SMBus feature is not supported, this bit is reserved and forced by hardware to 0. Please refer to Section25.3: I2C implementation.
    static constexpr uint32_t I2C_ISR_ALERT = 0x2000; // SMBus alert This flag is set by hardware when SMBHEN=1 (SMBus host configuration), ALERTEN=1 and a SMBALERT event (falling edge) is detected on SMBA pin. It is cleared by software by setting the ALERTCF bit. Note: This bit is cleared by hardware when PE=0. If the SMBus feature is not supported, this bit is reserved and forced by hardware to 0. Please refer to Section25.3: I2C implementation.
    static constexpr uint32_t I2C_ISR_BUSY = 0x8000; // Bus busy This flag indicates that a communication is in progress on the bus. It is set by hardware when a START condition is detected. It is cleared by hardware when a Stop condition is detected, or when PE=0.
    static constexpr uint32_t I2C_ISR_DIR = 0x10000; // Transfer direction (Slave mode) This flag is updated when an address match event occurs (ADDR=1).
    typedef bit_field_t<17, 0x7f> I2C_ISR_ADDCODE; // Address match code (Slave mode) These bits are updated with the received address when an address match event occurs (ADDR = 1). In the case of a 10-bit address, ADDCODE provides the 10-bit header followed by the 2 MSBs of the address.

    static constexpr uint32_t I2C_ICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t I2C_ICR_ADDRCF = 0x8; // Address matched flag clear Writing 1 to this bit clears the ADDR flag in the I2C_ISR register. Writing 1 to this bit also clears the START bit in the I2C_CR2 register.
    static constexpr uint32_t I2C_ICR_NACKCF = 0x10; // Not Acknowledge flag clear Writing 1 to this bit clears the ACKF flag in I2C_ISR register.
    static constexpr uint32_t I2C_ICR_STOPCF = 0x20; // Stop detection flag clear Writing 1 to this bit clears the STOPF flag in the I2C_ISR register.
    static constexpr uint32_t I2C_ICR_BERRCF = 0x100; // Bus error flag clear Writing 1 to this bit clears the BERRF flag in the I2C_ISR register.
    static constexpr uint32_t I2C_ICR_ARLOCF = 0x200; // Arbitration Lost flag clear Writing 1 to this bit clears the ARLO flag in the I2C_ISR register.
    static constexpr uint32_t I2C_ICR_OVRCF = 0x400; // Overrun/Underrun flag clear Writing 1 to this bit clears the OVR flag in the I2C_ISR register.
    static constexpr uint32_t I2C_ICR_PECCF = 0x800; // PEC Error flag clear Writing 1 to this bit clears the PECERR flag in the I2C_ISR register. Note: If the SMBus feature is not supported, this bit is reserved and forced by hardware to 0. Please refer to Section25.3: I2C implementation.
    static constexpr uint32_t I2C_ICR_TIMOUTCF = 0x1000; // Timeout detection flag clear Writing 1 to this bit clears the TIMEOUT flag in the I2C_ISR register. Note: If the SMBus feature is not supported, this bit is reserved and forced by hardware to 0. Please refer to Section25.3: I2C implementation.
    static constexpr uint32_t I2C_ICR_ALERTCF = 0x2000; // Alert flag clear Writing 1 to this bit clears the ALERT flag in the I2C_ISR register. Note: If the SMBus feature is not supported, this bit is reserved and forced by hardware to 0. Please refer to Section25.3: I2C implementation.

    static constexpr uint32_t I2C_PECR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> I2C_PECR_PEC; // Packet error checking register This field contains the internal PEC when PECEN=1. The PEC is cleared by hardware when PE=0.

    static constexpr uint32_t I2C_RXDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> I2C_RXDR_RXDATA; // 8-bit receive data Data byte received from the I2C bus.

    static constexpr uint32_t I2C_TXDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> I2C_TXDR_TXDATA; // 8-bit transmit data Data byte to be transmitted to the I2C bus. Note: These bits can be written only when TXE=1.
};

template<>
struct peripheral_t<STM32H742x, I2C1>
{
    static constexpr periph_t P = I2C1;
    using T = stm32h742x_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, I2C2>
{
    static constexpr periph_t P = I2C2;
    using T = stm32h742x_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, I2C3>
{
    static constexpr periph_t P = I2C3;
    using T = stm32h742x_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, I2C4>
{
    static constexpr periph_t P = I2C4;
    using T = stm32h742x_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, I2C1>
{
    static constexpr periph_t P = I2C1;
    using T = stm32h742x_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, I2C2>
{
    static constexpr periph_t P = I2C2;
    using T = stm32h742x_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, I2C3>
{
    static constexpr periph_t P = I2C3;
    using T = stm32h742x_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, I2C4>
{
    static constexpr periph_t P = I2C4;
    using T = stm32h742x_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, I2C1>
{
    static constexpr periph_t P = I2C1;
    using T = stm32h742x_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, I2C2>
{
    static constexpr periph_t P = I2C2;
    using T = stm32h742x_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, I2C3>
{
    static constexpr periph_t P = I2C3;
    using T = stm32h742x_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, I2C4>
{
    static constexpr periph_t P = I2C4;
    using T = stm32h742x_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, I2C1>
{
    static constexpr periph_t P = I2C1;
    using T = stm32h742x_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, I2C2>
{
    static constexpr periph_t P = I2C2;
    using T = stm32h742x_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, I2C3>
{
    static constexpr periph_t P = I2C3;
    using T = stm32h742x_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, I2C4>
{
    static constexpr periph_t P = I2C4;
    using T = stm32h742x_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, I2C1>
{
    static constexpr periph_t P = I2C1;
    using T = stm32h742x_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, I2C2>
{
    static constexpr periph_t P = I2C2;
    using T = stm32h742x_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, I2C3>
{
    static constexpr periph_t P = I2C3;
    using T = stm32h742x_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, I2C4>
{
    static constexpr periph_t P = I2C4;
    using T = stm32h742x_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, I2C1>
{
    static constexpr periph_t P = I2C1;
    using T = stm32h742x_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, I2C2>
{
    static constexpr periph_t P = I2C2;
    using T = stm32h742x_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, I2C3>
{
    static constexpr periph_t P = I2C3;
    using T = stm32h742x_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, I2C4>
{
    static constexpr periph_t P = I2C4;
    using T = stm32h742x_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, I2C1>
{
    static constexpr periph_t P = I2C1;
    using T = stm32h742x_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, I2C2>
{
    static constexpr periph_t P = I2C2;
    using T = stm32h742x_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, I2C3>
{
    static constexpr periph_t P = I2C3;
    using T = stm32h742x_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, I2C4>
{
    static constexpr periph_t P = I2C4;
    using T = stm32h742x_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, I2C1>
{
    static constexpr periph_t P = I2C1;
    using T = stm32h742x_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, I2C2>
{
    static constexpr periph_t P = I2C2;
    using T = stm32h742x_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, I2C3>
{
    static constexpr periph_t P = I2C3;
    using T = stm32h742x_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, I2C4>
{
    static constexpr periph_t P = I2C4;
    using T = stm32h742x_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, I2C1>
{
    static constexpr periph_t P = I2C1;
    using T = stm32h742x_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, I2C2>
{
    static constexpr periph_t P = I2C2;
    using T = stm32h742x_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, I2C3>
{
    static constexpr periph_t P = I2C3;
    using T = stm32h742x_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, I2C4>
{
    static constexpr periph_t P = I2C4;
    using T = stm32h742x_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, I2C1>
{
    static constexpr periph_t P = I2C1;
    using T = stm32h742x_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, I2C2>
{
    static constexpr periph_t P = I2C2;
    using T = stm32h742x_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, I2C3>
{
    static constexpr periph_t P = I2C3;
    using T = stm32h742x_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, I2C4>
{
    static constexpr periph_t P = I2C4;
    using T = stm32h742x_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, I2C1>
{
    static constexpr periph_t P = I2C1;
    using T = stm32h742x_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, I2C2>
{
    static constexpr periph_t P = I2C2;
    using T = stm32h742x_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, I2C3>
{
    static constexpr periph_t P = I2C3;
    using T = stm32h742x_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, I2C4>
{
    static constexpr periph_t P = I2C4;
    using T = stm32h742x_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, I2C1>
{
    static constexpr periph_t P = I2C1;
    using T = stm32h742x_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, I2C2>
{
    static constexpr periph_t P = I2C2;
    using T = stm32h742x_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, I2C1>
{
    static constexpr periph_t P = I2C1;
    using T = stm32h742x_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, I2C2>
{
    static constexpr periph_t P = I2C2;
    using T = stm32h742x_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, I2C1>
{
    static constexpr periph_t P = I2C1;
    using T = stm32h742x_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, I2C2>
{
    static constexpr periph_t P = I2C2;
    using T = stm32h742x_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, I2C1>
{
    static constexpr periph_t P = I2C1;
    using T = stm32h750x_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, I2C2>
{
    static constexpr periph_t P = I2C2;
    using T = stm32h750x_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, I2C3>
{
    static constexpr periph_t P = I2C3;
    using T = stm32h750x_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, I2C4>
{
    static constexpr periph_t P = I2C4;
    using T = stm32h750x_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, I2C3>
{
    static constexpr periph_t P = I2C3;
    using T = stm32h750x_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, I2C4>
{
    static constexpr periph_t P = I2C4;
    using T = stm32h750x_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, I2C3>
{
    static constexpr periph_t P = I2C3;
    using T = stm32h750x_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, I2C4>
{
    static constexpr periph_t P = I2C4;
    using T = stm32h750x_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, I2C3>
{
    static constexpr periph_t P = I2C3;
    using T = stm32h750x_i2c1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, I2C4>
{
    static constexpr periph_t P = I2C4;
    using T = stm32h750x_i2c1_t;
    static T& V;
};

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
        RCC::V.APB1LENR |= RCC::T::APB1LENR_I2C1EN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1LENR &= ~RCC::T::APB1LENR_I2C1EN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1LRSTR |= RCC::T::APB1LRSTR_I2C1RST;
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
        RCC::V.APB1LENR |= RCC::T::APB1LENR_I2C2EN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1LENR &= ~RCC::T::APB1LENR_I2C2EN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1LRSTR |= RCC::T::APB1LRSTR_I2C2RST;
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
        RCC::V.APB1LENR |= RCC::T::APB1LENR_I2C3EN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1LENR &= ~RCC::T::APB1LENR_I2C3EN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1LRSTR |= RCC::T::APB1LRSTR_I2C3RST;
    }
};

template<> struct i2c_traits<4>
{
    using i2c = i2c4_t;
    static constexpr signal_t SCL = I2C4_SCL;
    static constexpr signal_t SDA = I2C4_SDA;
    static constexpr signal_t SMBA = I2C4_SMBA;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB4ENR |= RCC::T::APB4ENR_I2C4EN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB4ENR &= ~RCC::T::APB4ENR_I2C4EN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB4RSTR |= RCC::T::APB4RSTR_I2C4RST;
    }
};
