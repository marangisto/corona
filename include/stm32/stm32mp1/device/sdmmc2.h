#pragma once

////
//
//      STM32MP1 SDMMC2 peripherals
//
////

////
//
//      SDMMC1
//
////

struct stm32mp15xxx_sdmmc1_t
{
    volatile uint32_t SDMMC_POWER;      // [read-write] SDMMC power control register
    volatile uint32_t SDMMC_CLKCR;      // [read-write] The SDMMC_CLKCR register controls the SDMMC_CK output clock, the sdmmc_rx_ck receive clock, and the bus width.
    volatile uint32_t SDMMC_ARGR;       // [read-write] The SDMMC_ARGR register contains a 32-bit command argument, which is sent to a card as part of a command message.
    volatile uint32_t SDMMC_CMDR;       // [read-write] The SDMMC_CMDR register contains the command index and command type bits. The command index is sent to a card as part of a command message. The command type bits control the command path state machine (CPSM).
    volatile uint32_t SDMMC_RESPCMDR;   // [read-only] The SDMMC_RESPCMDR register contains the command index field of the last command response received. If the command response transmission does not contain the command index field (long or OCR response), the RESPCMD field is unknown, although it must contain 111111b (the value of the reserved field from the response).
    volatile uint32_t SDMMC_RESP1R;     // [read-only] The SDMMC_RESP1/2/3/4R registers contain the status of a card, which is part of the received response.
    volatile uint32_t SDMMC_RESP2R;     // [read-only] The SDMMC_RESP1/2/3/4R registers contain the status of a card, which is part of the received response.
    volatile uint32_t SDMMC_RESP3R;     // [read-only] The SDMMC_RESP1/2/3/4R registers contain the status of a card, which is part of the received response.
    volatile uint32_t SDMMC_RESP4R;     // [read-only] The SDMMC_RESP1/2/3/4R registers contain the status of a card, which is part of the received response.
    volatile uint32_t SDMMC_DTIMER;     // [read-write] The SDMMC_DTIMER register contains the data timeout period, in card bus clock periods. A counter loads the value from the SDMMC_DTIMER register, and starts decrementing when the data path state machine (DPSM) enters the Wait_R or Busy state. If the timer reaches 0 while the DPSM is in either of these states, the timeout status flag is set.
    volatile uint32_t SDMMC_DLENR;      // [read-write] The SDMMC_DLENR register contains the number of data bytes to be transferred. The value is loaded into the data counter when data transfer starts.
    volatile uint32_t SDMMC_DCTRL;      // [read-write] The SDMMC_DCTRL register control the data path state machine (DPSM).
    volatile uint32_t SDMMC_DCNTR;      // [read-only] The SDMMC_DCNTR register loads the value from the data length register (see SDMMC_DLENR) when the DPSM moves from the Idle state to the Wait_R or Wait_S state. As data is transferred, the counter decrements the value until it reaches 0. The DPSM then moves to the Idle state and when there has been no error, the data status end flag (DATAEND) is set.
    volatile uint32_t SDMMC_STAR;       // [read-only] The SDMMC_STAR register is a read-only register. It contains two types of flag: Static flags (bits [28, 21, 11:0]): these bits remain asserted until they are cleared by writing to the SDMMC interrupt Clear register (see SDMMC_ICR) Dynamic flags (bits [20:12]): these bits change state depending on the state of the underlying logic (for example, FIFO full and empty flags are asserted and de-asserted as data while written to the FIFO)
    volatile uint32_t SDMMC_ICR;        // [read-write] The SDMMC_ICR register is a write-only register. Writing a bit with 1 clears the corresponding bit in the SDMMC_STAR status register.
    volatile uint32_t SDMMC_MASKR;      // [read-write] The interrupt mask register determines which status flags generate an interrupt request by setting the corresponding bit to 1.
    volatile uint32_t SDMMC_ACKTIMER;   // [read-write] The SDMMC_ACKTIMER register contains the acknowledgment timeout period, in SDMMC_CK bus clock periods. A counter loads the value from the SDMMC_ACKTIMER register, and starts decrementing when the data path state machine (DPSM) enters the Wait_Ack state. If the timer reaches 0 while the DPSM is in this states, the acknowledgment timeout status flag is set.
    reserved_t<0x3> _0x50;
    volatile uint32_t SDMMC_IDMACTRLR;  // [read-write] The receive and transmit FIFOs can be read or written as 32-bit wide registers. The FIFOs contain 32 entries on 32 sequential addresses. This allows the CPU to use its load and store multiple operands to read from/write to the FIFO.
    volatile uint32_t SDMMC_IDMABSIZER; // [read-write] The SDMMC_IDMABSIZER register contains the buffer size when in linked list configuration.
    volatile uint32_t SDMMC_IDMABASER;  // [read-write] The SDMMC_IDMABASER register contains the memory buffer base address in single buffer configuration and linked list configuration.
    reserved_t<0x2> _0x64;
    volatile uint32_t SDMMC_IDMALAR;    // [read-write] SDMMC IDMA linked list address register
    volatile uint32_t SDMMC_IDMABAR;    // [read-write] SDMMC IDMA linked list memory base register
    reserved_t<0x5> _0x80;
    volatile uint32_t SDMMC_FIFOR0;     // [read-write] The receive and transmit FIFOs can be only read or written as word (32-bit) wide registers. The FIFOs contain 16 entries on sequential addresses. This allows the CPU to use its load and store multiple operands to read from/write to the FIFO. The FIFO register interface takes care of correct data alignment inside the FIFO, the FIFO register address used by the CPU does matter. When accessing SDMMC_FIFOR with half word or byte access an AHB bus fault is generated.
    volatile uint32_t SDMMC_FIFOR1;     // [read-write] The receive and transmit FIFOs can be only read or written as word (32-bit) wide registers. The FIFOs contain 16 entries on sequential addresses. This allows the CPU to use its load and store multiple operands to read from/write to the FIFO. The FIFO register interface takes care of correct data alignment inside the FIFO, the FIFO register address used by the CPU does matter. When accessing SDMMC_FIFOR with half word or byte access an AHB bus fault is generated.
    volatile uint32_t SDMMC_FIFOR2;     // [read-write] The receive and transmit FIFOs can be only read or written as word (32-bit) wide registers. The FIFOs contain 16 entries on sequential addresses. This allows the CPU to use its load and store multiple operands to read from/write to the FIFO. The FIFO register interface takes care of correct data alignment inside the FIFO, the FIFO register address used by the CPU does matter. When accessing SDMMC_FIFOR with half word or byte access an AHB bus fault is generated.
    volatile uint32_t SDMMC_FIFOR3;     // [read-write] The receive and transmit FIFOs can be only read or written as word (32-bit) wide registers. The FIFOs contain 16 entries on sequential addresses. This allows the CPU to use its load and store multiple operands to read from/write to the FIFO. The FIFO register interface takes care of correct data alignment inside the FIFO, the FIFO register address used by the CPU does matter. When accessing SDMMC_FIFOR with half word or byte access an AHB bus fault is generated.
    volatile uint32_t SDMMC_FIFOR4;     // [read-write] The receive and transmit FIFOs can be only read or written as word (32-bit) wide registers. The FIFOs contain 16 entries on sequential addresses. This allows the CPU to use its load and store multiple operands to read from/write to the FIFO. The FIFO register interface takes care of correct data alignment inside the FIFO, the FIFO register address used by the CPU does matter. When accessing SDMMC_FIFOR with half word or byte access an AHB bus fault is generated.
    volatile uint32_t SDMMC_FIFOR5;     // [read-write] The receive and transmit FIFOs can be only read or written as word (32-bit) wide registers. The FIFOs contain 16 entries on sequential addresses. This allows the CPU to use its load and store multiple operands to read from/write to the FIFO. The FIFO register interface takes care of correct data alignment inside the FIFO, the FIFO register address used by the CPU does matter. When accessing SDMMC_FIFOR with half word or byte access an AHB bus fault is generated.
    volatile uint32_t SDMMC_FIFOR6;     // [read-write] The receive and transmit FIFOs can be only read or written as word (32-bit) wide registers. The FIFOs contain 16 entries on sequential addresses. This allows the CPU to use its load and store multiple operands to read from/write to the FIFO. The FIFO register interface takes care of correct data alignment inside the FIFO, the FIFO register address used by the CPU does matter. When accessing SDMMC_FIFOR with half word or byte access an AHB bus fault is generated.
    volatile uint32_t SDMMC_FIFOR7;     // [read-write] The receive and transmit FIFOs can be only read or written as word (32-bit) wide registers. The FIFOs contain 16 entries on sequential addresses. This allows the CPU to use its load and store multiple operands to read from/write to the FIFO. The FIFO register interface takes care of correct data alignment inside the FIFO, the FIFO register address used by the CPU does matter. When accessing SDMMC_FIFOR with half word or byte access an AHB bus fault is generated.
    volatile uint32_t SDMMC_FIFOR8;     // [read-write] The receive and transmit FIFOs can be only read or written as word (32-bit) wide registers. The FIFOs contain 16 entries on sequential addresses. This allows the CPU to use its load and store multiple operands to read from/write to the FIFO. The FIFO register interface takes care of correct data alignment inside the FIFO, the FIFO register address used by the CPU does matter. When accessing SDMMC_FIFOR with half word or byte access an AHB bus fault is generated.
    volatile uint32_t SDMMC_FIFOR9;     // [read-write] The receive and transmit FIFOs can be only read or written as word (32-bit) wide registers. The FIFOs contain 16 entries on sequential addresses. This allows the CPU to use its load and store multiple operands to read from/write to the FIFO. The FIFO register interface takes care of correct data alignment inside the FIFO, the FIFO register address used by the CPU does matter. When accessing SDMMC_FIFOR with half word or byte access an AHB bus fault is generated.
    volatile uint32_t SDMMC_FIFOR10;    // [read-write] The receive and transmit FIFOs can be only read or written as word (32-bit) wide registers. The FIFOs contain 16 entries on sequential addresses. This allows the CPU to use its load and store multiple operands to read from/write to the FIFO. The FIFO register interface takes care of correct data alignment inside the FIFO, the FIFO register address used by the CPU does matter. When accessing SDMMC_FIFOR with half word or byte access an AHB bus fault is generated.
    volatile uint32_t SDMMC_FIFOR11;    // [read-write] The receive and transmit FIFOs can be only read or written as word (32-bit) wide registers. The FIFOs contain 16 entries on sequential addresses. This allows the CPU to use its load and store multiple operands to read from/write to the FIFO. The FIFO register interface takes care of correct data alignment inside the FIFO, the FIFO register address used by the CPU does matter. When accessing SDMMC_FIFOR with half word or byte access an AHB bus fault is generated.
    volatile uint32_t SDMMC_FIFOR12;    // [read-write] The receive and transmit FIFOs can be only read or written as word (32-bit) wide registers. The FIFOs contain 16 entries on sequential addresses. This allows the CPU to use its load and store multiple operands to read from/write to the FIFO. The FIFO register interface takes care of correct data alignment inside the FIFO, the FIFO register address used by the CPU does matter. When accessing SDMMC_FIFOR with half word or byte access an AHB bus fault is generated.
    volatile uint32_t SDMMC_FIFOR13;    // [read-write] The receive and transmit FIFOs can be only read or written as word (32-bit) wide registers. The FIFOs contain 16 entries on sequential addresses. This allows the CPU to use its load and store multiple operands to read from/write to the FIFO. The FIFO register interface takes care of correct data alignment inside the FIFO, the FIFO register address used by the CPU does matter. When accessing SDMMC_FIFOR with half word or byte access an AHB bus fault is generated.
    volatile uint32_t SDMMC_FIFOR14;    // [read-write] The receive and transmit FIFOs can be only read or written as word (32-bit) wide registers. The FIFOs contain 16 entries on sequential addresses. This allows the CPU to use its load and store multiple operands to read from/write to the FIFO. The FIFO register interface takes care of correct data alignment inside the FIFO, the FIFO register address used by the CPU does matter. When accessing SDMMC_FIFOR with half word or byte access an AHB bus fault is generated.
    volatile uint32_t SDMMC_FIFOR15;    // [read-write] The receive and transmit FIFOs can be only read or written as word (32-bit) wide registers. The FIFOs contain 16 entries on sequential addresses. This allows the CPU to use its load and store multiple operands to read from/write to the FIFO. The FIFO register interface takes care of correct data alignment inside the FIFO, the FIFO register address used by the CPU does matter. When accessing SDMMC_FIFOR with half word or byte access an AHB bus fault is generated.
    reserved_t<0xcd> _0x3f4;
    volatile uint32_t SDMMC_VERR;       // [read-only] SDMMC version register
    volatile uint32_t SDMMC_IPIDR;      // [read-only] SDMMC identification register
    volatile uint32_t SDMMC_SIDR;       // [read-only] SDMMC size ID register

