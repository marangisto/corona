#pragma once

////
//
//      STM32F1 USB_OTG peripherals
//
////

////
//
//      USB on the go full speed
//
////

struct stm32f107_usb_otg_global_t
{
    volatile uint32_t FS_GOTGCTL;          // OTG_FS control and status register (OTG_FS_GOTGCTL)
    volatile uint32_t FS_GOTGINT;          // [read-write] OTG_FS interrupt register (OTG_FS_GOTGINT)
    volatile uint32_t FS_GAHBCFG;          // [read-write] OTG_FS AHB configuration register (OTG_FS_GAHBCFG)
    volatile uint32_t FS_GUSBCFG;          // OTG_FS USB configuration register (OTG_FS_GUSBCFG)
    volatile uint32_t FS_GRSTCTL;          // OTG_FS reset register (OTG_FS_GRSTCTL)
    volatile uint32_t FS_GINTSTS;          // OTG_FS core interrupt register (OTG_FS_GINTSTS)
    volatile uint32_t FS_GINTMSK;          // OTG_FS interrupt mask register (OTG_FS_GINTMSK)
    volatile uint32_t FS_GRXSTSR_Device;   // [read-only] OTG_FS Receive status debug read(Device mode)
    reserved_t<0x1> _0x24;
    volatile uint32_t FS_GRXFSIZ;          // [read-write] OTG_FS Receive FIFO size register (OTG_FS_GRXFSIZ)
    volatile uint32_t FS_GNPTXFSIZ_Device; // [read-write] OTG_FS non-periodic transmit FIFO size register (Device mode)
    volatile uint32_t FS_GNPTXSTS;         // [read-only] OTG_FS non-periodic transmit FIFO/queue status register (OTG_FS_GNPTXSTS)
    reserved_t<0x2> _0x38;
    volatile uint32_t FS_GCCFG;            // [read-write] OTG_FS general core configuration register (OTG_FS_GCCFG)
    volatile uint32_t FS_CID;              // [read-write] core ID register
    reserved_t<0x30> _0x100;
    volatile uint32_t FS_HPTXFSIZ;         // [read-write] OTG_FS Host periodic transmit FIFO size register (OTG_FS_HPTXFSIZ)
    volatile uint32_t FS_DIEPTXF1;         // [read-write] OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF2)
    volatile uint32_t FS_DIEPTXF2;         // [read-write] OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF3)
    volatile uint32_t FS_DIEPTXF3;         // [read-write] OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF4)

    static constexpr uint32_t FS_GOTGCTL_RESET_VALUE = 0x800;
    static constexpr uint32_t FS_GOTGCTL_SRQSCS = 0x1;     // Session request success
    static constexpr uint32_t FS_GOTGCTL_SRQ = 0x2;        // Session request
    static constexpr uint32_t FS_GOTGCTL_HNGSCS = 0x100;   // Host negotiation success
    static constexpr uint32_t FS_GOTGCTL_HNPRQ = 0x200;    // HNP request
    static constexpr uint32_t FS_GOTGCTL_HSHNPEN = 0x400;  // Host set HNP enable
    static constexpr uint32_t FS_GOTGCTL_DHNPEN = 0x800;   // Device HNP enabled
    static constexpr uint32_t FS_GOTGCTL_CIDSTS = 0x10000; // Connector ID status
    static constexpr uint32_t FS_GOTGCTL_DBCT = 0x20000;   // Long/short debounce time
    static constexpr uint32_t FS_GOTGCTL_ASVLD = 0x40000;  // A-session valid
    static constexpr uint32_t FS_GOTGCTL_BSVLD = 0x80000;  // B-session valid

    static constexpr uint32_t FS_GOTGINT_RESET_VALUE = 0x0;
    static constexpr uint32_t FS_GOTGINT_SEDET = 0x4;       // Session end detected
    static constexpr uint32_t FS_GOTGINT_SRSSCHG = 0x100;   // Session request success status change
    static constexpr uint32_t FS_GOTGINT_HNSSCHG = 0x200;   // Host negotiation success status change
    static constexpr uint32_t FS_GOTGINT_HNGDET = 0x20000;  // Host negotiation detected
    static constexpr uint32_t FS_GOTGINT_ADTOCHG = 0x40000; // A-device timeout change
    static constexpr uint32_t FS_GOTGINT_DBCDNE = 0x80000;  // Debounce done

    static constexpr uint32_t FS_GAHBCFG_RESET_VALUE = 0x0;
    static constexpr uint32_t FS_GAHBCFG_GINT = 0x1;       // Global interrupt mask
    static constexpr uint32_t FS_GAHBCFG_TXFELVL = 0x80;   // TxFIFO empty level
    static constexpr uint32_t FS_GAHBCFG_PTXFELVL = 0x100; // Periodic TxFIFO empty level

