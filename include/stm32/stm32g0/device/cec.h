#pragma once

////
//
//      STM32G0 CEC peripherals
//
///

// HDMI_CEC: HDMI-CEC

struct stm32g051_hdmi_cec_t
{
    volatile uint32_t CEC_CR; // CEC control register
    volatile uint32_t CEC_CFGR; // This register is used to configure the HDMI-CEC controller. It is mandatory to write CEC_CFGR only when CECEN=0.
    volatile uint32_t CEC_TXDR; // CEC Tx data register
    volatile uint32_t CEC_RXDR; // CEC Rx Data Register
    volatile uint32_t CEC_ISR; // CEC Interrupt and Status Register
    volatile uint32_t CEC_IER; // CEC interrupt enable register

    static constexpr uint32_t CEC_CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CEC_CR_CECEN = 0x1; // CEC enable The CECEN bit is set and cleared by software. CECEN=1 starts message reception and enables the TXSOM control. CECEN=0 disables the CEC peripheral, clears all bits of CEC_CR register and aborts any on-going reception or transmission.
    static constexpr uint32_t CEC_CR_TXSOM = 0x2; // Tx start of message TXSOM is set by software to command transmission of the first byte of a CEC message. If the CEC message consists of only one byte, TXEOM must be set before of TXSOM. Start-bit is effectively started on the CEC line after SFT is counted. If TXSOM is set while a message reception is ongoing, transmission starts after the end of reception. TXSOM is cleared by hardware after the last byte of the message is sent with a positive acknowledge (TXEND=1), in case of transmission underrun (TXUDR=1), negative acknowledge (TXACKE=1), and transmission error (TXERR=1). It is also cleared by CECEN=0. It is not cleared and transmission is automatically retried in case of arbitration lost (ARBLST=1). TXSOM can be also used as a status bit informing application whether any transmission request is pending or under execution. The application can abort a transmission request at any time by clearing the CECEN bit. Note: TXSOM must be set when CECEN=1. TXSOM must be set when transmission data is available into TXDR. HEADER first four bits containing own peripheral address are taken from TXDR[7:4], not from CEC_CFGR.OAR that is used only for reception.
    static constexpr uint32_t CEC_CR_TXEOM = 0x4; // Tx end of message The TXEOM bit is set by software to command transmission of the last byte of a CEC message. TXEOM is cleared by hardware at the same time and under the same conditions as for TXSOM. Note: TXEOM must be set when CECEN=1. TXEOM must be set before writing transmission data to TXDR. If TXEOM is set when TXSOM=0, transmitted message consists of 1 byte (HEADER) only (PING message).

