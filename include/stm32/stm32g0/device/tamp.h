#pragma once

////
//
//      STM32G0 TAMP peripherals
//
///

// TAMP: Tamper and backup registers

struct stm32g030_tamp_t
{
    volatile uint32_t CR1; // control register 1
    volatile uint32_t CR2; // control register 2
    reserved_t<0x1> _0x8;
    volatile uint32_t FLTCR; // TAMP filter control register
    reserved_t<0x7> _0x10;
    volatile uint32_t IER; // TAMP interrupt enable register
    volatile uint32_t SR; // TAMP status register
    volatile uint32_t MISR; // TAMP masked interrupt status register
    reserved_t<0x1> _0x38;
    volatile uint32_t SCR; // TAMP status clear register
    reserved_t<0x30> _0x40;
    volatile uint32_t BKP0R; // TAMP backup register
    volatile uint32_t BKP1R; // TAMP backup register
    volatile uint32_t BKP2R; // TAMP backup register
    volatile uint32_t BKP3R; // TAMP backup register
    volatile uint32_t BKP4R; // TAMP backup register

    static constexpr uint32_t CR1_RESET_VALUE = 0xffff0000; // Reset value
    static constexpr uint32_t CR1_TAMP1E = 0x1; // TAMP1E
    static constexpr uint32_t CR1_TAMP2E = 0x2; // TAMP2E
    static constexpr uint32_t CR1_ITAMP1E = 0x10000; // ITAMP1E
    static constexpr uint32_t CR1_ITAMP3E = 0x40000; // ITAMP3E
    static constexpr uint32_t CR1_ITAMP4E = 0x80000; // ITAMP4E
    static constexpr uint32_t CR1_ITAMP5E = 0x100000; // ITAMP5E
    static constexpr uint32_t CR1_ITAMP6E = 0x200000; // ITAMP6E

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR2_TAMP1NOER = 0x1; // TAMP1NOER
    static constexpr uint32_t CR2_TAMP2NOER = 0x2; // TAMP2NOER
    static constexpr uint32_t CR2_TAMP1MSK = 0x10000; // TAMP1MSK
    static constexpr uint32_t CR2_TAMP2MSK = 0x20000; // TAMP2MSK
    static constexpr uint32_t CR2_TAMP1TRG = 0x1000000; // TAMP1TRG
    static constexpr uint32_t CR2_TAMP2TRG = 0x2000000; // TAMP2TRG


    static constexpr uint32_t FLTCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> FLTCR_TAMPFREQ; // TAMPFREQ
    typedef bit_field_t<3, 0x3> FLTCR_TAMPFLT; // TAMPFLT
    typedef bit_field_t<5, 0x3> FLTCR_TAMPPRCH; // TAMPPRCH
    static constexpr uint32_t FLTCR_TAMPPUDIS = 0x80; // TAMPPUDIS


    static constexpr uint32_t IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IER_TAMP1IE = 0x1; // TAMP1IE
    static constexpr uint32_t IER_TAMP2IE = 0x2; // TAMP2IE
    static constexpr uint32_t IER_ITAMP1IE = 0x10000; // ITAMP1IE
    static constexpr uint32_t IER_ITAMP3IE = 0x40000; // ITAMP3IE
    static constexpr uint32_t IER_ITAMP4IE = 0x80000; // ITAMP4IE
    static constexpr uint32_t IER_ITAMP5IE = 0x100000; // ITAMP5IE
    static constexpr uint32_t IER_ITAMP6IE = 0x200000; // ITAMP6IE

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_TAMP1F = 0x1; // TAMP1F
    static constexpr uint32_t SR_TAMP2F = 0x2; // TAMP2F
    static constexpr uint32_t SR_ITAMP1F = 0x10000; // ITAMP1F
    static constexpr uint32_t SR_ITAMP3F = 0x40000; // ITAMP3F
    static constexpr uint32_t SR_ITAMP4F = 0x80000; // ITAMP4F
    static constexpr uint32_t SR_ITAMP5F = 0x100000; // ITAMP5F
    static constexpr uint32_t SR_ITAMP6F = 0x200000; // ITAMP6F
    static constexpr uint32_t SR_ITAMP7F = 0x400000; // ITAMP7F

    static constexpr uint32_t MISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MISR_TAMP1MF = 0x1; // TAMP1MF:
    static constexpr uint32_t MISR_TAMP2MF = 0x2; // TAMP2MF
    static constexpr uint32_t MISR_ITAMP1MF = 0x10000; // ITAMP1MF
    static constexpr uint32_t MISR_ITAMP3MF = 0x40000; // ITAMP3MF
    static constexpr uint32_t MISR_ITAMP4MF = 0x80000; // ITAMP4MF
    static constexpr uint32_t MISR_ITAMP5MF = 0x100000; // ITAMP5MF
    static constexpr uint32_t MISR_ITAMP6MF = 0x200000; // ITAMP6MF


