#pragma once

////
//
//      STM32MP1 SYSCFG peripherals
//
////

////
//
//      SYSCFG
//
////

struct stm32mp15xxx_syscfg_t
{
    volatile uint32_t SYSCFG_BOOTR;      // This register is used to know the state of BOOT pins and to control pull-up to reduce the static power consumption on the pin set to high level. )
    volatile uint32_t SYSCFG_PMCSETR;    // [read-write] SYSCFG peripheral mode configuration set register
    reserved_t<0x4> _0x18;
    volatile uint32_t SYSCFG_IOCTRLSETR; // [read-write] SYSCFG IO control register
    volatile uint32_t SYSCFG_ICNR;       // [read-write] SYSCFG interconnect control register
    volatile uint32_t SYSCFG_CMPCR;      // SYSCFG compensation cell control register
    volatile uint32_t SYSCFG_CMPENSETR;  // [read-write] SYSCFG compensation cell enable set register
    volatile uint32_t SYSCFG_CMPENCLRR;  // [read-write] SYSCFG compensation cell enable set register
    volatile uint32_t SYSCFG_CBR;        // [read-write] SYSCFG control timer break register
    reserved_t<0x5> _0x44;
    volatile uint32_t SYSCFG_PMCCLRR;    // [read-write] SYSCFG peripheral mode configuration clear register
    reserved_t<0x4> _0x58;
    volatile uint32_t SYSCFG_IOCTRLCLRR; // [read-write] SYSCFG IO control register
    reserved_t<0xe6> _0x3f4;
    volatile uint32_t SYSCFG_VERR;       // [read-only] SYSCFG version register
    volatile uint32_t SYSCFG_IPIDR;      // [read-only] SYSCFG identification register
    volatile uint32_t SYSCFG_SIDR;       // [read-only] SYSCFG size identification register

    static constexpr uint32_t SYSCFG_BOOTR_RESET_VALUE = 0x0;
    static constexpr uint32_t SYSCFG_BOOTR_BOOT0 = 0x1;     // BOOT0
    static constexpr uint32_t SYSCFG_BOOTR_BOOT1 = 0x2;     // BOOT1
    static constexpr uint32_t SYSCFG_BOOTR_BOOT2 = 0x4;     // BOOT2
    static constexpr uint32_t SYSCFG_BOOTR_BOOT0_PD = 0x10; // BOOT0_PD
    static constexpr uint32_t SYSCFG_BOOTR_BOOT1_PD = 0x20; // BOOT1_PD
    static constexpr uint32_t SYSCFG_BOOTR_BOOT2_PD = 0x40; // BOOT2_PD

    static constexpr uint32_t SYSCFG_PMCSETR_RESET_VALUE = 0x0;
    static constexpr uint32_t SYSCFG_PMCSETR_I2C1_FMP = 0x1;            // I2C1_FMP
    static constexpr uint32_t SYSCFG_PMCSETR_I2C2_FMP = 0x2;            // I2C2_FMP
    static constexpr uint32_t SYSCFG_PMCSETR_I2C3_FMP = 0x4;            // I2C3_FMP
    static constexpr uint32_t SYSCFG_PMCSETR_I2C4_FMP = 0x8;            // I2C4_FMP
    static constexpr uint32_t SYSCFG_PMCSETR_I2C5_FMP = 0x10;           // I2C5_FMP
    static constexpr uint32_t SYSCFG_PMCSETR_I2C6_FMP = 0x20;           // I2C6_FMP
    static constexpr uint32_t SYSCFG_PMCSETR_EN_BOOSTER = 0x100;        // EN_BOOSTER
    static constexpr uint32_t SYSCFG_PMCSETR_ANASWVDD = 0x200;          // ANASWVDD
    static constexpr uint32_t SYSCFG_PMCSETR_ETH_CLK_SEL = 0x10000;     // ETH_CLK_SEL
    static constexpr uint32_t SYSCFG_PMCSETR_ETH_REF_CLK_SEL = 0x20000; // ETH_REF_CLK_SEL
    static constexpr uint32_t SYSCFG_PMCSETR_ETH_SELMII = 0x100000;     // ETH_SELMII
    template<uint32_t X>
    static constexpr uint32_t SYSCFG_PMCSETR_ETH_SEL =                  // ETH_SEL
        bit_field_t<21, 0x7>::value<X>();
    static constexpr uint32_t SYSCFG_PMCSETR_ANA0_SEL = 0x1000000;      // ANA0_SEL
    static constexpr uint32_t SYSCFG_PMCSETR_ANA1_SEL = 0x2000000;      // ANA1_SEL

