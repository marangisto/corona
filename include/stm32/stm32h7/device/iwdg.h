#pragma once

////
//
//      STM32H7 IWDG peripherals
//
////

////
//
//      IWDG
//
////

struct stm32h742x_iwdg_t
{
    volatile uint32_t KR;   // [write-only] Key register
    volatile uint32_t PR;   // [read-write] Prescaler register
    volatile uint32_t RLR;  // [read-write] Reload register
    volatile uint32_t SR;   // [read-only] Status register
    volatile uint32_t WINR; // [read-write] Window register

    static constexpr uint32_t KR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t KR_KEY =   // Key value (write only, read 0x0000) These bits must be written by software at regular intervals with the key value 0xAAAA, otherwise the watchdog generates a reset when the counter reaches 0. Writing the key value 0x5555 to enable access to the IWDG_PR, IWDG_RLR and IWDG_WINR registers (see Section23.3.6: Register access protection) Writing the key value CCCCh starts the watchdog (except if the hardware watchdog option is selected)
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t PR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t PR_PR =   // Prescaler divider These bits are write access protected see Section23.3.6: Register access protection. They are written by software to select the prescaler divider feeding the counter clock. PVU bit of IWDG_SR must be reset in order to be able to change the prescaler divider. Note: Reading this register returns the prescaler value from the VDD voltage domain. This value may not be up to date/valid if a write operation to this register is ongoing. For this reason the value read from this register is valid only when the PVU bit in the IWDG_SR register is reset.
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t RLR_RESET_VALUE = 0xfff;
    template<uint32_t X>
    static constexpr uint32_t RLR_RL =   // Watchdog counter reload value These bits are write access protected see Section23.3.6. They are written by software to define the value to be loaded in the watchdog counter each time the value 0xAAAA is written in the IWDG_KR register. The watchdog counter counts down from this value. The timeout period is a function of this value and the clock prescaler. Refer to the datasheet for the timeout information. The RVU bit in the IWDG_SR register must be reset in order to be able to change the reload value. Note: Reading this register returns the reload value from the VDD voltage domain. This value may not be up to date/valid if a write operation to this register is ongoing on this register. For this reason the value read from this register is valid only when the RVU bit in the IWDG_SR register is reset.
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t SR_RESET_VALUE = 0x0;
    static constexpr uint32_t SR_PVU = 0x1; // Watchdog prescaler value update This bit is set by hardware to indicate that an update of the prescaler value is ongoing. It is reset by hardware when the prescaler update operation is completed in the VDD voltage domain (takes up to 5 RC 40 kHz cycles). Prescaler value can be updated only when PVU bit is reset.
    static constexpr uint32_t SR_RVU = 0x2; // Watchdog counter reload value update This bit is set by hardware to indicate that an update of the reload value is ongoing. It is reset by hardware when the reload value update operation is completed in the VDD voltage domain (takes up to 5 RC 40 kHz cycles). Reload value can be updated only when RVU bit is reset.
    static constexpr uint32_t SR_WVU = 0x4; // Watchdog counter window value update This bit is set by hardware to indicate that an update of the window value is ongoing. It is reset by hardware when the reload value update operation is completed in the VDD voltage domain (takes up to 5 RC 40 kHz cycles). Window value can be updated only when WVU bit is reset. This bit is generated only if generic window = 1

    static constexpr uint32_t WINR_RESET_VALUE = 0xfff;
    template<uint32_t X>
    static constexpr uint32_t WINR_WIN =   // Watchdog counter window value These bits are write access protected see Section23.3.6. These bits contain the high limit of the window value to be compared to the downcounter. To prevent a reset, the downcounter must be reloaded when its value is lower than the window register value and greater than 0x0 The WVU bit in the IWDG_SR register must be reset in order to be able to change the reload value. Note: Reading this register returns the reload value from the VDD voltage domain. This value may not be valid if a write operation to this register is ongoing. For this reason the value read from this register is valid only when the WVU bit in the IWDG_SR register is reset.
        bit_field_t<0, 0xfff>::value<X>();
};


////
//
//      IWDG
//
////

struct stm32h750x_iwdg_t
{
    volatile uint32_t IWDG_KR;   // [write-only] Key register
    volatile uint32_t IWDG_PR;   // [read-write] Prescaler register
    volatile uint32_t IWDG_RLR;  // [read-write] Reload register
    volatile uint32_t IWDG_SR;   // [read-only] Status register
    volatile uint32_t IWDG_WINR; // [read-write] Window register

