#pragma once

////
//
//      STM32L5 FMC peripherals
//
///

// FMC: FMC

struct stm32l552_fmc_t
{
    volatile uint32_t FMC_BCR1; // FMC_BCR1
    volatile uint32_t FMC_BTR1; // This register contains the control information of each memory bank, used for SRAMs, PSRAM and NOR Flash memories.If the EXTMOD bit is set in the FMC_BCRx register, then this register is partitioned for write and read access, that is, 2 registers are available: one to configure read accesses (this register) and one to configure write accesses (FMC_BWTRx registers).
    volatile uint32_t FMC_BCR2; // FMC_BCR2
    volatile uint32_t FMC_BTR2; // FMC_BTR2
    volatile uint32_t FMC_BCR3; // &gt;FMC_BCR3
    volatile uint32_t FMC_BTR3; // FMC_BTR3
    volatile uint32_t FMC_BCR4; // &gt;FMC_BCR4
    volatile uint32_t FMC_BTR4; // FMC_BTR4
    volatile uint32_t PCSCNTR; // PCSCNTR
    reserved_t<0x17> _0x24;
    volatile uint32_t FMC_PCR; // NAND Flash control registers
    volatile uint32_t FMC_SR; // This register contains information about the FIFO status and interrupt. The FMC features a FIFO that is used when writing to memories to transfer up to 16 words of data.This is used to quickly write to the FIFO and free the AXI bus for transactions to peripherals other than the FMC, while the FMC is draining its FIFO into the memory. One of these register bits indicates the status of the FIFO, for ECC purposes.The ECC is calculated while the data are written to the memory. To read the correct ECC, the software must consequently wait until the FIFO is empty.
    volatile uint32_t FMC_PMEM; // The FMC_PMEM read/write register contains the timing information for NAND Flash memory bank. This information is used to access either the common memory space of the NAND Flash for command, address write access and data read/write access.
    volatile uint32_t FMC_PATT; // The FMC_PATT read/write register contains the timing information for NAND Flash memory bank. It is used for 8-bit accesses to the attribute memory space of the NAND Flash for the last address write access if the timing must differ from that of previous accesses (for Ready/Busy management, refer to Section20.8.5: NAND Flash prewait feature).
    reserved_t<0x1> _0x90;
    volatile uint32_t FMC_ECCR; // This register contain the current error correction code value computed by the ECC computation modules of the FMC NAND controller. When the CPU reads/writes the data from a NAND Flash memory page at the correct address (refer to Section20.8.6: Computation of the error correction code (ECC) in NAND Flash memory), the data read/written from/to the NAND Flash memory are processed automatically by the ECC computation module. When X bytes have been read (according to the ECCPS field in the FMC_PCR registers), the CPU must read the computed ECC value from the FMC_ECC registers. It then verifies if these computed parity data are the same as the parity value recorded in the spare area, to determine whether a page is valid, and, to correct it otherwise. The FMC_ECCR register should be cleared after being read by setting the ECCEN bit to 0. To compute a new data block, the ECCEN bit must be set to 1.
    reserved_t<0x1b> _0x98;
    volatile uint32_t FMC_BWTR1; // This register contains the control information of each memory bank. It is used for SRAMs, PSRAMs and NOR Flash memories. When the EXTMOD bit is set in the FMC_BCRx register, then this register is active for write access.
    reserved_t<0x1> _0x108;
    volatile uint32_t FMC_BWTR2; // This register contains the control information of each memory bank. It is used for SRAMs, PSRAMs and NOR Flash memories. When the EXTMOD bit is set in the FMC_BCRx register, then this register is active for write access.
    reserved_t<0x1> _0x110;
    volatile uint32_t FMC_BWTR3; // This register contains the control information of each memory bank. It is used for SRAMs, PSRAMs and NOR Flash memories. When the EXTMOD bit is set in the FMC_BCRx register, then this register is active for write access.
    reserved_t<0x1> _0x118;
    volatile uint32_t FMC_BWTR4; // This register contains the control information of each memory bank. It is used for SRAMs, PSRAMs and NOR Flash memories. When the EXTMOD bit is set in the FMC_BCRx register, then this register is active for write access.

    static constexpr uint32_t FMC_BCR1_RESET_VALUE = 0x30db; // Reset value
    static constexpr uint32_t FMC_BCR1_MBKEN = 0x1; // Memory bank enable bit This bit enables the memory bank. After reset Bank1 is enabled, all others are disabled. Accessing a disabled bank causes an ERROR on AXI bus.
    static constexpr uint32_t FMC_BCR1_MUXEN = 0x2; // Address/data multiplexing enable bit When this bit is set, the address and data values are multiplexed on the data bus, valid only with NOR and PSRAM memories:
    typedef bit_field_t<2, 0x3> FMC_BCR1_MTYP; // Memory type These bits define the type of external memory attached to the corresponding memory bank:
    typedef bit_field_t<4, 0x3> FMC_BCR1_MWID; // Memory data bus width Defines the external memory device width, valid for all type of memories.
    static constexpr uint32_t FMC_BCR1_FACCEN = 0x40; // Flash access enable This bit enables NOR Flash memory access operations.
    static constexpr uint32_t FMC_BCR1_BURSTEN = 0x100; // Burst enable bit This bit enables/disables synchronous accesses during read operations. It is valid only for synchronous memories operating in Burst mode:
    static constexpr uint32_t FMC_BCR1_WAITPOL = 0x200; // Wait signal polarity bit This bit defines the polarity of the wait signal from memory used for either in synchronous or asynchronous mode:
    static constexpr uint32_t FMC_BCR1_WAITCFG = 0x800; // Wait timing configuration The NWAIT signal indicates whether the data from the memory are valid or if a wait state must be inserted when accessing the memory in synchronous mode. This configuration bit determines if NWAIT is asserted by the memory one clock cycle before the wait state or during the wait state:
    static constexpr uint32_t FMC_BCR1_WREN = 0x1000; // Write enable bit This bit indicates whether write operations are enabled/disabled in the bank by the FMC:
    static constexpr uint32_t FMC_BCR1_WAITEN = 0x2000; // Wait enable bit This bit enables/disables wait-state insertion via the NWAIT signal when accessing the memory in synchronous mode.
    static constexpr uint32_t FMC_BCR1_EXTMOD = 0x4000; // Extended mode enable. This bit enables the FMC to program the write timings for asynchronous accesses inside the FMC_BWTR register, thus resulting in different timings for read and write operations. Note: When the extended mode is disabled, the FMC can operate in Mode1 or Mode2 as follows: ** Mode 1 is the default mode when the SRAM/PSRAM memory type is selected (MTYP =0x0 or 0x01) ** Mode 2 is the default mode when the NOR memory type is selected (MTYP = 0x10).
    static constexpr uint32_t FMC_BCR1_ASYNCWAIT = 0x8000; // Wait signal during asynchronous transfers This bit enables/disables the FMC to use the wait signal even during an asynchronous protocol.
    typedef bit_field_t<16, 0x7> FMC_BCR1_CPSIZE; // CRAM Page Size These are used for Cellular RAM 1.5 which does not allow burst access to cross the address boundaries between pages. When these bits are configured, the FMC controller splits automatically the burst access when the memory page size is reached (refer to memory datasheet for page size). Other configuration: reserved.
    static constexpr uint32_t FMC_BCR1_CBURSTRW = 0x80000; // Write burst enable For PSRAM (CRAM) operating in Burst mode, the bit enables synchronous accesses during write operations. The enable bit for synchronous read accesses is the BURSTEN bit in the FMC_BCRx register.
    static constexpr uint32_t FMC_BCR1_CCLKEN = 0x100000; // Continuous Clock Enable This bit enables the FMC_CLK clock output to external memory devices. Note: The CCLKEN bit of the FMC_BCR2..4 registers is dont care. It is only enabled through the FMC_BCR1 register. Bank 1 must be configured in synchronous mode to generate the FMC_CLK continuous clock. If CCLKEN bit is set, the FMC_CLK clock ratio is specified by CLKDIV value in the FMC_BTR1 register. CLKDIV in FMC_BWTR1 is dont care. If the synchronous mode is used and CCLKEN bit is set, the synchronous memories connected to other banks than Bank 1 are clocked by the same clock (the CLKDIV value in the FMC_BTR2..4 and FMC_BWTR2..4 registers for other banks has no effect.)
    static constexpr uint32_t FMC_BCR1_WFDIS = 0x200000; // Write FIFO Disable This bit disables the Write FIFO used by the FMC controller. Note: The WFDIS bit of the FMC_BCR2..4 registers is dont care. It is only enabled through the FMC_BCR1 register.
    typedef bit_field_t<22, 0x3> FMC_BCR1_NBLSET; // NBLSET

