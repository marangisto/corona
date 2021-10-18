#pragma once

////
//
//      STM32U5 SDMMC peripherals
//
///

// SDMMC1: Secure digital input/output MultiMediaCard interface

struct stm32u5xx_sdmmc1_t
{
    volatile uint32_t POWER; // power control register
    volatile uint32_t CLKCR; // clock control register
    volatile uint32_t ARGR; // argument register
    volatile uint32_t CMDR; // command register
    volatile uint32_t RESPCMDR; // command response register
    volatile uint32_t RESP1; // response 1 register
    volatile uint32_t RESP2; // response 2 register
    volatile uint32_t RESP3; // response 3 register
    volatile uint32_t RESP4; // response 4 register
    volatile uint32_t DTIMER; // data timer register
    volatile uint32_t DLENR; // data length register
    volatile uint32_t DCTRL; // data control register
    volatile uint32_t DCNTR; // data counter register
    volatile uint32_t STAR; // status register
    volatile uint32_t ICR; // interrupt clear register
    volatile uint32_t MASKR; // mask register
    volatile uint32_t ACKTIMER; // acknowledgment timer register
    reserved_t<0x3> _0x44;
    volatile uint32_t SDMMC_IDMACTRLR; // DMA control register
    volatile uint32_t SDMMC_IDMABSIZER; // buffer size register
    volatile uint32_t SDMMC_IDMABASER; // buffer base address register
    reserved_t<0x2> _0x5c;
    volatile uint32_t SDMMC_IDMALAR; // linked list address register
    volatile uint32_t SDMMC_IDMABAR; // linked list memory base register
    reserved_t<0x5> _0x6c;
    volatile uint32_t FIFOR0; // data FIFO register 0
    volatile uint32_t FIFOR1; // data FIFO register 1
    volatile uint32_t FIFOR2; // data FIFO register 2
    volatile uint32_t FIFOR3; // data FIFO register 3
    volatile uint32_t FIFOR4; // data FIFO register 4
    volatile uint32_t FIFOR5; // data FIFO register 5
    volatile uint32_t FIFOR6; // data FIFO register 6
    volatile uint32_t FIFOR7; // data FIFO register 7
    volatile uint32_t FIFOR8; // data FIFO register 8
    volatile uint32_t FIFOR9; // data FIFO register 9
    volatile uint32_t FIFOR10; // data FIFO register 10
    volatile uint32_t FIFOR11; // data FIFO register 11
    volatile uint32_t FIFOR12; // data FIFO register 12
    volatile uint32_t FIFOR13; // data FIFO register 13
    volatile uint32_t FIFOR14; // data FIFO register 14
    volatile uint32_t FIFOR15; // data FIFO register 15

    static constexpr uint32_t POWER_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> POWER_PWRCTRL; // SDMMC state control bits
    static constexpr uint32_t POWER_VSWITCH = 0x4; // Voltage switch sequence start
    static constexpr uint32_t POWER_VSWITCHEN = 0x8; // Voltage switch procedure enable
    static constexpr uint32_t POWER_DIRPOL = 0x10; // Data and command direction signals polarity selection

    static constexpr uint32_t CLKCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<20, 0x3> CLKCR_SELCLKRX; // Receive clock selection
    static constexpr uint32_t CLKCR_BUSSPEED = 0x80000; // Bus speed mode selection between DS, HS, SDR12, SDR25 and SDR50,DDR50, SDR104
    static constexpr uint32_t CLKCR_DDR = 0x40000; // Data rate signaling selection
    static constexpr uint32_t CLKCR_HWFC_EN = 0x20000; // HW Flow Control enable
    static constexpr uint32_t CLKCR_NEGEDGE = 0x10000; // SDIO_CK dephasing selection bit
    typedef bit_field_t<14, 0x3> CLKCR_WIDBUS; // Wide bus mode enable bit
    static constexpr uint32_t CLKCR_PWRSAV = 0x1000; // Power saving configuration bit
    typedef bit_field_t<0, 0x3ff> CLKCR_CLKDIV; // Clock divide factor

    static constexpr uint32_t ARGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ARGR_CMDARG; // Command argument

