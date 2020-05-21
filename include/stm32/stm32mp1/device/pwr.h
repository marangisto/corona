#pragma once

////
//
//      STM32MP1 PWR peripherals
//
////

////
//
//      PWR
//
////

struct stm32mp15xxx_pwr_t
{
    volatile uint32_t PWR_CR1;        // [read-write] Reset on any system reset. This register provides write access security when enabled by TZEN register bit in Section10: Reset and clock control (RCC). When security is enabled a non-secure write access generates a bus error. Secure and non-secure read accesses are granted and return the register value.
    volatile uint32_t PWR_CSR1;       // [read-only] Reset on any system reset.
    volatile uint32_t PWR_CR2;        // Not reset by wakeup from Standby mode, Application reset (NRST, IWDG, ...) and VDD POR, but reset only by VSW POR and VSWRST. Access 6 wait states when writing this register. After reset the register is write-protected and the DBP bit in the PWR control register 1 (PWR_CR1) has to be set before it can be written. When DBP is cleared, there is no bus errors generated when writing this register. This register shall not be accessed when the RCC VSWRST register bit in Section10.7.89: RCC Backup Domain Control Register (RCC_BDCR) resets the VSW domain. This register provides Write access security when enabled by TZEN register bit in Section10.7.2: RCC TrustZone Control Register (RCC_TZCR). When security is enabled a non-secure write access generates a bus error. Secure and non-secure read accesses are granted and return the register value. When a system reset occurs during the register write cycle the written data is not guaranteed.
    volatile uint32_t PWR_CR3;        // Not reset by wakeup from Standby mode and Application reset (such as NRST, IWDG) but only reset by VDD POR. Access 6 wait states when writing this register. This register provides Write access security when enabled by TZEN register bit in Section10: Reset and clock control (RCC). When security is enabled a non-secure write access generates a bus error. Secure and non-secure read accesses are granted and return the register value. When a system reset occurs during the register write cycle the written data is not guaranteed.
    volatile uint32_t PWR_MPUCR;      // See individual bits for reset condition. Access 6 wait states when writing this register. This register provides Write access security when enabled by TZEN register bit in Section10: Reset and clock control (RCC). When security is enabled a non-secure write access generates a bus error. Secure and non-secure read accesses are granted and return the register value. When a system reset occurs during the register write cycle the written data is not guaranteed.
    volatile uint32_t PWR_MCUCR;      // See individual bits for reset condition. Access 6 wait states when writing this register. This register is always non-secure. When a system reset occurs during the register write cycle the written data is not guaranteed.
    reserved_t<0x2> _0x20;
    volatile uint32_t PWR_WKUPCR;     // [read-write] Not reset by wakeup from Standby mode, but by any application reset (such as NRST, IWDG). Access 6 wait states when writing this register (when clearing a WKUPF, the AHB write access completes after the WKUPF has cleared). This register provides Write access security when enabled by TZEN register bit in Section10: Reset and clock control (RCC). When security is enabled a non-secure write access on individual WKUPC[6:1], WKUPP[6:1] bits and WKUPPUPD[6:1] bit pairs are discarded when the corresponding WKUPEN[6:1] bit in PWR MPU wakeup enable register (PWR_MPUWKUPENR) is set. No bus error is generated. Secure and non-secure read accesses are granted and return the register value. When a system reset occurs during the register write cycle the written data is not guaranteed.
    volatile uint32_t PWR_WKUPFR;     // [read-only] Not reset by wakeup from Standby mode but by any Application reset (NRST, IWDG, ...)
    volatile uint32_t PWR_MPUWKUPENR; // [read-write] Not reset by wakeup from Standby mode but by any Application reset (NRST, IWDG, ...). Access 6 wait states when writing this register. This register provides Write access security when enabled by TZEN register bit in Section10: Reset and clock control (RCC). When security is enabled a non-secure write access is discarded and a bus error is generated. Secure and non-secure read accesses are granted and return the register value. When a system reset occurs during the register write cycle the written data is not guaranteed.
    volatile uint32_t PWR_MCUWKUPENR; // [read-write] Not reset by wakeup from Standby mode but by any Application reset (NRST, IWDG, ...) Access 6 wait states when writing this register. When a system reset occurs during the register write cycle the written data is not guaranteed.
    reserved_t<0xf1> _0x3f4;
    volatile uint32_t PWR_VER;        // [read-only] PWR IP version register
    volatile uint32_t PWR_ID;         // [read-only] PWR IP identification register
    volatile uint32_t PWR_SID;        // [read-only] PWR size ID register

