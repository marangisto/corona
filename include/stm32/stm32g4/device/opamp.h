#pragma once

////
//
//      STM32G4 OPAMP peripherals
//
////

////
//
//      Operational amplifiers
//
////

struct stm32g431xx_opamp_t
{
    volatile uint32_t OPAMP1_CSR;  // [read-write] OPAMP1 control/status register
    volatile uint32_t OPAMP2_CSR;  // [read-write] OPAMP2 control/status register
    volatile uint32_t OPAMP3_CSR;  // [read-write] OPAMP3 control/status register
    reserved_t<0x3> _0x18;
    volatile uint32_t OPAMP1_TCMR; // [read-write] OPAMP1 control/status register
    volatile uint32_t OPAMP2_TCMR; // [read-write] OPAMP2 control/status register
    volatile uint32_t OPAMP3_TCMR; // [read-write] OPAMP3 control/status register

    static constexpr uint32_t OPAMP1_CSR_RESET_VALUE = 0x0;
    static constexpr uint32_t OPAMP1_CSR_OPAEN = 0x1;         // Operational amplifier Enable
    static constexpr uint32_t OPAMP1_CSR_FORCE_VP = 0x2;      // FORCE_VP
    template<uint32_t X>
    static constexpr uint32_t OPAMP1_CSR_VP_SEL =             // VP_SEL
        bit_field_t<2, 0x3>::value<X>();
    static constexpr uint32_t OPAMP1_CSR_USERTRIM = 0x10;     // USERTRIM
    template<uint32_t X>
    static constexpr uint32_t OPAMP1_CSR_VM_SEL =             // VM_SEL
        bit_field_t<5, 0x3>::value<X>();
    static constexpr uint32_t OPAMP1_CSR_OPAHSM = 0x80;       // OPAHSM
    static constexpr uint32_t OPAMP1_CSR_OPAINTOEN = 0x100;   // OPAINTOEN
    static constexpr uint32_t OPAMP1_CSR_CALON = 0x800;       // CALON
    template<uint32_t X>
    static constexpr uint32_t OPAMP1_CSR_CALSEL =             // CALSEL
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OPAMP1_CSR_PGA_GAIN =           // PGA_GAIN
        bit_field_t<14, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OPAMP1_CSR_TRIMOFFSETP =        // TRIMOFFSETP
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OPAMP1_CSR_TRIMOFFSETN =        // TRIMOFFSETN
        bit_field_t<24, 0x1f>::value<X>();
    static constexpr uint32_t OPAMP1_CSR_CALOUT = 0x40000000; // CALOUT
    static constexpr uint32_t OPAMP1_CSR_LOCK = 0x80000000;   // LOCK

    static constexpr uint32_t OPAMP2_CSR_RESET_VALUE = 0x0;
    static constexpr uint32_t OPAMP2_CSR_OPAEN = 0x1;         // Operational amplifier Enable
    static constexpr uint32_t OPAMP2_CSR_FORCE_VP = 0x2;      // FORCE_VP
    template<uint32_t X>
    static constexpr uint32_t OPAMP2_CSR_VP_SEL =             // VP_SEL
        bit_field_t<2, 0x3>::value<X>();
    static constexpr uint32_t OPAMP2_CSR_USERTRIM = 0x10;     // USERTRIM
    template<uint32_t X>
    static constexpr uint32_t OPAMP2_CSR_VM_SEL =             // VM_SEL
        bit_field_t<5, 0x3>::value<X>();
    static constexpr uint32_t OPAMP2_CSR_OPAHSM = 0x80;       // OPAHSM
    static constexpr uint32_t OPAMP2_CSR_OPAINTOEN = 0x100;   // OPAINTOEN
    static constexpr uint32_t OPAMP2_CSR_CALON = 0x800;       // CALON
    template<uint32_t X>
    static constexpr uint32_t OPAMP2_CSR_CALSEL =             // CALSEL
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OPAMP2_CSR_PGA_GAIN =           // PGA_GAIN
        bit_field_t<14, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OPAMP2_CSR_TRIMOFFSETP =        // TRIMOFFSETP
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OPAMP2_CSR_TRIMOFFSETN =        // TRIMOFFSETN
        bit_field_t<24, 0x1f>::value<X>();
    static constexpr uint32_t OPAMP2_CSR_CALOUT = 0x40000000; // CALOUT
    static constexpr uint32_t OPAMP2_CSR_LOCK = 0x80000000;   // LOCK

