#pragma once

////
//
//      STM32F1 FLASH peripherals
//
///

// FLASH: FLASH

struct stm32f100_flash_t
{
    volatile uint32_t ACR; // Flash access control register
    volatile uint32_t KEYR; // Flash key register
    volatile uint32_t OPTKEYR; // Flash option key register
    volatile uint32_t SR; // Status register
    volatile uint32_t CR; // Control register
    volatile uint32_t AR; // Flash address register
    reserved_t<0x1> _0x18;
    volatile uint32_t OBR; // Option byte register
    volatile uint32_t WRPR; // Write protection register

    static constexpr uint32_t ACR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ACR_HLFCYA = 0x8; // Flash half cycle access enable

    static constexpr uint32_t KEYR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR_KEY; // FPEC key

    static constexpr uint32_t OPTKEYR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> OPTKEYR_OPTKEY; // Option byte key

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_EOP = 0x20; // End of operation
    static constexpr uint32_t SR_WRPRTERR = 0x10; // Write protection error
    static constexpr uint32_t SR_PGERR = 0x4; // Programming error
    static constexpr uint32_t SR_BSY = 0x1; // Busy

    static constexpr uint32_t CR_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t CR_PG = 0x1; // Programming
    static constexpr uint32_t CR_PER = 0x2; // Page Erase
    static constexpr uint32_t CR_MER = 0x4; // Mass Erase
    static constexpr uint32_t CR_OPTPG = 0x10; // Option byte programming
    static constexpr uint32_t CR_OPTER = 0x20; // Option byte erase
    static constexpr uint32_t CR_STRT = 0x40; // Start
    static constexpr uint32_t CR_LOCK = 0x80; // Lock
    static constexpr uint32_t CR_OPTWRE = 0x200; // Option bytes write enable
    static constexpr uint32_t CR_ERRIE = 0x400; // Error interrupt enable
    static constexpr uint32_t CR_EOPIE = 0x1000; // End of operation interrupt enable

    static constexpr uint32_t AR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> AR_FAR; // Flash Address


    static constexpr uint32_t OBR_RESET_VALUE = 0x3fffffc; // Reset value
    static constexpr uint32_t OBR_OPTERR = 0x1; // Option byte error
    static constexpr uint32_t OBR_RDPRT = 0x2; // Read protection
    static constexpr uint32_t OBR_WDG_SW = 0x4; // WDG_SW
    static constexpr uint32_t OBR_NRST_STOP = 0x8; // nRST_STOP
    static constexpr uint32_t OBR_NRST_STDBY = 0x10; // nRST_STDBY
    typedef bit_field_t<10, 0xff> OBR_DATA0; // Data0
    typedef bit_field_t<18, 0xff> OBR_DATA1; // Data1

    static constexpr uint32_t WRPR_RESET_VALUE = 0xffffffff; // Reset value
    typedef bit_field_t<0, 0xffffffff> WRPR_WRP; // Write protect
};

// FLASH: FLASH

struct stm32f101_flash_t
{
    volatile uint32_t ACR; // Flash access control register
    volatile uint32_t KEYR; // Flash key register
    volatile uint32_t OPTKEYR; // Flash option key register
    volatile uint32_t SR; // Status register
    volatile uint32_t CR; // Control register
    volatile uint32_t AR; // Flash address register
    reserved_t<0x1> _0x18;
    volatile uint32_t OBR; // Option byte register
    volatile uint32_t WRPR; // Write protection register

    static constexpr uint32_t ACR_RESET_VALUE = 0x30; // Reset value
    typedef bit_field_t<0, 0x7> ACR_LATENCY; // Latency
    static constexpr uint32_t ACR_HLFCYA = 0x8; // Flash half cycle access enable
    static constexpr uint32_t ACR_PRFTBE = 0x10; // Prefetch buffer enable
    static constexpr uint32_t ACR_PRFTBS = 0x20; // Prefetch buffer status

    static constexpr uint32_t KEYR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR_KEY; // FPEC key

    static constexpr uint32_t OPTKEYR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> OPTKEYR_OPTKEY; // Option byte key

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_EOP = 0x20; // End of operation
    static constexpr uint32_t SR_WRPRTERR = 0x10; // Write protection error
    static constexpr uint32_t SR_PGERR = 0x4; // Programming error
    static constexpr uint32_t SR_BSY = 0x1; // Busy

    static constexpr uint32_t CR_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t CR_PG = 0x1; // Programming
    static constexpr uint32_t CR_PER = 0x2; // Page Erase
    static constexpr uint32_t CR_MER = 0x4; // Mass Erase
    static constexpr uint32_t CR_OPTPG = 0x10; // Option byte programming
    static constexpr uint32_t CR_OPTER = 0x20; // Option byte erase
    static constexpr uint32_t CR_STRT = 0x40; // Start
    static constexpr uint32_t CR_LOCK = 0x80; // Lock
    static constexpr uint32_t CR_OPTWRE = 0x200; // Option bytes write enable
    static constexpr uint32_t CR_ERRIE = 0x400; // Error interrupt enable
    static constexpr uint32_t CR_EOPIE = 0x1000; // End of operation interrupt enable

    static constexpr uint32_t AR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> AR_FAR; // Flash Address


    static constexpr uint32_t OBR_RESET_VALUE = 0x3fffffc; // Reset value
    static constexpr uint32_t OBR_OPTERR = 0x1; // Option byte error
    static constexpr uint32_t OBR_RDPRT = 0x2; // Read protection
    static constexpr uint32_t OBR_WDG_SW = 0x4; // WDG_SW
    static constexpr uint32_t OBR_NRST_STOP = 0x8; // nRST_STOP
    static constexpr uint32_t OBR_NRST_STDBY = 0x10; // nRST_STDBY
    typedef bit_field_t<10, 0xff> OBR_DATA0; // Data0
    typedef bit_field_t<18, 0xff> OBR_DATA1; // Data1

    static constexpr uint32_t WRPR_RESET_VALUE = 0xffffffff; // Reset value
    typedef bit_field_t<0, 0xffffffff> WRPR_WRP; // Write protect
};

template<>
struct peripheral_t<STM32F100, FLASH>
{
    using T = stm32f100_flash_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F101, FLASH>
{
    using T = stm32f101_flash_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F102, FLASH>
{
    using T = stm32f101_flash_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F103, FLASH>
{
    using T = stm32f101_flash_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F107, FLASH>
{
    using T = stm32f101_flash_t;
    static T& V;
};

using flash_t = peripheral_t<svd, FLASH>;

template<int INST> struct flash_traits {};

template<> struct flash_traits<0>
{
    using flash = flash_t;

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
