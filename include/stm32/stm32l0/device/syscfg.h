#pragma once

////
//
//      STM32L0 SYSCFG peripherals
//
///

// SYSCFG: System configuration controller and Comparator

struct stm32l052_syscfg_t
{
    volatile uint32_t CFGR1; // SYSCFG configuration register 1
    volatile uint32_t CFGR2; // SYSCFG configuration register 2
    volatile uint32_t EXTICR1; // external interrupt configuration register 1
    volatile uint32_t EXTICR2; // external interrupt configuration register 2
    volatile uint32_t EXTICR3; // external interrupt configuration register 3
    volatile uint32_t EXTICR4; // external interrupt configuration register 4
    volatile uint32_t COMP1_CSR; // Comparator 1 control and status register
    volatile uint32_t COMP2_CSR; // Comparator 2 control and status register
    volatile uint32_t CFGR3; // SYSCFG configuration register 3

    static constexpr uint32_t CFGR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0x3> CFGR1_BOOT_MODE; // Boot mode selected by the boot pins status bits
    typedef bit_field_t<0, 0x3> CFGR1_MEM_MODE; // Memory mapping selection bits

    static constexpr uint32_t CFGR2_RESET_VALUE = 0x1; // Reset value
    static constexpr uint32_t CFGR2_I2C2_FMP = 0x2000; // I2C2 Fm+ drive capability enable bit
    static constexpr uint32_t CFGR2_I2C1_FMP = 0x1000; // I2C1 Fm+ drive capability enable bit
    static constexpr uint32_t CFGR2_I2C_PB9_FMP = 0x800; // Fm+ drive capability on PB9 enable bit
    static constexpr uint32_t CFGR2_I2C_PB8_FMP = 0x400; // Fm+ drive capability on PB8 enable bit
    static constexpr uint32_t CFGR2_I2C_PB7_FMP = 0x200; // Fm+ drive capability on PB7 enable bit
    static constexpr uint32_t CFGR2_I2C_PB6_FMP = 0x100; // Fm+ drive capability on PB6 enable bit
    static constexpr uint32_t CFGR2_FWDISEN = 0x1; // Firewall disable bit

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
    typedef bit_field_t<8, 0xf> EXTICR4_EXTI14; // EXTI14
    typedef bit_field_t<4, 0xf> EXTICR4_EXTI13; // EXTI13
    typedef bit_field_t<0, 0xf> EXTICR4_EXTI12; // EXTI12

    static constexpr uint32_t COMP1_CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t COMP1_CSR_COMP1LOCK = 0x80000000; // COMP1_CSR register lock bit
    static constexpr uint32_t COMP1_CSR_COMP1VALUE = 0x40000000; // Comparator 1 output status bit
    static constexpr uint32_t COMP1_CSR_COMP1POLARITY = 0x8000; // Comparator 1 polarity selection bit
    static constexpr uint32_t COMP1_CSR_COMP1LPTIMIN1 = 0x1000; // Comparator 1 LPTIM input propagation bit
    static constexpr uint32_t COMP1_CSR_COMP1WM = 0x100; // Comparator 1 window mode selection bit
    typedef bit_field_t<4, 0x3> COMP1_CSR_COMP1INNSEL; // Comparator 1 Input Minus connection configuration bit
    static constexpr uint32_t COMP1_CSR_COMP1EN = 0x1; // Comparator 1 enable bit

