#pragma once

////
//
//      STM32F7 FLASH peripherals
//
///

// FLASH: FLASH

struct stm32f722_flash_t
{
    volatile uint32_t ACR; // Flash access control register
    volatile uint32_t KEYR; // Flash key register
    volatile uint32_t OPTKEYR; // Flash option key register
    volatile uint32_t SR; // Status register
    volatile uint32_t CR; // Control register
    volatile uint32_t OPTCR; // Flash option control register
    volatile uint32_t OPTCR1; // Flash option control register 1
    volatile uint32_t OPTCR2; // Flash option control register

    static constexpr uint32_t ACR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> ACR_LATENCY; // Latency
    static constexpr uint32_t ACR_PRFTEN = 0x100; // Prefetch enable
    static constexpr uint32_t ACR_ARTEN = 0x200; // ART Accelerator Enable
    static constexpr uint32_t ACR_ARTRST = 0x800; // ART Accelerator reset

    static constexpr uint32_t KEYR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR_KEY; // FPEC key

    static constexpr uint32_t OPTKEYR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> OPTKEYR_OPTKEYR; // Option byte key

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_EOP = 0x1; // End of operation
    static constexpr uint32_t SR_OPERR = 0x2; // Operation error
    static constexpr uint32_t SR_WRPERR = 0x10; // Write protection error
    static constexpr uint32_t SR_PGAERR = 0x20; // Programming alignment error
    static constexpr uint32_t SR_PGPERR = 0x40; // Programming parallelism error
    static constexpr uint32_t SR_ERSERR = 0x80; // Erase Sequence Error
    static constexpr uint32_t SR_BSY = 0x10000; // Busy

    static constexpr uint32_t CR_RESET_VALUE = 0x80000000; // Reset value
    static constexpr uint32_t CR_PG = 0x1; // Programming
    static constexpr uint32_t CR_SER = 0x2; // Sector Erase
    static constexpr uint32_t CR_MER = 0x4; // Mass Erase of sectors 0 to 11
    typedef bit_field_t<3, 0x1f> CR_SNB; // Sector number
    typedef bit_field_t<8, 0x3> CR_PSIZE; // Program size
    static constexpr uint32_t CR_STRT = 0x10000; // Start
    static constexpr uint32_t CR_EOPIE = 0x1000000; // End of operation interrupt enable
    static constexpr uint32_t CR_ERRIE = 0x2000000; // Error interrupt enable
    static constexpr uint32_t CR_LOCK = 0x80000000; // Lock
    static constexpr uint32_t CR_RDERRIE = 0x4000000; // PCROP error interrupt enable

    static constexpr uint32_t OPTCR_RESET_VALUE = 0xfffaaed; // Reset value
    static constexpr uint32_t OPTCR_OPTLOCK = 0x1; // Option lock
    static constexpr uint32_t OPTCR_OPTSTRT = 0x2; // Option start
    typedef bit_field_t<2, 0x3> OPTCR_BOR_LEV; // BOR reset Level
    static constexpr uint32_t OPTCR_IWDG_SW = 0x20; // WDG_SW User option bytes
    static constexpr uint32_t OPTCR_NRST_STOP = 0x40; // nRST_STOP User option bytes
    static constexpr uint32_t OPTCR_NRST_STDBY = 0x80; // nRST_STDBY User option bytes
    typedef bit_field_t<8, 0xff> OPTCR_RDP; // Read protect
    typedef bit_field_t<16, 0xfff> OPTCR_NWRP; // Not write protect
    static constexpr uint32_t OPTCR_WWDG_SW = 0x10; // User option bytes
    static constexpr uint32_t OPTCR_IWDG_STOP = 0x80000000; // Independent watchdog counter freeze in Stop mode
    static constexpr uint32_t OPTCR_IWDG_STDBY = 0x40000000; // Independent watchdog counter freeze in standby mode

