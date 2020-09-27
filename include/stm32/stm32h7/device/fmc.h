#pragma once

////
//
//      STM32H7 FMC peripherals
//
///

// FMC: FMC

struct stm32h742x_fmc_t
{
    volatile uint32_t BCR1; // This register contains the control information of each memory bank, used for SRAMs, PSRAM and NOR Flash memories.
    volatile uint32_t BTR1; // This register contains the control information of each memory bank, used for SRAMs, PSRAM and NOR Flash memories.If the EXTMOD bit is set in the FMC_BCRx register, then this register is partitioned for write and read access, that is, 2 registers are available: one to configure read accesses (this register) and one to configure write accesses (FMC_BWTRx registers).
    volatile uint32_t BCR2; // This register contains the control information of each memory bank, used for SRAMs, PSRAM and NOR Flash memories.
    volatile uint32_t BTR2; // This register contains the control information of each memory bank, used for SRAMs, PSRAM and NOR Flash memories.If the EXTMOD bit is set in the FMC_BCRx register, then this register is partitioned for write and read access, that is, 2 registers are available: one to configure read accesses (this register) and one to configure write accesses (FMC_BWTRx registers).
    volatile uint32_t BCR3; // This register contains the control information of each memory bank, used for SRAMs, PSRAM and NOR Flash memories.
    volatile uint32_t BTR3; // This register contains the control information of each memory bank, used for SRAMs, PSRAM and NOR Flash memories.If the EXTMOD bit is set in the FMC_BCRx register, then this register is partitioned for write and read access, that is, 2 registers are available: one to configure read accesses (this register) and one to configure write accesses (FMC_BWTRx registers).
    volatile uint32_t BCR4; // This register contains the control information of each memory bank, used for SRAMs, PSRAM and NOR Flash memories.
    volatile uint32_t BTR4; // This register contains the control information of each memory bank, used for SRAMs, PSRAM and NOR Flash memories.If the EXTMOD bit is set in the FMC_BCRx register, then this register is partitioned for write and read access, that is, 2 registers are available: one to configure read accesses (this register) and one to configure write accesses (FMC_BWTRx registers).
    reserved_t<0x18> _0x20;
    volatile uint32_t PCR; // NAND Flash control registers
    volatile uint32_t SR; // This register contains information about the FIFO status and interrupt. The FMC features a FIFO that is used when writing to memories to transfer up to 16 words of data.This is used to quickly write to the FIFO and free the AXI bus for transactions to peripherals other than the FMC, while the FMC is draining its FIFO into the memory. One of these register bits indicates the status of the FIFO, for ECC purposes.The ECC is calculated while the data are written to the memory. To read the correct ECC, the software must consequently wait until the FIFO is empty.
    volatile uint32_t PMEM; // The FMC_PMEM read/write register contains the timing information for NAND Flash memory bank. This information is used to access either the common memory space of the NAND Flash for command, address write access and data read/write access.
    volatile uint32_t PATT; // The FMC_PATT read/write register contains the timing information for NAND Flash memory bank. It is used for 8-bit accesses to the attribute memory space of the NAND Flash for the last address write access if the timing must differ from that of previous accesses (for Ready/Busy management, refer to Section20.8.5: NAND Flash prewait feature).
    reserved_t<0x1> _0x90;
    volatile uint32_t ECCR; // This register contain the current error correction code value computed by the ECC computation modules of the FMC NAND controller. When the CPU reads/writes the data from a NAND Flash memory page at the correct address (refer to Section20.8.6: Computation of the error correction code (ECC) in NAND Flash memory), the data read/written from/to the NAND Flash memory are processed automatically by the ECC computation module. When X bytes have been read (according to the ECCPS field in the FMC_PCR registers), the CPU must read the computed ECC value from the FMC_ECC registers. It then verifies if these computed parity data are the same as the parity value recorded in the spare area, to determine whether a page is valid, and, to correct it otherwise. The FMC_ECCR register should be cleared after being read by setting the ECCEN bit to 0. To compute a new data block, the ECCEN bit must be set to 1.
    reserved_t<0x1b> _0x98;
    volatile uint32_t BWTR1; // This register contains the control information of each memory bank. It is used for SRAMs, PSRAMs and NOR Flash memories. When the EXTMOD bit is set in the FMC_BCRx register, then this register is active for write access.
    reserved_t<0x1> _0x108;
    volatile uint32_t BWTR2; // This register contains the control information of each memory bank. It is used for SRAMs, PSRAMs and NOR Flash memories. When the EXTMOD bit is set in the FMC_BCRx register, then this register is active for write access.
    reserved_t<0x1> _0x110;
    volatile uint32_t BWTR3; // This register contains the control information of each memory bank. It is used for SRAMs, PSRAMs and NOR Flash memories. When the EXTMOD bit is set in the FMC_BCRx register, then this register is active for write access.
    reserved_t<0x1> _0x118;
    volatile uint32_t BWTR4; // This register contains the control information of each memory bank. It is used for SRAMs, PSRAMs and NOR Flash memories. When the EXTMOD bit is set in the FMC_BCRx register, then this register is active for write access.
    reserved_t<0x8> _0x120;
    volatile uint32_t SDCR1; // This register contains the control parameters for each SDRAM memory bank
    volatile uint32_t SDCR2; // This register contains the control parameters for each SDRAM memory bank
    volatile uint32_t SDTR1; // This register contains the timing parameters of each SDRAM bank
    volatile uint32_t SDTR2; // This register contains the timing parameters of each SDRAM bank
    volatile uint32_t SDCMR; // This register contains the command issued when the SDRAM device is accessed. This register is used to initialize the SDRAM device, and to activate the Self-refresh and the Power-down modes. As soon as the MODE field is written, the command will be issued only to one or to both SDRAM banks according to CTB1 and CTB2 command bits. This register is the same for both SDRAM banks.
    volatile uint32_t SDRTR; // This register sets the refresh rate in number of SDCLK clock cycles between the refresh cycles by configuring the Refresh Timer Count value.Examplewhere 64 ms is the SDRAM refresh period.The refresh rate must be increased by 20 SDRAM clock cycles (as in the above example) to obtain a safe margin if an internal refresh request occurs when a read request has been accepted. It corresponds to a COUNT value of 0000111000000 (448). This 13-bit field is loaded into a timer which is decremented using the SDRAM clock. This timer generates a refresh pulse when zero is reached. The COUNT value must be set at least to 41 SDRAM clock cycles.As soon as the FMC_SDRTR register is programmed, the timer starts counting. If the value programmed in the register is 0, no refresh is carried out. This register must not be reprogrammed after the initialization procedure to avoid modifying the refresh rate.Each time a refresh pulse is generated, this 13-bit COUNT field is reloaded into the counter.If a memory access is in progress, the Auto-refresh request is delayed. However, if the memory access and Auto-refresh requests are generated simultaneously, the Auto-refresh takes precedence. If the memory access occurs during a refresh operation, the request is buffered to be processed when the refresh is complete.This register is common to SDRAM bank 1 and bank 2.
    volatile uint32_t SDSR; // SDRAM Status register

    static constexpr uint32_t BCR1_RESET_VALUE = 0x30db; // Reset value
    static constexpr uint32_t BCR1_MBKEN = 0x1; // Memory bank enable bit This bit enables the memory bank. After reset Bank1 is enabled, all others are disabled. Accessing a disabled bank causes an ERROR on AXI bus.
    static constexpr uint32_t BCR1_MUXEN = 0x2; // Address/data multiplexing enable bit When this bit is set, the address and data values are multiplexed on the data bus, valid only with NOR and PSRAM memories:
    typedef bit_field_t<2, 0x3> BCR1_MTYP; // Memory type These bits define the type of external memory attached to the corresponding memory bank:
    typedef bit_field_t<4, 0x3> BCR1_MWID; // Memory data bus width Defines the external memory device width, valid for all type of memories.
    static constexpr uint32_t BCR1_FACCEN = 0x40; // Flash access enable This bit enables NOR Flash memory access operations.
    static constexpr uint32_t BCR1_BURSTEN = 0x100; // Burst enable bit This bit enables/disables synchronous accesses during read operations. It is valid only for synchronous memories operating in Burst mode:
    static constexpr uint32_t BCR1_WAITPOL = 0x200; // Wait signal polarity bit This bit defines the polarity of the wait signal from memory used for either in synchronous or asynchronous mode:
    static constexpr uint32_t BCR1_WAITCFG = 0x800; // Wait timing configuration The NWAIT signal indicates whether the data from the memory are valid or if a wait state must be inserted when accessing the memory in synchronous mode. This configuration bit determines if NWAIT is asserted by the memory one clock cycle before the wait state or during the wait state:
    static constexpr uint32_t BCR1_WREN = 0x1000; // Write enable bit This bit indicates whether write operations are enabled/disabled in the bank by the FMC:
    static constexpr uint32_t BCR1_WAITEN = 0x2000; // Wait enable bit This bit enables/disables wait-state insertion via the NWAIT signal when accessing the memory in synchronous mode.
    static constexpr uint32_t BCR1_EXTMOD = 0x4000; // Extended mode enable. This bit enables the FMC to program the write timings for asynchronous accesses inside the FMC_BWTR register, thus resulting in different timings for read and write operations. Note: When the extended mode is disabled, the FMC can operate in Mode1 or Mode2 as follows: ** Mode 1 is the default mode when the SRAM/PSRAM memory type is selected (MTYP =0x0 or 0x01) ** Mode 2 is the default mode when the NOR memory type is selected (MTYP = 0x10).
    static constexpr uint32_t BCR1_ASYNCWAIT = 0x8000; // Wait signal during asynchronous transfers This bit enables/disables the FMC to use the wait signal even during an asynchronous protocol.
    typedef bit_field_t<16, 0x7> BCR1_CPSIZE; // CRAM Page Size These are used for Cellular RAM 1.5 which does not allow burst access to cross the address boundaries between pages. When these bits are configured, the FMC controller splits automatically the burst access when the memory page size is reached (refer to memory datasheet for page size). Other configuration: reserved.
    static constexpr uint32_t BCR1_CBURSTRW = 0x80000; // Write burst enable For PSRAM (CRAM) operating in Burst mode, the bit enables synchronous accesses during write operations. The enable bit for synchronous read accesses is the BURSTEN bit in the FMC_BCRx register.
    static constexpr uint32_t BCR1_CCLKEN = 0x100000; // Continuous Clock Enable This bit enables the FMC_CLK clock output to external memory devices. Note: The CCLKEN bit of the FMC_BCR2..4 registers is dont care. It is only enabled through the FMC_BCR1 register. Bank 1 must be configured in synchronous mode to generate the FMC_CLK continuous clock. If CCLKEN bit is set, the FMC_CLK clock ratio is specified by CLKDIV value in the FMC_BTR1 register. CLKDIV in FMC_BWTR1 is dont care. If the synchronous mode is used and CCLKEN bit is set, the synchronous memories connected to other banks than Bank 1 are clocked by the same clock (the CLKDIV value in the FMC_BTR2..4 and FMC_BWTR2..4 registers for other banks has no effect.)
    static constexpr uint32_t BCR1_WFDIS = 0x200000; // Write FIFO Disable This bit disables the Write FIFO used by the FMC controller. Note: The WFDIS bit of the FMC_BCR2..4 registers is dont care. It is only enabled through the FMC_BCR1 register.
    typedef bit_field_t<24, 0x3> BCR1_BMAP; // FMC bank mapping These bits allows different to remap SDRAM bank2 or swap the FMC NOR/PSRAM and SDRAM banks.Refer to Table 10 for Note: The BMAP bits of the FMC_BCR2..4 registers are dont care. It is only enabled through the FMC_BCR1 register.
    static constexpr uint32_t BCR1_FMCEN = 0x80000000; // FMC controller Enable This bit enables/disables the FMC controller. Note: The FMCEN bit of the FMC_BCR2..4 registers is dont care. It is only enabled through the FMC_BCR1 register.

