#pragma once

////
//
//      STM32WB AES1 peripherals
//
////

////
//
//      Advanced encryption standard hardware accelerator 1
//
////

struct stm32wb30_cm4_aes1_t
{
    volatile uint32_t CR;     // [read-write] control register
    volatile uint32_t SR;     // [read-only] status register
    volatile uint32_t DINR;   // [read-write] data input register
    volatile uint32_t DOUTR;  // [read-only] data output register
    volatile uint32_t KEYR0;  // [read-write] key register 0
    volatile uint32_t KEYR1;  // [read-write] key register 1
    volatile uint32_t KEYR2;  // [read-write] key register 2
    volatile uint32_t KEYR3;  // [read-write] key register 3
    volatile uint32_t IVR0;   // [read-write] initialization vector register 0
    volatile uint32_t IVR1;   // [read-write] initialization vector register 1
    volatile uint32_t IVR2;   // [read-write] initialization vector register 2
    volatile uint32_t IVR3;   // [read-write] initialization vector register 3
    volatile uint32_t KEYR4;  // [read-write] key register 4
    volatile uint32_t KEYR5;  // [read-write] key register 5
    volatile uint32_t KEYR6;  // [read-write] key register 6
    volatile uint32_t KEYR7;  // [read-write] key register 7
    volatile uint32_t SUSP0R; // [read-write] AES suspend register 0
    volatile uint32_t SUSP1R; // [read-write] AES suspend register 1
    volatile uint32_t SUSP2R; // [read-write] AES suspend register 2
    volatile uint32_t SUSP3R; // [read-write] AES suspend register 3
    volatile uint32_t SUSP4R; // [read-write] AES suspend register 4
    volatile uint32_t SUSP5R; // [read-write] AES suspend register 5
    volatile uint32_t SUSP6R; // [read-write] AES suspend register 6
    volatile uint32_t SUSP7R; // [read-write] AES suspend register 7
    reserved_t<0xe4> _0x3f0;
    volatile uint32_t HWCFR;  // [read-only] AES hardware configuration register
    volatile uint32_t VERR;   // [read-only] AES version register
    volatile uint32_t IPIDR;  // [read-only] AES identification register
    volatile uint32_t SIDR;   // [read-only] AES size ID register

    static constexpr uint32_t CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CR_NPBLB =            // Number of padding bytes in last block of payload
        bit_field_t<20, 0xf>::value<X>();
    static constexpr uint32_t CR_KEYSIZE = 0x40000; // Key size selection
    static constexpr uint32_t CR_CHMOD2 = 0x10000;  // AES chaining mode Bit2
    template<uint32_t X>
    static constexpr uint32_t CR_GCMPH =            // Used only for GCM, CCM and GMAC algorithms and has no effect when other algorithms are selected
        bit_field_t<13, 0x3>::value<X>();
    static constexpr uint32_t CR_DMAOUTEN = 0x1000; // Enable DMA management of data output phase
    static constexpr uint32_t CR_DMAINEN = 0x800;   // Enable DMA management of data input phase
    static constexpr uint32_t CR_ERRIE = 0x400;     // Error interrupt enable
    static constexpr uint32_t CR_CCFIE = 0x200;     // CCF flag interrupt enable
    static constexpr uint32_t CR_ERRC = 0x100;      // Error clear
    static constexpr uint32_t CR_CCFC = 0x80;       // Computation Complete Flag Clear
    template<uint32_t X>
    static constexpr uint32_t CR_CHMOD10 =          // AES chaining mode Bit1 Bit0
        bit_field_t<5, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CR_MODE =             // AES operating mode
        bit_field_t<3, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CR_DATATYPE =         // Data type selection (for data in and data out to/from the cryptographic block)
        bit_field_t<1, 0x3>::value<X>();
    static constexpr uint32_t CR_EN = 0x1;          // AES enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0;
    static constexpr uint32_t SR_BUSY = 0x8;  // Busy flag
    static constexpr uint32_t SR_WRERR = 0x4; // Write error flag
    static constexpr uint32_t SR_RDERR = 0x2; // Read error flag
    static constexpr uint32_t SR_CCF = 0x1;   // Computation complete flag

    static constexpr uint32_t DINR_RESET_VALUE = 0x0;

    static constexpr uint32_t DOUTR_RESET_VALUE = 0x0;

    static constexpr uint32_t KEYR0_RESET_VALUE = 0x0;

    static constexpr uint32_t KEYR1_RESET_VALUE = 0x0;

    static constexpr uint32_t KEYR2_RESET_VALUE = 0x0;

    static constexpr uint32_t KEYR3_RESET_VALUE = 0x0;

    static constexpr uint32_t IVR0_RESET_VALUE = 0x0;

