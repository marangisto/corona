#pragma once

////
//
//      STM32U5 TAMP peripherals
//
///

// TAMP: Tamper and backup registers

struct stm32u5xx_tamp_t
{
    volatile uint32_t TAMP_CR1; // TAMP control register 1
    volatile uint32_t TAMP_CR2; // TAMP control register 2
    volatile uint32_t TAMP_CR3; // TAMP control register 3
    volatile uint32_t TAMP_FLTCR; // TAMP filter control register
    volatile uint32_t TAMP_ATCR1; // TAMP active tamper control register 1
    volatile uint32_t TAMP_ATSEEDR; // TAMP active tamper seed register
    volatile uint32_t TAMP_ATOR; // TAMP active tamper output register
    volatile uint32_t TAMP_ATCR2; // TAMP active tamper control register 2
    volatile uint32_t TAMP_SECCFGR; // TAMP secure mode register
    volatile uint32_t TAMP_PRIVCR; // TAMP privilege mode control register
    reserved_t<0x1> _0x28;
    volatile uint32_t TAMP_IER; // TAMP interrupt enable register
    volatile uint32_t TAMP_SR; // TAMP status register
    volatile uint32_t TAMP_MISR; // TAMP non-secure masked interrupt status register
    volatile uint32_t TAMP_SMISR; // TAMP secure masked interrupt status register
    volatile uint32_t TAMP_SCR; // TAMP status clear register
    volatile uint32_t TAMP_COUNT1R; // TAMP monotonic counter 1 register
    reserved_t<0x4> _0x44;
    volatile uint32_t TAMP_ERCFGR; // TAMP erase configuration register
    reserved_t<0x2a> _0x58;
    volatile uint32_t TAMP_BKP0R; // TAMP backup 0 register
    volatile uint32_t TAMP_BKP1R; // TAMP backup 1 register
    volatile uint32_t TAMP_BKP2R; // TAMP backup 2 register
    volatile uint32_t TAMP_BKP3R; // TAMP backup 3 register
    volatile uint32_t TAMP_BKP4R; // TAMP backup 4 register
    volatile uint32_t TAMP_BKP5R; // TAMP backup 5 register
    volatile uint32_t TAMP_BKP6R; // TAMP backup 6 register
    volatile uint32_t TAMP_BKP7R; // TAMP backup 7 register
    volatile uint32_t TAMP_BKP8R; // TAMP backup 8 register
    volatile uint32_t TAMP_BKP9R; // TAMP backup 9 register
    volatile uint32_t TAMP_BKP10R; // TAMP backup 10 register
    volatile uint32_t TAMP_BKP11R; // TAMP backup 11 register
    volatile uint32_t TAMP_BKP12R; // TAMP backup 12 register
    volatile uint32_t TAMP_BKP13R; // TAMP backup 13 register
    volatile uint32_t TAMP_BKP14R; // TAMP backup 14 register
    volatile uint32_t TAMP_BKP15R; // TAMP backup 15 register
    volatile uint32_t TAMP_BKP16R; // TAMP backup 16 register
    volatile uint32_t TAMP_BKP17R; // TAMP backup 17 register
    volatile uint32_t TAMP_BKP18R; // TAMP backup 18 register
    volatile uint32_t TAMP_BKP19R; // TAMP backup 19 register
    volatile uint32_t TAMP_BKP20R; // TAMP backup 20 register
    volatile uint32_t TAMP_BKP21R; // TAMP backup 21 register
    volatile uint32_t TAMP_BKP22R; // TAMP backup 22 register
    volatile uint32_t TAMP_BKP23R; // TAMP backup 23 register
    volatile uint32_t TAMP_BKP24R; // TAMP backup 24 register
    volatile uint32_t TAMP_BKP25R; // TAMP backup 25 register
    volatile uint32_t TAMP_BKP26R; // TAMP backup 26 register
    volatile uint32_t TAMP_BKP27R; // TAMP backup 27 register
    volatile uint32_t TAMP_BKP28R; // TAMP backup 28 register
    volatile uint32_t TAMP_BKP29R; // TAMP backup 29 register
    volatile uint32_t TAMP_BKP30R; // TAMP backup 30 register
    volatile uint32_t TAMP_BKP31R; // TAMP backup 31 register

    static constexpr uint32_t TAMP_CR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t TAMP_CR1_TAMP1E = 0x1; // Tamper detection on TAMP_IN1 enable
    static constexpr uint32_t TAMP_CR1_TAMP2E = 0x2; // Tamper detection on TAMP_IN2 enable
    static constexpr uint32_t TAMP_CR1_TAMP3E = 0x4; // Tamper detection on TAMP_IN3 enable
    static constexpr uint32_t TAMP_CR1_TAMP4E = 0x8; // Tamper detection on TAMP_IN4 enable
    static constexpr uint32_t TAMP_CR1_TAMP5E = 0x10; // Tamper detection on TAMP_IN5 enable
    static constexpr uint32_t TAMP_CR1_TAMP6E = 0x20; // Tamper detection on TAMP_IN6 enable
    static constexpr uint32_t TAMP_CR1_TAMP7E = 0x40; // Tamper detection on TAMP_IN7 enable
    static constexpr uint32_t TAMP_CR1_TAMP8E = 0x80; // Tamper detection on TAMP_IN8 enable
    static constexpr uint32_t TAMP_CR1_ITAMP1E = 0x10000; // Internal tamper 1 enable
    static constexpr uint32_t TAMP_CR1_ITAMP2E = 0x20000; // Internal tamper 2 enable
    static constexpr uint32_t TAMP_CR1_ITAMP3E = 0x40000; // Internal tamper 3 enable
    static constexpr uint32_t TAMP_CR1_ITAMP5E = 0x100000; // Internal tamper 5 enable
    static constexpr uint32_t TAMP_CR1_ITAMP6E = 0x200000; // Internal tamper 6 enable
    static constexpr uint32_t TAMP_CR1_ITAMP7E = 0x400000; // Internal tamper 7 enable
    static constexpr uint32_t TAMP_CR1_ITAMP8E = 0x800000; // Internal tamper 8 enable
    static constexpr uint32_t TAMP_CR1_ITAMP9E = 0x1000000; // Internal tamper 9 enable
    static constexpr uint32_t TAMP_CR1_ITAMP11E = 0x4000000; // Internal tamper 11 enable
    static constexpr uint32_t TAMP_CR1_ITAMP12E = 0x8000000; // Internal tamper 12 enable
    static constexpr uint32_t TAMP_CR1_ITAMP13E = 0x10000000; // Internal tamper 13 enable

