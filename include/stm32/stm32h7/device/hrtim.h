#pragma once

////
//
//      STM32H7 HRTIM peripherals
//
///

// HRTIM_COMMON: High Resolution Timer: Common functions

struct stm32h742x_hrtim_common_t
{
    volatile uint32_t CR1; // Control Register 1
    volatile uint32_t CR2; // Control Register 2
    volatile uint32_t ISR; // Interrupt Status Register
    volatile uint32_t ICR; // Interrupt Clear Register
    volatile uint32_t IER; // Interrupt Enable Register
    volatile uint32_t OENR; // Output Enable Register
    volatile uint32_t DISR; // DISR
    volatile uint32_t ODSR; // Output Disable Status Register
    volatile uint32_t BMCR; // Burst Mode Control Register
    volatile uint32_t BMTRG; // BMTRG
    volatile uint32_t BMCMPR6; // BMCMPR6
    volatile uint32_t BMPER; // Burst Mode Period Register
    volatile uint32_t EECR1; // Timer External Event Control Register 1
    volatile uint32_t EECR2; // Timer External Event Control Register 2
    volatile uint32_t EECR3; // Timer External Event Control Register 3
    volatile uint32_t ADC1R; // ADC Trigger 1 Register
    volatile uint32_t ADC2R; // ADC Trigger 2 Register
    volatile uint32_t ADC3R; // ADC Trigger 3 Register
    volatile uint32_t ADC4R; // ADC Trigger 4 Register
    volatile uint32_t DLLCR; // DLL Control Register
    volatile uint32_t FLTINR1; // HRTIM Fault Input Register 1
    volatile uint32_t FLTINR2; // HRTIM Fault Input Register 2
    volatile uint32_t BDMUPDR; // BDMUPDR
    volatile uint32_t BDTXUPR; // Burst DMA Timerx update Register
    volatile uint32_t BDMADR; // Burst DMA Data Register

    static constexpr uint32_t CR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<25, 0x7> CR1_AD4USRC; // ADC Trigger 4 Update Source
    typedef bit_field_t<22, 0x7> CR1_AD3USRC; // ADC Trigger 3 Update Source
    typedef bit_field_t<19, 0x7> CR1_AD2USRC; // ADC Trigger 2 Update Source
    typedef bit_field_t<16, 0x7> CR1_AD1USRC; // ADC Trigger 1 Update Source
    static constexpr uint32_t CR1_TEUDIS = 0x20; // Timer E Update Disable
    static constexpr uint32_t CR1_TDUDIS = 0x10; // Timer D Update Disable
    static constexpr uint32_t CR1_TCUDIS = 0x8; // Timer C Update Disable
    static constexpr uint32_t CR1_TBUDIS = 0x4; // Timer B Update Disable
    static constexpr uint32_t CR1_TAUDIS = 0x2; // Timer A Update Disable
    static constexpr uint32_t CR1_MUDIS = 0x1; // Master Update Disable

    static constexpr uint32_t CR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR2_TERST = 0x2000; // Timer E counter software reset
    static constexpr uint32_t CR2_TDRST = 0x1000; // Timer D counter software reset
    static constexpr uint32_t CR2_TCRST = 0x800; // Timer C counter software reset
    static constexpr uint32_t CR2_TBRST = 0x400; // Timer B counter software reset
    static constexpr uint32_t CR2_TARST = 0x200; // Timer A counter software reset
    static constexpr uint32_t CR2_MRST = 0x100; // Master Counter software reset
    static constexpr uint32_t CR2_TESWU = 0x20; // Timer E Software Update
    static constexpr uint32_t CR2_TDSWU = 0x10; // Timer D Software Update
    static constexpr uint32_t CR2_TCSWU = 0x8; // Timer C Software Update
    static constexpr uint32_t CR2_TBSWU = 0x4; // Timer B Software Update
    static constexpr uint32_t CR2_TASWU = 0x2; // Timer A Software update
    static constexpr uint32_t CR2_MSWU = 0x1; // Master Timer Software update

    static constexpr uint32_t ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ISR_BMPER = 0x20000; // Burst mode Period Interrupt Flag
    static constexpr uint32_t ISR_DLLRDY = 0x10000; // DLL Ready Interrupt Flag
    static constexpr uint32_t ISR_SYSFLT = 0x20; // System Fault Interrupt Flag
    static constexpr uint32_t ISR_FLT5 = 0x10; // Fault 5 Interrupt Flag
    static constexpr uint32_t ISR_FLT4 = 0x8; // Fault 4 Interrupt Flag
    static constexpr uint32_t ISR_FLT3 = 0x4; // Fault 3 Interrupt Flag
    static constexpr uint32_t ISR_FLT2 = 0x2; // Fault 2 Interrupt Flag
    static constexpr uint32_t ISR_FLT1 = 0x1; // Fault 1 Interrupt Flag

    static constexpr uint32_t ICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ICR_BMPERC = 0x20000; // Burst mode period flag Clear
    static constexpr uint32_t ICR_DLLRDYC = 0x10000; // DLL Ready Interrupt flag Clear
    static constexpr uint32_t ICR_SYSFLTC = 0x20; // System Fault Interrupt Flag Clear
    static constexpr uint32_t ICR_FLT5C = 0x10; // Fault 5 Interrupt Flag Clear
    static constexpr uint32_t ICR_FLT4C = 0x8; // Fault 4 Interrupt Flag Clear
    static constexpr uint32_t ICR_FLT3C = 0x4; // Fault 3 Interrupt Flag Clear
    static constexpr uint32_t ICR_FLT2C = 0x2; // Fault 2 Interrupt Flag Clear
    static constexpr uint32_t ICR_FLT1C = 0x1; // Fault 1 Interrupt Flag Clear

    static constexpr uint32_t IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IER_BMPERIE = 0x20000; // Burst mode period Interrupt Enable
    static constexpr uint32_t IER_DLLRDYIE = 0x10000; // DLL Ready Interrupt Enable
    static constexpr uint32_t IER_SYSFLTE = 0x20; // System Fault Interrupt Enable
    static constexpr uint32_t IER_FLT5IE = 0x10; // Fault 5 Interrupt Enable
    static constexpr uint32_t IER_FLT4IE = 0x8; // Fault 4 Interrupt Enable
    static constexpr uint32_t IER_FLT3IE = 0x4; // Fault 3 Interrupt Enable
    static constexpr uint32_t IER_FLT2IE = 0x2; // Fault 2 Interrupt Enable
    static constexpr uint32_t IER_FLT1IE = 0x1; // Fault 1 Interrupt Enable

    static constexpr uint32_t OENR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OENR_TE2OEN = 0x200; // Timer E Output 2 Enable
    static constexpr uint32_t OENR_TE1OEN = 0x100; // Timer E Output 1 Enable
    static constexpr uint32_t OENR_TD2OEN = 0x80; // Timer D Output 2 Enable
    static constexpr uint32_t OENR_TD1OEN = 0x40; // Timer D Output 1 Enable
    static constexpr uint32_t OENR_TC2OEN = 0x20; // Timer C Output 2 Enable
    static constexpr uint32_t OENR_TC1OEN = 0x10; // Timer C Output 1 Enable
    static constexpr uint32_t OENR_TB2OEN = 0x8; // Timer B Output 2 Enable
    static constexpr uint32_t OENR_TB1OEN = 0x4; // Timer B Output 1 Enable
    static constexpr uint32_t OENR_TA2OEN = 0x2; // Timer A Output 2 Enable
    static constexpr uint32_t OENR_TA1OEN = 0x1; // Timer A Output 1 Enable

    static constexpr uint32_t DISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DISR_TE2ODIS = 0x200; // TE2ODIS
    static constexpr uint32_t DISR_TE1ODIS = 0x100; // TE1ODIS
    static constexpr uint32_t DISR_TD2ODIS = 0x80; // TD2ODIS
    static constexpr uint32_t DISR_TD1ODIS = 0x40; // TD1ODIS
    static constexpr uint32_t DISR_TC2ODIS = 0x20; // TC2ODIS
    static constexpr uint32_t DISR_TC1ODIS = 0x10; // TC1ODIS
    static constexpr uint32_t DISR_TB2ODIS = 0x8; // TB2ODIS
    static constexpr uint32_t DISR_TB1ODIS = 0x4; // TB1ODIS
    static constexpr uint32_t DISR_TA2ODIS = 0x2; // TA2ODIS
    static constexpr uint32_t DISR_TA1ODIS = 0x1; // TA1ODIS

    static constexpr uint32_t ODSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ODSR_TE2ODS = 0x200; // Timer E Output 2 disable status
    static constexpr uint32_t ODSR_TE1ODS = 0x100; // Timer E Output 1 disable status
    static constexpr uint32_t ODSR_TD2ODS = 0x80; // Timer D Output 2 disable status
    static constexpr uint32_t ODSR_TD1ODS = 0x40; // Timer D Output 1 disable status
    static constexpr uint32_t ODSR_TC2ODS = 0x20; // Timer C Output 2 disable status
    static constexpr uint32_t ODSR_TC1ODS = 0x10; // Timer C Output 1 disable status
    static constexpr uint32_t ODSR_TB2ODS = 0x8; // Timer B Output 2 disable status
    static constexpr uint32_t ODSR_TB1ODS = 0x4; // Timer B Output 1 disable status
    static constexpr uint32_t ODSR_TA2ODS = 0x2; // Timer A Output 2 disable status
    static constexpr uint32_t ODSR_TA1ODS = 0x1; // Timer A Output 1 disable status

    static constexpr uint32_t BMCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BMCR_BMSTAT = 0x80000000; // Burst Mode Status
    static constexpr uint32_t BMCR_TEBM = 0x200000; // Timer E Burst Mode
    static constexpr uint32_t BMCR_TDBM = 0x100000; // Timer D Burst Mode
    static constexpr uint32_t BMCR_TCBM = 0x80000; // Timer C Burst Mode
    static constexpr uint32_t BMCR_TBBM = 0x40000; // Timer B Burst Mode
    static constexpr uint32_t BMCR_TABM = 0x20000; // Timer A Burst Mode
    static constexpr uint32_t BMCR_MTBM = 0x10000; // Master Timer Burst Mode
    static constexpr uint32_t BMCR_BMPREN = 0x400; // Burst Mode Preload Enable
    typedef bit_field_t<6, 0xf> BMCR_BMPRSC; // Burst Mode Prescaler
    typedef bit_field_t<2, 0xf> BMCR_BMCLK; // Burst Mode Clock source
    static constexpr uint32_t BMCR_BMOM = 0x2; // Burst Mode operating mode
    static constexpr uint32_t BMCR_BME = 0x1; // Burst Mode enable

    static constexpr uint32_t BMTRG_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BMTRG_OCHPEV = 0x80000000; // OCHPEV
    static constexpr uint32_t BMTRG_TECMP2 = 0x4000000; // TECMP2
    static constexpr uint32_t BMTRG_TECMP1 = 0x2000000; // TECMP1
    static constexpr uint32_t BMTRG_TEREP = 0x1000000; // TEREP
    static constexpr uint32_t BMTRG_TERST = 0x800000; // TERST
    static constexpr uint32_t BMTRG_TDCMP2 = 0x400000; // TDCMP2
    static constexpr uint32_t BMTRG_TDCMP1 = 0x200000; // TDCMP1
    static constexpr uint32_t BMTRG_TDREP = 0x100000; // TDREP
    static constexpr uint32_t BMTRG_TDRST = 0x80000; // TDRST
    static constexpr uint32_t BMTRG_TCCMP2 = 0x40000; // TCCMP2
    static constexpr uint32_t BMTRG_TCCMP1 = 0x20000; // TCCMP1
    static constexpr uint32_t BMTRG_TCREP = 0x10000; // TCREP
    static constexpr uint32_t BMTRG_TCRST = 0x8000; // TCRST
    static constexpr uint32_t BMTRG_TBCMP2 = 0x4000; // TBCMP2
    static constexpr uint32_t BMTRG_TBCMP1 = 0x2000; // TBCMP1
    static constexpr uint32_t BMTRG_TBREP = 0x1000; // TBREP
    static constexpr uint32_t BMTRG_TBRST = 0x800; // TBRST
    static constexpr uint32_t BMTRG_TACMP2 = 0x400; // TACMP2
    static constexpr uint32_t BMTRG_TACMP1 = 0x200; // TACMP1
    static constexpr uint32_t BMTRG_TAREP = 0x100; // TAREP
    static constexpr uint32_t BMTRG_TARST = 0x80; // TARST
    static constexpr uint32_t BMTRG_MSTCMP4 = 0x40; // MSTCMP4
    static constexpr uint32_t BMTRG_MSTCMP3 = 0x20; // MSTCMP3
    static constexpr uint32_t BMTRG_MSTCMP2 = 0x10; // MSTCMP2
    static constexpr uint32_t BMTRG_MSTCMP1 = 0x8; // MSTCMP1
    static constexpr uint32_t BMTRG_MSTREP = 0x4; // MSTREP
    static constexpr uint32_t BMTRG_MSTRST = 0x2; // MSTRST
    static constexpr uint32_t BMTRG_SW = 0x1; // SW

    static constexpr uint32_t BMCMPR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> BMCMPR6_BMCMP; // BMCMP

    static constexpr uint32_t BMPER_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> BMPER_BMPER; // Burst mode Period

    static constexpr uint32_t EECR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t EECR1_EE5FAST = 0x20000000; // External Event 5 Fast mode
    typedef bit_field_t<27, 0x3> EECR1_EE5SNS; // External Event 5 Sensitivity
    static constexpr uint32_t EECR1_EE5POL = 0x4000000; // External Event 5 Polarity
    typedef bit_field_t<24, 0x3> EECR1_EE5SRC; // External Event 5 Source
    static constexpr uint32_t EECR1_EE4FAST = 0x800000; // External Event 4 Fast mode
    typedef bit_field_t<21, 0x3> EECR1_EE4SNS; // External Event 4 Sensitivity
    static constexpr uint32_t EECR1_EE4POL = 0x100000; // External Event 4 Polarity
    typedef bit_field_t<18, 0x3> EECR1_EE4SRC; // External Event 4 Source
    static constexpr uint32_t EECR1_EE3FAST = 0x20000; // External Event 3 Fast mode
    typedef bit_field_t<15, 0x3> EECR1_EE3SNS; // External Event 3 Sensitivity
    static constexpr uint32_t EECR1_EE3POL = 0x4000; // External Event 3 Polarity
    typedef bit_field_t<12, 0x3> EECR1_EE3SRC; // External Event 3 Source
    static constexpr uint32_t EECR1_EE2FAST = 0x800; // External Event 2 Fast mode
    typedef bit_field_t<9, 0x3> EECR1_EE2SNS; // External Event 2 Sensitivity
    static constexpr uint32_t EECR1_EE2POL = 0x100; // External Event 2 Polarity
    typedef bit_field_t<6, 0x3> EECR1_EE2SRC; // External Event 2 Source
    static constexpr uint32_t EECR1_EE1FAST = 0x20; // External Event 1 Fast mode
    typedef bit_field_t<3, 0x3> EECR1_EE1SNS; // External Event 1 Sensitivity
    static constexpr uint32_t EECR1_EE1POL = 0x4; // External Event 1 Polarity
    typedef bit_field_t<0, 0x3> EECR1_EE1SRC; // External Event 1 Source

    static constexpr uint32_t EECR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<27, 0x3> EECR2_EE10SNS; // External Event 10 Sensitivity
    static constexpr uint32_t EECR2_EE10POL = 0x4000000; // External Event 10 Polarity
    typedef bit_field_t<24, 0x3> EECR2_EE10SRC; // External Event 10 Source
    typedef bit_field_t<21, 0x3> EECR2_EE9SNS; // External Event 9 Sensitivity
    static constexpr uint32_t EECR2_EE9POL = 0x100000; // External Event 9 Polarity
    typedef bit_field_t<18, 0x3> EECR2_EE9SRC; // External Event 9 Source
    typedef bit_field_t<15, 0x3> EECR2_EE8SNS; // External Event 8 Sensitivity
    static constexpr uint32_t EECR2_EE8POL = 0x4000; // External Event 8 Polarity
    typedef bit_field_t<12, 0x3> EECR2_EE8SRC; // External Event 8 Source
    typedef bit_field_t<9, 0x3> EECR2_EE7SNS; // External Event 7 Sensitivity
    static constexpr uint32_t EECR2_EE7POL = 0x100; // External Event 7 Polarity
    typedef bit_field_t<6, 0x3> EECR2_EE7SRC; // External Event 7 Source
    typedef bit_field_t<3, 0x3> EECR2_EE6SNS; // External Event 6 Sensitivity
    static constexpr uint32_t EECR2_EE6POL = 0x4; // External Event 6 Polarity
    typedef bit_field_t<0, 0x3> EECR2_EE6SRC; // External Event 6 Source

    static constexpr uint32_t EECR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<27, 0x3> EECR3_EE10SNS; // EE10SNS
    static constexpr uint32_t EECR3_EE10POL = 0x4000000; // EE10POL
    typedef bit_field_t<24, 0x3> EECR3_EE10SRC; // EE10SRC
    typedef bit_field_t<21, 0x3> EECR3_EE9SNS; // EE9SNS
    static constexpr uint32_t EECR3_EE9POL = 0x100000; // EE9POL
    typedef bit_field_t<18, 0x3> EECR3_EE9SRC; // EE9SRC
    typedef bit_field_t<15, 0x3> EECR3_EE8SNS; // EE8SNS
    static constexpr uint32_t EECR3_EE8POL = 0x4000; // EE8POL
    typedef bit_field_t<12, 0x3> EECR3_EE8SRC; // EE8SRC
    typedef bit_field_t<9, 0x3> EECR3_EE7SNS; // EE7SNS
    static constexpr uint32_t EECR3_EE7POL = 0x100; // EE7POL
    typedef bit_field_t<6, 0x3> EECR3_EE7SRC; // EE7SRC
    typedef bit_field_t<3, 0x3> EECR3_EE6SNS; // EE6SNS
    static constexpr uint32_t EECR3_EE6POL = 0x4; // EE6POL
    typedef bit_field_t<0, 0x3> EECR3_EE6SRC; // EE6SRC

    static constexpr uint32_t ADC1R_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ADC1R_AD1TEPER = 0x80000000; // ADC trigger 1 on Timer E Period
    static constexpr uint32_t ADC1R_AD1TEC4 = 0x40000000; // ADC trigger 1 on Timer E compare 4
    static constexpr uint32_t ADC1R_AD1TEC3 = 0x20000000; // ADC trigger 1 on Timer E compare 3
    static constexpr uint32_t ADC1R_AD1TEC2 = 0x10000000; // ADC trigger 1 on Timer E compare 2
    static constexpr uint32_t ADC1R_AD1TDPER = 0x8000000; // ADC trigger 1 on Timer D Period
    static constexpr uint32_t ADC1R_AD1TDC4 = 0x4000000; // ADC trigger 1 on Timer D compare 4
    static constexpr uint32_t ADC1R_AD1TDC3 = 0x2000000; // ADC trigger 1 on Timer D compare 3
    static constexpr uint32_t ADC1R_AD1TDC2 = 0x1000000; // ADC trigger 1 on Timer D compare 2
    static constexpr uint32_t ADC1R_AD1TCPER = 0x800000; // ADC trigger 1 on Timer C Period
    static constexpr uint32_t ADC1R_AD1TCC4 = 0x400000; // ADC trigger 1 on Timer C compare 4
    static constexpr uint32_t ADC1R_AD1TCC3 = 0x200000; // ADC trigger 1 on Timer C compare 3
    static constexpr uint32_t ADC1R_AD1TCC2 = 0x100000; // ADC trigger 1 on Timer C compare 2
    static constexpr uint32_t ADC1R_AD1TBRST = 0x80000; // ADC trigger 1 on Timer B Reset
    static constexpr uint32_t ADC1R_AD1TBPER = 0x40000; // ADC trigger 1 on Timer B Period
    static constexpr uint32_t ADC1R_AD1TBC4 = 0x20000; // ADC trigger 1 on Timer B compare 4
    static constexpr uint32_t ADC1R_AD1TBC3 = 0x10000; // ADC trigger 1 on Timer B compare 3
    static constexpr uint32_t ADC1R_AD1TBC2 = 0x8000; // ADC trigger 1 on Timer B compare 2
    static constexpr uint32_t ADC1R_AD1TARST = 0x4000; // ADC trigger 1 on Timer A Reset
    static constexpr uint32_t ADC1R_AD1TAPER = 0x2000; // ADC trigger 1 on Timer A Period
    static constexpr uint32_t ADC1R_AD1TAC4 = 0x1000; // ADC trigger 1 on Timer A compare 4
    static constexpr uint32_t ADC1R_AD1TAC3 = 0x800; // ADC trigger 1 on Timer A compare 3
    static constexpr uint32_t ADC1R_AD1TAC2 = 0x400; // ADC trigger 1 on Timer A compare 2
    static constexpr uint32_t ADC1R_AD1EEV5 = 0x200; // ADC trigger 1 on External Event 5
    static constexpr uint32_t ADC1R_AD1EEV4 = 0x100; // ADC trigger 1 on External Event 4
    static constexpr uint32_t ADC1R_AD1EEV3 = 0x80; // ADC trigger 1 on External Event 3
    static constexpr uint32_t ADC1R_AD1EEV2 = 0x40; // ADC trigger 1 on External Event 2
    static constexpr uint32_t ADC1R_AD1EEV1 = 0x20; // ADC trigger 1 on External Event 1
    static constexpr uint32_t ADC1R_AD1MPER = 0x10; // ADC trigger 1 on Master Period
    static constexpr uint32_t ADC1R_AD1MC4 = 0x8; // ADC trigger 1 on Master Compare 4
    static constexpr uint32_t ADC1R_AD1MC3 = 0x4; // ADC trigger 1 on Master Compare 3
    static constexpr uint32_t ADC1R_AD1MC2 = 0x2; // ADC trigger 1 on Master Compare 2
    static constexpr uint32_t ADC1R_AD1MC1 = 0x1; // ADC trigger 1 on Master Compare 1

    static constexpr uint32_t ADC2R_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ADC2R_AD2TERST = 0x80000000; // ADC trigger 2 on Timer E Reset
    static constexpr uint32_t ADC2R_AD2TEC4 = 0x40000000; // ADC trigger 2 on Timer E compare 4
    static constexpr uint32_t ADC2R_AD2TEC3 = 0x20000000; // ADC trigger 2 on Timer E compare 3
    static constexpr uint32_t ADC2R_AD2TEC2 = 0x10000000; // ADC trigger 2 on Timer E compare 2
    static constexpr uint32_t ADC2R_AD2TDRST = 0x8000000; // ADC trigger 2 on Timer D Reset
    static constexpr uint32_t ADC2R_AD2TDPER = 0x4000000; // ADC trigger 2 on Timer D Period
    static constexpr uint32_t ADC2R_AD2TDC4 = 0x2000000; // ADC trigger 2 on Timer D compare 4
    static constexpr uint32_t ADC2R_AD2TDC3 = 0x1000000; // ADC trigger 2 on Timer D compare 3
    static constexpr uint32_t ADC2R_AD2TDC2 = 0x800000; // ADC trigger 2 on Timer D compare 2
    static constexpr uint32_t ADC2R_AD2TCRST = 0x400000; // ADC trigger 2 on Timer C Reset
    static constexpr uint32_t ADC2R_AD2TCPER = 0x200000; // ADC trigger 2 on Timer C Period
    static constexpr uint32_t ADC2R_AD2TCC4 = 0x100000; // ADC trigger 2 on Timer C compare 4
    static constexpr uint32_t ADC2R_AD2TCC3 = 0x80000; // ADC trigger 2 on Timer C compare 3
    static constexpr uint32_t ADC2R_AD2TCC2 = 0x40000; // ADC trigger 2 on Timer C compare 2
    static constexpr uint32_t ADC2R_AD2TBPER = 0x20000; // ADC trigger 2 on Timer B Period
    static constexpr uint32_t ADC2R_AD2TBC4 = 0x10000; // ADC trigger 2 on Timer B compare 4
    static constexpr uint32_t ADC2R_AD2TBC3 = 0x8000; // ADC trigger 2 on Timer B compare 3
    static constexpr uint32_t ADC2R_AD2TBC2 = 0x4000; // ADC trigger 2 on Timer B compare 2
    static constexpr uint32_t ADC2R_AD2TAPER = 0x2000; // ADC trigger 2 on Timer A Period
    static constexpr uint32_t ADC2R_AD2TAC4 = 0x1000; // ADC trigger 2 on Timer A compare 4
    static constexpr uint32_t ADC2R_AD2TAC3 = 0x800; // ADC trigger 2 on Timer A compare 3
    static constexpr uint32_t ADC2R_AD2TAC2 = 0x400; // ADC trigger 2 on Timer A compare 2
    static constexpr uint32_t ADC2R_AD2EEV10 = 0x200; // ADC trigger 2 on External Event 10
    static constexpr uint32_t ADC2R_AD2EEV9 = 0x100; // ADC trigger 2 on External Event 9
    static constexpr uint32_t ADC2R_AD2EEV8 = 0x80; // ADC trigger 2 on External Event 8
    static constexpr uint32_t ADC2R_AD2EEV7 = 0x40; // ADC trigger 2 on External Event 7
    static constexpr uint32_t ADC2R_AD2EEV6 = 0x20; // ADC trigger 2 on External Event 6
    static constexpr uint32_t ADC2R_AD2MPER = 0x10; // ADC trigger 2 on Master Period
    static constexpr uint32_t ADC2R_AD2MC4 = 0x8; // ADC trigger 2 on Master Compare 4
    static constexpr uint32_t ADC2R_AD2MC3 = 0x4; // ADC trigger 2 on Master Compare 3
    static constexpr uint32_t ADC2R_AD2MC2 = 0x2; // ADC trigger 2 on Master Compare 2
    static constexpr uint32_t ADC2R_AD2MC1 = 0x1; // ADC trigger 2 on Master Compare 1

    static constexpr uint32_t ADC3R_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ADC3R_AD1TEPER = 0x80000000; // AD1TEPER
    static constexpr uint32_t ADC3R_AD1TEC4 = 0x40000000; // AD1TEC4
    static constexpr uint32_t ADC3R_AD1TEC3 = 0x20000000; // AD1TEC3
    static constexpr uint32_t ADC3R_AD1TEC2 = 0x10000000; // AD1TEC2
    static constexpr uint32_t ADC3R_AD1TDPER = 0x8000000; // AD1TDPER
    static constexpr uint32_t ADC3R_AD1TDC4 = 0x4000000; // AD1TDC4
    static constexpr uint32_t ADC3R_AD1TDC3 = 0x2000000; // AD1TDC3
    static constexpr uint32_t ADC3R_AD1TDC2 = 0x1000000; // AD1TDC2
    static constexpr uint32_t ADC3R_AD1TCPER = 0x800000; // AD1TCPER
    static constexpr uint32_t ADC3R_AD1TCC4 = 0x400000; // AD1TCC4
    static constexpr uint32_t ADC3R_AD1TCC3 = 0x200000; // AD1TCC3
    static constexpr uint32_t ADC3R_AD1TCC2 = 0x100000; // AD1TCC2
    static constexpr uint32_t ADC3R_AD1TBRST = 0x80000; // AD1TBRST
    static constexpr uint32_t ADC3R_AD1TBPER = 0x40000; // AD1TBPER
    static constexpr uint32_t ADC3R_AD1TBC4 = 0x20000; // AD1TBC4
    static constexpr uint32_t ADC3R_AD1TBC3 = 0x10000; // AD1TBC3
    static constexpr uint32_t ADC3R_AD1TBC2 = 0x8000; // AD1TBC2
    static constexpr uint32_t ADC3R_AD1TARST = 0x4000; // AD1TARST
    static constexpr uint32_t ADC3R_AD1TAPER = 0x2000; // AD1TAPER
    static constexpr uint32_t ADC3R_AD1TAC4 = 0x1000; // AD1TAC4
    static constexpr uint32_t ADC3R_AD1TAC3 = 0x800; // AD1TAC3
    static constexpr uint32_t ADC3R_AD1TAC2 = 0x400; // AD1TAC2
    static constexpr uint32_t ADC3R_AD1EEV5 = 0x200; // AD1EEV5
    static constexpr uint32_t ADC3R_AD1EEV4 = 0x100; // AD1EEV4
    static constexpr uint32_t ADC3R_AD1EEV3 = 0x80; // AD1EEV3
    static constexpr uint32_t ADC3R_AD1EEV2 = 0x40; // AD1EEV2
    static constexpr uint32_t ADC3R_AD1EEV1 = 0x20; // AD1EEV1
    static constexpr uint32_t ADC3R_AD1MPER = 0x10; // AD1MPER
    static constexpr uint32_t ADC3R_AD1MC4 = 0x8; // AD1MC4
    static constexpr uint32_t ADC3R_AD1MC3 = 0x4; // AD1MC3
    static constexpr uint32_t ADC3R_AD1MC2 = 0x2; // AD1MC2
    static constexpr uint32_t ADC3R_AD1MC1 = 0x1; // AD1MC1

    static constexpr uint32_t ADC4R_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ADC4R_AD2TERST = 0x80000000; // AD2TERST
    static constexpr uint32_t ADC4R_AD2TEC4 = 0x40000000; // AD2TEC4
    static constexpr uint32_t ADC4R_AD2TEC3 = 0x20000000; // AD2TEC3
    static constexpr uint32_t ADC4R_AD2TEC2 = 0x10000000; // AD2TEC2
    static constexpr uint32_t ADC4R_AD2TDRST = 0x8000000; // AD2TDRST
    static constexpr uint32_t ADC4R_AD2TDPER = 0x4000000; // AD2TDPER
    static constexpr uint32_t ADC4R_AD2TDC4 = 0x2000000; // AD2TDC4
    static constexpr uint32_t ADC4R_AD2TDC3 = 0x1000000; // AD2TDC3
    static constexpr uint32_t ADC4R_AD2TDC2 = 0x800000; // AD2TDC2
    static constexpr uint32_t ADC4R_AD2TCRST = 0x400000; // AD2TCRST
    static constexpr uint32_t ADC4R_AD2TCPER = 0x200000; // AD2TCPER
    static constexpr uint32_t ADC4R_AD2TCC4 = 0x100000; // AD2TCC4
    static constexpr uint32_t ADC4R_AD2TCC3 = 0x80000; // AD2TCC3
    static constexpr uint32_t ADC4R_AD2TCC2 = 0x40000; // AD2TCC2
    static constexpr uint32_t ADC4R_AD2TBPER = 0x20000; // AD2TBPER
    static constexpr uint32_t ADC4R_AD2TBC4 = 0x10000; // AD2TBC4
    static constexpr uint32_t ADC4R_AD2TBC3 = 0x8000; // AD2TBC3
    static constexpr uint32_t ADC4R_AD2TBC2 = 0x4000; // AD2TBC2
    static constexpr uint32_t ADC4R_AD2TAPER = 0x2000; // AD2TAPER
    static constexpr uint32_t ADC4R_AD2TAC4 = 0x1000; // AD2TAC4
    static constexpr uint32_t ADC4R_AD2TAC3 = 0x800; // AD2TAC3
    static constexpr uint32_t ADC4R_AD2TAC2 = 0x400; // AD2TAC2
    static constexpr uint32_t ADC4R_AD2EEV10 = 0x200; // AD2EEV10
    static constexpr uint32_t ADC4R_AD2EEV9 = 0x100; // AD2EEV9
    static constexpr uint32_t ADC4R_AD2EEV8 = 0x80; // AD2EEV8
    static constexpr uint32_t ADC4R_AD2EEV7 = 0x40; // AD2EEV7
    static constexpr uint32_t ADC4R_AD2EEV6 = 0x20; // AD2EEV6
    static constexpr uint32_t ADC4R_AD2MPER = 0x10; // AD2MPER
    static constexpr uint32_t ADC4R_AD2MC4 = 0x8; // AD2MC4
    static constexpr uint32_t ADC4R_AD2MC3 = 0x4; // AD2MC3
    static constexpr uint32_t ADC4R_AD2MC2 = 0x2; // AD2MC2
    static constexpr uint32_t ADC4R_AD2MC1 = 0x1; // AD2MC1

