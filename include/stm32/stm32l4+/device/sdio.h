#pragma once

////
//
//      STM32L4+ SDIO peripherals
//
////

////
//
//      Secure digital input/output interface 1
//
////

struct stm32l4p5_sdmmc1_t
{
    volatile uint32_t POWER;      // [read-write] power control register
    volatile uint32_t CLKCR;      // [read-write] SDI clock control register
    volatile uint32_t ARGR;       // [read-write] argument register
    volatile uint32_t CMDR;       // [read-write] command register
    volatile uint32_t RESPCMDR;   // [read-only] command response register
    volatile uint32_t RESP1R;     // [read-only] response 1..4 register
    volatile uint32_t RESP2R;     // [read-only] response 1..4 register
    volatile uint32_t RESP3R;     // [read-only] response 1..4 register
    volatile uint32_t RESP4R;     // [read-only] response 1..4 register
    volatile uint32_t DTIMER;     // [read-write] data timer register
    volatile uint32_t DLENR;      // [read-write] data length register
    volatile uint32_t DCTRL;      // [read-write] data control register
    volatile uint32_t DCNTR;      // [read-only] data counter register
    volatile uint32_t STAR;       // [read-only] status register
    volatile uint32_t ICR;        // [read-write] interrupt clear register
    volatile uint32_t MASKR;      // [read-write] mask register
    volatile uint32_t ACKTIMER;   // [read-write] acknowledgment timer register
    reserved_t<0x3> _0x50;
    volatile uint32_t IDMACTRLR;  // [read-write] DMA control register
    volatile uint32_t IDMABSIZER; // [read-write] IDMA buffer size register
    volatile uint32_t IDMABASE0R; // [read-write] IDMA buffer 0 base address register
    volatile uint32_t IDMABASE1R; // [read-write] IDMA buffer 0 base address register
    reserved_t<0x8> _0x80;
    volatile uint32_t FIFOR0;     // [read-write] data FIFO register 0
    volatile uint32_t FIFOR1;     // [read-write] data FIFO register 1
    volatile uint32_t FIFOR2;     // [read-write] data FIFO register 2
    volatile uint32_t FIFOR3;     // [read-write] data FIFO register 3
    volatile uint32_t FIFOR4;     // [read-write] data FIFO register 4
    volatile uint32_t FIFOR5;     // [read-write] data FIFO register 5
    volatile uint32_t FIFOR6;     // [read-write] data FIFO register 6
    volatile uint32_t FIFOR7;     // [read-write] data FIFO register 7
    volatile uint32_t FIFOR8;     // [read-write] data FIFO register 8
    volatile uint32_t FIFOR9;     // [read-write] data FIFO register 9
    volatile uint32_t FIFOR10;    // [read-write] data FIFO register 10
    volatile uint32_t FIFOR11;    // [read-write] data FIFO register 11
    volatile uint32_t FIFOR12;    // [read-write] data FIFO register 12
    volatile uint32_t FIFOR13;    // [read-write] data FIFO register 13
    volatile uint32_t FIFOR14;    // [read-write] data FIFO register 14
    volatile uint32_t FIFOR15;    // [read-write] data FIFO register 15

    static constexpr uint32_t POWER_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t POWER_PWRCTRL =        // SDMMC state control bits
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t POWER_VSWITCH = 0x4;   // Voltage switch sequence start
    static constexpr uint32_t POWER_VSWITCHEN = 0x8; // Voltage switch procedure enable
    static constexpr uint32_t POWER_DIRPOL = 0x10;   // Data and command direction signals polarity selection

    static constexpr uint32_t CLKCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CLKCR_SELCLKRX =          // Receive clock selection
        bit_field_t<20, 0x3>::value<X>();
    static constexpr uint32_t CLKCR_BUSSPEED = 0x80000; // Bus speed mode selection between DS, HS, SDR12, SDR25 and SDR50,DDR50
    static constexpr uint32_t CLKCR_DDR = 0x40000;      // Data rate signaling selection
    static constexpr uint32_t CLKCR_HWFC_EN = 0x20000;  // Hardware flow control enable
    static constexpr uint32_t CLKCR_NEGEDGE = 0x10000;  // SDMMC_CK dephasing selection bit for data and command
    template<uint32_t X>
    static constexpr uint32_t CLKCR_WIDBUS =            // Wide bus mode enable bit
        bit_field_t<14, 0x3>::value<X>();
    static constexpr uint32_t CLKCR_PWRSAV = 0x1000;    // Power saving configuration bit
    template<uint32_t X>
    static constexpr uint32_t CLKCR_CLKDIV =            // Clock divide factor
        bit_field_t<0, 0x3ff>::value<X>();