    static constexpr uint32_t TAMP_CR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t TAMP_CR2_TAMP1NOER = 0x1; // Tamper 1 no erase
    static constexpr uint32_t TAMP_CR2_TAMP2NOER = 0x2; // Tamper 2 no erase
    static constexpr uint32_t TAMP_CR2_TAMP3NOER = 0x4; // Tamper 3 no erase
    static constexpr uint32_t TAMP_CR2_TAMP4NOER = 0x8; // Tamper 4 no erase
    static constexpr uint32_t TAMP_CR2_TAMP5NOER = 0x10; // Tamper 5 no erase
    static constexpr uint32_t TAMP_CR2_TAMP6NOER = 0x20; // Tamper 6 no erase
    static constexpr uint32_t TAMP_CR2_TAMP7NOER = 0x40; // Tamper 7 no erase
    static constexpr uint32_t TAMP_CR2_TAMP8NOER = 0x80; // Tamper 8 no erase
    static constexpr uint32_t TAMP_CR2_TAMP1MSK = 0x10000; // Tamper 1 mask The tamper 1 interrupt must not be enabled when TAMP1MSK is set.
    static constexpr uint32_t TAMP_CR2_TAMP2MSK = 0x20000; // Tamper 2 mask The tamper 2 interrupt must not be enabled when TAMP2MSK is set.
    static constexpr uint32_t TAMP_CR2_TAMP3MSK = 0x40000; // Tamper 3 mask The tamper 3 interrupt must not be enabled when TAMP3MSK is set.
    static constexpr uint32_t TAMP_CR2_BKBLOCK = 0x400000; // Backup registers and device secrets access blocked
    static constexpr uint32_t TAMP_CR2_BKERASE = 0x800000; // Backup registers and device secrets erase Writing &#39;1 to this bit reset the backup registers and device secrets(1). Writing 0 has no effect. This bit is always read as 0.
    static constexpr uint32_t TAMP_CR2_TAMP1TRG = 0x1000000; // Active level for tamper 1 input If TAMPFLT=00 Tamper 1 input rising edge and high level triggers a tamper detection event. If TAMPFLT=00 Tamper 1 input falling edge and low level triggers a tamper detection event.
    static constexpr uint32_t TAMP_CR2_TAMP2TRG = 0x2000000; // Active level for tamper 2 input If TAMPFLT = 00 Tamper 2 input rising edge and high level triggers a tamper detection event. If TAMPFLT=00 Tamper 2 input falling edge and low level triggers a tamper detection event.
    static constexpr uint32_t TAMP_CR2_TAMP3TRG = 0x4000000; // Active level for tamper 3 input If TAMPFLT=00 Tamper 3 input rising edge and high level triggers a tamper detection event. If TAMPFLT=00 Tamper 3 input falling edge and low level triggers a tamper detection event.
    static constexpr uint32_t TAMP_CR2_TAMP4TRG = 0x8000000; // Active level for tamper 4 input (active mode disabled) If TAMPFLT=00 Tamper 4 input rising edge and high level triggers a tamper detection event. If TAMPFLT=00 Tamper 4 input falling edge and low level triggers a tamper detection event.
    static constexpr uint32_t TAMP_CR2_TAMP5TRG = 0x10000000; // Active level for tamper 5 input (active mode disabled) If TAMPFLT=00 Tamper 5 input rising edge and high level triggers a tamper detection event. If TAMPFLT=00 Tamper 5 input falling edge and low level triggers a tamper detection event.
    static constexpr uint32_t TAMP_CR2_TAMP6TRG = 0x20000000; // Active level for tamper 6 input (active mode disabled) If TAMPFLT=00 Tamper 6 input rising edge and high level triggers a tamper detection event. If TAMPFLT=00 Tamper 6 input falling edge and low level triggers a tamper detection event.
    static constexpr uint32_t TAMP_CR2_TAMP7TRG = 0x40000000; // Active level for tamper 7 input (active mode disabled) If TAMPFLT=00 Tamper 7 input rising edge and high level triggers a tamper detection event. If TAMPFLT=00 Tamper 7 input falling edge and low level triggers a tamper detection event.
    static constexpr uint32_t TAMP_CR2_TAMP8TRG = 0x80000000; // Active level for tamper 8 input (active mode disabled) If TAMPFLT=00 Tamper 8 input rising edge and high level triggers a tamper detection event. If TAMPFLT =00 Tamper 8 input falling edge and low level triggers a tamper detection event.