    static constexpr uint32_t SYSCFG_IOCTRLSETR_RESET_VALUE = 0x0;
    static constexpr uint32_t SYSCFG_IOCTRLSETR_HSLVEN_TRACE = 0x1;   // HSLVEN_TRACE
    static constexpr uint32_t SYSCFG_IOCTRLSETR_HSLVEN_QUADSPI = 0x2; // HSLVEN_QUADSPI
    static constexpr uint32_t SYSCFG_IOCTRLSETR_HSLVEN_ETH = 0x4;     // HSLVEN_ETH
    static constexpr uint32_t SYSCFG_IOCTRLSETR_HSLVEN_SDMMC = 0x8;   // HSLVEN_SDMMC
    static constexpr uint32_t SYSCFG_IOCTRLSETR_HSLVEN_SPI = 0x10;    // HSLVEN_SPI

    static constexpr uint32_t SYSCFG_ICNR_RESET_VALUE = 0x0;
    static constexpr uint32_t SYSCFG_ICNR_AXI_M0 = 0x1;    // AXI_M0
    static constexpr uint32_t SYSCFG_ICNR_AXI_M1 = 0x2;    // AXI_M1
    static constexpr uint32_t SYSCFG_ICNR_AXI_M2 = 0x4;    // AXI_M2
    static constexpr uint32_t SYSCFG_ICNR_AXI_M3 = 0x8;    // AXI_M3
    static constexpr uint32_t SYSCFG_ICNR_AXI_M5 = 0x20;   // AXI_M5
    static constexpr uint32_t SYSCFG_ICNR_AXI_M6 = 0x40;   // AXI_M6
    static constexpr uint32_t SYSCFG_ICNR_AXI_M7 = 0x80;   // AXI_M7
    static constexpr uint32_t SYSCFG_ICNR_AXI_M8 = 0x100;  // AXI_M8
    static constexpr uint32_t SYSCFG_ICNR_AXI_M9 = 0x200;  // AXI_M9
    static constexpr uint32_t SYSCFG_ICNR_AXI_M10 = 0x400; // AXI_M10

    static constexpr uint32_t SYSCFG_CMPCR_RESET_VALUE = 0x870000;
    static constexpr uint32_t SYSCFG_CMPCR_SW_CTRL = 0x2; // SW_CTRL
    static constexpr uint32_t SYSCFG_CMPCR_READY = 0x100; // READY
    template<uint32_t X>
    static constexpr uint32_t SYSCFG_CMPCR_RANSRC =       // RANSRC
        bit_field_t<16, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SYSCFG_CMPCR_RAPSRC =       // RAPSRC
        bit_field_t<20, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SYSCFG_CMPCR_ANSRC =        // ANSRC
        bit_field_t<24, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SYSCFG_CMPCR_APSRC =        // APSRC
        bit_field_t<28, 0xf>::value<X>();

    static constexpr uint32_t SYSCFG_CMPENSETR_RESET_VALUE = 0x0;
    static constexpr uint32_t SYSCFG_CMPENSETR_MPU_EN = 0x1; // MPU_EN
    static constexpr uint32_t SYSCFG_CMPENSETR_MCU_EN = 0x2; // MCU_EN

    static constexpr uint32_t SYSCFG_CMPENCLRR_RESET_VALUE = 0x0;
    static constexpr uint32_t SYSCFG_CMPENCLRR_MPU_EN = 0x1; // MPU_EN
    static constexpr uint32_t SYSCFG_CMPENCLRR_MCU_EN = 0x2; // MCU_EN

