#pragma once

////
//
//      STM32F7 PWR peripherals
//
////

////
//
//      Power control
//
////

struct stm32f722_pwr_t
{
    volatile uint32_t CR1;  // [read-write] power control register
    volatile uint32_t CSR1; // power control/status register
    volatile uint32_t CR2;  // power control register
    volatile uint32_t CSR2; // power control/status register

    static constexpr uint32_t CR1_RESET_VALUE = 0xc000;
    static constexpr uint32_t CR1_LPDS = 0x1;       // Low-power deep sleep
    static constexpr uint32_t CR1_PDDS = 0x2;       // Power down deepsleep
    static constexpr uint32_t CR1_CSBF = 0x8;       // Clear standby flag
    static constexpr uint32_t CR1_PVDE = 0x10;      // Power voltage detector enable
    template<uint32_t X>
    static constexpr uint32_t CR1_PLS =             // PVD level selection
        bit_field_t<5, 0x7>::value<X>();
    static constexpr uint32_t CR1_DBP = 0x100;      // Disable backup domain write protection
    static constexpr uint32_t CR1_FPDS = 0x200;     // Flash power down in Stop mode
    static constexpr uint32_t CR1_LPUDS = 0x400;    // Low-power regulator in deepsleep under-drive mode
    static constexpr uint32_t CR1_MRUDS = 0x800;    // Main regulator in deepsleep under-drive mode
    static constexpr uint32_t CR1_ADCDC1 = 0x2000;  // ADCDC1
    template<uint32_t X>
    static constexpr uint32_t CR1_VOS =             // Regulator voltage scaling output selection
        bit_field_t<14, 0x3>::value<X>();
    static constexpr uint32_t CR1_ODEN = 0x10000;   // Over-drive enable
    static constexpr uint32_t CR1_ODSWEN = 0x20000; // Over-drive switching enabled
    template<uint32_t X>
    static constexpr uint32_t CR1_UDEN =            // Under-drive enable in stop mode
        bit_field_t<18, 0x3>::value<X>();

    static constexpr uint32_t CSR1_RESET_VALUE = 0x0;
    static constexpr uint32_t CSR1_WUIF = 0x1;        // Wakeup internal flag
    static constexpr uint32_t CSR1_SBF = 0x2;         // Standby flag
    static constexpr uint32_t CSR1_PVDO = 0x4;        // PVD output
    static constexpr uint32_t CSR1_BRR = 0x8;         // Backup regulator ready
    static constexpr uint32_t CSR1_BRE = 0x200;       // Backup regulator enable
    static constexpr uint32_t CSR1_VOSRDY = 0x4000;   // Regulator voltage scaling output selection ready bit
    static constexpr uint32_t CSR1_ODRDY = 0x10000;   // Over-drive mode ready
    static constexpr uint32_t CSR1_ODSWRDY = 0x20000; // Over-drive mode switching ready
    template<uint32_t X>
    static constexpr uint32_t CSR1_UDRDY =            // Under-drive ready flag
        bit_field_t<18, 0x3>::value<X>();
    static constexpr uint32_t CSR1_EIWUP = 0x100;     // Enable internal wakeup

    static constexpr uint32_t CR2_RESET_VALUE = 0x0;
    static constexpr uint32_t CR2_CWUPF1 = 0x1;   // Clear Wakeup Pin flag for PA0
    static constexpr uint32_t CR2_CWUPF2 = 0x2;   // Clear Wakeup Pin flag for PA2
    static constexpr uint32_t CR2_CWUPF3 = 0x4;   // Clear Wakeup Pin flag for PC1
    static constexpr uint32_t CR2_CWUPF4 = 0x8;   // Clear Wakeup Pin flag for PC13
    static constexpr uint32_t CR2_CWUPF5 = 0x10;  // Clear Wakeup Pin flag for PI8
    static constexpr uint32_t CR2_CWUPF6 = 0x20;  // Clear Wakeup Pin flag for PI11
    static constexpr uint32_t CR2_WUPP1 = 0x100;  // Wakeup pin polarity bit for PA0
    static constexpr uint32_t CR2_WUPP2 = 0x200;  // Wakeup pin polarity bit for PA2
    static constexpr uint32_t CR2_WUPP3 = 0x400;  // Wakeup pin polarity bit for PC1
    static constexpr uint32_t CR2_WUPP4 = 0x800;  // Wakeup pin polarity bit for PC13
    static constexpr uint32_t CR2_WUPP5 = 0x1000; // Wakeup pin polarity bit for PI8
    static constexpr uint32_t CR2_WUPP6 = 0x2000; // Wakeup pin polarity bit for PI11