    static constexpr uint32_t TAMP_CR3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t TAMP_CR3_ITAMP1NOER = 0x1; // Internal Tamper 1 no erase
    static constexpr uint32_t TAMP_CR3_ITAMP2NOER = 0x2; // Internal Tamper 2 no erase
    static constexpr uint32_t TAMP_CR3_ITAMP3NOER = 0x4; // Internal Tamper 3 no erase
    static constexpr uint32_t TAMP_CR3_ITAMP5NOER = 0x10; // Internal Tamper 5 no erase
    static constexpr uint32_t TAMP_CR3_ITAMP6NOER = 0x20; // Internal Tamper 6 no erase
    static constexpr uint32_t TAMP_CR3_ITAMP7NOER = 0x40; // Internal Tamper 7 no erase
    static constexpr uint32_t TAMP_CR3_ITAMP8NOER = 0x80; // Internal Tamper 8 no erase
    static constexpr uint32_t TAMP_CR3_ITAMP9NOER = 0x100; // Internal Tamper 9 no erase
    static constexpr uint32_t TAMP_CR3_ITAMP11NOER = 0x400; // Internal Tamper 11 no erase
    static constexpr uint32_t TAMP_CR3_ITAMP12NOER = 0x800; // Internal Tamper 12 no erase
    static constexpr uint32_t TAMP_CR3_ITAMP13NOER = 0x1000; // Internal Tamper 13 no erase

    static constexpr uint32_t TAMP_FLTCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> TAMP_FLTCR_TAMPFREQ; // Tamper sampling frequency Determines the frequency at which each of the TAMP_INx inputs are sampled.
    typedef bit_field_t<3, 0x3> TAMP_FLTCR_TAMPFLT; // TAMP_INx filter count These bits determines the number of consecutive samples at the specified level (TAMP*TRG) needed to activate a tamper event. TAMPFLT is valid for each of the TAMP_INx inputs.
    typedef bit_field_t<5, 0x3> TAMP_FLTCR_TAMPPRCH; // TAMP_INx precharge duration These bit determines the duration of time during which the pull-up/is activated before each sample. TAMPPRCH is valid for each of the TAMP_INx inputs.
    static constexpr uint32_t TAMP_FLTCR_TAMPPUDIS = 0x80; // TAMP_INx pull-up disable This bit determines if each of the TAMPx pins are precharged before each sample.

    static constexpr uint32_t TAMP_ATCR1_RESET_VALUE = 0x70000; // Reset value
    static constexpr uint32_t TAMP_ATCR1_TAMP1AM = 0x1; // Tamper 1 active mode
    static constexpr uint32_t TAMP_ATCR1_TAMP2AM = 0x2; // Tamper 2 active mode
    static constexpr uint32_t TAMP_ATCR1_TAMP3AM = 0x4; // Tamper 3 active mode
    static constexpr uint32_t TAMP_ATCR1_TAMP4AM = 0x8; // Tamper 4 active mode
    static constexpr uint32_t TAMP_ATCR1_TAMP5AM = 0x10; // Tamper 5 active mode
    static constexpr uint32_t TAMP_ATCR1_TAMP6AM = 0x20; // Tamper 6 active mode
    static constexpr uint32_t TAMP_ATCR1_TAMP7AM = 0x40; // Tamper 7 active mode
    static constexpr uint32_t TAMP_ATCR1_TAMP8AM = 0x80; // Tamper 8 active mode
    typedef bit_field_t<8, 0x3> TAMP_ATCR1_ATOSEL1; // Active tamper shared output 1 selection The selected output must be available in the package pinout
    typedef bit_field_t<10, 0x3> TAMP_ATCR1_ATOSEL2; // Active tamper shared output 2 selection The selected output must be available in the package pinout
    typedef bit_field_t<12, 0x3> TAMP_ATCR1_ATOSEL3; // Active tamper shared output 3 selection The selected output must be available in the package pinout
    typedef bit_field_t<14, 0x3> TAMP_ATCR1_ATOSEL4; // Active tamper shared output 4 selection The selected output must be available in the package pinout.
    typedef bit_field_t<16, 0x7> TAMP_ATCR1_ATCKSEL; // Active tamper RTC asynchronous prescaler clock selection These bits selects the RTC asynchronous prescaler stage output.The selected clock is CK_ATPRE. fCK_ATPRE = fRTCCLK / 2ATCKSEL when (PREDIV_A+1) = 128. ... These bits can be written only when all active tampers are disabled. The write protection remains for up to 1.5 ck_atpre cycles after all the active tampers are disable.
    typedef bit_field_t<24, 0x7> TAMP_ATCR1_ATPER; // Active tamper output change period The tamper output is changed every CK_ATPER = (2ATPER x CK_ATPRE) cycles. Refer to .
    static constexpr uint32_t TAMP_ATCR1_ATOSHARE = 0x40000000; // Active tamper output sharing TAMP_IN1 is compared with TAMPOUTSEL1 TAMP_IN2 is compared with TAMPOUTSEL2 TAMP_IN3 is compared with TAMPOUTSEL3 TAMP_IN4 is compared with TAMPOUTSEL4 TAMP_IN5 is compared with TAMPOUTSEL5 TAMP_IN6 is compared with TAMPOUTSEL6 TAMP_IN7 is compared with TAMPOUTSEL7 TAMP_IN8 is compared with TAMPOUTSEL8
    static constexpr uint32_t TAMP_ATCR1_FLTEN = 0x80000000; // Active tamper filter enable

    static constexpr uint32_t TAMP_ATSEEDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> TAMP_ATSEEDR_SEED; // Pseudo-random generator seed value This register must be written four times with 32-bit values to provide the 128-bit seed to the PRNG. Writing to this register automatically sends the seed value to the PRNG.

