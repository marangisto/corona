#pragma once

////
//
//      STM32F7 FLASH peripherals
//
////

////
//
//      FLASH
//
////

struct stm32f722_flash_t
{
    volatile uint32_t ACR;     // [read-write] Flash access control register
    volatile uint32_t KEYR;    // [write-only] Flash key register
    volatile uint32_t OPTKEYR; // [write-only] Flash option key register
    volatile uint32_t SR;      // Status register
    volatile uint32_t CR;      // [read-write] Control register
    volatile uint32_t OPTCR;   // [read-write] Flash option control register
    volatile uint32_t OPTCR1;  // [read-write] Flash option control register 1
    volatile uint32_t OPTCR2;  // [read-write] Flash option control register

    static constexpr uint32_t ACR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ACR_LATENCY =       // Latency
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t ACR_PRFTEN = 0x100; // Prefetch enable
    static constexpr uint32_t ACR_ARTEN = 0x200;  // ART Accelerator Enable
    static constexpr uint32_t ACR_ARTRST = 0x800; // ART Accelerator reset

    static constexpr uint32_t KEYR_RESET_VALUE = 0x0;

    static constexpr uint32_t OPTKEYR_RESET_VALUE = 0x0;

    static constexpr uint32_t SR_RESET_VALUE = 0x0;
    static constexpr uint32_t SR_EOP = 0x1;     // End of operation
    static constexpr uint32_t SR_OPERR = 0x2;   // Operation error
    static constexpr uint32_t SR_WRPERR = 0x10; // Write protection error
    static constexpr uint32_t SR_PGAERR = 0x20; // Programming alignment error
    static constexpr uint32_t SR_PGPERR = 0x40; // Programming parallelism error
    static constexpr uint32_t SR_ERSERR = 0x80; // Erase Sequence Error
    static constexpr uint32_t SR_BSY = 0x10000; // Busy

    static constexpr uint32_t CR_RESET_VALUE = 0x80000000;
    static constexpr uint32_t CR_PG = 0x1;            // Programming
    static constexpr uint32_t CR_SER = 0x2;           // Sector Erase
    static constexpr uint32_t CR_MER = 0x4;           // Mass Erase of sectors 0 to 11
    template<uint32_t X>
    static constexpr uint32_t CR_SNB =                // Sector number
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CR_PSIZE =              // Program size
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t CR_STRT = 0x10000;      // Start
    static constexpr uint32_t CR_EOPIE = 0x1000000;   // End of operation interrupt enable
    static constexpr uint32_t CR_ERRIE = 0x2000000;   // Error interrupt enable
    static constexpr uint32_t CR_LOCK = 0x80000000;   // Lock
    static constexpr uint32_t CR_RDERRIE = 0x4000000; // PCROP error interrupt enable

    static constexpr uint32_t OPTCR_RESET_VALUE = 0xfffaaed;
    static constexpr uint32_t OPTCR_OPTLOCK = 0x1;           // Option lock
    static constexpr uint32_t OPTCR_OPTSTRT = 0x2;           // Option start
    template<uint32_t X>
    static constexpr uint32_t OPTCR_BOR_LEV =                // BOR reset Level
        bit_field_t<2, 0x3>::value<X>();
    static constexpr uint32_t OPTCR_IWDG_SW = 0x20;          // WDG_SW User option bytes
    static constexpr uint32_t OPTCR_nRST_STOP = 0x40;        // nRST_STOP User option bytes
    static constexpr uint32_t OPTCR_nRST_STDBY = 0x80;       // nRST_STDBY User option bytes
    template<uint32_t X>
    static constexpr uint32_t OPTCR_RDP =                    // Read protect
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OPTCR_nWRP =                   // Not write protect
        bit_field_t<16, 0xfff>::value<X>();
    static constexpr uint32_t OPTCR_WWDG_SW = 0x10;          // User option bytes
    static constexpr uint32_t OPTCR_IWDG_STOP = 0x80000000;  // Independent watchdog counter freeze in Stop mode
    static constexpr uint32_t OPTCR_IWDG_STDBY = 0x40000000; // Independent watchdog counter freeze in standby mode

