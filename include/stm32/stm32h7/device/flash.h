#pragma once

////
//
//      STM32H7 Flash peripherals
//
////

////
//
//      Flash
//
////

struct stm32h742x_flash_t
{
    volatile uint32_t ACR;        // [read-write] Access control register
    volatile uint32_t KEYR1;      // [read-write] FLASH key register for bank 1
    volatile uint32_t OPTKEYR;    // [read-write] FLASH option key register
    volatile uint32_t CR1;        // [read-write] FLASH control register for bank 1
    volatile uint32_t SR1;        // [read-write] FLASH status register for bank 1
    volatile uint32_t CCR1;       // [read-write] FLASH clear control register for bank 1
    volatile uint32_t OPTCR;      // [read-write] FLASH option control register
    volatile uint32_t OPTSR_CUR;  // [read-write] FLASH option status register
    volatile uint32_t OPTSR_PRG;  // [read-write] FLASH option status register
    volatile uint32_t OPTCCR;     // [write-only] FLASH option clear control register
    volatile uint32_t PRAR_CUR1;  // [read-only] FLASH protection address for bank 1
    volatile uint32_t PRAR_PRG1;  // [read-write] FLASH protection address for bank 1
    volatile uint32_t SCAR_CUR1;  // [read-write] FLASH secure address for bank 1
    volatile uint32_t SCAR_PRG1;  // [read-write] FLASH secure address for bank 1
    volatile uint32_t WPSN_CUR1R; // [read-only] FLASH write sector protection for bank 1
    volatile uint32_t WPSN_PRG1R; // [read-write] FLASH write sector protection for bank 1
    volatile uint32_t BOOT_CURR;  // [read-only] FLASH register with boot address
    volatile uint32_t BOOT_PRGR;  // [read-only] FLASH register with boot address
    reserved_t<0x2> _0x50;
    volatile uint32_t CRCCR1;     // [read-write] FLASH CRC control register for bank 1
    volatile uint32_t CRCSADD1R;  // [read-write] FLASH CRC start address register for bank 1
    volatile uint32_t CRCEADD1R;  // [read-write] FLASH CRC end address register for bank 1
    volatile uint32_t CRCDATAR;   // [read-write] FLASH CRC data register
    volatile uint32_t ECC_FA1R;   // [read-only] FLASH ECC fail address for bank 1
    reserved_t<0x27> _0x100;
    volatile uint32_t ACR_;       // [read-write] Access control register
    volatile uint32_t KEYR2;      // [read-only] FLASH key register for bank 2
    volatile uint32_t OPTKEYR_;   // [read-write] FLASH option key register
    volatile uint32_t CR2;        // [read-write] FLASH control register for bank 2
    volatile uint32_t SR2;        // [read-write] FLASH status register for bank 2
    volatile uint32_t CCR2;       // [read-write] FLASH clear control register for bank 2
    volatile uint32_t OPTCR_;     // [read-write] FLASH option control register
    volatile uint32_t OPTSR_CUR_; // [read-write] FLASH option status register
    volatile uint32_t OPTSR_PRG_; // [read-write] FLASH option status register
    volatile uint32_t OPTCCR_;    // [write-only] FLASH option clear control register
    volatile uint32_t PRAR_CUR2;  // [read-only] FLASH protection address for bank 1
    reserved_t<0x1> _0x130;
    volatile uint32_t SCAR_CUR2;  // [read-write] FLASH secure address for bank 2
    volatile uint32_t SCAR_PRG2;  // [read-write] FLASH secure address for bank 2
    volatile uint32_t WPSN_CUR2R; // [read-only] FLASH write sector protection for bank 2
    volatile uint32_t WPSN_PRG2R; // [read-write] FLASH write sector protection for bank 2
    reserved_t<0x4> _0x150;
    volatile uint32_t CRCCR2;     // [read-write] FLASH CRC control register for bank 1
    volatile uint32_t CRCSADD2R;  // [read-write] FLASH CRC start address register for bank 2
    volatile uint32_t CRCEADD2R;  // [read-write] FLASH CRC end address register for bank 2
    reserved_t<0x1> _0x160;
    volatile uint32_t ECC_FA2R;   // [read-only] FLASH ECC fail address for bank 2

    static constexpr uint32_t ACR_RESET_VALUE = 0x600;
    template<uint32_t X>
    static constexpr uint32_t ACR_LATENCY =      // Read latency
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ACR_WRHIGHFREQ =   // Flash signal delay
        bit_field_t<4, 0x3>::value<X>();

    static constexpr uint32_t ACR__RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ACR__LATENCY =      // Read latency
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ACR__WRHIGHFREQ =   // Flash signal delay
        bit_field_t<4, 0x3>::value<X>();

    static constexpr uint32_t KEYR1_RESET_VALUE = 0x0;

    static constexpr uint32_t OPTKEYR_RESET_VALUE = 0x0;

    static constexpr uint32_t OPTKEYR__RESET_VALUE = 0x0;

    static constexpr uint32_t CR1_RESET_VALUE = 0x0;
    static constexpr uint32_t CR1_LOCK1 = 0x1;             // Bank 1 configuration lock bit
    static constexpr uint32_t CR1_PG1 = 0x2;               // Bank 1 program enable bit
    static constexpr uint32_t CR1_SER1 = 0x4;              // Bank 1 sector erase request
    static constexpr uint32_t CR1_BER1 = 0x8;              // Bank 1 erase request
    template<uint32_t X>
    static constexpr uint32_t CR1_PSIZE1 =                 // Bank 1 program size
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t CR1_FW1 = 0x40;              // Bank 1 write forcing control bit
    static constexpr uint32_t CR1_START1 = 0x80;           // Bank 1 bank or sector erase start control bit
    template<uint32_t X>
    static constexpr uint32_t CR1_SNB1 =                   // Bank 1 sector erase selection number
        bit_field_t<8, 0x7>::value<X>();
    static constexpr uint32_t CR1_CRC_EN = 0x8000;         // Bank 1 CRC control bit
    static constexpr uint32_t CR1_EOPIE1 = 0x10000;        // Bank 1 end-of-program interrupt control bit
    static constexpr uint32_t CR1_WRPERRIE1 = 0x20000;     // Bank 1 write protection error interrupt enable bit
    static constexpr uint32_t CR1_PGSERRIE1 = 0x40000;     // Bank 1 programming sequence error interrupt enable bit
    static constexpr uint32_t CR1_STRBERRIE1 = 0x80000;    // Bank 1 strobe error interrupt enable bit
    static constexpr uint32_t CR1_INCERRIE1 = 0x200000;    // Bank 1 inconsistency error interrupt enable bit
    static constexpr uint32_t CR1_OPERRIE1 = 0x400000;     // Bank 1 write/erase error interrupt enable bit
    static constexpr uint32_t CR1_RDPERRIE1 = 0x800000;    // Bank 1 read protection error interrupt enable bit
    static constexpr uint32_t CR1_RDSERRIE1 = 0x1000000;   // Bank 1 secure error interrupt enable bit
    static constexpr uint32_t CR1_SNECCERRIE1 = 0x2000000; // Bank 1 ECC single correction error interrupt enable bit
    static constexpr uint32_t CR1_DBECCERRIE1 = 0x4000000; // Bank 1 ECC double detection error interrupt enable bit
    static constexpr uint32_t CR1_CRCENDIE1 = 0x8000000;   // Bank 1 end of CRC calculation interrupt enable bit

    static constexpr uint32_t SR1_RESET_VALUE = 0x0;
    static constexpr uint32_t SR1_BSY1 = 0x1;             // Bank 1 ongoing program flag
    static constexpr uint32_t SR1_WBNE1 = 0x2;            // Bank 1 write buffer not empty flag
    static constexpr uint32_t SR1_QW1 = 0x4;              // Bank 1 wait queue flag
    static constexpr uint32_t SR1_CRC_BUSY1 = 0x8;        // Bank 1 CRC busy flag
    static constexpr uint32_t SR1_EOP1 = 0x10000;         // Bank 1 end-of-program flag
    static constexpr uint32_t SR1_WRPERR1 = 0x20000;      // Bank 1 write protection error flag
    static constexpr uint32_t SR1_PGSERR1 = 0x40000;      // Bank 1 programming sequence error flag
    static constexpr uint32_t SR1_STRBERR1 = 0x80000;     // Bank 1 strobe error flag
    static constexpr uint32_t SR1_INCERR1 = 0x200000;     // Bank 1 inconsistency error flag
    static constexpr uint32_t SR1_OPERR1 = 0x400000;      // Bank 1 write/erase error flag
    static constexpr uint32_t SR1_RDPERR1 = 0x800000;     // Bank 1 read protection error flag
    static constexpr uint32_t SR1_RDSERR1 = 0x1000000;    // Bank 1 secure error flag
    static constexpr uint32_t SR1_SNECCERR11 = 0x2000000; // Bank 1 single correction error flag
    static constexpr uint32_t SR1_DBECCERR1 = 0x4000000;  // Bank 1 ECC double detection error flag
    static constexpr uint32_t SR1_CRCEND1 = 0x8000000;    // Bank 1 CRC-complete flag