    static constexpr uint32_t SCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SCR_CTAMP1F = 0x1; // CTAMP1F
    static constexpr uint32_t SCR_CTAMP2F = 0x2; // CTAMP2F
    static constexpr uint32_t SCR_CITAMP1F = 0x10000; // CITAMP1F
    static constexpr uint32_t SCR_CITAMP3F = 0x40000; // CITAMP3F
    static constexpr uint32_t SCR_CITAMP4F = 0x80000; // CITAMP4F
    static constexpr uint32_t SCR_CITAMP5F = 0x100000; // CITAMP5F
    static constexpr uint32_t SCR_CITAMP6F = 0x200000; // CITAMP6F
    static constexpr uint32_t SCR_CITAMP7F = 0x400000; // CITAMP7F


    static constexpr uint32_t BKP0R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP0R_BKP; // BKP

    static constexpr uint32_t BKP1R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP1R_BKP; // BKP

    static constexpr uint32_t BKP2R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP2R_BKP; // BKP

    static constexpr uint32_t BKP3R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP3R_BKP; // BKP

    static constexpr uint32_t BKP4R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP4R_BKP; // BKP
};

// TAMP: Tamper and backup registers

struct stm32g070_tamp_t
{
    volatile uint32_t CR1; // control register 1
    volatile uint32_t CR2; // control register 2
    reserved_t<0x1> _0x8;
    volatile uint32_t FLTCR; // TAMP filter control register
    reserved_t<0x7> _0x10;
    volatile uint32_t IER; // TAMP interrupt enable register
    volatile uint32_t SR; // TAMP status register
    volatile uint32_t MISR; // TAMP masked interrupt status register
    reserved_t<0x1> _0x38;
    volatile uint32_t SCR; // TAMP status clear register
    reserved_t<0x30> _0x40;
    volatile uint32_t BKP0R; // TAMP backup register
    volatile uint32_t BKP1R; // TAMP backup register
    volatile uint32_t BKP2R; // TAMP backup register
    volatile uint32_t BKP3R; // TAMP backup register
    volatile uint32_t BKP4R; // TAMP backup register
    reserved_t<0xb6> _0x114;
    volatile uint32_t HWCFGR2; // TAMP hardware configuration register 2
    volatile uint32_t HWCFGR1; // TAMP hardware configuration register 1
    volatile uint32_t VERR; // EXTI IP Version register
    volatile uint32_t IPIDR; // EXTI Identification register
    volatile uint32_t SIDR; // EXTI Size ID register

    static constexpr uint32_t CR1_RESET_VALUE = 0xffff0000; // Reset value
    static constexpr uint32_t CR1_TAMP1E = 0x1; // TAMP1E
    static constexpr uint32_t CR1_TAMP2E = 0x2; // TAMP2E
    static constexpr uint32_t CR1_ITAMP1E = 0x10000; // ITAMP1E
    static constexpr uint32_t CR1_ITAMP3E = 0x40000; // ITAMP3E
    static constexpr uint32_t CR1_ITAMP4E = 0x80000; // ITAMP4E
    static constexpr uint32_t CR1_ITAMP5E = 0x100000; // ITAMP5E
    static constexpr uint32_t CR1_ITAMP6E = 0x200000; // ITAMP6E

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR2_TAMP1NOER = 0x1; // TAMP1NOER
    static constexpr uint32_t CR2_TAMP2NOER = 0x2; // TAMP2NOER
    static constexpr uint32_t CR2_TAMP1MSK = 0x10000; // TAMP1MSK
    static constexpr uint32_t CR2_TAMP2MSK = 0x20000; // TAMP2MSK
    static constexpr uint32_t CR2_TAMP1TRG = 0x1000000; // TAMP1TRG
    static constexpr uint32_t CR2_TAMP2TRG = 0x2000000; // TAMP2TRG


    static constexpr uint32_t FLTCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> FLTCR_TAMPFREQ; // TAMPFREQ
    typedef bit_field_t<3, 0x3> FLTCR_TAMPFLT; // TAMPFLT
    typedef bit_field_t<5, 0x3> FLTCR_TAMPPRCH; // TAMPPRCH
    static constexpr uint32_t FLTCR_TAMPPUDIS = 0x80; // TAMPPUDIS


