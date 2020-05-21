#pragma once

////
//
//      STM32L5 Flash peripherals
//
////

////
//
//      Flash
//
////

struct stm32l552_flash_t
{
    volatile uint32_t ACR;          // [read-write] Access control register
    volatile uint32_t PDKEYR;       // [write-only] Power down key register
    volatile uint32_t NSKEYR;       // [write-only] Flash non-secure key register
    volatile uint32_t SECKEYR;      // [write-only] Flash secure key register
    volatile uint32_t OPTKEYR;      // [write-only] Flash option key register
    volatile uint32_t LVEKEYR;      // [write-only] Flash low voltage key register
    reserved_t<0x2> _0x20;
    volatile uint32_t NSSR;         // Flash status register
    volatile uint32_t SECSR;        // Flash status register
    volatile uint32_t NSCR;         // [read-write] Flash non-secure control register
    volatile uint32_t SECCR;        // [read-write] Flash secure control register
    volatile uint32_t ECCR;         // Flash ECC register
    reserved_t<0x3> _0x40;
    volatile uint32_t OPTR;         // [read-write] Flash option register
    volatile uint32_t NSBOOTADD0R;  // [write-only] Flash non-secure boot address 0 register
    volatile uint32_t NSBOOTADD1R;  // [write-only] Flash non-secure boot address 1 register
    volatile uint32_t SECBOOTADD0R; // FFlash secure boot address 0 register
    volatile uint32_t SECWM1R1;     // [read-write] Flash bank 1 secure watermak1 register
    volatile uint32_t SECWM1R2;     // [read-write] Flash secure watermak1 register 2
    volatile uint32_t WRP1AR;       // [read-write] Flash Bank 1 WRP area A address register
    volatile uint32_t WRP1BR;       // [read-write] Flash Bank 1 WRP area B address register
    volatile uint32_t SECWM2R1;     // [read-write] Flash secure watermak2 register
    volatile uint32_t SECWM2R2;     // [read-write] Flash secure watermak2 register2
    volatile uint32_t WRP2AR;       // [read-write] Flash WPR2 area A address register
    volatile uint32_t WRP2BR;       // [read-write] Flash WPR2 area B address register
    reserved_t<0x4> _0x80;
    volatile uint32_t SECBB1R1;     // [read-write] FLASH secure block based bank 1 register
    volatile uint32_t SECBB1R2;     // [read-write] FLASH secure block based bank 1 register
    volatile uint32_t SECBB1R3;     // [read-write] FLASH secure block based bank 1 register
    volatile uint32_t SECBB1R4;     // [read-write] FLASH secure block based bank 1 register
    reserved_t<0x4> _0xa0;
    volatile uint32_t SECBB2R1;     // [read-write] FLASH secure block based bank 2 register
    volatile uint32_t SECBB2R2;     // [read-write] FLASH secure block based bank 2 register
    volatile uint32_t SECBB2R3;     // [read-write] FLASH secure block based bank 2 register
    volatile uint32_t SECBB2R4;     // [read-write] FLASH secure block based bank 2 register
    reserved_t<0x4> _0xc0;
    volatile uint32_t SECHDPCR;     // [read-write] FLASH secure HDP control register
    volatile uint32_t PRIVCFGR;     // [read-write] Power privilege configuration register

    static constexpr uint32_t ACR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ACR_LATENCY =          // Latency
        bit_field_t<0, 0xf>::value<X>();
    static constexpr uint32_t ACR_RUN_PD = 0x2000;   // Flash Power-down mode during Low-power run mode
    static constexpr uint32_t ACR_SLEEP_PD = 0x4000; // Flash Power-down mode during Low-power sleep mode
    static constexpr uint32_t ACR_LVEN = 0x8000;     // LVEN

    static constexpr uint32_t PDKEYR_RESET_VALUE = 0x0;

    static constexpr uint32_t NSKEYR_RESET_VALUE = 0x0;

    static constexpr uint32_t SECKEYR_RESET_VALUE = 0x0;

    static constexpr uint32_t OPTKEYR_RESET_VALUE = 0x0;

    static constexpr uint32_t LVEKEYR_RESET_VALUE = 0x0;

