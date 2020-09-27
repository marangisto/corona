#pragma once

////
//
//      STM32F3 SYSCFG peripherals
//
///

// SYSCFG: System configuration controller

struct stm32f301_syscfg_t
{
    volatile uint32_t CFGR1; // configuration register 1
    volatile uint32_t RCR; // CCM SRAM protection register
    volatile uint32_t EXTICR1; // external interrupt configuration register 1
    volatile uint32_t EXTICR2; // external interrupt configuration register 2
    volatile uint32_t EXTICR3; // external interrupt configuration register 3
    volatile uint32_t EXTICR4; // external interrupt configuration register 4
    volatile uint32_t CFGR2; // configuration register 2
    reserved_t<0x1> _0x1c;
    volatile uint32_t COMP2_CSR; // control and status register
    reserved_t<0x1> _0x24;
    volatile uint32_t COMP4_CSR; // control and status register
    reserved_t<0x1> _0x2c;
    volatile uint32_t COMP6_CSR; // control and status register
    reserved_t<0x2> _0x34;
    volatile uint32_t OPAMP2_CSR; // OPAMP2 control register
    reserved_t<0x4> _0x40;
    volatile uint32_t CFGR3; // configuration register 3

    static constexpr uint32_t CFGR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> CFGR1_MEM_MODE; // Memory mapping selection bits
    static constexpr uint32_t CFGR1_USB_IT_RMP = 0x20; // USB interrupt remap
    static constexpr uint32_t CFGR1_TIM1_ITR_RMP = 0x40; // Timer 1 ITR3 selection
    static constexpr uint32_t CFGR1_DAC_TRIG_RMP = 0x80; // DAC trigger remap (when TSEL = 001)
    static constexpr uint32_t CFGR1_ADC24_DMA_RMP = 0x100; // ADC24 DMA remapping bit
    static constexpr uint32_t CFGR1_TIM16_DMA_RMP = 0x800; // TIM16 DMA request remapping bit
    static constexpr uint32_t CFGR1_TIM17_DMA_RMP = 0x1000; // TIM17 DMA request remapping bit
    static constexpr uint32_t CFGR1_TIM6_DAC1_DMA_RMP = 0x2000; // TIM6 and DAC1 DMA request remapping bit
    static constexpr uint32_t CFGR1_TIM7_DAC2_DMA_RMP = 0x4000; // TIM7 and DAC2 DMA request remapping bit
    static constexpr uint32_t CFGR1_I2C_PB6_FM = 0x10000; // Fast Mode Plus (FM+) driving capability activation bits.
    static constexpr uint32_t CFGR1_I2C_PB7_FM = 0x20000; // Fast Mode Plus (FM+) driving capability activation bits.
    static constexpr uint32_t CFGR1_I2C_PB8_FM = 0x40000; // Fast Mode Plus (FM+) driving capability activation bits.
    static constexpr uint32_t CFGR1_I2C_PB9_FM = 0x80000; // Fast Mode Plus (FM+) driving capability activation bits.
    static constexpr uint32_t CFGR1_I2C1_FM = 0x100000; // I2C1 Fast Mode Plus
    static constexpr uint32_t CFGR1_I2C2_FM = 0x200000; // I2C2 Fast Mode Plus
    typedef bit_field_t<22, 0x3> CFGR1_ENCODER_MODE; // Encoder mode
    typedef bit_field_t<26, 0x3f> CFGR1_FPU_IT; // Interrupt enable bits from FPU

    static constexpr uint32_t RCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RCR_PAGE0_WP = 0x1; // CCM SRAM page write protection bit
    static constexpr uint32_t RCR_PAGE1_WP = 0x2; // CCM SRAM page write protection bit
    static constexpr uint32_t RCR_PAGE2_WP = 0x4; // CCM SRAM page write protection bit
    static constexpr uint32_t RCR_PAGE3_WP = 0x8; // CCM SRAM page write protection bit
    static constexpr uint32_t RCR_PAGE4_WP = 0x10; // CCM SRAM page write protection bit
    static constexpr uint32_t RCR_PAGE5_WP = 0x20; // CCM SRAM page write protection bit
    static constexpr uint32_t RCR_PAGE6_WP = 0x40; // CCM SRAM page write protection bit
    static constexpr uint32_t RCR_PAGE7_WP = 0x80; // CCM SRAM page write protection bit

    static constexpr uint32_t EXTICR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<12, 0xf> EXTICR1_EXTI3; // EXTI 3 configuration bits
    typedef bit_field_t<8, 0xf> EXTICR1_EXTI2; // EXTI 2 configuration bits
    typedef bit_field_t<4, 0xf> EXTICR1_EXTI1; // EXTI 1 configuration bits
    typedef bit_field_t<0, 0xf> EXTICR1_EXTI0; // EXTI 0 configuration bits

    static constexpr uint32_t EXTICR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<12, 0xf> EXTICR2_EXTI7; // EXTI 7 configuration bits
    typedef bit_field_t<8, 0xf> EXTICR2_EXTI6; // EXTI 6 configuration bits
    typedef bit_field_t<4, 0xf> EXTICR2_EXTI5; // EXTI 5 configuration bits
    typedef bit_field_t<0, 0xf> EXTICR2_EXTI4; // EXTI 4 configuration bits

    static constexpr uint32_t EXTICR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<12, 0xf> EXTICR3_EXTI11; // EXTI 11 configuration bits
    typedef bit_field_t<8, 0xf> EXTICR3_EXTI10; // EXTI 10 configuration bits
    typedef bit_field_t<4, 0xf> EXTICR3_EXTI9; // EXTI 9 configuration bits
    typedef bit_field_t<0, 0xf> EXTICR3_EXTI8; // EXTI 8 configuration bits

    static constexpr uint32_t EXTICR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<12, 0xf> EXTICR4_EXTI15; // EXTI 15 configuration bits
    typedef bit_field_t<8, 0xf> EXTICR4_EXTI14; // EXTI 14 configuration bits
    typedef bit_field_t<4, 0xf> EXTICR4_EXTI13; // EXTI 13 configuration bits
    typedef bit_field_t<0, 0xf> EXTICR4_EXTI12; // EXTI 12 configuration bits

    static constexpr uint32_t CFGR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR2_LOCUP_LOCK = 0x1; // Cortex-M0 LOCKUP bit enable bit
    static constexpr uint32_t CFGR2_SRAM_PARITY_LOCK = 0x2; // SRAM parity lock bit
    static constexpr uint32_t CFGR2_PVD_LOCK = 0x4; // PVD lock enable bit
    static constexpr uint32_t CFGR2_BYP_ADD_PAR = 0x10; // Bypass address bit 29 in parity calculation
    static constexpr uint32_t CFGR2_SRAM_PEF = 0x100; // SRAM parity flag


