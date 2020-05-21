#pragma once

////
//
//      STM32H7 QUADSPI peripherals
//
////

////
//
//      QUADSPI
//
////

struct stm32h742x_quadspi_t
{
    volatile uint32_t CR;    // [read-write] QUADSPI control register
    volatile uint32_t DCR;   // [read-write] QUADSPI device configuration register
    volatile uint32_t SR;    // [read-only] QUADSPI status register
    volatile uint32_t FCR;   // [read-write] QUADSPI flag clear register
    volatile uint32_t DLR;   // [read-write] QUADSPI data length register
    volatile uint32_t CCR;   // [read-write] QUADSPI communication configuration register
    volatile uint32_t AR;    // [read-write] QUADSPI address register
    volatile uint32_t ABR;   // [read-write] QUADSPI alternate bytes registers
    volatile uint32_t DR;    // [read-write] QUADSPI data register
    volatile uint32_t PSMKR; // [read-write] QUADSPI polling status mask register
    volatile uint32_t PSMAR; // [read-write] QUADSPI polling status match register
    volatile uint32_t PIR;   // [read-write] QUADSPI polling interval register
    volatile uint32_t LPTR;  // [read-write] QUADSPI low-power timeout register

    static constexpr uint32_t CR_RESET_VALUE = 0x0;
    static constexpr uint32_t CR_EN = 0x1;        // Enable Enable the QUADSPI.
    static constexpr uint32_t CR_ABORT = 0x2;     // Abort request This bit aborts the on-going command sequence. It is automatically reset once the abort is complete. This bit stops the current transfer. In polling mode or memory-mapped mode, this bit also reset the APM bit or the DM bit.
    static constexpr uint32_t CR_DMAEN = 0x4;     // DMA enable In indirect mode, DMA can be used to input or output data via the QUADSPI_DR register. DMA transfers are initiated when the FIFO threshold flag, FTF, is set.
    static constexpr uint32_t CR_TCEN = 0x8;      // Timeout counter enable This bit is valid only when memory-mapped mode (FMODE = 11) is selected. Activating this bit causes the chip select (nCS) to be released (and thus reduces consumption) if there has not been an access after a certain amount of time, where this time is defined by TIMEOUT[15:0] (QUADSPI_LPTR). Enable the timeout counter. By default, the QUADSPI never stops its prefetch operation, keeping the previous read operation active with nCS maintained low, even if no access to the Flash memory occurs for a long time. Since Flash memories tend to consume more when nCS is held low, the application might want to activate the timeout counter (TCEN = 1, QUADSPI_CR[3]) so that nCS is released after a period of TIMEOUT[15:0] (QUADSPI_LPTR) cycles have elapsed without an access since when the FIFO becomes full with prefetch data. This bit can be modified only when BUSY = 0.
    static constexpr uint32_t CR_SSHIFT = 0x10;   // Sample shift By default, the QUADSPI samples data 1/2 of a CLK cycle after the data is driven by the Flash memory. This bit allows the data is to be sampled later in order to account for external signal delays. Firmware must assure that SSHIFT = 0 when in DDR mode (when DDRM = 1). This field can be modified only when BUSY = 0.
    static constexpr uint32_t CR_DFM = 0x40;      // Dual-flash mode This bit activates dual-flash mode, where two external Flash memories are used simultaneously to double throughput and capacity. This bit can be modified only when BUSY = 0.
    static constexpr uint32_t CR_FSEL = 0x80;     // Flash memory selection This bit selects the Flash memory to be addressed in single flash mode (when DFM = 0). This bit can be modified only when BUSY = 0. This bit is ignored when DFM = 1.
    template<uint32_t X>
    static constexpr uint32_t CR_FTHRES =         // FIFO threshold level Defines, in indirect mode, the threshold number of bytes in the FIFO that will cause the FIFO threshold flag (FTF, QUADSPI_SR[2]) to be set. In indirect write mode (FMODE = 00): ... In indirect read mode (FMODE = 01): ... If DMAEN = 1, then the DMA controller for the corresponding channel must be disabled before changing the FTHRES value.
        bit_field_t<8, 0x1f>::value<X>();
    static constexpr uint32_t CR_TEIE = 0x10000;  // Transfer error interrupt enable This bit enables the transfer error interrupt.
    static constexpr uint32_t CR_TCIE = 0x20000;  // Transfer complete interrupt enable This bit enables the transfer complete interrupt.
    static constexpr uint32_t CR_FTIE = 0x40000;  // FIFO threshold interrupt enable This bit enables the FIFO threshold interrupt.
    static constexpr uint32_t CR_SMIE = 0x80000;  // Status match interrupt enable This bit enables the status match interrupt.
    static constexpr uint32_t CR_TOIE = 0x100000; // TimeOut interrupt enable This bit enables the TimeOut interrupt.
    static constexpr uint32_t CR_APMS = 0x400000; // Automatic poll mode stop This bit determines if automatic polling is stopped after a match. This bit can be modified only when BUSY = 0.
    static constexpr uint32_t CR_PMM = 0x800000;  // Polling match mode This bit indicates which method should be used for determining a match during automatic polling mode. This bit can be modified only when BUSY = 0.
    template<uint32_t X>
    static constexpr uint32_t CR_PRESCALER =      // clock prescaler
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t DCR_RESET_VALUE = 0x0;
    static constexpr uint32_t DCR_CKMODE = 0x1; // indicates the level that clk takes between command
    template<uint32_t X>
    static constexpr uint32_t DCR_CSHT =        // Chip select high time CSHT+1 defines the minimum number of CLK cycles which the chip select (nCS) must remain high between commands issued to the Flash memory. ... This field can be modified only when BUSY = 0.
        bit_field_t<8, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DCR_FSIZE =       // Flash memory size This field defines the size of external memory using the following formula: Number of bytes in Flash memory = 2[FSIZE+1] FSIZE+1 is effectively the number of address bits required to address the Flash memory. The Flash memory capacity can be up to 4GB (addressed using 32 bits) in indirect mode, but the addressable space in memory-mapped mode is limited to 256MB. If DFM = 1, FSIZE indicates the total capacity of the two Flash memories together. This field can be modified only when BUSY = 0.
        bit_field_t<16, 0x1f>::value<X>();

