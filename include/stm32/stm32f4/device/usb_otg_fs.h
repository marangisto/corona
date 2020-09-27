#pragma once

////
//
//      STM32F4 USB_OTG_FS peripherals
//
///

// OTG_FS_DEVICE: USB on the go full speed

struct stm32f401_otg_fs_device_t
{
    volatile uint32_t FS_DCFG; // OTG_FS device configuration register (OTG_FS_DCFG)
    volatile uint32_t FS_DCTL; // OTG_FS device control register (OTG_FS_DCTL)
    volatile uint32_t FS_DSTS; // OTG_FS device status register (OTG_FS_DSTS)
    reserved_t<0x1> _0xc;
    volatile uint32_t FS_DIEPMSK; // OTG_FS device IN endpoint common interrupt mask register (OTG_FS_DIEPMSK)
    volatile uint32_t FS_DOEPMSK; // OTG_FS device OUT endpoint common interrupt mask register (OTG_FS_DOEPMSK)
    volatile uint32_t FS_DAINT; // OTG_FS device all endpoints interrupt register (OTG_FS_DAINT)
    volatile uint32_t FS_DAINTMSK; // OTG_FS all endpoints interrupt mask register (OTG_FS_DAINTMSK)
    reserved_t<0x2> _0x20;
    volatile uint32_t DVBUSDIS; // OTG_FS device VBUS discharge time register
    volatile uint32_t DVBUSPULSE; // OTG_FS device VBUS pulsing time register
    reserved_t<0x1> _0x30;
    volatile uint32_t DIEPEMPMSK; // OTG_FS device IN endpoint FIFO empty interrupt mask register
    reserved_t<0x32> _0x38;
    volatile uint32_t FS_DIEPCTL0; // OTG_FS device control IN endpoint 0 control register (OTG_FS_DIEPCTL0)
    reserved_t<0x1> _0x104;
    volatile uint32_t DIEPINT0; // device endpoint-x interrupt register
    reserved_t<0x1> _0x10c;
    volatile uint32_t DIEPTSIZ0; // device endpoint-0 transfer size register
    reserved_t<0x1> _0x114;
    volatile uint32_t DTXFSTS0; // OTG_FS device IN endpoint transmit FIFO status register
    reserved_t<0x1> _0x11c;
    volatile uint32_t DIEPCTL1; // OTG device endpoint-1 control register
    reserved_t<0x1> _0x124;
    volatile uint32_t DIEPINT1; // device endpoint-1 interrupt register
    reserved_t<0x1> _0x12c;
    volatile uint32_t DIEPTSIZ1; // device endpoint-1 transfer size register
    reserved_t<0x1> _0x134;
    volatile uint32_t DTXFSTS1; // OTG_FS device IN endpoint transmit FIFO status register
    reserved_t<0x1> _0x13c;
    volatile uint32_t DIEPCTL2; // OTG device endpoint-2 control register
    reserved_t<0x1> _0x144;
    volatile uint32_t DIEPINT2; // device endpoint-2 interrupt register
    reserved_t<0x1> _0x14c;
    volatile uint32_t DIEPTSIZ2; // device endpoint-2 transfer size register
    reserved_t<0x1> _0x154;
    volatile uint32_t DTXFSTS2; // OTG_FS device IN endpoint transmit FIFO status register
    reserved_t<0x1> _0x15c;
    volatile uint32_t DIEPCTL3; // OTG device endpoint-3 control register
    reserved_t<0x1> _0x164;
    volatile uint32_t DIEPINT3; // device endpoint-3 interrupt register
    reserved_t<0x1> _0x16c;
    volatile uint32_t DIEPTSIZ3; // device endpoint-3 transfer size register
    reserved_t<0x1> _0x174;
    volatile uint32_t DTXFSTS3; // OTG_FS device IN endpoint transmit FIFO status register
    reserved_t<0x61> _0x17c;
    volatile uint32_t DOEPCTL0; // device endpoint-0 control register
    reserved_t<0x1> _0x304;
    volatile uint32_t DOEPINT0; // device endpoint-0 interrupt register
    reserved_t<0x1> _0x30c;
    volatile uint32_t DOEPTSIZ0; // device OUT endpoint-0 transfer size register
    reserved_t<0x3> _0x314;
    volatile uint32_t DOEPCTL1; // device endpoint-1 control register
    reserved_t<0x1> _0x324;
    volatile uint32_t DOEPINT1; // device endpoint-1 interrupt register
    reserved_t<0x1> _0x32c;
    volatile uint32_t DOEPTSIZ1; // device OUT endpoint-1 transfer size register
    reserved_t<0x3> _0x334;
    volatile uint32_t DOEPCTL2; // device endpoint-2 control register
    reserved_t<0x1> _0x344;
    volatile uint32_t DOEPINT2; // device endpoint-2 interrupt register
    reserved_t<0x1> _0x34c;
    volatile uint32_t DOEPTSIZ2; // device OUT endpoint-2 transfer size register
    reserved_t<0x3> _0x354;
    volatile uint32_t DOEPCTL3; // device endpoint-3 control register
    reserved_t<0x1> _0x364;
    volatile uint32_t DOEPINT3; // device endpoint-3 interrupt register
    reserved_t<0x1> _0x36c;
    volatile uint32_t DOEPTSIZ3; // device OUT endpoint-3 transfer size register

    static constexpr uint32_t FS_DCFG_RESET_VALUE = 0x2200000; // Reset value
    typedef bit_field_t<0, 0x3> FS_DCFG_DSPD; // Device speed
    static constexpr uint32_t FS_DCFG_NZLSOHSK = 0x4; // Non-zero-length status OUT handshake
    typedef bit_field_t<4, 0x7f> FS_DCFG_DAD; // Device address
    typedef bit_field_t<11, 0x3> FS_DCFG_PFIVL; // Periodic frame interval

    static constexpr uint32_t FS_DCTL_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FS_DCTL_RWUSIG = 0x1; // Remote wakeup signaling
    static constexpr uint32_t FS_DCTL_SDIS = 0x2; // Soft disconnect
    static constexpr uint32_t FS_DCTL_GINSTS = 0x4; // Global IN NAK status
    static constexpr uint32_t FS_DCTL_GONSTS = 0x8; // Global OUT NAK status
    typedef bit_field_t<4, 0x7> FS_DCTL_TCTL; // Test control
    static constexpr uint32_t FS_DCTL_SGINAK = 0x80; // Set global IN NAK
    static constexpr uint32_t FS_DCTL_CGINAK = 0x100; // Clear global IN NAK
    static constexpr uint32_t FS_DCTL_SGONAK = 0x200; // Set global OUT NAK
    static constexpr uint32_t FS_DCTL_CGONAK = 0x400; // Clear global OUT NAK
    static constexpr uint32_t FS_DCTL_POPRGDNE = 0x800; // Power-on programming done

    static constexpr uint32_t FS_DSTS_RESET_VALUE = 0x10; // Reset value
    static constexpr uint32_t FS_DSTS_SUSPSTS = 0x1; // Suspend status
    typedef bit_field_t<1, 0x3> FS_DSTS_ENUMSPD; // Enumerated speed
    static constexpr uint32_t FS_DSTS_EERR = 0x8; // Erratic error
    typedef bit_field_t<8, 0x3fff> FS_DSTS_FNSOF; // Frame number of the received SOF


    static constexpr uint32_t FS_DIEPMSK_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FS_DIEPMSK_XFRCM = 0x1; // Transfer completed interrupt mask
    static constexpr uint32_t FS_DIEPMSK_EPDM = 0x2; // Endpoint disabled interrupt mask
    static constexpr uint32_t FS_DIEPMSK_TOM = 0x8; // Timeout condition mask (Non-isochronous endpoints)
    static constexpr uint32_t FS_DIEPMSK_ITTXFEMSK = 0x10; // IN token received when TxFIFO empty mask
    static constexpr uint32_t FS_DIEPMSK_INEPNMM = 0x20; // IN token received with EP mismatch mask
    static constexpr uint32_t FS_DIEPMSK_INEPNEM = 0x40; // IN endpoint NAK effective mask

    static constexpr uint32_t FS_DOEPMSK_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FS_DOEPMSK_XFRCM = 0x1; // Transfer completed interrupt mask
    static constexpr uint32_t FS_DOEPMSK_EPDM = 0x2; // Endpoint disabled interrupt mask
    static constexpr uint32_t FS_DOEPMSK_STUPM = 0x8; // SETUP phase done mask
    static constexpr uint32_t FS_DOEPMSK_OTEPDM = 0x10; // OUT token received when endpoint disabled mask

    static constexpr uint32_t FS_DAINT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> FS_DAINT_IEPINT; // IN endpoint interrupt bits
    typedef bit_field_t<16, 0xffff> FS_DAINT_OEPINT; // OUT endpoint interrupt bits

    static constexpr uint32_t FS_DAINTMSK_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> FS_DAINTMSK_IEPM; // IN EP interrupt mask bits
    typedef bit_field_t<16, 0xffff> FS_DAINTMSK_OEPINT; // OUT endpoint interrupt bits


    static constexpr uint32_t DVBUSDIS_RESET_VALUE = 0x17d7; // Reset value
    typedef bit_field_t<0, 0xffff> DVBUSDIS_VBUSDT; // Device VBUS discharge time

    static constexpr uint32_t DVBUSPULSE_RESET_VALUE = 0x5b8; // Reset value
    typedef bit_field_t<0, 0xfff> DVBUSPULSE_DVBUSP; // Device VBUS pulsing time


    static constexpr uint32_t DIEPEMPMSK_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DIEPEMPMSK_INEPTXFEM; // IN EP Tx FIFO empty interrupt mask bits


    static constexpr uint32_t FS_DIEPCTL0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> FS_DIEPCTL0_MPSIZ; // Maximum packet size
    static constexpr uint32_t FS_DIEPCTL0_USBAEP = 0x8000; // USB active endpoint
    static constexpr uint32_t FS_DIEPCTL0_NAKSTS = 0x20000; // NAK status
    typedef bit_field_t<18, 0x3> FS_DIEPCTL0_EPTYP; // Endpoint type
    static constexpr uint32_t FS_DIEPCTL0_STALL = 0x200000; // STALL handshake
    typedef bit_field_t<22, 0xf> FS_DIEPCTL0_TXFNUM; // TxFIFO number
    static constexpr uint32_t FS_DIEPCTL0_CNAK = 0x4000000; // Clear NAK
    static constexpr uint32_t FS_DIEPCTL0_SNAK = 0x8000000; // Set NAK
    static constexpr uint32_t FS_DIEPCTL0_EPDIS = 0x40000000; // Endpoint disable
    static constexpr uint32_t FS_DIEPCTL0_EPENA = 0x80000000; // Endpoint enable


    static constexpr uint32_t DIEPINT0_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t DIEPINT0_TXFE = 0x80; // TXFE
    static constexpr uint32_t DIEPINT0_INEPNE = 0x40; // INEPNE
    static constexpr uint32_t DIEPINT0_ITTXFE = 0x10; // ITTXFE
    static constexpr uint32_t DIEPINT0_TOC = 0x8; // TOC
    static constexpr uint32_t DIEPINT0_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t DIEPINT0_XFRC = 0x1; // XFRC


    static constexpr uint32_t DIEPTSIZ0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<19, 0x3> DIEPTSIZ0_PKTCNT; // Packet count
    typedef bit_field_t<0, 0x7f> DIEPTSIZ0_XFRSIZ; // Transfer size


    static constexpr uint32_t DTXFSTS0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DTXFSTS0_INEPTFSAV; // IN endpoint TxFIFO space available


    static constexpr uint32_t DIEPCTL1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DIEPCTL1_EPENA = 0x80000000; // EPENA
    static constexpr uint32_t DIEPCTL1_EPDIS = 0x40000000; // EPDIS
    static constexpr uint32_t DIEPCTL1_SODDFRM_SD1PID = 0x20000000; // SODDFRM/SD1PID
    static constexpr uint32_t DIEPCTL1_SD0PID_SEVNFRM = 0x10000000; // SD0PID/SEVNFRM
    static constexpr uint32_t DIEPCTL1_SNAK = 0x8000000; // SNAK
    static constexpr uint32_t DIEPCTL1_CNAK = 0x4000000; // CNAK
    typedef bit_field_t<22, 0xf> DIEPCTL1_TXFNUM; // TXFNUM
    static constexpr uint32_t DIEPCTL1_STALL = 0x200000; // Stall
    typedef bit_field_t<18, 0x3> DIEPCTL1_EPTYP; // EPTYP
    static constexpr uint32_t DIEPCTL1_NAKSTS = 0x20000; // NAKSTS
    static constexpr uint32_t DIEPCTL1_EONUM_DPID = 0x10000; // EONUM/DPID
    static constexpr uint32_t DIEPCTL1_USBAEP = 0x8000; // USBAEP
    typedef bit_field_t<0, 0x7ff> DIEPCTL1_MPSIZ; // MPSIZ


    static constexpr uint32_t DIEPINT1_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t DIEPINT1_TXFE = 0x80; // TXFE
    static constexpr uint32_t DIEPINT1_INEPNE = 0x40; // INEPNE
    static constexpr uint32_t DIEPINT1_ITTXFE = 0x10; // ITTXFE
    static constexpr uint32_t DIEPINT1_TOC = 0x8; // TOC
    static constexpr uint32_t DIEPINT1_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t DIEPINT1_XFRC = 0x1; // XFRC


    static constexpr uint32_t DIEPTSIZ1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<29, 0x3> DIEPTSIZ1_MCNT; // Multi count
    typedef bit_field_t<19, 0x3ff> DIEPTSIZ1_PKTCNT; // Packet count
    typedef bit_field_t<0, 0x7ffff> DIEPTSIZ1_XFRSIZ; // Transfer size


    static constexpr uint32_t DTXFSTS1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DTXFSTS1_INEPTFSAV; // IN endpoint TxFIFO space available


    static constexpr uint32_t DIEPCTL2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DIEPCTL2_EPENA = 0x80000000; // EPENA
    static constexpr uint32_t DIEPCTL2_EPDIS = 0x40000000; // EPDIS
    static constexpr uint32_t DIEPCTL2_SODDFRM = 0x20000000; // SODDFRM
    static constexpr uint32_t DIEPCTL2_SD0PID_SEVNFRM = 0x10000000; // SD0PID/SEVNFRM
    static constexpr uint32_t DIEPCTL2_SNAK = 0x8000000; // SNAK
    static constexpr uint32_t DIEPCTL2_CNAK = 0x4000000; // CNAK
    typedef bit_field_t<22, 0xf> DIEPCTL2_TXFNUM; // TXFNUM
    static constexpr uint32_t DIEPCTL2_STALL = 0x200000; // Stall
    typedef bit_field_t<18, 0x3> DIEPCTL2_EPTYP; // EPTYP
    static constexpr uint32_t DIEPCTL2_NAKSTS = 0x20000; // NAKSTS
    static constexpr uint32_t DIEPCTL2_EONUM_DPID = 0x10000; // EONUM/DPID
    static constexpr uint32_t DIEPCTL2_USBAEP = 0x8000; // USBAEP
    typedef bit_field_t<0, 0x7ff> DIEPCTL2_MPSIZ; // MPSIZ


    static constexpr uint32_t DIEPINT2_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t DIEPINT2_TXFE = 0x80; // TXFE
    static constexpr uint32_t DIEPINT2_INEPNE = 0x40; // INEPNE
    static constexpr uint32_t DIEPINT2_ITTXFE = 0x10; // ITTXFE
    static constexpr uint32_t DIEPINT2_TOC = 0x8; // TOC
    static constexpr uint32_t DIEPINT2_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t DIEPINT2_XFRC = 0x1; // XFRC


    static constexpr uint32_t DIEPTSIZ2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<29, 0x3> DIEPTSIZ2_MCNT; // Multi count
    typedef bit_field_t<19, 0x3ff> DIEPTSIZ2_PKTCNT; // Packet count
    typedef bit_field_t<0, 0x7ffff> DIEPTSIZ2_XFRSIZ; // Transfer size


    static constexpr uint32_t DTXFSTS2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DTXFSTS2_INEPTFSAV; // IN endpoint TxFIFO space available


    static constexpr uint32_t DIEPCTL3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DIEPCTL3_EPENA = 0x80000000; // EPENA
    static constexpr uint32_t DIEPCTL3_EPDIS = 0x40000000; // EPDIS
    static constexpr uint32_t DIEPCTL3_SODDFRM = 0x20000000; // SODDFRM
    static constexpr uint32_t DIEPCTL3_SD0PID_SEVNFRM = 0x10000000; // SD0PID/SEVNFRM
    static constexpr uint32_t DIEPCTL3_SNAK = 0x8000000; // SNAK
    static constexpr uint32_t DIEPCTL3_CNAK = 0x4000000; // CNAK
    typedef bit_field_t<22, 0xf> DIEPCTL3_TXFNUM; // TXFNUM
    static constexpr uint32_t DIEPCTL3_STALL = 0x200000; // Stall
    typedef bit_field_t<18, 0x3> DIEPCTL3_EPTYP; // EPTYP
    static constexpr uint32_t DIEPCTL3_NAKSTS = 0x20000; // NAKSTS
    static constexpr uint32_t DIEPCTL3_EONUM_DPID = 0x10000; // EONUM/DPID
    static constexpr uint32_t DIEPCTL3_USBAEP = 0x8000; // USBAEP
    typedef bit_field_t<0, 0x7ff> DIEPCTL3_MPSIZ; // MPSIZ


    static constexpr uint32_t DIEPINT3_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t DIEPINT3_TXFE = 0x80; // TXFE
    static constexpr uint32_t DIEPINT3_INEPNE = 0x40; // INEPNE
    static constexpr uint32_t DIEPINT3_ITTXFE = 0x10; // ITTXFE
    static constexpr uint32_t DIEPINT3_TOC = 0x8; // TOC
    static constexpr uint32_t DIEPINT3_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t DIEPINT3_XFRC = 0x1; // XFRC


    static constexpr uint32_t DIEPTSIZ3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<29, 0x3> DIEPTSIZ3_MCNT; // Multi count
    typedef bit_field_t<19, 0x3ff> DIEPTSIZ3_PKTCNT; // Packet count
    typedef bit_field_t<0, 0x7ffff> DIEPTSIZ3_XFRSIZ; // Transfer size


    static constexpr uint32_t DTXFSTS3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DTXFSTS3_INEPTFSAV; // IN endpoint TxFIFO space available


    static constexpr uint32_t DOEPCTL0_RESET_VALUE = 0x8000; // Reset value
    static constexpr uint32_t DOEPCTL0_EPENA = 0x80000000; // EPENA
    static constexpr uint32_t DOEPCTL0_EPDIS = 0x40000000; // EPDIS
    static constexpr uint32_t DOEPCTL0_SNAK = 0x8000000; // SNAK
    static constexpr uint32_t DOEPCTL0_CNAK = 0x4000000; // CNAK
    static constexpr uint32_t DOEPCTL0_STALL = 0x200000; // Stall
    static constexpr uint32_t DOEPCTL0_SNPM = 0x100000; // SNPM
    typedef bit_field_t<18, 0x3> DOEPCTL0_EPTYP; // EPTYP
    static constexpr uint32_t DOEPCTL0_NAKSTS = 0x20000; // NAKSTS
    static constexpr uint32_t DOEPCTL0_USBAEP = 0x8000; // USBAEP
    typedef bit_field_t<0, 0x3> DOEPCTL0_MPSIZ; // MPSIZ


