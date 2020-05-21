#pragma once

////
//
//      STM32H7 RTC peripherals
//
////

////
//
//      RTC
//
////

struct stm32h742x_rtc_t
{
    volatile uint32_t RTC_TR;       // [read-write] The RTC_TR is the calendar time shadow register. This register must be written in initialization mode only. Refer to Calendar initialization and configuration on page9 and Reading the calendar on page10.This register is write protected. The write access procedure is described in RTC register write protection on page9.
    volatile uint32_t RTC_DR;       // [read-write] The RTC_DR is the calendar date shadow register. This register must be written in initialization mode only. Refer to Calendar initialization and configuration on page9 and Reading the calendar on page10.This register is write protected. The write access procedure is described in RTC register write protection on page9.
    volatile uint32_t RTC_CR;       // RTC control register
    volatile uint32_t RTC_ISR;      // This register is write protected (except for RTC_ISR[13:8] bits). The write access procedure is described in RTC register write protection on page9.
    volatile uint32_t RTC_PRER;     // [read-write] This register must be written in initialization mode only. The initialization must be performed in two separate write accesses. Refer to Calendar initialization and configuration on page9.This register is write protected. The write access procedure is described in RTC register write protection on page9.
    volatile uint32_t RTC_WUTR;     // [read-write] This register can be written only when WUTWF is set to 1 in RTC_ISR.This register is write protected. The write access procedure is described in RTC register write protection on page9.
    reserved_t<0x1> _0x1c;
    volatile uint32_t RTC_ALRMAR;   // [read-write] This register can be written only when ALRAWF is set to 1 in RTC_ISR, or in initialization mode.This register is write protected. The write access procedure is described in RTC register write protection on page9.
    volatile uint32_t RTC_ALRMBR;   // [read-write] This register can be written only when ALRBWF is set to 1 in RTC_ISR, or in initialization mode.This register is write protected. The write access procedure is described in RTC register write protection on page9.
    volatile uint32_t RTC_WPR;      // [write-only] RTC write protection register
    volatile uint32_t RTC_SSR;      // [read-only] RTC sub second register
    volatile uint32_t RTC_SHIFTR;   // [write-only] This register is write protected. The write access procedure is described in RTC register write protection on page9.
    volatile uint32_t RTC_TSTR;     // [read-only] The content of this register is valid only when TSF is set to 1 in RTC_ISR. It is cleared when TSF bit is reset.
    volatile uint32_t RTC_TSDR;     // [read-only] The content of this register is valid only when TSF is set to 1 in RTC_ISR. It is cleared when TSF bit is reset.
    volatile uint32_t RTC_TSSSR;    // [read-only] The content of this register is valid only when RTC_ISR/TSF is set. It is cleared when the RTC_ISR/TSF bit is reset.
    volatile uint32_t RTC_CALR;     // [read-write] This register is write protected. The write access procedure is described in RTC register write protection on page9.
    volatile uint32_t RTC_TAMPCR;   // [read-write] RTC tamper and alternate function configuration register
    volatile uint32_t RTC_ALRMASSR; // [read-write] This register can be written only when ALRAE is reset in RTC_CR register, or in initialization mode.This register is write protected. The write access procedure is described in RTC register write protection on page9
    volatile uint32_t RTC_ALRMBSSR; // [read-write] This register can be written only when ALRBE is reset in RTC_CR register, or in initialization mode.This register is write protected.The write access procedure is described in Section: RTC register write protection.
    volatile uint32_t RTC_OR;       // [read-write] RTC option register
    volatile uint32_t RTC_BKP0R;    // [read-write] RTC backup registers
    volatile uint32_t RTC_BKP1R;    // [read-write] RTC backup registers
    volatile uint32_t RTC_BKP2R;    // [read-write] RTC backup registers
    volatile uint32_t RTC_BKP3R;    // [read-write] RTC backup registers
    volatile uint32_t RTC_BKP4R;    // [read-write] RTC backup registers
    volatile uint32_t RTC_BKP5R;    // [read-write] RTC backup registers
    volatile uint32_t RTC_BKP6R;    // [read-write] RTC backup registers
    volatile uint32_t RTC_BKP7R;    // [read-write] RTC backup registers
    volatile uint32_t RTC_BKP8R;    // [read-write] RTC backup registers
    volatile uint32_t RTC_BKP9R;    // [read-write] RTC backup registers
    volatile uint32_t RTC_BKP10R;   // [read-write] RTC backup registers
    volatile uint32_t RTC_BKP11R;   // [read-write] RTC backup registers
    volatile uint32_t RTC_BKP12R;   // [read-write] RTC backup registers
    volatile uint32_t RTC_BKP13R;   // [read-write] RTC backup registers
    volatile uint32_t RTC_BKP14R;   // [read-write] RTC backup registers
    volatile uint32_t RTC_BKP15R;   // [read-write] RTC backup registers
    volatile uint32_t RTC_BKP16R;   // [read-write] RTC backup registers
    volatile uint32_t RTC_BKP17R;   // [read-write] RTC backup registers
    volatile uint32_t RTC_BKP18R;   // [read-write] RTC backup registers
    volatile uint32_t RTC_BKP19R;   // [read-write] RTC backup registers
    volatile uint32_t RTC_BKP20R;   // [read-write] RTC backup registers
    volatile uint32_t RTC_BKP21R;   // [read-write] RTC backup registers
    volatile uint32_t RTC_BKP22R;   // [read-write] RTC backup registers
    volatile uint32_t RTC_BKP23R;   // [read-write] RTC backup registers
    volatile uint32_t RTC_BKP24R;   // [read-write] RTC backup registers
    volatile uint32_t RTC_BKP25R;   // [read-write] RTC backup registers
    volatile uint32_t RTC_BKP26R;   // [read-write] RTC backup registers
    volatile uint32_t RTC_BKP27R;   // [read-write] RTC backup registers
    volatile uint32_t RTC_BKP28R;   // [read-write] RTC backup registers
    volatile uint32_t RTC_BKP29R;   // [read-write] RTC backup registers
    volatile uint32_t RTC_BKP30R;   // [read-write] RTC backup registers
    volatile uint32_t RTC_BKP31R;   // [read-write] RTC backup registers