    static constexpr uint32_t PWR_CR1_RESET_VALUE = 0x0;
    static constexpr uint32_t PWR_CR1_LPDS = 0x1;      // LPDS
    static constexpr uint32_t PWR_CR1_LPCFG = 0x2;     // LPCFG
    static constexpr uint32_t PWR_CR1_LVDS = 0x4;      // LVDS
    static constexpr uint32_t PWR_CR1_PVDEN = 0x10;    // PVDEN
    template<uint32_t X>
    static constexpr uint32_t PWR_CR1_PLS =            // PLS
        bit_field_t<5, 0x7>::value<X>();
    static constexpr uint32_t PWR_CR1_DBP = 0x100;     // DBP
    static constexpr uint32_t PWR_CR1_AVDEN = 0x10000; // AVDEN
    template<uint32_t X>
    static constexpr uint32_t PWR_CR1_ALS =            // ALS
        bit_field_t<17, 0x3>::value<X>();

    static constexpr uint32_t PWR_CSR1_RESET_VALUE = 0x0;
    static constexpr uint32_t PWR_CSR1_PVDO = 0x10;    // PVDO
    static constexpr uint32_t PWR_CSR1_AVDO = 0x10000; // AVDO

    static constexpr uint32_t PWR_CR2_RESET_VALUE = 0x0;
    static constexpr uint32_t PWR_CR2_BREN = 0x1;       // BREN
    static constexpr uint32_t PWR_CR2_RREN = 0x2;       // RREN
    static constexpr uint32_t PWR_CR2_MONEN = 0x10;     // MONEN
    static constexpr uint32_t PWR_CR2_BRRDY = 0x10000;  // BRRDY
    static constexpr uint32_t PWR_CR2_RRRDY = 0x20000;  // RRRDY
    static constexpr uint32_t PWR_CR2_VBATL = 0x100000; // VBATL
    static constexpr uint32_t PWR_CR2_VBATH = 0x200000; // VBATH
    static constexpr uint32_t PWR_CR2_TEMPL = 0x400000; // TEMPL
    static constexpr uint32_t PWR_CR2_TEMPH = 0x800000; // TEMPH

    static constexpr uint32_t PWR_CR3_RESET_VALUE = 0x50000000;
    static constexpr uint32_t PWR_CR3_VBE = 0x100;           // VBE
    static constexpr uint32_t PWR_CR3_VBRS = 0x200;          // VBRS
    static constexpr uint32_t PWR_CR3_DDRSREN = 0x400;       // DDRSREN
    static constexpr uint32_t PWR_CR3_DDRSRDIS = 0x800;      // DDRSRDIS
    static constexpr uint32_t PWR_CR3_DDRRETEN = 0x1000;     // DDRRETEN
    template<uint32_t X>
    static constexpr uint32_t PWR_CR3_POPL =                 // POPL
        bit_field_t<17, 0x1f>::value<X>();
    static constexpr uint32_t PWR_CR3_USB33DEN = 0x1000000;  // USB33DEN
    static constexpr uint32_t PWR_CR3_USB33RDY = 0x4000000;  // USB33RDY
    static constexpr uint32_t PWR_CR3_REG18EN = 0x10000000;  // REG18EN
    static constexpr uint32_t PWR_CR3_REG18RDY = 0x20000000; // REG18RDY
    static constexpr uint32_t PWR_CR3_REG11EN = 0x40000000;  // REG11EN
    static constexpr uint32_t PWR_CR3_REG11RDY = 0x80000000; // REG11RDY

    static constexpr uint32_t PWR_MPUCR_RESET_VALUE = 0x0;
    static constexpr uint32_t PWR_MPUCR_PDDS = 0x1;            // PDDS
    static constexpr uint32_t PWR_MPUCR_CSTBYDIS = 0x8;        // CSTBYDIS
    static constexpr uint32_t PWR_MPUCR_STOPF = 0x20;          // STOPF
    static constexpr uint32_t PWR_MPUCR_SBF = 0x40;            // SBF
    static constexpr uint32_t PWR_MPUCR_SBFMPU = 0x80;         // SBFMPU
    static constexpr uint32_t PWR_MPUCR_CSSF = 0x200;          // CSSF
    static constexpr uint32_t PWR_MPUCR_STANDBYWFIL2 = 0x8000; // STANDBYWFIL2

    static constexpr uint32_t PWR_MCUCR_RESET_VALUE = 0x0;
    static constexpr uint32_t PWR_MCUCR_PDDS = 0x1;         // PDDS
    static constexpr uint32_t PWR_MCUCR_STOPF = 0x20;       // STOPF
    static constexpr uint32_t PWR_MCUCR_SBF = 0x40;         // SBF
    static constexpr uint32_t PWR_MCUCR_CSSF = 0x200;       // CSSF
    static constexpr uint32_t PWR_MCUCR_DEEPSLEEP = 0x8000; // DEEPSLEEP