    static constexpr uint32_t COMP2_CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t COMP2_CSR_COMP2EN = 0x1; // Comparator 2 enable
    typedef bit_field_t<2, 0x3> COMP2_CSR_COMP2MODE; // Comparator 2 mode
    typedef bit_field_t<4, 0x7> COMP2_CSR_COMP2INSEL; // Comparator 2 inverting input selection
    static constexpr uint32_t COMP2_CSR_COMP2INPSEL = 0x80; // Comparator 2 non inverted input selection
    static constexpr uint32_t COMP2_CSR_COMP2INMSEL = 0x200; // Comparator 1inverting input selection
    typedef bit_field_t<10, 0xf> COMP2_CSR_COMP2_OUT_SEL; // Comparator 2 output selection
    static constexpr uint32_t COMP2_CSR_COMP2POL = 0x8000; // Comparator 2 output polarity
    typedef bit_field_t<16, 0x3> COMP2_CSR_COMP2HYST; // Comparator 2 hysteresis
    typedef bit_field_t<18, 0x7> COMP2_CSR_COMP2_BLANKING; // Comparator 2 blanking source
    static constexpr uint32_t COMP2_CSR_COMP2OUT = 0x40000000; // Comparator 2 output
    static constexpr uint32_t COMP2_CSR_COMP2LOCK = 0x80000000; // Comparator 2 lock


    static constexpr uint32_t COMP4_CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t COMP4_CSR_COMP4EN = 0x1; // Comparator 4 enable
    typedef bit_field_t<2, 0x3> COMP4_CSR_COMP4MODE; // Comparator 4 mode
    typedef bit_field_t<4, 0x7> COMP4_CSR_COMP4INSEL; // Comparator 4 inverting input selection
    static constexpr uint32_t COMP4_CSR_COMP4INPSEL = 0x80; // Comparator 4 non inverted input selection
    static constexpr uint32_t COMP4_CSR_COM4WINMODE = 0x200; // Comparator 4 window mode
    typedef bit_field_t<10, 0xf> COMP4_CSR_COMP4_OUT_SEL; // Comparator 4 output selection
    static constexpr uint32_t COMP4_CSR_COMP4POL = 0x8000; // Comparator 4 output polarity
    typedef bit_field_t<16, 0x3> COMP4_CSR_COMP4HYST; // Comparator 4 hysteresis
    typedef bit_field_t<18, 0x7> COMP4_CSR_COMP4_BLANKING; // Comparator 4 blanking source
    static constexpr uint32_t COMP4_CSR_COMP4OUT = 0x40000000; // Comparator 4 output
    static constexpr uint32_t COMP4_CSR_COMP4LOCK = 0x80000000; // Comparator 4 lock


    static constexpr uint32_t COMP6_CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t COMP6_CSR_COMP6EN = 0x1; // Comparator 6 enable
    typedef bit_field_t<2, 0x3> COMP6_CSR_COMP6MODE; // Comparator 6 mode
    typedef bit_field_t<4, 0x7> COMP6_CSR_COMP6INSEL; // Comparator 6 inverting input selection
    static constexpr uint32_t COMP6_CSR_COMP6INPSEL = 0x80; // Comparator 6 non inverted input selection
    static constexpr uint32_t COMP6_CSR_COM6WINMODE = 0x200; // Comparator 6 window mode
    typedef bit_field_t<10, 0xf> COMP6_CSR_COMP6_OUT_SEL; // Comparator 6 output selection
    static constexpr uint32_t COMP6_CSR_COMP6POL = 0x8000; // Comparator 6 output polarity
    typedef bit_field_t<16, 0x3> COMP6_CSR_COMP6HYST; // Comparator 6 hysteresis
    typedef bit_field_t<18, 0x7> COMP6_CSR_COMP6_BLANKING; // Comparator 6 blanking source
    static constexpr uint32_t COMP6_CSR_COMP6OUT = 0x40000000; // Comparator 6 output
    static constexpr uint32_t COMP6_CSR_COMP6LOCK = 0x80000000; // Comparator 6 lock


    static constexpr uint32_t OPAMP2_CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OPAMP2_CSR_OPAMP2EN = 0x1; // OPAMP2 enable
    static constexpr uint32_t OPAMP2_CSR_FORCE_VP = 0x2; // FORCE_VP
    typedef bit_field_t<2, 0x3> OPAMP2_CSR_VP_SEL; // OPAMP2 Non inverting input selection
    typedef bit_field_t<5, 0x3> OPAMP2_CSR_VM_SEL; // OPAMP2 inverting input selection
    static constexpr uint32_t OPAMP2_CSR_TCM_EN = 0x80; // Timer controlled Mux mode enable
    static constexpr uint32_t OPAMP2_CSR_VMS_SEL = 0x100; // OPAMP2 inverting input secondary selection
    typedef bit_field_t<9, 0x3> OPAMP2_CSR_VPS_SEL; // OPAMP2 Non inverting input secondary selection
    static constexpr uint32_t OPAMP2_CSR_CALON = 0x800; // Calibration mode enable
    typedef bit_field_t<12, 0x3> OPAMP2_CSR_CAL_SEL; // Calibration selection
    typedef bit_field_t<14, 0xf> OPAMP2_CSR_PGA_GAIN; // Gain in PGA mode
    static constexpr uint32_t OPAMP2_CSR_USER_TRIM = 0x40000; // User trimming enable
    typedef bit_field_t<19, 0x1f> OPAMP2_CSR_TRIMOFFSETP; // Offset trimming value (PMOS)
    typedef bit_field_t<24, 0x1f> OPAMP2_CSR_TRIMOFFSETN; // Offset trimming value (NMOS)
    static constexpr uint32_t OPAMP2_CSR_TSTREF = 0x20000000; // TSTREF
    static constexpr uint32_t OPAMP2_CSR_OUTCAL = 0x40000000; // OPAMP 2 ouput status flag
    static constexpr uint32_t OPAMP2_CSR_LOCK = 0x80000000; // OPAMP 2 lock


    static constexpr uint32_t CFGR3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR3_DAC1_TRIG5_RMP = 0x20000; // DAC1_CH1 / DAC1_CH2 Trigger remap
    static constexpr uint32_t CFGR3_DAC1_TRIG3_RMP = 0x10000; // DAC1_CH1 / DAC1_CH2 Trigger remap
    static constexpr uint32_t CFGR3_ADC2_DMA_RMP_1 = 0x200; // ADC2 DMA controller remapping bit
    typedef bit_field_t<6, 0x3> CFGR3_ADC2_DMA_RMP_0; // ADC2 DMA channel remapping bit
    typedef bit_field_t<4, 0x3> CFGR3_I2C1_RX_DMA_RMP; // I2C1_RX DMA remapping bit
    typedef bit_field_t<2, 0x3> CFGR3_SPI1_TX_DMA_RMP; // SPI1_TX DMA remapping bit
    typedef bit_field_t<0, 0x3> CFGR3_SPI1_RX_DMA_RMP; // SPI1_RX DMA remapping bit
};

