#pragma once

////
//
//      STM32U5 DCACHE peripherals
//
///

// DCACHE: DCACHE

struct stm32u5xx_dcache_t
{
    volatile uint32_t DCACHE_CR; // DCACHE control register
    volatile uint32_t DCACHE_SR; // DCACHE status register
    volatile uint32_t DCACHE_IER; // DCACHE interrupt enable register
    volatile uint32_t DCACHE_FCR; // DCACHE flag clear register
    volatile uint32_t DCACHE_RHMONR; // DCACHE read-hit monitor register
    volatile uint32_t DCACHE_RMMONR; // DCACHE read-miss monitor register
    reserved_t<0x2> _0x18;
    volatile uint32_t DCACHE_WHMONR; // write-hit monitor register
    volatile uint32_t DCACHE_WMMONR; // write-miss monitor register
    volatile uint32_t DCACHE_CMDRSADDRR; // command range start address register
    volatile uint32_t DCACHE_CMDREADDRR; // command range start address register

    static constexpr uint32_t DCACHE_CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DCACHE_CR_EN = 0x1; // EN
    static constexpr uint32_t DCACHE_CR_CACHEINV = 0x2; // CACHEINV
    typedef bit_field_t<8, 0x7> DCACHE_CR_CACHECMD; // CACHECMD
    static constexpr uint32_t DCACHE_CR_STARTCMD = 0x800; // STARTCMD
    static constexpr uint32_t DCACHE_CR_RHITMEN = 0x10000; // RHITMEN
    static constexpr uint32_t DCACHE_CR_RMISSMEN = 0x20000; // RMISSMEN
    static constexpr uint32_t DCACHE_CR_RHITMRST = 0x40000; // RHITMRST
    static constexpr uint32_t DCACHE_CR_RMISSMRST = 0x80000; // RMISSMRST
    static constexpr uint32_t DCACHE_CR_WHITMEN = 0x100000; // WHITMEN
    static constexpr uint32_t DCACHE_CR_WMISSMEN = 0x200000; // WMISSMEN
    static constexpr uint32_t DCACHE_CR_WHITMRST = 0x400000; // WHITMRST
    static constexpr uint32_t DCACHE_CR_WMISSMRST = 0x800000; // WMISSMRST
    static constexpr uint32_t DCACHE_CR_HBURST = 0x80000000; // HBURST

    static constexpr uint32_t DCACHE_SR_RESET_VALUE = 0x1; // Reset value
    static constexpr uint32_t DCACHE_SR_BUSYF = 0x1; // BUSYF
    static constexpr uint32_t DCACHE_SR_BSYENDF = 0x2; // BSYENDF
    static constexpr uint32_t DCACHE_SR_ERRF = 0x4; // ERRF
    static constexpr uint32_t DCACHE_SR_BUSYCMDF = 0x8; // BUSYCMDF
    static constexpr uint32_t DCACHE_SR_CMDENDF = 0x10; // CMDENDF

    static constexpr uint32_t DCACHE_IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DCACHE_IER_BSYENDIE = 0x2; // BSYENDIE
    static constexpr uint32_t DCACHE_IER_ERRIE = 0x4; // ERRIE
    static constexpr uint32_t DCACHE_IER_CMDENDIE = 0x10; // CMDENDIE

    static constexpr uint32_t DCACHE_FCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DCACHE_FCR_CBSYENDF = 0x2; // CBSYENDF
    static constexpr uint32_t DCACHE_FCR_CERRF = 0x4; // CERRF
    static constexpr uint32_t DCACHE_FCR_CCMDENDF = 0x10; // CCMDENDF

    static constexpr uint32_t DCACHE_RHMONR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DCACHE_RHMONR_RHITMON; // RHITMON

    static constexpr uint32_t DCACHE_RMMONR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DCACHE_RMMONR_MRISSMON; // RMISSMON


    static constexpr uint32_t DCACHE_WHMONR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DCACHE_WHMONR_WHITMON; // WHITMON

    static constexpr uint32_t DCACHE_WMMONR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DCACHE_WMMONR_WMISSMON; // WMISSMON

    static constexpr uint32_t DCACHE_CMDRSADDRR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DCACHE_CMDRSADDRR_CMDSTARTADDR; // CMDSTARTADDR

    static constexpr uint32_t DCACHE_CMDREADDRR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffffffff> DCACHE_CMDREADDRR_CMDENDADDR; // CMDENDADDR
};

template<>
struct peripheral_t<STM32U5xx, DCACHE>
{
    static constexpr periph_t P = DCACHE;
    using T = stm32u5xx_dcache_t;
    static T& V;
};

template<>
struct peripheral_t<STM32U5xx, SEC_DCACHE>
{
    static constexpr periph_t P = SEC_DCACHE;
    using T = stm32u5xx_dcache_t;
    static T& V;
};

using dcache_t = peripheral_t<svd, DCACHE>;
using sec_dcache_t = peripheral_t<svd, SEC_DCACHE>;
