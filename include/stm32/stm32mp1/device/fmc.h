#pragma once

////
//
//      STM32MP1 FMC peripherals
//
////

////
//
//      FMC register block
//
////

struct stm32mp15xxx_fmc_t
{
    volatile uint32_t FMC_BCR1;     // [read-write] This register contains the control information of each memory bank, used for SRAMs, PSRAM, FRAM and NOR Flash memories.
    volatile uint32_t FMC_BTR1;     // [read-write] This register contains the control information of each memory bank, used for SRAMs, PSRAM and NOR Flash memories.If the EXTMOD bit is set in the FMC_BCRx register, then this register is partitioned for write and read access, that is, two registers are available: one to configure read accesses (this register) and one to configure write accesses (FMC_BWTRx registers).
    volatile uint32_t FMC_BCR2;     // [read-write] This register contains the control information of each memory bank, used for SRAMs, PSRAM, FRAM and NOR Flash memories.
    volatile uint32_t FMC_BTR2;     // [read-write] This register contains the control information of each memory bank, used for SRAMs, PSRAM and NOR Flash memories.If the EXTMOD bit is set in the FMC_BCRx register, then this register is partitioned for write and read access, that is, two registers are available: one to configure read accesses (this register) and one to configure write accesses (FMC_BWTRx registers).
    volatile uint32_t FMC_BCR3;     // [read-write] This register contains the control information of each memory bank, used for SRAMs, PSRAM, FRAM and NOR Flash memories.
    volatile uint32_t FMC_BTR3;     // [read-write] This register contains the control information of each memory bank, used for SRAMs, PSRAM and NOR Flash memories.If the EXTMOD bit is set in the FMC_BCRx register, then this register is partitioned for write and read access, that is, two registers are available: one to configure read accesses (this register) and one to configure write accesses (FMC_BWTRx registers).
    volatile uint32_t FMC_BCR4;     // [read-write] This register contains the control information of each memory bank, used for SRAMs, PSRAM, FRAM and NOR Flash memories.
    volatile uint32_t FMC_BTR4;     // [read-write] This register contains the control information of each memory bank, used for SRAMs, PSRAM and NOR Flash memories.If the EXTMOD bit is set in the FMC_BCRx register, then this register is partitioned for write and read access, that is, two registers are available: one to configure read accesses (this register) and one to configure write accesses (FMC_BWTRx registers).
    volatile uint32_t FMC_PCSCNTR;  // [read-write] This register contains the PSRAM chip select counter value for synchronous mode. The chip select counter is common to all banks and can be enabled separately on each bank. During PSRAM read or write accesses, this value is loaded into a timer which is decremented using the fmc_ker_ck while the NE signal is held low. When the timer reaches 0, the PSRAM controller splits the current access, toggles NE to allow PSRAM device refresh and restarts a new access. The programmed counter value guarantees a maximum NE pulse width (tCEM) as specified for PSRAM devices. The counter is reloaded and starts decrementing each time a new access is started by a transition of NE from high to low. h
    reserved_t<0x17> _0x80;
    volatile uint32_t FMC_PCR;      // [read-write] NAND Flash Programmable control register
    volatile uint32_t FMC_SR;       // [read-only] This register contains information about the AXI interface isolation status and the NAND write requests status. The FMC has to be disabled before modifying some registers. As requests might be pending, it is necessary to wait till the AXI interface is stable and the core of the block is totally isolated from its AXI interface before reconfiguring the registers. The PEF and PNWEF bits indicate the status of the pipe. If Hamming algorithm is used, the ECC is calculated while data are written to the memory. To read the correct ECC, the software must consequently wait untill no write request to the NAND controller are pending, by polling PEF and NWRF bits.
    volatile uint32_t FMC_PMEM;     // [read-write] The FMC_PMEM read/write register contains NAND Flash memory bank timing information. This information is used to access the NAND Flash common memory space for command, address write accesses or data read/write accesses.
    volatile uint32_t FMC_PATT;     // [read-write] The FMC_PATT read/write register contains NAND Flash memory bank timing information. It is used for 8-bit accesses to the NAND Flash attribute memory space during the last address write access when the timing differs from previous accesses (for Ready/Busy management, refer to Section25.8.5: NAND Flash prewait function).
    volatile uint32_t FMC_HPR;      // [read-only] This register is used during read accesses in conjunction with the FMC sequencer. It contains the current error correction code value computed by the FMC NAND controller Hamming module. When the FMC sequencer reads data from a NAND Flash memory page at the correct address, the data read are automatically processed by the Hamming computation module. When X bytes have been read (according to the sector size ECCSS field in the FMC_PCR register), the CPU must read the computed ECC value from the FMC_HECCR register. It then verifies if these computed parity data are the same as the parity value recorded in the spare area and stored in the and the FMC_HPR, to determine whether a page is valid, and to correct it otherwise. The FMC_HPR register should be cleared after being read by setting the ECCEN bit to 0. To compute a new data block, the ECCEN bit must be set to 1.
    volatile uint32_t FMC_HECCR;    // [read-only] This register contain the current error correction code value computed by the FMC NAND controller Hamming module.When the CPU reads/writes data from/to a NAND Flash memory page at the correct address (refer to Section25.8.6: NAND ECC controller), the data read/written from/to the NAND Flash memory are automatically processed by the Hamming computation module. When X bytes have been read (according to the sector size ECCSS field in the FMC_PCR register), the CPU must read the computed ECC value from the FMC_HECCR register. It then verifies if these computed parity data are the same as the parity value recorded in the spare area, to determine whether a page is valid, and to correct it otherwise. The FMC_HECCR register should be cleared after being read by setting the ECCEN bit to 0. To compute a new data block, the ECCEN bit must be set to 1.
    reserved_t<0x1b> _0x104;
    volatile uint32_t FMC_BWTR1;    // [read-write] This register contains the control information of each memory bank. It is used for SRAMs, FRAMs, PSRAMs and NOR Flash memories. When the EXTMOD bit is set in the FMC_BCRx register, then this register is active for write access.
    reserved_t<0x1> _0x10c;
    volatile uint32_t FMC_BWTR2;    // [read-write] This register contains the control information of each memory bank. It is used for SRAMs, FRAMs, PSRAMs and NOR Flash memories. When the EXTMOD bit is set in the FMC_BCRx register, then this register is active for write access.
    reserved_t<0x1> _0x114;
    volatile uint32_t FMC_BWTR3;    // [read-write] This register contains the control information of each memory bank. It is used for SRAMs, FRAMs, PSRAMs and NOR Flash memories. When the EXTMOD bit is set in the FMC_BCRx register, then this register is active for write access.
    reserved_t<0x1> _0x11c;
    volatile uint32_t FMC_BWTR4;    // [read-write] This register contains the control information of each memory bank. It is used for SRAMs, FRAMs, PSRAMs and NOR Flash memories. When the EXTMOD bit is set in the FMC_BCRx register, then this register is active for write access.
    reserved_t<0x38> _0x200;
    volatile uint32_t FMC_CSQCR;    // [write-only] FMC NAND Command Sequencer Control Register
    volatile uint32_t FMC_CSQCFGR1; // [read-write] FMC NAND Command Sequencer Configuration Register 1
    volatile uint32_t FMC_CSQCFGR2; // [read-write] This register is used to configure the command sequencer to issue random read/ write commands to read/ write data by sector and automatically read/write data from NAND Flash memory at a programmable address offset. This is useful when performing a sector read/write operation followed by an ECC read/write operation in the NAND Flash spare area.The command sequencer generates the random commands untill all the sectors are read/written. .
    volatile uint32_t FMC_CSQCFGR3; // [read-write] FMC NAND sequencer configuration register 3
    volatile uint32_t FMC_CSQAR1;   // [read-write] This register is used to define the value of address cycles 1 to 4 to be issued by the command sequencer.
    volatile uint32_t FMC_CSQAR2;   // [read-write] This register is used to program the fifth address cycle and the address offset in spare area. It also selects the chip enable.
    reserved_t<0x2> _0x220;
    volatile uint32_t FMC_CSQIER;   // [read-write] FMC NAND Command Sequencer Interrupt Enable Register
    volatile uint32_t FMC_CSQISR;   // [read-write] FMC NAND Command Sequencer Interrupt Status Register
    volatile uint32_t FMC_CSQICR;   // [write-only] FMC NAND Command Sequencer Interrupt Clear Register
    reserved_t<0x1> _0x230;
    volatile uint32_t FMC_CSQEMSR;  // [read-only] This register holds a sector error mapping status when the whole transfer is complete.
    reserved_t<0x7> _0x250;
    volatile uint32_t FMC_BCHIER;   // [read-write] FMC BCH Interrupt enable register
    volatile uint32_t FMC_BCHISR;   // [read-only] This register holds the status of BCH encoder/decoder after processing each sector. When the sequencer is used, this register is automatically cleared.
    volatile uint32_t FMC_BCHICR;   // [write-only] FMC BCH Interrupt Clear Register
    reserved_t<0x1> _0x260;
    volatile uint32_t FMC_BCHPBR1;  // [read-only] These registers contain the BCH parity bits (BCHPB). For the BCH 4-bit, only BCHPB[51:0] are significant and for the BCH 8-bit BCHPB[103:0] are significant.
    volatile uint32_t FMC_BCHPBR2;  // [read-only] FMC BCH Parity Bits Register 2
    volatile uint32_t FMC_BCHPBR3;  // [read-only] FMC BCH Parity Bits Register 3
    volatile uint32_t FMC_BCHPBR4;  // [read-only] FMC BCH Parity Bits Register 4
    reserved_t<0x3> _0x27c;
    volatile uint32_t FMC_BCHDSR0;  // [read-only] This register contains some fields already available in other registers but that require to be saved when error correction is performed on several sectors at a time (for example a whole NAND Flash page). This allows a DMA channel to transfer the content of FMC_BCHDSR0..4 to a decoding status buffer. .
    volatile uint32_t FMC_BCHDSR1;  // [read-only] The maximum error correction capability of the BCH block embedded in the FMC is 8 errors
    volatile uint32_t FMC_BCHDSR2;  // [read-only] The maximum error correction capability of the BCH block embedded in the FMC is 8 errors. This register contains the positions of the 3rd and 4th error bits in EBP3 and EPB4 fields, respectively.
    volatile uint32_t FMC_BCHDSR3;  // [read-only] The maximum error correction capability of the BCH block embedded in the FMC is 8 errors.
    volatile uint32_t FMC_BCHDSR4;  // [read-only] The maximum error correction capability of the BCH block embedded in the FMC is 8 errors. This register contains the positions of the 7th and 8th error bits in EBP7 and EPB8 fields, respectively. .
    reserved_t<0x57> _0x3ec;
    volatile uint32_t FMC_HWCFGR2;  // [read-only] FMC Hardware configuration register 2
    volatile uint32_t FMC_HWCFGR1;  // [read-only] FMC Hardware configuration register 1
    volatile uint32_t FMC_VERR;     // [read-only] FMC Version register
    volatile uint32_t FMC_IPIDR;    // [read-only] FMC Identification register
    volatile uint32_t FMC_SIDR;     // [read-only] FMC Size Identification register

