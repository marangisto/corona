#pragma once

////
//
//      STM32H7 QUADSPI peripherals
//
///

// QUADSPI: QUADSPI

struct stm32h742x_quadspi_t
{
    volatile uint32_t CR; // QUADSPI control register
    volatile uint32_t DCR; // QUADSPI device configuration register
    volatile uint32_t SR; // QUADSPI status register
    volatile uint32_t FCR; // QUADSPI flag clear register
    volatile uint32_t DLR; // QUADSPI data length register
    volatile uint32_t CCR; // QUADSPI communication configuration register
    volatile uint32_t AR; // QUADSPI address register
    volatile uint32_t ABR; // QUADSPI alternate bytes registers
    volatile uint32_t DR; // QUADSPI data register
    volatile uint32_t PSMKR; // QUADSPI polling status mask register
    volatile uint32_t PSMAR; // QUADSPI polling status match register
    volatile uint32_t PIR; // QUADSPI polling interval register
    volatile uint32_t LPTR; // QUADSPI low-power timeout register

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_EN = 0x1; // Enable Enable the QUADSPI.
    static constexpr uint32_t CR_ABORT = 0x2; // Abort request This bit aborts the on-going command sequence. It is automatically reset once the abort is complete. This bit stops the current transfer. In polling mode or memory-mapped mode, this bit also reset the APM bit or the DM bit.
    static constexpr uint32_t CR_DMAEN = 0x4; // DMA enable In indirect mode, DMA can be used to input or output data via the QUADSPI_DR register. DMA transfers are initiated when the FIFO threshold flag, FTF, is set.
    static constexpr uint32_t CR_TCEN = 0x8; // Timeout counter enable This bit is valid only when memory-mapped mode (FMODE = 11) is selected. Activating this bit causes the chip select (nCS) to be released (and thus reduces consumption) if there has not been an access after a certain amount of time, where this time is defined by TIMEOUT[15:0] (QUADSPI_LPTR). Enable the timeout counter. By default, the QUADSPI never stops its prefetch operation, keeping the previous read operation active with nCS maintained low, even if no access to the Flash memory occurs for a long time. Since Flash memories tend to consume more when nCS is held low, the application might want to activate the timeout counter (TCEN = 1, QUADSPI_CR[3]) so that nCS is released after a period of TIMEOUT[15:0] (QUADSPI_LPTR) cycles have elapsed without an access since when the FIFO becomes full with prefetch data. This bit can be modified only when BUSY = 0.
    static constexpr uint32_t CR_SSHIFT = 0x10; // Sample shift By default, the QUADSPI samples data 1/2 of a CLK cycle after the data is driven by the Flash memory. This bit allows the data is to be sampled later in order to account for external signal delays. Firmware must assure that SSHIFT = 0 when in DDR mode (when DDRM = 1). This field can be modified only when BUSY = 0.
    static constexpr uint32_t CR_DFM = 0x40; // Dual-flash mode This bit activates dual-flash mode, where two external Flash memories are used simultaneously to double throughput and capacity. This bit can be modified only when BUSY = 0.
    static constexpr uint32_t CR_FSEL = 0x80; // Flash memory selection This bit selects the Flash memory to be addressed in single flash mode (when DFM = 0). This bit can be modified only when BUSY = 0. This bit is ignored when DFM = 1.
    typedef bit_field_t<8, 0x1f> CR_FTHRES; // FIFO threshold level Defines, in indirect mode, the threshold number of bytes in the FIFO that will cause the FIFO threshold flag (FTF, QUADSPI_SR[2]) to be set. In indirect write mode (FMODE = 00): ... In indirect read mode (FMODE = 01): ... If DMAEN = 1, then the DMA controller for the corresponding channel must be disabled before changing the FTHRES value.
    static constexpr uint32_t CR_TEIE = 0x10000; // Transfer error interrupt enable This bit enables the transfer error interrupt.
    static constexpr uint32_t CR_TCIE = 0x20000; // Transfer complete interrupt enable This bit enables the transfer complete interrupt.
    static constexpr uint32_t CR_FTIE = 0x40000; // FIFO threshold interrupt enable This bit enables the FIFO threshold interrupt.
    static constexpr uint32_t CR_SMIE = 0x80000; // Status match interrupt enable This bit enables the status match interrupt.
    static constexpr uint32_t CR_TOIE = 0x100000; // TimeOut interrupt enable This bit enables the TimeOut interrupt.
    static constexpr uint32_t CR_APMS = 0x400000; // Automatic poll mode stop This bit determines if automatic polling is stopped after a match. This bit can be modified only when BUSY = 0.
    static constexpr uint32_t CR_PMM = 0x800000; // Polling match mode This bit indicates which method should be used for determining a match during automatic polling mode. This bit can be modified only when BUSY = 0.
    typedef bit_field_t<24, 0xff> CR_PRESCALER; // clock prescaler

