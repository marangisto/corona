#pragma once

////
//
//      STM32F1 SDIO peripherals
//
////

////
//
//      Secure digital input/output interface
//
////

struct stm32f101_sdio_t
{
    volatile uint32_t POWER;   // [read-write] Bits 1:0 = PWRCTRL: Power supply control bits
    volatile uint32_t CLKCR;   // [read-write] SDI clock control register (SDIO_CLKCR)
    volatile uint32_t ARG;     // [read-write] Bits 31:0 = : Command argument
    volatile uint32_t CMD;     // [read-write] SDIO command register (SDIO_CMD)
    volatile uint32_t RESPCMD; // [read-only] SDIO command register
    volatile uint32_t RESPI1;  // [read-only] Bits 31:0 = CARDSTATUS1
    volatile uint32_t RESP2;   // [read-only] Bits 31:0 = CARDSTATUS2
    volatile uint32_t RESP3;   // [read-only] Bits 31:0 = CARDSTATUS3
    volatile uint32_t RESP4;   // [read-only] Bits 31:0 = CARDSTATUS4
    volatile uint32_t DTIMER;  // [read-write] Bits 31:0 = DATATIME: Data timeout period
    volatile uint32_t DLEN;    // [read-write] Bits 24:0 = DATALENGTH: Data length value
    volatile uint32_t DCTRL;   // [read-write] SDIO data control register (SDIO_DCTRL)
    volatile uint32_t DCOUNT;  // [read-only] Bits 24:0 = DATACOUNT: Data count value
    volatile uint32_t STA;     // [read-only] SDIO status register (SDIO_STA)
    volatile uint32_t ICR;     // [read-write] SDIO interrupt clear register (SDIO_ICR)
    volatile uint32_t MASK;    // [read-write] SDIO mask register (SDIO_MASK)
    reserved_t<0x2> _0x48;
    volatile uint32_t FIFOCNT; // [read-only] Bits 23:0 = FIFOCOUNT: Remaining number of words to be written to or read from the FIFO
    reserved_t<0xd> _0x80;
    volatile uint32_t FIFO;    // [read-write] bits 31:0 = FIFOData: Receive and transmit FIFO data

    static constexpr uint32_t POWER_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t POWER_PWRCTRL =   // PWRCTRL
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t CLKCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CLKCR_CLKDIV =          // Clock divide factor
        bit_field_t<0, 0xff>::value<X>();
    static constexpr uint32_t CLKCR_CLKEN = 0x100;    // Clock enable bit
    static constexpr uint32_t CLKCR_PWRSAV = 0x200;   // Power saving configuration bit
    static constexpr uint32_t CLKCR_BYPASS = 0x400;   // Clock divider bypass enable bit
    template<uint32_t X>
    static constexpr uint32_t CLKCR_WIDBUS =          // Wide bus mode enable bit
        bit_field_t<11, 0x3>::value<X>();
    static constexpr uint32_t CLKCR_NEGEDGE = 0x2000; // SDIO_CK dephasing selection bit
    static constexpr uint32_t CLKCR_HWFC_EN = 0x4000; // HW Flow Control enable

    static constexpr uint32_t ARG_RESET_VALUE = 0x0;

    static constexpr uint32_t CMD_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CMD_CMDINDEX =           // CMDINDEX
        bit_field_t<0, 0x3f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CMD_WAITRESP =           // WAITRESP
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t CMD_WAITINT = 0x100;     // WAITINT
    static constexpr uint32_t CMD_WAITPEND = 0x200;    // WAITPEND
    static constexpr uint32_t CMD_CPSMEN = 0x400;      // CPSMEN
    static constexpr uint32_t CMD_SDIOSuspend = 0x800; // SDIOSuspend
    static constexpr uint32_t CMD_ENCMDcompl = 0x1000; // ENCMDcompl
    static constexpr uint32_t CMD_nIEN = 0x2000;       // nIEN
    static constexpr uint32_t CMD_CE_ATACMD = 0x4000;  // CE_ATACMD

    static constexpr uint32_t RESPCMD_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RESPCMD_RESPCMD =   // RESPCMD
        bit_field_t<0, 0x3f>::value<X>();

    static constexpr uint32_t RESPI1_RESET_VALUE = 0x0;