    static constexpr uint32_t SDMMC_POWER_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SDMMC_POWER_PWRCTRL =        // PWRCTRL
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t SDMMC_POWER_VSWITCH = 0x4;   // VSWITCH
    static constexpr uint32_t SDMMC_POWER_VSWITCHEN = 0x8; // VSWITCHEN
    static constexpr uint32_t SDMMC_POWER_DIRPOL = 0x10;   // DIRPOL

    static constexpr uint32_t SDMMC_CLKCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SDMMC_CLKCR_CLKDIV =            // CLKDIV
        bit_field_t<0, 0x3ff>::value<X>();
    static constexpr uint32_t SDMMC_CLKCR_PWRSAV = 0x1000;    // PWRSAV
    template<uint32_t X>
    static constexpr uint32_t SDMMC_CLKCR_WIDBUS =            // WIDBUS
        bit_field_t<14, 0x3>::value<X>();
    static constexpr uint32_t SDMMC_CLKCR_NEGEDGE = 0x10000;  // NEGEDGE
    static constexpr uint32_t SDMMC_CLKCR_HWFC_EN = 0x20000;  // HWFC_EN
    static constexpr uint32_t SDMMC_CLKCR_DDR = 0x40000;      // DDR
    static constexpr uint32_t SDMMC_CLKCR_BUSSPEED = 0x80000; // BUSSPEED
    template<uint32_t X>
    static constexpr uint32_t SDMMC_CLKCR_SELCLKRX =          // SELCLKRX
        bit_field_t<20, 0x3>::value<X>();