    static constexpr uint32_t IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IER_TAMP1IE = 0x1; // TAMP1IE
    static constexpr uint32_t IER_TAMP2IE = 0x2; // TAMP2IE
    static constexpr uint32_t IER_ITAMP1IE = 0x10000; // ITAMP1IE
    static constexpr uint32_t IER_ITAMP3IE = 0x40000; // ITAMP3IE
    static constexpr uint32_t IER_ITAMP4IE = 0x80000; // ITAMP4IE
    static constexpr uint32_t IER_ITAMP5IE = 0x100000; // ITAMP5IE
    static constexpr uint32_t IER_ITAMP6IE = 0x200000; // ITAMP6IE

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_TAMP1F = 0x1; // TAMP1F
    static constexpr uint32_t SR_TAMP2F = 0x2; // TAMP2F
    static constexpr uint32_t SR_ITAMP1F = 0x10000; // ITAMP1F
    static constexpr uint32_t SR_ITAMP3F = 0x40000; // ITAMP3F
    static constexpr uint32_t SR_ITAMP4F = 0x80000; // ITAMP4F
    static constexpr uint32_t SR_ITAMP5F = 0x100000; // ITAMP5F
    static constexpr uint32_t SR_ITAMP6F = 0x200000; // ITAMP6F
    static constexpr uint32_t SR_ITAMP7F = 0x400000; // ITAMP7F

    static constexpr uint32_t MISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MISR_TAMP1MF = 0x1; // TAMP1MF:
    static constexpr uint32_t MISR_TAMP2MF = 0x2; // TAMP2MF
    static constexpr uint32_t MISR_ITAMP1MF = 0x10000; // ITAMP1MF
    static constexpr uint32_t MISR_ITAMP3MF = 0x40000; // ITAMP3MF
    static constexpr uint32_t MISR_ITAMP4MF = 0x80000; // ITAMP4MF
    static constexpr uint32_t MISR_ITAMP5MF = 0x100000; // ITAMP5MF
    static constexpr uint32_t MISR_ITAMP6MF = 0x200000; // ITAMP6MF


    static constexpr uint32_t SCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SCR_CTAMP1F = 0x1; // CTAMP1F
    static constexpr uint32_t SCR_CTAMP2F = 0x2; // CTAMP2F
    static constexpr uint32_t SCR_CITAMP1F = 0x10000; // CITAMP1F
    static constexpr uint32_t SCR_CITAMP3F = 0x40000; // CITAMP3F
    static constexpr uint32_t SCR_CITAMP4F = 0x80000; // CITAMP4F
    static constexpr uint32_t SCR_CITAMP5F = 0x100000; // CITAMP5F
    static constexpr uint32_t SCR_CITAMP6F = 0x200000; // CITAMP6F
    static constexpr uint32_t SCR_CITAMP7F = 0x400000; // CITAMP7F


    static constexpr uint32_t BKP0R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP0R_BKP; // BKP

    static constexpr uint32_t BKP1R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP1R_BKP; // BKP

    static constexpr uint32_t BKP2R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP2R_BKP; // BKP

    static constexpr uint32_t BKP3R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP3R_BKP; // BKP

    static constexpr uint32_t BKP4R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP4R_BKP; // BKP


    static constexpr uint32_t HWCFGR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HWCFGR2_PTIONREG_OUT; // PTIONREG_OUT
    typedef bit_field_t<8, 0xf> HWCFGR2_TRUST_ZONE; // TRUST_ZONE

    static constexpr uint32_t HWCFGR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> HWCFGR1_BACKUP_REGS; // BACKUP_REGS
    typedef bit_field_t<8, 0xf> HWCFGR1_TAMPER; // TAMPER
    typedef bit_field_t<12, 0xf> HWCFGR1_ACTIVE_TAMPER; // ACTIVE_TAMPER
    typedef bit_field_t<16, 0xffff> HWCFGR1_INT_TAMPER; // INT_TAMPER

    static constexpr uint32_t VERR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> VERR_MINREV; // Minor Revision number
    typedef bit_field_t<4, 0xf> VERR_MAJREV; // Major Revision number

    static constexpr uint32_t IPIDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> IPIDR_IPID; // IP Identification

    static constexpr uint32_t SIDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> SIDR_SID; // Size Identification
};

// TAMP: Tamper and backup registers

