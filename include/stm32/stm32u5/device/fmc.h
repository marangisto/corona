#pragma once

////
//
//      STM32U5 FMC peripherals
//
///

// FMC: FMC

struct stm32u5xx_fmc_t
{
    volatile uint32_t BCR1; // SRAM/NOR-Flash chip-select control register for bank 1
    volatile uint32_t BTR1; // SRAM/NOR-Flash chip-select timing register for bank 1
    volatile uint32_t BCR2; // SRAM/NOR-Flash chip-select control register for bank 2
    volatile uint32_t BTR2; // SRAM/NOR-Flash chip-select timing register for bank 2
    volatile uint32_t BCR3; // SRAM/NOR-Flash chip-select control register for bank 3
    volatile uint32_t BTR3; // SRAM/NOR-Flash chip-select timing register for bank 3
    volatile uint32_t BCR4; // SRAM/NOR-Flash chip-select control register for bank 4
    volatile uint32_t BTR4; // SRAM/NOR-Flash chip-select timing register for bank 4
    volatile uint32_t PCSCNTR; // PSRAM chip select counter register
    reserved_t<0x17> _0x24;
    volatile uint32_t PCR; // NAND Flash control registers
    volatile uint32_t SR; // status and interrupt register
    volatile uint32_t PMEM; // Common memory space timing register
    volatile uint32_t PATT; // The FMC_PATT read/write register contains the timing information for NAND Flash memory bank. It is used for 8-bit accesses to the attribute memory space of the NAND Flash for the last address write access if the timing must differ from that of previous accesses (for Ready/Busy management, refer to Section20.8.5: NAND Flash prewait feature).
    reserved_t<0x1> _0x90;
    volatile uint32_t ECCR; // This register contain the current error correction code value computed by the ECC computation modules of the FMC NAND controller. When the CPU reads/writes the data from a NAND Flash memory page at the correct address (refer to Section20.8.6: Computation of the error correction code (ECC) in NAND Flash memory), the data read/written from/to the NAND Flash memory are processed automatically by the ECC computation module. When X bytes have been read (according to the ECCPS field in the FMC_PCR registers), the CPU must read the computed ECC value from the FMC_ECC registers. It then verifies if these computed parity data are the same as the parity value recorded in the spare area, to determine whether a page is valid, and, to correct it otherwise. The FMC_ECCR register should be cleared after being read by setting the ECCEN bit to 0. To compute a new data block, the ECCEN bit must be set to 1.
    reserved_t<0x1b> _0x98;
    volatile uint32_t BWTR1; // SRAM/NOR-Flash write timing registers 1
    reserved_t<0x1> _0x108;
    volatile uint32_t BWTR2; // SRAM/NOR-Flash write timing registers 2
    reserved_t<0x1> _0x110;
    volatile uint32_t BWTR3; // SRAM/NOR-Flash write timing registers 3
    reserved_t<0x1> _0x118;
    volatile uint32_t BWTR4; // SRAM/NOR-Flash write timing registers 4

    static constexpr uint32_t BCR1_RESET_VALUE = 0x30db; // Reset value
    static constexpr uint32_t BCR1_MBKEN = 0x1; // Memory bank enable bit
    static constexpr uint32_t BCR1_MUXEN = 0x2; // Address/data multiplexing enable bit
    typedef bit_field_t<2, 0x3> BCR1_MTYP; // Memory type
    typedef bit_field_t<4, 0x3> BCR1_MWID; // Memory data bus width
    static constexpr uint32_t BCR1_FACCEN = 0x40; // Flash access enable
    static constexpr uint32_t BCR1_BURSTEN = 0x100; // Burst enable bit
    static constexpr uint32_t BCR1_WAITPOL = 0x200; // Wait signal polarity bit
    static constexpr uint32_t BCR1_WAITCFG = 0x800; // Wait timing configuration
    static constexpr uint32_t BCR1_WREN = 0x1000; // Write enable bit
    static constexpr uint32_t BCR1_WAITEN = 0x2000; // Wait enable bit
    static constexpr uint32_t BCR1_EXTMOD = 0x4000; // Extended mode enable
    static constexpr uint32_t BCR1_ASYNCWAIT = 0x8000; // Wait signal during asynchronous transfers
    typedef bit_field_t<16, 0x7> BCR1_CPSIZE; // CRAM Page Size
    static constexpr uint32_t BCR1_CBURSTRW = 0x80000; // Write burst enable
    static constexpr uint32_t BCR1_CCLKEN = 0x100000; // Continuous clock enable
    static constexpr uint32_t BCR1_WFDIS = 0x200000; // Write FIFO disable
    typedef bit_field_t<22, 0x3> BCR1_NBLSET; // Byte lane (NBL) setup
    static constexpr uint32_t BCR1_FMCEN = 0x80000000; // FMC controller enable

