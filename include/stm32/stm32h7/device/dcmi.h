#pragma once

////
//
//      STM32H7 DCMI peripherals
//
///

// DCMI: Digital camera interface

struct stm32h742x_dcmi_t
{
    volatile uint32_t CR; // control register 1
    volatile uint32_t SR; // status register
    volatile uint32_t RIS; // raw interrupt status register
    volatile uint32_t IER; // interrupt enable register
    volatile uint32_t MIS; // masked interrupt status register
    volatile uint32_t ICR; // interrupt clear register
    volatile uint32_t ESCR; // embedded synchronization code register
    volatile uint32_t ESUR; // embedded synchronization unmask register
    volatile uint32_t CWSTRT; // crop window start
    volatile uint32_t CWSIZE; // crop window size
    volatile uint32_t DR; // data register

    static constexpr uint32_t CR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CR_OELS = 0x100000; // Odd/Even Line Select (Line Select Start)
    static constexpr uint32_t CR_LSM = 0x80000; // Line Select mode
    static constexpr uint32_t CR_OEBS = 0x40000; // Odd/Even Byte Select (Byte Select Start)
    typedef bit_field_t<16, 0x3> CR_BSM; // Byte Select mode
    static constexpr uint32_t CR_ENABLE = 0x4000; // DCMI enable
    typedef bit_field_t<10, 0x3> CR_EDM; // Extended data mode
    typedef bit_field_t<8, 0x3> CR_FCRC; // Frame capture rate control
    static constexpr uint32_t CR_VSPOL = 0x80; // Vertical synchronization polarity
    static constexpr uint32_t CR_HSPOL = 0x40; // Horizontal synchronization polarity
    static constexpr uint32_t CR_PCKPOL = 0x20; // Pixel clock polarity
    static constexpr uint32_t CR_ESS = 0x10; // Embedded synchronization select
    static constexpr uint32_t CR_JPEG = 0x8; // JPEG format
    static constexpr uint32_t CR_CROP = 0x4; // Crop feature
    static constexpr uint32_t CR_CM = 0x2; // Capture mode
    static constexpr uint32_t CR_CAPTURE = 0x1; // Capture enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t SR_FNE = 0x4; // FIFO not empty
    static constexpr uint32_t SR_VSYNC = 0x2; // VSYNC
    static constexpr uint32_t SR_HSYNC = 0x1; // HSYNC

    static constexpr uint32_t RIS_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t RIS_LINE_RIS = 0x10; // Line raw interrupt status
    static constexpr uint32_t RIS_VSYNC_RIS = 0x8; // VSYNC raw interrupt status
    static constexpr uint32_t RIS_ERR_RIS = 0x4; // Synchronization error raw interrupt status
    static constexpr uint32_t RIS_OVR_RIS = 0x2; // Overrun raw interrupt status
    static constexpr uint32_t RIS_FRAME_RIS = 0x1; // Capture complete raw interrupt status

    static constexpr uint32_t IER_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t IER_LINE_IE = 0x10; // Line interrupt enable
    static constexpr uint32_t IER_VSYNC_IE = 0x8; // VSYNC interrupt enable
    static constexpr uint32_t IER_ERR_IE = 0x4; // Synchronization error interrupt enable
    static constexpr uint32_t IER_OVR_IE = 0x2; // Overrun interrupt enable
    static constexpr uint32_t IER_FRAME_IE = 0x1; // Capture complete interrupt enable

    static constexpr uint32_t MIS_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t MIS_LINE_MIS = 0x10; // Line masked interrupt status
    static constexpr uint32_t MIS_VSYNC_MIS = 0x8; // VSYNC masked interrupt status
    static constexpr uint32_t MIS_ERR_MIS = 0x4; // Synchronization error masked interrupt status
    static constexpr uint32_t MIS_OVR_MIS = 0x2; // Overrun masked interrupt status
    static constexpr uint32_t MIS_FRAME_MIS = 0x1; // Capture complete masked interrupt status

    static constexpr uint32_t ICR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t ICR_LINE_ISC = 0x10; // line interrupt status clear
    static constexpr uint32_t ICR_VSYNC_ISC = 0x8; // Vertical synch interrupt status clear
    static constexpr uint32_t ICR_ERR_ISC = 0x4; // Synchronization error interrupt status clear
    static constexpr uint32_t ICR_OVR_ISC = 0x2; // Overrun interrupt status clear
    static constexpr uint32_t ICR_FRAME_ISC = 0x1; // Capture complete interrupt status clear

