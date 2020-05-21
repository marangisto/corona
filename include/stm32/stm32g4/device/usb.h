#pragma once

////
//
//      STM32G4 USB peripherals
//
////

////
//
//      USB_FS_device
//
////

struct stm32g431xx_usb_fs_device_t
{
    volatile uint32_t EP0R;   // [read-write] USB endpoint n register
    volatile uint32_t EP1R;   // [read-write] USB endpoint n register
    volatile uint32_t EP2R;   // [read-write] USB endpoint n register
    volatile uint32_t EP3R;   // [read-write] USB endpoint n register
    volatile uint32_t EP4R;   // [read-write] USB endpoint n register
    volatile uint32_t EP5R;   // [read-write] USB endpoint n register
    volatile uint32_t EP6R;   // [read-write] USB endpoint n register
    volatile uint32_t EP7R;   // [read-write] USB endpoint n register
    reserved_t<0x8> _0x40;
    volatile uint32_t CNTR;   // [read-write] USB control register
    volatile uint32_t ISTR;   // [read-write] USB interrupt status register
    volatile uint32_t FNR;    // [read-only] USB frame number register
    volatile uint32_t DADDR;  // [read-write] USB device address
    volatile uint32_t BTABLE; // [read-write] Buffer table address

    static constexpr uint32_t EP0R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EP0R_EA =              // EA
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EP0R_STAT_TX =         // STAT_TX
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t EP0R_DTOG_TX = 0x40;   // DTOG_TX
    static constexpr uint32_t EP0R_CTR_TX = 0x80;    // CTR_TX
    static constexpr uint32_t EP0R_EP_KIND = 0x100;  // EP_KIND
    template<uint32_t X>
    static constexpr uint32_t EP0R_EP_TYPE =         // EP_TYPE
        bit_field_t<9, 0x3>::value<X>();
    static constexpr uint32_t EP0R_SETUP = 0x800;    // SETUP
    template<uint32_t X>
    static constexpr uint32_t EP0R_STAT_RX =         // STAT_RX
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t EP0R_DTOG_RX = 0x4000; // DTOG_RX
    static constexpr uint32_t EP0R_CTR_RX = 0x8000;  // CTR_RX

    static constexpr uint32_t EP1R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EP1R_EA =              // EA
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EP1R_STAT_TX =         // STAT_TX
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t EP1R_DTOG_TX = 0x40;   // DTOG_TX
    static constexpr uint32_t EP1R_CTR_TX = 0x80;    // CTR_TX
    static constexpr uint32_t EP1R_EP_KIND = 0x100;  // EP_KIND
    template<uint32_t X>
    static constexpr uint32_t EP1R_EP_TYPE =         // EP_TYPE
        bit_field_t<9, 0x3>::value<X>();
    static constexpr uint32_t EP1R_SETUP = 0x800;    // SETUP
    template<uint32_t X>
    static constexpr uint32_t EP1R_STAT_RX =         // STAT_RX
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t EP1R_DTOG_RX = 0x4000; // DTOG_RX
    static constexpr uint32_t EP1R_CTR_RX = 0x8000;  // CTR_RX

    static constexpr uint32_t EP2R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EP2R_EA =              // EA
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EP2R_STAT_TX =         // STAT_TX
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t EP2R_DTOG_TX = 0x40;   // DTOG_TX
    static constexpr uint32_t EP2R_CTR_TX = 0x80;    // CTR_TX
    static constexpr uint32_t EP2R_EP_KIND = 0x100;  // EP_KIND
    template<uint32_t X>
    static constexpr uint32_t EP2R_EP_TYPE =         // EP_TYPE
        bit_field_t<9, 0x3>::value<X>();
    static constexpr uint32_t EP2R_SETUP = 0x800;    // SETUP
    template<uint32_t X>
    static constexpr uint32_t EP2R_STAT_RX =         // STAT_RX
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t EP2R_DTOG_RX = 0x4000; // DTOG_RX
    static constexpr uint32_t EP2R_CTR_RX = 0x8000;  // CTR_RX