    static constexpr uint32_t SR_RESET_VALUE = 0x0;
    static constexpr uint32_t SR_TEF = 0x1;   // Transfer error flag This bit is set in indirect mode when an invalid address is being accessed in indirect mode. It is cleared by writing 1 to CTEF.
    static constexpr uint32_t SR_TCF = 0x2;   // Transfer complete flag This bit is set in indirect mode when the programmed number of data has been transferred or in any mode when the transfer has been aborted.It is cleared by writing 1 to CTCF.
    static constexpr uint32_t SR_FTF = 0x4;   // FIFO threshold flag In indirect mode, this bit is set when the FIFO threshold has been reached, or if there is any data left in the FIFO after reads from the Flash memory are complete. It is cleared automatically as soon as threshold condition is no longer true. In automatic polling mode this bit is set every time the status register is read, and the bit is cleared when the data register is read.
    static constexpr uint32_t SR_SMF = 0x8;   // Status match flag This bit is set in automatic polling mode when the unmasked received data matches the corresponding bits in the match register (QUADSPI_PSMAR). It is cleared by writing 1 to CSMF.
    static constexpr uint32_t SR_TOF = 0x10;  // Timeout flag This bit is set when timeout occurs. It is cleared by writing 1 to CTOF.
    static constexpr uint32_t SR_BUSY = 0x20; // Busy This bit is set when an operation is on going. This bit clears automatically when the operation with the Flash memory is finished and the FIFO is empty.
    template<uint32_t X>
    static constexpr uint32_t SR_FLEVEL =     // FIFO level This field gives the number of valid bytes which are being held in the FIFO. FLEVEL = 0 when the FIFO is empty, and 16 when it is full. In memory-mapped mode and in automatic status polling mode, FLEVEL is zero.
        bit_field_t<8, 0x3f>::value<X>();

    static constexpr uint32_t FCR_RESET_VALUE = 0x0;
    static constexpr uint32_t FCR_CTEF = 0x1;  // Clear transfer error flag Writing 1 clears the TEF flag in the QUADSPI_SR register
    static constexpr uint32_t FCR_CTCF = 0x2;  // Clear transfer complete flag Writing 1 clears the TCF flag in the QUADSPI_SR register
    static constexpr uint32_t FCR_CSMF = 0x8;  // Clear status match flag Writing 1 clears the SMF flag in the QUADSPI_SR register
    static constexpr uint32_t FCR_CTOF = 0x10; // Clear timeout flag Writing 1 clears the TOF flag in the QUADSPI_SR register