    static constexpr uint32_t FMC_BCR1_RESET_VALUE = 0x30db;
    static constexpr uint32_t FMC_BCR1_MBKEN = 0x1;        // MBKEN
    static constexpr uint32_t FMC_BCR1_MUXEN = 0x2;        // MUXEN
    template<uint32_t X>
    static constexpr uint32_t FMC_BCR1_MTYP =              // MTYP
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_BCR1_MWID =              // MWID
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t FMC_BCR1_FACCEN = 0x40;      // FACCEN
    static constexpr uint32_t FMC_BCR1_BURSTEN = 0x100;    // BURSTEN
    static constexpr uint32_t FMC_BCR1_WAITPOL = 0x200;    // WAITPOL
    static constexpr uint32_t FMC_BCR1_WAITCFG = 0x800;    // WAITCFG
    static constexpr uint32_t FMC_BCR1_WREN = 0x1000;      // WREN
    static constexpr uint32_t FMC_BCR1_WAITEN = 0x2000;    // WAITEN
    static constexpr uint32_t FMC_BCR1_EXTMOD = 0x4000;    // EXTMOD
    static constexpr uint32_t FMC_BCR1_ASYNCWAIT = 0x8000; // ASYNCWAIT
    template<uint32_t X>
    static constexpr uint32_t FMC_BCR1_CPSIZE =            // CPSIZE
        bit_field_t<16, 0x7>::value<X>();
    static constexpr uint32_t FMC_BCR1_CBURSTRW = 0x80000; // CBURSTRW
    static constexpr uint32_t FMC_BCR1_CCLKEN = 0x100000;  // CCLKEN
    template<uint32_t X>
    static constexpr uint32_t FMC_BCR1_NBLSET =            // NBLSET
        bit_field_t<22, 0x3>::value<X>();
    static constexpr uint32_t FMC_BCR1_FMCEN = 0x80000000; // FMCEN