    static constexpr uint32_t COMP2_CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t COMP2_CSR_COMP2LOCK = 0x80000000; // COMP2_CSR register lock bit
    static constexpr uint32_t COMP2_CSR_COMP2VALUE = 0x40000000; // Comparator 2 output status bit
    static constexpr uint32_t COMP2_CSR_COMP2POLARITY = 0x8000; // Comparator 2 polarity selection bit
    static constexpr uint32_t COMP2_CSR_COMP2LPTIMIN1 = 0x2000; // Comparator 2 LPTIM input 1 propagation bit
    static constexpr uint32_t COMP2_CSR_COMP2LPTIMIN2 = 0x1000; // Comparator 2 LPTIM input 2 propagation bit
    typedef bit_field_t<8, 0x7> COMP2_CSR_COMP2INPSEL; // Comparator 2 Input Plus connection configuration bit
    typedef bit_field_t<4, 0x7> COMP2_CSR_COMP2INNSEL; // Comparator 2 Input Minus connection configuration bit
    static constexpr uint32_t COMP2_CSR_COMP2SPEED = 0x8; // Comparator 2 power mode selection bit
    static constexpr uint32_t COMP2_CSR_COMP2EN = 0x1; // Comparator 2 enable bit

    static constexpr uint32_t CFGR3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR3_REF_LOCK = 0x80000000; // REF_CTRL lock bit
    static constexpr uint32_t CFGR3_VREFINT_RDYF = 0x40000000; // VREFINT ready flag
    static constexpr uint32_t CFGR3_VREFINT_COMP_RDYF = 0x20000000; // VREFINT for comparator ready flag
    static constexpr uint32_t CFGR3_VREFINT_ADC_RDYF = 0x10000000; // VREFINT for ADC ready flag
    static constexpr uint32_t CFGR3_SENSOR_ADC_RDYF = 0x8000000; // Sensor for ADC ready flag
    static constexpr uint32_t CFGR3_REF_RC48MHZ_RDYF = 0x4000000; // VREFINT for 48 MHz RC oscillator ready flag
    static constexpr uint32_t CFGR3_ENREF_RC48MHZ = 0x2000; // VREFINT reference for 48 MHz RC oscillator enable bit
    static constexpr uint32_t CFGR3_ENBUF_VREFINT_COMP = 0x1000; // VREFINT reference for comparator 2 enable bit
    static constexpr uint32_t CFGR3_ENBUF_SENSOR_ADC = 0x200; // Sensor reference for ADC enable bit
    static constexpr uint32_t CFGR3_ENBUF_BGAP_ADC = 0x100; // VREFINT reference for ADC enable bit
    typedef bit_field_t<4, 0x3> CFGR3_SEL_VREF_OUT; // BGAP_ADC connection bit
    static constexpr uint32_t CFGR3_EN_BGAP = 0x1; // Vref Enable bit
};

// SYSCFG: System configuration controller and Comparator

struct stm32l053_syscfg_t
{
    volatile uint32_t CFGR1; // SYSCFG configuration register 1
    volatile uint32_t CFGR2; // SYSCFG configuration register 2
    volatile uint32_t EXTICR1; // external interrupt configuration register 1
    volatile uint32_t EXTICR2; // external interrupt configuration register 2
    volatile uint32_t EXTICR3; // external interrupt configuration register 3
    volatile uint32_t EXTICR4; // external interrupt configuration register 4
    volatile uint32_t COMP1_CSR; // Comparator 1 control and status register
    volatile uint32_t COMP2_CSR; // Comparator 2 control and status register
    volatile uint32_t CFGR3; // SYSCFG configuration register 3

    static constexpr uint32_t CFGR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0x3> CFGR1_BOOT_MODE; // Boot mode selected by the boot pins status bits
    typedef bit_field_t<0, 0x3> CFGR1_MEM_MODE; // Memory mapping selection bits

    static constexpr uint32_t CFGR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR2_I2C2_FMP = 0x2000; // I2C2 Fm+ drive capability enable bit
    static constexpr uint32_t CFGR2_I2C1_FMP = 0x1000; // I2C1 Fm+ drive capability enable bit
    static constexpr uint32_t CFGR2_I2C_PB9_FMP = 0x800; // Fm+ drive capability on PB9 enable bit
    static constexpr uint32_t CFGR2_I2C_PB8_FMP = 0x400; // Fm+ drive capability on PB8 enable bit
    static constexpr uint32_t CFGR2_I2C_PB7_FMP = 0x200; // Fm+ drive capability on PB7 enable bit
    static constexpr uint32_t CFGR2_I2C_PB6_FMP = 0x100; // Fm+ drive capability on PB6 enable bit
    static constexpr uint32_t CFGR2_FWDISEN = 0x1; // Firewall disable bit

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
    typedef bit_field_t<8, 0xf> EXTICR4_EXTI14; // EXTI14
    typedef bit_field_t<4, 0xf> EXTICR4_EXTI13; // EXTI13
    typedef bit_field_t<0, 0xf> EXTICR4_EXTI12; // EXTI12

