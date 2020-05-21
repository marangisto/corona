#pragma once

////
//
//      STM32MP1 DCMI peripherals
//
////

////
//
//      DCMI
//
////

struct stm32mp15xxx_dcmi_t
{
    volatile uint32_t DCMI_CR;     // [read-write] DCMI control register
    volatile uint32_t DCMI_SR;     // [read-only] DCMI status register
    volatile uint32_t DCMI_RIS;    // [read-only] DCMI_RIS gives the raw interrupt status and is accessible in read only. When read, this register returns the status of the corresponding interrupt before masking with the DCMI_IER register value.
    volatile uint32_t DCMI_IER;    // [read-write] The DCMI_IER register is used to enable interrupts. When one of the DCMI_IER bits is set, the corresponding interrupt is enabled. This register is accessible in both read and write.
    volatile uint32_t DCMI_MIS;    // [read-only] This DCMI_MIS register is a read-only register. When read, it returns the current masked status value (depending on the value in DCMI_IER) of the corresponding interrupt. A bit in this register is set if the corresponding enable bit in DCMI_IER is set and the corresponding bit in DCMI_RIS is set.
    volatile uint32_t DCMI_ICR;    // [write-only] The DCMI_ICR register is write-only.
    volatile uint32_t DCMI_ESCR;   // [read-write] DCMI embedded synchronization code register
    volatile uint32_t DCMI_ESUR;   // [read-write] DCMI embedded synchronization unmask register
    volatile uint32_t DCMI_CWSTRT; // [read-write] DCMI crop window start
    volatile uint32_t DCMI_CWSIZE; // [read-write] DCMI crop window size
    volatile uint32_t DCMI_DR;     // [read-only] DCMI data register

    static constexpr uint32_t DCMI_CR_RESET_VALUE = 0x0;
    static constexpr uint32_t DCMI_CR_CAPTURE = 0x1;   // CAPTURE
    static constexpr uint32_t DCMI_CR_CM = 0x2;        // CM
    static constexpr uint32_t DCMI_CR_CROP = 0x4;      // CROP
    static constexpr uint32_t DCMI_CR_JPEG = 0x8;      // JPEG
    static constexpr uint32_t DCMI_CR_ESS = 0x10;      // ESS
    static constexpr uint32_t DCMI_CR_PCKPOL = 0x20;   // PCKPOL
    static constexpr uint32_t DCMI_CR_HSPOL = 0x40;    // HSPOL
    static constexpr uint32_t DCMI_CR_VSPOL = 0x80;    // VSPOL
    template<uint32_t X>
    static constexpr uint32_t DCMI_CR_FCRC =           // FCRC
        bit_field_t<8, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DCMI_CR_EDM =            // EDM
        bit_field_t<10, 0x3>::value<X>();
    static constexpr uint32_t DCMI_CR_ENABLE = 0x4000; // ENABLE
    template<uint32_t X>
    static constexpr uint32_t DCMI_CR_BSM =            // BSM
        bit_field_t<16, 0x3>::value<X>();
    static constexpr uint32_t DCMI_CR_OEBS = 0x40000;  // OEBS
    static constexpr uint32_t DCMI_CR_LSM = 0x80000;   // LSM
    static constexpr uint32_t DCMI_CR_OELS = 0x100000; // OELS

    static constexpr uint32_t DCMI_SR_RESET_VALUE = 0x0;
    static constexpr uint32_t DCMI_SR_HSYNC = 0x1; // HSYNC
    static constexpr uint32_t DCMI_SR_VSYNC = 0x2; // VSYNC
    static constexpr uint32_t DCMI_SR_FNE = 0x4;   // FNE