    static constexpr uint32_t FS_GUSBCFG_RESET_VALUE = 0xa00;
    template<uint32_t X>
    static constexpr uint32_t FS_GUSBCFG_TOCAL =              // FS timeout calibration
        bit_field_t<0, 0x7>::value<X>();
    static constexpr uint32_t FS_GUSBCFG_PHYSEL = 0x80;       // Full Speed serial transceiver select
    static constexpr uint32_t FS_GUSBCFG_SRPCAP = 0x100;      // SRP-capable
    static constexpr uint32_t FS_GUSBCFG_HNPCAP = 0x200;      // HNP-capable
    template<uint32_t X>
    static constexpr uint32_t FS_GUSBCFG_TRDT =               // USB turnaround time
        bit_field_t<10, 0xf>::value<X>();
    static constexpr uint32_t FS_GUSBCFG_FHMOD = 0x20000000;  // Force host mode
    static constexpr uint32_t FS_GUSBCFG_FDMOD = 0x40000000;  // Force device mode
    static constexpr uint32_t FS_GUSBCFG_CTXPKT = 0x80000000; // Corrupt Tx packet

    static constexpr uint32_t FS_GRSTCTL_RESET_VALUE = 0x20000000;
    static constexpr uint32_t FS_GRSTCTL_CSRST = 0x1;         // Core soft reset
    static constexpr uint32_t FS_GRSTCTL_HSRST = 0x2;         // HCLK soft reset
    static constexpr uint32_t FS_GRSTCTL_FCRST = 0x4;         // Host frame counter reset
    static constexpr uint32_t FS_GRSTCTL_RXFFLSH = 0x10;      // RxFIFO flush
    static constexpr uint32_t FS_GRSTCTL_TXFFLSH = 0x20;      // TxFIFO flush
    template<uint32_t X>
    static constexpr uint32_t FS_GRSTCTL_TXFNUM =             // TxFIFO number
        bit_field_t<6, 0x1f>::value<X>();
    static constexpr uint32_t FS_GRSTCTL_AHBIDL = 0x80000000; // AHB master idle

    static constexpr uint32_t FS_GINTSTS_RESET_VALUE = 0x4000020;
    static constexpr uint32_t FS_GINTSTS_CMOD = 0x1;                    // Current mode of operation
    static constexpr uint32_t FS_GINTSTS_MMIS = 0x2;                    // Mode mismatch interrupt
    static constexpr uint32_t FS_GINTSTS_OTGINT = 0x4;                  // OTG interrupt
    static constexpr uint32_t FS_GINTSTS_SOF = 0x8;                     // Start of frame
    static constexpr uint32_t FS_GINTSTS_RXFLVL = 0x10;                 // RxFIFO non-empty
    static constexpr uint32_t FS_GINTSTS_NPTXFE = 0x20;                 // Non-periodic TxFIFO empty
    static constexpr uint32_t FS_GINTSTS_GINAKEFF = 0x40;               // Global IN non-periodic NAK effective
    static constexpr uint32_t FS_GINTSTS_GOUTNAKEFF = 0x80;             // Global OUT NAK effective
    static constexpr uint32_t FS_GINTSTS_ESUSP = 0x400;                 // Early suspend
    static constexpr uint32_t FS_GINTSTS_USBSUSP = 0x800;               // USB suspend
    static constexpr uint32_t FS_GINTSTS_USBRST = 0x1000;               // USB reset
    static constexpr uint32_t FS_GINTSTS_ENUMDNE = 0x2000;              // Enumeration done
    static constexpr uint32_t FS_GINTSTS_ISOODRP = 0x4000;              // Isochronous OUT packet dropped interrupt
    static constexpr uint32_t FS_GINTSTS_EOPF = 0x8000;                 // End of periodic frame interrupt
    static constexpr uint32_t FS_GINTSTS_IEPINT = 0x40000;              // IN endpoint interrupt
    static constexpr uint32_t FS_GINTSTS_OEPINT = 0x80000;              // OUT endpoint interrupt
    static constexpr uint32_t FS_GINTSTS_IISOIXFR = 0x100000;           // Incomplete isochronous IN transfer
    static constexpr uint32_t FS_GINTSTS_IPXFR_INCOMPISOOUT = 0x200000; // Incomplete periodic transfer(Host mode)/Incomplete isochronous OUT transfer(Device mode)
    static constexpr uint32_t FS_GINTSTS_HPRTINT = 0x1000000;           // Host port interrupt
    static constexpr uint32_t FS_GINTSTS_HCINT = 0x2000000;             // Host channels interrupt
    static constexpr uint32_t FS_GINTSTS_PTXFE = 0x4000000;             // Periodic TxFIFO empty
    static constexpr uint32_t FS_GINTSTS_CIDSCHG = 0x10000000;          // Connector ID status change
    static constexpr uint32_t FS_GINTSTS_DISCINT = 0x20000000;          // Disconnect detected interrupt
    static constexpr uint32_t FS_GINTSTS_SRQINT = 0x40000000;           // Session request/new session detected interrupt
    static constexpr uint32_t FS_GINTSTS_WKUPINT = 0x80000000;          // Resume/remote wakeup detected interrupt