    static constexpr uint32_t DLLCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<2, 0x3> DLLCR_CALRTE; // DLL Calibration rate
    static constexpr uint32_t DLLCR_CALEN = 0x2; // DLL Calibration Enable
    static constexpr uint32_t DLLCR_CAL = 0x1; // DLL Calibration Start

    static constexpr uint32_t FLTINR1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FLTINR1_FLT4LCK = 0x80000000; // FLT4LCK
    typedef bit_field_t<27, 0xf> FLTINR1_FLT4F; // FLT4F
    static constexpr uint32_t FLTINR1_FLT4SRC = 0x4000000; // FLT4SRC
    static constexpr uint32_t FLTINR1_FLT4P = 0x2000000; // FLT4P
    static constexpr uint32_t FLTINR1_FLT4E = 0x1000000; // FLT4E
    static constexpr uint32_t FLTINR1_FLT3LCK = 0x800000; // FLT3LCK
    typedef bit_field_t<19, 0xf> FLTINR1_FLT3F; // FLT3F
    static constexpr uint32_t FLTINR1_FLT3SRC = 0x40000; // FLT3SRC
    static constexpr uint32_t FLTINR1_FLT3P = 0x20000; // FLT3P
    static constexpr uint32_t FLTINR1_FLT3E = 0x10000; // FLT3E
    static constexpr uint32_t FLTINR1_FLT2LCK = 0x8000; // FLT2LCK
    typedef bit_field_t<11, 0xf> FLTINR1_FLT2F; // FLT2F
    static constexpr uint32_t FLTINR1_FLT2SRC = 0x400; // FLT2SRC
    static constexpr uint32_t FLTINR1_FLT2P = 0x200; // FLT2P
    static constexpr uint32_t FLTINR1_FLT2E = 0x100; // FLT2E
    static constexpr uint32_t FLTINR1_FLT1LCK = 0x80; // FLT1LCK
    typedef bit_field_t<3, 0xf> FLTINR1_FLT1F; // FLT1F
    static constexpr uint32_t FLTINR1_FLT1SRC = 0x4; // FLT1SRC
    static constexpr uint32_t FLTINR1_FLT1P = 0x2; // FLT1P
    static constexpr uint32_t FLTINR1_FLT1E = 0x1; // FLT1E

    static constexpr uint32_t FLTINR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0x3> FLTINR2_FLTSD; // FLTSD
    static constexpr uint32_t FLTINR2_FLT5LCK = 0x80; // FLT5LCK
    typedef bit_field_t<3, 0xf> FLTINR2_FLT5F; // FLT5F
    static constexpr uint32_t FLTINR2_FLT5SRC = 0x4; // FLT5SRC
    static constexpr uint32_t FLTINR2_FLT5P = 0x2; // FLT5P
    static constexpr uint32_t FLTINR2_FLT5E = 0x1; // FLT5E

    static constexpr uint32_t BDMUPDR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BDMUPDR_MCMP4 = 0x200; // MCMP4
    static constexpr uint32_t BDMUPDR_MCMP3 = 0x100; // MCMP3
    static constexpr uint32_t BDMUPDR_MCMP2 = 0x80; // MCMP2
    static constexpr uint32_t BDMUPDR_MCMP1 = 0x40; // MCMP1
    static constexpr uint32_t BDMUPDR_MREP = 0x20; // MREP
    static constexpr uint32_t BDMUPDR_MPER = 0x10; // MPER
    static constexpr uint32_t BDMUPDR_MCNT = 0x8; // MCNT
    static constexpr uint32_t BDMUPDR_MDIER = 0x4; // MDIER
    static constexpr uint32_t BDMUPDR_MICR = 0x2; // MICR
    static constexpr uint32_t BDMUPDR_MCR = 0x1; // MCR

    static constexpr uint32_t BDTXUPR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t BDTXUPR_TIMXFLTR = 0x100000; // HRTIM_FLTxR register update enable
    static constexpr uint32_t BDTXUPR_TIMXOUTR = 0x80000; // HRTIM_OUTxR register update enable
    static constexpr uint32_t BDTXUPR_TIMXCHPR = 0x40000; // HRTIM_CHPxR register update enable
    static constexpr uint32_t BDTXUPR_TIMXRSTR = 0x20000; // HRTIM_RSTxR register update enable
    static constexpr uint32_t BDTXUPR_TIMXEEFR2 = 0x10000; // HRTIM_EEFxR2 register update enable
    static constexpr uint32_t BDTXUPR_TIMXEEFR1 = 0x8000; // HRTIM_EEFxR1 register update enable
    static constexpr uint32_t BDTXUPR_TIMXRST2R = 0x4000; // HRTIM_RST2xR register update enable
    static constexpr uint32_t BDTXUPR_TIMXSET2R = 0x2000; // HRTIM_SET2xR register update enable
    static constexpr uint32_t BDTXUPR_TIMXRST1R = 0x1000; // HRTIM_RST1xR register update enable
    static constexpr uint32_t BDTXUPR_TIMXSET1R = 0x800; // HRTIM_SET1xR register update enable
    static constexpr uint32_t BDTXUPR_TIMX_DTXR = 0x400; // HRTIM_DTxR register update enable
    static constexpr uint32_t BDTXUPR_TIMXCMP4 = 0x200; // HRTIM_CMP4xR register update enable
    static constexpr uint32_t BDTXUPR_TIMXCMP3 = 0x100; // HRTIM_CMP3xR register update enable
    static constexpr uint32_t BDTXUPR_TIMXCMP2 = 0x80; // HRTIM_CMP2xR register update enable
    static constexpr uint32_t BDTXUPR_TIMXCMP1 = 0x40; // HRTIM_CMP1xR register update enable
    static constexpr uint32_t BDTXUPR_TIMXREP = 0x20; // HRTIM_REPxR register update enable
    static constexpr uint32_t BDTXUPR_TIMXPER = 0x10; // HRTIM_PERxR register update enable
    static constexpr uint32_t BDTXUPR_TIMXCNT = 0x8; // HRTIM_CNTxR register update enable
    static constexpr uint32_t BDTXUPR_TIMXDIER = 0x4; // HRTIM_TIMxDIER register update enable
    static constexpr uint32_t BDTXUPR_TIMXICR = 0x2; // HRTIM_TIMxICR register update enable
    static constexpr uint32_t BDTXUPR_TIMXCR = 0x1; // HRTIM_TIMxCR register update enable

    static constexpr uint32_t BDMADR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> BDMADR_BDMADR; // Burst DMA Data register
};

// HRTIM_MASTER: High Resolution Timer: Master Timers

struct stm32h742x_hrtim_master_t
{
    volatile uint32_t MCR; // Master Timer Control Register
    volatile uint32_t MISR; // Master Timer Interrupt Status Register
    volatile uint32_t MICR; // Master Timer Interrupt Clear Register
    volatile uint32_t MDIER4; // MDIER4
    volatile uint32_t MCNTR; // Master Timer Counter Register
    volatile uint32_t MPER; // Master Timer Period Register
    volatile uint32_t MREP; // Master Timer Repetition Register
    volatile uint32_t MCMP1R; // Master Timer Compare 1 Register
    reserved_t<0x1> _0x20;
    volatile uint32_t MCMP2R; // Master Timer Compare 2 Register
    volatile uint32_t MCMP3R; // Master Timer Compare 3 Register
    volatile uint32_t MCMP4R; // Master Timer Compare 4 Register

    static constexpr uint32_t MCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<30, 0x3> MCR_BRSTDMA; // Burst DMA Update
    static constexpr uint32_t MCR_MREPU = 0x20000000; // Master Timer Repetition update
    static constexpr uint32_t MCR_PREEN = 0x8000000; // Preload enable
    typedef bit_field_t<25, 0x3> MCR_DACSYNC; // AC Synchronization
    static constexpr uint32_t MCR_TECEN = 0x200000; // Timer E counter enable
    static constexpr uint32_t MCR_TDCEN = 0x100000; // Timer D counter enable
    static constexpr uint32_t MCR_TCCEN = 0x80000; // Timer C counter enable
    static constexpr uint32_t MCR_TBCEN = 0x40000; // Timer B counter enable
    static constexpr uint32_t MCR_TACEN = 0x20000; // Timer A counter enable
    static constexpr uint32_t MCR_MCEN = 0x10000; // Master Counter enable
    typedef bit_field_t<14, 0x3> MCR_SYNC_SRC; // Synchronization source
    typedef bit_field_t<12, 0x3> MCR_SYNC_OUT; // Synchronization output
    static constexpr uint32_t MCR_SYNCSTRTM = 0x800; // Synchronization Starts Master
    static constexpr uint32_t MCR_SYNCRSTM = 0x400; // Synchronization Resets Master
    typedef bit_field_t<8, 0x3> MCR_SYNC_IN; // ynchronization input
    static constexpr uint32_t MCR_HALF = 0x20; // Half mode enable
    static constexpr uint32_t MCR_RETRIG = 0x10; // Master Re-triggerable mode
    static constexpr uint32_t MCR_CONT = 0x8; // Master Continuous mode
    typedef bit_field_t<0, 0x7> MCR_CK_PSC; // HRTIM Master Clock prescaler

    static constexpr uint32_t MISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MISR_MUPD = 0x40; // Master Update Interrupt Flag
    static constexpr uint32_t MISR_SYNC = 0x20; // Sync Input Interrupt Flag
    static constexpr uint32_t MISR_MREP = 0x10; // Master Repetition Interrupt Flag
    static constexpr uint32_t MISR_MCMP4 = 0x8; // Master Compare 4 Interrupt Flag
    static constexpr uint32_t MISR_MCMP3 = 0x4; // Master Compare 3 Interrupt Flag
    static constexpr uint32_t MISR_MCMP2 = 0x2; // Master Compare 2 Interrupt Flag
    static constexpr uint32_t MISR_MCMP1 = 0x1; // Master Compare 1 Interrupt Flag

    static constexpr uint32_t MICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MICR_MUPDC = 0x40; // Master update Interrupt flag clear
    static constexpr uint32_t MICR_SYNCC = 0x20; // Sync Input Interrupt flag clear
    static constexpr uint32_t MICR_MREPC = 0x10; // Repetition Interrupt flag clear
    static constexpr uint32_t MICR_MCMP4C = 0x8; // Master Compare 4 Interrupt flag clear
    static constexpr uint32_t MICR_MCMP3C = 0x4; // Master Compare 3 Interrupt flag clear
    static constexpr uint32_t MICR_MCMP2C = 0x2; // Master Compare 2 Interrupt flag clear
    static constexpr uint32_t MICR_MCMP1C = 0x1; // Master Compare 1 Interrupt flag clear

    static constexpr uint32_t MDIER4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MDIER4_MUPDDE = 0x400000; // MUPDDE
    static constexpr uint32_t MDIER4_SYNCDE = 0x200000; // SYNCDE
    static constexpr uint32_t MDIER4_MREPDE = 0x100000; // MREPDE
    static constexpr uint32_t MDIER4_MCMP4DE = 0x80000; // MCMP4DE
    static constexpr uint32_t MDIER4_MCMP3DE = 0x40000; // MCMP3DE
    static constexpr uint32_t MDIER4_MCMP2DE = 0x20000; // MCMP2DE
    static constexpr uint32_t MDIER4_MCMP1DE = 0x10000; // MCMP1DE
    static constexpr uint32_t MDIER4_MUPDIE = 0x40; // MUPDIE
    static constexpr uint32_t MDIER4_SYNCIE = 0x20; // SYNCIE
    static constexpr uint32_t MDIER4_MREPIE = 0x10; // MREPIE
    static constexpr uint32_t MDIER4_MCMP4IE = 0x8; // MCMP4IE
    static constexpr uint32_t MDIER4_MCMP3IE = 0x4; // MCMP3IE
    static constexpr uint32_t MDIER4_MCMP2IE = 0x2; // MCMP2IE
    static constexpr uint32_t MDIER4_MCMP1IE = 0x1; // MCMP1IE

    static constexpr uint32_t MCNTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MCNTR_MCNT; // Counter value

    static constexpr uint32_t MPER_RESET_VALUE = 0xffff; // Reset value
    typedef bit_field_t<0, 0xffff> MPER_MPER; // Master Timer Period value

    static constexpr uint32_t MREP_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> MREP_MREP; // Master Timer Repetition counter value

    static constexpr uint32_t MCMP1R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MCMP1R_MCMP1; // Master Timer Compare 1 value


    static constexpr uint32_t MCMP2R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MCMP2R_MCMP2; // Master Timer Compare 2 value

    static constexpr uint32_t MCMP3R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MCMP3R_MCMP3; // Master Timer Compare 3 value

    static constexpr uint32_t MCMP4R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> MCMP4R_MCMP4; // Master Timer Compare 4 value
};

// HRTIM_TIMA: High Resolution Timer: TIMA

struct stm32h742x_hrtim_tima_t
{
    volatile uint32_t TIMACR; // Timerx Control Register
    volatile uint32_t TIMAISR; // Timerx Interrupt Status Register
    volatile uint32_t TIMAICR; // Timerx Interrupt Clear Register
    volatile uint32_t TIMADIER5; // TIMxDIER5
    volatile uint32_t CNTAR; // Timerx Counter Register
    volatile uint32_t PERAR; // Timerx Period Register
    volatile uint32_t REPAR; // Timerx Repetition Register
    volatile uint32_t CMP1AR; // Timerx Compare 1 Register
    volatile uint32_t CMP1CAR; // Timerx Compare 1 Compound Register
    volatile uint32_t CMP2AR; // Timerx Compare 2 Register
    volatile uint32_t CMP3AR; // Timerx Compare 3 Register
    volatile uint32_t CMP4AR; // Timerx Compare 4 Register
    volatile uint32_t CPT1AR; // Timerx Capture 1 Register
    volatile uint32_t CPT2AR; // Timerx Capture 2 Register
    volatile uint32_t DTAR; // Timerx Deadtime Register
    volatile uint32_t SETA1R; // Timerx Output1 Set Register
    volatile uint32_t RSTA1R; // Timerx Output1 Reset Register
    volatile uint32_t SETA2R; // Timerx Output2 Set Register
    volatile uint32_t RSTA2R; // Timerx Output2 Reset Register
    volatile uint32_t EEFAR1; // Timerx External Event Filtering Register 1
    volatile uint32_t EEFAR2; // Timerx External Event Filtering Register 2
    volatile uint32_t RSTAR; // TimerA Reset Register
    volatile uint32_t CHPAR; // Timerx Chopper Register
    volatile uint32_t CPT1ACR; // Timerx Capture 2 Control Register
    volatile uint32_t CPT2ACR; // CPT2xCR
    volatile uint32_t OUTAR; // Timerx Output Register
    volatile uint32_t FLTAR; // Timerx Fault Register

    static constexpr uint32_t TIMACR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<28, 0xf> TIMACR_UPDGAT; // Update Gating
    static constexpr uint32_t TIMACR_PREEN = 0x8000000; // Preload enable
    typedef bit_field_t<25, 0x3> TIMACR_DACSYNC; // AC Synchronization
    static constexpr uint32_t TIMACR_MSTU = 0x1000000; // Master Timer update
    static constexpr uint32_t TIMACR_TEU = 0x800000; // TEU
    static constexpr uint32_t TIMACR_TDU = 0x400000; // TDU
    static constexpr uint32_t TIMACR_TCU = 0x200000; // TCU
    static constexpr uint32_t TIMACR_TBU = 0x100000; // TBU
    static constexpr uint32_t TIMACR_TXRSTU = 0x40000; // Timerx reset update
    static constexpr uint32_t TIMACR_TXREPU = 0x20000; // Timer x Repetition update
    typedef bit_field_t<14, 0x3> TIMACR_DELCMP4; // Delayed CMP4 mode
    typedef bit_field_t<12, 0x3> TIMACR_DELCMP2; // Delayed CMP2 mode
    static constexpr uint32_t TIMACR_SYNCSTRTX = 0x800; // Synchronization Starts Timer x
    static constexpr uint32_t TIMACR_SYNCRSTX = 0x400; // Synchronization Resets Timer x
    static constexpr uint32_t TIMACR_PSHPLL = 0x40; // Push-Pull mode enable
    static constexpr uint32_t TIMACR_HALF = 0x20; // Half mode enable
    static constexpr uint32_t TIMACR_RETRIG = 0x10; // Re-triggerable mode
    static constexpr uint32_t TIMACR_CONT = 0x8; // Continuous mode
    typedef bit_field_t<0, 0x7> TIMACR_CK_PSCX; // HRTIM Timer x Clock prescaler

    static constexpr uint32_t TIMAISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t TIMAISR_O2STAT = 0x80000; // Output 2 State
    static constexpr uint32_t TIMAISR_O1STAT = 0x40000; // Output 1 State
    static constexpr uint32_t TIMAISR_IPPSTAT = 0x20000; // Idle Push Pull Status
    static constexpr uint32_t TIMAISR_CPPSTAT = 0x10000; // Current Push Pull Status
    static constexpr uint32_t TIMAISR_DLYPRT = 0x4000; // Delayed Protection Flag
    static constexpr uint32_t TIMAISR_RST = 0x2000; // Reset Interrupt Flag
    static constexpr uint32_t TIMAISR_RSTX2 = 0x1000; // Output 2 Reset Interrupt Flag
    static constexpr uint32_t TIMAISR_SETX2 = 0x800; // Output 2 Set Interrupt Flag
    static constexpr uint32_t TIMAISR_RSTX1 = 0x400; // Output 1 Reset Interrupt Flag
    static constexpr uint32_t TIMAISR_SETX1 = 0x200; // Output 1 Set Interrupt Flag
    static constexpr uint32_t TIMAISR_CPT2 = 0x100; // Capture2 Interrupt Flag
    static constexpr uint32_t TIMAISR_CPT1 = 0x80; // Capture1 Interrupt Flag
    static constexpr uint32_t TIMAISR_UPD = 0x40; // Update Interrupt Flag
    static constexpr uint32_t TIMAISR_REP = 0x10; // Repetition Interrupt Flag
    static constexpr uint32_t TIMAISR_CMP4 = 0x8; // Compare 4 Interrupt Flag
    static constexpr uint32_t TIMAISR_CMP3 = 0x4; // Compare 3 Interrupt Flag
    static constexpr uint32_t TIMAISR_CMP2 = 0x2; // Compare 2 Interrupt Flag
    static constexpr uint32_t TIMAISR_CMP1 = 0x1; // Compare 1 Interrupt Flag

    static constexpr uint32_t TIMAICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t TIMAICR_DLYPRTC = 0x4000; // Delayed Protection Flag Clear
    static constexpr uint32_t TIMAICR_RSTC = 0x2000; // Reset Interrupt flag Clear
    static constexpr uint32_t TIMAICR_RSTX2C = 0x1000; // Output 2 Reset flag Clear
    static constexpr uint32_t TIMAICR_SET2XC = 0x800; // Output 2 Set flag Clear
    static constexpr uint32_t TIMAICR_RSTX1C = 0x400; // Output 1 Reset flag Clear
    static constexpr uint32_t TIMAICR_SET1XC = 0x200; // Output 1 Set flag Clear
    static constexpr uint32_t TIMAICR_CPT2C = 0x100; // Capture2 Interrupt flag Clear
    static constexpr uint32_t TIMAICR_CPT1C = 0x80; // Capture1 Interrupt flag Clear
    static constexpr uint32_t TIMAICR_UPDC = 0x40; // Update Interrupt flag Clear
    static constexpr uint32_t TIMAICR_REPC = 0x10; // Repetition Interrupt flag Clear
    static constexpr uint32_t TIMAICR_CMP4C = 0x8; // Compare 4 Interrupt flag Clear
    static constexpr uint32_t TIMAICR_CMP3C = 0x4; // Compare 3 Interrupt flag Clear
    static constexpr uint32_t TIMAICR_CMP2C = 0x2; // Compare 2 Interrupt flag Clear
    static constexpr uint32_t TIMAICR_CMP1C = 0x1; // Compare 1 Interrupt flag Clear

    static constexpr uint32_t TIMADIER5_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t TIMADIER5_DLYPRTDE = 0x40000000; // DLYPRTDE
    static constexpr uint32_t TIMADIER5_RSTDE = 0x20000000; // RSTDE
    static constexpr uint32_t TIMADIER5_RSTX2DE = 0x10000000; // RSTx2DE
    static constexpr uint32_t TIMADIER5_SETX2DE = 0x8000000; // SETx2DE
    static constexpr uint32_t TIMADIER5_RSTX1DE = 0x4000000; // RSTx1DE
    static constexpr uint32_t TIMADIER5_SET1XDE = 0x2000000; // SET1xDE
    static constexpr uint32_t TIMADIER5_CPT2DE = 0x1000000; // CPT2DE
    static constexpr uint32_t TIMADIER5_CPT1DE = 0x800000; // CPT1DE
    static constexpr uint32_t TIMADIER5_UPDDE = 0x400000; // UPDDE
    static constexpr uint32_t TIMADIER5_REPDE = 0x100000; // REPDE
    static constexpr uint32_t TIMADIER5_CMP4DE = 0x80000; // CMP4DE
    static constexpr uint32_t TIMADIER5_CMP3DE = 0x40000; // CMP3DE
    static constexpr uint32_t TIMADIER5_CMP2DE = 0x20000; // CMP2DE
    static constexpr uint32_t TIMADIER5_CMP1DE = 0x10000; // CMP1DE
    static constexpr uint32_t TIMADIER5_DLYPRTIE = 0x4000; // DLYPRTIE
    static constexpr uint32_t TIMADIER5_RSTIE = 0x2000; // RSTIE
    static constexpr uint32_t TIMADIER5_RSTX2IE = 0x1000; // RSTx2IE
    static constexpr uint32_t TIMADIER5_SETX2IE = 0x800; // SETx2IE
    static constexpr uint32_t TIMADIER5_RSTX1IE = 0x400; // RSTx1IE
    static constexpr uint32_t TIMADIER5_SET1XIE = 0x200; // SET1xIE
    static constexpr uint32_t TIMADIER5_CPT2IE = 0x100; // CPT2IE
    static constexpr uint32_t TIMADIER5_CPT1IE = 0x80; // CPT1IE
    static constexpr uint32_t TIMADIER5_UPDIE = 0x40; // UPDIE
    static constexpr uint32_t TIMADIER5_REPIE = 0x10; // REPIE
    static constexpr uint32_t TIMADIER5_CMP4IE = 0x8; // CMP4IE
    static constexpr uint32_t TIMADIER5_CMP3IE = 0x4; // CMP3IE
    static constexpr uint32_t TIMADIER5_CMP2IE = 0x2; // CMP2IE
    static constexpr uint32_t TIMADIER5_CMP1IE = 0x1; // CMP1IE

    static constexpr uint32_t CNTAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNTAR_CNTX; // Timerx Counter value

    static constexpr uint32_t PERAR_RESET_VALUE = 0xffff; // Reset value
    typedef bit_field_t<0, 0xffff> PERAR_PERX; // Timerx Period value

    static constexpr uint32_t REPAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> REPAR_REPX; // Timerx Repetition counter value

    static constexpr uint32_t CMP1AR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CMP1AR_CMP1X; // Timerx Compare 1 value

    static constexpr uint32_t CMP1CAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xff> CMP1CAR_REPX; // Timerx Repetition value (aliased from HRTIM_REPx register)
    typedef bit_field_t<0, 0xffff> CMP1CAR_CMP1X; // Timerx Compare 1 value

    static constexpr uint32_t CMP2AR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CMP2AR_CMP2X; // Timerx Compare 2 value

    static constexpr uint32_t CMP3AR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CMP3AR_CMP3X; // Timerx Compare 3 value

    static constexpr uint32_t CMP4AR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CMP4AR_CMP4X; // Timerx Compare 4 value

    static constexpr uint32_t CPT1AR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CPT1AR_CPT1X; // Timerx Capture 1 value

    static constexpr uint32_t CPT2AR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CPT2AR_CPT2X; // Timerx Capture 2 value

    static constexpr uint32_t DTAR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DTAR_DTFLKX = 0x80000000; // Deadtime Falling Lock
    static constexpr uint32_t DTAR_DTFSLKX = 0x40000000; // Deadtime Falling Sign Lock
    static constexpr uint32_t DTAR_SDTFX = 0x2000000; // Sign Deadtime Falling value
    typedef bit_field_t<16, 0x1ff> DTAR_DTFX; // Deadtime Falling value
    static constexpr uint32_t DTAR_DTRLKX = 0x8000; // Deadtime Rising Lock
    static constexpr uint32_t DTAR_DTRSLKX = 0x4000; // Deadtime Rising Sign Lock
    typedef bit_field_t<10, 0x7> DTAR_DTPRSC; // Deadtime Prescaler
    static constexpr uint32_t DTAR_SDTRX = 0x200; // Sign Deadtime Rising value
    typedef bit_field_t<0, 0x1ff> DTAR_DTRX; // Deadtime Rising value

    static constexpr uint32_t SETA1R_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SETA1R_UPDATE = 0x80000000; // Registers update (transfer preload to active)
    static constexpr uint32_t SETA1R_EXTEVNT10 = 0x40000000; // External Event 10
    static constexpr uint32_t SETA1R_EXTEVNT9 = 0x20000000; // External Event 9
    static constexpr uint32_t SETA1R_EXTEVNT8 = 0x10000000; // External Event 8
    static constexpr uint32_t SETA1R_EXTEVNT7 = 0x8000000; // External Event 7
    static constexpr uint32_t SETA1R_EXTEVNT6 = 0x4000000; // External Event 6
    static constexpr uint32_t SETA1R_EXTEVNT5 = 0x2000000; // External Event 5
    static constexpr uint32_t SETA1R_EXTEVNT4 = 0x1000000; // External Event 4
    static constexpr uint32_t SETA1R_EXTEVNT3 = 0x800000; // External Event 3
    static constexpr uint32_t SETA1R_EXTEVNT2 = 0x400000; // External Event 2
    static constexpr uint32_t SETA1R_EXTEVNT1 = 0x200000; // External Event 1
    static constexpr uint32_t SETA1R_TIMEVNT9 = 0x100000; // Timer Event 9
    static constexpr uint32_t SETA1R_TIMEVNT8 = 0x80000; // Timer Event 8
    static constexpr uint32_t SETA1R_TIMEVNT7 = 0x40000; // Timer Event 7
    static constexpr uint32_t SETA1R_TIMEVNT6 = 0x20000; // Timer Event 6
    static constexpr uint32_t SETA1R_TIMEVNT5 = 0x10000; // Timer Event 5
    static constexpr uint32_t SETA1R_TIMEVNT4 = 0x8000; // Timer Event 4
    static constexpr uint32_t SETA1R_TIMEVNT3 = 0x4000; // Timer Event 3
    static constexpr uint32_t SETA1R_TIMEVNT2 = 0x2000; // Timer Event 2
    static constexpr uint32_t SETA1R_TIMEVNT1 = 0x1000; // Timer Event 1
    static constexpr uint32_t SETA1R_MSTCMP4 = 0x800; // Master Compare 4
    static constexpr uint32_t SETA1R_MSTCMP3 = 0x400; // Master Compare 3
    static constexpr uint32_t SETA1R_MSTCMP2 = 0x200; // Master Compare 2
    static constexpr uint32_t SETA1R_MSTCMP1 = 0x100; // Master Compare 1
    static constexpr uint32_t SETA1R_MSTPER = 0x80; // Master Period
    static constexpr uint32_t SETA1R_CMP4 = 0x40; // Timer A compare 4
    static constexpr uint32_t SETA1R_CMP3 = 0x20; // Timer A compare 3
    static constexpr uint32_t SETA1R_CMP2 = 0x10; // Timer A compare 2
    static constexpr uint32_t SETA1R_CMP1 = 0x8; // Timer A compare 1
    static constexpr uint32_t SETA1R_PER = 0x4; // Timer A Period
    static constexpr uint32_t SETA1R_RESYNC = 0x2; // Timer A resynchronizaton
    static constexpr uint32_t SETA1R_SST = 0x1; // Software Set trigger

    static constexpr uint32_t RSTA1R_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RSTA1R_UPDATE = 0x80000000; // UPDATE
    static constexpr uint32_t RSTA1R_EXTEVNT10 = 0x40000000; // EXTEVNT10
    static constexpr uint32_t RSTA1R_EXTEVNT9 = 0x20000000; // EXTEVNT9
    static constexpr uint32_t RSTA1R_EXTEVNT8 = 0x10000000; // EXTEVNT8
    static constexpr uint32_t RSTA1R_EXTEVNT7 = 0x8000000; // EXTEVNT7
    static constexpr uint32_t RSTA1R_EXTEVNT6 = 0x4000000; // EXTEVNT6
    static constexpr uint32_t RSTA1R_EXTEVNT5 = 0x2000000; // EXTEVNT5
    static constexpr uint32_t RSTA1R_EXTEVNT4 = 0x1000000; // EXTEVNT4
    static constexpr uint32_t RSTA1R_EXTEVNT3 = 0x800000; // EXTEVNT3
    static constexpr uint32_t RSTA1R_EXTEVNT2 = 0x400000; // EXTEVNT2
    static constexpr uint32_t RSTA1R_EXTEVNT1 = 0x200000; // EXTEVNT1
    static constexpr uint32_t RSTA1R_TIMEVNT9 = 0x100000; // TIMEVNT9
    static constexpr uint32_t RSTA1R_TIMEVNT8 = 0x80000; // TIMEVNT8
    static constexpr uint32_t RSTA1R_TIMEVNT7 = 0x40000; // TIMEVNT7
    static constexpr uint32_t RSTA1R_TIMEVNT6 = 0x20000; // TIMEVNT6
    static constexpr uint32_t RSTA1R_TIMEVNT5 = 0x10000; // TIMEVNT5
    static constexpr uint32_t RSTA1R_TIMEVNT4 = 0x8000; // TIMEVNT4
    static constexpr uint32_t RSTA1R_TIMEVNT3 = 0x4000; // TIMEVNT3
    static constexpr uint32_t RSTA1R_TIMEVNT2 = 0x2000; // TIMEVNT2
    static constexpr uint32_t RSTA1R_TIMEVNT1 = 0x1000; // TIMEVNT1
    static constexpr uint32_t RSTA1R_MSTCMP4 = 0x800; // MSTCMP4
    static constexpr uint32_t RSTA1R_MSTCMP3 = 0x400; // MSTCMP3
    static constexpr uint32_t RSTA1R_MSTCMP2 = 0x200; // MSTCMP2
    static constexpr uint32_t RSTA1R_MSTCMP1 = 0x100; // MSTCMP1
    static constexpr uint32_t RSTA1R_MSTPER = 0x80; // MSTPER
    static constexpr uint32_t RSTA1R_CMP4 = 0x40; // CMP4
    static constexpr uint32_t RSTA1R_CMP3 = 0x20; // CMP3
    static constexpr uint32_t RSTA1R_CMP2 = 0x10; // CMP2
    static constexpr uint32_t RSTA1R_CMP1 = 0x8; // CMP1
    static constexpr uint32_t RSTA1R_PER = 0x4; // PER
    static constexpr uint32_t RSTA1R_RESYNC = 0x2; // RESYNC
    static constexpr uint32_t RSTA1R_SRT = 0x1; // SRT