    static constexpr uint32_t SDMMC_ARGR_RESET_VALUE = 0x0;

    static constexpr uint32_t SDMMC_CMDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SDMMC_CMDR_CMDINDEX =            // CMDINDEX
        bit_field_t<0, 0x3f>::value<X>();
    static constexpr uint32_t SDMMC_CMDR_CMDTRANS = 0x40;      // CMDTRANS
    static constexpr uint32_t SDMMC_CMDR_CMDSTOP = 0x80;       // CMDSTOP
    template<uint32_t X>
    static constexpr uint32_t SDMMC_CMDR_WAITRESP =            // WAITRESP
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t SDMMC_CMDR_WAITINT = 0x400;      // WAITINT
    static constexpr uint32_t SDMMC_CMDR_WAITPEND = 0x800;     // WAITPEND
    static constexpr uint32_t SDMMC_CMDR_CPSMEN = 0x1000;      // CPSMEN
    static constexpr uint32_t SDMMC_CMDR_DTHOLD = 0x2000;      // DTHOLD
    static constexpr uint32_t SDMMC_CMDR_BOOTMODE = 0x4000;    // BOOTMODE
    static constexpr uint32_t SDMMC_CMDR_BOOTEN = 0x8000;      // BOOTEN
    static constexpr uint32_t SDMMC_CMDR_CMDSUSPEND = 0x10000; // CMDSUSPEND

