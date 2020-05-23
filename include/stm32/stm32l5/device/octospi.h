#pragma once

////
//
//      STM32L5 OctoSPI peripherals
//
////

////
//
//      OctoSPI
//
////

struct stm32l552_octospi1_t
{
    volatile uint32_t CR;    // [read-write] control register
    reserved_t<0x1> _0x8;
    volatile uint32_t DCR1;  // [read-write] device configuration register
    volatile uint32_t DCR2;  // [read-write] device configuration register 2
    volatile uint32_t DCR3;  // [read-write] device configuration register 3
    volatile uint32_t DCR4;  // [read-write] DCR4
    reserved_t<0x2> _0x20;
    volatile uint32_t SR;    // [write-only] status register
    volatile uint32_t FCR;   // [read-write] flag clear register
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
    reserved_t<0x3> _0x140;
    volatile uint32_t WPCCR; // [read-write] write communication configuration register
    reserved_t<0x1> _0x148;
    volatile uint32_t WPTCR; // [read-write] write timing configuration register
    reserved_t<0x1> _0x150;
    volatile uint32_t WPIR;  // [read-write] write instruction register
    reserved_t<0x3> _0x160;
    volatile uint32_t WPABR; // [read-write] write alternate bytes register
    reserved_t<0x7> _0x180;
    volatile uint32_t WCCR;  // [read-write] WCCR
    reserved_t<0x1> _0x188;
    volatile uint32_t WTCR;  // [read-write] WTCR
    reserved_t<0x1> _0x190;
    volatile uint32_t WIR;   // [read-write] WIR
    reserved_t<0x3> _0x1a0;
    volatile uint32_t WABR;  // [read-write] WABR
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

    static constexpr uint32_t DCR4_RESET_VALUE = 0x0;
    static constexpr uint32_t DCR4_TEF = 0x1;   // Transfer error flag
    static constexpr uint32_t DCR4_TCF = 0x2;   // Transfer complete flag
    static constexpr uint32_t DCR4_FTF = 0x4;   // FIFO threshold flag
    static constexpr uint32_t DCR4_SMF = 0x8;   // Status match flag
    static constexpr uint32_t DCR4_TOF = 0x10;  // Timeout flag
    static constexpr uint32_t DCR4_BUSY = 0x20; // BUSY
    template<uint32_t X>
    static constexpr uint32_t DCR4_FLEVEL =     // FIFO level
        bit_field_t<8, 0x3f>::value<X>();

    static constexpr uint32_t SR_RESET_VALUE = 0x0;
    static constexpr uint32_t SR_CTEF = 0x1;  // Clear transfer error flag
    static constexpr uint32_t SR_CTCF = 0x2;  // Clear transfer complete flag
    static constexpr uint32_t SR_CSMF = 0x8;  // Clear status match flag
    static constexpr uint32_t SR_CTOF = 0x10; // Clear timeout flag

    static constexpr uint32_t FCR_RESET_VALUE = 0x0;

    static constexpr uint32_t DLR_RESET_VALUE = 0x0;

    static constexpr uint32_t AR_RESET_VALUE = 0x0;

    static constexpr uint32_t DR_RESET_VALUE = 0x0;

    static constexpr uint32_t PSMKR_RESET_VALUE = 0x0;

    static constexpr uint32_t PSMAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t PSMAR_INTERVAL =   // Polling interval
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t PIR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t PIR_IMODE =            // Instruction mode
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t PIR_IDTR = 0x8;        // Instruction double transfer rate
    template<uint32_t X>
    static constexpr uint32_t PIR_ISIZE =            // Instruction size
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PIR_ADMODE =           // Address mode
        bit_field_t<8, 0x7>::value<X>();
    static constexpr uint32_t PIR_ADDTR = 0x800;     // Address double transfer rate
    template<uint32_t X>
    static constexpr uint32_t PIR_ADSIZE =           // Address size
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PIR_ABMODE =           // Alternate byte mode
        bit_field_t<16, 0x7>::value<X>();
    static constexpr uint32_t PIR_ABDTR = 0x80000;   // Alternate bytes double transfer rate
    template<uint32_t X>
    static constexpr uint32_t PIR_ABSIZE =           // Alternate bytes size
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PIR_DMODE =            // Data mode
        bit_field_t<24, 0x7>::value<X>();
    static constexpr uint32_t PIR_DDTR = 0x8000000;  // Alternate bytes double transfer rate
    static constexpr uint32_t PIR_DQSE = 0x20000000; // DQS enable
    static constexpr uint32_t PIR_SIOO = 0x80000000; // Send instruction only once mode

    static constexpr uint32_t CCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CCR_DCYC =               // Number of dummy cycles
        bit_field_t<0, 0x1f>::value<X>();
    static constexpr uint32_t CCR_DHQC = 0x10000000;   // Delay hold quarter cycle
    static constexpr uint32_t CCR_SSHIFT = 0x40000000; // Sample shift

    static constexpr uint32_t TCR_RESET_VALUE = 0x0;

    static constexpr uint32_t IR_RESET_VALUE = 0x0;

