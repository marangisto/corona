#pragma once

////
//
//      STM32F1 RTC peripherals
//
////

////
//
//      Real time clock
//
////

struct stm32f100_rtc_t
{
    volatile uint32_t CRH;  // [read-write] RTC Control Register High
    volatile uint32_t CRL;  // RTC Control Register Low
    volatile uint32_t PRLH; // [write-only] RTC Prescaler Load Register High
    volatile uint32_t PRLL; // [write-only] RTC Prescaler Load Register Low
    volatile uint32_t DIVH; // [read-only] RTC Prescaler Divider Register High
    volatile uint32_t DIVL; // [read-only] RTC Prescaler Divider Register Low
    volatile uint32_t CNTH; // [read-write] RTC Counter Register High
    volatile uint32_t CNTL; // [read-write] RTC Counter Register Low
    volatile uint32_t ALRH; // [write-only] RTC Alarm Register High
    volatile uint32_t ALRL; // [write-only] RTC Alarm Register Low

    static constexpr uint32_t CRH_RESET_VALUE = 0x0;
    static constexpr uint32_t CRH_SECIE = 0x1; // Second interrupt Enable
    static constexpr uint32_t CRH_ALRIE = 0x2; // Alarm interrupt Enable
    static constexpr uint32_t CRH_OWIE = 0x4;  // Overflow interrupt Enable

    static constexpr uint32_t CRL_RESET_VALUE = 0x20;
    static constexpr uint32_t CRL_SECF = 0x1;   // Second Flag
    static constexpr uint32_t CRL_ALRF = 0x2;   // Alarm Flag
    static constexpr uint32_t CRL_OWF = 0x4;    // Overflow Flag
    static constexpr uint32_t CRL_RSF = 0x8;    // Registers Synchronized Flag
    static constexpr uint32_t CRL_CNF = 0x10;   // Configuration Flag
    static constexpr uint32_t CRL_RTOFF = 0x20; // RTC operation OFF

    static constexpr uint32_t PRLH_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t PRLH_PRLH =   // RTC Prescaler Load Register High
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t PRLL_RESET_VALUE = 0x8000;
    template<uint32_t X>
    static constexpr uint32_t PRLL_PRLL =   // RTC Prescaler Divider Register Low
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t DIVH_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DIVH_DIVH =   // RTC prescaler divider register high
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t DIVL_RESET_VALUE = 0x8000;
    template<uint32_t X>
    static constexpr uint32_t DIVL_DIVL =   // RTC prescaler divider register Low
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CNTH_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CNTH_CNTH =   // RTC counter register high
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t CNTL_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CNTL_CNTL =   // RTC counter register Low
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t ALRH_RESET_VALUE = 0xffff;
    template<uint32_t X>
    static constexpr uint32_t ALRH_ALRH =   // RTC alarm register high
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t ALRL_RESET_VALUE = 0xffff;
    template<uint32_t X>
    static constexpr uint32_t ALRL_ALRL =   // RTC alarm register low
        bit_field_t<0, 0xffff>::value<X>();
};


template<>
struct peripheral_t<STM32F100, RTC>
{
    typedef stm32f100_rtc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F101, RTC>
{
    typedef stm32f100_rtc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F102, RTC>
{
    typedef stm32f100_rtc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F103, RTC>
{
    typedef stm32f100_rtc_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F107, RTC>
{
    typedef stm32f100_rtc_t T;
    static T& V;
};

using rtc_t = peripheral_t<mcu_svd, RTC>;