// SYSCFG: System configuration controller _Comparator and Operational amplifier

struct stm32f303_syscfg_t
{
    volatile uint32_t CFGR1; // configuration register 1
    volatile uint32_t RCR; // CCM SRAM protection register
    volatile uint32_t EXTICR1; // external interrupt configuration register 1
    volatile uint32_t EXTICR2; // external interrupt configuration register 2
    volatile uint32_t EXTICR3; // external interrupt configuration register 3
    volatile uint32_t EXTICR4; // external interrupt configuration register 4
    volatile uint32_t CFGR2; // configuration register 2
    volatile uint32_t COMP1_CSR; // control and status register
    volatile uint32_t COMP2_CSR; // control and status register
    volatile uint32_t COMP3_CSR; // control and status register
    volatile uint32_t COMP4_CSR; // control and status register
    volatile uint32_t COMP5_CSR; // control and status register
    volatile uint32_t COMP6_CSR; // control and status register
    volatile uint32_t COMP7_CSR; // control and status register
    volatile uint32_t OPAMP1_CSR; // control register
    volatile uint32_t OPAMP2_CSR; // control register
    volatile uint32_t OPAMP3_CSR; // control register
    volatile uint32_t OPAMP4_CSR; // control register
    volatile uint32_t CFGR4; // SYSCFG configuration register 4
    reserved_t<0x1> _0x4c;
    volatile uint32_t CFGR3; // SYSCFG configuration register 3

    static constexpr uint32_t CFGR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> CFGR1_MEM_MODE; // Memory mapping selection bits
    static constexpr uint32_t CFGR1_USB_IT_RMP = 0x20; // USB interrupt remap
    static constexpr uint32_t CFGR1_TIM1_ITR_RMP = 0x40; // Timer 1 ITR3 selection
    static constexpr uint32_t CFGR1_DAC_TRIG_RMP = 0x80; // DAC trigger remap (when TSEL = 001)
    static constexpr uint32_t CFGR1_ADC24_DMA_RMP = 0x100; // ADC24 DMA remapping bit
    static constexpr uint32_t CFGR1_TIM16_DMA_RMP = 0x800; // TIM16 DMA request remapping bit
    static constexpr uint32_t CFGR1_TIM17_DMA_RMP = 0x1000; // TIM17 DMA request remapping bit
    static constexpr uint32_t CFGR1_TIM6_DAC1_DMA_RMP = 0x2000; // TIM6 and DAC1 DMA request remapping bit
    static constexpr uint32_t CFGR1_TIM7_DAC2_DMA_RMP = 0x4000; // TIM7 and DAC2 DMA request remapping bit
    static constexpr uint32_t CFGR1_I2C_PB6_FM = 0x10000; // Fast Mode Plus (FM+) driving capability activation bits.
    static constexpr uint32_t CFGR1_I2C_PB7_FM = 0x20000; // Fast Mode Plus (FM+) driving capability activation bits.
    static constexpr uint32_t CFGR1_I2C_PB8_FM = 0x40000; // Fast Mode Plus (FM+) driving capability activation bits.
    static constexpr uint32_t CFGR1_I2C_PB9_FM = 0x80000; // Fast Mode Plus (FM+) driving capability activation bits.
    static constexpr uint32_t CFGR1_I2C1_FM = 0x100000; // I2C1 Fast Mode Plus
    static constexpr uint32_t CFGR1_I2C2_FM = 0x200000; // I2C2 Fast Mode Plus
    typedef bit_field_t<22, 0x3> CFGR1_ENCODER_MODE; // Encoder mode
    typedef bit_field_t<26, 0x3f> CFGR1_FPU_IT; // Interrupt enable bits from FPU

    static constexpr uint32_t RCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RCR_PAGE0_WP = 0x1; // CCM SRAM page write protection bit
    static constexpr uint32_t RCR_PAGE1_WP = 0x2; // CCM SRAM page write protection bit
    static constexpr uint32_t RCR_PAGE2_WP = 0x4; // CCM SRAM page write protection bit
    static constexpr uint32_t RCR_PAGE3_WP = 0x8; // CCM SRAM page write protection bit
    static constexpr uint32_t RCR_PAGE4_WP = 0x10; // CCM SRAM page write protection bit
    static constexpr uint32_t RCR_PAGE5_WP = 0x20; // CCM SRAM page write protection bit
    static constexpr uint32_t RCR_PAGE6_WP = 0x40; // CCM SRAM page write protection bit
    static constexpr uint32_t RCR_PAGE7_WP = 0x80; // CCM SRAM page write protection bit

    static constexpr uint32_t EXTICR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<12, 0xf> EXTICR1_EXTI3; // EXTI 3 configuration bits
    typedef bit_field_t<8, 0xf> EXTICR1_EXTI2; // EXTI 2 configuration bits
    typedef bit_field_t<4, 0xf> EXTICR1_EXTI1; // EXTI 1 configuration bits
    typedef bit_field_t<0, 0xf> EXTICR1_EXTI0; // EXTI 0 configuration bits

    static constexpr uint32_t EXTICR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<12, 0xf> EXTICR2_EXTI7; // EXTI 7 configuration bits
    typedef bit_field_t<8, 0xf> EXTICR2_EXTI6; // EXTI 6 configuration bits
    typedef bit_field_t<4, 0xf> EXTICR2_EXTI5; // EXTI 5 configuration bits
    typedef bit_field_t<0, 0xf> EXTICR2_EXTI4; // EXTI 4 configuration bits

    static constexpr uint32_t EXTICR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<12, 0xf> EXTICR3_EXTI11; // EXTI 11 configuration bits
    typedef bit_field_t<8, 0xf> EXTICR3_EXTI10; // EXTI 10 configuration bits
    typedef bit_field_t<4, 0xf> EXTICR3_EXTI9; // EXTI 9 configuration bits
    typedef bit_field_t<0, 0xf> EXTICR3_EXTI8; // EXTI 8 configuration bits

    static constexpr uint32_t EXTICR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<12, 0xf> EXTICR4_EXTI15; // EXTI 15 configuration bits
    typedef bit_field_t<8, 0xf> EXTICR4_EXTI14; // EXTI 14 configuration bits
    typedef bit_field_t<4, 0xf> EXTICR4_EXTI13; // EXTI 13 configuration bits
    typedef bit_field_t<0, 0xf> EXTICR4_EXTI12; // EXTI 12 configuration bits