    static constexpr uint32_t TAMP_ATOR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> TAMP_ATOR_PRNG; // Pseudo-random generator value This field provides the values of the PRNG output. Because of potential inconsistencies due to synchronization delays, PRNG must be read at least twice. The read value is correct if it is equal to previous read value. This field can only be read when the APB is in secure mode.
    static constexpr uint32_t TAMP_ATOR_SEEDF = 0x4000; // Seed running flag This flag is set by hardware when a new seed is written in the TAMP_ATSEEDR. It is cleared by hardware when the PRNG has absorbed this new seed, and by system reset. The TAMP APB cock must not be switched off as long as SEEDF is set.
    static constexpr uint32_t TAMP_ATOR_INITS = 0x8000; // Active tamper initialization status This flag is set by hardware when the PRNG has absorbed the first 128-bit seed, meaning that the enabled active tampers are functional. This flag is cleared when the active tampers are disabled.

    static constexpr uint32_t TAMP_ATCR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0x7> TAMP_ATCR2_ATOSEL1; // Active tamper shared output 1 selection The selected output must be available in the package pinout. Bits 9:8 are the mirror of ATOSEL1[1:0] in the TAMP_ATCR1, and so can also be read or written through TAMP_ATCR1.
    typedef bit_field_t<11, 0x7> TAMP_ATCR2_ATOSEL2; // Active tamper shared output 2 selection The selected output must be available in the package pinout. Bits 12:11 are the mirror of ATOSEL2[1:0] in the TAMP_ATCR1, and so can also be read or written through TAMP_ATCR1.
    typedef bit_field_t<14, 0x7> TAMP_ATCR2_ATOSEL3; // Active tamper shared output 3 selection The selected output must be available in the package pinout. Bits 15:14 are the mirror of ATOSEL3[1:0] in the TAMP_ATCR1, and so can also be read or written through TAMP_ATCR1.
    typedef bit_field_t<17, 0x7> TAMP_ATCR2_ATOSEL4; // Active tamper shared output 4 selection The selected output must be available in the package pinout. Bits 18:17 are the mirror of ATOSEL2[1:0] in the TAMP_ATCR1, and so can also be read or written through TAMP_ATCR1.
    typedef bit_field_t<20, 0x7> TAMP_ATCR2_ATOSEL5; // Active tamper shared output 5 selection The selected output must be available in the package pinout.
    typedef bit_field_t<23, 0x7> TAMP_ATCR2_ATOSEL6; // Active tamper shared output 6 selection The selected output must be available in the package pinout.
    typedef bit_field_t<26, 0x7> TAMP_ATCR2_ATOSEL7; // Active tamper shared output 7 selection The selected output must be available in the package pinout.
    typedef bit_field_t<29, 0x7> TAMP_ATCR2_ATOSEL8; // Active tamper shared output 8 selection The selected output must be available in the package pinout.

    static constexpr uint32_t TAMP_SECCFGR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> TAMP_SECCFGR_BKPRWSEC; // Backup registers read/write protection offset Protection zone 1 is defined for backup registers from TAMP_BKP0R to TAMP_BKPxR (x = BKPRWSEC-1, from 0 to 128). if TZEN=1, these backup registers can be read and written only with secure access. If TZEN=0: the protection zone 1 can be read and written with non-secure access. If BKPRWSEC = 0: there is no protection zone 1. If BKPRWPRIV is set, BKPRWSEC[7:0] can be written only in privileged mode.
    static constexpr uint32_t TAMP_SECCFGR_CNT1SEC = 0x8000; // Monotonic counter 1 secure protection
    typedef bit_field_t<16, 0xff> TAMP_SECCFGR_BKPWSEC; // Backup registers write protection offset Protection zone 2 is defined for backup registers from TAMP_BKPyR (y = BKPRWSEC, from 0 to 128) to TAMP_BKPzR (z = BKPWSEC-1, from 0 to 128, BKPWSECBKPRWSEC): if TZEN=1, these backup registers can be written only with secure access. They can be read with secure or non-secure access. Protection zone 3 defined for backup registers from TAMP_BKPtR (t = BKPWSEC, from 0 to 127). They can be read or written with secure or non-secure access. If TZEN=0: the protection zone 2 can be read and written with non-secure access. If BKPWSEC = 0 or if BKPWSECBKPRWSEC: there is no protection zone 2. If BKPWPRIV is set, BKPRWSEC[7:0] can be written only in privileged mode.
    static constexpr uint32_t TAMP_SECCFGR_BHKLOCK = 0x40000000; // Boot hardware key lock This bit can be read and can only be written to 1 by software. It is cleared by hardware together with the backup registers following a tamper detection event or when the readout protection (RDP) is disabled.
    static constexpr uint32_t TAMP_SECCFGR_TAMPSEC = 0x80000000; // Tamper protection (excluding monotonic counters and backup registers) Note: Refer to for details on the read protection.

    static constexpr uint32_t TAMP_PRIVCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t TAMP_PRIVCR_CNT1PRIV = 0x8000; // Monotonic counter 1 privilege protection
    static constexpr uint32_t TAMP_PRIVCR_BKPRWPRIV = 0x20000000; // Backup registers zone 1 privilege protection
    static constexpr uint32_t TAMP_PRIVCR_BKPWPRIV = 0x40000000; // Backup registers zone 2 privilege protection
    static constexpr uint32_t TAMP_PRIVCR_TAMPPRIV = 0x80000000; // Tamper privilege protection (excluding backup registers) Note: Refer to for details on the read protection.