    static constexpr uint32_t DOEPINT0_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t DOEPINT0_B2BSTUP = 0x40; // B2BSTUP
    static constexpr uint32_t DOEPINT0_OTEPDIS = 0x10; // OTEPDIS
    static constexpr uint32_t DOEPINT0_STUP = 0x8; // STUP
    static constexpr uint32_t DOEPINT0_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t DOEPINT0_XFRC = 0x1; // XFRC


    static constexpr uint32_t DOEPTSIZ0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<29, 0x3> DOEPTSIZ0_STUPCNT; // SETUP packet count
    static constexpr uint32_t DOEPTSIZ0_PKTCNT = 0x80000; // Packet count
    typedef bit_field_t<0, 0x7f> DOEPTSIZ0_XFRSIZ; // Transfer size


    static constexpr uint32_t DOEPCTL1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DOEPCTL1_EPENA = 0x80000000; // EPENA
    static constexpr uint32_t DOEPCTL1_EPDIS = 0x40000000; // EPDIS
    static constexpr uint32_t DOEPCTL1_SODDFRM = 0x20000000; // SODDFRM
    static constexpr uint32_t DOEPCTL1_SD0PID_SEVNFRM = 0x10000000; // SD0PID/SEVNFRM
    static constexpr uint32_t DOEPCTL1_SNAK = 0x8000000; // SNAK
    static constexpr uint32_t DOEPCTL1_CNAK = 0x4000000; // CNAK
    static constexpr uint32_t DOEPCTL1_STALL = 0x200000; // Stall
    static constexpr uint32_t DOEPCTL1_SNPM = 0x100000; // SNPM
    typedef bit_field_t<18, 0x3> DOEPCTL1_EPTYP; // EPTYP
    static constexpr uint32_t DOEPCTL1_NAKSTS = 0x20000; // NAKSTS
    static constexpr uint32_t DOEPCTL1_EONUM_DPID = 0x10000; // EONUM/DPID
    static constexpr uint32_t DOEPCTL1_USBAEP = 0x8000; // USBAEP
    typedef bit_field_t<0, 0x7ff> DOEPCTL1_MPSIZ; // MPSIZ


    static constexpr uint32_t DOEPINT1_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t DOEPINT1_B2BSTUP = 0x40; // B2BSTUP
    static constexpr uint32_t DOEPINT1_OTEPDIS = 0x10; // OTEPDIS
    static constexpr uint32_t DOEPINT1_STUP = 0x8; // STUP
    static constexpr uint32_t DOEPINT1_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t DOEPINT1_XFRC = 0x1; // XFRC


    static constexpr uint32_t DOEPTSIZ1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<29, 0x3> DOEPTSIZ1_RXDPID_STUPCNT; // Received data PID/SETUP packet count
    typedef bit_field_t<19, 0x3ff> DOEPTSIZ1_PKTCNT; // Packet count
    typedef bit_field_t<0, 0x7ffff> DOEPTSIZ1_XFRSIZ; // Transfer size


    static constexpr uint32_t DOEPCTL2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DOEPCTL2_EPENA = 0x80000000; // EPENA
    static constexpr uint32_t DOEPCTL2_EPDIS = 0x40000000; // EPDIS
    static constexpr uint32_t DOEPCTL2_SODDFRM = 0x20000000; // SODDFRM
    static constexpr uint32_t DOEPCTL2_SD0PID_SEVNFRM = 0x10000000; // SD0PID/SEVNFRM
    static constexpr uint32_t DOEPCTL2_SNAK = 0x8000000; // SNAK
    static constexpr uint32_t DOEPCTL2_CNAK = 0x4000000; // CNAK
    static constexpr uint32_t DOEPCTL2_STALL = 0x200000; // Stall
    static constexpr uint32_t DOEPCTL2_SNPM = 0x100000; // SNPM
    typedef bit_field_t<18, 0x3> DOEPCTL2_EPTYP; // EPTYP
    static constexpr uint32_t DOEPCTL2_NAKSTS = 0x20000; // NAKSTS
    static constexpr uint32_t DOEPCTL2_EONUM_DPID = 0x10000; // EONUM/DPID
    static constexpr uint32_t DOEPCTL2_USBAEP = 0x8000; // USBAEP
    typedef bit_field_t<0, 0x7ff> DOEPCTL2_MPSIZ; // MPSIZ


    static constexpr uint32_t DOEPINT2_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t DOEPINT2_B2BSTUP = 0x40; // B2BSTUP
    static constexpr uint32_t DOEPINT2_OTEPDIS = 0x10; // OTEPDIS
    static constexpr uint32_t DOEPINT2_STUP = 0x8; // STUP
    static constexpr uint32_t DOEPINT2_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t DOEPINT2_XFRC = 0x1; // XFRC


    static constexpr uint32_t DOEPTSIZ2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<29, 0x3> DOEPTSIZ2_RXDPID_STUPCNT; // Received data PID/SETUP packet count
    typedef bit_field_t<19, 0x3ff> DOEPTSIZ2_PKTCNT; // Packet count
    typedef bit_field_t<0, 0x7ffff> DOEPTSIZ2_XFRSIZ; // Transfer size


    static constexpr uint32_t DOEPCTL3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DOEPCTL3_EPENA = 0x80000000; // EPENA
    static constexpr uint32_t DOEPCTL3_EPDIS = 0x40000000; // EPDIS
    static constexpr uint32_t DOEPCTL3_SODDFRM = 0x20000000; // SODDFRM
    static constexpr uint32_t DOEPCTL3_SD0PID_SEVNFRM = 0x10000000; // SD0PID/SEVNFRM
    static constexpr uint32_t DOEPCTL3_SNAK = 0x8000000; // SNAK
    static constexpr uint32_t DOEPCTL3_CNAK = 0x4000000; // CNAK
    static constexpr uint32_t DOEPCTL3_STALL = 0x200000; // Stall
    static constexpr uint32_t DOEPCTL3_SNPM = 0x100000; // SNPM
    typedef bit_field_t<18, 0x3> DOEPCTL3_EPTYP; // EPTYP
    static constexpr uint32_t DOEPCTL3_NAKSTS = 0x20000; // NAKSTS
    static constexpr uint32_t DOEPCTL3_EONUM_DPID = 0x10000; // EONUM/DPID
    static constexpr uint32_t DOEPCTL3_USBAEP = 0x8000; // USBAEP
    typedef bit_field_t<0, 0x7ff> DOEPCTL3_MPSIZ; // MPSIZ


    static constexpr uint32_t DOEPINT3_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t DOEPINT3_B2BSTUP = 0x40; // B2BSTUP
    static constexpr uint32_t DOEPINT3_OTEPDIS = 0x10; // OTEPDIS
    static constexpr uint32_t DOEPINT3_STUP = 0x8; // STUP
    static constexpr uint32_t DOEPINT3_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t DOEPINT3_XFRC = 0x1; // XFRC


    static constexpr uint32_t DOEPTSIZ3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<29, 0x3> DOEPTSIZ3_RXDPID_STUPCNT; // Received data PID/SETUP packet count
    typedef bit_field_t<19, 0x3ff> DOEPTSIZ3_PKTCNT; // Packet count
    typedef bit_field_t<0, 0x7ffff> DOEPTSIZ3_XFRSIZ; // Transfer size
};

// OTG_FS_DEVICE: USB on the go full speed

struct stm32f413_otg_fs_device_t
{
    volatile uint32_t FS_DCFG; // OTG_FS device configuration register (OTG_FS_DCFG)
    volatile uint32_t FS_DCTL; // OTG_FS device control register (OTG_FS_DCTL)
    volatile uint32_t FS_DSTS; // OTG_FS device status register (OTG_FS_DSTS)
    reserved_t<0x1> _0xc;
    volatile uint32_t FS_DIEPMSK; // OTG_FS device IN endpoint common interrupt mask register (OTG_FS_DIEPMSK)
    volatile uint32_t FS_DOEPMSK; // OTG_FS device OUT endpoint common interrupt mask register (OTG_FS_DOEPMSK)
    volatile uint32_t FS_DAINT; // OTG_FS device all endpoints interrupt register (OTG_FS_DAINT)
    volatile uint32_t FS_DAINTMSK; // OTG_FS all endpoints interrupt mask register (OTG_FS_DAINTMSK)
    reserved_t<0x2> _0x20;
    volatile uint32_t DVBUSDIS; // OTG_FS device VBUS discharge time register
    volatile uint32_t DVBUSPULSE; // OTG_FS device VBUS pulsing time register
    reserved_t<0x1> _0x30;
    volatile uint32_t DIEPEMPMSK; // OTG_FS device IN endpoint FIFO empty interrupt mask register
    reserved_t<0x32> _0x38;
    volatile uint32_t FS_DIEPCTL0; // OTG_FS device control IN endpoint 0 control register (OTG_FS_DIEPCTL0)
    reserved_t<0x1> _0x104;
    volatile uint32_t DIEPINT0; // device endpoint-x interrupt register
    reserved_t<0x1> _0x10c;
    volatile uint32_t DIEPTSIZ0; // device endpoint-0 transfer size register
    reserved_t<0x1> _0x114;
    volatile uint32_t DTXFSTS0; // OTG_FS device IN endpoint transmit FIFO status register
    reserved_t<0x1> _0x11c;
    volatile uint32_t DIEPCTL1; // OTG device endpoint-1 control register
    reserved_t<0x1> _0x124;
    volatile uint32_t DIEPINT1; // device endpoint-1 interrupt register
    reserved_t<0x1> _0x12c;
    volatile uint32_t DIEPTSIZ1; // device endpoint-1 transfer size register
    reserved_t<0x1> _0x134;
    volatile uint32_t DTXFSTS1; // OTG_FS device IN endpoint transmit FIFO status register
    reserved_t<0x1> _0x13c;
    volatile uint32_t DIEPCTL2; // OTG device endpoint-2 control register
    reserved_t<0x1> _0x144;
    volatile uint32_t DIEPINT2; // device endpoint-2 interrupt register
    reserved_t<0x1> _0x14c;
    volatile uint32_t DIEPTSIZ2; // device endpoint-2 transfer size register
    reserved_t<0x1> _0x154;
    volatile uint32_t DTXFSTS2; // OTG_FS device IN endpoint transmit FIFO status register
    reserved_t<0x1> _0x15c;
    volatile uint32_t DIEPCTL3; // OTG device endpoint-3 control register
    reserved_t<0x1> _0x164;
    volatile uint32_t DIEPINT3; // device endpoint-3 interrupt register
    reserved_t<0x1> _0x16c;
    volatile uint32_t DIEPTSIZ3; // device endpoint-3 transfer size register
    reserved_t<0x1> _0x174;
    volatile uint32_t DTXFSTS3; // OTG_FS device IN endpoint transmit FIFO status register
    reserved_t<0x61> _0x17c;
    volatile uint32_t DOEPCTL0; // device endpoint-0 control register
    reserved_t<0x1> _0x304;
    volatile uint32_t DOEPINT0; // device endpoint-0 interrupt register
    reserved_t<0x1> _0x30c;
    volatile uint32_t DOEPTSIZ0; // device OUT endpoint-0 transfer size register
    reserved_t<0x3> _0x314;
    volatile uint32_t DOEPCTL1; // device endpoint-1 control register
    reserved_t<0x1> _0x324;
    volatile uint32_t DOEPINT1; // device endpoint-1 interrupt register
    reserved_t<0x1> _0x32c;
    volatile uint32_t DOEPTSIZ1; // device OUT endpoint-1 transfer size register
    reserved_t<0x3> _0x334;
    volatile uint32_t DOEPCTL2; // device endpoint-2 control register
    reserved_t<0x1> _0x344;
    volatile uint32_t DOEPINT2; // device endpoint-2 interrupt register
    reserved_t<0x1> _0x34c;
    volatile uint32_t DOEPTSIZ2; // device OUT endpoint-2 transfer size register
    reserved_t<0x3> _0x354;
    volatile uint32_t DOEPCTL3; // device endpoint-3 control register
    reserved_t<0x1> _0x364;
    volatile uint32_t DOEPINT3; // device endpoint-3 interrupt register
    reserved_t<0x1> _0x36c;
    volatile uint32_t DOEPTSIZ3; // device OUT endpoint-3 transfer size register

    static constexpr uint32_t FS_DCFG_RESET_VALUE = 0x2200000; // Reset value
    typedef bit_field_t<0, 0x3> FS_DCFG_DSPD; // Device speed
    static constexpr uint32_t FS_DCFG_NZLSOHSK = 0x4; // Non-zero-length status OUT handshake
    typedef bit_field_t<4, 0x7f> FS_DCFG_DAD; // Device address
    typedef bit_field_t<11, 0x3> FS_DCFG_PFIVL; // Periodic frame interval

    static constexpr uint32_t FS_DCTL_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FS_DCTL_RWUSIG = 0x1; // Remote wakeup signaling
    static constexpr uint32_t FS_DCTL_SDIS = 0x2; // Soft disconnect
    static constexpr uint32_t FS_DCTL_GINSTS = 0x4; // Global IN NAK status
    static constexpr uint32_t FS_DCTL_GONSTS = 0x8; // Global OUT NAK status
    typedef bit_field_t<4, 0x7> FS_DCTL_TCTL; // Test control
    static constexpr uint32_t FS_DCTL_SGINAK = 0x80; // Set global IN NAK
    static constexpr uint32_t FS_DCTL_CGINAK = 0x100; // Clear global IN NAK
    static constexpr uint32_t FS_DCTL_SGONAK = 0x200; // Set global OUT NAK
    static constexpr uint32_t FS_DCTL_CGONAK = 0x400; // Clear global OUT NAK
    static constexpr uint32_t FS_DCTL_POPRGDNE = 0x800; // Power-on programming done

    static constexpr uint32_t FS_DSTS_RESET_VALUE = 0x10; // Reset value
    static constexpr uint32_t FS_DSTS_SUSPSTS = 0x1; // Suspend status
    typedef bit_field_t<1, 0x3> FS_DSTS_ENUMSPD; // Enumerated speed
    static constexpr uint32_t FS_DSTS_EERR = 0x8; // Erratic error
    typedef bit_field_t<8, 0x3fff> FS_DSTS_FNSOF; // Frame number of the received SOF
    typedef bit_field_t<22, 0x3> FS_DSTS_DEVLNSTS; // Device line status


    static constexpr uint32_t FS_DIEPMSK_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FS_DIEPMSK_XFRCM = 0x1; // Transfer completed interrupt mask
    static constexpr uint32_t FS_DIEPMSK_EPDM = 0x2; // Endpoint disabled interrupt mask
    static constexpr uint32_t FS_DIEPMSK_TOM = 0x8; // Timeout condition mask (Non-isochronous endpoints)
    static constexpr uint32_t FS_DIEPMSK_ITTXFEMSK = 0x10; // IN token received when TxFIFO empty mask
    static constexpr uint32_t FS_DIEPMSK_INEPNMM = 0x20; // IN token received with EP mismatch mask
    static constexpr uint32_t FS_DIEPMSK_INEPNEM = 0x40; // IN endpoint NAK effective mask

    static constexpr uint32_t FS_DOEPMSK_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FS_DOEPMSK_XFRCM = 0x1; // Transfer completed interrupt mask
    static constexpr uint32_t FS_DOEPMSK_EPDM = 0x2; // Endpoint disabled interrupt mask
    static constexpr uint32_t FS_DOEPMSK_STUPM = 0x8; // SETUP phase done mask
    static constexpr uint32_t FS_DOEPMSK_OTEPDM = 0x10; // OUT token received when endpoint disabled mask

    static constexpr uint32_t FS_DAINT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> FS_DAINT_IEPINT; // IN endpoint interrupt bits
    typedef bit_field_t<16, 0xffff> FS_DAINT_OEPINT; // OUT endpoint interrupt bits

    static constexpr uint32_t FS_DAINTMSK_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> FS_DAINTMSK_IEPM; // IN EP interrupt mask bits
    typedef bit_field_t<16, 0xffff> FS_DAINTMSK_OEPINT; // OUT endpoint interrupt bits


    static constexpr uint32_t DVBUSDIS_RESET_VALUE = 0x17d7; // Reset value
    typedef bit_field_t<0, 0xffff> DVBUSDIS_VBUSDT; // Device VBUS discharge time

    static constexpr uint32_t DVBUSPULSE_RESET_VALUE = 0x5b8; // Reset value
    typedef bit_field_t<0, 0xfff> DVBUSPULSE_DVBUSP; // Device VBUS pulsing time


    static constexpr uint32_t DIEPEMPMSK_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DIEPEMPMSK_INEPTXFEM; // IN EP Tx FIFO empty interrupt mask bits


    static constexpr uint32_t FS_DIEPCTL0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> FS_DIEPCTL0_MPSIZ; // Maximum packet size
    static constexpr uint32_t FS_DIEPCTL0_USBAEP = 0x8000; // USB active endpoint
    static constexpr uint32_t FS_DIEPCTL0_NAKSTS = 0x20000; // NAK status
    typedef bit_field_t<18, 0x3> FS_DIEPCTL0_EPTYP; // Endpoint type
    static constexpr uint32_t FS_DIEPCTL0_STALL = 0x200000; // STALL handshake
    typedef bit_field_t<22, 0xf> FS_DIEPCTL0_TXFNUM; // TxFIFO number
    static constexpr uint32_t FS_DIEPCTL0_CNAK = 0x4000000; // Clear NAK
    static constexpr uint32_t FS_DIEPCTL0_SNAK = 0x8000000; // Set NAK
    static constexpr uint32_t FS_DIEPCTL0_EPDIS = 0x40000000; // Endpoint disable
    static constexpr uint32_t FS_DIEPCTL0_EPENA = 0x80000000; // Endpoint enable


    static constexpr uint32_t DIEPINT0_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t DIEPINT0_TXFE = 0x80; // TXFE
    static constexpr uint32_t DIEPINT0_INEPNE = 0x40; // INEPNE
    static constexpr uint32_t DIEPINT0_ITTXFE = 0x10; // ITTXFE
    static constexpr uint32_t DIEPINT0_TOC = 0x8; // TOC
    static constexpr uint32_t DIEPINT0_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t DIEPINT0_XFRC = 0x1; // XFRC


    static constexpr uint32_t DIEPTSIZ0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<19, 0x3> DIEPTSIZ0_PKTCNT; // Packet count
    typedef bit_field_t<0, 0x7f> DIEPTSIZ0_XFRSIZ; // Transfer size


    static constexpr uint32_t DTXFSTS0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DTXFSTS0_INEPTFSAV; // IN endpoint TxFIFO space available