    static constexpr uint32_t CFGR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR2_LOCUP_LOCK = 0x1; // Cortex-M0 LOCKUP bit enable bit
    static constexpr uint32_t CFGR2_SRAM_PARITY_LOCK = 0x2; // SRAM parity lock bit
    static constexpr uint32_t CFGR2_PVD_LOCK = 0x4; // PVD lock enable bit
    static constexpr uint32_t CFGR2_BYP_ADD_PAR = 0x10; // Bypass address bit 29 in parity calculation
    static constexpr uint32_t CFGR2_SRAM_PEF = 0x100; // SRAM parity flag

    static constexpr uint32_t COMP1_CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t COMP1_CSR_COMP1EN = 0x1; // Comparator 1 enable
    static constexpr uint32_t COMP1_CSR_COMP1_INP_DAC = 0x2; // COMP1_INP_DAC
    typedef bit_field_t<2, 0x3> COMP1_CSR_COMP1MODE; // Comparator 1 mode
    typedef bit_field_t<4, 0x7> COMP1_CSR_COMP1INSEL; // Comparator 1 inverting input selection
    typedef bit_field_t<10, 0xf> COMP1_CSR_COMP1_OUT_SEL; // Comparator 1 output selection
    static constexpr uint32_t COMP1_CSR_COMP1POL = 0x8000; // Comparator 1 output polarity
    typedef bit_field_t<16, 0x3> COMP1_CSR_COMP1HYST; // Comparator 1 hysteresis
    typedef bit_field_t<18, 0x7> COMP1_CSR_COMP1_BLANKING; // Comparator 1 blanking source
    static constexpr uint32_t COMP1_CSR_COMP1OUT = 0x40000000; // Comparator 1 output
    static constexpr uint32_t COMP1_CSR_COMP1LOCK = 0x80000000; // Comparator 1 lock

    static constexpr uint32_t COMP2_CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t COMP2_CSR_COMP2EN = 0x1; // Comparator 2 enable
    typedef bit_field_t<2, 0x3> COMP2_CSR_COMP2MODE; // Comparator 2 mode
    typedef bit_field_t<4, 0x7> COMP2_CSR_COMP2INSEL; // Comparator 2 inverting input selection
    static constexpr uint32_t COMP2_CSR_COMP2INPSEL = 0x80; // Comparator 2 non inverted input selection
    static constexpr uint32_t COMP2_CSR_COMP2INMSEL = 0x200; // Comparator 1inverting input selection
    typedef bit_field_t<10, 0xf> COMP2_CSR_COMP2_OUT_SEL; // Comparator 2 output selection
    static constexpr uint32_t COMP2_CSR_COMP2POL = 0x8000; // Comparator 2 output polarity
    typedef bit_field_t<16, 0x3> COMP2_CSR_COMP2HYST; // Comparator 2 hysteresis
    typedef bit_field_t<18, 0x7> COMP2_CSR_COMP2_BLANKING; // Comparator 2 blanking source
    static constexpr uint32_t COMP2_CSR_COMP2LOCK = 0x80000000; // Comparator 2 lock
    static constexpr uint32_t COMP2_CSR_COMP2OUT = 0x40000000; // Comparator 2 output

    static constexpr uint32_t COMP3_CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t COMP3_CSR_COMP3EN = 0x1; // Comparator 3 enable
    typedef bit_field_t<2, 0x3> COMP3_CSR_COMP3MODE; // Comparator 3 mode
    typedef bit_field_t<4, 0x7> COMP3_CSR_COMP3INSEL; // Comparator 3 inverting input selection
    static constexpr uint32_t COMP3_CSR_COMP3INPSEL = 0x80; // Comparator 3 non inverted input selection
    typedef bit_field_t<10, 0xf> COMP3_CSR_COMP3_OUT_SEL; // Comparator 3 output selection
    static constexpr uint32_t COMP3_CSR_COMP3POL = 0x8000; // Comparator 3 output polarity
    typedef bit_field_t<16, 0x3> COMP3_CSR_COMP3HYST; // Comparator 3 hysteresis
    typedef bit_field_t<18, 0x7> COMP3_CSR_COMP3_BLANKING; // Comparator 3 blanking source
    static constexpr uint32_t COMP3_CSR_COMP3OUT = 0x40000000; // Comparator 3 output
    static constexpr uint32_t COMP3_CSR_COMP3LOCK = 0x80000000; // Comparator 3 lock

    static constexpr uint32_t COMP4_CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t COMP4_CSR_COMP4EN = 0x1; // Comparator 4 enable
    typedef bit_field_t<2, 0x3> COMP4_CSR_COMP4MODE; // Comparator 4 mode
    typedef bit_field_t<4, 0x7> COMP4_CSR_COMP4INSEL; // Comparator 4 inverting input selection
    static constexpr uint32_t COMP4_CSR_COMP4INPSEL = 0x80; // Comparator 4 non inverted input selection
    static constexpr uint32_t COMP4_CSR_COM4WINMODE = 0x200; // Comparator 4 window mode
    typedef bit_field_t<10, 0xf> COMP4_CSR_COMP4_OUT_SEL; // Comparator 4 output selection
    static constexpr uint32_t COMP4_CSR_COMP4POL = 0x8000; // Comparator 4 output polarity
    typedef bit_field_t<16, 0x3> COMP4_CSR_COMP4HYST; // Comparator 4 hysteresis
    typedef bit_field_t<18, 0x7> COMP4_CSR_COMP4_BLANKING; // Comparator 4 blanking source
    static constexpr uint32_t COMP4_CSR_COMP4OUT = 0x40000000; // Comparator 4 output
    static constexpr uint32_t COMP4_CSR_COMP4LOCK = 0x80000000; // Comparator 4 lock

    static constexpr uint32_t COMP5_CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t COMP5_CSR_COMP5EN = 0x1; // Comparator 5 enable
    typedef bit_field_t<2, 0x3> COMP5_CSR_COMP5MODE; // Comparator 5 mode
    typedef bit_field_t<4, 0x7> COMP5_CSR_COMP5INSEL; // Comparator 5 inverting input selection
    static constexpr uint32_t COMP5_CSR_COMP5INPSEL = 0x80; // Comparator 5 non inverted input selection
    typedef bit_field_t<10, 0xf> COMP5_CSR_COMP5_OUT_SEL; // Comparator 5 output selection
    static constexpr uint32_t COMP5_CSR_COMP5POL = 0x8000; // Comparator 5 output polarity
    typedef bit_field_t<16, 0x3> COMP5_CSR_COMP5HYST; // Comparator 5 hysteresis
    typedef bit_field_t<18, 0x7> COMP5_CSR_COMP5_BLANKING; // Comparator 5 blanking source
    static constexpr uint32_t COMP5_CSR_COMP5OUT = 0x40000000; // Comparator51 output
    static constexpr uint32_t COMP5_CSR_COMP5LOCK = 0x80000000; // Comparator 5 lock