    static constexpr uint32_t RESP2_RESET_VALUE = 0x0;

    static constexpr uint32_t RESP3_RESET_VALUE = 0x0;

    static constexpr uint32_t RESP4_RESET_VALUE = 0x0;

    static constexpr uint32_t DTIMER_RESET_VALUE = 0x0;

    static constexpr uint32_t DLEN_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DLEN_DATALENGTH =   // Data length value
        bit_field_t<0, 0x1ffffff>::value<X>();

    static constexpr uint32_t DCTRL_RESET_VALUE = 0x0;
    static constexpr uint32_t DCTRL_DTEN = 0x1;      // DTEN
    static constexpr uint32_t DCTRL_DTDIR = 0x2;     // DTDIR
    static constexpr uint32_t DCTRL_DTMODE = 0x4;    // DTMODE
    static constexpr uint32_t DCTRL_DMAEN = 0x8;     // DMAEN
    template<uint32_t X>
    static constexpr uint32_t DCTRL_DBLOCKSIZE =     // DBLOCKSIZE
        bit_field_t<4, 0xf>::value<X>();
    static constexpr uint32_t DCTRL_PWSTART = 0x100; // PWSTART
    static constexpr uint32_t DCTRL_PWSTOP = 0x200;  // PWSTOP
    static constexpr uint32_t DCTRL_RWMOD = 0x400;   // RWMOD
    static constexpr uint32_t DCTRL_SDIOEN = 0x800;  // SDIOEN

    static constexpr uint32_t DCOUNT_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DCOUNT_DATACOUNT =   // Data count value
        bit_field_t<0, 0x1ffffff>::value<X>();

    static constexpr uint32_t STA_RESET_VALUE = 0x0;
    static constexpr uint32_t STA_CCRCFAIL = 0x1;      // CCRCFAIL
    static constexpr uint32_t STA_DCRCFAIL = 0x2;      // DCRCFAIL
    static constexpr uint32_t STA_CTIMEOUT = 0x4;      // CTIMEOUT
    static constexpr uint32_t STA_DTIMEOUT = 0x8;      // DTIMEOUT
    static constexpr uint32_t STA_TXUNDERR = 0x10;     // TXUNDERR
    static constexpr uint32_t STA_RXOVERR = 0x20;      // RXOVERR
    static constexpr uint32_t STA_CMDREND = 0x40;      // CMDREND
    static constexpr uint32_t STA_CMDSENT = 0x80;      // CMDSENT
    static constexpr uint32_t STA_DATAEND = 0x100;     // DATAEND
    static constexpr uint32_t STA_STBITERR = 0x200;    // STBITERR
    static constexpr uint32_t STA_DBCKEND = 0x400;     // DBCKEND
    static constexpr uint32_t STA_CMDACT = 0x800;      // CMDACT
    static constexpr uint32_t STA_TXACT = 0x1000;      // TXACT
    static constexpr uint32_t STA_RXACT = 0x2000;      // RXACT
    static constexpr uint32_t STA_TXFIFOHE = 0x4000;   // TXFIFOHE
    static constexpr uint32_t STA_RXFIFOHF = 0x8000;   // RXFIFOHF
    static constexpr uint32_t STA_TXFIFOF = 0x10000;   // TXFIFOF
    static constexpr uint32_t STA_RXFIFOF = 0x20000;   // RXFIFOF
    static constexpr uint32_t STA_TXFIFOE = 0x40000;   // TXFIFOE
    static constexpr uint32_t STA_RXFIFOE = 0x80000;   // RXFIFOE
    static constexpr uint32_t STA_TXDAVL = 0x100000;   // TXDAVL
    static constexpr uint32_t STA_RXDAVL = 0x200000;   // RXDAVL
    static constexpr uint32_t STA_SDIOIT = 0x400000;   // SDIOIT
    static constexpr uint32_t STA_CEATAEND = 0x800000; // CEATAEND

