#pragma once

////
//
//      STM32G4 USB peripherals
//
///

// USB_FS_DEVICE: USB_FS_device

struct stm32g431xx_usb_fs_device_t
{
    volatile uint32_t EP0R; // USB endpoint n register
    volatile uint32_t EP1R; // USB endpoint n register
    volatile uint32_t EP2R; // USB endpoint n register
    volatile uint32_t EP3R; // USB endpoint n register
    volatile uint32_t EP4R; // USB endpoint n register
    volatile uint32_t EP5R; // USB endpoint n register
    volatile uint32_t EP6R; // USB endpoint n register
    volatile uint32_t EP7R; // USB endpoint n register
    reserved_t<0x8> _0x20;
    volatile uint32_t CNTR; // USB control register
    volatile uint32_t ISTR; // USB interrupt status register
    volatile uint32_t FNR; // USB frame number register
    volatile uint32_t DADDR; // USB device address
    volatile uint32_t BTABLE; // Buffer table address

    static constexpr uint32_t EP0R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> EP0R_EA; // EA
    typedef bit_field_t<4, 0x3> EP0R_STAT_TX; // STAT_TX
    static constexpr uint32_t EP0R_DTOG_TX = 0x40; // DTOG_TX
    static constexpr uint32_t EP0R_CTR_TX = 0x80; // CTR_TX
    static constexpr uint32_t EP0R_EP_KIND = 0x100; // EP_KIND
    typedef bit_field_t<9, 0x3> EP0R_EP_TYPE; // EP_TYPE
    static constexpr uint32_t EP0R_SETUP = 0x800; // SETUP
    typedef bit_field_t<12, 0x3> EP0R_STAT_RX; // STAT_RX
    static constexpr uint32_t EP0R_DTOG_RX = 0x4000; // DTOG_RX
    static constexpr uint32_t EP0R_CTR_RX = 0x8000; // CTR_RX

    static constexpr uint32_t EP1R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> EP1R_EA; // EA
    typedef bit_field_t<4, 0x3> EP1R_STAT_TX; // STAT_TX
    static constexpr uint32_t EP1R_DTOG_TX = 0x40; // DTOG_TX
    static constexpr uint32_t EP1R_CTR_TX = 0x80; // CTR_TX
    static constexpr uint32_t EP1R_EP_KIND = 0x100; // EP_KIND
    typedef bit_field_t<9, 0x3> EP1R_EP_TYPE; // EP_TYPE
    static constexpr uint32_t EP1R_SETUP = 0x800; // SETUP
    typedef bit_field_t<12, 0x3> EP1R_STAT_RX; // STAT_RX
    static constexpr uint32_t EP1R_DTOG_RX = 0x4000; // DTOG_RX
    static constexpr uint32_t EP1R_CTR_RX = 0x8000; // CTR_RX

    static constexpr uint32_t EP2R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> EP2R_EA; // EA
    typedef bit_field_t<4, 0x3> EP2R_STAT_TX; // STAT_TX
    static constexpr uint32_t EP2R_DTOG_TX = 0x40; // DTOG_TX
    static constexpr uint32_t EP2R_CTR_TX = 0x80; // CTR_TX
    static constexpr uint32_t EP2R_EP_KIND = 0x100; // EP_KIND
    typedef bit_field_t<9, 0x3> EP2R_EP_TYPE; // EP_TYPE
    static constexpr uint32_t EP2R_SETUP = 0x800; // SETUP
    typedef bit_field_t<12, 0x3> EP2R_STAT_RX; // STAT_RX
    static constexpr uint32_t EP2R_DTOG_RX = 0x4000; // DTOG_RX
    static constexpr uint32_t EP2R_CTR_RX = 0x8000; // CTR_RX

    static constexpr uint32_t EP3R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> EP3R_EA; // EA
    typedef bit_field_t<4, 0x3> EP3R_STAT_TX; // STAT_TX
    static constexpr uint32_t EP3R_DTOG_TX = 0x40; // DTOG_TX
    static constexpr uint32_t EP3R_CTR_TX = 0x80; // CTR_TX
    static constexpr uint32_t EP3R_EP_KIND = 0x100; // EP_KIND
    typedef bit_field_t<9, 0x3> EP3R_EP_TYPE; // EP_TYPE
    static constexpr uint32_t EP3R_SETUP = 0x800; // SETUP
    typedef bit_field_t<12, 0x3> EP3R_STAT_RX; // STAT_RX
    static constexpr uint32_t EP3R_DTOG_RX = 0x4000; // DTOG_RX
    static constexpr uint32_t EP3R_CTR_RX = 0x8000; // CTR_RX

