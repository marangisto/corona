#pragma once

////
//
//      STM32H7 RAMECC peripherals
//
///

// RAMECC1: ECC controller is associated to each RAM area

struct stm32h723_ramecc1_t
{
    volatile uint32_t IER; // RAMECC interrupt enable register
    reserved_t<0x7> _0x4;
    volatile uint32_t M1CR; // RAMECC monitor x configuration register
    volatile uint32_t M1SR; // RAMECC monitor x status register
    volatile uint32_t M1FAR; // RAMECC monitor x failing address register
    volatile uint32_t M1FDRL; // RAMECC monitor x failing data low register
    volatile uint32_t M1FDRH; // RAMECC monitor x failing data high register
    volatile uint32_t M1FECR; // RAMECC monitor x failing ECC error code register
    reserved_t<0x2> _0x38;
    volatile uint32_t M2CR; // RAMECC monitor x configuration register
    volatile uint32_t M2SR; // RAMECC monitor x status register
    volatile uint32_t M2FAR; // RAMECC monitor x failing address register
    volatile uint32_t M2FDRL; // RAMECC monitor x failing data low register
    volatile uint32_t M2FDRH; // RAMECC monitor x failing data high register
    reserved_t<0x1> _0x54;
    volatile uint32_t M2FECR; // RAMECC monitor x failing ECC error code register
    reserved_t<0x1> _0x5c;
    volatile uint32_t M3CR; // RAMECC monitor x configuration register
    volatile uint32_t M3SR; // RAMECC monitor x status register
    volatile uint32_t M3FAR; // RAMECC monitor x failing address register
    volatile uint32_t M3FDRL; // RAMECC monitor x failing data low register
    volatile uint32_t M3FDRH; // RAMECC monitor x failing data high register
    reserved_t<0x2> _0x74;
    volatile uint32_t M3FECR; // RAMECC monitor x failing ECC error code register
    volatile uint32_t M4CR; // RAMECC monitor x configuration register
    volatile uint32_t M4SR; // RAMECC monitor x status register
    volatile uint32_t M4FAR; // RAMECC monitor x failing address register
    volatile uint32_t M4FDRL; // RAMECC monitor x failing data low register
    volatile uint32_t M4FDRH; // RAMECC monitor x failing data high register
    reserved_t<0x3> _0x94;
    volatile uint32_t M5CR; // RAMECC monitor x configuration register
    volatile uint32_t M5SR; // RAMECC monitor x status register
    volatile uint32_t M5FAR; // RAMECC monitor x failing address register
    volatile uint32_t M5FDRL; // RAMECC monitor x failing data low register
    volatile uint32_t M5FDRH; // RAMECC monitor x failing data high register
    volatile uint32_t M5FECR; // RAMECC monitor x failing ECC error code register

    static constexpr uint32_t IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IER_GIE = 0x1; // Global interrupt enable
    static constexpr uint32_t IER_GECCSEIE_ = 0x2; // Global ECC single error interrupt enable
    static constexpr uint32_t IER_GECCDEIE = 0x4; // Global ECC double error interrupt enable
    static constexpr uint32_t IER_GECCDEBWIE = 0x8; // Global ECC double error on byte write (BW) interrupt enable


    static constexpr uint32_t M1CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t M1CR_ECCSEIE = 0x4; // ECC single error interrupt enable
    static constexpr uint32_t M1CR_ECCDEIE = 0x8; // ECC double error interrupt enable
    static constexpr uint32_t M1CR_ECCDEBWIE = 0x10; // ECC double error on byte write (BW) interrupt enable
    static constexpr uint32_t M1CR_ECCELEN = 0x20; // ECC error latching enable

    static constexpr uint32_t M1SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t M1SR_ECCSEIE = 0x4; // ECC single error interrupt enable
    static constexpr uint32_t M1SR_ECCDEIE = 0x8; // ECC double error interrupt enable
    static constexpr uint32_t M1SR_ECCDEBWIE = 0x10; // ECC double error on byte write (BW) interrupt enable
    static constexpr uint32_t M1SR_ECCELEN = 0x20; // ECC error latching enable

    static constexpr uint32_t M1FAR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t M1FAR_ECCSEIE = 0x4; // ECC single error interrupt enable
    static constexpr uint32_t M1FAR_ECCDEIE = 0x8; // ECC double error interrupt enable
    static constexpr uint32_t M1FAR_ECCDEBWIE = 0x10; // ECC double error on byte write (BW) interrupt enable
    static constexpr uint32_t M1FAR_ECCELEN = 0x20; // ECC error latching enable