    static constexpr uint32_t CSR2_RESET_VALUE = 0x0;
    static constexpr uint32_t CSR2_WUPF1 = 0x1;    // Wakeup Pin flag for PA0
    static constexpr uint32_t CSR2_WUPF2 = 0x2;    // Wakeup Pin flag for PA2
    static constexpr uint32_t CSR2_WUPF3 = 0x4;    // Wakeup Pin flag for PC1
    static constexpr uint32_t CSR2_WUPF4 = 0x8;    // Wakeup Pin flag for PC13
    static constexpr uint32_t CSR2_WUPF5 = 0x10;   // Wakeup Pin flag for PI8
    static constexpr uint32_t CSR2_WUPF6 = 0x20;   // Wakeup Pin flag for PI11
    static constexpr uint32_t CSR2_EWUP1 = 0x100;  // Enable Wakeup pin for PA0
    static constexpr uint32_t CSR2_EWUP2 = 0x200;  // Enable Wakeup pin for PA2
    static constexpr uint32_t CSR2_EWUP3 = 0x400;  // Enable Wakeup pin for PC1
    static constexpr uint32_t CSR2_EWUP4 = 0x800;  // Enable Wakeup pin for PC13
    static constexpr uint32_t CSR2_EWUP5 = 0x1000; // Enable Wakeup pin for PI8
    static constexpr uint32_t CSR2_EWUP6 = 0x2000; // Enable Wakeup pin for PI11
};


////
//
//      Power control
//
////

struct stm32f745_pwr_t
{
    volatile uint32_t CR1;  // [read-write] power control register
    volatile uint32_t CSR1; // power control/status register
    volatile uint32_t CR2;  // power control register
    volatile uint32_t CSR2; // power control/status register

    static constexpr uint32_t CR1_RESET_VALUE = 0xc000;
    static constexpr uint32_t CR1_LPDS = 0x1;       // Low-power deep sleep
    static constexpr uint32_t CR1_PDDS = 0x2;       // Power down deepsleep
    static constexpr uint32_t CR1_CSBF = 0x8;       // Clear standby flag
    static constexpr uint32_t CR1_PVDE = 0x10;      // Power voltage detector enable
    template<uint32_t X>
    static constexpr uint32_t CR1_PLS =             // PVD level selection
        bit_field_t<5, 0x7>::value<X>();
    static constexpr uint32_t CR1_DBP = 0x100;      // Disable backup domain write protection
    static constexpr uint32_t CR1_FPDS = 0x200;     // Flash power down in Stop mode
    static constexpr uint32_t CR1_LPUDS = 0x400;    // Low-power regulator in deepsleep under-drive mode
    static constexpr uint32_t CR1_MRUDS = 0x800;    // Main regulator in deepsleep under-drive mode
    static constexpr uint32_t CR1_ADCDC1 = 0x2000;  // ADCDC1
    template<uint32_t X>
    static constexpr uint32_t CR1_VOS =             // Regulator voltage scaling output selection
        bit_field_t<14, 0x3>::value<X>();
    static constexpr uint32_t CR1_ODEN = 0x10000;   // Over-drive enable
    static constexpr uint32_t CR1_ODSWEN = 0x20000; // Over-drive switching enabled
    template<uint32_t X>
    static constexpr uint32_t CR1_UDEN =            // Under-drive enable in stop mode
        bit_field_t<18, 0x3>::value<X>();

    static constexpr uint32_t CSR1_RESET_VALUE = 0x0;
    static constexpr uint32_t CSR1_WUIF = 0x1;        // Wakeup internal flag
    static constexpr uint32_t CSR1_SBF = 0x2;         // Standby flag
    static constexpr uint32_t CSR1_PVDO = 0x4;        // PVD output
    static constexpr uint32_t CSR1_BRR = 0x8;         // Backup regulator ready
    static constexpr uint32_t CSR1_BRE = 0x200;       // Backup regulator enable
    static constexpr uint32_t CSR1_VOSRDY = 0x4000;   // Regulator voltage scaling output selection ready bit
    static constexpr uint32_t CSR1_ODRDY = 0x10000;   // Over-drive mode ready
    static constexpr uint32_t CSR1_ODSWRDY = 0x20000; // Over-drive mode switching ready
    template<uint32_t X>
    static constexpr uint32_t CSR1_UDRDY =            // Under-drive ready flag
        bit_field_t<18, 0x3>::value<X>();