    static constexpr uint32_t ICR_RESET_VALUE = 0x0;
    static constexpr uint32_t ICR_CCRCFAILC = 0x1;      // CCRCFAILC
    static constexpr uint32_t ICR_DCRCFAILC = 0x2;      // DCRCFAILC
    static constexpr uint32_t ICR_CTIMEOUTC = 0x4;      // CTIMEOUTC
    static constexpr uint32_t ICR_DTIMEOUTC = 0x8;      // DTIMEOUTC
    static constexpr uint32_t ICR_TXUNDERRC = 0x10;     // TXUNDERRC
    static constexpr uint32_t ICR_RXOVERRC = 0x20;      // RXOVERRC
    static constexpr uint32_t ICR_CMDRENDC = 0x40;      // CMDRENDC
    static constexpr uint32_t ICR_CMDSENTC = 0x80;      // CMDSENTC
    static constexpr uint32_t ICR_DATAENDC = 0x100;     // DATAENDC
    static constexpr uint32_t ICR_STBITERRC = 0x200;    // STBITERRC
    static constexpr uint32_t ICR_DBCKENDC = 0x400;     // DBCKENDC
    static constexpr uint32_t ICR_SDIOITC = 0x400000;   // SDIOITC
    static constexpr uint32_t ICR_CEATAENDC = 0x800000; // CEATAENDC

    static constexpr uint32_t MASK_RESET_VALUE = 0x0;
    static constexpr uint32_t MASK_CCRCFAILIE = 0x1;     // CCRCFAILIE
    static constexpr uint32_t MASK_DCRCFAILIE = 0x2;     // DCRCFAILIE
    static constexpr uint32_t MASK_CTIMEOUTIE = 0x4;     // CTIMEOUTIE
    static constexpr uint32_t MASK_DTIMEOUTIE = 0x8;     // DTIMEOUTIE
    static constexpr uint32_t MASK_TXUNDERRIE = 0x10;    // TXUNDERRIE
    static constexpr uint32_t MASK_RXOVERRIE = 0x20;     // RXOVERRIE
    static constexpr uint32_t MASK_CMDRENDIE = 0x40;     // CMDRENDIE
    static constexpr uint32_t MASK_CMDSENTIE = 0x80;     // CMDSENTIE
    static constexpr uint32_t MASK_DATAENDIE = 0x100;    // DATAENDIE
    static constexpr uint32_t MASK_STBITERRIE = 0x200;   // STBITERRIE
    static constexpr uint32_t MASK_DBACKENDIE = 0x400;   // DBACKENDIE
    static constexpr uint32_t MASK_CMDACTIE = 0x800;     // CMDACTIE
    static constexpr uint32_t MASK_TXACTIE = 0x1000;     // TXACTIE
    static constexpr uint32_t MASK_RXACTIE = 0x2000;     // RXACTIE
    static constexpr uint32_t MASK_TXFIFOHEIE = 0x4000;  // TXFIFOHEIE
    static constexpr uint32_t MASK_RXFIFOHFIE = 0x8000;  // RXFIFOHFIE
    static constexpr uint32_t MASK_TXFIFOFIE = 0x10000;  // TXFIFOFIE
    static constexpr uint32_t MASK_RXFIFOFIE = 0x20000;  // RXFIFOFIE
    static constexpr uint32_t MASK_TXFIFOEIE = 0x40000;  // TXFIFOEIE
    static constexpr uint32_t MASK_RXFIFOEIE = 0x80000;  // RXFIFOEIE
    static constexpr uint32_t MASK_TXDAVLIE = 0x100000;  // TXDAVLIE
    static constexpr uint32_t MASK_RXDAVLIE = 0x200000;  // RXDAVLIE
    static constexpr uint32_t MASK_SDIOITIE = 0x400000;  // SDIOITIE
    static constexpr uint32_t MASK_CEATENDIE = 0x800000; // CEATENDIE

    static constexpr uint32_t FIFOCNT_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FIFOCNT_FIF0COUNT =   // FIF0COUNT
        bit_field_t<0, 0xffffff>::value<X>();

    static constexpr uint32_t FIFO_RESET_VALUE = 0x0;
};


////
//
//      Secure digital input/output interface
//
////