    static constexpr uint32_t OPAMP3_CSR_RESET_VALUE = 0x0;
    static constexpr uint32_t OPAMP3_CSR_OPAEN = 0x1;         // Operational amplifier Enable
    static constexpr uint32_t OPAMP3_CSR_FORCE_VP = 0x2;      // FORCE_VP
    template<uint32_t X>
    static constexpr uint32_t OPAMP3_CSR_VP_SEL =             // VP_SEL
        bit_field_t<2, 0x3>::value<X>();
    static constexpr uint32_t OPAMP3_CSR_USERTRIM = 0x10;     // USERTRIM
    template<uint32_t X>
    static constexpr uint32_t OPAMP3_CSR_VM_SEL =             // VM_SEL
        bit_field_t<5, 0x3>::value<X>();
    static constexpr uint32_t OPAMP3_CSR_OPAHSM = 0x80;       // OPAHSM
    static constexpr uint32_t OPAMP3_CSR_OPAINTOEN = 0x100;   // OPAINTOEN
    static constexpr uint32_t OPAMP3_CSR_CALON = 0x800;       // CALON
    template<uint32_t X>
    static constexpr uint32_t OPAMP3_CSR_CALSEL =             // CALSEL
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OPAMP3_CSR_PGA_GAIN =           // PGA_GAIN
        bit_field_t<14, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OPAMP3_CSR_TRIMOFFSETP =        // TRIMOFFSETP
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OPAMP3_CSR_TRIMOFFSETN =        // TRIMOFFSETN
        bit_field_t<24, 0x1f>::value<X>();
    static constexpr uint32_t OPAMP3_CSR_CALOUT = 0x40000000; // CALOUT
    static constexpr uint32_t OPAMP3_CSR_LOCK = 0x80000000;   // LOCK

    static constexpr uint32_t OPAMP1_TCMR_RESET_VALUE = 0x0;
    static constexpr uint32_t OPAMP1_TCMR_VMS_SEL = 0x1;     // VMS_SEL
    template<uint32_t X>
    static constexpr uint32_t OPAMP1_TCMR_VPS_SEL =          // VPS_SEL
        bit_field_t<1, 0x3>::value<X>();
    static constexpr uint32_t OPAMP1_TCMR_T1CM_EN = 0x8;     // T1CM_EN
    static constexpr uint32_t OPAMP1_TCMR_T8CM_EN = 0x10;    // T8CM_EN
    static constexpr uint32_t OPAMP1_TCMR_T20CM_EN = 0x20;   // T20CM_EN
    static constexpr uint32_t OPAMP1_TCMR_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t OPAMP2_TCMR_RESET_VALUE = 0x0;
    static constexpr uint32_t OPAMP2_TCMR_VMS_SEL = 0x1;     // VMS_SEL
    template<uint32_t X>
    static constexpr uint32_t OPAMP2_TCMR_VPS_SEL =          // VPS_SEL
        bit_field_t<1, 0x3>::value<X>();
    static constexpr uint32_t OPAMP2_TCMR_T1CM_EN = 0x8;     // T1CM_EN
    static constexpr uint32_t OPAMP2_TCMR_T8CM_EN = 0x10;    // T8CM_EN
    static constexpr uint32_t OPAMP2_TCMR_T20CM_EN = 0x20;   // T20CM_EN
    static constexpr uint32_t OPAMP2_TCMR_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t OPAMP3_TCMR_RESET_VALUE = 0x0;
    static constexpr uint32_t OPAMP3_TCMR_VMS_SEL = 0x1;     // VMS_SEL
    template<uint32_t X>
    static constexpr uint32_t OPAMP3_TCMR_VPS_SEL =          // VPS_SEL
        bit_field_t<1, 0x3>::value<X>();
    static constexpr uint32_t OPAMP3_TCMR_T1CM_EN = 0x8;     // T1CM_EN
    static constexpr uint32_t OPAMP3_TCMR_T8CM_EN = 0x10;    // T8CM_EN
    static constexpr uint32_t OPAMP3_TCMR_T20CM_EN = 0x20;   // T20CM_EN
    static constexpr uint32_t OPAMP3_TCMR_LOCK = 0x80000000; // LOCK
};


////
//
//      Operational amplifiers
//
////