    static constexpr uint32_t BTR1_RESET_VALUE = 0xfffffff; // Reset value
    typedef bit_field_t<0, 0xf> BTR1_ADDSET; // Address setup phase duration
    typedef bit_field_t<4, 0xf> BTR1_ADDHLD; // Address-hold phase duration
    typedef bit_field_t<8, 0xff> BTR1_DATAST; // Data-phase duration
    typedef bit_field_t<16, 0xf> BTR1_BUSTURN; // Bus turnaround phase duration
    typedef bit_field_t<20, 0xf> BTR1_CLKDIV; // Clock divide ratio (for FMC_CLK signal)
    typedef bit_field_t<24, 0xf> BTR1_DATLAT; // Data latency for synchronous memory
    typedef bit_field_t<28, 0x3> BTR1_ACCMOD; // Access mode
    typedef bit_field_t<30, 0x3> BTR1_DATAHLD; // Data hold phase duration

    static constexpr uint32_t BCR2_RESET_VALUE = 0x30d2; // Reset value
    static constexpr uint32_t BCR2_MBKEN = 0x1; // Memory bank enable bit
    static constexpr uint32_t BCR2_MUXEN = 0x2; // Address/data multiplexing enable bit
    typedef bit_field_t<2, 0x3> BCR2_MTYP; // Memory type
    typedef bit_field_t<4, 0x3> BCR2_MWID; // Memory data bus width
    static constexpr uint32_t BCR2_FACCEN = 0x40; // Flash access enable
    static constexpr uint32_t BCR2_BURSTEN = 0x100; // Burst enable bit
    static constexpr uint32_t BCR2_WAITPOL = 0x200; // Wait signal polarity bit
    static constexpr uint32_t BCR2_WAITCFG = 0x800; // Wait timing configuration
    static constexpr uint32_t BCR2_WREN = 0x1000; // Write enable bit
    static constexpr uint32_t BCR2_WAITEN = 0x2000; // Wait enable bit
    static constexpr uint32_t BCR2_EXTMOD = 0x4000; // Extended mode enable
    static constexpr uint32_t BCR2_ASYNCWAIT = 0x8000; // Wait signal during asynchronous transfers
    typedef bit_field_t<16, 0x7> BCR2_CPSIZE; // CRAM Page Size
    static constexpr uint32_t BCR2_CBURSTRW = 0x80000; // Write burst enable
    static constexpr uint32_t BCR2_CCLKEN = 0x100000; // Continuous clock enable
    static constexpr uint32_t BCR2_WFDIS = 0x200000; // Write FIFO disable
    typedef bit_field_t<22, 0x3> BCR2_NBLSET; // Byte lane (NBL) setup
    static constexpr uint32_t BCR2_FMCEN = 0x80000000; // FMC controller enable

    static constexpr uint32_t BTR2_RESET_VALUE = 0xfffffff; // Reset value
    typedef bit_field_t<0, 0xf> BTR2_ADDSET; // Address setup phase duration
    typedef bit_field_t<4, 0xf> BTR2_ADDHLD; // Address-hold phase duration
    typedef bit_field_t<8, 0xff> BTR2_DATAST; // Data-phase duration
    typedef bit_field_t<16, 0xf> BTR2_BUSTURN; // Bus turnaround phase duration
    typedef bit_field_t<20, 0xf> BTR2_CLKDIV; // Clock divide ratio (for FMC_CLK signal)
    typedef bit_field_t<24, 0xf> BTR2_DATLAT; // Data latency for synchronous memory
    typedef bit_field_t<28, 0x3> BTR2_ACCMOD; // Access mode
    typedef bit_field_t<30, 0x3> BTR2_DATAHLD; // Data hold phase duration

