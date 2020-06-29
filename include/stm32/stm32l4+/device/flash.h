#pragma once

////
//
//      STM32L4+ FLASH peripherals
//
///

// FLASH: Flash

struct stm32l4p5_flash_t
{
    volatile uint32_t ACR; // Access control register
    volatile uint32_t PDKEYR; // Power down key register
    volatile uint32_t KEYR; // Flash key register
    volatile uint32_t OPTKEYR; // Option byte key register
    volatile uint32_t SR; // Status register
    volatile uint32_t CR; // Flash control register
    volatile uint32_t ECCR; // Flash ECC register
    reserved_t<0x1> _0x1c;
    volatile uint32_t OPTR; // Flash option register
    volatile uint32_t PCROP1SR; // Flash Bank 1 PCROP Start address register
    volatile uint32_t PCROP1ER; // Flash Bank 1 PCROP End address register
    volatile uint32_t WRP1AR; // Flash Bank 1 WRP area A address register
    volatile uint32_t WRP1BR; // Flash Bank 1 WRP area B address register
    reserved_t<0x4> _0x34;
    volatile uint32_t PCROP2SR; // Flash Bank 2 PCROP Start address register
    volatile uint32_t PCROP2ER; // Flash Bank 2 PCROP End address register
    volatile uint32_t WRP2AR; // Flash Bank 2 WRP area A address register
    volatile uint32_t WRP2BR; // Flash Bank 2 WRP area B address register

    static constexpr uint32_t ACR_RESET_VALUE = 0x600; // Reset value
    typedef bit_field_t<0, 0x7> ACR_LATENCY; // Latency
    static constexpr uint32_t ACR_PRFTEN = 0x100; // Prefetch enable
    static constexpr uint32_t ACR_ICEN = 0x200; // Instruction cache enable
    static constexpr uint32_t ACR_DCEN = 0x400; // Data cache enable
    static constexpr uint32_t ACR_ICRST = 0x800; // Instruction cache reset
    static constexpr uint32_t ACR_DCRST = 0x1000; // Data cache reset
    static constexpr uint32_t ACR_RUN_PD = 0x2000; // Flash Power-down mode during Low-power run mode
    static constexpr uint32_t ACR_SLEEP_PD = 0x4000; // Flash Power-down mode during Low-power sleep mode

    static constexpr uint32_t PDKEYR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> PDKEYR_PDKEYR; // RUN_PD in FLASH_ACR key

    static constexpr uint32_t KEYR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> KEYR_KEYR; // KEYR

    static constexpr uint32_t OPTKEYR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> OPTKEYR_OPTKEYR; // Option byte key

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_EOP = 0x1; // End of operation
    static constexpr uint32_t SR_OPERR = 0x2; // Operation error
    static constexpr uint32_t SR_PROGERR = 0x8; // Programming error
    static constexpr uint32_t SR_WRPERR = 0x10; // Write protected error
    static constexpr uint32_t SR_PGAERR = 0x20; // Programming alignment error
    static constexpr uint32_t SR_SIZERR = 0x40; // Size error
    static constexpr uint32_t SR_PGSERR = 0x80; // Programming sequence error
    static constexpr uint32_t SR_MISERR = 0x100; // Fast programming data miss error
    static constexpr uint32_t SR_FASTERR = 0x200; // Fast programming error
    static constexpr uint32_t SR_RDERR = 0x4000; // PCROP read error
    static constexpr uint32_t SR_OPTVERR = 0x8000; // Option validity error
    static constexpr uint32_t SR_BSY = 0x10000; // Busy

    static constexpr uint32_t CR_RESET_VALUE = 0xc0000000; // Reset value
    static constexpr uint32_t CR_PG = 0x1; // Programming
    static constexpr uint32_t CR_PER = 0x2; // Page erase
    static constexpr uint32_t CR_MER1 = 0x4; // Bank 1 Mass erase
    typedef bit_field_t<3, 0xff> CR_PNB; // Page number
    static constexpr uint32_t CR_BKER = 0x800; // Bank erase
    static constexpr uint32_t CR_MER2 = 0x8000; // Bank 2 Mass erase
    static constexpr uint32_t CR_START = 0x10000; // Start
    static constexpr uint32_t CR_OPTSTRT = 0x20000; // Options modification start
    static constexpr uint32_t CR_FSTPG = 0x40000; // Fast programming
    static constexpr uint32_t CR_EOPIE = 0x1000000; // End of operation interrupt enable
    static constexpr uint32_t CR_ERRIE = 0x2000000; // Error interrupt enable
    static constexpr uint32_t CR_RDERRIE = 0x4000000; // PCROP read error interrupt enable
    static constexpr uint32_t CR_OBL_LAUNCH = 0x8000000; // Force the option byte loading
    static constexpr uint32_t CR_OPTLOCK = 0x40000000; // Options Lock
    static constexpr uint32_t CR_LOCK = 0x80000000; // FLASH_CR Lock

    static constexpr uint32_t ECCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> ECCR_ADDR_ECC; // ECC fail address
    static constexpr uint32_t ECCR_BK_ECC = 0x80000; // ECC fail bank
    static constexpr uint32_t ECCR_SYSF_ECC = 0x100000; // System Flash ECC fail
    static constexpr uint32_t ECCR_ECCIE = 0x1000000; // ECC correction interrupt enable
    static constexpr uint32_t ECCR_ECCC = 0x40000000; // ECC correction
    static constexpr uint32_t ECCR_ECCD = 0x80000000; // ECC detection


