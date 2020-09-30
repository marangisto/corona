#pragma once

////
//
//      STM32G0 FLASH peripherals
//
///

// FLASH: Flash

struct stm32g030_flash_t
{
    volatile uint32_t ACR; // Access control register
    reserved_t<0x1> _0x4;
    volatile uint32_t KEYR; // Flash key register
    volatile uint32_t OPTKEYR; // Option byte key register
    volatile uint32_t SR; // Status register
    volatile uint32_t CR; // Flash control register
    volatile uint32_t ECCR; // Flash ECC register
    reserved_t<0x1> _0x1c;
    volatile uint32_t OPTR; // Flash option register
    volatile uint32_t PCROP1ASR; // Flash PCROP zone A Start address register
    volatile uint32_t PCROP1AER; // Flash PCROP zone A End address register
    volatile uint32_t WRP1AR; // Flash WRP area A address register
    volatile uint32_t WRP1BR; // Flash WRP area B address register
    volatile uint32_t PCROP1BSR; // Flash PCROP zone B Start address register
    volatile uint32_t PCROP1BER; // Flash PCROP zone B End address register
    reserved_t<0x11> _0x3c;
    volatile uint32_t SECR; // Flash Security register

    static constexpr uint32_t ACR_RESET_VALUE = 0x600; // Reset value
    typedef bit_field_t<0, 0x7> ACR_LATENCY; // Latency
    static constexpr uint32_t ACR_PRFTEN = 0x100; // Prefetch enable
    static constexpr uint32_t ACR_ICEN = 0x200; // Instruction cache enable
    static constexpr uint32_t ACR_ICRST = 0x800; // Instruction cache reset
    static constexpr uint32_t ACR_EMPTY = 0x10000; // Flash User area empty
    static constexpr uint32_t ACR_DBG_SWEN = 0x40000; // Debug access software enable


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
    static constexpr uint32_t SR_OPTVERR = 0x8000; // Option and Engineering bits loading validity error
    static constexpr uint32_t SR_BSY = 0x10000; // Busy
    static constexpr uint32_t SR_CFGBSY = 0x40000; // Programming or erase configuration busy.

    static constexpr uint32_t CR_RESET_VALUE = 0xc0000000; // Reset value
    static constexpr uint32_t CR_PG = 0x1; // Programming
    static constexpr uint32_t CR_PER = 0x2; // Page erase
    static constexpr uint32_t CR_MER = 0x4; // Mass erase
    typedef bit_field_t<3, 0x3f> CR_PNB; // Page number
    static constexpr uint32_t CR_STRT = 0x10000; // Start
    static constexpr uint32_t CR_OPTSTRT = 0x20000; // Options modification start
    static constexpr uint32_t CR_FSTPG = 0x40000; // Fast programming
    static constexpr uint32_t CR_EOPIE = 0x1000000; // End of operation interrupt enable
    static constexpr uint32_t CR_ERRIE = 0x2000000; // Error interrupt enable
    static constexpr uint32_t CR_RDERRIE = 0x4000000; // PCROP read error interrupt enable
    static constexpr uint32_t CR_OBL_LAUNCH = 0x8000000; // Force the option byte loading
    static constexpr uint32_t CR_SEC_PROT = 0x10000000; // Securable memory area protection enable
    static constexpr uint32_t CR_OPTLOCK = 0x40000000; // Options Lock
    static constexpr uint32_t CR_LOCK = 0x80000000; // FLASH_CR Lock

    static constexpr uint32_t ECCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3fff> ECCR_ADDR_ECC; // ECC fail address
    static constexpr uint32_t ECCR_SYSF_ECC = 0x100000; // ECC fail for Corrected ECC Error or Double ECC Error in info block
    static constexpr uint32_t ECCR_ECCIE = 0x1000000; // ECC correction interrupt enable
    static constexpr uint32_t ECCR_ECCC = 0x40000000; // ECC correction
    static constexpr uint32_t ECCR_ECCD = 0x80000000; // ECC detection