struct stm32g473xx_opamp_t
{
    volatile uint32_t OPAMP1_CSR;  // [read-write] OPAMP1 control/status register
    volatile uint32_t OPAMP2_CSR;  // [read-write] OPAMP2 control/status register
    volatile uint32_t OPAMP3_CSR;  // [read-write] OPAMP3 control/status register
    volatile uint32_t OPAMP4_CSR;  // [read-write] OPAMP4 control/status register
    volatile uint32_t OPAMP5_CSR;  // [read-write] OPAMP5 control/status register
    volatile uint32_t OPAMP6_CSR;  // [read-write] OPAMP6 control/status register
    volatile uint32_t OPAMP1_TCMR; // [read-write] OPAMP1 control/status register
    volatile uint32_t OPAMP2_TCMR; // [read-write] OPAMP2 control/status register
    volatile uint32_t OPAMP3_TCMR; // [read-write] OPAMP3 control/status register
    volatile uint32_t OPAMP4_TCMR; // [read-write] OPAMP4 control/status register
    volatile uint32_t OPAMP5_TCMR; // [read-write] OPAMP5 control/status register
    volatile uint32_t OPAMP6_TCMR; // [read-write] OPAMP6 control/status register

    static constexpr uint32_t OPAMP1_CSR_RESET_VALUE = 0x0;
    static constexpr uint32_t OPAMP1_CSR_OPAEN = 0x1;         // Operational amplifier Enable
    static constexpr uint32_t OPAMP1_CSR_FORCE_VP = 0x2;      // FORCE_VP
    template<uint32_t X>
    static constexpr uint32_t OPAMP1_CSR_VP_SEL =             // VP_SEL
        bit_field_t<2, 0x3>::value<X>();
    static constexpr uint32_t OPAMP1_CSR_USERTRIM = 0x10;     // USERTRIM
    template<uint32_t X>
    static constexpr uint32_t OPAMP1_CSR_VM_SEL =             // VM_SEL
        bit_field_t<5, 0x3>::value<X>();
    static constexpr uint32_t OPAMP1_CSR_OPAHSM = 0x80;       // OPAHSM
    static constexpr uint32_t OPAMP1_CSR_OPAINTOEN = 0x100;   // OPAINTOEN
    static constexpr uint32_t OPAMP1_CSR_CALON = 0x800;       // CALON
    template<uint32_t X>
    static constexpr uint32_t OPAMP1_CSR_CALSEL =             // CALSEL
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OPAMP1_CSR_PGA_GAIN =           // PGA_GAIN
        bit_field_t<14, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OPAMP1_CSR_TRIMOFFSETP =        // TRIMOFFSETP
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OPAMP1_CSR_TRIMOFFSETN =        // TRIMOFFSETN
        bit_field_t<24, 0x1f>::value<X>();
    static constexpr uint32_t OPAMP1_CSR_CALOUT = 0x40000000; // CALOUT
    static constexpr uint32_t OPAMP1_CSR_LOCK = 0x80000000;   // LOCK

    static constexpr uint32_t OPAMP2_CSR_RESET_VALUE = 0x0;
    static constexpr uint32_t OPAMP2_CSR_OPAEN = 0x1;         // Operational amplifier Enable
    static constexpr uint32_t OPAMP2_CSR_FORCE_VP = 0x2;      // FORCE_VP
    template<uint32_t X>
    static constexpr uint32_t OPAMP2_CSR_VP_SEL =             // VP_SEL
        bit_field_t<2, 0x3>::value<X>();
    static constexpr uint32_t OPAMP2_CSR_USERTRIM = 0x10;     // USERTRIM
    template<uint32_t X>
    static constexpr uint32_t OPAMP2_CSR_VM_SEL =             // VM_SEL
        bit_field_t<5, 0x3>::value<X>();
    static constexpr uint32_t OPAMP2_CSR_OPAHSM = 0x80;       // OPAHSM
    static constexpr uint32_t OPAMP2_CSR_OPAINTOEN = 0x100;   // OPAINTOEN
    static constexpr uint32_t OPAMP2_CSR_CALON = 0x800;       // CALON
    template<uint32_t X>
    static constexpr uint32_t OPAMP2_CSR_CALSEL =             // CALSEL
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OPAMP2_CSR_PGA_GAIN =           // PGA_GAIN
        bit_field_t<14, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OPAMP2_CSR_TRIMOFFSETP =        // TRIMOFFSETP
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OPAMP2_CSR_TRIMOFFSETN =        // TRIMOFFSETN
        bit_field_t<24, 0x1f>::value<X>();
    static constexpr uint32_t OPAMP2_CSR_CALOUT = 0x40000000; // CALOUT
    static constexpr uint32_t OPAMP2_CSR_LOCK = 0x80000000;   // LOCK

