#pragma once

////
//
//      STM32L1 USB peripherals
//
///

// USB: Universal serial bus full-speed device interface

struct stm32l100_usb_t
{
    volatile uint32_t USB_EP0R; // endpoint 0 register
    volatile uint32_t USB_EP1R; // endpoint 1 register
    volatile uint32_t USB_EP2R; // endpoint 2 register
    volatile uint32_t USB_EP3R; // endpoint 3 register
    volatile uint32_t USB_EP4R; // endpoint 4 register
    volatile uint32_t USB_EP5R; // endpoint 5 register
    volatile uint32_t USB_EP6R; // endpoint 6 register
    volatile uint32_t USB_EP7R; // endpoint 7 register
    reserved_t<0x8> _0x20;
    volatile uint32_t USB_CNTR; // control register
    volatile uint32_t ISTR; // interrupt status register
    volatile uint32_t FNR; // frame number register
    volatile uint32_t DADDR; // device address
    volatile uint32_t BTABLE; // Buffer table address

    static constexpr uint32_t USB_EP0R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> USB_EP0R_EA; // Endpoint address
    typedef bit_field_t<4, 0x3> USB_EP0R_STAT_TX; // Status bits, for transmission transfers
    static constexpr uint32_t USB_EP0R_DTOG_TX = 0x40; // Data Toggle, for transmission transfers
    static constexpr uint32_t USB_EP0R_CTR_TX = 0x80; // Correct Transfer for transmission
    static constexpr uint32_t USB_EP0R_EP_KIND = 0x100; // Endpoint kind
    typedef bit_field_t<9, 0x3> USB_EP0R_EP_TYPE; // Endpoint type
    static constexpr uint32_t USB_EP0R_SETUP = 0x800; // Setup transaction completed
    typedef bit_field_t<12, 0x3> USB_EP0R_STAT_RX; // Status bits, for reception transfers
    static constexpr uint32_t USB_EP0R_DTOG_RX = 0x4000; // Data Toggle, for reception transfers
    static constexpr uint32_t USB_EP0R_CTR_RX = 0x8000; // Correct transfer for reception

    static constexpr uint32_t USB_EP1R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> USB_EP1R_EA; // Endpoint address
    typedef bit_field_t<4, 0x3> USB_EP1R_STAT_TX; // Status bits, for transmission transfers
    static constexpr uint32_t USB_EP1R_DTOG_TX = 0x40; // Data Toggle, for transmission transfers
    static constexpr uint32_t USB_EP1R_CTR_TX = 0x80; // Correct Transfer for transmission
    static constexpr uint32_t USB_EP1R_EP_KIND = 0x100; // Endpoint kind
    typedef bit_field_t<9, 0x3> USB_EP1R_EP_TYPE; // Endpoint type
    static constexpr uint32_t USB_EP1R_SETUP = 0x800; // Setup transaction completed
    typedef bit_field_t<12, 0x3> USB_EP1R_STAT_RX; // Status bits, for reception transfers
    static constexpr uint32_t USB_EP1R_DTOG_RX = 0x4000; // Data Toggle, for reception transfers
    static constexpr uint32_t USB_EP1R_CTR_RX = 0x8000; // Correct transfer for reception

    static constexpr uint32_t USB_EP2R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> USB_EP2R_EA; // Endpoint address
    typedef bit_field_t<4, 0x3> USB_EP2R_STAT_TX; // Status bits, for transmission transfers
    static constexpr uint32_t USB_EP2R_DTOG_TX = 0x40; // Data Toggle, for transmission transfers
    static constexpr uint32_t USB_EP2R_CTR_TX = 0x80; // Correct Transfer for transmission
    static constexpr uint32_t USB_EP2R_EP_KIND = 0x100; // Endpoint kind
    typedef bit_field_t<9, 0x3> USB_EP2R_EP_TYPE; // Endpoint type
    static constexpr uint32_t USB_EP2R_SETUP = 0x800; // Setup transaction completed
    typedef bit_field_t<12, 0x3> USB_EP2R_STAT_RX; // Status bits, for reception transfers
    static constexpr uint32_t USB_EP2R_DTOG_RX = 0x4000; // Data Toggle, for reception transfers
    static constexpr uint32_t USB_EP2R_CTR_RX = 0x8000; // Correct transfer for reception

