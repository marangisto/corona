#pragma once

////
//
//      STM32H7 RAMECC peripherals
//
////

////
//
//      ECC controller is associated to each RAM area
//
////

struct stm32h745_cm4_ramecc1_t
{
    volatile uint32_t IER;    // [read-write] RAMECC interrupt enable register
    reserved_t<0x7> _0x20;
    volatile uint32_t M1CR;   // [read-write] RAMECC monitor x configuration register
    volatile uint32_t M1SR;   // [read-write] RAMECC monitor x status register
    volatile uint32_t M1FAR;  // [read-write] RAMECC monitor x failing address register
    volatile uint32_t M1FDRL; // [read-write] RAMECC monitor x failing data low register
    volatile uint32_t M1FDRH; // [read-write] RAMECC monitor x failing data high register
    volatile uint32_t M1FECR; // [read-write] RAMECC monitor x failing ECC error code register
    reserved_t<0x2> _0x40;
    volatile uint32_t M2CR;   // [read-write] RAMECC monitor x configuration register
    volatile uint32_t M2SR;   // [read-write] RAMECC monitor x status register
    volatile uint32_t M2FAR;  // [read-write] RAMECC monitor x failing address register
    volatile uint32_t M2FDRL; // [read-write] RAMECC monitor x failing data low register
    volatile uint32_t M2FDRH; // [read-only] RAMECC monitor x failing data high register
    reserved_t<0x1> _0x58;
    volatile uint32_t M2FECR; // [read-only] RAMECC monitor x failing ECC error code register
    reserved_t<0x1> _0x60;
    volatile uint32_t M3CR;   // [read-only] RAMECC monitor x configuration register
    volatile uint32_t M3SR;   // [read-only] RAMECC monitor x status register
    volatile uint32_t M3FAR;  // [read-write] RAMECC monitor x failing address register
    volatile uint32_t M3FDRL; // [read-only] RAMECC monitor x failing data low register
    volatile uint32_t M3FDRH; // [read-only] RAMECC monitor x failing data high register
    reserved_t<0x2> _0x7c;
    volatile uint32_t M3FECR; // [read-only] RAMECC monitor x failing ECC error code register
    volatile uint32_t M4CR;   // [read-only] RAMECC monitor x configuration register
    volatile uint32_t M4SR;   // [read-only] RAMECC monitor x status register
    volatile uint32_t M4FAR;  // [read-only] RAMECC monitor x failing address register
    volatile uint32_t M4FDRL; // [read-write] RAMECC monitor x failing data low register
    volatile uint32_t M4FDRH; // [read-only] RAMECC monitor x failing data high register
    reserved_t<0x3> _0xa0;
    volatile uint32_t M5CR;   // [read-only] RAMECC monitor x configuration register
    volatile uint32_t M5SR;   // [read-write] RAMECC monitor x status register
    volatile uint32_t M5FAR;  // [read-write] RAMECC monitor x failing address register
    volatile uint32_t M5FDRL; // [read-only] RAMECC monitor x failing data low register
    volatile uint32_t M5FDRH; // [read-only] RAMECC monitor x failing data high register
    volatile uint32_t M5FECR; // [read-only] RAMECC monitor x failing ECC error code register

    static constexpr uint32_t IER_RESET_VALUE = 0x0;
    static constexpr uint32_t IER_GIE = 0x1;        // Global interrupt enable
    static constexpr uint32_t IER_GECCSEIE_ = 0x2;  // Global ECC single error interrupt enable
    static constexpr uint32_t IER_GECCDEIE = 0x4;   // Global ECC double error interrupt enable
    static constexpr uint32_t IER_GECCDEBWIE = 0x8; // Global ECC double error on byte write (BW) interrupt enable

    static constexpr uint32_t M1CR_RESET_VALUE = 0x0;
    static constexpr uint32_t M1CR_ECCSEIE = 0x4;    // ECC single error interrupt enable
    static constexpr uint32_t M1CR_ECCDEIE = 0x8;    // ECC double error interrupt enable
    static constexpr uint32_t M1CR_ECCDEBWIE = 0x10; // ECC double error on byte write (BW) interrupt enable
    static constexpr uint32_t M1CR_ECCELEN = 0x20;   // ECC error latching enable

