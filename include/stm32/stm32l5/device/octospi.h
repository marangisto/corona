#pragma once

////
//
//      STM32L5 OCTOSPI peripherals
//
///

// OCTOSPI1: OctoSPI

struct stm32l552_octospi1_t
{
    volatile uint32_t CR; // control register
    reserved_t<0x1> _0x4;
    volatile uint32_t DCR1; // device configuration register
    volatile uint32_t DCR2; // device configuration register 2
    volatile uint32_t DCR3; // device configuration register 3
    volatile uint32_t DCR4; // DCR4
    reserved_t<0x2> _0x18;
    volatile uint32_t SR; // status register
    volatile uint32_t FCR; // flag clear register
    reserved_t<0x6> _0x28;
    volatile uint32_t DLR; // data length register
    reserved_t<0x1> _0x44;
    volatile uint32_t AR; // address register
    reserved_t<0x1> _0x4c;
    volatile uint32_t DR; // data register
    reserved_t<0xb> _0x54;
    volatile uint32_t PSMKR; // polling status mask register
    reserved_t<0x1> _0x84;
    volatile uint32_t PSMAR; // polling status match register
    reserved_t<0x1> _0x8c;
    volatile uint32_t PIR; // polling interval register
    reserved_t<0x1b> _0x94;
    volatile uint32_t CCR; // communication configuration register
    reserved_t<0x1> _0x104;
    volatile uint32_t TCR; // timing configuration register
    reserved_t<0x1> _0x10c;
    volatile uint32_t IR; // instruction register
    reserved_t<0x3> _0x114;
    volatile uint32_t ABR; // alternate bytes register
    reserved_t<0x3> _0x124;
    volatile uint32_t LPTR; // low-power timeout register
    reserved_t<0x3> _0x134;
    volatile uint32_t WPCCR; // write communication configuration register
    reserved_t<0x1> _0x144;
    volatile uint32_t WPTCR; // write timing configuration register
    reserved_t<0x1> _0x14c;
    volatile uint32_t WPIR; // write instruction register
    reserved_t<0x3> _0x154;
    volatile uint32_t WPABR; // write alternate bytes register
    reserved_t<0x7> _0x164;
    volatile uint32_t WCCR; // WCCR
    reserved_t<0x1> _0x184;
    volatile uint32_t WTCR; // WTCR
    reserved_t<0x1> _0x18c;
    volatile uint32_t WIR; // WIR
    reserved_t<0x3> _0x194;
    volatile uint32_t WABR; // WABR
    reserved_t<0x17> _0x1a4;
    volatile uint32_t HLCR; // HyperBusTM latency configuration register

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<28, 0x3> CR_FMODE; // Functional mode
    static constexpr uint32_t CR_PMM = 0x800000; // Polling match mode
    static constexpr uint32_t CR_APMS = 0x400000; // Automatic poll mode stop
    static constexpr uint32_t CR_TOIE = 0x100000; // TimeOut interrupt enable
    static constexpr uint32_t CR_SMIE = 0x80000; // Status match interrupt enable
    static constexpr uint32_t CR_FTIE = 0x40000; // FIFO threshold interrupt enable
    static constexpr uint32_t CR_TCIE = 0x20000; // Transfer complete interrupt enable
    static constexpr uint32_t CR_TEIE = 0x10000; // Transfer error interrupt enable
    typedef bit_field_t<8, 0x1f> CR_FTHRES; // IFO threshold level
    static constexpr uint32_t CR_FSEL = 0x80; // FLASH memory selection
    static constexpr uint32_t CR_DQM = 0x40; // Dual-quad mode
    static constexpr uint32_t CR_TCEN = 0x8; // Timeout counter enable
    static constexpr uint32_t CR_DMAEN = 0x4; // DMA enable
    static constexpr uint32_t CR_ABORT = 0x2; // Abort request
    static constexpr uint32_t CR_EN = 0x1; // Enable


    static constexpr uint32_t DCR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DCR1_CKMODE = 0x1; // Mode 0 / mode 3
    static constexpr uint32_t DCR1_FRCK = 0x2; // Free running clock
    typedef bit_field_t<8, 0x7> DCR1_CSHT; // Chip-select high time
    typedef bit_field_t<16, 0x1f> DCR1_DEVSIZE; // Device size
    typedef bit_field_t<24, 0x3> DCR1_MTYP; // Memory type