    static constexpr uint32_t CEC_CFGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> CEC_CFGR_SFT; // Signal free time SFT bits are set by software. In the SFT=0x0 configuration, the number of nominal data bit periods waited before transmission is ruled by hardware according to the transmission history. In all the other configurations the SFT number is determined by software. 0x0 2.5 data-bit periods if CEC is the last bus initiator with unsuccessful transmission (ARBLST=1, TXERR=1, TXUDR=1 or TXACKE=1) 4 data-bit periods if CEC is the new bus initiator 6 data-bit periods if CEC is the last bus initiator with successful transmission (TXEOM=1)
    static constexpr uint32_t CEC_CFGR_RXTOL = 0x8; // Rx-tolerance The RXTOL bit is set and cleared by software. Start-bit, +/- 200 s rise, +/- 200 s fall Data-bit: +/- 200 s rise. +/- 350 s fall Start-bit: +/- 400 s rise, +/- 400 s fall Data-bit: +/-300 s rise, +/- 500 s fall
    static constexpr uint32_t CEC_CFGR_BRESTP = 0x10; // Rx-stop on bit rising error The BRESTP bit is set and cleared by software.
    static constexpr uint32_t CEC_CFGR_BREGEN = 0x20; // Generate error-bit on bit rising error The BREGEN bit is set and cleared by software. Note: If BRDNOGEN=0, an error-bit is generated upon BRE detection with BRESTP=1 in broadcast even if BREGEN=0.
    static constexpr uint32_t CEC_CFGR_LBPEGEN = 0x40; // Generate error-bit on long bit period error The LBPEGEN bit is set and cleared by software. Note: If BRDNOGEN=0, an error-bit is generated upon LBPE detection in broadcast even if LBPEGEN=0.
    static constexpr uint32_t CEC_CFGR_BRDNOGEN = 0x80; // Avoid error-bit generation in broadcast The BRDNOGEN bit is set and cleared by software. error-bit on the CEC line. LBPE detection with LBPEGEN=0 on a broadcast message generates an error-bit on the CEC line.
    static constexpr uint32_t CEC_CFGR_SFTOP = 0x100; // SFT option bit The SFTOPT bit is set and cleared by software.
    typedef bit_field_t<16, 0x7fff> CEC_CFGR_OAR; // Own addresses configuration The OAR bits are set by software to select which destination logical addresses has to be considered in receive mode. Each bit, when set, enables the CEC logical address identified by the given bit position. At the end of HEADER reception, the received destination address is compared with the enabled addresses. In case of matching address, the incoming message is acknowledged and received. In case of non-matching address, the incoming message is received only in listen mode (LSTN=1), but without acknowledge sent. Broadcast messages are always received. Example: OAR = 0b000 0000 0010 0001 means that CEC acknowledges addresses 0x0 and 0x5. Consequently, each message directed to one of these addresses is received.
    static constexpr uint32_t CEC_CFGR_LSTN = 0x80000000; // Listen mode LSTN bit is set and cleared by software.

    static constexpr uint32_t CEC_TXDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> CEC_TXDR_TXD; // Tx Data register. TXD is a write-only register containing the data byte to be transmitted. Note: TXD must be written when TXSTART=1

    static constexpr uint32_t CEC_RXDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> CEC_RXDR_RXD; // Rx Data register. RXD is read-only and contains the last data byte which has been received from the CEC line.