    static constexpr uint32_t DIEPCTL1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DIEPCTL1_EPENA = 0x80000000; // EPENA
    static constexpr uint32_t DIEPCTL1_EPDIS = 0x40000000; // EPDIS
    static constexpr uint32_t DIEPCTL1_SODDFRM_SD1PID = 0x20000000; // SODDFRM/SD1PID
    static constexpr uint32_t DIEPCTL1_SD0PID_SEVNFRM = 0x10000000; // SD0PID/SEVNFRM
    static constexpr uint32_t DIEPCTL1_SNAK = 0x8000000; // SNAK
    static constexpr uint32_t DIEPCTL1_CNAK = 0x4000000; // CNAK
    typedef bit_field_t<22, 0xf> DIEPCTL1_TXFNUM; // TXFNUM
    static constexpr uint32_t DIEPCTL1_STALL = 0x200000; // Stall
    typedef bit_field_t<18, 0x3> DIEPCTL1_EPTYP; // EPTYP
    static constexpr uint32_t DIEPCTL1_NAKSTS = 0x20000; // NAKSTS
    static constexpr uint32_t DIEPCTL1_EONUM_DPID = 0x10000; // EONUM/DPID
    static constexpr uint32_t DIEPCTL1_USBAEP = 0x8000; // USBAEP
    typedef bit_field_t<0, 0x7ff> DIEPCTL1_MPSIZ; // MPSIZ


    static constexpr uint32_t DIEPINT1_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t DIEPINT1_TXFE = 0x80; // TXFE
    static constexpr uint32_t DIEPINT1_INEPNE = 0x40; // INEPNE
    static constexpr uint32_t DIEPINT1_ITTXFE = 0x10; // ITTXFE
    static constexpr uint32_t DIEPINT1_TOC = 0x8; // TOC
    static constexpr uint32_t DIEPINT1_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t DIEPINT1_XFRC = 0x1; // XFRC


    static constexpr uint32_t DIEPTSIZ1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<29, 0x3> DIEPTSIZ1_MCNT; // Multi count
    typedef bit_field_t<19, 0x3ff> DIEPTSIZ1_PKTCNT; // Packet count
    typedef bit_field_t<0, 0x7ffff> DIEPTSIZ1_XFRSIZ; // Transfer size


    static constexpr uint32_t DTXFSTS1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DTXFSTS1_INEPTFSAV; // IN endpoint TxFIFO space available


    static constexpr uint32_t DIEPCTL2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DIEPCTL2_EPENA = 0x80000000; // EPENA
    static constexpr uint32_t DIEPCTL2_EPDIS = 0x40000000; // EPDIS
    static constexpr uint32_t DIEPCTL2_SODDFRM = 0x20000000; // SODDFRM
    static constexpr uint32_t DIEPCTL2_SD0PID_SEVNFRM = 0x10000000; // SD0PID/SEVNFRM
    static constexpr uint32_t DIEPCTL2_SNAK = 0x8000000; // SNAK
    static constexpr uint32_t DIEPCTL2_CNAK = 0x4000000; // CNAK
    typedef bit_field_t<22, 0xf> DIEPCTL2_TXFNUM; // TXFNUM
    static constexpr uint32_t DIEPCTL2_STALL = 0x200000; // Stall
    typedef bit_field_t<18, 0x3> DIEPCTL2_EPTYP; // EPTYP
    static constexpr uint32_t DIEPCTL2_NAKSTS = 0x20000; // NAKSTS
    static constexpr uint32_t DIEPCTL2_EONUM_DPID = 0x10000; // EONUM/DPID
    static constexpr uint32_t DIEPCTL2_USBAEP = 0x8000; // USBAEP
    typedef bit_field_t<0, 0x7ff> DIEPCTL2_MPSIZ; // MPSIZ


    static constexpr uint32_t DIEPINT2_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t DIEPINT2_TXFE = 0x80; // TXFE
    static constexpr uint32_t DIEPINT2_INEPNE = 0x40; // INEPNE
    static constexpr uint32_t DIEPINT2_ITTXFE = 0x10; // ITTXFE
    static constexpr uint32_t DIEPINT2_TOC = 0x8; // TOC
    static constexpr uint32_t DIEPINT2_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t DIEPINT2_XFRC = 0x1; // XFRC


    static constexpr uint32_t DIEPTSIZ2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<29, 0x3> DIEPTSIZ2_MCNT; // Multi count
    typedef bit_field_t<19, 0x3ff> DIEPTSIZ2_PKTCNT; // Packet count
    typedef bit_field_t<0, 0x7ffff> DIEPTSIZ2_XFRSIZ; // Transfer size


    static constexpr uint32_t DTXFSTS2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DTXFSTS2_INEPTFSAV; // IN endpoint TxFIFO space available


    static constexpr uint32_t DIEPCTL3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DIEPCTL3_EPENA = 0x80000000; // EPENA
    static constexpr uint32_t DIEPCTL3_EPDIS = 0x40000000; // EPDIS
    static constexpr uint32_t DIEPCTL3_SODDFRM = 0x20000000; // SODDFRM
    static constexpr uint32_t DIEPCTL3_SD0PID_SEVNFRM = 0x10000000; // SD0PID/SEVNFRM
    static constexpr uint32_t DIEPCTL3_SNAK = 0x8000000; // SNAK
    static constexpr uint32_t DIEPCTL3_CNAK = 0x4000000; // CNAK
    typedef bit_field_t<22, 0xf> DIEPCTL3_TXFNUM; // TXFNUM
    static constexpr uint32_t DIEPCTL3_STALL = 0x200000; // Stall
    typedef bit_field_t<18, 0x3> DIEPCTL3_EPTYP; // EPTYP
    static constexpr uint32_t DIEPCTL3_NAKSTS = 0x20000; // NAKSTS
    static constexpr uint32_t DIEPCTL3_EONUM_DPID = 0x10000; // EONUM/DPID
    static constexpr uint32_t DIEPCTL3_USBAEP = 0x8000; // USBAEP
    typedef bit_field_t<0, 0x7ff> DIEPCTL3_MPSIZ; // MPSIZ


    static constexpr uint32_t DIEPINT3_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t DIEPINT3_TXFE = 0x80; // TXFE
    static constexpr uint32_t DIEPINT3_INEPNE = 0x40; // INEPNE
    static constexpr uint32_t DIEPINT3_ITTXFE = 0x10; // ITTXFE
    static constexpr uint32_t DIEPINT3_TOC = 0x8; // TOC
    static constexpr uint32_t DIEPINT3_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t DIEPINT3_XFRC = 0x1; // XFRC


    static constexpr uint32_t DIEPTSIZ3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<29, 0x3> DIEPTSIZ3_MCNT; // Multi count
    typedef bit_field_t<19, 0x3ff> DIEPTSIZ3_PKTCNT; // Packet count
    typedef bit_field_t<0, 0x7ffff> DIEPTSIZ3_XFRSIZ; // Transfer size


    static constexpr uint32_t DTXFSTS3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DTXFSTS3_INEPTFSAV; // IN endpoint TxFIFO space available


    static constexpr uint32_t DOEPCTL0_RESET_VALUE = 0x8000; // Reset value
    static constexpr uint32_t DOEPCTL0_EPENA = 0x80000000; // EPENA
    static constexpr uint32_t DOEPCTL0_EPDIS = 0x40000000; // EPDIS
    static constexpr uint32_t DOEPCTL0_SNAK = 0x8000000; // SNAK
    static constexpr uint32_t DOEPCTL0_CNAK = 0x4000000; // CNAK
    static constexpr uint32_t DOEPCTL0_STALL = 0x200000; // Stall
    static constexpr uint32_t DOEPCTL0_SNPM = 0x100000; // SNPM
    typedef bit_field_t<18, 0x3> DOEPCTL0_EPTYP; // EPTYP
    static constexpr uint32_t DOEPCTL0_NAKSTS = 0x20000; // NAKSTS
    static constexpr uint32_t DOEPCTL0_USBAEP = 0x8000; // USBAEP
    typedef bit_field_t<0, 0x3> DOEPCTL0_MPSIZ; // MPSIZ


    static constexpr uint32_t DOEPINT0_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t DOEPINT0_B2BSTUP = 0x40; // B2BSTUP
    static constexpr uint32_t DOEPINT0_OTEPDIS = 0x10; // OTEPDIS
    static constexpr uint32_t DOEPINT0_STUP = 0x8; // STUP
    static constexpr uint32_t DOEPINT0_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t DOEPINT0_XFRC = 0x1; // XFRC


    static constexpr uint32_t DOEPTSIZ0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<29, 0x3> DOEPTSIZ0_STUPCNT; // SETUP packet count
    static constexpr uint32_t DOEPTSIZ0_PKTCNT = 0x80000; // Packet count
    typedef bit_field_t<0, 0x7f> DOEPTSIZ0_XFRSIZ; // Transfer size


    static constexpr uint32_t DOEPCTL1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DOEPCTL1_EPENA = 0x80000000; // EPENA
    static constexpr uint32_t DOEPCTL1_EPDIS = 0x40000000; // EPDIS
    static constexpr uint32_t DOEPCTL1_SODDFRM = 0x20000000; // SODDFRM
    static constexpr uint32_t DOEPCTL1_SD0PID_SEVNFRM = 0x10000000; // SD0PID/SEVNFRM
    static constexpr uint32_t DOEPCTL1_SNAK = 0x8000000; // SNAK
    static constexpr uint32_t DOEPCTL1_CNAK = 0x4000000; // CNAK
    static constexpr uint32_t DOEPCTL1_STALL = 0x200000; // Stall
    static constexpr uint32_t DOEPCTL1_SNPM = 0x100000; // SNPM
    typedef bit_field_t<18, 0x3> DOEPCTL1_EPTYP; // EPTYP
    static constexpr uint32_t DOEPCTL1_NAKSTS = 0x20000; // NAKSTS
    static constexpr uint32_t DOEPCTL1_EONUM_DPID = 0x10000; // EONUM/DPID
    static constexpr uint32_t DOEPCTL1_USBAEP = 0x8000; // USBAEP
    typedef bit_field_t<0, 0x7ff> DOEPCTL1_MPSIZ; // MPSIZ


    static constexpr uint32_t DOEPINT1_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t DOEPINT1_B2BSTUP = 0x40; // B2BSTUP
    static constexpr uint32_t DOEPINT1_OTEPDIS = 0x10; // OTEPDIS
    static constexpr uint32_t DOEPINT1_STUP = 0x8; // STUP
    static constexpr uint32_t DOEPINT1_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t DOEPINT1_XFRC = 0x1; // XFRC


    static constexpr uint32_t DOEPTSIZ1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<29, 0x3> DOEPTSIZ1_RXDPID_STUPCNT; // Received data PID/SETUP packet count
    typedef bit_field_t<19, 0x3ff> DOEPTSIZ1_PKTCNT; // Packet count
    typedef bit_field_t<0, 0x7ffff> DOEPTSIZ1_XFRSIZ; // Transfer size


    static constexpr uint32_t DOEPCTL2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DOEPCTL2_EPENA = 0x80000000; // EPENA
    static constexpr uint32_t DOEPCTL2_EPDIS = 0x40000000; // EPDIS
    static constexpr uint32_t DOEPCTL2_SODDFRM = 0x20000000; // SODDFRM
    static constexpr uint32_t DOEPCTL2_SD0PID_SEVNFRM = 0x10000000; // SD0PID/SEVNFRM
    static constexpr uint32_t DOEPCTL2_SNAK = 0x8000000; // SNAK
    static constexpr uint32_t DOEPCTL2_CNAK = 0x4000000; // CNAK
    static constexpr uint32_t DOEPCTL2_STALL = 0x200000; // Stall
    static constexpr uint32_t DOEPCTL2_SNPM = 0x100000; // SNPM
    typedef bit_field_t<18, 0x3> DOEPCTL2_EPTYP; // EPTYP
    static constexpr uint32_t DOEPCTL2_NAKSTS = 0x20000; // NAKSTS
    static constexpr uint32_t DOEPCTL2_EONUM_DPID = 0x10000; // EONUM/DPID
    static constexpr uint32_t DOEPCTL2_USBAEP = 0x8000; // USBAEP
    typedef bit_field_t<0, 0x7ff> DOEPCTL2_MPSIZ; // MPSIZ


    static constexpr uint32_t DOEPINT2_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t DOEPINT2_B2BSTUP = 0x40; // B2BSTUP
    static constexpr uint32_t DOEPINT2_OTEPDIS = 0x10; // OTEPDIS
    static constexpr uint32_t DOEPINT2_STUP = 0x8; // STUP
    static constexpr uint32_t DOEPINT2_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t DOEPINT2_XFRC = 0x1; // XFRC


    static constexpr uint32_t DOEPTSIZ2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<29, 0x3> DOEPTSIZ2_RXDPID_STUPCNT; // Received data PID/SETUP packet count
    typedef bit_field_t<19, 0x3ff> DOEPTSIZ2_PKTCNT; // Packet count
    typedef bit_field_t<0, 0x7ffff> DOEPTSIZ2_XFRSIZ; // Transfer size


    static constexpr uint32_t DOEPCTL3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DOEPCTL3_EPENA = 0x80000000; // EPENA
    static constexpr uint32_t DOEPCTL3_EPDIS = 0x40000000; // EPDIS
    static constexpr uint32_t DOEPCTL3_SODDFRM = 0x20000000; // SODDFRM
    static constexpr uint32_t DOEPCTL3_SD0PID_SEVNFRM = 0x10000000; // SD0PID/SEVNFRM
    static constexpr uint32_t DOEPCTL3_SNAK = 0x8000000; // SNAK
    static constexpr uint32_t DOEPCTL3_CNAK = 0x4000000; // CNAK
    static constexpr uint32_t DOEPCTL3_STALL = 0x200000; // Stall
    static constexpr uint32_t DOEPCTL3_SNPM = 0x100000; // SNPM
    typedef bit_field_t<18, 0x3> DOEPCTL3_EPTYP; // EPTYP
    static constexpr uint32_t DOEPCTL3_NAKSTS = 0x20000; // NAKSTS
    static constexpr uint32_t DOEPCTL3_EONUM_DPID = 0x10000; // EONUM/DPID
    static constexpr uint32_t DOEPCTL3_USBAEP = 0x8000; // USBAEP
    typedef bit_field_t<0, 0x7ff> DOEPCTL3_MPSIZ; // MPSIZ


    static constexpr uint32_t DOEPINT3_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t DOEPINT3_B2BSTUP = 0x40; // B2BSTUP
    static constexpr uint32_t DOEPINT3_OTEPDIS = 0x10; // OTEPDIS
    static constexpr uint32_t DOEPINT3_STUP = 0x8; // STUP
    static constexpr uint32_t DOEPINT3_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t DOEPINT3_XFRC = 0x1; // XFRC


    static constexpr uint32_t DOEPTSIZ3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<29, 0x3> DOEPTSIZ3_RXDPID_STUPCNT; // Received data PID/SETUP packet count
    typedef bit_field_t<19, 0x3ff> DOEPTSIZ3_PKTCNT; // Packet count
    typedef bit_field_t<0, 0x7ffff> DOEPTSIZ3_XFRSIZ; // Transfer size
};

// OTG_FS_DEVICE: USB on the go full speed

struct stm32f446_otg_fs_device_t
{
    volatile uint32_t FS_DCFG; // OTG_FS device configuration register (OTG_FS_DCFG)
    volatile uint32_t FS_DCTL; // OTG_FS device control register (OTG_FS_DCTL)
    volatile uint32_t FS_DSTS; // OTG_FS device status register (OTG_FS_DSTS)
    reserved_t<0x1> _0xc;
    volatile uint32_t FS_DIEPMSK; // OTG_FS device IN endpoint common interrupt mask register (OTG_FS_DIEPMSK)
    volatile uint32_t FS_DOEPMSK; // OTG_FS device OUT endpoint common interrupt mask register (OTG_FS_DOEPMSK)
    volatile uint32_t FS_DAINT; // OTG_FS device all endpoints interrupt register (OTG_FS_DAINT)
    volatile uint32_t FS_DAINTMSK; // OTG_FS all endpoints interrupt mask register (OTG_FS_DAINTMSK)
    reserved_t<0x2> _0x20;
    volatile uint32_t DVBUSDIS; // OTG_FS device VBUS discharge time register
    volatile uint32_t DVBUSPULSE; // OTG_FS device VBUS pulsing time register
    reserved_t<0x1> _0x30;
    volatile uint32_t DIEPEMPMSK; // OTG_FS device IN endpoint FIFO empty interrupt mask register
    reserved_t<0x32> _0x38;
    volatile uint32_t FS_DIEPCTL0; // OTG_FS device control IN endpoint 0 control register (OTG_FS_DIEPCTL0)
    reserved_t<0x1> _0x104;
    volatile uint32_t DIEPINT0; // device endpoint-x interrupt register
    reserved_t<0x1> _0x10c;
    volatile uint32_t DIEPTSIZ0; // device endpoint-0 transfer size register
    reserved_t<0x1> _0x114;
    volatile uint32_t DTXFSTS0; // OTG_FS device IN endpoint transmit FIFO status register
    reserved_t<0x1> _0x11c;
    volatile uint32_t DIEPCTL1; // OTG device endpoint-1 control register
    reserved_t<0x1> _0x124;
    volatile uint32_t DIEPINT1; // device endpoint-1 interrupt register
    reserved_t<0x1> _0x12c;
    volatile uint32_t DIEPTSIZ1; // device endpoint-1 transfer size register
    reserved_t<0x1> _0x134;
    volatile uint32_t DTXFSTS1; // OTG_FS device IN endpoint transmit FIFO status register
    reserved_t<0x1> _0x13c;
    volatile uint32_t DIEPCTL2; // OTG device endpoint-2 control register
    reserved_t<0x1> _0x144;
    volatile uint32_t DIEPINT2; // device endpoint-2 interrupt register
    reserved_t<0x1> _0x14c;
    volatile uint32_t DIEPTSIZ2; // device endpoint-2 transfer size register
    reserved_t<0x1> _0x154;
    volatile uint32_t DTXFSTS2; // OTG_FS device IN endpoint transmit FIFO status register
    reserved_t<0x1> _0x15c;
    volatile uint32_t DIEPCTL3; // OTG device endpoint-3 control register
    reserved_t<0x1> _0x164;
    volatile uint32_t DIEPINT3; // device endpoint-3 interrupt register
    reserved_t<0x1> _0x16c;
    volatile uint32_t DIEPTSIZ3; // device endpoint-3 transfer size register
    reserved_t<0x1> _0x174;
    volatile uint32_t DTXFSTS3; // OTG_FS device IN endpoint transmit FIFO status register
    reserved_t<0x61> _0x17c;
    volatile uint32_t DOEPCTL0; // device endpoint-0 control register
    reserved_t<0x1> _0x304;
    volatile uint32_t DOEPINT0; // device endpoint-0 interrupt register
    reserved_t<0x1> _0x30c;
    volatile uint32_t DOEPTSIZ0; // device OUT endpoint-0 transfer size register
    reserved_t<0x3> _0x314;
    volatile uint32_t DOEPCTL1; // device endpoint-1 control register
    reserved_t<0x1> _0x324;
    volatile uint32_t DOEPINT1; // device endpoint-1 interrupt register
    reserved_t<0x1> _0x32c;
    volatile uint32_t DOEPTSIZ1; // device OUT endpoint-1 transfer size register
    reserved_t<0x3> _0x334;
    volatile uint32_t DOEPCTL2; // device endpoint-2 control register
    reserved_t<0x1> _0x344;
    volatile uint32_t DOEPINT2; // device endpoint-2 interrupt register
    reserved_t<0x1> _0x34c;
    volatile uint32_t DOEPTSIZ2; // device OUT endpoint-2 transfer size register
    reserved_t<0x3> _0x354;
    volatile uint32_t DOEPCTL3; // device endpoint-3 control register
    reserved_t<0x1> _0x364;
    volatile uint32_t DOEPINT3; // device endpoint-3 interrupt register
    reserved_t<0x1> _0x36c;
    volatile uint32_t DOEPTSIZ3; // device OUT endpoint-3 transfer size register