    static constexpr uint32_t DLR_RESET_VALUE = 0x0;

    static constexpr uint32_t CCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCR_INSTRUCTION =      // Instruction Instruction to be send to the external SPI device. This field can be written only when BUSY = 0.
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR_IMODE =            // Instruction mode This field defines the instruction phase mode of operation: This field can be written only when BUSY = 0.
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR_ADMODE =           // Address mode This field defines the address phase mode of operation: This field can be written only when BUSY = 0.
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR_ADSIZE =           // Address size This bit defines address size: This field can be written only when BUSY = 0.
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR_ABMODE =           // Alternate bytes mode This field defines the alternate-bytes phase mode of operation: This field can be written only when BUSY = 0.
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR_ABSIZE =           // Alternate bytes size This bit defines alternate bytes size: This field can be written only when BUSY = 0.
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR_DCYC =             // Number of dummy cycles This field defines the duration of the dummy phase. In both SDR and DDR modes, it specifies a number of CLK cycles (0-31). This field can be written only when BUSY = 0.
        bit_field_t<18, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR_DMODE =            // Data mode This field defines the data phases mode of operation: This field also determines the dummy phase mode of operation. This field can be written only when BUSY = 0.
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR_FMODE =            // Functional mode This field defines the QUADSPI functional mode of operation. If DMAEN = 1 already, then the DMA controller for the corresponding channel must be disabled before changing the FMODE value. This field can be written only when BUSY = 0.
        bit_field_t<26, 0x3>::value<X>();
    static constexpr uint32_t CCR_SIOO = 0x10000000; // Send instruction only once mode See Section15.3.11: Sending the instruction only once on page13. This bit has no effect when IMODE = 00. This field can be written only when BUSY = 0.
    static constexpr uint32_t CCR_DHHC = 0x40000000; // DDR hold Delay the data output by 1/4 of the QUADSPI output clock cycle in DDR mode: This feature is only active in DDR mode. This field can be written only when BUSY = 0.
    static constexpr uint32_t CCR_DDRM = 0x80000000; // Double data rate mode This bit sets the DDR mode for the address, alternate byte and data phase: This field can be written only when BUSY = 0.

    static constexpr uint32_t AR_RESET_VALUE = 0x0;

    static constexpr uint32_t ABR_RESET_VALUE = 0x0;

    static constexpr uint32_t DR_RESET_VALUE = 0x0;

    static constexpr uint32_t PSMKR_RESET_VALUE = 0x0;

    static constexpr uint32_t PSMAR_RESET_VALUE = 0x0;

    static constexpr uint32_t PIR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t PIR_INTERVAL =   // Polling interval Number of CLK cycles between to read during automatic polling phases. This field can be written only when BUSY = 0.
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t LPTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LPTR_TIMEOUT =   // Timeout period After each access in memory-mapped mode, the QUADSPI prefetches the subsequent bytes and holds these bytes in the FIFO. This field indicates how many CLK cycles the QUADSPI waits after the FIFO becomes full until it raises nCS, putting the Flash memory in a lower-consumption state. This field can be written only when BUSY = 0.
        bit_field_t<0, 0xffff>::value<X>();
};


////
//
//      QUADSPI
//
////

struct stm32h750x_quadspi_t
{
    volatile uint32_t QUADSPI_CR;    // [read-write] QUADSPI control register
    volatile uint32_t QUADSPI_DCR;   // [read-write] QUADSPI device configuration register
    volatile uint32_t QUADSPI_SR;    // [read-only] QUADSPI status register
    volatile uint32_t QUADSPI_FCR;   // [read-write] QUADSPI flag clear register
    volatile uint32_t QUADSPI_DLR;   // [read-write] QUADSPI data length register
    volatile uint32_t QUADSPI_CCR;   // [read-write] QUADSPI communication configuration register
    volatile uint32_t QUADSPI_AR;    // [read-write] QUADSPI address register
    volatile uint32_t QUADSPI_ABR;   // [read-write] QUADSPI alternate bytes registers
    volatile uint32_t QUADSPI_DR;    // [read-write] QUADSPI data register
    volatile uint32_t QUADSPI_PSMKR; // [read-write] QUADSPI polling status mask register
    volatile uint32_t QUADSPI_PSMAR; // [read-write] QUADSPI polling status match register
    volatile uint32_t QUADSPI_PIR;   // [read-write] QUADSPI polling interval register
    volatile uint32_t QUADSPI_LPTR;  // [read-write] QUADSPI low-power timeout register

