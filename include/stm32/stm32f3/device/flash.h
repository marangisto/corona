#pragma once

////
//
//      STM32F3 Flash peripherals
//
////

////
//
//      Flash
//
////

struct stm32f301_flash_t
{
    volatile uint32_t ACR;     // Flash access control register
    volatile uint32_t KEYR;    // [write-only] Flash key register
    volatile uint32_t OPTKEYR; // [write-only] Flash option key register
    volatile uint32_t SR;      // Flash status register
    volatile uint32_t CR;      // [read-write] Flash control register
    volatile uint32_t AR;      // [write-only] Flash address register
    reserved_t<0x1> _0x1c;
    volatile uint32_t OBR;     // [read-only] Option byte register
    volatile uint32_t WRPR;    // [read-only] Write protection register

    static constexpr uint32_t ACR_RESET_VALUE = 0x30;
    template<uint32_t X>
    static constexpr uint32_t ACR_LATENCY =      // LATENCY
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t ACR_PRFTBE = 0x10; // PRFTBE
    static constexpr uint32_t ACR_PRFTBS = 0x20; // PRFTBS

    static constexpr uint32_t KEYR_RESET_VALUE = 0x0;

    static constexpr uint32_t OPTKEYR_RESET_VALUE = 0x0;

    static constexpr uint32_t SR_RESET_VALUE = 0x0;
    static constexpr uint32_t SR_EOP = 0x20;   // End of operation
    static constexpr uint32_t SR_WRPRT = 0x10; // Write protection error
    static constexpr uint32_t SR_PGERR = 0x4;  // Programming error
    static constexpr uint32_t SR_BSY = 0x1;    // Busy

    static constexpr uint32_t CR_RESET_VALUE = 0x80;
    static constexpr uint32_t CR_FORCE_OPTLOAD = 0x2000; // Force option byte loading
    static constexpr uint32_t CR_EOPIE = 0x1000;         // End of operation interrupt enable
    static constexpr uint32_t CR_ERRIE = 0x400;          // Error interrupt enable
    static constexpr uint32_t CR_OPTWRE = 0x200;         // Option bytes write enable
    static constexpr uint32_t CR_LOCK = 0x80;            // Lock
    static constexpr uint32_t CR_STRT = 0x40;            // Start
    static constexpr uint32_t CR_OPTER = 0x20;           // Option byte erase
    static constexpr uint32_t CR_OPTPG = 0x10;           // Option byte programming
    static constexpr uint32_t CR_MER = 0x4;              // Mass erase
    static constexpr uint32_t CR_PER = 0x2;              // Page erase
    static constexpr uint32_t CR_PG = 0x1;               // Programming

    static constexpr uint32_t AR_RESET_VALUE = 0x0;

    static constexpr uint32_t OBR_RESET_VALUE = 0xffffff02;
    static constexpr uint32_t OBR_OPTERR = 0x1;          // Option byte error
    template<uint32_t X>
    static constexpr uint32_t OBR_RDPRT =                // Read protection Level status
        bit_field_t<1, 0x3>::value<X>();
    static constexpr uint32_t OBR_WDG_SW = 0x100;        // WDG_SW
    static constexpr uint32_t OBR_nRST_STOP = 0x200;     // nRST_STOP
    static constexpr uint32_t OBR_nRST_STDBY = 0x400;    // nRST_STDBY
    static constexpr uint32_t OBR_BOOT1 = 0x1000;        // BOOT1
    static constexpr uint32_t OBR_VDDA_MONITOR = 0x2000; // VDDA_MONITOR
    template<uint32_t X>
    static constexpr uint32_t OBR_Data0 =                // Data0
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OBR_Data1 =                // Data1
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t WRPR_RESET_VALUE = 0xffffffff;
};


////
//
//      Flash
//
////

