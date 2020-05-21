#pragma once

////
//
//      STM32F4 PWR peripherals
//
////

////
//
//      Power control
//
////

struct stm32f401_pwr_t
{
    volatile uint32_t CR;  // [read-write] power control register
    volatile uint32_t CSR; // power control/status register

    static constexpr uint32_t CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CR_VOS =            // Regulator voltage scaling output selection
        bit_field_t<14, 0x3>::value<X>();
    static constexpr uint32_t CR_ADCDC1 = 0x2000; // ADCDC1
    static constexpr uint32_t CR_FPDS = 0x200;    // Flash power down in Stop mode
    static constexpr uint32_t CR_DBP = 0x100;     // Disable backup domain write protection
    template<uint32_t X>
    static constexpr uint32_t CR_PLS =            // PVD level selection
        bit_field_t<5, 0x7>::value<X>();
    static constexpr uint32_t CR_PVDE = 0x10;     // Power voltage detector enable
    static constexpr uint32_t CR_CSBF = 0x8;      // Clear standby flag
    static constexpr uint32_t CR_CWUF = 0x4;      // Clear wakeup flag
    static constexpr uint32_t CR_PDDS = 0x2;      // Power down deepsleep
    static constexpr uint32_t CR_LPDS = 0x1;      // Low-power deep sleep

    static constexpr uint32_t CSR_RESET_VALUE = 0x0;
    static constexpr uint32_t CSR_WUF = 0x1;       // Wakeup flag
    static constexpr uint32_t CSR_SBF = 0x2;       // Standby flag
    static constexpr uint32_t CSR_PVDO = 0x4;      // PVD output
    static constexpr uint32_t CSR_BRR = 0x8;       // Backup regulator ready
    static constexpr uint32_t CSR_EWUP = 0x100;    // Enable WKUP pin
    static constexpr uint32_t CSR_BRE = 0x200;     // Backup regulator enable
    static constexpr uint32_t CSR_VOSRDY = 0x4000; // Regulator voltage scaling output selection ready bit
};


////
//
//      Power control
//
////

struct stm32f405_pwr_t
{
    volatile uint32_t CR;  // [read-write] power control register
    volatile uint32_t CSR; // power control/status register

    static constexpr uint32_t CR_RESET_VALUE = 0x0;
    static constexpr uint32_t CR_FPDS = 0x200; // Flash power down in Stop mode
    static constexpr uint32_t CR_DBP = 0x100;  // Disable backup domain write protection
    template<uint32_t X>
    static constexpr uint32_t CR_PLS =         // PVD level selection
        bit_field_t<5, 0x7>::value<X>();
    static constexpr uint32_t CR_PVDE = 0x10;  // Power voltage detector enable
    static constexpr uint32_t CR_CSBF = 0x8;   // Clear standby flag
    static constexpr uint32_t CR_CWUF = 0x4;   // Clear wakeup flag
    static constexpr uint32_t CR_PDDS = 0x2;   // Power down deepsleep
    static constexpr uint32_t CR_LPDS = 0x1;   // Low-power deep sleep

    static constexpr uint32_t CSR_RESET_VALUE = 0x0;
    static constexpr uint32_t CSR_WUF = 0x1;       // Wakeup flag
    static constexpr uint32_t CSR_SBF = 0x2;       // Standby flag
    static constexpr uint32_t CSR_PVDO = 0x4;      // PVD output
    static constexpr uint32_t CSR_BRR = 0x8;       // Backup regulator ready
    static constexpr uint32_t CSR_EWUP = 0x100;    // Enable WKUP pin
    static constexpr uint32_t CSR_BRE = 0x200;     // Backup regulator enable
    static constexpr uint32_t CSR_VOSRDY = 0x4000; // Regulator voltage scaling output selection ready bit
};


////
//
//      Power control
//
////

struct stm32f410_pwr_t
{
    volatile uint32_t CR;  // [read-write] power control register
    volatile uint32_t CSR; // power control/status register