    static constexpr uint32_t PWR_WKUPCR_RESET_VALUE = 0x0;
    static constexpr uint32_t PWR_WKUPCR_WKUPC1 = 0x1;    // WKUPC1
    static constexpr uint32_t PWR_WKUPCR_WKUPC2 = 0x2;    // WKUPC2
    static constexpr uint32_t PWR_WKUPCR_WKUPC3 = 0x4;    // WKUPC3
    static constexpr uint32_t PWR_WKUPCR_WKUPC4 = 0x8;    // WKUPC4
    static constexpr uint32_t PWR_WKUPCR_WKUPC5 = 0x10;   // WKUPC5
    static constexpr uint32_t PWR_WKUPCR_WKUPC6 = 0x20;   // WKUPC6
    static constexpr uint32_t PWR_WKUPCR_WKUPP1 = 0x100;  // WKUPP1
    static constexpr uint32_t PWR_WKUPCR_WKUPP2 = 0x200;  // WKUPP2
    static constexpr uint32_t PWR_WKUPCR_WKUPP3 = 0x400;  // WKUPP3
    static constexpr uint32_t PWR_WKUPCR_WKUPP4 = 0x800;  // WKUPP4
    static constexpr uint32_t PWR_WKUPCR_WKUPP5 = 0x1000; // WKUPP5
    static constexpr uint32_t PWR_WKUPCR_WKUPP6 = 0x2000; // WKUPP6
    template<uint32_t X>
    static constexpr uint32_t PWR_WKUPCR_WKUPPUPD1 =      // WKUPPUPD1
        bit_field_t<16, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PWR_WKUPCR_WKUPPUPD2 =      // WKUPPUPD2
        bit_field_t<18, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PWR_WKUPCR_WKUPPUPD3 =      // WKUPPUPD3
        bit_field_t<20, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PWR_WKUPCR_WKUPPUPD4 =      // WKUPPUPD4
        bit_field_t<22, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PWR_WKUPCR_WKUPPUPD5 =      // WKUPPUPD5
        bit_field_t<24, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PWR_WKUPCR_WKUPPUPD6 =      // WKUPPUPD6
        bit_field_t<26, 0x3>::value<X>();

    static constexpr uint32_t PWR_WKUPFR_RESET_VALUE = 0x0;
    static constexpr uint32_t PWR_WKUPFR_WKUPF1 = 0x1;  // WKUPF1
    static constexpr uint32_t PWR_WKUPFR_WKUPF2 = 0x2;  // WKUPF2
    static constexpr uint32_t PWR_WKUPFR_WKUPF3 = 0x4;  // WKUPF3
    static constexpr uint32_t PWR_WKUPFR_WKUPF4 = 0x8;  // WKUPF4
    static constexpr uint32_t PWR_WKUPFR_WKUPF5 = 0x10; // WKUPF5
    static constexpr uint32_t PWR_WKUPFR_WKUPF6 = 0x20; // WKUPF6

    static constexpr uint32_t PWR_MPUWKUPENR_RESET_VALUE = 0x0;
    static constexpr uint32_t PWR_MPUWKUPENR_WKUPEN1 = 0x1;  // WKUPEN1
    static constexpr uint32_t PWR_MPUWKUPENR_WKUPEN2 = 0x2;  // WKUPEN2
    static constexpr uint32_t PWR_MPUWKUPENR_WKUPEN3 = 0x4;  // WKUPEN3
    static constexpr uint32_t PWR_MPUWKUPENR_WKUPEN4 = 0x8;  // WKUPEN4
    static constexpr uint32_t PWR_MPUWKUPENR_WKUPEN5 = 0x10; // WKUPEN5
    static constexpr uint32_t PWR_MPUWKUPENR_WKUPEN6 = 0x20; // WKUPEN6

    static constexpr uint32_t PWR_MCUWKUPENR_RESET_VALUE = 0x0;
    static constexpr uint32_t PWR_MCUWKUPENR_WKUPEN1 = 0x1;  // WKUPEN1
    static constexpr uint32_t PWR_MCUWKUPENR_WKUPEN2 = 0x2;  // WKUPEN2
    static constexpr uint32_t PWR_MCUWKUPENR_WKUPEN3 = 0x4;  // WKUPEN3
    static constexpr uint32_t PWR_MCUWKUPENR_WKUPEN4 = 0x8;  // WKUPEN4
    static constexpr uint32_t PWR_MCUWKUPENR_WKUPEN5 = 0x10; // WKUPEN5
    static constexpr uint32_t PWR_MCUWKUPENR_WKUPEN6 = 0x20; // WKUPEN6

    static constexpr uint32_t PWR_VER_RESET_VALUE = 0x11;
    template<uint32_t X>
    static constexpr uint32_t PWR_VER_MINREV =   // MINREV
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t PWR_VER_MAJREV =   // MAJREV
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t PWR_ID_RESET_VALUE = 0x10001;

    static constexpr uint32_t PWR_SID_RESET_VALUE = 0xa3c5dd01;
};


template<>
struct peripheral_t<STM32MP15xxx, PWR>
{
    typedef stm32mp15xxx_pwr_t T;
    static T& V;
};

using pwr_t = peripheral_t<mcu_svd, PWR>;