    static constexpr uint32_t USB_EP3R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> USB_EP3R_EA; // Endpoint address
    typedef bit_field_t<4, 0x3> USB_EP3R_STAT_TX; // Status bits, for transmission transfers
    static constexpr uint32_t USB_EP3R_DTOG_TX = 0x40; // Data Toggle, for transmission transfers
    static constexpr uint32_t USB_EP3R_CTR_TX = 0x80; // Correct Transfer for transmission
    static constexpr uint32_t USB_EP3R_EP_KIND = 0x100; // Endpoint kind
    typedef bit_field_t<9, 0x3> USB_EP3R_EP_TYPE; // Endpoint type
    static constexpr uint32_t USB_EP3R_SETUP = 0x800; // Setup transaction completed
    typedef bit_field_t<12, 0x3> USB_EP3R_STAT_RX; // Status bits, for reception transfers
    static constexpr uint32_t USB_EP3R_DTOG_RX = 0x4000; // Data Toggle, for reception transfers
    static constexpr uint32_t USB_EP3R_CTR_RX = 0x8000; // Correct transfer for reception

    static constexpr uint32_t USB_EP4R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> USB_EP4R_EA; // Endpoint address
    typedef bit_field_t<4, 0x3> USB_EP4R_STAT_TX; // Status bits, for transmission transfers
    static constexpr uint32_t USB_EP4R_DTOG_TX = 0x40; // Data Toggle, for transmission transfers
    static constexpr uint32_t USB_EP4R_CTR_TX = 0x80; // Correct Transfer for transmission
    static constexpr uint32_t USB_EP4R_EP_KIND = 0x100; // Endpoint kind
    typedef bit_field_t<9, 0x3> USB_EP4R_EP_TYPE; // Endpoint type
    static constexpr uint32_t USB_EP4R_SETUP = 0x800; // Setup transaction completed
    typedef bit_field_t<12, 0x3> USB_EP4R_STAT_RX; // Status bits, for reception transfers
    static constexpr uint32_t USB_EP4R_DTOG_RX = 0x4000; // Data Toggle, for reception transfers
    static constexpr uint32_t USB_EP4R_CTR_RX = 0x8000; // Correct transfer for reception

    static constexpr uint32_t USB_EP5R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> USB_EP5R_EA; // Endpoint address
    typedef bit_field_t<4, 0x3> USB_EP5R_STAT_TX; // Status bits, for transmission transfers
    static constexpr uint32_t USB_EP5R_DTOG_TX = 0x40; // Data Toggle, for transmission transfers
    static constexpr uint32_t USB_EP5R_CTR_TX = 0x80; // Correct Transfer for transmission
    static constexpr uint32_t USB_EP5R_EP_KIND = 0x100; // Endpoint kind
    typedef bit_field_t<9, 0x3> USB_EP5R_EP_TYPE; // Endpoint type
    static constexpr uint32_t USB_EP5R_SETUP = 0x800; // Setup transaction completed
    typedef bit_field_t<12, 0x3> USB_EP5R_STAT_RX; // Status bits, for reception transfers
    static constexpr uint32_t USB_EP5R_DTOG_RX = 0x4000; // Data Toggle, for reception transfers
    static constexpr uint32_t USB_EP5R_CTR_RX = 0x8000; // Correct transfer for reception

    static constexpr uint32_t USB_EP6R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> USB_EP6R_EA; // Endpoint address
    typedef bit_field_t<4, 0x3> USB_EP6R_STAT_TX; // Status bits, for transmission transfers
    static constexpr uint32_t USB_EP6R_DTOG_TX = 0x40; // Data Toggle, for transmission transfers
    static constexpr uint32_t USB_EP6R_CTR_TX = 0x80; // Correct Transfer for transmission
    static constexpr uint32_t USB_EP6R_EP_KIND = 0x100; // Endpoint kind
    typedef bit_field_t<9, 0x3> USB_EP6R_EP_TYPE; // Endpoint type
    static constexpr uint32_t USB_EP6R_SETUP = 0x800; // Setup transaction completed
    typedef bit_field_t<12, 0x3> USB_EP6R_STAT_RX; // Status bits, for reception transfers
    static constexpr uint32_t USB_EP6R_DTOG_RX = 0x4000; // Data Toggle, for reception transfers
    static constexpr uint32_t USB_EP6R_CTR_RX = 0x8000; // Correct transfer for reception

    static constexpr uint32_t USB_EP7R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> USB_EP7R_EA; // Endpoint address
    typedef bit_field_t<4, 0x3> USB_EP7R_STAT_TX; // Status bits, for transmission transfers
    static constexpr uint32_t USB_EP7R_DTOG_TX = 0x40; // Data Toggle, for transmission transfers
    static constexpr uint32_t USB_EP7R_CTR_TX = 0x80; // Correct Transfer for transmission
    static constexpr uint32_t USB_EP7R_EP_KIND = 0x100; // Endpoint kind
    typedef bit_field_t<9, 0x3> USB_EP7R_EP_TYPE; // Endpoint type
    static constexpr uint32_t USB_EP7R_SETUP = 0x800; // Setup transaction completed
    typedef bit_field_t<12, 0x3> USB_EP7R_STAT_RX; // Status bits, for reception transfers
    static constexpr uint32_t USB_EP7R_DTOG_RX = 0x4000; // Data Toggle, for reception transfers
    static constexpr uint32_t USB_EP7R_CTR_RX = 0x8000; // Correct transfer for reception