    static constexpr uint32_t CR2_RESET_VALUE = 0x0;
    static constexpr uint32_t CR2_CWUPF1 = 0x1;   // Clear Wakeup Pin flag for PA0
    static constexpr uint32_t CR2_CWUPF2 = 0x2;   // Clear Wakeup Pin flag for PA2
    static constexpr uint32_t CR2_CWUPF3 = 0x4;   // Clear Wakeup Pin flag for PC1
    static constexpr uint32_t CR2_CWUPF4 = 0x8;   // Clear Wakeup Pin flag for PC13
    static constexpr uint32_t CR2_CWUPF5 = 0x10;  // Clear Wakeup Pin flag for PI8
    static constexpr uint32_t CR2_CWUPF6 = 0x20;  // Clear Wakeup Pin flag for PI11
    static constexpr uint32_t CR2_WUPP1 = 0x100;  // Wakeup pin polarity bit for PA0
    static constexpr uint32_t CR2_WUPP2 = 0x200;  // Wakeup pin polarity bit for PA2
    static constexpr uint32_t CR2_WUPP3 = 0x400;  // Wakeup pin polarity bit for PC1
    static constexpr uint32_t CR2_WUPP4 = 0x800;  // Wakeup pin polarity bit for PC13
    static constexpr uint32_t CR2_WUPP5 = 0x1000; // Wakeup pin polarity bit for PI8
    static constexpr uint32_t CR2_WUPP6 = 0x2000; // Wakeup pin polarity bit for PI11

    static constexpr uint32_t CSR2_RESET_VALUE = 0x0;
    static constexpr uint32_t CSR2_WUPF1 = 0x1;    // Wakeup Pin flag for PA0
    static constexpr uint32_t CSR2_WUPF2 = 0x2;    // Wakeup Pin flag for PA2
    static constexpr uint32_t CSR2_WUPF3 = 0x4;    // Wakeup Pin flag for PC1
    static constexpr uint32_t CSR2_WUPF4 = 0x8;    // Wakeup Pin flag for PC13
    static constexpr uint32_t CSR2_WUPF5 = 0x10;   // Wakeup Pin flag for PI8
    static constexpr uint32_t CSR2_WUPF6 = 0x20;   // Wakeup Pin flag for PI11
    static constexpr uint32_t CSR2_EWUP1 = 0x100;  // Enable Wakeup pin for PA0
    static constexpr uint32_t CSR2_EWUP2 = 0x200;  // Enable Wakeup pin for PA2
    static constexpr uint32_t CSR2_EWUP3 = 0x400;  // Enable Wakeup pin for PC1
    static constexpr uint32_t CSR2_EWUP4 = 0x800;  // Enable Wakeup pin for PC13
    static constexpr uint32_t CSR2_EWUP5 = 0x1000; // Enable Wakeup pin for PI8
    static constexpr uint32_t CSR2_EWUP6 = 0x2000; // Enable Wakeup pin for PI11
};


template<>
struct peripheral_t<STM32F722, PWR>
{
    typedef stm32f722_pwr_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, PWR>
{
    typedef stm32f722_pwr_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, PWR>
{
    typedef stm32f722_pwr_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, PWR>
{
    typedef stm32f722_pwr_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, PWR>
{
    typedef stm32f722_pwr_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, PWR>
{
    typedef stm32f745_pwr_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, PWR>
{
    typedef stm32f745_pwr_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, PWR>
{
    typedef stm32f745_pwr_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, PWR>
{
    typedef stm32f745_pwr_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, PWR>
{
    typedef stm32f745_pwr_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, PWR>
{
    typedef stm32f745_pwr_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, PWR>
{
    typedef stm32f745_pwr_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, PWR>
{
    typedef stm32f745_pwr_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, PWR>
{
    typedef stm32f745_pwr_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, PWR>
{
    typedef stm32f745_pwr_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, PWR>
{
    typedef stm32f745_pwr_t T;
    static T& V;
};

using pwr_t = peripheral_t<mcu_svd, PWR>;

