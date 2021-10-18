#pragma once

////
//
//      STM32G0 FDCAN peripherals
//
///

// FDCAN1: FD controller area network

struct stm32g0b1_fdcan1_t
{
    volatile uint32_t FDCAN_CREL; // FDCAN core release register
    volatile uint32_t FDCAN_ENDN; // FDCAN endian register
    reserved_t<0x1> _0x8;
    volatile uint32_t FDCAN_DBTP; // FDCAN data bit timing and prescaler register
    volatile uint32_t FDCAN_TEST; // FDCAN test register
    volatile uint32_t FDCAN_RWD; // FDCAN RAM watchdog register
    volatile uint32_t FDCAN_CCCR; // FDCAN CC control register
    volatile uint32_t FDCAN_NBTP; // FDCAN nominal bit timing and prescaler register
    volatile uint32_t FDCAN_TSCC; // FDCAN timestamp counter configuration register
    volatile uint32_t FDCAN_TSCV; // FDCAN timestamp counter value register
    volatile uint32_t FDCAN_TOCC; // FDCAN timeout counter configuration register
    volatile uint32_t FDCAN_TOCV; // FDCAN timeout counter value register
    reserved_t<0x4> _0x30;
    volatile uint32_t FDCAN_ECR; // FDCAN error counter register
    volatile uint32_t FDCAN_PSR; // FDCAN protocol status register
    volatile uint32_t FDCAN_TDCR; // FDCAN transmitter delay compensation register
    reserved_t<0x1> _0x4c;
    volatile uint32_t FDCAN_IR; // FDCAN interrupt register
    volatile uint32_t FDCAN_IE; // FDCAN interrupt enable register
    volatile uint32_t FDCAN_ILS; // FDCAN interrupt line select register
    volatile uint32_t FDCAN_ILE; // FDCAN interrupt line enable register
    reserved_t<0x8> _0x60;
    volatile uint32_t FDCAN_RXGFC; // FDCAN global filter configuration register
    volatile uint32_t FDCAN_XIDAM; // FDCAN extended ID and mask register
    volatile uint32_t FDCAN_HPMS; // FDCAN high-priority message status register
    reserved_t<0x1> _0x8c;
    volatile uint32_t FDCAN_RXF0S; // FDCAN Rx FIFO 0 status register
    volatile uint32_t FDCAN_RXF0A; // CAN Rx FIFO 0 acknowledge register
    volatile uint32_t FDCAN_RXF1S; // FDCAN Rx FIFO 1 status register
    volatile uint32_t FDCAN_RXF1A; // FDCAN Rx FIFO 1 acknowledge register
    reserved_t<0x8> _0xa0;
    volatile uint32_t FDCAN_TXBC; // FDCAN Tx buffer configuration register
    volatile uint32_t FDCAN_TXFQS; // FDCAN Tx FIFO/queue status register
    volatile uint32_t FDCAN_TXBRP; // FDCAN Tx buffer request pending register
    volatile uint32_t FDCAN_TXBAR; // FDCAN Tx buffer add request register
    volatile uint32_t FDCAN_TXBCR; // FDCAN Tx buffer cancellation request register
    volatile uint32_t FDCAN_TXBTO; // FDCAN Tx buffer transmission occurred register
    volatile uint32_t FDCAN_TXBCF; // FDCAN Tx buffer cancellation finished register
    volatile uint32_t FDCAN_TXBTIE; // FDCAN Tx buffer transmission interrupt enable register
    volatile uint32_t FDCAN_TXBCIE; // FDCAN Tx buffer cancellation finished interrupt enable register
    volatile uint32_t FDCAN_TXEFS; // FDCAN Tx event FIFO status register
    volatile uint32_t FDCAN_TXEFA; // FDCAN Tx event FIFO acknowledge register
    reserved_t<0x5> _0xec;
    volatile uint32_t FDCAN_CKDIV; // FDCAN CFG clock divider register

    static constexpr uint32_t FDCAN_CREL_RESET_VALUE = 0x32141218; // Reset value
    typedef bit_field_t<0, 0xff> FDCAN_CREL_DAY; // 18
    typedef bit_field_t<8, 0xff> FDCAN_CREL_MON; // 12
    typedef bit_field_t<16, 0xf> FDCAN_CREL_YEAR; // 4
    typedef bit_field_t<20, 0xf> FDCAN_CREL_SUBSTEP; // 1
    typedef bit_field_t<24, 0xf> FDCAN_CREL_STEP; // 2
    typedef bit_field_t<28, 0xf> FDCAN_CREL_REL; // 3

    static constexpr uint32_t FDCAN_ENDN_RESET_VALUE = 0x87654321; // Reset value
    typedef bit_field_t<0, 0xffffffff> FDCAN_ENDN_ETV; // Endianness test value The endianness test value is 0x8765 4321.