    static constexpr uint32_t CR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CR_VOS =            // Regulator voltage scaling output selection
        bit_field_t<14, 0x3>::value<X>();
    static constexpr uint32_t CR_ADCDC1 = 0x2000; // ADCDC1
    static constexpr uint32_t CR_FPDS = 0x200;    // Flash power down in Stop mode
    static constexpr uint32_t CR_DBP = 0x100;     // Disable backup domain write protection
    template<uint32_t X>
    static constexpr uint32_t CR_PLS =            // PVD level selection
        bit_field_t<5, 0x7>::value<X>();
    static constexpr uint32_t CR_PVDE = 0x10;     // Power voltage detector enable
    static constexpr uint32_t CR_CSBF = 0x8;      // Clear standby flag
    static constexpr uint32_t CR_CWUF = 0x4;      // Clear wakeup flag
    static constexpr uint32_t CR_PDDS = 0x2;      // Power down deepsleep
    static constexpr uint32_t CR_LPDS = 0x1;      // Low-power deep sleep

    static constexpr uint32_t CSR_RESET_VALUE = 0x0;
    static constexpr uint32_t CSR_WUF = 0x1;       // Wakeup flag
    static constexpr uint32_t CSR_SBF = 0x2;       // Standby flag
    static constexpr uint32_t CSR_PVDO = 0x4;      // PVD output
    static constexpr uint32_t CSR_BRR = 0x8;       // Backup regulator ready
    static constexpr uint32_t CSR_EWUP3 = 0x40;    // Enable WKUP3 pin
    static constexpr uint32_t CSR_EWUP2 = 0x80;    // Enable WKUP2 pin
    static constexpr uint32_t CSR_EWUP1 = 0x100;   // Enable WKUP1 pin
    static constexpr uint32_t CSR_BRE = 0x200;     // Backup regulator enable
    static constexpr uint32_t CSR_VOSRDY = 0x4000; // Regulator voltage scaling output selection ready bit
};


////
//
//      Power control
//
////

struct stm32f427_pwr_t
{
    volatile uint32_t CR;  // [read-write] power control register
    volatile uint32_t CSR; // power control/status register

    static constexpr uint32_t CR_RESET_VALUE = 0xc000;
    static constexpr uint32_t CR_LPDS = 0x1;       // Low-power deep sleep
    static constexpr uint32_t CR_PDDS = 0x2;       // Power down deepsleep
    static constexpr uint32_t CR_CWUF = 0x4;       // Clear wakeup flag
    static constexpr uint32_t CR_CSBF = 0x8;       // Clear standby flag
    static constexpr uint32_t CR_PVDE = 0x10;      // Power voltage detector enable
    template<uint32_t X>
    static constexpr uint32_t CR_PLS =             // PVD level selection
        bit_field_t<5, 0x7>::value<X>();
    static constexpr uint32_t CR_DBP = 0x100;      // Disable backup domain write protection
    static constexpr uint32_t CR_FPDS = 0x200;     // Flash power down in Stop mode
    static constexpr uint32_t CR_LPLVDS = 0x400;   // Low-Power Regulator Low Voltage in deepsleep
    static constexpr uint32_t CR_MRLVDS = 0x800;   // Main regulator low voltage in deepsleep mode
    static constexpr uint32_t CR_ADCDC1 = 0x2000;  // Main regulator low voltage in deepsleep mode
    template<uint32_t X>
    static constexpr uint32_t CR_VOS =             // Regulator voltage scaling output selection
        bit_field_t<14, 0x3>::value<X>();
    static constexpr uint32_t CR_ODEN = 0x10000;   // Over-drive enable
    static constexpr uint32_t CR_ODSWEN = 0x20000; // Over-drive switching enabled
    template<uint32_t X>
    static constexpr uint32_t CR_UDEN =            // Under-drive enable in stop mode
        bit_field_t<18, 0x3>::value<X>();