    static constexpr uint32_t SETA2R_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SETA2R_UPDATE = 0x80000000; // UPDATE
    static constexpr uint32_t SETA2R_EXTEVNT10 = 0x40000000; // EXTEVNT10
    static constexpr uint32_t SETA2R_EXTEVNT9 = 0x20000000; // EXTEVNT9
    static constexpr uint32_t SETA2R_EXTEVNT8 = 0x10000000; // EXTEVNT8
    static constexpr uint32_t SETA2R_EXTEVNT7 = 0x8000000; // EXTEVNT7
    static constexpr uint32_t SETA2R_EXTEVNT6 = 0x4000000; // EXTEVNT6
    static constexpr uint32_t SETA2R_EXTEVNT5 = 0x2000000; // EXTEVNT5
    static constexpr uint32_t SETA2R_EXTEVNT4 = 0x1000000; // EXTEVNT4
    static constexpr uint32_t SETA2R_EXTEVNT3 = 0x800000; // EXTEVNT3
    static constexpr uint32_t SETA2R_EXTEVNT2 = 0x400000; // EXTEVNT2
    static constexpr uint32_t SETA2R_EXTEVNT1 = 0x200000; // EXTEVNT1
    static constexpr uint32_t SETA2R_TIMEVNT9 = 0x100000; // TIMEVNT9
    static constexpr uint32_t SETA2R_TIMEVNT8 = 0x80000; // TIMEVNT8
    static constexpr uint32_t SETA2R_TIMEVNT7 = 0x40000; // TIMEVNT7
    static constexpr uint32_t SETA2R_TIMEVNT6 = 0x20000; // TIMEVNT6
    static constexpr uint32_t SETA2R_TIMEVNT5 = 0x10000; // TIMEVNT5
    static constexpr uint32_t SETA2R_TIMEVNT4 = 0x8000; // TIMEVNT4
    static constexpr uint32_t SETA2R_TIMEVNT3 = 0x4000; // TIMEVNT3
    static constexpr uint32_t SETA2R_TIMEVNT2 = 0x2000; // TIMEVNT2
    static constexpr uint32_t SETA2R_TIMEVNT1 = 0x1000; // TIMEVNT1
    static constexpr uint32_t SETA2R_MSTCMP4 = 0x800; // MSTCMP4
    static constexpr uint32_t SETA2R_MSTCMP3 = 0x400; // MSTCMP3
    static constexpr uint32_t SETA2R_MSTCMP2 = 0x200; // MSTCMP2
    static constexpr uint32_t SETA2R_MSTCMP1 = 0x100; // MSTCMP1
    static constexpr uint32_t SETA2R_MSTPER = 0x80; // MSTPER
    static constexpr uint32_t SETA2R_CMP4 = 0x40; // CMP4
    static constexpr uint32_t SETA2R_CMP3 = 0x20; // CMP3
    static constexpr uint32_t SETA2R_CMP2 = 0x10; // CMP2
    static constexpr uint32_t SETA2R_CMP1 = 0x8; // CMP1
    static constexpr uint32_t SETA2R_PER = 0x4; // PER
    static constexpr uint32_t SETA2R_RESYNC = 0x2; // RESYNC
    static constexpr uint32_t SETA2R_SST = 0x1; // SST

    static constexpr uint32_t RSTA2R_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RSTA2R_UPDATE = 0x80000000; // UPDATE
    static constexpr uint32_t RSTA2R_EXTEVNT10 = 0x40000000; // EXTEVNT10
    static constexpr uint32_t RSTA2R_EXTEVNT9 = 0x20000000; // EXTEVNT9
    static constexpr uint32_t RSTA2R_EXTEVNT8 = 0x10000000; // EXTEVNT8
    static constexpr uint32_t RSTA2R_EXTEVNT7 = 0x8000000; // EXTEVNT7
    static constexpr uint32_t RSTA2R_EXTEVNT6 = 0x4000000; // EXTEVNT6
    static constexpr uint32_t RSTA2R_EXTEVNT5 = 0x2000000; // EXTEVNT5
    static constexpr uint32_t RSTA2R_EXTEVNT4 = 0x1000000; // EXTEVNT4
    static constexpr uint32_t RSTA2R_EXTEVNT3 = 0x800000; // EXTEVNT3
    static constexpr uint32_t RSTA2R_EXTEVNT2 = 0x400000; // EXTEVNT2
    static constexpr uint32_t RSTA2R_EXTEVNT1 = 0x200000; // EXTEVNT1
    static constexpr uint32_t RSTA2R_TIMEVNT9 = 0x100000; // TIMEVNT9
    static constexpr uint32_t RSTA2R_TIMEVNT8 = 0x80000; // TIMEVNT8
    static constexpr uint32_t RSTA2R_TIMEVNT7 = 0x40000; // TIMEVNT7
    static constexpr uint32_t RSTA2R_TIMEVNT6 = 0x20000; // TIMEVNT6
    static constexpr uint32_t RSTA2R_TIMEVNT5 = 0x10000; // TIMEVNT5
    static constexpr uint32_t RSTA2R_TIMEVNT4 = 0x8000; // TIMEVNT4
    static constexpr uint32_t RSTA2R_TIMEVNT3 = 0x4000; // TIMEVNT3
    static constexpr uint32_t RSTA2R_TIMEVNT2 = 0x2000; // TIMEVNT2
    static constexpr uint32_t RSTA2R_TIMEVNT1 = 0x1000; // TIMEVNT1
    static constexpr uint32_t RSTA2R_MSTCMP4 = 0x800; // MSTCMP4
    static constexpr uint32_t RSTA2R_MSTCMP3 = 0x400; // MSTCMP3
    static constexpr uint32_t RSTA2R_MSTCMP2 = 0x200; // MSTCMP2
    static constexpr uint32_t RSTA2R_MSTCMP1 = 0x100; // MSTCMP1
    static constexpr uint32_t RSTA2R_MSTPER = 0x80; // MSTPER
    static constexpr uint32_t RSTA2R_CMP4 = 0x40; // CMP4
    static constexpr uint32_t RSTA2R_CMP3 = 0x20; // CMP3
    static constexpr uint32_t RSTA2R_CMP2 = 0x10; // CMP2
    static constexpr uint32_t RSTA2R_CMP1 = 0x8; // CMP1
    static constexpr uint32_t RSTA2R_PER = 0x4; // PER
    static constexpr uint32_t RSTA2R_RESYNC = 0x2; // RESYNC
    static constexpr uint32_t RSTA2R_SRT = 0x1; // SRT

    static constexpr uint32_t EEFAR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<25, 0xf> EEFAR1_EE5FLTR; // External Event 5 filter
    static constexpr uint32_t EEFAR1_EE5LTCH = 0x1000000; // External Event 5 latch
    typedef bit_field_t<19, 0xf> EEFAR1_EE4FLTR; // External Event 4 filter
    static constexpr uint32_t EEFAR1_EE4LTCH = 0x40000; // External Event 4 latch
    typedef bit_field_t<13, 0xf> EEFAR1_EE3FLTR; // External Event 3 filter
    static constexpr uint32_t EEFAR1_EE3LTCH = 0x1000; // External Event 3 latch
    typedef bit_field_t<7, 0xf> EEFAR1_EE2FLTR; // External Event 2 filter
    static constexpr uint32_t EEFAR1_EE2LTCH = 0x40; // External Event 2 latch
    typedef bit_field_t<1, 0xf> EEFAR1_EE1FLTR; // External Event 1 filter
    static constexpr uint32_t EEFAR1_EE1LTCH = 0x1; // External Event 1 latch

    static constexpr uint32_t EEFAR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<25, 0xf> EEFAR2_EE10FLTR; // External Event 10 filter
    static constexpr uint32_t EEFAR2_EE10LTCH = 0x1000000; // External Event 10 latch
    typedef bit_field_t<19, 0xf> EEFAR2_EE9FLTR; // External Event 9 filter
    static constexpr uint32_t EEFAR2_EE9LTCH = 0x40000; // External Event 9 latch
    typedef bit_field_t<13, 0xf> EEFAR2_EE8FLTR; // External Event 8 filter
    static constexpr uint32_t EEFAR2_EE8LTCH = 0x1000; // External Event 8 latch
    typedef bit_field_t<7, 0xf> EEFAR2_EE7FLTR; // External Event 7 filter
    static constexpr uint32_t EEFAR2_EE7LTCH = 0x40; // External Event 7 latch
    typedef bit_field_t<1, 0xf> EEFAR2_EE6FLTR; // External Event 6 filter
    static constexpr uint32_t EEFAR2_EE6LTCH = 0x1; // External Event 6 latch

    static constexpr uint32_t RSTAR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RSTAR_TIMECMP4 = 0x40000000; // Timer E Compare 4
    static constexpr uint32_t RSTAR_TIMECMP2 = 0x20000000; // Timer E Compare 2
    static constexpr uint32_t RSTAR_TIMECMP1 = 0x10000000; // Timer E Compare 1
    static constexpr uint32_t RSTAR_TIMDCMP4 = 0x8000000; // Timer D Compare 4
    static constexpr uint32_t RSTAR_TIMDCMP2 = 0x4000000; // Timer D Compare 2
    static constexpr uint32_t RSTAR_TIMDCMP1 = 0x2000000; // Timer D Compare 1
    static constexpr uint32_t RSTAR_TIMCCMP4 = 0x1000000; // Timer C Compare 4
    static constexpr uint32_t RSTAR_TIMCCMP2 = 0x800000; // Timer C Compare 2
    static constexpr uint32_t RSTAR_TIMCCMP1 = 0x400000; // Timer C Compare 1
    static constexpr uint32_t RSTAR_TIMBCMP4 = 0x200000; // Timer B Compare 4
    static constexpr uint32_t RSTAR_TIMBCMP2 = 0x100000; // Timer B Compare 2
    static constexpr uint32_t RSTAR_TIMBCMP1 = 0x80000; // Timer B Compare 1
    static constexpr uint32_t RSTAR_EXTEVNT10 = 0x40000; // External Event 10
    static constexpr uint32_t RSTAR_EXTEVNT9 = 0x20000; // External Event 9
    static constexpr uint32_t RSTAR_EXTEVNT8 = 0x10000; // External Event 8
    static constexpr uint32_t RSTAR_EXTEVNT7 = 0x8000; // External Event 7
    static constexpr uint32_t RSTAR_EXTEVNT6 = 0x4000; // External Event 6
    static constexpr uint32_t RSTAR_EXTEVNT5 = 0x2000; // External Event 5
    static constexpr uint32_t RSTAR_EXTEVNT4 = 0x1000; // External Event 4
    static constexpr uint32_t RSTAR_EXTEVNT3 = 0x800; // External Event 3
    static constexpr uint32_t RSTAR_EXTEVNT2 = 0x400; // External Event 2
    static constexpr uint32_t RSTAR_EXTEVNT1 = 0x200; // External Event 1
    static constexpr uint32_t RSTAR_MSTCMP4 = 0x100; // Master compare 4
    static constexpr uint32_t RSTAR_MSTCMP3 = 0x80; // Master compare 3
    static constexpr uint32_t RSTAR_MSTCMP2 = 0x40; // Master compare 2
    static constexpr uint32_t RSTAR_MSTCMP1 = 0x20; // Master compare 1
    static constexpr uint32_t RSTAR_MSTPER = 0x10; // Master timer Period
    static constexpr uint32_t RSTAR_CMP4 = 0x8; // Timer A compare 4 reset
    static constexpr uint32_t RSTAR_CMP2 = 0x4; // Timer A compare 2 reset
    static constexpr uint32_t RSTAR_UPDT = 0x2; // Timer A Update reset

    static constexpr uint32_t CHPAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<7, 0xf> CHPAR_STRTPW; // STRTPW
    typedef bit_field_t<4, 0x7> CHPAR_CHPDTY; // Timerx chopper duty cycle value
    typedef bit_field_t<0, 0xf> CHPAR_CHPFRQ; // Timerx carrier frequency value

    static constexpr uint32_t CPT1ACR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CPT1ACR_TECMP2 = 0x80000000; // Timer E Compare 2
    static constexpr uint32_t CPT1ACR_TECMP1 = 0x40000000; // Timer E Compare 1
    static constexpr uint32_t CPT1ACR_TE1RST = 0x20000000; // Timer E output 1 Reset
    static constexpr uint32_t CPT1ACR_TE1SET = 0x10000000; // Timer E output 1 Set
    static constexpr uint32_t CPT1ACR_TDCMP2 = 0x8000000; // Timer D Compare 2
    static constexpr uint32_t CPT1ACR_TDCMP1 = 0x4000000; // Timer D Compare 1
    static constexpr uint32_t CPT1ACR_TD1RST = 0x2000000; // Timer D output 1 Reset
    static constexpr uint32_t CPT1ACR_TD1SET = 0x1000000; // Timer D output 1 Set
    static constexpr uint32_t CPT1ACR_TCCMP2 = 0x800000; // Timer C Compare 2
    static constexpr uint32_t CPT1ACR_TCCMP1 = 0x400000; // Timer C Compare 1
    static constexpr uint32_t CPT1ACR_TC1RST = 0x200000; // Timer C output 1 Reset
    static constexpr uint32_t CPT1ACR_TC1SET = 0x100000; // Timer C output 1 Set
    static constexpr uint32_t CPT1ACR_TBCMP2 = 0x80000; // Timer B Compare 2
    static constexpr uint32_t CPT1ACR_TBCMP1 = 0x40000; // Timer B Compare 1
    static constexpr uint32_t CPT1ACR_TB1RST = 0x20000; // Timer B output 1 Reset
    static constexpr uint32_t CPT1ACR_TB1SET = 0x10000; // Timer B output 1 Set
    static constexpr uint32_t CPT1ACR_EXEV10CPT = 0x800; // External Event 10 Capture
    static constexpr uint32_t CPT1ACR_EXEV9CPT = 0x400; // External Event 9 Capture
    static constexpr uint32_t CPT1ACR_EXEV8CPT = 0x200; // External Event 8 Capture
    static constexpr uint32_t CPT1ACR_EXEV7CPT = 0x100; // External Event 7 Capture
    static constexpr uint32_t CPT1ACR_EXEV6CPT = 0x80; // External Event 6 Capture
    static constexpr uint32_t CPT1ACR_EXEV5CPT = 0x40; // External Event 5 Capture
    static constexpr uint32_t CPT1ACR_EXEV4CPT = 0x20; // External Event 4 Capture
    static constexpr uint32_t CPT1ACR_EXEV3CPT = 0x10; // External Event 3 Capture
    static constexpr uint32_t CPT1ACR_EXEV2CPT = 0x8; // External Event 2 Capture
    static constexpr uint32_t CPT1ACR_EXEV1CPT = 0x4; // External Event 1 Capture
    static constexpr uint32_t CPT1ACR_UDPCPT = 0x2; // Update Capture
    static constexpr uint32_t CPT1ACR_SWCPT = 0x1; // Software Capture

    static constexpr uint32_t CPT2ACR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CPT2ACR_TECMP2 = 0x80000000; // Timer E Compare 2
    static constexpr uint32_t CPT2ACR_TECMP1 = 0x40000000; // Timer E Compare 1
    static constexpr uint32_t CPT2ACR_TE1RST = 0x20000000; // Timer E output 1 Reset
    static constexpr uint32_t CPT2ACR_TE1SET = 0x10000000; // Timer E output 1 Set
    static constexpr uint32_t CPT2ACR_TDCMP2 = 0x8000000; // Timer D Compare 2
    static constexpr uint32_t CPT2ACR_TDCMP1 = 0x4000000; // Timer D Compare 1
    static constexpr uint32_t CPT2ACR_TD1RST = 0x2000000; // Timer D output 1 Reset
    static constexpr uint32_t CPT2ACR_TD1SET = 0x1000000; // Timer D output 1 Set
    static constexpr uint32_t CPT2ACR_TCCMP2 = 0x800000; // Timer C Compare 2
    static constexpr uint32_t CPT2ACR_TCCMP1 = 0x400000; // Timer C Compare 1
    static constexpr uint32_t CPT2ACR_TC1RST = 0x200000; // Timer C output 1 Reset
    static constexpr uint32_t CPT2ACR_TC1SET = 0x100000; // Timer C output 1 Set
    static constexpr uint32_t CPT2ACR_TBCMP2 = 0x80000; // Timer B Compare 2
    static constexpr uint32_t CPT2ACR_TBCMP1 = 0x40000; // Timer B Compare 1
    static constexpr uint32_t CPT2ACR_TB1RST = 0x20000; // Timer B output 1 Reset
    static constexpr uint32_t CPT2ACR_TB1SET = 0x10000; // Timer B output 1 Set
    static constexpr uint32_t CPT2ACR_EXEV10CPT = 0x800; // External Event 10 Capture
    static constexpr uint32_t CPT2ACR_EXEV9CPT = 0x400; // External Event 9 Capture
    static constexpr uint32_t CPT2ACR_EXEV8CPT = 0x200; // External Event 8 Capture
    static constexpr uint32_t CPT2ACR_EXEV7CPT = 0x100; // External Event 7 Capture
    static constexpr uint32_t CPT2ACR_EXEV6CPT = 0x80; // External Event 6 Capture
    static constexpr uint32_t CPT2ACR_EXEV5CPT = 0x40; // External Event 5 Capture
    static constexpr uint32_t CPT2ACR_EXEV4CPT = 0x20; // External Event 4 Capture
    static constexpr uint32_t CPT2ACR_EXEV3CPT = 0x10; // External Event 3 Capture
    static constexpr uint32_t CPT2ACR_EXEV2CPT = 0x8; // External Event 2 Capture
    static constexpr uint32_t CPT2ACR_EXEV1CPT = 0x4; // External Event 1 Capture
    static constexpr uint32_t CPT2ACR_UDPCPT = 0x2; // Update Capture
    static constexpr uint32_t CPT2ACR_SWCPT = 0x1; // Software Capture

    static constexpr uint32_t OUTAR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OUTAR_DIDL2 = 0x800000; // Output 2 Deadtime upon burst mode Idle entry
    static constexpr uint32_t OUTAR_CHP2 = 0x400000; // Output 2 Chopper enable
    typedef bit_field_t<20, 0x3> OUTAR_FAULT2; // Output 2 Fault state
    static constexpr uint32_t OUTAR_IDLES2 = 0x80000; // Output 2 Idle State
    static constexpr uint32_t OUTAR_IDLEM2 = 0x40000; // Output 2 Idle mode
    static constexpr uint32_t OUTAR_POL2 = 0x20000; // Output 2 polarity
    typedef bit_field_t<10, 0x7> OUTAR_DLYPRT; // Delayed Protection
    static constexpr uint32_t OUTAR_DLYPRTEN = 0x200; // Delayed Protection Enable
    static constexpr uint32_t OUTAR_DTEN = 0x100; // Deadtime enable
    static constexpr uint32_t OUTAR_DIDL1 = 0x80; // Output 1 Deadtime upon burst mode Idle entry
    static constexpr uint32_t OUTAR_CHP1 = 0x40; // Output 1 Chopper enable
    typedef bit_field_t<4, 0x3> OUTAR_FAULT1; // Output 1 Fault state
    static constexpr uint32_t OUTAR_IDLES1 = 0x8; // Output 1 Idle State
    static constexpr uint32_t OUTAR_IDLEM1 = 0x4; // Output 1 Idle mode
    static constexpr uint32_t OUTAR_POL1 = 0x2; // Output 1 polarity

    static constexpr uint32_t FLTAR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FLTAR_FLTLCK = 0x80000000; // Fault sources Lock
    static constexpr uint32_t FLTAR_FLT5EN = 0x10; // Fault 5 enable
    static constexpr uint32_t FLTAR_FLT4EN = 0x8; // Fault 4 enable
    static constexpr uint32_t FLTAR_FLT3EN = 0x4; // Fault 3 enable
    static constexpr uint32_t FLTAR_FLT2EN = 0x2; // Fault 2 enable
    static constexpr uint32_t FLTAR_FLT1EN = 0x1; // Fault 1 enable
};

// HRTIM_TIMB: High Resolution Timer: TIMB

struct stm32h742x_hrtim_timb_t
{
    volatile uint32_t TIMBCR; // Timerx Control Register
    volatile uint32_t TIMBISR; // Timerx Interrupt Status Register
    volatile uint32_t TIMBICR; // Timerx Interrupt Clear Register
    volatile uint32_t TIMBDIER5; // TIMxDIER5
    volatile uint32_t CNTR; // Timerx Counter Register
    volatile uint32_t PERBR; // Timerx Period Register
    volatile uint32_t REPBR; // Timerx Repetition Register
    volatile uint32_t CMP1BR; // Timerx Compare 1 Register
    volatile uint32_t CMP1CBR; // Timerx Compare 1 Compound Register
    volatile uint32_t CMP2BR; // Timerx Compare 2 Register
    volatile uint32_t CMP3BR; // Timerx Compare 3 Register
    volatile uint32_t CMP4BR; // Timerx Compare 4 Register
    volatile uint32_t CPT1BR; // Timerx Capture 1 Register
    volatile uint32_t CPT2BR; // Timerx Capture 2 Register
    volatile uint32_t DTBR; // Timerx Deadtime Register
    volatile uint32_t SETB1R; // Timerx Output1 Set Register
    volatile uint32_t RSTB1R; // Timerx Output1 Reset Register
    volatile uint32_t SETB2R; // Timerx Output2 Set Register
    volatile uint32_t RSTB2R; // Timerx Output2 Reset Register
    volatile uint32_t EEFBR1; // Timerx External Event Filtering Register 1
    volatile uint32_t EEFBR2; // Timerx External Event Filtering Register 2
    volatile uint32_t RSTBR; // TimerA Reset Register
    volatile uint32_t CHPBR; // Timerx Chopper Register
    volatile uint32_t CPT1BCR; // Timerx Capture 2 Control Register
    volatile uint32_t CPT2BCR; // CPT2xCR
    volatile uint32_t OUTBR; // Timerx Output Register
    volatile uint32_t FLTBR; // Timerx Fault Register

    static constexpr uint32_t TIMBCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<28, 0xf> TIMBCR_UPDGAT; // Update Gating
    static constexpr uint32_t TIMBCR_PREEN = 0x8000000; // Preload enable
    typedef bit_field_t<25, 0x3> TIMBCR_DACSYNC; // AC Synchronization
    static constexpr uint32_t TIMBCR_MSTU = 0x1000000; // Master Timer update
    static constexpr uint32_t TIMBCR_TEU = 0x800000; // TEU
    static constexpr uint32_t TIMBCR_TDU = 0x400000; // TDU
    static constexpr uint32_t TIMBCR_TCU = 0x200000; // TCU
    static constexpr uint32_t TIMBCR_TBU = 0x100000; // TBU
    static constexpr uint32_t TIMBCR_TXRSTU = 0x40000; // Timerx reset update
    static constexpr uint32_t TIMBCR_TXREPU = 0x20000; // Timer x Repetition update
    typedef bit_field_t<14, 0x3> TIMBCR_DELCMP4; // Delayed CMP4 mode
    typedef bit_field_t<12, 0x3> TIMBCR_DELCMP2; // Delayed CMP2 mode
    static constexpr uint32_t TIMBCR_SYNCSTRTX = 0x800; // Synchronization Starts Timer x
    static constexpr uint32_t TIMBCR_SYNCRSTX = 0x400; // Synchronization Resets Timer x
    static constexpr uint32_t TIMBCR_PSHPLL = 0x40; // Push-Pull mode enable
    static constexpr uint32_t TIMBCR_HALF = 0x20; // Half mode enable
    static constexpr uint32_t TIMBCR_RETRIG = 0x10; // Re-triggerable mode
    static constexpr uint32_t TIMBCR_CONT = 0x8; // Continuous mode
    typedef bit_field_t<0, 0x7> TIMBCR_CK_PSCX; // HRTIM Timer x Clock prescaler

    static constexpr uint32_t TIMBISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t TIMBISR_O2STAT = 0x80000; // Output 2 State
    static constexpr uint32_t TIMBISR_O1STAT = 0x40000; // Output 1 State
    static constexpr uint32_t TIMBISR_IPPSTAT = 0x20000; // Idle Push Pull Status
    static constexpr uint32_t TIMBISR_CPPSTAT = 0x10000; // Current Push Pull Status
    static constexpr uint32_t TIMBISR_DLYPRT = 0x4000; // Delayed Protection Flag
    static constexpr uint32_t TIMBISR_RST = 0x2000; // Reset Interrupt Flag
    static constexpr uint32_t TIMBISR_RSTX2 = 0x1000; // Output 2 Reset Interrupt Flag
    static constexpr uint32_t TIMBISR_SETX2 = 0x800; // Output 2 Set Interrupt Flag
    static constexpr uint32_t TIMBISR_RSTX1 = 0x400; // Output 1 Reset Interrupt Flag
    static constexpr uint32_t TIMBISR_SETX1 = 0x200; // Output 1 Set Interrupt Flag
    static constexpr uint32_t TIMBISR_CPT2 = 0x100; // Capture2 Interrupt Flag
    static constexpr uint32_t TIMBISR_CPT1 = 0x80; // Capture1 Interrupt Flag
    static constexpr uint32_t TIMBISR_UPD = 0x40; // Update Interrupt Flag
    static constexpr uint32_t TIMBISR_REP = 0x10; // Repetition Interrupt Flag
    static constexpr uint32_t TIMBISR_CMP4 = 0x8; // Compare 4 Interrupt Flag
    static constexpr uint32_t TIMBISR_CMP3 = 0x4; // Compare 3 Interrupt Flag
    static constexpr uint32_t TIMBISR_CMP2 = 0x2; // Compare 2 Interrupt Flag
    static constexpr uint32_t TIMBISR_CMP1 = 0x1; // Compare 1 Interrupt Flag

    static constexpr uint32_t TIMBICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t TIMBICR_DLYPRTC = 0x4000; // Delayed Protection Flag Clear
    static constexpr uint32_t TIMBICR_RSTC = 0x2000; // Reset Interrupt flag Clear
    static constexpr uint32_t TIMBICR_RSTX2C = 0x1000; // Output 2 Reset flag Clear
    static constexpr uint32_t TIMBICR_SET2XC = 0x800; // Output 2 Set flag Clear
    static constexpr uint32_t TIMBICR_RSTX1C = 0x400; // Output 1 Reset flag Clear
    static constexpr uint32_t TIMBICR_SET1XC = 0x200; // Output 1 Set flag Clear
    static constexpr uint32_t TIMBICR_CPT2C = 0x100; // Capture2 Interrupt flag Clear
    static constexpr uint32_t TIMBICR_CPT1C = 0x80; // Capture1 Interrupt flag Clear
    static constexpr uint32_t TIMBICR_UPDC = 0x40; // Update Interrupt flag Clear
    static constexpr uint32_t TIMBICR_REPC = 0x10; // Repetition Interrupt flag Clear
    static constexpr uint32_t TIMBICR_CMP4C = 0x8; // Compare 4 Interrupt flag Clear
    static constexpr uint32_t TIMBICR_CMP3C = 0x4; // Compare 3 Interrupt flag Clear
    static constexpr uint32_t TIMBICR_CMP2C = 0x2; // Compare 2 Interrupt flag Clear
    static constexpr uint32_t TIMBICR_CMP1C = 0x1; // Compare 1 Interrupt flag Clear

    static constexpr uint32_t TIMBDIER5_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t TIMBDIER5_DLYPRTDE = 0x40000000; // DLYPRTDE
    static constexpr uint32_t TIMBDIER5_RSTDE = 0x20000000; // RSTDE
    static constexpr uint32_t TIMBDIER5_RSTX2DE = 0x10000000; // RSTx2DE
    static constexpr uint32_t TIMBDIER5_SETX2DE = 0x8000000; // SETx2DE
    static constexpr uint32_t TIMBDIER5_RSTX1DE = 0x4000000; // RSTx1DE
    static constexpr uint32_t TIMBDIER5_SET1XDE = 0x2000000; // SET1xDE
    static constexpr uint32_t TIMBDIER5_CPT2DE = 0x1000000; // CPT2DE
    static constexpr uint32_t TIMBDIER5_CPT1DE = 0x800000; // CPT1DE
    static constexpr uint32_t TIMBDIER5_UPDDE = 0x400000; // UPDDE
    static constexpr uint32_t TIMBDIER5_REPDE = 0x100000; // REPDE
    static constexpr uint32_t TIMBDIER5_CMP4DE = 0x80000; // CMP4DE
    static constexpr uint32_t TIMBDIER5_CMP3DE = 0x40000; // CMP3DE
    static constexpr uint32_t TIMBDIER5_CMP2DE = 0x20000; // CMP2DE
    static constexpr uint32_t TIMBDIER5_CMP1DE = 0x10000; // CMP1DE
    static constexpr uint32_t TIMBDIER5_DLYPRTIE = 0x4000; // DLYPRTIE
    static constexpr uint32_t TIMBDIER5_RSTIE = 0x2000; // RSTIE
    static constexpr uint32_t TIMBDIER5_RSTX2IE = 0x1000; // RSTx2IE
    static constexpr uint32_t TIMBDIER5_SETX2IE = 0x800; // SETx2IE
    static constexpr uint32_t TIMBDIER5_RSTX1IE = 0x400; // RSTx1IE
    static constexpr uint32_t TIMBDIER5_SET1XIE = 0x200; // SET1xIE
    static constexpr uint32_t TIMBDIER5_CPT2IE = 0x100; // CPT2IE
    static constexpr uint32_t TIMBDIER5_CPT1IE = 0x80; // CPT1IE
    static constexpr uint32_t TIMBDIER5_UPDIE = 0x40; // UPDIE
    static constexpr uint32_t TIMBDIER5_REPIE = 0x10; // REPIE
    static constexpr uint32_t TIMBDIER5_CMP4IE = 0x8; // CMP4IE
    static constexpr uint32_t TIMBDIER5_CMP3IE = 0x4; // CMP3IE
    static constexpr uint32_t TIMBDIER5_CMP2IE = 0x2; // CMP2IE
    static constexpr uint32_t TIMBDIER5_CMP1IE = 0x1; // CMP1IE