    static constexpr uint32_t RTC_TR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RTC_TR_SU =           // Second units in BCD format
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_TR_ST =           // Second tens in BCD format
        bit_field_t<4, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_TR_MNU =          // Minute units in BCD format
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_TR_MNT =          // Minute tens in BCD format
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_TR_HU =           // Hour units in BCD format
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_TR_HT =           // Hour tens in BCD format
        bit_field_t<20, 0x3>::value<X>();
    static constexpr uint32_t RTC_TR_PM = 0x400000; // AM/PM notation

    static constexpr uint32_t RTC_DR_RESET_VALUE = 0x2101;
    template<uint32_t X>
    static constexpr uint32_t RTC_DR_DU =         // Date units in BCD format
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_DR_DT =         // Date tens in BCD format
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_DR_MU =         // Month units in BCD format
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t RTC_DR_MT = 0x1000; // Month tens in BCD format
    template<uint32_t X>
    static constexpr uint32_t RTC_DR_WDU =        // Week day units
        bit_field_t<13, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_DR_YU =         // Year units in BCD format
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_DR_YT =         // Year tens in BCD format
        bit_field_t<20, 0xf>::value<X>();

    static constexpr uint32_t RTC_CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RTC_CR_WUCKSEL =         // Wakeup clock selection
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t RTC_CR_TSEDGE = 0x8;     // Time-stamp event active edge TSE must be reset when TSEDGE is changed to avoid unwanted TSF setting.
    static constexpr uint32_t RTC_CR_REFCKON = 0x10;   // RTC_REFIN reference clock detection enable (50 or 60Hz) Note: PREDIV_S must be 0x00FF.
    static constexpr uint32_t RTC_CR_BYPSHAD = 0x20;   // Bypass the shadow registers Note: If the frequency of the APB clock is less than seven times the frequency of RTCCLK, BYPSHAD must be set to 1.
    static constexpr uint32_t RTC_CR_FMT = 0x40;       // Hour format
    static constexpr uint32_t RTC_CR_ALRAE = 0x100;    // Alarm A enable
    static constexpr uint32_t RTC_CR_ALRBE = 0x200;    // Alarm B enable
    static constexpr uint32_t RTC_CR_WUTE = 0x400;     // Wakeup timer enable
    static constexpr uint32_t RTC_CR_TSE = 0x800;      // timestamp enable
    static constexpr uint32_t RTC_CR_ALRAIE = 0x1000;  // Alarm A interrupt enable
    static constexpr uint32_t RTC_CR_ALRBIE = 0x2000;  // Alarm B interrupt enable
    static constexpr uint32_t RTC_CR_WUTIE = 0x4000;   // Wakeup timer interrupt enable
    static constexpr uint32_t RTC_CR_TSIE = 0x8000;    // Time-stamp interrupt enable
    static constexpr uint32_t RTC_CR_ADD1H = 0x10000;  // Add 1 hour (summer time change) When this bit is set outside initialization mode, 1 hour is added to the calendar time. This bit is always read as 0.
    static constexpr uint32_t RTC_CR_SUB1H = 0x20000;  // Subtract 1 hour (winter time change) When this bit is set outside initialization mode, 1 hour is subtracted to the calendar time if the current hour is not 0. This bit is always read as 0. Setting this bit has no effect when current hour is 0.
    static constexpr uint32_t RTC_CR_BKP = 0x40000;    // Backup This bit can be written by the user to memorize whether the daylight saving time change has been performed or not.
    static constexpr uint32_t RTC_CR_COSEL = 0x80000;  // Calibration output selection When COE=1, this bit selects which signal is output on RTC_CALIB. These frequencies are valid for RTCCLK at 32.768 kHz and prescalers at their default values (PREDIV_A=127 and PREDIV_S=255). Refer to Section24.3.15: Calibration clock output
    static constexpr uint32_t RTC_CR_POL = 0x100000;   // Output polarity This bit is used to configure the polarity of RTC_ALARM output
    template<uint32_t X>
    static constexpr uint32_t RTC_CR_OSEL =            // Output selection These bits are used to select the flag to be routed to RTC_ALARM output
        bit_field_t<21, 0x3>::value<X>();
    static constexpr uint32_t RTC_CR_COE = 0x800000;   // Calibration output enable This bit enables the RTC_CALIB output
    static constexpr uint32_t RTC_CR_ITSE = 0x1000000; // timestamp on internal event enable

