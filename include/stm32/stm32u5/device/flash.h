#pragma once

////
//
//      STM32U5 FLASH peripherals
//
///

// FLASH: Flash

struct stm32u5xx_flash_t
{
    volatile uint32_t FLASH_ACR; // FLASH access control register
    reserved_t<0x1> _0x4;
    volatile uint32_t FLASH_NSKEYR; // FLASH non-secure key register
    volatile uint32_t FLASH_SECKEYR; // FLASH secure key register
    volatile uint32_t FLASH_OPTKEYR; // FLASH option key register
    reserved_t<0x1> _0x14;
    volatile uint32_t FLASH_PDKEY1R; // FLASH bank 1 power-down key register
    volatile uint32_t FLASH_PDKEY2R; // FLASH bank 2 power-down key register
    volatile uint32_t FLASH_NSSR; // FLASH non-secure status register
    volatile uint32_t FLASH_SECSR; // FLASH secure status register
    volatile uint32_t FLASH_NSCR; // FLASH non-secure control register
    volatile uint32_t FLASH_SECCR; // FLASH secure control register
    volatile uint32_t FLASH_ECCR; // FLASH ECC register
    volatile uint32_t FLASH_OPSR; // FLASH operation status register
    reserved_t<0x2> _0x38;
    volatile uint32_t FLASH_OPTR; // FLASH option register
    volatile uint32_t FLASH_NSBOOTADD0R; // FLASH non-secure boot address 0 register
    volatile uint32_t FLASH_NSBOOTADD1R; // FLASH non-secure boot address 1 register
    volatile uint32_t FLASH_SECBOOTADD0R; // FLASH secure boot address 0 register
    volatile uint32_t FLASH_SECWM1R1; // FLASH secure watermark1 register 1
    volatile uint32_t FLASH_SECWM1R2; // FLASH secure watermark1 register 2
    volatile uint32_t FLASH_WRP1AR; // FLASH WRP1 area A address register
    volatile uint32_t FLASH_WRP1BR; // FLASH WRP1 area B address register
    volatile uint32_t FLASH_SECWM2R1; // FLASH secure watermark2 register 1
    volatile uint32_t FLASH_SECWM2R2; // FLASH secure watermark2 register 2
    volatile uint32_t FLASH_WRP2AR; // FLASH WPR2 area A address register
    volatile uint32_t FLASH_WRP2BR; // FLASH WPR2 area B address register
    volatile uint32_t FLASH_OEM1KEYR1; // FLASH OEM1 key register 1
    volatile uint32_t FLASH_OEM1KEYR2; // FLASH OEM1 key register 2
    volatile uint32_t FLASH_OEM2KEYR1; // FLASH OEM2 key register 1
    volatile uint32_t FLASH_OEM2KEYR2; // FLASH OEM2 key register 2
    volatile uint32_t FLASH_SEC1BBR1; // FLASH secure block based bank 1 register 1
    volatile uint32_t FLASH_SEC1BBR2; // FLASH secure block based bank 1 register 2
    volatile uint32_t FLASH_SEC1BBR3; // FLASH secure block based bank 1 register 3
    volatile uint32_t FLASH_SEC1BBR4; // FLASH secure block based bank 1 register 4
    reserved_t<0x4> _0x90;
    volatile uint32_t FLASH_SEC2BBR1; // FLASH secure block based bank 2 register 1
    volatile uint32_t FLASH_SEC2BBR2; // FLASH secure block based bank 2 register 2
    volatile uint32_t FLASH_SEC2BBR3; // FLASH secure block based bank 2 register 3
    volatile uint32_t FLASH_SEC2BBR4; // FLASH secure block based bank 2 register 4
    reserved_t<0x4> _0xb0;
    volatile uint32_t FLASH_SECHDPCR; // FLASH secure HDP control register
    volatile uint32_t FLASH_PRIVCFGR; // FLASH privilege configuration register
    reserved_t<0x2> _0xc8;
    volatile uint32_t FLASH_PRIV1BBR1; // FLASH privilege block based bank 1 register 1
    volatile uint32_t FLASH_PRIV1BBR2; // FLASH privilege block based bank 1 register 2
    volatile uint32_t FLASH_PRIV1BBR3; // FLASH privilege block based bank 1 register 3
    volatile uint32_t FLASH_PRIV1BBR4; // FLASH privilege block based bank 1 register 4
    reserved_t<0x4> _0xe0;
    volatile uint32_t FLASH_PRIV2BBR1; // FLASH privilege block based bank 2 register 1
    volatile uint32_t FLASH_PRIV2BBR2; // FLASH privilege block based bank 2 register 2
    volatile uint32_t FLASH_PRIV2BBR3; // FLASH privilege block based bank 2 register 3
    volatile uint32_t FLASH_PRIV2BBR4; // FLASH privilege block based bank 2 register 4

    static constexpr uint32_t FLASH_ACR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> FLASH_ACR_LATENCY; // Latency These bits represent the ratio between the HCLK (AHB clock) period and the Flash memory access time. ...
    static constexpr uint32_t FLASH_ACR_PRFTEN = 0x100; // Prefetch enable This bit enables the prefetch buffer in the embedded Flash memory.
    static constexpr uint32_t FLASH_ACR_LPM = 0x800; // Low-power read mode This bit puts the Flash memory in low-power read mode.
    static constexpr uint32_t FLASH_ACR_PDREQ1 = 0x1000; // Bank 1 power-down mode request This bit is write-protected with FLASH_PDKEY1R. This bit requests bank 1 to enter power-down mode. When bank 1 enters power-down mode, this bit is cleared by hardware and the PDKEY1R is locked.
    static constexpr uint32_t FLASH_ACR_PDREQ2 = 0x2000; // Bank 2 power-down mode request This bit is write-protected with FLASH_PDKEY2R. This bit requests bank 2 to enter power-down mode. When bank 2 enters power-down mode, this bit is cleared by hardware and the PDKEY2R is locked.
    static constexpr uint32_t FLASH_ACR_SLEEP_PD = 0x4000; // Flash memory power-down mode during Sleep mode This bit determines whether the Flash memory is in power-down mode or Idle mode when the device is in Sleep mode. The Flash must not be put in power-down while a program or an erase operation is on-going.


    static constexpr uint32_t FLASH_NSKEYR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> FLASH_NSKEYR_NSKEY; // Flash memory non-secure key

    static constexpr uint32_t FLASH_SECKEYR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> FLASH_SECKEYR_SECKEY; // Flash memory secure key

    static constexpr uint32_t FLASH_OPTKEYR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> FLASH_OPTKEYR_OPTKEY; // Option byte key


    static constexpr uint32_t FLASH_PDKEY1R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> FLASH_PDKEY1R_PDKEY1; // Bank 1 power-down key

    static constexpr uint32_t FLASH_PDKEY2R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> FLASH_PDKEY2R_PDKEY2; // Bank 2 power-down key