struct stm32f102_sdio_t
{
    volatile uint32_t POWER;   // [read-write] power control register
    volatile uint32_t CLKCR;   // [read-write] SDI clock control register
    volatile uint32_t ARG;     // [read-write] argument register
    volatile uint32_t CMD;     // [read-write] command register
    volatile uint32_t RESPCMD; // [read-only] command response register
    volatile uint32_t RESP1;   // [read-only] response 1..4 register
    volatile uint32_t RESP2;   // [read-only] response 1..4 register
    volatile uint32_t RESP3;   // [read-only] response 1..4 register
    volatile uint32_t RESP4;   // [read-only] response 1..4 register
    volatile uint32_t DTIMER;  // [read-write] data timer register
    volatile uint32_t DLEN;    // [read-write] data length register
    volatile uint32_t DCTRL;   // [read-write] data control register
    volatile uint32_t DCOUNT;  // [read-only] data counter register
    volatile uint32_t STA;     // [read-only] status register
    volatile uint32_t ICR;     // [read-write] interrupt clear register
    volatile uint32_t MASK;    // [read-write] mask register
    reserved_t<0x2> _0x48;
    volatile uint32_t FIFOCNT; // [read-only] FIFO counter register
    reserved_t<0xd> _0x80;
    volatile uint32_t FIFO;    // [read-write] data FIFO register

    static constexpr uint32_t POWER_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t POWER_PWRCTRL =   // PWRCTRL
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t CLKCR_RESET_VALUE = 0x0;
    static constexpr uint32_t CLKCR_HWFC_EN = 0x4000; // HW Flow Control enable
    static constexpr uint32_t CLKCR_NEGEDGE = 0x2000; // SDIO_CK dephasing selection bit
    template<uint32_t X>
    static constexpr uint32_t CLKCR_WIDBUS =          // Wide bus mode enable bit
        bit_field_t<11, 0x3>::value<X>();
    static constexpr uint32_t CLKCR_BYPASS = 0x400;   // Clock divider bypass enable bit
    static constexpr uint32_t CLKCR_PWRSAV = 0x200;   // Power saving configuration bit
    static constexpr uint32_t CLKCR_CLKEN = 0x100;    // Clock enable bit
    template<uint32_t X>
    static constexpr uint32_t CLKCR_CLKDIV =          // Clock divide factor
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t ARG_RESET_VALUE = 0x0;

    static constexpr uint32_t CMD_RESET_VALUE = 0x0;
    static constexpr uint32_t CMD_CE_ATACMD = 0x4000;  // CE-ATA command
    static constexpr uint32_t CMD_nIEN = 0x2000;       // not Interrupt Enable
    static constexpr uint32_t CMD_ENCMDcompl = 0x1000; // Enable CMD completion
    static constexpr uint32_t CMD_SDIOSuspend = 0x800; // SD I/O suspend command
    static constexpr uint32_t CMD_CPSMEN = 0x400;      // Command path state machine (CPSM) Enable bit
    static constexpr uint32_t CMD_WAITPEND = 0x200;    // CPSM Waits for ends of data transfer (CmdPend internal signal).
    static constexpr uint32_t CMD_WAITINT = 0x100;     // CPSM waits for interrupt request
    template<uint32_t X>
    static constexpr uint32_t CMD_WAITRESP =           // Wait for response bits
        bit_field_t<6, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CMD_CMDINDEX =           // Command index
        bit_field_t<0, 0x3f>::value<X>();

    static constexpr uint32_t RESPCMD_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RESPCMD_RESPCMD =   // Response command index
        bit_field_t<0, 0x3f>::value<X>();

    static constexpr uint32_t RESP1_RESET_VALUE = 0x0;

    static constexpr uint32_t RESP2_RESET_VALUE = 0x0;

    static constexpr uint32_t RESP3_RESET_VALUE = 0x0;

    static constexpr uint32_t RESP4_RESET_VALUE = 0x0;

    static constexpr uint32_t DTIMER_RESET_VALUE = 0x0;

    static constexpr uint32_t DLEN_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DLEN_DATALENGTH =   // Data length value
        bit_field_t<0, 0x1ffffff>::value<X>();