    static constexpr uint32_t DCMI_RIS_RESET_VALUE = 0x0;
    static constexpr uint32_t DCMI_RIS_FRAME_RIS = 0x1; // FRAME_RIS
    static constexpr uint32_t DCMI_RIS_OVR_RIS = 0x2;   // OVR_RIS
    static constexpr uint32_t DCMI_RIS_ERR_RIS = 0x4;   // ERR_RIS
    static constexpr uint32_t DCMI_RIS_VSYNC_RIS = 0x8; // VSYNC_RIS
    static constexpr uint32_t DCMI_RIS_LINE_RIS = 0x10; // LINE_RIS

    static constexpr uint32_t DCMI_IER_RESET_VALUE = 0x0;
    static constexpr uint32_t DCMI_IER_FRAME_IE = 0x1; // FRAME_IE
    static constexpr uint32_t DCMI_IER_OVR_IE = 0x2;   // OVR_IE
    static constexpr uint32_t DCMI_IER_ERR_IE = 0x4;   // ERR_IE
    static constexpr uint32_t DCMI_IER_VSYNC_IE = 0x8; // VSYNC_IE
    static constexpr uint32_t DCMI_IER_LINE_IE = 0x10; // LINE_IE

    static constexpr uint32_t DCMI_MIS_RESET_VALUE = 0x0;
    static constexpr uint32_t DCMI_MIS_FRAME_MIS = 0x1; // FRAME_MIS
    static constexpr uint32_t DCMI_MIS_OVR_MIS = 0x2;   // OVR_MIS
    static constexpr uint32_t DCMI_MIS_ERR_MIS = 0x4;   // ERR_MIS
    static constexpr uint32_t DCMI_MIS_VSYNC_MIS = 0x8; // VSYNC_MIS
    static constexpr uint32_t DCMI_MIS_LINE_MIS = 0x10; // LINE_MIS

    static constexpr uint32_t DCMI_ICR_RESET_VALUE = 0x0;
    static constexpr uint32_t DCMI_ICR_FRAME_ISC = 0x1; // FRAME_ISC
    static constexpr uint32_t DCMI_ICR_OVR_ISC = 0x2;   // OVR_ISC
    static constexpr uint32_t DCMI_ICR_ERR_ISC = 0x4;   // ERR_ISC
    static constexpr uint32_t DCMI_ICR_VSYNC_ISC = 0x8; // VSYNC_ISC
    static constexpr uint32_t DCMI_ICR_LINE_ISC = 0x10; // LINE_ISC

    static constexpr uint32_t DCMI_ESCR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DCMI_ESCR_FSC =   // FSC
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DCMI_ESCR_LSC =   // LSC
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DCMI_ESCR_LEC =   // LEC
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DCMI_ESCR_FEC =   // FEC
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t DCMI_ESUR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DCMI_ESUR_FSU =   // FSU
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DCMI_ESUR_LSU =   // LSU
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DCMI_ESUR_LEU =   // LEU
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DCMI_ESUR_FEU =   // FEU
        bit_field_t<24, 0xff>::value<X>();

    static constexpr uint32_t DCMI_CWSTRT_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DCMI_CWSTRT_HOFFCNT =   // HOFFCNT
        bit_field_t<0, 0x3fff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DCMI_CWSTRT_VST =       // VST
        bit_field_t<16, 0x1fff>::value<X>();

    static constexpr uint32_t DCMI_CWSIZE_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DCMI_CWSIZE_CAPCNT =   // CAPCNT
        bit_field_t<0, 0x3fff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DCMI_CWSIZE_VLINE =    // VLINE
        bit_field_t<16, 0x3fff>::value<X>();

    static constexpr uint32_t DCMI_DR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DCMI_DR_Byte0 =   // Byte0
        bit_field_t<0, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DCMI_DR_Byte1 =   // Byte1
        bit_field_t<8, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DCMI_DR_Byte2 =   // Byte2
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t DCMI_DR_Byte3 =   // Byte3
        bit_field_t<24, 0xff>::value<X>();
};


template<>
struct peripheral_t<STM32MP15xxx, DCMI>
{
    typedef stm32mp15xxx_dcmi_t T;
    static T& V;
};

using dcmi_t = peripheral_t<mcu_svd, DCMI>;