    static constexpr uint32_t M1FDRL_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t M1FDRL_ECCSEIE = 0x4; // ECC single error interrupt enable
    static constexpr uint32_t M1FDRL_ECCDEIE = 0x8; // ECC double error interrupt enable
    static constexpr uint32_t M1FDRL_ECCDEBWIE = 0x10; // ECC double error on byte write (BW) interrupt enable
    static constexpr uint32_t M1FDRL_ECCELEN = 0x20; // ECC error latching enable

    static constexpr uint32_t M1FDRH_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t M1FDRH_ECCSEIE = 0x4; // ECC single error interrupt enable
    static constexpr uint32_t M1FDRH_ECCDEIE = 0x8; // ECC double error interrupt enable
    static constexpr uint32_t M1FDRH_ECCDEBWIE = 0x10; // ECC double error on byte write (BW) interrupt enable
    static constexpr uint32_t M1FDRH_ECCELEN = 0x20; // ECC error latching enable

    static constexpr uint32_t M1FECR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t M1FECR_SEDCF = 0x1; // ECC single error detected and corrected flag
    static constexpr uint32_t M1FECR_DEDF = 0x2; // ECC double error detected flag
    static constexpr uint32_t M1FECR_DEBWDF = 0x4; // ECC double error on byte write (BW) detected flag


    static constexpr uint32_t M2CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t M2CR_SEDCF = 0x1; // ECC single error detected and corrected flag
    static constexpr uint32_t M2CR_DEDF = 0x2; // ECC double error detected flag
    static constexpr uint32_t M2CR_DEBWDF = 0x4; // ECC double error on byte write (BW) detected flag

    static constexpr uint32_t M2SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t M2SR_SEDCF = 0x1; // ECC single error detected and corrected flag
    static constexpr uint32_t M2SR_DEDF = 0x2; // ECC double error detected flag
    static constexpr uint32_t M2SR_DEBWDF = 0x4; // ECC double error on byte write (BW) detected flag

    static constexpr uint32_t M2FAR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t M2FAR_SEDCF = 0x1; // ECC single error detected and corrected flag
    static constexpr uint32_t M2FAR_DEDF = 0x2; // ECC double error detected flag
    static constexpr uint32_t M2FAR_DEBWDF = 0x4; // ECC double error on byte write (BW) detected flag

    static constexpr uint32_t M2FDRL_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t M2FDRL_SEDCF = 0x1; // ECC single error detected and corrected flag
    static constexpr uint32_t M2FDRL_DEDF = 0x2; // ECC double error detected flag
    static constexpr uint32_t M2FDRL_DEBWDF = 0x4; // ECC double error on byte write (BW) detected flag

    static constexpr uint32_t M2FDRH_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> M2FDRH_FADD; // ECC error failing address


    static constexpr uint32_t M2FECR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> M2FECR_FADD; // ECC error failing address


    static constexpr uint32_t M3CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> M3CR_FADD; // ECC error failing address

    static constexpr uint32_t M3SR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> M3SR_FADD; // ECC error failing address

    static constexpr uint32_t M3FAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> M3FAR_FADD; // ECC error failing address

    static constexpr uint32_t M3FDRL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> M3FDRL_FDATAL; // Failing data low

    static constexpr uint32_t M3FDRH_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> M3FDRH_FDATAL; // Failing data low


    static constexpr uint32_t M3FECR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> M3FECR_FDATAL; // Failing data low

    static constexpr uint32_t M4CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> M4CR_FDATAL; // Failing data low

    static constexpr uint32_t M4SR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> M4SR_FDATAL; // Failing data low

    static constexpr uint32_t M4FAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> M4FAR_FDATAH; // Failing data high (64-bit memory)

    static constexpr uint32_t M4FDRL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> M4FDRL_FDATAH; // Failing data high (64-bit memory)

    static constexpr uint32_t M4FDRH_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> M4FDRH_FDATAH; // Failing data high (64-bit memory)


    static constexpr uint32_t M5CR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> M5CR_FEC; // Failing error code

    static constexpr uint32_t M5SR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> M5SR_FEC; // Failing error code

    static constexpr uint32_t M5FAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> M5FAR_FEC; // Failing error code