    static constexpr uint32_t OPTCR1_RESET_VALUE = 0xfff0000; // Reset value
    typedef bit_field_t<16, 0xffff> OPTCR1_BOOT_ADD1; // Boot base address when Boot pin =1
    typedef bit_field_t<0, 0xffff> OPTCR1_BOOT_ADD0; // Boot base address when Boot pin =0

    static constexpr uint32_t OPTCR2_RESET_VALUE = 0x800000ff; // Reset value
    static constexpr uint32_t OPTCR2_PCROP_RDP = 0x80000000; // PCROP zone preserved when RDP level decreased
    typedef bit_field_t<0, 0xff> OPTCR2_PCROP; // PCROP option byte
};

// FLASH: FLASH

struct stm32f730_flash_t
{
    volatile uint32_t ACR; // Flash access control register
    volatile uint32_t KEYR; // Flash key register
    volatile uint32_t OPTKEYR; // Flash option key register
    volatile uint32_t SR; // Status register
    volatile uint32_t CR; // Control register
    volatile uint32_t OPTCR; // Flash option control register
    volatile uint32_t OPTCR1; // Flash option control register 1
    volatile uint32_t OPTCR2; // Flash option control register

    static constexpr uint32_t ACR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> ACR_LATENCY; // Latency
    static constexpr uint32_t ACR_PRFTEN = 0x100; // Prefetch enable
    static constexpr uint32_t ACR_ARTEN = 0x200; // ART Accelerator Enable
    static constexpr uint32_t ACR_ARTRST = 0x800; // ART Accelerator reset

    static constexpr uint32_t KEYR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR_KEY; // FPEC key

    static constexpr uint32_t OPTKEYR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> OPTKEYR_OPTKEYR; // Option byte key

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_EOP = 0x1; // End of operation
    static constexpr uint32_t SR_OPERR = 0x2; // Operation error
    static constexpr uint32_t SR_WRPERR = 0x10; // Write protection error
    static constexpr uint32_t SR_PGAERR = 0x20; // Programming alignment error
    static constexpr uint32_t SR_PGPERR = 0x40; // Programming parallelism error
    static constexpr uint32_t SR_ERSERR = 0x80; // Erase Sequence Error
    static constexpr uint32_t SR_BSY = 0x10000; // Busy
    static constexpr uint32_t SR_RDERR = 0x100; // RDERR

    static constexpr uint32_t CR_RESET_VALUE = 0x80000000; // Reset value
    static constexpr uint32_t CR_PG = 0x1; // Programming
    static constexpr uint32_t CR_SER = 0x2; // Sector Erase
    static constexpr uint32_t CR_MER = 0x4; // Mass Erase of sectors 0 to 11
    typedef bit_field_t<3, 0xf> CR_SNB; // Sector number
    typedef bit_field_t<8, 0x3> CR_PSIZE; // Program size
    static constexpr uint32_t CR_STRT = 0x10000; // Start
    static constexpr uint32_t CR_EOPIE = 0x1000000; // End of operation interrupt enable
    static constexpr uint32_t CR_ERRIE = 0x2000000; // Error interrupt enable
    static constexpr uint32_t CR_LOCK = 0x80000000; // Lock
    static constexpr uint32_t CR_RDERRIE = 0x4000000; // PCROP error interrupt enable

    static constexpr uint32_t OPTCR_RESET_VALUE = 0xc0ffaafd; // Reset value
    static constexpr uint32_t OPTCR_OPTLOCK = 0x1; // Option lock
    static constexpr uint32_t OPTCR_OPTSTRT = 0x2; // Option start
    typedef bit_field_t<2, 0x3> OPTCR_BOR_LEV; // BOR reset Level
    static constexpr uint32_t OPTCR_IWDG_SW = 0x20; // WDG_SW User option bytes
    static constexpr uint32_t OPTCR_NRST_STOP = 0x40; // nRST_STOP User option bytes
    static constexpr uint32_t OPTCR_NRST_STDBY = 0x80; // nRST_STDBY User option bytes
    typedef bit_field_t<8, 0xff> OPTCR_RDP; // Read protect
    typedef bit_field_t<16, 0xff> OPTCR_NWRP; // Not write protect
    static constexpr uint32_t OPTCR_WWDG_SW = 0x10; // User option bytes
    static constexpr uint32_t OPTCR_IWDG_STOP = 0x80000000; // Independent watchdog counter freeze in Stop mode
    static constexpr uint32_t OPTCR_IWDG_STDBY = 0x40000000; // Independent watchdog counter freeze in standby mode

