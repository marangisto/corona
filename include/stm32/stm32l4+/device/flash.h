#pragma once

////
//
//      STM32L4+ Flash peripherals
//
////

////
//
//      Flash
//
////

struct stm32l4p5_flash_t
{
    volatile uint32_t ACR;      // [read-write] Access control register
    volatile uint32_t PDKEYR;   // [write-only] Power down key register
    volatile uint32_t KEYR;     // [write-only] Flash key register
    volatile uint32_t OPTKEYR;  // [write-only] Option byte key register
    volatile uint32_t SR;       // Status register
    volatile uint32_t CR;       // [read-write] Flash control register
    volatile uint32_t ECCR;     // Flash ECC register
    reserved_t<0x1> _0x20;
    volatile uint32_t OPTR;     // [read-write] Flash option register
    volatile uint32_t PCROP1SR; // [read-write] Flash Bank 1 PCROP Start address register
    volatile uint32_t PCROP1ER; // [read-write] Flash Bank 1 PCROP End address register
    volatile uint32_t WRP1AR;   // [read-write] Flash Bank 1 WRP area A address register
    volatile uint32_t WRP1BR;   // [read-write] Flash Bank 1 WRP area B address register
    reserved_t<0x4> _0x44;
    volatile uint32_t PCROP2SR; // [read-write] Flash Bank 2 PCROP Start address register
    volatile uint32_t PCROP2ER; // [read-write] Flash Bank 2 PCROP End address register
    volatile uint32_t WRP2AR;   // [read-write] Flash Bank 2 WRP area A address register
    volatile uint32_t WRP2BR;   // [read-write] Flash Bank 2 WRP area B address register

    static constexpr uint32_t ACR_RESET_VALUE = 0x600;
    template<uint32_t X>
    static constexpr uint32_t ACR_LATENCY =          // Latency
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t ACR_PRFTEN = 0x100;    // Prefetch enable
    static constexpr uint32_t ACR_ICEN = 0x200;      // Instruction cache enable
    static constexpr uint32_t ACR_DCEN = 0x400;      // Data cache enable
    static constexpr uint32_t ACR_ICRST = 0x800;     // Instruction cache reset
    static constexpr uint32_t ACR_DCRST = 0x1000;    // Data cache reset
    static constexpr uint32_t ACR_RUN_PD = 0x2000;   // Flash Power-down mode during Low-power run mode
    static constexpr uint32_t ACR_SLEEP_PD = 0x4000; // Flash Power-down mode during Low-power sleep mode

    static constexpr uint32_t PDKEYR_RESET_VALUE = 0x0;

    static constexpr uint32_t KEYR_RESET_VALUE = 0x0;

    static constexpr uint32_t OPTKEYR_RESET_VALUE = 0x0;

    static constexpr uint32_t SR_RESET_VALUE = 0x0;
    static constexpr uint32_t SR_EOP = 0x1;        // End of operation
    static constexpr uint32_t SR_OPERR = 0x2;      // Operation error
    static constexpr uint32_t SR_PROGERR = 0x8;    // Programming error
    static constexpr uint32_t SR_WRPERR = 0x10;    // Write protected error
    static constexpr uint32_t SR_PGAERR = 0x20;    // Programming alignment error
    static constexpr uint32_t SR_SIZERR = 0x40;    // Size error
    static constexpr uint32_t SR_PGSERR = 0x80;    // Programming sequence error
    static constexpr uint32_t SR_MISERR = 0x100;   // Fast programming data miss error
    static constexpr uint32_t SR_FASTERR = 0x200;  // Fast programming error
    static constexpr uint32_t SR_RDERR = 0x4000;   // PCROP read error
    static constexpr uint32_t SR_OPTVERR = 0x8000; // Option validity error
    static constexpr uint32_t SR_BSY = 0x10000;    // Busy

    static constexpr uint32_t CR_RESET_VALUE = 0xc0000000;
    static constexpr uint32_t CR_PG = 0x1;               // Programming
    static constexpr uint32_t CR_PER = 0x2;              // Page erase
    static constexpr uint32_t CR_MER1 = 0x4;             // Bank 1 Mass erase
    template<uint32_t X>
    static constexpr uint32_t CR_PNB =                   // Page number
        bit_field_t<3, 0xff>::value<X>();
    static constexpr uint32_t CR_BKER = 0x800;           // Bank erase
    static constexpr uint32_t CR_MER2 = 0x8000;          // Bank 2 Mass erase
    static constexpr uint32_t CR_START = 0x10000;        // Start
    static constexpr uint32_t CR_OPTSTRT = 0x20000;      // Options modification start
    static constexpr uint32_t CR_FSTPG = 0x40000;        // Fast programming
    static constexpr uint32_t CR_EOPIE = 0x1000000;      // End of operation interrupt enable
    static constexpr uint32_t CR_ERRIE = 0x2000000;      // Error interrupt enable
    static constexpr uint32_t CR_RDERRIE = 0x4000000;    // PCROP read error interrupt enable
    static constexpr uint32_t CR_OBL_LAUNCH = 0x8000000; // Force the option byte loading
    static constexpr uint32_t CR_OPTLOCK = 0x40000000;   // Options Lock
    static constexpr uint32_t CR_LOCK = 0x80000000;      // FLASH_CR Lock