    static constexpr uint32_t ESCR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xff> ESCR_FEC; // Frame end delimiter code
    typedef bit_field_t<16, 0xff> ESCR_LEC; // Line end delimiter code
    typedef bit_field_t<8, 0xff> ESCR_LSC; // Line start delimiter code
    typedef bit_field_t<0, 0xff> ESCR_FSC; // Frame start delimiter code

    static constexpr uint32_t ESUR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xff> ESUR_FEU; // Frame end delimiter unmask
    typedef bit_field_t<16, 0xff> ESUR_LEU; // Line end delimiter unmask
    typedef bit_field_t<8, 0xff> ESUR_LSU; // Line start delimiter unmask
    typedef bit_field_t<0, 0xff> ESUR_FSU; // Frame start delimiter unmask

    static constexpr uint32_t CWSTRT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0x1fff> CWSTRT_VST; // Vertical start line count
    typedef bit_field_t<0, 0x3fff> CWSTRT_HOFFCNT; // Horizontal offset count

    static constexpr uint32_t CWSIZE_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<16, 0x3fff> CWSIZE_VLINE; // Vertical line count
    typedef bit_field_t<0, 0x3fff> CWSIZE_CAPCNT; // Capture count

    static constexpr uint32_t DR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<24, 0xff> DR_BYTE3; // Data byte 3
    typedef bit_field_t<16, 0xff> DR_BYTE2; // Data byte 2
    typedef bit_field_t<8, 0xff> DR_BYTE1; // Data byte 1
    typedef bit_field_t<0, 0xff> DR_BYTE0; // Data byte 0
};

template<>
struct peripheral_t<STM32H742x, DCMI>
{
    using T = stm32h742x_dcmi_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H743, DCMI>
{
    using T = stm32h742x_dcmi_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM4, DCMI>
{
    using T = stm32h742x_dcmi_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H745_CM7, DCMI>
{
    using T = stm32h742x_dcmi_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM4, DCMI>
{
    using T = stm32h742x_dcmi_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H747_CM7, DCMI>
{
    using T = stm32h742x_dcmi_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H750x, DCMI>
{
    using T = stm32h742x_dcmi_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H753, DCMI>
{
    using T = stm32h742x_dcmi_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM4, DCMI>
{
    using T = stm32h742x_dcmi_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H755_CM7, DCMI>
{
    using T = stm32h742x_dcmi_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM4, DCMI>
{
    using T = stm32h742x_dcmi_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H757_CM7, DCMI>
{
    using T = stm32h742x_dcmi_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7A3x, DCMI>
{
    using T = stm32h742x_dcmi_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B0x, DCMI>
{
    using T = stm32h742x_dcmi_t;
    static T& V;
};

template<>
struct peripheral_t<STM32H7B3x, DCMI>
{
    using T = stm32h742x_dcmi_t;
    static T& V;
};

using dcmi_t = peripheral_t<svd, DCMI>;

template<int INST> struct dcmi_traits {};

template<> struct dcmi_traits<0>
{
    using dcmi = dcmi_t;
    static constexpr signal_t D0 = DCMI_D0;
    static constexpr signal_t D1 = DCMI_D1;
    static constexpr signal_t D10 = DCMI_D10;
    static constexpr signal_t D11 = DCMI_D11;
    static constexpr signal_t D12 = DCMI_D12;
    static constexpr signal_t D13 = DCMI_D13;
    static constexpr signal_t D2 = DCMI_D2;
    static constexpr signal_t D3 = DCMI_D3;
    static constexpr signal_t D4 = DCMI_D4;
    static constexpr signal_t D5 = DCMI_D5;
    static constexpr signal_t D6 = DCMI_D6;
    static constexpr signal_t D7 = DCMI_D7;
    static constexpr signal_t D8 = DCMI_D8;
    static constexpr signal_t D9 = DCMI_D9;
    static constexpr signal_t HSYNC = DCMI_HSYNC;
    static constexpr signal_t PIXCLK = DCMI_PIXCLK;
    static constexpr signal_t VSYNC = DCMI_VSYNC;
};