    static constexpr uint32_t CCR1_RESET_VALUE = 0x0;
    static constexpr uint32_t CCR1_CLR_EOP1 = 0x10000;        // Bank 1 EOP1 flag clear bit
    static constexpr uint32_t CCR1_CLR_WRPERR1 = 0x20000;     // Bank 1 WRPERR1 flag clear bit
    static constexpr uint32_t CCR1_CLR_PGSERR1 = 0x40000;     // Bank 1 PGSERR1 flag clear bi
    static constexpr uint32_t CCR1_CLR_STRBERR1 = 0x80000;    // Bank 1 STRBERR1 flag clear bit
    static constexpr uint32_t CCR1_CLR_INCERR1 = 0x200000;    // Bank 1 INCERR1 flag clear bit
    static constexpr uint32_t CCR1_CLR_OPERR1 = 0x400000;     // Bank 1 OPERR1 flag clear bit
    static constexpr uint32_t CCR1_CLR_RDPERR1 = 0x800000;    // Bank 1 RDPERR1 flag clear bit
    static constexpr uint32_t CCR1_CLR_RDSERR1 = 0x1000000;   // Bank 1 RDSERR1 flag clear bit
    static constexpr uint32_t CCR1_CLR_SNECCERR1 = 0x2000000; // Bank 1 SNECCERR1 flag clear bit
    static constexpr uint32_t CCR1_CLR_DBECCERR1 = 0x4000000; // Bank 1 DBECCERR1 flag clear bit
    static constexpr uint32_t CCR1_CLR_CRCEND1 = 0x8000000;   // Bank 1 CRCEND1 flag clear bit

    static constexpr uint32_t OPTCR_RESET_VALUE = 0x0;
    static constexpr uint32_t OPTCR_OPTLOCK = 0x1;               // FLASH_OPTCR lock option configuration bit
    static constexpr uint32_t OPTCR_OPTSTART = 0x2;              // Option byte start change option configuration bit
    static constexpr uint32_t OPTCR_MER = 0x10;                  // Flash mass erase enable bit
    static constexpr uint32_t OPTCR_OPTCHANGEERRIE = 0x40000000; // Option byte change error interrupt enable bit
    static constexpr uint32_t OPTCR_SWAP_BANK = 0x80000000;      // Bank swapping configuration bit

    static constexpr uint32_t OPTCR__RESET_VALUE = 0x0;
    static constexpr uint32_t OPTCR__OPTLOCK = 0x1;               // FLASH_OPTCR lock option configuration bit
    static constexpr uint32_t OPTCR__OPTSTART = 0x2;              // Option byte start change option configuration bit
    static constexpr uint32_t OPTCR__MER = 0x10;                  // Flash mass erase enable bit
    static constexpr uint32_t OPTCR__OPTCHANGEERRIE = 0x40000000; // Option byte change error interrupt enable bit
    static constexpr uint32_t OPTCR__SWAP_BANK = 0x80000000;      // Bank swapping configuration bit

    static constexpr uint32_t OPTSR_CUR__RESET_VALUE = 0x0;
    static constexpr uint32_t OPTSR_CUR__OPT_BUSY = 0x1;             // Option byte change ongoing flag
    template<uint32_t X>
    static constexpr uint32_t OPTSR_CUR__BOR_LEV =                   // Brownout level option status bit
        bit_field_t<2, 0x3>::value<X>();
    static constexpr uint32_t OPTSR_CUR__IWDG1_HW = 0x10;            // IWDG1 control option status bit
    static constexpr uint32_t OPTSR_CUR__nRST_STOP_D1 = 0x40;        // D1 DStop entry reset option status bit
    static constexpr uint32_t OPTSR_CUR__nRST_STBY_D1 = 0x80;        // D1 DStandby entry reset option status bit
    template<uint32_t X>
    static constexpr uint32_t OPTSR_CUR__RDP =                       // Readout protection level option status byte
        bit_field_t<8, 0xff>::value<X>();
    static constexpr uint32_t OPTSR_CUR__FZ_IWDG_STOP = 0x20000;     // IWDG Stop mode freeze option status bit
    static constexpr uint32_t OPTSR_CUR__FZ_IWDG_SDBY = 0x40000;     // IWDG Standby mode freeze option status bit
    template<uint32_t X>
    static constexpr uint32_t OPTSR_CUR__ST_RAM_SIZE =               // DTCM RAM size option status
        bit_field_t<19, 0x3>::value<X>();
    static constexpr uint32_t OPTSR_CUR__SECURITY = 0x200000;        // Security enable option status bit
    static constexpr uint32_t OPTSR_CUR__RSS1 = 0x4000000;           // User option bit 1
    static constexpr uint32_t OPTSR_CUR__PERSO_OK = 0x10000000;      // Device personalization status bit
    static constexpr uint32_t OPTSR_CUR__IO_HSLV = 0x20000000;       // I/O high-speed at low-voltage status bit (PRODUCT_BELOW_25V)
    static constexpr uint32_t OPTSR_CUR__OPTCHANGEERR = 0x40000000;  // Option byte change error flag
    static constexpr uint32_t OPTSR_CUR__SWAP_BANK_OPT = 0x80000000; // Bank swapping option status bit

    static constexpr uint32_t OPTSR_CUR_RESET_VALUE = 0x0;
    static constexpr uint32_t OPTSR_CUR_OPT_BUSY = 0x1;             // Option byte change ongoing flag
    template<uint32_t X>
    static constexpr uint32_t OPTSR_CUR_BOR_LEV =                   // Brownout level option status bit
        bit_field_t<2, 0x3>::value<X>();
    static constexpr uint32_t OPTSR_CUR_IWDG1_HW = 0x10;            // IWDG1 control option status bit
    static constexpr uint32_t OPTSR_CUR_nRST_STOP_D1 = 0x40;        // D1 DStop entry reset option status bit
    static constexpr uint32_t OPTSR_CUR_nRST_STBY_D1 = 0x80;        // D1 DStandby entry reset option status bit
    template<uint32_t X>
    static constexpr uint32_t OPTSR_CUR_RDP =                       // Readout protection level option status byte
        bit_field_t<8, 0xff>::value<X>();
    static constexpr uint32_t OPTSR_CUR_FZ_IWDG_STOP = 0x20000;     // IWDG Stop mode freeze option status bit
    static constexpr uint32_t OPTSR_CUR_FZ_IWDG_SDBY = 0x40000;     // IWDG Standby mode freeze option status bit
    template<uint32_t X>
    static constexpr uint32_t OPTSR_CUR_ST_RAM_SIZE =               // DTCM RAM size option status
        bit_field_t<19, 0x3>::value<X>();
    static constexpr uint32_t OPTSR_CUR_SECURITY = 0x200000;        // Security enable option status bit
    static constexpr uint32_t OPTSR_CUR_RSS1 = 0x4000000;           // User option bit 1
    static constexpr uint32_t OPTSR_CUR_PERSO_OK = 0x10000000;      // Device personalization status bit
    static constexpr uint32_t OPTSR_CUR_IO_HSLV = 0x20000000;       // I/O high-speed at low-voltage status bit (PRODUCT_BELOW_25V)
    static constexpr uint32_t OPTSR_CUR_OPTCHANGEERR = 0x40000000;  // Option byte change error flag
    static constexpr uint32_t OPTSR_CUR_SWAP_BANK_OPT = 0x80000000; // Bank swapping option status bit