    static constexpr uint32_t FS_DCFG_RESET_VALUE = 0x2200000; // Reset value
    typedef bit_field_t<0, 0x3> FS_DCFG_DSPD; // Device speed
    static constexpr uint32_t FS_DCFG_NZLSOHSK = 0x4; // Non-zero-length status OUT handshake
    typedef bit_field_t<4, 0x7f> FS_DCFG_DAD; // Device address
    typedef bit_field_t<11, 0x3> FS_DCFG_PFIVL; // Periodic frame interval
    static constexpr uint32_t FS_DCFG_ERRATIM = 0x8000; // Erratic error interrupt mask

    static constexpr uint32_t FS_DCTL_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FS_DCTL_RWUSIG = 0x1; // Remote wakeup signaling
    static constexpr uint32_t FS_DCTL_SDIS = 0x2; // Soft disconnect
    static constexpr uint32_t FS_DCTL_GINSTS = 0x4; // Global IN NAK status
    static constexpr uint32_t FS_DCTL_GONSTS = 0x8; // Global OUT NAK status
    typedef bit_field_t<4, 0x7> FS_DCTL_TCTL; // Test control
    static constexpr uint32_t FS_DCTL_SGINAK = 0x80; // Set global IN NAK
    static constexpr uint32_t FS_DCTL_CGINAK = 0x100; // Clear global IN NAK
    static constexpr uint32_t FS_DCTL_SGONAK = 0x200; // Set global OUT NAK
    static constexpr uint32_t FS_DCTL_CGONAK = 0x400; // Clear global OUT NAK
    static constexpr uint32_t FS_DCTL_POPRGDNE = 0x800; // Power-on programming done

    static constexpr uint32_t FS_DSTS_RESET_VALUE = 0x10; // Reset value
    static constexpr uint32_t FS_DSTS_SUSPSTS = 0x1; // Suspend status
    typedef bit_field_t<1, 0x3> FS_DSTS_ENUMSPD; // Enumerated speed
    static constexpr uint32_t FS_DSTS_EERR = 0x8; // Erratic error
    typedef bit_field_t<8, 0x3fff> FS_DSTS_FNSOF; // Frame number of the received SOF


    static constexpr uint32_t FS_DIEPMSK_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FS_DIEPMSK_XFRCM = 0x1; // Transfer completed interrupt mask
    static constexpr uint32_t FS_DIEPMSK_EPDM = 0x2; // Endpoint disabled interrupt mask
    static constexpr uint32_t FS_DIEPMSK_TOM = 0x8; // Timeout condition mask (Non-isochronous endpoints)
    static constexpr uint32_t FS_DIEPMSK_ITTXFEMSK = 0x10; // IN token received when TxFIFO empty mask
    static constexpr uint32_t FS_DIEPMSK_INEPNMM = 0x20; // IN token received with EP mismatch mask
    static constexpr uint32_t FS_DIEPMSK_INEPNEM = 0x40; // IN endpoint NAK effective mask

    static constexpr uint32_t FS_DOEPMSK_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FS_DOEPMSK_XFRCM = 0x1; // Transfer completed interrupt mask
    static constexpr uint32_t FS_DOEPMSK_EPDM = 0x2; // Endpoint disabled interrupt mask
    static constexpr uint32_t FS_DOEPMSK_STUPM = 0x8; // SETUP phase done mask
    static constexpr uint32_t FS_DOEPMSK_OTEPDM = 0x10; // OUT token received when endpoint disabled mask

    static constexpr uint32_t FS_DAINT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> FS_DAINT_IEPINT; // IN endpoint interrupt bits
    typedef bit_field_t<16, 0xffff> FS_DAINT_OEPINT; // OUT endpoint interrupt bits

    static constexpr uint32_t FS_DAINTMSK_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> FS_DAINTMSK_IEPM; // IN EP interrupt mask bits
    typedef bit_field_t<16, 0xffff> FS_DAINTMSK_OEPINT; // OUT endpoint interrupt bits


    static constexpr uint32_t DVBUSDIS_RESET_VALUE = 0x17d7; // Reset value
    typedef bit_field_t<0, 0xffff> DVBUSDIS_VBUSDT; // Device VBUS discharge time

    static constexpr uint32_t DVBUSPULSE_RESET_VALUE = 0x5b8; // Reset value
    typedef bit_field_t<0, 0xfff> DVBUSPULSE_DVBUSP; // Device VBUS pulsing time


    static constexpr uint32_t DIEPEMPMSK_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DIEPEMPMSK_INEPTXFEM; // IN EP Tx FIFO empty interrupt mask bits


    static constexpr uint32_t FS_DIEPCTL0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> FS_DIEPCTL0_MPSIZ; // Maximum packet size
    static constexpr uint32_t FS_DIEPCTL0_USBAEP = 0x8000; // USB active endpoint
    static constexpr uint32_t FS_DIEPCTL0_NAKSTS = 0x20000; // NAK status
    typedef bit_field_t<18, 0x3> FS_DIEPCTL0_EPTYP; // Endpoint type
    static constexpr uint32_t FS_DIEPCTL0_STALL = 0x200000; // STALL handshake
    typedef bit_field_t<22, 0xf> FS_DIEPCTL0_TXFNUM; // TxFIFO number
    static constexpr uint32_t FS_DIEPCTL0_CNAK = 0x4000000; // Clear NAK
    static constexpr uint32_t FS_DIEPCTL0_SNAK = 0x8000000; // Set NAK
    static constexpr uint32_t FS_DIEPCTL0_EPDIS = 0x40000000; // Endpoint disable
    static constexpr uint32_t FS_DIEPCTL0_EPENA = 0x80000000; // Endpoint enable


    static constexpr uint32_t DIEPINT0_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t DIEPINT0_TXFE = 0x80; // TXFE
    static constexpr uint32_t DIEPINT0_INEPNE = 0x40; // INEPNE
    static constexpr uint32_t DIEPINT0_ITTXFE = 0x10; // ITTXFE
    static constexpr uint32_t DIEPINT0_TOC = 0x8; // TOC
    static constexpr uint32_t DIEPINT0_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t DIEPINT0_XFRC = 0x1; // XFRC


    static constexpr uint32_t DIEPTSIZ0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<19, 0x3> DIEPTSIZ0_PKTCNT; // Packet count
    typedef bit_field_t<0, 0x7f> DIEPTSIZ0_XFRSIZ; // Transfer size


    static constexpr uint32_t DTXFSTS0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DTXFSTS0_INEPTFSAV; // IN endpoint TxFIFO space available


    static constexpr uint32_t DIEPCTL1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DIEPCTL1_EPENA = 0x80000000; // EPENA
    static constexpr uint32_t DIEPCTL1_EPDIS = 0x40000000; // EPDIS
    static constexpr uint32_t DIEPCTL1_SODDFRM_SD1PID = 0x20000000; // SODDFRM/SD1PID
    static constexpr uint32_t DIEPCTL1_SD0PID_SEVNFRM = 0x10000000; // SD0PID/SEVNFRM
    static constexpr uint32_t DIEPCTL1_SNAK = 0x8000000; // SNAK
    static constexpr uint32_t DIEPCTL1_CNAK = 0x4000000; // CNAK
    typedef bit_field_t<22, 0xf> DIEPCTL1_TXFNUM; // TXFNUM
    static constexpr uint32_t DIEPCTL1_STALL = 0x200000; // Stall
    typedef bit_field_t<18, 0x3> DIEPCTL1_EPTYP; // EPTYP
    static constexpr uint32_t DIEPCTL1_NAKSTS = 0x20000; // NAKSTS
    static constexpr uint32_t DIEPCTL1_EONUM_DPID = 0x10000; // EONUM/DPID
    static constexpr uint32_t DIEPCTL1_USBAEP = 0x8000; // USBAEP
    typedef bit_field_t<0, 0x7ff> DIEPCTL1_MPSIZ; // MPSIZ


    static constexpr uint32_t DIEPINT1_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t DIEPINT1_TXFE = 0x80; // TXFE
    static constexpr uint32_t DIEPINT1_INEPNE = 0x40; // INEPNE
    static constexpr uint32_t DIEPINT1_ITTXFE = 0x10; // ITTXFE
    static constexpr uint32_t DIEPINT1_TOC = 0x8; // TOC
    static constexpr uint32_t DIEPINT1_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t DIEPINT1_XFRC = 0x1; // XFRC


    static constexpr uint32_t DIEPTSIZ1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<29, 0x3> DIEPTSIZ1_MCNT; // Multi count
    typedef bit_field_t<19, 0x3ff> DIEPTSIZ1_PKTCNT; // Packet count
    typedef bit_field_t<0, 0x7ffff> DIEPTSIZ1_XFRSIZ; // Transfer size


    static constexpr uint32_t DTXFSTS1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DTXFSTS1_INEPTFSAV; // IN endpoint TxFIFO space available


    static constexpr uint32_t DIEPCTL2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DIEPCTL2_EPENA = 0x80000000; // EPENA
    static constexpr uint32_t DIEPCTL2_EPDIS = 0x40000000; // EPDIS
    static constexpr uint32_t DIEPCTL2_SODDFRM = 0x20000000; // SODDFRM
    static constexpr uint32_t DIEPCTL2_SD0PID_SEVNFRM = 0x10000000; // SD0PID/SEVNFRM
    static constexpr uint32_t DIEPCTL2_SNAK = 0x8000000; // SNAK
    static constexpr uint32_t DIEPCTL2_CNAK = 0x4000000; // CNAK
    typedef bit_field_t<22, 0xf> DIEPCTL2_TXFNUM; // TXFNUM
    static constexpr uint32_t DIEPCTL2_STALL = 0x200000; // Stall
    typedef bit_field_t<18, 0x3> DIEPCTL2_EPTYP; // EPTYP
    static constexpr uint32_t DIEPCTL2_NAKSTS = 0x20000; // NAKSTS
    static constexpr uint32_t DIEPCTL2_EONUM_DPID = 0x10000; // EONUM/DPID
    static constexpr uint32_t DIEPCTL2_USBAEP = 0x8000; // USBAEP
    typedef bit_field_t<0, 0x7ff> DIEPCTL2_MPSIZ; // MPSIZ


    static constexpr uint32_t DIEPINT2_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t DIEPINT2_TXFE = 0x80; // TXFE
    static constexpr uint32_t DIEPINT2_INEPNE = 0x40; // INEPNE
    static constexpr uint32_t DIEPINT2_ITTXFE = 0x10; // ITTXFE
    static constexpr uint32_t DIEPINT2_TOC = 0x8; // TOC
    static constexpr uint32_t DIEPINT2_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t DIEPINT2_XFRC = 0x1; // XFRC


    static constexpr uint32_t DIEPTSIZ2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<29, 0x3> DIEPTSIZ2_MCNT; // Multi count
    typedef bit_field_t<19, 0x3ff> DIEPTSIZ2_PKTCNT; // Packet count
    typedef bit_field_t<0, 0x7ffff> DIEPTSIZ2_XFRSIZ; // Transfer size


    static constexpr uint32_t DTXFSTS2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DTXFSTS2_INEPTFSAV; // IN endpoint TxFIFO space available


    static constexpr uint32_t DIEPCTL3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DIEPCTL3_EPENA = 0x80000000; // EPENA
    static constexpr uint32_t DIEPCTL3_EPDIS = 0x40000000; // EPDIS
    static constexpr uint32_t DIEPCTL3_SODDFRM = 0x20000000; // SODDFRM
    static constexpr uint32_t DIEPCTL3_SD0PID_SEVNFRM = 0x10000000; // SD0PID/SEVNFRM
    static constexpr uint32_t DIEPCTL3_SNAK = 0x8000000; // SNAK
    static constexpr uint32_t DIEPCTL3_CNAK = 0x4000000; // CNAK
    typedef bit_field_t<22, 0xf> DIEPCTL3_TXFNUM; // TXFNUM
    static constexpr uint32_t DIEPCTL3_STALL = 0x200000; // Stall
    typedef bit_field_t<18, 0x3> DIEPCTL3_EPTYP; // EPTYP
    static constexpr uint32_t DIEPCTL3_NAKSTS = 0x20000; // NAKSTS
    static constexpr uint32_t DIEPCTL3_EONUM_DPID = 0x10000; // EONUM/DPID
    static constexpr uint32_t DIEPCTL3_USBAEP = 0x8000; // USBAEP
    typedef bit_field_t<0, 0x7ff> DIEPCTL3_MPSIZ; // MPSIZ


    static constexpr uint32_t DIEPINT3_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t DIEPINT3_TXFE = 0x80; // TXFE
    static constexpr uint32_t DIEPINT3_INEPNE = 0x40; // INEPNE
    static constexpr uint32_t DIEPINT3_ITTXFE = 0x10; // ITTXFE
    static constexpr uint32_t DIEPINT3_TOC = 0x8; // TOC
    static constexpr uint32_t DIEPINT3_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t DIEPINT3_XFRC = 0x1; // XFRC


    static constexpr uint32_t DIEPTSIZ3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<29, 0x3> DIEPTSIZ3_MCNT; // Multi count
    typedef bit_field_t<19, 0x3ff> DIEPTSIZ3_PKTCNT; // Packet count
    typedef bit_field_t<0, 0x7ffff> DIEPTSIZ3_XFRSIZ; // Transfer size


    static constexpr uint32_t DTXFSTS3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> DTXFSTS3_INEPTFSAV; // IN endpoint TxFIFO space available


    static constexpr uint32_t DOEPCTL0_RESET_VALUE = 0x8000; // Reset value
    static constexpr uint32_t DOEPCTL0_EPENA = 0x80000000; // EPENA
    static constexpr uint32_t DOEPCTL0_EPDIS = 0x40000000; // EPDIS
    static constexpr uint32_t DOEPCTL0_SNAK = 0x8000000; // SNAK
    static constexpr uint32_t DOEPCTL0_CNAK = 0x4000000; // CNAK
    static constexpr uint32_t DOEPCTL0_STALL = 0x200000; // Stall
    static constexpr uint32_t DOEPCTL0_SNPM = 0x100000; // SNPM
    typedef bit_field_t<18, 0x3> DOEPCTL0_EPTYP; // EPTYP
    static constexpr uint32_t DOEPCTL0_NAKSTS = 0x20000; // NAKSTS
    static constexpr uint32_t DOEPCTL0_USBAEP = 0x8000; // USBAEP
    typedef bit_field_t<0, 0x3> DOEPCTL0_MPSIZ; // MPSIZ


    static constexpr uint32_t DOEPINT0_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t DOEPINT0_B2BSTUP = 0x40; // B2BSTUP
    static constexpr uint32_t DOEPINT0_OTEPDIS = 0x10; // OTEPDIS
    static constexpr uint32_t DOEPINT0_STUP = 0x8; // STUP
    static constexpr uint32_t DOEPINT0_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t DOEPINT0_XFRC = 0x1; // XFRC


    static constexpr uint32_t DOEPTSIZ0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<29, 0x3> DOEPTSIZ0_STUPCNT; // SETUP packet count
    static constexpr uint32_t DOEPTSIZ0_PKTCNT = 0x80000; // Packet count
    typedef bit_field_t<0, 0x7f> DOEPTSIZ0_XFRSIZ; // Transfer size


    static constexpr uint32_t DOEPCTL1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DOEPCTL1_EPENA = 0x80000000; // EPENA
    static constexpr uint32_t DOEPCTL1_EPDIS = 0x40000000; // EPDIS
    static constexpr uint32_t DOEPCTL1_SODDFRM = 0x20000000; // SODDFRM
    static constexpr uint32_t DOEPCTL1_SD0PID_SEVNFRM = 0x10000000; // SD0PID/SEVNFRM
    static constexpr uint32_t DOEPCTL1_SNAK = 0x8000000; // SNAK
    static constexpr uint32_t DOEPCTL1_CNAK = 0x4000000; // CNAK
    static constexpr uint32_t DOEPCTL1_STALL = 0x200000; // Stall
    static constexpr uint32_t DOEPCTL1_SNPM = 0x100000; // SNPM
    typedef bit_field_t<18, 0x3> DOEPCTL1_EPTYP; // EPTYP
    static constexpr uint32_t DOEPCTL1_NAKSTS = 0x20000; // NAKSTS
    static constexpr uint32_t DOEPCTL1_EONUM_DPID = 0x10000; // EONUM/DPID
    static constexpr uint32_t DOEPCTL1_USBAEP = 0x8000; // USBAEP
    typedef bit_field_t<0, 0x7ff> DOEPCTL1_MPSIZ; // MPSIZ


    static constexpr uint32_t DOEPINT1_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t DOEPINT1_B2BSTUP = 0x40; // B2BSTUP
    static constexpr uint32_t DOEPINT1_OTEPDIS = 0x10; // OTEPDIS
    static constexpr uint32_t DOEPINT1_STUP = 0x8; // STUP
    static constexpr uint32_t DOEPINT1_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t DOEPINT1_XFRC = 0x1; // XFRC


    static constexpr uint32_t DOEPTSIZ1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<29, 0x3> DOEPTSIZ1_RXDPID_STUPCNT; // Received data PID/SETUP packet count
    typedef bit_field_t<19, 0x3ff> DOEPTSIZ1_PKTCNT; // Packet count
    typedef bit_field_t<0, 0x7ffff> DOEPTSIZ1_XFRSIZ; // Transfer size


    static constexpr uint32_t DOEPCTL2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DOEPCTL2_EPENA = 0x80000000; // EPENA
    static constexpr uint32_t DOEPCTL2_EPDIS = 0x40000000; // EPDIS
    static constexpr uint32_t DOEPCTL2_SODDFRM = 0x20000000; // SODDFRM
    static constexpr uint32_t DOEPCTL2_SD0PID_SEVNFRM = 0x10000000; // SD0PID/SEVNFRM
    static constexpr uint32_t DOEPCTL2_SNAK = 0x8000000; // SNAK
    static constexpr uint32_t DOEPCTL2_CNAK = 0x4000000; // CNAK
    static constexpr uint32_t DOEPCTL2_STALL = 0x200000; // Stall
    static constexpr uint32_t DOEPCTL2_SNPM = 0x100000; // SNPM
    typedef bit_field_t<18, 0x3> DOEPCTL2_EPTYP; // EPTYP
    static constexpr uint32_t DOEPCTL2_NAKSTS = 0x20000; // NAKSTS
    static constexpr uint32_t DOEPCTL2_EONUM_DPID = 0x10000; // EONUM/DPID
    static constexpr uint32_t DOEPCTL2_USBAEP = 0x8000; // USBAEP
    typedef bit_field_t<0, 0x7ff> DOEPCTL2_MPSIZ; // MPSIZ


    static constexpr uint32_t DOEPINT2_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t DOEPINT2_B2BSTUP = 0x40; // B2BSTUP
    static constexpr uint32_t DOEPINT2_OTEPDIS = 0x10; // OTEPDIS
    static constexpr uint32_t DOEPINT2_STUP = 0x8; // STUP
    static constexpr uint32_t DOEPINT2_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t DOEPINT2_XFRC = 0x1; // XFRC