    static constexpr uint32_t M1SR_RESET_VALUE = 0x0;
    static constexpr uint32_t M1SR_ECCSEIE = 0x4;    // ECC single error interrupt enable
    static constexpr uint32_t M1SR_ECCDEIE = 0x8;    // ECC double error interrupt enable
    static constexpr uint32_t M1SR_ECCDEBWIE = 0x10; // ECC double error on byte write (BW) interrupt enable
    static constexpr uint32_t M1SR_ECCELEN = 0x20;   // ECC error latching enable

    static constexpr uint32_t M1FAR_RESET_VALUE = 0x0;
    static constexpr uint32_t M1FAR_ECCSEIE = 0x4;    // ECC single error interrupt enable
    static constexpr uint32_t M1FAR_ECCDEIE = 0x8;    // ECC double error interrupt enable
    static constexpr uint32_t M1FAR_ECCDEBWIE = 0x10; // ECC double error on byte write (BW) interrupt enable
    static constexpr uint32_t M1FAR_ECCELEN = 0x20;   // ECC error latching enable

    static constexpr uint32_t M1FDRL_RESET_VALUE = 0x0;
    static constexpr uint32_t M1FDRL_ECCSEIE = 0x4;    // ECC single error interrupt enable
    static constexpr uint32_t M1FDRL_ECCDEIE = 0x8;    // ECC double error interrupt enable
    static constexpr uint32_t M1FDRL_ECCDEBWIE = 0x10; // ECC double error on byte write (BW) interrupt enable
    static constexpr uint32_t M1FDRL_ECCELEN = 0x20;   // ECC error latching enable

    static constexpr uint32_t M1FDRH_RESET_VALUE = 0x0;
    static constexpr uint32_t M1FDRH_ECCSEIE = 0x4;    // ECC single error interrupt enable
    static constexpr uint32_t M1FDRH_ECCDEIE = 0x8;    // ECC double error interrupt enable
    static constexpr uint32_t M1FDRH_ECCDEBWIE = 0x10; // ECC double error on byte write (BW) interrupt enable
    static constexpr uint32_t M1FDRH_ECCELEN = 0x20;   // ECC error latching enable

    static constexpr uint32_t M1FECR_RESET_VALUE = 0x0;
    static constexpr uint32_t M1FECR_SEDCF = 0x1;  // ECC single error detected and corrected flag
    static constexpr uint32_t M1FECR_DEDF = 0x2;   // ECC double error detected flag
    static constexpr uint32_t M1FECR_DEBWDF = 0x4; // ECC double error on byte write (BW) detected flag

    static constexpr uint32_t M2CR_RESET_VALUE = 0x0;
    static constexpr uint32_t M2CR_SEDCF = 0x1;  // ECC single error detected and corrected flag
    static constexpr uint32_t M2CR_DEDF = 0x2;   // ECC double error detected flag
    static constexpr uint32_t M2CR_DEBWDF = 0x4; // ECC double error on byte write (BW) detected flag

    static constexpr uint32_t M2SR_RESET_VALUE = 0x0;
    static constexpr uint32_t M2SR_SEDCF = 0x1;  // ECC single error detected and corrected flag
    static constexpr uint32_t M2SR_DEDF = 0x2;   // ECC double error detected flag
    static constexpr uint32_t M2SR_DEBWDF = 0x4; // ECC double error on byte write (BW) detected flag

    static constexpr uint32_t M2FAR_RESET_VALUE = 0x0;
    static constexpr uint32_t M2FAR_SEDCF = 0x1;  // ECC single error detected and corrected flag
    static constexpr uint32_t M2FAR_DEDF = 0x2;   // ECC double error detected flag
    static constexpr uint32_t M2FAR_DEBWDF = 0x4; // ECC double error on byte write (BW) detected flag

    static constexpr uint32_t M2FDRL_RESET_VALUE = 0x0;
    static constexpr uint32_t M2FDRL_SEDCF = 0x1;  // ECC single error detected and corrected flag
    static constexpr uint32_t M2FDRL_DEDF = 0x2;   // ECC double error detected flag
    static constexpr uint32_t M2FDRL_DEBWDF = 0x4; // ECC double error on byte write (BW) detected flag

    static constexpr uint32_t M2FDRH_RESET_VALUE = 0x0;

    static constexpr uint32_t M2FECR_RESET_VALUE = 0x0;

    static constexpr uint32_t M3CR_RESET_VALUE = 0x0;

    static constexpr uint32_t M3SR_RESET_VALUE = 0x0;

    static constexpr uint32_t M3FAR_RESET_VALUE = 0x0;

    static constexpr uint32_t M3FDRL_RESET_VALUE = 0x0;