    static constexpr uint32_t ARGR_RESET_VALUE = 0x0;

    static constexpr uint32_t CMDR_RESET_VALUE = 0x0;
    static constexpr uint32_t CMDR_CMDSUSPEND = 0x10000; // The CPSM treats the command as a Suspend or Resume command and signals interrupt period start/end
    static constexpr uint32_t CMDR_BOOTEN = 0x8000;      // Enable boot mode procedure
    static constexpr uint32_t CMDR_BOOTMODE = 0x4000;    // Select the boot mode procedure to be used
    static constexpr uint32_t CMDR_DTHOLD = 0x2000;      // Hold new data block transmission and reception in the DPSM
    static constexpr uint32_t CMDR_CPSMEN = 0x1000;      // Command path state machine (CPSM) Enable bit
    static constexpr uint32_t CMDR_WAITPEND = 0x800;     // CPSM Waits for ends of data transfer (CmdPend internal signal)
    static constexpr uint32_t CMDR_WAITINT = 0x400;      // CPSM waits for interrupt request
    template<uint32_t X>
    static constexpr uint32_t CMDR_WAITRESP =            // Wait for response bits
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t CMDR_CMDSTOP = 0x80;       // The CPSM treats the command as a Stop Transmission command and signals Abort to the DPSM
    static constexpr uint32_t CMDR_CMDTRANS = 0x40;      // The CPSM treats the command as a data transfer command, stops the interrupt period, and signals DataEnable to the DPSM
    template<uint32_t X>
    static constexpr uint32_t CMDR_CMDINDEX =            // Command index
        bit_field_t<0, 0x3f>::value<X>();

    static constexpr uint32_t RESPCMDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RESPCMDR_RESPCMD =   // Response command index
        bit_field_t<0, 0x3f>::value<X>();

    static constexpr uint32_t RESP1R_RESET_VALUE = 0x0;

    static constexpr uint32_t RESP2R_RESET_VALUE = 0x0;

    static constexpr uint32_t RESP3R_RESET_VALUE = 0x0;

    static constexpr uint32_t RESP4R_RESET_VALUE = 0x0;

    static constexpr uint32_t DTIMER_RESET_VALUE = 0x0;

    static constexpr uint32_t DLENR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DLENR_DATALENGTH =   // Data length value
        bit_field_t<0, 0x1ffffff>::value<X>();

    static constexpr uint32_t DCTRL_RESET_VALUE = 0x0;
    static constexpr uint32_t DCTRL_FIFORST = 0x2000;   // FIFO reset, will flush any remaining data
    static constexpr uint32_t DCTRL_BOOTACKEN = 0x1000; // Enable the reception of the boot acknowledgment
    static constexpr uint32_t DCTRL_SDIOEN = 0x800;     // SD I/O enable functions
    static constexpr uint32_t DCTRL_RWMOD = 0x400;      // Read wait mode
    static constexpr uint32_t DCTRL_RWSTOP = 0x200;     // Read wait stop
    static constexpr uint32_t DCTRL_RWSTART = 0x100;    // Read wait start
    template<uint32_t X>
    static constexpr uint32_t DCTRL_DBLOCKSIZE =        // Data block size
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DCTRL_DTMODE =            // Data transfer mode selection 1: Stream or SDIO multibyte data transfer
        bit_field_t<2, 0x3>::value<X>();
    static constexpr uint32_t DCTRL_DTDIR = 0x2;        // Data transfer direction selection
    static constexpr uint32_t DCTRL_DTEN = 0x1;         // DTEN

    static constexpr uint32_t DCNTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DCNTR_DATACOUNT =   // Data count value
        bit_field_t<0, 0x1ffffff>::value<X>();

