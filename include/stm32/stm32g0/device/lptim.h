#pragma once

////
//
//      STM32G0 LPTIM peripherals
//
///

// LPTIM1: Low power timer

struct stm32g031_lptim1_t
{
    volatile uint32_t ISR; // Interrupt and Status Register
    volatile uint32_t ICR; // Interrupt Clear Register
    volatile uint32_t IER; // Interrupt Enable Register
    volatile uint32_t CFGR; // Configuration Register
    volatile uint32_t CR; // Control Register
    volatile uint32_t CMP; // Compare Register
    volatile uint32_t ARR; // Autoreload Register
    volatile uint32_t CNT; // Counter Register
    reserved_t<0x1> _0x20;
    volatile uint32_t CFGR2; // LPTIM configuration register 2

    static constexpr uint32_t ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ISR_DOWN = 0x40; // Counter direction change up to down
    static constexpr uint32_t ISR_UP = 0x20; // Counter direction change down to up
    static constexpr uint32_t ISR_ARROK = 0x10; // Autoreload register update OK
    static constexpr uint32_t ISR_CMPOK = 0x8; // Compare register update OK
    static constexpr uint32_t ISR_EXTTRIG = 0x4; // External trigger edge event
    static constexpr uint32_t ISR_ARRM = 0x2; // Autoreload match
    static constexpr uint32_t ISR_CMPM = 0x1; // Compare match

    static constexpr uint32_t ICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ICR_DOWNCF = 0x40; // Direction change to down Clear Flag
    static constexpr uint32_t ICR_UPCF = 0x20; // Direction change to UP Clear Flag
    static constexpr uint32_t ICR_ARROKCF = 0x10; // Autoreload register update OK Clear Flag
    static constexpr uint32_t ICR_CMPOKCF = 0x8; // Compare register update OK Clear Flag
    static constexpr uint32_t ICR_EXTTRIGCF = 0x4; // External trigger valid edge Clear Flag
    static constexpr uint32_t ICR_ARRMCF = 0x2; // Autoreload match Clear Flag
    static constexpr uint32_t ICR_CMPMCF = 0x1; // compare match Clear Flag

    static constexpr uint32_t IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IER_DOWNIE = 0x40; // Direction change to down Interrupt Enable
    static constexpr uint32_t IER_UPIE = 0x20; // Direction change to UP Interrupt Enable
    static constexpr uint32_t IER_ARROKIE = 0x10; // Autoreload register update OK Interrupt Enable
    static constexpr uint32_t IER_CMPOKIE = 0x8; // Compare register update OK Interrupt Enable
    static constexpr uint32_t IER_EXTTRIGIE = 0x4; // External trigger valid edge Interrupt Enable
    static constexpr uint32_t IER_ARRMIE = 0x2; // Autoreload match Interrupt Enable
    static constexpr uint32_t IER_CMPMIE = 0x1; // Compare match Interrupt Enable

    static constexpr uint32_t CFGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CFGR_ENC = 0x1000000; // Encoder mode enable
    static constexpr uint32_t CFGR_COUNTMODE = 0x800000; // counter mode enabled
    static constexpr uint32_t CFGR_PRELOAD = 0x400000; // Registers update mode
    static constexpr uint32_t CFGR_WAVPOL = 0x200000; // Waveform shape polarity
    static constexpr uint32_t CFGR_WAVE = 0x100000; // Waveform shape
    static constexpr uint32_t CFGR_TIMOUT = 0x80000; // Timeout enable
    typedef bit_field_t<17, 0x3> CFGR_TRIGEN; // Trigger enable and polarity
    typedef bit_field_t<13, 0x7> CFGR_TRIGSEL; // Trigger selector
    typedef bit_field_t<9, 0x7> CFGR_PRESC; // Clock prescaler
    typedef bit_field_t<6, 0x3> CFGR_TRGFLT; // Configurable digital filter for trigger
    typedef bit_field_t<3, 0x3> CFGR_CKFLT; // Configurable digital filter for external clock
    typedef bit_field_t<1, 0x3> CFGR_CKPOL; // Clock Polarity
    static constexpr uint32_t CFGR_CKSEL = 0x1; // Clock selector

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_RSTARE = 0x10; // Reset after read enable
    static constexpr uint32_t CR_COUNTRST = 0x8; // Counter reset
    static constexpr uint32_t CR_CNTSTRT = 0x4; // Timer start in continuous mode
    static constexpr uint32_t CR_SNGSTRT = 0x2; // LPTIM start in single mode
    static constexpr uint32_t CR_ENABLE = 0x1; // LPTIM Enable