    static constexpr uint32_t FDCAN_DBTP_RESET_VALUE = 0xa33; // Reset value
    typedef bit_field_t<0, 0xf> FDCAN_DBTP_DSJW; // Synchronization jump width Must always be smaller than DTSEG2, valid values are 0 to 15. The value used by the hardware is the one programmed, incremented by 1: tSJW = (DSJW + 1) x tq.
    typedef bit_field_t<4, 0xf> FDCAN_DBTP_DTSEG2; // Data time segment after sample point Valid values are 0 to 15. The value used by the hardware is the one programmed, incremented by 1, i.e. tBS2 = (DTSEG2 + 1) x tq.
    typedef bit_field_t<8, 0x1f> FDCAN_DBTP_DTSEG1; // Data time segment before sample point Valid values are 0 to 31. The value used by the hardware is the one programmed, incremented by 1, i.e. tBS1 = (DTSEG1 + 1) x tq.
    typedef bit_field_t<16, 0x1f> FDCAN_DBTP_DBRP; // Data bit rate prescaler The value by which the oscillator frequency is divided to generate the bit time quanta. The bit time is built up from a multiple of this quanta. Valid values for the Baud Rate Prescaler are 0 to 31. The hardware interpreters this value as the value programmed plus 1.
    static constexpr uint32_t FDCAN_DBTP_TDC = 0x800000; // Transceiver delay compensation

    static constexpr uint32_t FDCAN_TEST_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FDCAN_TEST_LBCK = 0x10; // Loop back mode
    typedef bit_field_t<5, 0x3> FDCAN_TEST_TX; // Control of transmit pin
    static constexpr uint32_t FDCAN_TEST_RX = 0x80; // Receive pin Monitors the actual value of pin FDCANx_RX

    static constexpr uint32_t FDCAN_RWD_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> FDCAN_RWD_WDC; // Watchdog configuration Start value of the message RAM watchdog counter. With the reset value of 00, the counter is disabled. These are protected write (P) bits, write access is possible only when the bit 1 [CCE] and bit 0 [INIT] of FDCAN_CCCR register are set to 1.
    typedef bit_field_t<8, 0xff> FDCAN_RWD_WDV; // Watchdog value Actual message RAM watchdog counter value.

    static constexpr uint32_t FDCAN_CCCR_RESET_VALUE = 0x1; // Reset value
    static constexpr uint32_t FDCAN_CCCR_INIT = 0x1; // Initialization
    static constexpr uint32_t FDCAN_CCCR_CCE = 0x2; // Configuration change enable
    static constexpr uint32_t FDCAN_CCCR_ASM = 0x4; // ASM restricted operation mode The restricted operation mode is intended for applications that adapt themselves to different CAN bit rates. The application tests different bit rates and leaves the Restricted Operation Mode after it has received a valid frame. In the optional Restricted Operation Mode the node is able to transmit and receive data and remote frames and it gives acknowledge to valid frames, but it does not send active error frames or overload frames. In case of an error condition or overload condition, it does not send dominant bits, instead it waits for the occurrence of bus idle condition to resynchronize itself to the CAN communication. The error counters are not incremented. Bit ASM can only be set by software when both CCE and INIT are set to 1. The bit can be reset by the software at any time.
    static constexpr uint32_t FDCAN_CCCR_CSA = 0x8; // Clock stop acknowledge
    static constexpr uint32_t FDCAN_CCCR_CSR = 0x10; // Clock stop request
    static constexpr uint32_t FDCAN_CCCR_MON = 0x20; // Bus monitoring mode Bit MON can only be set by software when both CCE and INIT are set to 1. The bit can be reset by the Host at any time.
    static constexpr uint32_t FDCAN_CCCR_DAR = 0x40; // Disable automatic retransmission
    static constexpr uint32_t FDCAN_CCCR_TEST = 0x80; // Test mode enable
    static constexpr uint32_t FDCAN_CCCR_FDOE = 0x100; // FD operation enable
    static constexpr uint32_t FDCAN_CCCR_BRSE = 0x200; // FDCAN bit rate switching
    static constexpr uint32_t FDCAN_CCCR_PXHD = 0x1000; // Protocol exception handling disable
    static constexpr uint32_t FDCAN_CCCR_EFBI = 0x2000; // Edge filtering during bus integration
    static constexpr uint32_t FDCAN_CCCR_TXP = 0x4000; // If this bit is set, the FDCAN pauses for two CAN bit times before starting the next transmission after successfully transmitting a frame.
    static constexpr uint32_t FDCAN_CCCR_NISO = 0x8000; // Non ISO operation If this bit is set, the FDCAN uses the CAN FD frame format as specified by the Bosch CAN FD Specification V1.0.

