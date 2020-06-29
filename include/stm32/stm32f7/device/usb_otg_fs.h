#pragma once

////
//
//      STM32F7 USB_OTG_FS peripherals
//
///

// OTG_FS_DEVICE: USB on the go full speed

struct stm32f722_otg_fs_device_t
{
    volatile uint32_t OTG_FS_DCFG; // OTG_FS device configuration register (OTG_FS_DCFG)
    volatile uint32_t OTG_FS_DCTL; // OTG_FS device control register (OTG_FS_DCTL)
    volatile uint32_t OTG_FS_DSTS; // OTG_FS device status register (OTG_FS_DSTS)
    reserved_t<0x1> _0xc;
    volatile uint32_t OTG_FS_DIEPMSK; // OTG_FS device IN endpoint common interrupt mask register (OTG_FS_DIEPMSK)
    volatile uint32_t OTG_FS_DOEPMSK; // OTG_FS device OUT endpoint common interrupt mask register (OTG_FS_DOEPMSK)
    volatile uint32_t OTG_FS_DAINT; // OTG_FS device all endpoints interrupt register (OTG_FS_DAINT)
    volatile uint32_t OTG_FS_DAINTMSK; // OTG_FS all endpoints interrupt mask register (OTG_FS_DAINTMSK)
    reserved_t<0x2> _0x20;
    volatile uint32_t OTG_FS_DVBUSDIS; // OTG_FS device VBUS discharge time register
    volatile uint32_t OTG_FS_DVBUSPULSE; // OTG_FS device VBUS pulsing time register
    reserved_t<0x1> _0x30;
    volatile uint32_t OTG_FS_DIEPEMPMSK; // OTG_FS device IN endpoint FIFO empty interrupt mask register
    reserved_t<0x32> _0x38;
    volatile uint32_t OTG_FS_DIEPCTL0; // OTG_FS device control IN endpoint 0 control register (OTG_FS_DIEPCTL0)
    reserved_t<0x1> _0x104;
    volatile uint32_t OTG_FS_DIEPINT0; // device endpoint-x interrupt register
    reserved_t<0x1> _0x10c;
    volatile uint32_t OTG_FS_DIEPTSIZ0; // device endpoint-0 transfer size register
    reserved_t<0x1> _0x114;
    volatile uint32_t OTG_FS_DTXFSTS0; // OTG_FS device IN endpoint transmit FIFO status register
    reserved_t<0x1> _0x11c;
    volatile uint32_t OTG_FS_DIEPCTL1; // OTG device endpoint-1 control register
    reserved_t<0x1> _0x124;
    volatile uint32_t OTG_FS_DIEPINT1; // device endpoint-1 interrupt register
    reserved_t<0x1> _0x12c;
    volatile uint32_t OTG_FS_DIEPTSIZ1; // device endpoint-1 transfer size register
    reserved_t<0x1> _0x134;
    volatile uint32_t OTG_FS_DTXFSTS1; // OTG_FS device IN endpoint transmit FIFO status register
    reserved_t<0x1> _0x13c;
    volatile uint32_t OTG_FS_DIEPCTL2; // OTG device endpoint-2 control register
    reserved_t<0x1> _0x144;
    volatile uint32_t OTG_FS_DIEPINT2; // device endpoint-2 interrupt register
    reserved_t<0x1> _0x14c;
    volatile uint32_t OTG_FS_DIEPTSIZ2; // device endpoint-2 transfer size register
    reserved_t<0x1> _0x154;
    volatile uint32_t OTG_FS_DTXFSTS2; // OTG_FS device IN endpoint transmit FIFO status register
    reserved_t<0x1> _0x15c;
    volatile uint32_t OTG_FS_DIEPCTL3; // OTG device endpoint-3 control register
    reserved_t<0x1> _0x164;
    volatile uint32_t OTG_FS_DIEPINT3; // device endpoint-3 interrupt register
    reserved_t<0x1> _0x16c;
    volatile uint32_t OTG_FS_DIEPTSIZ3; // device endpoint-3 transfer size register
    reserved_t<0x1> _0x174;
    volatile uint32_t OTG_FS_DTXFSTS3; // OTG_FS device IN endpoint transmit FIFO status register
    reserved_t<0x1> _0x17c;
    volatile uint32_t OTG_FS_DIEPCTL4; // OTG device endpoint-4 control register
    reserved_t<0x1> _0x184;
    volatile uint32_t OTG_FS_DIEPINT4; // device endpoint-4 interrupt register
    reserved_t<0x1> _0x18c;
    volatile uint32_t OTG_FS_DIEPTSIZ4; // device endpoint-4 transfer size register
    reserved_t<0x1> _0x194;
    volatile uint32_t OTG_FS_DTXFSTS4; // OTG_FS device IN endpoint transmit FIFO status register
    reserved_t<0x1> _0x19c;
    volatile uint32_t OTG_FS_DIEPCTL5; // OTG device endpoint-5 control register
    reserved_t<0x1> _0x1a4;
    volatile uint32_t OTG_FS_DIEPINT5; // device endpoint-5 interrupt register
    reserved_t<0x1> _0x1ac;
    volatile uint32_t OTG_FS_DIEPTSIZ5; // device endpoint-5 transfer size register
    reserved_t<0x1> _0x1b4;
    volatile uint32_t OTG_FS_DTXFSTS5; // OTG_FS device IN endpoint transmit FIFO status register
    reserved_t<0x51> _0x1bc;
    volatile uint32_t OTG_FS_DOEPCTL0; // device endpoint-0 control register
    reserved_t<0x1> _0x304;
    volatile uint32_t OTG_FS_DOEPINT0; // device endpoint-0 interrupt register
    reserved_t<0x1> _0x30c;
    volatile uint32_t OTG_FS_DOEPTSIZ0; // device OUT endpoint-0 transfer size register
    reserved_t<0x3> _0x314;
    volatile uint32_t OTG_FS_DOEPCTL1; // device endpoint-1 control register
    reserved_t<0x1> _0x324;
    volatile uint32_t OTG_FS_DOEPINT1; // device endpoint-1 interrupt register
    reserved_t<0x1> _0x32c;
    volatile uint32_t OTG_FS_DOEPTSIZ1; // device OUT endpoint-1 transfer size register
    reserved_t<0x3> _0x334;
    volatile uint32_t OTG_FS_DOEPCTL2; // device endpoint-2 control register
    reserved_t<0x1> _0x344;
    volatile uint32_t OTG_FS_DOEPINT2; // device endpoint-2 interrupt register
    reserved_t<0x1> _0x34c;
    volatile uint32_t OTG_FS_DOEPTSIZ2; // device OUT endpoint-2 transfer size register
    reserved_t<0x3> _0x354;
    volatile uint32_t OTG_FS_DOEPCTL3; // device endpoint-3 control register
    reserved_t<0x1> _0x364;
    volatile uint32_t OTG_FS_DOEPINT3; // device endpoint-3 interrupt register
    reserved_t<0x1> _0x36c;
    volatile uint32_t OTG_FS_DOEPTSIZ3; // device OUT endpoint-3 transfer size register
    reserved_t<0x3> _0x374;
    volatile uint32_t OTG_FS_DOEPCTL4; // device endpoint-4 control register
    reserved_t<0x1> _0x384;
    volatile uint32_t OTG_FS_DOEPINT4; // device endpoint-4 interrupt register
    reserved_t<0x1> _0x38c;
    volatile uint32_t OTG_FS_DOEPTSIZ4; // device OUT endpoint-4 transfer size register
    reserved_t<0x3> _0x394;
    volatile uint32_t OTG_FS_DOEPCTL5; // device endpoint-5 control register
    reserved_t<0x1> _0x3a4;
    volatile uint32_t OTG_FS_DOEPINT5; // device endpoint-5 interrupt register
    reserved_t<0x1> _0x3ac;
    volatile uint32_t OTG_FS_DOEPTSIZ5; // device OUT endpoint-5 transfer size register

    static constexpr uint32_t OTG_FS_DCFG_RESET_VALUE = 0x2200000; // Reset value
    typedef bit_field_t<0, 0x3> OTG_FS_DCFG_DSPD; // Device speed
    static constexpr uint32_t OTG_FS_DCFG_NZLSOHSK = 0x4; // Non-zero-length status OUT handshake
    typedef bit_field_t<4, 0x7f> OTG_FS_DCFG_DAD; // Device address
    typedef bit_field_t<11, 0x3> OTG_FS_DCFG_PFIVL; // Periodic frame interval

    static constexpr uint32_t OTG_FS_DCTL_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_DCTL_RWUSIG = 0x1; // Remote wakeup signaling
    static constexpr uint32_t OTG_FS_DCTL_SDIS = 0x2; // Soft disconnect
    static constexpr uint32_t OTG_FS_DCTL_GINSTS = 0x4; // Global IN NAK status
    static constexpr uint32_t OTG_FS_DCTL_GONSTS = 0x8; // Global OUT NAK status
    typedef bit_field_t<4, 0x7> OTG_FS_DCTL_TCTL; // Test control
    static constexpr uint32_t OTG_FS_DCTL_SGINAK = 0x80; // Set global IN NAK
    static constexpr uint32_t OTG_FS_DCTL_CGINAK = 0x100; // Clear global IN NAK
    static constexpr uint32_t OTG_FS_DCTL_SGONAK = 0x200; // Set global OUT NAK
    static constexpr uint32_t OTG_FS_DCTL_CGONAK = 0x400; // Clear global OUT NAK
    static constexpr uint32_t OTG_FS_DCTL_POPRGDNE = 0x800; // Power-on programming done

    static constexpr uint32_t OTG_FS_DSTS_RESET_VALUE = 0x10; // Reset value
    static constexpr uint32_t OTG_FS_DSTS_SUSPSTS = 0x1; // Suspend status
    typedef bit_field_t<1, 0x3> OTG_FS_DSTS_ENUMSPD; // Enumerated speed
    static constexpr uint32_t OTG_FS_DSTS_EERR = 0x8; // Erratic error
    typedef bit_field_t<8, 0x3fff> OTG_FS_DSTS_FNSOF; // Frame number of the received SOF


    static constexpr uint32_t OTG_FS_DIEPMSK_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_DIEPMSK_XFRCM = 0x1; // Transfer completed interrupt mask
    static constexpr uint32_t OTG_FS_DIEPMSK_EPDM = 0x2; // Endpoint disabled interrupt mask
    static constexpr uint32_t OTG_FS_DIEPMSK_TOM = 0x8; // Timeout condition mask (Non-isochronous endpoints)
    static constexpr uint32_t OTG_FS_DIEPMSK_ITTXFEMSK = 0x10; // IN token received when TxFIFO empty mask
    static constexpr uint32_t OTG_FS_DIEPMSK_INEPNMM = 0x20; // IN token received with EP mismatch mask
    static constexpr uint32_t OTG_FS_DIEPMSK_INEPNEM = 0x40; // IN endpoint NAK effective mask

    static constexpr uint32_t OTG_FS_DOEPMSK_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_DOEPMSK_XFRCM = 0x1; // Transfer completed interrupt mask
    static constexpr uint32_t OTG_FS_DOEPMSK_EPDM = 0x2; // Endpoint disabled interrupt mask
    static constexpr uint32_t OTG_FS_DOEPMSK_STUPM = 0x8; // SETUP phase done mask
    static constexpr uint32_t OTG_FS_DOEPMSK_OTEPDM = 0x10; // OUT token received when endpoint disabled mask

    static constexpr uint32_t OTG_FS_DAINT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> OTG_FS_DAINT_IEPINT; // IN endpoint interrupt bits
    typedef bit_field_t<16, 0xffff> OTG_FS_DAINT_OEPINT; // OUT endpoint interrupt bits

    static constexpr uint32_t OTG_FS_DAINTMSK_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> OTG_FS_DAINTMSK_IEPM; // IN EP interrupt mask bits
    typedef bit_field_t<16, 0xffff> OTG_FS_DAINTMSK_OEPINT; // OUT endpoint interrupt bits


    static constexpr uint32_t OTG_FS_DVBUSDIS_RESET_VALUE = 0x17d7; // Reset value
    typedef bit_field_t<0, 0xffff> OTG_FS_DVBUSDIS_VBUSDT; // Device VBUS discharge time

    static constexpr uint32_t OTG_FS_DVBUSPULSE_RESET_VALUE = 0x5b8; // Reset value
    typedef bit_field_t<0, 0xfff> OTG_FS_DVBUSPULSE_DVBUSP; // Device VBUS pulsing time


    static constexpr uint32_t OTG_FS_DIEPEMPMSK_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> OTG_FS_DIEPEMPMSK_INEPTXFEM; // IN EP Tx FIFO empty interrupt mask bits


    static constexpr uint32_t OTG_FS_DIEPCTL0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> OTG_FS_DIEPCTL0_MPSIZ; // Maximum packet size
    static constexpr uint32_t OTG_FS_DIEPCTL0_USBAEP = 0x8000; // USB active endpoint
    static constexpr uint32_t OTG_FS_DIEPCTL0_NAKSTS = 0x20000; // NAK status
    typedef bit_field_t<18, 0x3> OTG_FS_DIEPCTL0_EPTYP; // Endpoint type
    static constexpr uint32_t OTG_FS_DIEPCTL0_STALL = 0x200000; // STALL handshake
    typedef bit_field_t<22, 0xf> OTG_FS_DIEPCTL0_TXFNUM; // TxFIFO number
    static constexpr uint32_t OTG_FS_DIEPCTL0_CNAK = 0x4000000; // Clear NAK
    static constexpr uint32_t OTG_FS_DIEPCTL0_SNAK = 0x8000000; // Set NAK
    static constexpr uint32_t OTG_FS_DIEPCTL0_EPDIS = 0x40000000; // Endpoint disable
    static constexpr uint32_t OTG_FS_DIEPCTL0_EPENA = 0x80000000; // Endpoint enable


    static constexpr uint32_t OTG_FS_DIEPINT0_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t OTG_FS_DIEPINT0_TXFE = 0x80; // TXFE
    static constexpr uint32_t OTG_FS_DIEPINT0_INEPNE = 0x40; // INEPNE
    static constexpr uint32_t OTG_FS_DIEPINT0_ITTXFE = 0x10; // ITTXFE
    static constexpr uint32_t OTG_FS_DIEPINT0_TOC = 0x8; // TOC
    static constexpr uint32_t OTG_FS_DIEPINT0_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t OTG_FS_DIEPINT0_XFRC = 0x1; // XFRC


    static constexpr uint32_t OTG_FS_DIEPTSIZ0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<19, 0x3> OTG_FS_DIEPTSIZ0_PKTCNT; // Packet count
    typedef bit_field_t<0, 0x7f> OTG_FS_DIEPTSIZ0_XFRSIZ; // Transfer size


    static constexpr uint32_t OTG_FS_DTXFSTS0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> OTG_FS_DTXFSTS0_INEPTFSAV; // IN endpoint TxFIFO space available


    static constexpr uint32_t OTG_FS_DIEPCTL1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_DIEPCTL1_EPENA = 0x80000000; // EPENA
    static constexpr uint32_t OTG_FS_DIEPCTL1_EPDIS = 0x40000000; // EPDIS
    static constexpr uint32_t OTG_FS_DIEPCTL1_SODDFRM_SD1PID = 0x20000000; // SODDFRM/SD1PID
    static constexpr uint32_t OTG_FS_DIEPCTL1_SD0PID_SEVNFRM = 0x10000000; // SD0PID/SEVNFRM
    static constexpr uint32_t OTG_FS_DIEPCTL1_SNAK = 0x8000000; // SNAK
    static constexpr uint32_t OTG_FS_DIEPCTL1_CNAK = 0x4000000; // CNAK
    typedef bit_field_t<22, 0xf> OTG_FS_DIEPCTL1_TXFNUM; // TXFNUM
    static constexpr uint32_t OTG_FS_DIEPCTL1_STALL = 0x200000; // Stall
    typedef bit_field_t<18, 0x3> OTG_FS_DIEPCTL1_EPTYP; // EPTYP
    static constexpr uint32_t OTG_FS_DIEPCTL1_NAKSTS = 0x20000; // NAKSTS
    static constexpr uint32_t OTG_FS_DIEPCTL1_EONUM_DPID = 0x10000; // EONUM/DPID
    static constexpr uint32_t OTG_FS_DIEPCTL1_USBAEP = 0x8000; // USBAEP
    typedef bit_field_t<0, 0x7ff> OTG_FS_DIEPCTL1_MPSIZ; // MPSIZ


    static constexpr uint32_t OTG_FS_DIEPINT1_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t OTG_FS_DIEPINT1_TXFE = 0x80; // TXFE
    static constexpr uint32_t OTG_FS_DIEPINT1_INEPNE = 0x40; // INEPNE
    static constexpr uint32_t OTG_FS_DIEPINT1_ITTXFE = 0x10; // ITTXFE
    static constexpr uint32_t OTG_FS_DIEPINT1_TOC = 0x8; // TOC
    static constexpr uint32_t OTG_FS_DIEPINT1_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t OTG_FS_DIEPINT1_XFRC = 0x1; // XFRC


    static constexpr uint32_t OTG_FS_DIEPTSIZ1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<29, 0x3> OTG_FS_DIEPTSIZ1_MCNT; // Multi count
    typedef bit_field_t<19, 0x3ff> OTG_FS_DIEPTSIZ1_PKTCNT; // Packet count
    typedef bit_field_t<0, 0x7ffff> OTG_FS_DIEPTSIZ1_XFRSIZ; // Transfer size


    static constexpr uint32_t OTG_FS_DTXFSTS1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> OTG_FS_DTXFSTS1_INEPTFSAV; // IN endpoint TxFIFO space available


    static constexpr uint32_t OTG_FS_DIEPCTL2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_DIEPCTL2_EPENA = 0x80000000; // EPENA
    static constexpr uint32_t OTG_FS_DIEPCTL2_EPDIS = 0x40000000; // EPDIS
    static constexpr uint32_t OTG_FS_DIEPCTL2_SODDFRM = 0x20000000; // SODDFRM
    static constexpr uint32_t OTG_FS_DIEPCTL2_SD0PID_SEVNFRM = 0x10000000; // SD0PID/SEVNFRM
    static constexpr uint32_t OTG_FS_DIEPCTL2_SNAK = 0x8000000; // SNAK
    static constexpr uint32_t OTG_FS_DIEPCTL2_CNAK = 0x4000000; // CNAK
    typedef bit_field_t<22, 0xf> OTG_FS_DIEPCTL2_TXFNUM; // TXFNUM
    static constexpr uint32_t OTG_FS_DIEPCTL2_STALL = 0x200000; // Stall
    typedef bit_field_t<18, 0x3> OTG_FS_DIEPCTL2_EPTYP; // EPTYP
    static constexpr uint32_t OTG_FS_DIEPCTL2_NAKSTS = 0x20000; // NAKSTS
    static constexpr uint32_t OTG_FS_DIEPCTL2_EONUM_DPID = 0x10000; // EONUM/DPID
    static constexpr uint32_t OTG_FS_DIEPCTL2_USBAEP = 0x8000; // USBAEP
    typedef bit_field_t<0, 0x7ff> OTG_FS_DIEPCTL2_MPSIZ; // MPSIZ


    static constexpr uint32_t OTG_FS_DIEPINT2_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t OTG_FS_DIEPINT2_TXFE = 0x80; // TXFE
    static constexpr uint32_t OTG_FS_DIEPINT2_INEPNE = 0x40; // INEPNE
    static constexpr uint32_t OTG_FS_DIEPINT2_ITTXFE = 0x10; // ITTXFE
    static constexpr uint32_t OTG_FS_DIEPINT2_TOC = 0x8; // TOC
    static constexpr uint32_t OTG_FS_DIEPINT2_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t OTG_FS_DIEPINT2_XFRC = 0x1; // XFRC


    static constexpr uint32_t OTG_FS_DIEPTSIZ2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<29, 0x3> OTG_FS_DIEPTSIZ2_MCNT; // Multi count
    typedef bit_field_t<19, 0x3ff> OTG_FS_DIEPTSIZ2_PKTCNT; // Packet count
    typedef bit_field_t<0, 0x7ffff> OTG_FS_DIEPTSIZ2_XFRSIZ; // Transfer size


    static constexpr uint32_t OTG_FS_DTXFSTS2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> OTG_FS_DTXFSTS2_INEPTFSAV; // IN endpoint TxFIFO space available


    static constexpr uint32_t OTG_FS_DIEPCTL3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_DIEPCTL3_EPENA = 0x80000000; // EPENA
    static constexpr uint32_t OTG_FS_DIEPCTL3_EPDIS = 0x40000000; // EPDIS
    static constexpr uint32_t OTG_FS_DIEPCTL3_SODDFRM = 0x20000000; // SODDFRM
    static constexpr uint32_t OTG_FS_DIEPCTL3_SD0PID_SEVNFRM = 0x10000000; // SD0PID/SEVNFRM
    static constexpr uint32_t OTG_FS_DIEPCTL3_SNAK = 0x8000000; // SNAK
    static constexpr uint32_t OTG_FS_DIEPCTL3_CNAK = 0x4000000; // CNAK
    typedef bit_field_t<22, 0xf> OTG_FS_DIEPCTL3_TXFNUM; // TXFNUM
    static constexpr uint32_t OTG_FS_DIEPCTL3_STALL = 0x200000; // Stall
    typedef bit_field_t<18, 0x3> OTG_FS_DIEPCTL3_EPTYP; // EPTYP
    static constexpr uint32_t OTG_FS_DIEPCTL3_NAKSTS = 0x20000; // NAKSTS
    static constexpr uint32_t OTG_FS_DIEPCTL3_EONUM_DPID = 0x10000; // EONUM/DPID
    static constexpr uint32_t OTG_FS_DIEPCTL3_USBAEP = 0x8000; // USBAEP
    typedef bit_field_t<0, 0x7ff> OTG_FS_DIEPCTL3_MPSIZ; // MPSIZ


    static constexpr uint32_t OTG_FS_DIEPINT3_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t OTG_FS_DIEPINT3_TXFE = 0x80; // TXFE
    static constexpr uint32_t OTG_FS_DIEPINT3_INEPNE = 0x40; // INEPNE
    static constexpr uint32_t OTG_FS_DIEPINT3_ITTXFE = 0x10; // ITTXFE
    static constexpr uint32_t OTG_FS_DIEPINT3_TOC = 0x8; // TOC
    static constexpr uint32_t OTG_FS_DIEPINT3_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t OTG_FS_DIEPINT3_XFRC = 0x1; // XFRC


    static constexpr uint32_t OTG_FS_DIEPTSIZ3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<29, 0x3> OTG_FS_DIEPTSIZ3_MCNT; // Multi count
    typedef bit_field_t<19, 0x3ff> OTG_FS_DIEPTSIZ3_PKTCNT; // Packet count
    typedef bit_field_t<0, 0x7ffff> OTG_FS_DIEPTSIZ3_XFRSIZ; // Transfer size


    static constexpr uint32_t OTG_FS_DTXFSTS3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> OTG_FS_DTXFSTS3_INEPTFSAV; // IN endpoint TxFIFO space available


    static constexpr uint32_t OTG_FS_DIEPCTL4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_DIEPCTL4_EPENA = 0x80000000; // EPENA
    static constexpr uint32_t OTG_FS_DIEPCTL4_EPDIS = 0x40000000; // EPDIS
    static constexpr uint32_t OTG_FS_DIEPCTL4_SODDFRM = 0x20000000; // SODDFRM
    static constexpr uint32_t OTG_FS_DIEPCTL4_SD0PID_SEVNFRM = 0x10000000; // SD0PID/SEVNFRM
    static constexpr uint32_t OTG_FS_DIEPCTL4_SNAK = 0x8000000; // SNAK
    static constexpr uint32_t OTG_FS_DIEPCTL4_CNAK = 0x4000000; // CNAK
    typedef bit_field_t<22, 0xf> OTG_FS_DIEPCTL4_TXFNUM; // TXFNUM
    static constexpr uint32_t OTG_FS_DIEPCTL4_STALL = 0x200000; // Stall
    typedef bit_field_t<18, 0x3> OTG_FS_DIEPCTL4_EPTYP; // EPTYP
    static constexpr uint32_t OTG_FS_DIEPCTL4_NAKSTS = 0x20000; // NAKSTS
    static constexpr uint32_t OTG_FS_DIEPCTL4_EONUM_DPID = 0x10000; // EONUM/DPID
    static constexpr uint32_t OTG_FS_DIEPCTL4_USBAEP = 0x8000; // USBAEP
    typedef bit_field_t<0, 0x7ff> OTG_FS_DIEPCTL4_MPSIZ; // MPSIZ


    static constexpr uint32_t OTG_FS_DIEPINT4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_DIEPINT4_TXFE = 0x80; // TXFE
    static constexpr uint32_t OTG_FS_DIEPINT4_INEPNE = 0x40; // INEPNE
    static constexpr uint32_t OTG_FS_DIEPINT4_ITTXFE = 0x10; // ITTXFE
    static constexpr uint32_t OTG_FS_DIEPINT4_TOC = 0x8; // TOC
    static constexpr uint32_t OTG_FS_DIEPINT4_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t OTG_FS_DIEPINT4_XFRC = 0x1; // XFRC


    static constexpr uint32_t OTG_FS_DIEPTSIZ4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<29, 0x3> OTG_FS_DIEPTSIZ4_MCNT; // Multi count
    typedef bit_field_t<19, 0x3ff> OTG_FS_DIEPTSIZ4_PKTCNT; // Packet count
    typedef bit_field_t<0, 0x7ffff> OTG_FS_DIEPTSIZ4_XFRSIZ; // Transfer size


    static constexpr uint32_t OTG_FS_DTXFSTS4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> OTG_FS_DTXFSTS4_INEPTFSAV; // IN endpoint TxFIFO space available


    static constexpr uint32_t OTG_FS_DIEPCTL5_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_DIEPCTL5_EPENA = 0x80000000; // EPENA
    static constexpr uint32_t OTG_FS_DIEPCTL5_EPDIS = 0x40000000; // EPDIS
    static constexpr uint32_t OTG_FS_DIEPCTL5_SODDFRM = 0x20000000; // SODDFRM
    static constexpr uint32_t OTG_FS_DIEPCTL5_SD0PID_SEVNFRM = 0x10000000; // SD0PID/SEVNFRM
    static constexpr uint32_t OTG_FS_DIEPCTL5_SNAK = 0x8000000; // SNAK
    static constexpr uint32_t OTG_FS_DIEPCTL5_CNAK = 0x4000000; // CNAK
    typedef bit_field_t<22, 0xf> OTG_FS_DIEPCTL5_TXFNUM; // TXFNUM
    static constexpr uint32_t OTG_FS_DIEPCTL5_STALL = 0x200000; // Stall
    typedef bit_field_t<18, 0x3> OTG_FS_DIEPCTL5_EPTYP; // EPTYP
    static constexpr uint32_t OTG_FS_DIEPCTL5_NAKSTS = 0x20000; // NAKSTS
    static constexpr uint32_t OTG_FS_DIEPCTL5_EONUM_DPID = 0x10000; // EONUM/DPID
    static constexpr uint32_t OTG_FS_DIEPCTL5_USBAEP = 0x8000; // USBAEP
    typedef bit_field_t<0, 0x7ff> OTG_FS_DIEPCTL5_MPSIZ; // MPSIZ


    static constexpr uint32_t OTG_FS_DIEPINT5_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_DIEPINT5_TXFE = 0x80; // TXFE
    static constexpr uint32_t OTG_FS_DIEPINT5_INEPNE = 0x40; // INEPNE
    static constexpr uint32_t OTG_FS_DIEPINT5_ITTXFE = 0x10; // ITTXFE
    static constexpr uint32_t OTG_FS_DIEPINT5_TOC = 0x8; // TOC
    static constexpr uint32_t OTG_FS_DIEPINT5_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t OTG_FS_DIEPINT5_XFRC = 0x1; // XFRC


    static constexpr uint32_t OTG_FS_DIEPTSIZ5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<29, 0x3> OTG_FS_DIEPTSIZ5_MCNT; // Multi count
    typedef bit_field_t<19, 0x3ff> OTG_FS_DIEPTSIZ5_PKTCNT; // Packet count
    typedef bit_field_t<0, 0x7ffff> OTG_FS_DIEPTSIZ5_XFRSIZ; // Transfer size


    static constexpr uint32_t OTG_FS_DTXFSTS5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> OTG_FS_DTXFSTS5_INEPTFSAV; // IN endpoint TxFIFO space available


    static constexpr uint32_t OTG_FS_DOEPCTL0_RESET_VALUE = 0x8000; // Reset value
    static constexpr uint32_t OTG_FS_DOEPCTL0_EPENA = 0x80000000; // EPENA
    static constexpr uint32_t OTG_FS_DOEPCTL0_EPDIS = 0x40000000; // EPDIS
    static constexpr uint32_t OTG_FS_DOEPCTL0_SNAK = 0x8000000; // SNAK
    static constexpr uint32_t OTG_FS_DOEPCTL0_CNAK = 0x4000000; // CNAK
    static constexpr uint32_t OTG_FS_DOEPCTL0_STALL = 0x200000; // Stall
    static constexpr uint32_t OTG_FS_DOEPCTL0_SNPM = 0x100000; // SNPM
    typedef bit_field_t<18, 0x3> OTG_FS_DOEPCTL0_EPTYP; // EPTYP
    static constexpr uint32_t OTG_FS_DOEPCTL0_NAKSTS = 0x20000; // NAKSTS
    static constexpr uint32_t OTG_FS_DOEPCTL0_USBAEP = 0x8000; // USBAEP
    typedef bit_field_t<0, 0x3> OTG_FS_DOEPCTL0_MPSIZ; // MPSIZ


    static constexpr uint32_t OTG_FS_DOEPINT0_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t OTG_FS_DOEPINT0_B2BSTUP = 0x40; // B2BSTUP
    static constexpr uint32_t OTG_FS_DOEPINT0_OTEPDIS = 0x10; // OTEPDIS
    static constexpr uint32_t OTG_FS_DOEPINT0_STUP = 0x8; // STUP
    static constexpr uint32_t OTG_FS_DOEPINT0_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t OTG_FS_DOEPINT0_XFRC = 0x1; // XFRC


    static constexpr uint32_t OTG_FS_DOEPTSIZ0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<29, 0x3> OTG_FS_DOEPTSIZ0_STUPCNT; // SETUP packet count
    static constexpr uint32_t OTG_FS_DOEPTSIZ0_PKTCNT = 0x80000; // Packet count
    typedef bit_field_t<0, 0x7f> OTG_FS_DOEPTSIZ0_XFRSIZ; // Transfer size


