#pragma once

////
//
//      STM32F4 QUADSPI peripherals
//
///

// QUADSPI: QuadSPI interface

struct stm32f412_quadspi_t
{
    volatile uint32_t CR; // control register
    volatile uint32_t DCR; // device configuration register
    volatile uint32_t SR; // status register
    volatile uint32_t FCR; // flag clear register
    volatile uint32_t DLR; // data length register
    volatile uint32_t CCR; // communication configuration register
    volatile uint32_t AR; // address register
    volatile uint32_t ABR; // ABR
    volatile uint32_t DR; // data register
    volatile uint32_t PSMKR; // polling status mask register
    volatile uint32_t PSMAR; // polling status match register
    volatile uint32_t PIR; // polling interval register
    volatile uint32_t LPTR; // low-power timeout register

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xff> CR_PRESCALER; // Clock prescaler
    static constexpr uint32_t CR_PMM = 0x800000; // Polling match mode
    static constexpr uint32_t CR_APMS = 0x400000; // Automatic poll mode stop
    static constexpr uint32_t CR_TOIE = 0x100000; // TimeOut interrupt enable
    static constexpr uint32_t CR_SMIE = 0x80000; // Status match interrupt enable
    static constexpr uint32_t CR_FTIE = 0x40000; // FIFO threshold interrupt enable
    static constexpr uint32_t CR_TCIE = 0x20000; // Transfer complete interrupt enable
    static constexpr uint32_t CR_TEIE = 0x10000; // Transfer error interrupt enable
    typedef bit_field_t<8, 0x1f> CR_FTHRES; // IFO threshold level
    static constexpr uint32_t CR_FSEL = 0x80; // FLASH memory selection
    static constexpr uint32_t CR_DFM = 0x40; // Dual-flash mode
    static constexpr uint32_t CR_SSHIFT = 0x10; // Sample shift
    static constexpr uint32_t CR_TCEN = 0x8; // Timeout counter enable
    static constexpr uint32_t CR_DMAEN = 0x4; // DMA enable
    static constexpr uint32_t CR_ABORT = 0x2; // Abort request
    static constexpr uint32_t CR_EN = 0x1; // Enable

    static constexpr uint32_t DCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0x1f> DCR_FSIZE; // FLASH memory size
    typedef bit_field_t<8, 0x7> DCR_CSHT; // Chip select high time
    static constexpr uint32_t DCR_CKMODE = 0x1; // Mode 0 / mode 3

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0x7f> SR_FLEVEL; // FIFO level
    static constexpr uint32_t SR_BUSY = 0x20; // Busy
    static constexpr uint32_t SR_TOF = 0x10; // Timeout flag
    static constexpr uint32_t SR_SMF = 0x8; // Status match flag
    static constexpr uint32_t SR_FTF = 0x4; // FIFO threshold flag
    static constexpr uint32_t SR_TCF = 0x2; // Transfer complete flag
    static constexpr uint32_t SR_TEF = 0x1; // Transfer error flag

    static constexpr uint32_t FCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FCR_CTOF = 0x10; // Clear timeout flag
    static constexpr uint32_t FCR_CSMF = 0x8; // Clear status match flag
    static constexpr uint32_t FCR_CTCF = 0x2; // Clear transfer complete flag
    static constexpr uint32_t FCR_CTEF = 0x1; // Clear transfer error flag

    static constexpr uint32_t DLR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DLR_DL; // Data length

    static constexpr uint32_t CCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CCR_DDRM = 0x80000000; // Double data rate mode
    static constexpr uint32_t CCR_DHHC = 0x40000000; // DDR hold half cycle
    static constexpr uint32_t CCR_SIOO = 0x10000000; // Send instruction only once mode
    typedef bit_field_t<26, 0x3> CCR_FMODE; // Functional mode
    typedef bit_field_t<24, 0x3> CCR_DMODE; // Data mode
    typedef bit_field_t<18, 0x1f> CCR_DCYC; // Number of dummy cycles
    typedef bit_field_t<16, 0x3> CCR_ABSIZE; // Alternate bytes size
    typedef bit_field_t<14, 0x3> CCR_ABMODE; // Alternate bytes mode
    typedef bit_field_t<12, 0x3> CCR_ADSIZE; // Address size
    typedef bit_field_t<10, 0x3> CCR_ADMODE; // Address mode
    typedef bit_field_t<8, 0x3> CCR_IMODE; // Instruction mode
    typedef bit_field_t<0, 0xff> CCR_INSTRUCTION; // Instruction

    static constexpr uint32_t AR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> AR_ADDRESS; // Address

    static constexpr uint32_t ABR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ABR_ALTERNATE; // ALTERNATE

    static constexpr uint32_t DR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DR_DATA; // Data

    static constexpr uint32_t PSMKR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> PSMKR_MASK; // Status mask

    static constexpr uint32_t PSMAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> PSMAR_MATCH; // Status match

    static constexpr uint32_t PIR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> PIR_INTERVAL; // Polling interval

    static constexpr uint32_t LPTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> LPTR_TIMEOUT; // Timeout period
};

template<>
struct peripheral_t<STM32F412, QUADSPI1>
{
    using T = stm32f412_quadspi_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, QUADSPI1>
{
    using T = stm32f412_quadspi_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, QUADSPI1>
{
    using T = stm32f412_quadspi_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, QUADSPI1>
{
    using T = stm32f412_quadspi_t;
    static T& V;
};

using quadspi1_t = peripheral_t<svd, QUADSPI1>;

template<int INST> struct quadspi_traits {};
