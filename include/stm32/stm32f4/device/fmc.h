#pragma once

////
//
//      STM32F4 FMC peripherals
//
///

// FMC: Flexible memory controller

struct stm32f427_fmc_t
{
    volatile uint32_t BCR1; // SRAM/NOR-Flash chip-select control register 1
    volatile uint32_t BTR1; // SRAM/NOR-Flash chip-select timing register 1
    volatile uint32_t BCR2; // SRAM/NOR-Flash chip-select control register 2
    volatile uint32_t BTR2; // SRAM/NOR-Flash chip-select timing register 2
    volatile uint32_t BCR3; // SRAM/NOR-Flash chip-select control register 3
    volatile uint32_t BTR3; // SRAM/NOR-Flash chip-select timing register 3
    volatile uint32_t BCR4; // SRAM/NOR-Flash chip-select control register 4
    volatile uint32_t BTR4; // SRAM/NOR-Flash chip-select timing register 4
    reserved_t<0x10> _0x20;
    volatile uint32_t PCR2; // PC Card/NAND Flash control register 2
    volatile uint32_t SR2; // FIFO status and interrupt register 2
    volatile uint32_t PMEM2; // Common memory space timing register 2
    volatile uint32_t PATT2; // Attribute memory space timing register 2
    reserved_t<0x1> _0x70;
    volatile uint32_t ECCR2; // ECC result register 2
    reserved_t<0x2> _0x78;
    volatile uint32_t PCR3; // PC Card/NAND Flash control register 3
    volatile uint32_t SR3; // FIFO status and interrupt register 3
    volatile uint32_t PMEM3; // Common memory space timing register 3
    volatile uint32_t PATT3; // Attribute memory space timing register 3
    reserved_t<0x1> _0x90;
    volatile uint32_t ECCR3; // ECC result register 3
    reserved_t<0x2> _0x98;
    volatile uint32_t PCR4; // PC Card/NAND Flash control register 4
    volatile uint32_t SR4; // FIFO status and interrupt register 4
    volatile uint32_t PMEM4; // Common memory space timing register 4
    volatile uint32_t PATT4; // Attribute memory space timing register 4
    volatile uint32_t PIO4; // I/O space timing register 4
    reserved_t<0x14> _0xb4;
    volatile uint32_t BWTR1; // SRAM/NOR-Flash write timing registers 1
    reserved_t<0x1> _0x108;
    volatile uint32_t BWTR2; // SRAM/NOR-Flash write timing registers 2
    reserved_t<0xc> _0x110;
    volatile uint32_t SDCR1; // SDRAM Control Register 1
    volatile uint32_t SDCR2; // SDRAM Control Register 2
    volatile uint32_t SDTR1; // SDRAM Timing register 1
    volatile uint32_t SDTR2; // SDRAM Timing register 2
    volatile uint32_t SDCMR; // SDRAM Command Mode register
    volatile uint32_t SDRTR; // SDRAM Refresh Timer register
    volatile uint32_t SDSR; // SDRAM Status register

    static constexpr uint32_t BCR1_RESET_VALUE = 0x30d0; // Reset value
    static constexpr uint32_t BCR1_CCLKEN = 0x100000; // CCLKEN
    static constexpr uint32_t BCR1_CBURSTRW = 0x80000; // CBURSTRW
    typedef bit_field_t<16, 0x7> BCR1_CPSIZE; // CPSIZE
    static constexpr uint32_t BCR1_ASYNCWAIT = 0x8000; // ASYNCWAIT
    static constexpr uint32_t BCR1_EXTMOD = 0x4000; // EXTMOD
    static constexpr uint32_t BCR1_WAITEN = 0x2000; // WAITEN
    static constexpr uint32_t BCR1_WREN = 0x1000; // WREN
    static constexpr uint32_t BCR1_WAITCFG = 0x800; // WAITCFG
    static constexpr uint32_t BCR1_WRAPMOD = 0x400; // WRAPMOD
    static constexpr uint32_t BCR1_WAITPOL = 0x200; // WAITPOL
    static constexpr uint32_t BCR1_BURSTEN = 0x100; // BURSTEN
    static constexpr uint32_t BCR1_FACCEN = 0x40; // FACCEN
    typedef bit_field_t<4, 0x3> BCR1_MWID; // MWID
    typedef bit_field_t<2, 0x3> BCR1_MTYP; // MTYP
    static constexpr uint32_t BCR1_MUXEN = 0x2; // MUXEN
    static constexpr uint32_t BCR1_MBKEN = 0x1; // MBKEN

    static constexpr uint32_t BTR1_RESET_VALUE = 0xffffffff; // Reset value
    typedef bit_field_t<28, 0x3> BTR1_ACCMOD; // ACCMOD
    typedef bit_field_t<24, 0xf> BTR1_DATLAT; // DATLAT
    typedef bit_field_t<20, 0xf> BTR1_CLKDIV; // CLKDIV
    typedef bit_field_t<16, 0xf> BTR1_BUSTURN; // BUSTURN
    typedef bit_field_t<8, 0xff> BTR1_DATAST; // DATAST
    typedef bit_field_t<4, 0xf> BTR1_ADDHLD; // ADDHLD
    typedef bit_field_t<0, 0xf> BTR1_ADDSET; // ADDSET

    static constexpr uint32_t BCR2_RESET_VALUE = 0x30d0; // Reset value
    static constexpr uint32_t BCR2_CBURSTRW = 0x80000; // CBURSTRW
    typedef bit_field_t<16, 0x7> BCR2_CPSIZE; // CPSIZE
    static constexpr uint32_t BCR2_ASYNCWAIT = 0x8000; // ASYNCWAIT
    static constexpr uint32_t BCR2_EXTMOD = 0x4000; // EXTMOD
    static constexpr uint32_t BCR2_WAITEN = 0x2000; // WAITEN
    static constexpr uint32_t BCR2_WREN = 0x1000; // WREN
    static constexpr uint32_t BCR2_WAITCFG = 0x800; // WAITCFG
    static constexpr uint32_t BCR2_WRAPMOD = 0x400; // WRAPMOD
    static constexpr uint32_t BCR2_WAITPOL = 0x200; // WAITPOL
    static constexpr uint32_t BCR2_BURSTEN = 0x100; // BURSTEN
    static constexpr uint32_t BCR2_FACCEN = 0x40; // FACCEN
    typedef bit_field_t<4, 0x3> BCR2_MWID; // MWID
    typedef bit_field_t<2, 0x3> BCR2_MTYP; // MTYP
    static constexpr uint32_t BCR2_MUXEN = 0x2; // MUXEN
    static constexpr uint32_t BCR2_MBKEN = 0x1; // MBKEN

    static constexpr uint32_t BTR2_RESET_VALUE = 0xffffffff; // Reset value
    typedef bit_field_t<28, 0x3> BTR2_ACCMOD; // ACCMOD
    typedef bit_field_t<24, 0xf> BTR2_DATLAT; // DATLAT
    typedef bit_field_t<20, 0xf> BTR2_CLKDIV; // CLKDIV
    typedef bit_field_t<16, 0xf> BTR2_BUSTURN; // BUSTURN
    typedef bit_field_t<8, 0xff> BTR2_DATAST; // DATAST
    typedef bit_field_t<4, 0xf> BTR2_ADDHLD; // ADDHLD
    typedef bit_field_t<0, 0xf> BTR2_ADDSET; // ADDSET

    static constexpr uint32_t BCR3_RESET_VALUE = 0x30d0; // Reset value
    static constexpr uint32_t BCR3_CBURSTRW = 0x80000; // CBURSTRW
    typedef bit_field_t<16, 0x7> BCR3_CPSIZE; // CPSIZE
    static constexpr uint32_t BCR3_ASYNCWAIT = 0x8000; // ASYNCWAIT
    static constexpr uint32_t BCR3_EXTMOD = 0x4000; // EXTMOD
    static constexpr uint32_t BCR3_WAITEN = 0x2000; // WAITEN
    static constexpr uint32_t BCR3_WREN = 0x1000; // WREN
    static constexpr uint32_t BCR3_WAITCFG = 0x800; // WAITCFG
    static constexpr uint32_t BCR3_WRAPMOD = 0x400; // WRAPMOD
    static constexpr uint32_t BCR3_WAITPOL = 0x200; // WAITPOL
    static constexpr uint32_t BCR3_BURSTEN = 0x100; // BURSTEN
    static constexpr uint32_t BCR3_FACCEN = 0x40; // FACCEN
    typedef bit_field_t<4, 0x3> BCR3_MWID; // MWID
    typedef bit_field_t<2, 0x3> BCR3_MTYP; // MTYP
    static constexpr uint32_t BCR3_MUXEN = 0x2; // MUXEN
    static constexpr uint32_t BCR3_MBKEN = 0x1; // MBKEN

    static constexpr uint32_t BTR3_RESET_VALUE = 0xffffffff; // Reset value
    typedef bit_field_t<28, 0x3> BTR3_ACCMOD; // ACCMOD
    typedef bit_field_t<24, 0xf> BTR3_DATLAT; // DATLAT
    typedef bit_field_t<20, 0xf> BTR3_CLKDIV; // CLKDIV
    typedef bit_field_t<16, 0xf> BTR3_BUSTURN; // BUSTURN
    typedef bit_field_t<8, 0xff> BTR3_DATAST; // DATAST
    typedef bit_field_t<4, 0xf> BTR3_ADDHLD; // ADDHLD
    typedef bit_field_t<0, 0xf> BTR3_ADDSET; // ADDSET

    static constexpr uint32_t BCR4_RESET_VALUE = 0x30d0; // Reset value
    static constexpr uint32_t BCR4_CBURSTRW = 0x80000; // CBURSTRW
    typedef bit_field_t<16, 0x7> BCR4_CPSIZE; // CPSIZE
    static constexpr uint32_t BCR4_ASYNCWAIT = 0x8000; // ASYNCWAIT
    static constexpr uint32_t BCR4_EXTMOD = 0x4000; // EXTMOD
    static constexpr uint32_t BCR4_WAITEN = 0x2000; // WAITEN
    static constexpr uint32_t BCR4_WREN = 0x1000; // WREN
    static constexpr uint32_t BCR4_WAITCFG = 0x800; // WAITCFG
    static constexpr uint32_t BCR4_WRAPMOD = 0x400; // WRAPMOD
    static constexpr uint32_t BCR4_WAITPOL = 0x200; // WAITPOL
    static constexpr uint32_t BCR4_BURSTEN = 0x100; // BURSTEN
    static constexpr uint32_t BCR4_FACCEN = 0x40; // FACCEN
    typedef bit_field_t<4, 0x3> BCR4_MWID; // MWID
    typedef bit_field_t<2, 0x3> BCR4_MTYP; // MTYP
    static constexpr uint32_t BCR4_MUXEN = 0x2; // MUXEN
    static constexpr uint32_t BCR4_MBKEN = 0x1; // MBKEN

    static constexpr uint32_t BTR4_RESET_VALUE = 0xffffffff; // Reset value
    typedef bit_field_t<28, 0x3> BTR4_ACCMOD; // ACCMOD
    typedef bit_field_t<24, 0xf> BTR4_DATLAT; // DATLAT
    typedef bit_field_t<20, 0xf> BTR4_CLKDIV; // CLKDIV
    typedef bit_field_t<16, 0xf> BTR4_BUSTURN; // BUSTURN
    typedef bit_field_t<8, 0xff> BTR4_DATAST; // DATAST
    typedef bit_field_t<4, 0xf> BTR4_ADDHLD; // ADDHLD
    typedef bit_field_t<0, 0xf> BTR4_ADDSET; // ADDSET


    static constexpr uint32_t PCR2_RESET_VALUE = 0x18; // Reset value
    typedef bit_field_t<17, 0x7> PCR2_ECCPS; // ECCPS
    typedef bit_field_t<13, 0xf> PCR2_TAR; // TAR
    typedef bit_field_t<9, 0xf> PCR2_TCLR; // TCLR
    static constexpr uint32_t PCR2_ECCEN = 0x40; // ECCEN
    typedef bit_field_t<4, 0x3> PCR2_PWID; // PWID
    static constexpr uint32_t PCR2_PTYP = 0x8; // PTYP
    static constexpr uint32_t PCR2_PBKEN = 0x4; // PBKEN
    static constexpr uint32_t PCR2_PWAITEN = 0x2; // PWAITEN