    static constexpr uint32_t COMP1_CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t COMP1_CSR_COMP1LOCK = 0x80000000; // COMP1_CSR register lock bit
    static constexpr uint32_t COMP1_CSR_COMP1VALUE = 0x40000000; // Comparator 1 output status bit
    static constexpr uint32_t COMP1_CSR_COMP1POLARITY = 0x8000; // Comparator 1 polarity selection bit
    static constexpr uint32_t COMP1_CSR_COMP1LPTIMIN1 = 0x1000; // Comparator 1 LPTIM input propagation bit
    static constexpr uint32_t COMP1_CSR_COMP1WM = 0x100; // Comparator 1 window mode selection bit
    typedef bit_field_t<4, 0x3> COMP1_CSR_COMP1INNSEL; // Comparator 1 Input Minus connection configuration bit
    static constexpr uint32_t COMP1_CSR_COMP1EN = 0x1; // Comparator 1 enable bit

    static constexpr uint32_t COMP2_CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t COMP2_CSR_COMP2LOCK = 0x80000000; // COMP2_CSR register lock bit
    static constexpr uint32_t COMP2_CSR_COMP2VALUE = 0x100000; // Comparator 2 output status bit
    static constexpr uint32_t COMP2_CSR_COMP2POLARITY = 0x8000; // Comparator 2 polarity selection bit
    static constexpr uint32_t COMP2_CSR_COMP2LPTIMIN1 = 0x2000; // Comparator 2 LPTIM input 1 propagation bit
    static constexpr uint32_t COMP2_CSR_COMP2LPTIMIN2 = 0x1000; // Comparator 2 LPTIM input 2 propagation bit
    typedef bit_field_t<8, 0x7> COMP2_CSR_COMP2INPSEL; // Comparator 2 Input Plus connection configuration bit
    typedef bit_field_t<4, 0x7> COMP2_CSR_COMP2INNSEL; // Comparator 2 Input Minus connection configuration bit
    static constexpr uint32_t COMP2_CSR_COMP2SPEED = 0x8; // Comparator 2 power mode selection bit
    static constexpr uint32_t COMP2_CSR_COMP2EN = 0x1; // Comparator 2 enable bit

    static constexpr uint32_t CFGR3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR3_REF_LOCK = 0x80000000; // REF_CTRL lock bit
    static constexpr uint32_t CFGR3_VREFINT_RDYF = 0x40000000; // VREFINT ready flag
    static constexpr uint32_t CFGR3_VREFINT_COMP_RDYF = 0x20000000; // VREFINT for comparator ready flag
    static constexpr uint32_t CFGR3_VREFINT_ADC_RDYF = 0x10000000; // VREFINT for ADC ready flag
    static constexpr uint32_t CFGR3_SENSOR_ADC_RDYF = 0x8000000; // Sensor for ADC ready flag
    static constexpr uint32_t CFGR3_REF_RC48MHZ_RDYF = 0x4000000; // VREFINT for 48 MHz RC oscillator ready flag
    static constexpr uint32_t CFGR3_ENREF_RC48MHZ = 0x2000; // VREFINT reference for 48 MHz RC oscillator enable bit
    static constexpr uint32_t CFGR3_ENBUF_VREFINT_COMP = 0x1000; // VREFINT reference for comparator 2 enable bit
    static constexpr uint32_t CFGR3_ENBUF_SENSOR_ADC = 0x200; // Sensor reference for ADC enable bit
    static constexpr uint32_t CFGR3_ENBUF_BGAP_ADC = 0x100; // VREFINT reference for ADC enable bit
    typedef bit_field_t<4, 0x3> CFGR3_SEL_VREF_OUT; // BGAP_ADC connection bit
    static constexpr uint32_t CFGR3_EN_BGAP = 0x1; // Vref Enable bit
};