    static constexpr uint32_t FDCAN_NBTP_RESET_VALUE = 0x6000a03; // Reset value
    typedef bit_field_t<0, 0x7f> FDCAN_NBTP_NTSEG2; // Nominal time segment after sample point Valid values are 0 to 127. The actual interpretation by the hardware of this value is such that one more than the programmed value is used.
    typedef bit_field_t<8, 0xff> FDCAN_NBTP_NTSEG1; // Nominal time segment before sample point Valid values are 0 to 255. The actual interpretation by the hardware of this value is such that one more than the programmed value is used. These are protected write (P) bits, write access is possible only when the bit 1 [CCE] and bit 0 [INIT] of CCCR register are set to 1.
    typedef bit_field_t<16, 0x1ff> FDCAN_NBTP_NBRP; // Bit rate prescaler Value by which the oscillator frequency is divided for generating the bit time quanta. The bit time is built up from a multiple of this quanta. Valid values are 0 to 511. The actual interpretation by the hardware of this value is such that one more than the value programmed here is used. These are protected write (P) bits, write access is possible only when the bit 1 [CCE] and bit 0 [INIT] of CCCR register are set to 1.
    typedef bit_field_t<25, 0x7f> FDCAN_NBTP_NSJW; // Nominal (re)synchronization jump width Valid values are 0 to 127. The actual interpretation by the hardware of this value is such that the used value is the one programmed incremented by one. These are protected write (P) bits, write access is possible only when the bit 1 [CCE] and bit 0 [INIT] of CCCR register are set to 1.

    static constexpr uint32_t FDCAN_TSCC_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> FDCAN_TSCC_TSS; // Timestamp select These are protected write (P) bits, write access is possible only when the bit 1 [CCE] and bit 0 [INIT] of CCCR register are set to 1.
    typedef bit_field_t<16, 0xf> FDCAN_TSCC_TCP; // Timestamp counter prescaler Configures the timestamp and timeout counters time unit in multiples of CAN bit times [1 16]. The actual interpretation by the hardware of this value is such that one more than the value programmed here is used. In CAN FD mode the internal timestamp counter TCP does not provide a constant time base due to the different CAN bit times between arbitration phase and data phase. Thus CAN FD requires an external counter for timestamp generation (TSS = 10). These are protected write (P) bits, write access is possible only when the bit 1 [CCE] and bit 0 [INIT] of CCCR register are set to 1.

    static constexpr uint32_t FDCAN_TSCV_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> FDCAN_TSCV_TSC; // Timestamp counter The internal/external timestamp counter value is captured on start of frame (both Rx and Tx). When TSCC[TSS] = 01, the timestamp counter is incremented in multiples of CAN bit times [1 16] depending on the configuration of TSCC[TCP]. A wrap around sets interrupt flag IR[TSW]. Write access resets the counter to 0. When TSCC.TSS = 10, TSC reflects the external timestamp counter value. A write access has no impact.

    static constexpr uint32_t FDCAN_TOCC_RESET_VALUE = 0xffff0000; // Reset value
    static constexpr uint32_t FDCAN_TOCC_ETOC = 0x1; // Timeout counter enable This is a protected write (P) bit, write access is possible only when the bit 1 [CCE] and bit 0 [INIT] of CCCR register are set to 1.
    typedef bit_field_t<1, 0x3> FDCAN_TOCC_TOS; // Timeout select When operating in Continuous mode, a write to TOCV presets the counter to the value configured by TOCC[TOP] and continues down-counting. When the timeout counter is controlled by one of the FIFOs, an empty FIFO presets the counter to the value configured by TOCC[TOP]. Down-counting is started when the first FIFO element is stored. These are protected write (P) bits, write access is possible only when the bit 1 [CCE] and bit 0 [INIT] of CCCR register are set to 1.
    typedef bit_field_t<16, 0xffff> FDCAN_TOCC_TOP; // Timeout period Start value of the timeout counter (down-counter). Configures the timeout period.

    static constexpr uint32_t FDCAN_TOCV_RESET_VALUE = 0xffff; // Reset value
    typedef bit_field_t<0, 0xffff> FDCAN_TOCV_TOC; // Timeout counter The timeout counter is decremented in multiples of CAN bit times [1 16] depending on the configuration of TSCC.TCP. When decremented to 0, interrupt flag IR.TOO is set and the Timeout Counter is stopped. Start and reset/restart conditions are configured via TOCC.TOS.


    static constexpr uint32_t FDCAN_ECR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> FDCAN_ECR_TEC; // Transmit error counter Actual state of the transmit error counter, values between 0 and 255. When CCCR.ASM is set, the CAN protocol controller does not increment TEC and REC when a CAN protocol error is detected, but CEL is still incremented.
    typedef bit_field_t<8, 0x7f> FDCAN_ECR_REC; // Receive error counter Actual state of the receive error counter, values between 0 and 127.
    static constexpr uint32_t FDCAN_ECR_RP = 0x8000; // Receive error passive
    typedef bit_field_t<16, 0xff> FDCAN_ECR_CEL; // CAN error logging The counter is incremented each time when a CAN protocol error causes the transmit error counter or the receive error counter to be incremented. It is reset by read access to CEL. The counter stops at 0xFF; the next increment of TEC or REC sets interrupt flag IR[ELO]. Access type is RX: reset on read.