    static constexpr uint32_t OTG_FS_DOEPCTL1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_DOEPCTL1_EPENA = 0x80000000; // EPENA
    static constexpr uint32_t OTG_FS_DOEPCTL1_EPDIS = 0x40000000; // EPDIS
    static constexpr uint32_t OTG_FS_DOEPCTL1_SODDFRM = 0x20000000; // SODDFRM
    static constexpr uint32_t OTG_FS_DOEPCTL1_SD0PID_SEVNFRM = 0x10000000; // SD0PID/SEVNFRM
    static constexpr uint32_t OTG_FS_DOEPCTL1_SNAK = 0x8000000; // SNAK
    static constexpr uint32_t OTG_FS_DOEPCTL1_CNAK = 0x4000000; // CNAK
    static constexpr uint32_t OTG_FS_DOEPCTL1_STALL = 0x200000; // Stall
    static constexpr uint32_t OTG_FS_DOEPCTL1_SNPM = 0x100000; // SNPM
    typedef bit_field_t<18, 0x3> OTG_FS_DOEPCTL1_EPTYP; // EPTYP
    static constexpr uint32_t OTG_FS_DOEPCTL1_NAKSTS = 0x20000; // NAKSTS
    static constexpr uint32_t OTG_FS_DOEPCTL1_EONUM_DPID = 0x10000; // EONUM/DPID
    static constexpr uint32_t OTG_FS_DOEPCTL1_USBAEP = 0x8000; // USBAEP
    typedef bit_field_t<0, 0x7ff> OTG_FS_DOEPCTL1_MPSIZ; // MPSIZ


    static constexpr uint32_t OTG_FS_DOEPINT1_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t OTG_FS_DOEPINT1_B2BSTUP = 0x40; // B2BSTUP
    static constexpr uint32_t OTG_FS_DOEPINT1_OTEPDIS = 0x10; // OTEPDIS
    static constexpr uint32_t OTG_FS_DOEPINT1_STUP = 0x8; // STUP
    static constexpr uint32_t OTG_FS_DOEPINT1_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t OTG_FS_DOEPINT1_XFRC = 0x1; // XFRC


    static constexpr uint32_t OTG_FS_DOEPTSIZ1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<29, 0x3> OTG_FS_DOEPTSIZ1_RXDPID_STUPCNT; // Received data PID/SETUP packet count
    typedef bit_field_t<19, 0x3ff> OTG_FS_DOEPTSIZ1_PKTCNT; // Packet count
    typedef bit_field_t<0, 0x7ffff> OTG_FS_DOEPTSIZ1_XFRSIZ; // Transfer size


    static constexpr uint32_t OTG_FS_DOEPCTL2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_DOEPCTL2_EPENA = 0x80000000; // EPENA
    static constexpr uint32_t OTG_FS_DOEPCTL2_EPDIS = 0x40000000; // EPDIS
    static constexpr uint32_t OTG_FS_DOEPCTL2_SODDFRM = 0x20000000; // SODDFRM
    static constexpr uint32_t OTG_FS_DOEPCTL2_SD0PID_SEVNFRM = 0x10000000; // SD0PID/SEVNFRM
    static constexpr uint32_t OTG_FS_DOEPCTL2_SNAK = 0x8000000; // SNAK
    static constexpr uint32_t OTG_FS_DOEPCTL2_CNAK = 0x4000000; // CNAK
    static constexpr uint32_t OTG_FS_DOEPCTL2_STALL = 0x200000; // Stall
    static constexpr uint32_t OTG_FS_DOEPCTL2_SNPM = 0x100000; // SNPM
    typedef bit_field_t<18, 0x3> OTG_FS_DOEPCTL2_EPTYP; // EPTYP
    static constexpr uint32_t OTG_FS_DOEPCTL2_NAKSTS = 0x20000; // NAKSTS
    static constexpr uint32_t OTG_FS_DOEPCTL2_EONUM_DPID = 0x10000; // EONUM/DPID
    static constexpr uint32_t OTG_FS_DOEPCTL2_USBAEP = 0x8000; // USBAEP
    typedef bit_field_t<0, 0x7ff> OTG_FS_DOEPCTL2_MPSIZ; // MPSIZ


    static constexpr uint32_t OTG_FS_DOEPINT2_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t OTG_FS_DOEPINT2_B2BSTUP = 0x40; // B2BSTUP
    static constexpr uint32_t OTG_FS_DOEPINT2_OTEPDIS = 0x10; // OTEPDIS
    static constexpr uint32_t OTG_FS_DOEPINT2_STUP = 0x8; // STUP
    static constexpr uint32_t OTG_FS_DOEPINT2_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t OTG_FS_DOEPINT2_XFRC = 0x1; // XFRC


    static constexpr uint32_t OTG_FS_DOEPTSIZ2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<29, 0x3> OTG_FS_DOEPTSIZ2_RXDPID_STUPCNT; // Received data PID/SETUP packet count
    typedef bit_field_t<19, 0x3ff> OTG_FS_DOEPTSIZ2_PKTCNT; // Packet count
    typedef bit_field_t<0, 0x7ffff> OTG_FS_DOEPTSIZ2_XFRSIZ; // Transfer size


    static constexpr uint32_t OTG_FS_DOEPCTL3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_DOEPCTL3_EPENA = 0x80000000; // EPENA
    static constexpr uint32_t OTG_FS_DOEPCTL3_EPDIS = 0x40000000; // EPDIS
    static constexpr uint32_t OTG_FS_DOEPCTL3_SODDFRM = 0x20000000; // SODDFRM
    static constexpr uint32_t OTG_FS_DOEPCTL3_SD0PID_SEVNFRM = 0x10000000; // SD0PID/SEVNFRM
    static constexpr uint32_t OTG_FS_DOEPCTL3_SNAK = 0x8000000; // SNAK
    static constexpr uint32_t OTG_FS_DOEPCTL3_CNAK = 0x4000000; // CNAK
    static constexpr uint32_t OTG_FS_DOEPCTL3_STALL = 0x200000; // Stall
    static constexpr uint32_t OTG_FS_DOEPCTL3_SNPM = 0x100000; // SNPM
    typedef bit_field_t<18, 0x3> OTG_FS_DOEPCTL3_EPTYP; // EPTYP
    static constexpr uint32_t OTG_FS_DOEPCTL3_NAKSTS = 0x20000; // NAKSTS
    static constexpr uint32_t OTG_FS_DOEPCTL3_EONUM_DPID = 0x10000; // EONUM/DPID
    static constexpr uint32_t OTG_FS_DOEPCTL3_USBAEP = 0x8000; // USBAEP
    typedef bit_field_t<0, 0x7ff> OTG_FS_DOEPCTL3_MPSIZ; // MPSIZ


    static constexpr uint32_t OTG_FS_DOEPINT3_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t OTG_FS_DOEPINT3_B2BSTUP = 0x40; // B2BSTUP
    static constexpr uint32_t OTG_FS_DOEPINT3_OTEPDIS = 0x10; // OTEPDIS
    static constexpr uint32_t OTG_FS_DOEPINT3_STUP = 0x8; // STUP
    static constexpr uint32_t OTG_FS_DOEPINT3_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t OTG_FS_DOEPINT3_XFRC = 0x1; // XFRC


    static constexpr uint32_t OTG_FS_DOEPTSIZ3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<29, 0x3> OTG_FS_DOEPTSIZ3_RXDPID_STUPCNT; // Received data PID/SETUP packet count
    typedef bit_field_t<19, 0x3ff> OTG_FS_DOEPTSIZ3_PKTCNT; // Packet count
    typedef bit_field_t<0, 0x7ffff> OTG_FS_DOEPTSIZ3_XFRSIZ; // Transfer size


    static constexpr uint32_t OTG_FS_DOEPCTL4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_DOEPCTL4_EPENA = 0x80000000; // EPENA
    static constexpr uint32_t OTG_FS_DOEPCTL4_EPDIS = 0x40000000; // EPDIS
    static constexpr uint32_t OTG_FS_DOEPCTL4_SODDFRM = 0x20000000; // SODDFRM
    static constexpr uint32_t OTG_FS_DOEPCTL4_SD0PID_SEVNFRM = 0x10000000; // SD0PID/SEVNFRM
    static constexpr uint32_t OTG_FS_DOEPCTL4_SNAK = 0x8000000; // SNAK
    static constexpr uint32_t OTG_FS_DOEPCTL4_CNAK = 0x4000000; // CNAK
    static constexpr uint32_t OTG_FS_DOEPCTL4_STALL = 0x200000; // Stall
    static constexpr uint32_t OTG_FS_DOEPCTL4_SNPM = 0x100000; // SNPM
    typedef bit_field_t<18, 0x3> OTG_FS_DOEPCTL4_EPTYP; // EPTYP
    static constexpr uint32_t OTG_FS_DOEPCTL4_NAKSTS = 0x20000; // NAKSTS
    static constexpr uint32_t OTG_FS_DOEPCTL4_EONUM_DPID = 0x10000; // EONUM/DPID
    static constexpr uint32_t OTG_FS_DOEPCTL4_USBAEP = 0x8000; // USBAEP
    typedef bit_field_t<0, 0x7ff> OTG_FS_DOEPCTL4_MPSIZ; // MPSIZ


    static constexpr uint32_t OTG_FS_DOEPINT4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_DOEPINT4_B2BSTUP = 0x40; // B2BSTUP
    static constexpr uint32_t OTG_FS_DOEPINT4_OTEPDIS = 0x10; // OTEPDIS
    static constexpr uint32_t OTG_FS_DOEPINT4_STUP = 0x8; // STUP
    static constexpr uint32_t OTG_FS_DOEPINT4_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t OTG_FS_DOEPINT4_XFRC = 0x1; // XFRC


    static constexpr uint32_t OTG_FS_DOEPTSIZ4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<29, 0x3> OTG_FS_DOEPTSIZ4_RXDPID_STUPCNT; // Received data PID/SETUP packet count
    typedef bit_field_t<19, 0x3ff> OTG_FS_DOEPTSIZ4_PKTCNT; // Packet count
    typedef bit_field_t<0, 0x7ffff> OTG_FS_DOEPTSIZ4_XFRSIZ; // Transfer size


    static constexpr uint32_t OTG_FS_DOEPCTL5_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_DOEPCTL5_EPENA = 0x80000000; // EPENA
    static constexpr uint32_t OTG_FS_DOEPCTL5_EPDIS = 0x40000000; // EPDIS
    static constexpr uint32_t OTG_FS_DOEPCTL5_SODDFRM = 0x20000000; // SODDFRM
    static constexpr uint32_t OTG_FS_DOEPCTL5_SD0PID_SEVNFRM = 0x10000000; // SD0PID/SEVNFRM
    static constexpr uint32_t OTG_FS_DOEPCTL5_SNAK = 0x8000000; // SNAK
    static constexpr uint32_t OTG_FS_DOEPCTL5_CNAK = 0x4000000; // CNAK
    static constexpr uint32_t OTG_FS_DOEPCTL5_STALL = 0x200000; // Stall
    static constexpr uint32_t OTG_FS_DOEPCTL5_SNPM = 0x100000; // SNPM
    typedef bit_field_t<18, 0x3> OTG_FS_DOEPCTL5_EPTYP; // EPTYP
    static constexpr uint32_t OTG_FS_DOEPCTL5_NAKSTS = 0x20000; // NAKSTS
    static constexpr uint32_t OTG_FS_DOEPCTL5_EONUM_DPID = 0x10000; // EONUM/DPID
    static constexpr uint32_t OTG_FS_DOEPCTL5_USBAEP = 0x8000; // USBAEP
    typedef bit_field_t<0, 0x7ff> OTG_FS_DOEPCTL5_MPSIZ; // MPSIZ


    static constexpr uint32_t OTG_FS_DOEPINT5_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_DOEPINT5_B2BSTUP = 0x40; // B2BSTUP
    static constexpr uint32_t OTG_FS_DOEPINT5_OTEPDIS = 0x10; // OTEPDIS
    static constexpr uint32_t OTG_FS_DOEPINT5_STUP = 0x8; // STUP
    static constexpr uint32_t OTG_FS_DOEPINT5_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t OTG_FS_DOEPINT5_XFRC = 0x1; // XFRC


    static constexpr uint32_t OTG_FS_DOEPTSIZ5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<29, 0x3> OTG_FS_DOEPTSIZ5_RXDPID_STUPCNT; // Received data PID/SETUP packet count
    typedef bit_field_t<19, 0x3ff> OTG_FS_DOEPTSIZ5_PKTCNT; // Packet count
    typedef bit_field_t<0, 0x7ffff> OTG_FS_DOEPTSIZ5_XFRSIZ; // Transfer size
};

// OTG_FS_DEVICE: USB on the go full speed

struct stm32f745_otg_fs_device_t
{
    volatile uint32_t OTG_FS_DCFG; // OTG_FS device configuration register (OTG_FS_DCFG)
    volatile uint32_t OTG_FS_DCTL; // OTG_FS device control register (OTG_FS_DCTL)
    volatile uint32_t OTG_FS_DSTS; // OTG_FS device status register (OTG_FS_DSTS)
    reserved_t<0x1> _0xc;
    volatile uint32_t OTG_FS_DIEPMSK; // OTG_FS device IN endpoint common interrupt mask register (OTG_FS_DIEPMSK)
    volatile uint32_t OTG_FS_DOEPMSK; // OTG_FS device OUT endpoint common interrupt mask register (OTG_FS_DOEPMSK)
    volatile uint32_t OTG_FS_DAINT; // OTG_FS device all endpoints interrupt register (OTG_FS_DAINT)
    volatile uint32_t OTG_FS_DAINTMSK; // OTG_FS all endpoints interrupt mask register (OTG_FS_DAINTMSK)
    reserved_t<0x2> _0x20;
    volatile uint32_t OTG_FS_DVBUSDIS; // OTG_FS device VBUS discharge time register
    volatile uint32_t OTG_FS_DVBUSPULSE; // OTG_FS device VBUS pulsing time register
    reserved_t<0x1> _0x30;
    volatile uint32_t OTG_FS_DIEPEMPMSK; // OTG_FS device IN endpoint FIFO empty interrupt mask register
    reserved_t<0x32> _0x38;
    volatile uint32_t OTG_FS_DIEPCTL0; // OTG_FS device control IN endpoint 0 control register (OTG_FS_DIEPCTL0)
    reserved_t<0x1> _0x104;
    volatile uint32_t OTG_FS_DIEPINT0; // device endpoint-x interrupt register
    reserved_t<0x1> _0x10c;
    volatile uint32_t OTG_FS_DIEPTSIZ0; // device endpoint-0 transfer size register
    reserved_t<0x1> _0x114;
    volatile uint32_t OTG_FS_DTXFSTS0; // OTG_FS device IN endpoint transmit FIFO status register
    reserved_t<0x1> _0x11c;
    volatile uint32_t OTG_FS_DIEPCTL1; // OTG device endpoint-1 control register
    reserved_t<0x1> _0x124;
    volatile uint32_t OTG_FS_DIEPINT1; // device endpoint-1 interrupt register
    reserved_t<0x1> _0x12c;
    volatile uint32_t OTG_FS_DIEPTSIZ1; // device endpoint-1 transfer size register
    reserved_t<0x1> _0x134;
    volatile uint32_t OTG_FS_DTXFSTS1; // OTG_FS device IN endpoint transmit FIFO status register
    reserved_t<0x1> _0x13c;
    volatile uint32_t OTG_FS_DIEPCTL2; // OTG device endpoint-2 control register
    reserved_t<0x1> _0x144;
    volatile uint32_t OTG_FS_DIEPINT2; // device endpoint-2 interrupt register
    reserved_t<0x1> _0x14c;
    volatile uint32_t OTG_FS_DIEPTSIZ2; // device endpoint-2 transfer size register
    reserved_t<0x1> _0x154;
    volatile uint32_t OTG_FS_DTXFSTS2; // OTG_FS device IN endpoint transmit FIFO status register
    reserved_t<0x1> _0x15c;
    volatile uint32_t OTG_FS_DIEPCTL3; // OTG device endpoint-3 control register
    reserved_t<0x1> _0x164;
    volatile uint32_t OTG_FS_DIEPINT3; // device endpoint-3 interrupt register
    reserved_t<0x1> _0x16c;
    volatile uint32_t OTG_FS_DIEPTSIZ3; // device endpoint-3 transfer size register
    reserved_t<0x1> _0x174;
    volatile uint32_t OTG_FS_DTXFSTS3; // OTG_FS device IN endpoint transmit FIFO status register
    reserved_t<0x1> _0x17c;
    volatile uint32_t OTG_FS_DIEPCTL4; // OTG device endpoint-4 control register
    reserved_t<0x1> _0x184;
    volatile uint32_t OTG_FS_DIEPINT4; // device endpoint-4 interrupt register
    reserved_t<0x2> _0x18c;
    volatile uint32_t OTG_FS_DIEPTSIZ4; // device endpoint-4 transfer size register
    reserved_t<0x1> _0x198;
    volatile uint32_t OTG_FS_DTXFSTS4; // OTG_FS device IN endpoint transmit FIFO status register
    volatile uint32_t OTG_FS_DIEPCTL5; // OTG device endpoint-5 control register
    reserved_t<0x1> _0x1a4;
    volatile uint32_t OTG_FS_DIEPINT5; // device endpoint-5 interrupt register
    reserved_t<0x1> _0x1ac;
    volatile uint32_t OTG_FS_DIEPTSIZ55; // device endpoint-5 transfer size register
    reserved_t<0x1> _0x1b4;
    volatile uint32_t OTG_FS_DTXFSTS55; // OTG_FS device IN endpoint transmit FIFO status register
    reserved_t<0x51> _0x1bc;
    volatile uint32_t OTG_FS_DOEPCTL0; // device endpoint-0 control register
    reserved_t<0x1> _0x304;
    volatile uint32_t OTG_FS_DOEPINT0; // device endpoint-0 interrupt register
    reserved_t<0x1> _0x30c;
    volatile uint32_t OTG_FS_DOEPTSIZ0; // device OUT endpoint-0 transfer size register
    reserved_t<0x3> _0x314;
    volatile uint32_t OTG_FS_DOEPCTL1; // device endpoint-1 control register
    reserved_t<0x1> _0x324;
    volatile uint32_t OTG_FS_DOEPINT1; // device endpoint-1 interrupt register
    reserved_t<0x1> _0x32c;
    volatile uint32_t OTG_FS_DOEPTSIZ1; // device OUT endpoint-1 transfer size register
    reserved_t<0x3> _0x334;
    volatile uint32_t OTG_FS_DOEPCTL2; // device endpoint-2 control register
    reserved_t<0x1> _0x344;
    volatile uint32_t OTG_FS_DOEPINT2; // device endpoint-2 interrupt register
    reserved_t<0x1> _0x34c;
    volatile uint32_t OTG_FS_DOEPTSIZ2; // device OUT endpoint-2 transfer size register
    reserved_t<0x3> _0x354;
    volatile uint32_t OTG_FS_DOEPCTL3; // device endpoint-3 control register
    reserved_t<0x1> _0x364;
    volatile uint32_t OTG_FS_DOEPINT3; // device endpoint-3 interrupt register
    reserved_t<0x1> _0x36c;
    volatile uint32_t OTG_FS_DOEPTSIZ3; // device OUT endpoint-3 transfer size register
    reserved_t<0x1> _0x374;
    volatile uint32_t OTG_FS_DOEPCTL4; // device endpoint-4 control register
    reserved_t<0x1> _0x37c;
    volatile uint32_t OTG_FS_DOEPINT4; // device endpoint-4 interrupt register
    reserved_t<0x1> _0x384;
    volatile uint32_t OTG_FS_DOEPTSIZ4; // device OUT endpoint-4 transfer size register
    reserved_t<0x1> _0x38c;
    volatile uint32_t OTG_FS_DOEPCTL5; // device endpoint-5 control register
    reserved_t<0x1> _0x394;
    volatile uint32_t OTG_FS_DOEPINT5; // device endpoint-5 interrupt register
    reserved_t<0x1> _0x39c;
    volatile uint32_t OTG_FS_DOEPTSIZ5; // device OUT endpoint-5 transfer size register

    static constexpr uint32_t OTG_FS_DCFG_RESET_VALUE = 0x2200000; // Reset value
    typedef bit_field_t<0, 0x3> OTG_FS_DCFG_DSPD; // Device speed
    static constexpr uint32_t OTG_FS_DCFG_NZLSOHSK = 0x4; // Non-zero-length status OUT handshake
    typedef bit_field_t<4, 0x7f> OTG_FS_DCFG_DAD; // Device address
    typedef bit_field_t<11, 0x3> OTG_FS_DCFG_PFIVL; // Periodic frame interval

    static constexpr uint32_t OTG_FS_DCTL_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_DCTL_RWUSIG = 0x1; // Remote wakeup signaling
    static constexpr uint32_t OTG_FS_DCTL_SDIS = 0x2; // Soft disconnect
    static constexpr uint32_t OTG_FS_DCTL_GINSTS = 0x4; // Global IN NAK status
    static constexpr uint32_t OTG_FS_DCTL_GONSTS = 0x8; // Global OUT NAK status
    typedef bit_field_t<4, 0x7> OTG_FS_DCTL_TCTL; // Test control
    static constexpr uint32_t OTG_FS_DCTL_SGINAK = 0x80; // Set global IN NAK
    static constexpr uint32_t OTG_FS_DCTL_CGINAK = 0x100; // Clear global IN NAK
    static constexpr uint32_t OTG_FS_DCTL_SGONAK = 0x200; // Set global OUT NAK
    static constexpr uint32_t OTG_FS_DCTL_CGONAK = 0x400; // Clear global OUT NAK
    static constexpr uint32_t OTG_FS_DCTL_POPRGDNE = 0x800; // Power-on programming done

    static constexpr uint32_t OTG_FS_DSTS_RESET_VALUE = 0x10; // Reset value
    static constexpr uint32_t OTG_FS_DSTS_SUSPSTS = 0x1; // Suspend status
    typedef bit_field_t<1, 0x3> OTG_FS_DSTS_ENUMSPD; // Enumerated speed
    static constexpr uint32_t OTG_FS_DSTS_EERR = 0x8; // Erratic error
    typedef bit_field_t<8, 0x3fff> OTG_FS_DSTS_FNSOF; // Frame number of the received SOF


    static constexpr uint32_t OTG_FS_DIEPMSK_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_DIEPMSK_XFRCM = 0x1; // Transfer completed interrupt mask
    static constexpr uint32_t OTG_FS_DIEPMSK_EPDM = 0x2; // Endpoint disabled interrupt mask
    static constexpr uint32_t OTG_FS_DIEPMSK_TOM = 0x8; // Timeout condition mask (Non-isochronous endpoints)
    static constexpr uint32_t OTG_FS_DIEPMSK_ITTXFEMSK = 0x10; // IN token received when TxFIFO empty mask
    static constexpr uint32_t OTG_FS_DIEPMSK_INEPNMM = 0x20; // IN token received with EP mismatch mask
    static constexpr uint32_t OTG_FS_DIEPMSK_INEPNEM = 0x40; // IN endpoint NAK effective mask

    static constexpr uint32_t OTG_FS_DOEPMSK_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_DOEPMSK_XFRCM = 0x1; // Transfer completed interrupt mask
    static constexpr uint32_t OTG_FS_DOEPMSK_EPDM = 0x2; // Endpoint disabled interrupt mask
    static constexpr uint32_t OTG_FS_DOEPMSK_STUPM = 0x8; // SETUP phase done mask
    static constexpr uint32_t OTG_FS_DOEPMSK_OTEPDM = 0x10; // OUT token received when endpoint disabled mask

    static constexpr uint32_t OTG_FS_DAINT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> OTG_FS_DAINT_IEPINT; // IN endpoint interrupt bits
    typedef bit_field_t<16, 0xffff> OTG_FS_DAINT_OEPINT; // OUT endpoint interrupt bits

    static constexpr uint32_t OTG_FS_DAINTMSK_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> OTG_FS_DAINTMSK_IEPM; // IN EP interrupt mask bits
    typedef bit_field_t<16, 0xffff> OTG_FS_DAINTMSK_OEPINT; // OUT endpoint interrupt bits


    static constexpr uint32_t OTG_FS_DVBUSDIS_RESET_VALUE = 0x17d7; // Reset value
    typedef bit_field_t<0, 0xffff> OTG_FS_DVBUSDIS_VBUSDT; // Device VBUS discharge time

    static constexpr uint32_t OTG_FS_DVBUSPULSE_RESET_VALUE = 0x5b8; // Reset value
    typedef bit_field_t<0, 0xfff> OTG_FS_DVBUSPULSE_DVBUSP; // Device VBUS pulsing time


    static constexpr uint32_t OTG_FS_DIEPEMPMSK_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> OTG_FS_DIEPEMPMSK_INEPTXFEM; // IN EP Tx FIFO empty interrupt mask bits


    static constexpr uint32_t OTG_FS_DIEPCTL0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> OTG_FS_DIEPCTL0_MPSIZ; // Maximum packet size
    static constexpr uint32_t OTG_FS_DIEPCTL0_USBAEP = 0x8000; // USB active endpoint
    static constexpr uint32_t OTG_FS_DIEPCTL0_NAKSTS = 0x20000; // NAK status
    typedef bit_field_t<18, 0x3> OTG_FS_DIEPCTL0_EPTYP; // Endpoint type
    static constexpr uint32_t OTG_FS_DIEPCTL0_STALL = 0x200000; // STALL handshake
    typedef bit_field_t<22, 0xf> OTG_FS_DIEPCTL0_TXFNUM; // TxFIFO number
    static constexpr uint32_t OTG_FS_DIEPCTL0_CNAK = 0x4000000; // Clear NAK
    static constexpr uint32_t OTG_FS_DIEPCTL0_SNAK = 0x8000000; // Set NAK
    static constexpr uint32_t OTG_FS_DIEPCTL0_EPDIS = 0x40000000; // Endpoint disable
    static constexpr uint32_t OTG_FS_DIEPCTL0_EPENA = 0x80000000; // Endpoint enable


    static constexpr uint32_t OTG_FS_DIEPINT0_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t OTG_FS_DIEPINT0_TXFE = 0x80; // TXFE
    static constexpr uint32_t OTG_FS_DIEPINT0_INEPNE = 0x40; // INEPNE
    static constexpr uint32_t OTG_FS_DIEPINT0_ITTXFE = 0x10; // ITTXFE
    static constexpr uint32_t OTG_FS_DIEPINT0_TOC = 0x8; // TOC
    static constexpr uint32_t OTG_FS_DIEPINT0_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t OTG_FS_DIEPINT0_XFRC = 0x1; // XFRC


    static constexpr uint32_t OTG_FS_DIEPTSIZ0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<19, 0x3> OTG_FS_DIEPTSIZ0_PKTCNT; // Packet count
    typedef bit_field_t<0, 0x7f> OTG_FS_DIEPTSIZ0_XFRSIZ; // Transfer size


    static constexpr uint32_t OTG_FS_DTXFSTS0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> OTG_FS_DTXFSTS0_INEPTFSAV; // IN endpoint TxFIFO space available


    static constexpr uint32_t OTG_FS_DIEPCTL1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_DIEPCTL1_EPENA = 0x80000000; // EPENA
    static constexpr uint32_t OTG_FS_DIEPCTL1_EPDIS = 0x40000000; // EPDIS
    static constexpr uint32_t OTG_FS_DIEPCTL1_SODDFRM_SD1PID = 0x20000000; // SODDFRM/SD1PID
    static constexpr uint32_t OTG_FS_DIEPCTL1_SD0PID_SEVNFRM = 0x10000000; // SD0PID/SEVNFRM
    static constexpr uint32_t OTG_FS_DIEPCTL1_SNAK = 0x8000000; // SNAK
    static constexpr uint32_t OTG_FS_DIEPCTL1_CNAK = 0x4000000; // CNAK
    typedef bit_field_t<22, 0xf> OTG_FS_DIEPCTL1_TXFNUM; // TXFNUM
    static constexpr uint32_t OTG_FS_DIEPCTL1_STALL = 0x200000; // Stall
    typedef bit_field_t<18, 0x3> OTG_FS_DIEPCTL1_EPTYP; // EPTYP
    static constexpr uint32_t OTG_FS_DIEPCTL1_NAKSTS = 0x20000; // NAKSTS
    static constexpr uint32_t OTG_FS_DIEPCTL1_EONUM_DPID = 0x10000; // EONUM/DPID
    static constexpr uint32_t OTG_FS_DIEPCTL1_USBAEP = 0x8000; // USBAEP
    typedef bit_field_t<0, 0x7ff> OTG_FS_DIEPCTL1_MPSIZ; // MPSIZ


    static constexpr uint32_t OTG_FS_DIEPINT1_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t OTG_FS_DIEPINT1_TXFE = 0x80; // TXFE
    static constexpr uint32_t OTG_FS_DIEPINT1_INEPNE = 0x40; // INEPNE
    static constexpr uint32_t OTG_FS_DIEPINT1_ITTXFE = 0x10; // ITTXFE
    static constexpr uint32_t OTG_FS_DIEPINT1_TOC = 0x8; // TOC
    static constexpr uint32_t OTG_FS_DIEPINT1_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t OTG_FS_DIEPINT1_XFRC = 0x1; // XFRC


    static constexpr uint32_t OTG_FS_DIEPTSIZ1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<29, 0x3> OTG_FS_DIEPTSIZ1_MCNT; // Multi count
    typedef bit_field_t<19, 0x3ff> OTG_FS_DIEPTSIZ1_PKTCNT; // Packet count
    typedef bit_field_t<0, 0x7ffff> OTG_FS_DIEPTSIZ1_XFRSIZ; // Transfer size


    static constexpr uint32_t OTG_FS_DTXFSTS1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> OTG_FS_DTXFSTS1_INEPTFSAV; // IN endpoint TxFIFO space available


    static constexpr uint32_t OTG_FS_DIEPCTL2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_DIEPCTL2_EPENA = 0x80000000; // EPENA
    static constexpr uint32_t OTG_FS_DIEPCTL2_EPDIS = 0x40000000; // EPDIS
    static constexpr uint32_t OTG_FS_DIEPCTL2_SODDFRM = 0x20000000; // SODDFRM
    static constexpr uint32_t OTG_FS_DIEPCTL2_SD0PID_SEVNFRM = 0x10000000; // SD0PID/SEVNFRM
    static constexpr uint32_t OTG_FS_DIEPCTL2_SNAK = 0x8000000; // SNAK
    static constexpr uint32_t OTG_FS_DIEPCTL2_CNAK = 0x4000000; // CNAK
    typedef bit_field_t<22, 0xf> OTG_FS_DIEPCTL2_TXFNUM; // TXFNUM
    static constexpr uint32_t OTG_FS_DIEPCTL2_STALL = 0x200000; // Stall
    typedef bit_field_t<18, 0x3> OTG_FS_DIEPCTL2_EPTYP; // EPTYP
    static constexpr uint32_t OTG_FS_DIEPCTL2_NAKSTS = 0x20000; // NAKSTS
    static constexpr uint32_t OTG_FS_DIEPCTL2_EONUM_DPID = 0x10000; // EONUM/DPID
    static constexpr uint32_t OTG_FS_DIEPCTL2_USBAEP = 0x8000; // USBAEP
    typedef bit_field_t<0, 0x7ff> OTG_FS_DIEPCTL2_MPSIZ; // MPSIZ