    static constexpr uint32_t FMC_BTR1_RESET_VALUE = 0xfffffff;
    template<uint32_t X>
    static constexpr uint32_t FMC_BTR1_ADDSET =    // ADDSET
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_BTR1_ADDHLD =    // ADDHLD
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_BTR1_DATAST =    // DATAST
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_BTR1_BUSTURN =   // BUSTURN
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_BTR1_CLKDIV =    // CLKDIV
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_BTR1_DATLAT =    // DATLAT
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_BTR1_ACCMOD =    // ACCMOD
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_BTR1_DATAHLD =   // DATAHLD
        bit_field_t<30, 0x3>::value<X>();

    static constexpr uint32_t FMC_BCR2_RESET_VALUE = 0x30db;
    static constexpr uint32_t FMC_BCR2_MBKEN = 0x1;        // MBKEN
    static constexpr uint32_t FMC_BCR2_MUXEN = 0x2;        // MUXEN
    template<uint32_t X>
    static constexpr uint32_t FMC_BCR2_MTYP =              // MTYP
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_BCR2_MWID =              // MWID
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t FMC_BCR2_FACCEN = 0x40;      // FACCEN
    static constexpr uint32_t FMC_BCR2_BURSTEN = 0x100;    // BURSTEN
    static constexpr uint32_t FMC_BCR2_WAITPOL = 0x200;    // WAITPOL
    static constexpr uint32_t FMC_BCR2_WAITCFG = 0x800;    // WAITCFG
    static constexpr uint32_t FMC_BCR2_WREN = 0x1000;      // WREN
    static constexpr uint32_t FMC_BCR2_WAITEN = 0x2000;    // WAITEN
    static constexpr uint32_t FMC_BCR2_EXTMOD = 0x4000;    // EXTMOD
    static constexpr uint32_t FMC_BCR2_ASYNCWAIT = 0x8000; // ASYNCWAIT
    template<uint32_t X>
    static constexpr uint32_t FMC_BCR2_CPSIZE =            // CPSIZE
        bit_field_t<16, 0x7>::value<X>();
    static constexpr uint32_t FMC_BCR2_CBURSTRW = 0x80000; // CBURSTRW
    static constexpr uint32_t FMC_BCR2_CCLKEN = 0x100000;  // CCLKEN
    template<uint32_t X>
    static constexpr uint32_t FMC_BCR2_NBLSET =            // NBLSET
        bit_field_t<22, 0x3>::value<X>();
    static constexpr uint32_t FMC_BCR2_FMCEN = 0x80000000; // FMCEN