    static constexpr uint32_t SYSCFG_CBR_RESET_VALUE = 0x0;
    static constexpr uint32_t SYSCFG_CBR_CLL = 0x1;  // CLL
    static constexpr uint32_t SYSCFG_CBR_PVDL = 0x4; // PVDL

    static constexpr uint32_t SYSCFG_PMCCLRR_RESET_VALUE = 0x0;
    static constexpr uint32_t SYSCFG_PMCCLRR_I2C1_FMP = 0x1;            // I2C1_FMP
    static constexpr uint32_t SYSCFG_PMCCLRR_I2C2_FMP = 0x2;            // I2C2_FMP
    static constexpr uint32_t SYSCFG_PMCCLRR_I2C3_FMP = 0x4;            // I2C3_FMP
    static constexpr uint32_t SYSCFG_PMCCLRR_I2C4_FMP = 0x8;            // I2C4_FMP
    static constexpr uint32_t SYSCFG_PMCCLRR_I2C5_FMP = 0x10;           // I2C5_FMP
    static constexpr uint32_t SYSCFG_PMCCLRR_I2C6_FMP = 0x20;           // I2C6_FMP
    static constexpr uint32_t SYSCFG_PMCCLRR_EN_BOOSTER = 0x100;        // EN_BOOSTER
    static constexpr uint32_t SYSCFG_PMCCLRR_ANASWVDD = 0x200;          // ANASWVDD
    static constexpr uint32_t SYSCFG_PMCCLRR_ETH_CLK_SEL = 0x10000;     // ETH_CLK_SEL
    static constexpr uint32_t SYSCFG_PMCCLRR_ETH_REF_CLK_SEL = 0x20000; // ETH_REF_CLK_SEL
    static constexpr uint32_t SYSCFG_PMCCLRR_ETH_SELMII = 0x100000;     // ETH_SELMII
    template<uint32_t X>
    static constexpr uint32_t SYSCFG_PMCCLRR_ETH_SEL =                  // ETH_SEL
        bit_field_t<21, 0x7>::value<X>();
    static constexpr uint32_t SYSCFG_PMCCLRR_ANA0_SEL = 0x1000000;      // ANA0_SEL
    static constexpr uint32_t SYSCFG_PMCCLRR_ANA1_SEL = 0x2000000;      // ANA1_SEL

    static constexpr uint32_t SYSCFG_IOCTRLCLRR_RESET_VALUE = 0x0;
    static constexpr uint32_t SYSCFG_IOCTRLCLRR_HSLVEN_TRACE = 0x1;   // HSLVEN_TRACE
    static constexpr uint32_t SYSCFG_IOCTRLCLRR_HSLVEN_QUADSPI = 0x2; // HSLVEN_QUADSPI
    static constexpr uint32_t SYSCFG_IOCTRLCLRR_HSLVEN_ETH = 0x4;     // HSLVEN_ETH
    static constexpr uint32_t SYSCFG_IOCTRLCLRR_HSLVEN_SDMMC = 0x8;   // HSLVEN_SDMMC
    static constexpr uint32_t SYSCFG_IOCTRLCLRR_HSLVEN_SPI = 0x10;    // HSLVEN_SPI

    static constexpr uint32_t SYSCFG_VERR_RESET_VALUE = 0x20;
    template<uint32_t X>
    static constexpr uint32_t SYSCFG_VERR_MINREV =   // MINREV
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t SYSCFG_VERR_MAJREV =   // MAJREV
        bit_field_t<4, 0xf>::value<X>();

    static constexpr uint32_t SYSCFG_IPIDR_RESET_VALUE = 0x30001;

    static constexpr uint32_t SYSCFG_SIDR_RESET_VALUE = 0xa3c5dd01;
};


template<>
struct peripheral_t<STM32MP15xxx, SYSCFG>
{
    typedef stm32mp15xxx_syscfg_t T;
    static T& V;
};

using syscfg_t = peripheral_t<mcu_svd, SYSCFG>;