    static constexpr uint32_t CMP_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CMP_CMP; // Compare value

    static constexpr uint32_t ARR_RESET_VALUE = 0x1; // Reset value
    typedef bit_field_t<0, 0xffff> ARR_ARR; // Auto reload value

    static constexpr uint32_t CNT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> CNT_CNT; // Counter value


    static constexpr uint32_t CFGR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<4, 0x3> CFGR2_IN2SEL; // LPTIM1 Input 2 selection
    typedef bit_field_t<0, 0x3> CFGR2_IN1SEL; // LPTIMx Input 1 selection
};

// LPTIM1: Low power timer

struct stm32g051_lptim1_t
{
    volatile uint32_t LPTIM_ISR; // Interrupt and Status Register
    volatile uint32_t LPTIM_ICR; // Interrupt Clear Register
    volatile uint32_t LPTIM_IER; // Interrupt Enable Register
    volatile uint32_t LPTIM_CFGR; // Configuration Register
    volatile uint32_t LPTIM_CR; // Control Register
    volatile uint32_t LPTIM_CMP; // Compare Register
    volatile uint32_t LPTIM_ARR; // Autoreload Register
    volatile uint32_t LPTIM_CNT; // Counter Register
    reserved_t<0x1> _0x20;
    volatile uint32_t LPTIM_CFGR2; // LPTIM configuration register 2

    static constexpr uint32_t LPTIM_ISR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t LPTIM_ISR_CMPM = 0x1; // Compare match The CMPM bit is set by hardware to inform application that LPTIM_CNT register value reached the LPTIM_CMP registers value.
    static constexpr uint32_t LPTIM_ISR_ARRM = 0x2; // Autoreload match ARRM is set by hardware to inform application that LPTIM_CNT registers value reached the LPTIM_ARR registers value. ARRM flag can be cleared by writing 1 to the ARRMCF bit in the LPTIM_ICR register.
    static constexpr uint32_t LPTIM_ISR_EXTTRIG = 0x4; // External trigger edge event EXTTRIG is set by hardware to inform application that a valid edge on the selected external trigger input has occurred. If the trigger is ignored because the timer has already started, then this flag is not set. EXTTRIG flag can be cleared by writing 1 to the EXTTRIGCF bit in the LPTIM_ICR register.
    static constexpr uint32_t LPTIM_ISR_CMPOK = 0x8; // Compare register update OK CMPOK is set by hardware to inform application that the APB bus write operation to the LPTIM_CMP register has been successfully completed.
    static constexpr uint32_t LPTIM_ISR_ARROK = 0x10; // Autoreload register update OK ARROK is set by hardware to inform application that the APB bus write operation to the LPTIM_ARR register has been successfully completed. ARROK flag can be cleared by writing 1 to the ARROKCF bit in the LPTIM_ICR register.
    static constexpr uint32_t LPTIM_ISR_UP = 0x20; // Counter direction change down to up In Encoder mode, UP bit is set by hardware to inform application that the counter direction has changed from down to up. UP flag can be cleared by writing 1 to the UPCF bit in the LPTIM_ICR register. Note: If the LPTIM does not support encoder mode feature, this bit is reserved. Please refer to .
    static constexpr uint32_t LPTIM_ISR_DOWN = 0x40; // Counter direction change up to down In Encoder mode, DOWN bit is set by hardware to inform application that the counter direction has changed from up to down. DOWN flag can be cleared by writing 1 to the DOWNCF bit in the LPTIM_ICR register. Note: If the LPTIM does not support encoder mode feature, this bit is reserved. Please refer to .

