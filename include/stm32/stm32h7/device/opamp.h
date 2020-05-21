#pragma once

////
//
//      STM32H7 OPAMP peripherals
//
////

////
//
//      Operational amplifiers
//
////

struct stm32h742x_opamp_t
{
    volatile uint32_t OPAMP1_CSR;   // [read-write] OPAMP1 control/status register
    volatile uint32_t OPAMP1_OTR;   // [read-write] OPAMP1 offset trimming register in normal mode
    volatile uint32_t OPAMP1_HSOTR; // [read-write] OPAMP1 offset trimming register in low-power mode
    reserved_t<0x1> _0x10;
    volatile uint32_t OPAMP2_CSR;   // [read-write] OPAMP2 control/status register
    volatile uint32_t OPAMP2_OTR;   // [read-write] OPAMP2 offset trimming register in normal mode
    volatile uint32_t OPAMP2_HSOTR; // [read-write] OPAMP2 offset trimming register in low-power mode

    static constexpr uint32_t OPAMP1_CSR_RESET_VALUE = 0x0;
    static constexpr uint32_t OPAMP1_CSR_OPAEN = 0x1;         // Operational amplifier Enable
    static constexpr uint32_t OPAMP1_CSR_FORCE_VP = 0x2;      // Force internal reference on VP (reserved for test
    template<uint32_t X>
    static constexpr uint32_t OPAMP1_CSR_VP_SEL =             // Operational amplifier PGA mode
        bit_field_t<2, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OPAMP1_CSR_VM_SEL =             // Inverting input selection
        bit_field_t<5, 0x3>::value<X>();
    static constexpr uint32_t OPAMP1_CSR_OPAHSM = 0x100;      // Operational amplifier high-speed mode
    static constexpr uint32_t OPAMP1_CSR_CALON = 0x800;       // Calibration mode enabled
    template<uint32_t X>
    static constexpr uint32_t OPAMP1_CSR_CALSEL =             // Calibration selection
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OPAMP1_CSR_PGA_GAIN =           // allows to switch from AOP offset trimmed values to AOP offset
        bit_field_t<14, 0xf>::value<X>();
    static constexpr uint32_t OPAMP1_CSR_USERTRIM = 0x40000;  // User trimming enable
    static constexpr uint32_t OPAMP1_CSR_TSTREF = 0x20000000; // OPAMP calibration reference voltage output control (reserved for test)
    static constexpr uint32_t OPAMP1_CSR_CALOUT = 0x40000000; // Operational amplifier calibration output

    static constexpr uint32_t OPAMP1_OTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OPAMP1_OTR_TRIMOFFSETN =   // Trim for NMOS differential pairs
        bit_field_t<0, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OPAMP1_OTR_TRIMOFFSETP =   // Trim for PMOS differential pairs
        bit_field_t<8, 0x1f>::value<X>();

    static constexpr uint32_t OPAMP1_HSOTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OPAMP1_HSOTR_TRIMLPOFFSETN =   // Trim for NMOS differential pairs
        bit_field_t<0, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OPAMP1_HSOTR_TRIMLPOFFSETP =   // Trim for PMOS differential pairs
        bit_field_t<8, 0x1f>::value<X>();

    static constexpr uint32_t OPAMP2_CSR_RESET_VALUE = 0x0;
    static constexpr uint32_t OPAMP2_CSR_OPAEN = 0x1;         // Operational amplifier Enable
    static constexpr uint32_t OPAMP2_CSR_FORCE_VP = 0x2;      // Force internal reference on VP (reserved for test)
    template<uint32_t X>
    static constexpr uint32_t OPAMP2_CSR_VM_SEL =             // Inverting input selection
        bit_field_t<5, 0x3>::value<X>();
    static constexpr uint32_t OPAMP2_CSR_OPAHSM = 0x100;      // Operational amplifier high-speed mode
    static constexpr uint32_t OPAMP2_CSR_CALON = 0x800;       // Calibration mode enabled
    template<uint32_t X>
    static constexpr uint32_t OPAMP2_CSR_CALSEL =             // Calibration selection
        bit_field_t<12, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OPAMP2_CSR_PGA_GAIN =           // Operational amplifier Programmable amplifier gain value
        bit_field_t<14, 0xf>::value<X>();
    static constexpr uint32_t OPAMP2_CSR_USERTRIM = 0x40000;  // User trimming enable
    static constexpr uint32_t OPAMP2_CSR_TSTREF = 0x20000000; // OPAMP calibration reference voltage output control (reserved for test)
    static constexpr uint32_t OPAMP2_CSR_CALOUT = 0x40000000; // Operational amplifier calibration output

    static constexpr uint32_t OPAMP2_OTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OPAMP2_OTR_TRIMOFFSETN =   // Trim for NMOS differential pairs
        bit_field_t<0, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OPAMP2_OTR_TRIMOFFSETP =   // Trim for PMOS differential pairs
        bit_field_t<8, 0x1f>::value<X>();

    static constexpr uint32_t OPAMP2_HSOTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t OPAMP2_HSOTR_TRIMLPOFFSETN =   // Trim for NMOS differential pairs
        bit_field_t<0, 0x1f>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t OPAMP2_HSOTR_TRIMLPOFFSETP =   // Trim for PMOS differential pairs
        bit_field_t<8, 0x1f>::value<X>();
};


template<>
struct peripheral_t<STM32H742x, OPAMP>
{
    typedef stm32h742x_opamp_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, OPAMP>
{
    typedef stm32h742x_opamp_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, OPAMP>
{
    typedef stm32h742x_opamp_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, OPAMP>
{
    typedef stm32h742x_opamp_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, OPAMP>
{
    typedef stm32h742x_opamp_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, OPAMP>
{
    typedef stm32h742x_opamp_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, OPAMP>
{
    typedef stm32h742x_opamp_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, OPAMP>
{
    typedef stm32h742x_opamp_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, OPAMP>
{
    typedef stm32h742x_opamp_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, OPAMP>
{
    typedef stm32h742x_opamp_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, OPAMP>
{
    typedef stm32h742x_opamp_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, OPAMP>
{
    typedef stm32h742x_opamp_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, OPAMP>
{
    typedef stm32h742x_opamp_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, OPAMP>
{
    typedef stm32h742x_opamp_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, OPAMP>
{
    typedef stm32h742x_opamp_t T;
    static T& V;
};

using opamp_t = peripheral_t<mcu_svd, OPAMP>;