    static constexpr uint32_t STAR_RESET_VALUE = 0x0;
    static constexpr uint32_t STAR_IDMABTC = 0x10000000;   // IDMA buffer transfer complete
    static constexpr uint32_t STAR_IDMATE = 0x8000000;     // IDMA transfer error
    static constexpr uint32_t STAR_CKSTOP = 0x4000000;     // SDMMC_CK stopped in Voltage switch procedure
    static constexpr uint32_t STAR_VSWEND = 0x2000000;     // Voltage switch critical timing section completion
    static constexpr uint32_t STAR_ACKTIMEOUT = 0x1000000; // Boot acknowledgment timeout
    static constexpr uint32_t STAR_ACKFAIL = 0x800000;     // Boot acknowledgment received (boot acknowledgment check fail)
    static constexpr uint32_t STAR_SDIOIT = 0x400000;      // SDIO interrupt received
    static constexpr uint32_t STAR_BUSYD0END = 0x200000;   // end of SDMMC_D0 Busy following a CMD response detected
    static constexpr uint32_t STAR_BUSYD0 = 0x100000;      // Inverted value of SDMMC_D0 line (Busy), sampled at the end of a CMD response and a second time 2 SDMMC_CK cycles after the CMD response
    static constexpr uint32_t STAR_RXFIFOE = 0x80000;      // Receive FIFO empty
    static constexpr uint32_t STAR_TXFIFOE = 0x40000;      // Transmit FIFO empty
    static constexpr uint32_t STAR_RXFIFOF = 0x20000;      // Receive FIFO full
    static constexpr uint32_t STAR_TXFIFOF = 0x10000;      // Transmit FIFO full
    static constexpr uint32_t STAR_RXFIFOHF = 0x8000;      // Receive FIFO half full: there are at least 8 words in the FIFO
    static constexpr uint32_t STAR_TXFIFOHE = 0x4000;      // Transmit FIFO half empty: at least 8 words can be written into the FIFO
    static constexpr uint32_t STAR_CPSMACT = 0x2000;       // Command path state machine active, i.e. not in Idle state
    static constexpr uint32_t STAR_DPSMACT = 0x1000;       // Data path state machine active, i.e. not in Idle state
    static constexpr uint32_t STAR_DABORT = 0x800;         // Data transfer aborted by CMD12
    static constexpr uint32_t STAR_DBCKEND = 0x400;        // Data block sent/received
    static constexpr uint32_t STAR_DHOLD = 0x200;          // Data transfer Hold
    static constexpr uint32_t STAR_DATAEND = 0x100;        // Data end (data counter, SDIDCOUNT, is zero)
    static constexpr uint32_t STAR_CMDSENT = 0x80;         // Command sent (no response required)
    static constexpr uint32_t STAR_CMDREND = 0x40;         // Command response received (CRC check passed)
    static constexpr uint32_t STAR_RXOVERR = 0x20;         // Received FIFO overrun error
    static constexpr uint32_t STAR_TXUNDERR = 0x10;        // Transmit FIFO underrun error
    static constexpr uint32_t STAR_DTIMEOUT = 0x8;         // Data timeout
    static constexpr uint32_t STAR_CTIMEOUT = 0x4;         // Command response timeout
    static constexpr uint32_t STAR_DCRCFAIL = 0x2;         // Data block sent/received (CRC check failed)
    static constexpr uint32_t STAR_CCRCFAIL = 0x1;         // Command response received (CRC check failed)