    static constexpr uint32_t DCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DCR_CKMODE = 0x1; // indicates the level that clk takes between command
    typedef bit_field_t<8, 0x7> DCR_CSHT; // Chip select high time CSHT+1 defines the minimum number of CLK cycles which the chip select (nCS) must remain high between commands issued to the Flash memory. ... This field can be modified only when BUSY = 0.
    typedef bit_field_t<16, 0x1f> DCR_FSIZE; // Flash memory size This field defines the size of external memory using the following formula: Number of bytes in Flash memory = 2[FSIZE+1] FSIZE+1 is effectively the number of address bits required to address the Flash memory. The Flash memory capacity can be up to 4GB (addressed using 32 bits) in indirect mode, but the addressable space in memory-mapped mode is limited to 256MB. If DFM = 1, FSIZE indicates the total capacity of the two Flash memories together. This field can be modified only when BUSY = 0.

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_TEF = 0x1; // Transfer error flag This bit is set in indirect mode when an invalid address is being accessed in indirect mode. It is cleared by writing 1 to CTEF.
    static constexpr uint32_t SR_TCF = 0x2; // Transfer complete flag This bit is set in indirect mode when the programmed number of data has been transferred or in any mode when the transfer has been aborted.It is cleared by writing 1 to CTCF.
    static constexpr uint32_t SR_FTF = 0x4; // FIFO threshold flag In indirect mode, this bit is set when the FIFO threshold has been reached, or if there is any data left in the FIFO after reads from the Flash memory are complete. It is cleared automatically as soon as threshold condition is no longer true. In automatic polling mode this bit is set every time the status register is read, and the bit is cleared when the data register is read.
    static constexpr uint32_t SR_SMF = 0x8; // Status match flag This bit is set in automatic polling mode when the unmasked received data matches the corresponding bits in the match register (QUADSPI_PSMAR). It is cleared by writing 1 to CSMF.
    static constexpr uint32_t SR_TOF = 0x10; // Timeout flag This bit is set when timeout occurs. It is cleared by writing 1 to CTOF.
    static constexpr uint32_t SR_BUSY = 0x20; // Busy This bit is set when an operation is on going. This bit clears automatically when the operation with the Flash memory is finished and the FIFO is empty.
    typedef bit_field_t<8, 0x3f> SR_FLEVEL; // FIFO level This field gives the number of valid bytes which are being held in the FIFO. FLEVEL = 0 when the FIFO is empty, and 16 when it is full. In memory-mapped mode and in automatic status polling mode, FLEVEL is zero.

    static constexpr uint32_t FCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FCR_CTEF = 0x1; // Clear transfer error flag Writing 1 clears the TEF flag in the QUADSPI_SR register
    static constexpr uint32_t FCR_CTCF = 0x2; // Clear transfer complete flag Writing 1 clears the TCF flag in the QUADSPI_SR register
    static constexpr uint32_t FCR_CSMF = 0x8; // Clear status match flag Writing 1 clears the SMF flag in the QUADSPI_SR register
    static constexpr uint32_t FCR_CTOF = 0x10; // Clear timeout flag Writing 1 clears the TOF flag in the QUADSPI_SR register