    static constexpr uint32_t SR2_RESET_VALUE = 0x40; // Reset value
    static constexpr uint32_t SR2_FEMPT = 0x40; // FEMPT
    static constexpr uint32_t SR2_IFEN = 0x20; // IFEN
    static constexpr uint32_t SR2_ILEN = 0x10; // ILEN
    static constexpr uint32_t SR2_IREN = 0x8; // IREN
    static constexpr uint32_t SR2_IFS = 0x4; // IFS
    static constexpr uint32_t SR2_ILS = 0x2; // ILS
    static constexpr uint32_t SR2_IRS = 0x1; // IRS

    static constexpr uint32_t PMEM2_RESET_VALUE = 0xfcfcfcfc; // Reset value
    typedef bit_field_t<24, 0xff> PMEM2_MEMHIZX; // MEMHIZx
    typedef bit_field_t<16, 0xff> PMEM2_MEMHOLDX; // MEMHOLDx
    typedef bit_field_t<8, 0xff> PMEM2_MEMWAITX; // MEMWAITx
    typedef bit_field_t<0, 0xff> PMEM2_MEMSETX; // MEMSETx

    static constexpr uint32_t PATT2_RESET_VALUE = 0xfcfcfcfc; // Reset value
    typedef bit_field_t<24, 0xff> PATT2_ATTHIZX; // ATTHIZx
    typedef bit_field_t<16, 0xff> PATT2_ATTHOLDX; // ATTHOLDx
    typedef bit_field_t<8, 0xff> PATT2_ATTWAITX; // ATTWAITx
    typedef bit_field_t<0, 0xff> PATT2_ATTSETX; // ATTSETx


    static constexpr uint32_t ECCR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ECCR2_ECCX; // ECCx


    static constexpr uint32_t PCR3_RESET_VALUE = 0x18; // Reset value
    typedef bit_field_t<17, 0x7> PCR3_ECCPS; // ECCPS
    typedef bit_field_t<13, 0xf> PCR3_TAR; // TAR
    typedef bit_field_t<9, 0xf> PCR3_TCLR; // TCLR
    static constexpr uint32_t PCR3_ECCEN = 0x40; // ECCEN
    typedef bit_field_t<4, 0x3> PCR3_PWID; // PWID
    static constexpr uint32_t PCR3_PTYP = 0x8; // PTYP
    static constexpr uint32_t PCR3_PBKEN = 0x4; // PBKEN
    static constexpr uint32_t PCR3_PWAITEN = 0x2; // PWAITEN

    static constexpr uint32_t SR3_RESET_VALUE = 0x40; // Reset value
    static constexpr uint32_t SR3_FEMPT = 0x40; // FEMPT
    static constexpr uint32_t SR3_IFEN = 0x20; // IFEN
    static constexpr uint32_t SR3_ILEN = 0x10; // ILEN
    static constexpr uint32_t SR3_IREN = 0x8; // IREN
    static constexpr uint32_t SR3_IFS = 0x4; // IFS
    static constexpr uint32_t SR3_ILS = 0x2; // ILS
    static constexpr uint32_t SR3_IRS = 0x1; // IRS

    static constexpr uint32_t PMEM3_RESET_VALUE = 0xfcfcfcfc; // Reset value
    typedef bit_field_t<24, 0xff> PMEM3_MEMHIZX; // MEMHIZx
    typedef bit_field_t<16, 0xff> PMEM3_MEMHOLDX; // MEMHOLDx
    typedef bit_field_t<8, 0xff> PMEM3_MEMWAITX; // MEMWAITx
    typedef bit_field_t<0, 0xff> PMEM3_MEMSETX; // MEMSETx

    static constexpr uint32_t PATT3_RESET_VALUE = 0xfcfcfcfc; // Reset value
    typedef bit_field_t<24, 0xff> PATT3_ATTHIZX; // ATTHIZx
    typedef bit_field_t<16, 0xff> PATT3_ATTHOLDX; // ATTHOLDx
    typedef bit_field_t<8, 0xff> PATT3_ATTWAITX; // ATTWAITx
    typedef bit_field_t<0, 0xff> PATT3_ATTSETX; // ATTSETx


    static constexpr uint32_t ECCR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ECCR3_ECCX; // ECCx


    static constexpr uint32_t PCR4_RESET_VALUE = 0x18; // Reset value
    typedef bit_field_t<17, 0x7> PCR4_ECCPS; // ECCPS
    typedef bit_field_t<13, 0xf> PCR4_TAR; // TAR
    typedef bit_field_t<9, 0xf> PCR4_TCLR; // TCLR
    static constexpr uint32_t PCR4_ECCEN = 0x40; // ECCEN
    typedef bit_field_t<4, 0x3> PCR4_PWID; // PWID
    static constexpr uint32_t PCR4_PTYP = 0x8; // PTYP
    static constexpr uint32_t PCR4_PBKEN = 0x4; // PBKEN
    static constexpr uint32_t PCR4_PWAITEN = 0x2; // PWAITEN

    static constexpr uint32_t SR4_RESET_VALUE = 0x40; // Reset value
    static constexpr uint32_t SR4_FEMPT = 0x40; // FEMPT
    static constexpr uint32_t SR4_IFEN = 0x20; // IFEN
    static constexpr uint32_t SR4_ILEN = 0x10; // ILEN
    static constexpr uint32_t SR4_IREN = 0x8; // IREN
    static constexpr uint32_t SR4_IFS = 0x4; // IFS
    static constexpr uint32_t SR4_ILS = 0x2; // ILS
    static constexpr uint32_t SR4_IRS = 0x1; // IRS

    static constexpr uint32_t PMEM4_RESET_VALUE = 0xfcfcfcfc; // Reset value
    typedef bit_field_t<24, 0xff> PMEM4_MEMHIZX; // MEMHIZx
    typedef bit_field_t<16, 0xff> PMEM4_MEMHOLDX; // MEMHOLDx
    typedef bit_field_t<8, 0xff> PMEM4_MEMWAITX; // MEMWAITx
    typedef bit_field_t<0, 0xff> PMEM4_MEMSETX; // MEMSETx

    static constexpr uint32_t PATT4_RESET_VALUE = 0xfcfcfcfc; // Reset value
    typedef bit_field_t<24, 0xff> PATT4_ATTHIZX; // ATTHIZx
    typedef bit_field_t<16, 0xff> PATT4_ATTHOLDX; // ATTHOLDx
    typedef bit_field_t<8, 0xff> PATT4_ATTWAITX; // ATTWAITx
    typedef bit_field_t<0, 0xff> PATT4_ATTSETX; // ATTSETx

    static constexpr uint32_t PIO4_RESET_VALUE = 0xfcfcfcfc; // Reset value
    typedef bit_field_t<24, 0xff> PIO4_IOHIZX; // IOHIZx
    typedef bit_field_t<16, 0xff> PIO4_IOHOLDX; // IOHOLDx
    typedef bit_field_t<8, 0xff> PIO4_IOWAITX; // IOWAITx
    typedef bit_field_t<0, 0xff> PIO4_IOSETX; // IOSETx


    static constexpr uint32_t BWTR1_RESET_VALUE = 0xfffffff; // Reset value
    typedef bit_field_t<28, 0x3> BWTR1_ACCMOD; // ACCMOD
    typedef bit_field_t<4, 0xf> BWTR1_ADDHLD; // ADDHLD
    typedef bit_field_t<0, 0xf> BWTR1_ADDSET; // ADDSET
    typedef bit_field_t<16, 0xf> BWTR1_BUSTURN; // BUSTURN


    static constexpr uint32_t BWTR2_RESET_VALUE = 0xfffffff; // Reset value
    typedef bit_field_t<28, 0x3> BWTR2_ACCMOD; // ACCMOD
    typedef bit_field_t<4, 0xf> BWTR2_ADDHLD; // ADDHLD
    typedef bit_field_t<0, 0xf> BWTR2_ADDSET; // ADDSET
    typedef bit_field_t<16, 0xf> BWTR2_BUSTURN; // BUSTURN


    static constexpr uint32_t SDCR1_RESET_VALUE = 0x2d0; // Reset value
    typedef bit_field_t<0, 0x3> SDCR1_NC; // Number of column address bits
    typedef bit_field_t<2, 0x3> SDCR1_NR; // Number of row address bits
    typedef bit_field_t<4, 0x3> SDCR1_MWID; // Memory data bus width
    static constexpr uint32_t SDCR1_NB = 0x40; // Number of internal banks
    typedef bit_field_t<7, 0x3> SDCR1_CAS; // CAS latency
    static constexpr uint32_t SDCR1_WP = 0x200; // Write protection
    typedef bit_field_t<10, 0x3> SDCR1_SDCLK; // SDRAM clock configuration
    static constexpr uint32_t SDCR1_RBURST = 0x1000; // Burst read
    typedef bit_field_t<13, 0x3> SDCR1_RPIPE; // Read pipe

    static constexpr uint32_t SDCR2_RESET_VALUE = 0x2d0; // Reset value
    typedef bit_field_t<0, 0x3> SDCR2_NC; // Number of column address bits
    typedef bit_field_t<2, 0x3> SDCR2_NR; // Number of row address bits
    typedef bit_field_t<4, 0x3> SDCR2_MWID; // Memory data bus width
    static constexpr uint32_t SDCR2_NB = 0x40; // Number of internal banks
    typedef bit_field_t<7, 0x3> SDCR2_CAS; // CAS latency
    static constexpr uint32_t SDCR2_WP = 0x200; // Write protection
    typedef bit_field_t<10, 0x3> SDCR2_SDCLK; // SDRAM clock configuration

    static constexpr uint32_t SDTR1_RESET_VALUE = 0xfffffff; // Reset value
    typedef bit_field_t<0, 0xf> SDTR1_TMRD; // Load Mode Register to Active
    typedef bit_field_t<4, 0xf> SDTR1_TXSR; // Exit self-refresh delay
    typedef bit_field_t<8, 0xf> SDTR1_TRAS; // Self refresh time
    typedef bit_field_t<12, 0xf> SDTR1_TRC; // Row cycle delay
    typedef bit_field_t<16, 0xf> SDTR1_TWR; // Recovery delay
    typedef bit_field_t<20, 0xf> SDTR1_TRP; // Row precharge delay
    typedef bit_field_t<24, 0xf> SDTR1_TRCD; // Row to column delay

    static constexpr uint32_t SDTR2_RESET_VALUE = 0xfffffff; // Reset value
    typedef bit_field_t<0, 0xf> SDTR2_TMRD; // Load Mode Register to Active
    typedef bit_field_t<4, 0xf> SDTR2_TXSR; // Exit self-refresh delay
    typedef bit_field_t<8, 0xf> SDTR2_TRAS; // Self refresh time
    typedef bit_field_t<12, 0xf> SDTR2_TRC; // Row cycle delay
    typedef bit_field_t<16, 0xf> SDTR2_TWR; // Recovery delay
    typedef bit_field_t<20, 0xf> SDTR2_TRP; // Row precharge delay
    typedef bit_field_t<24, 0xf> SDTR2_TRCD; // Row to column delay

    static constexpr uint32_t SDCMR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> SDCMR_MODE; // Command mode
    static constexpr uint32_t SDCMR_CTB2 = 0x8; // Command target bank 2
    static constexpr uint32_t SDCMR_CTB1 = 0x10; // Command target bank 1
    typedef bit_field_t<5, 0xf> SDCMR_NRFS; // Number of Auto-refresh
    typedef bit_field_t<9, 0x1fff> SDCMR_MRD; // Mode Register definition

    static constexpr uint32_t SDRTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SDRTR_CRE = 0x1; // Clear Refresh error flag
    typedef bit_field_t<1, 0x1fff> SDRTR_COUNT; // Refresh Timer Count
    static constexpr uint32_t SDRTR_REIE = 0x4000; // RES Interrupt Enable

    static constexpr uint32_t SDSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SDSR_RE = 0x1; // Refresh error flag
    typedef bit_field_t<1, 0x3> SDSR_MODES1; // Status Mode for Bank 1
    typedef bit_field_t<3, 0x3> SDSR_MODES2; // Status Mode for Bank 2
    static constexpr uint32_t SDSR_BUSY = 0x20; // Busy status
};

// FMC: Flexible memory controller

