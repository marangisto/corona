#pragma once

////
//
//      STM32L5 SDMMC peripherals
//
///

// SDMMC1: SDMMC1

struct stm32l552_sdmmc1_t
{
    volatile uint32_t SDMMC_POWER; // SDMMC power control register
    volatile uint32_t SDMMC_CLKCR; // The SDMMC_CLKCR register controls the SDMMC_CK output clock, the SDMMC_RX_CLK receive clock, and the bus width.
    volatile uint32_t SDMMC_ARGR; // The SDMMC_ARGR register contains a 32-bit command argument, which is sent to a card as part of a command message.
    volatile uint32_t SDMMC_CMDR; // The SDMMC_CMDR register contains the command index and command type bits. The command index is sent to a card as part of a command message. The command type bits control the command path state machine (CPSM).
    volatile uint32_t SDMMC_RESPCMDR; // SDMMC command response register
    volatile uint32_t SDMMC_RESP1R; // The SDMMC_RESP1/2/3/4R registers contain the status of a card, which is part of the received response.
    volatile uint32_t SDMMC_RESP2R; // The SDMMC_RESP1/2/3/4R registers contain the status of a card, which is part of the received response.
    volatile uint32_t SDMMC_RESP3R; // The SDMMC_RESP1/2/3/4R registers contain the status of a card, which is part of the received response.
    volatile uint32_t SDMMC_RESP4R; // The SDMMC_RESP1/2/3/4R registers contain the status of a card, which is part of the received response.
    volatile uint32_t SDMMC_DTIMER; // The SDMMC_DTIMER register contains the data timeout period, in card bus clock periods. A counter loads the value from the SDMMC_DTIMER register, and starts decrementing when the data path state machine (DPSM) enters the Wait_R or Busy state. If the timer reaches 0 while the DPSM is in either of these states, the timeout status flag is set.
    volatile uint32_t SDMMC_DLENR; // The SDMMC_DLENR register contains the number of data bytes to be transferred. The value is loaded into the data counter when data transfer starts.
    volatile uint32_t SDMMC_DCTRL; // The SDMMC_DCTRL register control the data path state machine (DPSM).
    volatile uint32_t SDMMC_DCNTR; // The SDMMC_DCNTR register loads the value from the data length register (see SDMMC_DLENR) when the DPSM moves from the Idle state to the Wait_R or Wait_S state. As data is transferred, the counter decrements the value until it reaches 0. The DPSM then moves to the Idle state and when there has been no error, the data status end flag (DATAEND) is set.
    volatile uint32_t SDMMC_STAR; // The SDMMC_STAR register is a read-only register. It contains two types of flag:Static flags (bits [29,21,11:0]): these bits remain asserted until they are cleared by writing to the SDMMC interrupt Clear register (see SDMMC_ICR)Dynamic flags (bits [20:12]): these bits change state depending on the state of the underlying logic (for example, FIFO full and empty flags are asserted and de-asserted as data while written to the FIFO)
    volatile uint32_t SDMMC_ICR; // The SDMMC_ICR register is a write-only register. Writing a bit with 1 clears the corresponding bit in the SDMMC_STAR status register.
    volatile uint32_t SDMMC_MASKR; // The interrupt mask register determines which status flags generate an interrupt request by setting the corresponding bit to 1.
    volatile uint32_t SDMMC_ACKTIMER; // The SDMMC_ACKTIMER register contains the acknowledgment timeout period, in SDMMC_CK bus clock periods. A counter loads the value from the SDMMC_ACKTIMER register, and starts decrementing when the data path state machine (DPSM) enters the Wait_Ack state. If the timer reaches 0 while the DPSM is in this states, the acknowledgment timeout status flag is set.
    reserved_t<0x3> _0x44;
    volatile uint32_t SDMMC_IDMACTRLR; // The receive and transmit FIFOs can be read or written as 32-bit wide registers. The FIFOs contain 32 entries on 32 sequential addresses. This allows the CPU to use its load and store multiple operands to read from/write to the FIFO.
    volatile uint32_t SDMMC_IDMABSIZER; // The SDMMC_IDMABSIZER register contains the buffers size when in double buffer configuration.
    volatile uint32_t SDMMC_IDMABASE0R; // The SDMMC_IDMABASE0R register contains the memory buffer base address in single buffer configuration and the buffer 0 base address in double buffer configuration.
    volatile uint32_t SDMMC_IDMABASE1R; // The SDMMC_IDMABASE1R register contains the double buffer configuration second buffer memory base address.
    reserved_t<0x8> _0x60;
    volatile uint32_t SDMMC_FIFOR; // The receive and transmit FIFOs can be only read or written as word (32-bit) wide registers. The FIFOs contain 16 entries on sequential addresses. This allows the CPU to use its load and store multiple operands to read from/write to the FIFO.When accessing SDMMC_FIFOR with half word or byte access an AHB bus fault is generated.
    reserved_t<0xdc> _0x84;
    volatile uint32_t SDMMC_VER; // SDMMC IP version register
    volatile uint32_t SDMMC_ID; // SDMMC IP identification register

