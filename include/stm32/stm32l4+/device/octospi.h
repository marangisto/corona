#pragma once

////
//
//      STM32L4+ OCTOSPI peripherals
//
///

// OCTOSPI1: OctoSPI

struct stm32l4p5_octospi1_t
{
    volatile uint32_t CR; // control register
    reserved_t<0x1> _0x4;
    volatile uint32_t DCR1; // device configuration register
    volatile uint32_t DCR2; // device configuration register 2
    volatile uint32_t DCR3; // device configuration register 3
    reserved_t<0x3> _0x14;
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
    reserved_t<0x13> _0x134;
    volatile uint32_t WCCR; // write communication configuration register
    reserved_t<0x1> _0x184;
    volatile uint32_t WTCR; // write timing configuration register
    reserved_t<0x1> _0x18c;
    volatile uint32_t WIR; // write instruction register
    reserved_t<0x3> _0x194;
    volatile uint32_t WABR; // write alternate bytes register
    reserved_t<0x17> _0x1a4;
    volatile uint32_t HLCR; // HyperBusTM latency configuration register
    reserved_t<0x7b> _0x204;
    volatile uint32_t HWCFGR; // HW configuration register
    volatile uint32_t VER; // version register
    volatile uint32_t ID; // identification
    volatile uint32_t MID; // magic ID

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


    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_TEF = 0x1; // Transfer error flag
    static constexpr uint32_t SR_TCF = 0x2; // Transfer complete flag
    static constexpr uint32_t SR_FTF = 0x4; // FIFO threshold flag
    static constexpr uint32_t SR_SMF = 0x8; // Status match flag
    static constexpr uint32_t SR_TOF = 0x10; // Timeout flag
    static constexpr uint32_t SR_BUSY = 0x20; // BUSY
    typedef bit_field_t<8, 0x3f> SR_FLEVEL; // FIFO level

    static constexpr uint32_t FCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FCR_CTEF = 0x1; // Clear transfer error flag
    static constexpr uint32_t FCR_CTCF = 0x2; // Clear transfer complete flag
    static constexpr uint32_t FCR_CSMF = 0x8; // Clear status match flag
    static constexpr uint32_t FCR_CTOF = 0x10; // Clear timeout flag


    static constexpr uint32_t DLR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DLR_DL; // Data length


    static constexpr uint32_t AR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> AR_ADDRESS; // ADDRESS


    static constexpr uint32_t DR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DR_DATA; // Data


    static constexpr uint32_t PSMKR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> PSMKR_MASK; // Status mask


    static constexpr uint32_t PSMAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> PSMAR_MATCH; // Status match


    static constexpr uint32_t PIR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> PIR_INTERVAL; // Polling interval


    static constexpr uint32_t CCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> CCR_IMODE; // Instruction mode
    static constexpr uint32_t CCR_IDTR = 0x8; // Instruction double transfer rate
    typedef bit_field_t<4, 0x3> CCR_ISIZE; // Instruction size
    typedef bit_field_t<8, 0x7> CCR_ADMODE; // Address mode
    static constexpr uint32_t CCR_ADDTR = 0x800; // Address double transfer rate
    typedef bit_field_t<12, 0x3> CCR_ADSIZE; // Address size
    typedef bit_field_t<16, 0x7> CCR_ABMODE; // Alternate byte mode
    static constexpr uint32_t CCR_ABDTR = 0x80000; // Alternate bytes double transfer rate
    typedef bit_field_t<20, 0x3> CCR_ABSIZE; // Alternate bytes size
    typedef bit_field_t<24, 0x7> CCR_DMODE; // Data mode
    static constexpr uint32_t CCR_DDTR = 0x8000000; // Alternate bytes double transfer rate
    static constexpr uint32_t CCR_DQSE = 0x20000000; // DQS enable
    static constexpr uint32_t CCR_SIOO = 0x80000000; // Send instruction only once mode


    static constexpr uint32_t TCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> TCR_DCYC; // Number of dummy cycles
    static constexpr uint32_t TCR_DHQC = 0x10000000; // Delay hold quarter cycle
    static constexpr uint32_t TCR_SSHIFT = 0x40000000; // Sample shift