    static constexpr uint32_t USB_CNTR_RESET_VALUE = 0x3; // Reset value
    static constexpr uint32_t USB_CNTR_FRES = 0x1; // Force USB Reset
    static constexpr uint32_t USB_CNTR_PDWN = 0x2; // Power down
    static constexpr uint32_t USB_CNTR_LPMODE = 0x4; // Low-power mode
    static constexpr uint32_t USB_CNTR_FSUSP = 0x8; // Force suspend
    static constexpr uint32_t USB_CNTR_RESUME = 0x10; // Resume request
    static constexpr uint32_t USB_CNTR_ESOFM = 0x100; // Expected start of frame interrupt mask
    static constexpr uint32_t USB_CNTR_SOFM = 0x200; // Start of frame interrupt mask
    static constexpr uint32_t USB_CNTR_RESETM = 0x400; // USB reset interrupt mask
    static constexpr uint32_t USB_CNTR_SUSPM = 0x800; // Suspend mode interrupt mask
    static constexpr uint32_t USB_CNTR_WKUPM = 0x1000; // Wakeup interrupt mask
    static constexpr uint32_t USB_CNTR_ERRM = 0x2000; // Error interrupt mask
    static constexpr uint32_t USB_CNTR_PMAOVRM = 0x4000; // Packet memory area over / underrun interrupt mask
    static constexpr uint32_t USB_CNTR_CTRM = 0x8000; // Correct transfer interrupt mask

    static constexpr uint32_t ISTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> ISTR_EP_ID; // Endpoint Identifier
    static constexpr uint32_t ISTR_DIR = 0x10; // Direction of transaction
    static constexpr uint32_t ISTR_ESOF = 0x100; // Expected start frame
    static constexpr uint32_t ISTR_SOF = 0x200; // start of frame
    static constexpr uint32_t ISTR_RESET = 0x400; // reset request
    static constexpr uint32_t ISTR_SUSP = 0x800; // Suspend mode request
    static constexpr uint32_t ISTR_WKUP = 0x1000; // Wakeup
    static constexpr uint32_t ISTR_ERR = 0x2000; // Error
    static constexpr uint32_t ISTR_PMAOVR = 0x4000; // Packet memory area over / underrun
    static constexpr uint32_t ISTR_CTR = 0x8000; // Correct transfer

    static constexpr uint32_t FNR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> FNR_FN; // Frame number
    typedef bit_field_t<11, 0x3> FNR_LSOF; // Lost SOF
    static constexpr uint32_t FNR_LCK = 0x2000; // Locked
    static constexpr uint32_t FNR_RXDM = 0x4000; // Receive data - line status
    static constexpr uint32_t FNR_RXDP = 0x8000; // Receive data + line status

    static constexpr uint32_t DADDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7f> DADDR_ADD; // Device address
    static constexpr uint32_t DADDR_EF = 0x80; // Enable function

    static constexpr uint32_t BTABLE_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<3, 0x1fff> BTABLE_BTABLE; // Buffer table
};

template<>
struct peripheral_t<STM32L100, USB>
{
    using T = stm32l100_usb_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L100, USB_SRAM>
{
    using T = stm32l100_usb_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L151, USB>
{
    using T = stm32l100_usb_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L151, USB_SRAM>
{
    using T = stm32l100_usb_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L152, USB>
{
    using T = stm32l100_usb_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L152, USB_SRAM>
{
    using T = stm32l100_usb_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L162, USB>
{
    using T = stm32l100_usb_t;
    static T& V;
};

template<>
struct peripheral_t<STM32L162, USB_SRAM>
{
    using T = stm32l100_usb_t;
    static T& V;
};

using usb_t = peripheral_t<svd, USB>;
using usb_sram_t = peripheral_t<svd, USB_SRAM>;

template<int INST> struct usb_traits {};

template<> struct usb_traits<0>
{
    using usb = usb_t;
    static constexpr signal_t DM = USB_DM;
    static constexpr signal_t DP = USB_DP;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR |= RCC::T::APB1ENR_USBEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR &= ~RCC::T::APB1ENR_USBEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR |= RCC::T::APB1RSTR_USBRST;
    }
};