    static constexpr uint32_t SDMMC_POWER_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> SDMMC_POWER_PWRCTRL; // SDMMC state control bits. These bits can only be written when the SDMMC is not in the power-on state (PWRCTRL?11). These bits are used to define the functional state of the SDMMC signals: Any further write will be ignored, PWRCTRL value will keep 11.
    static constexpr uint32_t SDMMC_POWER_VSWITCH = 0x4; // Voltage switch sequence start. This bit is used to start the timing critical section of the voltage switch sequence:
    static constexpr uint32_t SDMMC_POWER_VSWITCHEN = 0x8; // Voltage switch procedure enable. This bit can only be written by firmware when CPSM is disabled (CPSMEN = 0). This bit is used to stop the SDMMC_CK after the voltage switch command response:
    static constexpr uint32_t SDMMC_POWER_DIRPOL = 0x10; // Data and command direction signals polarity selection. This bit can only be written when the SDMMC is in the power-off state (PWRCTRL = 00).

    static constexpr uint32_t SDMMC_CLKCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3ff> SDMMC_CLKCR_CLKDIV; // Clock divide factor This bit can only be written when the CPSM and DPSM are not active (CPSMACT = 0 and DPSMACT = 0). This field defines the divide factor between the input clock (SDMMCCLK) and the output clock (SDMMC_CK): SDMMC_CK frequency = SDMMCCLK / [2 * CLKDIV]. 0xx: etc.. xxx: etc..
    static constexpr uint32_t SDMMC_CLKCR_PWRSAV = 0x1000; // Power saving configuration bit This bit can only be written when the CPSM and DPSM are not active (CPSMACT = 0 and DPSMACT = 0) For power saving, the SDMMC_CK clock output can be disabled when the bus is idle by setting PWRSAV:
    typedef bit_field_t<14, 0x3> SDMMC_CLKCR_WIDBUS; // Wide bus mode enable bit This bit can only be written when the CPSM and DPSM are not active (CPSMACT = 0 and DPSMACT = 0)
    static constexpr uint32_t SDMMC_CLKCR_NEGEDGE = 0x10000; // SDMMC_CK dephasing selection bit for data and Command. This bit can only be written when the CPSM and DPSM are not active (CPSMACT = 0 and DPSMACT = 0). When clock division = 1 (CLKDIV = 0), this bit has no effect. Data and Command change on SDMMC_CK falling edge. When clock division &amp;gt;1 (CLKDIV &amp;gt; 0) &amp;amp; DDR = 0: - SDMMC_CK edge occurs on SDMMCCLK rising edge. When clock division &gt;1 (CLKDIV &gt; 0) &amp; DDR = 1: - Data changed on the SDMMCCLK falling edge succeeding a SDMMC_CK edge. - SDMMC_CK edge occurs on SDMMCCLK rising edge. - Data changed on the SDMMC_CK falling edge succeeding a SDMMC_CK edge. - SDMMC_CK edge occurs on SDMMCCLK rising edge.
    static constexpr uint32_t SDMMC_CLKCR_HWFC_EN = 0x20000; // Hardware flow control enable This bit can only be written when the CPSM and DPSM are not active (CPSMACT = 0 and DPSMACT = 0) When Hardware flow control is enabled, the meaning of the TXFIFOE and RXFIFOF flags change, please see SDMMC status register definition in Section56.8.11.
    static constexpr uint32_t SDMMC_CLKCR_DDR = 0x40000; // Data rate signaling selection This bit can only be written when the CPSM and DPSM are not active (CPSMACT = 0 and DPSMACT = 0) DDR rate shall only be selected with 4-bit or 8-bit wide bus mode. (WIDBUS &amp;gt; 00). DDR = 1 has no effect when WIDBUS = 00 (1-bit wide bus). DDR rate shall only be selected with clock division &amp;gt;1. (CLKDIV &amp;gt; 0)
    static constexpr uint32_t SDMMC_CLKCR_BUSSPEED = 0x80000; // Bus speed mode selection between DS, HS, SDR12, SDR25 and SDR50, DDR50, SDR104. This bit can only be written when the CPSM and DPSM are not active (CPSMACT = 0 and DPSMACT = 0)
    typedef bit_field_t<20, 0x3> SDMMC_CLKCR_SELCLKRX; // Receive clock selection. These bits can only be written when the CPSM and DPSM are not active (CPSMACT = 0 and DPSMACT = 0)