    static constexpr uint32_t OTG_FS_DIEPINT2_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t OTG_FS_DIEPINT2_TXFE = 0x80; // TXFE
    static constexpr uint32_t OTG_FS_DIEPINT2_INEPNE = 0x40; // INEPNE
    static constexpr uint32_t OTG_FS_DIEPINT2_ITTXFE = 0x10; // ITTXFE
    static constexpr uint32_t OTG_FS_DIEPINT2_TOC = 0x8; // TOC
    static constexpr uint32_t OTG_FS_DIEPINT2_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t OTG_FS_DIEPINT2_XFRC = 0x1; // XFRC


    static constexpr uint32_t OTG_FS_DIEPTSIZ2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<29, 0x3> OTG_FS_DIEPTSIZ2_MCNT; // Multi count
    typedef bit_field_t<19, 0x3ff> OTG_FS_DIEPTSIZ2_PKTCNT; // Packet count
    typedef bit_field_t<0, 0x7ffff> OTG_FS_DIEPTSIZ2_XFRSIZ; // Transfer size


    static constexpr uint32_t OTG_FS_DTXFSTS2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> OTG_FS_DTXFSTS2_INEPTFSAV; // IN endpoint TxFIFO space available


    static constexpr uint32_t OTG_FS_DIEPCTL3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_DIEPCTL3_EPENA = 0x80000000; // EPENA
    static constexpr uint32_t OTG_FS_DIEPCTL3_EPDIS = 0x40000000; // EPDIS
    static constexpr uint32_t OTG_FS_DIEPCTL3_SODDFRM = 0x20000000; // SODDFRM
    static constexpr uint32_t OTG_FS_DIEPCTL3_SD0PID_SEVNFRM = 0x10000000; // SD0PID/SEVNFRM
    static constexpr uint32_t OTG_FS_DIEPCTL3_SNAK = 0x8000000; // SNAK
    static constexpr uint32_t OTG_FS_DIEPCTL3_CNAK = 0x4000000; // CNAK
    typedef bit_field_t<22, 0xf> OTG_FS_DIEPCTL3_TXFNUM; // TXFNUM
    static constexpr uint32_t OTG_FS_DIEPCTL3_STALL = 0x200000; // Stall
    typedef bit_field_t<18, 0x3> OTG_FS_DIEPCTL3_EPTYP; // EPTYP
    static constexpr uint32_t OTG_FS_DIEPCTL3_NAKSTS = 0x20000; // NAKSTS
    static constexpr uint32_t OTG_FS_DIEPCTL3_EONUM_DPID = 0x10000; // EONUM/DPID
    static constexpr uint32_t OTG_FS_DIEPCTL3_USBAEP = 0x8000; // USBAEP
    typedef bit_field_t<0, 0x7ff> OTG_FS_DIEPCTL3_MPSIZ; // MPSIZ


    static constexpr uint32_t OTG_FS_DIEPINT3_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t OTG_FS_DIEPINT3_TXFE = 0x80; // TXFE
    static constexpr uint32_t OTG_FS_DIEPINT3_INEPNE = 0x40; // INEPNE
    static constexpr uint32_t OTG_FS_DIEPINT3_ITTXFE = 0x10; // ITTXFE
    static constexpr uint32_t OTG_FS_DIEPINT3_TOC = 0x8; // TOC
    static constexpr uint32_t OTG_FS_DIEPINT3_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t OTG_FS_DIEPINT3_XFRC = 0x1; // XFRC


    static constexpr uint32_t OTG_FS_DIEPTSIZ3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<29, 0x3> OTG_FS_DIEPTSIZ3_MCNT; // Multi count
    typedef bit_field_t<19, 0x3ff> OTG_FS_DIEPTSIZ3_PKTCNT; // Packet count
    typedef bit_field_t<0, 0x7ffff> OTG_FS_DIEPTSIZ3_XFRSIZ; // Transfer size


    static constexpr uint32_t OTG_FS_DTXFSTS3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> OTG_FS_DTXFSTS3_INEPTFSAV; // IN endpoint TxFIFO space available


    static constexpr uint32_t OTG_FS_DIEPCTL4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_DIEPCTL4_EPENA = 0x80000000; // EPENA
    static constexpr uint32_t OTG_FS_DIEPCTL4_EPDIS = 0x40000000; // EPDIS
    static constexpr uint32_t OTG_FS_DIEPCTL4_SODDFRM = 0x20000000; // SODDFRM
    static constexpr uint32_t OTG_FS_DIEPCTL4_SD0PID_SEVNFRM = 0x10000000; // SD0PID/SEVNFRM
    static constexpr uint32_t OTG_FS_DIEPCTL4_SNAK = 0x8000000; // SNAK
    static constexpr uint32_t OTG_FS_DIEPCTL4_CNAK = 0x4000000; // CNAK
    typedef bit_field_t<22, 0xf> OTG_FS_DIEPCTL4_TXFNUM; // TXFNUM
    static constexpr uint32_t OTG_FS_DIEPCTL4_STALL = 0x200000; // Stall
    typedef bit_field_t<18, 0x3> OTG_FS_DIEPCTL4_EPTYP; // EPTYP
    static constexpr uint32_t OTG_FS_DIEPCTL4_NAKSTS = 0x20000; // NAKSTS
    static constexpr uint32_t OTG_FS_DIEPCTL4_EONUM_DPID = 0x10000; // EONUM/DPID
    static constexpr uint32_t OTG_FS_DIEPCTL4_USBAEP = 0x8000; // USBAEP
    typedef bit_field_t<0, 0x7ff> OTG_FS_DIEPCTL4_MPSIZ; // MPSIZ


    static constexpr uint32_t OTG_FS_DIEPINT4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_DIEPINT4_TXFE = 0x80; // TXFE
    static constexpr uint32_t OTG_FS_DIEPINT4_INEPNE = 0x40; // INEPNE
    static constexpr uint32_t OTG_FS_DIEPINT4_ITTXFE = 0x10; // ITTXFE
    static constexpr uint32_t OTG_FS_DIEPINT4_TOC = 0x8; // TOC
    static constexpr uint32_t OTG_FS_DIEPINT4_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t OTG_FS_DIEPINT4_XFRC = 0x1; // XFRC


    static constexpr uint32_t OTG_FS_DIEPTSIZ4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<29, 0x3> OTG_FS_DIEPTSIZ4_MCNT; // Multi count
    typedef bit_field_t<19, 0x3ff> OTG_FS_DIEPTSIZ4_PKTCNT; // Packet count
    typedef bit_field_t<0, 0x7ffff> OTG_FS_DIEPTSIZ4_XFRSIZ; // Transfer size


    static constexpr uint32_t OTG_FS_DTXFSTS4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> OTG_FS_DTXFSTS4_INEPTFSAV; // IN endpoint TxFIFO space available

    static constexpr uint32_t OTG_FS_DIEPCTL5_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_DIEPCTL5_EPENA = 0x80000000; // EPENA
    static constexpr uint32_t OTG_FS_DIEPCTL5_EPDIS = 0x40000000; // EPDIS
    static constexpr uint32_t OTG_FS_DIEPCTL5_SODDFRM = 0x20000000; // SODDFRM
    static constexpr uint32_t OTG_FS_DIEPCTL5_SD0PID_SEVNFRM = 0x10000000; // SD0PID/SEVNFRM
    static constexpr uint32_t OTG_FS_DIEPCTL5_SNAK = 0x8000000; // SNAK
    static constexpr uint32_t OTG_FS_DIEPCTL5_CNAK = 0x4000000; // CNAK
    typedef bit_field_t<22, 0xf> OTG_FS_DIEPCTL5_TXFNUM; // TXFNUM
    static constexpr uint32_t OTG_FS_DIEPCTL5_STALL = 0x200000; // Stall
    typedef bit_field_t<18, 0x3> OTG_FS_DIEPCTL5_EPTYP; // EPTYP
    static constexpr uint32_t OTG_FS_DIEPCTL5_NAKSTS = 0x20000; // NAKSTS
    static constexpr uint32_t OTG_FS_DIEPCTL5_EONUM_DPID = 0x10000; // EONUM/DPID
    static constexpr uint32_t OTG_FS_DIEPCTL5_USBAEP = 0x8000; // USBAEP
    typedef bit_field_t<0, 0x7ff> OTG_FS_DIEPCTL5_MPSIZ; // MPSIZ


    static constexpr uint32_t OTG_FS_DIEPINT5_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_DIEPINT5_TXFE = 0x80; // TXFE
    static constexpr uint32_t OTG_FS_DIEPINT5_INEPNE = 0x40; // INEPNE
    static constexpr uint32_t OTG_FS_DIEPINT5_ITTXFE = 0x10; // ITTXFE
    static constexpr uint32_t OTG_FS_DIEPINT5_TOC = 0x8; // TOC
    static constexpr uint32_t OTG_FS_DIEPINT5_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t OTG_FS_DIEPINT5_XFRC = 0x1; // XFRC


    static constexpr uint32_t OTG_FS_DIEPTSIZ55_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<29, 0x3> OTG_FS_DIEPTSIZ55_MCNT; // Multi count
    typedef bit_field_t<19, 0x3ff> OTG_FS_DIEPTSIZ55_PKTCNT; // Packet count
    typedef bit_field_t<0, 0x7ffff> OTG_FS_DIEPTSIZ55_XFRSIZ; // Transfer size


    static constexpr uint32_t OTG_FS_DTXFSTS55_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> OTG_FS_DTXFSTS55_INEPTFSAV; // IN endpoint TxFIFO space available


    static constexpr uint32_t OTG_FS_DOEPCTL0_RESET_VALUE = 0x8000; // Reset value
    static constexpr uint32_t OTG_FS_DOEPCTL0_EPENA = 0x80000000; // EPENA
    static constexpr uint32_t OTG_FS_DOEPCTL0_EPDIS = 0x40000000; // EPDIS
    static constexpr uint32_t OTG_FS_DOEPCTL0_SNAK = 0x8000000; // SNAK
    static constexpr uint32_t OTG_FS_DOEPCTL0_CNAK = 0x4000000; // CNAK
    static constexpr uint32_t OTG_FS_DOEPCTL0_STALL = 0x200000; // Stall
    static constexpr uint32_t OTG_FS_DOEPCTL0_SNPM = 0x100000; // SNPM
    typedef bit_field_t<18, 0x3> OTG_FS_DOEPCTL0_EPTYP; // EPTYP
    static constexpr uint32_t OTG_FS_DOEPCTL0_NAKSTS = 0x20000; // NAKSTS
    static constexpr uint32_t OTG_FS_DOEPCTL0_USBAEP = 0x8000; // USBAEP
    typedef bit_field_t<0, 0x3> OTG_FS_DOEPCTL0_MPSIZ; // MPSIZ


    static constexpr uint32_t OTG_FS_DOEPINT0_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t OTG_FS_DOEPINT0_B2BSTUP = 0x40; // B2BSTUP
    static constexpr uint32_t OTG_FS_DOEPINT0_OTEPDIS = 0x10; // OTEPDIS
    static constexpr uint32_t OTG_FS_DOEPINT0_STUP = 0x8; // STUP
    static constexpr uint32_t OTG_FS_DOEPINT0_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t OTG_FS_DOEPINT0_XFRC = 0x1; // XFRC


    static constexpr uint32_t OTG_FS_DOEPTSIZ0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<29, 0x3> OTG_FS_DOEPTSIZ0_STUPCNT; // SETUP packet count
    static constexpr uint32_t OTG_FS_DOEPTSIZ0_PKTCNT = 0x80000; // Packet count
    typedef bit_field_t<0, 0x7f> OTG_FS_DOEPTSIZ0_XFRSIZ; // Transfer size


    static constexpr uint32_t OTG_FS_DOEPCTL1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_DOEPCTL1_EPENA = 0x80000000; // EPENA
    static constexpr uint32_t OTG_FS_DOEPCTL1_EPDIS = 0x40000000; // EPDIS
    static constexpr uint32_t OTG_FS_DOEPCTL1_SODDFRM = 0x20000000; // SODDFRM
    static constexpr uint32_t OTG_FS_DOEPCTL1_SD0PID_SEVNFRM = 0x10000000; // SD0PID/SEVNFRM
    static constexpr uint32_t OTG_FS_DOEPCTL1_SNAK = 0x8000000; // SNAK
    static constexpr uint32_t OTG_FS_DOEPCTL1_CNAK = 0x4000000; // CNAK
    static constexpr uint32_t OTG_FS_DOEPCTL1_STALL = 0x200000; // Stall
    static constexpr uint32_t OTG_FS_DOEPCTL1_SNPM = 0x100000; // SNPM
    typedef bit_field_t<18, 0x3> OTG_FS_DOEPCTL1_EPTYP; // EPTYP
    static constexpr uint32_t OTG_FS_DOEPCTL1_NAKSTS = 0x20000; // NAKSTS
    static constexpr uint32_t OTG_FS_DOEPCTL1_EONUM_DPID = 0x10000; // EONUM/DPID
    static constexpr uint32_t OTG_FS_DOEPCTL1_USBAEP = 0x8000; // USBAEP
    typedef bit_field_t<0, 0x7ff> OTG_FS_DOEPCTL1_MPSIZ; // MPSIZ


    static constexpr uint32_t OTG_FS_DOEPINT1_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t OTG_FS_DOEPINT1_B2BSTUP = 0x40; // B2BSTUP
    static constexpr uint32_t OTG_FS_DOEPINT1_OTEPDIS = 0x10; // OTEPDIS
    static constexpr uint32_t OTG_FS_DOEPINT1_STUP = 0x8; // STUP
    static constexpr uint32_t OTG_FS_DOEPINT1_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t OTG_FS_DOEPINT1_XFRC = 0x1; // XFRC


    static constexpr uint32_t OTG_FS_DOEPTSIZ1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<29, 0x3> OTG_FS_DOEPTSIZ1_RXDPID_STUPCNT; // Received data PID/SETUP packet count
    typedef bit_field_t<19, 0x3ff> OTG_FS_DOEPTSIZ1_PKTCNT; // Packet count
    typedef bit_field_t<0, 0x7ffff> OTG_FS_DOEPTSIZ1_XFRSIZ; // Transfer size


    static constexpr uint32_t OTG_FS_DOEPCTL2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_DOEPCTL2_EPENA = 0x80000000; // EPENA
    static constexpr uint32_t OTG_FS_DOEPCTL2_EPDIS = 0x40000000; // EPDIS
    static constexpr uint32_t OTG_FS_DOEPCTL2_SODDFRM = 0x20000000; // SODDFRM
    static constexpr uint32_t OTG_FS_DOEPCTL2_SD0PID_SEVNFRM = 0x10000000; // SD0PID/SEVNFRM
    static constexpr uint32_t OTG_FS_DOEPCTL2_SNAK = 0x8000000; // SNAK
    static constexpr uint32_t OTG_FS_DOEPCTL2_CNAK = 0x4000000; // CNAK
    static constexpr uint32_t OTG_FS_DOEPCTL2_STALL = 0x200000; // Stall
    static constexpr uint32_t OTG_FS_DOEPCTL2_SNPM = 0x100000; // SNPM
    typedef bit_field_t<18, 0x3> OTG_FS_DOEPCTL2_EPTYP; // EPTYP
    static constexpr uint32_t OTG_FS_DOEPCTL2_NAKSTS = 0x20000; // NAKSTS
    static constexpr uint32_t OTG_FS_DOEPCTL2_EONUM_DPID = 0x10000; // EONUM/DPID
    static constexpr uint32_t OTG_FS_DOEPCTL2_USBAEP = 0x8000; // USBAEP
    typedef bit_field_t<0, 0x7ff> OTG_FS_DOEPCTL2_MPSIZ; // MPSIZ


    static constexpr uint32_t OTG_FS_DOEPINT2_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t OTG_FS_DOEPINT2_B2BSTUP = 0x40; // B2BSTUP
    static constexpr uint32_t OTG_FS_DOEPINT2_OTEPDIS = 0x10; // OTEPDIS
    static constexpr uint32_t OTG_FS_DOEPINT2_STUP = 0x8; // STUP
    static constexpr uint32_t OTG_FS_DOEPINT2_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t OTG_FS_DOEPINT2_XFRC = 0x1; // XFRC


    static constexpr uint32_t OTG_FS_DOEPTSIZ2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<29, 0x3> OTG_FS_DOEPTSIZ2_RXDPID_STUPCNT; // Received data PID/SETUP packet count
    typedef bit_field_t<19, 0x3ff> OTG_FS_DOEPTSIZ2_PKTCNT; // Packet count
    typedef bit_field_t<0, 0x7ffff> OTG_FS_DOEPTSIZ2_XFRSIZ; // Transfer size


    static constexpr uint32_t OTG_FS_DOEPCTL3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_DOEPCTL3_EPENA = 0x80000000; // EPENA
    static constexpr uint32_t OTG_FS_DOEPCTL3_EPDIS = 0x40000000; // EPDIS
    static constexpr uint32_t OTG_FS_DOEPCTL3_SODDFRM = 0x20000000; // SODDFRM
    static constexpr uint32_t OTG_FS_DOEPCTL3_SD0PID_SEVNFRM = 0x10000000; // SD0PID/SEVNFRM
    static constexpr uint32_t OTG_FS_DOEPCTL3_SNAK = 0x8000000; // SNAK
    static constexpr uint32_t OTG_FS_DOEPCTL3_CNAK = 0x4000000; // CNAK
    static constexpr uint32_t OTG_FS_DOEPCTL3_STALL = 0x200000; // Stall
    static constexpr uint32_t OTG_FS_DOEPCTL3_SNPM = 0x100000; // SNPM
    typedef bit_field_t<18, 0x3> OTG_FS_DOEPCTL3_EPTYP; // EPTYP
    static constexpr uint32_t OTG_FS_DOEPCTL3_NAKSTS = 0x20000; // NAKSTS
    static constexpr uint32_t OTG_FS_DOEPCTL3_EONUM_DPID = 0x10000; // EONUM/DPID
    static constexpr uint32_t OTG_FS_DOEPCTL3_USBAEP = 0x8000; // USBAEP
    typedef bit_field_t<0, 0x7ff> OTG_FS_DOEPCTL3_MPSIZ; // MPSIZ


    static constexpr uint32_t OTG_FS_DOEPINT3_RESET_VALUE = 0x80; // Reset value
    static constexpr uint32_t OTG_FS_DOEPINT3_B2BSTUP = 0x40; // B2BSTUP
    static constexpr uint32_t OTG_FS_DOEPINT3_OTEPDIS = 0x10; // OTEPDIS
    static constexpr uint32_t OTG_FS_DOEPINT3_STUP = 0x8; // STUP
    static constexpr uint32_t OTG_FS_DOEPINT3_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t OTG_FS_DOEPINT3_XFRC = 0x1; // XFRC


    static constexpr uint32_t OTG_FS_DOEPTSIZ3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<29, 0x3> OTG_FS_DOEPTSIZ3_RXDPID_STUPCNT; // Received data PID/SETUP packet count
    typedef bit_field_t<19, 0x3ff> OTG_FS_DOEPTSIZ3_PKTCNT; // Packet count
    typedef bit_field_t<0, 0x7ffff> OTG_FS_DOEPTSIZ3_XFRSIZ; // Transfer size


    static constexpr uint32_t OTG_FS_DOEPCTL4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_DOEPCTL4_EPENA = 0x80000000; // EPENA
    static constexpr uint32_t OTG_FS_DOEPCTL4_EPDIS = 0x40000000; // EPDIS
    static constexpr uint32_t OTG_FS_DOEPCTL4_SODDFRM = 0x20000000; // SODDFRM
    static constexpr uint32_t OTG_FS_DOEPCTL4_SD0PID_SEVNFRM = 0x10000000; // SD0PID/SEVNFRM
    static constexpr uint32_t OTG_FS_DOEPCTL4_SNAK = 0x8000000; // SNAK
    static constexpr uint32_t OTG_FS_DOEPCTL4_CNAK = 0x4000000; // CNAK
    static constexpr uint32_t OTG_FS_DOEPCTL4_STALL = 0x200000; // Stall
    static constexpr uint32_t OTG_FS_DOEPCTL4_SNPM = 0x100000; // SNPM
    typedef bit_field_t<18, 0x3> OTG_FS_DOEPCTL4_EPTYP; // EPTYP
    static constexpr uint32_t OTG_FS_DOEPCTL4_NAKSTS = 0x20000; // NAKSTS
    static constexpr uint32_t OTG_FS_DOEPCTL4_EONUM_DPID = 0x10000; // EONUM/DPID
    static constexpr uint32_t OTG_FS_DOEPCTL4_USBAEP = 0x8000; // USBAEP
    typedef bit_field_t<0, 0x7ff> OTG_FS_DOEPCTL4_MPSIZ; // MPSIZ


    static constexpr uint32_t OTG_FS_DOEPINT4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_DOEPINT4_B2BSTUP = 0x40; // B2BSTUP
    static constexpr uint32_t OTG_FS_DOEPINT4_OTEPDIS = 0x10; // OTEPDIS
    static constexpr uint32_t OTG_FS_DOEPINT4_STUP = 0x8; // STUP
    static constexpr uint32_t OTG_FS_DOEPINT4_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t OTG_FS_DOEPINT4_XFRC = 0x1; // XFRC


    static constexpr uint32_t OTG_FS_DOEPTSIZ4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<29, 0x3> OTG_FS_DOEPTSIZ4_RXDPID_STUPCNT; // Received data PID/SETUP packet count
    typedef bit_field_t<19, 0x3ff> OTG_FS_DOEPTSIZ4_PKTCNT; // Packet count
    typedef bit_field_t<0, 0x7ffff> OTG_FS_DOEPTSIZ4_XFRSIZ; // Transfer size


    static constexpr uint32_t OTG_FS_DOEPCTL5_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_DOEPCTL5_EPENA = 0x80000000; // EPENA
    static constexpr uint32_t OTG_FS_DOEPCTL5_EPDIS = 0x40000000; // EPDIS
    static constexpr uint32_t OTG_FS_DOEPCTL5_SODDFRM = 0x20000000; // SODDFRM
    static constexpr uint32_t OTG_FS_DOEPCTL5_SD0PID_SEVNFRM = 0x10000000; // SD0PID/SEVNFRM
    static constexpr uint32_t OTG_FS_DOEPCTL5_SNAK = 0x8000000; // SNAK
    static constexpr uint32_t OTG_FS_DOEPCTL5_CNAK = 0x4000000; // CNAK
    static constexpr uint32_t OTG_FS_DOEPCTL5_STALL = 0x200000; // Stall
    static constexpr uint32_t OTG_FS_DOEPCTL5_SNPM = 0x100000; // SNPM
    typedef bit_field_t<18, 0x3> OTG_FS_DOEPCTL5_EPTYP; // EPTYP
    static constexpr uint32_t OTG_FS_DOEPCTL5_NAKSTS = 0x20000; // NAKSTS
    static constexpr uint32_t OTG_FS_DOEPCTL5_EONUM_DPID = 0x10000; // EONUM/DPID
    static constexpr uint32_t OTG_FS_DOEPCTL5_USBAEP = 0x8000; // USBAEP
    typedef bit_field_t<0, 0x7ff> OTG_FS_DOEPCTL5_MPSIZ; // MPSIZ


    static constexpr uint32_t OTG_FS_DOEPINT5_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_DOEPINT5_B2BSTUP = 0x40; // B2BSTUP
    static constexpr uint32_t OTG_FS_DOEPINT5_OTEPDIS = 0x10; // OTEPDIS
    static constexpr uint32_t OTG_FS_DOEPINT5_STUP = 0x8; // STUP
    static constexpr uint32_t OTG_FS_DOEPINT5_EPDISD = 0x2; // EPDISD
    static constexpr uint32_t OTG_FS_DOEPINT5_XFRC = 0x1; // XFRC


    static constexpr uint32_t OTG_FS_DOEPTSIZ5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<29, 0x3> OTG_FS_DOEPTSIZ5_RXDPID_STUPCNT; // Received data PID/SETUP packet count
    typedef bit_field_t<19, 0x3ff> OTG_FS_DOEPTSIZ5_PKTCNT; // Packet count
    typedef bit_field_t<0, 0x7ffff> OTG_FS_DOEPTSIZ5_XFRSIZ; // Transfer size
};

// OTG_FS_GLOBAL: USB on the go full speed

struct stm32f722_otg_fs_global_t
{
    volatile uint32_t OTG_FS_GOTGCTL; // OTG_FS control and status register (OTG_FS_GOTGCTL)
    volatile uint32_t OTG_FS_GOTGINT; // OTG_FS interrupt register (OTG_FS_GOTGINT)
    volatile uint32_t OTG_FS_GAHBCFG; // OTG_FS AHB configuration register (OTG_FS_GAHBCFG)
    volatile uint32_t OTG_FS_GUSBCFG; // OTG_FS USB configuration register (OTG_FS_GUSBCFG)
    volatile uint32_t OTG_FS_GRSTCTL; // OTG_FS reset register (OTG_FS_GRSTCTL)
    volatile uint32_t OTG_FS_GINTSTS; // OTG_FS core interrupt register (OTG_FS_GINTSTS)
    volatile uint32_t OTG_FS_GINTMSK; // OTG_FS interrupt mask register (OTG_FS_GINTMSK)
    volatile uint32_t OTG_FS_GRXSTSR_DEVICE; // OTG_FS Receive status debug read(Device mode)
    volatile uint32_t OTG_FS_GRXSTSP_DEVICE; // OTG status read and pop register (Device mode)
    volatile uint32_t OTG_FS_GRXFSIZ; // OTG_FS Receive FIFO size register (OTG_FS_GRXFSIZ)
    volatile uint32_t OTG_FS_DIEPTXF0_DEVICE; // OTG_FS Endpoint 0 Transmit FIFO size
    volatile uint32_t OTG_FS_HNPTXSTS; // OTG_FS non-periodic transmit FIFO/queue status register (OTG_FS_GNPTXSTS)
    volatile uint32_t OTG_FS_GI2CCTL; // OTG I2C access register
    reserved_t<0x1> _0x34;
    volatile uint32_t OTG_FS_GCCFG; // OTG_FS general core configuration register (OTG_FS_GCCFG)
    volatile uint32_t OTG_FS_CID; // core ID register
    reserved_t<0x5> _0x40;
    volatile uint32_t OTG_FS_GLPMCFG; // OTG core LPM configuration register
    reserved_t<0x2a> _0x58;
    volatile uint32_t OTG_FS_HPTXFSIZ; // OTG_FS Host periodic transmit FIFO size register (OTG_FS_HPTXFSIZ)
    volatile uint32_t OTG_FS_DIEPTXF1; // OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF1)
    volatile uint32_t OTG_FS_DIEPTXF2; // OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF2)
    volatile uint32_t OTG_FS_DIEPTXF3; // OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF3)
    volatile uint32_t OTG_FS_DIEPTXF4; // OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF4)
    volatile uint32_t OTG_FS_DIEPTXF5; // OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF5)

    static constexpr uint32_t OTG_FS_GOTGCTL_RESET_VALUE = 0x800; // Reset value
    static constexpr uint32_t OTG_FS_GOTGCTL_SRQSCS = 0x1; // Session request success
    static constexpr uint32_t OTG_FS_GOTGCTL_SRQ = 0x2; // Session request
    static constexpr uint32_t OTG_FS_GOTGCTL_HNGSCS = 0x100; // Host negotiation success
    static constexpr uint32_t OTG_FS_GOTGCTL_HNPRQ = 0x200; // HNP request
    static constexpr uint32_t OTG_FS_GOTGCTL_HSHNPEN = 0x400; // Host set HNP enable
    static constexpr uint32_t OTG_FS_GOTGCTL_DHNPEN = 0x800; // Device HNP enabled
    static constexpr uint32_t OTG_FS_GOTGCTL_CIDSTS = 0x10000; // Connector ID status
    static constexpr uint32_t OTG_FS_GOTGCTL_DBCT = 0x20000; // Long/short debounce time
    static constexpr uint32_t OTG_FS_GOTGCTL_ASVLD = 0x40000; // A-session valid
    static constexpr uint32_t OTG_FS_GOTGCTL_BSVLD = 0x80000; // B-session valid
    static constexpr uint32_t OTG_FS_GOTGCTL_VBVALOEN = 0x4; // VBUS valid override enable
    static constexpr uint32_t OTG_FS_GOTGCTL_VBVALOVAL = 0x8; // VBUS valid override value
    static constexpr uint32_t OTG_FS_GOTGCTL_AVALOEN = 0x10; // A-peripheral session valid override enable
    static constexpr uint32_t OTG_FS_GOTGCTL_AVALOVAL = 0x20; // A-peripheral session valid override value
    static constexpr uint32_t OTG_FS_GOTGCTL_BVALOEN = 0x40; // B-peripheral session valid override enable
    static constexpr uint32_t OTG_FS_GOTGCTL_BVALOVAL = 0x80; // B-peripheral session valid override value
    static constexpr uint32_t OTG_FS_GOTGCTL_EHEN = 0x1000; // Embedded host enable
    static constexpr uint32_t OTG_FS_GOTGCTL_OTGVER = 0x100000; // OTG version

    static constexpr uint32_t OTG_FS_GOTGINT_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_GOTGINT_SEDET = 0x4; // Session end detected
    static constexpr uint32_t OTG_FS_GOTGINT_SRSSCHG = 0x100; // Session request success status change
    static constexpr uint32_t OTG_FS_GOTGINT_HNSSCHG = 0x200; // Host negotiation success status change
    static constexpr uint32_t OTG_FS_GOTGINT_HNGDET = 0x20000; // Host negotiation detected
    static constexpr uint32_t OTG_FS_GOTGINT_ADTOCHG = 0x40000; // A-device timeout change
    static constexpr uint32_t OTG_FS_GOTGINT_DBCDNE = 0x80000; // Debounce done
    static constexpr uint32_t OTG_FS_GOTGINT_IDCHNG = 0x100000; // ID input pin changed

    static constexpr uint32_t OTG_FS_GAHBCFG_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_GAHBCFG_GINT = 0x1; // Global interrupt mask
    static constexpr uint32_t OTG_FS_GAHBCFG_TXFELVL = 0x80; // TxFIFO empty level
    static constexpr uint32_t OTG_FS_GAHBCFG_PTXFELVL = 0x100; // Periodic TxFIFO empty level