    static constexpr uint32_t FDCAN_PSR_RESET_VALUE = 0x707; // Reset value
    typedef bit_field_t<0, 0x7> FDCAN_PSR_LEC; // Last error code The LEC indicates the type of the last error to occur on the CAN bus. This field is cleared to 0 when a message has been transferred (reception or transmission) without error. Access type is RS: set on read.
    typedef bit_field_t<3, 0x3> FDCAN_PSR_ACT; // Activity Monitors the modules CAN communication state.
    static constexpr uint32_t FDCAN_PSR_EP = 0x20; // Error passive
    static constexpr uint32_t FDCAN_PSR_EW = 0x40; // Warning Sstatus
    static constexpr uint32_t FDCAN_PSR_BO = 0x80; // Bus_Off status
    typedef bit_field_t<8, 0x7> FDCAN_PSR_DLEC; // Data last error code Type of last error that occurred in the data phase of a FDCAN format frame with its BRS flag set. Coding is the same as for LEC. This field is cleared to 0 when a FDCAN format frame with its BRS flag set has been transferred (reception or transmission) without error. Access type is RS: set on read.
    static constexpr uint32_t FDCAN_PSR_RESI = 0x800; // ESI flag of last received FDCAN message This bit is set together with REDL, independent of acceptance filtering. Access type is RX: reset on read.
    static constexpr uint32_t FDCAN_PSR_RBRS = 0x1000; // BRS flag of last received FDCAN message This bit is set together with REDL, independent of acceptance filtering. Access type is RX: reset on read.
    static constexpr uint32_t FDCAN_PSR_REDL = 0x2000; // Received FDCAN message This bit is set independent of acceptance filtering. Access type is RX: reset on read.
    static constexpr uint32_t FDCAN_PSR_PXE = 0x4000; // Protocol exception event
    typedef bit_field_t<16, 0x7f> FDCAN_PSR_TDCV; // Transmitter delay compensation value Position of the secondary sample point, defined by the sum of the measured delay from FDCAN_TX to FDCAN_RX and TDCR.TDCO. The SSP position is, in the data phase, the number of minimum time quanta (mtq) between the start of the transmitted bit and the secondary sample point. Valid values are 0 to 127 mtq.

    static constexpr uint32_t FDCAN_TDCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7f> FDCAN_TDCR_TDCF; // Transmitter delay compensation filter window length Defines the minimum value for the SSP position, dominant edges on FDCAN_RX that would result in an earlier SSP position are ignored for transmitter delay measurements. These are protected write (P) bits, which means that write access by the bits is possible only when the bit 1 [CCE] and bit 0 [INIT] of CCCR register are set to 1.
    typedef bit_field_t<8, 0x7f> FDCAN_TDCR_TDCO; // Transmitter delay compensation offset Offset value defining the distance between the measured delay from FDCAN_TX to FDCAN_RX and the secondary sample point. Valid values are 0 to 127 mtq. These are protected write (P) bits, which means that write access by the bits is possible only when the bit 1 [CCE] and bit 0 [INIT] of CCCR register are set to 1.


    static constexpr uint32_t FDCAN_IR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FDCAN_IR_RF0N = 0x1; // Rx FIFO 0 new message
    static constexpr uint32_t FDCAN_IR_RF0F = 0x2; // Rx FIFO 0 full
    static constexpr uint32_t FDCAN_IR_RF0L = 0x4; // Rx FIFO 0 message lost
    static constexpr uint32_t FDCAN_IR_RF1N = 0x8; // Rx FIFO 1 new message
    static constexpr uint32_t FDCAN_IR_RF1F = 0x10; // Rx FIFO 1 full
    static constexpr uint32_t FDCAN_IR_RF1L = 0x20; // Rx FIFO 1 message lost
    static constexpr uint32_t FDCAN_IR_HPM = 0x40; // High-priority message
    static constexpr uint32_t FDCAN_IR_TC = 0x80; // Transmission completed
    static constexpr uint32_t FDCAN_IR_TCF = 0x100; // Transmission cancellation finished
    static constexpr uint32_t FDCAN_IR_TFE = 0x200; // Tx FIFO empty
    static constexpr uint32_t FDCAN_IR_TEFN = 0x400; // Tx event FIFO New Entry
    static constexpr uint32_t FDCAN_IR_TEFF = 0x800; // Tx event FIFO full
    static constexpr uint32_t FDCAN_IR_TEFL = 0x1000; // Tx event FIFO element lost
    static constexpr uint32_t FDCAN_IR_TSW = 0x2000; // Timestamp wraparound
    static constexpr uint32_t FDCAN_IR_MRAF = 0x4000; // Message RAM access failure The flag is set when the Rx handler: has not completed acceptance filtering or storage of an accepted message until the arbitration field of the following message has been received. In this case acceptance filtering or message storage is aborted and the Rx Handler starts processing of the following message. was unable to write a message to the message RAM. In this case message storage is aborted. In both cases the FIFO put index is not updated. The partly stored message is overwritten when the next message is stored to this location. The flag is also set when the Tx Handler was not able to read a message from the Message RAM in time. In this case message transmission is aborted. In case of a Tx Handler access failure the FDCAN is switched into Restricted Operation Mode (see mode). To leave Restricted Operation Mode, the Host CPU has to reset CCCR.ASM.
    static constexpr uint32_t FDCAN_IR_TOO = 0x8000; // Timeout occurred
    static constexpr uint32_t FDCAN_IR_ELO = 0x10000; // Error logging overflow
    static constexpr uint32_t FDCAN_IR_EP = 0x20000; // Error passive
    static constexpr uint32_t FDCAN_IR_EW = 0x40000; // Warning status
    static constexpr uint32_t FDCAN_IR_BO = 0x80000; // Bus_Off status
    static constexpr uint32_t FDCAN_IR_WDI = 0x100000; // Watchdog interrupt
    static constexpr uint32_t FDCAN_IR_PEA = 0x200000; // Protocol error in arbitration phase (nominal bit time is used)
    static constexpr uint32_t FDCAN_IR_PED = 0x400000; // Protocol error in data phase (data bit time is used)
    static constexpr uint32_t FDCAN_IR_ARA = 0x800000; // Access to reserved address