    static constexpr uint32_t CMDR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CMDR_CMDSUSPEND = 0x10000; // The CPSM treats the command as a Suspend or Resume command and signals interrupt period start/end
    static constexpr uint32_t CMDR_BOOTEN = 0x8000; // Enable boot mode procedure
    static constexpr uint32_t CMDR_BOOTMODE = 0x4000; // Select the boot mode procedure to be used
    static constexpr uint32_t CMDR_DTHOLD = 0x2000; // Hold new data block transmission and reception in the DPSM
    static constexpr uint32_t CMDR_CPSMEN = 0x1000; // Command path state machine (CPSM) Enable bit
    static constexpr uint32_t CMDR_WAITPEND = 0x800; // CPSM Waits for ends of data transfer (CmdPend internal signal) from DPSM
    static constexpr uint32_t CMDR_WAITINT = 0x400; // CPSM waits for interrupt request
    typedef bit_field_t<8, 0x3> CMDR_WAITRESP; // Wait for response bits
    static constexpr uint32_t CMDR_CMDSTOP = 0x80; // The CPSM treats the command as a Stop Transmission command and signals Abort to the DPSM
    static constexpr uint32_t CMDR_CMDTRANS = 0x40; // The CPSM treats the command as a data transfer command, stops the interrupt period, and signals DataEnable to the DPSM
    typedef bit_field_t<0, 0x3f> CMDR_CMDINDEX; // Command index

    static constexpr uint32_t RESPCMDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3f> RESPCMDR_RESPCMD; // Response command index

    static constexpr uint32_t RESP1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> RESP1_CARDSTATUS1; // CARDSTATUS1

    static constexpr uint32_t RESP2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> RESP2_CARDSTATUS2; // CARDSTATUS2

    static constexpr uint32_t RESP3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> RESP3_CARDSTATUS3; // CARDSTATUS3

    static constexpr uint32_t RESP4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> RESP4_CARDSTATUS4; // CARDSTATUS4

    static constexpr uint32_t DTIMER_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DTIMER_DATATIME; // Data and R1b busy timeout period

    static constexpr uint32_t DLENR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ffffff> DLENR_DATALENGTH; // Data length value

    static constexpr uint32_t DCTRL_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DCTRL_FIFORST = 0x2000; // FIFO reset, will flush any remaining data
    static constexpr uint32_t DCTRL_BOOTACKEN = 0x1000; // Enable the reception of the boot acknowledgment
    static constexpr uint32_t DCTRL_SDIOEN = 0x800; // SD I/O enable functions
    static constexpr uint32_t DCTRL_RWMOD = 0x400; // Read wait mode
    static constexpr uint32_t DCTRL_RWSTOP = 0x200; // Read wait stop
    static constexpr uint32_t DCTRL_RWSTART = 0x100; // Read wait start
    typedef bit_field_t<4, 0xf> DCTRL_DBLOCKSIZE; // Data block size
    typedef bit_field_t<2, 0x3> DCTRL_DTMODE; // Data transfer mode selection
    static constexpr uint32_t DCTRL_DTDIR = 0x2; // Data transfer direction selection
    static constexpr uint32_t DCTRL_DTEN = 0x1; // DTEN

    static constexpr uint32_t DCNTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ffffff> DCNTR_DATACOUNT; // Data count value