    static constexpr uint32_t CEC_ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CEC_ISR_RXBR = 0x1; // Rx-Byte Received The RXBR bit is set by hardware to inform application that a new byte has been received from the CEC line and stored into the RXD buffer. RXBR is cleared by software write at 1.
    static constexpr uint32_t CEC_ISR_RXEND = 0x2; // End Of Reception RXEND is set by hardware to inform application that the last byte of a CEC message is received from the CEC line and stored into the RXD buffer. RXEND is set at the same time of RXBR. RXEND is cleared by software write at 1.
    static constexpr uint32_t CEC_ISR_RXOVR = 0x4; // Rx-Overrun RXOVR is set by hardware if RXBR is not yet cleared at the time a new byte is received on the CEC line and stored into RXD. RXOVR assertion stops message reception so that no acknowledge is sent. In case of broadcast, a negative acknowledge is sent. RXOVR is cleared by software write at 1.
    static constexpr uint32_t CEC_ISR_BRE = 0x8; // Rx-Bit Rising Error BRE is set by hardware in case a Data-Bit waveform is detected with Bit Rising Error. BRE is set either at the time the misplaced rising edge occurs, or at the end of the maximum BRE tolerance allowed by RXTOL, in case rising edge is still longing. BRE stops message reception if BRESTP=1. BRE generates an Error-Bit on the CEC line if BREGEN=1. BRE is cleared by software write at 1.
    static constexpr uint32_t CEC_ISR_SBPE = 0x10; // Rx-Short Bit Period Error SBPE is set by hardware in case a Data-Bit waveform is detected with Short Bit Period Error. SBPE is set at the time the anticipated falling edge occurs. SBPE generates an Error-Bit on the CEC line. SBPE is cleared by software write at 1.
    static constexpr uint32_t CEC_ISR_LBPE = 0x20; // Rx-Long Bit Period Error LBPE is set by hardware in case a Data-Bit waveform is detected with Long Bit Period Error. LBPE is set at the end of the maximum bit-extension tolerance allowed by RXTOL, in case falling edge is still longing. LBPE always stops reception of the CEC message. LBPE generates an Error-Bit on the CEC line if LBPEGEN=1. In case of broadcast, Error-Bit is generated even in case of LBPEGEN=0. LBPE is cleared by software write at 1.
    static constexpr uint32_t CEC_ISR_RXACKE = 0x40; // Rx-Missing Acknowledge In receive mode, RXACKE is set by hardware to inform application that no acknowledge was seen on the CEC line. RXACKE applies only for broadcast messages and in listen mode also for not directly addressed messages (destination address not enabled in OAR). RXACKE aborts message reception. RXACKE is cleared by software write at 1.
    static constexpr uint32_t CEC_ISR_ARBLST = 0x80; // Arbitration Lost ARBLST is set by hardware to inform application that CEC device is switching to reception due to arbitration lost event following the TXSOM command. ARBLST can be due either to a contending CEC device starting earlier or starting at the same time but with higher HEADER priority. After ARBLST assertion TXSOM bit keeps pending for next transmission attempt. ARBLST is cleared by software write at 1.
    static constexpr uint32_t CEC_ISR_TXBR = 0x100; // Tx-Byte Request TXBR is set by hardware to inform application that the next transmission data has to be written to TXDR. TXBR is set when the 4th bit of currently transmitted byte is sent. Application must write the next byte to TXDR within 6 nominal data-bit periods before transmission underrun error occurs (TXUDR). TXBR is cleared by software write at 1.
    static constexpr uint32_t CEC_ISR_TXEND = 0x200; // End of Transmission TXEND is set by hardware to inform application that the last byte of the CEC message has been successfully transmitted. TXEND clears the TXSOM and TXEOM control bits. TXEND is cleared by software write at 1.
    static constexpr uint32_t CEC_ISR_TXUDR = 0x400; // Tx-Buffer Underrun In transmission mode, TXUDR is set by hardware if application was not in time to load TXDR before of next byte transmission. TXUDR aborts message transmission and clears TXSOM and TXEOM control bits. TXUDR is cleared by software write at 1
    static constexpr uint32_t CEC_ISR_TXERR = 0x800; // Tx-Error In transmission mode, TXERR is set by hardware if the CEC initiator detects low impedance on the CEC line while it is released. TXERR aborts message transmission and clears TXSOM and TXEOM controls. TXERR is cleared by software write at 1.
    static constexpr uint32_t CEC_ISR_TXACKE = 0x1000; // Tx-Missing Acknowledge Error In transmission mode, TXACKE is set by hardware to inform application that no acknowledge was received. In case of broadcast transmission, TXACKE informs application that a negative acknowledge was received. TXACKE aborts message transmission and clears TXSOM and TXEOM controls. TXACKE is cleared by software write at 1.

