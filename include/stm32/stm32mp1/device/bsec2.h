#pragma once

////
//
//      STM32MP1 BSEC2 peripherals
//
////

////
//
//      BSEC2
//
////

struct stm32mp15xxx_bsec_t
{
    volatile uint32_t BSEC_OTP_CONFIG;     // [read-write] BSEC OTP configuration register
    volatile uint32_t BSEC_OTP_CONTROL;    // [read-write] BSEC OTP control register
    volatile uint32_t BSEC_OTP_WRDATA;     // [read-write] BSEC OTP write data register
    volatile uint32_t BSEC_OTP_STATUS;     // [read-only] BSEC OTP status register
    volatile uint32_t BSEC_OTP_LOCK;       // [read-write] BSEC OTP lock configuration register
    volatile uint32_t BSEC_DENABLE;        // [read-write] reset value depends on OTP secure mode according toTable18: BSEC_DENABLE default values after reset on page181.
    reserved_t<0x1> _0x1c;
    volatile uint32_t BSEC_OTP_DISTURBED0; // [read-only] BSEC_OTP_DISTURBED0 is used to report disturbed state of BSEC_OTP_DATA0 to BSEC_OTP_DATA31 (lower 1Kbits OTP). BSEC_OTP_DISTURBED1 is used to report disturbed state of BSEC_OTP_DATA32 to BSEC_OTP_DATA63. BSEC_OTP_DISTURBED2 is used to report disturbed state of BSEC_OTP_DATA64 to BSEC_OTP_DATA95.
    volatile uint32_t BSEC_OTP_DISTURBED1; // [read-only] BSEC_OTP_DISTURBED0 is used to report disturbed state of BSEC_OTP_DATA0 to BSEC_OTP_DATA31 (lower 1Kbits OTP). BSEC_OTP_DISTURBED1 is used to report disturbed state of BSEC_OTP_DATA32 to BSEC_OTP_DATA63. BSEC_OTP_DISTURBED2 is used to report disturbed state of BSEC_OTP_DATA64 to BSEC_OTP_DATA95.
    volatile uint32_t BSEC_OTP_DISTURBED2; // [read-only] BSEC_OTP_DISTURBED0 is used to report disturbed state of BSEC_OTP_DATA0 to BSEC_OTP_DATA31 (lower 1Kbits OTP). BSEC_OTP_DISTURBED1 is used to report disturbed state of BSEC_OTP_DATA32 to BSEC_OTP_DATA63. BSEC_OTP_DISTURBED2 is used to report disturbed state of BSEC_OTP_DATA64 to BSEC_OTP_DATA95.
    reserved_t<0x3> _0x34;
    volatile uint32_t BSEC_OTP_ERROR0;     // [read-only] BSEC_OTP_ERROR0 is used to report error state of BSEC_OTP_DATA0 to BSEC_OTP_DATA31 (lower 1Kbits OTP which are protected by 2:1 redundancy). BSEC_OTP_ERROR1 is used to report error state of BSEC_OTP_DATA32 to BSEC_OTP_DATA63 which are protected by 6-bit ECC. BSEC_OTP_ERROR2 is used to report error state of BSEC_OTP_DATA64 to BSEC_OTP_DATA95 which are protected by 6-bit ECC.
    volatile uint32_t BSEC_OTP_ERROR1;     // [read-only] BSEC_OTP_ERROR0 is used to report error state of BSEC_OTP_DATA0 to BSEC_OTP_DATA31 (lower 1Kbits OTP which are protected by 2:1 redundancy). BSEC_OTP_ERROR1 is used to report error state of BSEC_OTP_DATA32 to BSEC_OTP_DATA63 which are protected by 6-bit ECC. BSEC_OTP_ERROR2 is used to report error state of BSEC_OTP_DATA64 to BSEC_OTP_DATA95 which are protected by 6-bit ECC.
    volatile uint32_t BSEC_OTP_ERROR2;     // [read-only] BSEC_OTP_ERROR0 is used to report error state of BSEC_OTP_DATA0 to BSEC_OTP_DATA31 (lower 1Kbits OTP which are protected by 2:1 redundancy). BSEC_OTP_ERROR1 is used to report error state of BSEC_OTP_DATA32 to BSEC_OTP_DATA63 which are protected by 6-bit ECC. BSEC_OTP_ERROR2 is used to report error state of BSEC_OTP_DATA64 to BSEC_OTP_DATA95 which are protected by 6-bit ECC.
    reserved_t<0x3> _0x4c;
    volatile uint32_t BSEC_OTP_WRLOCK0;    // [read-only] BSEC_OTP_WLOCK0 is used to report permanent write lock of BSEC_OTP_DATA0 to BSEC_OTP_DATA31. BSEC_OTP_WLOCK1 is used to report permanent write lock of BSEC_OTP_DATA32 to BSEC_OTP_DATA63. BSEC_OTP_WLOCK2 is used to report permanent write lock of BSEC_OTP_DATA64 to BSEC_OTP_DATA95. Permanent write lock requires a programming sequence to lock a word (see section:Section3.3.6: OTP operations on page178).
    volatile uint32_t BSEC_OTP_WRLOCK1;    // [read-only] BSEC_OTP_WLOCK0 is used to report permanent write lock of BSEC_OTP_DATA0 to BSEC_OTP_DATA31. BSEC_OTP_WLOCK1 is used to report permanent write lock of BSEC_OTP_DATA32 to BSEC_OTP_DATA63. BSEC_OTP_WLOCK2 is used to report permanent write lock of BSEC_OTP_DATA64 to BSEC_OTP_DATA95. Permanent write lock requires a programming sequence to lock a word (see section:Section3.3.6: OTP operations on page178).
    volatile uint32_t BSEC_OTP_WRLOCK2;    // [read-only] BSEC_OTP_WLOCK0 is used to report permanent write lock of BSEC_OTP_DATA0 to BSEC_OTP_DATA31. BSEC_OTP_WLOCK1 is used to report permanent write lock of BSEC_OTP_DATA32 to BSEC_OTP_DATA63. BSEC_OTP_WLOCK2 is used to report permanent write lock of BSEC_OTP_DATA64 to BSEC_OTP_DATA95. Permanent write lock requires a programming sequence to lock a word (see section:Section3.3.6: OTP operations on page178).
    reserved_t<0x3> _0x64;
    volatile uint32_t BSEC_OTP_SPLOCK0;    // [read-write] BSEC_OTP_SPLOCK0 is used to lock the programming of BSEC_OTP_DATA0 to BSEC_OTP_DATA31 until next system-reset BSEC_OTP_SPLOCK1 is used to lock the programming of BSEC_OTP_DATA32 to BSEC_OTP_DATA63 until next system-reset BSEC_OTP_SPLOCK2 is used to lock the programming of BSEC_OTP_DATA64 to BSEC_OTP_DATA95 until next system-reset Attempt to sticky program locked OTP word are silently ignored.
    volatile uint32_t BSEC_OTP_SPLOCK1;    // [read-write] BSEC_OTP_SPLOCK0 is used to lock the programming of BSEC_OTP_DATA0 to BSEC_OTP_DATA31 until next system-reset BSEC_OTP_SPLOCK1 is used to lock the programming of BSEC_OTP_DATA32 to BSEC_OTP_DATA63 until next system-reset BSEC_OTP_SPLOCK2 is used to lock the programming of BSEC_OTP_DATA64 to BSEC_OTP_DATA95 until next system-reset Attempt to sticky program locked OTP word are silently ignored.
    volatile uint32_t BSEC_OTP_SPLOCK2;    // [read-write] BSEC_OTP_SPLOCK0 is used to lock the programming of BSEC_OTP_DATA0 to BSEC_OTP_DATA31 until next system-reset BSEC_OTP_SPLOCK1 is used to lock the programming of BSEC_OTP_DATA32 to BSEC_OTP_DATA63 until next system-reset BSEC_OTP_SPLOCK2 is used to lock the programming of BSEC_OTP_DATA64 to BSEC_OTP_DATA95 until next system-reset Attempt to sticky program locked OTP word are silently ignored.
    reserved_t<0x3> _0x7c;
    volatile uint32_t BSEC_OTP_SWLOCK0;    // [read-write] BSEC_OTP_SWLOCK0 is used to prevent writing to BSEC_OTP_DATA0 to BSEC_OTP_DATA31 until next system-reset. BSEC_OTP_SWLOCK1 is used to prevent writing to BSEC_OTP_DATA32 to BSEC_OTP_DATA63 until next system-reset. BSEC_OTP_SWLOCK2 is used to prevent writing to BSEC_OTP_DATA64 to BSEC_OTP_DATA95 until next system-reset. Write to shadow write locked BSEC_OTP_DATA word are silently ignored. Writing to OTP word 0 shadow is always prevented.
    volatile uint32_t BSEC_OTP_SWLOCK1;    // [read-write] BSEC_OTP_SWLOCK0 is used to prevent writing to BSEC_OTP_DATA0 to BSEC_OTP_DATA31 until next system-reset. BSEC_OTP_SWLOCK1 is used to prevent writing to BSEC_OTP_DATA32 to BSEC_OTP_DATA63 until next system-reset. BSEC_OTP_SWLOCK2 is used to prevent writing to BSEC_OTP_DATA64 to BSEC_OTP_DATA95 until next system-reset. Write to shadow write locked BSEC_OTP_DATA word are silently ignored. Writing to OTP word 0 shadow is always prevented.
    volatile uint32_t BSEC_OTP_SWLOCK2;    // [read-write] BSEC_OTP_SWLOCK0 is used to prevent writing to BSEC_OTP_DATA0 to BSEC_OTP_DATA31 until next system-reset. BSEC_OTP_SWLOCK1 is used to prevent writing to BSEC_OTP_DATA32 to BSEC_OTP_DATA63 until next system-reset. BSEC_OTP_SWLOCK2 is used to prevent writing to BSEC_OTP_DATA64 to BSEC_OTP_DATA95 until next system-reset. Write to shadow write locked BSEC_OTP_DATA word are silently ignored. Writing to OTP word 0 shadow is always prevented.
    reserved_t<0x3> _0x94;
    volatile uint32_t BSEC_OTP_SRLOCK0;    // [read-write] BSEC_OTP_SRLOCK0 is used to prevent reloading of BSEC_OTP_DATA0 to BSEC_OTP_DATA31 until next system-reset. BSEC_OTP_SRLOCK1 is used to prevent reloading of BSEC_OTP_DATA32 to BSEC_OTP_DATA63 until next system-reset. BSEC_OTP_SRLOCK2 is used to prevent reloading of BSEC_OTP_DATA64 to BSEC_OTP_DATA95 until next system-reset. Setting SRLOCK bits or attempt to reload a locked OTP do not clear the corresponding BSEC_OTP_DATAx shadow register. BSEC_OTP_SRLOCK0 bit 0 is controlled by hardware according to fuse_ok, writing to this bit has no effect.
    volatile uint32_t BSEC_OTP_SRLOCK1;    // [read-write] BSEC_OTP_SRLOCK0 is used to prevent reloading of BSEC_OTP_DATA0 to BSEC_OTP_DATA31 until next system-reset. BSEC_OTP_SRLOCK1 is used to prevent reloading of BSEC_OTP_DATA32 to BSEC_OTP_DATA63 until next system-reset. BSEC_OTP_SRLOCK2 is used to prevent reloading of BSEC_OTP_DATA64 to BSEC_OTP_DATA95 until next system-reset. Setting SRLOCK bits or attempt to reload a locked OTP do not clear the corresponding BSEC_OTP_DATAx shadow register. BSEC_OTP_SRLOCK0 bit 0 is controlled by hardware according to fuse_ok, writing to this bit has no effect.
    volatile uint32_t BSEC_OTP_SRLOCK2;    // [read-write] BSEC_OTP_SRLOCK0 is used to prevent reloading of BSEC_OTP_DATA0 to BSEC_OTP_DATA31 until next system-reset. BSEC_OTP_SRLOCK1 is used to prevent reloading of BSEC_OTP_DATA32 to BSEC_OTP_DATA63 until next system-reset. BSEC_OTP_SRLOCK2 is used to prevent reloading of BSEC_OTP_DATA64 to BSEC_OTP_DATA95 until next system-reset. Setting SRLOCK bits or attempt to reload a locked OTP do not clear the corresponding BSEC_OTP_DATAx shadow register. BSEC_OTP_SRLOCK0 bit 0 is controlled by hardware according to fuse_ok, writing to this bit has no effect.
    reserved_t<0x3> _0xac;
    volatile uint32_t BSEC_JTAGIN;         // [read-only] BSEC JTAG input register
    volatile uint32_t BSEC_JTAGOUT;        // [read-write] BSEC JTAG output register
    volatile uint32_t BSEC_SCRATCH;        // [read-write] BSEC scratch register
    reserved_t<0x52> _0x200;
    volatile uint32_t BSEC_OTP_DATA0;      // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA1;      // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA2;      // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA3;      // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA4;      // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA5;      // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA6;      // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA7;      // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA8;      // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA9;      // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA10;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA11;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA12;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA13;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA14;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA15;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA16;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA17;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA18;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA19;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA20;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA21;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA22;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA23;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA24;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA25;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA26;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA27;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA28;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA29;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA30;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA31;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA32;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA33;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA34;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA35;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA36;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA37;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA38;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA39;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA40;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA41;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA42;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA43;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA44;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA45;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA46;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA47;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA48;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA49;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA50;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA51;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA52;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA53;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA54;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA55;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA56;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA57;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA58;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA59;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA60;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA61;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA62;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA63;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA64;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA65;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA66;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA67;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA68;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA69;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA70;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA71;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA72;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA73;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA74;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA75;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA76;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA77;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA78;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA79;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA80;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA81;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA82;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA83;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA84;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA85;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA86;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA87;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA88;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA89;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA90;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA91;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA92;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA93;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA94;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    volatile uint32_t BSEC_OTP_DATA95;     // [read-write] Several OTP directly impact BSEC behavior, such as: BSEC_OTP_DATA0[6:0] (see Table15: OTP modes definition on page175) BSEC_OTP_DATA1, 16 lsb used for SoC features control BSEC_OTP_DATA2, 2 lsb used to control the RAM handling The reset value depends on the actual OTP programmed value and the OTP mode.
    reserved_t<0x31c> _0xff0;
    volatile uint32_t BSEC_HWCFGR;         // [read-only] BSEC hardware configuration register
    volatile uint32_t BSEC_VERR;           // [read-only] BSEC version register
    volatile uint32_t BSEC_IPIDR;          // [read-only] BSEC identification register
    volatile uint32_t BSEC_SIDR;           // [read-only] BSEC size identification register