    static constexpr uint32_t OTG_FS_GUSBCFG_RESET_VALUE = 0xa00; // Reset value
    typedef bit_field_t<0, 0x7> OTG_FS_GUSBCFG_TOCAL; // FS timeout calibration
    static constexpr uint32_t OTG_FS_GUSBCFG_PHYSEL = 0x40; // Full Speed serial transceiver select
    static constexpr uint32_t OTG_FS_GUSBCFG_SRPCAP = 0x100; // SRP-capable
    static constexpr uint32_t OTG_FS_GUSBCFG_HNPCAP = 0x200; // HNP-capable
    typedef bit_field_t<10, 0xf> OTG_FS_GUSBCFG_TRDT; // USB turnaround time
    static constexpr uint32_t OTG_FS_GUSBCFG_FHMOD = 0x20000000; // Force host mode
    static constexpr uint32_t OTG_FS_GUSBCFG_FDMOD = 0x40000000; // Force device mode

    static constexpr uint32_t OTG_FS_GRSTCTL_RESET_VALUE = 0x20000000; // Reset value
    static constexpr uint32_t OTG_FS_GRSTCTL_CSRST = 0x1; // Core soft reset
    static constexpr uint32_t OTG_FS_GRSTCTL_HSRST = 0x2; // HCLK soft reset
    static constexpr uint32_t OTG_FS_GRSTCTL_FCRST = 0x4; // Host frame counter reset
    static constexpr uint32_t OTG_FS_GRSTCTL_RXFFLSH = 0x10; // RxFIFO flush
    static constexpr uint32_t OTG_FS_GRSTCTL_TXFFLSH = 0x20; // TxFIFO flush
    typedef bit_field_t<6, 0x1f> OTG_FS_GRSTCTL_TXFNUM; // TxFIFO number
    static constexpr uint32_t OTG_FS_GRSTCTL_AHBIDL = 0x80000000; // AHB master idle

    static constexpr uint32_t OTG_FS_GINTSTS_RESET_VALUE = 0x4000020; // Reset value
    static constexpr uint32_t OTG_FS_GINTSTS_CMOD = 0x1; // Current mode of operation
    static constexpr uint32_t OTG_FS_GINTSTS_MMIS = 0x2; // Mode mismatch interrupt
    static constexpr uint32_t OTG_FS_GINTSTS_OTGINT = 0x4; // OTG interrupt
    static constexpr uint32_t OTG_FS_GINTSTS_SOF = 0x8; // Start of frame
    static constexpr uint32_t OTG_FS_GINTSTS_RXFLVL = 0x10; // RxFIFO non-empty
    static constexpr uint32_t OTG_FS_GINTSTS_NPTXFE = 0x20; // Non-periodic TxFIFO empty
    static constexpr uint32_t OTG_FS_GINTSTS_GINAKEFF = 0x40; // Global IN non-periodic NAK effective
    static constexpr uint32_t OTG_FS_GINTSTS_GOUTNAKEFF = 0x80; // Global OUT NAK effective
    static constexpr uint32_t OTG_FS_GINTSTS_ESUSP = 0x400; // Early suspend
    static constexpr uint32_t OTG_FS_GINTSTS_USBSUSP = 0x800; // USB suspend
    static constexpr uint32_t OTG_FS_GINTSTS_USBRST = 0x1000; // USB reset
    static constexpr uint32_t OTG_FS_GINTSTS_ENUMDNE = 0x2000; // Enumeration done
    static constexpr uint32_t OTG_FS_GINTSTS_ISOODRP = 0x4000; // Isochronous OUT packet dropped interrupt
    static constexpr uint32_t OTG_FS_GINTSTS_EOPF = 0x8000; // End of periodic frame interrupt
    static constexpr uint32_t OTG_FS_GINTSTS_IEPINT = 0x40000; // IN endpoint interrupt
    static constexpr uint32_t OTG_FS_GINTSTS_OEPINT = 0x80000; // OUT endpoint interrupt
    static constexpr uint32_t OTG_FS_GINTSTS_IISOIXFR = 0x100000; // Incomplete isochronous IN transfer
    static constexpr uint32_t OTG_FS_GINTSTS_IPXFR_INCOMPISOOUT = 0x200000; // Incomplete periodic transfer(Host mode)/Incomplete isochronous OUT transfer(Device mode)
    static constexpr uint32_t OTG_FS_GINTSTS_HPRTINT = 0x1000000; // Host port interrupt
    static constexpr uint32_t OTG_FS_GINTSTS_HCINT = 0x2000000; // Host channels interrupt
    static constexpr uint32_t OTG_FS_GINTSTS_PTXFE = 0x4000000; // Periodic TxFIFO empty
    static constexpr uint32_t OTG_FS_GINTSTS_CIDSCHG = 0x10000000; // Connector ID status change
    static constexpr uint32_t OTG_FS_GINTSTS_DISCINT = 0x20000000; // Disconnect detected interrupt
    static constexpr uint32_t OTG_FS_GINTSTS_SRQINT = 0x40000000; // Session request/new session detected interrupt
    static constexpr uint32_t OTG_FS_GINTSTS_WKUPINT = 0x80000000; // Resume/remote wakeup detected interrupt
    static constexpr uint32_t OTG_FS_GINTSTS_RSTDET = 0x800000; // Reset detected interrupt

    static constexpr uint32_t OTG_FS_GINTMSK_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_GINTMSK_MMISM = 0x2; // Mode mismatch interrupt mask
    static constexpr uint32_t OTG_FS_GINTMSK_OTGINT = 0x4; // OTG interrupt mask
    static constexpr uint32_t OTG_FS_GINTMSK_SOFM = 0x8; // Start of frame mask
    static constexpr uint32_t OTG_FS_GINTMSK_RXFLVLM = 0x10; // Receive FIFO non-empty mask
    static constexpr uint32_t OTG_FS_GINTMSK_NPTXFEM = 0x20; // Non-periodic TxFIFO empty mask
    static constexpr uint32_t OTG_FS_GINTMSK_GINAKEFFM = 0x40; // Global non-periodic IN NAK effective mask
    static constexpr uint32_t OTG_FS_GINTMSK_GONAKEFFM = 0x80; // Global OUT NAK effective mask
    static constexpr uint32_t OTG_FS_GINTMSK_ESUSPM = 0x400; // Early suspend mask
    static constexpr uint32_t OTG_FS_GINTMSK_USBSUSPM = 0x800; // USB suspend mask
    static constexpr uint32_t OTG_FS_GINTMSK_USBRST = 0x1000; // USB reset mask
    static constexpr uint32_t OTG_FS_GINTMSK_ENUMDNEM = 0x2000; // Enumeration done mask
    static constexpr uint32_t OTG_FS_GINTMSK_ISOODRPM = 0x4000; // Isochronous OUT packet dropped interrupt mask
    static constexpr uint32_t OTG_FS_GINTMSK_EOPFM = 0x8000; // End of periodic frame interrupt mask
    static constexpr uint32_t OTG_FS_GINTMSK_IEPINT = 0x40000; // IN endpoints interrupt mask
    static constexpr uint32_t OTG_FS_GINTMSK_OEPINT = 0x80000; // OUT endpoints interrupt mask
    static constexpr uint32_t OTG_FS_GINTMSK_IISOIXFRM = 0x100000; // Incomplete isochronous IN transfer mask
    static constexpr uint32_t OTG_FS_GINTMSK_IPXFRM_IISOOXFRM = 0x200000; // Incomplete periodic transfer mask(Host mode)/Incomplete isochronous OUT transfer mask(Device mode)
    static constexpr uint32_t OTG_FS_GINTMSK_PRTIM = 0x1000000; // Host port interrupt mask
    static constexpr uint32_t OTG_FS_GINTMSK_HCIM = 0x2000000; // Host channels interrupt mask
    static constexpr uint32_t OTG_FS_GINTMSK_PTXFEM = 0x4000000; // Periodic TxFIFO empty mask
    static constexpr uint32_t OTG_FS_GINTMSK_CIDSCHGM = 0x10000000; // Connector ID status change mask
    static constexpr uint32_t OTG_FS_GINTMSK_DISCINT = 0x20000000; // Disconnect detected interrupt mask
    static constexpr uint32_t OTG_FS_GINTMSK_SRQIM = 0x40000000; // Session request/new session detected interrupt mask
    static constexpr uint32_t OTG_FS_GINTMSK_WUIM = 0x80000000; // Resume/remote wakeup detected interrupt mask
    static constexpr uint32_t OTG_FS_GINTMSK_RSTDETM = 0x800000; // Reset detected interrupt mask
    static constexpr uint32_t OTG_FS_GINTMSK_LPMIN = 0x8000000; // LPM interrupt mask

    static constexpr uint32_t OTG_FS_GRXSTSR_DEVICE_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> OTG_FS_GRXSTSR_DEVICE_EPNUM; // Endpoint number
    typedef bit_field_t<4, 0x7ff> OTG_FS_GRXSTSR_DEVICE_BCNT; // Byte count
    typedef bit_field_t<15, 0x3> OTG_FS_GRXSTSR_DEVICE_DPID; // Data PID
    typedef bit_field_t<17, 0xf> OTG_FS_GRXSTSR_DEVICE_PKTSTS; // Packet status
    typedef bit_field_t<21, 0xf> OTG_FS_GRXSTSR_DEVICE_FRMNUM; // Frame number

    static constexpr uint32_t OTG_FS_GRXSTSP_DEVICE_RESET_VALUE = 0x2000400; // Reset value
    typedef bit_field_t<0, 0xf> OTG_FS_GRXSTSP_DEVICE_EPNUM; // Endpoint number
    typedef bit_field_t<4, 0x7ff> OTG_FS_GRXSTSP_DEVICE_BCNT; // Byte count
    typedef bit_field_t<15, 0x3> OTG_FS_GRXSTSP_DEVICE_DPID; // Data PID
    typedef bit_field_t<17, 0xf> OTG_FS_GRXSTSP_DEVICE_PKTSTS; // Packet status
    typedef bit_field_t<21, 0xf> OTG_FS_GRXSTSP_DEVICE_FRMNUM; // Frame number

    static constexpr uint32_t OTG_FS_GRXFSIZ_RESET_VALUE = 0x200; // Reset value
    typedef bit_field_t<0, 0xffff> OTG_FS_GRXFSIZ_RXFD; // RxFIFO depth

    static constexpr uint32_t OTG_FS_DIEPTXF0_DEVICE_RESET_VALUE = 0x200; // Reset value
    typedef bit_field_t<0, 0xffff> OTG_FS_DIEPTXF0_DEVICE_TX0FSA; // Endpoint 0 transmit RAM start address
    typedef bit_field_t<16, 0xffff> OTG_FS_DIEPTXF0_DEVICE_TX0FD; // Endpoint 0 TxFIFO depth

    static constexpr uint32_t OTG_FS_HNPTXSTS_RESET_VALUE = 0x80200; // Reset value
    typedef bit_field_t<0, 0xffff> OTG_FS_HNPTXSTS_NPTXFSAV; // Non-periodic TxFIFO space available
    typedef bit_field_t<16, 0xff> OTG_FS_HNPTXSTS_NPTQXSAV; // Non-periodic transmit request queue space available
    typedef bit_field_t<24, 0x7f> OTG_FS_HNPTXSTS_NPTXQTOP; // Top of the non-periodic transmit request queue

    static constexpr uint32_t OTG_FS_GI2CCTL_RESET_VALUE = 0x2000400; // Reset value
    typedef bit_field_t<0, 0xff> OTG_FS_GI2CCTL_RWDATA; // I2C Read/Write Data
    typedef bit_field_t<8, 0xff> OTG_FS_GI2CCTL_REGADDR; // I2C Register Address
    typedef bit_field_t<16, 0x7f> OTG_FS_GI2CCTL_ADDR; // I2C Address
    static constexpr uint32_t OTG_FS_GI2CCTL_I2CEN = 0x800000; // I2C Enable
    static constexpr uint32_t OTG_FS_GI2CCTL_ACK = 0x1000000; // I2C ACK
    typedef bit_field_t<26, 0x3> OTG_FS_GI2CCTL_I2CDEVADR; // I2C Device Address
    static constexpr uint32_t OTG_FS_GI2CCTL_I2CDATSE0 = 0x10000000; // I2C DatSe0 USB mode
    static constexpr uint32_t OTG_FS_GI2CCTL_RW = 0x40000000; // Read/Write Indicator
    static constexpr uint32_t OTG_FS_GI2CCTL_BSYDNE = 0x80000000; // I2C Busy/Done


    static constexpr uint32_t OTG_FS_GCCFG_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_GCCFG_PWRDWN = 0x10000; // Power down
    static constexpr uint32_t OTG_FS_GCCFG_BCDEN = 0x20000; // Battery charging detector (BCD) enable
    static constexpr uint32_t OTG_FS_GCCFG_DCDEN = 0x40000; // Data contact detection (DCD) mode enable
    static constexpr uint32_t OTG_FS_GCCFG_PDEN = 0x80000; // Primary detection (PD) mode enable
    static constexpr uint32_t OTG_FS_GCCFG_SDEN = 0x100000; // Secondary detection (SD) mode enable
    static constexpr uint32_t OTG_FS_GCCFG_VBDEN = 0x200000; // USB VBUS detection enable
    static constexpr uint32_t OTG_FS_GCCFG_DCDET = 0x1; // Data contact detection (DCD) status
    static constexpr uint32_t OTG_FS_GCCFG_PDET = 0x2; // Primary detection (PD) status
    static constexpr uint32_t OTG_FS_GCCFG_SDET = 0x4; // Secondary detection (SD) status
    static constexpr uint32_t OTG_FS_GCCFG_PS2DET = 0x8; // DM pull-up detection status

    static constexpr uint32_t OTG_FS_CID_RESET_VALUE = 0x1000; // Reset value
    typedef bit_field_t<0, 0xffffffff> OTG_FS_CID_PRODUCT_ID; // Product ID field


    static constexpr uint32_t OTG_FS_GLPMCFG_RESET_VALUE = 0x2000400; // Reset value
    static constexpr uint32_t OTG_FS_GLPMCFG_LPMEN = 0x1; // LPM support enable
    static constexpr uint32_t OTG_FS_GLPMCFG_LPMACK = 0x2; // LPM token acknowledge enable
    typedef bit_field_t<2, 0xf> OTG_FS_GLPMCFG_BESL; // Best effort service latency
    static constexpr uint32_t OTG_FS_GLPMCFG_REMWAKE = 0x40; // bRemoteWake value
    static constexpr uint32_t OTG_FS_GLPMCFG_L1SSEN = 0x80; // L1 Shallow Sleep enable
    typedef bit_field_t<8, 0xf> OTG_FS_GLPMCFG_BESLTHRS; // BESL threshold
    static constexpr uint32_t OTG_FS_GLPMCFG_L1DSEN = 0x1000; // L1 deep sleep enable
    typedef bit_field_t<13, 0x3> OTG_FS_GLPMCFG_LPMRST; // LPM response
    static constexpr uint32_t OTG_FS_GLPMCFG_SLPSTS = 0x8000; // Port sleep status
    static constexpr uint32_t OTG_FS_GLPMCFG_L1RSMOK = 0x10000; // Sleep State Resume OK
    typedef bit_field_t<17, 0xf> OTG_FS_GLPMCFG_LPMCHIDX; // LPM Channel Index
    typedef bit_field_t<21, 0x7> OTG_FS_GLPMCFG_LPMRCNT; // LPM retry count
    static constexpr uint32_t OTG_FS_GLPMCFG_SNDLPM = 0x1000000; // Send LPM transaction
    typedef bit_field_t<25, 0x7> OTG_FS_GLPMCFG_LPMRCNTSTS; // LPM retry count status
    static constexpr uint32_t OTG_FS_GLPMCFG_ENBESL = 0x10000000; // Enable best effort service latency


    static constexpr uint32_t OTG_FS_HPTXFSIZ_RESET_VALUE = 0x2000600; // Reset value
    typedef bit_field_t<0, 0xffff> OTG_FS_HPTXFSIZ_PTXSA; // Host periodic TxFIFO start address
    typedef bit_field_t<16, 0xffff> OTG_FS_HPTXFSIZ_PTXFSIZ; // Host periodic TxFIFO depth

    static constexpr uint32_t OTG_FS_DIEPTXF1_RESET_VALUE = 0x2000400; // Reset value
    typedef bit_field_t<0, 0xffff> OTG_FS_DIEPTXF1_INEPTXSA; // IN endpoint FIFO2 transmit RAM start address
    typedef bit_field_t<16, 0xffff> OTG_FS_DIEPTXF1_INEPTXFD; // IN endpoint TxFIFO depth

    static constexpr uint32_t OTG_FS_DIEPTXF2_RESET_VALUE = 0x2000400; // Reset value
    typedef bit_field_t<0, 0xffff> OTG_FS_DIEPTXF2_INEPTXSA; // IN endpoint FIFO3 transmit RAM start address
    typedef bit_field_t<16, 0xffff> OTG_FS_DIEPTXF2_INEPTXFD; // IN endpoint TxFIFO depth

    static constexpr uint32_t OTG_FS_DIEPTXF3_RESET_VALUE = 0x2000400; // Reset value
    typedef bit_field_t<0, 0xffff> OTG_FS_DIEPTXF3_INEPTXSA; // IN endpoint FIFO4 transmit RAM start address
    typedef bit_field_t<16, 0xffff> OTG_FS_DIEPTXF3_INEPTXFD; // IN endpoint TxFIFO depth

    static constexpr uint32_t OTG_FS_DIEPTXF4_RESET_VALUE = 0x2000400; // Reset value
    typedef bit_field_t<0, 0xffff> OTG_FS_DIEPTXF4_INEPTXSA; // IN endpoint FIFOx transmit RAM start address
    typedef bit_field_t<16, 0xffff> OTG_FS_DIEPTXF4_INEPTXFD; // IN endpoint Tx FIFO depth

    static constexpr uint32_t OTG_FS_DIEPTXF5_RESET_VALUE = 0x2000400; // Reset value
    typedef bit_field_t<0, 0xffff> OTG_FS_DIEPTXF5_INEPTXSA; // IN endpoint FIFOx transmit RAM start address
    typedef bit_field_t<16, 0xffff> OTG_FS_DIEPTXF5_INEPTXFD; // IN endpoint Tx FIFO depth
};

// OTG_FS_GLOBAL: USB on the go full speed

struct stm32f745_otg_fs_global_t
{
    volatile uint32_t OTG_FS_GOTGCTL; // OTG_FS control and status register (OTG_FS_GOTGCTL)
    volatile uint32_t OTG_FS_GOTGINT; // OTG_FS interrupt register (OTG_FS_GOTGINT)
    volatile uint32_t OTG_FS_GAHBCFG; // OTG_FS AHB configuration register (OTG_FS_GAHBCFG)
    volatile uint32_t OTG_FS_GUSBCFG; // OTG_FS USB configuration register (OTG_FS_GUSBCFG)
    volatile uint32_t OTG_FS_GRSTCTL; // OTG_FS reset register (OTG_FS_GRSTCTL)
    volatile uint32_t OTG_FS_GINTSTS; // OTG_FS core interrupt register (OTG_FS_GINTSTS)
    volatile uint32_t OTG_FS_GINTMSK; // OTG_FS interrupt mask register (OTG_FS_GINTMSK)
    volatile uint32_t OTG_FS_GRXSTSR_DEVICE; // OTG_FS Receive status debug read(Device mode)
    volatile uint32_t OTG_FS_GRXSTSP_DEVICE; // OTG status read and pop register (Device mode)
    volatile uint32_t OTG_FS_GRXFSIZ; // OTG_FS Receive FIFO size register (OTG_FS_GRXFSIZ)
    volatile uint32_t OTG_FS_DIEPTXF0_DEVICE; // OTG_FS Endpoint 0 Transmit FIFO size
    volatile uint32_t OTG_FS_HNPTXSTS; // OTG_FS non-periodic transmit FIFO/queue status register (OTG_FS_GNPTXSTS)
    volatile uint32_t OTG_FS_GI2CCTL; // OTG I2C access register
    reserved_t<0x1> _0x34;
    volatile uint32_t OTG_FS_GCCFG; // OTG_FS general core configuration register (OTG_FS_GCCFG)
    volatile uint32_t OTG_FS_CID; // core ID register
    reserved_t<0x5> _0x40;
    volatile uint32_t OTG_FS_GLPMCFG; // OTG core LPM configuration register
    volatile uint32_t OTG_FS_GPWRDN; // OTG power down register
    reserved_t<0x1> _0x5c;
    volatile uint32_t OTG_FS_GADPCTL; // OTG ADP timer, control and status register
    reserved_t<0x27> _0x64;
    volatile uint32_t OTG_FS_HPTXFSIZ; // OTG_FS Host periodic transmit FIFO size register (OTG_FS_HPTXFSIZ)
    volatile uint32_t OTG_FS_DIEPTXF1; // OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF1)
    volatile uint32_t OTG_FS_DIEPTXF2; // OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF2)
    volatile uint32_t OTG_FS_DIEPTXF3; // OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF3)
    volatile uint32_t OTG_FS_DIEPTXF4; // OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF4)
    volatile uint32_t OTG_FS_DIEPTXF5; // OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF5)

    static constexpr uint32_t OTG_FS_GOTGCTL_RESET_VALUE = 0x800; // Reset value
    static constexpr uint32_t OTG_FS_GOTGCTL_SRQSCS = 0x1; // Session request success
    static constexpr uint32_t OTG_FS_GOTGCTL_SRQ = 0x2; // Session request
    static constexpr uint32_t OTG_FS_GOTGCTL_HNGSCS = 0x100; // Host negotiation success
    static constexpr uint32_t OTG_FS_GOTGCTL_HNPRQ = 0x200; // HNP request
    static constexpr uint32_t OTG_FS_GOTGCTL_HSHNPEN = 0x400; // Host set HNP enable
    static constexpr uint32_t OTG_FS_GOTGCTL_DHNPEN = 0x800; // Device HNP enabled
    static constexpr uint32_t OTG_FS_GOTGCTL_CIDSTS = 0x10000; // Connector ID status
    static constexpr uint32_t OTG_FS_GOTGCTL_DBCT = 0x20000; // Long/short debounce time
    static constexpr uint32_t OTG_FS_GOTGCTL_ASVLD = 0x40000; // A-session valid
    static constexpr uint32_t OTG_FS_GOTGCTL_BSVLD = 0x80000; // B-session valid
    static constexpr uint32_t OTG_FS_GOTGCTL_VBVALOEN = 0x4; // VBUS valid override enable
    static constexpr uint32_t OTG_FS_GOTGCTL_VBVALOVAL = 0x8; // VBUS valid override value
    static constexpr uint32_t OTG_FS_GOTGCTL_AVALOEN = 0x10; // A-peripheral session valid override enable
    static constexpr uint32_t OTG_FS_GOTGCTL_AVALOVAL = 0x20; // A-peripheral session valid override value
    static constexpr uint32_t OTG_FS_GOTGCTL_BVALOEN = 0x40; // B-peripheral session valid override enable
    static constexpr uint32_t OTG_FS_GOTGCTL_BVALOVAL = 0x80; // B-peripheral session valid override value
    static constexpr uint32_t OTG_FS_GOTGCTL_EHEN = 0x1000; // Embedded host enable
    static constexpr uint32_t OTG_FS_GOTGCTL_OTGVER = 0x100000; // OTG version

    static constexpr uint32_t OTG_FS_GOTGINT_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_GOTGINT_SEDET = 0x4; // Session end detected
    static constexpr uint32_t OTG_FS_GOTGINT_SRSSCHG = 0x100; // Session request success status change
    static constexpr uint32_t OTG_FS_GOTGINT_HNSSCHG = 0x200; // Host negotiation success status change
    static constexpr uint32_t OTG_FS_GOTGINT_HNGDET = 0x20000; // Host negotiation detected
    static constexpr uint32_t OTG_FS_GOTGINT_ADTOCHG = 0x40000; // A-device timeout change
    static constexpr uint32_t OTG_FS_GOTGINT_DBCDNE = 0x80000; // Debounce done
    static constexpr uint32_t OTG_FS_GOTGINT_IDCHNG = 0x100000; // ID input pin changed

    static constexpr uint32_t OTG_FS_GAHBCFG_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_GAHBCFG_GINT = 0x1; // Global interrupt mask
    static constexpr uint32_t OTG_FS_GAHBCFG_TXFELVL = 0x80; // TxFIFO empty level
    static constexpr uint32_t OTG_FS_GAHBCFG_PTXFELVL = 0x100; // Periodic TxFIFO empty level

    static constexpr uint32_t OTG_FS_GUSBCFG_RESET_VALUE = 0xa00; // Reset value
    typedef bit_field_t<0, 0x7> OTG_FS_GUSBCFG_TOCAL; // FS timeout calibration
    static constexpr uint32_t OTG_FS_GUSBCFG_PHYSEL = 0x40; // Full Speed serial transceiver select
    static constexpr uint32_t OTG_FS_GUSBCFG_SRPCAP = 0x100; // SRP-capable
    static constexpr uint32_t OTG_FS_GUSBCFG_HNPCAP = 0x200; // HNP-capable
    typedef bit_field_t<10, 0xf> OTG_FS_GUSBCFG_TRDT; // USB turnaround time
    static constexpr uint32_t OTG_FS_GUSBCFG_FHMOD = 0x20000000; // Force host mode
    static constexpr uint32_t OTG_FS_GUSBCFG_FDMOD = 0x40000000; // Force device mode

    static constexpr uint32_t OTG_FS_GRSTCTL_RESET_VALUE = 0x20000000; // Reset value
    static constexpr uint32_t OTG_FS_GRSTCTL_CSRST = 0x1; // Core soft reset
    static constexpr uint32_t OTG_FS_GRSTCTL_HSRST = 0x2; // HCLK soft reset
    static constexpr uint32_t OTG_FS_GRSTCTL_FCRST = 0x4; // Host frame counter reset
    static constexpr uint32_t OTG_FS_GRSTCTL_RXFFLSH = 0x10; // RxFIFO flush
    static constexpr uint32_t OTG_FS_GRSTCTL_TXFFLSH = 0x20; // TxFIFO flush
    typedef bit_field_t<6, 0x1f> OTG_FS_GRSTCTL_TXFNUM; // TxFIFO number
    static constexpr uint32_t OTG_FS_GRSTCTL_AHBIDL = 0x80000000; // AHB master idle

    static constexpr uint32_t OTG_FS_GINTSTS_RESET_VALUE = 0x4000020; // Reset value
    static constexpr uint32_t OTG_FS_GINTSTS_CMOD = 0x1; // Current mode of operation
    static constexpr uint32_t OTG_FS_GINTSTS_MMIS = 0x2; // Mode mismatch interrupt
    static constexpr uint32_t OTG_FS_GINTSTS_OTGINT = 0x4; // OTG interrupt
    static constexpr uint32_t OTG_FS_GINTSTS_SOF = 0x8; // Start of frame
    static constexpr uint32_t OTG_FS_GINTSTS_RXFLVL = 0x10; // RxFIFO non-empty
    static constexpr uint32_t OTG_FS_GINTSTS_NPTXFE = 0x20; // Non-periodic TxFIFO empty
    static constexpr uint32_t OTG_FS_GINTSTS_GINAKEFF = 0x40; // Global IN non-periodic NAK effective
    static constexpr uint32_t OTG_FS_GINTSTS_GOUTNAKEFF = 0x80; // Global OUT NAK effective
    static constexpr uint32_t OTG_FS_GINTSTS_ESUSP = 0x400; // Early suspend
    static constexpr uint32_t OTG_FS_GINTSTS_USBSUSP = 0x800; // USB suspend
    static constexpr uint32_t OTG_FS_GINTSTS_USBRST = 0x1000; // USB reset
    static constexpr uint32_t OTG_FS_GINTSTS_ENUMDNE = 0x2000; // Enumeration done
    static constexpr uint32_t OTG_FS_GINTSTS_ISOODRP = 0x4000; // Isochronous OUT packet dropped interrupt
    static constexpr uint32_t OTG_FS_GINTSTS_EOPF = 0x8000; // End of periodic frame interrupt
    static constexpr uint32_t OTG_FS_GINTSTS_IEPINT = 0x40000; // IN endpoint interrupt
    static constexpr uint32_t OTG_FS_GINTSTS_OEPINT = 0x80000; // OUT endpoint interrupt
    static constexpr uint32_t OTG_FS_GINTSTS_IISOIXFR = 0x100000; // Incomplete isochronous IN transfer
    static constexpr uint32_t OTG_FS_GINTSTS_IPXFR_INCOMPISOOUT = 0x200000; // Incomplete periodic transfer(Host mode)/Incomplete isochronous OUT transfer(Device mode)
    static constexpr uint32_t OTG_FS_GINTSTS_HPRTINT = 0x1000000; // Host port interrupt
    static constexpr uint32_t OTG_FS_GINTSTS_HCINT = 0x2000000; // Host channels interrupt
    static constexpr uint32_t OTG_FS_GINTSTS_PTXFE = 0x4000000; // Periodic TxFIFO empty
    static constexpr uint32_t OTG_FS_GINTSTS_CIDSCHG = 0x10000000; // Connector ID status change
    static constexpr uint32_t OTG_FS_GINTSTS_DISCINT = 0x20000000; // Disconnect detected interrupt
    static constexpr uint32_t OTG_FS_GINTSTS_SRQINT = 0x40000000; // Session request/new session detected interrupt
    static constexpr uint32_t OTG_FS_GINTSTS_WKUPINT = 0x80000000; // Resume/remote wakeup detected interrupt
    static constexpr uint32_t OTG_FS_GINTSTS_RSTDET = 0x800000; // Reset detected interrupt