    static constexpr uint32_t OPTR_RESET_VALUE = 0xf0000000; // Reset value
    typedef bit_field_t<0, 0xff> OPTR_RDP; // Read protection level
    typedef bit_field_t<8, 0x7> OPTR_BOR_LEV; // BOR reset Level
    static constexpr uint32_t OPTR_NRST_STOP = 0x1000; // nRST_STOP
    static constexpr uint32_t OPTR_NRST_STDBY = 0x2000; // nRST_STDBY
    static constexpr uint32_t OPTR_IDWG_SW = 0x10000; // Independent watchdog selection
    static constexpr uint32_t OPTR_IWDG_STOP = 0x20000; // Independent watchdog counter freeze in Stop mode
    static constexpr uint32_t OPTR_IWDG_STDBY = 0x40000; // Independent watchdog counter freeze in Standby mode
    static constexpr uint32_t OPTR_WWDG_SW = 0x80000; // Window watchdog selection
    static constexpr uint32_t OPTR_BFB2 = 0x100000; // Dual-bank boot
    static constexpr uint32_t OPTR_DUALBANK = 0x200000; // Dual-Bank on 512 KB or 256 KB Flash memory devices
    static constexpr uint32_t OPTR_NBOOT1 = 0x800000; // Boot configuration
    static constexpr uint32_t OPTR_SRAM2_PE = 0x1000000; // SRAM2 parity check enable
    static constexpr uint32_t OPTR_SRAM2_RST = 0x2000000; // SRAM2 Erase when system reset

    static constexpr uint32_t PCROP1SR_RESET_VALUE = 0xffff0000; // Reset value
    typedef bit_field_t<0, 0xffff> PCROP1SR_PCROP1_STRT; // Bank 1 PCROP area start offset

    static constexpr uint32_t PCROP1ER_RESET_VALUE = 0xfff0000; // Reset value
    typedef bit_field_t<0, 0xffff> PCROP1ER_PCROP1_END; // Bank 1 PCROP area end offset
    static constexpr uint32_t PCROP1ER_PCROP_RDP = 0x80000000; // PCROP area preserved when RDP level decreased

    static constexpr uint32_t WRP1AR_RESET_VALUE = 0xff00ff00; // Reset value
    typedef bit_field_t<0, 0xff> WRP1AR_WRP1A_STRT; // Bank 1 WRP first area start offset
    typedef bit_field_t<16, 0xff> WRP1AR_WRP1A_END; // Bank 1 WRP first area A end offset

    static constexpr uint32_t WRP1BR_RESET_VALUE = 0xff00ff00; // Reset value
    typedef bit_field_t<16, 0xff> WRP1BR_WRP1B_END; // Bank 1 WRP second area B end offset
    typedef bit_field_t<0, 0xff> WRP1BR_WRP1B_STRT; // Bank 1 WRP second area B start offset


    static constexpr uint32_t PCROP2SR_RESET_VALUE = 0xffff0000; // Reset value
    typedef bit_field_t<0, 0xffff> PCROP2SR_PCROP2_STRT; // Bank 2 PCROP area start offset

    static constexpr uint32_t PCROP2ER_RESET_VALUE = 0xffff0000; // Reset value
    typedef bit_field_t<0, 0xffff> PCROP2ER_PCROP2_END; // Bank 2 PCROP area end offset

    static constexpr uint32_t WRP2AR_RESET_VALUE = 0xff00ff00; // Reset value
    typedef bit_field_t<0, 0xff> WRP2AR_WRP2A_STRT; // Bank 2 WRP first area A start offset
    typedef bit_field_t<16, 0xff> WRP2AR_WRP2A_END; // Bank 2 WRP first area A end offset

    static constexpr uint32_t WRP2BR_RESET_VALUE = 0xff00ff00; // Reset value
    typedef bit_field_t<0, 0xff> WRP2BR_WRP2B_STRT; // Bank 2 WRP second area B start offset
    typedef bit_field_t<16, 0xff> WRP2BR_WRP2B_END; // Bank 2 WRP second area B end offset
};

template<>
struct peripheral_t<STM32L4P5, FLASH>
{
    using T = stm32l4p5_flash_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4Q5, FLASH>
{
    using T = stm32l4p5_flash_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R5, FLASH>
{
    using T = stm32l4p5_flash_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R7, FLASH>
{
    using T = stm32l4p5_flash_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4R9, FLASH>
{
    using T = stm32l4p5_flash_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S5, FLASH>
{
    using T = stm32l4p5_flash_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S7, FLASH>
{
    using T = stm32l4p5_flash_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L4S9, FLASH>
{
    using T = stm32l4p5_flash_t;
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
        RCC::V.AHB1ENR |= RCC::T::AHB1ENR_FLASHEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.AHB1ENR &= ~RCC::T::AHB1ENR_FLASHEN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.AHB1SMENR |= RCC::T::AHB1SMENR_FLASHSMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.AHB1SMENR &= ~RCC::T::AHB1SMENR_FLASHSMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHB1RSTR |= RCC::T::AHB1RSTR_FLASHRST;
    }
};