    static constexpr uint32_t CNTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNTR_CNTX; // Timerx Counter value

    static constexpr uint32_t PERBR_RESET_VALUE = 0xffff; // Reset value
    typedef bit_field_t<0, 0xffff> PERBR_PERX; // Timerx Period value

    static constexpr uint32_t REPBR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> REPBR_REPX; // Timerx Repetition counter value

    static constexpr uint32_t CMP1BR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CMP1BR_CMP1X; // Timerx Compare 1 value

    static constexpr uint32_t CMP1CBR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xff> CMP1CBR_REPX; // Timerx Repetition value (aliased from HRTIM_REPx register)
    typedef bit_field_t<0, 0xffff> CMP1CBR_CMP1X; // Timerx Compare 1 value

    static constexpr uint32_t CMP2BR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CMP2BR_CMP2X; // Timerx Compare 2 value

    static constexpr uint32_t CMP3BR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CMP3BR_CMP3X; // Timerx Compare 3 value

    static constexpr uint32_t CMP4BR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CMP4BR_CMP4X; // Timerx Compare 4 value

    static constexpr uint32_t CPT1BR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CPT1BR_CPT1X; // Timerx Capture 1 value

    static constexpr uint32_t CPT2BR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CPT2BR_CPT2X; // Timerx Capture 2 value

    static constexpr uint32_t DTBR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DTBR_DTFLKX = 0x80000000; // Deadtime Falling Lock
    static constexpr uint32_t DTBR_DTFSLKX = 0x40000000; // Deadtime Falling Sign Lock
    static constexpr uint32_t DTBR_SDTFX = 0x2000000; // Sign Deadtime Falling value
    typedef bit_field_t<16, 0x1ff> DTBR_DTFX; // Deadtime Falling value
    static constexpr uint32_t DTBR_DTRLKX = 0x8000; // Deadtime Rising Lock
    static constexpr uint32_t DTBR_DTRSLKX = 0x4000; // Deadtime Rising Sign Lock
    typedef bit_field_t<10, 0x7> DTBR_DTPRSC; // Deadtime Prescaler
    static constexpr uint32_t DTBR_SDTRX = 0x200; // Sign Deadtime Rising value
    typedef bit_field_t<0, 0x1ff> DTBR_DTRX; // Deadtime Rising value

    static constexpr uint32_t SETB1R_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SETB1R_UPDATE = 0x80000000; // Registers update (transfer preload to active)
    static constexpr uint32_t SETB1R_EXTEVNT10 = 0x40000000; // External Event 10
    static constexpr uint32_t SETB1R_EXTEVNT9 = 0x20000000; // External Event 9
    static constexpr uint32_t SETB1R_EXTEVNT8 = 0x10000000; // External Event 8
    static constexpr uint32_t SETB1R_EXTEVNT7 = 0x8000000; // External Event 7
    static constexpr uint32_t SETB1R_EXTEVNT6 = 0x4000000; // External Event 6
    static constexpr uint32_t SETB1R_EXTEVNT5 = 0x2000000; // External Event 5
    static constexpr uint32_t SETB1R_EXTEVNT4 = 0x1000000; // External Event 4
    static constexpr uint32_t SETB1R_EXTEVNT3 = 0x800000; // External Event 3
    static constexpr uint32_t SETB1R_EXTEVNT2 = 0x400000; // External Event 2
    static constexpr uint32_t SETB1R_EXTEVNT1 = 0x200000; // External Event 1
    static constexpr uint32_t SETB1R_TIMEVNT9 = 0x100000; // Timer Event 9
    static constexpr uint32_t SETB1R_TIMEVNT8 = 0x80000; // Timer Event 8
    static constexpr uint32_t SETB1R_TIMEVNT7 = 0x40000; // Timer Event 7
    static constexpr uint32_t SETB1R_TIMEVNT6 = 0x20000; // Timer Event 6
    static constexpr uint32_t SETB1R_TIMEVNT5 = 0x10000; // Timer Event 5
    static constexpr uint32_t SETB1R_TIMEVNT4 = 0x8000; // Timer Event 4
    static constexpr uint32_t SETB1R_TIMEVNT3 = 0x4000; // Timer Event 3
    static constexpr uint32_t SETB1R_TIMEVNT2 = 0x2000; // Timer Event 2
    static constexpr uint32_t SETB1R_TIMEVNT1 = 0x1000; // Timer Event 1
    static constexpr uint32_t SETB1R_MSTCMP4 = 0x800; // Master Compare 4
    static constexpr uint32_t SETB1R_MSTCMP3 = 0x400; // Master Compare 3
    static constexpr uint32_t SETB1R_MSTCMP2 = 0x200; // Master Compare 2
    static constexpr uint32_t SETB1R_MSTCMP1 = 0x100; // Master Compare 1
    static constexpr uint32_t SETB1R_MSTPER = 0x80; // Master Period
    static constexpr uint32_t SETB1R_CMP4 = 0x40; // Timer A compare 4
    static constexpr uint32_t SETB1R_CMP3 = 0x20; // Timer A compare 3
    static constexpr uint32_t SETB1R_CMP2 = 0x10; // Timer A compare 2
    static constexpr uint32_t SETB1R_CMP1 = 0x8; // Timer A compare 1
    static constexpr uint32_t SETB1R_PER = 0x4; // Timer A Period
    static constexpr uint32_t SETB1R_RESYNC = 0x2; // Timer A resynchronizaton
    static constexpr uint32_t SETB1R_SST = 0x1; // Software Set trigger

    static constexpr uint32_t RSTB1R_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RSTB1R_UPDATE = 0x80000000; // UPDATE
    static constexpr uint32_t RSTB1R_EXTEVNT10 = 0x40000000; // EXTEVNT10
    static constexpr uint32_t RSTB1R_EXTEVNT9 = 0x20000000; // EXTEVNT9
    static constexpr uint32_t RSTB1R_EXTEVNT8 = 0x10000000; // EXTEVNT8
    static constexpr uint32_t RSTB1R_EXTEVNT7 = 0x8000000; // EXTEVNT7
    static constexpr uint32_t RSTB1R_EXTEVNT6 = 0x4000000; // EXTEVNT6
    static constexpr uint32_t RSTB1R_EXTEVNT5 = 0x2000000; // EXTEVNT5
    static constexpr uint32_t RSTB1R_EXTEVNT4 = 0x1000000; // EXTEVNT4
    static constexpr uint32_t RSTB1R_EXTEVNT3 = 0x800000; // EXTEVNT3
    static constexpr uint32_t RSTB1R_EXTEVNT2 = 0x400000; // EXTEVNT2
    static constexpr uint32_t RSTB1R_EXTEVNT1 = 0x200000; // EXTEVNT1
    static constexpr uint32_t RSTB1R_TIMEVNT9 = 0x100000; // TIMEVNT9
    static constexpr uint32_t RSTB1R_TIMEVNT8 = 0x80000; // TIMEVNT8
    static constexpr uint32_t RSTB1R_TIMEVNT7 = 0x40000; // TIMEVNT7
    static constexpr uint32_t RSTB1R_TIMEVNT6 = 0x20000; // TIMEVNT6
    static constexpr uint32_t RSTB1R_TIMEVNT5 = 0x10000; // TIMEVNT5
    static constexpr uint32_t RSTB1R_TIMEVNT4 = 0x8000; // TIMEVNT4
    static constexpr uint32_t RSTB1R_TIMEVNT3 = 0x4000; // TIMEVNT3
    static constexpr uint32_t RSTB1R_TIMEVNT2 = 0x2000; // TIMEVNT2
    static constexpr uint32_t RSTB1R_TIMEVNT1 = 0x1000; // TIMEVNT1
    static constexpr uint32_t RSTB1R_MSTCMP4 = 0x800; // MSTCMP4
    static constexpr uint32_t RSTB1R_MSTCMP3 = 0x400; // MSTCMP3
    static constexpr uint32_t RSTB1R_MSTCMP2 = 0x200; // MSTCMP2
    static constexpr uint32_t RSTB1R_MSTCMP1 = 0x100; // MSTCMP1
    static constexpr uint32_t RSTB1R_MSTPER = 0x80; // MSTPER
    static constexpr uint32_t RSTB1R_CMP4 = 0x40; // CMP4
    static constexpr uint32_t RSTB1R_CMP3 = 0x20; // CMP3
    static constexpr uint32_t RSTB1R_CMP2 = 0x10; // CMP2
    static constexpr uint32_t RSTB1R_CMP1 = 0x8; // CMP1
    static constexpr uint32_t RSTB1R_PER = 0x4; // PER
    static constexpr uint32_t RSTB1R_RESYNC = 0x2; // RESYNC
    static constexpr uint32_t RSTB1R_SRT = 0x1; // SRT

    static constexpr uint32_t SETB2R_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SETB2R_UPDATE = 0x80000000; // UPDATE
    static constexpr uint32_t SETB2R_EXTEVNT10 = 0x40000000; // EXTEVNT10
    static constexpr uint32_t SETB2R_EXTEVNT9 = 0x20000000; // EXTEVNT9
    static constexpr uint32_t SETB2R_EXTEVNT8 = 0x10000000; // EXTEVNT8
    static constexpr uint32_t SETB2R_EXTEVNT7 = 0x8000000; // EXTEVNT7
    static constexpr uint32_t SETB2R_EXTEVNT6 = 0x4000000; // EXTEVNT6
    static constexpr uint32_t SETB2R_EXTEVNT5 = 0x2000000; // EXTEVNT5
    static constexpr uint32_t SETB2R_EXTEVNT4 = 0x1000000; // EXTEVNT4
    static constexpr uint32_t SETB2R_EXTEVNT3 = 0x800000; // EXTEVNT3
    static constexpr uint32_t SETB2R_EXTEVNT2 = 0x400000; // EXTEVNT2
    static constexpr uint32_t SETB2R_EXTEVNT1 = 0x200000; // EXTEVNT1
    static constexpr uint32_t SETB2R_TIMEVNT9 = 0x100000; // TIMEVNT9
    static constexpr uint32_t SETB2R_TIMEVNT8 = 0x80000; // TIMEVNT8
    static constexpr uint32_t SETB2R_TIMEVNT7 = 0x40000; // TIMEVNT7
    static constexpr uint32_t SETB2R_TIMEVNT6 = 0x20000; // TIMEVNT6
    static constexpr uint32_t SETB2R_TIMEVNT5 = 0x10000; // TIMEVNT5
    static constexpr uint32_t SETB2R_TIMEVNT4 = 0x8000; // TIMEVNT4
    static constexpr uint32_t SETB2R_TIMEVNT3 = 0x4000; // TIMEVNT3
    static constexpr uint32_t SETB2R_TIMEVNT2 = 0x2000; // TIMEVNT2
    static constexpr uint32_t SETB2R_TIMEVNT1 = 0x1000; // TIMEVNT1
    static constexpr uint32_t SETB2R_MSTCMP4 = 0x800; // MSTCMP4
    static constexpr uint32_t SETB2R_MSTCMP3 = 0x400; // MSTCMP3
    static constexpr uint32_t SETB2R_MSTCMP2 = 0x200; // MSTCMP2
    static constexpr uint32_t SETB2R_MSTCMP1 = 0x100; // MSTCMP1
    static constexpr uint32_t SETB2R_MSTPER = 0x80; // MSTPER
    static constexpr uint32_t SETB2R_CMP4 = 0x40; // CMP4
    static constexpr uint32_t SETB2R_CMP3 = 0x20; // CMP3
    static constexpr uint32_t SETB2R_CMP2 = 0x10; // CMP2
    static constexpr uint32_t SETB2R_CMP1 = 0x8; // CMP1
    static constexpr uint32_t SETB2R_PER = 0x4; // PER
    static constexpr uint32_t SETB2R_RESYNC = 0x2; // RESYNC
    static constexpr uint32_t SETB2R_SST = 0x1; // SST

    static constexpr uint32_t RSTB2R_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RSTB2R_UPDATE = 0x80000000; // UPDATE
    static constexpr uint32_t RSTB2R_EXTEVNT10 = 0x40000000; // EXTEVNT10
    static constexpr uint32_t RSTB2R_EXTEVNT9 = 0x20000000; // EXTEVNT9
    static constexpr uint32_t RSTB2R_EXTEVNT8 = 0x10000000; // EXTEVNT8
    static constexpr uint32_t RSTB2R_EXTEVNT7 = 0x8000000; // EXTEVNT7
    static constexpr uint32_t RSTB2R_EXTEVNT6 = 0x4000000; // EXTEVNT6
    static constexpr uint32_t RSTB2R_EXTEVNT5 = 0x2000000; // EXTEVNT5
    static constexpr uint32_t RSTB2R_EXTEVNT4 = 0x1000000; // EXTEVNT4
    static constexpr uint32_t RSTB2R_EXTEVNT3 = 0x800000; // EXTEVNT3
    static constexpr uint32_t RSTB2R_EXTEVNT2 = 0x400000; // EXTEVNT2
    static constexpr uint32_t RSTB2R_EXTEVNT1 = 0x200000; // EXTEVNT1
    static constexpr uint32_t RSTB2R_TIMEVNT9 = 0x100000; // TIMEVNT9
    static constexpr uint32_t RSTB2R_TIMEVNT8 = 0x80000; // TIMEVNT8
    static constexpr uint32_t RSTB2R_TIMEVNT7 = 0x40000; // TIMEVNT7
    static constexpr uint32_t RSTB2R_TIMEVNT6 = 0x20000; // TIMEVNT6
    static constexpr uint32_t RSTB2R_TIMEVNT5 = 0x10000; // TIMEVNT5
    static constexpr uint32_t RSTB2R_TIMEVNT4 = 0x8000; // TIMEVNT4
    static constexpr uint32_t RSTB2R_TIMEVNT3 = 0x4000; // TIMEVNT3
    static constexpr uint32_t RSTB2R_TIMEVNT2 = 0x2000; // TIMEVNT2
    static constexpr uint32_t RSTB2R_TIMEVNT1 = 0x1000; // TIMEVNT1
    static constexpr uint32_t RSTB2R_MSTCMP4 = 0x800; // MSTCMP4
    static constexpr uint32_t RSTB2R_MSTCMP3 = 0x400; // MSTCMP3
    static constexpr uint32_t RSTB2R_MSTCMP2 = 0x200; // MSTCMP2
    static constexpr uint32_t RSTB2R_MSTCMP1 = 0x100; // MSTCMP1
    static constexpr uint32_t RSTB2R_MSTPER = 0x80; // MSTPER
    static constexpr uint32_t RSTB2R_CMP4 = 0x40; // CMP4
    static constexpr uint32_t RSTB2R_CMP3 = 0x20; // CMP3
    static constexpr uint32_t RSTB2R_CMP2 = 0x10; // CMP2
    static constexpr uint32_t RSTB2R_CMP1 = 0x8; // CMP1
    static constexpr uint32_t RSTB2R_PER = 0x4; // PER
    static constexpr uint32_t RSTB2R_RESYNC = 0x2; // RESYNC
    static constexpr uint32_t RSTB2R_SRT = 0x1; // SRT

    static constexpr uint32_t EEFBR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<25, 0xf> EEFBR1_EE5FLTR; // External Event 5 filter
    static constexpr uint32_t EEFBR1_EE5LTCH = 0x1000000; // External Event 5 latch
    typedef bit_field_t<19, 0xf> EEFBR1_EE4FLTR; // External Event 4 filter
    static constexpr uint32_t EEFBR1_EE4LTCH = 0x40000; // External Event 4 latch
    typedef bit_field_t<13, 0xf> EEFBR1_EE3FLTR; // External Event 3 filter
    static constexpr uint32_t EEFBR1_EE3LTCH = 0x1000; // External Event 3 latch
    typedef bit_field_t<7, 0xf> EEFBR1_EE2FLTR; // External Event 2 filter
    static constexpr uint32_t EEFBR1_EE2LTCH = 0x40; // External Event 2 latch
    typedef bit_field_t<1, 0xf> EEFBR1_EE1FLTR; // External Event 1 filter
    static constexpr uint32_t EEFBR1_EE1LTCH = 0x1; // External Event 1 latch

    static constexpr uint32_t EEFBR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<25, 0xf> EEFBR2_EE10FLTR; // External Event 10 filter
    static constexpr uint32_t EEFBR2_EE10LTCH = 0x1000000; // External Event 10 latch
    typedef bit_field_t<19, 0xf> EEFBR2_EE9FLTR; // External Event 9 filter
    static constexpr uint32_t EEFBR2_EE9LTCH = 0x40000; // External Event 9 latch
    typedef bit_field_t<13, 0xf> EEFBR2_EE8FLTR; // External Event 8 filter
    static constexpr uint32_t EEFBR2_EE8LTCH = 0x1000; // External Event 8 latch
    typedef bit_field_t<7, 0xf> EEFBR2_EE7FLTR; // External Event 7 filter
    static constexpr uint32_t EEFBR2_EE7LTCH = 0x40; // External Event 7 latch
    typedef bit_field_t<1, 0xf> EEFBR2_EE6FLTR; // External Event 6 filter
    static constexpr uint32_t EEFBR2_EE6LTCH = 0x1; // External Event 6 latch

    static constexpr uint32_t RSTBR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RSTBR_TIMECMP4 = 0x40000000; // Timer E Compare 4
    static constexpr uint32_t RSTBR_TIMECMP2 = 0x20000000; // Timer E Compare 2
    static constexpr uint32_t RSTBR_TIMECMP1 = 0x10000000; // Timer E Compare 1
    static constexpr uint32_t RSTBR_TIMDCMP4 = 0x8000000; // Timer D Compare 4
    static constexpr uint32_t RSTBR_TIMDCMP2 = 0x4000000; // Timer D Compare 2
    static constexpr uint32_t RSTBR_TIMDCMP1 = 0x2000000; // Timer D Compare 1
    static constexpr uint32_t RSTBR_TIMCCMP4 = 0x1000000; // Timer C Compare 4
    static constexpr uint32_t RSTBR_TIMCCMP2 = 0x800000; // Timer C Compare 2
    static constexpr uint32_t RSTBR_TIMCCMP1 = 0x400000; // Timer C Compare 1
    static constexpr uint32_t RSTBR_TIMACMP4 = 0x200000; // Timer A Compare 4
    static constexpr uint32_t RSTBR_TIMACMP2 = 0x100000; // Timer A Compare 2
    static constexpr uint32_t RSTBR_TIMACMP1 = 0x80000; // Timer A Compare 1
    static constexpr uint32_t RSTBR_EXTEVNT10 = 0x40000; // External Event 10
    static constexpr uint32_t RSTBR_EXTEVNT9 = 0x20000; // External Event 9
    static constexpr uint32_t RSTBR_EXTEVNT8 = 0x10000; // External Event 8
    static constexpr uint32_t RSTBR_EXTEVNT7 = 0x8000; // External Event 7
    static constexpr uint32_t RSTBR_EXTEVNT6 = 0x4000; // External Event 6
    static constexpr uint32_t RSTBR_EXTEVNT5 = 0x2000; // External Event 5
    static constexpr uint32_t RSTBR_EXTEVNT4 = 0x1000; // External Event 4
    static constexpr uint32_t RSTBR_EXTEVNT3 = 0x800; // External Event 3
    static constexpr uint32_t RSTBR_EXTEVNT2 = 0x400; // External Event 2
    static constexpr uint32_t RSTBR_EXTEVNT1 = 0x200; // External Event 1
    static constexpr uint32_t RSTBR_MSTCMP4 = 0x100; // Master compare 4
    static constexpr uint32_t RSTBR_MSTCMP3 = 0x80; // Master compare 3
    static constexpr uint32_t RSTBR_MSTCMP2 = 0x40; // Master compare 2
    static constexpr uint32_t RSTBR_MSTCMP1 = 0x20; // Master compare 1
    static constexpr uint32_t RSTBR_MSTPER = 0x10; // Master timer Period
    static constexpr uint32_t RSTBR_CMP4 = 0x8; // Timer A compare 4 reset
    static constexpr uint32_t RSTBR_CMP2 = 0x4; // Timer A compare 2 reset
    static constexpr uint32_t RSTBR_UPDT = 0x2; // Timer A Update reset

    static constexpr uint32_t CHPBR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<7, 0xf> CHPBR_STRTPW; // STRTPW
    typedef bit_field_t<4, 0x7> CHPBR_CHPDTY; // Timerx chopper duty cycle value
    typedef bit_field_t<0, 0xf> CHPBR_CHPFRQ; // Timerx carrier frequency value

    static constexpr uint32_t CPT1BCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CPT1BCR_TECMP2 = 0x80000000; // Timer E Compare 2
    static constexpr uint32_t CPT1BCR_TECMP1 = 0x40000000; // Timer E Compare 1
    static constexpr uint32_t CPT1BCR_TE1RST = 0x20000000; // Timer E output 1 Reset
    static constexpr uint32_t CPT1BCR_TE1SET = 0x10000000; // Timer E output 1 Set
    static constexpr uint32_t CPT1BCR_TDCMP2 = 0x8000000; // Timer D Compare 2
    static constexpr uint32_t CPT1BCR_TDCMP1 = 0x4000000; // Timer D Compare 1
    static constexpr uint32_t CPT1BCR_TD1RST = 0x2000000; // Timer D output 1 Reset
    static constexpr uint32_t CPT1BCR_TD1SET = 0x1000000; // Timer D output 1 Set
    static constexpr uint32_t CPT1BCR_TCCMP2 = 0x800000; // Timer C Compare 2
    static constexpr uint32_t CPT1BCR_TCCMP1 = 0x400000; // Timer C Compare 1
    static constexpr uint32_t CPT1BCR_TC1RST = 0x200000; // Timer C output 1 Reset
    static constexpr uint32_t CPT1BCR_TC1SET = 0x100000; // Timer C output 1 Set
    static constexpr uint32_t CPT1BCR_TACMP2 = 0x8000; // Timer A Compare 2
    static constexpr uint32_t CPT1BCR_TACMP1 = 0x4000; // Timer A Compare 1
    static constexpr uint32_t CPT1BCR_TA1RST = 0x2000; // Timer A output 1 Reset
    static constexpr uint32_t CPT1BCR_TA1SET = 0x1000; // Timer A output 1 Set
    static constexpr uint32_t CPT1BCR_EXEV10CPT = 0x800; // External Event 10 Capture
    static constexpr uint32_t CPT1BCR_EXEV9CPT = 0x400; // External Event 9 Capture
    static constexpr uint32_t CPT1BCR_EXEV8CPT = 0x200; // External Event 8 Capture
    static constexpr uint32_t CPT1BCR_EXEV7CPT = 0x100; // External Event 7 Capture
    static constexpr uint32_t CPT1BCR_EXEV6CPT = 0x80; // External Event 6 Capture
    static constexpr uint32_t CPT1BCR_EXEV5CPT = 0x40; // External Event 5 Capture
    static constexpr uint32_t CPT1BCR_EXEV4CPT = 0x20; // External Event 4 Capture
    static constexpr uint32_t CPT1BCR_EXEV3CPT = 0x10; // External Event 3 Capture
    static constexpr uint32_t CPT1BCR_EXEV2CPT = 0x8; // External Event 2 Capture
    static constexpr uint32_t CPT1BCR_EXEV1CPT = 0x4; // External Event 1 Capture
    static constexpr uint32_t CPT1BCR_UDPCPT = 0x2; // Update Capture
    static constexpr uint32_t CPT1BCR_SWCPT = 0x1; // Software Capture

    static constexpr uint32_t CPT2BCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CPT2BCR_TECMP2 = 0x80000000; // Timer E Compare 2
    static constexpr uint32_t CPT2BCR_TECMP1 = 0x40000000; // Timer E Compare 1
    static constexpr uint32_t CPT2BCR_TE1RST = 0x20000000; // Timer E output 1 Reset
    static constexpr uint32_t CPT2BCR_TE1SET = 0x10000000; // Timer E output 1 Set
    static constexpr uint32_t CPT2BCR_TDCMP2 = 0x8000000; // Timer D Compare 2
    static constexpr uint32_t CPT2BCR_TDCMP1 = 0x4000000; // Timer D Compare 1
    static constexpr uint32_t CPT2BCR_TD1RST = 0x2000000; // Timer D output 1 Reset
    static constexpr uint32_t CPT2BCR_TD1SET = 0x1000000; // Timer D output 1 Set
    static constexpr uint32_t CPT2BCR_TCCMP2 = 0x800000; // Timer C Compare 2
    static constexpr uint32_t CPT2BCR_TCCMP1 = 0x400000; // Timer C Compare 1
    static constexpr uint32_t CPT2BCR_TC1RST = 0x200000; // Timer C output 1 Reset
    static constexpr uint32_t CPT2BCR_TC1SET = 0x100000; // Timer C output 1 Set
    static constexpr uint32_t CPT2BCR_TACMP2 = 0x8000; // Timer A Compare 2
    static constexpr uint32_t CPT2BCR_TACMP1 = 0x4000; // Timer A Compare 1
    static constexpr uint32_t CPT2BCR_TA1RST = 0x2000; // Timer A output 1 Reset
    static constexpr uint32_t CPT2BCR_TA1SET = 0x1000; // Timer A output 1 Set
    static constexpr uint32_t CPT2BCR_EXEV10CPT = 0x800; // External Event 10 Capture
    static constexpr uint32_t CPT2BCR_EXEV9CPT = 0x400; // External Event 9 Capture
    static constexpr uint32_t CPT2BCR_EXEV8CPT = 0x200; // External Event 8 Capture
    static constexpr uint32_t CPT2BCR_EXEV7CPT = 0x100; // External Event 7 Capture
    static constexpr uint32_t CPT2BCR_EXEV6CPT = 0x80; // External Event 6 Capture
    static constexpr uint32_t CPT2BCR_EXEV5CPT = 0x40; // External Event 5 Capture
    static constexpr uint32_t CPT2BCR_EXEV4CPT = 0x20; // External Event 4 Capture
    static constexpr uint32_t CPT2BCR_EXEV3CPT = 0x10; // External Event 3 Capture
    static constexpr uint32_t CPT2BCR_EXEV2CPT = 0x8; // External Event 2 Capture
    static constexpr uint32_t CPT2BCR_EXEV1CPT = 0x4; // External Event 1 Capture
    static constexpr uint32_t CPT2BCR_UDPCPT = 0x2; // Update Capture
    static constexpr uint32_t CPT2BCR_SWCPT = 0x1; // Software Capture

    static constexpr uint32_t OUTBR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OUTBR_DIDL2 = 0x800000; // Output 2 Deadtime upon burst mode Idle entry
    static constexpr uint32_t OUTBR_CHP2 = 0x400000; // Output 2 Chopper enable
    typedef bit_field_t<20, 0x3> OUTBR_FAULT2; // Output 2 Fault state
    static constexpr uint32_t OUTBR_IDLES2 = 0x80000; // Output 2 Idle State
    static constexpr uint32_t OUTBR_IDLEM2 = 0x40000; // Output 2 Idle mode
    static constexpr uint32_t OUTBR_POL2 = 0x20000; // Output 2 polarity
    typedef bit_field_t<10, 0x7> OUTBR_DLYPRT; // Delayed Protection
    static constexpr uint32_t OUTBR_DLYPRTEN = 0x200; // Delayed Protection Enable
    static constexpr uint32_t OUTBR_DTEN = 0x100; // Deadtime enable
    static constexpr uint32_t OUTBR_DIDL1 = 0x80; // Output 1 Deadtime upon burst mode Idle entry
    static constexpr uint32_t OUTBR_CHP1 = 0x40; // Output 1 Chopper enable
    typedef bit_field_t<4, 0x3> OUTBR_FAULT1; // Output 1 Fault state
    static constexpr uint32_t OUTBR_IDLES1 = 0x8; // Output 1 Idle State
    static constexpr uint32_t OUTBR_IDLEM1 = 0x4; // Output 1 Idle mode
    static constexpr uint32_t OUTBR_POL1 = 0x2; // Output 1 polarity

    static constexpr uint32_t FLTBR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FLTBR_FLTLCK = 0x80000000; // Fault sources Lock
    static constexpr uint32_t FLTBR_FLT5EN = 0x10; // Fault 5 enable
    static constexpr uint32_t FLTBR_FLT4EN = 0x8; // Fault 4 enable
    static constexpr uint32_t FLTBR_FLT3EN = 0x4; // Fault 3 enable
    static constexpr uint32_t FLTBR_FLT2EN = 0x2; // Fault 2 enable
    static constexpr uint32_t FLTBR_FLT1EN = 0x1; // Fault 1 enable
};

// HRTIM_TIMC: High Resolution Timer: TIMC

struct stm32h742x_hrtim_timc_t
{
    volatile uint32_t TIMCCR; // Timerx Control Register
    volatile uint32_t TIMCISR; // Timerx Interrupt Status Register
    volatile uint32_t TIMCICR; // Timerx Interrupt Clear Register
    volatile uint32_t TIMCDIER5; // TIMxDIER5
    volatile uint32_t CNTCR; // Timerx Counter Register
    volatile uint32_t PERCR; // Timerx Period Register
    volatile uint32_t REPCR; // Timerx Repetition Register
    volatile uint32_t CMP1CR; // Timerx Compare 1 Register
    volatile uint32_t CMP1CCR; // Timerx Compare 1 Compound Register
    volatile uint32_t CMP2CR; // Timerx Compare 2 Register
    volatile uint32_t CMP3CR; // Timerx Compare 3 Register
    volatile uint32_t CMP4CR; // Timerx Compare 4 Register
    volatile uint32_t CPT1CR; // Timerx Capture 1 Register
    volatile uint32_t CPT2CR; // Timerx Capture 2 Register
    volatile uint32_t DTCR; // Timerx Deadtime Register
    volatile uint32_t SETC1R; // Timerx Output1 Set Register
    volatile uint32_t RSTC1R; // Timerx Output1 Reset Register
    volatile uint32_t SETC2R; // Timerx Output2 Set Register
    volatile uint32_t RSTC2R; // Timerx Output2 Reset Register
    volatile uint32_t EEFCR1; // Timerx External Event Filtering Register 1
    volatile uint32_t EEFCR2; // Timerx External Event Filtering Register 2
    volatile uint32_t RSTCR; // TimerA Reset Register
    volatile uint32_t CHPCR; // Timerx Chopper Register
    volatile uint32_t CPT1CCR; // Timerx Capture 2 Control Register
    volatile uint32_t CPT2CCR; // CPT2xCR
    volatile uint32_t OUTCR; // Timerx Output Register
    volatile uint32_t FLTCR; // Timerx Fault Register