    static constexpr uint32_t OPTCR1_RESET_VALUE = 0x400080; // Reset value
    typedef bit_field_t<16, 0xffff> OPTCR1_BOOT_ADD1; // Boot base address when Boot pin =1
    typedef bit_field_t<0, 0xffff> OPTCR1_BOOT_ADD0; // Boot base address when Boot pin =0

    static constexpr uint32_t OPTCR2_RESET_VALUE = 0x800000ff; // Reset value
    static constexpr uint32_t OPTCR2_PCROP_RDP = 0x80000000; // PCROP zone preserved when RDP level decreased
    typedef bit_field_t<0, 0xff> OPTCR2_PCROPI; // PCROP option byte
};

// FLASH: FLASH

struct stm32f745_flash_t
{
    volatile uint32_t ACR; // Flash access control register
    volatile uint32_t KEYR; // Flash key register
    volatile uint32_t OPTKEYR; // Flash option key register
    volatile uint32_t SR; // Status register
    volatile uint32_t CR; // Control register
    volatile uint32_t OPTCR; // Flash option control register
    volatile uint32_t OPTCR1; // Flash option control register 1

    static constexpr uint32_t ACR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> ACR_LATENCY; // Latency
    static constexpr uint32_t ACR_PRFTEN = 0x100; // Prefetch enable
    static constexpr uint32_t ACR_ARTEN = 0x200; // ART Accelerator Enable
    static constexpr uint32_t ACR_ARTRST = 0x800; // ART Accelerator reset

    static constexpr uint32_t KEYR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR_KEY; // FPEC key

    static constexpr uint32_t OPTKEYR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> OPTKEYR_OPTKEY; // Option byte key

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_EOP = 0x1; // End of operation
    static constexpr uint32_t SR_OPERR = 0x2; // Operation error
    static constexpr uint32_t SR_WRPERR = 0x10; // Write protection error
    static constexpr uint32_t SR_PGAERR = 0x20; // Programming alignment error
    static constexpr uint32_t SR_PGPERR = 0x40; // Programming parallelism error
    static constexpr uint32_t SR_ERSERR = 0x80; // Erase Sequence Error
    static constexpr uint32_t SR_BSY = 0x10000; // Busy

    static constexpr uint32_t CR_RESET_VALUE = 0x80000000; // Reset value
    static constexpr uint32_t CR_PG = 0x1; // Programming
    static constexpr uint32_t CR_SER = 0x2; // Sector Erase
    static constexpr uint32_t CR_MER = 0x4; // Mass Erase of sectors 0 to 11
    typedef bit_field_t<3, 0x1f> CR_SNB; // Sector number
    typedef bit_field_t<8, 0x3> CR_PSIZE; // Program size
    static constexpr uint32_t CR_MER1 = 0x8000; // Mass Erase of sectors 12 to 23
    static constexpr uint32_t CR_STRT = 0x10000; // Start
    static constexpr uint32_t CR_EOPIE = 0x1000000; // End of operation interrupt enable
    static constexpr uint32_t CR_ERRIE = 0x2000000; // Error interrupt enable
    static constexpr uint32_t CR_LOCK = 0x80000000; // Lock