    static constexpr uint32_t FLASH_NSSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FLASH_NSSR_EOP = 0x1; // Non-secure end of operation
    static constexpr uint32_t FLASH_NSSR_OPERR = 0x2; // Non-secure operation error
    static constexpr uint32_t FLASH_NSSR_PROGERR = 0x8; // Non-secure programming error This bit is set by hardware when a non-secure quad-word address to be programmed contains a value different from all 1 before programming, except if the data to write is all 0. This bit is cleared by writing 1.
    static constexpr uint32_t FLASH_NSSR_WRPERR = 0x10; // Non-secure write protection error This bit is set by hardware when an non-secure address to be erased/programmed belongs to a write-protected part (by WRP, HDP or RDP level 1) of the Flash memory. This bit is cleared by writing 1. Refer to for full conditions of error flag setting.
    static constexpr uint32_t FLASH_NSSR_PGAERR = 0x20; // Non-secure programming alignment error This bit is set by hardware when the first word to be programmed is not aligned with a quad-word address, or the second, third or forth word does not belong to the same quad-word address. This bit is cleared by writing 1.
    static constexpr uint32_t FLASH_NSSR_SIZERR = 0x40; // Non-secure size error This bit is set by hardware when the size of the access is a byte or half-word during a non-secure program sequence. Only quad-word programming is allowed by means of successive word accesses. This bit is cleared by writing 1.
    static constexpr uint32_t FLASH_NSSR_PGSERR = 0x80; // Non-secure programming sequence error This bit is set by hardware when programming sequence is not correct. It is cleared by writing 1. Refer to for full conditions of error flag setting.
    static constexpr uint32_t FLASH_NSSR_OPTWERR = 0x2000; // Option write error This bit is set by hardware when the options bytes are written with an invalid configuration. It is cleared by writing 1. Refer to for full conditions of error flag setting.
    static constexpr uint32_t FLASH_NSSR_BSY = 0x10000; // Non-secure busy This indicates that a Flash memory secure or non-secure operation is in progress. This bit is set at the beginning of a Flash operation and reset when the operation finishes or when an error occurs.
    static constexpr uint32_t FLASH_NSSR_WDW = 0x20000; // Non-secure wait data to write This bit indicates that the Flash memory write buffer has been written by a secure or non-secure operation. It is set when the first data is stored in the buffer and cleared when the write is performed in the Flash memory.
    static constexpr uint32_t FLASH_NSSR_OEM1LOCK = 0x40000; // OEM1 lock This bit indicates that the OEM1 RDP key read during the OBL is not virgin. When set, the OEM1 RDP lock mechanism is active.
    static constexpr uint32_t FLASH_NSSR_OEM2LOCK = 0x80000; // OEM2 lock This bit indicates that the OEM2 RDP key read during the OBL is not virgin. When set, the OEM2 RDP lock mechanism is active.
    static constexpr uint32_t FLASH_NSSR_PD1 = 0x100000; // Bank 1 in power-down mode This bit indicates that the Flash memory bank 1 is in power-down state. It is reset when bank1 is in normal mode or being awaken.
    static constexpr uint32_t FLASH_NSSR_PD2 = 0x200000; // Bank 2 in power-down mode This bit indicates that the Flash memory bank 2 is in power-down state. It is reset when bank2 is in normal mode or being awaken.

    static constexpr uint32_t FLASH_SECSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FLASH_SECSR_EOP = 0x1; // Secure end of operation This bit is set by hardware when one or more Flash memory secure operation (program/erase) has been completed successfully. This bit is set only if the secure end of operation interrupts are enabled (EOPIE = 1 in FLASH_SECCR). This bit is cleared by writing1.
    static constexpr uint32_t FLASH_SECSR_OPERR = 0x2; // Secure operation error This bit is set by hardware when a Flash memory secure operation (program/erase) completes unsuccessfully. This bit is set only if secure error interrupts are enabled (SECERRIE = 1). This bit is cleared by writing 1.
    static constexpr uint32_t FLASH_SECSR_PROGERR = 0x8; // Secure programming error This bit is set by hardware when a secure quad-word address to be programmed contains a value different from all 1 before programming, except if the data to write is all 0. This bit is cleared by writing 1.
    static constexpr uint32_t FLASH_SECSR_WRPERR = 0x10; // Secure write protection error This bit is set by hardware when an secure address to be erased/programmed belongs to a write-protected part (by WRP, PCROP, HDP or RDP level 1) of the Flash memory.This bit is cleared by writing 1. Refer to for full conditions of error flag setting.
    static constexpr uint32_t FLASH_SECSR_PGAERR = 0x20; // Secure programming alignment error This bit is set by hardware when the first word to be programmed is not aligned with a quad-word address, or the second, third or forth word does not belong to the same quad-word address.This bit is cleared by writing 1.
    static constexpr uint32_t FLASH_SECSR_SIZERR = 0x40; // Secure size error This bit is set by hardware when the size of the access is a byte or half-word during a secure program sequence. Only quad-word programming is allowed by means of successive word accesses.This bit is cleared by writing 1.
    static constexpr uint32_t FLASH_SECSR_PGSERR = 0x80; // Secure programming sequence error This bit is set by hardware when programming sequence is not correct. It is cleared by writing 1. Refer to for full conditions of error flag setting.
    static constexpr uint32_t FLASH_SECSR_BSY = 0x10000; // Secure busy This bit indicates that a Flash memory secure or non-secure operation is in progress. This is set on the beginning of a Flash operation and reset when the operation finishes or when an error occurs.
    static constexpr uint32_t FLASH_SECSR_WDW = 0x20000; // Secure wait data to write This bit indicates that the Flash memory write buffer has been written by a secure or non-secure operation. It is set when the first data is stored in the buffer and cleared when the write is performed in the Flash memory.

    static constexpr uint32_t FLASH_NSCR_RESET_VALUE = 0xc0000000; // Reset value
    static constexpr uint32_t FLASH_NSCR_PG = 0x1; // Non-secure programming
    static constexpr uint32_t FLASH_NSCR_PER = 0x2; // Non-secure page erase
    static constexpr uint32_t FLASH_NSCR_MER1 = 0x4; // Non-secure bank 1 mass erase This bit triggers the bank 1 non-secure mass erase (all bank 1 user pages) when set.
    typedef bit_field_t<3, 0x7f> FLASH_NSCR_PNB; // Non-secure page number selection These bits select the page to erase. ...
    static constexpr uint32_t FLASH_NSCR_BKER = 0x800; // Non-secure bank selection for page erase
    static constexpr uint32_t FLASH_NSCR_BWR = 0x4000; // Non-secure burst write programming mode When set, this bit selects the burst write programming mode.
    static constexpr uint32_t FLASH_NSCR_MER2 = 0x8000; // Non-secure bank 2 mass erase This bit triggers the bank 2 non-secure mass erase (all bank 2 user pages) when set.
    static constexpr uint32_t FLASH_NSCR_STRT = 0x10000; // Non-secure start This bit triggers a non-secure erase operation when set. If MER1, MER2 and PER bits are reset and the STRT bit is set, the PGSERR bit in FLASH_NSSR is set (this condition is forbidden). This bit is set only by software and is cleared when the BSY bit is cleared in FLASH_NSSR.
    static constexpr uint32_t FLASH_NSCR_OPTSTRT = 0x20000; // Options modification start This bit triggers an options operation when set. It can not be written if OPTLOCK bit is set. This bit is set only by software, and is cleared when the BSY bit is cleared in FLASH_NSSR.
    static constexpr uint32_t FLASH_NSCR_EOPIE = 0x1000000; // Non-secure end of operation interrupt enable This bit enables the interrupt generation when the EOP bit in the FLASH_NSSR is set to 1.
    static constexpr uint32_t FLASH_NSCR_ERRIE = 0x2000000; // Non-secure error interrupt enable This bit enables the interrupt generation when the OPERR bit in the FLASH_NSSR is set to 1.
    static constexpr uint32_t FLASH_NSCR_OBL_LAUNCH = 0x8000000; // Force the option byte loading When set to 1, this bit forces the option byte reloading. This bit is cleared only when the option byte loading is complete. It cannot be written if OPTLOCK is set.
    static constexpr uint32_t FLASH_NSCR_OPTLOCK = 0x40000000; // Option lock This bit is set only. When set, all bits concerning user options in FLASH_NSCR register are locked. This bit is cleared by hardware after detecting the unlock sequence. The LOCK bit in the FLASH_NSCR must be cleared before doing the unlock sequence for OPTLOCK bit. In case of an unsuccessful unlock operation, this bit remains set until the next reset.
    static constexpr uint32_t FLASH_NSCR_LOCK = 0x80000000; // Non-secure lock This bit is set only. When set, the FLASH_NSCR register is locked. It is cleared by hardware after detecting the unlock sequence in FLASH_NSKEYR register. In case of an unsuccessful unlock operation, this bit remains set until the next system reset.