    static constexpr uint32_t SDMMC_RESPCMDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SDMMC_RESPCMDR_RESPCMD =   // RESPCMD
        bit_field_t<0, 0x3f>::value<X>();

    static constexpr uint32_t SDMMC_RESP1R_RESET_VALUE = 0x0;

    static constexpr uint32_t SDMMC_RESP2R_RESET_VALUE = 0x0;

    static constexpr uint32_t SDMMC_RESP3R_RESET_VALUE = 0x0;

    static constexpr uint32_t SDMMC_RESP4R_RESET_VALUE = 0x0;

    static constexpr uint32_t SDMMC_DTIMER_RESET_VALUE = 0x0;

    static constexpr uint32_t SDMMC_DLENR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SDMMC_DLENR_DATALENGTH =   // DATALENGTH
        bit_field_t<0, 0x1ffffff>::value<X>();

    static constexpr uint32_t SDMMC_DCTRL_RESET_VALUE = 0x0;
    static constexpr uint32_t SDMMC_DCTRL_DTEN = 0x1;         // DTEN
    static constexpr uint32_t SDMMC_DCTRL_DTDIR = 0x2;        // DTDIR
    template<uint32_t X>
    static constexpr uint32_t SDMMC_DCTRL_DTMODE =            // DTMODE
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDMMC_DCTRL_DBLOCKSIZE =        // DBLOCKSIZE
        bit_field_t<4, 0xf>::value<X>();
    static constexpr uint32_t SDMMC_DCTRL_RWSTART = 0x100;    // RWSTART
    static constexpr uint32_t SDMMC_DCTRL_RWSTOP = 0x200;     // RWSTOP
    static constexpr uint32_t SDMMC_DCTRL_RWMOD = 0x400;      // RWMOD
    static constexpr uint32_t SDMMC_DCTRL_SDIOEN = 0x800;     // SDIOEN
    static constexpr uint32_t SDMMC_DCTRL_BOOTACKEN = 0x1000; // BOOTACKEN
    static constexpr uint32_t SDMMC_DCTRL_FIFORST = 0x2000;   // FIFORST