    static constexpr uint32_t BTR1_RESET_VALUE = 0xfffffff; // Reset value
    typedef bit_field_t<0, 0xf> BTR1_ADDSET; // Address setup phase duration These bits are written by software to define the duration of the address setup phase (refer to Figure81 to Figure93), used in SRAMs, ROMs and asynchronous NOR Flash: For each access mode address setup phase duration, please refer to the respective figure (refer to Figure81 to Figure93). Note: In synchronous accesses, this value is dont care. In Muxed mode or Mode D, the minimum value for ADDSET is 1.
    typedef bit_field_t<4, 0xf> BTR1_ADDHLD; // Address-hold phase duration These bits are written by software to define the duration of the address hold phase (refer to Figure81 to Figure93), used in mode D or multiplexed accesses: For each access mode address-hold phase duration, please refer to the respective figure (Figure81 to Figure93). Note: In synchronous accesses, this value is not used, the address hold phase is always 1 memory clock period duration.
    typedef bit_field_t<8, 0xff> BTR1_DATAST; // Data-phase duration These bits are written by software to define the duration of the data phase (refer to Figure81 to Figure93), used in asynchronous accesses: For each memory type and access mode data-phase duration, please refer to the respective figure (Figure81 to Figure93). Example: Mode1, write access, DATAST=1: Data-phase duration= DATAST+1 = 2 KCK_FMC clock cycles. Note: In synchronous accesses, this value is dont care.
    typedef bit_field_t<16, 0xf> BTR1_BUSTURN; // Bus turnaround phase duration These bits are written by software to add a delay at the end of a write-to-read or read-to write transaction. The programmed bus turnaround delay is inserted between an asynchronous read (in muxed or mode D) or write transaction and any other asynchronous /synchronous read/write from/to a static bank. If a read operation is performed, the bank can be the same or a different one, whereas it must be different in case of write operation to the bank, except in muxed mode or mode D. In some cases, whatever the programmed BUSTRUN values, the bus turnaround delay is fixed as follows: The bus turnaround delay is not inserted between two consecutive asynchronous write transfers to the same static memory bank except in muxed mode and mode D. There is a bus turnaround delay of 1 FMC clock cycle between: Two consecutive asynchronous read transfers to the same static memory bank except for modes muxed and D. An asynchronous read to an asynchronous or synchronous write to any static bank or dynamic bank except in modes muxed and D mode. There is a bus turnaround delay of 2 FMC clock cycle between: Two consecutive synchronous write operations (in Burst or Single mode) to the same bank. A synchronous write (burst or single) access and an asynchronous write or read transfer to or from static memory bank (the bank can be the same or a different one in case of a read operation. Two consecutive synchronous read operations (in Burst or Single mode) followed by any synchronous/asynchronous read or write from/to another static memory bank. There is a bus turnaround delay of 3 FMC clock cycle between: Two consecutive synchronous write operations (in Burst or Single mode) to different static banks. A synchronous write access (in Burst or Single mode) and a synchronous read from the same or a different bank. The bus turnaround delay allows to match the minimum time between consecutive transactions (tEHEL from NEx high to NEx low) and the maximum time required by the memory to free the data bus after a read access (tEHQZ): (BUSTRUN + 1) KCK_FMC period &amp;#8805; tEHELmin and (BUSTRUN + 2)KCK_FMC period &amp;#8805; tEHQZmax if EXTMOD = 0 (BUSTRUN + 2)KCK_FMC period &amp;#8805; max (tEHELmin, tEHQZmax) if EXTMOD = 126. ...
    typedef bit_field_t<20, 0xf> BTR1_CLKDIV; // Clock divide ratio (for FMC_CLK signal) These bits define the period of FMC_CLK clock output signal, expressed in number of KCK_FMC cycles: In asynchronous NOR Flash, SRAM or PSRAM accesses, this value is dont care. Note: Refer to Section20.6.5: Synchronous transactions for FMC_CLK divider ratio formula)
    typedef bit_field_t<24, 0xf> BTR1_DATLAT; // Data latency for synchronous memory For synchronous access with read write burst mode enabled these bits define the number of memory clock cycles
    typedef bit_field_t<28, 0x3> BTR1_ACCMOD; // Access mode These bits specify the asynchronous access modes as shown in the timing diagrams. They are taken into account only when the EXTMOD bit in the FMC_BCRx register is 1.

    static constexpr uint32_t BCR2_RESET_VALUE = 0x30d2; // Reset value
    static constexpr uint32_t BCR2_MBKEN = 0x1; // Memory bank enable bit This bit enables the memory bank. After reset Bank1 is enabled, all others are disabled. Accessing a disabled bank causes an ERROR on AXI bus.
    static constexpr uint32_t BCR2_MUXEN = 0x2; // Address/data multiplexing enable bit When this bit is set, the address and data values are multiplexed on the data bus, valid only with NOR and PSRAM memories:
    typedef bit_field_t<2, 0x3> BCR2_MTYP; // Memory type These bits define the type of external memory attached to the corresponding memory bank:
    typedef bit_field_t<4, 0x3> BCR2_MWID; // Memory data bus width Defines the external memory device width, valid for all type of memories.
    static constexpr uint32_t BCR2_FACCEN = 0x40; // Flash access enable This bit enables NOR Flash memory access operations.
    static constexpr uint32_t BCR2_BURSTEN = 0x100; // Burst enable bit This bit enables/disables synchronous accesses during read operations. It is valid only for synchronous memories operating in Burst mode:
    static constexpr uint32_t BCR2_WAITPOL = 0x200; // Wait signal polarity bit This bit defines the polarity of the wait signal from memory used for either in synchronous or asynchronous mode:
    static constexpr uint32_t BCR2_WAITCFG = 0x800; // Wait timing configuration The NWAIT signal indicates whether the data from the memory are valid or if a wait state must be inserted when accessing the memory in synchronous mode. This configuration bit determines if NWAIT is asserted by the memory one clock cycle before the wait state or during the wait state:
    static constexpr uint32_t BCR2_WREN = 0x1000; // Write enable bit This bit indicates whether write operations are enabled/disabled in the bank by the FMC:
    static constexpr uint32_t BCR2_WAITEN = 0x2000; // Wait enable bit This bit enables/disables wait-state insertion via the NWAIT signal when accessing the memory in synchronous mode.
    static constexpr uint32_t BCR2_EXTMOD = 0x4000; // Extended mode enable. This bit enables the FMC to program the write timings for asynchronous accesses inside the FMC_BWTR register, thus resulting in different timings for read and write operations. Note: When the extended mode is disabled, the FMC can operate in Mode1 or Mode2 as follows: ** Mode 1 is the default mode when the SRAM/PSRAM memory type is selected (MTYP =0x0 or 0x01) ** Mode 2 is the default mode when the NOR memory type is selected (MTYP = 0x10).
    static constexpr uint32_t BCR2_ASYNCWAIT = 0x8000; // Wait signal during asynchronous transfers This bit enables/disables the FMC to use the wait signal even during an asynchronous protocol.
    typedef bit_field_t<16, 0x7> BCR2_CPSIZE; // CRAM Page Size These are used for Cellular RAM 1.5 which does not allow burst access to cross the address boundaries between pages. When these bits are configured, the FMC controller splits automatically the burst access when the memory page size is reached (refer to memory datasheet for page size). Other configuration: reserved.
    static constexpr uint32_t BCR2_CBURSTRW = 0x80000; // Write burst enable For PSRAM (CRAM) operating in Burst mode, the bit enables synchronous accesses during write operations. The enable bit for synchronous read accesses is the BURSTEN bit in the FMC_BCRx register.
    static constexpr uint32_t BCR2_CCLKEN = 0x100000; // Continuous Clock Enable This bit enables the FMC_CLK clock output to external memory devices. Note: The CCLKEN bit of the FMC_BCR2..4 registers is dont care. It is only enabled through the FMC_BCR1 register. Bank 1 must be configured in synchronous mode to generate the FMC_CLK continuous clock. If CCLKEN bit is set, the FMC_CLK clock ratio is specified by CLKDIV value in the FMC_BTR1 register. CLKDIV in FMC_BWTR1 is dont care. If the synchronous mode is used and CCLKEN bit is set, the synchronous memories connected to other banks than Bank 1 are clocked by the same clock (the CLKDIV value in the FMC_BTR2..4 and FMC_BWTR2..4 registers for other banks has no effect.)
    static constexpr uint32_t BCR2_WFDIS = 0x200000; // Write FIFO Disable This bit disables the Write FIFO used by the FMC controller. Note: The WFDIS bit of the FMC_BCR2..4 registers is dont care. It is only enabled through the FMC_BCR1 register.
    typedef bit_field_t<24, 0x3> BCR2_BMAP; // FMC bank mapping These bits allows different to remap SDRAM bank2 or swap the FMC NOR/PSRAM and SDRAM banks.Refer to Table 10 for Note: The BMAP bits of the FMC_BCR2..4 registers are dont care. It is only enabled through the FMC_BCR1 register.
    static constexpr uint32_t BCR2_FMCEN = 0x80000000; // FMC controller Enable This bit enables/disables the FMC controller. Note: The FMCEN bit of the FMC_BCR2..4 registers is dont care. It is only enabled through the FMC_BCR1 register.

    static constexpr uint32_t BTR2_RESET_VALUE = 0xfffffff; // Reset value
    typedef bit_field_t<0, 0xf> BTR2_ADDSET; // Address setup phase duration These bits are written by software to define the duration of the address setup phase (refer to Figure81 to Figure93), used in SRAMs, ROMs and asynchronous NOR Flash: For each access mode address setup phase duration, please refer to the respective figure (refer to Figure81 to Figure93). Note: In synchronous accesses, this value is dont care. In Muxed mode or Mode D, the minimum value for ADDSET is 1.
    typedef bit_field_t<4, 0xf> BTR2_ADDHLD; // Address-hold phase duration These bits are written by software to define the duration of the address hold phase (refer to Figure81 to Figure93), used in mode D or multiplexed accesses: For each access mode address-hold phase duration, please refer to the respective figure (Figure81 to Figure93). Note: In synchronous accesses, this value is not used, the address hold phase is always 1 memory clock period duration.
    typedef bit_field_t<8, 0xff> BTR2_DATAST; // Data-phase duration These bits are written by software to define the duration of the data phase (refer to Figure81 to Figure93), used in asynchronous accesses: For each memory type and access mode data-phase duration, please refer to the respective figure (Figure81 to Figure93). Example: Mode1, write access, DATAST=1: Data-phase duration= DATAST+1 = 2 KCK_FMC clock cycles. Note: In synchronous accesses, this value is dont care.
    typedef bit_field_t<16, 0xf> BTR2_BUSTURN; // Bus turnaround phase duration These bits are written by software to add a delay at the end of a write-to-read or read-to write transaction. The programmed bus turnaround delay is inserted between an asynchronous read (in muxed or mode D) or write transaction and any other asynchronous /synchronous read/write from/to a static bank. If a read operation is performed, the bank can be the same or a different one, whereas it must be different in case of write operation to the bank, except in muxed mode or mode D. In some cases, whatever the programmed BUSTRUN values, the bus turnaround delay is fixed as follows: The bus turnaround delay is not inserted between two consecutive asynchronous write transfers to the same static memory bank except in muxed mode and mode D. There is a bus turnaround delay of 1 FMC clock cycle between: Two consecutive asynchronous read transfers to the same static memory bank except for modes muxed and D. An asynchronous read to an asynchronous or synchronous write to any static bank or dynamic bank except in modes muxed and D mode. There is a bus turnaround delay of 2 FMC clock cycle between: Two consecutive synchronous write operations (in Burst or Single mode) to the same bank. A synchronous write (burst or single) access and an asynchronous write or read transfer to or from static memory bank (the bank can be the same or a different one in case of a read operation. Two consecutive synchronous read operations (in Burst or Single mode) followed by any synchronous/asynchronous read or write from/to another static memory bank. There is a bus turnaround delay of 3 FMC clock cycle between: Two consecutive synchronous write operations (in Burst or Single mode) to different static banks. A synchronous write access (in Burst or Single mode) and a synchronous read from the same or a different bank. The bus turnaround delay allows to match the minimum time between consecutive transactions (tEHEL from NEx high to NEx low) and the maximum time required by the memory to free the data bus after a read access (tEHQZ): (BUSTRUN + 1) KCK_FMC period &amp;#8805; tEHELmin and (BUSTRUN + 2)KCK_FMC period &amp;#8805; tEHQZmax if EXTMOD = 0 (BUSTRUN + 2)KCK_FMC period &amp;#8805; max (tEHELmin, tEHQZmax) if EXTMOD = 1. ...
    typedef bit_field_t<20, 0xf> BTR2_CLKDIV; // Clock divide ratio (for FMC_CLK signal) These bits define the period of FMC_CLK clock output signal, expressed in number of KCK_FMC cycles: In asynchronous NOR Flash, SRAM or PSRAM accesses, this value is dont care. Note: Refer to Section20.6.5: Synchronous transactions for FMC_CLK divider ratio formula)
    typedef bit_field_t<24, 0xf> BTR2_DATLAT; // Data latency for synchronous memory For synchronous access with read write burst mode enabled these bits define the number of memory clock cycles
    typedef bit_field_t<28, 0x3> BTR2_ACCMOD; // Access mode These bits specify the asynchronous access modes as shown in the timing diagrams. They are taken into account only when the EXTMOD bit in the FMC_BCRx register is 1.