    static constexpr uint32_t OPTCR_RESET_VALUE = 0xfffaaed; // Reset value
    static constexpr uint32_t OPTCR_OPTLOCK = 0x1; // Option lock
    static constexpr uint32_t OPTCR_OPTSTRT = 0x2; // Option start
    typedef bit_field_t<2, 0x3> OPTCR_BOR_LEV; // BOR reset Level
    static constexpr uint32_t OPTCR_WWDG_SW = 0x10; // User option bytes
    static constexpr uint32_t OPTCR_IWDG_SW = 0x20; // User option bytes
    static constexpr uint32_t OPTCR_NRST_STOP = 0x40; // User option bytes
    static constexpr uint32_t OPTCR_NRST_STDBY = 0x80; // User option bytes
    typedef bit_field_t<8, 0xff> OPTCR_RDP; // Read protect
    typedef bit_field_t<16, 0xfff> OPTCR_NWRP; // Not write protect
    static constexpr uint32_t OPTCR_NDBOOT = 0x10000000; // Dual Boot mode (valid only when nDBANK=0)
    static constexpr uint32_t OPTCR_NDBANK = 0x20000000; // Not dual bank mode
    static constexpr uint32_t OPTCR_IWDG_STDBY = 0x40000000; // Independent watchdog counter freeze in standby mode
    static constexpr uint32_t OPTCR_IWDG_STOP = 0x80000000; // Independent watchdog counter freeze in Stop mode

    static constexpr uint32_t OPTCR1_RESET_VALUE = 0xfff0000; // Reset value
    typedef bit_field_t<0, 0xffff> OPTCR1_BOOT_ADD0; // Boot base address when Boot pin =0
    typedef bit_field_t<16, 0xffff> OPTCR1_BOOT_ADD1; // Boot base address when Boot pin =1
};

// FLASH: FLASH

struct stm32f746_flash_t
{
    volatile uint32_t ACR; // Flash access control register
    volatile uint32_t KEYR; // Flash key register
    volatile uint32_t OPTKEYR; // Flash option key register
    volatile uint32_t SR; // Status register
    volatile uint32_t CR; // Control register
    volatile uint32_t OPTCR; // Flash option control register
    volatile uint32_t OPTCR1; // Flash option control register 1

    static constexpr uint32_t ACR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> ACR_LATENCY; // Latency
    static constexpr uint32_t ACR_PRFTEN = 0x100; // Prefetch enable
    static constexpr uint32_t ACR_ARTEN = 0x200; // ART Accelerator Enable
    static constexpr uint32_t ACR_ARTRST = 0x800; // ART Accelerator reset

    static constexpr uint32_t KEYR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR_KEY; // FPEC key

    static constexpr uint32_t OPTKEYR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> OPTKEYR_OPTKEY; // Option byte key

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_EOP = 0x1; // End of operation
    static constexpr uint32_t SR_OPERR = 0x2; // Operation error
    static constexpr uint32_t SR_WRPERR = 0x10; // Write protection error
    static constexpr uint32_t SR_PGAERR = 0x20; // Programming alignment error
    static constexpr uint32_t SR_PGPERR = 0x40; // Programming parallelism error
    static constexpr uint32_t SR_PGSERR = 0x80; // Programming sequence error
    static constexpr uint32_t SR_BSY = 0x10000; // Busy

    static constexpr uint32_t CR_RESET_VALUE = 0x80000000; // Reset value
    static constexpr uint32_t CR_PG = 0x1; // Programming
    static constexpr uint32_t CR_SER = 0x2; // Sector Erase
    static constexpr uint32_t CR_MER = 0x4; // Mass Erase of sectors 0 to 11
    typedef bit_field_t<3, 0x1f> CR_SNB; // Sector number
    typedef bit_field_t<8, 0x3> CR_PSIZE; // Program size
    static constexpr uint32_t CR_MER1 = 0x8000; // Mass Erase of sectors 12 to 23
    static constexpr uint32_t CR_STRT = 0x10000; // Start
    static constexpr uint32_t CR_EOPIE = 0x1000000; // End of operation interrupt enable
    static constexpr uint32_t CR_ERRIE = 0x2000000; // Error interrupt enable
    static constexpr uint32_t CR_LOCK = 0x80000000; // Lock