    static constexpr uint32_t TAMP_IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t TAMP_IER_TAMP1IE = 0x1; // Tamper 1 interrupt enable
    static constexpr uint32_t TAMP_IER_TAMP2IE = 0x2; // Tamper 2 interrupt enable
    static constexpr uint32_t TAMP_IER_TAMP3IE = 0x4; // Tamper 3 interrupt enable
    static constexpr uint32_t TAMP_IER_TAMP4IE = 0x8; // Tamper 4 interrupt enable
    static constexpr uint32_t TAMP_IER_TAMP5IE = 0x10; // Tamper 5 interrupt enable
    static constexpr uint32_t TAMP_IER_TAMP6IE = 0x20; // Tamper 6 interrupt enable
    static constexpr uint32_t TAMP_IER_TAMP7IE = 0x40; // Tamper 7interrupt enable
    static constexpr uint32_t TAMP_IER_TAMP8IE = 0x80; // Tamper 8 interrupt enable
    static constexpr uint32_t TAMP_IER_ITAMP1IE = 0x10000; // Internal tamper 1 interrupt enable
    static constexpr uint32_t TAMP_IER_ITAMP2IE = 0x20000; // Internal tamper 2 interrupt enable
    static constexpr uint32_t TAMP_IER_ITAMP3IE = 0x40000; // Internal tamper 3 interrupt enable
    static constexpr uint32_t TAMP_IER_ITAMP5IE = 0x100000; // Internal tamper 5 interrupt enable
    static constexpr uint32_t TAMP_IER_ITAMP6IE = 0x200000; // Internal tamper 6 interrupt enable
    static constexpr uint32_t TAMP_IER_ITAMP7IE = 0x400000; // Internal tamper 7 interrupt enable
    static constexpr uint32_t TAMP_IER_ITAMP8IE = 0x800000; // Internal tamper 8 interrupt enable
    static constexpr uint32_t TAMP_IER_ITAMP9IE = 0x1000000; // Internal tamper 9 interrupt enable
    static constexpr uint32_t TAMP_IER_ITAMP11IE = 0x4000000; // Internal tamper 11 interrupt enable
    static constexpr uint32_t TAMP_IER_ITAMP12IE = 0x8000000; // Internal tamper 12 interrupt enable
    static constexpr uint32_t TAMP_IER_ITAMP13IE = 0x10000000; // Internal tamper 13 interrupt enable

    static constexpr uint32_t TAMP_SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t TAMP_SR_TAMP1F = 0x1; // TAMP1 detection flag This flag is set by hardware when a tamper detection event is detected on the TAMP1 input.
    static constexpr uint32_t TAMP_SR_TAMP2F = 0x2; // TAMP2 detection flag This flag is set by hardware when a tamper detection event is detected on the TAMP2 input.
    static constexpr uint32_t TAMP_SR_TAMP3F = 0x4; // TAMP3 detection flag This flag is set by hardware when a tamper detection event is detected on the TAMP3 input.
    static constexpr uint32_t TAMP_SR_TAMP4F = 0x8; // TAMP4 detection flag This flag is set by hardware when a tamper detection event is detected on the TAMP4 input.
    static constexpr uint32_t TAMP_SR_TAMP5F = 0x10; // TAMP5 detection flag This flag is set by hardware when a tamper detection event is detected on the TAMP5 input.
    static constexpr uint32_t TAMP_SR_TAMP6F = 0x20; // TAMP6 detection flag This flag is set by hardware when a tamper detection event is detected on the TAMP6 input.
    static constexpr uint32_t TAMP_SR_TAMP7F = 0x40; // TAMP7 detection flag This flag is set by hardware when a tamper detection event is detected on the TAMP7 input.
    static constexpr uint32_t TAMP_SR_TAMP8F = 0x80; // TAMP8 detection flag This flag is set by hardware when a tamper detection event is detected on the TAMP8 input
    static constexpr uint32_t TAMP_SR_ITAMP1F = 0x10000; // Internal tamper 1 flag This flag is set by hardware when a tamper detection event is detected on the internal tamper 1.
    static constexpr uint32_t TAMP_SR_ITAMP2F = 0x20000; // Internal tamper 2 flag This flag is set by hardware when a tamper detection event is detected on the internal tamper 2.
    static constexpr uint32_t TAMP_SR_ITAMP3F = 0x40000; // Internal tamper 3 flag This flag is set by hardware when a tamper detection event is detected on the internal tamper 3.
    static constexpr uint32_t TAMP_SR_ITAMP5F = 0x100000; // Internal tamper 5 flag This flag is set by hardware when a tamper detection event is detected on the internal tamper 5.
    static constexpr uint32_t TAMP_SR_ITAMP6F = 0x200000; // Internal tamper 6 flag This flag is set by hardware when a tamper detection event is detected on the internal tamper 6.
    static constexpr uint32_t TAMP_SR_ITAMP7F = 0x400000; // Internal tamper 7 flag This flag is set by hardware when a tamper detection event is detected on the internal tamper 7.
    static constexpr uint32_t TAMP_SR_ITAMP8F = 0x800000; // Internal tamper 8 flag This flag is set by hardware when a tamper detection event is detected on the internal tamper 8.
    static constexpr uint32_t TAMP_SR_ITAMP9F = 0x1000000; // Internal tamper 9 flag This flag is set by hardware when a tamper detection event is detected on the internal tamper 9.
    static constexpr uint32_t TAMP_SR_ITAMP11F = 0x4000000; // Internal tamper 11 flag This flag is set by hardware when a tamper detection event is detected on the internal tamper 11.
    static constexpr uint32_t TAMP_SR_ITAMP12F = 0x8000000; // Internal tamper 12 flag This flag is set by hardware when a tamper detection event is detected on the internal tamper 12.
    static constexpr uint32_t TAMP_SR_ITAMP13F = 0x10000000; // Internal tamper 13 flag This flag is set by hardware when a tamper detection event is detected on the internal tamper 13.