    static constexpr uint32_t LPTIM_ICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t LPTIM_ICR_CMPMCF = 0x1; // Compare match clear flag Writing 1 to this bit clears the CMP flag in the LPTIM_ISR register
    static constexpr uint32_t LPTIM_ICR_ARRMCF = 0x2; // Autoreload match clear flag Writing 1 to this bit clears the ARRM flag in the LPTIM_ISR register
    static constexpr uint32_t LPTIM_ICR_EXTTRIGCF = 0x4; // External trigger valid edge clear flag Writing 1 to this bit clears the EXTTRIG flag in the LPTIM_ISR register
    static constexpr uint32_t LPTIM_ICR_CMPOKCF = 0x8; // Compare register update OK clear flag Writing 1 to this bit clears the CMPOK flag in the LPTIM_ISR register
    static constexpr uint32_t LPTIM_ICR_ARROKCF = 0x10; // Autoreload register update OK clear flag Writing 1 to this bit clears the ARROK flag in the LPTIM_ISR register
    static constexpr uint32_t LPTIM_ICR_UPCF = 0x20; // Direction change to UP clear flag Writing 1 to this bit clear the UP flag in the LPTIM_ISR register. Note: If the LPTIM does not support encoder mode feature, this bit is reserved. Please refer to .
    static constexpr uint32_t LPTIM_ICR_DOWNCF = 0x40; // Direction change to down clear flag Writing 1 to this bit clear the DOWN flag in the LPTIM_ISR register. Note: If the LPTIM does not support encoder mode feature, this bit is reserved. Please refer to .

    static constexpr uint32_t LPTIM_IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t LPTIM_IER_CMPMIE = 0x1; // Compare match Interrupt Enable
    static constexpr uint32_t LPTIM_IER_ARRMIE = 0x2; // Autoreload match Interrupt Enable
    static constexpr uint32_t LPTIM_IER_EXTTRIGIE = 0x4; // External trigger valid edge Interrupt Enable
    static constexpr uint32_t LPTIM_IER_CMPOKIE = 0x8; // Compare register update OK Interrupt Enable
    static constexpr uint32_t LPTIM_IER_ARROKIE = 0x10; // Autoreload register update OK Interrupt Enable
    static constexpr uint32_t LPTIM_IER_UPIE = 0x20; // Direction change to UP Interrupt Enable Note: If the LPTIM does not support encoder mode feature, this bit is reserved. Please refer to .
    static constexpr uint32_t LPTIM_IER_DOWNIE = 0x40; // Direction change to down Interrupt Enable Note: If the LPTIM does not support encoder mode feature, this bit is reserved. Please refer to .

    static constexpr uint32_t LPTIM_CFGR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t LPTIM_CFGR_CKSEL = 0x1; // Clock selector The CKSEL bit selects which clock source the LPTIM will use:
    typedef bit_field_t<1, 0x3> LPTIM_CFGR_CKPOL; // Clock Polarity If LPTIM is clocked by an external clock source: When the LPTIM is clocked by an external clock source, CKPOL bits is used to configure the active edge or edges used by the counter: If the LPTIM is configured in Encoder mode (ENC bit is set), the encoder sub-mode 1 is active. If the LPTIM is configured in Encoder mode (ENC bit is set), the encoder sub-mode 2 is active. Refer to for more details about Encoder mode sub-modes.
    typedef bit_field_t<3, 0x3> LPTIM_CFGR_CKFLT; // Configurable digital filter for external clock The CKFLT value sets the number of consecutive equal samples that should be detected when a level change occurs on an external clock signal before it is considered as a valid level transition. An internal clock source must be present to use this feature
    typedef bit_field_t<6, 0x3> LPTIM_CFGR_TRGFLT; // Configurable digital filter for trigger The TRGFLT value sets the number of consecutive equal samples that should be detected when a level change occurs on an internal trigger before it is considered as a valid level transition. An internal clock source must be present to use this feature
    typedef bit_field_t<9, 0x7> LPTIM_CFGR_PRESC; // Clock prescaler The PRESC bits configure the prescaler division factor. It can be one among the following division factors:
    typedef bit_field_t<13, 0x7> LPTIM_CFGR_TRIGSEL; // Trigger selector The TRIGSEL bits select the trigger source that will serve as a trigger event for the LPTIM among the below 8 available sources: See for details.
    typedef bit_field_t<17, 0x3> LPTIM_CFGR_TRIGEN; // Trigger enable and polarity The TRIGEN bits controls whether the LPTIM counter is started by an external trigger or not. If the external trigger option is selected, three configurations are possible for the trigger active edge:
    static constexpr uint32_t LPTIM_CFGR_TIMOUT = 0x80000; // Timeout enable The TIMOUT bit controls the Timeout feature
    static constexpr uint32_t LPTIM_CFGR_WAVE = 0x100000; // Waveform shape The WAVE bit controls the output shape
    static constexpr uint32_t LPTIM_CFGR_WAVPOL = 0x200000; // Waveform shape polarity The WAVEPOL bit controls the output polarity
    static constexpr uint32_t LPTIM_CFGR_PRELOAD = 0x400000; // Registers update mode The PRELOAD bit controls the LPTIM_ARR and the LPTIM_CMP registers update modality
    static constexpr uint32_t LPTIM_CFGR_COUNTMODE = 0x800000; // counter mode enabled The COUNTMODE bit selects which clock source is used by the LPTIM to clock the counter:
    static constexpr uint32_t LPTIM_CFGR_ENC = 0x1000000; // Encoder mode enable The ENC bit controls the Encoder mode Note: If the LPTIM does not support encoder mode feature, this bit is reserved. Please refer to .