    static constexpr uint32_t OPTSR_PRG_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OPTSR_PRG_BOR_LEV =                   // BOR reset level option configuration bits
        bit_field_t<2, 0x3>::value<X>();
    static constexpr uint32_t OPTSR_PRG_IWDG1_HW = 0x10;            // IWDG1 option configuration bit
    static constexpr uint32_t OPTSR_PRG_nRST_STOP_D1 = 0x40;        // Option byte erase after D1 DStop option configuration bit
    static constexpr uint32_t OPTSR_PRG_nRST_STBY_D1 = 0x80;        // Option byte erase after D1 DStandby option configuration bit
    template<uint32_t X>
    static constexpr uint32_t OPTSR_PRG_RDP =                       // Readout protection level option configuration byte
        bit_field_t<8, 0xff>::value<X>();
    static constexpr uint32_t OPTSR_PRG_FZ_IWDG_STOP = 0x20000;     // IWDG Stop mode freeze option configuration bit
    static constexpr uint32_t OPTSR_PRG_FZ_IWDG_SDBY = 0x40000;     // IWDG Standby mode freeze option configuration bit
    template<uint32_t X>
    static constexpr uint32_t OPTSR_PRG_ST_RAM_SIZE =               // DTCM size select option configuration bits
        bit_field_t<19, 0x3>::value<X>();
    static constexpr uint32_t OPTSR_PRG_SECURITY = 0x200000;        // Security option configuration bit
    static constexpr uint32_t OPTSR_PRG_RSS1 = 0x4000000;           // User option configuration bit 1
    static constexpr uint32_t OPTSR_PRG_RSS2 = 0x8000000;           // User option configuration bit 2
    static constexpr uint32_t OPTSR_PRG_IO_HSLV = 0x20000000;       // I/O high-speed at low-voltage (PRODUCT_BELOW_25V)
    static constexpr uint32_t OPTSR_PRG_SWAP_BANK_OPT = 0x80000000; // Bank swapping option configuration bit

    static constexpr uint32_t OPTSR_PRG__RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OPTSR_PRG__BOR_LEV =                   // BOR reset level option configuration bits
        bit_field_t<2, 0x3>::value<X>();
    static constexpr uint32_t OPTSR_PRG__IWDG1_HW = 0x10;            // IWDG1 option configuration bit
    static constexpr uint32_t OPTSR_PRG__nRST_STOP_D1 = 0x40;        // Option byte erase after D1 DStop option configuration bit
    static constexpr uint32_t OPTSR_PRG__nRST_STBY_D1 = 0x80;        // Option byte erase after D1 DStandby option configuration bit
    template<uint32_t X>
    static constexpr uint32_t OPTSR_PRG__RDP =                       // Readout protection level option configuration byte
        bit_field_t<8, 0xff>::value<X>();
    static constexpr uint32_t OPTSR_PRG__FZ_IWDG_STOP = 0x20000;     // IWDG Stop mode freeze option configuration bit
    static constexpr uint32_t OPTSR_PRG__FZ_IWDG_SDBY = 0x40000;     // IWDG Standby mode freeze option configuration bit
    template<uint32_t X>
    static constexpr uint32_t OPTSR_PRG__ST_RAM_SIZE =               // DTCM size select option configuration bits
        bit_field_t<19, 0x3>::value<X>();
    static constexpr uint32_t OPTSR_PRG__SECURITY = 0x200000;        // Security option configuration bit
    static constexpr uint32_t OPTSR_PRG__RSS1 = 0x4000000;           // User option configuration bit 1
    static constexpr uint32_t OPTSR_PRG__RSS2 = 0x8000000;           // User option configuration bit 2
    static constexpr uint32_t OPTSR_PRG__IO_HSLV = 0x20000000;       // I/O high-speed at low-voltage (PRODUCT_BELOW_25V)
    static constexpr uint32_t OPTSR_PRG__SWAP_BANK_OPT = 0x80000000; // Bank swapping option configuration bit

    static constexpr uint32_t OPTCCR__RESET_VALUE = 0x0;
    static constexpr uint32_t OPTCCR__CLR_OPTCHANGEERR = 0x40000000; // OPTCHANGEERR reset bit

    static constexpr uint32_t OPTCCR_RESET_VALUE = 0x0;
    static constexpr uint32_t OPTCCR_CLR_OPTCHANGEERR = 0x40000000; // OPTCHANGEERR reset bit

    static constexpr uint32_t PRAR_CUR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t PRAR_CUR1_PROT_AREA_START1 =   // Bank 1 lowest PCROP protected address
        bit_field_t<0, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PRAR_CUR1_PROT_AREA_END1 =     // Bank 1 highest PCROP protected address
        bit_field_t<16, 0xfff>::value<X>();
    static constexpr uint32_t PRAR_CUR1_DMEP1 = 0x80000000;  // Bank 1 PCROP protected erase enable option status bit

    static constexpr uint32_t PRAR_PRG1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t PRAR_PRG1_PROT_AREA_START1 =   // Bank 1 lowest PCROP protected address configuration
        bit_field_t<0, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PRAR_PRG1_PROT_AREA_END1 =     // Bank 1 highest PCROP protected address configuration
        bit_field_t<16, 0xfff>::value<X>();
    static constexpr uint32_t PRAR_PRG1_DMEP1 = 0x80000000;  // Bank 1 PCROP protected erase enable option configuration bit

    static constexpr uint32_t SCAR_CUR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SCAR_CUR1_SEC_AREA_START1 =   // Bank 1 lowest secure protected address
        bit_field_t<0, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SCAR_CUR1_SEC_AREA_END1 =     // Bank 1 highest secure protected address
        bit_field_t<16, 0xfff>::value<X>();
    static constexpr uint32_t SCAR_CUR1_DMES1 = 0x80000000; // Bank 1 secure protected erase enable option status bit

    static constexpr uint32_t SCAR_PRG1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SCAR_PRG1_SEC_AREA_START1 =   // Bank 1 lowest secure protected address configuration
        bit_field_t<0, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SCAR_PRG1_SEC_AREA_END1 =     // Bank 1 highest secure protected address configuration
        bit_field_t<16, 0xfff>::value<X>();
    static constexpr uint32_t SCAR_PRG1_DMES1 = 0x80000000; // Bank 1 secure protected erase enable option configuration bit

    static constexpr uint32_t WPSN_CUR1R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t WPSN_CUR1R_WRPSn1 =   // Bank 1 sector write protection option status byte
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t WPSN_PRG1R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t WPSN_PRG1R_WRPSn1 =   // Bank 1 sector write protection configuration byte
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t BOOT_CURR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t BOOT_CURR_BOOT_ADD0 =   // Boot address 0
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BOOT_CURR_BOOT_ADD1 =   // Boot address 1
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t BOOT_PRGR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t BOOT_PRGR_BOOT_ADD0 =   // Boot address 0
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BOOT_PRGR_BOOT_ADD1 =   // Boot address 1
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t CRCCR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CRCCR1_CRC_SECT =           // Bank 1 CRC sector number
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t CRCCR1_ALL_BANK = 0x80;     // Bank 1 CRC select bit
    static constexpr uint32_t CRCCR1_CRC_BY_SECT = 0x100; // Bank 1 CRC sector mode select bit
    static constexpr uint32_t CRCCR1_ADD_SECT = 0x200;    // Bank 1 CRC sector select bit
    static constexpr uint32_t CRCCR1_CLEAN_SECT = 0x400;  // Bank 1 CRC sector list clear bit
    static constexpr uint32_t CRCCR1_START_CRC = 0x10000; // Bank 1 CRC start bit
    static constexpr uint32_t CRCCR1_CLEAN_CRC = 0x20000; // Bank 1 CRC clear bit
    template<uint32_t X>
    static constexpr uint32_t CRCCR1_CRC_BURST =          // Bank 1 CRC burst size
        bit_field_t<20, 0x3>::value<X>();

    static constexpr uint32_t CRCSADD1R_RESET_VALUE = 0x0;

    static constexpr uint32_t CRCEADD1R_RESET_VALUE = 0x0;

    static constexpr uint32_t CRCDATAR_RESET_VALUE = 0x0;

    static constexpr uint32_t ECC_FA1R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ECC_FA1R_FAIL_ECC_ADDR1 =   // Bank 1 ECC error address
        bit_field_t<0, 0x7fff>::value<X>();

    static constexpr uint32_t KEYR2_RESET_VALUE = 0x0;

