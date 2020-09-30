#pragma once

////
//
//      STM32F3 FLASH peripherals
//
///

// FLASH: Flash

struct stm32f301_flash_t
{
    volatile uint32_t ACR; // Flash access control register
    volatile uint32_t KEYR; // Flash key register
    volatile uint32_t OPTKEYR; // Flash option key register
    volatile uint32_t SR; // Flash status register
    volatile uint32_t CR; // Flash control register
    volatile uint32_t AR; // Flash address register
    reserved_t<0x1> _0x18;
    volatile uint32_t OBR; // Option byte register
    volatile uint32_t WRPR; // Write protection register

    static constexpr uint32_t ACR_RESET_VALUE = 0x30; // Reset value
    typedef bit_field_t<0, 0x7> ACR_LATENCY; // LATENCY
    static constexpr uint32_t ACR_PRFTBE = 0x10; // PRFTBE
    static constexpr uint32_t ACR_PRFTBS = 0x20; // PRFTBS

    static constexpr uint32_t KEYR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR_FKEYR; // Flash Key

    static constexpr uint32_t OPTKEYR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> OPTKEYR_OPTKEYR; // Option byte key

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_EOP = 0x20; // End of operation
    static constexpr uint32_t SR_WRPRT = 0x10; // Write protection error
    static constexpr uint32_t SR_PGERR = 0x4; // Programming error
    static constexpr uint32_t SR_BSY = 0x1; // Busy

    static constexpr uint32_t CR_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t CR_FORCE_OPTLOAD = 0x2000; // Force option byte loading
    static constexpr uint32_t CR_EOPIE = 0x1000; // End of operation interrupt enable
    static constexpr uint32_t CR_ERRIE = 0x400; // Error interrupt enable
    static constexpr uint32_t CR_OPTWRE = 0x200; // Option bytes write enable
    static constexpr uint32_t CR_LOCK = 0x80; // Lock
    static constexpr uint32_t CR_STRT = 0x40; // Start
    static constexpr uint32_t CR_OPTER = 0x20; // Option byte erase
    static constexpr uint32_t CR_OPTPG = 0x10; // Option byte programming
    static constexpr uint32_t CR_MER = 0x4; // Mass erase
    static constexpr uint32_t CR_PER = 0x2; // Page erase
    static constexpr uint32_t CR_PG = 0x1; // Programming

    static constexpr uint32_t AR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> AR_FAR; // Flash address


    static constexpr uint32_t OBR_RESET_VALUE = 0xffffff02; // Reset value
    static constexpr uint32_t OBR_OPTERR = 0x1; // Option byte error
    typedef bit_field_t<1, 0x3> OBR_RDPRT; // Read protection Level status
    static constexpr uint32_t OBR_WDG_SW = 0x100; // WDG_SW
    static constexpr uint32_t OBR_NRST_STOP = 0x200; // nRST_STOP
    static constexpr uint32_t OBR_NRST_STDBY = 0x400; // nRST_STDBY
    static constexpr uint32_t OBR_BOOT1 = 0x1000; // BOOT1
    static constexpr uint32_t OBR_VDDA_MONITOR = 0x2000; // VDDA_MONITOR
    typedef bit_field_t<16, 0xff> OBR_DATA0; // Data0
    typedef bit_field_t<24, 0xff> OBR_DATA1; // Data1

    static constexpr uint32_t WRPR_RESET_VALUE = 0xffffffff; // Reset value
    typedef bit_field_t<0, 0xffffffff> WRPR_WRP; // Write protect
};

// FLASH: Flash

struct stm32f302_flash_t
{
    volatile uint32_t ACR; // Flash access control register
    volatile uint32_t KEYR; // Flash key register
    volatile uint32_t OPTKEYR; // Flash option key register
    volatile uint32_t SR; // Flash status register
    volatile uint32_t CR; // Flash control register
    volatile uint32_t AR; // Flash address register
    reserved_t<0x1> _0x18;
    volatile uint32_t OBR; // Option byte register
    volatile uint32_t WRPR; // Write protection register