    static constexpr uint32_t OPAMP3_CSR_RESET_VALUE = 0x0;
    static constexpr uint32_t OPAMP3_CSR_OPAEN = 0x1;         // Operational amplifier Enable
    static constexpr uint32_t OPAMP3_CSR_FORCE_VP = 0x2;      // FORCE_VP
    template<uint32_t X>
    static constexpr uint32_t OPAMP3_CSR_VP_SEL =             // VP_SEL
        bit_field_t<2, 0x3>::value<X>();
    static constexpr uint32_t OPAMP3_CSR_USERTRIM = 0x10;     // USERTRIM
    template<uint32_t X>
    static constexpr uint32_t OPAMP3_CSR_VM_SEL =             // VM_SEL
        bit_field_t<5, 0x3>::value<X>();
    static constexpr uint32_t OPAMP3_CSR_OPAHSM = 0x80;       // OPAHSM
    static constexpr uint32_t OPAMP3_CSR_OPAINTOEN = 0x100;   // OPAINTOEN
    static constexpr uint32_t OPAMP3_CSR_CALON = 0x800;       // CALON
    template<uint32_t X>
    static constexpr uint32_t OPAMP3_CSR_CALSEL =             // CALSEL
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OPAMP3_CSR_PGA_GAIN =           // PGA_GAIN
        bit_field_t<14, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OPAMP3_CSR_TRIMOFFSETP =        // TRIMOFFSETP
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OPAMP3_CSR_TRIMOFFSETN =        // TRIMOFFSETN
        bit_field_t<24, 0x1f>::value<X>();
    static constexpr uint32_t OPAMP3_CSR_CALOUT = 0x40000000; // CALOUT
    static constexpr uint32_t OPAMP3_CSR_LOCK = 0x80000000;   // LOCK

    static constexpr uint32_t OPAMP4_CSR_RESET_VALUE = 0x0;
    static constexpr uint32_t OPAMP4_CSR_OPAEN = 0x1;         // Operational amplifier Enable
    static constexpr uint32_t OPAMP4_CSR_FORCE_VP = 0x2;      // FORCE_VP
    template<uint32_t X>
    static constexpr uint32_t OPAMP4_CSR_VP_SEL =             // VP_SEL
        bit_field_t<2, 0x3>::value<X>();
    static constexpr uint32_t OPAMP4_CSR_USERTRIM = 0x10;     // USERTRIM
    template<uint32_t X>
    static constexpr uint32_t OPAMP4_CSR_VM_SEL =             // VM_SEL
        bit_field_t<5, 0x3>::value<X>();
    static constexpr uint32_t OPAMP4_CSR_OPAHSM = 0x80;       // OPAHSM
    static constexpr uint32_t OPAMP4_CSR_OPAINTOEN = 0x100;   // OPAINTOEN
    static constexpr uint32_t OPAMP4_CSR_CALON = 0x800;       // CALON
    template<uint32_t X>
    static constexpr uint32_t OPAMP4_CSR_CALSEL =             // CALSEL
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OPAMP4_CSR_PGA_GAIN =           // PGA_GAIN
        bit_field_t<14, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OPAMP4_CSR_TRIMOFFSETP =        // TRIMOFFSETP
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OPAMP4_CSR_TRIMOFFSETN =        // TRIMOFFSETN
        bit_field_t<24, 0x1f>::value<X>();
    static constexpr uint32_t OPAMP4_CSR_CALOUT = 0x40000000; // CALOUT
    static constexpr uint32_t OPAMP4_CSR_LOCK = 0x80000000;   // LOCK