    static constexpr uint32_t CR2_RESET_VALUE = 0x0;
    static constexpr uint32_t CR2_LOCK2 = 0x1;             // Bank 2 configuration lock bit
    static constexpr uint32_t CR2_PG2 = 0x2;               // Bank 2 program enable bit
    static constexpr uint32_t CR2_SER2 = 0x4;              // Bank 2 sector erase request
    static constexpr uint32_t CR2_BER2 = 0x8;              // Bank 2 erase request
    template<uint32_t X>
    static constexpr uint32_t CR2_PSIZE2 =                 // Bank 2 program size
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t CR2_FW2 = 0x40;              // Bank 2 write forcing control bit
    static constexpr uint32_t CR2_START2 = 0x80;           // Bank 2 bank or sector erase start control bit
    template<uint32_t X>
    static constexpr uint32_t CR2_SNB2 =                   // Bank 2 sector erase selection number
        bit_field_t<8, 0x7>::value<X>();
    static constexpr uint32_t CR2_CRC_EN = 0x8000;         // Bank 2 CRC control bit
    static constexpr uint32_t CR2_EOPIE2 = 0x10000;        // Bank 2 end-of-program interrupt control bit
    static constexpr uint32_t CR2_WRPERRIE2 = 0x20000;     // Bank 2 write protection error interrupt enable bit
    static constexpr uint32_t CR2_PGSERRIE2 = 0x40000;     // Bank 2 programming sequence error interrupt enable bit
    static constexpr uint32_t CR2_STRBERRIE2 = 0x80000;    // Bank 2 strobe error interrupt enable bit
    static constexpr uint32_t CR2_INCERRIE2 = 0x200000;    // Bank 2 inconsistency error interrupt enable bit
    static constexpr uint32_t CR2_OPERRIE2 = 0x400000;     // Bank 2 write/erase error interrupt enable bit
    static constexpr uint32_t CR2_RDPERRIE2 = 0x800000;    // Bank 2 read protection error interrupt enable bit
    static constexpr uint32_t CR2_RDSERRIE2 = 0x1000000;   // Bank 2 secure error interrupt enable bit
    static constexpr uint32_t CR2_SNECCERRIE2 = 0x2000000; // Bank 2 ECC single correction error interrupt enable bit
    static constexpr uint32_t CR2_DBECCERRIE2 = 0x4000000; // Bank 2 ECC double detection error interrupt enable bit
    static constexpr uint32_t CR2_CRCENDIE2 = 0x8000000;   // Bank 2 end of CRC calculation interrupt enable bit

    static constexpr uint32_t SR2_RESET_VALUE = 0x0;
    static constexpr uint32_t SR2_BSY2 = 0x1;            // Bank 2 ongoing program flag
    static constexpr uint32_t SR2_WBNE2 = 0x2;           // Bank 2 write buffer not empty flag
    static constexpr uint32_t SR2_QW2 = 0x4;             // Bank 2 wait queue flag
    static constexpr uint32_t SR2_CRC_BUSY2 = 0x8;       // Bank 2 CRC busy flag
    static constexpr uint32_t SR2_EOP2 = 0x10000;        // Bank 2 end-of-program flag
    static constexpr uint32_t SR2_WRPERR2 = 0x20000;     // Bank 2 write protection error flag
    static constexpr uint32_t SR2_PGSERR2 = 0x40000;     // Bank 2 programming sequence error flag
    static constexpr uint32_t SR2_STRBERR2 = 0x80000;    // Bank 2 strobe error flag
    static constexpr uint32_t SR2_INCERR2 = 0x200000;    // Bank 2 inconsistency error flag
    static constexpr uint32_t SR2_OPERR2 = 0x400000;     // Bank 2 write/erase error flag
    static constexpr uint32_t SR2_RDPERR2 = 0x800000;    // Bank 2 read protection error flag
    static constexpr uint32_t SR2_RDSERR2 = 0x1000000;   // Bank 2 secure error flag
    static constexpr uint32_t SR2_SNECCERR2 = 0x2000000; // Bank 2 single correction error flag
    static constexpr uint32_t SR2_DBECCERR2 = 0x4000000; // Bank 2 ECC double detection error flag
    static constexpr uint32_t SR2_CRCEND2 = 0x8000000;   // Bank 2 CRC-complete flag

    static constexpr uint32_t CCR2_RESET_VALUE = 0x0;
    static constexpr uint32_t CCR2_CLR_EOP2 = 0x10000;        // Bank 1 EOP1 flag clear bit
    static constexpr uint32_t CCR2_CLR_WRPERR2 = 0x20000;     // Bank 2 WRPERR1 flag clear bit
    static constexpr uint32_t CCR2_CLR_PGSERR2 = 0x40000;     // Bank 2 PGSERR1 flag clear bi
    static constexpr uint32_t CCR2_CLR_STRBERR2 = 0x80000;    // Bank 2 STRBERR1 flag clear bit
    static constexpr uint32_t CCR2_CLR_INCERR2 = 0x200000;    // Bank 2 INCERR1 flag clear bit
    static constexpr uint32_t CCR2_CLR_OPERR2 = 0x400000;     // Bank 2 OPERR1 flag clear bit
    static constexpr uint32_t CCR2_CLR_RDPERR2 = 0x800000;    // Bank 2 RDPERR1 flag clear bit
    static constexpr uint32_t CCR2_CLR_RDSERR1 = 0x1000000;   // Bank 1 RDSERR1 flag clear bit
    static constexpr uint32_t CCR2_CLR_SNECCERR2 = 0x2000000; // Bank 2 SNECCERR1 flag clear bit
    static constexpr uint32_t CCR2_CLR_DBECCERR1 = 0x4000000; // Bank 1 DBECCERR1 flag clear bit
    static constexpr uint32_t CCR2_CLR_CRCEND2 = 0x8000000;   // Bank 2 CRCEND1 flag clear bit

    static constexpr uint32_t PRAR_CUR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t PRAR_CUR2_PROT_AREA_START2 =   // Bank 2 lowest PCROP protected address
        bit_field_t<0, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PRAR_CUR2_PROT_AREA_END2 =     // Bank 2 highest PCROP protected address
        bit_field_t<16, 0xfff>::value<X>();
    static constexpr uint32_t PRAR_CUR2_DMEP2 = 0x80000000;  // Bank 2 PCROP protected erase enable option status bit

    static constexpr uint32_t PRAR_PRG2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t PRAR_PRG2_PROT_AREA_START2 =   // Bank 2 lowest PCROP protected address configuration
        bit_field_t<0, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PRAR_PRG2_PROT_AREA_END2 =     // Bank 2 highest PCROP protected address configuration
        bit_field_t<16, 0xfff>::value<X>();
    static constexpr uint32_t PRAR_PRG2_DMEP2 = 0x80000000;  // Bank 2 PCROP protected erase enable option configuration bit

    static constexpr uint32_t SCAR_CUR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SCAR_CUR2_SEC_AREA_START2 =   // Bank 2 lowest secure protected address
        bit_field_t<0, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SCAR_CUR2_SEC_AREA_END2 =     // Bank 2 highest secure protected address
        bit_field_t<16, 0xfff>::value<X>();
    static constexpr uint32_t SCAR_CUR2_DMES2 = 0x80000000; // Bank 2 secure protected erase enable option status bit

    static constexpr uint32_t SCAR_PRG2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t SCAR_PRG2_SEC_AREA_START2 =   // Bank 2 lowest secure protected address configuration
        bit_field_t<0, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SCAR_PRG2_SEC_AREA_END2 =     // Bank 2 highest secure protected address configuration
        bit_field_t<16, 0xfff>::value<X>();
    static constexpr uint32_t SCAR_PRG2_DMES2 = 0x80000000; // Bank 2 secure protected erase enable option configuration bit

    static constexpr uint32_t WPSN_CUR2R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t WPSN_CUR2R_WRPSn2 =   // Bank 2 sector write protection option status byte
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t WPSN_PRG2R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t WPSN_PRG2R_WRPSn2 =   // Bank 2 sector write protection configuration byte
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t CRCCR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CRCCR2_CRC_SECT =           // Bank 2 CRC sector number
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t CRCCR2_ALL_BANK = 0x80;     // Bank 2 CRC select bit
    static constexpr uint32_t CRCCR2_CRC_BY_SECT = 0x100; // Bank 2 CRC sector mode select bit
    static constexpr uint32_t CRCCR2_ADD_SECT = 0x200;    // Bank 2 CRC sector select bit
    static constexpr uint32_t CRCCR2_CLEAN_SECT = 0x400;  // Bank 2 CRC sector list clear bit
    static constexpr uint32_t CRCCR2_START_CRC = 0x10000; // Bank 2 CRC start bit
    static constexpr uint32_t CRCCR2_CLEAN_CRC = 0x20000; // Bank 2 CRC clear bit
    template<uint32_t X>
    static constexpr uint32_t CRCCR2_CRC_BURST =          // Bank 2 CRC burst size
        bit_field_t<20, 0x3>::value<X>();