    static constexpr uint32_t FMC_BTR1_RESET_VALUE = 0xfffffff; // Reset value
    typedef bit_field_t<0, 0xf> FMC_BTR1_ADDSET; // Address setup phase duration These bits are written by software to define the duration of the address setup phase (refer to Figure81 to Figure93), used in SRAMs, ROMs and asynchronous NOR Flash: For each access mode address setup phase duration, please refer to the respective figure (refer to Figure81 to Figure93). Note: In synchronous accesses, this value is dont care. In Muxed mode or Mode D, the minimum value for ADDSET is 1.
    typedef bit_field_t<4, 0xf> FMC_BTR1_ADDHLD; // Address-hold phase duration These bits are written by software to define the duration of the address hold phase (refer to Figure81 to Figure93), used in mode D or multiplexed accesses: For each access mode address-hold phase duration, please refer to the respective figure (Figure81 to Figure93). Note: In synchronous accesses, this value is not used, the address hold phase is always 1 memory clock period duration.
    typedef bit_field_t<8, 0xff> FMC_BTR1_DATAST; // Data-phase duration These bits are written by software to define the duration of the data phase (refer to Figure81 to Figure93), used in asynchronous accesses: For each memory type and access mode data-phase duration, please refer to the respective figure (Figure81 to Figure93). Example: Mode1, write access, DATAST=1: Data-phase duration= DATAST+1 = 2 KCK_FMC clock cycles. Note: In synchronous accesses, this value is dont care.
    typedef bit_field_t<16, 0xf> FMC_BTR1_BUSTURN; // Bus turnaround phase duration These bits are written by software to add a delay at the end of a write-to-read or read-to write transaction. The programmed bus turnaround delay is inserted between an asynchronous read (in muxed or mode D) or write transaction and any other asynchronous /synchronous read/write from/to a static bank. If a read operation is performed, the bank can be the same or a different one, whereas it must be different in case of write operation to the bank, except in muxed mode or mode D. In some cases, whatever the programmed BUSTRUN values, the bus turnaround delay is fixed as follows: The bus turnaround delay is not inserted between two consecutive asynchronous write transfers to the same static memory bank except in muxed mode and mode D. There is a bus turnaround delay of 1 FMC clock cycle between: Two consecutive asynchronous read transfers to the same static memory bank except for modes muxed and D. An asynchronous read to an asynchronous or synchronous write to any static bank or dynamic bank except in modes muxed and D mode. There is a bus turnaround delay of 2 FMC clock cycle between: Two consecutive synchronous write operations (in Burst or Single mode) to the same bank. A synchronous write (burst or single) access and an asynchronous write or read transfer to or from static memory bank (the bank can be the same or a different one in case of a read operation. Two consecutive synchronous read operations (in Burst or Single mode) followed by any synchronous/asynchronous read or write from/to another static memory bank. There is a bus turnaround delay of 3 FMC clock cycle between: Two consecutive synchronous write operations (in Burst or Single mode) to different static banks. A synchronous write access (in Burst or Single mode) and a synchronous read from the same or a different bank. The bus turnaround delay allows to match the minimum time between consecutive transactions (tEHEL from NEx high to NEx low) and the maximum time required by the memory to free the data bus after a read access (tEHQZ): (BUSTRUN + 1) KCK_FMC period &amp;#8805; tEHELmin and (BUSTRUN + 2)KCK_FMC period &amp;#8805; tEHQZmax if EXTMOD = 0 (BUSTRUN + 2)KCK_FMC period &amp;#8805; max (tEHELmin, tEHQZmax) if EXTMOD = 126. ...
    typedef bit_field_t<20, 0xf> FMC_BTR1_CLKDIV; // Clock divide ratio (for FMC_CLK signal) These bits define the period of FMC_CLK clock output signal, expressed in number of KCK_FMC cycles: In asynchronous NOR Flash, SRAM or PSRAM accesses, this value is dont care. Note: Refer to Section20.6.5: Synchronous transactions for FMC_CLK divider ratio formula)
    typedef bit_field_t<24, 0xf> FMC_BTR1_DATLAT; // Data latency for synchronous memory For synchronous access with read write burst mode enabled these bits define the number of memory clock cycles
    typedef bit_field_t<28, 0x3> FMC_BTR1_ACCMOD; // Access mode These bits specify the asynchronous access modes as shown in the timing diagrams. They are taken into account only when the EXTMOD bit in the FMC_BCRx register is 1.
    typedef bit_field_t<30, 0x3> FMC_BTR1_DATAHLD; // DATAHLD