    static constexpr uint32_t BCR3_RESET_VALUE = 0x30d2; // Reset value
    static constexpr uint32_t BCR3_MBKEN = 0x1; // Memory bank enable bit
    static constexpr uint32_t BCR3_MUXEN = 0x2; // Address/data multiplexing enable bit
    typedef bit_field_t<2, 0x3> BCR3_MTYP; // Memory type
    typedef bit_field_t<4, 0x3> BCR3_MWID; // Memory data bus width
    static constexpr uint32_t BCR3_FACCEN = 0x40; // Flash access enable
    static constexpr uint32_t BCR3_BURSTEN = 0x100; // Burst enable bit
    static constexpr uint32_t BCR3_WAITPOL = 0x200; // Wait signal polarity bit
    static constexpr uint32_t BCR3_WAITCFG = 0x800; // Wait timing configuration
    static constexpr uint32_t BCR3_WREN = 0x1000; // Write enable bit
    static constexpr uint32_t BCR3_WAITEN = 0x2000; // Wait enable bit
    static constexpr uint32_t BCR3_EXTMOD = 0x4000; // Extended mode enable
    static constexpr uint32_t BCR3_ASYNCWAIT = 0x8000; // Wait signal during asynchronous transfers
    typedef bit_field_t<16, 0x7> BCR3_CPSIZE; // CRAM Page Size
    static constexpr uint32_t BCR3_CBURSTRW = 0x80000; // Write burst enable
    static constexpr uint32_t BCR3_CCLKEN = 0x100000; // Continuous clock enable
    static constexpr uint32_t BCR3_WFDIS = 0x200000; // Write FIFO disable
    typedef bit_field_t<22, 0x3> BCR3_NBLSET; // Byte lane (NBL) setup
    static constexpr uint32_t BCR3_FMCEN = 0x80000000; // FMC controller enable

    static constexpr uint32_t BTR3_RESET_VALUE = 0xfffffff; // Reset value
    typedef bit_field_t<0, 0xf> BTR3_ADDSET; // Address setup phase duration
    typedef bit_field_t<4, 0xf> BTR3_ADDHLD; // Address-hold phase duration
    typedef bit_field_t<8, 0xff> BTR3_DATAST; // Data-phase duration
    typedef bit_field_t<16, 0xf> BTR3_BUSTURN; // Bus turnaround phase duration
    typedef bit_field_t<20, 0xf> BTR3_CLKDIV; // Clock divide ratio (for FMC_CLK signal)
    typedef bit_field_t<24, 0xf> BTR3_DATLAT; // Data latency for synchronous memory
    typedef bit_field_t<28, 0x3> BTR3_ACCMOD; // Access mode
    typedef bit_field_t<30, 0x3> BTR3_DATAHLD; // Data hold phase duration

    static constexpr uint32_t BCR4_RESET_VALUE = 0x30d2; // Reset value
    static constexpr uint32_t BCR4_MBKEN = 0x1; // Memory bank enable bit
    static constexpr uint32_t BCR4_MUXEN = 0x2; // Address/data multiplexing enable bit
    typedef bit_field_t<2, 0x3> BCR4_MTYP; // Memory type
    typedef bit_field_t<4, 0x3> BCR4_MWID; // Memory data bus width
    static constexpr uint32_t BCR4_FACCEN = 0x40; // Flash access enable
    static constexpr uint32_t BCR4_BURSTEN = 0x100; // Burst enable bit
    static constexpr uint32_t BCR4_WAITPOL = 0x200; // Wait signal polarity bit
    static constexpr uint32_t BCR4_WAITCFG = 0x800; // Wait timing configuration
    static constexpr uint32_t BCR4_WREN = 0x1000; // Write enable bit
    static constexpr uint32_t BCR4_WAITEN = 0x2000; // Wait enable bit
    static constexpr uint32_t BCR4_EXTMOD = 0x4000; // Extended mode enable
    static constexpr uint32_t BCR4_ASYNCWAIT = 0x8000; // Wait signal during asynchronous transfers
    typedef bit_field_t<16, 0x7> BCR4_CPSIZE; // CRAM Page Size
    static constexpr uint32_t BCR4_CBURSTRW = 0x80000; // Write burst enable
    static constexpr uint32_t BCR4_CCLKEN = 0x100000; // Continuous clock enable
    static constexpr uint32_t BCR4_WFDIS = 0x200000; // Write FIFO disable
    typedef bit_field_t<22, 0x3> BCR4_NBLSET; // Byte lane (NBL) setup
    static constexpr uint32_t BCR4_FMCEN = 0x80000000; // FMC controller enable