    static constexpr uint32_t DCTRL_RESET_VALUE = 0x0;
    static constexpr uint32_t DCTRL_SDIOEN = 0x800;  // SD I/O enable functions
    static constexpr uint32_t DCTRL_RWMOD = 0x400;   // Read wait mode
    static constexpr uint32_t DCTRL_RWSTOP = 0x200;  // Read wait stop
    static constexpr uint32_t DCTRL_RWSTART = 0x100; // Read wait start
    template<uint32_t X>
    static constexpr uint32_t DCTRL_DBLOCKSIZE =     // Data block size
        bit_field_t<4, 0xf>::value<X>();
    static constexpr uint32_t DCTRL_DMAEN = 0x8;     // DMA enable bit
    static constexpr uint32_t DCTRL_DTMODE = 0x4;    // Data transfer mode selection 1: Stream or SDIO multibyte data transfer.
    static constexpr uint32_t DCTRL_DTDIR = 0x2;     // Data transfer direction selection
    static constexpr uint32_t DCTRL_DTEN = 0x1;      // DTEN

    static constexpr uint32_t DCOUNT_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DCOUNT_DATACOUNT =   // Data count value
        bit_field_t<0, 0x1ffffff>::value<X>();

    static constexpr uint32_t STA_RESET_VALUE = 0x0;
    static constexpr uint32_t STA_CEATAEND = 0x800000; // CE-ATA command completion signal received for CMD61
    static constexpr uint32_t STA_SDIOIT = 0x400000;   // SDIO interrupt received
    static constexpr uint32_t STA_RXDAVL = 0x200000;   // Data available in receive FIFO
    static constexpr uint32_t STA_TXDAVL = 0x100000;   // Data available in transmit FIFO
    static constexpr uint32_t STA_RXFIFOE = 0x80000;   // Receive FIFO empty
    static constexpr uint32_t STA_TXFIFOE = 0x40000;   // Transmit FIFO empty
    static constexpr uint32_t STA_RXFIFOF = 0x20000;   // Receive FIFO full
    static constexpr uint32_t STA_TXFIFOF = 0x10000;   // Transmit FIFO full
    static constexpr uint32_t STA_RXFIFOHF = 0x8000;   // Receive FIFO half full: there are at least 8 words in the FIFO
    static constexpr uint32_t STA_TXFIFOHE = 0x4000;   // Transmit FIFO half empty: at least 8 words can be written into the FIFO
    static constexpr uint32_t STA_RXACT = 0x2000;      // Data receive in progress
    static constexpr uint32_t STA_TXACT = 0x1000;      // Data transmit in progress
    static constexpr uint32_t STA_CMDACT = 0x800;      // Command transfer in progress
    static constexpr uint32_t STA_DBCKEND = 0x400;     // Data block sent/received (CRC check passed)
    static constexpr uint32_t STA_STBITERR = 0x200;    // Start bit not detected on all data signals in wide bus mode
    static constexpr uint32_t STA_DATAEND = 0x100;     // Data end (data counter, SDIDCOUNT, is zero)
    static constexpr uint32_t STA_CMDSENT = 0x80;      // Command sent (no response required)
    static constexpr uint32_t STA_CMDREND = 0x40;      // Command response received (CRC check passed)
    static constexpr uint32_t STA_RXOVERR = 0x20;      // Received FIFO overrun error
    static constexpr uint32_t STA_TXUNDERR = 0x10;     // Transmit FIFO underrun error
    static constexpr uint32_t STA_DTIMEOUT = 0x8;      // Data timeout
    static constexpr uint32_t STA_CTIMEOUT = 0x4;      // Command response timeout
    static constexpr uint32_t STA_DCRCFAIL = 0x2;      // Data block sent/received (CRC check failed)
    static constexpr uint32_t STA_CCRCFAIL = 0x1;      // Command response received (CRC check failed)

    static constexpr uint32_t ICR_RESET_VALUE = 0x0;
    static constexpr uint32_t ICR_CEATAENDC = 0x800000; // CEATAEND flag clear bit
    static constexpr uint32_t ICR_SDIOITC = 0x400000;   // SDIOIT flag clear bit
    static constexpr uint32_t ICR_DBCKENDC = 0x400;     // DBCKEND flag clear bit
    static constexpr uint32_t ICR_STBITERRC = 0x200;    // STBITERR flag clear bit
    static constexpr uint32_t ICR_DATAENDC = 0x100;     // DATAEND flag clear bit
    static constexpr uint32_t ICR_CMDSENTC = 0x80;      // CMDSENT flag clear bit
    static constexpr uint32_t ICR_CMDRENDC = 0x40;      // CMDREND flag clear bit
    static constexpr uint32_t ICR_RXOVERRC = 0x20;      // RXOVERR flag clear bit
    static constexpr uint32_t ICR_TXUNDERRC = 0x10;     // TXUNDERR flag clear bit
    static constexpr uint32_t ICR_DTIMEOUTC = 0x8;      // DTIMEOUT flag clear bit
    static constexpr uint32_t ICR_CTIMEOUTC = 0x4;      // CTIMEOUT flag clear bit
    static constexpr uint32_t ICR_DCRCFAILC = 0x2;      // DCRCFAIL flag clear bit
    static constexpr uint32_t ICR_CCRCFAILC = 0x1;      // CCRCFAIL flag clear bit