    static constexpr uint32_t FMC_BCR2_RESET_VALUE = 0x30d2; // Reset value
    static constexpr uint32_t FMC_BCR2_MBKEN = 0x1; // Memory bank enable bit This bit enables the memory bank. After reset Bank1 is enabled, all others are disabled. Accessing a disabled bank causes an ERROR on AXI bus.
    static constexpr uint32_t FMC_BCR2_MUXEN = 0x2; // Address/data multiplexing enable bit When this bit is set, the address and data values are multiplexed on the data bus, valid only with NOR and PSRAM memories:
    typedef bit_field_t<2, 0x3> FMC_BCR2_MTYP; // Memory type These bits define the type of external memory attached to the corresponding memory bank:
    typedef bit_field_t<4, 0x3> FMC_BCR2_MWID; // Memory data bus width Defines the external memory device width, valid for all type of memories.
    static constexpr uint32_t FMC_BCR2_FACCEN = 0x40; // Flash access enable This bit enables NOR Flash memory access operations.
    static constexpr uint32_t FMC_BCR2_BURSTEN = 0x100; // Burst enable bit This bit enables/disables synchronous accesses during read operations. It is valid only for synchronous memories operating in Burst mode:
    static constexpr uint32_t FMC_BCR2_WAITPOL = 0x200; // Wait signal polarity bit This bit defines the polarity of the wait signal from memory used for either in synchronous or asynchronous mode:
    static constexpr uint32_t FMC_BCR2_WAITCFG = 0x800; // Wait timing configuration The NWAIT signal indicates whether the data from the memory are valid or if a wait state must be inserted when accessing the memory in synchronous mode. This configuration bit determines if NWAIT is asserted by the memory one clock cycle before the wait state or during the wait state:
    static constexpr uint32_t FMC_BCR2_WREN = 0x1000; // Write enable bit This bit indicates whether write operations are enabled/disabled in the bank by the FMC:
    static constexpr uint32_t FMC_BCR2_WAITEN = 0x2000; // Wait enable bit This bit enables/disables wait-state insertion via the NWAIT signal when accessing the memory in synchronous mode.
    static constexpr uint32_t FMC_BCR2_EXTMOD = 0x4000; // Extended mode enable. This bit enables the FMC to program the write timings for asynchronous accesses inside the FMC_BWTR register, thus resulting in different timings for read and write operations. Note: When the extended mode is disabled, the FMC can operate in Mode1 or Mode2 as follows: ** Mode 1 is the default mode when the SRAM/PSRAM memory type is selected (MTYP =0x0 or 0x01) ** Mode 2 is the default mode when the NOR memory type is selected (MTYP = 0x10).
    static constexpr uint32_t FMC_BCR2_ASYNCWAIT = 0x8000; // Wait signal during asynchronous transfers This bit enables/disables the FMC to use the wait signal even during an asynchronous protocol.
    typedef bit_field_t<16, 0x7> FMC_BCR2_CPSIZE; // CRAM Page Size These are used for Cellular RAM 1.5 which does not allow burst access to cross the address boundaries between pages. When these bits are configured, the FMC controller splits automatically the burst access when the memory page size is reached (refer to memory datasheet for page size). Other configuration: reserved.
    static constexpr uint32_t FMC_BCR2_CBURSTRW = 0x80000; // Write burst enable For PSRAM (CRAM) operating in Burst mode, the bit enables synchronous accesses during write operations. The enable bit for synchronous read accesses is the BURSTEN bit in the FMC_BCRx register.
    static constexpr uint32_t FMC_BCR2_CCLKEN = 0x100000; // Continuous Clock Enable This bit enables the FMC_CLK clock output to external memory devices. Note: The CCLKEN bit of the FMC_BCR2..4 registers is dont care. It is only enabled through the FMC_BCR1 register. Bank 1 must be configured in synchronous mode to generate the FMC_CLK continuous clock. If CCLKEN bit is set, the FMC_CLK clock ratio is specified by CLKDIV value in the FMC_BTR1 register. CLKDIV in FMC_BWTR1 is dont care. If the synchronous mode is used and CCLKEN bit is set, the synchronous memories connected to other banks than Bank 1 are clocked by the same clock (the CLKDIV value in the FMC_BTR2..4 and FMC_BWTR2..4 registers for other banks has no effect.)
    static constexpr uint32_t FMC_BCR2_WFDIS = 0x200000; // Write FIFO Disable This bit disables the Write FIFO used by the FMC controller. Note: The WFDIS bit of the FMC_BCR2..4 registers is dont care. It is only enabled through the FMC_BCR1 register.
    typedef bit_field_t<22, 0x3> FMC_BCR2_NBLSET; // NBLSET

    static constexpr uint32_t FMC_BTR2_RESET_VALUE = 0xfffffff; // Reset value
    typedef bit_field_t<0, 0xf> FMC_BTR2_ADDSET; // Address setup phase duration These bits are written by software to define the duration of the address setup phase (refer to Figure81 to Figure93), used in SRAMs, ROMs and asynchronous NOR Flash: For each access mode address setup phase duration, please refer to the respective figure (refer to Figure81 to Figure93). Note: In synchronous accesses, this value is dont care. In Muxed mode or Mode D, the minimum value for ADDSET is 1.
    typedef bit_field_t<4, 0xf> FMC_BTR2_ADDHLD; // Address-hold phase duration These bits are written by software to define the duration of the address hold phase (refer to Figure81 to Figure93), used in mode D or multiplexed accesses: For each access mode address-hold phase duration, please refer to the respective figure (Figure81 to Figure93). Note: In synchronous accesses, this value is not used, the address hold phase is always 1 memory clock period duration.
    typedef bit_field_t<8, 0xff> FMC_BTR2_DATAST; // Data-phase duration These bits are written by software to define the duration of the data phase (refer to Figure81 to Figure93), used in asynchronous accesses: For each memory type and access mode data-phase duration, please refer to the respective figure (Figure81 to Figure93). Example: Mode1, write access, DATAST=1: Data-phase duration= DATAST+1 = 2 KCK_FMC clock cycles. Note: In synchronous accesses, this value is dont care.
    typedef bit_field_t<16, 0xf> FMC_BTR2_BUSTURN; // Bus turnaround phase duration These bits are written by software to add a delay at the end of a write-to-read or read-to write transaction. The programmed bus turnaround delay is inserted between an asynchronous read (in muxed or mode D) or write transaction and any other asynchronous /synchronous read/write from/to a static bank. If a read operation is performed, the bank can be the same or a different one, whereas it must be different in case of write operation to the bank, except in muxed mode or mode D. In some cases, whatever the programmed BUSTRUN values, the bus turnaround delay is fixed as follows: The bus turnaround delay is not inserted between two consecutive asynchronous write transfers to the same static memory bank except in muxed mode and mode D. There is a bus turnaround delay of 1 FMC clock cycle between: Two consecutive asynchronous read transfers to the same static memory bank except for modes muxed and D. An asynchronous read to an asynchronous or synchronous write to any static bank or dynamic bank except in modes muxed and D mode. There is a bus turnaround delay of 2 FMC clock cycle between: Two consecutive synchronous write operations (in Burst or Single mode) to the same bank. A synchronous write (burst or single) access and an asynchronous write or read transfer to or from static memory bank (the bank can be the same or a different one in case of a read operation. Two consecutive synchronous read operations (in Burst or Single mode) followed by any synchronous/asynchronous read or write from/to another static memory bank. There is a bus turnaround delay of 3 FMC clock cycle between: Two consecutive synchronous write operations (in Burst or Single mode) to different static banks. A synchronous write access (in Burst or Single mode) and a synchronous read from the same or a different bank. The bus turnaround delay allows to match the minimum time between consecutive transactions (tEHEL from NEx high to NEx low) and the maximum time required by the memory to free the data bus after a read access (tEHQZ): (BUSTRUN + 1) KCK_FMC period &amp;#8805; tEHELmin and (BUSTRUN + 2)KCK_FMC period &amp;#8805; tEHQZmax if EXTMOD = 0 (BUSTRUN + 2)KCK_FMC period &amp;#8805; max (tEHELmin, tEHQZmax) if EXTMOD = 126. ...
    typedef bit_field_t<20, 0xf> FMC_BTR2_CLKDIV; // Clock divide ratio (for FMC_CLK signal) These bits define the period of FMC_CLK clock output signal, expressed in number of KCK_FMC cycles: In asynchronous NOR Flash, SRAM or PSRAM accesses, this value is dont care. Note: Refer to Section20.6.5: Synchronous transactions for FMC_CLK divider ratio formula)
    typedef bit_field_t<24, 0xf> FMC_BTR2_DATLAT; // Data latency for synchronous memory For synchronous access with read write burst mode enabled these bits define the number of memory clock cycles
    typedef bit_field_t<28, 0x3> FMC_BTR2_ACCMOD; // Access mode These bits specify the asynchronous access modes as shown in the timing diagrams. They are taken into account only when the EXTMOD bit in the FMC_BCRx register is 1.
    typedef bit_field_t<30, 0x3> FMC_BTR2_DATAHLD; // DATAHLD