    static constexpr uint32_t FLASH_SECCR_RESET_VALUE = 0x80000000; // Reset value
    static constexpr uint32_t FLASH_SECCR_PG = 0x1; // Secure programming
    static constexpr uint32_t FLASH_SECCR_PER = 0x2; // Secure page erase
    static constexpr uint32_t FLASH_SECCR_MER1 = 0x4; // Secure bank 1 mass erase This bit triggers the bank 1 secure mass erase (all bank 1 user pages) when set.
    typedef bit_field_t<3, 0x7f> FLASH_SECCR_PNB; // Secure page number selection These bits select the page to erase: ...
    static constexpr uint32_t FLASH_SECCR_BKER = 0x800; // Secure bank selection for page erase
    static constexpr uint32_t FLASH_SECCR_BWR = 0x4000; // Secure burst write programming mode When set, this bit selects the burst write programming mode.
    static constexpr uint32_t FLASH_SECCR_MER2 = 0x8000; // Secure bank 2 mass erase This bit triggers the bank 2 secure mass erase (all bank 2 user pages) when set.
    static constexpr uint32_t FLASH_SECCR_STRT = 0x10000; // Secure start This bit triggers a secure erase operation when set. If MER1, MER2 and PER bits are reset and the STRT bit is set, the PGSERR in the FLASH_SECSR is set (this condition is forbidden). This bit is set only by software and is cleared when the BSY bit is cleared in FLASH_SECSR.
    static constexpr uint32_t FLASH_SECCR_EOPIE = 0x1000000; // Secure End of operation interrupt enable This bit enables the interrupt generation when the EOP bit in the FLASH_SECSR is set to 1.
    static constexpr uint32_t FLASH_SECCR_ERRIE = 0x2000000; // Secure error interrupt enable
    static constexpr uint32_t FLASH_SECCR_RDERRIE = 0x4000000; // Secure PCROP read error interrupt enable
    static constexpr uint32_t FLASH_SECCR_INV = 0x20000000; // Flash memory security state invert This bit inverts the Flash memory security state.
    static constexpr uint32_t FLASH_SECCR_LOCK = 0x80000000; // Secure lock This bit is set only. When set, the FLASH_SECCR register is locked. It is cleared by hardware after detecting the unlock sequence in FLASH_SECKEYR register. In case of an unsuccessful unlock operation, this bit remains set until the next system reset.

    static constexpr uint32_t FLASH_ECCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfffff> FLASH_ECCR_ADDR_ECC; // ECC fail address
    static constexpr uint32_t FLASH_ECCR_BK_ECC = 0x200000; // ECC fail bank
    static constexpr uint32_t FLASH_ECCR_SYSF_ECC = 0x400000; // System Flash memory ECC fail This bit indicates that the ECC error correction or double ECC error detection is located in the system Flash memory.
    static constexpr uint32_t FLASH_ECCR_ECCIE = 0x1000000; // ECC correction interrupt enable This bit enables the interrupt generation when the ECCC bit in the FLASH_ECCR register is set.
    static constexpr uint32_t FLASH_ECCR_ECCC = 0x40000000; // ECC correction This bit is set by hardware when one ECC error has been detected and corrected (only if ECCC and ECCD were previously cleared). An interrupt is generated if ECCIE is set. This bit is cleared by writing 1.
    static constexpr uint32_t FLASH_ECCR_ECCD = 0x80000000; // ECC detection This bit is set by hardware when two ECC errors have been detected (only if ECCC and ECCD were previously cleared). When this bit is set, a NMI is generated. This bit is cleared by writing 1.

    static constexpr uint32_t FLASH_OPSR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xfffff> FLASH_OPSR_ADDR_OP; // Interrupted operation address This field indicates which address in the Flash memory was accessed when reset occurred. The address is given by bank from address 0x00000 to 0xFFFF0.
    static constexpr uint32_t FLASH_OPSR_BK_OP = 0x200000; // Interrupted operation bank This bit indicates which Flash memory bank was accessed when reset occurred
    static constexpr uint32_t FLASH_OPSR_SYSF_OP = 0x400000; // Operation in system Flash memory interrupted This bit indicates that the reset occurred during an operation in the system Flash memory.
    typedef bit_field_t<29, 0x7> FLASH_OPSR_CODE_OP; // Flash memory operation code This field indicates which Flash memory operation has been interrupted by a system reset:


    static constexpr uint32_t FLASH_OPTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> FLASH_OPTR_RDP; // Readout protection level Others: Level 1 (memories readout protection active) Note: Refer to for more details.
    typedef bit_field_t<8, 0x7> FLASH_OPTR_BOR_LEV; // BOR reset level These bits contain the VDD supply level threshold that activates/releases the reset.
    static constexpr uint32_t FLASH_OPTR_NRST_STOP = 0x1000; // Reset generation in Stop mode
    static constexpr uint32_t FLASH_OPTR_NRST_STDBY = 0x2000; // Reset generation in Standby mode
    static constexpr uint32_t FLASH_OPTR_NRST_SHDW = 0x4000; // Reset generation in Shutdown mode
    static constexpr uint32_t FLASH_OPTR_SRAM1345_RST = 0x8000; // SRAM1, SRAM3 and SRAM4 erase upon system reset
    static constexpr uint32_t FLASH_OPTR_IWDG_SW = 0x10000; // Independent watchdog selection
    static constexpr uint32_t FLASH_OPTR_IWDG_STOP = 0x20000; // Independent watchdog counter freeze in Stop mode
    static constexpr uint32_t FLASH_OPTR_IWDG_STDBY = 0x40000; // Independent watchdog counter freeze in Standby mode
    static constexpr uint32_t FLASH_OPTR_WWDG_SW = 0x80000; // Window watchdog selection
    static constexpr uint32_t FLASH_OPTR_SWAP_BANK = 0x100000; // Swap banks
    static constexpr uint32_t FLASH_OPTR_DUALBANK = 0x200000; // Dual-bank on 1-Mbyte and 512-Kbyte Flash memory devices
    static constexpr uint32_t FLASH_OPTR_BKPRAM_ECC = 0x400000; // Backup RAM ECC detection and correction enable
    static constexpr uint32_t FLASH_OPTR_SRAM3_ECC = 0x800000; // SRAM3 ECC detection and correction enable
    static constexpr uint32_t FLASH_OPTR_SRAM2_ECC = 0x1000000; // SRAM2 ECC detection and correction enable
    static constexpr uint32_t FLASH_OPTR_SRAM2_RST = 0x2000000; // SRAM2 erase when system reset
    static constexpr uint32_t FLASH_OPTR_NSWBOOT0 = 0x4000000; // Software BOOT0
    static constexpr uint32_t FLASH_OPTR_NBOOT0 = 0x8000000; // nBOOT0 option bit
    static constexpr uint32_t FLASH_OPTR_PA15_PUPEN = 0x10000000; // PA15 pull-up enable
    static constexpr uint32_t FLASH_OPTR_IO_VDD_HSLV = 0x20000000; // High-speed IO at low VDD voltage configuration bit This bit can be set only with VDD below 2.5V
    static constexpr uint32_t FLASH_OPTR_IO_VDDIO2_HSLV = 0x40000000; // High-speed IO at low VDDIO2 voltage configuration bit This bit can be set only with VDDIO2 below 2.5V.
    static constexpr uint32_t FLASH_OPTR_TZEN = 0x80000000; // Global TrustZone security enable

