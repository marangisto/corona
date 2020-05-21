#pragma once

////
//
//      STM32F2 FLASH peripherals
//
////

////
//
//      FLASH
//
////

struct stm32f215_flash_t
{
    volatile uint32_t ACR;     // Flash access control register
    volatile uint32_t KEYR;    // [write-only] Flash key register
    volatile uint32_t OPTKEYR; // [write-only] Flash option key register
    volatile uint32_t SR;      // Status register
    volatile uint32_t CR;      // [read-write] Control register
    volatile uint32_t OPTCR;   // [read-write] Flash option control register

    static constexpr uint32_t ACR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ACR_LATENCY =       // Latency
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t ACR_PRFTEN = 0x100; // Prefetch enable
    static constexpr uint32_t ACR_ICEN = 0x200;   // Instruction cache enable
    static constexpr uint32_t ACR_DCEN = 0x400;   // Data cache enable
    static constexpr uint32_t ACR_ICRST = 0x800;  // Instruction cache reset
    static constexpr uint32_t ACR_DCRST = 0x1000; // Data cache reset

    static constexpr uint32_t KEYR_RESET_VALUE = 0x0;

    static constexpr uint32_t OPTKEYR_RESET_VALUE = 0x0;

    static constexpr uint32_t SR_RESET_VALUE = 0x0;
    static constexpr uint32_t SR_EOP = 0x1;     // End of operation
    static constexpr uint32_t SR_OPERR = 0x2;   // Operation error
    static constexpr uint32_t SR_WRPERR = 0x10; // Write protection error
    static constexpr uint32_t SR_PGAERR = 0x20; // Programming alignment error
    static constexpr uint32_t SR_PGPERR = 0x40; // Programming parallelism error
    static constexpr uint32_t SR_PGSERR = 0x80; // Programming sequence error
    static constexpr uint32_t SR_BSY = 0x10000; // Busy

    static constexpr uint32_t CR_RESET_VALUE = 0x80000000;
    static constexpr uint32_t CR_PG = 0x1;          // Programming
    static constexpr uint32_t CR_SER = 0x2;         // Sector Erase
    static constexpr uint32_t CR_MER = 0x4;         // Mass Erase
    template<uint32_t X>
    static constexpr uint32_t CR_SNB =              // Sector number
        bit_field_t<3, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CR_PSIZE =            // Program size
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t CR_STRT = 0x10000;    // Start
    static constexpr uint32_t CR_EOPIE = 0x1000000; // End of operation interrupt enable
    static constexpr uint32_t CR_ERRIE = 0x2000000; // Error interrupt enable
    static constexpr uint32_t CR_LOCK = 0x80000000; // Lock

    static constexpr uint32_t OPTCR_RESET_VALUE = 0x14;
    static constexpr uint32_t OPTCR_OPTLOCK = 0x1;     // Option lock
    static constexpr uint32_t OPTCR_OPTSTRT = 0x2;     // Option start
    template<uint32_t X>
    static constexpr uint32_t OPTCR_BOR_LEV =          // BOR reset Level
        bit_field_t<2, 0x3>::value<X>();
    static constexpr uint32_t OPTCR_WDG_SW = 0x20;     // WDG_SW User option bytes
    static constexpr uint32_t OPTCR_nRST_STOP = 0x40;  // nRST_STOP User option bytes
    static constexpr uint32_t OPTCR_nRST_STDBY = 0x80; // nRST_STDBY User option bytes
    template<uint32_t X>
    static constexpr uint32_t OPTCR_RDP =              // Read protect
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OPTCR_nWRP =             // Not write protect
        bit_field_t<16, 0xfff>::value<X>();
};


template<>
struct peripheral_t<STM32F215, FLASH>
{
    typedef stm32f215_flash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F217, FLASH>
{
    typedef stm32f215_flash_t T;
    static T& V;
};

using flash_t = peripheral_t<mcu_svd, FLASH>;