    static constexpr uint32_t M5FDRL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> M5FDRL_FEC; // Failing error code

    static constexpr uint32_t M5FDRH_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> M5FDRH_FEC; // Failing error code

    static constexpr uint32_t M5FECR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> M5FECR_FEC; // Failing error code
};

// RAMECC2: ECC controller is associated to each RAM area

struct stm32h723_ramecc2_t
{
    volatile uint32_t IER; // RAMECC interrupt enable register
    reserved_t<0x7> _0x4;
    volatile uint32_t M1CR; // RAMECC monitor x configuration register
    volatile uint32_t M1SR; // RAMECC monitor x status register
    volatile uint32_t M1FAR; // RAMECC monitor x failing address register
    volatile uint32_t M1FDRL; // RAMECC monitor x failing data low register
    volatile uint32_t M1FDRH; // RAMECC monitor x failing data high register
    volatile uint32_t M1FECR; // RAMECC monitor x failing ECC error code register
    reserved_t<0x2> _0x38;
    volatile uint32_t M2CR; // RAMECC monitor x configuration register
    volatile uint32_t M2SR; // RAMECC monitor x status register
    volatile uint32_t M2FAR; // RAMECC monitor x failing address register
    volatile uint32_t M2FDRL; // RAMECC monitor x failing data low register
    volatile uint32_t M2FDRH; // RAMECC monitor x failing data high register
    reserved_t<0x1> _0x54;
    volatile uint32_t M2FECR; // RAMECC monitor x failing ECC error code register
    reserved_t<0x1> _0x5c;
    volatile uint32_t M3CR; // RAMECC monitor x configuration register
    volatile uint32_t M3SR; // RAMECC monitor x status register
    volatile uint32_t M3FAR; // RAMECC monitor x failing address register
    volatile uint32_t M3FDRL; // RAMECC monitor x failing data low register
    volatile uint32_t M3FDRH; // RAMECC monitor x failing data high register
    reserved_t<0x2> _0x74;
    volatile uint32_t M3FECR; // RAMECC monitor x failing ECC error code register
    volatile uint32_t M4CR; // RAMECC monitor x configuration register
    volatile uint32_t M4SR; // RAMECC monitor x status register
    volatile uint32_t M4FAR; // RAMECC monitor x failing address register
    volatile uint32_t M4FDRL; // RAMECC monitor x failing data low register
    volatile uint32_t M4FDRH; // RAMECC monitor x failing data high register
    reserved_t<0x3> _0x94;
    volatile uint32_t M5CR; // RAMECC monitor x configuration register
    volatile uint32_t M5SR; // RAMECC monitor x status register
    volatile uint32_t M5FAR; // RAMECC monitor x failing address register
    volatile uint32_t M5FDRL; // RAMECC monitor x failing data low register
    volatile uint32_t M5FDRH; // RAMECC monitor x failing data high register
    volatile uint32_t M5FECR; // RAMECC monitor x failing ECC error code register

    static constexpr uint32_t IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IER_GIE = 0x1; // Global interrupt enable
    static constexpr uint32_t IER_GECCSEIE_ = 0x2; // Global ECC single error interrupt enable
    static constexpr uint32_t IER_GECCDEIE = 0x4; // Global ECC double error interrupt enable
    static constexpr uint32_t IER_GECCDEBWIE = 0x8; // Global ECC double error on byte write (BW) interrupt enable


    static constexpr uint32_t M1CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t M1CR_ECCSEIE = 0x4; // ECC single error interrupt enable
    static constexpr uint32_t M1CR_ECCDEIE = 0x8; // ECC double error interrupt enable
    static constexpr uint32_t M1CR_ECCDEBWIE = 0x10; // ECC double error on byte write (BW) interrupt enable
    static constexpr uint32_t M1CR_ECCELEN = 0x20; // ECC error latching enable

    static constexpr uint32_t M1SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t M1SR_SEDCF = 0x1; // ECC single error detected and corrected flag
    static constexpr uint32_t M1SR_DEDF = 0x2; // ECC double error detected flag
    static constexpr uint32_t M1SR_DEBWDF = 0x4; // ECC double error on byte write (BW) detected flag

    static constexpr uint32_t M1FAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> M1FAR_FADD; // ECC error failing address

    static constexpr uint32_t M1FDRL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> M1FDRL_FDATAL; // Failing data low