    static constexpr uint32_t CEC_IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CEC_IER_RXBRIE = 0x1; // Rx-byte received interrupt enable The RXBRIE bit is set and cleared by software.
    static constexpr uint32_t CEC_IER_RXENDIE = 0x2; // End of reception interrupt enable The RXENDIE bit is set and cleared by software.
    static constexpr uint32_t CEC_IER_RXOVRIE = 0x4; // Rx-buffer overrun interrupt enable The RXOVRIE bit is set and cleared by software.
    static constexpr uint32_t CEC_IER_BREIE = 0x8; // Bit rising error interrupt enable The BREIE bit is set and cleared by software.
    static constexpr uint32_t CEC_IER_SBPEIE = 0x10; // Short bit period error interrupt enable The SBPEIE bit is set and cleared by software.
    static constexpr uint32_t CEC_IER_LBPEIE = 0x20; // Long bit period error interrupt enable The LBPEIE bit is set and cleared by software.
    static constexpr uint32_t CEC_IER_RXACKIE = 0x40; // Rx-missing acknowledge error interrupt enable The RXACKIE bit is set and cleared by software.
    static constexpr uint32_t CEC_IER_ARBLSTIE = 0x80; // Arbitration lost interrupt enable The ARBLSTIE bit is set and cleared by software.
    static constexpr uint32_t CEC_IER_TXBRIE = 0x100; // Tx-byte request interrupt enable The TXBRIE bit is set and cleared by software.
    static constexpr uint32_t CEC_IER_TXENDIE = 0x200; // Tx-end of message interrupt enable The TXENDIE bit is set and cleared by software.
    static constexpr uint32_t CEC_IER_TXUDRIE = 0x400; // Tx-underrun interrupt enable The TXUDRIE bit is set and cleared by software.
    static constexpr uint32_t CEC_IER_TXERRIE = 0x800; // Tx-error interrupt enable The TXERRIE bit is set and cleared by software.
    static constexpr uint32_t CEC_IER_TXACKIE = 0x1000; // Tx-missing acknowledge error interrupt enable The TXACKEIE bit is set and cleared by software.
};

// HDMI_CEC: HDMI-CEC

struct stm32g070_hdmi_cec_t
{
    volatile uint32_t CEC_CR; // CEC control register
    volatile uint32_t CEC_CFGR; // This register is used to configure the HDMI-CEC controller. It is mandatory to write CEC_CFGR only when CECEN=0.
    volatile uint32_t CEC_TXDR; // CEC Tx data register
    volatile uint32_t CEC_RXDR; // CEC Rx Data Register
    volatile uint32_t CEC_ISR; // CEC Interrupt and Status Register
    volatile uint32_t CEC_IER; // CEC interrupt enable register

    static constexpr uint32_t CEC_CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CEC_CR_CECEN = 0x1; // CEC Enable The CECEN bit is set and cleared by software. CECEN=1 starts message reception and enables the TXSOM control. CECEN=0 disables the CEC peripheral, clears all bits of CEC_CR register and aborts any on-going reception or transmission.
    static constexpr uint32_t CEC_CR_TXSOM = 0x2; // Tx Start Of Message TXSOM is set by software to command transmission of the first byte of a CEC message. If the CEC message consists of only one byte, TXEOM must be set before of TXSOM. Start-Bit is effectively started on the CEC line after SFT is counted. If TXSOM is set while a message reception is ongoing, transmission will start after the end of reception. TXSOM is cleared by hardware after the last byte of the message is sent with a positive acknowledge (TXEND=1), in case of transmission underrun (TXUDR=1), negative acknowledge (TXACKE=1), and transmission error (TXERR=1). It is also cleared by CECEN=0. It is not cleared and transmission is automatically retried in case of arbitration lost (ARBLST=1). TXSOM can be also used as a status bit informing application whether any transmission request is pending or under execution. The application can abort a transmission request at any time by clearing the CECEN bit. Note: TXSOM must be set when CECEN=1 TXSOM must be set when transmission data is available into TXDR HEADERs first four bits containing own peripheral address are taken from TXDR[7:4], not from CEC_CFGR.OAR which is used only for reception
    static constexpr uint32_t CEC_CR_TXEOM = 0x4; // Tx End Of Message The TXEOM bit is set by software to command transmission of the last byte of a CEC message. TXEOM is cleared by hardware at the same time and under the same conditions as for TXSOM. Note: TXEOM must be set when CECEN=1 TXEOM must be set before writing transmission data to TXDR If TXEOM is set when TXSOM=0, transmitted message will consist of 1 byte (HEADER) only (PING message)