    static constexpr uint32_t RTC_ISR_RESET_VALUE = 0x7;
    static constexpr uint32_t RTC_ISR_ALRAWF = 0x1;      // Alarm A write flag This bit is set by hardware when Alarm A values can be changed, after the ALRAE bit has been set to 0 in RTC_CR. It is cleared by hardware in initialization mode.
    static constexpr uint32_t RTC_ISR_ALRBWF = 0x2;      // Alarm B write flag This bit is set by hardware when Alarm B values can be changed, after the ALRBE bit has been set to 0 in RTC_CR. It is cleared by hardware in initialization mode.
    static constexpr uint32_t RTC_ISR_WUTWF = 0x4;       // Wakeup timer write flag This bit is set by hardware up to 2 RTCCLK cycles after the WUTE bit has been set to 0 in RTC_CR, and is cleared up to 2 RTCCLK cycles after the WUTE bit has been set to 1. The wakeup timer values can be changed when WUTE bit is cleared and WUTWF is set.
    static constexpr uint32_t RTC_ISR_SHPF = 0x8;        // Shift operation pending This flag is set by hardware as soon as a shift operation is initiated by a write to the RTC_SHIFTR register. It is cleared by hardware when the corresponding shift operation has been executed. Writing to the SHPF bit has no effect.
    static constexpr uint32_t RTC_ISR_INITS = 0x10;      // Initialization status flag This bit is set by hardware when the calendar year field is different from 0 (Backup domain reset state).
    static constexpr uint32_t RTC_ISR_RSF = 0x20;        // Registers synchronization flag This bit is set by hardware each time the calendar registers are copied into the shadow registers (RTC_SSRx, RTC_TRx and RTC_DRx). This bit is cleared by hardware in initialization mode, while a shift operation is pending (SHPF=1), or when in bypass shadow register mode (BYPSHAD=1). This bit can also be cleared by software. It is cleared either by software or by hardware in initialization mode.
    static constexpr uint32_t RTC_ISR_INITF = 0x40;      // Initialization flag When this bit is set to 1, the RTC is in initialization state, and the time, date and prescaler registers can be updated.
    static constexpr uint32_t RTC_ISR_INIT = 0x80;       // Initialization mode
    static constexpr uint32_t RTC_ISR_ALRAF = 0x100;     // Alarm A flag This flag is set by hardware when the time/date registers (RTC_TR and RTC_DR) match the Alarm A register (RTC_ALRMAR). This flag is cleared by software by writing 0.
    static constexpr uint32_t RTC_ISR_ALRBF = 0x200;     // Alarm B flag This flag is set by hardware when the time/date registers (RTC_TR and RTC_DR) match the Alarm B register (RTC_ALRMBR). This flag is cleared by software by writing 0.
    static constexpr uint32_t RTC_ISR_WUTF = 0x400;      // Wakeup timer flag This flag is set by hardware when the wakeup auto-reload counter reaches 0. This flag is cleared by software by writing 0. This flag must be cleared by software at least 1.5 RTCCLK periods before WUTF is set to 1 again.
    static constexpr uint32_t RTC_ISR_TSF = 0x800;       // Time-stamp flag This flag is set by hardware when a time-stamp event occurs. This flag is cleared by software by writing 0.
    static constexpr uint32_t RTC_ISR_TSOVF = 0x1000;    // Time-stamp overflow flag This flag is set by hardware when a time-stamp event occurs while TSF is already set. This flag is cleared by software by writing 0. It is recommended to check and then clear TSOVF only after clearing the TSF bit. Otherwise, an overflow might not be noticed if a time-stamp event occurs immediately before the TSF bit is cleared.
    static constexpr uint32_t RTC_ISR_TAMP1F = 0x2000;   // RTC_TAMP1 detection flag This flag is set by hardware when a tamper detection event is detected on the RTC_TAMP1 input. It is cleared by software writing 0
    static constexpr uint32_t RTC_ISR_TAMP2F = 0x4000;   // RTC_TAMP2 detection flag This flag is set by hardware when a tamper detection event is detected on the RTC_TAMP2 input. It is cleared by software writing 0
    static constexpr uint32_t RTC_ISR_TAMP3F = 0x8000;   // RTC_TAMP3 detection flag This flag is set by hardware when a tamper detection event is detected on the RTC_TAMP3 input. It is cleared by software writing 0
    static constexpr uint32_t RTC_ISR_RECALPF = 0x10000; // Recalibration pending Flag The RECALPF status flag is automatically set to 1 when software writes to the RTC_CALR register, indicating that the RTC_CALR register is blocked. When the new calibration settings are taken into account, this bit returns to 0. Refer to Re-calibration on-the-fly.
    static constexpr uint32_t RTC_ISR_ITSF = 0x20000;    // Internal tTime-stamp flag