struct stm32f429_fmc_t
{
    volatile uint32_t BCR1; // SRAM/NOR-Flash chip-select control register 1
    volatile uint32_t BTR1; // SRAM/NOR-Flash chip-select timing register 1
    volatile uint32_t BCR2; // SRAM/NOR-Flash chip-select control register 2
    volatile uint32_t BTR2; // SRAM/NOR-Flash chip-select timing register 2
    volatile uint32_t BCR3; // SRAM/NOR-Flash chip-select control register 3
    volatile uint32_t BTR3; // SRAM/NOR-Flash chip-select timing register 3
    volatile uint32_t BCR4; // SRAM/NOR-Flash chip-select control register 4
    volatile uint32_t BTR4; // SRAM/NOR-Flash chip-select timing register 4
    reserved_t<0x10> _0x20;
    volatile uint32_t PCR2; // PC Card/NAND Flash control register 2
    volatile uint32_t SR2; // FIFO status and interrupt register 2
    volatile uint32_t PMEM2; // Common memory space timing register 2
    volatile uint32_t PATT2; // Attribute memory space timing register 2
    reserved_t<0x1> _0x70;
    volatile uint32_t ECCR2; // ECC result register 2
    reserved_t<0x2> _0x78;
    volatile uint32_t PCR3; // PC Card/NAND Flash control register 3
    volatile uint32_t SR3; // FIFO status and interrupt register 3
    volatile uint32_t PMEM3; // Common memory space timing register 3
    volatile uint32_t PATT3; // Attribute memory space timing register 3
    reserved_t<0x1> _0x90;
    volatile uint32_t ECCR3; // ECC result register 3
    reserved_t<0x2> _0x98;
    volatile uint32_t PCR4; // PC Card/NAND Flash control register 4
    volatile uint32_t SR4; // FIFO status and interrupt register 4
    volatile uint32_t PMEM4; // Common memory space timing register 4
    volatile uint32_t PATT4; // Attribute memory space timing register 4
    volatile uint32_t PIO4; // I/O space timing register 4
    reserved_t<0x14> _0xb4;
    volatile uint32_t BWTR1; // SRAM/NOR-Flash write timing registers 1
    reserved_t<0x1> _0x108;
    volatile uint32_t BWTR2; // SRAM/NOR-Flash write timing registers 2
    reserved_t<0xc> _0x110;
    volatile uint32_t SDCR1; // SDRAM Control Register 1
    volatile uint32_t SDCR2; // SDRAM Control Register 2
    volatile uint32_t SDTR1; // SDRAM Timing register 1
    volatile uint32_t SDTR2; // SDRAM Timing register 2
    volatile uint32_t SDCMR; // SDRAM Command Mode register
    volatile uint32_t SDRTR; // SDRAM Refresh Timer register
    volatile uint32_t SDSR; // SDRAM Status register

    static constexpr uint32_t BCR1_RESET_VALUE = 0x30d0; // Reset value
    static constexpr uint32_t BCR1_CCLKEN = 0x100000; // CCLKEN
    static constexpr uint32_t BCR1_CBURSTRW = 0x80000; // CBURSTRW
    static constexpr uint32_t BCR1_ASYNCWAIT = 0x8000; // ASYNCWAIT
    static constexpr uint32_t BCR1_EXTMOD = 0x4000; // EXTMOD
    static constexpr uint32_t BCR1_WAITEN = 0x2000; // WAITEN
    static constexpr uint32_t BCR1_WREN = 0x1000; // WREN
    static constexpr uint32_t BCR1_WAITCFG = 0x800; // WAITCFG
    static constexpr uint32_t BCR1_WAITPOL = 0x200; // WAITPOL
    static constexpr uint32_t BCR1_BURSTEN = 0x100; // BURSTEN
    static constexpr uint32_t BCR1_FACCEN = 0x40; // FACCEN
    typedef bit_field_t<4, 0x3> BCR1_MWID; // MWID
    typedef bit_field_t<2, 0x3> BCR1_MTYP; // MTYP
    static constexpr uint32_t BCR1_MUXEN = 0x2; // MUXEN
    static constexpr uint32_t BCR1_MBKEN = 0x1; // MBKEN

    static constexpr uint32_t BTR1_RESET_VALUE = 0xffffffff; // Reset value
    typedef bit_field_t<28, 0x3> BTR1_ACCMOD; // ACCMOD
    typedef bit_field_t<24, 0xf> BTR1_DATLAT; // DATLAT
    typedef bit_field_t<20, 0xf> BTR1_CLKDIV; // CLKDIV
    typedef bit_field_t<16, 0xf> BTR1_BUSTURN; // BUSTURN
    typedef bit_field_t<8, 0xff> BTR1_DATAST; // DATAST
    typedef bit_field_t<4, 0xf> BTR1_ADDHLD; // ADDHLD
    typedef bit_field_t<0, 0xf> BTR1_ADDSET; // ADDSET

    static constexpr uint32_t BCR2_RESET_VALUE = 0x30d0; // Reset value
    static constexpr uint32_t BCR2_CBURSTRW = 0x80000; // CBURSTRW
    static constexpr uint32_t BCR2_ASYNCWAIT = 0x8000; // ASYNCWAIT
    static constexpr uint32_t BCR2_EXTMOD = 0x4000; // EXTMOD
    static constexpr uint32_t BCR2_WAITEN = 0x2000; // WAITEN
    static constexpr uint32_t BCR2_WREN = 0x1000; // WREN
    static constexpr uint32_t BCR2_WAITCFG = 0x800; // WAITCFG
    static constexpr uint32_t BCR2_WRAPMOD = 0x400; // WRAPMOD
    static constexpr uint32_t BCR2_WAITPOL = 0x200; // WAITPOL
    static constexpr uint32_t BCR2_BURSTEN = 0x100; // BURSTEN
    static constexpr uint32_t BCR2_FACCEN = 0x40; // FACCEN
    typedef bit_field_t<4, 0x3> BCR2_MWID; // MWID
    typedef bit_field_t<2, 0x3> BCR2_MTYP; // MTYP
    static constexpr uint32_t BCR2_MUXEN = 0x2; // MUXEN
    static constexpr uint32_t BCR2_MBKEN = 0x1; // MBKEN

    static constexpr uint32_t BTR2_RESET_VALUE = 0xffffffff; // Reset value
    typedef bit_field_t<28, 0x3> BTR2_ACCMOD; // ACCMOD
    typedef bit_field_t<24, 0xf> BTR2_DATLAT; // DATLAT
    typedef bit_field_t<20, 0xf> BTR2_CLKDIV; // CLKDIV
    typedef bit_field_t<16, 0xf> BTR2_BUSTURN; // BUSTURN
    typedef bit_field_t<8, 0xff> BTR2_DATAST; // DATAST
    typedef bit_field_t<4, 0xf> BTR2_ADDHLD; // ADDHLD
    typedef bit_field_t<0, 0xf> BTR2_ADDSET; // ADDSET

    static constexpr uint32_t BCR3_RESET_VALUE = 0x30d0; // Reset value
    static constexpr uint32_t BCR3_CBURSTRW = 0x80000; // CBURSTRW
    static constexpr uint32_t BCR3_ASYNCWAIT = 0x8000; // ASYNCWAIT
    static constexpr uint32_t BCR3_EXTMOD = 0x4000; // EXTMOD
    static constexpr uint32_t BCR3_WAITEN = 0x2000; // WAITEN
    static constexpr uint32_t BCR3_WREN = 0x1000; // WREN
    static constexpr uint32_t BCR3_WAITCFG = 0x800; // WAITCFG
    static constexpr uint32_t BCR3_WRAPMOD = 0x400; // WRAPMOD
    static constexpr uint32_t BCR3_WAITPOL = 0x200; // WAITPOL
    static constexpr uint32_t BCR3_BURSTEN = 0x100; // BURSTEN
    static constexpr uint32_t BCR3_FACCEN = 0x40; // FACCEN
    typedef bit_field_t<4, 0x3> BCR3_MWID; // MWID
    typedef bit_field_t<2, 0x3> BCR3_MTYP; // MTYP
    static constexpr uint32_t BCR3_MUXEN = 0x2; // MUXEN
    static constexpr uint32_t BCR3_MBKEN = 0x1; // MBKEN

    static constexpr uint32_t BTR3_RESET_VALUE = 0xffffffff; // Reset value
    typedef bit_field_t<28, 0x3> BTR3_ACCMOD; // ACCMOD
    typedef bit_field_t<24, 0xf> BTR3_DATLAT; // DATLAT
    typedef bit_field_t<20, 0xf> BTR3_CLKDIV; // CLKDIV
    typedef bit_field_t<16, 0xf> BTR3_BUSTURN; // BUSTURN
    typedef bit_field_t<8, 0xff> BTR3_DATAST; // DATAST
    typedef bit_field_t<4, 0xf> BTR3_ADDHLD; // ADDHLD
    typedef bit_field_t<0, 0xf> BTR3_ADDSET; // ADDSET

    static constexpr uint32_t BCR4_RESET_VALUE = 0x30d0; // Reset value
    static constexpr uint32_t BCR4_CBURSTRW = 0x80000; // CBURSTRW
    static constexpr uint32_t BCR4_ASYNCWAIT = 0x8000; // ASYNCWAIT
    static constexpr uint32_t BCR4_EXTMOD = 0x4000; // EXTMOD
    static constexpr uint32_t BCR4_WAITEN = 0x2000; // WAITEN
    static constexpr uint32_t BCR4_WREN = 0x1000; // WREN
    static constexpr uint32_t BCR4_WAITCFG = 0x800; // WAITCFG
    static constexpr uint32_t BCR4_WRAPMOD = 0x400; // WRAPMOD
    static constexpr uint32_t BCR4_WAITPOL = 0x200; // WAITPOL
    static constexpr uint32_t BCR4_BURSTEN = 0x100; // BURSTEN
    static constexpr uint32_t BCR4_FACCEN = 0x40; // FACCEN
    typedef bit_field_t<4, 0x3> BCR4_MWID; // MWID
    typedef bit_field_t<2, 0x3> BCR4_MTYP; // MTYP
    static constexpr uint32_t BCR4_MUXEN = 0x2; // MUXEN
    static constexpr uint32_t BCR4_MBKEN = 0x1; // MBKEN

    static constexpr uint32_t BTR4_RESET_VALUE = 0xffffffff; // Reset value
    typedef bit_field_t<28, 0x3> BTR4_ACCMOD; // ACCMOD
    typedef bit_field_t<24, 0xf> BTR4_DATLAT; // DATLAT
    typedef bit_field_t<20, 0xf> BTR4_CLKDIV; // CLKDIV
    typedef bit_field_t<16, 0xf> BTR4_BUSTURN; // BUSTURN
    typedef bit_field_t<8, 0xff> BTR4_DATAST; // DATAST
    typedef bit_field_t<4, 0xf> BTR4_ADDHLD; // ADDHLD
    typedef bit_field_t<0, 0xf> BTR4_ADDSET; // ADDSET


    static constexpr uint32_t PCR2_RESET_VALUE = 0x18; // Reset value
    typedef bit_field_t<17, 0x7> PCR2_ECCPS; // ECCPS
    typedef bit_field_t<13, 0xf> PCR2_TAR; // TAR
    typedef bit_field_t<9, 0xf> PCR2_TCLR; // TCLR
    static constexpr uint32_t PCR2_ECCEN = 0x40; // ECCEN
    typedef bit_field_t<4, 0x3> PCR2_PWID; // PWID
    static constexpr uint32_t PCR2_PTYP = 0x8; // PTYP
    static constexpr uint32_t PCR2_PBKEN = 0x4; // PBKEN
    static constexpr uint32_t PCR2_PWAITEN = 0x2; // PWAITEN

    static constexpr uint32_t SR2_RESET_VALUE = 0x40; // Reset value
    static constexpr uint32_t SR2_FEMPT = 0x40; // FEMPT
    static constexpr uint32_t SR2_IFEN = 0x20; // IFEN
    static constexpr uint32_t SR2_ILEN = 0x10; // ILEN
    static constexpr uint32_t SR2_IREN = 0x8; // IREN
    static constexpr uint32_t SR2_IFS = 0x4; // IFS
    static constexpr uint32_t SR2_ILS = 0x2; // ILS
    static constexpr uint32_t SR2_IRS = 0x1; // IRS

    static constexpr uint32_t PMEM2_RESET_VALUE = 0xfcfcfcfc; // Reset value
    typedef bit_field_t<24, 0xff> PMEM2_MEMHIZX; // MEMHIZx
    typedef bit_field_t<16, 0xff> PMEM2_MEMHOLDX; // MEMHOLDx
    typedef bit_field_t<8, 0xff> PMEM2_MEMWAITX; // MEMWAITx
    typedef bit_field_t<0, 0xff> PMEM2_MEMSETX; // MEMSETx