    static constexpr uint32_t CEC_CFGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> CEC_CFGR_SFT; // Signal Free Time SFT bits are set by software. In the SFT=0x0 configuration the number of nominal data bit periods waited before transmission is ruled by hardware according to the transmission history. In all the other configurations the SFT number is determined by software. * 0x0 ** 2.5 Data-Bit periods if CEC is the last bus initiator with unsuccessful transmission (ARBLST=1, TXERR=1, TXUDR=1 or TXACKE= 1) ** 4 Data-Bit periods if CEC is the new bus initiator ** 6 Data-Bit periods if CEC is the last bus initiator with successful transmission (TXEOM=1) * 0x1: 0.5 nominal data bit periods * 0x2: 1.5 nominal data bit periods * 0x3: 2.5 nominal data bit periods * 0x4: 3.5 nominal data bit periods * 0x5: 4.5 nominal data bit periods * 0x6: 5.5 nominal data bit periods * 0x7: 6.5 nominal data bit periods
    static constexpr uint32_t CEC_CFGR_RXTOL = 0x8; // Rx-Tolerance The RXTOL bit is set and cleared by software. ** Start-Bit, +/- 200 s rise, +/- 200 s fall. ** Data-Bit: +/- 200 s rise. +/- 350 s fall. ** Start-Bit: +/- 400 s rise, +/- 400 s fall ** Data-Bit: +/-300 s rise, +/- 500 s fall
    static constexpr uint32_t CEC_CFGR_BRESTP = 0x10; // Rx-Stop on Bit Rising Error The BRESTP bit is set and cleared by software.
    static constexpr uint32_t CEC_CFGR_BREGEN = 0x20; // Generate Error-Bit on Bit Rising Error The BREGEN bit is set and cleared by software. Note: If BRDNOGEN=0, an Error-bit is generated upon BRE detection with BRESTP=1 in broadcast even if BREGEN=0
    static constexpr uint32_t CEC_CFGR_LBPEGEN = 0x40; // Generate Error-Bit on Long Bit Period Error The LBPEGEN bit is set and cleared by software. Note: If BRDNOGEN=0, an Error-bit is generated upon LBPE detection in broadcast even if LBPEGEN=0
    static constexpr uint32_t CEC_CFGR_BRDNOGEN = 0x80; // Avoid Error-Bit Generation in Broadcast The BRDNOGEN bit is set and cleared by software.
    static constexpr uint32_t CEC_CFGR_SFTOPT = 0x100; // SFT Option Bit The SFTOPT bit is set and cleared by software.
    typedef bit_field_t<16, 0x7fff> CEC_CFGR_OAR; // Own addresses configuration The OAR bits are set by software to select which destination logical addresses has to be considered in receive mode. Each bit, when set, enables the CEC logical address identified by the given bit position. At the end of HEADER reception, the received destination address is compared with the enabled addresses. In case of matching address, the incoming message is acknowledged and received. In case of non-matching address, the incoming message is received only in listen mode (LSTN=1), but without acknowledge sent. Broadcast messages are always received. Example: OAR = 0b000 0000 0010 0001 means that CEC acknowledges addresses 0x0 and 0x5. Consequently, each message directed to one of these addresses is received.
    static constexpr uint32_t CEC_CFGR_LSTN = 0x80000000; // Listen mode LSTN bit is set and cleared by software.

    static constexpr uint32_t CEC_TXDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> CEC_TXDR_TXD; // Tx Data register. TXD is a write-only register containing the data byte to be transmitted. Note: TXD must be written when TXSTART=1

    static constexpr uint32_t CEC_RXDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> CEC_RXDR_RXD; // Rx Data register. RXD is read-only and contains the last data byte which has been received from the CEC line.