    static constexpr uint32_t RTC_PRER_RESET_VALUE = 0x7f00ff;
    template<uint32_t X>
    static constexpr uint32_t RTC_PRER_PREDIV_S =   // Synchronous prescaler factor This is the synchronous division factor: ck_spre frequency = ck_apre frequency/(PREDIV_S+1)
        bit_field_t<0, 0x7fff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_PRER_PREDIV_A =   // Asynchronous prescaler factor This is the asynchronous division factor: ck_apre frequency = RTCCLK frequency/(PREDIV_A+1)
        bit_field_t<16, 0x7f>::value<X>();

    static constexpr uint32_t RTC_WUTR_RESET_VALUE = 0xffff;
    template<uint32_t X>
    static constexpr uint32_t RTC_WUTR_WUT =   // Wakeup auto-reload value bits When the wakeup timer is enabled (WUTE set to 1), the WUTF flag is set every (WUT[15:0] + 1) ck_wut cycles. The ck_wut period is selected through WUCKSEL[2:0] bits of the RTC_CR register When WUCKSEL[2] = 1, the wakeup timer becomes 17-bits and WUCKSEL[1] effectively becomes WUT[16] the most-significant bit to be reloaded into the timer. The first assertion of WUTF occurs (WUT+1) ck_wut cycles after WUTE is set. Setting WUT[15:0] to 0x0000 with WUCKSEL[2:0] =011 (RTCCLK/2) is forbidden.
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t RTC_ALRMAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RTC_ALRMAR_SU =                // Second units in BCD format.
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_ALRMAR_ST =                // Second tens in BCD format.
        bit_field_t<4, 0x7>::value<X>();
    static constexpr uint32_t RTC_ALRMAR_MSK1 = 0x80;        // Alarm A seconds mask
    template<uint32_t X>
    static constexpr uint32_t RTC_ALRMAR_MNU =               // Minute units in BCD format.
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_ALRMAR_MNT =               // Minute tens in BCD format.
        bit_field_t<12, 0x7>::value<X>();
    static constexpr uint32_t RTC_ALRMAR_MSK2 = 0x8000;      // Alarm A minutes mask
    template<uint32_t X>
    static constexpr uint32_t RTC_ALRMAR_HU =                // Hour units in BCD format.
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_ALRMAR_HT =                // Hour tens in BCD format.
        bit_field_t<20, 0x3>::value<X>();
    static constexpr uint32_t RTC_ALRMAR_PM = 0x400000;      // AM/PM notation
    static constexpr uint32_t RTC_ALRMAR_MSK3 = 0x800000;    // Alarm A hours mask
    template<uint32_t X>
    static constexpr uint32_t RTC_ALRMAR_DU =                // Date units or day in BCD format.
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_ALRMAR_DT =                // Date tens in BCD format.
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t RTC_ALRMAR_WDSEL = 0x40000000; // Week day selection
    static constexpr uint32_t RTC_ALRMAR_MSK4 = 0x80000000;  // Alarm A date mask