struct stm32f302_flash_t
{
    volatile uint32_t ACR;     // Flash access control register
    volatile uint32_t KEYR;    // [write-only] Flash key register
    volatile uint32_t OPTKEYR; // [write-only] Flash option key register
    volatile uint32_t SR;      // Flash status register
    volatile uint32_t CR;      // [read-write] Flash control register
    volatile uint32_t AR;      // [write-only] Flash address register
    reserved_t<0x1> _0x1c;
    volatile uint32_t OBR;     // [read-only] Option byte register
    volatile uint32_t WRPR;    // [read-only] Write protection register

    static constexpr uint32_t ACR_RESET_VALUE = 0x30;
    template<uint32_t X>
    static constexpr uint32_t ACR_LATENCY =      // LATENCY
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t ACR_PRFTBE = 0x10; // PRFTBE
    static constexpr uint32_t ACR_PRFTBS = 0x20; // PRFTBS

    static constexpr uint32_t KEYR_RESET_VALUE = 0x0;

    static constexpr uint32_t OPTKEYR_RESET_VALUE = 0x0;

    static constexpr uint32_t SR_RESET_VALUE = 0x0;
    static constexpr uint32_t SR_EOP = 0x20;   // End of operation
    static constexpr uint32_t SR_WRPRT = 0x10; // Write protection error
    static constexpr uint32_t SR_PGERR = 0x4;  // Programming error
    static constexpr uint32_t SR_BSY = 0x1;    // Busy

    static constexpr uint32_t CR_RESET_VALUE = 0x80;
    static constexpr uint32_t CR_FORCE_OPTLOAD = 0x2000; // Force option byte loading
    static constexpr uint32_t CR_EOPIE = 0x1000;         // End of operation interrupt enable
    static constexpr uint32_t CR_ERRIE = 0x400;          // Error interrupt enable
    static constexpr uint32_t CR_OPTWRE = 0x200;         // Option bytes write enable
    static constexpr uint32_t CR_LOCK = 0x80;            // Lock
    static constexpr uint32_t CR_STRT = 0x40;            // Start
    static constexpr uint32_t CR_OPTER = 0x20;           // Option byte erase
    static constexpr uint32_t CR_OPTPG = 0x10;           // Option byte programming
    static constexpr uint32_t CR_MER = 0x4;              // Mass erase
    static constexpr uint32_t CR_PER = 0x2;              // Page erase
    static constexpr uint32_t CR_PG = 0x1;               // Programming

    static constexpr uint32_t AR_RESET_VALUE = 0x0;

    static constexpr uint32_t OBR_RESET_VALUE = 0xffffff02;
    static constexpr uint32_t OBR_OPTERR = 0x1;               // Option byte error
    static constexpr uint32_t OBR_LEVEL1_PROT = 0x2;          // Level 1 protection status
    static constexpr uint32_t OBR_LEVEL2_PROT = 0x4;          // Level 2 protection status
    static constexpr uint32_t OBR_WDG_SW = 0x100;             // WDG_SW
    static constexpr uint32_t OBR_nRST_STOP = 0x200;          // nRST_STOP
    static constexpr uint32_t OBR_nRST_STDBY = 0x400;         // nRST_STDBY
    static constexpr uint32_t OBR_BOOT1 = 0x1000;             // BOOT1
    static constexpr uint32_t OBR_VDDA_MONITOR = 0x2000;      // VDDA_MONITOR
    static constexpr uint32_t OBR_SRAM_PARITY_CHECK = 0x4000; // SRAM_PARITY_CHECK
    template<uint32_t X>
    static constexpr uint32_t OBR_Data0 =                     // Data0
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OBR_Data1 =                     // Data1
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t WRPR_RESET_VALUE = 0xffffffff;
};


////
//
//      Flash
//
////

struct stm32f373_flash_t
{
    volatile uint32_t ACR;     // Flash access control register
    volatile uint32_t KEYR;    // [write-only] Flash key register
    volatile uint32_t OPTKEYR; // [write-only] Flash option key register
    volatile uint32_t SR;      // Flash status register
    volatile uint32_t CR;      // [read-write] Flash control register
    volatile uint32_t AR;      // [write-only] Flash address register
    reserved_t<0x1> _0x1c;
    volatile uint32_t OBR;     // [read-only] Option byte register
    volatile uint32_t WRPR;    // [read-only] Write protection register