    static constexpr uint32_t IR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> IR_INSTRUCTION; // INSTRUCTION


    static constexpr uint32_t ABR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ABR_ALTERNATE; // Alternate bytes


    static constexpr uint32_t LPTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> LPTR_TIMEOUT; // Timeout period


    static constexpr uint32_t WCCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> WCCR_IMODE; // Instruction mode
    static constexpr uint32_t WCCR_IDTR = 0x8; // Instruction double transfer rate
    typedef bit_field_t<4, 0x3> WCCR_ISIZE; // Instruction size
    typedef bit_field_t<8, 0x7> WCCR_ADMODE; // Address mode
    static constexpr uint32_t WCCR_ADDTR = 0x800; // Address double transfer rate
    typedef bit_field_t<12, 0x3> WCCR_ADSIZE; // Address size
    typedef bit_field_t<16, 0x7> WCCR_ABMODE; // Alternate byte mode
    static constexpr uint32_t WCCR_ABDTR = 0x80000; // Alternate bytes double transfer rate
    typedef bit_field_t<20, 0x3> WCCR_ABSIZE; // Alternate bytes size
    typedef bit_field_t<24, 0x7> WCCR_DMODE; // Data mode
    static constexpr uint32_t WCCR_DDTR = 0x8000000; // alternate bytes double transfer rate
    static constexpr uint32_t WCCR_DQSE = 0x20000000; // DQS enable
    static constexpr uint32_t WCCR_SIOO = 0x80000000; // Send instruction only once mode


    static constexpr uint32_t WTCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> WTCR_DCYC; // Number of dummy cycles


    static constexpr uint32_t WIR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> WIR_INSTRUCTION; // INSTRUCTION


    static constexpr uint32_t WABR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> WABR_ALTERNATE; // Alternate bytes


    static constexpr uint32_t HLCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t HLCR_LM = 0x1; // Latency mode
    static constexpr uint32_t HLCR_WZL = 0x2; // Write zero latency
    typedef bit_field_t<8, 0xff> HLCR_TACC; // Access time
    typedef bit_field_t<16, 0xff> HLCR_TRWR; // Read write recovery time


    static constexpr uint32_t HWCFGR_RESET_VALUE = 0x11300080; // Reset value
    typedef bit_field_t<0, 0xf> HWCFGR_AXI; // AXI interface
    typedef bit_field_t<4, 0xff> HWCFGR_FIFO; // FIFO depth
    typedef bit_field_t<12, 0xff> HWCFGR_PRES; // Prescaler
    typedef bit_field_t<20, 0xf> HWCFGR_IDL; // ID Length
    typedef bit_field_t<24, 0xf> HWCFGR_MMW; // Memory map write
    typedef bit_field_t<28, 0xf> HWCFGR_MST; // Master

    static constexpr uint32_t VER_RESET_VALUE = 0x10; // Reset value
    typedef bit_field_t<0, 0xff> VER_VER; // Version

    static constexpr uint32_t ID_RESET_VALUE = 0x140041; // Reset value
    typedef bit_field_t<0, 0xffffffff> ID_ID; // Identification

    static constexpr uint32_t MID_RESET_VALUE = 0xa3c5dd01; // Reset value
    typedef bit_field_t<0, 0xffffffff> MID_MID; // Magic ID
};

// OCTOSPI1: OctoSPI

struct stm32l4r5_octospi1_t
{
    volatile uint32_t CR; // control register
    reserved_t<0x1> _0x4;
    volatile uint32_t DCR1; // device configuration register
    volatile uint32_t DCR2; // device configuration register 2
    volatile uint32_t DCR3; // device configuration register 3
    volatile uint32_t DCR4; // device configuration register 4
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
    reserved_t<0x13> _0x134;
    volatile uint32_t WCCR; // write communication configuration register
    reserved_t<0x1> _0x184;
    volatile uint32_t WTCR; // write timing configuration register
    reserved_t<0x1> _0x18c;
    volatile uint32_t WIR; // write instruction register
    reserved_t<0x3> _0x194;
    volatile uint32_t WABR; // write alternate bytes register
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
    static constexpr uint32_t DCR1_DLYBYP = 0x8; // Delay block bypass
    typedef bit_field_t<8, 0x3f> DCR1_CSHT; // Chip-select high time
    typedef bit_field_t<16, 0x1f> DCR1_DEVSIZE; // Device size
    typedef bit_field_t<24, 0x7> DCR1_MTYP; // Memory type