    static constexpr uint32_t ACR_RESET_VALUE = 0x30; // Reset value
    typedef bit_field_t<0, 0x7> ACR_LATENCY; // LATENCY
    static constexpr uint32_t ACR_PRFTBE = 0x10; // PRFTBE
    static constexpr uint32_t ACR_PRFTBS = 0x20; // PRFTBS

    static constexpr uint32_t KEYR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR_FKEYR; // Flash Key

    static constexpr uint32_t OPTKEYR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> OPTKEYR_OPTKEYR; // Option byte key

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_EOP = 0x20; // End of operation
    static constexpr uint32_t SR_WRPRT = 0x10; // Write protection error
    static constexpr uint32_t SR_PGERR = 0x4; // Programming error
    static constexpr uint32_t SR_BSY = 0x1; // Busy

    static constexpr uint32_t CR_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t CR_FORCE_OPTLOAD = 0x2000; // Force option byte loading
    static constexpr uint32_t CR_EOPIE = 0x1000; // End of operation interrupt enable
    static constexpr uint32_t CR_ERRIE = 0x400; // Error interrupt enable
    static constexpr uint32_t CR_OPTWRE = 0x200; // Option bytes write enable
    static constexpr uint32_t CR_LOCK = 0x80; // Lock
    static constexpr uint32_t CR_STRT = 0x40; // Start
    static constexpr uint32_t CR_OPTER = 0x20; // Option byte erase
    static constexpr uint32_t CR_OPTPG = 0x10; // Option byte programming
    static constexpr uint32_t CR_MER = 0x4; // Mass erase
    static constexpr uint32_t CR_PER = 0x2; // Page erase
    static constexpr uint32_t CR_PG = 0x1; // Programming

    static constexpr uint32_t AR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> AR_FAR; // Flash address


    static constexpr uint32_t OBR_RESET_VALUE = 0xffffff02; // Reset value
    static constexpr uint32_t OBR_OPTERR = 0x1; // Option byte error
    static constexpr uint32_t OBR_LEVEL1_PROT = 0x2; // Level 1 protection status
    static constexpr uint32_t OBR_LEVEL2_PROT = 0x4; // Level 2 protection status
    static constexpr uint32_t OBR_WDG_SW = 0x100; // WDG_SW
    static constexpr uint32_t OBR_NRST_STOP = 0x200; // nRST_STOP
    static constexpr uint32_t OBR_NRST_STDBY = 0x400; // nRST_STDBY
    static constexpr uint32_t OBR_BOOT1 = 0x1000; // BOOT1
    static constexpr uint32_t OBR_VDDA_MONITOR = 0x2000; // VDDA_MONITOR
    static constexpr uint32_t OBR_SRAM_PARITY_CHECK = 0x4000; // SRAM_PARITY_CHECK
    typedef bit_field_t<16, 0xff> OBR_DATA0; // Data0
    typedef bit_field_t<24, 0xff> OBR_DATA1; // Data1

    static constexpr uint32_t WRPR_RESET_VALUE = 0xffffffff; // Reset value
    typedef bit_field_t<0, 0xffffffff> WRPR_WRP; // Write protect
};

// FLASH: Flash

struct stm32f373_flash_t
{
    volatile uint32_t ACR; // Flash access control register
    volatile uint32_t KEYR; // Flash key register
    volatile uint32_t OPTKEYR; // Flash option key register
    volatile uint32_t SR; // Flash status register
    volatile uint32_t CR; // Flash control register
    volatile uint32_t AR; // Flash address register
    reserved_t<0x1> _0x18;
    volatile uint32_t OBR; // Option byte register
    volatile uint32_t WRPR; // Write protection register

    static constexpr uint32_t ACR_RESET_VALUE = 0x30; // Reset value
    typedef bit_field_t<0, 0x7> ACR_LATENCY; // LATENCY
    static constexpr uint32_t ACR_PRFTBE = 0x10; // PRFTBE
    static constexpr uint32_t ACR_PRFTBS = 0x20; // PRFTBS