    static constexpr uint32_t STAR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t STAR_IDMABTC = 0x10000000; // IDMA buffer transfer complete
    static constexpr uint32_t STAR_IDMATE = 0x8000000; // IDMA transfer error
    static constexpr uint32_t STAR_CKSTOP = 0x4000000; // SDMMC_CK stopped in Voltage switch procedure
    static constexpr uint32_t STAR_VSWEND = 0x2000000; // Voltage switch critical timing section completion
    static constexpr uint32_t STAR_ACKTIMEOUT = 0x1000000; // Boot acknowledgment timeout
    static constexpr uint32_t STAR_ACKFAIL = 0x800000; // Boot acknowledgment received (boot acknowledgment check fail)
    static constexpr uint32_t STAR_SDIOIT = 0x400000; // SDIO interrupt received
    static constexpr uint32_t STAR_BUSYD0END = 0x200000; // end of SDMMC_D0 Busy following a CMD response detected
    static constexpr uint32_t STAR_BUSYD0 = 0x100000; // Inverted value of SDMMC_D0 line (Busy), sampled at the end of a CMD response and a second time 2 SDMMC_CK cycles after the CMD response
    static constexpr uint32_t STAR_RXFIFOE = 0x80000; // Receive FIFO empty
    static constexpr uint32_t STAR_TXFIFOE = 0x40000; // Transmit FIFO empty
    static constexpr uint32_t STAR_RXFIFOF = 0x20000; // Receive FIFO full
    static constexpr uint32_t STAR_TXFIFOF = 0x10000; // Transmit FIFO full
    static constexpr uint32_t STAR_RXFIFOHF = 0x8000; // Receive FIFO half full
    static constexpr uint32_t STAR_TXFIFOHE = 0x4000; // Transmit FIFO half empty
    static constexpr uint32_t STAR_CPSMACT = 0x2000; // Command path state machine active, i.e. not in Idle state
    static constexpr uint32_t STAR_DPSMACT = 0x1000; // Data path state machine active, i.e. not in Idle state
    static constexpr uint32_t STAR_DABORT = 0x800; // Data transfer aborted by CMD12
    static constexpr uint32_t STAR_DBCKEND = 0x400; // Data block sent/received
    static constexpr uint32_t STAR_DHOLD = 0x200; // Data transfer Hold
    static constexpr uint32_t STAR_DATAEND = 0x100; // Data transfer ended correctly
    static constexpr uint32_t STAR_CMDSENT = 0x80; // Command sent (no response required)
    static constexpr uint32_t STAR_CMDREND = 0x40; // Command response received (CRC check passed, or no CRC)
    static constexpr uint32_t STAR_RXOVERR = 0x20; // Received FIFO overrun error (masked by hardware when IDMA is enabled)
    static constexpr uint32_t STAR_TXUNDERR = 0x10; // Transmit FIFO underrun error (masked by hardware when IDMA is enabled)
    static constexpr uint32_t STAR_DTIMEOUT = 0x8; // Data timeout
    static constexpr uint32_t STAR_CTIMEOUT = 0x4; // Command response timeout
    static constexpr uint32_t STAR_DCRCFAIL = 0x2; // Data block sent/received (CRC check failed)
    static constexpr uint32_t STAR_CCRCFAIL = 0x1; // Command response received (CRC check failed)

    static constexpr uint32_t ICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ICR_IDMABTCC = 0x10000000; // IDMA buffer transfer complete clear bit
    static constexpr uint32_t ICR_IDMATEC = 0x8000000; // IDMA transfer error clear bit
    static constexpr uint32_t ICR_CKSTOPC = 0x4000000; // CKSTOP flag clear bit
    static constexpr uint32_t ICR_VSWENDC = 0x2000000; // VSWEND flag clear bit
    static constexpr uint32_t ICR_ACKTIMEOUTC = 0x1000000; // ACKTIMEOUT flag clear bit
    static constexpr uint32_t ICR_ACKFAILC = 0x800000; // ACKFAIL flag clear bit
    static constexpr uint32_t ICR_SDIOITC = 0x400000; // SDIOIT flag clear bit
    static constexpr uint32_t ICR_BUSYD0ENDC = 0x200000; // BUSYD0END flag clear bit
    static constexpr uint32_t ICR_DABORTC = 0x800; // DABORT flag clear bit
    static constexpr uint32_t ICR_DBCKENDC = 0x400; // DBCKEND flag clear bit
    static constexpr uint32_t ICR_DHOLDC = 0x200; // DHOLD flag clear bit
    static constexpr uint32_t ICR_DATAENDC = 0x100; // DATAEND flag clear bit
    static constexpr uint32_t ICR_CMDSENTC = 0x80; // CMDSENT flag clear bit
    static constexpr uint32_t ICR_CMDRENDC = 0x40; // CMDREND flag clear bit
    static constexpr uint32_t ICR_RXOVERRC = 0x20; // RXOVERR flag clear bit
    static constexpr uint32_t ICR_TXUNDERRC = 0x10; // TXUNDERR flag clear bit
    static constexpr uint32_t ICR_DTIMEOUTC = 0x8; // DTIMEOUT flag clear bit
    static constexpr uint32_t ICR_CTIMEOUTC = 0x4; // CTIMEOUT flag clear bit
    static constexpr uint32_t ICR_DCRCFAILC = 0x2; // DCRCFAIL flag clear bit
    static constexpr uint32_t ICR_CCRCFAILC = 0x1; // CCRCFAIL flag clear bit