    static constexpr uint32_t M3FDRH_RESET_VALUE = 0x0;

    static constexpr uint32_t M3FECR_RESET_VALUE = 0x0;

    static constexpr uint32_t M4CR_RESET_VALUE = 0x0;

    static constexpr uint32_t M4SR_RESET_VALUE = 0x0;

    static constexpr uint32_t M4FAR_RESET_VALUE = 0x0;

    static constexpr uint32_t M4FDRL_RESET_VALUE = 0x0;

    static constexpr uint32_t M4FDRH_RESET_VALUE = 0x0;

    static constexpr uint32_t M4FECR_RESET_VALUE = 0x0;

    static constexpr uint32_t M5CR_RESET_VALUE = 0x0;

    static constexpr uint32_t M5SR_RESET_VALUE = 0x0;

    static constexpr uint32_t M5FAR_RESET_VALUE = 0x0;

    static constexpr uint32_t M5FDRL_RESET_VALUE = 0x0;

    static constexpr uint32_t M5FDRH_RESET_VALUE = 0x0;

    static constexpr uint32_t M5FECR_RESET_VALUE = 0x0;
};


////
//
//      ECC controller is associated to each RAM area
//
////

struct stm32h745_cm4_ramecc2_t
{
    volatile uint32_t IER;    // [read-write] RAMECC interrupt enable register
    reserved_t<0x7> _0x20;
    volatile uint32_t M1CR;   // [read-write] RAMECC monitor x configuration register
    volatile uint32_t M1SR;   // [read-write] RAMECC monitor x status register
    volatile uint32_t M1FAR;  // [read-only] RAMECC monitor x failing address register
    volatile uint32_t M1FDRL; // [read-only] RAMECC monitor x failing data low register
    volatile uint32_t M1FDRH; // [read-only] RAMECC monitor x failing data high register
    volatile uint32_t M1FECR; // [read-write] RAMECC monitor x failing ECC error code register
    reserved_t<0x2> _0x40;
    volatile uint32_t M2CR;   // [read-write] RAMECC monitor x configuration register
    volatile uint32_t M2SR;   // [read-write] RAMECC monitor x status register
    volatile uint32_t M2FAR;  // [read-only] RAMECC monitor x failing address register
    volatile uint32_t M2FDRL; // [read-only] RAMECC monitor x failing data low register
    volatile uint32_t M2FDRH; // [read-write] RAMECC monitor x failing data high register
    reserved_t<0x1> _0x58;
    volatile uint32_t M2FECR; // [read-write] RAMECC monitor x failing ECC error code register
    reserved_t<0x1> _0x60;
    volatile uint32_t M3CR;   // [read-write] RAMECC monitor x configuration register
    volatile uint32_t M3SR;   // [read-write] RAMECC monitor x status register
    volatile uint32_t M3FAR;  // [read-only] RAMECC monitor x failing address register
    volatile uint32_t M3FDRL; // [read-only] RAMECC monitor x failing data low register
    volatile uint32_t M3FDRH; // [read-only] RAMECC monitor x failing data high register
    reserved_t<0x2> _0x7c;
    volatile uint32_t M3FECR; // [read-only] RAMECC monitor x failing ECC error code register
    volatile uint32_t M4CR;   // [read-write] RAMECC monitor x configuration register
    volatile uint32_t M4SR;   // [read-write] RAMECC monitor x status register
    volatile uint32_t M4FAR;  // [read-only] RAMECC monitor x failing address register
    volatile uint32_t M4FDRL; // [read-only] RAMECC monitor x failing data low register
    volatile uint32_t M4FDRH; // [read-only] RAMECC monitor x failing data high register
    reserved_t<0x3> _0xa0;
    volatile uint32_t M5CR;   // [read-write] RAMECC monitor x configuration register
    volatile uint32_t M5SR;   // [read-write] RAMECC monitor x status register
    volatile uint32_t M5FAR;  // [read-write] RAMECC monitor x failing address register
    volatile uint32_t M5FDRL; // [read-only] RAMECC monitor x failing data low register
    volatile uint32_t M5FDRH; // [read-only] RAMECC monitor x failing data high register
    volatile uint32_t M5FECR; // [read-only] RAMECC monitor x failing ECC error code register

    static constexpr uint32_t IER_RESET_VALUE = 0x0;
    static constexpr uint32_t IER_GIE = 0x1;        // Global interrupt enable
    static constexpr uint32_t IER_GECCSEIE_ = 0x2;  // Global ECC single error interrupt enable
    static constexpr uint32_t IER_GECCDEIE = 0x4;   // Global ECC double error interrupt enable
    static constexpr uint32_t IER_GECCDEBWIE = 0x8; // Global ECC double error on byte write (BW) interrupt enable