    static constexpr uint32_t TIMCCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<28, 0xf> TIMCCR_UPDGAT; // Update Gating
    static constexpr uint32_t TIMCCR_PREEN = 0x8000000; // Preload enable
    typedef bit_field_t<25, 0x3> TIMCCR_DACSYNC; // AC Synchronization
    static constexpr uint32_t TIMCCR_MSTU = 0x1000000; // Master Timer update
    static constexpr uint32_t TIMCCR_TEU = 0x800000; // TEU
    static constexpr uint32_t TIMCCR_TDU = 0x400000; // TDU
    static constexpr uint32_t TIMCCR_TCU = 0x200000; // TCU
    static constexpr uint32_t TIMCCR_TBU = 0x100000; // TBU
    static constexpr uint32_t TIMCCR_TXRSTU = 0x40000; // Timerx reset update
    static constexpr uint32_t TIMCCR_TXREPU = 0x20000; // Timer x Repetition update
    typedef bit_field_t<14, 0x3> TIMCCR_DELCMP4; // Delayed CMP4 mode
    typedef bit_field_t<12, 0x3> TIMCCR_DELCMP2; // Delayed CMP2 mode
    static constexpr uint32_t TIMCCR_SYNCSTRTX = 0x800; // Synchronization Starts Timer x
    static constexpr uint32_t TIMCCR_SYNCRSTX = 0x400; // Synchronization Resets Timer x
    static constexpr uint32_t TIMCCR_PSHPLL = 0x40; // Push-Pull mode enable
    static constexpr uint32_t TIMCCR_HALF = 0x20; // Half mode enable
    static constexpr uint32_t TIMCCR_RETRIG = 0x10; // Re-triggerable mode
    static constexpr uint32_t TIMCCR_CONT = 0x8; // Continuous mode
    typedef bit_field_t<0, 0x7> TIMCCR_CK_PSCX; // HRTIM Timer x Clock prescaler

    static constexpr uint32_t TIMCISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t TIMCISR_O2STAT = 0x80000; // Output 2 State
    static constexpr uint32_t TIMCISR_O1STAT = 0x40000; // Output 1 State
    static constexpr uint32_t TIMCISR_IPPSTAT = 0x20000; // Idle Push Pull Status
    static constexpr uint32_t TIMCISR_CPPSTAT = 0x10000; // Current Push Pull Status
    static constexpr uint32_t TIMCISR_DLYPRT = 0x4000; // Delayed Protection Flag
    static constexpr uint32_t TIMCISR_RST = 0x2000; // Reset Interrupt Flag
    static constexpr uint32_t TIMCISR_RSTX2 = 0x1000; // Output 2 Reset Interrupt Flag
    static constexpr uint32_t TIMCISR_SETX2 = 0x800; // Output 2 Set Interrupt Flag
    static constexpr uint32_t TIMCISR_RSTX1 = 0x400; // Output 1 Reset Interrupt Flag
    static constexpr uint32_t TIMCISR_SETX1 = 0x200; // Output 1 Set Interrupt Flag
    static constexpr uint32_t TIMCISR_CPT2 = 0x100; // Capture2 Interrupt Flag
    static constexpr uint32_t TIMCISR_CPT1 = 0x80; // Capture1 Interrupt Flag
    static constexpr uint32_t TIMCISR_UPD = 0x40; // Update Interrupt Flag
    static constexpr uint32_t TIMCISR_REP = 0x10; // Repetition Interrupt Flag
    static constexpr uint32_t TIMCISR_CMP4 = 0x8; // Compare 4 Interrupt Flag
    static constexpr uint32_t TIMCISR_CMP3 = 0x4; // Compare 3 Interrupt Flag
    static constexpr uint32_t TIMCISR_CMP2 = 0x2; // Compare 2 Interrupt Flag
    static constexpr uint32_t TIMCISR_CMP1 = 0x1; // Compare 1 Interrupt Flag

    static constexpr uint32_t TIMCICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t TIMCICR_DLYPRTC = 0x4000; // Delayed Protection Flag Clear
    static constexpr uint32_t TIMCICR_RSTC = 0x2000; // Reset Interrupt flag Clear
    static constexpr uint32_t TIMCICR_RSTX2C = 0x1000; // Output 2 Reset flag Clear
    static constexpr uint32_t TIMCICR_SET2XC = 0x800; // Output 2 Set flag Clear
    static constexpr uint32_t TIMCICR_RSTX1C = 0x400; // Output 1 Reset flag Clear
    static constexpr uint32_t TIMCICR_SET1XC = 0x200; // Output 1 Set flag Clear
    static constexpr uint32_t TIMCICR_CPT2C = 0x100; // Capture2 Interrupt flag Clear
    static constexpr uint32_t TIMCICR_CPT1C = 0x80; // Capture1 Interrupt flag Clear
    static constexpr uint32_t TIMCICR_UPDC = 0x40; // Update Interrupt flag Clear
    static constexpr uint32_t TIMCICR_REPC = 0x10; // Repetition Interrupt flag Clear
    static constexpr uint32_t TIMCICR_CMP4C = 0x8; // Compare 4 Interrupt flag Clear
    static constexpr uint32_t TIMCICR_CMP3C = 0x4; // Compare 3 Interrupt flag Clear
    static constexpr uint32_t TIMCICR_CMP2C = 0x2; // Compare 2 Interrupt flag Clear
    static constexpr uint32_t TIMCICR_CMP1C = 0x1; // Compare 1 Interrupt flag Clear

    static constexpr uint32_t TIMCDIER5_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t TIMCDIER5_DLYPRTDE = 0x40000000; // DLYPRTDE
    static constexpr uint32_t TIMCDIER5_RSTDE = 0x20000000; // RSTDE
    static constexpr uint32_t TIMCDIER5_RSTX2DE = 0x10000000; // RSTx2DE
    static constexpr uint32_t TIMCDIER5_SETX2DE = 0x8000000; // SETx2DE
    static constexpr uint32_t TIMCDIER5_RSTX1DE = 0x4000000; // RSTx1DE
    static constexpr uint32_t TIMCDIER5_SET1XDE = 0x2000000; // SET1xDE
    static constexpr uint32_t TIMCDIER5_CPT2DE = 0x1000000; // CPT2DE
    static constexpr uint32_t TIMCDIER5_CPT1DE = 0x800000; // CPT1DE
    static constexpr uint32_t TIMCDIER5_UPDDE = 0x400000; // UPDDE
    static constexpr uint32_t TIMCDIER5_REPDE = 0x100000; // REPDE
    static constexpr uint32_t TIMCDIER5_CMP4DE = 0x80000; // CMP4DE
    static constexpr uint32_t TIMCDIER5_CMP3DE = 0x40000; // CMP3DE
    static constexpr uint32_t TIMCDIER5_CMP2DE = 0x20000; // CMP2DE
    static constexpr uint32_t TIMCDIER5_CMP1DE = 0x10000; // CMP1DE
    static constexpr uint32_t TIMCDIER5_DLYPRTIE = 0x4000; // DLYPRTIE
    static constexpr uint32_t TIMCDIER5_RSTIE = 0x2000; // RSTIE
    static constexpr uint32_t TIMCDIER5_RSTX2IE = 0x1000; // RSTx2IE
    static constexpr uint32_t TIMCDIER5_SETX2IE = 0x800; // SETx2IE
    static constexpr uint32_t TIMCDIER5_RSTX1IE = 0x400; // RSTx1IE
    static constexpr uint32_t TIMCDIER5_SET1XIE = 0x200; // SET1xIE
    static constexpr uint32_t TIMCDIER5_CPT2IE = 0x100; // CPT2IE
    static constexpr uint32_t TIMCDIER5_CPT1IE = 0x80; // CPT1IE
    static constexpr uint32_t TIMCDIER5_UPDIE = 0x40; // UPDIE
    static constexpr uint32_t TIMCDIER5_REPIE = 0x10; // REPIE
    static constexpr uint32_t TIMCDIER5_CMP4IE = 0x8; // CMP4IE
    static constexpr uint32_t TIMCDIER5_CMP3IE = 0x4; // CMP3IE
    static constexpr uint32_t TIMCDIER5_CMP2IE = 0x2; // CMP2IE
    static constexpr uint32_t TIMCDIER5_CMP1IE = 0x1; // CMP1IE

    static constexpr uint32_t CNTCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNTCR_CNTX; // Timerx Counter value

    static constexpr uint32_t PERCR_RESET_VALUE = 0xffff; // Reset value
    typedef bit_field_t<0, 0xffff> PERCR_PERX; // Timerx Period value

    static constexpr uint32_t REPCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> REPCR_REPX; // Timerx Repetition counter value

    static constexpr uint32_t CMP1CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CMP1CR_CMP1X; // Timerx Compare 1 value

    static constexpr uint32_t CMP1CCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xff> CMP1CCR_REPX; // Timerx Repetition value (aliased from HRTIM_REPx register)
    typedef bit_field_t<0, 0xffff> CMP1CCR_CMP1X; // Timerx Compare 1 value

    static constexpr uint32_t CMP2CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CMP2CR_CMP2X; // Timerx Compare 2 value

    static constexpr uint32_t CMP3CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CMP3CR_CMP3X; // Timerx Compare 3 value

    static constexpr uint32_t CMP4CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CMP4CR_CMP4X; // Timerx Compare 4 value

    static constexpr uint32_t CPT1CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CPT1CR_CPT1X; // Timerx Capture 1 value

    static constexpr uint32_t CPT2CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CPT2CR_CPT2X; // Timerx Capture 2 value

    static constexpr uint32_t DTCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DTCR_DTFLKX = 0x80000000; // Deadtime Falling Lock
    static constexpr uint32_t DTCR_DTFSLKX = 0x40000000; // Deadtime Falling Sign Lock
    static constexpr uint32_t DTCR_SDTFX = 0x2000000; // Sign Deadtime Falling value
    typedef bit_field_t<16, 0x1ff> DTCR_DTFX; // Deadtime Falling value
    static constexpr uint32_t DTCR_DTRLKX = 0x8000; // Deadtime Rising Lock
    static constexpr uint32_t DTCR_DTRSLKX = 0x4000; // Deadtime Rising Sign Lock
    typedef bit_field_t<10, 0x7> DTCR_DTPRSC; // Deadtime Prescaler
    static constexpr uint32_t DTCR_SDTRX = 0x200; // Sign Deadtime Rising value
    typedef bit_field_t<0, 0x1ff> DTCR_DTRX; // Deadtime Rising value

    static constexpr uint32_t SETC1R_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SETC1R_UPDATE = 0x80000000; // Registers update (transfer preload to active)
    static constexpr uint32_t SETC1R_EXTEVNT10 = 0x40000000; // External Event 10
    static constexpr uint32_t SETC1R_EXTEVNT9 = 0x20000000; // External Event 9
    static constexpr uint32_t SETC1R_EXTEVNT8 = 0x10000000; // External Event 8
    static constexpr uint32_t SETC1R_EXTEVNT7 = 0x8000000; // External Event 7
    static constexpr uint32_t SETC1R_EXTEVNT6 = 0x4000000; // External Event 6
    static constexpr uint32_t SETC1R_EXTEVNT5 = 0x2000000; // External Event 5
    static constexpr uint32_t SETC1R_EXTEVNT4 = 0x1000000; // External Event 4
    static constexpr uint32_t SETC1R_EXTEVNT3 = 0x800000; // External Event 3
    static constexpr uint32_t SETC1R_EXTEVNT2 = 0x400000; // External Event 2
    static constexpr uint32_t SETC1R_EXTEVNT1 = 0x200000; // External Event 1
    static constexpr uint32_t SETC1R_TIMEVNT9 = 0x100000; // Timer Event 9
    static constexpr uint32_t SETC1R_TIMEVNT8 = 0x80000; // Timer Event 8
    static constexpr uint32_t SETC1R_TIMEVNT7 = 0x40000; // Timer Event 7
    static constexpr uint32_t SETC1R_TIMEVNT6 = 0x20000; // Timer Event 6
    static constexpr uint32_t SETC1R_TIMEVNT5 = 0x10000; // Timer Event 5
    static constexpr uint32_t SETC1R_TIMEVNT4 = 0x8000; // Timer Event 4
    static constexpr uint32_t SETC1R_TIMEVNT3 = 0x4000; // Timer Event 3
    static constexpr uint32_t SETC1R_TIMEVNT2 = 0x2000; // Timer Event 2
    static constexpr uint32_t SETC1R_TIMEVNT1 = 0x1000; // Timer Event 1
    static constexpr uint32_t SETC1R_MSTCMP4 = 0x800; // Master Compare 4
    static constexpr uint32_t SETC1R_MSTCMP3 = 0x400; // Master Compare 3
    static constexpr uint32_t SETC1R_MSTCMP2 = 0x200; // Master Compare 2
    static constexpr uint32_t SETC1R_MSTCMP1 = 0x100; // Master Compare 1
    static constexpr uint32_t SETC1R_MSTPER = 0x80; // Master Period
    static constexpr uint32_t SETC1R_CMP4 = 0x40; // Timer A compare 4
    static constexpr uint32_t SETC1R_CMP3 = 0x20; // Timer A compare 3
    static constexpr uint32_t SETC1R_CMP2 = 0x10; // Timer A compare 2
    static constexpr uint32_t SETC1R_CMP1 = 0x8; // Timer A compare 1
    static constexpr uint32_t SETC1R_PER = 0x4; // Timer A Period
    static constexpr uint32_t SETC1R_RESYNC = 0x2; // Timer A resynchronizaton
    static constexpr uint32_t SETC1R_SST = 0x1; // Software Set trigger

    static constexpr uint32_t RSTC1R_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RSTC1R_UPDATE = 0x80000000; // UPDATE
    static constexpr uint32_t RSTC1R_EXTEVNT10 = 0x40000000; // EXTEVNT10
    static constexpr uint32_t RSTC1R_EXTEVNT9 = 0x20000000; // EXTEVNT9
    static constexpr uint32_t RSTC1R_EXTEVNT8 = 0x10000000; // EXTEVNT8
    static constexpr uint32_t RSTC1R_EXTEVNT7 = 0x8000000; // EXTEVNT7
    static constexpr uint32_t RSTC1R_EXTEVNT6 = 0x4000000; // EXTEVNT6
    static constexpr uint32_t RSTC1R_EXTEVNT5 = 0x2000000; // EXTEVNT5
    static constexpr uint32_t RSTC1R_EXTEVNT4 = 0x1000000; // EXTEVNT4
    static constexpr uint32_t RSTC1R_EXTEVNT3 = 0x800000; // EXTEVNT3
    static constexpr uint32_t RSTC1R_EXTEVNT2 = 0x400000; // EXTEVNT2
    static constexpr uint32_t RSTC1R_EXTEVNT1 = 0x200000; // EXTEVNT1
    static constexpr uint32_t RSTC1R_TIMEVNT9 = 0x100000; // TIMEVNT9
    static constexpr uint32_t RSTC1R_TIMEVNT8 = 0x80000; // TIMEVNT8
    static constexpr uint32_t RSTC1R_TIMEVNT7 = 0x40000; // TIMEVNT7
    static constexpr uint32_t RSTC1R_TIMEVNT6 = 0x20000; // TIMEVNT6
    static constexpr uint32_t RSTC1R_TIMEVNT5 = 0x10000; // TIMEVNT5
    static constexpr uint32_t RSTC1R_TIMEVNT4 = 0x8000; // TIMEVNT4
    static constexpr uint32_t RSTC1R_TIMEVNT3 = 0x4000; // TIMEVNT3
    static constexpr uint32_t RSTC1R_TIMEVNT2 = 0x2000; // TIMEVNT2
    static constexpr uint32_t RSTC1R_TIMEVNT1 = 0x1000; // TIMEVNT1
    static constexpr uint32_t RSTC1R_MSTCMP4 = 0x800; // MSTCMP4
    static constexpr uint32_t RSTC1R_MSTCMP3 = 0x400; // MSTCMP3
    static constexpr uint32_t RSTC1R_MSTCMP2 = 0x200; // MSTCMP2
    static constexpr uint32_t RSTC1R_MSTCMP1 = 0x100; // MSTCMP1
    static constexpr uint32_t RSTC1R_MSTPER = 0x80; // MSTPER
    static constexpr uint32_t RSTC1R_CMP4 = 0x40; // CMP4
    static constexpr uint32_t RSTC1R_CMP3 = 0x20; // CMP3
    static constexpr uint32_t RSTC1R_CMP2 = 0x10; // CMP2
    static constexpr uint32_t RSTC1R_CMP1 = 0x8; // CMP1
    static constexpr uint32_t RSTC1R_PER = 0x4; // PER
    static constexpr uint32_t RSTC1R_RESYNC = 0x2; // RESYNC
    static constexpr uint32_t RSTC1R_SRT = 0x1; // SRT

    static constexpr uint32_t SETC2R_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SETC2R_UPDATE = 0x80000000; // UPDATE
    static constexpr uint32_t SETC2R_EXTEVNT10 = 0x40000000; // EXTEVNT10
    static constexpr uint32_t SETC2R_EXTEVNT9 = 0x20000000; // EXTEVNT9
    static constexpr uint32_t SETC2R_EXTEVNT8 = 0x10000000; // EXTEVNT8
    static constexpr uint32_t SETC2R_EXTEVNT7 = 0x8000000; // EXTEVNT7
    static constexpr uint32_t SETC2R_EXTEVNT6 = 0x4000000; // EXTEVNT6
    static constexpr uint32_t SETC2R_EXTEVNT5 = 0x2000000; // EXTEVNT5
    static constexpr uint32_t SETC2R_EXTEVNT4 = 0x1000000; // EXTEVNT4
    static constexpr uint32_t SETC2R_EXTEVNT3 = 0x800000; // EXTEVNT3
    static constexpr uint32_t SETC2R_EXTEVNT2 = 0x400000; // EXTEVNT2
    static constexpr uint32_t SETC2R_EXTEVNT1 = 0x200000; // EXTEVNT1
    static constexpr uint32_t SETC2R_TIMEVNT9 = 0x100000; // TIMEVNT9
    static constexpr uint32_t SETC2R_TIMEVNT8 = 0x80000; // TIMEVNT8
    static constexpr uint32_t SETC2R_TIMEVNT7 = 0x40000; // TIMEVNT7
    static constexpr uint32_t SETC2R_TIMEVNT6 = 0x20000; // TIMEVNT6
    static constexpr uint32_t SETC2R_TIMEVNT5 = 0x10000; // TIMEVNT5
    static constexpr uint32_t SETC2R_TIMEVNT4 = 0x8000; // TIMEVNT4
    static constexpr uint32_t SETC2R_TIMEVNT3 = 0x4000; // TIMEVNT3
    static constexpr uint32_t SETC2R_TIMEVNT2 = 0x2000; // TIMEVNT2
    static constexpr uint32_t SETC2R_TIMEVNT1 = 0x1000; // TIMEVNT1
    static constexpr uint32_t SETC2R_MSTCMP4 = 0x800; // MSTCMP4
    static constexpr uint32_t SETC2R_MSTCMP3 = 0x400; // MSTCMP3
    static constexpr uint32_t SETC2R_MSTCMP2 = 0x200; // MSTCMP2
    static constexpr uint32_t SETC2R_MSTCMP1 = 0x100; // MSTCMP1
    static constexpr uint32_t SETC2R_MSTPER = 0x80; // MSTPER
    static constexpr uint32_t SETC2R_CMP4 = 0x40; // CMP4
    static constexpr uint32_t SETC2R_CMP3 = 0x20; // CMP3
    static constexpr uint32_t SETC2R_CMP2 = 0x10; // CMP2
    static constexpr uint32_t SETC2R_CMP1 = 0x8; // CMP1
    static constexpr uint32_t SETC2R_PER = 0x4; // PER
    static constexpr uint32_t SETC2R_RESYNC = 0x2; // RESYNC
    static constexpr uint32_t SETC2R_SST = 0x1; // SST

    static constexpr uint32_t RSTC2R_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RSTC2R_UPDATE = 0x80000000; // UPDATE
    static constexpr uint32_t RSTC2R_EXTEVNT10 = 0x40000000; // EXTEVNT10
    static constexpr uint32_t RSTC2R_EXTEVNT9 = 0x20000000; // EXTEVNT9
    static constexpr uint32_t RSTC2R_EXTEVNT8 = 0x10000000; // EXTEVNT8
    static constexpr uint32_t RSTC2R_EXTEVNT7 = 0x8000000; // EXTEVNT7
    static constexpr uint32_t RSTC2R_EXTEVNT6 = 0x4000000; // EXTEVNT6
    static constexpr uint32_t RSTC2R_EXTEVNT5 = 0x2000000; // EXTEVNT5
    static constexpr uint32_t RSTC2R_EXTEVNT4 = 0x1000000; // EXTEVNT4
    static constexpr uint32_t RSTC2R_EXTEVNT3 = 0x800000; // EXTEVNT3
    static constexpr uint32_t RSTC2R_EXTEVNT2 = 0x400000; // EXTEVNT2
    static constexpr uint32_t RSTC2R_EXTEVNT1 = 0x200000; // EXTEVNT1
    static constexpr uint32_t RSTC2R_TIMEVNT9 = 0x100000; // TIMEVNT9
    static constexpr uint32_t RSTC2R_TIMEVNT8 = 0x80000; // TIMEVNT8
    static constexpr uint32_t RSTC2R_TIMEVNT7 = 0x40000; // TIMEVNT7
    static constexpr uint32_t RSTC2R_TIMEVNT6 = 0x20000; // TIMEVNT6
    static constexpr uint32_t RSTC2R_TIMEVNT5 = 0x10000; // TIMEVNT5
    static constexpr uint32_t RSTC2R_TIMEVNT4 = 0x8000; // TIMEVNT4
    static constexpr uint32_t RSTC2R_TIMEVNT3 = 0x4000; // TIMEVNT3
    static constexpr uint32_t RSTC2R_TIMEVNT2 = 0x2000; // TIMEVNT2
    static constexpr uint32_t RSTC2R_TIMEVNT1 = 0x1000; // TIMEVNT1
    static constexpr uint32_t RSTC2R_MSTCMP4 = 0x800; // MSTCMP4
    static constexpr uint32_t RSTC2R_MSTCMP3 = 0x400; // MSTCMP3
    static constexpr uint32_t RSTC2R_MSTCMP2 = 0x200; // MSTCMP2
    static constexpr uint32_t RSTC2R_MSTCMP1 = 0x100; // MSTCMP1
    static constexpr uint32_t RSTC2R_MSTPER = 0x80; // MSTPER
    static constexpr uint32_t RSTC2R_CMP4 = 0x40; // CMP4
    static constexpr uint32_t RSTC2R_CMP3 = 0x20; // CMP3
    static constexpr uint32_t RSTC2R_CMP2 = 0x10; // CMP2
    static constexpr uint32_t RSTC2R_CMP1 = 0x8; // CMP1
    static constexpr uint32_t RSTC2R_PER = 0x4; // PER
    static constexpr uint32_t RSTC2R_RESYNC = 0x2; // RESYNC
    static constexpr uint32_t RSTC2R_SRT = 0x1; // SRT

    static constexpr uint32_t EEFCR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<25, 0xf> EEFCR1_EE5FLTR; // External Event 5 filter
    static constexpr uint32_t EEFCR1_EE5LTCH = 0x1000000; // External Event 5 latch
    typedef bit_field_t<19, 0xf> EEFCR1_EE4FLTR; // External Event 4 filter
    static constexpr uint32_t EEFCR1_EE4LTCH = 0x40000; // External Event 4 latch
    typedef bit_field_t<13, 0xf> EEFCR1_EE3FLTR; // External Event 3 filter
    static constexpr uint32_t EEFCR1_EE3LTCH = 0x1000; // External Event 3 latch
    typedef bit_field_t<7, 0xf> EEFCR1_EE2FLTR; // External Event 2 filter
    static constexpr uint32_t EEFCR1_EE2LTCH = 0x40; // External Event 2 latch
    typedef bit_field_t<1, 0xf> EEFCR1_EE1FLTR; // External Event 1 filter
    static constexpr uint32_t EEFCR1_EE1LTCH = 0x1; // External Event 1 latch

    static constexpr uint32_t EEFCR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<25, 0xf> EEFCR2_EE10FLTR; // External Event 10 filter
    static constexpr uint32_t EEFCR2_EE10LTCH = 0x1000000; // External Event 10 latch
    typedef bit_field_t<19, 0xf> EEFCR2_EE9FLTR; // External Event 9 filter
    static constexpr uint32_t EEFCR2_EE9LTCH = 0x40000; // External Event 9 latch
    typedef bit_field_t<13, 0xf> EEFCR2_EE8FLTR; // External Event 8 filter
    static constexpr uint32_t EEFCR2_EE8LTCH = 0x1000; // External Event 8 latch
    typedef bit_field_t<7, 0xf> EEFCR2_EE7FLTR; // External Event 7 filter
    static constexpr uint32_t EEFCR2_EE7LTCH = 0x40; // External Event 7 latch
    typedef bit_field_t<1, 0xf> EEFCR2_EE6FLTR; // External Event 6 filter
    static constexpr uint32_t EEFCR2_EE6LTCH = 0x1; // External Event 6 latch

    static constexpr uint32_t RSTCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RSTCR_TIMECMP4 = 0x40000000; // Timer E Compare 4
    static constexpr uint32_t RSTCR_TIMECMP2 = 0x20000000; // Timer E Compare 2
    static constexpr uint32_t RSTCR_TIMECMP1 = 0x10000000; // Timer E Compare 1
    static constexpr uint32_t RSTCR_TIMDCMP4 = 0x8000000; // Timer D Compare 4
    static constexpr uint32_t RSTCR_TIMDCMP2 = 0x4000000; // Timer D Compare 2
    static constexpr uint32_t RSTCR_TIMDCMP1 = 0x2000000; // Timer D Compare 1
    static constexpr uint32_t RSTCR_TIMBCMP4 = 0x1000000; // Timer B Compare 4
    static constexpr uint32_t RSTCR_TIMBCMP2 = 0x800000; // Timer B Compare 2
    static constexpr uint32_t RSTCR_TIMBCMP1 = 0x400000; // Timer B Compare 1
    static constexpr uint32_t RSTCR_TIMACMP4 = 0x200000; // Timer A Compare 4
    static constexpr uint32_t RSTCR_TIMACMP2 = 0x100000; // Timer A Compare 2
    static constexpr uint32_t RSTCR_TIMACMP1 = 0x80000; // Timer A Compare 1
    static constexpr uint32_t RSTCR_EXTEVNT10 = 0x40000; // External Event 10
    static constexpr uint32_t RSTCR_EXTEVNT9 = 0x20000; // External Event 9
    static constexpr uint32_t RSTCR_EXTEVNT8 = 0x10000; // External Event 8
    static constexpr uint32_t RSTCR_EXTEVNT7 = 0x8000; // External Event 7
    static constexpr uint32_t RSTCR_EXTEVNT6 = 0x4000; // External Event 6
    static constexpr uint32_t RSTCR_EXTEVNT5 = 0x2000; // External Event 5
    static constexpr uint32_t RSTCR_EXTEVNT4 = 0x1000; // External Event 4
    static constexpr uint32_t RSTCR_EXTEVNT3 = 0x800; // External Event 3
    static constexpr uint32_t RSTCR_EXTEVNT2 = 0x400; // External Event 2
    static constexpr uint32_t RSTCR_EXTEVNT1 = 0x200; // External Event 1
    static constexpr uint32_t RSTCR_MSTCMP4 = 0x100; // Master compare 4
    static constexpr uint32_t RSTCR_MSTCMP3 = 0x80; // Master compare 3
    static constexpr uint32_t RSTCR_MSTCMP2 = 0x40; // Master compare 2
    static constexpr uint32_t RSTCR_MSTCMP1 = 0x20; // Master compare 1
    static constexpr uint32_t RSTCR_MSTPER = 0x10; // Master timer Period
    static constexpr uint32_t RSTCR_CMP4 = 0x8; // Timer A compare 4 reset
    static constexpr uint32_t RSTCR_CMP2 = 0x4; // Timer A compare 2 reset
    static constexpr uint32_t RSTCR_UPDT = 0x2; // Timer A Update reset

    static constexpr uint32_t CHPCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<7, 0xf> CHPCR_STRTPW; // STRTPW
    typedef bit_field_t<4, 0x7> CHPCR_CHPDTY; // Timerx chopper duty cycle value
    typedef bit_field_t<0, 0xf> CHPCR_CHPFRQ; // Timerx carrier frequency value

    static constexpr uint32_t CPT1CCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CPT1CCR_TECMP2 = 0x80000000; // Timer E Compare 2
    static constexpr uint32_t CPT1CCR_TECMP1 = 0x40000000; // Timer E Compare 1
    static constexpr uint32_t CPT1CCR_TE1RST = 0x20000000; // Timer E output 1 Reset
    static constexpr uint32_t CPT1CCR_TE1SET = 0x10000000; // Timer E output 1 Set
    static constexpr uint32_t CPT1CCR_TDCMP2 = 0x8000000; // Timer D Compare 2
    static constexpr uint32_t CPT1CCR_TDCMP1 = 0x4000000; // Timer D Compare 1
    static constexpr uint32_t CPT1CCR_TD1RST = 0x2000000; // Timer D output 1 Reset
    static constexpr uint32_t CPT1CCR_TD1SET = 0x1000000; // Timer D output 1 Set
    static constexpr uint32_t CPT1CCR_TBCMP2 = 0x80000; // Timer B Compare 2
    static constexpr uint32_t CPT1CCR_TBCMP1 = 0x40000; // Timer B Compare 1
    static constexpr uint32_t CPT1CCR_TB1RST = 0x20000; // Timer B output 1 Reset
    static constexpr uint32_t CPT1CCR_TB1SET = 0x10000; // Timer B output 1 Set
    static constexpr uint32_t CPT1CCR_TACMP2 = 0x8000; // Timer A Compare 2
    static constexpr uint32_t CPT1CCR_TACMP1 = 0x4000; // Timer A Compare 1
    static constexpr uint32_t CPT1CCR_TA1RST = 0x2000; // Timer A output 1 Reset
    static constexpr uint32_t CPT1CCR_TA1SET = 0x1000; // Timer A output 1 Set
    static constexpr uint32_t CPT1CCR_EXEV10CPT = 0x800; // External Event 10 Capture
    static constexpr uint32_t CPT1CCR_EXEV9CPT = 0x400; // External Event 9 Capture
    static constexpr uint32_t CPT1CCR_EXEV8CPT = 0x200; // External Event 8 Capture
    static constexpr uint32_t CPT1CCR_EXEV7CPT = 0x100; // External Event 7 Capture
    static constexpr uint32_t CPT1CCR_EXEV6CPT = 0x80; // External Event 6 Capture
    static constexpr uint32_t CPT1CCR_EXEV5CPT = 0x40; // External Event 5 Capture
    static constexpr uint32_t CPT1CCR_EXEV4CPT = 0x20; // External Event 4 Capture
    static constexpr uint32_t CPT1CCR_EXEV3CPT = 0x10; // External Event 3 Capture
    static constexpr uint32_t CPT1CCR_EXEV2CPT = 0x8; // External Event 2 Capture
    static constexpr uint32_t CPT1CCR_EXEV1CPT = 0x4; // External Event 1 Capture
    static constexpr uint32_t CPT1CCR_UDPCPT = 0x2; // Update Capture
    static constexpr uint32_t CPT1CCR_SWCPT = 0x1; // Software Capture