    static constexpr uint32_t BCR3_RESET_VALUE = 0x30d2; // Reset value
    static constexpr uint32_t BCR3_MBKEN = 0x1; // Memory bank enable bit This bit enables the memory bank. After reset Bank1 is enabled, all others are disabled. Accessing a disabled bank causes an ERROR on AXI bus.
    static constexpr uint32_t BCR3_MUXEN = 0x2; // Address/data multiplexing enable bit When this bit is set, the address and data values are multiplexed on the data bus, valid only with NOR and PSRAM memories:
    typedef bit_field_t<2, 0x3> BCR3_MTYP; // Memory type These bits define the type of external memory attached to the corresponding memory bank:
    typedef bit_field_t<4, 0x3> BCR3_MWID; // Memory data bus width Defines the external memory device width, valid for all type of memories.
    static constexpr uint32_t BCR3_FACCEN = 0x40; // Flash access enable This bit enables NOR Flash memory access operations.
    static constexpr uint32_t BCR3_BURSTEN = 0x100; // Burst enable bit This bit enables/disables synchronous accesses during read operations. It is valid only for synchronous memories operating in Burst mode:
    static constexpr uint32_t BCR3_WAITPOL = 0x200; // Wait signal polarity bit This bit defines the polarity of the wait signal from memory used for either in synchronous or asynchronous mode:
    static constexpr uint32_t BCR3_WAITCFG = 0x800; // Wait timing configuration The NWAIT signal indicates whether the data from the memory are valid or if a wait state must be inserted when accessing the memory in synchronous mode. This configuration bit determines if NWAIT is asserted by the memory one clock cycle before the wait state or during the wait state:
    static constexpr uint32_t BCR3_WREN = 0x1000; // Write enable bit This bit indicates whether write operations are enabled/disabled in the bank by the FMC:
    static constexpr uint32_t BCR3_WAITEN = 0x2000; // Wait enable bit This bit enables/disables wait-state insertion via the NWAIT signal when accessing the memory in synchronous mode.
    static constexpr uint32_t BCR3_EXTMOD = 0x4000; // Extended mode enable. This bit enables the FMC to program the write timings for asynchronous accesses inside the FMC_BWTR register, thus resulting in different timings for read and write operations. Note: When the extended mode is disabled, the FMC can operate in Mode1 or Mode2 as follows: ** Mode 1 is the default mode when the SRAM/PSRAM memory type is selected (MTYP =0x0 or 0x01) ** Mode 2 is the default mode when the NOR memory type is selected (MTYP = 0x10).
    static constexpr uint32_t BCR3_ASYNCWAIT = 0x8000; // Wait signal during asynchronous transfers This bit enables/disables the FMC to use the wait signal even during an asynchronous protocol.
    typedef bit_field_t<16, 0x7> BCR3_CPSIZE; // CRAM Page Size These are used for Cellular RAM 1.5 which does not allow burst access to cross the address boundaries between pages. When these bits are configured, the FMC controller splits automatically the burst access when the memory page size is reached (refer to memory datasheet for page size). Other configuration: reserved.
    static constexpr uint32_t BCR3_CBURSTRW = 0x80000; // Write burst enable For PSRAM (CRAM) operating in Burst mode, the bit enables synchronous accesses during write operations. The enable bit for synchronous read accesses is the BURSTEN bit in the FMC_BCRx register.
    static constexpr uint32_t BCR3_CCLKEN = 0x100000; // Continuous Clock Enable This bit enables the FMC_CLK clock output to external memory devices. Note: The CCLKEN bit of the FMC_BCR2..4 registers is dont care. It is only enabled through the FMC_BCR1 register. Bank 1 must be configured in synchronous mode to generate the FMC_CLK continuous clock. If CCLKEN bit is set, the FMC_CLK clock ratio is specified by CLKDIV value in the FMC_BTR1 register. CLKDIV in FMC_BWTR1 is dont care. If the synchronous mode is used and CCLKEN bit is set, the synchronous memories connected to other banks than Bank 1 are clocked by the same clock (the CLKDIV value in the FMC_BTR2..4 and FMC_BWTR2..4 registers for other banks has no effect.)
    static constexpr uint32_t BCR3_WFDIS = 0x200000; // Write FIFO Disable This bit disables the Write FIFO used by the FMC controller. Note: The WFDIS bit of the FMC_BCR2..4 registers is dont care. It is only enabled through the FMC_BCR1 register.
    typedef bit_field_t<24, 0x3> BCR3_BMAP; // FMC bank mapping These bits allows different to remap SDRAM bank2 or swap the FMC NOR/PSRAM and SDRAM banks.Refer to Table 10 for Note: The BMAP bits of the FMC_BCR2..4 registers are dont care. It is only enabled through the FMC_BCR1 register.
    static constexpr uint32_t BCR3_FMCEN = 0x80000000; // FMC controller Enable This bit enables/disables the FMC controller. Note: The FMCEN bit of the FMC_BCR2..4 registers is dont care. It is only enabled through the FMC_BCR1 register.

    static constexpr uint32_t BTR3_RESET_VALUE = 0xfffffff; // Reset value
    typedef bit_field_t<0, 0xf> BTR3_ADDSET; // Address setup phase duration These bits are written by software to define the duration of the address setup phase (refer to Figure81 to Figure93), used in SRAMs, ROMs and asynchronous NOR Flash: For each access mode address setup phase duration, please refer to the respective figure (refer to Figure81 to Figure93). Note: In synchronous accesses, this value is dont care. In Muxed mode or Mode D, the minimum value for ADDSET is 1.
    typedef bit_field_t<4, 0xf> BTR3_ADDHLD; // Address-hold phase duration These bits are written by software to define the duration of the address hold phase (refer to Figure81 to Figure93), used in mode D or multiplexed accesses: For each access mode address-hold phase duration, please refer to the respective figure (Figure81 to Figure93). Note: In synchronous accesses, this value is not used, the address hold phase is always 1 memory clock period duration.
    typedef bit_field_t<8, 0xff> BTR3_DATAST; // Data-phase duration These bits are written by software to define the duration of the data phase (refer to Figure81 to Figure93), used in asynchronous accesses: For each memory type and access mode data-phase duration, please refer to the respective figure (Figure81 to Figure93). Example: Mode1, write access, DATAST=1: Data-phase duration= DATAST+1 = 2 KCK_FMC clock cycles. Note: In synchronous accesses, this value is dont care.
    typedef bit_field_t<16, 0xf> BTR3_BUSTURN; // Bus turnaround phase duration These bits are written by software to add a delay at the end of a write-to-read or read-to write transaction. The programmed bus turnaround delay is inserted between an asynchronous read (in muxed or mode D) or write transaction and any other asynchronous /synchronous read/write from/to a static bank. If a read operation is performed, the bank can be the same or a different one, whereas it must be different in case of write operation to the bank, except in muxed mode or mode D. In some cases, whatever the programmed BUSTRUN values, the bus turnaround delay is fixed as follows: The bus turnaround delay is not inserted between two consecutive asynchronous write transfers to the same static memory bank except in muxed mode and mode D. There is a bus turnaround delay of 1 FMC clock cycle between: Two consecutive asynchronous read transfers to the same static memory bank except for modes muxed and D. An asynchronous read to an asynchronous or synchronous write to any static bank or dynamic bank except in modes muxed and D mode. There is a bus turnaround delay of 2 FMC clock cycle between: Two consecutive synchronous write operations (in Burst or Single mode) to the same bank. A synchronous write (burst or single) access and an asynchronous write or read transfer to or from static memory bank (the bank can be the same or a different one in case of a read operation. Two consecutive synchronous read operations (in Burst or Single mode) followed by any synchronous/asynchronous read or write from/to another static memory bank. There is a bus turnaround delay of 3 FMC clock cycle between: Two consecutive synchronous write operations (in Burst or Single mode) to different static banks. A synchronous write access (in Burst or Single mode) and a synchronous read from the same or a different bank. The bus turnaround delay allows to match the minimum time between consecutive transactions (tEHEL from NEx high to NEx low) and the maximum time required by the memory to free the data bus after a read access (tEHQZ): (BUSTRUN + 1) KCK_FMC period &amp;#8805; tEHELmin and (BUSTRUN + 2)KCK_FMC period &amp;#8805; tEHQZmax if EXTMOD = 0 (BUSTRUN + 2)KCK_FMC period &amp;#8805; max (tEHELmin, tEHQZmax) if EXTMOD =1. ...
    typedef bit_field_t<20, 0xf> BTR3_CLKDIV; // Clock divide ratio (for FMC_CLK signal) These bits define the period of FMC_CLK clock output signal, expressed in number of KCK_FMC cycles: In asynchronous NOR Flash, SRAM or PSRAM accesses, this value is dont care. Note: Refer to Section20.6.5: Synchronous transactions for FMC_CLK divider ratio formula)
    typedef bit_field_t<24, 0xf> BTR3_DATLAT; // Data latency for synchronous memory For synchronous access with read write burst mode enabled these bits define the number of memory clock cycles
    typedef bit_field_t<28, 0x3> BTR3_ACCMOD; // Access mode These bits specify the asynchronous access modes as shown in the timing diagrams. They are taken into account only when the EXTMOD bit in the FMC_BCRx register is 1.

    static constexpr uint32_t BCR4_RESET_VALUE = 0x30d2; // Reset value
    static constexpr uint32_t BCR4_MBKEN = 0x1; // Memory bank enable bit This bit enables the memory bank. After reset Bank1 is enabled, all others are disabled. Accessing a disabled bank causes an ERROR on AXI bus.
    static constexpr uint32_t BCR4_MUXEN = 0x2; // Address/data multiplexing enable bit When this bit is set, the address and data values are multiplexed on the data bus, valid only with NOR and PSRAM memories:
    typedef bit_field_t<2, 0x3> BCR4_MTYP; // Memory type These bits define the type of external memory attached to the corresponding memory bank:
    typedef bit_field_t<4, 0x3> BCR4_MWID; // Memory data bus width Defines the external memory device width, valid for all type of memories.
    static constexpr uint32_t BCR4_FACCEN = 0x40; // Flash access enable This bit enables NOR Flash memory access operations.
    static constexpr uint32_t BCR4_BURSTEN = 0x100; // Burst enable bit This bit enables/disables synchronous accesses during read operations. It is valid only for synchronous memories operating in Burst mode:
    static constexpr uint32_t BCR4_WAITPOL = 0x200; // Wait signal polarity bit This bit defines the polarity of the wait signal from memory used for either in synchronous or asynchronous mode:
    static constexpr uint32_t BCR4_WAITCFG = 0x800; // Wait timing configuration The NWAIT signal indicates whether the data from the memory are valid or if a wait state must be inserted when accessing the memory in synchronous mode. This configuration bit determines if NWAIT is asserted by the memory one clock cycle before the wait state or during the wait state:
    static constexpr uint32_t BCR4_WREN = 0x1000; // Write enable bit This bit indicates whether write operations are enabled/disabled in the bank by the FMC:
    static constexpr uint32_t BCR4_WAITEN = 0x2000; // Wait enable bit This bit enables/disables wait-state insertion via the NWAIT signal when accessing the memory in synchronous mode.
    static constexpr uint32_t BCR4_EXTMOD = 0x4000; // Extended mode enable. This bit enables the FMC to program the write timings for asynchronous accesses inside the FMC_BWTR register, thus resulting in different timings for read and write operations. Note: When the extended mode is disabled, the FMC can operate in Mode1 or Mode2 as follows: ** Mode 1 is the default mode when the SRAM/PSRAM memory type is selected (MTYP =0x0 or 0x01) ** Mode 2 is the default mode when the NOR memory type is selected (MTYP = 0x10).
    static constexpr uint32_t BCR4_ASYNCWAIT = 0x8000; // Wait signal during asynchronous transfers This bit enables/disables the FMC to use the wait signal even during an asynchronous protocol.
    typedef bit_field_t<16, 0x7> BCR4_CPSIZE; // CRAM Page Size These are used for Cellular RAM 1.5 which does not allow burst access to cross the address boundaries between pages. When these bits are configured, the FMC controller splits automatically the burst access when the memory page size is reached (refer to memory datasheet for page size). Other configuration: reserved.
    static constexpr uint32_t BCR4_CBURSTRW = 0x80000; // Write burst enable For PSRAM (CRAM) operating in Burst mode, the bit enables synchronous accesses during write operations. The enable bit for synchronous read accesses is the BURSTEN bit in the FMC_BCRx register.
    static constexpr uint32_t BCR4_CCLKEN = 0x100000; // Continuous Clock Enable This bit enables the FMC_CLK clock output to external memory devices. Note: The CCLKEN bit of the FMC_BCR2..4 registers is dont care. It is only enabled through the FMC_BCR1 register. Bank 1 must be configured in synchronous mode to generate the FMC_CLK continuous clock. If CCLKEN bit is set, the FMC_CLK clock ratio is specified by CLKDIV value in the FMC_BTR1 register. CLKDIV in FMC_BWTR1 is dont care. If the synchronous mode is used and CCLKEN bit is set, the synchronous memories connected to other banks than Bank 1 are clocked by the same clock (the CLKDIV value in the FMC_BTR2..4 and FMC_BWTR2..4 registers for other banks has no effect.)
    static constexpr uint32_t BCR4_WFDIS = 0x200000; // Write FIFO Disable This bit disables the Write FIFO used by the FMC controller. Note: The WFDIS bit of the FMC_BCR2..4 registers is dont care. It is only enabled through the FMC_BCR1 register.
    typedef bit_field_t<24, 0x3> BCR4_BMAP; // FMC bank mapping These bits allows different to remap SDRAM bank2 or swap the FMC NOR/PSRAM and SDRAM banks.Refer to Table 10 for Note: The BMAP bits of the FMC_BCR2..4 registers are dont care. It is only enabled through the FMC_BCR1 register.
    static constexpr uint32_t BCR4_FMCEN = 0x80000000; // FMC controller Enable This bit enables/disables the FMC controller. Note: The FMCEN bit of the FMC_BCR2..4 registers is dont care. It is only enabled through the FMC_BCR1 register.