    static constexpr uint32_t OPTR_RESET_VALUE = 0xf0000000; // Reset value
    typedef bit_field_t<0, 0xff> OPTR_RDP; // Read protection level
    static constexpr uint32_t OPTR_BOREN = 0x100; // BOR reset Level
    typedef bit_field_t<9, 0x3> OPTR_BORF_LEV; // These bits contain the VDD supply level threshold that activates the reset
    typedef bit_field_t<11, 0x3> OPTR_BORR_LEV; // These bits contain the VDD supply level threshold that releases the reset.
    static constexpr uint32_t OPTR_NRST_STOP = 0x2000; // nRST_STOP
    static constexpr uint32_t OPTR_NRST_STDBY = 0x4000; // nRST_STDBY
    static constexpr uint32_t OPTR_NRSTS_HDW = 0x8000; // nRSTS_HDW
    static constexpr uint32_t OPTR_IDWG_SW = 0x10000; // Independent watchdog selection
    static constexpr uint32_t OPTR_IWDG_STOP = 0x20000; // Independent watchdog counter freeze in Stop mode
    static constexpr uint32_t OPTR_IWDG_STDBY = 0x40000; // Independent watchdog counter freeze in Standby mode
    static constexpr uint32_t OPTR_WWDG_SW = 0x80000; // Window watchdog selection
    static constexpr uint32_t OPTR_RAM_PARITY_CHECK = 0x400000; // SRAM parity check control
    static constexpr uint32_t OPTR_NBOOT_SEL = 0x1000000; // nBOOT_SEL
    static constexpr uint32_t OPTR_NBOOT1 = 0x2000000; // Boot configuration
    static constexpr uint32_t OPTR_NBOOT0 = 0x4000000; // nBOOT0 option bit
    typedef bit_field_t<27, 0x3> OPTR_NRST_MODE; // NRST_MODE
    static constexpr uint32_t OPTR_IRHEN = 0x20000000; // Internal reset holder enable bit

    static constexpr uint32_t PCROP1ASR_RESET_VALUE = 0xf0000000; // Reset value
    typedef bit_field_t<0, 0xff> PCROP1ASR_PCROP1A_STRT; // PCROP1A area start offset

    static constexpr uint32_t PCROP1AER_RESET_VALUE = 0xf0000000; // Reset value
    typedef bit_field_t<0, 0xff> PCROP1AER_PCROP1A_END; // PCROP1A area end offset
    static constexpr uint32_t PCROP1AER_PCROP_RDP = 0x80000000; // PCROP area preserved when RDP level decreased

    static constexpr uint32_t WRP1AR_RESET_VALUE = 0xf0000000; // Reset value
    typedef bit_field_t<0, 0x3f> WRP1AR_WRP1A_STRT; // WRP area A start offset
    typedef bit_field_t<16, 0x3f> WRP1AR_WRP1A_END; // WRP area A end offset

    static constexpr uint32_t WRP1BR_RESET_VALUE = 0xf0000000; // Reset value
    typedef bit_field_t<0, 0x3f> WRP1BR_WRP1B_STRT; // WRP area B start offset
    typedef bit_field_t<16, 0x3f> WRP1BR_WRP1B_END; // WRP area B end offset

    static constexpr uint32_t PCROP1BSR_RESET_VALUE = 0xf0000000; // Reset value
    typedef bit_field_t<0, 0xff> PCROP1BSR_PCROP1B_STRT; // PCROP1B area start offset

    static constexpr uint32_t PCROP1BER_RESET_VALUE = 0xf0000000; // Reset value
    typedef bit_field_t<0, 0xff> PCROP1BER_PCROP1B_END; // PCROP1B area end offset


    static constexpr uint32_t SECR_RESET_VALUE = 0xf0000000; // Reset value
    typedef bit_field_t<0, 0x7f> SECR_SEC_SIZE; // Securable memory area size
    static constexpr uint32_t SECR_BOOT_LOCK = 0x10000; // used to force boot from user area
};

template<>
struct peripheral_t<STM32G030, FLASH>
{
    static constexpr periph_t P = FLASH;
    using T = stm32g030_flash_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G031, FLASH>
{
    static constexpr periph_t P = FLASH;
    using T = stm32g030_flash_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G041, FLASH>
{
    static constexpr periph_t P = FLASH;
    using T = stm32g030_flash_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G070, FLASH>
{
    static constexpr periph_t P = FLASH;
    using T = stm32g030_flash_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G071, FLASH>
{
    static constexpr periph_t P = FLASH;
    using T = stm32g030_flash_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G081, FLASH>
{
    static constexpr periph_t P = FLASH;
    using T = stm32g030_flash_t;
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

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.AHBSMENR |= RCC::T::AHBSMENR_FLASHSMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.AHBSMENR &= ~RCC::T::AHBSMENR_FLASHSMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.AHBRSTR |= RCC::T::AHBRSTR_FLASHRST;
    }
};