// SYSCFG: System configuration controller register

struct stm32l0x0_syscfg_t
{
    volatile uint32_t CFGR1; // SYSCFG configuration register 1
    volatile uint32_t CFGR2; // SYSCFG configuration register 2
    volatile uint32_t EXTICR1; // external interrupt configuration register 1
    volatile uint32_t EXTICR2; // external interrupt configuration register 2
    volatile uint32_t EXTICR3; // external interrupt configuration register 3
    volatile uint32_t EXTICR4; // external interrupt configuration register 4
    reserved_t<0x2> _0x18;
    volatile uint32_t CFGR3; // SYSCFG configuration register 3

    static constexpr uint32_t CFGR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0x3> CFGR1_BOOT_MODE; // Boot mode selected by the boot pins status bits
    typedef bit_field_t<0, 0x3> CFGR1_MEM_MODE; // Memory mapping selection bits

    static constexpr uint32_t CFGR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR2_I2C2_FMP = 0x2000; // I2C2 Fm+ drive capability enable bit
    static constexpr uint32_t CFGR2_I2C1_FMP = 0x1000; // I2C1 Fm+ drive capability enable bit
    static constexpr uint32_t CFGR2_I2C_PB9_FMP = 0x800; // Fm+ drive capability on PB9 enable bit
    static constexpr uint32_t CFGR2_I2C_PB8_FMP = 0x400; // Fm+ drive capability on PB8 enable bit
    static constexpr uint32_t CFGR2_I2C_PB7_FMP = 0x200; // Fm+ drive capability on PB7 enable bit
    static constexpr uint32_t CFGR2_I2C_PB6_FMP = 0x100; // Fm+ drive capability on PB6 enable bit
    typedef bit_field_t<1, 0x7> CFGR2_CAPA; // Configuration of internal VLCD rail connection to optional external capacitor
    static constexpr uint32_t CFGR2_FWDISEN = 0x1; // Firewall disable bit

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
    typedef bit_field_t<8, 0xf> EXTICR4_EXTI14; // EXTI14
    typedef bit_field_t<4, 0xf> EXTICR4_EXTI13; // EXTI13
    typedef bit_field_t<0, 0xf> EXTICR4_EXTI12; // EXTI12


    static constexpr uint32_t CFGR3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR3_REF_LOCK = 0x80000000; // REF_CTRL lock bit
    static constexpr uint32_t CFGR3_VREFINT_RDYF = 0x40000000; // VREFINT ready flag
    static constexpr uint32_t CFGR3_VREFINT_COMP_RDYF = 0x20000000; // VREFINT for comparator ready flag
    static constexpr uint32_t CFGR3_VREFINT_ADC_RDYF = 0x10000000; // VREFINT for ADC ready flag
    static constexpr uint32_t CFGR3_SENSOR_ADC_RDYF = 0x8000000; // Sensor for ADC ready flag
    static constexpr uint32_t CFGR3_REF_RC48MHZ_RDYF = 0x4000000; // VREFINT for 48 MHz RC oscillator ready flag
    static constexpr uint32_t CFGR3_ENREF_RC48MHZ = 0x2000; // VREFINT reference for 48 MHz RC oscillator enable bit
    static constexpr uint32_t CFGR3_ENBUF_VREFINT_COMP = 0x1000; // VREFINT reference for comparator 2 enable bit
    static constexpr uint32_t CFGR3_ENBUF_SENSOR_ADC = 0x200; // Sensor reference for ADC enable bit
    static constexpr uint32_t CFGR3_ENBUF_BGAP_ADC = 0x100; // VREFINT reference for ADC enable bit
    typedef bit_field_t<4, 0x3> CFGR3_SEL_VREF_OUT; // BGAP_ADC connection bit
    static constexpr uint32_t CFGR3_EN_BGAP = 0x1; // Vref Enable bit
};