    static constexpr uint32_t FMC_BCR3_RESET_VALUE = 0x30d2; // Reset value
    static constexpr uint32_t FMC_BCR3_MBKEN = 0x1; // Memory bank enable bit This bit enables the memory bank. After reset Bank1 is enabled, all others are disabled. Accessing a disabled bank causes an ERROR on AXI bus.
    static constexpr uint32_t FMC_BCR3_MUXEN = 0x2; // Address/data multiplexing enable bit When this bit is set, the address and data values are multiplexed on the data bus, valid only with NOR and PSRAM memories:
    typedef bit_field_t<2, 0x3> FMC_BCR3_MTYP; // Memory type These bits define the type of external memory attached to the corresponding memory bank:
    typedef bit_field_t<4, 0x3> FMC_BCR3_MWID; // Memory data bus width Defines the external memory device width, valid for all type of memories.
    static constexpr uint32_t FMC_BCR3_FACCEN = 0x40; // Flash access enable This bit enables NOR Flash memory access operations.
    static constexpr uint32_t FMC_BCR3_BURSTEN = 0x100; // Burst enable bit This bit enables/disables synchronous accesses during read operations. It is valid only for synchronous memories operating in Burst mode:
    static constexpr uint32_t FMC_BCR3_WAITPOL = 0x200; // Wait signal polarity bit This bit defines the polarity of the wait signal from memory used for either in synchronous or asynchronous mode:
    static constexpr uint32_t FMC_BCR3_WAITCFG = 0x800; // Wait timing configuration The NWAIT signal indicates whether the data from the memory are valid or if a wait state must be inserted when accessing the memory in synchronous mode. This configuration bit determines if NWAIT is asserted by the memory one clock cycle before the wait state or during the wait state:
    static constexpr uint32_t FMC_BCR3_WREN = 0x1000; // Write enable bit This bit indicates whether write operations are enabled/disabled in the bank by the FMC:
    static constexpr uint32_t FMC_BCR3_WAITEN = 0x2000; // Wait enable bit This bit enables/disables wait-state insertion via the NWAIT signal when accessing the memory in synchronous mode.
    static constexpr uint32_t FMC_BCR3_EXTMOD = 0x4000; // Extended mode enable. This bit enables the FMC to program the write timings for asynchronous accesses inside the FMC_BWTR register, thus resulting in different timings for read and write operations. Note: When the extended mode is disabled, the FMC can operate in Mode1 or Mode2 as follows: ** Mode 1 is the default mode when the SRAM/PSRAM memory type is selected (MTYP =0x0 or 0x01) ** Mode 2 is the default mode when the NOR memory type is selected (MTYP = 0x10).
    static constexpr uint32_t FMC_BCR3_ASYNCWAIT = 0x8000; // Wait signal during asynchronous transfers This bit enables/disables the FMC to use the wait signal even during an asynchronous protocol.
    typedef bit_field_t<16, 0x7> FMC_BCR3_CPSIZE; // CRAM Page Size These are used for Cellular RAM 1.5 which does not allow burst access to cross the address boundaries between pages. When these bits are configured, the FMC controller splits automatically the burst access when the memory page size is reached (refer to memory datasheet for page size). Other configuration: reserved.
    static constexpr uint32_t FMC_BCR3_CBURSTRW = 0x80000; // Write burst enable For PSRAM (CRAM) operating in Burst mode, the bit enables synchronous accesses during write operations. The enable bit for synchronous read accesses is the BURSTEN bit in the FMC_BCRx register.
    static constexpr uint32_t FMC_BCR3_CCLKEN = 0x100000; // Continuous Clock Enable This bit enables the FMC_CLK clock output to external memory devices. Note: The CCLKEN bit of the FMC_BCR2..4 registers is dont care. It is only enabled through the FMC_BCR1 register. Bank 1 must be configured in synchronous mode to generate the FMC_CLK continuous clock. If CCLKEN bit is set, the FMC_CLK clock ratio is specified by CLKDIV value in the FMC_BTR1 register. CLKDIV in FMC_BWTR1 is dont care. If the synchronous mode is used and CCLKEN bit is set, the synchronous memories connected to other banks than Bank 1 are clocked by the same clock (the CLKDIV value in the FMC_BTR2..4 and FMC_BWTR2..4 registers for other banks has no effect.)
    static constexpr uint32_t FMC_BCR3_WFDIS = 0x200000; // Write FIFO Disable This bit disables the Write FIFO used by the FMC controller. Note: The WFDIS bit of the FMC_BCR2..4 registers is dont care. It is only enabled through the FMC_BCR1 register.
    typedef bit_field_t<22, 0x3> FMC_BCR3_NBLSET; // NBLSET