    static constexpr uint32_t CSR_RESET_VALUE = 0x0;
    static constexpr uint32_t CSR_WUF = 0x1;         // Wakeup flag
    static constexpr uint32_t CSR_SBF = 0x2;         // Standby flag
    static constexpr uint32_t CSR_PVDO = 0x4;        // PVD output
    static constexpr uint32_t CSR_BRR = 0x8;         // Backup regulator ready
    static constexpr uint32_t CSR_EWUP = 0x100;      // Enable WKUP pin
    static constexpr uint32_t CSR_BRE = 0x200;       // Backup regulator enable
    static constexpr uint32_t CSR_VOSRDY = 0x4000;   // Regulator voltage scaling output selection ready bit
    static constexpr uint32_t CSR_ODRDY = 0x10000;   // Over-drive mode ready
    static constexpr uint32_t CSR_ODSWRDY = 0x20000; // Over-drive mode switching ready
    template<uint32_t X>
    static constexpr uint32_t CSR_UDRDY =            // Under-drive ready flag
        bit_field_t<18, 0x3>::value<X>();
};


////
//
//      Power control
//
////

struct stm32f429_pwr_t
{
    volatile uint32_t CR;  // [read-write] power control register
    volatile uint32_t CSR; // power control/status register

    static constexpr uint32_t CR_RESET_VALUE = 0xc000;
    static constexpr uint32_t CR_LPDS = 0x1;       // Low-power deep sleep
    static constexpr uint32_t CR_PDDS = 0x2;       // Power down deepsleep
    static constexpr uint32_t CR_CWUF = 0x4;       // Clear wakeup flag
    static constexpr uint32_t CR_CSBF = 0x8;       // Clear standby flag
    static constexpr uint32_t CR_PVDE = 0x10;      // Power voltage detector enable
    template<uint32_t X>
    static constexpr uint32_t CR_PLS =             // PVD level selection
        bit_field_t<5, 0x7>::value<X>();
    static constexpr uint32_t CR_DBP = 0x100;      // Disable backup domain write protection
    static constexpr uint32_t CR_FPDS = 0x200;     // Flash power down in Stop mode
    static constexpr uint32_t CR_LPLVDS = 0x400;   // Low-Power Regulator Low Voltage in deepsleep
    static constexpr uint32_t CR_MRLVDS = 0x800;   // Main regulator low voltage in deepsleep mode
    template<uint32_t X>
    static constexpr uint32_t CR_VOS =             // Regulator voltage scaling output selection
        bit_field_t<14, 0x3>::value<X>();
    static constexpr uint32_t CR_ODEN = 0x10000;   // Over-drive enable
    static constexpr uint32_t CR_ODSWEN = 0x20000; // Over-drive switching enabled
    template<uint32_t X>
    static constexpr uint32_t CR_UDEN =            // Under-drive enable in stop mode
        bit_field_t<18, 0x3>::value<X>();

    static constexpr uint32_t CSR_RESET_VALUE = 0x0;
    static constexpr uint32_t CSR_WUF = 0x1;         // Wakeup flag
    static constexpr uint32_t CSR_SBF = 0x2;         // Standby flag
    static constexpr uint32_t CSR_PVDO = 0x4;        // PVD output
    static constexpr uint32_t CSR_BRR = 0x8;         // Backup regulator ready
    static constexpr uint32_t CSR_EWUP = 0x100;      // Enable WKUP pin
    static constexpr uint32_t CSR_BRE = 0x200;       // Backup regulator enable
    static constexpr uint32_t CSR_VOSRDY = 0x4000;   // Regulator voltage scaling output selection ready bit
    static constexpr uint32_t CSR_ODRDY = 0x10000;   // Over-drive mode ready
    static constexpr uint32_t CSR_ODSWRDY = 0x20000; // Over-drive mode switching ready
    template<uint32_t X>
    static constexpr uint32_t CSR_UDRDY =            // Under-drive ready flag
        bit_field_t<18, 0x3>::value<X>();
};


////
//
//      Power control
//
////