    static constexpr uint32_t IVR1_RESET_VALUE = 0x0;

    static constexpr uint32_t IVR2_RESET_VALUE = 0x0;

    static constexpr uint32_t IVR3_RESET_VALUE = 0x0;

    static constexpr uint32_t KEYR4_RESET_VALUE = 0x0;

    static constexpr uint32_t KEYR5_RESET_VALUE = 0x0;

    static constexpr uint32_t KEYR6_RESET_VALUE = 0x0;

    static constexpr uint32_t KEYR7_RESET_VALUE = 0x0;

    static constexpr uint32_t SUSP0R_RESET_VALUE = 0x0;

    static constexpr uint32_t SUSP1R_RESET_VALUE = 0x0;

    static constexpr uint32_t SUSP2R_RESET_VALUE = 0x0;

    static constexpr uint32_t SUSP3R_RESET_VALUE = 0x0;

    static constexpr uint32_t SUSP4R_RESET_VALUE = 0x0;

    static constexpr uint32_t SUSP5R_RESET_VALUE = 0x0;

    static constexpr uint32_t SUSP6R_RESET_VALUE = 0x0;

    static constexpr uint32_t SUSP7R_RESET_VALUE = 0x0;

    static constexpr uint32_t HWCFR_RESET_VALUE = 0x2;
    template<uint32_t X>
    static constexpr uint32_t HWCFR_CFG4 =   // HW Generic 4
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HWCFR_CFG3 =   // HW Generic 3
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HWCFR_CFG2 =   // HW Generic 2
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HWCFR_CFG1 =   // HW Generic 1
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t VERR_RESET_VALUE = 0x10;
    template<uint32_t X>
    static constexpr uint32_t VERR_MAJREV =   // Major revision
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t VERR_MINREV =   // Minor revision
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t IPIDR_RESET_VALUE = 0x170023;

    static constexpr uint32_t SIDR_RESET_VALUE = 0xa3c5dd01;
};


////
//
//      Advanced encryption standard hardware accelerator 1
//
////

struct stm32wb30_cm4_aes2_t
{
    volatile uint32_t CR;     // [read-write] control register
    volatile uint32_t SR;     // [read-only] status register
    volatile uint32_t DINR;   // [read-write] data input register
    volatile uint32_t DOUTR;  // [read-only] data output register
    volatile uint32_t KEYR0;  // [read-write] key register 0
    volatile uint32_t KEYR1;  // [read-write] key register 1
    volatile uint32_t KEYR2;  // [read-write] key register 2
    volatile uint32_t KEYR3;  // [read-write] key register 3
    volatile uint32_t IVR0;   // [read-write] initialization vector register 0
    volatile uint32_t IVR1;   // [read-write] initialization vector register 1
    volatile uint32_t IVR2;   // [read-write] initialization vector register 2
    volatile uint32_t IVR3;   // [read-write] initialization vector register 3
    volatile uint32_t KEYR4;  // [read-write] key register 4
    volatile uint32_t KEYR5;  // [read-write] key register 5
    volatile uint32_t KEYR6;  // [read-write] key register 6
    volatile uint32_t KEYR7;  // [read-write] key register 7
    volatile uint32_t SUSP0R; // [read-write] AES suspend register 0
    volatile uint32_t SUSP1R; // [read-write] AES suspend register 1
    volatile uint32_t SUSP2R; // [read-write] AES suspend register 2
    volatile uint32_t SUSP3R; // [read-write] AES suspend register 3
    volatile uint32_t SUSP4R; // [read-write] AES suspend register 4
    volatile uint32_t SUSP5R; // [read-write] AES suspend register 5
    volatile uint32_t SUSP6R; // [read-write] AES suspend register 6
    volatile uint32_t SUSP7R; // [read-write] AES suspend register 7
    volatile uint32_t HWCFR;  // [read-only] AES hardware configuration register
    volatile uint32_t VERR;   // [read-only] AES version register
    volatile uint32_t IPIDR;  // [read-only] AES identification register
    volatile uint32_t SIDR;   // [read-only] AES size ID register