    static constexpr uint32_t OPTCR1_RESET_VALUE = 0xfff0000;
    template<uint32_t X>
    static constexpr uint32_t OPTCR1_BOOT_ADD1 =   // Boot base address when Boot pin =1
        bit_field_t<16, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OPTCR1_BOOT_ADD0 =   // Boot base address when Boot pin =0
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t OPTCR2_RESET_VALUE = 0x800000ff;
    static constexpr uint32_t OPTCR2_PCROP_RDP = 0x80000000; // PCROP zone preserved when RDP level decreased
    template<uint32_t X>
    static constexpr uint32_t OPTCR2_PCROP =                 // PCROP option byte
        bit_field_t<0, 0xff>::value<X>();
};


////
//
//      FLASH
//
////

struct stm32f730_flash_t
{
    volatile uint32_t ACR;     // [read-write] Flash access control register
    volatile uint32_t KEYR;    // [write-only] Flash key register
    volatile uint32_t OPTKEYR; // [write-only] Flash option key register
    volatile uint32_t SR;      // Status register
    volatile uint32_t CR;      // [read-write] Control register
    volatile uint32_t OPTCR;   // [read-write] Flash option control register
    volatile uint32_t OPTCR1;  // [read-write] Flash option control register 1
    volatile uint32_t OPTCR2;  // [read-write] Flash option control register

    static constexpr uint32_t ACR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ACR_LATENCY =       // Latency
        bit_field_t<0, 0xf>::value<X>();
    static constexpr uint32_t ACR_PRFTEN = 0x100; // Prefetch enable
    static constexpr uint32_t ACR_ARTEN = 0x200;  // ART Accelerator Enable
    static constexpr uint32_t ACR_ARTRST = 0x800; // ART Accelerator reset

    static constexpr uint32_t KEYR_RESET_VALUE = 0x0;

    static constexpr uint32_t OPTKEYR_RESET_VALUE = 0x0;

    static constexpr uint32_t SR_RESET_VALUE = 0x0;
    static constexpr uint32_t SR_EOP = 0x1;     // End of operation
    static constexpr uint32_t SR_OPERR = 0x2;   // Operation error
    static constexpr uint32_t SR_WRPERR = 0x10; // Write protection error
    static constexpr uint32_t SR_PGAERR = 0x20; // Programming alignment error
    static constexpr uint32_t SR_PGPERR = 0x40; // Programming parallelism error
    static constexpr uint32_t SR_ERSERR = 0x80; // Erase Sequence Error
    static constexpr uint32_t SR_BSY = 0x10000; // Busy
    static constexpr uint32_t SR_RDERR = 0x100; // RDERR

    static constexpr uint32_t CR_RESET_VALUE = 0x80000000;
    static constexpr uint32_t CR_PG = 0x1;            // Programming
    static constexpr uint32_t CR_SER = 0x2;           // Sector Erase
    static constexpr uint32_t CR_MER = 0x4;           // Mass Erase of sectors 0 to 11
    template<uint32_t X>
    static constexpr uint32_t CR_SNB =                // Sector number
        bit_field_t<3, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CR_PSIZE =              // Program size
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t CR_STRT = 0x10000;      // Start
    static constexpr uint32_t CR_EOPIE = 0x1000000;   // End of operation interrupt enable
    static constexpr uint32_t CR_ERRIE = 0x2000000;   // Error interrupt enable
    static constexpr uint32_t CR_LOCK = 0x80000000;   // Lock
    static constexpr uint32_t CR_RDERRIE = 0x4000000; // PCROP error interrupt enable

    static constexpr uint32_t OPTCR_RESET_VALUE = 0xc0ffaafd;
    static constexpr uint32_t OPTCR_OPTLOCK = 0x1;           // Option lock
    static constexpr uint32_t OPTCR_OPTSTRT = 0x2;           // Option start
    template<uint32_t X>
    static constexpr uint32_t OPTCR_BOR_LEV =                // BOR reset Level
        bit_field_t<2, 0x3>::value<X>();
    static constexpr uint32_t OPTCR_IWDG_SW = 0x20;          // WDG_SW User option bytes
    static constexpr uint32_t OPTCR_nRST_STOP = 0x40;        // nRST_STOP User option bytes
    static constexpr uint32_t OPTCR_nRST_STDBY = 0x80;       // nRST_STDBY User option bytes
    template<uint32_t X>
    static constexpr uint32_t OPTCR_RDP =                    // Read protect
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OPTCR_nWRP =                   // Not write protect
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t OPTCR_WWDG_SW = 0x10;          // User option bytes
    static constexpr uint32_t OPTCR_IWDG_STOP = 0x80000000;  // Independent watchdog counter freeze in Stop mode
    static constexpr uint32_t OPTCR_IWDG_STDBY = 0x40000000; // Independent watchdog counter freeze in standby mode