    static constexpr uint32_t CRCSADD2R_RESET_VALUE = 0x0;

    static constexpr uint32_t CRCEADD2R_RESET_VALUE = 0x0;

    static constexpr uint32_t ECC_FA2R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ECC_FA2R_FAIL_ECC_ADDR2 =   // Bank 2 ECC error address
        bit_field_t<0, 0x7fff>::value<X>();
};


////
//
//      Flash
//
////

struct stm32h7a3x_flash_t
{
    volatile uint32_t ACR;        // [read-write] Access control register
    volatile uint32_t KEYR1;      // [read-write] FLASH key register for bank 1
    volatile uint32_t OPTKEYR;    // [read-write] FLASH option key register
    volatile uint32_t CR1;        // [read-write] FLASH control register for bank 1
    volatile uint32_t SR1;        // [read-write] FLASH status register for bank 1
    volatile uint32_t CCR1;       // [read-write] FLASH clear control register for bank 1
    volatile uint32_t OPTCR;      // [read-write] FLASH option control register
    volatile uint32_t OPTSR_CUR;  // [read-write] FLASH option status register
    volatile uint32_t OPTSR_PRG;  // [read-write] FLASH option status register
    volatile uint32_t OPTCCR;     // [write-only] FLASH option clear control register
    volatile uint32_t PRAR_CUR1;  // [read-only] FLASH protection address for bank 1
    volatile uint32_t PRAR_PRG1;  // [read-write] FLASH protection address for bank 1
    reserved_t<0x2> _0x38;
    volatile uint32_t WPSN_CUR1R; // [read-only] FLASH write sector protection for bank 1
    volatile uint32_t WPSN_PRG1R; // [read-write] FLASH write sector protection for bank 1
    volatile uint32_t BOOT_CURR;  // [read-only] FLASH register with boot address
    volatile uint32_t BOOT_PRGR;  // [read-only] FLASH register with boot address
    reserved_t<0x2> _0x50;
    volatile uint32_t CRCCR1;     // [read-write] FLASH CRC control register for bank 1
    volatile uint32_t CRCSADD1R;  // [read-write] FLASH CRC start address register for bank 1
    volatile uint32_t CRCEADD1R;  // [read-write] FLASH CRC end address register for bank 1
    volatile uint32_t CRCDATAR;   // [read-write] FLASH CRC data register
    volatile uint32_t ECC_FA1R;   // [read-only] FLASH ECC fail address for bank 1
    reserved_t<0x27> _0x100;
    volatile uint32_t ACR_;       // [read-write] Access control register
    volatile uint32_t KEYR2;      // [read-only] FLASH key register for bank 2
    volatile uint32_t OPTKEYR_;   // [read-write] FLASH option key register
    volatile uint32_t CR2;        // [read-write] FLASH control register for bank 2
    volatile uint32_t SR2;        // [read-write] FLASH status register for bank 2
    volatile uint32_t CCR2;       // [read-write] FLASH clear control register for bank 2
    volatile uint32_t OPTCR_;     // [read-write] FLASH option control register
    volatile uint32_t OPTSR_CUR_; // [read-write] FLASH option status register
    volatile uint32_t OPTSR_PRG_; // [read-write] FLASH option status register
    volatile uint32_t OPTCCR_;    // [write-only] FLASH option clear control register
    volatile uint32_t PRAR_CUR2;  // [read-only] FLASH protection address for bank 1
    reserved_t<0x3> _0x138;
    volatile uint32_t WPSN_CUR2R; // [read-only] FLASH write sector protection for bank 2
    volatile uint32_t WPSN_PRG2R; // [read-write] FLASH write sector protection for bank 2
    reserved_t<0x4> _0x150;
    volatile uint32_t CRCCR2;     // [read-write] FLASH CRC control register for bank 1
    volatile uint32_t CRCSADD2R;  // [read-write] FLASH CRC start address register for bank 2
    volatile uint32_t CRCEADD2R;  // [read-write] FLASH CRC end address register for bank 2
    reserved_t<0x1> _0x160;
    volatile uint32_t ECC_FA2R;   // [read-only] FLASH ECC fail address for bank 2

    static constexpr uint32_t ACR_RESET_VALUE = 0x600;
    template<uint32_t X>
    static constexpr uint32_t ACR_LATENCY =      // Read latency
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ACR_WRHIGHFREQ =   // Flash signal delay
        bit_field_t<4, 0x3>::value<X>();

    static constexpr uint32_t ACR__RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ACR__LATENCY =      // Read latency
        bit_field_t<0, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ACR__WRHIGHFREQ =   // Flash signal delay
        bit_field_t<4, 0x3>::value<X>();

    static constexpr uint32_t KEYR1_RESET_VALUE = 0x0;

    static constexpr uint32_t OPTKEYR_RESET_VALUE = 0x0;

    static constexpr uint32_t OPTKEYR__RESET_VALUE = 0x0;

    static constexpr uint32_t CR1_RESET_VALUE = 0x0;
    static constexpr uint32_t CR1_LOCK1 = 0x1;             // Bank 1 configuration lock bit
    static constexpr uint32_t CR1_PG1 = 0x2;               // Bank 1 program enable bit
    static constexpr uint32_t CR1_SER1 = 0x4;              // Bank 1 sector erase request
    static constexpr uint32_t CR1_BER1 = 0x8;              // Bank 1 erase request
    template<uint32_t X>
    static constexpr uint32_t CR1_PSIZE1 =                 // Bank 1 program size
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t CR1_FW1 = 0x40;              // Bank 1 write forcing control bit
    static constexpr uint32_t CR1_START1 = 0x80;           // Bank 1 bank or sector erase start control bit
    template<uint32_t X>
    static constexpr uint32_t CR1_SNB1 =                   // Bank 1 sector erase selection number
        bit_field_t<8, 0x7>::value<X>();
    static constexpr uint32_t CR1_CRC_EN = 0x8000;         // Bank 1 CRC control bit
    static constexpr uint32_t CR1_EOPIE1 = 0x10000;        // Bank 1 end-of-program interrupt control bit
    static constexpr uint32_t CR1_WRPERRIE1 = 0x20000;     // Bank 1 write protection error interrupt enable bit
    static constexpr uint32_t CR1_PGSERRIE1 = 0x40000;     // Bank 1 programming sequence error interrupt enable bit
    static constexpr uint32_t CR1_STRBERRIE1 = 0x80000;    // Bank 1 strobe error interrupt enable bit
    static constexpr uint32_t CR1_INCERRIE1 = 0x200000;    // Bank 1 inconsistency error interrupt enable bit
    static constexpr uint32_t CR1_OPERRIE1 = 0x400000;     // Bank 1 write/erase error interrupt enable bit
    static constexpr uint32_t CR1_RDPERRIE1 = 0x800000;    // Bank 1 read protection error interrupt enable bit
    static constexpr uint32_t CR1_RDSERRIE1 = 0x1000000;   // Bank 1 secure error interrupt enable bit
    static constexpr uint32_t CR1_SNECCERRIE1 = 0x2000000; // Bank 1 ECC single correction error interrupt enable bit
    static constexpr uint32_t CR1_DBECCERRIE1 = 0x4000000; // Bank 1 ECC double detection error interrupt enable bit
    static constexpr uint32_t CR1_CRCENDIE1 = 0x8000000;   // Bank 1 end of CRC calculation interrupt enable bit

