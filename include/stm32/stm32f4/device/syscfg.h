#pragma once

////
//
//      STM32F4 SYSCFG peripherals
//
///

// SYSCFG: System configuration controller

struct stm32f401_syscfg_t
{
    volatile uint32_t MEMRM; // memory remap register
    volatile uint32_t PMC; // peripheral mode configuration register
    volatile uint32_t EXTICR1; // external interrupt configuration register 1
    volatile uint32_t EXTICR2; // external interrupt configuration register 2
    volatile uint32_t EXTICR3; // external interrupt configuration register 3
    volatile uint32_t EXTICR4; // external interrupt configuration register 4
    reserved_t<0x2> _0x18;
    volatile uint32_t CMPCR; // Compensation cell control register

    static constexpr uint32_t MEMRM_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> MEMRM_MEM_MODE; // MEM_MODE

    static constexpr uint32_t PMC_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PMC_ADC1DC2 = 0x10000; // ADC1DC2

    static constexpr uint32_t EXTICR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<12, 0xf> EXTICR1_EXTI3; // EXTI x configuration (x = 0 to 3)
    typedef bit_field_t<8, 0xf> EXTICR1_EXTI2; // EXTI x configuration (x = 0 to 3)
    typedef bit_field_t<4, 0xf> EXTICR1_EXTI1; // EXTI x configuration (x = 0 to 3)
    typedef bit_field_t<0, 0xf> EXTICR1_EXTI0; // EXTI x configuration (x = 0 to 3)

    static constexpr uint32_t EXTICR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<12, 0xf> EXTICR2_EXTI7; // EXTI x configuration (x = 4 to 7)
    typedef bit_field_t<8, 0xf> EXTICR2_EXTI6; // EXTI x configuration (x = 4 to 7)
    typedef bit_field_t<4, 0xf> EXTICR2_EXTI5; // EXTI x configuration (x = 4 to 7)
    typedef bit_field_t<0, 0xf> EXTICR2_EXTI4; // EXTI x configuration (x = 4 to 7)

    static constexpr uint32_t EXTICR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<12, 0xf> EXTICR3_EXTI11; // EXTI x configuration (x = 8 to 11)
    typedef bit_field_t<8, 0xf> EXTICR3_EXTI10; // EXTI10
    typedef bit_field_t<4, 0xf> EXTICR3_EXTI9; // EXTI x configuration (x = 8 to 11)
    typedef bit_field_t<0, 0xf> EXTICR3_EXTI8; // EXTI x configuration (x = 8 to 11)

    static constexpr uint32_t EXTICR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<12, 0xf> EXTICR4_EXTI15; // EXTI x configuration (x = 12 to 15)
    typedef bit_field_t<8, 0xf> EXTICR4_EXTI14; // EXTI x configuration (x = 12 to 15)
    typedef bit_field_t<4, 0xf> EXTICR4_EXTI13; // EXTI x configuration (x = 12 to 15)
    typedef bit_field_t<0, 0xf> EXTICR4_EXTI12; // EXTI x configuration (x = 12 to 15)


    static constexpr uint32_t CMPCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CMPCR_READY = 0x100; // READY
    static constexpr uint32_t CMPCR_CMP_PD = 0x1; // Compensation cell power-down
};

// SYSCFG: System configuration controller

struct stm32f405_syscfg_t
{
    volatile uint32_t MEMRM; // memory remap register
    volatile uint32_t PMC; // peripheral mode configuration register
    volatile uint32_t EXTICR1; // external interrupt configuration register 1
    volatile uint32_t EXTICR2; // external interrupt configuration register 2
    volatile uint32_t EXTICR3; // external interrupt configuration register 3
    volatile uint32_t EXTICR4; // external interrupt configuration register 4
    reserved_t<0x2> _0x18;
    volatile uint32_t CMPCR; // Compensation cell control register

    static constexpr uint32_t MEMRM_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> MEMRM_MEM_MODE; // MEM_MODE

    static constexpr uint32_t PMC_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PMC_MII_RMII_SEL = 0x800000; // Ethernet PHY interface selection

    static constexpr uint32_t EXTICR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<12, 0xf> EXTICR1_EXTI3; // EXTI x configuration (x = 0 to 3)
    typedef bit_field_t<8, 0xf> EXTICR1_EXTI2; // EXTI x configuration (x = 0 to 3)
    typedef bit_field_t<4, 0xf> EXTICR1_EXTI1; // EXTI x configuration (x = 0 to 3)
    typedef bit_field_t<0, 0xf> EXTICR1_EXTI0; // EXTI x configuration (x = 0 to 3)