    static constexpr uint32_t OPTCR1_RESET_VALUE = 0x400080;
    template<uint32_t X>
    static constexpr uint32_t OPTCR1_BOOT_ADD1 =   // Boot base address when Boot pin =1
        bit_field_t<16, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OPTCR1_BOOT_ADD0 =   // Boot base address when Boot pin =0
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t OPTCR2_RESET_VALUE = 0x800000ff;
    static constexpr uint32_t OPTCR2_PCROP_RDP = 0x80000000; // PCROP zone preserved when RDP level decreased
    template<uint32_t X>
    static constexpr uint32_t OPTCR2_PCROPi =                // PCROP option byte
        bit_field_t<0, 0xff>::value<X>();
};


////
//
//      FLASH
//
////

struct stm32f745_flash_t
{
    volatile uint32_t ACR;     // [read-write] Flash access control register
    volatile uint32_t KEYR;    // [write-only] Flash key register
    volatile uint32_t OPTKEYR; // [write-only] Flash option key register
    volatile uint32_t SR;      // Status register
    volatile uint32_t CR;      // [read-write] Control register
    volatile uint32_t OPTCR;   // [read-write] Flash option control register
    volatile uint32_t OPTCR1;  // [read-write] Flash option control register 1

    static constexpr uint32_t ACR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ACR_LATENCY =       // Latency
        bit_field_t<0, 0xf>::value<X>();
    static constexpr uint32_t ACR_PRFTEN = 0x100; // Prefetch enable
    static constexpr uint32_t ACR_ARTEN = 0x200;  // ART Accelerator Enable
    static constexpr uint32_t ACR_ARTRST = 0x800; // ART Accelerator reset

    static constexpr uint32_t KEYR_RESET_VALUE = 0x0;

    static constexpr uint32_t OPTKEYR_RESET_VALUE = 0x0;

    static constexpr uint32_t SR_RESET_VALUE = 0x0;
    static constexpr uint32_t SR_EOP = 0x1;     // End of operation
    static constexpr uint32_t SR_OPERR = 0x2;   // Operation error
    static constexpr uint32_t SR_WRPERR = 0x10; // Write protection error
    static constexpr uint32_t SR_PGAERR = 0x20; // Programming alignment error
    static constexpr uint32_t SR_PGPERR = 0x40; // Programming parallelism error
    static constexpr uint32_t SR_ERSERR = 0x80; // Erase Sequence Error
    static constexpr uint32_t SR_BSY = 0x10000; // Busy

    static constexpr uint32_t CR_RESET_VALUE = 0x80000000;
    static constexpr uint32_t CR_PG = 0x1;          // Programming
    static constexpr uint32_t CR_SER = 0x2;         // Sector Erase
    static constexpr uint32_t CR_MER = 0x4;         // Mass Erase of sectors 0 to 11
    template<uint32_t X>
    static constexpr uint32_t CR_SNB =              // Sector number
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CR_PSIZE =            // Program size
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t CR_MER1 = 0x8000;     // Mass Erase of sectors 12 to 23
    static constexpr uint32_t CR_STRT = 0x10000;    // Start
    static constexpr uint32_t CR_EOPIE = 0x1000000; // End of operation interrupt enable
    static constexpr uint32_t CR_ERRIE = 0x2000000; // Error interrupt enable
    static constexpr uint32_t CR_LOCK = 0x80000000; // Lock

    static constexpr uint32_t OPTCR_RESET_VALUE = 0xfffaaed;
    static constexpr uint32_t OPTCR_OPTLOCK = 0x1;           // Option lock
    static constexpr uint32_t OPTCR_OPTSTRT = 0x2;           // Option start
    template<uint32_t X>
    static constexpr uint32_t OPTCR_BOR_LEV =                // BOR reset Level
        bit_field_t<2, 0x3>::value<X>();
    static constexpr uint32_t OPTCR_WWDG_SW = 0x10;          // User option bytes
    static constexpr uint32_t OPTCR_IWDG_SW = 0x20;          // User option bytes
    static constexpr uint32_t OPTCR_nRST_STOP = 0x40;        // User option bytes
    static constexpr uint32_t OPTCR_nRST_STDBY = 0x80;       // User option bytes
    template<uint32_t X>
    static constexpr uint32_t OPTCR_RDP =                    // Read protect
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OPTCR_nWRP =                   // Not write protect
        bit_field_t<16, 0xfff>::value<X>();
    static constexpr uint32_t OPTCR_nDBOOT = 0x10000000;     // Dual Boot mode (valid only when nDBANK=0)
    static constexpr uint32_t OPTCR_nDBANK = 0x20000000;     // Not dual bank mode
    static constexpr uint32_t OPTCR_IWDG_STDBY = 0x40000000; // Independent watchdog counter freeze in standby mode
    static constexpr uint32_t OPTCR_IWDG_STOP = 0x80000000;  // Independent watchdog counter freeze in Stop mode