    static constexpr uint32_t ACR_RESET_VALUE = 0x30;
    template<uint32_t X>
    static constexpr uint32_t ACR_LATENCY =      // LATENCY
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t ACR_PRFTBE = 0x10; // PRFTBE
    static constexpr uint32_t ACR_PRFTBS = 0x20; // PRFTBS

    static constexpr uint32_t KEYR_RESET_VALUE = 0x0;

    static constexpr uint32_t OPTKEYR_RESET_VALUE = 0x0;

    static constexpr uint32_t SR_RESET_VALUE = 0x0;
    static constexpr uint32_t SR_EOP = 0x20;   // End of operation
    static constexpr uint32_t SR_WRPRT = 0x10; // Write protection error
    static constexpr uint32_t SR_PGERR = 0x4;  // Programming error
    static constexpr uint32_t SR_BSY = 0x1;    // Busy

    static constexpr uint32_t CR_RESET_VALUE = 0x80;
    static constexpr uint32_t CR_FORCE_OPTLOAD = 0x2000; // Force option byte loading
    static constexpr uint32_t CR_EOPIE = 0x1000;         // End of operation interrupt enable
    static constexpr uint32_t CR_ERRIE = 0x400;          // Error interrupt enable
    static constexpr uint32_t CR_OPTWRE = 0x200;         // Option bytes write enable
    static constexpr uint32_t CR_LOCK = 0x80;            // Lock
    static constexpr uint32_t CR_STRT = 0x40;            // Start
    static constexpr uint32_t CR_OPTER = 0x20;           // Option byte erase
    static constexpr uint32_t CR_OPTPG = 0x10;           // Option byte programming
    static constexpr uint32_t CR_MER = 0x4;              // Mass erase
    static constexpr uint32_t CR_PER = 0x2;              // Page erase
    static constexpr uint32_t CR_PG = 0x1;               // Programming

    static constexpr uint32_t AR_RESET_VALUE = 0x0;

    static constexpr uint32_t OBR_RESET_VALUE = 0xffffff02;
    static constexpr uint32_t OBR_OPTERR = 0x1;                 // Option byte error
    static constexpr uint32_t OBR_LEVEL1_PROT = 0x2;            // Level 1 protection status
    static constexpr uint32_t OBR_LEVEL2_PROT = 0x4;            // Level 2 protection status
    static constexpr uint32_t OBR_WDG_SW = 0x100;               // WDG_SW
    static constexpr uint32_t OBR_nRST_STOP = 0x200;            // nRST_STOP
    static constexpr uint32_t OBR_nRST_STDBY = 0x400;           // nRST_STDBY
    static constexpr uint32_t OBR_BOOT1 = 0x1000;               // BOOT1
    static constexpr uint32_t OBR_VDDA_MONITOR = 0x2000;        // VDDA_MONITOR
    static constexpr uint32_t OBR_SRAM_PARITY_CHECK = 0x4000;   // SRAM_PARITY_CHECK
    static constexpr uint32_t OBR_SDADC12_VDD_MONITOR = 0x8000; // SDADC12_VDD_MONITOR
    template<uint32_t X>
    static constexpr uint32_t OBR_Data0 =                       // Data0
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OBR_Data1 =                       // Data1
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t WRPR_RESET_VALUE = 0xffffffff;
};


template<>
struct peripheral_t<STM32F301, FLASH>
{
    typedef stm32f301_flash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F302, FLASH>
{
    typedef stm32f302_flash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F303, FLASH>
{
    typedef stm32f302_flash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F3x4, FLASH>
{
    typedef stm32f302_flash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F373, FLASH>
{
    typedef stm32f373_flash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F3x8, FLASH>
{
    typedef stm32f373_flash_t T;
    static T& V;
};

using flash_t = peripheral_t<mcu_svd, FLASH>;