    static constexpr uint32_t EXTICR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<12, 0xf> EXTICR2_EXTI7; // EXTI x configuration (x = 4 to 7)
    typedef bit_field_t<8, 0xf> EXTICR2_EXTI6; // EXTI x configuration (x = 4 to 7)
    typedef bit_field_t<4, 0xf> EXTICR2_EXTI5; // EXTI x configuration (x = 4 to 7)
    typedef bit_field_t<0, 0xf> EXTICR2_EXTI4; // EXTI x configuration (x = 4 to 7)

    static constexpr uint32_t EXTICR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<12, 0xf> EXTICR3_EXTI11; // EXTI x configuration (x = 8 to 11)
    typedef bit_field_t<8, 0xf> EXTICR3_EXTI10; // EXTI10
    typedef bit_field_t<4, 0xf> EXTICR3_EXTI9; // EXTI x configuration (x = 8 to 11)
    typedef bit_field_t<0, 0xf> EXTICR3_EXTI8; // EXTI x configuration (x = 8 to 11)

    static constexpr uint32_t EXTICR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<12, 0xf> EXTICR4_EXTI15; // EXTI x configuration (x = 12 to 15)
    typedef bit_field_t<8, 0xf> EXTICR4_EXTI14; // EXTI x configuration (x = 12 to 15)
    typedef bit_field_t<4, 0xf> EXTICR4_EXTI13; // EXTI x configuration (x = 12 to 15)
    typedef bit_field_t<0, 0xf> EXTICR4_EXTI12; // EXTI x configuration (x = 12 to 15)


    static constexpr uint32_t CMPCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CMPCR_READY = 0x100; // READY
    static constexpr uint32_t CMPCR_CMP_PD = 0x1; // Compensation cell power-down
};

// SYSCFG: System configuration controller

struct stm32f410_syscfg_t
{
    volatile uint32_t MEMRM; // memory remap register
    volatile uint32_t PMC; // peripheral mode configuration register
    volatile uint32_t EXTICR1; // external interrupt configuration register 1
    volatile uint32_t EXTICR2; // external interrupt configuration register 2
    volatile uint32_t EXTICR3; // external interrupt configuration register 3
    volatile uint32_t EXTICR4; // external interrupt configuration register 4
    reserved_t<0x2> _0x18;
    volatile uint32_t CMPCR; // Compensation cell control register
    reserved_t<0x2> _0x24;
    volatile uint32_t CFGR; // Configuration register

    static constexpr uint32_t MEMRM_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> MEMRM_MEM_MODE; // MEM_MODE

    static constexpr uint32_t PMC_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PMC_ADC1DC2 = 0x10000; // ADC1DC2

    static constexpr uint32_t EXTICR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<12, 0xf> EXTICR1_EXTI3; // EXTI x configuration (x = 0 to 3)
    typedef bit_field_t<8, 0xf> EXTICR1_EXTI2; // EXTI x configuration (x = 0 to 3)
    typedef bit_field_t<4, 0xf> EXTICR1_EXTI1; // EXTI x configuration (x = 0 to 3)
    typedef bit_field_t<0, 0xf> EXTICR1_EXTI0; // EXTI x configuration (x = 0 to 3)

    static constexpr uint32_t EXTICR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<12, 0xf> EXTICR2_EXTI7; // EXTI x configuration (x = 4 to 7)
    typedef bit_field_t<8, 0xf> EXTICR2_EXTI6; // EXTI x configuration (x = 4 to 7)
    typedef bit_field_t<4, 0xf> EXTICR2_EXTI5; // EXTI x configuration (x = 4 to 7)
    typedef bit_field_t<0, 0xf> EXTICR2_EXTI4; // EXTI x configuration (x = 4 to 7)

    static constexpr uint32_t EXTICR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<12, 0xf> EXTICR3_EXTI11; // EXTI x configuration (x = 8 to 11)
    typedef bit_field_t<8, 0xf> EXTICR3_EXTI10; // EXTI10
    typedef bit_field_t<4, 0xf> EXTICR3_EXTI9; // EXTI x configuration (x = 8 to 11)
    typedef bit_field_t<0, 0xf> EXTICR3_EXTI8; // EXTI x configuration (x = 8 to 11)