    static constexpr uint32_t OTG_FS_GINTMSK_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_GINTMSK_MMISM = 0x2; // Mode mismatch interrupt mask
    static constexpr uint32_t OTG_FS_GINTMSK_OTGINT = 0x4; // OTG interrupt mask
    static constexpr uint32_t OTG_FS_GINTMSK_SOFM = 0x8; // Start of frame mask
    static constexpr uint32_t OTG_FS_GINTMSK_RXFLVLM = 0x10; // Receive FIFO non-empty mask
    static constexpr uint32_t OTG_FS_GINTMSK_NPTXFEM = 0x20; // Non-periodic TxFIFO empty mask
    static constexpr uint32_t OTG_FS_GINTMSK_GINAKEFFM = 0x40; // Global non-periodic IN NAK effective mask
    static constexpr uint32_t OTG_FS_GINTMSK_GONAKEFFM = 0x80; // Global OUT NAK effective mask
    static constexpr uint32_t OTG_FS_GINTMSK_ESUSPM = 0x400; // Early suspend mask
    static constexpr uint32_t OTG_FS_GINTMSK_USBSUSPM = 0x800; // USB suspend mask
    static constexpr uint32_t OTG_FS_GINTMSK_USBRST = 0x1000; // USB reset mask
    static constexpr uint32_t OTG_FS_GINTMSK_ENUMDNEM = 0x2000; // Enumeration done mask
    static constexpr uint32_t OTG_FS_GINTMSK_ISOODRPM = 0x4000; // Isochronous OUT packet dropped interrupt mask
    static constexpr uint32_t OTG_FS_GINTMSK_EOPFM = 0x8000; // End of periodic frame interrupt mask
    static constexpr uint32_t OTG_FS_GINTMSK_IEPINT = 0x40000; // IN endpoints interrupt mask
    static constexpr uint32_t OTG_FS_GINTMSK_OEPINT = 0x80000; // OUT endpoints interrupt mask
    static constexpr uint32_t OTG_FS_GINTMSK_IISOIXFRM = 0x100000; // Incomplete isochronous IN transfer mask
    static constexpr uint32_t OTG_FS_GINTMSK_IPXFRM_IISOOXFRM = 0x200000; // Incomplete periodic transfer mask(Host mode)/Incomplete isochronous OUT transfer mask(Device mode)
    static constexpr uint32_t OTG_FS_GINTMSK_PRTIM = 0x1000000; // Host port interrupt mask
    static constexpr uint32_t OTG_FS_GINTMSK_HCIM = 0x2000000; // Host channels interrupt mask
    static constexpr uint32_t OTG_FS_GINTMSK_PTXFEM = 0x4000000; // Periodic TxFIFO empty mask
    static constexpr uint32_t OTG_FS_GINTMSK_CIDSCHGM = 0x10000000; // Connector ID status change mask
    static constexpr uint32_t OTG_FS_GINTMSK_DISCINT = 0x20000000; // Disconnect detected interrupt mask
    static constexpr uint32_t OTG_FS_GINTMSK_SRQIM = 0x40000000; // Session request/new session detected interrupt mask
    static constexpr uint32_t OTG_FS_GINTMSK_WUIM = 0x80000000; // Resume/remote wakeup detected interrupt mask
    static constexpr uint32_t OTG_FS_GINTMSK_RSTDETM = 0x800000; // Reset detected interrupt mask
    static constexpr uint32_t OTG_FS_GINTMSK_LPMIN = 0x8000000; // LPM interrupt mask

    static constexpr uint32_t OTG_FS_GRXSTSR_DEVICE_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xf> OTG_FS_GRXSTSR_DEVICE_EPNUM; // Endpoint number
    typedef bit_field_t<4, 0x7ff> OTG_FS_GRXSTSR_DEVICE_BCNT; // Byte count
    typedef bit_field_t<15, 0x3> OTG_FS_GRXSTSR_DEVICE_DPID; // Data PID
    typedef bit_field_t<17, 0xf> OTG_FS_GRXSTSR_DEVICE_PKTSTS; // Packet status
    typedef bit_field_t<21, 0xf> OTG_FS_GRXSTSR_DEVICE_FRMNUM; // Frame number

    static constexpr uint32_t OTG_FS_GRXSTSP_DEVICE_RESET_VALUE = 0x2000400; // Reset value
    typedef bit_field_t<0, 0xf> OTG_FS_GRXSTSP_DEVICE_EPNUM; // Endpoint number
    typedef bit_field_t<4, 0x7ff> OTG_FS_GRXSTSP_DEVICE_BCNT; // Byte count
    typedef bit_field_t<15, 0x3> OTG_FS_GRXSTSP_DEVICE_DPID; // Data PID
    typedef bit_field_t<17, 0xf> OTG_FS_GRXSTSP_DEVICE_PKTSTS; // Packet status
    typedef bit_field_t<21, 0xf> OTG_FS_GRXSTSP_DEVICE_FRMNUM; // Frame number

    static constexpr uint32_t OTG_FS_GRXFSIZ_RESET_VALUE = 0x200; // Reset value
    typedef bit_field_t<0, 0xffff> OTG_FS_GRXFSIZ_RXFD; // RxFIFO depth

    static constexpr uint32_t OTG_FS_DIEPTXF0_DEVICE_RESET_VALUE = 0x200; // Reset value
    typedef bit_field_t<0, 0xffff> OTG_FS_DIEPTXF0_DEVICE_TX0FSA; // Endpoint 0 transmit RAM start address
    typedef bit_field_t<16, 0xffff> OTG_FS_DIEPTXF0_DEVICE_TX0FD; // Endpoint 0 TxFIFO depth

    static constexpr uint32_t OTG_FS_HNPTXSTS_RESET_VALUE = 0x80200; // Reset value
    typedef bit_field_t<0, 0xffff> OTG_FS_HNPTXSTS_NPTXFSAV; // Non-periodic TxFIFO space available
    typedef bit_field_t<16, 0xff> OTG_FS_HNPTXSTS_NPTQXSAV; // Non-periodic transmit request queue space available
    typedef bit_field_t<24, 0x7f> OTG_FS_HNPTXSTS_NPTXQTOP; // Top of the non-periodic transmit request queue

    static constexpr uint32_t OTG_FS_GI2CCTL_RESET_VALUE = 0x2000400; // Reset value
    typedef bit_field_t<0, 0xff> OTG_FS_GI2CCTL_RWDATA; // I2C Read/Write Data
    typedef bit_field_t<8, 0xff> OTG_FS_GI2CCTL_REGADDR; // I2C Register Address
    typedef bit_field_t<16, 0x7f> OTG_FS_GI2CCTL_ADDR; // I2C Address
    static constexpr uint32_t OTG_FS_GI2CCTL_I2CEN = 0x800000; // I2C Enable
    static constexpr uint32_t OTG_FS_GI2CCTL_ACK = 0x1000000; // I2C ACK
    typedef bit_field_t<26, 0x3> OTG_FS_GI2CCTL_I2CDEVADR; // I2C Device Address
    static constexpr uint32_t OTG_FS_GI2CCTL_I2CDATSE0 = 0x10000000; // I2C DatSe0 USB mode
    static constexpr uint32_t OTG_FS_GI2CCTL_RW = 0x40000000; // Read/Write Indicator
    static constexpr uint32_t OTG_FS_GI2CCTL_BSYDNE = 0x80000000; // I2C Busy/Done


    static constexpr uint32_t OTG_FS_GCCFG_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_GCCFG_PWRDWN = 0x10000; // Power down
    static constexpr uint32_t OTG_FS_GCCFG_BCDEN = 0x20000; // Battery charging detector (BCD) enable
    static constexpr uint32_t OTG_FS_GCCFG_DCDEN = 0x40000; // Data contact detection (DCD) mode enable
    static constexpr uint32_t OTG_FS_GCCFG_PDEN = 0x80000; // Primary detection (PD) mode enable
    static constexpr uint32_t OTG_FS_GCCFG_SDEN = 0x100000; // Secondary detection (SD) mode enable
    static constexpr uint32_t OTG_FS_GCCFG_VBDEN = 0x200000; // USB VBUS detection enable
    static constexpr uint32_t OTG_FS_GCCFG_DCDET = 0x1; // Data contact detection (DCD) status
    static constexpr uint32_t OTG_FS_GCCFG_PDET = 0x2; // Primary detection (PD) status
    static constexpr uint32_t OTG_FS_GCCFG_SDET = 0x4; // Secondary detection (SD) status
    static constexpr uint32_t OTG_FS_GCCFG_PS2DET = 0x8; // DM pull-up detection status

    static constexpr uint32_t OTG_FS_CID_RESET_VALUE = 0x1000; // Reset value
    typedef bit_field_t<0, 0xffffffff> OTG_FS_CID_PRODUCT_ID; // Product ID field


    static constexpr uint32_t OTG_FS_GLPMCFG_RESET_VALUE = 0x2000400; // Reset value
    static constexpr uint32_t OTG_FS_GLPMCFG_LPMEN = 0x1; // LPM support enable
    static constexpr uint32_t OTG_FS_GLPMCFG_LPMACK = 0x2; // LPM token acknowledge enable
    typedef bit_field_t<2, 0xf> OTG_FS_GLPMCFG_BESL; // Best effort service latency
    static constexpr uint32_t OTG_FS_GLPMCFG_REMWAKE = 0x40; // bRemoteWake value
    static constexpr uint32_t OTG_FS_GLPMCFG_L1SSEN = 0x80; // L1 Shallow Sleep enable
    typedef bit_field_t<8, 0xf> OTG_FS_GLPMCFG_BESLTHRS; // BESL threshold
    static constexpr uint32_t OTG_FS_GLPMCFG_L1DSEN = 0x1000; // L1 deep sleep enable
    typedef bit_field_t<13, 0x3> OTG_FS_GLPMCFG_LPMRST; // LPM response
    static constexpr uint32_t OTG_FS_GLPMCFG_SLPSTS = 0x8000; // Port sleep status
    static constexpr uint32_t OTG_FS_GLPMCFG_L1RSMOK = 0x10000; // Sleep State Resume OK
    typedef bit_field_t<17, 0xf> OTG_FS_GLPMCFG_LPMCHIDX; // LPM Channel Index
    typedef bit_field_t<21, 0x7> OTG_FS_GLPMCFG_LPMRCNT; // LPM retry count
    static constexpr uint32_t OTG_FS_GLPMCFG_SNDLPM = 0x1000000; // Send LPM transaction
    typedef bit_field_t<25, 0x7> OTG_FS_GLPMCFG_LPMRCNTSTS; // LPM retry count status
    static constexpr uint32_t OTG_FS_GLPMCFG_ENBESL = 0x10000000; // Enable best effort service latency

    static constexpr uint32_t OTG_FS_GPWRDN_RESET_VALUE = 0x2000400; // Reset value
    static constexpr uint32_t OTG_FS_GPWRDN_ADPMEN = 0x1; // ADP module enable
    static constexpr uint32_t OTG_FS_GPWRDN_ADPIF = 0x800000; // ADP interrupt flag


    static constexpr uint32_t OTG_FS_GADPCTL_RESET_VALUE = 0x2000400; // Reset value
    typedef bit_field_t<0, 0x3> OTG_FS_GADPCTL_PRBDSCHG; // Probe discharge
    typedef bit_field_t<2, 0x3> OTG_FS_GADPCTL_PRBDELTA; // Probe delta
    typedef bit_field_t<4, 0x3> OTG_FS_GADPCTL_PRBPER; // Probe period
    typedef bit_field_t<6, 0x7ff> OTG_FS_GADPCTL_RTIM; // Ramp time
    static constexpr uint32_t OTG_FS_GADPCTL_ENAPRB = 0x20000; // Enable probe
    static constexpr uint32_t OTG_FS_GADPCTL_ENASNS = 0x40000; // Enable sense
    static constexpr uint32_t OTG_FS_GADPCTL_ADPRST = 0x80000; // ADP reset
    static constexpr uint32_t OTG_FS_GADPCTL_ADPEN = 0x100000; // ADP enable
    static constexpr uint32_t OTG_FS_GADPCTL_ADPPRBIF = 0x200000; // ADP probe interrupt flag
    static constexpr uint32_t OTG_FS_GADPCTL_ADPSNSIF = 0x400000; // ADP sense interrupt flag
    static constexpr uint32_t OTG_FS_GADPCTL_ADPTOIF = 0x800000; // ADP timeout interrupt flag
    static constexpr uint32_t OTG_FS_GADPCTL_ADPPRBIM = 0x1000000; // ADP probe interrupt mask
    static constexpr uint32_t OTG_FS_GADPCTL_ADPSNSIM = 0x2000000; // ADP sense interrupt mask
    static constexpr uint32_t OTG_FS_GADPCTL_ADPTOIM = 0x4000000; // ADP timeout interrupt mask
    typedef bit_field_t<27, 0x3> OTG_FS_GADPCTL_AR; // Access request


    static constexpr uint32_t OTG_FS_HPTXFSIZ_RESET_VALUE = 0x2000600; // Reset value
    typedef bit_field_t<0, 0xffff> OTG_FS_HPTXFSIZ_PTXSA; // Host periodic TxFIFO start address
    typedef bit_field_t<16, 0xffff> OTG_FS_HPTXFSIZ_PTXFSIZ; // Host periodic TxFIFO depth

    static constexpr uint32_t OTG_FS_DIEPTXF1_RESET_VALUE = 0x2000400; // Reset value
    typedef bit_field_t<0, 0xffff> OTG_FS_DIEPTXF1_INEPTXSA; // IN endpoint FIFO2 transmit RAM start address
    typedef bit_field_t<16, 0xffff> OTG_FS_DIEPTXF1_INEPTXFD; // IN endpoint TxFIFO depth

    static constexpr uint32_t OTG_FS_DIEPTXF2_RESET_VALUE = 0x2000400; // Reset value
    typedef bit_field_t<0, 0xffff> OTG_FS_DIEPTXF2_INEPTXSA; // IN endpoint FIFO3 transmit RAM start address
    typedef bit_field_t<16, 0xffff> OTG_FS_DIEPTXF2_INEPTXFD; // IN endpoint TxFIFO depth

    static constexpr uint32_t OTG_FS_DIEPTXF3_RESET_VALUE = 0x2000400; // Reset value
    typedef bit_field_t<0, 0xffff> OTG_FS_DIEPTXF3_INEPTXSA; // IN endpoint FIFO4 transmit RAM start address
    typedef bit_field_t<16, 0xffff> OTG_FS_DIEPTXF3_INEPTXFD; // IN endpoint TxFIFO depth

    static constexpr uint32_t OTG_FS_DIEPTXF4_RESET_VALUE = 0x2000400; // Reset value
    typedef bit_field_t<0, 0xffff> OTG_FS_DIEPTXF4_INEPTXSA; // IN endpoint FIFOx transmit RAM start address
    typedef bit_field_t<16, 0xffff> OTG_FS_DIEPTXF4_INEPTXFD; // IN endpoint Tx FIFO depth

    static constexpr uint32_t OTG_FS_DIEPTXF5_RESET_VALUE = 0x2000400; // Reset value
    typedef bit_field_t<0, 0xffff> OTG_FS_DIEPTXF5_INEPTXSA; // IN endpoint FIFOx transmit RAM start address
    typedef bit_field_t<16, 0xffff> OTG_FS_DIEPTXF5_INEPTXFD; // IN endpoint Tx FIFO depth
};

// OTG_FS_HOST: USB on the go full speed

struct stm32f722_otg_fs_host_t
{
    volatile uint32_t OTG_FS_HCFG; // OTG_FS host configuration register (OTG_FS_HCFG)
    volatile uint32_t OTG_FS_HFIR; // OTG_FS Host frame interval register
    volatile uint32_t OTG_FS_HFNUM; // OTG_FS host frame number/frame time remaining register (OTG_FS_HFNUM)
    reserved_t<0x1> _0xc;
    volatile uint32_t OTG_FS_HPTXSTS; // OTG_FS_Host periodic transmit FIFO/queue status register (OTG_FS_HPTXSTS)
    volatile uint32_t OTG_FS_HAINT; // OTG_FS Host all channels interrupt register
    volatile uint32_t OTG_FS_HAINTMSK; // OTG_FS host all channels interrupt mask register
    reserved_t<0x9> _0x1c;
    volatile uint32_t OTG_FS_HPRT; // OTG_FS host port control and status register (OTG_FS_HPRT)
    reserved_t<0x2f> _0x44;
    volatile uint32_t OTG_FS_HCCHAR0; // OTG_FS host channel-0 characteristics register (OTG_FS_HCCHAR0)
    reserved_t<0x1> _0x104;
    volatile uint32_t OTG_FS_HCINT0; // OTG_FS host channel-0 interrupt register (OTG_FS_HCINT0)
    volatile uint32_t OTG_FS_HCINTMSK0; // OTG_FS host channel-0 mask register (OTG_FS_HCINTMSK0)
    volatile uint32_t OTG_FS_HCTSIZ0; // OTG_FS host channel-0 transfer size register
    reserved_t<0x3> _0x114;
    volatile uint32_t OTG_FS_HCCHAR1; // OTG_FS host channel-1 characteristics register (OTG_FS_HCCHAR1)
    reserved_t<0x1> _0x124;
    volatile uint32_t OTG_FS_HCINT1; // OTG_FS host channel-1 interrupt register (OTG_FS_HCINT1)
    volatile uint32_t OTG_FS_HCINTMSK1; // OTG_FS host channel-1 mask register (OTG_FS_HCINTMSK1)
    volatile uint32_t OTG_FS_HCTSIZ1; // OTG_FS host channel-1 transfer size register
    reserved_t<0x3> _0x134;
    volatile uint32_t OTG_FS_HCCHAR2; // OTG_FS host channel-2 characteristics register (OTG_FS_HCCHAR2)
    reserved_t<0x1> _0x144;
    volatile uint32_t OTG_FS_HCINT2; // OTG_FS host channel-2 interrupt register (OTG_FS_HCINT2)
    volatile uint32_t OTG_FS_HCINTMSK2; // OTG_FS host channel-2 mask register (OTG_FS_HCINTMSK2)
    volatile uint32_t OTG_FS_HCTSIZ2; // OTG_FS host channel-2 transfer size register
    reserved_t<0x3> _0x154;
    volatile uint32_t OTG_FS_HCCHAR3; // OTG_FS host channel-3 characteristics register (OTG_FS_HCCHAR3)
    reserved_t<0x1> _0x164;
    volatile uint32_t OTG_FS_HCINT3; // OTG_FS host channel-3 interrupt register (OTG_FS_HCINT3)
    volatile uint32_t OTG_FS_HCINTMSK3; // OTG_FS host channel-3 mask register (OTG_FS_HCINTMSK3)
    volatile uint32_t OTG_FS_HCTSIZ3; // OTG_FS host channel-3 transfer size register
    reserved_t<0x3> _0x174;
    volatile uint32_t OTG_FS_HCCHAR4; // OTG_FS host channel-4 characteristics register (OTG_FS_HCCHAR4)
    reserved_t<0x1> _0x184;
    volatile uint32_t OTG_FS_HCINT4; // OTG_FS host channel-4 interrupt register (OTG_FS_HCINT4)
    volatile uint32_t OTG_FS_HCINTMSK4; // OTG_FS host channel-4 mask register (OTG_FS_HCINTMSK4)
    volatile uint32_t OTG_FS_HCTSIZ4; // OTG_FS host channel-x transfer size register
    reserved_t<0x3> _0x194;
    volatile uint32_t OTG_FS_HCCHAR5; // OTG_FS host channel-5 characteristics register (OTG_FS_HCCHAR5)
    reserved_t<0x1> _0x1a4;
    volatile uint32_t OTG_FS_HCINT5; // OTG_FS host channel-5 interrupt register (OTG_FS_HCINT5)
    volatile uint32_t OTG_FS_HCINTMSK5; // OTG_FS host channel-5 mask register (OTG_FS_HCINTMSK5)
    volatile uint32_t OTG_FS_HCTSIZ5; // OTG_FS host channel-5 transfer size register
    reserved_t<0x3> _0x1b4;
    volatile uint32_t OTG_FS_HCCHAR6; // OTG_FS host channel-6 characteristics register (OTG_FS_HCCHAR6)
    reserved_t<0x1> _0x1c4;
    volatile uint32_t OTG_FS_HCINT6; // OTG_FS host channel-6 interrupt register (OTG_FS_HCINT6)
    volatile uint32_t OTG_FS_HCINTMSK6; // OTG_FS host channel-6 mask register (OTG_FS_HCINTMSK6)
    volatile uint32_t OTG_FS_HCTSIZ6; // OTG_FS host channel-6 transfer size register
    reserved_t<0x3> _0x1d4;
    volatile uint32_t OTG_FS_HCCHAR7; // OTG_FS host channel-7 characteristics register (OTG_FS_HCCHAR7)
    reserved_t<0x1> _0x1e4;
    volatile uint32_t OTG_FS_HCINT7; // OTG_FS host channel-7 interrupt register (OTG_FS_HCINT7)
    volatile uint32_t OTG_FS_HCINTMSK7; // OTG_FS host channel-7 mask register (OTG_FS_HCINTMSK7)
    volatile uint32_t OTG_FS_HCTSIZ7; // OTG_FS host channel-7 transfer size register
    reserved_t<0x3> _0x1f4;
    volatile uint32_t OTG_FS_HCCHAR8; // OTG_FS host channel-8 characteristics register
    reserved_t<0x1> _0x204;
    volatile uint32_t OTG_FS_HCINT8; // OTG_FS host channel-8 interrupt register
    volatile uint32_t OTG_FS_HCINTMSK8; // OTG_FS host channel-8 mask register
    volatile uint32_t OTG_FS_HCTSIZ8; // OTG_FS host channel-8 transfer size register
    reserved_t<0x3> _0x214;
    volatile uint32_t OTG_FS_HCCHAR9; // OTG_FS host channel-9 characteristics register
    reserved_t<0x1> _0x224;
    volatile uint32_t OTG_FS_HCINT9; // OTG_FS host channel-9 interrupt register
    volatile uint32_t OTG_FS_HCINTMSK9; // OTG_FS host channel-9 mask register
    volatile uint32_t OTG_FS_HCTSIZ9; // OTG_FS host channel-9 transfer size register
    reserved_t<0x3> _0x234;
    volatile uint32_t OTG_FS_HCCHAR10; // OTG_FS host channel-10 characteristics register
    reserved_t<0x1> _0x244;
    volatile uint32_t OTG_FS_HCINT10; // OTG_FS host channel-10 interrupt register
    volatile uint32_t OTG_FS_HCINTMSK10; // OTG_FS host channel-10 mask register
    volatile uint32_t OTG_FS_HCTSIZ10; // OTG_FS host channel-10 transfer size register
    reserved_t<0x3> _0x254;
    volatile uint32_t OTG_FS_HCCHAR11; // OTG_FS host channel-11 characteristics register
    reserved_t<0x1> _0x264;
    volatile uint32_t OTG_FS_HCINT11; // OTG_FS host channel-11 interrupt register
    volatile uint32_t OTG_FS_HCINTMSK11; // OTG_FS host channel-11 mask register
    volatile uint32_t OTG_FS_HCTSIZ11; // OTG_FS host channel-11 transfer size register

    static constexpr uint32_t OTG_FS_HCFG_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> OTG_FS_HCFG_FSLSPCS; // FS/LS PHY clock select
    static constexpr uint32_t OTG_FS_HCFG_FSLSS = 0x4; // FS- and LS-only support

    static constexpr uint32_t OTG_FS_HFIR_RESET_VALUE = 0xea60; // Reset value
    typedef bit_field_t<0, 0xffff> OTG_FS_HFIR_FRIVL; // Frame interval

    static constexpr uint32_t OTG_FS_HFNUM_RESET_VALUE = 0x3fff; // Reset value
    typedef bit_field_t<0, 0xffff> OTG_FS_HFNUM_FRNUM; // Frame number
    typedef bit_field_t<16, 0xffff> OTG_FS_HFNUM_FTREM; // Frame time remaining


    static constexpr uint32_t OTG_FS_HPTXSTS_RESET_VALUE = 0x80100; // Reset value
    typedef bit_field_t<0, 0xffff> OTG_FS_HPTXSTS_PTXFSAVL; // Periodic transmit data FIFO space available
    typedef bit_field_t<16, 0xff> OTG_FS_HPTXSTS_PTXQSAV; // Periodic transmit request queue space available
    typedef bit_field_t<24, 0xff> OTG_FS_HPTXSTS_PTXQTOP; // Top of the periodic transmit request queue

    static constexpr uint32_t OTG_FS_HAINT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> OTG_FS_HAINT_HAINT; // Channel interrupts

    static constexpr uint32_t OTG_FS_HAINTMSK_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> OTG_FS_HAINTMSK_HAINTM; // Channel interrupt mask


    static constexpr uint32_t OTG_FS_HPRT_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_HPRT_PCSTS = 0x1; // Port connect status
    static constexpr uint32_t OTG_FS_HPRT_PCDET = 0x2; // Port connect detected
    static constexpr uint32_t OTG_FS_HPRT_PENA = 0x4; // Port enable
    static constexpr uint32_t OTG_FS_HPRT_PENCHNG = 0x8; // Port enable/disable change
    static constexpr uint32_t OTG_FS_HPRT_POCA = 0x10; // Port overcurrent active
    static constexpr uint32_t OTG_FS_HPRT_POCCHNG = 0x20; // Port overcurrent change
    static constexpr uint32_t OTG_FS_HPRT_PRES = 0x40; // Port resume
    static constexpr uint32_t OTG_FS_HPRT_PSUSP = 0x80; // Port suspend
    static constexpr uint32_t OTG_FS_HPRT_PRST = 0x100; // Port reset
    typedef bit_field_t<10, 0x3> OTG_FS_HPRT_PLSTS; // Port line status
    static constexpr uint32_t OTG_FS_HPRT_PPWR = 0x1000; // Port power
    typedef bit_field_t<13, 0xf> OTG_FS_HPRT_PTCTL; // Port test control
    typedef bit_field_t<17, 0x3> OTG_FS_HPRT_PSPD; // Port speed


    static constexpr uint32_t OTG_FS_HCCHAR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> OTG_FS_HCCHAR0_MPSIZ; // Maximum packet size
    typedef bit_field_t<11, 0xf> OTG_FS_HCCHAR0_EPNUM; // Endpoint number
    static constexpr uint32_t OTG_FS_HCCHAR0_EPDIR = 0x8000; // Endpoint direction
    static constexpr uint32_t OTG_FS_HCCHAR0_LSDEV = 0x20000; // Low-speed device
    typedef bit_field_t<18, 0x3> OTG_FS_HCCHAR0_EPTYP; // Endpoint type
    typedef bit_field_t<20, 0x3> OTG_FS_HCCHAR0_MCNT; // Multicount
    typedef bit_field_t<22, 0x7f> OTG_FS_HCCHAR0_DAD; // Device address
    static constexpr uint32_t OTG_FS_HCCHAR0_ODDFRM = 0x20000000; // Odd frame
    static constexpr uint32_t OTG_FS_HCCHAR0_CHDIS = 0x40000000; // Channel disable
    static constexpr uint32_t OTG_FS_HCCHAR0_CHENA = 0x80000000; // Channel enable


    static constexpr uint32_t OTG_FS_HCINT0_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_HCINT0_XFRC = 0x1; // Transfer completed
    static constexpr uint32_t OTG_FS_HCINT0_CHH = 0x2; // Channel halted
    static constexpr uint32_t OTG_FS_HCINT0_STALL = 0x8; // STALL response received interrupt
    static constexpr uint32_t OTG_FS_HCINT0_NAK = 0x10; // NAK response received interrupt
    static constexpr uint32_t OTG_FS_HCINT0_ACK = 0x20; // ACK response received/transmitted interrupt
    static constexpr uint32_t OTG_FS_HCINT0_TXERR = 0x80; // Transaction error
    static constexpr uint32_t OTG_FS_HCINT0_BBERR = 0x100; // Babble error
    static constexpr uint32_t OTG_FS_HCINT0_FRMOR = 0x200; // Frame overrun
    static constexpr uint32_t OTG_FS_HCINT0_DTERR = 0x400; // Data toggle error

    static constexpr uint32_t OTG_FS_HCINTMSK0_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_HCINTMSK0_XFRCM = 0x1; // Transfer completed mask
    static constexpr uint32_t OTG_FS_HCINTMSK0_CHHM = 0x2; // Channel halted mask
    static constexpr uint32_t OTG_FS_HCINTMSK0_STALLM = 0x8; // STALL response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK0_NAKM = 0x10; // NAK response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK0_ACKM = 0x20; // ACK response received/transmitted interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK0_NYET = 0x40; // response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK0_TXERRM = 0x80; // Transaction error mask
    static constexpr uint32_t OTG_FS_HCINTMSK0_BBERRM = 0x100; // Babble error mask
    static constexpr uint32_t OTG_FS_HCINTMSK0_FRMORM = 0x200; // Frame overrun mask
    static constexpr uint32_t OTG_FS_HCINTMSK0_DTERRM = 0x400; // Data toggle error mask

    static constexpr uint32_t OTG_FS_HCTSIZ0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> OTG_FS_HCTSIZ0_XFRSIZ; // Transfer size
    typedef bit_field_t<19, 0x3ff> OTG_FS_HCTSIZ0_PKTCNT; // Packet count
    typedef bit_field_t<29, 0x3> OTG_FS_HCTSIZ0_DPID; // Data PID


    static constexpr uint32_t OTG_FS_HCCHAR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> OTG_FS_HCCHAR1_MPSIZ; // Maximum packet size
    typedef bit_field_t<11, 0xf> OTG_FS_HCCHAR1_EPNUM; // Endpoint number
    static constexpr uint32_t OTG_FS_HCCHAR1_EPDIR = 0x8000; // Endpoint direction
    static constexpr uint32_t OTG_FS_HCCHAR1_LSDEV = 0x20000; // Low-speed device
    typedef bit_field_t<18, 0x3> OTG_FS_HCCHAR1_EPTYP; // Endpoint type
    typedef bit_field_t<20, 0x3> OTG_FS_HCCHAR1_MCNT; // Multicount
    typedef bit_field_t<22, 0x7f> OTG_FS_HCCHAR1_DAD; // Device address
    static constexpr uint32_t OTG_FS_HCCHAR1_ODDFRM = 0x20000000; // Odd frame
    static constexpr uint32_t OTG_FS_HCCHAR1_CHDIS = 0x40000000; // Channel disable
    static constexpr uint32_t OTG_FS_HCCHAR1_CHENA = 0x80000000; // Channel enable


    static constexpr uint32_t OTG_FS_HCINT1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_HCINT1_XFRC = 0x1; // Transfer completed
    static constexpr uint32_t OTG_FS_HCINT1_CHH = 0x2; // Channel halted
    static constexpr uint32_t OTG_FS_HCINT1_STALL = 0x8; // STALL response received interrupt
    static constexpr uint32_t OTG_FS_HCINT1_NAK = 0x10; // NAK response received interrupt
    static constexpr uint32_t OTG_FS_HCINT1_ACK = 0x20; // ACK response received/transmitted interrupt
    static constexpr uint32_t OTG_FS_HCINT1_TXERR = 0x80; // Transaction error
    static constexpr uint32_t OTG_FS_HCINT1_BBERR = 0x100; // Babble error
    static constexpr uint32_t OTG_FS_HCINT1_FRMOR = 0x200; // Frame overrun
    static constexpr uint32_t OTG_FS_HCINT1_DTERR = 0x400; // Data toggle error

    static constexpr uint32_t OTG_FS_HCINTMSK1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_HCINTMSK1_XFRCM = 0x1; // Transfer completed mask
    static constexpr uint32_t OTG_FS_HCINTMSK1_CHHM = 0x2; // Channel halted mask
    static constexpr uint32_t OTG_FS_HCINTMSK1_STALLM = 0x8; // STALL response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK1_NAKM = 0x10; // NAK response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK1_ACKM = 0x20; // ACK response received/transmitted interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK1_NYET = 0x40; // response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK1_TXERRM = 0x80; // Transaction error mask
    static constexpr uint32_t OTG_FS_HCINTMSK1_BBERRM = 0x100; // Babble error mask
    static constexpr uint32_t OTG_FS_HCINTMSK1_FRMORM = 0x200; // Frame overrun mask
    static constexpr uint32_t OTG_FS_HCINTMSK1_DTERRM = 0x400; // Data toggle error mask

