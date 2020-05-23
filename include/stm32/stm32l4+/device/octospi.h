#pragma once

////
//
//      STM32L4+ OctoSPI peripherals
//
////

////
//
//      OctoSPI
//
////

struct stm32l4p5_octospi1_t
{
    volatile uint32_t CR;     // [read-write] control register
    reserved_t<0x1> _0x8;
    volatile uint32_t DCR1;   // [read-write] device configuration register
    volatile uint32_t DCR2;   // [read-write] device configuration register 2
    volatile uint32_t DCR3;   // [read-write] device configuration register 3
    reserved_t<0x3> _0x20;
    volatile uint32_t SR;     // [read-write] status register
    volatile uint32_t FCR;    // [write-only] flag clear register
    reserved_t<0x6> _0x40;
    volatile uint32_t DLR;    // [read-write] data length register
    reserved_t<0x1> _0x48;
    volatile uint32_t AR;     // [read-write] address register
    reserved_t<0x1> _0x50;
    volatile uint32_t DR;     // [read-write] data register
    reserved_t<0xb> _0x80;
    volatile uint32_t PSMKR;  // [read-write] polling status mask register
    reserved_t<0x1> _0x88;
    volatile uint32_t PSMAR;  // [read-write] polling status match register
    reserved_t<0x1> _0x90;
    volatile uint32_t PIR;    // [read-write] polling interval register
    reserved_t<0x1b> _0x100;
    volatile uint32_t CCR;    // [read-write] communication configuration register
    reserved_t<0x1> _0x108;
    volatile uint32_t TCR;    // [read-write] timing configuration register
    reserved_t<0x1> _0x110;
    volatile uint32_t IR;     // [read-write] instruction register
    reserved_t<0x3> _0x120;
    volatile uint32_t ABR;    // [read-write] alternate bytes register
    reserved_t<0x3> _0x130;
    volatile uint32_t LPTR;   // [read-write] low-power timeout register
    reserved_t<0x13> _0x180;
    volatile uint32_t WCCR;   // [read-write] write communication configuration register
    reserved_t<0x1> _0x188;
    volatile uint32_t WTCR;   // [read-write] write timing configuration register
    reserved_t<0x1> _0x190;
    volatile uint32_t WIR;    // [read-write] write instruction register
    reserved_t<0x3> _0x1a0;
    volatile uint32_t WABR;   // [read-write] write alternate bytes register
    reserved_t<0x17> _0x200;
    volatile uint32_t HLCR;   // [read-write] HyperBusTM latency configuration register
    reserved_t<0x7b> _0x3f0;
    volatile uint32_t HWCFGR; // [read-only] HW configuration register
    volatile uint32_t VER;    // [read-only] version register
    volatile uint32_t ID;     // [read-only] identification
    volatile uint32_t MID;    // [read-only] magic ID

    static constexpr uint32_t CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CR_FMODE =          // Functional mode
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t CR_PMM = 0x800000;  // Polling match mode
    static constexpr uint32_t CR_APMS = 0x400000; // Automatic poll mode stop
    static constexpr uint32_t CR_TOIE = 0x100000; // TimeOut interrupt enable
    static constexpr uint32_t CR_SMIE = 0x80000;  // Status match interrupt enable
    static constexpr uint32_t CR_FTIE = 0x40000;  // FIFO threshold interrupt enable
    static constexpr uint32_t CR_TCIE = 0x20000;  // Transfer complete interrupt enable
    static constexpr uint32_t CR_TEIE = 0x10000;  // Transfer error interrupt enable
    template<uint32_t X>
    static constexpr uint32_t CR_FTHRES =         // IFO threshold level
        bit_field_t<8, 0x1f>::value<X>();
    static constexpr uint32_t CR_FSEL = 0x80;     // FLASH memory selection
    static constexpr uint32_t CR_DQM = 0x40;      // Dual-quad mode
    static constexpr uint32_t CR_TCEN = 0x8;      // Timeout counter enable
    static constexpr uint32_t CR_DMAEN = 0x4;     // DMA enable
    static constexpr uint32_t CR_ABORT = 0x2;     // Abort request
    static constexpr uint32_t CR_EN = 0x1;        // Enable