    static constexpr uint32_t PATT2_RESET_VALUE = 0xfcfcfcfc; // Reset value
    typedef bit_field_t<24, 0xff> PATT2_ATTHIZX; // ATTHIZx
    typedef bit_field_t<16, 0xff> PATT2_ATTHOLDX; // ATTHOLDx
    typedef bit_field_t<8, 0xff> PATT2_ATTWAITX; // ATTWAITx
    typedef bit_field_t<0, 0xff> PATT2_ATTSETX; // ATTSETx


    static constexpr uint32_t ECCR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ECCR2_ECCX; // ECCx


    static constexpr uint32_t PCR3_RESET_VALUE = 0x18; // Reset value
    typedef bit_field_t<17, 0x7> PCR3_ECCPS; // ECCPS
    typedef bit_field_t<13, 0xf> PCR3_TAR; // TAR
    typedef bit_field_t<9, 0xf> PCR3_TCLR; // TCLR
    static constexpr uint32_t PCR3_ECCEN = 0x40; // ECCEN
    typedef bit_field_t<4, 0x3> PCR3_PWID; // PWID
    static constexpr uint32_t PCR3_PTYP = 0x8; // PTYP
    static constexpr uint32_t PCR3_PBKEN = 0x4; // PBKEN
    static constexpr uint32_t PCR3_PWAITEN = 0x2; // PWAITEN

    static constexpr uint32_t SR3_RESET_VALUE = 0x40; // Reset value
    static constexpr uint32_t SR3_FEMPT = 0x40; // FEMPT
    static constexpr uint32_t SR3_IFEN = 0x20; // IFEN
    static constexpr uint32_t SR3_ILEN = 0x10; // ILEN
    static constexpr uint32_t SR3_IREN = 0x8; // IREN
    static constexpr uint32_t SR3_IFS = 0x4; // IFS
    static constexpr uint32_t SR3_ILS = 0x2; // ILS
    static constexpr uint32_t SR3_IRS = 0x1; // IRS

    static constexpr uint32_t PMEM3_RESET_VALUE = 0xfcfcfcfc; // Reset value
    typedef bit_field_t<24, 0xff> PMEM3_MEMHIZX; // MEMHIZx
    typedef bit_field_t<16, 0xff> PMEM3_MEMHOLDX; // MEMHOLDx
    typedef bit_field_t<8, 0xff> PMEM3_MEMWAITX; // MEMWAITx
    typedef bit_field_t<0, 0xff> PMEM3_MEMSETX; // MEMSETx

    static constexpr uint32_t PATT3_RESET_VALUE = 0xfcfcfcfc; // Reset value
    typedef bit_field_t<24, 0xff> PATT3_ATTHIZX; // ATTHIZx
    typedef bit_field_t<16, 0xff> PATT3_ATTHOLDX; // ATTHOLDx
    typedef bit_field_t<8, 0xff> PATT3_ATTWAITX; // ATTWAITx
    typedef bit_field_t<0, 0xff> PATT3_ATTSETX; // ATTSETx


    static constexpr uint32_t ECCR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ECCR3_ECCX; // ECCx


    static constexpr uint32_t PCR4_RESET_VALUE = 0x18; // Reset value
    typedef bit_field_t<17, 0x7> PCR4_ECCPS; // ECCPS
    typedef bit_field_t<13, 0xf> PCR4_TAR; // TAR
    typedef bit_field_t<9, 0xf> PCR4_TCLR; // TCLR
    static constexpr uint32_t PCR4_ECCEN = 0x40; // ECCEN
    typedef bit_field_t<4, 0x3> PCR4_PWID; // PWID
    static constexpr uint32_t PCR4_PTYP = 0x8; // PTYP
    static constexpr uint32_t PCR4_PBKEN = 0x4; // PBKEN
    static constexpr uint32_t PCR4_PWAITEN = 0x2; // PWAITEN

    static constexpr uint32_t SR4_RESET_VALUE = 0x40; // Reset value
    static constexpr uint32_t SR4_FEMPT = 0x40; // FEMPT
    static constexpr uint32_t SR4_IFEN = 0x20; // IFEN
    static constexpr uint32_t SR4_ILEN = 0x10; // ILEN
    static constexpr uint32_t SR4_IREN = 0x8; // IREN
    static constexpr uint32_t SR4_IFS = 0x4; // IFS
    static constexpr uint32_t SR4_ILS = 0x2; // ILS
    static constexpr uint32_t SR4_IRS = 0x1; // IRS

    static constexpr uint32_t PMEM4_RESET_VALUE = 0xfcfcfcfc; // Reset value
    typedef bit_field_t<24, 0xff> PMEM4_MEMHIZX; // MEMHIZx
    typedef bit_field_t<16, 0xff> PMEM4_MEMHOLDX; // MEMHOLDx
    typedef bit_field_t<8, 0xff> PMEM4_MEMWAITX; // MEMWAITx
    typedef bit_field_t<0, 0xff> PMEM4_MEMSETX; // MEMSETx

    static constexpr uint32_t PATT4_RESET_VALUE = 0xfcfcfcfc; // Reset value
    typedef bit_field_t<24, 0xff> PATT4_ATTHIZX; // ATTHIZx
    typedef bit_field_t<16, 0xff> PATT4_ATTHOLDX; // ATTHOLDx
    typedef bit_field_t<8, 0xff> PATT4_ATTWAITX; // ATTWAITx
    typedef bit_field_t<0, 0xff> PATT4_ATTSETX; // ATTSETx

    static constexpr uint32_t PIO4_RESET_VALUE = 0xfcfcfcfc; // Reset value
    typedef bit_field_t<24, 0xff> PIO4_IOHIZX; // IOHIZx
    typedef bit_field_t<16, 0xff> PIO4_IOHOLDX; // IOHOLDx
    typedef bit_field_t<8, 0xff> PIO4_IOWAITX; // IOWAITx
    typedef bit_field_t<0, 0xff> PIO4_IOSETX; // IOSETx


    static constexpr uint32_t BWTR1_RESET_VALUE = 0xfffffff; // Reset value
    typedef bit_field_t<28, 0x3> BWTR1_ACCMOD; // ACCMOD
    typedef bit_field_t<4, 0xf> BWTR1_ADDHLD; // ADDHLD
    typedef bit_field_t<0, 0xf> BWTR1_ADDSET; // ADDSET
    typedef bit_field_t<20, 0xf> BWTR1_CLKDIV; // CLKDIV
    typedef bit_field_t<8, 0xff> BWTR1_DATAST; // DATAST
    typedef bit_field_t<24, 0xf> BWTR1_DATLAT; // DATLAT


    static constexpr uint32_t BWTR2_RESET_VALUE = 0xfffffff; // Reset value
    typedef bit_field_t<28, 0x3> BWTR2_ACCMOD; // ACCMOD
    typedef bit_field_t<4, 0xf> BWTR2_ADDHLD; // ADDHLD
    typedef bit_field_t<0, 0xf> BWTR2_ADDSET; // ADDSET
    typedef bit_field_t<20, 0xf> BWTR2_CLKDIV; // CLKDIV
    typedef bit_field_t<8, 0xff> BWTR2_DATAST; // DATAST
    typedef bit_field_t<24, 0xf> BWTR2_DATLAT; // DATLAT


    static constexpr uint32_t SDCR1_RESET_VALUE = 0x2d0; // Reset value
    typedef bit_field_t<0, 0x3> SDCR1_NC; // Number of column address bits
    typedef bit_field_t<2, 0x3> SDCR1_NR; // Number of row address bits
    typedef bit_field_t<4, 0x3> SDCR1_MWID; // Memory data bus width
    static constexpr uint32_t SDCR1_NB = 0x40; // Number of internal banks
    typedef bit_field_t<7, 0x3> SDCR1_CAS; // CAS latency
    static constexpr uint32_t SDCR1_WP = 0x200; // Write protection
    typedef bit_field_t<10, 0x3> SDCR1_SDCLK; // SDRAM clock configuration
    static constexpr uint32_t SDCR1_RBURST = 0x1000; // Burst read
    typedef bit_field_t<13, 0x3> SDCR1_RPIPE; // Read pipe

    static constexpr uint32_t SDCR2_RESET_VALUE = 0x2d0; // Reset value
    typedef bit_field_t<0, 0x3> SDCR2_NC; // Number of column address bits
    typedef bit_field_t<2, 0x3> SDCR2_NR; // Number of row address bits
    typedef bit_field_t<4, 0x3> SDCR2_MWID; // Memory data bus width
    static constexpr uint32_t SDCR2_NB = 0x40; // Number of internal banks
    typedef bit_field_t<7, 0x3> SDCR2_CAS; // CAS latency
    static constexpr uint32_t SDCR2_WP = 0x200; // Write protection
    typedef bit_field_t<10, 0x3> SDCR2_SDCLK; // SDRAM clock configuration
    static constexpr uint32_t SDCR2_RBURST = 0x1000; // Burst read
    typedef bit_field_t<13, 0x3> SDCR2_RPIPE; // Read pipe

    static constexpr uint32_t SDTR1_RESET_VALUE = 0xfffffff; // Reset value
    typedef bit_field_t<0, 0xf> SDTR1_TMRD; // Load Mode Register to Active
    typedef bit_field_t<4, 0xf> SDTR1_TXSR; // Exit self-refresh delay
    typedef bit_field_t<8, 0xf> SDTR1_TRAS; // Self refresh time
    typedef bit_field_t<12, 0xf> SDTR1_TRC; // Row cycle delay
    typedef bit_field_t<16, 0xf> SDTR1_TWR; // Recovery delay
    typedef bit_field_t<20, 0xf> SDTR1_TRP; // Row precharge delay
    typedef bit_field_t<24, 0xf> SDTR1_TRCD; // Row to column delay

    static constexpr uint32_t SDTR2_RESET_VALUE = 0xfffffff; // Reset value
    typedef bit_field_t<0, 0xf> SDTR2_TMRD; // Load Mode Register to Active
    typedef bit_field_t<4, 0xf> SDTR2_TXSR; // Exit self-refresh delay
    typedef bit_field_t<8, 0xf> SDTR2_TRAS; // Self refresh time
    typedef bit_field_t<12, 0xf> SDTR2_TRC; // Row cycle delay
    typedef bit_field_t<16, 0xf> SDTR2_TWR; // Recovery delay
    typedef bit_field_t<20, 0xf> SDTR2_TRP; // Row precharge delay
    typedef bit_field_t<24, 0xf> SDTR2_TRCD; // Row to column delay

    static constexpr uint32_t SDCMR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> SDCMR_MODE; // Command mode
    static constexpr uint32_t SDCMR_CTB2 = 0x8; // Command target bank 2
    static constexpr uint32_t SDCMR_CTB1 = 0x10; // Command target bank 1
    typedef bit_field_t<5, 0xf> SDCMR_NRFS; // Number of Auto-refresh
    typedef bit_field_t<9, 0x1fff> SDCMR_MRD; // Mode Register definition

    static constexpr uint32_t SDRTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SDRTR_CRE = 0x1; // Clear Refresh error flag
    typedef bit_field_t<1, 0x1fff> SDRTR_COUNT; // Refresh Timer Count
    static constexpr uint32_t SDRTR_REIE = 0x4000; // RES Interrupt Enable

    static constexpr uint32_t SDSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SDSR_RE = 0x1; // Refresh error flag
    typedef bit_field_t<1, 0x3> SDSR_MODES1; // Status Mode for Bank 1
    typedef bit_field_t<3, 0x3> SDSR_MODES2; // Status Mode for Bank 2
    static constexpr uint32_t SDSR_BUSY = 0x20; // Busy status
};

// FMC: Flexible memory controller