    static constexpr uint32_t FS_GINTMSK_RESET_VALUE = 0x0;
    static constexpr uint32_t FS_GINTMSK_MMISM = 0x2;                 // Mode mismatch interrupt mask
    static constexpr uint32_t FS_GINTMSK_OTGINT = 0x4;                // OTG interrupt mask
    static constexpr uint32_t FS_GINTMSK_SOFM = 0x8;                  // Start of frame mask
    static constexpr uint32_t FS_GINTMSK_RXFLVLM = 0x10;              // Receive FIFO non-empty mask
    static constexpr uint32_t FS_GINTMSK_NPTXFEM = 0x20;              // Non-periodic TxFIFO empty mask
    static constexpr uint32_t FS_GINTMSK_GINAKEFFM = 0x40;            // Global non-periodic IN NAK effective mask
    static constexpr uint32_t FS_GINTMSK_GONAKEFFM = 0x80;            // Global OUT NAK effective mask
    static constexpr uint32_t FS_GINTMSK_ESUSPM = 0x400;              // Early suspend mask
    static constexpr uint32_t FS_GINTMSK_USBSUSPM = 0x800;            // USB suspend mask
    static constexpr uint32_t FS_GINTMSK_USBRST = 0x1000;             // USB reset mask
    static constexpr uint32_t FS_GINTMSK_ENUMDNEM = 0x2000;           // Enumeration done mask
    static constexpr uint32_t FS_GINTMSK_ISOODRPM = 0x4000;           // Isochronous OUT packet dropped interrupt mask
    static constexpr uint32_t FS_GINTMSK_EOPFM = 0x8000;              // End of periodic frame interrupt mask
    static constexpr uint32_t FS_GINTMSK_EPMISM = 0x20000;            // Endpoint mismatch interrupt mask
    static constexpr uint32_t FS_GINTMSK_IEPINT = 0x40000;            // IN endpoints interrupt mask
    static constexpr uint32_t FS_GINTMSK_OEPINT = 0x80000;            // OUT endpoints interrupt mask
    static constexpr uint32_t FS_GINTMSK_IISOIXFRM = 0x100000;        // Incomplete isochronous IN transfer mask
    static constexpr uint32_t FS_GINTMSK_IPXFRM_IISOOXFRM = 0x200000; // Incomplete periodic transfer mask(Host mode)/Incomplete isochronous OUT transfer mask(Device mode)
    static constexpr uint32_t FS_GINTMSK_PRTIM = 0x1000000;           // Host port interrupt mask
    static constexpr uint32_t FS_GINTMSK_HCIM = 0x2000000;            // Host channels interrupt mask
    static constexpr uint32_t FS_GINTMSK_PTXFEM = 0x4000000;          // Periodic TxFIFO empty mask
    static constexpr uint32_t FS_GINTMSK_CIDSCHGM = 0x10000000;       // Connector ID status change mask
    static constexpr uint32_t FS_GINTMSK_DISCINT = 0x20000000;        // Disconnect detected interrupt mask
    static constexpr uint32_t FS_GINTMSK_SRQIM = 0x40000000;          // Session request/new session detected interrupt mask
    static constexpr uint32_t FS_GINTMSK_WUIM = 0x80000000;           // Resume/remote wakeup detected interrupt mask

    static constexpr uint32_t FS_GRXSTSR_Device_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FS_GRXSTSR_Device_EPNUM =    // Endpoint number
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FS_GRXSTSR_Device_BCNT =     // Byte count
        bit_field_t<4, 0x7ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FS_GRXSTSR_Device_DPID =     // Data PID
        bit_field_t<15, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FS_GRXSTSR_Device_PKTSTS =   // Packet status
        bit_field_t<17, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FS_GRXSTSR_Device_FRMNUM =   // Frame number
        bit_field_t<21, 0xf>::value<X>();