    static constexpr uint32_t DCR1_RESET_VALUE = 0x0;
    static constexpr uint32_t DCR1_CKMODE = 0x1; // Mode 0 / mode 3
    static constexpr uint32_t DCR1_FRCK = 0x2;   // Free running clock
    template<uint32_t X>
    static constexpr uint32_t DCR1_CSHT =        // Chip-select high time
        bit_field_t<8, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DCR1_DEVSIZE =     // Device size
        bit_field_t<16, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DCR1_MTYP =        // Memory type
        bit_field_t<24, 0x3>::value<X>();

    static constexpr uint32_t DCR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DCR2_PRESCALER =   // Clock prescaler
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DCR2_WRAPSIZE =    // Wrap size
        bit_field_t<16, 0x7>::value<X>();

    static constexpr uint32_t DCR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DCR3_CSBOUND =   // CS boundary
        bit_field_t<16, 0x1f>::value<X>();

    static constexpr uint32_t SR_RESET_VALUE = 0x0;
    static constexpr uint32_t SR_TEF = 0x1;   // Transfer error flag
    static constexpr uint32_t SR_TCF = 0x2;   // Transfer complete flag
    static constexpr uint32_t SR_FTF = 0x4;   // FIFO threshold flag
    static constexpr uint32_t SR_SMF = 0x8;   // Status match flag
    static constexpr uint32_t SR_TOF = 0x10;  // Timeout flag
    static constexpr uint32_t SR_BUSY = 0x20; // BUSY
    template<uint32_t X>
    static constexpr uint32_t SR_FLEVEL =     // FIFO level
        bit_field_t<8, 0x3f>::value<X>();

    static constexpr uint32_t FCR_RESET_VALUE = 0x0;
    static constexpr uint32_t FCR_CTEF = 0x1;  // Clear transfer error flag
    static constexpr uint32_t FCR_CTCF = 0x2;  // Clear transfer complete flag
    static constexpr uint32_t FCR_CSMF = 0x8;  // Clear status match flag
    static constexpr uint32_t FCR_CTOF = 0x10; // Clear timeout flag

    static constexpr uint32_t DLR_RESET_VALUE = 0x0;

    static constexpr uint32_t AR_RESET_VALUE = 0x0;

    static constexpr uint32_t DR_RESET_VALUE = 0x0;

    static constexpr uint32_t PSMKR_RESET_VALUE = 0x0;

    static constexpr uint32_t PSMAR_RESET_VALUE = 0x0;

    static constexpr uint32_t PIR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t PIR_INTERVAL =   // Polling interval
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCR_IMODE =            // Instruction mode
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t CCR_IDTR = 0x8;        // Instruction double transfer rate
    template<uint32_t X>
    static constexpr uint32_t CCR_ISIZE =            // Instruction size
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR_ADMODE =           // Address mode
        bit_field_t<8, 0x7>::value<X>();
    static constexpr uint32_t CCR_ADDTR = 0x800;     // Address double transfer rate
    template<uint32_t X>
    static constexpr uint32_t CCR_ADSIZE =           // Address size
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR_ABMODE =           // Alternate byte mode
        bit_field_t<16, 0x7>::value<X>();
    static constexpr uint32_t CCR_ABDTR = 0x80000;   // Alternate bytes double transfer rate
    template<uint32_t X>
    static constexpr uint32_t CCR_ABSIZE =           // Alternate bytes size
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR_DMODE =            // Data mode
        bit_field_t<24, 0x7>::value<X>();
    static constexpr uint32_t CCR_DDTR = 0x8000000;  // Alternate bytes double transfer rate
    static constexpr uint32_t CCR_DQSE = 0x20000000; // DQS enable
    static constexpr uint32_t CCR_SIOO = 0x80000000; // Send instruction only once mode