    static constexpr uint32_t OPAMP5_CSR_RESET_VALUE = 0x0;
    static constexpr uint32_t OPAMP5_CSR_OPAEN = 0x1;         // Operational amplifier Enable
    static constexpr uint32_t OPAMP5_CSR_FORCE_VP = 0x2;      // FORCE_VP
    template<uint32_t X>
    static constexpr uint32_t OPAMP5_CSR_VP_SEL =             // VP_SEL
        bit_field_t<2, 0x3>::value<X>();
    static constexpr uint32_t OPAMP5_CSR_USERTRIM = 0x10;     // USERTRIM
    template<uint32_t X>
    static constexpr uint32_t OPAMP5_CSR_VM_SEL =             // VM_SEL
        bit_field_t<5, 0x3>::value<X>();
    static constexpr uint32_t OPAMP5_CSR_OPAHSM = 0x80;       // OPAHSM
    static constexpr uint32_t OPAMP5_CSR_OPAINTOEN = 0x100;   // OPAINTOEN
    static constexpr uint32_t OPAMP5_CSR_CALON = 0x800;       // CALON
    template<uint32_t X>
    static constexpr uint32_t OPAMP5_CSR_CALSEL =             // CALSEL
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OPAMP5_CSR_PGA_GAIN =           // PGA_GAIN
        bit_field_t<14, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OPAMP5_CSR_TRIMOFFSETP =        // TRIMOFFSETP
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OPAMP5_CSR_TRIMOFFSETN =        // TRIMOFFSETN
        bit_field_t<24, 0x1f>::value<X>();
    static constexpr uint32_t OPAMP5_CSR_CALOUT = 0x40000000; // CALOUT
    static constexpr uint32_t OPAMP5_CSR_LOCK = 0x80000000;   // LOCK

    static constexpr uint32_t OPAMP6_CSR_RESET_VALUE = 0x0;
    static constexpr uint32_t OPAMP6_CSR_OPAEN = 0x1;         // Operational amplifier Enable
    static constexpr uint32_t OPAMP6_CSR_FORCE_VP = 0x2;      // FORCE_VP
    template<uint32_t X>
    static constexpr uint32_t OPAMP6_CSR_VP_SEL =             // VP_SEL
        bit_field_t<2, 0x3>::value<X>();
    static constexpr uint32_t OPAMP6_CSR_USERTRIM = 0x10;     // USERTRIM
    template<uint32_t X>
    static constexpr uint32_t OPAMP6_CSR_VM_SEL =             // VM_SEL
        bit_field_t<5, 0x3>::value<X>();
    static constexpr uint32_t OPAMP6_CSR_OPAHSM = 0x80;       // OPAHSM
    static constexpr uint32_t OPAMP6_CSR_OPAINTOEN = 0x100;   // OPAINTOEN
    static constexpr uint32_t OPAMP6_CSR_CALON = 0x800;       // CALON
    template<uint32_t X>
    static constexpr uint32_t OPAMP6_CSR_CALSEL =             // CALSEL
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OPAMP6_CSR_PGA_GAIN =           // PGA_GAIN
        bit_field_t<14, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OPAMP6_CSR_TRIMOFFSETP =        // TRIMOFFSETP
        bit_field_t<19, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OPAMP6_CSR_TRIMOFFSETN =        // TRIMOFFSETN
        bit_field_t<24, 0x1f>::value<X>();
    static constexpr uint32_t OPAMP6_CSR_CALOUT = 0x40000000; // CALOUT
    static constexpr uint32_t OPAMP6_CSR_LOCK = 0x80000000;   // LOCK