    static constexpr uint32_t EXTICR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<12, 0xf> EXTICR4_EXTI15; // EXTI x configuration (x = 12 to 15)
    typedef bit_field_t<8, 0xf> EXTICR4_EXTI14; // EXTI x configuration (x = 12 to 15)
    typedef bit_field_t<4, 0xf> EXTICR4_EXTI13; // EXTI x configuration (x = 12 to 15)
    typedef bit_field_t<0, 0xf> EXTICR4_EXTI12; // EXTI x configuration (x = 12 to 15)


    static constexpr uint32_t CMPCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CMPCR_READY = 0x100; // READY
    static constexpr uint32_t CMPCR_CMP_PD = 0x1; // Compensation cell power-down


    static constexpr uint32_t CFGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR_FMPI2C1_SCL = 0x1; // FMPI2C1_SCL
    static constexpr uint32_t CFGR_FMPI2C1_SDA = 0x2; // FMPI2C1_SDA
};

// SYSCFG: System configuration controller

struct stm32f412_syscfg_t
{
    volatile uint32_t MEMRM; // memory remap register
    volatile uint32_t PMC; // peripheral mode configuration register
    volatile uint32_t EXTICR1; // external interrupt configuration register 1
    volatile uint32_t EXTICR2; // external interrupt configuration register 2
    volatile uint32_t EXTICR3; // external interrupt configuration register 3
    volatile uint32_t EXTICR4; // external interrupt configuration register 4
    reserved_t<0x2> _0x18;
    volatile uint32_t CMPCR; // Compensation cell control register
    reserved_t<0x2> _0x24;
    volatile uint32_t I2C_BUFOUT; // I2C_BUFOUT

    static constexpr uint32_t MEMRM_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> MEMRM_MEM_MODE; // MEM_MODE

    static constexpr uint32_t PMC_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PMC_ADC1DC2 = 0x10000; // ADC1DC2

    static constexpr uint32_t EXTICR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<12, 0xf> EXTICR1_EXTI3; // EXTI x configuration (x = 0 to 3)
    typedef bit_field_t<8, 0xf> EXTICR1_EXTI2; // EXTI x configuration (x = 0 to 3)
    typedef bit_field_t<4, 0xf> EXTICR1_EXTI1; // EXTI x configuration (x = 0 to 3)
    typedef bit_field_t<0, 0xf> EXTICR1_EXTI0; // EXTI x configuration (x = 0 to 3)

    static constexpr uint32_t EXTICR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<12, 0xf> EXTICR2_EXTI7; // EXTI x configuration (x = 4 to 7)
    typedef bit_field_t<8, 0xf> EXTICR2_EXTI6; // EXTI x configuration (x = 4 to 7)
    typedef bit_field_t<4, 0xf> EXTICR2_EXTI5; // EXTI x configuration (x = 4 to 7)
    typedef bit_field_t<0, 0xf> EXTICR2_EXTI4; // EXTI x configuration (x = 4 to 7)

    static constexpr uint32_t EXTICR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<12, 0xf> EXTICR3_EXTI11; // EXTI x configuration (x = 8 to 11)
    typedef bit_field_t<8, 0xf> EXTICR3_EXTI10; // EXTI10
    typedef bit_field_t<4, 0xf> EXTICR3_EXTI9; // EXTI x configuration (x = 8 to 11)
    typedef bit_field_t<0, 0xf> EXTICR3_EXTI8; // EXTI x configuration (x = 8 to 11)

    static constexpr uint32_t EXTICR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<12, 0xf> EXTICR4_EXTI15; // EXTI x configuration (x = 12 to 15)
    typedef bit_field_t<8, 0xf> EXTICR4_EXTI14; // EXTI x configuration (x = 12 to 15)
    typedef bit_field_t<4, 0xf> EXTICR4_EXTI13; // EXTI x configuration (x = 12 to 15)
    typedef bit_field_t<0, 0xf> EXTICR4_EXTI12; // EXTI x configuration (x = 12 to 15)


    static constexpr uint32_t CMPCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CMPCR_READY = 0x100; // READY
    static constexpr uint32_t CMPCR_CMP_PD = 0x1; // Compensation cell power-down


    static constexpr uint32_t I2C_BUFOUT_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t I2C_BUFOUT_I2C4SCL = 0x1; // I2C4SCL
    static constexpr uint32_t I2C_BUFOUT_I2C4SDA = 0x2; // I2C4SDA
};

// SYSCFG: System configuration controller

