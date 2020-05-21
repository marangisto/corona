#pragma once

////
//
//      STM32G4 Flash peripherals
//
////

////
//
//      Flash
//
////

struct stm32g431xx_flash_t
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
    reserved_t<0xf> _0x70;
    volatile uint32_t SEC1R;    // [read-write] securable area bank1 register

    static constexpr uint32_t ACR_RESET_VALUE = 0x600;
    template<uint32_t X>
    static constexpr uint32_t ACR_LATENCY =           // Latency
        bit_field_t<0, 0xf>::value<X>();
    static constexpr uint32_t ACR_PRFTEN = 0x100;     // Prefetch enable
    static constexpr uint32_t ACR_ICEN = 0x200;       // Instruction cache enable
    static constexpr uint32_t ACR_DCEN = 0x400;       // Data cache enable
    static constexpr uint32_t ACR_ICRST = 0x800;      // Instruction cache reset
    static constexpr uint32_t ACR_DCRST = 0x1000;     // Data cache reset
    static constexpr uint32_t ACR_RUN_PD = 0x2000;    // Flash Power-down mode during Low-power run mode
    static constexpr uint32_t ACR_SLEEP_PD = 0x4000;  // Flash Power-down mode during Low-power sleep mode
    static constexpr uint32_t ACR_DBG_SWEN = 0x40000; // Debug software enable

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
        bit_field_t<3, 0x7f>::value<X>();
    static constexpr uint32_t CR_STRT = 0x10000;         // Start
    static constexpr uint32_t CR_OPTSTRT = 0x20000;      // Options modification start
    static constexpr uint32_t CR_FSTPG = 0x40000;        // Fast programming
    static constexpr uint32_t CR_EOPIE = 0x1000000;      // End of operation interrupt enable
    static constexpr uint32_t CR_ERRIE = 0x2000000;      // Error interrupt enable
    static constexpr uint32_t CR_RDERRIE = 0x4000000;    // PCROP read error interrupt enable
    static constexpr uint32_t CR_OBL_LAUNCH = 0x8000000; // Force the option byte loading
    static constexpr uint32_t CR_SEC_PROT1 = 0x10000000; // SEC_PROT1
    static constexpr uint32_t CR_OPTLOCK = 0x40000000;   // Options Lock
    static constexpr uint32_t CR_LOCK = 0x80000000;      // FLASH_CR Lock

    static constexpr uint32_t ECCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ECCR_ADDR_ECC =           // ECC fail address
        bit_field_t<0, 0x7ffff>::value<X>();
    static constexpr uint32_t ECCR_BK_ECC = 0x200000;   // BK_ECC
    static constexpr uint32_t ECCR_SYSF_ECC = 0x400000; // SYSF_ECC
    static constexpr uint32_t ECCR_ECCIE = 0x1000000;   // ECCIE
    static constexpr uint32_t ECCR_ECCC2 = 0x10000000;  // ECC correction
    static constexpr uint32_t ECCR_ECCD2 = 0x20000000;  // ECC2 detection
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
    static constexpr uint32_t OPTR_nRST_SHDW = 0x4000;    // nRST_SHDW
    static constexpr uint32_t OPTR_IDWG_SW = 0x10000;     // Independent watchdog selection
    static constexpr uint32_t OPTR_IWDG_STOP = 0x20000;   // Independent watchdog counter freeze in Stop mode
    static constexpr uint32_t OPTR_IWDG_STDBY = 0x40000;  // Independent watchdog counter freeze in Standby mode
    static constexpr uint32_t OPTR_WWDG_SW = 0x80000;     // Window watchdog selection
    static constexpr uint32_t OPTR_nBOOT1 = 0x800000;     // Boot configuration
    static constexpr uint32_t OPTR_SRAM2_PE = 0x1000000;  // SRAM2 parity check enable
    static constexpr uint32_t OPTR_SRAM2_RST = 0x2000000; // SRAM2 Erase when system reset
    static constexpr uint32_t OPTR_nSWBOOT0 = 0x4000000;  // nSWBOOT0
    static constexpr uint32_t OPTR_nBOOT0 = 0x8000000;    // nBOOT0
    template<uint32_t X>
    static constexpr uint32_t OPTR_NRST_MODE =            // NRST_MODE
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t OPTR_IRHEN = 0x40000000;    // IRHEN

    static constexpr uint32_t PCROP1SR_RESET_VALUE = 0xffff0000;
    template<uint32_t X>
    static constexpr uint32_t PCROP1SR_PCROP1_STRT =   // Bank 1 PCROP area start offset
        bit_field_t<0, 0x7fff>::value<X>();

    static constexpr uint32_t PCROP1ER_RESET_VALUE = 0xfff0000;
    template<uint32_t X>
    static constexpr uint32_t PCROP1ER_PCROP1_END =            // Bank 1 PCROP area end offset
        bit_field_t<0, 0x7fff>::value<X>();
    static constexpr uint32_t PCROP1ER_PCROP_RDP = 0x80000000; // PCROP area preserved when RDP level decreased

    static constexpr uint32_t WRP1AR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t WRP1AR_WRP1A_STRT =   // Bank 1 WRP first area start offset
        bit_field_t<0, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t WRP1AR_WRP1A_END =    // Bank 1 WRP first area A end offset
        bit_field_t<16, 0x7f>::value<X>();

    static constexpr uint32_t WRP1BR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t WRP1BR_WRP1B_STRT =   // Bank 1 WRP second area B end offset
        bit_field_t<0, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t WRP1BR_WRP1B_END =    // Bank 1 WRP second area B start offset
        bit_field_t<16, 0x7f>::value<X>();

    static constexpr uint32_t SEC1R_RESET_VALUE = 0xff00ff00;
    static constexpr uint32_t SEC1R_BOOT_LOCK = 0x10000; // BOOT_LOCK
    template<uint32_t X>
    static constexpr uint32_t SEC1R_SEC_SIZE1 =          // SEC_SIZE1
        bit_field_t<0, 0xff>::value<X>();
};


template<>
struct peripheral_t<STM32G431xx, FLASH>
{
    typedef stm32g431xx_flash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G441xx, FLASH>
{
    typedef stm32g431xx_flash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G471xx, FLASH>
{
    typedef stm32g431xx_flash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G473xx, FLASH>
{
    typedef stm32g431xx_flash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G474xx, FLASH>
{
    typedef stm32g431xx_flash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G483xx, FLASH>
{
    typedef stm32g431xx_flash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, FLASH>
{
    typedef stm32g431xx_flash_t T;
    static T& V;
};

using flash_t = peripheral_t<mcu_svd, FLASH>;