    static constexpr uint32_t M1CR_RESET_VALUE = 0x0;
    static constexpr uint32_t M1CR_ECCSEIE = 0x4;    // ECC single error interrupt enable
    static constexpr uint32_t M1CR_ECCDEIE = 0x8;    // ECC double error interrupt enable
    static constexpr uint32_t M1CR_ECCDEBWIE = 0x10; // ECC double error on byte write (BW) interrupt enable
    static constexpr uint32_t M1CR_ECCELEN = 0x20;   // ECC error latching enable

    static constexpr uint32_t M2CR_RESET_VALUE = 0x0;
    static constexpr uint32_t M2CR_ECCSEIE = 0x4;    // ECC single error interrupt enable
    static constexpr uint32_t M2CR_ECCDEIE = 0x8;    // ECC double error interrupt enable
    static constexpr uint32_t M2CR_ECCDEBWIE = 0x10; // ECC double error on byte write (BW) interrupt enable
    static constexpr uint32_t M2CR_ECCELEN = 0x20;   // ECC error latching enable

    static constexpr uint32_t M3CR_RESET_VALUE = 0x0;
    static constexpr uint32_t M3CR_ECCSEIE = 0x4;    // ECC single error interrupt enable
    static constexpr uint32_t M3CR_ECCDEIE = 0x8;    // ECC double error interrupt enable
    static constexpr uint32_t M3CR_ECCDEBWIE = 0x10; // ECC double error on byte write (BW) interrupt enable
    static constexpr uint32_t M3CR_ECCELEN = 0x20;   // ECC error latching enable

    static constexpr uint32_t M4CR_RESET_VALUE = 0x0;
    static constexpr uint32_t M4CR_ECCSEIE = 0x4;    // ECC single error interrupt enable
    static constexpr uint32_t M4CR_ECCDEIE = 0x8;    // ECC double error interrupt enable
    static constexpr uint32_t M4CR_ECCDEBWIE = 0x10; // ECC double error on byte write (BW) interrupt enable
    static constexpr uint32_t M4CR_ECCELEN = 0x20;   // ECC error latching enable

    static constexpr uint32_t M5CR_RESET_VALUE = 0x0;
    static constexpr uint32_t M5CR_ECCSEIE = 0x4;    // ECC single error interrupt enable
    static constexpr uint32_t M5CR_ECCDEIE = 0x8;    // ECC double error interrupt enable
    static constexpr uint32_t M5CR_ECCDEBWIE = 0x10; // ECC double error on byte write (BW) interrupt enable
    static constexpr uint32_t M5CR_ECCELEN = 0x20;   // ECC error latching enable

    static constexpr uint32_t M1SR_RESET_VALUE = 0x0;
    static constexpr uint32_t M1SR_SEDCF = 0x1;  // ECC single error detected and corrected flag
    static constexpr uint32_t M1SR_DEDF = 0x2;   // ECC double error detected flag
    static constexpr uint32_t M1SR_DEBWDF = 0x4; // ECC double error on byte write (BW) detected flag

    static constexpr uint32_t M2SR_RESET_VALUE = 0x0;
    static constexpr uint32_t M2SR_SEDCF = 0x1;  // ECC single error detected and corrected flag
    static constexpr uint32_t M2SR_DEDF = 0x2;   // ECC double error detected flag
    static constexpr uint32_t M2SR_DEBWDF = 0x4; // ECC double error on byte write (BW) detected flag

    static constexpr uint32_t M3SR_RESET_VALUE = 0x0;
    static constexpr uint32_t M3SR_SEDCF = 0x1;  // ECC single error detected and corrected flag
    static constexpr uint32_t M3SR_DEDF = 0x2;   // ECC double error detected flag
    static constexpr uint32_t M3SR_DEBWDF = 0x4; // ECC double error on byte write (BW) detected flag

    static constexpr uint32_t M4SR_RESET_VALUE = 0x0;
    static constexpr uint32_t M4SR_SEDCF = 0x1;  // ECC single error detected and corrected flag
    static constexpr uint32_t M4SR_DEDF = 0x2;   // ECC double error detected flag
    static constexpr uint32_t M4SR_DEBWDF = 0x4; // ECC double error on byte write (BW) detected flag