    static constexpr uint32_t IWDG_KR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IWDG_KR_KEY =   // Key value (write only, read 0x0000) These bits must be written by software at regular intervals with the key value 0xAAAA, otherwise the watchdog generates a reset when the counter reaches 0. Writing the key value 0x5555 to enable access to the IWDG_PR, IWDG_RLR and IWDG_WINR registers (see Section23.3.6: Register access protection) Writing the key value CCCCh starts the watchdog (except if the hardware watchdog option is selected)
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t IWDG_PR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t IWDG_PR_PR =   // Prescaler divider These bits are write access protected see Section23.3.6: Register access protection. They are written by software to select the prescaler divider feeding the counter clock. PVU bit of IWDG_SR must be reset in order to be able to change the prescaler divider. Note: Reading this register returns the prescaler value from the VDD voltage domain. This value may not be up to date/valid if a write operation to this register is ongoing. For this reason the value read from this register is valid only when the PVU bit in the IWDG_SR register is reset.
        bit_field_t<0, 0x7>::value<X>();

    static constexpr uint32_t IWDG_RLR_RESET_VALUE = 0xfff;
    template<uint32_t X>
    static constexpr uint32_t IWDG_RLR_RL =   // Watchdog counter reload value These bits are write access protected see Section23.3.6. They are written by software to define the value to be loaded in the watchdog counter each time the value 0xAAAA is written in the IWDG_KR register. The watchdog counter counts down from this value. The timeout period is a function of this value and the clock prescaler. Refer to the datasheet for the timeout information. The RVU bit in the IWDG_SR register must be reset in order to be able to change the reload value. Note: Reading this register returns the reload value from the VDD voltage domain. This value may not be up to date/valid if a write operation to this register is ongoing on this register. For this reason the value read from this register is valid only when the RVU bit in the IWDG_SR register is reset.
        bit_field_t<0, 0xfff>::value<X>();

    static constexpr uint32_t IWDG_SR_RESET_VALUE = 0x0;
    static constexpr uint32_t IWDG_SR_PVU = 0x1; // Watchdog prescaler value update This bit is set by hardware to indicate that an update of the prescaler value is ongoing. It is reset by hardware when the prescaler update operation is completed in the VDD voltage domain (takes up to 5 RC 40 kHz cycles). Prescaler value can be updated only when PVU bit is reset.
    static constexpr uint32_t IWDG_SR_RVU = 0x2; // Watchdog counter reload value update This bit is set by hardware to indicate that an update of the reload value is ongoing. It is reset by hardware when the reload value update operation is completed in the VDD voltage domain (takes up to 5 RC 40 kHz cycles). Reload value can be updated only when RVU bit is reset.
    static constexpr uint32_t IWDG_SR_WVU = 0x4; // Watchdog counter window value update This bit is set by hardware to indicate that an update of the window value is ongoing. It is reset by hardware when the reload value update operation is completed in the VDD voltage domain (takes up to 5 RC 40 kHz cycles). Window value can be updated only when WVU bit is reset. This bit is generated only if generic window = 1

    static constexpr uint32_t IWDG_WINR_RESET_VALUE = 0xfff;
    template<uint32_t X>
    static constexpr uint32_t IWDG_WINR_WIN =   // Watchdog counter window value These bits are write access protected see Section23.3.6. These bits contain the high limit of the window value to be compared to the downcounter. To prevent a reset, the downcounter must be reloaded when its value is lower than the window register value and greater than 0x0 The WVU bit in the IWDG_SR register must be reset in order to be able to change the reload value. Note: Reading this register returns the reload value from the VDD voltage domain. This value may not be valid if a write operation to this register is ongoing. For this reason the value read from this register is valid only when the WVU bit in the IWDG_SR register is reset.
        bit_field_t<0, 0xfff>::value<X>();
};


template<>
struct peripheral_t<STM32H742x, IWDG>
{
    typedef stm32h742x_iwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, IWDG>
{
    typedef stm32h742x_iwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, IWDG1>
{
    typedef stm32h742x_iwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, IWDG2>
{
    typedef stm32h742x_iwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, IWDG1>
{
    typedef stm32h742x_iwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, IWDG2>
{
    typedef stm32h742x_iwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, IWDG1>
{
    typedef stm32h742x_iwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, IWDG2>
{
    typedef stm32h742x_iwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, IWDG1>
{
    typedef stm32h742x_iwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, IWDG2>
{
    typedef stm32h742x_iwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, IWDG>
{
    typedef stm32h742x_iwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, IWDG1>
{
    typedef stm32h742x_iwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, IWDG2>
{
    typedef stm32h742x_iwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, IWDG1>
{
    typedef stm32h742x_iwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, IWDG2>
{
    typedef stm32h742x_iwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, IWDG1>
{
    typedef stm32h742x_iwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, IWDG2>
{
    typedef stm32h742x_iwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, IWDG1>
{
    typedef stm32h742x_iwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, IWDG2>
{
    typedef stm32h742x_iwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, IWDG>
{
    typedef stm32h750x_iwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, IWDG>
{
    typedef stm32h750x_iwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, IWDG>
{
    typedef stm32h750x_iwdg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, IWDG>
{
    typedef stm32h750x_iwdg_t T;
    static T& V;
};

using iwdg_t = peripheral_t<mcu_svd, IWDG>;
using iwdg1_t = peripheral_t<mcu_svd, IWDG1>;
using iwdg2_t = peripheral_t<mcu_svd, IWDG2>;