    static constexpr uint32_t CEC_ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CEC_ISR_RXBR = 0x1; // Rx-Byte Received The RXBR bit is set by hardware to inform application that a new byte has been received from the CEC line and stored into the RXD buffer. RXBR is cleared by software write at 1.
    static constexpr uint32_t CEC_ISR_RXEND = 0x2; // End Of Reception RXEND is set by hardware to inform application that the last byte of a CEC message is received from the CEC line and stored into the RXD buffer. RXEND is set at the same time of RXBR. RXEND is cleared by software write at 1.
    static constexpr uint32_t CEC_ISR_RXOVR = 0x4; // Rx-Overrun RXOVR is set by hardware if RXBR is not yet cleared at the time a new byte is received on the CEC line and stored into RXD. RXOVR assertion stops message reception so that no acknowledge is sent. In case of broadcast, a negative acknowledge is sent. RXOVR is cleared by software write at 1.
    static constexpr uint32_t CEC_ISR_BRE = 0x8; // Rx-Bit Rising Error BRE is set by hardware in case a Data-Bit waveform is detected with Bit Rising Error. BRE is set either at the time the misplaced rising edge occurs, or at the end of the maximum BRE tolerance allowed by RXTOL, in case rising edge is still longing. BRE stops message reception if BRESTP=1. BRE generates an Error-Bit on the CEC line if BREGEN=1. BRE is cleared by software write at 1.
    static constexpr uint32_t CEC_ISR_SBPE = 0x10; // Rx-Short Bit Period Error SBPE is set by hardware in case a Data-Bit waveform is detected with Short Bit Period Error. SBPE is set at the time the anticipated falling edge occurs. SBPE generates an Error-Bit on the CEC line. SBPE is cleared by software write at 1.
    static constexpr uint32_t CEC_ISR_LBPE = 0x20; // Rx-Long Bit Period Error LBPE is set by hardware in case a Data-Bit waveform is detected with Long Bit Period Error. LBPE is set at the end of the maximum bit-extension tolerance allowed by RXTOL, in case falling edge is still longing. LBPE always stops reception of the CEC message. LBPE generates an Error-Bit on the CEC line if LBPEGEN=1. In case of broadcast, Error-Bit is generated even in case of LBPEGEN=0. LBPE is cleared by software write at 1.
    static constexpr uint32_t CEC_ISR_RXACKE = 0x40; // Rx-Missing Acknowledge In receive mode, RXACKE is set by hardware to inform application that no acknowledge was seen on the CEC line. RXACKE applies only for broadcast messages and in listen mode also for not directly addressed messages (destination address not enabled in OAR). RXACKE aborts message reception. RXACKE is cleared by software write at 1.
    static constexpr uint32_t CEC_ISR_ARBLST = 0x80; // Arbitration Lost ARBLST is set by hardware to inform application that CEC device is switching to reception due to arbitration lost event following the TXSOM command. ARBLST can be due either to a contending CEC device starting earlier or starting at the same time but with higher HEADER priority. After ARBLST assertion TXSOM bit keeps pending for next transmission attempt. ARBLST is cleared by software write at 1.
    static constexpr uint32_t CEC_ISR_TXBR = 0x100; // Tx-Byte Request TXBR is set by hardware to inform application that the next transmission data has to be written to TXDR. TXBR is set when the 4th bit of currently transmitted byte is sent. Application must write the next byte to TXDR within 6 nominal data-bit periods before transmission underrun error occurs (TXUDR). TXBR is cleared by software write at 1.
    static constexpr uint32_t CEC_ISR_TXEND = 0x200; // End of Transmission TXEND is set by hardware to inform application that the last byte of the CEC message has been successfully transmitted. TXEND clears the TXSOM and TXEOM control bits. TXEND is cleared by software write at 1.
    static constexpr uint32_t CEC_ISR_TXUDR = 0x400; // Tx-Buffer Underrun In transmission mode, TXUDR is set by hardware if application was not in time to load TXDR before of next byte transmission. TXUDR aborts message transmission and clears TXSOM and TXEOM control bits. TXUDR is cleared by software write at 1
    static constexpr uint32_t CEC_ISR_TXERR = 0x800; // Tx-Error In transmission mode, TXERR is set by hardware if the CEC initiator detects low impedance on the CEC line while it is released. TXERR aborts message transmission and clears TXSOM and TXEOM controls. TXERR is cleared by software write at 1.
    static constexpr uint32_t CEC_ISR_TXACKE = 0x1000; // Tx-Missing Acknowledge Error In transmission mode, TXACKE is set by hardware to inform application that no acknowledge was received. In case of broadcast transmission, TXACKE informs application that a negative acknowledge was received. TXACKE aborts message transmission and clears TXSOM and TXEOM controls. TXACKE is cleared by software write at 1.