    static constexpr uint32_t TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TCR_DCYC =               // Number of dummy cycles
        bit_field_t<0, 0x1f>::value<X>();
    static constexpr uint32_t TCR_DHQC = 0x10000000;   // Delay hold quarter cycle
    static constexpr uint32_t TCR_SSHIFT = 0x40000000; // Sample shift

    static constexpr uint32_t IR_RESET_VALUE = 0x0;

    static constexpr uint32_t ABR_RESET_VALUE = 0x0;

    static constexpr uint32_t LPTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LPTR_TIMEOUT =   // Timeout period
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t WCCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t WCCR_IMODE =            // Instruction mode
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t WCCR_IDTR = 0x8;        // Instruction double transfer rate
    template<uint32_t X>
    static constexpr uint32_t WCCR_ISIZE =            // Instruction size
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t WCCR_ADMODE =           // Address mode
        bit_field_t<8, 0x7>::value<X>();
    static constexpr uint32_t WCCR_ADDTR = 0x800;     // Address double transfer rate
    template<uint32_t X>
    static constexpr uint32_t WCCR_ADSIZE =           // Address size
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t WCCR_ABMODE =           // Alternate byte mode
        bit_field_t<16, 0x7>::value<X>();
    static constexpr uint32_t WCCR_ABDTR = 0x80000;   // Alternate bytes double transfer rate
    template<uint32_t X>
    static constexpr uint32_t WCCR_ABSIZE =           // Alternate bytes size
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t WCCR_DMODE =            // Data mode
        bit_field_t<24, 0x7>::value<X>();
    static constexpr uint32_t WCCR_DDTR = 0x8000000;  // alternate bytes double transfer rate
    static constexpr uint32_t WCCR_DQSE = 0x20000000; // DQS enable
    static constexpr uint32_t WCCR_SIOO = 0x80000000; // Send instruction only once mode

    static constexpr uint32_t WTCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t WTCR_DCYC =   // Number of dummy cycles
        bit_field_t<0, 0x1f>::value<X>();

    static constexpr uint32_t WIR_RESET_VALUE = 0x0;

    static constexpr uint32_t WABR_RESET_VALUE = 0x0;

    static constexpr uint32_t HLCR_RESET_VALUE = 0x0;
    static constexpr uint32_t HLCR_LM = 0x1;  // Latency mode
    static constexpr uint32_t HLCR_WZL = 0x2; // Write zero latency
    template<uint32_t X>
    static constexpr uint32_t HLCR_TACC =     // Access time
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HLCR_TRWR =     // Read write recovery time
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t HWCFGR_RESET_VALUE = 0x11300080;
    template<uint32_t X>
    static constexpr uint32_t HWCFGR_AXI =    // AXI interface
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HWCFGR_FIFO =   // FIFO depth
        bit_field_t<4, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HWCFGR_PRES =   // Prescaler
        bit_field_t<12, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HWCFGR_IDL =    // ID Length
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HWCFGR_MMW =    // Memory map write
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HWCFGR_MST =    // Master
        bit_field_t<28, 0xf>::value<X>();

    static constexpr uint32_t VER_RESET_VALUE = 0x10;
    template<uint32_t X>
    static constexpr uint32_t VER_VER =   // Version
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t ID_RESET_VALUE = 0x140041;

    static constexpr uint32_t MID_RESET_VALUE = 0xa3c5dd01;
};


////
//
//      OctoSPI
//
////