    static constexpr uint32_t BSEC_OTP_CONFIG_RESET_VALUE = 0xe;
    static constexpr uint32_t BSEC_OTP_CONFIG_PWRUP = 0x1; // PWRUP
    template<uint32_t X>
    static constexpr uint32_t BSEC_OTP_CONFIG_FRC =        // FRC
        bit_field_t<1, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BSEC_OTP_CONFIG_PRGWIDTH =   // PRGWIDTH
        bit_field_t<3, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BSEC_OTP_CONFIG_TREAD =      // TREAD
        bit_field_t<7, 0x3>::value<X>();

    static constexpr uint32_t BSEC_OTP_CONTROL_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t BSEC_OTP_CONTROL_ADDR =        // ADDR
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t BSEC_OTP_CONTROL_PROG = 0x100; // PROG
    static constexpr uint32_t BSEC_OTP_CONTROL_LOCK = 0x200; // LOCK

    static constexpr uint32_t BSEC_OTP_WRDATA_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_STATUS_RESET_VALUE = 0x0;
    static constexpr uint32_t BSEC_OTP_STATUS_SECURE = 0x1;     // SECURE
    static constexpr uint32_t BSEC_OTP_STATUS_FULLDBG = 0x2;    // FULLDBG
    static constexpr uint32_t BSEC_OTP_STATUS_INVALID = 0x4;    // INVALID
    static constexpr uint32_t BSEC_OTP_STATUS_BUSY = 0x8;       // BUSY
    static constexpr uint32_t BSEC_OTP_STATUS_PROGFAIL = 0x10;  // PROGFAIL
    static constexpr uint32_t BSEC_OTP_STATUS_PWRON = 0x20;     // PWRON
    static constexpr uint32_t BSEC_OTP_STATUS_BIST1LOCK = 0x40; // BIST1LOCK
    static constexpr uint32_t BSEC_OTP_STATUS_BIST2LOCK = 0x80; // BIST2LOCK