    static constexpr uint32_t OPTCR_RESET_VALUE = 0xfffaaed; // Reset value
    static constexpr uint32_t OPTCR_OPTLOCK = 0x1; // Option lock
    static constexpr uint32_t OPTCR_OPTSTRT = 0x2; // Option start
    typedef bit_field_t<2, 0x3> OPTCR_BOR_LEV; // BOR reset Level
    static constexpr uint32_t OPTCR_WWDG_SW = 0x10; // User option bytes
    static constexpr uint32_t OPTCR_IWDG_SW = 0x20; // User option bytes
    static constexpr uint32_t OPTCR_NRST_STOP = 0x40; // User option bytes
    static constexpr uint32_t OPTCR_NRST_STDBY = 0x80; // User option bytes
    typedef bit_field_t<8, 0xff> OPTCR_RDP; // Read protect
    typedef bit_field_t<16, 0xff> OPTCR_NWRP; // Not write protect
    static constexpr uint32_t OPTCR_IWDG_STDBY = 0x40000000; // Independent watchdog counter freeze in standby mode
    static constexpr uint32_t OPTCR_IWDG_STOP = 0x80000000; // Independent watchdog counter freeze in Stop mode

    static constexpr uint32_t OPTCR1_RESET_VALUE = 0xfff0000; // Reset value
    typedef bit_field_t<0, 0xffff> OPTCR1_BOOT_ADD0; // Boot base address when Boot pin =0
    typedef bit_field_t<16, 0xffff> OPTCR1_BOOT_ADD1; // Boot base address when Boot pin =1
};

// FLASH: FLASH

struct stm32f767_flash_t
{
    volatile uint32_t ACR; // Flash access control register
    volatile uint32_t KEYR; // Flash key register
    volatile uint32_t OPTKEYR; // Flash option key register
    volatile uint32_t SR; // Status register
    volatile uint32_t CR; // Control register
    volatile uint32_t OPTCR; // Flash option control register
    volatile uint32_t OPTCR1; // Flash option control register 1

    static constexpr uint32_t ACR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> ACR_LATENCY; // Latency
    static constexpr uint32_t ACR_PRFTEN = 0x100; // Prefetch enable
    static constexpr uint32_t ACR_ARTEN = 0x200; // ART Accelerator Enable
    static constexpr uint32_t ACR_ARTRST = 0x800; // ART Accelerator reset

    static constexpr uint32_t KEYR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR_KEY; // FPEC key

    static constexpr uint32_t OPTKEYR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> OPTKEYR_OPTKEY; // Option byte key

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_EOP = 0x1; // End of operation
    static constexpr uint32_t SR_OPERR = 0x2; // Operation error
    static constexpr uint32_t SR_WRPERR = 0x10; // Write protection error
    static constexpr uint32_t SR_PGAERR = 0x20; // Programming alignment error
    static constexpr uint32_t SR_PGPERR = 0x40; // Programming parallelism error
    static constexpr uint32_t SR_PGSERR = 0x80; // Programming sequence error
    static constexpr uint32_t SR_BSY = 0x10000; // Busy

    static constexpr uint32_t CR_RESET_VALUE = 0x80000000; // Reset value
    static constexpr uint32_t CR_PG = 0x1; // Programming
    static constexpr uint32_t CR_SER = 0x2; // Sector Erase
    static constexpr uint32_t CR_MER = 0x4; // Mass Erase of sectors 0 to 11
    typedef bit_field_t<3, 0x1f> CR_SNB; // Sector number
    typedef bit_field_t<8, 0x3> CR_PSIZE; // Program size
    static constexpr uint32_t CR_MER1 = 0x8000; // Mass Erase of sectors 12 to 23
    static constexpr uint32_t CR_STRT = 0x10000; // Start
    static constexpr uint32_t CR_EOPIE = 0x1000000; // End of operation interrupt enable
    static constexpr uint32_t CR_ERRIE = 0x2000000; // Error interrupt enable
    static constexpr uint32_t CR_LOCK = 0x80000000; // Lock