struct stm32l4r5_octospi1_t
{
    volatile uint32_t CR;    // [read-write] control register
    reserved_t<0x1> _0x8;
    volatile uint32_t DCR1;  // [read-write] device configuration register
    volatile uint32_t DCR2;  // [read-write] device configuration register 2
    volatile uint32_t DCR3;  // [read-write] device configuration register 3
    volatile uint32_t DCR4;  // [read-write] device configuration register 4
    reserved_t<0x2> _0x20;
    volatile uint32_t SR;    // [read-only] status register
    volatile uint32_t FCR;   // [write-only] flag clear register
    reserved_t<0x6> _0x40;
    volatile uint32_t DLR;   // [read-write] data length register
    reserved_t<0x1> _0x48;
    volatile uint32_t AR;    // [read-write] address register
    reserved_t<0x1> _0x50;
    volatile uint32_t DR;    // [read-write] data register
    reserved_t<0xb> _0x80;
    volatile uint32_t PSMKR; // [read-write] polling status mask register
    reserved_t<0x1> _0x88;
    volatile uint32_t PSMAR; // [read-write] polling status match register
    reserved_t<0x1> _0x90;
    volatile uint32_t PIR;   // [read-write] polling interval register
    reserved_t<0x1b> _0x100;
    volatile uint32_t CCR;   // [read-write] communication configuration register
    reserved_t<0x1> _0x108;
    volatile uint32_t TCR;   // [read-write] timing configuration register
    reserved_t<0x1> _0x110;
    volatile uint32_t IR;    // [read-write] instruction register
    reserved_t<0x3> _0x120;
    volatile uint32_t ABR;   // [read-write] alternate bytes register
    reserved_t<0x3> _0x130;
    volatile uint32_t LPTR;  // [read-write] low-power timeout register
    reserved_t<0x13> _0x180;
    volatile uint32_t WCCR;  // [read-write] write communication configuration register
    reserved_t<0x1> _0x188;
    volatile uint32_t WTCR;  // [read-write] write timing configuration register
    reserved_t<0x1> _0x190;
    volatile uint32_t WIR;   // [read-write] write instruction register
    reserved_t<0x3> _0x1a0;
    volatile uint32_t WABR;  // [read-write] write alternate bytes register
    reserved_t<0x17> _0x200;
    volatile uint32_t HLCR;  // [read-write] HyperBusTM latency configuration register

    static constexpr uint32_t CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CR_FMODE =          // Functional mode
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t CR_PMM = 0x800000;  // Polling match mode
    static constexpr uint32_t CR_APMS = 0x400000; // Automatic poll mode stop
    static constexpr uint32_t CR_TOIE = 0x100000; // TimeOut interrupt enable
    static constexpr uint32_t CR_SMIE = 0x80000;  // Status match interrupt enable
    static constexpr uint32_t CR_FTIE = 0x40000;  // FIFO threshold interrupt enable
    static constexpr uint32_t CR_TCIE = 0x20000;  // Transfer complete interrupt enable
    static constexpr uint32_t CR_TEIE = 0x10000;  // Transfer error interrupt enable
    template<uint32_t X>
    static constexpr uint32_t CR_FTHRES =         // IFO threshold level
        bit_field_t<8, 0x1f>::value<X>();
    static constexpr uint32_t CR_FSEL = 0x80;     // FLASH memory selection
    static constexpr uint32_t CR_DQM = 0x40;      // Dual-quad mode
    static constexpr uint32_t CR_TCEN = 0x8;      // Timeout counter enable
    static constexpr uint32_t CR_DMAEN = 0x4;     // DMA enable
    static constexpr uint32_t CR_ABORT = 0x2;     // Abort request
    static constexpr uint32_t CR_EN = 0x1;        // Enable

    static constexpr uint32_t DCR1_RESET_VALUE = 0x0;
    static constexpr uint32_t DCR1_CKMODE = 0x1; // Mode 0 / mode 3
    static constexpr uint32_t DCR1_FRCK = 0x2;   // Free running clock
    static constexpr uint32_t DCR1_DLYBYP = 0x8; // Delay block bypass
    template<uint32_t X>
    static constexpr uint32_t DCR1_CSHT =        // Chip-select high time
        bit_field_t<8, 0x3f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DCR1_DEVSIZE =     // Device size
        bit_field_t<16, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DCR1_MTYP =        // Memory type
        bit_field_t<24, 0x7>::value<X>();