    static constexpr uint32_t SDMMC_ARGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SDMMC_ARGR_CMDARG; // Command argument. These bits can only be written by firmware when CPSM is disabled (CPSMEN = 0). Command argument sent to a card as part of a command message. If a command contains an argument, it must be loaded into this register before writing a command to the command register.

    static constexpr uint32_t SDMMC_CMDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> SDMMC_CMDR_CMDINDEX; // Command index. This bit can only be written by firmware when CPSM is disabled (CPSMEN = 0). The command index is sent to the card as part of a command message.
    static constexpr uint32_t SDMMC_CMDR_CMDTRANS = 0x40; // The CPSM treats the command as a data transfer command, stops the interrupt period, and signals DataEnable to the DPSM This bit can only be written by firmware when CPSM is disabled (CPSMEN = 0). If this bit is set, the CPSM issues an end of interrupt period and issues DataEnable signal to the DPSM when the command is sent.
    static constexpr uint32_t SDMMC_CMDR_CMDSTOP = 0x80; // The CPSM treats the command as a Stop Transmission command and signals Abort to the DPSM. This bit can only be written by firmware when CPSM is disabled (CPSMEN = 0). If this bit is set, the CPSM issues the Abort signal to the DPSM when the command is sent.
    typedef bit_field_t<8, 0x3> SDMMC_CMDR_WAITRESP; // Wait for response bits. This bit can only be written by firmware when CPSM is disabled (CPSMEN = 0). They are used to configure whether the CPSM is to wait for a response, and if yes, which kind of response.
    static constexpr uint32_t SDMMC_CMDR_WAITINT = 0x400; // CPSM waits for interrupt request. If this bit is set, the CPSM disables command timeout and waits for an card interrupt request (Response). If this bit is cleared in the CPSM Wait state, will cause the abort of the interrupt mode.
    static constexpr uint32_t SDMMC_CMDR_WAITPEND = 0x800; // CPSM Waits for end of data transfer (CmdPend internal signal) from DPSM. This bit when set, the CPSM waits for the end of data transfer trigger before it starts sending a command. WAITPEND is only taken into account when DTMODE = MMC stream data transfer, WIDBUS = 1-bit wide bus mode, DPSMACT = 1 and DTDIR = from host to card.
    static constexpr uint32_t SDMMC_CMDR_CPSMEN = 0x1000; // Command path state machine (CPSM) Enable bit This bit is written 1 by firmware, and cleared by hardware when the CPSM enters the Idle state. If this bit is set, the CPSM is enabled. When DTEN = 1, no command will be transfered nor boot procedure will be started. CPSMEN is cleared to 0.
    static constexpr uint32_t SDMMC_CMDR_DTHOLD = 0x2000; // Hold new data block transmission and reception in the DPSM. If this bit is set, the DPSM will not move from the Wait_S state to the Send state or from the Wait_R state to the Receive state.
    static constexpr uint32_t SDMMC_CMDR_BOOTMODE = 0x4000; // Select the boot mode procedure to be used. This bit can only be written by firmware when CPSM is disabled (CPSMEN = 0)
    static constexpr uint32_t SDMMC_CMDR_BOOTEN = 0x8000; // Enable boot mode procedure.
    static constexpr uint32_t SDMMC_CMDR_CMDSUSPEND = 0x10000; // The CPSM treats the command as a Suspend or Resume command and signals interrupt period start/end. This bit can only be written by firmware when CPSM is disabled (CPSMEN = 0). CMDSUSPEND = 1 and CMDTRANS = 0 Suspend command, start interrupt period when response bit BS=0. CMDSUSPEND = 1 and CMDTRANS = 1 Resume command with data, end interrupt period when response bit DF=1.

    static constexpr uint32_t SDMMC_RESPCMDR_RESET_VALUE = 0xa3c5dd01; // Reset value
    typedef bit_field_t<0, 0x3f> SDMMC_RESPCMDR_RESPCMD; // Response command index

    static constexpr uint32_t SDMMC_RESP1R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SDMMC_RESP1R_CARDSTATUS1; // see Table 432

    static constexpr uint32_t SDMMC_RESP2R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SDMMC_RESP2R_CARDSTATUS2; // see Table404.