struct stm32f446_pwr_t
{
    volatile uint32_t CR;  // [read-write] power control register
    volatile uint32_t CSR; // power control/status register

    static constexpr uint32_t CR_RESET_VALUE = 0xc000;
    static constexpr uint32_t CR_LPDS = 0x1;       // Low-power deep sleep
    static constexpr uint32_t CR_PDDS = 0x2;       // Power down deepsleep
    static constexpr uint32_t CR_CWUF = 0x4;       // Clear wakeup flag
    static constexpr uint32_t CR_CSBF = 0x8;       // Clear standby flag
    static constexpr uint32_t CR_PVDE = 0x10;      // Power voltage detector enable
    template<uint32_t X>
    static constexpr uint32_t CR_PLS =             // PVD level selection
        bit_field_t<5, 0x7>::value<X>();
    static constexpr uint32_t CR_DBP = 0x100;      // Disable backup domain write protection
    static constexpr uint32_t CR_FPDS = 0x200;     // Flash power down in Stop mode
    static constexpr uint32_t CR_LPLVDS = 0x400;   // Low-Power Regulator Low Voltage in deepsleep
    static constexpr uint32_t CR_MRLVDS = 0x800;   // Main regulator low voltage in deepsleep mode
    static constexpr uint32_t CR_ADCDC1 = 0x2000;  // ADCDC1
    template<uint32_t X>
    static constexpr uint32_t CR_VOS =             // Regulator voltage scaling output selection
        bit_field_t<14, 0x3>::value<X>();
    static constexpr uint32_t CR_ODEN = 0x10000;   // Over-drive enable
    static constexpr uint32_t CR_ODSWEN = 0x20000; // Over-drive switching enabled
    template<uint32_t X>
    static constexpr uint32_t CR_UDEN =            // Under-drive enable in stop mode
        bit_field_t<18, 0x3>::value<X>();
    static constexpr uint32_t CR_FMSSR = 0x100000; // Flash Memory Stop while System Run
    static constexpr uint32_t CR_FISSR = 0x200000; // Flash Interface Stop while System Run

    static constexpr uint32_t CSR_RESET_VALUE = 0x0;
    static constexpr uint32_t CSR_WUF = 0x1;         // Wakeup flag
    static constexpr uint32_t CSR_SBF = 0x2;         // Standby flag
    static constexpr uint32_t CSR_PVDO = 0x4;        // PVD output
    static constexpr uint32_t CSR_BRR = 0x8;         // Backup regulator ready
    static constexpr uint32_t CSR_EWUP2 = 0x80;      // Enable WKUP2 pin
    static constexpr uint32_t CSR_EWUP = 0x100;      // Enable WKUP pin
    static constexpr uint32_t CSR_BRE = 0x200;       // Backup regulator enable
    static constexpr uint32_t CSR_VOSRDY = 0x4000;   // Regulator voltage scaling output selection ready bit
    static constexpr uint32_t CSR_ODRDY = 0x10000;   // Over-drive mode ready
    static constexpr uint32_t CSR_ODSWRDY = 0x20000; // Over-drive mode switching ready
    template<uint32_t X>
    static constexpr uint32_t CSR_UDRDY =            // Under-drive ready flag
        bit_field_t<18, 0x3>::value<X>();
};


template<>
struct peripheral_t<STM32F401, PWR>
{
    typedef stm32f401_pwr_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F411, PWR>
{
    typedef stm32f401_pwr_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, PWR>
{
    typedef stm32f401_pwr_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, PWR>
{
    typedef stm32f401_pwr_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, PWR>
{
    typedef stm32f405_pwr_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, PWR>
{
    typedef stm32f405_pwr_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F410, PWR>
{
    typedef stm32f410_pwr_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, PWR>
{
    typedef stm32f427_pwr_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, PWR>
{
    typedef stm32f429_pwr_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, PWR>
{
    typedef stm32f429_pwr_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, PWR>
{
    typedef stm32f446_pwr_t T;
    static T& V;
};

using pwr_t = peripheral_t<mcu_svd, PWR>;