    static constexpr uint32_t SDMMC_DCNTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SDMMC_DCNTR_DATACOUNT =   // DATACOUNT
        bit_field_t<0, 0x1ffffff>::value<X>();

    static constexpr uint32_t SDMMC_STAR_RESET_VALUE = 0x0;
    static constexpr uint32_t SDMMC_STAR_CCRCFAIL = 0x1;         // CCRCFAIL
    static constexpr uint32_t SDMMC_STAR_DCRCFAIL = 0x2;         // DCRCFAIL
    static constexpr uint32_t SDMMC_STAR_CTIMEOUT = 0x4;         // CTIMEOUT
    static constexpr uint32_t SDMMC_STAR_DTIMEOUT = 0x8;         // DTIMEOUT
    static constexpr uint32_t SDMMC_STAR_TXUNDERR = 0x10;        // TXUNDERR
    static constexpr uint32_t SDMMC_STAR_RXOVERR = 0x20;         // RXOVERR
    static constexpr uint32_t SDMMC_STAR_CMDREND = 0x40;         // CMDREND
    static constexpr uint32_t SDMMC_STAR_CMDSENT = 0x80;         // CMDSENT
    static constexpr uint32_t SDMMC_STAR_DATAEND = 0x100;        // DATAEND
    static constexpr uint32_t SDMMC_STAR_DHOLD = 0x200;          // DHOLD
    static constexpr uint32_t SDMMC_STAR_DBCKEND = 0x400;        // DBCKEND
    static constexpr uint32_t SDMMC_STAR_DABORT = 0x800;         // DABORT
    static constexpr uint32_t SDMMC_STAR_DPSMACT = 0x1000;       // DPSMACT
    static constexpr uint32_t SDMMC_STAR_CPSMACT = 0x2000;       // CPSMACT
    static constexpr uint32_t SDMMC_STAR_TXFIFOHE = 0x4000;      // TXFIFOHE
    static constexpr uint32_t SDMMC_STAR_RXFIFOHF = 0x8000;      // RXFIFOHF
    static constexpr uint32_t SDMMC_STAR_TXFIFOF = 0x10000;      // TXFIFOF
    static constexpr uint32_t SDMMC_STAR_RXFIFOF = 0x20000;      // RXFIFOF
    static constexpr uint32_t SDMMC_STAR_TXFIFOE = 0x40000;      // TXFIFOE
    static constexpr uint32_t SDMMC_STAR_RXFIFOE = 0x80000;      // RXFIFOE
    static constexpr uint32_t SDMMC_STAR_BUSYD0 = 0x100000;      // BUSYD0
    static constexpr uint32_t SDMMC_STAR_BUSYD0END = 0x200000;   // BUSYD0END
    static constexpr uint32_t SDMMC_STAR_SDIOIT = 0x400000;      // SDIOIT
    static constexpr uint32_t SDMMC_STAR_ACKFAIL = 0x800000;     // ACKFAIL
    static constexpr uint32_t SDMMC_STAR_ACKTIMEOUT = 0x1000000; // ACKTIMEOUT
    static constexpr uint32_t SDMMC_STAR_VSWEND = 0x2000000;     // VSWEND
    static constexpr uint32_t SDMMC_STAR_CKSTOP = 0x4000000;     // CKSTOP
    static constexpr uint32_t SDMMC_STAR_IDMATE = 0x8000000;     // IDMATE
    static constexpr uint32_t SDMMC_STAR_IDMABTC = 0x10000000;   // IDMABTC