    static constexpr uint32_t FLASH_NSBOOTADD0R_RESET_VALUE = 0xf; // Reset value
    typedef bit_field_t<7, 0x1ffffff> FLASH_NSBOOTADD0R_NSBOOTADD0; // Non-secure boot base address 0 The non-secure boot memory address can be programmed to any address in the valid address range with a granularity of 128 bytes. These bits correspond to address [31:7]. The NSBOOTADD0 option bytes are selected following the BOOT0 pin or nSWBOOT0 state. Examples: NSBOOTADD0[24:0] = 0x0100000: Boot from non-secure Flash memory (0x0800 0000) NSBOOTADD0[24:0] = 0x017F200: Boot from system memory bootloader (0x0BF9 0000) NSBOOTADD0[24:0] = 0x0400000: Boot from non-secure SRAM1 on S-Bus (0x2000 0000)

    static constexpr uint32_t FLASH_NSBOOTADD1R_RESET_VALUE = 0xf; // Reset value
    typedef bit_field_t<7, 0x1ffffff> FLASH_NSBOOTADD1R_NSBOOTADD1; // Non-secure boot address 1 The non-secure boot memory address can be programmed to any address in the valid address range with a granularity of 128 bytes. These bits correspond to address [31:7]. The NSBOOTADD0 option bytes are selected following the BOOT0 pin or nSWBOOT0 state. Examples: NSBOOTADD1[24:0] = 0x0100000: Boot from non-secure Flash memory (0x0800 0000) NSBOOTADD1[24:0] = 0x017F200: Boot from system memory bootloader (0x0BF9 0000) NSBOOTADD1[24:0] = 0x0400000: Boot from non-secure SRAM1 on S-Bus (0x2000 0000)

    static constexpr uint32_t FLASH_SECBOOTADD0R_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FLASH_SECBOOTADD0R_BOOT_LOCK = 0x1; // Boot lock When set, the boot is always forced to base address value programmed in SECBOOTADD0[24:0] option bytes whatever the boot selection option. When set, this bit can only be cleared by an RDP at level 0.
    typedef bit_field_t<7, 0x1ffffff> FLASH_SECBOOTADD0R_SECBOOTADD0; // Secure boot base address 0 The secure boot memory address can be programmed to any address in the valid address range with a granularity of 128 bytes. This bits correspond to address [31:7] The SECBOOTADD0 option bytes are selected following the BOOT0 pin or nSWBOOT0 state. Examples: SECBOOTADD0[24:0] = 0x018 0000: Boot from secure Flash memory (0x0C00 0000) SECBOOTADD0[24:0] = 0x01F F000: Boot from RSS (0x0FF8 0000) SECBOOTADD0[24:0] = 0x060 0000: Boot from secure SRAM1 on S-Bus (0x3000 0000)

    static constexpr uint32_t FLASH_SECWM1R1_RESET_VALUE = 0xff00ff00; // Reset value
    typedef bit_field_t<0, 0x7f> FLASH_SECWM1R1_SECWM1_PSTRT; // Start page of first secure area This field contains the first page of the secure area in bank 1.
    typedef bit_field_t<16, 0x7f> FLASH_SECWM1R1_SECWM1_PEND; // End page of first secure area This field contains the last page of the secure area in bank 1.

    static constexpr uint32_t FLASH_SECWM1R2_RESET_VALUE = 0xf00ffff; // Reset value
    typedef bit_field_t<16, 0x7f> FLASH_SECWM1R2_HDP1_PEND; // End page of first hide protection area This field contains the last page of the HDP area in bank 1.
    static constexpr uint32_t FLASH_SECWM1R2_HDP1EN = 0x80000000; // Hide protection first area enable

    static constexpr uint32_t FLASH_WRP1AR_RESET_VALUE = 0xf00ff00; // Reset value
    typedef bit_field_t<0, 0x7f> FLASH_WRP1AR_WRP1A_PSTRT; // bank 1 WPR first area A start page This field contains the first page of the first WPR area for bank 1.
    typedef bit_field_t<16, 0x7f> FLASH_WRP1AR_WRP1A_PEND; // Bank 1 WPR first area A end page This field contains the last page of the first WPR area in bank 1.
    static constexpr uint32_t FLASH_WRP1AR_UNLOCK = 0x80000000; // Bank 1 WPR first area A unlock

    static constexpr uint32_t FLASH_WRP1BR_RESET_VALUE = 0xf00ff00; // Reset value
    typedef bit_field_t<0, 0x7f> FLASH_WRP1BR_WRP1B_PSTRT; // Bank 1 WRP second area B start page This field contains the first page of the second WRP area for bank 1.
    typedef bit_field_t<16, 0x7f> FLASH_WRP1BR_WRP1B_PEND; // Bank 1 WRP second area B end page This field contains the last page of the second WRP area in bank 1.
    static constexpr uint32_t FLASH_WRP1BR_UNLOCK = 0x80000000; // Bank 1 WPR second area B unlock

    static constexpr uint32_t FLASH_SECWM2R1_RESET_VALUE = 0xff00ff00; // Reset value
    typedef bit_field_t<0, 0x7f> FLASH_SECWM2R1_SECWM2_PSTRT; // Start page of second secure area This field contains the first page of the secure area in bank 2.
    typedef bit_field_t<16, 0x7f> FLASH_SECWM2R1_SECWM2_PEND; // End page of second secure area This field contains the last page of the secure area in bank 2.

    static constexpr uint32_t FLASH_SECWM2R2_RESET_VALUE = 0xf00ffff; // Reset value
    typedef bit_field_t<16, 0x7f> FLASH_SECWM2R2_HDP2_PEND; // End page of hide protection second area HDP2_PEND contains the last page of the HDP area in bank 2.
    static constexpr uint32_t FLASH_SECWM2R2_HDP2EN = 0x80000000; // Hide protection second area enable