    static constexpr uint32_t FMC_BTR2_RESET_VALUE = 0xfffffff;
    template<uint32_t X>
    static constexpr uint32_t FMC_BTR2_ADDSET =    // ADDSET
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_BTR2_ADDHLD =    // ADDHLD
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_BTR2_DATAST =    // DATAST
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_BTR2_BUSTURN =   // BUSTURN
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_BTR2_CLKDIV =    // CLKDIV
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_BTR2_DATLAT =    // DATLAT
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_BTR2_ACCMOD =    // ACCMOD
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_BTR2_DATAHLD =   // DATAHLD
        bit_field_t<30, 0x3>::value<X>();

    static constexpr uint32_t FMC_BCR3_RESET_VALUE = 0x30db;
    static constexpr uint32_t FMC_BCR3_MBKEN = 0x1;        // MBKEN
    static constexpr uint32_t FMC_BCR3_MUXEN = 0x2;        // MUXEN
    template<uint32_t X>
    static constexpr uint32_t FMC_BCR3_MTYP =              // MTYP
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_BCR3_MWID =              // MWID
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t FMC_BCR3_FACCEN = 0x40;      // FACCEN
    static constexpr uint32_t FMC_BCR3_BURSTEN = 0x100;    // BURSTEN
    static constexpr uint32_t FMC_BCR3_WAITPOL = 0x200;    // WAITPOL
    static constexpr uint32_t FMC_BCR3_WAITCFG = 0x800;    // WAITCFG
    static constexpr uint32_t FMC_BCR3_WREN = 0x1000;      // WREN
    static constexpr uint32_t FMC_BCR3_WAITEN = 0x2000;    // WAITEN
    static constexpr uint32_t FMC_BCR3_EXTMOD = 0x4000;    // EXTMOD
    static constexpr uint32_t FMC_BCR3_ASYNCWAIT = 0x8000; // ASYNCWAIT
    template<uint32_t X>
    static constexpr uint32_t FMC_BCR3_CPSIZE =            // CPSIZE
        bit_field_t<16, 0x7>::value<X>();
    static constexpr uint32_t FMC_BCR3_CBURSTRW = 0x80000; // CBURSTRW
    static constexpr uint32_t FMC_BCR3_CCLKEN = 0x100000;  // CCLKEN
    template<uint32_t X>
    static constexpr uint32_t FMC_BCR3_NBLSET =            // NBLSET
        bit_field_t<22, 0x3>::value<X>();
    static constexpr uint32_t FMC_BCR3_FMCEN = 0x80000000; // FMCEN

    static constexpr uint32_t FMC_BTR3_RESET_VALUE = 0xfffffff;
    template<uint32_t X>
    static constexpr uint32_t FMC_BTR3_ADDSET =    // ADDSET
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_BTR3_ADDHLD =    // ADDHLD
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_BTR3_DATAST =    // DATAST
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_BTR3_BUSTURN =   // BUSTURN
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_BTR3_CLKDIV =    // CLKDIV
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_BTR3_DATLAT =    // DATLAT
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_BTR3_ACCMOD =    // ACCMOD
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_BTR3_DATAHLD =   // DATAHLD
        bit_field_t<30, 0x3>::value<X>();