struct stm32f446_fmc_t
{
    volatile uint32_t BCR1; // SRAM/NOR-Flash chip-select control register 1
    volatile uint32_t BTR1; // SRAM/NOR-Flash chip-select timing register 1
    volatile uint32_t BCR2; // SRAM/NOR-Flash chip-select control register 2
    volatile uint32_t BTR2; // SRAM/NOR-Flash chip-select timing register 2
    volatile uint32_t BCR3; // SRAM/NOR-Flash chip-select control register 3
    volatile uint32_t BTR3; // SRAM/NOR-Flash chip-select timing register 3
    volatile uint32_t BCR4; // SRAM/NOR-Flash chip-select control register 4
    volatile uint32_t BTR4; // SRAM/NOR-Flash chip-select timing register 4
    reserved_t<0x10> _0x20;
    volatile uint32_t PCR2; // PC Card/NAND Flash control register 2
    volatile uint32_t SR2; // FIFO status and interrupt register 2
    volatile uint32_t PMEM2; // Common memory space timing register 2
    volatile uint32_t PATT2; // Attribute memory space timing register 2
    reserved_t<0x1> _0x70;
    volatile uint32_t ECCR2; // ECC result register 2
    reserved_t<0x2> _0x78;
    volatile uint32_t PCR3; // PC Card/NAND Flash control register 3
    volatile uint32_t SR3; // FIFO status and interrupt register 3
    volatile uint32_t PMEM3; // Common memory space timing register 3
    volatile uint32_t PATT3; // Attribute memory space timing register 3
    reserved_t<0x1> _0x90;
    volatile uint32_t ECCR3; // ECC result register 3
    reserved_t<0x2> _0x98;
    volatile uint32_t PCR4; // PC Card/NAND Flash control register 4
    volatile uint32_t SR4; // FIFO status and interrupt register 4
    volatile uint32_t PMEM4; // Common memory space timing register 4
    volatile uint32_t PATT4; // Attribute memory space timing register 4
    volatile uint32_t PIO4; // I/O space timing register 4
    reserved_t<0x14> _0xb4;
    volatile uint32_t BWTR1; // SRAM/NOR-Flash write timing registers 1
    reserved_t<0x1> _0x108;
    volatile uint32_t BWTR2; // SRAM/NOR-Flash write timing registers 2
    reserved_t<0x1> _0x110;
    volatile uint32_t BWTR3; // SRAM/NOR-Flash write timing registers 3
    reserved_t<0x1> _0x118;
    volatile uint32_t BWTR4; // SRAM/NOR-Flash write timing registers 4
    reserved_t<0x8> _0x120;
    volatile uint32_t SDCR1; // SDRAM Control Register 1
    volatile uint32_t SDCR2; // SDRAM Control Register 2
    volatile uint32_t SDTR1; // SDRAM Timing register 1
    volatile uint32_t SDTR2; // SDRAM Timing register 2
    volatile uint32_t SDCMR; // SDRAM Command Mode register
    volatile uint32_t SDRTR; // SDRAM Refresh Timer register
    volatile uint32_t SDSR; // SDRAM Status register

    static constexpr uint32_t BCR1_RESET_VALUE = 0x30d0; // Reset value
    static constexpr uint32_t BCR1_CCLKEN = 0x100000; // CCLKEN
    static constexpr uint32_t BCR1_CBURSTRW = 0x80000; // CBURSTRW
    static constexpr uint32_t BCR1_ASYNCWAIT = 0x8000; // ASYNCWAIT
    static constexpr uint32_t BCR1_EXTMOD = 0x4000; // EXTMOD
    static constexpr uint32_t BCR1_WAITEN = 0x2000; // WAITEN
    static constexpr uint32_t BCR1_WREN = 0x1000; // WREN
    static constexpr uint32_t BCR1_WAITCFG = 0x800; // WAITCFG
    static constexpr uint32_t BCR1_WAITPOL = 0x200; // WAITPOL
    static constexpr uint32_t BCR1_BURSTEN = 0x100; // BURSTEN
    static constexpr uint32_t BCR1_FACCEN = 0x40; // FACCEN
    typedef bit_field_t<4, 0x3> BCR1_MWID; // MWID
    typedef bit_field_t<2, 0x3> BCR1_MTYP; // MTYP
    static constexpr uint32_t BCR1_MUXEN = 0x2; // MUXEN
    static constexpr uint32_t BCR1_MBKEN = 0x1; // MBKEN

    static constexpr uint32_t BTR1_RESET_VALUE = 0xffffffff; // Reset value
    typedef bit_field_t<28, 0x3> BTR1_ACCMOD; // ACCMOD
    typedef bit_field_t<24, 0xf> BTR1_DATLAT; // DATLAT
    typedef bit_field_t<20, 0xf> BTR1_CLKDIV; // CLKDIV
    typedef bit_field_t<16, 0xf> BTR1_BUSTURN; // BUSTURN
    typedef bit_field_t<8, 0xff> BTR1_DATAST; // DATAST
    typedef bit_field_t<4, 0xf> BTR1_ADDHLD; // ADDHLD
    typedef bit_field_t<0, 0xf> BTR1_ADDSET; // ADDSET

    static constexpr uint32_t BCR2_RESET_VALUE = 0x30d0; // Reset value
    static constexpr uint32_t BCR2_CBURSTRW = 0x80000; // CBURSTRW
    static constexpr uint32_t BCR2_ASYNCWAIT = 0x8000; // ASYNCWAIT
    static constexpr uint32_t BCR2_EXTMOD = 0x4000; // EXTMOD
    static constexpr uint32_t BCR2_WAITEN = 0x2000; // WAITEN
    static constexpr uint32_t BCR2_WREN = 0x1000; // WREN
    static constexpr uint32_t BCR2_WAITCFG = 0x800; // WAITCFG
    static constexpr uint32_t BCR2_WRAPMOD = 0x400; // WRAPMOD
    static constexpr uint32_t BCR2_WAITPOL = 0x200; // WAITPOL
    static constexpr uint32_t BCR2_BURSTEN = 0x100; // BURSTEN
    static constexpr uint32_t BCR2_FACCEN = 0x40; // FACCEN
    typedef bit_field_t<4, 0x3> BCR2_MWID; // MWID
    typedef bit_field_t<2, 0x3> BCR2_MTYP; // MTYP
    static constexpr uint32_t BCR2_MUXEN = 0x2; // MUXEN
    static constexpr uint32_t BCR2_MBKEN = 0x1; // MBKEN

    static constexpr uint32_t BTR2_RESET_VALUE = 0xffffffff; // Reset value
    typedef bit_field_t<28, 0x3> BTR2_ACCMOD; // ACCMOD
    typedef bit_field_t<24, 0xf> BTR2_DATLAT; // DATLAT
    typedef bit_field_t<20, 0xf> BTR2_CLKDIV; // CLKDIV
    typedef bit_field_t<16, 0xf> BTR2_BUSTURN; // BUSTURN
    typedef bit_field_t<8, 0xff> BTR2_DATAST; // DATAST
    typedef bit_field_t<4, 0xf> BTR2_ADDHLD; // ADDHLD
    typedef bit_field_t<0, 0xf> BTR2_ADDSET; // ADDSET

    static constexpr uint32_t BCR3_RESET_VALUE = 0x30d0; // Reset value
    static constexpr uint32_t BCR3_CBURSTRW = 0x80000; // CBURSTRW
    static constexpr uint32_t BCR3_ASYNCWAIT = 0x8000; // ASYNCWAIT
    static constexpr uint32_t BCR3_EXTMOD = 0x4000; // EXTMOD
    static constexpr uint32_t BCR3_WAITEN = 0x2000; // WAITEN
    static constexpr uint32_t BCR3_WREN = 0x1000; // WREN
    static constexpr uint32_t BCR3_WAITCFG = 0x800; // WAITCFG
    static constexpr uint32_t BCR3_WRAPMOD = 0x400; // WRAPMOD
    static constexpr uint32_t BCR3_WAITPOL = 0x200; // WAITPOL
    static constexpr uint32_t BCR3_BURSTEN = 0x100; // BURSTEN
    static constexpr uint32_t BCR3_FACCEN = 0x40; // FACCEN
    typedef bit_field_t<4, 0x3> BCR3_MWID; // MWID
    typedef bit_field_t<2, 0x3> BCR3_MTYP; // MTYP
    static constexpr uint32_t BCR3_MUXEN = 0x2; // MUXEN
    static constexpr uint32_t BCR3_MBKEN = 0x1; // MBKEN

    static constexpr uint32_t BTR3_RESET_VALUE = 0xffffffff; // Reset value
    typedef bit_field_t<28, 0x3> BTR3_ACCMOD; // ACCMOD
    typedef bit_field_t<24, 0xf> BTR3_DATLAT; // DATLAT
    typedef bit_field_t<20, 0xf> BTR3_CLKDIV; // CLKDIV
    typedef bit_field_t<16, 0xf> BTR3_BUSTURN; // BUSTURN
    typedef bit_field_t<8, 0xff> BTR3_DATAST; // DATAST
    typedef bit_field_t<4, 0xf> BTR3_ADDHLD; // ADDHLD
    typedef bit_field_t<0, 0xf> BTR3_ADDSET; // ADDSET

    static constexpr uint32_t BCR4_RESET_VALUE = 0x30d0; // Reset value
    static constexpr uint32_t BCR4_CBURSTRW = 0x80000; // CBURSTRW
    static constexpr uint32_t BCR4_ASYNCWAIT = 0x8000; // ASYNCWAIT
    static constexpr uint32_t BCR4_EXTMOD = 0x4000; // EXTMOD
    static constexpr uint32_t BCR4_WAITEN = 0x2000; // WAITEN
    static constexpr uint32_t BCR4_WREN = 0x1000; // WREN
    static constexpr uint32_t BCR4_WAITCFG = 0x800; // WAITCFG
    static constexpr uint32_t BCR4_WRAPMOD = 0x400; // WRAPMOD
    static constexpr uint32_t BCR4_WAITPOL = 0x200; // WAITPOL
    static constexpr uint32_t BCR4_BURSTEN = 0x100; // BURSTEN
    static constexpr uint32_t BCR4_FACCEN = 0x40; // FACCEN
    typedef bit_field_t<4, 0x3> BCR4_MWID; // MWID
    typedef bit_field_t<2, 0x3> BCR4_MTYP; // MTYP
    static constexpr uint32_t BCR4_MUXEN = 0x2; // MUXEN
    static constexpr uint32_t BCR4_MBKEN = 0x1; // MBKEN

    static constexpr uint32_t BTR4_RESET_VALUE = 0xffffffff; // Reset value
    typedef bit_field_t<28, 0x3> BTR4_ACCMOD; // ACCMOD
    typedef bit_field_t<24, 0xf> BTR4_DATLAT; // DATLAT
    typedef bit_field_t<20, 0xf> BTR4_CLKDIV; // CLKDIV
    typedef bit_field_t<16, 0xf> BTR4_BUSTURN; // BUSTURN
    typedef bit_field_t<8, 0xff> BTR4_DATAST; // DATAST
    typedef bit_field_t<4, 0xf> BTR4_ADDHLD; // ADDHLD
    typedef bit_field_t<0, 0xf> BTR4_ADDSET; // ADDSET


    static constexpr uint32_t PCR2_RESET_VALUE = 0x18; // Reset value
    typedef bit_field_t<17, 0x7> PCR2_ECCPS; // ECCPS
    typedef bit_field_t<13, 0xf> PCR2_TAR; // TAR
    typedef bit_field_t<9, 0xf> PCR2_TCLR; // TCLR
    static constexpr uint32_t PCR2_ECCEN = 0x40; // ECCEN
    typedef bit_field_t<4, 0x3> PCR2_PWID; // PWID
    static constexpr uint32_t PCR2_PTYP = 0x8; // PTYP
    static constexpr uint32_t PCR2_PBKEN = 0x4; // PBKEN
    static constexpr uint32_t PCR2_PWAITEN = 0x2; // PWAITEN

    static constexpr uint32_t SR2_RESET_VALUE = 0x40; // Reset value
    static constexpr uint32_t SR2_FEMPT = 0x40; // FEMPT
    static constexpr uint32_t SR2_IFEN = 0x20; // IFEN
    static constexpr uint32_t SR2_ILEN = 0x10; // ILEN
    static constexpr uint32_t SR2_IREN = 0x8; // IREN
    static constexpr uint32_t SR2_IFS = 0x4; // IFS
    static constexpr uint32_t SR2_ILS = 0x2; // ILS
    static constexpr uint32_t SR2_IRS = 0x1; // IRS

    static constexpr uint32_t PMEM2_RESET_VALUE = 0xfcfcfcfc; // Reset value
    typedef bit_field_t<24, 0xff> PMEM2_MEMHIZX; // MEMHIZx
    typedef bit_field_t<16, 0xff> PMEM2_MEMHOLDX; // MEMHOLDx
    typedef bit_field_t<8, 0xff> PMEM2_MEMWAITX; // MEMWAITx
    typedef bit_field_t<0, 0xff> PMEM2_MEMSETX; // MEMSETx