    static constexpr uint32_t FLASH_WRP2AR_RESET_VALUE = 0xf00ff00; // Reset value
    typedef bit_field_t<0, 0x7f> FLASH_WRP2AR_WRP2A_PSTRT; // Bank 2 WPR first area A start page This field contains the first page of the first WRP area for bank 2.
    typedef bit_field_t<16, 0x7f> FLASH_WRP2AR_WRP2A_PEND; // Bank 2 WPR first area A end page This field contains the last page of the first WRP area in bank 2.
    static constexpr uint32_t FLASH_WRP2AR_UNLOCK = 0x80000000; // Bank 2 WPR first area A unlock

    static constexpr uint32_t FLASH_WRP2BR_RESET_VALUE = 0xf00ff00; // Reset value
    typedef bit_field_t<0, 0x7f> FLASH_WRP2BR_WRP2B_PSTRT; // Bank 2 WPR second area B start page This field contains the first page of the second WRP area for bank 2.
    typedef bit_field_t<16, 0x7f> FLASH_WRP2BR_WRP2B_PEND; // Bank 2 WPR second area B end page This field contains the last page of the second WRP area in bank 2.
    static constexpr uint32_t FLASH_WRP2BR_UNLOCK = 0x80000000; // Bank 2 WPR second area B unlock

    static constexpr uint32_t FLASH_OEM1KEYR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> FLASH_OEM1KEYR1_OEM1KEY; // OEM1 least significant bytes key

    static constexpr uint32_t FLASH_OEM1KEYR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> FLASH_OEM1KEYR2_OEM1KEY; // OEM1 most significant bytes key

    static constexpr uint32_t FLASH_OEM2KEYR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> FLASH_OEM2KEYR1_OEM2KEY; // OEM2 least significant bytes key

    static constexpr uint32_t FLASH_OEM2KEYR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> FLASH_OEM2KEYR2_OEM2KEY; // OEM2 most significant bytes key

    static constexpr uint32_t FLASH_SEC1BBR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FLASH_SEC1BBR1_SEC1BB0 = 0x1; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR1_SEC1BB1 = 0x2; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR1_SEC1BB2 = 0x4; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR1_SEC1BB3 = 0x8; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR1_SEC1BB4 = 0x10; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR1_SEC1BB5 = 0x20; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR1_SEC1BB6 = 0x40; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR1_SEC1BB7 = 0x80; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR1_SEC1BB8 = 0x100; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR1_SEC1BB9 = 0x200; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR1_SEC1BB10 = 0x400; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR1_SEC1BB11 = 0x800; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR1_SEC1BB12 = 0x1000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR1_SEC1BB13 = 0x2000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR1_SEC1BB14 = 0x4000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR1_SEC1BB15 = 0x8000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR1_SEC1BB16 = 0x10000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR1_SEC1BB17 = 0x20000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR1_SEC1BB18 = 0x40000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR1_SEC1BB19 = 0x80000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR1_SEC1BB20 = 0x100000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR1_SEC1BB21 = 0x200000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR1_SEC1BB22 = 0x400000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR1_SEC1BB23 = 0x800000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR1_SEC1BB24 = 0x1000000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR1_SEC1BB25 = 0x2000000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR1_SEC1BB26 = 0x4000000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR1_SEC1BB27 = 0x8000000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR1_SEC1BB28 = 0x10000000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR1_SEC1BB29 = 0x20000000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR1_SEC1BB30 = 0x40000000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR1_SEC1BB31 = 0x80000000; // page secure/non-secure attribution

    static constexpr uint32_t FLASH_SEC1BBR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FLASH_SEC1BBR2_SEC1BB0 = 0x1; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR2_SEC1BB1 = 0x2; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR2_SEC1BB2 = 0x4; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR2_SEC1BB3 = 0x8; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR2_SEC1BB4 = 0x10; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR2_SEC1BB5 = 0x20; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR2_SEC1BB6 = 0x40; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR2_SEC1BB7 = 0x80; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR2_SEC1BB8 = 0x100; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR2_SEC1BB9 = 0x200; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR2_SEC1BB10 = 0x400; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR2_SEC1BB11 = 0x800; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR2_SEC1BB12 = 0x1000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR2_SEC1BB13 = 0x2000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR2_SEC1BB14 = 0x4000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR2_SEC1BB15 = 0x8000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR2_SEC1BB16 = 0x10000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR2_SEC1BB17 = 0x20000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR2_SEC1BB18 = 0x40000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR2_SEC1BB19 = 0x80000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR2_SEC1BB20 = 0x100000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR2_SEC1BB21 = 0x200000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR2_SEC1BB22 = 0x400000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR2_SEC1BB23 = 0x800000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR2_SEC1BB24 = 0x1000000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR2_SEC1BB25 = 0x2000000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR2_SEC1BB26 = 0x4000000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR2_SEC1BB27 = 0x8000000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR2_SEC1BB28 = 0x10000000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR2_SEC1BB29 = 0x20000000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR2_SEC1BB30 = 0x40000000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR2_SEC1BB31 = 0x80000000; // page secure/non-secure attribution

    static constexpr uint32_t FLASH_SEC1BBR3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FLASH_SEC1BBR3_SEC1BB0 = 0x1; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR3_SEC1BB1 = 0x2; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR3_SEC1BB2 = 0x4; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR3_SEC1BB3 = 0x8; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR3_SEC1BB4 = 0x10; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR3_SEC1BB5 = 0x20; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR3_SEC1BB6 = 0x40; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR3_SEC1BB7 = 0x80; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR3_SEC1BB8 = 0x100; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR3_SEC1BB9 = 0x200; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR3_SEC1BB10 = 0x400; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR3_SEC1BB11 = 0x800; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR3_SEC1BB12 = 0x1000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR3_SEC1BB13 = 0x2000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR3_SEC1BB14 = 0x4000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR3_SEC1BB15 = 0x8000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR3_SEC1BB16 = 0x10000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR3_SEC1BB17 = 0x20000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR3_SEC1BB18 = 0x40000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR3_SEC1BB19 = 0x80000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR3_SEC1BB20 = 0x100000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR3_SEC1BB21 = 0x200000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR3_SEC1BB22 = 0x400000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR3_SEC1BB23 = 0x800000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR3_SEC1BB24 = 0x1000000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR3_SEC1BB25 = 0x2000000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR3_SEC1BB26 = 0x4000000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR3_SEC1BB27 = 0x8000000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR3_SEC1BB28 = 0x10000000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR3_SEC1BB29 = 0x20000000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR3_SEC1BB30 = 0x40000000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR3_SEC1BB31 = 0x80000000; // page secure/non-secure attribution

    static constexpr uint32_t FLASH_SEC1BBR4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FLASH_SEC1BBR4_SEC1BB0 = 0x1; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR4_SEC1BB1 = 0x2; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR4_SEC1BB2 = 0x4; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR4_SEC1BB3 = 0x8; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR4_SEC1BB4 = 0x10; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR4_SEC1BB5 = 0x20; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR4_SEC1BB6 = 0x40; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR4_SEC1BB7 = 0x80; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR4_SEC1BB8 = 0x100; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR4_SEC1BB9 = 0x200; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR4_SEC1BB10 = 0x400; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR4_SEC1BB11 = 0x800; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR4_SEC1BB12 = 0x1000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR4_SEC1BB13 = 0x2000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR4_SEC1BB14 = 0x4000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR4_SEC1BB15 = 0x8000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR4_SEC1BB16 = 0x10000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR4_SEC1BB17 = 0x20000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR4_SEC1BB18 = 0x40000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR4_SEC1BB19 = 0x80000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR4_SEC1BB20 = 0x100000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR4_SEC1BB21 = 0x200000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR4_SEC1BB22 = 0x400000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR4_SEC1BB23 = 0x800000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR4_SEC1BB24 = 0x1000000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR4_SEC1BB25 = 0x2000000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR4_SEC1BB26 = 0x4000000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR4_SEC1BB27 = 0x8000000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR4_SEC1BB28 = 0x10000000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR4_SEC1BB29 = 0x20000000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR4_SEC1BB30 = 0x40000000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC1BBR4_SEC1BB31 = 0x80000000; // page secure/non-secure attribution