    static constexpr uint32_t NSSR_RESET_VALUE = 0x0;
    static constexpr uint32_t NSSR_NSEOP = 0x1;      // NSEOP
    static constexpr uint32_t NSSR_NSOPERR = 0x2;    // NSOPERR
    static constexpr uint32_t NSSR_NSPROGERR = 0x8;  // NSPROGERR
    static constexpr uint32_t NSSR_NSWRPERR = 0x10;  // NSWRPERR
    static constexpr uint32_t NSSR_NSPGAERR = 0x20;  // NSPGAERR
    static constexpr uint32_t NSSR_NSSIZERR = 0x40;  // NSSIZERR
    static constexpr uint32_t NSSR_NSPGSERR = 0x80;  // NSPGSERR
    static constexpr uint32_t NSSR_OPTWERR = 0x2000; // OPTWERR
    static constexpr uint32_t NSSR_OPTVERR = 0x8000; // OPTVERR
    static constexpr uint32_t NSSR_NSBSY = 0x10000;  // NSBusy

    static constexpr uint32_t SECSR_RESET_VALUE = 0x0;
    static constexpr uint32_t SECSR_SECEOP = 0x1;      // SECEOP
    static constexpr uint32_t SECSR_SECOPERR = 0x2;    // SECOPERR
    static constexpr uint32_t SECSR_SECPROGERR = 0x8;  // SECPROGERR
    static constexpr uint32_t SECSR_SECWRPERR = 0x10;  // SECWRPERR
    static constexpr uint32_t SECSR_SECPGAERR = 0x20;  // SECPGAERR
    static constexpr uint32_t SECSR_SECSIZERR = 0x40;  // SECSIZERR
    static constexpr uint32_t SECSR_SECPGSERR = 0x80;  // SECPGSERR
    static constexpr uint32_t SECSR_SECRDERR = 0x4000; // Secure read protection error
    static constexpr uint32_t SECSR_SECBSY = 0x10000;  // SECBusy

    static constexpr uint32_t NSCR_RESET_VALUE = 0xc0000000;
    static constexpr uint32_t NSCR_NSPG = 0x1;             // NSPG
    static constexpr uint32_t NSCR_NSPER = 0x2;            // NSPER
    static constexpr uint32_t NSCR_NSMER1 = 0x4;           // NSMER1
    template<uint32_t X>
    static constexpr uint32_t NSCR_NSPNB =                 // NSPNB
        bit_field_t<3, 0x7f>::value<X>();
    static constexpr uint32_t NSCR_NSBKER = 0x800;         // NSBKER
    static constexpr uint32_t NSCR_NSMER2 = 0x8000;        // NSMER2
    static constexpr uint32_t NSCR_NSSTRT = 0x10000;       // Options modification start
    static constexpr uint32_t NSCR_OPTSTRT = 0x20000;      // Options modification start
    static constexpr uint32_t NSCR_NSEOPIE = 0x1000000;    // NSEOPIE
    static constexpr uint32_t NSCR_NSERRIE = 0x2000000;    // NSERRIE
    static constexpr uint32_t NSCR_OBL_LAUNCH = 0x8000000; // Force the option byte loading
    static constexpr uint32_t NSCR_OPTLOCK = 0x40000000;   // Options Lock
    static constexpr uint32_t NSCR_NSLOCK = 0x80000000;    // NSLOCK

    static constexpr uint32_t SECCR_RESET_VALUE = 0x80000000;
    static constexpr uint32_t SECCR_SECPG = 0x1;            // SECPG
    static constexpr uint32_t SECCR_SECPER = 0x2;           // SECPER
    static constexpr uint32_t SECCR_SECMER1 = 0x4;          // SECMER1
    template<uint32_t X>
    static constexpr uint32_t SECCR_SECPNB =                // SECPNB
        bit_field_t<3, 0x7f>::value<X>();
    static constexpr uint32_t SECCR_SECBKER = 0x800;        // SECBKER
    static constexpr uint32_t SECCR_SECMER2 = 0x8000;       // SECMER2
    static constexpr uint32_t SECCR_SECSTRT = 0x10000;      // SECSTRT
    static constexpr uint32_t SECCR_SECEOPIE = 0x1000000;   // SECEOPIE
    static constexpr uint32_t SECCR_SECERRIE = 0x2000000;   // SECERRIE
    static constexpr uint32_t SECCR_SECRDERRIE = 0x4000000; // SECRDERRIE
    static constexpr uint32_t SECCR_SECINV = 0x20000000;    // SECINV
    static constexpr uint32_t SECCR_SECLOCK = 0x80000000;   // SECLOCK

