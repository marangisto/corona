#pragma once

////
//
//      STM32F7 SYSCFG peripherals
//
////

////
//
//      System configuration controller
//
////

struct stm32f722_syscfg_t
{
    volatile uint32_t MEMRMP;  // [read-write] memory remap register
    volatile uint32_t PMC;     // [read-write] peripheral mode configuration register
    volatile uint32_t EXTICR1; // [read-write] external interrupt configuration register 1
    volatile uint32_t EXTICR2; // [read-write] external interrupt configuration register 2
    volatile uint32_t EXTICR3; // [read-write] external interrupt configuration register 3
    volatile uint32_t EXTICR4; // [read-write] external interrupt configuration register 4
    reserved_t<0x2> _0x20;
    volatile uint32_t CMPCR;   // [read-only] Compensation cell control register

    static constexpr uint32_t MEMRMP_RESET_VALUE = 0x0;
    static constexpr uint32_t MEMRMP_MEM_BOOT = 0x1; // Memory boot mapping
    template<uint32_t X>
    static constexpr uint32_t MEMRMP_SWP_FMC =       // FMC memory mapping swap
        bit_field_t<10, 0x3>::value<X>();

    static constexpr uint32_t PMC_RESET_VALUE = 0x0;
    static constexpr uint32_t PMC_PB7_FMP = 0x20; // PB7_FMP Fast Mode + Enable
    static constexpr uint32_t PMC_PB8_FMP = 0x40; // PB8_FMP Fast Mode + Enable
    static constexpr uint32_t PMC_PB9_FMP = 0x80; // Fast Mode + Enable
    template<uint32_t X>
    static constexpr uint32_t PMC_ADCDC2 =        // ADC3DC2
        bit_field_t<16, 0x7>::value<X>();
    static constexpr uint32_t PMC_PB6_FMP = 0x10; // PB6_FMP Fast Mode
    static constexpr uint32_t PMC_I2C3_FMP = 0x4; // I2C3_FMP I2C3 Fast Mode + Enable
    static constexpr uint32_t PMC_I2C2_FMP = 0x2; // I2C2_FMP I2C2 Fast Mode + Enable
    static constexpr uint32_t PMC_I2C1_FMP = 0x1; // I2C1_FMP I2C1 Fast Mode + Enable

    static constexpr uint32_t EXTICR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EXTICR1_EXTI3 =   // EXTI x configuration (x = 0 to 3)
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR1_EXTI2 =   // EXTI x configuration (x = 0 to 3)
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR1_EXTI1 =   // EXTI x configuration (x = 0 to 3)
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR1_EXTI0 =   // EXTI x configuration (x = 0 to 3)
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t EXTICR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EXTICR2_EXTI7 =   // EXTI x configuration (x = 4 to 7)
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR2_EXTI6 =   // EXTI x configuration (x = 4 to 7)
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR2_EXTI5 =   // EXTI x configuration (x = 4 to 7)
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR2_EXTI4 =   // EXTI x configuration (x = 4 to 7)
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t EXTICR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EXTICR3_EXTI11 =   // EXTI x configuration (x = 8 to 11)
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR3_EXTI10 =   // EXTI10
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR3_EXTI9 =    // EXTI x configuration (x = 8 to 11)
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR3_EXTI8 =    // EXTI x configuration (x = 8 to 11)
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t EXTICR4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EXTICR4_EXTI15 =   // EXTI x configuration (x = 12 to 15)
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR4_EXTI14 =   // EXTI x configuration (x = 12 to 15)
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR4_EXTI13 =   // EXTI x configuration (x = 12 to 15)
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR4_EXTI12 =   // EXTI x configuration (x = 12 to 15)
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t CMPCR_RESET_VALUE = 0x0;
    static constexpr uint32_t CMPCR_READY = 0x100; // READY
    static constexpr uint32_t CMPCR_CMP_PD = 0x1;  // Compensation cell power-down
};


////
//
//      System configuration controller
//
////