    static constexpr uint32_t M5SR_RESET_VALUE = 0x0;
    static constexpr uint32_t M5SR_SEDCF = 0x1;  // ECC single error detected and corrected flag
    static constexpr uint32_t M5SR_DEDF = 0x2;   // ECC double error detected flag
    static constexpr uint32_t M5SR_DEBWDF = 0x4; // ECC double error on byte write (BW) detected flag

    static constexpr uint32_t M1FAR_RESET_VALUE = 0x0;

    static constexpr uint32_t M2FAR_RESET_VALUE = 0x0;

    static constexpr uint32_t M3FAR_RESET_VALUE = 0x0;

    static constexpr uint32_t M4FAR_RESET_VALUE = 0x0;

    static constexpr uint32_t M5FAR_RESET_VALUE = 0x0;

    static constexpr uint32_t M1FDRL_RESET_VALUE = 0x0;

    static constexpr uint32_t M2FDRL_RESET_VALUE = 0x0;

    static constexpr uint32_t M3FDRL_RESET_VALUE = 0x0;

    static constexpr uint32_t M4FDRL_RESET_VALUE = 0x0;

    static constexpr uint32_t M5FDRL_RESET_VALUE = 0x0;

    static constexpr uint32_t M1FDRH_RESET_VALUE = 0x0;

    static constexpr uint32_t M2FDRH_RESET_VALUE = 0x0;

    static constexpr uint32_t M3FDRH_RESET_VALUE = 0x0;

    static constexpr uint32_t M4FDRH_RESET_VALUE = 0x0;

    static constexpr uint32_t M5FDRH_RESET_VALUE = 0x0;

    static constexpr uint32_t M1FECR_RESET_VALUE = 0x0;

    static constexpr uint32_t M2FECR_RESET_VALUE = 0x0;

    static constexpr uint32_t M3FECR_RESET_VALUE = 0x0;

    static constexpr uint32_t M4FECR_RESET_VALUE = 0x0;

    static constexpr uint32_t M5FECR_RESET_VALUE = 0x0;
};


////
//
//      ECC controller is associated to each RAM area
//
////

struct stm32h745_cm4_ramecc3_t
{
    volatile uint32_t IER;    // [read-write] RAMECC interrupt enable register
    reserved_t<0x7> _0x20;
    volatile uint32_t M1CR;   // [read-write] RAMECC monitor x configuration register
    volatile uint32_t M1SR;   // [read-write] RAMECC monitor x status register
    volatile uint32_t M1FAR;  // [read-only] RAMECC monitor x failing address register
    volatile uint32_t M1FDRL; // [read-only] RAMECC monitor x failing data low register
    volatile uint32_t M1FDRH; // [read-only] RAMECC monitor x failing data high register
    volatile uint32_t M1FECR; // [read-write] RAMECC monitor x failing ECC error code register
    reserved_t<0x2> _0x40;
    volatile uint32_t M2CR;   // [read-write] RAMECC monitor x configuration register
    volatile uint32_t M2SR;   // [read-write] RAMECC monitor x status register
    volatile uint32_t M2FAR;  // [read-only] RAMECC monitor x failing address register
    volatile uint32_t M2FDRL; // [read-only] RAMECC monitor x failing data low register
    volatile uint32_t M2FDRH; // [read-write] RAMECC monitor x failing data high register
    reserved_t<0x1> _0x58;
    volatile uint32_t M2FECR; // [read-write] RAMECC monitor x failing ECC error code register

    static constexpr uint32_t IER_RESET_VALUE = 0x0;
    static constexpr uint32_t IER_GIE = 0x1;        // Global interrupt enable
    static constexpr uint32_t IER_GECCSEIE_ = 0x2;  // Global ECC single error interrupt enable
    static constexpr uint32_t IER_GECCDEIE = 0x4;   // Global ECC double error interrupt enable
    static constexpr uint32_t IER_GECCDEBWIE = 0x8; // Global ECC double error on byte write (BW) interrupt enable

    static constexpr uint32_t M1CR_RESET_VALUE = 0x0;
    static constexpr uint32_t M1CR_ECCSEIE = 0x4;    // ECC single error interrupt enable
    static constexpr uint32_t M1CR_ECCDEIE = 0x8;    // ECC double error interrupt enable
    static constexpr uint32_t M1CR_ECCDEBWIE = 0x10; // ECC double error on byte write (BW) interrupt enable
    static constexpr uint32_t M1CR_ECCELEN = 0x20;   // ECC error latching enable