    static constexpr uint32_t EP3R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EP3R_EA =              // EA
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EP3R_STAT_TX =         // STAT_TX
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t EP3R_DTOG_TX = 0x40;   // DTOG_TX
    static constexpr uint32_t EP3R_CTR_TX = 0x80;    // CTR_TX
    static constexpr uint32_t EP3R_EP_KIND = 0x100;  // EP_KIND
    template<uint32_t X>
    static constexpr uint32_t EP3R_EP_TYPE =         // EP_TYPE
        bit_field_t<9, 0x3>::value<X>();
    static constexpr uint32_t EP3R_SETUP = 0x800;    // SETUP
    template<uint32_t X>
    static constexpr uint32_t EP3R_STAT_RX =         // STAT_RX
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t EP3R_DTOG_RX = 0x4000; // DTOG_RX
    static constexpr uint32_t EP3R_CTR_RX = 0x8000;  // CTR_RX

    static constexpr uint32_t EP4R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EP4R_EA =              // EA
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EP4R_STAT_TX =         // STAT_TX
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t EP4R_DTOG_TX = 0x40;   // DTOG_TX
    static constexpr uint32_t EP4R_CTR_TX = 0x80;    // CTR_TX
    static constexpr uint32_t EP4R_EP_KIND = 0x100;  // EP_KIND
    template<uint32_t X>
    static constexpr uint32_t EP4R_EP_TYPE =         // EP_TYPE
        bit_field_t<9, 0x3>::value<X>();
    static constexpr uint32_t EP4R_SETUP = 0x800;    // SETUP
    template<uint32_t X>
    static constexpr uint32_t EP4R_STAT_RX =         // STAT_RX
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t EP4R_DTOG_RX = 0x4000; // DTOG_RX
    static constexpr uint32_t EP4R_CTR_RX = 0x8000;  // CTR_RX

    static constexpr uint32_t EP5R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EP5R_EA =              // EA
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EP5R_STAT_TX =         // STAT_TX
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t EP5R_DTOG_TX = 0x40;   // DTOG_TX
    static constexpr uint32_t EP5R_CTR_TX = 0x80;    // CTR_TX
    static constexpr uint32_t EP5R_EP_KIND = 0x100;  // EP_KIND
    template<uint32_t X>
    static constexpr uint32_t EP5R_EP_TYPE =         // EP_TYPE
        bit_field_t<9, 0x3>::value<X>();
    static constexpr uint32_t EP5R_SETUP = 0x800;    // SETUP
    template<uint32_t X>
    static constexpr uint32_t EP5R_STAT_RX =         // STAT_RX
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t EP5R_DTOG_RX = 0x4000; // DTOG_RX
    static constexpr uint32_t EP5R_CTR_RX = 0x8000;  // CTR_RX

    static constexpr uint32_t EP6R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EP6R_EA =              // EA
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EP6R_STAT_TX =         // STAT_TX
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t EP6R_DTOG_TX = 0x40;   // DTOG_TX
    static constexpr uint32_t EP6R_CTR_TX = 0x80;    // CTR_TX
    static constexpr uint32_t EP6R_EP_KIND = 0x100;  // EP_KIND
    template<uint32_t X>
    static constexpr uint32_t EP6R_EP_TYPE =         // EP_TYPE
        bit_field_t<9, 0x3>::value<X>();
    static constexpr uint32_t EP6R_SETUP = 0x800;    // SETUP
    template<uint32_t X>
    static constexpr uint32_t EP6R_STAT_RX =         // STAT_RX
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t EP6R_DTOG_RX = 0x4000; // DTOG_RX
    static constexpr uint32_t EP6R_CTR_RX = 0x8000;  // CTR_RX

    static constexpr uint32_t EP7R_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t EP7R_EA =              // EA
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t EP7R_STAT_TX =         // STAT_TX
        bit_field_t<4, 0x3>::value<X>();
    static constexpr uint32_t EP7R_DTOG_TX = 0x40;   // DTOG_TX
    static constexpr uint32_t EP7R_CTR_TX = 0x80;    // CTR_TX
    static constexpr uint32_t EP7R_EP_KIND = 0x100;  // EP_KIND
    template<uint32_t X>
    static constexpr uint32_t EP7R_EP_TYPE =         // EP_TYPE
        bit_field_t<9, 0x3>::value<X>();
    static constexpr uint32_t EP7R_SETUP = 0x800;    // SETUP
    template<uint32_t X>
    static constexpr uint32_t EP7R_STAT_RX =         // STAT_RX
        bit_field_t<12, 0x3>::value<X>();
    static constexpr uint32_t EP7R_DTOG_RX = 0x4000; // DTOG_RX
    static constexpr uint32_t EP7R_CTR_RX = 0x8000;  // CTR_RX