    static constexpr uint32_t FDCAN_IE_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FDCAN_IE_RF0NE = 0x1; // Rx FIFO 0 new message interrupt enable
    static constexpr uint32_t FDCAN_IE_RF0FE = 0x2; // Rx FIFO 0 full interrupt enable
    static constexpr uint32_t FDCAN_IE_RF0LE = 0x4; // Rx FIFO 0 message lost interrupt enable
    static constexpr uint32_t FDCAN_IE_RF1NE = 0x8; // Rx FIFO 1 new message interrupt enable
    static constexpr uint32_t FDCAN_IE_RF1FE = 0x10; // Rx FIFO 1 full interrupt enable
    static constexpr uint32_t FDCAN_IE_RF1LE = 0x20; // Rx FIFO 1 message lost interrupt enable
    static constexpr uint32_t FDCAN_IE_HPME = 0x40; // High-priority message interrupt enable
    static constexpr uint32_t FDCAN_IE_TCE = 0x80; // Transmission completed interrupt enable
    static constexpr uint32_t FDCAN_IE_TCFE = 0x100; // Transmission cancellation finished interrupt enable
    static constexpr uint32_t FDCAN_IE_TFEE = 0x200; // Tx FIFO empty interrupt enable
    static constexpr uint32_t FDCAN_IE_TEFNE = 0x400; // Tx event FIFO new entry interrupt enable
    static constexpr uint32_t FDCAN_IE_TEFFE = 0x800; // Tx event FIFO full interrupt enable
    static constexpr uint32_t FDCAN_IE_TEFLE = 0x1000; // Tx event FIFO element lost interrupt enable
    static constexpr uint32_t FDCAN_IE_TSWE = 0x2000; // Timestamp wraparound interrupt enable
    static constexpr uint32_t FDCAN_IE_MRAFE = 0x4000; // Message RAM access failure interrupt enable
    static constexpr uint32_t FDCAN_IE_TOOE = 0x8000; // Timeout occurred interrupt enable
    static constexpr uint32_t FDCAN_IE_ELOE = 0x10000; // Error logging overflow interrupt enable
    static constexpr uint32_t FDCAN_IE_EPE = 0x20000; // Error passive interrupt enable
    static constexpr uint32_t FDCAN_IE_EWE = 0x40000; // Warning status interrupt enable
    static constexpr uint32_t FDCAN_IE_BOE = 0x80000; // Bus_Off status
    static constexpr uint32_t FDCAN_IE_WDIE = 0x100000; // Watchdog interrupt enable
    static constexpr uint32_t FDCAN_IE_PEAE = 0x200000; // Protocol error in arbitration phase enable
    static constexpr uint32_t FDCAN_IE_PEDE = 0x400000; // Protocol error in data phase enable
    static constexpr uint32_t FDCAN_IE_ARAE = 0x800000; // Access to reserved address enable

