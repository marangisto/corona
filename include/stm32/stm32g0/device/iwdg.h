#pragma once

////
//
//      STM32G0 IWDG peripherals
//
///

// IWDG: Independent watchdog

struct stm32g030_iwdg_t
{
    volatile uint32_t KR; // Key register
    volatile uint32_t PR; // Prescaler register
    volatile uint32_t RLR; // Reload register
    volatile uint32_t SR; // Status register
    volatile uint32_t WINR; // Window register

    static constexpr uint32_t KR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> KR_KEY; // Key value (write only, read 0x0000)

    static constexpr uint32_t PR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> PR_PR; // Prescaler divider

    static constexpr uint32_t RLR_RESET_VALUE = 0xfff; // Reset value
    typedef bit_field_t<0, 0xfff> RLR_RL; // Watchdog counter reload value

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_WVU = 0x4; // Watchdog counter window value update
    static constexpr uint32_t SR_RVU = 0x2; // Watchdog counter reload value update
    static constexpr uint32_t SR_PVU = 0x1; // Watchdog prescaler value update

    static constexpr uint32_t WINR_RESET_VALUE = 0xfff; // Reset value
    typedef bit_field_t<0, 0xfff> WINR_WIN; // Watchdog counter window value
};

// IWDG: Independent watchdog

struct stm32g050_iwdg_t
{
    volatile uint32_t KR; // Key register
    volatile uint32_t PR; // Prescaler register
    volatile uint32_t RLR; // Reload register
    volatile uint32_t SR; // Status register
    volatile uint32_t WINR; // Window register

    static constexpr uint32_t KR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> KR_KEY; // Key value (write only, read 0x0000)

    static constexpr uint32_t PR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> PR_PR; // Prescaler divider These bits are write access protected see . They are written by software to select the prescaler divider feeding the counter clock. PVU bit of the must be reset in order to be able to change the prescaler divider. Note: Reading this register returns the prescaler value from the VDD voltage domain. This value may not be up to date/valid if a write operation to this register is ongoing. For this reason the value read from this register is valid only when the PVU bit in the status register (IWDG_SR) is reset.

    static constexpr uint32_t RLR_RESET_VALUE = 0xfff; // Reset value
    typedef bit_field_t<0, 0xfff> RLR_RL; // Watchdog counter reload value

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_PVU = 0x1; // Watchdog prescaler value update This bit is set by hardware to indicate that an update of the prescaler value is ongoing. It is reset by hardware when the prescaler update operation is completed in the VDD voltage domain (takes up to five LSI cycles). Prescaler value can be updated only when PVU bit is reset.
    static constexpr uint32_t SR_RVU = 0x2; // Watchdog counter reload value update This bit is set by hardware to indicate that an update of the reload value is ongoing. It is reset by hardware when the reload value update operation is completed in the VDD voltage domain (takes up to five LSI cycles). Reload value can be updated only when RVU bit is reset.
    static constexpr uint32_t SR_WVU = 0x4; // Watchdog counter window value update This bit is set by hardware to indicate that an update of the window value is ongoing. It is reset by hardware when the reload value update operation is completed in the VDD voltage domain (takes up to five LSI cycles). Window value can be updated only when WVU bit is reset.

    static constexpr uint32_t WINR_RESET_VALUE = 0xfff; // Reset value
    typedef bit_field_t<0, 0xfff> WINR_WIN; // Watchdog counter window value
};

// IWDG: Independent watchdog

struct stm32g070_iwdg_t
{
    volatile uint32_t KR; // Key register
    volatile uint32_t PR; // Prescaler register
    volatile uint32_t RLR; // Reload register
    volatile uint32_t SR; // Status register
    volatile uint32_t WINR; // Window register
    reserved_t<0xf7> _0x14;
    volatile uint32_t HWCFGR; // hardware configuration register
    volatile uint32_t VERR; // EXTI IP Version register
    volatile uint32_t IPIDR; // EXTI Identification register
    volatile uint32_t SIDR; // EXTI Size ID register

    static constexpr uint32_t KR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> KR_KEY; // Key value (write only, read 0x0000)

    static constexpr uint32_t PR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> PR_PR; // Prescaler divider

    static constexpr uint32_t RLR_RESET_VALUE = 0xfff; // Reset value
    typedef bit_field_t<0, 0xfff> RLR_RL; // Watchdog counter reload value

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_WVU = 0x4; // Watchdog counter window value update
    static constexpr uint32_t SR_RVU = 0x2; // Watchdog counter reload value update
    static constexpr uint32_t SR_PVU = 0x1; // Watchdog prescaler value update

    static constexpr uint32_t WINR_RESET_VALUE = 0xfff; // Reset value
    typedef bit_field_t<0, 0xfff> WINR_WIN; // Watchdog counter window value


    static constexpr uint32_t HWCFGR_RESET_VALUE = 0x71; // Reset value
    typedef bit_field_t<0, 0xf> HWCFGR_WINDOW; // Support of Window function
    typedef bit_field_t<4, 0xf> HWCFGR_PR_DEFAULT; // Prescaler default value

    static constexpr uint32_t VERR_RESET_VALUE = 0x23; // Reset value
    typedef bit_field_t<0, 0xf> VERR_MINREV; // Minor Revision number
    typedef bit_field_t<4, 0xf> VERR_MAJREV; // Major Revision number

    static constexpr uint32_t IPIDR_RESET_VALUE = 0x120041; // Reset value
    typedef bit_field_t<0, 0xffffffff> IPIDR_IPID; // IP Identification

    static constexpr uint32_t SIDR_RESET_VALUE = 0xa3c5dd01; // Reset value
    typedef bit_field_t<0, 0xffffffff> SIDR_SID; // Size Identification
};

template<>
struct peripheral_t<STM32G030, IWDG>
{
    static constexpr periph_t P = IWDG;
    using T = stm32g030_iwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G031, IWDG>
{
    static constexpr periph_t P = IWDG;
    using T = stm32g030_iwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G041, IWDG>
{
    static constexpr periph_t P = IWDG;
    using T = stm32g030_iwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G050, IWDG>
{
    static constexpr periph_t P = IWDG;
    using T = stm32g050_iwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G051, IWDG>
{
    static constexpr periph_t P = IWDG;
    using T = stm32g050_iwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G061, IWDG>
{
    static constexpr periph_t P = IWDG;
    using T = stm32g050_iwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0B0, IWDG>
{
    static constexpr periph_t P = IWDG;
    using T = stm32g050_iwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0B1, IWDG>
{
    static constexpr periph_t P = IWDG;
    using T = stm32g050_iwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0C1, IWDG>
{
    static constexpr periph_t P = IWDG;
    using T = stm32g050_iwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G070, IWDG>
{
    static constexpr periph_t P = IWDG;
    using T = stm32g070_iwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G071, IWDG>
{
    static constexpr periph_t P = IWDG;
    using T = stm32g070_iwdg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G081, IWDG>
{
    static constexpr periph_t P = IWDG;
    using T = stm32g070_iwdg_t;
    static T& V;
};

using iwdg_t = peripheral_t<svd, IWDG>;
