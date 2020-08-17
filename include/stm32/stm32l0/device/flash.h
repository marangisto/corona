#pragma once

////
//
//      STM32L0 FLASH peripherals
//
///

// FLASH: Flash

struct stm32l0x0_flash_t
{
    volatile uint32_t ACR; // Access control register
    volatile uint32_t PECR; // Program/erase control register
    volatile uint32_t PDKEYR; // Power down key register
    volatile uint32_t PEKEYR; // Program/erase key register
    volatile uint32_t PRGKEYR; // Program memory key register
    volatile uint32_t OPTKEYR; // Option byte key register
    volatile uint32_t SR; // Status register
    volatile uint32_t OPTR; // Option byte register
    volatile uint32_t WRPROT1; // Write protection register
    reserved_t<0x17> _0x24;
    volatile uint32_t WRPROT2; // Write protection register

    static constexpr uint32_t ACR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ACR_LATENCY = 0x1; // Latency
    static constexpr uint32_t ACR_PRFTEN = 0x2; // Prefetch enable
    static constexpr uint32_t ACR_SLEEP_PD = 0x8; // Flash mode during Sleep
    static constexpr uint32_t ACR_RUN_PD = 0x10; // Flash mode during Run
    static constexpr uint32_t ACR_DISAB_BUF = 0x20; // Disable Buffer
    static constexpr uint32_t ACR_PRE_READ = 0x40; // Pre-read data address

    static constexpr uint32_t PECR_RESET_VALUE = 0x7; // Reset value
    static constexpr uint32_t PECR_PELOCK = 0x1; // FLASH_PECR and data EEPROM lock
    static constexpr uint32_t PECR_PRGLOCK = 0x2; // Program memory lock
    static constexpr uint32_t PECR_OPTLOCK = 0x4; // Option bytes block lock
    static constexpr uint32_t PECR_PROG = 0x8; // Program memory selection
    static constexpr uint32_t PECR_DATA = 0x10; // Data EEPROM selection
    static constexpr uint32_t PECR_FIX = 0x100; // Fixed time data write for Byte, Half Word and Word programming
    static constexpr uint32_t PECR_ERASE = 0x200; // Page or Double Word erase mode
    static constexpr uint32_t PECR_FPRG = 0x400; // Half Page/Double Word programming mode
    static constexpr uint32_t PECR_PARALLELBANK = 0x8000; // Parallel bank mode
    static constexpr uint32_t PECR_EOPIE = 0x10000; // End of programming interrupt enable
    static constexpr uint32_t PECR_ERRIE = 0x20000; // Error interrupt enable
    static constexpr uint32_t PECR_OBL_LAUNCH = 0x40000; // Launch the option byte loading
    static constexpr uint32_t PECR_NZDISABLE = 0x800000; // Non-Zero check notification disable

    static constexpr uint32_t PDKEYR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> PDKEYR_PDKEYR; // RUN_PD in FLASH_ACR key

    static constexpr uint32_t PEKEYR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> PEKEYR_PEKEYR; // FLASH_PEC and data EEPROM key

    static constexpr uint32_t PRGKEYR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> PRGKEYR_PRGKEYR; // Program memory key

    static constexpr uint32_t OPTKEYR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> OPTKEYR_OPTKEYR; // Option byte key

    static constexpr uint32_t SR_RESET_VALUE = 0x4; // Reset value
    static constexpr uint32_t SR_BSY = 0x1; // Write/erase operations in progress
    static constexpr uint32_t SR_EOP = 0x2; // End of operation
    static constexpr uint32_t SR_ENDHV = 0x4; // End of high voltage
    static constexpr uint32_t SR_READY = 0x8; // Flash memory module ready after low power mode
    static constexpr uint32_t SR_WRPERR = 0x100; // Write protected error
    static constexpr uint32_t SR_PGAERR = 0x200; // Programming alignment error
    static constexpr uint32_t SR_SIZERR = 0x400; // Size error
    static constexpr uint32_t SR_OPTVERR = 0x800; // Option validity error
    static constexpr uint32_t SR_RDERR = 0x2000; // RDERR
    static constexpr uint32_t SR_NOTZEROERR = 0x10000; // NOTZEROERR
    static constexpr uint32_t SR_FWWERR = 0x20000; // FWWERR

    static constexpr uint32_t OPTR_RESET_VALUE = 0xf80000; // Reset value
    typedef bit_field_t<0, 0xff> OPTR_RDPROT; // Read protection
    static constexpr uint32_t OPTR_WPRMOD = 0x100; // WPRMOD
    typedef bit_field_t<16, 0xf> OPTR_BOR_LEV; // BOR_LEV
    static constexpr uint32_t OPTR_WDG_SW = 0x100000; // WDG_SW
    static constexpr uint32_t OPTR_NRST_STOP = 0x200000; // nRST_STOP
    static constexpr uint32_t OPTR_NRST_STDBY = 0x400000; // nRST_STDBY
    static constexpr uint32_t OPTR_BFB2 = 0x800000; // BFB2
    static constexpr uint32_t OPTR_NBOOT1 = 0x80000000; // nBOOT1

    static constexpr uint32_t WRPROT1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> WRPROT1_WRPROT1; // Write protection


    static constexpr uint32_t WRPROT2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> WRPROT2_WRPROT2; // Write protection
};

template<>
struct peripheral_t<STM32L0x0, FLASH>
{
    using T = stm32l0x0_flash_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x1, FLASH>
{
    using T = stm32l0x0_flash_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x2, FLASH>
{
    using T = stm32l0x0_flash_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x3, FLASH>
{
    using T = stm32l0x0_flash_t;
    static T& V;
};

using flash_t = peripheral_t<svd, FLASH>;