    static constexpr uint32_t FMC_BCR4_RESET_VALUE = 0x30db;
    static constexpr uint32_t FMC_BCR4_MBKEN = 0x1;        // MBKEN
    static constexpr uint32_t FMC_BCR4_MUXEN = 0x2;        // MUXEN
    template<uint32_t X>
    static constexpr uint32_t FMC_BCR4_MTYP =              // MTYP
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_BCR4_MWID =              // MWID
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t FMC_BCR4_FACCEN = 0x40;      // FACCEN
    static constexpr uint32_t FMC_BCR4_BURSTEN = 0x100;    // BURSTEN
    static constexpr uint32_t FMC_BCR4_WAITPOL = 0x200;    // WAITPOL
    static constexpr uint32_t FMC_BCR4_WAITCFG = 0x800;    // WAITCFG
    static constexpr uint32_t FMC_BCR4_WREN = 0x1000;      // WREN
    static constexpr uint32_t FMC_BCR4_WAITEN = 0x2000;    // WAITEN
    static constexpr uint32_t FMC_BCR4_EXTMOD = 0x4000;    // EXTMOD
    static constexpr uint32_t FMC_BCR4_ASYNCWAIT = 0x8000; // ASYNCWAIT
    template<uint32_t X>
    static constexpr uint32_t FMC_BCR4_CPSIZE =            // CPSIZE
        bit_field_t<16, 0x7>::value<X>();
    static constexpr uint32_t FMC_BCR4_CBURSTRW = 0x80000; // CBURSTRW
    static constexpr uint32_t FMC_BCR4_CCLKEN = 0x100000;  // CCLKEN
    template<uint32_t X>
    static constexpr uint32_t FMC_BCR4_NBLSET =            // NBLSET
        bit_field_t<22, 0x3>::value<X>();
    static constexpr uint32_t FMC_BCR4_FMCEN = 0x80000000; // FMCEN

    static constexpr uint32_t FMC_BTR4_RESET_VALUE = 0xfffffff;
    template<uint32_t X>
    static constexpr uint32_t FMC_BTR4_ADDSET =    // ADDSET
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_BTR4_ADDHLD =    // ADDHLD
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_BTR4_DATAST =    // DATAST
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_BTR4_BUSTURN =   // BUSTURN
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_BTR4_CLKDIV =    // CLKDIV
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_BTR4_DATLAT =    // DATLAT
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_BTR4_ACCMOD =    // ACCMOD
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_BTR4_DATAHLD =   // DATAHLD
        bit_field_t<30, 0x3>::value<X>();

    static constexpr uint32_t FMC_PCSCNTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FMC_PCSCNTR_CSCOUNT =          // CSCOUNT
        bit_field_t<0, 0xffff>::value<X>();
    static constexpr uint32_t FMC_PCSCNTR_CNTB1EN = 0x10000; // CNTB1EN
    static constexpr uint32_t FMC_PCSCNTR_CNTB2EN = 0x20000; // CNTB2EN
    static constexpr uint32_t FMC_PCSCNTR_CNTB3EN = 0x40000; // CNTB3EN
    static constexpr uint32_t FMC_PCSCNTR_CNTB4EN = 0x80000; // CNTB4EN

    static constexpr uint32_t FMC_PCR_RESET_VALUE = 0x7fe08;
    static constexpr uint32_t FMC_PCR_PWAITEN = 0x2;      // PWAITEN
    static constexpr uint32_t FMC_PCR_PBKEN = 0x4;        // PBKEN
    template<uint32_t X>
    static constexpr uint32_t FMC_PCR_PWID =              // PWID
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t FMC_PCR_ECCEN = 0x40;       // ECCEN
    static constexpr uint32_t FMC_PCR_ECCALG = 0x100;     // ECCALG
    template<uint32_t X>
    static constexpr uint32_t FMC_PCR_TCLR =              // TCLR
        bit_field_t<9, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_PCR_TAR =               // TAR
        bit_field_t<13, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_PCR_ECCSS =             // ECCSS
        bit_field_t<17, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_PCR_TCEH =              // TCEH
        bit_field_t<20, 0xf>::value<X>();
    static constexpr uint32_t FMC_PCR_BCHECC = 0x1000000; // BCHECC
    static constexpr uint32_t FMC_PCR_WEN = 0x2000000;    // WEN

    static constexpr uint32_t FMC_SR_RESET_VALUE = 0x40;
    template<uint32_t X>
    static constexpr uint32_t FMC_SR_ISOST =      // ISOST
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t FMC_SR_PEF = 0x10;  // PEF
    static constexpr uint32_t FMC_SR_NWRF = 0x40; // NWRF

