#pragma once

////
//
//      STM32G4 HRTIM peripherals
//
////

////
//
//      High Resolution Timer: Common functions
//
////

struct stm32g474xx_hrtim_common_t
{
    volatile uint32_t CR1;     // [read-write] Control Register 1
    volatile uint32_t CR2;     // [read-write] Control Register 2
    volatile uint32_t ISR;     // [read-only] Interrupt Status Register
    volatile uint32_t ICR;     // [write-only] Interrupt Clear Register
    volatile uint32_t IER;     // [read-write] Interrupt Enable Register
    volatile uint32_t OENR;    // [read-write] Output Enable Register
    volatile uint32_t ODISR;   // [write-only] ODISR
    volatile uint32_t ODSR;    // [read-only] Output Disable Status Register
    volatile uint32_t BMCR;    // [read-write] Burst Mode Control Register
    volatile uint32_t BMTRG;   // [read-write] BMTRG
    volatile uint32_t BMCMPR;  // [read-write] BMCMPR
    volatile uint32_t BMPER;   // [read-write] Burst Mode Period Register
    volatile uint32_t EECR1;   // [read-write] Timer External Event Control Register 1
    volatile uint32_t EECR2;   // [read-write] Timer External Event Control Register 2
    volatile uint32_t EECR3;   // [read-write] Timer External Event Control Register 3
    volatile uint32_t ADC1R;   // [read-write] ADC Trigger 1 Register
    volatile uint32_t ADC2R;   // [read-write] ADC Trigger 2 Register
    volatile uint32_t ADC3R;   // [read-write] ADC Trigger 3 Register
    volatile uint32_t ADC4R;   // [read-write] ADC Trigger 4 Register
    volatile uint32_t DLLCR;   // [read-write] DLL Control Register
    volatile uint32_t FLTINR1; // [read-write] HRTIM Fault Input Register 1
    volatile uint32_t FLTINR2; // [read-write] HRTIM Fault Input Register 2
    volatile uint32_t BDMUPDR; // [read-write] BDMUPDR
    volatile uint32_t BDTAUPR; // [read-write] Burst DMA Timerx update Register
    volatile uint32_t BDTBUPR; // [read-write] Burst DMA Timerx update Register
    volatile uint32_t BDTCUPR; // [read-write] Burst DMA Timerx update Register
    volatile uint32_t BDTDUPR; // [read-write] Burst DMA Timerx update Register
    volatile uint32_t BDTEUPR; // [read-write] Burst DMA Timerx update Register
    volatile uint32_t BDMADR;  // [write-only] Burst DMA Data Register
    volatile uint32_t BDTFUPR; // [read-write] Burst DMA Timerx update Register
    volatile uint32_t ADCER;   // [read-write] HRTIM ADC Extended Trigger Register
    volatile uint32_t ADCUR;   // [read-write] HRTIM ADC Trigger Update Register
    volatile uint32_t ADCPS1;  // [read-write] HRTIM ADC Post Scaler Register 1
    volatile uint32_t ADCPS2;  // [read-write] HRTIM ADC Post Scaler Register 2
    volatile uint32_t FLTINR3; // [read-write] HRTIM Fault Input Register 3
    volatile uint32_t FLTINR4; // [read-write] HRTIM Fault Input Register 4

    static constexpr uint32_t CR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CR1_AD4USRC =      // ADC Trigger 4 Update Source
        bit_field_t<25, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CR1_AD3USRC =      // ADC Trigger 3 Update Source
        bit_field_t<22, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CR1_AD2USRC =      // ADC Trigger 2 Update Source
        bit_field_t<19, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CR1_AD1USRC =      // ADC Trigger 1 Update Source
        bit_field_t<16, 0x7>::value<X>();
    static constexpr uint32_t CR1_TFUDIS = 0x40; // Timer f Update Disable
    static constexpr uint32_t CR1_TEUDIS = 0x20; // Timer E Update Disable
    static constexpr uint32_t CR1_TDUDIS = 0x10; // Timer D Update Disable
    static constexpr uint32_t CR1_TCUDIS = 0x8;  // Timer C Update Disable
    static constexpr uint32_t CR1_TBUDIS = 0x4;  // Timer B Update Disable
    static constexpr uint32_t CR1_TAUDIS = 0x2;  // Timer A Update Disable
    static constexpr uint32_t CR1_MUDIS = 0x1;   // Master Update Disable

    static constexpr uint32_t CR2_RESET_VALUE = 0x0;
    static constexpr uint32_t CR2_SWPF = 0x200000; // Swap Timer F outputs
    static constexpr uint32_t CR2_SWPE = 0x100000; // Swap Timer E outputs
    static constexpr uint32_t CR2_SWPD = 0x80000;  // Swap Timer D outputs
    static constexpr uint32_t CR2_SWPC = 0x40000;  // Swap Timer C outputs
    static constexpr uint32_t CR2_SWPB = 0x20000;  // Swap Timer B outputs
    static constexpr uint32_t CR2_SWPA = 0x10000;  // Swap Timer A outputs
    static constexpr uint32_t CR2_TFRST = 0x4000;  // Timer f counter software reset
    static constexpr uint32_t CR2_TERST = 0x2000;  // Timer E counter software reset
    static constexpr uint32_t CR2_TDRST = 0x1000;  // Timer D counter software reset
    static constexpr uint32_t CR2_TCRST = 0x800;   // Timer C counter software reset
    static constexpr uint32_t CR2_TBRST = 0x400;   // Timer B counter software reset
    static constexpr uint32_t CR2_TARST = 0x200;   // Timer A counter software reset
    static constexpr uint32_t CR2_MRST = 0x100;    // Master Counter software reset
    static constexpr uint32_t CR2_TFSWU = 0x40;    // Timer f Software Update
    static constexpr uint32_t CR2_TESWU = 0x20;    // Timer E Software Update
    static constexpr uint32_t CR2_TDSWU = 0x10;    // Timer D Software Update
    static constexpr uint32_t CR2_TCSWU = 0x8;     // Timer C Software Update
    static constexpr uint32_t CR2_TBSWU = 0x4;     // Timer B Software Update
    static constexpr uint32_t CR2_TASWU = 0x2;     // Timer A Software update
    static constexpr uint32_t CR2_MSWU = 0x1;      // Master Timer Software update

    static constexpr uint32_t ISR_RESET_VALUE = 0x0;
    static constexpr uint32_t ISR_BMPER = 0x20000;  // Burst mode Period Interrupt Flag
    static constexpr uint32_t ISR_DLLRDY = 0x10000; // DLL Ready Interrupt Flag
    static constexpr uint32_t ISR_FLT6 = 0x40;      // Fault 6 Interrupt Flag
    static constexpr uint32_t ISR_SYSFLT = 0x20;    // System Fault Interrupt Flag
    static constexpr uint32_t ISR_FLT5 = 0x10;      // Fault 5 Interrupt Flag
    static constexpr uint32_t ISR_FLT4 = 0x8;       // Fault 4 Interrupt Flag
    static constexpr uint32_t ISR_FLT3 = 0x4;       // Fault 3 Interrupt Flag
    static constexpr uint32_t ISR_FLT2 = 0x2;       // Fault 2 Interrupt Flag
    static constexpr uint32_t ISR_FLT1 = 0x1;       // Fault 1 Interrupt Flag

    static constexpr uint32_t ICR_RESET_VALUE = 0x0;
    static constexpr uint32_t ICR_BMPERC = 0x20000;  // Burst mode period flag Clear
    static constexpr uint32_t ICR_DLLRDYC = 0x10000; // DLL Ready Interrupt flag Clear
    static constexpr uint32_t ICR_FLT6C = 0x40;      // Fault 6 Interrupt Flag Clear
    static constexpr uint32_t ICR_SYSFLTC = 0x20;    // System Fault Interrupt Flag Clear
    static constexpr uint32_t ICR_FLT5C = 0x10;      // Fault 5 Interrupt Flag Clear
    static constexpr uint32_t ICR_FLT4C = 0x8;       // Fault 4 Interrupt Flag Clear
    static constexpr uint32_t ICR_FLT3C = 0x4;       // Fault 3 Interrupt Flag Clear
    static constexpr uint32_t ICR_FLT2C = 0x2;       // Fault 2 Interrupt Flag Clear
    static constexpr uint32_t ICR_FLT1C = 0x1;       // Fault 1 Interrupt Flag Clear

    static constexpr uint32_t IER_RESET_VALUE = 0x0;
    static constexpr uint32_t IER_BMPERIE = 0x20000;  // Burst mode period Interrupt Enable
    static constexpr uint32_t IER_DLLRDYIE = 0x10000; // DLL Ready Interrupt Enable
    static constexpr uint32_t IER_FLT6IE = 0x40;      // Fault 6 Interrupt Enable
    static constexpr uint32_t IER_SYSFLTE = 0x20;     // System Fault Interrupt Enable
    static constexpr uint32_t IER_FLT5IE = 0x10;      // Fault 5 Interrupt Enable
    static constexpr uint32_t IER_FLT4IE = 0x8;       // Fault 4 Interrupt Enable
    static constexpr uint32_t IER_FLT3IE = 0x4;       // Fault 3 Interrupt Enable
    static constexpr uint32_t IER_FLT2IE = 0x2;       // Fault 2 Interrupt Enable
    static constexpr uint32_t IER_FLT1IE = 0x1;       // Fault 1 Interrupt Enable

    static constexpr uint32_t OENR_RESET_VALUE = 0x0;
    static constexpr uint32_t OENR_TF2ODS = 0x800; // Timer F Output 2 disable status
    static constexpr uint32_t OENR_TF1ODS = 0x400; // Timer F Output 1 disable status
    static constexpr uint32_t OENR_TE2OEN = 0x200; // Timer E Output 2 Enable
    static constexpr uint32_t OENR_TE1OEN = 0x100; // Timer E Output 1 Enable
    static constexpr uint32_t OENR_TD2OEN = 0x80;  // Timer D Output 2 Enable
    static constexpr uint32_t OENR_TD1OEN = 0x40;  // Timer D Output 1 Enable
    static constexpr uint32_t OENR_TC2OEN = 0x20;  // Timer C Output 2 Enable
    static constexpr uint32_t OENR_TC1OEN = 0x10;  // Timer C Output 1 Enable
    static constexpr uint32_t OENR_TB2OEN = 0x8;   // Timer B Output 2 Enable
    static constexpr uint32_t OENR_TB1OEN = 0x4;   // Timer B Output 1 Enable
    static constexpr uint32_t OENR_TA2OEN = 0x2;   // Timer A Output 2 Enable
    static constexpr uint32_t OENR_TA1OEN = 0x1;   // Timer A Output 1 Enable

    static constexpr uint32_t ODISR_RESET_VALUE = 0x0;
    static constexpr uint32_t ODISR_TF2ODIS = 0x800; // TF2ODIS
    static constexpr uint32_t ODISR_TF1ODIS = 0x400; // TF1ODIS
    static constexpr uint32_t ODISR_TE2ODIS = 0x200; // TE2ODIS
    static constexpr uint32_t ODISR_TE1ODIS = 0x100; // TE1ODIS
    static constexpr uint32_t ODISR_TD2ODIS = 0x80;  // TD2ODIS
    static constexpr uint32_t ODISR_TD1ODIS = 0x40;  // TD1ODIS
    static constexpr uint32_t ODISR_TC2ODIS = 0x20;  // TC2ODIS
    static constexpr uint32_t ODISR_TC1ODIS = 0x10;  // TC1ODIS
    static constexpr uint32_t ODISR_TB2ODIS = 0x8;   // TB2ODIS
    static constexpr uint32_t ODISR_TB1ODIS = 0x4;   // TB1ODIS
    static constexpr uint32_t ODISR_TA2ODIS = 0x2;   // TA2ODIS
    static constexpr uint32_t ODISR_TA1ODIS = 0x1;   // TA1ODIS

    static constexpr uint32_t ODSR_RESET_VALUE = 0x0;
    static constexpr uint32_t ODSR_TF2ODS = 0x800; // TF2ODS
    static constexpr uint32_t ODSR_TF1ODS = 0x400; // TF1ODS
    static constexpr uint32_t ODSR_TE2ODS = 0x200; // Timer E Output 2 disable status
    static constexpr uint32_t ODSR_TE1ODS = 0x100; // Timer E Output 1 disable status
    static constexpr uint32_t ODSR_TD2ODS = 0x80;  // Timer D Output 2 disable status
    static constexpr uint32_t ODSR_TD1ODS = 0x40;  // Timer D Output 1 disable status
    static constexpr uint32_t ODSR_TC2ODS = 0x20;  // Timer C Output 2 disable status
    static constexpr uint32_t ODSR_TC1ODS = 0x10;  // Timer C Output 1 disable status
    static constexpr uint32_t ODSR_TB2ODS = 0x8;   // Timer B Output 2 disable status
    static constexpr uint32_t ODSR_TB1ODS = 0x4;   // Timer B Output 1 disable status
    static constexpr uint32_t ODSR_TA2ODS = 0x2;   // Timer A Output 2 disable status
    static constexpr uint32_t ODSR_TA1ODS = 0x1;   // Timer A Output 1 disable status

    static constexpr uint32_t BMCR_RESET_VALUE = 0x0;
    static constexpr uint32_t BMCR_BMSTAT = 0x80000000; // Burst Mode Status
    static constexpr uint32_t BMCR_TFBM = 0x400000;     // Timer f Burst Mode
    static constexpr uint32_t BMCR_TEBM = 0x200000;     // Timer E Burst Mode
    static constexpr uint32_t BMCR_TDBM = 0x100000;     // Timer D Burst Mode
    static constexpr uint32_t BMCR_TCBM = 0x80000;      // Timer C Burst Mode
    static constexpr uint32_t BMCR_TBBM = 0x40000;      // Timer B Burst Mode
    static constexpr uint32_t BMCR_TABM = 0x20000;      // Timer A Burst Mode
    static constexpr uint32_t BMCR_MTBM = 0x10000;      // Master Timer Burst Mode
    static constexpr uint32_t BMCR_BMPREN = 0x400;      // Burst Mode Preload Enable
    template<uint32_t X>
    static constexpr uint32_t BMCR_BMPRSC =             // Burst Mode Prescaler
        bit_field_t<6, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BMCR_BMCLK =              // Burst Mode Clock source
        bit_field_t<2, 0xf>::value<X>();
    static constexpr uint32_t BMCR_BMOM = 0x2;          // Burst Mode operating mode
    static constexpr uint32_t BMCR_BME = 0x1;           // Burst Mode enable

    static constexpr uint32_t BMTRG_RESET_VALUE = 0x0;
    static constexpr uint32_t BMTRG_OCHPEV = 0x80000000; // OCHPEV
    static constexpr uint32_t BMTRG_EEV8 = 0x40000000;   // EEV8
    static constexpr uint32_t BMTRG_EEV7 = 0x20000000;   // EEV7
    static constexpr uint32_t BMTRG_TDEEV8 = 0x10000000; // TDEEV8
    static constexpr uint32_t BMTRG_TDEEV7 = 0x8000000;  // TDEEV7
    static constexpr uint32_t BMTRG_TECMP2 = 0x4000000;  // TECMP2
    static constexpr uint32_t BMTRG_TECMP1 = 0x2000000;  // TECMP1
    static constexpr uint32_t BMTRG_TEREP = 0x1000000;   // TEREP
    static constexpr uint32_t BMTRG_TERST = 0x800000;    // TERST
    static constexpr uint32_t BMTRG_TDCMP2 = 0x400000;   // TDCMP2
    static constexpr uint32_t BMTRG_TDCMP1 = 0x200000;   // TDCMP1
    static constexpr uint32_t BMTRG_TDREP = 0x100000;    // TDREP
    static constexpr uint32_t BMTRG_TDRST = 0x80000;     // TDRST
    static constexpr uint32_t BMTRG_TCCMP2 = 0x40000;    // TCCMP2
    static constexpr uint32_t BMTRG_TCCMP1 = 0x20000;    // TCCMP1
    static constexpr uint32_t BMTRG_TCREP = 0x10000;     // TCREP
    static constexpr uint32_t BMTRG_TCRST = 0x8000;      // TCRST
    static constexpr uint32_t BMTRG_TBCMP2 = 0x4000;     // TBCMP2
    static constexpr uint32_t BMTRG_TBCMP1 = 0x2000;     // TBCMP1
    static constexpr uint32_t BMTRG_TBREP = 0x1000;      // TBREP
    static constexpr uint32_t BMTRG_TBRST = 0x800;       // TBRST
    static constexpr uint32_t BMTRG_TACMP2 = 0x400;      // TACMP2
    static constexpr uint32_t BMTRG_TACMP1 = 0x200;      // TACMP1
    static constexpr uint32_t BMTRG_TAREP = 0x100;       // TAREP
    static constexpr uint32_t BMTRG_TARST = 0x80;        // TARST
    static constexpr uint32_t BMTRG_MSTCMP4 = 0x40;      // MSTCMP4
    static constexpr uint32_t BMTRG_MSTCMP3 = 0x20;      // MSTCMP3
    static constexpr uint32_t BMTRG_MSTCMP2 = 0x10;      // MSTCMP2
    static constexpr uint32_t BMTRG_MSTCMP1 = 0x8;       // MSTCMP1
    static constexpr uint32_t BMTRG_MSTREP = 0x4;        // MSTREP
    static constexpr uint32_t BMTRG_MSTRST = 0x2;        // MSTRST
    static constexpr uint32_t BMTRG_SW = 0x1;            // SW

    static constexpr uint32_t BMCMPR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t BMCMPR_BMCMP =   // BMCMP
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t BMPER_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t BMPER_BMPER =   // Burst mode Period
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t EECR1_RESET_VALUE = 0x0;
    static constexpr uint32_t EECR1_EE5FAST = 0x20000000; // External Event 5 Fast mode
    template<uint32_t X>
    static constexpr uint32_t EECR1_EE5SNS =              // External Event 5 Sensitivity
        bit_field_t<27, 0x3>::value<X>();
    static constexpr uint32_t EECR1_EE5POL = 0x4000000;   // External Event 5 Polarity
    template<uint32_t X>
    static constexpr uint32_t EECR1_EE5SRC =              // External Event 5 Source
        bit_field_t<24, 0x3>::value<X>();
    static constexpr uint32_t EECR1_EE4FAST = 0x800000;   // External Event 4 Fast mode
    template<uint32_t X>
    static constexpr uint32_t EECR1_EE4SNS =              // External Event 4 Sensitivity
        bit_field_t<21, 0x3>::value<X>();
    static constexpr uint32_t EECR1_EE4POL = 0x100000;    // External Event 4 Polarity
    template<uint32_t X>
    static constexpr uint32_t EECR1_EE4SRC =              // External Event 4 Source
        bit_field_t<18, 0x3>::value<X>();
    static constexpr uint32_t EECR1_EE3FAST = 0x20000;    // External Event 3 Fast mode
    template<uint32_t X>
    static constexpr uint32_t EECR1_EE3SNS =              // External Event 3 Sensitivity
        bit_field_t<15, 0x3>::value<X>();
    static constexpr uint32_t EECR1_EE3POL = 0x4000;      // External Event 3 Polarity
    template<uint32_t X>
    static constexpr uint32_t EECR1_EE3SRC =              // External Event 3 Source
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t EECR1_EE2FAST = 0x800;      // External Event 2 Fast mode
    template<uint32_t X>
    static constexpr uint32_t EECR1_EE2SNS =              // External Event 2 Sensitivity
        bit_field_t<9, 0x3>::value<X>();
    static constexpr uint32_t EECR1_EE2POL = 0x100;       // External Event 2 Polarity
    template<uint32_t X>
    static constexpr uint32_t EECR1_EE2SRC =              // External Event 2 Source
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t EECR1_EE1FAST = 0x20;       // External Event 1 Fast mode
    template<uint32_t X>
    static constexpr uint32_t EECR1_EE1SNS =              // External Event 1 Sensitivity
        bit_field_t<3, 0x3>::value<X>();
    static constexpr uint32_t EECR1_EE1POL = 0x4;         // External Event 1 Polarity
    template<uint32_t X>
    static constexpr uint32_t EECR1_EE1SRC =              // External Event 1 Source
        bit_field_t<0, 0x3>::value<X>();

    static constexpr uint32_t EECR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EECR2_EE6SRC =             // EE6SRC
        bit_field_t<0, 0x3>::value<X>();
    static constexpr uint32_t EECR2_EE6POL = 0x4;        // EE6POL
    template<uint32_t X>
    static constexpr uint32_t EECR2_EE6SNS =             // EE6SNS
        bit_field_t<3, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EECR2_EE7SRC =             // EE7SRC
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t EECR2_EE7POL = 0x100;      // EE7POL
    template<uint32_t X>
    static constexpr uint32_t EECR2_EE7SNS =             // EE7SNS
        bit_field_t<9, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EECR2_EE8SRC =             // EE8SRC
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t EECR2_EE8POL = 0x4000;     // EE8POL
    template<uint32_t X>
    static constexpr uint32_t EECR2_EE8SNS =             // EE8SNS
        bit_field_t<15, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EECR2_EE9SRC =             // EE9SRC
        bit_field_t<18, 0x3>::value<X>();
    static constexpr uint32_t EECR2_EE9POL = 0x100000;   // EE9POL
    template<uint32_t X>
    static constexpr uint32_t EECR2_EE9SNS =             // EE9SNS
        bit_field_t<21, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EECR2_EE10SRC =            // EE10SRC
        bit_field_t<24, 0x3>::value<X>();
    static constexpr uint32_t EECR2_EE10POL = 0x4000000; // EE10POL
    template<uint32_t X>
    static constexpr uint32_t EECR2_EE10SNS =            // EE10SNS
        bit_field_t<27, 0x3>::value<X>();

    static constexpr uint32_t EECR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EECR3_EE6F =    // EE6F
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EECR3_EE7F =    // EE7F
        bit_field_t<6, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EECR3_EE8F =    // EE8F
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EECR3_EE9F =    // EE9F
        bit_field_t<18, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EECR3_EE10F =   // EE10F
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EECR3_EEVSD =   // EEVSD
        bit_field_t<30, 0x3>::value<X>();

    static constexpr uint32_t ADC1R_RESET_VALUE = 0x0;
    static constexpr uint32_t ADC1R_AD1TEPER = 0x80000000; // ADC trigger 1 on Timer E Period
    static constexpr uint32_t ADC1R_AD1TEC4 = 0x40000000;  // ADC trigger 1 on Timer E compare 4
    static constexpr uint32_t ADC1R_AD1TEC3 = 0x20000000;  // ADC trigger 1 on Timer E compare 3
    static constexpr uint32_t ADC1R_AD1TEC2 = 0x10000000;  // ADC trigger 1 on Timer E compare 2
    static constexpr uint32_t ADC1R_AD1TDPER = 0x8000000;  // ADC trigger 1 on Timer D Period
    static constexpr uint32_t ADC1R_AD1TDC4 = 0x4000000;   // ADC trigger 1 on Timer D compare 4
    static constexpr uint32_t ADC1R_AD1TDC3 = 0x2000000;   // ADC trigger 1 on Timer D compare 3
    static constexpr uint32_t ADC1R_AD1TDC2 = 0x1000000;   // ADC trigger 1 on Timer D compare 2
    static constexpr uint32_t ADC1R_AD1TCPER = 0x800000;   // ADC trigger 1 on Timer C Period
    static constexpr uint32_t ADC1R_AD1TCC4 = 0x400000;    // ADC trigger 1 on Timer C compare 4
    static constexpr uint32_t ADC1R_AD1TCC3 = 0x200000;    // ADC trigger 1 on Timer C compare 3
    static constexpr uint32_t ADC1R_AD1TCC2 = 0x100000;    // ADC trigger 1 on Timer C compare 2
    static constexpr uint32_t ADC1R_AD1TBRST = 0x80000;    // ADC trigger 1 on Timer B Reset
    static constexpr uint32_t ADC1R_AD1TBPER = 0x40000;    // ADC trigger 1 on Timer B Period
    static constexpr uint32_t ADC1R_AD1TBC4 = 0x20000;     // ADC trigger 1 on Timer B compare 4
    static constexpr uint32_t ADC1R_AD1TBC3 = 0x10000;     // ADC trigger 1 on Timer B compare 3
    static constexpr uint32_t ADC1R_AD1TBC2 = 0x8000;      // ADC trigger 1 on Timer B compare 2
    static constexpr uint32_t ADC1R_AD1TARST = 0x4000;     // ADC trigger 1 on Timer A Reset
    static constexpr uint32_t ADC1R_AD1TAPER = 0x2000;     // ADC trigger 1 on Timer A Period
    static constexpr uint32_t ADC1R_AD1TAC4 = 0x1000;      // ADC trigger 1 on Timer A compare 4
    static constexpr uint32_t ADC1R_AD1TAC3 = 0x800;       // ADC trigger 1 on Timer A compare 3
    static constexpr uint32_t ADC1R_AD1TAC2 = 0x400;       // ADC trigger 1 on Timer A compare 2
    static constexpr uint32_t ADC1R_AD1EEV5 = 0x200;       // ADC trigger 1 on External Event 5
    static constexpr uint32_t ADC1R_AD1EEV4 = 0x100;       // ADC trigger 1 on External Event 4
    static constexpr uint32_t ADC1R_AD1EEV3 = 0x80;        // ADC trigger 1 on External Event 3
    static constexpr uint32_t ADC1R_AD1EEV2 = 0x40;        // ADC trigger 1 on External Event 2
    static constexpr uint32_t ADC1R_AD1EEV1 = 0x20;        // ADC trigger 1 on External Event 1
    static constexpr uint32_t ADC1R_AD1MPER = 0x10;        // ADC trigger 1 on Master Period
    static constexpr uint32_t ADC1R_AD1MC4 = 0x8;          // ADC trigger 1 on Master Compare 4
    static constexpr uint32_t ADC1R_AD1MC3 = 0x4;          // ADC trigger 1 on Master Compare 3
    static constexpr uint32_t ADC1R_AD1MC2 = 0x2;          // ADC trigger 1 on Master Compare 2
    static constexpr uint32_t ADC1R_AD1MC1 = 0x1;          // ADC trigger 1 on Master Compare 1

    static constexpr uint32_t ADC2R_RESET_VALUE = 0x0;
    static constexpr uint32_t ADC2R_AD2TERST = 0x80000000; // ADC trigger 2 on Timer E Reset
    static constexpr uint32_t ADC2R_AD2TEC4 = 0x40000000;  // ADC trigger 2 on Timer E compare 4
    static constexpr uint32_t ADC2R_AD2TEC3 = 0x20000000;  // ADC trigger 2 on Timer E compare 3
    static constexpr uint32_t ADC2R_AD2TEC2 = 0x10000000;  // ADC trigger 2 on Timer E compare 2
    static constexpr uint32_t ADC2R_AD2TDRST = 0x8000000;  // ADC trigger 2 on Timer D Reset
    static constexpr uint32_t ADC2R_AD2TDPER = 0x4000000;  // ADC trigger 2 on Timer D Period
    static constexpr uint32_t ADC2R_AD2TDC4 = 0x2000000;   // ADC trigger 2 on Timer D compare 4
    static constexpr uint32_t ADC2R_AD2TDC3 = 0x1000000;   // ADC trigger 2 on Timer D compare 3
    static constexpr uint32_t ADC2R_AD2TDC2 = 0x800000;    // ADC trigger 2 on Timer D compare 2
    static constexpr uint32_t ADC2R_AD2TCRST = 0x400000;   // ADC trigger 2 on Timer C Reset
    static constexpr uint32_t ADC2R_AD2TCPER = 0x200000;   // ADC trigger 2 on Timer C Period
    static constexpr uint32_t ADC2R_AD2TCC4 = 0x100000;    // ADC trigger 2 on Timer C compare 4
    static constexpr uint32_t ADC2R_AD2TCC3 = 0x80000;     // ADC trigger 2 on Timer C compare 3
    static constexpr uint32_t ADC2R_AD2TCC2 = 0x40000;     // ADC trigger 2 on Timer C compare 2
    static constexpr uint32_t ADC2R_AD2TBPER = 0x20000;    // ADC trigger 2 on Timer B Period
    static constexpr uint32_t ADC2R_AD2TBC4 = 0x10000;     // ADC trigger 2 on Timer B compare 4
    static constexpr uint32_t ADC2R_AD2TBC3 = 0x8000;      // ADC trigger 2 on Timer B compare 3
    static constexpr uint32_t ADC2R_AD2TBC2 = 0x4000;      // ADC trigger 2 on Timer B compare 2
    static constexpr uint32_t ADC2R_AD2TAPER = 0x2000;     // ADC trigger 2 on Timer A Period
    static constexpr uint32_t ADC2R_AD2TAC4 = 0x1000;      // ADC trigger 2 on Timer A compare 4
    static constexpr uint32_t ADC2R_AD2TAC3 = 0x800;       // ADC trigger 2 on Timer A compare 3
    static constexpr uint32_t ADC2R_AD2TAC2 = 0x400;       // ADC trigger 2 on Timer A compare 2
    static constexpr uint32_t ADC2R_AD2EEV10 = 0x200;      // ADC trigger 2 on External Event 10
    static constexpr uint32_t ADC2R_AD2EEV9 = 0x100;       // ADC trigger 2 on External Event 9
    static constexpr uint32_t ADC2R_AD2EEV8 = 0x80;        // ADC trigger 2 on External Event 8
    static constexpr uint32_t ADC2R_AD2EEV7 = 0x40;        // ADC trigger 2 on External Event 7
    static constexpr uint32_t ADC2R_AD2EEV6 = 0x20;        // ADC trigger 2 on External Event 6
    static constexpr uint32_t ADC2R_AD2MPER = 0x10;        // ADC trigger 2 on Master Period
    static constexpr uint32_t ADC2R_AD2MC4 = 0x8;          // ADC trigger 2 on Master Compare 4
    static constexpr uint32_t ADC2R_AD2MC3 = 0x4;          // ADC trigger 2 on Master Compare 3
    static constexpr uint32_t ADC2R_AD2MC2 = 0x2;          // ADC trigger 2 on Master Compare 2
    static constexpr uint32_t ADC2R_AD2MC1 = 0x1;          // ADC trigger 2 on Master Compare 1

    static constexpr uint32_t ADC3R_RESET_VALUE = 0x0;
    static constexpr uint32_t ADC3R_AD1TEPER = 0x80000000; // AD1TEPER
    static constexpr uint32_t ADC3R_AD1TEC4 = 0x40000000;  // AD1TEC4
    static constexpr uint32_t ADC3R_AD1TEC3 = 0x20000000;  // AD1TEC3
    static constexpr uint32_t ADC3R_AD1TEC2 = 0x10000000;  // AD1TEC2
    static constexpr uint32_t ADC3R_AD1TDPER = 0x8000000;  // AD1TDPER
    static constexpr uint32_t ADC3R_AD1TDC4 = 0x4000000;   // AD1TDC4
    static constexpr uint32_t ADC3R_AD1TDC3 = 0x2000000;   // AD1TDC3
    static constexpr uint32_t ADC3R_AD1TDC2 = 0x1000000;   // AD1TDC2
    static constexpr uint32_t ADC3R_AD1TCPER = 0x800000;   // AD1TCPER
    static constexpr uint32_t ADC3R_AD1TCC4 = 0x400000;    // AD1TCC4
    static constexpr uint32_t ADC3R_AD1TCC3 = 0x200000;    // AD1TCC3
    static constexpr uint32_t ADC3R_AD1TCC2 = 0x100000;    // AD1TCC2
    static constexpr uint32_t ADC3R_AD1TBRST = 0x80000;    // AD1TBRST
    static constexpr uint32_t ADC3R_AD1TBPER = 0x40000;    // AD1TBPER
    static constexpr uint32_t ADC3R_AD1TBC4 = 0x20000;     // AD1TBC4
    static constexpr uint32_t ADC3R_AD1TBC3 = 0x10000;     // AD1TBC3
    static constexpr uint32_t ADC3R_AD1TBC2 = 0x8000;      // AD1TBC2
    static constexpr uint32_t ADC3R_AD1TARST = 0x4000;     // AD1TARST
    static constexpr uint32_t ADC3R_AD1TAPER = 0x2000;     // AD1TAPER
    static constexpr uint32_t ADC3R_AD1TAC4 = 0x1000;      // AD1TAC4
    static constexpr uint32_t ADC3R_AD1TAC3 = 0x800;       // AD1TAC3
    static constexpr uint32_t ADC3R_AD1TAC2 = 0x400;       // AD1TAC2
    static constexpr uint32_t ADC3R_AD1EEV5 = 0x200;       // AD1EEV5
    static constexpr uint32_t ADC3R_AD1EEV4 = 0x100;       // AD1EEV4
    static constexpr uint32_t ADC3R_AD1EEV3 = 0x80;        // AD1EEV3
    static constexpr uint32_t ADC3R_AD1EEV2 = 0x40;        // AD1EEV2
    static constexpr uint32_t ADC3R_AD1EEV1 = 0x20;        // AD1EEV1
    static constexpr uint32_t ADC3R_AD1MPER = 0x10;        // AD1MPER
    static constexpr uint32_t ADC3R_AD1MC4 = 0x8;          // AD1MC4
    static constexpr uint32_t ADC3R_AD1MC3 = 0x4;          // AD1MC3
    static constexpr uint32_t ADC3R_AD1MC2 = 0x2;          // AD1MC2
    static constexpr uint32_t ADC3R_AD1MC1 = 0x1;          // AD1MC1

    static constexpr uint32_t ADC4R_RESET_VALUE = 0x0;
    static constexpr uint32_t ADC4R_AD2TERST = 0x80000000; // AD2TERST
    static constexpr uint32_t ADC4R_AD2TEC4 = 0x40000000;  // AD2TEC4
    static constexpr uint32_t ADC4R_AD2TEC3 = 0x20000000;  // AD2TEC3
    static constexpr uint32_t ADC4R_AD2TEC2 = 0x10000000;  // AD2TEC2
    static constexpr uint32_t ADC4R_AD2TDRST = 0x8000000;  // AD2TDRST
    static constexpr uint32_t ADC4R_AD2TDPER = 0x4000000;  // AD2TDPER
    static constexpr uint32_t ADC4R_AD2TDC4 = 0x2000000;   // AD2TDC4
    static constexpr uint32_t ADC4R_AD2TDC3 = 0x1000000;   // AD2TDC3
    static constexpr uint32_t ADC4R_AD2TDC2 = 0x800000;    // AD2TDC2
    static constexpr uint32_t ADC4R_AD2TCRST = 0x400000;   // AD2TCRST
    static constexpr uint32_t ADC4R_AD2TCPER = 0x200000;   // AD2TCPER
    static constexpr uint32_t ADC4R_AD2TCC4 = 0x100000;    // AD2TCC4
    static constexpr uint32_t ADC4R_AD2TCC3 = 0x80000;     // AD2TCC3
    static constexpr uint32_t ADC4R_AD2TCC2 = 0x40000;     // AD2TCC2
    static constexpr uint32_t ADC4R_AD2TBPER = 0x20000;    // AD2TBPER
    static constexpr uint32_t ADC4R_AD2TBC4 = 0x10000;     // AD2TBC4
    static constexpr uint32_t ADC4R_AD2TBC3 = 0x8000;      // AD2TBC3
    static constexpr uint32_t ADC4R_AD2TBC2 = 0x4000;      // AD2TBC2
    static constexpr uint32_t ADC4R_AD2TAPER = 0x2000;     // AD2TAPER
    static constexpr uint32_t ADC4R_AD2TAC4 = 0x1000;      // AD2TAC4
    static constexpr uint32_t ADC4R_AD2TAC3 = 0x800;       // AD2TAC3
    static constexpr uint32_t ADC4R_AD2TAC2 = 0x400;       // AD2TAC2
    static constexpr uint32_t ADC4R_AD2EEV10 = 0x200;      // AD2EEV10
    static constexpr uint32_t ADC4R_AD2EEV9 = 0x100;       // AD2EEV9
    static constexpr uint32_t ADC4R_AD2EEV8 = 0x80;        // AD2EEV8
    static constexpr uint32_t ADC4R_AD2EEV7 = 0x40;        // AD2EEV7
    static constexpr uint32_t ADC4R_AD2EEV6 = 0x20;        // AD2EEV6
    static constexpr uint32_t ADC4R_AD2MPER = 0x10;        // AD2MPER
    static constexpr uint32_t ADC4R_AD2MC4 = 0x8;          // AD2MC4
    static constexpr uint32_t ADC4R_AD2MC3 = 0x4;          // AD2MC3
    static constexpr uint32_t ADC4R_AD2MC2 = 0x2;          // AD2MC2
    static constexpr uint32_t ADC4R_AD2MC1 = 0x1;          // AD2MC1

    static constexpr uint32_t DLLCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DLLCR_CALRTE =     // DLL Calibration rate
        bit_field_t<2, 0x3>::value<X>();
    static constexpr uint32_t DLLCR_CALEN = 0x2; // DLL Calibration Enable
    static constexpr uint32_t DLLCR_CAL = 0x1;   // DLL Calibration Start

    static constexpr uint32_t FLTINR1_RESET_VALUE = 0x0;
    static constexpr uint32_t FLTINR1_FLT4LCK = 0x80000000; // FLT4LCK
    template<uint32_t X>
    static constexpr uint32_t FLTINR1_FLT4F =               // FLT4F
        bit_field_t<27, 0xf>::value<X>();
    static constexpr uint32_t FLTINR1_FLT4SRC = 0x4000000;  // FLT4SRC
    static constexpr uint32_t FLTINR1_FLT4P = 0x2000000;    // FLT4P
    static constexpr uint32_t FLTINR1_FLT4E = 0x1000000;    // FLT4E
    static constexpr uint32_t FLTINR1_FLT3LCK = 0x800000;   // FLT3LCK
    template<uint32_t X>
    static constexpr uint32_t FLTINR1_FLT3F =               // FLT3F
        bit_field_t<19, 0xf>::value<X>();
    static constexpr uint32_t FLTINR1_FLT3SRC = 0x40000;    // FLT3SRC
    static constexpr uint32_t FLTINR1_FLT3P = 0x20000;      // FLT3P
    static constexpr uint32_t FLTINR1_FLT3E = 0x10000;      // FLT3E
    static constexpr uint32_t FLTINR1_FLT2LCK = 0x8000;     // FLT2LCK
    template<uint32_t X>
    static constexpr uint32_t FLTINR1_FLT2F =               // FLT2F
        bit_field_t<11, 0xf>::value<X>();
    static constexpr uint32_t FLTINR1_FLT2SRC = 0x400;      // FLT2SRC
    static constexpr uint32_t FLTINR1_FLT2P = 0x200;        // FLT2P
    static constexpr uint32_t FLTINR1_FLT2E = 0x100;        // FLT2E
    static constexpr uint32_t FLTINR1_FLT1LCK = 0x80;       // FLT1LCK
    template<uint32_t X>
    static constexpr uint32_t FLTINR1_FLT1F =               // FLT1F
        bit_field_t<3, 0xf>::value<X>();
    static constexpr uint32_t FLTINR1_FLT1SRC = 0x4;        // FLT1SRC
    static constexpr uint32_t FLTINR1_FLT1P = 0x2;          // FLT1P
    static constexpr uint32_t FLTINR1_FLT1E = 0x1;          // FLT1E

    static constexpr uint32_t FLTINR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FLTINR2_FLTSD =               // FLTSD
        bit_field_t<24, 0x3>::value<X>();
    static constexpr uint32_t FLTINR2_FLT6SRC_1 = 0x200000; // FLT6SRC
    static constexpr uint32_t FLTINR2_FLT5SRC_1 = 0x100000; // FLT5SRC_1
    static constexpr uint32_t FLTINR2_FLT4SRC_1 = 0x80000;  // FLT4SRC_1
    static constexpr uint32_t FLTINR2_FLT3SRC_1 = 0x40000;  // FLT3SRC_1
    static constexpr uint32_t FLTINR2_FLT2SRC_1 = 0x20000;  // FLT2SRC_1
    static constexpr uint32_t FLTINR2_FLT1SRC_1 = 0x10000;  // FLT1SRC_1
    static constexpr uint32_t FLTINR2_FLT6LCK = 0x8000;     // FLT6LCK
    template<uint32_t X>
    static constexpr uint32_t FLTINR2_FLT6F =               // FLT6F
        bit_field_t<11, 0xf>::value<X>();
    static constexpr uint32_t FLTINR2_FLT6SRC_0 = 0x400;    // FLT6F
    static constexpr uint32_t FLTINR2_FLT6P = 0x200;        // FLT6P
    static constexpr uint32_t FLTINR2_FLT6E = 0x100;        // FLT6E
    static constexpr uint32_t FLTINR2_FLT5LCK = 0x80;       // FLT5LCK
    template<uint32_t X>
    static constexpr uint32_t FLTINR2_FLT5F =               // FLT5F
        bit_field_t<3, 0xf>::value<X>();
    static constexpr uint32_t FLTINR2_FLT5SRC = 0x4;        // FLT5SRC
    static constexpr uint32_t FLTINR2_FLT5P = 0x2;          // FLT5P
    static constexpr uint32_t FLTINR2_FLT5E = 0x1;          // FLT5E

    static constexpr uint32_t BDMUPDR_RESET_VALUE = 0x0;
    static constexpr uint32_t BDMUPDR_MCMP4 = 0x200; // MCMP4
    static constexpr uint32_t BDMUPDR_MCMP3 = 0x100; // MCMP3
    static constexpr uint32_t BDMUPDR_MCMP2 = 0x80;  // MCMP2
    static constexpr uint32_t BDMUPDR_MCMP1 = 0x40;  // MCMP1
    static constexpr uint32_t BDMUPDR_MREP = 0x20;   // MREP
    static constexpr uint32_t BDMUPDR_MPER = 0x10;   // MPER
    static constexpr uint32_t BDMUPDR_MCNT = 0x8;    // MCNT
    static constexpr uint32_t BDMUPDR_MDIER = 0x4;   // MDIER
    static constexpr uint32_t BDMUPDR_MICR = 0x2;    // MICR
    static constexpr uint32_t BDMUPDR_MCR = 0x1;     // MCR

    static constexpr uint32_t BDTAUPR_RESET_VALUE = 0x0;
    static constexpr uint32_t BDTAUPR_TIMxEEFR3 = 0x400000; // TIMxEEFR3
    static constexpr uint32_t BDTAUPR_TIMxCR2 = 0x200000;   // TIMxCR2
    static constexpr uint32_t BDTAUPR_TIMxFLTR = 0x100000;  // HRTIM_FLTxR register update enable
    static constexpr uint32_t BDTAUPR_TIMxOUTR = 0x80000;   // HRTIM_OUTxR register update enable
    static constexpr uint32_t BDTAUPR_TIMxCHPR = 0x40000;   // HRTIM_CHPxR register update enable
    static constexpr uint32_t BDTAUPR_TIMxRSTR = 0x20000;   // HRTIM_RSTxR register update enable
    static constexpr uint32_t BDTAUPR_TIMxEEFR2 = 0x10000;  // HRTIM_EEFxR2 register update enable
    static constexpr uint32_t BDTAUPR_TIMxEEFR1 = 0x8000;   // HRTIM_EEFxR1 register update enable
    static constexpr uint32_t BDTAUPR_TIMxRST2R = 0x4000;   // HRTIM_RST2xR register update enable
    static constexpr uint32_t BDTAUPR_TIMxSET2R = 0x2000;   // HRTIM_SET2xR register update enable
    static constexpr uint32_t BDTAUPR_TIMxRST1R = 0x1000;   // HRTIM_RST1xR register update enable
    static constexpr uint32_t BDTAUPR_TIMxSET1R = 0x800;    // HRTIM_SET1xR register update enable
    static constexpr uint32_t BDTAUPR_TIMx_DTxR = 0x400;    // HRTIM_DTxR register update enable
    static constexpr uint32_t BDTAUPR_TIMxCMP4 = 0x200;     // HRTIM_CMP4xR register update enable
    static constexpr uint32_t BDTAUPR_TIMxCMP3 = 0x100;     // HRTIM_CMP3xR register update enable
    static constexpr uint32_t BDTAUPR_TIMxCMP2 = 0x80;      // HRTIM_CMP2xR register update enable
    static constexpr uint32_t BDTAUPR_TIMxCMP1 = 0x40;      // HRTIM_CMP1xR register update enable
    static constexpr uint32_t BDTAUPR_TIMxREP = 0x20;       // HRTIM_REPxR register update enable
    static constexpr uint32_t BDTAUPR_TIMxPER = 0x10;       // HRTIM_PERxR register update enable
    static constexpr uint32_t BDTAUPR_TIMxCNT = 0x8;        // HRTIM_CNTxR register update enable
    static constexpr uint32_t BDTAUPR_TIMxDIER = 0x4;       // HRTIM_TIMxDIER register update enable
    static constexpr uint32_t BDTAUPR_TIMxICR = 0x2;        // HRTIM_TIMxICR register update enable
    static constexpr uint32_t BDTAUPR_TIMxCR = 0x1;         // HRTIM_TIMxCR register update enable

    static constexpr uint32_t BDTBUPR_RESET_VALUE = 0x0;
    static constexpr uint32_t BDTBUPR_TIMxEEFR3 = 0x400000; // TIMxEEFR3
    static constexpr uint32_t BDTBUPR_TIMxCR2 = 0x200000;   // TIMxCR2
    static constexpr uint32_t BDTBUPR_TIMxFLTR = 0x100000;  // HRTIM_FLTxR register update enable
    static constexpr uint32_t BDTBUPR_TIMxOUTR = 0x80000;   // HRTIM_OUTxR register update enable
    static constexpr uint32_t BDTBUPR_TIMxCHPR = 0x40000;   // HRTIM_CHPxR register update enable
    static constexpr uint32_t BDTBUPR_TIMxRSTR = 0x20000;   // HRTIM_RSTxR register update enable
    static constexpr uint32_t BDTBUPR_TIMxEEFR2 = 0x10000;  // HRTIM_EEFxR2 register update enable
    static constexpr uint32_t BDTBUPR_TIMxEEFR1 = 0x8000;   // HRTIM_EEFxR1 register update enable
    static constexpr uint32_t BDTBUPR_TIMxRST2R = 0x4000;   // HRTIM_RST2xR register update enable
    static constexpr uint32_t BDTBUPR_TIMxSET2R = 0x2000;   // HRTIM_SET2xR register update enable
    static constexpr uint32_t BDTBUPR_TIMxRST1R = 0x1000;   // HRTIM_RST1xR register update enable
    static constexpr uint32_t BDTBUPR_TIMxSET1R = 0x800;    // HRTIM_SET1xR register update enable
    static constexpr uint32_t BDTBUPR_TIMx_DTxR = 0x400;    // HRTIM_DTxR register update enable
    static constexpr uint32_t BDTBUPR_TIMxCMP4 = 0x200;     // HRTIM_CMP4xR register update enable
    static constexpr uint32_t BDTBUPR_TIMxCMP3 = 0x100;     // HRTIM_CMP3xR register update enable
    static constexpr uint32_t BDTBUPR_TIMxCMP2 = 0x80;      // HRTIM_CMP2xR register update enable
    static constexpr uint32_t BDTBUPR_TIMxCMP1 = 0x40;      // HRTIM_CMP1xR register update enable
    static constexpr uint32_t BDTBUPR_TIMxREP = 0x20;       // HRTIM_REPxR register update enable
    static constexpr uint32_t BDTBUPR_TIMxPER = 0x10;       // HRTIM_PERxR register update enable
    static constexpr uint32_t BDTBUPR_TIMxCNT = 0x8;        // HRTIM_CNTxR register update enable
    static constexpr uint32_t BDTBUPR_TIMxDIER = 0x4;       // HRTIM_TIMxDIER register update enable
    static constexpr uint32_t BDTBUPR_TIMxICR = 0x2;        // HRTIM_TIMxICR register update enable
    static constexpr uint32_t BDTBUPR_TIMxCR = 0x1;         // HRTIM_TIMxCR register update enable

    static constexpr uint32_t BDTCUPR_RESET_VALUE = 0x0;
    static constexpr uint32_t BDTCUPR_TIMxEEFR3 = 0x400000; // TIMxEEFR3
    static constexpr uint32_t BDTCUPR_TIMxCR2 = 0x200000;   // TIMxCR2
    static constexpr uint32_t BDTCUPR_TIMxFLTR = 0x100000;  // HRTIM_FLTxR register update enable
    static constexpr uint32_t BDTCUPR_TIMxOUTR = 0x80000;   // HRTIM_OUTxR register update enable
    static constexpr uint32_t BDTCUPR_TIMxCHPR = 0x40000;   // HRTIM_CHPxR register update enable
    static constexpr uint32_t BDTCUPR_TIMxRSTR = 0x20000;   // HRTIM_RSTxR register update enable
    static constexpr uint32_t BDTCUPR_TIMxEEFR2 = 0x10000;  // HRTIM_EEFxR2 register update enable
    static constexpr uint32_t BDTCUPR_TIMxEEFR1 = 0x8000;   // HRTIM_EEFxR1 register update enable
    static constexpr uint32_t BDTCUPR_TIMxRST2R = 0x4000;   // HRTIM_RST2xR register update enable
    static constexpr uint32_t BDTCUPR_TIMxSET2R = 0x2000;   // HRTIM_SET2xR register update enable
    static constexpr uint32_t BDTCUPR_TIMxRST1R = 0x1000;   // HRTIM_RST1xR register update enable
    static constexpr uint32_t BDTCUPR_TIMxSET1R = 0x800;    // HRTIM_SET1xR register update enable
    static constexpr uint32_t BDTCUPR_TIMx_DTxR = 0x400;    // HRTIM_DTxR register update enable
    static constexpr uint32_t BDTCUPR_TIMxCMP4 = 0x200;     // HRTIM_CMP4xR register update enable
    static constexpr uint32_t BDTCUPR_TIMxCMP3 = 0x100;     // HRTIM_CMP3xR register update enable
    static constexpr uint32_t BDTCUPR_TIMxCMP2 = 0x80;      // HRTIM_CMP2xR register update enable
    static constexpr uint32_t BDTCUPR_TIMxCMP1 = 0x40;      // HRTIM_CMP1xR register update enable
    static constexpr uint32_t BDTCUPR_TIMxREP = 0x20;       // HRTIM_REPxR register update enable
    static constexpr uint32_t BDTCUPR_TIMxPER = 0x10;       // HRTIM_PERxR register update enable
    static constexpr uint32_t BDTCUPR_TIMxCNT = 0x8;        // HRTIM_CNTxR register update enable
    static constexpr uint32_t BDTCUPR_TIMxDIER = 0x4;       // HRTIM_TIMxDIER register update enable
    static constexpr uint32_t BDTCUPR_TIMxICR = 0x2;        // HRTIM_TIMxICR register update enable
    static constexpr uint32_t BDTCUPR_TIMxCR = 0x1;         // HRTIM_TIMxCR register update enable

    static constexpr uint32_t BDTDUPR_RESET_VALUE = 0x0;
    static constexpr uint32_t BDTDUPR_TIMxEEFR3 = 0x400000; // TIMxEEFR3
    static constexpr uint32_t BDTDUPR_TIMxCR2 = 0x200000;   // TIMxCR2
    static constexpr uint32_t BDTDUPR_TIMxFLTR = 0x100000;  // HRTIM_FLTxR register update enable
    static constexpr uint32_t BDTDUPR_TIMxOUTR = 0x80000;   // HRTIM_OUTxR register update enable
    static constexpr uint32_t BDTDUPR_TIMxCHPR = 0x40000;   // HRTIM_CHPxR register update enable
    static constexpr uint32_t BDTDUPR_TIMxRSTR = 0x20000;   // HRTIM_RSTxR register update enable
    static constexpr uint32_t BDTDUPR_TIMxEEFR2 = 0x10000;  // HRTIM_EEFxR2 register update enable
    static constexpr uint32_t BDTDUPR_TIMxEEFR1 = 0x8000;   // HRTIM_EEFxR1 register update enable
    static constexpr uint32_t BDTDUPR_TIMxRST2R = 0x4000;   // HRTIM_RST2xR register update enable
    static constexpr uint32_t BDTDUPR_TIMxSET2R = 0x2000;   // HRTIM_SET2xR register update enable
    static constexpr uint32_t BDTDUPR_TIMxRST1R = 0x1000;   // HRTIM_RST1xR register update enable
    static constexpr uint32_t BDTDUPR_TIMxSET1R = 0x800;    // HRTIM_SET1xR register update enable
    static constexpr uint32_t BDTDUPR_TIMx_DTxR = 0x400;    // HRTIM_DTxR register update enable
    static constexpr uint32_t BDTDUPR_TIMxCMP4 = 0x200;     // HRTIM_CMP4xR register update enable
    static constexpr uint32_t BDTDUPR_TIMxCMP3 = 0x100;     // HRTIM_CMP3xR register update enable
    static constexpr uint32_t BDTDUPR_TIMxCMP2 = 0x80;      // HRTIM_CMP2xR register update enable
    static constexpr uint32_t BDTDUPR_TIMxCMP1 = 0x40;      // HRTIM_CMP1xR register update enable
    static constexpr uint32_t BDTDUPR_TIMxREP = 0x20;       // HRTIM_REPxR register update enable
    static constexpr uint32_t BDTDUPR_TIMxPER = 0x10;       // HRTIM_PERxR register update enable
    static constexpr uint32_t BDTDUPR_TIMxCNT = 0x8;        // HRTIM_CNTxR register update enable
    static constexpr uint32_t BDTDUPR_TIMxDIER = 0x4;       // HRTIM_TIMxDIER register update enable
    static constexpr uint32_t BDTDUPR_TIMxICR = 0x2;        // HRTIM_TIMxICR register update enable
    static constexpr uint32_t BDTDUPR_TIMxCR = 0x1;         // HRTIM_TIMxCR register update enable

    static constexpr uint32_t BDTEUPR_RESET_VALUE = 0x0;
    static constexpr uint32_t BDTEUPR_TIMxEEFR3 = 0x400000; // TIMxEEFR3
    static constexpr uint32_t BDTEUPR_TIMxCR2 = 0x200000;   // TIMxCR2
    static constexpr uint32_t BDTEUPR_TIMxFLTR = 0x100000;  // HRTIM_FLTxR register update enable
    static constexpr uint32_t BDTEUPR_TIMxOUTR = 0x80000;   // HRTIM_OUTxR register update enable
    static constexpr uint32_t BDTEUPR_TIMxCHPR = 0x40000;   // HRTIM_CHPxR register update enable
    static constexpr uint32_t BDTEUPR_TIMxRSTR = 0x20000;   // HRTIM_RSTxR register update enable
    static constexpr uint32_t BDTEUPR_TIMxEEFR2 = 0x10000;  // HRTIM_EEFxR2 register update enable
    static constexpr uint32_t BDTEUPR_TIMxEEFR1 = 0x8000;   // HRTIM_EEFxR1 register update enable
    static constexpr uint32_t BDTEUPR_TIMxRST2R = 0x4000;   // HRTIM_RST2xR register update enable
    static constexpr uint32_t BDTEUPR_TIMxSET2R = 0x2000;   // HRTIM_SET2xR register update enable
    static constexpr uint32_t BDTEUPR_TIMxRST1R = 0x1000;   // HRTIM_RST1xR register update enable
    static constexpr uint32_t BDTEUPR_TIMxSET1R = 0x800;    // HRTIM_SET1xR register update enable
    static constexpr uint32_t BDTEUPR_TIMx_DTxR = 0x400;    // HRTIM_DTxR register update enable
    static constexpr uint32_t BDTEUPR_TIMxCMP4 = 0x200;     // HRTIM_CMP4xR register update enable
    static constexpr uint32_t BDTEUPR_TIMxCMP3 = 0x100;     // HRTIM_CMP3xR register update enable
    static constexpr uint32_t BDTEUPR_TIMxCMP2 = 0x80;      // HRTIM_CMP2xR register update enable
    static constexpr uint32_t BDTEUPR_TIMxCMP1 = 0x40;      // HRTIM_CMP1xR register update enable
    static constexpr uint32_t BDTEUPR_TIMxREP = 0x20;       // HRTIM_REPxR register update enable
    static constexpr uint32_t BDTEUPR_TIMxPER = 0x10;       // HRTIM_PERxR register update enable
    static constexpr uint32_t BDTEUPR_TIMxCNT = 0x8;        // HRTIM_CNTxR register update enable
    static constexpr uint32_t BDTEUPR_TIMxDIER = 0x4;       // HRTIM_TIMxDIER register update enable
    static constexpr uint32_t BDTEUPR_TIMxICR = 0x2;        // HRTIM_TIMxICR register update enable
    static constexpr uint32_t BDTEUPR_TIMxCR = 0x1;         // HRTIM_TIMxCR register update enable

    static constexpr uint32_t BDTFUPR_RESET_VALUE = 0x0;
    static constexpr uint32_t BDTFUPR_TIMxEEFR3 = 0x400000; // TIMxEEFR3
    static constexpr uint32_t BDTFUPR_TIMxCR2 = 0x200000;   // TIMxCR2
    static constexpr uint32_t BDTFUPR_TIMxFLTR = 0x100000;  // HRTIM_FLTxR register update enable
    static constexpr uint32_t BDTFUPR_TIMxOUTR = 0x80000;   // HRTIM_OUTxR register update enable
    static constexpr uint32_t BDTFUPR_TIMxCHPR = 0x40000;   // HRTIM_CHPxR register update enable
    static constexpr uint32_t BDTFUPR_TIMxRSTR = 0x20000;   // HRTIM_RSTxR register update enable
    static constexpr uint32_t BDTFUPR_TIMxEEFR2 = 0x10000;  // HRTIM_EEFxR2 register update enable
    static constexpr uint32_t BDTFUPR_TIMxEEFR1 = 0x8000;   // HRTIM_EEFxR1 register update enable
    static constexpr uint32_t BDTFUPR_TIMxRST2R = 0x4000;   // HRTIM_RST2xR register update enable
    static constexpr uint32_t BDTFUPR_TIMxSET2R = 0x2000;   // HRTIM_SET2xR register update enable
    static constexpr uint32_t BDTFUPR_TIMxRST1R = 0x1000;   // HRTIM_RST1xR register update enable
    static constexpr uint32_t BDTFUPR_TIMxSET1R = 0x800;    // HRTIM_SET1xR register update enable
    static constexpr uint32_t BDTFUPR_TIMx_DTxR = 0x400;    // HRTIM_DTxR register update enable
    static constexpr uint32_t BDTFUPR_TIMxCMP4 = 0x200;     // HRTIM_CMP4xR register update enable
    static constexpr uint32_t BDTFUPR_TIMxCMP3 = 0x100;     // HRTIM_CMP3xR register update enable
    static constexpr uint32_t BDTFUPR_TIMxCMP2 = 0x80;      // HRTIM_CMP2xR register update enable
    static constexpr uint32_t BDTFUPR_TIMxCMP1 = 0x40;      // HRTIM_CMP1xR register update enable
    static constexpr uint32_t BDTFUPR_TIMxREP = 0x20;       // HRTIM_REPxR register update enable
    static constexpr uint32_t BDTFUPR_TIMxPER = 0x10;       // HRTIM_PERxR register update enable
    static constexpr uint32_t BDTFUPR_TIMxCNT = 0x8;        // HRTIM_CNTxR register update enable
    static constexpr uint32_t BDTFUPR_TIMxDIER = 0x4;       // HRTIM_TIMxDIER register update enable
    static constexpr uint32_t BDTFUPR_TIMxICR = 0x2;        // HRTIM_TIMxICR register update enable
    static constexpr uint32_t BDTFUPR_TIMxCR = 0x1;         // HRTIM_TIMxCR register update enable

    static constexpr uint32_t BDMADR_RESET_VALUE = 0x0;

    static constexpr uint32_t ADCER_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ADCER_ADC10TRG =   // ADC10TRG
        bit_field_t<26, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADCER_ADC9TRG =    // ADC9TRG
        bit_field_t<21, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADCER_ADC8TRG =    // ADC8TRG
        bit_field_t<16, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADCER_ADC7TRG =    // ADC7TRG
        bit_field_t<10, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADCER_ADC6TRG =    // ADC6TRG
        bit_field_t<5, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADCER_ADC5TRG =    // ADC5TRG
        bit_field_t<0, 0x1f>::value<X>();

    static constexpr uint32_t ADCUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ADCUR_AD10USRC =   // AD10USRC
        bit_field_t<20, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADCUR_AD9USRC =    // AD9USRC
        bit_field_t<16, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADCUR_AD8USRC =    // AD8USRC
        bit_field_t<12, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADCUR_AD7USRC =    // AD7USRC
        bit_field_t<8, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADCUR_AD6USRC =    // AD6USRC
        bit_field_t<4, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADCUR_AD5USRC =    // AD5USRC
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t ADCPS1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ADCPS1_ADC5PSC =   // ADC5PSC
        bit_field_t<24, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADCPS1_ADC4PSC =   // ADC4PSC
        bit_field_t<18, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADCPS1_ADC3PSC =   // ADC3PSC
        bit_field_t<12, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADCPS1_ADC2PSC =   // ADC2PSC
        bit_field_t<6, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADCPS1_ADC1PSC =   // ADC1PSC
        bit_field_t<0, 0x1f>::value<X>();

    static constexpr uint32_t ADCPS2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ADCPS2_ADC10PSC =   // ADC10PSC
        bit_field_t<24, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADCPS2_ADC9PSC =    // ADC9PSC
        bit_field_t<18, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADCPS2_ADC8PSC =    // ADC8PSC
        bit_field_t<12, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADCPS2_ADC7PSC =    // ADC7PSC
        bit_field_t<6, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ADCPS2_ADC6PSC =    // ADC6PSC
        bit_field_t<0, 0x1f>::value<X>();

    static constexpr uint32_t FLTINR3_RESET_VALUE = 0x0;
    static constexpr uint32_t FLTINR3_FLT4RSTM = 0x80000000; // FLT4RSTM
    static constexpr uint32_t FLTINR3_FLT4CRES = 0x40000000; // FLT4CRES
    template<uint32_t X>
    static constexpr uint32_t FLTINR3_FLT4CNT =              // FLT4CNT
        bit_field_t<26, 0xf>::value<X>();
    static constexpr uint32_t FLTINR3_FLT4BLKS = 0x2000000;  // FLT4BLKS
    static constexpr uint32_t FLTINR3_FLT4BLKE = 0x1000000;  // FLT4BLKE
    static constexpr uint32_t FLTINR3_FLT3RSTM = 0x800000;   // FLT3RSTM
    static constexpr uint32_t FLTINR3_FLT3CRES = 0x400000;   // FLT3CRES
    template<uint32_t X>
    static constexpr uint32_t FLTINR3_FLT3CNT =              // FLT3CNT
        bit_field_t<18, 0xf>::value<X>();
    static constexpr uint32_t FLTINR3_FLT3BLKS = 0x20000;    // FLT3BLKS
    static constexpr uint32_t FLTINR3_FLT3BLKE = 0x10000;    // FLT3BLKE
    static constexpr uint32_t FLTINR3_FLT2RSTM = 0x8000;     // FLT2RSTM
    static constexpr uint32_t FLTINR3_FLT2CRES = 0x4000;     // FLT2CRES
    template<uint32_t X>
    static constexpr uint32_t FLTINR3_FLT2CNT =              // FLT2CNT
        bit_field_t<10, 0xf>::value<X>();
    static constexpr uint32_t FLTINR3_FLT2BLKS = 0x200;      // FLT2BLKS
    static constexpr uint32_t FLTINR3_FLT2BLKE = 0x100;      // FLT2BLKE
    static constexpr uint32_t FLTINR3_FLT1RSTM = 0x80;       // FLT1RSTM
    static constexpr uint32_t FLTINR3_FLT1CRES = 0x40;       // FLT1CRES
    template<uint32_t X>
    static constexpr uint32_t FLTINR3_FLT1CNT =              // FLT1CNT
        bit_field_t<2, 0xf>::value<X>();
    static constexpr uint32_t FLTINR3_FLT1BLKS = 0x2;        // FLT1BLKS
    static constexpr uint32_t FLTINR3_FLT1BLKE = 0x1;        // FLT1BLKE

    static constexpr uint32_t FLTINR4_RESET_VALUE = 0x0;
    static constexpr uint32_t FLTINR4_FLT6RSTM = 0x8000; // FLT6RSTM
    static constexpr uint32_t FLTINR4_FLT6CRES = 0x4000; // FLT6CRES
    template<uint32_t X>
    static constexpr uint32_t FLTINR4_FLT6CNT =          // FLT6CNT
        bit_field_t<10, 0xf>::value<X>();
    static constexpr uint32_t FLTINR4_FLT6BLKS = 0x200;  // FLT6BLKS
    static constexpr uint32_t FLTINR4_FLT6BLKE = 0x100;  // FLT6BLKE
    static constexpr uint32_t FLTINR4_FLT5RSTM = 0x80;   // FLT5RSTM
    static constexpr uint32_t FLTINR4_FLT5CRES = 0x40;   // FLT5CRES
    template<uint32_t X>
    static constexpr uint32_t FLTINR4_FLT5CNT =          // FLT5CNT
        bit_field_t<2, 0xf>::value<X>();
    static constexpr uint32_t FLTINR4_FLT5BLKS = 0x2;    // FLT5BLKS
    static constexpr uint32_t FLTINR4_FLT5BLKE = 0x1;    // FLT5BLKE
};


////
//
//      High Resolution Timer: Master Timers
//
////

struct stm32g474xx_hrtim_master_t
{
    volatile uint32_t MCR;    // [read-write] Master Timer Control Register
    volatile uint32_t MISR;   // [read-only] Master Timer Interrupt Status Register
    volatile uint32_t MICR;   // [write-only] Master Timer Interrupt Clear Register
    volatile uint32_t MDIER;  // [read-write] HRTIM Master Timer DMA / Interrupt Enable Register
    volatile uint32_t MCNTR;  // [read-write] Master Timer Counter Register
    volatile uint32_t MPER;   // [read-write] Master Timer Period Register
    volatile uint32_t MREP;   // [read-write] Master Timer Repetition Register
    volatile uint32_t MCMP1R; // [read-write] Master Timer Compare 1 Register
    reserved_t<0x1> _0x24;
    volatile uint32_t MCMP2R; // [read-write] Master Timer Compare 2 Register
    volatile uint32_t MCMP3R; // [read-write] Master Timer Compare 3 Register
    volatile uint32_t MCMP4R; // [read-write] Master Timer Compare 4 Register

    static constexpr uint32_t MCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MCR_BRSTDMA =           // Burst DMA Update
        bit_field_t<30, 0x3>::value<X>();
    static constexpr uint32_t MCR_MREPU = 0x20000000; // Master Timer Repetition update
    static constexpr uint32_t MCR_PREEN = 0x8000000;  // Preload enable
    template<uint32_t X>
    static constexpr uint32_t MCR_DACSYNC =           // AC Synchronization
        bit_field_t<25, 0x3>::value<X>();
    static constexpr uint32_t MCR_TFCEN = 0x400000;   // Timer F counter enable
    static constexpr uint32_t MCR_TECEN = 0x200000;   // Timer E counter enable
    static constexpr uint32_t MCR_TDCEN = 0x100000;   // Timer D counter enable
    static constexpr uint32_t MCR_TCCEN = 0x80000;    // Timer C counter enable
    static constexpr uint32_t MCR_TBCEN = 0x40000;    // Timer B counter enable
    static constexpr uint32_t MCR_TACEN = 0x20000;    // Timer A counter enable
    static constexpr uint32_t MCR_MCEN = 0x10000;     // Master Counter enable
    template<uint32_t X>
    static constexpr uint32_t MCR_SYNC_SRC =          // Synchronization source
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MCR_SYNC_OUT =          // Synchronization output
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t MCR_SYNCSTRTM = 0x800;  // Synchronization Starts Master
    static constexpr uint32_t MCR_SYNCRSTM = 0x400;   // Synchronization Resets Master
    template<uint32_t X>
    static constexpr uint32_t MCR_SYNC_IN =           // synchronization input
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t MCR_INTLVD =            // Interleaved mode
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t MCR_HALF = 0x20;        // Half mode enable
    static constexpr uint32_t MCR_RETRIG = 0x10;      // Master Re-triggerable mode
    static constexpr uint32_t MCR_CONT = 0x8;         // Master Continuous mode
    template<uint32_t X>
    static constexpr uint32_t MCR_CK_PSC =            // HRTIM Master Clock prescaler
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t MISR_RESET_VALUE = 0x0;
    static constexpr uint32_t MISR_MUPD = 0x40; // Master Update Interrupt Flag
    static constexpr uint32_t MISR_SYNC = 0x20; // Sync Input Interrupt Flag
    static constexpr uint32_t MISR_MREP = 0x10; // Master Repetition Interrupt Flag
    static constexpr uint32_t MISR_MCMP4 = 0x8; // Master Compare 4 Interrupt Flag
    static constexpr uint32_t MISR_MCMP3 = 0x4; // Master Compare 3 Interrupt Flag
    static constexpr uint32_t MISR_MCMP2 = 0x2; // Master Compare 2 Interrupt Flag
    static constexpr uint32_t MISR_MCMP1 = 0x1; // Master Compare 1 Interrupt Flag

    static constexpr uint32_t MICR_RESET_VALUE = 0x0;
    static constexpr uint32_t MICR_MUPDC = 0x40; // Master update Interrupt flag clear
    static constexpr uint32_t MICR_SYNCC = 0x20; // Sync Input Interrupt flag clear
    static constexpr uint32_t MICR_MREPC = 0x10; // Repetition Interrupt flag clear
    static constexpr uint32_t MICR_MCMP4C = 0x8; // Master Compare 4 Interrupt flag clear
    static constexpr uint32_t MICR_MCMP3C = 0x4; // Master Compare 3 Interrupt flag clear
    static constexpr uint32_t MICR_MCMP2C = 0x2; // Master Compare 2 Interrupt flag clear
    static constexpr uint32_t MICR_MCMP1C = 0x1; // Master Compare 1 Interrupt flag clear

    static constexpr uint32_t MDIER_RESET_VALUE = 0x0;
    static constexpr uint32_t MDIER_MUPDDE = 0x400000; // MUPDDE
    static constexpr uint32_t MDIER_SYNCDE = 0x200000; // SYNCDE
    static constexpr uint32_t MDIER_MREPDE = 0x100000; // MREPDE
    static constexpr uint32_t MDIER_MCMP4DE = 0x80000; // MCMP4DE
    static constexpr uint32_t MDIER_MCMP3DE = 0x40000; // MCMP3DE
    static constexpr uint32_t MDIER_MCMP2DE = 0x20000; // MCMP2DE
    static constexpr uint32_t MDIER_MCMP1DE = 0x10000; // MCMP1DE
    static constexpr uint32_t MDIER_MUPDIE = 0x40;     // MUPDIE
    static constexpr uint32_t MDIER_SYNCIE = 0x20;     // SYNCIE
    static constexpr uint32_t MDIER_MREPIE = 0x10;     // MREPIE
    static constexpr uint32_t MDIER_MCMP4IE = 0x8;     // MCMP4IE
    static constexpr uint32_t MDIER_MCMP3IE = 0x4;     // MCMP3IE
    static constexpr uint32_t MDIER_MCMP2IE = 0x2;     // MCMP2IE
    static constexpr uint32_t MDIER_MCMP1IE = 0x1;     // MCMP1IE

    static constexpr uint32_t MCNTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MCNTR_MCNT =   // Counter value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MPER_RESET_VALUE = 0xffff;
    template<uint32_t X>
    static constexpr uint32_t MPER_MPER =   // Master Timer Period value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MREP_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MREP_MREP =   // Master Timer Repetition counter value
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t MCMP1R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MCMP1R_MCMP1 =   // Master Timer Compare 1 value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MCMP2R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MCMP2R_MCMP2 =   // Master Timer Compare 2 value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MCMP3R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MCMP3R_MCMP3 =   // Master Timer Compare 3 value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t MCMP4R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MCMP4R_MCMP4 =   // Master Timer Compare 4 value
        bit_field_t<0, 0xffff>::value<X>();
};


////
//
//      High Resolution Timer: TIMA
//
////

struct stm32g474xx_hrtim_tima_t
{
    volatile uint32_t TIMACR;   // [read-write] Timerx Control Register
    volatile uint32_t TIMAISR;  // [read-only] Timerx Interrupt Status Register
    volatile uint32_t TIMAICR;  // [write-only] Timerx Interrupt Clear Register
    volatile uint32_t TIMADIER; // [read-write] TIMxDIER
    volatile uint32_t CNTAR;    // [read-write] Timerx Counter Register
    volatile uint32_t PERAR;    // [read-write] Timerx Period Register
    volatile uint32_t REPAR;    // [read-write] Timerx Repetition Register
    volatile uint32_t CMP1AR;   // [read-write] Timerx Compare 1 Register
    volatile uint32_t CMP1CAR;  // [read-write] Timerx Compare 1 Compound Register
    volatile uint32_t CMP2AR;   // [read-write] Timerx Compare 2 Register
    volatile uint32_t CMP3AR;   // [read-write] Timerx Compare 3 Register
    volatile uint32_t CMP4AR;   // [read-write] Timerx Compare 4 Register
    volatile uint32_t CPT1AR;   // [read-only] Timerx Capture 1 Register
    volatile uint32_t CPT2AR;   // [read-only] Timerx Capture 2 Register
    volatile uint32_t DTAR;     // [read-write] Timerx Deadtime Register
    volatile uint32_t SETA1R;   // [read-write] Timerx Output1 Set Register
    volatile uint32_t RSTA1R;   // [read-write] Timerx Output1 Reset Register
    volatile uint32_t SETA2R;   // [read-write] Timerx Output2 Set Register
    volatile uint32_t RSTA2R;   // [read-write] Timerx Output2 Reset Register
    volatile uint32_t EEFAR1;   // [read-write] Timerx External Event Filtering Register 1
    volatile uint32_t EEFAR2;   // [read-write] Timerx External Event Filtering Register 2
    volatile uint32_t RSTAR;    // [read-write] TimerA Reset Register
    volatile uint32_t CHPAR;    // [read-write] Timerx Chopper Register
    volatile uint32_t CPT1ACR;  // [read-write] Timerx Capture 2 Control Register
    volatile uint32_t CPT2ACR;  // [read-write] CPT2xCR
    volatile uint32_t OUTAR;    // [read-write] Timerx Output Register
    volatile uint32_t FLTAR;    // [read-write] Timerx Fault Register
    volatile uint32_t TIMACR2;  // [read-write] HRTIM Timerx Control Register 2
    volatile uint32_t AEEFR3;   // [read-write] HRTIM Timerx External Event Filtering Register 3

    static constexpr uint32_t TIMACR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TIMACR_UPDGAT =           // Update Gating
        bit_field_t<28, 0xf>::value<X>();
    static constexpr uint32_t TIMACR_PREEN = 0x8000000; // Preload enable
    template<uint32_t X>
    static constexpr uint32_t TIMACR_DACSYNC =          // AC Synchronization
        bit_field_t<25, 0x3>::value<X>();
    static constexpr uint32_t TIMACR_MSTU = 0x1000000;  // Master Timer update
    static constexpr uint32_t TIMACR_TEU = 0x800000;    // TEU
    static constexpr uint32_t TIMACR_TDU = 0x400000;    // TDU
    static constexpr uint32_t TIMACR_TCU = 0x200000;    // TCU
    static constexpr uint32_t TIMACR_TBU = 0x100000;    // TBU
    static constexpr uint32_t TIMACR_TxRSTU = 0x40000;  // Timerx reset update
    static constexpr uint32_t TIMACR_TxREPU = 0x20000;  // Timer x Repetition update
    static constexpr uint32_t TIMACR_TFU = 0x10000;     // TFU
    template<uint32_t X>
    static constexpr uint32_t TIMACR_DELCMP4 =          // Delayed CMP4 mode
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TIMACR_DELCMP2 =          // Delayed CMP2 mode
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t TIMACR_SYNCSTRTx = 0x800; // Synchronization Starts Timer x
    static constexpr uint32_t TIMACR_SYNCRSTx = 0x400;  // Synchronization Resets Timer x
    static constexpr uint32_t TIMACR_RSYNCU = 0x200;    // Re-Synchronized Update
    template<uint32_t X>
    static constexpr uint32_t TIMACR_INTLVD =           // Interleaved mode
        bit_field_t<7, 0x3>::value<X>();
    static constexpr uint32_t TIMACR_PSHPLL = 0x40;     // Push-Pull mode enable
    static constexpr uint32_t TIMACR_HALF = 0x20;       // Half mode enable
    static constexpr uint32_t TIMACR_RETRIG = 0x10;     // Re-triggerable mode
    static constexpr uint32_t TIMACR_CONT = 0x8;        // Continuous mode
    template<uint32_t X>
    static constexpr uint32_t TIMACR_CK_PSCx =          // HRTIM Timer x Clock prescaler
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t TIMAISR_RESET_VALUE = 0x0;
    static constexpr uint32_t TIMAISR_O2CPY = 0x200000;  // Output 2 Copy
    static constexpr uint32_t TIMAISR_O1CPY = 0x100000;  // Output 1 Copy
    static constexpr uint32_t TIMAISR_O2STAT = 0x80000;  // Output 2 State
    static constexpr uint32_t TIMAISR_O1STAT = 0x40000;  // Output 1 State
    static constexpr uint32_t TIMAISR_IPPSTAT = 0x20000; // Idle Push Pull Status
    static constexpr uint32_t TIMAISR_CPPSTAT = 0x10000; // Current Push Pull Status
    static constexpr uint32_t TIMAISR_DLYPRT = 0x4000;   // Delayed Protection Flag
    static constexpr uint32_t TIMAISR_RST = 0x2000;      // Reset Interrupt Flag
    static constexpr uint32_t TIMAISR_RSTx2 = 0x1000;    // Output 2 Reset Interrupt Flag
    static constexpr uint32_t TIMAISR_SETx2 = 0x800;     // Output 2 Set Interrupt Flag
    static constexpr uint32_t TIMAISR_RSTx1 = 0x400;     // Output 1 Reset Interrupt Flag
    static constexpr uint32_t TIMAISR_SETx1 = 0x200;     // Output 1 Set Interrupt Flag
    static constexpr uint32_t TIMAISR_CPT2 = 0x100;      // Capture2 Interrupt Flag
    static constexpr uint32_t TIMAISR_CPT1 = 0x80;       // Capture1 Interrupt Flag
    static constexpr uint32_t TIMAISR_UPD = 0x40;        // Update Interrupt Flag
    static constexpr uint32_t TIMAISR_REP = 0x10;        // Repetition Interrupt Flag
    static constexpr uint32_t TIMAISR_CMP4 = 0x8;        // Compare 4 Interrupt Flag
    static constexpr uint32_t TIMAISR_CMP3 = 0x4;        // Compare 3 Interrupt Flag
    static constexpr uint32_t TIMAISR_CMP2 = 0x2;        // Compare 2 Interrupt Flag
    static constexpr uint32_t TIMAISR_CMP1 = 0x1;        // Compare 1 Interrupt Flag

    static constexpr uint32_t TIMAICR_RESET_VALUE = 0x0;
    static constexpr uint32_t TIMAICR_DLYPRTC = 0x4000; // Delayed Protection Flag Clear
    static constexpr uint32_t TIMAICR_RSTC = 0x2000;    // Reset Interrupt flag Clear
    static constexpr uint32_t TIMAICR_RSTx2C = 0x1000;  // Output 2 Reset flag Clear
    static constexpr uint32_t TIMAICR_SET2xC = 0x800;   // Output 2 Set flag Clear
    static constexpr uint32_t TIMAICR_RSTx1C = 0x400;   // Output 1 Reset flag Clear
    static constexpr uint32_t TIMAICR_SET1xC = 0x200;   // Output 1 Set flag Clear
    static constexpr uint32_t TIMAICR_CPT2C = 0x100;    // Capture2 Interrupt flag Clear
    static constexpr uint32_t TIMAICR_CPT1C = 0x80;     // Capture1 Interrupt flag Clear
    static constexpr uint32_t TIMAICR_UPDC = 0x40;      // Update Interrupt flag Clear
    static constexpr uint32_t TIMAICR_REPC = 0x10;      // Repetition Interrupt flag Clear
    static constexpr uint32_t TIMAICR_CMP4C = 0x8;      // Compare 4 Interrupt flag Clear
    static constexpr uint32_t TIMAICR_CMP3C = 0x4;      // Compare 3 Interrupt flag Clear
    static constexpr uint32_t TIMAICR_CMP2C = 0x2;      // Compare 2 Interrupt flag Clear
    static constexpr uint32_t TIMAICR_CMP1C = 0x1;      // Compare 1 Interrupt flag Clear

    static constexpr uint32_t TIMADIER_RESET_VALUE = 0x0;
    static constexpr uint32_t TIMADIER_DLYPRTDE = 0x40000000; // DLYPRTDE
    static constexpr uint32_t TIMADIER_RSTDE = 0x20000000;    // RSTDE
    static constexpr uint32_t TIMADIER_RSTx2DE = 0x10000000;  // RSTx2DE
    static constexpr uint32_t TIMADIER_SETx2DE = 0x8000000;   // SETx2DE
    static constexpr uint32_t TIMADIER_RSTx1DE = 0x4000000;   // RSTx1DE
    static constexpr uint32_t TIMADIER_SET1xDE = 0x2000000;   // SET1xDE
    static constexpr uint32_t TIMADIER_CPT2DE = 0x1000000;    // CPT2DE
    static constexpr uint32_t TIMADIER_CPT1DE = 0x800000;     // CPT1DE
    static constexpr uint32_t TIMADIER_UPDDE = 0x400000;      // UPDDE
    static constexpr uint32_t TIMADIER_REPDE = 0x100000;      // REPDE
    static constexpr uint32_t TIMADIER_CMP4DE = 0x80000;      // CMP4DE
    static constexpr uint32_t TIMADIER_CMP3DE = 0x40000;      // CMP3DE
    static constexpr uint32_t TIMADIER_CMP2DE = 0x20000;      // CMP2DE
    static constexpr uint32_t TIMADIER_CMP1DE = 0x10000;      // CMP1DE
    static constexpr uint32_t TIMADIER_DLYPRTIE = 0x4000;     // DLYPRTIE
    static constexpr uint32_t TIMADIER_RSTIE = 0x2000;        // RSTIE
    static constexpr uint32_t TIMADIER_RSTx2IE = 0x1000;      // RSTx2IE
    static constexpr uint32_t TIMADIER_SETx2IE = 0x800;       // SETx2IE
    static constexpr uint32_t TIMADIER_RSTx1IE = 0x400;       // RSTx1IE
    static constexpr uint32_t TIMADIER_SET1xIE = 0x200;       // SET1xIE
    static constexpr uint32_t TIMADIER_CPT2IE = 0x100;        // CPT2IE
    static constexpr uint32_t TIMADIER_CPT1IE = 0x80;         // CPT1IE
    static constexpr uint32_t TIMADIER_UPDIE = 0x40;          // UPDIE
    static constexpr uint32_t TIMADIER_REPIE = 0x10;          // REPIE
    static constexpr uint32_t TIMADIER_CMP4IE = 0x8;          // CMP4IE
    static constexpr uint32_t TIMADIER_CMP3IE = 0x4;          // CMP3IE
    static constexpr uint32_t TIMADIER_CMP2IE = 0x2;          // CMP2IE
    static constexpr uint32_t TIMADIER_CMP1IE = 0x1;          // CMP1IE

    static constexpr uint32_t CNTAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CNTAR_CNTx =   // Timerx Counter value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t PERAR_RESET_VALUE = 0xffff;
    template<uint32_t X>
    static constexpr uint32_t PERAR_PERx =   // Timerx Period value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t REPAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t REPAR_REPx =   // Timerx Repetition counter value
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t CMP1AR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CMP1AR_CMP1x =   // Timerx Compare 1 value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CMP1CAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CMP1CAR_REPx =    // Timerx Repetition value (aliased from HRTIM_REPx register)
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CMP1CAR_CMP1x =   // Timerx Compare 1 value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CMP2AR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CMP2AR_CMP2x =   // Timerx Compare 2 value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CMP3AR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CMP3AR_CMP3x =   // Timerx Compare 3 value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CMP4AR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CMP4AR_CMP4x =   // Timerx Compare 4 value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CPT1AR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CPT1AR_CPT1x =        // Timerx Capture 1 value
        bit_field_t<0, 0xffff>::value<X>();
    static constexpr uint32_t CPT1AR_DIR = 0x10000; // Timerx Capture 1 Direction status

    static constexpr uint32_t CPT2AR_RESET_VALUE = 0x0;
    static constexpr uint32_t CPT2AR_DIR = 0x10000; // Timerx Capture 1 Direction status
    template<uint32_t X>
    static constexpr uint32_t CPT2AR_CPT2x =        // Timerx Capture 2 value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DTAR_RESET_VALUE = 0x0;
    static constexpr uint32_t DTAR_DTFLKx = 0x80000000;  // Deadtime Falling Lock
    static constexpr uint32_t DTAR_DTFSLKx = 0x40000000; // Deadtime Falling Sign Lock
    static constexpr uint32_t DTAR_SDTFx = 0x2000000;    // Sign Deadtime Falling value
    template<uint32_t X>
    static constexpr uint32_t DTAR_DTFx =                // Deadtime Falling value
        bit_field_t<16, 0x1ff>::value<X>();
    static constexpr uint32_t DTAR_DTRLKx = 0x8000;      // Deadtime Rising Lock
    static constexpr uint32_t DTAR_DTRSLKx = 0x4000;     // Deadtime Rising Sign Lock
    template<uint32_t X>
    static constexpr uint32_t DTAR_DTPRSC =              // Deadtime Prescaler
        bit_field_t<10, 0x7>::value<X>();
    static constexpr uint32_t DTAR_SDTRx = 0x200;        // Sign Deadtime Rising value
    template<uint32_t X>
    static constexpr uint32_t DTAR_DTRx =                // Deadtime Rising value
        bit_field_t<0, 0x1ff>::value<X>();

    static constexpr uint32_t SETA1R_RESET_VALUE = 0x0;
    static constexpr uint32_t SETA1R_UPDATE = 0x80000000;    // Registers update (transfer preload to active)
    static constexpr uint32_t SETA1R_EXTEVNT10 = 0x40000000; // External Event 10
    static constexpr uint32_t SETA1R_EXTEVNT9 = 0x20000000;  // External Event 9
    static constexpr uint32_t SETA1R_EXTEVNT8 = 0x10000000;  // External Event 8
    static constexpr uint32_t SETA1R_EXTEVNT7 = 0x8000000;   // External Event 7
    static constexpr uint32_t SETA1R_EXTEVNT6 = 0x4000000;   // External Event 6
    static constexpr uint32_t SETA1R_EXTEVNT5 = 0x2000000;   // External Event 5
    static constexpr uint32_t SETA1R_EXTEVNT4 = 0x1000000;   // External Event 4
    static constexpr uint32_t SETA1R_EXTEVNT3 = 0x800000;    // External Event 3
    static constexpr uint32_t SETA1R_EXTEVNT2 = 0x400000;    // External Event 2
    static constexpr uint32_t SETA1R_EXTEVNT1 = 0x200000;    // External Event 1
    static constexpr uint32_t SETA1R_TIMEVNT9 = 0x100000;    // Timer Event 9
    static constexpr uint32_t SETA1R_TIMEVNT8 = 0x80000;     // Timer Event 8
    static constexpr uint32_t SETA1R_TIMEVNT7 = 0x40000;     // Timer Event 7
    static constexpr uint32_t SETA1R_TIMEVNT6 = 0x20000;     // Timer Event 6
    static constexpr uint32_t SETA1R_TIMEVNT5 = 0x10000;     // Timer Event 5
    static constexpr uint32_t SETA1R_TIMEVNT4 = 0x8000;      // Timer Event 4
    static constexpr uint32_t SETA1R_TIMEVNT3 = 0x4000;      // Timer Event 3
    static constexpr uint32_t SETA1R_TIMEVNT2 = 0x2000;      // Timer Event 2
    static constexpr uint32_t SETA1R_TIMEVNT1 = 0x1000;      // Timer Event 1
    static constexpr uint32_t SETA1R_MSTCMP4 = 0x800;        // Master Compare 4
    static constexpr uint32_t SETA1R_MSTCMP3 = 0x400;        // Master Compare 3
    static constexpr uint32_t SETA1R_MSTCMP2 = 0x200;        // Master Compare 2
    static constexpr uint32_t SETA1R_MSTCMP1 = 0x100;        // Master Compare 1
    static constexpr uint32_t SETA1R_MSTPER = 0x80;          // Master Period
    static constexpr uint32_t SETA1R_CMP4 = 0x40;            // Timer A compare 4
    static constexpr uint32_t SETA1R_CMP3 = 0x20;            // Timer A compare 3
    static constexpr uint32_t SETA1R_CMP2 = 0x10;            // Timer A compare 2
    static constexpr uint32_t SETA1R_CMP1 = 0x8;             // Timer A compare 1
    static constexpr uint32_t SETA1R_PER = 0x4;              // Timer A Period
    static constexpr uint32_t SETA1R_RESYNC = 0x2;           // Timer A resynchronizaton
    static constexpr uint32_t SETA1R_SST = 0x1;              // Software Set trigger

    static constexpr uint32_t RSTA1R_RESET_VALUE = 0x0;
    static constexpr uint32_t RSTA1R_UPDATE = 0x80000000;    // UPDATE
    static constexpr uint32_t RSTA1R_EXTEVNT10 = 0x40000000; // EXTEVNT10
    static constexpr uint32_t RSTA1R_EXTEVNT9 = 0x20000000;  // EXTEVNT9
    static constexpr uint32_t RSTA1R_EXTEVNT8 = 0x10000000;  // EXTEVNT8
    static constexpr uint32_t RSTA1R_EXTEVNT7 = 0x8000000;   // EXTEVNT7
    static constexpr uint32_t RSTA1R_EXTEVNT6 = 0x4000000;   // EXTEVNT6
    static constexpr uint32_t RSTA1R_EXTEVNT5 = 0x2000000;   // EXTEVNT5
    static constexpr uint32_t RSTA1R_EXTEVNT4 = 0x1000000;   // EXTEVNT4
    static constexpr uint32_t RSTA1R_EXTEVNT3 = 0x800000;    // EXTEVNT3
    static constexpr uint32_t RSTA1R_EXTEVNT2 = 0x400000;    // EXTEVNT2
    static constexpr uint32_t RSTA1R_EXTEVNT1 = 0x200000;    // EXTEVNT1
    static constexpr uint32_t RSTA1R_TIMEVNT9 = 0x100000;    // TIMEVNT9
    static constexpr uint32_t RSTA1R_TIMEVNT8 = 0x80000;     // TIMEVNT8
    static constexpr uint32_t RSTA1R_TIMEVNT7 = 0x40000;     // TIMEVNT7
    static constexpr uint32_t RSTA1R_TIMEVNT6 = 0x20000;     // TIMEVNT6
    static constexpr uint32_t RSTA1R_TIMEVNT5 = 0x10000;     // TIMEVNT5
    static constexpr uint32_t RSTA1R_TIMEVNT4 = 0x8000;      // TIMEVNT4
    static constexpr uint32_t RSTA1R_TIMEVNT3 = 0x4000;      // TIMEVNT3
    static constexpr uint32_t RSTA1R_TIMEVNT2 = 0x2000;      // TIMEVNT2
    static constexpr uint32_t RSTA1R_TIMEVNT1 = 0x1000;      // TIMEVNT1
    static constexpr uint32_t RSTA1R_MSTCMP4 = 0x800;        // MSTCMP4
    static constexpr uint32_t RSTA1R_MSTCMP3 = 0x400;        // MSTCMP3
    static constexpr uint32_t RSTA1R_MSTCMP2 = 0x200;        // MSTCMP2
    static constexpr uint32_t RSTA1R_MSTCMP1 = 0x100;        // MSTCMP1
    static constexpr uint32_t RSTA1R_MSTPER = 0x80;          // MSTPER
    static constexpr uint32_t RSTA1R_CMP4 = 0x40;            // CMP4
    static constexpr uint32_t RSTA1R_CMP3 = 0x20;            // CMP3
    static constexpr uint32_t RSTA1R_CMP2 = 0x10;            // CMP2
    static constexpr uint32_t RSTA1R_CMP1 = 0x8;             // CMP1
    static constexpr uint32_t RSTA1R_PER = 0x4;              // PER
    static constexpr uint32_t RSTA1R_RESYNC = 0x2;           // RESYNC
    static constexpr uint32_t RSTA1R_SRT = 0x1;              // SRT

    static constexpr uint32_t SETA2R_RESET_VALUE = 0x0;
    static constexpr uint32_t SETA2R_UPDATE = 0x80000000;    // UPDATE
    static constexpr uint32_t SETA2R_EXTEVNT10 = 0x40000000; // EXTEVNT10
    static constexpr uint32_t SETA2R_EXTEVNT9 = 0x20000000;  // EXTEVNT9
    static constexpr uint32_t SETA2R_EXTEVNT8 = 0x10000000;  // EXTEVNT8
    static constexpr uint32_t SETA2R_EXTEVNT7 = 0x8000000;   // EXTEVNT7
    static constexpr uint32_t SETA2R_EXTEVNT6 = 0x4000000;   // EXTEVNT6
    static constexpr uint32_t SETA2R_EXTEVNT5 = 0x2000000;   // EXTEVNT5
    static constexpr uint32_t SETA2R_EXTEVNT4 = 0x1000000;   // EXTEVNT4
    static constexpr uint32_t SETA2R_EXTEVNT3 = 0x800000;    // EXTEVNT3
    static constexpr uint32_t SETA2R_EXTEVNT2 = 0x400000;    // EXTEVNT2
    static constexpr uint32_t SETA2R_EXTEVNT1 = 0x200000;    // EXTEVNT1
    static constexpr uint32_t SETA2R_TIMEVNT9 = 0x100000;    // TIMEVNT9
    static constexpr uint32_t SETA2R_TIMEVNT8 = 0x80000;     // TIMEVNT8
    static constexpr uint32_t SETA2R_TIMEVNT7 = 0x40000;     // TIMEVNT7
    static constexpr uint32_t SETA2R_TIMEVNT6 = 0x20000;     // TIMEVNT6
    static constexpr uint32_t SETA2R_TIMEVNT5 = 0x10000;     // TIMEVNT5
    static constexpr uint32_t SETA2R_TIMEVNT4 = 0x8000;      // TIMEVNT4
    static constexpr uint32_t SETA2R_TIMEVNT3 = 0x4000;      // TIMEVNT3
    static constexpr uint32_t SETA2R_TIMEVNT2 = 0x2000;      // TIMEVNT2
    static constexpr uint32_t SETA2R_TIMEVNT1 = 0x1000;      // TIMEVNT1
    static constexpr uint32_t SETA2R_MSTCMP4 = 0x800;        // MSTCMP4
    static constexpr uint32_t SETA2R_MSTCMP3 = 0x400;        // MSTCMP3
    static constexpr uint32_t SETA2R_MSTCMP2 = 0x200;        // MSTCMP2
    static constexpr uint32_t SETA2R_MSTCMP1 = 0x100;        // MSTCMP1
    static constexpr uint32_t SETA2R_MSTPER = 0x80;          // MSTPER
    static constexpr uint32_t SETA2R_CMP4 = 0x40;            // CMP4
    static constexpr uint32_t SETA2R_CMP3 = 0x20;            // CMP3
    static constexpr uint32_t SETA2R_CMP2 = 0x10;            // CMP2
    static constexpr uint32_t SETA2R_CMP1 = 0x8;             // CMP1
    static constexpr uint32_t SETA2R_PER = 0x4;              // PER
    static constexpr uint32_t SETA2R_RESYNC = 0x2;           // RESYNC
    static constexpr uint32_t SETA2R_SST = 0x1;              // SST

    static constexpr uint32_t RSTA2R_RESET_VALUE = 0x0;
    static constexpr uint32_t RSTA2R_UPDATE = 0x80000000;    // UPDATE
    static constexpr uint32_t RSTA2R_EXTEVNT10 = 0x40000000; // EXTEVNT10
    static constexpr uint32_t RSTA2R_EXTEVNT9 = 0x20000000;  // EXTEVNT9
    static constexpr uint32_t RSTA2R_EXTEVNT8 = 0x10000000;  // EXTEVNT8
    static constexpr uint32_t RSTA2R_EXTEVNT7 = 0x8000000;   // EXTEVNT7
    static constexpr uint32_t RSTA2R_EXTEVNT6 = 0x4000000;   // EXTEVNT6
    static constexpr uint32_t RSTA2R_EXTEVNT5 = 0x2000000;   // EXTEVNT5
    static constexpr uint32_t RSTA2R_EXTEVNT4 = 0x1000000;   // EXTEVNT4
    static constexpr uint32_t RSTA2R_EXTEVNT3 = 0x800000;    // EXTEVNT3
    static constexpr uint32_t RSTA2R_EXTEVNT2 = 0x400000;    // EXTEVNT2
    static constexpr uint32_t RSTA2R_EXTEVNT1 = 0x200000;    // EXTEVNT1
    static constexpr uint32_t RSTA2R_TIMEVNT9 = 0x100000;    // TIMEVNT9
    static constexpr uint32_t RSTA2R_TIMEVNT8 = 0x80000;     // TIMEVNT8
    static constexpr uint32_t RSTA2R_TIMEVNT7 = 0x40000;     // TIMEVNT7
    static constexpr uint32_t RSTA2R_TIMEVNT6 = 0x20000;     // TIMEVNT6
    static constexpr uint32_t RSTA2R_TIMEVNT5 = 0x10000;     // TIMEVNT5
    static constexpr uint32_t RSTA2R_TIMEVNT4 = 0x8000;      // TIMEVNT4
    static constexpr uint32_t RSTA2R_TIMEVNT3 = 0x4000;      // TIMEVNT3
    static constexpr uint32_t RSTA2R_TIMEVNT2 = 0x2000;      // TIMEVNT2
    static constexpr uint32_t RSTA2R_TIMEVNT1 = 0x1000;      // TIMEVNT1
    static constexpr uint32_t RSTA2R_MSTCMP4 = 0x800;        // MSTCMP4
    static constexpr uint32_t RSTA2R_MSTCMP3 = 0x400;        // MSTCMP3
    static constexpr uint32_t RSTA2R_MSTCMP2 = 0x200;        // MSTCMP2
    static constexpr uint32_t RSTA2R_MSTCMP1 = 0x100;        // MSTCMP1
    static constexpr uint32_t RSTA2R_MSTPER = 0x80;          // MSTPER
    static constexpr uint32_t RSTA2R_CMP4 = 0x40;            // CMP4
    static constexpr uint32_t RSTA2R_CMP3 = 0x20;            // CMP3
    static constexpr uint32_t RSTA2R_CMP2 = 0x10;            // CMP2
    static constexpr uint32_t RSTA2R_CMP1 = 0x8;             // CMP1
    static constexpr uint32_t RSTA2R_PER = 0x4;              // PER
    static constexpr uint32_t RSTA2R_RESYNC = 0x2;           // RESYNC
    static constexpr uint32_t RSTA2R_SRT = 0x1;              // SRT

    static constexpr uint32_t EEFAR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EEFAR1_EE5FLTR =            // External Event 5 filter
        bit_field_t<25, 0xf>::value<X>();
    static constexpr uint32_t EEFAR1_EE5LTCH = 0x1000000; // External Event 5 latch
    template<uint32_t X>
    static constexpr uint32_t EEFAR1_EE4FLTR =            // External Event 4 filter
        bit_field_t<19, 0xf>::value<X>();
    static constexpr uint32_t EEFAR1_EE4LTCH = 0x40000;   // External Event 4 latch
    template<uint32_t X>
    static constexpr uint32_t EEFAR1_EE3FLTR =            // External Event 3 filter
        bit_field_t<13, 0xf>::value<X>();
    static constexpr uint32_t EEFAR1_EE3LTCH = 0x1000;    // External Event 3 latch
    template<uint32_t X>
    static constexpr uint32_t EEFAR1_EE2FLTR =            // External Event 2 filter
        bit_field_t<7, 0xf>::value<X>();
    static constexpr uint32_t EEFAR1_EE2LTCH = 0x40;      // External Event 2 latch
    template<uint32_t X>
    static constexpr uint32_t EEFAR1_EE1FLTR =            // External Event 1 filter
        bit_field_t<1, 0xf>::value<X>();
    static constexpr uint32_t EEFAR1_EE1LTCH = 0x1;       // External Event 1 latch

    static constexpr uint32_t EEFAR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EEFAR2_EE10FLTR =            // External Event 10 filter
        bit_field_t<25, 0xf>::value<X>();
    static constexpr uint32_t EEFAR2_EE10LTCH = 0x1000000; // External Event 10 latch
    template<uint32_t X>
    static constexpr uint32_t EEFAR2_EE9FLTR =             // External Event 9 filter
        bit_field_t<19, 0xf>::value<X>();
    static constexpr uint32_t EEFAR2_EE9LTCH = 0x40000;    // External Event 9 latch
    template<uint32_t X>
    static constexpr uint32_t EEFAR2_EE8FLTR =             // External Event 8 filter
        bit_field_t<13, 0xf>::value<X>();
    static constexpr uint32_t EEFAR2_EE8LTCH = 0x1000;     // External Event 8 latch
    template<uint32_t X>
    static constexpr uint32_t EEFAR2_EE7FLTR =             // External Event 7 filter
        bit_field_t<7, 0xf>::value<X>();
    static constexpr uint32_t EEFAR2_EE7LTCH = 0x40;       // External Event 7 latch
    template<uint32_t X>
    static constexpr uint32_t EEFAR2_EE6FLTR =             // External Event 6 filter
        bit_field_t<1, 0xf>::value<X>();
    static constexpr uint32_t EEFAR2_EE6LTCH = 0x1;        // External Event 6 latch

    static constexpr uint32_t RSTAR_RESET_VALUE = 0x0;
    static constexpr uint32_t RSTAR_TIMFCPM2 = 0x80000000; // Timer F Compare 2
    static constexpr uint32_t RSTAR_TIMECMP4 = 0x40000000; // Timer E Compare 4
    static constexpr uint32_t RSTAR_TIMECMP2 = 0x20000000; // Timer E Compare 2
    static constexpr uint32_t RSTAR_TIMECMP1 = 0x10000000; // Timer E Compare 1
    static constexpr uint32_t RSTAR_TIMDCMP4 = 0x8000000;  // Timer D Compare 4
    static constexpr uint32_t RSTAR_TIMDCMP2 = 0x4000000;  // Timer D Compare 2
    static constexpr uint32_t RSTAR_TIMDCMP1 = 0x2000000;  // Timer D Compare 1
    static constexpr uint32_t RSTAR_TIMCCMP4 = 0x1000000;  // Timer C Compare 4
    static constexpr uint32_t RSTAR_TIMCCMP2 = 0x800000;   // Timer C Compare 2
    static constexpr uint32_t RSTAR_TIMCCMP1 = 0x400000;   // Timer C Compare 1
    static constexpr uint32_t RSTAR_TIMBCMP4 = 0x200000;   // Timer B Compare 4
    static constexpr uint32_t RSTAR_TIMBCMP2 = 0x100000;   // Timer B Compare 2
    static constexpr uint32_t RSTAR_TIMBCMP1 = 0x80000;    // Timer B Compare 1
    static constexpr uint32_t RSTAR_EXTEVNT10 = 0x40000;   // External Event 10
    static constexpr uint32_t RSTAR_EXTEVNT9 = 0x20000;    // External Event 9
    static constexpr uint32_t RSTAR_EXTEVNT8 = 0x10000;    // External Event 8
    static constexpr uint32_t RSTAR_EXTEVNT7 = 0x8000;     // External Event 7
    static constexpr uint32_t RSTAR_EXTEVNT6 = 0x4000;     // External Event 6
    static constexpr uint32_t RSTAR_EXTEVNT5 = 0x2000;     // External Event 5
    static constexpr uint32_t RSTAR_EXTEVNT4 = 0x1000;     // External Event 4
    static constexpr uint32_t RSTAR_EXTEVNT3 = 0x800;      // External Event 3
    static constexpr uint32_t RSTAR_EXTEVNT2 = 0x400;      // External Event 2
    static constexpr uint32_t RSTAR_EXTEVNT1 = 0x200;      // External Event 1
    static constexpr uint32_t RSTAR_MSTCMP4 = 0x100;       // Master compare 4
    static constexpr uint32_t RSTAR_MSTCMP3 = 0x80;        // Master compare 3
    static constexpr uint32_t RSTAR_MSTCMP2 = 0x40;        // Master compare 2
    static constexpr uint32_t RSTAR_MSTCMP1 = 0x20;        // Master compare 1
    static constexpr uint32_t RSTAR_MSTPER = 0x10;         // Master timer Period
    static constexpr uint32_t RSTAR_CMP4 = 0x8;            // Timer A compare 4 reset
    static constexpr uint32_t RSTAR_CMP2 = 0x4;            // Timer A compare 2 reset
    static constexpr uint32_t RSTAR_UPDT = 0x2;            // Timer A Update reset
    static constexpr uint32_t RSTAR_TIMFCMP1 = 0x1;        // Timer A Update reset

    static constexpr uint32_t CHPAR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CHPAR_STRTPW =   // STRTPW
        bit_field_t<7, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CHPAR_CHPDTY =   // Timerx chopper duty cycle value
        bit_field_t<4, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CHPAR_CHPFRQ =   // Timerx carrier frequency value
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t CPT1ACR_RESET_VALUE = 0x0;
    static constexpr uint32_t CPT1ACR_TECMP2 = 0x80000000; // Timer E Compare 2
    static constexpr uint32_t CPT1ACR_TECMP1 = 0x40000000; // Timer E Compare 1
    static constexpr uint32_t CPT1ACR_TE1RST = 0x20000000; // Timer E output 1 Reset
    static constexpr uint32_t CPT1ACR_TE1SET = 0x10000000; // Timer E output 1 Set
    static constexpr uint32_t CPT1ACR_TDCMP2 = 0x8000000;  // Timer D Compare 2
    static constexpr uint32_t CPT1ACR_TDCMP1 = 0x4000000;  // Timer D Compare 1
    static constexpr uint32_t CPT1ACR_TD1RST = 0x2000000;  // Timer D output 1 Reset
    static constexpr uint32_t CPT1ACR_TD1SET = 0x1000000;  // Timer D output 1 Set
    static constexpr uint32_t CPT1ACR_TCCMP2 = 0x800000;   // Timer C Compare 2
    static constexpr uint32_t CPT1ACR_TCCMP1 = 0x400000;   // Timer C Compare 1
    static constexpr uint32_t CPT1ACR_TC1RST = 0x200000;   // Timer C output 1 Reset
    static constexpr uint32_t CPT1ACR_TC1SET = 0x100000;   // Timer C output 1 Set
    static constexpr uint32_t CPT1ACR_TBCMP2 = 0x80000;    // Timer B Compare 2
    static constexpr uint32_t CPT1ACR_TBCMP1 = 0x40000;    // Timer B Compare 1
    static constexpr uint32_t CPT1ACR_TB1RST = 0x20000;    // Timer B output 1 Reset
    static constexpr uint32_t CPT1ACR_TB1SET = 0x10000;    // Timer B output 1 Set
    static constexpr uint32_t CPT1ACR_TFCMP2 = 0x8000;     // TFCMP2
    static constexpr uint32_t CPT1ACR_TFCMP1 = 0x4000;     // TFCMP1
    static constexpr uint32_t CPT1ACR_TF1RST = 0x2000;     // TF1RST
    static constexpr uint32_t CPT1ACR_TF1SET = 0x1000;     // TF1SET
    static constexpr uint32_t CPT1ACR_EXEV10CPT = 0x800;   // External Event 10 Capture
    static constexpr uint32_t CPT1ACR_EXEV9CPT = 0x400;    // External Event 9 Capture
    static constexpr uint32_t CPT1ACR_EXEV8CPT = 0x200;    // External Event 8 Capture
    static constexpr uint32_t CPT1ACR_EXEV7CPT = 0x100;    // External Event 7 Capture
    static constexpr uint32_t CPT1ACR_EXEV6CPT = 0x80;     // External Event 6 Capture
    static constexpr uint32_t CPT1ACR_EXEV5CPT = 0x40;     // External Event 5 Capture
    static constexpr uint32_t CPT1ACR_EXEV4CPT = 0x20;     // External Event 4 Capture
    static constexpr uint32_t CPT1ACR_EXEV3CPT = 0x10;     // External Event 3 Capture
    static constexpr uint32_t CPT1ACR_EXEV2CPT = 0x8;      // External Event 2 Capture
    static constexpr uint32_t CPT1ACR_EXEV1CPT = 0x4;      // External Event 1 Capture
    static constexpr uint32_t CPT1ACR_UDPCPT = 0x2;        // Update Capture
    static constexpr uint32_t CPT1ACR_SWCPT = 0x1;         // Software Capture

    static constexpr uint32_t CPT2ACR_RESET_VALUE = 0x0;
    static constexpr uint32_t CPT2ACR_TECMP2 = 0x80000000; // Timer E Compare 2
    static constexpr uint32_t CPT2ACR_TECMP1 = 0x40000000; // Timer E Compare 1
    static constexpr uint32_t CPT2ACR_TE1RST = 0x20000000; // Timer E output 1 Reset
    static constexpr uint32_t CPT2ACR_TE1SET = 0x10000000; // Timer E output 1 Set
    static constexpr uint32_t CPT2ACR_TDCMP2 = 0x8000000;  // Timer D Compare 2
    static constexpr uint32_t CPT2ACR_TDCMP1 = 0x4000000;  // Timer D Compare 1
    static constexpr uint32_t CPT2ACR_TD1RST = 0x2000000;  // Timer D output 1 Reset
    static constexpr uint32_t CPT2ACR_TD1SET = 0x1000000;  // Timer D output 1 Set
    static constexpr uint32_t CPT2ACR_TCCMP2 = 0x800000;   // Timer C Compare 2
    static constexpr uint32_t CPT2ACR_TCCMP1 = 0x400000;   // Timer C Compare 1
    static constexpr uint32_t CPT2ACR_TC1RST = 0x200000;   // Timer C output 1 Reset
    static constexpr uint32_t CPT2ACR_TC1SET = 0x100000;   // Timer C output 1 Set
    static constexpr uint32_t CPT2ACR_TBCMP2 = 0x80000;    // Timer B Compare 2
    static constexpr uint32_t CPT2ACR_TBCMP1 = 0x40000;    // Timer B Compare 1
    static constexpr uint32_t CPT2ACR_TB1RST = 0x20000;    // Timer B output 1 Reset
    static constexpr uint32_t CPT2ACR_TB1SET = 0x10000;    // Timer B output 1 Set
    static constexpr uint32_t CPT2ACR_TFCMP2 = 0x8000;     // TFCMP2
    static constexpr uint32_t CPT2ACR_TFCMP1 = 0x4000;     // TFCMP1
    static constexpr uint32_t CPT2ACR_TF1RST = 0x2000;     // TF1RST
    static constexpr uint32_t CPT2ACR_TF1SET = 0x1000;     // TF1SET
    static constexpr uint32_t CPT2ACR_EXEV10CPT = 0x800;   // External Event 10 Capture
    static constexpr uint32_t CPT2ACR_EXEV9CPT = 0x400;    // External Event 9 Capture
    static constexpr uint32_t CPT2ACR_EXEV8CPT = 0x200;    // External Event 8 Capture
    static constexpr uint32_t CPT2ACR_EXEV7CPT = 0x100;    // External Event 7 Capture
    static constexpr uint32_t CPT2ACR_EXEV6CPT = 0x80;     // External Event 6 Capture
    static constexpr uint32_t CPT2ACR_EXEV5CPT = 0x40;     // External Event 5 Capture
    static constexpr uint32_t CPT2ACR_EXEV4CPT = 0x20;     // External Event 4 Capture
    static constexpr uint32_t CPT2ACR_EXEV3CPT = 0x10;     // External Event 3 Capture
    static constexpr uint32_t CPT2ACR_EXEV2CPT = 0x8;      // External Event 2 Capture
    static constexpr uint32_t CPT2ACR_EXEV1CPT = 0x4;      // External Event 1 Capture
    static constexpr uint32_t CPT2ACR_UDPCPT = 0x2;        // Update Capture
    static constexpr uint32_t CPT2ACR_SWCPT = 0x1;         // Software Capture

    static constexpr uint32_t OUTAR_RESET_VALUE = 0x0;
    static constexpr uint32_t OUTAR_DIDL2 = 0x800000; // Output 2 Deadtime upon burst mode Idle entry
    static constexpr uint32_t OUTAR_CHP2 = 0x400000;  // Output 2 Chopper enable
    template<uint32_t X>
    static constexpr uint32_t OUTAR_FAULT2 =          // Output 2 Fault state
        bit_field_t<20, 0x3>::value<X>();
    static constexpr uint32_t OUTAR_IDLES2 = 0x80000; // Output 2 Idle State
    static constexpr uint32_t OUTAR_IDLEM2 = 0x40000; // Output 2 Idle mode
    static constexpr uint32_t OUTAR_POL2 = 0x20000;   // Output 2 polarity
    static constexpr uint32_t OUTAR_BIAR = 0x4000;    // Balanced Idle Automatic Resume
    template<uint32_t X>
    static constexpr uint32_t OUTAR_DLYPRT =          // Delayed Protection
        bit_field_t<10, 0x7>::value<X>();
    static constexpr uint32_t OUTAR_DLYPRTEN = 0x200; // Delayed Protection Enable
    static constexpr uint32_t OUTAR_DTEN = 0x100;     // Deadtime enable
    static constexpr uint32_t OUTAR_DIDL1 = 0x80;     // Output 1 Deadtime upon burst mode Idle entry
    static constexpr uint32_t OUTAR_CHP1 = 0x40;      // Output 1 Chopper enable
    template<uint32_t X>
    static constexpr uint32_t OUTAR_FAULT1 =          // Output 1 Fault state
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t OUTAR_IDLES1 = 0x8;     // Output 1 Idle State
    static constexpr uint32_t OUTAR_IDLEM1 = 0x4;     // Output 1 Idle mode
    static constexpr uint32_t OUTAR_POL1 = 0x2;       // Output 1 polarity

    static constexpr uint32_t FLTAR_RESET_VALUE = 0x0;
    static constexpr uint32_t FLTAR_FLTLCK = 0x80000000; // Fault sources Lock
    static constexpr uint32_t FLTAR_FLT6EN = 0x20;       // Fault 6 enable
    static constexpr uint32_t FLTAR_FLT5EN = 0x10;       // Fault 5 enable
    static constexpr uint32_t FLTAR_FLT4EN = 0x8;        // Fault 4 enable
    static constexpr uint32_t FLTAR_FLT3EN = 0x4;        // Fault 3 enable
    static constexpr uint32_t FLTAR_FLT2EN = 0x2;        // Fault 2 enable
    static constexpr uint32_t FLTAR_FLT1EN = 0x1;        // Fault 1 enable

    static constexpr uint32_t TIMACR2_RESET_VALUE = 0x0;
    static constexpr uint32_t TIMACR2_TRGHLF = 0x100000; // Triggered-half mode
    static constexpr uint32_t TIMACR2_GTCMP3 = 0x20000;  // Greater than Compare 3 PWM mode
    static constexpr uint32_t TIMACR2_GTCMP1 = 0x10000;  // Greater than Compare 1 PWM mode
    template<uint32_t X>
    static constexpr uint32_t TIMACR2_FEROM =            // Fault and Event Roll-Over Mode
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TIMACR2_BMROM =            // Burst Mode Roll-Over Mode
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TIMACR2_ADROM =            // ADC Roll-Over Mode
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TIMACR2_OUTROM =           // Output Roll-Over Mode
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TIMACR2_ROM =              // Roll-Over Mode
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t TIMACR2_UDM = 0x10;        // Up-Down Mode
    static constexpr uint32_t TIMACR2_DCDR = 0x4;        // Dual Channel DAC Reset trigger
    static constexpr uint32_t TIMACR2_DCDS = 0x2;        // Dual Channel DAC Step trigger
    static constexpr uint32_t TIMACR2_DCDE = 0x1;        // Dual Channel DAC trigger enable

    static constexpr uint32_t AEEFR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t AEEFR3_EEVACNT =       // External Event A counter
        bit_field_t<8, 0x3f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t AEEFR3_EEVASEL =       // External Event A Selection
        bit_field_t<4, 0xf>::value<X>();
    static constexpr uint32_t AEEFR3_EEVARSTM = 0x4; // External Event A Reset Mode
    static constexpr uint32_t AEEFR3_EEVACRES = 0x2; // External Event A Counter Reset
    static constexpr uint32_t AEEFR3_EEVACE = 0x1;   // External Event A Counter Enable
};


////
//
//      High Resolution Timer: TIMB
//
////

struct stm32g474xx_hrtim_timb_t
{
    volatile uint32_t TIMBCR;   // [read-write] Timerx Control Register
    volatile uint32_t TIMBISR;  // [read-only] Timerx Interrupt Status Register
    volatile uint32_t TIMBICR;  // [write-only] Timerx Interrupt Clear Register
    volatile uint32_t TIMBDIER; // [read-write] TIMxDIER
    volatile uint32_t CNTR;     // [read-write] Timerx Counter Register
    volatile uint32_t PERBR;    // [read-write] Timerx Period Register
    volatile uint32_t REPBR;    // [read-write] Timerx Repetition Register
    volatile uint32_t CMP1BR;   // [read-write] Timerx Compare 1 Register
    volatile uint32_t CMP1CBR;  // [read-write] Timerx Compare 1 Compound Register
    volatile uint32_t CMP2BR;   // [read-write] Timerx Compare 2 Register
    volatile uint32_t CMP3BR;   // [read-write] Timerx Compare 3 Register
    volatile uint32_t CMP4BR;   // [read-write] Timerx Compare 4 Register
    volatile uint32_t CPT1BR;   // [read-only] Timerx Capture 1 Register
    volatile uint32_t CPT2BR;   // [read-only] Timerx Capture 2 Register
    volatile uint32_t DTBR;     // [read-write] Timerx Deadtime Register
    volatile uint32_t SETB1R;   // [read-write] Timerx Output1 Set Register
    volatile uint32_t RSTB1R;   // [read-write] Timerx Output1 Reset Register
    volatile uint32_t SETB2R;   // [read-write] Timerx Output2 Set Register
    volatile uint32_t RSTB2R;   // [read-write] Timerx Output2 Reset Register
    volatile uint32_t EEFBR1;   // [read-write] Timerx External Event Filtering Register 1
    volatile uint32_t EEFBR2;   // [read-write] Timerx External Event Filtering Register 2
    volatile uint32_t RSTBR;    // [read-write] TimerA Reset Register
    volatile uint32_t CHPBR;    // [read-write] Timerx Chopper Register
    volatile uint32_t CPT1BCR;  // [read-write] Timerx Capture 2 Control Register
    volatile uint32_t CPT2BCR;  // [read-write] CPT2xCR
    volatile uint32_t OUTBR;    // [read-write] Timerx Output Register
    volatile uint32_t FLTBR;    // [read-write] Timerx Fault Register
    volatile uint32_t TIMBCR2;  // [read-write] HRTIM Timerx Control Register 2
    volatile uint32_t BEEFR3;   // [read-write] HRTIM Timerx External Event Filtering Register 3

    static constexpr uint32_t TIMBCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TIMBCR_UPDGAT =           // Update Gating
        bit_field_t<28, 0xf>::value<X>();
    static constexpr uint32_t TIMBCR_PREEN = 0x8000000; // Preload enable
    template<uint32_t X>
    static constexpr uint32_t TIMBCR_DACSYNC =          // AC Synchronization
        bit_field_t<25, 0x3>::value<X>();
    static constexpr uint32_t TIMBCR_MSTU = 0x1000000;  // Master Timer update
    static constexpr uint32_t TIMBCR_TEU = 0x800000;    // TEU
    static constexpr uint32_t TIMBCR_TDU = 0x400000;    // TDU
    static constexpr uint32_t TIMBCR_TCU = 0x200000;    // TCU
    static constexpr uint32_t TIMBCR_TAU = 0x80000;     // TAU
    static constexpr uint32_t TIMBCR_TxRSTU = 0x40000;  // Timerx reset update
    static constexpr uint32_t TIMBCR_TxREPU = 0x20000;  // Timer x Repetition update
    static constexpr uint32_t TIMBCR_TFU = 0x10000;     // TFU
    template<uint32_t X>
    static constexpr uint32_t TIMBCR_DELCMP4 =          // Delayed CMP4 mode
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TIMBCR_DELCMP2 =          // Delayed CMP2 mode
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t TIMBCR_SYNCSTRTx = 0x800; // Synchronization Starts Timer x
    static constexpr uint32_t TIMBCR_SYNCRSTx = 0x400;  // Synchronization Resets Timer x
    static constexpr uint32_t TIMBCR_RSYNCU = 0x200;    // Re-Synchronized Update
    template<uint32_t X>
    static constexpr uint32_t TIMBCR_INTLVD =           // Interleaved mode
        bit_field_t<7, 0x3>::value<X>();
    static constexpr uint32_t TIMBCR_PSHPLL = 0x40;     // Push-Pull mode enable
    static constexpr uint32_t TIMBCR_HALF = 0x20;       // Half mode enable
    static constexpr uint32_t TIMBCR_RETRIG = 0x10;     // Re-triggerable mode
    static constexpr uint32_t TIMBCR_CONT = 0x8;        // Continuous mode
    template<uint32_t X>
    static constexpr uint32_t TIMBCR_CK_PSCx =          // HRTIM Timer x Clock prescaler
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t TIMBISR_RESET_VALUE = 0x0;
    static constexpr uint32_t TIMBISR_O2CPY = 0x200000;  // Output 2 Copy
    static constexpr uint32_t TIMBISR_O1CPY = 0x100000;  // Output 1 Copy
    static constexpr uint32_t TIMBISR_O2STAT = 0x80000;  // Output 2 State
    static constexpr uint32_t TIMBISR_O1STAT = 0x40000;  // Output 1 State
    static constexpr uint32_t TIMBISR_IPPSTAT = 0x20000; // Idle Push Pull Status
    static constexpr uint32_t TIMBISR_CPPSTAT = 0x10000; // Current Push Pull Status
    static constexpr uint32_t TIMBISR_DLYPRT = 0x4000;   // Delayed Protection Flag
    static constexpr uint32_t TIMBISR_RST = 0x2000;      // Reset Interrupt Flag
    static constexpr uint32_t TIMBISR_RSTx2 = 0x1000;    // Output 2 Reset Interrupt Flag
    static constexpr uint32_t TIMBISR_SETx2 = 0x800;     // Output 2 Set Interrupt Flag
    static constexpr uint32_t TIMBISR_RSTx1 = 0x400;     // Output 1 Reset Interrupt Flag
    static constexpr uint32_t TIMBISR_SETx1 = 0x200;     // Output 1 Set Interrupt Flag
    static constexpr uint32_t TIMBISR_CPT2 = 0x100;      // Capture2 Interrupt Flag
    static constexpr uint32_t TIMBISR_CPT1 = 0x80;       // Capture1 Interrupt Flag
    static constexpr uint32_t TIMBISR_UPD = 0x40;        // Update Interrupt Flag
    static constexpr uint32_t TIMBISR_REP = 0x10;        // Repetition Interrupt Flag
    static constexpr uint32_t TIMBISR_CMP4 = 0x8;        // Compare 4 Interrupt Flag
    static constexpr uint32_t TIMBISR_CMP3 = 0x4;        // Compare 3 Interrupt Flag
    static constexpr uint32_t TIMBISR_CMP2 = 0x2;        // Compare 2 Interrupt Flag
    static constexpr uint32_t TIMBISR_CMP1 = 0x1;        // Compare 1 Interrupt Flag

    static constexpr uint32_t TIMBICR_RESET_VALUE = 0x0;
    static constexpr uint32_t TIMBICR_DLYPRTC = 0x4000; // Delayed Protection Flag Clear
    static constexpr uint32_t TIMBICR_RSTC = 0x2000;    // Reset Interrupt flag Clear
    static constexpr uint32_t TIMBICR_RSTx2C = 0x1000;  // Output 2 Reset flag Clear
    static constexpr uint32_t TIMBICR_SET2xC = 0x800;   // Output 2 Set flag Clear
    static constexpr uint32_t TIMBICR_RSTx1C = 0x400;   // Output 1 Reset flag Clear
    static constexpr uint32_t TIMBICR_SET1xC = 0x200;   // Output 1 Set flag Clear
    static constexpr uint32_t TIMBICR_CPT2C = 0x100;    // Capture2 Interrupt flag Clear
    static constexpr uint32_t TIMBICR_CPT1C = 0x80;     // Capture1 Interrupt flag Clear
    static constexpr uint32_t TIMBICR_UPDC = 0x40;      // Update Interrupt flag Clear
    static constexpr uint32_t TIMBICR_REPC = 0x10;      // Repetition Interrupt flag Clear
    static constexpr uint32_t TIMBICR_CMP4C = 0x8;      // Compare 4 Interrupt flag Clear
    static constexpr uint32_t TIMBICR_CMP3C = 0x4;      // Compare 3 Interrupt flag Clear
    static constexpr uint32_t TIMBICR_CMP2C = 0x2;      // Compare 2 Interrupt flag Clear
    static constexpr uint32_t TIMBICR_CMP1C = 0x1;      // Compare 1 Interrupt flag Clear

    static constexpr uint32_t TIMBDIER_RESET_VALUE = 0x0;
    static constexpr uint32_t TIMBDIER_DLYPRTDE = 0x40000000; // DLYPRTDE
    static constexpr uint32_t TIMBDIER_RSTDE = 0x20000000;    // RSTDE
    static constexpr uint32_t TIMBDIER_RSTx2DE = 0x10000000;  // RSTx2DE
    static constexpr uint32_t TIMBDIER_SETx2DE = 0x8000000;   // SETx2DE
    static constexpr uint32_t TIMBDIER_RSTx1DE = 0x4000000;   // RSTx1DE
    static constexpr uint32_t TIMBDIER_SET1xDE = 0x2000000;   // SET1xDE
    static constexpr uint32_t TIMBDIER_CPT2DE = 0x1000000;    // CPT2DE
    static constexpr uint32_t TIMBDIER_CPT1DE = 0x800000;     // CPT1DE
    static constexpr uint32_t TIMBDIER_UPDDE = 0x400000;      // UPDDE
    static constexpr uint32_t TIMBDIER_REPDE = 0x100000;      // REPDE
    static constexpr uint32_t TIMBDIER_CMP4DE = 0x80000;      // CMP4DE
    static constexpr uint32_t TIMBDIER_CMP3DE = 0x40000;      // CMP3DE
    static constexpr uint32_t TIMBDIER_CMP2DE = 0x20000;      // CMP2DE
    static constexpr uint32_t TIMBDIER_CMP1DE = 0x10000;      // CMP1DE
    static constexpr uint32_t TIMBDIER_DLYPRTIE = 0x4000;     // DLYPRTIE
    static constexpr uint32_t TIMBDIER_RSTIE = 0x2000;        // RSTIE
    static constexpr uint32_t TIMBDIER_RSTx2IE = 0x1000;      // RSTx2IE
    static constexpr uint32_t TIMBDIER_SETx2IE = 0x800;       // SETx2IE
    static constexpr uint32_t TIMBDIER_RSTx1IE = 0x400;       // RSTx1IE
    static constexpr uint32_t TIMBDIER_SET1xIE = 0x200;       // SET1xIE
    static constexpr uint32_t TIMBDIER_CPT2IE = 0x100;        // CPT2IE
    static constexpr uint32_t TIMBDIER_CPT1IE = 0x80;         // CPT1IE
    static constexpr uint32_t TIMBDIER_UPDIE = 0x40;          // UPDIE
    static constexpr uint32_t TIMBDIER_REPIE = 0x10;          // REPIE
    static constexpr uint32_t TIMBDIER_CMP4IE = 0x8;          // CMP4IE
    static constexpr uint32_t TIMBDIER_CMP3IE = 0x4;          // CMP3IE
    static constexpr uint32_t TIMBDIER_CMP2IE = 0x2;          // CMP2IE
    static constexpr uint32_t TIMBDIER_CMP1IE = 0x1;          // CMP1IE

    static constexpr uint32_t CNTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CNTR_CNTx =   // Timerx Counter value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t PERBR_RESET_VALUE = 0xffff;
    template<uint32_t X>
    static constexpr uint32_t PERBR_PERx =   // Timerx Period value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t REPBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t REPBR_REPx =   // Timerx Repetition counter value
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t CMP1BR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CMP1BR_CMP1x =   // Timerx Compare 1 value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CMP1CBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CMP1CBR_REPx =    // Timerx Repetition value (aliased from HRTIM_REPx register)
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CMP1CBR_CMP1x =   // Timerx Compare 1 value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CMP2BR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CMP2BR_CMP2x =   // Timerx Compare 2 value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CMP3BR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CMP3BR_CMP3x =   // Timerx Compare 3 value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CMP4BR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CMP4BR_CMP4x =   // Timerx Compare 4 value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CPT1BR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CPT1BR_CPT1x =        // Timerx Capture 1 value
        bit_field_t<0, 0xffff>::value<X>();
    static constexpr uint32_t CPT1BR_DIR = 0x10000; // Timerx Capture 1 Direction status

    static constexpr uint32_t CPT2BR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CPT2BR_CPT2x =        // Timerx Capture 2 value
        bit_field_t<0, 0xffff>::value<X>();
    static constexpr uint32_t CPT2BR_DIR = 0x10000; // Timerx Capture 1 Direction status

    static constexpr uint32_t DTBR_RESET_VALUE = 0x0;
    static constexpr uint32_t DTBR_DTFLKx = 0x80000000;  // Deadtime Falling Lock
    static constexpr uint32_t DTBR_DTFSLKx = 0x40000000; // Deadtime Falling Sign Lock
    static constexpr uint32_t DTBR_SDTFx = 0x2000000;    // Sign Deadtime Falling value
    template<uint32_t X>
    static constexpr uint32_t DTBR_DTFx =                // Deadtime Falling value
        bit_field_t<16, 0x1ff>::value<X>();
    static constexpr uint32_t DTBR_DTRLKx = 0x8000;      // Deadtime Rising Lock
    static constexpr uint32_t DTBR_DTRSLKx = 0x4000;     // Deadtime Rising Sign Lock
    template<uint32_t X>
    static constexpr uint32_t DTBR_DTPRSC =              // Deadtime Prescaler
        bit_field_t<10, 0x7>::value<X>();
    static constexpr uint32_t DTBR_SDTRx = 0x200;        // Sign Deadtime Rising value
    template<uint32_t X>
    static constexpr uint32_t DTBR_DTRx =                // Deadtime Rising value
        bit_field_t<0, 0x1ff>::value<X>();

    static constexpr uint32_t SETB1R_RESET_VALUE = 0x0;
    static constexpr uint32_t SETB1R_UPDATE = 0x80000000;    // Registers update (transfer preload to active)
    static constexpr uint32_t SETB1R_EXTEVNT10 = 0x40000000; // External Event 10
    static constexpr uint32_t SETB1R_EXTEVNT9 = 0x20000000;  // External Event 9
    static constexpr uint32_t SETB1R_EXTEVNT8 = 0x10000000;  // External Event 8
    static constexpr uint32_t SETB1R_EXTEVNT7 = 0x8000000;   // External Event 7
    static constexpr uint32_t SETB1R_EXTEVNT6 = 0x4000000;   // External Event 6
    static constexpr uint32_t SETB1R_EXTEVNT5 = 0x2000000;   // External Event 5
    static constexpr uint32_t SETB1R_EXTEVNT4 = 0x1000000;   // External Event 4
    static constexpr uint32_t SETB1R_EXTEVNT3 = 0x800000;    // External Event 3
    static constexpr uint32_t SETB1R_EXTEVNT2 = 0x400000;    // External Event 2
    static constexpr uint32_t SETB1R_EXTEVNT1 = 0x200000;    // External Event 1
    static constexpr uint32_t SETB1R_TIMEVNT9 = 0x100000;    // Timer Event 9
    static constexpr uint32_t SETB1R_TIMEVNT8 = 0x80000;     // Timer Event 8
    static constexpr uint32_t SETB1R_TIMEVNT7 = 0x40000;     // Timer Event 7
    static constexpr uint32_t SETB1R_TIMEVNT6 = 0x20000;     // Timer Event 6
    static constexpr uint32_t SETB1R_TIMEVNT5 = 0x10000;     // Timer Event 5
    static constexpr uint32_t SETB1R_TIMEVNT4 = 0x8000;      // Timer Event 4
    static constexpr uint32_t SETB1R_TIMEVNT3 = 0x4000;      // Timer Event 3
    static constexpr uint32_t SETB1R_TIMEVNT2 = 0x2000;      // Timer Event 2
    static constexpr uint32_t SETB1R_TIMEVNT1 = 0x1000;      // Timer Event 1
    static constexpr uint32_t SETB1R_MSTCMP4 = 0x800;        // Master Compare 4
    static constexpr uint32_t SETB1R_MSTCMP3 = 0x400;        // Master Compare 3
    static constexpr uint32_t SETB1R_MSTCMP2 = 0x200;        // Master Compare 2
    static constexpr uint32_t SETB1R_MSTCMP1 = 0x100;        // Master Compare 1
    static constexpr uint32_t SETB1R_MSTPER = 0x80;          // Master Period
    static constexpr uint32_t SETB1R_CMP4 = 0x40;            // Timer A compare 4
    static constexpr uint32_t SETB1R_CMP3 = 0x20;            // Timer A compare 3
    static constexpr uint32_t SETB1R_CMP2 = 0x10;            // Timer A compare 2
    static constexpr uint32_t SETB1R_CMP1 = 0x8;             // Timer A compare 1
    static constexpr uint32_t SETB1R_PER = 0x4;              // Timer A Period
    static constexpr uint32_t SETB1R_RESYNC = 0x2;           // Timer A resynchronizaton
    static constexpr uint32_t SETB1R_SST = 0x1;              // Software Set trigger

    static constexpr uint32_t RSTB1R_RESET_VALUE = 0x0;
    static constexpr uint32_t RSTB1R_UPDATE = 0x80000000;    // UPDATE
    static constexpr uint32_t RSTB1R_EXTEVNT10 = 0x40000000; // EXTEVNT10
    static constexpr uint32_t RSTB1R_EXTEVNT9 = 0x20000000;  // EXTEVNT9
    static constexpr uint32_t RSTB1R_EXTEVNT8 = 0x10000000;  // EXTEVNT8
    static constexpr uint32_t RSTB1R_EXTEVNT7 = 0x8000000;   // EXTEVNT7
    static constexpr uint32_t RSTB1R_EXTEVNT6 = 0x4000000;   // EXTEVNT6
    static constexpr uint32_t RSTB1R_EXTEVNT5 = 0x2000000;   // EXTEVNT5
    static constexpr uint32_t RSTB1R_EXTEVNT4 = 0x1000000;   // EXTEVNT4
    static constexpr uint32_t RSTB1R_EXTEVNT3 = 0x800000;    // EXTEVNT3
    static constexpr uint32_t RSTB1R_EXTEVNT2 = 0x400000;    // EXTEVNT2
    static constexpr uint32_t RSTB1R_EXTEVNT1 = 0x200000;    // EXTEVNT1
    static constexpr uint32_t RSTB1R_TIMEVNT9 = 0x100000;    // TIMEVNT9
    static constexpr uint32_t RSTB1R_TIMEVNT8 = 0x80000;     // TIMEVNT8
    static constexpr uint32_t RSTB1R_TIMEVNT7 = 0x40000;     // TIMEVNT7
    static constexpr uint32_t RSTB1R_TIMEVNT6 = 0x20000;     // TIMEVNT6
    static constexpr uint32_t RSTB1R_TIMEVNT5 = 0x10000;     // TIMEVNT5
    static constexpr uint32_t RSTB1R_TIMEVNT4 = 0x8000;      // TIMEVNT4
    static constexpr uint32_t RSTB1R_TIMEVNT3 = 0x4000;      // TIMEVNT3
    static constexpr uint32_t RSTB1R_TIMEVNT2 = 0x2000;      // TIMEVNT2
    static constexpr uint32_t RSTB1R_TIMEVNT1 = 0x1000;      // TIMEVNT1
    static constexpr uint32_t RSTB1R_MSTCMP4 = 0x800;        // MSTCMP4
    static constexpr uint32_t RSTB1R_MSTCMP3 = 0x400;        // MSTCMP3
    static constexpr uint32_t RSTB1R_MSTCMP2 = 0x200;        // MSTCMP2
    static constexpr uint32_t RSTB1R_MSTCMP1 = 0x100;        // MSTCMP1
    static constexpr uint32_t RSTB1R_MSTPER = 0x80;          // MSTPER
    static constexpr uint32_t RSTB1R_CMP4 = 0x40;            // CMP4
    static constexpr uint32_t RSTB1R_CMP3 = 0x20;            // CMP3
    static constexpr uint32_t RSTB1R_CMP2 = 0x10;            // CMP2
    static constexpr uint32_t RSTB1R_CMP1 = 0x8;             // CMP1
    static constexpr uint32_t RSTB1R_PER = 0x4;              // PER
    static constexpr uint32_t RSTB1R_RESYNC = 0x2;           // RESYNC
    static constexpr uint32_t RSTB1R_SRT = 0x1;              // SRT

    static constexpr uint32_t SETB2R_RESET_VALUE = 0x0;
    static constexpr uint32_t SETB2R_UPDATE = 0x80000000;    // UPDATE
    static constexpr uint32_t SETB2R_EXTEVNT10 = 0x40000000; // EXTEVNT10
    static constexpr uint32_t SETB2R_EXTEVNT9 = 0x20000000;  // EXTEVNT9
    static constexpr uint32_t SETB2R_EXTEVNT8 = 0x10000000;  // EXTEVNT8
    static constexpr uint32_t SETB2R_EXTEVNT7 = 0x8000000;   // EXTEVNT7
    static constexpr uint32_t SETB2R_EXTEVNT6 = 0x4000000;   // EXTEVNT6
    static constexpr uint32_t SETB2R_EXTEVNT5 = 0x2000000;   // EXTEVNT5
    static constexpr uint32_t SETB2R_EXTEVNT4 = 0x1000000;   // EXTEVNT4
    static constexpr uint32_t SETB2R_EXTEVNT3 = 0x800000;    // EXTEVNT3
    static constexpr uint32_t SETB2R_EXTEVNT2 = 0x400000;    // EXTEVNT2
    static constexpr uint32_t SETB2R_EXTEVNT1 = 0x200000;    // EXTEVNT1
    static constexpr uint32_t SETB2R_TIMEVNT9 = 0x100000;    // TIMEVNT9
    static constexpr uint32_t SETB2R_TIMEVNT8 = 0x80000;     // TIMEVNT8
    static constexpr uint32_t SETB2R_TIMEVNT7 = 0x40000;     // TIMEVNT7
    static constexpr uint32_t SETB2R_TIMEVNT6 = 0x20000;     // TIMEVNT6
    static constexpr uint32_t SETB2R_TIMEVNT5 = 0x10000;     // TIMEVNT5
    static constexpr uint32_t SETB2R_TIMEVNT4 = 0x8000;      // TIMEVNT4
    static constexpr uint32_t SETB2R_TIMEVNT3 = 0x4000;      // TIMEVNT3
    static constexpr uint32_t SETB2R_TIMEVNT2 = 0x2000;      // TIMEVNT2
    static constexpr uint32_t SETB2R_TIMEVNT1 = 0x1000;      // TIMEVNT1
    static constexpr uint32_t SETB2R_MSTCMP4 = 0x800;        // MSTCMP4
    static constexpr uint32_t SETB2R_MSTCMP3 = 0x400;        // MSTCMP3
    static constexpr uint32_t SETB2R_MSTCMP2 = 0x200;        // MSTCMP2
    static constexpr uint32_t SETB2R_MSTCMP1 = 0x100;        // MSTCMP1
    static constexpr uint32_t SETB2R_MSTPER = 0x80;          // MSTPER
    static constexpr uint32_t SETB2R_CMP4 = 0x40;            // CMP4
    static constexpr uint32_t SETB2R_CMP3 = 0x20;            // CMP3
    static constexpr uint32_t SETB2R_CMP2 = 0x10;            // CMP2
    static constexpr uint32_t SETB2R_CMP1 = 0x8;             // CMP1
    static constexpr uint32_t SETB2R_PER = 0x4;              // PER
    static constexpr uint32_t SETB2R_RESYNC = 0x2;           // RESYNC
    static constexpr uint32_t SETB2R_SST = 0x1;              // SST

    static constexpr uint32_t RSTB2R_RESET_VALUE = 0x0;
    static constexpr uint32_t RSTB2R_UPDATE = 0x80000000;    // UPDATE
    static constexpr uint32_t RSTB2R_EXTEVNT10 = 0x40000000; // EXTEVNT10
    static constexpr uint32_t RSTB2R_EXTEVNT9 = 0x20000000;  // EXTEVNT9
    static constexpr uint32_t RSTB2R_EXTEVNT8 = 0x10000000;  // EXTEVNT8
    static constexpr uint32_t RSTB2R_EXTEVNT7 = 0x8000000;   // EXTEVNT7
    static constexpr uint32_t RSTB2R_EXTEVNT6 = 0x4000000;   // EXTEVNT6
    static constexpr uint32_t RSTB2R_EXTEVNT5 = 0x2000000;   // EXTEVNT5
    static constexpr uint32_t RSTB2R_EXTEVNT4 = 0x1000000;   // EXTEVNT4
    static constexpr uint32_t RSTB2R_EXTEVNT3 = 0x800000;    // EXTEVNT3
    static constexpr uint32_t RSTB2R_EXTEVNT2 = 0x400000;    // EXTEVNT2
    static constexpr uint32_t RSTB2R_EXTEVNT1 = 0x200000;    // EXTEVNT1
    static constexpr uint32_t RSTB2R_TIMEVNT9 = 0x100000;    // TIMEVNT9
    static constexpr uint32_t RSTB2R_TIMEVNT8 = 0x80000;     // TIMEVNT8
    static constexpr uint32_t RSTB2R_TIMEVNT7 = 0x40000;     // TIMEVNT7
    static constexpr uint32_t RSTB2R_TIMEVNT6 = 0x20000;     // TIMEVNT6
    static constexpr uint32_t RSTB2R_TIMEVNT5 = 0x10000;     // TIMEVNT5
    static constexpr uint32_t RSTB2R_TIMEVNT4 = 0x8000;      // TIMEVNT4
    static constexpr uint32_t RSTB2R_TIMEVNT3 = 0x4000;      // TIMEVNT3
    static constexpr uint32_t RSTB2R_TIMEVNT2 = 0x2000;      // TIMEVNT2
    static constexpr uint32_t RSTB2R_TIMEVNT1 = 0x1000;      // TIMEVNT1
    static constexpr uint32_t RSTB2R_MSTCMP4 = 0x800;        // MSTCMP4
    static constexpr uint32_t RSTB2R_MSTCMP3 = 0x400;        // MSTCMP3
    static constexpr uint32_t RSTB2R_MSTCMP2 = 0x200;        // MSTCMP2
    static constexpr uint32_t RSTB2R_MSTCMP1 = 0x100;        // MSTCMP1
    static constexpr uint32_t RSTB2R_MSTPER = 0x80;          // MSTPER
    static constexpr uint32_t RSTB2R_CMP4 = 0x40;            // CMP4
    static constexpr uint32_t RSTB2R_CMP3 = 0x20;            // CMP3
    static constexpr uint32_t RSTB2R_CMP2 = 0x10;            // CMP2
    static constexpr uint32_t RSTB2R_CMP1 = 0x8;             // CMP1
    static constexpr uint32_t RSTB2R_PER = 0x4;              // PER
    static constexpr uint32_t RSTB2R_RESYNC = 0x2;           // RESYNC
    static constexpr uint32_t RSTB2R_SRT = 0x1;              // SRT

    static constexpr uint32_t EEFBR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EEFBR1_EE5FLTR =            // External Event 5 filter
        bit_field_t<25, 0xf>::value<X>();
    static constexpr uint32_t EEFBR1_EE5LTCH = 0x1000000; // External Event 5 latch
    template<uint32_t X>
    static constexpr uint32_t EEFBR1_EE4FLTR =            // External Event 4 filter
        bit_field_t<19, 0xf>::value<X>();
    static constexpr uint32_t EEFBR1_EE4LTCH = 0x40000;   // External Event 4 latch
    template<uint32_t X>
    static constexpr uint32_t EEFBR1_EE3FLTR =            // External Event 3 filter
        bit_field_t<13, 0xf>::value<X>();
    static constexpr uint32_t EEFBR1_EE3LTCH = 0x1000;    // External Event 3 latch
    template<uint32_t X>
    static constexpr uint32_t EEFBR1_EE2FLTR =            // External Event 2 filter
        bit_field_t<7, 0xf>::value<X>();
    static constexpr uint32_t EEFBR1_EE2LTCH = 0x40;      // External Event 2 latch
    template<uint32_t X>
    static constexpr uint32_t EEFBR1_EE1FLTR =            // External Event 1 filter
        bit_field_t<1, 0xf>::value<X>();
    static constexpr uint32_t EEFBR1_EE1LTCH = 0x1;       // External Event 1 latch

    static constexpr uint32_t EEFBR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EEFBR2_EE10FLTR =            // External Event 10 filter
        bit_field_t<25, 0xf>::value<X>();
    static constexpr uint32_t EEFBR2_EE10LTCH = 0x1000000; // External Event 10 latch
    template<uint32_t X>
    static constexpr uint32_t EEFBR2_EE9FLTR =             // External Event 9 filter
        bit_field_t<19, 0xf>::value<X>();
    static constexpr uint32_t EEFBR2_EE9LTCH = 0x40000;    // External Event 9 latch
    template<uint32_t X>
    static constexpr uint32_t EEFBR2_EE8FLTR =             // External Event 8 filter
        bit_field_t<13, 0xf>::value<X>();
    static constexpr uint32_t EEFBR2_EE8LTCH = 0x1000;     // External Event 8 latch
    template<uint32_t X>
    static constexpr uint32_t EEFBR2_EE7FLTR =             // External Event 7 filter
        bit_field_t<7, 0xf>::value<X>();
    static constexpr uint32_t EEFBR2_EE7LTCH = 0x40;       // External Event 7 latch
    template<uint32_t X>
    static constexpr uint32_t EEFBR2_EE6FLTR =             // External Event 6 filter
        bit_field_t<1, 0xf>::value<X>();
    static constexpr uint32_t EEFBR2_EE6LTCH = 0x1;        // External Event 6 latch

    static constexpr uint32_t RSTBR_RESET_VALUE = 0x0;
    static constexpr uint32_t RSTBR_TIMFCPM2 = 0x80000000; // Timer F Compare 2
    static constexpr uint32_t RSTBR_TIMECMP4 = 0x40000000; // Timer E Compare 4
    static constexpr uint32_t RSTBR_TIMECMP2 = 0x20000000; // Timer E Compare 2
    static constexpr uint32_t RSTBR_TIMECMP1 = 0x10000000; // Timer E Compare 1
    static constexpr uint32_t RSTBR_TIMDCMP4 = 0x8000000;  // Timer D Compare 4
    static constexpr uint32_t RSTBR_TIMDCMP2 = 0x4000000;  // Timer D Compare 2
    static constexpr uint32_t RSTBR_TIMDCMP1 = 0x2000000;  // Timer D Compare 1
    static constexpr uint32_t RSTBR_TIMCCMP4 = 0x1000000;  // Timer C Compare 4
    static constexpr uint32_t RSTBR_TIMCCMP2 = 0x800000;   // Timer C Compare 2
    static constexpr uint32_t RSTBR_TIMCCMP1 = 0x400000;   // Timer C Compare 1
    static constexpr uint32_t RSTBR_TIMACMP4 = 0x200000;   // Timer A Compare 4
    static constexpr uint32_t RSTBR_TIMACMP2 = 0x100000;   // Timer A Compare 2
    static constexpr uint32_t RSTBR_TIMACMP1 = 0x80000;    // Timer A Compare 1
    static constexpr uint32_t RSTBR_EXTEVNT10 = 0x40000;   // External Event 10
    static constexpr uint32_t RSTBR_EXTEVNT9 = 0x20000;    // External Event 9
    static constexpr uint32_t RSTBR_EXTEVNT8 = 0x10000;    // External Event 8
    static constexpr uint32_t RSTBR_EXTEVNT7 = 0x8000;     // External Event 7
    static constexpr uint32_t RSTBR_EXTEVNT6 = 0x4000;     // External Event 6
    static constexpr uint32_t RSTBR_EXTEVNT5 = 0x2000;     // External Event 5
    static constexpr uint32_t RSTBR_EXTEVNT4 = 0x1000;     // External Event 4
    static constexpr uint32_t RSTBR_EXTEVNT3 = 0x800;      // External Event 3
    static constexpr uint32_t RSTBR_EXTEVNT2 = 0x400;      // External Event 2
    static constexpr uint32_t RSTBR_EXTEVNT1 = 0x200;      // External Event 1
    static constexpr uint32_t RSTBR_MSTCMP4 = 0x100;       // Master compare 4
    static constexpr uint32_t RSTBR_MSTCMP3 = 0x80;        // Master compare 3
    static constexpr uint32_t RSTBR_MSTCMP2 = 0x40;        // Master compare 2
    static constexpr uint32_t RSTBR_MSTCMP1 = 0x20;        // Master compare 1
    static constexpr uint32_t RSTBR_MSTPER = 0x10;         // Master timer Period
    static constexpr uint32_t RSTBR_CMP4 = 0x8;            // Timer A compare 4 reset
    static constexpr uint32_t RSTBR_CMP2 = 0x4;            // Timer A compare 2 reset
    static constexpr uint32_t RSTBR_UPDT = 0x2;            // Timer A Update reset
    static constexpr uint32_t RSTBR_TIMFCMP1 = 0x1;        // Timer A Update reset

    static constexpr uint32_t CHPBR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CHPBR_STRTPW =   // STRTPW
        bit_field_t<7, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CHPBR_CHPDTY =   // Timerx chopper duty cycle value
        bit_field_t<4, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CHPBR_CHPFRQ =   // Timerx carrier frequency value
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t CPT1BCR_RESET_VALUE = 0x0;
    static constexpr uint32_t CPT1BCR_TECMP2 = 0x80000000; // Timer E Compare 2
    static constexpr uint32_t CPT1BCR_TECMP1 = 0x40000000; // Timer E Compare 1
    static constexpr uint32_t CPT1BCR_TE1RST = 0x20000000; // Timer E output 1 Reset
    static constexpr uint32_t CPT1BCR_TE1SET = 0x10000000; // Timer E output 1 Set
    static constexpr uint32_t CPT1BCR_TDCMP2 = 0x8000000;  // Timer D Compare 2
    static constexpr uint32_t CPT1BCR_TDCMP1 = 0x4000000;  // Timer D Compare 1
    static constexpr uint32_t CPT1BCR_TD1RST = 0x2000000;  // Timer D output 1 Reset
    static constexpr uint32_t CPT1BCR_TD1SET = 0x1000000;  // Timer D output 1 Set
    static constexpr uint32_t CPT1BCR_TCCMP2 = 0x800000;   // Timer C Compare 2
    static constexpr uint32_t CPT1BCR_TCCMP1 = 0x400000;   // Timer C Compare 1
    static constexpr uint32_t CPT1BCR_TC1RST = 0x200000;   // Timer C output 1 Reset
    static constexpr uint32_t CPT1BCR_TC1SET = 0x100000;   // Timer C output 1 Set
    static constexpr uint32_t CPT1BCR_TFCMP2 = 0x80000;    // TFCMP2
    static constexpr uint32_t CPT1BCR_TFCMP1 = 0x40000;    // TFCMP1
    static constexpr uint32_t CPT1BCR_TF1RST = 0x20000;    // TF1RST
    static constexpr uint32_t CPT1BCR_TF1SET = 0x10000;    // TF1SET
    static constexpr uint32_t CPT1BCR_TACMP2 = 0x8000;     // Timer A Compare 2
    static constexpr uint32_t CPT1BCR_TACMP1 = 0x4000;     // Timer A Compare 1
    static constexpr uint32_t CPT1BCR_TA1RST = 0x2000;     // Timer A output 1 Reset
    static constexpr uint32_t CPT1BCR_TA1SET = 0x1000;     // Timer A output 1 Set
    static constexpr uint32_t CPT1BCR_EXEV10CPT = 0x800;   // External Event 10 Capture
    static constexpr uint32_t CPT1BCR_EXEV9CPT = 0x400;    // External Event 9 Capture
    static constexpr uint32_t CPT1BCR_EXEV8CPT = 0x200;    // External Event 8 Capture
    static constexpr uint32_t CPT1BCR_EXEV7CPT = 0x100;    // External Event 7 Capture
    static constexpr uint32_t CPT1BCR_EXEV6CPT = 0x80;     // External Event 6 Capture
    static constexpr uint32_t CPT1BCR_EXEV5CPT = 0x40;     // External Event 5 Capture
    static constexpr uint32_t CPT1BCR_EXEV4CPT = 0x20;     // External Event 4 Capture
    static constexpr uint32_t CPT1BCR_EXEV3CPT = 0x10;     // External Event 3 Capture
    static constexpr uint32_t CPT1BCR_EXEV2CPT = 0x8;      // External Event 2 Capture
    static constexpr uint32_t CPT1BCR_EXEV1CPT = 0x4;      // External Event 1 Capture
    static constexpr uint32_t CPT1BCR_UDPCPT = 0x2;        // Update Capture
    static constexpr uint32_t CPT1BCR_SWCPT = 0x1;         // Software Capture

    static constexpr uint32_t CPT2BCR_RESET_VALUE = 0x0;
    static constexpr uint32_t CPT2BCR_TECMP2 = 0x80000000; // Timer E Compare 2
    static constexpr uint32_t CPT2BCR_TECMP1 = 0x40000000; // Timer E Compare 1
    static constexpr uint32_t CPT2BCR_TE1RST = 0x20000000; // Timer E output 1 Reset
    static constexpr uint32_t CPT2BCR_TE1SET = 0x10000000; // Timer E output 1 Set
    static constexpr uint32_t CPT2BCR_TDCMP2 = 0x8000000;  // Timer D Compare 2
    static constexpr uint32_t CPT2BCR_TDCMP1 = 0x4000000;  // Timer D Compare 1
    static constexpr uint32_t CPT2BCR_TD1RST = 0x2000000;  // Timer D output 1 Reset
    static constexpr uint32_t CPT2BCR_TD1SET = 0x1000000;  // Timer D output 1 Set
    static constexpr uint32_t CPT2BCR_TCCMP2 = 0x800000;   // Timer C Compare 2
    static constexpr uint32_t CPT2BCR_TCCMP1 = 0x400000;   // Timer C Compare 1
    static constexpr uint32_t CPT2BCR_TC1RST = 0x200000;   // Timer C output 1 Reset
    static constexpr uint32_t CPT2BCR_TC1SET = 0x100000;   // Timer C output 1 Set
    static constexpr uint32_t CPT2BCR_TFCMP2 = 0x80000;    // TFCMP2
    static constexpr uint32_t CPT2BCR_TFCMP1 = 0x40000;    // TFCMP1
    static constexpr uint32_t CPT2BCR_TF1RST = 0x20000;    // TF1RST
    static constexpr uint32_t CPT2BCR_TF1SET = 0x10000;    // TF1SET
    static constexpr uint32_t CPT2BCR_TACMP2 = 0x8000;     // Timer A Compare 2
    static constexpr uint32_t CPT2BCR_TACMP1 = 0x4000;     // Timer A Compare 1
    static constexpr uint32_t CPT2BCR_TA1RST = 0x2000;     // Timer A output 1 Reset
    static constexpr uint32_t CPT2BCR_TA1SET = 0x1000;     // Timer A output 1 Set
    static constexpr uint32_t CPT2BCR_EXEV10CPT = 0x800;   // External Event 10 Capture
    static constexpr uint32_t CPT2BCR_EXEV9CPT = 0x400;    // External Event 9 Capture
    static constexpr uint32_t CPT2BCR_EXEV8CPT = 0x200;    // External Event 8 Capture
    static constexpr uint32_t CPT2BCR_EXEV7CPT = 0x100;    // External Event 7 Capture
    static constexpr uint32_t CPT2BCR_EXEV6CPT = 0x80;     // External Event 6 Capture
    static constexpr uint32_t CPT2BCR_EXEV5CPT = 0x40;     // External Event 5 Capture
    static constexpr uint32_t CPT2BCR_EXEV4CPT = 0x20;     // External Event 4 Capture
    static constexpr uint32_t CPT2BCR_EXEV3CPT = 0x10;     // External Event 3 Capture
    static constexpr uint32_t CPT2BCR_EXEV2CPT = 0x8;      // External Event 2 Capture
    static constexpr uint32_t CPT2BCR_EXEV1CPT = 0x4;      // External Event 1 Capture
    static constexpr uint32_t CPT2BCR_UDPCPT = 0x2;        // Update Capture
    static constexpr uint32_t CPT2BCR_SWCPT = 0x1;         // Software Capture

    static constexpr uint32_t OUTBR_RESET_VALUE = 0x0;
    static constexpr uint32_t OUTBR_DIDL2 = 0x800000; // Output 2 Deadtime upon burst mode Idle entry
    static constexpr uint32_t OUTBR_CHP2 = 0x400000;  // Output 2 Chopper enable
    template<uint32_t X>
    static constexpr uint32_t OUTBR_FAULT2 =          // Output 2 Fault state
        bit_field_t<20, 0x3>::value<X>();
    static constexpr uint32_t OUTBR_IDLES2 = 0x80000; // Output 2 Idle State
    static constexpr uint32_t OUTBR_IDLEM2 = 0x40000; // Output 2 Idle mode
    static constexpr uint32_t OUTBR_POL2 = 0x20000;   // Output 2 polarity
    static constexpr uint32_t OUTBR_BIAR = 0x4000;    // Balanced Idle Automatic Resume
    template<uint32_t X>
    static constexpr uint32_t OUTBR_DLYPRT =          // Delayed Protection
        bit_field_t<10, 0x7>::value<X>();
    static constexpr uint32_t OUTBR_DLYPRTEN = 0x200; // Delayed Protection Enable
    static constexpr uint32_t OUTBR_DTEN = 0x100;     // Deadtime enable
    static constexpr uint32_t OUTBR_DIDL1 = 0x80;     // Output 1 Deadtime upon burst mode Idle entry
    static constexpr uint32_t OUTBR_CHP1 = 0x40;      // Output 1 Chopper enable
    template<uint32_t X>
    static constexpr uint32_t OUTBR_FAULT1 =          // Output 1 Fault state
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t OUTBR_IDLES1 = 0x8;     // Output 1 Idle State
    static constexpr uint32_t OUTBR_IDLEM1 = 0x4;     // Output 1 Idle mode
    static constexpr uint32_t OUTBR_POL1 = 0x2;       // Output 1 polarity

    static constexpr uint32_t FLTBR_RESET_VALUE = 0x0;
    static constexpr uint32_t FLTBR_FLTLCK = 0x80000000; // Fault sources Lock
    static constexpr uint32_t FLTBR_FLT6EN = 0x20;       // Fault 6 enable
    static constexpr uint32_t FLTBR_FLT5EN = 0x10;       // Fault 5 enable
    static constexpr uint32_t FLTBR_FLT4EN = 0x8;        // Fault 4 enable
    static constexpr uint32_t FLTBR_FLT3EN = 0x4;        // Fault 3 enable
    static constexpr uint32_t FLTBR_FLT2EN = 0x2;        // Fault 2 enable
    static constexpr uint32_t FLTBR_FLT1EN = 0x1;        // Fault 1 enable

    static constexpr uint32_t TIMBCR2_RESET_VALUE = 0x0;
    static constexpr uint32_t TIMBCR2_TRGHLF = 0x100000; // Triggered-half mode
    static constexpr uint32_t TIMBCR2_GTCMP3 = 0x20000;  // Greater than Compare 3 PWM mode
    static constexpr uint32_t TIMBCR2_GTCMP1 = 0x10000;  // Greater than Compare 1 PWM mode
    template<uint32_t X>
    static constexpr uint32_t TIMBCR2_FEROM =            // Fault and Event Roll-Over Mode
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TIMBCR2_BMROM =            // Burst Mode Roll-Over Mode
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TIMBCR2_ADROM =            // ADC Roll-Over Mode
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TIMBCR2_OUTROM =           // Output Roll-Over Mode
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TIMBCR2_ROM =              // Roll-Over Mode
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t TIMBCR2_UDM = 0x10;        // Up-Down Mode
    static constexpr uint32_t TIMBCR2_DCDR = 0x4;        // Dual Channel DAC Reset trigger
    static constexpr uint32_t TIMBCR2_DCDS = 0x2;        // Dual Channel DAC Step trigger
    static constexpr uint32_t TIMBCR2_DCDE = 0x1;        // Dual Channel DAC trigger enable

    static constexpr uint32_t BEEFR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t BEEFR3_EEVACNT =       // External Event A counter
        bit_field_t<8, 0x3f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t BEEFR3_EEVASEL =       // External Event A Selection
        bit_field_t<4, 0xf>::value<X>();
    static constexpr uint32_t BEEFR3_EEVARSTM = 0x4; // External Event A Reset Mode
    static constexpr uint32_t BEEFR3_EEVACRES = 0x2; // External Event A Counter Reset
    static constexpr uint32_t BEEFR3_EEVACE = 0x1;   // External Event A Counter Enable
};


////
//
//      High Resolution Timer: TIMC
//
////

struct stm32g474xx_hrtim_timc_t
{
    volatile uint32_t TIMCCR;   // [read-write] Timerx Control Register
    volatile uint32_t TIMCISR;  // [read-only] Timerx Interrupt Status Register
    volatile uint32_t TIMCICR;  // [write-only] Timerx Interrupt Clear Register
    volatile uint32_t TIMCDIER; // [read-write] TIMxDIER
    volatile uint32_t CNTCR;    // [read-write] Timerx Counter Register
    volatile uint32_t PERCR;    // [read-write] Timerx Period Register
    volatile uint32_t REPCR;    // [read-write] Timerx Repetition Register
    volatile uint32_t CMP1CR;   // [read-write] Timerx Compare 1 Register
    volatile uint32_t CMP1CCR;  // [read-write] Timerx Compare 1 Compound Register
    volatile uint32_t CMP2CR;   // [read-write] Timerx Compare 2 Register
    volatile uint32_t CMP3CR;   // [read-write] Timerx Compare 3 Register
    volatile uint32_t CMP4CR;   // [read-write] Timerx Compare 4 Register
    volatile uint32_t CPT1CR;   // [read-only] Timerx Capture 1 Register
    volatile uint32_t CPT2CR;   // [read-only] Timerx Capture 2 Register
    volatile uint32_t DTCR;     // [read-write] Timerx Deadtime Register
    volatile uint32_t SETC1R;   // [read-write] Timerx Output1 Set Register
    volatile uint32_t RSTC1R;   // [read-write] Timerx Output1 Reset Register
    volatile uint32_t SETC2R;   // [read-write] Timerx Output2 Set Register
    volatile uint32_t RSTC2R;   // [read-write] Timerx Output2 Reset Register
    volatile uint32_t EEFCR1;   // [read-write] Timerx External Event Filtering Register 1
    volatile uint32_t EEFCR2;   // [read-write] Timerx External Event Filtering Register 2
    volatile uint32_t RSTCR;    // [read-write] TimerA Reset Register
    volatile uint32_t CHPCR;    // [read-write] Timerx Chopper Register
    volatile uint32_t CPT1CCR;  // [read-write] Timerx Capture 2 Control Register
    volatile uint32_t CPT2CCR;  // [read-write] CPT2xCR
    volatile uint32_t OUTCR;    // [read-write] Timerx Output Register
    volatile uint32_t FLTCR;    // [read-write] Timerx Fault Register
    volatile uint32_t TIMCCR2;  // [read-write] HRTIM Timerx Control Register 2
    volatile uint32_t CEEFR3;   // [read-write] HRTIM Timerx External Event Filtering Register 3

    static constexpr uint32_t TIMCCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TIMCCR_UPDGAT =           // Update Gating
        bit_field_t<28, 0xf>::value<X>();
    static constexpr uint32_t TIMCCR_PREEN = 0x8000000; // Preload enable
    template<uint32_t X>
    static constexpr uint32_t TIMCCR_DACSYNC =          // AC Synchronization
        bit_field_t<25, 0x3>::value<X>();
    static constexpr uint32_t TIMCCR_MSTU = 0x1000000;  // Master Timer update
    static constexpr uint32_t TIMCCR_TEU = 0x800000;    // TEU
    static constexpr uint32_t TIMCCR_TDU = 0x400000;    // TDU
    static constexpr uint32_t TIMCCR_TBU = 0x100000;    // TBU
    static constexpr uint32_t TIMCCR_TAU = 0x80000;     // TAU
    static constexpr uint32_t TIMCCR_TxRSTU = 0x40000;  // Timerx reset update
    static constexpr uint32_t TIMCCR_TxREPU = 0x20000;  // Timer x Repetition update
    static constexpr uint32_t TIMCCR_TFU = 0x10000;     // TFU
    template<uint32_t X>
    static constexpr uint32_t TIMCCR_DELCMP4 =          // Delayed CMP4 mode
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TIMCCR_DELCMP2 =          // Delayed CMP2 mode
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t TIMCCR_SYNCSTRTx = 0x800; // Synchronization Starts Timer x
    static constexpr uint32_t TIMCCR_SYNCRSTx = 0x400;  // Synchronization Resets Timer x
    static constexpr uint32_t TIMCCR_RSYNCU = 0x200;    // Re-Synchronized Update
    template<uint32_t X>
    static constexpr uint32_t TIMCCR_INTLVD =           // Interleaved mode
        bit_field_t<7, 0x3>::value<X>();
    static constexpr uint32_t TIMCCR_PSHPLL = 0x40;     // Push-Pull mode enable
    static constexpr uint32_t TIMCCR_HALF = 0x20;       // Half mode enable
    static constexpr uint32_t TIMCCR_RETRIG = 0x10;     // Re-triggerable mode
    static constexpr uint32_t TIMCCR_CONT = 0x8;        // Continuous mode
    template<uint32_t X>
    static constexpr uint32_t TIMCCR_CK_PSCx =          // HRTIM Timer x Clock prescaler
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t TIMCISR_RESET_VALUE = 0x0;
    static constexpr uint32_t TIMCISR_O2CPY = 0x200000;  // Output 2 Copy
    static constexpr uint32_t TIMCISR_O1CPY = 0x100000;  // Output 1 Copy
    static constexpr uint32_t TIMCISR_O2STAT = 0x80000;  // Output 2 State
    static constexpr uint32_t TIMCISR_O1STAT = 0x40000;  // Output 1 State
    static constexpr uint32_t TIMCISR_IPPSTAT = 0x20000; // Idle Push Pull Status
    static constexpr uint32_t TIMCISR_CPPSTAT = 0x10000; // Current Push Pull Status
    static constexpr uint32_t TIMCISR_DLYPRT = 0x4000;   // Delayed Protection Flag
    static constexpr uint32_t TIMCISR_RST = 0x2000;      // Reset Interrupt Flag
    static constexpr uint32_t TIMCISR_RSTx2 = 0x1000;    // Output 2 Reset Interrupt Flag
    static constexpr uint32_t TIMCISR_SETx2 = 0x800;     // Output 2 Set Interrupt Flag
    static constexpr uint32_t TIMCISR_RSTx1 = 0x400;     // Output 1 Reset Interrupt Flag
    static constexpr uint32_t TIMCISR_SETx1 = 0x200;     // Output 1 Set Interrupt Flag
    static constexpr uint32_t TIMCISR_CPT2 = 0x100;      // Capture2 Interrupt Flag
    static constexpr uint32_t TIMCISR_CPT1 = 0x80;       // Capture1 Interrupt Flag
    static constexpr uint32_t TIMCISR_UPD = 0x40;        // Update Interrupt Flag
    static constexpr uint32_t TIMCISR_REP = 0x10;        // Repetition Interrupt Flag
    static constexpr uint32_t TIMCISR_CMP4 = 0x8;        // Compare 4 Interrupt Flag
    static constexpr uint32_t TIMCISR_CMP3 = 0x4;        // Compare 3 Interrupt Flag
    static constexpr uint32_t TIMCISR_CMP2 = 0x2;        // Compare 2 Interrupt Flag
    static constexpr uint32_t TIMCISR_CMP1 = 0x1;        // Compare 1 Interrupt Flag

    static constexpr uint32_t TIMCICR_RESET_VALUE = 0x0;
    static constexpr uint32_t TIMCICR_DLYPRTC = 0x4000; // Delayed Protection Flag Clear
    static constexpr uint32_t TIMCICR_RSTC = 0x2000;    // Reset Interrupt flag Clear
    static constexpr uint32_t TIMCICR_RSTx2C = 0x1000;  // Output 2 Reset flag Clear
    static constexpr uint32_t TIMCICR_SET2xC = 0x800;   // Output 2 Set flag Clear
    static constexpr uint32_t TIMCICR_RSTx1C = 0x400;   // Output 1 Reset flag Clear
    static constexpr uint32_t TIMCICR_SET1xC = 0x200;   // Output 1 Set flag Clear
    static constexpr uint32_t TIMCICR_CPT2C = 0x100;    // Capture2 Interrupt flag Clear
    static constexpr uint32_t TIMCICR_CPT1C = 0x80;     // Capture1 Interrupt flag Clear
    static constexpr uint32_t TIMCICR_UPDC = 0x40;      // Update Interrupt flag Clear
    static constexpr uint32_t TIMCICR_REPC = 0x10;      // Repetition Interrupt flag Clear
    static constexpr uint32_t TIMCICR_CMP4C = 0x8;      // Compare 4 Interrupt flag Clear
    static constexpr uint32_t TIMCICR_CMP3C = 0x4;      // Compare 3 Interrupt flag Clear
    static constexpr uint32_t TIMCICR_CMP2C = 0x2;      // Compare 2 Interrupt flag Clear
    static constexpr uint32_t TIMCICR_CMP1C = 0x1;      // Compare 1 Interrupt flag Clear

    static constexpr uint32_t TIMCDIER_RESET_VALUE = 0x0;
    static constexpr uint32_t TIMCDIER_DLYPRTDE = 0x40000000; // DLYPRTDE
    static constexpr uint32_t TIMCDIER_RSTDE = 0x20000000;    // RSTDE
    static constexpr uint32_t TIMCDIER_RSTx2DE = 0x10000000;  // RSTx2DE
    static constexpr uint32_t TIMCDIER_SETx2DE = 0x8000000;   // SETx2DE
    static constexpr uint32_t TIMCDIER_RSTx1DE = 0x4000000;   // RSTx1DE
    static constexpr uint32_t TIMCDIER_SET1xDE = 0x2000000;   // SET1xDE
    static constexpr uint32_t TIMCDIER_CPT2DE = 0x1000000;    // CPT2DE
    static constexpr uint32_t TIMCDIER_CPT1DE = 0x800000;     // CPT1DE
    static constexpr uint32_t TIMCDIER_UPDDE = 0x400000;      // UPDDE
    static constexpr uint32_t TIMCDIER_REPDE = 0x100000;      // REPDE
    static constexpr uint32_t TIMCDIER_CMP4DE = 0x80000;      // CMP4DE
    static constexpr uint32_t TIMCDIER_CMP3DE = 0x40000;      // CMP3DE
    static constexpr uint32_t TIMCDIER_CMP2DE = 0x20000;      // CMP2DE
    static constexpr uint32_t TIMCDIER_CMP1DE = 0x10000;      // CMP1DE
    static constexpr uint32_t TIMCDIER_DLYPRTIE = 0x4000;     // DLYPRTIE
    static constexpr uint32_t TIMCDIER_RSTIE = 0x2000;        // RSTIE
    static constexpr uint32_t TIMCDIER_RSTx2IE = 0x1000;      // RSTx2IE
    static constexpr uint32_t TIMCDIER_SETx2IE = 0x800;       // SETx2IE
    static constexpr uint32_t TIMCDIER_RSTx1IE = 0x400;       // RSTx1IE
    static constexpr uint32_t TIMCDIER_SET1xIE = 0x200;       // SET1xIE
    static constexpr uint32_t TIMCDIER_CPT2IE = 0x100;        // CPT2IE
    static constexpr uint32_t TIMCDIER_CPT1IE = 0x80;         // CPT1IE
    static constexpr uint32_t TIMCDIER_UPDIE = 0x40;          // UPDIE
    static constexpr uint32_t TIMCDIER_REPIE = 0x10;          // REPIE
    static constexpr uint32_t TIMCDIER_CMP4IE = 0x8;          // CMP4IE
    static constexpr uint32_t TIMCDIER_CMP3IE = 0x4;          // CMP3IE
    static constexpr uint32_t TIMCDIER_CMP2IE = 0x2;          // CMP2IE
    static constexpr uint32_t TIMCDIER_CMP1IE = 0x1;          // CMP1IE

    static constexpr uint32_t CNTCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CNTCR_CNTx =   // Timerx Counter value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t PERCR_RESET_VALUE = 0xffff;
    template<uint32_t X>
    static constexpr uint32_t PERCR_PERx =   // Timerx Period value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t REPCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t REPCR_REPx =   // Timerx Repetition counter value
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t CMP1CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CMP1CR_CMP1x =   // Timerx Compare 1 value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CMP1CCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CMP1CCR_REPx =    // Timerx Repetition value (aliased from HRTIM_REPx register)
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CMP1CCR_CMP1x =   // Timerx Compare 1 value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CMP2CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CMP2CR_CMP2x =   // Timerx Compare 2 value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CMP3CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CMP3CR_CMP3x =   // Timerx Compare 3 value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CMP4CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CMP4CR_CMP4x =   // Timerx Compare 4 value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CPT1CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CPT1CR_CPT1x =        // Timerx Capture 1 value
        bit_field_t<0, 0xffff>::value<X>();
    static constexpr uint32_t CPT1CR_DIR = 0x10000; // Timerx Capture 1 Direction status

    static constexpr uint32_t CPT2CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CPT2CR_CPT2x =        // Timerx Capture 2 value
        bit_field_t<0, 0xffff>::value<X>();
    static constexpr uint32_t CPT2CR_DIR = 0x10000; // Timerx Capture 1 Direction status

    static constexpr uint32_t DTCR_RESET_VALUE = 0x0;
    static constexpr uint32_t DTCR_DTFLKx = 0x80000000;  // Deadtime Falling Lock
    static constexpr uint32_t DTCR_DTFSLKx = 0x40000000; // Deadtime Falling Sign Lock
    static constexpr uint32_t DTCR_SDTFx = 0x2000000;    // Sign Deadtime Falling value
    template<uint32_t X>
    static constexpr uint32_t DTCR_DTFx =                // Deadtime Falling value
        bit_field_t<16, 0x1ff>::value<X>();
    static constexpr uint32_t DTCR_DTRLKx = 0x8000;      // Deadtime Rising Lock
    static constexpr uint32_t DTCR_DTRSLKx = 0x4000;     // Deadtime Rising Sign Lock
    template<uint32_t X>
    static constexpr uint32_t DTCR_DTPRSC =              // Deadtime Prescaler
        bit_field_t<10, 0x7>::value<X>();
    static constexpr uint32_t DTCR_SDTRx = 0x200;        // Sign Deadtime Rising value
    template<uint32_t X>
    static constexpr uint32_t DTCR_DTRx =                // Deadtime Rising value
        bit_field_t<0, 0x1ff>::value<X>();

    static constexpr uint32_t SETC1R_RESET_VALUE = 0x0;
    static constexpr uint32_t SETC1R_UPDATE = 0x80000000;    // Registers update (transfer preload to active)
    static constexpr uint32_t SETC1R_EXTEVNT10 = 0x40000000; // External Event 10
    static constexpr uint32_t SETC1R_EXTEVNT9 = 0x20000000;  // External Event 9
    static constexpr uint32_t SETC1R_EXTEVNT8 = 0x10000000;  // External Event 8
    static constexpr uint32_t SETC1R_EXTEVNT7 = 0x8000000;   // External Event 7
    static constexpr uint32_t SETC1R_EXTEVNT6 = 0x4000000;   // External Event 6
    static constexpr uint32_t SETC1R_EXTEVNT5 = 0x2000000;   // External Event 5
    static constexpr uint32_t SETC1R_EXTEVNT4 = 0x1000000;   // External Event 4
    static constexpr uint32_t SETC1R_EXTEVNT3 = 0x800000;    // External Event 3
    static constexpr uint32_t SETC1R_EXTEVNT2 = 0x400000;    // External Event 2
    static constexpr uint32_t SETC1R_EXTEVNT1 = 0x200000;    // External Event 1
    static constexpr uint32_t SETC1R_TIMEVNT9 = 0x100000;    // Timer Event 9
    static constexpr uint32_t SETC1R_TIMEVNT8 = 0x80000;     // Timer Event 8
    static constexpr uint32_t SETC1R_TIMEVNT7 = 0x40000;     // Timer Event 7
    static constexpr uint32_t SETC1R_TIMEVNT6 = 0x20000;     // Timer Event 6
    static constexpr uint32_t SETC1R_TIMEVNT5 = 0x10000;     // Timer Event 5
    static constexpr uint32_t SETC1R_TIMEVNT4 = 0x8000;      // Timer Event 4
    static constexpr uint32_t SETC1R_TIMEVNT3 = 0x4000;      // Timer Event 3
    static constexpr uint32_t SETC1R_TIMEVNT2 = 0x2000;      // Timer Event 2
    static constexpr uint32_t SETC1R_TIMEVNT1 = 0x1000;      // Timer Event 1
    static constexpr uint32_t SETC1R_MSTCMP4 = 0x800;        // Master Compare 4
    static constexpr uint32_t SETC1R_MSTCMP3 = 0x400;        // Master Compare 3
    static constexpr uint32_t SETC1R_MSTCMP2 = 0x200;        // Master Compare 2
    static constexpr uint32_t SETC1R_MSTCMP1 = 0x100;        // Master Compare 1
    static constexpr uint32_t SETC1R_MSTPER = 0x80;          // Master Period
    static constexpr uint32_t SETC1R_CMP4 = 0x40;            // Timer A compare 4
    static constexpr uint32_t SETC1R_CMP3 = 0x20;            // Timer A compare 3
    static constexpr uint32_t SETC1R_CMP2 = 0x10;            // Timer A compare 2
    static constexpr uint32_t SETC1R_CMP1 = 0x8;             // Timer A compare 1
    static constexpr uint32_t SETC1R_PER = 0x4;              // Timer A Period
    static constexpr uint32_t SETC1R_RESYNC = 0x2;           // Timer A resynchronizaton
    static constexpr uint32_t SETC1R_SST = 0x1;              // Software Set trigger

    static constexpr uint32_t RSTC1R_RESET_VALUE = 0x0;
    static constexpr uint32_t RSTC1R_UPDATE = 0x80000000;    // UPDATE
    static constexpr uint32_t RSTC1R_EXTEVNT10 = 0x40000000; // EXTEVNT10
    static constexpr uint32_t RSTC1R_EXTEVNT9 = 0x20000000;  // EXTEVNT9
    static constexpr uint32_t RSTC1R_EXTEVNT8 = 0x10000000;  // EXTEVNT8
    static constexpr uint32_t RSTC1R_EXTEVNT7 = 0x8000000;   // EXTEVNT7
    static constexpr uint32_t RSTC1R_EXTEVNT6 = 0x4000000;   // EXTEVNT6
    static constexpr uint32_t RSTC1R_EXTEVNT5 = 0x2000000;   // EXTEVNT5
    static constexpr uint32_t RSTC1R_EXTEVNT4 = 0x1000000;   // EXTEVNT4
    static constexpr uint32_t RSTC1R_EXTEVNT3 = 0x800000;    // EXTEVNT3
    static constexpr uint32_t RSTC1R_EXTEVNT2 = 0x400000;    // EXTEVNT2
    static constexpr uint32_t RSTC1R_EXTEVNT1 = 0x200000;    // EXTEVNT1
    static constexpr uint32_t RSTC1R_TIMEVNT9 = 0x100000;    // TIMEVNT9
    static constexpr uint32_t RSTC1R_TIMEVNT8 = 0x80000;     // TIMEVNT8
    static constexpr uint32_t RSTC1R_TIMEVNT7 = 0x40000;     // TIMEVNT7
    static constexpr uint32_t RSTC1R_TIMEVNT6 = 0x20000;     // TIMEVNT6
    static constexpr uint32_t RSTC1R_TIMEVNT5 = 0x10000;     // TIMEVNT5
    static constexpr uint32_t RSTC1R_TIMEVNT4 = 0x8000;      // TIMEVNT4
    static constexpr uint32_t RSTC1R_TIMEVNT3 = 0x4000;      // TIMEVNT3
    static constexpr uint32_t RSTC1R_TIMEVNT2 = 0x2000;      // TIMEVNT2
    static constexpr uint32_t RSTC1R_TIMEVNT1 = 0x1000;      // TIMEVNT1
    static constexpr uint32_t RSTC1R_MSTCMP4 = 0x800;        // MSTCMP4
    static constexpr uint32_t RSTC1R_MSTCMP3 = 0x400;        // MSTCMP3
    static constexpr uint32_t RSTC1R_MSTCMP2 = 0x200;        // MSTCMP2
    static constexpr uint32_t RSTC1R_MSTCMP1 = 0x100;        // MSTCMP1
    static constexpr uint32_t RSTC1R_MSTPER = 0x80;          // MSTPER
    static constexpr uint32_t RSTC1R_CMP4 = 0x40;            // CMP4
    static constexpr uint32_t RSTC1R_CMP3 = 0x20;            // CMP3
    static constexpr uint32_t RSTC1R_CMP2 = 0x10;            // CMP2
    static constexpr uint32_t RSTC1R_CMP1 = 0x8;             // CMP1
    static constexpr uint32_t RSTC1R_PER = 0x4;              // PER
    static constexpr uint32_t RSTC1R_RESYNC = 0x2;           // RESYNC
    static constexpr uint32_t RSTC1R_SRT = 0x1;              // SRT

    static constexpr uint32_t SETC2R_RESET_VALUE = 0x0;
    static constexpr uint32_t SETC2R_UPDATE = 0x80000000;    // UPDATE
    static constexpr uint32_t SETC2R_EXTEVNT10 = 0x40000000; // EXTEVNT10
    static constexpr uint32_t SETC2R_EXTEVNT9 = 0x20000000;  // EXTEVNT9
    static constexpr uint32_t SETC2R_EXTEVNT8 = 0x10000000;  // EXTEVNT8
    static constexpr uint32_t SETC2R_EXTEVNT7 = 0x8000000;   // EXTEVNT7
    static constexpr uint32_t SETC2R_EXTEVNT6 = 0x4000000;   // EXTEVNT6
    static constexpr uint32_t SETC2R_EXTEVNT5 = 0x2000000;   // EXTEVNT5
    static constexpr uint32_t SETC2R_EXTEVNT4 = 0x1000000;   // EXTEVNT4
    static constexpr uint32_t SETC2R_EXTEVNT3 = 0x800000;    // EXTEVNT3
    static constexpr uint32_t SETC2R_EXTEVNT2 = 0x400000;    // EXTEVNT2
    static constexpr uint32_t SETC2R_EXTEVNT1 = 0x200000;    // EXTEVNT1
    static constexpr uint32_t SETC2R_TIMEVNT9 = 0x100000;    // TIMEVNT9
    static constexpr uint32_t SETC2R_TIMEVNT8 = 0x80000;     // TIMEVNT8
    static constexpr uint32_t SETC2R_TIMEVNT7 = 0x40000;     // TIMEVNT7
    static constexpr uint32_t SETC2R_TIMEVNT6 = 0x20000;     // TIMEVNT6
    static constexpr uint32_t SETC2R_TIMEVNT5 = 0x10000;     // TIMEVNT5
    static constexpr uint32_t SETC2R_TIMEVNT4 = 0x8000;      // TIMEVNT4
    static constexpr uint32_t SETC2R_TIMEVNT3 = 0x4000;      // TIMEVNT3
    static constexpr uint32_t SETC2R_TIMEVNT2 = 0x2000;      // TIMEVNT2
    static constexpr uint32_t SETC2R_TIMEVNT1 = 0x1000;      // TIMEVNT1
    static constexpr uint32_t SETC2R_MSTCMP4 = 0x800;        // MSTCMP4
    static constexpr uint32_t SETC2R_MSTCMP3 = 0x400;        // MSTCMP3
    static constexpr uint32_t SETC2R_MSTCMP2 = 0x200;        // MSTCMP2
    static constexpr uint32_t SETC2R_MSTCMP1 = 0x100;        // MSTCMP1
    static constexpr uint32_t SETC2R_MSTPER = 0x80;          // MSTPER
    static constexpr uint32_t SETC2R_CMP4 = 0x40;            // CMP4
    static constexpr uint32_t SETC2R_CMP3 = 0x20;            // CMP3
    static constexpr uint32_t SETC2R_CMP2 = 0x10;            // CMP2
    static constexpr uint32_t SETC2R_CMP1 = 0x8;             // CMP1
    static constexpr uint32_t SETC2R_PER = 0x4;              // PER
    static constexpr uint32_t SETC2R_RESYNC = 0x2;           // RESYNC
    static constexpr uint32_t SETC2R_SST = 0x1;              // SST

    static constexpr uint32_t RSTC2R_RESET_VALUE = 0x0;
    static constexpr uint32_t RSTC2R_UPDATE = 0x80000000;    // UPDATE
    static constexpr uint32_t RSTC2R_EXTEVNT10 = 0x40000000; // EXTEVNT10
    static constexpr uint32_t RSTC2R_EXTEVNT9 = 0x20000000;  // EXTEVNT9
    static constexpr uint32_t RSTC2R_EXTEVNT8 = 0x10000000;  // EXTEVNT8
    static constexpr uint32_t RSTC2R_EXTEVNT7 = 0x8000000;   // EXTEVNT7
    static constexpr uint32_t RSTC2R_EXTEVNT6 = 0x4000000;   // EXTEVNT6
    static constexpr uint32_t RSTC2R_EXTEVNT5 = 0x2000000;   // EXTEVNT5
    static constexpr uint32_t RSTC2R_EXTEVNT4 = 0x1000000;   // EXTEVNT4
    static constexpr uint32_t RSTC2R_EXTEVNT3 = 0x800000;    // EXTEVNT3
    static constexpr uint32_t RSTC2R_EXTEVNT2 = 0x400000;    // EXTEVNT2
    static constexpr uint32_t RSTC2R_EXTEVNT1 = 0x200000;    // EXTEVNT1
    static constexpr uint32_t RSTC2R_TIMEVNT9 = 0x100000;    // TIMEVNT9
    static constexpr uint32_t RSTC2R_TIMEVNT8 = 0x80000;     // TIMEVNT8
    static constexpr uint32_t RSTC2R_TIMEVNT7 = 0x40000;     // TIMEVNT7
    static constexpr uint32_t RSTC2R_TIMEVNT6 = 0x20000;     // TIMEVNT6
    static constexpr uint32_t RSTC2R_TIMEVNT5 = 0x10000;     // TIMEVNT5
    static constexpr uint32_t RSTC2R_TIMEVNT4 = 0x8000;      // TIMEVNT4
    static constexpr uint32_t RSTC2R_TIMEVNT3 = 0x4000;      // TIMEVNT3
    static constexpr uint32_t RSTC2R_TIMEVNT2 = 0x2000;      // TIMEVNT2
    static constexpr uint32_t RSTC2R_TIMEVNT1 = 0x1000;      // TIMEVNT1
    static constexpr uint32_t RSTC2R_MSTCMP4 = 0x800;        // MSTCMP4
    static constexpr uint32_t RSTC2R_MSTCMP3 = 0x400;        // MSTCMP3
    static constexpr uint32_t RSTC2R_MSTCMP2 = 0x200;        // MSTCMP2
    static constexpr uint32_t RSTC2R_MSTCMP1 = 0x100;        // MSTCMP1
    static constexpr uint32_t RSTC2R_MSTPER = 0x80;          // MSTPER
    static constexpr uint32_t RSTC2R_CMP4 = 0x40;            // CMP4
    static constexpr uint32_t RSTC2R_CMP3 = 0x20;            // CMP3
    static constexpr uint32_t RSTC2R_CMP2 = 0x10;            // CMP2
    static constexpr uint32_t RSTC2R_CMP1 = 0x8;             // CMP1
    static constexpr uint32_t RSTC2R_PER = 0x4;              // PER
    static constexpr uint32_t RSTC2R_RESYNC = 0x2;           // RESYNC
    static constexpr uint32_t RSTC2R_SRT = 0x1;              // SRT

    static constexpr uint32_t EEFCR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EEFCR1_EE5FLTR =            // External Event 5 filter
        bit_field_t<25, 0xf>::value<X>();
    static constexpr uint32_t EEFCR1_EE5LTCH = 0x1000000; // External Event 5 latch
    template<uint32_t X>
    static constexpr uint32_t EEFCR1_EE4FLTR =            // External Event 4 filter
        bit_field_t<19, 0xf>::value<X>();
    static constexpr uint32_t EEFCR1_EE4LTCH = 0x40000;   // External Event 4 latch
    template<uint32_t X>
    static constexpr uint32_t EEFCR1_EE3FLTR =            // External Event 3 filter
        bit_field_t<13, 0xf>::value<X>();
    static constexpr uint32_t EEFCR1_EE3LTCH = 0x1000;    // External Event 3 latch
    template<uint32_t X>
    static constexpr uint32_t EEFCR1_EE2FLTR =            // External Event 2 filter
        bit_field_t<7, 0xf>::value<X>();
    static constexpr uint32_t EEFCR1_EE2LTCH = 0x40;      // External Event 2 latch
    template<uint32_t X>
    static constexpr uint32_t EEFCR1_EE1FLTR =            // External Event 1 filter
        bit_field_t<1, 0xf>::value<X>();
    static constexpr uint32_t EEFCR1_EE1LTCH = 0x1;       // External Event 1 latch

    static constexpr uint32_t EEFCR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EEFCR2_EE10FLTR =            // External Event 10 filter
        bit_field_t<25, 0xf>::value<X>();
    static constexpr uint32_t EEFCR2_EE10LTCH = 0x1000000; // External Event 10 latch
    template<uint32_t X>
    static constexpr uint32_t EEFCR2_EE9FLTR =             // External Event 9 filter
        bit_field_t<19, 0xf>::value<X>();
    static constexpr uint32_t EEFCR2_EE9LTCH = 0x40000;    // External Event 9 latch
    template<uint32_t X>
    static constexpr uint32_t EEFCR2_EE8FLTR =             // External Event 8 filter
        bit_field_t<13, 0xf>::value<X>();
    static constexpr uint32_t EEFCR2_EE8LTCH = 0x1000;     // External Event 8 latch
    template<uint32_t X>
    static constexpr uint32_t EEFCR2_EE7FLTR =             // External Event 7 filter
        bit_field_t<7, 0xf>::value<X>();
    static constexpr uint32_t EEFCR2_EE7LTCH = 0x40;       // External Event 7 latch
    template<uint32_t X>
    static constexpr uint32_t EEFCR2_EE6FLTR =             // External Event 6 filter
        bit_field_t<1, 0xf>::value<X>();
    static constexpr uint32_t EEFCR2_EE6LTCH = 0x1;        // External Event 6 latch

    static constexpr uint32_t RSTCR_RESET_VALUE = 0x0;
    static constexpr uint32_t RSTCR_TIMFCPM2 = 0x80000000; // Timer F Compare 2
    static constexpr uint32_t RSTCR_TIMECMP4 = 0x40000000; // Timer E Compare 4
    static constexpr uint32_t RSTCR_TIMECMP2 = 0x20000000; // Timer E Compare 2
    static constexpr uint32_t RSTCR_TIMECMP1 = 0x10000000; // Timer E Compare 1
    static constexpr uint32_t RSTCR_TIMDCMP4 = 0x8000000;  // Timer D Compare 4
    static constexpr uint32_t RSTCR_TIMDCMP2 = 0x4000000;  // Timer D Compare 2
    static constexpr uint32_t RSTCR_TIMDCMP1 = 0x2000000;  // Timer D Compare 1
    static constexpr uint32_t RSTCR_TIMBCMP4 = 0x1000000;  // Timer B Compare 4
    static constexpr uint32_t RSTCR_TIMBCMP2 = 0x800000;   // Timer B Compare 2
    static constexpr uint32_t RSTCR_TIMBCMP1 = 0x400000;   // Timer B Compare 1
    static constexpr uint32_t RSTCR_TIMACMP4 = 0x200000;   // Timer A Compare 4
    static constexpr uint32_t RSTCR_TIMACMP2 = 0x100000;   // Timer A Compare 2
    static constexpr uint32_t RSTCR_TIMACMP1 = 0x80000;    // Timer A Compare 1
    static constexpr uint32_t RSTCR_EXTEVNT10 = 0x40000;   // External Event 10
    static constexpr uint32_t RSTCR_EXTEVNT9 = 0x20000;    // External Event 9
    static constexpr uint32_t RSTCR_EXTEVNT8 = 0x10000;    // External Event 8
    static constexpr uint32_t RSTCR_EXTEVNT7 = 0x8000;     // External Event 7
    static constexpr uint32_t RSTCR_EXTEVNT6 = 0x4000;     // External Event 6
    static constexpr uint32_t RSTCR_EXTEVNT5 = 0x2000;     // External Event 5
    static constexpr uint32_t RSTCR_EXTEVNT4 = 0x1000;     // External Event 4
    static constexpr uint32_t RSTCR_EXTEVNT3 = 0x800;      // External Event 3
    static constexpr uint32_t RSTCR_EXTEVNT2 = 0x400;      // External Event 2
    static constexpr uint32_t RSTCR_EXTEVNT1 = 0x200;      // External Event 1
    static constexpr uint32_t RSTCR_MSTCMP4 = 0x100;       // Master compare 4
    static constexpr uint32_t RSTCR_MSTCMP3 = 0x80;        // Master compare 3
    static constexpr uint32_t RSTCR_MSTCMP2 = 0x40;        // Master compare 2
    static constexpr uint32_t RSTCR_MSTCMP1 = 0x20;        // Master compare 1
    static constexpr uint32_t RSTCR_MSTPER = 0x10;         // Master timer Period
    static constexpr uint32_t RSTCR_CMP4 = 0x8;            // Timer A compare 4 reset
    static constexpr uint32_t RSTCR_CMP2 = 0x4;            // Timer A compare 2 reset
    static constexpr uint32_t RSTCR_UPDT = 0x2;            // Timer A Update reset
    static constexpr uint32_t RSTCR_TIMFCMP1 = 0x1;        // Timer A Update reset

    static constexpr uint32_t CHPCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CHPCR_STRTPW =   // STRTPW
        bit_field_t<7, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CHPCR_CHPDTY =   // Timerx chopper duty cycle value
        bit_field_t<4, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CHPCR_CHPFRQ =   // Timerx carrier frequency value
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t CPT1CCR_RESET_VALUE = 0x0;
    static constexpr uint32_t CPT1CCR_TECMP2 = 0x80000000; // Timer E Compare 2
    static constexpr uint32_t CPT1CCR_TECMP1 = 0x40000000; // Timer E Compare 1
    static constexpr uint32_t CPT1CCR_TE1RST = 0x20000000; // Timer E output 1 Reset
    static constexpr uint32_t CPT1CCR_TE1SET = 0x10000000; // Timer E output 1 Set
    static constexpr uint32_t CPT1CCR_TDCMP2 = 0x8000000;  // Timer D Compare 2
    static constexpr uint32_t CPT1CCR_TDCMP1 = 0x4000000;  // Timer D Compare 1
    static constexpr uint32_t CPT1CCR_TD1RST = 0x2000000;  // Timer D output 1 Reset
    static constexpr uint32_t CPT1CCR_TD1SET = 0x1000000;  // Timer D output 1 Set
    static constexpr uint32_t CPT1CCR_TFCMP2 = 0x800000;   // TFCMP2
    static constexpr uint32_t CPT1CCR_TFCMP1 = 0x400000;   // TFCMP1
    static constexpr uint32_t CPT1CCR_TF1RST = 0x200000;   // TF1RST
    static constexpr uint32_t CPT1CCR_TF1SET = 0x100000;   // TF1SET
    static constexpr uint32_t CPT1CCR_TBCMP2 = 0x80000;    // Timer B Compare 2
    static constexpr uint32_t CPT1CCR_TBCMP1 = 0x40000;    // Timer B Compare 1
    static constexpr uint32_t CPT1CCR_TB1RST = 0x20000;    // Timer B output 1 Reset
    static constexpr uint32_t CPT1CCR_TB1SET = 0x10000;    // Timer B output 1 Set
    static constexpr uint32_t CPT1CCR_TACMP2 = 0x8000;     // Timer A Compare 2
    static constexpr uint32_t CPT1CCR_TACMP1 = 0x4000;     // Timer A Compare 1
    static constexpr uint32_t CPT1CCR_TA1RST = 0x2000;     // Timer A output 1 Reset
    static constexpr uint32_t CPT1CCR_TA1SET = 0x1000;     // Timer A output 1 Set
    static constexpr uint32_t CPT1CCR_EXEV10CPT = 0x800;   // External Event 10 Capture
    static constexpr uint32_t CPT1CCR_EXEV9CPT = 0x400;    // External Event 9 Capture
    static constexpr uint32_t CPT1CCR_EXEV8CPT = 0x200;    // External Event 8 Capture
    static constexpr uint32_t CPT1CCR_EXEV7CPT = 0x100;    // External Event 7 Capture
    static constexpr uint32_t CPT1CCR_EXEV6CPT = 0x80;     // External Event 6 Capture
    static constexpr uint32_t CPT1CCR_EXEV5CPT = 0x40;     // External Event 5 Capture
    static constexpr uint32_t CPT1CCR_EXEV4CPT = 0x20;     // External Event 4 Capture
    static constexpr uint32_t CPT1CCR_EXEV3CPT = 0x10;     // External Event 3 Capture
    static constexpr uint32_t CPT1CCR_EXEV2CPT = 0x8;      // External Event 2 Capture
    static constexpr uint32_t CPT1CCR_EXEV1CPT = 0x4;      // External Event 1 Capture
    static constexpr uint32_t CPT1CCR_UDPCPT = 0x2;        // Update Capture
    static constexpr uint32_t CPT1CCR_SWCPT = 0x1;         // Software Capture

    static constexpr uint32_t CPT2CCR_RESET_VALUE = 0x0;
    static constexpr uint32_t CPT2CCR_TECMP2 = 0x80000000; // Timer E Compare 2
    static constexpr uint32_t CPT2CCR_TECMP1 = 0x40000000; // Timer E Compare 1
    static constexpr uint32_t CPT2CCR_TE1RST = 0x20000000; // Timer E output 1 Reset
    static constexpr uint32_t CPT2CCR_TE1SET = 0x10000000; // Timer E output 1 Set
    static constexpr uint32_t CPT2CCR_TDCMP2 = 0x8000000;  // Timer D Compare 2
    static constexpr uint32_t CPT2CCR_TDCMP1 = 0x4000000;  // Timer D Compare 1
    static constexpr uint32_t CPT2CCR_TD1RST = 0x2000000;  // Timer D output 1 Reset
    static constexpr uint32_t CPT2CCR_TD1SET = 0x1000000;  // Timer D output 1 Set
    static constexpr uint32_t CPT2CCR_TF1CMP2 = 0x800000;  // TF1CMP2
    static constexpr uint32_t CPT2CCR_TF1CMP1 = 0x400000;  // TF1CMP1
    static constexpr uint32_t CPT2CCR_TF1RST = 0x200000;   // TF1RST
    static constexpr uint32_t CPT2CCR_TF1SET = 0x100000;   // TF1SET
    static constexpr uint32_t CPT2CCR_TBCMP2 = 0x80000;    // Timer B Compare 2
    static constexpr uint32_t CPT2CCR_TBCMP1 = 0x40000;    // Timer B Compare 1
    static constexpr uint32_t CPT2CCR_TB1RST = 0x20000;    // Timer B output 1 Reset
    static constexpr uint32_t CPT2CCR_TB1SET = 0x10000;    // Timer B output 1 Set
    static constexpr uint32_t CPT2CCR_TACMP2 = 0x8000;     // Timer A Compare 2
    static constexpr uint32_t CPT2CCR_TACMP1 = 0x4000;     // Timer A Compare 1
    static constexpr uint32_t CPT2CCR_TA1RST = 0x2000;     // Timer A output 1 Reset
    static constexpr uint32_t CPT2CCR_TA1SET = 0x1000;     // Timer A output 1 Set
    static constexpr uint32_t CPT2CCR_EXEV10CPT = 0x800;   // External Event 10 Capture
    static constexpr uint32_t CPT2CCR_EXEV9CPT = 0x400;    // External Event 9 Capture
    static constexpr uint32_t CPT2CCR_EXEV8CPT = 0x200;    // External Event 8 Capture
    static constexpr uint32_t CPT2CCR_EXEV7CPT = 0x100;    // External Event 7 Capture
    static constexpr uint32_t CPT2CCR_EXEV6CPT = 0x80;     // External Event 6 Capture
    static constexpr uint32_t CPT2CCR_EXEV5CPT = 0x40;     // External Event 5 Capture
    static constexpr uint32_t CPT2CCR_EXEV4CPT = 0x20;     // External Event 4 Capture
    static constexpr uint32_t CPT2CCR_EXEV3CPT = 0x10;     // External Event 3 Capture
    static constexpr uint32_t CPT2CCR_EXEV2CPT = 0x8;      // External Event 2 Capture
    static constexpr uint32_t CPT2CCR_EXEV1CPT = 0x4;      // External Event 1 Capture
    static constexpr uint32_t CPT2CCR_UDPCPT = 0x2;        // Update Capture
    static constexpr uint32_t CPT2CCR_SWCPT = 0x1;         // Software Capture

    static constexpr uint32_t OUTCR_RESET_VALUE = 0x0;
    static constexpr uint32_t OUTCR_DIDL2 = 0x800000; // Output 2 Deadtime upon burst mode Idle entry
    static constexpr uint32_t OUTCR_CHP2 = 0x400000;  // Output 2 Chopper enable
    template<uint32_t X>
    static constexpr uint32_t OUTCR_FAULT2 =          // Output 2 Fault state
        bit_field_t<20, 0x3>::value<X>();
    static constexpr uint32_t OUTCR_IDLES2 = 0x80000; // Output 2 Idle State
    static constexpr uint32_t OUTCR_IDLEM2 = 0x40000; // Output 2 Idle mode
    static constexpr uint32_t OUTCR_POL2 = 0x20000;   // Output 2 polarity
    static constexpr uint32_t OUTCR_BIAR = 0x4000;    // Balanced Idle Automatic Resume
    template<uint32_t X>
    static constexpr uint32_t OUTCR_DLYPRT =          // Delayed Protection
        bit_field_t<10, 0x7>::value<X>();
    static constexpr uint32_t OUTCR_DLYPRTEN = 0x200; // Delayed Protection Enable
    static constexpr uint32_t OUTCR_DTEN = 0x100;     // Deadtime enable
    static constexpr uint32_t OUTCR_DIDL1 = 0x80;     // Output 1 Deadtime upon burst mode Idle entry
    static constexpr uint32_t OUTCR_CHP1 = 0x40;      // Output 1 Chopper enable
    template<uint32_t X>
    static constexpr uint32_t OUTCR_FAULT1 =          // Output 1 Fault state
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t OUTCR_IDLES1 = 0x8;     // Output 1 Idle State
    static constexpr uint32_t OUTCR_IDLEM1 = 0x4;     // Output 1 Idle mode
    static constexpr uint32_t OUTCR_POL1 = 0x2;       // Output 1 polarity

    static constexpr uint32_t FLTCR_RESET_VALUE = 0x0;
    static constexpr uint32_t FLTCR_FLTLCK = 0x80000000; // Fault sources Lock
    static constexpr uint32_t FLTCR_FLT6EN = 0x20;       // Fault 6 enable
    static constexpr uint32_t FLTCR_FLT5EN = 0x10;       // Fault 5 enable
    static constexpr uint32_t FLTCR_FLT4EN = 0x8;        // Fault 4 enable
    static constexpr uint32_t FLTCR_FLT3EN = 0x4;        // Fault 3 enable
    static constexpr uint32_t FLTCR_FLT2EN = 0x2;        // Fault 2 enable
    static constexpr uint32_t FLTCR_FLT1EN = 0x1;        // Fault 1 enable

    static constexpr uint32_t TIMCCR2_RESET_VALUE = 0x0;
    static constexpr uint32_t TIMCCR2_TRGHLF = 0x100000; // Triggered-half mode
    static constexpr uint32_t TIMCCR2_GTCMP3 = 0x20000;  // Greater than Compare 3 PWM mode
    static constexpr uint32_t TIMCCR2_GTCMP1 = 0x10000;  // Greater than Compare 1 PWM mode
    template<uint32_t X>
    static constexpr uint32_t TIMCCR2_FEROM =            // Fault and Event Roll-Over Mode
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TIMCCR2_BMROM =            // Burst Mode Roll-Over Mode
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TIMCCR2_ADROM =            // ADC Roll-Over Mode
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TIMCCR2_OUTROM =           // Output Roll-Over Mode
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TIMCCR2_ROM =              // Roll-Over Mode
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t TIMCCR2_UDM = 0x10;        // Up-Down Mode
    static constexpr uint32_t TIMCCR2_DCDR = 0x4;        // Dual Channel DAC Reset trigger
    static constexpr uint32_t TIMCCR2_DCDS = 0x2;        // Dual Channel DAC Step trigger
    static constexpr uint32_t TIMCCR2_DCDE = 0x1;        // Dual Channel DAC trigger enable

    static constexpr uint32_t CEEFR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CEEFR3_EEVACNT =       // External Event A counter
        bit_field_t<8, 0x3f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CEEFR3_EEVASEL =       // External Event A Selection
        bit_field_t<4, 0xf>::value<X>();
    static constexpr uint32_t CEEFR3_EEVARSTM = 0x4; // External Event A Reset Mode
    static constexpr uint32_t CEEFR3_EEVACRES = 0x2; // External Event A Counter Reset
    static constexpr uint32_t CEEFR3_EEVACE = 0x1;   // External Event A Counter Enable
};


////
//
//      High Resolution Timer: TIMD
//
////

struct stm32g474xx_hrtim_timd_t
{
    volatile uint32_t TIMDCR;   // [read-write] Timerx Control Register
    volatile uint32_t TIMDISR;  // [read-only] Timerx Interrupt Status Register
    volatile uint32_t TIMDICR;  // [write-only] Timerx Interrupt Clear Register
    volatile uint32_t TIMDDIER; // [read-write] TIMxDIER
    volatile uint32_t CNTDR;    // [read-write] Timerx Counter Register
    volatile uint32_t PERDR;    // [read-write] Timerx Period Register
    volatile uint32_t REPDR;    // [read-write] Timerx Repetition Register
    volatile uint32_t CMP1DR;   // [read-write] Timerx Compare 1 Register
    volatile uint32_t CMP1CDR;  // [read-write] Timerx Compare 1 Compound Register
    volatile uint32_t CMP2DR;   // [read-write] Timerx Compare 2 Register
    volatile uint32_t CMP3DR;   // [read-write] Timerx Compare 3 Register
    volatile uint32_t CMP4DR;   // [read-write] Timerx Compare 4 Register
    volatile uint32_t CPT1DR;   // [read-only] Timerx Capture 1 Register
    volatile uint32_t CPT2DR;   // [read-only] Timerx Capture 2 Register
    volatile uint32_t DTDR;     // [read-write] Timerx Deadtime Register
    volatile uint32_t SETD1R;   // [read-write] Timerx Output1 Set Register
    volatile uint32_t RSTD1R;   // [read-write] Timerx Output1 Reset Register
    volatile uint32_t SETD2R;   // [read-write] Timerx Output2 Set Register
    volatile uint32_t RSTD2R;   // [read-write] Timerx Output2 Reset Register
    volatile uint32_t EEFDR1;   // [read-write] Timerx External Event Filtering Register 1
    volatile uint32_t EEFDR2;   // [read-write] Timerx External Event Filtering Register 2
    volatile uint32_t RSTDR;    // [read-write] TimerA Reset Register
    volatile uint32_t CHPDR;    // [read-write] Timerx Chopper Register
    volatile uint32_t CPT1DCR;  // [read-write] Timerx Capture 2 Control Register
    volatile uint32_t CPT2DCR;  // [read-write] CPT2xCR
    volatile uint32_t OUTDR;    // [read-write] Timerx Output Register
    volatile uint32_t FLTDR;    // [read-write] Timerx Fault Register
    volatile uint32_t TIMDCR2;  // [read-write] HRTIM Timerx Control Register 2
    volatile uint32_t DEEFR3;   // [read-write] HRTIM Timerx External Event Filtering Register 3

    static constexpr uint32_t TIMDCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TIMDCR_UPDGAT =           // Update Gating
        bit_field_t<28, 0xf>::value<X>();
    static constexpr uint32_t TIMDCR_PREEN = 0x8000000; // Preload enable
    template<uint32_t X>
    static constexpr uint32_t TIMDCR_DACSYNC =          // AC Synchronization
        bit_field_t<25, 0x3>::value<X>();
    static constexpr uint32_t TIMDCR_MSTU = 0x1000000;  // Master Timer update
    static constexpr uint32_t TIMDCR_TEU = 0x800000;    // TEU
    static constexpr uint32_t TIMDCR_TCU = 0x200000;    // TCU
    static constexpr uint32_t TIMDCR_TBU = 0x100000;    // TBU
    static constexpr uint32_t TIMDCR_TAU = 0x80000;     // TAU
    static constexpr uint32_t TIMDCR_TxRSTU = 0x40000;  // Timerx reset update
    static constexpr uint32_t TIMDCR_TxREPU = 0x20000;  // Timer x Repetition update
    static constexpr uint32_t TIMDCR_TFU = 0x10000;     // TFU
    template<uint32_t X>
    static constexpr uint32_t TIMDCR_DELCMP4 =          // Delayed CMP4 mode
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TIMDCR_DELCMP2 =          // Delayed CMP2 mode
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t TIMDCR_SYNCSTRTx = 0x800; // Synchronization Starts Timer x
    static constexpr uint32_t TIMDCR_SYNCRSTx = 0x400;  // Synchronization Resets Timer x
    static constexpr uint32_t TIMDCR_RSYNCU = 0x200;    // Re-Synchronized Update
    template<uint32_t X>
    static constexpr uint32_t TIMDCR_INTLVD =           // Interleaved mode
        bit_field_t<7, 0x3>::value<X>();
    static constexpr uint32_t TIMDCR_PSHPLL = 0x40;     // Push-Pull mode enable
    static constexpr uint32_t TIMDCR_HALF = 0x20;       // Half mode enable
    static constexpr uint32_t TIMDCR_RETRIG = 0x10;     // Re-triggerable mode
    static constexpr uint32_t TIMDCR_CONT = 0x8;        // Continuous mode
    template<uint32_t X>
    static constexpr uint32_t TIMDCR_CK_PSCx =          // HRTIM Timer x Clock prescaler
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t TIMDISR_RESET_VALUE = 0x0;
    static constexpr uint32_t TIMDISR_O2CPY = 0x200000;  // Output 2 Copy
    static constexpr uint32_t TIMDISR_O1CPY = 0x100000;  // Output 1 Copy
    static constexpr uint32_t TIMDISR_O2STAT = 0x80000;  // Output 2 State
    static constexpr uint32_t TIMDISR_O1STAT = 0x40000;  // Output 1 State
    static constexpr uint32_t TIMDISR_IPPSTAT = 0x20000; // Idle Push Pull Status
    static constexpr uint32_t TIMDISR_CPPSTAT = 0x10000; // Current Push Pull Status
    static constexpr uint32_t TIMDISR_DLYPRT = 0x4000;   // Delayed Protection Flag
    static constexpr uint32_t TIMDISR_RST = 0x2000;      // Reset Interrupt Flag
    static constexpr uint32_t TIMDISR_RSTx2 = 0x1000;    // Output 2 Reset Interrupt Flag
    static constexpr uint32_t TIMDISR_SETx2 = 0x800;     // Output 2 Set Interrupt Flag
    static constexpr uint32_t TIMDISR_RSTx1 = 0x400;     // Output 1 Reset Interrupt Flag
    static constexpr uint32_t TIMDISR_SETx1 = 0x200;     // Output 1 Set Interrupt Flag
    static constexpr uint32_t TIMDISR_CPT2 = 0x100;      // Capture2 Interrupt Flag
    static constexpr uint32_t TIMDISR_CPT1 = 0x80;       // Capture1 Interrupt Flag
    static constexpr uint32_t TIMDISR_UPD = 0x40;        // Update Interrupt Flag
    static constexpr uint32_t TIMDISR_REP = 0x10;        // Repetition Interrupt Flag
    static constexpr uint32_t TIMDISR_CMP4 = 0x8;        // Compare 4 Interrupt Flag
    static constexpr uint32_t TIMDISR_CMP3 = 0x4;        // Compare 3 Interrupt Flag
    static constexpr uint32_t TIMDISR_CMP2 = 0x2;        // Compare 2 Interrupt Flag
    static constexpr uint32_t TIMDISR_CMP1 = 0x1;        // Compare 1 Interrupt Flag

    static constexpr uint32_t TIMDICR_RESET_VALUE = 0x0;
    static constexpr uint32_t TIMDICR_DLYPRTC = 0x4000; // Delayed Protection Flag Clear
    static constexpr uint32_t TIMDICR_RSTC = 0x2000;    // Reset Interrupt flag Clear
    static constexpr uint32_t TIMDICR_RSTx2C = 0x1000;  // Output 2 Reset flag Clear
    static constexpr uint32_t TIMDICR_SET2xC = 0x800;   // Output 2 Set flag Clear
    static constexpr uint32_t TIMDICR_RSTx1C = 0x400;   // Output 1 Reset flag Clear
    static constexpr uint32_t TIMDICR_SET1xC = 0x200;   // Output 1 Set flag Clear
    static constexpr uint32_t TIMDICR_CPT2C = 0x100;    // Capture2 Interrupt flag Clear
    static constexpr uint32_t TIMDICR_CPT1C = 0x80;     // Capture1 Interrupt flag Clear
    static constexpr uint32_t TIMDICR_UPDC = 0x40;      // Update Interrupt flag Clear
    static constexpr uint32_t TIMDICR_REPC = 0x10;      // Repetition Interrupt flag Clear
    static constexpr uint32_t TIMDICR_CMP4C = 0x8;      // Compare 4 Interrupt flag Clear
    static constexpr uint32_t TIMDICR_CMP3C = 0x4;      // Compare 3 Interrupt flag Clear
    static constexpr uint32_t TIMDICR_CMP2C = 0x2;      // Compare 2 Interrupt flag Clear
    static constexpr uint32_t TIMDICR_CMP1C = 0x1;      // Compare 1 Interrupt flag Clear

    static constexpr uint32_t TIMDDIER_RESET_VALUE = 0x0;
    static constexpr uint32_t TIMDDIER_DLYPRTDE = 0x40000000; // DLYPRTDE
    static constexpr uint32_t TIMDDIER_RSTDE = 0x20000000;    // RSTDE
    static constexpr uint32_t TIMDDIER_RSTx2DE = 0x10000000;  // RSTx2DE
    static constexpr uint32_t TIMDDIER_SETx2DE = 0x8000000;   // SETx2DE
    static constexpr uint32_t TIMDDIER_RSTx1DE = 0x4000000;   // RSTx1DE
    static constexpr uint32_t TIMDDIER_SET1xDE = 0x2000000;   // SET1xDE
    static constexpr uint32_t TIMDDIER_CPT2DE = 0x1000000;    // CPT2DE
    static constexpr uint32_t TIMDDIER_CPT1DE = 0x800000;     // CPT1DE
    static constexpr uint32_t TIMDDIER_UPDDE = 0x400000;      // UPDDE
    static constexpr uint32_t TIMDDIER_REPDE = 0x100000;      // REPDE
    static constexpr uint32_t TIMDDIER_CMP4DE = 0x80000;      // CMP4DE
    static constexpr uint32_t TIMDDIER_CMP3DE = 0x40000;      // CMP3DE
    static constexpr uint32_t TIMDDIER_CMP2DE = 0x20000;      // CMP2DE
    static constexpr uint32_t TIMDDIER_CMP1DE = 0x10000;      // CMP1DE
    static constexpr uint32_t TIMDDIER_DLYPRTIE = 0x4000;     // DLYPRTIE
    static constexpr uint32_t TIMDDIER_RSTIE = 0x2000;        // RSTIE
    static constexpr uint32_t TIMDDIER_RSTx2IE = 0x1000;      // RSTx2IE
    static constexpr uint32_t TIMDDIER_SETx2IE = 0x800;       // SETx2IE
    static constexpr uint32_t TIMDDIER_RSTx1IE = 0x400;       // RSTx1IE
    static constexpr uint32_t TIMDDIER_SET1xIE = 0x200;       // SET1xIE
    static constexpr uint32_t TIMDDIER_CPT2IE = 0x100;        // CPT2IE
    static constexpr uint32_t TIMDDIER_CPT1IE = 0x80;         // CPT1IE
    static constexpr uint32_t TIMDDIER_UPDIE = 0x40;          // UPDIE
    static constexpr uint32_t TIMDDIER_REPIE = 0x10;          // REPIE
    static constexpr uint32_t TIMDDIER_CMP4IE = 0x8;          // CMP4IE
    static constexpr uint32_t TIMDDIER_CMP3IE = 0x4;          // CMP3IE
    static constexpr uint32_t TIMDDIER_CMP2IE = 0x2;          // CMP2IE
    static constexpr uint32_t TIMDDIER_CMP1IE = 0x1;          // CMP1IE

    static constexpr uint32_t CNTDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CNTDR_CNTx =   // Timerx Counter value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t PERDR_RESET_VALUE = 0xffff;
    template<uint32_t X>
    static constexpr uint32_t PERDR_PERx =   // Timerx Period value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t REPDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t REPDR_REPx =   // Timerx Repetition counter value
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t CMP1DR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CMP1DR_CMP1x =   // Timerx Compare 1 value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CMP1CDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CMP1CDR_REPx =    // Timerx Repetition value (aliased from HRTIM_REPx register)
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CMP1CDR_CMP1x =   // Timerx Compare 1 value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CMP2DR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CMP2DR_CMP2x =   // Timerx Compare 2 value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CMP3DR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CMP3DR_CMP3x =   // Timerx Compare 3 value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CMP4DR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CMP4DR_CMP4x =   // Timerx Compare 4 value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CPT1DR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CPT1DR_CPT1x =        // Timerx Capture 1 value
        bit_field_t<0, 0xffff>::value<X>();
    static constexpr uint32_t CPT1DR_DIR = 0x10000; // Timerx Capture 1 Direction status

    static constexpr uint32_t CPT2DR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CPT2DR_CPT2x =        // Timerx Capture 2 value
        bit_field_t<0, 0xffff>::value<X>();
    static constexpr uint32_t CPT2DR_DIR = 0x10000; // Timerx Capture 1 Direction status

    static constexpr uint32_t DTDR_RESET_VALUE = 0x0;
    static constexpr uint32_t DTDR_DTFLKx = 0x80000000;  // Deadtime Falling Lock
    static constexpr uint32_t DTDR_DTFSLKx = 0x40000000; // Deadtime Falling Sign Lock
    static constexpr uint32_t DTDR_SDTFx = 0x2000000;    // Sign Deadtime Falling value
    template<uint32_t X>
    static constexpr uint32_t DTDR_DTFx =                // Deadtime Falling value
        bit_field_t<16, 0x1ff>::value<X>();
    static constexpr uint32_t DTDR_DTRLKx = 0x8000;      // Deadtime Rising Lock
    static constexpr uint32_t DTDR_DTRSLKx = 0x4000;     // Deadtime Rising Sign Lock
    template<uint32_t X>
    static constexpr uint32_t DTDR_DTPRSC =              // Deadtime Prescaler
        bit_field_t<10, 0x7>::value<X>();
    static constexpr uint32_t DTDR_SDTRx = 0x200;        // Sign Deadtime Rising value
    template<uint32_t X>
    static constexpr uint32_t DTDR_DTRx =                // Deadtime Rising value
        bit_field_t<0, 0x1ff>::value<X>();

    static constexpr uint32_t SETD1R_RESET_VALUE = 0x0;
    static constexpr uint32_t SETD1R_UPDATE = 0x80000000;    // Registers update (transfer preload to active)
    static constexpr uint32_t SETD1R_EXTEVNT10 = 0x40000000; // External Event 10
    static constexpr uint32_t SETD1R_EXTEVNT9 = 0x20000000;  // External Event 9
    static constexpr uint32_t SETD1R_EXTEVNT8 = 0x10000000;  // External Event 8
    static constexpr uint32_t SETD1R_EXTEVNT7 = 0x8000000;   // External Event 7
    static constexpr uint32_t SETD1R_EXTEVNT6 = 0x4000000;   // External Event 6
    static constexpr uint32_t SETD1R_EXTEVNT5 = 0x2000000;   // External Event 5
    static constexpr uint32_t SETD1R_EXTEVNT4 = 0x1000000;   // External Event 4
    static constexpr uint32_t SETD1R_EXTEVNT3 = 0x800000;    // External Event 3
    static constexpr uint32_t SETD1R_EXTEVNT2 = 0x400000;    // External Event 2
    static constexpr uint32_t SETD1R_EXTEVNT1 = 0x200000;    // External Event 1
    static constexpr uint32_t SETD1R_TIMEVNT9 = 0x100000;    // Timer Event 9
    static constexpr uint32_t SETD1R_TIMEVNT8 = 0x80000;     // Timer Event 8
    static constexpr uint32_t SETD1R_TIMEVNT7 = 0x40000;     // Timer Event 7
    static constexpr uint32_t SETD1R_TIMEVNT6 = 0x20000;     // Timer Event 6
    static constexpr uint32_t SETD1R_TIMEVNT5 = 0x10000;     // Timer Event 5
    static constexpr uint32_t SETD1R_TIMEVNT4 = 0x8000;      // Timer Event 4
    static constexpr uint32_t SETD1R_TIMEVNT3 = 0x4000;      // Timer Event 3
    static constexpr uint32_t SETD1R_TIMEVNT2 = 0x2000;      // Timer Event 2
    static constexpr uint32_t SETD1R_TIMEVNT1 = 0x1000;      // Timer Event 1
    static constexpr uint32_t SETD1R_MSTCMP4 = 0x800;        // Master Compare 4
    static constexpr uint32_t SETD1R_MSTCMP3 = 0x400;        // Master Compare 3
    static constexpr uint32_t SETD1R_MSTCMP2 = 0x200;        // Master Compare 2
    static constexpr uint32_t SETD1R_MSTCMP1 = 0x100;        // Master Compare 1
    static constexpr uint32_t SETD1R_MSTPER = 0x80;          // Master Period
    static constexpr uint32_t SETD1R_CMP4 = 0x40;            // Timer A compare 4
    static constexpr uint32_t SETD1R_CMP3 = 0x20;            // Timer A compare 3
    static constexpr uint32_t SETD1R_CMP2 = 0x10;            // Timer A compare 2
    static constexpr uint32_t SETD1R_CMP1 = 0x8;             // Timer A compare 1
    static constexpr uint32_t SETD1R_PER = 0x4;              // Timer A Period
    static constexpr uint32_t SETD1R_RESYNC = 0x2;           // Timer A resynchronizaton
    static constexpr uint32_t SETD1R_SST = 0x1;              // Software Set trigger

    static constexpr uint32_t RSTD1R_RESET_VALUE = 0x0;
    static constexpr uint32_t RSTD1R_UPDATE = 0x80000000;    // UPDATE
    static constexpr uint32_t RSTD1R_EXTEVNT10 = 0x40000000; // EXTEVNT10
    static constexpr uint32_t RSTD1R_EXTEVNT9 = 0x20000000;  // EXTEVNT9
    static constexpr uint32_t RSTD1R_EXTEVNT8 = 0x10000000;  // EXTEVNT8
    static constexpr uint32_t RSTD1R_EXTEVNT7 = 0x8000000;   // EXTEVNT7
    static constexpr uint32_t RSTD1R_EXTEVNT6 = 0x4000000;   // EXTEVNT6
    static constexpr uint32_t RSTD1R_EXTEVNT5 = 0x2000000;   // EXTEVNT5
    static constexpr uint32_t RSTD1R_EXTEVNT4 = 0x1000000;   // EXTEVNT4
    static constexpr uint32_t RSTD1R_EXTEVNT3 = 0x800000;    // EXTEVNT3
    static constexpr uint32_t RSTD1R_EXTEVNT2 = 0x400000;    // EXTEVNT2
    static constexpr uint32_t RSTD1R_EXTEVNT1 = 0x200000;    // EXTEVNT1
    static constexpr uint32_t RSTD1R_TIMEVNT9 = 0x100000;    // TIMEVNT9
    static constexpr uint32_t RSTD1R_TIMEVNT8 = 0x80000;     // TIMEVNT8
    static constexpr uint32_t RSTD1R_TIMEVNT7 = 0x40000;     // TIMEVNT7
    static constexpr uint32_t RSTD1R_TIMEVNT6 = 0x20000;     // TIMEVNT6
    static constexpr uint32_t RSTD1R_TIMEVNT5 = 0x10000;     // TIMEVNT5
    static constexpr uint32_t RSTD1R_TIMEVNT4 = 0x8000;      // TIMEVNT4
    static constexpr uint32_t RSTD1R_TIMEVNT3 = 0x4000;      // TIMEVNT3
    static constexpr uint32_t RSTD1R_TIMEVNT2 = 0x2000;      // TIMEVNT2
    static constexpr uint32_t RSTD1R_TIMEVNT1 = 0x1000;      // TIMEVNT1
    static constexpr uint32_t RSTD1R_MSTCMP4 = 0x800;        // MSTCMP4
    static constexpr uint32_t RSTD1R_MSTCMP3 = 0x400;        // MSTCMP3
    static constexpr uint32_t RSTD1R_MSTCMP2 = 0x200;        // MSTCMP2
    static constexpr uint32_t RSTD1R_MSTCMP1 = 0x100;        // MSTCMP1
    static constexpr uint32_t RSTD1R_MSTPER = 0x80;          // MSTPER
    static constexpr uint32_t RSTD1R_CMP4 = 0x40;            // CMP4
    static constexpr uint32_t RSTD1R_CMP3 = 0x20;            // CMP3
    static constexpr uint32_t RSTD1R_CMP2 = 0x10;            // CMP2
    static constexpr uint32_t RSTD1R_CMP1 = 0x8;             // CMP1
    static constexpr uint32_t RSTD1R_PER = 0x4;              // PER
    static constexpr uint32_t RSTD1R_RESYNC = 0x2;           // RESYNC
    static constexpr uint32_t RSTD1R_SRT = 0x1;              // SRT

    static constexpr uint32_t SETD2R_RESET_VALUE = 0x0;
    static constexpr uint32_t SETD2R_UPDATE = 0x80000000;    // UPDATE
    static constexpr uint32_t SETD2R_EXTEVNT10 = 0x40000000; // EXTEVNT10
    static constexpr uint32_t SETD2R_EXTEVNT9 = 0x20000000;  // EXTEVNT9
    static constexpr uint32_t SETD2R_EXTEVNT8 = 0x10000000;  // EXTEVNT8
    static constexpr uint32_t SETD2R_EXTEVNT7 = 0x8000000;   // EXTEVNT7
    static constexpr uint32_t SETD2R_EXTEVNT6 = 0x4000000;   // EXTEVNT6
    static constexpr uint32_t SETD2R_EXTEVNT5 = 0x2000000;   // EXTEVNT5
    static constexpr uint32_t SETD2R_EXTEVNT4 = 0x1000000;   // EXTEVNT4
    static constexpr uint32_t SETD2R_EXTEVNT3 = 0x800000;    // EXTEVNT3
    static constexpr uint32_t SETD2R_EXTEVNT2 = 0x400000;    // EXTEVNT2
    static constexpr uint32_t SETD2R_EXTEVNT1 = 0x200000;    // EXTEVNT1
    static constexpr uint32_t SETD2R_TIMEVNT9 = 0x100000;    // TIMEVNT9
    static constexpr uint32_t SETD2R_TIMEVNT8 = 0x80000;     // TIMEVNT8
    static constexpr uint32_t SETD2R_TIMEVNT7 = 0x40000;     // TIMEVNT7
    static constexpr uint32_t SETD2R_TIMEVNT6 = 0x20000;     // TIMEVNT6
    static constexpr uint32_t SETD2R_TIMEVNT5 = 0x10000;     // TIMEVNT5
    static constexpr uint32_t SETD2R_TIMEVNT4 = 0x8000;      // TIMEVNT4
    static constexpr uint32_t SETD2R_TIMEVNT3 = 0x4000;      // TIMEVNT3
    static constexpr uint32_t SETD2R_TIMEVNT2 = 0x2000;      // TIMEVNT2
    static constexpr uint32_t SETD2R_TIMEVNT1 = 0x1000;      // TIMEVNT1
    static constexpr uint32_t SETD2R_MSTCMP4 = 0x800;        // MSTCMP4
    static constexpr uint32_t SETD2R_MSTCMP3 = 0x400;        // MSTCMP3
    static constexpr uint32_t SETD2R_MSTCMP2 = 0x200;        // MSTCMP2
    static constexpr uint32_t SETD2R_MSTCMP1 = 0x100;        // MSTCMP1
    static constexpr uint32_t SETD2R_MSTPER = 0x80;          // MSTPER
    static constexpr uint32_t SETD2R_CMP4 = 0x40;            // CMP4
    static constexpr uint32_t SETD2R_CMP3 = 0x20;            // CMP3
    static constexpr uint32_t SETD2R_CMP2 = 0x10;            // CMP2
    static constexpr uint32_t SETD2R_CMP1 = 0x8;             // CMP1
    static constexpr uint32_t SETD2R_PER = 0x4;              // PER
    static constexpr uint32_t SETD2R_RESYNC = 0x2;           // RESYNC
    static constexpr uint32_t SETD2R_SST = 0x1;              // SST

    static constexpr uint32_t RSTD2R_RESET_VALUE = 0x0;
    static constexpr uint32_t RSTD2R_UPDATE = 0x80000000;    // UPDATE
    static constexpr uint32_t RSTD2R_EXTEVNT10 = 0x40000000; // EXTEVNT10
    static constexpr uint32_t RSTD2R_EXTEVNT9 = 0x20000000;  // EXTEVNT9
    static constexpr uint32_t RSTD2R_EXTEVNT8 = 0x10000000;  // EXTEVNT8
    static constexpr uint32_t RSTD2R_EXTEVNT7 = 0x8000000;   // EXTEVNT7
    static constexpr uint32_t RSTD2R_EXTEVNT6 = 0x4000000;   // EXTEVNT6
    static constexpr uint32_t RSTD2R_EXTEVNT5 = 0x2000000;   // EXTEVNT5
    static constexpr uint32_t RSTD2R_EXTEVNT4 = 0x1000000;   // EXTEVNT4
    static constexpr uint32_t RSTD2R_EXTEVNT3 = 0x800000;    // EXTEVNT3
    static constexpr uint32_t RSTD2R_EXTEVNT2 = 0x400000;    // EXTEVNT2
    static constexpr uint32_t RSTD2R_EXTEVNT1 = 0x200000;    // EXTEVNT1
    static constexpr uint32_t RSTD2R_TIMEVNT9 = 0x100000;    // TIMEVNT9
    static constexpr uint32_t RSTD2R_TIMEVNT8 = 0x80000;     // TIMEVNT8
    static constexpr uint32_t RSTD2R_TIMEVNT7 = 0x40000;     // TIMEVNT7
    static constexpr uint32_t RSTD2R_TIMEVNT6 = 0x20000;     // TIMEVNT6
    static constexpr uint32_t RSTD2R_TIMEVNT5 = 0x10000;     // TIMEVNT5
    static constexpr uint32_t RSTD2R_TIMEVNT4 = 0x8000;      // TIMEVNT4
    static constexpr uint32_t RSTD2R_TIMEVNT3 = 0x4000;      // TIMEVNT3
    static constexpr uint32_t RSTD2R_TIMEVNT2 = 0x2000;      // TIMEVNT2
    static constexpr uint32_t RSTD2R_TIMEVNT1 = 0x1000;      // TIMEVNT1
    static constexpr uint32_t RSTD2R_MSTCMP4 = 0x800;        // MSTCMP4
    static constexpr uint32_t RSTD2R_MSTCMP3 = 0x400;        // MSTCMP3
    static constexpr uint32_t RSTD2R_MSTCMP2 = 0x200;        // MSTCMP2
    static constexpr uint32_t RSTD2R_MSTCMP1 = 0x100;        // MSTCMP1
    static constexpr uint32_t RSTD2R_MSTPER = 0x80;          // MSTPER
    static constexpr uint32_t RSTD2R_CMP4 = 0x40;            // CMP4
    static constexpr uint32_t RSTD2R_CMP3 = 0x20;            // CMP3
    static constexpr uint32_t RSTD2R_CMP2 = 0x10;            // CMP2
    static constexpr uint32_t RSTD2R_CMP1 = 0x8;             // CMP1
    static constexpr uint32_t RSTD2R_PER = 0x4;              // PER
    static constexpr uint32_t RSTD2R_RESYNC = 0x2;           // RESYNC
    static constexpr uint32_t RSTD2R_SRT = 0x1;              // SRT

    static constexpr uint32_t EEFDR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EEFDR1_EE5FLTR =            // External Event 5 filter
        bit_field_t<25, 0xf>::value<X>();
    static constexpr uint32_t EEFDR1_EE5LTCH = 0x1000000; // External Event 5 latch
    template<uint32_t X>
    static constexpr uint32_t EEFDR1_EE4FLTR =            // External Event 4 filter
        bit_field_t<19, 0xf>::value<X>();
    static constexpr uint32_t EEFDR1_EE4LTCH = 0x40000;   // External Event 4 latch
    template<uint32_t X>
    static constexpr uint32_t EEFDR1_EE3FLTR =            // External Event 3 filter
        bit_field_t<13, 0xf>::value<X>();
    static constexpr uint32_t EEFDR1_EE3LTCH = 0x1000;    // External Event 3 latch
    template<uint32_t X>
    static constexpr uint32_t EEFDR1_EE2FLTR =            // External Event 2 filter
        bit_field_t<7, 0xf>::value<X>();
    static constexpr uint32_t EEFDR1_EE2LTCH = 0x40;      // External Event 2 latch
    template<uint32_t X>
    static constexpr uint32_t EEFDR1_EE1FLTR =            // External Event 1 filter
        bit_field_t<1, 0xf>::value<X>();
    static constexpr uint32_t EEFDR1_EE1LTCH = 0x1;       // External Event 1 latch

    static constexpr uint32_t EEFDR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EEFDR2_EE10FLTR =            // External Event 10 filter
        bit_field_t<25, 0xf>::value<X>();
    static constexpr uint32_t EEFDR2_EE10LTCH = 0x1000000; // External Event 10 latch
    template<uint32_t X>
    static constexpr uint32_t EEFDR2_EE9FLTR =             // External Event 9 filter
        bit_field_t<19, 0xf>::value<X>();
    static constexpr uint32_t EEFDR2_EE9LTCH = 0x40000;    // External Event 9 latch
    template<uint32_t X>
    static constexpr uint32_t EEFDR2_EE8FLTR =             // External Event 8 filter
        bit_field_t<13, 0xf>::value<X>();
    static constexpr uint32_t EEFDR2_EE8LTCH = 0x1000;     // External Event 8 latch
    template<uint32_t X>
    static constexpr uint32_t EEFDR2_EE7FLTR =             // External Event 7 filter
        bit_field_t<7, 0xf>::value<X>();
    static constexpr uint32_t EEFDR2_EE7LTCH = 0x40;       // External Event 7 latch
    template<uint32_t X>
    static constexpr uint32_t EEFDR2_EE6FLTR =             // External Event 6 filter
        bit_field_t<1, 0xf>::value<X>();
    static constexpr uint32_t EEFDR2_EE6LTCH = 0x1;        // External Event 6 latch

    static constexpr uint32_t RSTDR_RESET_VALUE = 0x0;
    static constexpr uint32_t RSTDR_TIMFCPM2 = 0x80000000; // Timer F Compare 2
    static constexpr uint32_t RSTDR_TIMECMP4 = 0x40000000; // Timer E Compare 4
    static constexpr uint32_t RSTDR_TIMECMP2 = 0x20000000; // Timer E Compare 2
    static constexpr uint32_t RSTDR_TIMECMP1 = 0x10000000; // Timer E Compare 1
    static constexpr uint32_t RSTDR_TIMCCMP4 = 0x8000000;  // Timer C Compare 4
    static constexpr uint32_t RSTDR_TIMCCMP2 = 0x4000000;  // Timer C Compare 2
    static constexpr uint32_t RSTDR_TIMCCMP1 = 0x2000000;  // Timer C Compare 1
    static constexpr uint32_t RSTDR_TIMBCMP4 = 0x1000000;  // Timer B Compare 4
    static constexpr uint32_t RSTDR_TIMBCMP2 = 0x800000;   // Timer B Compare 2
    static constexpr uint32_t RSTDR_TIMBCMP1 = 0x400000;   // Timer B Compare 1
    static constexpr uint32_t RSTDR_TIMACMP4 = 0x200000;   // Timer A Compare 4
    static constexpr uint32_t RSTDR_TIMACMP2 = 0x100000;   // Timer A Compare 2
    static constexpr uint32_t RSTDR_TIMACMP1 = 0x80000;    // Timer A Compare 1
    static constexpr uint32_t RSTDR_EXTEVNT10 = 0x40000;   // External Event 10
    static constexpr uint32_t RSTDR_EXTEVNT9 = 0x20000;    // External Event 9
    static constexpr uint32_t RSTDR_EXTEVNT8 = 0x10000;    // External Event 8
    static constexpr uint32_t RSTDR_EXTEVNT7 = 0x8000;     // External Event 7
    static constexpr uint32_t RSTDR_EXTEVNT6 = 0x4000;     // External Event 6
    static constexpr uint32_t RSTDR_EXTEVNT5 = 0x2000;     // External Event 5
    static constexpr uint32_t RSTDR_EXTEVNT4 = 0x1000;     // External Event 4
    static constexpr uint32_t RSTDR_EXTEVNT3 = 0x800;      // External Event 3
    static constexpr uint32_t RSTDR_EXTEVNT2 = 0x400;      // External Event 2
    static constexpr uint32_t RSTDR_EXTEVNT1 = 0x200;      // External Event 1
    static constexpr uint32_t RSTDR_MSTCMP4 = 0x100;       // Master compare 4
    static constexpr uint32_t RSTDR_MSTCMP3 = 0x80;        // Master compare 3
    static constexpr uint32_t RSTDR_MSTCMP2 = 0x40;        // Master compare 2
    static constexpr uint32_t RSTDR_MSTCMP1 = 0x20;        // Master compare 1
    static constexpr uint32_t RSTDR_MSTPER = 0x10;         // Master timer Period
    static constexpr uint32_t RSTDR_CMP4 = 0x8;            // Timer A compare 4 reset
    static constexpr uint32_t RSTDR_CMP2 = 0x4;            // Timer A compare 2 reset
    static constexpr uint32_t RSTDR_UPDT = 0x2;            // Timer A Update reset
    static constexpr uint32_t RSTDR_TIMFCMP1 = 0x1;        // Timer A Update reset

    static constexpr uint32_t CHPDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CHPDR_STRTPW =   // STRTPW
        bit_field_t<7, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CHPDR_CHPDTY =   // Timerx chopper duty cycle value
        bit_field_t<4, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CHPDR_CHPFRQ =   // Timerx carrier frequency value
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t CPT1DCR_RESET_VALUE = 0x0;
    static constexpr uint32_t CPT1DCR_TECMP2 = 0x80000000; // Timer E Compare 2
    static constexpr uint32_t CPT1DCR_TECMP1 = 0x40000000; // Timer E Compare 1
    static constexpr uint32_t CPT1DCR_TE1RST = 0x20000000; // Timer E output 1 Reset
    static constexpr uint32_t CPT1DCR_TE1SET = 0x10000000; // Timer E output 1 Set
    static constexpr uint32_t CPT1DCR_TFCMP2 = 0x8000000;  // TFCMP2
    static constexpr uint32_t CPT1DCR_TFCMP1 = 0x4000000;  // TFCMP1
    static constexpr uint32_t CPT1DCR_TF1RST = 0x2000000;  // TF1RST
    static constexpr uint32_t CPT1DCR_TF1SET = 0x1000000;  // TF1SET
    static constexpr uint32_t CPT1DCR_TCCMP2 = 0x800000;   // Timer C Compare 2
    static constexpr uint32_t CPT1DCR_TCCMP1 = 0x400000;   // Timer C Compare 1
    static constexpr uint32_t CPT1DCR_TC1RST = 0x200000;   // Timer C output 1 Reset
    static constexpr uint32_t CPT1DCR_TC1SET = 0x100000;   // Timer C output 1 Set
    static constexpr uint32_t CPT1DCR_TBCMP2 = 0x80000;    // Timer B Compare 2
    static constexpr uint32_t CPT1DCR_TBCMP1 = 0x40000;    // Timer B Compare 1
    static constexpr uint32_t CPT1DCR_TB1RST = 0x20000;    // Timer B output 1 Reset
    static constexpr uint32_t CPT1DCR_TB1SET = 0x10000;    // Timer B output 1 Set
    static constexpr uint32_t CPT1DCR_TACMP2 = 0x8000;     // Timer A Compare 2
    static constexpr uint32_t CPT1DCR_TACMP1 = 0x4000;     // Timer A Compare 1
    static constexpr uint32_t CPT1DCR_TA1RST = 0x2000;     // Timer A output 1 Reset
    static constexpr uint32_t CPT1DCR_TA1SET = 0x1000;     // Timer A output 1 Set
    static constexpr uint32_t CPT1DCR_EXEV10CPT = 0x800;   // External Event 10 Capture
    static constexpr uint32_t CPT1DCR_EXEV9CPT = 0x400;    // External Event 9 Capture
    static constexpr uint32_t CPT1DCR_EXEV8CPT = 0x200;    // External Event 8 Capture
    static constexpr uint32_t CPT1DCR_EXEV7CPT = 0x100;    // External Event 7 Capture
    static constexpr uint32_t CPT1DCR_EXEV6CPT = 0x80;     // External Event 6 Capture
    static constexpr uint32_t CPT1DCR_EXEV5CPT = 0x40;     // External Event 5 Capture
    static constexpr uint32_t CPT1DCR_EXEV4CPT = 0x20;     // External Event 4 Capture
    static constexpr uint32_t CPT1DCR_EXEV3CPT = 0x10;     // External Event 3 Capture
    static constexpr uint32_t CPT1DCR_EXEV2CPT = 0x8;      // External Event 2 Capture
    static constexpr uint32_t CPT1DCR_EXEV1CPT = 0x4;      // External Event 1 Capture
    static constexpr uint32_t CPT1DCR_UDPCPT = 0x2;        // Update Capture
    static constexpr uint32_t CPT1DCR_SWCPT = 0x1;         // Software Capture

    static constexpr uint32_t CPT2DCR_RESET_VALUE = 0x0;
    static constexpr uint32_t CPT2DCR_TECMP2 = 0x80000000; // Timer E Compare 2
    static constexpr uint32_t CPT2DCR_TECMP1 = 0x40000000; // Timer E Compare 1
    static constexpr uint32_t CPT2DCR_TE1RST = 0x20000000; // Timer E output 1 Reset
    static constexpr uint32_t CPT2DCR_TE1SET = 0x10000000; // Timer E output 1 Set
    static constexpr uint32_t CPT2DCR_TFCMP2 = 0x8000000;  // TFCMP2
    static constexpr uint32_t CPT2DCR_TFCMP1 = 0x4000000;  // TFCMP1
    static constexpr uint32_t CPT2DCR_TF1RST = 0x2000000;  // TF1RST
    static constexpr uint32_t CPT2DCR_TF1SET = 0x1000000;  // TF1SET
    static constexpr uint32_t CPT2DCR_TCCMP2 = 0x800000;   // Timer C Compare 2
    static constexpr uint32_t CPT2DCR_TCCMP1 = 0x400000;   // Timer C Compare 1
    static constexpr uint32_t CPT2DCR_TC1RST = 0x200000;   // Timer C output 1 Reset
    static constexpr uint32_t CPT2DCR_TC1SET = 0x100000;   // Timer C output 1 Set
    static constexpr uint32_t CPT2DCR_TBCMP2 = 0x80000;    // Timer B Compare 2
    static constexpr uint32_t CPT2DCR_TBCMP1 = 0x40000;    // Timer B Compare 1
    static constexpr uint32_t CPT2DCR_TB1RST = 0x20000;    // Timer B output 1 Reset
    static constexpr uint32_t CPT2DCR_TB1SET = 0x10000;    // Timer B output 1 Set
    static constexpr uint32_t CPT2DCR_TACMP2 = 0x8000;     // Timer A Compare 2
    static constexpr uint32_t CPT2DCR_TACMP1 = 0x4000;     // Timer A Compare 1
    static constexpr uint32_t CPT2DCR_TA1RST = 0x2000;     // Timer A output 1 Reset
    static constexpr uint32_t CPT2DCR_TA1SET = 0x1000;     // Timer A output 1 Set
    static constexpr uint32_t CPT2DCR_EXEV10CPT = 0x800;   // External Event 10 Capture
    static constexpr uint32_t CPT2DCR_EXEV9CPT = 0x400;    // External Event 9 Capture
    static constexpr uint32_t CPT2DCR_EXEV8CPT = 0x200;    // External Event 8 Capture
    static constexpr uint32_t CPT2DCR_EXEV7CPT = 0x100;    // External Event 7 Capture
    static constexpr uint32_t CPT2DCR_EXEV6CPT = 0x80;     // External Event 6 Capture
    static constexpr uint32_t CPT2DCR_EXEV5CPT = 0x40;     // External Event 5 Capture
    static constexpr uint32_t CPT2DCR_EXEV4CPT = 0x20;     // External Event 4 Capture
    static constexpr uint32_t CPT2DCR_EXEV3CPT = 0x10;     // External Event 3 Capture
    static constexpr uint32_t CPT2DCR_EXEV2CPT = 0x8;      // External Event 2 Capture
    static constexpr uint32_t CPT2DCR_EXEV1CPT = 0x4;      // External Event 1 Capture
    static constexpr uint32_t CPT2DCR_UDPCPT = 0x2;        // Update Capture
    static constexpr uint32_t CPT2DCR_SWCPT = 0x1;         // Software Capture

    static constexpr uint32_t OUTDR_RESET_VALUE = 0x0;
    static constexpr uint32_t OUTDR_DIDL2 = 0x800000; // Output 2 Deadtime upon burst mode Idle entry
    static constexpr uint32_t OUTDR_CHP2 = 0x400000;  // Output 2 Chopper enable
    template<uint32_t X>
    static constexpr uint32_t OUTDR_FAULT2 =          // Output 2 Fault state
        bit_field_t<20, 0x3>::value<X>();
    static constexpr uint32_t OUTDR_IDLES2 = 0x80000; // Output 2 Idle State
    static constexpr uint32_t OUTDR_IDLEM2 = 0x40000; // Output 2 Idle mode
    static constexpr uint32_t OUTDR_POL2 = 0x20000;   // Output 2 polarity
    static constexpr uint32_t OUTDR_BIAR = 0x4000;    // Balanced Idle Automatic Resume
    template<uint32_t X>
    static constexpr uint32_t OUTDR_DLYPRT =          // Delayed Protection
        bit_field_t<10, 0x7>::value<X>();
    static constexpr uint32_t OUTDR_DLYPRTEN = 0x200; // Delayed Protection Enable
    static constexpr uint32_t OUTDR_DTEN = 0x100;     // Deadtime enable
    static constexpr uint32_t OUTDR_DIDL1 = 0x80;     // Output 1 Deadtime upon burst mode Idle entry
    static constexpr uint32_t OUTDR_CHP1 = 0x40;      // Output 1 Chopper enable
    template<uint32_t X>
    static constexpr uint32_t OUTDR_FAULT1 =          // Output 1 Fault state
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t OUTDR_IDLES1 = 0x8;     // Output 1 Idle State
    static constexpr uint32_t OUTDR_IDLEM1 = 0x4;     // Output 1 Idle mode
    static constexpr uint32_t OUTDR_POL1 = 0x2;       // Output 1 polarity

    static constexpr uint32_t FLTDR_RESET_VALUE = 0x0;
    static constexpr uint32_t FLTDR_FLTLCK = 0x80000000; // Fault sources Lock
    static constexpr uint32_t FLTDR_FLT6EN = 0x20;       // Fault 6 enable
    static constexpr uint32_t FLTDR_FLT5EN = 0x10;       // Fault 5 enable
    static constexpr uint32_t FLTDR_FLT4EN = 0x8;        // Fault 4 enable
    static constexpr uint32_t FLTDR_FLT3EN = 0x4;        // Fault 3 enable
    static constexpr uint32_t FLTDR_FLT2EN = 0x2;        // Fault 2 enable
    static constexpr uint32_t FLTDR_FLT1EN = 0x1;        // Fault 1 enable

    static constexpr uint32_t TIMDCR2_RESET_VALUE = 0x0;
    static constexpr uint32_t TIMDCR2_TRGHLF = 0x100000; // Triggered-half mode
    static constexpr uint32_t TIMDCR2_GTCMP3 = 0x20000;  // Greater than Compare 3 PWM mode
    static constexpr uint32_t TIMDCR2_GTCMP1 = 0x10000;  // Greater than Compare 1 PWM mode
    template<uint32_t X>
    static constexpr uint32_t TIMDCR2_FEROM =            // Fault and Event Roll-Over Mode
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TIMDCR2_BMROM =            // Burst Mode Roll-Over Mode
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TIMDCR2_ADROM =            // ADC Roll-Over Mode
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TIMDCR2_OUTROM =           // Output Roll-Over Mode
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TIMDCR2_ROM =              // Roll-Over Mode
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t TIMDCR2_UDM = 0x10;        // Up-Down Mode
    static constexpr uint32_t TIMDCR2_DCDR = 0x4;        // Dual Channel DAC Reset trigger
    static constexpr uint32_t TIMDCR2_DCDS = 0x2;        // Dual Channel DAC Step trigger
    static constexpr uint32_t TIMDCR2_DCDE = 0x1;        // Dual Channel DAC trigger enable

    static constexpr uint32_t DEEFR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DEEFR3_EEVACNT =       // External Event A counter
        bit_field_t<8, 0x3f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DEEFR3_EEVASEL =       // External Event A Selection
        bit_field_t<4, 0xf>::value<X>();
    static constexpr uint32_t DEEFR3_EEVARSTM = 0x4; // External Event A Reset Mode
    static constexpr uint32_t DEEFR3_EEVACRES = 0x2; // External Event A Counter Reset
    static constexpr uint32_t DEEFR3_EEVACE = 0x1;   // External Event A Counter Enable
};


////
//
//      High Resolution Timer: TIME
//
////

struct stm32g474xx_hrtim_time_t
{
    volatile uint32_t TIMECR;   // [read-write] Timerx Control Register
    volatile uint32_t TIMEISR;  // [read-only] Timerx Interrupt Status Register
    volatile uint32_t TIMEICR;  // [write-only] Timerx Interrupt Clear Register
    volatile uint32_t TIMEDIER; // [read-write] TIMxDIER
    volatile uint32_t CNTER;    // [read-write] Timerx Counter Register
    volatile uint32_t PERER;    // [read-write] Timerx Period Register
    volatile uint32_t REPER;    // [read-write] Timerx Repetition Register
    volatile uint32_t CMP1ER;   // [read-write] Timerx Compare 1 Register
    volatile uint32_t CMP1CER;  // [read-write] Timerx Compare 1 Compound Register
    volatile uint32_t CMP2ER;   // [read-write] Timerx Compare 2 Register
    volatile uint32_t CMP3ER;   // [read-write] Timerx Compare 3 Register
    volatile uint32_t CMP4ER;   // [read-write] Timerx Compare 4 Register
    volatile uint32_t CPT1ER;   // [read-only] Timerx Capture 1 Register
    volatile uint32_t CPT2ER;   // [read-only] Timerx Capture 2 Register
    volatile uint32_t DTER;     // [read-write] Timerx Deadtime Register
    volatile uint32_t SETE1R;   // [read-write] Timerx Output1 Set Register
    volatile uint32_t RSTE1R;   // [read-write] Timerx Output1 Reset Register
    volatile uint32_t SETE2R;   // [read-write] Timerx Output2 Set Register
    volatile uint32_t RSTE2R;   // [read-write] Timerx Output2 Reset Register
    volatile uint32_t EEFER1;   // [read-write] Timerx External Event Filtering Register 1
    volatile uint32_t EEFER2;   // [read-write] Timerx External Event Filtering Register 2
    volatile uint32_t RSTER;    // [read-write] TimerA Reset Register
    volatile uint32_t CHPER;    // [read-write] Timerx Chopper Register
    volatile uint32_t CPT1ECR;  // [read-write] Timerx Capture 2 Control Register
    volatile uint32_t CPT2ECR;  // [read-write] CPT2xCR
    volatile uint32_t OUTER;    // [read-write] Timerx Output Register
    volatile uint32_t FLTER;    // [read-write] Timerx Fault Register
    volatile uint32_t TIMECR2;  // [read-write] HRTIM Timerx Control Register 2
    volatile uint32_t EEEFR3;   // [read-write] HRTIM Timerx External Event Filtering Register 3

    static constexpr uint32_t TIMECR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TIMECR_UPDGAT =           // Update Gating
        bit_field_t<28, 0xf>::value<X>();
    static constexpr uint32_t TIMECR_PREEN = 0x8000000; // Preload enable
    template<uint32_t X>
    static constexpr uint32_t TIMECR_DACSYNC =          // AC Synchronization
        bit_field_t<25, 0x3>::value<X>();
    static constexpr uint32_t TIMECR_MSTU = 0x1000000;  // Master Timer update
    static constexpr uint32_t TIMECR_TDU = 0x400000;    // TDU
    static constexpr uint32_t TIMECR_TCU = 0x200000;    // TCU
    static constexpr uint32_t TIMECR_TBU = 0x100000;    // TBU
    static constexpr uint32_t TIMECR_TAU = 0x80000;     // TAU
    static constexpr uint32_t TIMECR_TxRSTU = 0x40000;  // Timerx reset update
    static constexpr uint32_t TIMECR_TxREPU = 0x20000;  // Timer x Repetition update
    static constexpr uint32_t TIMECR_TFU = 0x10000;     // TFU
    template<uint32_t X>
    static constexpr uint32_t TIMECR_DELCMP4 =          // Delayed CMP4 mode
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TIMECR_DELCMP2 =          // Delayed CMP2 mode
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t TIMECR_SYNCSTRTx = 0x800; // Synchronization Starts Timer x
    static constexpr uint32_t TIMECR_SYNCRSTx = 0x400;  // Synchronization Resets Timer x
    static constexpr uint32_t TIMECR_RSYNCU = 0x200;    // Re-Synchronized Update
    template<uint32_t X>
    static constexpr uint32_t TIMECR_INTLVD =           // Interleaved mode
        bit_field_t<7, 0x3>::value<X>();
    static constexpr uint32_t TIMECR_PSHPLL = 0x40;     // Push-Pull mode enable
    static constexpr uint32_t TIMECR_HALF = 0x20;       // Half mode enable
    static constexpr uint32_t TIMECR_RETRIG = 0x10;     // Re-triggerable mode
    static constexpr uint32_t TIMECR_CONT = 0x8;        // Continuous mode
    template<uint32_t X>
    static constexpr uint32_t TIMECR_CK_PSCx =          // HRTIM Timer x Clock prescaler
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t TIMEISR_RESET_VALUE = 0x0;
    static constexpr uint32_t TIMEISR_O2CPY = 0x200000;  // Output 2 Copy
    static constexpr uint32_t TIMEISR_O1CPY = 0x100000;  // Output 1 Copy
    static constexpr uint32_t TIMEISR_O2STAT = 0x80000;  // Output 2 State
    static constexpr uint32_t TIMEISR_O1STAT = 0x40000;  // Output 1 State
    static constexpr uint32_t TIMEISR_IPPSTAT = 0x20000; // Idle Push Pull Status
    static constexpr uint32_t TIMEISR_CPPSTAT = 0x10000; // Current Push Pull Status
    static constexpr uint32_t TIMEISR_DLYPRT = 0x4000;   // Delayed Protection Flag
    static constexpr uint32_t TIMEISR_RST = 0x2000;      // Reset Interrupt Flag
    static constexpr uint32_t TIMEISR_RSTx2 = 0x1000;    // Output 2 Reset Interrupt Flag
    static constexpr uint32_t TIMEISR_SETx2 = 0x800;     // Output 2 Set Interrupt Flag
    static constexpr uint32_t TIMEISR_RSTx1 = 0x400;     // Output 1 Reset Interrupt Flag
    static constexpr uint32_t TIMEISR_SETx1 = 0x200;     // Output 1 Set Interrupt Flag
    static constexpr uint32_t TIMEISR_CPT2 = 0x100;      // Capture2 Interrupt Flag
    static constexpr uint32_t TIMEISR_CPT1 = 0x80;       // Capture1 Interrupt Flag
    static constexpr uint32_t TIMEISR_UPD = 0x40;        // Update Interrupt Flag
    static constexpr uint32_t TIMEISR_REP = 0x10;        // Repetition Interrupt Flag
    static constexpr uint32_t TIMEISR_CMP4 = 0x8;        // Compare 4 Interrupt Flag
    static constexpr uint32_t TIMEISR_CMP3 = 0x4;        // Compare 3 Interrupt Flag
    static constexpr uint32_t TIMEISR_CMP2 = 0x2;        // Compare 2 Interrupt Flag
    static constexpr uint32_t TIMEISR_CMP1 = 0x1;        // Compare 1 Interrupt Flag

    static constexpr uint32_t TIMEICR_RESET_VALUE = 0x0;
    static constexpr uint32_t TIMEICR_DLYPRTC = 0x4000; // Delayed Protection Flag Clear
    static constexpr uint32_t TIMEICR_RSTC = 0x2000;    // Reset Interrupt flag Clear
    static constexpr uint32_t TIMEICR_RSTx2C = 0x1000;  // Output 2 Reset flag Clear
    static constexpr uint32_t TIMEICR_SET2xC = 0x800;   // Output 2 Set flag Clear
    static constexpr uint32_t TIMEICR_RSTx1C = 0x400;   // Output 1 Reset flag Clear
    static constexpr uint32_t TIMEICR_SET1xC = 0x200;   // Output 1 Set flag Clear
    static constexpr uint32_t TIMEICR_CPT2C = 0x100;    // Capture2 Interrupt flag Clear
    static constexpr uint32_t TIMEICR_CPT1C = 0x80;     // Capture1 Interrupt flag Clear
    static constexpr uint32_t TIMEICR_UPDC = 0x40;      // Update Interrupt flag Clear
    static constexpr uint32_t TIMEICR_REPC = 0x10;      // Repetition Interrupt flag Clear
    static constexpr uint32_t TIMEICR_CMP4C = 0x8;      // Compare 4 Interrupt flag Clear
    static constexpr uint32_t TIMEICR_CMP3C = 0x4;      // Compare 3 Interrupt flag Clear
    static constexpr uint32_t TIMEICR_CMP2C = 0x2;      // Compare 2 Interrupt flag Clear
    static constexpr uint32_t TIMEICR_CMP1C = 0x1;      // Compare 1 Interrupt flag Clear

    static constexpr uint32_t TIMEDIER_RESET_VALUE = 0x0;
    static constexpr uint32_t TIMEDIER_DLYPRTDE = 0x40000000; // DLYPRTDE
    static constexpr uint32_t TIMEDIER_RSTDE = 0x20000000;    // RSTDE
    static constexpr uint32_t TIMEDIER_RSTx2DE = 0x10000000;  // RSTx2DE
    static constexpr uint32_t TIMEDIER_SETx2DE = 0x8000000;   // SETx2DE
    static constexpr uint32_t TIMEDIER_RSTx1DE = 0x4000000;   // RSTx1DE
    static constexpr uint32_t TIMEDIER_SET1xDE = 0x2000000;   // SET1xDE
    static constexpr uint32_t TIMEDIER_CPT2DE = 0x1000000;    // CPT2DE
    static constexpr uint32_t TIMEDIER_CPT1DE = 0x800000;     // CPT1DE
    static constexpr uint32_t TIMEDIER_UPDDE = 0x400000;      // UPDDE
    static constexpr uint32_t TIMEDIER_REPDE = 0x100000;      // REPDE
    static constexpr uint32_t TIMEDIER_CMP4DE = 0x80000;      // CMP4DE
    static constexpr uint32_t TIMEDIER_CMP3DE = 0x40000;      // CMP3DE
    static constexpr uint32_t TIMEDIER_CMP2DE = 0x20000;      // CMP2DE
    static constexpr uint32_t TIMEDIER_CMP1DE = 0x10000;      // CMP1DE
    static constexpr uint32_t TIMEDIER_DLYPRTIE = 0x4000;     // DLYPRTIE
    static constexpr uint32_t TIMEDIER_RSTIE = 0x2000;        // RSTIE
    static constexpr uint32_t TIMEDIER_RSTx2IE = 0x1000;      // RSTx2IE
    static constexpr uint32_t TIMEDIER_SETx2IE = 0x800;       // SETx2IE
    static constexpr uint32_t TIMEDIER_RSTx1IE = 0x400;       // RSTx1IE
    static constexpr uint32_t TIMEDIER_SET1xIE = 0x200;       // SET1xIE
    static constexpr uint32_t TIMEDIER_CPT2IE = 0x100;        // CPT2IE
    static constexpr uint32_t TIMEDIER_CPT1IE = 0x80;         // CPT1IE
    static constexpr uint32_t TIMEDIER_UPDIE = 0x40;          // UPDIE
    static constexpr uint32_t TIMEDIER_REPIE = 0x10;          // REPIE
    static constexpr uint32_t TIMEDIER_CMP4IE = 0x8;          // CMP4IE
    static constexpr uint32_t TIMEDIER_CMP3IE = 0x4;          // CMP3IE
    static constexpr uint32_t TIMEDIER_CMP2IE = 0x2;          // CMP2IE
    static constexpr uint32_t TIMEDIER_CMP1IE = 0x1;          // CMP1IE

    static constexpr uint32_t CNTER_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CNTER_CNTx =   // Timerx Counter value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t PERER_RESET_VALUE = 0xffff;
    template<uint32_t X>
    static constexpr uint32_t PERER_PERx =   // Timerx Period value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t REPER_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t REPER_REPx =   // Timerx Repetition counter value
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t CMP1ER_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CMP1ER_CMP1x =   // Timerx Compare 1 value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CMP1CER_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CMP1CER_REPx =    // Timerx Repetition value (aliased from HRTIM_REPx register)
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CMP1CER_CMP1x =   // Timerx Compare 1 value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CMP2ER_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CMP2ER_CMP2x =   // Timerx Compare 2 value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CMP3ER_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CMP3ER_CMP3x =   // Timerx Compare 3 value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CMP4ER_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CMP4ER_CMP4x =   // Timerx Compare 4 value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CPT1ER_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CPT1ER_CPT1x =        // Timerx Capture 1 value
        bit_field_t<0, 0xffff>::value<X>();
    static constexpr uint32_t CPT1ER_DIR = 0x10000; // Timerx Capture 1 Direction status

    static constexpr uint32_t CPT2ER_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CPT2ER_CPT2x =        // Timerx Capture 2 value
        bit_field_t<0, 0xffff>::value<X>();
    static constexpr uint32_t CPT2ER_DIR = 0x10000; // Timerx Capture 1 Direction status

    static constexpr uint32_t DTER_RESET_VALUE = 0x0;
    static constexpr uint32_t DTER_DTFLKx = 0x80000000;  // Deadtime Falling Lock
    static constexpr uint32_t DTER_DTFSLKx = 0x40000000; // Deadtime Falling Sign Lock
    static constexpr uint32_t DTER_SDTFx = 0x2000000;    // Sign Deadtime Falling value
    template<uint32_t X>
    static constexpr uint32_t DTER_DTFx =                // Deadtime Falling value
        bit_field_t<16, 0x1ff>::value<X>();
    static constexpr uint32_t DTER_DTRLKx = 0x8000;      // Deadtime Rising Lock
    static constexpr uint32_t DTER_DTRSLKx = 0x4000;     // Deadtime Rising Sign Lock
    template<uint32_t X>
    static constexpr uint32_t DTER_DTPRSC =              // Deadtime Prescaler
        bit_field_t<10, 0x7>::value<X>();
    static constexpr uint32_t DTER_SDTRx = 0x200;        // Sign Deadtime Rising value
    template<uint32_t X>
    static constexpr uint32_t DTER_DTRx =                // Deadtime Rising value
        bit_field_t<0, 0x1ff>::value<X>();

    static constexpr uint32_t SETE1R_RESET_VALUE = 0x0;
    static constexpr uint32_t SETE1R_UPDATE = 0x80000000;    // Registers update (transfer preload to active)
    static constexpr uint32_t SETE1R_EXTEVNT10 = 0x40000000; // External Event 10
    static constexpr uint32_t SETE1R_EXTEVNT9 = 0x20000000;  // External Event 9
    static constexpr uint32_t SETE1R_EXTEVNT8 = 0x10000000;  // External Event 8
    static constexpr uint32_t SETE1R_EXTEVNT7 = 0x8000000;   // External Event 7
    static constexpr uint32_t SETE1R_EXTEVNT6 = 0x4000000;   // External Event 6
    static constexpr uint32_t SETE1R_EXTEVNT5 = 0x2000000;   // External Event 5
    static constexpr uint32_t SETE1R_EXTEVNT4 = 0x1000000;   // External Event 4
    static constexpr uint32_t SETE1R_EXTEVNT3 = 0x800000;    // External Event 3
    static constexpr uint32_t SETE1R_EXTEVNT2 = 0x400000;    // External Event 2
    static constexpr uint32_t SETE1R_EXTEVNT1 = 0x200000;    // External Event 1
    static constexpr uint32_t SETE1R_TIMEVNT9 = 0x100000;    // Timer Event 9
    static constexpr uint32_t SETE1R_TIMEVNT8 = 0x80000;     // Timer Event 8
    static constexpr uint32_t SETE1R_TIMEVNT7 = 0x40000;     // Timer Event 7
    static constexpr uint32_t SETE1R_TIMEVNT6 = 0x20000;     // Timer Event 6
    static constexpr uint32_t SETE1R_TIMEVNT5 = 0x10000;     // Timer Event 5
    static constexpr uint32_t SETE1R_TIMEVNT4 = 0x8000;      // Timer Event 4
    static constexpr uint32_t SETE1R_TIMEVNT3 = 0x4000;      // Timer Event 3
    static constexpr uint32_t SETE1R_TIMEVNT2 = 0x2000;      // Timer Event 2
    static constexpr uint32_t SETE1R_TIMEVNT1 = 0x1000;      // Timer Event 1
    static constexpr uint32_t SETE1R_MSTCMP4 = 0x800;        // Master Compare 4
    static constexpr uint32_t SETE1R_MSTCMP3 = 0x400;        // Master Compare 3
    static constexpr uint32_t SETE1R_MSTCMP2 = 0x200;        // Master Compare 2
    static constexpr uint32_t SETE1R_MSTCMP1 = 0x100;        // Master Compare 1
    static constexpr uint32_t SETE1R_MSTPER = 0x80;          // Master Period
    static constexpr uint32_t SETE1R_CMP4 = 0x40;            // Timer A compare 4
    static constexpr uint32_t SETE1R_CMP3 = 0x20;            // Timer A compare 3
    static constexpr uint32_t SETE1R_CMP2 = 0x10;            // Timer A compare 2
    static constexpr uint32_t SETE1R_CMP1 = 0x8;             // Timer A compare 1
    static constexpr uint32_t SETE1R_PER = 0x4;              // Timer A Period
    static constexpr uint32_t SETE1R_RESYNC = 0x2;           // Timer A resynchronizaton
    static constexpr uint32_t SETE1R_SST = 0x1;              // Software Set trigger

    static constexpr uint32_t RSTE1R_RESET_VALUE = 0x0;
    static constexpr uint32_t RSTE1R_UPDATE = 0x80000000;    // UPDATE
    static constexpr uint32_t RSTE1R_EXTEVNT10 = 0x40000000; // EXTEVNT10
    static constexpr uint32_t RSTE1R_EXTEVNT9 = 0x20000000;  // EXTEVNT9
    static constexpr uint32_t RSTE1R_EXTEVNT8 = 0x10000000;  // EXTEVNT8
    static constexpr uint32_t RSTE1R_EXTEVNT7 = 0x8000000;   // EXTEVNT7
    static constexpr uint32_t RSTE1R_EXTEVNT6 = 0x4000000;   // EXTEVNT6
    static constexpr uint32_t RSTE1R_EXTEVNT5 = 0x2000000;   // EXTEVNT5
    static constexpr uint32_t RSTE1R_EXTEVNT4 = 0x1000000;   // EXTEVNT4
    static constexpr uint32_t RSTE1R_EXTEVNT3 = 0x800000;    // EXTEVNT3
    static constexpr uint32_t RSTE1R_EXTEVNT2 = 0x400000;    // EXTEVNT2
    static constexpr uint32_t RSTE1R_EXTEVNT1 = 0x200000;    // EXTEVNT1
    static constexpr uint32_t RSTE1R_TIMEVNT9 = 0x100000;    // TIMEVNT9
    static constexpr uint32_t RSTE1R_TIMEVNT8 = 0x80000;     // TIMEVNT8
    static constexpr uint32_t RSTE1R_TIMEVNT7 = 0x40000;     // TIMEVNT7
    static constexpr uint32_t RSTE1R_TIMEVNT6 = 0x20000;     // TIMEVNT6
    static constexpr uint32_t RSTE1R_TIMEVNT5 = 0x10000;     // TIMEVNT5
    static constexpr uint32_t RSTE1R_TIMEVNT4 = 0x8000;      // TIMEVNT4
    static constexpr uint32_t RSTE1R_TIMEVNT3 = 0x4000;      // TIMEVNT3
    static constexpr uint32_t RSTE1R_TIMEVNT2 = 0x2000;      // TIMEVNT2
    static constexpr uint32_t RSTE1R_TIMEVNT1 = 0x1000;      // TIMEVNT1
    static constexpr uint32_t RSTE1R_MSTCMP4 = 0x800;        // MSTCMP4
    static constexpr uint32_t RSTE1R_MSTCMP3 = 0x400;        // MSTCMP3
    static constexpr uint32_t RSTE1R_MSTCMP2 = 0x200;        // MSTCMP2
    static constexpr uint32_t RSTE1R_MSTCMP1 = 0x100;        // MSTCMP1
    static constexpr uint32_t RSTE1R_MSTPER = 0x80;          // MSTPER
    static constexpr uint32_t RSTE1R_CMP4 = 0x40;            // CMP4
    static constexpr uint32_t RSTE1R_CMP3 = 0x20;            // CMP3
    static constexpr uint32_t RSTE1R_CMP2 = 0x10;            // CMP2
    static constexpr uint32_t RSTE1R_CMP1 = 0x8;             // CMP1
    static constexpr uint32_t RSTE1R_PER = 0x4;              // PER
    static constexpr uint32_t RSTE1R_RESYNC = 0x2;           // RESYNC
    static constexpr uint32_t RSTE1R_SRT = 0x1;              // SRT

    static constexpr uint32_t SETE2R_RESET_VALUE = 0x0;
    static constexpr uint32_t SETE2R_UPDATE = 0x80000000;    // UPDATE
    static constexpr uint32_t SETE2R_EXTEVNT10 = 0x40000000; // EXTEVNT10
    static constexpr uint32_t SETE2R_EXTEVNT9 = 0x20000000;  // EXTEVNT9
    static constexpr uint32_t SETE2R_EXTEVNT8 = 0x10000000;  // EXTEVNT8
    static constexpr uint32_t SETE2R_EXTEVNT7 = 0x8000000;   // EXTEVNT7
    static constexpr uint32_t SETE2R_EXTEVNT6 = 0x4000000;   // EXTEVNT6
    static constexpr uint32_t SETE2R_EXTEVNT5 = 0x2000000;   // EXTEVNT5
    static constexpr uint32_t SETE2R_EXTEVNT4 = 0x1000000;   // EXTEVNT4
    static constexpr uint32_t SETE2R_EXTEVNT3 = 0x800000;    // EXTEVNT3
    static constexpr uint32_t SETE2R_EXTEVNT2 = 0x400000;    // EXTEVNT2
    static constexpr uint32_t SETE2R_EXTEVNT1 = 0x200000;    // EXTEVNT1
    static constexpr uint32_t SETE2R_TIMEVNT9 = 0x100000;    // TIMEVNT9
    static constexpr uint32_t SETE2R_TIMEVNT8 = 0x80000;     // TIMEVNT8
    static constexpr uint32_t SETE2R_TIMEVNT7 = 0x40000;     // TIMEVNT7
    static constexpr uint32_t SETE2R_TIMEVNT6 = 0x20000;     // TIMEVNT6
    static constexpr uint32_t SETE2R_TIMEVNT5 = 0x10000;     // TIMEVNT5
    static constexpr uint32_t SETE2R_TIMEVNT4 = 0x8000;      // TIMEVNT4
    static constexpr uint32_t SETE2R_TIMEVNT3 = 0x4000;      // TIMEVNT3
    static constexpr uint32_t SETE2R_TIMEVNT2 = 0x2000;      // TIMEVNT2
    static constexpr uint32_t SETE2R_TIMEVNT1 = 0x1000;      // TIMEVNT1
    static constexpr uint32_t SETE2R_MSTCMP4 = 0x800;        // MSTCMP4
    static constexpr uint32_t SETE2R_MSTCMP3 = 0x400;        // MSTCMP3
    static constexpr uint32_t SETE2R_MSTCMP2 = 0x200;        // MSTCMP2
    static constexpr uint32_t SETE2R_MSTCMP1 = 0x100;        // MSTCMP1
    static constexpr uint32_t SETE2R_MSTPER = 0x80;          // MSTPER
    static constexpr uint32_t SETE2R_CMP4 = 0x40;            // CMP4
    static constexpr uint32_t SETE2R_CMP3 = 0x20;            // CMP3
    static constexpr uint32_t SETE2R_CMP2 = 0x10;            // CMP2
    static constexpr uint32_t SETE2R_CMP1 = 0x8;             // CMP1
    static constexpr uint32_t SETE2R_PER = 0x4;              // PER
    static constexpr uint32_t SETE2R_RESYNC = 0x2;           // RESYNC
    static constexpr uint32_t SETE2R_SST = 0x1;              // SST

    static constexpr uint32_t RSTE2R_RESET_VALUE = 0x0;
    static constexpr uint32_t RSTE2R_UPDATE = 0x80000000;    // UPDATE
    static constexpr uint32_t RSTE2R_EXTEVNT10 = 0x40000000; // EXTEVNT10
    static constexpr uint32_t RSTE2R_EXTEVNT9 = 0x20000000;  // EXTEVNT9
    static constexpr uint32_t RSTE2R_EXTEVNT8 = 0x10000000;  // EXTEVNT8
    static constexpr uint32_t RSTE2R_EXTEVNT7 = 0x8000000;   // EXTEVNT7
    static constexpr uint32_t RSTE2R_EXTEVNT6 = 0x4000000;   // EXTEVNT6
    static constexpr uint32_t RSTE2R_EXTEVNT5 = 0x2000000;   // EXTEVNT5
    static constexpr uint32_t RSTE2R_EXTEVNT4 = 0x1000000;   // EXTEVNT4
    static constexpr uint32_t RSTE2R_EXTEVNT3 = 0x800000;    // EXTEVNT3
    static constexpr uint32_t RSTE2R_EXTEVNT2 = 0x400000;    // EXTEVNT2
    static constexpr uint32_t RSTE2R_EXTEVNT1 = 0x200000;    // EXTEVNT1
    static constexpr uint32_t RSTE2R_TIMEVNT9 = 0x100000;    // TIMEVNT9
    static constexpr uint32_t RSTE2R_TIMEVNT8 = 0x80000;     // TIMEVNT8
    static constexpr uint32_t RSTE2R_TIMEVNT7 = 0x40000;     // TIMEVNT7
    static constexpr uint32_t RSTE2R_TIMEVNT6 = 0x20000;     // TIMEVNT6
    static constexpr uint32_t RSTE2R_TIMEVNT5 = 0x10000;     // TIMEVNT5
    static constexpr uint32_t RSTE2R_TIMEVNT4 = 0x8000;      // TIMEVNT4
    static constexpr uint32_t RSTE2R_TIMEVNT3 = 0x4000;      // TIMEVNT3
    static constexpr uint32_t RSTE2R_TIMEVNT2 = 0x2000;      // TIMEVNT2
    static constexpr uint32_t RSTE2R_TIMEVNT1 = 0x1000;      // TIMEVNT1
    static constexpr uint32_t RSTE2R_MSTCMP4 = 0x800;        // MSTCMP4
    static constexpr uint32_t RSTE2R_MSTCMP3 = 0x400;        // MSTCMP3
    static constexpr uint32_t RSTE2R_MSTCMP2 = 0x200;        // MSTCMP2
    static constexpr uint32_t RSTE2R_MSTCMP1 = 0x100;        // MSTCMP1
    static constexpr uint32_t RSTE2R_MSTPER = 0x80;          // MSTPER
    static constexpr uint32_t RSTE2R_CMP4 = 0x40;            // CMP4
    static constexpr uint32_t RSTE2R_CMP3 = 0x20;            // CMP3
    static constexpr uint32_t RSTE2R_CMP2 = 0x10;            // CMP2
    static constexpr uint32_t RSTE2R_CMP1 = 0x8;             // CMP1
    static constexpr uint32_t RSTE2R_PER = 0x4;              // PER
    static constexpr uint32_t RSTE2R_RESYNC = 0x2;           // RESYNC
    static constexpr uint32_t RSTE2R_SRT = 0x1;              // SRT

    static constexpr uint32_t EEFER1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EEFER1_EE5FLTR =            // External Event 5 filter
        bit_field_t<25, 0xf>::value<X>();
    static constexpr uint32_t EEFER1_EE5LTCH = 0x1000000; // External Event 5 latch
    template<uint32_t X>
    static constexpr uint32_t EEFER1_EE4FLTR =            // External Event 4 filter
        bit_field_t<19, 0xf>::value<X>();
    static constexpr uint32_t EEFER1_EE4LTCH = 0x40000;   // External Event 4 latch
    template<uint32_t X>
    static constexpr uint32_t EEFER1_EE3FLTR =            // External Event 3 filter
        bit_field_t<13, 0xf>::value<X>();
    static constexpr uint32_t EEFER1_EE3LTCH = 0x1000;    // External Event 3 latch
    template<uint32_t X>
    static constexpr uint32_t EEFER1_EE2FLTR =            // External Event 2 filter
        bit_field_t<7, 0xf>::value<X>();
    static constexpr uint32_t EEFER1_EE2LTCH = 0x40;      // External Event 2 latch
    template<uint32_t X>
    static constexpr uint32_t EEFER1_EE1FLTR =            // External Event 1 filter
        bit_field_t<1, 0xf>::value<X>();
    static constexpr uint32_t EEFER1_EE1LTCH = 0x1;       // External Event 1 latch

    static constexpr uint32_t EEFER2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EEFER2_EE10FLTR =            // External Event 10 filter
        bit_field_t<25, 0xf>::value<X>();
    static constexpr uint32_t EEFER2_EE10LTCH = 0x1000000; // External Event 10 latch
    template<uint32_t X>
    static constexpr uint32_t EEFER2_EE9FLTR =             // External Event 9 filter
        bit_field_t<19, 0xf>::value<X>();
    static constexpr uint32_t EEFER2_EE9LTCH = 0x40000;    // External Event 9 latch
    template<uint32_t X>
    static constexpr uint32_t EEFER2_EE8FLTR =             // External Event 8 filter
        bit_field_t<13, 0xf>::value<X>();
    static constexpr uint32_t EEFER2_EE8LTCH = 0x1000;     // External Event 8 latch
    template<uint32_t X>
    static constexpr uint32_t EEFER2_EE7FLTR =             // External Event 7 filter
        bit_field_t<7, 0xf>::value<X>();
    static constexpr uint32_t EEFER2_EE7LTCH = 0x40;       // External Event 7 latch
    template<uint32_t X>
    static constexpr uint32_t EEFER2_EE6FLTR =             // External Event 6 filter
        bit_field_t<1, 0xf>::value<X>();
    static constexpr uint32_t EEFER2_EE6LTCH = 0x1;        // External Event 6 latch

    static constexpr uint32_t RSTER_RESET_VALUE = 0x0;
    static constexpr uint32_t RSTER_TIMFCPM2 = 0x80000000; // Timer F Compare 2
    static constexpr uint32_t RSTER_TIMDCMP4 = 0x40000000; // Timer D Compare 4
    static constexpr uint32_t RSTER_TIMDCMP2 = 0x20000000; // Timer D Compare 2
    static constexpr uint32_t RSTER_TIMDCMP1 = 0x10000000; // Timer D Compare 1
    static constexpr uint32_t RSTER_TIMCCMP4 = 0x8000000;  // Timer C Compare 4
    static constexpr uint32_t RSTER_TIMCCMP2 = 0x4000000;  // Timer C Compare 2
    static constexpr uint32_t RSTER_TIMCCMP1 = 0x2000000;  // Timer C Compare 1
    static constexpr uint32_t RSTER_TIMBCMP4 = 0x1000000;  // Timer B Compare 4
    static constexpr uint32_t RSTER_TIMBCMP2 = 0x800000;   // Timer B Compare 2
    static constexpr uint32_t RSTER_TIMBCMP1 = 0x400000;   // Timer B Compare 1
    static constexpr uint32_t RSTER_TIMACMP4 = 0x200000;   // Timer A Compare 4
    static constexpr uint32_t RSTER_TIMACMP2 = 0x100000;   // Timer A Compare 2
    static constexpr uint32_t RSTER_TIMACMP1 = 0x80000;    // Timer A Compare 1
    static constexpr uint32_t RSTER_EXTEVNT10 = 0x40000;   // External Event 10
    static constexpr uint32_t RSTER_EXTEVNT9 = 0x20000;    // External Event 9
    static constexpr uint32_t RSTER_EXTEVNT8 = 0x10000;    // External Event 8
    static constexpr uint32_t RSTER_EXTEVNT7 = 0x8000;     // External Event 7
    static constexpr uint32_t RSTER_EXTEVNT6 = 0x4000;     // External Event 6
    static constexpr uint32_t RSTER_EXTEVNT5 = 0x2000;     // External Event 5
    static constexpr uint32_t RSTER_EXTEVNT4 = 0x1000;     // External Event 4
    static constexpr uint32_t RSTER_EXTEVNT3 = 0x800;      // External Event 3
    static constexpr uint32_t RSTER_EXTEVNT2 = 0x400;      // External Event 2
    static constexpr uint32_t RSTER_EXTEVNT1 = 0x200;      // External Event 1
    static constexpr uint32_t RSTER_MSTCMP4 = 0x100;       // Master compare 4
    static constexpr uint32_t RSTER_MSTCMP3 = 0x80;        // Master compare 3
    static constexpr uint32_t RSTER_MSTCMP2 = 0x40;        // Master compare 2
    static constexpr uint32_t RSTER_MSTCMP1 = 0x20;        // Master compare 1
    static constexpr uint32_t RSTER_MSTPER = 0x10;         // Master timer Period
    static constexpr uint32_t RSTER_CMP4 = 0x8;            // Timer A compare 4 reset
    static constexpr uint32_t RSTER_CMP2 = 0x4;            // Timer A compare 2 reset
    static constexpr uint32_t RSTER_UPDT = 0x2;            // Timer A Update reset
    static constexpr uint32_t RSTER_TIMFCMP1 = 0x1;        // Timer A Update reset

    static constexpr uint32_t CHPER_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CHPER_STRTPW =   // STRTPW
        bit_field_t<7, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CHPER_CHPDTY =   // Timerx chopper duty cycle value
        bit_field_t<4, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CHPER_CHPFRQ =   // Timerx carrier frequency value
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t CPT1ECR_RESET_VALUE = 0x0;
    static constexpr uint32_t CPT1ECR_TFCMP2 = 0x80000000; // TFCMP2
    static constexpr uint32_t CPT1ECR_TFCMP1 = 0x40000000; // TFCMP1
    static constexpr uint32_t CPT1ECR_TF1RST = 0x20000000; // TF1RST
    static constexpr uint32_t CPT1ECR_TF1SET = 0x10000000; // TF1SET
    static constexpr uint32_t CPT1ECR_TDCMP2 = 0x8000000;  // Timer D Compare 2
    static constexpr uint32_t CPT1ECR_TDCMP1 = 0x4000000;  // Timer D Compare 1
    static constexpr uint32_t CPT1ECR_TD1RST = 0x2000000;  // Timer D output 1 Reset
    static constexpr uint32_t CPT1ECR_TD1SET = 0x1000000;  // Timer D output 1 Set
    static constexpr uint32_t CPT1ECR_TCCMP2 = 0x800000;   // Timer C Compare 2
    static constexpr uint32_t CPT1ECR_TCCMP1 = 0x400000;   // Timer C Compare 1
    static constexpr uint32_t CPT1ECR_TC1RST = 0x200000;   // Timer C output 1 Reset
    static constexpr uint32_t CPT1ECR_TC1SET = 0x100000;   // Timer C output 1 Set
    static constexpr uint32_t CPT1ECR_TBCMP2 = 0x80000;    // Timer B Compare 2
    static constexpr uint32_t CPT1ECR_TBCMP1 = 0x40000;    // Timer B Compare 1
    static constexpr uint32_t CPT1ECR_TB1RST = 0x20000;    // Timer B output 1 Reset
    static constexpr uint32_t CPT1ECR_TB1SET = 0x10000;    // Timer B output 1 Set
    static constexpr uint32_t CPT1ECR_TACMP2 = 0x8000;     // Timer A Compare 2
    static constexpr uint32_t CPT1ECR_TACMP1 = 0x4000;     // Timer A Compare 1
    static constexpr uint32_t CPT1ECR_TA1RST = 0x2000;     // Timer A output 1 Reset
    static constexpr uint32_t CPT1ECR_TA1SET = 0x1000;     // Timer A output 1 Set
    static constexpr uint32_t CPT1ECR_EXEV10CPT = 0x800;   // External Event 10 Capture
    static constexpr uint32_t CPT1ECR_EXEV9CPT = 0x400;    // External Event 9 Capture
    static constexpr uint32_t CPT1ECR_EXEV8CPT = 0x200;    // External Event 8 Capture
    static constexpr uint32_t CPT1ECR_EXEV7CPT = 0x100;    // External Event 7 Capture
    static constexpr uint32_t CPT1ECR_EXEV6CPT = 0x80;     // External Event 6 Capture
    static constexpr uint32_t CPT1ECR_EXEV5CPT = 0x40;     // External Event 5 Capture
    static constexpr uint32_t CPT1ECR_EXEV4CPT = 0x20;     // External Event 4 Capture
    static constexpr uint32_t CPT1ECR_EXEV3CPT = 0x10;     // External Event 3 Capture
    static constexpr uint32_t CPT1ECR_EXEV2CPT = 0x8;      // External Event 2 Capture
    static constexpr uint32_t CPT1ECR_EXEV1CPT = 0x4;      // External Event 1 Capture
    static constexpr uint32_t CPT1ECR_UDPCPT = 0x2;        // Update Capture
    static constexpr uint32_t CPT1ECR_SWCPT = 0x1;         // Software Capture

    static constexpr uint32_t CPT2ECR_RESET_VALUE = 0x0;
    static constexpr uint32_t CPT2ECR_TFCMP2 = 0x80000000; // TFCMP2
    static constexpr uint32_t CPT2ECR_TFCMP1 = 0x40000000; // TFCMP1
    static constexpr uint32_t CPT2ECR_TF1RST = 0x20000000; // TF1RST
    static constexpr uint32_t CPT2ECR_TF1SET = 0x10000000; // TF1SET
    static constexpr uint32_t CPT2ECR_TDCMP2 = 0x8000000;  // Timer D Compare 2
    static constexpr uint32_t CPT2ECR_TDCMP1 = 0x4000000;  // Timer D Compare 1
    static constexpr uint32_t CPT2ECR_TD1RST = 0x2000000;  // Timer D output 1 Reset
    static constexpr uint32_t CPT2ECR_TD1SET = 0x1000000;  // Timer D output 1 Set
    static constexpr uint32_t CPT2ECR_TCCMP2 = 0x800000;   // Timer C Compare 2
    static constexpr uint32_t CPT2ECR_TCCMP1 = 0x400000;   // Timer C Compare 1
    static constexpr uint32_t CPT2ECR_TC1RST = 0x200000;   // Timer C output 1 Reset
    static constexpr uint32_t CPT2ECR_TC1SET = 0x100000;   // Timer C output 1 Set
    static constexpr uint32_t CPT2ECR_TBCMP2 = 0x80000;    // Timer B Compare 2
    static constexpr uint32_t CPT2ECR_TBCMP1 = 0x40000;    // Timer B Compare 1
    static constexpr uint32_t CPT2ECR_TB1RST = 0x20000;    // Timer B output 1 Reset
    static constexpr uint32_t CPT2ECR_TB1SET = 0x10000;    // Timer B output 1 Set
    static constexpr uint32_t CPT2ECR_TACMP2 = 0x8000;     // Timer A Compare 2
    static constexpr uint32_t CPT2ECR_TACMP1 = 0x4000;     // Timer A Compare 1
    static constexpr uint32_t CPT2ECR_TA1RST = 0x2000;     // Timer A output 1 Reset
    static constexpr uint32_t CPT2ECR_TA1SET = 0x1000;     // Timer A output 1 Set
    static constexpr uint32_t CPT2ECR_EXEV10CPT = 0x800;   // External Event 10 Capture
    static constexpr uint32_t CPT2ECR_EXEV9CPT = 0x400;    // External Event 9 Capture
    static constexpr uint32_t CPT2ECR_EXEV8CPT = 0x200;    // External Event 8 Capture
    static constexpr uint32_t CPT2ECR_EXEV7CPT = 0x100;    // External Event 7 Capture
    static constexpr uint32_t CPT2ECR_EXEV6CPT = 0x80;     // External Event 6 Capture
    static constexpr uint32_t CPT2ECR_EXEV5CPT = 0x40;     // External Event 5 Capture
    static constexpr uint32_t CPT2ECR_EXEV4CPT = 0x20;     // External Event 4 Capture
    static constexpr uint32_t CPT2ECR_EXEV3CPT = 0x10;     // External Event 3 Capture
    static constexpr uint32_t CPT2ECR_EXEV2CPT = 0x8;      // External Event 2 Capture
    static constexpr uint32_t CPT2ECR_EXEV1CPT = 0x4;      // External Event 1 Capture
    static constexpr uint32_t CPT2ECR_UDPCPT = 0x2;        // Update Capture
    static constexpr uint32_t CPT2ECR_SWCPT = 0x1;         // Software Capture

    static constexpr uint32_t OUTER_RESET_VALUE = 0x0;
    static constexpr uint32_t OUTER_DIDL2 = 0x800000; // Output 2 Deadtime upon burst mode Idle entry
    static constexpr uint32_t OUTER_CHP2 = 0x400000;  // Output 2 Chopper enable
    template<uint32_t X>
    static constexpr uint32_t OUTER_FAULT2 =          // Output 2 Fault state
        bit_field_t<20, 0x3>::value<X>();
    static constexpr uint32_t OUTER_IDLES2 = 0x80000; // Output 2 Idle State
    static constexpr uint32_t OUTER_IDLEM2 = 0x40000; // Output 2 Idle mode
    static constexpr uint32_t OUTER_POL2 = 0x20000;   // Output 2 polarity
    static constexpr uint32_t OUTER_BIAR = 0x4000;    // Balanced Idle Automatic Resume
    template<uint32_t X>
    static constexpr uint32_t OUTER_DLYPRT =          // Delayed Protection
        bit_field_t<10, 0x7>::value<X>();
    static constexpr uint32_t OUTER_DLYPRTEN = 0x200; // Delayed Protection Enable
    static constexpr uint32_t OUTER_DTEN = 0x100;     // Deadtime enable
    static constexpr uint32_t OUTER_DIDL1 = 0x80;     // Output 1 Deadtime upon burst mode Idle entry
    static constexpr uint32_t OUTER_CHP1 = 0x40;      // Output 1 Chopper enable
    template<uint32_t X>
    static constexpr uint32_t OUTER_FAULT1 =          // Output 1 Fault state
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t OUTER_IDLES1 = 0x8;     // Output 1 Idle State
    static constexpr uint32_t OUTER_IDLEM1 = 0x4;     // Output 1 Idle mode
    static constexpr uint32_t OUTER_POL1 = 0x2;       // Output 1 polarity

    static constexpr uint32_t FLTER_RESET_VALUE = 0x0;
    static constexpr uint32_t FLTER_FLTLCK = 0x80000000; // Fault sources Lock
    static constexpr uint32_t FLTER_FLT6EN = 0x20;       // Fault 6 enable
    static constexpr uint32_t FLTER_FLT5EN = 0x10;       // Fault 5 enable
    static constexpr uint32_t FLTER_FLT4EN = 0x8;        // Fault 4 enable
    static constexpr uint32_t FLTER_FLT3EN = 0x4;        // Fault 3 enable
    static constexpr uint32_t FLTER_FLT2EN = 0x2;        // Fault 2 enable
    static constexpr uint32_t FLTER_FLT1EN = 0x1;        // Fault 1 enable

    static constexpr uint32_t TIMECR2_RESET_VALUE = 0x0;
    static constexpr uint32_t TIMECR2_TRGHLF = 0x100000; // Triggered-half mode
    static constexpr uint32_t TIMECR2_GTCMP3 = 0x20000;  // Greater than Compare 3 PWM mode
    static constexpr uint32_t TIMECR2_GTCMP1 = 0x10000;  // Greater than Compare 1 PWM mode
    template<uint32_t X>
    static constexpr uint32_t TIMECR2_FEROM =            // Fault and Event Roll-Over Mode
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TIMECR2_BMROM =            // Burst Mode Roll-Over Mode
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TIMECR2_ADROM =            // ADC Roll-Over Mode
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TIMECR2_OUTROM =           // Output Roll-Over Mode
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TIMECR2_ROM =              // Roll-Over Mode
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t TIMECR2_UDM = 0x10;        // Up-Down Mode
    static constexpr uint32_t TIMECR2_DCDR = 0x4;        // Dual Channel DAC Reset trigger
    static constexpr uint32_t TIMECR2_DCDS = 0x2;        // Dual Channel DAC Step trigger
    static constexpr uint32_t TIMECR2_DCDE = 0x1;        // Dual Channel DAC trigger enable

    static constexpr uint32_t EEEFR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EEEFR3_EEVACNT =       // External Event A counter
        bit_field_t<8, 0x3f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EEEFR3_EEVASEL =       // External Event A Selection
        bit_field_t<4, 0xf>::value<X>();
    static constexpr uint32_t EEEFR3_EEVARSTM = 0x4; // External Event A Reset Mode
    static constexpr uint32_t EEEFR3_EEVACRES = 0x2; // External Event A Counter Reset
    static constexpr uint32_t EEEFR3_EEVACE = 0x1;   // External Event A Counter Enable
};


////
//
//      High Resolution Timer: TIMF
//
////

struct stm32g474xx_hrtim_timf_t
{
    volatile uint32_t TIMFCR;   // [read-write] Timerx Control Register
    volatile uint32_t TIMFISR;  // [read-only] Timerx Interrupt Status Register
    volatile uint32_t TIMFICR;  // [write-only] Timerx Interrupt Clear Register
    volatile uint32_t TIMFDIER; // [read-write] TIMxDIER
    volatile uint32_t CNTFR;    // [read-write] Timerx Counter Register
    volatile uint32_t PERFR;    // [read-write] Timerx Period Register
    volatile uint32_t REPFR;    // [read-write] Timerx Repetition Register
    volatile uint32_t CMP1FR;   // [read-write] Timerx Compare 1 Register
    volatile uint32_t CMP1CFR;  // [read-write] Timerx Compare 1 Compound Register
    volatile uint32_t CMP2FR;   // [read-write] Timerx Compare 2 Register
    volatile uint32_t CMP3FR;   // [read-write] Timerx Compare 3 Register
    volatile uint32_t CMP4FR;   // [read-write] Timerx Compare 4 Register
    volatile uint32_t CPT1FR;   // [read-only] Timerx Capture 1 Register
    volatile uint32_t CPT2FR;   // [read-only] Timerx Capture 2 Register
    volatile uint32_t DTFR;     // [read-write] Timerx Deadtime Register
    volatile uint32_t SETF1R;   // [read-write] Timerx Output1 Set Register
    volatile uint32_t RSTE1R;   // [read-write] Timerx Output1 Reset Register
    volatile uint32_t SETF2R;   // [read-write] Timerx Output2 Set Register
    volatile uint32_t RSTF2R;   // [read-write] Timerx Output2 Reset Register
    volatile uint32_t EEFFR1;   // [read-write] Timerx External Event Filtering Register 1
    volatile uint32_t EEFFR2;   // [read-write] Timerx External Event Filtering Register 2
    volatile uint32_t RSTFR;    // [read-write] TimerA Reset Register
    volatile uint32_t CHPFR;    // [read-write] Timerx Chopper Register
    volatile uint32_t CPT1FCR;  // [read-write] Timerx Capture 2 Control Register
    volatile uint32_t CPT2FCR;  // [read-write] CPT2xCR
    volatile uint32_t OUTFR;    // [read-write] Timerx Output Register
    volatile uint32_t FLTFR;    // [read-write] Timerx Fault Register
    volatile uint32_t TIMFCR2;  // [read-write] HRTIM Timerx Control Register 2
    volatile uint32_t FEEFR3;   // [read-write] HRTIM Timerx External Event Filtering Register 3

    static constexpr uint32_t TIMFCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t TIMFCR_UPDGAT =           // Update Gating
        bit_field_t<28, 0xf>::value<X>();
    static constexpr uint32_t TIMFCR_PREEN = 0x8000000; // Preload enable
    template<uint32_t X>
    static constexpr uint32_t TIMFCR_DACSYNC =          // AC Synchronization
        bit_field_t<25, 0x3>::value<X>();
    static constexpr uint32_t TIMFCR_MSTU = 0x1000000;  // Master Timer update
    static constexpr uint32_t TIMFCR_TDU = 0x400000;    // TDU
    static constexpr uint32_t TIMFCR_TCU = 0x200000;    // TCU
    static constexpr uint32_t TIMFCR_TBU = 0x100000;    // TBU
    static constexpr uint32_t TIMFCR_TAU = 0x80000;     // TAU
    static constexpr uint32_t TIMFCR_TxRSTU = 0x40000;  // Timerx reset update
    static constexpr uint32_t TIMFCR_TxREPU = 0x20000;  // Timer x Repetition update
    template<uint32_t X>
    static constexpr uint32_t TIMFCR_DELCMP4 =          // Delayed CMP4 mode
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TIMFCR_DELCMP2 =          // Delayed CMP2 mode
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t TIMFCR_SYNCSTRTx = 0x800; // Synchronization Starts Timer x
    static constexpr uint32_t TIMFCR_SYNCRSTx = 0x400;  // Synchronization Resets Timer x
    static constexpr uint32_t TIMFCR_RSYNCU = 0x200;    // Re-Synchronized Update
    template<uint32_t X>
    static constexpr uint32_t TIMFCR_INTLVD =           // Interleaved mode
        bit_field_t<7, 0x3>::value<X>();
    static constexpr uint32_t TIMFCR_PSHPLL = 0x40;     // Push-Pull mode enable
    static constexpr uint32_t TIMFCR_HALF = 0x20;       // Half mode enable
    static constexpr uint32_t TIMFCR_RETRIG = 0x10;     // Re-triggerable mode
    static constexpr uint32_t TIMFCR_CONT = 0x8;        // Continuous mode
    template<uint32_t X>
    static constexpr uint32_t TIMFCR_CK_PSCx =          // HRTIM Timer x Clock prescaler
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t TIMFISR_RESET_VALUE = 0x0;
    static constexpr uint32_t TIMFISR_O2CPY = 0x200000;  // Output 2 Copy
    static constexpr uint32_t TIMFISR_O1CPY = 0x100000;  // Output 1 Copy
    static constexpr uint32_t TIMFISR_O2STAT = 0x80000;  // Output 2 State
    static constexpr uint32_t TIMFISR_O1STAT = 0x40000;  // Output 1 State
    static constexpr uint32_t TIMFISR_IPPSTAT = 0x20000; // Idle Push Pull Status
    static constexpr uint32_t TIMFISR_CPPSTAT = 0x10000; // Current Push Pull Status
    static constexpr uint32_t TIMFISR_DLYPRT = 0x4000;   // Delayed Protection Flag
    static constexpr uint32_t TIMFISR_RST = 0x2000;      // Reset Interrupt Flag
    static constexpr uint32_t TIMFISR_RSTx2 = 0x1000;    // Output 2 Reset Interrupt Flag
    static constexpr uint32_t TIMFISR_SETx2 = 0x800;     // Output 2 Set Interrupt Flag
    static constexpr uint32_t TIMFISR_RSTx1 = 0x400;     // Output 1 Reset Interrupt Flag
    static constexpr uint32_t TIMFISR_SETx1 = 0x200;     // Output 1 Set Interrupt Flag
    static constexpr uint32_t TIMFISR_CPT2 = 0x100;      // Capture2 Interrupt Flag
    static constexpr uint32_t TIMFISR_CPT1 = 0x80;       // Capture1 Interrupt Flag
    static constexpr uint32_t TIMFISR_UPD = 0x40;        // Update Interrupt Flag
    static constexpr uint32_t TIMFISR_REP = 0x10;        // Repetition Interrupt Flag
    static constexpr uint32_t TIMFISR_CMP4 = 0x8;        // Compare 4 Interrupt Flag
    static constexpr uint32_t TIMFISR_CMP3 = 0x4;        // Compare 3 Interrupt Flag
    static constexpr uint32_t TIMFISR_CMP2 = 0x2;        // Compare 2 Interrupt Flag
    static constexpr uint32_t TIMFISR_CMP1 = 0x1;        // Compare 1 Interrupt Flag

    static constexpr uint32_t TIMFICR_RESET_VALUE = 0x0;
    static constexpr uint32_t TIMFICR_DLYPRTC = 0x4000; // Delayed Protection Flag Clear
    static constexpr uint32_t TIMFICR_RSTC = 0x2000;    // Reset Interrupt flag Clear
    static constexpr uint32_t TIMFICR_RSTx2C = 0x1000;  // Output 2 Reset flag Clear
    static constexpr uint32_t TIMFICR_SET2xC = 0x800;   // Output 2 Set flag Clear
    static constexpr uint32_t TIMFICR_RSTx1C = 0x400;   // Output 1 Reset flag Clear
    static constexpr uint32_t TIMFICR_SET1xC = 0x200;   // Output 1 Set flag Clear
    static constexpr uint32_t TIMFICR_CPT2C = 0x100;    // Capture2 Interrupt flag Clear
    static constexpr uint32_t TIMFICR_CPT1C = 0x80;     // Capture1 Interrupt flag Clear
    static constexpr uint32_t TIMFICR_UPDC = 0x40;      // Update Interrupt flag Clear
    static constexpr uint32_t TIMFICR_REPC = 0x10;      // Repetition Interrupt flag Clear
    static constexpr uint32_t TIMFICR_CMP4C = 0x8;      // Compare 4 Interrupt flag Clear
    static constexpr uint32_t TIMFICR_CMP3C = 0x4;      // Compare 3 Interrupt flag Clear
    static constexpr uint32_t TIMFICR_CMP2C = 0x2;      // Compare 2 Interrupt flag Clear
    static constexpr uint32_t TIMFICR_CMP1C = 0x1;      // Compare 1 Interrupt flag Clear

    static constexpr uint32_t TIMFDIER_RESET_VALUE = 0x0;
    static constexpr uint32_t TIMFDIER_DLYPRTDE = 0x40000000; // DLYPRTDE
    static constexpr uint32_t TIMFDIER_RSTDE = 0x20000000;    // RSTDE
    static constexpr uint32_t TIMFDIER_RSTx2DE = 0x10000000;  // RSTx2DE
    static constexpr uint32_t TIMFDIER_SETx2DE = 0x8000000;   // SETx2DE
    static constexpr uint32_t TIMFDIER_RSTx1DE = 0x4000000;   // RSTx1DE
    static constexpr uint32_t TIMFDIER_SET1xDE = 0x2000000;   // SET1xDE
    static constexpr uint32_t TIMFDIER_CPT2DE = 0x1000000;    // CPT2DE
    static constexpr uint32_t TIMFDIER_CPT1DE = 0x800000;     // CPT1DE
    static constexpr uint32_t TIMFDIER_UPDDE = 0x400000;      // UPDDE
    static constexpr uint32_t TIMFDIER_REPDE = 0x100000;      // REPDE
    static constexpr uint32_t TIMFDIER_CMP4DE = 0x80000;      // CMP4DE
    static constexpr uint32_t TIMFDIER_CMP3DE = 0x40000;      // CMP3DE
    static constexpr uint32_t TIMFDIER_CMP2DE = 0x20000;      // CMP2DE
    static constexpr uint32_t TIMFDIER_CMP1DE = 0x10000;      // CMP1DE
    static constexpr uint32_t TIMFDIER_DLYPRTIE = 0x4000;     // DLYPRTIE
    static constexpr uint32_t TIMFDIER_RSTIE = 0x2000;        // RSTIE
    static constexpr uint32_t TIMFDIER_RSTx2IE = 0x1000;      // RSTx2IE
    static constexpr uint32_t TIMFDIER_SETx2IE = 0x800;       // SETx2IE
    static constexpr uint32_t TIMFDIER_RSTx1IE = 0x400;       // RSTx1IE
    static constexpr uint32_t TIMFDIER_SET1xIE = 0x200;       // SET1xIE
    static constexpr uint32_t TIMFDIER_CPT2IE = 0x100;        // CPT2IE
    static constexpr uint32_t TIMFDIER_CPT1IE = 0x80;         // CPT1IE
    static constexpr uint32_t TIMFDIER_UPDIE = 0x40;          // UPDIE
    static constexpr uint32_t TIMFDIER_REPIE = 0x10;          // REPIE
    static constexpr uint32_t TIMFDIER_CMP4IE = 0x8;          // CMP4IE
    static constexpr uint32_t TIMFDIER_CMP3IE = 0x4;          // CMP3IE
    static constexpr uint32_t TIMFDIER_CMP2IE = 0x2;          // CMP2IE
    static constexpr uint32_t TIMFDIER_CMP1IE = 0x1;          // CMP1IE

    static constexpr uint32_t CNTFR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CNTFR_CNTx =   // Timerx Counter value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t PERFR_RESET_VALUE = 0xffff;
    template<uint32_t X>
    static constexpr uint32_t PERFR_PERx =   // Timerx Period value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t REPFR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t REPFR_REPx =   // Timerx Repetition counter value
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t CMP1FR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CMP1FR_CMP1x =   // Timerx Compare 1 value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CMP1CFR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CMP1CFR_REPx =    // Timerx Repetition value (aliased from HRTIM_REPx register)
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CMP1CFR_CMP1x =   // Timerx Compare 1 value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CMP2FR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CMP2FR_CMP2x =   // Timerx Compare 2 value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CMP3FR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CMP3FR_CMP3x =   // Timerx Compare 3 value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CMP4FR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CMP4FR_CMP4x =   // Timerx Compare 4 value
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CPT1FR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CPT1FR_CPT1x =        // Timerx Capture 1 value
        bit_field_t<0, 0xffff>::value<X>();
    static constexpr uint32_t CPT1FR_DIR = 0x10000; // Timerx Capture 1 Direction status

    static constexpr uint32_t CPT2FR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CPT2FR_CPT2x =        // Timerx Capture 2 value
        bit_field_t<0, 0xffff>::value<X>();
    static constexpr uint32_t CPT2FR_DIR = 0x10000; // Timerx Capture 1 Direction status

    static constexpr uint32_t DTFR_RESET_VALUE = 0x0;
    static constexpr uint32_t DTFR_DTFLKx = 0x80000000;  // Deadtime Falling Lock
    static constexpr uint32_t DTFR_DTFSLKx = 0x40000000; // Deadtime Falling Sign Lock
    static constexpr uint32_t DTFR_SDTFx = 0x2000000;    // Sign Deadtime Falling value
    template<uint32_t X>
    static constexpr uint32_t DTFR_DTFx =                // Deadtime Falling value
        bit_field_t<16, 0x1ff>::value<X>();
    static constexpr uint32_t DTFR_DTRLKx = 0x8000;      // Deadtime Rising Lock
    static constexpr uint32_t DTFR_DTRSLKx = 0x4000;     // Deadtime Rising Sign Lock
    template<uint32_t X>
    static constexpr uint32_t DTFR_DTPRSC =              // Deadtime Prescaler
        bit_field_t<10, 0x7>::value<X>();
    static constexpr uint32_t DTFR_SDTRx = 0x200;        // Sign Deadtime Rising value
    template<uint32_t X>
    static constexpr uint32_t DTFR_DTRx =                // Deadtime Rising value
        bit_field_t<0, 0x1ff>::value<X>();

    static constexpr uint32_t SETF1R_RESET_VALUE = 0x0;
    static constexpr uint32_t SETF1R_UPDATE = 0x80000000;    // Registers update (transfer preload to active)
    static constexpr uint32_t SETF1R_EXTEVNT10 = 0x40000000; // External Event 10
    static constexpr uint32_t SETF1R_EXTEVNT9 = 0x20000000;  // External Event 9
    static constexpr uint32_t SETF1R_EXTEVNT8 = 0x10000000;  // External Event 8
    static constexpr uint32_t SETF1R_EXTEVNT7 = 0x8000000;   // External Event 7
    static constexpr uint32_t SETF1R_EXTEVNT6 = 0x4000000;   // External Event 6
    static constexpr uint32_t SETF1R_EXTEVNT5 = 0x2000000;   // External Event 5
    static constexpr uint32_t SETF1R_EXTEVNT4 = 0x1000000;   // External Event 4
    static constexpr uint32_t SETF1R_EXTEVNT3 = 0x800000;    // External Event 3
    static constexpr uint32_t SETF1R_EXTEVNT2 = 0x400000;    // External Event 2
    static constexpr uint32_t SETF1R_EXTEVNT1 = 0x200000;    // External Event 1
    static constexpr uint32_t SETF1R_TIMEVNT9 = 0x100000;    // Timer Event 9
    static constexpr uint32_t SETF1R_TIMEVNT8 = 0x80000;     // Timer Event 8
    static constexpr uint32_t SETF1R_TIMEVNT7 = 0x40000;     // Timer Event 7
    static constexpr uint32_t SETF1R_TIMEVNT6 = 0x20000;     // Timer Event 6
    static constexpr uint32_t SETF1R_TIMEVNT5 = 0x10000;     // Timer Event 5
    static constexpr uint32_t SETF1R_TIMEVNT4 = 0x8000;      // Timer Event 4
    static constexpr uint32_t SETF1R_TIMEVNT3 = 0x4000;      // Timer Event 3
    static constexpr uint32_t SETF1R_TIMEVNT2 = 0x2000;      // Timer Event 2
    static constexpr uint32_t SETF1R_TIMEVNT1 = 0x1000;      // Timer Event 1
    static constexpr uint32_t SETF1R_MSTCMP4 = 0x800;        // Master Compare 4
    static constexpr uint32_t SETF1R_MSTCMP3 = 0x400;        // Master Compare 3
    static constexpr uint32_t SETF1R_MSTCMP2 = 0x200;        // Master Compare 2
    static constexpr uint32_t SETF1R_MSTCMP1 = 0x100;        // Master Compare 1
    static constexpr uint32_t SETF1R_MSTPER = 0x80;          // Master Period
    static constexpr uint32_t SETF1R_CMP4 = 0x40;            // Timer A compare 4
    static constexpr uint32_t SETF1R_CMP3 = 0x20;            // Timer A compare 3
    static constexpr uint32_t SETF1R_CMP2 = 0x10;            // Timer A compare 2
    static constexpr uint32_t SETF1R_CMP1 = 0x8;             // Timer A compare 1
    static constexpr uint32_t SETF1R_PER = 0x4;              // Timer A Period
    static constexpr uint32_t SETF1R_RESYNC = 0x2;           // Timer A resynchronizaton
    static constexpr uint32_t SETF1R_SST = 0x1;              // Software Set trigger

    static constexpr uint32_t RSTE1R_RESET_VALUE = 0x0;
    static constexpr uint32_t RSTE1R_UPDATE = 0x80000000;    // UPDATE
    static constexpr uint32_t RSTE1R_EXTEVNT10 = 0x40000000; // EXTEVNT10
    static constexpr uint32_t RSTE1R_EXTEVNT9 = 0x20000000;  // EXTEVNT9
    static constexpr uint32_t RSTE1R_EXTEVNT8 = 0x10000000;  // EXTEVNT8
    static constexpr uint32_t RSTE1R_EXTEVNT7 = 0x8000000;   // EXTEVNT7
    static constexpr uint32_t RSTE1R_EXTEVNT6 = 0x4000000;   // EXTEVNT6
    static constexpr uint32_t RSTE1R_EXTEVNT5 = 0x2000000;   // EXTEVNT5
    static constexpr uint32_t RSTE1R_EXTEVNT4 = 0x1000000;   // EXTEVNT4
    static constexpr uint32_t RSTE1R_EXTEVNT3 = 0x800000;    // EXTEVNT3
    static constexpr uint32_t RSTE1R_EXTEVNT2 = 0x400000;    // EXTEVNT2
    static constexpr uint32_t RSTE1R_EXTEVNT1 = 0x200000;    // EXTEVNT1
    static constexpr uint32_t RSTE1R_TIMEVNT9 = 0x100000;    // TIMEVNT9
    static constexpr uint32_t RSTE1R_TIMEVNT8 = 0x80000;     // TIMEVNT8
    static constexpr uint32_t RSTE1R_TIMEVNT7 = 0x40000;     // TIMEVNT7
    static constexpr uint32_t RSTE1R_TIMEVNT6 = 0x20000;     // TIMEVNT6
    static constexpr uint32_t RSTE1R_TIMEVNT5 = 0x10000;     // TIMEVNT5
    static constexpr uint32_t RSTE1R_TIMEVNT4 = 0x8000;      // TIMEVNT4
    static constexpr uint32_t RSTE1R_TIMEVNT3 = 0x4000;      // TIMEVNT3
    static constexpr uint32_t RSTE1R_TIMEVNT2 = 0x2000;      // TIMEVNT2
    static constexpr uint32_t RSTE1R_TIMEVNT1 = 0x1000;      // TIMEVNT1
    static constexpr uint32_t RSTE1R_MSTCMP4 = 0x800;        // MSTCMP4
    static constexpr uint32_t RSTE1R_MSTCMP3 = 0x400;        // MSTCMP3
    static constexpr uint32_t RSTE1R_MSTCMP2 = 0x200;        // MSTCMP2
    static constexpr uint32_t RSTE1R_MSTCMP1 = 0x100;        // MSTCMP1
    static constexpr uint32_t RSTE1R_MSTPER = 0x80;          // MSTPER
    static constexpr uint32_t RSTE1R_CMP4 = 0x40;            // CMP4
    static constexpr uint32_t RSTE1R_CMP3 = 0x20;            // CMP3
    static constexpr uint32_t RSTE1R_CMP2 = 0x10;            // CMP2
    static constexpr uint32_t RSTE1R_CMP1 = 0x8;             // CMP1
    static constexpr uint32_t RSTE1R_PER = 0x4;              // PER
    static constexpr uint32_t RSTE1R_RESYNC = 0x2;           // RESYNC
    static constexpr uint32_t RSTE1R_SRT = 0x1;              // SRT

    static constexpr uint32_t SETF2R_RESET_VALUE = 0x0;
    static constexpr uint32_t SETF2R_UPDATE = 0x80000000;    // UPDATE
    static constexpr uint32_t SETF2R_EXTEVNT10 = 0x40000000; // EXTEVNT10
    static constexpr uint32_t SETF2R_EXTEVNT9 = 0x20000000;  // EXTEVNT9
    static constexpr uint32_t SETF2R_EXTEVNT8 = 0x10000000;  // EXTEVNT8
    static constexpr uint32_t SETF2R_EXTEVNT7 = 0x8000000;   // EXTEVNT7
    static constexpr uint32_t SETF2R_EXTEVNT6 = 0x4000000;   // EXTEVNT6
    static constexpr uint32_t SETF2R_EXTEVNT5 = 0x2000000;   // EXTEVNT5
    static constexpr uint32_t SETF2R_EXTEVNT4 = 0x1000000;   // EXTEVNT4
    static constexpr uint32_t SETF2R_EXTEVNT3 = 0x800000;    // EXTEVNT3
    static constexpr uint32_t SETF2R_EXTEVNT2 = 0x400000;    // EXTEVNT2
    static constexpr uint32_t SETF2R_EXTEVNT1 = 0x200000;    // EXTEVNT1
    static constexpr uint32_t SETF2R_TIMEVNT9 = 0x100000;    // TIMEVNT9
    static constexpr uint32_t SETF2R_TIMEVNT8 = 0x80000;     // TIMEVNT8
    static constexpr uint32_t SETF2R_TIMEVNT7 = 0x40000;     // TIMEVNT7
    static constexpr uint32_t SETF2R_TIMEVNT6 = 0x20000;     // TIMEVNT6
    static constexpr uint32_t SETF2R_TIMEVNT5 = 0x10000;     // TIMEVNT5
    static constexpr uint32_t SETF2R_TIMEVNT4 = 0x8000;      // TIMEVNT4
    static constexpr uint32_t SETF2R_TIMEVNT3 = 0x4000;      // TIMEVNT3
    static constexpr uint32_t SETF2R_TIMEVNT2 = 0x2000;      // TIMEVNT2
    static constexpr uint32_t SETF2R_TIMEVNT1 = 0x1000;      // TIMEVNT1
    static constexpr uint32_t SETF2R_MSTCMP4 = 0x800;        // MSTCMP4
    static constexpr uint32_t SETF2R_MSTCMP3 = 0x400;        // MSTCMP3
    static constexpr uint32_t SETF2R_MSTCMP2 = 0x200;        // MSTCMP2
    static constexpr uint32_t SETF2R_MSTCMP1 = 0x100;        // MSTCMP1
    static constexpr uint32_t SETF2R_MSTPER = 0x80;          // MSTPER
    static constexpr uint32_t SETF2R_CMP4 = 0x40;            // CMP4
    static constexpr uint32_t SETF2R_CMP3 = 0x20;            // CMP3
    static constexpr uint32_t SETF2R_CMP2 = 0x10;            // CMP2
    static constexpr uint32_t SETF2R_CMP1 = 0x8;             // CMP1
    static constexpr uint32_t SETF2R_PER = 0x4;              // PER
    static constexpr uint32_t SETF2R_RESYNC = 0x2;           // RESYNC
    static constexpr uint32_t SETF2R_SST = 0x1;              // SST

    static constexpr uint32_t RSTF2R_RESET_VALUE = 0x0;
    static constexpr uint32_t RSTF2R_UPDATE = 0x80000000;    // UPDATE
    static constexpr uint32_t RSTF2R_EXTEVNT10 = 0x40000000; // EXTEVNT10
    static constexpr uint32_t RSTF2R_EXTEVNT9 = 0x20000000;  // EXTEVNT9
    static constexpr uint32_t RSTF2R_EXTEVNT8 = 0x10000000;  // EXTEVNT8
    static constexpr uint32_t RSTF2R_EXTEVNT7 = 0x8000000;   // EXTEVNT7
    static constexpr uint32_t RSTF2R_EXTEVNT6 = 0x4000000;   // EXTEVNT6
    static constexpr uint32_t RSTF2R_EXTEVNT5 = 0x2000000;   // EXTEVNT5
    static constexpr uint32_t RSTF2R_EXTEVNT4 = 0x1000000;   // EXTEVNT4
    static constexpr uint32_t RSTF2R_EXTEVNT3 = 0x800000;    // EXTEVNT3
    static constexpr uint32_t RSTF2R_EXTEVNT2 = 0x400000;    // EXTEVNT2
    static constexpr uint32_t RSTF2R_EXTEVNT1 = 0x200000;    // EXTEVNT1
    static constexpr uint32_t RSTF2R_TIMEVNT9 = 0x100000;    // TIMEVNT9
    static constexpr uint32_t RSTF2R_TIMEVNT8 = 0x80000;     // TIMEVNT8
    static constexpr uint32_t RSTF2R_TIMEVNT7 = 0x40000;     // TIMEVNT7
    static constexpr uint32_t RSTF2R_TIMEVNT6 = 0x20000;     // TIMEVNT6
    static constexpr uint32_t RSTF2R_TIMEVNT5 = 0x10000;     // TIMEVNT5
    static constexpr uint32_t RSTF2R_TIMEVNT4 = 0x8000;      // TIMEVNT4
    static constexpr uint32_t RSTF2R_TIMEVNT3 = 0x4000;      // TIMEVNT3
    static constexpr uint32_t RSTF2R_TIMEVNT2 = 0x2000;      // TIMEVNT2
    static constexpr uint32_t RSTF2R_TIMEVNT1 = 0x1000;      // TIMEVNT1
    static constexpr uint32_t RSTF2R_MSTCMP4 = 0x800;        // MSTCMP4
    static constexpr uint32_t RSTF2R_MSTCMP3 = 0x400;        // MSTCMP3
    static constexpr uint32_t RSTF2R_MSTCMP2 = 0x200;        // MSTCMP2
    static constexpr uint32_t RSTF2R_MSTCMP1 = 0x100;        // MSTCMP1
    static constexpr uint32_t RSTF2R_MSTPER = 0x80;          // MSTPER
    static constexpr uint32_t RSTF2R_CMP4 = 0x40;            // CMP4
    static constexpr uint32_t RSTF2R_CMP3 = 0x20;            // CMP3
    static constexpr uint32_t RSTF2R_CMP2 = 0x10;            // CMP2
    static constexpr uint32_t RSTF2R_CMP1 = 0x8;             // CMP1
    static constexpr uint32_t RSTF2R_PER = 0x4;              // PER
    static constexpr uint32_t RSTF2R_RESYNC = 0x2;           // RESYNC
    static constexpr uint32_t RSTF2R_SRT = 0x1;              // SRT

    static constexpr uint32_t EEFFR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EEFFR1_EE5FLTR =            // External Event 5 filter
        bit_field_t<25, 0xf>::value<X>();
    static constexpr uint32_t EEFFR1_EE5LTCH = 0x1000000; // External Event 5 latch
    template<uint32_t X>
    static constexpr uint32_t EEFFR1_EE4FLTR =            // External Event 4 filter
        bit_field_t<19, 0xf>::value<X>();
    static constexpr uint32_t EEFFR1_EE4LTCH = 0x40000;   // External Event 4 latch
    template<uint32_t X>
    static constexpr uint32_t EEFFR1_EE3FLTR =            // External Event 3 filter
        bit_field_t<13, 0xf>::value<X>();
    static constexpr uint32_t EEFFR1_EE3LTCH = 0x1000;    // External Event 3 latch
    template<uint32_t X>
    static constexpr uint32_t EEFFR1_EE2FLTR =            // External Event 2 filter
        bit_field_t<7, 0xf>::value<X>();
    static constexpr uint32_t EEFFR1_EE2LTCH = 0x40;      // External Event 2 latch
    template<uint32_t X>
    static constexpr uint32_t EEFFR1_EE1FLTR =            // External Event 1 filter
        bit_field_t<1, 0xf>::value<X>();
    static constexpr uint32_t EEFFR1_EE1LTCH = 0x1;       // External Event 1 latch

    static constexpr uint32_t EEFFR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EEFFR2_EE10FLTR =            // External Event 10 filter
        bit_field_t<25, 0xf>::value<X>();
    static constexpr uint32_t EEFFR2_EE10LTCH = 0x1000000; // External Event 10 latch
    template<uint32_t X>
    static constexpr uint32_t EEFFR2_EE9FLTR =             // External Event 9 filter
        bit_field_t<19, 0xf>::value<X>();
    static constexpr uint32_t EEFFR2_EE9LTCH = 0x40000;    // External Event 9 latch
    template<uint32_t X>
    static constexpr uint32_t EEFFR2_EE8FLTR =             // External Event 8 filter
        bit_field_t<13, 0xf>::value<X>();
    static constexpr uint32_t EEFFR2_EE8LTCH = 0x1000;     // External Event 8 latch
    template<uint32_t X>
    static constexpr uint32_t EEFFR2_EE7FLTR =             // External Event 7 filter
        bit_field_t<7, 0xf>::value<X>();
    static constexpr uint32_t EEFFR2_EE7LTCH = 0x40;       // External Event 7 latch
    template<uint32_t X>
    static constexpr uint32_t EEFFR2_EE6FLTR =             // External Event 6 filter
        bit_field_t<1, 0xf>::value<X>();
    static constexpr uint32_t EEFFR2_EE6LTCH = 0x1;        // External Event 6 latch

    static constexpr uint32_t RSTFR_RESET_VALUE = 0x0;
    static constexpr uint32_t RSTFR_TIMFCPM2 = 0x80000000; // Timer F Compare 2
    static constexpr uint32_t RSTFR_TIMDCMP4 = 0x40000000; // Timer D Compare 4
    static constexpr uint32_t RSTFR_TIMDCMP2 = 0x20000000; // Timer D Compare 2
    static constexpr uint32_t RSTFR_TIMDCMP1 = 0x10000000; // Timer D Compare 1
    static constexpr uint32_t RSTFR_TIMCCMP4 = 0x8000000;  // Timer C Compare 4
    static constexpr uint32_t RSTFR_TIMCCMP2 = 0x4000000;  // Timer C Compare 2
    static constexpr uint32_t RSTFR_TIMCCMP1 = 0x2000000;  // Timer C Compare 1
    static constexpr uint32_t RSTFR_TIMBCMP4 = 0x1000000;  // Timer B Compare 4
    static constexpr uint32_t RSTFR_TIMBCMP2 = 0x800000;   // Timer B Compare 2
    static constexpr uint32_t RSTFR_TIMBCMP1 = 0x400000;   // Timer B Compare 1
    static constexpr uint32_t RSTFR_TIMACMP4 = 0x200000;   // Timer A Compare 4
    static constexpr uint32_t RSTFR_TIMACMP2 = 0x100000;   // Timer A Compare 2
    static constexpr uint32_t RSTFR_TIMACMP1 = 0x80000;    // Timer A Compare 1
    static constexpr uint32_t RSTFR_EXTEVNT10 = 0x40000;   // External Event 10
    static constexpr uint32_t RSTFR_EXTEVNT9 = 0x20000;    // External Event 9
    static constexpr uint32_t RSTFR_EXTEVNT8 = 0x10000;    // External Event 8
    static constexpr uint32_t RSTFR_EXTEVNT7 = 0x8000;     // External Event 7
    static constexpr uint32_t RSTFR_EXTEVNT6 = 0x4000;     // External Event 6
    static constexpr uint32_t RSTFR_EXTEVNT5 = 0x2000;     // External Event 5
    static constexpr uint32_t RSTFR_EXTEVNT4 = 0x1000;     // External Event 4
    static constexpr uint32_t RSTFR_EXTEVNT3 = 0x800;      // External Event 3
    static constexpr uint32_t RSTFR_EXTEVNT2 = 0x400;      // External Event 2
    static constexpr uint32_t RSTFR_EXTEVNT1 = 0x200;      // External Event 1
    static constexpr uint32_t RSTFR_MSTCMP4 = 0x100;       // Master compare 4
    static constexpr uint32_t RSTFR_MSTCMP3 = 0x80;        // Master compare 3
    static constexpr uint32_t RSTFR_MSTCMP2 = 0x40;        // Master compare 2
    static constexpr uint32_t RSTFR_MSTCMP1 = 0x20;        // Master compare 1
    static constexpr uint32_t RSTFR_MSTPER = 0x10;         // Master timer Period
    static constexpr uint32_t RSTFR_CMP4 = 0x8;            // Timer A compare 4 reset
    static constexpr uint32_t RSTFR_CMP2 = 0x4;            // Timer A compare 2 reset
    static constexpr uint32_t RSTFR_UPDT = 0x2;            // Timer A Update reset
    static constexpr uint32_t RSTFR_TIMFCMP1 = 0x1;        // Timer A Update reset

    static constexpr uint32_t CHPFR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CHPFR_STRTPW =   // STRTPW
        bit_field_t<7, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CHPFR_CHPDTY =   // Timerx chopper duty cycle value
        bit_field_t<4, 0x7>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CHPFR_CHPFRQ =   // Timerx carrier frequency value
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t CPT1FCR_RESET_VALUE = 0x0;
    static constexpr uint32_t CPT1FCR_TECMP2 = 0x80000000; // TECMP2
    static constexpr uint32_t CPT1FCR_TECMP1 = 0x40000000; // TECMP1
    static constexpr uint32_t CPT1FCR_TE1RST = 0x20000000; // TE1RST
    static constexpr uint32_t CPT1FCR_TE1SET = 0x10000000; // TE1SET
    static constexpr uint32_t CPT1FCR_TDCMP2 = 0x8000000;  // Timer D Compare 2
    static constexpr uint32_t CPT1FCR_TDCMP1 = 0x4000000;  // Timer D Compare 1
    static constexpr uint32_t CPT1FCR_TD1RST = 0x2000000;  // Timer D output 1 Reset
    static constexpr uint32_t CPT1FCR_TD1SET = 0x1000000;  // Timer D output 1 Set
    static constexpr uint32_t CPT1FCR_TCCMP2 = 0x800000;   // Timer C Compare 2
    static constexpr uint32_t CPT1FCR_TCCMP1 = 0x400000;   // Timer C Compare 1
    static constexpr uint32_t CPT1FCR_TC1RST = 0x200000;   // Timer C output 1 Reset
    static constexpr uint32_t CPT1FCR_TC1SET = 0x100000;   // Timer C output 1 Set
    static constexpr uint32_t CPT1FCR_TBCMP2 = 0x80000;    // Timer B Compare 2
    static constexpr uint32_t CPT1FCR_TBCMP1 = 0x40000;    // Timer B Compare 1
    static constexpr uint32_t CPT1FCR_TB1RST = 0x20000;    // Timer B output 1 Reset
    static constexpr uint32_t CPT1FCR_TB1SET = 0x10000;    // Timer B output 1 Set
    static constexpr uint32_t CPT1FCR_TACMP2 = 0x8000;     // Timer A Compare 2
    static constexpr uint32_t CPT1FCR_TACMP1 = 0x4000;     // Timer A Compare 1
    static constexpr uint32_t CPT1FCR_TA1RST = 0x2000;     // Timer A output 1 Reset
    static constexpr uint32_t CPT1FCR_TA1SET = 0x1000;     // Timer A output 1 Set
    static constexpr uint32_t CPT1FCR_EXEV10CPT = 0x800;   // External Event 10 Capture
    static constexpr uint32_t CPT1FCR_EXEV9CPT = 0x400;    // External Event 9 Capture
    static constexpr uint32_t CPT1FCR_EXEV8CPT = 0x200;    // External Event 8 Capture
    static constexpr uint32_t CPT1FCR_EXEV7CPT = 0x100;    // External Event 7 Capture
    static constexpr uint32_t CPT1FCR_EXEV6CPT = 0x80;     // External Event 6 Capture
    static constexpr uint32_t CPT1FCR_EXEV5CPT = 0x40;     // External Event 5 Capture
    static constexpr uint32_t CPT1FCR_EXEV4CPT = 0x20;     // External Event 4 Capture
    static constexpr uint32_t CPT1FCR_EXEV3CPT = 0x10;     // External Event 3 Capture
    static constexpr uint32_t CPT1FCR_EXEV2CPT = 0x8;      // External Event 2 Capture
    static constexpr uint32_t CPT1FCR_EXEV1CPT = 0x4;      // External Event 1 Capture
    static constexpr uint32_t CPT1FCR_UDPCPT = 0x2;        // Update Capture
    static constexpr uint32_t CPT1FCR_SWCPT = 0x1;         // Software Capture

    static constexpr uint32_t CPT2FCR_RESET_VALUE = 0x0;
    static constexpr uint32_t CPT2FCR_TECMP2 = 0x80000000; // TECMP2
    static constexpr uint32_t CPT2FCR_TECMP1 = 0x40000000; // TECMP1
    static constexpr uint32_t CPT2FCR_TE1RST = 0x20000000; // TE1RST
    static constexpr uint32_t CPT2FCR_TE1SET = 0x10000000; // TE1SET
    static constexpr uint32_t CPT2FCR_TDCMP2 = 0x8000000;  // Timer D Compare 2
    static constexpr uint32_t CPT2FCR_TDCMP1 = 0x4000000;  // Timer D Compare 1
    static constexpr uint32_t CPT2FCR_TD1RST = 0x2000000;  // Timer D output 1 Reset
    static constexpr uint32_t CPT2FCR_TD1SET = 0x1000000;  // Timer D output 1 Set
    static constexpr uint32_t CPT2FCR_TCCMP2 = 0x800000;   // Timer C Compare 2
    static constexpr uint32_t CPT2FCR_TCCMP1 = 0x400000;   // Timer C Compare 1
    static constexpr uint32_t CPT2FCR_TC1RST = 0x200000;   // Timer C output 1 Reset
    static constexpr uint32_t CPT2FCR_TC1SET = 0x100000;   // Timer C output 1 Set
    static constexpr uint32_t CPT2FCR_TBCMP2 = 0x80000;    // Timer B Compare 2
    static constexpr uint32_t CPT2FCR_TBCMP1 = 0x40000;    // Timer B Compare 1
    static constexpr uint32_t CPT2FCR_TB1RST = 0x20000;    // Timer B output 1 Reset
    static constexpr uint32_t CPT2FCR_TB1SET = 0x10000;    // Timer B output 1 Set
    static constexpr uint32_t CPT2FCR_TACMP2 = 0x8000;     // Timer A Compare 2
    static constexpr uint32_t CPT2FCR_TACMP1 = 0x4000;     // Timer A Compare 1
    static constexpr uint32_t CPT2FCR_TA1RST = 0x2000;     // Timer A output 1 Reset
    static constexpr uint32_t CPT2FCR_TA1SET = 0x1000;     // Timer A output 1 Set
    static constexpr uint32_t CPT2FCR_EXEV10CPT = 0x800;   // External Event 10 Capture
    static constexpr uint32_t CPT2FCR_EXEV9CPT = 0x400;    // External Event 9 Capture
    static constexpr uint32_t CPT2FCR_EXEV8CPT = 0x200;    // External Event 8 Capture
    static constexpr uint32_t CPT2FCR_EXEV7CPT = 0x100;    // External Event 7 Capture
    static constexpr uint32_t CPT2FCR_EXEV6CPT = 0x80;     // External Event 6 Capture
    static constexpr uint32_t CPT2FCR_EXEV5CPT = 0x40;     // External Event 5 Capture
    static constexpr uint32_t CPT2FCR_EXEV4CPT = 0x20;     // External Event 4 Capture
    static constexpr uint32_t CPT2FCR_EXEV3CPT = 0x10;     // External Event 3 Capture
    static constexpr uint32_t CPT2FCR_EXEV2CPT = 0x8;      // External Event 2 Capture
    static constexpr uint32_t CPT2FCR_EXEV1CPT = 0x4;      // External Event 1 Capture
    static constexpr uint32_t CPT2FCR_UDPCPT = 0x2;        // Update Capture
    static constexpr uint32_t CPT2FCR_SWCPT = 0x1;         // Software Capture

    static constexpr uint32_t OUTFR_RESET_VALUE = 0x0;
    static constexpr uint32_t OUTFR_DIDL2 = 0x800000; // Output 2 Deadtime upon burst mode Idle entry
    static constexpr uint32_t OUTFR_CHP2 = 0x400000;  // Output 2 Chopper enable
    template<uint32_t X>
    static constexpr uint32_t OUTFR_FAULT2 =          // Output 2 Fault state
        bit_field_t<20, 0x3>::value<X>();
    static constexpr uint32_t OUTFR_IDLES2 = 0x80000; // Output 2 Idle State
    static constexpr uint32_t OUTFR_IDLEM2 = 0x40000; // Output 2 Idle mode
    static constexpr uint32_t OUTFR_POL2 = 0x20000;   // Output 2 polarity
    static constexpr uint32_t OUTFR_BIAR = 0x4000;    // Balanced Idle Automatic Resume
    template<uint32_t X>
    static constexpr uint32_t OUTFR_DLYPRT =          // Delayed Protection
        bit_field_t<10, 0x7>::value<X>();
    static constexpr uint32_t OUTFR_DLYPRTEN = 0x200; // Delayed Protection Enable
    static constexpr uint32_t OUTFR_DTEN = 0x100;     // Deadtime enable
    static constexpr uint32_t OUTFR_DIDL1 = 0x80;     // Output 1 Deadtime upon burst mode Idle entry
    static constexpr uint32_t OUTFR_CHP1 = 0x40;      // Output 1 Chopper enable
    template<uint32_t X>
    static constexpr uint32_t OUTFR_FAULT1 =          // Output 1 Fault state
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t OUTFR_IDLES1 = 0x8;     // Output 1 Idle State
    static constexpr uint32_t OUTFR_IDLEM1 = 0x4;     // Output 1 Idle mode
    static constexpr uint32_t OUTFR_POL1 = 0x2;       // Output 1 polarity

    static constexpr uint32_t FLTFR_RESET_VALUE = 0x0;
    static constexpr uint32_t FLTFR_FLTLCK = 0x80000000; // Fault sources Lock
    static constexpr uint32_t FLTFR_FLT6EN = 0x20;       // Fault 6 enable
    static constexpr uint32_t FLTFR_FLT5EN = 0x10;       // Fault 5 enable
    static constexpr uint32_t FLTFR_FLT4EN = 0x8;        // Fault 4 enable
    static constexpr uint32_t FLTFR_FLT3EN = 0x4;        // Fault 3 enable
    static constexpr uint32_t FLTFR_FLT2EN = 0x2;        // Fault 2 enable
    static constexpr uint32_t FLTFR_FLT1EN = 0x1;        // Fault 1 enable

    static constexpr uint32_t TIMFCR2_RESET_VALUE = 0x0;
    static constexpr uint32_t TIMFCR2_TRGHLF = 0x100000; // Triggered-half mode
    static constexpr uint32_t TIMFCR2_GTCMP3 = 0x20000;  // Greater than Compare 3 PWM mode
    static constexpr uint32_t TIMFCR2_GTCMP1 = 0x10000;  // Greater than Compare 1 PWM mode
    template<uint32_t X>
    static constexpr uint32_t TIMFCR2_FEROM =            // Fault and Event Roll-Over Mode
        bit_field_t<14, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TIMFCR2_BMROM =            // Burst Mode Roll-Over Mode
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TIMFCR2_ADROM =            // ADC Roll-Over Mode
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TIMFCR2_OUTROM =           // Output Roll-Over Mode
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t TIMFCR2_ROM =              // Roll-Over Mode
        bit_field_t<6, 0x3>::value<X>();
    static constexpr uint32_t TIMFCR2_UDM = 0x10;        // Up-Down Mode
    static constexpr uint32_t TIMFCR2_DCDR = 0x4;        // Dual Channel DAC Reset trigger
    static constexpr uint32_t TIMFCR2_DCDS = 0x2;        // Dual Channel DAC Step trigger
    static constexpr uint32_t TIMFCR2_DCDE = 0x1;        // Dual Channel DAC trigger enable

    static constexpr uint32_t FEEFR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FEEFR3_EEVACNT =       // External Event A counter
        bit_field_t<8, 0x3f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FEEFR3_EEVASEL =       // External Event A Selection
        bit_field_t<4, 0xf>::value<X>();
    static constexpr uint32_t FEEFR3_EEVARSTM = 0x4; // External Event A Reset Mode
    static constexpr uint32_t FEEFR3_EEVACRES = 0x2; // External Event A Counter Reset
    static constexpr uint32_t FEEFR3_EEVACE = 0x1;   // External Event A Counter Enable
};


template<>
struct peripheral_t<STM32G474xx, HRTIM_Master>
{
    typedef stm32g474xx_hrtim_master_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, HRTIM_Master>
{
    typedef stm32g474xx_hrtim_master_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G474xx, HRTIM_TIMA>
{
    typedef stm32g474xx_hrtim_tima_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, HRTIM_TIMA>
{
    typedef stm32g474xx_hrtim_tima_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G474xx, HRTIM_TIMB>
{
    typedef stm32g474xx_hrtim_timb_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, HRTIM_TIMB>
{
    typedef stm32g474xx_hrtim_timb_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G474xx, HRTIM_TIMC>
{
    typedef stm32g474xx_hrtim_timc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, HRTIM_TIMC>
{
    typedef stm32g474xx_hrtim_timc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G474xx, HRTIM_TIMD>
{
    typedef stm32g474xx_hrtim_timd_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, HRTIM_TIMD>
{
    typedef stm32g474xx_hrtim_timd_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G474xx, HRTIM_TIME>
{
    typedef stm32g474xx_hrtim_time_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, HRTIM_TIME>
{
    typedef stm32g474xx_hrtim_time_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G474xx, HRTIM_TIMF>
{
    typedef stm32g474xx_hrtim_timf_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, HRTIM_TIMF>
{
    typedef stm32g474xx_hrtim_timf_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G474xx, HRTIM_Common>
{
    typedef stm32g474xx_hrtim_common_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, HRTIM_Common>
{
    typedef stm32g474xx_hrtim_common_t T;
    static T& V;
};

using hrtim_common_t = peripheral_t<mcu_svd, HRTIM_Common>;
using hrtim_master_t = peripheral_t<mcu_svd, HRTIM_Master>;
using hrtim_tima_t = peripheral_t<mcu_svd, HRTIM_TIMA>;
using hrtim_timb_t = peripheral_t<mcu_svd, HRTIM_TIMB>;
using hrtim_timc_t = peripheral_t<mcu_svd, HRTIM_TIMC>;
using hrtim_timd_t = peripheral_t<mcu_svd, HRTIM_TIMD>;
using hrtim_time_t = peripheral_t<mcu_svd, HRTIM_TIME>;
using hrtim_timf_t = peripheral_t<mcu_svd, HRTIM_TIMF>;