    static constexpr uint32_t ECCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ECCR_ADDR_ECC =           // ECC fail address
        bit_field_t<0, 0x7ffff>::value<X>();
    static constexpr uint32_t ECCR_BK_ECC = 0x200000;   // BK_ECC
    static constexpr uint32_t ECCR_SYSF_ECC = 0x400000; // SYSF_ECC
    static constexpr uint32_t ECCR_ECCIE = 0x1000000;   // ECC correction interrupt enable
    static constexpr uint32_t ECCR_ECCC2 = 0x10000000;  // ECCC2
    static constexpr uint32_t ECCR_ECCD2 = 0x20000000;  // ECCD2
    static constexpr uint32_t ECCR_ECCC = 0x40000000;   // ECC correction
    static constexpr uint32_t ECCR_ECCD = 0x80000000;   // ECC detection

    static constexpr uint32_t OPTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OPTR_RDP =                    // Read protection level
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OPTR_BOR_LEV =                // BOR reset Level
        bit_field_t<8, 0x7>::value<X>();
    static constexpr uint32_t OPTR_nRST_STOP = 0x1000;      // nRST_STOP
    static constexpr uint32_t OPTR_nRST_STDBY = 0x2000;     // nRST_STDBY
    static constexpr uint32_t OPTR_nRST_SHDW = 0x4000;      // nRST_SHDW
    static constexpr uint32_t OPTR_IWDG_SW = 0x10000;       // Independent watchdog selection
    static constexpr uint32_t OPTR_IWDG_STOP = 0x20000;     // Independent watchdog counter freeze in Stop mode
    static constexpr uint32_t OPTR_IWDG_STDBY = 0x40000;    // Independent watchdog counter freeze in Standby mode
    static constexpr uint32_t OPTR_WWDG_SW = 0x80000;       // Window watchdog selection
    static constexpr uint32_t OPTR_SWAP_BANK = 0x100000;    // SWAP_BANK
    static constexpr uint32_t OPTR_DB256K = 0x200000;       // DB256K
    static constexpr uint32_t OPTR_DBANK = 0x400000;        // DBANK
    static constexpr uint32_t OPTR_SRAM2_PE = 0x1000000;    // SRAM2 parity check enable
    static constexpr uint32_t OPTR_SRAM2_RST = 0x2000000;   // SRAM2 Erase when system reset
    static constexpr uint32_t OPTR_nSWBOOT0 = 0x4000000;    // nSWBOOT0
    static constexpr uint32_t OPTR_nBOOT0 = 0x8000000;      // nBOOT0
    static constexpr uint32_t OPTR_PA15_PUPEN = 0x10000000; // PA15_PUPEN
    static constexpr uint32_t OPTR_TZEN = 0x80000000;       // TZEN

    static constexpr uint32_t NSBOOTADD0R_RESET_VALUE = 0xf;
    template<uint32_t X>
    static constexpr uint32_t NSBOOTADD0R_NSBOOTADD0 =   // NSBOOTADD0
        bit_field_t<7, 0x1ffffff>::value<X>();

    static constexpr uint32_t NSBOOTADD1R_RESET_VALUE = 0xf;
    template<uint32_t X>
    static constexpr uint32_t NSBOOTADD1R_NSBOOTADD1 =   // NSBOOTADD1
        bit_field_t<7, 0x1ffffff>::value<X>();

    static constexpr uint32_t SECBOOTADD0R_RESET_VALUE = 0x0;
    static constexpr uint32_t SECBOOTADD0R_BOOT_LOCK = 0x1; // BOOT_LOCK
    template<uint32_t X>
    static constexpr uint32_t SECBOOTADD0R_SECBOOTADD0 =    // SECBOOTADD0
        bit_field_t<7, 0x1ffffff>::value<X>();

    static constexpr uint32_t SECWM1R1_RESET_VALUE = 0xff00ff00;
    template<uint32_t X>
    static constexpr uint32_t SECWM1R1_SECWM1_PSTRT =   // SECWM1_PSTRT
        bit_field_t<0, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SECWM1R1_SECWM1_PEND =    // SECWM1_PEND
        bit_field_t<16, 0x7f>::value<X>();

    static constexpr uint32_t SECWM1R2_RESET_VALUE = 0xf000f00;
    template<uint32_t X>
    static constexpr uint32_t SECWM1R2_PCROP1_PSTRT =       // PCROP1_PSTRT
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t SECWM1R2_PCROP1EN = 0x8000;   // PCROP1EN
    template<uint32_t X>
    static constexpr uint32_t SECWM1R2_HDP1_PEND =          // HDP1_PEND
        bit_field_t<16, 0x7f>::value<X>();
    static constexpr uint32_t SECWM1R2_HDP1EN = 0x80000000; // HDP1EN