    static constexpr uint32_t FMC_BTR3_RESET_VALUE = 0xfffffff; // Reset value
    typedef bit_field_t<0, 0xf> FMC_BTR3_ADDSET; // Address setup phase duration These bits are written by software to define the duration of the address setup phase (refer to Figure81 to Figure93), used in SRAMs, ROMs and asynchronous NOR Flash: For each access mode address setup phase duration, please refer to the respective figure (refer to Figure81 to Figure93). Note: In synchronous accesses, this value is dont care. In Muxed mode or Mode D, the minimum value for ADDSET is 1.
    typedef bit_field_t<4, 0xf> FMC_BTR3_ADDHLD; // Address-hold phase duration These bits are written by software to define the duration of the address hold phase (refer to Figure81 to Figure93), used in mode D or multiplexed accesses: For each access mode address-hold phase duration, please refer to the respective figure (Figure81 to Figure93). Note: In synchronous accesses, this value is not used, the address hold phase is always 1 memory clock period duration.
    typedef bit_field_t<8, 0xff> FMC_BTR3_DATAST; // Data-phase duration These bits are written by software to define the duration of the data phase (refer to Figure81 to Figure93), used in asynchronous accesses: For each memory type and access mode data-phase duration, please refer to the respective figure (Figure81 to Figure93). Example: Mode1, write access, DATAST=1: Data-phase duration= DATAST+1 = 2 KCK_FMC clock cycles. Note: In synchronous accesses, this value is dont care.
    typedef bit_field_t<16, 0xf> FMC_BTR3_BUSTURN; // Bus turnaround phase duration These bits are written by software to add a delay at the end of a write-to-read or read-to write transaction. The programmed bus turnaround delay is inserted between an asynchronous read (in muxed or mode D) or write transaction and any other asynchronous /synchronous read/write from/to a static bank. If a read operation is performed, the bank can be the same or a different one, whereas it must be different in case of write operation to the bank, except in muxed mode or mode D. In some cases, whatever the programmed BUSTRUN values, the bus turnaround delay is fixed as follows: The bus turnaround delay is not inserted between two consecutive asynchronous write transfers to the same static memory bank except in muxed mode and mode D. There is a bus turnaround delay of 1 FMC clock cycle between: Two consecutive asynchronous read transfers to the same static memory bank except for modes muxed and D. An asynchronous read to an asynchronous or synchronous write to any static bank or dynamic bank except in modes muxed and D mode. There is a bus turnaround delay of 2 FMC clock cycle between: Two consecutive synchronous write operations (in Burst or Single mode) to the same bank. A synchronous write (burst or single) access and an asynchronous write or read transfer to or from static memory bank (the bank can be the same or a different one in case of a read operation. Two consecutive synchronous read operations (in Burst or Single mode) followed by any synchronous/asynchronous read or write from/to another static memory bank. There is a bus turnaround delay of 3 FMC clock cycle between: Two consecutive synchronous write operations (in Burst or Single mode) to different static banks. A synchronous write access (in Burst or Single mode) and a synchronous read from the same or a different bank. The bus turnaround delay allows to match the minimum time between consecutive transactions (tEHEL from NEx high to NEx low) and the maximum time required by the memory to free the data bus after a read access (tEHQZ): (BUSTRUN + 1) KCK_FMC period &amp;#8805; tEHELmin and (BUSTRUN + 2)KCK_FMC period &amp;#8805; tEHQZmax if EXTMOD = 0 (BUSTRUN + 2)KCK_FMC period &amp;#8805; max (tEHELmin, tEHQZmax) if EXTMOD = 126. ...
    typedef bit_field_t<20, 0xf> FMC_BTR3_CLKDIV; // Clock divide ratio (for FMC_CLK signal) These bits define the period of FMC_CLK clock output signal, expressed in number of KCK_FMC cycles: In asynchronous NOR Flash, SRAM or PSRAM accesses, this value is dont care. Note: Refer to Section20.6.5: Synchronous transactions for FMC_CLK divider ratio formula)
    typedef bit_field_t<24, 0xf> FMC_BTR3_DATLAT; // Data latency for synchronous memory For synchronous access with read write burst mode enabled these bits define the number of memory clock cycles
    typedef bit_field_t<28, 0x3> FMC_BTR3_ACCMOD; // Access mode These bits specify the asynchronous access modes as shown in the timing diagrams. They are taken into account only when the EXTMOD bit in the FMC_BCRx register is 1.
    typedef bit_field_t<30, 0x3> FMC_BTR3_DATAHLD; // DATAHLD

    static constexpr uint32_t FMC_BCR4_RESET_VALUE = 0x30d2; // Reset value
    static constexpr uint32_t FMC_BCR4_MBKEN = 0x1; // Memory bank enable bit This bit enables the memory bank. After reset Bank1 is enabled, all others are disabled. Accessing a disabled bank causes an ERROR on AXI bus.
    static constexpr uint32_t FMC_BCR4_MUXEN = 0x2; // Address/data multiplexing enable bit When this bit is set, the address and data values are multiplexed on the data bus, valid only with NOR and PSRAM memories:
    typedef bit_field_t<2, 0x3> FMC_BCR4_MTYP; // Memory type These bits define the type of external memory attached to the corresponding memory bank:
    typedef bit_field_t<4, 0x3> FMC_BCR4_MWID; // Memory data bus width Defines the external memory device width, valid for all type of memories.
    static constexpr uint32_t FMC_BCR4_FACCEN = 0x40; // Flash access enable This bit enables NOR Flash memory access operations.
    static constexpr uint32_t FMC_BCR4_BURSTEN = 0x100; // Burst enable bit This bit enables/disables synchronous accesses during read operations. It is valid only for synchronous memories operating in Burst mode:
    static constexpr uint32_t FMC_BCR4_WAITPOL = 0x200; // Wait signal polarity bit This bit defines the polarity of the wait signal from memory used for either in synchronous or asynchronous mode:
    static constexpr uint32_t FMC_BCR4_WAITCFG = 0x800; // Wait timing configuration The NWAIT signal indicates whether the data from the memory are valid or if a wait state must be inserted when accessing the memory in synchronous mode. This configuration bit determines if NWAIT is asserted by the memory one clock cycle before the wait state or during the wait state:
    static constexpr uint32_t FMC_BCR4_WREN = 0x1000; // Write enable bit This bit indicates whether write operations are enabled/disabled in the bank by the FMC:
    static constexpr uint32_t FMC_BCR4_WAITEN = 0x2000; // Wait enable bit This bit enables/disables wait-state insertion via the NWAIT signal when accessing the memory in synchronous mode.
    static constexpr uint32_t FMC_BCR4_EXTMOD = 0x4000; // Extended mode enable. This bit enables the FMC to program the write timings for asynchronous accesses inside the FMC_BWTR register, thus resulting in different timings for read and write operations. Note: When the extended mode is disabled, the FMC can operate in Mode1 or Mode2 as follows: ** Mode 1 is the default mode when the SRAM/PSRAM memory type is selected (MTYP =0x0 or 0x01) ** Mode 2 is the default mode when the NOR memory type is selected (MTYP = 0x10).
    static constexpr uint32_t FMC_BCR4_ASYNCWAIT = 0x8000; // Wait signal during asynchronous transfers This bit enables/disables the FMC to use the wait signal even during an asynchronous protocol.
    typedef bit_field_t<16, 0x7> FMC_BCR4_CPSIZE; // CRAM Page Size These are used for Cellular RAM 1.5 which does not allow burst access to cross the address boundaries between pages. When these bits are configured, the FMC controller splits automatically the burst access when the memory page size is reached (refer to memory datasheet for page size). Other configuration: reserved.
    static constexpr uint32_t FMC_BCR4_CBURSTRW = 0x80000; // Write burst enable For PSRAM (CRAM) operating in Burst mode, the bit enables synchronous accesses during write operations. The enable bit for synchronous read accesses is the BURSTEN bit in the FMC_BCRx register.
    static constexpr uint32_t FMC_BCR4_CCLKEN = 0x100000; // Continuous Clock Enable This bit enables the FMC_CLK clock output to external memory devices. Note: The CCLKEN bit of the FMC_BCR2..4 registers is dont care. It is only enabled through the FMC_BCR1 register. Bank 1 must be configured in synchronous mode to generate the FMC_CLK continuous clock. If CCLKEN bit is set, the FMC_CLK clock ratio is specified by CLKDIV value in the FMC_BTR1 register. CLKDIV in FMC_BWTR1 is dont care. If the synchronous mode is used and CCLKEN bit is set, the synchronous memories connected to other banks than Bank 1 are clocked by the same clock (the CLKDIV value in the FMC_BTR2..4 and FMC_BWTR2..4 registers for other banks has no effect.)
    static constexpr uint32_t FMC_BCR4_WFDIS = 0x200000; // Write FIFO Disable This bit disables the Write FIFO used by the FMC controller. Note: The WFDIS bit of the FMC_BCR2..4 registers is dont care. It is only enabled through the FMC_BCR1 register.
    typedef bit_field_t<22, 0x3> FMC_BCR4_NBLSET; // NBLSET