// SYSCFG: System configuration controller and COMP register

struct stm32l0x1_syscfg_t
{
    volatile uint32_t CFGR1; // SYSCFG configuration register 1
    volatile uint32_t CFGR2; // SYSCFG configuration register 2
    volatile uint32_t EXTICR1; // external interrupt configuration register 1
    volatile uint32_t EXTICR2; // external interrupt configuration register 2
    volatile uint32_t EXTICR3; // external interrupt configuration register 3
    volatile uint32_t EXTICR4; // external interrupt configuration register 4
    volatile uint32_t COMP1_CSR; // Comparator 1 control and status register
    volatile uint32_t COMP2_CSR; // Comparator 2 control and status register
    volatile uint32_t CFGR3; // SYSCFG configuration register 3

    static constexpr uint32_t CFGR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<8, 0x3> CFGR1_BOOT_MODE; // Boot mode selected by the boot pins status bits
    typedef bit_field_t<0, 0x3> CFGR1_MEM_MODE; // Memory mapping selection bits

    static constexpr uint32_t CFGR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR2_I2C2_FMP = 0x2000; // I2C2 Fm+ drive capability enable bit
    static constexpr uint32_t CFGR2_I2C1_FMP = 0x1000; // I2C1 Fm+ drive capability enable bit
    static constexpr uint32_t CFGR2_I2C_PB9_FMP = 0x800; // Fm+ drive capability on PB9 enable bit
    static constexpr uint32_t CFGR2_I2C_PB8_FMP = 0x400; // Fm+ drive capability on PB8 enable bit
    static constexpr uint32_t CFGR2_I2C_PB7_FMP = 0x200; // Fm+ drive capability on PB7 enable bit
    static constexpr uint32_t CFGR2_I2C_PB6_FMP = 0x100; // Fm+ drive capability on PB6 enable bit
    typedef bit_field_t<1, 0x7> CFGR2_CAPA; // Configuration of internal VLCD rail connection to optional external capacitor
    static constexpr uint32_t CFGR2_FWDISEN = 0x1; // Firewall disable bit

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
    typedef bit_field_t<8, 0xf> EXTICR4_EXTI14; // EXTI14
    typedef bit_field_t<4, 0xf> EXTICR4_EXTI13; // EXTI13
    typedef bit_field_t<0, 0xf> EXTICR4_EXTI12; // EXTI12

    static constexpr uint32_t COMP1_CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t COMP1_CSR_COMP1EN = 0x1; // Comparator 1 enable bit
    typedef bit_field_t<4, 0x3> COMP1_CSR_COMP1INNSEL; // Comparator 1 Input Minus connection configuration bit
    static constexpr uint32_t COMP1_CSR_COMP1WM = 0x100; // Comparator 1 window mode selection bit
    static constexpr uint32_t COMP1_CSR_COMP1LPTIMIN1 = 0x1000; // Comparator 1 LPTIM input propagation bit
    static constexpr uint32_t COMP1_CSR_COMP1POLARITY = 0x8000; // Comparator 1 polarity selection bit
    static constexpr uint32_t COMP1_CSR_COMP1VALUE = 0x40000000; // Comparator 1 output status bit
    static constexpr uint32_t COMP1_CSR_COMP1LOCK = 0x80000000; // COMP1_CSR register lock bit