    static constexpr uint32_t BTR4_RESET_VALUE = 0xfffffff; // Reset value
    typedef bit_field_t<0, 0xf> BTR4_ADDSET; // Address setup phase duration
    typedef bit_field_t<4, 0xf> BTR4_ADDHLD; // Address-hold phase duration
    typedef bit_field_t<8, 0xff> BTR4_DATAST; // Data-phase duration
    typedef bit_field_t<16, 0xf> BTR4_BUSTURN; // Bus turnaround phase duration
    typedef bit_field_t<20, 0xf> BTR4_CLKDIV; // Clock divide ratio (for FMC_CLK signal)
    typedef bit_field_t<24, 0xf> BTR4_DATLAT; // Data latency for synchronous memory
    typedef bit_field_t<28, 0x3> BTR4_ACCMOD; // Access mode
    typedef bit_field_t<30, 0x3> BTR4_DATAHLD; // Data hold phase duration

    static constexpr uint32_t PCSCNTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> PCSCNTR_CSCOUNT; // Chip select counter
    static constexpr uint32_t PCSCNTR_CNTB1EN = 0x10000; // Counter Bank 1 enable
    static constexpr uint32_t PCSCNTR_CNTB2EN = 0x20000; // Counter Bank 2 enable
    static constexpr uint32_t PCSCNTR_CNTB3EN = 0x40000; // Counter Bank 3 enable
    static constexpr uint32_t PCSCNTR_CNTB4EN = 0x80000; // Counter Bank 4 enable


    static constexpr uint32_t PCR_RESET_VALUE = 0x18; // Reset value
    static constexpr uint32_t PCR_PWAITEN = 0x2; // Wait feature enable bit
    static constexpr uint32_t PCR_PBKEN = 0x4; // NAND Flash memory bank enable bit
    static constexpr uint32_t PCR_PTYP = 0x8; // Memory type
    typedef bit_field_t<4, 0x3> PCR_PWID; // Data bus width
    static constexpr uint32_t PCR_ECCEN = 0x40; // ECC computation logic enable bit
    typedef bit_field_t<9, 0xf> PCR_TCLR; // CLE to RE delay
    typedef bit_field_t<13, 0x7> PCR_TAR; // ALE to RE delay
    typedef bit_field_t<17, 0x7> PCR_ECCPS; // ECC page size

    static constexpr uint32_t SR_RESET_VALUE = 0x40; // Reset value
    static constexpr uint32_t SR_IRS = 0x1; // Interrupt rising edge status The flag is set by hardware and reset by software. Note: If this bit is written by software to 1 it will be set.
    static constexpr uint32_t SR_ILS = 0x2; // Interrupt high-level status The flag is set by hardware and reset by software.
    static constexpr uint32_t SR_IFS = 0x4; // Interrupt falling edge status The flag is set by hardware and reset by software. Note: If this bit is written by software to 1 it will be set.
    static constexpr uint32_t SR_IREN = 0x8; // Interrupt rising edge detection enable bit
    static constexpr uint32_t SR_ILEN = 0x10; // Interrupt high-level detection enable bit
    static constexpr uint32_t SR_IFEN = 0x20; // Interrupt falling edge detection enable bit
    static constexpr uint32_t SR_FEMPT = 0x40; // FIFO empty. Read-only bit that provides the status of the FIFO

    static constexpr uint32_t PMEM_RESET_VALUE = 0xfcfcfcfc; // Reset value
    typedef bit_field_t<0, 0xff> PMEM_MEMSET; // Common memory x setup time These bits define the number of KCK_FMC (+1) clock cycles to set up the address before the command assertion (NWE, NOE), for NAND Flash read or write access to common memory space:
    typedef bit_field_t<8, 0xff> PMEM_MEMWAIT; // Common memory wait time These bits define the minimum number of KCK_FMC (+1) clock cycles to assert the command (NWE, NOE), for NAND Flash read or write access to common memory space. The duration of command assertion is extended if the wait signal (NWAIT) is active (low) at the end of the programmed value of KCK_FMC:
    typedef bit_field_t<16, 0xff> PMEM_MEMHOLD; // Common memory hold time These bits define the number of KCK_FMC clock cycles for write accesses and KCK_FMC+1 clock cycles for read accesses during which the address is held (and data for write accesses) after the command is de-asserted (NWE, NOE), for NAND Flash read or write access to common memory space:
    typedef bit_field_t<24, 0xff> PMEM_MEMHIZ; // Common memory x data bus Hi-Z time These bits define the number of KCK_FMC clock cycles during which the data bus is kept Hi-Z after the start of a NAND Flash write access to common memory space. This is only valid for write transactions:

    static constexpr uint32_t PATT_RESET_VALUE = 0xfcfcfcfc; // Reset value
    typedef bit_field_t<0, 0xff> PATT_ATTSET; // Attribute memory setup time These bits define the number of KCK_FMC (+1) clock cycles to set up address before the command assertion (NWE, NOE), for NAND Flash read or write access to attribute memory space:
    typedef bit_field_t<8, 0xff> PATT_ATTWAIT; // Attribute memory wait time These bits define the minimum number of x KCK_FMC (+1) clock cycles to assert the command (NWE, NOE), for NAND Flash read or write access to attribute memory space. The duration for command assertion is extended if the wait signal (NWAIT) is active (low) at the end of the programmed value of KCK_FMC:
    typedef bit_field_t<16, 0xff> PATT_ATTHOLD; // Attribute memory hold time These bits define the number of KCK_FMC clock cycles during which the address is held (and data for write access) after the command de-assertion (NWE, NOE), for NAND Flash read or write access to attribute memory space:
    typedef bit_field_t<24, 0xff> PATT_ATTHIZ; // Attribute memory data bus Hi-Z time These bits define the number of KCK_FMC clock cycles during which the data bus is kept in Hi-Z after the start of a NAND Flash write access to attribute memory space on socket. Only valid for writ transaction:


    static constexpr uint32_t ECCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ECCR_ECC; // ECC result This field contains the value computed by the ECC computation logic. Table167 describes the contents of these bit fields.


    static constexpr uint32_t BWTR1_RESET_VALUE = 0xfffffff; // Reset value
    typedef bit_field_t<0, 0xf> BWTR1_ADDSET; // Address setup phase duration
    typedef bit_field_t<4, 0xf> BWTR1_ADDHLD; // Address-hold phase duration
    typedef bit_field_t<8, 0xff> BWTR1_DATAST; // Data-phase duration
    typedef bit_field_t<16, 0xf> BWTR1_BUSTURN; // Bus turnaround phase duration
    typedef bit_field_t<28, 0x3> BWTR1_ACCMOD; // Access mode
    typedef bit_field_t<30, 0x3> BWTR1_DATAHLD; // Data hold phase duration


    static constexpr uint32_t BWTR2_RESET_VALUE = 0xfffffff; // Reset value
    typedef bit_field_t<0, 0xf> BWTR2_ADDSET; // Address setup phase duration
    typedef bit_field_t<4, 0xf> BWTR2_ADDHLD; // Address-hold phase duration
    typedef bit_field_t<8, 0xff> BWTR2_DATAST; // Data-phase duration
    typedef bit_field_t<16, 0xf> BWTR2_BUSTURN; // Bus turnaround phase duration
    typedef bit_field_t<28, 0x3> BWTR2_ACCMOD; // Access mode
    typedef bit_field_t<30, 0x3> BWTR2_DATAHLD; // Data hold phase duration


    static constexpr uint32_t BWTR3_RESET_VALUE = 0xfffffff; // Reset value
    typedef bit_field_t<0, 0xf> BWTR3_ADDSET; // Address setup phase duration
    typedef bit_field_t<4, 0xf> BWTR3_ADDHLD; // Address-hold phase duration
    typedef bit_field_t<8, 0xff> BWTR3_DATAST; // Data-phase duration
    typedef bit_field_t<16, 0xf> BWTR3_BUSTURN; // Bus turnaround phase duration
    typedef bit_field_t<28, 0x3> BWTR3_ACCMOD; // Access mode
    typedef bit_field_t<30, 0x3> BWTR3_DATAHLD; // Data hold phase duration


    static constexpr uint32_t BWTR4_RESET_VALUE = 0xfffffff; // Reset value
    typedef bit_field_t<0, 0xf> BWTR4_ADDSET; // Address setup phase duration
    typedef bit_field_t<4, 0xf> BWTR4_ADDHLD; // Address-hold phase duration
    typedef bit_field_t<8, 0xff> BWTR4_DATAST; // Data-phase duration
    typedef bit_field_t<16, 0xf> BWTR4_BUSTURN; // Bus turnaround phase duration
    typedef bit_field_t<28, 0x3> BWTR4_ACCMOD; // Access mode
    typedef bit_field_t<30, 0x3> BWTR4_DATAHLD; // Data hold phase duration
};