    static constexpr uint32_t OPTCR1_RESET_VALUE = 0xfff0000;
    template<uint32_t X>
    static constexpr uint32_t OPTCR1_BOOT_ADD0 =   // Boot base address when Boot pin =0
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OPTCR1_BOOT_ADD1 =   // Boot base address when Boot pin =1
        bit_field_t<16, 0xffff>::value<X>();
};


////
//
//      FLASH
//
////

struct stm32f746_flash_t
{
    volatile uint32_t ACR;     // [read-write] Flash access control register
    volatile uint32_t KEYR;    // [write-only] Flash key register
    volatile uint32_t OPTKEYR; // [write-only] Flash option key register
    volatile uint32_t SR;      // Status register
    volatile uint32_t CR;      // [read-write] Control register
    volatile uint32_t OPTCR;   // [read-write] Flash option control register
    volatile uint32_t OPTCR1;  // [read-write] Flash option control register 1

    static constexpr uint32_t ACR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ACR_LATENCY =       // Latency
        bit_field_t<0, 0xf>::value<X>();
    static constexpr uint32_t ACR_PRFTEN = 0x100; // Prefetch enable
    static constexpr uint32_t ACR_ARTEN = 0x200;  // ART Accelerator Enable
    static constexpr uint32_t ACR_ARTRST = 0x800; // ART Accelerator reset

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
    static constexpr uint32_t CR_MER = 0x4;         // Mass Erase of sectors 0 to 11
    template<uint32_t X>
    static constexpr uint32_t CR_SNB =              // Sector number
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CR_PSIZE =            // Program size
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t CR_MER1 = 0x8000;     // Mass Erase of sectors 12 to 23
    static constexpr uint32_t CR_STRT = 0x10000;    // Start
    static constexpr uint32_t CR_EOPIE = 0x1000000; // End of operation interrupt enable
    static constexpr uint32_t CR_ERRIE = 0x2000000; // Error interrupt enable
    static constexpr uint32_t CR_LOCK = 0x80000000; // Lock

    static constexpr uint32_t OPTCR_RESET_VALUE = 0xfffaaed;
    static constexpr uint32_t OPTCR_OPTLOCK = 0x1;           // Option lock
    static constexpr uint32_t OPTCR_OPTSTRT = 0x2;           // Option start
    template<uint32_t X>
    static constexpr uint32_t OPTCR_BOR_LEV =                // BOR reset Level
        bit_field_t<2, 0x3>::value<X>();
    static constexpr uint32_t OPTCR_WWDG_SW = 0x10;          // User option bytes
    static constexpr uint32_t OPTCR_IWDG_SW = 0x20;          // User option bytes
    static constexpr uint32_t OPTCR_nRST_STOP = 0x40;        // User option bytes
    static constexpr uint32_t OPTCR_nRST_STDBY = 0x80;       // User option bytes
    template<uint32_t X>
    static constexpr uint32_t OPTCR_RDP =                    // Read protect
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OPTCR_nWRP =                   // Not write protect
        bit_field_t<16, 0xff>::value<X>();
    static constexpr uint32_t OPTCR_IWDG_STDBY = 0x40000000; // Independent watchdog counter freeze in standby mode
    static constexpr uint32_t OPTCR_IWDG_STOP = 0x80000000;  // Independent watchdog counter freeze in Stop mode

    static constexpr uint32_t OPTCR1_RESET_VALUE = 0xfff0000;
    template<uint32_t X>
    static constexpr uint32_t OPTCR1_BOOT_ADD0 =   // Boot base address when Boot pin =0
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OPTCR1_BOOT_ADD1 =   // Boot base address when Boot pin =1
        bit_field_t<16, 0xffff>::value<X>();
};


////
//
//      FLASH
//
////