    static constexpr uint32_t CPT2CCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CPT2CCR_TECMP2 = 0x80000000; // Timer E Compare 2
    static constexpr uint32_t CPT2CCR_TECMP1 = 0x40000000; // Timer E Compare 1
    static constexpr uint32_t CPT2CCR_TE1RST = 0x20000000; // Timer E output 1 Reset
    static constexpr uint32_t CPT2CCR_TE1SET = 0x10000000; // Timer E output 1 Set
    static constexpr uint32_t CPT2CCR_TDCMP2 = 0x8000000; // Timer D Compare 2
    static constexpr uint32_t CPT2CCR_TDCMP1 = 0x4000000; // Timer D Compare 1
    static constexpr uint32_t CPT2CCR_TD1RST = 0x2000000; // Timer D output 1 Reset
    static constexpr uint32_t CPT2CCR_TD1SET = 0x1000000; // Timer D output 1 Set
    static constexpr uint32_t CPT2CCR_TBCMP2 = 0x80000; // Timer B Compare 2
    static constexpr uint32_t CPT2CCR_TBCMP1 = 0x40000; // Timer B Compare 1
    static constexpr uint32_t CPT2CCR_TB1RST = 0x20000; // Timer B output 1 Reset
    static constexpr uint32_t CPT2CCR_TB1SET = 0x10000; // Timer B output 1 Set
    static constexpr uint32_t CPT2CCR_TACMP2 = 0x8000; // Timer A Compare 2
    static constexpr uint32_t CPT2CCR_TACMP1 = 0x4000; // Timer A Compare 1
    static constexpr uint32_t CPT2CCR_TA1RST = 0x2000; // Timer A output 1 Reset
    static constexpr uint32_t CPT2CCR_TA1SET = 0x1000; // Timer A output 1 Set
    static constexpr uint32_t CPT2CCR_EXEV10CPT = 0x800; // External Event 10 Capture
    static constexpr uint32_t CPT2CCR_EXEV9CPT = 0x400; // External Event 9 Capture
    static constexpr uint32_t CPT2CCR_EXEV8CPT = 0x200; // External Event 8 Capture
    static constexpr uint32_t CPT2CCR_EXEV7CPT = 0x100; // External Event 7 Capture
    static constexpr uint32_t CPT2CCR_EXEV6CPT = 0x80; // External Event 6 Capture
    static constexpr uint32_t CPT2CCR_EXEV5CPT = 0x40; // External Event 5 Capture
    static constexpr uint32_t CPT2CCR_EXEV4CPT = 0x20; // External Event 4 Capture
    static constexpr uint32_t CPT2CCR_EXEV3CPT = 0x10; // External Event 3 Capture
    static constexpr uint32_t CPT2CCR_EXEV2CPT = 0x8; // External Event 2 Capture
    static constexpr uint32_t CPT2CCR_EXEV1CPT = 0x4; // External Event 1 Capture
    static constexpr uint32_t CPT2CCR_UDPCPT = 0x2; // Update Capture
    static constexpr uint32_t CPT2CCR_SWCPT = 0x1; // Software Capture

    static constexpr uint32_t OUTCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OUTCR_DIDL2 = 0x800000; // Output 2 Deadtime upon burst mode Idle entry
    static constexpr uint32_t OUTCR_CHP2 = 0x400000; // Output 2 Chopper enable
    typedef bit_field_t<20, 0x3> OUTCR_FAULT2; // Output 2 Fault state
    static constexpr uint32_t OUTCR_IDLES2 = 0x80000; // Output 2 Idle State
    static constexpr uint32_t OUTCR_IDLEM2 = 0x40000; // Output 2 Idle mode
    static constexpr uint32_t OUTCR_POL2 = 0x20000; // Output 2 polarity
    typedef bit_field_t<10, 0x7> OUTCR_DLYPRT; // Delayed Protection
    static constexpr uint32_t OUTCR_DLYPRTEN = 0x200; // Delayed Protection Enable
    static constexpr uint32_t OUTCR_DTEN = 0x100; // Deadtime enable
    static constexpr uint32_t OUTCR_DIDL1 = 0x80; // Output 1 Deadtime upon burst mode Idle entry
    static constexpr uint32_t OUTCR_CHP1 = 0x40; // Output 1 Chopper enable
    typedef bit_field_t<4, 0x3> OUTCR_FAULT1; // Output 1 Fault state
    static constexpr uint32_t OUTCR_IDLES1 = 0x8; // Output 1 Idle State
    static constexpr uint32_t OUTCR_IDLEM1 = 0x4; // Output 1 Idle mode
    static constexpr uint32_t OUTCR_POL1 = 0x2; // Output 1 polarity

    static constexpr uint32_t FLTCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FLTCR_FLTLCK = 0x80000000; // Fault sources Lock
    static constexpr uint32_t FLTCR_FLT5EN = 0x10; // Fault 5 enable
    static constexpr uint32_t FLTCR_FLT4EN = 0x8; // Fault 4 enable
    static constexpr uint32_t FLTCR_FLT3EN = 0x4; // Fault 3 enable
    static constexpr uint32_t FLTCR_FLT2EN = 0x2; // Fault 2 enable
    static constexpr uint32_t FLTCR_FLT1EN = 0x1; // Fault 1 enable
};

// HRTIM_TIMD: High Resolution Timer: TIMD

struct stm32h742x_hrtim_timd_t
{
    volatile uint32_t TIMDCR; // Timerx Control Register
    volatile uint32_t TIMDISR; // Timerx Interrupt Status Register
    volatile uint32_t TIMDICR; // Timerx Interrupt Clear Register
    volatile uint32_t TIMDDIER5; // TIMxDIER5
    volatile uint32_t CNTDR; // Timerx Counter Register
    volatile uint32_t PERDR; // Timerx Period Register
    volatile uint32_t REPDR; // Timerx Repetition Register
    volatile uint32_t CMP1DR; // Timerx Compare 1 Register
    volatile uint32_t CMP1CDR; // Timerx Compare 1 Compound Register
    volatile uint32_t CMP2DR; // Timerx Compare 2 Register
    volatile uint32_t CMP3DR; // Timerx Compare 3 Register
    volatile uint32_t CMP4DR; // Timerx Compare 4 Register
    volatile uint32_t CPT1DR; // Timerx Capture 1 Register
    volatile uint32_t CPT2DR; // Timerx Capture 2 Register
    volatile uint32_t DTDR; // Timerx Deadtime Register
    volatile uint32_t SETD1R; // Timerx Output1 Set Register
    volatile uint32_t RSTD1R; // Timerx Output1 Reset Register
    volatile uint32_t SETD2R; // Timerx Output2 Set Register
    volatile uint32_t RSTD2R; // Timerx Output2 Reset Register
    volatile uint32_t EEFDR1; // Timerx External Event Filtering Register 1
    volatile uint32_t EEFDR2; // Timerx External Event Filtering Register 2
    volatile uint32_t RSTDR; // TimerA Reset Register
    volatile uint32_t CHPDR; // Timerx Chopper Register
    volatile uint32_t CPT1DCR; // Timerx Capture 2 Control Register
    volatile uint32_t CPT2DCR; // CPT2xCR
    volatile uint32_t OUTDR; // Timerx Output Register
    volatile uint32_t FLTDR; // Timerx Fault Register

    static constexpr uint32_t TIMDCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<28, 0xf> TIMDCR_UPDGAT; // Update Gating
    static constexpr uint32_t TIMDCR_PREEN = 0x8000000; // Preload enable
    typedef bit_field_t<25, 0x3> TIMDCR_DACSYNC; // AC Synchronization
    static constexpr uint32_t TIMDCR_MSTU = 0x1000000; // Master Timer update
    static constexpr uint32_t TIMDCR_TEU = 0x800000; // TEU
    static constexpr uint32_t TIMDCR_TDU = 0x400000; // TDU
    static constexpr uint32_t TIMDCR_TCU = 0x200000; // TCU
    static constexpr uint32_t TIMDCR_TBU = 0x100000; // TBU
    static constexpr uint32_t TIMDCR_TXRSTU = 0x40000; // Timerx reset update
    static constexpr uint32_t TIMDCR_TXREPU = 0x20000; // Timer x Repetition update
    typedef bit_field_t<14, 0x3> TIMDCR_DELCMP4; // Delayed CMP4 mode
    typedef bit_field_t<12, 0x3> TIMDCR_DELCMP2; // Delayed CMP2 mode
    static constexpr uint32_t TIMDCR_SYNCSTRTX = 0x800; // Synchronization Starts Timer x
    static constexpr uint32_t TIMDCR_SYNCRSTX = 0x400; // Synchronization Resets Timer x
    static constexpr uint32_t TIMDCR_PSHPLL = 0x40; // Push-Pull mode enable
    static constexpr uint32_t TIMDCR_HALF = 0x20; // Half mode enable
    static constexpr uint32_t TIMDCR_RETRIG = 0x10; // Re-triggerable mode
    static constexpr uint32_t TIMDCR_CONT = 0x8; // Continuous mode
    typedef bit_field_t<0, 0x7> TIMDCR_CK_PSCX; // HRTIM Timer x Clock prescaler

    static constexpr uint32_t TIMDISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t TIMDISR_O2STAT = 0x80000; // Output 2 State
    static constexpr uint32_t TIMDISR_O1STAT = 0x40000; // Output 1 State
    static constexpr uint32_t TIMDISR_IPPSTAT = 0x20000; // Idle Push Pull Status
    static constexpr uint32_t TIMDISR_CPPSTAT = 0x10000; // Current Push Pull Status
    static constexpr uint32_t TIMDISR_DLYPRT = 0x4000; // Delayed Protection Flag
    static constexpr uint32_t TIMDISR_RST = 0x2000; // Reset Interrupt Flag
    static constexpr uint32_t TIMDISR_RSTX2 = 0x1000; // Output 2 Reset Interrupt Flag
    static constexpr uint32_t TIMDISR_SETX2 = 0x800; // Output 2 Set Interrupt Flag
    static constexpr uint32_t TIMDISR_RSTX1 = 0x400; // Output 1 Reset Interrupt Flag
    static constexpr uint32_t TIMDISR_SETX1 = 0x200; // Output 1 Set Interrupt Flag
    static constexpr uint32_t TIMDISR_CPT2 = 0x100; // Capture2 Interrupt Flag
    static constexpr uint32_t TIMDISR_CPT1 = 0x80; // Capture1 Interrupt Flag
    static constexpr uint32_t TIMDISR_UPD = 0x40; // Update Interrupt Flag
    static constexpr uint32_t TIMDISR_REP = 0x10; // Repetition Interrupt Flag
    static constexpr uint32_t TIMDISR_CMP4 = 0x8; // Compare 4 Interrupt Flag
    static constexpr uint32_t TIMDISR_CMP3 = 0x4; // Compare 3 Interrupt Flag
    static constexpr uint32_t TIMDISR_CMP2 = 0x2; // Compare 2 Interrupt Flag
    static constexpr uint32_t TIMDISR_CMP1 = 0x1; // Compare 1 Interrupt Flag

    static constexpr uint32_t TIMDICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t TIMDICR_DLYPRTC = 0x4000; // Delayed Protection Flag Clear
    static constexpr uint32_t TIMDICR_RSTC = 0x2000; // Reset Interrupt flag Clear
    static constexpr uint32_t TIMDICR_RSTX2C = 0x1000; // Output 2 Reset flag Clear
    static constexpr uint32_t TIMDICR_SET2XC = 0x800; // Output 2 Set flag Clear
    static constexpr uint32_t TIMDICR_RSTX1C = 0x400; // Output 1 Reset flag Clear
    static constexpr uint32_t TIMDICR_SET1XC = 0x200; // Output 1 Set flag Clear
    static constexpr uint32_t TIMDICR_CPT2C = 0x100; // Capture2 Interrupt flag Clear
    static constexpr uint32_t TIMDICR_CPT1C = 0x80; // Capture1 Interrupt flag Clear
    static constexpr uint32_t TIMDICR_UPDC = 0x40; // Update Interrupt flag Clear
    static constexpr uint32_t TIMDICR_REPC = 0x10; // Repetition Interrupt flag Clear
    static constexpr uint32_t TIMDICR_CMP4C = 0x8; // Compare 4 Interrupt flag Clear
    static constexpr uint32_t TIMDICR_CMP3C = 0x4; // Compare 3 Interrupt flag Clear
    static constexpr uint32_t TIMDICR_CMP2C = 0x2; // Compare 2 Interrupt flag Clear
    static constexpr uint32_t TIMDICR_CMP1C = 0x1; // Compare 1 Interrupt flag Clear

    static constexpr uint32_t TIMDDIER5_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t TIMDDIER5_DLYPRTDE = 0x40000000; // DLYPRTDE
    static constexpr uint32_t TIMDDIER5_RSTDE = 0x20000000; // RSTDE
    static constexpr uint32_t TIMDDIER5_RSTX2DE = 0x10000000; // RSTx2DE
    static constexpr uint32_t TIMDDIER5_SETX2DE = 0x8000000; // SETx2DE
    static constexpr uint32_t TIMDDIER5_RSTX1DE = 0x4000000; // RSTx1DE
    static constexpr uint32_t TIMDDIER5_SET1XDE = 0x2000000; // SET1xDE
    static constexpr uint32_t TIMDDIER5_CPT2DE = 0x1000000; // CPT2DE
    static constexpr uint32_t TIMDDIER5_CPT1DE = 0x800000; // CPT1DE
    static constexpr uint32_t TIMDDIER5_UPDDE = 0x400000; // UPDDE
    static constexpr uint32_t TIMDDIER5_REPDE = 0x100000; // REPDE
    static constexpr uint32_t TIMDDIER5_CMP4DE = 0x80000; // CMP4DE
    static constexpr uint32_t TIMDDIER5_CMP3DE = 0x40000; // CMP3DE
    static constexpr uint32_t TIMDDIER5_CMP2DE = 0x20000; // CMP2DE
    static constexpr uint32_t TIMDDIER5_CMP1DE = 0x10000; // CMP1DE
    static constexpr uint32_t TIMDDIER5_DLYPRTIE = 0x4000; // DLYPRTIE
    static constexpr uint32_t TIMDDIER5_RSTIE = 0x2000; // RSTIE
    static constexpr uint32_t TIMDDIER5_RSTX2IE = 0x1000; // RSTx2IE
    static constexpr uint32_t TIMDDIER5_SETX2IE = 0x800; // SETx2IE
    static constexpr uint32_t TIMDDIER5_RSTX1IE = 0x400; // RSTx1IE
    static constexpr uint32_t TIMDDIER5_SET1XIE = 0x200; // SET1xIE
    static constexpr uint32_t TIMDDIER5_CPT2IE = 0x100; // CPT2IE
    static constexpr uint32_t TIMDDIER5_CPT1IE = 0x80; // CPT1IE
    static constexpr uint32_t TIMDDIER5_UPDIE = 0x40; // UPDIE
    static constexpr uint32_t TIMDDIER5_REPIE = 0x10; // REPIE
    static constexpr uint32_t TIMDDIER5_CMP4IE = 0x8; // CMP4IE
    static constexpr uint32_t TIMDDIER5_CMP3IE = 0x4; // CMP3IE
    static constexpr uint32_t TIMDDIER5_CMP2IE = 0x2; // CMP2IE
    static constexpr uint32_t TIMDDIER5_CMP1IE = 0x1; // CMP1IE

    static constexpr uint32_t CNTDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNTDR_CNTX; // Timerx Counter value

    static constexpr uint32_t PERDR_RESET_VALUE = 0xffff; // Reset value
    typedef bit_field_t<0, 0xffff> PERDR_PERX; // Timerx Period value

    static constexpr uint32_t REPDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> REPDR_REPX; // Timerx Repetition counter value

    static constexpr uint32_t CMP1DR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CMP1DR_CMP1X; // Timerx Compare 1 value

    static constexpr uint32_t CMP1CDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xff> CMP1CDR_REPX; // Timerx Repetition value (aliased from HRTIM_REPx register)
    typedef bit_field_t<0, 0xffff> CMP1CDR_CMP1X; // Timerx Compare 1 value

    static constexpr uint32_t CMP2DR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CMP2DR_CMP2X; // Timerx Compare 2 value

    static constexpr uint32_t CMP3DR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CMP3DR_CMP3X; // Timerx Compare 3 value

    static constexpr uint32_t CMP4DR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CMP4DR_CMP4X; // Timerx Compare 4 value

    static constexpr uint32_t CPT1DR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CPT1DR_CPT1X; // Timerx Capture 1 value

    static constexpr uint32_t CPT2DR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CPT2DR_CPT2X; // Timerx Capture 2 value

    static constexpr uint32_t DTDR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DTDR_DTFLKX = 0x80000000; // Deadtime Falling Lock
    static constexpr uint32_t DTDR_DTFSLKX = 0x40000000; // Deadtime Falling Sign Lock
    static constexpr uint32_t DTDR_SDTFX = 0x2000000; // Sign Deadtime Falling value
    typedef bit_field_t<16, 0x1ff> DTDR_DTFX; // Deadtime Falling value
    static constexpr uint32_t DTDR_DTRLKX = 0x8000; // Deadtime Rising Lock
    static constexpr uint32_t DTDR_DTRSLKX = 0x4000; // Deadtime Rising Sign Lock
    typedef bit_field_t<10, 0x7> DTDR_DTPRSC; // Deadtime Prescaler
    static constexpr uint32_t DTDR_SDTRX = 0x200; // Sign Deadtime Rising value
    typedef bit_field_t<0, 0x1ff> DTDR_DTRX; // Deadtime Rising value

    static constexpr uint32_t SETD1R_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SETD1R_UPDATE = 0x80000000; // Registers update (transfer preload to active)
    static constexpr uint32_t SETD1R_EXTEVNT10 = 0x40000000; // External Event 10
    static constexpr uint32_t SETD1R_EXTEVNT9 = 0x20000000; // External Event 9
    static constexpr uint32_t SETD1R_EXTEVNT8 = 0x10000000; // External Event 8
    static constexpr uint32_t SETD1R_EXTEVNT7 = 0x8000000; // External Event 7
    static constexpr uint32_t SETD1R_EXTEVNT6 = 0x4000000; // External Event 6
    static constexpr uint32_t SETD1R_EXTEVNT5 = 0x2000000; // External Event 5
    static constexpr uint32_t SETD1R_EXTEVNT4 = 0x1000000; // External Event 4
    static constexpr uint32_t SETD1R_EXTEVNT3 = 0x800000; // External Event 3
    static constexpr uint32_t SETD1R_EXTEVNT2 = 0x400000; // External Event 2
    static constexpr uint32_t SETD1R_EXTEVNT1 = 0x200000; // External Event 1
    static constexpr uint32_t SETD1R_TIMEVNT9 = 0x100000; // Timer Event 9
    static constexpr uint32_t SETD1R_TIMEVNT8 = 0x80000; // Timer Event 8
    static constexpr uint32_t SETD1R_TIMEVNT7 = 0x40000; // Timer Event 7
    static constexpr uint32_t SETD1R_TIMEVNT6 = 0x20000; // Timer Event 6
    static constexpr uint32_t SETD1R_TIMEVNT5 = 0x10000; // Timer Event 5
    static constexpr uint32_t SETD1R_TIMEVNT4 = 0x8000; // Timer Event 4
    static constexpr uint32_t SETD1R_TIMEVNT3 = 0x4000; // Timer Event 3
    static constexpr uint32_t SETD1R_TIMEVNT2 = 0x2000; // Timer Event 2
    static constexpr uint32_t SETD1R_TIMEVNT1 = 0x1000; // Timer Event 1
    static constexpr uint32_t SETD1R_MSTCMP4 = 0x800; // Master Compare 4
    static constexpr uint32_t SETD1R_MSTCMP3 = 0x400; // Master Compare 3
    static constexpr uint32_t SETD1R_MSTCMP2 = 0x200; // Master Compare 2
    static constexpr uint32_t SETD1R_MSTCMP1 = 0x100; // Master Compare 1
    static constexpr uint32_t SETD1R_MSTPER = 0x80; // Master Period
    static constexpr uint32_t SETD1R_CMP4 = 0x40; // Timer A compare 4
    static constexpr uint32_t SETD1R_CMP3 = 0x20; // Timer A compare 3
    static constexpr uint32_t SETD1R_CMP2 = 0x10; // Timer A compare 2
    static constexpr uint32_t SETD1R_CMP1 = 0x8; // Timer A compare 1
    static constexpr uint32_t SETD1R_PER = 0x4; // Timer A Period
    static constexpr uint32_t SETD1R_RESYNC = 0x2; // Timer A resynchronizaton
    static constexpr uint32_t SETD1R_SST = 0x1; // Software Set trigger

    static constexpr uint32_t RSTD1R_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RSTD1R_UPDATE = 0x80000000; // UPDATE
    static constexpr uint32_t RSTD1R_EXTEVNT10 = 0x40000000; // EXTEVNT10
    static constexpr uint32_t RSTD1R_EXTEVNT9 = 0x20000000; // EXTEVNT9
    static constexpr uint32_t RSTD1R_EXTEVNT8 = 0x10000000; // EXTEVNT8
    static constexpr uint32_t RSTD1R_EXTEVNT7 = 0x8000000; // EXTEVNT7
    static constexpr uint32_t RSTD1R_EXTEVNT6 = 0x4000000; // EXTEVNT6
    static constexpr uint32_t RSTD1R_EXTEVNT5 = 0x2000000; // EXTEVNT5
    static constexpr uint32_t RSTD1R_EXTEVNT4 = 0x1000000; // EXTEVNT4
    static constexpr uint32_t RSTD1R_EXTEVNT3 = 0x800000; // EXTEVNT3
    static constexpr uint32_t RSTD1R_EXTEVNT2 = 0x400000; // EXTEVNT2
    static constexpr uint32_t RSTD1R_EXTEVNT1 = 0x200000; // EXTEVNT1
    static constexpr uint32_t RSTD1R_TIMEVNT9 = 0x100000; // TIMEVNT9
    static constexpr uint32_t RSTD1R_TIMEVNT8 = 0x80000; // TIMEVNT8
    static constexpr uint32_t RSTD1R_TIMEVNT7 = 0x40000; // TIMEVNT7
    static constexpr uint32_t RSTD1R_TIMEVNT6 = 0x20000; // TIMEVNT6
    static constexpr uint32_t RSTD1R_TIMEVNT5 = 0x10000; // TIMEVNT5
    static constexpr uint32_t RSTD1R_TIMEVNT4 = 0x8000; // TIMEVNT4
    static constexpr uint32_t RSTD1R_TIMEVNT3 = 0x4000; // TIMEVNT3
    static constexpr uint32_t RSTD1R_TIMEVNT2 = 0x2000; // TIMEVNT2
    static constexpr uint32_t RSTD1R_TIMEVNT1 = 0x1000; // TIMEVNT1
    static constexpr uint32_t RSTD1R_MSTCMP4 = 0x800; // MSTCMP4
    static constexpr uint32_t RSTD1R_MSTCMP3 = 0x400; // MSTCMP3
    static constexpr uint32_t RSTD1R_MSTCMP2 = 0x200; // MSTCMP2
    static constexpr uint32_t RSTD1R_MSTCMP1 = 0x100; // MSTCMP1
    static constexpr uint32_t RSTD1R_MSTPER = 0x80; // MSTPER
    static constexpr uint32_t RSTD1R_CMP4 = 0x40; // CMP4
    static constexpr uint32_t RSTD1R_CMP3 = 0x20; // CMP3
    static constexpr uint32_t RSTD1R_CMP2 = 0x10; // CMP2
    static constexpr uint32_t RSTD1R_CMP1 = 0x8; // CMP1
    static constexpr uint32_t RSTD1R_PER = 0x4; // PER
    static constexpr uint32_t RSTD1R_RESYNC = 0x2; // RESYNC
    static constexpr uint32_t RSTD1R_SRT = 0x1; // SRT

    static constexpr uint32_t SETD2R_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SETD2R_UPDATE = 0x80000000; // UPDATE
    static constexpr uint32_t SETD2R_EXTEVNT10 = 0x40000000; // EXTEVNT10
    static constexpr uint32_t SETD2R_EXTEVNT9 = 0x20000000; // EXTEVNT9
    static constexpr uint32_t SETD2R_EXTEVNT8 = 0x10000000; // EXTEVNT8
    static constexpr uint32_t SETD2R_EXTEVNT7 = 0x8000000; // EXTEVNT7
    static constexpr uint32_t SETD2R_EXTEVNT6 = 0x4000000; // EXTEVNT6
    static constexpr uint32_t SETD2R_EXTEVNT5 = 0x2000000; // EXTEVNT5
    static constexpr uint32_t SETD2R_EXTEVNT4 = 0x1000000; // EXTEVNT4
    static constexpr uint32_t SETD2R_EXTEVNT3 = 0x800000; // EXTEVNT3
    static constexpr uint32_t SETD2R_EXTEVNT2 = 0x400000; // EXTEVNT2
    static constexpr uint32_t SETD2R_EXTEVNT1 = 0x200000; // EXTEVNT1
    static constexpr uint32_t SETD2R_TIMEVNT9 = 0x100000; // TIMEVNT9
    static constexpr uint32_t SETD2R_TIMEVNT8 = 0x80000; // TIMEVNT8
    static constexpr uint32_t SETD2R_TIMEVNT7 = 0x40000; // TIMEVNT7
    static constexpr uint32_t SETD2R_TIMEVNT6 = 0x20000; // TIMEVNT6
    static constexpr uint32_t SETD2R_TIMEVNT5 = 0x10000; // TIMEVNT5
    static constexpr uint32_t SETD2R_TIMEVNT4 = 0x8000; // TIMEVNT4
    static constexpr uint32_t SETD2R_TIMEVNT3 = 0x4000; // TIMEVNT3
    static constexpr uint32_t SETD2R_TIMEVNT2 = 0x2000; // TIMEVNT2
    static constexpr uint32_t SETD2R_TIMEVNT1 = 0x1000; // TIMEVNT1
    static constexpr uint32_t SETD2R_MSTCMP4 = 0x800; // MSTCMP4
    static constexpr uint32_t SETD2R_MSTCMP3 = 0x400; // MSTCMP3
    static constexpr uint32_t SETD2R_MSTCMP2 = 0x200; // MSTCMP2
    static constexpr uint32_t SETD2R_MSTCMP1 = 0x100; // MSTCMP1
    static constexpr uint32_t SETD2R_MSTPER = 0x80; // MSTPER
    static constexpr uint32_t SETD2R_CMP4 = 0x40; // CMP4
    static constexpr uint32_t SETD2R_CMP3 = 0x20; // CMP3
    static constexpr uint32_t SETD2R_CMP2 = 0x10; // CMP2
    static constexpr uint32_t SETD2R_CMP1 = 0x8; // CMP1
    static constexpr uint32_t SETD2R_PER = 0x4; // PER
    static constexpr uint32_t SETD2R_RESYNC = 0x2; // RESYNC
    static constexpr uint32_t SETD2R_SST = 0x1; // SST

    static constexpr uint32_t RSTD2R_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RSTD2R_UPDATE = 0x80000000; // UPDATE
    static constexpr uint32_t RSTD2R_EXTEVNT10 = 0x40000000; // EXTEVNT10
    static constexpr uint32_t RSTD2R_EXTEVNT9 = 0x20000000; // EXTEVNT9
    static constexpr uint32_t RSTD2R_EXTEVNT8 = 0x10000000; // EXTEVNT8
    static constexpr uint32_t RSTD2R_EXTEVNT7 = 0x8000000; // EXTEVNT7
    static constexpr uint32_t RSTD2R_EXTEVNT6 = 0x4000000; // EXTEVNT6
    static constexpr uint32_t RSTD2R_EXTEVNT5 = 0x2000000; // EXTEVNT5
    static constexpr uint32_t RSTD2R_EXTEVNT4 = 0x1000000; // EXTEVNT4
    static constexpr uint32_t RSTD2R_EXTEVNT3 = 0x800000; // EXTEVNT3
    static constexpr uint32_t RSTD2R_EXTEVNT2 = 0x400000; // EXTEVNT2
    static constexpr uint32_t RSTD2R_EXTEVNT1 = 0x200000; // EXTEVNT1
    static constexpr uint32_t RSTD2R_TIMEVNT9 = 0x100000; // TIMEVNT9
    static constexpr uint32_t RSTD2R_TIMEVNT8 = 0x80000; // TIMEVNT8
    static constexpr uint32_t RSTD2R_TIMEVNT7 = 0x40000; // TIMEVNT7
    static constexpr uint32_t RSTD2R_TIMEVNT6 = 0x20000; // TIMEVNT6
    static constexpr uint32_t RSTD2R_TIMEVNT5 = 0x10000; // TIMEVNT5
    static constexpr uint32_t RSTD2R_TIMEVNT4 = 0x8000; // TIMEVNT4
    static constexpr uint32_t RSTD2R_TIMEVNT3 = 0x4000; // TIMEVNT3
    static constexpr uint32_t RSTD2R_TIMEVNT2 = 0x2000; // TIMEVNT2
    static constexpr uint32_t RSTD2R_TIMEVNT1 = 0x1000; // TIMEVNT1
    static constexpr uint32_t RSTD2R_MSTCMP4 = 0x800; // MSTCMP4
    static constexpr uint32_t RSTD2R_MSTCMP3 = 0x400; // MSTCMP3
    static constexpr uint32_t RSTD2R_MSTCMP2 = 0x200; // MSTCMP2
    static constexpr uint32_t RSTD2R_MSTCMP1 = 0x100; // MSTCMP1
    static constexpr uint32_t RSTD2R_MSTPER = 0x80; // MSTPER
    static constexpr uint32_t RSTD2R_CMP4 = 0x40; // CMP4
    static constexpr uint32_t RSTD2R_CMP3 = 0x20; // CMP3
    static constexpr uint32_t RSTD2R_CMP2 = 0x10; // CMP2
    static constexpr uint32_t RSTD2R_CMP1 = 0x8; // CMP1
    static constexpr uint32_t RSTD2R_PER = 0x4; // PER
    static constexpr uint32_t RSTD2R_RESYNC = 0x2; // RESYNC
    static constexpr uint32_t RSTD2R_SRT = 0x1; // SRT