    static constexpr uint32_t DCR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DCR2_PRESCALER =   // Clock prescaler
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DCR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DCR3_CSBOUND =   // CS boundary
        bit_field_t<16, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DCR3_MAXTRAN =   // Maximum transfer
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t DCR4_RESET_VALUE = 0x0;

    static constexpr uint32_t SR_RESET_VALUE = 0x0;
    static constexpr uint32_t SR_TEF = 0x1;   // Transfer error flag
    static constexpr uint32_t SR_TCF = 0x2;   // Transfer complete flag
    static constexpr uint32_t SR_FTF = 0x4;   // FIFO threshold flag
    static constexpr uint32_t SR_SMF = 0x8;   // Status match flag
    static constexpr uint32_t SR_TOF = 0x10;  // Timeout flag
    static constexpr uint32_t SR_BUSY = 0x20; // BUSY
    template<uint32_t X>
    static constexpr uint32_t SR_FLEVEL =     // FIFO level
        bit_field_t<8, 0x3f>::value<X>();

    static constexpr uint32_t FCR_RESET_VALUE = 0x0;
    static constexpr uint32_t FCR_CTEF = 0x1;  // Clear transfer error flag
    static constexpr uint32_t FCR_CTCF = 0x2;  // Clear transfer complete flag
    static constexpr uint32_t FCR_CSMF = 0x8;  // Clear status match flag
    static constexpr uint32_t FCR_CTOF = 0x10; // Clear timeout flag

    static constexpr uint32_t DLR_RESET_VALUE = 0x0;

    static constexpr uint32_t AR_RESET_VALUE = 0x0;

    static constexpr uint32_t DR_RESET_VALUE = 0x0;

    static constexpr uint32_t PSMKR_RESET_VALUE = 0x0;

    static constexpr uint32_t PSMAR_RESET_VALUE = 0x0;

    static constexpr uint32_t PIR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t PIR_INTERVAL =   // Polling interval
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCR_IMODE =            // Instruction mode
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t CCR_IDTR = 0x8;        // Instruction double transfer rate
    template<uint32_t X>
    static constexpr uint32_t CCR_ISIZE =            // Instruction size
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR_ADMODE =           // Address mode
        bit_field_t<8, 0x7>::value<X>();
    static constexpr uint32_t CCR_ADDTR = 0x800;     // Address double transfer rate
    template<uint32_t X>
    static constexpr uint32_t CCR_ADSIZE =           // Address size
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR_ABMODE =           // Alternate byte mode
        bit_field_t<16, 0x7>::value<X>();
    static constexpr uint32_t CCR_ABDTR = 0x80000;   // Alternate bytes double transfer rate
    template<uint32_t X>
    static constexpr uint32_t CCR_ABSIZE =           // Alternate bytes size
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CCR_DMODE =            // Data mode
        bit_field_t<24, 0x7>::value<X>();
    static constexpr uint32_t CCR_DDTR = 0x8000000;  // Alternate bytes double transfer rate
    static constexpr uint32_t CCR_DQSE = 0x20000000; // DQS enable
    static constexpr uint32_t CCR_SIOO = 0x80000000; // Send instruction only once mode

    static constexpr uint32_t TCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TCR_DCYC =               // Number of dummy cycles
        bit_field_t<0, 0x1f>::value<X>();
    static constexpr uint32_t TCR_DHQC = 0x10000000;   // Delay hold quarter cycle
    static constexpr uint32_t TCR_SSHIFT = 0x40000000; // Sample shift

    static constexpr uint32_t IR_RESET_VALUE = 0x0;