    static constexpr uint32_t COMP2_CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t COMP2_CSR_COMP2EN = 0x1; // Comparator 2 enable bit
    static constexpr uint32_t COMP2_CSR_COMP2SPEED = 0x8; // Comparator 2 power mode selection bit
    typedef bit_field_t<4, 0x7> COMP2_CSR_COMP2INNSEL; // Comparator 2 Input Minus connection configuration bit
    typedef bit_field_t<8, 0x7> COMP2_CSR_COMP2INPSEL; // Comparator 2 Input Plus connection configuration bit
    static constexpr uint32_t COMP2_CSR_COMP2LPTIMIN2 = 0x1000; // Comparator 2 LPTIM input 2 propagation bit
    static constexpr uint32_t COMP2_CSR_COMP2LPTIMIN1 = 0x2000; // Comparator 2 LPTIM input 1 propagation bit
    static constexpr uint32_t COMP2_CSR_COMP2POLARITY = 0x8000; // Comparator 2 polarity selection bit
    static constexpr uint32_t COMP2_CSR_COMP2VALUE = 0x40000000; // Comparator 2 output status bit
    static constexpr uint32_t COMP2_CSR_COMP2LOCK = 0x80000000; // COMP2_CSR register lock bit

    static constexpr uint32_t CFGR3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR3_REF_LOCK = 0x80000000; // REF_CTRL lock bit
    static constexpr uint32_t CFGR3_VREFINT_RDYF = 0x40000000; // VREFINT ready flag
    static constexpr uint32_t CFGR3_VREFINT_COMP_RDYF = 0x20000000; // VREFINT for comparator ready flag
    static constexpr uint32_t CFGR3_VREFINT_ADC_RDYF = 0x10000000; // VREFINT for ADC ready flag
    static constexpr uint32_t CFGR3_SENSOR_ADC_RDYF = 0x8000000; // Sensor for ADC ready flag
    static constexpr uint32_t CFGR3_REF_RC48MHZ_RDYF = 0x4000000; // VREFINT for 48 MHz RC oscillator ready flag
    static constexpr uint32_t CFGR3_ENREF_RC48MHZ = 0x2000; // VREFINT reference for 48 MHz RC oscillator enable bit
    static constexpr uint32_t CFGR3_ENBUF_VREFINT_COMP = 0x1000; // VREFINT reference for comparator 2 enable bit
    static constexpr uint32_t CFGR3_ENBUF_SENSOR_ADC = 0x200; // Sensor reference for ADC enable bit
    static constexpr uint32_t CFGR3_ENBUF_BGAP_ADC = 0x100; // VREFINT reference for ADC enable bit
    typedef bit_field_t<4, 0x3> CFGR3_SEL_VREF_OUT; // BGAP_ADC connection bit
    static constexpr uint32_t CFGR3_EN_BGAP = 0x1; // Vref Enable bit
};

template<>
struct peripheral_t<STM32L052, SYSCFG>
{
    static constexpr periph_t P = SYSCFG;
    using T = stm32l052_syscfg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L062, SYSCFG>
{
    static constexpr periph_t P = SYSCFG;
    using T = stm32l052_syscfg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x2, SYSCFG>
{
    static constexpr periph_t P = SYSCFG;
    using T = stm32l052_syscfg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L053, SYSCFG>
{
    static constexpr periph_t P = SYSCFG;
    using T = stm32l053_syscfg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L063, SYSCFG>
{
    static constexpr periph_t P = SYSCFG;
    using T = stm32l053_syscfg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x3, SYSCFG>
{
    static constexpr periph_t P = SYSCFG;
    using T = stm32l053_syscfg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x0, SYSCFG>
{
    static constexpr periph_t P = SYSCFG;
    using T = stm32l0x0_syscfg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L0x1, SYSCFG>
{
    static constexpr periph_t P = SYSCFG;
    using T = stm32l0x1_syscfg_t;
    static T& V;
};

using syscfg_t = peripheral_t<svd, SYSCFG>;

template<int INST> struct syscfg_traits {};

template<> struct syscfg_traits<0>
{
    using syscfg = syscfg_t;
    static constexpr clock_source_t CLOCK = APB2_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB2ENR |= RCC::T::APB2ENR_SYSCFGEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB2ENR &= ~RCC::T::APB2ENR_SYSCFGEN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.APB2SMENR |= RCC::T::APB2SMENR_SYSCFGSMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.APB2SMENR &= ~RCC::T::APB2SMENR_SYSCFGSMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB2RSTR |= RCC::T::APB2RSTR_SYSCFGRST;
    }
};