    static constexpr uint32_t COMP6_CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t COMP6_CSR_COMP6EN = 0x1; // Comparator 6 enable
    typedef bit_field_t<2, 0x3> COMP6_CSR_COMP6MODE; // Comparator 6 mode
    typedef bit_field_t<4, 0x7> COMP6_CSR_COMP6INSEL; // Comparator 6 inverting input selection
    static constexpr uint32_t COMP6_CSR_COMP6INPSEL = 0x80; // Comparator 6 non inverted input selection
    static constexpr uint32_t COMP6_CSR_COM6WINMODE = 0x200; // Comparator 6 window mode
    typedef bit_field_t<10, 0xf> COMP6_CSR_COMP6_OUT_SEL; // Comparator 6 output selection
    static constexpr uint32_t COMP6_CSR_COMP6POL = 0x8000; // Comparator 6 output polarity
    typedef bit_field_t<16, 0x3> COMP6_CSR_COMP6HYST; // Comparator 6 hysteresis
    typedef bit_field_t<18, 0x7> COMP6_CSR_COMP6_BLANKING; // Comparator 6 blanking source
    static constexpr uint32_t COMP6_CSR_COMP6OUT = 0x40000000; // Comparator 6 output
    static constexpr uint32_t COMP6_CSR_COMP6LOCK = 0x80000000; // Comparator 6 lock

    static constexpr uint32_t COMP7_CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t COMP7_CSR_COMP7EN = 0x1; // Comparator 7 enable
    typedef bit_field_t<2, 0x3> COMP7_CSR_COMP7MODE; // Comparator 7 mode
    typedef bit_field_t<4, 0x7> COMP7_CSR_COMP7INSEL; // Comparator 7 inverting input selection
    static constexpr uint32_t COMP7_CSR_COMP7INPSEL = 0x80; // Comparator 7 non inverted input selection
    typedef bit_field_t<10, 0xf> COMP7_CSR_COMP7_OUT_SEL; // Comparator 7 output selection
    static constexpr uint32_t COMP7_CSR_COMP7POL = 0x8000; // Comparator 7 output polarity
    typedef bit_field_t<16, 0x3> COMP7_CSR_COMP7HYST; // Comparator 7 hysteresis
    typedef bit_field_t<18, 0x7> COMP7_CSR_COMP7_BLANKING; // Comparator 7 blanking source
    static constexpr uint32_t COMP7_CSR_COMP7OUT = 0x40000000; // Comparator 7 output
    static constexpr uint32_t COMP7_CSR_COMP7LOCK = 0x80000000; // Comparator 7 lock

    static constexpr uint32_t OPAMP1_CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OPAMP1_CSR_OPAMP1_EN = 0x1; // OPAMP1 enable
    static constexpr uint32_t OPAMP1_CSR_FORCE_VP = 0x2; // FORCE_VP
    typedef bit_field_t<2, 0x3> OPAMP1_CSR_VP_SEL; // OPAMP1 Non inverting input selection
    typedef bit_field_t<5, 0x3> OPAMP1_CSR_VM_SEL; // OPAMP1 inverting input selection
    static constexpr uint32_t OPAMP1_CSR_TCM_EN = 0x80; // Timer controlled Mux mode enable
    static constexpr uint32_t OPAMP1_CSR_VMS_SEL = 0x100; // OPAMP1 inverting input secondary selection
    typedef bit_field_t<9, 0x3> OPAMP1_CSR_VPS_SEL; // OPAMP1 Non inverting input secondary selection
    static constexpr uint32_t OPAMP1_CSR_CALON = 0x800; // Calibration mode enable
    typedef bit_field_t<12, 0x3> OPAMP1_CSR_CALSEL; // Calibration selection
    typedef bit_field_t<14, 0xf> OPAMP1_CSR_PGA_GAIN; // Gain in PGA mode
    static constexpr uint32_t OPAMP1_CSR_USER_TRIM = 0x40000; // User trimming enable
    typedef bit_field_t<19, 0x1f> OPAMP1_CSR_TRIMOFFSETP; // Offset trimming value (PMOS)
    typedef bit_field_t<24, 0x1f> OPAMP1_CSR_TRIMOFFSETN; // Offset trimming value (NMOS)
    static constexpr uint32_t OPAMP1_CSR_TSTREF = 0x20000000; // TSTREF
    static constexpr uint32_t OPAMP1_CSR_OUTCAL = 0x40000000; // OPAMP 1 ouput status flag
    static constexpr uint32_t OPAMP1_CSR_LOCK = 0x80000000; // OPAMP 1 lock

    static constexpr uint32_t OPAMP2_CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OPAMP2_CSR_OPAMP2EN = 0x1; // OPAMP2 enable
    static constexpr uint32_t OPAMP2_CSR_FORCE_VP = 0x2; // FORCE_VP
    typedef bit_field_t<2, 0x3> OPAMP2_CSR_VP_SEL; // OPAMP2 Non inverting input selection
    typedef bit_field_t<5, 0x3> OPAMP2_CSR_VM_SEL; // OPAMP2 inverting input selection
    static constexpr uint32_t OPAMP2_CSR_TCM_EN = 0x80; // Timer controlled Mux mode enable
    static constexpr uint32_t OPAMP2_CSR_VMS_SEL = 0x100; // OPAMP2 inverting input secondary selection
    typedef bit_field_t<9, 0x3> OPAMP2_CSR_VPS_SEL; // OPAMP2 Non inverting input secondary selection
    static constexpr uint32_t OPAMP2_CSR_CALON = 0x800; // Calibration mode enable
    typedef bit_field_t<12, 0x3> OPAMP2_CSR_CALSEL; // Calibration selection
    typedef bit_field_t<14, 0xf> OPAMP2_CSR_PGA_GAIN; // Gain in PGA mode
    static constexpr uint32_t OPAMP2_CSR_USER_TRIM = 0x40000; // User trimming enable
    typedef bit_field_t<19, 0x1f> OPAMP2_CSR_TRIMOFFSETP; // Offset trimming value (PMOS)
    typedef bit_field_t<24, 0x1f> OPAMP2_CSR_TRIMOFFSETN; // Offset trimming value (NMOS)
    static constexpr uint32_t OPAMP2_CSR_TSTREF = 0x20000000; // TSTREF
    static constexpr uint32_t OPAMP2_CSR_OUTCAL = 0x40000000; // OPAMP 2 ouput status flag
    static constexpr uint32_t OPAMP2_CSR_LOCK = 0x80000000; // OPAMP 2 lock