    static constexpr uint32_t BTR4_RESET_VALUE = 0xfffffff; // Reset value
    typedef bit_field_t<0, 0xf> BTR4_ADDSET; // Address setup phase duration These bits are written by software to define the duration of the address setup phase (refer to Figure81 to Figure93), used in SRAMs, ROMs and asynchronous NOR Flash: For each access mode address setup phase duration, please refer to the respective figure (refer to Figure81 to Figure93). Note: In synchronous accesses, this value is dont care. In Muxed mode or Mode D, the minimum value for ADDSET is 1.
    typedef bit_field_t<4, 0xf> BTR4_ADDHLD; // Address-hold phase duration These bits are written by software to define the duration of the address hold phase (refer to Figure81 to Figure93), used in mode D or multiplexed accesses: For each access mode address-hold phase duration, please refer to the respective figure (Figure81 to Figure93). Note: In synchronous accesses, this value is not used, the address hold phase is always 1 memory clock period duration.
    typedef bit_field_t<8, 0xff> BTR4_DATAST; // Data-phase duration These bits are written by software to define the duration of the data phase (refer to Figure81 to Figure93), used in asynchronous accesses: For each memory type and access mode data-phase duration, please refer to the respective figure (Figure81 to Figure93). Example: Mode1, write access, DATAST=1: Data-phase duration= DATAST+1 = 2 KCK_FMC clock cycles. Note: In synchronous accesses, this value is dont care.
    typedef bit_field_t<16, 0xf> BTR4_BUSTURN; // Bus turnaround phase duration These bits are written by software to add a delay at the end of a write-to-read or read-to write transaction. The programmed bus turnaround delay is inserted between an asynchronous read (in muxed or mode D) or write transaction and any other asynchronous /synchronous read/write from/to a static bank. If a read operation is performed, the bank can be the same or a different one, whereas it must be different in case of write operation to the bank, except in muxed mode or mode D. In some cases, whatever the programmed BUSTRUN values, the bus turnaround delay is fixed as follows: The bus turnaround delay is not inserted between two consecutive asynchronous write transfers to the same static memory bank except in muxed mode and mode D. There is a bus turnaround delay of 1 FMC clock cycle between: Two consecutive asynchronous read transfers to the same static memory bank except for modes muxed and D. An asynchronous read to an asynchronous or synchronous write to any static bank or dynamic bank except in modes muxed and D mode. There is a bus turnaround delay of 2 FMC clock cycle between: Two consecutive synchronous write operations (in Burst or Single mode) to the same bank. A synchronous write (burst or single) access and an asynchronous write or read transfer to or from static memory bank (the bank can be the same or a different one in case of a read operation. Two consecutive synchronous read operations (in Burst or Single mode) followed by any synchronous/asynchronous read or write from/to another static memory bank. There is a bus turnaround delay of 3 FMC clock cycle between: Two consecutive synchronous write operations (in Burst or Single mode) to different static banks. A synchronous write access (in Burst or Single mode) and a synchronous read from the same or a different bank. The bus turnaround delay allows to match the minimum time between consecutive transactions (tEHEL from NEx high to NEx low) and the maximum time required by the memory to free the data bus after a read access (tEHQZ): (BUSTRUN + 1) KCK_FMC period &amp;#8805; tEHELmin and (BUSTRUN + 2)KCK_FMC period &amp;#8805; tEHQZmax if EXTMOD = 0 (BUSTRUN + 2)KCK_FMC period &amp;#8805; max (tEHELmin, tEHQZmax) if EXTMOD =1. ...
    typedef bit_field_t<20, 0xf> BTR4_CLKDIV; // Clock divide ratio (for FMC_CLK signal) These bits define the period of FMC_CLK clock output signal, expressed in number of KCK_FMC cycles: In asynchronous NOR Flash, SRAM or PSRAM accesses, this value is dont care. Note: Refer to Section20.6.5: Synchronous transactions for FMC_CLK divider ratio formula)
    typedef bit_field_t<24, 0xf> BTR4_DATLAT; // Data latency for synchronous memory For synchronous access with read write burst mode enabled these bits define the number of memory clock cycles
    typedef bit_field_t<28, 0x3> BTR4_ACCMOD; // Access mode These bits specify the asynchronous access modes as shown in the timing diagrams. They are taken into account only when the EXTMOD bit in the FMC_BCRx register is 1.


    static constexpr uint32_t PCR_RESET_VALUE = 0x18; // Reset value
    static constexpr uint32_t PCR_PWAITEN = 0x2; // Wait feature enable bit. This bit enables the Wait feature for the NAND Flash memory bank:
    static constexpr uint32_t PCR_PBKEN = 0x4; // NAND Flash memory bank enable bit. This bit enables the memory bank. Accessing a disabled memory bank causes an ERROR on AXI bus
    typedef bit_field_t<4, 0x3> PCR_PWID; // Data bus width. These bits define the external memory device width.
    static constexpr uint32_t PCR_ECCEN = 0x40; // ECC computation logic enable bit
    typedef bit_field_t<9, 0xf> PCR_TCLR; // CLE to RE delay. These bits set time from CLE low to RE low in number of KCK_FMC clock cycles. The time is give by the following formula: t_clr = (TCLR + SET + 2) TKCK_FMC where TKCK_FMC is the KCK_FMC clock period Note: Set is MEMSET or ATTSET according to the addressed space.
    typedef bit_field_t<13, 0xf> PCR_TAR; // ALE to RE delay. These bits set time from ALE low to RE low in number of KCK_FMC clock cycles. Time is: t_ar = (TAR + SET + 2) TKCK_FMC where TKCK_FMC is the FMC clock period Note: Set is MEMSET or ATTSET according to the addressed space.
    typedef bit_field_t<17, 0x7> PCR_ECCPS; // ECC page size. These bits define the page size for the extended ECC:

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
    typedef bit_field_t<0, 0xf> BWTR1_ADDSET; // Address setup phase duration. These bits are written by software to define the duration of the address setup phase in KCK_FMC cycles (refer to Figure81 to Figure93), used in asynchronous accesses: ... Note: In synchronous accesses, this value is not used, the address setup phase is always 1 Flash clock period duration. In muxed mode, the minimum ADDSET value is 1.
    typedef bit_field_t<4, 0xf> BWTR1_ADDHLD; // Address-hold phase duration. These bits are written by software to define the duration of the address hold phase (refer to Figure81 to Figure93), used in asynchronous multiplexed accesses: ... Note: In synchronous NOR Flash accesses, this value is not used, the address hold phase is always 1 Flash clock period duration.
    typedef bit_field_t<8, 0xff> BWTR1_DATAST; // Data-phase duration. These bits are written by software to define the duration of the data phase (refer to Figure81 to Figure93), used in asynchronous SRAM, PSRAM and NOR Flash memory accesses:
    typedef bit_field_t<16, 0xf> BWTR1_BUSTURN; // Bus turnaround phase duration These bits are written by software to add a delay at the end of a write transaction to match the minimum time between consecutive transactions (tEHEL from ENx high to ENx low): (BUSTRUN + 1) KCK_FMC period &amp;#8805; tEHELmin. The programmed bus turnaround delay is inserted between a an asynchronous write transfer and any other asynchronous /synchronous read or write transfer to or from a static bank. If a read operation is performed, the bank can be the same or a different one, whereas it must be different in case of write operation to the bank, except in muxed mode or mode D. In some cases, whatever the programmed BUSTRUN values, the bus turnaround delay is fixed as follows: The bus turnaround delay is not inserted between two consecutive asynchronous write transfers to the same static memory bank except for muxed mode and mode D. There is a bus turnaround delay of 2 FMC clock cycle between: Two consecutive synchronous write operations (in Burst or Single mode) to the same bank A synchronous write transfer ((in Burst or Single mode) and an asynchronous write or read transfer to or from static memory bank. There is a bus turnaround delay of 3 FMC clock cycle between: Two consecutive synchronous write operations (in Burst or Single mode) to different static banks. A synchronous write transfer (in Burst or Single mode) and a synchronous read from the same or a different bank. ...
    typedef bit_field_t<28, 0x3> BWTR1_ACCMOD; // Access mode. These bits specify the asynchronous access modes as shown in the next timing diagrams.These bits are taken into account only when the EXTMOD bit in the FMC_BCRx register is 1.


    static constexpr uint32_t BWTR2_RESET_VALUE = 0xfffffff; // Reset value
    typedef bit_field_t<0, 0xf> BWTR2_ADDSET; // Address setup phase duration. These bits are written by software to define the duration of the address setup phase in KCK_FMC cycles (refer to Figure81 to Figure93), used in asynchronous accesses: ... Note: In synchronous accesses, this value is not used, the address setup phase is always 1 Flash clock period duration. In muxed mode, the minimum ADDSET value is 1.
    typedef bit_field_t<4, 0xf> BWTR2_ADDHLD; // Address-hold phase duration. These bits are written by software to define the duration of the address hold phase (refer to Figure81 to Figure93), used in asynchronous multiplexed accesses: ... Note: In synchronous NOR Flash accesses, this value is not used, the address hold phase is always 1 Flash clock period duration.
    typedef bit_field_t<8, 0xff> BWTR2_DATAST; // Data-phase duration. These bits are written by software to define the duration of the data phase (refer to Figure81 to Figure93), used in asynchronous SRAM, PSRAM and NOR Flash memory accesses:
    typedef bit_field_t<16, 0xf> BWTR2_BUSTURN; // Bus turnaround phase duration These bits are written by software to add a delay at the end of a write transaction to match the minimum time between consecutive transactions (tEHEL from ENx high to ENx low): (BUSTRUN + 1) KCK_FMC period &amp;#8805; tEHELmin. The programmed bus turnaround delay is inserted between a an asynchronous write transfer and any other asynchronous /synchronous read or write transfer to or from a static bank. If a read operation is performed, the bank can be the same or a different one, whereas it must be different in case of write operation to the bank, except in muxed mode or mode D. In some cases, whatever the programmed BUSTRUN values, the bus turnaround delay is fixed as follows: The bus turnaround delay is not inserted between two consecutive asynchronous write transfers to the same static memory bank except for muxed mode and mode D. There is a bus turnaround delay of 2 FMC clock cycle between: Two consecutive synchronous write operations (in Burst or Single mode) to the same bank A synchronous write transfer ((in Burst or Single mode) and an asynchronous write or read transfer to or from static memory bank. There is a bus turnaround delay of 3 FMC clock cycle between: Two consecutive synchronous write operations (in Burst or Single mode) to different static banks. A synchronous write transfer (in Burst or Single mode) and a synchronous read from the same or a different bank. ...
    typedef bit_field_t<28, 0x3> BWTR2_ACCMOD; // Access mode. These bits specify the asynchronous access modes as shown in the next timing diagrams.These bits are taken into account only when the EXTMOD bit in the FMC_BCRx register is 1.


    static constexpr uint32_t BWTR3_RESET_VALUE = 0xfffffff; // Reset value
    typedef bit_field_t<0, 0xf> BWTR3_ADDSET; // Address setup phase duration. These bits are written by software to define the duration of the address setup phase in KCK_FMC cycles (refer to Figure81 to Figure93), used in asynchronous accesses: ... Note: In synchronous accesses, this value is not used, the address setup phase is always 1 Flash clock period duration. In muxed mode, the minimum ADDSET value is 1.
    typedef bit_field_t<4, 0xf> BWTR3_ADDHLD; // Address-hold phase duration. These bits are written by software to define the duration of the address hold phase (refer to Figure81 to Figure93), used in asynchronous multiplexed accesses: ... Note: In synchronous NOR Flash accesses, this value is not used, the address hold phase is always 1 Flash clock period duration.
    typedef bit_field_t<8, 0xff> BWTR3_DATAST; // Data-phase duration. These bits are written by software to define the duration of the data phase (refer to Figure81 to Figure93), used in asynchronous SRAM, PSRAM and NOR Flash memory accesses:
    typedef bit_field_t<16, 0xf> BWTR3_BUSTURN; // Bus turnaround phase duration These bits are written by software to add a delay at the end of a write transaction to match the minimum time between consecutive transactions (tEHEL from ENx high to ENx low): (BUSTRUN + 1) KCK_FMC period &amp;#8805; tEHELmin. The programmed bus turnaround delay is inserted between a an asynchronous write transfer and any other asynchronous /synchronous read or write transfer to or from a static bank. If a read operation is performed, the bank can be the same or a different one, whereas it must be different in case of write operation to the bank, except in muxed mode or mode D. In some cases, whatever the programmed BUSTRUN values, the bus turnaround delay is fixed as follows: The bus turnaround delay is not inserted between two consecutive asynchronous write transfers to the same static memory bank except for muxed mode and mode D. There is a bus turnaround delay of 2 FMC clock cycle between: Two consecutive synchronous write operations (in Burst or Single mode) to the same bank A synchronous write transfer ((in Burst or Single mode) and an asynchronous write or read transfer to or from static memory bank. There is a bus turnaround delay of 3 FMC clock cycle between: Two consecutive synchronous write operations (in Burst or Single mode) to different static banks. A synchronous write transfer (in Burst or Single mode) and a synchronous read from the same or a different bank. ...
    typedef bit_field_t<28, 0x3> BWTR3_ACCMOD; // Access mode. These bits specify the asynchronous access modes as shown in the next timing diagrams.These bits are taken into account only when the EXTMOD bit in the FMC_BCRx register is 1.