    static constexpr uint32_t CNTR_RESET_VALUE = 0x0;
    static constexpr uint32_t CNTR_FRES = 0x1;       // FRES
    static constexpr uint32_t CNTR_PDWN = 0x2;       // PDWN
    static constexpr uint32_t CNTR_LP_MODE = 0x4;    // LP_MODE
    static constexpr uint32_t CNTR_FSUSP = 0x8;      // FSUSP
    static constexpr uint32_t CNTR_RESUME = 0x10;    // RESUME
    static constexpr uint32_t CNTR_L1RESUME = 0x20;  // L1RESUME
    static constexpr uint32_t CNTR_L1REQM = 0x80;    // L1REQM
    static constexpr uint32_t CNTR_ESOFM = 0x100;    // ESOFM
    static constexpr uint32_t CNTR_SOFM = 0x200;     // SOFM
    static constexpr uint32_t CNTR_RESETM = 0x400;   // RESETM
    static constexpr uint32_t CNTR_SUSPM = 0x800;    // SUSPM
    static constexpr uint32_t CNTR_WKUPM = 0x1000;   // WKUPM
    static constexpr uint32_t CNTR_ERRM = 0x2000;    // ERRM
    static constexpr uint32_t CNTR_PMAOVRM = 0x4000; // PMAOVRM
    static constexpr uint32_t CNTR_CTRM = 0x8000;    // CTRM

    static constexpr uint32_t ISTR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t ISTR_EP_ID =          // EP_ID
        bit_field_t<0, 0xf>::value<X>();
    static constexpr uint32_t ISTR_DIR = 0x10;      // DIR
    static constexpr uint32_t ISTR_L1REQ = 0x80;    // L1REQ
    static constexpr uint32_t ISTR_ESOF = 0x100;    // ESOF
    static constexpr uint32_t ISTR_SOF = 0x200;     // SOF
    static constexpr uint32_t ISTR_RESET = 0x400;   // RESET
    static constexpr uint32_t ISTR_SUSP = 0x800;    // SUSP
    static constexpr uint32_t ISTR_WKUP = 0x1000;   // WKUP
    static constexpr uint32_t ISTR_ERR = 0x2000;    // ERR
    static constexpr uint32_t ISTR_PMAOVR = 0x4000; // PMAOVR
    static constexpr uint32_t ISTR_CTR = 0x8000;    // CTR

    static constexpr uint32_t FNR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FNR_FN =           // FN
        bit_field_t<0, 0x7ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FNR_LSOF =         // LSOF
        bit_field_t<11, 0x3>::value<X>();
    static constexpr uint32_t FNR_LCK = 0x2000;  // LCK
    static constexpr uint32_t FNR_RXDM = 0x4000; // RXDM
    static constexpr uint32_t FNR_RXDP = 0x8000; // RXDP

    static constexpr uint32_t DADDR_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t DADDR_ADD =      // ADD
        bit_field_t<0, 0x7f>::value<X>();
    static constexpr uint32_t DADDR_EF = 0x80; // EF

    static constexpr uint32_t BTABLE_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t BTABLE_BTABLE =   // BTABLE
        bit_field_t<3, 0x1fff>::value<X>();
};


template<>
struct peripheral_t<STM32G431xx, USB_FS_device>
{
    typedef stm32g431xx_usb_fs_device_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G441xx, USB_FS_device>
{
    typedef stm32g431xx_usb_fs_device_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G471xx, USB_FS_device>
{
    typedef stm32g431xx_usb_fs_device_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G473xx, USB_FS_device>
{
    typedef stm32g431xx_usb_fs_device_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G474xx, USB_FS_device>
{
    typedef stm32g431xx_usb_fs_device_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G483xx, USB_FS_device>
{
    typedef stm32g431xx_usb_fs_device_t T;
    static T& V;
};

template<>
struct peripheral_t<STM32G484xx, USB_FS_device>
{
    typedef stm32g431xx_usb_fs_device_t T;
    static T& V;
};

using usb_fs_device_t = peripheral_t<mcu_svd, USB_FS_device>;