    static constexpr uint32_t OTG_FS_HCTSIZ1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> OTG_FS_HCTSIZ1_XFRSIZ; // Transfer size
    typedef bit_field_t<19, 0x3ff> OTG_FS_HCTSIZ1_PKTCNT; // Packet count
    typedef bit_field_t<29, 0x3> OTG_FS_HCTSIZ1_DPID; // Data PID


    static constexpr uint32_t OTG_FS_HCCHAR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> OTG_FS_HCCHAR2_MPSIZ; // Maximum packet size
    typedef bit_field_t<11, 0xf> OTG_FS_HCCHAR2_EPNUM; // Endpoint number
    static constexpr uint32_t OTG_FS_HCCHAR2_EPDIR = 0x8000; // Endpoint direction
    static constexpr uint32_t OTG_FS_HCCHAR2_LSDEV = 0x20000; // Low-speed device
    typedef bit_field_t<18, 0x3> OTG_FS_HCCHAR2_EPTYP; // Endpoint type
    typedef bit_field_t<20, 0x3> OTG_FS_HCCHAR2_MCNT; // Multicount
    typedef bit_field_t<22, 0x7f> OTG_FS_HCCHAR2_DAD; // Device address
    static constexpr uint32_t OTG_FS_HCCHAR2_ODDFRM = 0x20000000; // Odd frame
    static constexpr uint32_t OTG_FS_HCCHAR2_CHDIS = 0x40000000; // Channel disable
    static constexpr uint32_t OTG_FS_HCCHAR2_CHENA = 0x80000000; // Channel enable


    static constexpr uint32_t OTG_FS_HCINT2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_HCINT2_XFRC = 0x1; // Transfer completed
    static constexpr uint32_t OTG_FS_HCINT2_CHH = 0x2; // Channel halted
    static constexpr uint32_t OTG_FS_HCINT2_STALL = 0x8; // STALL response received interrupt
    static constexpr uint32_t OTG_FS_HCINT2_NAK = 0x10; // NAK response received interrupt
    static constexpr uint32_t OTG_FS_HCINT2_ACK = 0x20; // ACK response received/transmitted interrupt
    static constexpr uint32_t OTG_FS_HCINT2_TXERR = 0x80; // Transaction error
    static constexpr uint32_t OTG_FS_HCINT2_BBERR = 0x100; // Babble error
    static constexpr uint32_t OTG_FS_HCINT2_FRMOR = 0x200; // Frame overrun
    static constexpr uint32_t OTG_FS_HCINT2_DTERR = 0x400; // Data toggle error

    static constexpr uint32_t OTG_FS_HCINTMSK2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_HCINTMSK2_XFRCM = 0x1; // Transfer completed mask
    static constexpr uint32_t OTG_FS_HCINTMSK2_CHHM = 0x2; // Channel halted mask
    static constexpr uint32_t OTG_FS_HCINTMSK2_STALLM = 0x8; // STALL response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK2_NAKM = 0x10; // NAK response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK2_ACKM = 0x20; // ACK response received/transmitted interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK2_NYET = 0x40; // response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK2_TXERRM = 0x80; // Transaction error mask
    static constexpr uint32_t OTG_FS_HCINTMSK2_BBERRM = 0x100; // Babble error mask
    static constexpr uint32_t OTG_FS_HCINTMSK2_FRMORM = 0x200; // Frame overrun mask
    static constexpr uint32_t OTG_FS_HCINTMSK2_DTERRM = 0x400; // Data toggle error mask

    static constexpr uint32_t OTG_FS_HCTSIZ2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> OTG_FS_HCTSIZ2_XFRSIZ; // Transfer size
    typedef bit_field_t<19, 0x3ff> OTG_FS_HCTSIZ2_PKTCNT; // Packet count
    typedef bit_field_t<29, 0x3> OTG_FS_HCTSIZ2_DPID; // Data PID


    static constexpr uint32_t OTG_FS_HCCHAR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> OTG_FS_HCCHAR3_MPSIZ; // Maximum packet size
    typedef bit_field_t<11, 0xf> OTG_FS_HCCHAR3_EPNUM; // Endpoint number
    static constexpr uint32_t OTG_FS_HCCHAR3_EPDIR = 0x8000; // Endpoint direction
    static constexpr uint32_t OTG_FS_HCCHAR3_LSDEV = 0x20000; // Low-speed device
    typedef bit_field_t<18, 0x3> OTG_FS_HCCHAR3_EPTYP; // Endpoint type
    typedef bit_field_t<20, 0x3> OTG_FS_HCCHAR3_MCNT; // Multicount
    typedef bit_field_t<22, 0x7f> OTG_FS_HCCHAR3_DAD; // Device address
    static constexpr uint32_t OTG_FS_HCCHAR3_ODDFRM = 0x20000000; // Odd frame
    static constexpr uint32_t OTG_FS_HCCHAR3_CHDIS = 0x40000000; // Channel disable
    static constexpr uint32_t OTG_FS_HCCHAR3_CHENA = 0x80000000; // Channel enable


    static constexpr uint32_t OTG_FS_HCINT3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_HCINT3_XFRC = 0x1; // Transfer completed
    static constexpr uint32_t OTG_FS_HCINT3_CHH = 0x2; // Channel halted
    static constexpr uint32_t OTG_FS_HCINT3_STALL = 0x8; // STALL response received interrupt
    static constexpr uint32_t OTG_FS_HCINT3_NAK = 0x10; // NAK response received interrupt
    static constexpr uint32_t OTG_FS_HCINT3_ACK = 0x20; // ACK response received/transmitted interrupt
    static constexpr uint32_t OTG_FS_HCINT3_TXERR = 0x80; // Transaction error
    static constexpr uint32_t OTG_FS_HCINT3_BBERR = 0x100; // Babble error
    static constexpr uint32_t OTG_FS_HCINT3_FRMOR = 0x200; // Frame overrun
    static constexpr uint32_t OTG_FS_HCINT3_DTERR = 0x400; // Data toggle error

    static constexpr uint32_t OTG_FS_HCINTMSK3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_HCINTMSK3_XFRCM = 0x1; // Transfer completed mask
    static constexpr uint32_t OTG_FS_HCINTMSK3_CHHM = 0x2; // Channel halted mask
    static constexpr uint32_t OTG_FS_HCINTMSK3_STALLM = 0x8; // STALL response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK3_NAKM = 0x10; // NAK response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK3_ACKM = 0x20; // ACK response received/transmitted interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK3_NYET = 0x40; // response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK3_TXERRM = 0x80; // Transaction error mask
    static constexpr uint32_t OTG_FS_HCINTMSK3_BBERRM = 0x100; // Babble error mask
    static constexpr uint32_t OTG_FS_HCINTMSK3_FRMORM = 0x200; // Frame overrun mask
    static constexpr uint32_t OTG_FS_HCINTMSK3_DTERRM = 0x400; // Data toggle error mask

    static constexpr uint32_t OTG_FS_HCTSIZ3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> OTG_FS_HCTSIZ3_XFRSIZ; // Transfer size
    typedef bit_field_t<19, 0x3ff> OTG_FS_HCTSIZ3_PKTCNT; // Packet count
    typedef bit_field_t<29, 0x3> OTG_FS_HCTSIZ3_DPID; // Data PID


    static constexpr uint32_t OTG_FS_HCCHAR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> OTG_FS_HCCHAR4_MPSIZ; // Maximum packet size
    typedef bit_field_t<11, 0xf> OTG_FS_HCCHAR4_EPNUM; // Endpoint number
    static constexpr uint32_t OTG_FS_HCCHAR4_EPDIR = 0x8000; // Endpoint direction
    static constexpr uint32_t OTG_FS_HCCHAR4_LSDEV = 0x20000; // Low-speed device
    typedef bit_field_t<18, 0x3> OTG_FS_HCCHAR4_EPTYP; // Endpoint type
    typedef bit_field_t<20, 0x3> OTG_FS_HCCHAR4_MCNT; // Multicount
    typedef bit_field_t<22, 0x7f> OTG_FS_HCCHAR4_DAD; // Device address
    static constexpr uint32_t OTG_FS_HCCHAR4_ODDFRM = 0x20000000; // Odd frame
    static constexpr uint32_t OTG_FS_HCCHAR4_CHDIS = 0x40000000; // Channel disable
    static constexpr uint32_t OTG_FS_HCCHAR4_CHENA = 0x80000000; // Channel enable


    static constexpr uint32_t OTG_FS_HCINT4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_HCINT4_XFRC = 0x1; // Transfer completed
    static constexpr uint32_t OTG_FS_HCINT4_CHH = 0x2; // Channel halted
    static constexpr uint32_t OTG_FS_HCINT4_STALL = 0x8; // STALL response received interrupt
    static constexpr uint32_t OTG_FS_HCINT4_NAK = 0x10; // NAK response received interrupt
    static constexpr uint32_t OTG_FS_HCINT4_ACK = 0x20; // ACK response received/transmitted interrupt
    static constexpr uint32_t OTG_FS_HCINT4_TXERR = 0x80; // Transaction error
    static constexpr uint32_t OTG_FS_HCINT4_BBERR = 0x100; // Babble error
    static constexpr uint32_t OTG_FS_HCINT4_FRMOR = 0x200; // Frame overrun
    static constexpr uint32_t OTG_FS_HCINT4_DTERR = 0x400; // Data toggle error

    static constexpr uint32_t OTG_FS_HCINTMSK4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_HCINTMSK4_XFRCM = 0x1; // Transfer completed mask
    static constexpr uint32_t OTG_FS_HCINTMSK4_CHHM = 0x2; // Channel halted mask
    static constexpr uint32_t OTG_FS_HCINTMSK4_STALLM = 0x8; // STALL response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK4_NAKM = 0x10; // NAK response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK4_ACKM = 0x20; // ACK response received/transmitted interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK4_NYET = 0x40; // response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK4_TXERRM = 0x80; // Transaction error mask
    static constexpr uint32_t OTG_FS_HCINTMSK4_BBERRM = 0x100; // Babble error mask
    static constexpr uint32_t OTG_FS_HCINTMSK4_FRMORM = 0x200; // Frame overrun mask
    static constexpr uint32_t OTG_FS_HCINTMSK4_DTERRM = 0x400; // Data toggle error mask

    static constexpr uint32_t OTG_FS_HCTSIZ4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> OTG_FS_HCTSIZ4_XFRSIZ; // Transfer size
    typedef bit_field_t<19, 0x3ff> OTG_FS_HCTSIZ4_PKTCNT; // Packet count
    typedef bit_field_t<29, 0x3> OTG_FS_HCTSIZ4_DPID; // Data PID


    static constexpr uint32_t OTG_FS_HCCHAR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> OTG_FS_HCCHAR5_MPSIZ; // Maximum packet size
    typedef bit_field_t<11, 0xf> OTG_FS_HCCHAR5_EPNUM; // Endpoint number
    static constexpr uint32_t OTG_FS_HCCHAR5_EPDIR = 0x8000; // Endpoint direction
    static constexpr uint32_t OTG_FS_HCCHAR5_LSDEV = 0x20000; // Low-speed device
    typedef bit_field_t<18, 0x3> OTG_FS_HCCHAR5_EPTYP; // Endpoint type
    typedef bit_field_t<20, 0x3> OTG_FS_HCCHAR5_MCNT; // Multicount
    typedef bit_field_t<22, 0x7f> OTG_FS_HCCHAR5_DAD; // Device address
    static constexpr uint32_t OTG_FS_HCCHAR5_ODDFRM = 0x20000000; // Odd frame
    static constexpr uint32_t OTG_FS_HCCHAR5_CHDIS = 0x40000000; // Channel disable
    static constexpr uint32_t OTG_FS_HCCHAR5_CHENA = 0x80000000; // Channel enable


    static constexpr uint32_t OTG_FS_HCINT5_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_HCINT5_XFRC = 0x1; // Transfer completed
    static constexpr uint32_t OTG_FS_HCINT5_CHH = 0x2; // Channel halted
    static constexpr uint32_t OTG_FS_HCINT5_STALL = 0x8; // STALL response received interrupt
    static constexpr uint32_t OTG_FS_HCINT5_NAK = 0x10; // NAK response received interrupt
    static constexpr uint32_t OTG_FS_HCINT5_ACK = 0x20; // ACK response received/transmitted interrupt
    static constexpr uint32_t OTG_FS_HCINT5_TXERR = 0x80; // Transaction error
    static constexpr uint32_t OTG_FS_HCINT5_BBERR = 0x100; // Babble error
    static constexpr uint32_t OTG_FS_HCINT5_FRMOR = 0x200; // Frame overrun
    static constexpr uint32_t OTG_FS_HCINT5_DTERR = 0x400; // Data toggle error

    static constexpr uint32_t OTG_FS_HCINTMSK5_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_HCINTMSK5_XFRCM = 0x1; // Transfer completed mask
    static constexpr uint32_t OTG_FS_HCINTMSK5_CHHM = 0x2; // Channel halted mask
    static constexpr uint32_t OTG_FS_HCINTMSK5_STALLM = 0x8; // STALL response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK5_NAKM = 0x10; // NAK response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK5_ACKM = 0x20; // ACK response received/transmitted interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK5_NYET = 0x40; // response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK5_TXERRM = 0x80; // Transaction error mask
    static constexpr uint32_t OTG_FS_HCINTMSK5_BBERRM = 0x100; // Babble error mask
    static constexpr uint32_t OTG_FS_HCINTMSK5_FRMORM = 0x200; // Frame overrun mask
    static constexpr uint32_t OTG_FS_HCINTMSK5_DTERRM = 0x400; // Data toggle error mask

    static constexpr uint32_t OTG_FS_HCTSIZ5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> OTG_FS_HCTSIZ5_XFRSIZ; // Transfer size
    typedef bit_field_t<19, 0x3ff> OTG_FS_HCTSIZ5_PKTCNT; // Packet count
    typedef bit_field_t<29, 0x3> OTG_FS_HCTSIZ5_DPID; // Data PID


    static constexpr uint32_t OTG_FS_HCCHAR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> OTG_FS_HCCHAR6_MPSIZ; // Maximum packet size
    typedef bit_field_t<11, 0xf> OTG_FS_HCCHAR6_EPNUM; // Endpoint number
    static constexpr uint32_t OTG_FS_HCCHAR6_EPDIR = 0x8000; // Endpoint direction
    static constexpr uint32_t OTG_FS_HCCHAR6_LSDEV = 0x20000; // Low-speed device
    typedef bit_field_t<18, 0x3> OTG_FS_HCCHAR6_EPTYP; // Endpoint type
    typedef bit_field_t<20, 0x3> OTG_FS_HCCHAR6_MCNT; // Multicount
    typedef bit_field_t<22, 0x7f> OTG_FS_HCCHAR6_DAD; // Device address
    static constexpr uint32_t OTG_FS_HCCHAR6_ODDFRM = 0x20000000; // Odd frame
    static constexpr uint32_t OTG_FS_HCCHAR6_CHDIS = 0x40000000; // Channel disable
    static constexpr uint32_t OTG_FS_HCCHAR6_CHENA = 0x80000000; // Channel enable


    static constexpr uint32_t OTG_FS_HCINT6_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_HCINT6_XFRC = 0x1; // Transfer completed
    static constexpr uint32_t OTG_FS_HCINT6_CHH = 0x2; // Channel halted
    static constexpr uint32_t OTG_FS_HCINT6_STALL = 0x8; // STALL response received interrupt
    static constexpr uint32_t OTG_FS_HCINT6_NAK = 0x10; // NAK response received interrupt
    static constexpr uint32_t OTG_FS_HCINT6_ACK = 0x20; // ACK response received/transmitted interrupt
    static constexpr uint32_t OTG_FS_HCINT6_TXERR = 0x80; // Transaction error
    static constexpr uint32_t OTG_FS_HCINT6_BBERR = 0x100; // Babble error
    static constexpr uint32_t OTG_FS_HCINT6_FRMOR = 0x200; // Frame overrun
    static constexpr uint32_t OTG_FS_HCINT6_DTERR = 0x400; // Data toggle error

    static constexpr uint32_t OTG_FS_HCINTMSK6_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_HCINTMSK6_XFRCM = 0x1; // Transfer completed mask
    static constexpr uint32_t OTG_FS_HCINTMSK6_CHHM = 0x2; // Channel halted mask
    static constexpr uint32_t OTG_FS_HCINTMSK6_STALLM = 0x8; // STALL response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK6_NAKM = 0x10; // NAK response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK6_ACKM = 0x20; // ACK response received/transmitted interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK6_NYET = 0x40; // response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK6_TXERRM = 0x80; // Transaction error mask
    static constexpr uint32_t OTG_FS_HCINTMSK6_BBERRM = 0x100; // Babble error mask
    static constexpr uint32_t OTG_FS_HCINTMSK6_FRMORM = 0x200; // Frame overrun mask
    static constexpr uint32_t OTG_FS_HCINTMSK6_DTERRM = 0x400; // Data toggle error mask

    static constexpr uint32_t OTG_FS_HCTSIZ6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> OTG_FS_HCTSIZ6_XFRSIZ; // Transfer size
    typedef bit_field_t<19, 0x3ff> OTG_FS_HCTSIZ6_PKTCNT; // Packet count
    typedef bit_field_t<29, 0x3> OTG_FS_HCTSIZ6_DPID; // Data PID


    static constexpr uint32_t OTG_FS_HCCHAR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> OTG_FS_HCCHAR7_MPSIZ; // Maximum packet size
    typedef bit_field_t<11, 0xf> OTG_FS_HCCHAR7_EPNUM; // Endpoint number
    static constexpr uint32_t OTG_FS_HCCHAR7_EPDIR = 0x8000; // Endpoint direction
    static constexpr uint32_t OTG_FS_HCCHAR7_LSDEV = 0x20000; // Low-speed device
    typedef bit_field_t<18, 0x3> OTG_FS_HCCHAR7_EPTYP; // Endpoint type
    typedef bit_field_t<20, 0x3> OTG_FS_HCCHAR7_MCNT; // Multicount
    typedef bit_field_t<22, 0x7f> OTG_FS_HCCHAR7_DAD; // Device address
    static constexpr uint32_t OTG_FS_HCCHAR7_ODDFRM = 0x20000000; // Odd frame
    static constexpr uint32_t OTG_FS_HCCHAR7_CHDIS = 0x40000000; // Channel disable
    static constexpr uint32_t OTG_FS_HCCHAR7_CHENA = 0x80000000; // Channel enable


    static constexpr uint32_t OTG_FS_HCINT7_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_HCINT7_XFRC = 0x1; // Transfer completed
    static constexpr uint32_t OTG_FS_HCINT7_CHH = 0x2; // Channel halted
    static constexpr uint32_t OTG_FS_HCINT7_STALL = 0x8; // STALL response received interrupt
    static constexpr uint32_t OTG_FS_HCINT7_NAK = 0x10; // NAK response received interrupt
    static constexpr uint32_t OTG_FS_HCINT7_ACK = 0x20; // ACK response received/transmitted interrupt
    static constexpr uint32_t OTG_FS_HCINT7_TXERR = 0x80; // Transaction error
    static constexpr uint32_t OTG_FS_HCINT7_BBERR = 0x100; // Babble error
    static constexpr uint32_t OTG_FS_HCINT7_FRMOR = 0x200; // Frame overrun
    static constexpr uint32_t OTG_FS_HCINT7_DTERR = 0x400; // Data toggle error

    static constexpr uint32_t OTG_FS_HCINTMSK7_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_HCINTMSK7_XFRCM = 0x1; // Transfer completed mask
    static constexpr uint32_t OTG_FS_HCINTMSK7_CHHM = 0x2; // Channel halted mask
    static constexpr uint32_t OTG_FS_HCINTMSK7_STALLM = 0x8; // STALL response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK7_NAKM = 0x10; // NAK response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK7_ACKM = 0x20; // ACK response received/transmitted interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK7_NYET = 0x40; // response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK7_TXERRM = 0x80; // Transaction error mask
    static constexpr uint32_t OTG_FS_HCINTMSK7_BBERRM = 0x100; // Babble error mask
    static constexpr uint32_t OTG_FS_HCINTMSK7_FRMORM = 0x200; // Frame overrun mask
    static constexpr uint32_t OTG_FS_HCINTMSK7_DTERRM = 0x400; // Data toggle error mask

    static constexpr uint32_t OTG_FS_HCTSIZ7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> OTG_FS_HCTSIZ7_XFRSIZ; // Transfer size
    typedef bit_field_t<19, 0x3ff> OTG_FS_HCTSIZ7_PKTCNT; // Packet count
    typedef bit_field_t<29, 0x3> OTG_FS_HCTSIZ7_DPID; // Data PID


    static constexpr uint32_t OTG_FS_HCCHAR8_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> OTG_FS_HCCHAR8_MPSIZ; // Maximum packet size
    typedef bit_field_t<11, 0xf> OTG_FS_HCCHAR8_EPNUM; // Endpoint number
    static constexpr uint32_t OTG_FS_HCCHAR8_EPDIR = 0x8000; // Endpoint direction
    static constexpr uint32_t OTG_FS_HCCHAR8_LSDEV = 0x20000; // Low-speed device
    typedef bit_field_t<18, 0x3> OTG_FS_HCCHAR8_EPTYP; // Endpoint type
    typedef bit_field_t<20, 0x3> OTG_FS_HCCHAR8_MCNT; // Multicount
    typedef bit_field_t<22, 0x7f> OTG_FS_HCCHAR8_DAD; // Device address
    static constexpr uint32_t OTG_FS_HCCHAR8_ODDFRM = 0x20000000; // Odd frame
    static constexpr uint32_t OTG_FS_HCCHAR8_CHDIS = 0x40000000; // Channel disable
    static constexpr uint32_t OTG_FS_HCCHAR8_CHENA = 0x80000000; // Channel enable


    static constexpr uint32_t OTG_FS_HCINT8_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_HCINT8_XFRC = 0x1; // Transfer completed
    static constexpr uint32_t OTG_FS_HCINT8_CHH = 0x2; // Channel halted
    static constexpr uint32_t OTG_FS_HCINT8_STALL = 0x8; // STALL response received interrupt
    static constexpr uint32_t OTG_FS_HCINT8_NAK = 0x10; // NAK response received interrupt
    static constexpr uint32_t OTG_FS_HCINT8_ACK = 0x20; // ACK response received/transmitted interrupt
    static constexpr uint32_t OTG_FS_HCINT8_TXERR = 0x80; // Transaction error
    static constexpr uint32_t OTG_FS_HCINT8_BBERR = 0x100; // Babble error
    static constexpr uint32_t OTG_FS_HCINT8_FRMOR = 0x200; // Frame overrun
    static constexpr uint32_t OTG_FS_HCINT8_DTERR = 0x400; // Data toggle error

    static constexpr uint32_t OTG_FS_HCINTMSK8_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_HCINTMSK8_XFRCM = 0x1; // Transfer completed mask
    static constexpr uint32_t OTG_FS_HCINTMSK8_CHHM = 0x2; // Channel halted mask
    static constexpr uint32_t OTG_FS_HCINTMSK8_STALLM = 0x8; // STALL response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK8_NAKM = 0x10; // NAK response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK8_ACKM = 0x20; // ACK response received/transmitted interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK8_NYET = 0x40; // response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK8_TXERRM = 0x80; // Transaction error
    static constexpr uint32_t OTG_FS_HCINTMSK8_BBERRM = 0x100; // Babble error mask
    static constexpr uint32_t OTG_FS_HCINTMSK8_FRMORM = 0x200; // Frame overrun mask
    static constexpr uint32_t OTG_FS_HCINTMSK8_DTERRM = 0x400; // Data toggle error mask

    static constexpr uint32_t OTG_FS_HCTSIZ8_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> OTG_FS_HCTSIZ8_XFRSIZ; // Transfer size
    typedef bit_field_t<19, 0x3ff> OTG_FS_HCTSIZ8_PKTCNT; // Packet count
    typedef bit_field_t<29, 0x3> OTG_FS_HCTSIZ8_DPID; // Data PID


    static constexpr uint32_t OTG_FS_HCCHAR9_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> OTG_FS_HCCHAR9_MPSIZ; // Maximum packet size
    typedef bit_field_t<11, 0xf> OTG_FS_HCCHAR9_EPNUM; // Endpoint number
    static constexpr uint32_t OTG_FS_HCCHAR9_EPDIR = 0x8000; // Endpoint direction
    static constexpr uint32_t OTG_FS_HCCHAR9_LSDEV = 0x20000; // Low-speed device
    typedef bit_field_t<18, 0x3> OTG_FS_HCCHAR9_EPTYP; // Endpoint type
    typedef bit_field_t<20, 0x3> OTG_FS_HCCHAR9_MCNT; // Multicount
    typedef bit_field_t<22, 0x7f> OTG_FS_HCCHAR9_DAD; // Device address
    static constexpr uint32_t OTG_FS_HCCHAR9_ODDFRM = 0x20000000; // Odd frame
    static constexpr uint32_t OTG_FS_HCCHAR9_CHDIS = 0x40000000; // Channel disable
    static constexpr uint32_t OTG_FS_HCCHAR9_CHENA = 0x80000000; // Channel enable


    static constexpr uint32_t OTG_FS_HCINT9_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_HCINT9_XFRC = 0x1; // Transfer completed
    static constexpr uint32_t OTG_FS_HCINT9_CHH = 0x2; // Channel halted
    static constexpr uint32_t OTG_FS_HCINT9_STALL = 0x8; // STALL response received interrupt
    static constexpr uint32_t OTG_FS_HCINT9_NAK = 0x10; // NAK response received interrupt
    static constexpr uint32_t OTG_FS_HCINT9_ACK = 0x20; // ACK response received/transmitted interrupt
    static constexpr uint32_t OTG_FS_HCINT9_TXERR = 0x80; // Transaction error
    static constexpr uint32_t OTG_FS_HCINT9_BBERR = 0x100; // Babble error
    static constexpr uint32_t OTG_FS_HCINT9_FRMOR = 0x200; // Frame overrun
    static constexpr uint32_t OTG_FS_HCINT9_DTERR = 0x400; // Data toggle error

    static constexpr uint32_t OTG_FS_HCINTMSK9_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_HCINTMSK9_XFRCM = 0x1; // Transfer completed mask
    static constexpr uint32_t OTG_FS_HCINTMSK9_CHHM = 0x2; // Channel halted mask
    static constexpr uint32_t OTG_FS_HCINTMSK9_STALLM = 0x8; // STALL response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK9_NAKM = 0x10; // NAK response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK9_ACKM = 0x20; // ACK response received/transmitted interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK9_NYET = 0x40; // response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK9_TXERRM = 0x80; // Transaction error mask
    static constexpr uint32_t OTG_FS_HCINTMSK9_BBERRM = 0x100; // Babble error mask
    static constexpr uint32_t OTG_FS_HCINTMSK9_FRMORM = 0x200; // Frame overrun mask
    static constexpr uint32_t OTG_FS_HCINTMSK9_DTERRM = 0x400; // Data toggle error mask

    static constexpr uint32_t OTG_FS_HCTSIZ9_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> OTG_FS_HCTSIZ9_XFRSIZ; // Transfer size
    typedef bit_field_t<19, 0x3ff> OTG_FS_HCTSIZ9_PKTCNT; // Packet count
    typedef bit_field_t<29, 0x3> OTG_FS_HCTSIZ9_DPID; // Data PID


    static constexpr uint32_t OTG_FS_HCCHAR10_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> OTG_FS_HCCHAR10_MPSIZ; // Maximum packet size
    typedef bit_field_t<11, 0xf> OTG_FS_HCCHAR10_EPNUM; // Endpoint number
    static constexpr uint32_t OTG_FS_HCCHAR10_EPDIR = 0x8000; // Endpoint direction
    static constexpr uint32_t OTG_FS_HCCHAR10_LSDEV = 0x20000; // Low-speed device
    typedef bit_field_t<18, 0x3> OTG_FS_HCCHAR10_EPTYP; // Endpoint type
    typedef bit_field_t<20, 0x3> OTG_FS_HCCHAR10_MCNT; // Multicount
    typedef bit_field_t<22, 0x7f> OTG_FS_HCCHAR10_DAD; // Device address
    static constexpr uint32_t OTG_FS_HCCHAR10_ODDFRM = 0x20000000; // Odd frame
    static constexpr uint32_t OTG_FS_HCCHAR10_CHDIS = 0x40000000; // Channel disable
    static constexpr uint32_t OTG_FS_HCCHAR10_CHENA = 0x80000000; // Channel enable


    static constexpr uint32_t OTG_FS_HCINT10_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_HCINT10_XFRC = 0x1; // Transfer completed
    static constexpr uint32_t OTG_FS_HCINT10_CHH = 0x2; // Channel halted
    static constexpr uint32_t OTG_FS_HCINT10_STALL = 0x8; // STALL response received interrupt
    static constexpr uint32_t OTG_FS_HCINT10_NAK = 0x10; // NAK response received interrupt
    static constexpr uint32_t OTG_FS_HCINT10_ACK = 0x20; // ACK response received/transmitted interrupt
    static constexpr uint32_t OTG_FS_HCINT10_TXERR = 0x80; // Transaction error
    static constexpr uint32_t OTG_FS_HCINT10_BBERR = 0x100; // Babble error
    static constexpr uint32_t OTG_FS_HCINT10_FRMOR = 0x200; // Frame overrun
    static constexpr uint32_t OTG_FS_HCINT10_DTERR = 0x400; // Data toggle error

    static constexpr uint32_t OTG_FS_HCINTMSK10_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_HCINTMSK10_XFRCM = 0x1; // Transfer completed mask
    static constexpr uint32_t OTG_FS_HCINTMSK10_CHHM = 0x2; // Channel halted mask
    static constexpr uint32_t OTG_FS_HCINTMSK10_STALLM = 0x8; // STALL response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK10_NAKM = 0x10; // NAK response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK10_ACKM = 0x20; // ACK response received/transmitted interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK10_NYET = 0x40; // response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK10_TXERRM = 0x80; // Transaction error mask
    static constexpr uint32_t OTG_FS_HCINTMSK10_BBERRM = 0x100; // Babble error mask
    static constexpr uint32_t OTG_FS_HCINTMSK10_FRMORM = 0x200; // Frame overrun mask
    static constexpr uint32_t OTG_FS_HCINTMSK10_DTERRM = 0x400; // Data toggle error mask

    static constexpr uint32_t OTG_FS_HCTSIZ10_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> OTG_FS_HCTSIZ10_XFRSIZ; // Transfer size
    typedef bit_field_t<19, 0x3ff> OTG_FS_HCTSIZ10_PKTCNT; // Packet count
    typedef bit_field_t<29, 0x3> OTG_FS_HCTSIZ10_DPID; // Data PID