    static constexpr uint32_t SR1_RESET_VALUE = 0x0;
    static constexpr uint32_t SR1_BSY1 = 0x1;             // Bank 1 ongoing program flag
    static constexpr uint32_t SR1_WBNE1 = 0x2;            // Bank 1 write buffer not empty flag
    static constexpr uint32_t SR1_QW1 = 0x4;              // Bank 1 wait queue flag
    static constexpr uint32_t SR1_CRC_BUSY1 = 0x8;        // Bank 1 CRC busy flag
    static constexpr uint32_t SR1_EOP1 = 0x10000;         // Bank 1 end-of-program flag
    static constexpr uint32_t SR1_WRPERR1 = 0x20000;      // Bank 1 write protection error flag
    static constexpr uint32_t SR1_PGSERR1 = 0x40000;      // Bank 1 programming sequence error flag
    static constexpr uint32_t SR1_STRBERR1 = 0x80000;     // Bank 1 strobe error flag
    static constexpr uint32_t SR1_INCERR1 = 0x200000;     // Bank 1 inconsistency error flag
    static constexpr uint32_t SR1_OPERR1 = 0x400000;      // Bank 1 write/erase error flag
    static constexpr uint32_t SR1_RDPERR1 = 0x800000;     // Bank 1 read protection error flag
    static constexpr uint32_t SR1_RDSERR1 = 0x1000000;    // Bank 1 secure error flag
    static constexpr uint32_t SR1_SNECCERR11 = 0x2000000; // Bank 1 single correction error flag
    static constexpr uint32_t SR1_DBECCERR1 = 0x4000000;  // Bank 1 ECC double detection error flag
    static constexpr uint32_t SR1_CRCEND1 = 0x8000000;    // Bank 1 CRC-complete flag

    static constexpr uint32_t CCR1_RESET_VALUE = 0x0;
    static constexpr uint32_t CCR1_CLR_EOP1 = 0x10000;        // Bank 1 EOP1 flag clear bit
    static constexpr uint32_t CCR1_CLR_WRPERR1 = 0x20000;     // Bank 1 WRPERR1 flag clear bit
    static constexpr uint32_t CCR1_CLR_PGSERR1 = 0x40000;     // Bank 1 PGSERR1 flag clear bi
    static constexpr uint32_t CCR1_CLR_STRBERR1 = 0x80000;    // Bank 1 STRBERR1 flag clear bit
    static constexpr uint32_t CCR1_CLR_INCERR1 = 0x200000;    // Bank 1 INCERR1 flag clear bit
    static constexpr uint32_t CCR1_CLR_OPERR1 = 0x400000;     // Bank 1 OPERR1 flag clear bit
    static constexpr uint32_t CCR1_CLR_RDPERR1 = 0x800000;    // Bank 1 RDPERR1 flag clear bit
    static constexpr uint32_t CCR1_CLR_RDSERR1 = 0x1000000;   // Bank 1 RDSERR1 flag clear bit
    static constexpr uint32_t CCR1_CLR_SNECCERR1 = 0x2000000; // Bank 1 SNECCERR1 flag clear bit
    static constexpr uint32_t CCR1_CLR_DBECCERR1 = 0x4000000; // Bank 1 DBECCERR1 flag clear bit
    static constexpr uint32_t CCR1_CLR_CRCEND1 = 0x8000000;   // Bank 1 CRCEND1 flag clear bit

    static constexpr uint32_t OPTCR_RESET_VALUE = 0x0;
    static constexpr uint32_t OPTCR_OPTLOCK = 0x1;               // FLASH_OPTCR lock option configuration bit
    static constexpr uint32_t OPTCR_OPTSTART = 0x2;              // Option byte start change option configuration bit
    static constexpr uint32_t OPTCR_MER = 0x10;                  // Flash mass erase enable bit
    static constexpr uint32_t OPTCR_OPTCHANGEERRIE = 0x40000000; // Option byte change error interrupt enable bit
    static constexpr uint32_t OPTCR_SWAP_BANK = 0x80000000;      // Bank swapping configuration bit

    static constexpr uint32_t OPTCR__RESET_VALUE = 0x0;
    static constexpr uint32_t OPTCR__OPTLOCK = 0x1;               // FLASH_OPTCR lock option configuration bit
    static constexpr uint32_t OPTCR__OPTSTART = 0x2;              // Option byte start change option configuration bit
    static constexpr uint32_t OPTCR__MER = 0x10;                  // Flash mass erase enable bit
    static constexpr uint32_t OPTCR__OPTCHANGEERRIE = 0x40000000; // Option byte change error interrupt enable bit
    static constexpr uint32_t OPTCR__SWAP_BANK = 0x80000000;      // Bank swapping configuration bit

    static constexpr uint32_t OPTSR_CUR__RESET_VALUE = 0x0;
    static constexpr uint32_t OPTSR_CUR__OPT_BUSY = 0x1;             // Option byte change ongoing flag
    template<uint32_t X>
    static constexpr uint32_t OPTSR_CUR__BOR_LEV =                   // Brownout level option status bit
        bit_field_t<2, 0x3>::value<X>();
    static constexpr uint32_t OPTSR_CUR__IWDG1_HW = 0x10;            // IWDG1 control option status bit
    static constexpr uint32_t OPTSR_CUR__nRST_STOP_D1 = 0x40;        // D1 DStop entry reset option status bit
    static constexpr uint32_t OPTSR_CUR__nRST_STBY_D1 = 0x80;        // D1 DStandby entry reset option status bit
    template<uint32_t X>
    static constexpr uint32_t OPTSR_CUR__RDP =                       // Readout protection level option status byte
        bit_field_t<8, 0xff>::value<X>();
    static constexpr uint32_t OPTSR_CUR__FZ_IWDG_STOP = 0x20000;     // IWDG Stop mode freeze option status bit
    static constexpr uint32_t OPTSR_CUR__FZ_IWDG_SDBY = 0x40000;     // IWDG Standby mode freeze option status bit
    template<uint32_t X>
    static constexpr uint32_t OPTSR_CUR__ST_RAM_SIZE =               // DTCM RAM size option status
        bit_field_t<19, 0x3>::value<X>();
    static constexpr uint32_t OPTSR_CUR__SECURITY = 0x200000;        // Security enable option status bit
    static constexpr uint32_t OPTSR_CUR__RSS1 = 0x4000000;           // User option bit 1
    static constexpr uint32_t OPTSR_CUR__PERSO_OK = 0x10000000;      // Device personalization status bit
    static constexpr uint32_t OPTSR_CUR__IO_HSLV = 0x20000000;       // I/O high-speed at low-voltage status bit (PRODUCT_BELOW_25V)
    static constexpr uint32_t OPTSR_CUR__OPTCHANGEERR = 0x40000000;  // Option byte change error flag
    static constexpr uint32_t OPTSR_CUR__SWAP_BANK_OPT = 0x80000000; // Bank swapping option status bit

    static constexpr uint32_t OPTSR_CUR_RESET_VALUE = 0x0;
    static constexpr uint32_t OPTSR_CUR_OPT_BUSY = 0x1;             // Option byte change ongoing flag
    template<uint32_t X>
    static constexpr uint32_t OPTSR_CUR_BOR_LEV =                   // Brownout level option status bit
        bit_field_t<2, 0x3>::value<X>();
    static constexpr uint32_t OPTSR_CUR_IWDG1_HW = 0x10;            // IWDG1 control option status bit
    static constexpr uint32_t OPTSR_CUR_nRST_STOP_D1 = 0x40;        // D1 DStop entry reset option status bit
    static constexpr uint32_t OPTSR_CUR_nRST_STBY_D1 = 0x80;        // D1 DStandby entry reset option status bit
    template<uint32_t X>
    static constexpr uint32_t OPTSR_CUR_RDP =                       // Readout protection level option status byte
        bit_field_t<8, 0xff>::value<X>();
    static constexpr uint32_t OPTSR_CUR_FZ_IWDG_STOP = 0x20000;     // IWDG Stop mode freeze option status bit
    static constexpr uint32_t OPTSR_CUR_FZ_IWDG_SDBY = 0x40000;     // IWDG Standby mode freeze option status bit
    template<uint32_t X>
    static constexpr uint32_t OPTSR_CUR_ST_RAM_SIZE =               // DTCM RAM size option status
        bit_field_t<19, 0x3>::value<X>();
    static constexpr uint32_t OPTSR_CUR_SECURITY = 0x200000;        // Security enable option status bit
    static constexpr uint32_t OPTSR_CUR_RSS1 = 0x4000000;           // User option bit 1
    static constexpr uint32_t OPTSR_CUR_PERSO_OK = 0x10000000;      // Device personalization status bit
    static constexpr uint32_t OPTSR_CUR_IO_HSLV = 0x20000000;       // I/O high-speed at low-voltage status bit (PRODUCT_BELOW_25V)
    static constexpr uint32_t OPTSR_CUR_OPTCHANGEERR = 0x40000000;  // Option byte change error flag
    static constexpr uint32_t OPTSR_CUR_SWAP_BANK_OPT = 0x80000000; // Bank swapping option status bit