    static constexpr uint32_t DCR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> DCR2_PRESCALER; // Clock prescaler

    static constexpr uint32_t DCR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0x1f> DCR3_CSBOUND; // CS boundary
    typedef bit_field_t<0, 0xff> DCR3_MAXTRAN; // Maximum transfer

    static constexpr uint32_t DCR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DCR4_REFRESH; // Refresh rate


    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_TEF = 0x1; // Transfer error flag
    static constexpr uint32_t SR_TCF = 0x2; // Transfer complete flag
    static constexpr uint32_t SR_FTF = 0x4; // FIFO threshold flag
    static constexpr uint32_t SR_SMF = 0x8; // Status match flag
    static constexpr uint32_t SR_TOF = 0x10; // Timeout flag
    static constexpr uint32_t SR_BUSY = 0x20; // BUSY
    typedef bit_field_t<8, 0x3f> SR_FLEVEL; // FIFO level

    static constexpr uint32_t FCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FCR_CTEF = 0x1; // Clear transfer error flag
    static constexpr uint32_t FCR_CTCF = 0x2; // Clear transfer complete flag
    static constexpr uint32_t FCR_CSMF = 0x8; // Clear status match flag
    static constexpr uint32_t FCR_CTOF = 0x10; // Clear timeout flag


    static constexpr uint32_t DLR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DLR_DL; // Data length


    static constexpr uint32_t AR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> AR_ADDRESS; // ADDRESS


    static constexpr uint32_t DR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DR_DATA; // Data


    static constexpr uint32_t PSMKR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> PSMKR_MASK; // Status mask


    static constexpr uint32_t PSMAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> PSMAR_MATCH; // Status match


    static constexpr uint32_t PIR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> PIR_INTERVAL; // Polling interval


    static constexpr uint32_t CCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> CCR_IMODE; // Instruction mode
    static constexpr uint32_t CCR_IDTR = 0x8; // Instruction double transfer rate
    typedef bit_field_t<4, 0x3> CCR_ISIZE; // Instruction size
    typedef bit_field_t<8, 0x7> CCR_ADMODE; // Address mode
    static constexpr uint32_t CCR_ADDTR = 0x800; // Address double transfer rate
    typedef bit_field_t<12, 0x3> CCR_ADSIZE; // Address size
    typedef bit_field_t<16, 0x7> CCR_ABMODE; // Alternate byte mode
    static constexpr uint32_t CCR_ABDTR = 0x80000; // Alternate bytes double transfer rate
    typedef bit_field_t<20, 0x3> CCR_ABSIZE; // Alternate bytes size
    typedef bit_field_t<24, 0x7> CCR_DMODE; // Data mode
    static constexpr uint32_t CCR_DDTR = 0x8000000; // Alternate bytes double transfer rate
    static constexpr uint32_t CCR_DQSE = 0x20000000; // DQS enable
    static constexpr uint32_t CCR_SIOO = 0x80000000; // Send instruction only once mode


    static constexpr uint32_t TCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> TCR_DCYC; // Number of dummy cycles
    static constexpr uint32_t TCR_DHQC = 0x10000000; // Delay hold quarter cycle
    static constexpr uint32_t TCR_SSHIFT = 0x40000000; // Sample shift


    static constexpr uint32_t IR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> IR_INSTRUCTION; // INSTRUCTION


    static constexpr uint32_t ABR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> ABR_ALTERNATE; // Alternate bytes


    static constexpr uint32_t LPTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> LPTR_TIMEOUT; // Timeout period