    static constexpr uint32_t SDMMC_RESP3R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SDMMC_RESP3R_CARDSTATUS3; // see Table404.

    static constexpr uint32_t SDMMC_RESP4R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SDMMC_RESP4R_CARDSTATUS4; // see Table404.

    static constexpr uint32_t SDMMC_DTIMER_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SDMMC_DTIMER_DATATIME; // Data and R1b busy timeout period This bit can only be written when the CPSM and DPSM are not active (CPSMACT = 0 and DPSMACT = 0). Data and R1b busy timeout period expressed in card bus clock periods.

    static constexpr uint32_t SDMMC_DLENR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ffffff> SDMMC_DLENR_DATALENGTH; // Data length value This register can only be written by firmware when DPSM is inactive (DPSMACT = 0). Number of data bytes to be transferred. When DDR = 1 DATALENGTH is truncated to a multiple of 2. (The last odd byte is not transfered) When DATALENGTH = 0 no data will be transfered, when requested by a CPSMEN and CMDTRANS = 1 also no command will be transfered. DTEN and CPSMEN are cleared to 0.

    static constexpr uint32_t SDMMC_DCTRL_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SDMMC_DCTRL_DTEN = 0x1; // Data transfer enable bit This bit can only be written by firmware when DPSM is inactive (DPSMACT = 0). This bit is cleared by Hardware when data transfer completes. This bit shall only be used to transfer data when no associated data transfer command is used, i.e. shall not be used with SD or eMMC cards.
    static constexpr uint32_t SDMMC_DCTRL_DTDIR = 0x2; // Data transfer direction selection This bit can only be written by firmware when DPSM is inactive (DPSMACT = 0).
    typedef bit_field_t<2, 0x3> SDMMC_DCTRL_DTMODE; // Data transfer mode selection. This bit can only be written by firmware when DPSM is inactive (DPSMACT = 0).
    typedef bit_field_t<4, 0xf> SDMMC_DCTRL_DBLOCKSIZE; // Data block size This bit can only be written by firmware when DPSM is inactive (DPSMACT = 0). Define the data block length when the block data transfer mode is selected: When DATALENGTH is not a multiple of DBLOCKSIZE, the transfered data is truncated at a multiple of DBLOCKSIZE. (Any remain data will not be transfered.) When DDR = 1, DBLOCKSIZE = 0000 shall not be used. (No data will be transfered)
    static constexpr uint32_t SDMMC_DCTRL_RWSTART = 0x100; // Read wait start. If this bit is set, read wait operation starts.
    static constexpr uint32_t SDMMC_DCTRL_RWSTOP = 0x200; // Read wait stop This bit is written by firmware and auto cleared by hardware when the DPSM moves from the READ_WAIT state to the WAIT_R or IDLE state.
    static constexpr uint32_t SDMMC_DCTRL_RWMOD = 0x400; // Read wait mode. This bit can only be written by firmware when DPSM is inactive (DPSMACT = 0).
    static constexpr uint32_t SDMMC_DCTRL_SDIOEN = 0x800; // SD I/O interrupt enable functions This bit can only be written by firmware when DPSM is inactive (DPSMACT = 0). If this bit is set, the DPSM enables the SD I/O card specific interrupt operation.
    static constexpr uint32_t SDMMC_DCTRL_BOOTACKEN = 0x1000; // Enable the reception of the boot acknowledgment. This bit can only be written by firmware when DPSM is inactive (DPSMACT = 0).
    static constexpr uint32_t SDMMC_DCTRL_FIFORST = 0x2000; // FIFO reset, will flush any remaining data. This bit can only be written by firmware when IDMAEN= 0 and DPSM is active (DPSMACT = 1). This bit will only take effect when a transfer error or transfer hold occurs.

    static constexpr uint32_t SDMMC_DCNTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ffffff> SDMMC_DCNTR_DATACOUNT; // Data count value When read, the number of remaining data bytes to be transferred is returned. Write has no effect.