    static constexpr uint32_t CEC_IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CEC_IER_RXBRIE = 0x1; // Rx-Byte Received Interrupt Enable The RXBRIE bit is set and cleared by software.
    static constexpr uint32_t CEC_IER_RXENDIE = 0x2; // End Of Reception Interrupt Enable The RXENDIE bit is set and cleared by software.
    static constexpr uint32_t CEC_IER_RXOVRIE = 0x4; // Rx-Buffer Overrun Interrupt Enable The RXOVRIE bit is set and cleared by software.
    static constexpr uint32_t CEC_IER_BREIE = 0x8; // Bit Rising Error Interrupt Enable The BREIE bit is set and cleared by software.
    static constexpr uint32_t CEC_IER_SBPEIE = 0x10; // Short Bit Period Error Interrupt Enable The SBPEIE bit is set and cleared by software.
    static constexpr uint32_t CEC_IER_LBPEIE = 0x20; // Long Bit Period Error Interrupt Enable The LBPEIE bit is set and cleared by software.
    static constexpr uint32_t CEC_IER_RXACKIE = 0x40; // Rx-Missing Acknowledge Error Interrupt Enable The RXACKIE bit is set and cleared by software.
    static constexpr uint32_t CEC_IER_ARBLSTIE = 0x80; // Arbitration Lost Interrupt Enable The ARBLSTIE bit is set and cleared by software.
    static constexpr uint32_t CEC_IER_TXBRIE = 0x100; // Tx-Byte Request Interrupt Enable The TXBRIE bit is set and cleared by software.
    static constexpr uint32_t CEC_IER_TXENDIE = 0x200; // Tx-End Of Message Interrupt Enable The TXENDIE bit is set and cleared by software.
    static constexpr uint32_t CEC_IER_TXUDRIE = 0x400; // Tx-Underrun Interrupt Enable The TXUDRIE bit is set and cleared by software.
    static constexpr uint32_t CEC_IER_TXERRIE = 0x800; // Tx-Error Interrupt Enable The TXERRIE bit is set and cleared by software.
    static constexpr uint32_t CEC_IER_TXACKIE = 0x1000; // Tx-Missing Acknowledge Error Interrupt Enable The TXACKEIE bit is set and cleared by software.
};

template<>
struct peripheral_t<STM32G051, HDMI_CEC>
{
    static constexpr periph_t P = HDMI_CEC;
    using T = stm32g051_hdmi_cec_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G061, HDMI_CEC>
{
    static constexpr periph_t P = HDMI_CEC;
    using T = stm32g051_hdmi_cec_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0B1, HDMI_CEC>
{
    static constexpr periph_t P = HDMI_CEC;
    using T = stm32g051_hdmi_cec_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0C1, HDMI_CEC>
{
    static constexpr periph_t P = HDMI_CEC;
    using T = stm32g051_hdmi_cec_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G070, HDMI_CEC>
{
    static constexpr periph_t P = HDMI_CEC;
    using T = stm32g070_hdmi_cec_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G071, HDMI_CEC>
{
    static constexpr periph_t P = HDMI_CEC;
    using T = stm32g070_hdmi_cec_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G081, HDMI_CEC>
{
    static constexpr periph_t P = HDMI_CEC;
    using T = stm32g070_hdmi_cec_t;
    static T& V;
};

using hdmi_cec_t = peripheral_t<svd, HDMI_CEC>;