    static constexpr uint32_t EP4R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> EP4R_EA; // EA
    typedef bit_field_t<4, 0x3> EP4R_STAT_TX; // STAT_TX
    static constexpr uint32_t EP4R_DTOG_TX = 0x40; // DTOG_TX
    static constexpr uint32_t EP4R_CTR_TX = 0x80; // CTR_TX
    static constexpr uint32_t EP4R_EP_KIND = 0x100; // EP_KIND
    typedef bit_field_t<9, 0x3> EP4R_EP_TYPE; // EP_TYPE
    static constexpr uint32_t EP4R_SETUP = 0x800; // SETUP
    typedef bit_field_t<12, 0x3> EP4R_STAT_RX; // STAT_RX
    static constexpr uint32_t EP4R_DTOG_RX = 0x4000; // DTOG_RX
    static constexpr uint32_t EP4R_CTR_RX = 0x8000; // CTR_RX

    static constexpr uint32_t EP5R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> EP5R_EA; // EA
    typedef bit_field_t<4, 0x3> EP5R_STAT_TX; // STAT_TX
    static constexpr uint32_t EP5R_DTOG_TX = 0x40; // DTOG_TX
    static constexpr uint32_t EP5R_CTR_TX = 0x80; // CTR_TX
    static constexpr uint32_t EP5R_EP_KIND = 0x100; // EP_KIND
    typedef bit_field_t<9, 0x3> EP5R_EP_TYPE; // EP_TYPE
    static constexpr uint32_t EP5R_SETUP = 0x800; // SETUP
    typedef bit_field_t<12, 0x3> EP5R_STAT_RX; // STAT_RX
    static constexpr uint32_t EP5R_DTOG_RX = 0x4000; // DTOG_RX
    static constexpr uint32_t EP5R_CTR_RX = 0x8000; // CTR_RX

    static constexpr uint32_t EP6R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> EP6R_EA; // EA
    typedef bit_field_t<4, 0x3> EP6R_STAT_TX; // STAT_TX
    static constexpr uint32_t EP6R_DTOG_TX = 0x40; // DTOG_TX
    static constexpr uint32_t EP6R_CTR_TX = 0x80; // CTR_TX
    static constexpr uint32_t EP6R_EP_KIND = 0x100; // EP_KIND
    typedef bit_field_t<9, 0x3> EP6R_EP_TYPE; // EP_TYPE
    static constexpr uint32_t EP6R_SETUP = 0x800; // SETUP
    typedef bit_field_t<12, 0x3> EP6R_STAT_RX; // STAT_RX
    static constexpr uint32_t EP6R_DTOG_RX = 0x4000; // DTOG_RX
    static constexpr uint32_t EP6R_CTR_RX = 0x8000; // CTR_RX

    static constexpr uint32_t EP7R_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> EP7R_EA; // EA
    typedef bit_field_t<4, 0x3> EP7R_STAT_TX; // STAT_TX
    static constexpr uint32_t EP7R_DTOG_TX = 0x40; // DTOG_TX
    static constexpr uint32_t EP7R_CTR_TX = 0x80; // CTR_TX
    static constexpr uint32_t EP7R_EP_KIND = 0x100; // EP_KIND
    typedef bit_field_t<9, 0x3> EP7R_EP_TYPE; // EP_TYPE
    static constexpr uint32_t EP7R_SETUP = 0x800; // SETUP
    typedef bit_field_t<12, 0x3> EP7R_STAT_RX; // STAT_RX
    static constexpr uint32_t EP7R_DTOG_RX = 0x4000; // DTOG_RX
    static constexpr uint32_t EP7R_CTR_RX = 0x8000; // CTR_RX