    static constexpr uint32_t M1FDRH_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> M1FDRH_FDATAH; // Failing data high (64-bit memory)

    static constexpr uint32_t M1FECR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> M1FECR_FEC; // Failing error code


    static constexpr uint32_t M2CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t M2CR_ECCSEIE = 0x4; // ECC single error interrupt enable
    static constexpr uint32_t M2CR_ECCDEIE = 0x8; // ECC double error interrupt enable
    static constexpr uint32_t M2CR_ECCDEBWIE = 0x10; // ECC double error on byte write (BW) interrupt enable
    static constexpr uint32_t M2CR_ECCELEN = 0x20; // ECC error latching enable

    static constexpr uint32_t M2SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t M2SR_SEDCF = 0x1; // ECC single error detected and corrected flag
    static constexpr uint32_t M2SR_DEDF = 0x2; // ECC double error detected flag
    static constexpr uint32_t M2SR_DEBWDF = 0x4; // ECC double error on byte write (BW) detected flag

    static constexpr uint32_t M2FAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> M2FAR_FADD; // ECC error failing address

    static constexpr uint32_t M2FDRL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> M2FDRL_FDATAL; // Failing data low

    static constexpr uint32_t M2FDRH_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> M2FDRH_FDATAH; // Failing data high (64-bit memory)


    static constexpr uint32_t M2FECR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> M2FECR_FEC; // Failing error code


    static constexpr uint32_t M3CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t M3CR_ECCSEIE = 0x4; // ECC single error interrupt enable
    static constexpr uint32_t M3CR_ECCDEIE = 0x8; // ECC double error interrupt enable
    static constexpr uint32_t M3CR_ECCDEBWIE = 0x10; // ECC double error on byte write (BW) interrupt enable
    static constexpr uint32_t M3CR_ECCELEN = 0x20; // ECC error latching enable

    static constexpr uint32_t M3SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t M3SR_SEDCF = 0x1; // ECC single error detected and corrected flag
    static constexpr uint32_t M3SR_DEDF = 0x2; // ECC double error detected flag
    static constexpr uint32_t M3SR_DEBWDF = 0x4; // ECC double error on byte write (BW) detected flag

    static constexpr uint32_t M3FAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> M3FAR_FADD; // ECC error failing address

    static constexpr uint32_t M3FDRL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> M3FDRL_FDATAL; // Failing data low

    static constexpr uint32_t M3FDRH_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> M3FDRH_FDATAH; // Failing data high (64-bit memory)


    static constexpr uint32_t M3FECR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> M3FECR_FEC; // Failing error code

    static constexpr uint32_t M4CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t M4CR_ECCSEIE = 0x4; // ECC single error interrupt enable
    static constexpr uint32_t M4CR_ECCDEIE = 0x8; // ECC double error interrupt enable
    static constexpr uint32_t M4CR_ECCDEBWIE = 0x10; // ECC double error on byte write (BW) interrupt enable
    static constexpr uint32_t M4CR_ECCELEN = 0x20; // ECC error latching enable

    static constexpr uint32_t M4SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t M4SR_SEDCF = 0x1; // ECC single error detected and corrected flag
    static constexpr uint32_t M4SR_DEDF = 0x2; // ECC double error detected flag
    static constexpr uint32_t M4SR_DEBWDF = 0x4; // ECC double error on byte write (BW) detected flag

    static constexpr uint32_t M4FAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> M4FAR_FADD; // ECC error failing address

    static constexpr uint32_t M4FDRL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> M4FDRL_FDATAL; // Failing data low

    static constexpr uint32_t M4FDRH_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> M4FDRH_FDATAH; // Failing data high (64-bit memory)
    typedef bit_field_t<0, 0xffffffff> M4FDRH_FEC; // Failing error code


    static constexpr uint32_t M5CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t M5CR_ECCSEIE = 0x4; // ECC single error interrupt enable
    static constexpr uint32_t M5CR_ECCDEIE = 0x8; // ECC double error interrupt enable
    static constexpr uint32_t M5CR_ECCDEBWIE = 0x10; // ECC double error on byte write (BW) interrupt enable
    static constexpr uint32_t M5CR_ECCELEN = 0x20; // ECC error latching enable

    static constexpr uint32_t M5SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t M5SR_SEDCF = 0x1; // ECC single error detected and corrected flag
    static constexpr uint32_t M5SR_DEDF = 0x2; // ECC double error detected flag
    static constexpr uint32_t M5SR_DEBWDF = 0x4; // ECC double error on byte write (BW) detected flag