    static constexpr uint32_t CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CR_NPBLB =            // Number of padding bytes in last block of payload
        bit_field_t<20, 0xf>::value<X>();
    static constexpr uint32_t CR_KEYSIZE = 0x40000; // Key size selection
    static constexpr uint32_t CR_CHMOD2 = 0x10000;  // AES chaining mode Bit2
    template<uint32_t X>
    static constexpr uint32_t CR_GCMPH =            // Used only for GCM, CCM and GMAC algorithms and has no effect when other algorithms are selected
        bit_field_t<13, 0x3>::value<X>();
    static constexpr uint32_t CR_DMAOUTEN = 0x1000; // Enable DMA management of data output phase
    static constexpr uint32_t CR_DMAINEN = 0x800;   // Enable DMA management of data input phase
    static constexpr uint32_t CR_ERRIE = 0x400;     // Error interrupt enable
    static constexpr uint32_t CR_CCFIE = 0x200;     // CCF flag interrupt enable
    static constexpr uint32_t CR_ERRC = 0x100;      // Error clear
    static constexpr uint32_t CR_CCFC = 0x80;       // Computation Complete Flag Clear
    template<uint32_t X>
    static constexpr uint32_t CR_CHMOD10 =          // AES chaining mode Bit1 Bit0
        bit_field_t<5, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CR_MODE =             // AES operating mode
        bit_field_t<3, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CR_DATATYPE =         // Data type selection (for data in and data out to/from the cryptographic block)
        bit_field_t<1, 0x3>::value<X>();
    static constexpr uint32_t CR_EN = 0x1;          // AES enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0;
    static constexpr uint32_t SR_BUSY = 0x8;  // Busy flag
    static constexpr uint32_t SR_WRERR = 0x4; // Write error flag
    static constexpr uint32_t SR_RDERR = 0x2; // Read error flag
    static constexpr uint32_t SR_CCF = 0x1;   // Computation complete flag

    static constexpr uint32_t DINR_RESET_VALUE = 0x0;

    static constexpr uint32_t DOUTR_RESET_VALUE = 0x0;

    static constexpr uint32_t KEYR0_RESET_VALUE = 0x0;

    static constexpr uint32_t KEYR1_RESET_VALUE = 0x0;

    static constexpr uint32_t KEYR2_RESET_VALUE = 0x0;

    static constexpr uint32_t KEYR3_RESET_VALUE = 0x0;

    static constexpr uint32_t IVR0_RESET_VALUE = 0x0;

    static constexpr uint32_t IVR1_RESET_VALUE = 0x0;

    static constexpr uint32_t IVR2_RESET_VALUE = 0x0;

    static constexpr uint32_t IVR3_RESET_VALUE = 0x0;

    static constexpr uint32_t KEYR4_RESET_VALUE = 0x0;

    static constexpr uint32_t KEYR5_RESET_VALUE = 0x0;

    static constexpr uint32_t KEYR6_RESET_VALUE = 0x0;

    static constexpr uint32_t KEYR7_RESET_VALUE = 0x0;

    static constexpr uint32_t SUSP0R_RESET_VALUE = 0x0;

    static constexpr uint32_t SUSP1R_RESET_VALUE = 0x0;

    static constexpr uint32_t SUSP2R_RESET_VALUE = 0x0;

    static constexpr uint32_t SUSP3R_RESET_VALUE = 0x0;

    static constexpr uint32_t SUSP4R_RESET_VALUE = 0x0;

    static constexpr uint32_t SUSP5R_RESET_VALUE = 0x0;

    static constexpr uint32_t SUSP6R_RESET_VALUE = 0x0;

    static constexpr uint32_t SUSP7R_RESET_VALUE = 0x0;

    static constexpr uint32_t HWCFR_RESET_VALUE = 0x2;
    template<uint32_t X>
    static constexpr uint32_t HWCFR_CFG4 =   // HW Generic 4
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HWCFR_CFG3 =   // HW Generic 3
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HWCFR_CFG2 =   // HW Generic 2
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t HWCFR_CFG1 =   // HW Generic 1
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t VERR_RESET_VALUE = 0x10;
    template<uint32_t X>
    static constexpr uint32_t VERR_MAJREV =   // Major revision
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t VERR_MINREV =   // Minor revision
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t IPIDR_RESET_VALUE = 0x170023;

    static constexpr uint32_t SIDR_RESET_VALUE = 0x170023;
};


template<>
struct peripheral_t<STM32WB30_CM4, AES1>
{
    typedef stm32wb30_cm4_aes1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32WB35_CM4, AES1>
{
    typedef stm32wb30_cm4_aes1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32WB55_CM4, AES1>
{
    typedef stm32wb30_cm4_aes1_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32WB30_CM4, AES2>
{
    typedef stm32wb30_cm4_aes2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32WB35_CM4, AES2>
{
    typedef stm32wb30_cm4_aes2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32WB50_CM4, AES2>
{
    typedef stm32wb30_cm4_aes2_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32WB55_CM4, AES2>
{
    typedef stm32wb30_cm4_aes2_t T;
    static T& V;
};

using aes1_t = peripheral_t<mcu_svd, AES1>;
using aes2_t = peripheral_t<mcu_svd, AES2>;

template<int INST> struct aes_traits {};

template<> struct aes_traits<1>
{
    using aes = aes1_t;
};

template<> struct aes_traits<2>
{
    using aes = aes2_t;
};