    static constexpr uint32_t OPAMP3_CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OPAMP3_CSR_OPAMP3EN = 0x1; // OPAMP3 enable
    static constexpr uint32_t OPAMP3_CSR_FORCE_VP = 0x2; // FORCE_VP
    typedef bit_field_t<2, 0x3> OPAMP3_CSR_VP_SEL; // OPAMP3 Non inverting input selection
    typedef bit_field_t<5, 0x3> OPAMP3_CSR_VM_SEL; // OPAMP3 inverting input selection
    static constexpr uint32_t OPAMP3_CSR_TCM_EN = 0x80; // Timer controlled Mux mode enable
    static constexpr uint32_t OPAMP3_CSR_VMS_SEL = 0x100; // OPAMP3 inverting input secondary selection
    typedef bit_field_t<9, 0x3> OPAMP3_CSR_VPS_SEL; // OPAMP3 Non inverting input secondary selection
    static constexpr uint32_t OPAMP3_CSR_CALON = 0x800; // Calibration mode enable
    typedef bit_field_t<12, 0x3> OPAMP3_CSR_CALSEL; // Calibration selection
    typedef bit_field_t<14, 0xf> OPAMP3_CSR_PGA_GAIN; // Gain in PGA mode
    static constexpr uint32_t OPAMP3_CSR_USER_TRIM = 0x40000; // User trimming enable
    typedef bit_field_t<19, 0x1f> OPAMP3_CSR_TRIMOFFSETP; // Offset trimming value (PMOS)
    typedef bit_field_t<24, 0x1f> OPAMP3_CSR_TRIMOFFSETN; // Offset trimming value (NMOS)
    static constexpr uint32_t OPAMP3_CSR_TSTREF = 0x20000000; // TSTREF
    static constexpr uint32_t OPAMP3_CSR_OUTCAL = 0x40000000; // OPAMP 3 ouput status flag
    static constexpr uint32_t OPAMP3_CSR_LOCK = 0x80000000; // OPAMP 3 lock

    static constexpr uint32_t OPAMP4_CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OPAMP4_CSR_OPAMP4EN = 0x1; // OPAMP4 enable
    static constexpr uint32_t OPAMP4_CSR_FORCE_VP = 0x2; // FORCE_VP
    typedef bit_field_t<2, 0x3> OPAMP4_CSR_VP_SEL; // OPAMP4 Non inverting input selection
    typedef bit_field_t<5, 0x3> OPAMP4_CSR_VM_SEL; // OPAMP4 inverting input selection
    static constexpr uint32_t OPAMP4_CSR_TCM_EN = 0x80; // Timer controlled Mux mode enable
    static constexpr uint32_t OPAMP4_CSR_VMS_SEL = 0x100; // OPAMP4 inverting input secondary selection
    typedef bit_field_t<9, 0x3> OPAMP4_CSR_VPS_SEL; // OPAMP4 Non inverting input secondary selection
    static constexpr uint32_t OPAMP4_CSR_CALON = 0x800; // Calibration mode enable
    typedef bit_field_t<12, 0x3> OPAMP4_CSR_CALSEL; // Calibration selection
    typedef bit_field_t<14, 0xf> OPAMP4_CSR_PGA_GAIN; // Gain in PGA mode
    static constexpr uint32_t OPAMP4_CSR_USER_TRIM = 0x40000; // User trimming enable
    typedef bit_field_t<19, 0x1f> OPAMP4_CSR_TRIMOFFSETP; // Offset trimming value (PMOS)
    typedef bit_field_t<24, 0x1f> OPAMP4_CSR_TRIMOFFSETN; // Offset trimming value (NMOS)
    static constexpr uint32_t OPAMP4_CSR_TSTREF = 0x20000000; // TSTREF
    static constexpr uint32_t OPAMP4_CSR_OUTCAL = 0x40000000; // OPAMP 4 ouput status flag
    static constexpr uint32_t OPAMP4_CSR_LOCK = 0x80000000; // OPAMP 4 lock

    static constexpr uint32_t CFGR4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR4_ADC12_EXT2_RMP = 0x1; // Controls the Input trigger of ADC12 regular channel EXT2
    static constexpr uint32_t CFGR4_ADC12_EXT3_RMP = 0x2; // Controls the Input trigger of ADC12 regular channel EXT3
    static constexpr uint32_t CFGR4_ADC12_EXT5_RMP = 0x4; // Controls the Input trigger of ADC12 regular channel EXT5
    static constexpr uint32_t CFGR4_ADC12_EXT13_RMP = 0x8; // Controls the Input trigger of ADC12 regular channel EXT13
    static constexpr uint32_t CFGR4_ADC12_EXT15_RMP = 0x10; // Controls the Input trigger of ADC12 regular channel EXT15
    static constexpr uint32_t CFGR4_ADC12_JEXT3_RMP = 0x20; // Controls the Input trigger of ADC12 injected channel EXTI3
    static constexpr uint32_t CFGR4_ADC12_JEXT6_RMP = 0x40; // Controls the Input trigger of ADC12 injected channel EXTI6
    static constexpr uint32_t CFGR4_ADC12_JEXT13_RMP = 0x80; // Controls the Input trigger of ADC12 injected channel EXTI13
    static constexpr uint32_t CFGR4_ADC34_EXT5_RMP = 0x100; // Controls the Input trigger of ADC34 regular channel EXT5
    static constexpr uint32_t CFGR4_ADC34_EXT6_RMP = 0x200; // Controls the Input trigger of ADC34 regular channel EXT6
    static constexpr uint32_t CFGR4_ADC34_EXT15_RMP = 0x400; // Controls the Input trigger of ADC34 regular channel EXT15
    static constexpr uint32_t CFGR4_ADC34_JEXT5_RMP = 0x800; // Controls the Input trigger of ADC34 injected channel JEXT5
    static constexpr uint32_t CFGR4_ADC34_JEXT11_RMP = 0x1000; // Controls the Input trigger of ADC34 injected channel JEXT11
    static constexpr uint32_t CFGR4_ADC34_JEXT14_RMP = 0x2000; // Controls the Input trigger of ADC34 injected channel JEXT14


    static constexpr uint32_t CFGR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> CFGR3_SPI1_RX_DMA_RMP; // SPI1_RX DMA remapping bit
    typedef bit_field_t<2, 0x3> CFGR3_SPI1_TX_DMA_RMP; // SPI1_TX DMA remapping bit
    typedef bit_field_t<4, 0x3> CFGR3_I2C1_RX_DMA_RMP; // I2C1_RX DMA remapping bit
    typedef bit_field_t<6, 0x3> CFGR3_I2C1_TX_DMA_RMP; // I2C1_TX DMA remapping bit
    typedef bit_field_t<8, 0x3> CFGR3_ADC2_DMA_RMP; // ADC2 DMA channel remapping bit
};

// SYSCFG: System configuration controller

