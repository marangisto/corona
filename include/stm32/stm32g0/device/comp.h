#pragma once

////
//
//      STM32G0 COMP peripherals
//
///

// COMP: Comparator

struct stm32g0b1_comp_t
{
    volatile uint32_t COMP1_CSR; // Comparator 1 control and status register
    volatile uint32_t COMP2_CSR; // Comparator 2 control and status register
    volatile uint32_t COMP3_CSR; // Comparator 2 control and status register

    static constexpr uint32_t COMP1_CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t COMP1_CSR_EN = 0x1; // Comparator 1 enable bit This bit is controlled by software (if not locked). It enables the comparator 1:
    typedef bit_field_t<4, 0xf> COMP1_CSR_INMSEL; // Comparator 1 signal selector for inverting input INM This bitfield is controlled by software (if not locked). It selects the signal for the inverting input COMP1_INM of the comparator 1: &gt; 1000: 1/4 VREFINT
    typedef bit_field_t<8, 0x3> COMP1_CSR_INPSEL; // Comparator 1 signal selector for non-inverting input This bitfield is controlled by software (if not locked). It selects the signal for the non-inverting input COMP1_INP of the comparator 1 (also see the WINMODE bit):
    static constexpr uint32_t COMP1_CSR_WINMODE = 0x800; // Comparator 1 non-inverting input selector for window mode This bit is controlled by software (if not locked). It selects the signal for COMP1_INP input of the comparator 1:
    static constexpr uint32_t COMP1_CSR_WINOUT = 0x4000; // Comparator 1 output selector This bit is controlled by software (if not locked). It selects the comparator 1 output:
    static constexpr uint32_t COMP1_CSR_POLARITY = 0x8000; // Comparator 1 polarity selector This bit is controlled by software (if not locked). It selects the comparator 1 output polarity:
    typedef bit_field_t<16, 0x3> COMP1_CSR_HYST; // Comparator 1 hysteresis selector This bitfield is controlled by software (if not locked). It selects the hysteresis of the comparator 1:
    typedef bit_field_t<18, 0x3> COMP1_CSR_PWRMODE; // Comparator 1 power mode selector This bitfield is controlled by software (if not locked). It selects the power consumption and as a consequence the speed of the comparator 1: others: Reserved
    typedef bit_field_t<20, 0x1f> COMP1_CSR_BLANKSEL; // Comparator 1 blanking source selector This bitfield is controlled by software (if not locked). It selects the blanking source: xxxx1: TIM1 OC4 xxx1x: TIM1 OC5 xx1xx: TIM2 OC3 x1xxx: TIM3 OC3 1xxxx: TIM15 OC2
    static constexpr uint32_t COMP1_CSR_VALUE = 0x40000000; // Comparator 1 output status This bit is read-only. It reflects the level of the comparator 1 output after the polarity selector and blanking, as indicated in .
    static constexpr uint32_t COMP1_CSR_LOCK = 0x80000000; // COMP1_CSR register lock This bit is set by software and cleared by a system reset. It locks the whole content of the comparator 1 control register COMP1_CSR[31:0]:

    static constexpr uint32_t COMP2_CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t COMP2_CSR_EN = 0x1; // Comparator 2 enable bit This bit is controlled by software (if not locked). It enables the comparator 2:
    typedef bit_field_t<4, 0xf> COMP2_CSR_INMSEL; // Comparator 2 signal selector for inverting input INM This bitfield is controlled by software (if not locked). It selects the signal for the inverting input COMP2_INM of the comparator 2: &gt; 1000: 1/4 VREFINT
    typedef bit_field_t<8, 0x3> COMP2_CSR_INPSEL; // Comparator 2 signal selector for non-inverting input This bitfield is controlled by software (if not locked). It selects the signal for the non-inverting input COMP2_INP of the comparator 2 (also see the WINMODE bit):
    static constexpr uint32_t COMP2_CSR_WINMODE = 0x800; // Comparator 2 non-inverting input selector for window mode This bit is controlled by software (if not locked). It selects the signal for COMP2_INP input of the comparator 2:
    static constexpr uint32_t COMP2_CSR_WINOUT = 0x4000; // Comparator 2 output selector This bit is controlled by software (if not locked). It selects the comparator 2 output:
    static constexpr uint32_t COMP2_CSR_POLARITY = 0x8000; // Comparator 2 polarity selector This bit is controlled by software (if not locked). It selects the comparator 2 output polarity:
    typedef bit_field_t<16, 0x3> COMP2_CSR_HYST; // Comparator 2 hysteresis selector This bitfield is controlled by software (if not locked). It selects the hysteresis of the comparator 2:
    typedef bit_field_t<18, 0x3> COMP2_CSR_PWRMODE; // Comparator 2 power mode selector This bitfield is controlled by software (if not locked). It selects the power consumption and as a consequence the speed of the comparator 2: others: Reserved
    typedef bit_field_t<20, 0x1f> COMP2_CSR_BLANKSEL; // Comparator 2 blanking source selector This bitfield is controlled by software (if not locked). It selects the blanking source: xxxx1: TIM1 OC4 xxx1x: TIM1 OC5 xx1xx: TIM2 OC3 x1xxx: TIM3 OC3 1xxxx: TIM15 OC2
    static constexpr uint32_t COMP2_CSR_VALUE = 0x40000000; // Comparator 2 output status This bit is read-only. It reflects the level of the comparator 2 output after the polarity selector and blanking, as indicated in .
    static constexpr uint32_t COMP2_CSR_LOCK = 0x80000000; // COMP2_CSR register lock This bit is set by software and cleared by a system reset. It locks the whole content of the comparator 2 control register COMP2_CSR[31:0]:

    static constexpr uint32_t COMP3_CSR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t COMP3_CSR_EN = 0x1; // Comparator 3 enable bit This bit is controlled by software (if not locked). It enables the comparator 3:
    typedef bit_field_t<4, 0xf> COMP3_CSR_INMSEL; // Comparator 3 signal selector for inverting input INM This bitfield is controlled by software (if not locked). It selects the signal for the inverting input COMP3_INM of the comparator 3: &gt; 1000: 1/4 VREFINT
    typedef bit_field_t<8, 0x3> COMP3_CSR_INPSEL; // Comparator 3 signal selector for non-inverting input This bitfield is controlled by software (if not locked). It selects the signal for the non-inverting input COMP3_INP of the comparator 3 (also see the WINMODE bit):
    static constexpr uint32_t COMP3_CSR_WINMODE = 0x800; // Comparator 3 non-inverting input selector for window mode This bit is controlled by software (if not locked). It selects the signal for COMP3_INP input of the comparator 3:
    static constexpr uint32_t COMP3_CSR_WINOUT = 0x4000; // Comparator 3 output selector This bit is controlled by software (if not locked). It selects the comparator 3 output:
    static constexpr uint32_t COMP3_CSR_POLARITY = 0x8000; // Comparator 2 polarity selector This bit is controlled by software (if not locked). It selects the comparator 3 output polarity:
    typedef bit_field_t<16, 0x3> COMP3_CSR_HYST; // Comparator 3 hysteresis selector This bitfield is controlled by software (if not locked). It selects the hysteresis of the comparator 3:
    typedef bit_field_t<18, 0x3> COMP3_CSR_PWRMODE; // Comparator 3 power mode selector This bitfield is controlled by software (if not locked). It selects the power consumption and as a consequence the speed of the comparator 3: others: Reserved
    typedef bit_field_t<20, 0x1f> COMP3_CSR_BLANKSEL; // Comparator 3 blanking source selector This bitfield is controlled by software (if not locked). It selects the blanking source: xxxx1: TIM1 OC4 xxx1x: TIM1 OC5 xx1xx: TIM2 OC3 x1xxx: TIM3 OC3 1xxxx: TIM15 OC2
    static constexpr uint32_t COMP3_CSR_VALUE = 0x40000000; // Comparator 3 output status This bit is read-only. It reflects the level of the comparator 2 output after the polarity selector and blanking, as indicated in .
    static constexpr uint32_t COMP3_CSR_LOCK = 0x80000000; // COMP3_CSR register lock This bit is set by software and cleared by a system reset. It locks the whole content of the comparator 3 control register COMP3_CSR[31:0]:
};

template<>
struct peripheral_t<STM32G0B1, COMP>
{
    static constexpr periph_t P = COMP;
    using T = stm32g0b1_comp_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0C1, COMP>
{
    static constexpr periph_t P = COMP;
    using T = stm32g0b1_comp_t;
    static T& V;
};

using comp_t = peripheral_t<svd, COMP>;