    static constexpr uint32_t OPAMP1_TCMR_RESET_VALUE = 0x0;
    static constexpr uint32_t OPAMP1_TCMR_VMS_SEL = 0x1;     // VMS_SEL
    template<uint32_t X>
    static constexpr uint32_t OPAMP1_TCMR_VPS_SEL =          // VPS_SEL
        bit_field_t<1, 0x3>::value<X>();
    static constexpr uint32_t OPAMP1_TCMR_T1CM_EN = 0x8;     // T1CM_EN
    static constexpr uint32_t OPAMP1_TCMR_T8CM_EN = 0x10;    // T8CM_EN
    static constexpr uint32_t OPAMP1_TCMR_T20CM_EN = 0x20;   // T20CM_EN
    static constexpr uint32_t OPAMP1_TCMR_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t OPAMP2_TCMR_RESET_VALUE = 0x0;
    static constexpr uint32_t OPAMP2_TCMR_VMS_SEL = 0x1;     // VMS_SEL
    template<uint32_t X>
    static constexpr uint32_t OPAMP2_TCMR_VPS_SEL =          // VPS_SEL
        bit_field_t<1, 0x3>::value<X>();
    static constexpr uint32_t OPAMP2_TCMR_T1CM_EN = 0x8;     // T1CM_EN
    static constexpr uint32_t OPAMP2_TCMR_T8CM_EN = 0x10;    // T8CM_EN
    static constexpr uint32_t OPAMP2_TCMR_T20CM_EN = 0x20;   // T20CM_EN
    static constexpr uint32_t OPAMP2_TCMR_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t OPAMP3_TCMR_RESET_VALUE = 0x0;
    static constexpr uint32_t OPAMP3_TCMR_VMS_SEL = 0x1;     // VMS_SEL
    template<uint32_t X>
    static constexpr uint32_t OPAMP3_TCMR_VPS_SEL =          // VPS_SEL
        bit_field_t<1, 0x3>::value<X>();
    static constexpr uint32_t OPAMP3_TCMR_T1CM_EN = 0x8;     // T1CM_EN
    static constexpr uint32_t OPAMP3_TCMR_T8CM_EN = 0x10;    // T8CM_EN
    static constexpr uint32_t OPAMP3_TCMR_T20CM_EN = 0x20;   // T20CM_EN
    static constexpr uint32_t OPAMP3_TCMR_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t OPAMP4_TCMR_RESET_VALUE = 0x0;
    static constexpr uint32_t OPAMP4_TCMR_VMS_SEL = 0x1;     // VMS_SEL
    template<uint32_t X>
    static constexpr uint32_t OPAMP4_TCMR_VPS_SEL =          // VPS_SEL
        bit_field_t<1, 0x3>::value<X>();
    static constexpr uint32_t OPAMP4_TCMR_T1CM_EN = 0x8;     // T1CM_EN
    static constexpr uint32_t OPAMP4_TCMR_T8CM_EN = 0x10;    // T8CM_EN
    static constexpr uint32_t OPAMP4_TCMR_T20CM_EN = 0x20;   // T20CM_EN
    static constexpr uint32_t OPAMP4_TCMR_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t OPAMP5_TCMR_RESET_VALUE = 0x0;
    static constexpr uint32_t OPAMP5_TCMR_VMS_SEL = 0x1;     // VMS_SEL
    template<uint32_t X>
    static constexpr uint32_t OPAMP5_TCMR_VPS_SEL =          // VPS_SEL
        bit_field_t<1, 0x3>::value<X>();
    static constexpr uint32_t OPAMP5_TCMR_T1CM_EN = 0x8;     // T1CM_EN
    static constexpr uint32_t OPAMP5_TCMR_T8CM_EN = 0x10;    // T8CM_EN
    static constexpr uint32_t OPAMP5_TCMR_T20CM_EN = 0x20;   // T20CM_EN
    static constexpr uint32_t OPAMP5_TCMR_LOCK = 0x80000000; // LOCK

    static constexpr uint32_t OPAMP6_TCMR_RESET_VALUE = 0x0;
    static constexpr uint32_t OPAMP6_TCMR_VMS_SEL = 0x1;     // VMS_SEL
    template<uint32_t X>
    static constexpr uint32_t OPAMP6_TCMR_VPS_SEL =          // VPS_SEL
        bit_field_t<1, 0x3>::value<X>();
    static constexpr uint32_t OPAMP6_TCMR_T1CM_EN = 0x8;     // T1CM_EN
    static constexpr uint32_t OPAMP6_TCMR_T8CM_EN = 0x10;    // T8CM_EN
    static constexpr uint32_t OPAMP6_TCMR_T20CM_EN = 0x20;   // T20CM_EN
    static constexpr uint32_t OPAMP6_TCMR_LOCK = 0x80000000; // LOCK
};


template<>
struct peripheral_t<STM32G431xx, OPAMP>
{
    typedef stm32g431xx_opamp_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G441xx, OPAMP>
{
    typedef stm32g431xx_opamp_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G471xx, OPAMP>
{
    typedef stm32g431xx_opamp_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G473xx, OPAMP>
{
    typedef stm32g473xx_opamp_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G474xx, OPAMP>
{
    typedef stm32g473xx_opamp_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G483xx, OPAMP>
{
    typedef stm32g473xx_opamp_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, OPAMP>
{
    typedef stm32g473xx_opamp_t T;
    static T& V;
};

using opamp_t = peripheral_t<mcu_svd, OPAMP>;