    static constexpr uint32_t WRP1AR_RESET_VALUE = 0xff00ff00;
    template<uint32_t X>
    static constexpr uint32_t WRP1AR_WRP1A_PSTRT =   // WRP1A_PSTRT
        bit_field_t<0, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t WRP1AR_WRP1A_PEND =    // WRP1A_PEND
        bit_field_t<16, 0x7f>::value<X>();

    static constexpr uint32_t WRP1BR_RESET_VALUE = 0xff00ff00;
    template<uint32_t X>
    static constexpr uint32_t WRP1BR_WRP1B_PSTRT =   // WRP1B_PSTRT
        bit_field_t<0, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t WRP1BR_WRP1B_PEND =    // WRP1B_PEND
        bit_field_t<16, 0x7f>::value<X>();

    static constexpr uint32_t SECWM2R1_RESET_VALUE = 0xff00ff00;
    template<uint32_t X>
    static constexpr uint32_t SECWM2R1_SECWM2_PSTRT =   // SECWM2_PSTRT
        bit_field_t<0, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SECWM2R1_SECWM2_PEND =    // SECWM2_PEND
        bit_field_t<16, 0x7f>::value<X>();

    static constexpr uint32_t SECWM2R2_RESET_VALUE = 0xf000f00;
    template<uint32_t X>
    static constexpr uint32_t SECWM2R2_PCROP2_PSTRT =       // PCROP2_PSTRT
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t SECWM2R2_PCROP2EN = 0x8000;   // PCROP2EN
    template<uint32_t X>
    static constexpr uint32_t SECWM2R2_HDP2_PEND =          // HDP2_PEND
        bit_field_t<16, 0x7f>::value<X>();
    static constexpr uint32_t SECWM2R2_HDP2EN = 0x80000000; // HDP2EN

    static constexpr uint32_t WRP2AR_RESET_VALUE = 0xff00ff00;
    template<uint32_t X>
    static constexpr uint32_t WRP2AR_WRP2A_PSTRT =   // WRP2A_PSTRT
        bit_field_t<0, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t WRP2AR_WRP2A_PEND =    // WRP2A_PEND
        bit_field_t<16, 0x7f>::value<X>();

    static constexpr uint32_t WRP2BR_RESET_VALUE = 0xff00ff00;
    template<uint32_t X>
    static constexpr uint32_t WRP2BR_WRP2B_PSTRT =   // WRP2B_PSTRT
        bit_field_t<0, 0x7f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t WRP2BR_WRP2B_PEND =    // WRP2B_PEND
        bit_field_t<16, 0x7f>::value<X>();

    static constexpr uint32_t SECBB1R1_RESET_VALUE = 0x0;

    static constexpr uint32_t SECBB1R2_RESET_VALUE = 0x0;

    static constexpr uint32_t SECBB1R3_RESET_VALUE = 0x0;

    static constexpr uint32_t SECBB1R4_RESET_VALUE = 0x0;

    static constexpr uint32_t SECBB2R1_RESET_VALUE = 0x0;

    static constexpr uint32_t SECBB2R2_RESET_VALUE = 0x0;

    static constexpr uint32_t SECBB2R3_RESET_VALUE = 0x0;

    static constexpr uint32_t SECBB2R4_RESET_VALUE = 0x0;

    static constexpr uint32_t SECHDPCR_RESET_VALUE = 0x0;
    static constexpr uint32_t SECHDPCR_HDP1_ACCDIS = 0x1; // HDP1_ACCDIS
    static constexpr uint32_t SECHDPCR_HDP2_ACCDIS = 0x2; // HDP2_ACCDIS

    static constexpr uint32_t PRIVCFGR_RESET_VALUE = 0x0;
    static constexpr uint32_t PRIVCFGR_PRIV = 0x1; // PRIV
};


template<>
struct peripheral_t<STM32L552, FLASH>
{
    typedef stm32l552_flash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L552, SEC_FLASH>
{
    typedef stm32l552_flash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, FLASH>
{
    typedef stm32l552_flash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32L562, SEC_FLASH>
{
    typedef stm32l552_flash_t T;
    static T& V;
};

using flash_t = peripheral_t<mcu_svd, FLASH>;
using sec_flash_t = peripheral_t<mcu_svd, SEC_FLASH>;

