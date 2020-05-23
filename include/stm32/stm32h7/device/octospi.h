#pragma once

////
//
//      STM32H7 OctoSPI peripherals
//
////

////
//
//      OctoSPI
//
////

struct stm32h7a3x_octospi2_t
{
    volatile uint32_t CR;    // [read-write] control register
    reserved_t<0x1> _0x8;
    volatile uint32_t DCR1;  // [read-write] device configuration register
    volatile uint32_t DCR2;  // [read-write] device configuration register 2
    volatile uint32_t DCR3;  // [read-write] device configuration register 3
    volatile uint32_t DCR4;  // [read-write] DCR4
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
    volatile uint32_t PIR;   // [read-write] OCTOSPI polling interval register
    reserved_t<0x1b> _0x100;
    volatile uint32_t CCR;   // [read-write] polling interval register
    reserved_t<0x1> _0x108;
    volatile uint32_t TCR;   // [read-write] communication configuration register
    reserved_t<0x1> _0x110;
    volatile uint32_t IR;    // [read-write] timing configuration register
    reserved_t<0x3> _0x120;
    volatile uint32_t ABR;   // [read-write] instruction register
    reserved_t<0x3> _0x130;
    volatile uint32_t LPTR;  // [read-write] alternate bytes register
    reserved_t<0x3> _0x140;
    volatile uint32_t WPCCR; // [read-write] low-power timeout register
    reserved_t<0x1> _0x148;
    volatile uint32_t WPTCR; // [read-write] wrap timing configuration register
    reserved_t<0x1> _0x150;
    volatile uint32_t WPIR;  // [read-write] wrap instruction register
    reserved_t<0x3> _0x160;
    volatile uint32_t WPABR; // [read-write] wrap alternate bytes register
    reserved_t<0x7> _0x180;
    volatile uint32_t WCCR;  // [read-write] write communication configuration register
    reserved_t<0x1> _0x188;
    volatile uint32_t WTCR;  // [read-write] write timing configuration register
    reserved_t<0x1> _0x190;
    volatile uint32_t WIR;   // [read-write] instruction register
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
    static constexpr uint32_t DCR3_MAXTRAN =   // Maximum transfer
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DCR3_CSBOUND =   // CS boundary
        bit_field_t<16, 0x1f>::value<X>();

    static constexpr uint32_t DCR4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DCR4_REFRESH =   // Refresh rate
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t SR_RESET_VALUE = 0x0;
    static constexpr uint32_t SR_CTEF = 0x1;  // Clear transfer error flag
    static constexpr uint32_t SR_CTCF = 0x2;  // Clear transfer complete flag
    static constexpr uint32_t SR_CSMF = 0x8;  // Clear status match flag
    static constexpr uint32_t SR_CTOF = 0x10; // Clear timeout flag
    static constexpr uint32_t SR_FTF = 0x4;   // FIFO threshold flag
    static constexpr uint32_t SR_BUSY = 0x20; // Busy
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

    static constexpr uint32_t WPCCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t WPCCR_IMODE =            // Instruction mode
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t WPCCR_IDTR = 0x8;        // Instruction double transfer rate
    template<uint32_t X>
    static constexpr uint32_t WPCCR_ISIZE =            // Instruction size
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t WPCCR_ADMODE =           // Address mode
        bit_field_t<8, 0x7>::value<X>();
    static constexpr uint32_t WPCCR_ADDTR = 0x800;     // Address double transfer rate
    template<uint32_t X>
    static constexpr uint32_t WPCCR_ADSIZE =           // Address size
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t WPCCR_ABMODE =           // Alternate byte mode
        bit_field_t<16, 0x7>::value<X>();
    static constexpr uint32_t WPCCR_ABDTR = 0x80000;   // Alternate bytes double transfer rate
    template<uint32_t X>
    static constexpr uint32_t WPCCR_ABSIZE =           // Alternate bytes size
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t WPCCR_DMODE =            // Data mode
        bit_field_t<24, 0x7>::value<X>();
    static constexpr uint32_t WPCCR_DDTR = 0x8000000;  // alternate bytes double transfer rate
    static constexpr uint32_t WPCCR_DQSE = 0x20000000; // DQS enable

    static constexpr uint32_t WPTCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t WPTCR_DCYC =               // Number of dummy cycles
        bit_field_t<0, 0x1f>::value<X>();
    static constexpr uint32_t WPTCR_DHQC = 0x10000000;   // Delay hold quarter cycle
    static constexpr uint32_t WPTCR_SSHIFT = 0x40000000; // Sample shift

    static constexpr uint32_t WPIR_RESET_VALUE = 0x0;

    static constexpr uint32_t WPABR_RESET_VALUE = 0x0;

    static constexpr uint32_t WCCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t WCCR_IMODE =            // Instruction mode
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t WCCR_IDTR = 0x4;        // Instruction double transfer rate
    static constexpr uint32_t WCCR_ISIZE = 0x8;       // Instruction size
    template<uint32_t X>
    static constexpr uint32_t WCCR_ADMODE =           // Address mode
        bit_field_t<8, 0x7>::value<X>();
    static constexpr uint32_t WCCR_ADDTR = 0x800;     // Address double transfer rate
    template<uint32_t X>
    static constexpr uint32_t WCCR_ADSIZE =           // Address size
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t WCCR_ABMODE =           // Alternate-byte mode
        bit_field_t<16, 0x7>::value<X>();
    static constexpr uint32_t WCCR_ABDTR = 0x80000;   // Alternate bytes double transfer rate
    template<uint32_t X>
    static constexpr uint32_t WCCR_ABSIZE =           // Alternate bytes size
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t WCCR_DMODE =            // Data mode
        bit_field_t<24, 0x7>::value<X>();
    static constexpr uint32_t WCCR_DDTR = 0x8000000;  // DDTR
    static constexpr uint32_t WCCR_DQSE = 0x20000000; // DQSE

    static constexpr uint32_t WTCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t WTCR_DCYC =   // DCYC
        bit_field_t<0, 0x1f>::value<X>();

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

    static constexpr uint32_t PIR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t PIR_INTERVAL =   // Polling interval
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t WIR_RESET_VALUE = 0x0;
};


template<>
struct peripheral_t<STM32H7A3x, OCTOSPI2>
{
    typedef stm32h7a3x_octospi2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, OCTOSPI1_CONTROL_REGISTER>
{
    typedef stm32h7a3x_octospi2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, OCTOSPI2>
{
    typedef stm32h7a3x_octospi2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, OCTOSPI1_CONTROL_REGISTER>
{
    typedef stm32h7a3x_octospi2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, OCTOSPI2>
{
    typedef stm32h7a3x_octospi2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, OCTOSPI1_CONTROL_REGISTER>
{
    typedef stm32h7a3x_octospi2_t T;
    static T& V;
};

using octospi1_control_register_t = peripheral_t<mcu_svd, OCTOSPI1_CONTROL_REGISTER>;
using octospi2_t = peripheral_t<mcu_svd, OCTOSPI2>;

template<int INST> struct octospi_traits {};

template<> struct octospi_traits<1_CONTROL_REGISTER>
{
    using octospi = octospi1_CONTROL_REGISTER_t;
};

template<> struct octospi_traits<2>
{
    using octospi = octospi2_t;
};