    static constexpr uint32_t BWTR4_RESET_VALUE = 0xfffffff; // Reset value
    typedef bit_field_t<0, 0xf> BWTR4_ADDSET; // Address setup phase duration. These bits are written by software to define the duration of the address setup phase in KCK_FMC cycles (refer to Figure81 to Figure93), used in asynchronous accesses: ... Note: In synchronous accesses, this value is not used, the address setup phase is always 1 Flash clock period duration. In muxed mode, the minimum ADDSET value is 1.
    typedef bit_field_t<4, 0xf> BWTR4_ADDHLD; // Address-hold phase duration. These bits are written by software to define the duration of the address hold phase (refer to Figure81 to Figure93), used in asynchronous multiplexed accesses: ... Note: In synchronous NOR Flash accesses, this value is not used, the address hold phase is always 1 Flash clock period duration.
    typedef bit_field_t<8, 0xff> BWTR4_DATAST; // Data-phase duration. These bits are written by software to define the duration of the data phase (refer to Figure81 to Figure93), used in asynchronous SRAM, PSRAM and NOR Flash memory accesses:
    typedef bit_field_t<16, 0xf> BWTR4_BUSTURN; // Bus turnaround phase duration These bits are written by software to add a delay at the end of a write transaction to match the minimum time between consecutive transactions (tEHEL from ENx high to ENx low): (BUSTRUN + 1) KCK_FMC period &amp;#8805; tEHELmin. The programmed bus turnaround delay is inserted between a an asynchronous write transfer and any other asynchronous /synchronous read or write transfer to or from a static bank. If a read operation is performed, the bank can be the same or a different one, whereas it must be different in case of write operation to the bank, except in muxed mode or mode D. In some cases, whatever the programmed BUSTRUN values, the bus turnaround delay is fixed as follows: The bus turnaround delay is not inserted between two consecutive asynchronous write transfers to the same static memory bank except for muxed mode and mode D. There is a bus turnaround delay of 2 FMC clock cycle between: Two consecutive synchronous write operations (in Burst or Single mode) to the same bank A synchronous write transfer ((in Burst or Single mode) and an asynchronous write or read transfer to or from static memory bank. There is a bus turnaround delay of 3 FMC clock cycle between: Two consecutive synchronous write operations (in Burst or Single mode) to different static banks. A synchronous write transfer (in Burst or Single mode) and a synchronous read from the same or a different bank. ...
    typedef bit_field_t<28, 0x3> BWTR4_ACCMOD; // Access mode. These bits specify the asynchronous access modes as shown in the next timing diagrams.These bits are taken into account only when the EXTMOD bit in the FMC_BCRx register is 1.


    static constexpr uint32_t SDCR1_RESET_VALUE = 0x2d0; // Reset value
    typedef bit_field_t<0, 0x3> SDCR1_NC; // Number of column address bits These bits define the number of bits of a column address.
    typedef bit_field_t<2, 0x3> SDCR1_NR; // Number of row address bits These bits define the number of bits of a row address.
    typedef bit_field_t<4, 0x3> SDCR1_MWID; // Memory data bus width. These bits define the memory device width.
    static constexpr uint32_t SDCR1_NB = 0x40; // Number of internal banks This bit sets the number of internal banks.
    typedef bit_field_t<7, 0x3> SDCR1_CAS; // CAS Latency This bits sets the SDRAM CAS latency in number of memory clock cycles
    static constexpr uint32_t SDCR1_WP = 0x200; // Write protection This bit enables write mode access to the SDRAM bank.
    typedef bit_field_t<10, 0x3> SDCR1_SDCLK; // SDRAM clock configuration These bits define the SDRAM clock period for both SDRAM banks and allow disabling the clock before changing the frequency. In this case the SDRAM must be re-initialized. Note: The corresponding bits in the FMC_SDCR2 register is read only.
    static constexpr uint32_t SDCR1_RBURST = 0x1000; // Burst read This bit enables burst read mode. The SDRAM controller anticipates the next read commands during the CAS latency and stores data in the Read FIFO. Note: The corresponding bit in the FMC_SDCR2 register is read only.
    typedef bit_field_t<13, 0x3> SDCR1_RPIPE; // Read pipe These bits define the delay, in KCK_FMC clock cycles, for reading data after CAS latency. Note: The corresponding bits in the FMC_SDCR2 register is read only.

    static constexpr uint32_t SDCR2_RESET_VALUE = 0x2d0; // Reset value
    typedef bit_field_t<0, 0x3> SDCR2_NC; // Number of column address bits These bits define the number of bits of a column address.
    typedef bit_field_t<2, 0x3> SDCR2_NR; // Number of row address bits These bits define the number of bits of a row address.
    typedef bit_field_t<4, 0x3> SDCR2_MWID; // Memory data bus width. These bits define the memory device width.
    static constexpr uint32_t SDCR2_NB = 0x40; // Number of internal banks This bit sets the number of internal banks.
    typedef bit_field_t<7, 0x3> SDCR2_CAS; // CAS Latency This bits sets the SDRAM CAS latency in number of memory clock cycles
    static constexpr uint32_t SDCR2_WP = 0x200; // Write protection This bit enables write mode access to the SDRAM bank.
    typedef bit_field_t<10, 0x3> SDCR2_SDCLK; // SDRAM clock configuration These bits define the SDRAM clock period for both SDRAM banks and allow disabling the clock before changing the frequency. In this case the SDRAM must be re-initialized. Note: The corresponding bits in the FMC_SDCR2 register is read only.
    static constexpr uint32_t SDCR2_RBURST = 0x1000; // Burst read This bit enables burst read mode. The SDRAM controller anticipates the next read commands during the CAS latency and stores data in the Read FIFO. Note: The corresponding bit in the FMC_SDCR2 register is read only.
    typedef bit_field_t<13, 0x3> SDCR2_RPIPE; // Read pipe These bits define the delay, in KCK_FMC clock cycles, for reading data after CAS latency. Note: The corresponding bits in the FMC_SDCR2 register is read only.

    static constexpr uint32_t SDTR1_RESET_VALUE = 0xfffffff; // Reset value
    typedef bit_field_t<0, 0xf> SDTR1_TMRD; // Load Mode Register to Active These bits define the delay between a Load Mode Register command and an Active or Refresh command in number of memory clock cycles. ....
    typedef bit_field_t<4, 0xf> SDTR1_TXSR; // Exit Self-refresh delay These bits define the delay from releasing the Self-refresh command to issuing the Activate command in number of memory clock cycles. .... Note: If two SDRAM devices are used, the FMC_SDTR1 and FMC_SDTR2 must be programmed with the same TXSR timing corresponding to the slowest SDRAM device.
    typedef bit_field_t<8, 0xf> SDTR1_TRAS; // Self refresh time These bits define the minimum Self-refresh period in number of memory clock cycles. ....
    typedef bit_field_t<12, 0xf> SDTR1_TRC; // Row cycle delay These bits define the delay between the Refresh command and the Activate command, as well as the delay between two consecutive Refresh commands. It is expressed in number of memory clock cycles. The TRC timing is only configured in the FMC_SDTR1 register. If two SDRAM devices are used, the TRC must be programmed with the timings of the slowest device. .... Note: TRC must match the TRC and TRFC (Auto Refresh period) timings defined in the SDRAM device datasheet. Note: The corresponding bits in the FMC_SDTR2 register are dont care.
    typedef bit_field_t<16, 0xf> SDTR1_TWR; // Recovery delay These bits define the delay between a Write and a Precharge command in number of memory clock cycles. .... Note: TWR must be programmed to match the write recovery time (tWR) defined in the SDRAM datasheet, and to guarantee that: TWR &amp;#8805; TRAS - TRCD and TWR &amp;#8805;TRC - TRCD - TRP Example: TRAS= 4 cycles, TRCD= 2 cycles. So, TWR &amp;gt;= 2 cycles. TWR must be programmed to 0x1. If two SDRAM devices are used, the FMC_SDTR1 and FMC_SDTR2 must be programmed with the same TWR timing corresponding to the slowest SDRAM device.
    typedef bit_field_t<20, 0xf> SDTR1_TRP; // Row precharge delay These bits define the delay between a Precharge command and another command in number of memory clock cycles. The TRP timing is only configured in the FMC_SDTR1 register. If two SDRAM devices are used, the TRP must be programmed with the timing of the slowest device. .... Note: The corresponding bits in the FMC_SDTR2 register are dont care.
    typedef bit_field_t<24, 0xf> SDTR1_TRCD; // Row to column delay These bits define the delay between the Activate command and a Read/Write command in number of memory clock cycles. ....

    static constexpr uint32_t SDTR2_RESET_VALUE = 0xfffffff; // Reset value
    typedef bit_field_t<0, 0xf> SDTR2_TMRD; // Load Mode Register to Active These bits define the delay between a Load Mode Register command and an Active or Refresh command in number of memory clock cycles. ....
    typedef bit_field_t<4, 0xf> SDTR2_TXSR; // Exit Self-refresh delay These bits define the delay from releasing the Self-refresh command to issuing the Activate command in number of memory clock cycles. .... Note: If two SDRAM devices are used, the FMC_SDTR1 and FMC_SDTR2 must be programmed with the same TXSR timing corresponding to the slowest SDRAM device.
    typedef bit_field_t<8, 0xf> SDTR2_TRAS; // Self refresh time These bits define the minimum Self-refresh period in number of memory clock cycles. ....
    typedef bit_field_t<12, 0xf> SDTR2_TRC; // Row cycle delay These bits define the delay between the Refresh command and the Activate command, as well as the delay between two consecutive Refresh commands. It is expressed in number of memory clock cycles. The TRC timing is only configured in the FMC_SDTR1 register. If two SDRAM devices are used, the TRC must be programmed with the timings of the slowest device. .... Note: TRC must match the TRC and TRFC (Auto Refresh period) timings defined in the SDRAM device datasheet. Note: The corresponding bits in the FMC_SDTR2 register are dont care.
    typedef bit_field_t<16, 0xf> SDTR2_TWR; // Recovery delay These bits define the delay between a Write and a Precharge command in number of memory clock cycles. .... Note: TWR must be programmed to match the write recovery time (tWR) defined in the SDRAM datasheet, and to guarantee that: TWR &amp;#8805; TRAS - TRCD and TWR &amp;#8805;TRC - TRCD - TRP Example: TRAS= 4 cycles, TRCD= 2 cycles. So, TWR &amp;gt;= 2 cycles. TWR must be programmed to 0x1. If two SDRAM devices are used, the FMC_SDTR1 and FMC_SDTR2 must be programmed with the same TWR timing corresponding to the slowest SDRAM device.
    typedef bit_field_t<20, 0xf> SDTR2_TRP; // Row precharge delay These bits define the delay between a Precharge command and another command in number of memory clock cycles. The TRP timing is only configured in the FMC_SDTR1 register. If two SDRAM devices are used, the TRP must be programmed with the timing of the slowest device. .... Note: The corresponding bits in the FMC_SDTR2 register are dont care.
    typedef bit_field_t<24, 0xf> SDTR2_TRCD; // Row to column delay These bits define the delay between the Activate command and a Read/Write command in number of memory clock cycles. ....

    static constexpr uint32_t SDCMR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> SDCMR_MODE; // Command mode These bits define the command issued to the SDRAM device. Note: When a command is issued, at least one Command Target Bank bit ( CTB1 or CTB2) must be set otherwise the command will be ignored. Note: If two SDRAM banks are used, the Auto-refresh and PALL command must be issued simultaneously to the two devices with CTB1 and CTB2 bits set otherwise the command will be ignored. Note: If only one SDRAM bank is used and a command is issued with its associated CTB bit set, the other CTB bit of the unused bank must be kept to 0.
    static constexpr uint32_t SDCMR_CTB2 = 0x8; // Command Target Bank 2 This bit indicates whether the command will be issued to SDRAM Bank 2 or not.
    static constexpr uint32_t SDCMR_CTB1 = 0x10; // Command Target Bank 1 This bit indicates whether the command will be issued to SDRAM Bank 1 or not.
    typedef bit_field_t<5, 0xf> SDCMR_NRFS; // Number of Auto-refresh These bits define the number of consecutive Auto-refresh commands issued when MODE = 011. ....
    typedef bit_field_t<9, 0x3fff> SDCMR_MRD; // Mode Register definition This 14-bit field defines the SDRAM Mode Register content. The Mode Register is programmed using the Load Mode Register command. The MRD[13:0] bits are also used to program the extended mode register for mobile SDRAM.