    static constexpr uint32_t FDCAN_ILS_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FDCAN_ILS_RXFIFO0 = 0x1; // RX FIFO bit grouping the following interruption RF0LL: Rx FIFO 0 message lost interrupt line RF0FL: Rx FIFO 0 full interrupt line RF0NL: Rx FIFO 0 new message interrupt line
    static constexpr uint32_t FDCAN_ILS_RXFIFO1 = 0x2; // RX FIFO bit grouping the following interruption RF1LL: Rx FIFO 1 message lost interrupt line RF1FL: Rx FIFO 1 full Interrupt line RF1NL: Rx FIFO 1 new message interrupt line
    static constexpr uint32_t FDCAN_ILS_SMSG = 0x4; // Status message bit grouping the following interruption TCFL: Transmission cancellation finished interrupt line TCL: Transmission completed interrupt line HPML: High-priority message interrupt line
    static constexpr uint32_t FDCAN_ILS_TFERR = 0x8; // Tx FIFO ERROR grouping the following interruption TEFLL: Tx event FIFO element lost interrupt line TEFFL: Tx event FIFO full interrupt line TEFNL: Tx event FIFO new entry interrupt line TFEL: Tx FIFO empty interrupt line
    static constexpr uint32_t FDCAN_ILS_MISC = 0x10; // Interrupt regrouping the following interruption TOOL: Timeout occurred interrupt line MRAFL: Message RAM access failure interrupt line TSWL: Timestamp wraparound interrupt line
    static constexpr uint32_t FDCAN_ILS_BERR = 0x20; // BERR
    static constexpr uint32_t FDCAN_ILS_PERR = 0x40; // Protocol error grouping the following interruption ARAL: Access to reserved address line PEDL: Protocol error in data phase line PEAL: Protocol error in arbitration phase line WDIL: Watchdog interrupt line BOL: Bus_Off status EWL: Warning status interrupt line

    static constexpr uint32_t FDCAN_ILE_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FDCAN_ILE_EINT0 = 0x1; // Enable interrupt line 0
    static constexpr uint32_t FDCAN_ILE_EINT1 = 0x2; // Enable interrupt line 1


    static constexpr uint32_t FDCAN_RXGFC_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FDCAN_RXGFC_RRFE = 0x1; // Reject remote frames extended These are protected write (P) bits, which means that write access by the bits is possible only when the bit 1 [CCE] and bit 0 [INIT] of CCCR register are set to 1.
    static constexpr uint32_t FDCAN_RXGFC_RRFS = 0x2; // Reject remote frames standard These are protected write (P) bits, which means that write access by the bits is possible only when the bit 1 [CCE] and bit 0 [INIT] of CCCR register are set to 1.
    typedef bit_field_t<2, 0x3> FDCAN_RXGFC_ANFE; // Accept non-matching frames extended Defines how received messages with 29-bit IDs that do not match any element of the filter list are treated. These are protected write (P) bits, which means that write access by the bits is possible only when the bit 1 [CCE] and bit 0 [INIT] of CCCR register are set to 1.
    typedef bit_field_t<4, 0x3> FDCAN_RXGFC_ANFS; // Accept Non-matching frames standard Defines how received messages with 11-bit IDs that do not match any element of the filter list are treated. These are protected write (P) bits, which means that write access by the bits is possible only when the bit 1 [CCE] and bit 0 [INIT] of CCCR register are set to 1.
    static constexpr uint32_t FDCAN_RXGFC_F1OM = 0x100; // FIFO 1 operation mode (overwrite or blocking) This is a protected write (P) bits, which means that write access by the bits is possible only when the bit 1 [CCE] and bit 0 [INIT] of CCCR register are set to 1.
    static constexpr uint32_t FDCAN_RXGFC_F0OM = 0x200; // FIFO 0 operation mode (overwrite or blocking) This is protected write (P) bits, which means that write access by the bits is possible only when the bit 1 [CCE] and bit 0 [INIT] of CCCR register are set to 1.
    typedef bit_field_t<16, 0x1f> FDCAN_RXGFC_LSS; // List size standard &gt;28: Values greater than 28 are interpreted as 28. These are protected write (P) bits, which means that write access by the bits is possible only when the bit 1 [CCE] and bit 0 [INIT] of CCCR register are set to 1.
    typedef bit_field_t<24, 0xf> FDCAN_RXGFC_LSE; // List size extended &gt;8: Values greater than 8 are interpreted as 8. These are protected write (P) bits, which means that write access by the bits is possible only when the bit 1 [CCE] and bit 0 [INIT] of CCCR register are set to 1.

    static constexpr uint32_t FDCAN_XIDAM_RESET_VALUE = 0x1fffffff; // Reset value
    typedef bit_field_t<0, 0x1fffffff> FDCAN_XIDAM_EIDM; // Extended ID mask For acceptance filtering of extended frames the Extended ID AND Mask is AND-ed with the Message ID of a received frame. Intended for masking of 29-bit IDs in SAE J1939. With the reset value of all bits set to 1 the mask is not active. These are protected write (P) bits, which means that write access by the bits is possible only when the bit 1 [CCE] and bit 0 [INIT] of CCCR register are set to 1.

    static constexpr uint32_t FDCAN_HPMS_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> FDCAN_HPMS_BIDX; // Buffer index Index of Rx FIFO element to which the message was stored. Only valid when MSI[1] = 1.
    typedef bit_field_t<6, 0x3> FDCAN_HPMS_MSI; // Message storage indicator
    typedef bit_field_t<8, 0x1f> FDCAN_HPMS_FIDX; // Filter index Index of matching filter element. Range is 0 to RXGFC[LSS] - 1 or RXGFC[LSE] - 1.
    static constexpr uint32_t FDCAN_HPMS_FLST = 0x8000; // Filter list Indicates the filter list of the matching filter element.