struct stm32g0b1_tamp_t
{
    volatile uint32_t CR1; // TAMP control register 1
    volatile uint32_t CR2; // TAMP control register 2
    reserved_t<0x1> _0x8;
    volatile uint32_t FLTCR; // TAMP filter control register
    reserved_t<0x7> _0x10;
    volatile uint32_t IER; // TAMP interrupt enable register
    volatile uint32_t SR; // TAMP status register
    volatile uint32_t MISR; // TAMP masked interrupt status register
    reserved_t<0x1> _0x38;
    volatile uint32_t SCR; // TAMP status clear register
    reserved_t<0x30> _0x40;
    volatile uint32_t BKP0R; // TAMP backup 0 register
    volatile uint32_t BKP1R; // TAMP backup 1 register
    volatile uint32_t BKP2R; // TAMP backup 2 register
    volatile uint32_t BKP3R; // TAMP backup 3 register
    volatile uint32_t BKP4R; // TAMP backup 4 register

    static constexpr uint32_t CR1_RESET_VALUE = 0xffff0000; // Reset value
    static constexpr uint32_t CR1_TAMP1E = 0x1; // Tamper detection on TAMP_IN1 enable
    static constexpr uint32_t CR1_TAMP2E = 0x2; // Tamper detection on TAMP_IN2 enable
    static constexpr uint32_t CR1_ITAMP3E = 0x40000; // Internal tamper 3 enable: LSE monitoring
    static constexpr uint32_t CR1_ITAMP4E = 0x80000; // Internal tamper 4 enable: HSE monitoring
    static constexpr uint32_t CR1_ITAMP5E = 0x100000; // Internal tamper 5 enable: RTC calendar overflow
    static constexpr uint32_t CR1_ITAMP6E = 0x200000; // Internal tamper 6 enable: ST manufacturer readout

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR2_TAMP1NOER = 0x1; // Tamper 1 no erase
    static constexpr uint32_t CR2_TAMP2NOER = 0x2; // Tamper 2 no erase
    static constexpr uint32_t CR2_TAMP1MSK = 0x10000; // Tamper 1 mask The tamper 1 interrupt must not be enabled when TAMP1MSK is set.
    static constexpr uint32_t CR2_TAMP2MSK = 0x20000; // Tamper 2 mask The tamper 2 interrupt must not be enabled when TAMP2MSK is set.
    static constexpr uint32_t CR2_TAMP1TRG = 0x1000000; // Active level for tamper 1 input (active mode disabled) If TAMPFLT = 00 Tamper 1 input rising edge and high level triggers a tamper detection event. If TAMPFLT = 00 Tamper 1 input falling edge and low level triggers a tamper detection event.
    static constexpr uint32_t CR2_TAMP2TRG = 0x2000000; // Active level for tamper 2 input (active mode disabled) If TAMPFLT = 00 Tamper 2 input rising edge and high level triggers a tamper detection event. If TAMPFLT = 00 Tamper 2 input falling edge and low level triggers a tamper detection event.


    static constexpr uint32_t FLTCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> FLTCR_TAMPFREQ; // Tamper sampling frequency Determines the frequency at which each of the TAMP_INx inputs are sampled.
    typedef bit_field_t<3, 0x3> FLTCR_TAMPFLT; // TAMP_INx filter count These bits determines the number of consecutive samples at the specified level (TAMP*TRG) needed to activate a tamper event. TAMPFLT is valid for each of the TAMP_INx inputs.
    typedef bit_field_t<5, 0x3> FLTCR_TAMPPRCH; // TAMP_INx precharge duration These bit determines the duration of time during which the pull-up/is activated before each sample. TAMPPRCH is valid for each of the TAMP_INx inputs.
    static constexpr uint32_t FLTCR_TAMPPUDIS = 0x80; // TAMP_INx pull-up disable This bit determines if each of the TAMPx pins are precharged before each sample.


    static constexpr uint32_t IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IER_TAMP1IE = 0x1; // Tamper 1 interrupt enable
    static constexpr uint32_t IER_TAMP2IE = 0x2; // Tamper 2 interrupt enable
    static constexpr uint32_t IER_ITAMP3IE = 0x40000; // Internal tamper 3 interrupt enable: LSE monitoring
    static constexpr uint32_t IER_ITAMP4IE = 0x80000; // Internal tamper 4 interrupt enable: HSE monitoring
    static constexpr uint32_t IER_ITAMP5IE = 0x100000; // Internal tamper 5 interrupt enable: RTC calendar overflow
    static constexpr uint32_t IER_ITAMP6IE = 0x200000; // Internal tamper 6 interrupt enable: ST manufacturer readout

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_TAMP1F = 0x1; // TAMP1 detection flag This flag is set by hardware when a tamper detection event is detected on the TAMP1 input.
    static constexpr uint32_t SR_TAMP2F = 0x2; // TAMP2 detection flag This flag is set by hardware when a tamper detection event is detected on the TAMP2 input.
    static constexpr uint32_t SR_ITAMP3F = 0x40000; // LSE monitoring tamper detection flag This flag is set by hardware when a tamper detection event is detected on the internal tamper 3.
    static constexpr uint32_t SR_ITAMP4F = 0x80000; // HSE monitoring tamper detection flag This flag is set by hardware when a tamper detection event is detected on the internal tamper 4.
    static constexpr uint32_t SR_ITAMP5F = 0x100000; // RTC calendar overflow tamper detection flag This flag is set by hardware when a tamper detection event is detected on the internal tamper 5.
    static constexpr uint32_t SR_ITAMP6F = 0x200000; // ST manufacturer readout tamper detection flag This flag is set by hardware when a tamper detection event is detected on the internal tamper 6.