    static constexpr uint32_t MASKR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MASKR_IDMABTCIE = 0x10000000; // IDMA buffer transfer complete interrupt enable
    static constexpr uint32_t MASKR_CKSTOPIE = 0x4000000; // Voltage Switch clock stopped interrupt enable
    static constexpr uint32_t MASKR_VSWENDIE = 0x2000000; // Voltage switch critical timing section completion interrupt enable
    static constexpr uint32_t MASKR_ACKTIMEOUTIE = 0x1000000; // Acknowledgment timeout interrupt enable
    static constexpr uint32_t MASKR_ACKFAILIE = 0x800000; // Acknowledgment Fail interrupt enable
    static constexpr uint32_t MASKR_SDIOITIE = 0x400000; // SDIO mode interrupt received interrupt enable
    static constexpr uint32_t MASKR_BUSYD0ENDIE = 0x200000; // BUSYD0END interrupt enable
    static constexpr uint32_t MASKR_TXFIFOEIE = 0x40000; // Tx FIFO empty interrupt enable
    static constexpr uint32_t MASKR_RXFIFOFIE = 0x20000; // Rx FIFO full interrupt enable
    static constexpr uint32_t MASKR_RXFIFOHFIE = 0x8000; // Rx FIFO half full interrupt enable
    static constexpr uint32_t MASKR_TXFIFOHEIE = 0x4000; // Tx FIFO half empty interrupt enable
    static constexpr uint32_t MASKR_DABORTIE = 0x800; // Data transfer aborted interrupt enable
    static constexpr uint32_t MASKR_DBCKENDIE = 0x400; // Data block end interrupt enable
    static constexpr uint32_t MASKR_DHOLDIE = 0x200; // Data hold interrupt enable
    static constexpr uint32_t MASKR_DATAENDIE = 0x100; // Data end interrupt enable
    static constexpr uint32_t MASKR_CMDSENTIE = 0x80; // Command sent interrupt enable
    static constexpr uint32_t MASKR_CMDRENDIE = 0x40; // Command response received interrupt enable
    static constexpr uint32_t MASKR_RXOVERRIE = 0x20; // Rx FIFO overrun error interrupt enable
    static constexpr uint32_t MASKR_TXUNDERRIE = 0x10; // Tx FIFO underrun error interrupt enable
    static constexpr uint32_t MASKR_DTIMEOUTIE = 0x8; // Data timeout interrupt enable
    static constexpr uint32_t MASKR_CTIMEOUTIE = 0x4; // Command timeout interrupt enable
    static constexpr uint32_t MASKR_DCRCFAILIE = 0x2; // Data CRC fail interrupt enable
    static constexpr uint32_t MASKR_CCRCFAILIE = 0x1; // Command CRC fail interrupt enable

    static constexpr uint32_t ACKTIMER_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1ffffff> ACKTIMER_ACKTIME; // Boot acknowledgment timeout period


    static constexpr uint32_t SDMMC_IDMACTRLR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SDMMC_IDMACTRLR_IDMAEN = 0x1; // IDMA enable This bit can only be written by firmware when DPSM is inactive (DPSMACT = 0).
    static constexpr uint32_t SDMMC_IDMACTRLR_IDMABMODE = 0x2; // Buffer mode selection. This bit can only be written by firmware when DPSM is inactive (DPSMACT = 0).

    static constexpr uint32_t SDMMC_IDMABSIZER_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<5, 0xfff> SDMMC_IDMABSIZER_IDMABNDT; // Number of bytes per buffer

    static constexpr uint32_t SDMMC_IDMABASER_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SDMMC_IDMABASER_IDMABASE; // Buffer memory base address bits [31:2], shall be word aligned (bit [1:0] are always 0 and read only)