    static constexpr uint32_t LPTIM_CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t LPTIM_CR_ENABLE = 0x1; // LPTIM enable The ENABLE bit is set and cleared by software.
    static constexpr uint32_t LPTIM_CR_SNGSTRT = 0x2; // LPTIM start in Single mode This bit is set by software and cleared by hardware. In case of software start (TRIGEN[1:0] = &#39;00), setting this bit starts the LPTIM in single pulse mode. If the software start is disabled (TRIGEN[1:0] different than &#39;00), setting this bit starts the LPTIM in single pulse mode as soon as an external trigger is detected. If this bit is set when the LPTIM is in continuous counting mode, then the LPTIM will stop at the following match between LPTIM_ARR and LPTIM_CNT registers. This bit can only be set when the LPTIM is enabled. It will be automatically reset by hardware.
    static constexpr uint32_t LPTIM_CR_CNTSTRT = 0x4; // Timer start in Continuous mode This bit is set by software and cleared by hardware. In case of software start (TRIGEN[1:0] = &#39;00), setting this bit starts the LPTIM in Continuous mode. If the software start is disabled (TRIGEN[1:0] different than &#39;00), setting this bit starts the timer in Continuous mode as soon as an external trigger is detected. If this bit is set when a single pulse mode counting is ongoing, then the timer will not stop at the next match between the LPTIM_ARR and LPTIM_CNT registers and the LPTIM counter keeps counting in Continuous mode. This bit can be set only when the LPTIM is enabled. It will be automatically reset by hardware.
    static constexpr uint32_t LPTIM_CR_COUNTRST = 0x8; // Counter reset This bit is set by software and cleared by hardware. When set to &#39;1&#39; this bit will trigger a synchronous reset of the LPTIM_CNT counter register. Due to the synchronous nature of this reset, it only takes place after a synchronization delay of 3 LPTimer core clock cycles (LPTimer core clock may be different from APB clock). COUNTRST must never be set to &#39;1&#39; by software before it is already cleared to &#39;0&#39; by hardware. Software should consequently check that COUNTRST bit is already cleared to &#39;0&#39; before attempting to set it to &#39;1&#39;.
    static constexpr uint32_t LPTIM_CR_RSTARE = 0x10; // Reset after read enable This bit is set and cleared by software. When RSTARE is set to &#39;1&#39;, any read access to LPTIM_CNT register will asynchronously reset LPTIM_CNT register content.

    static constexpr uint32_t LPTIM_CMP_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> LPTIM_CMP_CMP; // Compare value

    static constexpr uint32_t LPTIM_ARR_RESET_VALUE = 0x1; // Reset value
    typedef bit_field_t<0, 0xffff> LPTIM_ARR_ARR; // Auto reload value

    static constexpr uint32_t LPTIM_CNT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> LPTIM_CNT_CNT; // Counter value


    static constexpr uint32_t LPTIM_CFGR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> LPTIM_CFGR2_IN1SEL; // LPTIM input 1 selection The IN1SEL bits control the LPTIM Input 1 multiplexer, which connects LPTIM Input 1 to one of the available inputs. For connection details refer to .
    typedef bit_field_t<4, 0x3> LPTIM_CFGR2_IN2SEL; // LPTIM input 2 selection The IN2SEL bits control the LPTIM Input 2 multiplexer, which connect LPTIM Input 2 to one of the available inputs. For connection details refer to . Note: If the LPTIM does not support encoder mode feature, these bits are reserved. Please refer to .
};