    static constexpr uint32_t TAMP_MISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t TAMP_MISR_TAMP1MF = 0x1; // TAMP1 non-secure interrupt masked flag This flag is set by hardware when the tamper 1 non-secure interrupt is raised.
    static constexpr uint32_t TAMP_MISR_TAMP2MF = 0x2; // TAMP2 non-secure interrupt masked flag This flag is set by hardware when the tamper 2 non-secure interrupt is raised.
    static constexpr uint32_t TAMP_MISR_TAMP3MF = 0x4; // TAMP3 non-secure interrupt masked flag This flag is set by hardware when the tamper 3 non-secure interrupt is raised.
    static constexpr uint32_t TAMP_MISR_TAMP4MF = 0x8; // TAMP4 non-secure interrupt masked flag This flag is set by hardware when the tamper 4 non-secure interrupt is raised.
    static constexpr uint32_t TAMP_MISR_TAMP5MF = 0x10; // TAMP5 non-secure interrupt masked flag This flag is set by hardware when the tamper 5 non-secure interrupt is raised.
    static constexpr uint32_t TAMP_MISR_TAMP6MF = 0x20; // TAMP6 non-secure interrupt masked flag This flag is set by hardware when the tamper 6 non-secure interrupt is raised.
    static constexpr uint32_t TAMP_MISR_TAMP7MF = 0x40; // TAMP7 non-secure interrupt masked flag This flag is set by hardware when the tamper 7 non-secure interrupt is raised.
    static constexpr uint32_t TAMP_MISR_TAMP8MF = 0x80; // TAMP8 non-secure interrupt masked flag This flag is set by hardware when the tamper 8 non-secure interrupt is raised.
    static constexpr uint32_t TAMP_MISR_ITAMP1MF = 0x10000; // Internal tamper 1 non-secure interrupt masked flag This flag is set by hardware when the internal tamper 1 non-secure interrupt is raised.
    static constexpr uint32_t TAMP_MISR_ITAMP2MF = 0x20000; // Internal tamper 2 non-secure interrupt masked flag This flag is set by hardware when the internal tamper 2 non-secure interrupt is raised.
    static constexpr uint32_t TAMP_MISR_ITAMP3MF = 0x40000; // Internal tamper 3 non-secure interrupt masked flag This flag is set by hardware when the internal tamper 3 non-secure interrupt is raised.
    static constexpr uint32_t TAMP_MISR_ITAMP5MF = 0x100000; // Internal tamper 5 non-secure interrupt masked flag This flag is set by hardware when the internal tamper 5 non-secure interrupt is raised.
    static constexpr uint32_t TAMP_MISR_ITAMP6MF = 0x200000; // Internal tamper 6 non-secure interrupt masked flag This flag is set by hardware when the internal tamper 6 non-secure interrupt is raised.
    static constexpr uint32_t TAMP_MISR_ITAMP7MF = 0x400000; // VCORE monitoring tamper non-secure interrupt masked flag This flag is set by hardware when the internal tamper 7 non-secure interrupt is raised.
    static constexpr uint32_t TAMP_MISR_ITAMP8MF = 0x800000; // Internal tamper 8 non-secure interrupt masked flag This flag is set by hardware when the internal tamper 8 non-secure interrupt is raised.
    static constexpr uint32_t TAMP_MISR_ITAMP9MF = 0x1000000; // internal tamper 9 non-secure interrupt masked flag This flag is set by hardware when the internal tamper 9 non-secure interrupt is raised.
    static constexpr uint32_t TAMP_MISR_ITAMP11MF = 0x4000000; // internal tamper 11 non-secure interrupt masked flag This flag is set by hardware when the internal tamper 11 non-secure interrupt is raised.
    static constexpr uint32_t TAMP_MISR_ITAMP12MF = 0x8000000; // internal tamper 12 non-secure interrupt masked flag This flag is set by hardware when the internal tamper 12 non-secure interrupt is raised.
    static constexpr uint32_t TAMP_MISR_ITAMP13MF = 0x10000000; // internal tamper 13 non-secure interrupt masked flag This flag is set by hardware when the internal tamper 13 non-secure interrupt is raised.