    static constexpr uint32_t QUADSPI_CR_RESET_VALUE = 0x0;
    static constexpr uint32_t QUADSPI_CR_EN = 0x1;        // Enable Enable the QUADSPI.
    static constexpr uint32_t QUADSPI_CR_ABORT = 0x2;     // Abort request This bit aborts the on-going command sequence. It is automatically reset once the abort is complete. This bit stops the current transfer. In polling mode or memory-mapped mode, this bit also reset the APM bit or the DM bit.
    static constexpr uint32_t QUADSPI_CR_DMAEN = 0x4;     // DMA enable In indirect mode, DMA can be used to input or output data via the QUADSPI_DR register. DMA transfers are initiated when the FIFO threshold flag, FTF, is set.
    static constexpr uint32_t QUADSPI_CR_TCEN = 0x8;      // Timeout counter enable This bit is valid only when memory-mapped mode (FMODE = 11) is selected. Activating this bit causes the chip select (nCS) to be released (and thus reduces consumption) if there has not been an access after a certain amount of time, where this time is defined by TIMEOUT[15:0] (QUADSPI_LPTR). Enable the timeout counter. By default, the QUADSPI never stops its prefetch operation, keeping the previous read operation active with nCS maintained low, even if no access to the Flash memory occurs for a long time. Since Flash memories tend to consume more when nCS is held low, the application might want to activate the timeout counter (TCEN = 1, QUADSPI_CR[3]) so that nCS is released after a period of TIMEOUT[15:0] (QUADSPI_LPTR) cycles have elapsed without an access since when the FIFO becomes full with prefetch data. This bit can be modified only when BUSY = 0.
    static constexpr uint32_t QUADSPI_CR_SSHIFT = 0x10;   // Sample shift By default, the QUADSPI samples data 1/2 of a CLK cycle after the data is driven by the Flash memory. This bit allows the data is to be sampled later in order to account for external signal delays. Firmware must assure that SSHIFT = 0 when in DDR mode (when DDRM = 1). This field can be modified only when BUSY = 0.
    static constexpr uint32_t QUADSPI_CR_DFM = 0x40;      // Dual-flash mode This bit activates dual-flash mode, where two external Flash memories are used simultaneously to double throughput and capacity. This bit can be modified only when BUSY = 0.
    static constexpr uint32_t QUADSPI_CR_FSEL = 0x80;     // Flash memory selection This bit selects the Flash memory to be addressed in single flash mode (when DFM = 0). This bit can be modified only when BUSY = 0. This bit is ignored when DFM = 1.
    template<uint32_t X>
    static constexpr uint32_t QUADSPI_CR_FTHRES =         // FIFO threshold level Defines, in indirect mode, the threshold number of bytes in the FIFO that will cause the FIFO threshold flag (FTF, QUADSPI_SR[2]) to be set. In indirect write mode (FMODE = 00): ... In indirect read mode (FMODE = 01): ... If DMAEN = 1, then the DMA controller for the corresponding channel must be disabled before changing the FTHRES value.
        bit_field_t<8, 0x1f>::value<X>();
    static constexpr uint32_t QUADSPI_CR_TEIE = 0x10000;  // Transfer error interrupt enable This bit enables the transfer error interrupt.
    static constexpr uint32_t QUADSPI_CR_TCIE = 0x20000;  // Transfer complete interrupt enable This bit enables the transfer complete interrupt.
    static constexpr uint32_t QUADSPI_CR_FTIE = 0x40000;  // FIFO threshold interrupt enable This bit enables the FIFO threshold interrupt.
    static constexpr uint32_t QUADSPI_CR_SMIE = 0x80000;  // Status match interrupt enable This bit enables the status match interrupt.
    static constexpr uint32_t QUADSPI_CR_TOIE = 0x100000; // TimeOut interrupt enable This bit enables the TimeOut interrupt.
    static constexpr uint32_t QUADSPI_CR_APMS = 0x400000; // Automatic poll mode stop This bit determines if automatic polling is stopped after a match. This bit can be modified only when BUSY = 0.
    static constexpr uint32_t QUADSPI_CR_PMM = 0x800000;  // Polling match mode This bit indicates which method should be used for determining a match during automatic polling mode. This bit can be modified only when BUSY = 0.
    template<uint32_t X>
    static constexpr uint32_t QUADSPI_CR_PRESCALER =      // clock prescaler
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t QUADSPI_DCR_RESET_VALUE = 0x0;
    static constexpr uint32_t QUADSPI_DCR_CKMODE = 0x1; // indicates the level that clk takes between command
    template<uint32_t X>
    static constexpr uint32_t QUADSPI_DCR_CSHT =        // Chip select high time CSHT+1 defines the minimum number of CLK cycles which the chip select (nCS) must remain high between commands issued to the Flash memory. ... This field can be modified only when BUSY = 0.
        bit_field_t<8, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t QUADSPI_DCR_FSIZE =       // Flash memory size This field defines the size of external memory using the following formula: Number of bytes in Flash memory = 2[FSIZE+1] FSIZE+1 is effectively the number of address bits required to address the Flash memory. The Flash memory capacity can be up to 4GB (addressed using 32 bits) in indirect mode, but the addressable space in memory-mapped mode is limited to 256MB. If DFM = 1, FSIZE indicates the total capacity of the two Flash memories together. This field can be modified only when BUSY = 0.
        bit_field_t<16, 0x1f>::value<X>();