    static constexpr uint32_t OPTCR_RESET_VALUE = 0xfffaaed; // Reset value
    static constexpr uint32_t OPTCR_OPTLOCK = 0x1; // Option lock
    static constexpr uint32_t OPTCR_OPTSTRT = 0x2; // Option start
    typedef bit_field_t<2, 0x3> OPTCR_BOR_LEV; // BOR reset Level
    static constexpr uint32_t OPTCR_WWDG_SW = 0x10; // User option bytes
    static constexpr uint32_t OPTCR_IWDG_SW = 0x20; // User option bytes
    static constexpr uint32_t OPTCR_NRST_STOP = 0x40; // User option bytes
    static constexpr uint32_t OPTCR_NRST_STDBY = 0x80; // User option bytes
    typedef bit_field_t<8, 0xff> OPTCR_RDP; // Read protect
    typedef bit_field_t<16, 0xfff> OPTCR_NWRP; // Not write protect
    static constexpr uint32_t OPTCR_NDBOOT = 0x10000000; // Dual Boot mode (valid only when nDBANK=0)
    static constexpr uint32_t OPTCR_NDBANK = 0x20000000; // Not dual bank mode
    static constexpr uint32_t OPTCR_IWDG_STDBY = 0x40000000; // Independent watchdog counter freeze in standby mode
    static constexpr uint32_t OPTCR_IWDG_STOP = 0x80000000; // Independent watchdog counter freeze in Stop mode

    static constexpr uint32_t OPTCR1_RESET_VALUE = 0xfff0000; // Reset value
    typedef bit_field_t<0, 0xffff> OPTCR1_BOOT_ADD0; // Boot base address when Boot pin =0
    typedef bit_field_t<16, 0xffff> OPTCR1_BOOT_ADD1; // Boot base address when Boot pin =1
};

template<>
struct peripheral_t<STM32F722, FLASH>
{
    static constexpr periph_t P = FLASH;
    using T = stm32f722_flash_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, FLASH>
{
    static constexpr periph_t P = FLASH;
    using T = stm32f722_flash_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, FLASH>
{
    static constexpr periph_t P = FLASH;
    using T = stm32f722_flash_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, FLASH>
{
    static constexpr periph_t P = FLASH;
    using T = stm32f722_flash_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, FLASH>
{
    static constexpr periph_t P = FLASH;
    using T = stm32f730_flash_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, FLASH>
{
    static constexpr periph_t P = FLASH;
    using T = stm32f745_flash_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, FLASH>
{
    static constexpr periph_t P = FLASH;
    using T = stm32f745_flash_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, FLASH>
{
    static constexpr periph_t P = FLASH;
    using T = stm32f746_flash_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, FLASH>
{
    static constexpr periph_t P = FLASH;
    using T = stm32f746_flash_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, FLASH>
{
    static constexpr periph_t P = FLASH;
    using T = stm32f746_flash_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, FLASH>
{
    static constexpr periph_t P = FLASH;
    using T = stm32f767_flash_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, FLASH>
{
    static constexpr periph_t P = FLASH;
    using T = stm32f767_flash_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, FLASH>
{
    static constexpr periph_t P = FLASH;
    using T = stm32f767_flash_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, FLASH>
{
    static constexpr periph_t P = FLASH;
    using T = stm32f767_flash_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, FLASH>
{
    static constexpr periph_t P = FLASH;
    using T = stm32f767_flash_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, FLASH>
{
    static constexpr periph_t P = FLASH;
    using T = stm32f767_flash_t;
    static T& V;
};

using flash_t = peripheral_t<svd, FLASH>;