    static constexpr uint32_t OTG_FS_HCCHAR11_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> OTG_FS_HCCHAR11_MPSIZ; // Maximum packet size
    typedef bit_field_t<11, 0xf> OTG_FS_HCCHAR11_EPNUM; // Endpoint number
    static constexpr uint32_t OTG_FS_HCCHAR11_EPDIR = 0x8000; // Endpoint direction
    static constexpr uint32_t OTG_FS_HCCHAR11_LSDEV = 0x20000; // Low-speed device
    typedef bit_field_t<18, 0x3> OTG_FS_HCCHAR11_EPTYP; // Endpoint type
    typedef bit_field_t<20, 0x3> OTG_FS_HCCHAR11_MCNT; // Multicount
    typedef bit_field_t<22, 0x7f> OTG_FS_HCCHAR11_DAD; // Device address
    static constexpr uint32_t OTG_FS_HCCHAR11_ODDFRM = 0x20000000; // Odd frame
    static constexpr uint32_t OTG_FS_HCCHAR11_CHDIS = 0x40000000; // Channel disable
    static constexpr uint32_t OTG_FS_HCCHAR11_CHENA = 0x80000000; // Channel enable


    static constexpr uint32_t OTG_FS_HCINT11_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_HCINT11_XFRC = 0x1; // Transfer completed
    static constexpr uint32_t OTG_FS_HCINT11_CHH = 0x2; // Channel halted
    static constexpr uint32_t OTG_FS_HCINT11_STALL = 0x8; // STALL response received interrupt
    static constexpr uint32_t OTG_FS_HCINT11_NAK = 0x10; // NAK response received interrupt
    static constexpr uint32_t OTG_FS_HCINT11_ACK = 0x20; // ACK response received/transmitted interrupt
    static constexpr uint32_t OTG_FS_HCINT11_TXERR = 0x80; // Transaction error
    static constexpr uint32_t OTG_FS_HCINT11_BBERR = 0x100; // Babble error
    static constexpr uint32_t OTG_FS_HCINT11_FRMOR = 0x200; // Frame overrun
    static constexpr uint32_t OTG_FS_HCINT11_DTERR = 0x400; // Data toggle error

    static constexpr uint32_t OTG_FS_HCINTMSK11_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_HCINTMSK11_XFRCM = 0x1; // Transfer completed mask
    static constexpr uint32_t OTG_FS_HCINTMSK11_CHHM = 0x2; // Channel halted mask
    static constexpr uint32_t OTG_FS_HCINTMSK11_STALLM = 0x8; // STALL response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK11_NAKM = 0x10; // NAK response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK11_ACKM = 0x20; // ACK response received/transmitted interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK11_NYET = 0x40; // response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK11_TXERRM = 0x80; // Transaction error mask
    static constexpr uint32_t OTG_FS_HCINTMSK11_BBERRM = 0x100; // Babble error mask
    static constexpr uint32_t OTG_FS_HCINTMSK11_FRMORM = 0x200; // Frame overrun mask
    static constexpr uint32_t OTG_FS_HCINTMSK11_DTERRM = 0x400; // Data toggle error mask

    static constexpr uint32_t OTG_FS_HCTSIZ11_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> OTG_FS_HCTSIZ11_XFRSIZ; // Transfer size
    typedef bit_field_t<19, 0x3ff> OTG_FS_HCTSIZ11_PKTCNT; // Packet count
    typedef bit_field_t<29, 0x3> OTG_FS_HCTSIZ11_DPID; // Data PID
};

// OTG_FS_HOST: USB on the go full speed

struct stm32f745_otg_fs_host_t
{
    volatile uint32_t OTG_FS_HCFG; // OTG_FS host configuration register (OTG_FS_HCFG)
    volatile uint32_t OTG_FS_HFIR; // OTG_FS Host frame interval register
    volatile uint32_t OTG_FS_HFNUM; // OTG_FS host frame number/frame time remaining register (OTG_FS_HFNUM)
    reserved_t<0x1> _0xc;
    volatile uint32_t OTG_FS_HPTXSTS; // OTG_FS_Host periodic transmit FIFO/queue status register (OTG_FS_HPTXSTS)
    volatile uint32_t OTG_FS_HAINT; // OTG_FS Host all channels interrupt register
    volatile uint32_t OTG_FS_HAINTMSK; // OTG_FS host all channels interrupt mask register
    reserved_t<0x9> _0x1c;
    volatile uint32_t OTG_FS_HPRT; // OTG_FS host port control and status register (OTG_FS_HPRT)
    reserved_t<0x2f> _0x44;
    volatile uint32_t OTG_FS_HCCHAR0; // OTG_FS host channel-0 characteristics register (OTG_FS_HCCHAR0)
    reserved_t<0x1> _0x104;
    volatile uint32_t OTG_FS_HCINT0; // OTG_FS host channel-0 interrupt register (OTG_FS_HCINT0)
    volatile uint32_t OTG_FS_HCINTMSK0; // OTG_FS host channel-0 mask register (OTG_FS_HCINTMSK0)
    volatile uint32_t OTG_FS_HCTSIZ0; // OTG_FS host channel-0 transfer size register
    reserved_t<0x3> _0x114;
    volatile uint32_t OTG_FS_HCCHAR1; // OTG_FS host channel-1 characteristics register (OTG_FS_HCCHAR1)
    reserved_t<0x1> _0x124;
    volatile uint32_t OTG_FS_HCINT1; // OTG_FS host channel-1 interrupt register (OTG_FS_HCINT1)
    volatile uint32_t OTG_FS_HCINTMSK1; // OTG_FS host channel-1 mask register (OTG_FS_HCINTMSK1)
    volatile uint32_t OTG_FS_HCTSIZ1; // OTG_FS host channel-1 transfer size register
    reserved_t<0x3> _0x134;
    volatile uint32_t OTG_FS_HCCHAR2; // OTG_FS host channel-2 characteristics register (OTG_FS_HCCHAR2)
    reserved_t<0x1> _0x144;
    volatile uint32_t OTG_FS_HCINT2; // OTG_FS host channel-2 interrupt register (OTG_FS_HCINT2)
    volatile uint32_t OTG_FS_HCINTMSK2; // OTG_FS host channel-2 mask register (OTG_FS_HCINTMSK2)
    volatile uint32_t OTG_FS_HCTSIZ2; // OTG_FS host channel-2 transfer size register
    reserved_t<0x3> _0x154;
    volatile uint32_t OTG_FS_HCCHAR3; // OTG_FS host channel-3 characteristics register (OTG_FS_HCCHAR3)
    reserved_t<0x1> _0x164;
    volatile uint32_t OTG_FS_HCINT3; // OTG_FS host channel-3 interrupt register (OTG_FS_HCINT3)
    volatile uint32_t OTG_FS_HCINTMSK3; // OTG_FS host channel-3 mask register (OTG_FS_HCINTMSK3)
    volatile uint32_t OTG_FS_HCTSIZ3; // OTG_FS host channel-3 transfer size register
    reserved_t<0x3> _0x174;
    volatile uint32_t OTG_FS_HCCHAR4; // OTG_FS host channel-4 characteristics register (OTG_FS_HCCHAR4)
    reserved_t<0x1> _0x184;
    volatile uint32_t OTG_FS_HCINT4; // OTG_FS host channel-4 interrupt register (OTG_FS_HCINT4)
    volatile uint32_t OTG_FS_HCINTMSK4; // OTG_FS host channel-4 mask register (OTG_FS_HCINTMSK4)
    volatile uint32_t OTG_FS_HCTSIZ4; // OTG_FS host channel-x transfer size register
    reserved_t<0x3> _0x194;
    volatile uint32_t OTG_FS_HCCHAR5; // OTG_FS host channel-5 characteristics register (OTG_FS_HCCHAR5)
    reserved_t<0x1> _0x1a4;
    volatile uint32_t OTG_FS_HCINT5; // OTG_FS host channel-5 interrupt register (OTG_FS_HCINT5)
    volatile uint32_t OTG_FS_HCINTMSK5; // OTG_FS host channel-5 mask register (OTG_FS_HCINTMSK5)
    volatile uint32_t OTG_FS_HCTSIZ5; // OTG_FS host channel-5 transfer size register
    reserved_t<0x3> _0x1b4;
    volatile uint32_t OTG_FS_HCCHAR6; // OTG_FS host channel-6 characteristics register (OTG_FS_HCCHAR6)
    reserved_t<0x1> _0x1c4;
    volatile uint32_t OTG_FS_HCINT6; // OTG_FS host channel-6 interrupt register (OTG_FS_HCINT6)
    volatile uint32_t OTG_FS_HCINTMSK6; // OTG_FS host channel-6 mask register (OTG_FS_HCINTMSK6)
    volatile uint32_t OTG_FS_HCTSIZ6; // OTG_FS host channel-6 transfer size register
    reserved_t<0x3> _0x1d4;
    volatile uint32_t OTG_FS_HCCHAR7; // OTG_FS host channel-7 characteristics register (OTG_FS_HCCHAR7)
    reserved_t<0x1> _0x1e4;
    volatile uint32_t OTG_FS_HCINT7; // OTG_FS host channel-7 interrupt register (OTG_FS_HCINT7)
    volatile uint32_t OTG_FS_HCINTMSK7; // OTG_FS host channel-7 mask register (OTG_FS_HCINTMSK7)
    volatile uint32_t OTG_FS_HCTSIZ7; // OTG_FS host channel-7 transfer size register
    volatile uint32_t OTG_FS_HCCHAR8; // OTG_FS host channel-8 characteristics register
    volatile uint32_t OTG_FS_HCINT8; // OTG_FS host channel-8 interrupt register
    volatile uint32_t OTG_FS_HCINTMSK8; // OTG_FS host channel-8 mask register
    volatile uint32_t OTG_FS_HCTSIZ8; // OTG_FS host channel-8 transfer size register
    volatile uint32_t OTG_FS_HCCHAR9; // OTG_FS host channel-9 characteristics register
    volatile uint32_t OTG_FS_HCINT9; // OTG_FS host channel-9 interrupt register
    volatile uint32_t OTG_FS_HCINTMSK9; // OTG_FS host channel-9 mask register
    volatile uint32_t OTG_FS_HCTSIZ9; // OTG_FS host channel-9 transfer size register
    volatile uint32_t OTG_FS_HCCHAR10; // OTG_FS host channel-10 characteristics register
    volatile uint32_t OTG_FS_HCINT10; // OTG_FS host channel-10 interrupt register
    volatile uint32_t OTG_FS_HCINTMSK10; // OTG_FS host channel-10 mask register
    volatile uint32_t OTG_FS_HCTSIZ10; // OTG_FS host channel-10 transfer size register
    volatile uint32_t OTG_FS_HCCHAR11; // OTG_FS host channel-11 characteristics register
    volatile uint32_t OTG_FS_HCINT11; // OTG_FS host channel-11 interrupt register
    volatile uint32_t OTG_FS_HCINTMSK11; // OTG_FS host channel-11 mask register
    volatile uint32_t OTG_FS_HCTSIZ11; // OTG_FS host channel-11 transfer size register

    static constexpr uint32_t OTG_FS_HCFG_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x3> OTG_FS_HCFG_FSLSPCS; // FS/LS PHY clock select
    static constexpr uint32_t OTG_FS_HCFG_FSLSS = 0x4; // FS- and LS-only support

    static constexpr uint32_t OTG_FS_HFIR_RESET_VALUE = 0xea60; // Reset value
    typedef bit_field_t<0, 0xffff> OTG_FS_HFIR_FRIVL; // Frame interval

    static constexpr uint32_t OTG_FS_HFNUM_RESET_VALUE = 0x3fff; // Reset value
    typedef bit_field_t<0, 0xffff> OTG_FS_HFNUM_FRNUM; // Frame number
    typedef bit_field_t<16, 0xffff> OTG_FS_HFNUM_FTREM; // Frame time remaining


    static constexpr uint32_t OTG_FS_HPTXSTS_RESET_VALUE = 0x80100; // Reset value
    typedef bit_field_t<0, 0xffff> OTG_FS_HPTXSTS_PTXFSAVL; // Periodic transmit data FIFO space available
    typedef bit_field_t<16, 0xff> OTG_FS_HPTXSTS_PTXQSAV; // Periodic transmit request queue space available
    typedef bit_field_t<24, 0xff> OTG_FS_HPTXSTS_PTXQTOP; // Top of the periodic transmit request queue

    static constexpr uint32_t OTG_FS_HAINT_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> OTG_FS_HAINT_HAINT; // Channel interrupts

    static constexpr uint32_t OTG_FS_HAINTMSK_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0xffff> OTG_FS_HAINTMSK_HAINTM; // Channel interrupt mask


    static constexpr uint32_t OTG_FS_HPRT_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_HPRT_PCSTS = 0x1; // Port connect status
    static constexpr uint32_t OTG_FS_HPRT_PCDET = 0x2; // Port connect detected
    static constexpr uint32_t OTG_FS_HPRT_PENA = 0x4; // Port enable
    static constexpr uint32_t OTG_FS_HPRT_PENCHNG = 0x8; // Port enable/disable change
    static constexpr uint32_t OTG_FS_HPRT_POCA = 0x10; // Port overcurrent active
    static constexpr uint32_t OTG_FS_HPRT_POCCHNG = 0x20; // Port overcurrent change
    static constexpr uint32_t OTG_FS_HPRT_PRES = 0x40; // Port resume
    static constexpr uint32_t OTG_FS_HPRT_PSUSP = 0x80; // Port suspend
    static constexpr uint32_t OTG_FS_HPRT_PRST = 0x100; // Port reset
    typedef bit_field_t<10, 0x3> OTG_FS_HPRT_PLSTS; // Port line status
    static constexpr uint32_t OTG_FS_HPRT_PPWR = 0x1000; // Port power
    typedef bit_field_t<13, 0xf> OTG_FS_HPRT_PTCTL; // Port test control
    typedef bit_field_t<17, 0x3> OTG_FS_HPRT_PSPD; // Port speed


    static constexpr uint32_t OTG_FS_HCCHAR0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> OTG_FS_HCCHAR0_MPSIZ; // Maximum packet size
    typedef bit_field_t<11, 0xf> OTG_FS_HCCHAR0_EPNUM; // Endpoint number
    static constexpr uint32_t OTG_FS_HCCHAR0_EPDIR = 0x8000; // Endpoint direction
    static constexpr uint32_t OTG_FS_HCCHAR0_LSDEV = 0x20000; // Low-speed device
    typedef bit_field_t<18, 0x3> OTG_FS_HCCHAR0_EPTYP; // Endpoint type
    typedef bit_field_t<20, 0x3> OTG_FS_HCCHAR0_MCNT; // Multicount
    typedef bit_field_t<22, 0x7f> OTG_FS_HCCHAR0_DAD; // Device address
    static constexpr uint32_t OTG_FS_HCCHAR0_ODDFRM = 0x20000000; // Odd frame
    static constexpr uint32_t OTG_FS_HCCHAR0_CHDIS = 0x40000000; // Channel disable
    static constexpr uint32_t OTG_FS_HCCHAR0_CHENA = 0x80000000; // Channel enable


    static constexpr uint32_t OTG_FS_HCINT0_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_HCINT0_XFRC = 0x1; // Transfer completed
    static constexpr uint32_t OTG_FS_HCINT0_CHH = 0x2; // Channel halted
    static constexpr uint32_t OTG_FS_HCINT0_STALL = 0x8; // STALL response received interrupt
    static constexpr uint32_t OTG_FS_HCINT0_NAK = 0x10; // NAK response received interrupt
    static constexpr uint32_t OTG_FS_HCINT0_ACK = 0x20; // ACK response received/transmitted interrupt
    static constexpr uint32_t OTG_FS_HCINT0_TXERR = 0x80; // Transaction error
    static constexpr uint32_t OTG_FS_HCINT0_BBERR = 0x100; // Babble error
    static constexpr uint32_t OTG_FS_HCINT0_FRMOR = 0x200; // Frame overrun
    static constexpr uint32_t OTG_FS_HCINT0_DTERR = 0x400; // Data toggle error

    static constexpr uint32_t OTG_FS_HCINTMSK0_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_HCINTMSK0_XFRCM = 0x1; // Transfer completed mask
    static constexpr uint32_t OTG_FS_HCINTMSK0_CHHM = 0x2; // Channel halted mask
    static constexpr uint32_t OTG_FS_HCINTMSK0_STALLM = 0x8; // STALL response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK0_NAKM = 0x10; // NAK response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK0_ACKM = 0x20; // ACK response received/transmitted interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK0_NYET = 0x40; // response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK0_TXERRM = 0x80; // Transaction error mask
    static constexpr uint32_t OTG_FS_HCINTMSK0_BBERRM = 0x100; // Babble error mask
    static constexpr uint32_t OTG_FS_HCINTMSK0_FRMORM = 0x200; // Frame overrun mask
    static constexpr uint32_t OTG_FS_HCINTMSK0_DTERRM = 0x400; // Data toggle error mask

    static constexpr uint32_t OTG_FS_HCTSIZ0_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> OTG_FS_HCTSIZ0_XFRSIZ; // Transfer size
    typedef bit_field_t<19, 0x3ff> OTG_FS_HCTSIZ0_PKTCNT; // Packet count
    typedef bit_field_t<29, 0x3> OTG_FS_HCTSIZ0_DPID; // Data PID


    static constexpr uint32_t OTG_FS_HCCHAR1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> OTG_FS_HCCHAR1_MPSIZ; // Maximum packet size
    typedef bit_field_t<11, 0xf> OTG_FS_HCCHAR1_EPNUM; // Endpoint number
    static constexpr uint32_t OTG_FS_HCCHAR1_EPDIR = 0x8000; // Endpoint direction
    static constexpr uint32_t OTG_FS_HCCHAR1_LSDEV = 0x20000; // Low-speed device
    typedef bit_field_t<18, 0x3> OTG_FS_HCCHAR1_EPTYP; // Endpoint type
    typedef bit_field_t<20, 0x3> OTG_FS_HCCHAR1_MCNT; // Multicount
    typedef bit_field_t<22, 0x7f> OTG_FS_HCCHAR1_DAD; // Device address
    static constexpr uint32_t OTG_FS_HCCHAR1_ODDFRM = 0x20000000; // Odd frame
    static constexpr uint32_t OTG_FS_HCCHAR1_CHDIS = 0x40000000; // Channel disable
    static constexpr uint32_t OTG_FS_HCCHAR1_CHENA = 0x80000000; // Channel enable


    static constexpr uint32_t OTG_FS_HCINT1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_HCINT1_XFRC = 0x1; // Transfer completed
    static constexpr uint32_t OTG_FS_HCINT1_CHH = 0x2; // Channel halted
    static constexpr uint32_t OTG_FS_HCINT1_STALL = 0x8; // STALL response received interrupt
    static constexpr uint32_t OTG_FS_HCINT1_NAK = 0x10; // NAK response received interrupt
    static constexpr uint32_t OTG_FS_HCINT1_ACK = 0x20; // ACK response received/transmitted interrupt
    static constexpr uint32_t OTG_FS_HCINT1_TXERR = 0x80; // Transaction error
    static constexpr uint32_t OTG_FS_HCINT1_BBERR = 0x100; // Babble error
    static constexpr uint32_t OTG_FS_HCINT1_FRMOR = 0x200; // Frame overrun
    static constexpr uint32_t OTG_FS_HCINT1_DTERR = 0x400; // Data toggle error

    static constexpr uint32_t OTG_FS_HCINTMSK1_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_HCINTMSK1_XFRCM = 0x1; // Transfer completed mask
    static constexpr uint32_t OTG_FS_HCINTMSK1_CHHM = 0x2; // Channel halted mask
    static constexpr uint32_t OTG_FS_HCINTMSK1_STALLM = 0x8; // STALL response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK1_NAKM = 0x10; // NAK response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK1_ACKM = 0x20; // ACK response received/transmitted interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK1_NYET = 0x40; // response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK1_TXERRM = 0x80; // Transaction error mask
    static constexpr uint32_t OTG_FS_HCINTMSK1_BBERRM = 0x100; // Babble error mask
    static constexpr uint32_t OTG_FS_HCINTMSK1_FRMORM = 0x200; // Frame overrun mask
    static constexpr uint32_t OTG_FS_HCINTMSK1_DTERRM = 0x400; // Data toggle error mask

    static constexpr uint32_t OTG_FS_HCTSIZ1_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> OTG_FS_HCTSIZ1_XFRSIZ; // Transfer size
    typedef bit_field_t<19, 0x3ff> OTG_FS_HCTSIZ1_PKTCNT; // Packet count
    typedef bit_field_t<29, 0x3> OTG_FS_HCTSIZ1_DPID; // Data PID


    static constexpr uint32_t OTG_FS_HCCHAR2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> OTG_FS_HCCHAR2_MPSIZ; // Maximum packet size
    typedef bit_field_t<11, 0xf> OTG_FS_HCCHAR2_EPNUM; // Endpoint number
    static constexpr uint32_t OTG_FS_HCCHAR2_EPDIR = 0x8000; // Endpoint direction
    static constexpr uint32_t OTG_FS_HCCHAR2_LSDEV = 0x20000; // Low-speed device
    typedef bit_field_t<18, 0x3> OTG_FS_HCCHAR2_EPTYP; // Endpoint type
    typedef bit_field_t<20, 0x3> OTG_FS_HCCHAR2_MCNT; // Multicount
    typedef bit_field_t<22, 0x7f> OTG_FS_HCCHAR2_DAD; // Device address
    static constexpr uint32_t OTG_FS_HCCHAR2_ODDFRM = 0x20000000; // Odd frame
    static constexpr uint32_t OTG_FS_HCCHAR2_CHDIS = 0x40000000; // Channel disable
    static constexpr uint32_t OTG_FS_HCCHAR2_CHENA = 0x80000000; // Channel enable


    static constexpr uint32_t OTG_FS_HCINT2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_HCINT2_XFRC = 0x1; // Transfer completed
    static constexpr uint32_t OTG_FS_HCINT2_CHH = 0x2; // Channel halted
    static constexpr uint32_t OTG_FS_HCINT2_STALL = 0x8; // STALL response received interrupt
    static constexpr uint32_t OTG_FS_HCINT2_NAK = 0x10; // NAK response received interrupt
    static constexpr uint32_t OTG_FS_HCINT2_ACK = 0x20; // ACK response received/transmitted interrupt
    static constexpr uint32_t OTG_FS_HCINT2_TXERR = 0x80; // Transaction error
    static constexpr uint32_t OTG_FS_HCINT2_BBERR = 0x100; // Babble error
    static constexpr uint32_t OTG_FS_HCINT2_FRMOR = 0x200; // Frame overrun
    static constexpr uint32_t OTG_FS_HCINT2_DTERR = 0x400; // Data toggle error

    static constexpr uint32_t OTG_FS_HCINTMSK2_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_HCINTMSK2_XFRCM = 0x1; // Transfer completed mask
    static constexpr uint32_t OTG_FS_HCINTMSK2_CHHM = 0x2; // Channel halted mask
    static constexpr uint32_t OTG_FS_HCINTMSK2_STALLM = 0x8; // STALL response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK2_NAKM = 0x10; // NAK response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK2_ACKM = 0x20; // ACK response received/transmitted interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK2_NYET = 0x40; // response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK2_TXERRM = 0x80; // Transaction error mask
    static constexpr uint32_t OTG_FS_HCINTMSK2_BBERRM = 0x100; // Babble error mask
    static constexpr uint32_t OTG_FS_HCINTMSK2_FRMORM = 0x200; // Frame overrun mask
    static constexpr uint32_t OTG_FS_HCINTMSK2_DTERRM = 0x400; // Data toggle error mask

    static constexpr uint32_t OTG_FS_HCTSIZ2_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> OTG_FS_HCTSIZ2_XFRSIZ; // Transfer size
    typedef bit_field_t<19, 0x3ff> OTG_FS_HCTSIZ2_PKTCNT; // Packet count
    typedef bit_field_t<29, 0x3> OTG_FS_HCTSIZ2_DPID; // Data PID


    static constexpr uint32_t OTG_FS_HCCHAR3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> OTG_FS_HCCHAR3_MPSIZ; // Maximum packet size
    typedef bit_field_t<11, 0xf> OTG_FS_HCCHAR3_EPNUM; // Endpoint number
    static constexpr uint32_t OTG_FS_HCCHAR3_EPDIR = 0x8000; // Endpoint direction
    static constexpr uint32_t OTG_FS_HCCHAR3_LSDEV = 0x20000; // Low-speed device
    typedef bit_field_t<18, 0x3> OTG_FS_HCCHAR3_EPTYP; // Endpoint type
    typedef bit_field_t<20, 0x3> OTG_FS_HCCHAR3_MCNT; // Multicount
    typedef bit_field_t<22, 0x7f> OTG_FS_HCCHAR3_DAD; // Device address
    static constexpr uint32_t OTG_FS_HCCHAR3_ODDFRM = 0x20000000; // Odd frame
    static constexpr uint32_t OTG_FS_HCCHAR3_CHDIS = 0x40000000; // Channel disable
    static constexpr uint32_t OTG_FS_HCCHAR3_CHENA = 0x80000000; // Channel enable


    static constexpr uint32_t OTG_FS_HCINT3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_HCINT3_XFRC = 0x1; // Transfer completed
    static constexpr uint32_t OTG_FS_HCINT3_CHH = 0x2; // Channel halted
    static constexpr uint32_t OTG_FS_HCINT3_STALL = 0x8; // STALL response received interrupt
    static constexpr uint32_t OTG_FS_HCINT3_NAK = 0x10; // NAK response received interrupt
    static constexpr uint32_t OTG_FS_HCINT3_ACK = 0x20; // ACK response received/transmitted interrupt
    static constexpr uint32_t OTG_FS_HCINT3_TXERR = 0x80; // Transaction error
    static constexpr uint32_t OTG_FS_HCINT3_BBERR = 0x100; // Babble error
    static constexpr uint32_t OTG_FS_HCINT3_FRMOR = 0x200; // Frame overrun
    static constexpr uint32_t OTG_FS_HCINT3_DTERR = 0x400; // Data toggle error

    static constexpr uint32_t OTG_FS_HCINTMSK3_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_HCINTMSK3_XFRCM = 0x1; // Transfer completed mask
    static constexpr uint32_t OTG_FS_HCINTMSK3_CHHM = 0x2; // Channel halted mask
    static constexpr uint32_t OTG_FS_HCINTMSK3_STALLM = 0x8; // STALL response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK3_NAKM = 0x10; // NAK response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK3_ACKM = 0x20; // ACK response received/transmitted interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK3_NYET = 0x40; // response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK3_TXERRM = 0x80; // Transaction error mask
    static constexpr uint32_t OTG_FS_HCINTMSK3_BBERRM = 0x100; // Babble error mask
    static constexpr uint32_t OTG_FS_HCINTMSK3_FRMORM = 0x200; // Frame overrun mask
    static constexpr uint32_t OTG_FS_HCINTMSK3_DTERRM = 0x400; // Data toggle error mask

    static constexpr uint32_t OTG_FS_HCTSIZ3_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> OTG_FS_HCTSIZ3_XFRSIZ; // Transfer size
    typedef bit_field_t<19, 0x3ff> OTG_FS_HCTSIZ3_PKTCNT; // Packet count
    typedef bit_field_t<29, 0x3> OTG_FS_HCTSIZ3_DPID; // Data PID


    static constexpr uint32_t OTG_FS_HCCHAR4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> OTG_FS_HCCHAR4_MPSIZ; // Maximum packet size
    typedef bit_field_t<11, 0xf> OTG_FS_HCCHAR4_EPNUM; // Endpoint number
    static constexpr uint32_t OTG_FS_HCCHAR4_EPDIR = 0x8000; // Endpoint direction
    static constexpr uint32_t OTG_FS_HCCHAR4_LSDEV = 0x20000; // Low-speed device
    typedef bit_field_t<18, 0x3> OTG_FS_HCCHAR4_EPTYP; // Endpoint type
    typedef bit_field_t<20, 0x3> OTG_FS_HCCHAR4_MCNT; // Multicount
    typedef bit_field_t<22, 0x7f> OTG_FS_HCCHAR4_DAD; // Device address
    static constexpr uint32_t OTG_FS_HCCHAR4_ODDFRM = 0x20000000; // Odd frame
    static constexpr uint32_t OTG_FS_HCCHAR4_CHDIS = 0x40000000; // Channel disable
    static constexpr uint32_t OTG_FS_HCCHAR4_CHENA = 0x80000000; // Channel enable


    static constexpr uint32_t OTG_FS_HCINT4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_HCINT4_XFRC = 0x1; // Transfer completed
    static constexpr uint32_t OTG_FS_HCINT4_CHH = 0x2; // Channel halted
    static constexpr uint32_t OTG_FS_HCINT4_STALL = 0x8; // STALL response received interrupt
    static constexpr uint32_t OTG_FS_HCINT4_NAK = 0x10; // NAK response received interrupt
    static constexpr uint32_t OTG_FS_HCINT4_ACK = 0x20; // ACK response received/transmitted interrupt
    static constexpr uint32_t OTG_FS_HCINT4_TXERR = 0x80; // Transaction error
    static constexpr uint32_t OTG_FS_HCINT4_BBERR = 0x100; // Babble error
    static constexpr uint32_t OTG_FS_HCINT4_FRMOR = 0x200; // Frame overrun
    static constexpr uint32_t OTG_FS_HCINT4_DTERR = 0x400; // Data toggle error

    static constexpr uint32_t OTG_FS_HCINTMSK4_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_HCINTMSK4_XFRCM = 0x1; // Transfer completed mask
    static constexpr uint32_t OTG_FS_HCINTMSK4_CHHM = 0x2; // Channel halted mask
    static constexpr uint32_t OTG_FS_HCINTMSK4_STALLM = 0x8; // STALL response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK4_NAKM = 0x10; // NAK response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK4_ACKM = 0x20; // ACK response received/transmitted interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK4_NYET = 0x40; // response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK4_TXERRM = 0x80; // Transaction error mask
    static constexpr uint32_t OTG_FS_HCINTMSK4_BBERRM = 0x100; // Babble error mask
    static constexpr uint32_t OTG_FS_HCINTMSK4_FRMORM = 0x200; // Frame overrun mask
    static constexpr uint32_t OTG_FS_HCINTMSK4_DTERRM = 0x400; // Data toggle error mask

    static constexpr uint32_t OTG_FS_HCTSIZ4_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> OTG_FS_HCTSIZ4_XFRSIZ; // Transfer size
    typedef bit_field_t<19, 0x3ff> OTG_FS_HCTSIZ4_PKTCNT; // Packet count
    typedef bit_field_t<29, 0x3> OTG_FS_HCTSIZ4_DPID; // Data PID