    static constexpr uint32_t RTC_ALRMBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RTC_ALRMBR_SU =                // Second units in BCD format
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_ALRMBR_ST =                // Second tens in BCD format
        bit_field_t<4, 0x7>::value<X>();
    static constexpr uint32_t RTC_ALRMBR_MSK1 = 0x80;        // Alarm B seconds mask
    template<uint32_t X>
    static constexpr uint32_t RTC_ALRMBR_MNU =               // Minute units in BCD format
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_ALRMBR_MNT =               // Minute tens in BCD format
        bit_field_t<12, 0x7>::value<X>();
    static constexpr uint32_t RTC_ALRMBR_MSK2 = 0x8000;      // Alarm B minutes mask
    template<uint32_t X>
    static constexpr uint32_t RTC_ALRMBR_HU =                // Hour units in BCD format
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_ALRMBR_HT =                // Hour tens in BCD format
        bit_field_t<20, 0x3>::value<X>();
    static constexpr uint32_t RTC_ALRMBR_PM = 0x400000;      // AM/PM notation
    static constexpr uint32_t RTC_ALRMBR_MSK3 = 0x800000;    // Alarm B hours mask
    template<uint32_t X>
    static constexpr uint32_t RTC_ALRMBR_DU =                // Date units or day in BCD format
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_ALRMBR_DT =                // Date tens in BCD format
        bit_field_t<28, 0x3>::value<X>();
    static constexpr uint32_t RTC_ALRMBR_WDSEL = 0x40000000; // Week day selection
    static constexpr uint32_t RTC_ALRMBR_MSK4 = 0x80000000;  // Alarm B date mask

    static constexpr uint32_t RTC_WPR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RTC_WPR_KEY =   // Write protection key This byte is written by software. Reading this byte always returns 0x00. Refer to RTC register write protection for a description of how to unlock RTC register write protection.
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t RTC_SSR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RTC_SSR_SS =   // Sub second value SS[15:0] is the value in the synchronous prescaler counter. The fraction of a second is given by the formula below: Second fraction = (PREDIV_S - SS) / (PREDIV_S + 1) Note: SS can be larger than PREDIV_S only after a shift operation. In that case, the correct time/date is one second less than as indicated by RTC_TR/RTC_DR.
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t RTC_SHIFTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RTC_SHIFTR_SUBFS =             // Subtract a fraction of a second These bits are write only and is always read as zero. Writing to this bit has no effect when a shift operation is pending (when SHPF=1, in RTC_ISR). The value which is written to SUBFS is added to the synchronous prescaler counter. Since this counter counts down, this operation effectively subtracts from (delays) the clock by: Delay (seconds) = SUBFS / (PREDIV_S + 1) A fraction of a second can effectively be added to the clock (advancing the clock) when the ADD1S function is used in conjunction with SUBFS, effectively advancing the clock by: Advance (seconds) = (1 - (SUBFS / (PREDIV_S + 1))). Note: Writing to SUBFS causes RSF to be cleared. Software can then wait until RSF=1 to be sure that the shadow registers have been updated with the shifted time.
        bit_field_t<0, 0x7fff>::value<X>();
    static constexpr uint32_t RTC_SHIFTR_ADD1S = 0x80000000; // Add one second This bit is write only and is always read as zero. Writing to this bit has no effect when a shift operation is pending (when SHPF=1, in RTC_ISR). This function is intended to be used with SUBFS (see description below) in order to effectively add a fraction of a second to the clock in an atomic operation.