    static constexpr uint32_t DOEPTSIZ2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<29, 0x3> DOEPTSIZ2_RXDPID_STUPCNT; // Received data PID/SETUP packet count
    typedef bit_field_t<19, 0x3ff> DOEPTSIZ2_PKTCNT; // Packet count
    typedef bit_field_t<0, 0x7ffff> DOEPTSIZ2_XFRSIZ; // Transfer size


    static constexpr uint32_t DOEPCTL3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t DOEPCTL3_EPENA = 0x80000000; // EPENA
    static constexpr uint32_t DOEPCTL3_EPDIS = 0x40000000; // EPDIS
    static constexpr uint32_t DOEPCTL3_SODDFRM = 0x20000000; // SODDFRM
    static constexpr uint32_t DOEPCTL3_SD0PID_SEVNFRM = 0x10000000; // SD0PID/SEVNFRM
    static constexpr uint32_t DOEPCTL3_SNAK = 0x8000000; // SNAK
    static constexpr uint32_t DOEPCTL3_CNAK = 0x4000000; // CNAK
    static constexpr uint32_t DOEPCTL3_STALL = 0x200000; // Stall
    static constexpr uint32_t DOEPCTL3_SNPM = 0x100000; // SNPM
    typedef bit_field_t<18, 0x3> DOEPCTL3_EPTYP; // EPTYP
    static constexpr uint32_t DOEPCTL3_NAKSTS = 0x20000; // NAKSTS
    static constexpr uint32_t DOEPCTL3_EONUM_DPID = 0x10000; // EONUM/DPID
    static constexpr uint32_t DOEPCTL3_USBAEP = 0x8000; // USBAEP
    typedef bit_field_t<0, 0x7ff> DOEPCTL3_MPSIZ; // MPSIZ


    static constexpr uint32_t DOEPINT3_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t DOEPINT3_B2BSTUP = 0x40; // B2BSTUP
    static constexpr uint32_t DOEPINT3_OTEPDIS = 0x10; // OTEPDIS
    static constexpr uint32_t DOEPINT3_STUP = 0x8; // STUP
    static constexpr uint32_t DOEPINT3_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t DOEPINT3_XFRC = 0x1; // XFRC


    static constexpr uint32_t DOEPTSIZ3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<29, 0x3> DOEPTSIZ3_RXDPID_STUPCNT; // Received data PID/SETUP packet count
    typedef bit_field_t<19, 0x3ff> DOEPTSIZ3_PKTCNT; // Packet count
    typedef bit_field_t<0, 0x7ffff> DOEPTSIZ3_XFRSIZ; // Transfer size
};

// OTG_FS_GLOBAL: USB on the go full speed

struct stm32f401_otg_fs_global_t
{
    volatile uint32_t FS_GOTGCTL; // OTG_FS control and status register (OTG_FS_GOTGCTL)
    volatile uint32_t FS_GOTGINT; // OTG_FS interrupt register (OTG_FS_GOTGINT)
    volatile uint32_t FS_GAHBCFG; // OTG_FS AHB configuration register (OTG_FS_GAHBCFG)
    volatile uint32_t FS_GUSBCFG; // OTG_FS USB configuration register (OTG_FS_GUSBCFG)
    volatile uint32_t FS_GRSTCTL; // OTG_FS reset register (OTG_FS_GRSTCTL)
    volatile uint32_t FS_GINTSTS; // OTG_FS core interrupt register (OTG_FS_GINTSTS)
    volatile uint32_t FS_GINTMSK; // OTG_FS interrupt mask register (OTG_FS_GINTMSK)
    volatile uint32_t FS_GRXSTSR_DEVICE; // OTG_FS Receive status debug read(Device mode)
    reserved_t<0x1> _0x20;
    volatile uint32_t FS_GRXFSIZ; // OTG_FS Receive FIFO size register (OTG_FS_GRXFSIZ)
    volatile uint32_t FS_GNPTXFSIZ_DEVICE; // OTG_FS non-periodic transmit FIFO size register (Device mode)
    volatile uint32_t FS_GNPTXSTS; // OTG_FS non-periodic transmit FIFO/queue status register (OTG_FS_GNPTXSTS)
    reserved_t<0x2> _0x30;
    volatile uint32_t FS_GCCFG; // OTG_FS general core configuration register (OTG_FS_GCCFG)
    volatile uint32_t FS_CID; // core ID register
    reserved_t<0x30> _0x40;
    volatile uint32_t FS_HPTXFSIZ; // OTG_FS Host periodic transmit FIFO size register (OTG_FS_HPTXFSIZ)
    volatile uint32_t FS_DIEPTXF1; // OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF2)
    volatile uint32_t FS_DIEPTXF2; // OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF3)
    volatile uint32_t FS_DIEPTXF3; // OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF4)

    static constexpr uint32_t FS_GOTGCTL_RESET_VALUE = 0x800; // Reset value
    static constexpr uint32_t FS_GOTGCTL_SRQSCS = 0x1; // Session request success
    static constexpr uint32_t FS_GOTGCTL_SRQ = 0x2; // Session request
    static constexpr uint32_t FS_GOTGCTL_HNGSCS = 0x100; // Host negotiation success
    static constexpr uint32_t FS_GOTGCTL_HNPRQ = 0x200; // HNP request
    static constexpr uint32_t FS_GOTGCTL_HSHNPEN = 0x400; // Host set HNP enable
    static constexpr uint32_t FS_GOTGCTL_DHNPEN = 0x800; // Device HNP enabled
    static constexpr uint32_t FS_GOTGCTL_CIDSTS = 0x10000; // Connector ID status
    static constexpr uint32_t FS_GOTGCTL_DBCT = 0x20000; // Long/short debounce time
    static constexpr uint32_t FS_GOTGCTL_ASVLD = 0x40000; // A-session valid
    static constexpr uint32_t FS_GOTGCTL_BSVLD = 0x80000; // B-session valid

    static constexpr uint32_t FS_GOTGINT_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FS_GOTGINT_SEDET = 0x4; // Session end detected
    static constexpr uint32_t FS_GOTGINT_SRSSCHG = 0x100; // Session request success status change
    static constexpr uint32_t FS_GOTGINT_HNSSCHG = 0x200; // Host negotiation success status change
    static constexpr uint32_t FS_GOTGINT_HNGDET = 0x20000; // Host negotiation detected
    static constexpr uint32_t FS_GOTGINT_ADTOCHG = 0x40000; // A-device timeout change
    static constexpr uint32_t FS_GOTGINT_DBCDNE = 0x80000; // Debounce done

    static constexpr uint32_t FS_GAHBCFG_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FS_GAHBCFG_GINT = 0x1; // Global interrupt mask
    static constexpr uint32_t FS_GAHBCFG_TXFELVL = 0x80; // TxFIFO empty level
    static constexpr uint32_t FS_GAHBCFG_PTXFELVL = 0x100; // Periodic TxFIFO empty level

    static constexpr uint32_t FS_GUSBCFG_RESET_VALUE = 0xa00; // Reset value
    typedef bit_field_t<0, 0x7> FS_GUSBCFG_TOCAL; // FS timeout calibration
    static constexpr uint32_t FS_GUSBCFG_PHYSEL = 0x40; // Full Speed serial transceiver select
    static constexpr uint32_t FS_GUSBCFG_SRPCAP = 0x100; // SRP-capable
    static constexpr uint32_t FS_GUSBCFG_HNPCAP = 0x200; // HNP-capable
    typedef bit_field_t<10, 0xf> FS_GUSBCFG_TRDT; // USB turnaround time
    static constexpr uint32_t FS_GUSBCFG_FHMOD = 0x20000000; // Force host mode
    static constexpr uint32_t FS_GUSBCFG_FDMOD = 0x40000000; // Force device mode
    static constexpr uint32_t FS_GUSBCFG_CTXPKT = 0x80000000; // Corrupt Tx packet

    static constexpr uint32_t FS_GRSTCTL_RESET_VALUE = 0x20000000; // Reset value
    static constexpr uint32_t FS_GRSTCTL_CSRST = 0x1; // Core soft reset
    static constexpr uint32_t FS_GRSTCTL_HSRST = 0x2; // HCLK soft reset
    static constexpr uint32_t FS_GRSTCTL_FCRST = 0x4; // Host frame counter reset
    static constexpr uint32_t FS_GRSTCTL_RXFFLSH = 0x10; // RxFIFO flush
    static constexpr uint32_t FS_GRSTCTL_TXFFLSH = 0x20; // TxFIFO flush
    typedef bit_field_t<6, 0x1f> FS_GRSTCTL_TXFNUM; // TxFIFO number
    static constexpr uint32_t FS_GRSTCTL_AHBIDL = 0x80000000; // AHB master idle

    static constexpr uint32_t FS_GINTSTS_RESET_VALUE = 0x4000020; // Reset value
    static constexpr uint32_t FS_GINTSTS_CMOD = 0x1; // Current mode of operation
    static constexpr uint32_t FS_GINTSTS_MMIS = 0x2; // Mode mismatch interrupt
    static constexpr uint32_t FS_GINTSTS_OTGINT = 0x4; // OTG interrupt
    static constexpr uint32_t FS_GINTSTS_SOF = 0x8; // Start of frame
    static constexpr uint32_t FS_GINTSTS_RXFLVL = 0x10; // RxFIFO non-empty
    static constexpr uint32_t FS_GINTSTS_NPTXFE = 0x20; // Non-periodic TxFIFO empty
    static constexpr uint32_t FS_GINTSTS_GINAKEFF = 0x40; // Global IN non-periodic NAK effective
    static constexpr uint32_t FS_GINTSTS_GOUTNAKEFF = 0x80; // Global OUT NAK effective
    static constexpr uint32_t FS_GINTSTS_ESUSP = 0x400; // Early suspend
    static constexpr uint32_t FS_GINTSTS_USBSUSP = 0x800; // USB suspend
    static constexpr uint32_t FS_GINTSTS_USBRST = 0x1000; // USB reset
    static constexpr uint32_t FS_GINTSTS_ENUMDNE = 0x2000; // Enumeration done
    static constexpr uint32_t FS_GINTSTS_ISOODRP = 0x4000; // Isochronous OUT packet dropped interrupt
    static constexpr uint32_t FS_GINTSTS_EOPF = 0x8000; // End of periodic frame interrupt
    static constexpr uint32_t FS_GINTSTS_IEPINT = 0x40000; // IN endpoint interrupt
    static constexpr uint32_t FS_GINTSTS_OEPINT = 0x80000; // OUT endpoint interrupt
    static constexpr uint32_t FS_GINTSTS_IISOIXFR = 0x100000; // Incomplete isochronous IN transfer
    static constexpr uint32_t FS_GINTSTS_IPXFR_INCOMPISOOUT = 0x200000; // Incomplete periodic transfer(Host mode)/Incomplete isochronous OUT transfer(Device mode)
    static constexpr uint32_t FS_GINTSTS_HPRTINT = 0x1000000; // Host port interrupt
    static constexpr uint32_t FS_GINTSTS_HCINT = 0x2000000; // Host channels interrupt
    static constexpr uint32_t FS_GINTSTS_PTXFE = 0x4000000; // Periodic TxFIFO empty
    static constexpr uint32_t FS_GINTSTS_CIDSCHG = 0x10000000; // Connector ID status change
    static constexpr uint32_t FS_GINTSTS_DISCINT = 0x20000000; // Disconnect detected interrupt
    static constexpr uint32_t FS_GINTSTS_SRQINT = 0x40000000; // Session request/new session detected interrupt
    static constexpr uint32_t FS_GINTSTS_WKUPINT = 0x80000000; // Resume/remote wakeup detected interrupt

    static constexpr uint32_t FS_GINTMSK_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FS_GINTMSK_MMISM = 0x2; // Mode mismatch interrupt mask
    static constexpr uint32_t FS_GINTMSK_OTGINT = 0x4; // OTG interrupt mask
    static constexpr uint32_t FS_GINTMSK_SOFM = 0x8; // Start of frame mask
    static constexpr uint32_t FS_GINTMSK_RXFLVLM = 0x10; // Receive FIFO non-empty mask
    static constexpr uint32_t FS_GINTMSK_NPTXFEM = 0x20; // Non-periodic TxFIFO empty mask
    static constexpr uint32_t FS_GINTMSK_GINAKEFFM = 0x40; // Global non-periodic IN NAK effective mask
    static constexpr uint32_t FS_GINTMSK_GONAKEFFM = 0x80; // Global OUT NAK effective mask
    static constexpr uint32_t FS_GINTMSK_ESUSPM = 0x400; // Early suspend mask
    static constexpr uint32_t FS_GINTMSK_USBSUSPM = 0x800; // USB suspend mask
    static constexpr uint32_t FS_GINTMSK_USBRST = 0x1000; // USB reset mask
    static constexpr uint32_t FS_GINTMSK_ENUMDNEM = 0x2000; // Enumeration done mask
    static constexpr uint32_t FS_GINTMSK_ISOODRPM = 0x4000; // Isochronous OUT packet dropped interrupt mask
    static constexpr uint32_t FS_GINTMSK_EOPFM = 0x8000; // End of periodic frame interrupt mask
    static constexpr uint32_t FS_GINTMSK_EPMISM = 0x20000; // Endpoint mismatch interrupt mask
    static constexpr uint32_t FS_GINTMSK_IEPINT = 0x40000; // IN endpoints interrupt mask
    static constexpr uint32_t FS_GINTMSK_OEPINT = 0x80000; // OUT endpoints interrupt mask
    static constexpr uint32_t FS_GINTMSK_IISOIXFRM = 0x100000; // Incomplete isochronous IN transfer mask
    static constexpr uint32_t FS_GINTMSK_IPXFRM_IISOOXFRM = 0x200000; // Incomplete periodic transfer mask(Host mode)/Incomplete isochronous OUT transfer mask(Device mode)
    static constexpr uint32_t FS_GINTMSK_PRTIM = 0x1000000; // Host port interrupt mask
    static constexpr uint32_t FS_GINTMSK_HCIM = 0x2000000; // Host channels interrupt mask
    static constexpr uint32_t FS_GINTMSK_PTXFEM = 0x4000000; // Periodic TxFIFO empty mask
    static constexpr uint32_t FS_GINTMSK_CIDSCHGM = 0x10000000; // Connector ID status change mask
    static constexpr uint32_t FS_GINTMSK_DISCINT = 0x20000000; // Disconnect detected interrupt mask
    static constexpr uint32_t FS_GINTMSK_SRQIM = 0x40000000; // Session request/new session detected interrupt mask
    static constexpr uint32_t FS_GINTMSK_WUIM = 0x80000000; // Resume/remote wakeup detected interrupt mask

    static constexpr uint32_t FS_GRXSTSR_DEVICE_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> FS_GRXSTSR_DEVICE_EPNUM; // Endpoint number
    typedef bit_field_t<4, 0x7ff> FS_GRXSTSR_DEVICE_BCNT; // Byte count
    typedef bit_field_t<15, 0x3> FS_GRXSTSR_DEVICE_DPID; // Data PID
    typedef bit_field_t<17, 0xf> FS_GRXSTSR_DEVICE_PKTSTS; // Packet status
    typedef bit_field_t<21, 0xf> FS_GRXSTSR_DEVICE_FRMNUM; // Frame number


    static constexpr uint32_t FS_GRXFSIZ_RESET_VALUE = 0x200; // Reset value
    typedef bit_field_t<0, 0xffff> FS_GRXFSIZ_RXFD; // RxFIFO depth

    static constexpr uint32_t FS_GNPTXFSIZ_DEVICE_RESET_VALUE = 0x200; // Reset value
    typedef bit_field_t<0, 0xffff> FS_GNPTXFSIZ_DEVICE_TX0FSA; // Endpoint 0 transmit RAM start address
    typedef bit_field_t<16, 0xffff> FS_GNPTXFSIZ_DEVICE_TX0FD; // Endpoint 0 TxFIFO depth

    static constexpr uint32_t FS_GNPTXSTS_RESET_VALUE = 0x80200; // Reset value
    typedef bit_field_t<0, 0xffff> FS_GNPTXSTS_NPTXFSAV; // Non-periodic TxFIFO space available
    typedef bit_field_t<16, 0xff> FS_GNPTXSTS_NPTQXSAV; // Non-periodic transmit request queue space available
    typedef bit_field_t<24, 0x7f> FS_GNPTXSTS_NPTXQTOP; // Top of the non-periodic transmit request queue


    static constexpr uint32_t FS_GCCFG_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FS_GCCFG_PWRDWN = 0x10000; // Power down
    static constexpr uint32_t FS_GCCFG_VBUSASEN = 0x40000; // Enable the VBUS sensing device
    static constexpr uint32_t FS_GCCFG_VBUSBSEN = 0x80000; // Enable the VBUS sensing device
    static constexpr uint32_t FS_GCCFG_SOFOUTEN = 0x100000; // SOF output enable

    static constexpr uint32_t FS_CID_RESET_VALUE = 0x1000; // Reset value
    typedef bit_field_t<0, 0xffffffff> FS_CID_PRODUCT_ID; // Product ID field


    static constexpr uint32_t FS_HPTXFSIZ_RESET_VALUE = 0x2000600; // Reset value
    typedef bit_field_t<0, 0xffff> FS_HPTXFSIZ_PTXSA; // Host periodic TxFIFO start address
    typedef bit_field_t<16, 0xffff> FS_HPTXFSIZ_PTXFSIZ; // Host periodic TxFIFO depth

    static constexpr uint32_t FS_DIEPTXF1_RESET_VALUE = 0x2000400; // Reset value
    typedef bit_field_t<0, 0xffff> FS_DIEPTXF1_INEPTXSA; // IN endpoint FIFO2 transmit RAM start address
    typedef bit_field_t<16, 0xffff> FS_DIEPTXF1_INEPTXFD; // IN endpoint TxFIFO depth

    static constexpr uint32_t FS_DIEPTXF2_RESET_VALUE = 0x2000400; // Reset value
    typedef bit_field_t<0, 0xffff> FS_DIEPTXF2_INEPTXSA; // IN endpoint FIFO3 transmit RAM start address
    typedef bit_field_t<16, 0xffff> FS_DIEPTXF2_INEPTXFD; // IN endpoint TxFIFO depth

    static constexpr uint32_t FS_DIEPTXF3_RESET_VALUE = 0x2000400; // Reset value
    typedef bit_field_t<0, 0xffff> FS_DIEPTXF3_INEPTXSA; // IN endpoint FIFO4 transmit RAM start address
    typedef bit_field_t<16, 0xffff> FS_DIEPTXF3_INEPTXFD; // IN endpoint TxFIFO depth
};

// OTG_FS_GLOBAL: USB on the go full speed