    static constexpr uint32_t SDRTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SDRTR_CRE = 0x1; // Clear Refresh error flag This bit is used to clear the Refresh Error Flag (RE) in the Status Register.
    typedef bit_field_t<1, 0x1fff> SDRTR_COUNT; // Refresh Timer Count This 13-bit field defines the refresh rate of the SDRAM device. It is expressed in number of memory clock cycles. It must be set at least to 41 SDRAM clock cycles (0x29). Refresh rate = (COUNT + 1) x SDRAM frequency clock COUNT = (SDRAM refresh period / Number of rows) - 20
    static constexpr uint32_t SDRTR_REIE = 0x4000; // RES Interrupt Enable

    static constexpr uint32_t SDSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SDSR_RE = 0x1; // Refresh error flag An interrupt is generated if REIE = 1 and RE = 1
    typedef bit_field_t<1, 0x3> SDSR_MODES1; // Status Mode for Bank 1 These bits define the Status Mode of SDRAM Bank 1.
    typedef bit_field_t<3, 0x3> SDSR_MODES2; // Status Mode for Bank 2 These bits define the Status Mode of SDRAM Bank 2.
};

// FMC: FMC

struct stm32h750x_fmc_t
{
    volatile uint32_t FMC_BCR1; // This register contains the control information of each memory bank, used for SRAMs, PSRAM and NOR Flash memories.
    volatile uint32_t FMC_BTR1; // This register contains the control information of each memory bank, used for SRAMs, PSRAM and NOR Flash memories.If the EXTMOD bit is set in the FMC_BCRx register, then this register is partitioned for write and read access, that is, 2 registers are available: one to configure read accesses (this register) and one to configure write accesses (FMC_BWTRx registers).
    volatile uint32_t FMC_BCR2; // This register contains the control information of each memory bank, used for SRAMs, PSRAM and NOR Flash memories.
    volatile uint32_t FMC_BTR2; // This register contains the control information of each memory bank, used for SRAMs, PSRAM and NOR Flash memories.If the EXTMOD bit is set in the FMC_BCRx register, then this register is partitioned for write and read access, that is, 2 registers are available: one to configure read accesses (this register) and one to configure write accesses (FMC_BWTRx registers).
    volatile uint32_t FMC_BCR3; // This register contains the control information of each memory bank, used for SRAMs, PSRAM and NOR Flash memories.
    volatile uint32_t FMC_BTR3; // This register contains the control information of each memory bank, used for SRAMs, PSRAM and NOR Flash memories.If the EXTMOD bit is set in the FMC_BCRx register, then this register is partitioned for write and read access, that is, 2 registers are available: one to configure read accesses (this register) and one to configure write accesses (FMC_BWTRx registers).
    volatile uint32_t FMC_BCR4; // This register contains the control information of each memory bank, used for SRAMs, PSRAM and NOR Flash memories.
    volatile uint32_t FMC_BTR4; // This register contains the control information of each memory bank, used for SRAMs, PSRAM and NOR Flash memories.If the EXTMOD bit is set in the FMC_BCRx register, then this register is partitioned for write and read access, that is, 2 registers are available: one to configure read accesses (this register) and one to configure write accesses (FMC_BWTRx registers).
    reserved_t<0x18> _0x20;
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
    reserved_t<0x8> _0x120;
    volatile uint32_t FMC_SDCR1; // This register contains the control parameters for each SDRAM memory bank
    volatile uint32_t FMC_SDCR2; // This register contains the control parameters for each SDRAM memory bank
    volatile uint32_t FMC_SDTR1; // This register contains the timing parameters of each SDRAM bank
    volatile uint32_t FMC_SDTR2; // This register contains the timing parameters of each SDRAM bank
    volatile uint32_t FMC_SDCMR; // This register contains the command issued when the SDRAM device is accessed. This register is used to initialize the SDRAM device, and to activate the Self-refresh and the Power-down modes. As soon as the MODE field is written, the command will be issued only to one or to both SDRAM banks according to CTB1 and CTB2 command bits. This register is the same for both SDRAM banks.
    volatile uint32_t FMC_SDRTR; // This register sets the refresh rate in number of SDCLK clock cycles between the refresh cycles by configuring the Refresh Timer Count value.Examplewhere 64 ms is the SDRAM refresh period.The refresh rate must be increased by 20 SDRAM clock cycles (as in the above example) to obtain a safe margin if an internal refresh request occurs when a read request has been accepted. It corresponds to a COUNT value of 0000111000000 (448). This 13-bit field is loaded into a timer which is decremented using the SDRAM clock. This timer generates a refresh pulse when zero is reached. The COUNT value must be set at least to 41 SDRAM clock cycles.As soon as the FMC_SDRTR register is programmed, the timer starts counting. If the value programmed in the register is 0, no refresh is carried out. This register must not be reprogrammed after the initialization procedure to avoid modifying the refresh rate.Each time a refresh pulse is generated, this 13-bit COUNT field is reloaded into the counter.If a memory access is in progress, the Auto-refresh request is delayed. However, if the memory access and Auto-refresh requests are generated simultaneously, the Auto-refresh takes precedence. If the memory access occurs during a refresh operation, the request is buffered to be processed when the refresh is complete.This register is common to SDRAM bank 1 and bank 2.
    volatile uint32_t FMC_SDSR; // SDRAM Status register

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
    typedef bit_field_t<24, 0x3> FMC_BCR1_BMAP; // FMC bank mapping These bits allows different to remap SDRAM bank2 or swap the FMC NOR/PSRAM and SDRAM banks.Refer to Table 10 for Note: The BMAP bits of the FMC_BCR2..4 registers are dont care. It is only enabled through the FMC_BCR1 register.
    static constexpr uint32_t FMC_BCR1_FMCEN = 0x80000000; // FMC controller Enable This bit enables/disables the FMC controller. Note: The FMCEN bit of the FMC_BCR2..4 registers is dont care. It is only enabled through the FMC_BCR1 register.

    static constexpr uint32_t FMC_BTR1_RESET_VALUE = 0xfffffff; // Reset value
    typedef bit_field_t<0, 0xf> FMC_BTR1_ADDSET; // Address setup phase duration These bits are written by software to define the duration of the address setup phase (refer to Figure81 to Figure93), used in SRAMs, ROMs and asynchronous NOR Flash: For each access mode address setup phase duration, please refer to the respective figure (refer to Figure81 to Figure93). Note: In synchronous accesses, this value is dont care. In Muxed mode or Mode D, the minimum value for ADDSET is 1.
    typedef bit_field_t<4, 0xf> FMC_BTR1_ADDHLD; // Address-hold phase duration These bits are written by software to define the duration of the address hold phase (refer to Figure81 to Figure93), used in mode D or multiplexed accesses: For each access mode address-hold phase duration, please refer to the respective figure (Figure81 to Figure93). Note: In synchronous accesses, this value is not used, the address hold phase is always 1 memory clock period duration.
    typedef bit_field_t<8, 0xff> FMC_BTR1_DATAST; // Data-phase duration These bits are written by software to define the duration of the data phase (refer to Figure81 to Figure93), used in asynchronous accesses: For each memory type and access mode data-phase duration, please refer to the respective figure (Figure81 to Figure93). Example: Mode1, write access, DATAST=1: Data-phase duration= DATAST+1 = 2 KCK_FMC clock cycles. Note: In synchronous accesses, this value is dont care.
    typedef bit_field_t<16, 0xf> FMC_BTR1_BUSTURN; // Bus turnaround phase duration These bits are written by software to add a delay at the end of a write-to-read or read-to write transaction. The programmed bus turnaround delay is inserted between an asynchronous read (in muxed or mode D) or write transaction and any other asynchronous /synchronous read/write from/to a static bank. If a read operation is performed, the bank can be the same or a different one, whereas it must be different in case of write operation to the bank, except in muxed mode or mode D. In some cases, whatever the programmed BUSTRUN values, the bus turnaround delay is fixed as follows: The bus turnaround delay is not inserted between two consecutive asynchronous write transfers to the same static memory bank except in muxed mode and mode D. There is a bus turnaround delay of 1 FMC clock cycle between: Two consecutive asynchronous read transfers to the same static memory bank except for modes muxed and D. An asynchronous read to an asynchronous or synchronous write to any static bank or dynamic bank except in modes muxed and D mode. There is a bus turnaround delay of 2 FMC clock cycle between: Two consecutive synchronous write operations (in Burst or Single mode) to the same bank. A synchronous write (burst or single) access and an asynchronous write or read transfer to or from static memory bank (the bank can be the same or a different one in case of a read operation. Two consecutive synchronous read operations (in Burst or Single mode) followed by any synchronous/asynchronous read or write from/to another static memory bank. There is a bus turnaround delay of 3 FMC clock cycle between: Two consecutive synchronous write operations (in Burst or Single mode) to different static banks. A synchronous write access (in Burst or Single mode) and a synchronous read from the same or a different bank. The bus turnaround delay allows to match the minimum time between consecutive transactions (tEHEL from NEx high to NEx low) and the maximum time required by the memory to free the data bus after a read access (tEHQZ): (BUSTRUN + 1) KCK_FMC period &amp;#8805; tEHELmin and (BUSTRUN + 2)KCK_FMC period &amp;#8805; tEHQZmax if EXTMOD = 0 (BUSTRUN + 2)KCK_FMC period &amp;#8805; max (tEHELmin, tEHQZmax) if EXTMOD = 126. ...
    typedef bit_field_t<20, 0xf> FMC_BTR1_CLKDIV; // Clock divide ratio (for FMC_CLK signal) These bits define the period of FMC_CLK clock output signal, expressed in number of KCK_FMC cycles: In asynchronous NOR Flash, SRAM or PSRAM accesses, this value is dont care. Note: Refer to Section20.6.5: Synchronous transactions for FMC_CLK divider ratio formula)
    typedef bit_field_t<24, 0xf> FMC_BTR1_DATLAT; // Data latency for synchronous memory For synchronous access with read write burst mode enabled these bits define the number of memory clock cycles
    typedef bit_field_t<28, 0x3> FMC_BTR1_ACCMOD; // Access mode These bits specify the asynchronous access modes as shown in the timing diagrams. They are taken into account only when the EXTMOD bit in the FMC_BCRx register is 1.

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
    typedef bit_field_t<24, 0x3> FMC_BCR2_BMAP; // FMC bank mapping These bits allows different to remap SDRAM bank2 or swap the FMC NOR/PSRAM and SDRAM banks.Refer to Table 10 for Note: The BMAP bits of the FMC_BCR2..4 registers are dont care. It is only enabled through the FMC_BCR1 register.
    static constexpr uint32_t FMC_BCR2_FMCEN = 0x80000000; // FMC controller Enable This bit enables/disables the FMC controller. Note: The FMCEN bit of the FMC_BCR2..4 registers is dont care. It is only enabled through the FMC_BCR1 register.