    static constexpr uint32_t SDMMC_STAR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SDMMC_STAR_CCRCFAIL = 0x1; // Command response received (CRC check failed). Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR.
    static constexpr uint32_t SDMMC_STAR_DCRCFAIL = 0x2; // Data block sent/received (CRC check failed). Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR.
    static constexpr uint32_t SDMMC_STAR_CTIMEOUT = 0x4; // Command response timeout. Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. The Command Timeout period has a fixed value of 64 SDMMC_CK clock periods.
    static constexpr uint32_t SDMMC_STAR_DTIMEOUT = 0x8; // Data timeout. Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR.
    static constexpr uint32_t SDMMC_STAR_TXUNDERR = 0x10; // Transmit FIFO underrun error or IDMA read transfer error. Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR.
    static constexpr uint32_t SDMMC_STAR_RXOVERR = 0x20; // Received FIFO overrun error or IDMA write transfer error. Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR.
    static constexpr uint32_t SDMMC_STAR_CMDREND = 0x40; // Command response received (CRC check passed, or no CRC). Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR.
    static constexpr uint32_t SDMMC_STAR_CMDSENT = 0x80; // Command sent (no response required). Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR.
    static constexpr uint32_t SDMMC_STAR_DATAEND = 0x100; // Data transfer ended correctly. (data counter, DATACOUNT is zero and no errors occur). Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR.
    static constexpr uint32_t SDMMC_STAR_DHOLD = 0x200; // Data transfer Hold. Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR.
    static constexpr uint32_t SDMMC_STAR_DBCKEND = 0x400; // Data block sent/received. (CRC check passed) and DPSM moves to the READWAIT state. Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR.
    static constexpr uint32_t SDMMC_STAR_DABORT = 0x800; // Data transfer aborted by CMD12. Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR.
    static constexpr uint32_t SDMMC_STAR_DPSMACT = 0x1000; // Data path state machine active, i.e. not in Idle state. This is a hardware status flag only, does not generate an interrupt.
    static constexpr uint32_t SDMMC_STAR_CPSMACT = 0x2000; // Command path state machine active, i.e. not in Idle state. This is a hardware status flag only, does not generate an interrupt.
    static constexpr uint32_t SDMMC_STAR_TXFIFOHE = 0x4000; // Transmit FIFO half empty At least half the number of words can be written into the FIFO. This bit is cleared when the FIFO becomes half+1 full.
    static constexpr uint32_t SDMMC_STAR_RXFIFOHF = 0x8000; // Receive FIFO half full There are at least half the number of words in the FIFO. This bit is cleared when the FIFO becomes half+1 empty.
    static constexpr uint32_t SDMMC_STAR_TXFIFOF = 0x10000; // Transmit FIFO full This is a hardware status flag only, does not generate an interrupt. This bit is cleared when one FIFO location becomes empty.
    static constexpr uint32_t SDMMC_STAR_RXFIFOF = 0x20000; // Receive FIFO full This bit is cleared when one FIFO location becomes empty.
    static constexpr uint32_t SDMMC_STAR_TXFIFOE = 0x40000; // Transmit FIFO empty This bit is cleared when one FIFO location becomes full.
    static constexpr uint32_t SDMMC_STAR_RXFIFOE = 0x80000; // Receive FIFO empty This is a hardware status flag only, does not generate an interrupt. This bit is cleared when one FIFO location becomes full.
    static constexpr uint32_t SDMMC_STAR_BUSYD0 = 0x100000; // Inverted value of SDMMC_D0 line (Busy), sampled at the end of a CMD response and a second time 2 SDMMC_CK cycles after the CMD response. This bit is reset to not busy when the SDMMCD0 line changes from busy to not busy. This bit does not signal busy due to data transfer. This is a hardware status flag only, it does not generate an interrupt.
    static constexpr uint32_t SDMMC_STAR_BUSYD0END = 0x200000; // end of SDMMC_D0 Busy following a CMD response detected. This indicates only end of busy following a CMD response. This bit does not signal busy due to data transfer. Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR.
    static constexpr uint32_t SDMMC_STAR_SDIOIT = 0x400000; // SDIO interrupt received. Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR.
    static constexpr uint32_t SDMMC_STAR_ACKFAIL = 0x800000; // Boot acknowledgment received (boot acknowledgment check fail). Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR.
    static constexpr uint32_t SDMMC_STAR_ACKTIMEOUT = 0x1000000; // Boot acknowledgment timeout. Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR.
    static constexpr uint32_t SDMMC_STAR_VSWEND = 0x2000000; // Voltage switch critical timing section completion. Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR.
    static constexpr uint32_t SDMMC_STAR_CKSTOP = 0x4000000; // SDMMC_CK stopped in Voltage switch procedure. Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR.
    static constexpr uint32_t SDMMC_STAR_IDMATE = 0x8000000; // IDMA transfer error. Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR.
    static constexpr uint32_t SDMMC_STAR_IDMABTC = 0x10000000; // IDMA buffer transfer complete. interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR.