    static constexpr uint32_t DLR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DLR_DL; // Data length Number of data to be retrieved (value+1) in indirect and status-polling modes. A value no greater than 3 (indicating 4 bytes) should be used for status-polling mode. All 1s in indirect mode means undefined length, where QUADSPI will continue until the end of memory, as defined by FSIZE. 0x0000_0000: 1 byte is to be transferred 0x0000_0001: 2 bytes are to be transferred 0x0000_0002: 3 bytes are to be transferred 0x0000_0003: 4 bytes are to be transferred ... 0xFFFF_FFFD: 4,294,967,294 (4G-2) bytes are to be transferred 0xFFFF_FFFE: 4,294,967,295 (4G-1) bytes are to be transferred 0xFFFF_FFFF: undefined length -- all bytes until the end of Flash memory (as defined by FSIZE) are to be transferred. Continue reading indefinitely if FSIZE = 0x1F. DL[0] is stuck at 1 in dual-flash mode (DFM = 1) even when 0 is written to this bit, thus assuring that each access transfers an even number of bytes. This field has no effect when in memory-mapped mode (FMODE = 10). This field can be written only when BUSY = 0.

    static constexpr uint32_t CCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> CCR_INSTRUCTION; // Instruction Instruction to be send to the external SPI device. This field can be written only when BUSY = 0.
    typedef bit_field_t<8, 0x3> CCR_IMODE; // Instruction mode This field defines the instruction phase mode of operation: This field can be written only when BUSY = 0.
    typedef bit_field_t<10, 0x3> CCR_ADMODE; // Address mode This field defines the address phase mode of operation: This field can be written only when BUSY = 0.
    typedef bit_field_t<12, 0x3> CCR_ADSIZE; // Address size This bit defines address size: This field can be written only when BUSY = 0.
    typedef bit_field_t<14, 0x3> CCR_ABMODE; // Alternate bytes mode This field defines the alternate-bytes phase mode of operation: This field can be written only when BUSY = 0.
    typedef bit_field_t<16, 0x3> CCR_ABSIZE; // Alternate bytes size This bit defines alternate bytes size: This field can be written only when BUSY = 0.
    typedef bit_field_t<18, 0x1f> CCR_DCYC; // Number of dummy cycles This field defines the duration of the dummy phase. In both SDR and DDR modes, it specifies a number of CLK cycles (0-31). This field can be written only when BUSY = 0.
    typedef bit_field_t<24, 0x3> CCR_DMODE; // Data mode This field defines the data phases mode of operation: This field also determines the dummy phase mode of operation. This field can be written only when BUSY = 0.
    typedef bit_field_t<26, 0x3> CCR_FMODE; // Functional mode This field defines the QUADSPI functional mode of operation. If DMAEN = 1 already, then the DMA controller for the corresponding channel must be disabled before changing the FMODE value. This field can be written only when BUSY = 0.
    static constexpr uint32_t CCR_SIOO = 0x10000000; // Send instruction only once mode See Section15.3.11: Sending the instruction only once on page13. This bit has no effect when IMODE = 00. This field can be written only when BUSY = 0.
    static constexpr uint32_t CCR_DHHC = 0x40000000; // DDR hold Delay the data output by 1/4 of the QUADSPI output clock cycle in DDR mode: This feature is only active in DDR mode. This field can be written only when BUSY = 0.
    static constexpr uint32_t CCR_DDRM = 0x80000000; // Double data rate mode This bit sets the DDR mode for the address, alternate byte and data phase: This field can be written only when BUSY = 0.