struct stm32f767_flash_t
{
    volatile uint32_t ACR;     // [read-write] Flash access control register
    volatile uint32_t KEYR;    // [write-only] Flash key register
    volatile uint32_t OPTKEYR; // [write-only] Flash option key register
    volatile uint32_t SR;      // Status register
    volatile uint32_t CR;      // [read-write] Control register
    volatile uint32_t OPTCR;   // [read-write] Flash option control register
    volatile uint32_t OPTCR1;  // [read-write] Flash option control register 1

    static constexpr uint32_t ACR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ACR_LATENCY =       // Latency
        bit_field_t<0, 0xf>::value<X>();
    static constexpr uint32_t ACR_PRFTEN = 0x100; // Prefetch enable
    static constexpr uint32_t ACR_ARTEN = 0x200;  // ART Accelerator Enable
    static constexpr uint32_t ACR_ARTRST = 0x800; // ART Accelerator reset

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
    static constexpr uint32_t CR_MER = 0x4;         // Mass Erase of sectors 0 to 11
    template<uint32_t X>
    static constexpr uint32_t CR_SNB =              // Sector number
        bit_field_t<3, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CR_PSIZE =            // Program size
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t CR_MER1 = 0x8000;     // Mass Erase of sectors 12 to 23
    static constexpr uint32_t CR_STRT = 0x10000;    // Start
    static constexpr uint32_t CR_EOPIE = 0x1000000; // End of operation interrupt enable
    static constexpr uint32_t CR_ERRIE = 0x2000000; // Error interrupt enable
    static constexpr uint32_t CR_LOCK = 0x80000000; // Lock

    static constexpr uint32_t OPTCR_RESET_VALUE = 0xfffaaed;
    static constexpr uint32_t OPTCR_OPTLOCK = 0x1;           // Option lock
    static constexpr uint32_t OPTCR_OPTSTRT = 0x2;           // Option start
    template<uint32_t X>
    static constexpr uint32_t OPTCR_BOR_LEV =                // BOR reset Level
        bit_field_t<2, 0x3>::value<X>();
    static constexpr uint32_t OPTCR_WWDG_SW = 0x10;          // User option bytes
    static constexpr uint32_t OPTCR_IWDG_SW = 0x20;          // User option bytes
    static constexpr uint32_t OPTCR_nRST_STOP = 0x40;        // User option bytes
    static constexpr uint32_t OPTCR_nRST_STDBY = 0x80;       // User option bytes
    template<uint32_t X>
    static constexpr uint32_t OPTCR_RDP =                    // Read protect
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OPTCR_nWRP =                   // Not write protect
        bit_field_t<16, 0xfff>::value<X>();
    static constexpr uint32_t OPTCR_nDBOOT = 0x10000000;     // Dual Boot mode (valid only when nDBANK=0)
    static constexpr uint32_t OPTCR_nDBANK = 0x20000000;     // Not dual bank mode
    static constexpr uint32_t OPTCR_IWDG_STDBY = 0x40000000; // Independent watchdog counter freeze in standby mode
    static constexpr uint32_t OPTCR_IWDG_STOP = 0x80000000;  // Independent watchdog counter freeze in Stop mode

    static constexpr uint32_t OPTCR1_RESET_VALUE = 0xfff0000;
    template<uint32_t X>
    static constexpr uint32_t OPTCR1_BOOT_ADD0 =   // Boot base address when Boot pin =0
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OPTCR1_BOOT_ADD1 =   // Boot base address when Boot pin =1
        bit_field_t<16, 0xffff>::value<X>();
};


template<>
struct peripheral_t<STM32F722, FLASH>
{
    typedef stm32f722_flash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, FLASH>
{
    typedef stm32f722_flash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, FLASH>
{
    typedef stm32f722_flash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, FLASH>
{
    typedef stm32f722_flash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, FLASH>
{
    typedef stm32f730_flash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, FLASH>
{
    typedef stm32f745_flash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, FLASH>
{
    typedef stm32f745_flash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, FLASH>
{
    typedef stm32f746_flash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, FLASH>
{
    typedef stm32f746_flash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, FLASH>
{
    typedef stm32f746_flash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, Flash>
{
    typedef stm32f767_flash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, Flash>
{
    typedef stm32f767_flash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, Flash>
{
    typedef stm32f767_flash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, Flash>
{
    typedef stm32f767_flash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, Flash>
{
    typedef stm32f767_flash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, Flash>
{
    typedef stm32f767_flash_t T;
    static T& V;
};

using flash_t = peripheral_t<mcu_svd, FLASH>;
using flash_t = peripheral_t<mcu_svd, Flash>;