    static constexpr uint32_t WCCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> WCCR_IMODE; // Instruction mode
    static constexpr uint32_t WCCR_IDTR = 0x8; // Instruction double transfer rate
    typedef bit_field_t<4, 0x3> WCCR_ISIZE; // Instruction size
    typedef bit_field_t<8, 0x7> WCCR_ADMODE; // Address mode
    static constexpr uint32_t WCCR_ADDTR = 0x800; // Address double transfer rate
    typedef bit_field_t<12, 0x3> WCCR_ADSIZE; // Address size
    typedef bit_field_t<16, 0x7> WCCR_ABMODE; // Alternate byte mode
    static constexpr uint32_t WCCR_ABDTR = 0x80000; // Alternate bytes double transfer rate
    typedef bit_field_t<20, 0x3> WCCR_ABSIZE; // Alternate bytes size
    typedef bit_field_t<24, 0x7> WCCR_DMODE; // Data mode
    static constexpr uint32_t WCCR_DDTR = 0x8000000; // alternate bytes double transfer rate
    static constexpr uint32_t WCCR_DQSE = 0x20000000; // DQS enable


    static constexpr uint32_t WTCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x1f> WTCR_DCYC; // Number of dummy cycles


    static constexpr uint32_t WIR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> WIR_INSTRUCTION; // INSTRUCTION


    static constexpr uint32_t WABR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> WABR_ALTERNATE; // Alternate bytes


    static constexpr uint32_t HLCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t HLCR_LM = 0x1; // Latency mode
    static constexpr uint32_t HLCR_WZL = 0x2; // Write zero latency
    typedef bit_field_t<8, 0xff> HLCR_TACC; // Access time
    typedef bit_field_t<16, 0xff> HLCR_TRWR; // Read write recovery time
};

template<>
struct peripheral_t<STM32L4P5, OCTOSPI1>
{
    static constexpr periph_t P = OCTOSPI1;
    using T = stm32l4p5_octospi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4P5, OCTOSPI2>
{
    static constexpr periph_t P = OCTOSPI2;
    using T = stm32l4p5_octospi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4Q5, OCTOSPI1>
{
    static constexpr periph_t P = OCTOSPI1;
    using T = stm32l4p5_octospi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4Q5, OCTOSPI2>
{
    static constexpr periph_t P = OCTOSPI2;
    using T = stm32l4p5_octospi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R7, OCTOSPI1>
{
    static constexpr periph_t P = OCTOSPI1;
    using T = stm32l4p5_octospi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R7, OCTOSPI2>
{
    static constexpr periph_t P = OCTOSPI2;
    using T = stm32l4p5_octospi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R9, OCTOSPI1>
{
    static constexpr periph_t P = OCTOSPI1;
    using T = stm32l4p5_octospi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R9, OCTOSPI2>
{
    static constexpr periph_t P = OCTOSPI2;
    using T = stm32l4p5_octospi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S5, OCTOSPI1>
{
    static constexpr periph_t P = OCTOSPI1;
    using T = stm32l4p5_octospi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S5, OCTOSPI2>
{
    static constexpr periph_t P = OCTOSPI2;
    using T = stm32l4p5_octospi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S7, OCTOSPI1>
{
    static constexpr periph_t P = OCTOSPI1;
    using T = stm32l4p5_octospi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S7, OCTOSPI2>
{
    static constexpr periph_t P = OCTOSPI2;
    using T = stm32l4p5_octospi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S9, OCTOSPI1>
{
    static constexpr periph_t P = OCTOSPI1;
    using T = stm32l4p5_octospi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S9, OCTOSPI2>
{
    static constexpr periph_t P = OCTOSPI2;
    using T = stm32l4p5_octospi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R5, OCTOSPI1>
{
    static constexpr periph_t P = OCTOSPI1;
    using T = stm32l4r5_octospi1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R5, OCTOSPI2>
{
    static constexpr periph_t P = OCTOSPI2;
    using T = stm32l4r5_octospi1_t;
    static T& V;
};

using octospi1_t = peripheral_t<svd, OCTOSPI1>;
using octospi2_t = peripheral_t<svd, OCTOSPI2>;