    static constexpr uint32_t AR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> AR_ADDRESS; // [31 0]: Address Address to be send to the external Flash memory Writes to this field are ignored when BUSY = 0 or when FMODE = 11 (memory-mapped mode). In dual flash mode, ADDRESS[0] is automatically stuck to 0 as the address should always be even

    static constexpr uint32_t ABR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ABR_ALTERNATE; // Alternate Bytes Optional data to be send to the external SPI device right after the address. This field can be written only when BUSY = 0.

    static constexpr uint32_t DR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DR_DATA; // Data Data to be sent/received to/from the external SPI device. In indirect write mode, data written to this register is stored on the FIFO before it is sent to the Flash memory during the data phase. If the FIFO is too full, a write operation is stalled until the FIFO has enough space to accept the amount of data being written. In indirect read mode, reading this register gives (via the FIFO) the data which was received from the Flash memory. If the FIFO does not have as many bytes as requested by the read operation and if BUSY=1, the read operation is stalled until enough data is present or until the transfer is complete, whichever happens first. In automatic polling mode, this register contains the last data read from the Flash memory (without masking). Word, halfword, and byte accesses to this register are supported. In indirect write mode, a byte write adds 1 byte to the FIFO, a halfword write 2, and a word write 4. Similarly, in indirect read mode, a byte read removes 1 byte from the FIFO, a halfword read 2, and a word read 4. Accesses in indirect mode must be aligned to the bottom of this register: a byte read must read DATA[7:0] and a halfword read must read DATA[15:0].

    static constexpr uint32_t PSMKR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> PSMKR_MASK; // Status mask Mask to be applied to the status bytes received in polling mode. For bit n: This field can be written only when BUSY = 0.

    static constexpr uint32_t PSMAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> PSMAR_MATCH; // Status match Value to be compared with the masked status register to get a match. This field can be written only when BUSY = 0.

    static constexpr uint32_t PIR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> PIR_INTERVAL; // Polling interval Number of CLK cycles between to read during automatic polling phases. This field can be written only when BUSY = 0.

    static constexpr uint32_t LPTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> LPTR_TIMEOUT; // Timeout period After each access in memory-mapped mode, the QUADSPI prefetches the subsequent bytes and holds these bytes in the FIFO. This field indicates how many CLK cycles the QUADSPI waits after the FIFO becomes full until it raises nCS, putting the Flash memory in a lower-consumption state. This field can be written only when BUSY = 0.
};

// QUADSPI: QUADSPI

struct stm32h750x_quadspi_t
{
    volatile uint32_t QUADSPI_CR; // QUADSPI control register
    volatile uint32_t QUADSPI_DCR; // QUADSPI device configuration register
    volatile uint32_t QUADSPI_SR; // QUADSPI status register
    volatile uint32_t QUADSPI_FCR; // QUADSPI flag clear register
    volatile uint32_t QUADSPI_DLR; // QUADSPI data length register
    volatile uint32_t QUADSPI_CCR; // QUADSPI communication configuration register
    volatile uint32_t QUADSPI_AR; // QUADSPI address register
    volatile uint32_t QUADSPI_ABR; // QUADSPI alternate bytes registers
    volatile uint32_t QUADSPI_DR; // QUADSPI data register
    volatile uint32_t QUADSPI_PSMKR; // QUADSPI polling status mask register
    volatile uint32_t QUADSPI_PSMAR; // QUADSPI polling status match register
    volatile uint32_t QUADSPI_PIR; // QUADSPI polling interval register
    volatile uint32_t QUADSPI_LPTR; // QUADSPI low-power timeout register