    static constexpr uint32_t EEFDR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<25, 0xf> EEFDR1_EE5FLTR; // External Event 5 filter
    static constexpr uint32_t EEFDR1_EE5LTCH = 0x1000000; // External Event 5 latch
    typedef bit_field_t<19, 0xf> EEFDR1_EE4FLTR; // External Event 4 filter
    static constexpr uint32_t EEFDR1_EE4LTCH = 0x40000; // External Event 4 latch
    typedef bit_field_t<13, 0xf> EEFDR1_EE3FLTR; // External Event 3 filter
    static constexpr uint32_t EEFDR1_EE3LTCH = 0x1000; // External Event 3 latch
    typedef bit_field_t<7, 0xf> EEFDR1_EE2FLTR; // External Event 2 filter
    static constexpr uint32_t EEFDR1_EE2LTCH = 0x40; // External Event 2 latch
    typedef bit_field_t<1, 0xf> EEFDR1_EE1FLTR; // External Event 1 filter
    static constexpr uint32_t EEFDR1_EE1LTCH = 0x1; // External Event 1 latch

    static constexpr uint32_t EEFDR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<25, 0xf> EEFDR2_EE10FLTR; // External Event 10 filter
    static constexpr uint32_t EEFDR2_EE10LTCH = 0x1000000; // External Event 10 latch
    typedef bit_field_t<19, 0xf> EEFDR2_EE9FLTR; // External Event 9 filter
    static constexpr uint32_t EEFDR2_EE9LTCH = 0x40000; // External Event 9 latch
    typedef bit_field_t<13, 0xf> EEFDR2_EE8FLTR; // External Event 8 filter
    static constexpr uint32_t EEFDR2_EE8LTCH = 0x1000; // External Event 8 latch
    typedef bit_field_t<7, 0xf> EEFDR2_EE7FLTR; // External Event 7 filter
    static constexpr uint32_t EEFDR2_EE7LTCH = 0x40; // External Event 7 latch
    typedef bit_field_t<1, 0xf> EEFDR2_EE6FLTR; // External Event 6 filter
    static constexpr uint32_t EEFDR2_EE6LTCH = 0x1; // External Event 6 latch

    static constexpr uint32_t RSTDR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RSTDR_TIMECMP4 = 0x40000000; // Timer E Compare 4
    static constexpr uint32_t RSTDR_TIMECMP2 = 0x20000000; // Timer E Compare 2
    static constexpr uint32_t RSTDR_TIMECMP1 = 0x10000000; // Timer E Compare 1
    static constexpr uint32_t RSTDR_TIMCCMP4 = 0x8000000; // Timer C Compare 4
    static constexpr uint32_t RSTDR_TIMCCMP2 = 0x4000000; // Timer C Compare 2
    static constexpr uint32_t RSTDR_TIMCCMP1 = 0x2000000; // Timer C Compare 1
    static constexpr uint32_t RSTDR_TIMBCMP4 = 0x1000000; // Timer B Compare 4
    static constexpr uint32_t RSTDR_TIMBCMP2 = 0x800000; // Timer B Compare 2
    static constexpr uint32_t RSTDR_TIMBCMP1 = 0x400000; // Timer B Compare 1
    static constexpr uint32_t RSTDR_TIMACMP4 = 0x200000; // Timer A Compare 4
    static constexpr uint32_t RSTDR_TIMACMP2 = 0x100000; // Timer A Compare 2
    static constexpr uint32_t RSTDR_TIMACMP1 = 0x80000; // Timer A Compare 1
    static constexpr uint32_t RSTDR_EXTEVNT10 = 0x40000; // External Event 10
    static constexpr uint32_t RSTDR_EXTEVNT9 = 0x20000; // External Event 9
    static constexpr uint32_t RSTDR_EXTEVNT8 = 0x10000; // External Event 8
    static constexpr uint32_t RSTDR_EXTEVNT7 = 0x8000; // External Event 7
    static constexpr uint32_t RSTDR_EXTEVNT6 = 0x4000; // External Event 6
    static constexpr uint32_t RSTDR_EXTEVNT5 = 0x2000; // External Event 5
    static constexpr uint32_t RSTDR_EXTEVNT4 = 0x1000; // External Event 4
    static constexpr uint32_t RSTDR_EXTEVNT3 = 0x800; // External Event 3
    static constexpr uint32_t RSTDR_EXTEVNT2 = 0x400; // External Event 2
    static constexpr uint32_t RSTDR_EXTEVNT1 = 0x200; // External Event 1
    static constexpr uint32_t RSTDR_MSTCMP4 = 0x100; // Master compare 4
    static constexpr uint32_t RSTDR_MSTCMP3 = 0x80; // Master compare 3
    static constexpr uint32_t RSTDR_MSTCMP2 = 0x40; // Master compare 2
    static constexpr uint32_t RSTDR_MSTCMP1 = 0x20; // Master compare 1
    static constexpr uint32_t RSTDR_MSTPER = 0x10; // Master timer Period
    static constexpr uint32_t RSTDR_CMP4 = 0x8; // Timer A compare 4 reset
    static constexpr uint32_t RSTDR_CMP2 = 0x4; // Timer A compare 2 reset
    static constexpr uint32_t RSTDR_UPDT = 0x2; // Timer A Update reset

    static constexpr uint32_t CHPDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<7, 0xf> CHPDR_STRTPW; // STRTPW
    typedef bit_field_t<4, 0x7> CHPDR_CHPDTY; // Timerx chopper duty cycle value
    typedef bit_field_t<0, 0xf> CHPDR_CHPFRQ; // Timerx carrier frequency value

    static constexpr uint32_t CPT1DCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CPT1DCR_TECMP2 = 0x80000000; // Timer E Compare 2
    static constexpr uint32_t CPT1DCR_TECMP1 = 0x40000000; // Timer E Compare 1
    static constexpr uint32_t CPT1DCR_TE1RST = 0x20000000; // Timer E output 1 Reset
    static constexpr uint32_t CPT1DCR_TE1SET = 0x10000000; // Timer E output 1 Set
    static constexpr uint32_t CPT1DCR_TCCMP2 = 0x800000; // Timer C Compare 2
    static constexpr uint32_t CPT1DCR_TCCMP1 = 0x400000; // Timer C Compare 1
    static constexpr uint32_t CPT1DCR_TC1RST = 0x200000; // Timer C output 1 Reset
    static constexpr uint32_t CPT1DCR_TC1SET = 0x100000; // Timer C output 1 Set
    static constexpr uint32_t CPT1DCR_TBCMP2 = 0x80000; // Timer B Compare 2
    static constexpr uint32_t CPT1DCR_TBCMP1 = 0x40000; // Timer B Compare 1
    static constexpr uint32_t CPT1DCR_TB1RST = 0x20000; // Timer B output 1 Reset
    static constexpr uint32_t CPT1DCR_TB1SET = 0x10000; // Timer B output 1 Set
    static constexpr uint32_t CPT1DCR_TACMP2 = 0x8000; // Timer A Compare 2
    static constexpr uint32_t CPT1DCR_TACMP1 = 0x4000; // Timer A Compare 1
    static constexpr uint32_t CPT1DCR_TA1RST = 0x2000; // Timer A output 1 Reset
    static constexpr uint32_t CPT1DCR_TA1SET = 0x1000; // Timer A output 1 Set
    static constexpr uint32_t CPT1DCR_EXEV10CPT = 0x800; // External Event 10 Capture
    static constexpr uint32_t CPT1DCR_EXEV9CPT = 0x400; // External Event 9 Capture
    static constexpr uint32_t CPT1DCR_EXEV8CPT = 0x200; // External Event 8 Capture
    static constexpr uint32_t CPT1DCR_EXEV7CPT = 0x100; // External Event 7 Capture
    static constexpr uint32_t CPT1DCR_EXEV6CPT = 0x80; // External Event 6 Capture
    static constexpr uint32_t CPT1DCR_EXEV5CPT = 0x40; // External Event 5 Capture
    static constexpr uint32_t CPT1DCR_EXEV4CPT = 0x20; // External Event 4 Capture
    static constexpr uint32_t CPT1DCR_EXEV3CPT = 0x10; // External Event 3 Capture
    static constexpr uint32_t CPT1DCR_EXEV2CPT = 0x8; // External Event 2 Capture
    static constexpr uint32_t CPT1DCR_EXEV1CPT = 0x4; // External Event 1 Capture
    static constexpr uint32_t CPT1DCR_UDPCPT = 0x2; // Update Capture
    static constexpr uint32_t CPT1DCR_SWCPT = 0x1; // Software Capture

    static constexpr uint32_t CPT2DCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CPT2DCR_TECMP2 = 0x80000000; // Timer E Compare 2
    static constexpr uint32_t CPT2DCR_TECMP1 = 0x40000000; // Timer E Compare 1
    static constexpr uint32_t CPT2DCR_TE1RST = 0x20000000; // Timer E output 1 Reset
    static constexpr uint32_t CPT2DCR_TE1SET = 0x10000000; // Timer E output 1 Set
    static constexpr uint32_t CPT2DCR_TCCMP2 = 0x800000; // Timer C Compare 2
    static constexpr uint32_t CPT2DCR_TCCMP1 = 0x400000; // Timer C Compare 1
    static constexpr uint32_t CPT2DCR_TC1RST = 0x200000; // Timer C output 1 Reset
    static constexpr uint32_t CPT2DCR_TC1SET = 0x100000; // Timer C output 1 Set
    static constexpr uint32_t CPT2DCR_TBCMP2 = 0x80000; // Timer B Compare 2
    static constexpr uint32_t CPT2DCR_TBCMP1 = 0x40000; // Timer B Compare 1
    static constexpr uint32_t CPT2DCR_TB1RST = 0x20000; // Timer B output 1 Reset
    static constexpr uint32_t CPT2DCR_TB1SET = 0x10000; // Timer B output 1 Set
    static constexpr uint32_t CPT2DCR_TACMP2 = 0x8000; // Timer A Compare 2
    static constexpr uint32_t CPT2DCR_TACMP1 = 0x4000; // Timer A Compare 1
    static constexpr uint32_t CPT2DCR_TA1RST = 0x2000; // Timer A output 1 Reset
    static constexpr uint32_t CPT2DCR_TA1SET = 0x1000; // Timer A output 1 Set
    static constexpr uint32_t CPT2DCR_EXEV10CPT = 0x800; // External Event 10 Capture
    static constexpr uint32_t CPT2DCR_EXEV9CPT = 0x400; // External Event 9 Capture
    static constexpr uint32_t CPT2DCR_EXEV8CPT = 0x200; // External Event 8 Capture
    static constexpr uint32_t CPT2DCR_EXEV7CPT = 0x100; // External Event 7 Capture
    static constexpr uint32_t CPT2DCR_EXEV6CPT = 0x80; // External Event 6 Capture
    static constexpr uint32_t CPT2DCR_EXEV5CPT = 0x40; // External Event 5 Capture
    static constexpr uint32_t CPT2DCR_EXEV4CPT = 0x20; // External Event 4 Capture
    static constexpr uint32_t CPT2DCR_EXEV3CPT = 0x10; // External Event 3 Capture
    static constexpr uint32_t CPT2DCR_EXEV2CPT = 0x8; // External Event 2 Capture
    static constexpr uint32_t CPT2DCR_EXEV1CPT = 0x4; // External Event 1 Capture
    static constexpr uint32_t CPT2DCR_UDPCPT = 0x2; // Update Capture
    static constexpr uint32_t CPT2DCR_SWCPT = 0x1; // Software Capture

    static constexpr uint32_t OUTDR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OUTDR_DIDL2 = 0x800000; // Output 2 Deadtime upon burst mode Idle entry
    static constexpr uint32_t OUTDR_CHP2 = 0x400000; // Output 2 Chopper enable
    typedef bit_field_t<20, 0x3> OUTDR_FAULT2; // Output 2 Fault state
    static constexpr uint32_t OUTDR_IDLES2 = 0x80000; // Output 2 Idle State
    static constexpr uint32_t OUTDR_IDLEM2 = 0x40000; // Output 2 Idle mode
    static constexpr uint32_t OUTDR_POL2 = 0x20000; // Output 2 polarity
    typedef bit_field_t<10, 0x7> OUTDR_DLYPRT; // Delayed Protection
    static constexpr uint32_t OUTDR_DLYPRTEN = 0x200; // Delayed Protection Enable
    static constexpr uint32_t OUTDR_DTEN = 0x100; // Deadtime enable
    static constexpr uint32_t OUTDR_DIDL1 = 0x80; // Output 1 Deadtime upon burst mode Idle entry
    static constexpr uint32_t OUTDR_CHP1 = 0x40; // Output 1 Chopper enable
    typedef bit_field_t<4, 0x3> OUTDR_FAULT1; // Output 1 Fault state
    static constexpr uint32_t OUTDR_IDLES1 = 0x8; // Output 1 Idle State
    static constexpr uint32_t OUTDR_IDLEM1 = 0x4; // Output 1 Idle mode
    static constexpr uint32_t OUTDR_POL1 = 0x2; // Output 1 polarity

    static constexpr uint32_t FLTDR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FLTDR_FLTLCK = 0x80000000; // Fault sources Lock
    static constexpr uint32_t FLTDR_FLT5EN = 0x10; // Fault 5 enable
    static constexpr uint32_t FLTDR_FLT4EN = 0x8; // Fault 4 enable
    static constexpr uint32_t FLTDR_FLT3EN = 0x4; // Fault 3 enable
    static constexpr uint32_t FLTDR_FLT2EN = 0x2; // Fault 2 enable
    static constexpr uint32_t FLTDR_FLT1EN = 0x1; // Fault 1 enable
};

// HRTIM_TIME: High Resolution Timer: TIME

struct stm32h742x_hrtim_time_t
{
    volatile uint32_t TIMECR; // Timerx Control Register
    volatile uint32_t TIMEISR; // Timerx Interrupt Status Register
    volatile uint32_t TIMEICR; // Timerx Interrupt Clear Register
    volatile uint32_t TIMEDIER5; // TIMxDIER5
    volatile uint32_t CNTER; // Timerx Counter Register
    volatile uint32_t PERER; // Timerx Period Register
    volatile uint32_t REPER; // Timerx Repetition Register
    volatile uint32_t CMP1ER; // Timerx Compare 1 Register
    volatile uint32_t CMP1CER; // Timerx Compare 1 Compound Register
    volatile uint32_t CMP2ER; // Timerx Compare 2 Register
    volatile uint32_t CMP3ER; // Timerx Compare 3 Register
    volatile uint32_t CMP4ER; // Timerx Compare 4 Register
    volatile uint32_t CPT1ER; // Timerx Capture 1 Register
    volatile uint32_t CPT2ER; // Timerx Capture 2 Register
    volatile uint32_t DTER; // Timerx Deadtime Register
    volatile uint32_t SETE1R; // Timerx Output1 Set Register
    volatile uint32_t RSTE1R; // Timerx Output1 Reset Register
    volatile uint32_t SETE2R; // Timerx Output2 Set Register
    volatile uint32_t RSTE2R; // Timerx Output2 Reset Register
    volatile uint32_t EEFER1; // Timerx External Event Filtering Register 1
    volatile uint32_t EEFER2; // Timerx External Event Filtering Register 2
    volatile uint32_t RSTER; // TimerA Reset Register
    volatile uint32_t CHPER; // Timerx Chopper Register
    volatile uint32_t CPT1ECR; // Timerx Capture 2 Control Register
    volatile uint32_t CPT2ECR; // CPT2xCR
    volatile uint32_t OUTER; // Timerx Output Register
    volatile uint32_t FLTER; // Timerx Fault Register

    static constexpr uint32_t TIMECR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<28, 0xf> TIMECR_UPDGAT; // Update Gating
    static constexpr uint32_t TIMECR_PREEN = 0x8000000; // Preload enable
    typedef bit_field_t<25, 0x3> TIMECR_DACSYNC; // AC Synchronization
    static constexpr uint32_t TIMECR_MSTU = 0x1000000; // Master Timer update
    static constexpr uint32_t TIMECR_TEU = 0x800000; // TEU
    static constexpr uint32_t TIMECR_TDU = 0x400000; // TDU
    static constexpr uint32_t TIMECR_TCU = 0x200000; // TCU
    static constexpr uint32_t TIMECR_TBU = 0x100000; // TBU
    static constexpr uint32_t TIMECR_TXRSTU = 0x40000; // Timerx reset update
    static constexpr uint32_t TIMECR_TXREPU = 0x20000; // Timer x Repetition update
    typedef bit_field_t<14, 0x3> TIMECR_DELCMP4; // Delayed CMP4 mode
    typedef bit_field_t<12, 0x3> TIMECR_DELCMP2; // Delayed CMP2 mode
    static constexpr uint32_t TIMECR_SYNCSTRTX = 0x800; // Synchronization Starts Timer x
    static constexpr uint32_t TIMECR_SYNCRSTX = 0x400; // Synchronization Resets Timer x
    static constexpr uint32_t TIMECR_PSHPLL = 0x40; // Push-Pull mode enable
    static constexpr uint32_t TIMECR_HALF = 0x20; // Half mode enable
    static constexpr uint32_t TIMECR_RETRIG = 0x10; // Re-triggerable mode
    static constexpr uint32_t TIMECR_CONT = 0x8; // Continuous mode
    typedef bit_field_t<0, 0x7> TIMECR_CK_PSCX; // HRTIM Timer x Clock prescaler

    static constexpr uint32_t TIMEISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t TIMEISR_O2STAT = 0x80000; // Output 2 State
    static constexpr uint32_t TIMEISR_O1STAT = 0x40000; // Output 1 State
    static constexpr uint32_t TIMEISR_IPPSTAT = 0x20000; // Idle Push Pull Status
    static constexpr uint32_t TIMEISR_CPPSTAT = 0x10000; // Current Push Pull Status
    static constexpr uint32_t TIMEISR_DLYPRT = 0x4000; // Delayed Protection Flag
    static constexpr uint32_t TIMEISR_RST = 0x2000; // Reset Interrupt Flag
    static constexpr uint32_t TIMEISR_RSTX2 = 0x1000; // Output 2 Reset Interrupt Flag
    static constexpr uint32_t TIMEISR_SETX2 = 0x800; // Output 2 Set Interrupt Flag
    static constexpr uint32_t TIMEISR_RSTX1 = 0x400; // Output 1 Reset Interrupt Flag
    static constexpr uint32_t TIMEISR_SETX1 = 0x200; // Output 1 Set Interrupt Flag
    static constexpr uint32_t TIMEISR_CPT2 = 0x100; // Capture2 Interrupt Flag
    static constexpr uint32_t TIMEISR_CPT1 = 0x80; // Capture1 Interrupt Flag
    static constexpr uint32_t TIMEISR_UPD = 0x40; // Update Interrupt Flag
    static constexpr uint32_t TIMEISR_REP = 0x10; // Repetition Interrupt Flag
    static constexpr uint32_t TIMEISR_CMP4 = 0x8; // Compare 4 Interrupt Flag
    static constexpr uint32_t TIMEISR_CMP3 = 0x4; // Compare 3 Interrupt Flag
    static constexpr uint32_t TIMEISR_CMP2 = 0x2; // Compare 2 Interrupt Flag
    static constexpr uint32_t TIMEISR_CMP1 = 0x1; // Compare 1 Interrupt Flag

    static constexpr uint32_t TIMEICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t TIMEICR_DLYPRTC = 0x4000; // Delayed Protection Flag Clear
    static constexpr uint32_t TIMEICR_RSTC = 0x2000; // Reset Interrupt flag Clear
    static constexpr uint32_t TIMEICR_RSTX2C = 0x1000; // Output 2 Reset flag Clear
    static constexpr uint32_t TIMEICR_SET2XC = 0x800; // Output 2 Set flag Clear
    static constexpr uint32_t TIMEICR_RSTX1C = 0x400; // Output 1 Reset flag Clear
    static constexpr uint32_t TIMEICR_SET1XC = 0x200; // Output 1 Set flag Clear
    static constexpr uint32_t TIMEICR_CPT2C = 0x100; // Capture2 Interrupt flag Clear
    static constexpr uint32_t TIMEICR_CPT1C = 0x80; // Capture1 Interrupt flag Clear
    static constexpr uint32_t TIMEICR_UPDC = 0x40; // Update Interrupt flag Clear
    static constexpr uint32_t TIMEICR_REPC = 0x10; // Repetition Interrupt flag Clear
    static constexpr uint32_t TIMEICR_CMP4C = 0x8; // Compare 4 Interrupt flag Clear
    static constexpr uint32_t TIMEICR_CMP3C = 0x4; // Compare 3 Interrupt flag Clear
    static constexpr uint32_t TIMEICR_CMP2C = 0x2; // Compare 2 Interrupt flag Clear
    static constexpr uint32_t TIMEICR_CMP1C = 0x1; // Compare 1 Interrupt flag Clear

    static constexpr uint32_t TIMEDIER5_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t TIMEDIER5_DLYPRTDE = 0x40000000; // DLYPRTDE
    static constexpr uint32_t TIMEDIER5_RSTDE = 0x20000000; // RSTDE
    static constexpr uint32_t TIMEDIER5_RSTX2DE = 0x10000000; // RSTx2DE
    static constexpr uint32_t TIMEDIER5_SETX2DE = 0x8000000; // SETx2DE
    static constexpr uint32_t TIMEDIER5_RSTX1DE = 0x4000000; // RSTx1DE
    static constexpr uint32_t TIMEDIER5_SET1XDE = 0x2000000; // SET1xDE
    static constexpr uint32_t TIMEDIER5_CPT2DE = 0x1000000; // CPT2DE
    static constexpr uint32_t TIMEDIER5_CPT1DE = 0x800000; // CPT1DE
    static constexpr uint32_t TIMEDIER5_UPDDE = 0x400000; // UPDDE
    static constexpr uint32_t TIMEDIER5_REPDE = 0x100000; // REPDE
    static constexpr uint32_t TIMEDIER5_CMP4DE = 0x80000; // CMP4DE
    static constexpr uint32_t TIMEDIER5_CMP3DE = 0x40000; // CMP3DE
    static constexpr uint32_t TIMEDIER5_CMP2DE = 0x20000; // CMP2DE
    static constexpr uint32_t TIMEDIER5_CMP1DE = 0x10000; // CMP1DE
    static constexpr uint32_t TIMEDIER5_DLYPRTIE = 0x4000; // DLYPRTIE
    static constexpr uint32_t TIMEDIER5_RSTIE = 0x2000; // RSTIE
    static constexpr uint32_t TIMEDIER5_RSTX2IE = 0x1000; // RSTx2IE
    static constexpr uint32_t TIMEDIER5_SETX2IE = 0x800; // SETx2IE
    static constexpr uint32_t TIMEDIER5_RSTX1IE = 0x400; // RSTx1IE
    static constexpr uint32_t TIMEDIER5_SET1XIE = 0x200; // SET1xIE
    static constexpr uint32_t TIMEDIER5_CPT2IE = 0x100; // CPT2IE
    static constexpr uint32_t TIMEDIER5_CPT1IE = 0x80; // CPT1IE
    static constexpr uint32_t TIMEDIER5_UPDIE = 0x40; // UPDIE
    static constexpr uint32_t TIMEDIER5_REPIE = 0x10; // REPIE
    static constexpr uint32_t TIMEDIER5_CMP4IE = 0x8; // CMP4IE
    static constexpr uint32_t TIMEDIER5_CMP3IE = 0x4; // CMP3IE
    static constexpr uint32_t TIMEDIER5_CMP2IE = 0x2; // CMP2IE
    static constexpr uint32_t TIMEDIER5_CMP1IE = 0x1; // CMP1IE

    static constexpr uint32_t CNTER_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNTER_CNTX; // Timerx Counter value

    static constexpr uint32_t PERER_RESET_VALUE = 0xffff; // Reset value
    typedef bit_field_t<0, 0xffff> PERER_PERX; // Timerx Period value

    static constexpr uint32_t REPER_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xff> REPER_REPX; // Timerx Repetition counter value

    static constexpr uint32_t CMP1ER_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CMP1ER_CMP1X; // Timerx Compare 1 value

    static constexpr uint32_t CMP1CER_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0xff> CMP1CER_REPX; // Timerx Repetition value (aliased from HRTIM_REPx register)
    typedef bit_field_t<0, 0xffff> CMP1CER_CMP1X; // Timerx Compare 1 value

    static constexpr uint32_t CMP2ER_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CMP2ER_CMP2X; // Timerx Compare 2 value

    static constexpr uint32_t CMP3ER_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CMP3ER_CMP3X; // Timerx Compare 3 value

    static constexpr uint32_t CMP4ER_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CMP4ER_CMP4X; // Timerx Compare 4 value

    static constexpr uint32_t CPT1ER_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CPT1ER_CPT1X; // Timerx Capture 1 value

    static constexpr uint32_t CPT2ER_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CPT2ER_CPT2X; // Timerx Capture 2 value

    static constexpr uint32_t DTER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DTER_DTFLKX = 0x80000000; // Deadtime Falling Lock
    static constexpr uint32_t DTER_DTFSLKX = 0x40000000; // Deadtime Falling Sign Lock
    static constexpr uint32_t DTER_SDTFX = 0x2000000; // Sign Deadtime Falling value
    typedef bit_field_t<16, 0x1ff> DTER_DTFX; // Deadtime Falling value
    static constexpr uint32_t DTER_DTRLKX = 0x8000; // Deadtime Rising Lock
    static constexpr uint32_t DTER_DTRSLKX = 0x4000; // Deadtime Rising Sign Lock
    typedef bit_field_t<10, 0x7> DTER_DTPRSC; // Deadtime Prescaler
    static constexpr uint32_t DTER_SDTRX = 0x200; // Sign Deadtime Rising value
    typedef bit_field_t<0, 0x1ff> DTER_DTRX; // Deadtime Rising value

    static constexpr uint32_t SETE1R_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SETE1R_UPDATE = 0x80000000; // Registers update (transfer preload to active)
    static constexpr uint32_t SETE1R_EXTEVNT10 = 0x40000000; // External Event 10
    static constexpr uint32_t SETE1R_EXTEVNT9 = 0x20000000; // External Event 9
    static constexpr uint32_t SETE1R_EXTEVNT8 = 0x10000000; // External Event 8
    static constexpr uint32_t SETE1R_EXTEVNT7 = 0x8000000; // External Event 7
    static constexpr uint32_t SETE1R_EXTEVNT6 = 0x4000000; // External Event 6
    static constexpr uint32_t SETE1R_EXTEVNT5 = 0x2000000; // External Event 5
    static constexpr uint32_t SETE1R_EXTEVNT4 = 0x1000000; // External Event 4
    static constexpr uint32_t SETE1R_EXTEVNT3 = 0x800000; // External Event 3
    static constexpr uint32_t SETE1R_EXTEVNT2 = 0x400000; // External Event 2
    static constexpr uint32_t SETE1R_EXTEVNT1 = 0x200000; // External Event 1
    static constexpr uint32_t SETE1R_TIMEVNT9 = 0x100000; // Timer Event 9
    static constexpr uint32_t SETE1R_TIMEVNT8 = 0x80000; // Timer Event 8
    static constexpr uint32_t SETE1R_TIMEVNT7 = 0x40000; // Timer Event 7
    static constexpr uint32_t SETE1R_TIMEVNT6 = 0x20000; // Timer Event 6
    static constexpr uint32_t SETE1R_TIMEVNT5 = 0x10000; // Timer Event 5
    static constexpr uint32_t SETE1R_TIMEVNT4 = 0x8000; // Timer Event 4
    static constexpr uint32_t SETE1R_TIMEVNT3 = 0x4000; // Timer Event 3
    static constexpr uint32_t SETE1R_TIMEVNT2 = 0x2000; // Timer Event 2
    static constexpr uint32_t SETE1R_TIMEVNT1 = 0x1000; // Timer Event 1
    static constexpr uint32_t SETE1R_MSTCMP4 = 0x800; // Master Compare 4
    static constexpr uint32_t SETE1R_MSTCMP3 = 0x400; // Master Compare 3
    static constexpr uint32_t SETE1R_MSTCMP2 = 0x200; // Master Compare 2
    static constexpr uint32_t SETE1R_MSTCMP1 = 0x100; // Master Compare 1
    static constexpr uint32_t SETE1R_MSTPER = 0x80; // Master Period
    static constexpr uint32_t SETE1R_CMP4 = 0x40; // Timer A compare 4
    static constexpr uint32_t SETE1R_CMP3 = 0x20; // Timer A compare 3
    static constexpr uint32_t SETE1R_CMP2 = 0x10; // Timer A compare 2
    static constexpr uint32_t SETE1R_CMP1 = 0x8; // Timer A compare 1
    static constexpr uint32_t SETE1R_PER = 0x4; // Timer A Period
    static constexpr uint32_t SETE1R_RESYNC = 0x2; // Timer A resynchronizaton
    static constexpr uint32_t SETE1R_SST = 0x1; // Software Set trigger

    static constexpr uint32_t RSTE1R_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RSTE1R_UPDATE = 0x80000000; // UPDATE
    static constexpr uint32_t RSTE1R_EXTEVNT10 = 0x40000000; // EXTEVNT10
    static constexpr uint32_t RSTE1R_EXTEVNT9 = 0x20000000; // EXTEVNT9
    static constexpr uint32_t RSTE1R_EXTEVNT8 = 0x10000000; // EXTEVNT8
    static constexpr uint32_t RSTE1R_EXTEVNT7 = 0x8000000; // EXTEVNT7
    static constexpr uint32_t RSTE1R_EXTEVNT6 = 0x4000000; // EXTEVNT6
    static constexpr uint32_t RSTE1R_EXTEVNT5 = 0x2000000; // EXTEVNT5
    static constexpr uint32_t RSTE1R_EXTEVNT4 = 0x1000000; // EXTEVNT4
    static constexpr uint32_t RSTE1R_EXTEVNT3 = 0x800000; // EXTEVNT3
    static constexpr uint32_t RSTE1R_EXTEVNT2 = 0x400000; // EXTEVNT2
    static constexpr uint32_t RSTE1R_EXTEVNT1 = 0x200000; // EXTEVNT1
    static constexpr uint32_t RSTE1R_TIMEVNT9 = 0x100000; // TIMEVNT9
    static constexpr uint32_t RSTE1R_TIMEVNT8 = 0x80000; // TIMEVNT8
    static constexpr uint32_t RSTE1R_TIMEVNT7 = 0x40000; // TIMEVNT7
    static constexpr uint32_t RSTE1R_TIMEVNT6 = 0x20000; // TIMEVNT6
    static constexpr uint32_t RSTE1R_TIMEVNT5 = 0x10000; // TIMEVNT5
    static constexpr uint32_t RSTE1R_TIMEVNT4 = 0x8000; // TIMEVNT4
    static constexpr uint32_t RSTE1R_TIMEVNT3 = 0x4000; // TIMEVNT3
    static constexpr uint32_t RSTE1R_TIMEVNT2 = 0x2000; // TIMEVNT2
    static constexpr uint32_t RSTE1R_TIMEVNT1 = 0x1000; // TIMEVNT1
    static constexpr uint32_t RSTE1R_MSTCMP4 = 0x800; // MSTCMP4
    static constexpr uint32_t RSTE1R_MSTCMP3 = 0x400; // MSTCMP3
    static constexpr uint32_t RSTE1R_MSTCMP2 = 0x200; // MSTCMP2
    static constexpr uint32_t RSTE1R_MSTCMP1 = 0x100; // MSTCMP1
    static constexpr uint32_t RSTE1R_MSTPER = 0x80; // MSTPER
    static constexpr uint32_t RSTE1R_CMP4 = 0x40; // CMP4
    static constexpr uint32_t RSTE1R_CMP3 = 0x20; // CMP3
    static constexpr uint32_t RSTE1R_CMP2 = 0x10; // CMP2
    static constexpr uint32_t RSTE1R_CMP1 = 0x8; // CMP1
    static constexpr uint32_t RSTE1R_PER = 0x4; // PER
    static constexpr uint32_t RSTE1R_RESYNC = 0x2; // RESYNC
    static constexpr uint32_t RSTE1R_SRT = 0x1; // SRT

