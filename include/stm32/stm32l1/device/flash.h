#pragma once

////
//
//      STM32L1 FLASH peripherals
//
///

// FLASH: Flash

struct stm32l100_flash_t
{
    volatile uint32_t ACR; // Access control register
    volatile uint32_t PECR; // Program/erase control register
    volatile uint32_t PDKEYR; // Power down key register
    volatile uint32_t PEKEYR; // Program/erase key register
    volatile uint32_t PRGKEYR; // Program memory key register
    volatile uint32_t OPTKEYR; // Option byte key register
    volatile uint32_t SR; // Status register
    volatile uint32_t OBR; // Option byte register
    volatile uint32_t WRPR1; // Write protection register
    reserved_t<0x17> _0x24;
    volatile uint32_t WRPR2; // Write protection register
    volatile uint32_t WRPR3; // Write protection register

    static constexpr uint32_t ACR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ACR_LATENCY = 0x1; // Latency
    static constexpr uint32_t ACR_PRFTEN = 0x2; // Prefetch enable
    static constexpr uint32_t ACR_ACC64 = 0x4; // 64-bit access
    static constexpr uint32_t ACR_SLEEP_PD = 0x8; // Flash mode during Sleep
    static constexpr uint32_t ACR_RUN_PD = 0x10; // Flash mode during Run

    static constexpr uint32_t PECR_RESET_VALUE = 0x7; // Reset value
    static constexpr uint32_t PECR_PELOCK = 0x1; // FLASH_PECR and data EEPROM lock
    static constexpr uint32_t PECR_PRGLOCK = 0x2; // Program memory lock
    static constexpr uint32_t PECR_OPTLOCK = 0x4; // Option bytes block lock
    static constexpr uint32_t PECR_PROG = 0x8; // Program memory selection
    static constexpr uint32_t PECR_DATA = 0x10; // Data EEPROM selection
    static constexpr uint32_t PECR_FTDW = 0x100; // Fixed time data write for Byte, Half Word and Word programming
    static constexpr uint32_t PECR_ERASE = 0x200; // Page or Double Word erase mode
    static constexpr uint32_t PECR_FPRG = 0x400; // Half Page/Double Word programming mode
    static constexpr uint32_t PECR_PARALLELBANK = 0x8000; // Parallel bank mode
    static constexpr uint32_t PECR_EOPIE = 0x10000; // End of programming interrupt enable
    static constexpr uint32_t PECR_ERRIE = 0x20000; // Error interrupt enable
    static constexpr uint32_t PECR_OBL_LAUNCH = 0x40000; // Launch the option byte loading

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
    static constexpr uint32_t SR_OPTVERRUSR = 0x1000; // Option UserValidity Error

    static constexpr uint32_t OBR_RESET_VALUE = 0xf80000; // Reset value
    typedef bit_field_t<0, 0xff> OBR_RDPRT; // Read protection
    typedef bit_field_t<16, 0xf> OBR_BOR_LEV; // BOR_LEV
    static constexpr uint32_t OBR_IWDG_SW = 0x100000; // IWDG_SW
    static constexpr uint32_t OBR_NRTS_STOP = 0x200000; // nRTS_STOP
    static constexpr uint32_t OBR_NRST_STDBY = 0x400000; // nRST_STDBY
    static constexpr uint32_t OBR_BFB2 = 0x800000; // Boot From Bank 2

    static constexpr uint32_t WRPR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> WRPR1_WRP1; // Write protection


    static constexpr uint32_t WRPR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> WRPR2_WRP2; // WRP2

    static constexpr uint32_t WRPR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> WRPR3_WRP3; // WRP3
};

template<>
struct peripheral_t<STM32L100, FLASH>
{
    using T = stm32l100_flash_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L151, FLASH>
{
    using T = stm32l100_flash_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L152, FLASH>
{
    using T = stm32l100_flash_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L162, FLASH>
{
    using T = stm32l100_flash_t;
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

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHBRSTR |= RCC::T::AHBRSTR_FLASHRST;
    }
};