    static constexpr uint32_t FS_GRXSTSR_Host_RESET_VALUE = 0x0;
    template<uint32_t X>
    static constexpr uint32_t FS_GRXSTSR_Host_EPNUM =    // Endpoint number
        bit_field_t<0, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FS_GRXSTSR_Host_BCNT =     // Byte count
        bit_field_t<4, 0x7ff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FS_GRXSTSR_Host_DPID =     // Data PID
        bit_field_t<15, 0x3>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FS_GRXSTSR_Host_PKTSTS =   // Packet status
        bit_field_t<17, 0xf>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FS_GRXSTSR_Host_FRMNUM =   // Frame number
        bit_field_t<21, 0xf>::value<X>();

    static constexpr uint32_t FS_GRXFSIZ_RESET_VALUE = 0x200;
    template<uint32_t X>
    static constexpr uint32_t FS_GRXFSIZ_RXFD =   // RxFIFO depth
        bit_field_t<0, 0xffff>::value<X>();

    static constexpr uint32_t FS_GNPTXFSIZ_Device_RESET_VALUE = 0x200;
    template<uint32_t X>
    static constexpr uint32_t FS_GNPTXFSIZ_Device_TX0FSA =   // Endpoint 0 transmit RAM start address
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FS_GNPTXFSIZ_Device_TX0FD =    // Endpoint 0 TxFIFO depth
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t FS_GNPTXFSIZ_Host_RESET_VALUE = 0x200;
    template<uint32_t X>
    static constexpr uint32_t FS_GNPTXFSIZ_Host_NPTXFSA =   // Non-periodic transmit RAM start address
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FS_GNPTXFSIZ_Host_NPTXFD =    // Non-periodic TxFIFO depth
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t FS_GNPTXSTS_RESET_VALUE = 0x80200;
    template<uint32_t X>
    static constexpr uint32_t FS_GNPTXSTS_NPTXFSAV =   // Non-periodic TxFIFO space available
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FS_GNPTXSTS_NPTQXSAV =   // Non-periodic transmit request queue space available
        bit_field_t<16, 0xff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FS_GNPTXSTS_NPTXQTOP =   // Top of the non-periodic transmit request queue
        bit_field_t<24, 0x7f>::value<X>();

    static constexpr uint32_t FS_GCCFG_RESET_VALUE = 0x0;
    static constexpr uint32_t FS_GCCFG_PWRDWN = 0x10000;    // Power down
    static constexpr uint32_t FS_GCCFG_VBUSASEN = 0x40000;  // Enable the VBUS sensing device
    static constexpr uint32_t FS_GCCFG_VBUSBSEN = 0x80000;  // Enable the VBUS sensing device
    static constexpr uint32_t FS_GCCFG_SOFOUTEN = 0x100000; // SOF output enable

    static constexpr uint32_t FS_CID_RESET_VALUE = 0x1000;

    static constexpr uint32_t FS_HPTXFSIZ_RESET_VALUE = 0x2000600;
    template<uint32_t X>
    static constexpr uint32_t FS_HPTXFSIZ_PTXSA =     // Host periodic TxFIFO start address
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FS_HPTXFSIZ_PTXFSIZ =   // Host periodic TxFIFO depth
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t FS_DIEPTXF1_RESET_VALUE = 0x2000400;
    template<uint32_t X>
    static constexpr uint32_t FS_DIEPTXF1_INEPTXSA =   // IN endpoint FIFO2 transmit RAM start address
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FS_DIEPTXF1_INEPTXFD =   // IN endpoint TxFIFO depth
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t FS_DIEPTXF2_RESET_VALUE = 0x2000400;
    template<uint32_t X>
    static constexpr uint32_t FS_DIEPTXF2_INEPTXSA =   // IN endpoint FIFO3 transmit RAM start address
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FS_DIEPTXF2_INEPTXFD =   // IN endpoint TxFIFO depth
        bit_field_t<16, 0xffff>::value<X>();

    static constexpr uint32_t FS_DIEPTXF3_RESET_VALUE = 0x2000400;
    template<uint32_t X>
    static constexpr uint32_t FS_DIEPTXF3_INEPTXSA =   // IN endpoint FIFO4 transmit RAM start address
        bit_field_t<0, 0xffff>::value<X>();
    template<uint32_t X>
    static constexpr uint32_t FS_DIEPTXF3_INEPTXFD =   // IN endpoint TxFIFO depth
        bit_field_t<16, 0xffff>::value<X>();
};


template<>
struct peripheral_t<STM32F107, USB_OTG_GLOBAL>
{
    typedef stm32f107_usb_otg_global_t T;
    static T& V;
};

using usb_otg_global_t = peripheral_t<mcu_svd, USB_OTG_GLOBAL>;