    static constexpr uint32_t SDMMC_ICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SDMMC_ICR_CCRCFAILC = 0x1; // CCRCFAIL flag clear bit Set by software to clear the CCRCFAIL flag.
    static constexpr uint32_t SDMMC_ICR_DCRCFAILC = 0x2; // DCRCFAIL flag clear bit Set by software to clear the DCRCFAIL flag.
    static constexpr uint32_t SDMMC_ICR_CTIMEOUTC = 0x4; // CTIMEOUT flag clear bit Set by software to clear the CTIMEOUT flag.
    static constexpr uint32_t SDMMC_ICR_DTIMEOUTC = 0x8; // DTIMEOUT flag clear bit Set by software to clear the DTIMEOUT flag.
    static constexpr uint32_t SDMMC_ICR_TXUNDERRC = 0x10; // TXUNDERR flag clear bit Set by software to clear TXUNDERR flag.
    static constexpr uint32_t SDMMC_ICR_RXOVERRC = 0x20; // RXOVERR flag clear bit Set by software to clear the RXOVERR flag.
    static constexpr uint32_t SDMMC_ICR_CMDRENDC = 0x40; // CMDREND flag clear bit Set by software to clear the CMDREND flag.
    static constexpr uint32_t SDMMC_ICR_CMDSENTC = 0x80; // CMDSENT flag clear bit Set by software to clear the CMDSENT flag.
    static constexpr uint32_t SDMMC_ICR_DATAENDC = 0x100; // DATAEND flag clear bit Set by software to clear the DATAEND flag.
    static constexpr uint32_t SDMMC_ICR_DHOLDC = 0x200; // DHOLD flag clear bit Set by software to clear the DHOLD flag.
    static constexpr uint32_t SDMMC_ICR_DBCKENDC = 0x400; // DBCKEND flag clear bit Set by software to clear the DBCKEND flag.
    static constexpr uint32_t SDMMC_ICR_DABORTC = 0x800; // DABORT flag clear bit Set by software to clear the DABORT flag.
    static constexpr uint32_t SDMMC_ICR_BUSYD0ENDC = 0x200000; // BUSYD0END flag clear bit Set by software to clear the BUSYD0END flag.
    static constexpr uint32_t SDMMC_ICR_SDIOITC = 0x400000; // SDIOIT flag clear bit Set by software to clear the SDIOIT flag.
    static constexpr uint32_t SDMMC_ICR_ACKFAILC = 0x800000; // ACKFAIL flag clear bit Set by software to clear the ACKFAIL flag.
    static constexpr uint32_t SDMMC_ICR_ACKTIMEOUTC = 0x1000000; // ACKTIMEOUT flag clear bit Set by software to clear the ACKTIMEOUT flag.
    static constexpr uint32_t SDMMC_ICR_VSWENDC = 0x2000000; // VSWEND flag clear bit Set by software to clear the VSWEND flag.
    static constexpr uint32_t SDMMC_ICR_CKSTOPC = 0x4000000; // CKSTOP flag clear bit Set by software to clear the CKSTOP flag.
    static constexpr uint32_t SDMMC_ICR_IDMATEC = 0x8000000; // IDMA transfer error clear bit Set by software to clear the IDMATE flag.
    static constexpr uint32_t SDMMC_ICR_IDMABTCC = 0x10000000; // IDMA buffer transfer complete clear bit Set by software to clear the IDMABTC flag.