struct stm32f3x4_syscfg_t
{
    volatile uint32_t CFGR1; // configuration register 1
    volatile uint32_t RCR; // CCM SRAM protection register
    volatile uint32_t EXTICR1; // external interrupt configuration register 1
    volatile uint32_t EXTICR2; // external interrupt configuration register 2
    volatile uint32_t EXTICR3; // external interrupt configuration register 3
    volatile uint32_t EXTICR4; // external interrupt configuration register 4
    volatile uint32_t CFGR2; // configuration register 2
    reserved_t<0x1> _0x1c;
    volatile uint32_t COMP2_CSR; // control and status register
    reserved_t<0x1> _0x24;
    volatile uint32_t COMP4_CSR; // control and status register
    reserved_t<0x1> _0x2c;
    volatile uint32_t COMP6_CSR; // control and status register
    reserved_t<0x2> _0x34;
    volatile uint32_t OPAMP2_CSR; // OPAMP2 control register
    reserved_t<0x4> _0x40;
    volatile uint32_t CFGR3; // configuration register 3

    static constexpr uint32_t CFGR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> CFGR1_MEM_MODE; // Memory mapping selection bits
    static constexpr uint32_t CFGR1_USB_IT_RMP = 0x20; // USB interrupt remap
    static constexpr uint32_t CFGR1_TIM1_ITR_RMP = 0x40; // Timer 1 ITR3 selection
    static constexpr uint32_t CFGR1_DAC_TRIG_RMP = 0x80; // DAC trigger remap (when TSEL = 001)
    static constexpr uint32_t CFGR1_ADC24_DMA_RMP = 0x100; // ADC24 DMA remapping bit
    static constexpr uint32_t CFGR1_TIM16_DMA_RMP = 0x800; // TIM16 DMA request remapping bit
    static constexpr uint32_t CFGR1_TIM17_DMA_RMP = 0x1000; // TIM17 DMA request remapping bit
    static constexpr uint32_t CFGR1_TIM6_DAC1_DMA_RMP = 0x2000; // TIM6 and DAC1 DMA request remapping bit
    static constexpr uint32_t CFGR1_TIM7_DAC2_DMA_RMP = 0x4000; // TIM7 and DAC2 DMA request remapping bit
    static constexpr uint32_t CFGR1_I2C_PB6_FM = 0x10000; // Fast Mode Plus (FM+) driving capability activation bits.
    static constexpr uint32_t CFGR1_I2C_PB7_FM = 0x20000; // Fast Mode Plus (FM+) driving capability activation bits.
    static constexpr uint32_t CFGR1_I2C_PB8_FM = 0x40000; // Fast Mode Plus (FM+) driving capability activation bits.
    static constexpr uint32_t CFGR1_I2C_PB9_FM = 0x80000; // Fast Mode Plus (FM+) driving capability activation bits.
    static constexpr uint32_t CFGR1_I2C1_FM = 0x100000; // I2C1 Fast Mode Plus
    static constexpr uint32_t CFGR1_I2C2_FM = 0x200000; // I2C2 Fast Mode Plus
    typedef bit_field_t<22, 0x3> CFGR1_ENCODER_MODE; // Encoder mode
    typedef bit_field_t<26, 0x3f> CFGR1_FPU_IT; // Interrupt enable bits from FPU

    static constexpr uint32_t RCR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RCR_PAGE0_WP = 0x1; // CCM SRAM page write protection bit
    static constexpr uint32_t RCR_PAGE1_WP = 0x2; // CCM SRAM page write protection bit
    static constexpr uint32_t RCR_PAGE2_WP = 0x4; // CCM SRAM page write protection bit
    static constexpr uint32_t RCR_PAGE3_WP = 0x8; // CCM SRAM page write protection bit
    static constexpr uint32_t RCR_PAGE4_WP = 0x10; // CCM SRAM page write protection bit
    static constexpr uint32_t RCR_PAGE5_WP = 0x20; // CCM SRAM page write protection bit
    static constexpr uint32_t RCR_PAGE6_WP = 0x40; // CCM SRAM page write protection bit
    static constexpr uint32_t RCR_PAGE7_WP = 0x80; // CCM SRAM page write protection bit

    static constexpr uint32_t EXTICR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<12, 0xf> EXTICR1_EXTI3; // EXTI 3 configuration bits
    typedef bit_field_t<8, 0xf> EXTICR1_EXTI2; // EXTI 2 configuration bits
    typedef bit_field_t<4, 0xf> EXTICR1_EXTI1; // EXTI 1 configuration bits
    typedef bit_field_t<0, 0xf> EXTICR1_EXTI0; // EXTI 0 configuration bits

    static constexpr uint32_t EXTICR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<12, 0xf> EXTICR2_EXTI7; // EXTI 7 configuration bits
    typedef bit_field_t<8, 0xf> EXTICR2_EXTI6; // EXTI 6 configuration bits
    typedef bit_field_t<4, 0xf> EXTICR2_EXTI5; // EXTI 5 configuration bits
    typedef bit_field_t<0, 0xf> EXTICR2_EXTI4; // EXTI 4 configuration bits

    static constexpr uint32_t EXTICR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<12, 0xf> EXTICR3_EXTI11; // EXTI 11 configuration bits
    typedef bit_field_t<8, 0xf> EXTICR3_EXTI10; // EXTI 10 configuration bits
    typedef bit_field_t<4, 0xf> EXTICR3_EXTI9; // EXTI 9 configuration bits
    typedef bit_field_t<0, 0xf> EXTICR3_EXTI8; // EXTI 8 configuration bits

    static constexpr uint32_t EXTICR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<12, 0xf> EXTICR4_EXTI15; // EXTI 15 configuration bits
    typedef bit_field_t<8, 0xf> EXTICR4_EXTI14; // EXTI 14 configuration bits
    typedef bit_field_t<4, 0xf> EXTICR4_EXTI13; // EXTI 13 configuration bits
    typedef bit_field_t<0, 0xf> EXTICR4_EXTI12; // EXTI 12 configuration bits

    static constexpr uint32_t CFGR2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR2_LOCUP_LOCK = 0x1; // Cortex-M0 LOCKUP bit enable bit
    static constexpr uint32_t CFGR2_SRAM_PARITY_LOCK = 0x2; // SRAM parity lock bit
    static constexpr uint32_t CFGR2_PVD_LOCK = 0x4; // PVD lock enable bit
    static constexpr uint32_t CFGR2_BYP_ADD_PAR = 0x10; // Bypass address bit 29 in parity calculation
    static constexpr uint32_t CFGR2_SRAM_PEF = 0x100; // SRAM parity flag