    static constexpr uint32_t ABR_RESET_VALUE = 0x0;

    static constexpr uint32_t LPTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LPTR_TIMEOUT =   // Timeout period
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t WCCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t WCCR_IMODE =            // Instruction mode
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t WCCR_IDTR = 0x8;        // Instruction double transfer rate
    template<uint32_t X>
    static constexpr uint32_t WCCR_ISIZE =            // Instruction size
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t WCCR_ADMODE =           // Address mode
        bit_field_t<8, 0x7>::value<X>();
    static constexpr uint32_t WCCR_ADDTR = 0x800;     // Address double transfer rate
    template<uint32_t X>
    static constexpr uint32_t WCCR_ADSIZE =           // Address size
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t WCCR_ABMODE =           // Alternate byte mode
        bit_field_t<16, 0x7>::value<X>();
    static constexpr uint32_t WCCR_ABDTR = 0x80000;   // Alternate bytes double transfer rate
    template<uint32_t X>
    static constexpr uint32_t WCCR_ABSIZE =           // Alternate bytes size
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t WCCR_DMODE =            // Data mode
        bit_field_t<24, 0x7>::value<X>();
    static constexpr uint32_t WCCR_DDTR = 0x8000000;  // alternate bytes double transfer rate
    static constexpr uint32_t WCCR_DQSE = 0x20000000; // DQS enable

    static constexpr uint32_t WTCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t WTCR_DCYC =   // Number of dummy cycles
        bit_field_t<0, 0x1f>::value<X>();

    static constexpr uint32_t WIR_RESET_VALUE = 0x0;

    static constexpr uint32_t WABR_RESET_VALUE = 0x0;

    static constexpr uint32_t HLCR_RESET_VALUE = 0x0;
    static constexpr uint32_t HLCR_LM = 0x1;  // Latency mode
    static constexpr uint32_t HLCR_WZL = 0x2; // Write zero latency
    template<uint32_t X>
    static constexpr uint32_t HLCR_TACC =     // Access time
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HLCR_TRWR =     // Read write recovery time
        bit_field_t<16, 0xff>::value<X>();
};


template<>
struct peripheral_t<STM32L4P5, OCTOSPI1>
{
    typedef stm32l4p5_octospi1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4P5, OCTOSPI2>
{
    typedef stm32l4p5_octospi1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4Q5, OCTOSPI1>
{
    typedef stm32l4p5_octospi1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4Q5, OCTOSPI2>
{
    typedef stm32l4p5_octospi1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R7, OCTOSPI1>
{
    typedef stm32l4p5_octospi1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R7, OCTOSPI2>
{
    typedef stm32l4p5_octospi1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R9, OCTOSPI1>
{
    typedef stm32l4p5_octospi1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R9, OCTOSPI2>
{
    typedef stm32l4p5_octospi1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S5, OCTOSPI1>
{
    typedef stm32l4p5_octospi1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S5, OCTOSPI2>
{
    typedef stm32l4p5_octospi1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S7, OCTOSPI1>
{
    typedef stm32l4p5_octospi1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S7, OCTOSPI2>
{
    typedef stm32l4p5_octospi1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S9, OCTOSPI1>
{
    typedef stm32l4p5_octospi1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S9, OCTOSPI2>
{
    typedef stm32l4p5_octospi1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R5, OCTOSPI1>
{
    typedef stm32l4r5_octospi1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R5, OCTOSPI2>
{
    typedef stm32l4r5_octospi1_t T;
    static T& V;
};

using octospi1_t = peripheral_t<mcu_svd, OCTOSPI1>;
using octospi2_t = peripheral_t<mcu_svd, OCTOSPI2>;

template<int INST> struct octospi_traits {};

template<> struct octospi_traits<1>
{
    using octospi = octospi1_t;
};

template<> struct octospi_traits<2>
{
    using octospi = octospi2_t;
};