    static constexpr uint32_t SDMMC_MASKR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SDMMC_MASKR_CCRCFAILIE = 0x1; // Command CRC fail interrupt enable Set and cleared by software to enable/disable interrupt caused by command CRC failure.
    static constexpr uint32_t SDMMC_MASKR_DCRCFAILIE = 0x2; // Data CRC fail interrupt enable Set and cleared by software to enable/disable interrupt caused by data CRC failure.
    static constexpr uint32_t SDMMC_MASKR_CTIMEOUTIE = 0x4; // Command timeout interrupt enable Set and cleared by software to enable/disable interrupt caused by command timeout.
    static constexpr uint32_t SDMMC_MASKR_DTIMEOUTIE = 0x8; // Data timeout interrupt enable Set and cleared by software to enable/disable interrupt caused by data timeout.
    static constexpr uint32_t SDMMC_MASKR_TXUNDERRIE = 0x10; // Tx FIFO underrun error interrupt enable Set and cleared by software to enable/disable interrupt caused by Tx FIFO underrun error.
    static constexpr uint32_t SDMMC_MASKR_RXOVERRIE = 0x20; // Rx FIFO overrun error interrupt enable Set and cleared by software to enable/disable interrupt caused by Rx FIFO overrun error.
    static constexpr uint32_t SDMMC_MASKR_CMDRENDIE = 0x40; // Command response received interrupt enable Set and cleared by software to enable/disable interrupt caused by receiving command response.
    static constexpr uint32_t SDMMC_MASKR_CMDSENTIE = 0x80; // Command sent interrupt enable Set and cleared by software to enable/disable interrupt caused by sending command.
    static constexpr uint32_t SDMMC_MASKR_DATAENDIE = 0x100; // Data end interrupt enable Set and cleared by software to enable/disable interrupt caused by data end.
    static constexpr uint32_t SDMMC_MASKR_DHOLDIE = 0x200; // Data hold interrupt enable Set and cleared by software to enable/disable the interrupt generated when sending new data is hold in the DPSM Wait_S state.
    static constexpr uint32_t SDMMC_MASKR_DBCKENDIE = 0x400; // Data block end interrupt enable Set and cleared by software to enable/disable interrupt caused by data block end.
    static constexpr uint32_t SDMMC_MASKR_DABORTIE = 0x800; // Data transfer aborted interrupt enable Set and cleared by software to enable/disable interrupt caused by a data transfer being aborted.
    static constexpr uint32_t SDMMC_MASKR_TXFIFOHEIE = 0x4000; // Tx FIFO half empty interrupt enable Set and cleared by software to enable/disable interrupt caused by Tx FIFO half empty.
    static constexpr uint32_t SDMMC_MASKR_RXFIFOHFIE = 0x8000; // Rx FIFO half full interrupt enable Set and cleared by software to enable/disable interrupt caused by Rx FIFO half full.
    static constexpr uint32_t SDMMC_MASKR_RXFIFOFIE = 0x20000; // Rx FIFO full interrupt enable Set and cleared by software to enable/disable interrupt caused by Rx FIFO full.
    static constexpr uint32_t SDMMC_MASKR_TXFIFOEIE = 0x40000; // Tx FIFO empty interrupt enable Set and cleared by software to enable/disable interrupt caused by Tx FIFO empty.
    static constexpr uint32_t SDMMC_MASKR_BUSYD0ENDIE = 0x200000; // BUSYD0END interrupt enable Set and cleared by software to enable/disable the interrupt generated when SDMMC_D0 signal changes from busy to NOT busy following a CMD response.
    static constexpr uint32_t SDMMC_MASKR_SDIOITIE = 0x400000; // SDIO mode interrupt received interrupt enable Set and cleared by software to enable/disable the interrupt generated when receiving the SDIO mode interrupt.
    static constexpr uint32_t SDMMC_MASKR_ACKFAILIE = 0x800000; // Acknowledgment Fail interrupt enable Set and cleared by software to enable/disable interrupt caused by acknowledgment Fail.
    static constexpr uint32_t SDMMC_MASKR_ACKTIMEOUTIE = 0x1000000; // Acknowledgment timeout interrupt enable Set and cleared by software to enable/disable interrupt caused by acknowledgment timeout.
    static constexpr uint32_t SDMMC_MASKR_VSWENDIE = 0x2000000; // Voltage switch critical timing section completion interrupt enable Set and cleared by software to enable/disable the interrupt generated when voltage switch critical timing section completion.
    static constexpr uint32_t SDMMC_MASKR_CKSTOPIE = 0x4000000; // Voltage Switch clock stopped interrupt enable Set and cleared by software to enable/disable interrupt caused by Voltage Switch clock stopped.
    static constexpr uint32_t SDMMC_MASKR_IDMABTCIE = 0x10000000; // IDMA buffer transfer complete interrupt enable Set and cleared by software to enable/disable the interrupt generated when the IDMA has transferred all data belonging to a memory buffer.

    static constexpr uint32_t SDMMC_ACKTIMER_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ffffff> SDMMC_ACKTIMER_ACKTIME; // Boot acknowledgment timeout period This bit can only be written by firmware when CPSM is disabled (CPSMEN = 0). Boot acknowledgment timeout period expressed in card bus clock periods.


    static constexpr uint32_t SDMMC_IDMACTRLR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SDMMC_IDMACTRLR_IDMAEN = 0x1; // IDMA enable This bit can only be written by firmware when DPSM is inactive (DPSMACT = 0).
    static constexpr uint32_t SDMMC_IDMACTRLR_IDMABMODE = 0x2; // Buffer mode selection. This bit can only be written by firmware when DPSM is inactive (DPSMACT = 0).
    static constexpr uint32_t SDMMC_IDMACTRLR_IDMABACT = 0x4; // Double buffer mode active buffer indication This bit can only be written by firmware when DPSM is inactive (DPSMACT = 0). When IDMA is enabled this bit is toggled by hardware.