    static constexpr uint32_t SDMMC_ICR_RESET_VALUE = 0x0;
    static constexpr uint32_t SDMMC_ICR_CCRCFAILC = 0x1;         // CCRCFAILC
    static constexpr uint32_t SDMMC_ICR_DCRCFAILC = 0x2;         // DCRCFAILC
    static constexpr uint32_t SDMMC_ICR_CTIMEOUTC = 0x4;         // CTIMEOUTC
    static constexpr uint32_t SDMMC_ICR_DTIMEOUTC = 0x8;         // DTIMEOUTC
    static constexpr uint32_t SDMMC_ICR_TXUNDERRC = 0x10;        // TXUNDERRC
    static constexpr uint32_t SDMMC_ICR_RXOVERRC = 0x20;         // RXOVERRC
    static constexpr uint32_t SDMMC_ICR_CMDRENDC = 0x40;         // CMDRENDC
    static constexpr uint32_t SDMMC_ICR_CMDSENTC = 0x80;         // CMDSENTC
    static constexpr uint32_t SDMMC_ICR_DATAENDC = 0x100;        // DATAENDC
    static constexpr uint32_t SDMMC_ICR_DHOLDC = 0x200;          // DHOLDC
    static constexpr uint32_t SDMMC_ICR_DBCKENDC = 0x400;        // DBCKENDC
    static constexpr uint32_t SDMMC_ICR_DABORTC = 0x800;         // DABORTC
    static constexpr uint32_t SDMMC_ICR_BUSYD0ENDC = 0x200000;   // BUSYD0ENDC
    static constexpr uint32_t SDMMC_ICR_SDIOITC = 0x400000;      // SDIOITC
    static constexpr uint32_t SDMMC_ICR_ACKFAILC = 0x800000;     // ACKFAILC
    static constexpr uint32_t SDMMC_ICR_ACKTIMEOUTC = 0x1000000; // ACKTIMEOUTC
    static constexpr uint32_t SDMMC_ICR_VSWENDC = 0x2000000;     // VSWENDC
    static constexpr uint32_t SDMMC_ICR_CKSTOPC = 0x4000000;     // CKSTOPC
    static constexpr uint32_t SDMMC_ICR_IDMATEC = 0x8000000;     // IDMATEC
    static constexpr uint32_t SDMMC_ICR_IDMABTCC = 0x10000000;   // IDMABTCC