    static constexpr uint32_t RTC_TSTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RTC_TSTR_SU =           // Second units in BCD format.
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_TSTR_ST =           // Second tens in BCD format.
        bit_field_t<4, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_TSTR_MNU =          // Minute units in BCD format.
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_TSTR_MNT =          // Minute tens in BCD format.
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_TSTR_HU =           // Hour units in BCD format.
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_TSTR_HT =           // Hour tens in BCD format.
        bit_field_t<20, 0x3>::value<X>();
    static constexpr uint32_t RTC_TSTR_PM = 0x400000; // AM/PM notation

    static constexpr uint32_t RTC_TSDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RTC_TSDR_DU =         // Date units in BCD format
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_TSDR_DT =         // Date tens in BCD format
        bit_field_t<4, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_TSDR_MU =         // Month units in BCD format
        bit_field_t<8, 0xf>::value<X>();
    static constexpr uint32_t RTC_TSDR_MT = 0x1000; // Month tens in BCD format
    template<uint32_t X>
    static constexpr uint32_t RTC_TSDR_WDU =        // Week day units
        bit_field_t<13, 0x7>::value<X>();

    static constexpr uint32_t RTC_TSSSR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RTC_TSSSR_SS =   // Sub second value SS[15:0] is the value of the synchronous prescaler counter when the timestamp event occurred.
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t RTC_CALR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RTC_CALR_CALM =           // Calibration minus The frequency of the calendar is reduced by masking CALM out of 220 RTCCLK pulses (32 seconds if the input frequency is 32768 Hz). This decreases the frequency of the calendar with a resolution of 0.9537 ppm. To increase the frequency of the calendar, this feature should be used in conjunction with CALP. See Section24.3.12: RTC smooth digital calibration on page13.
        bit_field_t<0, 0x1ff>::value<X>();
    static constexpr uint32_t RTC_CALR_CALW16 = 0x2000; // Use a 16-second calibration cycle period When CALW16 is set to 1, the 16-second calibration cycle period is selected.This bit must not be set to 1 if CALW8=1. Note: CALM[0] is stuck at 0 when CALW16= 1. Refer to Section24.3.12: RTC smooth digital calibration.
    static constexpr uint32_t RTC_CALR_CALW8 = 0x4000;  // Use an 8-second calibration cycle period When CALW8 is set to 1, the 8-second calibration cycle period is selected. Note: CALM[1:0] are stuck at 00; when CALW8= 1. Refer to Section24.3.12: RTC smooth digital calibration.
    static constexpr uint32_t RTC_CALR_CALP = 0x8000;   // Increase frequency of RTC by 488.5 ppm This feature is intended to be used in conjunction with CALM, which lowers the frequency of the calendar with a fine resolution. if the input frequency is 32768 Hz, the number of RTCCLK pulses added during a 32-second window is calculated as follows: (512 * CALP) - CALM. Refer to Section24.3.12: RTC smooth digital calibration.