template<>
struct peripheral_t<STM32G031, LPTIM1>
{
    static constexpr periph_t P = LPTIM1;
    using T = stm32g031_lptim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G031, LPTIM2>
{
    static constexpr periph_t P = LPTIM2;
    using T = stm32g031_lptim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G041, LPTIM1>
{
    static constexpr periph_t P = LPTIM1;
    using T = stm32g031_lptim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G041, LPTIM2>
{
    static constexpr periph_t P = LPTIM2;
    using T = stm32g031_lptim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G070, LPTIM1>
{
    static constexpr periph_t P = LPTIM1;
    using T = stm32g031_lptim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G070, LPTIM2>
{
    static constexpr periph_t P = LPTIM2;
    using T = stm32g031_lptim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G071, LPTIM1>
{
    static constexpr periph_t P = LPTIM1;
    using T = stm32g031_lptim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G071, LPTIM2>
{
    static constexpr periph_t P = LPTIM2;
    using T = stm32g031_lptim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G081, LPTIM1>
{
    static constexpr periph_t P = LPTIM1;
    using T = stm32g031_lptim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G081, LPTIM2>
{
    static constexpr periph_t P = LPTIM2;
    using T = stm32g031_lptim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G051, LPTIM1>
{
    static constexpr periph_t P = LPTIM1;
    using T = stm32g051_lptim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G051, LPTIM2>
{
    static constexpr periph_t P = LPTIM2;
    using T = stm32g051_lptim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G061, LPTIM1>
{
    static constexpr periph_t P = LPTIM1;
    using T = stm32g051_lptim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G061, LPTIM2>
{
    static constexpr periph_t P = LPTIM2;
    using T = stm32g051_lptim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0B1, LPTIM1>
{
    static constexpr periph_t P = LPTIM1;
    using T = stm32g051_lptim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0B1, LPTIM2>
{
    static constexpr periph_t P = LPTIM2;
    using T = stm32g051_lptim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0C1, LPTIM1>
{
    static constexpr periph_t P = LPTIM1;
    using T = stm32g051_lptim1_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G0C1, LPTIM2>
{
    static constexpr periph_t P = LPTIM2;
    using T = stm32g051_lptim1_t;
    static T& V;
};

using lptim1_t = peripheral_t<svd, LPTIM1>;
using lptim2_t = peripheral_t<svd, LPTIM2>;

template<int INST> struct lptim_traits {};

template<> struct lptim_traits<1>
{
    using lptim = lptim1_t;
    static constexpr signal_t ETR = LPTIM1_ETR;
    static constexpr signal_t IN1 = LPTIM1_IN1;
    static constexpr signal_t IN2 = LPTIM1_IN2;
    static constexpr signal_t OUT = LPTIM1_OUT;
    static constexpr clock_source_t CLOCK = APB1_TIMER;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR |= RCC::T::APB1ENR_LPTIM1EN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR &= ~RCC::T::APB1ENR_LPTIM1EN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.APB1SMENR |= RCC::T::APB1SMENR_LPTIM1SMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.APB1SMENR &= ~RCC::T::APB1SMENR_LPTIM1SMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR |= RCC::T::APB1RSTR_LPTIM1RST;
    }
};

template<> struct lptim_traits<2>
{
    using lptim = lptim2_t;
    static constexpr signal_t ETR = LPTIM2_ETR;
    static constexpr signal_t IN1 = LPTIM2_IN1;
    static constexpr signal_t OUT = LPTIM2_OUT;
    static constexpr clock_source_t CLOCK = APB1_TIMER;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR |= RCC::T::APB1ENR_LPTIM2EN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR &= ~RCC::T::APB1ENR_LPTIM2EN;
    }

    template<typename RCC>
    static void enable_sleep_mode()
    {
        RCC::V.APB1SMENR |= RCC::T::APB1SMENR_LPTIM2SMEN;
    }

    template<typename RCC>
    static void disable_sleep_mode()
    {
        RCC::V.APB1SMENR &= ~RCC::T::APB1SMENR_LPTIM2SMEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR |= RCC::T::APB1RSTR_LPTIM2RST;
    }
};