    static constexpr uint32_t MASK_RESET_VALUE = 0x0;
    static constexpr uint32_t MASK_CEATAENDIE = 0x800000; // CE-ATA command completion signal received interrupt enable
    static constexpr uint32_t MASK_SDIOITIE = 0x400000;   // SDIO mode interrupt received interrupt enable
    static constexpr uint32_t MASK_RXDAVLIE = 0x200000;   // Data available in Rx FIFO interrupt enable
    static constexpr uint32_t MASK_TXDAVLIE = 0x100000;   // Data available in Tx FIFO interrupt enable
    static constexpr uint32_t MASK_RXFIFOEIE = 0x80000;   // Rx FIFO empty interrupt enable
    static constexpr uint32_t MASK_TXFIFOEIE = 0x40000;   // Tx FIFO empty interrupt enable
    static constexpr uint32_t MASK_RXFIFOFIE = 0x20000;   // Rx FIFO full interrupt enable
    static constexpr uint32_t MASK_TXFIFOFIE = 0x10000;   // Tx FIFO full interrupt enable
    static constexpr uint32_t MASK_RXFIFOHFIE = 0x8000;   // Rx FIFO half full interrupt enable
    static constexpr uint32_t MASK_TXFIFOHEIE = 0x4000;   // Tx FIFO half empty interrupt enable
    static constexpr uint32_t MASK_RXACTIE = 0x2000;      // Data receive acting interrupt enable
    static constexpr uint32_t MASK_TXACTIE = 0x1000;      // Data transmit acting interrupt enable
    static constexpr uint32_t MASK_CMDACTIE = 0x800;      // Command acting interrupt enable
    static constexpr uint32_t MASK_DBCKENDIE = 0x400;     // Data block end interrupt enable
    static constexpr uint32_t MASK_STBITERRIE = 0x200;    // Start bit error interrupt enable
    static constexpr uint32_t MASK_DATAENDIE = 0x100;     // Data end interrupt enable
    static constexpr uint32_t MASK_CMDSENTIE = 0x80;      // Command sent interrupt enable
    static constexpr uint32_t MASK_CMDRENDIE = 0x40;      // Command response received interrupt enable
    static constexpr uint32_t MASK_RXOVERRIE = 0x20;      // Rx FIFO overrun error interrupt enable
    static constexpr uint32_t MASK_TXUNDERRIE = 0x10;     // Tx FIFO underrun error interrupt enable
    static constexpr uint32_t MASK_DTIMEOUTIE = 0x8;      // Data timeout interrupt enable
    static constexpr uint32_t MASK_CTIMEOUTIE = 0x4;      // Command timeout interrupt enable
    static constexpr uint32_t MASK_DCRCFAILIE = 0x2;      // Data CRC fail interrupt enable
    static constexpr uint32_t MASK_CCRCFAILIE = 0x1;      // Command CRC fail interrupt enable

    static constexpr uint32_t FIFOCNT_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FIFOCNT_FIFOCOUNT =   // Remaining number of words to be written to or read from the FIFO.
        bit_field_t<0, 0xffffff>::value<X>();

    static constexpr uint32_t FIFO_RESET_VALUE = 0x0;
};


template<>
struct peripheral_t<STM32F101, SDIO>
{
    typedef stm32f101_sdio_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F103, SDIO>
{
    typedef stm32f101_sdio_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F102, SDIO>
{
    typedef stm32f102_sdio_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F107, SDIO>
{
    typedef stm32f102_sdio_t T;
    static T& V;
};

using sdio_t = peripheral_t<mcu_svd, SDIO>;