    static constexpr uint32_t FMC_BTR4_RESET_VALUE = 0xfffffff; // Reset value
    typedef bit_field_t<0, 0xf> FMC_BTR4_ADDSET; // Address setup phase duration These bits are written by software to define the duration of the address setup phase (refer to Figure81 to Figure93), used in SRAMs, ROMs and asynchronous NOR Flash: For each access mode address setup phase duration, please refer to the respective figure (refer to Figure81 to Figure93). Note: In synchronous accesses, this value is dont care. In Muxed mode or Mode D, the minimum value for ADDSET is 1.
    typedef bit_field_t<4, 0xf> FMC_BTR4_ADDHLD; // Address-hold phase duration These bits are written by software to define the duration of the address hold phase (refer to Figure81 to Figure93), used in mode D or multiplexed accesses: For each access mode address-hold phase duration, please refer to the respective figure (Figure81 to Figure93). Note: In synchronous accesses, this value is not used, the address hold phase is always 1 memory clock period duration.
    typedef bit_field_t<8, 0xff> FMC_BTR4_DATAST; // Data-phase duration These bits are written by software to define the duration of the data phase (refer to Figure81 to Figure93), used in asynchronous accesses: For each memory type and access mode data-phase duration, please refer to the respective figure (Figure81 to Figure93). Example: Mode1, write access, DATAST=1: Data-phase duration= DATAST+1 = 2 KCK_FMC clock cycles. Note: In synchronous accesses, this value is dont care.
    typedef bit_field_t<16, 0xf> FMC_BTR4_BUSTURN; // Bus turnaround phase duration These bits are written by software to add a delay at the end of a write-to-read or read-to write transaction. The programmed bus turnaround delay is inserted between an asynchronous read (in muxed or mode D) or write transaction and any other asynchronous /synchronous read/write from/to a static bank. If a read operation is performed, the bank can be the same or a different one, whereas it must be different in case of write operation to the bank, except in muxed mode or mode D. In some cases, whatever the programmed BUSTRUN values, the bus turnaround delay is fixed as follows: The bus turnaround delay is not inserted between two consecutive asynchronous write transfers to the same static memory bank except in muxed mode and mode D. There is a bus turnaround delay of 1 FMC clock cycle between: Two consecutive asynchronous read transfers to the same static memory bank except for modes muxed and D. An asynchronous read to an asynchronous or synchronous write to any static bank or dynamic bank except in modes muxed and D mode. There is a bus turnaround delay of 2 FMC clock cycle between: Two consecutive synchronous write operations (in Burst or Single mode) to the same bank. A synchronous write (burst or single) access and an asynchronous write or read transfer to or from static memory bank (the bank can be the same or a different one in case of a read operation. Two consecutive synchronous read operations (in Burst or Single mode) followed by any synchronous/asynchronous read or write from/to another static memory bank. There is a bus turnaround delay of 3 FMC clock cycle between: Two consecutive synchronous write operations (in Burst or Single mode) to different static banks. A synchronous write access (in Burst or Single mode) and a synchronous read from the same or a different bank. The bus turnaround delay allows to match the minimum time between consecutive transactions (tEHEL from NEx high to NEx low) and the maximum time required by the memory to free the data bus after a read access (tEHQZ): (BUSTRUN + 1) KCK_FMC period &amp;#8805; tEHELmin and (BUSTRUN + 2)KCK_FMC period &amp;#8805; tEHQZmax if EXTMOD = 0 (BUSTRUN + 2)KCK_FMC period &amp;#8805; max (tEHELmin, tEHQZmax) if EXTMOD = 126. ...
    typedef bit_field_t<20, 0xf> FMC_BTR4_CLKDIV; // Clock divide ratio (for FMC_CLK signal) These bits define the period of FMC_CLK clock output signal, expressed in number of KCK_FMC cycles: In asynchronous NOR Flash, SRAM or PSRAM accesses, this value is dont care. Note: Refer to Section20.6.5: Synchronous transactions for FMC_CLK divider ratio formula)
    typedef bit_field_t<24, 0xf> FMC_BTR4_DATLAT; // Data latency for synchronous memory For synchronous access with read write burst mode enabled these bits define the number of memory clock cycles
    typedef bit_field_t<28, 0x3> FMC_BTR4_ACCMOD; // Access mode These bits specify the asynchronous access modes as shown in the timing diagrams. They are taken into account only when the EXTMOD bit in the FMC_BCRx register is 1.
    typedef bit_field_t<30, 0x3> FMC_BTR4_DATAHLD; // DATAHLD

    static constexpr uint32_t PCSCNTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> PCSCNTR_CSCOUNT; // Chip select counter
    static constexpr uint32_t PCSCNTR_CNTB1EN = 0x10000; // Counter Bank 1 enable
    static constexpr uint32_t PCSCNTR_CNTB2EN = 0x20000; // Counter Bank 2 enable
    static constexpr uint32_t PCSCNTR_CNTB3EN = 0x40000; // Counter Bank 3 enable
    static constexpr uint32_t PCSCNTR_CNTB4EN = 0x80000; // Counter Bank 4 enable


    static constexpr uint32_t FMC_PCR_RESET_VALUE = 0x18; // Reset value
    static constexpr uint32_t FMC_PCR_PWAITEN = 0x2; // Wait feature enable bit. This bit enables the Wait feature for the NAND Flash memory bank:
    static constexpr uint32_t FMC_PCR_PBKEN = 0x4; // NAND Flash memory bank enable bit. This bit enables the memory bank. Accessing a disabled memory bank causes an ERROR on AXI bus
    static constexpr uint32_t FMC_PCR_PTYP = 0x8; // Memory type
    typedef bit_field_t<4, 0x3> FMC_PCR_PWID; // Data bus width. These bits define the external memory device width.
    static constexpr uint32_t FMC_PCR_ECCEN = 0x40; // ECC computation logic enable bit
    typedef bit_field_t<9, 0xf> FMC_PCR_TCLR; // CLE to RE delay. These bits set time from CLE low to RE low in number of KCK_FMC clock cycles. The time is give by the following formula: t_clr = (TCLR + SET + 2) TKCK_FMC where TKCK_FMC is the KCK_FMC clock period Note: Set is MEMSET or ATTSET according to the addressed space.
    typedef bit_field_t<13, 0xf> FMC_PCR_TAR; // ALE to RE delay. These bits set time from ALE low to RE low in number of KCK_FMC clock cycles. Time is: t_ar = (TAR + SET + 2) TKCK_FMC where TKCK_FMC is the FMC clock period Note: Set is MEMSET or ATTSET according to the addressed space.
    typedef bit_field_t<17, 0x7> FMC_PCR_ECCPS; // ECC page size. These bits define the page size for the extended ECC:

    static constexpr uint32_t FMC_SR_RESET_VALUE = 0x40; // Reset value
    static constexpr uint32_t FMC_SR_IRS = 0x1; // Interrupt rising edge status The flag is set by hardware and reset by software. Note: If this bit is written by software to 1 it will be set.
    static constexpr uint32_t FMC_SR_ILS = 0x2; // Interrupt high-level status The flag is set by hardware and reset by software.
    static constexpr uint32_t FMC_SR_IFS = 0x4; // Interrupt falling edge status The flag is set by hardware and reset by software. Note: If this bit is written by software to 1 it will be set.
    static constexpr uint32_t FMC_SR_IREN = 0x8; // Interrupt rising edge detection enable bit
    static constexpr uint32_t FMC_SR_ILEN = 0x10; // Interrupt high-level detection enable bit
    static constexpr uint32_t FMC_SR_IFEN = 0x20; // Interrupt falling edge detection enable bit
    static constexpr uint32_t FMC_SR_FEMPT = 0x40; // FIFO empty. Read-only bit that provides the status of the FIFO