    static constexpr uint32_t COMP2_CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t COMP2_CSR_COMP2EN = 0x1; // Comparator 2 enable
    typedef bit_field_t<4, 0x7> COMP2_CSR_COMP2INMSEL; // Comparator 2 inverting input selection
    typedef bit_field_t<10, 0xf> COMP2_CSR_COMP2OUTSEL; // Comparator 2 output selection
    static constexpr uint32_t COMP2_CSR_COMP2POL = 0x8000; // Comparator 2 output polarity
    typedef bit_field_t<18, 0x7> COMP2_CSR_COMP2_BLANKING; // Comparator 2 blanking source
    static constexpr uint32_t COMP2_CSR_COMP2INMSEL3 = 0x400000; // Comparator 2 inverting input selection. It is used with Bits [6..4] to configure the Comp inverting input
    static constexpr uint32_t COMP2_CSR_COMP2OUT = 0x40000000; // Comparator 2 output
    static constexpr uint32_t COMP2_CSR_COMP2LOCK = 0x80000000; // Comparator 2 lock


    static constexpr uint32_t COMP4_CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t COMP4_CSR_COMP4EN = 0x1; // Comparator 4 enable
    typedef bit_field_t<4, 0x7> COMP4_CSR_COMP4INMSEL; // Comparator 4 inverting input selection
    typedef bit_field_t<10, 0xf> COMP4_CSR_COMP4OUTSEL; // Comparator 4 output selection
    static constexpr uint32_t COMP4_CSR_COMP4POL = 0x8000; // Comparator 4 output polarity
    typedef bit_field_t<18, 0x7> COMP4_CSR_COMP4_BLANKING; // Comparator 4 blanking source
    static constexpr uint32_t COMP4_CSR_COMP4INMSEL3 = 0x400000; // Comparator 4 inverting input selection. It is used with Bits [6..4] to configure the Comp inverting input
    static constexpr uint32_t COMP4_CSR_COMP4OUT = 0x40000000; // Comparator 4 output
    static constexpr uint32_t COMP4_CSR_COMP4LOCK = 0x80000000; // Comparator 4 lock


    static constexpr uint32_t COMP6_CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t COMP6_CSR_COMP6EN = 0x1; // Comparator 6 enable
    typedef bit_field_t<4, 0x7> COMP6_CSR_COMP6INMSEL; // Comparator 6 inverting input selection
    typedef bit_field_t<10, 0xf> COMP6_CSR_COMP6OUTSEL; // Comparator 6 output selection
    static constexpr uint32_t COMP6_CSR_COMP6POL = 0x8000; // Comparator 6 output polarity
    typedef bit_field_t<18, 0x7> COMP6_CSR_COMP6_BLANKING; // Comparator 6 blanking source
    static constexpr uint32_t COMP6_CSR_COMP6INMSEL3 = 0x400000; // Comparator 6 inverting input selection. It is used with Bits [6..4] to configure the Comp inverting input
    static constexpr uint32_t COMP6_CSR_COMP6OUT = 0x40000000; // Comparator 6 output
    static constexpr uint32_t COMP6_CSR_COMP6LOCK = 0x80000000; // Comparator 6 lock


    static constexpr uint32_t OPAMP2_CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OPAMP2_CSR_OPAMP2EN = 0x1; // OPAMP2 enable
    static constexpr uint32_t OPAMP2_CSR_FORCE_VP = 0x2; // FORCE_VP
    typedef bit_field_t<2, 0x3> OPAMP2_CSR_VP_SEL; // OPAMP2 Non inverting input selection
    typedef bit_field_t<5, 0x3> OPAMP2_CSR_VM_SEL; // OPAMP2 inverting input selection
    static constexpr uint32_t OPAMP2_CSR_TCM_EN = 0x80; // Timer controlled Mux mode enable
    static constexpr uint32_t OPAMP2_CSR_VMS_SEL = 0x100; // OPAMP2 inverting input secondary selection
    typedef bit_field_t<9, 0x3> OPAMP2_CSR_VPS_SEL; // OPAMP2 Non inverting input secondary selection
    static constexpr uint32_t OPAMP2_CSR_CALON = 0x800; // Calibration mode enable
    typedef bit_field_t<12, 0x3> OPAMP2_CSR_CAL_SEL; // Calibration selection
    typedef bit_field_t<14, 0xf> OPAMP2_CSR_PGA_GAIN; // Gain in PGA mode
    static constexpr uint32_t OPAMP2_CSR_USER_TRIM = 0x40000; // User trimming enable
    typedef bit_field_t<19, 0x1f> OPAMP2_CSR_TRIMOFFSETP; // Offset trimming value (PMOS)
    typedef bit_field_t<24, 0x1f> OPAMP2_CSR_TRIMOFFSETN; // Offset trimming value (NMOS)
    static constexpr uint32_t OPAMP2_CSR_TSTREF = 0x20000000; // TSTREF
    static constexpr uint32_t OPAMP2_CSR_OUTCAL = 0x40000000; // OPAMP 2 ouput status flag
    static constexpr uint32_t OPAMP2_CSR_LOCK = 0x80000000; // OPAMP 2 lock


    static constexpr uint32_t CFGR3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR3_DAC1_TRIG5_RMP = 0x20000; // DAC1_CH1 / DAC1_CH2 Trigger remap
    static constexpr uint32_t CFGR3_DAC1_TRIG3_RMP = 0x10000; // DAC1_CH1 / DAC1_CH2 Trigger remap
    static constexpr uint32_t CFGR3_ADC2_DMA_RMP_1 = 0x200; // ADC2 DMA controller remapping bit
    typedef bit_field_t<6, 0x3> CFGR3_ADC2_DMA_RMP_0; // ADC2 DMA channel remapping bit
    typedef bit_field_t<4, 0x3> CFGR3_I2C1_RX_DMA_RMP; // I2C1_RX DMA remapping bit
    typedef bit_field_t<2, 0x3> CFGR3_SPI1_TX_DMA_RMP; // SPI1_TX DMA remapping bit
    typedef bit_field_t<0, 0x3> CFGR3_SPI1_RX_DMA_RMP; // SPI1_RX DMA remapping bit
};

template<>
struct peripheral_t<STM32F301, SYSCFG>
{
    static constexpr periph_t P = SYSCFG;
    using T = stm32f301_syscfg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F302, SYSCFG>
{
    static constexpr periph_t P = SYSCFG;
    using T = stm32f301_syscfg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F373, SYSCFG>
{
    static constexpr periph_t P = SYSCFG;
    using T = stm32f301_syscfg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F3x8, SYSCFG>
{
    static constexpr periph_t P = SYSCFG;
    using T = stm32f301_syscfg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F303, SYSCFG>
{
    static constexpr periph_t P = SYSCFG;
    using T = stm32f303_syscfg_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F3x4, SYSCFG>
{
    static constexpr periph_t P = SYSCFG;
    using T = stm32f3x4_syscfg_t;
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
    }
};