    static constexpr uint32_t ICR_RESET_VALUE = 0x0;
    static constexpr uint32_t ICR_IDMABTCC = 0x10000000;   // IDMA buffer transfer complete clear bit
    static constexpr uint32_t ICR_IDMATEC = 0x8000000;     // IDMA transfer error clear bit
    static constexpr uint32_t ICR_CKSTOPC = 0x4000000;     // CKSTOP flag clear bit
    static constexpr uint32_t ICR_VSWENDC = 0x2000000;     // VSWEND flag clear bit
    static constexpr uint32_t ICR_ACKTIMEOUTC = 0x1000000; // ACKTIMEOUT flag clear bit
    static constexpr uint32_t ICR_ACKFAILC = 0x800000;     // ACKFAIL flag clear bit
    static constexpr uint32_t ICR_SDIOITC = 0x400000;      // SDIOIT flag clear bit
    static constexpr uint32_t ICR_BUSYD0ENDC = 0x200000;   // BUSYD0END flag clear bit
    static constexpr uint32_t ICR_DABORTC = 0x800;         // DABORT flag clear bit
    static constexpr uint32_t ICR_DBCKENDC = 0x400;        // DBCKEND flag clear bit
    static constexpr uint32_t ICR_DHOLDC = 0x200;          // DHOLD flag clear bit
    static constexpr uint32_t ICR_DATAENDC = 0x100;        // DATAEND flag clear bit
    static constexpr uint32_t ICR_CMDSENTC = 0x80;         // CMDSENT flag clear bit
    static constexpr uint32_t ICR_CMDRENDC = 0x40;         // CMDREND flag clear bit
    static constexpr uint32_t ICR_RXOVERRC = 0x20;         // RXOVERR flag clear bit
    static constexpr uint32_t ICR_TXUNDERRC = 0x10;        // TXUNDERR flag clear bit
    static constexpr uint32_t ICR_DTIMEOUTC = 0x8;         // DTIMEOUT flag clear bit
    static constexpr uint32_t ICR_CTIMEOUTC = 0x4;         // CTIMEOUT flag clear bit
    static constexpr uint32_t ICR_DCRCFAILC = 0x2;         // DCRCFAIL flag clear bit
    static constexpr uint32_t ICR_CCRCFAILC = 0x1;         // CCRCFAIL flag clear bit

    static constexpr uint32_t MASKR_RESET_VALUE = 0x0;
    static constexpr uint32_t MASKR_IDMABTCIE = 0x10000000;   // IDMABTCIE
    static constexpr uint32_t MASKR_CKSTOPIE = 0x4000000;     // CKSTOPIE
    static constexpr uint32_t MASKR_VSWENDIE = 0x2000000;     // Voltage switch critical timing section completion interrupt enable
    static constexpr uint32_t MASKR_ACKTIMEOUTIE = 0x1000000; // Acknowledgment timeout interrupt enable
    static constexpr uint32_t MASKR_ACKFAILIE = 0x800000;     // Acknowledgment Fail interrupt enable
    static constexpr uint32_t MASKR_SDIOITIE = 0x400000;      // SDIO mode interrupt received interrupt enable
    static constexpr uint32_t MASKR_BUSYD0ENDIE = 0x200000;   // BUSYD0END interrupt enable
    static constexpr uint32_t MASKR_TXFIFOEIE = 0x40000;      // Tx FIFO empty interrupt enable
    static constexpr uint32_t MASKR_RXFIFOFIE = 0x20000;      // Rx FIFO full interrupt enable
    static constexpr uint32_t MASKR_RXFIFOHFIE = 0x8000;      // Rx FIFO half full interrupt enable
    static constexpr uint32_t MASKR_TXFIFOHEIE = 0x4000;      // Tx FIFO half empty interrupt enable
    static constexpr uint32_t MASKR_DABORTIE = 0x800;         // Data transfer aborted interrupt enable
    static constexpr uint32_t MASKR_DBCKENDIE = 0x400;        // Data block end interrupt enable
    static constexpr uint32_t MASKR_DHOLDIE = 0x200;          // Data hold interrupt enable
    static constexpr uint32_t MASKR_DATAENDIE = 0x100;        // Data end interrupt enable
    static constexpr uint32_t MASKR_CMDSENTIE = 0x80;         // Command sent interrupt enable
    static constexpr uint32_t MASKR_CMDRENDIE = 0x40;         // Command response received interrupt enable
    static constexpr uint32_t MASKR_RXOVERRIE = 0x20;         // Rx FIFO overrun error interrupt enable
    static constexpr uint32_t MASKR_TXUNDERRIE = 0x10;        // Tx FIFO underrun error interrupt enable
    static constexpr uint32_t MASKR_DTIMEOUTIE = 0x8;         // Data timeout interrupt enable
    static constexpr uint32_t MASKR_CTIMEOUTIE = 0x4;         // Command timeout interrupt enable
    static constexpr uint32_t MASKR_DCRCFAILIE = 0x2;         // Data CRC fail interrupt enable
    static constexpr uint32_t MASKR_CCRCFAILIE = 0x1;         // Command CRC fail interrupt enable