    static constexpr uint32_t FMC_PMEM_RESET_VALUE = 0xfcfcfcfc; // Reset value
    typedef bit_field_t<0, 0xff> FMC_PMEM_MEMSET; // Common memory x setup time These bits define the number of KCK_FMC (+1) clock cycles to set up the address before the command assertion (NWE, NOE), for NAND Flash read or write access to common memory space:
    typedef bit_field_t<8, 0xff> FMC_PMEM_MEMWAIT; // Common memory wait time These bits define the minimum number of KCK_FMC (+1) clock cycles to assert the command (NWE, NOE), for NAND Flash read or write access to common memory space. The duration of command assertion is extended if the wait signal (NWAIT) is active (low) at the end of the programmed value of KCK_FMC:
    typedef bit_field_t<16, 0xff> FMC_PMEM_MEMHOLD; // Common memory hold time These bits define the number of KCK_FMC clock cycles for write accesses and KCK_FMC+1 clock cycles for read accesses during which the address is held (and data for write accesses) after the command is de-asserted (NWE, NOE), for NAND Flash read or write access to common memory space:
    typedef bit_field_t<24, 0xff> FMC_PMEM_MEMHIZ; // Common memory x data bus Hi-Z time These bits define the number of KCK_FMC clock cycles during which the data bus is kept Hi-Z after the start of a NAND Flash write access to common memory space. This is only valid for write transactions:

    static constexpr uint32_t FMC_PATT_RESET_VALUE = 0xfcfcfcfc; // Reset value
    typedef bit_field_t<0, 0xff> FMC_PATT_ATTSET; // Attribute memory setup time These bits define the number of KCK_FMC (+1) clock cycles to set up address before the command assertion (NWE, NOE), for NAND Flash read or write access to attribute memory space:
    typedef bit_field_t<8, 0xff> FMC_PATT_ATTWAIT; // Attribute memory wait time These bits define the minimum number of x KCK_FMC (+1) clock cycles to assert the command (NWE, NOE), for NAND Flash read or write access to attribute memory space. The duration for command assertion is extended if the wait signal (NWAIT) is active (low) at the end of the programmed value of KCK_FMC:
    typedef bit_field_t<16, 0xff> FMC_PATT_ATTHOLD; // Attribute memory hold time These bits define the number of KCK_FMC clock cycles during which the address is held (and data for write access) after the command de-assertion (NWE, NOE), for NAND Flash read or write access to attribute memory space:
    typedef bit_field_t<24, 0xff> FMC_PATT_ATTHIZ; // Attribute memory data bus Hi-Z time These bits define the number of KCK_FMC clock cycles during which the data bus is kept in Hi-Z after the start of a NAND Flash write access to attribute memory space on socket. Only valid for writ transaction:


    static constexpr uint32_t FMC_ECCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> FMC_ECCR_ECC; // ECC result This field contains the value computed by the ECC computation logic. Table167 describes the contents of these bit fields.


    static constexpr uint32_t FMC_BWTR1_RESET_VALUE = 0xfffffff; // Reset value
    typedef bit_field_t<0, 0xf> FMC_BWTR1_ADDSET; // Address setup phase duration. These bits are written by software to define the duration of the address setup phase in KCK_FMC cycles (refer to Figure81 to Figure93), used in asynchronous accesses: ... Note: In synchronous accesses, this value is not used, the address setup phase is always 1 Flash clock period duration. In muxed mode, the minimum ADDSET value is 1.
    typedef bit_field_t<4, 0xf> FMC_BWTR1_ADDHLD; // Address-hold phase duration. These bits are written by software to define the duration of the address hold phase (refer to Figure81 to Figure93), used in asynchronous multiplexed accesses: ... Note: In synchronous NOR Flash accesses, this value is not used, the address hold phase is always 1 Flash clock period duration.
    typedef bit_field_t<8, 0xff> FMC_BWTR1_DATAST; // Data-phase duration. These bits are written by software to define the duration of the data phase (refer to Figure81 to Figure93), used in asynchronous SRAM, PSRAM and NOR Flash memory accesses:
    typedef bit_field_t<16, 0xf> FMC_BWTR1_BUSTURN; // Bus turnaround phase duration These bits are written by software to add a delay at the end of a write transaction to match the minimum time between consecutive transactions (tEHEL from ENx high to ENx low): (BUSTRUN + 1) KCK_FMC period &amp;#8805; tEHELmin. The programmed bus turnaround delay is inserted between a an asynchronous write transfer and any other asynchronous /synchronous read or write transfer to or from a static bank. If a read operation is performed, the bank can be the same or a different one, whereas it must be different in case of write operation to the bank, except in muxed mode or mode D. In some cases, whatever the programmed BUSTRUN values, the bus turnaround delay is fixed as follows: The bus turnaround delay is not inserted between two consecutive asynchronous write transfers to the same static memory bank except for muxed mode and mode D. There is a bus turnaround delay of 2 FMC clock cycle between: Two consecutive synchronous write operations (in Burst or Single mode) to the same bank A synchronous write transfer ((in Burst or Single mode) and an asynchronous write or read transfer to or from static memory bank. There is a bus turnaround delay of 3 FMC clock cycle between: Two consecutive synchronous write operations (in Burst or Single mode) to different static banks. A synchronous write transfer (in Burst or Single mode) and a synchronous read from the same or a different bank. ...
    typedef bit_field_t<28, 0x3> FMC_BWTR1_ACCMOD; // Access mode. These bits specify the asynchronous access modes as shown in the next timing diagrams.These bits are taken into account only when the EXTMOD bit in the FMC_BCRx register is 1.


    static constexpr uint32_t FMC_BWTR2_RESET_VALUE = 0xfffffff; // Reset value
    typedef bit_field_t<0, 0xf> FMC_BWTR2_ADDSET; // Address setup phase duration. These bits are written by software to define the duration of the address setup phase in KCK_FMC cycles (refer to Figure81 to Figure93), used in asynchronous accesses: ... Note: In synchronous accesses, this value is not used, the address setup phase is always 1 Flash clock period duration. In muxed mode, the minimum ADDSET value is 1.
    typedef bit_field_t<4, 0xf> FMC_BWTR2_ADDHLD; // Address-hold phase duration. These bits are written by software to define the duration of the address hold phase (refer to Figure81 to Figure93), used in asynchronous multiplexed accesses: ... Note: In synchronous NOR Flash accesses, this value is not used, the address hold phase is always 1 Flash clock period duration.
    typedef bit_field_t<8, 0xff> FMC_BWTR2_DATAST; // Data-phase duration. These bits are written by software to define the duration of the data phase (refer to Figure81 to Figure93), used in asynchronous SRAM, PSRAM and NOR Flash memory accesses:
    typedef bit_field_t<16, 0xf> FMC_BWTR2_BUSTURN; // Bus turnaround phase duration These bits are written by software to add a delay at the end of a write transaction to match the minimum time between consecutive transactions (tEHEL from ENx high to ENx low): (BUSTRUN + 1) KCK_FMC period &amp;#8805; tEHELmin. The programmed bus turnaround delay is inserted between a an asynchronous write transfer and any other asynchronous /synchronous read or write transfer to or from a static bank. If a read operation is performed, the bank can be the same or a different one, whereas it must be different in case of write operation to the bank, except in muxed mode or mode D. In some cases, whatever the programmed BUSTRUN values, the bus turnaround delay is fixed as follows: The bus turnaround delay is not inserted between two consecutive asynchronous write transfers to the same static memory bank except for muxed mode and mode D. There is a bus turnaround delay of 2 FMC clock cycle between: Two consecutive synchronous write operations (in Burst or Single mode) to the same bank A synchronous write transfer ((in Burst or Single mode) and an asynchronous write or read transfer to or from static memory bank. There is a bus turnaround delay of 3 FMC clock cycle between: Two consecutive synchronous write operations (in Burst or Single mode) to different static banks. A synchronous write transfer (in Burst or Single mode) and a synchronous read from the same or a different bank. ...
    typedef bit_field_t<28, 0x3> FMC_BWTR2_ACCMOD; // Access mode. These bits specify the asynchronous access modes as shown in the next timing diagrams.These bits are taken into account only when the EXTMOD bit in the FMC_BCRx register is 1.