struct stm32f412_otg_fs_global_t
{
    volatile uint32_t FS_GOTGCTL; // OTG_FS control and status register (OTG_FS_GOTGCTL)
    volatile uint32_t FS_GOTGINT; // OTG_FS interrupt register (OTG_FS_GOTGINT)
    volatile uint32_t FS_GAHBCFG; // OTG_FS AHB configuration register (OTG_FS_GAHBCFG)
    volatile uint32_t FS_GUSBCFG; // OTG_FS USB configuration register (OTG_FS_GUSBCFG)
    volatile uint32_t FS_GRSTCTL; // OTG_FS reset register (OTG_FS_GRSTCTL)
    volatile uint32_t FS_GINTSTS; // OTG_FS core interrupt register (OTG_FS_GINTSTS)
    volatile uint32_t FS_GINTMSK; // OTG_FS interrupt mask register (OTG_FS_GINTMSK)
    volatile uint32_t FS_GRXSTSR_DEVICE; // OTG_FS Receive status debug read(Device mode)
    reserved_t<0x1> _0x20;
    volatile uint32_t FS_GRXFSIZ; // OTG_FS Receive FIFO size register (OTG_FS_GRXFSIZ)
    volatile uint32_t FS_GNPTXFSIZ_DEVICE; // OTG_FS non-periodic transmit FIFO size register (Device mode)
    volatile uint32_t FS_GNPTXSTS; // OTG_FS non-periodic transmit FIFO/queue status register (OTG_FS_GNPTXSTS)
    reserved_t<0x2> _0x30;
    volatile uint32_t FS_GCCFG; // OTG_FS general core configuration register (OTG_FS_GCCFG)
    volatile uint32_t FS_CID; // core ID register
    reserved_t<0x30> _0x40;
    volatile uint32_t FS_HPTXFSIZ; // OTG_FS Host periodic transmit FIFO size register (OTG_FS_HPTXFSIZ)
    volatile uint32_t FS_DIEPTXF1; // OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF2)
    volatile uint32_t FS_DIEPTXF2; // OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF3)
    volatile uint32_t FS_DIEPTXF3; // OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF4)

    static constexpr uint32_t FS_GOTGCTL_RESET_VALUE = 0x800; // Reset value
    static constexpr uint32_t FS_GOTGCTL_SRQSCS = 0x1; // Session request success
    static constexpr uint32_t FS_GOTGCTL_SRQ = 0x2; // Session request
    static constexpr uint32_t FS_GOTGCTL_HNGSCS = 0x100; // Host negotiation success
    static constexpr uint32_t FS_GOTGCTL_HNPRQ = 0x200; // HNP request
    static constexpr uint32_t FS_GOTGCTL_HSHNPEN = 0x400; // Host set HNP enable
    static constexpr uint32_t FS_GOTGCTL_DHNPEN = 0x800; // Device HNP enabled
    static constexpr uint32_t FS_GOTGCTL_CIDSTS = 0x10000; // Connector ID status
    static constexpr uint32_t FS_GOTGCTL_DBCT = 0x20000; // Long/short debounce time
    static constexpr uint32_t FS_GOTGCTL_ASVLD = 0x40000; // A-session valid
    static constexpr uint32_t FS_GOTGCTL_BSVLD = 0x80000; // B-session valid

    static constexpr uint32_t FS_GOTGINT_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FS_GOTGINT_SEDET = 0x4; // Session end detected
    static constexpr uint32_t FS_GOTGINT_SRSSCHG = 0x100; // Session request success status change
    static constexpr uint32_t FS_GOTGINT_HNSSCHG = 0x200; // Host negotiation success status change
    static constexpr uint32_t FS_GOTGINT_HNGDET = 0x20000; // Host negotiation detected
    static constexpr uint32_t FS_GOTGINT_ADTOCHG = 0x40000; // A-device timeout change
    static constexpr uint32_t FS_GOTGINT_DBCDNE = 0x80000; // Debounce done

    static constexpr uint32_t FS_GAHBCFG_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FS_GAHBCFG_GINT = 0x1; // Global interrupt mask
    static constexpr uint32_t FS_GAHBCFG_TXFELVL = 0x80; // TxFIFO empty level
    static constexpr uint32_t FS_GAHBCFG_PTXFELVL = 0x100; // Periodic TxFIFO empty level

    static constexpr uint32_t FS_GUSBCFG_RESET_VALUE = 0xa00; // Reset value
    typedef bit_field_t<0, 0x7> FS_GUSBCFG_TOCAL; // FS timeout calibration
    static constexpr uint32_t FS_GUSBCFG_PHYSEL = 0x40; // Full Speed serial transceiver select
    static constexpr uint32_t FS_GUSBCFG_SRPCAP = 0x100; // SRP-capable
    static constexpr uint32_t FS_GUSBCFG_HNPCAP = 0x200; // HNP-capable
    typedef bit_field_t<10, 0xf> FS_GUSBCFG_TRDT; // USB turnaround time
    static constexpr uint32_t FS_GUSBCFG_FHMOD = 0x20000000; // Force host mode
    static constexpr uint32_t FS_GUSBCFG_FDMOD = 0x40000000; // Force device mode
    static constexpr uint32_t FS_GUSBCFG_CTXPKT = 0x80000000; // Corrupt Tx packet

    static constexpr uint32_t FS_GRSTCTL_RESET_VALUE = 0x20000000; // Reset value
    static constexpr uint32_t FS_GRSTCTL_CSRST = 0x1; // Core soft reset
    static constexpr uint32_t FS_GRSTCTL_HSRST = 0x2; // HCLK soft reset
    static constexpr uint32_t FS_GRSTCTL_FCRST = 0x4; // Host frame counter reset
    static constexpr uint32_t FS_GRSTCTL_RXFFLSH = 0x10; // RxFIFO flush
    static constexpr uint32_t FS_GRSTCTL_TXFFLSH = 0x20; // TxFIFO flush
    typedef bit_field_t<6, 0x1f> FS_GRSTCTL_TXFNUM; // TxFIFO number
    static constexpr uint32_t FS_GRSTCTL_AHBIDL = 0x80000000; // AHB master idle

    static constexpr uint32_t FS_GINTSTS_RESET_VALUE = 0x4000020; // Reset value
    static constexpr uint32_t FS_GINTSTS_CMOD = 0x1; // Current mode of operation
    static constexpr uint32_t FS_GINTSTS_MMIS = 0x2; // Mode mismatch interrupt
    static constexpr uint32_t FS_GINTSTS_OTGINT = 0x4; // OTG interrupt
    static constexpr uint32_t FS_GINTSTS_SOF = 0x8; // Start of frame
    static constexpr uint32_t FS_GINTSTS_RXFLVL = 0x10; // RxFIFO non-empty
    static constexpr uint32_t FS_GINTSTS_NPTXFE = 0x20; // Non-periodic TxFIFO empty
    static constexpr uint32_t FS_GINTSTS_GINAKEFF = 0x40; // Global IN non-periodic NAK effective
    static constexpr uint32_t FS_GINTSTS_GOUTNAKEFF = 0x80; // Global OUT NAK effective
    static constexpr uint32_t FS_GINTSTS_ESUSP = 0x400; // Early suspend
    static constexpr uint32_t FS_GINTSTS_USBSUSP = 0x800; // USB suspend
    static constexpr uint32_t FS_GINTSTS_USBRST = 0x1000; // USB reset
    static constexpr uint32_t FS_GINTSTS_ENUMDNE = 0x2000; // Enumeration done
    static constexpr uint32_t FS_GINTSTS_ISOODRP = 0x4000; // Isochronous OUT packet dropped interrupt
    static constexpr uint32_t FS_GINTSTS_EOPF = 0x8000; // End of periodic frame interrupt
    static constexpr uint32_t FS_GINTSTS_IEPINT = 0x40000; // IN endpoint interrupt
    static constexpr uint32_t FS_GINTSTS_OEPINT = 0x80000; // OUT endpoint interrupt
    static constexpr uint32_t FS_GINTSTS_IISOIXFR = 0x100000; // Incomplete isochronous IN transfer
    static constexpr uint32_t FS_GINTSTS_IPXFR_INCOMPISOOUT = 0x200000; // Incomplete periodic transfer(Host mode)/Incomplete isochronous OUT transfer(Device mode)
    static constexpr uint32_t FS_GINTSTS_HPRTINT = 0x1000000; // Host port interrupt
    static constexpr uint32_t FS_GINTSTS_HCINT = 0x2000000; // Host channels interrupt
    static constexpr uint32_t FS_GINTSTS_PTXFE = 0x4000000; // Periodic TxFIFO empty
    static constexpr uint32_t FS_GINTSTS_CIDSCHG = 0x10000000; // Connector ID status change
    static constexpr uint32_t FS_GINTSTS_DISCINT = 0x20000000; // Disconnect detected interrupt
    static constexpr uint32_t FS_GINTSTS_SRQINT = 0x40000000; // Session request/new session detected interrupt
    static constexpr uint32_t FS_GINTSTS_WKUPINT = 0x80000000; // Resume/remote wakeup detected interrupt

    static constexpr uint32_t FS_GINTMSK_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FS_GINTMSK_MMISM = 0x2; // Mode mismatch interrupt mask
    static constexpr uint32_t FS_GINTMSK_OTGINT = 0x4; // OTG interrupt mask
    static constexpr uint32_t FS_GINTMSK_SOFM = 0x8; // Start of frame mask
    static constexpr uint32_t FS_GINTMSK_RXFLVLM = 0x10; // Receive FIFO non-empty mask
    static constexpr uint32_t FS_GINTMSK_NPTXFEM = 0x20; // Non-periodic TxFIFO empty mask
    static constexpr uint32_t FS_GINTMSK_GINAKEFFM = 0x40; // Global non-periodic IN NAK effective mask
    static constexpr uint32_t FS_GINTMSK_GONAKEFFM = 0x80; // Global OUT NAK effective mask
    static constexpr uint32_t FS_GINTMSK_ESUSPM = 0x400; // Early suspend mask
    static constexpr uint32_t FS_GINTMSK_USBSUSPM = 0x800; // USB suspend mask
    static constexpr uint32_t FS_GINTMSK_USBRST = 0x1000; // USB reset mask
    static constexpr uint32_t FS_GINTMSK_ENUMDNEM = 0x2000; // Enumeration done mask
    static constexpr uint32_t FS_GINTMSK_ISOODRPM = 0x4000; // Isochronous OUT packet dropped interrupt mask
    static constexpr uint32_t FS_GINTMSK_EOPFM = 0x8000; // End of periodic frame interrupt mask
    static constexpr uint32_t FS_GINTMSK_EPMISM = 0x20000; // Endpoint mismatch interrupt mask
    static constexpr uint32_t FS_GINTMSK_IEPINT = 0x40000; // IN endpoints interrupt mask
    static constexpr uint32_t FS_GINTMSK_OEPINT = 0x80000; // OUT endpoints interrupt mask
    static constexpr uint32_t FS_GINTMSK_IISOIXFRM = 0x100000; // Incomplete isochronous IN transfer mask
    static constexpr uint32_t FS_GINTMSK_IPXFRM_IISOOXFRM = 0x200000; // Incomplete periodic transfer mask(Host mode)/Incomplete isochronous OUT transfer mask(Device mode)
    static constexpr uint32_t FS_GINTMSK_PRTIM = 0x1000000; // Host port interrupt mask
    static constexpr uint32_t FS_GINTMSK_HCIM = 0x2000000; // Host channels interrupt mask
    static constexpr uint32_t FS_GINTMSK_PTXFEM = 0x4000000; // Periodic TxFIFO empty mask
    static constexpr uint32_t FS_GINTMSK_CIDSCHGM = 0x10000000; // Connector ID status change mask
    static constexpr uint32_t FS_GINTMSK_DISCINT = 0x20000000; // Disconnect detected interrupt mask
    static constexpr uint32_t FS_GINTMSK_SRQIM = 0x40000000; // Session request/new session detected interrupt mask
    static constexpr uint32_t FS_GINTMSK_WUIM = 0x80000000; // Resume/remote wakeup detected interrupt mask

    static constexpr uint32_t FS_GRXSTSR_DEVICE_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> FS_GRXSTSR_DEVICE_EPNUM; // Endpoint number
    typedef bit_field_t<4, 0x7ff> FS_GRXSTSR_DEVICE_BCNT; // Byte count
    typedef bit_field_t<15, 0x3> FS_GRXSTSR_DEVICE_DPID; // Data PID
    typedef bit_field_t<17, 0xf> FS_GRXSTSR_DEVICE_PKTSTS; // Packet status
    typedef bit_field_t<21, 0xf> FS_GRXSTSR_DEVICE_FRMNUM; // Frame number


    static constexpr uint32_t FS_GRXFSIZ_RESET_VALUE = 0x200; // Reset value
    typedef bit_field_t<0, 0xffff> FS_GRXFSIZ_RXFD; // RxFIFO depth

    static constexpr uint32_t FS_GNPTXFSIZ_DEVICE_RESET_VALUE = 0x200; // Reset value
    typedef bit_field_t<0, 0xffff> FS_GNPTXFSIZ_DEVICE_TX0FSA; // Endpoint 0 transmit RAM start address
    typedef bit_field_t<16, 0xffff> FS_GNPTXFSIZ_DEVICE_TX0FD; // Endpoint 0 TxFIFO depth

    static constexpr uint32_t FS_GNPTXSTS_RESET_VALUE = 0x80200; // Reset value
    typedef bit_field_t<0, 0xffff> FS_GNPTXSTS_NPTXFSAV; // Non-periodic TxFIFO space available
    typedef bit_field_t<16, 0xff> FS_GNPTXSTS_NPTQXSAV; // Non-periodic transmit request queue space available
    typedef bit_field_t<24, 0x7f> FS_GNPTXSTS_NPTXQTOP; // Top of the non-periodic transmit request queue


    static constexpr uint32_t FS_GCCFG_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FS_GCCFG_DCDET = 0x1; // DCDET
    static constexpr uint32_t FS_GCCFG_PDET = 0x2; // PDET
    static constexpr uint32_t FS_GCCFG_SDET = 0x4; // SDET
    static constexpr uint32_t FS_GCCFG_PS2DET = 0x8; // PS2DET
    static constexpr uint32_t FS_GCCFG_PWRDWN = 0x10000; // PWRDWN
    static constexpr uint32_t FS_GCCFG_BCDEN = 0x20000; // BCDEN
    static constexpr uint32_t FS_GCCFG_DCDEN = 0x40000; // DCDEN
    static constexpr uint32_t FS_GCCFG_PDEN = 0x80000; // PDEN
    static constexpr uint32_t FS_GCCFG_SDEN = 0x100000; // SDEN
    static constexpr uint32_t FS_GCCFG_VBDEN = 0x200000; // VBDEN

    static constexpr uint32_t FS_CID_RESET_VALUE = 0x1000; // Reset value
    typedef bit_field_t<0, 0xffffffff> FS_CID_PRODUCT_ID; // Product ID field


    static constexpr uint32_t FS_HPTXFSIZ_RESET_VALUE = 0x2000600; // Reset value
    typedef bit_field_t<0, 0xffff> FS_HPTXFSIZ_PTXSA; // Host periodic TxFIFO start address
    typedef bit_field_t<16, 0xffff> FS_HPTXFSIZ_PTXFSIZ; // Host periodic TxFIFO depth

    static constexpr uint32_t FS_DIEPTXF1_RESET_VALUE = 0x2000400; // Reset value
    typedef bit_field_t<0, 0xffff> FS_DIEPTXF1_INEPTXSA; // IN endpoint FIFO2 transmit RAM start address
    typedef bit_field_t<16, 0xffff> FS_DIEPTXF1_INEPTXFD; // IN endpoint TxFIFO depth

    static constexpr uint32_t FS_DIEPTXF2_RESET_VALUE = 0x2000400; // Reset value
    typedef bit_field_t<0, 0xffff> FS_DIEPTXF2_INEPTXSA; // IN endpoint FIFO3 transmit RAM start address
    typedef bit_field_t<16, 0xffff> FS_DIEPTXF2_INEPTXFD; // IN endpoint TxFIFO depth

    static constexpr uint32_t FS_DIEPTXF3_RESET_VALUE = 0x2000400; // Reset value
    typedef bit_field_t<0, 0xffff> FS_DIEPTXF3_INEPTXSA; // IN endpoint FIFO4 transmit RAM start address
    typedef bit_field_t<16, 0xffff> FS_DIEPTXF3_INEPTXFD; // IN endpoint TxFIFO depth
};

// OTG_FS_HOST: USB on the go full speed

struct stm32f401_otg_fs_host_t
{
    volatile uint32_t FS_HCFG; // OTG_FS host configuration register (OTG_FS_HCFG)
    volatile uint32_t HFIR; // OTG_FS Host frame interval register
    volatile uint32_t FS_HFNUM; // OTG_FS host frame number/frame time remaining register (OTG_FS_HFNUM)
    reserved_t<0x1> _0xc;
    volatile uint32_t FS_HPTXSTS; // OTG_FS_Host periodic transmit FIFO/queue status register (OTG_FS_HPTXSTS)
    volatile uint32_t HAINT; // OTG_FS Host all channels interrupt register
    volatile uint32_t HAINTMSK; // OTG_FS host all channels interrupt mask register
    reserved_t<0x9> _0x1c;
    volatile uint32_t FS_HPRT; // OTG_FS host port control and status register (OTG_FS_HPRT)
    reserved_t<0x2f> _0x44;
    volatile uint32_t FS_HCCHAR0; // OTG_FS host channel-0 characteristics register (OTG_FS_HCCHAR0)
    reserved_t<0x1> _0x104;
    volatile uint32_t FS_HCINT0; // OTG_FS host channel-0 interrupt register (OTG_FS_HCINT0)
    volatile uint32_t FS_HCINTMSK0; // OTG_FS host channel-0 mask register (OTG_FS_HCINTMSK0)
    volatile uint32_t FS_HCTSIZ0; // OTG_FS host channel-0 transfer size register
    reserved_t<0x3> _0x114;
    volatile uint32_t FS_HCCHAR1; // OTG_FS host channel-1 characteristics register (OTG_FS_HCCHAR1)
    reserved_t<0x1> _0x124;
    volatile uint32_t FS_HCINT1; // OTG_FS host channel-1 interrupt register (OTG_FS_HCINT1)
    volatile uint32_t FS_HCINTMSK1; // OTG_FS host channel-1 mask register (OTG_FS_HCINTMSK1)
    volatile uint32_t FS_HCTSIZ1; // OTG_FS host channel-1 transfer size register
    reserved_t<0x3> _0x134;
    volatile uint32_t FS_HCCHAR2; // OTG_FS host channel-2 characteristics register (OTG_FS_HCCHAR2)
    reserved_t<0x1> _0x144;
    volatile uint32_t FS_HCINT2; // OTG_FS host channel-2 interrupt register (OTG_FS_HCINT2)
    volatile uint32_t FS_HCINTMSK2; // OTG_FS host channel-2 mask register (OTG_FS_HCINTMSK2)
    volatile uint32_t FS_HCTSIZ2; // OTG_FS host channel-2 transfer size register
    reserved_t<0x3> _0x154;
    volatile uint32_t FS_HCCHAR3; // OTG_FS host channel-3 characteristics register (OTG_FS_HCCHAR3)
    reserved_t<0x1> _0x164;
    volatile uint32_t FS_HCINT3; // OTG_FS host channel-3 interrupt register (OTG_FS_HCINT3)
    volatile uint32_t FS_HCINTMSK3; // OTG_FS host channel-3 mask register (OTG_FS_HCINTMSK3)
    volatile uint32_t FS_HCTSIZ3; // OTG_FS host channel-3 transfer size register
    reserved_t<0x3> _0x174;
    volatile uint32_t FS_HCCHAR4; // OTG_FS host channel-4 characteristics register (OTG_FS_HCCHAR4)
    reserved_t<0x1> _0x184;
    volatile uint32_t FS_HCINT4; // OTG_FS host channel-4 interrupt register (OTG_FS_HCINT4)
    volatile uint32_t FS_HCINTMSK4; // OTG_FS host channel-4 mask register (OTG_FS_HCINTMSK4)
    volatile uint32_t FS_HCTSIZ4; // OTG_FS host channel-x transfer size register
    reserved_t<0x3> _0x194;
    volatile uint32_t FS_HCCHAR5; // OTG_FS host channel-5 characteristics register (OTG_FS_HCCHAR5)
    reserved_t<0x1> _0x1a4;
    volatile uint32_t FS_HCINT5; // OTG_FS host channel-5 interrupt register (OTG_FS_HCINT5)
    volatile uint32_t FS_HCINTMSK5; // OTG_FS host channel-5 mask register (OTG_FS_HCINTMSK5)
    volatile uint32_t FS_HCTSIZ5; // OTG_FS host channel-5 transfer size register
    reserved_t<0x3> _0x1b4;
    volatile uint32_t FS_HCCHAR6; // OTG_FS host channel-6 characteristics register (OTG_FS_HCCHAR6)
    reserved_t<0x1> _0x1c4;
    volatile uint32_t FS_HCINT6; // OTG_FS host channel-6 interrupt register (OTG_FS_HCINT6)
    volatile uint32_t FS_HCINTMSK6; // OTG_FS host channel-6 mask register (OTG_FS_HCINTMSK6)
    volatile uint32_t FS_HCTSIZ6; // OTG_FS host channel-6 transfer size register
    reserved_t<0x3> _0x1d4;
    volatile uint32_t FS_HCCHAR7; // OTG_FS host channel-7 characteristics register (OTG_FS_HCCHAR7)
    reserved_t<0x1> _0x1e4;
    volatile uint32_t FS_HCINT7; // OTG_FS host channel-7 interrupt register (OTG_FS_HCINT7)
    volatile uint32_t FS_HCINTMSK7; // OTG_FS host channel-7 mask register (OTG_FS_HCINTMSK7)
    volatile uint32_t FS_HCTSIZ7; // OTG_FS host channel-7 transfer size register