    static constexpr uint32_t TAMP_SMISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t TAMP_SMISR_TAMP1MF = 0x1; // TAMP1 secure interrupt masked flag This flag is set by hardware when the tamper 1 secure interrupt is raised.
    static constexpr uint32_t TAMP_SMISR_TAMP2MF = 0x2; // TAMP2 secure interrupt masked flag This flag is set by hardware when the tamper 2 secure interrupt is raised.
    static constexpr uint32_t TAMP_SMISR_TAMP3MF = 0x4; // TAMP3 secure interrupt masked flag This flag is set by hardware when the tamper 3 secure interrupt is raised.
    static constexpr uint32_t TAMP_SMISR_TAMP4MF = 0x8; // TAMP4 secure interrupt masked flag This flag is set by hardware when the tamper 4 secure interrupt is raised.
    static constexpr uint32_t TAMP_SMISR_TAMP5MF = 0x10; // TAMP5 secure interrupt masked flag This flag is set by hardware when the tamper 5 secure interrupt is raised.
    static constexpr uint32_t TAMP_SMISR_TAMP6MF = 0x20; // TAMP6 secure interrupt masked flag This flag is set by hardware when the tamper 6 secure interrupt is raised.
    static constexpr uint32_t TAMP_SMISR_TAMP7MF = 0x40; // TAMP7 secure interrupt masked flag This flag is set by hardware when the tamper 7 secure interrupt is raised.
    static constexpr uint32_t TAMP_SMISR_TAMP8MF = 0x80; // TAMP8 secure interrupt masked flag This flag is set by hardware when the tamper 8 secure interrupt is raised.
    static constexpr uint32_t TAMP_SMISR_ITAMP1MF = 0x10000; // Internal tamper 1 secure interrupt masked flag This flag is set by hardware when the internal tamper 1 secure interrupt is raised.
    static constexpr uint32_t TAMP_SMISR_ITAMP2MF = 0x20000; // Internal tamper 2 secure interrupt masked flag This flag is set by hardware when the internal tamper 2 secure interrupt is raised.
    static constexpr uint32_t TAMP_SMISR_ITAMP3MF = 0x40000; // Internal tamper 3 secure interrupt masked flag This flag is set by hardware when the internal tamper 3 secure interrupt is raised.
    static constexpr uint32_t TAMP_SMISR_ITAMP5MF = 0x100000; // Internal tamper 5 secure interrupt masked flag This flag is set by hardware when the internal tamper 5 secure interrupt is raised.
    static constexpr uint32_t TAMP_SMISR_ITAMP6MF = 0x200000; // Internal tamper 6 secure interrupt masked flag This flag is set by hardware when the internal tamper 6 secure interrupt is raised.
    static constexpr uint32_t TAMP_SMISR_ITAMP7MF = 0x400000; // VCORE monitoring tamper secure interrupt masked flag This flag is set by hardware when the internal tamper 7 secure interrupt is raised.
    static constexpr uint32_t TAMP_SMISR_ITAMP8MF = 0x800000; // Internal tamper 8 secure interrupt masked flag This flag is set by hardware when the internal tamper 8 secure interrupt is raised.
    static constexpr uint32_t TAMP_SMISR_ITAMP9MF = 0x1000000; // internal tamper 9 secure interrupt masked flag This flag is set by hardware when the internal tamper 9 secure interrupt is raised.
    static constexpr uint32_t TAMP_SMISR_ITAMP11MF = 0x4000000; // internal tamper 11 secure interrupt masked flag This flag is set by hardware when the internal tamper 11 secure interrupt is raised.
    static constexpr uint32_t TAMP_SMISR_ITAMP12MF = 0x8000000; // internal tamper 12 secure interrupt masked flag This flag is set by hardware when the internal tamper 12 secure interrupt is raised.
    static constexpr uint32_t TAMP_SMISR_ITAMP13MF = 0x10000000; // internal tamper 13 secure interrupt masked flag This flag is set by hardware when the internal tamper 13 secure interrupt is raised.

    static constexpr uint32_t TAMP_SCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t TAMP_SCR_CTAMP1F = 0x1; // Clear TAMP1 detection flag Writing 1 in this bit clears the TAMP1F bit in the TAMP_SR register.
    static constexpr uint32_t TAMP_SCR_CTAMP2F = 0x2; // Clear TAMP2 detection flag Writing 1 in this bit clears the TAMP2F bit in the TAMP_SR register.
    static constexpr uint32_t TAMP_SCR_CTAMP3F = 0x4; // Clear TAMP3 detection flag Writing 1 in this bit clears the TAMP3F bit in the TAMP_SR register.
    static constexpr uint32_t TAMP_SCR_CTAMP4F = 0x8; // Clear TAMP4 detection flag Writing 1 in this bit clears the TAMP4F bit in the TAMP_SR register.
    static constexpr uint32_t TAMP_SCR_CTAMP5F = 0x10; // Clear TAMP5 detection flag Writing 1 in this bit clears the TAMP5F bit in the TAMP_SR register.
    static constexpr uint32_t TAMP_SCR_CTAMP6F = 0x20; // Clear TAMP6 detection flag Writing 1 in this bit clears the TAMP6F bit in the TAMP_SR register.
    static constexpr uint32_t TAMP_SCR_CTAMP7F = 0x40; // Clear TAMP7 detection flag Writing 1 in this bit clears the TAMP7F bit in the TAMP_SR register.
    static constexpr uint32_t TAMP_SCR_CTAMP8F = 0x80; // Clear TAMP8 detection flag Writing 1 in this bit clears the TAMP8F bit in the TAMP_SR register.
    static constexpr uint32_t TAMP_SCR_CITAMP1F = 0x10000; // Clear ITAMP1 detection flag Writing 1 in this bit clears the ITAMP1F bit in the TAMP_SR register.
    static constexpr uint32_t TAMP_SCR_CITAMP2F = 0x20000; // Clear ITAMP2 detection flag Writing 1 in this bit clears the ITAMP2F bit in the TAMP_SR register.
    static constexpr uint32_t TAMP_SCR_CITAMP3F = 0x40000; // Clear ITAMP3 detection flag Writing 1 in this bit clears the ITAMP3F bit in the TAMP_SR register.
    static constexpr uint32_t TAMP_SCR_CITAMP5F = 0x100000; // Clear ITAMP5 detection flag Writing 1 in this bit clears the ITAMP5F bit in the TAMP_SR register.
    static constexpr uint32_t TAMP_SCR_CITAMP6F = 0x200000; // Clear ITAMP6 detection flag Writing 1 in this bit clears the ITAMP6F bit in the TAMP_SR register.
    static constexpr uint32_t TAMP_SCR_CITAMP7F = 0x400000; // Clear ITAMP7 detection flag Writing 1 in this bit clears the ITAMP7F bit in the TAMP_SR register.
    static constexpr uint32_t TAMP_SCR_CITAMP8F = 0x800000; // Clear ITAMP8 detection flag Writing 1 in this bit clears the ITAMP8F bit in the TAMP_SR register.
    static constexpr uint32_t TAMP_SCR_CITAMP9F = 0x1000000; // Clear ITAMP9 detection flag Writing 1 in this bit clears the ITAMP9F bit in the TAMP_SR register.
    static constexpr uint32_t TAMP_SCR_CITAMP11F = 0x4000000; // Clear ITAMP11 detection flag Writing 1 in this bit clears the ITAMP11F bit in the TAMP_SR register.
    static constexpr uint32_t TAMP_SCR_CITAMP12F = 0x8000000; // Clear ITAMP12 detection flag Writing 1 in this bit clears the ITAMP12F bit in the TAMP_SR register.
    static constexpr uint32_t TAMP_SCR_CITAMP13F = 0x10000000; // Clear ITAMP13 detection flag Writing 1 in this bit clears the ITAMP13F bit in the TAMP_SR register.