    static constexpr uint32_t QUADSPI_CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t QUADSPI_CR_EN = 0x1; // Enable Enable the QUADSPI.
    static constexpr uint32_t QUADSPI_CR_ABORT = 0x2; // Abort request This bit aborts the on-going command sequence. It is automatically reset once the abort is complete. This bit stops the current transfer. In polling mode or memory-mapped mode, this bit also reset the APM bit or the DM bit.
    static constexpr uint32_t QUADSPI_CR_DMAEN = 0x4; // DMA enable In indirect mode, DMA can be used to input or output data via the QUADSPI_DR register. DMA transfers are initiated when the FIFO threshold flag, FTF, is set.
    static constexpr uint32_t QUADSPI_CR_TCEN = 0x8; // Timeout counter enable This bit is valid only when memory-mapped mode (FMODE = 11) is selected. Activating this bit causes the chip select (nCS) to be released (and thus reduces consumption) if there has not been an access after a certain amount of time, where this time is defined by TIMEOUT[15:0] (QUADSPI_LPTR). Enable the timeout counter. By default, the QUADSPI never stops its prefetch operation, keeping the previous read operation active with nCS maintained low, even if no access to the Flash memory occurs for a long time. Since Flash memories tend to consume more when nCS is held low, the application might want to activate the timeout counter (TCEN = 1, QUADSPI_CR[3]) so that nCS is released after a period of TIMEOUT[15:0] (QUADSPI_LPTR) cycles have elapsed without an access since when the FIFO becomes full with prefetch data. This bit can be modified only when BUSY = 0.
    static constexpr uint32_t QUADSPI_CR_SSHIFT = 0x10; // Sample shift By default, the QUADSPI samples data 1/2 of a CLK cycle after the data is driven by the Flash memory. This bit allows the data is to be sampled later in order to account for external signal delays. Firmware must assure that SSHIFT = 0 when in DDR mode (when DDRM = 1). This field can be modified only when BUSY = 0.
    static constexpr uint32_t QUADSPI_CR_DFM = 0x40; // Dual-flash mode This bit activates dual-flash mode, where two external Flash memories are used simultaneously to double throughput and capacity. This bit can be modified only when BUSY = 0.
    static constexpr uint32_t QUADSPI_CR_FSEL = 0x80; // Flash memory selection This bit selects the Flash memory to be addressed in single flash mode (when DFM = 0). This bit can be modified only when BUSY = 0. This bit is ignored when DFM = 1.
    typedef bit_field_t<8, 0x1f> QUADSPI_CR_FTHRES; // FIFO threshold level Defines, in indirect mode, the threshold number of bytes in the FIFO that will cause the FIFO threshold flag (FTF, QUADSPI_SR[2]) to be set. In indirect write mode (FMODE = 00): ... In indirect read mode (FMODE = 01): ... If DMAEN = 1, then the DMA controller for the corresponding channel must be disabled before changing the FTHRES value.
    static constexpr uint32_t QUADSPI_CR_TEIE = 0x10000; // Transfer error interrupt enable This bit enables the transfer error interrupt.
    static constexpr uint32_t QUADSPI_CR_TCIE = 0x20000; // Transfer complete interrupt enable This bit enables the transfer complete interrupt.
    static constexpr uint32_t QUADSPI_CR_FTIE = 0x40000; // FIFO threshold interrupt enable This bit enables the FIFO threshold interrupt.
    static constexpr uint32_t QUADSPI_CR_SMIE = 0x80000; // Status match interrupt enable This bit enables the status match interrupt.
    static constexpr uint32_t QUADSPI_CR_TOIE = 0x100000; // TimeOut interrupt enable This bit enables the TimeOut interrupt.
    static constexpr uint32_t QUADSPI_CR_APMS = 0x400000; // Automatic poll mode stop This bit determines if automatic polling is stopped after a match. This bit can be modified only when BUSY = 0.
    static constexpr uint32_t QUADSPI_CR_PMM = 0x800000; // Polling match mode This bit indicates which method should be used for determining a match during automatic polling mode. This bit can be modified only when BUSY = 0.
    typedef bit_field_t<24, 0xff> QUADSPI_CR_PRESCALER; // clock prescaler

