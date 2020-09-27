#pragma once

////
//
//      STM32F1 RTC peripherals
//
///

// RTC: Real time clock

struct stm32f100_rtc_t
{
    volatile uint32_t CRH; // RTC Control Register High
    volatile uint32_t CRL; // RTC Control Register Low
    volatile uint32_t PRLH; // RTC Prescaler Load Register High
    volatile uint32_t PRLL; // RTC Prescaler Load Register Low
    volatile uint32_t DIVH; // RTC Prescaler Divider Register High
    volatile uint32_t DIVL; // RTC Prescaler Divider Register Low
    volatile uint32_t CNTH; // RTC Counter Register High
    volatile uint32_t CNTL; // RTC Counter Register Low
    volatile uint32_t ALRH; // RTC Alarm Register High
    volatile uint32_t ALRL; // RTC Alarm Register Low

    static constexpr uint32_t CRH_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CRH_SECIE = 0x1; // Second interrupt Enable
    static constexpr uint32_t CRH_ALRIE = 0x2; // Alarm interrupt Enable
    static constexpr uint32_t CRH_OWIE = 0x4; // Overflow interrupt Enable

    static constexpr uint32_t CRL_RESET_VALUE = 0x20; // Reset value
    static constexpr uint32_t CRL_SECF = 0x1; // Second Flag
    static constexpr uint32_t CRL_ALRF = 0x2; // Alarm Flag
    static constexpr uint32_t CRL_OWF = 0x4; // Overflow Flag
    static constexpr uint32_t CRL_RSF = 0x8; // Registers Synchronized Flag
    static constexpr uint32_t CRL_CNF = 0x10; // Configuration Flag
    static constexpr uint32_t CRL_RTOFF = 0x20; // RTC operation OFF

    static constexpr uint32_t PRLH_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> PRLH_PRLH; // RTC Prescaler Load Register High

    static constexpr uint32_t PRLL_RESET_VALUE = 0x8000; // Reset value
    typedef bit_field_t<0, 0xffff> PRLL_PRLL; // RTC Prescaler Divider Register Low

    static constexpr uint32_t DIVH_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> DIVH_DIVH; // RTC prescaler divider register high

    static constexpr uint32_t DIVL_RESET_VALUE = 0x8000; // Reset value
    typedef bit_field_t<0, 0xffff> DIVL_DIVL; // RTC prescaler divider register Low

    static constexpr uint32_t CNTH_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNTH_CNTH; // RTC counter register high

    static constexpr uint32_t CNTL_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNTL_CNTL; // RTC counter register Low

    static constexpr uint32_t ALRH_RESET_VALUE = 0xffff; // Reset value
    typedef bit_field_t<0, 0xffff> ALRH_ALRH; // RTC alarm register high

    static constexpr uint32_t ALRL_RESET_VALUE = 0xffff; // Reset value
    typedef bit_field_t<0, 0xffff> ALRL_ALRL; // RTC alarm register low
};

template<>
struct peripheral_t<STM32F100, RTC>
{
    static constexpr periph_t P = RTC;
    using T = stm32f100_rtc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F101, RTC>
{
    static constexpr periph_t P = RTC;
    using T = stm32f100_rtc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F102, RTC>
{
    static constexpr periph_t P = RTC;
    using T = stm32f100_rtc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F103, RTC>
{
    static constexpr periph_t P = RTC;
    using T = stm32f100_rtc_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F107, RTC>
{
    static constexpr periph_t P = RTC;
    using T = stm32f100_rtc_t;
    static T& V;
};

using rtc_t = peripheral_t<svd, RTC>;
