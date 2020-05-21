#pragma once

////
//
//      STM32F7 DCMI peripherals
//
////

////
//
//      Digital camera interface
//
////

struct stm32f745_dcmi_t
{
    volatile uint32_t CR;     // [read-write] control register 1
    volatile uint32_t SR;     // [read-only] status register
    volatile uint32_t RIS;    // [read-only] raw interrupt status register
    volatile uint32_t IER;    // [read-write] interrupt enable register
    volatile uint32_t MIS;    // [read-only] masked interrupt status register
    volatile uint32_t ICR;    // [write-only] interrupt clear register
    volatile uint32_t ESCR;   // [read-write] embedded synchronization code register
    volatile uint32_t ESUR;   // [read-write] embedded synchronization unmask register
    volatile uint32_t CWSTRT; // [read-write] crop window start
    volatile uint32_t CWSIZE; // [read-write] crop window size
    volatile uint32_t DR;     // [read-only] data register

    static constexpr uint32_t CR_RESET_VALUE = 0x0;
    static constexpr uint32_t CR_ENABLE = 0x4000; // DCMI enable
    template<uint32_t X>
    static constexpr uint32_t CR_EDM =            // Extended data mode
        bit_field_t<10, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CR_FCRC =           // Frame capture rate control
        bit_field_t<8, 0x3>::value<X>();
    static constexpr uint32_t CR_VSPOL = 0x80;    // Vertical synchronization polarity
    static constexpr uint32_t CR_HSPOL = 0x40;    // Horizontal synchronization polarity
    static constexpr uint32_t CR_PCKPOL = 0x20;   // Pixel clock polarity
    static constexpr uint32_t CR_ESS = 0x10;      // Embedded synchronization select
    static constexpr uint32_t CR_JPEG = 0x8;      // JPEG format
    static constexpr uint32_t CR_CROP = 0x4;      // Crop feature
    static constexpr uint32_t CR_CM = 0x2;        // Capture mode
    static constexpr uint32_t CR_CAPTURE = 0x1;   // Capture enable

    static constexpr uint32_t SR_RESET_VALUE = 0x0;
    static constexpr uint32_t SR_FNE = 0x4;   // FIFO not empty
    static constexpr uint32_t SR_VSYNC = 0x2; // VSYNC
    static constexpr uint32_t SR_HSYNC = 0x1; // HSYNC

    static constexpr uint32_t RIS_RESET_VALUE = 0x0;
    static constexpr uint32_t RIS_LINE_RIS = 0x10; // Line raw interrupt status
    static constexpr uint32_t RIS_VSYNC_RIS = 0x8; // VSYNC raw interrupt status
    static constexpr uint32_t RIS_ERR_RIS = 0x4;   // Synchronization error raw interrupt status
    static constexpr uint32_t RIS_OVR_RIS = 0x2;   // Overrun raw interrupt status
    static constexpr uint32_t RIS_FRAME_RIS = 0x1; // Capture complete raw interrupt status

    static constexpr uint32_t IER_RESET_VALUE = 0x0;
    static constexpr uint32_t IER_LINE_IE = 0x10; // Line interrupt enable
    static constexpr uint32_t IER_VSYNC_IE = 0x8; // VSYNC interrupt enable
    static constexpr uint32_t IER_ERR_IE = 0x4;   // Synchronization error interrupt enable
    static constexpr uint32_t IER_OVR_IE = 0x2;   // Overrun interrupt enable
    static constexpr uint32_t IER_FRAME_IE = 0x1; // Capture complete interrupt enable

    static constexpr uint32_t MIS_RESET_VALUE = 0x0;
    static constexpr uint32_t MIS_LINE_MIS = 0x10; // Line masked interrupt status
    static constexpr uint32_t MIS_VSYNC_MIS = 0x8; // VSYNC masked interrupt status
    static constexpr uint32_t MIS_ERR_MIS = 0x4;   // Synchronization error masked interrupt status
    static constexpr uint32_t MIS_OVR_MIS = 0x2;   // Overrun masked interrupt status
    static constexpr uint32_t MIS_FRAME_MIS = 0x1; // Capture complete masked interrupt status

    static constexpr uint32_t ICR_RESET_VALUE = 0x0;
    static constexpr uint32_t ICR_LINE_ISC = 0x10; // line interrupt status clear
    static constexpr uint32_t ICR_VSYNC_ISC = 0x8; // Vertical synch interrupt status clear
    static constexpr uint32_t ICR_ERR_ISC = 0x4;   // Synchronization error interrupt status clear
    static constexpr uint32_t ICR_OVR_ISC = 0x2;   // Overrun interrupt status clear
    static constexpr uint32_t ICR_FRAME_ISC = 0x1; // Capture complete interrupt status clear

    static constexpr uint32_t ESCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ESCR_FEC =   // Frame end delimiter code
        bit_field_t<24, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ESCR_LEC =   // Line end delimiter code
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ESCR_LSC =   // Line start delimiter code
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ESCR_FSC =   // Frame start delimiter code
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t ESUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ESUR_FEU =   // Frame end delimiter unmask
        bit_field_t<24, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ESUR_LEU =   // Line end delimiter unmask
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ESUR_LSU =   // Line start delimiter unmask
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t ESUR_FSU =   // Frame start delimiter unmask
        bit_field_t<0, 0xff>::value<X>();

    static constexpr uint32_t CWSTRT_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CWSTRT_VST =       // Vertical start line count
        bit_field_t<16, 0x1fff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CWSTRT_HOFFCNT =   // Horizontal offset count
        bit_field_t<0, 0x3fff>::value<X>();

    static constexpr uint32_t CWSIZE_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t CWSIZE_VLINE =    // Vertical line count
        bit_field_t<16, 0x3fff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t CWSIZE_CAPCNT =   // Capture count
        bit_field_t<0, 0x3fff>::value<X>();

    static constexpr uint32_t DR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DR_Byte3 =   // Data byte 3
        bit_field_t<24, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DR_Byte2 =   // Data byte 2
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DR_Byte1 =   // Data byte 1
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DR_Byte0 =   // Data byte 0
        bit_field_t<0, 0xff>::value<X>();
};


template<>
struct peripheral_t<STM32F745, DCMI>
{
    typedef stm32f745_dcmi_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, DCMI>
{
    typedef stm32f745_dcmi_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, DCMI>
{
    typedef stm32f745_dcmi_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, DCMI>
{
    typedef stm32f745_dcmi_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, DCMI>
{
    typedef stm32f745_dcmi_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, DCMI>
{
    typedef stm32f745_dcmi_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, DCMI>
{
    typedef stm32f745_dcmi_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, DCMI>
{
    typedef stm32f745_dcmi_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, DCMI>
{
    typedef stm32f745_dcmi_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, DCMI>
{
    typedef stm32f745_dcmi_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, DCMI>
{
    typedef stm32f745_dcmi_t T;
    static T& V;
};

using dcmi_t = peripheral_t<mcu_svd, DCMI>;