    static constexpr uint32_t QUADSPI_SR_RESET_VALUE = 0x0;
    static constexpr uint32_t QUADSPI_SR_TEF = 0x1;   // Transfer error flag This bit is set in indirect mode when an invalid address is being accessed in indirect mode. It is cleared by writing 1 to CTEF.
    static constexpr uint32_t QUADSPI_SR_TCF = 0x2;   // Transfer complete flag This bit is set in indirect mode when the programmed number of data has been transferred or in any mode when the transfer has been aborted.It is cleared by writing 1 to CTCF.
    static constexpr uint32_t QUADSPI_SR_FTF = 0x4;   // FIFO threshold flag In indirect mode, this bit is set when the FIFO threshold has been reached, or if there is any data left in the FIFO after reads from the Flash memory are complete. It is cleared automatically as soon as threshold condition is no longer true. In automatic polling mode this bit is set every time the status register is read, and the bit is cleared when the data register is read.
    static constexpr uint32_t QUADSPI_SR_SMF = 0x8;   // Status match flag This bit is set in automatic polling mode when the unmasked received data matches the corresponding bits in the match register (QUADSPI_PSMAR). It is cleared by writing 1 to CSMF.
    static constexpr uint32_t QUADSPI_SR_TOF = 0x10;  // Timeout flag This bit is set when timeout occurs. It is cleared by writing 1 to CTOF.
    static constexpr uint32_t QUADSPI_SR_BUSY = 0x20; // Busy This bit is set when an operation is on going. This bit clears automatically when the operation with the Flash memory is finished and the FIFO is empty.
    template<uint32_t X>
    static constexpr uint32_t QUADSPI_SR_FLEVEL =     // FIFO level This field gives the number of valid bytes which are being held in the FIFO. FLEVEL = 0 when the FIFO is empty, and 16 when it is full. In memory-mapped mode and in automatic status polling mode, FLEVEL is zero.
        bit_field_t<8, 0x3f>::value<X>();

    static constexpr uint32_t QUADSPI_FCR_RESET_VALUE = 0x0;
    static constexpr uint32_t QUADSPI_FCR_CTEF = 0x1;  // Clear transfer error flag Writing 1 clears the TEF flag in the QUADSPI_SR register
    static constexpr uint32_t QUADSPI_FCR_CTCF = 0x2;  // Clear transfer complete flag Writing 1 clears the TCF flag in the QUADSPI_SR register
    static constexpr uint32_t QUADSPI_FCR_CSMF = 0x8;  // Clear status match flag Writing 1 clears the SMF flag in the QUADSPI_SR register
    static constexpr uint32_t QUADSPI_FCR_CTOF = 0x10; // Clear timeout flag Writing 1 clears the TOF flag in the QUADSPI_SR register

    static constexpr uint32_t QUADSPI_DLR_RESET_VALUE = 0x0;