    static constexpr uint32_t DCR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DCR2_PRESCALER; // Clock prescaler
    typedef bit_field_t<16, 0x7> DCR2_WRAPSIZE; // Wrap size

    static constexpr uint32_t DCR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0x1f> DCR3_CSBOUND; // CS boundary

    static constexpr uint32_t DCR4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DCR4_TEF = 0x1; // Transfer error flag
    static constexpr uint32_t DCR4_TCF = 0x2; // Transfer complete flag
    static constexpr uint32_t DCR4_FTF = 0x4; // FIFO threshold flag
    static constexpr uint32_t DCR4_SMF = 0x8; // Status match flag
    static constexpr uint32_t DCR4_TOF = 0x10; // Timeout flag
    static constexpr uint32_t DCR4_BUSY = 0x20; // BUSY
    typedef bit_field_t<8, 0x3f> DCR4_FLEVEL; // FIFO level


    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_CTEF = 0x1; // Clear transfer error flag
    static constexpr uint32_t SR_CTCF = 0x2; // Clear transfer complete flag
    static constexpr uint32_t SR_CSMF = 0x8; // Clear status match flag
    static constexpr uint32_t SR_CTOF = 0x10; // Clear timeout flag

    static constexpr uint32_t FCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> FCR_DL; // Data length


    static constexpr uint32_t DLR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DLR_ADDRESS; // ADDRESS


    static constexpr uint32_t AR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> AR_DATA; // Data


    static constexpr uint32_t DR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DR_MASK; // Status mask


    static constexpr uint32_t PSMKR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> PSMKR_MATCH; // Status match


    static constexpr uint32_t PSMAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> PSMAR_INTERVAL; // Polling interval


    static constexpr uint32_t PIR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> PIR_IMODE; // Instruction mode
    static constexpr uint32_t PIR_IDTR = 0x8; // Instruction double transfer rate
    typedef bit_field_t<4, 0x3> PIR_ISIZE; // Instruction size
    typedef bit_field_t<8, 0x7> PIR_ADMODE; // Address mode
    static constexpr uint32_t PIR_ADDTR = 0x800; // Address double transfer rate
    typedef bit_field_t<12, 0x3> PIR_ADSIZE; // Address size
    typedef bit_field_t<16, 0x7> PIR_ABMODE; // Alternate byte mode
    static constexpr uint32_t PIR_ABDTR = 0x80000; // Alternate bytes double transfer rate
    typedef bit_field_t<20, 0x3> PIR_ABSIZE; // Alternate bytes size
    typedef bit_field_t<24, 0x7> PIR_DMODE; // Data mode
    static constexpr uint32_t PIR_DDTR = 0x8000000; // Alternate bytes double transfer rate
    static constexpr uint32_t PIR_DQSE = 0x20000000; // DQS enable
    static constexpr uint32_t PIR_SIOO = 0x80000000; // Send instruction only once mode


    static constexpr uint32_t CCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> CCR_DCYC; // Number of dummy cycles
    static constexpr uint32_t CCR_DHQC = 0x10000000; // Delay hold quarter cycle
    static constexpr uint32_t CCR_SSHIFT = 0x40000000; // Sample shift


    static constexpr uint32_t TCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> TCR_INSTRUCTION; // INSTRUCTION


    static constexpr uint32_t IR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> IR_ALTERNATE; // Alternate bytes


    static constexpr uint32_t ABR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> ABR_TIMEOUT; // Timeout period


    static constexpr uint32_t LPTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> LPTR_IMODE; // Instruction mode
    static constexpr uint32_t LPTR_IDTR = 0x8; // Instruction double transfer rate
    typedef bit_field_t<4, 0x3> LPTR_ISIZE; // Instruction size
    typedef bit_field_t<8, 0x7> LPTR_ADMODE; // Address mode
    static constexpr uint32_t LPTR_ADDTR = 0x800; // Address double transfer rate
    typedef bit_field_t<12, 0x3> LPTR_ADSIZE; // Address size
    typedef bit_field_t<16, 0x7> LPTR_ABMODE; // Alternate byte mode
    static constexpr uint32_t LPTR_ABDTR = 0x80000; // Alternate bytes double transfer rate
    typedef bit_field_t<20, 0x3> LPTR_ABSIZE; // Alternate bytes size
    typedef bit_field_t<24, 0x7> LPTR_DMODE; // Data mode
    static constexpr uint32_t LPTR_DDTR = 0x8000000; // alternate bytes double transfer rate
    static constexpr uint32_t LPTR_DQSE = 0x20000000; // DQS enable