struct stm32f745_syscfg_t
{
    volatile uint32_t MEMRM;   // [read-write] memory remap register
    volatile uint32_t PMC;     // [read-write] peripheral mode configuration register
    volatile uint32_t EXTICR1; // [read-write] external interrupt configuration register 1
    volatile uint32_t EXTICR2; // [read-write] external interrupt configuration register 2
    volatile uint32_t EXTICR3; // [read-write] external interrupt configuration register 3
    volatile uint32_t EXTICR4; // [read-write] external interrupt configuration register 4
    reserved_t<0x2> _0x20;
    volatile uint32_t CMPCR;   // [read-only] Compensation cell control register

    static constexpr uint32_t MEMRM_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t MEMRM_MEM_MODE =       // Memory mapping selection
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t MEMRM_FB_MODE = 0x100; // Flash bank mode selection
    template<uint32_t X>
    static constexpr uint32_t MEMRM_SWP_FMC =        // FMC memory mapping swap
        bit_field_t<10, 0x3>::value<X>();

    static constexpr uint32_t PMC_RESET_VALUE = 0x0;
    static constexpr uint32_t PMC_MII_RMII_SEL = 0x800000; // Ethernet PHY interface selection
    static constexpr uint32_t PMC_ADC1DC2 = 0x10000;       // ADC1DC2
    static constexpr uint32_t PMC_ADC2DC2 = 0x20000;       // ADC2DC2
    static constexpr uint32_t PMC_ADC3DC2 = 0x40000;       // ADC3DC2

    static constexpr uint32_t EXTICR1_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EXTICR1_EXTI3 =   // EXTI x configuration (x = 0 to 3)
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR1_EXTI2 =   // EXTI x configuration (x = 0 to 3)
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR1_EXTI1 =   // EXTI x configuration (x = 0 to 3)
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR1_EXTI0 =   // EXTI x configuration (x = 0 to 3)
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t EXTICR2_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EXTICR2_EXTI7 =   // EXTI x configuration (x = 4 to 7)
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR2_EXTI6 =   // EXTI x configuration (x = 4 to 7)
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR2_EXTI5 =   // EXTI x configuration (x = 4 to 7)
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR2_EXTI4 =   // EXTI x configuration (x = 4 to 7)
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t EXTICR3_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EXTICR3_EXTI11 =   // EXTI x configuration (x = 8 to 11)
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR3_EXTI10 =   // EXTI10
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR3_EXTI9 =    // EXTI x configuration (x = 8 to 11)
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR3_EXTI8 =    // EXTI x configuration (x = 8 to 11)
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t EXTICR4_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EXTICR4_EXTI15 =   // EXTI x configuration (x = 12 to 15)
        bit_field_t<12, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR4_EXTI14 =   // EXTI x configuration (x = 12 to 15)
        bit_field_t<8, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR4_EXTI13 =   // EXTI x configuration (x = 12 to 15)
        bit_field_t<4, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EXTICR4_EXTI12 =   // EXTI x configuration (x = 12 to 15)
        bit_field_t<0, 0xf>::value<X>();

    static constexpr uint32_t CMPCR_RESET_VALUE = 0x0;
    static constexpr uint32_t CMPCR_READY = 0x100; // READY
    static constexpr uint32_t CMPCR_CMP_PD = 0x1;  // Compensation cell power-down
};


template<>
struct peripheral_t<STM32F722, SYSCFG>
{
    typedef stm32f722_syscfg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, SYSCFG>
{
    typedef stm32f722_syscfg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, SYSCFG>
{
    typedef stm32f722_syscfg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, SYSCFG>
{
    typedef stm32f722_syscfg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, SYSCFG>
{
    typedef stm32f722_syscfg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, SYSCFG>
{
    typedef stm32f745_syscfg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, SYSCFG>
{
    typedef stm32f745_syscfg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, SYSCFG>
{
    typedef stm32f745_syscfg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, SYSCFG>
{
    typedef stm32f745_syscfg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, SYSCFG>
{
    typedef stm32f745_syscfg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, SYSCFG>
{
    typedef stm32f745_syscfg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, SYSCFG>
{
    typedef stm32f745_syscfg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, SYSCFG>
{
    typedef stm32f745_syscfg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, SYSCFG>
{
    typedef stm32f745_syscfg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, SYSCFG>
{
    typedef stm32f745_syscfg_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, SYSCFG>
{
    typedef stm32f745_syscfg_t T;
    static T& V;
};

using syscfg_t = peripheral_t<mcu_svd, SYSCFG>;