    static constexpr uint32_t QUADSPI_DCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t QUADSPI_DCR_CKMODE = 0x1; // indicates the level that clk takes between command
    typedef bit_field_t<8, 0x7> QUADSPI_DCR_CSHT; // Chip select high time CSHT+1 defines the minimum number of CLK cycles which the chip select (nCS) must remain high between commands issued to the Flash memory. ... This field can be modified only when BUSY = 0.
    typedef bit_field_t<16, 0x1f> QUADSPI_DCR_FSIZE; // Flash memory size This field defines the size of external memory using the following formula: Number of bytes in Flash memory = 2[FSIZE+1] FSIZE+1 is effectively the number of address bits required to address the Flash memory. The Flash memory capacity can be up to 4GB (addressed using 32 bits) in indirect mode, but the addressable space in memory-mapped mode is limited to 256MB. If DFM = 1, FSIZE indicates the total capacity of the two Flash memories together. This field can be modified only when BUSY = 0.

    static constexpr uint32_t QUADSPI_SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t QUADSPI_SR_TEF = 0x1; // Transfer error flag This bit is set in indirect mode when an invalid address is being accessed in indirect mode. It is cleared by writing 1 to CTEF.
    static constexpr uint32_t QUADSPI_SR_TCF = 0x2; // Transfer complete flag This bit is set in indirect mode when the programmed number of data has been transferred or in any mode when the transfer has been aborted.It is cleared by writing 1 to CTCF.
    static constexpr uint32_t QUADSPI_SR_FTF = 0x4; // FIFO threshold flag In indirect mode, this bit is set when the FIFO threshold has been reached, or if there is any data left in the FIFO after reads from the Flash memory are complete. It is cleared automatically as soon as threshold condition is no longer true. In automatic polling mode this bit is set every time the status register is read, and the bit is cleared when the data register is read.
    static constexpr uint32_t QUADSPI_SR_SMF = 0x8; // Status match flag This bit is set in automatic polling mode when the unmasked received data matches the corresponding bits in the match register (QUADSPI_PSMAR). It is cleared by writing 1 to CSMF.
    static constexpr uint32_t QUADSPI_SR_TOF = 0x10; // Timeout flag This bit is set when timeout occurs. It is cleared by writing 1 to CTOF.
    static constexpr uint32_t QUADSPI_SR_BUSY = 0x20; // Busy This bit is set when an operation is on going. This bit clears automatically when the operation with the Flash memory is finished and the FIFO is empty.
    typedef bit_field_t<8, 0x3f> QUADSPI_SR_FLEVEL; // FIFO level This field gives the number of valid bytes which are being held in the FIFO. FLEVEL = 0 when the FIFO is empty, and 16 when it is full. In memory-mapped mode and in automatic status polling mode, FLEVEL is zero.

    static constexpr uint32_t QUADSPI_FCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t QUADSPI_FCR_CTEF = 0x1; // Clear transfer error flag Writing 1 clears the TEF flag in the QUADSPI_SR register
    static constexpr uint32_t QUADSPI_FCR_CTCF = 0x2; // Clear transfer complete flag Writing 1 clears the TCF flag in the QUADSPI_SR register
    static constexpr uint32_t QUADSPI_FCR_CSMF = 0x8; // Clear status match flag Writing 1 clears the SMF flag in the QUADSPI_SR register
    static constexpr uint32_t QUADSPI_FCR_CTOF = 0x10; // Clear timeout flag Writing 1 clears the TOF flag in the QUADSPI_SR register