    static constexpr uint32_t FDCAN_RXF0S_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> FDCAN_RXF0S_F0FL; // Rx FIFO 0 fill level Number of elements stored in Rx FIFO 0, range 0 to 3.
    typedef bit_field_t<8, 0x3> FDCAN_RXF0S_F0GI; // Rx FIFO 0 get index Rx FIFO 0 read index pointer, range 0 to 2.
    typedef bit_field_t<16, 0x3> FDCAN_RXF0S_F0PI; // Rx FIFO 0 put index Rx FIFO 0 write index pointer, range 0 to 2.
    static constexpr uint32_t FDCAN_RXF0S_F0F = 0x1000000; // Rx FIFO 0 full
    static constexpr uint32_t FDCAN_RXF0S_RF0L = 0x2000000; // Rx FIFO 0 message lost This bit is a copy of interrupt flag IR[RF0L]. When IR[RF0L] is reset, this bit is also reset.

    static constexpr uint32_t FDCAN_RXF0A_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> FDCAN_RXF0A_F0AI; // Rx FIFO 0 acknowledge index After the Host has read a message or a sequence of messages from Rx FIFO 0 it has to write the buffer index of the last element read from Rx FIFO 0 to F0AI. This sets the Rx FIFO0 get index RXF0S[F0GI] to F0AI + 1 and update the FIFO 0 fill level RXF0S[F0FL].

    static constexpr uint32_t FDCAN_RXF1S_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> FDCAN_RXF1S_F1FL; // Rx FIFO 1 fill level Number of elements stored in Rx FIFO 1, range 0 to 3.
    typedef bit_field_t<8, 0x3> FDCAN_RXF1S_F1GI; // Rx FIFO 1 get index Rx FIFO 1 read index pointer, range 0 to 2.
    typedef bit_field_t<16, 0x3> FDCAN_RXF1S_F1PI; // Rx FIFO 1 put index Rx FIFO 1 write index pointer, range 0 to 2.
    static constexpr uint32_t FDCAN_RXF1S_F1F = 0x1000000; // Rx FIFO 1 full
    static constexpr uint32_t FDCAN_RXF1S_RF1L = 0x2000000; // Rx FIFO 1 message lost This bit is a copy of interrupt flag IR[RF1L]. When IR[RF1L] is reset, this bit is also reset.

    static constexpr uint32_t FDCAN_RXF1A_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> FDCAN_RXF1A_F1AI; // Rx FIFO 1 acknowledge index After the Host has read a message or a sequence of messages from Rx FIFO 1 it has to write the buffer index of the last element read from Rx FIFO 1 to F1AI. This sets the Rx FIFO1 get index RXF1S[F1GI] to F1AI + 1 and update the FIFO 1 Fill Level RXF1S[F1FL].


    static constexpr uint32_t FDCAN_TXBC_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FDCAN_TXBC_TFQM = 0x1000000; // Tx FIFO/queue mode This is a protected write (P) bit, which means that write access by the bits is possible only when the bit 1 [CCE] and bit 0 [INIT] of CCCR register are set to 1.

    static constexpr uint32_t FDCAN_TXFQS_RESET_VALUE = 0x3; // Reset value
    typedef bit_field_t<0, 0x7> FDCAN_TXFQS_TFFL; // Tx FIFO free level Number of consecutive free Tx FIFO elements starting from TFGI, range 0 to 3. Read as 0 when Tx queue operation is configured (TXBC[TFQM] = 1).
    typedef bit_field_t<8, 0x3> FDCAN_TXFQS_TFGI; // Tx FIFO get index Tx FIFO read index pointer, range 0 to 3. Read as 0 when Tx queue operation is configured (TXBC.TFQM = 1)
    typedef bit_field_t<16, 0x3> FDCAN_TXFQS_TFQPI; // Tx FIFO/queue put index Tx FIFO/queue write index pointer, range 0 to 3
    static constexpr uint32_t FDCAN_TXFQS_TFQF = 0x200000; // Tx FIFO/queue full

    static constexpr uint32_t FDCAN_TXBRP_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> FDCAN_TXBRP_TRP; // Transmission request pending Each Tx Buffer has its own transmission request pending bit. The bits are set via register TXBAR. The bits are reset after a requested transmission has completed or has been canceled via register TXBCR. After a TXBRP bit has been set, a Tx scan is started to check for the pending Tx request with the highest priority (Tx Buffer with lowest Message ID). A cancellation request resets the corresponding transmission request pending bit of register TXBRP. In case a transmission has already been started when a cancellation is requested, this is done at the end of the transmission, regardless whether the transmission was successful or not. The cancellation request bits are reset directly after the corresponding TXBRP bit has been reset. After a cancellation has been requested, a finished cancellation is signaled via TXBCF after successful transmission together with the corresponding TXBTO bit when the transmission has not yet been started at the point of cancellation when the transmission has been aborted due to lost arbitration when an error occurred during frame transmission In DAR mode all transmissions are automatically canceled if they are not successful. The corresponding TXBCF bit is set for all unsuccessful transmissions.