    static constexpr uint32_t SDMMC_MASKR_RESET_VALUE = 0x0;
    static constexpr uint32_t SDMMC_MASKR_CCRCFAILIE = 0x1;         // CCRCFAILIE
    static constexpr uint32_t SDMMC_MASKR_DCRCFAILIE = 0x2;         // DCRCFAILIE
    static constexpr uint32_t SDMMC_MASKR_CTIMEOUTIE = 0x4;         // CTIMEOUTIE
    static constexpr uint32_t SDMMC_MASKR_DTIMEOUTIE = 0x8;         // DTIMEOUTIE
    static constexpr uint32_t SDMMC_MASKR_TXUNDERRIE = 0x10;        // TXUNDERRIE
    static constexpr uint32_t SDMMC_MASKR_RXOVERRIE = 0x20;         // RXOVERRIE
    static constexpr uint32_t SDMMC_MASKR_CMDRENDIE = 0x40;         // CMDRENDIE
    static constexpr uint32_t SDMMC_MASKR_CMDSENTIE = 0x80;         // CMDSENTIE
    static constexpr uint32_t SDMMC_MASKR_DATAENDIE = 0x100;        // DATAENDIE
    static constexpr uint32_t SDMMC_MASKR_DHOLDIE = 0x200;          // DHOLDIE
    static constexpr uint32_t SDMMC_MASKR_DBCKENDIE = 0x400;        // DBCKENDIE
    static constexpr uint32_t SDMMC_MASKR_DABORTIE = 0x800;         // DABORTIE
    static constexpr uint32_t SDMMC_MASKR_TXFIFOHEIE = 0x4000;      // TXFIFOHEIE
    static constexpr uint32_t SDMMC_MASKR_RXFIFOHFIE = 0x8000;      // RXFIFOHFIE
    static constexpr uint32_t SDMMC_MASKR_RXFIFOFIE = 0x20000;      // RXFIFOFIE
    static constexpr uint32_t SDMMC_MASKR_TXFIFOEIE = 0x40000;      // TXFIFOEIE
    static constexpr uint32_t SDMMC_MASKR_BUSYD0ENDIE = 0x200000;   // BUSYD0ENDIE
    static constexpr uint32_t SDMMC_MASKR_SDIOITIE = 0x400000;      // SDIOITIE
    static constexpr uint32_t SDMMC_MASKR_ACKFAILIE = 0x800000;     // ACKFAILIE
    static constexpr uint32_t SDMMC_MASKR_ACKTIMEOUTIE = 0x1000000; // ACKTIMEOUTIE
    static constexpr uint32_t SDMMC_MASKR_VSWENDIE = 0x2000000;     // VSWENDIE
    static constexpr uint32_t SDMMC_MASKR_CKSTOPIE = 0x4000000;     // CKSTOPIE
    static constexpr uint32_t SDMMC_MASKR_IDMABTCIE = 0x10000000;   // IDMABTCIE

    static constexpr uint32_t SDMMC_ACKTIMER_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SDMMC_ACKTIMER_ACKTIME =   // ACKTIME
        bit_field_t<0, 0x1ffffff>::value<X>();