    static constexpr uint32_t CNTR_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t CNTR_FRES = 0x1; // FRES
    static constexpr uint32_t CNTR_PDWN = 0x2; // PDWN
    static constexpr uint32_t CNTR_LP_MODE = 0x4; // LP_MODE
    static constexpr uint32_t CNTR_FSUSP = 0x8; // FSUSP
    static constexpr uint32_t CNTR_RESUME = 0x10; // RESUME
    static constexpr uint32_t CNTR_L1RESUME = 0x20; // L1RESUME
    static constexpr uint32_t CNTR_L1REQM = 0x80; // L1REQM
    static constexpr uint32_t CNTR_ESOFM = 0x100; // ESOFM
    static constexpr uint32_t CNTR_SOFM = 0x200; // SOFM
    static constexpr uint32_t CNTR_RESETM = 0x400; // RESETM
    static constexpr uint32_t CNTR_SUSPM = 0x800; // SUSPM
    static constexpr uint32_t CNTR_WKUPM = 0x1000; // WKUPM
    static constexpr uint32_t CNTR_ERRM = 0x2000; // ERRM
    static constexpr uint32_t CNTR_PMAOVRM = 0x4000; // PMAOVRM
    static constexpr uint32_t CNTR_CTRM = 0x8000; // CTRM

    static constexpr uint32_t ISTR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> ISTR_EP_ID; // EP_ID
    static constexpr uint32_t ISTR_DIR = 0x10; // DIR
    static constexpr uint32_t ISTR_L1REQ = 0x80; // L1REQ
    static constexpr uint32_t ISTR_ESOF = 0x100; // ESOF
    static constexpr uint32_t ISTR_SOF = 0x200; // SOF
    static constexpr uint32_t ISTR_RESET = 0x400; // RESET
    static constexpr uint32_t ISTR_SUSP = 0x800; // SUSP
    static constexpr uint32_t ISTR_WKUP = 0x1000; // WKUP
    static constexpr uint32_t ISTR_ERR = 0x2000; // ERR
    static constexpr uint32_t ISTR_PMAOVR = 0x4000; // PMAOVR
    static constexpr uint32_t ISTR_CTR = 0x8000; // CTR

    static constexpr uint32_t FNR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> FNR_FN; // FN
    typedef bit_field_t<11, 0x3> FNR_LSOF; // LSOF
    static constexpr uint32_t FNR_LCK = 0x2000; // LCK
    static constexpr uint32_t FNR_RXDM = 0x4000; // RXDM
    static constexpr uint32_t FNR_RXDP = 0x8000; // RXDP

    static constexpr uint32_t DADDR_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7f> DADDR_ADD; // ADD
    static constexpr uint32_t DADDR_EF = 0x80; // EF

    static constexpr uint32_t BTABLE_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<3, 0x1fff> BTABLE_BTABLE; // BTABLE
};

template<>
struct peripheral_t<STM32G431xx, USB>
{
    static constexpr periph_t P = USB;
    using T = stm32g431xx_usb_fs_device_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G441xx, USB>
{
    static constexpr periph_t P = USB;
    using T = stm32g431xx_usb_fs_device_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G471xx, USB>
{
    static constexpr periph_t P = USB;
    using T = stm32g431xx_usb_fs_device_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G473xx, USB>
{
    static constexpr periph_t P = USB;
    using T = stm32g431xx_usb_fs_device_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G474xx, USB>
{
    static constexpr periph_t P = USB;
    using T = stm32g431xx_usb_fs_device_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G483xx, USB>
{
    static constexpr periph_t P = USB;
    using T = stm32g431xx_usb_fs_device_t;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, USB>
{
    static constexpr periph_t P = USB;
    using T = stm32g431xx_usb_fs_device_t;
    static T& V;
};

template<>
struct peripheral_t<STM32GBK1CBT6, USB>
{
    static constexpr periph_t P = USB;
    using T = stm32g431xx_usb_fs_device_t;
    static T& V;
};

using usb_t = peripheral_t<svd, USB>;

template<int INST> struct usb_traits {};

template<> struct usb_traits<0>
{
    using usb = usb_t;
    static constexpr clock_source_t CLOCK = APB1_PERIPH;

    template<typename RCC>
    static void enable()
    {
        RCC::V.APB1ENR1 |= RCC::T::APB1ENR1_USBEN;
    }

    template<typename RCC>
    static void disable()
    {
        RCC::V.APB1ENR1 &= ~RCC::T::APB1ENR1_USBEN;
    }

    template<typename RCC>
    static void reset()
    {
        RCC::V.APB1RSTR1 |= RCC::T::APB1RSTR1_USBRST;
    }
};