    static constexpr uint32_t PATT2_RESET_VALUE = 0xfcfcfcfc; // Reset value
    typedef bit_field_t<24, 0xff> PATT2_ATTHIZX; // ATTHIZx
    typedef bit_field_t<16, 0xff> PATT2_ATTHOLDX; // ATTHOLDx
    typedef bit_field_t<8, 0xff> PATT2_ATTWAITX; // ATTWAITx
    typedef bit_field_t<0, 0xff> PATT2_ATTSETX; // ATTSETx


    static constexpr uint32_t ECCR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ECCR2_ECCX; // ECCx


    static constexpr uint32_t PCR3_RESET_VALUE = 0x18; // Reset value
    typedef bit_field_t<17, 0x7> PCR3_ECCPS; // ECCPS
    typedef bit_field_t<13, 0xf> PCR3_TAR; // TAR
    typedef bit_field_t<9, 0xf> PCR3_TCLR; // TCLR
    static constexpr uint32_t PCR3_ECCEN = 0x40; // ECCEN
    typedef bit_field_t<4, 0x3> PCR3_PWID; // PWID
    static constexpr uint32_t PCR3_PTYP = 0x8; // PTYP
    static constexpr uint32_t PCR3_PBKEN = 0x4; // PBKEN
    static constexpr uint32_t PCR3_PWAITEN = 0x2; // PWAITEN

    static constexpr uint32_t SR3_RESET_VALUE = 0x40; // Reset value
    static constexpr uint32_t SR3_FEMPT = 0x40; // FEMPT
    static constexpr uint32_t SR3_IFEN = 0x20; // IFEN
    static constexpr uint32_t SR3_ILEN = 0x10; // ILEN
    static constexpr uint32_t SR3_IREN = 0x8; // IREN
    static constexpr uint32_t SR3_IFS = 0x4; // IFS
    static constexpr uint32_t SR3_ILS = 0x2; // ILS
    static constexpr uint32_t SR3_IRS = 0x1; // IRS

    static constexpr uint32_t PMEM3_RESET_VALUE = 0xfcfcfcfc; // Reset value
    typedef bit_field_t<24, 0xff> PMEM3_MEMHIZX; // MEMHIZx
    typedef bit_field_t<16, 0xff> PMEM3_MEMHOLDX; // MEMHOLDx
    typedef bit_field_t<8, 0xff> PMEM3_MEMWAITX; // MEMWAITx
    typedef bit_field_t<0, 0xff> PMEM3_MEMSETX; // MEMSETx

    static constexpr uint32_t PATT3_RESET_VALUE = 0xfcfcfcfc; // Reset value
    typedef bit_field_t<24, 0xff> PATT3_ATTHIZX; // ATTHIZx
    typedef bit_field_t<16, 0xff> PATT3_ATTHOLDX; // ATTHOLDx
    typedef bit_field_t<8, 0xff> PATT3_ATTWAITX; // ATTWAITx
    typedef bit_field_t<0, 0xff> PATT3_ATTSETX; // ATTSETx


    static constexpr uint32_t ECCR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ECCR3_ECCX; // ECCx


    static constexpr uint32_t PCR4_RESET_VALUE = 0x18; // Reset value
    typedef bit_field_t<17, 0x7> PCR4_ECCPS; // ECCPS
    typedef bit_field_t<13, 0xf> PCR4_TAR; // TAR
    typedef bit_field_t<9, 0xf> PCR4_TCLR; // TCLR
    static constexpr uint32_t PCR4_ECCEN = 0x40; // ECCEN
    typedef bit_field_t<4, 0x3> PCR4_PWID; // PWID
    static constexpr uint32_t PCR4_PTYP = 0x8; // PTYP
    static constexpr uint32_t PCR4_PBKEN = 0x4; // PBKEN
    static constexpr uint32_t PCR4_PWAITEN = 0x2; // PWAITEN

    static constexpr uint32_t SR4_RESET_VALUE = 0x40; // Reset value
    static constexpr uint32_t SR4_FEMPT = 0x40; // FEMPT
    static constexpr uint32_t SR4_IFEN = 0x20; // IFEN
    static constexpr uint32_t SR4_ILEN = 0x10; // ILEN
    static constexpr uint32_t SR4_IREN = 0x8; // IREN
    static constexpr uint32_t SR4_IFS = 0x4; // IFS
    static constexpr uint32_t SR4_ILS = 0x2; // ILS
    static constexpr uint32_t SR4_IRS = 0x1; // IRS

    static constexpr uint32_t PMEM4_RESET_VALUE = 0xfcfcfcfc; // Reset value
    typedef bit_field_t<24, 0xff> PMEM4_MEMHIZX; // MEMHIZx
    typedef bit_field_t<16, 0xff> PMEM4_MEMHOLDX; // MEMHOLDx
    typedef bit_field_t<8, 0xff> PMEM4_MEMWAITX; // MEMWAITx
    typedef bit_field_t<0, 0xff> PMEM4_MEMSETX; // MEMSETx

    static constexpr uint32_t PATT4_RESET_VALUE = 0xfcfcfcfc; // Reset value
    typedef bit_field_t<24, 0xff> PATT4_ATTHIZX; // ATTHIZx
    typedef bit_field_t<16, 0xff> PATT4_ATTHOLDX; // ATTHOLDx
    typedef bit_field_t<8, 0xff> PATT4_ATTWAITX; // ATTWAITx
    typedef bit_field_t<0, 0xff> PATT4_ATTSETX; // ATTSETx

    static constexpr uint32_t PIO4_RESET_VALUE = 0xfcfcfcfc; // Reset value
    typedef bit_field_t<24, 0xff> PIO4_IOHIZX; // IOHIZx
    typedef bit_field_t<16, 0xff> PIO4_IOHOLDX; // IOHOLDx
    typedef bit_field_t<8, 0xff> PIO4_IOWAITX; // IOWAITx
    typedef bit_field_t<0, 0xff> PIO4_IOSETX; // IOSETx


    static constexpr uint32_t BWTR1_RESET_VALUE = 0xfffffff; // Reset value
    typedef bit_field_t<28, 0x3> BWTR1_ACCMOD; // ACCMOD
    typedef bit_field_t<24, 0xf> BWTR1_DATLAT; // DATLAT
    typedef bit_field_t<20, 0xf> BWTR1_CLKDIV; // CLKDIV
    typedef bit_field_t<8, 0xff> BWTR1_DATAST; // DATAST
    typedef bit_field_t<4, 0xf> BWTR1_ADDHLD; // ADDHLD
    typedef bit_field_t<0, 0xf> BWTR1_ADDSET; // ADDSET


    static constexpr uint32_t BWTR2_RESET_VALUE = 0xfffffff; // Reset value
    typedef bit_field_t<28, 0x3> BWTR2_ACCMOD; // ACCMOD
    typedef bit_field_t<24, 0xf> BWTR2_DATLAT; // DATLAT
    typedef bit_field_t<20, 0xf> BWTR2_CLKDIV; // CLKDIV
    typedef bit_field_t<8, 0xff> BWTR2_DATAST; // DATAST
    typedef bit_field_t<4, 0xf> BWTR2_ADDHLD; // ADDHLD
    typedef bit_field_t<0, 0xf> BWTR2_ADDSET; // ADDSET


    static constexpr uint32_t BWTR3_RESET_VALUE = 0xfffffff; // Reset value
    typedef bit_field_t<28, 0x3> BWTR3_ACCMOD; // ACCMOD
    typedef bit_field_t<24, 0xf> BWTR3_DATLAT; // DATLAT
    typedef bit_field_t<20, 0xf> BWTR3_CLKDIV; // CLKDIV
    typedef bit_field_t<8, 0xff> BWTR3_DATAST; // DATAST
    typedef bit_field_t<4, 0xf> BWTR3_ADDHLD; // ADDHLD
    typedef bit_field_t<0, 0xf> BWTR3_ADDSET; // ADDSET


    static constexpr uint32_t BWTR4_RESET_VALUE = 0xfffffff; // Reset value
    typedef bit_field_t<28, 0x3> BWTR4_ACCMOD; // ACCMOD
    typedef bit_field_t<24, 0xf> BWTR4_DATLAT; // DATLAT
    typedef bit_field_t<20, 0xf> BWTR4_CLKDIV; // CLKDIV
    typedef bit_field_t<8, 0xff> BWTR4_DATAST; // DATAST
    typedef bit_field_t<4, 0xf> BWTR4_ADDHLD; // ADDHLD
    typedef bit_field_t<0, 0xf> BWTR4_ADDSET; // ADDSET


    static constexpr uint32_t SDCR1_RESET_VALUE = 0x2d0; // Reset value
    typedef bit_field_t<0, 0x3> SDCR1_NC; // Number of column address bits
    typedef bit_field_t<2, 0x3> SDCR1_NR; // Number of row address bits
    typedef bit_field_t<4, 0x3> SDCR1_MWID; // Memory data bus width
    static constexpr uint32_t SDCR1_NB = 0x40; // Number of internal banks
    typedef bit_field_t<7, 0x3> SDCR1_CAS; // CAS latency
    static constexpr uint32_t SDCR1_WP = 0x200; // Write protection
    typedef bit_field_t<10, 0x3> SDCR1_SDCLK; // SDRAM clock configuration
    static constexpr uint32_t SDCR1_RBURST = 0x1000; // Burst read
    typedef bit_field_t<13, 0x3> SDCR1_RPIPE; // Read pipe

    static constexpr uint32_t SDCR2_RESET_VALUE = 0x2d0; // Reset value
    typedef bit_field_t<0, 0x3> SDCR2_NC; // Number of column address bits
    typedef bit_field_t<2, 0x3> SDCR2_NR; // Number of row address bits
    typedef bit_field_t<4, 0x3> SDCR2_MWID; // Memory data bus width
    static constexpr uint32_t SDCR2_NB = 0x40; // Number of internal banks
    typedef bit_field_t<7, 0x3> SDCR2_CAS; // CAS latency
    static constexpr uint32_t SDCR2_WP = 0x200; // Write protection
    typedef bit_field_t<10, 0x3> SDCR2_SDCLK; // SDRAM clock configuration
    static constexpr uint32_t SDCR2_RBURST = 0x1000; // Burst read
    typedef bit_field_t<13, 0x3> SDCR2_RPIPE; // Read pipe

    static constexpr uint32_t SDTR1_RESET_VALUE = 0xfffffff; // Reset value
    typedef bit_field_t<0, 0xf> SDTR1_TMRD; // Load Mode Register to Active
    typedef bit_field_t<4, 0xf> SDTR1_TXSR; // Exit self-refresh delay
    typedef bit_field_t<8, 0xf> SDTR1_TRAS; // Self refresh time
    typedef bit_field_t<12, 0xf> SDTR1_TRC; // Row cycle delay
    typedef bit_field_t<16, 0xf> SDTR1_TWR; // Recovery delay
    typedef bit_field_t<20, 0xf> SDTR1_TRP; // Row precharge delay
    typedef bit_field_t<24, 0xf> SDTR1_TRCD; // Row to column delay

    static constexpr uint32_t SDTR2_RESET_VALUE = 0xfffffff; // Reset value
    typedef bit_field_t<0, 0xf> SDTR2_TMRD; // Load Mode Register to Active
    typedef bit_field_t<4, 0xf> SDTR2_TXSR; // Exit self-refresh delay
    typedef bit_field_t<8, 0xf> SDTR2_TRAS; // Self refresh time
    typedef bit_field_t<12, 0xf> SDTR2_TRC; // Row cycle delay
    typedef bit_field_t<16, 0xf> SDTR2_TWR; // Recovery delay
    typedef bit_field_t<20, 0xf> SDTR2_TRP; // Row precharge delay
    typedef bit_field_t<24, 0xf> SDTR2_TRCD; // Row to column delay

    static constexpr uint32_t SDCMR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> SDCMR_MODE; // Command mode
    static constexpr uint32_t SDCMR_CTB2 = 0x8; // Command target bank 2
    static constexpr uint32_t SDCMR_CTB1 = 0x10; // Command target bank 1
    typedef bit_field_t<5, 0xf> SDCMR_NRFS; // Number of Auto-refresh
    typedef bit_field_t<9, 0x1fff> SDCMR_MRD; // Mode Register definition

    static constexpr uint32_t SDRTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SDRTR_CRE = 0x1; // Clear Refresh error flag
    typedef bit_field_t<1, 0x1fff> SDRTR_COUNT; // Refresh Timer Count
    static constexpr uint32_t SDRTR_REIE = 0x4000; // RES Interrupt Enable