    static constexpr uint32_t MISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MISR_TAMP1MF = 0x1; // TAMP1 interrupt masked flag This flag is set by hardware when the tamper 1 interrupt is raised.
    static constexpr uint32_t MISR_TAMP2MF = 0x2; // TAMP2 interrupt masked flag This flag is set by hardware when the tamper 2 interrupt is raised.
    static constexpr uint32_t MISR_ITAMP3MF = 0x40000; // LSE monitoring tamper interrupt masked flag This flag is set by hardware when the internal tamper 3 interrupt is raised.
    static constexpr uint32_t MISR_ITAMP4MF = 0x80000; // HSE monitoring tamper interrupt masked flag This flag is set by hardware when the internal tamper 4 interrupt is raised.
    static constexpr uint32_t MISR_ITAMP5MF = 0x100000; // RTC calendar overflow tamper interrupt masked flag This flag is set by hardware when the internal tamper 5 interrupt is raised.
    static constexpr uint32_t MISR_ITAMP6MF = 0x200000; // ST manufacturer readout tamper interrupt masked flag This flag is set by hardware when the internal tamper 6 interrupt is raised.


    static constexpr uint32_t SCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SCR_CTAMP1F = 0x1; // Clear TAMP1 detection flag Writing 1 in this bit clears the TAMP1F bit in the TAMP_SR register.
    static constexpr uint32_t SCR_CTAMP2F = 0x2; // Clear TAMP2 detection flag Writing 1 in this bit clears the TAMP2F bit in the TAMP_SR register.
    static constexpr uint32_t SCR_CITAMP3F = 0x40000; // Clear ITAMP3 detection flag Writing 1 in this bit clears the ITAMP3F bit in the TAMP_SR register.
    static constexpr uint32_t SCR_CITAMP4F = 0x80000; // Clear ITAMP4 detection flag Writing 1 in this bit clears the ITAMP4F bit in the TAMP_SR register.
    static constexpr uint32_t SCR_CITAMP5F = 0x100000; // Clear ITAMP5 detection flag Writing 1 in this bit clears the ITAMP5F bit in the TAMP_SR register.
    static constexpr uint32_t SCR_CITAMP6F = 0x200000; // Clear ITAMP6 detection flag Writing 1 in this bit clears the ITAMP6F bit in the TAMP_SR register.


    static constexpr uint32_t BKP0R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP0R_BKP; // The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. In the default configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled.

    static constexpr uint32_t BKP1R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP1R_BKP; // The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. In the default configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled.

    static constexpr uint32_t BKP2R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP2R_BKP; // The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. In the default configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled.

    static constexpr uint32_t BKP3R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP3R_BKP; // The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. In the default configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled.

    static constexpr uint32_t BKP4R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BKP4R_BKP; // The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. In the default configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled.
};

template<>
struct peripheral_t<STM32G030, TAMP>
{
    static constexpr periph_t P = TAMP;
    using T = stm32g030_tamp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G031, TAMP>
{
    static constexpr periph_t P = TAMP;
    using T = stm32g030_tamp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G041, TAMP>
{
    static constexpr periph_t P = TAMP;
    using T = stm32g030_tamp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G070, TAMP>
{
    static constexpr periph_t P = TAMP;
    using T = stm32g070_tamp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G071, TAMP>
{
    static constexpr periph_t P = TAMP;
    using T = stm32g070_tamp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G081, TAMP>
{
    static constexpr periph_t P = TAMP;
    using T = stm32g070_tamp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0B1, TAMP>
{
    static constexpr periph_t P = TAMP;
    using T = stm32g0b1_tamp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0C1, TAMP>
{
    static constexpr periph_t P = TAMP;
    using T = stm32g0b1_tamp_t;
    static T& V;
};

using tamp_t = peripheral_t<svd, TAMP>;