    static constexpr uint32_t RTC_TAMPCR_RESET_VALUE = 0x0;
    static constexpr uint32_t RTC_TAMPCR_TAMP1E = 0x1;            // RTC_TAMP1 input detection enable
    static constexpr uint32_t RTC_TAMPCR_TAMP1TRG = 0x2;          // Active level for RTC_TAMP1 input If TAMPFLT != 00 if TAMPFLT = 00:
    static constexpr uint32_t RTC_TAMPCR_TAMPIE = 0x4;            // Tamper interrupt enable
    static constexpr uint32_t RTC_TAMPCR_TAMP2E = 0x8;            // RTC_TAMP2 input detection enable
    static constexpr uint32_t RTC_TAMPCR_TAMP2TRG = 0x10;         // Active level for RTC_TAMP2 input if TAMPFLT != 00: if TAMPFLT = 00:
    static constexpr uint32_t RTC_TAMPCR_TAMP3E = 0x20;           // RTC_TAMP3 detection enable
    static constexpr uint32_t RTC_TAMPCR_TAMP3TRG = 0x40;         // Active level for RTC_TAMP3 input if TAMPFLT != 00: if TAMPFLT = 00:
    static constexpr uint32_t RTC_TAMPCR_TAMPTS = 0x80;           // Activate timestamp on tamper detection event TAMPTS is valid even if TSE=0 in the RTC_CR register.
    template<uint32_t X>
    static constexpr uint32_t RTC_TAMPCR_TAMPFREQ =               // Tamper sampling frequency Determines the frequency at which each of the RTC_TAMPx inputs are sampled.
        bit_field_t<8, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_TAMPCR_TAMPFLT =                // RTC_TAMPx filter count These bits determines the number of consecutive samples at the specified level (TAMP*TRG) needed to activate a Tamper event. TAMPFLT is valid for each of the RTC_TAMPx inputs.
        bit_field_t<11, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_TAMPCR_TAMPPRCH =               // RTC_TAMPx precharge duration These bit determines the duration of time during which the pull-up/is activated before each sample. TAMPPRCH is valid for each of the RTC_TAMPx inputs.
        bit_field_t<13, 0x3>::value<X>();
    static constexpr uint32_t RTC_TAMPCR_TAMPPUDIS = 0x8000;      // RTC_TAMPx pull-up disable This bit determines if each of the RTC_TAMPx pins are pre-charged before each sample.
    static constexpr uint32_t RTC_TAMPCR_TAMP1IE = 0x10000;       // Tamper 1 interrupt enable
    static constexpr uint32_t RTC_TAMPCR_TAMP1NOERASE = 0x20000;  // Tamper 1 no erase
    static constexpr uint32_t RTC_TAMPCR_TAMP1MF = 0x40000;       // Tamper 1 mask flag
    static constexpr uint32_t RTC_TAMPCR_TAMP2IE = 0x80000;       // Tamper 2 interrupt enable
    static constexpr uint32_t RTC_TAMPCR_TAMP2NOERASE = 0x100000; // Tamper 2 no erase
    static constexpr uint32_t RTC_TAMPCR_TAMP2MF = 0x200000;      // Tamper 2 mask flag
    static constexpr uint32_t RTC_TAMPCR_TAMP3IE = 0x400000;      // Tamper 3 interrupt enable
    static constexpr uint32_t RTC_TAMPCR_TAMP3NOERASE = 0x800000; // Tamper 3 no erase
    static constexpr uint32_t RTC_TAMPCR_TAMP3MF = 0x1000000;     // Tamper 3 mask flag

    static constexpr uint32_t RTC_ALRMASSR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RTC_ALRMASSR_SS =       // Sub seconds value This value is compared with the contents of the synchronous prescaler counter to determine if Alarm A is to be activated. Only bits 0 up MASKSS-1 are compared.
        bit_field_t<0, 0x7fff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_ALRMASSR_MASKSS =   // Mask the most-significant bits starting at this bit ... The overflow bits of the synchronous counter (bits 15) is never compared. This bit can be different from 0 only after a shift operation.
        bit_field_t<24, 0xf>::value<X>();

    static constexpr uint32_t RTC_ALRMBSSR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t RTC_ALRMBSSR_SS =       // Sub seconds value This value is compared with the contents of the synchronous prescaler counter to determine if Alarm B is to be activated. Only bits 0 up to MASKSS-1 are compared.
        bit_field_t<0, 0x7fff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t RTC_ALRMBSSR_MASKSS =   // Mask the most-significant bits starting at this bit ... The overflow bits of the synchronous counter (bits 15) is never compared. This bit can be different from 0 only after a shift operation.
        bit_field_t<24, 0xf>::value<X>();