    static constexpr uint32_t SDSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SDSR_RE = 0x1; // Refresh error flag
    typedef bit_field_t<1, 0x3> SDSR_MODES1; // Status Mode for Bank 1
    typedef bit_field_t<3, 0x3> SDSR_MODES2; // Status Mode for Bank 2
    static constexpr uint32_t SDSR_BUSY = 0x20; // Busy status
};

// FMC: Flexible memory controller

struct stm32f469_fmc_t
{
    volatile uint32_t BCR1; // SRAM/NOR-Flash chip-select control register 1
    volatile uint32_t BTR1; // SRAM/NOR-Flash chip-select timing register 1
    volatile uint32_t BCR2; // SRAM/NOR-Flash chip-select control register 2
    volatile uint32_t BTR2; // SRAM/NOR-Flash chip-select timing register 2
    volatile uint32_t BCR3; // SRAM/NOR-Flash chip-select control register 3
    volatile uint32_t BTR3; // SRAM/NOR-Flash chip-select timing register 3
    volatile uint32_t BCR4; // SRAM/NOR-Flash chip-select control register 4
    volatile uint32_t BTR4; // SRAM/NOR-Flash chip-select timing register 4
    reserved_t<0x18> _0x20;
    volatile uint32_t PCR; // PC Card/NAND Flash control register 3
    volatile uint32_t SR; // FIFO status and interrupt register 3
    volatile uint32_t PMEM; // Common memory space timing register 3
    volatile uint32_t PATT; // Attribute memory space timing register 3
    reserved_t<0x1> _0x90;
    volatile uint32_t ECCR; // ECC result register 3
    reserved_t<0x1b> _0x98;
    volatile uint32_t BWTR1; // SRAM/NOR-Flash write timing registers 1
    reserved_t<0x1> _0x108;
    volatile uint32_t BWTR2; // SRAM/NOR-Flash write timing registers 2
    reserved_t<0x1> _0x110;
    volatile uint32_t BWTR3; // SRAM/NOR-Flash write timing registers 3
    reserved_t<0x1> _0x118;
    volatile uint32_t BWTR4; // SRAM/NOR-Flash write timing registers 4
    reserved_t<0x8> _0x120;
    volatile uint32_t SDCR1; // SDRAM Control Register 1
    volatile uint32_t SDCR2; // SDRAM Control Register 2
    volatile uint32_t SDTR1; // SDRAM Timing register 1
    volatile uint32_t SDTR2; // SDRAM Timing register 2
    volatile uint32_t SDCMR; // SDRAM Command Mode register
    volatile uint32_t SDRTR; // SDRAM Refresh Timer register
    volatile uint32_t SDSR; // SDRAM Status register

    static constexpr uint32_t BCR1_RESET_VALUE = 0x30d0; // Reset value
    static constexpr uint32_t BCR1_CCLKEN = 0x100000; // CCLKEN
    static constexpr uint32_t BCR1_CBURSTRW = 0x80000; // CBURSTRW
    static constexpr uint32_t BCR1_ASYNCWAIT = 0x8000; // ASYNCWAIT
    static constexpr uint32_t BCR1_EXTMOD = 0x4000; // EXTMOD
    static constexpr uint32_t BCR1_WAITEN = 0x2000; // WAITEN
    static constexpr uint32_t BCR1_WREN = 0x1000; // WREN
    static constexpr uint32_t BCR1_WAITCFG = 0x800; // WAITCFG
    static constexpr uint32_t BCR1_WAITPOL = 0x200; // WAITPOL
    static constexpr uint32_t BCR1_BURSTEN = 0x100; // BURSTEN
    static constexpr uint32_t BCR1_FACCEN = 0x40; // FACCEN
    typedef bit_field_t<4, 0x3> BCR1_MWID; // MWID
    typedef bit_field_t<2, 0x3> BCR1_MTYP; // MTYP
    static constexpr uint32_t BCR1_MUXEN = 0x2; // MUXEN
    static constexpr uint32_t BCR1_MBKEN = 0x1; // MBKEN

    static constexpr uint32_t BTR1_RESET_VALUE = 0xffffffff; // Reset value
    typedef bit_field_t<28, 0x3> BTR1_ACCMOD; // ACCMOD
    typedef bit_field_t<24, 0xf> BTR1_DATLAT; // DATLAT
    typedef bit_field_t<20, 0xf> BTR1_CLKDIV; // CLKDIV
    typedef bit_field_t<16, 0xf> BTR1_BUSTURN; // BUSTURN
    typedef bit_field_t<8, 0xff> BTR1_DATAST; // DATAST
    typedef bit_field_t<4, 0xf> BTR1_ADDHLD; // ADDHLD
    typedef bit_field_t<0, 0xf> BTR1_ADDSET; // ADDSET

    static constexpr uint32_t BCR2_RESET_VALUE = 0x30d0; // Reset value
    static constexpr uint32_t BCR2_CBURSTRW = 0x80000; // CBURSTRW
    static constexpr uint32_t BCR2_ASYNCWAIT = 0x8000; // ASYNCWAIT
    static constexpr uint32_t BCR2_EXTMOD = 0x4000; // EXTMOD
    static constexpr uint32_t BCR2_WAITEN = 0x2000; // WAITEN
    static constexpr uint32_t BCR2_WREN = 0x1000; // WREN
    static constexpr uint32_t BCR2_WAITCFG = 0x800; // WAITCFG
    static constexpr uint32_t BCR2_WRAPMOD = 0x400; // WRAPMOD
    static constexpr uint32_t BCR2_WAITPOL = 0x200; // WAITPOL
    static constexpr uint32_t BCR2_BURSTEN = 0x100; // BURSTEN
    static constexpr uint32_t BCR2_FACCEN = 0x40; // FACCEN
    typedef bit_field_t<4, 0x3> BCR2_MWID; // MWID
    typedef bit_field_t<2, 0x3> BCR2_MTYP; // MTYP
    static constexpr uint32_t BCR2_MUXEN = 0x2; // MUXEN
    static constexpr uint32_t BCR2_MBKEN = 0x1; // MBKEN

    static constexpr uint32_t BTR2_RESET_VALUE = 0xffffffff; // Reset value
    typedef bit_field_t<28, 0x3> BTR2_ACCMOD; // ACCMOD
    typedef bit_field_t<24, 0xf> BTR2_DATLAT; // DATLAT
    typedef bit_field_t<20, 0xf> BTR2_CLKDIV; // CLKDIV
    typedef bit_field_t<16, 0xf> BTR2_BUSTURN; // BUSTURN
    typedef bit_field_t<8, 0xff> BTR2_DATAST; // DATAST
    typedef bit_field_t<4, 0xf> BTR2_ADDHLD; // ADDHLD
    typedef bit_field_t<0, 0xf> BTR2_ADDSET; // ADDSET

    static constexpr uint32_t BCR3_RESET_VALUE = 0x30d0; // Reset value
    static constexpr uint32_t BCR3_CBURSTRW = 0x80000; // CBURSTRW
    static constexpr uint32_t BCR3_ASYNCWAIT = 0x8000; // ASYNCWAIT
    static constexpr uint32_t BCR3_EXTMOD = 0x4000; // EXTMOD
    static constexpr uint32_t BCR3_WAITEN = 0x2000; // WAITEN
    static constexpr uint32_t BCR3_WREN = 0x1000; // WREN
    static constexpr uint32_t BCR3_WAITCFG = 0x800; // WAITCFG
    static constexpr uint32_t BCR3_WRAPMOD = 0x400; // WRAPMOD
    static constexpr uint32_t BCR3_WAITPOL = 0x200; // WAITPOL
    static constexpr uint32_t BCR3_BURSTEN = 0x100; // BURSTEN
    static constexpr uint32_t BCR3_FACCEN = 0x40; // FACCEN
    typedef bit_field_t<4, 0x3> BCR3_MWID; // MWID
    typedef bit_field_t<2, 0x3> BCR3_MTYP; // MTYP
    static constexpr uint32_t BCR3_MUXEN = 0x2; // MUXEN
    static constexpr uint32_t BCR3_MBKEN = 0x1; // MBKEN

    static constexpr uint32_t BTR3_RESET_VALUE = 0xffffffff; // Reset value
    typedef bit_field_t<28, 0x3> BTR3_ACCMOD; // ACCMOD
    typedef bit_field_t<24, 0xf> BTR3_DATLAT; // DATLAT
    typedef bit_field_t<20, 0xf> BTR3_CLKDIV; // CLKDIV
    typedef bit_field_t<16, 0xf> BTR3_BUSTURN; // BUSTURN
    typedef bit_field_t<8, 0xff> BTR3_DATAST; // DATAST
    typedef bit_field_t<4, 0xf> BTR3_ADDHLD; // ADDHLD
    typedef bit_field_t<0, 0xf> BTR3_ADDSET; // ADDSET

    static constexpr uint32_t BCR4_RESET_VALUE = 0x30d0; // Reset value
    static constexpr uint32_t BCR4_CBURSTRW = 0x80000; // CBURSTRW
    static constexpr uint32_t BCR4_ASYNCWAIT = 0x8000; // ASYNCWAIT
    static constexpr uint32_t BCR4_EXTMOD = 0x4000; // EXTMOD
    static constexpr uint32_t BCR4_WAITEN = 0x2000; // WAITEN
    static constexpr uint32_t BCR4_WREN = 0x1000; // WREN
    static constexpr uint32_t BCR4_WAITCFG = 0x800; // WAITCFG
    static constexpr uint32_t BCR4_WRAPMOD = 0x400; // WRAPMOD
    static constexpr uint32_t BCR4_WAITPOL = 0x200; // WAITPOL
    static constexpr uint32_t BCR4_BURSTEN = 0x100; // BURSTEN
    static constexpr uint32_t BCR4_FACCEN = 0x40; // FACCEN
    typedef bit_field_t<4, 0x3> BCR4_MWID; // MWID
    typedef bit_field_t<2, 0x3> BCR4_MTYP; // MTYP
    static constexpr uint32_t BCR4_MUXEN = 0x2; // MUXEN
    static constexpr uint32_t BCR4_MBKEN = 0x1; // MBKEN

    static constexpr uint32_t BTR4_RESET_VALUE = 0xffffffff; // Reset value
    typedef bit_field_t<28, 0x3> BTR4_ACCMOD; // ACCMOD
    typedef bit_field_t<24, 0xf> BTR4_DATLAT; // DATLAT
    typedef bit_field_t<20, 0xf> BTR4_CLKDIV; // CLKDIV
    typedef bit_field_t<16, 0xf> BTR4_BUSTURN; // BUSTURN
    typedef bit_field_t<8, 0xff> BTR4_DATAST; // DATAST
    typedef bit_field_t<4, 0xf> BTR4_ADDHLD; // ADDHLD
    typedef bit_field_t<0, 0xf> BTR4_ADDSET; // ADDSET


    static constexpr uint32_t PCR_RESET_VALUE = 0x18; // Reset value
    typedef bit_field_t<17, 0x7> PCR_ECCPS; // ECCPS
    typedef bit_field_t<13, 0xf> PCR_TAR; // TAR
    typedef bit_field_t<9, 0xf> PCR_TCLR; // TCLR
    static constexpr uint32_t PCR_ECCEN = 0x40; // ECCEN
    typedef bit_field_t<4, 0x3> PCR_PWID; // PWID
    static constexpr uint32_t PCR_PTYP = 0x8; // PTYP
    static constexpr uint32_t PCR_PBKEN = 0x4; // PBKEN
    static constexpr uint32_t PCR_PWAITEN = 0x2; // PWAITEN

    static constexpr uint32_t SR_RESET_VALUE = 0x40; // Reset value
    static constexpr uint32_t SR_FEMPT = 0x40; // FEMPT
    static constexpr uint32_t SR_IFEN = 0x20; // IFEN
    static constexpr uint32_t SR_ILEN = 0x10; // ILEN
    static constexpr uint32_t SR_IREN = 0x8; // IREN
    static constexpr uint32_t SR_IFS = 0x4; // IFS
    static constexpr uint32_t SR_ILS = 0x2; // ILS
    static constexpr uint32_t SR_IRS = 0x1; // IRS