    static constexpr uint32_t WPCCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> WPCCR_DCYC; // Number of dummy cycles
    static constexpr uint32_t WPCCR_DHQC = 0x10000000; // Delay hold quarter cycle
    static constexpr uint32_t WPCCR_SSHIFT = 0x40000000; // Sample shift


    static constexpr uint32_t WPTCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> WPTCR_INSTRUCTION; // INSTRUCTION


    static constexpr uint32_t WPIR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> WPIR_ALTERNATE; // Alternate bytes


    static constexpr uint32_t WPABR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t WPABR_LM = 0x1; // Latency mode
    static constexpr uint32_t WPABR_WZL = 0x2; // Write zero latency
    typedef bit_field_t<8, 0xff> WPABR_TACC; // Access time
    typedef bit_field_t<16, 0xff> WPABR_TRWR; // Read write recovery time


    static constexpr uint32_t WCCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> WCCR_REFRESH; // REFRESH


    static constexpr uint32_t WTCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> WTCR_IMODE; // IMODE
    static constexpr uint32_t WTCR_IDTR = 0x8; // IDTR
    typedef bit_field_t<4, 0x3> WTCR_ISIZE; // ISIZE
    typedef bit_field_t<8, 0x7> WTCR_ADMODE; // ADMODE
    static constexpr uint32_t WTCR_ADDTR = 0x800; // ADDTR
    typedef bit_field_t<12, 0x3> WTCR_ADSIZE; // ADSIZE
    typedef bit_field_t<16, 0x7> WTCR_ABMODE; // ABMODE
    static constexpr uint32_t WTCR_ABDTR = 0x80000; // ABDTR
    typedef bit_field_t<20, 0x3> WTCR_ABSIZE; // ABSIZE
    typedef bit_field_t<24, 0x7> WTCR_DMODE; // DMODE
    static constexpr uint32_t WTCR_DDTR = 0x8000000; // DDTR
    static constexpr uint32_t WTCR_DQSE = 0x20000000; // DQSE


    static constexpr uint32_t WIR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> WIR_DCYC; // DCYC


    static constexpr uint32_t WABR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> WABR_INSTRUCTION; // INSTRUCTION


    static constexpr uint32_t HLCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> HLCR_ALTERNATE; // Alternate bytes
};

template<>
struct peripheral_t<STM32L552, OCTOSPI1>
{
    using T = stm32l552_octospi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L552, SEC_OCTOSPI1>
{
    using T = stm32l552_octospi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, OCTOSPI1>
{
    using T = stm32l552_octospi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, SEC_OCTOSPI1>
{
    using T = stm32l552_octospi1_t;
    static T& V;
};

using octospi1_t = peripheral_t<svd, OCTOSPI1>;
using sec_octospi1_t = peripheral_t<svd, SEC_OCTOSPI1>;

template<int INST> struct octospi_traits {};

template<> struct octospi_traits<1>
{
    using octospi = octospi1_t;
    static constexpr signal_t CLK = OCTOSPI1_CLK;
    static constexpr signal_t DQS = OCTOSPI1_DQS;
    static constexpr signal_t IO0 = OCTOSPI1_IO0;
    static constexpr signal_t IO1 = OCTOSPI1_IO1;
    static constexpr signal_t IO2 = OCTOSPI1_IO2;
    static constexpr signal_t IO3 = OCTOSPI1_IO3;
    static constexpr signal_t IO4 = OCTOSPI1_IO4;
    static constexpr signal_t IO5 = OCTOSPI1_IO5;
    static constexpr signal_t IO6 = OCTOSPI1_IO6;
    static constexpr signal_t IO7 = OCTOSPI1_IO7;
    static constexpr signal_t NCLK = OCTOSPI1_NCLK;
    static constexpr signal_t NCS = OCTOSPI1_NCS;
};