    static constexpr uint32_t RTC_BKP0R_RESET_VALUE = 0x0;

    static constexpr uint32_t RTC_BKP1R_RESET_VALUE = 0x0;

    static constexpr uint32_t RTC_BKP2R_RESET_VALUE = 0x0;

    static constexpr uint32_t RTC_BKP3R_RESET_VALUE = 0x0;

    static constexpr uint32_t RTC_BKP4R_RESET_VALUE = 0x0;

    static constexpr uint32_t RTC_BKP5R_RESET_VALUE = 0x0;

    static constexpr uint32_t RTC_BKP6R_RESET_VALUE = 0x0;

    static constexpr uint32_t RTC_BKP7R_RESET_VALUE = 0x0;

    static constexpr uint32_t RTC_BKP8R_RESET_VALUE = 0x0;

    static constexpr uint32_t RTC_BKP9R_RESET_VALUE = 0x0;

    static constexpr uint32_t RTC_BKP10R_RESET_VALUE = 0x0;

    static constexpr uint32_t RTC_BKP11R_RESET_VALUE = 0x0;

    static constexpr uint32_t RTC_BKP12R_RESET_VALUE = 0x0;

    static constexpr uint32_t RTC_BKP13R_RESET_VALUE = 0x0;

    static constexpr uint32_t RTC_BKP14R_RESET_VALUE = 0x0;

    static constexpr uint32_t RTC_BKP15R_RESET_VALUE = 0x0;

    static constexpr uint32_t RTC_OR_RESET_VALUE = 0x0;
    static constexpr uint32_t RTC_OR_RTC_ALARM_TYPE = 0x1; // RTC_ALARM output type on PC13
    static constexpr uint32_t RTC_OR_RTC_OUT_RMP = 0x2;    // RTC_OUT remap

    static constexpr uint32_t RTC_BKP16R_RESET_VALUE = 0x0;

    static constexpr uint32_t RTC_BKP17R_RESET_VALUE = 0x0;

    static constexpr uint32_t RTC_BKP18R_RESET_VALUE = 0x0;

    static constexpr uint32_t RTC_BKP19R_RESET_VALUE = 0x0;

    static constexpr uint32_t RTC_BKP20R_RESET_VALUE = 0x0;

    static constexpr uint32_t RTC_BKP21R_RESET_VALUE = 0x0;

    static constexpr uint32_t RTC_BKP22R_RESET_VALUE = 0x0;

    static constexpr uint32_t RTC_BKP23R_RESET_VALUE = 0x0;

    static constexpr uint32_t RTC_BKP24R_RESET_VALUE = 0x0;

    static constexpr uint32_t RTC_BKP25R_RESET_VALUE = 0x0;

    static constexpr uint32_t RTC_BKP26R_RESET_VALUE = 0x0;

    static constexpr uint32_t RTC_BKP27R_RESET_VALUE = 0x0;

    static constexpr uint32_t RTC_BKP28R_RESET_VALUE = 0x0;

    static constexpr uint32_t RTC_BKP29R_RESET_VALUE = 0x0;

    static constexpr uint32_t RTC_BKP30R_RESET_VALUE = 0x0;

    static constexpr uint32_t RTC_BKP31R_RESET_VALUE = 0x0;
};


template<>
struct peripheral_t<STM32H742x, RTC>
{
    typedef stm32h742x_rtc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, RTC>
{
    typedef stm32h742x_rtc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, RTC>
{
    typedef stm32h742x_rtc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, RTC>
{
    typedef stm32h742x_rtc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, RTC>
{
    typedef stm32h742x_rtc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, RTC>
{
    typedef stm32h742x_rtc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, RTC>
{
    typedef stm32h742x_rtc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, RTC>
{
    typedef stm32h742x_rtc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, RTC>
{
    typedef stm32h742x_rtc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, RTC>
{
    typedef stm32h742x_rtc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, RTC>
{
    typedef stm32h742x_rtc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, RTC>
{
    typedef stm32h742x_rtc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, RTC>
{
    typedef stm32h742x_rtc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, RTC>
{
    typedef stm32h742x_rtc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, RTC>
{
    typedef stm32h742x_rtc_t T;
    static T& V;
};

using rtc_t = peripheral_t<mcu_svd, RTC>;