    static constexpr uint32_t FMC_PMEM_RESET_VALUE = 0xa0a0a0a;
    template<uint32_t X>
    static constexpr uint32_t FMC_PMEM_MEMSET =    // MEMSET
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_PMEM_MEMWAIT =   // MEMWAIT
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_PMEM_MEMHOLD =   // MEMHOLD
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_PMEM_MEMHIZ =    // MEMHIZ
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t FMC_PATT_RESET_VALUE = 0xa0a0a0a;
    template<uint32_t X>
    static constexpr uint32_t FMC_PATT_ATTSET =    // ATTSET
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_PATT_ATTWAIT =   // ATTWAIT
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_PATT_ATTHOLD =   // ATTHOLD
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_PATT_ATTHIZ =    // ATTHIZ
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t FMC_HPR_RESET_VALUE = 0x0;

    static constexpr uint32_t FMC_HECCR_RESET_VALUE = 0x0;

    static constexpr uint32_t FMC_BWTR1_RESET_VALUE = 0xfffff;
    template<uint32_t X>
    static constexpr uint32_t FMC_BWTR1_ADDSET =    // ADDSET
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_BWTR1_ADDHLD =    // ADDHLD
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_BWTR1_DATAST =    // DATAST
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_BWTR1_BUSTURN =   // BUSTURN
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_BWTR1_ACCMOD =    // ACCMOD
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_BWTR1_DATAHLD =   // DATAHLD
        bit_field_t<30, 0x3>::value<X>();

    static constexpr uint32_t FMC_BWTR2_RESET_VALUE = 0xfffff;
    template<uint32_t X>
    static constexpr uint32_t FMC_BWTR2_ADDSET =    // ADDSET
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_BWTR2_ADDHLD =    // ADDHLD
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_BWTR2_DATAST =    // DATAST
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_BWTR2_BUSTURN =   // BUSTURN
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_BWTR2_ACCMOD =    // ACCMOD
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_BWTR2_DATAHLD =   // DATAHLD
        bit_field_t<30, 0x3>::value<X>();

    static constexpr uint32_t FMC_BWTR3_RESET_VALUE = 0xfffff;
    template<uint32_t X>
    static constexpr uint32_t FMC_BWTR3_ADDSET =    // ADDSET
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_BWTR3_ADDHLD =    // ADDHLD
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_BWTR3_DATAST =    // DATAST
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_BWTR3_BUSTURN =   // BUSTURN
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_BWTR3_ACCMOD =    // ACCMOD
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_BWTR3_DATAHLD =   // DATAHLD
        bit_field_t<30, 0x3>::value<X>();

    static constexpr uint32_t FMC_BWTR4_RESET_VALUE = 0xfffff;
    template<uint32_t X>
    static constexpr uint32_t FMC_BWTR4_ADDSET =    // ADDSET
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_BWTR4_ADDHLD =    // ADDHLD
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_BWTR4_DATAST =    // DATAST
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_BWTR4_BUSTURN =   // BUSTURN
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_BWTR4_ACCMOD =    // ACCMOD
        bit_field_t<28, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_BWTR4_DATAHLD =   // DATAHLD
        bit_field_t<30, 0x3>::value<X>();

    static constexpr uint32_t FMC_CSQCR_RESET_VALUE = 0x0;
    static constexpr uint32_t FMC_CSQCR_CSQSTART = 0x1; // CSQSTART

    static constexpr uint32_t FMC_CSQCFGR1_RESET_VALUE = 0x0;
    static constexpr uint32_t FMC_CSQCFGR1_CMD2EN = 0x2;      // CMD2EN
    static constexpr uint32_t FMC_CSQCFGR1_DMADEN = 0x4;      // DMADEN
    template<uint32_t X>
    static constexpr uint32_t FMC_CSQCFGR1_ACYNBR =           // ACYNBR
        bit_field_t<4, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_CSQCFGR1_CMD1 =             // CMD1
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_CSQCFGR1_CMD2 =             // CMD2
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t FMC_CSQCFGR1_CMD1T = 0x1000000; // CMD1T
    static constexpr uint32_t FMC_CSQCFGR1_CMD2T = 0x2000000; // CMD2T

    static constexpr uint32_t FMC_CSQCFGR2_RESET_VALUE = 0x0;
    static constexpr uint32_t FMC_CSQCFGR2_SQSDTEN = 0x1;      // SQSDTEN
    static constexpr uint32_t FMC_CSQCFGR2_RCMD2EN = 0x2;      // RCMD2EN
    static constexpr uint32_t FMC_CSQCFGR2_DMASEN = 0x4;       // DMASEN
    template<uint32_t X>
    static constexpr uint32_t FMC_CSQCFGR2_RCMD1 =             // RCMD1
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_CSQCFGR2_RCMD2 =             // RCMD2
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t FMC_CSQCFGR2_RCMD1T = 0x1000000; // RCMD1T
    static constexpr uint32_t FMC_CSQCFGR2_RCMD2T = 0x2000000; // RCMD2T