    static constexpr uint32_t OPTSR_PRG_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OPTSR_PRG_BOR_LEV =                   // BOR reset level option configuration bits
        bit_field_t<2, 0x3>::value<X>();
    static constexpr uint32_t OPTSR_PRG_IWDG1_HW = 0x10;            // IWDG1 option configuration bit
    static constexpr uint32_t OPTSR_PRG_nRST_STOP_D1 = 0x40;        // Option byte erase after D1 DStop option configuration bit
    static constexpr uint32_t OPTSR_PRG_nRST_STBY_D1 = 0x80;        // Option byte erase after D1 DStandby option configuration bit
    template<uint32_t X>
    static constexpr uint32_t OPTSR_PRG_RDP =                       // Readout protection level option configuration byte
        bit_field_t<8, 0xff>::value<X>();
    static constexpr uint32_t OPTSR_PRG_FZ_IWDG_STOP = 0x20000;     // IWDG Stop mode freeze option configuration bit
    static constexpr uint32_t OPTSR_PRG_FZ_IWDG_SDBY = 0x40000;     // IWDG Standby mode freeze option configuration bit
    template<uint32_t X>
    static constexpr uint32_t OPTSR_PRG_ST_RAM_SIZE =               // DTCM size select option configuration bits
        bit_field_t<19, 0x3>::value<X>();
    static constexpr uint32_t OPTSR_PRG_SECURITY = 0x200000;        // Security option configuration bit
    static constexpr uint32_t OPTSR_PRG_RSS1 = 0x4000000;           // User option configuration bit 1
    static constexpr uint32_t OPTSR_PRG_RSS2 = 0x8000000;           // User option configuration bit 2
    static constexpr uint32_t OPTSR_PRG_IO_HSLV = 0x20000000;       // I/O high-speed at low-voltage (PRODUCT_BELOW_25V)
    static constexpr uint32_t OPTSR_PRG_SWAP_BANK_OPT = 0x80000000; // Bank swapping option configuration bit

    static constexpr uint32_t OPTSR_PRG__RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OPTSR_PRG__BOR_LEV =                   // BOR reset level option configuration bits
        bit_field_t<2, 0x3>::value<X>();
    static constexpr uint32_t OPTSR_PRG__IWDG1_HW = 0x10;            // IWDG1 option configuration bit
    static constexpr uint32_t OPTSR_PRG__nRST_STOP_D1 = 0x40;        // Option byte erase after D1 DStop option configuration bit
    static constexpr uint32_t OPTSR_PRG__nRST_STBY_D1 = 0x80;        // Option byte erase after D1 DStandby option configuration bit
    template<uint32_t X>
    static constexpr uint32_t OPTSR_PRG__RDP =                       // Readout protection level option configuration byte
        bit_field_t<8, 0xff>::value<X>();
    static constexpr uint32_t OPTSR_PRG__FZ_IWDG_STOP = 0x20000;     // IWDG Stop mode freeze option configuration bit
    static constexpr uint32_t OPTSR_PRG__FZ_IWDG_SDBY = 0x40000;     // IWDG Standby mode freeze option configuration bit
    template<uint32_t X>
    static constexpr uint32_t OPTSR_PRG__ST_RAM_SIZE =               // DTCM size select option configuration bits
        bit_field_t<19, 0x3>::value<X>();
    static constexpr uint32_t OPTSR_PRG__SECURITY = 0x200000;        // Security option configuration bit
    static constexpr uint32_t OPTSR_PRG__RSS1 = 0x4000000;           // User option configuration bit 1
    static constexpr uint32_t OPTSR_PRG__RSS2 = 0x8000000;           // User option configuration bit 2
    static constexpr uint32_t OPTSR_PRG__IO_HSLV = 0x20000000;       // I/O high-speed at low-voltage (PRODUCT_BELOW_25V)
    static constexpr uint32_t OPTSR_PRG__SWAP_BANK_OPT = 0x80000000; // Bank swapping option configuration bit

    static constexpr uint32_t OPTCCR__RESET_VALUE = 0x0;
    static constexpr uint32_t OPTCCR__CLR_OPTCHANGEERR = 0x40000000; // OPTCHANGEERR reset bit

    static constexpr uint32_t OPTCCR_RESET_VALUE = 0x0;
    static constexpr uint32_t OPTCCR_CLR_OPTCHANGEERR = 0x40000000; // OPTCHANGEERR reset bit

    static constexpr uint32_t PRAR_CUR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t PRAR_CUR1_PROT_AREA_START1 =   // Bank 1 lowest PCROP protected address
        bit_field_t<0, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PRAR_CUR1_PROT_AREA_END1 =     // Bank 1 highest PCROP protected address
        bit_field_t<16, 0xfff>::value<X>();
    static constexpr uint32_t PRAR_CUR1_DMEP1 = 0x80000000;  // Bank 1 PCROP protected erase enable option status bit

    static constexpr uint32_t PRAR_PRG1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t PRAR_PRG1_PROT_AREA_START1 =   // Bank 1 lowest PCROP protected address configuration
        bit_field_t<0, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PRAR_PRG1_PROT_AREA_END1 =     // Bank 1 highest PCROP protected address configuration
        bit_field_t<16, 0xfff>::value<X>();
    static constexpr uint32_t PRAR_PRG1_DMEP1 = 0x80000000;  // Bank 1 PCROP protected erase enable option configuration bit

    static constexpr uint32_t WPSN_CUR1R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t WPSN_CUR1R_WRPSn1 =   // Bank 1 sector write protection option status byte
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t WPSN_PRG1R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t WPSN_PRG1R_WRPSn1 =   // Bank 1 sector write protection configuration byte
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t BOOT_CURR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t BOOT_CURR_BOOT_ADD0 =   // Boot address 0
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BOOT_CURR_BOOT_ADD1 =   // Boot address 1
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t BOOT_PRGR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t BOOT_PRGR_BOOT_ADD0 =   // Boot address 0
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BOOT_PRGR_BOOT_ADD1 =   // Boot address 1
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t CRCCR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CRCCR1_CRC_SECT =           // Bank 1 CRC sector number
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t CRCCR1_ALL_BANK = 0x80;     // Bank 1 CRC select bit
    static constexpr uint32_t CRCCR1_CRC_BY_SECT = 0x100; // Bank 1 CRC sector mode select bit
    static constexpr uint32_t CRCCR1_ADD_SECT = 0x200;    // Bank 1 CRC sector select bit
    static constexpr uint32_t CRCCR1_CLEAN_SECT = 0x400;  // Bank 1 CRC sector list clear bit
    static constexpr uint32_t CRCCR1_START_CRC = 0x10000; // Bank 1 CRC start bit
    static constexpr uint32_t CRCCR1_CLEAN_CRC = 0x20000; // Bank 1 CRC clear bit
    template<uint32_t X>
    static constexpr uint32_t CRCCR1_CRC_BURST =          // Bank 1 CRC burst size
        bit_field_t<20, 0x3>::value<X>();

    static constexpr uint32_t CRCSADD1R_RESET_VALUE = 0x0;

    static constexpr uint32_t CRCEADD1R_RESET_VALUE = 0x0;

    static constexpr uint32_t CRCDATAR_RESET_VALUE = 0x0;

    static constexpr uint32_t ECC_FA1R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ECC_FA1R_FAIL_ECC_ADDR1 =   // Bank 1 ECC error address
        bit_field_t<0, 0x7fff>::value<X>();

    static constexpr uint32_t KEYR2_RESET_VALUE = 0x0;