struct stm32f427_syscfg_t
{
    volatile uint32_t MEMRM; // memory remap register
    volatile uint32_t PMC; // peripheral mode configuration register
    volatile uint32_t EXTICR1; // external interrupt configuration register 1
    volatile uint32_t EXTICR2; // external interrupt configuration register 2
    volatile uint32_t EXTICR3; // external interrupt configuration register 3
    volatile uint32_t EXTICR4; // external interrupt configuration register 4
    reserved_t<0x2> _0x18;
    volatile uint32_t CMPCR; // Compensation cell control register

    static constexpr uint32_t MEMRM_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> MEMRM_MEM_MODE; // MEM_MODE

    static constexpr uint32_t PMC_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PMC_MII_RMII_SEL = 0x800000; // Ethernet PHY interface selection
    static constexpr uint32_t PMC_ADC1DC2 = 0x10000; // ADC1DC2
    static constexpr uint32_t PMC_ADC2DC2 = 0x20000; // ADC2DC2
    static constexpr uint32_t PMC_ADC3DC2 = 0x40000; // ADC3DC2

    static constexpr uint32_t EXTICR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<12, 0xf> EXTICR1_EXTI3; // EXTI x configuration (x = 0 to 3)
    typedef bit_field_t<8, 0xf> EXTICR1_EXTI2; // EXTI x configuration (x = 0 to 3)
    typedef bit_field_t<4, 0xf> EXTICR1_EXTI1; // EXTI x configuration (x = 0 to 3)
    typedef bit_field_t<0, 0xf> EXTICR1_EXTI0; // EXTI x configuration (x = 0 to 3)

    static constexpr uint32_t EXTICR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<12, 0xf> EXTICR2_EXTI7; // EXTI x configuration (x = 4 to 7)
    typedef bit_field_t<8, 0xf> EXTICR2_EXTI6; // EXTI x configuration (x = 4 to 7)
    typedef bit_field_t<4, 0xf> EXTICR2_EXTI5; // EXTI x configuration (x = 4 to 7)
    typedef bit_field_t<0, 0xf> EXTICR2_EXTI4; // EXTI x configuration (x = 4 to 7)

    static constexpr uint32_t EXTICR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<12, 0xf> EXTICR3_EXTI11; // EXTI x configuration (x = 8 to 11)
    typedef bit_field_t<8, 0xf> EXTICR3_EXTI10; // EXTI10
    typedef bit_field_t<4, 0xf> EXTICR3_EXTI9; // EXTI x configuration (x = 8 to 11)
    typedef bit_field_t<0, 0xf> EXTICR3_EXTI8; // EXTI x configuration (x = 8 to 11)

    static constexpr uint32_t EXTICR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<12, 0xf> EXTICR4_EXTI15; // EXTI x configuration (x = 12 to 15)
    typedef bit_field_t<8, 0xf> EXTICR4_EXTI14; // EXTI x configuration (x = 12 to 15)
    typedef bit_field_t<4, 0xf> EXTICR4_EXTI13; // EXTI x configuration (x = 12 to 15)
    typedef bit_field_t<0, 0xf> EXTICR4_EXTI12; // EXTI x configuration (x = 12 to 15)


    static constexpr uint32_t CMPCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CMPCR_READY = 0x100; // READY
    static constexpr uint32_t CMPCR_CMP_PD = 0x1; // Compensation cell power-down
};

// SYSCFG: System configuration controller

struct stm32f429_syscfg_t
{
    volatile uint32_t MEMRM; // memory remap register
    volatile uint32_t PMC; // peripheral mode configuration register
    volatile uint32_t EXTICR1; // external interrupt configuration register 1
    volatile uint32_t EXTICR2; // external interrupt configuration register 2
    volatile uint32_t EXTICR3; // external interrupt configuration register 3
    volatile uint32_t EXTICR4; // external interrupt configuration register 4
    reserved_t<0x2> _0x18;
    volatile uint32_t CMPCR; // Compensation cell control register

    static constexpr uint32_t MEMRM_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7> MEMRM_MEM_MODE; // Memory mapping selection
    static constexpr uint32_t MEMRM_FB_MODE = 0x100; // Flash bank mode selection
    typedef bit_field_t<10, 0x3> MEMRM_SWP_FMC; // FMC memory mapping swap