    static constexpr uint32_t ACKTIMER_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ACKTIMER_ACKTIME =   // Boot acknowledgment timeout period
        bit_field_t<0, 0x1ffffff>::value<X>();

    static constexpr uint32_t FIFOR0_RESET_VALUE = 0x0;

    static constexpr uint32_t FIFOR1_RESET_VALUE = 0x0;

    static constexpr uint32_t FIFOR2_RESET_VALUE = 0x0;

    static constexpr uint32_t FIFOR3_RESET_VALUE = 0x0;

    static constexpr uint32_t FIFOR4_RESET_VALUE = 0x0;

    static constexpr uint32_t FIFOR5_RESET_VALUE = 0x0;

    static constexpr uint32_t FIFOR6_RESET_VALUE = 0x0;

    static constexpr uint32_t FIFOR7_RESET_VALUE = 0x0;

    static constexpr uint32_t FIFOR8_RESET_VALUE = 0x0;

    static constexpr uint32_t FIFOR9_RESET_VALUE = 0x0;

    static constexpr uint32_t FIFOR10_RESET_VALUE = 0x0;

    static constexpr uint32_t FIFOR11_RESET_VALUE = 0x0;

    static constexpr uint32_t FIFOR12_RESET_VALUE = 0x0;

    static constexpr uint32_t FIFOR13_RESET_VALUE = 0x0;

    static constexpr uint32_t FIFOR14_RESET_VALUE = 0x0;

    static constexpr uint32_t FIFOR15_RESET_VALUE = 0x0;

    static constexpr uint32_t IDMACTRLR_RESET_VALUE = 0x0;
    static constexpr uint32_t IDMACTRLR_IDMAEN = 0x1;    // IDMA enable
    static constexpr uint32_t IDMACTRLR_IDMABMODE = 0x2; // Buffer mode selection
    static constexpr uint32_t IDMACTRLR_IDMABACT = 0x4;  // Double buffer mode active buffer indication

    static constexpr uint32_t IDMABSIZER_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IDMABSIZER_IDMABNDT =   // Number of bytes per buffer
        bit_field_t<5, 0xff>::value<X>();

    static constexpr uint32_t IDMABASE0R_RESET_VALUE = 0x0;

    static constexpr uint32_t IDMABASE1R_RESET_VALUE = 0x0;
};


////
//
//      Secure digital input/output interface
//
////

struct stm32l4r5_sdmmc1_t
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
    static constexpr uint32_t CMD_WAITPEND = 0x200;    // CPSM Waits for ends of data transfer (CmdPend internal signal)
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
    static constexpr uint32_t DCTRL_DTMODE = 0x4;    // Data transfer mode selection 1: Stream or SDIO multibyte data transfer
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
    static constexpr uint32_t FIFOCNT_FIFOCOUNT =   // Remaining number of words to be written to or read from the FIFO
        bit_field_t<0, 0xffffff>::value<X>();

    static constexpr uint32_t FIFO_RESET_VALUE = 0x0;
};


template<>
struct peripheral_t<STM32L4P5, SDMMC1>
{
    typedef stm32l4p5_sdmmc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4P5, SDMMC2>
{
    typedef stm32l4p5_sdmmc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4Q5, SDMMC1>
{
    typedef stm32l4p5_sdmmc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4Q5, SDMMC2>
{
    typedef stm32l4p5_sdmmc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R5, SDMMC1>
{
    typedef stm32l4r5_sdmmc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R7, SDMMC1>
{
    typedef stm32l4r5_sdmmc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R9, SDMMC1>
{
    typedef stm32l4r5_sdmmc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S5, SDMMC1>
{
    typedef stm32l4r5_sdmmc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S7, SDMMC1>
{
    typedef stm32l4r5_sdmmc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S9, SDMMC1>
{
    typedef stm32l4r5_sdmmc1_t T;
    static T& V;
};

using sdmmc1_t = peripheral_t<mcu_svd, SDMMC1>;
using sdmmc2_t = peripheral_t<mcu_svd, SDMMC2>;