    static constexpr uint32_t QUADSPI_CCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t QUADSPI_CCR_INSTRUCTION =      // Instruction Instruction to be send to the external SPI device. This field can be written only when BUSY = 0.
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t QUADSPI_CCR_IMODE =            // Instruction mode This field defines the instruction phase mode of operation: This field can be written only when BUSY = 0.
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t QUADSPI_CCR_ADMODE =           // Address mode This field defines the address phase mode of operation: This field can be written only when BUSY = 0.
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t QUADSPI_CCR_ADSIZE =           // Address size This bit defines address size: This field can be written only when BUSY = 0.
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t QUADSPI_CCR_ABMODE =           // Alternate bytes mode This field defines the alternate-bytes phase mode of operation: This field can be written only when BUSY = 0.
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t QUADSPI_CCR_ABSIZE =           // Alternate bytes size This bit defines alternate bytes size: This field can be written only when BUSY = 0.
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t QUADSPI_CCR_DCYC =             // Number of dummy cycles This field defines the duration of the dummy phase. In both SDR and DDR modes, it specifies a number of CLK cycles (0-31). This field can be written only when BUSY = 0.
        bit_field_t<18, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t QUADSPI_CCR_DMODE =            // Data mode This field defines the data phases mode of operation: This field also determines the dummy phase mode of operation. This field can be written only when BUSY = 0.
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t QUADSPI_CCR_FMODE =            // Functional mode This field defines the QUADSPI functional mode of operation. If DMAEN = 1 already, then the DMA controller for the corresponding channel must be disabled before changing the FMODE value. This field can be written only when BUSY = 0.
        bit_field_t<26, 0x3>::value<X>();
    static constexpr uint32_t QUADSPI_CCR_SIOO = 0x10000000; // Send instruction only once mode See Section15.3.11: Sending the instruction only once on page13. This bit has no effect when IMODE = 00. This field can be written only when BUSY = 0.
    static constexpr uint32_t QUADSPI_CCR_DHHC = 0x40000000; // DDR hold Delay the data output by 1/4 of the QUADSPI output clock cycle in DDR mode: This feature is only active in DDR mode. This field can be written only when BUSY = 0.
    static constexpr uint32_t QUADSPI_CCR_DDRM = 0x80000000; // Double data rate mode This bit sets the DDR mode for the address, alternate byte and data phase: This field can be written only when BUSY = 0.

    static constexpr uint32_t QUADSPI_AR_RESET_VALUE = 0x0;

    static constexpr uint32_t QUADSPI_ABR_RESET_VALUE = 0x0;

    static constexpr uint32_t QUADSPI_DR_RESET_VALUE = 0x0;

    static constexpr uint32_t QUADSPI_PSMKR_RESET_VALUE = 0x0;

    static constexpr uint32_t QUADSPI_PSMAR_RESET_VALUE = 0x0;

    static constexpr uint32_t QUADSPI_PIR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t QUADSPI_PIR_INTERVAL =   // Polling interval Number of CLK cycles between to read during automatic polling phases. This field can be written only when BUSY = 0.
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t QUADSPI_LPTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t QUADSPI_LPTR_TIMEOUT =   // Timeout period After each access in memory-mapped mode, the QUADSPI prefetches the subsequent bytes and holds these bytes in the FIFO. This field indicates how many CLK cycles the QUADSPI waits after the FIFO becomes full until it raises nCS, putting the Flash memory in a lower-consumption state. This field can be written only when BUSY = 0.
        bit_field_t<0, 0xffff>::value<X>();
};


template<>
struct peripheral_t<STM32H742x, QUADSPI>
{
    typedef stm32h742x_quadspi_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, QUADSPI>
{
    typedef stm32h742x_quadspi_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, QUADSPI>
{
    typedef stm32h742x_quadspi_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, QUADSPI>
{
    typedef stm32h742x_quadspi_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, QUADSPI>
{
    typedef stm32h742x_quadspi_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, QUADSPI>
{
    typedef stm32h742x_quadspi_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, QUADSPI>
{
    typedef stm32h742x_quadspi_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, QUADSPI>
{
    typedef stm32h742x_quadspi_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, QUADSPI>
{
    typedef stm32h742x_quadspi_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, QUADSPI>
{
    typedef stm32h742x_quadspi_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, QUADSPI>
{
    typedef stm32h742x_quadspi_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, QUADSPI>
{
    typedef stm32h750x_quadspi_t T;
    static T& V;
};

using quadspi_t = peripheral_t<mcu_svd, QUADSPI>;