    static constexpr uint32_t M5FAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> M5FAR_FADD; // ECC error failing address

    static constexpr uint32_t M5FDRL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> M5FDRL_FDATAL; // Failing data low

    static constexpr uint32_t M5FDRH_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> M5FDRH_FEC; // Failing error code

    static constexpr uint32_t M5FECR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> M5FECR_FEC; // Failing error code
};

// RAMECC3: ECC controller is associated to each RAM area

struct stm32h723_ramecc3_t
{
    volatile uint32_t IER; // RAMECC interrupt enable register
    reserved_t<0x7> _0x4;
    volatile uint32_t M1CR; // RAMECC monitor x configuration register
    volatile uint32_t M1SR; // RAMECC monitor x status register
    volatile uint32_t M1FAR; // RAMECC monitor x failing address register
    volatile uint32_t M1FDRL; // RAMECC monitor x failing data low register
    volatile uint32_t M1FDRH; // RAMECC monitor x failing data high register
    volatile uint32_t M1FECR; // RAMECC monitor x failing ECC error code register
    reserved_t<0x2> _0x38;
    volatile uint32_t M2CR; // RAMECC monitor x configuration register
    volatile uint32_t M2SR; // RAMECC monitor x status register
    volatile uint32_t M2FAR; // RAMECC monitor x failing address register
    volatile uint32_t M2FDRL; // RAMECC monitor x failing data low register
    volatile uint32_t M2FDRH; // RAMECC monitor x failing data high register
    reserved_t<0x1> _0x54;
    volatile uint32_t M2FECR; // RAMECC monitor x failing ECC error code register

    static constexpr uint32_t IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IER_GIE = 0x1; // Global interrupt enable
    static constexpr uint32_t IER_GECCSEIE_ = 0x2; // Global ECC single error interrupt enable
    static constexpr uint32_t IER_GECCDEIE = 0x4; // Global ECC double error interrupt enable
    static constexpr uint32_t IER_GECCDEBWIE = 0x8; // Global ECC double error on byte write (BW) interrupt enable


    static constexpr uint32_t M1CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t M1CR_ECCSEIE = 0x4; // ECC single error interrupt enable
    static constexpr uint32_t M1CR_ECCDEIE = 0x8; // ECC double error interrupt enable
    static constexpr uint32_t M1CR_ECCDEBWIE = 0x10; // ECC double error on byte write (BW) interrupt enable
    static constexpr uint32_t M1CR_ECCELEN = 0x20; // ECC error latching enable

    static constexpr uint32_t M1SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t M1SR_SEDCF = 0x1; // ECC single error detected and corrected flag
    static constexpr uint32_t M1SR_DEDF = 0x2; // ECC double error detected flag
    static constexpr uint32_t M1SR_DEBWDF = 0x4; // ECC double error on byte write (BW) detected flag

    static constexpr uint32_t M1FAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> M1FAR_FADD; // ECC error failing address

    static constexpr uint32_t M1FDRL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> M1FDRL_FDATAL; // Failing data low

    static constexpr uint32_t M1FDRH_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> M1FDRH_FDATAH; // Failing data high (64-bit memory)

    static constexpr uint32_t M1FECR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> M1FECR_FEC; // Failing error code


    static constexpr uint32_t M2CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t M2CR_ECCSEIE = 0x4; // ECC single error interrupt enable
    static constexpr uint32_t M2CR_ECCDEIE = 0x8; // ECC double error interrupt enable
    static constexpr uint32_t M2CR_ECCDEBWIE = 0x10; // ECC double error on byte write (BW) interrupt enable
    static constexpr uint32_t M2CR_ECCELEN = 0x20; // ECC error latching enable

    static constexpr uint32_t M2SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t M2SR_SEDCF = 0x1; // ECC single error detected and corrected flag
    static constexpr uint32_t M2SR_DEDF = 0x2; // ECC double error detected flag
    static constexpr uint32_t M2SR_DEBWDF = 0x4; // ECC double error on byte write (BW) detected flag

    static constexpr uint32_t M2FAR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> M2FAR_FADD; // ECC error failing address

    static constexpr uint32_t M2FDRL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> M2FDRL_FDATAL; // Failing data low