    static constexpr uint32_t ECCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ECCR_ADDR_ECC =           // ECC fail address
        bit_field_t<0, 0x7ffff>::value<X>();
    static constexpr uint32_t ECCR_BK_ECC = 0x80000;    // ECC fail bank
    static constexpr uint32_t ECCR_SYSF_ECC = 0x100000; // System Flash ECC fail
    static constexpr uint32_t ECCR_ECCIE = 0x1000000;   // ECC correction interrupt enable
    static constexpr uint32_t ECCR_ECCC = 0x40000000;   // ECC correction
    static constexpr uint32_t ECCR_ECCD = 0x80000000;   // ECC detection

    static constexpr uint32_t OPTR_RESET_VALUE = 0xf0000000;
    template<uint32_t X>
    static constexpr uint32_t OPTR_RDP =                  // Read protection level
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OPTR_BOR_LEV =              // BOR reset Level
        bit_field_t<8, 0x7>::value<X>();
    static constexpr uint32_t OPTR_nRST_STOP = 0x1000;    // nRST_STOP
    static constexpr uint32_t OPTR_nRST_STDBY = 0x2000;   // nRST_STDBY
    static constexpr uint32_t OPTR_IDWG_SW = 0x10000;     // Independent watchdog selection
    static constexpr uint32_t OPTR_IWDG_STOP = 0x20000;   // Independent watchdog counter freeze in Stop mode
    static constexpr uint32_t OPTR_IWDG_STDBY = 0x40000;  // Independent watchdog counter freeze in Standby mode
    static constexpr uint32_t OPTR_WWDG_SW = 0x80000;     // Window watchdog selection
    static constexpr uint32_t OPTR_BFB2 = 0x100000;       // Dual-bank boot
    static constexpr uint32_t OPTR_DUALBANK = 0x200000;   // Dual-Bank on 512 KB or 256 KB Flash memory devices
    static constexpr uint32_t OPTR_nBOOT1 = 0x800000;     // Boot configuration
    static constexpr uint32_t OPTR_SRAM2_PE = 0x1000000;  // SRAM2 parity check enable
    static constexpr uint32_t OPTR_SRAM2_RST = 0x2000000; // SRAM2 Erase when system reset

    static constexpr uint32_t PCROP1SR_RESET_VALUE = 0xffff0000;
    template<uint32_t X>
    static constexpr uint32_t PCROP1SR_PCROP1_STRT =   // Bank 1 PCROP area start offset
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t PCROP1ER_RESET_VALUE = 0xfff0000;
    template<uint32_t X>
    static constexpr uint32_t PCROP1ER_PCROP1_END =            // Bank 1 PCROP area end offset
        bit_field_t<0, 0xffff>::value<X>();
    static constexpr uint32_t PCROP1ER_PCROP_RDP = 0x80000000; // PCROP area preserved when RDP level decreased

    static constexpr uint32_t WRP1AR_RESET_VALUE = 0xff00ff00;
    template<uint32_t X>
    static constexpr uint32_t WRP1AR_WRP1A_STRT =   // Bank 1 WRP first area start offset
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t WRP1AR_WRP1A_END =    // Bank 1 WRP first area A end offset
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t WRP1BR_RESET_VALUE = 0xff00ff00;
    template<uint32_t X>
    static constexpr uint32_t WRP1BR_WRP1B_END =    // Bank 1 WRP second area B end offset
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t WRP1BR_WRP1B_STRT =   // Bank 1 WRP second area B start offset
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t PCROP2SR_RESET_VALUE = 0xffff0000;
    template<uint32_t X>
    static constexpr uint32_t PCROP2SR_PCROP2_STRT =   // Bank 2 PCROP area start offset
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t PCROP2ER_RESET_VALUE = 0xffff0000;
    template<uint32_t X>
    static constexpr uint32_t PCROP2ER_PCROP2_END =   // Bank 2 PCROP area end offset
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t WRP2AR_RESET_VALUE = 0xff00ff00;
    template<uint32_t X>
    static constexpr uint32_t WRP2AR_WRP2A_STRT =   // Bank 2 WRP first area A start offset
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t WRP2AR_WRP2A_END =    // Bank 2 WRP first area A end offset
        bit_field_t<16, 0xff>::value<X>();

    static constexpr uint32_t WRP2BR_RESET_VALUE = 0xff00ff00;
    template<uint32_t X>
    static constexpr uint32_t WRP2BR_WRP2B_STRT =   // Bank 2 WRP second area B start offset
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t WRP2BR_WRP2B_END =    // Bank 2 WRP second area B end offset
        bit_field_t<16, 0xff>::value<X>();
};


template<>
struct peripheral_t<STM32L4P5, FLASH>
{
    typedef stm32l4p5_flash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4Q5, FLASH>
{
    typedef stm32l4p5_flash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R5, FLASH>
{
    typedef stm32l4p5_flash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R7, FLASH>
{
    typedef stm32l4p5_flash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R9, FLASH>
{
    typedef stm32l4p5_flash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S5, FLASH>
{
    typedef stm32l4p5_flash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S7, FLASH>
{
    typedef stm32l4p5_flash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S9, FLASH>
{
    typedef stm32l4p5_flash_t T;
    static T& V;
};

using flash_t = peripheral_t<mcu_svd, FLASH>;