    static constexpr uint32_t FMC_CSQCFGR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FMC_CSQCFGR3_SNBR =            // SNBR
        bit_field_t<8, 0x3f>::value<X>();
    static constexpr uint32_t FMC_CSQCFGR3_AC1T = 0x10000;   // AC1T
    static constexpr uint32_t FMC_CSQCFGR3_AC2T = 0x20000;   // AC2T
    static constexpr uint32_t FMC_CSQCFGR3_AC3T = 0x40000;   // AC3T
    static constexpr uint32_t FMC_CSQCFGR3_AC4T = 0x80000;   // AC4T
    static constexpr uint32_t FMC_CSQCFGR3_AC5T = 0x100000;  // AC5T
    static constexpr uint32_t FMC_CSQCFGR3_SDT = 0x200000;   // SDT
    static constexpr uint32_t FMC_CSQCFGR3_RAC1T = 0x400000; // RAC1T
    static constexpr uint32_t FMC_CSQCFGR3_RAC2T = 0x800000; // RAC2T

    static constexpr uint32_t FMC_CSQAR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FMC_CSQAR1_ADDC1 =   // ADDC1
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_CSQAR1_ADDC2 =   // ADDC2
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_CSQAR1_ADDC3 =   // ADDC3
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_CSQAR1_ADDC4 =   // ADDC4
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t FMC_CSQAR2_RESET_VALUE = 0x20000;
    template<uint32_t X>
    static constexpr uint32_t FMC_CSQAR2_ADDC5 =           // ADDC5
        bit_field_t<0, 0xff>::value<X>();
    static constexpr uint32_t FMC_CSQAR2_NANDCEN0 = 0x400; // NANDCEN0
    static constexpr uint32_t FMC_CSQAR2_NANDCEN1 = 0x800; // NANDCEN1
    template<uint32_t X>
    static constexpr uint32_t FMC_CSQAR2_SAO =             // SAO
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t FMC_CSQIER_RESET_VALUE = 0x0;
    static constexpr uint32_t FMC_CSQIER_TCIE = 0x1;     // TCIE
    static constexpr uint32_t FMC_CSQIER_SCIE = 0x2;     // SCIE
    static constexpr uint32_t FMC_CSQIER_SEIE = 0x4;     // SEIE
    static constexpr uint32_t FMC_CSQIER_SUEIE = 0x8;    // SUEIE
    static constexpr uint32_t FMC_CSQIER_CMDTCIE = 0x10; // CMDTCIE

    static constexpr uint32_t FMC_CSQISR_RESET_VALUE = 0x0;
    static constexpr uint32_t FMC_CSQISR_TCF = 0x1;     // TCF
    static constexpr uint32_t FMC_CSQISR_SCF = 0x2;     // SCF
    static constexpr uint32_t FMC_CSQISR_SEF = 0x4;     // SEF
    static constexpr uint32_t FMC_CSQISR_SUEF = 0x8;    // SUEF
    static constexpr uint32_t FMC_CSQISR_CMDTCF = 0x10; // CMDTCF

    static constexpr uint32_t FMC_CSQICR_RESET_VALUE = 0x0;
    static constexpr uint32_t FMC_CSQICR_CTCF = 0x1;     // CTCF
    static constexpr uint32_t FMC_CSQICR_CSCF = 0x2;     // CSCF
    static constexpr uint32_t FMC_CSQICR_CSEF = 0x4;     // CSEF
    static constexpr uint32_t FMC_CSQICR_CSUEF = 0x8;    // CSUEF
    static constexpr uint32_t FMC_CSQICR_CCMDTCF = 0x10; // CCMDTCF

    static constexpr uint32_t FMC_CSQEMSR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FMC_CSQEMSR_SEM =   // SEM
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t FMC_BCHIER_RESET_VALUE = 0x0;
    static constexpr uint32_t FMC_BCHIER_DUEIE = 0x1;   // DUEIE
    static constexpr uint32_t FMC_BCHIER_DERIE = 0x2;   // DERIE
    static constexpr uint32_t FMC_BCHIER_DEFIE = 0x4;   // DEFIE
    static constexpr uint32_t FMC_BCHIER_DSRIE = 0x8;   // DSRIE
    static constexpr uint32_t FMC_BCHIER_EPBRIE = 0x10; // EPBRIE

    static constexpr uint32_t FMC_BCHISR_RESET_VALUE = 0x0;
    static constexpr uint32_t FMC_BCHISR_DUEF = 0x1;   // DUEF
    static constexpr uint32_t FMC_BCHISR_DERF = 0x2;   // DERF
    static constexpr uint32_t FMC_BCHISR_DEFF = 0x4;   // DEFF
    static constexpr uint32_t FMC_BCHISR_DSRF = 0x8;   // DSRF
    static constexpr uint32_t FMC_BCHISR_EPBRF = 0x10; // EPBRF