    static constexpr uint32_t ABR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ABR_TIMEOUT =   // Timeout period
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t LPTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t LPTR_IMODE =            // Instruction mode
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t LPTR_IDTR = 0x8;        // Instruction double transfer rate
    template<uint32_t X>
    static constexpr uint32_t LPTR_ISIZE =            // Instruction size
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LPTR_ADMODE =           // Address mode
        bit_field_t<8, 0x7>::value<X>();
    static constexpr uint32_t LPTR_ADDTR = 0x800;     // Address double transfer rate
    template<uint32_t X>
    static constexpr uint32_t LPTR_ADSIZE =           // Address size
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LPTR_ABMODE =           // Alternate byte mode
        bit_field_t<16, 0x7>::value<X>();
    static constexpr uint32_t LPTR_ABDTR = 0x80000;   // Alternate bytes double transfer rate
    template<uint32_t X>
    static constexpr uint32_t LPTR_ABSIZE =           // Alternate bytes size
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t LPTR_DMODE =            // Data mode
        bit_field_t<24, 0x7>::value<X>();
    static constexpr uint32_t LPTR_DDTR = 0x8000000;  // alternate bytes double transfer rate
    static constexpr uint32_t LPTR_DQSE = 0x20000000; // DQS enable

    static constexpr uint32_t WPCCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t WPCCR_DCYC =               // Number of dummy cycles
        bit_field_t<0, 0x1f>::value<X>();
    static constexpr uint32_t WPCCR_DHQC = 0x10000000;   // Delay hold quarter cycle
    static constexpr uint32_t WPCCR_SSHIFT = 0x40000000; // Sample shift

    static constexpr uint32_t WPTCR_RESET_VALUE = 0x0;

    static constexpr uint32_t WPIR_RESET_VALUE = 0x0;

    static constexpr uint32_t WPABR_RESET_VALUE = 0x0;
    static constexpr uint32_t WPABR_LM = 0x1;  // Latency mode
    static constexpr uint32_t WPABR_WZL = 0x2; // Write zero latency
    template<uint32_t X>
    static constexpr uint32_t WPABR_TACC =     // Access time
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t WPABR_TRWR =     // Read write recovery time
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t WCCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t WCCR_REFRESH =   // REFRESH
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t WTCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t WTCR_IMODE =            // IMODE
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t WTCR_IDTR = 0x8;        // IDTR
    template<uint32_t X>
    static constexpr uint32_t WTCR_ISIZE =            // ISIZE
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t WTCR_ADMODE =           // ADMODE
        bit_field_t<8, 0x7>::value<X>();
    static constexpr uint32_t WTCR_ADDTR = 0x800;     // ADDTR
    template<uint32_t X>
    static constexpr uint32_t WTCR_ADSIZE =           // ADSIZE
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t WTCR_ABMODE =           // ABMODE
        bit_field_t<16, 0x7>::value<X>();
    static constexpr uint32_t WTCR_ABDTR = 0x80000;   // ABDTR
    template<uint32_t X>
    static constexpr uint32_t WTCR_ABSIZE =           // ABSIZE
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t WTCR_DMODE =            // DMODE
        bit_field_t<24, 0x7>::value<X>();
    static constexpr uint32_t WTCR_DDTR = 0x8000000;  // DDTR
    static constexpr uint32_t WTCR_DQSE = 0x20000000; // DQSE

    static constexpr uint32_t WIR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t WIR_DCYC =   // DCYC
        bit_field_t<0, 0x1f>::value<X>();

    static constexpr uint32_t WABR_RESET_VALUE = 0x0;

    static constexpr uint32_t HLCR_RESET_VALUE = 0x0;
};


template<>
struct peripheral_t<STM32L552, OCTOSPI1>
{
    typedef stm32l552_octospi1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L552, SEC_OCTOSPI1>
{
    typedef stm32l552_octospi1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, OCTOSPI1>
{
    typedef stm32l552_octospi1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, SEC_OCTOSPI1>
{
    typedef stm32l552_octospi1_t T;
    static T& V;
};

using octospi1_t = peripheral_t<mcu_svd, OCTOSPI1>;
using sec_octospi1_t = peripheral_t<mcu_svd, SEC_OCTOSPI1>;

template<int INST> struct octospi_traits {};

template<> struct octospi_traits<1>
{
    using octospi = octospi1_t;
    static constexpr alternate_function_t CLK = OCTOSPI1_CLK;
    static constexpr alternate_function_t DQS = OCTOSPI1_DQS;
    static constexpr alternate_function_t IO0 = OCTOSPI1_IO0;
    static constexpr alternate_function_t IO1 = OCTOSPI1_IO1;
    static constexpr alternate_function_t IO2 = OCTOSPI1_IO2;
    static constexpr alternate_function_t IO3 = OCTOSPI1_IO3;
    static constexpr alternate_function_t IO4 = OCTOSPI1_IO4;
    static constexpr alternate_function_t IO5 = OCTOSPI1_IO5;
    static constexpr alternate_function_t IO6 = OCTOSPI1_IO6;
    static constexpr alternate_function_t IO7 = OCTOSPI1_IO7;
    static constexpr alternate_function_t NCLK = OCTOSPI1_NCLK;
    static constexpr alternate_function_t NCS = OCTOSPI1_NCS;
};

template<int INST> struct sec_octospi_traits {};

template<> struct sec_octospi_traits<1>
{
    using sec_octospi = sec_octospi1_t;
};