    static constexpr uint32_t OTG_FS_HCCHAR5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> OTG_FS_HCCHAR5_MPSIZ; // Maximum packet size
    typedef bit_field_t<11, 0xf> OTG_FS_HCCHAR5_EPNUM; // Endpoint number
    static constexpr uint32_t OTG_FS_HCCHAR5_EPDIR = 0x8000; // Endpoint direction
    static constexpr uint32_t OTG_FS_HCCHAR5_LSDEV = 0x20000; // Low-speed device
    typedef bit_field_t<18, 0x3> OTG_FS_HCCHAR5_EPTYP; // Endpoint type
    typedef bit_field_t<20, 0x3> OTG_FS_HCCHAR5_MCNT; // Multicount
    typedef bit_field_t<22, 0x7f> OTG_FS_HCCHAR5_DAD; // Device address
    static constexpr uint32_t OTG_FS_HCCHAR5_ODDFRM = 0x20000000; // Odd frame
    static constexpr uint32_t OTG_FS_HCCHAR5_CHDIS = 0x40000000; // Channel disable
    static constexpr uint32_t OTG_FS_HCCHAR5_CHENA = 0x80000000; // Channel enable


    static constexpr uint32_t OTG_FS_HCINT5_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_HCINT5_XFRC = 0x1; // Transfer completed
    static constexpr uint32_t OTG_FS_HCINT5_CHH = 0x2; // Channel halted
    static constexpr uint32_t OTG_FS_HCINT5_STALL = 0x8; // STALL response received interrupt
    static constexpr uint32_t OTG_FS_HCINT5_NAK = 0x10; // NAK response received interrupt
    static constexpr uint32_t OTG_FS_HCINT5_ACK = 0x20; // ACK response received/transmitted interrupt
    static constexpr uint32_t OTG_FS_HCINT5_TXERR = 0x80; // Transaction error
    static constexpr uint32_t OTG_FS_HCINT5_BBERR = 0x100; // Babble error
    static constexpr uint32_t OTG_FS_HCINT5_FRMOR = 0x200; // Frame overrun
    static constexpr uint32_t OTG_FS_HCINT5_DTERR = 0x400; // Data toggle error

    static constexpr uint32_t OTG_FS_HCINTMSK5_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_HCINTMSK5_XFRCM = 0x1; // Transfer completed mask
    static constexpr uint32_t OTG_FS_HCINTMSK5_CHHM = 0x2; // Channel halted mask
    static constexpr uint32_t OTG_FS_HCINTMSK5_STALLM = 0x8; // STALL response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK5_NAKM = 0x10; // NAK response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK5_ACKM = 0x20; // ACK response received/transmitted interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK5_NYET = 0x40; // response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK5_TXERRM = 0x80; // Transaction error mask
    static constexpr uint32_t OTG_FS_HCINTMSK5_BBERRM = 0x100; // Babble error mask
    static constexpr uint32_t OTG_FS_HCINTMSK5_FRMORM = 0x200; // Frame overrun mask
    static constexpr uint32_t OTG_FS_HCINTMSK5_DTERRM = 0x400; // Data toggle error mask

    static constexpr uint32_t OTG_FS_HCTSIZ5_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> OTG_FS_HCTSIZ5_XFRSIZ; // Transfer size
    typedef bit_field_t<19, 0x3ff> OTG_FS_HCTSIZ5_PKTCNT; // Packet count
    typedef bit_field_t<29, 0x3> OTG_FS_HCTSIZ5_DPID; // Data PID


    static constexpr uint32_t OTG_FS_HCCHAR6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> OTG_FS_HCCHAR6_MPSIZ; // Maximum packet size
    typedef bit_field_t<11, 0xf> OTG_FS_HCCHAR6_EPNUM; // Endpoint number
    static constexpr uint32_t OTG_FS_HCCHAR6_EPDIR = 0x8000; // Endpoint direction
    static constexpr uint32_t OTG_FS_HCCHAR6_LSDEV = 0x20000; // Low-speed device
    typedef bit_field_t<18, 0x3> OTG_FS_HCCHAR6_EPTYP; // Endpoint type
    typedef bit_field_t<20, 0x3> OTG_FS_HCCHAR6_MCNT; // Multicount
    typedef bit_field_t<22, 0x7f> OTG_FS_HCCHAR6_DAD; // Device address
    static constexpr uint32_t OTG_FS_HCCHAR6_ODDFRM = 0x20000000; // Odd frame
    static constexpr uint32_t OTG_FS_HCCHAR6_CHDIS = 0x40000000; // Channel disable
    static constexpr uint32_t OTG_FS_HCCHAR6_CHENA = 0x80000000; // Channel enable


    static constexpr uint32_t OTG_FS_HCINT6_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_HCINT6_XFRC = 0x1; // Transfer completed
    static constexpr uint32_t OTG_FS_HCINT6_CHH = 0x2; // Channel halted
    static constexpr uint32_t OTG_FS_HCINT6_STALL = 0x8; // STALL response received interrupt
    static constexpr uint32_t OTG_FS_HCINT6_NAK = 0x10; // NAK response received interrupt
    static constexpr uint32_t OTG_FS_HCINT6_ACK = 0x20; // ACK response received/transmitted interrupt
    static constexpr uint32_t OTG_FS_HCINT6_TXERR = 0x80; // Transaction error
    static constexpr uint32_t OTG_FS_HCINT6_BBERR = 0x100; // Babble error
    static constexpr uint32_t OTG_FS_HCINT6_FRMOR = 0x200; // Frame overrun
    static constexpr uint32_t OTG_FS_HCINT6_DTERR = 0x400; // Data toggle error

    static constexpr uint32_t OTG_FS_HCINTMSK6_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_HCINTMSK6_XFRCM = 0x1; // Transfer completed mask
    static constexpr uint32_t OTG_FS_HCINTMSK6_CHHM = 0x2; // Channel halted mask
    static constexpr uint32_t OTG_FS_HCINTMSK6_STALLM = 0x8; // STALL response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK6_NAKM = 0x10; // NAK response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK6_ACKM = 0x20; // ACK response received/transmitted interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK6_NYET = 0x40; // response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK6_TXERRM = 0x80; // Transaction error mask
    static constexpr uint32_t OTG_FS_HCINTMSK6_BBERRM = 0x100; // Babble error mask
    static constexpr uint32_t OTG_FS_HCINTMSK6_FRMORM = 0x200; // Frame overrun mask
    static constexpr uint32_t OTG_FS_HCINTMSK6_DTERRM = 0x400; // Data toggle error mask

    static constexpr uint32_t OTG_FS_HCTSIZ6_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> OTG_FS_HCTSIZ6_XFRSIZ; // Transfer size
    typedef bit_field_t<19, 0x3ff> OTG_FS_HCTSIZ6_PKTCNT; // Packet count
    typedef bit_field_t<29, 0x3> OTG_FS_HCTSIZ6_DPID; // Data PID


    static constexpr uint32_t OTG_FS_HCCHAR7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> OTG_FS_HCCHAR7_MPSIZ; // Maximum packet size
    typedef bit_field_t<11, 0xf> OTG_FS_HCCHAR7_EPNUM; // Endpoint number
    static constexpr uint32_t OTG_FS_HCCHAR7_EPDIR = 0x8000; // Endpoint direction
    static constexpr uint32_t OTG_FS_HCCHAR7_LSDEV = 0x20000; // Low-speed device
    typedef bit_field_t<18, 0x3> OTG_FS_HCCHAR7_EPTYP; // Endpoint type
    typedef bit_field_t<20, 0x3> OTG_FS_HCCHAR7_MCNT; // Multicount
    typedef bit_field_t<22, 0x7f> OTG_FS_HCCHAR7_DAD; // Device address
    static constexpr uint32_t OTG_FS_HCCHAR7_ODDFRM = 0x20000000; // Odd frame
    static constexpr uint32_t OTG_FS_HCCHAR7_CHDIS = 0x40000000; // Channel disable
    static constexpr uint32_t OTG_FS_HCCHAR7_CHENA = 0x80000000; // Channel enable


    static constexpr uint32_t OTG_FS_HCINT7_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_HCINT7_XFRC = 0x1; // Transfer completed
    static constexpr uint32_t OTG_FS_HCINT7_CHH = 0x2; // Channel halted
    static constexpr uint32_t OTG_FS_HCINT7_STALL = 0x8; // STALL response received interrupt
    static constexpr uint32_t OTG_FS_HCINT7_NAK = 0x10; // NAK response received interrupt
    static constexpr uint32_t OTG_FS_HCINT7_ACK = 0x20; // ACK response received/transmitted interrupt
    static constexpr uint32_t OTG_FS_HCINT7_TXERR = 0x80; // Transaction error
    static constexpr uint32_t OTG_FS_HCINT7_BBERR = 0x100; // Babble error
    static constexpr uint32_t OTG_FS_HCINT7_FRMOR = 0x200; // Frame overrun
    static constexpr uint32_t OTG_FS_HCINT7_DTERR = 0x400; // Data toggle error

    static constexpr uint32_t OTG_FS_HCINTMSK7_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_HCINTMSK7_XFRCM = 0x1; // Transfer completed mask
    static constexpr uint32_t OTG_FS_HCINTMSK7_CHHM = 0x2; // Channel halted mask
    static constexpr uint32_t OTG_FS_HCINTMSK7_STALLM = 0x8; // STALL response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK7_NAKM = 0x10; // NAK response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK7_ACKM = 0x20; // ACK response received/transmitted interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK7_NYET = 0x40; // response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK7_TXERRM = 0x80; // Transaction error mask
    static constexpr uint32_t OTG_FS_HCINTMSK7_BBERRM = 0x100; // Babble error mask
    static constexpr uint32_t OTG_FS_HCINTMSK7_FRMORM = 0x200; // Frame overrun mask
    static constexpr uint32_t OTG_FS_HCINTMSK7_DTERRM = 0x400; // Data toggle error mask

    static constexpr uint32_t OTG_FS_HCTSIZ7_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> OTG_FS_HCTSIZ7_XFRSIZ; // Transfer size
    typedef bit_field_t<19, 0x3ff> OTG_FS_HCTSIZ7_PKTCNT; // Packet count
    typedef bit_field_t<29, 0x3> OTG_FS_HCTSIZ7_DPID; // Data PID

    static constexpr uint32_t OTG_FS_HCCHAR8_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> OTG_FS_HCCHAR8_MPSIZ; // Maximum packet size
    typedef bit_field_t<11, 0xf> OTG_FS_HCCHAR8_EPNUM; // Endpoint number
    static constexpr uint32_t OTG_FS_HCCHAR8_EPDIR = 0x8000; // Endpoint direction
    static constexpr uint32_t OTG_FS_HCCHAR8_LSDEV = 0x20000; // Low-speed device
    typedef bit_field_t<18, 0x3> OTG_FS_HCCHAR8_EPTYP; // Endpoint type
    typedef bit_field_t<20, 0x3> OTG_FS_HCCHAR8_MCNT; // Multicount
    typedef bit_field_t<22, 0x7f> OTG_FS_HCCHAR8_DAD; // Device address
    static constexpr uint32_t OTG_FS_HCCHAR8_ODDFRM = 0x20000000; // Odd frame
    static constexpr uint32_t OTG_FS_HCCHAR8_CHDIS = 0x40000000; // Channel disable
    static constexpr uint32_t OTG_FS_HCCHAR8_CHENA = 0x80000000; // Channel enable

    static constexpr uint32_t OTG_FS_HCINT8_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_HCINT8_XFRC = 0x1; // Transfer completed
    static constexpr uint32_t OTG_FS_HCINT8_CHH = 0x2; // Channel halted
    static constexpr uint32_t OTG_FS_HCINT8_STALL = 0x8; // STALL response received interrupt
    static constexpr uint32_t OTG_FS_HCINT8_NAK = 0x10; // NAK response received interrupt
    static constexpr uint32_t OTG_FS_HCINT8_ACK = 0x20; // ACK response received/transmitted interrupt
    static constexpr uint32_t OTG_FS_HCINT8_TXERR = 0x80; // Transaction error
    static constexpr uint32_t OTG_FS_HCINT8_BBERR = 0x100; // Babble error
    static constexpr uint32_t OTG_FS_HCINT8_FRMOR = 0x200; // Frame overrun
    static constexpr uint32_t OTG_FS_HCINT8_DTERR = 0x400; // Data toggle error

    static constexpr uint32_t OTG_FS_HCINTMSK8_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_HCINTMSK8_XFRCM = 0x1; // Transfer completed mask
    static constexpr uint32_t OTG_FS_HCINTMSK8_CHHM = 0x2; // Channel halted mask
    static constexpr uint32_t OTG_FS_HCINTMSK8_STALLM = 0x8; // STALL response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK8_NAKM = 0x10; // NAK response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK8_ACKM = 0x20; // ACK response received/transmitted interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK8_NYET = 0x40; // response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK8_TXERRM = 0x80; // Transaction error
    static constexpr uint32_t OTG_FS_HCINTMSK8_BBERRM = 0x100; // Babble error mask
    static constexpr uint32_t OTG_FS_HCINTMSK8_FRMORM = 0x200; // Frame overrun mask
    static constexpr uint32_t OTG_FS_HCINTMSK8_DTERRM = 0x400; // Data toggle error mask

    static constexpr uint32_t OTG_FS_HCTSIZ8_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> OTG_FS_HCTSIZ8_XFRSIZ; // Transfer size
    typedef bit_field_t<19, 0x3ff> OTG_FS_HCTSIZ8_PKTCNT; // Packet count
    typedef bit_field_t<29, 0x3> OTG_FS_HCTSIZ8_DPID; // Data PID

    static constexpr uint32_t OTG_FS_HCCHAR9_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> OTG_FS_HCCHAR9_MPSIZ; // Maximum packet size
    typedef bit_field_t<11, 0xf> OTG_FS_HCCHAR9_EPNUM; // Endpoint number
    static constexpr uint32_t OTG_FS_HCCHAR9_EPDIR = 0x8000; // Endpoint direction
    static constexpr uint32_t OTG_FS_HCCHAR9_LSDEV = 0x20000; // Low-speed device
    typedef bit_field_t<18, 0x3> OTG_FS_HCCHAR9_EPTYP; // Endpoint type
    typedef bit_field_t<20, 0x3> OTG_FS_HCCHAR9_MCNT; // Multicount
    typedef bit_field_t<22, 0x7f> OTG_FS_HCCHAR9_DAD; // Device address
    static constexpr uint32_t OTG_FS_HCCHAR9_ODDFRM = 0x20000000; // Odd frame
    static constexpr uint32_t OTG_FS_HCCHAR9_CHDIS = 0x40000000; // Channel disable
    static constexpr uint32_t OTG_FS_HCCHAR9_CHENA = 0x80000000; // Channel enable

    static constexpr uint32_t OTG_FS_HCINT9_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_HCINT9_XFRC = 0x1; // Transfer completed
    static constexpr uint32_t OTG_FS_HCINT9_CHH = 0x2; // Channel halted
    static constexpr uint32_t OTG_FS_HCINT9_STALL = 0x8; // STALL response received interrupt
    static constexpr uint32_t OTG_FS_HCINT9_NAK = 0x10; // NAK response received interrupt
    static constexpr uint32_t OTG_FS_HCINT9_ACK = 0x20; // ACK response received/transmitted interrupt
    static constexpr uint32_t OTG_FS_HCINT9_TXERR = 0x80; // Transaction error
    static constexpr uint32_t OTG_FS_HCINT9_BBERR = 0x100; // Babble error
    static constexpr uint32_t OTG_FS_HCINT9_FRMOR = 0x200; // Frame overrun
    static constexpr uint32_t OTG_FS_HCINT9_DTERR = 0x400; // Data toggle error

    static constexpr uint32_t OTG_FS_HCINTMSK9_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_HCINTMSK9_XFRCM = 0x1; // Transfer completed mask
    static constexpr uint32_t OTG_FS_HCINTMSK9_CHHM = 0x2; // Channel halted mask
    static constexpr uint32_t OTG_FS_HCINTMSK9_STALLM = 0x8; // STALL response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK9_NAKM = 0x10; // NAK response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK9_ACKM = 0x20; // ACK response received/transmitted interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK9_NYET = 0x40; // response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK9_TXERRM = 0x80; // Transaction error mask
    static constexpr uint32_t OTG_FS_HCINTMSK9_BBERRM = 0x100; // Babble error mask
    static constexpr uint32_t OTG_FS_HCINTMSK9_FRMORM = 0x200; // Frame overrun mask
    static constexpr uint32_t OTG_FS_HCINTMSK9_DTERRM = 0x400; // Data toggle error mask

    static constexpr uint32_t OTG_FS_HCTSIZ9_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> OTG_FS_HCTSIZ9_XFRSIZ; // Transfer size
    typedef bit_field_t<19, 0x3ff> OTG_FS_HCTSIZ9_PKTCNT; // Packet count
    typedef bit_field_t<29, 0x3> OTG_FS_HCTSIZ9_DPID; // Data PID

    static constexpr uint32_t OTG_FS_HCCHAR10_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> OTG_FS_HCCHAR10_MPSIZ; // Maximum packet size
    typedef bit_field_t<11, 0xf> OTG_FS_HCCHAR10_EPNUM; // Endpoint number
    static constexpr uint32_t OTG_FS_HCCHAR10_EPDIR = 0x8000; // Endpoint direction
    static constexpr uint32_t OTG_FS_HCCHAR10_LSDEV = 0x20000; // Low-speed device
    typedef bit_field_t<18, 0x3> OTG_FS_HCCHAR10_EPTYP; // Endpoint type
    typedef bit_field_t<20, 0x3> OTG_FS_HCCHAR10_MCNT; // Multicount
    typedef bit_field_t<22, 0x7f> OTG_FS_HCCHAR10_DAD; // Device address
    static constexpr uint32_t OTG_FS_HCCHAR10_ODDFRM = 0x20000000; // Odd frame
    static constexpr uint32_t OTG_FS_HCCHAR10_CHDIS = 0x40000000; // Channel disable
    static constexpr uint32_t OTG_FS_HCCHAR10_CHENA = 0x80000000; // Channel enable

    static constexpr uint32_t OTG_FS_HCINT10_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_HCINT10_XFRC = 0x1; // Transfer completed
    static constexpr uint32_t OTG_FS_HCINT10_CHH = 0x2; // Channel halted
    static constexpr uint32_t OTG_FS_HCINT10_STALL = 0x8; // STALL response received interrupt
    static constexpr uint32_t OTG_FS_HCINT10_NAK = 0x10; // NAK response received interrupt
    static constexpr uint32_t OTG_FS_HCINT10_ACK = 0x20; // ACK response received/transmitted interrupt
    static constexpr uint32_t OTG_FS_HCINT10_TXERR = 0x80; // Transaction error
    static constexpr uint32_t OTG_FS_HCINT10_BBERR = 0x100; // Babble error
    static constexpr uint32_t OTG_FS_HCINT10_FRMOR = 0x200; // Frame overrun
    static constexpr uint32_t OTG_FS_HCINT10_DTERR = 0x400; // Data toggle error

    static constexpr uint32_t OTG_FS_HCINTMSK10_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_HCINTMSK10_XFRCM = 0x1; // Transfer completed mask
    static constexpr uint32_t OTG_FS_HCINTMSK10_CHHM = 0x2; // Channel halted mask
    static constexpr uint32_t OTG_FS_HCINTMSK10_STALLM = 0x8; // STALL response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK10_NAKM = 0x10; // NAK response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK10_ACKM = 0x20; // ACK response received/transmitted interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK10_NYET = 0x40; // response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK10_TXERRM = 0x80; // Transaction error mask
    static constexpr uint32_t OTG_FS_HCINTMSK10_BBERRM = 0x100; // Babble error mask
    static constexpr uint32_t OTG_FS_HCINTMSK10_FRMORM = 0x200; // Frame overrun mask
    static constexpr uint32_t OTG_FS_HCINTMSK10_DTERRM = 0x400; // Data toggle error mask

    static constexpr uint32_t OTG_FS_HCTSIZ10_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> OTG_FS_HCTSIZ10_XFRSIZ; // Transfer size
    typedef bit_field_t<19, 0x3ff> OTG_FS_HCTSIZ10_PKTCNT; // Packet count
    typedef bit_field_t<29, 0x3> OTG_FS_HCTSIZ10_DPID; // Data PID

    static constexpr uint32_t OTG_FS_HCCHAR11_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ff> OTG_FS_HCCHAR11_MPSIZ; // Maximum packet size
    typedef bit_field_t<11, 0xf> OTG_FS_HCCHAR11_EPNUM; // Endpoint number
    static constexpr uint32_t OTG_FS_HCCHAR11_EPDIR = 0x8000; // Endpoint direction
    static constexpr uint32_t OTG_FS_HCCHAR11_LSDEV = 0x20000; // Low-speed device
    typedef bit_field_t<18, 0x3> OTG_FS_HCCHAR11_EPTYP; // Endpoint type
    typedef bit_field_t<20, 0x3> OTG_FS_HCCHAR11_MCNT; // Multicount
    typedef bit_field_t<22, 0x7f> OTG_FS_HCCHAR11_DAD; // Device address
    static constexpr uint32_t OTG_FS_HCCHAR11_ODDFRM = 0x20000000; // Odd frame
    static constexpr uint32_t OTG_FS_HCCHAR11_CHDIS = 0x40000000; // Channel disable
    static constexpr uint32_t OTG_FS_HCCHAR11_CHENA = 0x80000000; // Channel enable

    static constexpr uint32_t OTG_FS_HCINT11_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_HCINT11_XFRC = 0x1; // Transfer completed
    static constexpr uint32_t OTG_FS_HCINT11_CHH = 0x2; // Channel halted
    static constexpr uint32_t OTG_FS_HCINT11_STALL = 0x8; // STALL response received interrupt
    static constexpr uint32_t OTG_FS_HCINT11_NAK = 0x10; // NAK response received interrupt
    static constexpr uint32_t OTG_FS_HCINT11_ACK = 0x20; // ACK response received/transmitted interrupt
    static constexpr uint32_t OTG_FS_HCINT11_TXERR = 0x80; // Transaction error
    static constexpr uint32_t OTG_FS_HCINT11_BBERR = 0x100; // Babble error
    static constexpr uint32_t OTG_FS_HCINT11_FRMOR = 0x200; // Frame overrun
    static constexpr uint32_t OTG_FS_HCINT11_DTERR = 0x400; // Data toggle error

    static constexpr uint32_t OTG_FS_HCINTMSK11_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_HCINTMSK11_XFRCM = 0x1; // Transfer completed mask
    static constexpr uint32_t OTG_FS_HCINTMSK11_CHHM = 0x2; // Channel halted mask
    static constexpr uint32_t OTG_FS_HCINTMSK11_STALLM = 0x8; // STALL response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK11_NAKM = 0x10; // NAK response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK11_ACKM = 0x20; // ACK response received/transmitted interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK11_NYET = 0x40; // response received interrupt mask
    static constexpr uint32_t OTG_FS_HCINTMSK11_TXERRM = 0x80; // Transaction error mask
    static constexpr uint32_t OTG_FS_HCINTMSK11_BBERRM = 0x100; // Babble error mask
    static constexpr uint32_t OTG_FS_HCINTMSK11_FRMORM = 0x200; // Frame overrun mask
    static constexpr uint32_t OTG_FS_HCINTMSK11_DTERRM = 0x400; // Data toggle error mask

    static constexpr uint32_t OTG_FS_HCTSIZ11_RESET_VALUE = 0x0; // Reset value
    typedef bit_field_t<0, 0x7ffff> OTG_FS_HCTSIZ11_XFRSIZ; // Transfer size
    typedef bit_field_t<19, 0x3ff> OTG_FS_HCTSIZ11_PKTCNT; // Packet count
    typedef bit_field_t<29, 0x3> OTG_FS_HCTSIZ11_DPID; // Data PID
};

// OTG_FS_PWRCLK: USB on the go full speed

struct stm32f722_otg_fs_pwrclk_t
{
    volatile uint32_t OTG_FS_PCGCCTL; // OTG_FS power and clock gating control register (OTG_FS_PCGCCTL)

    static constexpr uint32_t OTG_FS_PCGCCTL_RESET_VALUE = 0x0; // Reset value
    static constexpr uint32_t OTG_FS_PCGCCTL_STPPCLK = 0x1; // Stop PHY clock
    static constexpr uint32_t OTG_FS_PCGCCTL_GATEHCLK = 0x2; // Gate HCLK
    static constexpr uint32_t OTG_FS_PCGCCTL_PHYSUSP = 0x10; // PHY Suspended
};

template<>
struct peripheral_t<STM32F722, OTG_FS_DEVICE>
{
    using T = stm32f722_otg_fs_device_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, OTG_FS_DEVICE>
{
    using T = stm32f722_otg_fs_device_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, OTG_FS_DEVICE>
{
    using T = stm32f722_otg_fs_device_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, OTG_FS_DEVICE>
{
    using T = stm32f722_otg_fs_device_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, OTG_FS_DEVICE>
{
    using T = stm32f722_otg_fs_device_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, OTG_FS_DEVICE>
{
    using T = stm32f745_otg_fs_device_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, OTG_FS_DEVICE>
{
    using T = stm32f745_otg_fs_device_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, OTG_FS_DEVICE>
{
    using T = stm32f745_otg_fs_device_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, OTG_FS_DEVICE>
{
    using T = stm32f745_otg_fs_device_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, OTG_FS_DEVICE>
{
    using T = stm32f745_otg_fs_device_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, OTG_FS_DEVICE>
{
    using T = stm32f745_otg_fs_device_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, OTG_FS_DEVICE>
{
    using T = stm32f745_otg_fs_device_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, OTG_FS_DEVICE>
{
    using T = stm32f745_otg_fs_device_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, OTG_FS_DEVICE>
{
    using T = stm32f745_otg_fs_device_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, OTG_FS_DEVICE>
{
    using T = stm32f745_otg_fs_device_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, OTG_FS_DEVICE>
{
    using T = stm32f745_otg_fs_device_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F722, OTG_FS_GLOBAL>
{
    using T = stm32f722_otg_fs_global_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, OTG_FS_GLOBAL>
{
    using T = stm32f722_otg_fs_global_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, OTG_FS_GLOBAL>
{
    using T = stm32f722_otg_fs_global_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, OTG_FS_GLOBAL>
{
    using T = stm32f722_otg_fs_global_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, OTG_FS_GLOBAL>
{
    using T = stm32f722_otg_fs_global_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, OTG_FS_GLOBAL>
{
    using T = stm32f745_otg_fs_global_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, OTG_FS_GLOBAL>
{
    using T = stm32f745_otg_fs_global_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, OTG_FS_GLOBAL>
{
    using T = stm32f745_otg_fs_global_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, OTG_FS_GLOBAL>
{
    using T = stm32f745_otg_fs_global_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, OTG_FS_GLOBAL>
{
    using T = stm32f745_otg_fs_global_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, OTG_FS_GLOBAL>
{
    using T = stm32f745_otg_fs_global_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, OTG_FS_GLOBAL>
{
    using T = stm32f745_otg_fs_global_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, OTG_FS_GLOBAL>
{
    using T = stm32f745_otg_fs_global_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, OTG_FS_GLOBAL>
{
    using T = stm32f745_otg_fs_global_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, OTG_FS_GLOBAL>
{
    using T = stm32f745_otg_fs_global_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, OTG_FS_GLOBAL>
{
    using T = stm32f745_otg_fs_global_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F722, OTG_FS_HOST>
{
    using T = stm32f722_otg_fs_host_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, OTG_FS_HOST>
{
    using T = stm32f722_otg_fs_host_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, OTG_FS_HOST>
{
    using T = stm32f722_otg_fs_host_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, OTG_FS_HOST>
{
    using T = stm32f722_otg_fs_host_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, OTG_FS_HOST>
{
    using T = stm32f722_otg_fs_host_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, OTG_FS_HOST>
{
    using T = stm32f745_otg_fs_host_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, OTG_FS_HOST>
{
    using T = stm32f745_otg_fs_host_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, OTG_FS_HOST>
{
    using T = stm32f745_otg_fs_host_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, OTG_FS_HOST>
{
    using T = stm32f745_otg_fs_host_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, OTG_FS_HOST>
{
    using T = stm32f745_otg_fs_host_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, OTG_FS_HOST>
{
    using T = stm32f745_otg_fs_host_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, OTG_FS_HOST>
{
    using T = stm32f745_otg_fs_host_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, OTG_FS_HOST>
{
    using T = stm32f745_otg_fs_host_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, OTG_FS_HOST>
{
    using T = stm32f745_otg_fs_host_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, OTG_FS_HOST>
{
    using T = stm32f745_otg_fs_host_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, OTG_FS_HOST>
{
    using T = stm32f745_otg_fs_host_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F722, OTG_FS_PWRCLK>
{
    using T = stm32f722_otg_fs_pwrclk_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F723, OTG_FS_PWRCLK>
{
    using T = stm32f722_otg_fs_pwrclk_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F730, OTG_FS_PWRCLK>
{
    using T = stm32f722_otg_fs_pwrclk_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F732, OTG_FS_PWRCLK>
{
    using T = stm32f722_otg_fs_pwrclk_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F733, OTG_FS_PWRCLK>
{
    using T = stm32f722_otg_fs_pwrclk_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F745, OTG_FS_PWRCLK>
{
    using T = stm32f722_otg_fs_pwrclk_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F746, OTG_FS_PWRCLK>
{
    using T = stm32f722_otg_fs_pwrclk_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F750x, OTG_FS_PWRCLK>
{
    using T = stm32f722_otg_fs_pwrclk_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F756, OTG_FS_PWRCLK>
{
    using T = stm32f722_otg_fs_pwrclk_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F765, OTG_FS_PWRCLK>
{
    using T = stm32f722_otg_fs_pwrclk_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F767, OTG_FS_PWRCLK>
{
    using T = stm32f722_otg_fs_pwrclk_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F768, OTG_FS_PWRCLK>
{
    using T = stm32f722_otg_fs_pwrclk_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F769, OTG_FS_PWRCLK>
{
    using T = stm32f722_otg_fs_pwrclk_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F777, OTG_FS_PWRCLK>
{
    using T = stm32f722_otg_fs_pwrclk_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F778, OTG_FS_PWRCLK>
{
    using T = stm32f722_otg_fs_pwrclk_t;
    static T& V;
};

template<>
struct peripheral_t<STM32F779, OTG_FS_PWRCLK>
{
    using T = stm32f722_otg_fs_pwrclk_t;
    static T& V;
};

using otg_fs_device_t = peripheral_t<svd, OTG_FS_DEVICE>;
using otg_fs_global_t = peripheral_t<svd, OTG_FS_GLOBAL>;
using otg_fs_host_t = peripheral_t<svd, OTG_FS_HOST>;
using otg_fs_pwrclk_t = peripheral_t<svd, OTG_FS_PWRCLK>;

template<int INST> struct usb_otg_fs_traits {};