    static constexpr uint32_t FMC_BCHICR_RESET_VALUE = 0x0;
    static constexpr uint32_t FMC_BCHICR_CDUEF = 0x1;   // CDUEF
    static constexpr uint32_t FMC_BCHICR_CDERF = 0x2;   // CDERF
    static constexpr uint32_t FMC_BCHICR_CDEFF = 0x4;   // CDEFF
    static constexpr uint32_t FMC_BCHICR_CDSRF = 0x8;   // CDSRF
    static constexpr uint32_t FMC_BCHICR_CEPBRF = 0x10; // CEPBRF

    static constexpr uint32_t FMC_BCHPBR1_RESET_VALUE = 0x0;

    static constexpr uint32_t FMC_BCHPBR2_RESET_VALUE = 0x0;

    static constexpr uint32_t FMC_BCHPBR3_RESET_VALUE = 0x0;

    static constexpr uint32_t FMC_BCHPBR4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FMC_BCHPBR4_BCHPB =   // BCHPB
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t FMC_BCHDSR0_RESET_VALUE = 0x0;
    static constexpr uint32_t FMC_BCHDSR0_DUE = 0x1; // DUE
    static constexpr uint32_t FMC_BCHDSR0_DEF = 0x2; // DEF
    template<uint32_t X>
    static constexpr uint32_t FMC_BCHDSR0_DEN =      // DEN
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t FMC_BCHDSR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FMC_BCHDSR1_EBP1 =   // EBP1
        bit_field_t<0, 0x1fff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_BCHDSR1_EBP2 =   // EBP2
        bit_field_t<16, 0x1fff>::value<X>();

    static constexpr uint32_t FMC_BCHDSR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FMC_BCHDSR2_EBP3 =   // EBP3
        bit_field_t<0, 0x1fff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_BCHDSR2_EBP4 =   // EBP4
        bit_field_t<16, 0x1fff>::value<X>();

    static constexpr uint32_t FMC_BCHDSR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FMC_BCHDSR3_EBP5 =   // EBP5
        bit_field_t<0, 0x1fff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_BCHDSR3_EBP6 =   // EBP6
        bit_field_t<16, 0x1fff>::value<X>();

    static constexpr uint32_t FMC_BCHDSR4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FMC_BCHDSR4_EBP7 =   // EBP7
        bit_field_t<0, 0x1fff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_BCHDSR4_EBP8 =   // EBP8
        bit_field_t<16, 0x1fff>::value<X>();

    static constexpr uint32_t FMC_HWCFGR2_RESET_VALUE = 0xdc8762;
    template<uint32_t X>
    static constexpr uint32_t FMC_HWCFGR2_RD_LN2DPTH =    // RD_LN2DPTH
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_HWCFGR2_NOR_BASE =      // NOR_BASE
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_HWCFGR2_SDRAM_RBASE =   // SDRAM_RBASE
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_HWCFGR2_NAND_BASE =     // NAND_BASE
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_HWCFGR2_SDRAM1_BASE =   // SDRAM1_BASE
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_HWCFGR2_SDRAM2_BASE =   // SDRAM2_BASE
        bit_field_t<20, 0xf>::value<X>();

    static constexpr uint32_t FMC_HWCFGR1_RESET_VALUE = 0x2232b011;
    static constexpr uint32_t FMC_HWCFGR1_NAND_SEL = 0x1;    // NAND_SEL
    static constexpr uint32_t FMC_HWCFGR1_NAND_ECC = 0x10;   // NAND_ECC
    static constexpr uint32_t FMC_HWCFGR1_SDRAM_SEL = 0x100; // SDRAM_SEL
    template<uint32_t X>
    static constexpr uint32_t FMC_HWCFGR1_ID_SIZE =          // ID_SIZE
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_HWCFGR1_WA_LN2DPTH =       // WA_LN2DPTH
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_HWCFGR1_WD_LN2DPTH =       // WD_LN2DPTH
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_HWCFGR1_WR_LN2DPTH =       // WR_LN2DPTH
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_HWCFGR1_RA_LN2DPTH =       // RA_LN2DPTH
        bit_field_t<28, 0xf>::value<X>();

    static constexpr uint32_t FMC_VERR_RESET_VALUE = 0x11;
    template<uint32_t X>
    static constexpr uint32_t FMC_VERR_MINREV =   // MINREV
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FMC_VERR_MAJREV =   // MAJREV
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t FMC_IPIDR_RESET_VALUE = 0x140001;

    static constexpr uint32_t FMC_SIDR_RESET_VALUE = 0xa3c5dd01;
};


template<>
struct peripheral_t<STM32MP15xxx, FMC>
{
    typedef stm32mp15xxx_fmc_t T;
    static T& V;
};

using fmc_t = peripheral_t<mcu_svd, FMC>;