    static constexpr uint32_t BSEC_OTP_LOCK_RESET_VALUE = 0x0;
    static constexpr uint32_t BSEC_OTP_LOCK_OTP = 0x1;     // OTP
    static constexpr uint32_t BSEC_OTP_LOCK_ROMLOCK = 0x2; // ROMLOCK
    static constexpr uint32_t BSEC_OTP_LOCK_DENREG = 0x4;  // DENREG
    static constexpr uint32_t BSEC_OTP_LOCK_GPLOCK = 0x10; // GPLOCK

    static constexpr uint32_t BSEC_DENABLE_RESET_VALUE = 0x0;
    static constexpr uint32_t BSEC_DENABLE_DFTEN = 0x1;         // DFTEN
    static constexpr uint32_t BSEC_DENABLE_DBGEN = 0x2;         // DBGEN
    static constexpr uint32_t BSEC_DENABLE_NIDEN = 0x4;         // NIDEN
    static constexpr uint32_t BSEC_DENABLE_DEVICEEN = 0x8;      // DEVICEEN
    static constexpr uint32_t BSEC_DENABLE_HDPEN = 0x10;        // HDPEN
    static constexpr uint32_t BSEC_DENABLE_SPIDEN = 0x20;       // SPIDEN
    static constexpr uint32_t BSEC_DENABLE_SPNIDEN = 0x40;      // SPNIDEN
    template<uint32_t X>
    static constexpr uint32_t BSEC_DENABLE_CP15SDISABLE =       // CP15SDISABLE
        bit_field_t<7, 0x3>::value<X>();
    static constexpr uint32_t BSEC_DENABLE_CFGSDISABLE = 0x200; // CFGSDISABLE
    static constexpr uint32_t BSEC_DENABLE_DBGSWENABLE = 0x400; // DBGSWENABLE