    static constexpr uint32_t SDMMC_IDMACTRLR_RESET_VALUE = 0x0;
    static constexpr uint32_t SDMMC_IDMACTRLR_IDMAEN = 0x1;    // IDMAEN
    static constexpr uint32_t SDMMC_IDMACTRLR_IDMABMODE = 0x2; // IDMABMODE

    static constexpr uint32_t SDMMC_IDMABSIZER_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SDMMC_IDMABSIZER_IDMABNDT =   // IDMABNDT
        bit_field_t<5, 0xfff>::value<X>();

    static constexpr uint32_t SDMMC_IDMABASER_RESET_VALUE = 0x0;

    static constexpr uint32_t SDMMC_IDMALAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SDMMC_IDMALAR_IDMALA =          // IDMALA
        bit_field_t<2, 0x3fff>::value<X>();
    static constexpr uint32_t SDMMC_IDMALAR_ABR = 0x20000000; // ABR
    static constexpr uint32_t SDMMC_IDMALAR_ULS = 0x40000000; // ULS
    static constexpr uint32_t SDMMC_IDMALAR_ULA = 0x80000000; // ULA

    static constexpr uint32_t SDMMC_IDMABAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SDMMC_IDMABAR_IDMABA =   // IDMABA
        bit_field_t<2, 0x3fffffff>::value<X>();

    static constexpr uint32_t SDMMC_FIFOR0_RESET_VALUE = 0x0;

    static constexpr uint32_t SDMMC_FIFOR1_RESET_VALUE = 0x0;

    static constexpr uint32_t SDMMC_FIFOR2_RESET_VALUE = 0x0;

    static constexpr uint32_t SDMMC_FIFOR3_RESET_VALUE = 0x0;

    static constexpr uint32_t SDMMC_FIFOR4_RESET_VALUE = 0x0;

    static constexpr uint32_t SDMMC_FIFOR5_RESET_VALUE = 0x0;

    static constexpr uint32_t SDMMC_FIFOR6_RESET_VALUE = 0x0;

    static constexpr uint32_t SDMMC_FIFOR7_RESET_VALUE = 0x0;

    static constexpr uint32_t SDMMC_FIFOR8_RESET_VALUE = 0x0;

    static constexpr uint32_t SDMMC_FIFOR9_RESET_VALUE = 0x0;

    static constexpr uint32_t SDMMC_FIFOR10_RESET_VALUE = 0x0;

    static constexpr uint32_t SDMMC_FIFOR11_RESET_VALUE = 0x0;

    static constexpr uint32_t SDMMC_FIFOR12_RESET_VALUE = 0x0;

    static constexpr uint32_t SDMMC_FIFOR13_RESET_VALUE = 0x0;

    static constexpr uint32_t SDMMC_FIFOR14_RESET_VALUE = 0x0;

    static constexpr uint32_t SDMMC_FIFOR15_RESET_VALUE = 0x0;

    static constexpr uint32_t SDMMC_VERR_RESET_VALUE = 0x20;
    template<uint32_t X>
    static constexpr uint32_t SDMMC_VERR_MINREV =   // MINREV
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SDMMC_VERR_MAJREV =   // MAJREV
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t SDMMC_IPIDR_RESET_VALUE = 0x140022;

    static constexpr uint32_t SDMMC_SIDR_RESET_VALUE = 0xa3c5dd01;
};


template<>
struct peripheral_t<STM32MP15xxx, SDMMC1>
{
    typedef stm32mp15xxx_sdmmc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32MP15xxx, SDMMC2>
{
    typedef stm32mp15xxx_sdmmc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32MP15xxx, SDMMC3>
{
    typedef stm32mp15xxx_sdmmc1_t T;
    static T& V;
};

using sdmmc1_t = peripheral_t<mcu_svd, SDMMC1>;
using sdmmc2_t = peripheral_t<mcu_svd, SDMMC2>;
using sdmmc3_t = peripheral_t<mcu_svd, SDMMC3>;