    static constexpr uint32_t PMEM_RESET_VALUE = 0xfcfcfcfc; // Reset value
    typedef bit_field_t<24, 0xff> PMEM_MEMHIZX; // MEMHIZx
    typedef bit_field_t<16, 0xff> PMEM_MEMHOLDX; // MEMHOLDx
    typedef bit_field_t<8, 0xff> PMEM_MEMWAITX; // MEMWAITx
    typedef bit_field_t<0, 0xff> PMEM_MEMSETX; // MEMSETx

    static constexpr uint32_t PATT_RESET_VALUE = 0xfcfcfcfc; // Reset value
    typedef bit_field_t<24, 0xff> PATT_ATTHIZX; // ATTHIZx
    typedef bit_field_t<16, 0xff> PATT_ATTHOLDX; // ATTHOLDx
    typedef bit_field_t<8, 0xff> PATT_ATTWAITX; // ATTWAITx
    typedef bit_field_t<0, 0xff> PATT_ATTSETX; // ATTSETx


    static constexpr uint32_t ECCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ECCR_ECCX; // ECCx


    static constexpr uint32_t BWTR1_RESET_VALUE = 0xfffffff; // Reset value
    typedef bit_field_t<28, 0x3> BWTR1_ACCMOD; // ACCMOD
    typedef bit_field_t<24, 0xf> BWTR1_DATLAT; // DATLAT
    typedef bit_field_t<20, 0xf> BWTR1_CLKDIV; // CLKDIV
    typedef bit_field_t<8, 0xff> BWTR1_DATAST; // DATAST
    typedef bit_field_t<4, 0xf> BWTR1_ADDHLD; // ADDHLD
    typedef bit_field_t<0, 0xf> BWTR1_ADDSET; // ADDSET


    static constexpr uint32_t BWTR2_RESET_VALUE = 0xfffffff; // Reset value
    typedef bit_field_t<28, 0x3> BWTR2_ACCMOD; // ACCMOD
    typedef bit_field_t<24, 0xf> BWTR2_DATLAT; // DATLAT
    typedef bit_field_t<20, 0xf> BWTR2_CLKDIV; // CLKDIV
    typedef bit_field_t<8, 0xff> BWTR2_DATAST; // DATAST
    typedef bit_field_t<4, 0xf> BWTR2_ADDHLD; // ADDHLD
    typedef bit_field_t<0, 0xf> BWTR2_ADDSET; // ADDSET


    static constexpr uint32_t BWTR3_RESET_VALUE = 0xfffffff; // Reset value
    typedef bit_field_t<28, 0x3> BWTR3_ACCMOD; // ACCMOD
    typedef bit_field_t<24, 0xf> BWTR3_DATLAT; // DATLAT
    typedef bit_field_t<20, 0xf> BWTR3_CLKDIV; // CLKDIV
    typedef bit_field_t<8, 0xff> BWTR3_DATAST; // DATAST
    typedef bit_field_t<4, 0xf> BWTR3_ADDHLD; // ADDHLD
    typedef bit_field_t<0, 0xf> BWTR3_ADDSET; // ADDSET


    static constexpr uint32_t BWTR4_RESET_VALUE = 0xfffffff; // Reset value
    typedef bit_field_t<28, 0x3> BWTR4_ACCMOD; // ACCMOD
    typedef bit_field_t<24, 0xf> BWTR4_DATLAT; // DATLAT
    typedef bit_field_t<20, 0xf> BWTR4_CLKDIV; // CLKDIV
    typedef bit_field_t<8, 0xff> BWTR4_DATAST; // DATAST
    typedef bit_field_t<4, 0xf> BWTR4_ADDHLD; // ADDHLD
    typedef bit_field_t<0, 0xf> BWTR4_ADDSET; // ADDSET


    static constexpr uint32_t SDCR1_RESET_VALUE = 0x2d0; // Reset value
    typedef bit_field_t<0, 0x3> SDCR1_NC; // Number of column address bits
    typedef bit_field_t<2, 0x3> SDCR1_NR; // Number of row address bits
    typedef bit_field_t<4, 0x3> SDCR1_MWID; // Memory data bus width
    static constexpr uint32_t SDCR1_NB = 0x40; // Number of internal banks
    typedef bit_field_t<7, 0x3> SDCR1_CAS; // CAS latency
    static constexpr uint32_t SDCR1_WP = 0x200; // Write protection
    typedef bit_field_t<10, 0x3> SDCR1_SDCLK; // SDRAM clock configuration
    static constexpr uint32_t SDCR1_RBURST = 0x1000; // Burst read
    typedef bit_field_t<13, 0x3> SDCR1_RPIPE; // Read pipe

    static constexpr uint32_t SDCR2_RESET_VALUE = 0x2d0; // Reset value
    typedef bit_field_t<0, 0x3> SDCR2_NC; // Number of column address bits
    typedef bit_field_t<2, 0x3> SDCR2_NR; // Number of row address bits
    typedef bit_field_t<4, 0x3> SDCR2_MWID; // Memory data bus width
    static constexpr uint32_t SDCR2_NB = 0x40; // Number of internal banks
    typedef bit_field_t<7, 0x3> SDCR2_CAS; // CAS latency
    static constexpr uint32_t SDCR2_WP = 0x200; // Write protection
    typedef bit_field_t<10, 0x3> SDCR2_SDCLK; // SDRAM clock configuration
    static constexpr uint32_t SDCR2_RBURST = 0x1000; // Burst read
    typedef bit_field_t<13, 0x3> SDCR2_RPIPE; // Read pipe

    static constexpr uint32_t SDTR1_RESET_VALUE = 0xfffffff; // Reset value
    typedef bit_field_t<0, 0xf> SDTR1_TMRD; // Load Mode Register to Active
    typedef bit_field_t<4, 0xf> SDTR1_TXSR; // Exit self-refresh delay
    typedef bit_field_t<8, 0xf> SDTR1_TRAS; // Self refresh time
    typedef bit_field_t<12, 0xf> SDTR1_TRC; // Row cycle delay
    typedef bit_field_t<16, 0xf> SDTR1_TWR; // Recovery delay
    typedef bit_field_t<20, 0xf> SDTR1_TRP; // Row precharge delay
    typedef bit_field_t<24, 0xf> SDTR1_TRCD; // Row to column delay

    static constexpr uint32_t SDTR2_RESET_VALUE = 0xfffffff; // Reset value
    typedef bit_field_t<0, 0xf> SDTR2_TMRD; // Load Mode Register to Active
    typedef bit_field_t<4, 0xf> SDTR2_TXSR; // Exit self-refresh delay
    typedef bit_field_t<8, 0xf> SDTR2_TRAS; // Self refresh time
    typedef bit_field_t<12, 0xf> SDTR2_TRC; // Row cycle delay
    typedef bit_field_t<16, 0xf> SDTR2_TWR; // Recovery delay
    typedef bit_field_t<20, 0xf> SDTR2_TRP; // Row precharge delay
    typedef bit_field_t<24, 0xf> SDTR2_TRCD; // Row to column delay

    static constexpr uint32_t SDCMR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> SDCMR_MODE; // Command mode
    static constexpr uint32_t SDCMR_CTB2 = 0x8; // Command target bank 2
    static constexpr uint32_t SDCMR_CTB1 = 0x10; // Command target bank 1
    typedef bit_field_t<5, 0xf> SDCMR_NRFS; // Number of Auto-refresh
    typedef bit_field_t<9, 0x1fff> SDCMR_MRD; // Mode Register definition

    static constexpr uint32_t SDRTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SDRTR_CRE = 0x1; // Clear Refresh error flag
    typedef bit_field_t<1, 0x1fff> SDRTR_COUNT; // Refresh Timer Count
    static constexpr uint32_t SDRTR_REIE = 0x4000; // RES Interrupt Enable

    static constexpr uint32_t SDSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SDSR_RE = 0x1; // Refresh error flag
    typedef bit_field_t<1, 0x3> SDSR_MODES1; // Status Mode for Bank 1
    typedef bit_field_t<3, 0x3> SDSR_MODES2; // Status Mode for Bank 2
    static constexpr uint32_t SDSR_BUSY = 0x20; // Busy status
};

template<>
struct peripheral_t<STM32F427, FMC>
{
    static constexpr periph_t P = FMC;
    using T = stm32f427_fmc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, FMC>
{
    static constexpr periph_t P = FMC;
    using T = stm32f429_fmc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, FMC>
{
    static constexpr periph_t P = FMC;
    using T = stm32f446_fmc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, FMC>
{
    static constexpr periph_t P = FMC;
    using T = stm32f469_fmc_t;
    static T& V;
};

using fmc_t = peripheral_t<svd, FMC>;

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
    static constexpr signal_t ALE = FMC_ALE;
    static constexpr signal_t BA0 = FMC_BA0;
    static constexpr signal_t BA1 = FMC_BA1;
    static constexpr signal_t CD = FMC_CD;
    static constexpr signal_t CLE = FMC_CLE;
    static constexpr signal_t CLK = FMC_CLK;
    static constexpr signal_t D0 = FMC_D0;
    static constexpr signal_t D1 = FMC_D1;
    static constexpr signal_t D10 = FMC_D10;
    static constexpr signal_t D11 = FMC_D11;
    static constexpr signal_t D12 = FMC_D12;
    static constexpr signal_t D13 = FMC_D13;
    static constexpr signal_t D14 = FMC_D14;
    static constexpr signal_t D15 = FMC_D15;
    static constexpr signal_t D16 = FMC_D16;
    static constexpr signal_t D17 = FMC_D17;
    static constexpr signal_t D18 = FMC_D18;
    static constexpr signal_t D19 = FMC_D19;
    static constexpr signal_t D2 = FMC_D2;
    static constexpr signal_t D20 = FMC_D20;
    static constexpr signal_t D21 = FMC_D21;
    static constexpr signal_t D22 = FMC_D22;
    static constexpr signal_t D23 = FMC_D23;
    static constexpr signal_t D24 = FMC_D24;
    static constexpr signal_t D25 = FMC_D25;
    static constexpr signal_t D26 = FMC_D26;
    static constexpr signal_t D27 = FMC_D27;
    static constexpr signal_t D28 = FMC_D28;
    static constexpr signal_t D29 = FMC_D29;
    static constexpr signal_t D3 = FMC_D3;
    static constexpr signal_t D30 = FMC_D30;
    static constexpr signal_t D31 = FMC_D31;
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
    static constexpr signal_t INT2 = FMC_INT2;
    static constexpr signal_t INT3 = FMC_INT3;
    static constexpr signal_t INTR = FMC_INTR;
    static constexpr signal_t NBL0 = FMC_NBL0;
    static constexpr signal_t NBL1 = FMC_NBL1;
    static constexpr signal_t NBL2 = FMC_NBL2;
    static constexpr signal_t NBL3 = FMC_NBL3;
    static constexpr signal_t NCE = FMC_NCE;
    static constexpr signal_t NCE2 = FMC_NCE2;
    static constexpr signal_t NCE3 = FMC_NCE3;
    static constexpr signal_t NCE4_1 = FMC_NCE4_1;
    static constexpr signal_t NCE4_2 = FMC_NCE4_2;
    static constexpr signal_t NE1 = FMC_NE1;
    static constexpr signal_t NE2 = FMC_NE2;
    static constexpr signal_t NE3 = FMC_NE3;
    static constexpr signal_t NE4 = FMC_NE4;
    static constexpr signal_t NIORD = FMC_NIORD;
    static constexpr signal_t NIOWR = FMC_NIOWR;
    static constexpr signal_t NL = FMC_NL;
    static constexpr signal_t NOE = FMC_NOE;
    static constexpr signal_t NREG = FMC_NREG;
    static constexpr signal_t NWAIT = FMC_NWAIT;
    static constexpr signal_t NWE = FMC_NWE;
    static constexpr signal_t SDCKE0 = FMC_SDCKE0;
    static constexpr signal_t SDCKE1 = FMC_SDCKE1;
    static constexpr signal_t SDCLK = FMC_SDCLK;
    static constexpr signal_t SDNCAS = FMC_SDNCAS;
    static constexpr signal_t SDNE0 = FMC_SDNE0;
    static constexpr signal_t SDNE1 = FMC_SDNE1;
    static constexpr signal_t SDNRAS = FMC_SDNRAS;
    static constexpr signal_t SDNWE = FMC_SDNWE;
    static constexpr clock_source_t CLOCK = AHB_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.AHB3ENR |= RCC::T::AHB3ENR_FMCEN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHB3ENR &= ~RCC::T::AHB3ENR_FMCEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHB3RSTR |= RCC::T::AHB3RSTR_FMCRST;
    }
};