    static constexpr uint32_t FMC_BWTR3_RESET_VALUE = 0xfffffff; // Reset value
    typedef bit_field_t<0, 0xf> FMC_BWTR3_ADDSET; // Address setup phase duration. These bits are written by software to define the duration of the address setup phase in KCK_FMC cycles (refer to Figure81 to Figure93), used in asynchronous accesses: ... Note: In synchronous accesses, this value is not used, the address setup phase is always 1 Flash clock period duration. In muxed mode, the minimum ADDSET value is 1.
    typedef bit_field_t<4, 0xf> FMC_BWTR3_ADDHLD; // Address-hold phase duration. These bits are written by software to define the duration of the address hold phase (refer to Figure81 to Figure93), used in asynchronous multiplexed accesses: ... Note: In synchronous NOR Flash accesses, this value is not used, the address hold phase is always 1 Flash clock period duration.
    typedef bit_field_t<8, 0xff> FMC_BWTR3_DATAST; // Data-phase duration. These bits are written by software to define the duration of the data phase (refer to Figure81 to Figure93), used in asynchronous SRAM, PSRAM and NOR Flash memory accesses:
    typedef bit_field_t<16, 0xf> FMC_BWTR3_BUSTURN; // Bus turnaround phase duration These bits are written by software to add a delay at the end of a write transaction to match the minimum time between consecutive transactions (tEHEL from ENx high to ENx low): (BUSTRUN + 1) KCK_FMC period &amp;#8805; tEHELmin. The programmed bus turnaround delay is inserted between a an asynchronous write transfer and any other asynchronous /synchronous read or write transfer to or from a static bank. If a read operation is performed, the bank can be the same or a different one, whereas it must be different in case of write operation to the bank, except in muxed mode or mode D. In some cases, whatever the programmed BUSTRUN values, the bus turnaround delay is fixed as follows: The bus turnaround delay is not inserted between two consecutive asynchronous write transfers to the same static memory bank except for muxed mode and mode D. There is a bus turnaround delay of 2 FMC clock cycle between: Two consecutive synchronous write operations (in Burst or Single mode) to the same bank A synchronous write transfer ((in Burst or Single mode) and an asynchronous write or read transfer to or from static memory bank. There is a bus turnaround delay of 3 FMC clock cycle between: Two consecutive synchronous write operations (in Burst or Single mode) to different static banks. A synchronous write transfer (in Burst or Single mode) and a synchronous read from the same or a different bank. ...
    typedef bit_field_t<28, 0x3> FMC_BWTR3_ACCMOD; // Access mode. These bits specify the asynchronous access modes as shown in the next timing diagrams.These bits are taken into account only when the EXTMOD bit in the FMC_BCRx register is 1.


    static constexpr uint32_t FMC_BWTR4_RESET_VALUE = 0xfffffff; // Reset value
    typedef bit_field_t<0, 0xf> FMC_BWTR4_ADDSET; // Address setup phase duration. These bits are written by software to define the duration of the address setup phase in KCK_FMC cycles (refer to Figure81 to Figure93), used in asynchronous accesses: ... Note: In synchronous accesses, this value is not used, the address setup phase is always 1 Flash clock period duration. In muxed mode, the minimum ADDSET value is 1.
    typedef bit_field_t<4, 0xf> FMC_BWTR4_ADDHLD; // Address-hold phase duration. These bits are written by software to define the duration of the address hold phase (refer to Figure81 to Figure93), used in asynchronous multiplexed accesses: ... Note: In synchronous NOR Flash accesses, this value is not used, the address hold phase is always 1 Flash clock period duration.
    typedef bit_field_t<8, 0xff> FMC_BWTR4_DATAST; // Data-phase duration. These bits are written by software to define the duration of the data phase (refer to Figure81 to Figure93), used in asynchronous SRAM, PSRAM and NOR Flash memory accesses:
    typedef bit_field_t<16, 0xf> FMC_BWTR4_BUSTURN; // Bus turnaround phase duration These bits are written by software to add a delay at the end of a write transaction to match the minimum time between consecutive transactions (tEHEL from ENx high to ENx low): (BUSTRUN + 1) KCK_FMC period &amp;#8805; tEHELmin. The programmed bus turnaround delay is inserted between a an asynchronous write transfer and any other asynchronous /synchronous read or write transfer to or from a static bank. If a read operation is performed, the bank can be the same or a different one, whereas it must be different in case of write operation to the bank, except in muxed mode or mode D. In some cases, whatever the programmed BUSTRUN values, the bus turnaround delay is fixed as follows: The bus turnaround delay is not inserted between two consecutive asynchronous write transfers to the same static memory bank except for muxed mode and mode D. There is a bus turnaround delay of 2 FMC clock cycle between: Two consecutive synchronous write operations (in Burst or Single mode) to the same bank A synchronous write transfer ((in Burst or Single mode) and an asynchronous write or read transfer to or from static memory bank. There is a bus turnaround delay of 3 FMC clock cycle between: Two consecutive synchronous write operations (in Burst or Single mode) to different static banks. A synchronous write transfer (in Burst or Single mode) and a synchronous read from the same or a different bank. ...
    typedef bit_field_t<28, 0x3> FMC_BWTR4_ACCMOD; // Access mode. These bits specify the asynchronous access modes as shown in the next timing diagrams.These bits are taken into account only when the EXTMOD bit in the FMC_BCRx register is 1.
};

template<>
struct peripheral_t<STM32L552, FMC>
{
    using T = stm32l552_fmc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L552, SEC_FMC>
{
    using T = stm32l552_fmc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, FMC>
{
    using T = stm32l552_fmc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, SEC_FMC>
{
    using T = stm32l552_fmc_t;
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

    template<typename RCC>
    static void enable()
    {
        RCC::V.AHB3ENR |= RCC::T::AHB3ENR_FMCEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHB3ENR &= ~RCC::T::AHB3ENR_FMCEN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.AHB3SMENR |= RCC::T::AHB3SMENR_FMCSMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.AHB3SMENR &= ~RCC::T::AHB3SMENR_FMCSMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHB3RSTR |= RCC::T::AHB3RSTR_FMCRST;
    }
};