    static constexpr uint32_t SDMMC_IDMALAR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SDMMC_IDMALAR_ULA = 0x80000000; // Update SDMMC_IDMALAR from linked list when in linked list mode (SDMMC_IDMACTRLR.IDMABMODE select linked list mode)
    static constexpr uint32_t SDMMC_IDMALAR_ULS = 0x40000000; // Update SDMMC_IDMABSIZE from the next linked list when in linked list mode (SDMMC_IDMACTRLR.IDMABMODE select linked list mode and ULA = 1)
    static constexpr uint32_t SDMMC_IDMALAR_ABR = 0x20000000; // Acknowledge linked list buffer ready
    typedef bit_field_t<2, 0x3fff> SDMMC_IDMALAR_IDMALA; // Acknowledge linked list buffer ready

    static constexpr uint32_t SDMMC_IDMABAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<2, 0x3fffffff> SDMMC_IDMABAR_IDMABA; // Word aligned Linked list memory base address


    static constexpr uint32_t FIFOR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> FIFOR0_FIFODATA; // Receive and transmit FIFO data

    static constexpr uint32_t FIFOR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> FIFOR1_FIFODATA; // Receive and transmit FIFO data

    static constexpr uint32_t FIFOR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> FIFOR2_FIFODATA; // Receive and transmit FIFO data

    static constexpr uint32_t FIFOR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> FIFOR3_FIFODATA; // Receive and transmit FIFO data

    static constexpr uint32_t FIFOR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> FIFOR4_FIFODATA; // Receive and transmit FIFO data

    static constexpr uint32_t FIFOR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> FIFOR5_FIFODATA; // Receive and transmit FIFO data

    static constexpr uint32_t FIFOR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> FIFOR6_FIFODATA; // Receive and transmit FIFO data

    static constexpr uint32_t FIFOR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> FIFOR7_FIFODATA; // Receive and transmit FIFO data

    static constexpr uint32_t FIFOR8_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> FIFOR8_FIFODATA; // Receive and transmit FIFO data

    static constexpr uint32_t FIFOR9_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> FIFOR9_FIFODATA; // Receive and transmit FIFO data

    static constexpr uint32_t FIFOR10_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> FIFOR10_FIFODATA; // Receive and transmit FIFO data

    static constexpr uint32_t FIFOR11_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> FIFOR11_FIFODATA; // Receive and transmit FIFO data

    static constexpr uint32_t FIFOR12_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> FIFOR12_FIFODATA; // Receive and transmit FIFO data

    static constexpr uint32_t FIFOR13_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> FIFOR13_FIFODATA; // Receive and transmit FIFO data

    static constexpr uint32_t FIFOR14_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> FIFOR14_FIFODATA; // Receive and transmit FIFO data

    static constexpr uint32_t FIFOR15_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> FIFOR15_FIFODATA; // Receive and transmit FIFO data
};

template<>
struct peripheral_t<STM32U5xx, SDMMC1>
{
    static constexpr periph_t P = SDMMC1;
    using T = stm32u5xx_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, SDMMC2>
{
    static constexpr periph_t P = SDMMC2;
    using T = stm32u5xx_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, SEC_SDMMC1>
{
    static constexpr periph_t P = SEC_SDMMC1;
    using T = stm32u5xx_sdmmc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, SEC_SDMMC2>
{
    static constexpr periph_t P = SEC_SDMMC2;
    using T = stm32u5xx_sdmmc1_t;
    static T& V;
};

using sdmmc1_t = peripheral_t<svd, SDMMC1>;
using sdmmc2_t = peripheral_t<svd, SDMMC2>;
using sec_sdmmc1_t = peripheral_t<svd, SEC_SDMMC1>;
using sec_sdmmc2_t = peripheral_t<svd, SEC_SDMMC2>;

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
};

template<> struct sdmmc_traits<2>
{
    using sdmmc = sdmmc2_t;
    static constexpr signal_t CK = SDMMC2_CK;
    static constexpr signal_t CMD = SDMMC2_CMD;
    static constexpr signal_t D0 = SDMMC2_D0;
    static constexpr signal_t D1 = SDMMC2_D1;
    static constexpr signal_t D2 = SDMMC2_D2;
    static constexpr signal_t D3 = SDMMC2_D3;
    static constexpr signal_t D4 = SDMMC2_D4;
    static constexpr signal_t D5 = SDMMC2_D5;
    static constexpr signal_t D6 = SDMMC2_D6;
    static constexpr signal_t D7 = SDMMC2_D7;
};