    static constexpr uint32_t KEYR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR_FKEYR; // Flash Key

    static constexpr uint32_t OPTKEYR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> OPTKEYR_OPTKEYR; // Option byte key

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_EOP = 0x20; // End of operation
    static constexpr uint32_t SR_WRPRT = 0x10; // Write protection error
    static constexpr uint32_t SR_PGERR = 0x4; // Programming error
    static constexpr uint32_t SR_BSY = 0x1; // Busy

    static constexpr uint32_t CR_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t CR_FORCE_OPTLOAD = 0x2000; // Force option byte loading
    static constexpr uint32_t CR_EOPIE = 0x1000; // End of operation interrupt enable
    static constexpr uint32_t CR_ERRIE = 0x400; // Error interrupt enable
    static constexpr uint32_t CR_OPTWRE = 0x200; // Option bytes write enable
    static constexpr uint32_t CR_LOCK = 0x80; // Lock
    static constexpr uint32_t CR_STRT = 0x40; // Start
    static constexpr uint32_t CR_OPTER = 0x20; // Option byte erase
    static constexpr uint32_t CR_OPTPG = 0x10; // Option byte programming
    static constexpr uint32_t CR_MER = 0x4; // Mass erase
    static constexpr uint32_t CR_PER = 0x2; // Page erase
    static constexpr uint32_t CR_PG = 0x1; // Programming

    static constexpr uint32_t AR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> AR_FAR; // Flash address


    static constexpr uint32_t OBR_RESET_VALUE = 0xffffff02; // Reset value
    static constexpr uint32_t OBR_OPTERR = 0x1; // Option byte error
    static constexpr uint32_t OBR_LEVEL1_PROT = 0x2; // Level 1 protection status
    static constexpr uint32_t OBR_LEVEL2_PROT = 0x4; // Level 2 protection status
    static constexpr uint32_t OBR_WDG_SW = 0x100; // WDG_SW
    static constexpr uint32_t OBR_NRST_STOP = 0x200; // nRST_STOP
    static constexpr uint32_t OBR_NRST_STDBY = 0x400; // nRST_STDBY
    static constexpr uint32_t OBR_BOOT1 = 0x1000; // BOOT1
    static constexpr uint32_t OBR_VDDA_MONITOR = 0x2000; // VDDA_MONITOR
    static constexpr uint32_t OBR_SRAM_PARITY_CHECK = 0x4000; // SRAM_PARITY_CHECK
    static constexpr uint32_t OBR_SDADC12_VDD_MONITOR = 0x8000; // SDADC12_VDD_MONITOR
    typedef bit_field_t<16, 0xff> OBR_DATA0; // Data0
    typedef bit_field_t<24, 0xff> OBR_DATA1; // Data1

    static constexpr uint32_t WRPR_RESET_VALUE = 0xffffffff; // Reset value
    typedef bit_field_t<0, 0xffffffff> WRPR_WRP; // Write protect
};

template<>
struct peripheral_t<STM32F301, FLASH>
{
    static constexpr periph_t P = FLASH;
    using T = stm32f301_flash_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F302, FLASH>
{
    static constexpr periph_t P = FLASH;
    using T = stm32f302_flash_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F303, FLASH>
{
    static constexpr periph_t P = FLASH;
    using T = stm32f302_flash_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F3x4, FLASH>
{
    static constexpr periph_t P = FLASH;
    using T = stm32f302_flash_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F373, FLASH>
{
    static constexpr periph_t P = FLASH;
    using T = stm32f373_flash_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F3x8, FLASH>
{
    static constexpr periph_t P = FLASH;
    using T = stm32f373_flash_t;
    static T& V;
};

using flash_t = peripheral_t<svd, FLASH>;

template<int INST> struct flash_traits {};

template<> struct flash_traits<0>
{
    using flash = flash_t;
    static constexpr clock_source_t CLOCK = AHB_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.AHBENR |= RCC::T::AHBENR_FLASHEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHBENR &= ~RCC::T::AHBENR_FLASHEN;
    }
};