    static constexpr uint32_t FLASH_SEC2BBR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FLASH_SEC2BBR1_SEC2BB0 = 0x1; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR1_SEC2BB1 = 0x2; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR1_SEC2BB2 = 0x4; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR1_SEC2BB3 = 0x8; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR1_SEC2BB4 = 0x10; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR1_SEC2BB5 = 0x20; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR1_SEC2BB6 = 0x40; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR1_SEC2BB7 = 0x80; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR1_SEC2BB8 = 0x100; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR1_SEC2BB9 = 0x200; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR1_SEC2BB10 = 0x400; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR1_SEC2BB11 = 0x800; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR1_SEC2BB12 = 0x1000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR1_SEC2BB13 = 0x2000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR1_SEC2BB14 = 0x4000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR1_SEC2BB15 = 0x8000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR1_SEC2BB16 = 0x10000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR1_SEC2BB17 = 0x20000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR1_SEC2BB18 = 0x40000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR1_SEC2BB19 = 0x80000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR1_SEC2BB20 = 0x100000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR1_SEC2BB21 = 0x200000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR1_SEC2BB22 = 0x400000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR1_SEC2BB23 = 0x800000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR1_SEC2BB24 = 0x1000000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR1_SEC2BB25 = 0x2000000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR1_SEC2BB26 = 0x4000000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR1_SEC2BB27 = 0x8000000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR1_SEC2BB28 = 0x10000000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR1_SEC2BB29 = 0x20000000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR1_SEC2BB30 = 0x40000000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR1_SEC2BB31 = 0x80000000; // page secure/non-secure attribution

    static constexpr uint32_t FLASH_SEC2BBR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FLASH_SEC2BBR2_SEC2BB0 = 0x1; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR2_SEC2BB1 = 0x2; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR2_SEC2BB2 = 0x4; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR2_SEC2BB3 = 0x8; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR2_SEC2BB4 = 0x10; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR2_SEC2BB5 = 0x20; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR2_SEC2BB6 = 0x40; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR2_SEC2BB7 = 0x80; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR2_SEC2BB8 = 0x100; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR2_SEC2BB9 = 0x200; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR2_SEC2BB10 = 0x400; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR2_SEC2BB11 = 0x800; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR2_SEC2BB12 = 0x1000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR2_SEC2BB13 = 0x2000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR2_SEC2BB14 = 0x4000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR2_SEC2BB15 = 0x8000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR2_SEC2BB16 = 0x10000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR2_SEC2BB17 = 0x20000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR2_SEC2BB18 = 0x40000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR2_SEC2BB19 = 0x80000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR2_SEC2BB20 = 0x100000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR2_SEC2BB21 = 0x200000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR2_SEC2BB22 = 0x400000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR2_SEC2BB23 = 0x800000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR2_SEC2BB24 = 0x1000000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR2_SEC2BB25 = 0x2000000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR2_SEC2BB26 = 0x4000000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR2_SEC2BB27 = 0x8000000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR2_SEC2BB28 = 0x10000000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR2_SEC2BB29 = 0x20000000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR2_SEC2BB30 = 0x40000000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR2_SEC2BB31 = 0x80000000; // page secure/non-secure attribution

    static constexpr uint32_t FLASH_SEC2BBR3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FLASH_SEC2BBR3_SEC2BB0 = 0x1; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR3_SEC2BB1 = 0x2; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR3_SEC2BB2 = 0x4; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR3_SEC2BB3 = 0x8; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR3_SEC2BB4 = 0x10; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR3_SEC2BB5 = 0x20; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR3_SEC2BB6 = 0x40; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR3_SEC2BB7 = 0x80; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR3_SEC2BB8 = 0x100; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR3_SEC2BB9 = 0x200; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR3_SEC2BB10 = 0x400; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR3_SEC2BB11 = 0x800; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR3_SEC2BB12 = 0x1000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR3_SEC2BB13 = 0x2000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR3_SEC2BB14 = 0x4000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR3_SEC2BB15 = 0x8000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR3_SEC2BB16 = 0x10000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR3_SEC2BB17 = 0x20000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR3_SEC2BB18 = 0x40000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR3_SEC2BB19 = 0x80000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR3_SEC2BB20 = 0x100000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR3_SEC2BB21 = 0x200000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR3_SEC2BB22 = 0x400000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR3_SEC2BB23 = 0x800000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR3_SEC2BB24 = 0x1000000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR3_SEC2BB25 = 0x2000000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR3_SEC2BB26 = 0x4000000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR3_SEC2BB27 = 0x8000000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR3_SEC2BB28 = 0x10000000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR3_SEC2BB29 = 0x20000000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR3_SEC2BB30 = 0x40000000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR3_SEC2BB31 = 0x80000000; // page secure/non-secure attribution

    static constexpr uint32_t FLASH_SEC2BBR4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FLASH_SEC2BBR4_SEC2BB0 = 0x1; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR4_SEC2BB1 = 0x2; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR4_SEC2BB2 = 0x4; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR4_SEC2BB3 = 0x8; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR4_SEC2BB4 = 0x10; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR4_SEC2BB5 = 0x20; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR4_SEC2BB6 = 0x40; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR4_SEC2BB7 = 0x80; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR4_SEC2BB8 = 0x100; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR4_SEC2BB9 = 0x200; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR4_SEC2BB10 = 0x400; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR4_SEC2BB11 = 0x800; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR4_SEC2BB12 = 0x1000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR4_SEC2BB13 = 0x2000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR4_SEC2BB14 = 0x4000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR4_SEC2BB15 = 0x8000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR4_SEC2BB16 = 0x10000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR4_SEC2BB17 = 0x20000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR4_SEC2BB18 = 0x40000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR4_SEC2BB19 = 0x80000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR4_SEC2BB20 = 0x100000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR4_SEC2BB21 = 0x200000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR4_SEC2BB22 = 0x400000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR4_SEC2BB23 = 0x800000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR4_SEC2BB24 = 0x1000000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR4_SEC2BB25 = 0x2000000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR4_SEC2BB26 = 0x4000000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR4_SEC2BB27 = 0x8000000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR4_SEC2BB28 = 0x10000000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR4_SEC2BB29 = 0x20000000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR4_SEC2BB30 = 0x40000000; // page secure/non-secure attribution
    static constexpr uint32_t FLASH_SEC2BBR4_SEC2BB31 = 0x80000000; // page secure/non-secure attribution


    static constexpr uint32_t FLASH_SECHDPCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FLASH_SECHDPCR_HDP1_ACCDIS = 0x1; // HDP1 area access disable When set, this bit is only cleared by a system reset.
    static constexpr uint32_t FLASH_SECHDPCR_HDP2_ACCDIS = 0x2; // HDP2 area access disable When set, this bit is only cleared by a system reset.