    static constexpr uint32_t M2CR_RESET_VALUE = 0x0;
    static constexpr uint32_t M2CR_ECCSEIE = 0x4;    // ECC single error interrupt enable
    static constexpr uint32_t M2CR_ECCDEIE = 0x8;    // ECC double error interrupt enable
    static constexpr uint32_t M2CR_ECCDEBWIE = 0x10; // ECC double error on byte write (BW) interrupt enable
    static constexpr uint32_t M2CR_ECCELEN = 0x20;   // ECC error latching enable

    static constexpr uint32_t M1SR_RESET_VALUE = 0x0;
    static constexpr uint32_t M1SR_SEDCF = 0x1;  // ECC single error detected and corrected flag
    static constexpr uint32_t M1SR_DEDF = 0x2;   // ECC double error detected flag
    static constexpr uint32_t M1SR_DEBWDF = 0x4; // ECC double error on byte write (BW) detected flag

    static constexpr uint32_t M2SR_RESET_VALUE = 0x0;
    static constexpr uint32_t M2SR_SEDCF = 0x1;  // ECC single error detected and corrected flag
    static constexpr uint32_t M2SR_DEDF = 0x2;   // ECC double error detected flag
    static constexpr uint32_t M2SR_DEBWDF = 0x4; // ECC double error on byte write (BW) detected flag

    static constexpr uint32_t M1FAR_RESET_VALUE = 0x0;

    static constexpr uint32_t M2FAR_RESET_VALUE = 0x0;

    static constexpr uint32_t M1FDRL_RESET_VALUE = 0x0;

    static constexpr uint32_t M2FDRL_RESET_VALUE = 0x0;

    static constexpr uint32_t M1FDRH_RESET_VALUE = 0x0;

    static constexpr uint32_t M2FDRH_RESET_VALUE = 0x0;

    static constexpr uint32_t M1FECR_RESET_VALUE = 0x0;

    static constexpr uint32_t M2FECR_RESET_VALUE = 0x0;
};


template<>
struct peripheral_t<STM32H745_CM4, RAMECC1>
{
    typedef stm32h745_cm4_ramecc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, RAMECC1>
{
    typedef stm32h745_cm4_ramecc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, RAMECC1>
{
    typedef stm32h745_cm4_ramecc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, RAMECC1>
{
    typedef stm32h745_cm4_ramecc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, RAMECC1>
{
    typedef stm32h745_cm4_ramecc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, RAMECC1>
{
    typedef stm32h745_cm4_ramecc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, RAMECC1>
{
    typedef stm32h745_cm4_ramecc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, RAMECC1>
{
    typedef stm32h745_cm4_ramecc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, RAMECC>
{
    typedef stm32h745_cm4_ramecc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, RAMECC>
{
    typedef stm32h745_cm4_ramecc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, RAMECC>
{
    typedef stm32h745_cm4_ramecc1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, RAMECC2>
{
    typedef stm32h745_cm4_ramecc2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, RAMECC2>
{
    typedef stm32h745_cm4_ramecc2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, RAMECC2>
{
    typedef stm32h745_cm4_ramecc2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, RAMECC2>
{
    typedef stm32h745_cm4_ramecc2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, RAMECC2>
{
    typedef stm32h745_cm4_ramecc2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, RAMECC2>
{
    typedef stm32h745_cm4_ramecc2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, RAMECC2>
{
    typedef stm32h745_cm4_ramecc2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, RAMECC2>
{
    typedef stm32h745_cm4_ramecc2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, RAMECC3>
{
    typedef stm32h745_cm4_ramecc3_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, RAMECC3>
{
    typedef stm32h745_cm4_ramecc3_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, RAMECC3>
{
    typedef stm32h745_cm4_ramecc3_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, RAMECC3>
{
    typedef stm32h745_cm4_ramecc3_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, RAMECC3>
{
    typedef stm32h745_cm4_ramecc3_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, RAMECC3>
{
    typedef stm32h745_cm4_ramecc3_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, RAMECC3>
{
    typedef stm32h745_cm4_ramecc3_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, RAMECC3>
{
    typedef stm32h745_cm4_ramecc3_t T;
    static T& V;
};

using ramecc_t = peripheral_t<mcu_svd, RAMECC>;
using ramecc1_t = peripheral_t<mcu_svd, RAMECC1>;
using ramecc2_t = peripheral_t<mcu_svd, RAMECC2>;
using ramecc3_t = peripheral_t<mcu_svd, RAMECC3>;