    static constexpr uint32_t PMC_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t PMC_MII_RMII_SEL = 0x800000; // Ethernet PHY interface selection
    static constexpr uint32_t PMC_ADC1DC2 = 0x10000; // ADC1DC2
    static constexpr uint32_t PMC_ADC2DC2 = 0x20000; // ADC2DC2
    static constexpr uint32_t PMC_ADC3DC2 = 0x40000; // ADC3DC2

    static constexpr uint32_t EXTICR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<12, 0xf> EXTICR1_EXTI3; // EXTI x configuration (x = 0 to 3)
    typedef bit_field_t<8, 0xf> EXTICR1_EXTI2; // EXTI x configuration (x = 0 to 3)
    typedef bit_field_t<4, 0xf> EXTICR1_EXTI1; // EXTI x configuration (x = 0 to 3)
    typedef bit_field_t<0, 0xf> EXTICR1_EXTI0; // EXTI x configuration (x = 0 to 3)

    static constexpr uint32_t EXTICR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<12, 0xf> EXTICR2_EXTI7; // EXTI x configuration (x = 4 to 7)
    typedef bit_field_t<8, 0xf> EXTICR2_EXTI6; // EXTI x configuration (x = 4 to 7)
    typedef bit_field_t<4, 0xf> EXTICR2_EXTI5; // EXTI x configuration (x = 4 to 7)
    typedef bit_field_t<0, 0xf> EXTICR2_EXTI4; // EXTI x configuration (x = 4 to 7)

    static constexpr uint32_t EXTICR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<12, 0xf> EXTICR3_EXTI11; // EXTI x configuration (x = 8 to 11)
    typedef bit_field_t<8, 0xf> EXTICR3_EXTI10; // EXTI10
    typedef bit_field_t<4, 0xf> EXTICR3_EXTI9; // EXTI x configuration (x = 8 to 11)
    typedef bit_field_t<0, 0xf> EXTICR3_EXTI8; // EXTI x configuration (x = 8 to 11)

    static constexpr uint32_t EXTICR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<12, 0xf> EXTICR4_EXTI15; // EXTI x configuration (x = 12 to 15)
    typedef bit_field_t<8, 0xf> EXTICR4_EXTI14; // EXTI x configuration (x = 12 to 15)
    typedef bit_field_t<4, 0xf> EXTICR4_EXTI13; // EXTI x configuration (x = 12 to 15)
    typedef bit_field_t<0, 0xf> EXTICR4_EXTI12; // EXTI x configuration (x = 12 to 15)


    static constexpr uint32_t CMPCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CMPCR_READY = 0x100; // READY
    static constexpr uint32_t CMPCR_CMP_PD = 0x1; // Compensation cell power-down
};

template<>
struct peripheral_t<STM32F401, SYSCFG>
{
    static constexpr periph_t P = SYSCFG;
    using T = stm32f401_syscfg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F411, SYSCFG>
{
    static constexpr periph_t P = SYSCFG;
    using T = stm32f401_syscfg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, SYSCFG>
{
    static constexpr periph_t P = SYSCFG;
    using T = stm32f405_syscfg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, SYSCFG>
{
    static constexpr periph_t P = SYSCFG;
    using T = stm32f405_syscfg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F410, SYSCFG>
{
    static constexpr periph_t P = SYSCFG;
    using T = stm32f410_syscfg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, SYSCFG>
{
    static constexpr periph_t P = SYSCFG;
    using T = stm32f412_syscfg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, SYSCFG>
{
    static constexpr periph_t P = SYSCFG;
    using T = stm32f412_syscfg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, SYSCFG>
{
    static constexpr periph_t P = SYSCFG;
    using T = stm32f427_syscfg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, SYSCFG>
{
    static constexpr periph_t P = SYSCFG;
    using T = stm32f429_syscfg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, SYSCFG>
{
    static constexpr periph_t P = SYSCFG;
    using T = stm32f429_syscfg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, SYSCFG>
{
    static constexpr periph_t P = SYSCFG;
    using T = stm32f429_syscfg_t;
    static T& V;
};

using syscfg_t = peripheral_t<svd, SYSCFG>;

template<int INST> struct syscfg_traits {};

template<> struct syscfg_traits<0>
{
    using syscfg = syscfg_t;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB2ENR |= RCC::T::APB2ENR_SYSCFGEN;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB2ENR &= ~RCC::T::APB2ENR_SYSCFGEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB2RSTR |= RCC::T::APB2RSTR_SYSCFGRST;
        __asm volatile ("dsb"); // dm00037591 2.1.13
    }
};