    static constexpr uint32_t FLASH_PRIVCFGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FLASH_PRIVCFGR_SPRIV = 0x1; // Privileged protection for secure registers This bit can be accessed only when TrustZone is enabled (TZEN=1). This bit can be read by both privileged or unprivileged, secure and non-secure access. The SPRIV bit can be written only by a secure privileged access. A non-secure write access on SPRIV bit is ignored. A secure unprivileged write access on SPRIV bit is ignored.
    static constexpr uint32_t FLASH_PRIVCFGR_NSPRIV = 0x2; // Privileged protection for non-secure registers This bit can be read by both privileged or unprivileged, secure and non-secure access. The NSPRIV bit can be written by a secure or non-secure privileged access. A secure or non-secure unprivileged write access on NSPRIV bit is ignored.


    static constexpr uint32_t FLASH_PRIV1BBR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FLASH_PRIV1BBR1_PRIV1BB0 = 0x1; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR1_PRIV1BB1 = 0x2; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR1_PRIV1BB2 = 0x4; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR1_PRIV1BB3 = 0x8; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR1_PRIV1BB4 = 0x10; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR1_PRIV1BB5 = 0x20; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR1_PRIV1BB6 = 0x40; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR1_PRIV1BB7 = 0x80; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR1_PRIV1BB8 = 0x100; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR1_PRIV1BB9 = 0x200; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR1_PRIV1BB10 = 0x400; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR1_PRIV1BB11 = 0x800; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR1_PRIV1BB12 = 0x1000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR1_PRIV1BB13 = 0x2000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR1_PRIV1BB14 = 0x4000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR1_PRIV1BB15 = 0x8000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR1_PRIV1BB16 = 0x10000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR1_PRIV1BB17 = 0x20000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR1_PRIV1BB18 = 0x40000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR1_PRIV1BB19 = 0x80000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR1_PRIV1BB20 = 0x100000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR1_PRIV1BB21 = 0x200000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR1_PRIV1BB22 = 0x400000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR1_PRIV1BB23 = 0x800000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR1_PRIV1BB24 = 0x1000000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR1_PRIV1BB25 = 0x2000000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR1_PRIV1BB26 = 0x4000000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR1_PRIV1BB27 = 0x8000000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR1_PRIV1BB28 = 0x10000000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR1_PRIV1BB29 = 0x20000000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR1_PRIV1BB30 = 0x40000000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR1_PRIV1BB31 = 0x80000000; // page privileged/unprivileged attribution

    static constexpr uint32_t FLASH_PRIV1BBR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FLASH_PRIV1BBR2_PRIV1BB0 = 0x1; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR2_PRIV1BB1 = 0x2; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR2_PRIV1BB2 = 0x4; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR2_PRIV1BB3 = 0x8; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR2_PRIV1BB4 = 0x10; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR2_PRIV1BB5 = 0x20; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR2_PRIV1BB6 = 0x40; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR2_PRIV1BB7 = 0x80; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR2_PRIV1BB8 = 0x100; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR2_PRIV1BB9 = 0x200; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR2_PRIV1BB10 = 0x400; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR2_PRIV1BB11 = 0x800; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR2_PRIV1BB12 = 0x1000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR2_PRIV1BB13 = 0x2000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR2_PRIV1BB14 = 0x4000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR2_PRIV1BB15 = 0x8000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR2_PRIV1BB16 = 0x10000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR2_PRIV1BB17 = 0x20000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR2_PRIV1BB18 = 0x40000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR2_PRIV1BB19 = 0x80000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR2_PRIV1BB20 = 0x100000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR2_PRIV1BB21 = 0x200000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR2_PRIV1BB22 = 0x400000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR2_PRIV1BB23 = 0x800000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR2_PRIV1BB24 = 0x1000000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR2_PRIV1BB25 = 0x2000000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR2_PRIV1BB26 = 0x4000000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR2_PRIV1BB27 = 0x8000000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR2_PRIV1BB28 = 0x10000000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR2_PRIV1BB29 = 0x20000000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR2_PRIV1BB30 = 0x40000000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR2_PRIV1BB31 = 0x80000000; // page privileged/unprivileged attribution

    static constexpr uint32_t FLASH_PRIV1BBR3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FLASH_PRIV1BBR3_PRIV1BB0 = 0x1; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR3_PRIV1BB1 = 0x2; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR3_PRIV1BB2 = 0x4; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR3_PRIV1BB3 = 0x8; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR3_PRIV1BB4 = 0x10; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR3_PRIV1BB5 = 0x20; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR3_PRIV1BB6 = 0x40; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR3_PRIV1BB7 = 0x80; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR3_PRIV1BB8 = 0x100; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR3_PRIV1BB9 = 0x200; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR3_PRIV1BB10 = 0x400; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR3_PRIV1BB11 = 0x800; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR3_PRIV1BB12 = 0x1000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR3_PRIV1BB13 = 0x2000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR3_PRIV1BB14 = 0x4000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR3_PRIV1BB15 = 0x8000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR3_PRIV1BB16 = 0x10000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR3_PRIV1BB17 = 0x20000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR3_PRIV1BB18 = 0x40000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR3_PRIV1BB19 = 0x80000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR3_PRIV1BB20 = 0x100000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR3_PRIV1BB21 = 0x200000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR3_PRIV1BB22 = 0x400000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR3_PRIV1BB23 = 0x800000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR3_PRIV1BB24 = 0x1000000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR3_PRIV1BB25 = 0x2000000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR3_PRIV1BB26 = 0x4000000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR3_PRIV1BB27 = 0x8000000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR3_PRIV1BB28 = 0x10000000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR3_PRIV1BB29 = 0x20000000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR3_PRIV1BB30 = 0x40000000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR3_PRIV1BB31 = 0x80000000; // page privileged/unprivileged attribution

    static constexpr uint32_t FLASH_PRIV1BBR4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FLASH_PRIV1BBR4_PRIV1BB0 = 0x1; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR4_PRIV1BB1 = 0x2; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR4_PRIV1BB2 = 0x4; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR4_PRIV1BB3 = 0x8; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR4_PRIV1BB4 = 0x10; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR4_PRIV1BB5 = 0x20; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR4_PRIV1BB6 = 0x40; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR4_PRIV1BB7 = 0x80; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR4_PRIV1BB8 = 0x100; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR4_PRIV1BB9 = 0x200; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR4_PRIV1BB10 = 0x400; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR4_PRIV1BB11 = 0x800; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR4_PRIV1BB12 = 0x1000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR4_PRIV1BB13 = 0x2000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR4_PRIV1BB14 = 0x4000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR4_PRIV1BB15 = 0x8000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR4_PRIV1BB16 = 0x10000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR4_PRIV1BB17 = 0x20000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR4_PRIV1BB18 = 0x40000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR4_PRIV1BB19 = 0x80000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR4_PRIV1BB20 = 0x100000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR4_PRIV1BB21 = 0x200000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR4_PRIV1BB22 = 0x400000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR4_PRIV1BB23 = 0x800000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR4_PRIV1BB24 = 0x1000000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR4_PRIV1BB25 = 0x2000000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR4_PRIV1BB26 = 0x4000000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR4_PRIV1BB27 = 0x8000000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR4_PRIV1BB28 = 0x10000000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR4_PRIV1BB29 = 0x20000000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR4_PRIV1BB30 = 0x40000000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV1BBR4_PRIV1BB31 = 0x80000000; // page privileged/unprivileged attribution