    static constexpr uint32_t BSEC_OTP_DISTURBED0_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DISTURBED1_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DISTURBED2_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_ERROR0_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_ERROR1_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_ERROR2_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_WRLOCK0_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_WRLOCK1_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_WRLOCK2_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_SPLOCK0_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_SPLOCK1_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_SPLOCK2_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_SWLOCK0_RESET_VALUE = 0x1;

    static constexpr uint32_t BSEC_OTP_SWLOCK1_RESET_VALUE = 0x1;

    static constexpr uint32_t BSEC_OTP_SWLOCK2_RESET_VALUE = 0x1;

    static constexpr uint32_t BSEC_OTP_SRLOCK0_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_SRLOCK1_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_SRLOCK2_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_JTAGIN_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t BSEC_JTAGIN_DATA =   // DATA
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t BSEC_JTAGOUT_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t BSEC_JTAGOUT_DATA =   // DATA
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t BSEC_SCRATCH_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA0_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA1_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA2_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA3_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA4_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA5_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA6_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA7_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA8_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA9_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA10_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA11_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA12_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA13_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA14_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA15_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA16_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA17_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA18_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA19_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA20_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA21_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA22_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA23_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA24_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA25_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA26_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA27_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA28_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA29_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA30_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA31_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA32_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA33_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA34_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA35_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA36_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA37_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA38_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA39_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA40_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA41_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA42_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA43_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA44_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA45_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA46_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA47_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA48_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA49_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA50_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA51_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA52_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA53_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA54_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA55_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA56_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA57_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA58_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA59_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA60_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA61_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA62_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA63_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA64_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA65_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA66_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA67_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA68_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA69_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA70_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA71_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA72_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA73_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA74_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA75_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA76_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA77_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA78_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA79_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA80_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA81_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA82_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA83_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA84_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA85_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA86_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA87_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA88_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA89_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA90_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA91_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA92_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA93_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA94_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_OTP_DATA95_RESET_VALUE = 0x0;

    static constexpr uint32_t BSEC_HWCFGR_RESET_VALUE = 0x14;
    template<uint32_t X>
    static constexpr uint32_t BSEC_HWCFGR_SIZE =      // SIZE
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BSEC_HWCFGR_ECC_USE =   // ECC_USE
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t BSEC_VERR_RESET_VALUE = 0x11;
    template<uint32_t X>
    static constexpr uint32_t BSEC_VERR_MINREV =   // MINREV
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BSEC_VERR_MAJREV =   // MAJREV
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t BSEC_IPIDR_RESET_VALUE = 0x100032;

    static constexpr uint32_t BSEC_SIDR_RESET_VALUE = 0xa3c5dd04;
};


template<>
struct peripheral_t<STM32MP15xxx, BSEC>
{
    typedef stm32mp15xxx_bsec_t T;
    static T& V;
};

using bsec_t = peripheral_t<mcu_svd, BSEC>;