    static constexpr uint32_t FMC_BTR2_RESET_VALUE = 0xfffffff; // Reset value
    typedef bit_field_t<0, 0xf> FMC_BTR2_ADDSET; // Address setup phase duration These bits are written by software to define the duration of the address setup phase (refer to Figure81 to Figure93), used in SRAMs, ROMs and asynchronous NOR Flash: For each access mode address setup phase duration, please refer to the respective figure (refer to Figure81 to Figure93). Note: In synchronous accesses, this value is dont care. In Muxed mode or Mode D, the minimum value for ADDSET is 1.
    typedef bit_field_t<4, 0xf> FMC_BTR2_ADDHLD; // Address-hold phase duration These bits are written by software to define the duration of the address hold phase (refer to Figure81 to Figure93), used in mode D or multiplexed accesses: For each access mode address-hold phase duration, please refer to the respective figure (Figure81 to Figure93). Note: In synchronous accesses, this value is not used, the address hold phase is always 1 memory clock period duration.
    typedef bit_field_t<8, 0xff> FMC_BTR2_DATAST; // Data-phase duration These bits are written by software to define the duration of the data phase (refer to Figure81 to Figure93), used in asynchronous accesses: For each memory type and access mode data-phase duration, please refer to the respective figure (Figure81 to Figure93). Example: Mode1, write access, DATAST=1: Data-phase duration= DATAST+1 = 2 KCK_FMC clock cycles. Note: In synchronous accesses, this value is dont care.
    typedef bit_field_t<16, 0xf> FMC_BTR2_BUSTURN; // Bus turnaround phase duration These bits are written by software to add a delay at the end of a write-to-read or read-to write transaction. The programmed bus turnaround delay is inserted between an asynchronous read (in muxed or mode D) or write transaction and any other asynchronous /synchronous read/write from/to a static bank. If a read operation is performed, the bank can be the same or a different one, whereas it must be different in case of write operation to the bank, except in muxed mode or mode D. In some cases, whatever the programmed BUSTRUN values, the bus turnaround delay is fixed as follows: The bus turnaround delay is not inserted between two consecutive asynchronous write transfers to the same static memory bank except in muxed mode and mode D. There is a bus turnaround delay of 1 FMC clock cycle between: Two consecutive asynchronous read transfers to the same static memory bank except for modes muxed and D. An asynchronous read to an asynchronous or synchronous write to any static bank or dynamic bank except in modes muxed and D mode. There is a bus turnaround delay of 2 FMC clock cycle between: Two consecutive synchronous write operations (in Burst or Single mode) to the same bank. A synchronous write (burst or single) access and an asynchronous write or read transfer to or from static memory bank (the bank can be the same or a different one in case of a read operation. Two consecutive synchronous read operations (in Burst or Single mode) followed by any synchronous/asynchronous read or write from/to another static memory bank. There is a bus turnaround delay of 3 FMC clock cycle between: Two consecutive synchronous write operations (in Burst or Single mode) to different static banks. A synchronous write access (in Burst or Single mode) and a synchronous read from the same or a different bank. The bus turnaround delay allows to match the minimum time between consecutive transactions (tEHEL from NEx high to NEx low) and the maximum time required by the memory to free the data bus after a read access (tEHQZ): (BUSTRUN + 1) KCK_FMC period &amp;#8805; tEHELmin and (BUSTRUN + 2)KCK_FMC period &amp;#8805; tEHQZmax if EXTMOD = 0 (BUSTRUN + 2)KCK_FMC period &amp;#8805; max (tEHELmin, tEHQZmax) if EXTMOD = 1. ...
    typedef bit_field_t<20, 0xf> FMC_BTR2_CLKDIV; // Clock divide ratio (for FMC_CLK signal) These bits define the period of FMC_CLK clock output signal, expressed in number of KCK_FMC cycles: In asynchronous NOR Flash, SRAM or PSRAM accesses, this value is dont care. Note: Refer to Section20.6.5: Synchronous transactions for FMC_CLK divider ratio formula)
    typedef bit_field_t<24, 0xf> FMC_BTR2_DATLAT; // Data latency for synchronous memory For synchronous access with read write burst mode enabled these bits define the number of memory clock cycles
    typedef bit_field_t<28, 0x3> FMC_BTR2_ACCMOD; // Access mode These bits specify the asynchronous access modes as shown in the timing diagrams. They are taken into account only when the EXTMOD bit in the FMC_BCRx register is 1.

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
    typedef bit_field_t<24, 0x3> FMC_BCR3_BMAP; // FMC bank mapping These bits allows different to remap SDRAM bank2 or swap the FMC NOR/PSRAM and SDRAM banks.Refer to Table 10 for Note: The BMAP bits of the FMC_BCR2..4 registers are dont care. It is only enabled through the FMC_BCR1 register.
    static constexpr uint32_t FMC_BCR3_FMCEN = 0x80000000; // FMC controller Enable This bit enables/disables the FMC controller. Note: The FMCEN bit of the FMC_BCR2..4 registers is dont care. It is only enabled through the FMC_BCR1 register.

    static constexpr uint32_t FMC_BTR3_RESET_VALUE = 0xfffffff; // Reset value
    typedef bit_field_t<0, 0xf> FMC_BTR3_ADDSET; // Address setup phase duration These bits are written by software to define the duration of the address setup phase (refer to Figure81 to Figure93), used in SRAMs, ROMs and asynchronous NOR Flash: For each access mode address setup phase duration, please refer to the respective figure (refer to Figure81 to Figure93). Note: In synchronous accesses, this value is dont care. In Muxed mode or Mode D, the minimum value for ADDSET is 1.
    typedef bit_field_t<4, 0xf> FMC_BTR3_ADDHLD; // Address-hold phase duration These bits are written by software to define the duration of the address hold phase (refer to Figure81 to Figure93), used in mode D or multiplexed accesses: For each access mode address-hold phase duration, please refer to the respective figure (Figure81 to Figure93). Note: In synchronous accesses, this value is not used, the address hold phase is always 1 memory clock period duration.
    typedef bit_field_t<8, 0xff> FMC_BTR3_DATAST; // Data-phase duration These bits are written by software to define the duration of the data phase (refer to Figure81 to Figure93), used in asynchronous accesses: For each memory type and access mode data-phase duration, please refer to the respective figure (Figure81 to Figure93). Example: Mode1, write access, DATAST=1: Data-phase duration= DATAST+1 = 2 KCK_FMC clock cycles. Note: In synchronous accesses, this value is dont care.
    typedef bit_field_t<16, 0xf> FMC_BTR3_BUSTURN; // Bus turnaround phase duration These bits are written by software to add a delay at the end of a write-to-read or read-to write transaction. The programmed bus turnaround delay is inserted between an asynchronous read (in muxed or mode D) or write transaction and any other asynchronous /synchronous read/write from/to a static bank. If a read operation is performed, the bank can be the same or a different one, whereas it must be different in case of write operation to the bank, except in muxed mode or mode D. In some cases, whatever the programmed BUSTRUN values, the bus turnaround delay is fixed as follows: The bus turnaround delay is not inserted between two consecutive asynchronous write transfers to the same static memory bank except in muxed mode and mode D. There is a bus turnaround delay of 1 FMC clock cycle between: Two consecutive asynchronous read transfers to the same static memory bank except for modes muxed and D. An asynchronous read to an asynchronous or synchronous write to any static bank or dynamic bank except in modes muxed and D mode. There is a bus turnaround delay of 2 FMC clock cycle between: Two consecutive synchronous write operations (in Burst or Single mode) to the same bank. A synchronous write (burst or single) access and an asynchronous write or read transfer to or from static memory bank (the bank can be the same or a different one in case of a read operation. Two consecutive synchronous read operations (in Burst or Single mode) followed by any synchronous/asynchronous read or write from/to another static memory bank. There is a bus turnaround delay of 3 FMC clock cycle between: Two consecutive synchronous write operations (in Burst or Single mode) to different static banks. A synchronous write access (in Burst or Single mode) and a synchronous read from the same or a different bank. The bus turnaround delay allows to match the minimum time between consecutive transactions (tEHEL from NEx high to NEx low) and the maximum time required by the memory to free the data bus after a read access (tEHQZ): (BUSTRUN + 1) KCK_FMC period &amp;#8805; tEHELmin and (BUSTRUN + 2)KCK_FMC period &amp;#8805; tEHQZmax if EXTMOD = 0 (BUSTRUN + 2)KCK_FMC period &amp;#8805; max (tEHELmin, tEHQZmax) if EXTMOD =1. ...
    typedef bit_field_t<20, 0xf> FMC_BTR3_CLKDIV; // Clock divide ratio (for FMC_CLK signal) These bits define the period of FMC_CLK clock output signal, expressed in number of KCK_FMC cycles: In asynchronous NOR Flash, SRAM or PSRAM accesses, this value is dont care. Note: Refer to Section20.6.5: Synchronous transactions for FMC_CLK divider ratio formula)
    typedef bit_field_t<24, 0xf> FMC_BTR3_DATLAT; // Data latency for synchronous memory For synchronous access with read write burst mode enabled these bits define the number of memory clock cycles
    typedef bit_field_t<28, 0x3> FMC_BTR3_ACCMOD; // Access mode These bits specify the asynchronous access modes as shown in the timing diagrams. They are taken into account only when the EXTMOD bit in the FMC_BCRx register is 1.

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
    typedef bit_field_t<24, 0x3> FMC_BCR4_BMAP; // FMC bank mapping These bits allows different to remap SDRAM bank2 or swap the FMC NOR/PSRAM and SDRAM banks.Refer to Table 10 for Note: The BMAP bits of the FMC_BCR2..4 registers are dont care. It is only enabled through the FMC_BCR1 register.
    static constexpr uint32_t FMC_BCR4_FMCEN = 0x80000000; // FMC controller Enable This bit enables/disables the FMC controller. Note: The FMCEN bit of the FMC_BCR2..4 registers is dont care. It is only enabled through the FMC_BCR1 register.

    static constexpr uint32_t FMC_BTR4_RESET_VALUE = 0xfffffff; // Reset value
    typedef bit_field_t<0, 0xf> FMC_BTR4_ADDSET; // Address setup phase duration These bits are written by software to define the duration of the address setup phase (refer to Figure81 to Figure93), used in SRAMs, ROMs and asynchronous NOR Flash: For each access mode address setup phase duration, please refer to the respective figure (refer to Figure81 to Figure93). Note: In synchronous accesses, this value is dont care. In Muxed mode or Mode D, the minimum value for ADDSET is 1.
    typedef bit_field_t<4, 0xf> FMC_BTR4_ADDHLD; // Address-hold phase duration These bits are written by software to define the duration of the address hold phase (refer to Figure81 to Figure93), used in mode D or multiplexed accesses: For each access mode address-hold phase duration, please refer to the respective figure (Figure81 to Figure93). Note: In synchronous accesses, this value is not used, the address hold phase is always 1 memory clock period duration.
    typedef bit_field_t<8, 0xff> FMC_BTR4_DATAST; // Data-phase duration These bits are written by software to define the duration of the data phase (refer to Figure81 to Figure93), used in asynchronous accesses: For each memory type and access mode data-phase duration, please refer to the respective figure (Figure81 to Figure93). Example: Mode1, write access, DATAST=1: Data-phase duration= DATAST+1 = 2 KCK_FMC clock cycles. Note: In synchronous accesses, this value is dont care.
    typedef bit_field_t<16, 0xf> FMC_BTR4_BUSTURN; // Bus turnaround phase duration These bits are written by software to add a delay at the end of a write-to-read or read-to write transaction. The programmed bus turnaround delay is inserted between an asynchronous read (in muxed or mode D) or write transaction and any other asynchronous /synchronous read/write from/to a static bank. If a read operation is performed, the bank can be the same or a different one, whereas it must be different in case of write operation to the bank, except in muxed mode or mode D. In some cases, whatever the programmed BUSTRUN values, the bus turnaround delay is fixed as follows: The bus turnaround delay is not inserted between two consecutive asynchronous write transfers to the same static memory bank except in muxed mode and mode D. There is a bus turnaround delay of 1 FMC clock cycle between: Two consecutive asynchronous read transfers to the same static memory bank except for modes muxed and D. An asynchronous read to an asynchronous or synchronous write to any static bank or dynamic bank except in modes muxed and D mode. There is a bus turnaround delay of 2 FMC clock cycle between: Two consecutive synchronous write operations (in Burst or Single mode) to the same bank. A synchronous write (burst or single) access and an asynchronous write or read transfer to or from static memory bank (the bank can be the same or a different one in case of a read operation. Two consecutive synchronous read operations (in Burst or Single mode) followed by any synchronous/asynchronous read or write from/to another static memory bank. There is a bus turnaround delay of 3 FMC clock cycle between: Two consecutive synchronous write operations (in Burst or Single mode) to different static banks. A synchronous write access (in Burst or Single mode) and a synchronous read from the same or a different bank. The bus turnaround delay allows to match the minimum time between consecutive transactions (tEHEL from NEx high to NEx low) and the maximum time required by the memory to free the data bus after a read access (tEHQZ): (BUSTRUN + 1) KCK_FMC period &amp;#8805; tEHELmin and (BUSTRUN + 2)KCK_FMC period &amp;#8805; tEHQZmax if EXTMOD = 0 (BUSTRUN + 2)KCK_FMC period &amp;#8805; max (tEHELmin, tEHQZmax) if EXTMOD =1. ...
    typedef bit_field_t<20, 0xf> FMC_BTR4_CLKDIV; // Clock divide ratio (for FMC_CLK signal) These bits define the period of FMC_CLK clock output signal, expressed in number of KCK_FMC cycles: In asynchronous NOR Flash, SRAM or PSRAM accesses, this value is dont care. Note: Refer to Section20.6.5: Synchronous transactions for FMC_CLK divider ratio formula)
    typedef bit_field_t<24, 0xf> FMC_BTR4_DATLAT; // Data latency for synchronous memory For synchronous access with read write burst mode enabled these bits define the number of memory clock cycles
    typedef bit_field_t<28, 0x3> FMC_BTR4_ACCMOD; // Access mode These bits specify the asynchronous access modes as shown in the timing diagrams. They are taken into account only when the EXTMOD bit in the FMC_BCRx register is 1.


    static constexpr uint32_t FMC_PCR_RESET_VALUE = 0x18; // Reset value
    static constexpr uint32_t FMC_PCR_PWAITEN = 0x2; // Wait feature enable bit. This bit enables the Wait feature for the NAND Flash memory bank:
    static constexpr uint32_t FMC_PCR_PBKEN = 0x4; // NAND Flash memory bank enable bit. This bit enables the memory bank. Accessing a disabled memory bank causes an ERROR on AXI bus
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