    static constexpr uint32_t FS_HCFG_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> FS_HCFG_FSLSPCS; // FS/LS PHY clock select
    static constexpr uint32_t FS_HCFG_FSLSS = 0x4; // FS- and LS-only support

    static constexpr uint32_t HFIR_RESET_VALUE = 0xea60; // Reset value
    typedef bit_field_t<0, 0xffff> HFIR_FRIVL; // Frame interval

    static constexpr uint32_t FS_HFNUM_RESET_VALUE = 0x3fff; // Reset value
    typedef bit_field_t<0, 0xffff> FS_HFNUM_FRNUM; // Frame number
    typedef bit_field_t<16, 0xffff> FS_HFNUM_FTREM; // Frame time remaining


    static constexpr uint32_t FS_HPTXSTS_RESET_VALUE = 0x80100; // Reset value
    typedef bit_field_t<0, 0xffff> FS_HPTXSTS_PTXFSAVL; // Periodic transmit data FIFO space available
    typedef bit_field_t<16, 0xff> FS_HPTXSTS_PTXQSAV; // Periodic transmit request queue space available
    typedef bit_field_t<24, 0xff> FS_HPTXSTS_PTXQTOP; // Top of the periodic transmit request queue

    static constexpr uint32_t HAINT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> HAINT_HAINT; // Channel interrupts

    static constexpr uint32_t HAINTMSK_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> HAINTMSK_HAINTM; // Channel interrupt mask


    static constexpr uint32_t FS_HPRT_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FS_HPRT_PCSTS = 0x1; // Port connect status
    static constexpr uint32_t FS_HPRT_PCDET = 0x2; // Port connect detected
    static constexpr uint32_t FS_HPRT_PENA = 0x4; // Port enable
    static constexpr uint32_t FS_HPRT_PENCHNG = 0x8; // Port enable/disable change
    static constexpr uint32_t FS_HPRT_POCA = 0x10; // Port overcurrent active
    static constexpr uint32_t FS_HPRT_POCCHNG = 0x20; // Port overcurrent change
    static constexpr uint32_t FS_HPRT_PRES = 0x40; // Port resume
    static constexpr uint32_t FS_HPRT_PSUSP = 0x80; // Port suspend
    static constexpr uint32_t FS_HPRT_PRST = 0x100; // Port reset
    typedef bit_field_t<10, 0x3> FS_HPRT_PLSTS; // Port line status
    static constexpr uint32_t FS_HPRT_PPWR = 0x1000; // Port power
    typedef bit_field_t<13, 0xf> FS_HPRT_PTCTL; // Port test control
    typedef bit_field_t<17, 0x3> FS_HPRT_PSPD; // Port speed


    static constexpr uint32_t FS_HCCHAR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> FS_HCCHAR0_MPSIZ; // Maximum packet size
    typedef bit_field_t<11, 0xf> FS_HCCHAR0_EPNUM; // Endpoint number
    static constexpr uint32_t FS_HCCHAR0_EPDIR = 0x8000; // Endpoint direction
    static constexpr uint32_t FS_HCCHAR0_LSDEV = 0x20000; // Low-speed device
    typedef bit_field_t<18, 0x3> FS_HCCHAR0_EPTYP; // Endpoint type
    typedef bit_field_t<20, 0x3> FS_HCCHAR0_MCNT; // Multicount
    typedef bit_field_t<22, 0x7f> FS_HCCHAR0_DAD; // Device address
    static constexpr uint32_t FS_HCCHAR0_ODDFRM = 0x20000000; // Odd frame
    static constexpr uint32_t FS_HCCHAR0_CHDIS = 0x40000000; // Channel disable
    static constexpr uint32_t FS_HCCHAR0_CHENA = 0x80000000; // Channel enable


    static constexpr uint32_t FS_HCINT0_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FS_HCINT0_XFRC = 0x1; // Transfer completed
    static constexpr uint32_t FS_HCINT0_CHH = 0x2; // Channel halted
    static constexpr uint32_t FS_HCINT0_STALL = 0x8; // STALL response received interrupt
    static constexpr uint32_t FS_HCINT0_NAK = 0x10; // NAK response received interrupt
    static constexpr uint32_t FS_HCINT0_ACK = 0x20; // ACK response received/transmitted interrupt
    static constexpr uint32_t FS_HCINT0_TXERR = 0x80; // Transaction error
    static constexpr uint32_t FS_HCINT0_BBERR = 0x100; // Babble error
    static constexpr uint32_t FS_HCINT0_FRMOR = 0x200; // Frame overrun
    static constexpr uint32_t FS_HCINT0_DTERR = 0x400; // Data toggle error

    static constexpr uint32_t FS_HCINTMSK0_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FS_HCINTMSK0_XFRCM = 0x1; // Transfer completed mask
    static constexpr uint32_t FS_HCINTMSK0_CHHM = 0x2; // Channel halted mask
    static constexpr uint32_t FS_HCINTMSK0_STALLM = 0x8; // STALL response received interrupt mask
    static constexpr uint32_t FS_HCINTMSK0_NAKM = 0x10; // NAK response received interrupt mask
    static constexpr uint32_t FS_HCINTMSK0_ACKM = 0x20; // ACK response received/transmitted interrupt mask
    static constexpr uint32_t FS_HCINTMSK0_NYET = 0x40; // response received interrupt mask
    static constexpr uint32_t FS_HCINTMSK0_TXERRM = 0x80; // Transaction error mask
    static constexpr uint32_t FS_HCINTMSK0_BBERRM = 0x100; // Babble error mask
    static constexpr uint32_t FS_HCINTMSK0_FRMORM = 0x200; // Frame overrun mask
    static constexpr uint32_t FS_HCINTMSK0_DTERRM = 0x400; // Data toggle error mask

    static constexpr uint32_t FS_HCTSIZ0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> FS_HCTSIZ0_XFRSIZ; // Transfer size
    typedef bit_field_t<19, 0x3ff> FS_HCTSIZ0_PKTCNT; // Packet count
    typedef bit_field_t<29, 0x3> FS_HCTSIZ0_DPID; // Data PID


    static constexpr uint32_t FS_HCCHAR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> FS_HCCHAR1_MPSIZ; // Maximum packet size
    typedef bit_field_t<11, 0xf> FS_HCCHAR1_EPNUM; // Endpoint number
    static constexpr uint32_t FS_HCCHAR1_EPDIR = 0x8000; // Endpoint direction
    static constexpr uint32_t FS_HCCHAR1_LSDEV = 0x20000; // Low-speed device
    typedef bit_field_t<18, 0x3> FS_HCCHAR1_EPTYP; // Endpoint type
    typedef bit_field_t<20, 0x3> FS_HCCHAR1_MCNT; // Multicount
    typedef bit_field_t<22, 0x7f> FS_HCCHAR1_DAD; // Device address
    static constexpr uint32_t FS_HCCHAR1_ODDFRM = 0x20000000; // Odd frame
    static constexpr uint32_t FS_HCCHAR1_CHDIS = 0x40000000; // Channel disable
    static constexpr uint32_t FS_HCCHAR1_CHENA = 0x80000000; // Channel enable


    static constexpr uint32_t FS_HCINT1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FS_HCINT1_XFRC = 0x1; // Transfer completed
    static constexpr uint32_t FS_HCINT1_CHH = 0x2; // Channel halted
    static constexpr uint32_t FS_HCINT1_STALL = 0x8; // STALL response received interrupt
    static constexpr uint32_t FS_HCINT1_NAK = 0x10; // NAK response received interrupt
    static constexpr uint32_t FS_HCINT1_ACK = 0x20; // ACK response received/transmitted interrupt
    static constexpr uint32_t FS_HCINT1_TXERR = 0x80; // Transaction error
    static constexpr uint32_t FS_HCINT1_BBERR = 0x100; // Babble error
    static constexpr uint32_t FS_HCINT1_FRMOR = 0x200; // Frame overrun
    static constexpr uint32_t FS_HCINT1_DTERR = 0x400; // Data toggle error

    static constexpr uint32_t FS_HCINTMSK1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FS_HCINTMSK1_XFRCM = 0x1; // Transfer completed mask
    static constexpr uint32_t FS_HCINTMSK1_CHHM = 0x2; // Channel halted mask
    static constexpr uint32_t FS_HCINTMSK1_STALLM = 0x8; // STALL response received interrupt mask
    static constexpr uint32_t FS_HCINTMSK1_NAKM = 0x10; // NAK response received interrupt mask
    static constexpr uint32_t FS_HCINTMSK1_ACKM = 0x20; // ACK response received/transmitted interrupt mask
    static constexpr uint32_t FS_HCINTMSK1_NYET = 0x40; // response received interrupt mask
    static constexpr uint32_t FS_HCINTMSK1_TXERRM = 0x80; // Transaction error mask
    static constexpr uint32_t FS_HCINTMSK1_BBERRM = 0x100; // Babble error mask
    static constexpr uint32_t FS_HCINTMSK1_FRMORM = 0x200; // Frame overrun mask
    static constexpr uint32_t FS_HCINTMSK1_DTERRM = 0x400; // Data toggle error mask

    static constexpr uint32_t FS_HCTSIZ1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> FS_HCTSIZ1_XFRSIZ; // Transfer size
    typedef bit_field_t<19, 0x3ff> FS_HCTSIZ1_PKTCNT; // Packet count
    typedef bit_field_t<29, 0x3> FS_HCTSIZ1_DPID; // Data PID


    static constexpr uint32_t FS_HCCHAR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> FS_HCCHAR2_MPSIZ; // Maximum packet size
    typedef bit_field_t<11, 0xf> FS_HCCHAR2_EPNUM; // Endpoint number
    static constexpr uint32_t FS_HCCHAR2_EPDIR = 0x8000; // Endpoint direction
    static constexpr uint32_t FS_HCCHAR2_LSDEV = 0x20000; // Low-speed device
    typedef bit_field_t<18, 0x3> FS_HCCHAR2_EPTYP; // Endpoint type
    typedef bit_field_t<20, 0x3> FS_HCCHAR2_MCNT; // Multicount
    typedef bit_field_t<22, 0x7f> FS_HCCHAR2_DAD; // Device address
    static constexpr uint32_t FS_HCCHAR2_ODDFRM = 0x20000000; // Odd frame
    static constexpr uint32_t FS_HCCHAR2_CHDIS = 0x40000000; // Channel disable
    static constexpr uint32_t FS_HCCHAR2_CHENA = 0x80000000; // Channel enable


    static constexpr uint32_t FS_HCINT2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FS_HCINT2_XFRC = 0x1; // Transfer completed
    static constexpr uint32_t FS_HCINT2_CHH = 0x2; // Channel halted
    static constexpr uint32_t FS_HCINT2_STALL = 0x8; // STALL response received interrupt
    static constexpr uint32_t FS_HCINT2_NAK = 0x10; // NAK response received interrupt
    static constexpr uint32_t FS_HCINT2_ACK = 0x20; // ACK response received/transmitted interrupt
    static constexpr uint32_t FS_HCINT2_TXERR = 0x80; // Transaction error
    static constexpr uint32_t FS_HCINT2_BBERR = 0x100; // Babble error
    static constexpr uint32_t FS_HCINT2_FRMOR = 0x200; // Frame overrun
    static constexpr uint32_t FS_HCINT2_DTERR = 0x400; // Data toggle error

    static constexpr uint32_t FS_HCINTMSK2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FS_HCINTMSK2_XFRCM = 0x1; // Transfer completed mask
    static constexpr uint32_t FS_HCINTMSK2_CHHM = 0x2; // Channel halted mask
    static constexpr uint32_t FS_HCINTMSK2_STALLM = 0x8; // STALL response received interrupt mask
    static constexpr uint32_t FS_HCINTMSK2_NAKM = 0x10; // NAK response received interrupt mask
    static constexpr uint32_t FS_HCINTMSK2_ACKM = 0x20; // ACK response received/transmitted interrupt mask
    static constexpr uint32_t FS_HCINTMSK2_NYET = 0x40; // response received interrupt mask
    static constexpr uint32_t FS_HCINTMSK2_TXERRM = 0x80; // Transaction error mask
    static constexpr uint32_t FS_HCINTMSK2_BBERRM = 0x100; // Babble error mask
    static constexpr uint32_t FS_HCINTMSK2_FRMORM = 0x200; // Frame overrun mask
    static constexpr uint32_t FS_HCINTMSK2_DTERRM = 0x400; // Data toggle error mask

    static constexpr uint32_t FS_HCTSIZ2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> FS_HCTSIZ2_XFRSIZ; // Transfer size
    typedef bit_field_t<19, 0x3ff> FS_HCTSIZ2_PKTCNT; // Packet count
    typedef bit_field_t<29, 0x3> FS_HCTSIZ2_DPID; // Data PID


    static constexpr uint32_t FS_HCCHAR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> FS_HCCHAR3_MPSIZ; // Maximum packet size
    typedef bit_field_t<11, 0xf> FS_HCCHAR3_EPNUM; // Endpoint number
    static constexpr uint32_t FS_HCCHAR3_EPDIR = 0x8000; // Endpoint direction
    static constexpr uint32_t FS_HCCHAR3_LSDEV = 0x20000; // Low-speed device
    typedef bit_field_t<18, 0x3> FS_HCCHAR3_EPTYP; // Endpoint type
    typedef bit_field_t<20, 0x3> FS_HCCHAR3_MCNT; // Multicount
    typedef bit_field_t<22, 0x7f> FS_HCCHAR3_DAD; // Device address
    static constexpr uint32_t FS_HCCHAR3_ODDFRM = 0x20000000; // Odd frame
    static constexpr uint32_t FS_HCCHAR3_CHDIS = 0x40000000; // Channel disable
    static constexpr uint32_t FS_HCCHAR3_CHENA = 0x80000000; // Channel enable


    static constexpr uint32_t FS_HCINT3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FS_HCINT3_XFRC = 0x1; // Transfer completed
    static constexpr uint32_t FS_HCINT3_CHH = 0x2; // Channel halted
    static constexpr uint32_t FS_HCINT3_STALL = 0x8; // STALL response received interrupt
    static constexpr uint32_t FS_HCINT3_NAK = 0x10; // NAK response received interrupt
    static constexpr uint32_t FS_HCINT3_ACK = 0x20; // ACK response received/transmitted interrupt
    static constexpr uint32_t FS_HCINT3_TXERR = 0x80; // Transaction error
    static constexpr uint32_t FS_HCINT3_BBERR = 0x100; // Babble error
    static constexpr uint32_t FS_HCINT3_FRMOR = 0x200; // Frame overrun
    static constexpr uint32_t FS_HCINT3_DTERR = 0x400; // Data toggle error

    static constexpr uint32_t FS_HCINTMSK3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FS_HCINTMSK3_XFRCM = 0x1; // Transfer completed mask
    static constexpr uint32_t FS_HCINTMSK3_CHHM = 0x2; // Channel halted mask
    static constexpr uint32_t FS_HCINTMSK3_STALLM = 0x8; // STALL response received interrupt mask
    static constexpr uint32_t FS_HCINTMSK3_NAKM = 0x10; // NAK response received interrupt mask
    static constexpr uint32_t FS_HCINTMSK3_ACKM = 0x20; // ACK response received/transmitted interrupt mask
    static constexpr uint32_t FS_HCINTMSK3_NYET = 0x40; // response received interrupt mask
    static constexpr uint32_t FS_HCINTMSK3_TXERRM = 0x80; // Transaction error mask
    static constexpr uint32_t FS_HCINTMSK3_BBERRM = 0x100; // Babble error mask
    static constexpr uint32_t FS_HCINTMSK3_FRMORM = 0x200; // Frame overrun mask
    static constexpr uint32_t FS_HCINTMSK3_DTERRM = 0x400; // Data toggle error mask

    static constexpr uint32_t FS_HCTSIZ3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> FS_HCTSIZ3_XFRSIZ; // Transfer size
    typedef bit_field_t<19, 0x3ff> FS_HCTSIZ3_PKTCNT; // Packet count
    typedef bit_field_t<29, 0x3> FS_HCTSIZ3_DPID; // Data PID


    static constexpr uint32_t FS_HCCHAR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> FS_HCCHAR4_MPSIZ; // Maximum packet size
    typedef bit_field_t<11, 0xf> FS_HCCHAR4_EPNUM; // Endpoint number
    static constexpr uint32_t FS_HCCHAR4_EPDIR = 0x8000; // Endpoint direction
    static constexpr uint32_t FS_HCCHAR4_LSDEV = 0x20000; // Low-speed device
    typedef bit_field_t<18, 0x3> FS_HCCHAR4_EPTYP; // Endpoint type
    typedef bit_field_t<20, 0x3> FS_HCCHAR4_MCNT; // Multicount
    typedef bit_field_t<22, 0x7f> FS_HCCHAR4_DAD; // Device address
    static constexpr uint32_t FS_HCCHAR4_ODDFRM = 0x20000000; // Odd frame
    static constexpr uint32_t FS_HCCHAR4_CHDIS = 0x40000000; // Channel disable
    static constexpr uint32_t FS_HCCHAR4_CHENA = 0x80000000; // Channel enable