    static constexpr uint32_t SETE2R_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SETE2R_UPDATE = 0x80000000; // UPDATE
    static constexpr uint32_t SETE2R_EXTEVNT10 = 0x40000000; // EXTEVNT10
    static constexpr uint32_t SETE2R_EXTEVNT9 = 0x20000000; // EXTEVNT9
    static constexpr uint32_t SETE2R_EXTEVNT8 = 0x10000000; // EXTEVNT8
    static constexpr uint32_t SETE2R_EXTEVNT7 = 0x8000000; // EXTEVNT7
    static constexpr uint32_t SETE2R_EXTEVNT6 = 0x4000000; // EXTEVNT6
    static constexpr uint32_t SETE2R_EXTEVNT5 = 0x2000000; // EXTEVNT5
    static constexpr uint32_t SETE2R_EXTEVNT4 = 0x1000000; // EXTEVNT4
    static constexpr uint32_t SETE2R_EXTEVNT3 = 0x800000; // EXTEVNT3
    static constexpr uint32_t SETE2R_EXTEVNT2 = 0x400000; // EXTEVNT2
    static constexpr uint32_t SETE2R_EXTEVNT1 = 0x200000; // EXTEVNT1
    static constexpr uint32_t SETE2R_TIMEVNT9 = 0x100000; // TIMEVNT9
    static constexpr uint32_t SETE2R_TIMEVNT8 = 0x80000; // TIMEVNT8
    static constexpr uint32_t SETE2R_TIMEVNT7 = 0x40000; // TIMEVNT7
    static constexpr uint32_t SETE2R_TIMEVNT6 = 0x20000; // TIMEVNT6
    static constexpr uint32_t SETE2R_TIMEVNT5 = 0x10000; // TIMEVNT5
    static constexpr uint32_t SETE2R_TIMEVNT4 = 0x8000; // TIMEVNT4
    static constexpr uint32_t SETE2R_TIMEVNT3 = 0x4000; // TIMEVNT3
    static constexpr uint32_t SETE2R_TIMEVNT2 = 0x2000; // TIMEVNT2
    static constexpr uint32_t SETE2R_TIMEVNT1 = 0x1000; // TIMEVNT1
    static constexpr uint32_t SETE2R_MSTCMP4 = 0x800; // MSTCMP4
    static constexpr uint32_t SETE2R_MSTCMP3 = 0x400; // MSTCMP3
    static constexpr uint32_t SETE2R_MSTCMP2 = 0x200; // MSTCMP2
    static constexpr uint32_t SETE2R_MSTCMP1 = 0x100; // MSTCMP1
    static constexpr uint32_t SETE2R_MSTPER = 0x80; // MSTPER
    static constexpr uint32_t SETE2R_CMP4 = 0x40; // CMP4
    static constexpr uint32_t SETE2R_CMP3 = 0x20; // CMP3
    static constexpr uint32_t SETE2R_CMP2 = 0x10; // CMP2
    static constexpr uint32_t SETE2R_CMP1 = 0x8; // CMP1
    static constexpr uint32_t SETE2R_PER = 0x4; // PER
    static constexpr uint32_t SETE2R_RESYNC = 0x2; // RESYNC
    static constexpr uint32_t SETE2R_SST = 0x1; // SST

    static constexpr uint32_t RSTE2R_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RSTE2R_UPDATE = 0x80000000; // UPDATE
    static constexpr uint32_t RSTE2R_EXTEVNT10 = 0x40000000; // EXTEVNT10
    static constexpr uint32_t RSTE2R_EXTEVNT9 = 0x20000000; // EXTEVNT9
    static constexpr uint32_t RSTE2R_EXTEVNT8 = 0x10000000; // EXTEVNT8
    static constexpr uint32_t RSTE2R_EXTEVNT7 = 0x8000000; // EXTEVNT7
    static constexpr uint32_t RSTE2R_EXTEVNT6 = 0x4000000; // EXTEVNT6
    static constexpr uint32_t RSTE2R_EXTEVNT5 = 0x2000000; // EXTEVNT5
    static constexpr uint32_t RSTE2R_EXTEVNT4 = 0x1000000; // EXTEVNT4
    static constexpr uint32_t RSTE2R_EXTEVNT3 = 0x800000; // EXTEVNT3
    static constexpr uint32_t RSTE2R_EXTEVNT2 = 0x400000; // EXTEVNT2
    static constexpr uint32_t RSTE2R_EXTEVNT1 = 0x200000; // EXTEVNT1
    static constexpr uint32_t RSTE2R_TIMEVNT9 = 0x100000; // TIMEVNT9
    static constexpr uint32_t RSTE2R_TIMEVNT8 = 0x80000; // TIMEVNT8
    static constexpr uint32_t RSTE2R_TIMEVNT7 = 0x40000; // TIMEVNT7
    static constexpr uint32_t RSTE2R_TIMEVNT6 = 0x20000; // TIMEVNT6
    static constexpr uint32_t RSTE2R_TIMEVNT5 = 0x10000; // TIMEVNT5
    static constexpr uint32_t RSTE2R_TIMEVNT4 = 0x8000; // TIMEVNT4
    static constexpr uint32_t RSTE2R_TIMEVNT3 = 0x4000; // TIMEVNT3
    static constexpr uint32_t RSTE2R_TIMEVNT2 = 0x2000; // TIMEVNT2
    static constexpr uint32_t RSTE2R_TIMEVNT1 = 0x1000; // TIMEVNT1
    static constexpr uint32_t RSTE2R_MSTCMP4 = 0x800; // MSTCMP4
    static constexpr uint32_t RSTE2R_MSTCMP3 = 0x400; // MSTCMP3
    static constexpr uint32_t RSTE2R_MSTCMP2 = 0x200; // MSTCMP2
    static constexpr uint32_t RSTE2R_MSTCMP1 = 0x100; // MSTCMP1
    static constexpr uint32_t RSTE2R_MSTPER = 0x80; // MSTPER
    static constexpr uint32_t RSTE2R_CMP4 = 0x40; // CMP4
    static constexpr uint32_t RSTE2R_CMP3 = 0x20; // CMP3
    static constexpr uint32_t RSTE2R_CMP2 = 0x10; // CMP2
    static constexpr uint32_t RSTE2R_CMP1 = 0x8; // CMP1
    static constexpr uint32_t RSTE2R_PER = 0x4; // PER
    static constexpr uint32_t RSTE2R_RESYNC = 0x2; // RESYNC
    static constexpr uint32_t RSTE2R_SRT = 0x1; // SRT

    static constexpr uint32_t EEFER1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<25, 0xf> EEFER1_EE5FLTR; // External Event 5 filter
    static constexpr uint32_t EEFER1_EE5LTCH = 0x1000000; // External Event 5 latch
    typedef bit_field_t<19, 0xf> EEFER1_EE4FLTR; // External Event 4 filter
    static constexpr uint32_t EEFER1_EE4LTCH = 0x40000; // External Event 4 latch
    typedef bit_field_t<13, 0xf> EEFER1_EE3FLTR; // External Event 3 filter
    static constexpr uint32_t EEFER1_EE3LTCH = 0x1000; // External Event 3 latch
    typedef bit_field_t<7, 0xf> EEFER1_EE2FLTR; // External Event 2 filter
    static constexpr uint32_t EEFER1_EE2LTCH = 0x40; // External Event 2 latch
    typedef bit_field_t<1, 0xf> EEFER1_EE1FLTR; // External Event 1 filter
    static constexpr uint32_t EEFER1_EE1LTCH = 0x1; // External Event 1 latch

    static constexpr uint32_t EEFER2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<25, 0xf> EEFER2_EE10FLTR; // External Event 10 filter
    static constexpr uint32_t EEFER2_EE10LTCH = 0x1000000; // External Event 10 latch
    typedef bit_field_t<19, 0xf> EEFER2_EE9FLTR; // External Event 9 filter
    static constexpr uint32_t EEFER2_EE9LTCH = 0x40000; // External Event 9 latch
    typedef bit_field_t<13, 0xf> EEFER2_EE8FLTR; // External Event 8 filter
    static constexpr uint32_t EEFER2_EE8LTCH = 0x1000; // External Event 8 latch
    typedef bit_field_t<7, 0xf> EEFER2_EE7FLTR; // External Event 7 filter
    static constexpr uint32_t EEFER2_EE7LTCH = 0x40; // External Event 7 latch
    typedef bit_field_t<1, 0xf> EEFER2_EE6FLTR; // External Event 6 filter
    static constexpr uint32_t EEFER2_EE6LTCH = 0x1; // External Event 6 latch

    static constexpr uint32_t RSTER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RSTER_TIMDCMP4 = 0x40000000; // Timer D Compare 4
    static constexpr uint32_t RSTER_TIMDCMP2 = 0x20000000; // Timer D Compare 2
    static constexpr uint32_t RSTER_TIMDCMP1 = 0x10000000; // Timer D Compare 1
    static constexpr uint32_t RSTER_TIMCCMP4 = 0x8000000; // Timer C Compare 4
    static constexpr uint32_t RSTER_TIMCCMP2 = 0x4000000; // Timer C Compare 2
    static constexpr uint32_t RSTER_TIMCCMP1 = 0x2000000; // Timer C Compare 1
    static constexpr uint32_t RSTER_TIMBCMP4 = 0x1000000; // Timer B Compare 4
    static constexpr uint32_t RSTER_TIMBCMP2 = 0x800000; // Timer B Compare 2
    static constexpr uint32_t RSTER_TIMBCMP1 = 0x400000; // Timer B Compare 1
    static constexpr uint32_t RSTER_TIMACMP4 = 0x200000; // Timer A Compare 4
    static constexpr uint32_t RSTER_TIMACMP2 = 0x100000; // Timer A Compare 2
    static constexpr uint32_t RSTER_TIMACMP1 = 0x80000; // Timer A Compare 1
    static constexpr uint32_t RSTER_EXTEVNT10 = 0x40000; // External Event 10
    static constexpr uint32_t RSTER_EXTEVNT9 = 0x20000; // External Event 9
    static constexpr uint32_t RSTER_EXTEVNT8 = 0x10000; // External Event 8
    static constexpr uint32_t RSTER_EXTEVNT7 = 0x8000; // External Event 7
    static constexpr uint32_t RSTER_EXTEVNT6 = 0x4000; // External Event 6
    static constexpr uint32_t RSTER_EXTEVNT5 = 0x2000; // External Event 5
    static constexpr uint32_t RSTER_EXTEVNT4 = 0x1000; // External Event 4
    static constexpr uint32_t RSTER_EXTEVNT3 = 0x800; // External Event 3
    static constexpr uint32_t RSTER_EXTEVNT2 = 0x400; // External Event 2
    static constexpr uint32_t RSTER_EXTEVNT1 = 0x200; // External Event 1
    static constexpr uint32_t RSTER_MSTCMP4 = 0x100; // Master compare 4
    static constexpr uint32_t RSTER_MSTCMP3 = 0x80; // Master compare 3
    static constexpr uint32_t RSTER_MSTCMP2 = 0x40; // Master compare 2
    static constexpr uint32_t RSTER_MSTCMP1 = 0x20; // Master compare 1
    static constexpr uint32_t RSTER_MSTPER = 0x10; // Master timer Period
    static constexpr uint32_t RSTER_CMP4 = 0x8; // Timer A compare 4 reset
    static constexpr uint32_t RSTER_CMP2 = 0x4; // Timer A compare 2 reset
    static constexpr uint32_t RSTER_UPDT = 0x2; // Timer A Update reset

    static constexpr uint32_t CHPER_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<7, 0xf> CHPER_STRTPW; // STRTPW
    typedef bit_field_t<4, 0x7> CHPER_CHPDTY; // Timerx chopper duty cycle value
    typedef bit_field_t<0, 0xf> CHPER_CHPFRQ; // Timerx carrier frequency value

    static constexpr uint32_t CPT1ECR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CPT1ECR_TDCMP2 = 0x8000000; // Timer D Compare 2
    static constexpr uint32_t CPT1ECR_TDCMP1 = 0x4000000; // Timer D Compare 1
    static constexpr uint32_t CPT1ECR_TD1RST = 0x2000000; // Timer D output 1 Reset
    static constexpr uint32_t CPT1ECR_TD1SET = 0x1000000; // Timer D output 1 Set
    static constexpr uint32_t CPT1ECR_TCCMP2 = 0x800000; // Timer C Compare 2
    static constexpr uint32_t CPT1ECR_TCCMP1 = 0x400000; // Timer C Compare 1
    static constexpr uint32_t CPT1ECR_TC1RST = 0x200000; // Timer C output 1 Reset
    static constexpr uint32_t CPT1ECR_TC1SET = 0x100000; // Timer C output 1 Set
    static constexpr uint32_t CPT1ECR_TBCMP2 = 0x80000; // Timer B Compare 2
    static constexpr uint32_t CPT1ECR_TBCMP1 = 0x40000; // Timer B Compare 1
    static constexpr uint32_t CPT1ECR_TB1RST = 0x20000; // Timer B output 1 Reset
    static constexpr uint32_t CPT1ECR_TB1SET = 0x10000; // Timer B output 1 Set
    static constexpr uint32_t CPT1ECR_TACMP2 = 0x8000; // Timer A Compare 2
    static constexpr uint32_t CPT1ECR_TACMP1 = 0x4000; // Timer A Compare 1
    static constexpr uint32_t CPT1ECR_TA1RST = 0x2000; // Timer A output 1 Reset
    static constexpr uint32_t CPT1ECR_TA1SET = 0x1000; // Timer A output 1 Set
    static constexpr uint32_t CPT1ECR_EXEV10CPT = 0x800; // External Event 10 Capture
    static constexpr uint32_t CPT1ECR_EXEV9CPT = 0x400; // External Event 9 Capture
    static constexpr uint32_t CPT1ECR_EXEV8CPT = 0x200; // External Event 8 Capture
    static constexpr uint32_t CPT1ECR_EXEV7CPT = 0x100; // External Event 7 Capture
    static constexpr uint32_t CPT1ECR_EXEV6CPT = 0x80; // External Event 6 Capture
    static constexpr uint32_t CPT1ECR_EXEV5CPT = 0x40; // External Event 5 Capture
    static constexpr uint32_t CPT1ECR_EXEV4CPT = 0x20; // External Event 4 Capture
    static constexpr uint32_t CPT1ECR_EXEV3CPT = 0x10; // External Event 3 Capture
    static constexpr uint32_t CPT1ECR_EXEV2CPT = 0x8; // External Event 2 Capture
    static constexpr uint32_t CPT1ECR_EXEV1CPT = 0x4; // External Event 1 Capture
    static constexpr uint32_t CPT1ECR_UDPCPT = 0x2; // Update Capture
    static constexpr uint32_t CPT1ECR_SWCPT = 0x1; // Software Capture

    static constexpr uint32_t CPT2ECR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CPT2ECR_TDCMP2 = 0x8000000; // Timer D Compare 2
    static constexpr uint32_t CPT2ECR_TDCMP1 = 0x4000000; // Timer D Compare 1
    static constexpr uint32_t CPT2ECR_TD1RST = 0x2000000; // Timer D output 1 Reset
    static constexpr uint32_t CPT2ECR_TD1SET = 0x1000000; // Timer D output 1 Set
    static constexpr uint32_t CPT2ECR_TCCMP2 = 0x800000; // Timer C Compare 2
    static constexpr uint32_t CPT2ECR_TCCMP1 = 0x400000; // Timer C Compare 1
    static constexpr uint32_t CPT2ECR_TC1RST = 0x200000; // Timer C output 1 Reset
    static constexpr uint32_t CPT2ECR_TC1SET = 0x100000; // Timer C output 1 Set
    static constexpr uint32_t CPT2ECR_TBCMP2 = 0x80000; // Timer B Compare 2
    static constexpr uint32_t CPT2ECR_TBCMP1 = 0x40000; // Timer B Compare 1
    static constexpr uint32_t CPT2ECR_TB1RST = 0x20000; // Timer B output 1 Reset
    static constexpr uint32_t CPT2ECR_TB1SET = 0x10000; // Timer B output 1 Set
    static constexpr uint32_t CPT2ECR_TACMP2 = 0x8000; // Timer A Compare 2
    static constexpr uint32_t CPT2ECR_TACMP1 = 0x4000; // Timer A Compare 1
    static constexpr uint32_t CPT2ECR_TA1RST = 0x2000; // Timer A output 1 Reset
    static constexpr uint32_t CPT2ECR_TA1SET = 0x1000; // Timer A output 1 Set
    static constexpr uint32_t CPT2ECR_EXEV10CPT = 0x800; // External Event 10 Capture
    static constexpr uint32_t CPT2ECR_EXEV9CPT = 0x400; // External Event 9 Capture
    static constexpr uint32_t CPT2ECR_EXEV8CPT = 0x200; // External Event 8 Capture
    static constexpr uint32_t CPT2ECR_EXEV7CPT = 0x100; // External Event 7 Capture
    static constexpr uint32_t CPT2ECR_EXEV6CPT = 0x80; // External Event 6 Capture
    static constexpr uint32_t CPT2ECR_EXEV5CPT = 0x40; // External Event 5 Capture
    static constexpr uint32_t CPT2ECR_EXEV4CPT = 0x20; // External Event 4 Capture
    static constexpr uint32_t CPT2ECR_EXEV3CPT = 0x10; // External Event 3 Capture
    static constexpr uint32_t CPT2ECR_EXEV2CPT = 0x8; // External Event 2 Capture
    static constexpr uint32_t CPT2ECR_EXEV1CPT = 0x4; // External Event 1 Capture
    static constexpr uint32_t CPT2ECR_UDPCPT = 0x2; // Update Capture
    static constexpr uint32_t CPT2ECR_SWCPT = 0x1; // Software Capture

    static constexpr uint32_t OUTER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OUTER_DIDL2 = 0x800000; // Output 2 Deadtime upon burst mode Idle entry
    static constexpr uint32_t OUTER_CHP2 = 0x400000; // Output 2 Chopper enable
    typedef bit_field_t<20, 0x3> OUTER_FAULT2; // Output 2 Fault state
    static constexpr uint32_t OUTER_IDLES2 = 0x80000; // Output 2 Idle State
    static constexpr uint32_t OUTER_IDLEM2 = 0x40000; // Output 2 Idle mode
    static constexpr uint32_t OUTER_POL2 = 0x20000; // Output 2 polarity
    typedef bit_field_t<10, 0x7> OUTER_DLYPRT; // Delayed Protection
    static constexpr uint32_t OUTER_DLYPRTEN = 0x200; // Delayed Protection Enable
    static constexpr uint32_t OUTER_DTEN = 0x100; // Deadtime enable
    static constexpr uint32_t OUTER_DIDL1 = 0x80; // Output 1 Deadtime upon burst mode Idle entry
    static constexpr uint32_t OUTER_CHP1 = 0x40; // Output 1 Chopper enable
    typedef bit_field_t<4, 0x3> OUTER_FAULT1; // Output 1 Fault state
    static constexpr uint32_t OUTER_IDLES1 = 0x8; // Output 1 Idle State
    static constexpr uint32_t OUTER_IDLEM1 = 0x4; // Output 1 Idle mode
    static constexpr uint32_t OUTER_POL1 = 0x2; // Output 1 polarity

    static constexpr uint32_t FLTER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FLTER_FLTLCK = 0x80000000; // Fault sources Lock
    static constexpr uint32_t FLTER_FLT5EN = 0x10; // Fault 5 enable
    static constexpr uint32_t FLTER_FLT4EN = 0x8; // Fault 4 enable
    static constexpr uint32_t FLTER_FLT3EN = 0x4; // Fault 3 enable
    static constexpr uint32_t FLTER_FLT2EN = 0x2; // Fault 2 enable
    static constexpr uint32_t FLTER_FLT1EN = 0x1; // Fault 1 enable
};

template<>
struct peripheral_t<STM32H742x, HRTIM_COMMON>
{
    using T = stm32h742x_hrtim_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, HRTIM_COMMON>
{
    using T = stm32h742x_hrtim_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, HRTIM_COMMON>
{
    using T = stm32h742x_hrtim_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, HRTIM_COMMON>
{
    using T = stm32h742x_hrtim_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, HRTIM_COMMON>
{
    using T = stm32h742x_hrtim_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, HRTIM_COMMON>
{
    using T = stm32h742x_hrtim_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, HRTIM_COMMON>
{
    using T = stm32h742x_hrtim_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, HRTIM_COMMON>
{
    using T = stm32h742x_hrtim_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, HRTIM_COMMON>
{
    using T = stm32h742x_hrtim_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, HRTIM_COMMON>
{
    using T = stm32h742x_hrtim_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, HRTIM_COMMON>
{
    using T = stm32h742x_hrtim_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, HRTIM_COMMON>
{
    using T = stm32h742x_hrtim_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, HRTIM_COMMON>
{
    using T = stm32h742x_hrtim_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, HRTIM_COMMON>
{
    using T = stm32h742x_hrtim_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, HRTIM_COMMON>
{
    using T = stm32h742x_hrtim_common_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, HRTIM_MASTER>
{
    using T = stm32h742x_hrtim_master_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, HRTIM_MASTER>
{
    using T = stm32h742x_hrtim_master_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, HRTIM_MASTER>
{
    using T = stm32h742x_hrtim_master_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, HRTIM_MASTER>
{
    using T = stm32h742x_hrtim_master_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, HRTIM_MASTER>
{
    using T = stm32h742x_hrtim_master_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, HRTIM_MASTER>
{
    using T = stm32h742x_hrtim_master_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, HRTIM_MASTER>
{
    using T = stm32h742x_hrtim_master_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, HRTIM_MASTER>
{
    using T = stm32h742x_hrtim_master_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, HRTIM_MASTER>
{
    using T = stm32h742x_hrtim_master_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, HRTIM_MASTER>
{
    using T = stm32h742x_hrtim_master_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, HRTIM_MASTER>
{
    using T = stm32h742x_hrtim_master_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, HRTIM_MASTER>
{
    using T = stm32h742x_hrtim_master_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, HRTIM_MASTER>
{
    using T = stm32h742x_hrtim_master_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, HRTIM_MASTER>
{
    using T = stm32h742x_hrtim_master_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, HRTIM_MASTER>
{
    using T = stm32h742x_hrtim_master_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, HRTIM_TIMA>
{
    using T = stm32h742x_hrtim_tima_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, HRTIM_TIMA>
{
    using T = stm32h742x_hrtim_tima_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, HRTIM_TIMA>
{
    using T = stm32h742x_hrtim_tima_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, HRTIM_TIMA>
{
    using T = stm32h742x_hrtim_tima_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, HRTIM_TIMA>
{
    using T = stm32h742x_hrtim_tima_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, HRTIM_TIMA>
{
    using T = stm32h742x_hrtim_tima_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, HRTIM_TIMA>
{
    using T = stm32h742x_hrtim_tima_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, HRTIM_TIMA>
{
    using T = stm32h742x_hrtim_tima_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, HRTIM_TIMA>
{
    using T = stm32h742x_hrtim_tima_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, HRTIM_TIMA>
{
    using T = stm32h742x_hrtim_tima_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, HRTIM_TIMA>
{
    using T = stm32h742x_hrtim_tima_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, HRTIM_TIMA>
{
    using T = stm32h742x_hrtim_tima_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, HRTIM_TIMA>
{
    using T = stm32h742x_hrtim_tima_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, HRTIM_TIMA>
{
    using T = stm32h742x_hrtim_tima_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, HRTIM_TIMA>
{
    using T = stm32h742x_hrtim_tima_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, HRTIM_TIMB>
{
    using T = stm32h742x_hrtim_timb_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, HRTIM_TIMB>
{
    using T = stm32h742x_hrtim_timb_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, HRTIM_TIMB>
{
    using T = stm32h742x_hrtim_timb_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, HRTIM_TIMB>
{
    using T = stm32h742x_hrtim_timb_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, HRTIM_TIMB>
{
    using T = stm32h742x_hrtim_timb_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, HRTIM_TIMB>
{
    using T = stm32h742x_hrtim_timb_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, HRTIM_TIMB>
{
    using T = stm32h742x_hrtim_timb_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, HRTIM_TIMB>
{
    using T = stm32h742x_hrtim_timb_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, HRTIM_TIMB>
{
    using T = stm32h742x_hrtim_timb_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, HRTIM_TIMB>
{
    using T = stm32h742x_hrtim_timb_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, HRTIM_TIMB>
{
    using T = stm32h742x_hrtim_timb_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, HRTIM_TIMB>
{
    using T = stm32h742x_hrtim_timb_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, HRTIM_TIMB>
{
    using T = stm32h742x_hrtim_timb_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, HRTIM_TIMB>
{
    using T = stm32h742x_hrtim_timb_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, HRTIM_TIMB>
{
    using T = stm32h742x_hrtim_timb_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, HRTIM_TIMC>
{
    using T = stm32h742x_hrtim_timc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, HRTIM_TIMC>
{
    using T = stm32h742x_hrtim_timc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, HRTIM_TIMC>
{
    using T = stm32h742x_hrtim_timc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, HRTIM_TIMC>
{
    using T = stm32h742x_hrtim_timc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, HRTIM_TIMC>
{
    using T = stm32h742x_hrtim_timc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, HRTIM_TIMC>
{
    using T = stm32h742x_hrtim_timc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, HRTIM_TIMC>
{
    using T = stm32h742x_hrtim_timc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, HRTIM_TIMC>
{
    using T = stm32h742x_hrtim_timc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, HRTIM_TIMC>
{
    using T = stm32h742x_hrtim_timc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, HRTIM_TIMC>
{
    using T = stm32h742x_hrtim_timc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, HRTIM_TIMC>
{
    using T = stm32h742x_hrtim_timc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, HRTIM_TIMC>
{
    using T = stm32h742x_hrtim_timc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, HRTIM_TIMC>
{
    using T = stm32h742x_hrtim_timc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, HRTIM_TIMC>
{
    using T = stm32h742x_hrtim_timc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, HRTIM_TIMC>
{
    using T = stm32h742x_hrtim_timc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, HRTIM_TIMD>
{
    using T = stm32h742x_hrtim_timd_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, HRTIM_TIMD>
{
    using T = stm32h742x_hrtim_timd_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, HRTIM_TIMD>
{
    using T = stm32h742x_hrtim_timd_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, HRTIM_TIMD>
{
    using T = stm32h742x_hrtim_timd_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, HRTIM_TIMD>
{
    using T = stm32h742x_hrtim_timd_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, HRTIM_TIMD>
{
    using T = stm32h742x_hrtim_timd_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, HRTIM_TIMD>
{
    using T = stm32h742x_hrtim_timd_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, HRTIM_TIMD>
{
    using T = stm32h742x_hrtim_timd_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, HRTIM_TIMD>
{
    using T = stm32h742x_hrtim_timd_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, HRTIM_TIMD>
{
    using T = stm32h742x_hrtim_timd_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, HRTIM_TIMD>
{
    using T = stm32h742x_hrtim_timd_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, HRTIM_TIMD>
{
    using T = stm32h742x_hrtim_timd_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, HRTIM_TIMD>
{
    using T = stm32h742x_hrtim_timd_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, HRTIM_TIMD>
{
    using T = stm32h742x_hrtim_timd_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, HRTIM_TIMD>
{
    using T = stm32h742x_hrtim_timd_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H742x, HRTIM_TIME>
{
    using T = stm32h742x_hrtim_time_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, HRTIM_TIME>
{
    using T = stm32h742x_hrtim_time_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, HRTIM_TIME>
{
    using T = stm32h742x_hrtim_time_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, HRTIM_TIME>
{
    using T = stm32h742x_hrtim_time_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, HRTIM_TIME>
{
    using T = stm32h742x_hrtim_time_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, HRTIM_TIME>
{
    using T = stm32h742x_hrtim_time_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, HRTIM_TIME>
{
    using T = stm32h742x_hrtim_time_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, HRTIM_TIME>
{
    using T = stm32h742x_hrtim_time_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, HRTIM_TIME>
{
    using T = stm32h742x_hrtim_time_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, HRTIM_TIME>
{
    using T = stm32h742x_hrtim_time_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, HRTIM_TIME>
{
    using T = stm32h742x_hrtim_time_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, HRTIM_TIME>
{
    using T = stm32h742x_hrtim_time_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, HRTIM_TIME>
{
    using T = stm32h742x_hrtim_time_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, HRTIM_TIME>
{
    using T = stm32h742x_hrtim_time_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, HRTIM_TIME>
{
    using T = stm32h742x_hrtim_time_t;
    static T& V;
};

using hrtim_common_t = peripheral_t<svd, HRTIM_COMMON>;
using hrtim_master_t = peripheral_t<svd, HRTIM_MASTER>;
using hrtim_tima_t = peripheral_t<svd, HRTIM_TIMA>;
using hrtim_timb_t = peripheral_t<svd, HRTIM_TIMB>;
using hrtim_timc_t = peripheral_t<svd, HRTIM_TIMC>;
using hrtim_timd_t = peripheral_t<svd, HRTIM_TIMD>;
using hrtim_time_t = peripheral_t<svd, HRTIM_TIME>;

template<int INST> struct hrtim_traits {};

template<> struct hrtim_traits<11>
{
    using hrtim = hrtim_common_t;
};

template<> struct hrtim_traits<10>
{
    using hrtim = hrtim_master_t;
};

template<> struct hrtim_traits<0>
{
    using hrtim = hrtim_tima_t;
};

template<> struct hrtim_traits<1>
{
    using hrtim = hrtim_timb_t;
};

template<> struct hrtim_traits<2>
{
    using hrtim = hrtim_timc_t;
};

template<> struct hrtim_traits<3>
{
    using hrtim = hrtim_timd_t;
};

template<> struct hrtim_traits<4>
{
    using hrtim = hrtim_time_t;
};