    static constexpr uint32_t CR2_RESET_VALUE = 0x0;
    static constexpr uint32_t CR2_LOCK2 = 0x1;             // Bank 2 configuration lock bit
    static constexpr uint32_t CR2_PG2 = 0x2;               // Bank 2 program enable bit
    static constexpr uint32_t CR2_SER2 = 0x4;              // Bank 2 sector erase request
    static constexpr uint32_t CR2_BER2 = 0x8;              // Bank 2 erase request
    template<uint32_t X>
    static constexpr uint32_t CR2_PSIZE2 =                 // Bank 2 program size
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t CR2_FW2 = 0x40;              // Bank 2 write forcing control bit
    static constexpr uint32_t CR2_START2 = 0x80;           // Bank 2 bank or sector erase start control bit
    template<uint32_t X>
    static constexpr uint32_t CR2_SNB2 =                   // Bank 2 sector erase selection number
        bit_field_t<8, 0x7>::value<X>();
    static constexpr uint32_t CR2_CRC_EN = 0x8000;         // Bank 2 CRC control bit
    static constexpr uint32_t CR2_EOPIE2 = 0x10000;        // Bank 2 end-of-program interrupt control bit
    static constexpr uint32_t CR2_WRPERRIE2 = 0x20000;     // Bank 2 write protection error interrupt enable bit
    static constexpr uint32_t CR2_PGSERRIE2 = 0x40000;     // Bank 2 programming sequence error interrupt enable bit
    static constexpr uint32_t CR2_STRBERRIE2 = 0x80000;    // Bank 2 strobe error interrupt enable bit
    static constexpr uint32_t CR2_INCERRIE2 = 0x200000;    // Bank 2 inconsistency error interrupt enable bit
    static constexpr uint32_t CR2_OPERRIE2 = 0x400000;     // Bank 2 write/erase error interrupt enable bit
    static constexpr uint32_t CR2_RDPERRIE2 = 0x800000;    // Bank 2 read protection error interrupt enable bit
    static constexpr uint32_t CR2_RDSERRIE2 = 0x1000000;   // Bank 2 secure error interrupt enable bit
    static constexpr uint32_t CR2_SNECCERRIE2 = 0x2000000; // Bank 2 ECC single correction error interrupt enable bit
    static constexpr uint32_t CR2_DBECCERRIE2 = 0x4000000; // Bank 2 ECC double detection error interrupt enable bit
    static constexpr uint32_t CR2_CRCENDIE2 = 0x8000000;   // Bank 2 end of CRC calculation interrupt enable bit

    static constexpr uint32_t SR2_RESET_VALUE = 0x0;
    static constexpr uint32_t SR2_BSY2 = 0x1;            // Bank 2 ongoing program flag
    static constexpr uint32_t SR2_WBNE2 = 0x2;           // Bank 2 write buffer not empty flag
    static constexpr uint32_t SR2_QW2 = 0x4;             // Bank 2 wait queue flag
    static constexpr uint32_t SR2_CRC_BUSY2 = 0x8;       // Bank 2 CRC busy flag
    static constexpr uint32_t SR2_EOP2 = 0x10000;        // Bank 2 end-of-program flag
    static constexpr uint32_t SR2_WRPERR2 = 0x20000;     // Bank 2 write protection error flag
    static constexpr uint32_t SR2_PGSERR2 = 0x40000;     // Bank 2 programming sequence error flag
    static constexpr uint32_t SR2_STRBERR2 = 0x80000;    // Bank 2 strobe error flag
    static constexpr uint32_t SR2_INCERR2 = 0x200000;    // Bank 2 inconsistency error flag
    static constexpr uint32_t SR2_OPERR2 = 0x400000;     // Bank 2 write/erase error flag
    static constexpr uint32_t SR2_RDPERR2 = 0x800000;    // Bank 2 read protection error flag
    static constexpr uint32_t SR2_RDSERR2 = 0x1000000;   // Bank 2 secure error flag
    static constexpr uint32_t SR2_SNECCERR2 = 0x2000000; // Bank 2 single correction error flag
    static constexpr uint32_t SR2_DBECCERR2 = 0x4000000; // Bank 2 ECC double detection error flag
    static constexpr uint32_t SR2_CRCEND2 = 0x8000000;   // Bank 2 CRC-complete flag

    static constexpr uint32_t CCR2_RESET_VALUE = 0x0;
    static constexpr uint32_t CCR2_CLR_EOP2 = 0x10000;        // Bank 1 EOP1 flag clear bit
    static constexpr uint32_t CCR2_CLR_WRPERR2 = 0x20000;     // Bank 2 WRPERR1 flag clear bit
    static constexpr uint32_t CCR2_CLR_PGSERR2 = 0x40000;     // Bank 2 PGSERR1 flag clear bi
    static constexpr uint32_t CCR2_CLR_STRBERR2 = 0x80000;    // Bank 2 STRBERR1 flag clear bit
    static constexpr uint32_t CCR2_CLR_INCERR2 = 0x200000;    // Bank 2 INCERR1 flag clear bit
    static constexpr uint32_t CCR2_CLR_OPERR2 = 0x400000;     // Bank 2 OPERR1 flag clear bit
    static constexpr uint32_t CCR2_CLR_RDPERR2 = 0x800000;    // Bank 2 RDPERR1 flag clear bit
    static constexpr uint32_t CCR2_CLR_RDSERR1 = 0x1000000;   // Bank 1 RDSERR1 flag clear bit
    static constexpr uint32_t CCR2_CLR_SNECCERR2 = 0x2000000; // Bank 2 SNECCERR1 flag clear bit
    static constexpr uint32_t CCR2_CLR_DBECCERR1 = 0x4000000; // Bank 1 DBECCERR1 flag clear bit
    static constexpr uint32_t CCR2_CLR_CRCEND2 = 0x8000000;   // Bank 2 CRCEND1 flag clear bit

    static constexpr uint32_t PRAR_CUR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t PRAR_CUR2_PROT_AREA_START2 =   // Bank 2 lowest PCROP protected address
        bit_field_t<0, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PRAR_CUR2_PROT_AREA_END2 =     // Bank 2 highest PCROP protected address
        bit_field_t<16, 0xfff>::value<X>();
    static constexpr uint32_t PRAR_CUR2_DMEP2 = 0x80000000;  // Bank 2 PCROP protected erase enable option status bit

    static constexpr uint32_t PRAR_PRG2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t PRAR_PRG2_PROT_AREA_START2 =   // Bank 2 lowest PCROP protected address configuration
        bit_field_t<0, 0xfff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PRAR_PRG2_PROT_AREA_END2 =     // Bank 2 highest PCROP protected address configuration
        bit_field_t<16, 0xfff>::value<X>();
    static constexpr uint32_t PRAR_PRG2_DMEP2 = 0x80000000;  // Bank 2 PCROP protected erase enable option configuration bit

    static constexpr uint32_t WPSN_CUR2R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t WPSN_CUR2R_WRPSn2 =   // Bank 2 sector write protection option status byte
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t WPSN_PRG2R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t WPSN_PRG2R_WRPSn2 =   // Bank 2 sector write protection configuration byte
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t CRCCR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CRCCR2_CRC_SECT =           // Bank 2 CRC sector number
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t CRCCR2_ALL_BANK = 0x80;     // Bank 2 CRC select bit
    static constexpr uint32_t CRCCR2_CRC_BY_SECT = 0x100; // Bank 2 CRC sector mode select bit
    static constexpr uint32_t CRCCR2_ADD_SECT = 0x200;    // Bank 2 CRC sector select bit
    static constexpr uint32_t CRCCR2_CLEAN_SECT = 0x400;  // Bank 2 CRC sector list clear bit
    static constexpr uint32_t CRCCR2_START_CRC = 0x10000; // Bank 2 CRC start bit
    static constexpr uint32_t CRCCR2_CLEAN_CRC = 0x20000; // Bank 2 CRC clear bit
    template<uint32_t X>
    static constexpr uint32_t CRCCR2_CRC_BURST =          // Bank 2 CRC burst size
        bit_field_t<20, 0x3>::value<X>();

    static constexpr uint32_t CRCSADD2R_RESET_VALUE = 0x0;

    static constexpr uint32_t CRCEADD2R_RESET_VALUE = 0x0;

    static constexpr uint32_t ECC_FA2R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ECC_FA2R_FAIL_ECC_ADDR2 =   // Bank 2 ECC error address
        bit_field_t<0, 0x7fff>::value<X>();
};


template<>
struct peripheral_t<STM32H742x, FLASH>
{
    typedef stm32h742x_flash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, FLASH>
{
    typedef stm32h742x_flash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, FLASH>
{
    typedef stm32h742x_flash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, FLASH>
{
    typedef stm32h742x_flash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, FLASH>
{
    typedef stm32h742x_flash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, FLASH>
{
    typedef stm32h742x_flash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, FLASH>
{
    typedef stm32h742x_flash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, FLASH>
{
    typedef stm32h742x_flash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, FLASH>
{
    typedef stm32h742x_flash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, FLASH>
{
    typedef stm32h742x_flash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, FLASH>
{
    typedef stm32h742x_flash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, FLASH>
{
    typedef stm32h742x_flash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, FLASH>
{
    typedef stm32h742x_flash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, FLASH>
{
    typedef stm32h742x_flash_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, FLASH>
{
    typedef stm32h7a3x_flash_t T;
    static T& V;
};

using flash_t = peripheral_t<mcu_svd, FLASH>;