    static constexpr uint32_t FS_HCINT4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FS_HCINT4_XFRC = 0x1; // Transfer completed
    static constexpr uint32_t FS_HCINT4_CHH = 0x2; // Channel halted
    static constexpr uint32_t FS_HCINT4_STALL = 0x8; // STALL response received interrupt
    static constexpr uint32_t FS_HCINT4_NAK = 0x10; // NAK response received interrupt
    static constexpr uint32_t FS_HCINT4_ACK = 0x20; // ACK response received/transmitted interrupt
    static constexpr uint32_t FS_HCINT4_TXERR = 0x80; // Transaction error
    static constexpr uint32_t FS_HCINT4_BBERR = 0x100; // Babble error
    static constexpr uint32_t FS_HCINT4_FRMOR = 0x200; // Frame overrun
    static constexpr uint32_t FS_HCINT4_DTERR = 0x400; // Data toggle error

    static constexpr uint32_t FS_HCINTMSK4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FS_HCINTMSK4_XFRCM = 0x1; // Transfer completed mask
    static constexpr uint32_t FS_HCINTMSK4_CHHM = 0x2; // Channel halted mask
    static constexpr uint32_t FS_HCINTMSK4_STALLM = 0x8; // STALL response received interrupt mask
    static constexpr uint32_t FS_HCINTMSK4_NAKM = 0x10; // NAK response received interrupt mask
    static constexpr uint32_t FS_HCINTMSK4_ACKM = 0x20; // ACK response received/transmitted interrupt mask
    static constexpr uint32_t FS_HCINTMSK4_NYET = 0x40; // response received interrupt mask
    static constexpr uint32_t FS_HCINTMSK4_TXERRM = 0x80; // Transaction error mask
    static constexpr uint32_t FS_HCINTMSK4_BBERRM = 0x100; // Babble error mask
    static constexpr uint32_t FS_HCINTMSK4_FRMORM = 0x200; // Frame overrun mask
    static constexpr uint32_t FS_HCINTMSK4_DTERRM = 0x400; // Data toggle error mask

    static constexpr uint32_t FS_HCTSIZ4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> FS_HCTSIZ4_XFRSIZ; // Transfer size
    typedef bit_field_t<19, 0x3ff> FS_HCTSIZ4_PKTCNT; // Packet count
    typedef bit_field_t<29, 0x3> FS_HCTSIZ4_DPID; // Data PID


    static constexpr uint32_t FS_HCCHAR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> FS_HCCHAR5_MPSIZ; // Maximum packet size
    typedef bit_field_t<11, 0xf> FS_HCCHAR5_EPNUM; // Endpoint number
    static constexpr uint32_t FS_HCCHAR5_EPDIR = 0x8000; // Endpoint direction
    static constexpr uint32_t FS_HCCHAR5_LSDEV = 0x20000; // Low-speed device
    typedef bit_field_t<18, 0x3> FS_HCCHAR5_EPTYP; // Endpoint type
    typedef bit_field_t<20, 0x3> FS_HCCHAR5_MCNT; // Multicount
    typedef bit_field_t<22, 0x7f> FS_HCCHAR5_DAD; // Device address
    static constexpr uint32_t FS_HCCHAR5_ODDFRM = 0x20000000; // Odd frame
    static constexpr uint32_t FS_HCCHAR5_CHDIS = 0x40000000; // Channel disable
    static constexpr uint32_t FS_HCCHAR5_CHENA = 0x80000000; // Channel enable


    static constexpr uint32_t FS_HCINT5_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FS_HCINT5_XFRC = 0x1; // Transfer completed
    static constexpr uint32_t FS_HCINT5_CHH = 0x2; // Channel halted
    static constexpr uint32_t FS_HCINT5_STALL = 0x8; // STALL response received interrupt
    static constexpr uint32_t FS_HCINT5_NAK = 0x10; // NAK response received interrupt
    static constexpr uint32_t FS_HCINT5_ACK = 0x20; // ACK response received/transmitted interrupt
    static constexpr uint32_t FS_HCINT5_TXERR = 0x80; // Transaction error
    static constexpr uint32_t FS_HCINT5_BBERR = 0x100; // Babble error
    static constexpr uint32_t FS_HCINT5_FRMOR = 0x200; // Frame overrun
    static constexpr uint32_t FS_HCINT5_DTERR = 0x400; // Data toggle error

    static constexpr uint32_t FS_HCINTMSK5_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FS_HCINTMSK5_XFRCM = 0x1; // Transfer completed mask
    static constexpr uint32_t FS_HCINTMSK5_CHHM = 0x2; // Channel halted mask
    static constexpr uint32_t FS_HCINTMSK5_STALLM = 0x8; // STALL response received interrupt mask
    static constexpr uint32_t FS_HCINTMSK5_NAKM = 0x10; // NAK response received interrupt mask
    static constexpr uint32_t FS_HCINTMSK5_ACKM = 0x20; // ACK response received/transmitted interrupt mask
    static constexpr uint32_t FS_HCINTMSK5_NYET = 0x40; // response received interrupt mask
    static constexpr uint32_t FS_HCINTMSK5_TXERRM = 0x80; // Transaction error mask
    static constexpr uint32_t FS_HCINTMSK5_BBERRM = 0x100; // Babble error mask
    static constexpr uint32_t FS_HCINTMSK5_FRMORM = 0x200; // Frame overrun mask
    static constexpr uint32_t FS_HCINTMSK5_DTERRM = 0x400; // Data toggle error mask

    static constexpr uint32_t FS_HCTSIZ5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> FS_HCTSIZ5_XFRSIZ; // Transfer size
    typedef bit_field_t<19, 0x3ff> FS_HCTSIZ5_PKTCNT; // Packet count
    typedef bit_field_t<29, 0x3> FS_HCTSIZ5_DPID; // Data PID


    static constexpr uint32_t FS_HCCHAR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> FS_HCCHAR6_MPSIZ; // Maximum packet size
    typedef bit_field_t<11, 0xf> FS_HCCHAR6_EPNUM; // Endpoint number
    static constexpr uint32_t FS_HCCHAR6_EPDIR = 0x8000; // Endpoint direction
    static constexpr uint32_t FS_HCCHAR6_LSDEV = 0x20000; // Low-speed device
    typedef bit_field_t<18, 0x3> FS_HCCHAR6_EPTYP; // Endpoint type
    typedef bit_field_t<20, 0x3> FS_HCCHAR6_MCNT; // Multicount
    typedef bit_field_t<22, 0x7f> FS_HCCHAR6_DAD; // Device address
    static constexpr uint32_t FS_HCCHAR6_ODDFRM = 0x20000000; // Odd frame
    static constexpr uint32_t FS_HCCHAR6_CHDIS = 0x40000000; // Channel disable
    static constexpr uint32_t FS_HCCHAR6_CHENA = 0x80000000; // Channel enable


    static constexpr uint32_t FS_HCINT6_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FS_HCINT6_XFRC = 0x1; // Transfer completed
    static constexpr uint32_t FS_HCINT6_CHH = 0x2; // Channel halted
    static constexpr uint32_t FS_HCINT6_STALL = 0x8; // STALL response received interrupt
    static constexpr uint32_t FS_HCINT6_NAK = 0x10; // NAK response received interrupt
    static constexpr uint32_t FS_HCINT6_ACK = 0x20; // ACK response received/transmitted interrupt
    static constexpr uint32_t FS_HCINT6_TXERR = 0x80; // Transaction error
    static constexpr uint32_t FS_HCINT6_BBERR = 0x100; // Babble error
    static constexpr uint32_t FS_HCINT6_FRMOR = 0x200; // Frame overrun
    static constexpr uint32_t FS_HCINT6_DTERR = 0x400; // Data toggle error

    static constexpr uint32_t FS_HCINTMSK6_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FS_HCINTMSK6_XFRCM = 0x1; // Transfer completed mask
    static constexpr uint32_t FS_HCINTMSK6_CHHM = 0x2; // Channel halted mask
    static constexpr uint32_t FS_HCINTMSK6_STALLM = 0x8; // STALL response received interrupt mask
    static constexpr uint32_t FS_HCINTMSK6_NAKM = 0x10; // NAK response received interrupt mask
    static constexpr uint32_t FS_HCINTMSK6_ACKM = 0x20; // ACK response received/transmitted interrupt mask
    static constexpr uint32_t FS_HCINTMSK6_NYET = 0x40; // response received interrupt mask
    static constexpr uint32_t FS_HCINTMSK6_TXERRM = 0x80; // Transaction error mask
    static constexpr uint32_t FS_HCINTMSK6_BBERRM = 0x100; // Babble error mask
    static constexpr uint32_t FS_HCINTMSK6_FRMORM = 0x200; // Frame overrun mask
    static constexpr uint32_t FS_HCINTMSK6_DTERRM = 0x400; // Data toggle error mask

    static constexpr uint32_t FS_HCTSIZ6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> FS_HCTSIZ6_XFRSIZ; // Transfer size
    typedef bit_field_t<19, 0x3ff> FS_HCTSIZ6_PKTCNT; // Packet count
    typedef bit_field_t<29, 0x3> FS_HCTSIZ6_DPID; // Data PID


    static constexpr uint32_t FS_HCCHAR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> FS_HCCHAR7_MPSIZ; // Maximum packet size
    typedef bit_field_t<11, 0xf> FS_HCCHAR7_EPNUM; // Endpoint number
    static constexpr uint32_t FS_HCCHAR7_EPDIR = 0x8000; // Endpoint direction
    static constexpr uint32_t FS_HCCHAR7_LSDEV = 0x20000; // Low-speed device
    typedef bit_field_t<18, 0x3> FS_HCCHAR7_EPTYP; // Endpoint type
    typedef bit_field_t<20, 0x3> FS_HCCHAR7_MCNT; // Multicount
    typedef bit_field_t<22, 0x7f> FS_HCCHAR7_DAD; // Device address
    static constexpr uint32_t FS_HCCHAR7_ODDFRM = 0x20000000; // Odd frame
    static constexpr uint32_t FS_HCCHAR7_CHDIS = 0x40000000; // Channel disable
    static constexpr uint32_t FS_HCCHAR7_CHENA = 0x80000000; // Channel enable


    static constexpr uint32_t FS_HCINT7_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FS_HCINT7_XFRC = 0x1; // Transfer completed
    static constexpr uint32_t FS_HCINT7_CHH = 0x2; // Channel halted
    static constexpr uint32_t FS_HCINT7_STALL = 0x8; // STALL response received interrupt
    static constexpr uint32_t FS_HCINT7_NAK = 0x10; // NAK response received interrupt
    static constexpr uint32_t FS_HCINT7_ACK = 0x20; // ACK response received/transmitted interrupt
    static constexpr uint32_t FS_HCINT7_TXERR = 0x80; // Transaction error
    static constexpr uint32_t FS_HCINT7_BBERR = 0x100; // Babble error
    static constexpr uint32_t FS_HCINT7_FRMOR = 0x200; // Frame overrun
    static constexpr uint32_t FS_HCINT7_DTERR = 0x400; // Data toggle error

    static constexpr uint32_t FS_HCINTMSK7_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FS_HCINTMSK7_XFRCM = 0x1; // Transfer completed mask
    static constexpr uint32_t FS_HCINTMSK7_CHHM = 0x2; // Channel halted mask
    static constexpr uint32_t FS_HCINTMSK7_STALLM = 0x8; // STALL response received interrupt mask
    static constexpr uint32_t FS_HCINTMSK7_NAKM = 0x10; // NAK response received interrupt mask
    static constexpr uint32_t FS_HCINTMSK7_ACKM = 0x20; // ACK response received/transmitted interrupt mask
    static constexpr uint32_t FS_HCINTMSK7_NYET = 0x40; // response received interrupt mask
    static constexpr uint32_t FS_HCINTMSK7_TXERRM = 0x80; // Transaction error mask
    static constexpr uint32_t FS_HCINTMSK7_BBERRM = 0x100; // Babble error mask
    static constexpr uint32_t FS_HCINTMSK7_FRMORM = 0x200; // Frame overrun mask
    static constexpr uint32_t FS_HCINTMSK7_DTERRM = 0x400; // Data toggle error mask

    static constexpr uint32_t FS_HCTSIZ7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> FS_HCTSIZ7_XFRSIZ; // Transfer size
    typedef bit_field_t<19, 0x3ff> FS_HCTSIZ7_PKTCNT; // Packet count
    typedef bit_field_t<29, 0x3> FS_HCTSIZ7_DPID; // Data PID
};

// OTG_FS_PWRCLK: USB on the go full speed

struct stm32f401_otg_fs_pwrclk_t
{
    volatile uint32_t FS_PCGCCTL; // OTG_FS power and clock gating control register

    static constexpr uint32_t FS_PCGCCTL_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t FS_PCGCCTL_STPPCLK = 0x1; // Stop PHY clock
    static constexpr uint32_t FS_PCGCCTL_GATEHCLK = 0x2; // Gate HCLK
    static constexpr uint32_t FS_PCGCCTL_PHYSUSP = 0x10; // PHY Suspended
};

template<>
struct peripheral_t<STM32F401, OTG_FS_DEVICE>
{
    static constexpr periph_t P = OTG_FS_DEVICE;
    using T = stm32f401_otg_fs_device_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, OTG_FS_DEVICE>
{
    static constexpr periph_t P = OTG_FS_DEVICE;
    using T = stm32f401_otg_fs_device_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, OTG_FS_DEVICE>
{
    static constexpr periph_t P = OTG_FS_DEVICE;
    using T = stm32f401_otg_fs_device_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F411, OTG_FS_DEVICE>
{
    static constexpr periph_t P = OTG_FS_DEVICE;
    using T = stm32f401_otg_fs_device_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, OTG_FS_DEVICE>
{
    static constexpr periph_t P = OTG_FS_DEVICE;
    using T = stm32f401_otg_fs_device_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, OTG_FS_DEVICE>
{
    static constexpr periph_t P = OTG_FS_DEVICE;
    using T = stm32f401_otg_fs_device_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, OTG_FS_DEVICE>
{
    static constexpr periph_t P = OTG_FS_DEVICE;
    using T = stm32f401_otg_fs_device_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, OTG_FS_DEVICE>
{
    static constexpr periph_t P = OTG_FS_DEVICE;
    using T = stm32f401_otg_fs_device_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, OTG_FS_DEVICE>
{
    static constexpr periph_t P = OTG_FS_DEVICE;
    using T = stm32f413_otg_fs_device_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, OTG_FS_DEVICE>
{
    static constexpr periph_t P = OTG_FS_DEVICE;
    using T = stm32f446_otg_fs_device_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F401, OTG_FS_GLOBAL>
{
    static constexpr periph_t P = OTG_FS_GLOBAL;
    using T = stm32f401_otg_fs_global_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, OTG_FS_GLOBAL>
{
    static constexpr periph_t P = OTG_FS_GLOBAL;
    using T = stm32f401_otg_fs_global_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, OTG_FS_GLOBAL>
{
    static constexpr periph_t P = OTG_FS_GLOBAL;
    using T = stm32f401_otg_fs_global_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F411, OTG_FS_GLOBAL>
{
    static constexpr periph_t P = OTG_FS_GLOBAL;
    using T = stm32f401_otg_fs_global_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, OTG_FS_GLOBAL>
{
    static constexpr periph_t P = OTG_FS_GLOBAL;
    using T = stm32f401_otg_fs_global_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, OTG_FS_GLOBAL>
{
    static constexpr periph_t P = OTG_FS_GLOBAL;
    using T = stm32f401_otg_fs_global_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, OTG_FS_GLOBAL>
{
    static constexpr periph_t P = OTG_FS_GLOBAL;
    using T = stm32f401_otg_fs_global_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, OTG_FS_GLOBAL>
{
    static constexpr periph_t P = OTG_FS_GLOBAL;
    using T = stm32f401_otg_fs_global_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, OTG_FS_GLOBAL>
{
    static constexpr periph_t P = OTG_FS_GLOBAL;
    using T = stm32f412_otg_fs_global_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, OTG_FS_GLOBAL>
{
    static constexpr periph_t P = OTG_FS_GLOBAL;
    using T = stm32f412_otg_fs_global_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F401, OTG_FS_HOST>
{
    static constexpr periph_t P = OTG_FS_HOST;
    using T = stm32f401_otg_fs_host_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, OTG_FS_HOST>
{
    static constexpr periph_t P = OTG_FS_HOST;
    using T = stm32f401_otg_fs_host_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, OTG_FS_HOST>
{
    static constexpr periph_t P = OTG_FS_HOST;
    using T = stm32f401_otg_fs_host_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F411, OTG_FS_HOST>
{
    static constexpr periph_t P = OTG_FS_HOST;
    using T = stm32f401_otg_fs_host_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, OTG_FS_HOST>
{
    static constexpr periph_t P = OTG_FS_HOST;
    using T = stm32f401_otg_fs_host_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, OTG_FS_HOST>
{
    static constexpr periph_t P = OTG_FS_HOST;
    using T = stm32f401_otg_fs_host_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, OTG_FS_HOST>
{
    static constexpr periph_t P = OTG_FS_HOST;
    using T = stm32f401_otg_fs_host_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, OTG_FS_HOST>
{
    static constexpr periph_t P = OTG_FS_HOST;
    using T = stm32f401_otg_fs_host_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, OTG_FS_HOST>
{
    static constexpr periph_t P = OTG_FS_HOST;
    using T = stm32f401_otg_fs_host_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, OTG_FS_HOST>
{
    static constexpr periph_t P = OTG_FS_HOST;
    using T = stm32f401_otg_fs_host_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F401, OTG_FS_PWRCLK>
{
    static constexpr periph_t P = OTG_FS_PWRCLK;
    using T = stm32f401_otg_fs_pwrclk_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F405, OTG_FS_PWRCLK>
{
    static constexpr periph_t P = OTG_FS_PWRCLK;
    using T = stm32f401_otg_fs_pwrclk_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F407, OTG_FS_PWRCLK>
{
    static constexpr periph_t P = OTG_FS_PWRCLK;
    using T = stm32f401_otg_fs_pwrclk_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F411, OTG_FS_PWRCLK>
{
    static constexpr periph_t P = OTG_FS_PWRCLK;
    using T = stm32f401_otg_fs_pwrclk_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F412, OTG_FS_PWRCLK>
{
    static constexpr periph_t P = OTG_FS_PWRCLK;
    using T = stm32f401_otg_fs_pwrclk_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F413, OTG_FS_PWRCLK>
{
    static constexpr periph_t P = OTG_FS_PWRCLK;
    using T = stm32f401_otg_fs_pwrclk_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F427, OTG_FS_PWRCLK>
{
    static constexpr periph_t P = OTG_FS_PWRCLK;
    using T = stm32f401_otg_fs_pwrclk_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F429, OTG_FS_PWRCLK>
{
    static constexpr periph_t P = OTG_FS_PWRCLK;
    using T = stm32f401_otg_fs_pwrclk_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F446, OTG_FS_PWRCLK>
{
    static constexpr periph_t P = OTG_FS_PWRCLK;
    using T = stm32f401_otg_fs_pwrclk_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F469, OTG_FS_PWRCLK>
{
    static constexpr periph_t P = OTG_FS_PWRCLK;
    using T = stm32f401_otg_fs_pwrclk_t;
    static T& V;
};

using otg_fs_device_t = peripheral_t<svd, OTG_FS_DEVICE>;
using otg_fs_global_t = peripheral_t<svd, OTG_FS_GLOBAL>;
using otg_fs_host_t = peripheral_t<svd, OTG_FS_HOST>;
using otg_fs_pwrclk_t = peripheral_t<svd, OTG_FS_PWRCLK>;