    static constexpr uint32_t TAMP_COUNT1R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> TAMP_COUNT1R_COUNT; // This register is read-only only and is incremented by one when a write access is done to this register. This register cannot roll-over and is frozen when reaching the maximum value.


    static constexpr uint32_t TAMP_ERCFGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t TAMP_ERCFGR_ERCFG0 = 0x1; // Configurable device secrets configuration


    static constexpr uint32_t TAMP_BKP0R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> TAMP_BKP0R_BKP; // The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled.

    static constexpr uint32_t TAMP_BKP1R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> TAMP_BKP1R_BKP; // The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled.

    static constexpr uint32_t TAMP_BKP2R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> TAMP_BKP2R_BKP; // The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled.

    static constexpr uint32_t TAMP_BKP3R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> TAMP_BKP3R_BKP; // The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled.

    static constexpr uint32_t TAMP_BKP4R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> TAMP_BKP4R_BKP; // The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled.

    static constexpr uint32_t TAMP_BKP5R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> TAMP_BKP5R_BKP; // The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled.

    static constexpr uint32_t TAMP_BKP6R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> TAMP_BKP6R_BKP; // The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled.

    static constexpr uint32_t TAMP_BKP7R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> TAMP_BKP7R_BKP; // The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled.

    static constexpr uint32_t TAMP_BKP8R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> TAMP_BKP8R_BKP; // The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled.

    static constexpr uint32_t TAMP_BKP9R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> TAMP_BKP9R_BKP; // The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled.

    static constexpr uint32_t TAMP_BKP10R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> TAMP_BKP10R_BKP; // The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled.

    static constexpr uint32_t TAMP_BKP11R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> TAMP_BKP11R_BKP; // The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled.

    static constexpr uint32_t TAMP_BKP12R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> TAMP_BKP12R_BKP; // The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled.

    static constexpr uint32_t TAMP_BKP13R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> TAMP_BKP13R_BKP; // The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled.

    static constexpr uint32_t TAMP_BKP14R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> TAMP_BKP14R_BKP; // The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled.

    static constexpr uint32_t TAMP_BKP15R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> TAMP_BKP15R_BKP; // The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled.

    static constexpr uint32_t TAMP_BKP16R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> TAMP_BKP16R_BKP; // The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled.

    static constexpr uint32_t TAMP_BKP17R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> TAMP_BKP17R_BKP; // The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled.

    static constexpr uint32_t TAMP_BKP18R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> TAMP_BKP18R_BKP; // The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled.

    static constexpr uint32_t TAMP_BKP19R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> TAMP_BKP19R_BKP; // The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled.

    static constexpr uint32_t TAMP_BKP20R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> TAMP_BKP20R_BKP; // The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled.

    static constexpr uint32_t TAMP_BKP21R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> TAMP_BKP21R_BKP; // The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled.

    static constexpr uint32_t TAMP_BKP22R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> TAMP_BKP22R_BKP; // The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled.

    static constexpr uint32_t TAMP_BKP23R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> TAMP_BKP23R_BKP; // The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled.

    static constexpr uint32_t TAMP_BKP24R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> TAMP_BKP24R_BKP; // The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled.

    static constexpr uint32_t TAMP_BKP25R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> TAMP_BKP25R_BKP; // The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled.

    static constexpr uint32_t TAMP_BKP26R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> TAMP_BKP26R_BKP; // The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled.

    static constexpr uint32_t TAMP_BKP27R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> TAMP_BKP27R_BKP; // The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled.

    static constexpr uint32_t TAMP_BKP28R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> TAMP_BKP28R_BKP; // The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled.

    static constexpr uint32_t TAMP_BKP29R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> TAMP_BKP29R_BKP; // The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled.

    static constexpr uint32_t TAMP_BKP30R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> TAMP_BKP30R_BKP; // The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled.

    static constexpr uint32_t TAMP_BKP31R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> TAMP_BKP31R_BKP; // The application can write or read data to and from these registers. In the default (ERASE) configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled.
};

template<>
struct peripheral_t<STM32U5xx, SEC_TAMP>
{
    static constexpr periph_t P = SEC_TAMP;
    using T = stm32u5xx_tamp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, TAMP>
{
    static constexpr periph_t P = TAMP;
    using T = stm32u5xx_tamp_t;
    static T& V;
};

using sec_tamp_t = peripheral_t<svd, SEC_TAMP>;
using tamp_t = peripheral_t<svd, TAMP>;