    static constexpr uint32_t SDMMC_IDMABSIZER_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<5, 0xff> SDMMC_IDMABSIZER_IDMABNDT; // Number of transfers per buffer. This 8-bit value shall be multiplied by 8 to get the size of the buffer in 32-bit words and by 32 to get the size of the buffer in bytes. Example: IDMABNDT = 0x01: buffer size = 8 words = 32 bytes. These bits can only be written by firmware when DPSM is inactive (DPSMACT = 0).

    static constexpr uint32_t SDMMC_IDMABASE0R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SDMMC_IDMABASE0R_IDMABASE0; // Buffer 0 memory base address bits [31:2], shall be word aligned (bit [1:0] are always 0 and read only). This register can be written by firmware when DPSM is inactive (DPSMACT = 0), and can dynamically be written by firmware when DPSM active (DPSMACT = 1) and memory buffer 0 is inactive (IDMABACT = 1).

    static constexpr uint32_t SDMMC_IDMABASE1R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SDMMC_IDMABASE1R_IDMABASE1; // Buffer 1 memory base address, shall be word aligned (bit [1:0] are always 0 and read only). This register can be written by firmware when DPSM is inactive (DPSMACT = 0), and can dynamically be written by firmware when DPSM active (DPSMACT = 1) and memory buffer 1 is inactive (IDMABACT = 0).


    static constexpr uint32_t SDMMC_FIFOR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SDMMC_FIFOR_FIFODATA; // Receive and transmit FIFO data This register can only be read or written by firmware when the DPSM is active (DPSMACT=1). The FIFO data occupies 16 entries of 32-bit words.


    static constexpr uint32_t SDMMC_VER_RESET_VALUE = 0x10; // Reset value
    typedef bit_field_t<0, 0xf> SDMMC_VER_MINREV; // IP minor revision number.
    typedef bit_field_t<4, 0xf> SDMMC_VER_MAJREV; // IP major revision number.

    static constexpr uint32_t SDMMC_ID_RESET_VALUE = 0x140022; // Reset value
    typedef bit_field_t<0, 0xffffffff> SDMMC_ID_IP_ID; // SDMMC IP identification.
};

template<>
struct peripheral_t<STM32L552, SDMMC1>
{
    static constexpr periph_t P = SDMMC1;
    using T = stm32l552_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L552, SEC_SDMMC1>
{
    static constexpr periph_t P = SEC_SDMMC1;
    using T = stm32l552_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, SDMMC1>
{
    static constexpr periph_t P = SDMMC1;
    using T = stm32l552_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, SEC_SDMMC1>
{
    static constexpr periph_t P = SEC_SDMMC1;
    using T = stm32l552_sdmmc1_t;
    static T& V;
};

using sdmmc1_t = peripheral_t<svd, SDMMC1>;
using sec_sdmmc1_t = peripheral_t<svd, SEC_SDMMC1>;

template<int INST> struct sdmmc_traits {};

template<> struct sdmmc_traits<1>
{
    using sdmmc = sdmmc1_t;
    static constexpr signal_t CDIR = SDMMC1_CDIR;
    static constexpr signal_t CK = SDMMC1_CK;
    static constexpr signal_t CKIN = SDMMC1_CKIN;
    static constexpr signal_t CMD = SDMMC1_CMD;
    static constexpr signal_t D0 = SDMMC1_D0;
    static constexpr signal_t D0DIR = SDMMC1_D0DIR;
    static constexpr signal_t D1 = SDMMC1_D1;
    static constexpr signal_t D123DIR = SDMMC1_D123DIR;
    static constexpr signal_t D2 = SDMMC1_D2;
    static constexpr signal_t D3 = SDMMC1_D3;
    static constexpr signal_t D4 = SDMMC1_D4;
    static constexpr signal_t D5 = SDMMC1_D5;
    static constexpr signal_t D6 = SDMMC1_D6;
    static constexpr signal_t D7 = SDMMC1_D7;
    static constexpr clock_source_t CLOCK = AHB_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.AHB2ENR |= RCC::T::AHB2ENR_SDMMC1EN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHB2ENR &= ~RCC::T::AHB2ENR_SDMMC1EN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.AHB2SMENR |= RCC::T::AHB2SMENR_SDMMC1SMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.AHB2SMENR &= ~RCC::T::AHB2SMENR_SDMMC1SMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHB2RSTR |= RCC::T::AHB2RSTR_SDMMC1RST;
    }
};