template<>
struct peripheral_t<STM32U5xx, FMC>
{
    static constexpr periph_t P = FMC;
    using T = stm32u5xx_fmc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, SEC_FMC>
{
    static constexpr periph_t P = SEC_FMC;
    using T = stm32u5xx_fmc_t;
    static T& V;
};

using fmc_t = peripheral_t<svd, FMC>;
using sec_fmc_t = peripheral_t<svd, SEC_FMC>;

template<int INST> struct fmc_traits {};

template<> struct fmc_traits<0>
{
    using fmc = fmc_t;
    static constexpr signal_t A0 = FMC_A0;
    static constexpr signal_t A1 = FMC_A1;
    static constexpr signal_t A10 = FMC_A10;
    static constexpr signal_t A11 = FMC_A11;
    static constexpr signal_t A12 = FMC_A12;
    static constexpr signal_t A13 = FMC_A13;
    static constexpr signal_t A14 = FMC_A14;
    static constexpr signal_t A15 = FMC_A15;
    static constexpr signal_t A16 = FMC_A16;
    static constexpr signal_t A17 = FMC_A17;
    static constexpr signal_t A18 = FMC_A18;
    static constexpr signal_t A19 = FMC_A19;
    static constexpr signal_t A2 = FMC_A2;
    static constexpr signal_t A20 = FMC_A20;
    static constexpr signal_t A21 = FMC_A21;
    static constexpr signal_t A22 = FMC_A22;
    static constexpr signal_t A23 = FMC_A23;
    static constexpr signal_t A24 = FMC_A24;
    static constexpr signal_t A25 = FMC_A25;
    static constexpr signal_t A3 = FMC_A3;
    static constexpr signal_t A4 = FMC_A4;
    static constexpr signal_t A5 = FMC_A5;
    static constexpr signal_t A6 = FMC_A6;
    static constexpr signal_t A7 = FMC_A7;
    static constexpr signal_t A8 = FMC_A8;
    static constexpr signal_t A9 = FMC_A9;
    static constexpr signal_t CLK = FMC_CLK;
    static constexpr signal_t D0 = FMC_D0;
    static constexpr signal_t D1 = FMC_D1;
    static constexpr signal_t D10 = FMC_D10;
    static constexpr signal_t D11 = FMC_D11;
    static constexpr signal_t D12 = FMC_D12;
    static constexpr signal_t D13 = FMC_D13;
    static constexpr signal_t D14 = FMC_D14;
    static constexpr signal_t D15 = FMC_D15;
    static constexpr signal_t D2 = FMC_D2;
    static constexpr signal_t D3 = FMC_D3;
    static constexpr signal_t D4 = FMC_D4;
    static constexpr signal_t D5 = FMC_D5;
    static constexpr signal_t D6 = FMC_D6;
    static constexpr signal_t D7 = FMC_D7;
    static constexpr signal_t D8 = FMC_D8;
    static constexpr signal_t D9 = FMC_D9;
    static constexpr signal_t DA0 = FMC_DA0;
    static constexpr signal_t DA1 = FMC_DA1;
    static constexpr signal_t DA10 = FMC_DA10;
    static constexpr signal_t DA11 = FMC_DA11;
    static constexpr signal_t DA12 = FMC_DA12;
    static constexpr signal_t DA13 = FMC_DA13;
    static constexpr signal_t DA14 = FMC_DA14;
    static constexpr signal_t DA15 = FMC_DA15;
    static constexpr signal_t DA2 = FMC_DA2;
    static constexpr signal_t DA3 = FMC_DA3;
    static constexpr signal_t DA4 = FMC_DA4;
    static constexpr signal_t DA5 = FMC_DA5;
    static constexpr signal_t DA6 = FMC_DA6;
    static constexpr signal_t DA7 = FMC_DA7;
    static constexpr signal_t DA8 = FMC_DA8;
    static constexpr signal_t DA9 = FMC_DA9;
    static constexpr signal_t INT = FMC_INT;
    static constexpr signal_t NBL0 = FMC_NBL0;
    static constexpr signal_t NBL1 = FMC_NBL1;
    static constexpr signal_t NCE = FMC_NCE;
    static constexpr signal_t NE1 = FMC_NE1;
    static constexpr signal_t NE2 = FMC_NE2;
    static constexpr signal_t NE3 = FMC_NE3;
    static constexpr signal_t NE4 = FMC_NE4;
    static constexpr signal_t NL = FMC_NL;
    static constexpr signal_t NOE = FMC_NOE;
    static constexpr signal_t NWAIT = FMC_NWAIT;
    static constexpr signal_t NWE = FMC_NWE;
};