    static constexpr uint32_t FDCAN_TXBAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> FDCAN_TXBAR_AR; // Add request Each Tx buffer has its own add request bit. Writing a 1 sets the corresponding add request bit; writing a 0 has no impact. This enables the Host to set transmission requests for multiple Tx buffers with one write to TXBAR. When no Tx scan is running, the bits are reset immediately, else the bits remain set until the Tx scan process has completed.

    static constexpr uint32_t FDCAN_TXBCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> FDCAN_TXBCR_CR; // Cancellation request Each Tx buffer has its own cancellation request bit. Writing a 1 sets the corresponding CR bit; writing a 0 has no impact. This enables the Host to set cancellation requests for multiple Tx buffers with one write to TXBCR. The bits remain set until the corresponding TXBRP bit is reset.

    static constexpr uint32_t FDCAN_TXBTO_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> FDCAN_TXBTO_TO; // Transmission occurred. Each Tx buffer has its own TO bit. The bits are set when the corresponding TXBRP bit is cleared after a successful transmission. The bits are reset when a new transmission is requested by writing a 1 to the corresponding bit of register TXBAR.

    static constexpr uint32_t FDCAN_TXBCF_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> FDCAN_TXBCF_CF; // Cancellation finished Each Tx buffer has its own CF bit. The bits are set when the corresponding TXBRP bit is cleared after a cancellation was requested via TXBCR. In case the corresponding TXBRP bit was not set at the point of cancellation, CF is set immediately. The bits are reset when a new transmission is requested by writing a 1 to the corresponding bit of register TXBAR.

    static constexpr uint32_t FDCAN_TXBTIE_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> FDCAN_TXBTIE_TIE; // Transmission interrupt enable Each Tx buffer has its own TIE bit.

    static constexpr uint32_t FDCAN_TXBCIE_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> FDCAN_TXBCIE_CFIE; // Cancellation finished interrupt enable. Each Tx buffer has its own CFIE bit.

    static constexpr uint32_t FDCAN_TXEFS_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> FDCAN_TXEFS_EFFL; // Event FIFO fill level Number of elements stored in Tx event FIFO, range 0 to 3.
    typedef bit_field_t<8, 0x3> FDCAN_TXEFS_EFGI; // Event FIFO get index Tx Event FIFO read index pointer, range 0 to 3.
    typedef bit_field_t<16, 0x3> FDCAN_TXEFS_EFPI; // Event FIFO put index Tx Event FIFO write index pointer, range 0 to 3.
    static constexpr uint32_t FDCAN_TXEFS_EFF = 0x1000000; // Event FIFO full
    static constexpr uint32_t FDCAN_TXEFS_TEFL = 0x2000000; // Tx Event FIFO element lost This bit is a copy of interrupt flag IR[TEFL]. When IR[TEFL] is reset, this bit is also reset. 0 No Tx event FIFO element lost 1 Tx event FIFO element lost, also set after write attempt to Tx Event FIFO of size 0.

    static constexpr uint32_t FDCAN_TXEFA_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> FDCAN_TXEFA_EFAI; // Event FIFO acknowledge index After the Host has read an element or a sequence of elements from the Tx event FIFO, it has to write the index of the last element read from Tx event FIFO to EFAI. This sets the Tx event FIFO get index TXEFS[EFGI] to EFAI + 1 and updates the FIFO 0 fill level TXEFS[EFFL].


    static constexpr uint32_t FDCAN_CKDIV_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> FDCAN_CKDIV_PDIV; // input clock divider The APB clock could be divided prior to be used by the CAN sub system. The rate must be computed using the divider output clock. These are protected write (P) bits, which means that write access by the bits is possible only when the bit 1 [CCE] and bit 0 [INIT] of CCCR register are set to 1.
};

template<>
struct peripheral_t<STM32G0B1, FDCAN1>
{
    static constexpr periph_t P = FDCAN1;
    using T = stm32g0b1_fdcan1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0B1, FDCAN2>
{
    static constexpr periph_t P = FDCAN2;
    using T = stm32g0b1_fdcan1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0C1, FDCAN1>
{
    static constexpr periph_t P = FDCAN1;
    using T = stm32g0b1_fdcan1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0C1, FDCAN2>
{
    static constexpr periph_t P = FDCAN2;
    using T = stm32g0b1_fdcan1_t;
    static T& V;
};

using fdcan1_t = peripheral_t<svd, FDCAN1>;
using fdcan2_t = peripheral_t<svd, FDCAN2>;

template<int INST> struct fdcan_traits {};

template<> struct fdcan_traits<1>
{
    using fdcan = fdcan1_t;
    static constexpr signal_t RX = FDCAN1_RX;
    static constexpr signal_t TX = FDCAN1_TX;
};

template<> struct fdcan_traits<2>
{
    using fdcan = fdcan2_t;
    static constexpr signal_t RX = FDCAN2_RX;
    static constexpr signal_t TX = FDCAN2_TX;
};