    static constexpr uint32_t FLASH_PRIV2BBR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FLASH_PRIV2BBR1_PRIV2BB0 = 0x1; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR1_PRIV2BB1 = 0x2; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR1_PRIV2BB2 = 0x4; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR1_PRIV2BB3 = 0x8; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR1_PRIV2BB4 = 0x10; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR1_PRIV2BB5 = 0x20; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR1_PRIV2BB6 = 0x40; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR1_PRIV2BB7 = 0x80; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR1_PRIV2BB8 = 0x100; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR1_PRIV2BB9 = 0x200; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR1_PRIV2BB10 = 0x400; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR1_PRIV2BB11 = 0x800; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR1_PRIV2BB12 = 0x1000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR1_PRIV2BB13 = 0x2000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR1_PRIV2BB14 = 0x4000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR1_PRIV2BB15 = 0x8000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR1_PRIV2BB16 = 0x10000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR1_PRIV2BB17 = 0x20000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR1_PRIV2BB18 = 0x40000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR1_PRIV2BB19 = 0x80000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR1_PRIV2BB20 = 0x100000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR1_PRIV2BB21 = 0x200000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR1_PRIV2BB22 = 0x400000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR1_PRIV2BB23 = 0x800000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR1_PRIV2BB24 = 0x1000000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR1_PRIV2BB25 = 0x2000000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR1_PRIV2BB26 = 0x4000000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR1_PRIV2BB27 = 0x8000000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR1_PRIV2BB28 = 0x10000000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR1_PRIV2BB29 = 0x20000000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR1_PRIV2BB30 = 0x40000000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR1_PRIV2BB31 = 0x80000000; // page privileged/unprivileged attribution

    static constexpr uint32_t FLASH_PRIV2BBR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FLASH_PRIV2BBR2_PRIV2BB0 = 0x1; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR2_PRIV2BB1 = 0x2; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR2_PRIV2BB2 = 0x4; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR2_PRIV2BB3 = 0x8; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR2_PRIV2BB4 = 0x10; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR2_PRIV2BB5 = 0x20; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR2_PRIV2BB6 = 0x40; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR2_PRIV2BB7 = 0x80; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR2_PRIV2BB8 = 0x100; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR2_PRIV2BB9 = 0x200; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR2_PRIV2BB10 = 0x400; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR2_PRIV2BB11 = 0x800; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR2_PRIV2BB12 = 0x1000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR2_PRIV2BB13 = 0x2000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR2_PRIV2BB14 = 0x4000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR2_PRIV2BB15 = 0x8000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR2_PRIV2BB16 = 0x10000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR2_PRIV2BB17 = 0x20000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR2_PRIV2BB18 = 0x40000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR2_PRIV2BB19 = 0x80000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR2_PRIV2BB20 = 0x100000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR2_PRIV2BB21 = 0x200000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR2_PRIV2BB22 = 0x400000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR2_PRIV2BB23 = 0x800000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR2_PRIV2BB24 = 0x1000000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR2_PRIV2BB25 = 0x2000000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR2_PRIV2BB26 = 0x4000000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR2_PRIV2BB27 = 0x8000000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR2_PRIV2BB28 = 0x10000000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR2_PRIV2BB29 = 0x20000000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR2_PRIV2BB30 = 0x40000000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR2_PRIV2BB31 = 0x80000000; // page privileged/unprivileged attribution

    static constexpr uint32_t FLASH_PRIV2BBR3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FLASH_PRIV2BBR3_PRIV2BB0 = 0x1; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR3_PRIV2BB1 = 0x2; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR3_PRIV2BB2 = 0x4; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR3_PRIV2BB3 = 0x8; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR3_PRIV2BB4 = 0x10; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR3_PRIV2BB5 = 0x20; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR3_PRIV2BB6 = 0x40; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR3_PRIV2BB7 = 0x80; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR3_PRIV2BB8 = 0x100; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR3_PRIV2BB9 = 0x200; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR3_PRIV2BB10 = 0x400; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR3_PRIV2BB11 = 0x800; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR3_PRIV2BB12 = 0x1000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR3_PRIV2BB13 = 0x2000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR3_PRIV2BB14 = 0x4000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR3_PRIV2BB15 = 0x8000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR3_PRIV2BB16 = 0x10000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR3_PRIV2BB17 = 0x20000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR3_PRIV2BB18 = 0x40000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR3_PRIV2BB19 = 0x80000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR3_PRIV2BB20 = 0x100000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR3_PRIV2BB21 = 0x200000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR3_PRIV2BB22 = 0x400000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR3_PRIV2BB23 = 0x800000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR3_PRIV2BB24 = 0x1000000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR3_PRIV2BB25 = 0x2000000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR3_PRIV2BB26 = 0x4000000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR3_PRIV2BB27 = 0x8000000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR3_PRIV2BB28 = 0x10000000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR3_PRIV2BB29 = 0x20000000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR3_PRIV2BB30 = 0x40000000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR3_PRIV2BB31 = 0x80000000; // page privileged/unprivileged attribution

    static constexpr uint32_t FLASH_PRIV2BBR4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FLASH_PRIV2BBR4_PRIV2BB0 = 0x1; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR4_PRIV2BB1 = 0x2; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR4_PRIV2BB2 = 0x4; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR4_PRIV2BB3 = 0x8; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR4_PRIV2BB4 = 0x10; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR4_PRIV2BB5 = 0x20; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR4_PRIV2BB6 = 0x40; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR4_PRIV2BB7 = 0x80; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR4_PRIV2BB8 = 0x100; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR4_PRIV2BB9 = 0x200; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR4_PRIV2BB10 = 0x400; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR4_PRIV2BB11 = 0x800; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR4_PRIV2BB12 = 0x1000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR4_PRIV2BB13 = 0x2000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR4_PRIV2BB14 = 0x4000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR4_PRIV2BB15 = 0x8000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR4_PRIV2BB16 = 0x10000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR4_PRIV2BB17 = 0x20000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR4_PRIV2BB18 = 0x40000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR4_PRIV2BB19 = 0x80000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR4_PRIV2BB20 = 0x100000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR4_PRIV2BB21 = 0x200000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR4_PRIV2BB22 = 0x400000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR4_PRIV2BB23 = 0x800000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR4_PRIV2BB24 = 0x1000000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR4_PRIV2BB25 = 0x2000000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR4_PRIV2BB26 = 0x4000000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR4_PRIV2BB27 = 0x8000000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR4_PRIV2BB28 = 0x10000000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR4_PRIV2BB29 = 0x20000000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR4_PRIV2BB30 = 0x40000000; // page privileged/unprivileged attribution
    static constexpr uint32_t FLASH_PRIV2BBR4_PRIV2BB31 = 0x80000000; // page privileged/unprivileged attribution
};

template<>
struct peripheral_t<STM32U5xx, FLASH>
{
    static constexpr periph_t P = FLASH;
    using T = stm32u5xx_flash_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, SEC_FLASH>
{
    static constexpr periph_t P = SEC_FLASH;
    using T = stm32u5xx_flash_t;
    static T& V;
};

using flash_t = peripheral_t<svd, FLASH>;
using sec_flash_t = peripheral_t<svd, SEC_FLASH>;