    static constexpr uint32_t M2FDRH_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> M2FDRH_FDATAH; // Failing data high (64-bit memory)


    static constexpr uint32_t M2FECR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> M2FECR_FEC; // Failing error code
};

template<>
struct peripheral_t<STM32H723, RAMECC1>
{
    static constexpr periph_t P = RAMECC1;
    using T = stm32h723_ramecc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H73x, RAMECC1>
{
    static constexpr periph_t P = RAMECC1;
    using T = stm32h723_ramecc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, RAMECC1>
{
    static constexpr periph_t P = RAMECC1;
    using T = stm32h723_ramecc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, RAMECC1>
{
    static constexpr periph_t P = RAMECC1;
    using T = stm32h723_ramecc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, RAMECC1>
{
    static constexpr periph_t P = RAMECC1;
    using T = stm32h723_ramecc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, RAMECC1>
{
    static constexpr periph_t P = RAMECC1;
    using T = stm32h723_ramecc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, RAMECC1>
{
    static constexpr periph_t P = RAMECC1;
    using T = stm32h723_ramecc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, RAMECC1>
{
    static constexpr periph_t P = RAMECC1;
    using T = stm32h723_ramecc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, RAMECC1>
{
    static constexpr periph_t P = RAMECC1;
    using T = stm32h723_ramecc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, RAMECC1>
{
    static constexpr periph_t P = RAMECC1;
    using T = stm32h723_ramecc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, RAMECC>
{
    static constexpr periph_t P = RAMECC;
    using T = stm32h723_ramecc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, RAMECC>
{
    static constexpr periph_t P = RAMECC;
    using T = stm32h723_ramecc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, RAMECC>
{
    static constexpr periph_t P = RAMECC;
    using T = stm32h723_ramecc1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H723, RAMECC2>
{
    static constexpr periph_t P = RAMECC2;
    using T = stm32h723_ramecc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H73x, RAMECC2>
{
    static constexpr periph_t P = RAMECC2;
    using T = stm32h723_ramecc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, RAMECC2>
{
    static constexpr periph_t P = RAMECC2;
    using T = stm32h723_ramecc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, RAMECC2>
{
    static constexpr periph_t P = RAMECC2;
    using T = stm32h723_ramecc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, RAMECC2>
{
    static constexpr periph_t P = RAMECC2;
    using T = stm32h723_ramecc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, RAMECC2>
{
    static constexpr periph_t P = RAMECC2;
    using T = stm32h723_ramecc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, RAMECC2>
{
    static constexpr periph_t P = RAMECC2;
    using T = stm32h723_ramecc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, RAMECC2>
{
    static constexpr periph_t P = RAMECC2;
    using T = stm32h723_ramecc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, RAMECC2>
{
    static constexpr periph_t P = RAMECC2;
    using T = stm32h723_ramecc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, RAMECC2>
{
    static constexpr periph_t P = RAMECC2;
    using T = stm32h723_ramecc2_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H723, RAMECC3>
{
    static constexpr periph_t P = RAMECC3;
    using T = stm32h723_ramecc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H73x, RAMECC3>
{
    static constexpr periph_t P = RAMECC3;
    using T = stm32h723_ramecc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, RAMECC3>
{
    static constexpr periph_t P = RAMECC3;
    using T = stm32h723_ramecc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, RAMECC3>
{
    static constexpr periph_t P = RAMECC3;
    using T = stm32h723_ramecc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, RAMECC3>
{
    static constexpr periph_t P = RAMECC3;
    using T = stm32h723_ramecc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, RAMECC3>
{
    static constexpr periph_t P = RAMECC3;
    using T = stm32h723_ramecc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, RAMECC3>
{
    static constexpr periph_t P = RAMECC3;
    using T = stm32h723_ramecc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, RAMECC3>
{
    static constexpr periph_t P = RAMECC3;
    using T = stm32h723_ramecc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, RAMECC3>
{
    static constexpr periph_t P = RAMECC3;
    using T = stm32h723_ramecc3_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, RAMECC3>
{
    static constexpr periph_t P = RAMECC3;
    using T = stm32h723_ramecc3_t;
    static T& V;
};

using ramecc_t = peripheral_t<svd, RAMECC>;
using ramecc1_t = peripheral_t<svd, RAMECC1>;
using ramecc2_t = peripheral_t<svd, RAMECC2>;
using ramecc3_t = peripheral_t<svd, RAMECC3>;