    static constexpr uint32_t FMC_SDCR1_RESET_VALUE = 0x2d0; // Reset value
    typedef bit_field_t<0, 0x3> FMC_SDCR1_NC; // Number of column address bits These bits define the number of bits of a column address.
    typedef bit_field_t<2, 0x3> FMC_SDCR1_NR; // Number of row address bits These bits define the number of bits of a row address.
    typedef bit_field_t<4, 0x3> FMC_SDCR1_MWID; // Memory data bus width. These bits define the memory device width.
    static constexpr uint32_t FMC_SDCR1_NB = 0x40; // Number of internal banks This bit sets the number of internal banks.
    typedef bit_field_t<7, 0x3> FMC_SDCR1_CAS; // CAS Latency This bits sets the SDRAM CAS latency in number of memory clock cycles
    static constexpr uint32_t FMC_SDCR1_WP = 0x200; // Write protection This bit enables write mode access to the SDRAM bank.
    typedef bit_field_t<10, 0x3> FMC_SDCR1_SDCLK; // SDRAM clock configuration These bits define the SDRAM clock period for both SDRAM banks and allow disabling the clock before changing the frequency. In this case the SDRAM must be re-initialized. Note: The corresponding bits in the FMC_SDCR2 register is read only.
    static constexpr uint32_t FMC_SDCR1_RBURST = 0x1000; // Burst read This bit enables burst read mode. The SDRAM controller anticipates the next read commands during the CAS latency and stores data in the Read FIFO. Note: The corresponding bit in the FMC_SDCR2 register is read only.
    typedef bit_field_t<13, 0x3> FMC_SDCR1_RPIPE; // Read pipe These bits define the delay, in KCK_FMC clock cycles, for reading data after CAS latency. Note: The corresponding bits in the FMC_SDCR2 register is read only.

    static constexpr uint32_t FMC_SDCR2_RESET_VALUE = 0x2d0; // Reset value
    typedef bit_field_t<0, 0x3> FMC_SDCR2_NC; // Number of column address bits These bits define the number of bits of a column address.
    typedef bit_field_t<2, 0x3> FMC_SDCR2_NR; // Number of row address bits These bits define the number of bits of a row address.
    typedef bit_field_t<4, 0x3> FMC_SDCR2_MWID; // Memory data bus width. These bits define the memory device width.
    static constexpr uint32_t FMC_SDCR2_NB = 0x40; // Number of internal banks This bit sets the number of internal banks.
    typedef bit_field_t<7, 0x3> FMC_SDCR2_CAS; // CAS Latency This bits sets the SDRAM CAS latency in number of memory clock cycles
    static constexpr uint32_t FMC_SDCR2_WP = 0x200; // Write protection This bit enables write mode access to the SDRAM bank.
    typedef bit_field_t<10, 0x3> FMC_SDCR2_SDCLK; // SDRAM clock configuration These bits define the SDRAM clock period for both SDRAM banks and allow disabling the clock before changing the frequency. In this case the SDRAM must be re-initialized. Note: The corresponding bits in the FMC_SDCR2 register is read only.
    static constexpr uint32_t FMC_SDCR2_RBURST = 0x1000; // Burst read This bit enables burst read mode. The SDRAM controller anticipates the next read commands during the CAS latency and stores data in the Read FIFO. Note: The corresponding bit in the FMC_SDCR2 register is read only.
    typedef bit_field_t<13, 0x3> FMC_SDCR2_RPIPE; // Read pipe These bits define the delay, in KCK_FMC clock cycles, for reading data after CAS latency. Note: The corresponding bits in the FMC_SDCR2 register is read only.

    static constexpr uint32_t FMC_SDTR1_RESET_VALUE = 0xfffffff; // Reset value
    typedef bit_field_t<0, 0xf> FMC_SDTR1_TMRD; // Load Mode Register to Active These bits define the delay between a Load Mode Register command and an Active or Refresh command in number of memory clock cycles. ....
    typedef bit_field_t<4, 0xf> FMC_SDTR1_TXSR; // Exit Self-refresh delay These bits define the delay from releasing the Self-refresh command to issuing the Activate command in number of memory clock cycles. .... Note: If two SDRAM devices are used, the FMC_SDTR1 and FMC_SDTR2 must be programmed with the same TXSR timing corresponding to the slowest SDRAM device.
    typedef bit_field_t<8, 0xf> FMC_SDTR1_TRAS; // Self refresh time These bits define the minimum Self-refresh period in number of memory clock cycles. ....
    typedef bit_field_t<12, 0xf> FMC_SDTR1_TRC; // Row cycle delay These bits define the delay between the Refresh command and the Activate command, as well as the delay between two consecutive Refresh commands. It is expressed in number of memory clock cycles. The TRC timing is only configured in the FMC_SDTR1 register. If two SDRAM devices are used, the TRC must be programmed with the timings of the slowest device. .... Note: TRC must match the TRC and TRFC (Auto Refresh period) timings defined in the SDRAM device datasheet. Note: The corresponding bits in the FMC_SDTR2 register are dont care.
    typedef bit_field_t<16, 0xf> FMC_SDTR1_TWR; // Recovery delay These bits define the delay between a Write and a Precharge command in number of memory clock cycles. .... Note: TWR must be programmed to match the write recovery time (tWR) defined in the SDRAM datasheet, and to guarantee that: TWR &amp;#8805; TRAS - TRCD and TWR &amp;#8805;TRC - TRCD - TRP Example: TRAS= 4 cycles, TRCD= 2 cycles. So, TWR &amp;gt;= 2 cycles. TWR must be programmed to 0x1. If two SDRAM devices are used, the FMC_SDTR1 and FMC_SDTR2 must be programmed with the same TWR timing corresponding to the slowest SDRAM device.
    typedef bit_field_t<20, 0xf> FMC_SDTR1_TRP; // Row precharge delay These bits define the delay between a Precharge command and another command in number of memory clock cycles. The TRP timing is only configured in the FMC_SDTR1 register. If two SDRAM devices are used, the TRP must be programmed with the timing of the slowest device. .... Note: The corresponding bits in the FMC_SDTR2 register are dont care.
    typedef bit_field_t<24, 0xf> FMC_SDTR1_TRCD; // Row to column delay These bits define the delay between the Activate command and a Read/Write command in number of memory clock cycles. ....

    static constexpr uint32_t FMC_SDTR2_RESET_VALUE = 0xfffffff; // Reset value
    typedef bit_field_t<0, 0xf> FMC_SDTR2_TMRD; // Load Mode Register to Active These bits define the delay between a Load Mode Register command and an Active or Refresh command in number of memory clock cycles. ....
    typedef bit_field_t<4, 0xf> FMC_SDTR2_TXSR; // Exit Self-refresh delay These bits define the delay from releasing the Self-refresh command to issuing the Activate command in number of memory clock cycles. .... Note: If two SDRAM devices are used, the FMC_SDTR1 and FMC_SDTR2 must be programmed with the same TXSR timing corresponding to the slowest SDRAM device.
    typedef bit_field_t<8, 0xf> FMC_SDTR2_TRAS; // Self refresh time These bits define the minimum Self-refresh period in number of memory clock cycles. ....
    typedef bit_field_t<12, 0xf> FMC_SDTR2_TRC; // Row cycle delay These bits define the delay between the Refresh command and the Activate command, as well as the delay between two consecutive Refresh commands. It is expressed in number of memory clock cycles. The TRC timing is only configured in the FMC_SDTR1 register. If two SDRAM devices are used, the TRC must be programmed with the timings of the slowest device. .... Note: TRC must match the TRC and TRFC (Auto Refresh period) timings defined in the SDRAM device datasheet. Note: The corresponding bits in the FMC_SDTR2 register are dont care.
    typedef bit_field_t<16, 0xf> FMC_SDTR2_TWR; // Recovery delay These bits define the delay between a Write and a Precharge command in number of memory clock cycles. .... Note: TWR must be programmed to match the write recovery time (tWR) defined in the SDRAM datasheet, and to guarantee that: TWR &amp;#8805; TRAS - TRCD and TWR &amp;#8805;TRC - TRCD - TRP Example: TRAS= 4 cycles, TRCD= 2 cycles. So, TWR &amp;gt;= 2 cycles. TWR must be programmed to 0x1. If two SDRAM devices are used, the FMC_SDTR1 and FMC_SDTR2 must be programmed with the same TWR timing corresponding to the slowest SDRAM device.
    typedef bit_field_t<20, 0xf> FMC_SDTR2_TRP; // Row precharge delay These bits define the delay between a Precharge command and another command in number of memory clock cycles. The TRP timing is only configured in the FMC_SDTR1 register. If two SDRAM devices are used, the TRP must be programmed with the timing of the slowest device. .... Note: The corresponding bits in the FMC_SDTR2 register are dont care.
    typedef bit_field_t<24, 0xf> FMC_SDTR2_TRCD; // Row to column delay These bits define the delay between the Activate command and a Read/Write command in number of memory clock cycles. ....

    static constexpr uint32_t FMC_SDCMR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> FMC_SDCMR_MODE; // Command mode These bits define the command issued to the SDRAM device. Note: When a command is issued, at least one Command Target Bank bit ( CTB1 or CTB2) must be set otherwise the command will be ignored. Note: If two SDRAM banks are used, the Auto-refresh and PALL command must be issued simultaneously to the two devices with CTB1 and CTB2 bits set otherwise the command will be ignored. Note: If only one SDRAM bank is used and a command is issued with its associated CTB bit set, the other CTB bit of the unused bank must be kept to 0.
    static constexpr uint32_t FMC_SDCMR_CTB2 = 0x8; // Command Target Bank 2 This bit indicates whether the command will be issued to SDRAM Bank 2 or not.
    static constexpr uint32_t FMC_SDCMR_CTB1 = 0x10; // Command Target Bank 1 This bit indicates whether the command will be issued to SDRAM Bank 1 or not.
    typedef bit_field_t<5, 0xf> FMC_SDCMR_NRFS; // Number of Auto-refresh These bits define the number of consecutive Auto-refresh commands issued when MODE = 011. ....
    typedef bit_field_t<9, 0x3fff> FMC_SDCMR_MRD; // Mode Register definition This 14-bit field defines the SDRAM Mode Register content. The Mode Register is programmed using the Load Mode Register command. The MRD[13:0] bits are also used to program the extended mode register for mobile SDRAM.

    static constexpr uint32_t FMC_SDRTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FMC_SDRTR_CRE = 0x1; // Clear Refresh error flag This bit is used to clear the Refresh Error Flag (RE) in the Status Register.
    typedef bit_field_t<1, 0x1fff> FMC_SDRTR_COUNT; // Refresh Timer Count This 13-bit field defines the refresh rate of the SDRAM device. It is expressed in number of memory clock cycles. It must be set at least to 41 SDRAM clock cycles (0x29). Refresh rate = (COUNT + 1) x SDRAM frequency clock COUNT = (SDRAM refresh period / Number of rows) - 20
    static constexpr uint32_t FMC_SDRTR_REIE = 0x4000; // RES Interrupt Enable

    static constexpr uint32_t FMC_SDSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FMC_SDSR_RE = 0x1; // Refresh error flag An interrupt is generated if REIE = 1 and RE = 1
    typedef bit_field_t<1, 0x3> FMC_SDSR_MODES1; // Status Mode for Bank 1 These bits define the Status Mode of SDRAM Bank 1.
    typedef bit_field_t<3, 0x3> FMC_SDSR_MODES2; // Status Mode for Bank 2 These bits define the Status Mode of SDRAM Bank 2.
};

template<>
struct peripheral_t<STM32H742x, FMC>
{
    static constexpr periph_t P = FMC;
    using T = stm32h742x_fmc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, FMC>
{
    static constexpr periph_t P = FMC;
    using T = stm32h742x_fmc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, FMC>
{
    static constexpr periph_t P = FMC;
    using T = stm32h742x_fmc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, FMC>
{
    static constexpr periph_t P = FMC;
    using T = stm32h742x_fmc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, FMC>
{
    static constexpr periph_t P = FMC;
    using T = stm32h742x_fmc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, FMC>
{
    static constexpr periph_t P = FMC;
    using T = stm32h742x_fmc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, FMC>
{
    static constexpr periph_t P = FMC;
    using T = stm32h742x_fmc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, FMC>
{
    static constexpr periph_t P = FMC;
    using T = stm32h742x_fmc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, FMC>
{
    static constexpr periph_t P = FMC;
    using T = stm32h742x_fmc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, FMC>
{
    static constexpr periph_t P = FMC;
    using T = stm32h742x_fmc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, FMC>
{
    static constexpr periph_t P = FMC;
    using T = stm32h742x_fmc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, FMC>
{
    static constexpr periph_t P = FMC;
    using T = stm32h742x_fmc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, FMC>
{
    static constexpr periph_t P = FMC;
    using T = stm32h750x_fmc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, FMC>
{
    static constexpr periph_t P = FMC;
    using T = stm32h750x_fmc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, FMC>
{
    static constexpr periph_t P = FMC;
    using T = stm32h750x_fmc_t;
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
    static constexpr signal_t NBL0 = FMC_NBL0;
    static constexpr signal_t NBL1 = FMC_NBL1;
    static constexpr signal_t NBL2 = FMC_NBL2;
    static constexpr signal_t NBL3 = FMC_NBL3;
    static constexpr signal_t NCE = FMC_NCE;
    static constexpr signal_t NE1 = FMC_NE1;
    static constexpr signal_t NE2 = FMC_NE2;
    static constexpr signal_t NE3 = FMC_NE3;
    static constexpr signal_t NE4 = FMC_NE4;
    static constexpr signal_t NL = FMC_NL;
    static constexpr signal_t NOE = FMC_NOE;
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
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }
};