    static constexpr uint32_t QUADSPI_DLR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QUADSPI_DLR_DL; // Data length Number of data to be retrieved (value+1) in indirect and status-polling modes. A value no greater than 3 (indicating 4 bytes) should be used for status-polling mode. All 1s in indirect mode means undefined length, where QUADSPI will continue until the end of memory, as defined by FSIZE. 0x0000_0000: 1 byte is to be transferred 0x0000_0001: 2 bytes are to be transferred 0x0000_0002: 3 bytes are to be transferred 0x0000_0003: 4 bytes are to be transferred ... 0xFFFF_FFFD: 4,294,967,294 (4G-2) bytes are to be transferred 0xFFFF_FFFE: 4,294,967,295 (4G-1) bytes are to be transferred 0xFFFF_FFFF: undefined length -- all bytes until the end of Flash memory (as defined by FSIZE) are to be transferred. Continue reading indefinitely if FSIZE = 0x1F. DL[0] is stuck at 1 in dual-flash mode (DFM = 1) even when 0 is written to this bit, thus assuring that each access transfers an even number of bytes. This field has no effect when in memory-mapped mode (FMODE = 10). This field can be written only when BUSY = 0.

    static constexpr uint32_t QUADSPI_CCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> QUADSPI_CCR_INSTRUCTION; // Instruction Instruction to be send to the external SPI device. This field can be written only when BUSY = 0.
    typedef bit_field_t<8, 0x3> QUADSPI_CCR_IMODE; // Instruction mode This field defines the instruction phase mode of operation: This field can be written only when BUSY = 0.
    typedef bit_field_t<10, 0x3> QUADSPI_CCR_ADMODE; // Address mode This field defines the address phase mode of operation: This field can be written only when BUSY = 0.
    typedef bit_field_t<12, 0x3> QUADSPI_CCR_ADSIZE; // Address size This bit defines address size: This field can be written only when BUSY = 0.
    typedef bit_field_t<14, 0x3> QUADSPI_CCR_ABMODE; // Alternate bytes mode This field defines the alternate-bytes phase mode of operation: This field can be written only when BUSY = 0.
    typedef bit_field_t<16, 0x3> QUADSPI_CCR_ABSIZE; // Alternate bytes size This bit defines alternate bytes size: This field can be written only when BUSY = 0.
    typedef bit_field_t<18, 0x1f> QUADSPI_CCR_DCYC; // Number of dummy cycles This field defines the duration of the dummy phase. In both SDR and DDR modes, it specifies a number of CLK cycles (0-31). This field can be written only when BUSY = 0.
    typedef bit_field_t<24, 0x3> QUADSPI_CCR_DMODE; // Data mode This field defines the data phases mode of operation: This field also determines the dummy phase mode of operation. This field can be written only when BUSY = 0.
    typedef bit_field_t<26, 0x3> QUADSPI_CCR_FMODE; // Functional mode This field defines the QUADSPI functional mode of operation. If DMAEN = 1 already, then the DMA controller for the corresponding channel must be disabled before changing the FMODE value. This field can be written only when BUSY = 0.
    static constexpr uint32_t QUADSPI_CCR_SIOO = 0x10000000; // Send instruction only once mode See Section15.3.11: Sending the instruction only once on page13. This bit has no effect when IMODE = 00. This field can be written only when BUSY = 0.
    static constexpr uint32_t QUADSPI_CCR_DHHC = 0x40000000; // DDR hold Delay the data output by 1/4 of the QUADSPI output clock cycle in DDR mode: This feature is only active in DDR mode. This field can be written only when BUSY = 0.
    static constexpr uint32_t QUADSPI_CCR_DDRM = 0x80000000; // Double data rate mode This bit sets the DDR mode for the address, alternate byte and data phase: This field can be written only when BUSY = 0.

    static constexpr uint32_t QUADSPI_AR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QUADSPI_AR_ADDRESS; // [31 0]: Address Address to be send to the external Flash memory Writes to this field are ignored when BUSY = 0 or when FMODE = 11 (memory-mapped mode). In dual flash mode, ADDRESS[0] is automatically stuck to 0 as the address should always be even

    static constexpr uint32_t QUADSPI_ABR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QUADSPI_ABR_ALTERNATE; // Alternate Bytes Optional data to be send to the external SPI device right after the address. This field can be written only when BUSY = 0.

    static constexpr uint32_t QUADSPI_DR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QUADSPI_DR_DATA; // Data Data to be sent/received to/from the external SPI device. In indirect write mode, data written to this register is stored on the FIFO before it is sent to the Flash memory during the data phase. If the FIFO is too full, a write operation is stalled until the FIFO has enough space to accept the amount of data being written. In indirect read mode, reading this register gives (via the FIFO) the data which was received from the Flash memory. If the FIFO does not have as many bytes as requested by the read operation and if BUSY=1, the read operation is stalled until enough data is present or until the transfer is complete, whichever happens first. In automatic polling mode, this register contains the last data read from the Flash memory (without masking). Word, halfword, and byte accesses to this register are supported. In indirect write mode, a byte write adds 1 byte to the FIFO, a halfword write 2, and a word write 4. Similarly, in indirect read mode, a byte read removes 1 byte from the FIFO, a halfword read 2, and a word read 4. Accesses in indirect mode must be aligned to the bottom of this register: a byte read must read DATA[7:0] and a halfword read must read DATA[15:0].

    static constexpr uint32_t QUADSPI_PSMKR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QUADSPI_PSMKR_MASK; // Status mask Mask to be applied to the status bytes received in polling mode. For bit n: This field can be written only when BUSY = 0.

    static constexpr uint32_t QUADSPI_PSMAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> QUADSPI_PSMAR_MATCH; // Status match Value to be compared with the masked status register to get a match. This field can be written only when BUSY = 0.

    static constexpr uint32_t QUADSPI_PIR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> QUADSPI_PIR_INTERVAL; // Polling interval Number of CLK cycles between to read during automatic polling phases. This field can be written only when BUSY = 0.

    static constexpr uint32_t QUADSPI_LPTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> QUADSPI_LPTR_TIMEOUT; // Timeout period After each access in memory-mapped mode, the QUADSPI prefetches the subsequent bytes and holds these bytes in the FIFO. This field indicates how many CLK cycles the QUADSPI waits after the FIFO becomes full until it raises nCS, putting the Flash memory in a lower-consumption state. This field can be written only when BUSY = 0.
};

template<>
struct peripheral_t<STM32H742x, QUADSPI1>
{
    static constexpr periph_t P = QUADSPI1;
    using T = stm32h742x_quadspi_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, QUADSPI1>
{
    static constexpr periph_t P = QUADSPI1;
    using T = stm32h742x_quadspi_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, QUADSPI1>
{
    static constexpr periph_t P = QUADSPI1;
    using T = stm32h742x_quadspi_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, QUADSPI1>
{
    static constexpr periph_t P = QUADSPI1;
    using T = stm32h742x_quadspi_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, QUADSPI1>
{
    static constexpr periph_t P = QUADSPI1;
    using T = stm32h742x_quadspi_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, QUADSPI1>
{
    static constexpr periph_t P = QUADSPI1;
    using T = stm32h742x_quadspi_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, QUADSPI1>
{
    static constexpr periph_t P = QUADSPI1;
    using T = stm32h742x_quadspi_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, QUADSPI1>
{
    static constexpr periph_t P = QUADSPI1;
    using T = stm32h742x_quadspi_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, QUADSPI1>
{
    static constexpr periph_t P = QUADSPI1;
    using T = stm32h742x_quadspi_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, QUADSPI1>
{
    static constexpr periph_t P = QUADSPI1;
    using T = stm32h742x_quadspi_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, QUADSPI1>
{
    static constexpr periph_t P = QUADSPI1;
    using T = stm32h742x_quadspi_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, QUADSPI1>
{
    static constexpr periph_t P = QUADSPI1;
    using T = stm32h750x_quadspi_t;
    static T& V;
};

using quadspi1_t = peripheral_t<svd, QUADSPI1>;
